#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void Point3D__temp_buffer__buffer__temp459v(void** __temp483v, unsigned long long* __temp484v, unsigned long long* __temp485v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=24;
  __temp_return:
  *__temp483v=unsafe_ptr;
  *__temp484v=unsafe_size;
  *__temp485v=unsafe_align;
}

static inline void false__temp7v(int* __temp486v) {
  int value=0;
  __temp_return:
  *__temp486v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp487v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp487v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp488v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp488v=__temp85v____temp26v__value;
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

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp490v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp490v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp491v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp491v=z;
}

static inline void zero__temp386v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to);
}

static inline int alloc__temp382v(unsigned long long bytes, void** __temp492v) {
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
  *__temp492v=allocated;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp391v(void** __temp493v, unsigned long long* __temp494v, unsigned long long* __temp495v, unsigned long long size, void** __temp496v, unsigned long long* __temp497v, unsigned long long* __temp498v) {
  void* buffer__unsafe_ptr=*__temp493v;
  unsigned long long buffer__unsafe_size=*__temp494v;
  unsigned long long buffer__unsafe_align=*__temp495v;
  int __temp392v__z=0;
  unsigned long long __temp393v=0;
  int __temp394v__z=0;
  unsigned long long __temp395v=0;
  unsigned long long __temp396v__z=0;
  unsigned long long __temp398v=0;
  int __temp399v__z=0;
  unsigned long long __temp400v__z=0;
  unsigned long long bytes=0;
  void* __temp401v__allocated=0;
  unsigned long long __temp402v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp392v__z);
  if(__temp392v__z){
  __temp393v=0;
  neq__temp300v(size,__temp393v,&__temp394v__z);
  if(__temp394v__z){
  __temp395v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp396v__z);
  zero__temp386v(buffer__unsafe_ptr,__temp395v,__temp396v__z);
  }
  goto __temp_return;
  }
  __temp398v=0;
  neq__temp300v(buffer__unsafe_size,__temp398v,&__temp399v__z);
  if(__temp399v__z){
  __temp_errcode=6;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp400v__z);
  bytes=__temp400v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp382v(bytes,&__temp401v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp401v__allocated;
  __temp402v=0;
  zero__temp386v(buffer__unsafe_ptr,__temp402v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp493v=buffer__unsafe_ptr;
  *__temp494v=buffer__unsafe_size;
  *__temp495v=buffer__unsafe_align;
  *__temp496v=buffer__unsafe_ptr;
  *__temp497v=buffer__unsafe_size;
  *__temp498v=buffer__unsafe_align;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp499v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp499v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp500v) {
  __temp_return:
  *__temp500v=to;
}

static inline void add__temp387v(void* allocated, unsigned long long offset, void** __temp501v) {
  void* element=0;
  void* __temp388v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp501v=__temp388v__to;
}

static inline int mutget__temp429v(void** __temp502v, unsigned long long* __temp503v, unsigned long long* __temp504v, unsigned long long i, void** __temp505v) {
  void* buffer__unsafe_ptr=*__temp502v;
  unsigned long long buffer__unsafe_size=*__temp503v;
  unsigned long long buffer__unsafe_align=*__temp504v;
  int __temp430v__z=0;
  unsigned long long __temp431v__z=0;
  void* __temp432v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp430v__z);
  if(__temp430v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp431v__z);
  add__temp387v(buffer__unsafe_ptr,__temp431v__z,&__temp432v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp502v=buffer__unsafe_ptr;
  *__temp503v=buffer__unsafe_size;
  *__temp504v=buffer__unsafe_align;
  *__temp505v=__temp432v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void Point2D__temp438v(double x, double y, double* __temp506v, double* __temp507v) {
  goto __temp_return;
  __temp_return:
  *__temp506v=x;
  *__temp507v=y;
}

static inline void Point3D__temp455v(double x, double y, double z, double* __temp508v, double* __temp509v, double* __temp510v) {
  double __temp456v__x=0;
  double __temp456v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp438v(x,y,&__temp456v__x,&__temp456v__y);
  plane__x=__temp456v__x;
  plane__y=__temp456v__y;
  goto __temp_return;
  __temp_return:
  *__temp508v=plane__x;
  *__temp509v=plane__y;
  *__temp510v=z;
}

static inline void len__temp437v(void** __temp511v, unsigned long long* __temp512v, unsigned long long* __temp513v, unsigned long long* __temp514v) {
  void* buffer__unsafe_ptr=*__temp511v;
  unsigned long long buffer__unsafe_size=*__temp512v;
  unsigned long long buffer__unsafe_align=*__temp513v;
  goto __temp_return;
  __temp_return:
  *__temp511v=buffer__unsafe_ptr;
  *__temp512v=buffer__unsafe_size;
  *__temp513v=buffer__unsafe_align;
  *__temp514v=buffer__unsafe_size;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp515v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp515v=z;
}

static inline int get__temp433v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp516v) {
  int __temp434v__z=0;
  unsigned long long __temp435v__z=0;
  void* __temp436v____temp388v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp434v__z);
  if(__temp434v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp435v__z);
  add__temp387v(buffer__unsafe_ptr,__temp435v__z,&__temp436v____temp388v__to);
  goto __temp_return;
  __temp_return:
  *__temp516v=__temp436v____temp388v__to;
  return 0;
  __temp_failure:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp517v) {
  int __temp60v=0;
  int __temp61v____temp26v__value=0;
  not__temp25v(__temp60v,&__temp61v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp517v=__temp61v____temp26v__value;
}

static inline void add__temp86v(double x, double y, double* __temp518v) {
  int __temp87v____temp61v____temp26v__value=0;
  double z=0;
  is_different__temp59v(x,y,&__temp87v____temp61v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp518v=z;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp519v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp519v=z;
}

static inline int sum__temp441v(void** __temp520v, unsigned long long* __temp521v, unsigned long long* __temp522v, double* __temp523v, double* __temp524v) {
  void* v__unsafe_ptr=*__temp520v;
  unsigned long long v__unsafe_size=*__temp521v;
  unsigned long long v__unsafe_align=*__temp522v;
  double __temp442v=0;
  double x=0;
  double __temp443v=0;
  double y=0;
  unsigned long long __temp444v=0;
  unsigned long long i=0;
  unsigned long long __temp445v__buffer__unsafe_size=0;
  int __temp446v__z=0;
  void* __temp447v____temp436v____temp388v__to=0;
  double __temp448v__x=0;
  double __temp448v__y=0;
  double __temp449v__z=0;
  void* __temp450v____temp436v____temp388v__to=0;
  double __temp451v__x=0;
  double __temp451v__y=0;
  double __temp452v__z=0;
  unsigned long long __temp453v=0;
  unsigned long long __temp454v__z=0;
  int __temp_errcode=0;
  __temp442v=0.0;
  x=__temp442v;
  __temp443v=0.0;
  y=__temp443v;
  __temp444v=0;
  i=__temp444v;
  while(1){
  len__temp437v(&v__unsafe_ptr,&v__unsafe_size,&v__unsafe_align,&__temp445v__buffer__unsafe_size);
  lt__temp180v(i,__temp445v__buffer__unsafe_size,&__temp446v__z);
  if(!__temp446v__z)break;
  __temp_errcode=get__temp433v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp447v____temp436v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp447v____temp436v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp448v__x,(char*)__temp447v____temp436v____temp388v__to,8);
  if(!__temp447v____temp436v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp448v__y,(char*)__temp447v____temp436v____temp388v__to+8,8);
  add__temp86v(x,__temp448v__x,&__temp449v__z);
  x=__temp449v__z;
  __temp_errcode=get__temp433v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp450v____temp436v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp450v____temp436v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp451v__x,(char*)__temp450v____temp436v____temp388v__to,8);
  if(!__temp450v____temp436v____temp388v__to){
  goto __temp_failure;
  }
  memcpy(&__temp451v__y,(char*)__temp450v____temp436v____temp388v__to+8,8);
  add__temp86v(y,__temp451v__y,&__temp452v__z);
  y=__temp452v__z;
  __temp453v=1;
  add__temp108v(i,__temp453v,&__temp454v__z);
  i=__temp454v__z;
  }
  goto __temp_return;
  __temp_return:
  *__temp520v=v__unsafe_ptr;
  *__temp521v=v__unsafe_size;
  *__temp522v=v__unsafe_align;
  *__temp523v=x;
  *__temp524v=y;
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

static inline int main__temp458v() {
  void* __temp461v__unsafe_ptr=0;
  unsigned long long __temp461v__unsafe_size=0;
  unsigned long long __temp461v__unsafe_align=0;
  unsigned long long __temp462v=0;
  void* __temp463v__buffer__unsafe_ptr=0;
  unsigned long long __temp463v__buffer__unsafe_size=0;
  unsigned long long __temp463v__buffer__unsafe_align=0;
  void* points__unsafe_ptr=0;
  unsigned long long points__unsafe_size=0;
  unsigned long long points__unsafe_align=0;
  unsigned long long __temp464v=0;
  void* __temp465v____temp432v____temp388v__to=0;
  double __temp466v=0;
  double __temp467v=0;
  double __temp468v=0;
  double __temp469v__plane__x=0;
  double __temp469v__plane__y=0;
  double __temp469v__z=0;
  unsigned long long __temp470v=0;
  void* __temp471v____temp432v____temp388v__to=0;
  double __temp472v=0;
  double __temp473v=0;
  double __temp474v=0;
  double __temp475v__plane__x=0;
  double __temp475v__plane__y=0;
  double __temp475v__z=0;
  void* __temp476v__unsafe_ptr=0;
  unsigned long long __temp476v__unsafe_size=0;
  unsigned long long __temp476v__unsafe_align=0;
  double __temp480v__x=0;
  double __temp480v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  Point3D__temp_buffer__buffer__temp459v(&__temp461v__unsafe_ptr,&__temp461v__unsafe_size,&__temp461v__unsafe_align);
  __temp462v=10;
  __temp_errcode=alloc__temp391v(&__temp461v__unsafe_ptr,&__temp461v__unsafe_size,&__temp461v__unsafe_align,__temp462v,&__temp463v__buffer__unsafe_ptr,&__temp463v__buffer__unsafe_size,&__temp463v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp463v__buffer__unsafe_ptr;
  points__unsafe_size=__temp463v__buffer__unsafe_size;
  points__unsafe_align=__temp463v__buffer__unsafe_align;
  __temp464v=0;
  __temp_errcode=mutget__temp429v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp464v,&__temp465v____temp432v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp466v=1.0;
  __temp467v=2.0;
  __temp468v=3.0;
  Point3D__temp455v(__temp466v,__temp467v,__temp468v,&__temp469v__plane__x,&__temp469v__plane__y,&__temp469v__z);
  if(!__temp465v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp465v____temp432v____temp388v__to,&__temp469v__plane__x,8);
  if(!__temp465v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp465v____temp432v____temp388v__to+8,&__temp469v__plane__y,8);
  if(!__temp465v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp465v____temp432v____temp388v__to+16,&__temp469v__z,8);
  __temp470v=1;
  __temp_errcode=mutget__temp429v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp470v,&__temp471v____temp432v____temp388v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp472v=1.0;
  __temp473v=2.0;
  __temp474v=3.0;
  Point3D__temp455v(__temp472v,__temp473v,__temp474v,&__temp475v__plane__x,&__temp475v__plane__y,&__temp475v__z);
  if(!__temp471v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp471v____temp432v____temp388v__to,&__temp475v__plane__x,8);
  if(!__temp471v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp471v____temp432v____temp388v__to+8,&__temp475v__plane__y,8);
  if(!__temp471v____temp432v____temp388v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp471v____temp432v____temp388v__to+16,&__temp475v__z,8);
  __temp476v__unsafe_ptr=((char*)points__unsafe_ptr)+0;
  __temp476v__unsafe_size=points__unsafe_size;
  __temp476v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp441v(&__temp476v__unsafe_ptr,&__temp476v__unsafe_size,&__temp476v__unsafe_align,&__temp480v__x,&__temp480v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp480v__x;
  sums__y=__temp480v__y;
  print__temp337v(sums__x);
  print__temp337v(sums__y);
  return 0;
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp458v();return 0;}