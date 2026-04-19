#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp464v(void** __temp499v, unsigned long long* __temp500v, unsigned long long* __temp501v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp499v=unsafe_ptr;
  *__temp500v=unsafe_size;
  *__temp501v=unsafe_align;
}

static inline void false__temp7v(int* __temp502v) {
  int value=0;
  __temp_return:
  *__temp502v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp503v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp503v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp504v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp504v=__temp85v____temp26v__value;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp505v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp505v=z;
}

static inline void free__temp401v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp407v(void** __temp506v, unsigned long long* __temp507v, unsigned long long* __temp508v, void** __temp509v, unsigned long long* __temp510v, unsigned long long* __temp511v) {
  void* buffer__unsafe_ptr=*__temp506v;
  unsigned long long buffer__unsafe_size=*__temp507v;
  unsigned long long buffer__unsafe_align=*__temp508v;
  unsigned long long __temp408v=0;
  int __temp409v__z=0;
  unsigned long long __temp410v=0;
  __temp408v=0;
  eq__temp276v(buffer__unsafe_size,__temp408v,&__temp409v__z);
  if(__temp409v__z){
  goto __temp_return;
  }
  __temp410v=0;
  buffer__unsafe_size=__temp410v;
  free__temp401v(buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp506v=buffer__unsafe_ptr;
  *__temp507v=buffer__unsafe_size;
  *__temp508v=buffer__unsafe_align;
  *__temp509v=buffer__unsafe_ptr;
  *__temp510v=buffer__unsafe_size;
  *__temp511v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp512v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp512v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp513v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp513v=z;
}

static inline void zero__temp402v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp398v(unsigned long long bytes, void** __temp514v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp514v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp412v(void** __temp515v, unsigned long long* __temp516v, unsigned long long* __temp517v, unsigned long long size, void** __temp518v, unsigned long long* __temp519v, unsigned long long* __temp520v) {
  void* buffer__unsafe_ptr=*__temp515v;
  unsigned long long buffer__unsafe_size=*__temp516v;
  unsigned long long buffer__unsafe_align=*__temp517v;
  void* __temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp413v__buffer__unsafe_size=0;
  unsigned long long __temp413v__buffer__unsafe_align=0;
  int __temp414v__z=0;
  unsigned long long __temp415v=0;
  int __temp416v__z=0;
  unsigned long long __temp417v=0;
  unsigned long long __temp418v__z=0;
  unsigned long long __temp420v=0;
  int __temp421v__z=0;
  unsigned long long __temp422v__z=0;
  unsigned long long bytes=0;
  void* __temp423v__allocated=0;
  unsigned long long __temp424v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp414v__z);
  if(__temp414v__z){
  __temp415v=0;
  neq__temp300v(size,__temp415v,&__temp416v__z);
  if(__temp416v__z){
  __temp417v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp418v__z);
  zero__temp402v(buffer__unsafe_ptr,__temp417v,__temp418v__z);
  }
  goto __temp_return;
  }
  __temp420v=0;
  neq__temp300v(buffer__unsafe_size,__temp420v,&__temp421v__z);
  if(__temp421v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp422v__z);
  bytes=__temp422v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp398v(bytes,&__temp423v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp423v__allocated;
  __temp424v=0;
  zero__temp402v(buffer__unsafe_ptr,__temp424v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp515v=buffer__unsafe_ptr;
  *__temp516v=buffer__unsafe_size;
  *__temp517v=buffer__unsafe_align;
  *__temp518v=buffer__unsafe_ptr;
  *__temp519v=buffer__unsafe_size;
  *__temp520v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp521v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp521v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp522v) {
  __temp_return:
  *__temp522v=to;
}

static inline void add__temp403v(void* allocated, unsigned long long offset, void** __temp523v) {
  void* element=0;
  void* __temp404v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp404v__to);
  goto __temp_return;
  __temp_return:
  *__temp523v=__temp404v__to;
}

static inline int mutget__temp454v(void** __temp524v, unsigned long long* __temp525v, unsigned long long* __temp526v, unsigned long long i, void** __temp527v) {
  void* buffer__unsafe_ptr=*__temp524v;
  unsigned long long buffer__unsafe_size=*__temp525v;
  unsigned long long buffer__unsafe_align=*__temp526v;
  int __temp455v__z=0;
  unsigned long long __temp456v__z=0;
  void* __temp457v____temp404v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp455v__z);
  if(__temp455v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp456v__z);
  add__temp403v(buffer__unsafe_ptr,__temp456v__z,&__temp457v____temp404v__to);
  goto __temp_return;
  __temp_return:
  *__temp524v=buffer__unsafe_ptr;
  *__temp525v=buffer__unsafe_size;
  *__temp526v=buffer__unsafe_align;
  *__temp527v=__temp457v____temp404v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int get__temp458v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp528v) {
  int __temp459v__z=0;
  unsigned long long __temp460v__z=0;
  void* __temp461v____temp404v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp459v__z);
  if(__temp459v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp460v__z);
  add__temp403v(buffer__unsafe_ptr,__temp460v__z,&__temp461v____temp404v__to);
  goto __temp_return;
  __temp_return:
  *__temp528v=__temp461v____temp404v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp344v(double value) {
  int __temp345v=0;
  const char* __temp346v=0;
  const char* endl=0;
  __temp346v="\n";
  endl=__temp346v;
  printf("%.6f%s",value,endl);
}

static inline void print__temp337v(const char* value, const char* endl) {
  int __temp338v=0;
  printf("%s%s",value,endl);
}

static inline void len__temp462v(void** __temp529v, unsigned long long* __temp530v, unsigned long long* __temp531v, unsigned long long* __temp532v) {
  void* buffer__unsafe_ptr=*__temp529v;
  unsigned long long buffer__unsafe_size=*__temp530v;
  unsigned long long buffer__unsafe_align=*__temp531v;
  goto __temp_return;
  __temp_return:
  *__temp529v=buffer__unsafe_ptr;
  *__temp530v=buffer__unsafe_size;
  *__temp531v=buffer__unsafe_align;
  *__temp532v=buffer__unsafe_size;
}

static inline void print__temp354v(unsigned long long value) {
  int __temp355v=0;
  const char* __temp356v=0;
  const char* endl=0;
  __temp356v="\n";
  endl=__temp356v;
  printf("%llu%s",value,endl);
}

static inline int test1__temp463v(void** __temp533v, unsigned long long* __temp534v, unsigned long long* __temp535v) {
  void* __temp466v__unsafe_ptr=0;
  unsigned long long __temp466v__unsafe_size=0;
  unsigned long long __temp466v__unsafe_align=0;
  unsigned long long __temp467v=0;
  void* __temp468v__buffer__unsafe_ptr=0;
  unsigned long long __temp468v__buffer__unsafe_size=0;
  unsigned long long __temp468v__buffer__unsafe_align=0;
  void* __temp469v____temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp469v____temp413v__buffer__unsafe_size=0;
  unsigned long long __temp469v____temp413v__buffer__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp470v=0;
  void* __temp471v____temp457v____temp404v__to=0;
  double __temp472v=0;
  unsigned long long __temp473v=0;
  void* __temp474v____temp457v____temp404v__to=0;
  double __temp475v=0;
  unsigned long long __temp476v=0;
  void* __temp477v____temp461v____temp404v__to=0;
  double __temp478v__z=0;
  const char* __temp480v=0;
  const char* __temp481v=0;
  unsigned long long __temp483v__buffer__unsafe_size=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp464v(&__temp466v__unsafe_ptr,&__temp466v__unsafe_size,&__temp466v__unsafe_align);
  __temp467v=2;
  __temp_errcode=alloc__temp412v(&__temp466v__unsafe_ptr,&__temp466v__unsafe_size,&__temp466v__unsafe_align,__temp467v,&__temp468v__buffer__unsafe_ptr,&__temp468v__buffer__unsafe_size,&__temp468v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp468v__buffer__unsafe_ptr;
  x__unsafe_size=__temp468v__buffer__unsafe_size;
  x__unsafe_align=__temp468v__buffer__unsafe_align;
  __temp470v=0;
  __temp_errcode=mutget__temp454v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp470v,&__temp471v____temp457v____temp404v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp472v=1.0;
  if(!__temp471v____temp457v____temp404v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp471v____temp457v____temp404v__to,&__temp472v,8);
  __temp473v=1;
  __temp_errcode=mutget__temp454v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp473v,&__temp474v____temp457v____temp404v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp475v=2.0;
  if(!__temp474v____temp457v____temp404v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp474v____temp457v____temp404v__to,&__temp475v,8);
  __temp476v=1;
  __temp_errcode=get__temp458v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp476v,&__temp477v____temp461v____temp404v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp477v____temp461v____temp404v__to){
  goto __temp_failure;
  }
  memcpy(&__temp478v__z,(char*)__temp477v____temp461v____temp404v__to,8);
  print__temp344v(__temp478v__z);
  goto __temp_return;
  __temp_return:
  *__temp533v=x__unsafe_ptr;
  *__temp534v=x__unsafe_size;
  *__temp535v=x__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int test2__temp485v(void** __temp536v, unsigned long long* __temp537v, unsigned long long* __temp538v, void** __temp539v, unsigned long long* __temp540v, unsigned long long* __temp541v, void** __temp542v, unsigned long long* __temp543v, unsigned long long* __temp544v) {
  void* __temp486v__x__unsafe_ptr=0;
  unsigned long long __temp486v__x__unsafe_size=0;
  unsigned long long __temp486v__x__unsafe_align=0;
  void* __temp487v____temp469v____temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp487v____temp469v____temp413v__buffer__unsafe_size=0;
  unsigned long long __temp487v____temp469v____temp413v__buffer__unsafe_align=0;
  const char* __temp487v____temp480v=0;
  const char* __temp487v____temp481v=0;
  unsigned long long __temp487v____temp483v__buffer__unsafe_size=0;
  void* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  void* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  void* __temp488v__unsafe_ptr=0;
  unsigned long long __temp488v__unsafe_size=0;
  unsigned long long __temp488v__unsafe_align=0;
  unsigned long long __temp489v=0;
  void* __temp490v__buffer__unsafe_ptr=0;
  unsigned long long __temp490v__buffer__unsafe_size=0;
  unsigned long long __temp490v__buffer__unsafe_align=0;
  void* __temp491v____temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp491v____temp413v__buffer__unsafe_size=0;
  unsigned long long __temp491v____temp413v__buffer__unsafe_align=0;
  void* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  int __temp_errcode=0;
  __temp_errcode=test1__temp463v(&__temp486v__x__unsafe_ptr,&__temp486v__x__unsafe_size,&__temp486v__x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp486v__x__unsafe_ptr;
  t__unsafe_size=__temp486v__x__unsafe_size;
  t__unsafe_align=__temp486v__x__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp464v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align);
  __temp489v=3;
  __temp_errcode=alloc__temp412v(&__temp488v__unsafe_ptr,&__temp488v__unsafe_size,&__temp488v__unsafe_align,__temp489v,&__temp490v__buffer__unsafe_ptr,&__temp490v__buffer__unsafe_size,&__temp490v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp490v__buffer__unsafe_ptr;
  k__unsafe_size=__temp490v__buffer__unsafe_size;
  k__unsafe_align=__temp490v__buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp536v=t__unsafe_ptr;
  *__temp537v=t__unsafe_size;
  *__temp538v=t__unsafe_align;
  *__temp539v=j__unsafe_ptr;
  *__temp540v=j__unsafe_size;
  *__temp541v=j__unsafe_align;
  *__temp542v=k__unsafe_ptr;
  *__temp543v=k__unsafe_size;
  *__temp544v=k__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int main__temp492v() {
  void* __temp493v__t__unsafe_ptr=0;
  unsigned long long __temp493v__t__unsafe_size=0;
  unsigned long long __temp493v__t__unsafe_align=0;
  void* __temp493v__j__unsafe_ptr=0;
  unsigned long long __temp493v__j__unsafe_size=0;
  unsigned long long __temp493v__j__unsafe_align=0;
  void* __temp493v__k__unsafe_ptr=0;
  unsigned long long __temp493v__k__unsafe_size=0;
  unsigned long long __temp493v__k__unsafe_align=0;
  void* __temp494v____temp487v____temp469v____temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp494v____temp487v____temp469v____temp413v__buffer__unsafe_size=0;
  unsigned long long __temp494v____temp487v____temp469v____temp413v__buffer__unsafe_align=0;
  const char* __temp494v____temp487v____temp480v=0;
  const char* __temp494v____temp487v____temp481v=0;
  unsigned long long __temp494v____temp487v____temp483v__buffer__unsafe_size=0;
  void* __temp494v____temp491v____temp413v__buffer__unsafe_ptr=0;
  unsigned long long __temp494v____temp491v____temp413v__buffer__unsafe_size=0;
  unsigned long long __temp494v____temp491v____temp413v__buffer__unsafe_align=0;
  void* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  void* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  void* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp495v=0;
  void* __temp496v____temp461v____temp404v__to=0;
  double __temp497v__z=0;
  int __temp_errcode=0;
  __temp_errcode=test2__temp485v(&__temp493v__t__unsafe_ptr,&__temp493v__t__unsafe_size,&__temp493v__t__unsafe_align,&__temp493v__j__unsafe_ptr,&__temp493v__j__unsafe_size,&__temp493v__j__unsafe_align,&__temp493v__k__unsafe_ptr,&__temp493v__k__unsafe_size,&__temp493v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp493v__t__unsafe_ptr;
  t__t__unsafe_size=__temp493v__t__unsafe_size;
  t__t__unsafe_align=__temp493v__t__unsafe_align;
  t__j__unsafe_ptr=__temp493v__j__unsafe_ptr;
  t__j__unsafe_size=__temp493v__j__unsafe_size;
  t__j__unsafe_align=__temp493v__j__unsafe_align;
  t__k__unsafe_ptr=__temp493v__k__unsafe_ptr;
  t__k__unsafe_size=__temp493v__k__unsafe_size;
  t__k__unsafe_align=__temp493v__k__unsafe_align;
  __temp495v=1;
  __temp_errcode=get__temp458v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp495v,&__temp496v____temp461v____temp404v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp496v____temp461v____temp404v__to){
  goto __temp_failure;
  }
  memcpy(&__temp497v__z,(char*)__temp496v____temp461v____temp404v__to,8);
  print__temp344v(__temp497v__z);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp407v(&__temp493v__k__unsafe_ptr,&__temp493v__k__unsafe_size,&__temp493v__k__unsafe_align,&__temp494v____temp491v____temp413v__buffer__unsafe_ptr,&__temp494v____temp491v____temp413v__buffer__unsafe_size,&__temp494v____temp491v____temp413v__buffer__unsafe_align);
  __temp494v____temp487v____temp480v="going to deallocate of size: ";
  __temp494v____temp487v____temp481v="";
  print__temp337v(__temp494v____temp487v____temp480v,__temp494v____temp487v____temp481v);
  len__temp462v(&__temp493v__t__unsafe_ptr,&__temp493v__t__unsafe_size,&__temp493v__t__unsafe_align,&__temp494v____temp487v____temp483v__buffer__unsafe_size);
  print__temp354v(__temp494v____temp487v____temp483v__buffer__unsafe_size);
  free__temp407v(&__temp493v__t__unsafe_ptr,&__temp493v__t__unsafe_size,&__temp493v__t__unsafe_align,&__temp494v____temp487v____temp469v____temp413v__buffer__unsafe_ptr,&__temp494v____temp487v____temp469v____temp413v__buffer__unsafe_size,&__temp494v____temp487v____temp469v____temp413v__buffer__unsafe_align);
  
  return __temp_errcode;
}

int main() {main__temp492v();return 0;}