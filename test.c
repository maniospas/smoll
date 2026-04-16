#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void Point3D__temp_buffer__buffer__temp473v(void** __temp497v, unsigned long long* __temp498v, unsigned long long* __temp499v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  __temp_return:
  *__temp497v=unsafe_ptr;
  *__temp498v=unsafe_size;
  *__temp499v=unsafe_align;
}

static inline void false__temp7v(int* __temp500v) {
  int value=0;
  __temp_return:
  *__temp500v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp501v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp501v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp502v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp502v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp503v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp503v=z;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp504v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp504v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp505v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp505v=z;
}

static inline void zero__temp393v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp389v(unsigned long long bytes, void** __temp506v) {
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
  *__temp506v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp398v(void** __temp507v, unsigned long long* __temp508v, unsigned long long* __temp509v, unsigned long long size, void** __temp510v, unsigned long long* __temp511v, unsigned long long* __temp512v) {
  void* buffer__unsafe_ptr=*__temp507v;
  unsigned long long buffer__unsafe_size=*__temp508v;
  unsigned long long buffer__unsafe_align=*__temp509v;
  int __temp399v__z=0;
  unsigned long long __temp400v=0;
  int __temp401v__z=0;
  unsigned long long __temp402v=0;
  unsigned long long __temp403v__z=0;
  unsigned long long __temp405v=0;
  int __temp406v__z=0;
  unsigned long long __temp407v__z=0;
  unsigned long long bytes=0;
  void* __temp408v__allocated=0;
  unsigned long long __temp409v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp399v__z);
  if(__temp399v__z){
  __temp400v=0;
  neq__temp300v(size,__temp400v,&__temp401v__z);
  if(__temp401v__z){
  __temp402v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp403v__z);
  zero__temp393v(buffer__unsafe_ptr,__temp402v,__temp403v__z);
  }
  goto __temp_return;
  }
  __temp405v=0;
  neq__temp300v(buffer__unsafe_size,__temp405v,&__temp406v__z);
  if(__temp406v__z){
  __temp_errcode=6;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp407v__z);
  bytes=__temp407v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp389v(bytes,&__temp408v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp408v__allocated;
  __temp409v=0;
  zero__temp393v(buffer__unsafe_ptr,__temp409v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp507v=buffer__unsafe_ptr;
  *__temp508v=buffer__unsafe_size;
  *__temp509v=buffer__unsafe_align;
  *__temp510v=buffer__unsafe_ptr;
  *__temp511v=buffer__unsafe_size;
  *__temp512v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp513v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp513v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp514v) {
  __temp_return:
  *__temp514v=to;
}

static inline void add__temp394v(void* allocated, unsigned long long offset, void** __temp515v) {
  void* element=0;
  void* __temp395v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp395v__to);
  goto __temp_return;
  __temp_return:
  *__temp515v=__temp395v__to;
}

static inline int mutget__temp441v(void** __temp516v, unsigned long long* __temp517v, unsigned long long* __temp518v, unsigned long long i, void** __temp519v) {
  void* buffer__unsafe_ptr=*__temp516v;
  unsigned long long buffer__unsafe_size=*__temp517v;
  unsigned long long buffer__unsafe_align=*__temp518v;
  int __temp442v__z=0;
  unsigned long long __temp443v__z=0;
  void* __temp444v____temp395v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp442v__z);
  if(__temp442v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp443v__z);
  add__temp394v(buffer__unsafe_ptr,__temp443v__z,&__temp444v____temp395v__to);
  goto __temp_return;
  __temp_return:
  *__temp516v=buffer__unsafe_ptr;
  *__temp517v=buffer__unsafe_size;
  *__temp518v=buffer__unsafe_align;
  *__temp519v=__temp444v____temp395v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void Point2D__temp450v(double x, double y, double* __temp520v, double* __temp521v) {
  goto __temp_return;
  __temp_return:
  *__temp520v=x;
  *__temp521v=y;
}

static inline void print__temp337v(const char* value) {
  int __temp338v=0;
  const char* __temp339v=0;
  const char* endl=0;
  __temp339v="\n";
  endl=__temp339v;
  printf("%s%s",value,endl);
}

static inline void Point3D__temp467v(double x, double y, double z, double* __temp522v, double* __temp523v, double* __temp524v) {
  double __temp468v__x=0;
  double __temp468v__y=0;
  double plane__x=0;
  double plane__y=0;
  const char* __temp469v=0;
  Point2D__temp450v(x,y,&__temp468v__x,&__temp468v__y);
  plane__x=__temp468v__x;
  plane__y=__temp468v__y;
  __temp469v="starting point creation";
  print__temp337v(__temp469v);
  goto __temp_return;
  __temp_return:
  *__temp522v=plane__x;
  *__temp523v=plane__y;
  *__temp524v=z;
}

static inline void len__temp449v(void** __temp525v, unsigned long long* __temp526v, unsigned long long* __temp527v, unsigned long long* __temp528v) {
  void* buffer__unsafe_ptr=*__temp525v;
  unsigned long long buffer__unsafe_size=*__temp526v;
  unsigned long long buffer__unsafe_align=*__temp527v;
  goto __temp_return;
  __temp_return:
  *__temp525v=buffer__unsafe_ptr;
  *__temp526v=buffer__unsafe_size;
  *__temp527v=buffer__unsafe_align;
  *__temp528v=buffer__unsafe_size;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp529v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp529v=z;
}

static inline int get__temp445v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp530v) {
  int __temp446v__z=0;
  unsigned long long __temp447v__z=0;
  void* __temp448v____temp395v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp446v__z);
  if(__temp446v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp447v__z);
  add__temp394v(buffer__unsafe_ptr,__temp447v__z,&__temp448v____temp395v__to);
  goto __temp_return;
  __temp_return:
  *__temp530v=__temp448v____temp395v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp531v) {
  int __temp60v=0;
  int __temp61v____temp26v__value=0;
  not__temp25v(__temp60v,&__temp61v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp531v=__temp61v____temp26v__value;
}

static inline void add__temp86v(double x, double y, double* __temp532v) {
  int __temp87v____temp61v____temp26v__value=0;
  double z=0;
  is_different__temp59v(x,y,&__temp87v____temp61v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp532v=z;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp533v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp533v=z;
}

static inline int sum__temp453v(void** __temp534v, unsigned long long* __temp535v, unsigned long long* __temp536v, double* __temp537v, double* __temp538v) {
  void* v__unsafe_ptr=*__temp534v;
  unsigned long long v__unsafe_size=*__temp535v;
  unsigned long long v__unsafe_align=*__temp536v;
  double __temp454v=0;
  double x=0;
  double __temp455v=0;
  double y=0;
  unsigned long long __temp456v=0;
  unsigned long long i=0;
  unsigned long long __temp457v__buffer__unsafe_size=0;
  int __temp458v__z=0;
  void* __temp459v____temp448v____temp395v__to=0;
  double __temp460v__x=0;
  double __temp460v__y=0;
  double __temp461v__z=0;
  void* __temp462v____temp448v____temp395v__to=0;
  double __temp463v__x=0;
  double __temp463v__y=0;
  double __temp464v__z=0;
  unsigned long long __temp465v=0;
  unsigned long long __temp466v__z=0;
  int __temp_errcode=0;
  __temp454v=0.0;
  x=__temp454v;
  __temp455v=0.0;
  y=__temp455v;
  __temp456v=0;
  i=__temp456v;
  while(1){
  len__temp449v(&v__unsafe_ptr,&v__unsafe_size,&v__unsafe_align,&__temp457v__buffer__unsafe_size);
  lt__temp180v(i,__temp457v__buffer__unsafe_size,&__temp458v__z);
  if(!__temp458v__z)break;
  __temp_errcode=get__temp445v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp459v____temp448v____temp395v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp459v____temp448v____temp395v__to){
  goto __temp_failure;
  }
  memcpy(&__temp460v__x,(char*)__temp459v____temp448v____temp395v__to,8);
  if(!__temp459v____temp448v____temp395v__to){
  goto __temp_failure;
  }
  memcpy(&__temp460v__y,(char*)__temp459v____temp448v____temp395v__to+8,8);
  add__temp86v(x,__temp460v__x,&__temp461v__z);
  x=__temp461v__z;
  __temp_errcode=get__temp445v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp462v____temp448v____temp395v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp462v____temp448v____temp395v__to){
  goto __temp_failure;
  }
  memcpy(&__temp463v__x,(char*)__temp462v____temp448v____temp395v__to,8);
  if(!__temp462v____temp448v____temp395v__to){
  goto __temp_failure;
  }
  memcpy(&__temp463v__y,(char*)__temp462v____temp448v____temp395v__to+8,8);
  add__temp86v(y,__temp463v__y,&__temp464v__z);
  y=__temp464v__z;
  __temp465v=1;
  add__temp108v(i,__temp465v,&__temp466v__z);
  i=__temp466v__z;
  }
  goto __temp_return;
  __temp_return:
  *__temp534v=v__unsafe_ptr;
  *__temp535v=v__unsafe_size;
  *__temp536v=v__unsafe_align;
  *__temp537v=x;
  *__temp538v=y;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp342v(double value) {
  int __temp343v=0;
  const char* __temp344v=0;
  const char* endl=0;
  __temp344v="\n";
  endl=__temp344v;
  printf("%.6f%s",value,endl);
}

static inline int main__temp472v() {
  void* __temp475v__unsafe_ptr=0;
  unsigned long long __temp475v__unsafe_size=0;
  unsigned long long __temp475v__unsafe_align=0;
  unsigned long long __temp476v=0;
  void* __temp477v__buffer__unsafe_ptr=0;
  unsigned long long __temp477v__buffer__unsafe_size=0;
  unsigned long long __temp477v__buffer__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp478v=0;
  void* __temp479v____temp444v____temp395v__to=0;
  double __temp480v=0;
  double __temp481v=0;
  double __temp482v=0;
  double __temp483v__plane__x=0;
  double __temp483v__plane__y=0;
  double __temp483v__z=0;
  unsigned long long __temp484v=0;
  void* __temp485v____temp444v____temp395v__to=0;
  double __temp486v=0;
  double __temp487v=0;
  double __temp488v=0;
  double __temp489v__plane__x=0;
  double __temp489v__plane__y=0;
  double __temp489v__z=0;
  void* __temp490v__unsafe_ptr=0;
  unsigned long long __temp490v__unsafe_size=0;
  unsigned long long __temp490v__unsafe_align=0;
  double __temp494v__x=0;
  double __temp494v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp473v(&__temp475v__unsafe_ptr,&__temp475v__unsafe_size,&__temp475v__unsafe_align);
  __temp476v=10;
  __temp_errcode=alloc__temp398v(&__temp475v__unsafe_ptr,&__temp475v__unsafe_size,&__temp475v__unsafe_align,__temp476v,&__temp477v__buffer__unsafe_ptr,&__temp477v__buffer__unsafe_size,&__temp477v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp477v__buffer__unsafe_ptr;
  points__unsafe_size=__temp477v__buffer__unsafe_size;
  points__unsafe_align=__temp477v__buffer__unsafe_align;
  __temp478v=0;
  __temp_errcode=mutget__temp441v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp478v,&__temp479v____temp444v____temp395v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp480v=1.0;
  __temp481v=2.0;
  __temp482v=3.0;
  Point3D__temp467v(__temp480v,__temp481v,__temp482v,&__temp483v__plane__x,&__temp483v__plane__y,&__temp483v__z);
  if(!__temp479v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp479v____temp444v____temp395v__to,&__temp483v__plane__x,8);
  if(!__temp479v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp479v____temp444v____temp395v__to+8,&__temp483v__plane__y,8);
  if(!__temp479v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp479v____temp444v____temp395v__to+16,&__temp483v__z,8);
  __temp484v=1;
  __temp_errcode=mutget__temp441v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp484v,&__temp485v____temp444v____temp395v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp486v=1.0;
  __temp487v=2.0;
  __temp488v=3.0;
  Point3D__temp467v(__temp486v,__temp487v,__temp488v,&__temp489v__plane__x,&__temp489v__plane__y,&__temp489v__z);
  if(!__temp485v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp485v____temp444v____temp395v__to,&__temp489v__plane__x,8);
  if(!__temp485v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp485v____temp444v____temp395v__to+8,&__temp489v__plane__y,8);
  if(!__temp485v____temp444v____temp395v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp485v____temp444v____temp395v__to+16,&__temp489v__z,8);
  __temp490v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp490v__unsafe_size=points__unsafe_size;
  __temp490v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp453v(&__temp490v__unsafe_ptr,&__temp490v__unsafe_size,&__temp490v__unsafe_align,&__temp494v__x,&__temp494v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp494v__x;
  sums__y=__temp494v__y;
  print__temp342v(sums__x);
  print__temp342v(sums__y);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int main() {main__temp472v();return 0;}