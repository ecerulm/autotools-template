#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE([foreign]) # Does not require NEWS, COPYING, AUTHORS, ChangeLog or README

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

AC_PROG_INSTALL

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADER([stdlib.h])

# Check for C11's optional Atomic operations library 
# AC_CHECK_HEADER([stdatomic.h], [], [
#                 AC_MSG_ERROR([C11 with atomic support needed.])
#                  ])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.


AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
