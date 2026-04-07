#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void float__temp_buffer__buffer__temp435v(void** __temp462v, unsigned long long* __temp463v, unsigned long long* __temp464v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp462v=unsafe_ptr;
  *__temp463v=unsafe_size;
  *__temp464v=align;
}

static inline void false__temp7v(int* __temp465v) {
  int value=0;
  __temp_return:
  *__temp465v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp466v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp466v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp467v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp467v=__temp85v____temp26v__value;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp468v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp468v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp469v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp469v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp470v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp470v=z;
}

static inline void alloc__temp367v(unsigned long long bytes, void** __temp471v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp471v=allocated;
}

static inline void zero__temp371v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline int alloc__temp376v(void** __temp472v, unsigned long long* __temp473v, unsigned long long buffer__align, unsigned long long size, void** __temp474v, unsigned long long* __temp475v, unsigned long long* __temp476v) {
  void* buffer__unsafe_ptr=*__temp472v;
  unsigned long long buffer__unsafe_size=*__temp473v;
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
  *__temp472v=buffer__unsafe_ptr;
  *__temp473v=buffer__unsafe_size;
  *__temp474v=buffer__unsafe_ptr;
  *__temp475v=buffer__unsafe_size;
  *__temp476v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp477v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp477v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp478v) {
  __temp_return:
  *__temp478v=to;
}

static inline void add__temp372v(void* allocated, unsigned long long offset, void** __temp479v) {
  void* element=0;
  void* __temp373v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp479v=__temp373v__to;
}

static inline int get__temp397v(void** __temp480v, unsigned long long* __temp481v, unsigned long long buffer__align, unsigned long long i, void** __temp482v) {
  void* buffer__unsafe_ptr=*__temp480v;
  unsigned long long buffer__unsafe_size=*__temp481v;
  int __temp398v__z=0;
  unsigned long long __temp399v__z=0;
  void* __temp400v____temp373v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp398v__z);
  if(__temp398v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 36 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp399v__z);
  add__temp372v(buffer__unsafe_ptr,__temp399v__z,&__temp400v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp480v=buffer__unsafe_ptr;
  *__temp481v=buffer__unsafe_size;
  *__temp482v=__temp400v____temp373v__to;
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

static inline void Field__temp_buffer__buffer__temp447v(void** __temp483v, unsigned long long* __temp484v, unsigned long long* __temp485v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=32;
  __temp_return:
  *__temp483v=unsafe_ptr;
  *__temp484v=unsafe_size;
  *__temp485v=align;
}

static inline int main__temp434v() {
  void* __temp437v__unsafe_ptr=0;
  unsigned long long __temp437v__unsafe_size=0;
  unsigned long long __temp437v__align=0;
  void* f__unsafe_ptr=0;
  unsigned long long f__unsafe_size=0;
  unsigned long long f__align=0;
  unsigned long long __temp438v=0;
  void* __temp439v__buffer__unsafe_ptr=0;
  unsigned long long __temp439v__buffer__unsafe_size=0;
  unsigned long long __temp439v__buffer__align=0;
  unsigned long long __temp440v=0;
  void* __temp441v____temp400v____temp373v__to=0;
  double __temp442v=0;
  unsigned long long __temp443v=0;
  void* __temp444v____temp400v____temp373v__to=0;
  double __temp445v__z=0;
  void* __temp449v__unsafe_ptr=0;
  unsigned long long __temp449v__unsafe_size=0;
  unsigned long long __temp449v__align=0;
  void* p__unsafe_ptr=0;
  unsigned long long p__unsafe_size=0;
  unsigned long long p__align=0;
  unsigned long long __temp450v=0;
  void* __temp451v__buffer__unsafe_ptr=0;
  unsigned long long __temp451v__buffer__unsafe_size=0;
  unsigned long long __temp451v__buffer__align=0;
  unsigned long long __temp452v=0;
  void* __temp453v____temp400v____temp373v__to=0;
  double __temp454v=0;
  double __temp455v=0;
  double __temp456v=0;
  double __temp457v=0;
  unsigned long long __temp458v=0;
  void* __temp459v____temp400v____temp373v__to=0;
  double __temp460v__a__x__z=0;
  double __temp460v__a__y__z=0;
  double __temp460v__b__x__z=0;
  double __temp460v__b__y__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp435v(&__temp437v__unsafe_ptr,&__temp437v__unsafe_size,&__temp437v__align);
  f__unsafe_ptr=__temp437v__unsafe_ptr;
  f__unsafe_size=__temp437v__unsafe_size;
  f__align=__temp437v__align;
  __temp438v=1;
  __temp_errcode=alloc__temp376v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp438v,&__temp439v__buffer__unsafe_ptr,&__temp439v__buffer__unsafe_size,&__temp439v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 11 column 6\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp440v=0;
  __temp_errcode=get__temp397v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp440v,&__temp441v____temp400v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 12 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp442v=1.0;
  if(!__temp441v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 12 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp441v____temp400v____temp373v__to,&__temp442v,8);
  __temp443v=0;
  __temp_errcode=get__temp397v(&f__unsafe_ptr,&f__unsafe_size,f__align,__temp443v,&__temp444v____temp400v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 13 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp444v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 13 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp445v__z,(char*)__temp444v____temp400v____temp373v__to,8);
  print__temp335v(__temp445v__z);
  Field__temp_buffer__buffer__temp447v(&__temp449v__unsafe_ptr,&__temp449v__unsafe_size,&__temp449v__align);
  p__unsafe_ptr=__temp449v__unsafe_ptr;
  p__unsafe_size=__temp449v__unsafe_size;
  p__align=__temp449v__align;
  __temp450v=1;
  __temp_errcode=alloc__temp376v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp450v,&__temp451v__buffer__unsafe_ptr,&__temp451v__buffer__unsafe_size,&__temp451v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 16 column 6\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  __temp452v=0;
  __temp_errcode=get__temp397v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp452v,&__temp453v____temp400v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 17 column 6\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  __temp454v=1.0;
  __temp455v=2.0;
  __temp456v=3.0;
  __temp457v=4.0;
  if(!__temp453v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp453v____temp400v____temp373v__to,&__temp454v,8);
  if(!__temp453v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp453v____temp400v____temp373v__to+8,&__temp455v,8);
  if(!__temp453v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp453v____temp400v____temp373v__to+16,&__temp456v,8);
  if(!__temp453v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 17 column 10\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp453v____temp400v____temp373v__to+24,&__temp457v,8);
  __temp458v=0;
  __temp_errcode=get__temp397v(&p__unsafe_ptr,&p__unsafe_size,p__align,__temp458v,&__temp459v____temp400v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 18 column 12\n   unhandled error from get(any[], id i) -> (ptr)\n");
  goto __temp_failure;
  }
  if(!__temp459v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp460v__a__x__z,(char*)__temp459v____temp400v____temp373v__to,8);
  if(!__temp459v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp460v__a__y__z,(char*)__temp459v____temp400v____temp373v__to+8,8);
  if(!__temp459v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp460v__b__x__z,(char*)__temp459v____temp400v____temp373v__to+16,8);
  if(!__temp459v____temp400v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 18 column 15\n");
  goto __temp_failure;
  }
  memcpy(&__temp460v__b__y__z,(char*)__temp459v____temp400v____temp373v__to+24,8);
  print__temp335v(__temp460v__a__y__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp434v();return 0;}