#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2020t="one";
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t2018t() {
  print__t375t(__t2020t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2040t) {
  int value=0;
  *__t2040t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2041t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2041t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2042t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2042t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2043t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) void inc__t2005t(uint64_t x, uint64_t* __t2044t) {
  uint64_t __t2006t=0;
  uint64_t __t2007t__=0;
  __t2006t=1;
  add__t174t(x,__t2006t,&__t2007t__);
  goto __t_return;
  __t_return:
  *__t2044t=__t2007t__;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t2008t(uint64_t x, uint64_t* __t2045t) {
  uint64_t __t2009t=0;
  uint64_t __t2010t__=0;
  __t2009t=1;
  add__t174t(x,__t2009t,&__t2010t__);
  goto __t_return;
  __t_return:
  *__t2045t=__t2010t__;
}

static inline __attribute__((always_inline)) void inc__t2011t(uint64_t x, uint64_t* __t2046t) {
  uint64_t __t2012t=0;
  uint64_t __t2013t__=0;
  __t2012t=2;
  add__t174t(x,__t2012t,&__t2013t__);
  goto __t_return;
  __t_return:
  *__t2046t=__t2013t__;
}

static inline __attribute__((always_inline)) void main__t2026t() {
  uint64_t __t2030t=0;
  uint64_t __t2031t__=0;
  uint64_t __t2033t=0;
  uint64_t __t2034t__=0;
  uint64_t __t2036t=0;
  uint64_t __t2038t__=0;
  console__t365t();
  which__t2018t();
  __t2030t=0;
  inc__t2005t(__t2030t,&__t2031t__);
  print__t388t(__t2031t__);
  __t2033t=0;
  inc__t2008t(__t2033t,&__t2034t__);
  print__t388t(__t2034t__);
  __t2036t=0;
  inc__t2011t(__t2036t,&__t2038t__);
  print__t388t(__t2038t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2026t();return 0;}