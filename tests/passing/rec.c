#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};
int fib__temp1205v(unsigned long long n, unsigned long long* __temp1234v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1226v) {
  int value=0;
  *__temp1226v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1227v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1227v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1228v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1228v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1229v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1229v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1230v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1231v) {
  int __temp331v__=0;
  char __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1231v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1209v(unsigned long long n, unsigned long long* __temp1232v) {
  unsigned long long __temp1210v__=0;
  fib__temp1205v(n,&__temp1210v__);
  *__temp1232v=__temp1210v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1233v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1233v=z;
}

int fib__temp1205v(unsigned long long n, unsigned long long* __temp1234v) {
  unsigned long long __temp1216v=0;
  char __temp1217v__=0;
  unsigned long long __temp1218v=0;
  unsigned long long __temp1219v=0;
  unsigned long long __temp1220v__=0;
  unsigned long long __temp1221v__=0;
  unsigned long long __temp1222v=0;
  unsigned long long __temp1223v__=0;
  unsigned long long __temp1224v__=0;
  unsigned long long __temp1225v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1216v=1;
  le__temp230v(n,__temp1216v,&__temp1217v__);
  if(__temp1217v__){
  __temp1218v=1;
  goto __temp_return;
  }
  __temp1219v=1;
  __temp_errcode=sub__temp330v(n,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1209v(__temp1220v__,&__temp1221v__);
  __temp1222v=2;
  __temp_errcode=sub__temp330v(n,__temp1222v,&__temp1223v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1209v(__temp1223v__,&__temp1224v__);
  add__temp110v(__temp1221v__,__temp1224v__,&__temp1225v__);
  __temp1218v=__temp1225v__;
  __temp_return:
  *__temp1234v=__temp1218v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1211v() {
  unsigned long long __temp1212v=0;
  unsigned long long __temp1213v__=0;
  __temp1212v=42;
  fib__temp1205v(__temp1212v,&__temp1213v__);
  print__temp361v(__temp1213v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1211v();return 0;}