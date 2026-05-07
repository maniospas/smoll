#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[27] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void range__temp400v(unsigned long long to, unsigned long long* __temp1138v, unsigned long long* __temp1139v) {
  unsigned long long __temp402v=0;
  unsigned long long _from=0;
  unsigned long long __temp403v=0;
  unsigned long long from=0;
  __temp402v=0;
  _from=__temp402v;
  __temp403v=_from;
  from=__temp403v;
  *__temp1138v=from;
  *__temp1139v=to;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1140v) {
  int value=0;
  *__temp1140v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1141v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1141v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1142v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1142v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1143v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1143v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1144v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1144v=z;
}

static inline __attribute__((always_inline)) int next__temp404v(unsigned long long* __temp1145v, unsigned long long r__to, unsigned long long* __temp1146v) {
  unsigned long long r__from=*__temp1145v;
  int __temp405v__=0;
  unsigned long long ret=0;
  unsigned long long __temp406v=0;
  unsigned long long __temp407v__=0;
  int __temp_errcode=0;
  ge__temp254v(r__from,r__to,&__temp405v__);
  if(__temp405v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp406v=1;
  add__temp110v(ret,__temp406v,&__temp407v__);
  r__from=__temp407v__;
  *__temp1145v=r__from;
  *__temp1146v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1128v() {
  unsigned long long __temp1129v=0;
  unsigned long long __temp1130v__from=0;
  unsigned long long __temp1130v__to=0;
  unsigned long long r__from=0;
  unsigned long long r__to=0;
  int __temp1131v=0;
  unsigned long long __temp1132v__=0;
  unsigned long long __temp1133v=0;
  unsigned long long value=0;
  unsigned long long __temp1135v=0;
  unsigned long long __temp1136v__=0;
  int __temp_complain=0;
  __temp1129v=10;
  range__temp400v(__temp1129v,&__temp1130v__from,&__temp1130v__to);
  r__from=__temp1130v__from;
  r__to=__temp1130v__to;
  while(1){
  __temp_complain=next__temp404v(&r__from,r__to,&__temp1132v__);
  __temp1131v=__temp_complain;
  __temp1133v=__temp1132v__;
  value=__temp1133v;
  __temp1131v=__temp1131v==0;
  if(!__temp1131v)break;
  print__temp359v(value);
  }
  __temp1135v=1;
  add__temp110v(value,__temp1135v,&__temp1136v__);
  value=__temp1136v__;
  print__temp359v(value);
}

int main() {main__temp1128v();return 0;}