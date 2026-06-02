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

static inline __attribute__((always_inline)) void false__t10t(int* __t1537t) {
  int value=0;
  *__t1537t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1538t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1538t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1539t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1539t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1540t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1540t=z;
}

static inline __attribute__((always_inline)) void modify__t1518t(uint64_t* __t1541t, uint64_t y) {
  uint64_t x=*__t1541t;
  uint64_t __t1519t__=0;
  add__t175t(x,y,&__t1519t__);
  x=__t1519t__;
  *__t1541t=x;
}

static inline __attribute__((always_inline)) void void__t25t() {
}

static inline __attribute__((always_inline)) void modify__t1515t(uint64_t* __t1542t) {
  uint64_t x=*__t1542t;
  uint64_t __t1516t=0;
  uint64_t __t1517t__=0;
  __t1516t=1;
  add__t175t(x,__t1516t,&__t1517t__);
  x=__t1517t__;
  *__t1542t=x;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1525t() {
  uint64_t __t1527t=0;
  uint64_t __t1528t=0;
  uint64_t x=0;
  uint64_t __t1530t=0;
  console__t366t();
  __t1527t=5;
  __t1528t=__t1527t;
  x=__t1528t;
  __t1530t=3;
  modify__t1518t(&x,__t1530t);
  void__t25t();
  modify__t1515t(&x);
  print__t389t(x);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1525t();return 0;}