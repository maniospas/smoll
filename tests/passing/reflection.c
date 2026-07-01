#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2147t="inc";
const char* const __t2169t="() -> (float)";
const char* const __t396t="\n";
const char* const __t2175t="x";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
"user input was not a float",
"read string does not fit on buffer",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};
int float__t2155t(double* __t2178t) ;
static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float__t4t(double* __t2177t) {
  double value=0;
  *__t2177t=value;
}

int float__t2155t(double* __t2178t) {
  double __t2156t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float__t4t(&__t2156t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2178t=__t2156t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t415t(int __t_anon1) {
  int __t416t=0;
  const char* endl=0;
  endl=__t396t;
  printf("true%s",endl);
}

static inline __attribute__((always_inline)) void main__t2142t() {
  double __t2149t=0;
  double __t2150t=0;
  double x=0;
  __smoll_func_ptr_type __t2163t=0;
  int __t2171t=0;
  console__t379t();
  print__t394t(__t2147t);
  __t2149t=0.0;
  __t2150t=__t2149t;
  x=__t2150t;
  __t2163t=(__smoll_func_ptr_type)float__t2155t;
  print__t394t(__t2169t);
  print__t415t(__t2171t);
  print__t394t(__t2175t);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2142t();return 0;}