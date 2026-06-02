#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t1520t, uint64_t* __t1521t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t1520t=from;
  *__t1521t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1522t) {
  int value=0;
  *__t1522t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1523t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1523t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1524t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1524t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1525t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1525t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1526t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t1527t, uint64_t r__to, uint64_t* __t1528t) {
  uint64_t r__from=*__t1527t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1527t=r__from;
  *__t1528t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1509t() {
  uint64_t __t1511t=0;
  uint64_t __t1512t__from=0;
  uint64_t __t1512t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1513t=0;
  uint64_t __t1514t__=0;
  uint64_t __t1515t=0;
  uint64_t value=0;
  uint64_t __t1517t=0;
  uint64_t __t1518t__=0;
  int __t_complain=0;
  console__t366t();
  __t1511t=10;
  range__t468t(__t1511t,&__t1512t__from,&__t1512t__to);
  r__from=__t1512t__from;
  r__to=__t1512t__to;
  while(1){
  __t_complain=next__t477t(&r__from,r__to,&__t1514t__);
  __t1513t=__t_complain;
  __t1515t=__t1514t__;
  value=__t1515t;
  __t1513t=__t1513t==0;
  if(!__t1513t){
  break;
  }
  print__t389t(value);
  }
  __t1517t=1;
  add__t175t(value,__t1517t,&__t1518t__);
  value=__t1518t__;
  print__t389t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1509t();return 0;}