#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp389v(void** __temp401v, unsigned long long* __temp402v, unsigned long long* __temp403v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp401v=unsafe_ptr;
  *__temp402v=unsafe_size;
  *__temp403v=align;
}

static inline void false__temp7v(int* __temp404v) {
  int value=0;
  __temp_return:
  *__temp404v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp405v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp405v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp406v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp406v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp407v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp407v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp408v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp408v=z;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp409v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp409v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp410v) {
  __temp_return:
  *__temp410v=to;
}

static inline void realloc__temp368v(void* allocated, unsigned long long bytes, void** __temp411v) {
  void* new_allocated=0;
  void* __temp369v__to=0;
  new_allocated=allocated?realloc(allocated,bytes):malloc(bytes);
  attach_type__temp11v(new_allocated,allocated,&__temp369v__to);
  goto __temp_return;
  __temp_return:
  *__temp411v=__temp369v__to;
}

static inline void zero__temp370v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void grow__temp375v(void** __temp412v, unsigned long long* __temp413v, unsigned long long buffer__align, unsigned long long elements, void** __temp414v, unsigned long long* __temp415v, unsigned long long* __temp416v) {
  void* buffer__unsafe_ptr=*__temp412v;
  unsigned long long buffer__unsafe_size=*__temp413v;
  unsigned long long __temp376v=0;
  int __temp377v__z=0;
  unsigned long long __temp378v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp379v__z=0;
  unsigned long long __temp380v__z=0;
  unsigned long long bytes=0;
  void* __temp381v____temp369v__to=0;
  __temp376v=0;
  eq__temp276v(elements,__temp376v,&__temp377v__z);
  if(__temp377v__z){
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__align,&__temp378v__z);
  prev_bytes=__temp378v__z;
  add__temp108v(buffer__unsafe_size,elements,&__temp379v__z);
  buffer__unsafe_size=__temp379v__z;
  mul__temp132v(buffer__align,buffer__unsafe_size,&__temp380v__z);
  bytes=__temp380v__z;
  realloc__temp368v(buffer__unsafe_ptr,bytes,&__temp381v____temp369v__to);
  buffer__unsafe_ptr=__temp381v____temp369v__to;
  zero__temp370v(buffer__unsafe_ptr,prev_bytes,bytes);
  __temp_return:
  *__temp412v=buffer__unsafe_ptr;
  *__temp413v=buffer__unsafe_size;
  *__temp414v=buffer__unsafe_ptr;
  *__temp415v=buffer__unsafe_size;
  *__temp416v=buffer__align;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp417v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp417v=z;
}

static inline void add__temp371v(void* allocated, unsigned long long offset, void** __temp418v) {
  void* element=0;
  void* __temp372v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp372v__to);
  goto __temp_return;
  __temp_return:
  *__temp418v=__temp372v__to;
}

static inline int get__temp383v(void** __temp419v, unsigned long long* __temp420v, unsigned long long buffer__align, unsigned long long i, void** __temp421v) {
  void* buffer__unsafe_ptr=*__temp419v;
  unsigned long long buffer__unsafe_size=*__temp420v;
  int __temp384v__z=0;
  unsigned long long __temp385v__z=0;
  void* __temp386v____temp372v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp384v__z);
  if(__temp384v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 19 column 14\n");
  __temp_errcode=2;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp385v__z);
  add__temp371v(buffer__unsafe_ptr,__temp385v__z,&__temp386v____temp372v__to);
  goto __temp_return;
  __temp_return:
  *__temp419v=buffer__unsafe_ptr;
  *__temp420v=buffer__unsafe_size;
  *__temp421v=__temp386v____temp372v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp337v(double value) {
  int __temp338v=0;
  const char* __temp339v=0;
  const char* endl=0;
  __temp339v="\n";
  endl=__temp339v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp388v() {
  void* __temp391v__unsafe_ptr=0;
  unsigned long long __temp391v__unsafe_size=0;
  unsigned long long __temp391v__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  unsigned long long __temp392v=0;
  void* __temp393v__buffer__unsafe_ptr=0;
  unsigned long long __temp393v__buffer__unsafe_size=0;
  unsigned long long __temp393v__buffer__align=0;
  unsigned long long __temp394v=0;
  void* __temp395v____temp386v____temp372v__to=0;
  double __temp396v=0;
  unsigned long long __temp397v=0;
  void* __temp398v____temp386v____temp372v__to=0;
  double __temp399v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp389v(&__temp391v__unsafe_ptr,&__temp391v__unsafe_size,&__temp391v__align);
  x__unsafe_ptr=__temp391v__unsafe_ptr;
  x__unsafe_size=__temp391v__unsafe_size;
  x__align=__temp391v__align;
  __temp392v=1;
  grow__temp375v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp392v,&__temp393v__buffer__unsafe_ptr,&__temp393v__buffer__unsafe_size,&__temp393v__buffer__align);
  __temp394v=0;
  __temp_errcode=get__temp383v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp394v,&__temp395v____temp386v____temp372v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 6 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp396v=1.0;
  if(!__temp395v____temp386v____temp372v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 6 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp395v____temp386v____temp372v__to,&__temp396v,8);
  __temp397v=0;
  __temp_errcode=get__temp383v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp397v,&__temp398v____temp386v____temp372v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 7 column 13\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp398v____temp386v____temp372v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 7 column 11\n");
  goto __temp_failure;
  }
  memcpy(&__temp399v__z,(char*)__temp398v____temp386v____temp372v__to,8);
  print__temp337v(__temp399v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp388v();return 0;}