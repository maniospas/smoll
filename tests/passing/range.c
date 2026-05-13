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

static inline __attribute__((always_inline)) void range__temp434v(uint64_t to, uint64_t* __temp1229v, uint64_t* __temp1230v) {
  int __temp435v=0;
  uint64_t __temp436v=0;
  uint64_t _from=0;
  uint64_t __temp437v=0;
  uint64_t from=0;
  __temp436v=0;
  _from=__temp436v;
  __temp437v=_from;
  from=__temp437v;
  goto __temp_return;
  __temp_return:
  *__temp1229v=from;
  *__temp1230v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1231v) {
  int value=0;
  *__temp1231v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1232v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1232v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1233v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1233v=__temp94v__;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1234v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1234v=z;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1235v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1235v=z;
}

static inline __attribute__((always_inline)) int next__temp438v(uint64_t* __temp1236v, uint64_t r__to, uint64_t* __temp1237v) {
  uint64_t r__from=*__temp1236v;
  char __temp439v__=0;
  uint64_t ret=0;
  uint64_t __temp440v=0;
  uint64_t __temp441v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(r__from,r__to,&__temp439v__);
  if(__temp439v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp440v=1;
  add__temp169v(ret,__temp440v,&__temp441v__);
  r__from=__temp441v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1236v=r__from;
  *__temp1237v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1219v() {
  uint64_t __temp1220v=0;
  uint64_t __temp1221v__from=0;
  uint64_t __temp1221v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __temp1222v=0;
  uint64_t __temp1223v__=0;
  uint64_t __temp1224v=0;
  uint64_t value=0;
  uint64_t __temp1226v=0;
  uint64_t __temp1227v__=0;
  int __temp_complain=0;
  __temp1220v=10;
  range__temp434v(__temp1220v,&__temp1221v__from,&__temp1221v__to);
  r__from=__temp1221v__from;
  r__to=__temp1221v__to;
  while(1){
  __temp_complain=next__temp438v(&r__from,r__to,&__temp1223v__);
  __temp1222v=__temp_complain;
  __temp1224v=__temp1223v__;
  value=__temp1224v;
  __temp1222v=__temp1222v==0;
  if(!__temp1222v){
  break;
  }
  print__temp375v(value);
  }
  __temp1226v=1;
  add__temp169v(value,__temp1226v,&__temp1227v__);
  value=__temp1227v__;
  print__temp375v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1219v();return 0;}