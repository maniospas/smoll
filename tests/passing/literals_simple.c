#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
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

static inline __attribute__((always_inline)) void false__t10t(int* __t1497t) {
  int value=0;
  *__t1497t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1498t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1498t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1499t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1499t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1500t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1500t=z;
}

static inline __attribute__((always_inline)) void inc__t1473t(uint64_t x, uint64_t* __t1501t) {
  int __t1474t=0;
  uint64_t __t1477t=0;
  uint64_t __t1478t__=0;
  __t1477t=1;
  add__t174t(x,__t1477t,&__t1478t__);
  goto __t_return;
  __t_return:
  *__t1501t=__t1478t__;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1484t(uint64_t x, uint64_t* __t1502t) {
  int __t1485t=0;
  uint64_t __t1487t=0;
  uint64_t __t1488t__=0;
  __t1487t=2;
  add__t174t(x,__t1487t,&__t1488t__);
  goto __t_return;
  __t_return:
  *__t1502t=__t1488t__;
}

static inline __attribute__((always_inline)) void main__t1489t() {
  uint64_t __t1490t=0;
  uint64_t __t1491t__=0;
  uint64_t __t1493t=0;
  uint64_t __t1495t__=0;
  __t1490t=0;
  inc__t1473t(__t1490t,&__t1491t__);
  print__t385t(__t1491t__);
  __t1493t=0;
  inc__t1484t(__t1493t,&__t1495t__);
  print__t385t(__t1495t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1489t();return 0;}