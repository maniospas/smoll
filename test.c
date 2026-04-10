#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void ff__temp_buffer__buffer__temp440v(void** __temp449v, unsigned long long* __temp450v, unsigned long long* __temp451v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=0;
  __temp_return:
  *__temp449v=unsafe_ptr;
  *__temp450v=unsafe_size;
  *__temp451v=align;
}

static inline void false__temp7v(int* __temp452v) {
  int value=0;
  __temp_return:
  *__temp452v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp453v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp453v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp454v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp454v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp455v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp455v=z;
}

static inline void free__temp385v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp456v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp456v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp457v) {
  __temp_return:
  *__temp457v=to;
}

static inline int realloc__temp383v(void* allocated, unsigned long long bytes, void** __temp458v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp384v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated?realloc(allocated,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m reallocation failed\n\033[31mat\033[0m std/unsafe.s line 12 column 14\n");
  __temp_errcode=5;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated,&__temp384v__to);
  goto __temp_return;
  __temp_return:
  *__temp458v=__temp384v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp459v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp459v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline int resize__temp402v(void** __temp460v, unsigned long long* __temp461v, unsigned long long buffer__align, unsigned long long size, void** __temp462v, unsigned long long* __temp463v, unsigned long long* __temp464v) {
  void* buffer__unsafe_ptr=*__temp460v;
  unsigned long long buffer__unsafe_size=*__temp461v;
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
  eq__temp276v(buffer__unsafe_size,size,&__temp403v__z);
  if(__temp403v__z){
  goto __temp_return;
  }
  __temp404v=0;
  eq__temp276v(size,__temp404v,&__temp405v__z);
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
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp409v__z);
  bytes=__temp409v__z;
  __temp_errcode=realloc__temp383v(buffer__unsafe_ptr,bytes,&__temp410v____temp384v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 30 column 25\n   unhandled error from realloc(any ptr allocated, nat bytes) -> (any ptr)\n");
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
  *__temp460v=buffer__unsafe_ptr;
  *__temp461v=buffer__unsafe_size;
  *__temp462v=buffer__unsafe_ptr;
  *__temp463v=buffer__unsafe_size;
  *__temp464v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp424v(void** __temp465v, unsigned long long* __temp466v, unsigned long long buffer__align, unsigned long long* __temp467v) {
  void* buffer__unsafe_ptr=*__temp465v;
  unsigned long long buffer__unsafe_size=*__temp466v;
  goto __temp_return;
  __temp_return:
  *__temp465v=buffer__unsafe_ptr;
  *__temp466v=buffer__unsafe_size;
  *__temp467v=buffer__unsafe_size;
}

static inline void print__temp347v(unsigned long long value) {
  int __temp348v=0;
  const char* __temp349v=0;
  const char* endl=0;
  __temp349v="\n";
  endl=__temp349v;
  printf("%llu%s",value,endl);
}

static inline int test4__temp439v() {
  void* __temp442v__unsafe_ptr=0;
  unsigned long long __temp442v__unsafe_size=0;
  unsigned long long __temp442v__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  unsigned long long __temp443v=0;
  void* __temp444v__buffer__unsafe_ptr=0;
  unsigned long long __temp444v__buffer__unsafe_size=0;
  unsigned long long __temp444v__buffer__align=0;
  unsigned long long __temp445v__buffer__unsafe_size=0;
  int __temp_errcode=0;
  ff__temp_buffer__buffer__temp440v(&__temp442v__unsafe_ptr,&__temp442v__unsafe_size,&__temp442v__align);
  x__unsafe_ptr=__temp442v__unsafe_ptr;
  x__unsafe_size=__temp442v__unsafe_size;
  x__align=__temp442v__align;
  __temp443v=1;
  __temp_errcode=resize__temp402v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp443v,&__temp444v__buffer__unsafe_ptr,&__temp444v__buffer__unsafe_size,&__temp444v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 23 column 6\n   unhandled error from resize(any[], nat size) -> (any[])\n");
  goto __temp_failure;
  }
  len__temp424v(&x__unsafe_ptr,&x__unsafe_size,x__align,&__temp445v__buffer__unsafe_size);
  print__temp347v(__temp445v__buffer__unsafe_size);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int main__temp447v() {
  int __temp_errcode=0;
  __temp_errcode=test4__temp439v();
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 29 column 5\n   unhandled error from test4() -> ()\n");
  goto __temp_failure;
  }
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp447v();return 0;}