#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t1491t, uint64_t* __t1492t) {
  int __t468t=0;
  uint64_t __t469t=0;
  uint64_t _from=0;
  uint64_t __t470t=0;
  uint64_t from=0;
  __t469t=0;
  _from=__t469t;
  __t470t=_from;
  from=__t470t;
  goto __t_return;
  __t_return:
  *__t1491t=from;
  *__t1492t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1493t) {
  int value=0;
  *__t1493t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1494t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1494t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1495t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1495t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1496t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1496t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1497t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1497t=z;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t1498t, uint64_t r__to, uint64_t* __t1499t) {
  uint64_t r__from=*__t1498t;
  char __t477t__=0;
  uint64_t ret=0;
  uint64_t __t478t=0;
  uint64_t __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t478t=1;
  add__t174t(ret,__t478t,&__t479t__);
  r__from=__t479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1498t=r__from;
  *__t1499t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1480t() {
  uint64_t __t1482t=0;
  uint64_t __t1483t__from=0;
  uint64_t __t1483t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1484t=0;
  uint64_t __t1485t__=0;
  uint64_t __t1486t=0;
  uint64_t value=0;
  uint64_t __t1488t=0;
  uint64_t __t1489t__=0;
  int __t_complain=0;
  console__t365t();
  __t1482t=10;
  range__t467t(__t1482t,&__t1483t__from,&__t1483t__to);
  r__from=__t1483t__from;
  r__to=__t1483t__to;
  while(1){
  __t_complain=next__t476t(&r__from,r__to,&__t1485t__);
  __t1484t=__t_complain;
  __t1486t=__t1485t__;
  value=__t1486t;
  __t1484t=__t1484t==0;
  if(!__t1484t){
  break;
  }
  print__t388t(value);
  }
  __t1488t=1;
  add__t174t(value,__t1488t,&__t1489t__);
  value=__t1489t__;
  print__t388t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1480t();return 0;}