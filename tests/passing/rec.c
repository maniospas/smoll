#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp348v="\n";
static const char* __temp_all_errcodes[0] = {
};
int fib__temp1200v(unsigned long long n, unsigned long long* __temp1229v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1221v) {
  int value=0;
  *__temp1221v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1222v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1222v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1223v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1223v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1224v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1224v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1225v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1225v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1226v) {
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
  *__temp1226v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1204v(unsigned long long n, unsigned long long* __temp1227v) {
  unsigned long long __temp1205v__=0;
  fib__temp1200v(n,&__temp1205v__);
  *__temp1227v=__temp1205v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1228v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1228v=z;
}

int fib__temp1200v(unsigned long long n, unsigned long long* __temp1229v) {
  unsigned long long __temp1211v=0;
  int __temp1212v__=0;
  unsigned long long __temp1213v=0;
  unsigned long long __temp1214v=0;
  unsigned long long __temp1215v__=0;
  unsigned long long __temp1216v__=0;
  unsigned long long __temp1217v=0;
  unsigned long long __temp1218v__=0;
  unsigned long long __temp1219v__=0;
  unsigned long long __temp1220v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1211v=1;
  le__temp230v(n,__temp1211v,&__temp1212v__);
  if(__temp1212v__){
  __temp1213v=1;
  goto __temp_return;
  }
  __temp1214v=1;
  __temp_errcode=sub__temp330v(n,__temp1214v,&__temp1215v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1204v(__temp1215v__,&__temp1216v__);
  __temp1217v=2;
  __temp_errcode=sub__temp330v(n,__temp1217v,&__temp1218v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1204v(__temp1218v__,&__temp1219v__);
  add__temp110v(__temp1216v__,__temp1219v__,&__temp1220v__);
  __temp1213v=__temp1220v__;
  __temp_return:
  *__temp1229v=__temp1213v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1206v() {
  unsigned long long __temp1207v=0;
  unsigned long long __temp1208v__=0;
  __temp1207v=42;
  fib__temp1200v(__temp1207v,&__temp1208v__);
  print__temp359v(__temp1208v__);
}

int main() {main__temp1206v();return 0;}