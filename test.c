#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp432v(void** __temp447v, unsigned long long* __temp448v, unsigned long long* __temp449v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp447v=unsafe_ptr;
  *__temp448v=unsafe_size;
  *__temp449v=align;
}

static inline void false__temp7v(int* __temp450v) {
  int value=0;
  __temp_return:
  *__temp450v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp451v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp451v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp452v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp452v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp453v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp453v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp454v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp454v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from__value, unsigned long long to__value) {
  memset(((char*)allocated)+from__value,0,to__value);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp455v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp455v=z;
}

static inline int alloc__temp382v(unsigned long long bytes__value, void** __temp456v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes__value);
  failed=allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 6 column 14\n");
  __temp_errcode=4;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp456v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp391v(void** __temp457v, unsigned long long* __temp458v, unsigned long long* __temp459v, unsigned long long size__value, void** __temp460v, unsigned long long* __temp461v, unsigned long long* __temp462v) {
  void* buffer__unsafe_ptr=*__temp457v;
  unsigned long long buffer__unsafe_size=*__temp458v;
  unsigned long long buffer__align=*__temp459v;
  int __temp392v__z=0;
  unsigned long long __temp393v=0;
  unsigned long long __temp394v__z=0;
  unsigned long long __temp396v=0;
  int __temp397v__z=0;
  unsigned long long __temp398v__z=0;
  unsigned long long bytes=0;
  void* __temp399v__allocated=0;
  unsigned long long __temp400v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size__value,&__temp392v__z);
  if(__temp392v__z){
  __temp393v=0;
  mul__temp132v(buffer__align,size__value,&__temp394v__z);
  zero__temp386v(buffer__unsafe_ptr,__temp393v,__temp394v__z);
  goto __temp_return;
  }
  __temp396v=0;
  neq__temp300v(buffer__unsafe_size,__temp396v,&__temp397v__z);
  if(__temp397v__z){
  printf("%s", "\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/array.s line 13 column 14\n");
  __temp_errcode=6;
  goto __temp_failure;
  }
  buffer__unsafe_size=size__value;
  mul__temp132v(buffer__align,size__value,&__temp398v__z);
  bytes=__temp398v__z;
  __temp_errcode=alloc__temp382v(bytes,&__temp399v__allocated);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 16 column 36\n   unhandled error from alloc(nat bytes.value) -> (any ptr allocated)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp399v__allocated;
  __temp400v=0;
  zero__temp386v(buffer__unsafe_ptr,__temp400v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp457v=buffer__unsafe_ptr;
  *__temp458v=buffer__unsafe_size;
  *__temp459v=buffer__align;
  *__temp460v=buffer__unsafe_ptr;
  *__temp461v=buffer__unsafe_size;
  *__temp462v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp463v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp463v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp464v) {
  __temp_return:
  *__temp464v=to;
}

static inline void add__temp387v(void* allocated, unsigned long long offset__value, void** __temp465v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset__value;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp465v=__temp388v__to;
}

static inline int mutget__temp420v(void** __temp466v, unsigned long long* __temp467v, unsigned long long buffer__align, unsigned long long i__value, void** __temp468v) {
  void* buffer__unsafe_ptr=*__temp466v;
  unsigned long long buffer__unsafe_size=*__temp467v;
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
  *__temp466v=buffer__unsafe_ptr;
  *__temp467v=buffer__unsafe_size;
  *__temp468v=__temp423v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test__temp429v(void** __temp469v) {
  void* t=*__temp469v;
  double __temp430v=0;
  int __temp_errcode=0;
  __temp430v=1.0;
  if(!t){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 5 column 7\n");
  goto __temp_failure;
  }
  memcpy((char*)t,&__temp430v,8);
  __temp_return:
  *__temp469v=t;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp424v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__align, unsigned long long i__value, void** __temp470v) {
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
  *__temp470v=__temp427v____temp388v__to;
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
  unsigned long long __temp435v=0;
  void* __temp436v__buffer__unsafe_ptr=0;
  unsigned long long __temp436v__buffer__unsafe_size=0;
  unsigned long long __temp436v__buffer__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__align=0;
  unsigned long long __temp437v=0;
  void* __temp438v____temp423v____temp388v__to=0;
  double __temp439v=0;
  unsigned long long __temp440v=0;
  void* __temp441v____temp423v____temp388v__to=0;
  unsigned long long __temp443v=0;
  void* __temp444v____temp427v____temp388v__to=0;
  double __temp445v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp432v(&__temp434v__unsafe_ptr,&__temp434v__unsafe_size,&__temp434v__align);
  __temp435v=1;
  __temp_errcode=alloc__temp391v(&__temp434v__unsafe_ptr,&__temp434v__unsafe_size,&__temp434v__align,__temp435v,&__temp436v__buffer__unsafe_ptr,&__temp436v__buffer__unsafe_size,&__temp436v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 8 column 22\n   unhandled error from alloc(mut any[], nat size.value) -> (mut any[])\n");
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp436v__buffer__unsafe_ptr;
  x__unsafe_size=__temp436v__buffer__unsafe_size;
  x__align=__temp436v__buffer__align;
  y__unsafe_ptr=x__unsafe_ptr;
  y__unsafe_size=x__unsafe_size;
  y__align=x__align;
  __temp437v=0;
  __temp_errcode=mutget__temp420v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp437v,&__temp438v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 10 column 6\n   unhandled error from mutget(mut any[], nat i.value) -> (mut any ptr)\n");
  goto __temp_failure;
  }
  __temp439v=1.0;
  if(!__temp438v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp438v____temp423v____temp388v__to,&__temp439v,8);
  __temp440v=0;
  __temp_errcode=mutget__temp420v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp440v,&__temp441v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 11\n   unhandled error from mutget(mut any[], nat i.value) -> (mut any ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=test__temp429v(&__temp441v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 5\n   unhandled error from test(mut float ptr t) -> ()\n");
  goto __temp_failure;
  }
  __temp443v=0;
  __temp_errcode=get__temp424v(y__unsafe_ptr,y__unsafe_size,y__align,__temp443v,&__temp444v____temp427v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 12 column 12\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp444v____temp427v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__z,(char*)__temp444v____temp427v____temp388v__to,8);
  print__temp335v(__temp445v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp431v();return 0;}