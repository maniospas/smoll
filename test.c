#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp393v(void** __temp402v, unsigned long long* __temp403v, unsigned long long* __temp404v) {
  void* ptr=0;
  unsigned long long size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp402v=ptr;
  *__temp403v=size;
  *__temp404v=align;
}

static inline void float__temp362v(unsigned long long x, double* __temp405v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp405v=z;
}

static inline int main__temp398v() {
  void* __temp399v__ptr=0;
  unsigned long long __temp399v__size=0;
  unsigned long long __temp399v__align=0;
  void* x__ptr=0;
  unsigned long long x__size=0;
  unsigned long long x__align=0;
  unsigned long long __temp400v=0;
  double __temp401v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp393v(&__temp399v__ptr,&__temp399v__size,&__temp399v__align);
  x__ptr=__temp399v__ptr;
  x__size=__temp399v__size;
  x__align=__temp399v__align;
  __temp400v=10;
  float__temp362v(__temp400v,&__temp401v__z);
  if(!x__ptr){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 16 column 11\n");
  goto __temp_failure;
  }
  memcpy((char*)x__ptr,&__temp401v__z,8);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp398v();return 0;}