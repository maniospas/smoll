#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2086t) {
  int value=0;
  *__t2086t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2087t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2087t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t559t(uint64_t x, double* __t2088t) {
  int __t560t=0;
  int __t561t__=0;
  int __t562t=0;
  double z=0;
  not__t39t(__t560t,&__t561t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2088t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2089t) {
  int value=0;
  *__t2089t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2090t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2090t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2091t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2091t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2092t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2092t=z;
}

static inline __attribute__((always_inline)) void inc__t2026t(double x, double* __t2093t) {
  int __t2027t=0;
  uint64_t __t2028t=0;
  double __t2029t__=0;
  double value=0;
  int __t2030t=0;
  int __t2031t__=0;
  double __t2032t__=0;
  __t2028t=1;
  float__t559t(__t2028t,&__t2029t__);
  value=__t2029t__;
  not__t37t(__t2030t,&__t2031t__);
  add__t153t(x,value,&__t2032t__);
  goto __t_return;
  __t_return:
  *__t2093t=__t2032t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2094t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2094t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2095t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2095t=z;
}

static inline __attribute__((always_inline)) void inc__t2065t(uint64_t x, uint64_t value, uint64_t* __t2096t) {
  int __t2066t=0;
  int __t2067t=0;
  int __t2068t__=0;
  uint64_t __t2069t__=0;
  not__t37t(__t2067t,&__t2068t__);
  add__t175t(x,value,&__t2069t__);
  goto __t_return;
  __t_return:
  *__t2096t=__t2069t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2077t() {
  double __t2079t=0;
  double __t2080t__=0;
  uint64_t __t2082t=0;
  uint64_t __t2083t=0;
  uint64_t __t2084t__=0;
  console__t366t();
  __t2079t=2.0;
  inc__t2026t(__t2079t,&__t2080t__);
  print__t385t(__t2080t__);
  __t2082t=2;
  __t2083t=2;
  inc__t2065t(__t2082t,__t2083t,&__t2084t__);
  print__t393t(__t2084t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2077t();return 0;}