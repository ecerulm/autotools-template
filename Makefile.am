AM_CFLAGS = # CFLAGS applicable to all executables (products)
AM_CPPFLAGS = -I$(top_srcdir)/src # so that tests also find header files

# Convenience library so that it can be resued
# between my_executable and the tests
noinst_LIBRARIES = libcommon.a
libcommon_a_SOURCES = src/common.h src/common.c
# src/common.h appear in SOURCES to that it gets copied to
# distribution tgz.

# The main product
bin_PROGRAMS = myexecutable # make all will generate ./my_executable

#include .c and .h in SOURCES so that both appear in dist
myexecutable_SOURCES = \
											 src/add.c \
											 src/add.h \
                       src/main.c
myexecutable_CFLAGS = $(AM_CFLAGS) #--std=c11 # CFLAGS applicable to myexecutable_SOURCES
myexecutable_LDADD = libcommon.a



# Tests
# 'check' comes from 'make check'

@VALGRIND_CHECK_RULES@


TESTS = add.ctaptest
check_PROGRAMS =  add.ctaptest

add_ctaptest_SOURCES = tests/add.c src/add.c src/add.h
add_ctaptest_CPPFLAGS = $(AM_CPPFLAGS) # so that tests find the header files


# See http://www.gnu.org/software/automake/manual/html_node/Use-TAP-with-the-Automake-test-harness.html
# TESTS ending in .ctaptest should produce TAP output
# 1..2
# ok 1 - message
# not ok 2 - message
AUTOMAKE_OPTIONS = parallel-tests
TEST_EXTENSIONS = .ctaptest
CTAPTEST_LOG_DRIVER = env AM_TAP_HAWK='$(AWK)' $(SHELL) $(top_srcdir)/build-aux/tap-driver.sh
# TESTS_ENVIRONMENT = $(VALGRIND)
# CTAPTEST_TESTS_ENVIRONMENT = $(VALGRIND)
# CTAPTEST_LOG_COMPILER = $(VALGRIND)



