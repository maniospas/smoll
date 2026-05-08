#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp1205v="123";
const char* const __temp1207v="456";
const char* const __temp348v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1200v(void** __temp1213v, unsigned long long* __temp1214v, unsigned long long* __temp1215v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1213v=unsafe_ptr;
  *__temp1214v=unsafe_size;
  *__temp1215v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp487v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1216v) {
  *__temp1216v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void list__temp495v(void** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v, void** __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v, unsigned long long* __temp1223v) {
  void* buffer__unsafe_ptr=*__temp1217v;
  unsigned long long buffer__unsafe_size=*__temp1218v;
  unsigned long long buffer__unsafe_align=*__temp1219v;
  unsigned long long __temp496v__=0;
  unsigned long long __temp497v=0;
  unsigned long long length=0;
  len__temp487v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp496v__);
  __temp497v=__temp496v__;
  length=__temp497v;
  *__temp1217v=buffer__unsafe_ptr;
  *__temp1218v=buffer__unsafe_size;
  *__temp1219v=buffer__unsafe_align;
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  *__temp1223v=length;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp489v(void** __temp1224v, unsigned long long* __temp1225v, unsigned long long* __temp1226v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1224v=unsafe_ptr;
  *__temp1225v=unsafe_size;
  *__temp1226v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1227v) {
  int value=0;
  *__temp1227v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1228v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1228v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1229v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1229v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1230v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y?1:0;
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1231v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y?1:0;
  *__temp1231v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1232v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1232v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1233v) {
  *__temp1233v=to;
}

static inline __attribute__((always_inline)) void add__temp431v(void* allocated, unsigned long long offset, void** __temp1234v) {
  void* element=0;
  void* __temp432v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp432v__);
  *__temp1234v=__temp432v__;
}

static inline __attribute__((always_inline)) int get__temp483v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1235v) {
  int __temp484v__=0;
  unsigned long long __temp485v__=0;
  void* __temp486v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp484v__);
  if(__temp484v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp485v__);
  add__temp431v(buffer__unsafe_ptr,__temp485v__,&__temp486v__);
  *__temp1235v=__temp486v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp519v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v, unsigned long long* __temp1240v, char* __temp1241v) {
  *__temp1236v=buf__unsafe_ptr;
  *__temp1237v=buf__unsafe_size;
  *__temp1238v=buf__unsafe_align;
  *__temp1239v=dat__pos;
  *__temp1240v=dat__length;
  *__temp1241v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp529v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1242v, unsigned long long* __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v, unsigned long long* __temp1246v, char* __temp1247v) {
  unsigned long long __temp530v=0;
  int __temp531v__=0;
  void* __temp532v__=0;
  char __temp533v__value=0;
  char first=0;
  void* __temp534v__buf__unsafe_ptr=0;
  unsigned long long __temp534v__buf__unsafe_size=0;
  unsigned long long __temp534v__buf__unsafe_align=0;
  unsigned long long __temp534v__dat__pos=0;
  unsigned long long __temp534v__dat__length=0;
  char __temp534v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp530v=0;
  neq__temp302v(length,__temp530v,&__temp531v__);
  if(__temp531v__){
  __temp_errcode=get__temp483v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp532v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp532v__){
  goto __temp_failure;
  }
  memcpy(&__temp533v__value,(char*)__temp532v__,1);
  first=__temp533v__value;
  }
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp534v__buf__unsafe_ptr,&__temp534v__buf__unsafe_size,&__temp534v__buf__unsafe_align,&__temp534v__dat__pos,&__temp534v__dat__length,&__temp534v__dat__first);
  *__temp1242v=__temp534v__buf__unsafe_ptr;
  *__temp1243v=__temp534v__buf__unsafe_size;
  *__temp1244v=__temp534v__buf__unsafe_align;
  *__temp1245v=__temp534v__dat__pos;
  *__temp1246v=__temp534v__dat__length;
  *__temp1247v=__temp534v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp535v(const char* c, void** __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v, unsigned long long* __temp1252v, unsigned long long* __temp1253v, char* __temp1254v) {
  void* __temp536v__unsafe_ptr=0;
  unsigned long long __temp536v__unsafe_size=0;
  unsigned long long __temp536v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp537v=0;
  void* __temp538v__buf__unsafe_ptr=0;
  unsigned long long __temp538v__buf__unsafe_size=0;
  unsigned long long __temp538v__buf__unsafe_align=0;
  unsigned long long __temp538v__dat__pos=0;
  unsigned long long __temp538v__dat__length=0;
  char __temp538v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp489v(&__temp536v__unsafe_ptr,&__temp536v__unsafe_size,&__temp536v__unsafe_align);
  buf__unsafe_ptr=__temp536v__unsafe_ptr;
  buf__unsafe_size=__temp536v__unsafe_size;
  buf__unsafe_align=__temp536v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp537v=0;
  __temp_errcode=str__temp529v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp537v,length,&__temp538v__buf__unsafe_ptr,&__temp538v__buf__unsafe_size,&__temp538v__buf__unsafe_align,&__temp538v__dat__pos,&__temp538v__dat__length,&__temp538v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1249v=__temp538v__buf__unsafe_ptr;
  *__temp1250v=__temp538v__buf__unsafe_size;
  *__temp1251v=__temp538v__buf__unsafe_align;
  *__temp1252v=__temp538v__dat__pos;
  *__temp1253v=__temp538v__dat__length;
  *__temp1254v=__temp538v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp539v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1255v) {
  *__temp1255v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1256v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(unsigned long long x, unsigned long long y, unsigned long long* __temp1257v) {
  int __temp159v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1258v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y?1:0;
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void free__temp429v(void** __temp1259v) {
  void* allocated=*__temp1259v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1259v=allocated;
}

static inline __attribute__((always_inline)) int realloc__temp427v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1260v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp428v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp428v__);
  *__temp1260v=__temp428v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1261v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void zero__temp430v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp452v(void** __temp1262v, unsigned long long* __temp1263v, unsigned long long* __temp1264v, unsigned long long size, void** __temp1265v, unsigned long long* __temp1266v, unsigned long long* __temp1267v) {
  void* buffer__unsafe_ptr=*__temp1262v;
  unsigned long long buffer__unsafe_size=*__temp1263v;
  unsigned long long buffer__unsafe_align=*__temp1264v;
  int __temp453v__=0;
  unsigned long long __temp454v=0;
  int __temp455v__=0;
  unsigned long long __temp456v=0;
  unsigned long long __temp458v=0;
  int __temp459v__=0;
  unsigned long long __temp460v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp461v__=0;
  unsigned long long bytes=0;
  void* __temp462v__=0;
  int __temp463v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp453v__);
  if(__temp453v__){
  goto __temp_return;
  }
  __temp454v=0;
  eq__temp278v(size,__temp454v,&__temp455v__);
  if(__temp455v__){
  __temp456v=0;
  buffer__unsafe_size=__temp456v;
  free__temp429v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp458v=0;
  eq__temp278v(buffer__unsafe_size,__temp458v,&__temp459v__);
  if(__temp459v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp460v__);
  prev_bytes=__temp460v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp461v__);
  bytes=__temp461v__;
  __temp_errcode=realloc__temp427v(buffer__unsafe_ptr,bytes,&__temp462v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp462v__;
  lt__temp182v(prev_bytes,bytes,&__temp463v__);
  if(__temp463v__){
  zero__temp430v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1262v=buffer__unsafe_ptr;
  *__temp1263v=buffer__unsafe_size;
  *__temp1264v=buffer__unsafe_align;
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp528v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, char* __temp1273v) {
  *__temp1268v=other__buf__unsafe_ptr;
  *__temp1269v=other__buf__unsafe_size;
  *__temp1270v=other__buf__unsafe_align;
  *__temp1271v=other__dat__pos;
  *__temp1272v=other__dat__length;
  *__temp1273v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1274v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y?1:0;
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) int copy__temp651v(void** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, unsigned long long* __temp1280v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v, char* __temp1286v) {
  void* buf__unsafe_ptr=*__temp1277v;
  unsigned long long buf__unsafe_size=*__temp1278v;
  unsigned long long buf__unsafe_align=*__temp1279v;
  unsigned long long pos=*__temp1280v;
  void* __temp652v__buf__unsafe_ptr=0;
  unsigned long long __temp652v__buf__unsafe_size=0;
  unsigned long long __temp652v__buf__unsafe_align=0;
  unsigned long long __temp652v__dat__pos=0;
  unsigned long long __temp652v__dat__length=0;
  char __temp652v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp653v__=0;
  unsigned long long __temp654v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp655v__=0;
  int __temp656v__=0;
  unsigned long long __temp657v=0;
  unsigned long long __temp658v__=0;
  unsigned long long prev_pos=0;
  void* __temp659v__buf__unsafe_ptr=0;
  unsigned long long __temp659v__buf__unsafe_size=0;
  unsigned long long __temp659v__buf__unsafe_align=0;
  unsigned long long __temp659v__dat__pos=0;
  unsigned long long __temp659v__dat__length=0;
  char __temp659v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp528v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp652v__buf__unsafe_ptr,&__temp652v__buf__unsafe_size,&__temp652v__buf__unsafe_align,&__temp652v__dat__pos,&__temp652v__dat__length,&__temp652v__dat__first);
  other__buf__unsafe_ptr=__temp652v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp652v__buf__unsafe_size;
  other__buf__unsafe_align=__temp652v__buf__unsafe_align;
  other__dat__pos=__temp652v__dat__pos;
  other__dat__length=__temp652v__dat__length;
  other__dat__first=__temp652v__dat__first;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp653v__);
  add__temp110v(pos,__temp653v__,&__temp654v__);
  next_pos=__temp654v__;
  len__temp487v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp655v__);
  gt__temp206v(next_pos,__temp655v__,&__temp656v__);
  if(__temp656v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp657v=0;
  add__temp110v(pos,__temp657v,&__temp658v__);
  prev_pos=__temp658v__;
  pos=next_pos;
  str__temp519v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp659v__buf__unsafe_ptr,&__temp659v__buf__unsafe_size,&__temp659v__buf__unsafe_align,&__temp659v__dat__pos,&__temp659v__dat__length,&__temp659v__dat__first);
  *__temp1277v=buf__unsafe_ptr;
  *__temp1278v=buf__unsafe_size;
  *__temp1279v=buf__unsafe_align;
  *__temp1280v=pos;
  *__temp1281v=__temp659v__buf__unsafe_ptr;
  *__temp1282v=__temp659v__buf__unsafe_size;
  *__temp1283v=__temp659v__buf__unsafe_align;
  *__temp1284v=__temp659v__dat__pos;
  *__temp1285v=__temp659v__dat__length;
  *__temp1286v=__temp659v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp719v(void** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, unsigned long long* __temp1293v, const char* _other, void** __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v, unsigned long long* __temp1298v, char* __temp1299v) {
  void* li__buffer__unsafe_ptr=*__temp1290v;
  unsigned long long li__buffer__unsafe_size=*__temp1291v;
  unsigned long long li__buffer__unsafe_align=*__temp1292v;
  unsigned long long li__length=*__temp1293v;
  void* __temp720v__buf__unsafe_ptr=0;
  unsigned long long __temp720v__buf__unsafe_size=0;
  unsigned long long __temp720v__buf__unsafe_align=0;
  unsigned long long __temp720v__dat__pos=0;
  unsigned long long __temp720v__dat__length=0;
  char __temp720v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp721v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp722v__=0;
  unsigned long long __temp723v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp724v__=0;
  int __temp725v__=0;
  unsigned long long __temp726v=0;
  unsigned long long __temp727v__=0;
  unsigned long long __temp728v=0;
  unsigned long long __temp729v__=0;
  unsigned long long __temp730v__=0;
  void* __temp731v__unsafe_ptr=0;
  unsigned long long __temp731v__unsafe_size=0;
  unsigned long long __temp731v__unsafe_align=0;
  void* __temp732v__buf__unsafe_ptr=0;
  unsigned long long __temp732v__buf__unsafe_size=0;
  unsigned long long __temp732v__buf__unsafe_align=0;
  unsigned long long __temp732v__dat__pos=0;
  unsigned long long __temp732v__dat__length=0;
  char __temp732v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp535v(_other,&__temp720v__buf__unsafe_ptr,&__temp720v__buf__unsafe_size,&__temp720v__buf__unsafe_align,&__temp720v__dat__pos,&__temp720v__dat__length,&__temp720v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp720v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp720v__buf__unsafe_size;
  other__buf__unsafe_align=__temp720v__buf__unsafe_align;
  other__dat__pos=__temp720v__dat__pos;
  other__dat__length=__temp720v__dat__length;
  other__dat__first=__temp720v__dat__first;
  __temp721v=li__length;
  prev_prev_length=__temp721v;
  len__temp539v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp722v__);
  add__temp110v(li__length,__temp722v__,&__temp723v__);
  prev_length=__temp723v__;
  len__temp487v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp724v__);
  ge__temp254v(prev_length,__temp724v__,&__temp725v__);
  if(__temp725v__){
  __temp726v=2;
  div__temp158v(prev_length,__temp726v,&__temp727v__);
  __temp728v=1;
  add__temp110v(__temp727v__,__temp728v,&__temp729v__);
  add__temp110v(prev_length,__temp729v__,&__temp730v__);
  __temp_errcode=resize__temp452v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp730v__,&__temp731v__unsafe_ptr,&__temp731v__unsafe_size,&__temp731v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp731v__unsafe_ptr;
  li__buffer__unsafe_size=__temp731v__unsafe_size;
  li__buffer__unsafe_align=__temp731v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp651v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp732v__buf__unsafe_ptr,&__temp732v__buf__unsafe_size,&__temp732v__buf__unsafe_align,&__temp732v__dat__pos,&__temp732v__dat__length,&__temp732v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1290v=li__buffer__unsafe_ptr;
  *__temp1291v=li__buffer__unsafe_size;
  *__temp1292v=li__buffer__unsafe_align;
  *__temp1293v=li__length;
  *__temp1294v=__temp732v__buf__unsafe_ptr;
  *__temp1295v=__temp732v__buf__unsafe_size;
  *__temp1296v=__temp732v__buf__unsafe_align;
  *__temp1297v=__temp732v__dat__pos;
  *__temp1298v=__temp732v__dat__length;
  *__temp1299v=__temp732v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1199v(void** __temp1308v, unsigned long long* __temp1309v, unsigned long long* __temp1310v, unsigned long long* __temp1311v, unsigned long long* __temp1312v, char* __temp1313v, void** __temp1314v, unsigned long long* __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, unsigned long long* __temp1318v, char* __temp1319v) {
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  void* __temp1204v__buffer__unsafe_ptr=0;
  unsigned long long __temp1204v__buffer__unsafe_size=0;
  unsigned long long __temp1204v__buffer__unsafe_align=0;
  unsigned long long __temp1204v__length=0;
  void* __temp1206v__buf__unsafe_ptr=0;
  unsigned long long __temp1206v__buf__unsafe_size=0;
  unsigned long long __temp1206v__buf__unsafe_align=0;
  unsigned long long __temp1206v__dat__pos=0;
  unsigned long long __temp1206v__dat__length=0;
  char __temp1206v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  void* __temp1208v__buf__unsafe_ptr=0;
  unsigned long long __temp1208v__buf__unsafe_size=0;
  unsigned long long __temp1208v__buf__unsafe_align=0;
  unsigned long long __temp1208v__dat__pos=0;
  unsigned long long __temp1208v__dat__length=0;
  char __temp1208v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  list__temp495v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,&__temp1204v__buffer__unsafe_ptr,&__temp1204v__buffer__unsafe_size,&__temp1204v__buffer__unsafe_align,&__temp1204v__length);
  __temp_errcode=copy__temp719v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,&__temp1203v__unsafe_size,__temp1205v,&__temp1206v__buf__unsafe_ptr,&__temp1206v__buf__unsafe_size,&__temp1206v__buf__unsafe_align,&__temp1206v__dat__pos,&__temp1206v__dat__length,&__temp1206v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1206v__dat__pos;
  s1__dat__length=__temp1206v__dat__length;
  s1__dat__first=__temp1206v__dat__first;
  __temp_errcode=copy__temp719v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,&__temp1203v__unsafe_size,__temp1207v,&__temp1208v__buf__unsafe_ptr,&__temp1208v__buf__unsafe_size,&__temp1208v__buf__unsafe_align,&__temp1208v__dat__pos,&__temp1208v__dat__length,&__temp1208v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1208v__dat__pos;
  s2__dat__length=__temp1208v__dat__length;
  s2__dat__first=__temp1208v__dat__first;
  s1__buf__unsafe_ptr=__temp1203v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1203v__unsafe_size;
  s1__buf__unsafe_align=__temp1203v__unsafe_align;
  s2__buf__unsafe_ptr=__temp1203v__unsafe_ptr;
  s2__buf__unsafe_size=__temp1203v__unsafe_size;
  s2__buf__unsafe_align=__temp1203v__unsafe_align;
  *__temp1308v=s1__buf__unsafe_ptr;
  *__temp1309v=s1__buf__unsafe_size;
  *__temp1310v=s1__buf__unsafe_align;
  *__temp1311v=s1__dat__pos;
  *__temp1312v=s1__dat__length;
  *__temp1313v=s1__dat__first;
  *__temp1314v=s2__buf__unsafe_ptr;
  *__temp1315v=s2__buf__unsafe_size;
  *__temp1316v=s2__buf__unsafe_align;
  *__temp1317v=s2__dat__pos;
  *__temp1318v=s2__dat__length;
  *__temp1319v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp691v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp693v__=0;
  int __temp694v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp348v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp693v__);
  gt__temp206v(__temp693v__,s__buf__unsafe_size,&__temp694v__);
  if(__temp694v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1209v() {
  void* __temp1210v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp1210v__s1__buf__unsafe_size=0;
  unsigned long long __temp1210v__s1__buf__unsafe_align=0;
  unsigned long long __temp1210v__s1__dat__pos=0;
  unsigned long long __temp1210v__s1__dat__length=0;
  char __temp1210v__s1__dat__first=0;
  void* __temp1210v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp1210v__s2__buf__unsafe_size=0;
  unsigned long long __temp1210v__s2__buf__unsafe_align=0;
  unsigned long long __temp1210v__s2__dat__pos=0;
  unsigned long long __temp1210v__s2__dat__length=0;
  char __temp1210v__s2__dat__first=0;
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
  int __temp_complain=0;
  __temp_errcode=test__temp1199v(&__temp1210v__s1__buf__unsafe_ptr,&__temp1210v__s1__buf__unsafe_size,&__temp1210v__s1__buf__unsafe_align,&__temp1210v__s1__dat__pos,&__temp1210v__s1__dat__length,&__temp1210v__s1__dat__first,&__temp1210v__s2__buf__unsafe_ptr,&__temp1210v__s2__buf__unsafe_size,&__temp1210v__s2__buf__unsafe_align,&__temp1210v__s2__dat__pos,&__temp1210v__s2__dat__length,&__temp1210v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp1210v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp1210v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp1210v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp1210v__s1__dat__pos;
  s__s1__dat__length=__temp1210v__s1__dat__length;
  s__s1__dat__first=__temp1210v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp1210v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp1210v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp1210v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp1210v__s2__dat__pos;
  s__s2__dat__length=__temp1210v__s2__dat__length;
  s__s2__dat__first=__temp1210v__s2__dat__first;
  __temp_errcode=print__temp691v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp691v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1209v();return 0;}