#include <stdio.h>
#include <stdlib.h>

static inline void add__temp21(unsigned long long x, unsigned long long y, unsigned long long* __temp140) {
  unsigned long long z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp140=z;
}

static inline void print__temp12(unsigned long long value) {
  printf("%llu",value);
}

static inline void gt__temp57(unsigned long long x, unsigned long long y, int* __temp141) {
  int z=x>y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp141=z;
}

static inline void main__temp132() {
  unsigned long long __temp133=0;
  unsigned long long i=0;
  int __temp134=0;
  unsigned long long __temp135=0;
  unsigned long long __temp136__z=0;
  unsigned long long __temp138=0;
  int __temp139__z=0;
  __temp133=0;
  i=__temp133;
  while(1){
  __temp134=1;
  if(!__temp134)break;
  __temp135=1;
  add__temp21(i,__temp135,&__temp136__z);
  i=__temp136__z;
  print__temp12(i);
  __temp138=10;
  gt__temp57(i,__temp138,&__temp139__z);
  if(__temp139__z){
  break;
  }
  }
}

int main() {main__temp132();return 0;}