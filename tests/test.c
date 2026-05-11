#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp352v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
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
"test"
};

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1236v) {
  int value=0;
  *__temp1236v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1237v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1237v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1238v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1238v=__temp87v__;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1239v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1239v=z;
}

static inline __attribute__((always_inline)) int test__temp1225v(unsigned long long x, unsigned long long* __temp1240v) {
  unsigned long long __temp1226v=0;
  char __temp1227v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1226v=2;
  lt__temp182v(x,__temp1226v,&__temp1227v__);
  if(__temp1227v__){
  __temp_errcode=28;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1240v=x;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void not__temp18v(char value, char* __temp1241v) {
  char z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void print__temp363v(unsigned long long value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1228v() {
  char __temp1229v=0;
  unsigned long long __temp1230v=0;
  unsigned long long __temp1231v__=0;
  unsigned long long x=0;
  char __temp1232v=0;
  long long int __temp1233v=0;
  char __temp1234v__=0;
  int __temp_complain=0;
  __temp1230v=1;
  __temp_complain=test__temp1225v(__temp1230v,&__temp1231v__);
  __temp1229v=__temp_complain;
  x=__temp1231v__;
  __temp1229v=__temp1229v==0;
  __temp1233v=__temp_complain;
  __temp1232v=(__temp_complain==0);
  __temp_complain=0;
  __temp1232v=__temp1232v==0;
  not__temp18v(__temp1232v,&__temp1234v__);
  if(__temp1234v__){
  print__temp363v(x);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}