#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp563v(void** __temp592v, unsigned long long* __temp593v, unsigned long long* __temp594v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp592v=unsafe_ptr;
  *__temp593v=unsafe_size;
  *__temp594v=unsafe_align;
}

static inline void false__temp7v(int* __temp595v) {
  int value=0;
  *__temp595v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp596v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp596v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp597v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp597v=__temp85v__;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp598v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp598v=z;
}

static inline void free__temp417v(void** __temp599v) {
  void* allocated=*__temp599v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp599v=allocated;
}

static inline void free__temp423v(void** __temp600v, unsigned long long* __temp601v, unsigned long long* __temp602v, void** __temp603v, unsigned long long* __temp604v, unsigned long long* __temp605v) {
  void* buffer__unsafe_ptr=*__temp600v;
  unsigned long long buffer__unsafe_size=*__temp601v;
  unsigned long long buffer__unsafe_align=*__temp602v;
  unsigned long long __temp424v=0;
  int __temp425v__=0;
  unsigned long long __temp426v=0;
  __temp424v=0;
  eq__temp276v(buffer__unsafe_size,__temp424v,&__temp425v__);
  if(__temp425v__){
  goto __temp_return;
  }
  __temp426v=0;
  buffer__unsafe_size=__temp426v;
  free__temp417v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp600v=buffer__unsafe_ptr;
  *__temp601v=buffer__unsafe_size;
  *__temp602v=buffer__unsafe_align;
  *__temp603v=buffer__unsafe_ptr;
  *__temp604v=buffer__unsafe_size;
  *__temp605v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp606v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp606v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp607v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp607v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp608v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp608v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp609v, unsigned long long* __temp610v, unsigned long long* __temp611v, unsigned long long size, void** __temp612v, unsigned long long* __temp613v, unsigned long long* __temp614v) {
  void* buffer__unsafe_ptr=*__temp609v;
  unsigned long long buffer__unsafe_size=*__temp610v;
  unsigned long long buffer__unsafe_align=*__temp611v;
  unsigned long long __temp429v=0;
  int __temp430v__=0;
  int __temp433v__=0;
  unsigned long long __temp434v=0;
  int __temp435v__=0;
  unsigned long long __temp436v=0;
  unsigned long long __temp437v__=0;
  unsigned long long __temp439v=0;
  int __temp440v__=0;
  unsigned long long __temp441v__=0;
  unsigned long long bytes=0;
  void* __temp442v__=0;
  unsigned long long __temp443v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp433v__);
  if(__temp433v__){
  __temp434v=0;
  neq__temp300v(size,__temp434v,&__temp435v__);
  if(__temp435v__){
  __temp436v=0;
  mul__temp132v(buffer__unsafe_align,size,&__temp437v__);
  zero__temp418v(buffer__unsafe_ptr,__temp436v,__temp437v__);
  }
  goto __temp_return;
  }
  __temp439v=0;
  neq__temp300v(buffer__unsafe_size,__temp439v,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp132v(buffer__unsafe_align,size,&__temp441v__);
  bytes=__temp441v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp414v(bytes,&__temp442v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp442v__;
  __temp443v=0;
  zero__temp418v(buffer__unsafe_ptr,__temp443v,bytes);
  __temp_return:
  *__temp609v=buffer__unsafe_ptr;
  *__temp610v=buffer__unsafe_size;
  *__temp611v=buffer__unsafe_align;
  *__temp612v=buffer__unsafe_ptr;
  *__temp613v=buffer__unsafe_size;
  *__temp614v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp615v) {
  *__temp615v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp616v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp416v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp11v(new_allocated,allocated__unsafe_ptr,&__temp416v__);
  *__temp616v=__temp416v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp617v) {
  int __temp181v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v__);
  z=x<y?1:0;
  *__temp617v=z;
}

int resize__temp445v(void** __temp622v, unsigned long long* __temp623v, unsigned long long* __temp624v, unsigned long long size, void** __temp625v, unsigned long long* __temp626v, unsigned long long* __temp627v) {
  void* buffer__unsafe_ptr=*__temp622v;
  unsigned long long buffer__unsafe_size=*__temp623v;
  unsigned long long buffer__unsafe_align=*__temp624v;
  int __temp446v__=0;
  unsigned long long __temp447v=0;
  int __temp448v__=0;
  void* __temp449v__unsafe_ptr=0;
  unsigned long long __temp449v__unsafe_size=0;
  unsigned long long __temp449v__unsafe_align=0;
  unsigned long long __temp450v=0;
  int __temp451v__=0;
  void* __temp452v__unsafe_ptr=0;
  unsigned long long __temp452v__unsafe_size=0;
  unsigned long long __temp452v__unsafe_align=0;
  unsigned long long __temp454v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp455v__=0;
  unsigned long long bytes=0;
  void* __temp456v__=0;
  int __temp457v__=0;
  unsigned long long __temp620v=0;
  int __temp621v=0;
  int __temp_errcode=0;
  eq__temp276v(buffer__unsafe_size,size,&__temp446v__);
  if(__temp446v__){
  goto __temp_return;
  }
  __temp447v=0;
  eq__temp276v(size,__temp447v,&__temp448v__);
  if(__temp448v__){
  free__temp423v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp449v__unsafe_ptr,&__temp449v__unsafe_size,&__temp449v__unsafe_align);
  buffer__unsafe_ptr=__temp449v__unsafe_ptr;
  buffer__unsafe_size=__temp449v__unsafe_size;
  buffer__unsafe_align=__temp449v__unsafe_align;
  goto __temp_return;
  }
  __temp450v=0;
  eq__temp276v(buffer__unsafe_size,__temp450v,&__temp451v__);
  if(__temp451v__){
  __temp_errcode=alloc__temp428v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp452v__unsafe_ptr,&__temp452v__unsafe_size,&__temp452v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp452v__unsafe_ptr;
  buffer__unsafe_size=__temp452v__unsafe_size;
  buffer__unsafe_align=__temp452v__unsafe_align;
  goto __temp_return;
  }
  mul__temp132v(buffer__unsafe_size,buffer__unsafe_align,&__temp454v__);
  prev_bytes=__temp454v__;
  buffer__unsafe_size=size;
  mul__temp132v(buffer__unsafe_align,size,&__temp455v__);
  bytes=__temp455v__;
  __temp_errcode=realloc__temp415v(buffer__unsafe_ptr,bytes,&__temp456v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp456v__;
  lt__temp180v(prev_bytes,bytes,&__temp457v__);
  if(__temp457v__){
  zero__temp418v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp622v=buffer__unsafe_ptr;
  *__temp623v=buffer__unsafe_size;
  *__temp624v=buffer__unsafe_align;
  *__temp625v=buffer__unsafe_ptr;
  *__temp626v=buffer__unsafe_size;
  *__temp627v=buffer__unsafe_align;
  
  __temp_failure:__temp620v=0;
  neq__temp300v(__temp452v__unsafe_size,__temp620v,&__temp621v);
  if(__temp621v){
  __temp452v__unsafe_size=0;
  free__temp417v(&__temp452v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp628v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp628v=z;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp629v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp629v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp630v) {
  int __temp478v__=0;
  unsigned long long __temp479v__=0;
  void* __temp480v__=0;
  int __temp_errcode=0;
  ge__temp252v(i,buffer__unsafe_size,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp132v(i,buffer__unsafe_align,&__temp479v__);
  add__temp419v(buffer__unsafe_ptr,__temp479v__,&__temp480v__);
  *__temp630v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp631v) {
  int __temp60v=0;
  int __temp61v__=0;
  not__temp25v(__temp60v,&__temp61v__);
  *__temp631v=__temp61v__;
}

static inline void lt__temp158v(double x, double y, int* __temp632v) {
  int __temp159v__=0;
  int z=0;
  is_different__temp59v(x,y,&__temp159v__);
  z=x<y?1:0;
  *__temp632v=z;
}

static inline int test__temp573v(void** __temp633v, unsigned long long* __temp634v, unsigned long long* __temp635v, int* __temp636v) {
  void* arr__unsafe_ptr=*__temp633v;
  unsigned long long arr__unsafe_size=*__temp634v;
  unsigned long long arr__unsafe_align=*__temp635v;
  unsigned long long __temp574v=0;
  void* __temp575v__=0;
  double __temp576v__z=0;
  unsigned long long __temp577v=0;
  void* __temp578v__=0;
  double __temp579v__z=0;
  int __temp580v__=0;
  int __temp_errcode=0;
  __temp574v=0;
  __temp_errcode=get__temp477v(arr__unsafe_ptr,arr__unsafe_size,arr__unsafe_align,__temp574v,&__temp575v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp575v__){
  goto __temp_failure;
  }
  memcpy(&__temp576v__z,(char*)__temp575v__,8);
  __temp577v=1;
  __temp_errcode=get__temp477v(arr__unsafe_ptr,arr__unsafe_size,arr__unsafe_align,__temp577v,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v__){
  goto __temp_failure;
  }
  memcpy(&__temp579v__z,(char*)__temp578v__,8);
  lt__temp158v(__temp576v__z,__temp579v__z,&__temp580v__);
  *__temp633v=arr__unsafe_ptr;
  *__temp634v=arr__unsafe_size;
  *__temp635v=arr__unsafe_align;
  *__temp636v=__temp580v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp359v(int value) {
  const char* __temp361v=0;
  const char* endl=0;
  __temp361v="\n";
  endl=__temp361v;
  printf("%s%s",value? "true":"false",endl);
}

static inline void point__temp_buffer__buffer__temp557v(void** __temp637v, unsigned long long* __temp638v, unsigned long long* __temp639v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=0;
  *__temp637v=unsafe_ptr;
  *__temp638v=unsafe_size;
  *__temp639v=unsafe_align;
}

static inline void len__temp481v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp640v) {
  *__temp640v=buffer__unsafe_size;
}

static inline void test__temp559v(void** __temp641v, unsigned long long* __temp642v, unsigned long long* __temp643v, unsigned long long* __temp644v) {
  void* ps__unsafe_ptr=*__temp641v;
  unsigned long long ps__unsafe_size=*__temp642v;
  unsigned long long ps__unsafe_align=*__temp643v;
  unsigned long long __temp560v__=0;
  len__temp481v(ps__unsafe_ptr,ps__unsafe_size,ps__unsafe_align,&__temp560v__);
  *__temp641v=ps__unsafe_ptr;
  *__temp642v=ps__unsafe_size;
  *__temp643v=ps__unsafe_align;
  *__temp644v=__temp560v__;
}

static inline void print__temp354v(unsigned long long value) {
  const char* __temp356v=0;
  const char* endl=0;
  __temp356v="\n";
  endl=__temp356v;
  printf("%llu%s",value,endl);
}

static inline int main__temp581v() {
  void* __temp582v__unsafe_ptr=0;
  unsigned long long __temp582v__unsafe_size=0;
  unsigned long long __temp582v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp583v=0;
  void* __temp584v__unsafe_ptr=0;
  unsigned long long __temp584v__unsafe_size=0;
  unsigned long long __temp584v__unsafe_align=0;
  int __temp585v__=0;
  void* __temp587v__unsafe_ptr=0;
  unsigned long long __temp587v__unsafe_size=0;
  unsigned long long __temp587v__unsafe_align=0;
  unsigned long long __temp588v=0;
  void* __temp589v__unsafe_ptr=0;
  unsigned long long __temp589v__unsafe_size=0;
  unsigned long long __temp589v__unsafe_align=0;
  unsigned long long __temp590v__=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp563v(&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_align);
  x__unsafe_ptr=__temp582v__unsafe_ptr;
  x__unsafe_size=__temp582v__unsafe_size;
  x__unsafe_align=__temp582v__unsafe_align;
  __temp583v=10;
  __temp_errcode=resize__temp445v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp583v,&__temp584v__unsafe_ptr,&__temp584v__unsafe_size,&__temp584v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp584v__unsafe_ptr;
  x__unsafe_size=__temp584v__unsafe_size;
  x__unsafe_align=__temp584v__unsafe_align;
  __temp_errcode=test__temp573v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,&__temp585v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp359v(__temp585v__);
  point__temp_buffer__buffer__temp557v(&__temp587v__unsafe_ptr,&__temp587v__unsafe_size,&__temp587v__unsafe_align);
  __temp588v=2;
  __temp_errcode=resize__temp445v(&__temp587v__unsafe_ptr,&__temp587v__unsafe_size,&__temp587v__unsafe_align,__temp588v,&__temp589v__unsafe_ptr,&__temp589v__unsafe_size,&__temp589v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test__temp559v(&__temp589v__unsafe_ptr,&__temp589v__unsafe_size,&__temp589v__unsafe_align,&__temp590v__);
  print__temp354v(__temp590v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp581v();return 0;}