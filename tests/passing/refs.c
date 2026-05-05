#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1096v) {
  int value=0;
  *__temp1096v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1097v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1097v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1098v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1098v=__temp86v__;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1099v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1099v=z;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1090v() {
  unsigned long long __temp1091v=0;
  unsigned long long __temp1092v=0;
  unsigned long long x=0;
  unsigned long long __temp1093v=0;
  unsigned long long __temp1094v__=0;
  __temp1091v=1;
  __temp1092v=__temp1091v;
  x=__temp1092v;
  __temp1093v=2;
  x=__temp1093v;
  add__temp109v(x,x,&__temp1094v__);
  print__temp356v(__temp1094v__);
}

int main() {main__temp1090v();return 0;}