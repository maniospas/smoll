#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1521t) {
  int value=0;
  *__t1521t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1522t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1522t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t411t(uint64_t x, double* __t1523t) {
  int __t412t=0;
  int __t413t__=0;
  int __t414t=0;
  double z=0;
  not__t39t(__t412t,&__t413t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1523t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1524t) {
  int value=0;
  *__t1524t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1525t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1525t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1526t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1526t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1527t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1528t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1528t=z;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1509t() {
  double __t1511t=0;
  double x=0;
  uint64_t __t1512t=0;
  double __t1513t__=0;
  uint64_t __t1514t=0;
  double __t1515t__=0;
  double __t1516t=0;
  double __t1517t__=0;
  double __t1518t__=0;
  double __t1519t__=0;
  console__t366t();
  __t1511t=1.0;
  x=__t1511t;
  __t1512t=1;
  float__t411t(__t1512t,&__t1513t__);
  __t1514t=2;
  float__t411t(__t1514t,&__t1515t__);
  __t1516t=2.0;
  mul__t177t(__t1515t__,__t1516t,&__t1517t__);
  add__t153t(__t1513t__,__t1517t__,&__t1518t__);
  add__t153t(x,__t1518t__,&__t1519t__);
  print__t381t(__t1519t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1509t();return 0;}