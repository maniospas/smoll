#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1257v=" minutes\n";
const char* const __temp1247v="B";
const char* const __temp1242v="A";
const char* const __temp1254v="in";
const char* const __temp363v="\n";
const char* const __temp1250v="answered: ";
const char* const __temp1255v=" ";
const char* const __temp1248v="C";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"not a valid answer"
};

static inline __attribute__((always_inline)) void answers__temp1240v(const char* first, const char* second, uint64_t minutes_to_answer, const char** __temp1259v, const char** __temp1260v, uint64_t* __temp1261v) {
  *__temp1259v=first;
  *__temp1260v=second;
  *__temp1261v=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1262v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp364v(const char* value, const char* endl) {
  int __temp365v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value, const char* endl) {
  int __temp377v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1241v() {
  uint64_t __temp1243v=0;
  const char* __temp1244v__first=0;
  const char* __temp1244v__second=0;
  uint64_t __temp1244v__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __temp1245v=0;
  char __temp1246v=0;
  char __temp1249v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1243v=60;
  answers__temp1240v(__temp1242v,__temp1242v,__temp1243v,&__temp1244v__first,&__temp1244v__second,&__temp1244v__minutes_to_answer);
  answers__first=__temp1244v__first;
  answers__second=__temp1244v__second;
  answers__minutes_to_answer=__temp1244v__minutes_to_answer;
  __temp1246v=1;
  if(__temp1242v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1242v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1242v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1247v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1242v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1248v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1247v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1242v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1247v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1247v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1247v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1248v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1248v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1242v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1248v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1247v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  __temp1246v=1;
  if(__temp1248v!=answers__first){
  __temp1246v=0;
  }
  if(__temp1248v!=answers__second){
  __temp1246v=0;
  }
  if(__temp1246v){
  __temp1245v=1;
  }
  not__temp26v(__temp1245v,&__temp1249v__);
  if(__temp1249v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  print__temp361v(__temp1250v);
  print__temp361v(answers__first);
  print__temp361v(answers__second);
  print__temp364v(__temp1254v,__temp1255v);
  print__temp376v(answers__minutes_to_answer,__temp1257v);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1241v();return 0;}