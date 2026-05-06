#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1122v="123";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void eq__temp733v(const char* x, const char* y, int* __temp1125v) {
  int z=0;
  z=(x==y);
  *__temp1125v=z;
}

static inline __attribute__((always_inline)) void print__temp360v(int value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1121v() {
  int __temp1123v__=0;
  eq__temp733v(__temp1122v,__temp1122v,&__temp1123v__);
  print__temp360v(__temp1123v__);
}

int main() {main__temp1121v();return 0;}