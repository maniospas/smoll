#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp430v(void** __temp455v, unsigned long long* __temp456v, unsigned long long* __temp457v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp455v=unsafe_ptr;
  *__temp456v=unsafe_size;
  *__temp457v=unsafe_align;
}

static inline void false__temp7v(int* __temp458v) {
  int value=0;
  __temp_return:
  *__temp458v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp459v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp459v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp460v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp460v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp461v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp461v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp462v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp462v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp463v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp463v=z;
}

static inline int alloc__temp382v(unsigned long long bytes, void** __temp464v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=4;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp464v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp391v(void** __temp465v, unsigned long long* __temp466v, unsigned long long* __temp467v, unsigned long long size, void** __temp468v, unsigned long long* __temp469v, unsigned long long* __temp470v) {
  void* buffer__unsafe_ptr=*__temp465v;
  unsigned long long buffer__unsafe_size=*__temp466v;
  unsigned long long buffer__unsafe_align=*__temp467v;
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
  eq__temp276v(buffer__unsafe_size,size,&__temp392v__z);
  if(__temp392v__z){
  __temp393v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp394v__z);
  zero__temp386v(buffer__unsafe_ptr,__temp393v,__temp394v__z);
  goto __temp_return;
  }
  __temp396v=0;
  neq__temp300v(buffer__unsafe_size,__temp396v,&__temp397v__z);
  if(__temp397v__z){
  __temp_errcode=6;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp398v__z);
  bytes=__temp398v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp382v(bytes,&__temp399v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp399v__allocated;
  __temp400v=0;
  zero__temp386v(buffer__unsafe_ptr,__temp400v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp465v=buffer__unsafe_ptr;
  *__temp466v=buffer__unsafe_size;
  *__temp467v=buffer__unsafe_align;
  *__temp468v=buffer__unsafe_ptr;
  *__temp469v=buffer__unsafe_size;
  *__temp470v=buffer__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp471v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp471v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp472v) {
  __temp_return:
  *__temp472v=to;
}

static inline void add__temp387v(void* allocated, unsigned long long offset, void** __temp473v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp473v=__temp388v__to;
}

static inline int mutget__temp420v(void** __temp474v, unsigned long long* __temp475v, unsigned long long* __temp476v, unsigned long long i, void** __temp477v) {
  void* buffer__unsafe_ptr=*__temp474v;
  unsigned long long buffer__unsafe_size=*__temp475v;
  unsigned long long buffer__unsafe_align=*__temp476v;
  int __temp421v__z=0;
  unsigned long long __temp422v__z=0;
  void* __temp423v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp421v__z);
  if(__temp421v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp422v__z);
  add__temp387v(buffer__unsafe_ptr,__temp422v__z,&__temp423v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp474v=buffer__unsafe_ptr;
  *__temp475v=buffer__unsafe_size;
  *__temp476v=buffer__unsafe_align;
  *__temp477v=__temp423v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test1__temp429v(void** __temp478v, unsigned long long* __temp479v, unsigned long long* __temp480v) {
  void* __temp432v__unsafe_ptr=0;
  unsigned long long __temp432v__unsafe_size=0;
  unsigned long long __temp432v__unsafe_align=0;
  unsigned long long __temp433v=0;
  void* __temp434v__buffer__unsafe_ptr=0;
  unsigned long long __temp434v__buffer__unsafe_size=0;
  unsigned long long __temp434v__buffer__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp435v=0;
  void* __temp436v____temp423v____temp388v__to=0;
  double __temp437v=0;
  void* __temp438v__unsafe_ptr=0;
  unsigned long long __temp438v__unsafe_size=0;
  unsigned long long __temp438v__unsafe_align=0;
  void* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp430v(&__temp432v__unsafe_ptr,&__temp432v__unsafe_size,&__temp432v__unsafe_align);
  __temp433v=1;
  __temp_errcode=alloc__temp391v(&__temp432v__unsafe_ptr,&__temp432v__unsafe_size,&__temp432v__unsafe_align,__temp433v,&__temp434v__buffer__unsafe_ptr,&__temp434v__buffer__unsafe_size,&__temp434v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp434v__buffer__unsafe_ptr;
  x__unsafe_size=__temp434v__buffer__unsafe_size;
  x__unsafe_align=__temp434v__buffer__unsafe_align;
  __temp435v=0;
  __temp_errcode=mutget__temp420v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp435v,&__temp436v____temp423v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp437v=1.0;
  if(!__temp436v____temp423v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp436v____temp423v____temp388v__to,&__temp437v,8);
  float__temp_buffer__buffer__temp430v(&__temp438v__unsafe_ptr,&__temp438v__unsafe_size,&__temp438v__unsafe_align);
  y__unsafe_ptr=__temp438v__unsafe_ptr;
  y__unsafe_size=__temp438v__unsafe_size;
  y__unsafe_align=__temp438v__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp478v=x__unsafe_ptr;
  *__temp479v=x__unsafe_size;
  *__temp480v=x__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void free__temp385v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline int realloc__temp383v(void* allocated, unsigned long long bytes, void** __temp481v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp384v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated?realloc(allocated,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated,&__temp384v__to);
  goto __temp_return;
  __temp_return:
  *__temp481v=__temp384v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp482v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp482v=z;
}

static inline int resize__temp402v(void** __temp483v, unsigned long long* __temp484v, unsigned long long* __temp485v, unsigned long long size, void** __temp486v, unsigned long long* __temp487v, unsigned long long* __temp488v) {
  void* buffer__unsafe_ptr=*__temp483v;
  unsigned long long buffer__unsafe_size=*__temp484v;
  unsigned long long buffer__unsafe_align=*__temp485v;
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
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__unsafe_align,&__temp408v__z);
  prev_bytes=__temp408v__z;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__unsafe_align,size,&__temp409v__z);
  bytes=__temp409v__z;
  __temp_errcode=realloc__temp383v(buffer__unsafe_ptr,bytes,&__temp410v____temp384v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp410v____temp384v__to;
  lt__temp180v(prev_bytes,bytes,&__temp411v__z);
  if(__temp411v__z){
  zero__temp386v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp483v=buffer__unsafe_ptr;
  *__temp484v=buffer__unsafe_size;
  *__temp485v=buffer__unsafe_align;
  *__temp486v=buffer__unsafe_ptr;
  *__temp487v=buffer__unsafe_size;
  *__temp488v=buffer__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int sub__temp326v(unsigned long long x, unsigned long long y, unsigned long long* __temp489v) {
  int __temp327v____temp85v____temp26v__value=0;
  int __temp328v=0;
  int __temp329v__z=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp83v(x,y,&__temp327v____temp85v____temp26v__value);
  lt__temp180v(x,y,&__temp329v__z);
  if(__temp329v__z){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp489v=z;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int last__temp413v(void** __temp490v, unsigned long long* __temp491v, unsigned long long* __temp492v, void** __temp493v) {
  void* buffer__unsafe_ptr=*__temp490v;
  unsigned long long buffer__unsafe_size=*__temp491v;
  unsigned long long buffer__unsafe_align=*__temp492v;
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
  __temp_errcode=7;
  goto __temp_failure;
  }
  __temp416v=1;
  __temp_errcode=sub__temp326v(buffer__unsafe_size,__temp416v,&__temp417v__z);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp132v(__temp417v__z,buffer__unsafe_align,&__temp418v__z);
  add__temp387v(buffer__unsafe_ptr,__temp418v__z,&__temp419v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp490v=buffer__unsafe_ptr;
  *__temp491v=buffer__unsafe_size;
  *__temp492v=buffer__unsafe_align;
  *__temp493v=__temp419v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int test2__temp439v(void** __temp494v, unsigned long long* __temp495v, unsigned long long* __temp496v) {
  void* x__unsafe_ptr=*__temp494v;
  unsigned long long x__unsafe_size=*__temp495v;
  unsigned long long x__unsafe_align=*__temp496v;
  unsigned long long __temp440v=0;
  void* __temp441v__buffer__unsafe_ptr=0;
  unsigned long long __temp441v__buffer__unsafe_size=0;
  unsigned long long __temp441v__buffer__unsafe_align=0;
  void* __temp442v____temp419v____temp388v__to=0;
  double __temp443v=0;
  int __temp_errcode=0;
  __temp440v=2;
  __temp_errcode=resize__temp402v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp440v,&__temp441v__buffer__unsafe_ptr,&__temp441v__buffer__unsafe_size,&__temp441v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=last__temp413v(&__temp441v__buffer__unsafe_ptr,&__temp441v__buffer__unsafe_size,&__temp441v__buffer__unsafe_align,&__temp442v____temp419v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp443v=2.0;
  if(!__temp442v____temp419v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp442v____temp419v____temp388v__to,&__temp443v,8);
  __temp_return:
  *__temp494v=x__unsafe_ptr;
  *__temp495v=x__unsafe_size;
  *__temp496v=x__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp424v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp497v) {
  int __temp425v__z=0;
  unsigned long long __temp426v__z=0;
  void* __temp427v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp425v__z);
  if(__temp425v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp426v__z);
  add__temp387v(buffer__unsafe_ptr,__temp426v__z,&__temp427v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp497v=__temp427v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp498v) {
  int __temp60v=0;
  int __temp61v____temp26v__value=0;
  not__temp25v(__temp60v,&__temp61v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp498v=__temp61v____temp26v__value;
}

static inline void add__temp86v(double x, double y, double* __temp499v) {
  int __temp87v____temp61v____temp26v__value=0;
  double z=0;
  is_different__temp59v(x,y,&__temp87v____temp61v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp499v=z;
}

static inline void print__temp337v(double value) {
  int __temp338v=0;
  const char* __temp339v=0;
  const char* endl=0;
  __temp339v="\n";
  endl=__temp339v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp444v() {
  void* __temp445v__x__unsafe_ptr=0;
  unsigned long long __temp445v__x__unsafe_size=0;
  unsigned long long __temp445v__x__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp447v=0;
  void* __temp448v____temp427v____temp388v__to=0;
  double __temp449v__value=0;
  unsigned long long __temp450v=0;
  void* __temp451v____temp427v____temp388v__to=0;
  double __temp452v__value=0;
  double __temp453v__z=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp429v(&__temp445v__x__unsafe_ptr,&__temp445v__x__unsafe_size,&__temp445v__x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp445v__x__unsafe_ptr;
  x__unsafe_size=__temp445v__x__unsafe_size;
  x__unsafe_align=__temp445v__x__unsafe_align;
  __temp_errcode=test2__temp439v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp447v=0;
  __temp_errcode=get__temp424v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp447v,&__temp448v____temp427v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp448v____temp427v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp449v__value,(char*)__temp448v____temp427v____temp388v__to,8);
  __temp450v=1;
  __temp_errcode=get__temp424v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp450v,&__temp451v____temp427v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp451v____temp427v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp452v__value,(char*)__temp451v____temp427v____temp388v__to,8);
  add__temp86v(__temp449v__value,__temp452v__value,&__temp453v__z);
  print__temp337v(__temp453v__z);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp444v();return 0;}