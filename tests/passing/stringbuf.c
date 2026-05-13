#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1224v="name      ";
const char* const __temp1247v="it's a me";
const char* const __temp1249v="mario";
const char* const __temp1222v="-------------------";
const char* const __temp794v="";
const char* const __temp364v="\n";
const char* const __temp1227v="surnname  ";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
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

static inline __attribute__((always_inline)) void Person__temp_buffer__buffer__temp1232v(char** __temp1272v, uint64_t* __temp1273v, uint64_t* __temp1274v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=50;
  *__temp1272v=unsafe_ptr;
  *__temp1273v=unsafe_size;
  *__temp1274v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1275v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1275v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1276v) {
  char* allocated=*__temp1276v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1276v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1277v) {
  int value=0;
  *__temp1277v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1278v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1279v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1280v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1281v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1282v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1283v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1283v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1284v, uint64_t* __temp1285v, uint64_t* __temp1286v, uint64_t size, char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v) {
  char* buffer__unsafe_ptr=*__temp1284v;
  uint64_t buffer__unsafe_size=*__temp1285v;
  uint64_t buffer__unsafe_align=*__temp1286v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_align;
  *__temp1287v=buffer__unsafe_ptr;
  *__temp1288v=buffer__unsafe_size;
  *__temp1289v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp442v(uint64_t x, uint64_t* __temp1290v) {
  uint64_t __temp443v=0;
  uint64_t __temp444v__=0;
  __temp443v=1024;
  mul__temp193v(x,__temp443v,&__temp444v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp444v__;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1291v=unsafe_ptr;
  *__temp1292v=unsafe_size;
  *__temp1293v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp537v(uint64_t size, char** __temp1294v, uint64_t* __temp1295v, uint64_t* __temp1296v) {
  char* __temp540v__unsafe_ptr=0;
  uint64_t __temp540v__unsafe_size=0;
  uint64_t __temp540v__unsafe_align=0;
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char __temp543v____temp468v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  __temp541v__unsafe_ptr=__temp540v__unsafe_ptr;
  __temp541v__unsafe_size=__temp540v__unsafe_size;
  __temp541v__unsafe_align=__temp540v__unsafe_align;
  __temp_errcode=alloc__temp466v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align,size,&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp542v__unsafe_ptr,&__temp543v____temp468v__);
  if(__temp543v____temp468v__){
  __temp542v__unsafe_size=0;
  __temp542v__unsafe_size=__temp542v__unsafe_size;
  free__temp460v(&__temp542v__unsafe_ptr);
  }
  __temp_return:
  *__temp1294v=__temp542v__unsafe_ptr;
  *__temp1295v=__temp542v__unsafe_size;
  *__temp1296v=__temp542v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp651v(char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, char** __temp1300v, uint64_t* __temp1301v, uint64_t* __temp1302v, uint64_t* __temp1303v) {
  char* buf__unsafe_ptr=*__temp1297v;
  uint64_t buf__unsafe_size=*__temp1298v;
  uint64_t buf__unsafe_align=*__temp1299v;
  uint64_t __temp652v=0;
  uint64_t __temp653v=0;
  uint64_t pos=0;
  __temp652v=0;
  __temp653v=__temp652v;
  pos=__temp653v;
  goto __temp_return;
  __temp_return:
  *__temp1297v=buf__unsafe_ptr;
  *__temp1298v=buf__unsafe_size;
  *__temp1299v=buf__unsafe_align;
  *__temp1300v=buf__unsafe_ptr;
  *__temp1301v=buf__unsafe_size;
  *__temp1302v=buf__unsafe_align;
  *__temp1303v=pos;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1304v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1305v) {
  *__temp1305v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1306v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1306v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, uint64_t i, char** __temp1310v) {
  char* buffer__unsafe_ptr=*__temp1307v;
  uint64_t buffer__unsafe_size=*__temp1308v;
  uint64_t buffer__unsafe_align=*__temp1309v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1307v=buffer__unsafe_ptr;
  *__temp1308v=buffer__unsafe_size;
  *__temp1309v=buffer__unsafe_align;
  *__temp1310v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1311v) {
  *__temp1311v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1312v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1313v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1313v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1314v, uint64_t* __temp1315v, uint64_t* __temp1316v, char* __temp1317v) {
  goto __temp_return;
  __temp_return:
  *__temp1314v=unsafe_ptr;
  *__temp1315v=dat__pos;
  *__temp1316v=dat__length;
  *__temp1317v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1318v, uint64_t* __temp1319v, uint64_t* __temp1320v, char* __temp1321v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1318v=__temp579v__unsafe_ptr;
  *__temp1319v=__temp579v__dat__pos;
  *__temp1320v=__temp579v__dat__length;
  *__temp1321v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1322v, uint64_t* __temp1323v, uint64_t* __temp1324v, char* __temp1325v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1322v=__temp609v__unsafe_ptr;
  *__temp1323v=__temp609v__dat__pos;
  *__temp1324v=__temp609v__dat__length;
  *__temp1325v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1326v, uint64_t* __temp1327v, uint64_t* __temp1328v, char* __temp1329v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1326v=__temp617v__unsafe_ptr;
  *__temp1327v=__temp617v__dat__pos;
  *__temp1328v=__temp617v__dat__length;
  *__temp1329v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1330v) {
  goto __temp_return;
  __temp_return:
  *__temp1330v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1331v) {
  goto __temp_return;
  __temp_return:
  *__temp1331v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1332v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1332v=z;
}

int copy__temp682v(char** __temp1333v, uint64_t* __temp1334v, uint64_t* __temp1335v, uint64_t* __temp1336v, const char* _other, char** __temp1337v, uint64_t* __temp1338v, uint64_t* __temp1339v, char* __temp1340v) {
  char* buf__unsafe_ptr=*__temp1333v;
  uint64_t buf__unsafe_size=*__temp1334v;
  uint64_t buf__unsafe_align=*__temp1335v;
  uint64_t pos=*__temp1336v;
  char* __temp683v__unsafe_ptr=0;
  uint64_t __temp683v__dat__pos=0;
  uint64_t __temp683v__dat__length=0;
  char __temp683v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp684v__=0;
  uint64_t __temp685v__=0;
  uint64_t next_pos=0;
  uint64_t __temp686v__=0;
  char __temp687v__=0;
  uint64_t __temp688v=0;
  uint64_t __temp689v__=0;
  uint64_t prev_pos=0;
  char* __temp690v__unsafe_ptr=0;
  uint64_t __temp690v__dat__pos=0;
  uint64_t __temp690v__dat__length=0;
  char __temp690v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(_other,&__temp683v__unsafe_ptr,&__temp683v__dat__pos,&__temp683v__dat__length,&__temp683v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp683v__unsafe_ptr;
  other__dat__pos=__temp683v__dat__pos;
  other__dat__length=__temp683v__dat__length;
  other__dat__first=__temp683v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp684v__);
  add__temp169v(pos,__temp684v__,&__temp685v__);
  next_pos=__temp685v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp686v__);
  gt__temp270v(next_pos,__temp686v__,&__temp687v__);
  if(__temp687v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp688v=0;
  add__temp169v(pos,__temp688v,&__temp689v__);
  prev_pos=__temp689v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp690v__unsafe_ptr,&__temp690v__dat__pos,&__temp690v__dat__length,&__temp690v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1333v=buf__unsafe_ptr;
  *__temp1334v=buf__unsafe_size;
  *__temp1335v=buf__unsafe_align;
  *__temp1336v=pos;
  *__temp1337v=__temp690v__unsafe_ptr;
  *__temp1338v=__temp690v__dat__pos;
  *__temp1339v=__temp690v__dat__length;
  *__temp1340v=__temp690v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1219v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1341v, uint64_t* __temp1342v, uint64_t* __temp1343v, char* __temp1344v, char** __temp1345v, uint64_t* __temp1346v, uint64_t* __temp1347v, char* __temp1348v) {
  goto __temp_return;
  __temp_return:
  *__temp1341v=name__unsafe_ptr;
  *__temp1342v=name__dat__pos;
  *__temp1343v=name__dat__length;
  *__temp1344v=name__dat__first;
  *__temp1345v=surname__unsafe_ptr;
  *__temp1346v=surname__dat__pos;
  *__temp1347v=surname__dat__length;
  *__temp1348v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp360v(const char* value, const char* endl) {
  int __temp361v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1221v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp362v(__temp1222v);
  print__temp360v(__temp1224v,__temp794v);
  print__temp715v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp360v(__temp1227v,__temp794v);
  print__temp715v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp362v(__temp1222v);
}

static inline __attribute__((always_inline)) int test__temp1231v(char** __temp1349v, uint64_t* __temp1350v, uint64_t* __temp1351v, uint64_t* __temp1352v, char** __temp1353v, uint64_t* __temp1354v, uint64_t* __temp1355v) {
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__unsafe_size=0;
  uint64_t __temp1234v__unsafe_align=0;
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  uint64_t __temp1236v=0;
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__unsafe_size=0;
  uint64_t __temp1237v__unsafe_align=0;
  char __temp1238v____temp468v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint64_t people__unsafe_align=0;
  uint64_t __temp1239v=0;
  uint64_t __temp1240v__=0;
  char* __temp1241v__unsafe_ptr=0;
  uint64_t __temp1241v__unsafe_size=0;
  uint64_t __temp1241v__unsafe_align=0;
  char __temp1242v____temp543v____temp468v__=0;
  char* __temp1243v__buf__unsafe_ptr=0;
  uint64_t __temp1243v__buf__unsafe_size=0;
  uint64_t __temp1243v__buf__unsafe_align=0;
  uint64_t __temp1243v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1244v=0;
  char* __temp1245v__=0;
  uint64_t __temp1246v=0;
  char* __temp1248v__unsafe_ptr=0;
  uint64_t __temp1248v__dat__pos=0;
  uint64_t __temp1248v__dat__length=0;
  char __temp1248v__dat__first=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__dat__pos=0;
  uint64_t __temp1250v__dat__length=0;
  char __temp1250v__dat__first=0;
  char* __temp1251v__name__unsafe_ptr=0;
  uint64_t __temp1251v__name__dat__pos=0;
  uint64_t __temp1251v__name__dat__length=0;
  char __temp1251v__name__dat__first=0;
  char* __temp1251v__surname__unsafe_ptr=0;
  uint64_t __temp1251v__surname__dat__pos=0;
  uint64_t __temp1251v__surname__dat__length=0;
  char __temp1251v__surname__dat__first=0;
  uint64_t __temp1252v=0;
  char* __temp1253v__=0;
  char* __temp1254v__name__unsafe_ptr=0;
  uint64_t __temp1254v__name__dat__pos=0;
  uint64_t __temp1254v__name__dat__length=0;
  char __temp1254v__name__dat__first=0;
  char* __temp1254v__surname__unsafe_ptr=0;
  uint64_t __temp1254v__surname__dat__pos=0;
  uint64_t __temp1254v__surname__dat__length=0;
  char __temp1254v__surname__dat__first=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint64_t __temp1256v__unsafe_align=0;
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__unsafe_size=0;
  uint64_t __temp1260v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint64_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person__temp_buffer__buffer__temp1232v(&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align);
  __temp1235v__unsafe_ptr=__temp1234v__unsafe_ptr;
  __temp1235v__unsafe_size=__temp1234v__unsafe_size;
  __temp1235v__unsafe_align=__temp1234v__unsafe_align;
  __temp1236v=4;
  __temp_errcode=alloc__temp466v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align,__temp1236v,&__temp1237v__unsafe_ptr,&__temp1237v__unsafe_size,&__temp1237v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1237v__unsafe_ptr;
  people__unsafe_size=__temp1237v__unsafe_size;
  people__unsafe_align=__temp1237v__unsafe_align;
  __temp1239v=4;
  KB__temp442v(__temp1239v,&__temp1240v__);
  __temp_errcode=alloc__temp537v(__temp1240v__,&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp651v(&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align,&__temp1243v__buf__unsafe_ptr,&__temp1243v__buf__unsafe_size,&__temp1243v__buf__unsafe_align,&__temp1243v__pos);
  buf__buf__unsafe_ptr=__temp1243v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1243v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1243v__buf__unsafe_align;
  buf__pos=__temp1243v__pos;
  __temp1244v=0;
  __temp_errcode=mutget__temp528v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_align,__temp1244v,&__temp1245v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1246v=0;
  __temp_errcode=copy__temp682v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1247v,&__temp1248v__unsafe_ptr,&__temp1248v__dat__pos,&__temp1248v__dat__length,&__temp1248v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp682v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1249v,&__temp1250v__unsafe_ptr,&__temp1250v__dat__pos,&__temp1250v__dat__length,&__temp1250v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1219v(__temp1246v,__temp1248v__unsafe_ptr,__temp1248v__dat__pos,__temp1248v__dat__length,__temp1248v__dat__first,__temp1250v__unsafe_ptr,__temp1250v__dat__pos,__temp1250v__dat__length,__temp1250v__dat__first,&__temp1251v__name__unsafe_ptr,&__temp1251v__name__dat__pos,&__temp1251v__name__dat__length,&__temp1251v__name__dat__first,&__temp1251v__surname__unsafe_ptr,&__temp1251v__surname__dat__pos,&__temp1251v__surname__dat__length,&__temp1251v__surname__dat__first);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__,&__temp1251v__name__unsafe_ptr,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+8,&__temp1251v__name__dat__pos,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+16,&__temp1251v__name__dat__length,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+24,&__temp1251v__name__dat__first,1);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+25,&__temp1251v__surname__unsafe_ptr,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+33,&__temp1251v__surname__dat__pos,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+41,&__temp1251v__surname__dat__length,8);
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(__temp1245v__+49,&__temp1251v__surname__dat__first,1);
  __temp1252v=0;
  __temp_errcode=get__temp532v(people__unsafe_ptr,people__unsafe_size,people__unsafe_align,__temp1252v,&__temp1253v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__name__unsafe_ptr,__temp1253v__,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__name__dat__pos,__temp1253v__+8,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__name__dat__length,__temp1253v__+16,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__name__dat__first,__temp1253v__+24,1);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__surname__unsafe_ptr,__temp1253v__+25,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__surname__dat__pos,__temp1253v__+33,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__surname__dat__length,__temp1253v__+41,8);
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__surname__dat__first,__temp1253v__+49,1);
  print__temp1221v(__temp1254v__name__unsafe_ptr,__temp1254v__name__dat__pos,__temp1254v__name__dat__length,__temp1254v__name__dat__first,__temp1254v__surname__unsafe_ptr,__temp1254v__surname__dat__pos,__temp1254v__surname__dat__length,__temp1254v__surname__dat__first);
  __temp1256v__unsafe_ptr=people__unsafe_ptr+0;
  __temp1256v__unsafe_size=people__unsafe_size;
  __temp1256v__unsafe_align=people__unsafe_align;
  __temp1260v__unsafe_ptr=__temp1256v__unsafe_ptr+8;
  __temp1260v__unsafe_size=__temp1256v__unsafe_size;
  __temp1260v__unsafe_align=__temp1256v__unsafe_align;
  dat__unsafe_ptr=__temp1260v__unsafe_ptr;
  dat__unsafe_size=__temp1260v__unsafe_size;
  dat__unsafe_align=__temp1260v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buf__buf__unsafe_ptr,&__temp1242v____temp543v____temp468v__);
  if(__temp1242v____temp543v____temp468v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp460v(&buf__buf__unsafe_ptr);
  }
  exists__temp411v(dat__unsafe_ptr,&__temp1238v____temp468v__);
  if(__temp1238v____temp468v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp460v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1349v=buf__buf__unsafe_ptr;
  *__temp1350v=buf__buf__unsafe_size;
  *__temp1351v=buf__buf__unsafe_align;
  *__temp1352v=buf__pos;
  *__temp1353v=dat__unsafe_ptr;
  *__temp1354v=dat__unsafe_size;
  *__temp1355v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1264v() {
  char* __temp1265v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1265v__buf__buf__unsafe_size=0;
  uint64_t __temp1265v__buf__buf__unsafe_align=0;
  uint64_t __temp1265v__buf__pos=0;
  char* __temp1265v__dat__unsafe_ptr=0;
  uint64_t __temp1265v__dat__unsafe_size=0;
  uint64_t __temp1265v__dat__unsafe_align=0;
  char __temp1266v____temp1238v____temp468v__=0;
  char __temp1266v____temp1242v____temp543v____temp468v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint64_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint64_t t__dat__unsafe_align=0;
  uint64_t __temp1267v=0;
  char* __temp1268v__=0;
  uint64_t __temp1269v__pos=0;
  uint64_t __temp1269v__length=0;
  char __temp1269v__first=0;
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__dat__pos=0;
  uint64_t __temp1270v__dat__length=0;
  char __temp1270v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1231v(&__temp1265v__buf__buf__unsafe_ptr,&__temp1265v__buf__buf__unsafe_size,&__temp1265v__buf__buf__unsafe_align,&__temp1265v__buf__pos,&__temp1265v__dat__unsafe_ptr,&__temp1265v__dat__unsafe_size,&__temp1265v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1265v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1265v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_align=__temp1265v__buf__buf__unsafe_align;
  t__buf__pos=__temp1265v__buf__pos;
  t__dat__unsafe_ptr=__temp1265v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1265v__dat__unsafe_size;
  t__dat__unsafe_align=__temp1265v__dat__unsafe_align;
  __temp1267v=0;
  __temp_errcode=get__temp532v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_align,__temp1267v,&__temp1268v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1268v__){
  goto __temp_failure;
  }
  memcpy(&__temp1269v__pos,__temp1268v__,8);
  if(!__temp1268v__){
  goto __temp_failure;
  }
  memcpy(&__temp1269v__length,__temp1268v__+8,8);
  if(!__temp1268v__){
  goto __temp_failure;
  }
  memcpy(&__temp1269v__first,__temp1268v__+16,1);
  str__temp578v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_align,__temp1269v__pos,__temp1269v__length,__temp1269v__first,&__temp1270v__unsafe_ptr,&__temp1270v__dat__pos,&__temp1270v__dat__length,&__temp1270v__dat__first);
  print__temp715v(__temp1270v__unsafe_ptr,__temp1270v__dat__pos,__temp1270v__dat__length,__temp1270v__dat__first);
  
  __temp_failure:exists__temp411v(__temp1265v__buf__buf__unsafe_ptr,&__temp1266v____temp1242v____temp543v____temp468v__);
  if(__temp1266v____temp1242v____temp543v____temp468v__){
  __temp1265v__buf__buf__unsafe_size=0;
  __temp1265v__buf__buf__unsafe_size=__temp1265v__buf__buf__unsafe_size;
  free__temp460v(&__temp1265v__buf__buf__unsafe_ptr);
  }
  exists__temp411v(__temp1265v__dat__unsafe_ptr,&__temp1266v____temp1238v____temp468v__);
  if(__temp1266v____temp1238v____temp468v__){
  __temp1265v__dat__unsafe_size=0;
  __temp1265v__dat__unsafe_size=__temp1265v__dat__unsafe_size;
  free__temp460v(&__temp1265v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1264v();return 0;}