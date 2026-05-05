#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void float__temp374v(unsigned long long x, double* __temp1101v) {
  double z=0;
  z=x;
  *__temp1101v=z;
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

static inline __attribute__((always_inline)) void is_different__temp60v(double x, double y, int* __temp1104v) {
  int __temp61v=0;
  int __temp62v__=0;
  not__temp26v(__temp61v,&__temp62v__);
  *__temp1104v=__temp62v__;
}

static inline __attribute__((always_inline)) void mul__temp111v(double x, double y, double* __temp1105v) {
  int __temp112v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp112v__);
  z=x*y;
  *__temp1105v=z;
}

static inline __attribute__((always_inline)) void add__temp87v(double x, double y, double* __temp1106v) {
  int __temp88v__=0;
  double z=0;
  is_different__temp60v(x,y,&__temp88v__);
  z=x+y;
  *__temp1106v=z;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1090v() {
  double __temp1091v=0;
  double x=0;
  unsigned long long __temp1092v=0;
  double __temp1093v__=0;
  unsigned long long __temp1094v=0;
  double __temp1095v__=0;
  double __temp1096v=0;
  double __temp1097v__=0;
  double __temp1098v__=0;
  double __temp1099v__=0;
  __temp1091v=1.0;
  x=__temp1091v;
  __temp1092v=1;
  float__temp374v(__temp1092v,&__temp1093v__);
  __temp1094v=2;
  float__temp374v(__temp1094v,&__temp1095v__);
  __temp1096v=2.0;
  mul__temp111v(__temp1095v__,__temp1096v,&__temp1097v__);
  add__temp87v(__temp1093v__,__temp1097v__,&__temp1098v__);
  add__temp87v(x,__temp1098v__,&__temp1099v__);
  print__temp348v(__temp1099v__);
}

int main() {main__temp1090v();return 0;}