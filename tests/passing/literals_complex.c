#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t1865t="one";
static const char* __t_all_errcodes[38] = {"noerr",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t1863t() {
  print__t369t(__t1865t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1884t) {
  int value=0;
  *__t1884t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1885t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1885t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1886t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1886t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1887t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1887t=z;
}

static inline __attribute__((always_inline)) void inc__t1850t(uint64_t x, uint64_t* __t1888t) {
  uint64_t __t1851t=0;
  uint64_t __t1852t__=0;
  __t1851t=1;
  add__t171t(x,__t1851t,&__t1852t__);
  goto __t_return;
  __t_return:
  *__t1888t=__t1852t__;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1853t(uint64_t x, uint64_t* __t1889t) {
  uint64_t __t1854t=0;
  uint64_t __t1855t__=0;
  __t1854t=1;
  add__t171t(x,__t1854t,&__t1855t__);
  goto __t_return;
  __t_return:
  *__t1889t=__t1855t__;
}

static inline __attribute__((always_inline)) void inc__t1856t(uint64_t x, uint64_t* __t1890t) {
  uint64_t __t1857t=0;
  uint64_t __t1858t__=0;
  __t1857t=2;
  add__t171t(x,__t1857t,&__t1858t__);
  goto __t_return;
  __t_return:
  *__t1890t=__t1858t__;
}

static inline __attribute__((always_inline)) void main__t1871t() {
  uint64_t __t1874t=0;
  uint64_t __t1875t__=0;
  uint64_t __t1877t=0;
  uint64_t __t1878t__=0;
  uint64_t __t1880t=0;
  uint64_t __t1882t__=0;
  which__t1863t();
  __t1874t=0;
  inc__t1850t(__t1874t,&__t1875t__);
  print__t382t(__t1875t__);
  __t1877t=0;
  inc__t1853t(__t1877t,&__t1878t__);
  print__t382t(__t1878t__);
  __t1880t=0;
  inc__t1856t(__t1880t,&__t1882t__);
  print__t382t(__t1882t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1871t();return 0;}