#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[34] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
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
int fib__temp1247v(uint64_t n, uint64_t* __temp1276v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1268v) {
  int value=0;
  *__temp1268v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1269v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1269v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1270v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1270v=__temp95v__;
}

static inline __attribute__((always_inline)) void le__temp295v(uint64_t x, uint64_t y, char* __temp1271v) {
  int __temp296v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp296v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1272v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1273v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1273v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int call_fib__temp1251v(uint64_t n, uint64_t* __temp1274v) {
  uint64_t __temp1252v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=fib__temp1247v(n,&__temp1252v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=__temp1252v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1275v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1275v=z;
}

int fib__temp1247v(uint64_t n, uint64_t* __temp1276v) {
  uint64_t __temp1258v=0;
  char __temp1259v__=0;
  uint64_t __temp1260v=0;
  uint64_t __temp1261v=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1263v__=0;
  uint64_t __temp1264v=0;
  uint64_t __temp1265v__=0;
  uint64_t __temp1266v__=0;
  uint64_t __temp1267v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1258v=1;
  le__temp295v(n,__temp1258v,&__temp1259v__);
  if(__temp1259v__){
  __temp1260v=1;
  goto __temp_return;
  }
  __temp1261v=1;
  __temp_errcode=sub__temp347v(n,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1251v(__temp1262v__,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1264v=2;
  __temp_errcode=sub__temp347v(n,__temp1264v,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1251v(__temp1265v__,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp170v(__temp1263v__,__temp1266v__,&__temp1267v__);
  __temp1260v=__temp1267v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1276v=__temp1260v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1253v() {
  uint64_t __temp1254v=0;
  uint64_t __temp1255v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1254v=42;
  __temp_errcode=fib__temp1247v(__temp1254v,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp376v(__temp1255v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1253v();return 0;}