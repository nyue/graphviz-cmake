# $Id: Makefile.am,v 1.22 2009/06/03 01:10:58 ellson Exp $ $Revision: 1.22 $
## Process this file with automake to produce Makefile.in

SUBDIRS = demo

pdfdir = $(pkgdatadir)/doc/pdf
pkgtcldir = $(pkglibdir)/tcl

AM_CPPFLAGS = \
	 -I$(top_srcdir) \
	-I$(top_srcdir)/tclpkg/tclhandle \
	@GD_INCLUDES@ @TCL_INCLUDES@

LIBS = @LIBS@ -lc

AM_CFLAGS = @TCL_CFLAGS@

man = gdtclft.3tcl
pdf = gdtclft.3tcl.pdf

if WITH_LIBGD
if WITH_TCL
pkgtcl_LTLIBRARIES = libgdtclft.la
man_MANS = $(man)
pdf_DATA = $(pdf)
endif
endif

libgdtclft_la_SOURCES = gdtclft.c

libgdtclft_la_LDFLAGS = -no-undefined

if WITH_LIBGD
if WITH_MYLIBGD
libgdtclft_la_LIBADD = \
	$(top_builddir)/tclpkg/tclhandle/libtclhandle_C.la \
	$(top_builddir)/tclpkg/tclstubs/libtclstubs_C.la \
	$(top_builddir)/lib/gd/libgvgd_C.la \
	@ICONV_LIBS@ @FONTCONFIG_LIBS@ @FREETYPE2_LIBS@ @JPEG_LIBS@ @PNG_LIBS@ @Z_LIBS@ @MATH_LIBS@
else
libgdtclft_la_LIBADD = \
	$(top_builddir)/tclpkg/tclhandle/libtclhandle_C.la \
	$(top_builddir)/tclpkg/tclstubs/libtclstubs_C.la \
	@GD_LIBS@ @ICONV_LIBS@ @FONTCONFIG_LIBS@ @FREETYPE2_LIBS@ @JPEG_LIBS@ @PNG_LIBS@ @Z_LIBS@ @MATH_LIBS@
endif

if WITH_TCL
all-local: pkgIndex.tcl

pkgIndex.tcl: libgdtclft.la
	sh $(top_srcdir)/tclpkg/mkpkgindex.sh libgdtclft.la Gdtclft $(VERSION)

test:
	echo 'load .libs/libgdtclft$(TCL_SHLIB_SUFFIX) Gdtclft ; cd tests ; source all' | tclsh8.3
endif
endif

gdtclft.3tcl.pdf: $(srcdir)/gdtclft.3tcl
	- @GROFF@ -Tps -man $(srcdir)/gdtclft.3tcl | @PS2PDF@ - - >gdtclft.3tcl.pdf

EXTRA_DIST = $(man) $(pdf) Makefile.old

CLEANFILES = pkgIndex.tcl

DISTCLEANFILES = $(pdf)
