// -*- mode: c; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; coding: utf-8-unix -*-
// Copyright (c) 2013 RALOVICH, Kristóf

// utf16 + gcc
// http://gcc.gnu.org/bugzilla/show_bug.cgi?id=56086
// https://blogs.oracle.com/ezannoni/entry/utf16_and_utf32_support_in_gcc

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <wchar.h>
#include <uchar.h>

#include "GdiPlusFlat.h"
#include <glib.h>

//typedef char16_t WCHAR;
static int status_counter = 0;

#define CHECK_STATUS(x) do {                                            \
    if (status != Ok) {                                                 \
      printf ("testprops.c:%d: status[%d] == %d: %s!\n", __LINE__, status_counter++, status, StatusToStr(status)); \
      if(x) { exit(-1); }                                               \
    } else {                                                            \
      /*printf ("testprops.c:%d: status[%d] == Ok\n", __LINE__, status_counter++);*/                  \
    }                                                                   \
  } while (0)

#include "testprops.h"

const char*
StatusToStr(const GpStatus status)
{
  switch(status)
  {
#define CASE_GP(x) case x: return #x
    CASE_GP(Ok);
    CASE_GP(GenericError);
    CASE_GP(InvalidParameter);
    CASE_GP(OutOfMemory);
    CASE_GP(ObjectBusy);
    CASE_GP(InsufficientBuffer);
    CASE_GP(NotImplemented);
    CASE_GP(Win32Error);
    CASE_GP(WrongState);
    CASE_GP(Aborted);
    CASE_GP(FileNotFound);
    CASE_GP(ValueOverflow);
    CASE_GP(AccessDenied);
    CASE_GP(UnknownImageFormat);
    CASE_GP(FontFamilyNotFound);
    CASE_GP(FontStyleNotFound);
    CASE_GP(NotTrueTypeFont);
    CASE_GP(UnsupportedGdiplusVersion);
    CASE_GP(GdiplusNotInitialized);
    CASE_GP(PropertyNotFound);
    CASE_GP(PropertyNotSupported);
#undef CASE_GP
  default: return "unknown_GpStatus";
    }
}

WCHAR*
utf8_to_WCHAR(const char* u)
{
  return g_utf8_to_utf16(u, -1, NULL, NULL, NULL);
}


char* WCHAR_to_utf8(const WCHAR* w)
{
  return g_utf16_to_utf8(w, -1, NULL, NULL, NULL);
}


int
GetEncoderClsid(const WCHAR* format, CLSID* pClsid)
{
  UINT  num = 0;          // number of image encoders
  UINT  size = 0;         // size of the image encoder array in bytes

  ImageCodecInfo* pImageCodecInfo = NULL;

  GdipGetImageEncodersSize(&num, &size);
  if(size == 0)
    return -1;  // Failure

  pImageCodecInfo = (ImageCodecInfo*)(malloc(size));
  if(pImageCodecInfo == NULL)
    return -1;  // Failure

  GdipGetImageEncoders(num, size, pImageCodecInfo);

  for(UINT j = 0; j < num; ++j)
  {
#ifdef _WIN32
    if( wcscmp(pImageCodecInfo[j].MimeType, format) == 0 )
#else
      char* u1=WCHAR_to_utf8(pImageCodecInfo[j].MimeType);
    char* u2=WCHAR_to_utf8(format);
    if(g_utf8_collate(u1, u2)==0)
#endif
    {
      *pClsid = pImageCodecInfo[j].Clsid;
      free(u2);
      free(u1);
      free(pImageCodecInfo);
      return j;  // Success
    }
    free(u2);
    free(u1);
  }

  free(pImageCodecInfo);
//#endif
  return -1;  // Failure
}


GpStatus
test1(const char16_t* filename, int propCnt)
{
  GpStatus status = Ok;
  GpBitmap *nativeImage = NULL;
  UINT numProps;
  UINT totalBufferSize;
  UINT numProperties;
  PropertyItem* pAllItems = NULL;
  UINT j = 0;
  char* fn=0;

  status = GdipLoadImageFromFile(filename, &nativeImage);
  CHECK_STATUS(1);
  fn=WCHAR_to_utf8(filename);
  printf("GdipLoadImageFromFile: %s OK\n", fn);
  free(fn);

  status = GdipGetPropertyCount(nativeImage, &numProps);
  CHECK_STATUS(1);
  printf("GdipGetPropertyCount: numProps=%d\n", (int)numProps);

  status = (propCnt == (int)numProps) ? Ok : PropertyNotFound;
  CHECK_STATUS(0);

  status = GdipGetPropertySize(nativeImage, &totalBufferSize, &numProperties);
  CHECK_STATUS(1);

  pAllItems = (PropertyItem*)malloc(totalBufferSize);
  status = GdipGetAllPropertyItems(nativeImage, totalBufferSize, numProperties, pAllItems);
  CHECK_STATUS(1);
  for(j = 0; j < numProperties; ++j)
  {
    printf("%x\n", pAllItems[j].id);
  }
  free(pAllItems);



  status = GdipDisposeImage(nativeImage);

  return status;
}

GpStatus
test2(const char16_t* filename, const char16_t* filename2, int propCnt)
{
  GpStatus status = Ok;
  GpBitmap *nativeImage = NULL;

  UINT numProps;
  PROPID* propIDs = NULL;
  UINT j = 0;
  UINT size = 0;
  PropertyItem* pi = NULL;
  CLSID  clsid;

  char* fn=WCHAR_to_utf8(filename);
  printf("\nloading: %s\n", fn);
  free(fn);
  status = GdipLoadImageFromFile(filename, &nativeImage);
  CHECK_STATUS(1);

  status = GdipGetPropertyCount(nativeImage, &numProps);
  CHECK_STATUS(1);
  printf("GdipGetPropertyCount: numProps=%d\n", (int)numProps);

  propIDs = malloc( sizeof(PROPID) * numProps);

  status = GdipGetPropertyIdList(nativeImage, numProps, propIDs);
  CHECK_STATUS(1);

  for(j = 0; j < numProps; ++j)
  {
    if(propIDs[j] == PropertyTagGpsLongitudeRef)
      return Aborted;

    status = GdipGetPropertyItemSize(nativeImage, propIDs[j], &size);
    CHECK_STATUS(1);

    pi = malloc(size);

    status = GdipGetPropertyItem(nativeImage, propIDs[j], size, pi);
    CHECK_STATUS(1);
    //printf("%03d len=%d typ=%s %s ", j, (int)pi->length,
    //       property_tag_type_to_str(pi->type), property_type_to_str(pi->id));
    //if(pi->type == PropertyTagTypeASCII) printf("%s\n", (char*)pi->value);
    //else if(pi->type == PropertyTagTypeRational) printf("%lf\n", *((double*)pi->value));
    //else printf("\n");

    free(pi);
  }
  free(propIDs);
  const UINT firstNumProps = numProps;
  printf("listing existing props OK\n");


  pi = malloc(sizeof(PropertyItem));
  pi->id = PropertyTagGpsLongitudeRef;
  pi->length = 2;
  pi->type = PropertyTagTypeASCII;
  pi->value = malloc(pi->length);
  char* str = pi->value;
  str[0] = 'W';
  str[1] = '\0';
  status = GdipSetPropertyItem(nativeImage, pi);
  CHECK_STATUS(1);
  free(pi->value);
  free(pi);
  printf("adding new prop OK\n");

  status = GdipGetPropertyCount(nativeImage, &numProps);
  CHECK_STATUS(1);
  printf("load: numProps=%d\n", (int)numProps);
  if(firstNumProps+1 != numProps)
    return WrongState;

  /* saving exif tags doesn't work
   * http://www.sentex.net/~mwandel/jhead/
   * ./contrib/examples/write-exif.c:11: * libjpeg (included with the exif command-line tool source code) would
   * ./contrib/examples/cam_features.c:27:#include "libjpeg/jpeg-data.h"
   * ./contrib/examples/cam_features.c:79:    //write the Exif data to a jpeg file
   * ./contrib/examples/cam_features.c:80:    pData = jpeg_data_new_from_file (FILENAME);  //input data
   * ./contrib/examples/cam_features.c:86:    printf("Saving EXIF data to jpeg file\n");
   * ./contrib/examples/cam_features.c:87:    jpeg_data_set_exif_data (pData, pEd);
   * ./contrib/examples/cam_features.c:89:    jpeg_data_save_file(pData, "foobar2.jpg");
   */
  int enc = GenericError;
  enc = GetEncoderClsid(u"image/jpeg", &clsid);
  if(enc<0) return NotImplemented;
  status = GdipSaveImageToFile(nativeImage, filename2, &clsid, NULL);
  CHECK_STATUS(1);
  fn=WCHAR_to_utf8(filename2);
  printf("saving to %s OK\n", fn);
  free(fn);

  status = GdipDisposeImage(nativeImage);
  CHECK_STATUS(1);


  status = test1(filename2, 12/*firstNumProps+1*/);

  return status;
}

//               9000-9214  A20B-A217  A300-A302       A401-A40C
// gps IFD tags   00-1E


GpStatus
test3()
{
  GpStatus status = Ok;
  return status;
}

int
main (int argc, char **argv)
{
  GdiplusStartupInput gdiplusStartupInput;
  ULONG_PTR gdiplusToken;
  GpStatus status = 0;

  status = GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
  CHECK_STATUS(1);


  printf("%d\n", (int)sizeof(wchar_t));
  printf("%d\n", (int)sizeof(WCHAR));
  printf("%d\n", (int)sizeof(char16_t));
  printf("%d\n", (int)sizeof(char32_t));

  /* read .jpg verify existing EXIF tags */
  printf("\n\n====== Starting test1 ======\n");
  status = test1(u"2.jpg", 47);
  CHECK_STATUS(1);
  printf("====== test1 ALL OK ======\n\n\n");

  /* read .jpg, add new EXIF tags, verify them afterwards */
  printf("\n\n====== Starting test2 ======\n");
  status = test2(u"2.jpg", u"2_testsave.jpg", 47);
  CHECK_STATUS(0);
  printf("====== test2 ALL OK ======\n\n\n");

  /* create image in memory, add exif tags, save as jpg, load
   * separately, verify tags afterwards */
  printf("\n\n====== Starting test3 ======\n");
  status = test3();
  CHECK_STATUS(1);
  printf("====== test3 ALL OK ======\n\n\n");

  GdiplusShutdown(gdiplusToken);
  return 0;
}
