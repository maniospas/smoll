#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t994t=" ";
const char* const __t1291t="B";
const char* const __t1300t=" minutes\n";
const char* const __t1292t="C";
const char* const __t1286t="A";
const char* const __t1294t="answered: ";
const char* const __t1298t="in";
static const char* __t_all_errcodes[35] = {"noerr",
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
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void answers__t1284t(const char* first, const char* second, uint64_t minutes_to_answer, const char** __t1302t, const char** __t1303t, uint64_t* __t1304t) {
  *__t1302t=first;
  *__t1303t=second;
  *__t1304t=minutes_to_answer;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1305t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1305t=z;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t361t(const char* value, const char* endl) {
  int __t362t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t374t(uint64_t value, const char* endl) {
  int __t375t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1285t() {
  uint64_t __t1287t=0;
  const char* __t1288t__first=0;
  const char* __t1288t__second=0;
  uint64_t __t1288t__minutes_to_answer=0;
  const char* answers__first=0;
  const char* answers__second=0;
  uint64_t answers__minutes_to_answer=0;
  char __t1289t=0;
  char __t1290t=0;
  char __t1293t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1287t=60;
  answers__t1284t(__t1286t,__t1286t,__t1287t,&__t1288t__first,&__t1288t__second,&__t1288t__minutes_to_answer);
  answers__first=__t1288t__first;
  answers__second=__t1288t__second;
  answers__minutes_to_answer=__t1288t__minutes_to_answer;
  __t1290t=1;
  if(__t1286t!=answers__first){
  __t1290t=0;
  }
  if(__t1286t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1286t!=answers__first){
  __t1290t=0;
  }
  if(__t1291t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1286t!=answers__first){
  __t1290t=0;
  }
  if(__t1292t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1291t!=answers__first){
  __t1290t=0;
  }
  if(__t1286t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1291t!=answers__first){
  __t1290t=0;
  }
  if(__t1291t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1291t!=answers__first){
  __t1290t=0;
  }
  if(__t1292t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1292t!=answers__first){
  __t1290t=0;
  }
  if(__t1286t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1292t!=answers__first){
  __t1290t=0;
  }
  if(__t1291t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  __t1290t=1;
  if(__t1292t!=answers__first){
  __t1290t=0;
  }
  if(__t1292t!=answers__second){
  __t1290t=0;
  }
  if(__t1290t){
  __t1289t=1;
  }
  not__t26t(__t1289t,&__t1293t__);
  if(__t1293t__){
  __t_errcode=33;
  goto __t_failure;
  }
  print__t363t(__t1294t);
  print__t363t(answers__first);
  print__t363t(answers__second);
  print__t361t(__t1298t,__t994t);
  print__t374t(answers__minutes_to_answer,__t1300t);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1285t();return 0;}