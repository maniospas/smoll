#include <stdio.h>
#include <stdlib.h>

static inline void false__temp5v(int* __temp374v) {
  int value=0;
  __temp_return:
  *__temp374v=value;
}

static inline void not__temp30v(int __temp29v, int* __temp375v) {
  int __temp31v__value=0;
  false__temp5v(&__temp31v__value);
  goto __temp_return;
  __temp_return:
  *__temp375v=__temp31v__value;
}

static inline void is_different__temp93v(unsigned long long x, unsigned long long y, int* __temp376v) {
  int __temp94v=0;
  int __temp95v____temp31v__value=0;
  not__temp30v(__temp94v,&__temp95v____temp31v__value);
  goto __temp_return;
  __temp_return:
  *__temp376v=__temp95v____temp31v__value;
}

static inline void lt__temp215v(unsigned long long x, unsigned long long y, int* __temp377v) {
  int __temp216v____temp95v____temp31v__value=0;
  int z=0;
  is_different__temp93v(x,y,&__temp216v____temp95v____temp31v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp377v=z;
}

static inline int sub__temp361v(unsigned long long x, unsigned long long y, unsigned long long* __temp378v) {
  int __temp362v____temp95v____temp31v__value=0;
  int __temp363v=0;
  int __temp364v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp93v(x,y,&__temp362v____temp95v____temp31v__value);
  lt__temp215v(x,y,&__temp364v__z);
  if(__temp364v__z){
  printf("%s", "\033[31mfail\033[0m id subtraction would yield a negative\n\033[31mat\033[0m std/core.s line 93 column 14\n");
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp378v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp113v(unsigned long long value) {
  int __temp114v=0;
  const char* __temp115v=0;
  const char* endl=0;
  __temp115v="\n";
  endl=__temp115v;
  printf("%llu%s",value,endl);
}

static inline int main__temp369v() {
  unsigned long long __temp370v=0;
  unsigned long long __temp371v=0;
  unsigned long long __temp372v__z=0;
  int __temp_errcode=0;
  __temp370v=1;
  __temp371v=2;
  __temp_errcode=sub__temp361v(__temp370v,__temp371v,&__temp372v__z);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 12 column 12\n   unhandled error from sub(x, y)\n");
  goto __temp_failure;
  }
  print__temp113v(__temp372v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp369v();return 0;}