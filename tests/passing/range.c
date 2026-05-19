#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1258v, uint64_t* __temp1259v) {
  int __temp437v=0;
  uint64_t __temp438v=0;
  uint64_t _from=0;
  uint64_t __temp439v=0;
  uint64_t from=0;
  __temp438v=0;
  _from=__temp438v;
  __temp439v=_from;
  from=__temp439v;
  goto __temp_return;
  __temp_return:
  *__temp1258v=from;
  *__temp1259v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1260v) {
  int value=0;
  *__temp1260v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1261v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1261v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1262v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1262v=__temp95v__;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1263v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1264v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1265v, uint64_t r__to, uint64_t* __temp1266v) {
  uint64_t r__from=*__temp1265v;
  char __temp441v__=0;
  uint64_t ret=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp441v__);
  if(__temp441v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp442v=1;
  add__temp170v(ret,__temp442v,&__temp443v__);
  r__from=__temp443v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1265v=r__from;
  *__temp1266v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1248v() {
  uint64_t __temp1249v=0;
  uint64_t __temp1250v__from=0;
  uint64_t __temp1250v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __temp1251v=0;
  uint64_t __temp1252v__=0;
  uint64_t __temp1253v=0;
  uint64_t value=0;
  uint64_t __temp1255v=0;
  uint64_t __temp1256v__=0;
  int __temp_complain=0;
  __temp1249v=10;
  range__temp436v(__temp1249v,&__temp1250v__from,&__temp1250v__to);
  r__from=__temp1250v__from;
  r__to=__temp1250v__to;
  while(1){
  __temp_complain=next__temp440v(&r__from,r__to,&__temp1252v__);
  __temp1251v=__temp_complain;
  __temp1253v=__temp1252v__;
  value=__temp1253v;
  __temp1251v=__temp1251v==0;
  if(!__temp1251v){
  break;
  }
  print__temp376v(value);
  }
  __temp1255v=1;
  add__temp170v(value,__temp1255v,&__temp1256v__);
  value=__temp1256v__;
  print__temp376v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}