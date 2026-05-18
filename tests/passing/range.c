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
"cannot resize a buffer with offset",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1256v, uint64_t* __temp1257v) {
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
  *__temp1256v=from;
  *__temp1257v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1258v) {
  int value=0;
  *__temp1258v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1259v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1259v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1260v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1260v=__temp95v__;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1261v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1262v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1263v, uint64_t r__to, uint64_t* __temp1264v) {
  uint64_t r__from=*__temp1263v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1263v=r__from;
  *__temp1264v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1246v() {
  uint64_t __temp1247v=0;
  uint64_t __temp1248v__from=0;
  uint64_t __temp1248v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __temp1249v=0;
  uint64_t __temp1250v__=0;
  uint64_t __temp1251v=0;
  uint64_t value=0;
  uint64_t __temp1253v=0;
  uint64_t __temp1254v__=0;
  int __temp_complain=0;
  __temp1247v=10;
  range__temp435v(__temp1247v,&__temp1248v__from,&__temp1248v__to);
  r__from=__temp1248v__from;
  r__to=__temp1248v__to;
  while(1){
  __temp_complain=next__temp439v(&r__from,r__to,&__temp1250v__);
  __temp1249v=__temp_complain;
  __temp1251v=__temp1250v__;
  value=__temp1251v;
  __temp1249v=__temp1249v==0;
  if(!__temp1249v){
  break;
  }
  print__temp376v(value);
  }
  __temp1253v=1;
  add__temp170v(value,__temp1253v,&__temp1254v__);
  value=__temp1254v__;
  print__temp376v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1246v();return 0;}