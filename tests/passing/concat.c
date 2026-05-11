#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1230v="manios";
const char* const __temp436v="free";
const char* const __temp1214v="hi";
const char* const __temp1203v=" ";
const char* const __temp1222v="name";
const char* const __temp1218v="my";
const char* const __temp1226v="is";
static const char* __temp_all_errcodes[27] = {"noerr",
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

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1187v(char** __temp1244v, unsigned long long* __temp1245v, unsigned long long* __temp1246v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=25;
  *__temp1244v=unsafe_ptr;
  *__temp1245v=unsafe_size;
  *__temp1246v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1247v) {
  int value=0;
  *__temp1247v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1248v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1248v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1249v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1250v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1251v) {
  char* allocated=*__temp1251v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1251v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1252v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1253v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1253v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1254v) {
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
  *__temp1254v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v, unsigned long long size, char** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  char* buffer__unsafe_ptr=*__temp1255v;
  unsigned long long buffer__unsafe_size=*__temp1256v;
  unsigned long long buffer__unsafe_align=*__temp1257v;
  int __temp435v=0;
  unsigned long long __temp438v=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  char __temp444v__=0;
  unsigned long long __temp445v=0;
  unsigned long long __temp446v__=0;
  unsigned long long __temp448v=0;
  char __temp449v__=0;
  unsigned long long __temp450v__=0;
  unsigned long long bytes=0;
  char* __temp451v__=0;
  unsigned long long __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp302v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp429v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp302v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:print__temp348v(__temp436v);
  __temp438v=0;
  neq__temp302v(buffer__unsafe_size,__temp438v,&__temp439v__);
  if(__temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp428v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  *__temp1258v=buffer__unsafe_ptr;
  *__temp1259v=buffer__unsafe_size;
  *__temp1260v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1261v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1262v) {
  *__temp1262v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1263v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1263v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, unsigned long long i, char** __temp1267v) {
  char* buffer__unsafe_ptr=*__temp1264v;
  unsigned long long buffer__unsafe_size=*__temp1265v;
  unsigned long long buffer__unsafe_align=*__temp1266v;
  char __temp502v__=0;
  unsigned long long __temp503v__=0;
  char* __temp504v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp502v__);
  if(__temp502v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp503v__);
  add__temp430v(buffer__unsafe_ptr,__temp503v__,&__temp504v__);
  unsafe_ptr=__temp504v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  *__temp1267v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1268v=unsafe_ptr;
  *__temp1269v=unsafe_size;
  *__temp1270v=unsafe_align;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1271v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1271v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1272v, unsigned long long* __temp1273v, unsigned long long* __temp1274v, char* __temp1275v) {
  goto __temp_return;
  __temp_return:
  *__temp1272v=unsafe_ptr;
  *__temp1273v=dat__pos;
  *__temp1274v=dat__length;
  *__temp1275v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v, char* __temp1279v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp552v__unsafe_ptr;
  *__temp1277v=__temp552v__dat__pos;
  *__temp1278v=__temp552v__dat__length;
  *__temp1279v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1280v, unsigned long long* __temp1281v, unsigned long long* __temp1282v, char* __temp1283v) {
  unsigned long long __temp562v=0;
  char __temp563v__=0;
  char* __temp564v__=0;
  char __temp565v__value=0;
  char first=0;
  char* __temp566v__unsafe_ptr=0;
  unsigned long long __temp566v__dat__pos=0;
  unsigned long long __temp566v__dat__length=0;
  char __temp566v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp562v=0;
  neq__temp302v(length,__temp562v,&__temp563v__);
  if(__temp563v__){
  __temp_errcode=get__temp505v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp564v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp564v__){
  goto __temp_failure;
  }
  memcpy(&__temp565v__value,__temp564v__,1);
  first=__temp565v__value;
  }
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp566v__unsafe_ptr,&__temp566v__dat__pos,&__temp566v__dat__length,&__temp566v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1280v=__temp566v__unsafe_ptr;
  *__temp1281v=__temp566v__dat__pos;
  *__temp1282v=__temp566v__dat__length;
  *__temp1283v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1284v, unsigned long long* __temp1285v, unsigned long long* __temp1286v, char* __temp1287v) {
  char* __temp568v__unsafe_ptr=0;
  unsigned long long __temp568v__unsafe_size=0;
  unsigned long long __temp568v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  unsigned long long buf__unsafe_size=0;
  unsigned long long buf__unsafe_align=0;
  unsigned long long length=0;
  unsigned long long __temp569v=0;
  char* __temp570v__unsafe_ptr=0;
  unsigned long long __temp570v__dat__pos=0;
  unsigned long long __temp570v__dat__length=0;
  char __temp570v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_align);
  buf__unsafe_ptr=__temp568v__unsafe_ptr;
  buf__unsafe_size=__temp568v__unsafe_size;
  buf__unsafe_align=__temp568v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp569v=0;
  __temp_errcode=str__temp561v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp569v,length,&__temp570v__unsafe_ptr,&__temp570v__dat__pos,&__temp570v__dat__length,&__temp570v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1284v=__temp570v__unsafe_ptr;
  *__temp1285v=__temp570v__dat__pos;
  *__temp1286v=__temp570v__dat__length;
  *__temp1287v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1288v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1288v=__temp412v__;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1289v, unsigned long long* __temp1290v, unsigned long long* __temp1291v) {
  char* __temp513v__unsafe_ptr=0;
  unsigned long long __temp513v__unsafe_size=0;
  unsigned long long __temp513v__unsafe_align=0;
  char* __temp514v__unsafe_ptr=0;
  unsigned long long __temp514v__unsafe_size=0;
  unsigned long long __temp514v__unsafe_align=0;
  char* __temp515v__unsafe_ptr=0;
  unsigned long long __temp515v__unsafe_size=0;
  unsigned long long __temp515v__unsafe_align=0;
  unsigned long long __temp516v____temp438v=0;
  char __temp516v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  __temp514v__unsafe_ptr=__temp513v__unsafe_ptr;
  __temp514v__unsafe_size=__temp513v__unsafe_size;
  __temp514v__unsafe_align=__temp513v__unsafe_align;
  __temp_errcode=alloc__temp434v(&__temp514v__unsafe_ptr,&__temp514v__unsafe_size,&__temp514v__unsafe_align,size,&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:print__temp348v(__temp436v);
  __temp516v____temp438v=0;
  neq__temp302v(__temp515v__unsafe_size,__temp516v____temp438v,&__temp516v____temp439v__);
  if(__temp516v____temp439v__){
  __temp515v__unsafe_size=0;
  __temp515v__unsafe_size=__temp515v__unsafe_size;
  free__temp428v(&__temp515v__unsafe_ptr);
  }
  __temp_return:
  *__temp1289v=__temp515v__unsafe_ptr;
  *__temp1290v=__temp515v__unsafe_size;
  *__temp1291v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp604v(char** __temp1292v, unsigned long long* __temp1293v, unsigned long long* __temp1294v, char** __temp1295v, unsigned long long* __temp1296v, unsigned long long* __temp1297v, unsigned long long* __temp1298v) {
  char* buf__unsafe_ptr=*__temp1292v;
  unsigned long long buf__unsafe_size=*__temp1293v;
  unsigned long long buf__unsafe_align=*__temp1294v;
  unsigned long long __temp605v=0;
  unsigned long long __temp606v=0;
  unsigned long long pos=0;
  __temp605v=0;
  __temp606v=__temp605v;
  pos=__temp606v;
  goto __temp_return;
  __temp_return:
  *__temp1292v=buf__unsafe_ptr;
  *__temp1293v=buf__unsafe_size;
  *__temp1294v=buf__unsafe_align;
  *__temp1295v=buf__unsafe_ptr;
  *__temp1296v=buf__unsafe_size;
  *__temp1297v=buf__unsafe_align;
  *__temp1298v=pos;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1299v) {
  goto __temp_return;
  __temp_return:
  *__temp1299v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp399v(unsigned long long to, unsigned long long* __temp1300v, unsigned long long* __temp1301v) {
  int __temp400v=0;
  unsigned long long __temp401v=0;
  unsigned long long _from=0;
  unsigned long long __temp402v=0;
  unsigned long long from=0;
  __temp401v=0;
  _from=__temp401v;
  __temp402v=_from;
  from=__temp402v;
  goto __temp_return;
  __temp_return:
  *__temp1300v=from;
  *__temp1301v=to;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1302v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(unsigned long long* __temp1303v, unsigned long long r__to, unsigned long long* __temp1304v) {
  unsigned long long r__from=*__temp1303v;
  char __temp407v__=0;
  unsigned long long ret=0;
  unsigned long long __temp408v=0;
  unsigned long long __temp409v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp407v__);
  if(__temp407v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp408v=1;
  add__temp110v(ret,__temp408v,&__temp409v__);
  r__from=__temp409v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=r__from;
  *__temp1304v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp560v(char* other__unsafe_ptr, unsigned long long other__dat__pos, unsigned long long other__dat__length, char other__dat__first, char** __temp1305v, unsigned long long* __temp1306v, unsigned long long* __temp1307v, char* __temp1308v) {
  goto __temp_return;
  __temp_return:
  *__temp1305v=other__unsafe_ptr;
  *__temp1306v=other__dat__pos;
  *__temp1307v=other__dat__length;
  *__temp1308v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1309v) {
  goto __temp_return;
  __temp_return:
  *__temp1309v=s__dat__length;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1310v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) int copy__temp641v(char** __temp1311v, unsigned long long* __temp1312v, unsigned long long* __temp1313v, unsigned long long* __temp1314v, char* _other__unsafe_ptr, unsigned long long _other__dat__pos, unsigned long long _other__dat__length, char _other__dat__first, char** __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, char* __temp1318v) {
  char* buf__unsafe_ptr=*__temp1311v;
  unsigned long long buf__unsafe_size=*__temp1312v;
  unsigned long long buf__unsafe_align=*__temp1313v;
  unsigned long long pos=*__temp1314v;
  char* __temp642v__unsafe_ptr=0;
  unsigned long long __temp642v__dat__pos=0;
  unsigned long long __temp642v__dat__length=0;
  char __temp642v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp643v__=0;
  unsigned long long __temp644v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp645v__=0;
  char __temp646v__=0;
  unsigned long long __temp647v=0;
  unsigned long long __temp648v__=0;
  unsigned long long prev_pos=0;
  char* __temp649v__unsafe_ptr=0;
  unsigned long long __temp649v__dat__pos=0;
  unsigned long long __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp560v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp642v__unsafe_ptr,&__temp642v__dat__pos,&__temp642v__dat__length,&__temp642v__dat__first);
  other__unsafe_ptr=__temp642v__unsafe_ptr;
  other__dat__pos=__temp642v__dat__pos;
  other__dat__length=__temp642v__dat__length;
  other__dat__first=__temp642v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp643v__);
  add__temp110v(pos,__temp643v__,&__temp644v__);
  next_pos=__temp644v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp645v__);
  gt__temp206v(next_pos,__temp645v__,&__temp646v__);
  if(__temp646v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp647v=0;
  add__temp110v(pos,__temp647v,&__temp648v__);
  prev_pos=__temp648v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=buf__unsafe_ptr;
  *__temp1312v=buf__unsafe_size;
  *__temp1313v=buf__unsafe_align;
  *__temp1314v=pos;
  *__temp1315v=__temp649v__unsafe_ptr;
  *__temp1316v=__temp649v__dat__pos;
  *__temp1317v=__temp649v__dat__length;
  *__temp1318v=__temp649v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp650v(char** __temp1319v, unsigned long long* __temp1320v, unsigned long long* __temp1321v, unsigned long long* __temp1322v, const char* _other, char** __temp1323v, unsigned long long* __temp1324v, unsigned long long* __temp1325v, char* __temp1326v) {
  char* buf__unsafe_ptr=*__temp1319v;
  unsigned long long buf__unsafe_size=*__temp1320v;
  unsigned long long buf__unsafe_align=*__temp1321v;
  unsigned long long pos=*__temp1322v;
  char* __temp651v__unsafe_ptr=0;
  unsigned long long __temp651v__dat__pos=0;
  unsigned long long __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  char* other__unsafe_ptr=0;
  unsigned long long other__dat__pos=0;
  unsigned long long other__dat__length=0;
  char other__dat__first=0;
  unsigned long long __temp652v__=0;
  unsigned long long __temp653v__=0;
  unsigned long long next_pos=0;
  unsigned long long __temp654v__=0;
  char __temp655v__=0;
  unsigned long long __temp656v=0;
  unsigned long long __temp657v__=0;
  unsigned long long prev_pos=0;
  char* __temp658v__unsafe_ptr=0;
  unsigned long long __temp658v__dat__pos=0;
  unsigned long long __temp658v__dat__length=0;
  char __temp658v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp567v(_other,&__temp651v__unsafe_ptr,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp651v__unsafe_ptr;
  other__dat__pos=__temp651v__dat__pos;
  other__dat__length=__temp651v__dat__length;
  other__dat__first=__temp651v__dat__first;
  len__temp571v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp652v__);
  add__temp110v(pos,__temp652v__,&__temp653v__);
  next_pos=__temp653v__;
  len__temp509v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp654v__);
  gt__temp206v(next_pos,__temp654v__,&__temp655v__);
  if(__temp655v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp656v=0;
  add__temp110v(pos,__temp656v,&__temp657v__);
  prev_pos=__temp657v__;
  pos=next_pos;
  str__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp658v__unsafe_ptr,&__temp658v__dat__pos,&__temp658v__dat__length,&__temp658v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1319v=buf__unsafe_ptr;
  *__temp1320v=buf__unsafe_size;
  *__temp1321v=buf__unsafe_align;
  *__temp1322v=pos;
  *__temp1323v=__temp658v__unsafe_ptr;
  *__temp1324v=__temp658v__dat__pos;
  *__temp1325v=__temp658v__dat__length;
  *__temp1326v=__temp658v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1189v(char** __temp1327v, unsigned long long* __temp1328v, unsigned long long* __temp1329v, char** __temp1330v, unsigned long long* __temp1331v, unsigned long long* __temp1332v, char* __temp1333v) {
  char* buff__unsafe_ptr=*__temp1327v;
  unsigned long long buff__unsafe_size=*__temp1328v;
  unsigned long long buff__unsafe_align=*__temp1329v;
  unsigned long long __temp1190v=0;
  unsigned long long __temp1191v__=0;
  char* __temp1192v__unsafe_ptr=0;
  unsigned long long __temp1192v__unsafe_size=0;
  unsigned long long __temp1192v__unsafe_align=0;
  unsigned long long __temp1193v____temp516v____temp438v=0;
  char __temp1193v____temp516v____temp439v__=0;
  char* __temp1194v__unsafe_ptr=0;
  unsigned long long __temp1194v__unsafe_size=0;
  unsigned long long __temp1194v__unsafe_align=0;
  char* __temp1195v__buf__unsafe_ptr=0;
  unsigned long long __temp1195v__buf__unsafe_size=0;
  unsigned long long __temp1195v__buf__unsafe_align=0;
  unsigned long long __temp1195v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  unsigned long long mem__buf__unsafe_size=0;
  unsigned long long mem__buf__unsafe_align=0;
  unsigned long long mem__pos=0;
  unsigned long long __temp1196v__=0;
  unsigned long long __temp1197v__from=0;
  unsigned long long __temp1197v__to=0;
  unsigned long long iter__from=0;
  unsigned long long iter__to=0;
  unsigned long long start=0;
  char __temp1198v=0;
  unsigned long long __temp1199v__=0;
  unsigned long long i=0;
  char* __temp1200v__=0;
  char* __temp1201v____temp552v__unsafe_ptr=0;
  unsigned long long __temp1201v____temp552v__dat__pos=0;
  unsigned long long __temp1201v____temp552v__dat__length=0;
  char __temp1201v____temp552v__dat__first=0;
  char* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__dat__pos=0;
  unsigned long long __temp1202v__dat__length=0;
  char __temp1202v__dat__first=0;
  char* __temp1204v__unsafe_ptr=0;
  unsigned long long __temp1204v__dat__pos=0;
  unsigned long long __temp1204v__dat__length=0;
  char __temp1204v__dat__first=0;
  char* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__dat__pos=0;
  unsigned long long __temp1205v__dat__length=0;
  char __temp1205v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1190v=4;
  KB__temp410v(__temp1190v,&__temp1191v__);
  __temp_errcode=alloc__temp510v(__temp1191v__,&__temp1192v__unsafe_ptr,&__temp1192v__unsafe_size,&__temp1192v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1194v__unsafe_ptr=__temp1192v__unsafe_ptr;
  __temp1194v__unsafe_size=__temp1192v__unsafe_size;
  __temp1194v__unsafe_align=__temp1192v__unsafe_align;
  bufpos__temp604v(&__temp1194v__unsafe_ptr,&__temp1194v__unsafe_size,&__temp1194v__unsafe_align,&__temp1195v__buf__unsafe_ptr,&__temp1195v__buf__unsafe_size,&__temp1195v__buf__unsafe_align,&__temp1195v__pos);
  mem__buf__unsafe_ptr=__temp1195v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1195v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1195v__buf__unsafe_align;
  mem__pos=__temp1195v__pos;
  len__temp509v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1196v__);
  range__temp399v(__temp1196v__,&__temp1197v__from,&__temp1197v__to);
  iter__from=__temp1197v__from;
  iter__to=__temp1197v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp406v(&iter__from,iter__to,&__temp1199v__);
  __temp1198v=__temp_complain;
  i=__temp1199v__;
  __temp1198v=__temp1198v==0;
  if(!__temp1198v){
  break;
  }
  __temp_errcode=get__temp505v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1200v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1200v__){
  goto __temp_failure;
  }
  memcpy(&__temp1201v____temp552v__unsafe_ptr,__temp1200v__,8);
  if(!__temp1200v__){
  goto __temp_failure;
  }
  memcpy(&__temp1201v____temp552v__dat__pos,__temp1200v__+8,8);
  if(!__temp1200v__){
  goto __temp_failure;
  }
  memcpy(&__temp1201v____temp552v__dat__length,__temp1200v__+16,8);
  if(!__temp1200v__){
  goto __temp_failure;
  }
  memcpy(&__temp1201v____temp552v__dat__first,__temp1200v__+24,1);
  __temp_errcode=copy__temp641v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1201v____temp552v__unsafe_ptr,__temp1201v____temp552v__dat__pos,__temp1201v____temp552v__dat__length,__temp1201v____temp552v__dat__first,&__temp1202v__unsafe_ptr,&__temp1202v__dat__pos,&__temp1202v__dat__length,&__temp1202v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp650v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__dat__pos,&__temp1204v__dat__length,&__temp1204v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp561v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1205v__unsafe_ptr,&__temp1205v__dat__pos,&__temp1205v__dat__length,&__temp1205v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:print__temp348v(__temp436v);
  __temp1193v____temp516v____temp438v=0;
  neq__temp302v(__temp1192v__unsafe_size,__temp1193v____temp516v____temp438v,&__temp1193v____temp516v____temp439v__);
  if(__temp1193v____temp516v____temp439v__){
  __temp1192v__unsafe_size=0;
  __temp1192v__unsafe_size=__temp1192v__unsafe_size;
  free__temp428v(&__temp1205v__unsafe_ptr);
  }
  __temp_return:
  *__temp1327v=buff__unsafe_ptr;
  *__temp1328v=buff__unsafe_size;
  *__temp1329v=buff__unsafe_align;
  *__temp1330v=__temp1205v__unsafe_ptr;
  *__temp1331v=__temp1205v__dat__pos;
  *__temp1332v=__temp1205v__dat__length;
  *__temp1333v=__temp1205v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp363v(unsigned long long value, const char* endl) {
  int __temp364v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1206v() {
  char* __temp1207v__unsafe_ptr=0;
  unsigned long long __temp1207v__unsafe_size=0;
  unsigned long long __temp1207v__unsafe_align=0;
  char* __temp1208v__unsafe_ptr=0;
  unsigned long long __temp1208v__unsafe_size=0;
  unsigned long long __temp1208v__unsafe_align=0;
  unsigned long long __temp1209v=0;
  char* __temp1210v__unsafe_ptr=0;
  unsigned long long __temp1210v__unsafe_size=0;
  unsigned long long __temp1210v__unsafe_align=0;
  unsigned long long __temp1211v____temp438v=0;
  char __temp1211v____temp439v__=0;
  char* buff__unsafe_ptr=0;
  unsigned long long buff__unsafe_size=0;
  unsigned long long buff__unsafe_align=0;
  unsigned long long __temp1212v=0;
  char* __temp1213v__=0;
  char* __temp1215v__unsafe_ptr=0;
  unsigned long long __temp1215v__dat__pos=0;
  unsigned long long __temp1215v__dat__length=0;
  char __temp1215v__dat__first=0;
  unsigned long long __temp1216v=0;
  char* __temp1217v__=0;
  char* __temp1219v__unsafe_ptr=0;
  unsigned long long __temp1219v__dat__pos=0;
  unsigned long long __temp1219v__dat__length=0;
  char __temp1219v__dat__first=0;
  unsigned long long __temp1220v=0;
  char* __temp1221v__=0;
  char* __temp1223v__unsafe_ptr=0;
  unsigned long long __temp1223v__dat__pos=0;
  unsigned long long __temp1223v__dat__length=0;
  char __temp1223v__dat__first=0;
  unsigned long long __temp1224v=0;
  char* __temp1225v__=0;
  char* __temp1227v__unsafe_ptr=0;
  unsigned long long __temp1227v__dat__pos=0;
  unsigned long long __temp1227v__dat__length=0;
  char __temp1227v__dat__first=0;
  unsigned long long __temp1228v=0;
  char* __temp1229v__=0;
  char* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__dat__pos=0;
  unsigned long long __temp1231v__dat__length=0;
  char __temp1231v__dat__first=0;
  unsigned long long __temp1232v=0;
  char* __temp1233v__=0;
  char* __temp1234v__unsafe_ptr=0;
  unsigned long long __temp1234v__dat__pos=0;
  unsigned long long __temp1234v__dat__length=0;
  char __temp1234v__dat__first=0;
  unsigned long long __temp1235v____temp1193v____temp516v____temp438v=0;
  unsigned long long __temp1235v____temp1192v__unsafe_size=0;
  char __temp1235v____temp1193v____temp516v____temp439v__=0;
  unsigned long long __temp1236v__=0;
  unsigned long long __temp1237v__from=0;
  unsigned long long __temp1237v__to=0;
  unsigned long long full_iter__from=0;
  unsigned long long full_iter__to=0;
  char __temp1238v=0;
  unsigned long long __temp1239v__=0;
  unsigned long long j=0;
  char* __temp1241v__=0;
  char* __temp1242v____temp552v__unsafe_ptr=0;
  unsigned long long __temp1242v____temp552v__dat__pos=0;
  unsigned long long __temp1242v____temp552v__dat__length=0;
  char __temp1242v____temp552v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1187v(&__temp1207v__unsafe_ptr,&__temp1207v__unsafe_size,&__temp1207v__unsafe_align);
  __temp1208v__unsafe_ptr=__temp1207v__unsafe_ptr;
  __temp1208v__unsafe_size=__temp1207v__unsafe_size;
  __temp1208v__unsafe_align=__temp1207v__unsafe_align;
  __temp1209v=6;
  __temp_errcode=alloc__temp434v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align,__temp1209v,&__temp1210v__unsafe_ptr,&__temp1210v__unsafe_size,&__temp1210v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1210v__unsafe_ptr;
  buff__unsafe_size=__temp1210v__unsafe_size;
  buff__unsafe_align=__temp1210v__unsafe_align;
  __temp1212v=0;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1212v,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp567v(__temp1214v,&__temp1215v__unsafe_ptr,&__temp1215v__dat__pos,&__temp1215v__dat__length,&__temp1215v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__,&__temp1215v__unsafe_ptr,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+8,&__temp1215v__dat__pos,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+16,&__temp1215v__dat__length,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+24,&__temp1215v__dat__first,1);
  __temp1216v=1;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1216v,&__temp1217v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp567v(__temp1218v,&__temp1219v__unsafe_ptr,&__temp1219v__dat__pos,&__temp1219v__dat__length,&__temp1219v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(__temp1217v__,&__temp1219v__unsafe_ptr,8);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(__temp1217v__+8,&__temp1219v__dat__pos,8);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(__temp1217v__+16,&__temp1219v__dat__length,8);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(__temp1217v__+24,&__temp1219v__dat__first,1);
  __temp1220v=2;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1220v,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp567v(__temp1222v,&__temp1223v__unsafe_ptr,&__temp1223v__dat__pos,&__temp1223v__dat__length,&__temp1223v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(__temp1221v__,&__temp1223v__unsafe_ptr,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(__temp1221v__+8,&__temp1223v__dat__pos,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(__temp1221v__+16,&__temp1223v__dat__length,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(__temp1221v__+24,&__temp1223v__dat__first,1);
  __temp1224v=3;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1224v,&__temp1225v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp567v(__temp1226v,&__temp1227v__unsafe_ptr,&__temp1227v__dat__pos,&__temp1227v__dat__length,&__temp1227v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__,&__temp1227v__unsafe_ptr,8);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__+8,&__temp1227v__dat__pos,8);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__+16,&__temp1227v__dat__length,8);
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__+24,&__temp1227v__dat__first,1);
  __temp1228v=4;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1228v,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp567v(__temp1230v,&__temp1231v__unsafe_ptr,&__temp1231v__dat__pos,&__temp1231v__dat__length,&__temp1231v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(__temp1229v__,&__temp1231v__unsafe_ptr,8);
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(__temp1229v__+8,&__temp1231v__dat__pos,8);
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(__temp1229v__+16,&__temp1231v__dat__length,8);
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(__temp1229v__+24,&__temp1231v__dat__first,1);
  __temp1232v=5;
  __temp_errcode=mutget__temp501v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1189v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1234v__unsafe_ptr,&__temp1234v__dat__pos,&__temp1234v__dat__length,&__temp1234v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(__temp1233v__,&__temp1234v__unsafe_ptr,8);
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(__temp1233v__+8,&__temp1234v__dat__pos,8);
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(__temp1233v__+16,&__temp1234v__dat__length,8);
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(__temp1233v__+24,&__temp1234v__dat__first,1);
  len__temp509v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1236v__);
  range__temp399v(__temp1236v__,&__temp1237v__from,&__temp1237v__to);
  full_iter__from=__temp1237v__from;
  full_iter__to=__temp1237v__to;
  while(1){
  __temp_complain=next__temp406v(&full_iter__from,full_iter__to,&__temp1239v__);
  __temp1238v=__temp_complain;
  j=__temp1239v__;
  __temp1238v=__temp1238v==0;
  if(!__temp1238v){
  break;
  }
  print__temp363v(j,__temp1203v);
  __temp_errcode=get__temp505v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v____temp552v__unsafe_ptr,__temp1241v__,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v____temp552v__dat__pos,__temp1241v__+8,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v____temp552v__dat__length,__temp1241v__+16,8);
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(&__temp1242v____temp552v__dat__first,__temp1241v__+24,1);
  print__temp681v(__temp1242v____temp552v__unsafe_ptr,__temp1242v____temp552v__dat__pos,__temp1242v____temp552v__dat__length,__temp1242v____temp552v__dat__first);
  }
  
  __temp_failure:print__temp348v(__temp436v);
  __temp1235v____temp1193v____temp516v____temp438v=0;
  neq__temp302v(__temp1235v____temp1192v__unsafe_size,__temp1235v____temp1193v____temp516v____temp438v,&__temp1235v____temp1193v____temp516v____temp439v__);
  if(__temp1235v____temp1193v____temp516v____temp439v__){
  __temp1235v____temp1192v__unsafe_size=0;
  __temp1235v____temp1192v__unsafe_size=__temp1235v____temp1192v__unsafe_size;
  free__temp428v(&__temp1234v__unsafe_ptr);
  }
  print__temp348v(__temp436v);
  __temp1211v____temp438v=0;
  neq__temp302v(__temp1210v__unsafe_size,__temp1211v____temp438v,&__temp1211v____temp439v__);
  if(__temp1211v____temp439v__){
  __temp1210v__unsafe_size=0;
  __temp1210v__unsafe_size=__temp1210v__unsafe_size;
  free__temp428v(&__temp1210v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1206v();return 0;}