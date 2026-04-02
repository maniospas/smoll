#include <stdio.h>
#include <stdlib.h>

static inline void lt__temp48(unsigned long long x, unsigned long long y, int* __temp141) {
  int z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp141=z;
}

static inline void print__temp12(unsigned long long value) {
  printf("%llu",value);
}

static inline void add__temp21(unsigned long long x, unsigned long long y, unsigned long long* __temp142) {
  unsigned long long z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp142=z;
}

static inline void main__temp132() {
  unsigned long long __temp133=0;
  unsigned long long i=0;
  unsigned long long __temp134=0;
  int __temp135__z=0;
  unsigned long long __temp137=0;
  unsigned long long __temp138__z=0;
  unsigned long long __temp139=0;
  unsigned long long __temp140__z=0;
  __temp133=0;
  i=__temp133;
  while(1){
  __temp134=10;
  lt__temp48(i,__temp134,&__temp135__z);
  if(!__temp135__z)break;
  print__temp12(i);
  __temp137=1;
  add__temp21(i,__temp137,&__temp138__z);
  i=__temp138__z;
  }
  __temp139=1;
  add__temp21(i,__temp139,&__temp140__z);
  i=__temp140__z;
}

int main() {main__temp132();return 0;}