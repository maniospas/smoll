#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2148t="one";
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

static inline __attribute__((always_inline)) void which__t2146t() {
  print__t380t(__t2148t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2168t) {
  int value=0;
  *__t2168t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2169t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2169t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2170t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2170t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2171t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2171t=z;
}

static inline __attribute__((always_inline)) void inc__t2133t(uint64_t x, uint64_t* __t2172t) {
  uint64_t __t2134t=0;
  uint64_t __t2135t__=0;
  __t2134t=1;
  add__t175t(x,__t2134t,&__t2135t__);
  goto __t_return;
  __t_return:
  *__t2172t=__t2135t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2136t(uint64_t x, uint64_t* __t2173t) {
  uint64_t __t2137t=0;
  uint64_t __t2138t__=0;
  __t2137t=1;
  add__t175t(x,__t2137t,&__t2138t__);
  goto __t_return;
  __t_return:
  *__t2173t=__t2138t__;
}

static inline __attribute__((always_inline)) void inc__t2139t(uint64_t x, uint64_t* __t2174t) {
  uint64_t __t2140t=0;
  uint64_t __t2141t__=0;
  __t2140t=2;
  add__t175t(x,__t2140t,&__t2141t__);
  goto __t_return;
  __t_return:
  *__t2174t=__t2141t__;
}

static inline __attribute__((always_inline)) void main__t2154t() {
  uint64_t __t2158t=0;
  uint64_t __t2159t__=0;
  uint64_t __t2161t=0;
  uint64_t __t2162t__=0;
  uint64_t __t2164t=0;
  uint64_t __t2166t__=0;
  console__t366t();
  which__t2146t();
  __t2158t=0;
  inc__t2133t(__t2158t,&__t2159t__);
  print__t393t(__t2159t__);
  __t2161t=0;
  inc__t2136t(__t2161t,&__t2162t__);
  print__t393t(__t2162t__);
  __t2164t=0;
  inc__t2139t(__t2164t,&__t2166t__);
  print__t393t(__t2166t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2154t();return 0;}