#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp1206v="456";
const char* const __temp1204v="123";
const char* const __temp350v="\n";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp1199v(void** __temp1212v, unsigned long long* __temp1213v, unsigned long long* __temp1214v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1212v=unsafe_ptr;
  *__temp1213v=unsafe_size;
  *__temp1214v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp486v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1215v) {
  *__temp1215v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void list__temp494v(void** __temp1216v, unsigned long long* __temp1217v, unsigned long long* __temp1218v, void** __temp1219v, unsigned long long* __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v) {
  void* buffer__unsafe_ptr=*__temp1216v;
  unsigned long long buffer__unsafe_size=*__temp1217v;
  unsigned long long buffer__unsafe_align=*__temp1218v;
  unsigned long long __temp495v__=0;
  unsigned long long __temp496v=0;
  unsigned long long length=0;
  len__temp486v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp495v__);
  __temp496v=__temp495v__;
  length=__temp496v;
  *__temp1216v=buffer__unsafe_ptr;
  *__temp1217v=buffer__unsafe_size;
  *__temp1218v=buffer__unsafe_align;
  *__temp1219v=buffer__unsafe_ptr;
  *__temp1220v=buffer__unsafe_size;
  *__temp1221v=buffer__unsafe_align;
  *__temp1222v=length;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp488v(void** __temp1223v, unsigned long long* __temp1224v, unsigned long long* __temp1225v) {
  void* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1223v=unsafe_ptr;
  *__temp1224v=unsafe_size;
  *__temp1225v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1226v) {
  int value=0;
  *__temp1226v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1227v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1227v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1228v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1228v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, int* __temp1229v) {
  int __temp303v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1229v=z;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, int* __temp1230v) {
  int __temp255v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1231v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1231v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(void* to, void* from, void** __temp1232v) {
  *__temp1232v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(void* allocated, unsigned long long offset, void** __temp1233v) {
  void* element=0;
  void* __temp431v__=0;
  element=((char*)allocated)+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1233v=__temp431v__;
}

static inline __attribute__((always_inline)) int get__temp482v(void* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, void** __temp1234v) {
  int __temp483v__=0;
  unsigned long long __temp484v__=0;
  void* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1234v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp518v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, void** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v, unsigned long long* __temp1239v, char* __temp1240v) {
  *__temp1235v=buf__unsafe_ptr;
  *__temp1236v=buf__unsafe_size;
  *__temp1237v=buf__unsafe_align;
  *__temp1238v=dat__pos;
  *__temp1239v=dat__length;
  *__temp1240v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp528v(void* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, void** __temp1241v, unsigned long long* __temp1242v, unsigned long long* __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v, char* __temp1246v) {
  unsigned long long __temp529v=0;
  int __temp530v__=0;
  void* __temp531v__=0;
  char __temp532v__value=0;
  char first=0;
  void* __temp533v__buf__unsafe_ptr=0;
  unsigned long long __temp533v__buf__unsafe_size=0;
  unsigned long long __temp533v__buf__unsafe_align=0;
  unsigned long long __temp533v__dat__pos=0;
  unsigned long long __temp533v__dat__length=0;
  char __temp533v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp529v=0;
  neq__temp302v(length,__temp529v,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=get__temp482v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp531v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp531v__){
  goto __temp_failure;
  }
  memcpy(&__temp532v__value,(char*)__temp531v__,1);
  first=__temp532v__value;
  }
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp533v__buf__unsafe_ptr,&__temp533v__buf__unsafe_size,&__temp533v__buf__unsafe_align,&__temp533v__dat__pos,&__temp533v__dat__length,&__temp533v__dat__first);
  *__temp1241v=__temp533v__buf__unsafe_ptr;
  *__temp1242v=__temp533v__buf__unsafe_size;
  *__temp1243v=__temp533v__buf__unsafe_align;
  *__temp1244v=__temp533v__dat__pos;
  *__temp1245v=__temp533v__dat__length;
  *__temp1246v=__temp533v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp534v(const char* c, void** __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v, unsigned long long* __temp1252v, char* __temp1253v) {
  void* __temp535v__unsafe_ptr=0;
  unsigned long long __temp535v__unsafe_size=0;
  unsigned long long __temp535v__unsafe_align=0;
  void* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp536v=0;
  void* __temp537v__buf__unsafe_ptr=0;
  unsigned long long __temp537v__buf__unsafe_size=0;
  unsigned long long __temp537v__buf__unsafe_align=0;
  unsigned long long __temp537v__dat__pos=0;
  unsigned long long __temp537v__dat__length=0;
  char __temp537v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp488v(&__temp535v__unsafe_ptr,&__temp535v__unsafe_size,&__temp535v__unsafe_align);
  buf__unsafe_ptr=__temp535v__unsafe_ptr;
  buf__unsafe_size=__temp535v__unsafe_size;
  buf__unsafe_align=__temp535v__unsafe_align;
  buf__unsafe_ptr=c;
  length=c?strlen(c):0;
  buf__unsafe_size=length+1;
  __temp536v=0;
  __temp_errcode=str__temp528v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp536v,length,&__temp537v__buf__unsafe_ptr,&__temp537v__buf__unsafe_size,&__temp537v__buf__unsafe_align,&__temp537v__dat__pos,&__temp537v__dat__length,&__temp537v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1248v=__temp537v__buf__unsafe_ptr;
  *__temp1249v=__temp537v__buf__unsafe_size;
  *__temp1250v=__temp537v__buf__unsafe_align;
  *__temp1251v=__temp537v__dat__pos;
  *__temp1252v=__temp537v__dat__length;
  *__temp1253v=__temp537v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp538v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1254v) {
  *__temp1254v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1255v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1255v=z;
}

static inline __attribute__((always_inline)) void div__temp158v(unsigned long long x, unsigned long long y, unsigned long long* __temp1256v) {
  int __temp159v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp159v__);
  z=x/y;
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, int* __temp1257v) {
  int __temp279v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(void** __temp1258v) {
  void* allocated=*__temp1258v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1258v=allocated;
}

static inline __attribute__((always_inline)) int realloc__temp426v(void* allocated__unsafe_ptr, unsigned long long bytes, void** __temp1259v) {
  void* new_allocated=0;
  int failed=0;
  void* __temp427v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  new_allocated=allocated__unsafe_ptr?realloc(allocated__unsafe_ptr,bytes):malloc(bytes);
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  *__temp1259v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1260v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(void* allocated, unsigned long long from, unsigned long long to) {
  memset(((char*)allocated)+from,0,to-from);
}

static inline __attribute__((always_inline)) int resize__temp451v(void** __temp1261v, unsigned long long* __temp1262v, unsigned long long* __temp1263v, unsigned long long size, void** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v) {
  void* buffer__unsafe_ptr=*__temp1261v;
  unsigned long long buffer__unsafe_size=*__temp1262v;
  unsigned long long buffer__unsafe_align=*__temp1263v;
  int __temp452v__=0;
  unsigned long long __temp453v=0;
  int __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  int __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  void* __temp461v__=0;
  int __temp462v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp452v__);
  if(__temp452v__){
  goto __temp_return;
  }
  __temp453v=0;
  eq__temp278v(size,__temp453v,&__temp454v__);
  if(__temp454v__){
  __temp455v=0;
  buffer__unsafe_size=__temp455v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp278v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp459v__);
  prev_bytes=__temp459v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp460v__);
  bytes=__temp460v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp461v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__;
  lt__temp182v(prev_bytes,bytes,&__temp462v__);
  if(__temp462v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1261v=buffer__unsafe_ptr;
  *__temp1262v=buffer__unsafe_size;
  *__temp1263v=buffer__unsafe_align;
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp527v(void* other__buf__unsafe_ptr, unsigned long long other__buf__unsafe_size, unsigned long long other__buf__unsafe_align, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, void** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v, char* __temp1272v) {
  *__temp1267v=other__buf__unsafe_ptr;
  *__temp1268v=other__buf__unsafe_size;
  *__temp1269v=other__buf__unsafe_align;
  *__temp1270v=other__dat__pos;
  *__temp1271v=other__dat__length;
  *__temp1272v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, int* __temp1273v) {
  int __temp207v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) int copy__temp650v(void** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, void* _other__buf__unsafe_ptr, unsigned long long _other__buf__unsafe_size, unsigned long long _other__buf__unsafe_align, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, void** __temp1280v, unsigned long long* __temp1281v, unsigned long long* __temp1282v, unsigned long long* __temp1283v, unsigned long long* __temp1284v, char* __temp1285v) {
  void* buf__unsafe_ptr=*__temp1276v;
  unsigned long long buf__unsafe_size=*__temp1277v;
  unsigned long long buf__unsafe_align=*__temp1278v;
  unsigned long long pos=*__temp1279v;
  void* __temp651v__buf__unsafe_ptr=0;
  unsigned long long __temp651v__buf__unsafe_size=0;
  unsigned long long __temp651v__buf__unsafe_align=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp654v__=0;
  int __temp655v__=0;
  unsigned long long __temp656v=0;
  unsigned long long __temp657v__=0;
  unsigned long long prev_pos=0;
  void* __temp658v__buf__unsafe_ptr=0;
  unsigned long long __temp658v__buf__unsafe_size=0;
  unsigned long long __temp658v__buf__unsafe_align=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp527v(_other__buf__unsafe_ptr,_other__buf__unsafe_size,_other__buf__unsafe_align,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp651v__buf__unsafe_ptr,&__temp651v__buf__unsafe_size,&__temp651v__buf__unsafe_align,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  other__buf__unsafe_ptr=__temp651v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp651v__buf__unsafe_size;
  other__buf__unsafe_align=__temp651v__buf__unsafe_align;
  other__dat__pos=__temp651v__dat__pos;
  other__dat__length=__temp651v__dat__length;
  other__dat__first=__temp651v__dat__first;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp652v__);
  add__temp110v(pos,__temp652v__,&__temp653v__);
  next_pos=__temp653v__;
  len__temp486v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp654v__);
  gt__temp206v(next_pos,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(((char*)buf__unsafe_ptr)+pos,((char*)other__buf__unsafe_ptr)+other__dat__pos,other__dat__length*sizeof(char));
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp518v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__buf__unsafe_ptr,&__temp658v__buf__unsafe_size,&__temp658v__buf__unsafe_align,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  *__temp1276v=buf__unsafe_ptr;
  *__temp1277v=buf__unsafe_size;
  *__temp1278v=buf__unsafe_align;
  *__temp1279v=pos;
  *__temp1280v=__temp658v__buf__unsafe_ptr;
  *__temp1281v=__temp658v__buf__unsafe_size;
  *__temp1282v=__temp658v__buf__unsafe_align;
  *__temp1283v=__temp658v__dat__pos;
  *__temp1284v=__temp658v__dat__length;
  *__temp1285v=__temp658v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

int copy__temp718v(void** __temp1289v, unsigned long long* __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, const char* _other, void** __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v, char* __temp1298v) {
  void* li__buffer__unsafe_ptr=*__temp1289v;
  unsigned long long li__buffer__unsafe_size=*__temp1290v;
  unsigned long long li__buffer__unsafe_align=*__temp1291v;
  unsigned long long li__length=*__temp1292v;
  void* __temp719v__buf__unsafe_ptr=0;
  unsigned long long __temp719v__buf__unsafe_size=0;
  unsigned long long __temp719v__buf__unsafe_align=0;
  unsigned long long __temp719v__dat__pos=0;
  unsigned long long __temp719v__dat__length=0;
  char __temp719v__dat__first=0;
  void* other__buf__unsafe_ptr=0;
  unsigned long long other__buf__unsafe_size=0;
  unsigned long long other__buf__unsafe_align=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp720v=0;
  unsigned long long prev_prev_length=0;
  unsigned long long __temp721v__=0;
  unsigned long long __temp722v__=0;
  unsigned long long prev_length=0;
  unsigned long long __temp723v__=0;
  int __temp724v__=0;
  unsigned long long __temp725v=0;
  unsigned long long __temp726v__=0;
  unsigned long long __temp727v=0;
  unsigned long long __temp728v__=0;
  unsigned long long __temp729v__=0;
  void* __temp730v__unsafe_ptr=0;
  unsigned long long __temp730v__unsafe_size=0;
  unsigned long long __temp730v__unsafe_align=0;
  void* __temp731v__buf__unsafe_ptr=0;
  unsigned long long __temp731v__buf__unsafe_size=0;
  unsigned long long __temp731v__buf__unsafe_align=0;
  unsigned long long __temp731v__dat__pos=0;
  unsigned long long __temp731v__dat__length=0;
  char __temp731v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp534v(_other,&__temp719v__buf__unsafe_ptr,&__temp719v__buf__unsafe_size,&__temp719v__buf__unsafe_align,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__buf__unsafe_ptr=__temp719v__buf__unsafe_ptr;
  other__buf__unsafe_size=__temp719v__buf__unsafe_size;
  other__buf__unsafe_align=__temp719v__buf__unsafe_align;
  other__dat__pos=__temp719v__dat__pos;
  other__dat__length=__temp719v__dat__length;
  other__dat__first=__temp719v__dat__first;
  __temp720v=li__length;
  prev_prev_length=__temp720v;
  len__temp538v(other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp721v__);
  add__temp110v(li__length,__temp721v__,&__temp722v__);
  prev_length=__temp722v__;
  len__temp486v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_align,&__temp723v__);
  ge__temp254v(prev_length,__temp723v__,&__temp724v__);
  if(__temp724v__){
  __temp725v=2;
  div__temp158v(prev_length,__temp725v,&__temp726v__);
  __temp727v=1;
  add__temp110v(__temp726v__,__temp727v,&__temp728v__);
  add__temp110v(prev_length,__temp728v__,&__temp729v__);
  __temp_errcode=resize__temp451v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp729v__,&__temp730v__unsafe_ptr,&__temp730v__unsafe_size,&__temp730v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp730v__unsafe_ptr;
  li__buffer__unsafe_size=__temp730v__unsafe_size;
  li__buffer__unsafe_align=__temp730v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp650v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,&prev_prev_length,other__buf__unsafe_ptr,other__buf__unsafe_size,other__buf__unsafe_align,other__dat__pos,other__dat__length,other__dat__first,&__temp731v__buf__unsafe_ptr,&__temp731v__buf__unsafe_size,&__temp731v__buf__unsafe_align,&__temp731v__dat__pos,&__temp731v__dat__length,&__temp731v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  *__temp1289v=li__buffer__unsafe_ptr;
  *__temp1290v=li__buffer__unsafe_size;
  *__temp1291v=li__buffer__unsafe_align;
  *__temp1292v=li__length;
  *__temp1293v=__temp731v__buf__unsafe_ptr;
  *__temp1294v=__temp731v__buf__unsafe_size;
  *__temp1295v=__temp731v__buf__unsafe_align;
  *__temp1296v=__temp731v__dat__pos;
  *__temp1297v=__temp731v__dat__length;
  *__temp1298v=__temp731v__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1198v(void** __temp1307v, unsigned long long* __temp1308v, unsigned long long* __temp1309v, unsigned long long* __temp1310v, unsigned long long* __temp1311v, char* __temp1312v, void** __temp1313v, unsigned long long* __temp1314v, unsigned long long* __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, char* __temp1318v) {
  void* __temp1201v__unsafe_ptr=0;
  unsigned long long __temp1201v__unsafe_size=0;
  unsigned long long __temp1201v__unsafe_align=0;
  void* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  void* __temp1203v__buffer__unsafe_ptr=0;
  unsigned long long __temp1203v__buffer__unsafe_size=0;
  unsigned long long __temp1203v__buffer__unsafe_align=0;
  unsigned long long __temp1203v__length=0;
  void* __temp1205v__buf__unsafe_ptr=0;
  unsigned long long __temp1205v__buf__unsafe_size=0;
  unsigned long long __temp1205v__buf__unsafe_align=0;
  unsigned long long __temp1205v__dat__pos=0;
  unsigned long long __temp1205v__dat__length=0;
  char __temp1205v__dat__first=0;
  void* s1__buf__unsafe_ptr=0;
  unsigned long long s1__buf__unsafe_size=0;
  unsigned long long s1__buf__unsafe_align=0;
  unsigned long long s1__dat__pos=0;
  unsigned long long s1__dat__length=0;
  char s1__dat__first=0;
  void* __temp1207v__buf__unsafe_ptr=0;
  unsigned long long __temp1207v__buf__unsafe_size=0;
  unsigned long long __temp1207v__buf__unsafe_align=0;
  unsigned long long __temp1207v__dat__pos=0;
  unsigned long long __temp1207v__dat__length=0;
  char __temp1207v__dat__first=0;
  void* s2__buf__unsafe_ptr=0;
  unsigned long long s2__buf__unsafe_size=0;
  unsigned long long s2__buf__unsafe_align=0;
  unsigned long long s2__dat__pos=0;
  unsigned long long s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  list__temp494v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,&__temp1203v__buffer__unsafe_ptr,&__temp1203v__buffer__unsafe_size,&__temp1203v__buffer__unsafe_align,&__temp1203v__length);
  __temp_errcode=copy__temp718v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,&__temp1202v__unsafe_size,__temp1204v,&__temp1205v__buf__unsafe_ptr,&__temp1205v__buf__unsafe_size,&__temp1205v__buf__unsafe_align,&__temp1205v__dat__pos,&__temp1205v__dat__length,&__temp1205v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1205v__dat__pos;
  s1__dat__length=__temp1205v__dat__length;
  s1__dat__first=__temp1205v__dat__first;
  __temp_errcode=copy__temp718v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,&__temp1202v__unsafe_size,__temp1206v,&__temp1207v__buf__unsafe_ptr,&__temp1207v__buf__unsafe_size,&__temp1207v__buf__unsafe_align,&__temp1207v__dat__pos,&__temp1207v__dat__length,&__temp1207v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1207v__dat__pos;
  s2__dat__length=__temp1207v__dat__length;
  s2__dat__first=__temp1207v__dat__first;
  s1__buf__unsafe_ptr=__temp1202v__unsafe_ptr;
  s1__buf__unsafe_size=__temp1202v__unsafe_size;
  s1__buf__unsafe_align=__temp1202v__unsafe_align;
  s2__buf__unsafe_ptr=__temp1202v__unsafe_ptr;
  s2__buf__unsafe_size=__temp1202v__unsafe_size;
  s2__buf__unsafe_align=__temp1202v__unsafe_align;
  *__temp1307v=s1__buf__unsafe_ptr;
  *__temp1308v=s1__buf__unsafe_size;
  *__temp1309v=s1__buf__unsafe_align;
  *__temp1310v=s1__dat__pos;
  *__temp1311v=s1__dat__length;
  *__temp1312v=s1__dat__first;
  *__temp1313v=s2__buf__unsafe_ptr;
  *__temp1314v=s2__buf__unsafe_size;
  *__temp1315v=s2__buf__unsafe_align;
  *__temp1316v=s2__dat__pos;
  *__temp1317v=s2__dat__length;
  *__temp1318v=s2__dat__first;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp690v(void* s__buf__unsafe_ptr, unsigned long long s__buf__unsafe_size, unsigned long long s__buf__unsafe_align, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  const char* endl=0;
  unsigned long long __temp692v__=0;
  int __temp693v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  endl=__temp350v;
  add__temp110v(s__dat__length,s__dat__pos,&__temp692v__);
  gt__temp206v(__temp692v__,s__buf__unsafe_size,&__temp693v__);
  if(__temp693v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  printf("%.*s%s",(int)s__dat__length,s__dat__pos+(const char*)s__buf__unsafe_ptr,endl);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1208v() {
  void* __temp1209v__s1__buf__unsafe_ptr=0;
  unsigned long long __temp1209v__s1__buf__unsafe_size=0;
  unsigned long long __temp1209v__s1__buf__unsafe_align=0;
  unsigned long long __temp1209v__s1__dat__pos=0;
  unsigned long long __temp1209v__s1__dat__length=0;
  char __temp1209v__s1__dat__first=0;
  void* __temp1209v__s2__buf__unsafe_ptr=0;
  unsigned long long __temp1209v__s2__buf__unsafe_size=0;
  unsigned long long __temp1209v__s2__buf__unsafe_align=0;
  unsigned long long __temp1209v__s2__dat__pos=0;
  unsigned long long __temp1209v__s2__dat__length=0;
  char __temp1209v__s2__dat__first=0;
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
  __temp_errcode=test__temp1198v(&__temp1209v__s1__buf__unsafe_ptr,&__temp1209v__s1__buf__unsafe_size,&__temp1209v__s1__buf__unsafe_align,&__temp1209v__s1__dat__pos,&__temp1209v__s1__dat__length,&__temp1209v__s1__dat__first,&__temp1209v__s2__buf__unsafe_ptr,&__temp1209v__s2__buf__unsafe_size,&__temp1209v__s2__buf__unsafe_align,&__temp1209v__s2__dat__pos,&__temp1209v__s2__dat__length,&__temp1209v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__buf__unsafe_ptr=__temp1209v__s1__buf__unsafe_ptr;
  s__s1__buf__unsafe_size=__temp1209v__s1__buf__unsafe_size;
  s__s1__buf__unsafe_align=__temp1209v__s1__buf__unsafe_align;
  s__s1__dat__pos=__temp1209v__s1__dat__pos;
  s__s1__dat__length=__temp1209v__s1__dat__length;
  s__s1__dat__first=__temp1209v__s1__dat__first;
  s__s2__buf__unsafe_ptr=__temp1209v__s2__buf__unsafe_ptr;
  s__s2__buf__unsafe_size=__temp1209v__s2__buf__unsafe_size;
  s__s2__buf__unsafe_align=__temp1209v__s2__buf__unsafe_align;
  s__s2__dat__pos=__temp1209v__s2__dat__pos;
  s__s2__dat__length=__temp1209v__s2__dat__length;
  s__s2__dat__first=__temp1209v__s2__dat__first;
  __temp_errcode=print__temp690v(s__s1__buf__unsafe_ptr,s__s1__buf__unsafe_size,s__s1__buf__unsafe_align,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp690v(s__s2__buf__unsafe_ptr,s__s2__buf__unsafe_size,s__s2__buf__unsafe_align,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main() {main__temp1208v();return 0;}