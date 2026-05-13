#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
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
int fib__temp1219v(uint64_t n, uint64_t* __temp1245v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1238v) {
  int value=0;
  *__temp1238v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1239v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1239v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1240v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1240v=__temp94v__;
}

static inline __attribute__((always_inline)) void le__temp294v(uint64_t x, uint64_t y, char* __temp1241v) {
  int __temp295v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp295v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1242v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp1243v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1243v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1244v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1244v=z;
}

int fib__temp1219v(uint64_t n, uint64_t* __temp1245v) {
  uint64_t __temp1228v=0;
  char __temp1229v__=0;
  uint64_t __temp1230v=0;
  uint64_t __temp1231v=0;
  uint64_t __temp1232v__=0;
  uint64_t __temp1233v__=0;
  uint64_t __temp1234v=0;
  uint64_t __temp1235v__=0;
  uint64_t __temp1236v__=0;
  uint64_t __temp1237v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1228v=1;
  le__temp294v(n,__temp1228v,&__temp1229v__);
  if(__temp1229v__){
  __temp1230v=1;
  goto __temp_return;
  }
  __temp1231v=1;
  __temp_errcode=sub__temp346v(n,__temp1231v,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1219v(__temp1232v__,&__temp1233v__);
  __temp1234v=2;
  __temp_errcode=sub__temp346v(n,__temp1234v,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1219v(__temp1235v__,&__temp1236v__);
  add__temp169v(__temp1233v__,__temp1236v__,&__temp1237v__);
  __temp1230v=__temp1237v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1245v=__temp1230v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1223v() {
  uint64_t __temp1224v=0;
  uint64_t __temp1225v__=0;
  __temp1224v=10;
  fib__temp1219v(__temp1224v,&__temp1225v__);
  print__temp375v(__temp1225v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1223v();return 0;}