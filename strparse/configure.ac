AC_INIT([numberparse],[0.1])
AC_PREREQ([2.64])
AC_CONFIG_SRCDIR([main.cc])
AC_CONFIG_HEADERS([config.h])
AC_GNU_SOURCE
AM_INIT_AUTOMAKE([1.11  foreign  -Wall no-define subdir-objects \
		  color-tests \
                  silent-rules \
                  parallel-tests])

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_CXX

AM_MISSING_PROG([GPERF], [gperf])

#AC_CHECK_PROGS(gengetopt, gengetopt, [false])
#GENGETOPT=$gengetopt
#AC_SUBST(GENGETOPT)

AC_OUTPUT([
Makefile
])
