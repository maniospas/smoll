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

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1855t, uint64_t* __t1856t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1855t=from;
  *__t1856t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1857t, uint64_t* __t1858t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1857t=__t473t__from;
  *__t1858t=__t473t__to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1859t) {
  int value=0;
  *__t1859t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1860t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1860t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1861t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1861t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1862t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1862t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1863t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1863t=z;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1864t, uint64_t r__to, uint64_t* __t1865t) {
  uint64_t r__from=*__t1864t;
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
  *__t1864t=r__from;
  *__t1865t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1844t() {
  uint64_t __t1846t=0;
  uint64_t __t1847t__from=0;
  uint64_t __t1847t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1848t=0;
  uint64_t __t1849t__=0;
  uint64_t __t1850t=0;
  uint64_t value=0;
  uint64_t __t1852t=0;
  uint64_t __t1853t__=0;
  int __t_complain=0;
  console__t366t();
  __t1846t=10;
  range__t471t(__t1846t,&__t1847t__from,&__t1847t__to);
  r__from=__t1847t__from;
  r__to=__t1847t__to;
  while(1){
  __t_complain=next__t474t(&r__from,r__to,&__t1849t__);
  __t1848t=__t_complain;
  __t1850t=__t1849t__;
  value=__t1850t;
  __t1848t=__t1848t==0;
  if(!__t1848t){
  break;
  }
  print__t393t(value);
  }
  __t1852t=1;
  add__t175t(value,__t1852t,&__t1853t__);
  value=__t1853t__;
  print__t393t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}