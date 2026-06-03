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
int fib__t1555t(uint64_t n, uint64_t* __t1582t) ;
static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1575t) {
  int value=0;
  *__t1575t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1576t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1576t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1577t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1577t=__t97t__;
}

static inline __attribute__((always_inline)) void le__t300t(uint64_t x, uint64_t y, char* __t1578t) {
  int __t301t__=0;
  char z=0;
  is_different__t95t(x,y,&__t301t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1579t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1579t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1580t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1580t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1581t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1581t=z;
}

int fib__t1555t(uint64_t n, uint64_t* __t1582t) {
  uint64_t __t1565t=0;
  char __t1566t__=0;
  uint64_t __t1567t=0;
  uint64_t __t1568t=0;
  uint64_t __t1569t__=0;
  uint64_t __t1570t__=0;
  uint64_t __t1571t=0;
  uint64_t __t1572t__=0;
  uint64_t __t1573t__=0;
  uint64_t __t1574t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1565t=1;
  le__t300t(n,__t1565t,&__t1566t__);
  if(__t1566t__){
  __t1567t=1;
  goto __t_return;
  }
  __t1568t=1;
  __t_errcode=sub__t352t(n,__t1568t,&__t1569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1555t(__t1569t__,&__t1570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1571t=2;
  __t_errcode=sub__t352t(n,__t1571t,&__t1572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1555t(__t1572t__,&__t1573t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t175t(__t1570t__,__t1573t__,&__t1574t__);
  __t1567t=__t1574t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1582t=__t1567t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1559t() {
  uint64_t __t1561t=0;
  uint64_t __t1562t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1561t=10;
  __t_errcode=fib__t1555t(__t1561t,&__t1562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t393t(__t1562t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1559t();return 0;}