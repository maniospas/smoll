#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void Point3D__temp_buffer__buffer__temp435v(void** __temp450v, unsigned long long* __temp451v, unsigned long long* __temp452v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  __temp_return:
  *__temp450v=unsafe_ptr;
  *__temp451v=unsafe_size;
  *__temp452v=unsafe_align;
}

static inline void false__temp7v(int* __temp453v) {
  int value=0;
  __temp_return:
  *__temp453v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp454v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp454v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp455v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp455v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp456v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp456v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp457v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp457v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp458v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp458v=z;
}

static inline int alloc__temp382v(unsigned long long bytes, void** __temp459v) {
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
  *__temp459v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp391v(void** __temp460v, unsigned long long* __temp461v, unsigned long long* __temp462v, unsigned long long size, void** __temp463v, unsigned long long* __temp464v, unsigned long long* __temp465v) {
  void* buffer__unsafe_ptr=*__temp460v;
  unsigned long long buffer__unsafe_size=*__temp461v;
  unsigned long long buffer__unsafe_align=*__temp462v;
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
  *__temp460v=buffer__unsafe_ptr;
  *__temp461v=buffer__unsafe_size;
  *__temp462v=buffer__unsafe_align;
  *__temp463v=buffer__unsafe_ptr;
  *__temp464v=buffer__unsafe_size;
  *__temp465v=buffer__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp466v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp466v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp467v) {
  __temp_return:
  *__temp467v=to;
}

static inline void add__temp387v(void* allocated, unsigned long long offset, void** __temp468v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp468v=__temp388v__to;
}

static inline int mutget__temp420v(void** __temp469v, unsigned long long* __temp470v, unsigned long long* __temp471v, unsigned long long i, void** __temp472v) {
  void* buffer__unsafe_ptr=*__temp469v;
  unsigned long long buffer__unsafe_size=*__temp470v;
  unsigned long long buffer__unsafe_align=*__temp471v;
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
  *__temp469v=buffer__unsafe_ptr;
  *__temp470v=buffer__unsafe_size;
  *__temp471v=buffer__unsafe_align;
  *__temp472v=__temp423v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void Point2D__temp429v(double x, double y, double* __temp473v, double* __temp474v) {
  goto __temp_return;
  __temp_return:
  *__temp473v=x;
  *__temp474v=y;
}

static inline void Point3D__temp431v(double x, double y, double z, double* __temp475v, double* __temp476v, double* __temp477v) {
  double __temp432v__x=0;
  double __temp432v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp429v(x,y,&__temp432v__x,&__temp432v__y);
  plane__x=__temp432v__x;
  plane__y=__temp432v__y;
  goto __temp_return;
  __temp_return:
  *__temp475v=plane__x;
  *__temp476v=plane__y;
  *__temp477v=z;
}

static inline int get__temp424v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp478v) {
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
  *__temp478v=__temp427v____temp388v__to;
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

static inline int main__temp434v() {
  void* __temp437v__unsafe_ptr=0;
  unsigned long long __temp437v__unsafe_size=0;
  unsigned long long __temp437v__unsafe_align=0;
  unsigned long long __temp438v=0;
  void* __temp439v__buffer__unsafe_ptr=0;
  unsigned long long __temp439v__buffer__unsafe_size=0;
  unsigned long long __temp439v__buffer__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp440v=0;
  void* __temp441v____temp423v____temp388v__to=0;
  double __temp442v=0;
  double __temp443v=0;
  double __temp444v=0;
  double __temp445v__plane__x=0;
  double __temp445v__plane__y=0;
  double __temp445v__z=0;
  unsigned long long __temp446v=0;
  void* __temp447v____temp427v____temp388v__to=0;
  double __temp448v__plane__x=0;
  double __temp448v__plane__y=0;
  double __temp448v__z=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp435v(&__temp437v__unsafe_ptr,&__temp437v__unsafe_size,&__temp437v__unsafe_align);
  __temp438v=10;
  __temp_errcode=alloc__temp391v(&__temp437v__unsafe_ptr,&__temp437v__unsafe_size,&__temp437v__unsafe_align,__temp438v,&__temp439v__buffer__unsafe_ptr,&__temp439v__buffer__unsafe_size,&__temp439v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp439v__buffer__unsafe_ptr;
  points__unsafe_size=__temp439v__buffer__unsafe_size;
  points__unsafe_align=__temp439v__buffer__unsafe_align;
  __temp440v=0;
  __temp_errcode=mutget__temp420v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp440v,&__temp441v____temp423v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp442v=1.0;
  __temp443v=2.0;
  __temp444v=3.0;
  Point3D__temp431v(__temp442v,__temp443v,__temp444v,&__temp445v__plane__x,&__temp445v__plane__y,&__temp445v__z);
  if(!__temp441v____temp423v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp441v____temp423v____temp388v__to,&__temp445v__plane__x,8);
  if(!__temp441v____temp423v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp441v____temp423v____temp388v__to+8,&__temp445v__plane__y,8);
  if(!__temp441v____temp423v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp441v____temp423v____temp388v__to+16,&__temp445v__z,8);
  __temp446v=0;
  __temp_errcode=get__temp424v(points__unsafe_ptr,points__unsafe_size,points__unsafe_align,__temp446v,&__temp447v____temp427v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp447v____temp427v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp448v__plane__x,(char*)__temp447v____temp427v____temp388v__to,8);
  if(!__temp447v____temp427v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp448v__plane__y,(char*)__temp447v____temp427v____temp388v__to+8,8);
  if(!__temp447v____temp427v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp448v__z,(char*)__temp447v____temp427v____temp388v__to+16,8);
  print__temp337v(__temp448v__plane__x);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp434v();return 0;}