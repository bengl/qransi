#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([qransi], [0.0.1], [bryan@bryanenglish.com])
AM_INIT_AUTOMAKE([qransi], [0.0.1])
AC_CONFIG_SRCDIR([qransi.c])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
AC_CHECK_LIB([qrencode], [QRcode_encodeString], [], [echo "Error! You need libqrencode."; exit -1])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
