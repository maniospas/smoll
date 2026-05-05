#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1091v="123";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void eq__temp702v(const char* x, const char* y, int* __temp1094v) {
  int z=0;
  z=(x==y);
  *__temp1094v=z;
}

static inline __attribute__((always_inline)) void print__temp360v(int value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value? "true":"false",endl);
}

static inline __attribute__((always_inline)) void main__temp1090v() {
  int __temp1092v__=0;
  eq__temp702v(__temp1091v,__temp1091v,&__temp1092v__);
  print__temp360v(__temp1092v__);
}

int main() {main__temp1090v();return 0;}