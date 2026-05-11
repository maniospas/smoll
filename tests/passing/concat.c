#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1236v="my";
const char* const __temp1244v="is";
const char* const __temp1221v=" ";
const char* const __temp1240v="name";
const char* const __temp1248v="manios";
const char* const __temp1232v="hi";
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"'nat' value too large to pack in 'nat16'",
"'nat' value too large to pack in 'nat32'"
};

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1204v(char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=12;
  *__temp1264v=unsafe_ptr;
  *__temp1265v=unsafe_size;
  *__temp1266v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1267v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1268v) {
  char* allocated=*__temp1268v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1268v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1269v) {
  int value=0;
  *__temp1269v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1270v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1270v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1271v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1271v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1272v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1273v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1274v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1275v) {
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
  *__temp1275v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp437v(char** __temp1276v, uint64_t* __temp1277v, uint64_t* __temp1278v, uint64_t size, char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v) {
  char* buffer__unsafe_ptr=*__temp1276v;
  uint64_t buffer__unsafe_size=*__temp1277v;
  uint64_t buffer__unsafe_align=*__temp1278v;
  int __temp438v=0;
  char __temp439v__=0;
  uint64_t __temp440v=0;
  char __temp442v__=0;
  uint64_t __temp443v=0;
  char __temp444v__=0;
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  uint64_t __temp448v=0;
  char __temp449v__=0;
  uint64_t __temp450v__=0;
  uint64_t bytes=0;
  char* __temp451v__=0;
  uint64_t __temp452v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  neq__temp305v(size,__temp443v,&__temp444v__);
  if(__temp444v__){
  __temp445v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp446v__);
  zero__temp432v(buffer__unsafe_ptr,__temp445v,__temp446v__);
  }
  goto __temp_return;
  }
  __temp448v=0;
  neq__temp305v(buffer__unsafe_size,__temp448v,&__temp449v__);
  if(__temp449v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp450v__);
  bytes=__temp450v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp428v(bytes,&__temp451v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp451v__;
  __temp452v=0;
  zero__temp432v(buffer__unsafe_ptr,__temp452v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp401v(buffer__unsafe_ptr,&__temp439v__);
  if(__temp439v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp431v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1276v=buffer__unsafe_ptr;
  *__temp1277v=buffer__unsafe_size;
  *__temp1278v=buffer__unsafe_align;
  *__temp1279v=buffer__unsafe_ptr;
  *__temp1280v=buffer__unsafe_size;
  *__temp1281v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1282v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1283v) {
  *__temp1283v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1284v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1284v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v, uint64_t i, char** __temp1288v) {
  char* buffer__unsafe_ptr=*__temp1285v;
  uint64_t buffer__unsafe_size=*__temp1286v;
  uint64_t buffer__unsafe_align=*__temp1287v;
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
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1289v=unsafe_ptr;
  *__temp1290v=unsafe_size;
  *__temp1291v=unsafe_align;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1292v) {
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
  *__temp1292v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v, char* __temp1296v) {
  goto __temp_return;
  __temp_return:
  *__temp1293v=unsafe_ptr;
  *__temp1294v=dat__pos;
  *__temp1295v=dat__length;
  *__temp1296v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, char* __temp1300v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1297v=__temp550v__unsafe_ptr;
  *__temp1298v=__temp550v__dat__pos;
  *__temp1299v=__temp550v__dat__length;
  *__temp1300v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp559v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v, char* __temp1304v) {
  uint64_t __temp560v=0;
  char __temp561v__=0;
  char* __temp562v__=0;
  char __temp563v__value=0;
  char first=0;
  char* __temp564v__unsafe_ptr=0;
  uint64_t __temp564v__dat__pos=0;
  uint64_t __temp564v__dat__length=0;
  char __temp564v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp560v=0;
  neq__temp305v(length,__temp560v,&__temp561v__);
  if(__temp561v__){
  __temp_errcode=get__temp503v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp562v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp562v__){
  goto __temp_failure;
  }
  memcpy(&__temp563v__value,__temp562v__,1);
  first=__temp563v__value;
  }
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp564v__unsafe_ptr,&__temp564v__dat__pos,&__temp564v__dat__length,&__temp564v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1301v=__temp564v__unsafe_ptr;
  *__temp1302v=__temp564v__dat__pos;
  *__temp1303v=__temp564v__dat__length;
  *__temp1304v=__temp564v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp565v(const char* c, char** __temp1305v, uint64_t* __temp1306v, uint64_t* __temp1307v, char* __temp1308v) {
  char* __temp566v__unsafe_ptr=0;
  uint64_t __temp566v__unsafe_size=0;
  uint64_t __temp566v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp567v=0;
  char* __temp568v__unsafe_ptr=0;
  uint64_t __temp568v__dat__pos=0;
  uint64_t __temp568v__dat__length=0;
  char __temp568v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp566v__unsafe_ptr,&__temp566v__unsafe_size,&__temp566v__unsafe_align);
  buf__unsafe_ptr=__temp566v__unsafe_ptr;
  buf__unsafe_size=__temp566v__unsafe_size;
  buf__unsafe_align=__temp566v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp567v=0;
  __temp_errcode=str__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp567v,length,&__temp568v__unsafe_ptr,&__temp568v__dat__pos,&__temp568v__dat__length,&__temp568v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1305v=__temp568v__unsafe_ptr;
  *__temp1306v=__temp568v__dat__pos;
  *__temp1307v=__temp568v__dat__length;
  *__temp1308v=__temp568v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1309v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1185v(uint64_t x, uint16_t* __temp1310v) {
  uint64_t __temp1186v=0;
  char __temp1187v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1186v=65535;
  gt__temp209v(x,__temp1186v,&__temp1187v__);
  if(__temp1187v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1310v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1193v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1311v, uint16_t* __temp1312v, uint16_t* __temp1313v) {
  char* unsafe_ptr=0;
  uint16_t __temp1194v__=0;
  uint16_t pos=0;
  uint16_t __temp1195v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=nat16__temp1185v(s__dat__pos,&__temp1194v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1194v__;
  __temp_errcode=nat16__temp1185v(s__dat__length,&__temp1195v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1195v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=unsafe_ptr;
  *__temp1312v=pos;
  *__temp1313v=length;
  
  return __temp_errcode;
}

int str__temp1197v(const char* s, char** __temp1314v, uint16_t* __temp1315v, uint16_t* __temp1316v) {
  char* __temp1198v__unsafe_ptr=0;
  uint64_t __temp1198v__dat__pos=0;
  uint64_t __temp1198v__dat__length=0;
  char __temp1198v__dat__first=0;
  char* __temp1199v__unsafe_ptr=0;
  uint16_t __temp1199v__pos=0;
  uint16_t __temp1199v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp565v(s,&__temp1198v__unsafe_ptr,&__temp1198v__dat__pos,&__temp1198v__dat__length,&__temp1198v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1193v(__temp1198v__unsafe_ptr,__temp1198v__dat__pos,__temp1198v__dat__length,__temp1198v__dat__first,&__temp1199v__unsafe_ptr,&__temp1199v__pos,&__temp1199v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1314v=__temp1199v__unsafe_ptr;
  *__temp1315v=__temp1199v__pos;
  *__temp1316v=__temp1199v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1317v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1317v=__temp415v__;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1318v, uint64_t* __temp1319v, uint64_t* __temp1320v) {
  char* __temp511v__unsafe_ptr=0;
  uint64_t __temp511v__unsafe_size=0;
  uint64_t __temp511v__unsafe_align=0;
  char* __temp512v__unsafe_ptr=0;
  uint64_t __temp512v__unsafe_size=0;
  uint64_t __temp512v__unsafe_align=0;
  char* __temp513v__unsafe_ptr=0;
  uint64_t __temp513v__unsafe_size=0;
  uint64_t __temp513v__unsafe_align=0;
  char __temp514v____temp439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp509v(&__temp511v__unsafe_ptr,&__temp511v__unsafe_size,&__temp511v__unsafe_align);
  __temp512v__unsafe_ptr=__temp511v__unsafe_ptr;
  __temp512v__unsafe_size=__temp511v__unsafe_size;
  __temp512v__unsafe_align=__temp511v__unsafe_align;
  __temp_errcode=alloc__temp437v(&__temp512v__unsafe_ptr,&__temp512v__unsafe_size,&__temp512v__unsafe_align,size,&__temp513v__unsafe_ptr,&__temp513v__unsafe_size,&__temp513v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp513v__unsafe_ptr,&__temp514v____temp439v__);
  if(__temp514v____temp439v__){
  __temp513v__unsafe_size=0;
  __temp513v__unsafe_size=__temp513v__unsafe_size;
  free__temp431v(&__temp513v__unsafe_ptr);
  }
  __temp_return:
  *__temp1318v=__temp513v__unsafe_ptr;
  *__temp1319v=__temp513v__unsafe_size;
  *__temp1320v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp602v(char** __temp1321v, uint64_t* __temp1322v, uint64_t* __temp1323v, char** __temp1324v, uint64_t* __temp1325v, uint64_t* __temp1326v, uint64_t* __temp1327v) {
  char* buf__unsafe_ptr=*__temp1321v;
  uint64_t buf__unsafe_size=*__temp1322v;
  uint64_t buf__unsafe_align=*__temp1323v;
  uint64_t __temp603v=0;
  uint64_t __temp604v=0;
  uint64_t pos=0;
  __temp603v=0;
  __temp604v=__temp603v;
  pos=__temp604v;
  goto __temp_return;
  __temp_return:
  *__temp1321v=buf__unsafe_ptr;
  *__temp1322v=buf__unsafe_size;
  *__temp1323v=buf__unsafe_align;
  *__temp1324v=buf__unsafe_ptr;
  *__temp1325v=buf__unsafe_size;
  *__temp1326v=buf__unsafe_align;
  *__temp1327v=pos;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1328v) {
  goto __temp_return;
  __temp_return:
  *__temp1328v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp402v(uint64_t to, uint64_t* __temp1329v, uint64_t* __temp1330v) {
  int __temp403v=0;
  uint64_t __temp404v=0;
  uint64_t _from=0;
  uint64_t __temp405v=0;
  uint64_t from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  goto __temp_return;
  __temp_return:
  *__temp1329v=from;
  *__temp1330v=to;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1331v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1331v=z;
}

static inline __attribute__((always_inline)) int next__temp409v(uint64_t* __temp1332v, uint64_t r__to, uint64_t* __temp1333v) {
  uint64_t r__from=*__temp1332v;
  char __temp410v__=0;
  uint64_t ret=0;
  uint64_t __temp411v=0;
  uint64_t __temp412v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(r__from,r__to,&__temp410v__);
  if(__temp410v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp411v=1;
  add__temp113v(ret,__temp411v,&__temp412v__);
  r__from=__temp412v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1332v=r__from;
  *__temp1333v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp1192v(uint16_t x, uint64_t* __temp1334v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1334v=value;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1335v, uint64_t* __temp1336v, uint64_t* __temp1337v, char* __temp1338v) {
  char* first_pos=0;
  char first=0;
  char* __temp548v__unsafe_ptr=0;
  uint64_t __temp548v__dat__pos=0;
  uint64_t __temp548v__dat__length=0;
  char __temp548v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp545v(unsafe_ptr,pos,length,first,&__temp548v__unsafe_ptr,&__temp548v__dat__pos,&__temp548v__dat__length,&__temp548v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1335v=__temp548v__unsafe_ptr;
  *__temp1336v=__temp548v__dat__pos;
  *__temp1337v=__temp548v__dat__length;
  *__temp1338v=__temp548v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1200v(char* m__unsafe_ptr, uint16_t m__pos, uint16_t m__length, char** __temp1339v, uint64_t* __temp1340v, uint64_t* __temp1341v, char* __temp1342v) {
  uint64_t __temp1201v__=0;
  uint64_t __temp1202v__=0;
  char* __temp1203v__unsafe_ptr=0;
  uint64_t __temp1203v__dat__pos=0;
  uint64_t __temp1203v__dat__length=0;
  char __temp1203v__dat__first=0;
  nat__temp1192v(m__pos,&__temp1201v__);
  nat__temp1192v(m__length,&__temp1202v__);
  str__temp547v(m__unsafe_ptr,__temp1201v__,__temp1202v__,&__temp1203v__unsafe_ptr,&__temp1203v__dat__pos,&__temp1203v__dat__length,&__temp1203v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1339v=__temp1203v__unsafe_ptr;
  *__temp1340v=__temp1203v__dat__pos;
  *__temp1341v=__temp1203v__dat__length;
  *__temp1342v=__temp1203v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp558v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1343v, uint64_t* __temp1344v, uint64_t* __temp1345v, char* __temp1346v) {
  goto __temp_return;
  __temp_return:
  *__temp1343v=other__unsafe_ptr;
  *__temp1344v=other__dat__pos;
  *__temp1345v=other__dat__length;
  *__temp1346v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp569v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1347v) {
  goto __temp_return;
  __temp_return:
  *__temp1347v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp639v(char** __temp1348v, uint64_t* __temp1349v, uint64_t* __temp1350v, uint64_t* __temp1351v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1352v, uint64_t* __temp1353v, uint64_t* __temp1354v, char* __temp1355v) {
  char* buf__unsafe_ptr=*__temp1348v;
  uint64_t buf__unsafe_size=*__temp1349v;
  uint64_t buf__unsafe_align=*__temp1350v;
  uint64_t pos=*__temp1351v;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__dat__pos=0;
  uint64_t __temp640v__dat__length=0;
  char __temp640v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp641v__=0;
  uint64_t __temp642v__=0;
  uint64_t next_pos=0;
  uint64_t __temp643v__=0;
  char __temp644v__=0;
  uint64_t __temp645v=0;
  uint64_t __temp646v__=0;
  uint64_t prev_pos=0;
  char* __temp647v__unsafe_ptr=0;
  uint64_t __temp647v__dat__pos=0;
  uint64_t __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp558v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp640v__unsafe_ptr,&__temp640v__dat__pos,&__temp640v__dat__length,&__temp640v__dat__first);
  other__unsafe_ptr=__temp640v__unsafe_ptr;
  other__dat__pos=__temp640v__dat__pos;
  other__dat__length=__temp640v__dat__length;
  other__dat__first=__temp640v__dat__first;
  len__temp569v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp641v__);
  add__temp113v(pos,__temp641v__,&__temp642v__);
  next_pos=__temp642v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp643v__);
  gt__temp209v(next_pos,__temp643v__,&__temp644v__);
  if(__temp644v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp645v=0;
  add__temp113v(pos,__temp645v,&__temp646v__);
  prev_pos=__temp646v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp647v__unsafe_ptr,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=buf__unsafe_ptr;
  *__temp1349v=buf__unsafe_size;
  *__temp1350v=buf__unsafe_align;
  *__temp1351v=pos;
  *__temp1352v=__temp647v__unsafe_ptr;
  *__temp1353v=__temp647v__dat__pos;
  *__temp1354v=__temp647v__dat__length;
  *__temp1355v=__temp647v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp648v(char** __temp1356v, uint64_t* __temp1357v, uint64_t* __temp1358v, uint64_t* __temp1359v, const char* _other, char** __temp1360v, uint64_t* __temp1361v, uint64_t* __temp1362v, char* __temp1363v) {
  char* buf__unsafe_ptr=*__temp1356v;
  uint64_t buf__unsafe_size=*__temp1357v;
  uint64_t buf__unsafe_align=*__temp1358v;
  uint64_t pos=*__temp1359v;
  char* __temp649v__unsafe_ptr=0;
  uint64_t __temp649v__dat__pos=0;
  uint64_t __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp650v__=0;
  uint64_t __temp651v__=0;
  uint64_t next_pos=0;
  uint64_t __temp652v__=0;
  char __temp653v__=0;
  uint64_t __temp654v=0;
  uint64_t __temp655v__=0;
  uint64_t prev_pos=0;
  char* __temp656v__unsafe_ptr=0;
  uint64_t __temp656v__dat__pos=0;
  uint64_t __temp656v__dat__length=0;
  char __temp656v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp565v(_other,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp649v__unsafe_ptr;
  other__dat__pos=__temp649v__dat__pos;
  other__dat__length=__temp649v__dat__length;
  other__dat__first=__temp649v__dat__first;
  len__temp569v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp650v__);
  add__temp113v(pos,__temp650v__,&__temp651v__);
  next_pos=__temp651v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp652v__);
  gt__temp209v(next_pos,__temp652v__,&__temp653v__);
  if(__temp653v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp654v=0;
  add__temp113v(pos,__temp654v,&__temp655v__);
  prev_pos=__temp655v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp656v__unsafe_ptr,&__temp656v__dat__pos,&__temp656v__dat__length,&__temp656v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1356v=buf__unsafe_ptr;
  *__temp1357v=buf__unsafe_size;
  *__temp1358v=buf__unsafe_align;
  *__temp1359v=pos;
  *__temp1360v=__temp656v__unsafe_ptr;
  *__temp1361v=__temp656v__dat__pos;
  *__temp1362v=__temp656v__dat__length;
  *__temp1363v=__temp656v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1206v(char** __temp1364v, uint64_t* __temp1365v, uint64_t* __temp1366v, char** __temp1367v, uint64_t* __temp1368v, uint64_t* __temp1369v, char* __temp1370v) {
  char* buff__unsafe_ptr=*__temp1364v;
  uint64_t buff__unsafe_size=*__temp1365v;
  uint64_t buff__unsafe_align=*__temp1366v;
  uint64_t __temp1207v=0;
  uint64_t __temp1208v__=0;
  char* __temp1209v__unsafe_ptr=0;
  uint64_t __temp1209v__unsafe_size=0;
  uint64_t __temp1209v__unsafe_align=0;
  char __temp1210v____temp514v____temp439v__=0;
  char* __temp1211v__unsafe_ptr=0;
  uint64_t __temp1211v__unsafe_size=0;
  uint64_t __temp1211v__unsafe_align=0;
  char* __temp1212v__buf__unsafe_ptr=0;
  uint64_t __temp1212v__buf__unsafe_size=0;
  uint64_t __temp1212v__buf__unsafe_align=0;
  uint64_t __temp1212v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1213v__=0;
  uint64_t __temp1214v__from=0;
  uint64_t __temp1214v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1215v=0;
  uint64_t __temp1216v__=0;
  uint64_t i=0;
  char* __temp1217v__=0;
  char* __temp1218v__unsafe_ptr=0;
  uint16_t __temp1218v__pos=0;
  uint16_t __temp1218v__length=0;
  char* __temp1219v__unsafe_ptr=0;
  uint64_t __temp1219v__dat__pos=0;
  uint64_t __temp1219v__dat__length=0;
  char __temp1219v__dat__first=0;
  char* __temp1220v__unsafe_ptr=0;
  uint64_t __temp1220v__dat__pos=0;
  uint64_t __temp1220v__dat__length=0;
  char __temp1220v__dat__first=0;
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__dat__pos=0;
  uint64_t __temp1222v__dat__length=0;
  char __temp1222v__dat__first=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__dat__pos=0;
  uint64_t __temp1223v__dat__length=0;
  char __temp1223v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1207v=4;
  KB__temp413v(__temp1207v,&__temp1208v__);
  __temp_errcode=alloc__temp508v(__temp1208v__,&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1211v__unsafe_ptr=__temp1209v__unsafe_ptr;
  __temp1211v__unsafe_size=__temp1209v__unsafe_size;
  __temp1211v__unsafe_align=__temp1209v__unsafe_align;
  bufpos__temp602v(&__temp1211v__unsafe_ptr,&__temp1211v__unsafe_size,&__temp1211v__unsafe_align,&__temp1212v__buf__unsafe_ptr,&__temp1212v__buf__unsafe_size,&__temp1212v__buf__unsafe_align,&__temp1212v__pos);
  mem__buf__unsafe_ptr=__temp1212v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1212v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1212v__buf__unsafe_align;
  mem__pos=__temp1212v__pos;
  len__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1213v__);
  range__temp402v(__temp1213v__,&__temp1214v__from,&__temp1214v__to);
  iter__from=__temp1214v__from;
  iter__to=__temp1214v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp409v(&iter__from,iter__to,&__temp1216v__);
  __temp1215v=__temp_complain;
  i=__temp1216v__;
  __temp1215v=__temp1215v==0;
  if(!__temp1215v){
  break;
  }
  __temp_errcode=get__temp503v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1217v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(&__temp1218v__unsafe_ptr,__temp1217v__,8);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(&__temp1218v__pos,__temp1217v__+8,2);
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(&__temp1218v__length,__temp1217v__+10,2);
  unpack__temp1200v(__temp1218v__unsafe_ptr,__temp1218v__pos,__temp1218v__length,&__temp1219v__unsafe_ptr,&__temp1219v__dat__pos,&__temp1219v__dat__length,&__temp1219v__dat__first);
  __temp_errcode=copy__temp639v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1219v__unsafe_ptr,__temp1219v__dat__pos,__temp1219v__dat__length,__temp1219v__dat__first,&__temp1220v__unsafe_ptr,&__temp1220v__dat__pos,&__temp1220v__dat__length,&__temp1220v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp648v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1221v,&__temp1222v__unsafe_ptr,&__temp1222v__dat__pos,&__temp1222v__dat__length,&__temp1222v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp559v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1223v__unsafe_ptr,&__temp1223v__dat__pos,&__temp1223v__dat__length,&__temp1223v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp1223v__unsafe_ptr,&__temp1210v____temp514v____temp439v__);
  if(__temp1210v____temp514v____temp439v__){
  __temp1209v__unsafe_size=0;
  __temp1209v__unsafe_size=__temp1209v__unsafe_size;
  free__temp431v(&__temp1223v__unsafe_ptr);
  }
  __temp_return:
  *__temp1364v=buff__unsafe_ptr;
  *__temp1365v=buff__unsafe_size;
  *__temp1366v=buff__unsafe_align;
  *__temp1367v=__temp1223v__unsafe_ptr;
  *__temp1368v=__temp1223v__dat__pos;
  *__temp1369v=__temp1223v__dat__length;
  *__temp1370v=__temp1223v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(uint64_t value, const char* endl) {
  int __temp367v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp679v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp680v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1224v() {
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char* __temp1226v__unsafe_ptr=0;
  uint64_t __temp1226v__unsafe_size=0;
  uint64_t __temp1226v__unsafe_align=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__unsafe_ptr=0;
  uint64_t __temp1228v__unsafe_size=0;
  uint64_t __temp1228v__unsafe_align=0;
  char __temp1229v____temp439v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  char* __temp1233v__unsafe_ptr=0;
  uint16_t __temp1233v__pos=0;
  uint16_t __temp1233v__length=0;
  uint64_t __temp1234v=0;
  char* __temp1235v__=0;
  char* __temp1237v__unsafe_ptr=0;
  uint16_t __temp1237v__pos=0;
  uint16_t __temp1237v__length=0;
  uint64_t __temp1238v=0;
  char* __temp1239v__=0;
  char* __temp1241v__unsafe_ptr=0;
  uint16_t __temp1241v__pos=0;
  uint16_t __temp1241v__length=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__=0;
  char* __temp1245v__unsafe_ptr=0;
  uint16_t __temp1245v__pos=0;
  uint16_t __temp1245v__length=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__=0;
  char* __temp1249v__unsafe_ptr=0;
  uint16_t __temp1249v__pos=0;
  uint16_t __temp1249v__length=0;
  uint64_t __temp1250v=0;
  char* __temp1251v__=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__dat__pos=0;
  uint64_t __temp1252v__dat__length=0;
  char __temp1252v__dat__first=0;
  char __temp1253v____temp1210v____temp514v____temp439v__=0;
  uint64_t __temp1253v____temp1209v__unsafe_size=0;
  char* __temp1254v__unsafe_ptr=0;
  uint16_t __temp1254v__pos=0;
  uint16_t __temp1254v__length=0;
  uint64_t __temp1255v__=0;
  uint64_t __temp1256v__from=0;
  uint64_t __temp1256v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1257v=0;
  uint64_t __temp1258v__=0;
  uint64_t j=0;
  char* __temp1260v__=0;
  char* __temp1261v__unsafe_ptr=0;
  uint16_t __temp1261v__pos=0;
  uint16_t __temp1261v__length=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__dat__pos=0;
  uint64_t __temp1262v__dat__length=0;
  char __temp1262v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1204v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=6;
  __temp_errcode=alloc__temp437v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1228v__unsafe_ptr;
  buff__unsafe_size=__temp1228v__unsafe_size;
  buff__unsafe_align=__temp1228v__unsafe_align;
  __temp1230v=0;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1232v,&__temp1233v__unsafe_ptr,&__temp1233v__pos,&__temp1233v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__,&__temp1233v__unsafe_ptr,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__+8,&__temp1233v__pos,2);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__+10,&__temp1233v__length,2);
  __temp1234v=1;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1234v,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1236v,&__temp1237v__unsafe_ptr,&__temp1237v__pos,&__temp1237v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(__temp1235v__,&__temp1237v__unsafe_ptr,8);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(__temp1235v__+8,&__temp1237v__pos,2);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(__temp1235v__+10,&__temp1237v__length,2);
  __temp1238v=2;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1240v,&__temp1241v__unsafe_ptr,&__temp1241v__pos,&__temp1241v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__,&__temp1241v__unsafe_ptr,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__+8,&__temp1241v__pos,2);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__+10,&__temp1241v__length,2);
  __temp1242v=3;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1244v,&__temp1245v__unsafe_ptr,&__temp1245v__pos,&__temp1245v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__,&__temp1245v__unsafe_ptr,8);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+8,&__temp1245v__pos,2);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+10,&__temp1245v__length,2);
  __temp1246v=4;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1246v,&__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1248v,&__temp1249v__unsafe_ptr,&__temp1249v__pos,&__temp1249v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__,&__temp1249v__unsafe_ptr,8);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__+8,&__temp1249v__pos,2);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__+10,&__temp1249v__length,2);
  __temp1250v=5;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1250v,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1206v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1252v__unsafe_ptr,&__temp1252v__dat__pos,&__temp1252v__dat__length,&__temp1252v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1193v(__temp1252v__unsafe_ptr,__temp1252v__dat__pos,__temp1252v__dat__length,__temp1252v__dat__first,&__temp1254v__unsafe_ptr,&__temp1254v__pos,&__temp1254v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__,&__temp1254v__unsafe_ptr,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+8,&__temp1254v__pos,2);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+10,&__temp1254v__length,2);
  len__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1255v__);
  range__temp402v(__temp1255v__,&__temp1256v__from,&__temp1256v__to);
  full_iter__from=__temp1256v__from;
  full_iter__to=__temp1256v__to;
  while(1){
  __temp_complain=next__temp409v(&full_iter__from,full_iter__to,&__temp1258v__);
  __temp1257v=__temp_complain;
  j=__temp1258v__;
  __temp1257v=__temp1257v==0;
  if(!__temp1257v){
  break;
  }
  print__temp366v(j,__temp1221v);
  __temp_errcode=get__temp503v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(&__temp1261v__unsafe_ptr,__temp1260v__,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(&__temp1261v__pos,__temp1260v__+8,2);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(&__temp1261v__length,__temp1260v__+10,2);
  unpack__temp1200v(__temp1261v__unsafe_ptr,__temp1261v__pos,__temp1261v__length,&__temp1262v__unsafe_ptr,&__temp1262v__dat__pos,&__temp1262v__dat__length,&__temp1262v__dat__first);
  print__temp679v(__temp1262v__unsafe_ptr,__temp1262v__dat__pos,__temp1262v__dat__length,__temp1262v__dat__first);
  }
  
  __temp_failure:exists__temp401v(__temp1252v__unsafe_ptr,&__temp1253v____temp1210v____temp514v____temp439v__);
  if(__temp1253v____temp1210v____temp514v____temp439v__){
  __temp1253v____temp1209v__unsafe_size=0;
  __temp1253v____temp1209v__unsafe_size=__temp1253v____temp1209v__unsafe_size;
  free__temp431v(&__temp1252v__unsafe_ptr);
  }
  exists__temp401v(__temp1228v__unsafe_ptr,&__temp1229v____temp439v__);
  if(__temp1229v____temp439v__){
  __temp1228v__unsafe_size=0;
  __temp1228v__unsafe_size=__temp1228v__unsafe_size;
  free__temp431v(&__temp1228v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1224v();return 0;}