#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
const char* const __t2305t="failed";
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
int add__t2180t(uint64_t x, uint64_t* __t2313t) ;
;
int add__t2202t(uint64_t x, uint64_t* __t2315t) ;
;
int add__t2224t(uint64_t x, uint64_t* __t2317t) ;
;
int add__t2246t(uint64_t x, uint64_t* __t2319t) ;
;
int add__t2268t(uint64_t x, uint64_t* __t2321t) ;
;
int add__t2290t(uint64_t y, __smoll_func_ptr_type* __t2323t) ;
;
;
static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2307t) {
  int value=0;
  *__t2307t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t2308t) {
  int __t42t__=0;
  false__t10t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t2308t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t2309t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2309t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2310t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2310t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2311t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2311t=z;
}

static inline __attribute__((always_inline)) void add__t2155t(uint64_t x, uint64_t* __t2312t) {
  uint64_t __t2157t=0;
  uint64_t __t2158t__=0;
  __t2157t=1;
  add__t188t(x,__t2157t,&__t2158t__);
  goto __t_return;
  __t_return:
  *__t2312t=__t2158t__;
}

int add__t2180t(uint64_t x, uint64_t* __t2313t) {
  uint64_t __t2181t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2155t(x,&__t2181t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2313t=__t2181t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2159t(uint64_t x, uint64_t* __t2314t) {
  uint64_t __t2161t=0;
  uint64_t __t2162t__=0;
  __t2161t=2;
  add__t188t(x,__t2161t,&__t2162t__);
  goto __t_return;
  __t_return:
  *__t2314t=__t2162t__;
}

int add__t2202t(uint64_t x, uint64_t* __t2315t) {
  uint64_t __t2203t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2159t(x,&__t2203t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2315t=__t2203t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2163t(uint64_t x, uint64_t* __t2316t) {
  uint64_t __t2165t=0;
  uint64_t __t2166t__=0;
  __t2165t=3;
  add__t188t(x,__t2165t,&__t2166t__);
  goto __t_return;
  __t_return:
  *__t2316t=__t2166t__;
}

int add__t2224t(uint64_t x, uint64_t* __t2317t) {
  uint64_t __t2225t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2163t(x,&__t2225t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2317t=__t2225t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2167t(uint64_t x, uint64_t* __t2318t) {
  uint64_t __t2169t=0;
  uint64_t __t2170t__=0;
  __t2169t=4;
  add__t188t(x,__t2169t,&__t2170t__);
  goto __t_return;
  __t_return:
  *__t2318t=__t2170t__;
}

int add__t2246t(uint64_t x, uint64_t* __t2319t) {
  uint64_t __t2247t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2167t(x,&__t2247t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2319t=__t2247t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2171t(uint64_t x, uint64_t* __t2320t) {
  uint64_t __t2173t=0;
  uint64_t __t2174t__=0;
  __t2173t=5;
  add__t188t(x,__t2173t,&__t2174t__);
  goto __t_return;
  __t_return:
  *__t2320t=__t2174t__;
}

int add__t2268t(uint64_t x, uint64_t* __t2321t) {
  uint64_t __t2269t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2171t(x,&__t2269t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2321t=__t2269t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2175t(uint64_t y, __smoll_func_ptr_type* __t2322t) {
  uint64_t __t2177t=0;
  char __t2178t__=0;
  __smoll_func_ptr_type __t2184t=0;
  __smoll_func_ptr_type __t2193t=0;
  uint64_t __t2199t=0;
  char __t2200t__=0;
  __smoll_func_ptr_type __t2206t=0;
  __smoll_func_ptr_type __t2215t=0;
  uint64_t __t2221t=0;
  char __t2222t__=0;
  __smoll_func_ptr_type __t2228t=0;
  __smoll_func_ptr_type __t2237t=0;
  uint64_t __t2243t=0;
  char __t2244t__=0;
  __smoll_func_ptr_type __t2250t=0;
  __smoll_func_ptr_type __t2259t=0;
  uint64_t __t2265t=0;
  char __t2266t__=0;
  __smoll_func_ptr_type __t2272t=0;
  __smoll_func_ptr_type __t2281t=0;
  __t2177t=1;
  eq__t133t(y,__t2177t,&__t2178t__);
  if(__t2178t__){
  __t2184t=(__smoll_func_ptr_type)add__t2180t;
  __t2193t=(__smoll_func_ptr_type)__t2184t;
  goto __t_return;
  }
  __t2199t=2;
  eq__t133t(y,__t2199t,&__t2200t__);
  if(__t2200t__){
  __t2206t=(__smoll_func_ptr_type)add__t2202t;
  __t2215t=(__smoll_func_ptr_type)__t2206t;
  __t2193t=__t2215t;
  goto __t_return;
  }
  __t2221t=3;
  eq__t133t(y,__t2221t,&__t2222t__);
  if(__t2222t__){
  __t2228t=(__smoll_func_ptr_type)add__t2224t;
  __t2237t=(__smoll_func_ptr_type)__t2228t;
  __t2193t=__t2237t;
  goto __t_return;
  }
  __t2243t=4;
  eq__t133t(y,__t2243t,&__t2244t__);
  if(__t2244t__){
  __t2250t=(__smoll_func_ptr_type)add__t2246t;
  __t2259t=(__smoll_func_ptr_type)__t2250t;
  __t2193t=__t2259t;
  goto __t_return;
  }
  __t2265t=5;
  eq__t133t(y,__t2265t,&__t2266t__);
  if(__t2266t__){
  __t2272t=(__smoll_func_ptr_type)add__t2268t;
  __t2281t=(__smoll_func_ptr_type)__t2272t;
  __t2193t=__t2281t;
  goto __t_return;
  }
  __t_return:
  *__t2322t=__t2193t;
}

int add__t2290t(uint64_t y, __smoll_func_ptr_type* __t2323t) {
  __smoll_func_ptr_type __t2291t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2175t(y,&__t2291t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2323t=__t2291t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat_______nat______nat____t2135t(__smoll_func_ptr_type* __t2324t) {
  __smoll_func_ptr_type value=0;
  *__t2324t=value;
}



static inline __attribute__((always_inline)) int next__t2136t(__smoll_func_ptr_type addition_generator, __smoll_func_ptr_type* __t2325t) {
  uint64_t __t2137t=0;
  __smoll_func_ptr_type __t2139t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2137t=3;
  if(!addition_generator){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , __smoll_func_ptr_type* ))addition_generator)(__t2137t,&__t2139t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2325t=__t2139t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat______nat___t2130t(__smoll_func_ptr_type* __t2326t) {
  __smoll_func_ptr_type value=0;
  *__t2326t=value;
}



static inline __attribute__((always_inline)) void print__t407t(uint64_t value) {
  int __t408t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2286t() {
  __smoll_func_ptr_type __t2294t=0;
  __smoll_func_ptr_type __t2299t__=0;
  __smoll_func_ptr_type successor_function=0;
  char __t2300t=0;
  uint64_t __t2301t=0;
  uint64_t __t2303t__=0;
  uint64_t ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t2294t=(__smoll_func_ptr_type)add__t2290t;
  __t_errcode=next__t2136t(__t2294t,&__t2299t__);
  if(__t_errcode){
  goto __t_failure;
  }
  successor_function=__t2299t__;
  __t2301t=5;
  if(!successor_function){
  __t_complain=2;
  __t2300t=__t_complain;
  }
  else{
  __t_complain=((int (*)(uint64_t , uint64_t* ))successor_function)(__t2301t,&__t2303t__);
  __t2300t=__t_complain;
  }
  ret=__t2303t__;
  __t2300t=__t2300t==0;
  if(__t2300t){
  print__t407t(ret);
  }
  else{
  print__t394t(__t2305t);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2286t();return 0;}