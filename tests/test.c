#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1188v="test";
const char* const __temp352v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1195v) {
  int value=0;
  *__temp1195v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1196v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1196v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1197v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1197v=__temp87v__;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1198v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1198v=z;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1199v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1199v=__temp412v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1200v, unsigned long long* __temp1201v, unsigned long long* __temp1202v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1200v=unsafe_ptr;
  *__temp1201v=unsafe_size;
  *__temp1202v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, char* __temp1203v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1203v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1204v) {
  char* allocated=*__temp1204v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1204v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1205v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1205v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1206v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1206v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1207v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1207v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1208v, unsigned long long* __temp1209v, unsigned long long* __temp1210v, unsigned long long size, char** __temp1211v, unsigned long long* __temp1212v, unsigned long long* __temp1213v) {
  char* buffer__unsafe_ptr=*__temp1208v;
  unsigned long long buffer__unsafe_size=*__temp1209v;
  unsigned long long buffer__unsafe_align=*__temp1210v;
  int __temp435v=0;
  char __temp436v__=0;
  unsigned long long __temp437v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buffer__unsafe_ptr,&__temp436v__);
  if(__temp436v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1208v=buffer__unsafe_ptr;
  *__temp1209v=buffer__unsafe_size;
  *__temp1210v=buffer__unsafe_align;
  *__temp1211v=buffer__unsafe_ptr;
  *__temp1212v=buffer__unsafe_size;
  *__temp1213v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp505v(unsigned long long size, char** __temp1214v, unsigned long long* __temp1215v, unsigned long long* __temp1216v) {
  char* __temp508v__unsafe_ptr=0;
  unsigned long long __temp508v__unsafe_size=0;
  unsigned long long __temp508v__unsafe_align=0;
  char* __temp509v__unsafe_ptr=0;
  unsigned long long __temp509v__unsafe_size=0;
  unsigned long long __temp509v__unsafe_align=0;
  char* __temp510v__unsafe_ptr=0;
  unsigned long long __temp510v__unsafe_size=0;
  unsigned long long __temp510v__unsafe_align=0;
  char __temp511v____temp436v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp508v__unsafe_ptr,&__temp508v__unsafe_size,&__temp508v__unsafe_align);
  __temp509v__unsafe_ptr=__temp508v__unsafe_ptr;
  __temp509v__unsafe_size=__temp508v__unsafe_size;
  __temp509v__unsafe_align=__temp508v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp509v__unsafe_ptr,&__temp509v__unsafe_size,&__temp509v__unsafe_align,size,&__temp510v__unsafe_ptr,&__temp510v__unsafe_size,&__temp510v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp398v(__temp510v__unsafe_ptr,&__temp511v____temp436v__);
  if(__temp511v____temp436v__){
  __temp510v__unsafe_size=0;
  __temp510v__unsafe_size=__temp510v__unsafe_size;
  free__temp428v(&__temp510v__unsafe_ptr);
  }
  __temp_return:
  *__temp1214v=__temp510v__unsafe_ptr;
  *__temp1215v=__temp510v__unsafe_size;
  *__temp1216v=__temp510v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp599v(char** __temp1217v, unsigned long long* __temp1218v, unsigned long long* __temp1219v, char** __temp1220v, unsigned long long* __temp1221v, unsigned long long* __temp1222v, unsigned long long* __temp1223v) {
  char* buf__unsafe_ptr=*__temp1217v;
  unsigned long long buf__unsafe_size=*__temp1218v;
  unsigned long long buf__unsafe_align=*__temp1219v;
  unsigned long long __temp600v=0;
  unsigned long long __temp601v=0;
  unsigned long long pos=0;
  __temp600v=0;
  __temp601v=__temp600v;
  pos=__temp601v;
  goto __temp_return;
  __temp_return:
  *__temp1217v=buf__unsafe_ptr;
  *__temp1218v=buf__unsafe_size;
  *__temp1219v=buf__unsafe_align;
  *__temp1220v=buf__unsafe_ptr;
  *__temp1221v=buf__unsafe_size;
  *__temp1222v=buf__unsafe_align;
  *__temp1223v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1224v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1224v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1225v) {
  *__temp1225v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1226v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1226v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1227v) {
  char __temp501v__=0;
  unsigned long long __temp502v__=0;
  char* __temp503v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp501v__);
  if(__temp501v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp502v__);
  add__temp430v(buffer__unsafe_ptr,__temp502v__,&__temp503v__);
  unsafe_ptr=__temp503v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1227v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1228v, unsigned long long* __temp1229v, unsigned long long* __temp1230v, char* __temp1231v) {
  goto __temp_return;
  __temp_return:
  *__temp1228v=unsafe_ptr;
  *__temp1229v=dat__pos;
  *__temp1230v=dat__length;
  *__temp1231v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1232v, unsigned long long* __temp1233v, unsigned long long* __temp1234v, char* __temp1235v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  unsigned long long __temp547v__dat__pos=0;
  unsigned long long __temp547v__dat__length=0;
  char __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1232v=__temp547v__unsafe_ptr;
  *__temp1233v=__temp547v__dat__pos;
  *__temp1234v=__temp547v__dat__length;
  *__temp1235v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1236v, unsigned long long* __temp1237v, unsigned long long* __temp1238v, char* __temp1239v) {
  unsigned long long __temp557v=0;
  char __temp558v__=0;
  char* __temp559v__=0;
  char __temp560v__value=0;
  char first=0;
  char* __temp561v__unsafe_ptr=0;
  unsigned long long __temp561v__dat__pos=0;
  unsigned long long __temp561v__dat__length=0;
  char __temp561v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp557v=0;
  neq__temp302v(length,__temp557v,&__temp558v__);
  if(__temp558v__){
  __temp_errcode=get__temp500v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp559v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp559v__){
  goto __temp_failure;
  }
  memcpy(&__temp560v__value,__temp559v__,1);
  first=__temp560v__value;
  }
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp561v__unsafe_ptr,&__temp561v__dat__pos,&__temp561v__dat__length,&__temp561v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1236v=__temp561v__unsafe_ptr;
  *__temp1237v=__temp561v__dat__pos;
  *__temp1238v=__temp561v__dat__length;
  *__temp1239v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1240v, unsigned long long* __temp1241v, unsigned long long* __temp1242v, char* __temp1243v) {
  char* __temp563v__unsafe_ptr=0;
  unsigned long long __temp563v__unsafe_size=0;
  unsigned long long __temp563v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp564v=0;
  char* __temp565v__unsafe_ptr=0;
  unsigned long long __temp565v__dat__pos=0;
  unsigned long long __temp565v__dat__length=0;
  char __temp565v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp506v(&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_align);
  buf__unsafe_ptr=__temp563v__unsafe_ptr;
  buf__unsafe_size=__temp563v__unsafe_size;
  buf__unsafe_align=__temp563v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp564v=0;
  __temp_errcode=str__temp556v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp564v,length,&__temp565v__unsafe_ptr,&__temp565v__dat__pos,&__temp565v__dat__length,&__temp565v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1240v=__temp565v__unsafe_ptr;
  *__temp1241v=__temp565v__dat__pos;
  *__temp1242v=__temp565v__dat__length;
  *__temp1243v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp555v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1244v, unsigned long long* __temp1245v, unsigned long long* __temp1246v, char* __temp1247v) {
  goto __temp_return;
  __temp_return:
  *__temp1244v=other__unsafe_ptr;
  *__temp1245v=other__dat__pos;
  *__temp1246v=other__dat__length;
  *__temp1247v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp566v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1248v) {
  goto __temp_return;
  __temp_return:
  *__temp1248v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1249v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1250v) {
  goto __temp_return;
  __temp_return:
  *__temp1250v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1251v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) int copy__temp636v(char** __temp1252v, unsigned long long* __temp1253v, unsigned long long* __temp1254v, unsigned long long* __temp1255v, char* _other__unsafe_ptr, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v, char* __temp1259v) {
  char* buf__unsafe_ptr=*__temp1252v;
  unsigned long long buf__unsafe_size=*__temp1253v;
  unsigned long long buf__unsafe_align=*__temp1254v;
  unsigned long long pos=*__temp1255v;
  char* __temp637v__unsafe_ptr=0;
  unsigned long long __temp637v__dat__pos=0;
  unsigned long long __temp637v__dat__length=0;
  char __temp637v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp638v__=0;
  unsigned long long __temp639v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp640v__=0;
  char __temp641v__=0;
  unsigned long long __temp642v=0;
  unsigned long long __temp643v__=0;
  unsigned long long prev_pos=0;
  char* __temp644v__unsafe_ptr=0;
  unsigned long long __temp644v__dat__pos=0;
  unsigned long long __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp555v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp637v__unsafe_ptr,&__temp637v__dat__pos,&__temp637v__dat__length,&__temp637v__dat__first);
  other__unsafe_ptr=__temp637v__unsafe_ptr;
  other__dat__pos=__temp637v__dat__pos;
  other__dat__length=__temp637v__dat__length;
  other__dat__first=__temp637v__dat__first;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp638v__);
  add__temp110v(pos,__temp638v__,&__temp639v__);
  next_pos=__temp639v__;
  len__temp504v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp640v__);
  gt__temp206v(next_pos,__temp640v__,&__temp641v__);
  if(__temp641v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp642v=0;
  add__temp110v(pos,__temp642v,&__temp643v__);
  prev_pos=__temp643v__;
  pos=next_pos;
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1252v=buf__unsafe_ptr;
  *__temp1253v=buf__unsafe_size;
  *__temp1254v=buf__unsafe_align;
  *__temp1255v=pos;
  *__temp1256v=__temp644v__unsafe_ptr;
  *__temp1257v=__temp644v__dat__pos;
  *__temp1258v=__temp644v__dat__length;
  *__temp1259v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1182v(char** __temp1260v, unsigned long long* __temp1261v, unsigned long long* __temp1262v, char* __temp1263v) {
  unsigned long long __temp1183v=0;
  unsigned long long __temp1184v__=0;
  char* __temp1185v__unsafe_ptr=0;
  unsigned long long __temp1185v__unsafe_size=0;
  unsigned long long __temp1185v__unsafe_align=0;
  char __temp1186v____temp511v____temp436v__=0;
  char* __temp1187v__buf__unsafe_ptr=0;
  unsigned long long __temp1187v__buf__unsafe_size=0;
  unsigned long long __temp1187v__buf__unsafe_align=0;
  unsigned long long __temp1187v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  unsigned long long buf__buf__unsafe_size=0;
  unsigned long long buf__buf__unsafe_align=0;
  unsigned long long buf__pos=0;
  char* __temp1189v__unsafe_ptr=0;
  unsigned long long __temp1189v__dat__pos=0;
  unsigned long long __temp1189v__dat__length=0;
  char __temp1189v__dat__first=0;
  char* __temp1190v__unsafe_ptr=0;
  unsigned long long __temp1190v__dat__pos=0;
  unsigned long long __temp1190v__dat__length=0;
  char __temp1190v__dat__first=0;
  char* s__unsafe_ptr=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1183v=4;
  KB__temp410v(__temp1183v,&__temp1184v__);
  __temp_errcode=alloc__temp505v(__temp1184v__,&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp599v(&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align,&__temp1187v__buf__unsafe_ptr,&__temp1187v__buf__unsafe_size,&__temp1187v__buf__unsafe_align,&__temp1187v__pos);
  buf__buf__unsafe_ptr=__temp1187v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1187v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1187v__buf__unsafe_align;
  buf__pos=__temp1187v__pos;
  __temp_errcode=str__temp562v(__temp1188v,&__temp1189v__unsafe_ptr,&__temp1189v__dat__pos,&__temp1189v__dat__length,&__temp1189v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp636v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1189v__unsafe_ptr,__temp1189v__dat__pos,__temp1189v__dat__length,__temp1189v__dat__first,&__temp1190v__unsafe_ptr,&__temp1190v__dat__pos,&__temp1190v__dat__length,&__temp1190v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1190v__unsafe_ptr;
  s__dat__pos=__temp1190v__dat__pos;
  s__dat__length=__temp1190v__dat__length;
  s__dat__first=__temp1190v__dat__first;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(s__unsafe_ptr,&__temp1186v____temp511v____temp436v__);
  if(__temp1186v____temp511v____temp436v__){
  __temp1185v__unsafe_size=0;
  __temp1185v__unsafe_size=__temp1185v__unsafe_size;
  free__temp428v(&s__unsafe_ptr);
  }
  __temp_return:
  *__temp1260v=s__unsafe_ptr;
  *__temp1261v=s__dat__pos;
  *__temp1262v=s__dat__length;
  *__temp1263v=s__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp678v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp679v=0;
  const char* endl=0;
  endl=__temp352v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1191v() {
  char* __temp1192v__unsafe_ptr=0;
  unsigned long long __temp1192v__dat__pos=0;
  unsigned long long __temp1192v__dat__length=0;
  char __temp1192v__dat__first=0;
  char __temp1193v____temp1186v____temp511v____temp436v__=0;
  unsigned long long __temp1193v____temp1185v__unsafe_size=0;
  char* s__unsafe_ptr=0;
  unsigned long long s__dat__pos=0;
  unsigned long long s__dat__length=0;
  char s__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1182v(&__temp1192v__unsafe_ptr,&__temp1192v__dat__pos,&__temp1192v__dat__length,&__temp1192v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__unsafe_ptr=__temp1192v__unsafe_ptr;
  s__dat__pos=__temp1192v__dat__pos;
  s__dat__length=__temp1192v__dat__length;
  s__dat__first=__temp1192v__dat__first;
  print__temp678v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  
  __temp_failure:exists__temp398v(__temp1192v__unsafe_ptr,&__temp1193v____temp1186v____temp511v____temp436v__);
  if(__temp1193v____temp1186v____temp511v____temp436v__){
  __temp1193v____temp1185v__unsafe_size=0;
  __temp1193v____temp1185v__unsafe_size=__temp1193v____temp1185v__unsafe_size;
  free__temp428v(&__temp1192v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1191v();return 0;}