include $(top_srcdir)/build-aux/glib-tap.mk

AM_CFLAGS = # CFLAGS applicable to all executables (products)

# Convenience library so that it can be resued 
# between my_executable and the tests
noinst_LIBRARIES = libcommon.a
libcommon_a_SOURCES = src/common.h src/common.c
# src/common.h appear in SOURCES to that it gets copied to
# distribution tgz.

# The main product 
bin_PROGRAMS = myexecutable # make all will generate ./my_executable 
myexecutable_SOURCES = \
                       src/main.c
myexecutable_CFLAGS = $(AM_CFLAGS) #--std=c11 # CFLAGS applicable to myexecutable_SOURCES
myexecutable_LDADD = libcommon.a



# Tests
# 'check' comes from 'make check'

test_programs = testsuite

testsuite_SOURCES = tests/test.c

# In this case the testsuite (test.c) requires glib2.0
# for the g_test_* test harness. glib2.0 requires specific
# CFLAGS and -l options that are retrieved from pkg-config (configure.ac)
# DEPS_CFLAGS and DEPS_LIBS are filled by PKG_CHECK_MODULES (configure.ac)

testsuite_CPPFLAGS = -I$(top_srcdir)/src
testsuite_CFLAGS = $(AM_CFLAGS) $(GLIB_CFLAGS) # DEPS_* are filled by PKG_CHECK_MODULES 
testsuite_LDADD = $(GLIB_LIBS) libcommon.a    # in configure.ac


