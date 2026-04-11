#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void Test__temp382v(unsigned long long* __temp393v, unsigned long long* __temp394v) {
  unsigned long long __temp383v=0;
  unsigned long long x=0;
  unsigned long long __temp384v=0;
  unsigned long long y=0;
  __temp383v=1;
  x=__temp383v;
  __temp384v=2;
  y=__temp384v;
  goto __temp_return;
  __temp_return:
  *__temp393v=x;
  *__temp394v=y;
}

static inline void print__temp345v(unsigned long long value) {
  int __temp346v=0;
  const char* __temp347v=0;
  const char* endl=0;
  __temp347v="\n";
  endl=__temp347v;
  printf("%llu%s",value,endl);
}

static inline void main__temp386v() {
  unsigned long long __temp387v__x=0;
  unsigned long long __temp387v__y=0;
  unsigned long long t__x=0;
  unsigned long long t__y=0;
  unsigned long long __temp390v=0;
  unsigned long long __temp392v__x=0;
  unsigned long long __temp392v__y=0;
  Test__temp382v(&__temp387v__x,&__temp387v__y);
  t__x=__temp387v__x;
  t__y=__temp387v__y;
  print__temp345v(t__x);
  print__temp345v(t__y);
  __temp390v=2;
  t__x=__temp390v;
  print__temp345v(t__x);
  Test__temp382v(&__temp392v__x,&__temp392v__y);
  t__x=__temp392v__x;
  t__y=__temp392v__y;
}

int main() {main__temp386v();return 0;}