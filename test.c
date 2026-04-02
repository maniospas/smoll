#include <stdio.h>
#include <stdlib.h>

static inline void mul__temp30(unsigned long long x, unsigned long long y, unsigned long long* __temp147) {
  unsigned long long z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp147=z;
}

static inline void div__temp39(unsigned long long x, unsigned long long y, unsigned long long* __temp148) {
  unsigned long long z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp148=z;
}

static inline void add__temp21(unsigned long long x, unsigned long long y, unsigned long long* __temp149) {
  unsigned long long z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp149=z;
}

static inline void lt__temp48(unsigned long long x, unsigned long long y, int* __temp150) {
  int z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp150=z;
}

static inline void eq__temp94(int x, int y, int* __temp151) {
  int z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp151=z;
}

static inline void print__temp8(int value) {
  printf("%s",value? "true":"false");
}

static inline void print__temp9(const char* value) {
  printf("%s",value);
}

static inline void main__temp132() {
  unsigned long long __temp133=0;
  unsigned long long __temp134=0;
  unsigned long long __temp135=0;
  unsigned long long __temp136__z=0;
  unsigned long long __temp137=0;
  unsigned long long __temp138__z=0;
  unsigned long long __temp139__z=0;
  unsigned long long __temp140=0;
  int __temp141__z=0;
  int __temp142=0;
  int __temp143__z=0;
  int x=0;
  const char* __temp145=0;
  __temp133=1;
  __temp134=2;
  __temp135=3;
  mul__temp30(__temp134,__temp135,&__temp136__z);
  __temp137=4;
  div__temp39(__temp136__z,__temp137,&__temp138__z);
  add__temp21(__temp133,__temp138__z,&__temp139__z);
  __temp140=1;
  lt__temp48(__temp139__z,__temp140,&__temp141__z);
  __temp142=1;
  eq__temp94(__temp141__z,__temp142,&__temp143__z);
  x=__temp143__z;
  print__temp8(x);
  __temp145="\n";
  print__temp9(__temp145);
}

int main() {main__temp132();return 0;}