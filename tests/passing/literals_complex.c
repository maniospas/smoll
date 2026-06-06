#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2557t="one";
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

static inline __attribute__((always_inline)) void which__t2555t() {
  print__t380t(__t2557t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2577t) {
  int value=0;
  *__t2577t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2578t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2578t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2579t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2579t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2580t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2580t=z;
}

static inline __attribute__((always_inline)) void inc__t2542t(uint64_t x, uint64_t* __t2581t) {
  uint64_t __t2543t=0;
  uint64_t __t2544t__=0;
  __t2543t=1;
  add__t175t(x,__t2543t,&__t2544t__);
  goto __t_return;
  __t_return:
  *__t2581t=__t2544t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2545t(uint64_t x, uint64_t* __t2582t) {
  uint64_t __t2546t=0;
  uint64_t __t2547t__=0;
  __t2546t=1;
  add__t175t(x,__t2546t,&__t2547t__);
  goto __t_return;
  __t_return:
  *__t2582t=__t2547t__;
}

static inline __attribute__((always_inline)) void inc__t2548t(uint64_t x, uint64_t* __t2583t) {
  uint64_t __t2549t=0;
  uint64_t __t2550t__=0;
  __t2549t=2;
  add__t175t(x,__t2549t,&__t2550t__);
  goto __t_return;
  __t_return:
  *__t2583t=__t2550t__;
}

static inline __attribute__((always_inline)) void main__t2563t() {
  uint64_t __t2567t=0;
  uint64_t __t2568t__=0;
  uint64_t __t2570t=0;
  uint64_t __t2571t__=0;
  uint64_t __t2573t=0;
  uint64_t __t2575t__=0;
  console__t366t();
  which__t2555t();
  __t2567t=0;
  inc__t2542t(__t2567t,&__t2568t__);
  print__t393t(__t2568t__);
  __t2570t=0;
  inc__t2545t(__t2570t,&__t2571t__);
  print__t393t(__t2571t__);
  __t2573t=0;
  inc__t2548t(__t2573t,&__t2575t__);
  print__t393t(__t2575t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2563t();return 0;}