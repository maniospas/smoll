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

static inline __attribute__((always_inline)) void range__temp402v(unsigned long long to, unsigned long long* __temp1208v, unsigned long long* __temp1209v) {
  unsigned long long __temp404v=0;
  unsigned long long _from=0;
  unsigned long long __temp405v=0;
  unsigned long long from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  *__temp1208v=from;
  *__temp1209v=to;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1210v) {
  int value=0;
  *__temp1210v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1211v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1211v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1212v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1212v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1213v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1213v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1214v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1214v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1215v, unsigned long long r__to, unsigned long long* __temp1216v) {
  unsigned long long r__from=*__temp1215v;
  int __temp407v__=0;
  unsigned long long ret=0;
  unsigned long long __temp408v=0;
  unsigned long long __temp409v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp407v__);
  if(__temp407v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp408v=1;
  add__temp110v(ret,__temp408v,&__temp409v__);
  r__from=__temp409v__;
  *__temp1215v=r__from;
  *__temp1216v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1198v() {
  unsigned long long __temp1199v=0;
  unsigned long long __temp1200v__from=0;
  unsigned long long __temp1200v__to=0;
  unsigned long long r__from=0;
  unsigned long long r__to=0;
  int __temp1201v=0;
  unsigned long long __temp1202v__=0;
  unsigned long long __temp1203v=0;
  unsigned long long value=0;
  unsigned long long __temp1205v=0;
  unsigned long long __temp1206v__=0;
  int __temp_complain=0;
  __temp1199v=10;
  range__temp402v(__temp1199v,&__temp1200v__from,&__temp1200v__to);
  r__from=__temp1200v__from;
  r__to=__temp1200v__to;
  while(1){
  __temp_complain=next__temp406v(&r__from,r__to,&__temp1202v__);
  __temp1201v=__temp_complain;
  __temp1203v=__temp1202v__;
  value=__temp1203v;
  __temp1201v=__temp1201v==0;
  if(!__temp1201v)break;
  print__temp361v(value);
  }
  __temp1205v=1;
  add__temp110v(value,__temp1205v,&__temp1206v__);
  value=__temp1206v__;
  print__temp361v(value);
}

int main() {main__temp1198v();return 0;}