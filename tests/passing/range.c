#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void range__temp397v(unsigned long long to, unsigned long long* __temp1100v, unsigned long long* __temp1101v) {
  unsigned long long __temp399v=0;
  unsigned long long _from=0;
  unsigned long long __temp400v=0;
  unsigned long long from=0;
  __temp399v=0;
  _from=__temp399v;
  __temp400v=_from;
  from=__temp400v;
  *__temp1100v=from;
  *__temp1101v=to;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1102v) {
  int value=0;
  *__temp1102v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1103v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1103v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1104v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1104v=__temp86v__;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1105v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1105v=z;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1106v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1106v=z;
}

static inline __attribute__((always_inline)) int next__temp401v(unsigned long long* __temp1107v, unsigned long long r__to, unsigned long long* __temp1108v) {
  unsigned long long r__from=*__temp1107v;
  int __temp402v__=0;
  unsigned long long ret=0;
  unsigned long long __temp403v=0;
  unsigned long long __temp404v__=0;
  int __temp_errcode=0;
  ge__temp253v(r__from,r__to,&__temp402v__);
  if(__temp402v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  ret=r__from;
  __temp403v=1;
  add__temp109v(ret,__temp403v,&__temp404v__);
  r__from=__temp404v__;
  *__temp1107v=r__from;
  *__temp1108v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1090v() {
  unsigned long long __temp1091v=0;
  unsigned long long __temp1092v__from=0;
  unsigned long long __temp1092v__to=0;
  unsigned long long r__from=0;
  unsigned long long r__to=0;
  int __temp1093v=0;
  unsigned long long __temp1094v__=0;
  unsigned long long __temp1095v=0;
  unsigned long long value=0;
  unsigned long long __temp1097v=0;
  unsigned long long __temp1098v__=0;
  __temp1091v=10;
  range__temp397v(__temp1091v,&__temp1092v__from,&__temp1092v__to);
  r__from=__temp1092v__from;
  r__to=__temp1092v__to;
  while(1){
  __temp1093v=next__temp401v(&r__from,r__to,&__temp1094v__);
  __temp1095v=__temp1094v__;
  value=__temp1095v;
  __temp1093v=__temp1093v==0;
  if(!__temp1093v)break;
  print__temp356v(value);
  }
  __temp1097v=1;
  add__temp109v(value,__temp1097v,&__temp1098v__);
  value=__temp1098v__;
  print__temp356v(value);
}

int main() {main__temp1090v();return 0;}