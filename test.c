#include <stdio.h>
#include <stdlib.h>

static inline void float__temp359v(unsigned long long x, double* __temp389v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp389v=z;
}

static inline void false__temp5v(int* __temp390v) {
  int value=0;
  __temp_return:
  *__temp390v=value;
}

static inline void not__temp21v(int __temp_anon0, int* __temp391v) {
  int __temp22v__value=0;
  false__temp5v(&__temp22v__value);
  goto __temp_return;
  __temp_return:
  *__temp391v=__temp22v__value;
}

static inline void is_different__temp55v(double x, double y, int* __temp392v) {
  int __temp56v=0;
  int __temp57v____temp22v__value=0;
  not__temp21v(__temp56v,&__temp57v____temp22v__value);
  goto __temp_return;
  __temp_return:
  *__temp392v=__temp57v____temp22v__value;
}

static inline void mul__temp106v(double x, double y, double* __temp393v) {
  int __temp107v____temp57v____temp22v__value=0;
  double z=0;
  is_different__temp55v(x,y,&__temp107v____temp57v____temp22v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp393v=z;
}

static inline void add__temp82v(double x, double y, double* __temp394v) {
  int __temp83v____temp57v____temp22v__value=0;
  double z=0;
  is_different__temp55v(x,y,&__temp83v____temp57v____temp22v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp394v=z;
}

static inline void print__temp333v(double value) {
  int __temp334v=0;
  const char* __temp335v=0;
  const char* endl=0;
  __temp335v="\n";
  endl=__temp335v;
  printf("%.6f%s",value,endl);
}

static inline void main__temp378v() {
  double __temp379v=0;
  double x=0;
  unsigned long long __temp380v=0;
  double __temp381v__z=0;
  unsigned long long __temp382v=0;
  double __temp383v__z=0;
  double __temp384v=0;
  double __temp385v__z=0;
  double __temp386v__z=0;
  double __temp387v__z=0;
  __temp379v=1.0;
  x=__temp379v;
  __temp380v=1;
  float__temp359v(__temp380v,&__temp381v__z);
  __temp382v=2;
  float__temp359v(__temp382v,&__temp383v__z);
  __temp384v=2.0;
  mul__temp106v(__temp383v__z,__temp384v,&__temp385v__z);
  add__temp82v(__temp381v__z,__temp385v__z,&__temp386v__z);
  add__temp82v(x,__temp386v__z,&__temp387v__z);
  print__temp333v(__temp387v__z);
}

int main() {main__temp378v();return 0;}