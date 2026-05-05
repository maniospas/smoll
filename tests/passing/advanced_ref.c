#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1099v="456";
const char* const __temp345v="\n";
const char* const __temp1096v="123";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1091v(void** __temp1107v, unsigned long long* __temp1108v, unsigned long long* __temp1109v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1107v=unsafe_ptr;
  *__temp1108v=unsafe_size;
  *__temp1109v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp490v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1110v) {
  *__temp1110v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void list__temp498v(void** __temp1111v, unsigned long long* __temp1112v, unsigned long long* __temp1113v, void** __temp1114v, unsigned long long* __temp1115v, unsigned long long* __temp1116v, unsigned long long* __temp1117v) {
  void* buffer__unsafe_ptr=*__temp1111v;
  unsigned long long buffer__unsafe_size=*__temp1112v;
  unsigned long long buffer__unsafe_align=*__temp1113v;
  unsigned long long __temp499v__=0;
  unsigned long long __temp500v=0;
  unsigned long long length=0;
  len__temp490v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp499v__);
  __temp500v=__temp499v__;
  length=__temp500v;
  *__temp1111v=buffer__unsafe_ptr;
  *__temp1112v=buffer__unsafe_size;
  *__temp1113v=buffer__unsafe_align;
  *__temp1114v=buffer__unsafe_ptr;
  *__temp1115v=buffer__unsafe_size;
  *__temp1116v=buffer__unsafe_align;
  *__temp1117v=length;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp492v(void** __temp1118v, unsigned long long* __temp1119v, unsigned long long* __temp1120v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1118v=unsafe_ptr;
  *__temp1119v=unsafe_size;
  *__temp1120v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1121v) {
  int value=0;
  *__temp1121v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1122v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1122v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1123v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1123v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1124v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1124v=z;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1125v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1125v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1126v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1126v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1127v) {
  *__temp1127v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1128v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1128v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1129v) {
  int __temp487v__=0;
  unsigned long long __temp488v__=0;
  void* __temp489v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp488v__);
  add__temp428v(buffer__unsafe_ptr,__temp488v__,&__temp489v__);
  *__temp1129v=__temp489v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp523v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1130v, unsigned long long* __temp1131v, unsigned long long* __temp1132v, unsigned long long* __temp1133v, unsigned long long* __temp1134v, char* __temp1135v) {
  *__temp1130v=buf__unsafe_ptr;
  *__temp1131v=buf__unsafe_size;
  *__temp1132v=buf__unsafe_align;
  *__temp1133v=dat__pos;
  *__temp1134v=dat__length;
  *__temp1135v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp533v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1136v, unsigned long long* __temp1137v, unsigned long long* __temp1138v, unsigned long long* __temp1139v, unsigned long long* __temp1140v, char* __temp1141v) {
  unsigned long long __temp534v=0;
  int __temp535v__=0;
  void* __temp536v__=0;
  char __temp537v__value=0;
  char first=0;
  void* __temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp538v__buf__unsafe_size=0;
  unsigned long long __temp538v__buf__unsafe_align=0;
  unsigned long long __temp538v__dat__pos=0;
  unsigned long long __temp538v__dat__length=0;
  char __temp538v__dat__first=0;
  int __temp_errcode=0;
  __temp534v=0;
  neq__temp301v(length,__temp534v,&__temp535v__);
  if(__temp535v__){
  __temp_errcode=get__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp536v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp536v__){
  goto __temp_failure;
  }
  memcpy(&__temp537v__value,(char*)__temp536v__,1);
  first=__temp537v__value;
  }
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp538v__buf__unsafe_ptr,&__temp538v__buf__unsafe_size,&__temp538v__buf__unsafe_align,&__temp538v__dat__pos,&__temp538v__dat__length,&__temp538v__dat__first);
  *__temp1136v=__temp538v__buf__unsafe_ptr;
  *__temp1137v=__temp538v__buf__unsafe_size;
  *__temp1138v=__temp538v__buf__unsafe_align;
  *__temp1139v=__temp538v__dat__pos;
  *__temp1140v=__temp538v__dat__length;
  *__temp1141v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp539v(const char* c, void** __temp1143v, unsigned long long* __temp1144v, unsigned long long* __temp1145v, unsigned long long* __temp1146v, unsigned long long* __temp1147v, char* __temp1148v) {
  void* __temp540v__unsafe_ptr=0;
  unsigned long long __temp540v__unsafe_size=0;
  unsigned long long __temp540v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp541v=0;
  void* __temp542v__buf__unsafe_ptr=0;
  unsigned long long __temp542v__buf__unsafe_size=0;
  unsigned long long __temp542v__buf__unsafe_align=0;
  unsigned long long __temp542v__dat__pos=0;
  unsigned long long __temp542v__dat__length=0;
  char __temp542v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp492v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  buf__unsafe_ptr=__temp540v__unsafe_ptr;
  buf__unsafe_size=__temp540v__unsafe_size;
  buf__unsafe_align=__temp540v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp541v=0;
  __temp_errcode=str__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp541v,length,&__temp542v__buf__unsafe_ptr,&__temp542v__buf__unsafe_size,&__temp542v__buf__unsafe_align,&__temp542v__dat__pos,&__temp542v__dat__length,&__temp542v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1143v=__temp542v__buf__unsafe_ptr;
  *__temp1144v=__temp542v__buf__unsafe_size;
  *__temp1145v=__temp542v__buf__unsafe_align;
  *__temp1146v=__temp542v__dat__pos;
  *__temp1147v=__temp542v__dat__length;
  *__temp1148v=__temp542v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp543v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1149v) {
  *__temp1149v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1150v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1150v=z;
}

static inline __attribute__((always_inline)) void div__temp157v(unsigned long long x, unsigned long long y, unsigned long long* __temp1151v) {
  int __temp158v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp158v__);
  z=x/y;
  *__temp1151v=z;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1152v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1152v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1153v) {
  void* allocated=*__temp1153v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1153v=allocated;
}

static inline __attribute__((always_inline)) void free__temp432v(void** __temp1154v, unsigned long long* __temp1155v, unsigned long long* __temp1156v, void** __temp1157v, unsigned long long* __temp1158v, unsigned long long* __temp1159v) {
  void* buffer__unsafe_ptr=*__temp1154v;
  unsigned long long buffer__unsafe_size=*__temp1155v;
  unsigned long long buffer__unsafe_align=*__temp1156v;
  unsigned long long __temp433v=0;
  int __temp434v__=0;
  unsigned long long __temp435v=0;
  __temp433v=0;
  eq__temp277v(buffer__unsafe_size,__temp433v,&__temp434v__);
  if(__temp434v__){
  goto __temp_return;
  }
  __temp435v=0;
  buffer__unsafe_size=__temp435v;
  free__temp426v(&buffer__unsafe_ptr);
  __temp_return:
  *__temp1154v=buffer__unsafe_ptr;
  *__temp1155v=buffer__unsafe_size;
  *__temp1156v=buffer__unsafe_align;
  *__temp1157v=buffer__unsafe_ptr;
  *__temp1158v=buffer__unsafe_size;
  *__temp1159v=buffer__unsafe_align;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int alloc__temp423v(unsigned long long bytes, void** __temp1160v) {
  void* allocated=0;
  int failed=0;
  int __temp_errcode=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=5;
  goto __temp_failure;
  }
  *__temp1160v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(void** __temp1161v, unsigned long long* __temp1162v, unsigned long long* __temp1163v, unsigned long long size, void** __temp1164v, unsigned long long* __temp1165v, unsigned long long* __temp1166v) {
  void* buffer__unsafe_ptr=*__temp1161v;
  unsigned long long buffer__unsafe_size=*__temp1162v;
  unsigned long long buffer__unsafe_align=*__temp1163v;
  unsigned long long __temp438v=0;
  int __temp439v__=0;
  int __temp442v__=0;
  unsigned long long __temp443v=0;
  int __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  int __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  void* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp301v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp133v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp427v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp301v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp423v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp427v(buffer__unsafe_ptr,__temp452v,bytes);
  __temp_return:
  *__temp1161v=buffer__unsafe_ptr;
  *__temp1162v=buffer__unsafe_size;
  *__temp1163v=buffer__unsafe_align;
  *__temp1164v=buffer__unsafe_ptr;
  *__temp1165v=buffer__unsafe_size;
  *__temp1166v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1167v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp425v__=0;
  int __temp_errcode=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  attach_type__temp12v(new_allocated,allocated__unsafe_ptr,&__temp425v__);
  *__temp1167v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1168v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1168v=z;
}

int resize__temp454v(void** __temp1173v, unsigned long long* __temp1174v, unsigned long long* __temp1175v, unsigned long long size, void** __temp1176v, unsigned long long* __temp1177v, unsigned long long* __temp1178v) {
  void* buffer__unsafe_ptr=*__temp1173v;
  unsigned long long buffer__unsafe_size=*__temp1174v;
  unsigned long long buffer__unsafe_align=*__temp1175v;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  int __temp457v__=0;
  void* __temp458v__unsafe_ptr=0;
  unsigned long long __temp458v__unsafe_size=0;
  unsigned long long __temp458v__unsafe_align=0;
  unsigned long long __temp459v=0;
  int __temp460v__=0;
  void* __temp461v__unsafe_ptr=0;
  unsigned long long __temp461v__unsafe_size=0;
  unsigned long long __temp461v__unsafe_align=0;
  unsigned long long __temp463v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp464v__=0;
  unsigned long long bytes=0;
  void* __temp465v__=0;
  int __temp466v__=0;
  unsigned long long __temp1171v=0;
  int __temp1172v=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp455v__);
  if(__temp455v__){
  goto __temp_return;
  }
  __temp456v=0;
  eq__temp277v(size,__temp456v,&__temp457v__);
  if(__temp457v__){
  free__temp432v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,&__temp458v__unsafe_ptr,&__temp458v__unsafe_size,&__temp458v__unsafe_align);
  buffer__unsafe_ptr=__temp458v__unsafe_ptr;
  buffer__unsafe_size=__temp458v__unsafe_size;
  buffer__unsafe_align=__temp458v__unsafe_align;
  goto __temp_return;
  }
  __temp459v=0;
  eq__temp277v(buffer__unsafe_size,__temp459v,&__temp460v__);
  if(__temp460v__){
  __temp_errcode=alloc__temp437v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,size,&__temp461v__unsafe_ptr,&__temp461v__unsafe_size,&__temp461v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__unsafe_ptr;
  buffer__unsafe_size=__temp461v__unsafe_size;
  buffer__unsafe_align=__temp461v__unsafe_align;
  goto __temp_return;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp463v__);
  prev_bytes=__temp463v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp464v__);
  bytes=__temp464v__;
  __temp_errcode=realloc__temp424v(buffer__unsafe_ptr,bytes,&__temp465v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp465v__;
  lt__temp181v(prev_bytes,bytes,&__temp466v__);
  if(__temp466v__){
  zero__temp427v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1173v=buffer__unsafe_ptr;
  *__temp1174v=buffer__unsafe_size;
  *__temp1175v=buffer__unsafe_align;
  *__temp1176v=buffer__unsafe_ptr;
  *__temp1177v=buffer__unsafe_size;
  *__temp1178v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp532v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1179v, unsigned long long* __temp1180v, unsigned long long* __temp1181v, unsigned long long* __temp1182v, unsigned long long* __temp1183v, char* __temp1184v) {
  *__temp1179v=other__buf__unsafe_ptr;
  *__temp1180v=other__buf__unsafe_size;
  *__temp1181v=other__buf__unsafe_align;
  *__temp1182v=other__dat__pos;
  *__temp1183v=other__dat__length;
  *__temp1184v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1185v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1185v=z;
}

static inline __attribute__((always_inline)) int copy__temp615v(void** __temp1188v, unsigned long long* __temp1189v, unsigned long long* __temp1190v, unsigned long long* __temp1191v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1192v, unsigned long long* __temp1193v, unsigned long long* __temp1194v, unsigned long long* __temp1195v, unsigned long long* __temp1196v, char* __temp1197v) {
  void* buf__unsafe_ptr=*__temp1188v;
  unsigned long long buf__unsafe_size=*__temp1189v;
  unsigned long long buf__unsafe_align=*__temp1190v;
  unsigned long long pos=*__temp1191v;
  void* __temp616v__buf__unsafe_ptr=0;
  unsigned long long __temp616v__buf__unsafe_size=0;
  unsigned long long __temp616v__buf__unsafe_align=0;
  unsigned long long __temp616v__dat__pos=0;
  unsigned long long __temp616v__dat__length=0;
  char __temp616v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp617v__=0;
  unsigned long long __temp618v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp619v__=0;
  int __temp620v__=0;
  unsigned long long __temp621v=0;
  unsigned long long __temp622v__=0;
  unsigned long long prev_pos=0;
  void* __temp623v__buf__unsafe_ptr=0;
  unsigned long long __temp623v__buf__unsafe_size=0;
  unsigned long long __temp623v__buf__unsafe_align=0;
  unsigned long long __temp623v__dat__pos=0;
  unsigned long long __temp623v__dat__length=0;
  char __temp623v__dat__first=0;
  int __temp_errcode=0;
  str__temp532v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp616v__buf__unsafe_ptr,&__temp616v__buf__unsafe_size,&__temp616v__buf__unsafe_align,&__temp616v__dat__pos,&__temp616v__dat__length,&__temp616v__dat__first);
  other__buf__unsafe_ptr=__temp616v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp616v__buf__unsafe_size;
  other__buf__unsafe_align=__temp616v__buf__unsafe_align;
  other__dat__pos=__temp616v__dat__pos;
  other__dat__length=__temp616v__dat__length;
  other__dat__first=__temp616v__dat__first;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp617v__);
  add__temp109v(pos,__temp617v__,&__temp618v__);
  next_pos=__temp618v__;
  len__temp490v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp619v__);
  gt__temp205v(next_pos,__temp619v__,&__temp620v__);
  if(__temp620v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp621v=0;
  add__temp109v(pos,__temp621v,&__temp622v__);
  prev_pos=__temp622v__;
  pos=next_pos;
  str__temp523v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp623v__buf__unsafe_ptr,&__temp623v__buf__unsafe_size,&__temp623v__buf__unsafe_align,&__temp623v__dat__pos,&__temp623v__dat__length,&__temp623v__dat__first);
  *__temp1188v=buf__unsafe_ptr;
  *__temp1189v=buf__unsafe_size;
  *__temp1190v=buf__unsafe_align;
  *__temp1191v=pos;
  *__temp1192v=__temp623v__buf__unsafe_ptr;
  *__temp1193v=__temp623v__buf__unsafe_size;
  *__temp1194v=__temp623v__buf__unsafe_align;
  *__temp1195v=__temp623v__dat__pos;
  *__temp1196v=__temp623v__dat__length;
  *__temp1197v=__temp623v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp684v(void** __temp1203v, unsigned long long* __temp1204v, unsigned long long* __temp1205v, unsigned long long* __temp1206v, const char* _other, void** __temp1207v, unsigned long long* __temp1208v, unsigned long long* __temp1209v, unsigned long long* __temp1210v, unsigned long long* __temp1211v, char* __temp1212v) {
  void* li__buffer__unsafe_ptr=*__temp1203v;
  unsigned long long li__buffer__unsafe_size=*__temp1204v;
  unsigned long long li__buffer__unsafe_align=*__temp1205v;
  unsigned long long li__length=*__temp1206v;
  void* __temp685v__buf__unsafe_ptr=0;
  unsigned long long __temp685v__buf__unsafe_size=0;
  unsigned long long __temp685v__buf__unsafe_align=0;
  unsigned long long __temp685v__dat__pos=0;
  unsigned long long __temp685v__dat__length=0;
  char __temp685v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp686v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp687v__=0;
  unsigned long long __temp688v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp689v__=0;
  int __temp690v__=0;
  unsigned long long __temp691v=0;
  unsigned long long __temp692v__=0;
  unsigned long long __temp693v=0;
  unsigned long long __temp694v__=0;
  unsigned long long __temp695v__=0;
  void* __temp696v__unsafe_ptr=0;
  unsigned long long __temp696v__unsafe_size=0;
  unsigned long long __temp696v__unsafe_align=0;
  void* __temp698v__buf__unsafe_ptr=0;
  unsigned long long __temp698v__buf__unsafe_size=0;
  unsigned long long __temp698v__buf__unsafe_align=0;
  unsigned long long __temp698v__dat__pos=0;
  unsigned long long __temp698v__dat__length=0;
  char __temp698v__dat__first=0;
  unsigned long long __temp1201v=0;
  int __temp1202v=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp539v(_other,&__temp685v__buf__unsafe_ptr,&__temp685v__buf__unsafe_size,&__temp685v__buf__unsafe_align,&__temp685v__dat__pos,&__temp685v__dat__length,&__temp685v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp685v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp685v__buf__unsafe_size;
  other__buf__unsafe_align=__temp685v__buf__unsafe_align;
  other__dat__pos=__temp685v__dat__pos;
  other__dat__length=__temp685v__dat__length;
  other__dat__first=__temp685v__dat__first;
  __temp686v=li__length;
  prev_prev_length=__temp686v;
  len__temp543v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp687v__);
  add__temp109v(li__length,__temp687v__,&__temp688v__);
  prev_length=__temp688v__;
  len__temp490v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp689v__);
  ge__temp253v(prev_length,__temp689v__,&__temp690v__);
  if(__temp690v__){
  __temp691v=2;
  div__temp157v(prev_length,__temp691v,&__temp692v__);
  __temp693v=1;
  add__temp109v(__temp692v__,__temp693v,&__temp694v__);
  add__temp109v(prev_length,__temp694v__,&__temp695v__);
  __temp_errcode=resize__temp454v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp695v__,&__temp696v__unsafe_ptr,&__temp696v__unsafe_size,&__temp696v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp696v__unsafe_ptr;
  li__buffer__unsafe_size=__temp696v__unsafe_size;
  li__buffer__unsafe_align=__temp696v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp615v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp698v__buf__unsafe_ptr,&__temp698v__buf__unsafe_size,&__temp698v__buf__unsafe_align,&__temp698v__dat__pos,&__temp698v__dat__length,&__temp698v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1203v=li__buffer__unsafe_ptr;
  *__temp1204v=li__buffer__unsafe_size;
  *__temp1205v=li__buffer__unsafe_align;
  *__temp1206v=li__length;
  *__temp1207v=__temp698v__buf__unsafe_ptr;
  *__temp1208v=__temp698v__buf__unsafe_size;
  *__temp1209v=__temp698v__buf__unsafe_align;
  *__temp1210v=__temp698v__dat__pos;
  *__temp1211v=__temp698v__dat__length;
  *__temp1212v=__temp698v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1090v(void** __temp1225v, unsigned long long* __temp1226v, unsigned long long* __temp1227v, unsigned long long* __temp1228v, unsigned long long* __temp1229v, char* __temp1230v, void** __temp1231v, unsigned long long* __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v, unsigned long long* __temp1235v, char* __temp1236v) {
  void* __temp1093v__unsafe_ptr=0;
  unsigned long long __temp1093v__unsafe_size=0;
  unsigned long long __temp1093v__unsafe_align=0;
  void* __temp1094v__unsafe_ptr=0;
  unsigned long long __temp1094v__unsafe_size=0;
  unsigned long long __temp1094v__unsafe_align=0;
  void* __temp1095v__buffer__unsafe_ptr=0;
  unsigned long long __temp1095v__buffer__unsafe_size=0;
  unsigned long long __temp1095v__buffer__unsafe_align=0;
  unsigned long long __temp1095v__length=0;
  void* __temp1097v__buf__unsafe_ptr=0;
  unsigned long long __temp1097v__buf__unsafe_size=0;
  unsigned long long __temp1097v__buf__unsafe_align=0;
  unsigned long long __temp1097v__dat__pos=0;
  unsigned long long __temp1097v__dat__length=0;
  char __temp1097v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  void* __temp1100v__buf__unsafe_ptr=0;
  unsigned long long __temp1100v__buf__unsafe_size=0;
  unsigned long long __temp1100v__buf__unsafe_align=0;
  unsigned long long __temp1100v__dat__pos=0;
  unsigned long long __temp1100v__dat__length=0;
  char __temp1100v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  unsigned long long __temp1219v=0;
  int __temp1220v=0;
  unsigned long long __temp1223v=0;
  int __temp1224v=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp1091v(&__temp1093v__unsafe_ptr,&__temp1093v__unsafe_size,&__temp1093v__unsafe_align);
  __temp1094v__unsafe_ptr=__temp1093v__unsafe_ptr;
  __temp1094v__unsafe_size=__temp1093v__unsafe_size;
  __temp1094v__unsafe_align=__temp1093v__unsafe_align;
  list__temp498v(&__temp1094v__unsafe_ptr,&__temp1094v__unsafe_size,&__temp1094v__unsafe_align,&__temp1095v__buffer__unsafe_ptr,&__temp1095v__buffer__unsafe_size,&__temp1095v__buffer__unsafe_align,&__temp1095v__length);
  __temp_errcode=copy__temp684v(&__temp1094v__unsafe_ptr,&__temp1094v__unsafe_size,&__temp1094v__unsafe_align,&__temp1094v__unsafe_size,__temp1096v,&__temp1097v__buf__unsafe_ptr,&__temp1097v__buf__unsafe_size,&__temp1097v__buf__unsafe_align,&__temp1097v__dat__pos,&__temp1097v__dat__length,&__temp1097v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1097v__dat__pos;
  s1__dat__length=__temp1097v__dat__length;
  s1__dat__first=__temp1097v__dat__first;
  __temp_errcode=copy__temp684v(&__temp1094v__unsafe_ptr,&__temp1094v__unsafe_size,&__temp1094v__unsafe_align,&__temp1094v__unsafe_size,__temp1099v,&__temp1100v__buf__unsafe_ptr,&__temp1100v__buf__unsafe_size,&__temp1100v__buf__unsafe_align,&__temp1100v__dat__pos,&__temp1100v__dat__length,&__temp1100v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1100v__dat__pos;
  s2__dat__length=__temp1100v__dat__length;
  s2__dat__first=__temp1100v__dat__first;
  s1__buf__unsafe_ptr=__temp1094v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1094v__unsafe_size;
  s1__buf__unsafe_align=__temp1094v__unsafe_align;
  s2__buf__unsafe_ptr=__temp1094v__unsafe_ptr;
  s2__buf__unsafe_size=__temp1094v__unsafe_size;
  s2__buf__unsafe_align=__temp1094v__unsafe_align;
  *__temp1225v=s1__buf__unsafe_ptr;
  *__temp1226v=s1__buf__unsafe_size;
  *__temp1227v=s1__buf__unsafe_align;
  *__temp1228v=s1__dat__pos;
  *__temp1229v=s1__dat__length;
  *__temp1230v=s1__dat__first;
  *__temp1231v=s2__buf__unsafe_ptr;
  *__temp1232v=s2__buf__unsafe_size;
  *__temp1233v=s2__buf__unsafe_align;
  *__temp1234v=s2__dat__pos;
  *__temp1235v=s2__dat__length;
  *__temp1236v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp655v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp657v__=0;
  int __temp658v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp657v__);
  gt__temp205v(__temp657v__,s__buf__unsafe_size,&__temp658v__);
  if(__temp658v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1102v() {
  void* __temp1103v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp1103v__s1__buf__unsafe_size=0;
  unsigned long long __temp1103v__s1__buf__unsafe_align=0;
  unsigned long long __temp1103v__s1__dat__pos=0;
  unsigned long long __temp1103v__s1__dat__length=0;
  char __temp1103v__s1__dat__first=0;
  void* __temp1103v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp1103v__s2__buf__unsafe_size=0;
  unsigned long long __temp1103v__s2__buf__unsafe_align=0;
  unsigned long long __temp1103v__s2__dat__pos=0;
  unsigned long long __temp1103v__s2__dat__length=0;
  char __temp1103v__s2__dat__first=0;
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
  unsigned long long __temp1241v=0;
  int __temp1242v=0;
  unsigned long long __temp1243v=0;
  int __temp1244v=0;
  int __temp_errcode=0;
  __temp_errcode=test__temp1090v(&__temp1103v__s1__buf__unsafe_ptr,&__temp1103v__s1__buf__unsafe_size,&__temp1103v__s1__buf__unsafe_align,&__temp1103v__s1__dat__pos,&__temp1103v__s1__dat__length,&__temp1103v__s1__dat__first,&__temp1103v__s2__buf__unsafe_ptr,&__temp1103v__s2__buf__unsafe_size,&__temp1103v__s2__buf__unsafe_align,&__temp1103v__s2__dat__pos,&__temp1103v__s2__dat__length,&__temp1103v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp1103v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp1103v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp1103v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp1103v__s1__dat__pos;
  s__s1__dat__length=__temp1103v__s1__dat__length;
  s__s1__dat__first=__temp1103v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp1103v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp1103v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp1103v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp1103v__s2__dat__pos;
  s__s2__dat__length=__temp1103v__s2__dat__length;
  s__s2__dat__first=__temp1103v__s2__dat__first;
  __temp_errcode=print__temp655v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp655v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1243v=0;
  neq__temp301v(__temp1103v__s2__buf__unsafe_size,__temp1243v,&__temp1244v);
  if(__temp1244v){
  __temp1103v__s2__buf__unsafe_size=0;
  free__temp426v(&__temp1103v__s2__buf__unsafe_ptr);
  }
  __temp1241v=0;
  neq__temp301v(__temp1103v__s2__buf__unsafe_size,__temp1241v,&__temp1242v);
  if(__temp1242v){
  __temp1103v__s2__buf__unsafe_size=0;
  free__temp426v(&__temp1103v__s2__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main() {main__temp1102v();return 0;}