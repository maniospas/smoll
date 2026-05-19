#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1266v="A";
const char* const __temp1272v="C";
const char* const __temp1279v=" ";
const char* const __temp1271v="B";
const char* const __temp365v="\n";
const char* const __temp1274v="answered: ";
const char* const __temp1278v="in";
const char* const __temp1281v=" minutes\n";
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
"invalid float conversion from string without a value after the dot",
"not a valid answer"
};

static inline __attribute__((always_inline)) void answers__temp1264v(const char* first, const char* second, uint64_t minutes_to_answer, const char** __temp1283v, const char** __temp1284v, uint64_t* __temp1285v) {
  *__temp1283v=first;
  *__temp1284v=second;
  *__temp1285v=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1286v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1265v() {
  uint64_t __temp1267v=0;
  const char* __temp1268v__first=0;
  const char* __temp1268v__second=0;
  uint64_t __temp1268v__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __temp1269v=0;
  char __temp1270v=0;
  char __temp1273v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1267v=60;
  answers__temp1264v(__temp1266v,__temp1266v,__temp1267v,&__temp1268v__first,&__temp1268v__second,&__temp1268v__minutes_to_answer);
  answers__first=__temp1268v__first;
  answers__second=__temp1268v__second;
  answers__minutes_to_answer=__temp1268v__minutes_to_answer;
  __temp1270v=1;
  if(__temp1266v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1266v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1266v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1271v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1266v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1272v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1271v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1266v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1271v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1271v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1271v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1272v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1272v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1266v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1272v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1271v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  __temp1270v=1;
  if(__temp1272v!=answers__first){
  __temp1270v=0;
  }
  if(__temp1272v!=answers__second){
  __temp1270v=0;
  }
  if(__temp1270v){
  __temp1269v=1;
  }
  not__temp26v(__temp1269v,&__temp1273v__);
  if(__temp1273v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  print__temp363v(__temp1274v);
  print__temp363v(answers__first);
  print__temp363v(answers__second);
  print__temp361v(__temp1278v,__temp1279v);
  print__temp374v(answers__minutes_to_answer,__temp1281v);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1265v();return 0;}