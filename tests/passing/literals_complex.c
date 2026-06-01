#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2007t="one";
const char* const __t374t="\n";
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

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t2005t() {
  print__t372t(__t2007t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2026t) {
  int value=0;
  *__t2026t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2027t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2027t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2028t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2028t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2029t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2029t=z;
}

static inline __attribute__((always_inline)) void inc__t1992t(uint64_t x, uint64_t* __t2030t) {
  uint64_t __t1993t=0;
  uint64_t __t1994t__=0;
  __t1993t=1;
  add__t174t(x,__t1993t,&__t1994t__);
  goto __t_return;
  __t_return:
  *__t2030t=__t1994t__;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1995t(uint64_t x, uint64_t* __t2031t) {
  uint64_t __t1996t=0;
  uint64_t __t1997t__=0;
  __t1996t=1;
  add__t174t(x,__t1996t,&__t1997t__);
  goto __t_return;
  __t_return:
  *__t2031t=__t1997t__;
}

static inline __attribute__((always_inline)) void inc__t1998t(uint64_t x, uint64_t* __t2032t) {
  uint64_t __t1999t=0;
  uint64_t __t2000t__=0;
  __t1999t=2;
  add__t174t(x,__t1999t,&__t2000t__);
  goto __t_return;
  __t_return:
  *__t2032t=__t2000t__;
}

static inline __attribute__((always_inline)) void main__t2013t() {
  uint64_t __t2016t=0;
  uint64_t __t2017t__=0;
  uint64_t __t2019t=0;
  uint64_t __t2020t__=0;
  uint64_t __t2022t=0;
  uint64_t __t2024t__=0;
  which__t2005t();
  __t2016t=0;
  inc__t1992t(__t2016t,&__t2017t__);
  print__t385t(__t2017t__);
  __t2019t=0;
  inc__t1995t(__t2019t,&__t2020t__);
  print__t385t(__t2020t__);
  __t2022t=0;
  inc__t1998t(__t2022t,&__t2024t__);
  print__t385t(__t2024t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2013t();return 0;}