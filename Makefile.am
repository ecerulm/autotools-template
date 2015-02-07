include $(top_srcdir)/build-aux/glib-tap.mk

AM_CFLAGS = # CFLAGS applicable to all executables (products)

bin_PROGRAMS = myexecutable # make all will generate ./my_executable 
myexecutable_SOURCES = \
                       src/main.c
myexecutable_CFLAGS = #--std=c11 # CFLAGS applicable to myexecutable_SOURCES

# Tests
# 'check' comes from 'make check'

check_PROGRAMS = testsuite # will generate and run testsuite exec

testsuite_SOURCES = tests/test.c

# In this case the testsuite (test.c) requires glib2.0
# for the g_test_* test harness. glib2.0 requires specific
# CFLAGS and -l options that are retrieved from pkg-config (configure.ac)
# DEPS_CFLAGS and DEPS_LIBS are filled by PKG_CHECK_MODULES (configure.ac)

testsuite_CFLAGS = $(DEPS_CFLAGS) # DEPS_* are filled by PKG_CHECK_MODULES 
testsuite_LDADD = $(DEPS_LIBS)     # in configure.ac

TESTS = testsuite # https://www.gnu.org/software/automake/manual/html_node/Scripts_002dbased-Testsuites.html#Scripts_002dbased-Testsuites

