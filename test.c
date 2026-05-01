#include <stdio.h>
#include <stdlib.h>
#include <string.h>



static inline __attribute__((always_inline)) void console__temp624v() {
}

static inline __attribute__((always_inline)) void not__temp17v(int value, int* __temp866v) {
  int z=0;
  z=value?0:1;
  *__temp866v=z;
}

static inline __attribute__((always_inline)) int float__temp630v(double* __temp867v) {
  double number=0;
  char ch=0;
  long long int result=0;
  int success=0;
  int __temp631v__=0;
  int __temp_errcode=0;
  number=0;
  ch=0;
  result=scanf("%lf%c",&number,&ch);
  success=(result==2&&(ch==13||ch==10));
  not__temp17v(success,&__temp631v__);
  if(__temp631v__){
  printf("%s", "\033[31mfail\033[0m user input was not a float\n\033[31mat\033[0m std/core/convertstr.s line 51 column 14\n");
  __temp_errcode=12;
  goto __temp_failure;
  }
  *__temp867v=number;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp863v() {
  double __temp865v__=0;
  double x=0;
  int __temp_errcode=0;
  console__temp624v();
  __temp_errcode=float__temp630v(&__temp865v__);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 5 column 9\n   unhandled error from float(const console) -> (float number)\n");
  goto __temp_failure;
  }
  x=__temp865v__;
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp863v();return 0;}