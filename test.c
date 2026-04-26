#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void float__temp_buffer__buffer__temp556v(void** __temp580v, unsigned long long* __temp581v, unsigned long long* __temp582v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp580v=unsafe_ptr;
  *__temp581v=unsafe_size;
  *__temp582v=unsafe_align;
}

static inline void false__temp7v(int* __temp583v) {
  int value=0;
  *__temp583v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp584v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp584v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp585v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp585v=__temp85v__;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp586v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp586v=z;
}

static inline void free__temp417v(void** __temp587v) {
  void* allocated=*__temp587v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp587v=allocated;
}

static inline void free__temp423v(void** __temp588v, unsigned long long* __temp589v, unsigned long long* __temp590v, void** __temp591v, unsigned long long* __temp592v, unsigned long long* __temp593v) {
  void* buffer__unsafe_ptr=*__temp588v;
  unsigned long long buffer__unsafe_size=*__temp589v;
  unsigned long long buffer__unsafe_align=*__temp590v;
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
  *__temp588v=buffer__unsafe_ptr;
  *__temp589v=buffer__unsafe_size;
  *__temp590v=buffer__unsafe_align;
  *__temp591v=buffer__unsafe_ptr;
  *__temp592v=buffer__unsafe_size;
  *__temp593v=buffer__unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp594v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp594v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp595v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp595v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp596v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp596v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp597v, unsigned long long* __temp598v, unsigned long long* __temp599v, unsigned long long size, void** __temp600v, unsigned long long* __temp601v, unsigned long long* __temp602v) {
  void* buffer__unsafe_ptr=*__temp597v;
  unsigned long long buffer__unsafe_size=*__temp598v;
  unsigned long long buffer__unsafe_align=*__temp599v;
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
  *__temp597v=buffer__unsafe_ptr;
  *__temp598v=buffer__unsafe_size;
  *__temp599v=buffer__unsafe_align;
  *__temp600v=buffer__unsafe_ptr;
  *__temp601v=buffer__unsafe_size;
  *__temp602v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp603v) {
  *__temp603v=to;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp604v) {
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
  *__temp604v=__temp416v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp605v) {
  int __temp181v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v__);
  z=x<y?1:0;
  *__temp605v=z;
}

int resize__temp445v(void** __temp610v, unsigned long long* __temp611v, unsigned long long* __temp612v, unsigned long long size, void** __temp613v, unsigned long long* __temp614v, unsigned long long* __temp615v) {
  void* buffer__unsafe_ptr=*__temp610v;
  unsigned long long buffer__unsafe_size=*__temp611v;
  unsigned long long buffer__unsafe_align=*__temp612v;
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
  unsigned long long __temp608v=0;
  int __temp609v=0;
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
  *__temp610v=buffer__unsafe_ptr;
  *__temp611v=buffer__unsafe_size;
  *__temp612v=buffer__unsafe_align;
  *__temp613v=buffer__unsafe_ptr;
  *__temp614v=buffer__unsafe_size;
  *__temp615v=buffer__unsafe_align;
  
  __temp_failure:__temp608v=0;
  neq__temp300v(__temp452v__unsafe_size,__temp608v,&__temp609v);
  if(__temp609v){
  __temp452v__unsafe_size=0;
  free__temp417v(&__temp452v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp616v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp616v=z;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp617v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp617v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp618v) {
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
  *__temp618v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void is_different__temp59v(double x, double y, int* __temp619v) {
  int __temp60v=0;
  int __temp61v__=0;
  not__temp25v(__temp60v,&__temp61v__);
  *__temp619v=__temp61v__;
}

static inline void lt__temp158v(double x, double y, int* __temp620v) {
  int __temp159v__=0;
  int z=0;
  is_different__temp59v(x,y,&__temp159v__);
  z=x<y?1:0;
  *__temp620v=z;
}

static inline int test__temp558v(void** __temp621v, unsigned long long* __temp622v, unsigned long long* __temp623v, int* __temp624v) {
  void* arr__unsafe_ptr=*__temp621v;
  unsigned long long arr__unsafe_size=*__temp622v;
  unsigned long long arr__unsafe_align=*__temp623v;
  unsigned long long __temp559v=0;
  void* __temp560v__=0;
  double __temp561v__z=0;
  unsigned long long __temp562v=0;
  void* __temp563v__=0;
  double __temp564v__z=0;
  int __temp565v__=0;
  int __temp_errcode=0;
  __temp559v=0;
  __temp_errcode=get__temp477v(arr__unsafe_ptr,arr__unsafe_size,arr__unsafe_align,__temp559v,&__temp560v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp560v__){
  goto __temp_failure;
  }
  memcpy(&__temp561v__z,(char*)__temp560v__,8);
  __temp562v=1;
  __temp_errcode=get__temp477v(arr__unsafe_ptr,arr__unsafe_size,arr__unsafe_align,__temp562v,&__temp563v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp563v__){
  goto __temp_failure;
  }
  memcpy(&__temp564v__z,(char*)__temp563v__,8);
  lt__temp158v(__temp561v__z,__temp564v__z,&__temp565v__);
  *__temp621v=arr__unsafe_ptr;
  *__temp622v=arr__unsafe_size;
  *__temp623v=arr__unsafe_align;
  *__temp624v=__temp565v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp357v(int value) {
  const char* __temp359v=0;
  const char* endl=0;
  __temp359v="\n";
  endl=__temp359v;
  printf("%s%s",value? "true":"false",endl);
}

static inline int main__temp574v() {
  void* __temp575v__unsafe_ptr=0;
  unsigned long long __temp575v__unsafe_size=0;
  unsigned long long __temp575v__unsafe_align=0;
  void* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp576v=0;
  void* __temp577v__unsafe_ptr=0;
  unsigned long long __temp577v__unsafe_size=0;
  unsigned long long __temp577v__unsafe_align=0;
  int __temp578v__=0;
  int __temp_errcode=0;
  float__temp_buffer__buffer__temp556v(&__temp575v__unsafe_ptr,&__temp575v__unsafe_size,&__temp575v__unsafe_align);
  x__unsafe_ptr=__temp575v__unsafe_ptr;
  x__unsafe_size=__temp575v__unsafe_size;
  x__unsafe_align=__temp575v__unsafe_align;
  __temp576v=10;
  __temp_errcode=resize__temp445v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp576v,&__temp577v__unsafe_ptr,&__temp577v__unsafe_size,&__temp577v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=test__temp558v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp357v(__temp578v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp574v();return 0;}