#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib__temp382v(unsigned long long n, unsigned long long* __temp411v) ;
static inline void false__temp7v(int* __temp403v) {
  int value=0;
  __temp_return:
  *__temp403v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp404v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp404v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp405v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp405v=__temp85v____temp26v__value;
}

static inline void le__temp228v(unsigned long long x, unsigned long long y, int* __temp406v) {
  int __temp229v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp229v____temp85v____temp26v__value);
  z=x<=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp406v=z;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp407v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp407v=z;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp408v) {
  int __temp327v____temp85v____temp26v__value=0;
  int __temp328v=0;
  int __temp329v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp83v(x,y,&__temp327v____temp85v____temp26v__value);
  lt__temp180v(x,y,&__temp329v__z);
  if(__temp329v__z){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp408v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void call_fib__temp386v(unsigned long long n, unsigned long long* __temp409v) {
  unsigned long long __temp387v____temp385v=0;
  fib__temp382v(n,&__temp387v____temp385v);
  goto __temp_return;
  __temp_return:
  *__temp409v=__temp387v____temp385v;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp410v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp410v=z;
}

int fib__temp382v(unsigned long long n, unsigned long long* __temp411v) {
  unsigned long long __temp393v=0;
  int __temp394v__z=0;
  unsigned long long __temp395v=0;
  unsigned long long __temp396v=0;
  unsigned long long __temp397v__z=0;
  unsigned long long __temp398v____temp387v____temp385v=0;
  unsigned long long __temp399v=0;
  unsigned long long __temp400v__z=0;
  unsigned long long __temp401v____temp387v____temp385v=0;
  unsigned long long __temp402v__z=0;
  int __temp_errcode=0;
  __temp393v=1;
  le__temp228v(n,__temp393v,&__temp394v__z);
  if(__temp394v__z){
  __temp395v=1;
  goto __temp_return;
  }
  __temp396v=1;
  __temp_errcode=sub__temp326v(n,__temp396v,&__temp397v__z);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp386v(__temp397v__z,&__temp398v____temp387v____temp385v);
  __temp399v=2;
  __temp_errcode=sub__temp326v(n,__temp399v,&__temp400v__z);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp386v(__temp400v__z,&__temp401v____temp387v____temp385v);
  add__temp108v(__temp398v____temp387v____temp385v,__temp401v____temp387v____temp385v,&__temp402v__z);
  __temp395v=__temp402v__z;
  goto __temp_return;
  __temp_return:
  *__temp411v=__temp395v;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp347v(unsigned long long value) {
  int __temp348v=0;
  const char* __temp349v=0;
  const char* endl=0;
  __temp349v="\n";
  endl=__temp349v;
  printf("%llu%s",value,endl);
}

static inline void main__temp388v() {
  unsigned long long __temp389v=0;
  unsigned long long __temp390v____temp385v=0;
  __temp389v=42;
  fib__temp382v(__temp389v,&__temp390v____temp385v);
  print__temp347v(__temp390v____temp385v);
}

int main() {main__temp388v();return 0;}