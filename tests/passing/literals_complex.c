#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2049t="one";
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t2047t() {
  print__t376t(__t2049t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2069t) {
  int value=0;
  *__t2069t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2070t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2070t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2071t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2071t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2072t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2072t=z;
}

static inline __attribute__((always_inline)) void inc__t2034t(uint64_t x, uint64_t* __t2073t) {
  uint64_t __t2035t=0;
  uint64_t __t2036t__=0;
  __t2035t=1;
  add__t175t(x,__t2035t,&__t2036t__);
  goto __t_return;
  __t_return:
  *__t2073t=__t2036t__;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2037t(uint64_t x, uint64_t* __t2074t) {
  uint64_t __t2038t=0;
  uint64_t __t2039t__=0;
  __t2038t=1;
  add__t175t(x,__t2038t,&__t2039t__);
  goto __t_return;
  __t_return:
  *__t2074t=__t2039t__;
}

static inline __attribute__((always_inline)) void inc__t2040t(uint64_t x, uint64_t* __t2075t) {
  uint64_t __t2041t=0;
  uint64_t __t2042t__=0;
  __t2041t=2;
  add__t175t(x,__t2041t,&__t2042t__);
  goto __t_return;
  __t_return:
  *__t2075t=__t2042t__;
}

static inline __attribute__((always_inline)) void main__t2055t() {
  uint64_t __t2059t=0;
  uint64_t __t2060t__=0;
  uint64_t __t2062t=0;
  uint64_t __t2063t__=0;
  uint64_t __t2065t=0;
  uint64_t __t2067t__=0;
  console__t366t();
  which__t2047t();
  __t2059t=0;
  inc__t2034t(__t2059t,&__t2060t__);
  print__t389t(__t2060t__);
  __t2062t=0;
  inc__t2037t(__t2062t,&__t2063t__);
  print__t389t(__t2063t__);
  __t2065t=0;
  inc__t2040t(__t2065t,&__t2067t__);
  print__t389t(__t2067t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2055t();return 0;}