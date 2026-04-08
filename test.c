#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline void id__temp_buffer__buffer__temp411v(void** __temp429v, unsigned long long* __temp430v, unsigned long long* __temp431v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long align=0;
  align=8;
  __temp_return:
  *__temp429v=unsafe_ptr;
  *__temp430v=unsafe_size;
  *__temp431v=align;
}

static inline void false__temp7v(int* __temp432v) {
  int value=0;
  __temp_return:
  *__temp432v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp433v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp433v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp434v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp434v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp435v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp435v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp436v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp436v=z;
}

static inline void zero__temp371v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp437v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp437v=z;
}

static inline void alloc__temp367v(unsigned long long bytes, void** __temp438v) {
  void* allocated=0;
  allocated=malloc(bytes);
  goto __temp_return;
  __temp_return:
  *__temp438v=allocated;
}

static inline int alloc__temp376v(void** __temp439v, unsigned long long* __temp440v, unsigned long long buffer__align, unsigned long long size, void** __temp441v, unsigned long long* __temp442v, unsigned long long* __temp443v) {
  void* buffer__unsafe_ptr=*__temp439v;
  unsigned long long buffer__unsafe_size=*__temp440v;
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
  __temp_errcode=2;
  goto __temp_failure;
  }
  buffer__unsafe_size=size;
  mul__temp132v(buffer__align,size,&__temp383v__z);
  bytes=__temp383v__z;
  alloc__temp367v(bytes,&__temp384v__allocated);
  buffer__unsafe_ptr=__temp384v__allocated;
  __temp385v=0;
  zero__temp371v(buffer__unsafe_ptr,__temp385v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__align=buffer__align;
  goto __temp_return;
  __temp_return:
  *__temp439v=buffer__unsafe_ptr;
  *__temp440v=buffer__unsafe_size;
  *__temp441v=buffer__unsafe_ptr;
  *__temp442v=buffer__unsafe_size;
  *__temp443v=buffer__align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp444v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp444v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp445v) {
  __temp_return:
  *__temp445v=to;
}

static inline void add__temp372v(void* allocated, unsigned long long offset, void** __temp446v) {
  void* element=0;
  void* __temp373v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp446v=__temp373v__to;
}

static inline int get__temp405v(void** __temp447v, unsigned long long* __temp448v, unsigned long long buffer__align, unsigned long long i, void** __temp449v) {
  void* buffer__unsafe_ptr=*__temp447v;
  unsigned long long buffer__unsafe_size=*__temp448v;
  int __temp406v__z=0;
  unsigned long long __temp407v__z=0;
  void* __temp408v____temp373v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp406v__z);
  if(__temp406v__z){
  printf("%s", "\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/array.s line 42 column 14\n");
  __temp_errcode=3;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__align,&__temp407v__z);
  add__temp372v(buffer__unsafe_ptr,__temp407v__z,&__temp408v____temp373v__to);
  goto __temp_return;
  __temp_return:
  *__temp447v=buffer__unsafe_ptr;
  *__temp448v=buffer__unsafe_size;
  *__temp449v=__temp408v____temp373v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void free__temp370v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void realloc__temp368v(void* allocated, unsigned long long bytes, void** __temp450v) {
  void* new_allocated=0;
  void* __temp369v__to=0;
  new_allocated=allocated?realloc(allocated,bytes):malloc(bytes);
  attach_type__temp11v(new_allocated,allocated,&__temp369v__to);
  goto __temp_return;
  __temp_return:
  *__temp450v=__temp369v__to;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp451v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp451v=z;
}

static inline void resize__temp387v(void** __temp452v, unsigned long long* __temp453v, unsigned long long buffer__align, unsigned long long size, void** __temp454v, unsigned long long* __temp455v, unsigned long long* __temp456v) {
  void* buffer__unsafe_ptr=*__temp452v;
  unsigned long long buffer__unsafe_size=*__temp453v;
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
  realloc__temp368v(buffer__unsafe_ptr,bytes,&__temp395v____temp369v__to);
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
  *__temp452v=buffer__unsafe_ptr;
  *__temp453v=buffer__unsafe_size;
  *__temp454v=buffer__unsafe_ptr;
  *__temp455v=buffer__unsafe_size;
  *__temp456v=buffer__align;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp457v) {
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
  *__temp457v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int last__temp398v(void** __temp458v, unsigned long long* __temp459v, unsigned long long buffer__align, void** __temp460v) {
  void* buffer__unsafe_ptr=*__temp458v;
  unsigned long long buffer__unsafe_size=*__temp459v;
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
  __temp_errcode=3;
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
  *__temp458v=buffer__unsafe_ptr;
  *__temp459v=buffer__unsafe_size;
  *__temp460v=__temp404v____temp373v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp347v(unsigned long long value) {
  int __temp348v=0;
  const char* __temp349v=0;
  const char* endl=0;
  __temp349v="\n";
  endl=__temp349v;
  printf("%llu%s",value,endl);
}

static inline int main__temp410v() {
  void* __temp413v__unsafe_ptr=0;
  unsigned long long __temp413v__unsafe_size=0;
  unsigned long long __temp413v__align=0;
  unsigned long long __temp414v=0;
  void* __temp415v__buffer__unsafe_ptr=0;
  unsigned long long __temp415v__buffer__unsafe_size=0;
  unsigned long long __temp415v__buffer__align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__align=0;
  unsigned long long __temp416v=0;
  void* __temp417v____temp408v____temp373v__to=0;
  unsigned long long __temp418v=0;
  unsigned long long __temp419v=0;
  void* __temp420v____temp408v____temp373v__to=0;
  unsigned long long __temp421v__value=0;
  unsigned long long __temp422v=0;
  void* __temp423v__buffer__unsafe_ptr=0;
  unsigned long long __temp423v__buffer__unsafe_size=0;
  unsigned long long __temp423v__buffer__align=0;
  void* __temp424v____temp404v____temp373v__to=0;
  unsigned long long __temp425v=0;
  void* __temp426v____temp408v____temp373v__to=0;
  unsigned long long __temp427v__value=0;
  int __temp_errcode=0;
  id__temp_buffer__buffer__temp411v(&__temp413v__unsafe_ptr,&__temp413v__unsafe_size,&__temp413v__align);
  __temp414v=3;
  __temp_errcode=alloc__temp376v(&__temp413v__unsafe_ptr,&__temp413v__unsafe_size,__temp413v__align,__temp414v,&__temp415v__buffer__unsafe_ptr,&__temp415v__buffer__unsafe_size,&__temp415v__buffer__align);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 5 column 19\n   unhandled error from alloc(any[], id size) -> (any[])\n");
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp415v__buffer__unsafe_ptr;
  buf__unsafe_size=__temp415v__buffer__unsafe_size;
  buf__align=__temp415v__buffer__align;
  __temp416v=2;
  __temp_errcode=get__temp405v(&buf__unsafe_ptr,&buf__unsafe_size,buf__align,__temp416v,&__temp417v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 6 column 8\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  __temp418v=1;
  if(!__temp417v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 6 column 12\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp417v____temp408v____temp373v__to,&__temp418v,8);
  __temp419v=2;
  __temp_errcode=get__temp405v(&buf__unsafe_ptr,&buf__unsafe_size,buf__align,__temp419v,&__temp420v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 7 column 8\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp420v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 7 column 11\n");
  goto __temp_failure;
  }
  memcpy(&__temp421v__value,(char*)__temp420v____temp408v____temp373v__to,8);
  __temp422v=2;
  resize__temp387v(&buf__unsafe_ptr,&buf__unsafe_size,buf__align,__temp422v,&__temp423v__buffer__unsafe_ptr,&__temp423v__buffer__unsafe_size,&__temp423v__buffer__align);
  __temp_errcode=last__temp398v(&__temp423v__buffer__unsafe_ptr,&__temp423v__buffer__unsafe_size,__temp423v__buffer__align,&__temp424v____temp404v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 7 column 15\n   unhandled error from last(any[]) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp424v____temp404v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 7 column 12\n");
  goto __temp_failure;
  }
  memcpy((char*)__temp424v____temp404v____temp373v__to,&__temp421v__value,8);
  __temp425v=1;
  __temp_errcode=get__temp405v(&buf__unsafe_ptr,&buf__unsafe_size,buf__align,__temp425v,&__temp426v____temp408v____temp373v__to);
  if(__temp_errcode){
  printf("%s", "\033[31mat\033[0m test.s line 8 column 14\n   unhandled error from get(any[], id i) -> (any ptr)\n");
  goto __temp_failure;
  }
  if(!__temp426v____temp408v____temp373v__to){
  printf("%s", "\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m test.s line 8 column 17\n");
  goto __temp_failure;
  }
  memcpy(&__temp427v__value,(char*)__temp426v____temp408v____temp373v__to,8);
  print__temp347v(__temp427v__value);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp410v();return 0;}