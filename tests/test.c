#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
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
int add__t2166t(uint64_t x, uint64_t* __t2250t) ;
;
int add__t2188t(uint64_t x, uint64_t* __t2252t) ;
;
int add__t2210t(uint64_t x, uint64_t* __t2254t) ;
;
int addnat__t2230t(uint64_t x, __smoll_func_ptr_type* __t2256t) ;
;
;
static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2244t) {
  int value=0;
  *__t2244t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t2245t) {
  int __t42t__=0;
  false__t10t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t2245t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t2246t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2246t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2247t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2247t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2248t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2248t=z;
}

static inline __attribute__((always_inline)) void add__t2149t(uint64_t x, uint64_t* __t2249t) {
  uint64_t __t2151t=0;
  uint64_t __t2152t__=0;
  __t2151t=0;
  add__t188t(x,__t2151t,&__t2152t__);
  goto __t_return;
  __t_return:
  *__t2249t=__t2152t__;
}

int add__t2166t(uint64_t x, uint64_t* __t2250t) {
  uint64_t __t2167t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2149t(x,&__t2167t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2250t=__t2167t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2153t(uint64_t x, uint64_t* __t2251t) {
  uint64_t __t2155t=0;
  uint64_t __t2156t__=0;
  __t2155t=1;
  add__t188t(x,__t2155t,&__t2156t__);
  goto __t_return;
  __t_return:
  *__t2251t=__t2156t__;
}

int add__t2188t(uint64_t x, uint64_t* __t2252t) {
  uint64_t __t2189t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2153t(x,&__t2189t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2252t=__t2189t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2157t(uint64_t x, uint64_t* __t2253t) {
  uint64_t __t2159t=0;
  uint64_t __t2160t__=0;
  __t2159t=2;
  add__t188t(x,__t2159t,&__t2160t__);
  goto __t_return;
  __t_return:
  *__t2253t=__t2160t__;
}

int add__t2210t(uint64_t x, uint64_t* __t2254t) {
  uint64_t __t2211t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2157t(x,&__t2211t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2254t=__t2211t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void addnat__t2161t(uint64_t x, __smoll_func_ptr_type* __t2255t) {
  uint64_t __t2163t=0;
  char __t2164t__=0;
  __smoll_func_ptr_type __t2170t=0;
  __smoll_func_ptr_type __t2179t=0;
  uint64_t __t2185t=0;
  char __t2186t__=0;
  __smoll_func_ptr_type __t2192t=0;
  __smoll_func_ptr_type __t2201t=0;
  uint64_t __t2207t=0;
  char __t2208t__=0;
  __smoll_func_ptr_type __t2214t=0;
  __smoll_func_ptr_type __t2223t=0;
  __t2163t=0;
  eq__t133t(x,__t2163t,&__t2164t__);
  if(__t2164t__){
  __t2170t=(__smoll_func_ptr_type)add__t2166t;
  __t2179t=(__smoll_func_ptr_type)__t2170t;
  goto __t_return;
  }
  __t2185t=1;
  eq__t133t(x,__t2185t,&__t2186t__);
  if(__t2186t__){
  __t2192t=(__smoll_func_ptr_type)add__t2188t;
  __t2201t=(__smoll_func_ptr_type)__t2192t;
  __t2179t=__t2201t;
  goto __t_return;
  }
  __t2207t=2;
  eq__t133t(x,__t2207t,&__t2208t__);
  if(__t2208t__){
  __t2214t=(__smoll_func_ptr_type)add__t2210t;
  __t2223t=(__smoll_func_ptr_type)__t2214t;
  __t2179t=__t2223t;
  goto __t_return;
  }
  __t_return:
  *__t2255t=__t2179t;
}

int addnat__t2230t(uint64_t x, __smoll_func_ptr_type* __t2256t) {
  __smoll_func_ptr_type __t2231t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  addnat__t2161t(x,&__t2231t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2256t=__t2231t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat_______nat______nat____t2135t(__smoll_func_ptr_type* __t2257t) {
  __smoll_func_ptr_type value=0;
  *__t2257t=value;
}



static inline __attribute__((always_inline)) int call_one__t2136t(__smoll_func_ptr_type x, __smoll_func_ptr_type* __t2258t) {
  uint64_t __t2137t=0;
  __smoll_func_ptr_type __t2139t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2137t=1;
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , __smoll_func_ptr_type* ))x)(__t2137t,&__t2139t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2258t=__t2139t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat______nat___t2130t(__smoll_func_ptr_type* __t2259t) {
  __smoll_func_ptr_type value=0;
  *__t2259t=value;
}



static inline __attribute__((always_inline)) void print__t407t(uint64_t value) {
  int __t408t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2228t() {
  __smoll_func_ptr_type __t2234t=0;
  __smoll_func_ptr_type __t2239t__=0;
  __smoll_func_ptr_type x=0;
  uint64_t __t2240t=0;
  uint64_t __t2242t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t2234t=(__smoll_func_ptr_type)addnat__t2230t;
  __t_errcode=call_one__t2136t(__t2234t,&__t2239t__);
  if(__t_errcode){
  goto __t_failure;
  }
  x=__t2239t__;
  __t2240t=5;
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , uint64_t* ))x)(__t2240t,&__t2242t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t407t(__t2242t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2228t();return 0;}