#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative int to id",
"cannot convert negative float to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
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
int fib__temp1222v(uint64_t n, uint64_t* __temp1251v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1243v) {
  int value=0;
  *__temp1243v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1244v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1244v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp81v(uint64_t x, uint64_t y, int* __temp1245v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp83v__;
}

static inline __attribute__((always_inline)) void le__temp284v(uint64_t x, uint64_t y, char* __temp1246v) {
  int __temp285v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp285v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void lt__temp236v(uint64_t x, uint64_t y, char* __temp1247v) {
  int __temp237v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp237v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) int sub__temp334v(uint64_t x, uint64_t y, uint64_t* __temp1248v) {
  int __temp335v__=0;
  int __temp336v=0;
  int __temp337v=0;
  char __temp338v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp81v(x,y,&__temp335v__);
  lt__temp236v(x,y,&__temp338v__);
  if(__temp338v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1248v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int call_fib__temp1226v(uint64_t n, uint64_t* __temp1249v) {
  uint64_t __temp1227v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=fib__temp1222v(n,&__temp1227v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1249v=__temp1227v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp159v(uint64_t x, uint64_t y, uint64_t* __temp1250v) {
  int __temp160v__=0;
  uint64_t z=0;
  is_different__temp81v(x,y,&__temp160v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

int fib__temp1222v(uint64_t n, uint64_t* __temp1251v) {
  uint64_t __temp1233v=0;
  char __temp1234v__=0;
  uint64_t __temp1235v=0;
  uint64_t __temp1236v=0;
  uint64_t __temp1237v__=0;
  uint64_t __temp1238v__=0;
  uint64_t __temp1239v=0;
  uint64_t __temp1240v__=0;
  uint64_t __temp1241v__=0;
  uint64_t __temp1242v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1233v=1;
  le__temp284v(n,__temp1233v,&__temp1234v__);
  if(__temp1234v__){
  __temp1235v=1;
  goto __temp_return;
  }
  __temp1236v=1;
  __temp_errcode=sub__temp334v(n,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1226v(__temp1237v__,&__temp1238v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1239v=2;
  __temp_errcode=sub__temp334v(n,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1226v(__temp1240v__,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp159v(__temp1238v__,__temp1241v__,&__temp1242v__);
  __temp1235v=__temp1242v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1251v=__temp1235v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1228v() {
  uint64_t __temp1229v=0;
  uint64_t __temp1230v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1229v=42;
  __temp_errcode=fib__temp1222v(__temp1229v,&__temp1230v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp374v(__temp1230v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}