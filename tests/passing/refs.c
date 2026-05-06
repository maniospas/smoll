#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1127v) {
  int value=0;
  *__temp1127v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1128v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1128v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1129v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1129v=__temp86v__;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1130v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1130v=z;
}

static inline __attribute__((always_inline)) void print__temp356v(unsigned long long value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1121v() {
  unsigned long long __temp1122v=0;
  unsigned long long __temp1123v=0;
  unsigned long long x=0;
  unsigned long long __temp1124v=0;
  unsigned long long __temp1125v__=0;
  __temp1122v=1;
  __temp1123v=__temp1122v;
  x=__temp1123v;
  __temp1124v=2;
  x=__temp1124v;
  add__temp109v(x,x,&__temp1125v__);
  print__temp356v(__temp1125v__);
}

int main() {main__temp1121v();return 0;}