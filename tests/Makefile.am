## Makefile.am for libgdiplus/tests

LIBS = $(GDIPLUS_LIBS)

INCLUDES =					\
	-I$(top_srcdir)				\
	-I$(top_builddir)/src			\
	-I$(top_srcdir)/src			\
	$(GDIPLUS_CFLAGS)

DEPS =						\
	$(top_builddir)/src/libgdiplus.la


LDADDS =					\
	$(top_builddir)/src/libgdiplus.la

noinst_PROGRAMS =			\
	testgdi testbits testclip testreversepath testprops

testgdi_DEPENDENCIES = $(TEST_DEPS)
testgdi_LDADD = $(LDADDS)

testgdi_SOURCES =		\
	testgdi.c

testbits_DEPENDENCIES = $(TEST_DEPS)
testbits_LDADD = $(LDADDS)

testbits_SOURCES =		\
	testbits.c

testclip_SOURCES =	\
	testclip.c

testclip_DEPENDENCIES = $(TEST_DEPS)
testclip_LDADD = $(LDADDS)

testreversepath_SOURCES =	\
	testreversepath.c

testreversepath_DEPENDENCIES = $(TEST_DEPS)
testreversepath_LDADD = $(LDADDS)

testprops_SOURCES =	\
	testprops.c testprops.h

testprops_DEPENDENCIES = $(TEST_DEPS)
testprops_LDADD = $(LDADDS)
testprops_CPPFLAGS = -std=gnu99

EXTRA_DIST =			\
	$(testgdi_SOURCES)	\
	$(testbits_SOURCES)	\
	$(testclip_SOURCES)	\
	$(testreversepath_SOURCES) \
	$(testprops_SOURCES)
