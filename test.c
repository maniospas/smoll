#include <stdio.h>
#include <stdlib.h>

static inline void false__temp5v(int* __temp376v) {
  int value=0;
  __temp_return:
  *__temp376v=value;
}

static inline void not__temp30v(int __temp29v, int* __temp377v) {
  int __temp31v__value=0;
  false__temp5v(&__temp31v__value);
  goto __temp_return;
  __temp_return:
  *__temp377v=__temp31v__value;
}

static inline void is_different__temp93v(unsigned long long x, unsigned long long y, int* __temp378v) {
  int __temp94v=0;
  int __temp95v____temp31v__value=0;
  not__temp30v(__temp94v,&__temp95v____temp31v__value);
  goto __temp_return;
  __temp_return:
  *__temp378v=__temp95v____temp31v__value;
}

static inline void lt__temp215v(unsigned long long x, unsigned long long y, int* __temp379v) {
  int __temp216v____temp95v____temp31v__value=0;
  int z=0;
  is_different__temp93v(x,y,&__temp216v____temp95v____temp31v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp379v=z;
}

static inline void print__temp96v(const char* value) {
  int __temp97v=0;
  const char* __temp98v=0;
  const char* endl=0;
  __temp98v="\n";
  endl=__temp98v;
  printf("%s%s",value,endl);
}

static inline void sub__temp361v(unsigned long long x, unsigned long long y, unsigned long long* __temp380v) {
  int __temp362v____temp95v____temp31v__value=0;
  int __temp363v=0;
  int __temp364v__z=0;
  const char* __temp365v=0;
  unsigned long long z=0;
  is_different__temp93v(x,y,&__temp362v____temp95v____temp31v__value);
  lt__temp215v(x,y,&__temp364v__z);
  if(__temp364v__z){
  __temp365v="message";
  print__temp96v(__temp365v);
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp380v=z;
}

static inline void print__temp111v(unsigned long long value) {
  int __temp112v=0;
  const char* __temp113v=0;
  const char* endl=0;
  __temp113v="\n";
  endl=__temp113v;
  printf("%llu%s",value,endl);
}

static inline void main__temp371v() {
  unsigned long long __temp372v=0;
  unsigned long long __temp373v=0;
  unsigned long long __temp374v__z=0;
  __temp372v=1;
  __temp373v=2;
  sub__temp361v(__temp372v,__temp373v,&__temp374v__z);
  print__temp111v(__temp374v__z);
}

int main() {main__temp371v();return 0;}