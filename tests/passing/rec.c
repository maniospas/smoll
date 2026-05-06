#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";
int fib__temp1121v(unsigned long long n, unsigned long long* __temp1150v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1142v) {
  int value=0;
  *__temp1142v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1143v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1143v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1144v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1144v=__temp86v__;
}

static inline __attribute__((always_inline)) void le__temp229v(unsigned long long x, unsigned long long y, int* __temp1145v) {
  int __temp230v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp230v__);
  z=x<=y?1:0;
  *__temp1145v=z;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1146v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1146v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1147v) {
  int __temp330v__=0;
  int __temp333v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp84v(x,y,&__temp330v__);
  lt__temp181v(x,y,&__temp333v__);
  if(__temp333v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1147v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1125v(unsigned long long n, unsigned long long* __temp1148v) {
  unsigned long long __temp1126v__=0;
  fib__temp1121v(n,&__temp1126v__);
  *__temp1148v=__temp1126v__;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1149v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1149v=z;
}

int fib__temp1121v(unsigned long long n, unsigned long long* __temp1150v) {
  unsigned long long __temp1132v=0;
  int __temp1133v__=0;
  unsigned long long __temp1134v=0;
  unsigned long long __temp1135v=0;
  unsigned long long __temp1136v__=0;
  unsigned long long __temp1137v__=0;
  unsigned long long __temp1138v=0;
  unsigned long long __temp1139v__=0;
  unsigned long long __temp1140v__=0;
  unsigned long long __temp1141v__=0;
  int __temp_errcode=0;
  __temp1132v=1;
  le__temp229v(n,__temp1132v,&__temp1133v__);
  if(__temp1133v__){
  __temp1134v=1;
  goto __temp_return;
  }
  __temp1135v=1;
  __temp_errcode=sub__temp329v(n,__temp1135v,&__temp1136v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1125v(__temp1136v__,&__temp1137v__);
  __temp1138v=2;
  __temp_errcode=sub__temp329v(n,__temp1138v,&__temp1139v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1125v(__temp1139v__,&__temp1140v__);
  add__temp109v(__temp1137v__,__temp1140v__,&__temp1141v__);
  __temp1134v=__temp1141v__;
  __temp_return:
  *__temp1150v=__temp1134v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1127v() {
  unsigned long long __temp1128v=0;
  unsigned long long __temp1129v__=0;
  __temp1128v=42;
  fib__temp1121v(__temp1128v,&__temp1129v__);
  print__temp356v(__temp1129v__);
}

int main() {main__temp1127v();return 0;}