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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void false__t10t(int* __t2042t) {
  int value=0;
  *__t2042t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2043t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2043t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2044t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2044t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2045t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2045t=z;
}

static inline __attribute__((always_inline)) void inc__t2017t(uint64_t x, uint64_t* __t2046t) {
  int __t2018t=0;
  uint64_t __t2021t=0;
  uint64_t __t2022t__=0;
  __t2021t=1;
  add__t175t(x,__t2021t,&__t2022t__);
  goto __t_return;
  __t_return:
  *__t2046t=__t2022t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2028t(uint64_t x, uint64_t* __t2047t) {
  int __t2029t=0;
  uint64_t __t2031t=0;
  uint64_t __t2032t__=0;
  __t2031t=2;
  add__t175t(x,__t2031t,&__t2032t__);
  goto __t_return;
  __t_return:
  *__t2047t=__t2032t__;
}

static inline __attribute__((always_inline)) void main__t2033t() {
  uint64_t __t2035t=0;
  uint64_t __t2036t__=0;
  uint64_t __t2038t=0;
  uint64_t __t2040t__=0;
  console__t366t();
  __t2035t=0;
  inc__t2017t(__t2035t,&__t2036t__);
  print__t393t(__t2036t__);
  __t2038t=0;
  inc__t2028t(__t2038t,&__t2040t__);
  print__t393t(__t2040t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2033t();return 0;}