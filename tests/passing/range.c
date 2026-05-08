#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void range__temp400v(unsigned long long to, unsigned long long* __temp1210v, unsigned long long* __temp1211v) {
  unsigned long long __temp402v=0;
  unsigned long long _from=0;
  unsigned long long __temp403v=0;
  unsigned long long from=0;
  __temp402v=0;
  _from=__temp402v;
  __temp403v=_from;
  from=__temp403v;
  *__temp1210v=from;
  *__temp1211v=to;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1212v) {
  int value=0;
  *__temp1212v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1213v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1213v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1214v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1214v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1215v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1216v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1216v=z;
}

static inline __attribute__((always_inline)) int next__temp404v(unsigned long long* __temp1217v, unsigned long long r__to, unsigned long long* __temp1218v) {
  unsigned long long r__from=*__temp1217v;
  int __temp405v__=0;
  unsigned long long ret=0;
  unsigned long long __temp406v=0;
  unsigned long long __temp407v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp405v__);
  if(__temp405v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp406v=1;
  add__temp110v(ret,__temp406v,&__temp407v__);
  r__from=__temp407v__;
  *__temp1217v=r__from;
  *__temp1218v=ret;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1200v() {
  unsigned long long __temp1201v=0;
  unsigned long long __temp1202v__from=0;
  unsigned long long __temp1202v__to=0;
  unsigned long long r__from=0;
  unsigned long long r__to=0;
  int __temp1203v=0;
  unsigned long long __temp1204v__=0;
  unsigned long long __temp1205v=0;
  unsigned long long value=0;
  unsigned long long __temp1207v=0;
  unsigned long long __temp1208v__=0;
  int __temp_complain=0;
  __temp1201v=10;
  range__temp400v(__temp1201v,&__temp1202v__from,&__temp1202v__to);
  r__from=__temp1202v__from;
  r__to=__temp1202v__to;
  while(1){
  __temp_complain=next__temp404v(&r__from,r__to,&__temp1204v__);
  __temp1203v=__temp_complain;
  __temp1205v=__temp1204v__;
  value=__temp1205v;
  __temp1203v=__temp1203v==0;
  if(!__temp1203v)break;
  print__temp359v(value);
  }
  __temp1207v=1;
  add__temp110v(value,__temp1207v,&__temp1208v__);
  value=__temp1208v__;
  print__temp359v(value);
}

int main() {main__temp1200v();return 0;}