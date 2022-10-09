AM_CFLAGS = \
	$(WARN_CFLAGS)\
	-fvisibility=hidden \
	-I$(top_srcdir)/include/drm \
	-I$(top_srcdir)/libkms/ \
	-I$(top_srcdir)/tests/ \
	-I$(top_srcdir)

if HAVE_INSTALL_TESTS
bin_PROGRAMS = \
	modeset-plane-rotate
else
noinst_PROGRAMS = \
	modeset-plane-rotate
endif

modeset-plane-rotate_SOURCES = \
	modeset-plane-rotate.c

modeset-plane-rotate_LDADD = \
	$(top_builddir)/tests/util/libutil.la \
	$(top_builddir)/libkms/libkms.la \
	$(top_builddir)/libdrm.la

run: modeset-plane-rotate
	./modeset-plane-rotate
