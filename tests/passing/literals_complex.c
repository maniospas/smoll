#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t2087t="one";
static const char* __t_all_errcodes[37] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t2085t() {
  print__t380t(__t2087t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2107t) {
  int value=0;
  *__t2107t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2108t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2108t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2109t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2109t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2110t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2110t=z;
}

static inline __attribute__((always_inline)) void inc__t2072t(uint64_t x, uint64_t* __t2111t) {
  uint64_t __t2073t=0;
  uint64_t __t2074t__=0;
  __t2073t=1;
  add__t175t(x,__t2073t,&__t2074t__);
  goto __t_return;
  __t_return:
  *__t2111t=__t2074t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2075t(uint64_t x, uint64_t* __t2112t) {
  uint64_t __t2076t=0;
  uint64_t __t2077t__=0;
  __t2076t=1;
  add__t175t(x,__t2076t,&__t2077t__);
  goto __t_return;
  __t_return:
  *__t2112t=__t2077t__;
}

static inline __attribute__((always_inline)) void inc__t2078t(uint64_t x, uint64_t* __t2113t) {
  uint64_t __t2079t=0;
  uint64_t __t2080t__=0;
  __t2079t=2;
  add__t175t(x,__t2079t,&__t2080t__);
  goto __t_return;
  __t_return:
  *__t2113t=__t2080t__;
}

static inline __attribute__((always_inline)) void main__t2093t() {
  uint64_t __t2097t=0;
  uint64_t __t2098t__=0;
  uint64_t __t2100t=0;
  uint64_t __t2101t__=0;
  uint64_t __t2103t=0;
  uint64_t __t2105t__=0;
  console__t366t();
  which__t2085t();
  __t2097t=0;
  inc__t2072t(__t2097t,&__t2098t__);
  print__t393t(__t2098t__);
  __t2100t=0;
  inc__t2075t(__t2100t,&__t2101t__);
  print__t393t(__t2101t__);
  __t2103t=0;
  inc__t2078t(__t2103t,&__t2105t__);
  print__t393t(__t2105t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2093t();return 0;}