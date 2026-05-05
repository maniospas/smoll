#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";
int fib__temp1090v(unsigned long long n, unsigned long long* __temp1119v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1111v) {
  int value=0;
  *__temp1111v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1112v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1112v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1113v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1113v=__temp86v__;
}

static inline __attribute__((always_inline)) void le__temp229v(unsigned long long x, unsigned long long y, int* __temp1114v) {
  int __temp230v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp230v__);
  z=x<=y?1:0;
  *__temp1114v=z;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1115v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1115v=z;
}

static inline __attribute__((always_inline)) int sub__temp329v(unsigned long long x, unsigned long long y, unsigned long long* __temp1116v) {
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
  *__temp1116v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1094v(unsigned long long n, unsigned long long* __temp1117v) {
  unsigned long long __temp1095v__=0;
  fib__temp1090v(n,&__temp1095v__);
  *__temp1117v=__temp1095v__;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1118v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1118v=z;
}

int fib__temp1090v(unsigned long long n, unsigned long long* __temp1119v) {
  unsigned long long __temp1101v=0;
  int __temp1102v__=0;
  unsigned long long __temp1103v=0;
  unsigned long long __temp1104v=0;
  unsigned long long __temp1105v__=0;
  unsigned long long __temp1106v__=0;
  unsigned long long __temp1107v=0;
  unsigned long long __temp1108v__=0;
  unsigned long long __temp1109v__=0;
  unsigned long long __temp1110v__=0;
  int __temp_errcode=0;
  __temp1101v=1;
  le__temp229v(n,__temp1101v,&__temp1102v__);
  if(__temp1102v__){
  __temp1103v=1;
  goto __temp_return;
  }
  __temp1104v=1;
  __temp_errcode=sub__temp329v(n,__temp1104v,&__temp1105v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1094v(__temp1105v__,&__temp1106v__);
  __temp1107v=2;
  __temp_errcode=sub__temp329v(n,__temp1107v,&__temp1108v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1094v(__temp1108v__,&__temp1109v__);
  add__temp109v(__temp1106v__,__temp1109v__,&__temp1110v__);
  __temp1103v=__temp1110v__;
  __temp_return:
  *__temp1119v=__temp1103v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1096v() {
  unsigned long long __temp1097v=0;
  unsigned long long __temp1098v__=0;
  __temp1097v=42;
  fib__temp1090v(__temp1097v,&__temp1098v__);
  print__temp356v(__temp1098v__);
}

int main() {main__temp1096v();return 0;}