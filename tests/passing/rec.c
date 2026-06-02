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
int fib__t1480t(uint64_t n, uint64_t* __t1510t) ;
static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1502t) {
  int value=0;
  *__t1502t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1503t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1503t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1504t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1504t=__t96t__;
}

static inline __attribute__((always_inline)) void le__t299t(uint64_t x, uint64_t y, char* __t1505t) {
  int __t300t__=0;
  char z=0;
  is_different__t94t(x,y,&__t300t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1505t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1506t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1506t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1507t) {
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
  *__t1507t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int call_fib__t1484t(uint64_t n, uint64_t* __t1508t) {
  uint64_t __t1485t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=fib__t1480t(n,&__t1485t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1508t=__t1485t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1509t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

int fib__t1480t(uint64_t n, uint64_t* __t1510t) {
  uint64_t __t1492t=0;
  char __t1493t__=0;
  uint64_t __t1494t=0;
  uint64_t __t1495t=0;
  uint64_t __t1496t__=0;
  uint64_t __t1497t__=0;
  uint64_t __t1498t=0;
  uint64_t __t1499t__=0;
  uint64_t __t1500t__=0;
  uint64_t __t1501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1492t=1;
  le__t299t(n,__t1492t,&__t1493t__);
  if(__t1493t__){
  __t1494t=1;
  goto __t_return;
  }
  __t1495t=1;
  __t_errcode=sub__t351t(n,__t1495t,&__t1496t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1484t(__t1496t__,&__t1497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1498t=2;
  __t_errcode=sub__t351t(n,__t1498t,&__t1499t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1484t(__t1499t__,&__t1500t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t174t(__t1497t__,__t1500t__,&__t1501t__);
  __t1494t=__t1501t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1510t=__t1494t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1486t() {
  uint64_t __t1488t=0;
  uint64_t __t1489t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t1488t=42;
  __t_errcode=fib__t1480t(__t1488t,&__t1489t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t388t(__t1489t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1486t();return 0;}