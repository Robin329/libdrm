AM_CFLAGS = \
	$(WARN_CFLAGS)\
	-fvisibility=hidden \
	-I$(top_srcdir)/include/drm \
	-I$(top_srcdir)/libkms/ \
	-I$(top_srcdir)/tests/ \
	-I$(top_srcdir)

if HAVE_INSTALL_TESTS
bin_PROGRAMS = \
	animatefb
else
noinst_PROGRAMS = \
	animatefb
endif

drm-hellomodeset-double-buffer_SOURCES = \
	animatefb.c

drm-hellomodeset-double-buffer_LDADD = \
	$(top_builddir)/tests/util/libutil.la \
	$(top_builddir)/libkms/libkms.la \
	$(top_builddir)/libdrm.la

run: animatefb
	./animatefb
