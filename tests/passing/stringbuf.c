#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1190v="surnname  ";
const char* const __temp1185v="-------------------";
const char* const __temp1187v="name      ";
const char* const __temp1212v="mario";
const char* const __temp350v="\n";
const char* const __temp1210v="it's a me";
const char* const __temp757v="";
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1195v(char** __temp1235v, uint64_t* __temp1236v, uint64_t* __temp1237v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=50;
  *__temp1235v=unsafe_ptr;
  *__temp1236v=unsafe_size;
  *__temp1237v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp398v(char* x, uint8_t* __temp1238v) {
  uint8_t z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1238v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1239v) {
  char* allocated=*__temp1239v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1239v=allocated;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1240v) {
  int value=0;
  *__temp1240v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1241v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1241v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1242v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1242v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1243v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void neq__temp302v(uint64_t x, uint64_t y, uint8_t* __temp1244v) {
  int __temp303v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1245v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1245v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(uint64_t bytes, char** __temp1246v) {
  char* unsafe_ptr=0;
  uint8_t failed=0;
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
  *__temp1246v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1247v, uint64_t* __temp1248v, uint64_t* __temp1249v, uint64_t size, char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v) {
  char* buffer__unsafe_ptr=*__temp1247v;
  uint64_t buffer__unsafe_size=*__temp1248v;
  uint64_t buffer__unsafe_align=*__temp1249v;
  int __temp435v=0;
  uint8_t __temp436v__=0;
  uint64_t __temp437v=0;
  uint8_t __temp439v__=0;
  uint64_t __temp440v=0;
  uint8_t __temp441v__=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  uint64_t __temp445v=0;
  uint8_t __temp446v__=0;
  uint64_t __temp447v__=0;
  uint64_t bytes=0;
  char* __temp448v__=0;
  uint64_t __temp449v=0;
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
  *__temp1247v=buffer__unsafe_ptr;
  *__temp1248v=buffer__unsafe_size;
  *__temp1249v=buffer__unsafe_align;
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp410v(uint64_t x, uint64_t* __temp1253v) {
  uint64_t __temp411v=0;
  uint64_t __temp412v__=0;
  __temp411v=1024;
  mul__temp134v(x,__temp411v,&__temp412v__);
  goto __temp_return;
  __temp_return:
  *__temp1253v=__temp412v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp506v(char** __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1254v=unsafe_ptr;
  *__temp1255v=unsafe_size;
  *__temp1256v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp505v(uint64_t size, char** __temp1257v, uint64_t* __temp1258v, uint64_t* __temp1259v) {
  char* __temp508v__unsafe_ptr=0;
  uint64_t __temp508v__unsafe_size=0;
  uint64_t __temp508v__unsafe_align=0;
  char* __temp509v__unsafe_ptr=0;
  uint64_t __temp509v__unsafe_size=0;
  uint64_t __temp509v__unsafe_align=0;
  char* __temp510v__unsafe_ptr=0;
  uint64_t __temp510v__unsafe_size=0;
  uint64_t __temp510v__unsafe_align=0;
  uint8_t __temp511v____temp436v__=0;
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
  *__temp1257v=__temp510v__unsafe_ptr;
  *__temp1258v=__temp510v__unsafe_size;
  *__temp1259v=__temp510v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp599v(char** __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v, char** __temp1263v, uint64_t* __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v) {
  char* buf__unsafe_ptr=*__temp1260v;
  uint64_t buf__unsafe_size=*__temp1261v;
  uint64_t buf__unsafe_align=*__temp1262v;
  uint64_t __temp600v=0;
  uint64_t __temp601v=0;
  uint64_t pos=0;
  __temp600v=0;
  __temp601v=__temp600v;
  pos=__temp601v;
  goto __temp_return;
  __temp_return:
  *__temp1260v=buf__unsafe_ptr;
  *__temp1261v=buf__unsafe_size;
  *__temp1262v=buf__unsafe_align;
  *__temp1263v=buf__unsafe_ptr;
  *__temp1264v=buf__unsafe_size;
  *__temp1265v=buf__unsafe_align;
  *__temp1266v=pos;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1267v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1268v) {
  *__temp1268v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1269v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1269v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v, uint64_t i, char** __temp1273v) {
  char* buffer__unsafe_ptr=*__temp1270v;
  uint64_t buffer__unsafe_size=*__temp1271v;
  uint64_t buffer__unsafe_align=*__temp1272v;
  uint8_t __temp497v__=0;
  uint64_t __temp498v__=0;
  char* __temp499v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp497v__);
  if(__temp497v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp498v__);
  add__temp430v(buffer__unsafe_ptr,__temp498v__,&__temp499v__);
  unsafe_ptr=__temp499v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1274v) {
  uint8_t __temp501v__=0;
  uint64_t __temp502v__=0;
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
  *__temp1274v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp542v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v, int8_t* __temp1278v) {
  goto __temp_return;
  __temp_return:
  *__temp1275v=unsafe_ptr;
  *__temp1276v=dat__pos;
  *__temp1277v=dat__length;
  *__temp1278v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp546v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, int8_t dat__first, char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v, int8_t* __temp1282v) {
  char* unsafe_ptr=0;
  char* __temp547v__unsafe_ptr=0;
  uint64_t __temp547v__dat__pos=0;
  uint64_t __temp547v__dat__length=0;
  int8_t __temp547v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp542v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp547v__unsafe_ptr,&__temp547v__dat__pos,&__temp547v__dat__length,&__temp547v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp547v__unsafe_ptr;
  *__temp1280v=__temp547v__dat__pos;
  *__temp1281v=__temp547v__dat__length;
  *__temp1282v=__temp547v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp556v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v, int8_t* __temp1286v) {
  uint64_t __temp557v=0;
  uint8_t __temp558v__=0;
  char* __temp559v__=0;
  int8_t __temp560v__value=0;
  int8_t first=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__dat__pos=0;
  uint64_t __temp561v__dat__length=0;
  int8_t __temp561v__dat__first=0;
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
  *__temp1283v=__temp561v__unsafe_ptr;
  *__temp1284v=__temp561v__dat__pos;
  *__temp1285v=__temp561v__dat__length;
  *__temp1286v=__temp561v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp562v(const char* c, char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v, int8_t* __temp1290v) {
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint64_t __temp563v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp564v=0;
  char* __temp565v__unsafe_ptr=0;
  uint64_t __temp565v__dat__pos=0;
  uint64_t __temp565v__dat__length=0;
  int8_t __temp565v__dat__first=0;
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
  *__temp1287v=__temp565v__unsafe_ptr;
  *__temp1288v=__temp565v__dat__pos;
  *__temp1289v=__temp565v__dat__length;
  *__temp1290v=__temp565v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp566v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first, uint64_t* __temp1291v) {
  goto __temp_return;
  __temp_return:
  *__temp1291v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1292v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1293v) {
  goto __temp_return;
  __temp_return:
  *__temp1293v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp206v(uint64_t x, uint64_t y, uint8_t* __temp1294v) {
  int __temp207v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp207v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

int copy__temp645v(char** __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v, uint64_t* __temp1298v, const char* _other, char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, int8_t* __temp1302v) {
  char* buf__unsafe_ptr=*__temp1295v;
  uint64_t buf__unsafe_size=*__temp1296v;
  uint64_t buf__unsafe_align=*__temp1297v;
  uint64_t pos=*__temp1298v;
  char* __temp646v__unsafe_ptr=0;
  uint64_t __temp646v__dat__pos=0;
  uint64_t __temp646v__dat__length=0;
  int8_t __temp646v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  int8_t other__dat__first=0;
  uint64_t __temp647v__=0;
  uint64_t __temp648v__=0;
  uint64_t next_pos=0;
  uint64_t __temp649v__=0;
  uint8_t __temp650v__=0;
  uint64_t __temp651v=0;
  uint64_t __temp652v__=0;
  uint64_t prev_pos=0;
  char* __temp653v__unsafe_ptr=0;
  uint64_t __temp653v__dat__pos=0;
  uint64_t __temp653v__dat__length=0;
  int8_t __temp653v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp562v(_other,&__temp646v__unsafe_ptr,&__temp646v__dat__pos,&__temp646v__dat__length,&__temp646v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp646v__unsafe_ptr;
  other__dat__pos=__temp646v__dat__pos;
  other__dat__length=__temp646v__dat__length;
  other__dat__first=__temp646v__dat__first;
  len__temp566v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp647v__);
  add__temp110v(pos,__temp647v__,&__temp648v__);
  next_pos=__temp648v__;
  len__temp504v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp649v__);
  gt__temp206v(next_pos,__temp649v__,&__temp650v__);
  if(__temp650v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp651v=0;
  add__temp110v(pos,__temp651v,&__temp652v__);
  prev_pos=__temp652v__;
  pos=next_pos;
  str__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp653v__unsafe_ptr,&__temp653v__dat__pos,&__temp653v__dat__length,&__temp653v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1295v=buf__unsafe_ptr;
  *__temp1296v=buf__unsafe_size;
  *__temp1297v=buf__unsafe_align;
  *__temp1298v=pos;
  *__temp1299v=__temp653v__unsafe_ptr;
  *__temp1300v=__temp653v__dat__pos;
  *__temp1301v=__temp653v__dat__length;
  *__temp1302v=__temp653v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1182v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, int8_t name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, int8_t surname__dat__first, char** __temp1303v, uint64_t* __temp1304v, uint64_t* __temp1305v, int8_t* __temp1306v, char** __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, int8_t* __temp1310v) {
  goto __temp_return;
  __temp_return:
  *__temp1303v=name__unsafe_ptr;
  *__temp1304v=name__dat__pos;
  *__temp1305v=name__dat__length;
  *__temp1306v=name__dat__first;
  *__temp1307v=surname__unsafe_ptr;
  *__temp1308v=surname__dat__pos;
  *__temp1309v=surname__dat__length;
  *__temp1310v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value, const char* endl) {
  int __temp352v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp676v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, int8_t s__dat__first) {
  int __temp677v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1184v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, int8_t p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, int8_t p__surname__dat__first) {
  print__temp348v(__temp1185v);
  print__temp351v(__temp1187v,__temp757v);
  print__temp676v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp351v(__temp1190v,__temp757v);
  print__temp676v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp348v(__temp1185v);
}

static inline __attribute__((always_inline)) int test__temp1194v(char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v, uint64_t* __temp1314v, char** __temp1315v, uint64_t* __temp1316v, uint64_t* __temp1317v) {
  char* __temp1197v__unsafe_ptr=0;
  uint64_t __temp1197v__unsafe_size=0;
  uint64_t __temp1197v__unsafe_align=0;
  char* __temp1198v__unsafe_ptr=0;
  uint64_t __temp1198v__unsafe_size=0;
  uint64_t __temp1198v__unsafe_align=0;
  uint64_t __temp1199v=0;
  char* __temp1200v__unsafe_ptr=0;
  uint64_t __temp1200v__unsafe_size=0;
  uint64_t __temp1200v__unsafe_align=0;
  uint8_t __temp1201v____temp436v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint64_t people__unsafe_align=0;
  uint64_t __temp1202v=0;
  uint64_t __temp1203v__=0;
  char* __temp1204v__unsafe_ptr=0;
  uint64_t __temp1204v__unsafe_size=0;
  uint64_t __temp1204v__unsafe_align=0;
  uint8_t __temp1205v____temp511v____temp436v__=0;
  char* __temp1206v__buf__unsafe_ptr=0;
  uint64_t __temp1206v__buf__unsafe_size=0;
  uint64_t __temp1206v__buf__unsafe_align=0;
  uint64_t __temp1206v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1207v=0;
  char* __temp1208v__=0;
  uint64_t __temp1209v=0;
  char* __temp1211v__unsafe_ptr=0;
  uint64_t __temp1211v__dat__pos=0;
  uint64_t __temp1211v__dat__length=0;
  int8_t __temp1211v__dat__first=0;
  char* __temp1213v__unsafe_ptr=0;
  uint64_t __temp1213v__dat__pos=0;
  uint64_t __temp1213v__dat__length=0;
  int8_t __temp1213v__dat__first=0;
  char* __temp1214v__name__unsafe_ptr=0;
  uint64_t __temp1214v__name__dat__pos=0;
  uint64_t __temp1214v__name__dat__length=0;
  int8_t __temp1214v__name__dat__first=0;
  char* __temp1214v__surname__unsafe_ptr=0;
  uint64_t __temp1214v__surname__dat__pos=0;
  uint64_t __temp1214v__surname__dat__length=0;
  int8_t __temp1214v__surname__dat__first=0;
  uint64_t __temp1215v=0;
  char* __temp1216v__=0;
  char* __temp1217v__name__unsafe_ptr=0;
  uint64_t __temp1217v__name__dat__pos=0;
  uint64_t __temp1217v__name__dat__length=0;
  int8_t __temp1217v__name__dat__first=0;
  char* __temp1217v__surname__unsafe_ptr=0;
  uint64_t __temp1217v__surname__dat__pos=0;
  uint64_t __temp1217v__surname__dat__length=0;
  int8_t __temp1217v__surname__dat__first=0;
  char* __temp1219v__unsafe_ptr=0;
  uint64_t __temp1219v__unsafe_size=0;
  uint64_t __temp1219v__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint64_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1195v(&__temp1197v__unsafe_ptr,&__temp1197v__unsafe_size,&__temp1197v__unsafe_align);
  __temp1198v__unsafe_ptr=__temp1197v__unsafe_ptr;
  __temp1198v__unsafe_size=__temp1197v__unsafe_size;
  __temp1198v__unsafe_align=__temp1197v__unsafe_align;
  __temp1199v=4;
  __temp_errcode=alloc__temp434v(&__temp1198v__unsafe_ptr,&__temp1198v__unsafe_size,&__temp1198v__unsafe_align,__temp1199v,&__temp1200v__unsafe_ptr,&__temp1200v__unsafe_size,&__temp1200v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1200v__unsafe_ptr;
  people__unsafe_size=__temp1200v__unsafe_size;
  people__unsafe_align=__temp1200v__unsafe_align;
  __temp1202v=4;
  KB__temp410v(__temp1202v,&__temp1203v__);
  __temp_errcode=alloc__temp505v(__temp1203v__,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp599v(&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align,&__temp1206v__buf__unsafe_ptr,&__temp1206v__buf__unsafe_size,&__temp1206v__buf__unsafe_align,&__temp1206v__pos);
  buf__buf__unsafe_ptr=__temp1206v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1206v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1206v__buf__unsafe_align;
  buf__pos=__temp1206v__pos;
  __temp1207v=0;
  __temp_errcode=mutget__temp496v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1207v,&__temp1208v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1209v=0;
  __temp_errcode=copy__temp645v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1210v,&__temp1211v__unsafe_ptr,&__temp1211v__dat__pos,&__temp1211v__dat__length,&__temp1211v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp645v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1212v,&__temp1213v__unsafe_ptr,&__temp1213v__dat__pos,&__temp1213v__dat__length,&__temp1213v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1182v(__temp1209v,__temp1211v__unsafe_ptr,__temp1211v__dat__pos,__temp1211v__dat__length,__temp1211v__dat__first,__temp1213v__unsafe_ptr,__temp1213v__dat__pos,__temp1213v__dat__length,__temp1213v__dat__first,&__temp1214v__name__unsafe_ptr,&__temp1214v__name__dat__pos,&__temp1214v__name__dat__length,&__temp1214v__name__dat__first,&__temp1214v__surname__unsafe_ptr,&__temp1214v__surname__dat__pos,&__temp1214v__surname__dat__length,&__temp1214v__surname__dat__first);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__,&__temp1214v__name__unsafe_ptr,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+8,&__temp1214v__name__dat__pos,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+16,&__temp1214v__name__dat__length,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+24,&__temp1214v__name__dat__first,1);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+25,&__temp1214v__surname__unsafe_ptr,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+33,&__temp1214v__surname__dat__pos,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+41,&__temp1214v__surname__dat__length,8);
  if(!__temp1208v__){
  goto __temp_failure;
  }
  memcpy(__temp1208v__+49,&__temp1214v__surname__dat__first,1);
  __temp1215v=0;
  __temp_errcode=get__temp500v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1215v,&__temp1216v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__name__unsafe_ptr,__temp1216v__,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__name__dat__pos,__temp1216v__+8,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__name__dat__length,__temp1216v__+16,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__name__dat__first,__temp1216v__+24,1);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__surname__unsafe_ptr,__temp1216v__+25,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__surname__dat__pos,__temp1216v__+33,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__surname__dat__length,__temp1216v__+41,8);
  if(!__temp1216v__){
  goto __temp_failure;
  }
  memcpy(&__temp1217v__surname__dat__first,__temp1216v__+49,1);
  print__temp1184v(__temp1217v__name__unsafe_ptr,__temp1217v__name__dat__pos,__temp1217v__name__dat__length,__temp1217v__name__dat__first,__temp1217v__surname__unsafe_ptr,__temp1217v__surname__dat__pos,__temp1217v__surname__dat__length,__temp1217v__surname__dat__first);
  __temp1219v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1219v__unsafe_size=people__unsafe_size;
  __temp1219v__unsafe_align=people__unsafe_align;
  __temp1223v__unsafe_ptr=__temp1219v__unsafe_ptr+8;
  __temp1223v__unsafe_size=__temp1219v__unsafe_size;
  __temp1223v__unsafe_align=__temp1219v__unsafe_align;
  dat__unsafe_ptr=__temp1223v__unsafe_ptr;
  dat__unsafe_size=__temp1223v__unsafe_size;
  dat__unsafe_align=__temp1223v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp398v(buf__buf__unsafe_ptr,&__temp1205v____temp511v____temp436v__);
  if(__temp1205v____temp511v____temp436v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp428v(&buf__buf__unsafe_ptr);
  }
  exists__temp398v(dat__unsafe_ptr,&__temp1201v____temp436v__);
  if(__temp1201v____temp436v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp428v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1311v=buf__buf__unsafe_ptr;
  *__temp1312v=buf__buf__unsafe_size;
  *__temp1313v=buf__buf__unsafe_align;
  *__temp1314v=buf__pos;
  *__temp1315v=dat__unsafe_ptr;
  *__temp1316v=dat__unsafe_size;
  *__temp1317v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1227v() {
  char* __temp1228v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1228v__buf__buf__unsafe_size=0;
  uint64_t __temp1228v__buf__buf__unsafe_align=0;
  uint64_t __temp1228v__buf__pos=0;
  char* __temp1228v__dat__unsafe_ptr=0;
  uint64_t __temp1228v__dat__unsafe_size=0;
  uint64_t __temp1228v__dat__unsafe_align=0;
  uint8_t __temp1229v____temp1201v____temp436v__=0;
  uint8_t __temp1229v____temp1205v____temp511v____temp436v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint64_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint64_t t__dat__unsafe_align=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  uint64_t __temp1232v__pos=0;
  uint64_t __temp1232v__length=0;
  int8_t __temp1232v__first=0;
  char* __temp1233v__unsafe_ptr=0;
  uint64_t __temp1233v__dat__pos=0;
  uint64_t __temp1233v__dat__length=0;
  int8_t __temp1233v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1194v(&__temp1228v__buf__buf__unsafe_ptr,&__temp1228v__buf__buf__unsafe_size,&__temp1228v__buf__buf__unsafe_align,&__temp1228v__buf__pos,&__temp1228v__dat__unsafe_ptr,&__temp1228v__dat__unsafe_size,&__temp1228v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1228v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1228v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1228v__buf__buf__unsafe_align;
  t__buf__pos=__temp1228v__buf__pos;
  t__dat__unsafe_ptr=__temp1228v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1228v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1228v__dat__unsafe_align;
  __temp1230v=0;
  __temp_errcode=get__temp500v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__pos,__temp1231v__,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__length,__temp1231v__+8,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__first,__temp1231v__+16,1);
  str__temp546v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1232v__pos,__temp1232v__length,__temp1232v__first,&__temp1233v__unsafe_ptr,&__temp1233v__dat__pos,&__temp1233v__dat__length,&__temp1233v__dat__first);
  print__temp676v(__temp1233v__unsafe_ptr,__temp1233v__dat__pos,__temp1233v__dat__length,__temp1233v__dat__first);
  
  __temp_failure:exists__temp398v(__temp1228v__buf__buf__unsafe_ptr,&__temp1229v____temp1205v____temp511v____temp436v__);
  if(__temp1229v____temp1205v____temp511v____temp436v__){
  __temp1228v__buf__buf__unsafe_size=0;
  __temp1228v__buf__buf__unsafe_size=__temp1228v__buf__buf__unsafe_size;
  free__temp428v(&__temp1228v__buf__buf__unsafe_ptr);
  }
  exists__temp398v(__temp1228v__dat__unsafe_ptr,&__temp1229v____temp1201v____temp436v__);
  if(__temp1229v____temp1201v____temp436v__){
  __temp1228v__dat__unsafe_size=0;
  __temp1228v__dat__unsafe_size=__temp1228v__dat__unsafe_size;
  free__temp428v(&__temp1228v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1227v();return 0;}