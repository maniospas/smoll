#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp451v(void** __temp482v, unsigned long long* __temp483v, unsigned long long* __temp484v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp482v=unsafe_ptr;
  *__temp483v=unsafe_size;
  *__temp484v=align;
}

static inline void false__temp7v(int* __temp485v) {
  int value=0;
  __temp_return:
  *__temp485v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp486v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp486v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp487v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp487v=__temp85v____temp26v__value;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp488v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp488v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp489v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp489v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp490v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp490v=z;
}

static inline void alloc__temp367v(unsigned long long bytes, void** __temp491v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp491v=allocated;
}

static inline void zero__temp371v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline int alloc__temp376v(void** __temp492v, unsigned long long* __temp493v, unsigned long long buffer__align, unsigned long long size, void** __temp494v, unsigned long long* __temp495v, unsigned long long* __temp496v) {
  void* buffer__unsafe_ptr=*__temp492v;
  unsigned long long buffer__unsafe_size=*__temp493v;
  unsigned long long __temp377v=0;
  int __temp378v__z=0;
  unsigned long long __temp379v=0;
  int __temp380v__z=0;
  unsigned long long __temp381v__z=0;
  unsigned long long bytes=0;
  void* __temp382v__allocated=0;
  unsigned long long __temp383v=0;
  int __temp_errcode=0;
  __temp377v=0;
  neq__temp300v(buffer__unsafe_size,__temp377v,&__temp378v__z);
  if(__temp378v__z){
  printf("%s", "\033[31mfail\033[0m call resize for non-empty buffers; alloc promises no data reallocation\n\033[31mat\033[0m std/array.s line 10 column 14\n");
  __temp_errcode=2;
  goto __temp_failure;
  }
  __temp379v=0;
  eq__temp276v(size,__temp379v,&__temp380v__z);
  if(__temp380v__z){
  goto __temp_return;
  }
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp381v__z);
  bytes=__temp381v__z;
  alloc__temp367v(bytes,&__temp382v__allocated);
  buffer__unsafe_ptr=__temp382v__allocated;
  __temp383v=0;
  zero__temp371v(buffer__unsafe_ptr,__temp383v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp492v=buffer__unsafe_ptr;
  *__temp493v=buffer__unsafe_size;
  *__temp494v=buffer__unsafe_ptr;
  *__temp495v=buffer__unsafe_size;
  *__temp496v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp497v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp497v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp498v) {
  __temp_return:
  *__temp498v=to;
}

static inline void add__temp372v(void* allocated, unsigned long long offset, void** __temp499v) {
  void* element=0;
  void* __temp373v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp499v=__temp373v__to;
}

static inline int get__temp396v(void** __temp500v, unsigned long long* __temp501v, unsigned long long buffer__align, unsigned long long i, void** __temp502v) {
  void* buffer__unsafe_ptr=*__temp500v;
  unsigned long long buffer__unsafe_size=*__temp501v;
  int __temp397v__z=0;
  unsigned long long __temp398v__z=0;
  void* __temp399v____temp373v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp397v__z);
  if(__temp397v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 36 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp398v__z);
  add__temp372v(buffer__unsafe_ptr,__temp398v__z,&__temp399v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp500v=buffer__unsafe_ptr;
  *__temp501v=buffer__unsafe_size;
  *__temp502v=__temp399v____temp373v__to;
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

static inline void Field__temp_buffer__buffer__temp463v(void** __temp503v, unsigned long long* __temp504v, unsigned long long* __temp505v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=32;
  __temp_return:
  *__temp503v=unsafe_ptr;
  *__temp504v=unsafe_size;
  *__temp505v=align;
}

static inline void print__temp338v(double value, const char* endl) {
  int __temp339v=0;
  printf("%.6f%s",value,endl);
}

static inline int print__temp438v(void* f) {
  double __temp439v__a__x__z=0;
  double __temp439v__a__y__z=0;
  double __temp439v__b__x__z=0;
  double __temp439v__b__y__z=0;
  const char* __temp440v=0;
  double __temp442v__a__x__z=0;
  double __temp442v__a__y__z=0;
  double __temp442v__b__x__z=0;
  double __temp442v__b__y__z=0;
  const char* __temp443v=0;
  double __temp445v__a__x__z=0;
  double __temp445v__a__y__z=0;
  double __temp445v__b__x__z=0;
  double __temp445v__b__y__z=0;
  const char* __temp446v=0;
  double __temp448v__a__x__z=0;
  double __temp448v__a__y__z=0;
  double __temp448v__b__x__z=0;
  double __temp448v__b__y__z=0;
  int __temp_errcode=0;
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp439v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp439v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp439v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp439v__b__y__z,(char*)f+24,8);
  __temp440v=",";
  print__temp338v(__temp439v__a__x__z,__temp440v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp442v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp442v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp442v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp442v__b__y__z,(char*)f+24,8);
  __temp443v=",";
  print__temp338v(__temp442v__a__y__z,__temp443v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__b__y__z,(char*)f+24,8);
  __temp446v=",";
  print__temp338v(__temp445v__b__x__z,__temp446v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp448v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp448v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp448v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp448v__b__y__z,(char*)f+24,8);
  print__temp335v(__temp448v__b__y__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int new__temp401v(void** __temp506v, unsigned long long* __temp507v, unsigned long long buffer__align, void** __temp508v) {
  void* buffer__unsafe_ptr=*__temp506v;
  unsigned long long buffer__unsafe_size=*__temp507v;
  unsigned long long __temp402v=0;
  void* __temp403v__buffer__unsafe_ptr=0;
  unsigned long long __temp403v__buffer__unsafe_size=0;
  unsigned long long __temp403v__buffer__align=0;
  unsigned long long __temp404v=0;
  void* __temp405v____temp399v____temp373v__to=0;
  int __temp_errcode=0;
  __temp402v=1;
  __temp_errcode=alloc__temp376v(&buffer__unsafe_ptr,&buffer__unsafe_size,buffer__align,__temp402v,&__temp403v__buffer__unsafe_ptr,&__temp403v__buffer__unsafe_size,&__temp403v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 43 column 18\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp404v=0;
  __temp_errcode=get__temp396v(&__temp403v__buffer__unsafe_ptr,&__temp403v__buffer__unsafe_size,__temp403v__buffer__align,__temp404v,&__temp405v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 43 column 28\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp506v=buffer__unsafe_ptr;
  *__temp507v=buffer__unsafe_size;
  *__temp508v=__temp405v____temp399v____temp373v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int main__temp450v() {
  void* __temp453v__unsafe_ptr=0;
  unsigned long long __temp453v__unsafe_size=0;
  unsigned long long __temp453v__align=0;
  unsigned long long __temp454v=0;
  void* __temp455v__buffer__unsafe_ptr=0;
  unsigned long long __temp455v__buffer__unsafe_size=0;
  unsigned long long __temp455v__buffer__align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__align=0;
  unsigned long long __temp456v=0;
  void* __temp457v____temp399v____temp373v__to=0;
  double __temp458v=0;
  unsigned long long __temp459v=0;
  void* __temp460v____temp399v____temp373v__to=0;
  double __temp461v__z=0;
  void* __temp465v__unsafe_ptr=0;
  unsigned long long __temp465v__unsafe_size=0;
  unsigned long long __temp465v__align=0;
  unsigned long long __temp466v=0;
  void* __temp467v__buffer__unsafe_ptr=0;
  unsigned long long __temp467v__buffer__unsafe_size=0;
  unsigned long long __temp467v__buffer__align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__align=0;
  unsigned long long __temp468v=0;
  void* __temp469v____temp399v____temp373v__to=0;
  double __temp470v=0;
  double __temp471v=0;
  double __temp472v=0;
  double __temp473v=0;
  unsigned long long __temp474v=0;
  void* __temp475v____temp399v____temp373v__to=0;
  void* __temp477v__unsafe_ptr=0;
  unsigned long long __temp477v__unsafe_size=0;
  unsigned long long __temp477v__align=0;
  void* __temp478v____temp405v____temp399v____temp373v__to=0;
  double __temp479v=0;
  void* n=0;
  double __temp480v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp451v(&__temp453v__unsafe_ptr,&__temp453v__unsafe_size,&__temp453v__align);
  __temp454v=1;
  __temp_errcode=alloc__temp376v(&__temp453v__unsafe_ptr,&__temp453v__unsafe_size,__temp453v__align,__temp454v,&__temp455v__buffer__unsafe_ptr,&__temp455v__buffer__unsafe_size,&__temp455v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp455v__buffer__unsafe_ptr;
  f__unsafe_size=__temp455v__buffer__unsafe_size;
  f__align=__temp455v__buffer__align;
  __temp456v=0;
  __temp_errcode=get__temp396v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp456v,&__temp457v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp458v=1.0;
  if(!__temp457v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp457v____temp399v____temp373v__to,&__temp458v,8);
  __temp459v=0;
  __temp_errcode=get__temp396v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp459v,&__temp460v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 18 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp460v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp461v__z,(char*)__temp460v____temp399v____temp373v__to,8);
  print__temp335v(__temp461v__z);
  Field__temp_buffer__buffer__temp463v(&__temp465v__unsafe_ptr,&__temp465v__unsafe_size,&__temp465v__align);
  __temp466v=1;
  __temp_errcode=alloc__temp376v(&__temp465v__unsafe_ptr,&__temp465v__unsafe_size,__temp465v__align,__temp466v,&__temp467v__buffer__unsafe_ptr,&__temp467v__buffer__unsafe_size,&__temp467v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp467v__buffer__unsafe_ptr;
  p__unsafe_size=__temp467v__buffer__unsafe_size;
  p__align=__temp467v__buffer__align;
  __temp468v=0;
  __temp_errcode=get__temp396v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp468v,&__temp469v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 21 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp470v=1.0;
  __temp471v=2.0;
  __temp472v=3.0;
  __temp473v=4.0;
  if(!__temp469v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp469v____temp399v____temp373v__to,&__temp470v,8);
  if(!__temp469v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp469v____temp399v____temp373v__to+8,&__temp471v,8);
  if(!__temp469v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp469v____temp399v____temp373v__to+16,&__temp472v,8);
  if(!__temp469v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp469v____temp399v____temp373v__to+24,&__temp473v,8);
  __temp474v=0;
  __temp_errcode=get__temp396v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp474v,&__temp475v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 22 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=print__temp438v(__temp475v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 22 column 5\n   unhandled error from print(ptr f) -> ()\n");
  goto __temp_failure;
  }
  float__temp_buffer__buffer__temp451v(&__temp477v__unsafe_ptr,&__temp477v__unsafe_size,&__temp477v__align);
  __temp_errcode=new__temp401v(&__temp477v__unsafe_ptr,&__temp477v__unsafe_size,__temp477v__align,&__temp478v____temp405v____temp399v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 24 column 10\n   unhandled error from new(any[]) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp479v=1.0;
  if(!__temp478v____temp405v____temp399v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp478v____temp405v____temp399v____temp373v__to,&__temp479v,8);
  n=__temp478v____temp405v____temp399v____temp373v__to;
  if(!n){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 25 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp480v__z,(char*)n,8);
  print__temp335v(__temp480v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp450v();return 0;}