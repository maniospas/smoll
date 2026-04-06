#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp397v(void** __temp420v, unsigned long long* __temp421v, unsigned long long* __temp422v) {
  void* ptr=0;
  unsigned long long size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp420v=ptr;
  *__temp421v=size;
  *__temp422v=align;
}

static inline void false__temp7v(int* __temp423v) {
  int value=0;
  __temp_return:
  *__temp423v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp424v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp424v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp425v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp425v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp426v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp426v=z;
}

static inline void void__temp13v() {
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp427v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp427v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp428v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp428v=z;
}

static inline void alloc__temp367v(unsigned long long bytes, void** __temp429v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp429v=allocated;
}

static inline void zero__temp369v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void expect__temp374v(void** __temp430v, unsigned long long* __temp431v, unsigned long long buffer__align, unsigned long long elements) {
  void* buffer__ptr=*__temp430v;
  unsigned long long buffer__size=*__temp431v;
  unsigned long long __temp375v=0;
  int __temp376v__z=0;
  unsigned long long __temp378v__z=0;
  unsigned long long __temp379v__z=0;
  unsigned long long bytes=0;
  void* __temp380v__allocated=0;
  unsigned long long __temp381v=0;
  __temp375v=0;
  eq__temp276v(elements,__temp375v,&__temp376v__z);
  if(__temp376v__z){
  void__temp13v();
  return;
  }
  add__temp108v(buffer__size,elements,&__temp378v__z);
  buffer__size=__temp378v__z;
  mul__temp132v(buffer__align,buffer__size,&__temp379v__z);
  bytes=__temp379v__z;
  alloc__temp367v(bytes,&__temp380v__allocated);
  buffer__ptr=__temp380v__allocated;
  __temp381v=0;
  zero__temp369v(buffer__ptr,__temp381v,bytes);
  __temp_return:
  *__temp430v=buffer__ptr;
  *__temp431v=buffer__size;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp432v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp432v=z;
}

static inline void same_contents__temp11v(void* to, void* from, void** __temp433v) {
  __temp_return:
  *__temp433v=to;
}

static inline void add__temp370v(void* allocated, unsigned long long offset, void** __temp434v) {
  void* element=0;
  void* __temp371v__to=0;
  void* el=0;
  element=((char*)allocated)+offset;
  same_contents__temp11v(element,allocated,&__temp371v__to);
  el=__temp371v__to;
  goto __temp_return;
  __temp_return:
  *__temp434v=el;
}

static inline int get__temp383v(void** __temp435v, unsigned long long* __temp436v, unsigned long long buffer__align, unsigned long long i, void** __temp437v) {
  void* buffer__ptr=*__temp435v;
  unsigned long long buffer__size=*__temp436v;
  int __temp384v__z=0;
  unsigned long long __temp385v__z=0;
  void* __temp386v__el=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__size,&__temp384v__z);
  if(__temp384v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 18 column 14\n");
  __temp_errcode=2;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp385v__z);
  add__temp370v(buffer__ptr,__temp385v__z,&__temp386v__el);
  goto __temp_return;
  __temp_return:
  *__temp435v=buffer__ptr;
  *__temp436v=buffer__size;
  *__temp437v=__temp386v__el;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void float__temp363v(unsigned long long x, double* __temp438v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp438v=z;
}

static inline void print__temp330v(const char* value, const char* endl) {
  int __temp331v=0;
  printf("%s%s",value,endl);
}

static inline void print__temp345v(unsigned long long value, const char* endl) {
  int __temp346v=0;
  printf("%llu%s",value,endl);
}

static inline void print__temp387v(void** __temp439v, unsigned long long* __temp440v, unsigned long long buffer__align) {
  void* buffer__ptr=*__temp439v;
  unsigned long long buffer__size=*__temp440v;
  const char* __temp388v=0;
  const char* __temp389v=0;
  const char* __temp391v=0;
  unsigned long long __temp393v__z=0;
  const char* __temp394v=0;
  __temp388v="buffer: ";
  __temp389v="";
  print__temp330v(__temp388v,__temp389v);
  __temp391v=" elements, ";
  print__temp345v(buffer__size,__temp391v);
  mul__temp132v(buffer__align,buffer__size,&__temp393v__z);
  __temp394v=" bytes\n";
  print__temp345v(__temp393v__z,__temp394v);
  __temp_return:
  *__temp439v=buffer__ptr;
  *__temp440v=buffer__size;
}

static inline void print__temp337v(double value) {
  int __temp338v=0;
  const char* __temp339v=0;
  const char* endl=0;
  __temp339v="\n";
  endl=__temp339v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp402v() {
  void* __temp403v__ptr=0;
  unsigned long long __temp403v__size=0;
  unsigned long long __temp403v__align=0;
  void* x__ptr=0;
  unsigned long long x__size=0;
  unsigned long long x__align=0;
  unsigned long long __temp404v=0;
  unsigned long long __temp406v=0;
  void* __temp407v____temp386v__el=0;
  void* first=0;
  unsigned long long __temp408v=0;
  double __temp409v__z=0;
  double __temp410v__value=0;
  double value=0;
  unsigned long long __temp412v=0;
  void* __temp413v____temp386v__el=0;
  double __temp414v__value=0;
  unsigned long long __temp416v=0;
  void* __temp417v____temp386v__el=0;
  double __temp418v__value=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp397v(&__temp403v__ptr,&__temp403v__size,&__temp403v__align);
  x__ptr=__temp403v__ptr;
  x__size=__temp403v__size;
  x__align=__temp403v__align;
  __temp404v=10;
  expect__temp374v(&x__ptr,&x__size,x__align,__temp404v);
  __temp406v=0;
  __temp_errcode=get__temp383v(&x__ptr,&x__size,x__align,__temp406v,&__temp407v____temp386v__el);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 13\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  first=__temp407v____temp386v__el;
  __temp408v=10;
  float__temp363v(__temp408v,&__temp409v__z);
  if(!first){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 11\n");
  goto __temp_failure;
  }
  memcpy((char*)first,&__temp409v__z,8);
  if(!x__ptr){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 19 column 13\n");
  goto __temp_failure;
  }
  memcpy(&__temp410v__value,(char*)x__ptr,8);
  value=__temp410v__value;
  print__temp387v(&x__ptr,&x__size,x__align);
  __temp412v=0;
  __temp_errcode=get__temp383v(&x__ptr,&x__size,x__align,__temp412v,&__temp413v____temp386v__el);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 21 column 17\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp413v____temp386v__el){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 11\n");
  goto __temp_failure;
  }
  memcpy(&__temp414v__value,(char*)__temp413v____temp386v__el,8);
  print__temp337v(__temp414v__value);
  __temp416v=1;
  __temp_errcode=get__temp383v(&x__ptr,&x__size,x__align,__temp416v,&__temp417v____temp386v__el);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 22 column 17\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp417v____temp386v__el){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 22 column 11\n");
  goto __temp_failure;
  }
  memcpy(&__temp418v__value,(char*)__temp417v____temp386v__el,8);
  print__temp337v(__temp418v__value);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp402v();return 0;}