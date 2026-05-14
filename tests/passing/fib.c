#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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
int fib__temp1220v(uint64_t n, uint64_t* __temp1246v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1239v) {
  int value=0;
  *__temp1239v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1240v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1240v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1241v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1241v=__temp95v__;
}

static inline __attribute__((always_inline)) void le__temp295v(uint64_t x, uint64_t y, char* __temp1242v) {
  int __temp296v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp296v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1243v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1244v) {
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
  *__temp1244v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1245v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

int fib__temp1220v(uint64_t n, uint64_t* __temp1246v) {
  uint64_t __temp1229v=0;
  char __temp1230v__=0;
  uint64_t __temp1231v=0;
  uint64_t __temp1232v=0;
  uint64_t __temp1233v__=0;
  uint64_t __temp1234v__=0;
  uint64_t __temp1235v=0;
  uint64_t __temp1236v__=0;
  uint64_t __temp1237v__=0;
  uint64_t __temp1238v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1229v=1;
  le__temp295v(n,__temp1229v,&__temp1230v__);
  if(__temp1230v__){
  __temp1231v=1;
  goto __temp_return;
  }
  __temp1232v=1;
  __temp_errcode=sub__temp347v(n,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1220v(__temp1233v__,&__temp1234v__);
  __temp1235v=2;
  __temp_errcode=sub__temp347v(n,__temp1235v,&__temp1236v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1220v(__temp1236v__,&__temp1237v__);
  add__temp170v(__temp1234v__,__temp1237v__,&__temp1238v__);
  __temp1231v=__temp1238v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1246v=__temp1231v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1224v() {
  uint64_t __temp1225v=0;
  uint64_t __temp1226v__=0;
  __temp1225v=10;
  fib__temp1220v(__temp1225v,&__temp1226v__);
  print__temp374v(__temp1226v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1224v();return 0;}