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

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1232v, uint64_t* __temp1233v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1232v=from;
  *__temp1233v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1234v) {
  int value=0;
  *__temp1234v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1235v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1235v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp81v(uint64_t x, uint64_t y, int* __temp1236v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1236v=__temp83v__;
}

static inline __attribute__((always_inline)) void ge__temp308v(uint64_t x, uint64_t y, char* __temp1237v) {
  int __temp309v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp309v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1237v=z;
}

static inline __attribute__((always_inline)) void add__temp159v(uint64_t x, uint64_t y, uint64_t* __temp1238v) {
  int __temp160v__=0;
  uint64_t z=0;
  is_different__temp81v(x,y,&__temp160v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1238v=z;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1239v, uint64_t r__to, uint64_t* __temp1240v) {
  uint64_t r__from=*__temp1239v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp308v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp159v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1239v=r__from;
  *__temp1240v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1222v() {
  uint64_t __temp1223v=0;
  uint64_t __temp1224v__from=0;
  uint64_t __temp1224v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __temp1225v=0;
  uint64_t __temp1226v__=0;
  uint64_t __temp1227v=0;
  uint64_t value=0;
  uint64_t __temp1229v=0;
  uint64_t __temp1230v__=0;
  int __temp_complain=0;
  __temp1223v=10;
  range__temp435v(__temp1223v,&__temp1224v__from,&__temp1224v__to);
  r__from=__temp1224v__from;
  r__to=__temp1224v__to;
  while(1){
  __temp_complain=next__temp439v(&r__from,r__to,&__temp1226v__);
  __temp1225v=__temp_complain;
  __temp1227v=__temp1226v__;
  value=__temp1227v;
  __temp1225v=__temp1225v==0;
  if(!__temp1225v){
  break;
  }
  print__temp374v(value);
  }
  __temp1229v=1;
  add__temp159v(value,__temp1229v,&__temp1230v__);
  value=__temp1230v__;
  print__temp374v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1222v();return 0;}