noinst_LTLIBRARIES = libjpeg.la
libjpeg_la_CPPFLAGS = \
	$(AM_CPPFLAGS) $(CPPFLAGS)	\
	$(LIBEXIF_CFLAGS)
libjpeg_la_SOURCES =			\
	jpeg-data.c jpeg-data.h		\
	jpeg-marker.c jpeg-marker.h \
	exif-i18n.h exif-i18n.c
libjpeg_la_LIBADD = $(LIBEXIF_LIBS)

INCLUDES = $(GDIPLUS_CFLAGS) -Wall -Wno-unused -Wno-format -I..
