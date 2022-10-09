AM_CFLAGS = \
	$(WARN_CFLAGS)\
	-fvisibility=hidden \
	-I$(top_srcdir)/include/drm \
	-I$(top_srcdir)/libkms/ \
	-I$(top_srcdir)/tests/ \
	-I$(top_srcdir)

if HAVE_INSTALL_TESTS
bin_PROGRAMS = \
	modeset-plane-move
else
noinst_PROGRAMS = \
	modeset-plane-move
endif

modeset-plane-move_SOURCES = \
	modeset-plane-move.c

modeset-plane-move_LDADD = \
	$(top_builddir)/tests/util/libutil.la \
	$(top_builddir)/libkms/libkms.la \
	$(top_builddir)/libdrm.la

run: modeset-plane-move
	./modeset-plane-move
