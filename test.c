#include <stdio.h>
#include <stdlib.h>

static inline void false__temp5(int* __temp379) {
  int value=0;
  __temp_return:
  *__temp379=value;
}

static inline void not__temp30(int __temp29, int* __temp380) {
  int __temp31__value=0;
  false__temp5(&__temp31__value);
  goto __temp_return;
  __temp_return:
  *__temp380=__temp31__value;
}

static inline void is_different__temp93(unsigned long long x, unsigned long long y, int* __temp381) {
  int __temp94=0;
  int __temp95____temp31__value=0;
  not__temp30(__temp94,&__temp95____temp31__value);
  goto __temp_return;
  __temp_return:
  *__temp381=__temp95____temp31__value;
}

static inline void lt__temp215(unsigned long long x, unsigned long long y, int* __temp382) {
  int __temp216____temp95____temp31__value=0;
  int z=0;
  is_different__temp93(x,y,&__temp216____temp95____temp31__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp382=z;
}

static inline void print__temp98(const char* value) {
  int __temp99=0;
  const char* __temp100=0;
  const char* endl=0;
  __temp100="\n";
  endl=__temp100;
  printf("%s%s",value,endl);
}

static inline void sub__temp365(unsigned long long x, unsigned long long y, unsigned long long* __temp383) {
  int __temp366____temp95____temp31__value=0;
  int __temp367__z=0;
  const char* __temp368=0;
  unsigned long long z=0;
  is_different__temp93(x,y,&__temp366____temp95____temp31__value);
  lt__temp215(x,y,&__temp367__z);
  if(__temp367__z){
  __temp368="warning: negative\n";
  print__temp98(__temp368);
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp383=z;
}

static inline void print__temp113(unsigned long long value) {
  int __temp114=0;
  const char* __temp115=0;
  const char* endl=0;
  __temp115="\n";
  endl=__temp115;
  printf("%llu%s",value,endl);
}

static inline void main__temp374() {
  unsigned long long __temp375=0;
  unsigned long long __temp376=0;
  unsigned long long __temp377__z=0;
  __temp375=1;
  __temp376=2;
  sub__temp365(__temp375,__temp376,&__temp377__z);
  print__temp113(__temp377__z);
}

int main() {main__temp374();return 0;}