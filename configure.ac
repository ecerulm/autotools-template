#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE([foreign subdir-objects]) # Does not require NEWS, COPYING, AUTHORS, ChangeLog or README

AM_SILENT_RULES([yes]) # less verbose make output https://autotools.io/automake/silent.html

AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

AC_LANG([C]) # Use C not C++

# Checks for programs.
AC_PROG_CC

# In case that you want to check for specific versions of gcc 
# For example in case that you need C11 support you want to 
# check for gcc-4.9 
#AC_PROG_CC([gcc-4.9 gcc cc])

AC_PROG_CC_C99 # or AC_PROG_CC_89 to force C89 mode or AC_PROG_CC_STDC to go to latest supported standard (currently C99)

AC_PROG_INSTALL

# Checks for libraries.

# Found libraries are automatically addded to LIBS
# AC_SEARCH_LIBS([pthread_cond_wait], [pthread],[],[
#                 AC_MSG_ERROR([You need to install pthreads library.])
#                 ])

# AC_SEARCH_LIBS([g_test_init], [glib-2.0],[],[
#                 AC_MSG_ERROR([You need to install glib-2.0 library.])
#                 ])

# Checks for header files.
AC_CHECK_HEADER([stdlib.h])

# Check for C11's optional Atomic operations library 
# AC_CHECK_HEADER([stdatomic.h], [], [
#                 AC_MSG_ERROR([C11 with atomic support needed.])
#                  ])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.


PKG_CHECK_MODULES([DEPS], [glib-2.0 >= 2.24.1]) # use pkg-config to fill DEPS_CFLAGS and DEPS_LIBS

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
