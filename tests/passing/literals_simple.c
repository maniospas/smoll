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

static inline __attribute__((always_inline)) void false__t10t(int* __t1582t) {
  int value=0;
  *__t1582t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1583t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1583t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1584t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1584t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1585t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1585t=z;
}

static inline __attribute__((always_inline)) void inc__t1557t(uint64_t x, uint64_t* __t1586t) {
  int __t1558t=0;
  uint64_t __t1561t=0;
  uint64_t __t1562t__=0;
  __t1561t=1;
  add__t175t(x,__t1561t,&__t1562t__);
  goto __t_return;
  __t_return:
  *__t1586t=__t1562t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1568t(uint64_t x, uint64_t* __t1587t) {
  int __t1569t=0;
  uint64_t __t1571t=0;
  uint64_t __t1572t__=0;
  __t1571t=2;
  add__t175t(x,__t1571t,&__t1572t__);
  goto __t_return;
  __t_return:
  *__t1587t=__t1572t__;
}

static inline __attribute__((always_inline)) void main__t1573t() {
  uint64_t __t1575t=0;
  uint64_t __t1576t__=0;
  uint64_t __t1578t=0;
  uint64_t __t1580t__=0;
  console__t366t();
  __t1575t=0;
  inc__t1557t(__t1575t,&__t1576t__);
  print__t393t(__t1576t__);
  __t1578t=0;
  inc__t1568t(__t1578t,&__t1580t__);
  print__t393t(__t1580t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1573t();return 0;}