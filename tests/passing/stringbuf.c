#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
const char* const __temp1216v="mario";
const char* const __temp1191v="name      ";
const char* const __temp1194v="surnname  ";
const char* const __temp761v="";
const char* const __temp1214v="it's a me";
const char* const __temp1189v="-------------------";
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
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1199v(char** __temp1239v, uint64_t* __temp1240v, uint64_t* __temp1241v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=50;
  *__temp1239v=unsafe_ptr;
  *__temp1240v=unsafe_size;
  *__temp1241v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1242v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1243v) {
  char* allocated=*__temp1243v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1243v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1244v) {
  int value=0;
  *__temp1244v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1245v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1245v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1246v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1247v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1248v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1249v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1250v) {
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

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1251v, uint64_t* __temp1252v, uint64_t* __temp1253v, uint64_t size, char** __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1251v;
  uint64_t buffer__unsafe_size=*__temp1252v;
  uint64_t buffer__unsafe_align=*__temp1253v;
  int __temp456v=0;
  char __temp457v__=0;
  uint64_t __temp458v=0;
  char __temp460v__=0;
  uint64_t __temp461v=0;
  char __temp462v__=0;
  uint64_t __temp463v=0;
  uint64_t __temp464v__=0;
  uint64_t __temp466v=0;
  char __temp467v__=0;
  uint64_t __temp468v__=0;
  uint64_t bytes=0;
  char* __temp469v__=0;
  uint64_t __temp470v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp460v__);
  if(__temp460v__){
  __temp461v=0;
  neq__temp305v(size,__temp461v,&__temp462v__);
  if(__temp462v__){
  __temp463v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp464v__);
  zero__temp432v(buffer__unsafe_ptr,__temp463v,__temp464v__);
  }
  goto __temp_return;
  }
  __temp466v=0;
  neq__temp305v(buffer__unsafe_size,__temp466v,&__temp467v__);
  if(__temp467v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp468v__);
  bytes=__temp468v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp469v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp469v__;
  __temp470v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp470v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp457v__);
  if(__temp457v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1251v=buffer__unsafe_ptr;
  *__temp1252v=buffer__unsafe_size;
  *__temp1253v=buffer__unsafe_align;
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1257v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1257v=__temp415v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1258v, uint64_t* __temp1259v, uint64_t* __temp1260v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1258v=unsafe_ptr;
  *__temp1259v=unsafe_size;
  *__temp1260v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v) {
  char* __temp511v__unsafe_ptr=0;
  uint64_t __temp511v__unsafe_size=0;
  uint64_t __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  uint64_t __temp512v__unsafe_size=0;
  uint64_t __temp512v__unsafe_align=0;
  char* __temp513v__unsafe_ptr=0;
  uint64_t __temp513v__unsafe_size=0;
  uint64_t __temp513v__unsafe_align=0;
  char __temp514v____temp457v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align);
  __temp512v__unsafe_ptr=__temp511v__unsafe_ptr;
  __temp512v__unsafe_size=__temp511v__unsafe_size;
  __temp512v__unsafe_align=__temp511v__unsafe_align;
  __temp_errcode=alloc__temp455v(&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align,size,&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp513v__unsafe_ptr,&__temp514v____temp457v__);
  if(__temp514v____temp457v__){
  __temp513v__unsafe_size=0;
  __temp513v__unsafe_size=__temp513v__unsafe_size;
  free__temp431v(&__temp513v__unsafe_ptr);
  }
  __temp_return:
  *__temp1261v=__temp513v__unsafe_ptr;
  *__temp1262v=__temp513v__unsafe_size;
  *__temp1263v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp618v(char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v, char** __temp1267v, uint64_t* __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v) {
  char* buf__unsafe_ptr=*__temp1264v;
  uint64_t buf__unsafe_size=*__temp1265v;
  uint64_t buf__unsafe_align=*__temp1266v;
  uint64_t __temp619v=0;
  uint64_t __temp620v=0;
  uint64_t pos=0;
  __temp619v=0;
  __temp620v=__temp619v;
  pos=__temp620v;
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

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1271v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1272v) {
  *__temp1272v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1273v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1273v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v, uint64_t i, char** __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  uint64_t buffer__unsafe_size=*__temp1275v;
  uint64_t buffer__unsafe_align=*__temp1276v;
  char __temp500v__=0;
  uint64_t __temp501v__=0;
  char* __temp502v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp500v__);
  if(__temp500v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp501v__);
  add__temp433v(buffer__unsafe_ptr,__temp501v__,&__temp502v__);
  unsafe_ptr=__temp502v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1278v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1278v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v, char* __temp1282v) {
  goto __temp_return;
  __temp_return:
  *__temp1279v=unsafe_ptr;
  *__temp1280v=dat__pos;
  *__temp1281v=dat__length;
  *__temp1282v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v, char* __temp1286v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1283v=__temp550v__unsafe_ptr;
  *__temp1284v=__temp550v__dat__pos;
  *__temp1285v=__temp550v__dat__length;
  *__temp1286v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v, char* __temp1290v) {
  uint64_t __temp576v=0;
  char __temp577v__=0;
  char* __temp578v__=0;
  char __temp579v__value=0;
  char first=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp576v=0;
  neq__temp305v(length,__temp576v,&__temp577v__);
  if(__temp577v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp578v__){
  goto __temp_failure;
  }
  memcpy(&__temp579v__value,__temp578v__,1);
  first=__temp579v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1287v=__temp580v__unsafe_ptr;
  *__temp1288v=__temp580v__dat__pos;
  *__temp1289v=__temp580v__dat__length;
  *__temp1290v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v, char* __temp1294v) {
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__unsafe_size=0;
  uint64_t __temp582v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp583v=0;
  char* __temp584v__unsafe_ptr=0;
  uint64_t __temp584v__dat__pos=0;
  uint64_t __temp584v__dat__length=0;
  char __temp584v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp582v__unsafe_ptr,&__temp582v__unsafe_size,&__temp582v__unsafe_align);
  buf__unsafe_ptr=__temp582v__unsafe_ptr;
  buf__unsafe_size=__temp582v__unsafe_size;
  buf__unsafe_align=__temp582v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp583v=0;
  __temp_errcode=str__temp575v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp583v,length,&__temp584v__unsafe_ptr,&__temp584v__dat__pos,&__temp584v__dat__length,&__temp584v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1291v=__temp584v__unsafe_ptr;
  *__temp1292v=__temp584v__dat__pos;
  *__temp1293v=__temp584v__dat__length;
  *__temp1294v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1295v) {
  goto __temp_return;
  __temp_return:
  *__temp1295v=s__dat__length;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1296v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1297v) {
  goto __temp_return;
  __temp_return:
  *__temp1297v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1298v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

int copy__temp649v(char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, uint64_t* __temp1302v, const char* _other, char** __temp1303v, uint64_t* __temp1304v, uint64_t* __temp1305v, char* __temp1306v) {
  char* buf__unsafe_ptr=*__temp1299v;
  uint64_t buf__unsafe_size=*__temp1300v;
  uint64_t buf__unsafe_align=*__temp1301v;
  uint64_t pos=*__temp1302v;
  char* __temp650v__unsafe_ptr=0;
  uint64_t __temp650v__dat__pos=0;
  uint64_t __temp650v__dat__length=0;
  char __temp650v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp651v__=0;
  uint64_t __temp652v__=0;
  uint64_t next_pos=0;
  uint64_t __temp653v__=0;
  char __temp654v__=0;
  uint64_t __temp655v=0;
  uint64_t __temp656v__=0;
  uint64_t prev_pos=0;
  char* __temp657v__unsafe_ptr=0;
  uint64_t __temp657v__dat__pos=0;
  uint64_t __temp657v__dat__length=0;
  char __temp657v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp581v(_other,&__temp650v__unsafe_ptr,&__temp650v__dat__pos,&__temp650v__dat__length,&__temp650v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp650v__unsafe_ptr;
  other__dat__pos=__temp650v__dat__pos;
  other__dat__length=__temp650v__dat__length;
  other__dat__first=__temp650v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp651v__);
  add__temp113v(pos,__temp651v__,&__temp652v__);
  next_pos=__temp652v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp653v__);
  gt__temp209v(next_pos,__temp653v__,&__temp654v__);
  if(__temp654v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp655v=0;
  add__temp113v(pos,__temp655v,&__temp656v__);
  prev_pos=__temp656v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp657v__unsafe_ptr,&__temp657v__dat__pos,&__temp657v__dat__length,&__temp657v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1299v=buf__unsafe_ptr;
  *__temp1300v=buf__unsafe_size;
  *__temp1301v=buf__unsafe_align;
  *__temp1302v=pos;
  *__temp1303v=__temp657v__unsafe_ptr;
  *__temp1304v=__temp657v__dat__pos;
  *__temp1305v=__temp657v__dat__length;
  *__temp1306v=__temp657v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1186v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, char* __temp1310v, char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v, char* __temp1314v) {
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

static inline __attribute__((always_inline)) void print__temp351v(const char* value) {
  int __temp352v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp354v(const char* value, const char* endl) {
  int __temp355v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1188v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp351v(__temp1189v);
  print__temp354v(__temp1191v,__temp761v);
  print__temp680v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp354v(__temp1194v,__temp761v);
  print__temp680v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp351v(__temp1189v);
}

static inline __attribute__((always_inline)) int test__temp1198v(char** __temp1315v, uint64_t* __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v, char** __temp1319v, uint64_t* __temp1320v, uint64_t* __temp1321v) {
  char* __temp1201v__unsafe_ptr=0;
  uint64_t __temp1201v__unsafe_size=0;
  uint64_t __temp1201v__unsafe_align=0;
  char* __temp1202v__unsafe_ptr=0;
  uint64_t __temp1202v__unsafe_size=0;
  uint64_t __temp1202v__unsafe_align=0;
  uint64_t __temp1203v=0;
  char* __temp1204v__unsafe_ptr=0;
  uint64_t __temp1204v__unsafe_size=0;
  uint64_t __temp1204v__unsafe_align=0;
  char __temp1205v____temp457v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint64_t people__unsafe_align=0;
  uint64_t __temp1206v=0;
  uint64_t __temp1207v__=0;
  char* __temp1208v__unsafe_ptr=0;
  uint64_t __temp1208v__unsafe_size=0;
  uint64_t __temp1208v__unsafe_align=0;
  char __temp1209v____temp514v____temp457v__=0;
  char* __temp1210v__buf__unsafe_ptr=0;
  uint64_t __temp1210v__buf__unsafe_size=0;
  uint64_t __temp1210v__buf__unsafe_align=0;
  uint64_t __temp1210v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1211v=0;
  char* __temp1212v__=0;
  uint64_t __temp1213v=0;
  char* __temp1215v__unsafe_ptr=0;
  uint64_t __temp1215v__dat__pos=0;
  uint64_t __temp1215v__dat__length=0;
  char __temp1215v__dat__first=0;
  char* __temp1217v__unsafe_ptr=0;
  uint64_t __temp1217v__dat__pos=0;
  uint64_t __temp1217v__dat__length=0;
  char __temp1217v__dat__first=0;
  char* __temp1218v__name__unsafe_ptr=0;
  uint64_t __temp1218v__name__dat__pos=0;
  uint64_t __temp1218v__name__dat__length=0;
  char __temp1218v__name__dat__first=0;
  char* __temp1218v__surname__unsafe_ptr=0;
  uint64_t __temp1218v__surname__dat__pos=0;
  uint64_t __temp1218v__surname__dat__length=0;
  char __temp1218v__surname__dat__first=0;
  uint64_t __temp1219v=0;
  char* __temp1220v__=0;
  char* __temp1221v__name__unsafe_ptr=0;
  uint64_t __temp1221v__name__dat__pos=0;
  uint64_t __temp1221v__name__dat__length=0;
  char __temp1221v__name__dat__first=0;
  char* __temp1221v__surname__unsafe_ptr=0;
  uint64_t __temp1221v__surname__dat__pos=0;
  uint64_t __temp1221v__surname__dat__length=0;
  char __temp1221v__surname__dat__first=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* __temp1227v__unsafe_ptr=0;
  uint64_t __temp1227v__unsafe_size=0;
  uint64_t __temp1227v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint64_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1199v(&__temp1201v__unsafe_ptr,&__temp1201v__unsafe_size,&__temp1201v__unsafe_align);
  __temp1202v__unsafe_ptr=__temp1201v__unsafe_ptr;
  __temp1202v__unsafe_size=__temp1201v__unsafe_size;
  __temp1202v__unsafe_align=__temp1201v__unsafe_align;
  __temp1203v=4;
  __temp_errcode=alloc__temp455v(&__temp1202v__unsafe_ptr,&__temp1202v__unsafe_size,&__temp1202v__unsafe_align,__temp1203v,&__temp1204v__unsafe_ptr,&__temp1204v__unsafe_size,&__temp1204v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1204v__unsafe_ptr;
  people__unsafe_size=__temp1204v__unsafe_size;
  people__unsafe_align=__temp1204v__unsafe_align;
  __temp1206v=4;
  KB__temp413v(__temp1206v,&__temp1207v__);
  __temp_errcode=alloc__temp508v(__temp1207v__,&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp618v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align,&__temp1210v__buf__unsafe_ptr,&__temp1210v__buf__unsafe_size,&__temp1210v__buf__unsafe_align,&__temp1210v__pos);
  buf__buf__unsafe_ptr=__temp1210v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1210v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1210v__buf__unsafe_align;
  buf__pos=__temp1210v__pos;
  __temp1211v=0;
  __temp_errcode=mutget__temp499v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1211v,&__temp1212v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1213v=0;
  __temp_errcode=copy__temp649v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1214v,&__temp1215v__unsafe_ptr,&__temp1215v__dat__pos,&__temp1215v__dat__length,&__temp1215v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp649v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1216v,&__temp1217v__unsafe_ptr,&__temp1217v__dat__pos,&__temp1217v__dat__length,&__temp1217v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1186v(__temp1213v,__temp1215v__unsafe_ptr,__temp1215v__dat__pos,__temp1215v__dat__length,__temp1215v__dat__first,__temp1217v__unsafe_ptr,__temp1217v__dat__pos,__temp1217v__dat__length,__temp1217v__dat__first,&__temp1218v__name__unsafe_ptr,&__temp1218v__name__dat__pos,&__temp1218v__name__dat__length,&__temp1218v__name__dat__first,&__temp1218v__surname__unsafe_ptr,&__temp1218v__surname__dat__pos,&__temp1218v__surname__dat__length,&__temp1218v__surname__dat__first);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__,&__temp1218v__name__unsafe_ptr,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+8,&__temp1218v__name__dat__pos,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+16,&__temp1218v__name__dat__length,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+24,&__temp1218v__name__dat__first,1);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+25,&__temp1218v__surname__unsafe_ptr,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+33,&__temp1218v__surname__dat__pos,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+41,&__temp1218v__surname__dat__length,8);
  if(!__temp1212v__){
  goto __temp_failure;
  }
  memcpy(__temp1212v__+49,&__temp1218v__surname__dat__first,1);
  __temp1219v=0;
  __temp_errcode=get__temp503v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__name__unsafe_ptr,__temp1220v__,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__name__dat__pos,__temp1220v__+8,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__name__dat__length,__temp1220v__+16,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__name__dat__first,__temp1220v__+24,1);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__surname__unsafe_ptr,__temp1220v__+25,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__surname__dat__pos,__temp1220v__+33,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__surname__dat__length,__temp1220v__+41,8);
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__surname__dat__first,__temp1220v__+49,1);
  print__temp1188v(__temp1221v__name__unsafe_ptr,__temp1221v__name__dat__pos,__temp1221v__name__dat__length,__temp1221v__name__dat__first,__temp1221v__surname__unsafe_ptr,__temp1221v__surname__dat__pos,__temp1221v__surname__dat__length,__temp1221v__surname__dat__first);
  __temp1223v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1223v__unsafe_size=people__unsafe_size;
  __temp1223v__unsafe_align=people__unsafe_align;
  __temp1227v__unsafe_ptr=__temp1223v__unsafe_ptr+8;
  __temp1227v__unsafe_size=__temp1223v__unsafe_size;
  __temp1227v__unsafe_align=__temp1223v__unsafe_align;
  dat__unsafe_ptr=__temp1227v__unsafe_ptr;
  dat__unsafe_size=__temp1227v__unsafe_size;
  dat__unsafe_align=__temp1227v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buf__buf__unsafe_ptr,&__temp1209v____temp514v____temp457v__);
  if(__temp1209v____temp514v____temp457v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp431v(&buf__buf__unsafe_ptr);
  }
  exists__temp401v(dat__unsafe_ptr,&__temp1205v____temp457v__);
  if(__temp1205v____temp457v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp431v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1315v=buf__buf__unsafe_ptr;
  *__temp1316v=buf__buf__unsafe_size;
  *__temp1317v=buf__buf__unsafe_align;
  *__temp1318v=buf__pos;
  *__temp1319v=dat__unsafe_ptr;
  *__temp1320v=dat__unsafe_size;
  *__temp1321v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1231v() {
  char* __temp1232v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1232v__buf__buf__unsafe_size=0;
  uint64_t __temp1232v__buf__buf__unsafe_align=0;
  uint64_t __temp1232v__buf__pos=0;
  char* __temp1232v__dat__unsafe_ptr=0;
  uint64_t __temp1232v__dat__unsafe_size=0;
  uint64_t __temp1232v__dat__unsafe_align=0;
  char __temp1233v____temp1205v____temp457v__=0;
  char __temp1233v____temp1209v____temp514v____temp457v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint64_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint64_t t__dat__unsafe_align=0;
  uint64_t __temp1234v=0;
  char* __temp1235v__=0;
  uint64_t __temp1236v__pos=0;
  uint64_t __temp1236v__length=0;
  char __temp1236v__first=0;
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__dat__pos=0;
  uint64_t __temp1237v__dat__length=0;
  char __temp1237v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1198v(&__temp1232v__buf__buf__unsafe_ptr,&__temp1232v__buf__buf__unsafe_size,&__temp1232v__buf__buf__unsafe_align,&__temp1232v__buf__pos,&__temp1232v__dat__unsafe_ptr,&__temp1232v__dat__unsafe_size,&__temp1232v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1232v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1232v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1232v__buf__buf__unsafe_align;
  t__buf__pos=__temp1232v__buf__pos;
  t__dat__unsafe_ptr=__temp1232v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1232v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1232v__dat__unsafe_align;
  __temp1234v=0;
  __temp_errcode=get__temp503v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1234v,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(&__temp1236v__pos,__temp1235v__,8);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(&__temp1236v__length,__temp1235v__+8,8);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(&__temp1236v__first,__temp1235v__+16,1);
  str__temp549v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1236v__pos,__temp1236v__length,__temp1236v__first,&__temp1237v__unsafe_ptr,&__temp1237v__dat__pos,&__temp1237v__dat__length,&__temp1237v__dat__first);
  print__temp680v(__temp1237v__unsafe_ptr,__temp1237v__dat__pos,__temp1237v__dat__length,__temp1237v__dat__first);
  
  __temp_failure:exists__temp401v(__temp1232v__buf__buf__unsafe_ptr,&__temp1233v____temp1209v____temp514v____temp457v__);
  if(__temp1233v____temp1209v____temp514v____temp457v__){
  __temp1232v__buf__buf__unsafe_size=0;
  __temp1232v__buf__buf__unsafe_size=__temp1232v__buf__buf__unsafe_size;
  free__temp431v(&__temp1232v__buf__buf__unsafe_ptr);
  }
  exists__temp401v(__temp1232v__dat__unsafe_ptr,&__temp1233v____temp1205v____temp457v__);
  if(__temp1233v____temp1205v____temp457v__){
  __temp1232v__dat__unsafe_size=0;
  __temp1232v__dat__unsafe_size=__temp1232v__dat__unsafe_size;
  free__temp431v(&__temp1232v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1231v();return 0;}