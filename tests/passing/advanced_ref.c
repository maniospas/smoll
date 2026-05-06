#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1127v="123";
const char* const __temp1129v="456";
const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1122v(void** __temp1135v, unsigned long long* __temp1136v, unsigned long long* __temp1137v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1135v=unsafe_ptr;
  *__temp1136v=unsafe_size;
  *__temp1137v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp484v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1138v) {
  *__temp1138v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void list__temp492v(void** __temp1139v, unsigned long long* __temp1140v, unsigned long long* __temp1141v, void** __temp1142v, unsigned long long* __temp1143v, unsigned long long* __temp1144v, unsigned long long* __temp1145v) {
  void* buffer__unsafe_ptr=*__temp1139v;
  unsigned long long buffer__unsafe_size=*__temp1140v;
  unsigned long long buffer__unsafe_align=*__temp1141v;
  unsigned long long __temp493v__=0;
  unsigned long long __temp494v=0;
  unsigned long long length=0;
  len__temp484v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp493v__);
  __temp494v=__temp493v__;
  length=__temp494v;
  *__temp1139v=buffer__unsafe_ptr;
  *__temp1140v=buffer__unsafe_size;
  *__temp1141v=buffer__unsafe_align;
  *__temp1142v=buffer__unsafe_ptr;
  *__temp1143v=buffer__unsafe_size;
  *__temp1144v=buffer__unsafe_align;
  *__temp1145v=length;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp486v(void** __temp1146v, unsigned long long* __temp1147v, unsigned long long* __temp1148v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1146v=unsafe_ptr;
  *__temp1147v=unsafe_size;
  *__temp1148v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1149v) {
  int value=0;
  *__temp1149v=value;
}

static inline __attribute__((always_inline)) void not__temp26v(int __temp_anon0, int* __temp1150v) {
  int __temp27v__=0;
  false__temp7v(&__temp27v__);
  *__temp1150v=__temp27v__;
}

static inline __attribute__((always_inline)) void is_different__temp84v(unsigned long long x, unsigned long long y, int* __temp1151v) {
  int __temp85v=0;
  int __temp86v__=0;
  not__temp26v(__temp85v,&__temp86v__);
  *__temp1151v=__temp86v__;
}

static inline __attribute__((always_inline)) void neq__temp301v(unsigned long long x, unsigned long long y, int* __temp1152v) {
  int __temp302v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp302v__);
  z=x!=y?1:0;
  *__temp1152v=z;
}

static inline __attribute__((always_inline)) void ge__temp253v(unsigned long long x, unsigned long long y, int* __temp1153v) {
  int __temp254v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp254v__);
  z=x>=y?1:0;
  *__temp1153v=z;
}

static inline __attribute__((always_inline)) void mul__temp133v(unsigned long long x, unsigned long long y, unsigned long long* __temp1154v) {
  int __temp134v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp134v__);
  z=x*y;
  *__temp1154v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp12v(void* to, void* from, void** __temp1155v) {
  *__temp1155v=to;
}

static inline __attribute__((always_inline)) void add__temp428v(void* allocated, unsigned long long offset, void** __temp1156v) {
  void* element=0;
  void* __temp429v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp12v(element,allocated,&__temp429v__);
  *__temp1156v=__temp429v__;
}

static inline __attribute__((always_inline)) int get__temp480v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1157v) {
  int __temp481v__=0;
  unsigned long long __temp482v__=0;
  void* __temp483v__=0;
  int __temp_errcode=0;
  ge__temp253v(i,buffer__unsafe_size,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp133v(i,buffer__unsafe_align,&__temp482v__);
  add__temp428v(buffer__unsafe_ptr,__temp482v__,&__temp483v__);
  *__temp1157v=__temp483v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp516v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1158v, unsigned long long* __temp1159v, unsigned long long* __temp1160v, unsigned long long* __temp1161v, unsigned long long* __temp1162v, char* __temp1163v) {
  *__temp1158v=buf__unsafe_ptr;
  *__temp1159v=buf__unsafe_size;
  *__temp1160v=buf__unsafe_align;
  *__temp1161v=dat__pos;
  *__temp1162v=dat__length;
  *__temp1163v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp526v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1164v, unsigned long long* __temp1165v, unsigned long long* __temp1166v, unsigned long long* __temp1167v, unsigned long long* __temp1168v, char* __temp1169v) {
  unsigned long long __temp527v=0;
  int __temp528v__=0;
  void* __temp529v__=0;
  char __temp530v__value=0;
  char first=0;
  void* __temp531v__buf__unsafe_ptr=0;
  unsigned long long __temp531v__buf__unsafe_size=0;
  unsigned long long __temp531v__buf__unsafe_align=0;
  unsigned long long __temp531v__dat__pos=0;
  unsigned long long __temp531v__dat__length=0;
  char __temp531v__dat__first=0;
  int __temp_errcode=0;
  __temp527v=0;
  neq__temp301v(length,__temp527v,&__temp528v__);
  if(__temp528v__){
  __temp_errcode=get__temp480v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp529v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp529v__){
  goto __temp_failure;
  }
  memcpy(&__temp530v__value,(char*)__temp529v__,1);
  first=__temp530v__value;
  }
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp531v__buf__unsafe_ptr,&__temp531v__buf__unsafe_size,&__temp531v__buf__unsafe_align,&__temp531v__dat__pos,&__temp531v__dat__length,&__temp531v__dat__first);
  *__temp1164v=__temp531v__buf__unsafe_ptr;
  *__temp1165v=__temp531v__buf__unsafe_size;
  *__temp1166v=__temp531v__buf__unsafe_align;
  *__temp1167v=__temp531v__dat__pos;
  *__temp1168v=__temp531v__dat__length;
  *__temp1169v=__temp531v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp532v(const char* c, void** __temp1171v, unsigned long long* __temp1172v, unsigned long long* __temp1173v, unsigned long long* __temp1174v, unsigned long long* __temp1175v, char* __temp1176v) {
  void* __temp533v__unsafe_ptr=0;
  unsigned long long __temp533v__unsafe_size=0;
  unsigned long long __temp533v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp534v=0;
  void* __temp535v__buf__unsafe_ptr=0;
  unsigned long long __temp535v__buf__unsafe_size=0;
  unsigned long long __temp535v__buf__unsafe_align=0;
  unsigned long long __temp535v__dat__pos=0;
  unsigned long long __temp535v__dat__length=0;
  char __temp535v__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp486v(&__temp533v__unsafe_ptr,&__temp533v__unsafe_size,&__temp533v__unsafe_align);
  buf__unsafe_ptr=__temp533v__unsafe_ptr;
  buf__unsafe_size=__temp533v__unsafe_size;
  buf__unsafe_align=__temp533v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp534v=0;
  __temp_errcode=str__temp526v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp534v,length,&__temp535v__buf__unsafe_ptr,&__temp535v__buf__unsafe_size,&__temp535v__buf__unsafe_align,&__temp535v__dat__pos,&__temp535v__dat__length,&__temp535v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1171v=__temp535v__buf__unsafe_ptr;
  *__temp1172v=__temp535v__buf__unsafe_size;
  *__temp1173v=__temp535v__buf__unsafe_align;
  *__temp1174v=__temp535v__dat__pos;
  *__temp1175v=__temp535v__dat__length;
  *__temp1176v=__temp535v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp536v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1177v) {
  *__temp1177v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp109v(unsigned long long x, unsigned long long y, unsigned long long* __temp1178v) {
  int __temp110v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp110v__);
  z=x+y;
  *__temp1178v=z;
}

static inline __attribute__((always_inline)) void div__temp157v(unsigned long long x, unsigned long long y, unsigned long long* __temp1179v) {
  int __temp158v__=0;
  unsigned long long z=0;
  is_different__temp84v(x,y,&__temp158v__);
  z=x/y;
  *__temp1179v=z;
}

static inline __attribute__((always_inline)) void eq__temp277v(unsigned long long x, unsigned long long y, int* __temp1180v) {
  int __temp278v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp278v__);
  z=x==y?1:0;
  *__temp1180v=z;
}

static inline __attribute__((always_inline)) void free__temp426v(void** __temp1181v) {
  void* allocated=*__temp1181v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1181v=allocated;
}

static inline __attribute__((always_inline)) int realloc__temp424v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1182v) {
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
  *__temp1182v=__temp425v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp181v(unsigned long long x, unsigned long long y, int* __temp1183v) {
  int __temp182v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp182v__);
  z=x<y?1:0;
  *__temp1183v=z;
}

static inline __attribute__((always_inline)) void zero__temp427v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp449v(void** __temp1184v, unsigned long long* __temp1185v, unsigned long long* __temp1186v, unsigned long long size, void** __temp1187v, unsigned long long* __temp1188v, unsigned long long* __temp1189v) {
  void* buffer__unsafe_ptr=*__temp1184v;
  unsigned long long buffer__unsafe_size=*__temp1185v;
  unsigned long long buffer__unsafe_align=*__temp1186v;
  int __temp450v__=0;
  unsigned long long __temp451v=0;
  int __temp452v__=0;
  unsigned long long __temp453v=0;
  unsigned long long __temp455v=0;
  int __temp456v__=0;
  unsigned long long __temp457v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp458v__=0;
  unsigned long long bytes=0;
  void* __temp459v__=0;
  int __temp460v__=0;
  int __temp_errcode=0;
  eq__temp277v(buffer__unsafe_size,size,&__temp450v__);
  if(__temp450v__){
  goto __temp_return;
  }
  __temp451v=0;
  eq__temp277v(size,__temp451v,&__temp452v__);
  if(__temp452v__){
  __temp453v=0;
  buffer__unsafe_size=__temp453v;
  free__temp426v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp455v=0;
  eq__temp277v(buffer__unsafe_size,__temp455v,&__temp456v__);
  if(__temp456v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp133v(buffer__unsafe_size,buffer__unsafe_align,&__temp457v__);
  prev_bytes=__temp457v__;
  buffer__unsafe_size=size;
  mul__temp133v(buffer__unsafe_align,size,&__temp458v__);
  bytes=__temp458v__;
  __temp_errcode=realloc__temp424v(buffer__unsafe_ptr,bytes,&__temp459v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp459v__;
  lt__temp181v(prev_bytes,bytes,&__temp460v__);
  if(__temp460v__){
  zero__temp427v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1184v=buffer__unsafe_ptr;
  *__temp1185v=buffer__unsafe_size;
  *__temp1186v=buffer__unsafe_align;
  *__temp1187v=buffer__unsafe_ptr;
  *__temp1188v=buffer__unsafe_size;
  *__temp1189v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp525v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1190v, unsigned long long* __temp1191v, unsigned long long* __temp1192v, unsigned long long* __temp1193v, unsigned long long* __temp1194v, char* __temp1195v) {
  *__temp1190v=other__buf__unsafe_ptr;
  *__temp1191v=other__buf__unsafe_size;
  *__temp1192v=other__buf__unsafe_align;
  *__temp1193v=other__dat__pos;
  *__temp1194v=other__dat__length;
  *__temp1195v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp205v(unsigned long long x, unsigned long long y, int* __temp1196v) {
  int __temp206v__=0;
  int z=0;
  is_different__temp84v(x,y,&__temp206v__);
  z=x>y?1:0;
  *__temp1196v=z;
}

static inline __attribute__((always_inline)) int copy__temp648v(void** __temp1199v, unsigned long long* __temp1200v, unsigned long long* __temp1201v, unsigned long long* __temp1202v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1203v, unsigned long long* __temp1204v, unsigned long long* __temp1205v, unsigned long long* __temp1206v, unsigned long long* __temp1207v, char* __temp1208v) {
  void* buf__unsafe_ptr=*__temp1199v;
  unsigned long long buf__unsafe_size=*__temp1200v;
  unsigned long long buf__unsafe_align=*__temp1201v;
  unsigned long long pos=*__temp1202v;
  void* __temp649v__buf__unsafe_ptr=0;
  unsigned long long __temp649v__buf__unsafe_size=0;
  unsigned long long __temp649v__buf__unsafe_align=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp650v__=0;
  unsigned long long __temp651v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp652v__=0;
  int __temp653v__=0;
  unsigned long long __temp654v=0;
  unsigned long long __temp655v__=0;
  unsigned long long prev_pos=0;
  void* __temp656v__buf__unsafe_ptr=0;
  unsigned long long __temp656v__buf__unsafe_size=0;
  unsigned long long __temp656v__buf__unsafe_align=0;
  unsigned long long __temp656v__dat__pos=0;
  unsigned long long __temp656v__dat__length=0;
  char __temp656v__dat__first=0;
  int __temp_errcode=0;
  str__temp525v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp649v__buf__unsafe_ptr,&__temp649v__buf__unsafe_size,&__temp649v__buf__unsafe_align,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  other__buf__unsafe_ptr=__temp649v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp649v__buf__unsafe_size;
  other__buf__unsafe_align=__temp649v__buf__unsafe_align;
  other__dat__pos=__temp649v__dat__pos;
  other__dat__length=__temp649v__dat__length;
  other__dat__first=__temp649v__dat__first;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp650v__);
  add__temp109v(pos,__temp650v__,&__temp651v__);
  next_pos=__temp651v__;
  len__temp484v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp652v__);
  gt__temp205v(next_pos,__temp652v__,&__temp653v__);
  if(__temp653v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp654v=0;
  add__temp109v(pos,__temp654v,&__temp655v__);
  prev_pos=__temp655v__;
  pos=next_pos;
  str__temp516v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp656v__buf__unsafe_ptr,&__temp656v__buf__unsafe_size,&__temp656v__buf__unsafe_align,&__temp656v__dat__pos,&__temp656v__dat__length,&__temp656v__dat__first);
  *__temp1199v=buf__unsafe_ptr;
  *__temp1200v=buf__unsafe_size;
  *__temp1201v=buf__unsafe_align;
  *__temp1202v=pos;
  *__temp1203v=__temp656v__buf__unsafe_ptr;
  *__temp1204v=__temp656v__buf__unsafe_size;
  *__temp1205v=__temp656v__buf__unsafe_align;
  *__temp1206v=__temp656v__dat__pos;
  *__temp1207v=__temp656v__dat__length;
  *__temp1208v=__temp656v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp716v(void** __temp1212v, unsigned long long* __temp1213v, unsigned long long* __temp1214v, unsigned long long* __temp1215v, const char* _other, void** __temp1216v, unsigned long long* __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v, unsigned long long* __temp1220v, char* __temp1221v) {
  void* li__buffer__unsafe_ptr=*__temp1212v;
  unsigned long long li__buffer__unsafe_size=*__temp1213v;
  unsigned long long li__buffer__unsafe_align=*__temp1214v;
  unsigned long long li__length=*__temp1215v;
  void* __temp717v__buf__unsafe_ptr=0;
  unsigned long long __temp717v__buf__unsafe_size=0;
  unsigned long long __temp717v__buf__unsafe_align=0;
  unsigned long long __temp717v__dat__pos=0;
  unsigned long long __temp717v__dat__length=0;
  char __temp717v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp718v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp719v__=0;
  unsigned long long __temp720v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp721v__=0;
  int __temp722v__=0;
  unsigned long long __temp723v=0;
  unsigned long long __temp724v__=0;
  unsigned long long __temp725v=0;
  unsigned long long __temp726v__=0;
  unsigned long long __temp727v__=0;
  void* __temp728v__unsafe_ptr=0;
  unsigned long long __temp728v__unsafe_size=0;
  unsigned long long __temp728v__unsafe_align=0;
  void* __temp729v__buf__unsafe_ptr=0;
  unsigned long long __temp729v__buf__unsafe_size=0;
  unsigned long long __temp729v__buf__unsafe_align=0;
  unsigned long long __temp729v__dat__pos=0;
  unsigned long long __temp729v__dat__length=0;
  char __temp729v__dat__first=0;
  int __temp_errcode=0;
  __temp_errcode=str__temp532v(_other,&__temp717v__buf__unsafe_ptr,&__temp717v__buf__unsafe_size,&__temp717v__buf__unsafe_align,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp717v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp717v__buf__unsafe_size;
  other__buf__unsafe_align=__temp717v__buf__unsafe_align;
  other__dat__pos=__temp717v__dat__pos;
  other__dat__length=__temp717v__dat__length;
  other__dat__first=__temp717v__dat__first;
  __temp718v=li__length;
  prev_prev_length=__temp718v;
  len__temp536v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp719v__);
  add__temp109v(li__length,__temp719v__,&__temp720v__);
  prev_length=__temp720v__;
  len__temp484v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp721v__);
  ge__temp253v(prev_length,__temp721v__,&__temp722v__);
  if(__temp722v__){
  __temp723v=2;
  div__temp157v(prev_length,__temp723v,&__temp724v__);
  __temp725v=1;
  add__temp109v(__temp724v__,__temp725v,&__temp726v__);
  add__temp109v(prev_length,__temp726v__,&__temp727v__);
  __temp_errcode=resize__temp449v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp727v__,&__temp728v__unsafe_ptr,&__temp728v__unsafe_size,&__temp728v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp728v__unsafe_ptr;
  li__buffer__unsafe_size=__temp728v__unsafe_size;
  li__buffer__unsafe_align=__temp728v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp648v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp729v__buf__unsafe_ptr,&__temp729v__buf__unsafe_size,&__temp729v__buf__unsafe_align,&__temp729v__dat__pos,&__temp729v__dat__length,&__temp729v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1212v=li__buffer__unsafe_ptr;
  *__temp1213v=li__buffer__unsafe_size;
  *__temp1214v=li__buffer__unsafe_align;
  *__temp1215v=li__length;
  *__temp1216v=__temp729v__buf__unsafe_ptr;
  *__temp1217v=__temp729v__buf__unsafe_size;
  *__temp1218v=__temp729v__buf__unsafe_align;
  *__temp1219v=__temp729v__dat__pos;
  *__temp1220v=__temp729v__dat__length;
  *__temp1221v=__temp729v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1121v(void** __temp1230v, unsigned long long* __temp1231v, unsigned long long* __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v, char* __temp1235v, void** __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v, unsigned long long* __temp1240v, char* __temp1241v) {
  void* __temp1124v__unsafe_ptr=0;
  unsigned long long __temp1124v__unsafe_size=0;
  unsigned long long __temp1124v__unsafe_align=0;
  void* __temp1125v__unsafe_ptr=0;
  unsigned long long __temp1125v__unsafe_size=0;
  unsigned long long __temp1125v__unsafe_align=0;
  void* __temp1126v__buffer__unsafe_ptr=0;
  unsigned long long __temp1126v__buffer__unsafe_size=0;
  unsigned long long __temp1126v__buffer__unsafe_align=0;
  unsigned long long __temp1126v__length=0;
  void* __temp1128v__buf__unsafe_ptr=0;
  unsigned long long __temp1128v__buf__unsafe_size=0;
  unsigned long long __temp1128v__buf__unsafe_align=0;
  unsigned long long __temp1128v__dat__pos=0;
  unsigned long long __temp1128v__dat__length=0;
  char __temp1128v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  void* __temp1130v__buf__unsafe_ptr=0;
  unsigned long long __temp1130v__buf__unsafe_size=0;
  unsigned long long __temp1130v__buf__unsafe_align=0;
  unsigned long long __temp1130v__dat__pos=0;
  unsigned long long __temp1130v__dat__length=0;
  char __temp1130v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  char__temp_buffer__buffer__temp1122v(&__temp1124v__unsafe_ptr,&__temp1124v__unsafe_size,&__temp1124v__unsafe_align);
  __temp1125v__unsafe_ptr=__temp1124v__unsafe_ptr;
  __temp1125v__unsafe_size=__temp1124v__unsafe_size;
  __temp1125v__unsafe_align=__temp1124v__unsafe_align;
  list__temp492v(&__temp1125v__unsafe_ptr,&__temp1125v__unsafe_size,&__temp1125v__unsafe_align,&__temp1126v__buffer__unsafe_ptr,&__temp1126v__buffer__unsafe_size,&__temp1126v__buffer__unsafe_align,&__temp1126v__length);
  __temp_errcode=copy__temp716v(&__temp1125v__unsafe_ptr,&__temp1125v__unsafe_size,&__temp1125v__unsafe_align,&__temp1125v__unsafe_size,__temp1127v,&__temp1128v__buf__unsafe_ptr,&__temp1128v__buf__unsafe_size,&__temp1128v__buf__unsafe_align,&__temp1128v__dat__pos,&__temp1128v__dat__length,&__temp1128v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1128v__dat__pos;
  s1__dat__length=__temp1128v__dat__length;
  s1__dat__first=__temp1128v__dat__first;
  __temp_errcode=copy__temp716v(&__temp1125v__unsafe_ptr,&__temp1125v__unsafe_size,&__temp1125v__unsafe_align,&__temp1125v__unsafe_size,__temp1129v,&__temp1130v__buf__unsafe_ptr,&__temp1130v__buf__unsafe_size,&__temp1130v__buf__unsafe_align,&__temp1130v__dat__pos,&__temp1130v__dat__length,&__temp1130v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1130v__dat__pos;
  s2__dat__length=__temp1130v__dat__length;
  s2__dat__first=__temp1130v__dat__first;
  s1__buf__unsafe_ptr=__temp1125v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1125v__unsafe_size;
  s1__buf__unsafe_align=__temp1125v__unsafe_align;
  s2__buf__unsafe_ptr=__temp1125v__unsafe_ptr;
  s2__buf__unsafe_size=__temp1125v__unsafe_size;
  s2__buf__unsafe_align=__temp1125v__unsafe_align;
  *__temp1230v=s1__buf__unsafe_ptr;
  *__temp1231v=s1__buf__unsafe_size;
  *__temp1232v=s1__buf__unsafe_align;
  *__temp1233v=s1__dat__pos;
  *__temp1234v=s1__dat__length;
  *__temp1235v=s1__dat__first;
  *__temp1236v=s2__buf__unsafe_ptr;
  *__temp1237v=s2__buf__unsafe_size;
  *__temp1238v=s2__buf__unsafe_align;
  *__temp1239v=s2__dat__pos;
  *__temp1240v=s2__dat__length;
  *__temp1241v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp688v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp690v__=0;
  int __temp691v__=0;
  int __temp_errcode=0;
  endl=__temp345v;
  add__temp109v(s__dat__length,s__dat__pos,&__temp690v__);
  gt__temp205v(__temp690v__,s__buf__unsafe_size,&__temp691v__);
  if(__temp691v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1131v() {
  void* __temp1132v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp1132v__s1__buf__unsafe_size=0;
  unsigned long long __temp1132v__s1__buf__unsafe_align=0;
  unsigned long long __temp1132v__s1__dat__pos=0;
  unsigned long long __temp1132v__s1__dat__length=0;
  char __temp1132v__s1__dat__first=0;
  void* __temp1132v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp1132v__s2__buf__unsafe_size=0;
  unsigned long long __temp1132v__s2__buf__unsafe_align=0;
  unsigned long long __temp1132v__s2__dat__pos=0;
  unsigned long long __temp1132v__s2__dat__length=0;
  char __temp1132v__s2__dat__first=0;
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
  int __temp_errcode=0;
  __temp_errcode=test__temp1121v(&__temp1132v__s1__buf__unsafe_ptr,&__temp1132v__s1__buf__unsafe_size,&__temp1132v__s1__buf__unsafe_align,&__temp1132v__s1__dat__pos,&__temp1132v__s1__dat__length,&__temp1132v__s1__dat__first,&__temp1132v__s2__buf__unsafe_ptr,&__temp1132v__s2__buf__unsafe_size,&__temp1132v__s2__buf__unsafe_align,&__temp1132v__s2__dat__pos,&__temp1132v__s2__dat__length,&__temp1132v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp1132v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp1132v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp1132v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp1132v__s1__dat__pos;
  s__s1__dat__length=__temp1132v__s1__dat__length;
  s__s1__dat__first=__temp1132v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp1132v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp1132v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp1132v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp1132v__s2__dat__pos;
  s__s2__dat__length=__temp1132v__s2__dat__length;
  s__s2__dat__first=__temp1132v__s2__dat__first;
  __temp_errcode=print__temp688v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp688v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1131v();return 0;}