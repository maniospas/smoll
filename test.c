#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp455v(void** __temp494v, unsigned long long* __temp495v, unsigned long long* __temp496v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp494v=unsafe_ptr;
  *__temp495v=unsafe_size;
  *__temp496v=align;
}

static inline void false__temp7v(int* __temp497v) {
  int value=0;
  __temp_return:
  *__temp497v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp498v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp498v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp499v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp499v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp500v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp500v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp501v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp501v=z;
}

static inline void zero__temp371v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp502v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp502v=z;
}

static inline int alloc__temp367v(unsigned long long bytes, void** __temp503v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 6 column 14\n");
  __temp_errcode=2;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp503v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp376v(void** __temp504v, unsigned long long* __temp505v, unsigned long long buffer__align, unsigned long long size, void** __temp506v, unsigned long long* __temp507v, unsigned long long* __temp508v) {
  void* buffer__unsafe_ptr=*__temp504v;
  unsigned long long buffer__unsafe_size=*__temp505v;
  int __temp377v__z=0;
  unsigned long long __temp378v=0;
  unsigned long long __temp379v__z=0;
  unsigned long long __temp381v=0;
  int __temp382v__z=0;
  unsigned long long __temp383v__z=0;
  unsigned long long bytes=0;
  void* __temp384v__allocated=0;
  unsigned long long __temp385v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp377v__z);
  if(__temp377v__z){
  __temp378v=0;
  mul__temp132v(buffer__align,size,&__temp379v__z);
  zero__temp371v(buffer__unsafe_ptr,__temp378v,__temp379v__z);
  goto __temp_return;
  }
  __temp381v=0;
  neq__temp300v(buffer__unsafe_size,__temp381v,&__temp382v__z);
  if(__temp382v__z){
  printf("%s", "\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/array.s line 13 column 14\n");
  __temp_errcode=4;
  goto __temp_failure;
  }
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp383v__z);
  bytes=__temp383v__z;
  __temp_errcode=alloc__temp367v(bytes,&__temp384v__allocated);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 16 column 25\n   unhandled error from alloc(id bytes) -> (any ptr allocated)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp384v__allocated;
  __temp385v=0;
  zero__temp371v(buffer__unsafe_ptr,__temp385v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp504v=buffer__unsafe_ptr;
  *__temp505v=buffer__unsafe_size;
  *__temp506v=buffer__unsafe_ptr;
  *__temp507v=buffer__unsafe_size;
  *__temp508v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp509v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp509v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp510v) {
  __temp_return:
  *__temp510v=to;
}

static inline void add__temp372v(void* allocated, unsigned long long offset, void** __temp511v) {
  void* element=0;
  void* __temp373v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp511v=__temp373v__to;
}

static inline int get__temp405v(void** __temp512v, unsigned long long* __temp513v, unsigned long long buffer__align, unsigned long long i, void** __temp514v) {
  void* buffer__unsafe_ptr=*__temp512v;
  unsigned long long buffer__unsafe_size=*__temp513v;
  int __temp406v__z=0;
  unsigned long long __temp407v__z=0;
  void* __temp408v____temp373v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp406v__z);
  if(__temp406v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 42 column 14\n");
  __temp_errcode=5;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp407v__z);
  add__temp372v(buffer__unsafe_ptr,__temp407v__z,&__temp408v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp512v=buffer__unsafe_ptr;
  *__temp513v=buffer__unsafe_size;
  *__temp514v=__temp408v____temp373v__to;
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

static inline void free__temp370v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline int realloc__temp368v(void* allocated, unsigned long long bytes, void** __temp515v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp369v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated?realloc(allocated,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  printf("%s", "\033[31mfail\033[0m reallocation failed\n\033[31mat\033[0m std/unsafe.s line 12 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated,&__temp369v__to);
  goto __temp_return;
  __temp_return:
  *__temp515v=__temp369v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp516v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp516v=z;
}

static inline int resize__temp387v(void** __temp517v, unsigned long long* __temp518v, unsigned long long buffer__align, unsigned long long size, void** __temp519v, unsigned long long* __temp520v, unsigned long long* __temp521v) {
  void* buffer__unsafe_ptr=*__temp517v;
  unsigned long long buffer__unsafe_size=*__temp518v;
  int __temp388v__z=0;
  unsigned long long __temp389v=0;
  int __temp390v__z=0;
  unsigned long long __temp392v=0;
  unsigned long long __temp393v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp394v__z=0;
  unsigned long long bytes=0;
  void* __temp395v____temp369v__to=0;
  int __temp396v__z=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp388v__z);
  if(__temp388v__z){
  goto __temp_return;
  }
  __temp389v=0;
  eq__temp276v(size,__temp389v,&__temp390v__z);
  if(__temp390v__z){
  free__temp370v(buffer__unsafe_ptr);
  __temp392v=0;
  buffer__unsafe_size=__temp392v;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__align,&__temp393v__z);
  prev_bytes=__temp393v__z;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp394v__z);
  bytes=__temp394v__z;
  __temp_errcode=realloc__temp368v(buffer__unsafe_ptr,bytes,&__temp395v____temp369v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 30 column 25\n   unhandled error from realloc(any ptr allocated, id bytes) -> (any ptr)\n");
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp395v____temp369v__to;
  lt__temp180v(prev_bytes,bytes,&__temp396v__z);
  if(__temp396v__z){
  zero__temp371v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp517v=buffer__unsafe_ptr;
  *__temp518v=buffer__unsafe_size;
  *__temp519v=buffer__unsafe_ptr;
  *__temp520v=buffer__unsafe_size;
  *__temp521v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp522v) {
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
  *__temp522v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int last__temp398v(void** __temp523v, unsigned long long* __temp524v, unsigned long long buffer__align, void** __temp525v) {
  void* buffer__unsafe_ptr=*__temp523v;
  unsigned long long buffer__unsafe_size=*__temp524v;
  unsigned long long __temp399v=0;
  int __temp400v__z=0;
  unsigned long long __temp401v=0;
  unsigned long long __temp402v__z=0;
  unsigned long long __temp403v__z=0;
  void* __temp404v____temp373v__to=0;
  int __temp_errcode=0;
  __temp399v=0;
  eq__temp276v(__temp399v,buffer__unsafe_size,&__temp400v__z);
  if(__temp400v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 37 column 14\n");
  __temp_errcode=5;
  goto __temp_failure;
  }
  __temp401v=1;
  __temp_errcode=sub__temp326v(buffer__unsafe_size,__temp401v,&__temp402v__z);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 38 column 62\n   unhandled error from sub(id x, id y) -> (id z)\n");
  goto __temp_failure;
  }
  mul__temp132v(__temp402v__z,buffer__align,&__temp403v__z);
  add__temp372v(buffer__unsafe_ptr,__temp403v__z,&__temp404v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp523v=buffer__unsafe_ptr;
  *__temp524v=buffer__unsafe_size;
  *__temp525v=__temp404v____temp373v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void Field__temp_buffer__buffer__temp473v(void** __temp526v, unsigned long long* __temp527v, unsigned long long* __temp528v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=32;
  __temp_return:
  *__temp526v=unsafe_ptr;
  *__temp527v=unsafe_size;
  *__temp528v=align;
}

static inline void print__temp335v(double value, const char* endl) {
  int __temp336v=0;
  printf("%.6f%s",value,endl);
}

static inline int print__temp442v(void* f) {
  double __temp443v__a__x__z=0;
  double __temp443v__a__y__z=0;
  double __temp443v__b__x__z=0;
  double __temp443v__b__y__z=0;
  const char* __temp444v=0;
  double __temp446v__a__x__z=0;
  double __temp446v__a__y__z=0;
  double __temp446v__b__x__z=0;
  double __temp446v__b__y__z=0;
  const char* __temp447v=0;
  double __temp449v__a__x__z=0;
  double __temp449v__a__y__z=0;
  double __temp449v__b__x__z=0;
  double __temp449v__b__y__z=0;
  const char* __temp450v=0;
  double __temp452v__a__x__z=0;
  double __temp452v__a__y__z=0;
  double __temp452v__b__x__z=0;
  double __temp452v__b__y__z=0;
  int __temp_errcode=0;
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp443v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp443v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp443v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp443v__b__y__z,(char*)f+24,8);
  __temp444v=",";
  print__temp335v(__temp443v__a__x__z,__temp444v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp446v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp446v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp446v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp446v__b__y__z,(char*)f+24,8);
  __temp447v=",";
  print__temp335v(__temp446v__a__y__z,__temp447v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp449v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp449v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp449v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp449v__b__y__z,(char*)f+24,8);
  __temp450v=",";
  print__temp335v(__temp449v__b__x__z,__temp450v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp452v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp452v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp452v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp452v__b__y__z,(char*)f+24,8);
  print__temp337v(__temp452v__b__y__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int main__temp454v() {
  void* __temp457v__unsafe_ptr=0;
  unsigned long long __temp457v__unsafe_size=0;
  unsigned long long __temp457v__align=0;
  unsigned long long __temp458v=0;
  void* __temp459v__buffer__unsafe_ptr=0;
  unsigned long long __temp459v__buffer__unsafe_size=0;
  unsigned long long __temp459v__buffer__align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__align=0;
  double __temp460v=0;
  unsigned long long __temp461v=0;
  void* __temp462v____temp408v____temp373v__to=0;
  unsigned long long __temp463v=0;
  void* __temp464v____temp408v____temp373v__to=0;
  double __temp465v__z=0;
  unsigned long long __temp467v=0;
  void* __temp468v____temp408v____temp373v__to=0;
  void* f0=0;
  double __temp469v__z=0;
  unsigned long long __temp470v=0;
  void* __temp471v__buffer__unsafe_ptr=0;
  unsigned long long __temp471v__buffer__unsafe_size=0;
  unsigned long long __temp471v__buffer__align=0;
  void* __temp472v____temp404v____temp373v__to=0;
  void* __temp475v__unsafe_ptr=0;
  unsigned long long __temp475v__unsafe_size=0;
  unsigned long long __temp475v__align=0;
  unsigned long long __temp476v=0;
  void* __temp477v__buffer__unsafe_ptr=0;
  unsigned long long __temp477v__buffer__unsafe_size=0;
  unsigned long long __temp477v__buffer__align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__align=0;
  double __temp478v=0;
  double __temp479v=0;
  double __temp480v=0;
  double __temp481v=0;
  unsigned long long __temp482v=0;
  void* __temp483v____temp408v____temp373v__to=0;
  unsigned long long __temp484v=0;
  void* __temp485v____temp408v____temp373v__to=0;
  double __temp487v=0;
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__align=0;
  unsigned long long __temp489v=0;
  void* __temp490v__buffer__unsafe_ptr=0;
  unsigned long long __temp490v__buffer__unsafe_size=0;
  unsigned long long __temp490v__buffer__align=0;
  void* __temp491v____temp404v____temp373v__to=0;
  void* n=0;
  double __temp492v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp455v(&__temp457v__unsafe_ptr,&__temp457v__unsafe_size,&__temp457v__align);
  __temp458v=1;
  __temp_errcode=alloc__temp376v(&__temp457v__unsafe_ptr,&__temp457v__unsafe_size,__temp457v__align,__temp458v,&__temp459v__buffer__unsafe_ptr,&__temp459v__buffer__unsafe_size,&__temp459v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp459v__buffer__unsafe_ptr;
  f__unsafe_size=__temp459v__buffer__unsafe_size;
  f__align=__temp459v__buffer__align;
  __temp460v=1.0;
  __temp461v=0;
  __temp_errcode=get__temp405v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp461v,&__temp462v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 11\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp462v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 8\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp462v____temp408v____temp373v__to,&__temp460v,8);
  __temp463v=0;
  __temp_errcode=get__temp405v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp463v,&__temp464v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 18 column 12\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp464v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp465v__z,(char*)__temp464v____temp408v____temp373v__to,8);
  print__temp337v(__temp465v__z);
  __temp467v=0;
  __temp_errcode=get__temp405v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp467v,&__temp468v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 19 column 11\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  f0=__temp468v____temp408v____temp373v__to;
  if(!f0){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 20 column 7\n");
  goto __temp_failure;
  }
  memcpy(&__temp469v__z,(char*)f0,8);
  __temp470v=2;
  __temp_errcode=resize__temp387v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp470v,&__temp471v__buffer__unsafe_ptr,&__temp471v__buffer__unsafe_size,&__temp471v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 15\n   unhandled error from resize(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp_errcode=last__temp398v(&__temp471v__buffer__unsafe_ptr,&__temp471v__buffer__unsafe_size,__temp471v__buffer__align,&__temp472v____temp404v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 10\n   unhandled error from last(any[]) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp472v____temp404v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 20 column 8\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp472v____temp404v____temp373v__to,&__temp469v__z,8);
  Field__temp_buffer__buffer__temp473v(&__temp475v__unsafe_ptr,&__temp475v__unsafe_size,&__temp475v__align);
  __temp476v=1;
  __temp_errcode=alloc__temp376v(&__temp475v__unsafe_ptr,&__temp475v__unsafe_size,__temp475v__align,__temp476v,&__temp477v__buffer__unsafe_ptr,&__temp477v__buffer__unsafe_size,&__temp477v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 23 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp477v__buffer__unsafe_ptr;
  p__unsafe_size=__temp477v__buffer__unsafe_size;
  p__align=__temp477v__buffer__align;
  __temp478v=1.0;
  __temp479v=2.0;
  __temp480v=3.0;
  __temp481v=4.0;
  __temp482v=0;
  __temp_errcode=get__temp405v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp482v,&__temp483v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 24 column 25\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp483v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp483v____temp408v____temp373v__to,&__temp478v,8);
  if(!__temp483v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp483v____temp408v____temp373v__to+8,&__temp479v,8);
  if(!__temp483v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp483v____temp408v____temp373v__to+16,&__temp480v,8);
  if(!__temp483v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp483v____temp408v____temp373v__to+24,&__temp481v,8);
  __temp484v=0;
  __temp_errcode=get__temp405v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp484v,&__temp485v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 25 column 12\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=print__temp442v(__temp485v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 25 column 5\n   unhandled error from print(Field ptr f) -> ()\n");
  goto __temp_failure;
  }
  __temp487v=1.0;
  float__temp_buffer__buffer__temp455v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__align);
  __temp489v=1;
  __temp_errcode=alloc__temp376v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,__temp488v__align,__temp489v,&__temp490v__buffer__unsafe_ptr,&__temp490v__buffer__unsafe_size,&__temp490v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 27 column 28\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp_errcode=last__temp398v(&__temp490v__buffer__unsafe_ptr,&__temp490v__buffer__unsafe_size,__temp490v__buffer__align,&__temp491v____temp404v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 27 column 16\n   unhandled error from last(any[]) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp491v____temp404v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 27 column 13\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp491v____temp404v____temp373v__to,&__temp487v,8);
  n=__temp491v____temp404v____temp373v__to;
  if(!n){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 28 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp492v__z,(char*)n,8);
  print__temp337v(__temp492v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp454v();return 0;}