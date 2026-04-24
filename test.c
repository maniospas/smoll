#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void char__temp_buffer__buffer__temp555v(void** __temp577v, unsigned long long* __temp578v, unsigned long long* __temp579v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp577v=unsafe_ptr;
  *__temp578v=unsafe_size;
  *__temp579v=unsafe_align;
}

static inline void len__temp481v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp580v) {
  *__temp580v=buffer__unsafe_size;
}

static inline void list__temp488v(void** __temp581v, unsigned long long* __temp582v, unsigned long long* __temp583v, void** __temp584v, unsigned long long* __temp585v, unsigned long long* __temp586v, unsigned long long* __temp587v) {
  void* buffer__unsafe_ptr=*__temp581v;
  unsigned long long buffer__unsafe_size=*__temp582v;
  unsigned long long buffer__unsafe_align=*__temp583v;
  unsigned long long __temp489v__=0;
  unsigned long long length=0;
  len__temp481v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp489v__);
  length=__temp489v__;
  *__temp581v=buffer__unsafe_ptr;
  *__temp582v=buffer__unsafe_size;
  *__temp583v=buffer__unsafe_align;
  *__temp584v=buffer__unsafe_ptr;
  *__temp585v=buffer__unsafe_size;
  *__temp586v=buffer__unsafe_align;
  *__temp587v=length;
}

static inline void char__temp_buffer__buffer__temp483v(void** __temp588v, unsigned long long* __temp589v, unsigned long long* __temp590v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp588v=unsafe_ptr;
  *__temp589v=unsafe_size;
  *__temp590v=unsafe_align;
}

static inline void false__temp7v(int* __temp591v) {
  int value=0;
  *__temp591v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp592v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp592v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp593v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp593v=__temp85v__;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp594v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp594v=z;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp595v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp595v=z;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp596v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp596v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp597v) {
  *__temp597v=to;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp598v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp598v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp599v) {
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
  *__temp599v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp510v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp600v, unsigned long long* __temp601v, unsigned long long* __temp602v, unsigned long long* __temp603v, unsigned long long* __temp604v, char* __temp605v) {
  *__temp600v=buf__unsafe_ptr;
  *__temp601v=buf__unsafe_size;
  *__temp602v=buf__unsafe_align;
  *__temp603v=dat__pos;
  *__temp604v=dat__length;
  *__temp605v=dat__first;
}

static inline int str__temp511v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp606v, unsigned long long* __temp607v, unsigned long long* __temp608v, unsigned long long* __temp609v, unsigned long long* __temp610v, char* __temp611v) {
  unsigned long long __temp512v=0;
  int __temp513v__=0;
  void* __temp514v__=0;
  char __temp515v__value=0;
  char first=0;
  void* __temp516v__buf__unsafe_ptr=0;
  unsigned long long __temp516v__buf__unsafe_size=0;
  unsigned long long __temp516v__buf__unsafe_align=0;
  unsigned long long __temp516v__dat__pos=0;
  unsigned long long __temp516v__dat__length=0;
  char __temp516v__dat__first=0;
  int __temp_errcode=0;
  __temp512v=0;
  neq__temp300v(length,__temp512v,&__temp513v__);
  if(__temp513v__){
  __temp_errcode=get__temp477v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp514v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp514v__){
  goto __temp_failure;
  }
  memcpy(&__temp515v__value,(char*)__temp514v__,1);
  first=__temp515v__value;
  }
  str__temp510v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp516v__buf__unsafe_ptr,&__temp516v__buf__unsafe_size,&__temp516v__buf__unsafe_align,&__temp516v__dat__pos,&__temp516v__dat__length,&__temp516v__dat__first);
  *__temp606v=__temp516v__buf__unsafe_ptr;
  *__temp607v=__temp516v__buf__unsafe_size;
  *__temp608v=__temp516v__buf__unsafe_align;
  *__temp609v=__temp516v__dat__pos;
  *__temp610v=__temp516v__dat__length;
  *__temp611v=__temp516v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp517v(const char* c, void** __temp613v, unsigned long long* __temp614v, unsigned long long* __temp615v, unsigned long long* __temp616v, unsigned long long* __temp617v, char* __temp618v) {
  void* __temp518v__unsafe_ptr=0;
  unsigned long long __temp518v__unsafe_size=0;
  unsigned long long __temp518v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp519v=0;
  void* __temp520v__buf__unsafe_ptr=0;
  unsigned long long __temp520v__buf__unsafe_size=0;
  unsigned long long __temp520v__buf__unsafe_align=0;
  unsigned long long __temp520v__dat__pos=0;
  unsigned long long __temp520v__dat__length=0;
  char __temp520v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp483v(&__temp518v__unsafe_ptr,&__temp518v__unsafe_size,&__temp518v__unsafe_align);
  buf__unsafe_ptr=__temp518v__unsafe_ptr;
  buf__unsafe_size=__temp518v__unsafe_size;
  buf__unsafe_align=__temp518v__unsafe_align;
  buf__unsafe_ptr=c;
  length=strlen(c);
  buf__unsafe_size=length+1;
  __temp519v=0;
  __temp_errcode=str__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp519v,length,&__temp520v__buf__unsafe_ptr,&__temp520v__buf__unsafe_size,&__temp520v__buf__unsafe_align,&__temp520v__dat__pos,&__temp520v__dat__length,&__temp520v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp613v=__temp520v__buf__unsafe_ptr;
  *__temp614v=__temp520v__buf__unsafe_size;
  *__temp615v=__temp520v__buf__unsafe_align;
  *__temp616v=__temp520v__dat__pos;
  *__temp617v=__temp520v__dat__length;
  *__temp618v=__temp520v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp521v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp619v) {
  *__temp619v=s__dat__length;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp620v) {
  int __temp109v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v__);
  z=x+y;
  *__temp620v=z;
}

static inline void div__temp156v(unsigned long long x, unsigned long long y, unsigned long long* __temp621v) {
  int __temp157v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp157v__);
  z=x/y;
  *__temp621v=z;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp622v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp622v=z;
}

static inline void free__temp417v(void** __temp623v) {
  void* allocated=*__temp623v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp623v=allocated;
}

static inline void free__temp423v(void** __temp624v, unsigned long long* __temp625v, unsigned long long* __temp626v, void** __temp627v, unsigned long long* __temp628v, unsigned long long* __temp629v) {
  void* buffer__unsafe_ptr=*__temp624v;
  unsigned long long buffer__unsafe_size=*__temp625v;
  unsigned long long buffer__unsafe_align=*__temp626v;
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
  *__temp624v=buffer__unsafe_ptr;
  *__temp625v=buffer__unsafe_size;
  *__temp626v=buffer__unsafe_align;
  *__temp627v=buffer__unsafe_ptr;
  *__temp628v=buffer__unsafe_size;
  *__temp629v=buffer__unsafe_align;
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
  *__temp630v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp631v, unsigned long long* __temp632v, unsigned long long* __temp633v, unsigned long long size, void** __temp634v, unsigned long long* __temp635v, unsigned long long* __temp636v) {
  void* buffer__unsafe_ptr=*__temp631v;
  unsigned long long buffer__unsafe_size=*__temp632v;
  unsigned long long buffer__unsafe_align=*__temp633v;
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
  *__temp631v=buffer__unsafe_ptr;
  *__temp632v=buffer__unsafe_size;
  *__temp633v=buffer__unsafe_align;
  *__temp634v=buffer__unsafe_ptr;
  *__temp635v=buffer__unsafe_size;
  *__temp636v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int realloc__temp415v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp637v) {
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
  *__temp637v=__temp416v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp180v(unsigned long long x, unsigned long long y, int* __temp638v) {
  int __temp181v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp181v__);
  z=x<y?1:0;
  *__temp638v=z;
}

int resize__temp445v(void** __temp643v, unsigned long long* __temp644v, unsigned long long* __temp645v, unsigned long long size, void** __temp646v, unsigned long long* __temp647v, unsigned long long* __temp648v) {
  void* buffer__unsafe_ptr=*__temp643v;
  unsigned long long buffer__unsafe_size=*__temp644v;
  unsigned long long buffer__unsafe_align=*__temp645v;
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
  unsigned long long __temp641v=0;
  int __temp642v=0;
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
  *__temp643v=buffer__unsafe_ptr;
  *__temp644v=buffer__unsafe_size;
  *__temp645v=buffer__unsafe_align;
  *__temp646v=buffer__unsafe_ptr;
  *__temp647v=buffer__unsafe_size;
  *__temp648v=buffer__unsafe_align;
  
  __temp_failure:__temp641v=0;
  neq__temp300v(__temp452v__unsafe_size,__temp641v,&__temp642v);
  if(__temp642v){
  __temp452v__unsafe_size=0;
  free__temp417v(&__temp452v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline int copy__temp522v(void** __temp649v, unsigned long long* __temp650v, unsigned long long* __temp651v, unsigned long long* __temp652v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp653v, unsigned long long* __temp654v, unsigned long long* __temp655v, unsigned long long* __temp656v, unsigned long long* __temp657v, char* __temp658v) {
  void* buf__unsafe_ptr=*__temp649v;
  unsigned long long buf__unsafe_size=*__temp650v;
  unsigned long long buf__unsafe_align=*__temp651v;
  unsigned long long pos=*__temp652v;
  unsigned long long __temp523v__=0;
  unsigned long long __temp524v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp525v__=0;
  int __temp526v__=0;
  unsigned long long prev_pos=0;
  void* __temp527v__buf__unsafe_ptr=0;
  unsigned long long __temp527v__buf__unsafe_size=0;
  unsigned long long __temp527v__buf__unsafe_align=0;
  unsigned long long __temp527v__dat__pos=0;
  unsigned long long __temp527v__dat__length=0;
  char __temp527v__dat__first=0;
  int __temp_errcode=0;
  len__temp521v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp523v__);
  add__temp108v(pos,__temp523v__,&__temp524v__);
  next_pos=__temp524v__;
  len__temp481v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp525v__);
  ge__temp252v(next_pos,__temp525v__,&__temp526v__);
  if(__temp526v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  prev_pos=pos;
  pos=next_pos;
  str__temp510v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp527v__buf__unsafe_ptr,&__temp527v__buf__unsafe_size,&__temp527v__buf__unsafe_align,&__temp527v__dat__pos,&__temp527v__dat__length,&__temp527v__dat__first);
  *__temp649v=buf__unsafe_ptr;
  *__temp650v=buf__unsafe_size;
  *__temp651v=buf__unsafe_align;
  *__temp652v=pos;
  *__temp653v=__temp527v__buf__unsafe_ptr;
  *__temp654v=__temp527v__buf__unsafe_size;
  *__temp655v=__temp527v__buf__unsafe_align;
  *__temp656v=__temp527v__dat__pos;
  *__temp657v=__temp527v__dat__length;
  *__temp658v=__temp527v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int copy__temp539v(void** __temp660v, unsigned long long* __temp661v, unsigned long long* __temp662v, unsigned long long* __temp663v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp664v, unsigned long long* __temp665v, unsigned long long* __temp666v, unsigned long long* __temp667v, unsigned long long* __temp668v, char* __temp669v) {
  void* li__buffer__unsafe_ptr=*__temp660v;
  unsigned long long li__buffer__unsafe_size=*__temp661v;
  unsigned long long li__buffer__unsafe_align=*__temp662v;
  unsigned long long li__length=*__temp663v;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp540v__=0;
  unsigned long long __temp541v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp542v__=0;
  int __temp543v__=0;
  unsigned long long __temp544v=0;
  unsigned long long __temp545v__=0;
  unsigned long long __temp546v=0;
  unsigned long long __temp547v__=0;
  unsigned long long __temp548v__=0;
  void* __temp549v__unsafe_ptr=0;
  unsigned long long __temp549v__unsafe_size=0;
  unsigned long long __temp549v__unsafe_align=0;
  void* __temp550v__buf__unsafe_ptr=0;
  unsigned long long __temp550v__buf__unsafe_size=0;
  unsigned long long __temp550v__buf__unsafe_align=0;
  unsigned long long __temp550v__dat__pos=0;
  unsigned long long __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  int __temp_errcode=0;
  prev_prev_length=li__length;
  len__temp521v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp540v__);
  add__temp108v(li__length,__temp540v__,&__temp541v__);
  prev_length=__temp541v__;
  len__temp481v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp542v__);
  ge__temp252v(prev_length,__temp542v__,&__temp543v__);
  if(__temp543v__){
  __temp544v=2;
  div__temp156v(prev_length,__temp544v,&__temp545v__);
  __temp546v=1;
  add__temp108v(__temp545v__,__temp546v,&__temp547v__);
  add__temp108v(prev_length,__temp547v__,&__temp548v__);
  __temp_errcode=resize__temp445v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp548v__,&__temp549v__unsafe_ptr,&__temp549v__unsafe_size,&__temp549v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp549v__unsafe_ptr;
  li__buffer__unsafe_size=__temp549v__unsafe_size;
  li__buffer__unsafe_align=__temp549v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp522v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp550v__buf__unsafe_ptr,&__temp550v__buf__unsafe_size,&__temp550v__buf__unsafe_align,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp660v=li__buffer__unsafe_ptr;
  *__temp661v=li__buffer__unsafe_size;
  *__temp662v=li__buffer__unsafe_align;
  *__temp663v=li__length;
  *__temp664v=__temp550v__buf__unsafe_ptr;
  *__temp665v=__temp550v__buf__unsafe_size;
  *__temp666v=__temp550v__buf__unsafe_align;
  *__temp667v=__temp550v__dat__pos;
  *__temp668v=__temp550v__dat__length;
  *__temp669v=__temp550v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp551v(void** __temp671v, unsigned long long* __temp672v, unsigned long long* __temp673v, unsigned long long* __temp674v, const char* other, void** __temp675v, unsigned long long* __temp676v, unsigned long long* __temp677v, unsigned long long* __temp678v, unsigned long long* __temp679v, char* __temp680v) {
  void* li__buffer__unsafe_ptr=*__temp671v;
  unsigned long long li__buffer__unsafe_size=*__temp672v;
  unsigned long long li__buffer__unsafe_align=*__temp673v;
  unsigned long long li__length=*__temp674v;
  void* __temp552v__buf__unsafe_ptr=0;
  unsigned long long __temp552v__buf__unsafe_size=0;
  unsigned long long __temp552v__buf__unsafe_align=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  void* __temp553v__buf__unsafe_ptr=0;
  unsigned long long __temp553v__buf__unsafe_size=0;
  unsigned long long __temp553v__buf__unsafe_align=0;
  unsigned long long __temp553v__dat__pos=0;
  unsigned long long __temp553v__dat__length=0;
  char __temp553v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp517v(other,&__temp552v__buf__unsafe_ptr,&__temp552v__buf__unsafe_size,&__temp552v__buf__unsafe_align,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp539v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&li__length,__temp552v__buf__unsafe_ptr,__temp552v__buf__unsafe_size,__temp552v__buf__unsafe_align,__temp552v__dat__pos,__temp552v__dat__length,__temp552v__dat__first,&__temp553v__buf__unsafe_ptr,&__temp553v__buf__unsafe_size,&__temp553v__buf__unsafe_align,&__temp553v__dat__pos,&__temp553v__dat__length,&__temp553v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp671v=li__buffer__unsafe_ptr;
  *__temp672v=li__buffer__unsafe_size;
  *__temp673v=li__buffer__unsafe_align;
  *__temp674v=li__length;
  *__temp675v=__temp553v__buf__unsafe_ptr;
  *__temp676v=__temp553v__buf__unsafe_size;
  *__temp677v=__temp553v__buf__unsafe_align;
  *__temp678v=__temp553v__dat__pos;
  *__temp679v=__temp553v__dat__length;
  *__temp680v=__temp553v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int foo1__temp554v(void** __temp686v, unsigned long long* __temp687v, unsigned long long* __temp688v, unsigned long long* __temp689v, unsigned long long* __temp690v, char* __temp691v, unsigned long long* __temp692v, unsigned long long* __temp693v, char* __temp694v) {
  void* __temp557v__unsafe_ptr=0;
  unsigned long long __temp557v__unsafe_size=0;
  unsigned long long __temp557v__unsafe_align=0;
  void* __temp558v__buffer__unsafe_ptr=0;
  unsigned long long __temp558v__buffer__unsafe_size=0;
  unsigned long long __temp558v__buffer__unsafe_align=0;
  unsigned long long __temp558v__length=0;
  void* mem__buffer__unsafe_ptr=0;
  unsigned long long mem__buffer__unsafe_size=0;
  unsigned long long mem__buffer__unsafe_align=0;
  unsigned long long mem__length=0;
  const char* __temp559v=0;
  void* __temp560v__buf__unsafe_ptr=0;
  unsigned long long __temp560v__buf__unsafe_size=0;
  unsigned long long __temp560v__buf__unsafe_align=0;
  unsigned long long __temp560v__dat__pos=0;
  unsigned long long __temp560v__dat__length=0;
  char __temp560v__dat__first=0;
  unsigned long long x__pos=0;
  unsigned long long x__length=0;
  char x__first=0;
  const char* __temp561v=0;
  void* __temp562v__buf__unsafe_ptr=0;
  unsigned long long __temp562v__buf__unsafe_size=0;
  unsigned long long __temp562v__buf__unsafe_align=0;
  unsigned long long __temp562v__dat__pos=0;
  unsigned long long __temp562v__dat__length=0;
  char __temp562v__dat__first=0;
  unsigned long long y__pos=0;
  unsigned long long y__length=0;
  char y__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp555v(&__temp557v__unsafe_ptr,&__temp557v__unsafe_size,&__temp557v__unsafe_align);
  list__temp488v(&__temp557v__unsafe_ptr,&__temp557v__unsafe_size,&__temp557v__unsafe_align,&__temp558v__buffer__unsafe_ptr,&__temp558v__buffer__unsafe_size,&__temp558v__buffer__unsafe_align,&__temp558v__length);
  mem__buffer__unsafe_ptr=__temp558v__buffer__unsafe_ptr;
  mem__buffer__unsafe_size=__temp558v__buffer__unsafe_size;
  mem__buffer__unsafe_align=__temp558v__buffer__unsafe_align;
  mem__length=__temp558v__length;
  __temp559v="hello world!";
  __temp_errcode=copy__temp551v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp559v,&__temp560v__buf__unsafe_ptr,&__temp560v__buf__unsafe_size,&__temp560v__buf__unsafe_align,&__temp560v__dat__pos,&__temp560v__dat__length,&__temp560v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__pos=__temp560v__dat__pos;
  x__length=__temp560v__dat__length;
  x__first=__temp560v__dat__first;
  __temp561v="how are you?";
  __temp_errcode=copy__temp551v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp561v,&__temp562v__buf__unsafe_ptr,&__temp562v__buf__unsafe_size,&__temp562v__buf__unsafe_align,&__temp562v__dat__pos,&__temp562v__dat__length,&__temp562v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  y__pos=__temp562v__dat__pos;
  y__length=__temp562v__dat__length;
  y__first=__temp562v__dat__first;
  *__temp686v=mem__buffer__unsafe_ptr;
  *__temp687v=mem__buffer__unsafe_size;
  *__temp688v=mem__buffer__unsafe_align;
  *__temp689v=x__pos;
  *__temp690v=x__length;
  *__temp691v=x__first;
  *__temp692v=y__pos;
  *__temp693v=y__length;
  *__temp694v=y__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp531v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* __temp533v=0;
  const char* endl=0;
  __temp533v="\n";
  endl=__temp533v;
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
}

static inline int main__temp573v() {
  void* __temp574v__mem__buffer__unsafe_ptr=0;
  unsigned long long __temp574v__mem__buffer__unsafe_size=0;
  unsigned long long __temp574v__mem__buffer__unsafe_align=0;
  unsigned long long __temp574v__x__pos=0;
  unsigned long long __temp574v__x__length=0;
  char __temp574v__x__first=0;
  unsigned long long __temp574v__y__pos=0;
  unsigned long long __temp574v__y__length=0;
  char __temp574v__y__first=0;
  void* f__mem__buffer__unsafe_ptr=0;
  unsigned long long f__mem__buffer__unsafe_size=0;
  unsigned long long f__mem__buffer__unsafe_align=0;
  unsigned long long f__x__pos=0;
  unsigned long long f__x__length=0;
  char f__x__first=0;
  unsigned long long f__y__pos=0;
  unsigned long long f__y__length=0;
  char f__y__first=0;
  int __temp_errcode=0;
  __temp_errcode=foo1__temp554v(&__temp574v__mem__buffer__unsafe_ptr,&__temp574v__mem__buffer__unsafe_size,&__temp574v__mem__buffer__unsafe_align,&__temp574v__x__pos,&__temp574v__x__length,&__temp574v__x__first,&__temp574v__y__pos,&__temp574v__y__length,&__temp574v__y__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__mem__buffer__unsafe_ptr=__temp574v__mem__buffer__unsafe_ptr;
  f__mem__buffer__unsafe_size=__temp574v__mem__buffer__unsafe_size;
  f__mem__buffer__unsafe_align=__temp574v__mem__buffer__unsafe_align;
  f__x__pos=__temp574v__x__pos;
  f__x__length=__temp574v__x__length;
  f__x__first=__temp574v__x__first;
  f__y__pos=__temp574v__y__pos;
  f__y__length=__temp574v__y__length;
  f__y__first=__temp574v__y__first;
  print__temp531v(f__mem__buffer__unsafe_ptr,f__mem__buffer__unsafe_size,f__mem__buffer__unsafe_align,f__x__pos,f__x__length,f__x__first);
  print__temp531v(f__mem__buffer__unsafe_ptr,f__mem__buffer__unsafe_size,f__mem__buffer__unsafe_align,f__y__pos,f__y__length,f__y__first);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp573v();return 0;}