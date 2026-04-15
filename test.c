#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void print__temp337v(const char* value) {
  int __temp338v=0;
  const char* __temp339v=0;
  const char* endl=0;
  __temp339v="\n";
  endl=__temp339v;
  printf("%s%s",value,endl);
}

static inline int always_fail__temp450v() {
  const char* __temp451v=0;
  int __temp_errcode=0;
  __temp_errcode=8;
  goto __temp_failure;
  __temp451v="never reached";
  print__temp337v(__temp451v);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void not__temp16v(int value, int* __temp459v) {
  int z=0;
  z=value?0:1;
  goto __temp_return;
  __temp_return:
  *__temp459v=z;
}

static inline void main__temp453v() {
  int __temp454v=0;
  int __temp456v__z=0;
  const char* __temp457v=0;
  __temp454v=__temp454v ? __temp454v:always_fail__temp450v();
  __temp454v=__temp454v==0;
  not__temp16v(__temp454v,&__temp456v__z);
  if(__temp456v__z){
  __temp457v="failed successfully";
  print__temp337v(__temp457v);
  }
}

int main() {main__temp453v();return 0;}