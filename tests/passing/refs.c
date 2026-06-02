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

static inline __attribute__((always_inline)) void false__t10t(int* __t1516t) {
  int value=0;
  *__t1516t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1517t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1517t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1518t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1518t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1519t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1519t=z;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1509t() {
  uint64_t __t1511t=0;
  uint64_t __t1512t=0;
  uint64_t x=0;
  uint64_t y=0;
  uint64_t z=0;
  uint64_t __t1513t=0;
  uint64_t __t1514t__=0;
  console__t366t();
  __t1511t=1;
  __t1512t=__t1511t;
  x=__t1512t;
  __t1513t=2;
  x=__t1513t;
  add__t175t(x,x,&__t1514t__);
  print__t389t(__t1514t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1509t();return 0;}