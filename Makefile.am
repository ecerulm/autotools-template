AM_CFLAGS = # CFLAGS applicable to all executables (products)

bin_PROGRAMS = myexecutable
myexecutable_SOURCES = \
                       src/main.c
myexecutable_CFLAGS = #--std=c11 # CFLAGS applicable to myexecutable_SOURCES

# Tests
# 'check' comes from 'make check'
check_PROGRAMS = testsuite # will generate and run testsuite exec

testsuite_CFLAGS = $(DEPS_CFLAGS) # DEPS_* are filled by PKG_CHECK_MODULES 
testsuite_LIBS = $(DEPS_LIBS)     # in configure.ac

testsuite_SOURCES = tests/test.c
TESTS = testsuite

