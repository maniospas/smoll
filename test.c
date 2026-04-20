#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp569v(void** __temp601v, unsigned long long* __temp602v, unsigned long long* __temp603v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp601v=unsafe_ptr;
  *__temp602v=unsafe_size;
  *__temp603v=unsafe_align;
}

static inline void len__temp478v(void** __temp604v, unsigned long long* __temp605v, unsigned long long* __temp606v, unsigned long long* __temp607v) {
  void* buffer__unsafe_ptr=*__temp604v;
  unsigned long long buffer__unsafe_size=*__temp605v;
  unsigned long long buffer__unsafe_align=*__temp606v;
  goto __temp_return;
  __temp_return:
  *__temp604v=buffer__unsafe_ptr;
  *__temp605v=buffer__unsafe_size;
  *__temp606v=buffer__unsafe_align;
  *__temp607v=buffer__unsafe_size;
}

static inline void list__temp485v(void** __temp608v, unsigned long long* __temp609v, unsigned long long* __temp610v, void** __temp611v, unsigned long long* __temp612v, unsigned long long* __temp613v, unsigned long long* __temp614v) {
  void* buffer__unsafe_ptr=*__temp608v;
  unsigned long long buffer__unsafe_size=*__temp609v;
  unsigned long long buffer__unsafe_align=*__temp610v;
  unsigned long long __temp486v__buffer__unsafe_size=0;
  unsigned long long length=0;
  len__temp478v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp486v__buffer__unsafe_size);
  length=__temp486v__buffer__unsafe_size;
  goto __temp_return;
  __temp_return:
  *__temp608v=buffer__unsafe_ptr;
  *__temp609v=buffer__unsafe_size;
  *__temp610v=buffer__unsafe_align;
  *__temp611v=buffer__unsafe_ptr;
  *__temp612v=buffer__unsafe_size;
  *__temp613v=buffer__unsafe_align;
  *__temp614v=length;
}

static inline void false__temp7v(int* __temp615v) {
  int value=0;
  __temp_return:
  *__temp615v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp616v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp616v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp617v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp617v=__temp85v____temp26v__value;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp618v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp618v=z;
}

static inline void div__temp156v(unsigned long long x, unsigned long long y, unsigned long long* __temp619v) {
  int __temp157v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp157v____temp85v____temp26v__value);
  z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp619v=z;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp620v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp620v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp621v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp621v=z;
}

static inline void free__temp417v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp423v(void** __temp622v, unsigned long long* __temp623v, unsigned long long* __temp624v, void** __temp625v, unsigned long long* __temp626v, unsigned long long* __temp627v) {
  void* buffer__unsafe_ptr=*__temp622v;
  unsigned long long buffer__unsafe_size=*__temp623v;
  unsigned long long buffer__unsafe_align=*__temp624v;
  unsigned long long __temp424v=0;
  int __temp425v__z=0;
  unsigned long long __temp426v=0;
  __temp424v=0;
  eq__temp276v(buffer__unsafe_size,__temp424v,&__temp425v__z);
  if(__temp425v__z){
  goto __temp_return;
  }
  __temp426v=0;
  buffer__unsafe_size=__temp426v;
  free__temp417v(buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp622v=buffer__unsafe_ptr;
  *__temp623v=buffer__unsafe_size;
  *__temp624v=buffer__unsafe_align;
  *__temp625v=buffer__unsafe_ptr;
  *__temp626v=buffer__unsafe_size;
  *__temp627v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp628v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp628v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp629v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp629v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp630v) {
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
  *__temp630v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp631v, unsigned long long* __temp632v, unsigned long long* __temp633v, unsigned long long size, void** __temp634v, unsigned long long* __temp635v, unsigned long long* __temp636v) {
  void* buffer__unsafe_ptr=*__temp631v;
  unsigned long long buffer__unsafe_size=*__temp632v;
  unsigned long long buffer__unsafe_align=*__temp633v;
  void* __temp429v__buffer__unsafe_ptr=0;
  unsigned long long __temp429v__buffer__unsafe_size=0;
  unsigned long long __temp429v__buffer__unsafe_align=0;
  int __temp430v__z=0;
  unsigned long long __temp431v=0;
  int __temp432v__z=0;
  unsigned long long __temp433v=0;
  unsigned long long __temp434v__z=0;
  unsigned long long __temp436v=0;
  int __temp437v__z=0;
  unsigned long long __temp438v__z=0;
  unsigned long long bytes=0;
  void* __temp439v__allocated=0;
  unsigned long long __temp440v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp430v__z);
  if(__temp430v__z){
  __temp431v=0;
  neq__temp300v(size,__temp431v,&__temp432v__z);
  if(__temp432v__z){
  __temp433v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp434v__z);
  zero__temp418v(buffer__unsafe_ptr,__temp433v,__temp434v__z);
  }
  goto __temp_return;
  }
  __temp436v=0;
  neq__temp300v(buffer__unsafe_size,__temp436v,&__temp437v__z);
  if(__temp437v__z){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp438v__z);
  bytes=__temp438v__z;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp414v(bytes,&__temp439v__allocated);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp439v__allocated;
  __temp440v=0;
  zero__temp418v(buffer__unsafe_ptr,__temp440v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp631v=buffer__unsafe_ptr;
  *__temp632v=buffer__unsafe_size;
  *__temp633v=buffer__unsafe_align;
  *__temp634v=buffer__unsafe_ptr;
  *__temp635v=buffer__unsafe_size;
  *__temp636v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp637v) {
  __temp_return:
  *__temp637v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp638v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp416v__to=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated__unsafe_ptr,&__temp416v__to);
  goto __temp_return;
  __temp_return:
  *__temp638v=__temp416v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp639v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp639v=z;
}

static inline int resize__temp442v(void** __temp640v, unsigned long long* __temp641v, unsigned long long* __temp642v, unsigned long long size, void** __temp643v, unsigned long long* __temp644v, unsigned long long* __temp645v) {
  void* buffer__unsafe_ptr=*__temp640v;
  unsigned long long buffer__unsafe_size=*__temp641v;
  unsigned long long buffer__unsafe_align=*__temp642v;
  int __temp443v__z=0;
  unsigned long long __temp444v=0;
  int __temp445v__z=0;
  void* __temp446v__buffer__unsafe_ptr=0;
  unsigned long long __temp446v__buffer__unsafe_size=0;
  unsigned long long __temp446v__buffer__unsafe_align=0;
  unsigned long long __temp447v=0;
  int __temp448v__z=0;
  void* __temp449v__buffer__unsafe_ptr=0;
  unsigned long long __temp449v__buffer__unsafe_size=0;
  unsigned long long __temp449v__buffer__unsafe_align=0;
  void* __temp450v____temp429v__buffer__unsafe_ptr=0;
  unsigned long long __temp450v____temp429v__buffer__unsafe_size=0;
  unsigned long long __temp450v____temp429v__buffer__unsafe_align=0;
  unsigned long long __temp451v__z=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp452v__z=0;
  unsigned long long bytes=0;
  void* __temp453v____temp416v__to=0;
  int __temp454v__z=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp443v__z);
  if(__temp443v__z){
  goto __temp_return;
  }
  __temp444v=0;
  eq__temp276v(size,__temp444v,&__temp445v__z);
  if(__temp445v__z){
  free__temp423v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp446v__buffer__unsafe_ptr,&__temp446v__buffer__unsafe_size,&__temp446v__buffer__unsafe_align);
  buffer__unsafe_ptr=__temp446v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp446v__buffer__unsafe_size;
  buffer__unsafe_align=__temp446v__buffer__unsafe_align;
  goto __temp_return;
  }
  __temp447v=0;
  eq__temp276v(buffer__unsafe_size,__temp447v,&__temp448v__z);
  if(__temp448v__z){
  __temp_errcode=alloc__temp428v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__buffer__unsafe_ptr;
  buffer__unsafe_size=__temp449v__buffer__unsafe_size;
  buffer__unsafe_align=__temp449v__buffer__unsafe_align;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__unsafe_align,&__temp451v__z);
  prev_bytes=__temp451v__z;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__unsafe_align,size,&__temp452v__z);
  bytes=__temp452v__z;
  __temp_errcode=realloc__temp415v(buffer__unsafe_ptr,bytes,&__temp453v____temp416v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp453v____temp416v__to;
  lt__temp180v(prev_bytes,bytes,&__temp454v__z);
  if(__temp454v__z){
  zero__temp418v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  __temp_return:
  *__temp640v=buffer__unsafe_ptr;
  *__temp641v=buffer__unsafe_size;
  *__temp642v=buffer__unsafe_align;
  *__temp643v=buffer__unsafe_ptr;
  *__temp644v=buffer__unsafe_size;
  *__temp645v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp423v(&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align,&__temp450v____temp429v__buffer__unsafe_ptr,&__temp450v____temp429v__buffer__unsafe_size,&__temp450v____temp429v__buffer__unsafe_align);
  
  return __temp_errcode;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp646v) {
  void* element=0;
  void* __temp420v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp646v=__temp420v__to;
}

static inline int mutget__temp470v(void** __temp647v, unsigned long long* __temp648v, unsigned long long* __temp649v, unsigned long long i, void** __temp650v) {
  void* buffer__unsafe_ptr=*__temp647v;
  unsigned long long buffer__unsafe_size=*__temp648v;
  unsigned long long buffer__unsafe_align=*__temp649v;
  int __temp471v__z=0;
  unsigned long long __temp472v__z=0;
  void* __temp473v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp471v__z);
  if(__temp471v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp472v__z);
  add__temp419v(buffer__unsafe_ptr,__temp472v__z,&__temp473v____temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp647v=buffer__unsafe_ptr;
  *__temp648v=buffer__unsafe_size;
  *__temp649v=buffer__unsafe_align;
  *__temp650v=__temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int push__temp494v(void** __temp651v, unsigned long long* __temp652v, unsigned long long* __temp653v, unsigned long long* __temp654v, void** __temp655v) {
  void* l__buffer__unsafe_ptr=*__temp651v;
  unsigned long long l__buffer__unsafe_size=*__temp652v;
  unsigned long long l__buffer__unsafe_align=*__temp653v;
  unsigned long long l__length=*__temp654v;
  unsigned long long prev_length=0;
  unsigned long long __temp495v__buffer__unsafe_size=0;
  int __temp496v__z=0;
  unsigned long long __temp497v=0;
  unsigned long long __temp498v__z=0;
  unsigned long long __temp499v=0;
  unsigned long long __temp500v__z=0;
  unsigned long long __temp501v__z=0;
  void* __temp502v__buffer__unsafe_ptr=0;
  unsigned long long __temp502v__buffer__unsafe_size=0;
  unsigned long long __temp502v__buffer__unsafe_align=0;
  unsigned long long __temp503v=0;
  unsigned long long __temp504v__z=0;
  void* __temp505v____temp473v____temp420v__to=0;
  int __temp_errcode=0;
  prev_length=l__length;
  len__temp478v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,&__temp495v__buffer__unsafe_size);
  ge__temp252v(prev_length,__temp495v__buffer__unsafe_size,&__temp496v__z);
  if(__temp496v__z){
  __temp497v=2;
  div__temp156v(prev_length,__temp497v,&__temp498v__z);
  __temp499v=1;
  add__temp108v(__temp498v__z,__temp499v,&__temp500v__z);
  add__temp108v(prev_length,__temp500v__z,&__temp501v__z);
  __temp_errcode=resize__temp442v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,__temp501v__z,&__temp502v__buffer__unsafe_ptr,&__temp502v__buffer__unsafe_size,&__temp502v__buffer__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  l__buffer__unsafe_ptr=__temp502v__buffer__unsafe_ptr;
  l__buffer__unsafe_size=__temp502v__buffer__unsafe_size;
  l__buffer__unsafe_align=__temp502v__buffer__unsafe_align;
  }
  __temp503v=1;
  add__temp108v(prev_length,__temp503v,&__temp504v__z);
  l__length=__temp504v__z;
  __temp_errcode=mutget__temp470v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,prev_length,&__temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp651v=l__buffer__unsafe_ptr;
  *__temp652v=l__buffer__unsafe_size;
  *__temp653v=l__buffer__unsafe_align;
  *__temp654v=l__length;
  *__temp655v=__temp505v____temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp352v(unsigned long long value, const char* endl) {
  int __temp353v=0;
  printf("%llu%s",value,endl);
}

static inline int get__temp474v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp656v) {
  int __temp475v__z=0;
  unsigned long long __temp476v__z=0;
  void* __temp477v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp475v__z);
  if(__temp475v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp476v__z);
  add__temp419v(buffer__unsafe_ptr,__temp476v__z,&__temp477v____temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp656v=__temp477v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int get__temp488v(void** __temp657v, unsigned long long* __temp658v, unsigned long long* __temp659v, unsigned long long* __temp660v, unsigned long long pos, void** __temp661v) {
  void* l__buffer__unsafe_ptr=*__temp657v;
  unsigned long long l__buffer__unsafe_size=*__temp658v;
  unsigned long long l__buffer__unsafe_align=*__temp659v;
  unsigned long long l__length=*__temp660v;
  int __temp489v__z=0;
  void* __temp490v____temp477v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(pos,l__length,&__temp489v__z);
  if(__temp489v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  __temp_errcode=get__temp474v(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_align,pos,&__temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp657v=l__buffer__unsafe_ptr;
  *__temp658v=l__buffer__unsafe_size;
  *__temp659v=l__buffer__unsafe_align;
  *__temp660v=l__length;
  *__temp661v=__temp490v____temp477v____temp420v__to;
  
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

static inline int mutget__temp491v(void** __temp662v, unsigned long long* __temp663v, unsigned long long* __temp664v, unsigned long long* __temp665v, unsigned long long pos, void** __temp666v) {
  void* l__buffer__unsafe_ptr=*__temp662v;
  unsigned long long l__buffer__unsafe_size=*__temp663v;
  unsigned long long l__buffer__unsafe_align=*__temp664v;
  unsigned long long l__length=*__temp665v;
  int __temp492v__z=0;
  void* __temp493v____temp473v____temp420v__to=0;
  int __temp_errcode=0;
  ge__temp252v(pos,l__length,&__temp492v__z);
  if(__temp492v__z){
  __temp_errcode=8;
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp470v(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_align,pos,&__temp493v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  __temp_return:
  *__temp662v=l__buffer__unsafe_ptr;
  *__temp663v=l__buffer__unsafe_size;
  *__temp664v=l__buffer__unsafe_align;
  *__temp665v=l__length;
  *__temp666v=__temp493v____temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int main__temp568v() {
  void* __temp571v__unsafe_ptr=0;
  unsigned long long __temp571v__unsafe_size=0;
  unsigned long long __temp571v__unsafe_align=0;
  void* __temp572v__buffer__unsafe_ptr=0;
  unsigned long long __temp572v__buffer__unsafe_size=0;
  unsigned long long __temp572v__buffer__unsafe_align=0;
  unsigned long long __temp572v__length=0;
  void* li__buffer__unsafe_ptr=0;
  unsigned long long li__buffer__unsafe_size=0;
  unsigned long long li__buffer__unsafe_align=0;
  unsigned long long li__length=0;
  void* __temp573v____temp505v____temp473v____temp420v__to=0;
  double __temp574v=0;
  void* __temp575v____temp505v____temp473v____temp420v__to=0;
  double __temp576v=0;
  void* __temp577v____temp505v____temp473v____temp420v__to=0;
  double __temp578v=0;
  unsigned long long __temp579v__buffer__unsafe_size=0;
  const char* __temp580v=0;
  unsigned long long __temp582v=0;
  void* __temp583v____temp490v____temp477v____temp420v__to=0;
  double __temp584v__z=0;
  unsigned long long __temp586v=0;
  void* __temp587v____temp490v____temp477v____temp420v__to=0;
  double __temp588v__z=0;
  unsigned long long __temp590v=0;
  void* __temp591v____temp493v____temp473v____temp420v__to=0;
  double __temp592v=0;
  unsigned long long __temp593v=0;
  void* __temp594v____temp490v____temp477v____temp420v__to=0;
  double __temp595v__z=0;
  unsigned long long __temp597v=0;
  void* __temp598v____temp490v____temp477v____temp420v__to=0;
  double __temp599v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp569v(&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_align);
  list__temp485v(&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_align,&__temp572v__buffer__unsafe_ptr,&__temp572v__buffer__unsafe_size,&__temp572v__buffer__unsafe_align,&__temp572v__length);
  li__buffer__unsafe_ptr=__temp572v__buffer__unsafe_ptr;
  li__buffer__unsafe_size=__temp572v__buffer__unsafe_size;
  li__buffer__unsafe_align=__temp572v__buffer__unsafe_align;
  li__length=__temp572v__length;
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp573v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp574v=0.1;
  if(!__temp573v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp573v____temp505v____temp473v____temp420v__to,&__temp574v,8);
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp575v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp576v=0.1;
  if(!__temp575v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp575v____temp505v____temp473v____temp420v__to,&__temp576v,8);
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp577v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp578v=0.1;
  if(!__temp577v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp577v____temp505v____temp473v____temp420v__to,&__temp578v,8);
  len__temp478v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&__temp579v__buffer__unsafe_size);
  __temp580v=" buffer capacity\n";
  print__temp352v(__temp579v__buffer__unsafe_size,__temp580v);
  __temp582v=0;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp582v,&__temp583v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp583v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp584v__z,(char*)__temp583v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp584v__z);
  __temp586v=1;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp586v,&__temp587v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp587v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp588v__z,(char*)__temp587v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp588v__z);
  __temp590v=1;
  __temp_errcode=mutget__temp491v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp590v,&__temp591v____temp493v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp592v=0.2;
  if(!__temp591v____temp493v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp591v____temp493v____temp473v____temp420v__to,&__temp592v,8);
  __temp593v=1;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp593v,&__temp594v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp594v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp595v__z,(char*)__temp594v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp595v__z);
  __temp597v=2;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp597v,&__temp598v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp598v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp599v__z,(char*)__temp598v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp599v__z);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int main() {main__temp568v();return 0;}