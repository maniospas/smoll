#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
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
int fib__temp1198v(unsigned long long n, unsigned long long* __temp1227v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1219v) {
  int value=0;
  *__temp1219v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1220v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1220v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1221v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1221v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1222v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1222v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1223v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1223v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1224v) {
  int __temp331v__=0;
  int __temp334v__=0;
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
  *__temp1224v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1202v(unsigned long long n, unsigned long long* __temp1225v) {
  unsigned long long __temp1203v__=0;
  fib__temp1198v(n,&__temp1203v__);
  *__temp1225v=__temp1203v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1226v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1226v=z;
}

int fib__temp1198v(unsigned long long n, unsigned long long* __temp1227v) {
  unsigned long long __temp1209v=0;
  int __temp1210v__=0;
  unsigned long long __temp1211v=0;
  unsigned long long __temp1212v=0;
  unsigned long long __temp1213v__=0;
  unsigned long long __temp1214v__=0;
  unsigned long long __temp1215v=0;
  unsigned long long __temp1216v__=0;
  unsigned long long __temp1217v__=0;
  unsigned long long __temp1218v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1209v=1;
  le__temp230v(n,__temp1209v,&__temp1210v__);
  if(__temp1210v__){
  __temp1211v=1;
  goto __temp_return;
  }
  __temp1212v=1;
  __temp_errcode=sub__temp330v(n,__temp1212v,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1202v(__temp1213v__,&__temp1214v__);
  __temp1215v=2;
  __temp_errcode=sub__temp330v(n,__temp1215v,&__temp1216v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1202v(__temp1216v__,&__temp1217v__);
  add__temp110v(__temp1214v__,__temp1217v__,&__temp1218v__);
  __temp1211v=__temp1218v__;
  __temp_return:
  *__temp1227v=__temp1211v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1204v() {
  unsigned long long __temp1205v=0;
  unsigned long long __temp1206v__=0;
  __temp1205v=42;
  fib__temp1198v(__temp1205v,&__temp1206v__);
  print__temp361v(__temp1206v__);
}

int main() {main__temp1204v();return 0;}