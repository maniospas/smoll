#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp374v(unsigned long long x, double* __temp1132v) {
  double z=0;
  z=x;
  *__temp1132v=z;
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

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1135v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1135v=__temp62v__;
}

static inline __attribute__((always_inline)) void mul__temp111v(double x, double y, double* __temp1136v) {
  int __temp112v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp112v__);
  z=x*y;
  *__temp1136v=z;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1137v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1137v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1121v() {
  double __temp1122v=0;
  double x=0;
  unsigned long long __temp1123v=0;
  double __temp1124v__=0;
  unsigned long long __temp1125v=0;
  double __temp1126v__=0;
  double __temp1127v=0;
  double __temp1128v__=0;
  double __temp1129v__=0;
  double __temp1130v__=0;
  __temp1122v=1.0;
  x=__temp1122v;
  __temp1123v=1;
  float__temp374v(__temp1123v,&__temp1124v__);
  __temp1125v=2;
  float__temp374v(__temp1125v,&__temp1126v__);
  __temp1127v=2.0;
  mul__temp111v(__temp1126v__,__temp1127v,&__temp1128v__);
  add__temp87v(__temp1124v__,__temp1128v__,&__temp1129v__);
  add__temp87v(x,__temp1129v__,&__temp1130v__);
  print__temp348v(__temp1130v__);
}

int main() {main__temp1121v();return 0;}