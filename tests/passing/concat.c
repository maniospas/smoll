#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1244v="hi";
const char* const __temp353v="\n";
const char* const __temp1252v="name";
const char* const __temp1233v=" ";
const char* const __temp1256v="is";
const char* const __temp1260v="manios";
const char* const __temp1248v="my";
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
"invalid float conversion from string without a value after the dot",
"'nat' value too large to pack in 'nat16'",
"'nat' value too large to pack in 'nat32'"
};

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1216v(char** __temp1276v, uint64_t* __temp1277v, uint64_t* __temp1278v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=12;
  *__temp1276v=unsafe_ptr;
  *__temp1277v=unsafe_size;
  *__temp1278v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp401v(char* x, char* __temp1279v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1280v) {
  char* allocated=*__temp1280v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1280v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1281v) {
  int value=0;
  *__temp1281v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1282v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1282v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1283v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1283v=__temp90v__;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1284v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void neq__temp305v(uint64_t x, uint64_t y, char* __temp1285v) {
  int __temp306v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp306v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1286v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp428v(uint64_t bytes, char** __temp1287v) {
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
  *__temp1287v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp455v(char** __temp1288v, uint64_t* __temp1289v, uint64_t* __temp1290v, uint64_t size, char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v) {
  char* buffer__unsafe_ptr=*__temp1288v;
  uint64_t buffer__unsafe_size=*__temp1289v;
  uint64_t buffer__unsafe_align=*__temp1290v;
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
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_align;
  *__temp1291v=buffer__unsafe_ptr;
  *__temp1292v=buffer__unsafe_size;
  *__temp1293v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1294v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1295v) {
  *__temp1295v=to;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1296v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1296v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, uint64_t i, char** __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1297v;
  uint64_t buffer__unsafe_size=*__temp1298v;
  uint64_t buffer__unsafe_align=*__temp1299v;
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
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp509v(char** __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1301v=unsafe_ptr;
  *__temp1302v=unsafe_size;
  *__temp1303v=unsafe_align;
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1304v) {
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
  *__temp1304v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp545v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1305v, uint64_t* __temp1306v, uint64_t* __temp1307v, char* __temp1308v) {
  goto __temp_return;
  __temp_return:
  *__temp1305v=unsafe_ptr;
  *__temp1306v=dat__pos;
  *__temp1307v=dat__length;
  *__temp1308v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp549v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v, char* __temp1312v) {
  char* unsafe_ptr=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__dat__pos=0;
  uint64_t __temp550v__dat__length=0;
  char __temp550v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp545v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp550v__unsafe_ptr,&__temp550v__dat__pos,&__temp550v__dat__length,&__temp550v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp550v__unsafe_ptr;
  *__temp1310v=__temp550v__dat__pos;
  *__temp1311v=__temp550v__dat__length;
  *__temp1312v=__temp550v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp575v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1313v, uint64_t* __temp1314v, uint64_t* __temp1315v, char* __temp1316v) {
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
  *__temp1313v=__temp580v__unsafe_ptr;
  *__temp1314v=__temp580v__dat__pos;
  *__temp1315v=__temp580v__dat__length;
  *__temp1316v=__temp580v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp581v(const char* c, char** __temp1317v, uint64_t* __temp1318v, uint64_t* __temp1319v, char* __temp1320v) {
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
  *__temp1317v=__temp584v__unsafe_ptr;
  *__temp1318v=__temp584v__dat__pos;
  *__temp1319v=__temp584v__dat__length;
  *__temp1320v=__temp584v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp209v(uint64_t x, uint64_t y, char* __temp1321v) {
  int __temp210v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp210v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1321v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1186v(uint64_t x, uint16_t* __temp1322v) {
  uint64_t __temp1187v=0;
  char __temp1188v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1187v=65535;
  gt__temp209v(x,__temp1187v,&__temp1188v__);
  if(__temp1188v__){
  __temp_errcode=27;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1322v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1194v(uint64_t _pos, uint64_t _length, uint16_t* __temp1323v, uint16_t* __temp1324v) {
  uint16_t __temp1195v__=0;
  uint16_t pos=0;
  uint16_t __temp1196v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1186v(_pos,&__temp1195v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1195v__;
  __temp_errcode=nat16__temp1186v(_length,&__temp1196v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1196v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1323v=pos;
  *__temp1324v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1197v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1325v, uint16_t* __temp1326v, uint16_t* __temp1327v) {
  char* unsafe_ptr=0;
  uint16_t __temp1198v__pos=0;
  uint16_t __temp1198v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1194v(s__dat__pos,s__dat__length,&__temp1198v__pos,&__temp1198v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1198v__pos;
  dat__length=__temp1198v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1325v=unsafe_ptr;
  *__temp1326v=dat__pos;
  *__temp1327v=dat__length;
  
  return __temp_errcode;
}

int str__temp1200v(const char* s, char** __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
  char* __temp1201v__unsafe_ptr=0;
  uint64_t __temp1201v__dat__pos=0;
  uint64_t __temp1201v__dat__length=0;
  char __temp1201v__dat__first=0;
  char* __temp1202v__unsafe_ptr=0;
  uint16_t __temp1202v__dat__pos=0;
  uint16_t __temp1202v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp581v(s,&__temp1201v__unsafe_ptr,&__temp1201v__dat__pos,&__temp1201v__dat__length,&__temp1201v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1201v__unsafe_ptr,__temp1201v__dat__pos,__temp1201v__dat__length,__temp1201v__dat__first,&__temp1202v__unsafe_ptr,&__temp1202v__dat__pos,&__temp1202v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1328v=__temp1202v__unsafe_ptr;
  *__temp1329v=__temp1202v__dat__pos;
  *__temp1330v=__temp1202v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp413v(uint64_t x, uint64_t* __temp1331v) {
  uint64_t __temp414v=0;
  uint64_t __temp415v__=0;
  __temp414v=1024;
  mul__temp137v(x,__temp414v,&__temp415v__);
  goto __temp_return;
  __temp_return:
  *__temp1331v=__temp415v__;
}

static inline __attribute__((always_inline)) int alloc__temp508v(uint64_t size, char** __temp1332v, uint64_t* __temp1333v, uint64_t* __temp1334v) {
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
  *__temp1332v=__temp513v__unsafe_ptr;
  *__temp1333v=__temp513v__unsafe_size;
  *__temp1334v=__temp513v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp618v(char** __temp1335v, uint64_t* __temp1336v, uint64_t* __temp1337v, char** __temp1338v, uint64_t* __temp1339v, uint64_t* __temp1340v, uint64_t* __temp1341v) {
  char* buf__unsafe_ptr=*__temp1335v;
  uint64_t buf__unsafe_size=*__temp1336v;
  uint64_t buf__unsafe_align=*__temp1337v;
  uint64_t __temp619v=0;
  uint64_t __temp620v=0;
  uint64_t pos=0;
  __temp619v=0;
  __temp620v=__temp619v;
  pos=__temp620v;
  goto __temp_return;
  __temp_return:
  *__temp1335v=buf__unsafe_ptr;
  *__temp1336v=buf__unsafe_size;
  *__temp1337v=buf__unsafe_align;
  *__temp1338v=buf__unsafe_ptr;
  *__temp1339v=buf__unsafe_size;
  *__temp1340v=buf__unsafe_align;
  *__temp1341v=pos;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1342v) {
  goto __temp_return;
  __temp_return:
  *__temp1342v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp405v(uint64_t to, uint64_t* __temp1343v, uint64_t* __temp1344v) {
  int __temp406v=0;
  uint64_t __temp407v=0;
  uint64_t _from=0;
  uint64_t __temp408v=0;
  uint64_t from=0;
  __temp407v=0;
  _from=__temp407v;
  __temp408v=_from;
  from=__temp408v;
  goto __temp_return;
  __temp_return:
  *__temp1343v=from;
  *__temp1344v=to;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1345v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1345v=z;
}

static inline __attribute__((always_inline)) int next__temp409v(uint64_t* __temp1346v, uint64_t r__to, uint64_t* __temp1347v) {
  uint64_t r__from=*__temp1346v;
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
  *__temp1346v=r__from;
  *__temp1347v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp1193v(uint16_t x, uint64_t* __temp1348v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1348v=value;
}

static inline __attribute__((always_inline)) void str__temp547v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1349v, uint64_t* __temp1350v, uint64_t* __temp1351v, char* __temp1352v) {
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
  *__temp1349v=__temp548v__unsafe_ptr;
  *__temp1350v=__temp548v__dat__pos;
  *__temp1351v=__temp548v__dat__length;
  *__temp1352v=__temp548v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1203v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1353v, uint64_t* __temp1354v, uint64_t* __temp1355v, char* __temp1356v) {
  uint64_t __temp1204v__=0;
  uint64_t __temp1205v__=0;
  char* __temp1206v__unsafe_ptr=0;
  uint64_t __temp1206v__dat__pos=0;
  uint64_t __temp1206v__dat__length=0;
  char __temp1206v__dat__first=0;
  nat__temp1193v(m__dat__pos,&__temp1204v__);
  nat__temp1193v(m__dat__length,&__temp1205v__);
  str__temp547v(m__unsafe_ptr,__temp1204v__,__temp1205v__,&__temp1206v__unsafe_ptr,&__temp1206v__dat__pos,&__temp1206v__dat__length,&__temp1206v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1353v=__temp1206v__unsafe_ptr;
  *__temp1354v=__temp1206v__dat__pos;
  *__temp1355v=__temp1206v__dat__length;
  *__temp1356v=__temp1206v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp574v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1357v, uint64_t* __temp1358v, uint64_t* __temp1359v, char* __temp1360v) {
  goto __temp_return;
  __temp_return:
  *__temp1357v=other__unsafe_ptr;
  *__temp1358v=other__dat__pos;
  *__temp1359v=other__dat__length;
  *__temp1360v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp585v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1361v) {
  goto __temp_return;
  __temp_return:
  *__temp1361v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp640v(char** __temp1362v, uint64_t* __temp1363v, uint64_t* __temp1364v, uint64_t* __temp1365v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1366v, uint64_t* __temp1367v, uint64_t* __temp1368v, char* __temp1369v) {
  char* buf__unsafe_ptr=*__temp1362v;
  uint64_t buf__unsafe_size=*__temp1363v;
  uint64_t buf__unsafe_align=*__temp1364v;
  uint64_t pos=*__temp1365v;
  char* __temp641v__unsafe_ptr=0;
  uint64_t __temp641v__dat__pos=0;
  uint64_t __temp641v__dat__length=0;
  char __temp641v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v__=0;
  uint64_t next_pos=0;
  uint64_t __temp644v__=0;
  char __temp645v__=0;
  uint64_t __temp646v=0;
  uint64_t __temp647v__=0;
  uint64_t prev_pos=0;
  char* __temp648v__unsafe_ptr=0;
  uint64_t __temp648v__dat__pos=0;
  uint64_t __temp648v__dat__length=0;
  char __temp648v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp574v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp641v__unsafe_ptr,&__temp641v__dat__pos,&__temp641v__dat__length,&__temp641v__dat__first);
  other__unsafe_ptr=__temp641v__unsafe_ptr;
  other__dat__pos=__temp641v__dat__pos;
  other__dat__length=__temp641v__dat__length;
  other__dat__first=__temp641v__dat__first;
  len__temp585v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp642v__);
  add__temp113v(pos,__temp642v__,&__temp643v__);
  next_pos=__temp643v__;
  len__temp507v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp644v__);
  gt__temp209v(next_pos,__temp644v__,&__temp645v__);
  if(__temp645v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp646v=0;
  add__temp113v(pos,__temp646v,&__temp647v__);
  prev_pos=__temp647v__;
  pos=next_pos;
  str__temp549v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp648v__unsafe_ptr,&__temp648v__dat__pos,&__temp648v__dat__length,&__temp648v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1362v=buf__unsafe_ptr;
  *__temp1363v=buf__unsafe_size;
  *__temp1364v=buf__unsafe_align;
  *__temp1365v=pos;
  *__temp1366v=__temp648v__unsafe_ptr;
  *__temp1367v=__temp648v__dat__pos;
  *__temp1368v=__temp648v__dat__length;
  *__temp1369v=__temp648v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp649v(char** __temp1370v, uint64_t* __temp1371v, uint64_t* __temp1372v, uint64_t* __temp1373v, const char* _other, char** __temp1374v, uint64_t* __temp1375v, uint64_t* __temp1376v, char* __temp1377v) {
  char* buf__unsafe_ptr=*__temp1370v;
  uint64_t buf__unsafe_size=*__temp1371v;
  uint64_t buf__unsafe_align=*__temp1372v;
  uint64_t pos=*__temp1373v;
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
  *__temp1370v=buf__unsafe_ptr;
  *__temp1371v=buf__unsafe_size;
  *__temp1372v=buf__unsafe_align;
  *__temp1373v=pos;
  *__temp1374v=__temp657v__unsafe_ptr;
  *__temp1375v=__temp657v__dat__pos;
  *__temp1376v=__temp657v__dat__length;
  *__temp1377v=__temp657v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1218v(char** __temp1378v, uint64_t* __temp1379v, uint64_t* __temp1380v, char** __temp1381v, uint64_t* __temp1382v, uint64_t* __temp1383v, char* __temp1384v) {
  char* buff__unsafe_ptr=*__temp1378v;
  uint64_t buff__unsafe_size=*__temp1379v;
  uint64_t buff__unsafe_align=*__temp1380v;
  uint64_t __temp1219v=0;
  uint64_t __temp1220v__=0;
  char* __temp1221v__unsafe_ptr=0;
  uint64_t __temp1221v__unsafe_size=0;
  uint64_t __temp1221v__unsafe_align=0;
  char __temp1222v____temp514v____temp457v__=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* __temp1224v__buf__unsafe_ptr=0;
  uint64_t __temp1224v__buf__unsafe_size=0;
  uint64_t __temp1224v__buf__unsafe_align=0;
  uint64_t __temp1224v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1225v__=0;
  uint64_t __temp1226v__from=0;
  uint64_t __temp1226v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1227v=0;
  uint64_t __temp1228v__=0;
  uint64_t i=0;
  char* __temp1229v__=0;
  char* __temp1230v__unsafe_ptr=0;
  uint16_t __temp1230v__dat__pos=0;
  uint16_t __temp1230v__dat__length=0;
  char* __temp1231v__unsafe_ptr=0;
  uint64_t __temp1231v__dat__pos=0;
  uint64_t __temp1231v__dat__length=0;
  char __temp1231v__dat__first=0;
  char* __temp1232v__unsafe_ptr=0;
  uint64_t __temp1232v__dat__pos=0;
  uint64_t __temp1232v__dat__length=0;
  char __temp1232v__dat__first=0;
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__dat__pos=0;
  uint64_t __temp1234v__dat__length=0;
  char __temp1234v__dat__first=0;
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__dat__pos=0;
  uint64_t __temp1235v__dat__length=0;
  char __temp1235v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1219v=4;
  KB__temp413v(__temp1219v,&__temp1220v__);
  __temp_errcode=alloc__temp508v(__temp1220v__,&__temp1221v__unsafe_ptr,&__temp1221v__unsafe_size,&__temp1221v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1223v__unsafe_ptr=__temp1221v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1221v__unsafe_size;
  __temp1223v__unsafe_align=__temp1221v__unsafe_align;
  bufpos__temp618v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,&__temp1224v__buf__unsafe_ptr,&__temp1224v__buf__unsafe_size,&__temp1224v__buf__unsafe_align,&__temp1224v__pos);
  mem__buf__unsafe_ptr=__temp1224v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1224v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1224v__buf__unsafe_align;
  mem__pos=__temp1224v__pos;
  len__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1225v__);
  range__temp405v(__temp1225v__,&__temp1226v__from,&__temp1226v__to);
  iter__from=__temp1226v__from;
  iter__to=__temp1226v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp409v(&iter__from,iter__to,&__temp1228v__);
  __temp1227v=__temp_complain;
  i=__temp1228v__;
  __temp1227v=__temp1227v==0;
  if(!__temp1227v){
  break;
  }
  __temp_errcode=get__temp503v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__unsafe_ptr,__temp1229v__,8);
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__dat__pos,__temp1229v__+8,2);
  if(!__temp1229v__){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__dat__length,__temp1229v__+10,2);
  unpack__temp1203v(__temp1230v__unsafe_ptr,__temp1230v__dat__pos,__temp1230v__dat__length,&__temp1231v__unsafe_ptr,&__temp1231v__dat__pos,&__temp1231v__dat__length,&__temp1231v__dat__first);
  __temp_errcode=copy__temp640v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1231v__unsafe_ptr,__temp1231v__dat__pos,__temp1231v__dat__length,__temp1231v__dat__first,&__temp1232v__unsafe_ptr,&__temp1232v__dat__pos,&__temp1232v__dat__length,&__temp1232v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp649v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1233v,&__temp1234v__unsafe_ptr,&__temp1234v__dat__pos,&__temp1234v__dat__length,&__temp1234v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp575v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1235v__unsafe_ptr,&__temp1235v__dat__pos,&__temp1235v__dat__length,&__temp1235v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp401v(__temp1235v__unsafe_ptr,&__temp1222v____temp514v____temp457v__);
  if(__temp1222v____temp514v____temp457v__){
  __temp1221v__unsafe_size=0;
  __temp1221v__unsafe_size=__temp1221v__unsafe_size;
  free__temp431v(&__temp1235v__unsafe_ptr);
  }
  __temp_return:
  *__temp1378v=buff__unsafe_ptr;
  *__temp1379v=buff__unsafe_size;
  *__temp1380v=buff__unsafe_align;
  *__temp1381v=__temp1235v__unsafe_ptr;
  *__temp1382v=__temp1235v__dat__pos;
  *__temp1383v=__temp1235v__dat__length;
  *__temp1384v=__temp1235v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(uint64_t value, const char* endl) {
  int __temp367v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp680v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp681v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1236v() {
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__unsafe_size=0;
  uint64_t __temp1237v__unsafe_align=0;
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  uint64_t __temp1239v=0;
  char* __temp1240v__unsafe_ptr=0;
  uint64_t __temp1240v__unsafe_size=0;
  uint64_t __temp1240v__unsafe_align=0;
  char __temp1241v____temp457v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__=0;
  char* __temp1245v__unsafe_ptr=0;
  uint16_t __temp1245v__dat__pos=0;
  uint16_t __temp1245v__dat__length=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__=0;
  char* __temp1249v__unsafe_ptr=0;
  uint16_t __temp1249v__dat__pos=0;
  uint16_t __temp1249v__dat__length=0;
  uint64_t __temp1250v=0;
  char* __temp1251v__=0;
  char* __temp1253v__unsafe_ptr=0;
  uint16_t __temp1253v__dat__pos=0;
  uint16_t __temp1253v__dat__length=0;
  uint64_t __temp1254v=0;
  char* __temp1255v__=0;
  char* __temp1257v__unsafe_ptr=0;
  uint16_t __temp1257v__dat__pos=0;
  uint16_t __temp1257v__dat__length=0;
  uint64_t __temp1258v=0;
  char* __temp1259v__=0;
  char* __temp1261v__unsafe_ptr=0;
  uint16_t __temp1261v__dat__pos=0;
  uint16_t __temp1261v__dat__length=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__dat__pos=0;
  uint64_t __temp1264v__dat__length=0;
  char __temp1264v__dat__first=0;
  char __temp1265v____temp1222v____temp514v____temp457v__=0;
  uint64_t __temp1265v____temp1221v__unsafe_size=0;
  char* __temp1266v__unsafe_ptr=0;
  uint16_t __temp1266v__dat__pos=0;
  uint16_t __temp1266v__dat__length=0;
  uint64_t __temp1267v__=0;
  uint64_t __temp1268v__from=0;
  uint64_t __temp1268v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1269v=0;
  uint64_t __temp1270v__=0;
  uint64_t j=0;
  char* __temp1272v__=0;
  char* __temp1273v__unsafe_ptr=0;
  uint16_t __temp1273v__dat__pos=0;
  uint16_t __temp1273v__dat__length=0;
  char* __temp1274v__unsafe_ptr=0;
  uint64_t __temp1274v__dat__pos=0;
  uint64_t __temp1274v__dat__length=0;
  char __temp1274v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1216v(&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  __temp1238v__unsafe_ptr=__temp1237v__unsafe_ptr;
  __temp1238v__unsafe_size=__temp1237v__unsafe_size;
  __temp1238v__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=6;
  __temp_errcode=alloc__temp455v(&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align,__temp1239v,&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1240v__unsafe_ptr;
  buff__unsafe_size=__temp1240v__unsafe_size;
  buff__unsafe_align=__temp1240v__unsafe_align;
  __temp1242v=0;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1242v,&__temp1243v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1200v(__temp1244v,&__temp1245v__unsafe_ptr,&__temp1245v__dat__pos,&__temp1245v__dat__length);
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
  memcpy(__temp1243v__+8,&__temp1245v__dat__pos,2);
  if(!__temp1243v__){
  goto __temp_failure;
  }
  memcpy(__temp1243v__+10,&__temp1245v__dat__length,2);
  __temp1246v=1;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1246v,&__temp1247v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1200v(__temp1248v,&__temp1249v__unsafe_ptr,&__temp1249v__dat__pos,&__temp1249v__dat__length);
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
  memcpy(__temp1247v__+8,&__temp1249v__dat__pos,2);
  if(!__temp1247v__){
  goto __temp_failure;
  }
  memcpy(__temp1247v__+10,&__temp1249v__dat__length,2);
  __temp1250v=2;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1250v,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1200v(__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__dat__pos,&__temp1253v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__,&__temp1253v__unsafe_ptr,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+8,&__temp1253v__dat__pos,2);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+10,&__temp1253v__dat__length,2);
  __temp1254v=3;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1254v,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1200v(__temp1256v,&__temp1257v__unsafe_ptr,&__temp1257v__dat__pos,&__temp1257v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1255v__){
  goto __temp_failure;
  }
  memcpy(__temp1255v__,&__temp1257v__unsafe_ptr,8);
  if(!__temp1255v__){
  goto __temp_failure;
  }
  memcpy(__temp1255v__+8,&__temp1257v__dat__pos,2);
  if(!__temp1255v__){
  goto __temp_failure;
  }
  memcpy(__temp1255v__+10,&__temp1257v__dat__length,2);
  __temp1258v=4;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1200v(__temp1260v,&__temp1261v__unsafe_ptr,&__temp1261v__dat__pos,&__temp1261v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1259v__){
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1261v__unsafe_ptr,8);
  if(!__temp1259v__){
  goto __temp_failure;
  }
  memcpy(__temp1259v__+8,&__temp1261v__dat__pos,2);
  if(!__temp1259v__){
  goto __temp_failure;
  }
  memcpy(__temp1259v__+10,&__temp1261v__dat__length,2);
  __temp1262v=5;
  __temp_errcode=mutget__temp499v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1218v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1264v__unsafe_ptr,&__temp1264v__dat__pos,&__temp1264v__dat__length,&__temp1264v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1197v(__temp1264v__unsafe_ptr,__temp1264v__dat__pos,__temp1264v__dat__length,__temp1264v__dat__first,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__,&__temp1266v__unsafe_ptr,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+8,&__temp1266v__dat__pos,2);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+10,&__temp1266v__dat__length,2);
  len__temp507v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1267v__);
  range__temp405v(__temp1267v__,&__temp1268v__from,&__temp1268v__to);
  full_iter__from=__temp1268v__from;
  full_iter__to=__temp1268v__to;
  while(1){
  __temp_complain=next__temp409v(&full_iter__from,full_iter__to,&__temp1270v__);
  __temp1269v=__temp_complain;
  j=__temp1270v__;
  __temp1269v=__temp1269v==0;
  if(!__temp1269v){
  break;
  }
  print__temp366v(j,__temp1233v);
  __temp_errcode=get__temp503v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1272v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1272v__){
  goto __temp_failure;
  }
  memcpy(&__temp1273v__unsafe_ptr,__temp1272v__,8);
  if(!__temp1272v__){
  goto __temp_failure;
  }
  memcpy(&__temp1273v__dat__pos,__temp1272v__+8,2);
  if(!__temp1272v__){
  goto __temp_failure;
  }
  memcpy(&__temp1273v__dat__length,__temp1272v__+10,2);
  unpack__temp1203v(__temp1273v__unsafe_ptr,__temp1273v__dat__pos,__temp1273v__dat__length,&__temp1274v__unsafe_ptr,&__temp1274v__dat__pos,&__temp1274v__dat__length,&__temp1274v__dat__first);
  print__temp680v(__temp1274v__unsafe_ptr,__temp1274v__dat__pos,__temp1274v__dat__length,__temp1274v__dat__first);
  }
  
  __temp_failure:exists__temp401v(__temp1264v__unsafe_ptr,&__temp1265v____temp1222v____temp514v____temp457v__);
  if(__temp1265v____temp1222v____temp514v____temp457v__){
  __temp1265v____temp1221v__unsafe_size=0;
  __temp1265v____temp1221v__unsafe_size=__temp1265v____temp1221v__unsafe_size;
  free__temp431v(&__temp1264v__unsafe_ptr);
  }
  exists__temp401v(__temp1240v__unsafe_ptr,&__temp1241v____temp457v__);
  if(__temp1241v____temp457v__){
  __temp1240v__unsafe_size=0;
  __temp1240v__unsafe_size=__temp1240v__unsafe_size;
  free__temp431v(&__temp1240v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1236v();return 0;}