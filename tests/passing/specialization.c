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

static inline __attribute__((always_inline)) void true__t11t(int* __t1630t) {
  int value=0;
  *__t1630t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1631t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1631t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t1632t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1632t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1633t) {
  int value=0;
  *__t1633t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1634t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1634t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1635t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1635t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1636t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1636t=z;
}

static inline __attribute__((always_inline)) void inc__t1570t(double x, double* __t1637t) {
  int __t1571t=0;
  uint64_t __t1572t=0;
  double __t1573t__=0;
  double value=0;
  int __t1574t=0;
  int __t1575t__=0;
  double __t1576t__=0;
  __t1572t=1;
  float__t415t(__t1572t,&__t1573t__);
  value=__t1573t__;
  not__t37t(__t1574t,&__t1575t__);
  add__t153t(x,value,&__t1576t__);
  goto __t_return;
  __t_return:
  *__t1637t=__t1576t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1638t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1638t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1639t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1639t=z;
}

static inline __attribute__((always_inline)) void inc__t1609t(uint64_t x, uint64_t value, uint64_t* __t1640t) {
  int __t1610t=0;
  int __t1611t=0;
  int __t1612t__=0;
  uint64_t __t1613t__=0;
  not__t37t(__t1611t,&__t1612t__);
  add__t175t(x,value,&__t1613t__);
  goto __t_return;
  __t_return:
  *__t1640t=__t1613t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1621t() {
  double __t1623t=0;
  double __t1624t__=0;
  uint64_t __t1626t=0;
  uint64_t __t1627t=0;
  uint64_t __t1628t__=0;
  console__t366t();
  __t1623t=2.0;
  inc__t1570t(__t1623t,&__t1624t__);
  print__t385t(__t1624t__);
  __t1626t=2;
  __t1627t=2;
  inc__t1609t(__t1626t,__t1627t,&__t1628t__);
  print__t393t(__t1628t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1621t();return 0;}