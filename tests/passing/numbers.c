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

static inline __attribute__((always_inline)) void true__t11t(int* __t1567t) {
  int value=0;
  *__t1567t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1568t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1568t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t1569t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1570t) {
  int value=0;
  *__t1570t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1571t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1571t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1572t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1572t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1573t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1574t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1555t() {
  double __t1557t=0;
  double x=0;
  uint64_t __t1558t=0;
  double __t1559t__=0;
  uint64_t __t1560t=0;
  double __t1561t__=0;
  double __t1562t=0;
  double __t1563t__=0;
  double __t1564t__=0;
  double __t1565t__=0;
  console__t366t();
  __t1557t=1.0;
  x=__t1557t;
  __t1558t=1;
  float__t415t(__t1558t,&__t1559t__);
  __t1560t=2;
  float__t415t(__t1560t,&__t1561t__);
  __t1562t=2.0;
  mul__t177t(__t1561t__,__t1562t,&__t1563t__);
  add__t153t(__t1559t__,__t1563t__,&__t1564t__);
  add__t153t(x,__t1564t__,&__t1565t__);
  print__t385t(__t1565t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}