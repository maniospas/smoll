#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void false__temp7v(int* __temp568v) {
  int value=0;
  *__temp568v=value;
}

static inline void not__temp25v(int __temp_anon0, int* __temp569v) {
  int __temp26v__=0;
  false__temp7v(&__temp26v__);
  *__temp569v=__temp26v__;
}

static inline void is_different__temp83v(unsigned long long x, unsigned long long y, int* __temp570v) {
  int __temp84v=0;
  int __temp85v__=0;
  not__temp25v(__temp84v,&__temp85v__);
  *__temp570v=__temp85v__;
}

static inline void mul__temp132v(unsigned long long x, unsigned long long y, unsigned long long* __temp571v) {
  int __temp133v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp133v__);
  z=x*y;
  *__temp571v=z;
}

static inline void KB__temp399v(unsigned long long x, unsigned long long* __temp572v) {
  unsigned long long __temp400v=0;
  unsigned long long __temp401v__=0;
  __temp400v=1024;
  mul__temp132v(x,__temp400v,&__temp401v__);
  *__temp572v=__temp401v__;
}

static inline void char__temp_buffer__buffer__temp483v(void** __temp573v, unsigned long long* __temp574v, unsigned long long* __temp575v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp573v=unsafe_ptr;
  *__temp574v=unsafe_size;
  *__temp575v=unsafe_align;
}

static inline void neq__temp300v(unsigned long long x, unsigned long long y, int* __temp576v) {
  int __temp301v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp301v__);
  z=x!=y?1:0;
  *__temp576v=z;
}

static inline void free__temp417v(void** __temp577v) {
  void* allocated=*__temp577v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp577v=allocated;
}

static inline void eq__temp276v(unsigned long long x, unsigned long long y, int* __temp578v) {
  int __temp277v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp277v__);
  z=x==y?1:0;
  *__temp578v=z;
}

static inline void zero__temp418v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp414v(unsigned long long bytes, void** __temp579v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp579v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp428v(void** __temp580v, unsigned long long* __temp581v, unsigned long long* __temp582v, unsigned long long size, void** __temp583v, unsigned long long* __temp584v, unsigned long long* __temp585v) {
  void* buffer__unsafe_ptr=*__temp580v;
  unsigned long long buffer__unsafe_size=*__temp581v;
  unsigned long long buffer__unsafe_align=*__temp582v;
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
  *__temp580v=buffer__unsafe_ptr;
  *__temp581v=buffer__unsafe_size;
  *__temp582v=buffer__unsafe_align;
  *__temp583v=buffer__unsafe_ptr;
  *__temp584v=buffer__unsafe_size;
  *__temp585v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp482v(unsigned long long size, void** __temp589v, unsigned long long* __temp590v, unsigned long long* __temp591v) {
  void* __temp485v__unsafe_ptr=0;
  unsigned long long __temp485v__unsafe_size=0;
  unsigned long long __temp485v__unsafe_align=0;
  void* __temp486v__unsafe_ptr=0;
  unsigned long long __temp486v__unsafe_size=0;
  unsigned long long __temp486v__unsafe_align=0;
  unsigned long long __temp587v=0;
  int __temp588v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp483v(&__temp485v__unsafe_ptr,&__temp485v__unsafe_size,&__temp485v__unsafe_align);
  __temp_errcode=alloc__temp428v(&__temp485v__unsafe_ptr,&__temp485v__unsafe_size,&__temp485v__unsafe_align,size,&__temp486v__unsafe_ptr,&__temp486v__unsafe_size,&__temp486v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp589v=__temp486v__unsafe_ptr;
  *__temp590v=__temp486v__unsafe_size;
  *__temp591v=__temp486v__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void ge__temp252v(unsigned long long x, unsigned long long y, int* __temp592v) {
  int __temp253v__=0;
  int z=0;
  is_different__temp83v(x,y,&__temp253v__);
  z=x>=y?1:0;
  *__temp592v=z;
}

static inline void attach_type__temp11v(void* to, void* from, void** __temp593v) {
  *__temp593v=to;
}

static inline void add__temp419v(void* allocated, unsigned long long offset, void** __temp594v) {
  void* element=0;
  void* __temp420v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp11v(element,allocated,&__temp420v__);
  *__temp594v=__temp420v__;
}

static inline int get__temp477v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp595v) {
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
  *__temp595v=__temp480v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp509v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char first, void** __temp596v, unsigned long long* __temp597v, unsigned long long* __temp598v, unsigned long long* __temp599v, unsigned long long* __temp600v, char* __temp601v) {
  *__temp596v=buf__unsafe_ptr;
  *__temp597v=buf__unsafe_size;
  *__temp598v=buf__unsafe_align;
  *__temp599v=pos;
  *__temp600v=length;
  *__temp601v=first;
}

static inline int str__temp510v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp602v, unsigned long long* __temp603v, unsigned long long* __temp604v, unsigned long long* __temp605v, unsigned long long* __temp606v, char* __temp607v) {
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
  *__temp602v=__temp515v__buf__unsafe_ptr;
  *__temp603v=__temp515v__buf__unsafe_size;
  *__temp604v=__temp515v__buf__unsafe_align;
  *__temp605v=__temp515v__pos;
  *__temp606v=__temp515v__length;
  *__temp607v=__temp515v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp516v(const char* c, void** __temp609v, unsigned long long* __temp610v, unsigned long long* __temp611v, unsigned long long* __temp612v, unsigned long long* __temp613v, char* __temp614v) {
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
  *__temp609v=__temp519v__buf__unsafe_ptr;
  *__temp610v=__temp519v__buf__unsafe_size;
  *__temp611v=__temp519v__buf__unsafe_align;
  *__temp612v=__temp519v__pos;
  *__temp613v=__temp519v__length;
  *__temp614v=__temp519v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp520v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__pos, unsigned long long s__length, char s__first, unsigned long long* __temp615v) {
  *__temp615v=s__length;
}

static inline void add__temp108v(unsigned long long x, unsigned long long y, unsigned long long* __temp616v) {
  int __temp109v__=0;
  unsigned long long z=0;
  is_different__temp83v(x,y,&__temp109v__);
  z=x+y;
  *__temp616v=z;
}

static inline void len__temp481v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp617v) {
  *__temp617v=buffer__unsafe_size;
}

static inline int copy__temp521v(void** __temp618v, unsigned long long* __temp619v, unsigned long long* __temp620v, unsigned long long* __temp621v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__pos, unsigned long long other__length, char other__first, void** __temp622v, unsigned long long* __temp623v, unsigned long long* __temp624v, unsigned long long* __temp625v, unsigned long long* __temp626v, char* __temp627v) {
  void* buf__unsafe_ptr=*__temp618v;
  unsigned long long buf__unsafe_size=*__temp619v;
  unsigned long long buf__unsafe_align=*__temp620v;
  unsigned long long pos=*__temp621v;
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
  *__temp618v=buf__unsafe_ptr;
  *__temp619v=buf__unsafe_size;
  *__temp620v=buf__unsafe_align;
  *__temp621v=pos;
  *__temp622v=__temp526v__buf__unsafe_ptr;
  *__temp623v=__temp526v__buf__unsafe_size;
  *__temp624v=__temp526v__buf__unsafe_align;
  *__temp625v=__temp526v__pos;
  *__temp626v=__temp526v__length;
  *__temp627v=__temp526v__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp527v(void** __temp629v, unsigned long long* __temp630v, unsigned long long* __temp631v, unsigned long long* __temp632v, const char* other, void** __temp633v, unsigned long long* __temp634v, unsigned long long* __temp635v, unsigned long long* __temp636v, unsigned long long* __temp637v, char* __temp638v) {
  void* buf__unsafe_ptr=*__temp629v;
  unsigned long long buf__unsafe_size=*__temp630v;
  unsigned long long buf__unsafe_align=*__temp631v;
  unsigned long long pos=*__temp632v;
  void* __temp528v__buf__unsafe_ptr=0;
  unsigned long long __temp528v__buf__unsafe_size=0;
  unsigned long long __temp528v__buf__unsafe_align=0;
  unsigned long long __temp528v__pos=0;
  unsigned long long __temp528v__length=0;
  char __temp528v__first=0;
  void* __temp529v__buf__unsafe_ptr=0;
  unsigned long long __temp529v__buf__unsafe_size=0;
  unsigned long long __temp529v__buf__unsafe_align=0;
  unsigned long long __temp529v__pos=0;
  unsigned long long __temp529v__length=0;
  char __temp529v__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp516v(other,&__temp528v__buf__unsafe_ptr,&__temp528v__buf__unsafe_size,&__temp528v__buf__unsafe_align,&__temp528v__pos,&__temp528v__length,&__temp528v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp521v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_align,&pos,__temp528v__buf__unsafe_ptr,__temp528v__buf__unsafe_size,__temp528v__buf__unsafe_align,__temp528v__pos,__temp528v__length,__temp528v__first,&__temp529v__buf__unsafe_ptr,&__temp529v__buf__unsafe_size,&__temp529v__buf__unsafe_align,&__temp529v__pos,&__temp529v__length,&__temp529v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp629v=buf__unsafe_ptr;
  *__temp630v=buf__unsafe_size;
  *__temp631v=buf__unsafe_align;
  *__temp632v=pos;
  *__temp633v=__temp529v__buf__unsafe_ptr;
  *__temp634v=__temp529v__buf__unsafe_size;
  *__temp635v=__temp529v__buf__unsafe_align;
  *__temp636v=__temp529v__pos;
  *__temp637v=__temp529v__length;
  *__temp638v=__temp529v__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int foo__temp553v(void** __temp644v, unsigned long long* __temp645v, unsigned long long* __temp646v, unsigned long long* __temp647v, unsigned long long* __temp648v, char* __temp649v, void** __temp650v, unsigned long long* __temp651v, unsigned long long* __temp652v, unsigned long long* __temp653v, unsigned long long* __temp654v, char* __temp655v, void** __temp656v, unsigned long long* __temp657v, unsigned long long* __temp658v, unsigned long long* __temp659v) {
  unsigned long long __temp554v=0;
  unsigned long long __temp555v__=0;
  void* __temp556v__unsafe_ptr=0;
  unsigned long long __temp556v__unsafe_size=0;
  unsigned long long __temp556v__unsafe_align=0;
  unsigned long long __temp558v=0;
  void* mem__6v__unsafe_ptr=0;
  unsigned long long mem__6v__unsafe_size=0;
  unsigned long long mem__6v__unsafe_align=0;
  unsigned long long mem__8v=0;
  const char* __temp559v=0;
  void* __temp560v__buf__unsafe_ptr=0;
  unsigned long long __temp560v__buf__unsafe_size=0;
  unsigned long long __temp560v__buf__unsafe_align=0;
  unsigned long long __temp560v__pos=0;
  unsigned long long __temp560v__length=0;
  char __temp560v__first=0;
  void* x__buf__unsafe_ptr=0;
  unsigned long long x__buf__unsafe_size=0;
  unsigned long long x__buf__unsafe_align=0;
  unsigned long long x__pos=0;
  unsigned long long x__length=0;
  char x__first=0;
  const char* __temp561v=0;
  void* __temp562v__buf__unsafe_ptr=0;
  unsigned long long __temp562v__buf__unsafe_size=0;
  unsigned long long __temp562v__buf__unsafe_align=0;
  unsigned long long __temp562v__pos=0;
  unsigned long long __temp562v__length=0;
  char __temp562v__first=0;
  void* y__buf__unsafe_ptr=0;
  unsigned long long y__buf__unsafe_size=0;
  unsigned long long y__buf__unsafe_align=0;
  unsigned long long y__pos=0;
  unsigned long long y__length=0;
  char y__first=0;
  unsigned long long __temp640v=0;
  int __temp641v=0;
  int __temp_errcode=0;
  __temp554v=4;
  KB__temp399v(__temp554v,&__temp555v__);
  __temp_errcode=alloc__temp482v(__temp555v__,&__temp556v__unsafe_ptr,&__temp556v__unsafe_size,&__temp556v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp558v=0;
  mem__6v__unsafe_ptr=__temp556v__unsafe_ptr;
  mem__6v__unsafe_size=__temp556v__unsafe_size;
  mem__6v__unsafe_align=__temp556v__unsafe_align;
  mem__8v=__temp558v;
  __temp559v="hello world!";
  __temp_errcode=copy__temp527v(&mem__6v__unsafe_ptr,&mem__6v__unsafe_size,&mem__6v__unsafe_align,&mem__8v,__temp559v,&__temp560v__buf__unsafe_ptr,&__temp560v__buf__unsafe_size,&__temp560v__buf__unsafe_align,&__temp560v__pos,&__temp560v__length,&__temp560v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__buf__unsafe_ptr=__temp560v__buf__unsafe_ptr;
  x__buf__unsafe_size=__temp560v__buf__unsafe_size;
  x__buf__unsafe_align=__temp560v__buf__unsafe_align;
  x__pos=__temp560v__pos;
  x__length=__temp560v__length;
  x__first=__temp560v__first;
  __temp561v="how are you?";
  __temp_errcode=copy__temp527v(&mem__6v__unsafe_ptr,&mem__6v__unsafe_size,&mem__6v__unsafe_align,&mem__8v,__temp561v,&__temp562v__buf__unsafe_ptr,&__temp562v__buf__unsafe_size,&__temp562v__buf__unsafe_align,&__temp562v__pos,&__temp562v__length,&__temp562v__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  y__buf__unsafe_ptr=__temp562v__buf__unsafe_ptr;
  y__buf__unsafe_size=__temp562v__buf__unsafe_size;
  y__buf__unsafe_align=__temp562v__buf__unsafe_align;
  y__pos=__temp562v__pos;
  y__length=__temp562v__length;
  y__first=__temp562v__first;
  *__temp644v=x__buf__unsafe_ptr;
  *__temp645v=x__buf__unsafe_size;
  *__temp646v=x__buf__unsafe_align;
  *__temp647v=x__pos;
  *__temp648v=x__length;
  *__temp649v=x__first;
  *__temp650v=y__buf__unsafe_ptr;
  *__temp651v=y__buf__unsafe_size;
  *__temp652v=y__buf__unsafe_align;
  *__temp653v=y__pos;
  *__temp654v=y__length;
  *__temp655v=y__first;
  *__temp656v=mem__6v__unsafe_ptr;
  *__temp657v=mem__6v__unsafe_size;
  *__temp658v=mem__6v__unsafe_align;
  *__temp659v=mem__8v;
  
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

static inline int main__temp563v() {
  void* __temp564v__x__buf__unsafe_ptr=0;
  unsigned long long __temp564v__x__buf__unsafe_size=0;
  unsigned long long __temp564v__x__buf__unsafe_align=0;
  unsigned long long __temp564v__x__pos=0;
  unsigned long long __temp564v__x__length=0;
  char __temp564v__x__first=0;
  void* __temp564v__y__buf__unsafe_ptr=0;
  unsigned long long __temp564v__y__buf__unsafe_size=0;
  unsigned long long __temp564v__y__buf__unsafe_align=0;
  unsigned long long __temp564v__y__pos=0;
  unsigned long long __temp564v__y__length=0;
  char __temp564v__y__first=0;
  void* __temp564v__mem__6v__unsafe_ptr=0;
  unsigned long long __temp564v__mem__6v__unsafe_size=0;
  unsigned long long __temp564v__mem__6v__unsafe_align=0;
  unsigned long long __temp564v__mem__8v=0;
  void* f__x__buf__unsafe_ptr=0;
  unsigned long long f__x__buf__unsafe_size=0;
  unsigned long long f__x__buf__unsafe_align=0;
  unsigned long long f__x__pos=0;
  unsigned long long f__x__length=0;
  char f__x__first=0;
  void* f__y__buf__unsafe_ptr=0;
  unsigned long long f__y__buf__unsafe_size=0;
  unsigned long long f__y__buf__unsafe_align=0;
  unsigned long long f__y__pos=0;
  unsigned long long f__y__length=0;
  char f__y__first=0;
  void* f__mem__6v__unsafe_ptr=0;
  unsigned long long f__mem__6v__unsafe_size=0;
  unsigned long long f__mem__6v__unsafe_align=0;
  unsigned long long f__mem__8v=0;
  unsigned long long __temp663v=0;
  int __temp664v=0;
  int __temp_errcode=0;
  __temp_errcode=foo__temp553v(&__temp564v__x__buf__unsafe_ptr,&__temp564v__x__buf__unsafe_size,&__temp564v__x__buf__unsafe_align,&__temp564v__x__pos,&__temp564v__x__length,&__temp564v__x__first,&__temp564v__y__buf__unsafe_ptr,&__temp564v__y__buf__unsafe_size,&__temp564v__y__buf__unsafe_align,&__temp564v__y__pos,&__temp564v__y__length,&__temp564v__y__first,&__temp564v__mem__6v__unsafe_ptr,&__temp564v__mem__6v__unsafe_size,&__temp564v__mem__6v__unsafe_align,&__temp564v__mem__8v);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__x__buf__unsafe_ptr=__temp564v__x__buf__unsafe_ptr;
  f__x__buf__unsafe_size=__temp564v__x__buf__unsafe_size;
  f__x__buf__unsafe_align=__temp564v__x__buf__unsafe_align;
  f__x__pos=__temp564v__x__pos;
  f__x__length=__temp564v__x__length;
  f__x__first=__temp564v__x__first;
  f__y__buf__unsafe_ptr=__temp564v__y__buf__unsafe_ptr;
  f__y__buf__unsafe_size=__temp564v__y__buf__unsafe_size;
  f__y__buf__unsafe_align=__temp564v__y__buf__unsafe_align;
  f__y__pos=__temp564v__y__pos;
  f__y__length=__temp564v__y__length;
  f__y__first=__temp564v__y__first;
  f__mem__6v__unsafe_ptr=__temp564v__mem__6v__unsafe_ptr;
  f__mem__6v__unsafe_size=__temp564v__mem__6v__unsafe_size;
  f__mem__6v__unsafe_align=__temp564v__mem__6v__unsafe_align;
  f__mem__8v=__temp564v__mem__8v;
  print__temp530v(f__x__buf__unsafe_ptr,f__x__buf__unsafe_size,f__x__buf__unsafe_align,f__x__pos,f__x__length,f__x__first);
  print__temp530v(f__y__buf__unsafe_ptr,f__y__buf__unsafe_size,f__y__buf__unsafe_align,f__y__pos,f__y__length,f__y__first);
  
  __temp_failure:__temp663v=0;
  neq__temp300v(__temp564v__mem__6v__unsafe_size,__temp663v,&__temp664v);
  if(__temp664v){
  __temp564v__mem__6v__unsafe_size=0;
  free__temp417v(&__temp564v__mem__6v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp563v();return 0;}