/*
 * jpegcodec.h : Contains function declarations for encoding decoding jpeg images
 *
 * Authors:
 *  	Sanjay Gupta (gsanjay@novell.com)
 *      Vladimir Vukicevic (vladimir@pobox.com)
 *
 * Copyright (C) 2003-2004, 2007 Novell, Inc (http://www.novell.com)
 */

#ifndef _JPEGCODEC_H
#define _JPEGCODEC_H

#include "bitmap-private.h"
#include "bmpcodec.h"

GpStatus gdip_load_jpeg_image_from_file (FILE *fp, const char *filename, GpImage **image) GDIP_INTERNAL;

GpStatus gdip_load_jpeg_image_from_stream_delegate (dstream_t *loader, GpImage **image) GDIP_INTERNAL;

GpStatus gdip_save_jpeg_image_to_file (FILE *fp, GpImage *image, GDIPCONST EncoderParameters *params) GDIP_INTERNAL;
GpStatus gdip_save_jpeg_image_to_file2 (const char* filename, GpImage *image, GDIPCONST EncoderParameters *params) GDIP_INTERNAL;

GpStatus gdip_save_jpeg_image_to_stream_delegate (PutBytesDelegate putBytesFunc, GpImage *image, 
	GDIPCONST EncoderParameters *params) GDIP_INTERNAL;

ImageCodecInfo *gdip_getcodecinfo_jpeg () GDIP_INTERNAL;

UINT gdip_get_encoder_parameter_list_size_jpeg () GDIP_INTERNAL;
GpStatus gdip_fill_encoder_parameter_list_jpeg (EncoderParameters *eps, UINT size) GDIP_INTERNAL;

#endif /* _JPEGCODEC_H */
