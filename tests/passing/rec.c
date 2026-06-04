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
int fib__t1612t(uint64_t n, uint64_t* __t1642t) ;
static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1634t) {
  int value=0;
  *__t1634t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1635t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1635t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1636t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1636t=__t97t__;
}

static inline __attribute__((always_inline)) void le__t300t(uint64_t x, uint64_t y, char* __t1637t) {
  int __t301t__=0;
  char z=0;
  is_different__t95t(x,y,&__t301t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1637t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1638t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1638t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1639t) {
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
  *__t1639t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int call_fib__t1616t(uint64_t n, uint64_t* __t1640t) {
  uint64_t __t1617t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=fib__t1612t(n,&__t1617t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1640t=__t1617t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1641t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1641t=z;
}

int fib__t1612t(uint64_t n, uint64_t* __t1642t) {
  uint64_t __t1624t=0;
  char __t1625t__=0;
  uint64_t __t1626t=0;
  uint64_t __t1627t=0;
  uint64_t __t1628t__=0;
  uint64_t __t1629t__=0;
  uint64_t __t1630t=0;
  uint64_t __t1631t__=0;
  uint64_t __t1632t__=0;
  uint64_t __t1633t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1624t=1;
  le__t300t(n,__t1624t,&__t1625t__);
  if(__t1625t__){
  __t1626t=1;
  goto __t_return;
  }
  __t1627t=1;
  __t_errcode=sub__t352t(n,__t1627t,&__t1628t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1616t(__t1628t__,&__t1629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1630t=2;
  __t_errcode=sub__t352t(n,__t1630t,&__t1631t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1616t(__t1631t__,&__t1632t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t175t(__t1629t__,__t1632t__,&__t1633t__);
  __t1626t=__t1633t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1642t=__t1626t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1618t() {
  uint64_t __t1620t=0;
  uint64_t __t1621t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1620t=42;
  __t_errcode=fib__t1612t(__t1620t,&__t1621t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t393t(__t1621t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1618t();return 0;}