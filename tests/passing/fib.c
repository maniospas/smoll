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
int fib__t1467t(uint64_t n, uint64_t* __t1493t) ;
static inline __attribute__((always_inline)) void false__t10t(int* __t1486t) {
  int value=0;
  *__t1486t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1487t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1487t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1488t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1488t=__t96t__;
}

static inline __attribute__((always_inline)) void le__t299t(uint64_t x, uint64_t y, char* __t1489t) {
  int __t300t__=0;
  char z=0;
  is_different__t94t(x,y,&__t300t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1489t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1490t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1490t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1491t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1491t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1492t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1492t=z;
}

int fib__t1467t(uint64_t n, uint64_t* __t1493t) {
  uint64_t __t1476t=0;
  char __t1477t__=0;
  uint64_t __t1478t=0;
  uint64_t __t1479t=0;
  uint64_t __t1480t__=0;
  uint64_t __t1481t__=0;
  uint64_t __t1482t=0;
  uint64_t __t1483t__=0;
  uint64_t __t1484t__=0;
  uint64_t __t1485t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1476t=1;
  le__t299t(n,__t1476t,&__t1477t__);
  if(__t1477t__){
  __t1478t=1;
  goto __t_return;
  }
  __t1479t=1;
  __t_errcode=sub__t351t(n,__t1479t,&__t1480t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1467t(__t1480t__,&__t1481t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1482t=2;
  __t_errcode=sub__t351t(n,__t1482t,&__t1483t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1467t(__t1483t__,&__t1484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t174t(__t1481t__,__t1484t__,&__t1485t__);
  __t1478t=__t1485t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1493t=__t1478t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1471t() {
  uint64_t __t1472t=0;
  uint64_t __t1473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1472t=10;
  __t_errcode=fib__t1467t(__t1472t,&__t1473t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t1473t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1471t();return 0;}