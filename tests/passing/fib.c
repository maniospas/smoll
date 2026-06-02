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
int fib__t1480t(uint64_t n, uint64_t* __t1507t) ;
static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1500t) {
  int value=0;
  *__t1500t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1501t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1501t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1502t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1502t=__t96t__;
}

static inline __attribute__((always_inline)) void le__t299t(uint64_t x, uint64_t y, char* __t1503t) {
  int __t300t__=0;
  char z=0;
  is_different__t94t(x,y,&__t300t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1503t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1504t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1504t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1505t) {
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
  *__t1505t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1506t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1506t=z;
}

int fib__t1480t(uint64_t n, uint64_t* __t1507t) {
  uint64_t __t1490t=0;
  char __t1491t__=0;
  uint64_t __t1492t=0;
  uint64_t __t1493t=0;
  uint64_t __t1494t__=0;
  uint64_t __t1495t__=0;
  uint64_t __t1496t=0;
  uint64_t __t1497t__=0;
  uint64_t __t1498t__=0;
  uint64_t __t1499t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1490t=1;
  le__t299t(n,__t1490t,&__t1491t__);
  if(__t1491t__){
  __t1492t=1;
  goto __t_return;
  }
  __t1493t=1;
  __t_errcode=sub__t351t(n,__t1493t,&__t1494t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1480t(__t1494t__,&__t1495t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1496t=2;
  __t_errcode=sub__t351t(n,__t1496t,&__t1497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1480t(__t1497t__,&__t1498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t174t(__t1495t__,__t1498t__,&__t1499t__);
  __t1492t=__t1499t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1507t=__t1492t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1484t() {
  uint64_t __t1486t=0;
  uint64_t __t1487t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t1486t=10;
  __t_errcode=fib__t1480t(__t1486t,&__t1487t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t388t(__t1487t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1484t();return 0;}