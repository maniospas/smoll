#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp569v(void** __temp593v, unsigned long long* __temp594v, unsigned long long* __temp595v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  __temp_return:
  *__temp593v=unsafe_ptr;
  *__temp594v=unsafe_size;
  *__temp595v=unsafe_align;
}

static inline void len__temp478v(void** __temp596v, unsigned long long* __temp597v, unsigned long long* __temp598v, unsigned long long* __temp599v) {
  void* buffer__unsafe_ptr=*__temp596v;
  unsigned long long buffer__unsafe_size=*__temp597v;
  unsigned long long buffer__unsafe_align=*__temp598v;
  goto __temp_return;
  __temp_return:
  *__temp596v=buffer__unsafe_ptr;
  *__temp597v=buffer__unsafe_size;
  *__temp598v=buffer__unsafe_align;
  *__temp599v=buffer__unsafe_size;
}

static inline void list__temp485v(void** __temp600v, unsigned long long* __temp601v, unsigned long long* __temp602v, void** __temp603v, unsigned long long* __temp604v, unsigned long long* __temp605v, unsigned long long* __temp606v) {
  void* buffer__unsafe_ptr=*__temp600v;
  unsigned long long buffer__unsafe_size=*__temp601v;
  unsigned long long buffer__unsafe_align=*__temp602v;
  unsigned long long __temp486v__buffer__unsafe_size=0;
  unsigned long long length=0;
  len__temp478v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp486v__buffer__unsafe_size);
  length=__temp486v__buffer__unsafe_size;
  goto __temp_return;
  __temp_return:
  *__temp600v=buffer__unsafe_ptr;
  *__temp601v=buffer__unsafe_size;
  *__temp602v=buffer__unsafe_align;
  *__temp603v=buffer__unsafe_ptr;
  *__temp604v=buffer__unsafe_size;
  *__temp605v=buffer__unsafe_align;
  *__temp606v=length;
}

static inline void false__temp7v(int* __temp607v) {
  int value=0;
  __temp_return:
  *__temp607v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp608v) {
  int __temp26v__value=0;
  false__temp7v(&__temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp608v=__temp26v__value;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp609v) {
  int __temp84v=0;
  int __temp85v____temp26v__value=0;
  not__temp25v(__temp84v,&__temp85v____temp26v__value);
  goto __temp_return;
  __temp_return:
  *__temp609v=__temp85v____temp26v__value;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp610v) {
  int __temp253v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v____temp85v____temp26v__value);
  z=x>=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp610v=z;
}

static inline void div__temp156v(unsigned long long x, unsigned long long y, unsigned long long* __temp611v) {
  int __temp157v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp157v____temp85v____temp26v__value);
  z=x/y;
  goto __temp_return;
  __temp_return:
  *__temp611v=z;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp612v) {
  int __temp109v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v____temp85v____temp26v__value);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp612v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp613v) {
  int __temp277v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v____temp85v____temp26v__value);
  z=x==y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp613v=z;
}

static inline void free__temp417v(void* allocated) {
  if(allocated)free(allocated);
  allocated=0;
}

static inline void free__temp423v(void** __temp614v, unsigned long long* __temp615v, unsigned long long* __temp616v, void** __temp617v, unsigned long long* __temp618v, unsigned long long* __temp619v) {
  void* buffer__unsafe_ptr=*__temp614v;
  unsigned long long buffer__unsafe_size=*__temp615v;
  unsigned long long buffer__unsafe_align=*__temp616v;
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
  *__temp614v=buffer__unsafe_ptr;
  *__temp615v=buffer__unsafe_size;
  *__temp616v=buffer__unsafe_align;
  *__temp617v=buffer__unsafe_ptr;
  *__temp618v=buffer__unsafe_size;
  *__temp619v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp620v) {
  int __temp301v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v____temp85v____temp26v__value);
  z=x!=y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp620v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp621v) {
  int __temp133v____temp85v____temp26v__value=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v____temp85v____temp26v__value);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp621v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp622v) {
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
  *__temp622v=allocated;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp623v, unsigned long long* __temp624v, unsigned long long* __temp625v, unsigned long long size, void** __temp626v, unsigned long long* __temp627v, unsigned long long* __temp628v) {
  void* buffer__unsafe_ptr=*__temp623v;
  unsigned long long buffer__unsafe_size=*__temp624v;
  unsigned long long buffer__unsafe_align=*__temp625v;
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
  *__temp623v=buffer__unsafe_ptr;
  *__temp624v=buffer__unsafe_size;
  *__temp625v=buffer__unsafe_align;
  *__temp626v=buffer__unsafe_ptr;
  *__temp627v=buffer__unsafe_size;
  *__temp628v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp629v) {
  __temp_return:
  *__temp629v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp630v) {
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
  *__temp630v=__temp416v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp631v) {
  int __temp181v____temp85v____temp26v__value=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v____temp85v____temp26v__value);
  z=x<y?1:0;
  goto __temp_return;
  __temp_return:
  *__temp631v=z;
}

static inline int resize__temp442v(void** __temp632v, unsigned long long* __temp633v, unsigned long long* __temp634v, unsigned long long size, void** __temp635v, unsigned long long* __temp636v, unsigned long long* __temp637v) {
  void* buffer__unsafe_ptr=*__temp632v;
  unsigned long long buffer__unsafe_size=*__temp633v;
  unsigned long long buffer__unsafe_align=*__temp634v;
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
  *__temp632v=buffer__unsafe_ptr;
  *__temp633v=buffer__unsafe_size;
  *__temp634v=buffer__unsafe_align;
  *__temp635v=buffer__unsafe_ptr;
  *__temp636v=buffer__unsafe_size;
  *__temp637v=buffer__unsafe_align;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:free__temp423v(&__temp449v__buffer__unsafe_ptr,&__temp449v__buffer__unsafe_size,&__temp449v__buffer__unsafe_align,&__temp450v____temp429v__buffer__unsafe_ptr,&__temp450v____temp429v__buffer__unsafe_size,&__temp450v____temp429v__buffer__unsafe_align);
  
  return __temp_errcode;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp638v) {
  void* element=0;
  void* __temp420v__to=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__to);
  goto __temp_return;
  __temp_return:
  *__temp638v=__temp420v__to;
}

static inline int mutget__temp470v(void** __temp639v, unsigned long long* __temp640v, unsigned long long* __temp641v, unsigned long long i, void** __temp642v) {
  void* buffer__unsafe_ptr=*__temp639v;
  unsigned long long buffer__unsafe_size=*__temp640v;
  unsigned long long buffer__unsafe_align=*__temp641v;
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
  *__temp639v=buffer__unsafe_ptr;
  *__temp640v=buffer__unsafe_size;
  *__temp641v=buffer__unsafe_align;
  *__temp642v=__temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int push__temp494v(void** __temp643v, unsigned long long* __temp644v, unsigned long long* __temp645v, unsigned long long* __temp646v, void** __temp647v) {
  void* l__buffer__unsafe_ptr=*__temp643v;
  unsigned long long l__buffer__unsafe_size=*__temp644v;
  unsigned long long l__buffer__unsafe_align=*__temp645v;
  unsigned long long l__length=*__temp646v;
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
  *__temp643v=l__buffer__unsafe_ptr;
  *__temp644v=l__buffer__unsafe_size;
  *__temp645v=l__buffer__unsafe_align;
  *__temp646v=l__length;
  *__temp647v=__temp505v____temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline void print__temp352v(unsigned long long value, const char* endl) {
  int __temp353v=0;
  printf("%llu%s",value,endl);
}

static inline int mutget__temp491v(void** __temp648v, unsigned long long* __temp649v, unsigned long long* __temp650v, unsigned long long* __temp651v, unsigned long long pos, void** __temp652v) {
  void* l__buffer__unsafe_ptr=*__temp648v;
  unsigned long long l__buffer__unsafe_size=*__temp649v;
  unsigned long long l__buffer__unsafe_align=*__temp650v;
  unsigned long long l__length=*__temp651v;
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
  *__temp648v=l__buffer__unsafe_ptr;
  *__temp649v=l__buffer__unsafe_size;
  *__temp650v=l__buffer__unsafe_align;
  *__temp651v=l__length;
  *__temp652v=__temp493v____temp473v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int get__temp474v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp653v) {
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
  *__temp653v=__temp477v____temp420v__to;
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

static inline int get__temp488v(void** __temp654v, unsigned long long* __temp655v, unsigned long long* __temp656v, unsigned long long* __temp657v, unsigned long long pos, void** __temp658v) {
  void* l__buffer__unsafe_ptr=*__temp654v;
  unsigned long long l__buffer__unsafe_size=*__temp655v;
  unsigned long long l__buffer__unsafe_align=*__temp656v;
  unsigned long long l__length=*__temp657v;
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
  *__temp654v=l__buffer__unsafe_ptr;
  *__temp655v=l__buffer__unsafe_size;
  *__temp656v=l__buffer__unsafe_align;
  *__temp657v=l__length;
  *__temp658v=__temp490v____temp477v____temp420v__to;
  
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
  double __temp573v=0;
  void* __temp574v____temp505v____temp473v____temp420v__to=0;
  double __temp575v=0;
  void* __temp576v____temp505v____temp473v____temp420v__to=0;
  double __temp577v=0;
  void* __temp578v____temp505v____temp473v____temp420v__to=0;
  unsigned long long __temp579v__buffer__unsafe_size=0;
  const char* __temp580v=0;
  unsigned long long __temp582v=0;
  void* __temp583v____temp493v____temp473v____temp420v__to=0;
  double __temp584v=0;
  unsigned long long __temp585v=0;
  void* __temp586v____temp490v____temp477v____temp420v__to=0;
  double __temp587v__z=0;
  unsigned long long __temp589v=0;
  void* __temp590v____temp490v____temp477v____temp420v__to=0;
  double __temp591v__z=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp569v(&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_align);
  list__temp485v(&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_align,&__temp572v__buffer__unsafe_ptr,&__temp572v__buffer__unsafe_size,&__temp572v__buffer__unsafe_align,&__temp572v__length);
  li__buffer__unsafe_ptr=__temp572v__buffer__unsafe_ptr;
  li__buffer__unsafe_size=__temp572v__buffer__unsafe_size;
  li__buffer__unsafe_align=__temp572v__buffer__unsafe_align;
  li__length=__temp572v__length;
  __temp573v=0.1;
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp574v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp574v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp574v____temp505v____temp473v____temp420v__to,&__temp573v,8);
  __temp575v=0.1;
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp576v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp576v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp576v____temp505v____temp473v____temp420v__to,&__temp575v,8);
  __temp577v=0.1;
  __temp_errcode=push__temp494v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,&__temp578v____temp505v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v____temp505v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp578v____temp505v____temp473v____temp420v__to,&__temp577v,8);
  len__temp478v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&__temp579v__buffer__unsafe_size);
  __temp580v=" buffer capacity\n";
  print__temp352v(__temp579v__buffer__unsafe_size,__temp580v);
  __temp582v=1;
  __temp_errcode=mutget__temp491v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp582v,&__temp583v____temp493v____temp473v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp584v=0.2;
  if(!__temp583v____temp493v____temp473v____temp420v__to){
  goto __temp_failure;
  }
  memcpy((char*)__temp583v____temp493v____temp473v____temp420v__to,&__temp584v,8);
  __temp585v=0;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp585v,&__temp586v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp586v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp587v__z,(char*)__temp586v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp587v__z);
  __temp589v=1;
  __temp_errcode=get__temp488v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp589v,&__temp590v____temp490v____temp477v____temp420v__to);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp590v____temp490v____temp477v____temp420v__to){
  goto __temp_failure;
  }
  memcpy(&__temp591v__z,(char*)__temp590v____temp490v____temp477v____temp420v__to,8);
  print__temp344v(__temp591v__z);
  
  goto __temp_final;
  __temp_failure:
  __temp_final:
  return __temp_errcode;
}

int main() {main__temp568v();return 0;}