#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t395t="\n";
static const char* __t_all_errcodes[39] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
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
"invalid float conversion from string without a value after the dot",
"does not match",
"empty input name",
"cannot tag a structural type",
"tag surface cannot be structural type"
};
int test1__t2273t(uint64_t x, uint64_t y, uint64_t* __t2310t) ;
;
int test2__t2290t(uint64_t x, uint64_t y, uint64_t* __t2313t) ;
;
static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2305t) {
  int value=0;
  *__t2305t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2306t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2306t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2307t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2307t=__t105t__;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2308t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2308t=z;
}

static inline __attribute__((always_inline)) void test1__t2243t(uint64_t x, uint64_t y, uint64_t* __t2309t) {
  uint64_t __t2244t=0;
  uint64_t __t2245t__=0;
  uint64_t __t2246t__=0;
  __t2244t=1;
  add__t183t(y,__t2244t,&__t2245t__);
  add__t183t(x,__t2245t__,&__t2246t__);
  goto __t_return;
  __t_return:
  *__t2309t=__t2246t__;
}

int test1__t2273t(uint64_t x, uint64_t y, uint64_t* __t2310t) {
  uint64_t __t2274t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  test1__t2243t(x,y,&__t2274t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2310t=__t2274t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat___nat______nat___t2282t(__smoll_func_ptr_type* __t2311t) {
  __smoll_func_ptr_type value=0;
  *__t2311t=value;
}



static inline __attribute__((always_inline)) void print__t406t(uint64_t value) {
  int __t407t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void test2__t2247t(uint64_t x, uint64_t y, uint64_t* __t2312t) {
  uint64_t __t2248t=0;
  uint64_t __t2249t__=0;
  uint64_t __t2250t__=0;
  __t2248t=2;
  add__t183t(y,__t2248t,&__t2249t__);
  add__t183t(x,__t2249t__,&__t2250t__);
  goto __t_return;
  __t_return:
  *__t2312t=__t2250t__;
}

int test2__t2290t(uint64_t x, uint64_t y, uint64_t* __t2313t) {
  uint64_t __t2291t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  test2__t2247t(x,y,&__t2291t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2313t=__t2291t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) int main__t2263t() {
  __smoll_func_ptr_type __t2283t=0;
  uint64_t __t2284t=0;
  uint64_t __t2285t=0;
  uint64_t __t2287t__=0;
  __smoll_func_ptr_type __t2299t=0;
  uint64_t __t2300t=0;
  uint64_t __t2301t=0;
  uint64_t __t2303t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  __t2283t=(__smoll_func_ptr_type)test1__t2273t;
  __t2284t=1;
  __t2285t=1;
  if(!__t2283t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , uint64_t , uint64_t* ))__t2283t)(__t2284t,__t2285t,&__t2287t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t406t(__t2287t__);
  __t2299t=(__smoll_func_ptr_type)test2__t2290t;
  __t2300t=1;
  __t2301t=1;
  if(!__t2299t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , uint64_t , uint64_t* ))__t2299t)(__t2300t,__t2301t,&__t2303t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t406t(__t2303t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2263t();return 0;}