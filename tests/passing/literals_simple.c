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

static inline __attribute__((always_inline)) void false__t10t(int* __t1586t) {
  int value=0;
  *__t1586t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1587t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1587t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1588t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1588t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1589t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) void inc__t1561t(uint64_t x, uint64_t* __t1590t) {
  int __t1562t=0;
  uint64_t __t1565t=0;
  uint64_t __t1566t__=0;
  __t1565t=1;
  add__t175t(x,__t1565t,&__t1566t__);
  goto __t_return;
  __t_return:
  *__t1590t=__t1566t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1572t(uint64_t x, uint64_t* __t1591t) {
  int __t1573t=0;
  uint64_t __t1575t=0;
  uint64_t __t1576t__=0;
  __t1575t=2;
  add__t175t(x,__t1575t,&__t1576t__);
  goto __t_return;
  __t_return:
  *__t1591t=__t1576t__;
}

static inline __attribute__((always_inline)) void main__t1577t() {
  uint64_t __t1579t=0;
  uint64_t __t1580t__=0;
  uint64_t __t1582t=0;
  uint64_t __t1584t__=0;
  console__t366t();
  __t1579t=0;
  inc__t1561t(__t1579t,&__t1580t__);
  print__t393t(__t1580t__);
  __t1582t=0;
  inc__t1572t(__t1582t,&__t1584t__);
  print__t393t(__t1584t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1577t();return 0;}