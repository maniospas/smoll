#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp432v(void** __temp444v, unsigned long long* __temp445v, unsigned long long* __temp446v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp444v=unsafe_ptr;
  *__temp445v=unsafe_size;
  *__temp446v=align;
}

static inline void false__temp7v(int* __temp447v) {
  int value=0;
  __temp_return:
  *__temp447v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp448v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp448v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp449v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp449v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp450v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp450v=z;
}

static inline void free__temp385v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp451v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp451v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp452v) {
  __temp_return:
  *__temp452v=to;
}

static inline int realloc__temp383v(void* allocated, unsigned long long bytes__value, void** __temp453v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp384v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated?realloc(allocated,bytes__value):malloc(bytes__value);
  failed=new_allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m reallocation failed\n\033[31mat\033[0m std/unsafe.s line 12 column 14\n");
  __temp_errcode=5;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated,&__temp384v__to);
  goto __temp_return;
  __temp_return:
  *__temp453v=__temp384v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp454v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp454v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from__value, unsigned long long to__value) {
  memset(((char*)allocated)+from__value,0,to__value);
}

static inline int resize__temp402v(void** __temp455v, unsigned long long* __temp456v, unsigned long long* __temp457v, unsigned long long size__value, void** __temp458v, unsigned long long* __temp459v, unsigned long long* __temp460v) {
  void* buffer__unsafe_ptr=*__temp455v;
  unsigned long long buffer__unsafe_size=*__temp456v;
  unsigned long long buffer__align=*__temp457v;
  int __temp403v__z=0;
  unsigned long long __temp404v=0;
  int __temp405v__z=0;
  unsigned long long __temp407v=0;
  unsigned long long __temp408v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp409v__z=0;
  unsigned long long bytes=0;
  void* __temp410v____temp384v__to=0;
  int __temp411v__z=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size__value,&__temp403v__z);
  if(__temp403v__z){
  goto __temp_return;
  }
  __temp404v=0;
  eq__temp276v(size__value,__temp404v,&__temp405v__z);
  if(__temp405v__z){
  free__temp385v(buffer__unsafe_ptr);
  __temp407v=0;
  buffer__unsafe_size=__temp407v;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__align,&__temp408v__z);
  prev_bytes=__temp408v__z;
  buffer__unsafe_size=size__value;
  mul__temp132v(buffer__align,size__value,&__temp409v__z);
  bytes=__temp409v__z;
  __temp_errcode=realloc__temp383v(buffer__unsafe_ptr,bytes,&__temp410v____temp384v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 30 column 36\n   unhandled error from realloc(any ptr allocated, nat bytes.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp410v____temp384v__to;
  lt__temp180v(prev_bytes,bytes,&__temp411v__z);
  if(__temp411v__z){
  zero__temp386v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp455v=buffer__unsafe_ptr;
  *__temp456v=buffer__unsafe_size;
  *__temp457v=buffer__align;
  *__temp458v=buffer__unsafe_ptr;
  *__temp459v=buffer__unsafe_size;
  *__temp460v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp461v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp461v=z;
}

static inline void add__temp387v(void* allocated, unsigned long long offset__value, void** __temp462v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset__value;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp462v=__temp388v__to;
}

static inline int mutget__temp420v(void** __temp463v, unsigned long long* __temp464v, unsigned long long buffer__align, unsigned long long i__value, void** __temp465v) {
  void* buffer__unsafe_ptr=*__temp463v;
  unsigned long long buffer__unsafe_size=*__temp464v;
  int __temp421v__z=0;
  unsigned long long __temp422v__z=0;
  void* __temp423v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i__value,buffer__unsafe_size,&__temp421v__z);
  if(__temp421v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 42 column 14\n");
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i__value,buffer__align,&__temp422v__z);
  add__temp387v(buffer__unsafe_ptr,__temp422v__z,&__temp423v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp463v=buffer__unsafe_ptr;
  *__temp464v=buffer__unsafe_size;
  *__temp465v=__temp423v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test__temp429v(void** __temp466v) {
  void* t=*__temp466v;
  double __temp430v=0;
  int __temp_errcode=0;
  __temp430v=1.0;
  if(!t){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 5 column 7\n");
  goto __temp_failure;
  }
  memcpy((char*)t,&__temp430v,8);
  __temp_return:
  *__temp466v=t;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp424v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__align, unsigned long long i__value, void** __temp467v) {
  int __temp425v__z=0;
  unsigned long long __temp426v__z=0;
  void* __temp427v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i__value,buffer__unsafe_size,&__temp425v__z);
  if(__temp425v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 47 column 14\n");
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i__value,buffer__align,&__temp426v__z);
  add__temp387v(buffer__unsafe_ptr,__temp426v__z,&__temp427v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp467v=__temp427v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp335v(double value) {
  int __temp336v=0;
  const char* __temp337v=0;
  const char* endl=0;
  __temp337v="\n";
  endl=__temp337v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp431v() {
  void* __temp434v__unsafe_ptr=0;
  unsigned long long __temp434v__unsafe_size=0;
  unsigned long long __temp434v__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  unsigned long long __temp435v=0;
  void* __temp436v__buffer__unsafe_ptr=0;
  unsigned long long __temp436v__buffer__unsafe_size=0;
  unsigned long long __temp436v__buffer__align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__align=0;
  unsigned long long __temp437v=0;
  void* __temp438v____temp423v____temp388v__to=0;
  unsigned long long __temp440v=0;
  void* __temp441v____temp427v____temp388v__to=0;
  double __temp442v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp432v(&__temp434v__unsafe_ptr,&__temp434v__unsafe_size,&__temp434v__align);
  x__unsafe_ptr=__temp434v__unsafe_ptr;
  x__unsafe_size=__temp434v__unsafe_size;
  x__align=__temp434v__align;
  __temp435v=1;
  __temp_errcode=resize__temp402v(&x__unsafe_ptr,&x__unsafe_size,&x__align,__temp435v,&__temp436v__buffer__unsafe_ptr,&__temp436v__buffer__unsafe_size,&__temp436v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 9 column 6\n   unhandled error from resize(mut any[], nat size.value) -> (mut any[])\n");
  goto __temp_failure;
  }
  y__unsafe_ptr=x__unsafe_ptr;
  y__unsafe_size=x__unsafe_size;
  y__align=x__align;
  __temp437v=0;
  __temp_errcode=mutget__temp420v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp437v,&__temp438v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 11\n   unhandled error from mutget(mut any[], nat i.value) -> (mut any ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=test__temp429v(&__temp438v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 5\n   unhandled error from test(mut float ptr t) -> ()\n");
  goto __temp_failure;
  }
  __temp440v=0;
  __temp_errcode=get__temp424v(y__unsafe_ptr,y__unsafe_size,y__align,__temp440v,&__temp441v____temp427v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 12 column 12\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp441v____temp427v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp442v__z,(char*)__temp441v____temp427v____temp388v__to,8);
  print__temp335v(__temp442v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp431v();return 0;}