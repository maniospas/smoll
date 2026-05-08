#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1206v) {
  int value=0;
  *__temp1206v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1207v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1207v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1208v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1208v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1209v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1209v=z;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1200v() {
  unsigned long long __temp1201v=0;
  unsigned long long __temp1202v=0;
  unsigned long long x=0;
  unsigned long long __temp1203v=0;
  unsigned long long __temp1204v__=0;
  __temp1201v=1;
  __temp1202v=__temp1201v;
  x=__temp1202v;
  __temp1203v=2;
  x=__temp1203v;
  add__temp110v(x,x,&__temp1204v__);
  print__temp359v(__temp1204v__);
}

int main() {main__temp1200v();return 0;}