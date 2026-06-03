#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1566t, uint64_t* __t1567t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1566t=from;
  *__t1567t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1568t, uint64_t* __t1569t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1568t=__t473t__from;
  *__t1569t=__t473t__to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1570t) {
  int value=0;
  *__t1570t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1571t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1571t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1572t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1572t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1573t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1574t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1575t, uint64_t r__to, uint64_t* __t1576t) {
  uint64_t r__from=*__t1575t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1575t=r__from;
  *__t1576t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1555t() {
  uint64_t __t1557t=0;
  uint64_t __t1558t__from=0;
  uint64_t __t1558t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1559t=0;
  uint64_t __t1560t__=0;
  uint64_t __t1561t=0;
  uint64_t value=0;
  uint64_t __t1563t=0;
  uint64_t __t1564t__=0;
  int __t_complain=0;
  console__t366t();
  __t1557t=10;
  range__t471t(__t1557t,&__t1558t__from,&__t1558t__to);
  r__from=__t1558t__from;
  r__to=__t1558t__to;
  while(1){
  __t_complain=next__t474t(&r__from,r__to,&__t1560t__);
  __t1559t=__t_complain;
  __t1561t=__t1560t__;
  value=__t1561t;
  __t1559t=__t1559t==0;
  if(!__t1559t){
  break;
  }
  print__t393t(value);
  }
  __t1563t=1;
  add__t175t(value,__t1563t,&__t1564t__);
  value=__t1564t__;
  print__t393t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}