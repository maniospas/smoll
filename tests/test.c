#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1244v="A";
const char* const __temp1241v="F";
const char* const __temp1248v="answered: ";
const char* const __temp1240v="D";
const char* const __temp1246v="C";
const char* const __temp364v="\n";
const char* const __temp1245v="B";
static const char* __temp_all_errcodes[30] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"not a valid answer"
};

static inline __attribute__((always_inline)) void not__temp25v(char value, char* __temp1254v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void first__temp1237v(const char* first, const char* second, const char** __temp1255v) {
  goto __temp_return;
  __temp_return:
  *__temp1255v=first;
}

static inline __attribute__((always_inline)) void second__temp1238v(const char* first, const char* second, const char** __temp1256v) {
  goto __temp_return;
  __temp_return:
  *__temp1256v=second;
}

static inline __attribute__((always_inline)) int main__temp1239v() {
  const char* answers__temp1240v=0;
  const char* answers__temp1241v=0;
  char __temp1242v=0;
  char __temp1243v=0;
  char __temp1247v__=0;
  const char* __temp1250v__=0;
  const char* __temp1252v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  answers__temp1240v=__temp1240v;
  answers__temp1241v=__temp1241v;
  __temp1243v=1;
  if(__temp1244v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1244v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1244v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1245v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1244v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1246v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1245v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1244v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1245v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1245v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1245v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1246v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1246v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1244v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1246v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1245v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  __temp1243v=1;
  if(__temp1246v!=answers__temp1240v){
  __temp1243v=0;
  }
  if(__temp1246v!=answers__temp1241v){
  __temp1243v=0;
  }
  if(__temp1243v){
  __temp1242v=1;
  }
  not__temp25v(__temp1242v,&__temp1247v__);
  if(__temp1247v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  print__temp362v(__temp1248v);
  first__temp1237v(answers__temp1240v,answers__temp1241v,&__temp1250v__);
  print__temp362v(__temp1250v__);
  second__temp1238v(answers__temp1240v,answers__temp1241v,&__temp1252v__);
  print__temp362v(__temp1252v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1239v();return 0;}