#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp450v(void** __temp481v, unsigned long long* __temp482v, unsigned long long* __temp483v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp481v=unsafe_ptr;
  *__temp482v=unsafe_size;
  *__temp483v=align;
}

static inline void false__temp7v(int* __temp484v) {
  int value=0;
  __temp_return:
  *__temp484v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp485v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp485v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp486v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp486v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp487v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp487v=z;
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

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp489v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp489v=z;
}

static inline void alloc__temp367v(unsigned long long bytes, void** __temp490v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp490v=allocated;
}

static inline void zero__temp371v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline int alloc__temp376v(void** __temp491v, unsigned long long* __temp492v, unsigned long long buffer__align, unsigned long long size, void** __temp493v, unsigned long long* __temp494v, unsigned long long* __temp495v) {
  void* buffer__unsafe_ptr=*__temp491v;
  unsigned long long buffer__unsafe_size=*__temp492v;
  int __temp377v__z=0;
  unsigned long long __temp378v=0;
  int __temp379v__z=0;
  unsigned long long __temp380v__z=0;
  unsigned long long bytes=0;
  void* __temp381v__allocated=0;
  unsigned long long __temp382v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp377v__z);
  if(__temp377v__z){
  goto __temp_return;
  }
  __temp378v=0;
  neq__temp300v(buffer__unsafe_size,__temp378v,&__temp379v__z);
  if(__temp379v__z){
  printf("%s", "\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/array.s line 12 column 14\n");
  __temp_errcode=2;
  goto __temp_failure;
  }
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp380v__z);
  bytes=__temp380v__z;
  alloc__temp367v(bytes,&__temp381v__allocated);
  buffer__unsafe_ptr=__temp381v__allocated;
  __temp382v=0;
  zero__temp371v(buffer__unsafe_ptr,__temp382v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp491v=buffer__unsafe_ptr;
  *__temp492v=buffer__unsafe_size;
  *__temp493v=buffer__unsafe_ptr;
  *__temp494v=buffer__unsafe_size;
  *__temp495v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp496v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp496v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp497v) {
  __temp_return:
  *__temp497v=to;
}

static inline void add__temp372v(void* allocated, unsigned long long offset, void** __temp498v) {
  void* element=0;
  void* __temp373v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp498v=__temp373v__to;
}

static inline int get__temp395v(void** __temp499v, unsigned long long* __temp500v, unsigned long long buffer__align, unsigned long long i, void** __temp501v) {
  void* buffer__unsafe_ptr=*__temp499v;
  unsigned long long buffer__unsafe_size=*__temp500v;
  int __temp396v__z=0;
  unsigned long long __temp397v__z=0;
  void* __temp398v____temp373v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp396v__z);
  if(__temp396v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 36 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp397v__z);
  add__temp372v(buffer__unsafe_ptr,__temp397v__z,&__temp398v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp499v=buffer__unsafe_ptr;
  *__temp500v=buffer__unsafe_size;
  *__temp501v=__temp398v____temp373v__to;
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

static inline void Field__temp_buffer__buffer__temp462v(void** __temp502v, unsigned long long* __temp503v, unsigned long long* __temp504v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=32;
  __temp_return:
  *__temp502v=unsafe_ptr;
  *__temp503v=unsafe_size;
  *__temp504v=align;
}

static inline void print__temp338v(double value, const char* endl) {
  int __temp339v=0;
  printf("%.6f%s",value,endl);
}

static inline int print__temp437v(void* f) {
  double __temp438v__a__x__z=0;
  double __temp438v__a__y__z=0;
  double __temp438v__b__x__z=0;
  double __temp438v__b__y__z=0;
  const char* __temp439v=0;
  double __temp441v__a__x__z=0;
  double __temp441v__a__y__z=0;
  double __temp441v__b__x__z=0;
  double __temp441v__b__y__z=0;
  const char* __temp442v=0;
  double __temp444v__a__x__z=0;
  double __temp444v__a__y__z=0;
  double __temp444v__b__x__z=0;
  double __temp444v__b__y__z=0;
  const char* __temp445v=0;
  double __temp447v__a__x__z=0;
  double __temp447v__a__y__z=0;
  double __temp447v__b__x__z=0;
  double __temp447v__b__y__z=0;
  int __temp_errcode=0;
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp438v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp438v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp438v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 10 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp438v__b__y__z,(char*)f+24,8);
  __temp439v=",";
  print__temp338v(__temp438v__a__x__z,__temp439v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp441v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp441v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp441v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 11 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp441v__b__y__z,(char*)f+24,8);
  __temp442v=",";
  print__temp338v(__temp441v__a__y__z,__temp442v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp444v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp444v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp444v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp444v__b__y__z,(char*)f+24,8);
  __temp445v=",";
  print__temp338v(__temp444v__b__x__z,__temp445v);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp447v__a__x__z,(char*)f,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp447v__a__y__z,(char*)f+8,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp447v__b__x__z,(char*)f+16,8);
  if(!f){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp447v__b__y__z,(char*)f+24,8);
  print__temp335v(__temp447v__b__y__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int new__temp400v(void** __temp505v, unsigned long long* __temp506v, unsigned long long buffer__align, void** __temp507v) {
  void* buffer__unsafe_ptr=*__temp505v;
  unsigned long long buffer__unsafe_size=*__temp506v;
  unsigned long long __temp401v=0;
  void* __temp402v__buffer__unsafe_ptr=0;
  unsigned long long __temp402v__buffer__unsafe_size=0;
  unsigned long long __temp402v__buffer__align=0;
  unsigned long long __temp403v=0;
  void* __temp404v____temp398v____temp373v__to=0;
  int __temp_errcode=0;
  __temp401v=1;
  __temp_errcode=alloc__temp376v(&buffer__unsafe_ptr,&buffer__unsafe_size,buffer__align,__temp401v,&__temp402v__buffer__unsafe_ptr,&__temp402v__buffer__unsafe_size,&__temp402v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 43 column 18\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp403v=0;
  __temp_errcode=get__temp395v(&__temp402v__buffer__unsafe_ptr,&__temp402v__buffer__unsafe_size,__temp402v__buffer__align,__temp403v,&__temp404v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m std/array.s line 43 column 28\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp505v=buffer__unsafe_ptr;
  *__temp506v=buffer__unsafe_size;
  *__temp507v=__temp404v____temp398v____temp373v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int main__temp449v() {
  void* __temp452v__unsafe_ptr=0;
  unsigned long long __temp452v__unsafe_size=0;
  unsigned long long __temp452v__align=0;
  unsigned long long __temp453v=0;
  void* __temp454v__buffer__unsafe_ptr=0;
  unsigned long long __temp454v__buffer__unsafe_size=0;
  unsigned long long __temp454v__buffer__align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__align=0;
  unsigned long long __temp455v=0;
  void* __temp456v____temp398v____temp373v__to=0;
  double __temp457v=0;
  unsigned long long __temp458v=0;
  void* __temp459v____temp398v____temp373v__to=0;
  double __temp460v__z=0;
  void* __temp464v__unsafe_ptr=0;
  unsigned long long __temp464v__unsafe_size=0;
  unsigned long long __temp464v__align=0;
  unsigned long long __temp465v=0;
  void* __temp466v__buffer__unsafe_ptr=0;
  unsigned long long __temp466v__buffer__unsafe_size=0;
  unsigned long long __temp466v__buffer__align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__align=0;
  unsigned long long __temp467v=0;
  void* __temp468v____temp398v____temp373v__to=0;
  double __temp469v=0;
  double __temp470v=0;
  double __temp471v=0;
  double __temp472v=0;
  unsigned long long __temp473v=0;
  void* __temp474v____temp398v____temp373v__to=0;
  void* __temp476v__unsafe_ptr=0;
  unsigned long long __temp476v__unsafe_size=0;
  unsigned long long __temp476v__align=0;
  void* __temp477v____temp404v____temp398v____temp373v__to=0;
  double __temp478v=0;
  void* n=0;
  double __temp479v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp450v(&__temp452v__unsafe_ptr,&__temp452v__unsafe_size,&__temp452v__align);
  __temp453v=1;
  __temp_errcode=alloc__temp376v(&__temp452v__unsafe_ptr,&__temp452v__unsafe_size,__temp452v__align,__temp453v,&__temp454v__buffer__unsafe_ptr,&__temp454v__buffer__unsafe_size,&__temp454v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp454v__buffer__unsafe_ptr;
  f__unsafe_size=__temp454v__buffer__unsafe_size;
  f__align=__temp454v__buffer__align;
  __temp455v=0;
  __temp_errcode=get__temp395v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp455v,&__temp456v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp457v=1.0;
  if(!__temp456v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp456v____temp398v____temp373v__to,&__temp457v,8);
  __temp458v=0;
  __temp_errcode=get__temp395v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp458v,&__temp459v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 18 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp459v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp460v__z,(char*)__temp459v____temp398v____temp373v__to,8);
  print__temp335v(__temp460v__z);
  Field__temp_buffer__buffer__temp462v(&__temp464v__unsafe_ptr,&__temp464v__unsafe_size,&__temp464v__align);
  __temp465v=1;
  __temp_errcode=alloc__temp376v(&__temp464v__unsafe_ptr,&__temp464v__unsafe_size,__temp464v__align,__temp465v,&__temp466v__buffer__unsafe_ptr,&__temp466v__buffer__unsafe_size,&__temp466v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 20 column 16\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp466v__buffer__unsafe_ptr;
  p__unsafe_size=__temp466v__buffer__unsafe_size;
  p__align=__temp466v__buffer__align;
  __temp467v=0;
  __temp_errcode=get__temp395v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp467v,&__temp468v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 21 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp469v=1.0;
  __temp470v=2.0;
  __temp471v=3.0;
  __temp472v=4.0;
  if(!__temp468v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp398v____temp373v__to,&__temp469v,8);
  if(!__temp468v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp398v____temp373v__to+8,&__temp470v,8);
  if(!__temp468v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp398v____temp373v__to+16,&__temp471v,8);
  if(!__temp468v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 21 column 9\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp468v____temp398v____temp373v__to+24,&__temp472v,8);
  __temp473v=0;
  __temp_errcode=get__temp395v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp473v,&__temp474v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 22 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp_errcode=print__temp437v(__temp474v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 22 column 5\n   unhandled error from print(ptr f) -> ()\n");
  goto __temp_failure;
  }
  float__temp_buffer__buffer__temp450v(&__temp476v__unsafe_ptr,&__temp476v__unsafe_size,&__temp476v__align);
  __temp_errcode=new__temp400v(&__temp476v__unsafe_ptr,&__temp476v__unsafe_size,__temp476v__align,&__temp477v____temp404v____temp398v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 24 column 10\n   unhandled error from new(any[]) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp478v=1.0;
  if(!__temp477v____temp404v____temp398v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 24 column 22\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp477v____temp404v____temp398v____temp373v__to,&__temp478v,8);
  n=__temp477v____temp404v____temp398v____temp373v__to;
  if(!n){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 25 column 12\n");
  goto __temp_failure;
  }
  memcpy(&__temp479v__z,(char*)n,8);
  print__temp335v(__temp479v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp449v();return 0;}