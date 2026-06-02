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

static inline __attribute__((always_inline)) void true__t11t(int* __t1584t) {
  int value=0;
  *__t1584t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1585t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1585t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t411t(uint64_t x, double* __t1586t) {
  int __t412t=0;
  int __t413t__=0;
  int __t414t=0;
  double z=0;
  not__t39t(__t412t,&__t413t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1586t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1587t) {
  int value=0;
  *__t1587t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1588t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1588t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1589t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1589t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1590t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1590t=z;
}

static inline __attribute__((always_inline)) void inc__t1524t(double x, double* __t1591t) {
  int __t1525t=0;
  uint64_t __t1526t=0;
  double __t1527t__=0;
  double value=0;
  int __t1528t=0;
  int __t1529t__=0;
  double __t1530t__=0;
  __t1526t=1;
  float__t411t(__t1526t,&__t1527t__);
  value=__t1527t__;
  not__t37t(__t1528t,&__t1529t__);
  add__t153t(x,value,&__t1530t__);
  goto __t_return;
  __t_return:
  *__t1591t=__t1530t__;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1592t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1592t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1593t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) void inc__t1563t(uint64_t x, uint64_t value, uint64_t* __t1594t) {
  int __t1564t=0;
  int __t1565t=0;
  int __t1566t__=0;
  uint64_t __t1567t__=0;
  not__t37t(__t1565t,&__t1566t__);
  add__t175t(x,value,&__t1567t__);
  goto __t_return;
  __t_return:
  *__t1594t=__t1567t__;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1575t() {
  double __t1577t=0;
  double __t1578t__=0;
  uint64_t __t1580t=0;
  uint64_t __t1581t=0;
  uint64_t __t1582t__=0;
  console__t366t();
  __t1577t=2.0;
  inc__t1524t(__t1577t,&__t1578t__);
  print__t381t(__t1578t__);
  __t1580t=2;
  __t1581t=2;
  inc__t1563t(__t1580t,__t1581t,&__t1582t__);
  print__t389t(__t1582t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1575t();return 0;}