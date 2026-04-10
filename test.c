#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib__temp367v(unsigned long long n, unsigned long long* __temp396v) ;
static inline void false__temp7v(int* __temp388v) {
  int value=0;
  __temp_return:
  *__temp388v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp389v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp389v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp390v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp390v=__temp85v____temp26v__value;
}

static inline void le__temp228v(unsigned long long x, unsigned long long y, int* __temp391v) {
  int __temp229v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp229v____temp85v____temp26v__value);
  z=x<=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp391v=z;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp392v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp392v=z;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp393v) {
  int __temp327v____temp85v____temp26v__value=0;
  int __temp328v=0;
  int __temp329v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp83v(x,y,&__temp327v____temp85v____temp26v__value);
  lt__temp180v(x,y,&__temp329v__z);
  if(__temp329v__z){
  printf("%s", "\033[31mfail\033[0m id subtraction would yield a negative\n\033[31mat\033[0m std/core/numbers.s line 67 column 14\n");
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp393v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void fibb__temp371v(unsigned long long n, unsigned long long* __temp394v) {
  unsigned long long __temp372v____temp370v=0;
  fib__temp367v(n,&__temp372v____temp370v);
  goto __temp_return;
  __temp_return:
  *__temp394v=__temp372v____temp370v;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp395v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp395v=z;
}

int fib__temp367v(unsigned long long n, unsigned long long* __temp396v) {
  unsigned long long __temp378v=0;
  int __temp379v__z=0;
  unsigned long long __temp380v=0;
  unsigned long long __temp381v=0;
  unsigned long long __temp382v__z=0;
  unsigned long long __temp383v____temp372v____temp370v=0;
  unsigned long long __temp384v=0;
  unsigned long long __temp385v__z=0;
  unsigned long long __temp386v____temp372v____temp370v=0;
  unsigned long long __temp387v__z=0;
  int __temp_errcode=0;
  __temp378v=1;
  le__temp228v(n,__temp378v,&__temp379v__z);
  if(__temp379v__z){
  __temp380v=1;
  goto __temp_return;
  }
  __temp381v=1;
  __temp_errcode=sub__temp326v(n,__temp381v,&__temp382v__z);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 6 column 18\n   unhandled error from sub(id x, id y) -> (id z)\n");
  goto __temp_failure;
  }
  fibb__temp371v(__temp382v__z,&__temp383v____temp372v____temp370v);
  __temp384v=2;
  __temp_errcode=sub__temp326v(n,__temp384v,&__temp385v__z);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 6 column 28\n   unhandled error from sub(id x, id y) -> (id z)\n");
  goto __temp_failure;
  }
  fibb__temp371v(__temp385v__z,&__temp386v____temp372v____temp370v);
  add__temp108v(__temp383v____temp372v____temp370v,__temp386v____temp372v____temp370v,&__temp387v__z);
  __temp380v=__temp387v__z;
  goto __temp_return;
  __temp_return:
  *__temp396v=__temp380v;
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

static inline void main__temp373v() {
  unsigned long long __temp374v=0;
  unsigned long long __temp375v____temp370v=0;
  __temp374v=42;
  fib__temp367v(__temp374v,&__temp375v____temp370v);
  print__temp347v(__temp375v____temp370v);
}

int main() {main__temp373v();return 0;}