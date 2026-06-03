#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2091t="one";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void which__t2089t() {
  print__t380t(__t2091t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2111t) {
  int value=0;
  *__t2111t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2112t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2112t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2113t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2113t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2114t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2114t=z;
}

static inline __attribute__((always_inline)) void inc__t2076t(uint64_t x, uint64_t* __t2115t) {
  uint64_t __t2077t=0;
  uint64_t __t2078t__=0;
  __t2077t=1;
  add__t175t(x,__t2077t,&__t2078t__);
  goto __t_return;
  __t_return:
  *__t2115t=__t2078t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2079t(uint64_t x, uint64_t* __t2116t) {
  uint64_t __t2080t=0;
  uint64_t __t2081t__=0;
  __t2080t=1;
  add__t175t(x,__t2080t,&__t2081t__);
  goto __t_return;
  __t_return:
  *__t2116t=__t2081t__;
}

static inline __attribute__((always_inline)) void inc__t2082t(uint64_t x, uint64_t* __t2117t) {
  uint64_t __t2083t=0;
  uint64_t __t2084t__=0;
  __t2083t=2;
  add__t175t(x,__t2083t,&__t2084t__);
  goto __t_return;
  __t_return:
  *__t2117t=__t2084t__;
}

static inline __attribute__((always_inline)) void main__t2097t() {
  uint64_t __t2101t=0;
  uint64_t __t2102t__=0;
  uint64_t __t2104t=0;
  uint64_t __t2105t__=0;
  uint64_t __t2107t=0;
  uint64_t __t2109t__=0;
  console__t366t();
  which__t2089t();
  __t2101t=0;
  inc__t2076t(__t2101t,&__t2102t__);
  print__t393t(__t2102t__);
  __t2104t=0;
  inc__t2079t(__t2104t,&__t2105t__);
  print__t393t(__t2105t__);
  __t2107t=0;
  inc__t2082t(__t2107t,&__t2109t__);
  print__t393t(__t2109t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2097t();return 0;}