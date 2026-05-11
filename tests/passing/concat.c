#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1228v="hi";
const char* const __temp1217v=" ";
const char* const __temp1232v="my";
const char* const __temp1244v="manios";
const char* const __temp1240v="is";
const char* const __temp1236v="name";
const char* const __temp357v="\n";
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

static inline __attribute__((always_inline)) void msg__temp_buffer__buffer__temp1200v(char** __temp1260v, uint64_t* __temp1261v, uint64_t* __temp1262v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1260v=unsafe_ptr;
  *__temp1261v=unsafe_size;
  *__temp1262v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp405v(char* x, char* __temp1263v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void free__temp435v(char** __temp1264v) {
  char* allocated=*__temp1264v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1264v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1265v) {
  int value=0;
  *__temp1265v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1266v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1266v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1267v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1267v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1268v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1268v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1269v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1270v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void zero__temp436v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp432v(uint64_t bytes, char** __temp1271v) {
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
  *__temp1271v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp441v(char** __temp1272v, uint64_t* __temp1273v, uint64_t* __temp1274v, uint64_t size, char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1272v;
  uint64_t buffer__unsafe_size=*__temp1273v;
  uint64_t buffer__unsafe_align=*__temp1274v;
  int __temp442v=0;
  char __temp443v__=0;
  uint64_t __temp444v=0;
  char __temp446v__=0;
  uint64_t __temp447v=0;
  char __temp448v__=0;
  uint64_t __temp449v=0;
  uint64_t __temp450v__=0;
  uint64_t __temp452v=0;
  char __temp453v__=0;
  uint64_t __temp454v__=0;
  uint64_t bytes=0;
  char* __temp455v__=0;
  uint64_t __temp456v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp281v(buffer__unsafe_size,size,&__temp446v__);
  if(__temp446v__){
  __temp447v=0;
  neq__temp305v(size,__temp447v,&__temp448v__);
  if(__temp448v__){
  __temp449v=0;
  mul__temp137v(buffer__unsafe_align,size,&__temp450v__);
  zero__temp436v(buffer__unsafe_ptr,__temp449v,__temp450v__);
  }
  goto __temp_return;
  }
  __temp452v=0;
  neq__temp305v(buffer__unsafe_size,__temp452v,&__temp453v__);
  if(__temp453v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_align,size,&__temp454v__);
  bytes=__temp454v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp432v(bytes,&__temp455v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp455v__;
  __temp456v=0;
  zero__temp436v(buffer__unsafe_ptr,__temp456v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp405v(buffer__unsafe_ptr,&__temp443v__);
  if(__temp443v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp435v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1272v=buffer__unsafe_ptr;
  *__temp1273v=buffer__unsafe_size;
  *__temp1274v=buffer__unsafe_align;
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1279v) {
  *__temp1279v=to;
}

static inline __attribute__((always_inline)) void add__temp437v(char* allocated, uint64_t offset, char** __temp1280v) {
  char* element=0;
  char* __temp438v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp438v__);
  unsafe_ptr=__temp438v__;
  goto __temp_return;
  __temp_return:
  *__temp1280v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp503v(char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v, uint64_t i, char** __temp1284v) {
  char* buffer__unsafe_ptr=*__temp1281v;
  uint64_t buffer__unsafe_size=*__temp1282v;
  uint64_t buffer__unsafe_align=*__temp1283v;
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
  add__temp437v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1281v=buffer__unsafe_ptr;
  *__temp1282v=buffer__unsafe_size;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp513v(char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1285v=unsafe_ptr;
  *__temp1286v=unsafe_size;
  *__temp1287v=unsafe_align;
}

static inline __attribute__((always_inline)) int get__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1288v) {
  char __temp508v__=0;
  uint64_t __temp509v__=0;
  char* __temp510v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp508v__);
  if(__temp508v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp509v__);
  add__temp437v(buffer__unsafe_ptr,__temp509v__,&__temp510v__);
  unsafe_ptr=__temp510v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1288v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp549v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char* __temp1292v) {
  goto __temp_return;
  __temp_return:
  *__temp1289v=unsafe_ptr;
  *__temp1290v=dat__pos;
  *__temp1291v=dat__length;
  *__temp1292v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp553v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v, char* __temp1296v) {
  char* unsafe_ptr=0;
  char* __temp554v__unsafe_ptr=0;
  uint64_t __temp554v__dat__pos=0;
  uint64_t __temp554v__dat__length=0;
  char __temp554v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp549v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp554v__unsafe_ptr,&__temp554v__dat__pos,&__temp554v__dat__length,&__temp554v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1293v=__temp554v__unsafe_ptr;
  *__temp1294v=__temp554v__dat__pos;
  *__temp1295v=__temp554v__dat__length;
  *__temp1296v=__temp554v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp563v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, char* __temp1300v) {
  uint64_t __temp564v=0;
  char __temp565v__=0;
  char* __temp566v__=0;
  char __temp567v__value=0;
  char first=0;
  char* __temp568v__unsafe_ptr=0;
  uint64_t __temp568v__dat__pos=0;
  uint64_t __temp568v__dat__length=0;
  char __temp568v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp564v=0;
  neq__temp305v(length,__temp564v,&__temp565v__);
  if(__temp565v__){
  __temp_errcode=get__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp566v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp566v__){
  goto __temp_failure;
  }
  memcpy(&__temp567v__value,__temp566v__,1);
  first=__temp567v__value;
  }
  str__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp568v__unsafe_ptr,&__temp568v__dat__pos,&__temp568v__dat__length,&__temp568v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1297v=__temp568v__unsafe_ptr;
  *__temp1298v=__temp568v__dat__pos;
  *__temp1299v=__temp568v__dat__length;
  *__temp1300v=__temp568v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp569v(const char* c, char** __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v, char* __temp1304v) {
  char* __temp570v__unsafe_ptr=0;
  uint64_t __temp570v__unsafe_size=0;
  uint64_t __temp570v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t length=0;
  uint64_t __temp571v=0;
  char* __temp572v__unsafe_ptr=0;
  uint64_t __temp572v__dat__pos=0;
  uint64_t __temp572v__dat__length=0;
  char __temp572v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp513v(&__temp570v__unsafe_ptr,&__temp570v__unsafe_size,&__temp570v__unsafe_align);
  buf__unsafe_ptr=__temp570v__unsafe_ptr;
  buf__unsafe_size=__temp570v__unsafe_size;
  buf__unsafe_align=__temp570v__unsafe_align;
  buf__unsafe_ptr=c;
  if(c){
  length=strlen(c);
  }
  buf__unsafe_size=length+1;
  __temp571v=0;
  __temp_errcode=str__temp563v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp571v,length,&__temp572v__unsafe_ptr,&__temp572v__dat__pos,&__temp572v__dat__length,&__temp572v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1301v=__temp572v__unsafe_ptr;
  *__temp1302v=__temp572v__dat__pos;
  *__temp1303v=__temp572v__dat__length;
  *__temp1304v=__temp572v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp402v(uint64_t x, uint64_t* __temp1305v) {
  int __temp403v=0;
  int __temp404v=0;
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1305v=value;
}

static inline __attribute__((always_inline)) void msg__temp1189v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1306v, uint64_t* __temp1307v, uint64_t* __temp1308v) {
  char* unsafe_ptr=0;
  uint64_t __temp1190v__=0;
  uint64_t pos=0;
  uint64_t __temp1191v__=0;
  uint64_t length=0;
  unsafe_ptr=s__unsafe_ptr;
  nat__temp402v(s__dat__pos,&__temp1190v__);
  pos=__temp1190v__;
  nat__temp402v(s__dat__length,&__temp1191v__);
  length=__temp1191v__;
  goto __temp_return;
  __temp_return:
  *__temp1306v=unsafe_ptr;
  *__temp1307v=pos;
  *__temp1308v=length;
}

static inline __attribute__((always_inline)) int msg__temp1193v(const char* s, char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v) {
  char* __temp1194v__unsafe_ptr=0;
  uint64_t __temp1194v__dat__pos=0;
  uint64_t __temp1194v__dat__length=0;
  char __temp1194v__dat__first=0;
  char* __temp1195v__unsafe_ptr=0;
  uint64_t __temp1195v__pos=0;
  uint64_t __temp1195v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp569v(s,&__temp1194v__unsafe_ptr,&__temp1194v__dat__pos,&__temp1194v__dat__length,&__temp1194v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  msg__temp1189v(__temp1194v__unsafe_ptr,__temp1194v__dat__pos,__temp1194v__dat__length,__temp1194v__dat__first,&__temp1195v__unsafe_ptr,&__temp1195v__pos,&__temp1195v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1309v=__temp1195v__unsafe_ptr;
  *__temp1310v=__temp1195v__pos;
  *__temp1311v=__temp1195v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp417v(uint64_t x, uint64_t* __temp1312v) {
  uint64_t __temp418v=0;
  uint64_t __temp419v__=0;
  __temp418v=1024;
  mul__temp137v(x,__temp418v,&__temp419v__);
  goto __temp_return;
  __temp_return:
  *__temp1312v=__temp419v__;
}

static inline __attribute__((always_inline)) int alloc__temp512v(uint64_t size, char** __temp1313v, uint64_t* __temp1314v, uint64_t* __temp1315v) {
  char* __temp515v__unsafe_ptr=0;
  uint64_t __temp515v__unsafe_size=0;
  uint64_t __temp515v__unsafe_align=0;
  char* __temp516v__unsafe_ptr=0;
  uint64_t __temp516v__unsafe_size=0;
  uint64_t __temp516v__unsafe_align=0;
  char* __temp517v__unsafe_ptr=0;
  uint64_t __temp517v__unsafe_size=0;
  uint64_t __temp517v__unsafe_align=0;
  char __temp518v____temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp513v(&__temp515v__unsafe_ptr,&__temp515v__unsafe_size,&__temp515v__unsafe_align);
  __temp516v__unsafe_ptr=__temp515v__unsafe_ptr;
  __temp516v__unsafe_size=__temp515v__unsafe_size;
  __temp516v__unsafe_align=__temp515v__unsafe_align;
  __temp_errcode=alloc__temp441v(&__temp516v__unsafe_ptr,&__temp516v__unsafe_size,&__temp516v__unsafe_align,size,&__temp517v__unsafe_ptr,&__temp517v__unsafe_size,&__temp517v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp405v(__temp517v__unsafe_ptr,&__temp518v____temp443v__);
  if(__temp518v____temp443v__){
  __temp517v__unsafe_size=0;
  __temp517v__unsafe_size=__temp517v__unsafe_size;
  free__temp435v(&__temp517v__unsafe_ptr);
  }
  __temp_return:
  *__temp1313v=__temp517v__unsafe_ptr;
  *__temp1314v=__temp517v__unsafe_size;
  *__temp1315v=__temp517v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp606v(char** __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v, char** __temp1319v, uint64_t* __temp1320v, uint64_t* __temp1321v, uint64_t* __temp1322v) {
  char* buf__unsafe_ptr=*__temp1316v;
  uint64_t buf__unsafe_size=*__temp1317v;
  uint64_t buf__unsafe_align=*__temp1318v;
  uint64_t __temp607v=0;
  uint64_t __temp608v=0;
  uint64_t pos=0;
  __temp607v=0;
  __temp608v=__temp607v;
  pos=__temp608v;
  goto __temp_return;
  __temp_return:
  *__temp1316v=buf__unsafe_ptr;
  *__temp1317v=buf__unsafe_size;
  *__temp1318v=buf__unsafe_align;
  *__temp1319v=buf__unsafe_ptr;
  *__temp1320v=buf__unsafe_size;
  *__temp1321v=buf__unsafe_align;
  *__temp1322v=pos;
}

static inline __attribute__((always_inline)) void len__temp511v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1323v) {
  goto __temp_return;
  __temp_return:
  *__temp1323v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp406v(uint64_t to, uint64_t* __temp1324v, uint64_t* __temp1325v) {
  int __temp407v=0;
  uint64_t __temp408v=0;
  uint64_t _from=0;
  uint64_t __temp409v=0;
  uint64_t from=0;
  __temp408v=0;
  _from=__temp408v;
  __temp409v=_from;
  from=__temp409v;
  goto __temp_return;
  __temp_return:
  *__temp1324v=from;
  *__temp1325v=to;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1326v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1326v=z;
}

static inline __attribute__((always_inline)) int next__temp413v(uint64_t* __temp1327v, uint64_t r__to, uint64_t* __temp1328v) {
  uint64_t r__from=*__temp1327v;
  char __temp414v__=0;
  uint64_t ret=0;
  uint64_t __temp415v=0;
  uint64_t __temp416v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(r__from,r__to,&__temp414v__);
  if(__temp414v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp415v=1;
  add__temp113v(ret,__temp415v,&__temp416v__);
  r__from=__temp416v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1327v=r__from;
  *__temp1328v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp551v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1329v, uint64_t* __temp1330v, uint64_t* __temp1331v, char* __temp1332v) {
  char* first_pos=0;
  char first=0;
  char* __temp552v__unsafe_ptr=0;
  uint64_t __temp552v__dat__pos=0;
  uint64_t __temp552v__dat__length=0;
  char __temp552v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp549v(unsafe_ptr,pos,length,first,&__temp552v__unsafe_ptr,&__temp552v__dat__pos,&__temp552v__dat__length,&__temp552v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1329v=__temp552v__unsafe_ptr;
  *__temp1330v=__temp552v__dat__pos;
  *__temp1331v=__temp552v__dat__length;
  *__temp1332v=__temp552v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp1196v(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__length, char** __temp1333v, uint64_t* __temp1334v, uint64_t* __temp1335v, char* __temp1336v) {
  uint64_t __temp1197v__=0;
  uint64_t __temp1198v__=0;
  char* __temp1199v__unsafe_ptr=0;
  uint64_t __temp1199v__dat__pos=0;
  uint64_t __temp1199v__dat__length=0;
  char __temp1199v__dat__first=0;
  nat__temp402v(m__pos,&__temp1197v__);
  nat__temp402v(m__length,&__temp1198v__);
  str__temp551v(m__unsafe_ptr,__temp1197v__,__temp1198v__,&__temp1199v__unsafe_ptr,&__temp1199v__dat__pos,&__temp1199v__dat__length,&__temp1199v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1333v=__temp1199v__unsafe_ptr;
  *__temp1334v=__temp1199v__dat__pos;
  *__temp1335v=__temp1199v__dat__length;
  *__temp1336v=__temp1199v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp562v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1337v, uint64_t* __temp1338v, uint64_t* __temp1339v, char* __temp1340v) {
  goto __temp_return;
  __temp_return:
  *__temp1337v=other__unsafe_ptr;
  *__temp1338v=other__dat__pos;
  *__temp1339v=other__dat__length;
  *__temp1340v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp573v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1341v) {
  goto __temp_return;
  __temp_return:
  *__temp1341v=s__dat__length;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1342v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1342v=z;
}

static inline __attribute__((always_inline)) int copy__temp643v(char** __temp1343v, uint64_t* __temp1344v, uint64_t* __temp1345v, uint64_t* __temp1346v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1347v, uint64_t* __temp1348v, uint64_t* __temp1349v, char* __temp1350v) {
  char* buf__unsafe_ptr=*__temp1343v;
  uint64_t buf__unsafe_size=*__temp1344v;
  uint64_t buf__unsafe_align=*__temp1345v;
  uint64_t pos=*__temp1346v;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp645v__=0;
  uint64_t __temp646v__=0;
  uint64_t next_pos=0;
  uint64_t __temp647v__=0;
  char __temp648v__=0;
  uint64_t __temp649v=0;
  uint64_t __temp650v__=0;
  uint64_t prev_pos=0;
  char* __temp651v__unsafe_ptr=0;
  uint64_t __temp651v__dat__pos=0;
  uint64_t __temp651v__dat__length=0;
  char __temp651v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp562v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  other__unsafe_ptr=__temp644v__unsafe_ptr;
  other__dat__pos=__temp644v__dat__pos;
  other__dat__length=__temp644v__dat__length;
  other__dat__first=__temp644v__dat__first;
  len__temp573v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp645v__);
  add__temp113v(pos,__temp645v__,&__temp646v__);
  next_pos=__temp646v__;
  len__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp647v__);
  gt__temp209v(next_pos,__temp647v__,&__temp648v__);
  if(__temp648v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp649v=0;
  add__temp113v(pos,__temp649v,&__temp650v__);
  prev_pos=__temp650v__;
  pos=next_pos;
  str__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp651v__unsafe_ptr,&__temp651v__dat__pos,&__temp651v__dat__length,&__temp651v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1343v=buf__unsafe_ptr;
  *__temp1344v=buf__unsafe_size;
  *__temp1345v=buf__unsafe_align;
  *__temp1346v=pos;
  *__temp1347v=__temp651v__unsafe_ptr;
  *__temp1348v=__temp651v__dat__pos;
  *__temp1349v=__temp651v__dat__length;
  *__temp1350v=__temp651v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp652v(char** __temp1351v, uint64_t* __temp1352v, uint64_t* __temp1353v, uint64_t* __temp1354v, const char* _other, char** __temp1355v, uint64_t* __temp1356v, uint64_t* __temp1357v, char* __temp1358v) {
  char* buf__unsafe_ptr=*__temp1351v;
  uint64_t buf__unsafe_size=*__temp1352v;
  uint64_t buf__unsafe_align=*__temp1353v;
  uint64_t pos=*__temp1354v;
  char* __temp653v__unsafe_ptr=0;
  uint64_t __temp653v__dat__pos=0;
  uint64_t __temp653v__dat__length=0;
  char __temp653v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp654v__=0;
  uint64_t __temp655v__=0;
  uint64_t next_pos=0;
  uint64_t __temp656v__=0;
  char __temp657v__=0;
  uint64_t __temp658v=0;
  uint64_t __temp659v__=0;
  uint64_t prev_pos=0;
  char* __temp660v__unsafe_ptr=0;
  uint64_t __temp660v__dat__pos=0;
  uint64_t __temp660v__dat__length=0;
  char __temp660v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp569v(_other,&__temp653v__unsafe_ptr,&__temp653v__dat__pos,&__temp653v__dat__length,&__temp653v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp653v__unsafe_ptr;
  other__dat__pos=__temp653v__dat__pos;
  other__dat__length=__temp653v__dat__length;
  other__dat__first=__temp653v__dat__first;
  len__temp573v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp654v__);
  add__temp113v(pos,__temp654v__,&__temp655v__);
  next_pos=__temp655v__;
  len__temp511v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp656v__);
  gt__temp209v(next_pos,__temp656v__,&__temp657v__);
  if(__temp657v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp658v=0;
  add__temp113v(pos,__temp658v,&__temp659v__);
  prev_pos=__temp659v__;
  pos=next_pos;
  str__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp660v__unsafe_ptr,&__temp660v__dat__pos,&__temp660v__dat__length,&__temp660v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1351v=buf__unsafe_ptr;
  *__temp1352v=buf__unsafe_size;
  *__temp1353v=buf__unsafe_align;
  *__temp1354v=pos;
  *__temp1355v=__temp660v__unsafe_ptr;
  *__temp1356v=__temp660v__dat__pos;
  *__temp1357v=__temp660v__dat__length;
  *__temp1358v=__temp660v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1202v(char** __temp1359v, uint64_t* __temp1360v, uint64_t* __temp1361v, char** __temp1362v, uint64_t* __temp1363v, uint64_t* __temp1364v, char* __temp1365v) {
  char* buff__unsafe_ptr=*__temp1359v;
  uint64_t buff__unsafe_size=*__temp1360v;
  uint64_t buff__unsafe_align=*__temp1361v;
  uint64_t __temp1203v=0;
  uint64_t __temp1204v__=0;
  char* __temp1205v__unsafe_ptr=0;
  uint64_t __temp1205v__unsafe_size=0;
  uint64_t __temp1205v__unsafe_align=0;
  char __temp1206v____temp518v____temp443v__=0;
  char* __temp1207v__unsafe_ptr=0;
  uint64_t __temp1207v__unsafe_size=0;
  uint64_t __temp1207v__unsafe_align=0;
  char* __temp1208v__buf__unsafe_ptr=0;
  uint64_t __temp1208v__buf__unsafe_size=0;
  uint64_t __temp1208v__buf__unsafe_align=0;
  uint64_t __temp1208v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1209v__=0;
  uint64_t __temp1210v__from=0;
  uint64_t __temp1210v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1211v=0;
  uint64_t __temp1212v__=0;
  uint64_t i=0;
  char* __temp1213v__=0;
  char* __temp1214v__unsafe_ptr=0;
  uint64_t __temp1214v__pos=0;
  uint64_t __temp1214v__length=0;
  char* __temp1215v__unsafe_ptr=0;
  uint64_t __temp1215v__dat__pos=0;
  uint64_t __temp1215v__dat__length=0;
  char __temp1215v__dat__first=0;
  char* __temp1216v__unsafe_ptr=0;
  uint64_t __temp1216v__dat__pos=0;
  uint64_t __temp1216v__dat__length=0;
  char __temp1216v__dat__first=0;
  char* __temp1218v__unsafe_ptr=0;
  uint64_t __temp1218v__dat__pos=0;
  uint64_t __temp1218v__dat__length=0;
  char __temp1218v__dat__first=0;
  char* __temp1219v__unsafe_ptr=0;
  uint64_t __temp1219v__dat__pos=0;
  uint64_t __temp1219v__dat__length=0;
  char __temp1219v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1203v=4;
  KB__temp417v(__temp1203v,&__temp1204v__);
  __temp_errcode=alloc__temp512v(__temp1204v__,&__temp1205v__unsafe_ptr,&__temp1205v__unsafe_size,&__temp1205v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1207v__unsafe_ptr=__temp1205v__unsafe_ptr;
  __temp1207v__unsafe_size=__temp1205v__unsafe_size;
  __temp1207v__unsafe_align=__temp1205v__unsafe_align;
  bufpos__temp606v(&__temp1207v__unsafe_ptr,&__temp1207v__unsafe_size,&__temp1207v__unsafe_align,&__temp1208v__buf__unsafe_ptr,&__temp1208v__buf__unsafe_size,&__temp1208v__buf__unsafe_align,&__temp1208v__pos);
  mem__buf__unsafe_ptr=__temp1208v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1208v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1208v__buf__unsafe_align;
  mem__pos=__temp1208v__pos;
  len__temp511v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1209v__);
  range__temp406v(__temp1209v__,&__temp1210v__from,&__temp1210v__to);
  iter__from=__temp1210v__from;
  iter__to=__temp1210v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp413v(&iter__from,iter__to,&__temp1212v__);
  __temp1211v=__temp_complain;
  i=__temp1212v__;
  __temp1211v=__temp1211v==0;
  if(!__temp1211v){
  break;
  }
  __temp_errcode=get__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1213v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__unsafe_ptr,__temp1213v__,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__pos,__temp1213v__+8,8);
  if(!__temp1213v__){
  goto __temp_failure;
  }
  memcpy(&__temp1214v__length,__temp1213v__+16,8);
  str__temp1196v(__temp1214v__unsafe_ptr,__temp1214v__pos,__temp1214v__length,&__temp1215v__unsafe_ptr,&__temp1215v__dat__pos,&__temp1215v__dat__length,&__temp1215v__dat__first);
  __temp_errcode=copy__temp643v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1215v__unsafe_ptr,__temp1215v__dat__pos,__temp1215v__dat__length,__temp1215v__dat__first,&__temp1216v__unsafe_ptr,&__temp1216v__dat__pos,&__temp1216v__dat__length,&__temp1216v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp652v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1217v,&__temp1218v__unsafe_ptr,&__temp1218v__dat__pos,&__temp1218v__dat__length,&__temp1218v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp563v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1219v__unsafe_ptr,&__temp1219v__dat__pos,&__temp1219v__dat__length,&__temp1219v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp405v(__temp1219v__unsafe_ptr,&__temp1206v____temp518v____temp443v__);
  if(__temp1206v____temp518v____temp443v__){
  __temp1205v__unsafe_size=0;
  __temp1205v__unsafe_size=__temp1205v__unsafe_size;
  free__temp435v(&__temp1219v__unsafe_ptr);
  }
  __temp_return:
  *__temp1359v=buff__unsafe_ptr;
  *__temp1360v=buff__unsafe_size;
  *__temp1361v=buff__unsafe_align;
  *__temp1362v=__temp1219v__unsafe_ptr;
  *__temp1363v=__temp1219v__dat__pos;
  *__temp1364v=__temp1219v__dat__length;
  *__temp1365v=__temp1219v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp370v(uint64_t value, const char* endl) {
  int __temp371v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp683v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp684v=0;
  const char* endl=0;
  endl=__temp357v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1220v() {
  char* __temp1221v__unsafe_ptr=0;
  uint64_t __temp1221v__unsafe_size=0;
  uint64_t __temp1221v__unsafe_align=0;
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  uint64_t __temp1223v=0;
  char* __temp1224v__unsafe_ptr=0;
  uint64_t __temp1224v__unsafe_size=0;
  uint64_t __temp1224v__unsafe_align=0;
  char __temp1225v____temp443v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1226v=0;
  char* __temp1227v__=0;
  char* __temp1229v__unsafe_ptr=0;
  uint64_t __temp1229v__pos=0;
  uint64_t __temp1229v__length=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  char* __temp1233v__unsafe_ptr=0;
  uint64_t __temp1233v__pos=0;
  uint64_t __temp1233v__length=0;
  uint64_t __temp1234v=0;
  char* __temp1235v__=0;
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__pos=0;
  uint64_t __temp1237v__length=0;
  uint64_t __temp1238v=0;
  char* __temp1239v__=0;
  char* __temp1241v__unsafe_ptr=0;
  uint64_t __temp1241v__pos=0;
  uint64_t __temp1241v__length=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__=0;
  char* __temp1245v__unsafe_ptr=0;
  uint64_t __temp1245v__pos=0;
  uint64_t __temp1245v__length=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__=0;
  char* __temp1248v__unsafe_ptr=0;
  uint64_t __temp1248v__dat__pos=0;
  uint64_t __temp1248v__dat__length=0;
  char __temp1248v__dat__first=0;
  char __temp1249v____temp1206v____temp518v____temp443v__=0;
  uint64_t __temp1249v____temp1205v__unsafe_size=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__pos=0;
  uint64_t __temp1250v__length=0;
  uint64_t __temp1251v__=0;
  uint64_t __temp1252v__from=0;
  uint64_t __temp1252v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1253v=0;
  uint64_t __temp1254v__=0;
  uint64_t j=0;
  char* __temp1256v__=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__pos=0;
  uint64_t __temp1257v__length=0;
  char* __temp1258v__unsafe_ptr=0;
  uint64_t __temp1258v__dat__pos=0;
  uint64_t __temp1258v__dat__length=0;
  char __temp1258v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  msg__temp_buffer__buffer__temp1200v(&__temp1221v__unsafe_ptr,&__temp1221v__unsafe_size,&__temp1221v__unsafe_align);
  __temp1222v__unsafe_ptr=__temp1221v__unsafe_ptr;
  __temp1222v__unsafe_size=__temp1221v__unsafe_size;
  __temp1222v__unsafe_align=__temp1221v__unsafe_align;
  __temp1223v=6;
  __temp_errcode=alloc__temp441v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align,__temp1223v,&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1224v__unsafe_ptr;
  buff__unsafe_size=__temp1224v__unsafe_size;
  buff__unsafe_align=__temp1224v__unsafe_align;
  __temp1226v=0;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1226v,&__temp1227v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=msg__temp1193v(__temp1228v,&__temp1229v__unsafe_ptr,&__temp1229v__pos,&__temp1229v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__,&__temp1229v__unsafe_ptr,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+8,&__temp1229v__pos,8);
  if(!__temp1227v__){
  goto __temp_failure;
  }
  memcpy(__temp1227v__+16,&__temp1229v__length,8);
  __temp1230v=1;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=msg__temp1193v(__temp1232v,&__temp1233v__unsafe_ptr,&__temp1233v__pos,&__temp1233v__length);
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
  memcpy(__temp1231v__+8,&__temp1233v__pos,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__+16,&__temp1233v__length,8);
  __temp1234v=2;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1234v,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=msg__temp1193v(__temp1236v,&__temp1237v__unsafe_ptr,&__temp1237v__pos,&__temp1237v__length);
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
  memcpy(__temp1235v__+8,&__temp1237v__pos,8);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(__temp1235v__+16,&__temp1237v__length,8);
  __temp1238v=3;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=msg__temp1193v(__temp1240v,&__temp1241v__unsafe_ptr,&__temp1241v__pos,&__temp1241v__length);
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
  memcpy(__temp1239v__+8,&__temp1241v__pos,8);
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(__temp1239v__+16,&__temp1241v__length,8);
  __temp1242v=4;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=msg__temp1193v(__temp1244v,&__temp1245v__unsafe_ptr,&__temp1245v__pos,&__temp1245v__length);
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
  memcpy(__temp1243v__+8,&__temp1245v__pos,8);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+16,&__temp1245v__length,8);
  __temp1246v=5;
  __temp_errcode=mutget__temp503v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1246v,&__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1202v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1248v__unsafe_ptr,&__temp1248v__dat__pos,&__temp1248v__dat__length,&__temp1248v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  msg__temp1189v(__temp1248v__unsafe_ptr,__temp1248v__dat__pos,__temp1248v__dat__length,__temp1248v__dat__first,&__temp1250v__unsafe_ptr,&__temp1250v__pos,&__temp1250v__length);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__,&__temp1250v__unsafe_ptr,8);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__+8,&__temp1250v__pos,8);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__+16,&__temp1250v__length,8);
  len__temp511v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1251v__);
  range__temp406v(__temp1251v__,&__temp1252v__from,&__temp1252v__to);
  full_iter__from=__temp1252v__from;
  full_iter__to=__temp1252v__to;
  while(1){
  __temp_complain=next__temp413v(&full_iter__from,full_iter__to,&__temp1254v__);
  __temp1253v=__temp_complain;
  j=__temp1254v__;
  __temp1253v=__temp1253v==0;
  if(!__temp1253v){
  break;
  }
  print__temp370v(j,__temp1217v);
  __temp_errcode=get__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1256v__){
  goto __temp_failure;
  }
  memcpy(&__temp1257v__unsafe_ptr,__temp1256v__,8);
  if(!__temp1256v__){
  goto __temp_failure;
  }
  memcpy(&__temp1257v__pos,__temp1256v__+8,8);
  if(!__temp1256v__){
  goto __temp_failure;
  }
  memcpy(&__temp1257v__length,__temp1256v__+16,8);
  str__temp1196v(__temp1257v__unsafe_ptr,__temp1257v__pos,__temp1257v__length,&__temp1258v__unsafe_ptr,&__temp1258v__dat__pos,&__temp1258v__dat__length,&__temp1258v__dat__first);
  print__temp683v(__temp1258v__unsafe_ptr,__temp1258v__dat__pos,__temp1258v__dat__length,__temp1258v__dat__first);
  }
  
  __temp_failure:exists__temp405v(__temp1248v__unsafe_ptr,&__temp1249v____temp1206v____temp518v____temp443v__);
  if(__temp1249v____temp1206v____temp518v____temp443v__){
  __temp1249v____temp1205v__unsafe_size=0;
  __temp1249v____temp1205v__unsafe_size=__temp1249v____temp1205v__unsafe_size;
  free__temp435v(&__temp1248v__unsafe_ptr);
  }
  exists__temp405v(__temp1224v__unsafe_ptr,&__temp1225v____temp443v__);
  if(__temp1225v____temp443v__){
  __temp1224v__unsafe_size=0;
  __temp1224v__unsafe_size=__temp1224v__unsafe_size;
  free__temp435v(&__temp1224v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1220v();return 0;}