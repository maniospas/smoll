#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp426v(void** __temp452v, unsigned long long* __temp453v, unsigned long long* __temp454v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp452v=unsafe_ptr;
  *__temp453v=unsafe_size;
  *__temp454v=align;
}

static inline void false__temp7v(int* __temp455v) {
  int value=0;
  __temp_return:
  *__temp455v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp456v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp456v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp457v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp457v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp458v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp458v=z;
}

static inline void free__temp385v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp459v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp459v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp460v) {
  __temp_return:
  *__temp460v=to;
}

static inline int realloc__temp383v(void* allocated, unsigned long long bytes__value, void** __temp461v) {
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
  *__temp461v=__temp384v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp462v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp462v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from__value, unsigned long long to__value) {
  memset(((char*)allocated)+from__value,0,to__value);
}

static inline int resize__temp402v(void** __temp463v, unsigned long long* __temp464v, unsigned long long buffer__align, unsigned long long size__value, void** __temp465v, unsigned long long* __temp466v, unsigned long long* __temp467v) {
  void* buffer__unsafe_ptr=*__temp463v;
  unsigned long long buffer__unsafe_size=*__temp464v;
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
  printf("%s", "\033[31mat\033[0m std/array.s line 30 column 25\n   unhandled error from realloc(any ptr allocated, nat bytes.value) -> (any ptr)\n");
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
  *__temp463v=buffer__unsafe_ptr;
  *__temp464v=buffer__unsafe_size;
  *__temp465v=buffer__unsafe_ptr;
  *__temp466v=buffer__unsafe_size;
  *__temp467v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp468v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp468v=z;
}

static inline void add__temp387v(void* allocated, unsigned long long offset__value, void** __temp469v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset__value;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp469v=__temp388v__to;
}

static inline int get__temp420v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__align, unsigned long long i__value, void** __temp470v) {
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
  *__temp470v=__temp423v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test1__temp425v(void** __temp471v, unsigned long long* __temp472v, unsigned long long* __temp473v) {
  void* __temp428v__unsafe_ptr=0;
  unsigned long long __temp428v__unsafe_size=0;
  unsigned long long __temp428v__align=0;
  unsigned long long __temp429v=0;
  void* __temp430v__buffer__unsafe_ptr=0;
  unsigned long long __temp430v__buffer__unsafe_size=0;
  unsigned long long __temp430v__buffer__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  unsigned long long __temp431v=0;
  void* __temp432v____temp423v____temp388v__to=0;
  double __temp433v=0;
  void* __temp434v__unsafe_ptr=0;
  unsigned long long __temp434v__unsafe_size=0;
  unsigned long long __temp434v__align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__align=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp426v(&__temp428v__unsafe_ptr,&__temp428v__unsafe_size,&__temp428v__align);
  __temp429v=1;
  __temp_errcode=resize__temp402v(&__temp428v__unsafe_ptr,&__temp428v__unsafe_size,__temp428v__align,__temp429v,&__temp430v__buffer__unsafe_ptr,&__temp430v__buffer__unsafe_size,&__temp430v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 5 column 16\n   unhandled error from resize(mut any[], nat size.value) -> (mut any[])\n");
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp430v__buffer__unsafe_ptr;
  x__unsafe_size=__temp430v__buffer__unsafe_size;
  x__align=__temp430v__buffer__align;
  __temp431v=0;
  __temp_errcode=get__temp420v(x__unsafe_ptr,x__unsafe_size,x__align,__temp431v,&__temp432v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 6 column 6\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  __temp433v=1.0;
  if(!__temp432v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 6 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp432v____temp423v____temp388v__to,&__temp433v,8);
  float__temp_buffer__buffer__temp426v(&__temp434v__unsafe_ptr,&__temp434v__unsafe_size,&__temp434v__align);
  y__unsafe_ptr=__temp434v__unsafe_ptr;
  y__unsafe_size=__temp434v__unsafe_size;
  y__align=__temp434v__align;
  goto __temp_return;
  __temp_return:
  *__temp471v=x__unsafe_ptr;
  *__temp472v=x__unsafe_size;
  *__temp473v=x__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test2__temp435v(void** __temp474v, unsigned long long* __temp475v, unsigned long long x__align) {
  void* x__unsafe_ptr=*__temp474v;
  unsigned long long x__unsafe_size=*__temp475v;
  unsigned long long __temp436v=0;
  void* __temp437v__buffer__unsafe_ptr=0;
  unsigned long long __temp437v__buffer__unsafe_size=0;
  unsigned long long __temp437v__buffer__align=0;
  unsigned long long __temp438v=0;
  void* __temp439v____temp423v____temp388v__to=0;
  double __temp440v=0;
  int __temp_errcode=0;
  __temp436v=2;
  __temp_errcode=resize__temp402v(&x__unsafe_ptr,&x__unsafe_size,x__align,__temp436v,&__temp437v__buffer__unsafe_ptr,&__temp437v__buffer__unsafe_size,&__temp437v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 6\n   unhandled error from resize(mut any[], nat size.value) -> (mut any[])\n");
  goto __temp_failure;
  }
  __temp438v=1;
  __temp_errcode=get__temp420v(x__unsafe_ptr,x__unsafe_size,x__align,__temp438v,&__temp439v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 12 column 6\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  __temp440v=2.0;
  if(!__temp439v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp439v____temp423v____temp388v__to,&__temp440v,8);
  __temp_return:
  *__temp474v=x__unsafe_ptr;
  *__temp475v=x__unsafe_size;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp476v) {
  int __temp60v=0;
  int __temp61v____temp26v__value=0;
  not__temp25v(__temp60v,&__temp61v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp476v=__temp61v____temp26v__value;
}

static inline void add__temp86v(double x, double y, double* __temp477v) {
  int __temp87v____temp61v____temp26v__value=0;
  double z=0;
  is_different__temp59v(x,y,&__temp87v____temp61v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp477v=z;
}

static inline void print__temp335v(double value) {
  int __temp336v=0;
  const char* __temp337v=0;
  const char* endl=0;
  __temp337v="\n";
  endl=__temp337v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp441v() {
  void* __temp442v__x__unsafe_ptr=0;
  unsigned long long __temp442v__x__unsafe_size=0;
  unsigned long long __temp442v__x__align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__align=0;
  unsigned long long __temp444v=0;
  void* __temp445v____temp423v____temp388v__to=0;
  double __temp446v__z=0;
  unsigned long long __temp447v=0;
  void* __temp448v____temp423v____temp388v__to=0;
  double __temp449v__z=0;
  double __temp450v__z=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp425v(&__temp442v__x__unsafe_ptr,&__temp442v__x__unsafe_size,&__temp442v__x__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 15 column 9\n   unhandled error from test1() -> (mut float[])\n");
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp442v__x__unsafe_ptr;
  x__unsafe_size=__temp442v__x__unsafe_size;
  x__align=__temp442v__x__align;
  __temp_errcode=test2__temp435v(&x__unsafe_ptr,&x__unsafe_size,x__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 5\n   unhandled error from test2(mut float[]) -> ()\n");
  goto __temp_failure;
  }
  __temp444v=0;
  __temp_errcode=get__temp420v(x__unsafe_ptr,x__unsafe_size,x__align,__temp444v,&__temp445v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 12\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp445v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp446v__z,(char*)__temp445v____temp423v____temp388v__to,8);
  __temp447v=1;
  __temp_errcode=get__temp420v(x__unsafe_ptr,x__unsafe_size,x__align,__temp447v,&__temp448v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 18\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp448v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 21\n");
  goto __temp_failure;
  }
  memcpy(&__temp449v__z,(char*)__temp448v____temp423v____temp388v__to,8);
  add__temp86v(__temp446v__z,__temp449v__z,&__temp450v__z);
  print__temp335v(__temp450v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp441v();return 0;}