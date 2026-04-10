#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp440v(void** __temp479v, unsigned long long* __temp480v, unsigned long long* __temp481v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp479v=unsafe_ptr;
  *__temp480v=unsafe_size;
  *__temp481v=align;
}

static inline void false__temp7v(int* __temp482v) {
  int value=0;
  __temp_return:
  *__temp482v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp483v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp483v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp484v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp484v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp485v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp485v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp486v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp486v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from__value, unsigned long long to__value) {
  memset(((char*)allocated)+from__value,0,to__value);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp487v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp487v=z;
}

static inline int alloc__temp382v(unsigned long long bytes__value, void** __temp488v) {
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
  *__temp488v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp391v(void** __temp489v, unsigned long long* __temp490v, unsigned long long buffer__align, unsigned long long size__value, void** __temp491v, unsigned long long* __temp492v, unsigned long long* __temp493v) {
  void* buffer__unsafe_ptr=*__temp489v;
  unsigned long long buffer__unsafe_size=*__temp490v;
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
  printf("%s", "\033[31mat\033[0m std/array.s line 16 column 25\n   unhandled error from alloc(nat bytes.value) -> (any ptr allocated)\n");
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
  *__temp489v=buffer__unsafe_ptr;
  *__temp490v=buffer__unsafe_size;
  *__temp491v=buffer__unsafe_ptr;
  *__temp492v=buffer__unsafe_size;
  *__temp493v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp494v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp494v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp495v) {
  __temp_return:
  *__temp495v=to;
}

static inline void add__temp387v(void* allocated, unsigned long long offset__value, void** __temp496v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset__value;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp496v=__temp388v__to;
}

static inline int get__temp420v(void** __temp497v, unsigned long long* __temp498v, unsigned long long buffer__align, unsigned long long i__value, void** __temp499v) {
  void* buffer__unsafe_ptr=*__temp497v;
  unsigned long long buffer__unsafe_size=*__temp498v;
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
  *__temp497v=buffer__unsafe_ptr;
  *__temp498v=buffer__unsafe_size;
  *__temp499v=__temp423v____temp388v__to;
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

static inline void free__temp385v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline int realloc__temp383v(void* allocated, unsigned long long bytes__value, void** __temp500v) {
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
  *__temp500v=__temp384v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp501v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp501v=z;
}

static inline int resize__temp402v(void** __temp502v, unsigned long long* __temp503v, unsigned long long buffer__align, unsigned long long size__value, void** __temp504v, unsigned long long* __temp505v, unsigned long long* __temp506v) {
  void* buffer__unsafe_ptr=*__temp502v;
  unsigned long long buffer__unsafe_size=*__temp503v;
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
  *__temp502v=buffer__unsafe_ptr;
  *__temp503v=buffer__unsafe_size;
  *__temp504v=buffer__unsafe_ptr;
  *__temp505v=buffer__unsafe_size;
  *__temp506v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp507v) {
  int __temp327v____temp85v____temp26v__value=0;
  int __temp328v=0;
  int __temp329v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp83v(x,y,&__temp327v____temp85v____temp26v__value);
  lt__temp180v(x,y,&__temp329v__z);
  if(__temp329v__z){
  printf("%s", "\033[31mfail\033[0m id subtraction would yield a negative\n\033[31mat\033[0m std/core/numbers.s line 67 column 14\n");
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp507v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int last__temp413v(void** __temp508v, unsigned long long* __temp509v, unsigned long long buffer__align, void** __temp510v) {
  void* buffer__unsafe_ptr=*__temp508v;
  unsigned long long buffer__unsafe_size=*__temp509v;
  unsigned long long __temp414v=0;
  int __temp415v__z=0;
  unsigned long long __temp416v=0;
  unsigned long long __temp417v__z=0;
  unsigned long long __temp418v__z=0;
  void* __temp419v____temp388v__to=0;
  int __temp_errcode=0;
  __temp414v=0;
  eq__temp276v(__temp414v,buffer__unsafe_size,&__temp415v__z);
  if(__temp415v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 37 column 14\n");
  __temp_errcode=7;
  goto __temp_failure;
  }
  __temp416v=1;
  __temp_errcode=sub__temp326v(buffer__unsafe_size,__temp416v,&__temp417v__z);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 38 column 62\n   unhandled error from sub(nat x, nat y) -> (nat z)\n");
  goto __temp_failure;
  }
  mul__temp132v(__temp417v__z,buffer__align,&__temp418v__z);
  add__temp387v(buffer__unsafe_ptr,__temp418v__z,&__temp419v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp508v=buffer__unsafe_ptr;
  *__temp509v=buffer__unsafe_size;
  *__temp510v=__temp419v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void Field__temp_buffer__buffer__temp458v(void** __temp511v, unsigned long long* __temp512v, unsigned long long* __temp513v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=32;
  __temp_return:
  *__temp511v=unsafe_ptr;
  *__temp512v=unsafe_size;
  *__temp513v=align;
}

static inline void print__temp338v(double value, const char* endl) {
  int __temp339v=0;
  printf("%.6f%s",value,endl);
}

static inline int print__temp427v(void* f) {
  double __temp428v__a__x__z=0;
  double __temp428v__a__y__z=0;
  double __temp428v__b__x__z=0;
  double __temp428v__b__y__z=0;
  const char* __temp429v=0;
  double __temp431v__a__x__z=0;
  double __temp431v__a__y__z=0;
  double __temp431v__b__x__z=0;
  double __temp431v__b__y__z=0;
  const char* __temp432v=0;
  double __temp434v__a__x__z=0;
  double __temp434v__a__y__z=0;
  double __temp434v__b__x__z=0;
  double __temp434v__b__y__z=0;
  const char* __temp435v=0;
  double __temp437v__a__x__z=0;
  double __temp437v__a__y__z=0;
  double __temp437v__b__x__z=0;
  double __temp437v__b__y__z=0;
  int __temp_errcode=0;
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp428v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp428v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp428v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp428v__b__y__z,(char*)f+24,8);
  __temp429v=",";
  print__temp338v(__temp428v__a__x__z,__temp429v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp431v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp431v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp431v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp431v__b__y__z,(char*)f+24,8);
  __temp432v=",";
  print__temp338v(__temp431v__a__y__z,__temp432v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp434v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp434v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp434v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp434v__b__y__z,(char*)f+24,8);
  __temp435v=",";
  print__temp338v(__temp434v__b__x__z,__temp435v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp437v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp437v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp437v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp437v__b__y__z,(char*)f+24,8);
  print__temp335v(__temp437v__b__y__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int main__temp439v() {
  void* __temp442v__unsafe_ptr=0;
  unsigned long long __temp442v__unsafe_size=0;
  unsigned long long __temp442v__align=0;
  unsigned long long __temp443v=0;
  void* __temp444v__buffer__unsafe_ptr=0;
  unsigned long long __temp444v__buffer__unsafe_size=0;
  unsigned long long __temp444v__buffer__align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__align=0;
  double __temp445v=0;
  unsigned long long __temp446v=0;
  void* __temp447v____temp423v____temp388v__to=0;
  unsigned long long __temp448v=0;
  void* __temp449v____temp423v____temp388v__to=0;
  double __temp450v__z=0;
  unsigned long long __temp452v=0;
  void* __temp453v____temp423v____temp388v__to=0;
  void* f0=0;
  double __temp454v__z=0;
  unsigned long long __temp455v=0;
  void* __temp456v__buffer__unsafe_ptr=0;
  unsigned long long __temp456v__buffer__unsafe_size=0;
  unsigned long long __temp456v__buffer__align=0;
  void* __temp457v____temp419v____temp388v__to=0;
  void* __temp460v__unsafe_ptr=0;
  unsigned long long __temp460v__unsafe_size=0;
  unsigned long long __temp460v__align=0;
  unsigned long long __temp461v=0;
  void* __temp462v__buffer__unsafe_ptr=0;
  unsigned long long __temp462v__buffer__unsafe_size=0;
  unsigned long long __temp462v__buffer__align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__align=0;
  double __temp463v=0;
  double __temp464v=0;
  double __temp465v=0;
  double __temp466v=0;
  unsigned long long __temp467v=0;
  void* __temp468v____temp423v____temp388v__to=0;
  unsigned long long __temp469v=0;
  void* __temp470v____temp423v____temp388v__to=0;
  double __temp472v=0;
  void* __temp473v__unsafe_ptr=0;
  unsigned long long __temp473v__unsafe_size=0;
  unsigned long long __temp473v__align=0;
  unsigned long long __temp474v=0;
  void* __temp475v__buffer__unsafe_ptr=0;
  unsigned long long __temp475v__buffer__unsafe_size=0;
  unsigned long long __temp475v__buffer__align=0;
  void* __temp476v____temp419v____temp388v__to=0;
  void* n=0;
  double __temp477v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp440v(&__temp442v__unsafe_ptr,&__temp442v__unsafe_size,&__temp442v__align);
  __temp443v=1;
  __temp_errcode=alloc__temp391v(&__temp442v__unsafe_ptr,&__temp442v__unsafe_size,__temp442v__align,__temp443v,&__temp444v__buffer__unsafe_ptr,&__temp444v__buffer__unsafe_size,&__temp444v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 16\n   unhandled error from alloc(any[], nat size.value) -> (any[])\n");
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp444v__buffer__unsafe_ptr;
  f__unsafe_size=__temp444v__buffer__unsafe_size;
  f__align=__temp444v__buffer__align;
  __temp445v=1.0;
  __temp446v=0;
  __temp_errcode=get__temp420v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp446v,&__temp447v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 11\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp447v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 8\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp447v____temp423v____temp388v__to,&__temp445v,8);
  __temp448v=0;
  __temp_errcode=get__temp420v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp448v,&__temp449v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 18 column 12\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp449v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp450v__z,(char*)__temp449v____temp423v____temp388v__to,8);
  print__temp335v(__temp450v__z);
  __temp452v=0;
  __temp_errcode=get__temp420v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp452v,&__temp453v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 19 column 11\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  f0=__temp453v____temp423v____temp388v__to;
  if(!f0){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 20 column 7\n");
  goto __temp_failure;
  }
  memcpy(&__temp454v__z,(char*)f0,8);
  __temp455v=2;
  __temp_errcode=resize__temp402v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp455v,&__temp456v__buffer__unsafe_ptr,&__temp456v__buffer__unsafe_size,&__temp456v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 15\n   unhandled error from resize(any[], nat size.value) -> (any[])\n");
  goto __temp_failure;
  }
  __temp_errcode=last__temp413v(&__temp456v__buffer__unsafe_ptr,&__temp456v__buffer__unsafe_size,__temp456v__buffer__align,&__temp457v____temp419v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 10\n   unhandled error from last(any[]) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp457v____temp419v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 20 column 8\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp457v____temp419v____temp388v__to,&__temp454v__z,8);
  Field__temp_buffer__buffer__temp458v(&__temp460v__unsafe_ptr,&__temp460v__unsafe_size,&__temp460v__align);
  __temp461v=1;
  __temp_errcode=alloc__temp391v(&__temp460v__unsafe_ptr,&__temp460v__unsafe_size,__temp460v__align,__temp461v,&__temp462v__buffer__unsafe_ptr,&__temp462v__buffer__unsafe_size,&__temp462v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 23 column 16\n   unhandled error from alloc(any[], nat size.value) -> (any[])\n");
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp462v__buffer__unsafe_ptr;
  p__unsafe_size=__temp462v__buffer__unsafe_size;
  p__align=__temp462v__buffer__align;
  __temp463v=1.0;
  __temp464v=2.0;
  __temp465v=3.0;
  __temp466v=4.0;
  __temp467v=0;
  __temp_errcode=get__temp420v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp467v,&__temp468v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 24 column 25\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp468v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp423v____temp388v__to,&__temp463v,8);
  if(!__temp468v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp423v____temp388v__to+8,&__temp464v,8);
  if(!__temp468v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp423v____temp388v__to+16,&__temp465v,8);
  if(!__temp468v____temp423v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp423v____temp388v__to+24,&__temp466v,8);
  __temp469v=0;
  __temp_errcode=get__temp420v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp469v,&__temp470v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 25 column 12\n   unhandled error from get(any[], nat i.value) -> (any ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=print__temp427v(__temp470v____temp423v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 25 column 5\n   unhandled error from print(Field ptr f) -> ()\n");
  goto __temp_failure;
  }
  __temp472v=1.0;
  float__temp_buffer__buffer__temp440v(&__temp473v__unsafe_ptr,&__temp473v__unsafe_size,&__temp473v__align);
  __temp474v=1;
  __temp_errcode=alloc__temp391v(&__temp473v__unsafe_ptr,&__temp473v__unsafe_size,__temp473v__align,__temp474v,&__temp475v__buffer__unsafe_ptr,&__temp475v__buffer__unsafe_size,&__temp475v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 27 column 28\n   unhandled error from alloc(any[], nat size.value) -> (any[])\n");
  goto __temp_failure;
  }
  __temp_errcode=last__temp413v(&__temp475v__buffer__unsafe_ptr,&__temp475v__buffer__unsafe_size,__temp475v__buffer__align,&__temp476v____temp419v____temp388v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 27 column 16\n   unhandled error from last(any[]) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp476v____temp419v____temp388v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 27 column 13\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp476v____temp419v____temp388v__to,&__temp472v,8);
  n=__temp476v____temp419v____temp388v__to;
  if(!n){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 28 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp477v__z,(char*)n,8);
  print__temp335v(__temp477v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp439v();return 0;}