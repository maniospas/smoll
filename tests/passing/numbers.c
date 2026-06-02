#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t377t="\n";
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1479t) {
  int value=0;
  *__t1479t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1480t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1480t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t410t(uint64_t x, double* __t1481t) {
  int __t411t=0;
  int __t412t__=0;
  int __t413t=0;
  double z=0;
  not__t38t(__t411t,&__t412t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1481t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1482t) {
  int value=0;
  *__t1482t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1483t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1483t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1484t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1484t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t1485t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1485t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1486t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1486t=z;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1467t() {
  double __t1469t=0;
  double x=0;
  uint64_t __t1470t=0;
  double __t1471t__=0;
  uint64_t __t1472t=0;
  double __t1473t__=0;
  double __t1474t=0;
  double __t1475t__=0;
  double __t1476t__=0;
  double __t1477t__=0;
  console__t365t();
  __t1469t=1.0;
  x=__t1469t;
  __t1470t=1;
  float__t410t(__t1470t,&__t1471t__);
  __t1472t=2;
  float__t410t(__t1472t,&__t1473t__);
  __t1474t=2.0;
  mul__t176t(__t1473t__,__t1474t,&__t1475t__);
  add__t152t(__t1471t__,__t1475t__,&__t1476t__);
  add__t152t(x,__t1476t__,&__t1477t__);
  print__t380t(__t1477t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}