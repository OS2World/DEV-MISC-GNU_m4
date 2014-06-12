/* config.h.in.  Generated manually for EMX.  */

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
#undef _ALL_SOURCE
#endif

/* Define if using alloca.c.  */
#undef C_ALLOCA

/* Define to empty if the keyword does not work.  */
#undef const

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
#undef CRAY_STACKSEG_END

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#undef HAVE_ALLOCA_H

/* Define if you don't have vprintf but do have _doprnt.  */
#undef HAVE_DOPRNT

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define if on MINIX.  */
#undef _MINIX

/* Define if the system does not provide POSIX.1 features except
   with this defined.  */
#undef _POSIX_1_SOURCE

/* Define if you need to in order for stat and other things to work.  */
#define _POSIX_SOURCE 1

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
#undef size_t

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown
 */
#undef STACK_DIRECTION

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define to 1 if the changeword(REGEXP) functionnality is wanted.  */
#undef ENABLE_CHANGEWORD

/* Define to 1 if you have ecvt(3), fcvt(3) and gcvt(3), define to 2 if
   these are declared in <stdlib.h>.  */
#undef HAVE_EFGCVT

/* Define to 1 if #include <signal.h> declares struct sigcontext */
#undef HAVE_SIGCONTEXT

/* Define to the name of the distribution.  */
#define PRODUCT "m4"

/* Define to 1 if ANSI function prototypes are usable.  */
#define PROTOTYPES 1

/* Define to int if rlim_t is not defined in sys/resource.h */
#define rlim_t int

/* Define to struct sigaltstack if stack_t is not defined in sys/signal.h */
#undef stack_t

/* Define to 1 if using stack overflow detection.  */
#undef USE_STACKOVF

/* Define to the version of the distribution.  */
#define VERSION "1.4"

/* Define to 1 for better use of the debugging malloc library.  See 
   site ftp.antaire.com in antaire/src, file dmalloc/dmalloc.tar.gz.  */
#undef WITH_DMALLOC

/* Define if you have the ecvt function.  */
#undef HAVE_ECVT

/* Define if you have the mkstemp function.  */
#undef HAVE_MKSTEMP

/* Define if you have the sigaction function.  */
#undef HAVE_SIGACTION

/* Define if you have the sigaltstack function.  */
#undef HAVE_SIGALTSTACK

/* Define if you have the sigstack function.  */
#undef HAVE_SIGSTACK

/* Define if you have the sigvec function.  */
#undef HAVE_SIGVEC

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the tmpfile function.  */
#define HAVE_TMPFILE 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <memory.h> header file.  */
#define HAVE_MEMORY_H 1

/* Define if you have the <siginfo.h> header file.  */
#undef HAVE_SIGINFO_H

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

#define _REGEX_RE_COMP 1

#ifdef __CRTRSXNT__
#include <crtrsxnt.h>
#endif

