#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void range__temp397v(unsigned long long to, unsigned long long* __temp1131v, unsigned long long* __temp1132v) {
  unsigned long long __temp399v=0;
  unsigned long long _from=0;
  unsigned long long __temp400v=0;
  unsigned long long from=0;
  __temp399v=0;
  _from=__temp399v;
  __temp400v=_from;
  from=__temp400v;
  *__temp1131v=from;
  *__temp1132v=to;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1133v) {
  int value=0;
  *__temp1133v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1134v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1134v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1135v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1135v=__temp86v__;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1136v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1136v=z;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1137v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1137v=z;
}

static inline __attribute__((always_inline)) int next__temp401v(unsigned long long* __temp1138v, unsigned long long r__to, unsigned long long* __temp1139v) {
  unsigned long long r__from=*__temp1138v;
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
  *__temp1138v=r__from;
  *__temp1139v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1121v() {
  unsigned long long __temp1122v=0;
  unsigned long long __temp1123v__from=0;
  unsigned long long __temp1123v__to=0;
  unsigned long long r__from=0;
  unsigned long long r__to=0;
  int __temp1124v=0;
  unsigned long long __temp1125v__=0;
  unsigned long long __temp1126v=0;
  unsigned long long value=0;
  unsigned long long __temp1128v=0;
  unsigned long long __temp1129v__=0;
  __temp1122v=10;
  range__temp397v(__temp1122v,&__temp1123v__from,&__temp1123v__to);
  r__from=__temp1123v__from;
  r__to=__temp1123v__to;
  while(1){
  __temp1124v=next__temp401v(&r__from,r__to,&__temp1125v__);
  __temp1126v=__temp1125v__;
  value=__temp1126v;
  __temp1124v=__temp1124v==0;
  if(!__temp1124v)break;
  print__temp356v(value);
  }
  __temp1128v=1;
  add__temp109v(value,__temp1128v,&__temp1129v__);
  value=__temp1129v__;
  print__temp356v(value);
}

int main() {main__temp1121v();return 0;}