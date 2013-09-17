// -*- mode: c; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; coding: utf-8-unix -*-
// Copyright (c) 2013 RALOVICH, Kristóf


#pragma once

#define ENUMERATE1(id) ENUMERATE(id, #id)
#define ENUMERATE_LIST                          \
  ENUMERATE1(PropertyTagExifIFD)                \
  ENUMERATE1(PropertyTagGpsIFD)                 \
  ENUMERATE1(PropertyTagNewSubfileType)         \
  ENUMERATE1(PropertyTagSubfileType)            \
  ENUMERATE1(PropertyTagImageWidth)             \
  ENUMERATE1(PropertyTagImageHeight)            \
  ENUMERATE1(PropertyTagBitsPerSample)          \
  ENUMERATE1(PropertyTagCompression)            \
  ENUMERATE1(PropertyTagPhotometricInterp)      \
  ENUMERATE1(PropertyTagThreshHolding)          \
  ENUMERATE1(PropertyTagCellWidth)              \
  ENUMERATE1(PropertyTagCellHeight)             \
  ENUMERATE1(PropertyTagFillOrder)              \
  ENUMERATE1(PropertyTagDocumentName)           \
  ENUMERATE1(PropertyTagImageDescription)       \
  ENUMERATE1(PropertyTagEquipMake)              \
  ENUMERATE1(PropertyTagEquipModel)             \
  ENUMERATE1(PropertyTagStripOffsets)           \
  ENUMERATE1(PropertyTagOrientation)            \
  ENUMERATE1(PropertyTagSamplesPerPixel)        \
  ENUMERATE1(PropertyTagRowsPerStrip)           \
  ENUMERATE1(PropertyTagStripBytesCount)        \
  ENUMERATE1(PropertyTagMinSampleValue)         \
  ENUMERATE1(PropertyTagMaxSampleValue)         \
  ENUMERATE1(PropertyTagXResolution)            \
  ENUMERATE1(PropertyTagYResolution)            \
  ENUMERATE1(PropertyTagPlanarConfig)           \
  ENUMERATE1(PropertyTagPageName)               \
  ENUMERATE1(PropertyTagXPosition)              \
  ENUMERATE1(PropertyTagYPosition)              \
  ENUMERATE1(PropertyTagFreeOffset)             \
  ENUMERATE1(PropertyTagFreeByteCounts)         \
  ENUMERATE1(PropertyTagGrayResponseUnit)       \
  ENUMERATE1(PropertyTagGrayResponseCurve)      \
  ENUMERATE1(PropertyTagT4Option)               \
  ENUMERATE1(PropertyTagT6Option)               \
  ENUMERATE1(PropertyTagResolutionUnit)         \
  ENUMERATE1(PropertyTagPageNumber)             \
  ENUMERATE1(PropertyTagTransferFunction)       \
  ENUMERATE1(PropertyTagSoftwareUsed)           \
  ENUMERATE1(PropertyTagDateTime)               \
  ENUMERATE1(PropertyTagArtist)                 \
  ENUMERATE1(PropertyTagHostComputer)           \
  ENUMERATE1(PropertyTagPredictor)              \
  ENUMERATE1(PropertyTagWhitePoint)             \
  ENUMERATE1(PropertyTagPrimaryChromaticities)  \
  ENUMERATE1(PropertyTagColorMap)               \
  ENUMERATE1(PropertyTagHalftoneHints)          \
  ENUMERATE1(PropertyTagTileWidth)              \
  ENUMERATE1(PropertyTagTileLength)             \
  ENUMERATE1(PropertyTagTileOffset)             \
  ENUMERATE1(PropertyTagTileByteCounts)         \
  ENUMERATE1(PropertyTagInkSet)                 \
  ENUMERATE1(PropertyTagInkNames)               \
  ENUMERATE1(PropertyTagNumberOfInks)           \
  ENUMERATE1(PropertyTagDotRange)               \
  ENUMERATE1(PropertyTagTargetPrinter)          \
  ENUMERATE1(PropertyTagExtraSamples)           \
  ENUMERATE1(PropertyTagSampleFormat)           \
  ENUMERATE1(PropertyTagSMinSampleValue)        \
  ENUMERATE1(PropertyTagSMaxSampleValue)        \
  ENUMERATE1(PropertyTagTransferRange)          \
  ENUMERATE1(PropertyTagJPEGProc)               \
  ENUMERATE1(PropertyTagJPEGInterFormat)        \
  ENUMERATE1(PropertyTagJPEGInterLength)        \
  ENUMERATE1(PropertyTagJPEGRestartInterval)    \
  ENUMERATE1(PropertyTagJPEGLosslessPredictors) \
  ENUMERATE1(PropertyTagJPEGPointTransforms)    \
  ENUMERATE1(PropertyTagJPEGQTables)            \
  ENUMERATE1(PropertyTagJPEGDCTables)           \
  ENUMERATE1(PropertyTagJPEGACTables)           \
  ENUMERATE1(PropertyTagYCbCrCoefficients)      \
  ENUMERATE1(PropertyTagYCbCrSubsampling)       \
  ENUMERATE1(PropertyTagYCbCrPositioning)       \
  ENUMERATE1(PropertyTagREFBlackWhite)          \
  ENUMERATE1(PropertyTagICCProfile)             \
  ENUMERATE1(PropertyTagGamma)                  \
  ENUMERATE1(PropertyTagICCProfileDescriptor)   \
  ENUMERATE1(PropertyTagSRGBRenderingIntent)      \
  ENUMERATE1(PropertyTagImageTitle)               \
  ENUMERATE1(PropertyTagCopyright)                \
  ENUMERATE1(PropertyTagResolutionXUnit)          \
  ENUMERATE1(PropertyTagResolutionYUnit)          \
  ENUMERATE1(PropertyTagResolutionXLengthUnit)    \
  ENUMERATE1(PropertyTagResolutionYLengthUnit)    \
  ENUMERATE1(PropertyTagPrintFlags)               \
  ENUMERATE1(PropertyTagPrintFlagsVersion)        \
  ENUMERATE1(PropertyTagPrintFlagsCrop)           \
  ENUMERATE1(PropertyTagPrintFlagsBleedWidth)       \
  ENUMERATE1(PropertyTagPrintFlagsBleedWidthScale)  \
  ENUMERATE1(PropertyTagHalftoneLPI)                \
  ENUMERATE1(PropertyTagHalftoneLPIUnit)            \
  ENUMERATE1(PropertyTagHalftoneDegree)             \
  ENUMERATE1(PropertyTagHalftoneShape)              \
  ENUMERATE1(PropertyTagHalftoneMisc)                                   \
  ENUMERATE1(PropertyTagHalftoneScreen)                                 \
  ENUMERATE1(PropertyTagJPEGQuality)                                    \
  ENUMERATE1(PropertyTagGridSize)                                       \
  ENUMERATE1(PropertyTagThumbnailFormat)                                \
  ENUMERATE1(PropertyTagThumbnailWidth)                                 \
  ENUMERATE1(PropertyTagThumbnailHeight)                                \
  ENUMERATE1(PropertyTagThumbnailColorDepth)                            \
  ENUMERATE1(PropertyTagThumbnailPlanes)                                \
  ENUMERATE1(PropertyTagThumbnailRawBytes)                              \
  ENUMERATE1(PropertyTagThumbnailSize)                                  \
  ENUMERATE1(PropertyTagThumbnailCompressedSize)                        \
  ENUMERATE1(PropertyTagColorTransferFunction)                          \
  ENUMERATE1(PropertyTagThumbnailData)                                  \
  ENUMERATE1(PropertyTagThumbnailImageWidth)                            \
  ENUMERATE1(PropertyTagThumbnailImageHeight)                           \
  ENUMERATE1(PropertyTagThumbnailBitsPerSample)                         \
  ENUMERATE1(PropertyTagThumbnailCompression)                           \
  ENUMERATE1(PropertyTagThumbnailPhotometricInterp)                     \
  ENUMERATE1(PropertyTagThumbnailImageDescription)                      \
  ENUMERATE1(PropertyTagThumbnailEquipMake)                             \
  ENUMERATE1(PropertyTagThumbnailEquipModel)                            \
  ENUMERATE1(PropertyTagThumbnailStripOffsets)                          \
  ENUMERATE1(PropertyTagThumbnailOrientation)                           \
  ENUMERATE1(PropertyTagThumbnailSamplesPerPixel)                       \
  ENUMERATE1(PropertyTagThumbnailRowsPerStrip)                          \
  ENUMERATE1(PropertyTagThumbnailStripBytesCount)                       \
  ENUMERATE1(PropertyTagThumbnailResolutionX)                           \
  ENUMERATE1(PropertyTagThumbnailResolutionY)                           \
  ENUMERATE1(PropertyTagThumbnailPlanarConfig)                          \
  ENUMERATE1(PropertyTagThumbnailResolutionUnit)                        \
  ENUMERATE1(PropertyTagThumbnailTransferFunction)                      \
  ENUMERATE1(PropertyTagThumbnailSoftwareUsed)                          \
  ENUMERATE1(PropertyTagThumbnailDateTime)                              \
  ENUMERATE1(PropertyTagThumbnailArtist)                                \
  ENUMERATE1(PropertyTagThumbnailWhitePoint)                            \
  ENUMERATE1(PropertyTagThumbnailPrimaryChromaticities)                 \
  ENUMERATE1(PropertyTagThumbnailYCbCrCoefficients)                     \
  ENUMERATE1(PropertyTagThumbnailYCbCrSubsampling)                      \
  ENUMERATE1(PropertyTagThumbnailYCbCrPositioning)                      \
  ENUMERATE1(PropertyTagThumbnailRefBlackWhite)                         \
  ENUMERATE1(PropertyTagThumbnailCopyRight)                             \
  ENUMERATE1(PropertyTagLuminanceTable)                                 \
  ENUMERATE1(PropertyTagChrominanceTable)                               \
  ENUMERATE1(PropertyTagFrameDelay)                                     \
  ENUMERATE1(PropertyTagLoopCount)                                      \
  ENUMERATE1(PropertyTagPixelUnit)                                      \
  ENUMERATE1(PropertyTagPixelPerUnitX)                                  \
  ENUMERATE1(PropertyTagPixelPerUnitY)                                  \
  ENUMERATE1(PropertyTagPaletteHistogram)                               \
  ENUMERATE1(PropertyTagExifExposureTime)                               \
  ENUMERATE1(PropertyTagExifFNumber)                                    \
  ENUMERATE1(PropertyTagExifExposureProg)                               \
  ENUMERATE1(PropertyTagExifSpectralSense)                              \
  ENUMERATE1(PropertyTagExifISOSpeed)                                   \
  ENUMERATE1(PropertyTagExifOECF)                                       \
  ENUMERATE1(PropertyTagExifVer)                                        \
  ENUMERATE1(PropertyTagExifDTOrig)                                     \
  ENUMERATE1(PropertyTagExifDTDigitized)                                \
  ENUMERATE1(PropertyTagExifCompConfig)                                 \
  ENUMERATE1(PropertyTagExifCompBPP)                                    \
  ENUMERATE1(PropertyTagExifShutterSpeed)                               \
  ENUMERATE1(PropertyTagExifAperture)                                   \
  ENUMERATE1(PropertyTagExifBrightness)                                 \
  ENUMERATE1(PropertyTagExifExposureBias)                               \
  ENUMERATE1(PropertyTagExifMaxAperture)                                \
  ENUMERATE1(PropertyTagExifSubjectDist)                                \
  ENUMERATE1(PropertyTagExifMeteringMode)                               \
  ENUMERATE1(PropertyTagExifLightSource)                                \
  ENUMERATE1(PropertyTagExifFlash)                                      \
  ENUMERATE1(PropertyTagExifFocalLength)                                \
  ENUMERATE1(PropertyTagExifMakerNote)                                  \
  ENUMERATE1(PropertyTagExifUserComment)                                \
  ENUMERATE1(PropertyTagExifDTSubsec)                                   \
  ENUMERATE1(PropertyTagExifDTOrigSS)                                   \
  ENUMERATE1(PropertyTagExifDTDigSS)                                    \
  ENUMERATE1(PropertyTagExifFPXVer)                                     \
  ENUMERATE1(PropertyTagExifColorSpace)                                 \
  ENUMERATE1(PropertyTagExifPixXDim)                                    \
  ENUMERATE1(PropertyTagExifPixYDim)                                    \
  ENUMERATE1(PropertyTagExifRelatedWav)                                 \
  ENUMERATE1(PropertyTagExifInterop)                                    \
  ENUMERATE1(PropertyTagExifFlashEnergy)                                \
  ENUMERATE1(PropertyTagExifSpatialFR)                                  \
  ENUMERATE1(PropertyTagExifFocalXRes)                                  \
  ENUMERATE1(PropertyTagExifFocalYRes)                                  \
  ENUMERATE1(PropertyTagExifFocalResUnit)                               \
  ENUMERATE1(PropertyTagExifSubjectLoc)                                 \
  ENUMERATE1(PropertyTagExifExposureIndex)                              \
  ENUMERATE1(PropertyTagExifSensingMethod)                              \
  ENUMERATE1(PropertyTagExifFileSource)                                 \
  ENUMERATE1(PropertyTagExifSceneType)                                  \
  ENUMERATE1(PropertyTagExifCfaPattern)                                 \
  ENUMERATE1(PropertyTagGpsVer)                                         \
  ENUMERATE1(PropertyTagGpsLatitudeRef)                                 \
  ENUMERATE1(PropertyTagGpsLatitude)                                    \
  ENUMERATE1(PropertyTagGpsLongitudeRef)                                \
  ENUMERATE1(PropertyTagGpsLongitude)                                   \
  ENUMERATE1(PropertyTagGpsAltitudeRef)                                 \
  ENUMERATE1(PropertyTagGpsAltitude)                                    \
  ENUMERATE1(PropertyTagGpsGpsTime)                                     \
  ENUMERATE1(PropertyTagGpsGpsSatellites)                               \
  ENUMERATE1(PropertyTagGpsGpsStatus)                                   \
  ENUMERATE1(PropertyTagGpsGpsMeasureMode)                              \
  ENUMERATE1(PropertyTagGpsGpsDop)                                      \
  ENUMERATE1(PropertyTagGpsSpeedRef)                                    \
  ENUMERATE1(PropertyTagGpsSpeed)                                       \
  ENUMERATE1(PropertyTagGpsTrackRef)                                    \
  ENUMERATE1(PropertyTagGpsTrack)                                       \
  ENUMERATE1(PropertyTagGpsImgDirRef)                                   \
  ENUMERATE1(PropertyTagGpsImgDir)                                      \
  ENUMERATE1(PropertyTagGpsMapDatum)                                    \
  ENUMERATE1(PropertyTagGpsDestLatRef)                                  \
  ENUMERATE1(PropertyTagGpsDestLat)                                     \
  ENUMERATE1(PropertyTagGpsDestLongRef)                                 \
  ENUMERATE1(PropertyTagGpsDestLong)                                    \
  ENUMERATE1(PropertyTagGpsDestBearRef)                                 \
  ENUMERATE1(PropertyTagGpsDestBear)                                    \
  ENUMERATE1(PropertyTagGpsDestDistRef)                                 \
  ENUMERATE1(PropertyTagGpsDestDist)

static
const char*
property_type_to_str(const PropertyTag id)
{
  switch(id)
  {
#define ENUMERATE(id, str) case id: return str;
    ENUMERATE_LIST
#undef ENUMERATE
  default:
    return "???";
  }
}

#undef ENUMERATE_LIST
#undef ENUMERATE1

#define ENUMERATE1(id) ENUMERATE(id, #id)
#define ENUMERATE_LIST                          \
  ENUMERATE1(PropertyTagExifIFD)                \
  ENUMERATE1(PropertyTagTypeByte)               \
  ENUMERATE1(PropertyTagTypeASCII)              \
  ENUMERATE1(PropertyTagTypeShort)              \
  ENUMERATE1(PropertyTagTypeLong)               \
  ENUMERATE1(PropertyTagTypeRational)           \
  ENUMERATE1(PropertyTagTypeSByte)              \
  ENUMERATE1(PropertyTagTypeUndefined)          \
  ENUMERATE1(PropertyTagTypeSShort)             \
  ENUMERATE1(PropertyTagTypeSLONG)              \
  ENUMERATE1(PropertyTagTypeSRational)          \
  ENUMERATE1(PropertyTagTypeFloat)              \
  ENUMERATE1(PropertyTagTypeDouble)

static
const char*
property_tag_type_to_str(const PropertyTagType id)
{
  switch(id)
  {
#define ENUMERATE(id, str) case id: return str;
    ENUMERATE_LIST
#undef ENUMERATE
  default:
    return "???";
  }
}

#undef ENUMERATE_LIST
#undef ENUMERATE1

