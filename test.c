#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* const __temp423v="free";
const char* const __temp893v="456";
const char* const __temp896v="returning";
const char* const __temp345v="\n";
const char* const __temp903v="the end";
const char* const __temp890v="123";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp886v(void** __temp905v, unsigned long long* __temp906v, unsigned long long* __temp907v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp905v=unsafe_ptr;
  *__temp906v=unsafe_size;
  *__temp907v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp488v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp908v) {
  *__temp908v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void list__temp495v(void** __temp909v, unsigned long long* __temp910v, unsigned long long* __temp911v, void** __temp912v, unsigned long long* __temp913v, unsigned long long* __temp914v, unsigned long long* __temp915v) {
  void* buffer__unsafe_ptr=*__temp909v;
  unsigned long long buffer__unsafe_size=*__temp910v;
  unsigned long long buffer__unsafe_align=*__temp911v;
  unsigned long long __temp496v__=0;
  unsigned long long length=0;
  len__temp488v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp496v__);
  length=__temp496v__;
  *__temp909v=buffer__unsafe_ptr;
  *__temp910v=buffer__unsafe_size;
  *__temp911v=buffer__unsafe_align;
  *__temp912v=buffer__unsafe_ptr;
  *__temp913v=buffer__unsafe_size;
  *__temp914v=buffer__unsafe_align;
  *__temp915v=length;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp490v(void** __temp916v, unsigned long long* __temp917v, unsigned long long* __temp918v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp916v=unsafe_ptr;
  *__temp917v=unsafe_size;
  *__temp918v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp919v) {
  int value=0;
  *__temp919v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp920v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp920v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp921v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp921v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp922v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp922v=z;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp923v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp923v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp924v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp924v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp925v) {
  *__temp925v=to;
}

static inline __attribute__((always_inline)) void add__temp426v(void* allocated, unsigned long long offset, void** __temp926v) {
  void* element=0;
  void* __temp427v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp427v__);
  *__temp926v=__temp427v__;
}

static inline __attribute__((always_inline)) int get__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp927v) {
  int __temp485v__=0;
  unsigned long long __temp486v__=0;
  void* __temp487v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp485v__);
  if(__temp485v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp486v__);
  add__temp426v(buffer__unsafe_ptr,__temp486v__,&__temp487v__);
  *__temp927v=__temp487v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp928v, unsigned long long* __temp929v, unsigned long long* __temp930v, unsigned long long* __temp931v, unsigned long long* __temp932v, char* __temp933v) {
  *__temp928v=buf__unsafe_ptr;
  *__temp929v=buf__unsafe_size;
  *__temp930v=buf__unsafe_align;
  *__temp931v=dat__pos;
  *__temp932v=dat__length;
  *__temp933v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp521v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp934v, unsigned long long* __temp935v, unsigned long long* __temp936v, unsigned long long* __temp937v, unsigned long long* __temp938v, char* __temp939v) {
  unsigned long long __temp522v=0;
  int __temp523v__=0;
  void* __temp524v__=0;
  char __temp525v__value=0;
  char first=0;
  void* __temp526v__buf__unsafe_ptr=0;
  unsigned long long __temp526v__buf__unsafe_size=0;
  unsigned long long __temp526v__buf__unsafe_align=0;
  unsigned long long __temp526v__dat__pos=0;
  unsigned long long __temp526v__dat__length=0;
  char __temp526v__dat__first=0;
  int __temp_errcode=0;
  __temp522v=0;
  neq__temp301v(length,__temp522v,&__temp523v__);
  if(__temp523v__){
  __temp_errcode=get__temp484v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp524v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp524v__){
  goto __temp_failure;
  }
  memcpy(&__temp525v__value,(char*)__temp524v__,1);
  first=__temp525v__value;
  }
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp526v__buf__unsafe_ptr,&__temp526v__buf__unsafe_size,&__temp526v__buf__unsafe_align,&__temp526v__dat__pos,&__temp526v__dat__length,&__temp526v__dat__first);
  *__temp934v=__temp526v__buf__unsafe_ptr;
  *__temp935v=__temp526v__buf__unsafe_size;
  *__temp936v=__temp526v__buf__unsafe_align;
  *__temp937v=__temp526v__dat__pos;
  *__temp938v=__temp526v__dat__length;
  *__temp939v=__temp526v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp527v(const char* c, void** __temp941v, unsigned long long* __temp942v, unsigned long long* __temp943v, unsigned long long* __temp944v, unsigned long long* __temp945v, char* __temp946v) {
  void* __temp528v__unsafe_ptr=0;
  unsigned long long __temp528v__unsafe_size=0;
  unsigned long long __temp528v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp529v=0;
  void* __temp530v__buf__unsafe_ptr=0;
  unsigned long long __temp530v__buf__unsafe_size=0;
  unsigned long long __temp530v__buf__unsafe_align=0;
  unsigned long long __temp530v__dat__pos=0;
  unsigned long long __temp530v__dat__length=0;
  char __temp530v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp490v(&__temp528v__unsafe_ptr,&__temp528v__unsafe_size,&__temp528v__unsafe_align);
  buf__unsafe_ptr=__temp528v__unsafe_ptr;
  buf__unsafe_size=__temp528v__unsafe_size;
  buf__unsafe_align=__temp528v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp529v=0;
  __temp_errcode=str__temp521v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp529v,length,&__temp530v__buf__unsafe_ptr,&__temp530v__buf__unsafe_size,&__temp530v__buf__unsafe_align,&__temp530v__dat__pos,&__temp530v__dat__length,&__temp530v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp941v=__temp530v__buf__unsafe_ptr;
  *__temp942v=__temp530v__buf__unsafe_size;
  *__temp943v=__temp530v__buf__unsafe_align;
  *__temp944v=__temp530v__dat__pos;
  *__temp945v=__temp530v__dat__length;
  *__temp946v=__temp530v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp531v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp947v) {
  *__temp947v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp948v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp948v=z;
}

static inline __attribute__((always_inline)) void div__temp157v(unsigned long long x, unsigned long long y, unsigned long long* __temp949v) {
  int __temp158v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp158v__);
  z=x/y;
  *__temp949v=z;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp950v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp950v=z;
}

static inline __attribute__((always_inline)) void print__temp343v(const char* value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void free__temp422v(void** __temp951v) {
  void* allocated=*__temp951v;
  print__temp343v(__temp423v);
  if(allocated)free(allocated);
  allocated=0;
  *__temp951v=allocated;
}

static inline __attribute__((always_inline)) void free__temp430v(void** __temp952v, unsigned long long* __temp953v, unsigned long long* __temp954v, void** __temp955v, unsigned long long* __temp956v, unsigned long long* __temp957v) {
  void* buffer__unsafe_ptr=*__temp952v;
  unsigned long long buffer__unsafe_size=*__temp953v;
  unsigned long long buffer__unsafe_align=*__temp954v;
  unsigned long long __temp431v=0;
  int __temp432v__=0;
  unsigned long long __temp433v=0;
  __temp431v=0;
  eq__temp277v(buffer__unsafe_size,__temp431v,&__temp432v__);
  if(__temp432v__){
  goto __temp_return;
  }
  __temp433v=0;
  buffer__unsafe_size=__temp433v;
  free__temp422v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp952v=buffer__unsafe_ptr;
  *__temp953v=buffer__unsafe_size;
  *__temp954v=buffer__unsafe_align;
  *__temp955v=buffer__unsafe_ptr;
  *__temp956v=buffer__unsafe_size;
  *__temp957v=buffer__unsafe_align;
}

static inline __attribute__((always_inline)) void zero__temp425v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp419v(unsigned long long bytes, void** __temp958v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp958v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp435v(void** __temp959v, unsigned long long* __temp960v, unsigned long long* __temp961v, unsigned long long size, void** __temp962v, unsigned long long* __temp963v, unsigned long long* __temp964v) {
  void* buffer__unsafe_ptr=*__temp959v;
  unsigned long long buffer__unsafe_size=*__temp960v;
  unsigned long long buffer__unsafe_align=*__temp961v;
  unsigned long long __temp436v=0;
  int __temp437v__=0;
  int __temp440v__=0;
  unsigned long long __temp441v=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  int __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  void* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp301v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp425v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp301v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp419v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp425v(buffer__unsafe_ptr,__temp450v,bytes);
  __temp_return:
  *__temp959v=buffer__unsafe_ptr;
  *__temp960v=buffer__unsafe_size;
  *__temp961v=buffer__unsafe_align;
  *__temp962v=buffer__unsafe_ptr;
  *__temp963v=buffer__unsafe_size;
  *__temp964v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp420v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp965v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp421v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp12v(new_allocated,allocated__unsafe_ptr,&__temp421v__);
  *__temp965v=__temp421v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp966v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp966v=z;
}

int resize__temp452v(void** __temp971v, unsigned long long* __temp972v, unsigned long long* __temp973v, unsigned long long size, void** __temp974v, unsigned long long* __temp975v, unsigned long long* __temp976v) {
  void* buffer__unsafe_ptr=*__temp971v;
  unsigned long long buffer__unsafe_size=*__temp972v;
  unsigned long long buffer__unsafe_align=*__temp973v;
  int __temp453v__=0;
  unsigned long long __temp454v=0;
  int __temp455v__=0;
  void* __temp456v__unsafe_ptr=0;
  unsigned long long __temp456v__unsafe_size=0;
  unsigned long long __temp456v__unsafe_align=0;
  unsigned long long __temp457v=0;
  int __temp458v__=0;
  void* __temp459v__unsafe_ptr=0;
  unsigned long long __temp459v__unsafe_size=0;
  unsigned long long __temp459v__unsafe_align=0;
  unsigned long long __temp461v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp462v__=0;
  unsigned long long bytes=0;
  void* __temp463v__=0;
  int __temp464v__=0;
  unsigned long long __temp969v=0;
  int __temp970v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp453v__);
  if(__temp453v__){
  goto __temp_return;
  }
  __temp454v=0;
  eq__temp277v(size,__temp454v,&__temp455v__);
  if(__temp455v__){
  free__temp430v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp456v__unsafe_ptr,&__temp456v__unsafe_size,&__temp456v__unsafe_align);
  buffer__unsafe_ptr=__temp456v__unsafe_ptr;
  buffer__unsafe_size=__temp456v__unsafe_size;
  buffer__unsafe_align=__temp456v__unsafe_align;
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp277v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=alloc__temp435v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp459v__unsafe_ptr,&__temp459v__unsafe_size,&__temp459v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp459v__unsafe_ptr;
  buffer__unsafe_size=__temp459v__unsafe_size;
  buffer__unsafe_align=__temp459v__unsafe_align;
  goto __temp_return;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp461v__);
  prev_bytes=__temp461v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp462v__);
  bytes=__temp462v__;
  __temp_errcode=realloc__temp420v(buffer__unsafe_ptr,bytes,&__temp463v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp463v__;
  lt__temp181v(prev_bytes,bytes,&__temp464v__);
  if(__temp464v__){
  zero__temp425v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp971v=buffer__unsafe_ptr;
  *__temp972v=buffer__unsafe_size;
  *__temp973v=buffer__unsafe_align;
  *__temp974v=buffer__unsafe_ptr;
  *__temp975v=buffer__unsafe_size;
  *__temp976v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp553v(void** __temp977v, unsigned long long* __temp978v, unsigned long long* __temp979v, unsigned long long* __temp980v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp981v, unsigned long long* __temp982v, unsigned long long* __temp983v, unsigned long long* __temp984v, unsigned long long* __temp985v, char* __temp986v) {
  void* buf__unsafe_ptr=*__temp977v;
  unsigned long long buf__unsafe_size=*__temp978v;
  unsigned long long buf__unsafe_align=*__temp979v;
  unsigned long long pos=*__temp980v;
  unsigned long long __temp554v__=0;
  unsigned long long __temp555v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp556v__=0;
  int __temp557v__=0;
  unsigned long long __temp558v=0;
  unsigned long long __temp559v__=0;
  unsigned long long prev_pos=0;
  void* __temp560v__buf__unsafe_ptr=0;
  unsigned long long __temp560v__buf__unsafe_size=0;
  unsigned long long __temp560v__buf__unsafe_align=0;
  unsigned long long __temp560v__dat__pos=0;
  unsigned long long __temp560v__dat__length=0;
  char __temp560v__dat__first=0;
  int __temp_errcode=0;
  len__temp531v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp554v__);
  add__temp109v(pos,__temp554v__,&__temp555v__);
  next_pos=__temp555v__;
  len__temp488v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp556v__);
  ge__temp253v(next_pos,__temp556v__,&__temp557v__);
  if(__temp557v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp558v=0;
  add__temp109v(pos,__temp558v,&__temp559v__);
  prev_pos=__temp559v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp560v__buf__unsafe_ptr,&__temp560v__buf__unsafe_size,&__temp560v__buf__unsafe_align,&__temp560v__dat__pos,&__temp560v__dat__length,&__temp560v__dat__first);
  *__temp977v=buf__unsafe_ptr;
  *__temp978v=buf__unsafe_size;
  *__temp979v=buf__unsafe_align;
  *__temp980v=pos;
  *__temp981v=__temp560v__buf__unsafe_ptr;
  *__temp982v=__temp560v__buf__unsafe_size;
  *__temp983v=__temp560v__buf__unsafe_align;
  *__temp984v=__temp560v__dat__pos;
  *__temp985v=__temp560v__dat__length;
  *__temp986v=__temp560v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp589v(void** __temp992v, unsigned long long* __temp993v, unsigned long long* __temp994v, unsigned long long* __temp995v, const char* _other, void** __temp996v, unsigned long long* __temp997v, unsigned long long* __temp998v, unsigned long long* __temp999v, unsigned long long* __temp1000v, char* __temp1001v) {
  void* li__buffer__unsafe_ptr=*__temp992v;
  unsigned long long li__buffer__unsafe_size=*__temp993v;
  unsigned long long li__buffer__unsafe_align=*__temp994v;
  unsigned long long li__length=*__temp995v;
  void* __temp590v__buf__unsafe_ptr=0;
  unsigned long long __temp590v__buf__unsafe_size=0;
  unsigned long long __temp590v__buf__unsafe_align=0;
  unsigned long long __temp590v__dat__pos=0;
  unsigned long long __temp590v__dat__length=0;
  char __temp590v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp591v__=0;
  unsigned long long __temp592v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp593v__=0;
  int __temp594v__=0;
  unsigned long long __temp595v=0;
  unsigned long long __temp596v__=0;
  unsigned long long __temp597v=0;
  unsigned long long __temp598v__=0;
  unsigned long long __temp599v__=0;
  void* __temp600v__unsafe_ptr=0;
  unsigned long long __temp600v__unsafe_size=0;
  unsigned long long __temp600v__unsafe_align=0;
  void* __temp602v__buf__unsafe_ptr=0;
  unsigned long long __temp602v__buf__unsafe_size=0;
  unsigned long long __temp602v__buf__unsafe_align=0;
  unsigned long long __temp602v__dat__pos=0;
  unsigned long long __temp602v__dat__length=0;
  char __temp602v__dat__first=0;
  unsigned long long __temp990v=0;
  int __temp991v=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp527v(_other,&__temp590v__buf__unsafe_ptr,&__temp590v__buf__unsafe_size,&__temp590v__buf__unsafe_align,&__temp590v__dat__pos,&__temp590v__dat__length,&__temp590v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp590v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp590v__buf__unsafe_size;
  other__buf__unsafe_align=__temp590v__buf__unsafe_align;
  other__dat__pos=__temp590v__dat__pos;
  other__dat__length=__temp590v__dat__length;
  other__dat__first=__temp590v__dat__first;
  prev_prev_length=li__length;
  len__temp531v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp591v__);
  add__temp109v(li__length,__temp591v__,&__temp592v__);
  prev_length=__temp592v__;
  len__temp488v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp593v__);
  ge__temp253v(prev_length,__temp593v__,&__temp594v__);
  if(__temp594v__){
  __temp595v=2;
  div__temp157v(prev_length,__temp595v,&__temp596v__);
  __temp597v=1;
  add__temp109v(__temp596v__,__temp597v,&__temp598v__);
  add__temp109v(prev_length,__temp598v__,&__temp599v__);
  __temp_errcode=resize__temp452v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp599v__,&__temp600v__unsafe_ptr,&__temp600v__unsafe_size,&__temp600v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp600v__unsafe_ptr;
  li__buffer__unsafe_size=__temp600v__unsafe_size;
  li__buffer__unsafe_align=__temp600v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp553v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp602v__buf__unsafe_ptr,&__temp602v__buf__unsafe_size,&__temp602v__buf__unsafe_align,&__temp602v__dat__pos,&__temp602v__dat__length,&__temp602v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp992v=li__buffer__unsafe_ptr;
  *__temp993v=li__buffer__unsafe_size;
  *__temp994v=li__buffer__unsafe_align;
  *__temp995v=li__length;
  *__temp996v=__temp602v__buf__unsafe_ptr;
  *__temp997v=__temp602v__buf__unsafe_size;
  *__temp998v=__temp602v__buf__unsafe_align;
  *__temp999v=__temp602v__dat__pos;
  *__temp1000v=__temp602v__dat__length;
  *__temp1001v=__temp602v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp885v(void** __temp1013v, unsigned long long* __temp1014v, unsigned long long* __temp1015v, unsigned long long* __temp1016v, unsigned long long* __temp1017v, char* __temp1018v, void** __temp1019v, unsigned long long* __temp1020v, unsigned long long* __temp1021v, unsigned long long* __temp1022v, unsigned long long* __temp1023v, char* __temp1024v) {
  void* __temp888v__unsafe_ptr=0;
  unsigned long long __temp888v__unsafe_size=0;
  unsigned long long __temp888v__unsafe_align=0;
  void* __temp889v__buffer__unsafe_ptr=0;
  unsigned long long __temp889v__buffer__unsafe_size=0;
  unsigned long long __temp889v__buffer__unsafe_align=0;
  unsigned long long __temp889v__length=0;
  void* __temp891v__buf__unsafe_ptr=0;
  unsigned long long __temp891v__buf__unsafe_size=0;
  unsigned long long __temp891v__buf__unsafe_align=0;
  unsigned long long __temp891v__dat__pos=0;
  unsigned long long __temp891v__dat__length=0;
  char __temp891v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  void* __temp894v__buf__unsafe_ptr=0;
  unsigned long long __temp894v__buf__unsafe_size=0;
  unsigned long long __temp894v__buf__unsafe_align=0;
  unsigned long long __temp894v__dat__pos=0;
  unsigned long long __temp894v__dat__length=0;
  char __temp894v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  unsigned long long __temp1007v=0;
  int __temp1008v=0;
  unsigned long long __temp1011v=0;
  int __temp1012v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp886v(&__temp888v__unsafe_ptr,&__temp888v__unsafe_size,&__temp888v__unsafe_align);
  list__temp495v(&__temp888v__unsafe_ptr,&__temp888v__unsafe_size,&__temp888v__unsafe_align,&__temp889v__buffer__unsafe_ptr,&__temp889v__buffer__unsafe_size,&__temp889v__buffer__unsafe_align,&__temp889v__length);
  __temp_errcode=copy__temp589v(&__temp888v__unsafe_ptr,&__temp888v__unsafe_size,&__temp888v__unsafe_align,&__temp888v__unsafe_size,__temp890v,&__temp891v__buf__unsafe_ptr,&__temp891v__buf__unsafe_size,&__temp891v__buf__unsafe_align,&__temp891v__dat__pos,&__temp891v__dat__length,&__temp891v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp891v__dat__pos;
  s1__dat__length=__temp891v__dat__length;
  s1__dat__first=__temp891v__dat__first;
  __temp_errcode=copy__temp589v(&__temp888v__unsafe_ptr,&__temp888v__unsafe_size,&__temp888v__unsafe_align,&__temp888v__unsafe_size,__temp893v,&__temp894v__buf__unsafe_ptr,&__temp894v__buf__unsafe_size,&__temp894v__buf__unsafe_align,&__temp894v__dat__pos,&__temp894v__dat__length,&__temp894v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp894v__dat__pos;
  s2__dat__length=__temp894v__dat__length;
  s2__dat__first=__temp894v__dat__first;
  print__temp343v(__temp896v);
  s1__buf__unsafe_ptr=__temp888v__unsafe_ptr;
  s1__buf__unsafe_size=__temp888v__unsafe_size;
  s1__buf__unsafe_align=__temp888v__unsafe_align;
  s2__buf__unsafe_ptr=__temp888v__unsafe_ptr;
  s2__buf__unsafe_size=__temp888v__unsafe_size;
  s2__buf__unsafe_align=__temp888v__unsafe_align;
  *__temp1013v=s1__buf__unsafe_ptr;
  *__temp1014v=s1__buf__unsafe_size;
  *__temp1015v=s1__buf__unsafe_align;
  *__temp1016v=s1__dat__pos;
  *__temp1017v=s1__dat__length;
  *__temp1018v=s1__dat__first;
  *__temp1019v=s2__buf__unsafe_ptr;
  *__temp1020v=s2__buf__unsafe_size;
  *__temp1021v=s2__buf__unsafe_align;
  *__temp1022v=s2__dat__pos;
  *__temp1023v=s2__dat__length;
  *__temp1024v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1025v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1025v=z;
}

static inline __attribute__((always_inline)) int print__temp568v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp570v__=0;
  int __temp571v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp570v__);
  gt__temp205v(__temp570v__,s__buf__unsafe_size,&__temp571v__);
  if(__temp571v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp898v() {
  void* __temp899v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp899v__s1__buf__unsafe_size=0;
  unsigned long long __temp899v__s1__buf__unsafe_align=0;
  unsigned long long __temp899v__s1__dat__pos=0;
  unsigned long long __temp899v__s1__dat__length=0;
  char __temp899v__s1__dat__first=0;
  void* __temp899v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp899v__s2__buf__unsafe_size=0;
  unsigned long long __temp899v__s2__buf__unsafe_align=0;
  unsigned long long __temp899v__s2__dat__pos=0;
  unsigned long long __temp899v__s2__dat__length=0;
  char __temp899v__s2__dat__first=0;
  void* s__s1__buf__unsafe_ptr=0;
  unsigned long long s__s1__buf__unsafe_size=0;
  unsigned long long s__s1__buf__unsafe_align=0;
  unsigned long long s__s1__dat__pos=0;
  unsigned long long s__s1__dat__length=0;
  char s__s1__dat__first=0;
  void* s__s2__buf__unsafe_ptr=0;
  unsigned long long s__s2__buf__unsafe_size=0;
  unsigned long long s__s2__buf__unsafe_align=0;
  unsigned long long s__s2__dat__pos=0;
  unsigned long long s__s2__dat__length=0;
  char s__s2__dat__first=0;
  unsigned long long __temp1030v=0;
  int __temp1031v=0;
  unsigned long long __temp1032v=0;
  int __temp1033v=0;
  int __temp_errcode=0;
  __temp_errcode=test__temp885v(&__temp899v__s1__buf__unsafe_ptr,&__temp899v__s1__buf__unsafe_size,&__temp899v__s1__buf__unsafe_align,&__temp899v__s1__dat__pos,&__temp899v__s1__dat__length,&__temp899v__s1__dat__first,&__temp899v__s2__buf__unsafe_ptr,&__temp899v__s2__buf__unsafe_size,&__temp899v__s2__buf__unsafe_align,&__temp899v__s2__dat__pos,&__temp899v__s2__dat__length,&__temp899v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp899v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp899v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp899v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp899v__s1__dat__pos;
  s__s1__dat__length=__temp899v__s1__dat__length;
  s__s1__dat__first=__temp899v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp899v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp899v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp899v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp899v__s2__dat__pos;
  s__s2__dat__length=__temp899v__s2__dat__length;
  s__s2__dat__first=__temp899v__s2__dat__first;
  __temp_errcode=print__temp568v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp568v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp343v(__temp903v);
  
  __temp_failure:__temp1032v=0;
  neq__temp301v(__temp899v__s2__buf__unsafe_size,__temp1032v,&__temp1033v);
  if(__temp1033v){
  __temp899v__s2__buf__unsafe_size=0;
  free__temp422v(&__temp899v__s1__buf__unsafe_ptr);
  }
  __temp1030v=0;
  neq__temp301v(__temp899v__s2__buf__unsafe_size,__temp1030v,&__temp1031v);
  if(__temp1031v){
  __temp899v__s2__buf__unsafe_size=0;
  free__temp422v(&__temp899v__s1__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp898v();return 0;}