#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void char__temp_buffer__buffer__temp554v(void** __temp561v, unsigned long long* __temp562v, unsigned long long* __temp563v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp561v=unsafe_ptr;
  *__temp562v=unsafe_size;
  *__temp563v=unsafe_align;
}

static inline void len__temp481v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp564v) {
  *__temp564v=buffer__unsafe_size;
}

static inline void list__temp488v(void** __temp565v, unsigned long long* __temp566v, unsigned long long* __temp567v, void** __temp568v, unsigned long long* __temp569v, unsigned long long* __temp570v, unsigned long long* __temp571v) {
  void* buffer__unsafe_ptr=*__temp565v;
  unsigned long long buffer__unsafe_size=*__temp566v;
  unsigned long long buffer__unsafe_align=*__temp567v;
  unsigned long long __temp489v__=0;
  unsigned long long length=0;
  len__temp481v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp489v__);
  length=__temp489v__;
  *__temp565v=buffer__unsafe_ptr;
  *__temp566v=buffer__unsafe_size;
  *__temp567v=buffer__unsafe_align;
  *__temp568v=buffer__unsafe_ptr;
  *__temp569v=buffer__unsafe_size;
  *__temp570v=buffer__unsafe_align;
  *__temp571v=length;
}

static inline void char__temp_buffer__buffer__temp483v(void** __temp572v, unsigned long long* __temp573v, unsigned long long* __temp574v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp572v=unsafe_ptr;
  *__temp573v=unsafe_size;
  *__temp574v=unsafe_align;
}

static inline void false__temp7v(int* __temp575v) {
  int value=0;
  *__temp575v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp576v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp576v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp577v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp577v=__temp85v__;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp578v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp578v=z;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp579v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp579v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp580v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp580v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp581v) {
  *__temp581v=to;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp582v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp582v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp583v) {
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
  *__temp583v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp509v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char first, void** __temp584v, unsigned long long* __temp585v, unsigned long long* __temp586v, unsigned long long* __temp587v, unsigned long long* __temp588v, char* __temp589v) {
  *__temp584v=buf__unsafe_ptr;
  *__temp585v=buf__unsafe_size;
  *__temp586v=buf__unsafe_align;
  *__temp587v=pos;
  *__temp588v=length;
  *__temp589v=first;
}

static inline int str__temp510v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp590v, unsigned long long* __temp591v, unsigned long long* __temp592v, unsigned long long* __temp593v, unsigned long long* __temp594v, char* __temp595v) {
  unsigned long long __temp511v=0;
  int __temp512v__=0;
  void* __temp513v__=0;
  char __temp514v__value=0;
  char first=0;
  void* __temp515v__buf__unsafe_ptr=0;
  unsigned long long __temp515v__buf__unsafe_size=0;
  unsigned long long __temp515v__buf__unsafe_align=0;
  unsigned long long __temp515v__pos=0;
  unsigned long long __temp515v__length=0;
  char __temp515v__first=0;
  int __temp_errcode=0;
  __temp511v=0;
  neq__temp300v(length,__temp511v,&__temp512v__);
  if(__temp512v__){
  __temp_errcode=get__temp477v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp513v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp513v__){
  goto __temp_failure;
  }
  memcpy(&__temp514v__value,(char*)__temp513v__,1);
  first=__temp514v__value;
  }
  str__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp515v__buf__unsafe_ptr,&__temp515v__buf__unsafe_size,&__temp515v__buf__unsafe_align,&__temp515v__pos,&__temp515v__length,&__temp515v__first);
  *__temp590v=__temp515v__buf__unsafe_ptr;
  *__temp591v=__temp515v__buf__unsafe_size;
  *__temp592v=__temp515v__buf__unsafe_align;
  *__temp593v=__temp515v__pos;
  *__temp594v=__temp515v__length;
  *__temp595v=__temp515v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp516v(const char* c, void** __temp597v, unsigned long long* __temp598v, unsigned long long* __temp599v, unsigned long long* __temp600v, unsigned long long* __temp601v, char* __temp602v) {
  void* __temp517v__unsafe_ptr=0;
  unsigned long long __temp517v__unsafe_size=0;
  unsigned long long __temp517v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp518v=0;
  void* __temp519v__buf__unsafe_ptr=0;
  unsigned long long __temp519v__buf__unsafe_size=0;
  unsigned long long __temp519v__buf__unsafe_align=0;
  unsigned long long __temp519v__pos=0;
  unsigned long long __temp519v__length=0;
  char __temp519v__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp483v(&__temp517v__unsafe_ptr,&__temp517v__unsafe_size,&__temp517v__unsafe_align);
  buf__unsafe_ptr=__temp517v__unsafe_ptr;
  buf__unsafe_size=__temp517v__unsafe_size;
  buf__unsafe_align=__temp517v__unsafe_align;
  buf__unsafe_ptr=c;
  length=strlen(c);
  buf__unsafe_size=length+1;
  __temp518v=0;
  __temp_errcode=str__temp510v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp518v,length,&__temp519v__buf__unsafe_ptr,&__temp519v__buf__unsafe_size,&__temp519v__buf__unsafe_align,&__temp519v__pos,&__temp519v__length,&__temp519v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp597v=__temp519v__buf__unsafe_ptr;
  *__temp598v=__temp519v__buf__unsafe_size;
  *__temp599v=__temp519v__buf__unsafe_align;
  *__temp600v=__temp519v__pos;
  *__temp601v=__temp519v__length;
  *__temp602v=__temp519v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp520v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__pos, unsigned long long s__length, char s__first, unsigned long long* __temp603v) {
  *__temp603v=s__length;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp604v) {
  int __temp109v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v__);
  z=x+y;
  *__temp604v=z;
}

static inline void div__temp156v(unsigned long long x, unsigned long long y, unsigned long long* __temp605v) {
  int __temp157v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp157v__);
  z=x/y;
  *__temp605v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp606v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp606v=z;
}

static inline void free__temp417v(void** __temp607v) {
  void* allocated=*__temp607v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp607v=allocated;
}

static inline void free__temp423v(void** __temp608v, unsigned long long* __temp609v, unsigned long long* __temp610v, void** __temp611v, unsigned long long* __temp612v, unsigned long long* __temp613v) {
  void* buffer__unsafe_ptr=*__temp608v;
  unsigned long long buffer__unsafe_size=*__temp609v;
  unsigned long long buffer__unsafe_align=*__temp610v;
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
  *__temp608v=buffer__unsafe_ptr;
  *__temp609v=buffer__unsafe_size;
  *__temp610v=buffer__unsafe_align;
  *__temp611v=buffer__unsafe_ptr;
  *__temp612v=buffer__unsafe_size;
  *__temp613v=buffer__unsafe_align;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp614v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp614v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp615v, unsigned long long* __temp616v, unsigned long long* __temp617v, unsigned long long size, void** __temp618v, unsigned long long* __temp619v, unsigned long long* __temp620v) {
  void* buffer__unsafe_ptr=*__temp615v;
  unsigned long long buffer__unsafe_size=*__temp616v;
  unsigned long long buffer__unsafe_align=*__temp617v;
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
  *__temp615v=buffer__unsafe_ptr;
  *__temp616v=buffer__unsafe_size;
  *__temp617v=buffer__unsafe_align;
  *__temp618v=buffer__unsafe_ptr;
  *__temp619v=buffer__unsafe_size;
  *__temp620v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp621v) {
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
  *__temp621v=__temp416v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp622v) {
  int __temp181v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v__);
  z=x<y?1:0;
  *__temp622v=z;
}

int resize__temp445v(void** __temp627v, unsigned long long* __temp628v, unsigned long long* __temp629v, unsigned long long size, void** __temp630v, unsigned long long* __temp631v, unsigned long long* __temp632v) {
  void* buffer__unsafe_ptr=*__temp627v;
  unsigned long long buffer__unsafe_size=*__temp628v;
  unsigned long long buffer__unsafe_align=*__temp629v;
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
  unsigned long long __temp625v=0;
  int __temp626v=0;
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
  *__temp627v=buffer__unsafe_ptr;
  *__temp628v=buffer__unsafe_size;
  *__temp629v=buffer__unsafe_align;
  *__temp630v=buffer__unsafe_ptr;
  *__temp631v=buffer__unsafe_size;
  *__temp632v=buffer__unsafe_align;
  
  __temp_failure:__temp625v=0;
  neq__temp300v(__temp452v__unsafe_size,__temp625v,&__temp626v);
  if(__temp626v){
  __temp452v__unsafe_size=0;
  free__temp417v(&__temp452v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline int copy__temp521v(void** __temp633v, unsigned long long* __temp634v, unsigned long long* __temp635v, unsigned long long* __temp636v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__pos, unsigned long long other__length, char other__first, void** __temp637v, unsigned long long* __temp638v, unsigned long long* __temp639v, unsigned long long* __temp640v, unsigned long long* __temp641v, char* __temp642v) {
  void* buf__unsafe_ptr=*__temp633v;
  unsigned long long buf__unsafe_size=*__temp634v;
  unsigned long long buf__unsafe_align=*__temp635v;
  unsigned long long pos=*__temp636v;
  unsigned long long __temp522v__=0;
  unsigned long long __temp523v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp524v__=0;
  int __temp525v__=0;
  unsigned long long prev_pos=0;
  void* __temp526v__buf__unsafe_ptr=0;
  unsigned long long __temp526v__buf__unsafe_size=0;
  unsigned long long __temp526v__buf__unsafe_align=0;
  unsigned long long __temp526v__pos=0;
  unsigned long long __temp526v__length=0;
  char __temp526v__first=0;
  int __temp_errcode=0;
  len__temp520v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__pos,other__length,other__first,&__temp522v__);
  add__temp108v(pos,__temp522v__,&__temp523v__);
  next_pos=__temp523v__;
  len__temp481v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp524v__);
  ge__temp252v(next_pos,__temp524v__,&__temp525v__);
  if(__temp525v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__pos,other__length*sizeof(char));
  prev_pos=pos;
  pos=next_pos;
  str__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__length,other__first,&__temp526v__buf__unsafe_ptr,&__temp526v__buf__unsafe_size,&__temp526v__buf__unsafe_align,&__temp526v__pos,&__temp526v__length,&__temp526v__first);
  *__temp633v=buf__unsafe_ptr;
  *__temp634v=buf__unsafe_size;
  *__temp635v=buf__unsafe_align;
  *__temp636v=pos;
  *__temp637v=__temp526v__buf__unsafe_ptr;
  *__temp638v=__temp526v__buf__unsafe_size;
  *__temp639v=__temp526v__buf__unsafe_align;
  *__temp640v=__temp526v__pos;
  *__temp641v=__temp526v__length;
  *__temp642v=__temp526v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int copy__temp538v(void** __temp644v, unsigned long long* __temp645v, unsigned long long* __temp646v, unsigned long long* __temp647v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__pos, unsigned long long other__length, char other__first, void** __temp648v, unsigned long long* __temp649v, unsigned long long* __temp650v, unsigned long long* __temp651v, unsigned long long* __temp652v, char* __temp653v) {
  void* li__buffer__unsafe_ptr=*__temp644v;
  unsigned long long li__buffer__unsafe_size=*__temp645v;
  unsigned long long li__buffer__unsafe_align=*__temp646v;
  unsigned long long li__length=*__temp647v;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp539v__=0;
  unsigned long long __temp540v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp541v__=0;
  int __temp542v__=0;
  unsigned long long __temp543v=0;
  unsigned long long __temp544v__=0;
  unsigned long long __temp545v=0;
  unsigned long long __temp546v__=0;
  unsigned long long __temp547v__=0;
  void* __temp548v__unsafe_ptr=0;
  unsigned long long __temp548v__unsafe_size=0;
  unsigned long long __temp548v__unsafe_align=0;
  void* __temp549v__buf__unsafe_ptr=0;
  unsigned long long __temp549v__buf__unsafe_size=0;
  unsigned long long __temp549v__buf__unsafe_align=0;
  unsigned long long __temp549v__pos=0;
  unsigned long long __temp549v__length=0;
  char __temp549v__first=0;
  int __temp_errcode=0;
  prev_prev_length=li__length;
  len__temp520v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__pos,other__length,other__first,&__temp539v__);
  add__temp108v(li__length,__temp539v__,&__temp540v__);
  prev_length=__temp540v__;
  len__temp481v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp541v__);
  ge__temp252v(prev_length,__temp541v__,&__temp542v__);
  if(__temp542v__){
  __temp543v=2;
  div__temp156v(prev_length,__temp543v,&__temp544v__);
  __temp545v=1;
  add__temp108v(__temp544v__,__temp545v,&__temp546v__);
  add__temp108v(prev_length,__temp546v__,&__temp547v__);
  __temp_errcode=resize__temp445v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp547v__,&__temp548v__unsafe_ptr,&__temp548v__unsafe_size,&__temp548v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp548v__unsafe_ptr;
  li__buffer__unsafe_size=__temp548v__unsafe_size;
  li__buffer__unsafe_align=__temp548v__unsafe_align;
  }
  __temp_errcode=copy__temp521v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__pos,other__length,other__first,&__temp549v__buf__unsafe_ptr,&__temp549v__buf__unsafe_size,&__temp549v__buf__unsafe_align,&__temp549v__pos,&__temp549v__length,&__temp549v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp644v=li__buffer__unsafe_ptr;
  *__temp645v=li__buffer__unsafe_size;
  *__temp646v=li__buffer__unsafe_align;
  *__temp647v=li__length;
  *__temp648v=__temp549v__buf__unsafe_ptr;
  *__temp649v=__temp549v__buf__unsafe_size;
  *__temp650v=__temp549v__buf__unsafe_align;
  *__temp651v=__temp549v__pos;
  *__temp652v=__temp549v__length;
  *__temp653v=__temp549v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int copy__temp550v(void** __temp655v, unsigned long long* __temp656v, unsigned long long* __temp657v, unsigned long long* __temp658v, const char* other, void** __temp659v, unsigned long long* __temp660v, unsigned long long* __temp661v, unsigned long long* __temp662v, unsigned long long* __temp663v, char* __temp664v) {
  void* li__buffer__unsafe_ptr=*__temp655v;
  unsigned long long li__buffer__unsafe_size=*__temp656v;
  unsigned long long li__buffer__unsafe_align=*__temp657v;
  unsigned long long li__length=*__temp658v;
  void* __temp551v__buf__unsafe_ptr=0;
  unsigned long long __temp551v__buf__unsafe_size=0;
  unsigned long long __temp551v__buf__unsafe_align=0;
  unsigned long long __temp551v__pos=0;
  unsigned long long __temp551v__length=0;
  char __temp551v__first=0;
  void* __temp552v__buf__unsafe_ptr=0;
  unsigned long long __temp552v__buf__unsafe_size=0;
  unsigned long long __temp552v__buf__unsafe_align=0;
  unsigned long long __temp552v__pos=0;
  unsigned long long __temp552v__length=0;
  char __temp552v__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp516v(other,&__temp551v__buf__unsafe_ptr,&__temp551v__buf__unsafe_size,&__temp551v__buf__unsafe_align,&__temp551v__pos,&__temp551v__length,&__temp551v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp538v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp551v__buf__unsafe_ptr,__temp551v__buf__unsafe_size,__temp551v__buf__unsafe_align,__temp551v__pos,__temp551v__length,__temp551v__first,&__temp552v__buf__unsafe_ptr,&__temp552v__buf__unsafe_size,&__temp552v__buf__unsafe_align,&__temp552v__pos,&__temp552v__length,&__temp552v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp655v=li__buffer__unsafe_ptr;
  *__temp656v=li__buffer__unsafe_size;
  *__temp657v=li__buffer__unsafe_align;
  *__temp658v=li__length;
  *__temp659v=__temp552v__buf__unsafe_ptr;
  *__temp660v=__temp552v__buf__unsafe_size;
  *__temp661v=__temp552v__buf__unsafe_align;
  *__temp662v=__temp552v__pos;
  *__temp663v=__temp552v__length;
  *__temp664v=__temp552v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp530v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__pos, unsigned long long s__length, char s__first) {
  const char* __temp532v=0;
  const char* endl=0;
  __temp532v="\n";
  endl=__temp532v;
  printf("%.*s%s",(int)s__length,s__pos+(const char*)s__buf__unsafe_ptr,endl);
}

static inline int main__temp553v() {
  void* __temp556v__unsafe_ptr=0;
  unsigned long long __temp556v__unsafe_size=0;
  unsigned long long __temp556v__unsafe_align=0;
  void* __temp557v__buffer__unsafe_ptr=0;
  unsigned long long __temp557v__buffer__unsafe_size=0;
  unsigned long long __temp557v__buffer__unsafe_align=0;
  unsigned long long __temp557v__length=0;
  void* mem__buffer__unsafe_ptr=0;
  unsigned long long mem__buffer__unsafe_size=0;
  unsigned long long mem__buffer__unsafe_align=0;
  unsigned long long mem__length=0;
  const char* __temp558v=0;
  void* __temp559v__buf__unsafe_ptr=0;
  unsigned long long __temp559v__buf__unsafe_size=0;
  unsigned long long __temp559v__buf__unsafe_align=0;
  unsigned long long __temp559v__pos=0;
  unsigned long long __temp559v__length=0;
  char __temp559v__first=0;
  void* x__buf__unsafe_ptr=0;
  unsigned long long x__buf__unsafe_size=0;
  unsigned long long x__buf__unsafe_align=0;
  unsigned long long x__pos=0;
  unsigned long long x__length=0;
  char x__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp554v(&__temp556v__unsafe_ptr,&__temp556v__unsafe_size,&__temp556v__unsafe_align);
  list__temp488v(&__temp556v__unsafe_ptr,&__temp556v__unsafe_size,&__temp556v__unsafe_align,&__temp557v__buffer__unsafe_ptr,&__temp557v__buffer__unsafe_size,&__temp557v__buffer__unsafe_align,&__temp557v__length);
  mem__buffer__unsafe_ptr=__temp557v__buffer__unsafe_ptr;
  mem__buffer__unsafe_size=__temp557v__buffer__unsafe_size;
  mem__buffer__unsafe_align=__temp557v__buffer__unsafe_align;
  mem__length=__temp557v__length;
  __temp558v="hello world!";
  __temp_errcode=copy__temp550v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp558v,&__temp559v__buf__unsafe_ptr,&__temp559v__buf__unsafe_size,&__temp559v__buf__unsafe_align,&__temp559v__pos,&__temp559v__length,&__temp559v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__buf__unsafe_ptr=__temp559v__buf__unsafe_ptr;
  x__buf__unsafe_size=__temp559v__buf__unsafe_size;
  x__buf__unsafe_align=__temp559v__buf__unsafe_align;
  x__pos=__temp559v__pos;
  x__length=__temp559v__length;
  x__first=__temp559v__first;
  print__temp530v(x__buf__unsafe_ptr,x__buf__unsafe_size,x__buf__unsafe_align,x__pos,x__length,x__first);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp553v();return 0;}