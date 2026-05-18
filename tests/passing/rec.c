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
int fib__temp1246v(uint64_t n, uint64_t* __temp1275v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1267v) {
  int value=0;
  *__temp1267v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1268v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1268v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1269v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1269v=__temp95v__;
}

static inline __attribute__((always_inline)) void le__temp295v(uint64_t x, uint64_t y, char* __temp1270v) {
  int __temp296v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp296v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1271v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1272v) {
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
  *__temp1272v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int call_fib__temp1250v(uint64_t n, uint64_t* __temp1273v) {
  uint64_t __temp1251v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=fib__temp1246v(n,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1273v=__temp1251v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1274v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

int fib__temp1246v(uint64_t n, uint64_t* __temp1275v) {
  uint64_t __temp1257v=0;
  char __temp1258v__=0;
  uint64_t __temp1259v=0;
  uint64_t __temp1260v=0;
  uint64_t __temp1261v__=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1263v=0;
  uint64_t __temp1264v__=0;
  uint64_t __temp1265v__=0;
  uint64_t __temp1266v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1257v=1;
  le__temp295v(n,__temp1257v,&__temp1258v__);
  if(__temp1258v__){
  __temp1259v=1;
  goto __temp_return;
  }
  __temp1260v=1;
  __temp_errcode=sub__temp347v(n,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1250v(__temp1261v__,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1263v=2;
  __temp_errcode=sub__temp347v(n,__temp1263v,&__temp1264v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=call_fib__temp1250v(__temp1264v__,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp170v(__temp1262v__,__temp1265v__,&__temp1266v__);
  __temp1259v=__temp1266v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1275v=__temp1259v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1252v() {
  uint64_t __temp1253v=0;
  uint64_t __temp1254v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1253v=42;
  __temp_errcode=fib__temp1246v(__temp1253v,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp376v(__temp1254v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1252v();return 0;}