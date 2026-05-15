#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1283v="my";
const char* const __temp1295v="manios";
const char* const __temp1291v="is";
const char* const __temp1287v="name";
const char* const __temp365v="\n";
const char* const __temp1279v="hi";
const char* const __temp1268v=" ";
static const char* __temp_all_errcodes[32] = {"noerr",
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
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1252v(char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=12;
  *__temp1311v=unsafe_ptr;
  *__temp1312v=unsafe_size;
  *__temp1313v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1314v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1315v) {
  char* allocated=*__temp1315v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1315v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1316v) {
  int value=0;
  *__temp1316v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1317v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1317v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp81v(uint64_t x, uint64_t y, int* __temp1318v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1318v=__temp83v__;
}

static inline __attribute__((always_inline)) void eq__temp107v(uint64_t x, uint64_t y, char* __temp1319v) {
  int __temp108v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp108v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) void neq__temp131v(uint64_t x, uint64_t y, char* __temp1320v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void mul__temp183v(uint64_t x, uint64_t y, uint64_t* __temp1321v) {
  int __temp184v__=0;
  uint64_t z=0;
  is_different__temp81v(x,y,&__temp184v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1321v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1322v) {
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
  *__temp1322v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1323v, uint64_t* __temp1324v, uint64_t* __temp1325v, uint64_t size, char** __temp1326v, uint64_t* __temp1327v, uint64_t* __temp1328v) {
  char* buffer__unsafe_ptr=*__temp1323v;
  uint64_t buffer__unsafe_size=*__temp1324v;
  uint64_t buffer__unsafe_align=*__temp1325v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp107v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp131v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp183v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp131v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp183v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1323v=buffer__unsafe_ptr;
  *__temp1324v=buffer__unsafe_size;
  *__temp1325v=buffer__unsafe_align;
  *__temp1326v=buffer__unsafe_ptr;
  *__temp1327v=buffer__unsafe_size;
  *__temp1328v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp308v(uint64_t x, uint64_t y, char* __temp1329v) {
  int __temp309v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp309v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1329v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1330v) {
  *__temp1330v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1331v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1331v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1332v, uint64_t* __temp1333v, uint64_t* __temp1334v, uint64_t i, char** __temp1335v) {
  char* buffer__unsafe_ptr=*__temp1332v;
  uint64_t buffer__unsafe_size=*__temp1333v;
  uint64_t buffer__unsafe_align=*__temp1334v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp308v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp183v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1332v=buffer__unsafe_ptr;
  *__temp1333v=buffer__unsafe_size;
  *__temp1334v=buffer__unsafe_align;
  *__temp1335v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1336v, uint64_t* __temp1337v, uint64_t* __temp1338v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1336v=unsafe_ptr;
  *__temp1337v=unsafe_size;
  *__temp1338v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1339v) {
  *__temp1339v=to;
}

static inline __attribute__((always_inline)) void add__temp159v(uint64_t x, uint64_t y, uint64_t* __temp1340v) {
  int __temp160v__=0;
  uint64_t z=0;
  is_different__temp81v(x,y,&__temp160v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1341v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp308v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp183v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1341v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1342v, uint64_t* __temp1343v, uint64_t* __temp1344v, char* __temp1345v) {
  goto __temp_return;
  __temp_return:
  *__temp1342v=unsafe_ptr;
  *__temp1343v=dat__pos;
  *__temp1344v=dat__length;
  *__temp1345v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1346v, uint64_t* __temp1347v, uint64_t* __temp1348v, char* __temp1349v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp131v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1346v=__temp582v__unsafe_ptr;
  *__temp1347v=__temp582v__dat__pos;
  *__temp1348v=__temp582v__dat__length;
  *__temp1349v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1350v, uint64_t* __temp1351v, uint64_t* __temp1352v, char* __temp1353v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp131v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1350v=__temp612v__unsafe_ptr;
  *__temp1351v=__temp612v__dat__pos;
  *__temp1352v=__temp612v__dat__length;
  *__temp1353v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1354v, uint64_t* __temp1355v, uint64_t* __temp1356v, char* __temp1357v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp159v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1354v=__temp620v__unsafe_ptr;
  *__temp1355v=__temp620v__dat__pos;
  *__temp1356v=__temp620v__dat__length;
  *__temp1357v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp260v(uint64_t x, uint64_t y, char* __temp1358v) {
  int __temp261v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp261v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1358v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1222v(uint64_t x, uint16_t* __temp1359v) {
  uint64_t __temp1223v=0;
  char __temp1224v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1223v=65535;
  gt__temp260v(x,__temp1223v,&__temp1224v__);
  if(__temp1224v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1359v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1230v(uint64_t _pos, uint64_t _length, uint16_t* __temp1360v, uint16_t* __temp1361v) {
  uint16_t __temp1231v__=0;
  uint16_t pos=0;
  uint16_t __temp1232v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1222v(_pos,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1231v__;
  __temp_errcode=nat16__temp1222v(_length,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1232v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1360v=pos;
  *__temp1361v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1233v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1362v, uint16_t* __temp1363v, uint16_t* __temp1364v) {
  char* unsafe_ptr=0;
  uint16_t __temp1234v__pos=0;
  uint16_t __temp1234v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1230v(s__dat__pos,s__dat__length,&__temp1234v__pos,&__temp1234v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1234v__pos;
  dat__length=__temp1234v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1362v=unsafe_ptr;
  *__temp1363v=dat__pos;
  *__temp1364v=dat__length;
  
  return __temp_errcode;
}

int str__temp1236v(const char* s, char** __temp1365v, uint16_t* __temp1366v, uint16_t* __temp1367v) {
  char* __temp1237v__unsafe_ptr=0;
  uint64_t __temp1237v__dat__pos=0;
  uint64_t __temp1237v__dat__length=0;
  char __temp1237v__dat__first=0;
  char* __temp1238v__unsafe_ptr=0;
  uint16_t __temp1238v__dat__pos=0;
  uint16_t __temp1238v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(s,&__temp1237v__unsafe_ptr,&__temp1237v__dat__pos,&__temp1237v__dat__length,&__temp1237v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1237v__unsafe_ptr,__temp1237v__dat__pos,__temp1237v__dat__length,__temp1237v__dat__first,&__temp1238v__unsafe_ptr,&__temp1238v__dat__pos,&__temp1238v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1365v=__temp1238v__unsafe_ptr;
  *__temp1366v=__temp1238v__dat__pos;
  *__temp1367v=__temp1238v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1368v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp183v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1368v=__temp445v__;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1369v, uint64_t* __temp1370v, uint64_t* __temp1371v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1369v=__temp543v__unsafe_ptr;
  *__temp1370v=__temp543v__unsafe_size;
  *__temp1371v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1372v, uint64_t* __temp1373v, uint64_t* __temp1374v, char** __temp1375v, uint64_t* __temp1376v, uint64_t* __temp1377v, uint64_t* __temp1378v) {
  char* buf__unsafe_ptr=*__temp1372v;
  uint64_t buf__unsafe_size=*__temp1373v;
  uint64_t buf__unsafe_align=*__temp1374v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1372v=buf__unsafe_ptr;
  *__temp1373v=buf__unsafe_size;
  *__temp1374v=buf__unsafe_align;
  *__temp1375v=buf__unsafe_ptr;
  *__temp1376v=buf__unsafe_size;
  *__temp1377v=buf__unsafe_align;
  *__temp1378v=pos;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1379v) {
  goto __temp_return;
  __temp_return:
  *__temp1379v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1380v, uint64_t* __temp1381v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1380v=from;
  *__temp1381v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1382v, uint64_t r__to, uint64_t* __temp1383v) {
  uint64_t r__from=*__temp1382v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp308v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp159v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1382v=r__from;
  *__temp1383v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp1229v(uint16_t x, uint64_t* __temp1384v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1384v=value;
}

static inline __attribute__((always_inline)) void str__temp577v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1385v, uint64_t* __temp1386v, uint64_t* __temp1387v, char* __temp1388v) {
  char* first_pos=0;
  char first=0;
  char* __temp578v__unsafe_ptr=0;
  uint64_t __temp578v__dat__pos=0;
  uint64_t __temp578v__dat__length=0;
  char __temp578v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp575v(unsafe_ptr,pos,length,first,&__temp578v__unsafe_ptr,&__temp578v__dat__pos,&__temp578v__dat__length,&__temp578v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1385v=__temp578v__unsafe_ptr;
  *__temp1386v=__temp578v__dat__pos;
  *__temp1387v=__temp578v__dat__length;
  *__temp1388v=__temp578v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1239v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1389v, uint64_t* __temp1390v, uint64_t* __temp1391v, char* __temp1392v) {
  uint64_t __temp1240v__=0;
  uint64_t __temp1241v__=0;
  char* __temp1242v__unsafe_ptr=0;
  uint64_t __temp1242v__dat__pos=0;
  uint64_t __temp1242v__dat__length=0;
  char __temp1242v__dat__first=0;
  nat__temp1229v(m__dat__pos,&__temp1240v__);
  nat__temp1229v(m__dat__length,&__temp1241v__);
  str__temp577v(m__unsafe_ptr,__temp1240v__,__temp1241v__,&__temp1242v__unsafe_ptr,&__temp1242v__dat__pos,&__temp1242v__dat__length,&__temp1242v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1389v=__temp1242v__unsafe_ptr;
  *__temp1390v=__temp1242v__dat__pos;
  *__temp1391v=__temp1242v__dat__length;
  *__temp1392v=__temp1242v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1393v, uint64_t* __temp1394v, uint64_t* __temp1395v, char* __temp1396v) {
  goto __temp_return;
  __temp_return:
  *__temp1393v=other__unsafe_ptr;
  *__temp1394v=other__dat__pos;
  *__temp1395v=other__dat__length;
  *__temp1396v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1397v) {
  goto __temp_return;
  __temp_return:
  *__temp1397v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1398v, uint64_t* __temp1399v, uint64_t* __temp1400v, uint64_t* __temp1401v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1402v, uint64_t* __temp1403v, uint64_t* __temp1404v, char* __temp1405v) {
  char* buf__unsafe_ptr=*__temp1398v;
  uint64_t buf__unsafe_size=*__temp1399v;
  uint64_t buf__unsafe_align=*__temp1400v;
  uint64_t pos=*__temp1401v;
  char* __temp677v__unsafe_ptr=0;
  uint64_t __temp677v__dat__pos=0;
  uint64_t __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp678v__=0;
  uint64_t __temp679v__=0;
  uint64_t next_pos=0;
  uint64_t __temp680v__=0;
  char __temp681v__=0;
  uint64_t __temp682v=0;
  uint64_t __temp683v__=0;
  uint64_t prev_pos=0;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__unsafe_ptr,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__unsafe_ptr=__temp677v__unsafe_ptr;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp159v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp260v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp159v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1398v=buf__unsafe_ptr;
  *__temp1399v=buf__unsafe_size;
  *__temp1400v=buf__unsafe_align;
  *__temp1401v=pos;
  *__temp1402v=__temp684v__unsafe_ptr;
  *__temp1403v=__temp684v__dat__pos;
  *__temp1404v=__temp684v__dat__length;
  *__temp1405v=__temp684v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp685v(char** __temp1406v, uint64_t* __temp1407v, uint64_t* __temp1408v, uint64_t* __temp1409v, const char* _other, char** __temp1410v, uint64_t* __temp1411v, uint64_t* __temp1412v, char* __temp1413v) {
  char* buf__unsafe_ptr=*__temp1406v;
  uint64_t buf__unsafe_size=*__temp1407v;
  uint64_t buf__unsafe_align=*__temp1408v;
  uint64_t pos=*__temp1409v;
  char* __temp686v__unsafe_ptr=0;
  uint64_t __temp686v__dat__pos=0;
  uint64_t __temp686v__dat__length=0;
  char __temp686v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp687v__=0;
  uint64_t __temp688v__=0;
  uint64_t next_pos=0;
  uint64_t __temp689v__=0;
  char __temp690v__=0;
  uint64_t __temp691v=0;
  uint64_t __temp692v__=0;
  uint64_t prev_pos=0;
  char* __temp693v__unsafe_ptr=0;
  uint64_t __temp693v__dat__pos=0;
  uint64_t __temp693v__dat__length=0;
  char __temp693v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(_other,&__temp686v__unsafe_ptr,&__temp686v__dat__pos,&__temp686v__dat__length,&__temp686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp686v__unsafe_ptr;
  other__dat__pos=__temp686v__dat__pos;
  other__dat__length=__temp686v__dat__length;
  other__dat__first=__temp686v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp687v__);
  add__temp159v(pos,__temp687v__,&__temp688v__);
  next_pos=__temp688v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp689v__);
  gt__temp260v(next_pos,__temp689v__,&__temp690v__);
  if(__temp690v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp691v=0;
  add__temp159v(pos,__temp691v,&__temp692v__);
  prev_pos=__temp692v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp693v__unsafe_ptr,&__temp693v__dat__pos,&__temp693v__dat__length,&__temp693v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1406v=buf__unsafe_ptr;
  *__temp1407v=buf__unsafe_size;
  *__temp1408v=buf__unsafe_align;
  *__temp1409v=pos;
  *__temp1410v=__temp693v__unsafe_ptr;
  *__temp1411v=__temp693v__dat__pos;
  *__temp1412v=__temp693v__dat__length;
  *__temp1413v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1254v(char** __temp1414v, uint64_t* __temp1415v, uint64_t* __temp1416v, char** __temp1417v, uint64_t* __temp1418v, uint64_t* __temp1419v, char* __temp1420v) {
  char* buff__unsafe_ptr=*__temp1414v;
  uint64_t buff__unsafe_size=*__temp1415v;
  uint64_t buff__unsafe_align=*__temp1416v;
  uint64_t __temp1255v=0;
  uint64_t __temp1256v__=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__unsafe_size=0;
  uint64_t __temp1257v__unsafe_align=0;
  char __temp1258v____temp544v____temp469v__=0;
  char* __temp1259v__buf__unsafe_ptr=0;
  uint64_t __temp1259v__buf__unsafe_size=0;
  uint64_t __temp1259v__buf__unsafe_align=0;
  uint64_t __temp1259v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1260v__=0;
  uint64_t __temp1261v__from=0;
  uint64_t __temp1261v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1262v=0;
  uint64_t __temp1263v__=0;
  uint64_t i=0;
  char* __temp1264v__=0;
  char* __temp1265v__unsafe_ptr=0;
  uint16_t __temp1265v__dat__pos=0;
  uint16_t __temp1265v__dat__length=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__dat__pos=0;
  uint64_t __temp1266v__dat__length=0;
  char __temp1266v__dat__first=0;
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__dat__pos=0;
  uint64_t __temp1267v__dat__length=0;
  char __temp1267v__dat__first=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__dat__pos=0;
  uint64_t __temp1269v__dat__length=0;
  char __temp1269v__dat__first=0;
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__dat__pos=0;
  uint64_t __temp1270v__dat__length=0;
  char __temp1270v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1255v=4;
  KB__temp443v(__temp1255v,&__temp1256v__);
  __temp_errcode=alloc__temp538v(__temp1256v__,&__temp1257v__unsafe_ptr,&__temp1257v__unsafe_size,&__temp1257v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1257v__unsafe_ptr,&__temp1257v__unsafe_size,&__temp1257v__unsafe_align,&__temp1259v__buf__unsafe_ptr,&__temp1259v__buf__unsafe_size,&__temp1259v__buf__unsafe_align,&__temp1259v__pos);
  mem__buf__unsafe_ptr=__temp1259v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1259v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1259v__buf__unsafe_align;
  mem__pos=__temp1259v__pos;
  len__temp537v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1260v__);
  range__temp435v(__temp1260v__,&__temp1261v__from,&__temp1261v__to);
  iter__from=__temp1261v__from;
  iter__to=__temp1261v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1263v__);
  __temp1262v=__temp_complain;
  i=__temp1263v__;
  __temp1262v=__temp1262v==0;
  if(!__temp1262v){
  break;
  }
  __temp_errcode=get__temp533v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1264v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1264v__){
  goto __temp_failure;
  }
  memcpy(&__temp1265v__unsafe_ptr,__temp1264v__,8);
  if(!__temp1264v__){
  goto __temp_failure;
  }
  memcpy(&__temp1265v__dat__pos,__temp1264v__+8,2);
  if(!__temp1264v__){
  goto __temp_failure;
  }
  memcpy(&__temp1265v__dat__length,__temp1264v__+10,2);
  unpack__temp1239v(__temp1265v__unsafe_ptr,__temp1265v__dat__pos,__temp1265v__dat__length,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length,&__temp1266v__dat__first);
  __temp_errcode=copy__temp676v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1266v__unsafe_ptr,__temp1266v__dat__pos,__temp1266v__dat__length,__temp1266v__dat__first,&__temp1267v__unsafe_ptr,&__temp1267v__dat__pos,&__temp1267v__dat__length,&__temp1267v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1268v,&__temp1269v__unsafe_ptr,&__temp1269v__dat__pos,&__temp1269v__dat__length,&__temp1269v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp607v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1270v__unsafe_ptr,&__temp1270v__dat__pos,&__temp1270v__dat__length,&__temp1270v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1270v__unsafe_ptr,&__temp1258v____temp544v____temp469v__);
  if(__temp1258v____temp544v____temp469v__){
  __temp1257v__unsafe_size=0;
  __temp1257v__unsafe_size=__temp1257v__unsafe_size;
  free__temp461v(&__temp1270v__unsafe_ptr);
  }
  __temp_return:
  *__temp1414v=buff__unsafe_ptr;
  *__temp1415v=buff__unsafe_size;
  *__temp1416v=buff__unsafe_align;
  *__temp1417v=__temp1270v__unsafe_ptr;
  *__temp1418v=__temp1270v__dat__pos;
  *__temp1419v=__temp1270v__dat__length;
  *__temp1420v=__temp1270v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1271v() {
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint64_t __temp1272v__unsafe_align=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint64_t __temp1273v__unsafe_align=0;
  uint64_t __temp1274v=0;
  char* __temp1275v__unsafe_ptr=0;
  uint64_t __temp1275v__unsafe_size=0;
  uint64_t __temp1275v__unsafe_align=0;
  char __temp1276v____temp469v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1277v=0;
  char* __temp1278v__=0;
  char* __temp1280v__unsafe_ptr=0;
  uint16_t __temp1280v__dat__pos=0;
  uint16_t __temp1280v__dat__length=0;
  uint64_t __temp1281v=0;
  char* __temp1282v__=0;
  char* __temp1284v__unsafe_ptr=0;
  uint16_t __temp1284v__dat__pos=0;
  uint16_t __temp1284v__dat__length=0;
  uint64_t __temp1285v=0;
  char* __temp1286v__=0;
  char* __temp1288v__unsafe_ptr=0;
  uint16_t __temp1288v__dat__pos=0;
  uint16_t __temp1288v__dat__length=0;
  uint64_t __temp1289v=0;
  char* __temp1290v__=0;
  char* __temp1292v__unsafe_ptr=0;
  uint16_t __temp1292v__dat__pos=0;
  uint16_t __temp1292v__dat__length=0;
  uint64_t __temp1293v=0;
  char* __temp1294v__=0;
  char* __temp1296v__unsafe_ptr=0;
  uint16_t __temp1296v__dat__pos=0;
  uint16_t __temp1296v__dat__length=0;
  uint64_t __temp1297v=0;
  char* __temp1298v__=0;
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__dat__pos=0;
  uint64_t __temp1299v__dat__length=0;
  char __temp1299v__dat__first=0;
  char __temp1300v____temp1258v____temp544v____temp469v__=0;
  uint64_t __temp1300v____temp1257v__unsafe_size=0;
  char* __temp1301v__unsafe_ptr=0;
  uint16_t __temp1301v__dat__pos=0;
  uint16_t __temp1301v__dat__length=0;
  uint64_t __temp1302v__=0;
  uint64_t __temp1303v__from=0;
  uint64_t __temp1303v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1304v=0;
  uint64_t __temp1305v__=0;
  uint64_t i=0;
  char* __temp1307v__=0;
  char* __temp1308v__unsafe_ptr=0;
  uint16_t __temp1308v__dat__pos=0;
  uint16_t __temp1308v__dat__length=0;
  char* __temp1309v__unsafe_ptr=0;
  uint64_t __temp1309v__dat__pos=0;
  uint64_t __temp1309v__dat__length=0;
  char __temp1309v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1252v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_align);
  __temp1273v__unsafe_ptr=__temp1272v__unsafe_ptr;
  __temp1273v__unsafe_size=__temp1272v__unsafe_size;
  __temp1273v__unsafe_align=__temp1272v__unsafe_align;
  __temp1274v=6;
  __temp_errcode=alloc__temp467v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_align,__temp1274v,&__temp1275v__unsafe_ptr,&__temp1275v__unsafe_size,&__temp1275v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1275v__unsafe_ptr;
  buff__unsafe_size=__temp1275v__unsafe_size;
  buff__unsafe_align=__temp1275v__unsafe_align;
  __temp1277v=0;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1277v,&__temp1278v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1236v(__temp1279v,&__temp1280v__unsafe_ptr,&__temp1280v__dat__pos,&__temp1280v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1278v__){
  goto __temp_failure;
  }
  memcpy(__temp1278v__,&__temp1280v__unsafe_ptr,8);
  if(!__temp1278v__){
  goto __temp_failure;
  }
  memcpy(__temp1278v__+8,&__temp1280v__dat__pos,2);
  if(!__temp1278v__){
  goto __temp_failure;
  }
  memcpy(__temp1278v__+10,&__temp1280v__dat__length,2);
  __temp1281v=1;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1281v,&__temp1282v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1236v(__temp1283v,&__temp1284v__unsafe_ptr,&__temp1284v__dat__pos,&__temp1284v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(__temp1282v__,&__temp1284v__unsafe_ptr,8);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(__temp1282v__+8,&__temp1284v__dat__pos,2);
  if(!__temp1282v__){
  goto __temp_failure;
  }
  memcpy(__temp1282v__+10,&__temp1284v__dat__length,2);
  __temp1285v=2;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1285v,&__temp1286v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1236v(__temp1287v,&__temp1288v__unsafe_ptr,&__temp1288v__dat__pos,&__temp1288v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1286v__){
  goto __temp_failure;
  }
  memcpy(__temp1286v__,&__temp1288v__unsafe_ptr,8);
  if(!__temp1286v__){
  goto __temp_failure;
  }
  memcpy(__temp1286v__+8,&__temp1288v__dat__pos,2);
  if(!__temp1286v__){
  goto __temp_failure;
  }
  memcpy(__temp1286v__+10,&__temp1288v__dat__length,2);
  __temp1289v=3;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1289v,&__temp1290v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1236v(__temp1291v,&__temp1292v__unsafe_ptr,&__temp1292v__dat__pos,&__temp1292v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1290v__){
  goto __temp_failure;
  }
  memcpy(__temp1290v__,&__temp1292v__unsafe_ptr,8);
  if(!__temp1290v__){
  goto __temp_failure;
  }
  memcpy(__temp1290v__+8,&__temp1292v__dat__pos,2);
  if(!__temp1290v__){
  goto __temp_failure;
  }
  memcpy(__temp1290v__+10,&__temp1292v__dat__length,2);
  __temp1293v=4;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1293v,&__temp1294v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1236v(__temp1295v,&__temp1296v__unsafe_ptr,&__temp1296v__dat__pos,&__temp1296v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1294v__){
  goto __temp_failure;
  }
  memcpy(__temp1294v__,&__temp1296v__unsafe_ptr,8);
  if(!__temp1294v__){
  goto __temp_failure;
  }
  memcpy(__temp1294v__+8,&__temp1296v__dat__pos,2);
  if(!__temp1294v__){
  goto __temp_failure;
  }
  memcpy(__temp1294v__+10,&__temp1296v__dat__length,2);
  __temp1297v=5;
  __temp_errcode=mutget__temp529v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1297v,&__temp1298v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1254v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1299v__unsafe_ptr,&__temp1299v__dat__pos,&__temp1299v__dat__length,&__temp1299v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1299v__unsafe_ptr,__temp1299v__dat__pos,__temp1299v__dat__length,__temp1299v__dat__first,&__temp1301v__unsafe_ptr,&__temp1301v__dat__pos,&__temp1301v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1298v__){
  goto __temp_failure;
  }
  memcpy(__temp1298v__,&__temp1301v__unsafe_ptr,8);
  if(!__temp1298v__){
  goto __temp_failure;
  }
  memcpy(__temp1298v__+8,&__temp1301v__dat__pos,2);
  if(!__temp1298v__){
  goto __temp_failure;
  }
  memcpy(__temp1298v__+10,&__temp1301v__dat__length,2);
  len__temp537v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1302v__);
  range__temp435v(__temp1302v__,&__temp1303v__from,&__temp1303v__to);
  it__from=__temp1303v__from;
  it__to=__temp1303v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1305v__);
  __temp1304v=__temp_complain;
  i=__temp1305v__;
  __temp1304v=__temp1304v==0;
  if(!__temp1304v){
  break;
  }
  print__temp374v(i,__temp1268v);
  __temp_errcode=get__temp533v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1307v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1307v__){
  goto __temp_failure;
  }
  memcpy(&__temp1308v__unsafe_ptr,__temp1307v__,8);
  if(!__temp1307v__){
  goto __temp_failure;
  }
  memcpy(&__temp1308v__dat__pos,__temp1307v__+8,2);
  if(!__temp1307v__){
  goto __temp_failure;
  }
  memcpy(&__temp1308v__dat__length,__temp1307v__+10,2);
  unpack__temp1239v(__temp1308v__unsafe_ptr,__temp1308v__dat__pos,__temp1308v__dat__length,&__temp1309v__unsafe_ptr,&__temp1309v__dat__pos,&__temp1309v__dat__length,&__temp1309v__dat__first);
  print__temp718v(__temp1309v__unsafe_ptr,__temp1309v__dat__pos,__temp1309v__dat__length,__temp1309v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1299v__unsafe_ptr,&__temp1300v____temp1258v____temp544v____temp469v__);
  if(__temp1300v____temp1258v____temp544v____temp469v__){
  __temp1300v____temp1257v__unsafe_size=0;
  __temp1300v____temp1257v__unsafe_size=__temp1300v____temp1257v__unsafe_size;
  free__temp461v(&__temp1299v__unsafe_ptr);
  }
  exists__temp412v(__temp1275v__unsafe_ptr,&__temp1276v____temp469v__);
  if(__temp1276v____temp469v__){
  __temp1275v__unsafe_size=0;
  __temp1275v__unsafe_size=__temp1275v__unsafe_size;
  free__temp461v(&__temp1275v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1271v();return 0;}