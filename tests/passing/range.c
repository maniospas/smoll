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

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t1477t, uint64_t* __t1478t) {
  int __t465t=0;
  uint64_t __t466t=0;
  uint64_t _from=0;
  uint64_t __t467t=0;
  uint64_t from=0;
  __t466t=0;
  _from=__t466t;
  __t467t=_from;
  from=__t467t;
  goto __t_return;
  __t_return:
  *__t1477t=from;
  *__t1478t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1479t) {
  int value=0;
  *__t1479t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1480t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1480t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1481t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1481t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1482t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1482t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1483t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1483t=z;
}

static inline __attribute__((always_inline)) int next__t473t(uint64_t* __t1484t, uint64_t r__to, uint64_t* __t1485t) {
  uint64_t r__from=*__t1484t;
  char __t474t__=0;
  uint64_t ret=0;
  uint64_t __t475t=0;
  uint64_t __t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t474t__);
  if(__t474t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t475t=1;
  add__t174t(ret,__t475t,&__t476t__);
  r__from=__t476t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1484t=r__from;
  *__t1485t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1467t() {
  uint64_t __t1468t=0;
  uint64_t __t1469t__from=0;
  uint64_t __t1469t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1470t=0;
  uint64_t __t1471t__=0;
  uint64_t __t1472t=0;
  uint64_t value=0;
  uint64_t __t1474t=0;
  uint64_t __t1475t__=0;
  int __t_complain=0;
  __t1468t=10;
  range__t464t(__t1468t,&__t1469t__from,&__t1469t__to);
  r__from=__t1469t__from;
  r__to=__t1469t__to;
  while(1){
  __t_complain=next__t473t(&r__from,r__to,&__t1471t__);
  __t1470t=__t_complain;
  __t1472t=__t1471t__;
  value=__t1472t;
  __t1470t=__t1470t==0;
  if(!__t1470t){
  break;
  }
  print__t385t(value);
  }
  __t1474t=1;
  add__t174t(value,__t1474t,&__t1475t__);
  value=__t1475t__;
  print__t385t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}