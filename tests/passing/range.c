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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2023t, uint64_t* __t2024t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2023t=__t613t;
  *__t2024t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2025t, uint64_t* __t2026t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2025t=from;
  *__t2026t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2027t) {
  int value=0;
  *__t2027t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2028t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2028t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2029t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2029t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2030t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2030t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2031t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2031t=z;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t2032t, uint64_t r__to, uint64_t* __t2033t) {
  uint64_t r__from=*__t2032t;
  char __t633t__=0;
  uint64_t ret=0;
  uint64_t __t634t=0;
  uint64_t __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t633t__);
  if(__t633t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t634t=1;
  add__t175t(ret,__t634t,&__t635t__);
  r__from=__t635t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2032t=r__from;
  *__t2033t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2011t() {
  uint64_t __t2013t=0;
  uint64_t __t2014t____t613t=0;
  uint64_t __t2014t__to=0;
  uint64_t __t2015t__from=0;
  uint64_t __t2015t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t2016t=0;
  uint64_t __t2017t__=0;
  uint64_t __t2018t=0;
  uint64_t value=0;
  uint64_t __t2020t=0;
  uint64_t __t2021t__=0;
  int __t_complain=0;
  console__t366t();
  __t2013t=10;
  of__t612t(__t2013t,&__t2014t____t613t,&__t2014t__to);
  range__t629t(__t2014t____t613t,__t2014t__to,&__t2015t__from,&__t2015t__to);
  r__from=__t2015t__from;
  r__to=__t2015t__to;
  while(1){
  __t_complain=next__t632t(&r__from,r__to,&__t2017t__);
  __t2016t=__t_complain;
  __t2018t=__t2017t__;
  value=__t2018t;
  __t2016t=__t2016t==0;
  if(!__t2016t){
  break;
  }
  print__t393t(value);
  }
  __t2020t=1;
  add__t175t(value,__t2020t,&__t2021t__);
  value=__t2021t__;
  print__t393t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}