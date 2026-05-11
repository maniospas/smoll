#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp762v="";
const char* const __temp1190v="-------------------";
const char* const __temp437v="free";
const char* const __temp1195v="surnname  ";
const char* const __temp350v="\n";
const char* const __temp1215v="it's a me";
const char* const __temp1192v="name      ";
const char* const __temp1217v="mario";
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1200v(char** __temp1240v, unsigned long long* __temp1241v, unsigned long long* __temp1242v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=50;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1243v) {
  int value=0;
  *__temp1243v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1244v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1244v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1245v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1246v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1247v) {
  char* allocated=*__temp1247v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1247v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1248v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1249v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1250v) {
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
  *__temp1250v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1251v, unsigned long long* __temp1252v, unsigned long long* __temp1253v, unsigned long long size, char** __temp1254v, unsigned long long* __temp1255v, unsigned long long* __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1251v;
  unsigned long long buffer__unsafe_size=*__temp1252v;
  unsigned long long buffer__unsafe_align=*__temp1253v;
  int __temp456v=0;
  unsigned long long __temp458v=0;
  char __temp459v__=0;
  unsigned long long __temp460v=0;
  char __temp462v__=0;
  unsigned long long __temp463v=0;
  char __temp464v__=0;
  unsigned long long __temp465v=0;
  unsigned long long __temp466v__=0;
  unsigned long long __temp468v=0;
  char __temp469v__=0;
  unsigned long long __temp470v__=0;
  unsigned long long bytes=0;
  char* __temp471v__=0;
  unsigned long long __temp472v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp462v__);
  if(__temp462v__){
  __temp463v=0;
  neq__temp302v(size,__temp463v,&__temp464v__);
  if(__temp464v__){
  __temp465v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp466v__);
  zero__temp429v(buffer__unsafe_ptr,__temp465v,__temp466v__);
  }
  goto __temp_return;
  }
  __temp468v=0;
  neq__temp302v(buffer__unsafe_size,__temp468v,&__temp469v__);
  if(__temp469v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp470v__);
  bytes=__temp470v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp471v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp471v__;
  __temp472v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp472v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(unsigned long long x, unsigned long long* __temp1257v) {
  unsigned long long __temp411v=0;
  unsigned long long __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1257v=__temp412v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp511v(char** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=1;
  *__temp1258v=unsafe_ptr;
  *__temp1259v=unsafe_size;
  *__temp1260v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp510v(unsigned long long size, char** __temp1261v, unsigned long long* __temp1262v, unsigned long long* __temp1263v) {
  char* __temp513v__unsafe_ptr=0;
  unsigned long long __temp513v__unsafe_size=0;
  unsigned long long __temp513v__unsafe_align=0;
  char* __temp514v__unsafe_ptr=0;
  unsigned long long __temp514v__unsafe_size=0;
  unsigned long long __temp514v__unsafe_align=0;
  char* __temp515v__unsafe_ptr=0;
  unsigned long long __temp515v__unsafe_size=0;
  unsigned long long __temp515v__unsafe_align=0;
  unsigned long long __temp516v____temp458v=0;
  char __temp516v____temp459v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp511v(&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  __temp514v__unsafe_ptr=__temp513v__unsafe_ptr;
  __temp514v__unsafe_size=__temp513v__unsafe_size;
  __temp514v__unsafe_align=__temp513v__unsafe_align;
  __temp_errcode=alloc__temp455v(&__temp514v__unsafe_ptr,&__temp514v__unsafe_size,&__temp514v__unsafe_align,size,&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1261v=__temp515v__unsafe_ptr;
  *__temp1262v=__temp515v__unsafe_size;
  *__temp1263v=__temp515v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp604v(char** __temp1264v, unsigned long long* __temp1265v, unsigned long long* __temp1266v, char** __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  char* buf__unsafe_ptr=*__temp1264v;
  unsigned long long buf__unsafe_size=*__temp1265v;
  unsigned long long buf__unsafe_align=*__temp1266v;
  unsigned long long __temp605v=0;
  unsigned long long __temp606v=0;
  unsigned long long pos=0;
  __temp605v=0;
  __temp606v=__temp605v;
  pos=__temp606v;
  goto __temp_return;
  __temp_return:
  *__temp1264v=buf__unsafe_ptr;
  *__temp1265v=buf__unsafe_size;
  *__temp1266v=buf__unsafe_align;
  *__temp1267v=buf__unsafe_ptr;
  *__temp1268v=buf__unsafe_size;
  *__temp1269v=buf__unsafe_align;
  *__temp1270v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1271v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1272v) {
  *__temp1272v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1273v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1273v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1274v, unsigned long long* __temp1275v, unsigned long long* __temp1276v, unsigned long long i, char** __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  unsigned long long buffer__unsafe_size=*__temp1275v;
  unsigned long long buffer__unsafe_align=*__temp1276v;
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
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1278v) {
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
  *__temp1278v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1279v, unsigned long long* __temp1280v, unsigned long long* __temp1281v, char* __temp1282v) {
  goto __temp_return;
  __temp_return:
  *__temp1279v=unsafe_ptr;
  *__temp1280v=dat__pos;
  *__temp1281v=dat__length;
  *__temp1282v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp551v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long dat__pos, unsigned long long dat__length, char dat__first, char** __temp1283v, unsigned long long* __temp1284v, unsigned long long* __temp1285v, char* __temp1286v) {
  char* unsafe_ptr=0;
  char* __temp552v__unsafe_ptr=0;
  unsigned long long __temp552v__dat__pos=0;
  unsigned long long __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp547v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1283v=__temp552v__unsafe_ptr;
  *__temp1284v=__temp552v__dat__pos;
  *__temp1285v=__temp552v__dat__length;
  *__temp1286v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp561v(char* buf__unsafe_ptr, unsigned long long buf__unsafe_size, unsigned long long buf__unsafe_align, unsigned long long pos, unsigned long long length, char** __temp1287v, unsigned long long* __temp1288v, unsigned long long* __temp1289v, char* __temp1290v) {
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
  *__temp1287v=__temp566v__unsafe_ptr;
  *__temp1288v=__temp566v__dat__pos;
  *__temp1289v=__temp566v__dat__length;
  *__temp1290v=__temp566v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp567v(const char* c, char** __temp1291v, unsigned long long* __temp1292v, unsigned long long* __temp1293v, char* __temp1294v) {
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
  *__temp1291v=__temp570v__unsafe_ptr;
  *__temp1292v=__temp570v__dat__pos;
  *__temp1293v=__temp570v__dat__length;
  *__temp1294v=__temp570v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp571v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first, unsigned long long* __temp1295v) {
  goto __temp_return;
  __temp_return:
  *__temp1295v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1296v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1297v) {
  goto __temp_return;
  __temp_return:
  *__temp1297v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(unsigned long long x, unsigned long long y, char* __temp1298v) {
  int __temp207v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

int copy__temp650v(char** __temp1299v, unsigned long long* __temp1300v, unsigned long long* __temp1301v, unsigned long long* __temp1302v, const char* _other, char** __temp1303v, unsigned long long* __temp1304v, unsigned long long* __temp1305v, char* __temp1306v) {
  char* buf__unsafe_ptr=*__temp1299v;
  unsigned long long buf__unsafe_size=*__temp1300v;
  unsigned long long buf__unsafe_align=*__temp1301v;
  unsigned long long pos=*__temp1302v;
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
  *__temp1299v=buf__unsafe_ptr;
  *__temp1300v=buf__unsafe_size;
  *__temp1301v=buf__unsafe_align;
  *__temp1302v=pos;
  *__temp1303v=__temp658v__unsafe_ptr;
  *__temp1304v=__temp658v__dat__pos;
  *__temp1305v=__temp658v__dat__length;
  *__temp1306v=__temp658v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1187v(unsigned long long id, char* name__unsafe_ptr, unsigned long long name__dat__pos, unsigned long long name__dat__length, char name__dat__first, char* surname__unsafe_ptr, unsigned long long surname__dat__pos, unsigned long long surname__dat__length, char surname__dat__first, char** __temp1307v, unsigned long long* __temp1308v, unsigned long long* __temp1309v, char* __temp1310v, char** __temp1311v, unsigned long long* __temp1312v, unsigned long long* __temp1313v, char* __temp1314v) {
  goto __temp_return;
  __temp_return:
  *__temp1307v=name__unsafe_ptr;
  *__temp1308v=name__dat__pos;
  *__temp1309v=name__dat__length;
  *__temp1310v=name__dat__first;
  *__temp1311v=surname__unsafe_ptr;
  *__temp1312v=surname__dat__pos;
  *__temp1313v=surname__dat__length;
  *__temp1314v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value, const char* endl) {
  int __temp352v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp681v(char* s__unsafe_ptr, unsigned long long s__dat__pos, unsigned long long s__dat__length, char s__dat__first) {
  int __temp682v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1189v(char* p__name__unsafe_ptr, unsigned long long p__name__dat__pos, unsigned long long p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, unsigned long long p__surname__dat__pos, unsigned long long p__surname__dat__length, char p__surname__dat__first) {
  print__temp348v(__temp1190v);
  print__temp351v(__temp1192v,__temp762v);
  print__temp681v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp351v(__temp1195v,__temp762v);
  print__temp681v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp348v(__temp1190v);
}

static inline __attribute__((always_inline)) int test__temp1199v(char** __temp1315v, unsigned long long* __temp1316v, unsigned long long* __temp1317v, unsigned long long* __temp1318v, char** __temp1319v, unsigned long long* __temp1320v, unsigned long long* __temp1321v) {
  char* __temp1202v__unsafe_ptr=0;
  unsigned long long __temp1202v__unsafe_size=0;
  unsigned long long __temp1202v__unsafe_align=0;
  char* __temp1203v__unsafe_ptr=0;
  unsigned long long __temp1203v__unsafe_size=0;
  unsigned long long __temp1203v__unsafe_align=0;
  unsigned long long __temp1204v=0;
  char* __temp1205v__unsafe_ptr=0;
  unsigned long long __temp1205v__unsafe_size=0;
  unsigned long long __temp1205v__unsafe_align=0;
  unsigned long long __temp1206v____temp458v=0;
  char __temp1206v____temp459v__=0;
  char* people__unsafe_ptr=0;
  unsigned long long people__unsafe_size=0;
  unsigned long long people__unsafe_align=0;
  unsigned long long __temp1207v=0;
  unsigned long long __temp1208v__=0;
  char* __temp1209v__unsafe_ptr=0;
  unsigned long long __temp1209v__unsafe_size=0;
  unsigned long long __temp1209v__unsafe_align=0;
  unsigned long long __temp1210v____temp516v____temp458v=0;
  char __temp1210v____temp516v____temp459v__=0;
  char* __temp1211v__buf__unsafe_ptr=0;
  unsigned long long __temp1211v__buf__unsafe_size=0;
  unsigned long long __temp1211v__buf__unsafe_align=0;
  unsigned long long __temp1211v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  unsigned long long buf__buf__unsafe_size=0;
  unsigned long long buf__buf__unsafe_align=0;
  unsigned long long buf__pos=0;
  unsigned long long __temp1212v=0;
  char* __temp1213v__=0;
  unsigned long long __temp1214v=0;
  char* __temp1216v__unsafe_ptr=0;
  unsigned long long __temp1216v__dat__pos=0;
  unsigned long long __temp1216v__dat__length=0;
  char __temp1216v__dat__first=0;
  char* __temp1218v__unsafe_ptr=0;
  unsigned long long __temp1218v__dat__pos=0;
  unsigned long long __temp1218v__dat__length=0;
  char __temp1218v__dat__first=0;
  char* __temp1219v__name__unsafe_ptr=0;
  unsigned long long __temp1219v__name__dat__pos=0;
  unsigned long long __temp1219v__name__dat__length=0;
  char __temp1219v__name__dat__first=0;
  char* __temp1219v__surname__unsafe_ptr=0;
  unsigned long long __temp1219v__surname__dat__pos=0;
  unsigned long long __temp1219v__surname__dat__length=0;
  char __temp1219v__surname__dat__first=0;
  unsigned long long __temp1220v=0;
  char* __temp1221v__=0;
  char* __temp1222v__name__unsafe_ptr=0;
  unsigned long long __temp1222v__name__dat__pos=0;
  unsigned long long __temp1222v__name__dat__length=0;
  char __temp1222v__name__dat__first=0;
  char* __temp1222v__surname__unsafe_ptr=0;
  unsigned long long __temp1222v__surname__dat__pos=0;
  unsigned long long __temp1222v__surname__dat__length=0;
  char __temp1222v__surname__dat__first=0;
  char* __temp1224v__unsafe_ptr=0;
  unsigned long long __temp1224v__unsafe_size=0;
  unsigned long long __temp1224v__unsafe_align=0;
  char* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  unsigned long long dat__unsafe_size=0;
  unsigned long long dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1200v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align);
  __temp1203v__unsafe_ptr=__temp1202v__unsafe_ptr;
  __temp1203v__unsafe_size=__temp1202v__unsafe_size;
  __temp1203v__unsafe_align=__temp1202v__unsafe_align;
  __temp1204v=4;
  __temp_errcode=alloc__temp455v(&__temp1203v__unsafe_ptr,&__temp1203v__unsafe_size,&__temp1203v__unsafe_align,__temp1204v,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1205v__unsafe_ptr;
  people__unsafe_size=__temp1205v__unsafe_size;
  people__unsafe_align=__temp1205v__unsafe_align;
  __temp1207v=4;
  KB__temp410v(__temp1207v,&__temp1208v__);
  __temp_errcode=alloc__temp510v(__temp1208v__,&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp604v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,&__temp1211v__buf__unsafe_ptr,&__temp1211v__buf__unsafe_size,&__temp1211v__buf__unsafe_align,&__temp1211v__pos);
  buf__buf__unsafe_ptr=__temp1211v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1211v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1211v__buf__unsafe_align;
  buf__pos=__temp1211v__pos;
  __temp1212v=0;
  __temp_errcode=mutget__temp501v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1212v,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1214v=0;
  __temp_errcode=copy__temp650v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1215v,&__temp1216v__unsafe_ptr,&__temp1216v__dat__pos,&__temp1216v__dat__length,&__temp1216v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp650v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1217v,&__temp1218v__unsafe_ptr,&__temp1218v__dat__pos,&__temp1218v__dat__length,&__temp1218v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1187v(__temp1214v,__temp1216v__unsafe_ptr,__temp1216v__dat__pos,__temp1216v__dat__length,__temp1216v__dat__first,__temp1218v__unsafe_ptr,__temp1218v__dat__pos,__temp1218v__dat__length,__temp1218v__dat__first,&__temp1219v__name__unsafe_ptr,&__temp1219v__name__dat__pos,&__temp1219v__name__dat__length,&__temp1219v__name__dat__first,&__temp1219v__surname__unsafe_ptr,&__temp1219v__surname__dat__pos,&__temp1219v__surname__dat__length,&__temp1219v__surname__dat__first);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__,&__temp1219v__name__unsafe_ptr,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+8,&__temp1219v__name__dat__pos,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+16,&__temp1219v__name__dat__length,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+24,&__temp1219v__name__dat__first,1);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+25,&__temp1219v__surname__unsafe_ptr,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+33,&__temp1219v__surname__dat__pos,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+41,&__temp1219v__surname__dat__length,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(__temp1213v__+49,&__temp1219v__surname__dat__first,1);
  __temp1220v=0;
  __temp_errcode=get__temp505v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1220v,&__temp1221v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__name__unsafe_ptr,__temp1221v__,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__name__dat__pos,__temp1221v__+8,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__name__dat__length,__temp1221v__+16,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__name__dat__first,__temp1221v__+24,1);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__surname__unsafe_ptr,__temp1221v__+25,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__surname__dat__pos,__temp1221v__+33,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__surname__dat__length,__temp1221v__+41,8);
  if(!__temp1221v__){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__surname__dat__first,__temp1221v__+49,1);
  print__temp1189v(__temp1222v__name__unsafe_ptr,__temp1222v__name__dat__pos,__temp1222v__name__dat__length,__temp1222v__name__dat__first,__temp1222v__surname__unsafe_ptr,__temp1222v__surname__dat__pos,__temp1222v__surname__dat__length,__temp1222v__surname__dat__first);
  __temp1224v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1224v__unsafe_size=people__unsafe_size;
  __temp1224v__unsafe_align=people__unsafe_align;
  __temp1228v__unsafe_ptr=__temp1224v__unsafe_ptr+8;
  __temp1228v__unsafe_size=__temp1224v__unsafe_size;
  __temp1228v__unsafe_align=__temp1224v__unsafe_align;
  dat__unsafe_ptr=__temp1228v__unsafe_ptr;
  dat__unsafe_size=__temp1228v__unsafe_size;
  dat__unsafe_align=__temp1228v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1315v=buf__buf__unsafe_ptr;
  *__temp1316v=buf__buf__unsafe_size;
  *__temp1317v=buf__buf__unsafe_align;
  *__temp1318v=buf__pos;
  *__temp1319v=dat__unsafe_ptr;
  *__temp1320v=dat__unsafe_size;
  *__temp1321v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1232v() {
  char* __temp1233v__buf__buf__unsafe_ptr=0;
  unsigned long long __temp1233v__buf__buf__unsafe_size=0;
  unsigned long long __temp1233v__buf__buf__unsafe_align=0;
  unsigned long long __temp1233v__buf__pos=0;
  char* __temp1233v__dat__unsafe_ptr=0;
  unsigned long long __temp1233v__dat__unsafe_size=0;
  unsigned long long __temp1233v__dat__unsafe_align=0;
  unsigned long long __temp1234v____temp1206v____temp458v=0;
  char __temp1234v____temp1206v____temp459v__=0;
  unsigned long long __temp1234v____temp1210v____temp516v____temp458v=0;
  char __temp1234v____temp1210v____temp516v____temp459v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  unsigned long long t__buf__buf__unsafe_size=0;
  unsigned long long t__buf__buf__unsafe_align=0;
  unsigned long long t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  unsigned long long t__dat__unsafe_size=0;
  unsigned long long t__dat__unsafe_align=0;
  unsigned long long __temp1235v=0;
  char* __temp1236v__=0;
  unsigned long long __temp1237v__pos=0;
  unsigned long long __temp1237v__length=0;
  char __temp1237v__first=0;
  char* __temp1238v__unsafe_ptr=0;
  unsigned long long __temp1238v__dat__pos=0;
  unsigned long long __temp1238v__dat__length=0;
  char __temp1238v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1199v(&__temp1233v__buf__buf__unsafe_ptr,&__temp1233v__buf__buf__unsafe_size,&__temp1233v__buf__buf__unsafe_align,&__temp1233v__buf__pos,&__temp1233v__dat__unsafe_ptr,&__temp1233v__dat__unsafe_size,&__temp1233v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1233v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1233v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1233v__buf__buf__unsafe_align;
  t__buf__pos=__temp1233v__buf__pos;
  t__dat__unsafe_ptr=__temp1233v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1233v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1233v__dat__unsafe_align;
  __temp1235v=0;
  __temp_errcode=get__temp505v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1235v,&__temp1236v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1236v__){
  goto __temp_failure;
  }
  memcpy(&__temp1237v__pos,__temp1236v__,8);
  if(!__temp1236v__){
  goto __temp_failure;
  }
  memcpy(&__temp1237v__length,__temp1236v__+8,8);
  if(!__temp1236v__){
  goto __temp_failure;
  }
  memcpy(&__temp1237v__first,__temp1236v__+16,1);
  str__temp551v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1237v__pos,__temp1237v__length,__temp1237v__first,&__temp1238v__unsafe_ptr,&__temp1238v__dat__pos,&__temp1238v__dat__length,&__temp1238v__dat__first);
  print__temp681v(__temp1238v__unsafe_ptr,__temp1238v__dat__pos,__temp1238v__dat__length,__temp1238v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1232v();return 0;}