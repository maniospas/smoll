#include <stdio.h>
#include <stdlib.h>

static inline void add__temp43(unsigned long long x, unsigned long long y, unsigned long long* __temp164) {
  unsigned long long z=0;
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp164=z;
}

static inline void print__temp27(unsigned long long value) {
  int __temp28=0;
  const char* __temp29=0;
  const char* endl=0;
  __temp29="\n";
  endl=__temp29;
  printf("%llu%s",value,endl);
}

static inline void main__temp159() {
  unsigned long long __temp160=0;
  unsigned long long x=0;
  unsigned long long __temp161=0;
  unsigned long long __temp162__z=0;
  __temp160=1;
  x=__temp160;
  __temp161=2;
  add__temp43(x,__temp161,&__temp162__z);
  print__temp27(__temp162__z);
}

int main() {main__temp159();return 0;}