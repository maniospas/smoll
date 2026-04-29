#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static inline void char__temp_buffer__buffer__temp1049v(void** __temp1061v, unsigned long long* __temp1062v, unsigned long long* __temp1063v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1061v=unsafe_ptr;
  *__temp1062v=unsafe_size;
  *__temp1063v=unsafe_align;
}

static inline void len__temp652v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1064v) {
  const char* __temp653v=0;
  __temp653v="the number of buffer elements";
  *__temp1064v=buffer__unsafe_size;
}

static inline void list__temp661v(void** __temp1065v, unsigned long long* __temp1066v, unsigned long long* __temp1067v, void** __temp1068v, unsigned long long* __temp1069v, unsigned long long* __temp1070v, unsigned long long* __temp1071v) {
  void* buffer__unsafe_ptr=*__temp1065v;
  unsigned long long buffer__unsafe_size=*__temp1066v;
  unsigned long long buffer__unsafe_align=*__temp1067v;
  const char* __temp662v=0;
  const char* __temp663v=0;
  const char* __temp664v=0;
  unsigned long long __temp665v__=0;
  unsigned long long length=0;
  __temp662v="list of buffer";
  __temp663v="List defined over a mutable buffer that is automatically managed and resized.";
  __temp664v="A capacity is maintained so that resizes are not performed too frequently.";
  len__temp652v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp665v__);
  length=__temp665v__;
  *__temp1065v=buffer__unsafe_ptr;
  *__temp1066v=buffer__unsafe_size;
  *__temp1067v=buffer__unsafe_align;
  *__temp1068v=buffer__unsafe_ptr;
  *__temp1069v=buffer__unsafe_size;
  *__temp1070v=buffer__unsafe_align;
  *__temp1071v=length;
}

static inline void char__temp_buffer__buffer__temp656v(void** __temp1072v, unsigned long long* __temp1073v, unsigned long long* __temp1074v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1072v=unsafe_ptr;
  *__temp1073v=unsafe_size;
  *__temp1074v=unsafe_align;
}

static inline void false__temp7v(int* __temp1075v) {
  int value=0;
  *__temp1075v=value;
}

static inline void not__temp33v(int __temp_anon0, int* __temp1076v) {
  const char* __temp34v=0;
  int __temp35v__=0;
  __temp34v="logical inverse";
  false__temp7v(&__temp35v__);
  *__temp1076v=__temp35v__;
}

static inline void is_different__temp105v(unsigned long long x, unsigned long long y, int* __temp1077v) {
  int __temp106v=0;
  int __temp107v__=0;
  not__temp33v(__temp106v,&__temp107v__);
  *__temp1077v=__temp107v__;
}

static inline void neq__temp402v(unsigned long long x, unsigned long long y, int* __temp1078v) {
  const char* __temp403v=0;
  int __temp404v__=0;
  int z=0;
  __temp403v="unequal to";
  is_different__temp105v(x,y,&__temp404v__);
  z=x!=y?1:0;
  *__temp1078v=z;
}

static inline void ge__temp336v(unsigned long long x, unsigned long long y, int* __temp1079v) {
  const char* __temp337v=0;
  int __temp338v__=0;
  int z=0;
  __temp337v="greater than or equal to";
  is_different__temp105v(x,y,&__temp338v__);
  z=x>=y?1:0;
  *__temp1079v=z;
}

static inline void mul__temp171v(unsigned long long x, unsigned long long y, unsigned long long* __temp1080v) {
  const char* __temp172v=0;
  int __temp173v__=0;
  unsigned long long z=0;
  __temp172v="multiply with";
  is_different__temp105v(x,y,&__temp173v__);
  z=x*y;
  *__temp1080v=z;
}

static inline void attach_type__temp12v(void* to, void* from, void** __temp1081v) {
  *__temp1081v=to;
}

static inline void add__temp577v(void* allocated, unsigned long long offset, void** __temp1082v) {
  void* element=0;
  void* __temp578v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp578v__);
  *__temp1082v=__temp578v__;
}

static inline int get__temp647v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1083v) {
  const char* __temp648v=0;
  int __temp649v__=0;
  unsigned long long __temp650v__=0;
  void* __temp651v__=0;
  int __temp_errcode=0;
  __temp648v="get a pointer to a buffer element";
  ge__temp336v(i,buffer__unsafe_size,&__temp649v__);
  if(__temp649v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp171v(i,buffer__unsafe_align,&__temp650v__);
  add__temp577v(buffer__unsafe_ptr,__temp650v__,&__temp651v__);
  *__temp1083v=__temp651v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void str__temp691v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1084v, unsigned long long* __temp1085v, unsigned long long* __temp1086v, unsigned long long* __temp1087v, unsigned long long* __temp1088v, char* __temp1089v) {
  const char* __temp692v=0;
  __temp692v="a string residing on a buffer";
  *__temp1084v=buf__unsafe_ptr;
  *__temp1085v=buf__unsafe_size;
  *__temp1086v=buf__unsafe_align;
  *__temp1087v=dat__pos;
  *__temp1088v=dat__length;
  *__temp1089v=dat__first;
}

static inline int str__temp693v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1090v, unsigned long long* __temp1091v, unsigned long long* __temp1092v, unsigned long long* __temp1093v, unsigned long long* __temp1094v, char* __temp1095v) {
  const char* __temp694v=0;
  unsigned long long __temp695v=0;
  int __temp696v__=0;
  void* __temp697v__=0;
  char __temp698v__value=0;
  char first=0;
  void* __temp699v__buf__unsafe_ptr=0;
  unsigned long long __temp699v__buf__unsafe_size=0;
  unsigned long long __temp699v__buf__unsafe_align=0;
  unsigned long long __temp699v__dat__pos=0;
  unsigned long long __temp699v__dat__length=0;
  char __temp699v__dat__first=0;
  int __temp_errcode=0;
  __temp694v="a string residing on a buffer that automatically detects the first character";
  __temp695v=0;
  neq__temp402v(length,__temp695v,&__temp696v__);
  if(__temp696v__){
  __temp_errcode=get__temp647v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp697v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp697v__){
  goto __temp_failure;
  }
  memcpy(&__temp698v__value,(char*)__temp697v__,1);
  first=__temp698v__value;
  }
  str__temp691v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp699v__buf__unsafe_ptr,&__temp699v__buf__unsafe_size,&__temp699v__buf__unsafe_align,&__temp699v__dat__pos,&__temp699v__dat__length,&__temp699v__dat__first);
  *__temp1090v=__temp699v__buf__unsafe_ptr;
  *__temp1091v=__temp699v__buf__unsafe_size;
  *__temp1092v=__temp699v__buf__unsafe_align;
  *__temp1093v=__temp699v__dat__pos;
  *__temp1094v=__temp699v__dat__length;
  *__temp1095v=__temp699v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int str__temp700v(const char* c, void** __temp1097v, unsigned long long* __temp1098v, unsigned long long* __temp1099v, unsigned long long* __temp1100v, unsigned long long* __temp1101v, char* __temp1102v) {
  const char* __temp701v=0;
  const char* __temp702v=0;
  void* __temp703v__unsafe_ptr=0;
  unsigned long long __temp703v__unsafe_size=0;
  unsigned long long __temp703v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp704v=0;
  void* __temp705v__buf__unsafe_ptr=0;
  unsigned long long __temp705v__buf__unsafe_size=0;
  unsigned long long __temp705v__buf__unsafe_align=0;
  unsigned long long __temp705v__dat__pos=0;
  unsigned long long __temp705v__dat__length=0;
  char __temp705v__dat__first=0;
  int __temp_errcode=0;
  __temp701v="convert to string";
  __temp702v="Defines an implicit constant buffer using the cstr's memory data.";
  char__temp_buffer__buffer__temp656v(&__temp703v__unsafe_ptr,&__temp703v__unsafe_size,&__temp703v__unsafe_align);
  buf__unsafe_ptr=__temp703v__unsafe_ptr;
  buf__unsafe_size=__temp703v__unsafe_size;
  buf__unsafe_align=__temp703v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp704v=0;
  __temp_errcode=str__temp693v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp704v,length,&__temp705v__buf__unsafe_ptr,&__temp705v__buf__unsafe_size,&__temp705v__buf__unsafe_align,&__temp705v__dat__pos,&__temp705v__dat__length,&__temp705v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1097v=__temp705v__buf__unsafe_ptr;
  *__temp1098v=__temp705v__buf__unsafe_size;
  *__temp1099v=__temp705v__buf__unsafe_align;
  *__temp1100v=__temp705v__dat__pos;
  *__temp1101v=__temp705v__dat__length;
  *__temp1102v=__temp705v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void len__temp706v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1103v) {
  const char* __temp707v=0;
  __temp707v="string length";
  *__temp1103v=s__dat__length;
}

static inline void add__temp138v(unsigned long long x, unsigned long long y, unsigned long long* __temp1104v) {
  const char* __temp139v=0;
  int __temp140v__=0;
  unsigned long long z=0;
  __temp139v="add";
  is_different__temp105v(x,y,&__temp140v__);
  z=x+y;
  *__temp1104v=z;
}

static inline void div__temp204v(unsigned long long x, unsigned long long y, unsigned long long* __temp1105v) {
  const char* __temp205v=0;
  int __temp206v__=0;
  unsigned long long z=0;
  __temp205v="divide by";
  is_different__temp105v(x,y,&__temp206v__);
  z=x/y;
  *__temp1105v=z;
}

static inline void eq__temp369v(unsigned long long x, unsigned long long y, int* __temp1106v) {
  const char* __temp370v=0;
  int __temp371v__=0;
  int z=0;
  __temp370v="equal to";
  is_different__temp105v(x,y,&__temp371v__);
  z=x==y?1:0;
  *__temp1106v=z;
}

static inline void free__temp575v(void** __temp1107v) {
  void* allocated=*__temp1107v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1107v=allocated;
}

static inline void free__temp581v(void** __temp1108v, unsigned long long* __temp1109v, unsigned long long* __temp1110v, void** __temp1111v, unsigned long long* __temp1112v, unsigned long long* __temp1113v) {
  void* buffer__unsafe_ptr=*__temp1108v;
  unsigned long long buffer__unsafe_size=*__temp1109v;
  unsigned long long buffer__unsafe_align=*__temp1110v;
  const char* __temp582v=0;
  unsigned long long __temp583v=0;
  int __temp584v__=0;
  unsigned long long __temp585v=0;
  __temp582v="frees a buffer - done automatically too";
  __temp583v=0;
  eq__temp369v(buffer__unsafe_size,__temp583v,&__temp584v__);
  if(__temp584v__){
  goto __temp_return;
  }
  __temp585v=0;
  buffer__unsafe_size=__temp585v;
  free__temp575v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp1108v=buffer__unsafe_ptr;
  *__temp1109v=buffer__unsafe_size;
  *__temp1110v=buffer__unsafe_align;
  *__temp1111v=buffer__unsafe_ptr;
  *__temp1112v=buffer__unsafe_size;
  *__temp1113v=buffer__unsafe_align;
}

static inline void zero__temp576v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline int alloc__temp572v(unsigned long long bytes, void** __temp1114v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1114v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int alloc__temp587v(void** __temp1115v, unsigned long long* __temp1116v, unsigned long long* __temp1117v, unsigned long long size, void** __temp1118v, unsigned long long* __temp1119v, unsigned long long* __temp1120v) {
  void* buffer__unsafe_ptr=*__temp1115v;
  unsigned long long buffer__unsafe_size=*__temp1116v;
  unsigned long long buffer__unsafe_align=*__temp1117v;
  const char* __temp588v=0;
  const char* __temp589v=0;
  const char* __temp590v=0;
  const char* __temp591v=0;
  const char* __temp592v=0;
  unsigned long long __temp593v=0;
  int __temp594v__=0;
  int __temp597v__=0;
  unsigned long long __temp598v=0;
  int __temp599v__=0;
  unsigned long long __temp600v=0;
  unsigned long long __temp601v__=0;
  unsigned long long __temp603v=0;
  int __temp604v__=0;
  unsigned long long __temp605v__=0;
  unsigned long long bytes=0;
  void* __temp606v__=0;
  unsigned long long __temp607v=0;
  int __temp_errcode=0;
  __temp588v="allocates a buffer";
  __temp589v="Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,";
  __temp590v="as it never reallocates an allocation. For convenience for usage within loops, allocation";
  __temp591v="of the same size only zero-initializes the buffer. If a different size is given, and the";
  __temp592v="buffer is non-empty, this fails. Consider freeing the buffer with `free` to allocate again.";
  eq__temp369v(buffer__unsafe_size,size,&__temp597v__);
  if(__temp597v__){
  __temp598v=0;
  neq__temp402v(size,__temp598v,&__temp599v__);
  if(__temp599v__){
  __temp600v=0;
  mul__temp171v(buffer__unsafe_align,size,&__temp601v__);
  zero__temp576v(buffer__unsafe_ptr,__temp600v,__temp601v__);
  }
  goto __temp_return;
  }
  __temp603v=0;
  neq__temp402v(buffer__unsafe_size,__temp603v,&__temp604v__);
  if(__temp604v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp171v(buffer__unsafe_align,size,&__temp605v__);
  bytes=__temp605v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp572v(bytes,&__temp606v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp606v__;
  __temp607v=0;
  zero__temp576v(buffer__unsafe_ptr,__temp607v,bytes);
  __temp_return:
  *__temp1115v=buffer__unsafe_ptr;
  *__temp1116v=buffer__unsafe_size;
  *__temp1117v=buffer__unsafe_align;
  *__temp1118v=buffer__unsafe_ptr;
  *__temp1119v=buffer__unsafe_size;
  *__temp1120v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int realloc__temp573v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1121v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp574v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp12v(new_allocated,allocated__unsafe_ptr,&__temp574v__);
  *__temp1121v=__temp574v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void lt__temp237v(unsigned long long x, unsigned long long y, int* __temp1122v) {
  const char* __temp238v=0;
  int __temp239v__=0;
  int z=0;
  __temp238v="less than";
  is_different__temp105v(x,y,&__temp239v__);
  z=x<y?1:0;
  *__temp1122v=z;
}

int resize__temp609v(void** __temp1127v, unsigned long long* __temp1128v, unsigned long long* __temp1129v, unsigned long long size, void** __temp1130v, unsigned long long* __temp1131v, unsigned long long* __temp1132v) {
  void* buffer__unsafe_ptr=*__temp1127v;
  unsigned long long buffer__unsafe_size=*__temp1128v;
  unsigned long long buffer__unsafe_align=*__temp1129v;
  const char* __temp610v=0;
  const char* __temp611v=0;
  const char* __temp612v=0;
  int __temp613v__=0;
  unsigned long long __temp614v=0;
  int __temp615v__=0;
  void* __temp616v__unsafe_ptr=0;
  unsigned long long __temp616v__unsafe_size=0;
  unsigned long long __temp616v__unsafe_align=0;
  unsigned long long __temp617v=0;
  int __temp618v__=0;
  void* __temp619v__unsafe_ptr=0;
  unsigned long long __temp619v__unsafe_size=0;
  unsigned long long __temp619v__unsafe_align=0;
  unsigned long long __temp621v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp622v__=0;
  unsigned long long bytes=0;
  void* __temp623v__=0;
  int __temp624v__=0;
  unsigned long long __temp1125v=0;
  int __temp1126v=0;
  int __temp_errcode=0;
  __temp610v="resize the buffer";
  __temp611v="This does nothing if the previous size is the same, frees the buffer if new size is zero.";
  __temp612v="If old size was zero, the buffer is allocated. The buffer is returned for convenience.";
  eq__temp369v(buffer__unsafe_size,size,&__temp613v__);
  if(__temp613v__){
  goto __temp_return;
  }
  __temp614v=0;
  eq__temp369v(size,__temp614v,&__temp615v__);
  if(__temp615v__){
  free__temp581v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp616v__unsafe_ptr,&__temp616v__unsafe_size,&__temp616v__unsafe_align);
  buffer__unsafe_ptr=__temp616v__unsafe_ptr;
  buffer__unsafe_size=__temp616v__unsafe_size;
  buffer__unsafe_align=__temp616v__unsafe_align;
  goto __temp_return;
  }
  __temp617v=0;
  eq__temp369v(buffer__unsafe_size,__temp617v,&__temp618v__);
  if(__temp618v__){
  __temp_errcode=alloc__temp587v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp619v__unsafe_ptr,&__temp619v__unsafe_size,&__temp619v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp619v__unsafe_ptr;
  buffer__unsafe_size=__temp619v__unsafe_size;
  buffer__unsafe_align=__temp619v__unsafe_align;
  goto __temp_return;
  }
  mul__temp171v(buffer__unsafe_size,buffer__unsafe_align,&__temp621v__);
  prev_bytes=__temp621v__;
  buffer__unsafe_size=size;
  mul__temp171v(buffer__unsafe_align,size,&__temp622v__);
  bytes=__temp622v__;
  __temp_errcode=realloc__temp573v(buffer__unsafe_ptr,bytes,&__temp623v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp623v__;
  lt__temp237v(prev_bytes,bytes,&__temp624v__);
  if(__temp624v__){
  zero__temp576v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1127v=buffer__unsafe_ptr;
  *__temp1128v=buffer__unsafe_size;
  *__temp1129v=buffer__unsafe_align;
  *__temp1130v=buffer__unsafe_ptr;
  *__temp1131v=buffer__unsafe_size;
  *__temp1132v=buffer__unsafe_align;
  
  __temp_failure:__temp1125v=0;
  neq__temp402v(__temp619v__unsafe_size,__temp1125v,&__temp1126v);
  if(__temp1126v){
  __temp619v__unsafe_size=0;
  free__temp575v(&__temp619v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline int copy__temp708v(void** __temp1133v, unsigned long long* __temp1134v, unsigned long long* __temp1135v, unsigned long long* __temp1136v, void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1137v, unsigned long long* __temp1138v, unsigned long long* __temp1139v, unsigned long long* __temp1140v, unsigned long long* __temp1141v, char* __temp1142v) {
  void* buf__unsafe_ptr=*__temp1133v;
  unsigned long long buf__unsafe_size=*__temp1134v;
  unsigned long long buf__unsafe_align=*__temp1135v;
  unsigned long long pos=*__temp1136v;
  const char* __temp709v=0;
  const char* __temp710v=0;
  const char* __temp711v=0;
  const char* __temp712v=0;
  unsigned long long __temp713v__=0;
  unsigned long long __temp714v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp715v__=0;
  int __temp716v__=0;
  unsigned long long prev_pos=0;
  void* __temp717v__buf__unsafe_ptr=0;
  unsigned long long __temp717v__buf__unsafe_size=0;
  unsigned long long __temp717v__buf__unsafe_align=0;
  unsigned long long __temp717v__dat__pos=0;
  unsigned long long __temp717v__dat__length=0;
  char __temp717v__dat__first=0;
  int __temp_errcode=0;
  __temp709v="copy a string";
  __temp710v="Constructs the copy on the buffer at a given position and returns it.";
  __temp711v="The position is mutated to indicate where the string ends (e.g., to copy more strings).";
  __temp712v="This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.";
  len__temp706v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp713v__);
  add__temp138v(pos,__temp713v__,&__temp714v__);
  next_pos=__temp714v__;
  len__temp652v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp715v__);
  ge__temp336v(next_pos,__temp715v__,&__temp716v__);
  if(__temp716v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  prev_pos=pos;
  pos=next_pos;
  str__temp691v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp717v__buf__unsafe_ptr,&__temp717v__buf__unsafe_size,&__temp717v__buf__unsafe_align,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
  *__temp1133v=buf__unsafe_ptr;
  *__temp1134v=buf__unsafe_size;
  *__temp1135v=buf__unsafe_align;
  *__temp1136v=pos;
  *__temp1137v=__temp717v__buf__unsafe_ptr;
  *__temp1138v=__temp717v__buf__unsafe_size;
  *__temp1139v=__temp717v__buf__unsafe_align;
  *__temp1140v=__temp717v__dat__pos;
  *__temp1141v=__temp717v__dat__length;
  *__temp1142v=__temp717v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp753v(void** __temp1145v, unsigned long long* __temp1146v, unsigned long long* __temp1147v, unsigned long long* __temp1148v, const char* _other, void** __temp1149v, unsigned long long* __temp1150v, unsigned long long* __temp1151v, unsigned long long* __temp1152v, unsigned long long* __temp1153v, char* __temp1154v) {
  void* li__buffer__unsafe_ptr=*__temp1145v;
  unsigned long long li__buffer__unsafe_size=*__temp1146v;
  unsigned long long li__buffer__unsafe_align=*__temp1147v;
  unsigned long long li__length=*__temp1148v;
  const char* __temp754v=0;
  const char* __temp755v=0;
  const char* __temp756v=0;
  const char* __temp757v=0;
  void* __temp758v__buf__unsafe_ptr=0;
  unsigned long long __temp758v__buf__unsafe_size=0;
  unsigned long long __temp758v__buf__unsafe_align=0;
  unsigned long long __temp758v__dat__pos=0;
  unsigned long long __temp758v__dat__length=0;
  char __temp758v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp759v__=0;
  unsigned long long __temp760v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp761v__=0;
  int __temp762v__=0;
  unsigned long long __temp763v=0;
  unsigned long long __temp764v__=0;
  unsigned long long __temp765v=0;
  unsigned long long __temp766v__=0;
  unsigned long long __temp767v__=0;
  void* __temp768v__unsafe_ptr=0;
  unsigned long long __temp768v__unsafe_size=0;
  unsigned long long __temp768v__unsafe_align=0;
  void* __temp769v__buf__unsafe_ptr=0;
  unsigned long long __temp769v__buf__unsafe_size=0;
  unsigned long long __temp769v__buf__unsafe_align=0;
  unsigned long long __temp769v__dat__pos=0;
  unsigned long long __temp769v__dat__length=0;
  char __temp769v__dat__first=0;
  int __temp_errcode=0;
  __temp754v="copy a string";
  __temp755v="Constructs the copy on a buffer managed by a list.";
  __temp756v="The list may automatically resize its managed buffer to fit the new string.";
  __temp757v="This operation therefore destabilizes memory, and the `.dat` segment of strings should be obtained.";
  __temp_errcode=str__temp700v(_other,&__temp758v__buf__unsafe_ptr,&__temp758v__buf__unsafe_size,&__temp758v__buf__unsafe_align,&__temp758v__dat__pos,&__temp758v__dat__length,&__temp758v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp758v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp758v__buf__unsafe_size;
  other__buf__unsafe_align=__temp758v__buf__unsafe_align;
  other__dat__pos=__temp758v__dat__pos;
  other__dat__length=__temp758v__dat__length;
  other__dat__first=__temp758v__dat__first;
  prev_prev_length=li__length;
  len__temp706v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp759v__);
  add__temp138v(li__length,__temp759v__,&__temp760v__);
  prev_length=__temp760v__;
  len__temp652v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp761v__);
  ge__temp336v(prev_length,__temp761v__,&__temp762v__);
  if(__temp762v__){
  __temp763v=2;
  div__temp204v(prev_length,__temp763v,&__temp764v__);
  __temp765v=1;
  add__temp138v(__temp764v__,__temp765v,&__temp766v__);
  add__temp138v(prev_length,__temp766v__,&__temp767v__);
  __temp_errcode=resize__temp609v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp767v__,&__temp768v__unsafe_ptr,&__temp768v__unsafe_size,&__temp768v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp768v__unsafe_ptr;
  li__buffer__unsafe_size=__temp768v__unsafe_size;
  li__buffer__unsafe_align=__temp768v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp708v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp769v__buf__unsafe_ptr,&__temp769v__buf__unsafe_size,&__temp769v__buf__unsafe_align,&__temp769v__dat__pos,&__temp769v__dat__length,&__temp769v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1145v=li__buffer__unsafe_ptr;
  *__temp1146v=li__buffer__unsafe_size;
  *__temp1147v=li__buffer__unsafe_align;
  *__temp1148v=li__length;
  *__temp1149v=__temp769v__buf__unsafe_ptr;
  *__temp1150v=__temp769v__buf__unsafe_size;
  *__temp1151v=__temp769v__buf__unsafe_align;
  *__temp1152v=__temp769v__dat__pos;
  *__temp1153v=__temp769v__dat__length;
  *__temp1154v=__temp769v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline int get__temp770v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long i, void** __temp1155v) {
  const char* __temp771v=0;
  unsigned long long __temp772v__=0;
  void* __temp773v__=0;
  int __temp_errcode=0;
  __temp771v="a character in a string";
  add__temp138v(s__dat__pos,i,&__temp772v__);
  __temp_errcode=get__temp647v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,__temp772v__,&__temp773v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1155v=__temp773v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void char__temp777v(const char* s, char* __temp1156v) {
  const char* __temp778v=0;
  const char* __temp779v=0;
  char c=0;
  __temp778v="treat as character";
  __temp779v="The first character of a string is extracted, for example to write `c = char \"C\"`.";
  c=s?s[0]:0;
  *__temp1156v=c;
}

static inline void eq__temp780v(char x, char y, int* __temp1157v) {
  const char* __temp781v=0;
  int z=0;
  __temp781v="equals";
  z=(x==y);
  *__temp1157v=z;
}

static inline void not__temp19v(int value, int* __temp1158v) {
  const char* __temp20v=0;
  int z=0;
  __temp20v="logical inverse";
  z=value?0:1;
  *__temp1158v=z;
}

static inline void is_different__temp81v(double x, double y, int* __temp1159v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp33v(__temp82v,&__temp83v__);
  *__temp1159v=__temp83v__;
}

static inline void mul__temp141v(double x, double y, double* __temp1160v) {
  const char* __temp142v=0;
  int __temp143v__=0;
  double z=0;
  __temp142v="multiply with";
  is_different__temp81v(x,y,&__temp143v__);
  z=x*y;
  *__temp1160v=z;
}

static inline void add__temp108v(double x, double y, double* __temp1161v) {
  const char* __temp109v=0;
  int __temp110v__=0;
  double z=0;
  __temp109v="add";
  is_different__temp81v(x,y,&__temp110v__);
  z=x+y;
  *__temp1161v=z;
}

static inline void sub__temp405v(double x, double y, double* __temp1162v) {
  const char* __temp406v=0;
  int __temp407v__=0;
  double z=0;
  __temp406v="substract by";
  is_different__temp81v(x,y,&__temp407v__);
  z=x-y;
  *__temp1162v=z;
}

static inline int float__temp922v(void* _s__buf__unsafe_ptr, unsigned long long _s__buf__unsafe_size, unsigned long long _s__buf__unsafe_align, unsigned long long _s__dat__pos, unsigned long long _s__dat__length, char _s__dat__first, double* __temp1164v) {
  const char* __temp923v=0;
  void* __temp924v__buf__unsafe_ptr=0;
  unsigned long long __temp924v__buf__unsafe_size=0;
  unsigned long long __temp924v__buf__unsafe_align=0;
  unsigned long long __temp924v__dat__pos=0;
  unsigned long long __temp924v__dat__length=0;
  char __temp924v__dat__first=0;
  void* s__buf__unsafe_ptr=0;
  unsigned long long s__buf__unsafe_size=0;
  unsigned long long s__buf__unsafe_align=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  unsigned long long __temp925v=0;
  unsigned long long __temp926v__=0;
  int __temp927v__=0;
  double __temp928v=0;
  double number=0;
  unsigned long long __temp929v=0;
  unsigned long long i=0;
  unsigned long long __temp930v=0;
  unsigned long long __temp931v__=0;
  int __temp932v__=0;
  unsigned long long __temp933v=0;
  unsigned long long __temp934v=0;
  void* __temp935v__=0;
  char __temp936v__value=0;
  const char* __temp937v=0;
  char __temp938v__=0;
  int __temp939v__=0;
  int negative=0;
  void* __temp944v__=0;
  char __temp945v__value=0;
  const char* __temp946v=0;
  char __temp947v__=0;
  int __temp948v__=0;
  unsigned long long __temp949v=0;
  unsigned long long __temp950v__=0;
  unsigned long long __temp951v__=0;
  int __temp952v__=0;
  unsigned long long __temp940v=0;
  unsigned long long __temp941v__=0;
  unsigned long long __temp942v__=0;
  int __temp943v__=0;
  unsigned long long __temp953v__=0;
  int __temp954v__=0;
  void* __temp955v__=0;
  char __temp956v__value=0;
  char c=0;
  int is_digit=0;
  double digit=0;
  const char* __temp957v=0;
  char __temp958v__=0;
  int __temp959v__=0;
  int is_dot=0;
  unsigned long long __temp960v=0;
  unsigned long long __temp961v__=0;
  int __temp962v__=0;
  double __temp963v=0;
  double __temp964v__=0;
  double __temp965v__=0;
  unsigned long long __temp966v=0;
  unsigned long long __temp967v__=0;
  unsigned long long __temp968v__=0;
  int __temp969v__=0;
  double __temp970v=0;
  double base=0;
  unsigned long long __temp971v__=0;
  int __temp972v__=0;
  void* __temp973v__=0;
  char __temp974v__value=0;
  char d=0;
  int is_decimal_digit=0;
  double decimal_digit=0;
  int __temp975v__=0;
  double __temp976v__=0;
  double __temp977v__=0;
  double __temp978v=0;
  double __temp979v__=0;
  unsigned long long __temp980v=0;
  unsigned long long __temp981v__=0;
  double __temp982v=0;
  double __temp983v__=0;
  int __temp_errcode=0;
  __temp923v="converts a string to a float";
  str__temp691v(_s__buf__unsafe_ptr,_s__buf__unsafe_size,_s__buf__unsafe_align,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp924v__buf__unsafe_ptr,&__temp924v__buf__unsafe_size,&__temp924v__buf__unsafe_align,&__temp924v__dat__pos,&__temp924v__dat__length,&__temp924v__dat__first);
  s__buf__unsafe_ptr=__temp924v__buf__unsafe_ptr;
  s__buf__unsafe_size=__temp924v__buf__unsafe_size;
  s__buf__unsafe_align=__temp924v__buf__unsafe_align;
  s__dat__pos=__temp924v__dat__pos;
  s__dat__length=__temp924v__dat__length;
  s__dat__first=__temp924v__dat__first;
  __temp925v=0;
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp926v__);
  eq__temp369v(__temp925v,__temp926v__,&__temp927v__);
  if(__temp927v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  __temp928v=0.0;
  number=__temp928v;
  __temp929v=0;
  i=__temp929v;
  __temp930v=0;
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp931v__);
  eq__temp369v(__temp930v,__temp931v__,&__temp932v__);
  if(__temp932v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  __temp933v=0;
  i=__temp933v;
  __temp934v=0;
  __temp_errcode=get__temp770v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,__temp934v,&__temp935v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp935v__){
  goto __temp_failure;
  }
  memcpy(&__temp936v__value,(char*)__temp935v__,1);
  __temp937v="-";
  char__temp777v(__temp937v,&__temp938v__);
  eq__temp780v(__temp936v__value,__temp938v__,&__temp939v__);
  negative=__temp939v__;
  if(negative){
  __temp940v=1;
  add__temp138v(i,__temp940v,&__temp941v__);
  i=__temp941v__;
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp942v__);
  eq__temp369v(i,__temp942v__,&__temp943v__);
  if(__temp943v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  }
  else{
  __temp_errcode=get__temp770v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp944v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp944v__){
  goto __temp_failure;
  }
  memcpy(&__temp945v__value,(char*)__temp944v__,1);
  __temp946v="+";
  char__temp777v(__temp946v,&__temp947v__);
  eq__temp780v(__temp945v__value,__temp947v__,&__temp948v__);
  if(__temp948v__){
  __temp949v=1;
  add__temp138v(i,__temp949v,&__temp950v__);
  i=__temp950v__;
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp951v__);
  eq__temp369v(i,__temp951v__,&__temp952v__);
  if(__temp952v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  }
  }
  while(1){
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp953v__);
  lt__temp237v(i,__temp953v__,&__temp954v__);
  if(!__temp954v__)break;
  __temp_errcode=get__temp770v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp955v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp955v__){
  goto __temp_failure;
  }
  memcpy(&__temp956v__value,(char*)__temp955v__,1);
  c=__temp956v__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  __temp957v=".";
  char__temp777v(__temp957v,&__temp958v__);
  eq__temp780v(c,__temp958v__,&__temp959v__);
  is_dot=__temp959v__;
  if(is_dot){
  __temp960v=1;
  add__temp138v(i,__temp960v,&__temp961v__);
  i=__temp961v__;
  break;
  }
  not__temp19v(is_digit,&__temp962v__);
  if(__temp962v__){
  __temp_errcode=20;
  goto __temp_failure;
  }
  __temp963v=10.0;
  mul__temp141v(number,__temp963v,&__temp964v__);
  add__temp108v(__temp964v__,digit,&__temp965v__);
  number=__temp965v__;
  __temp966v=1;
  add__temp138v(i,__temp966v,&__temp967v__);
  i=__temp967v__;
  }
  if(is_dot){
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp968v__);
  eq__temp369v(i,__temp968v__,&__temp969v__);
  if(__temp969v__){
  __temp_errcode=21;
  goto __temp_failure;
  }
  __temp970v=0.1;
  base=__temp970v;
  while(1){
  len__temp706v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,&__temp971v__);
  lt__temp237v(i,__temp971v__,&__temp972v__);
  if(!__temp972v__)break;
  __temp_errcode=get__temp770v(s__buf__unsafe_ptr,s__buf__unsafe_size,s__buf__unsafe_align,s__dat__pos,s__dat__length,s__dat__first,i,&__temp973v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp973v__){
  goto __temp_failure;
  }
  memcpy(&__temp974v__value,(char*)__temp973v__,1);
  d=__temp974v__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__temp19v(is_decimal_digit,&__temp975v__);
  if(__temp975v__){
  __temp_errcode=20;
  goto __temp_failure;
  }
  mul__temp141v(decimal_digit,base,&__temp976v__);
  add__temp108v(number,__temp976v__,&__temp977v__);
  number=__temp977v__;
  __temp978v=0.1;
  mul__temp141v(base,__temp978v,&__temp979v__);
  base=__temp979v__;
  __temp980v=1;
  add__temp138v(i,__temp980v,&__temp981v__);
  i=__temp981v__;
  }
  }
  if(negative){
  __temp982v=0.0;
  sub__temp405v(__temp982v,number,&__temp983v__);
  number=__temp983v__;
  }
  *__temp1164v=number;
  
  __temp_failure:
  return __temp_errcode;
}

static inline void print__temp465v(double value) {
  const char* __temp466v=0;
  const char* __temp468v=0;
  const char* __temp469v=0;
  const char* endl=0;
  __temp466v="prints a float";
  __temp468v="automatically ends the line too";
  __temp469v="\n";
  endl=__temp469v;
  printf("%.6f%s",value,endl);
}

static inline void print__temp481v(unsigned long long value) {
  const char* __temp482v=0;
  const char* __temp484v=0;
  const char* __temp485v=0;
  const char* endl=0;
  __temp482v="prints an unsigned integer";
  __temp484v="automatically ends the line too";
  __temp485v="\n";
  endl=__temp485v;
  printf("%llu%s",value,endl);
}

static inline int main__temp1048v() {
  void* __temp1051v__unsafe_ptr=0;
  unsigned long long __temp1051v__unsafe_size=0;
  unsigned long long __temp1051v__unsafe_align=0;
  void* __temp1052v__buffer__unsafe_ptr=0;
  unsigned long long __temp1052v__buffer__unsafe_size=0;
  unsigned long long __temp1052v__buffer__unsafe_align=0;
  unsigned long long __temp1052v__length=0;
  void* mem__buffer__unsafe_ptr=0;
  unsigned long long mem__buffer__unsafe_size=0;
  unsigned long long mem__buffer__unsafe_align=0;
  unsigned long long mem__length=0;
  const char* __temp1053v=0;
  void* __temp1054v__buf__unsafe_ptr=0;
  unsigned long long __temp1054v__buf__unsafe_size=0;
  unsigned long long __temp1054v__buf__unsafe_align=0;
  unsigned long long __temp1054v__dat__pos=0;
  unsigned long long __temp1054v__dat__length=0;
  char __temp1054v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  const char* __temp1055v=0;
  void* __temp1056v__buf__unsafe_ptr=0;
  unsigned long long __temp1056v__buf__unsafe_size=0;
  unsigned long long __temp1056v__buf__unsafe_align=0;
  unsigned long long __temp1056v__dat__pos=0;
  unsigned long long __temp1056v__dat__length=0;
  char __temp1056v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  double __temp1057v__=0;
  unsigned long long __temp1059v__=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp1049v(&__temp1051v__unsafe_ptr,&__temp1051v__unsafe_size,&__temp1051v__unsafe_align);
  list__temp661v(&__temp1051v__unsafe_ptr,&__temp1051v__unsafe_size,&__temp1051v__unsafe_align,&__temp1052v__buffer__unsafe_ptr,&__temp1052v__buffer__unsafe_size,&__temp1052v__buffer__unsafe_align,&__temp1052v__length);
  mem__buffer__unsafe_ptr=__temp1052v__buffer__unsafe_ptr;
  mem__buffer__unsafe_size=__temp1052v__buffer__unsafe_size;
  mem__buffer__unsafe_align=__temp1052v__buffer__unsafe_align;
  mem__length=__temp1052v__length;
  __temp1053v="123.12";
  __temp_errcode=copy__temp753v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp1053v,&__temp1054v__buf__unsafe_ptr,&__temp1054v__buf__unsafe_size,&__temp1054v__buf__unsafe_align,&__temp1054v__dat__pos,&__temp1054v__dat__length,&__temp1054v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__buf__unsafe_ptr=__temp1054v__buf__unsafe_ptr;
  s1__buf__unsafe_size=__temp1054v__buf__unsafe_size;
  s1__buf__unsafe_align=__temp1054v__buf__unsafe_align;
  s1__dat__pos=__temp1054v__dat__pos;
  s1__dat__length=__temp1054v__dat__length;
  s1__dat__first=__temp1054v__dat__first;
  __temp1055v="123.12";
  __temp_errcode=copy__temp753v(&mem__buffer__unsafe_ptr,&mem__buffer__unsafe_size,&mem__buffer__unsafe_align,&mem__length,__temp1055v,&__temp1056v__buf__unsafe_ptr,&__temp1056v__buf__unsafe_size,&__temp1056v__buf__unsafe_align,&__temp1056v__dat__pos,&__temp1056v__dat__length,&__temp1056v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__buf__unsafe_ptr=__temp1056v__buf__unsafe_ptr;
  s2__buf__unsafe_size=__temp1056v__buf__unsafe_size;
  s2__buf__unsafe_align=__temp1056v__buf__unsafe_align;
  s2__dat__pos=__temp1056v__dat__pos;
  s2__dat__length=__temp1056v__dat__length;
  s2__dat__first=__temp1056v__dat__first;
  __temp_errcode=float__temp922v(s2__buf__unsafe_ptr,s2__buf__unsafe_size,s2__buf__unsafe_align,s2__dat__pos,s2__dat__length,s2__dat__first,&__temp1057v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp465v(__temp1057v__);
  len__temp652v(mem__buffer__unsafe_ptr,mem__buffer__unsafe_size,mem__buffer__unsafe_align,&__temp1059v__);
  print__temp481v(__temp1059v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1048v();return 0;}