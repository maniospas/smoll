#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1266v=" ";
const char* const __temp1289v="is";
const char* const __temp1285v="name";
const char* const __temp364v="\n";
const char* const __temp1281v="my";
const char* const __temp1293v="manios";
const char* const __temp1277v="hi";
static const char* __temp_all_errcodes[31] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"'nat' value too large to pack in 'nat16'",
"'nat' value too large to pack in 'nat32'"
};

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1249v(char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=12;
  *__temp1309v=unsafe_ptr;
  *__temp1310v=unsafe_size;
  *__temp1311v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1312v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1313v) {
  char* allocated=*__temp1313v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1313v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1314v) {
  int value=0;
  *__temp1314v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1315v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1315v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1316v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1316v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1317v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1317v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1318v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1318v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1319v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1320v) {
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
  *__temp1320v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1321v, uint64_t* __temp1322v, uint64_t* __temp1323v, uint64_t size, char** __temp1324v, uint64_t* __temp1325v, uint64_t* __temp1326v) {
  char* buffer__unsafe_ptr=*__temp1321v;
  uint64_t buffer__unsafe_size=*__temp1322v;
  uint64_t buffer__unsafe_align=*__temp1323v;
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
  *__temp1321v=buffer__unsafe_ptr;
  *__temp1322v=buffer__unsafe_size;
  *__temp1323v=buffer__unsafe_align;
  *__temp1324v=buffer__unsafe_ptr;
  *__temp1325v=buffer__unsafe_size;
  *__temp1326v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1327v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1327v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1328v) {
  *__temp1328v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1329v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1329v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1330v, uint64_t* __temp1331v, uint64_t* __temp1332v, uint64_t i, char** __temp1333v) {
  char* buffer__unsafe_ptr=*__temp1330v;
  uint64_t buffer__unsafe_size=*__temp1331v;
  uint64_t buffer__unsafe_align=*__temp1332v;
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
  *__temp1330v=buffer__unsafe_ptr;
  *__temp1331v=buffer__unsafe_size;
  *__temp1332v=buffer__unsafe_align;
  *__temp1333v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1334v, uint64_t* __temp1335v, uint64_t* __temp1336v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1334v=unsafe_ptr;
  *__temp1335v=unsafe_size;
  *__temp1336v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1337v) {
  *__temp1337v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1338v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1339v) {
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
  *__temp1339v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1340v, uint64_t* __temp1341v, uint64_t* __temp1342v, char* __temp1343v) {
  goto __temp_return;
  __temp_return:
  *__temp1340v=unsafe_ptr;
  *__temp1341v=dat__pos;
  *__temp1342v=dat__length;
  *__temp1343v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1344v, uint64_t* __temp1345v, uint64_t* __temp1346v, char* __temp1347v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1344v=__temp579v__unsafe_ptr;
  *__temp1345v=__temp579v__dat__pos;
  *__temp1346v=__temp579v__dat__length;
  *__temp1347v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1348v, uint64_t* __temp1349v, uint64_t* __temp1350v, char* __temp1351v) {
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
  *__temp1348v=__temp609v__unsafe_ptr;
  *__temp1349v=__temp609v__dat__pos;
  *__temp1350v=__temp609v__dat__length;
  *__temp1351v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1352v, uint64_t* __temp1353v, uint64_t* __temp1354v, char* __temp1355v) {
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
  *__temp1352v=__temp617v__unsafe_ptr;
  *__temp1353v=__temp617v__dat__pos;
  *__temp1354v=__temp617v__dat__length;
  *__temp1355v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1356v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1356v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1219v(uint64_t x, uint16_t* __temp1357v) {
  uint64_t __temp1220v=0;
  char __temp1221v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1220v=65535;
  gt__temp270v(x,__temp1220v,&__temp1221v__);
  if(__temp1221v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1357v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1227v(uint64_t _pos, uint64_t _length, uint16_t* __temp1358v, uint16_t* __temp1359v) {
  uint16_t __temp1228v__=0;
  uint16_t pos=0;
  uint16_t __temp1229v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1219v(_pos,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1228v__;
  __temp_errcode=nat16__temp1219v(_length,&__temp1229v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1229v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1358v=pos;
  *__temp1359v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1230v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1360v, uint16_t* __temp1361v, uint16_t* __temp1362v) {
  char* unsafe_ptr=0;
  uint16_t __temp1231v__pos=0;
  uint16_t __temp1231v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1227v(s__dat__pos,s__dat__length,&__temp1231v__pos,&__temp1231v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1231v__pos;
  dat__length=__temp1231v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1360v=unsafe_ptr;
  *__temp1361v=dat__pos;
  *__temp1362v=dat__length;
  
  return __temp_errcode;
}

int str__temp1233v(const char* s, char** __temp1363v, uint16_t* __temp1364v, uint16_t* __temp1365v) {
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__dat__pos=0;
  uint64_t __temp1234v__dat__length=0;
  char __temp1234v__dat__first=0;
  char* __temp1235v__unsafe_ptr=0;
  uint16_t __temp1235v__dat__pos=0;
  uint16_t __temp1235v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(s,&__temp1234v__unsafe_ptr,&__temp1234v__dat__pos,&__temp1234v__dat__length,&__temp1234v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1230v(__temp1234v__unsafe_ptr,__temp1234v__dat__pos,__temp1234v__dat__length,__temp1234v__dat__first,&__temp1235v__unsafe_ptr,&__temp1235v__dat__pos,&__temp1235v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1363v=__temp1235v__unsafe_ptr;
  *__temp1364v=__temp1235v__dat__pos;
  *__temp1365v=__temp1235v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp442v(uint64_t x, uint64_t* __temp1366v) {
  uint64_t __temp443v=0;
  uint64_t __temp444v__=0;
  __temp443v=1024;
  mul__temp193v(x,__temp443v,&__temp444v__);
  goto __temp_return;
  __temp_return:
  *__temp1366v=__temp444v__;
}

static inline __attribute__((always_inline)) int alloc__temp537v(uint64_t size, char** __temp1367v, uint64_t* __temp1368v, uint64_t* __temp1369v) {
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
  *__temp1367v=__temp542v__unsafe_ptr;
  *__temp1368v=__temp542v__unsafe_size;
  *__temp1369v=__temp542v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp651v(char** __temp1370v, uint64_t* __temp1371v, uint64_t* __temp1372v, char** __temp1373v, uint64_t* __temp1374v, uint64_t* __temp1375v, uint64_t* __temp1376v) {
  char* buf__unsafe_ptr=*__temp1370v;
  uint64_t buf__unsafe_size=*__temp1371v;
  uint64_t buf__unsafe_align=*__temp1372v;
  uint64_t __temp652v=0;
  uint64_t __temp653v=0;
  uint64_t pos=0;
  __temp652v=0;
  __temp653v=__temp652v;
  pos=__temp653v;
  goto __temp_return;
  __temp_return:
  *__temp1370v=buf__unsafe_ptr;
  *__temp1371v=buf__unsafe_size;
  *__temp1372v=buf__unsafe_align;
  *__temp1373v=buf__unsafe_ptr;
  *__temp1374v=buf__unsafe_size;
  *__temp1375v=buf__unsafe_align;
  *__temp1376v=pos;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1377v) {
  goto __temp_return;
  __temp_return:
  *__temp1377v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp434v(uint64_t to, uint64_t* __temp1378v, uint64_t* __temp1379v) {
  int __temp435v=0;
  uint64_t __temp436v=0;
  uint64_t _from=0;
  uint64_t __temp437v=0;
  uint64_t from=0;
  __temp436v=0;
  _from=__temp436v;
  __temp437v=_from;
  from=__temp437v;
  goto __temp_return;
  __temp_return:
  *__temp1378v=from;
  *__temp1379v=to;
}

static inline __attribute__((always_inline)) int next__temp438v(uint64_t* __temp1380v, uint64_t r__to, uint64_t* __temp1381v) {
  uint64_t r__from=*__temp1380v;
  char __temp439v__=0;
  uint64_t ret=0;
  uint64_t __temp440v=0;
  uint64_t __temp441v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(r__from,r__to,&__temp439v__);
  if(__temp439v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp440v=1;
  add__temp169v(ret,__temp440v,&__temp441v__);
  r__from=__temp441v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1380v=r__from;
  *__temp1381v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void nat__temp1226v(uint16_t x, uint64_t* __temp1382v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1382v=value;
}

static inline __attribute__((always_inline)) void str__temp576v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1383v, uint64_t* __temp1384v, uint64_t* __temp1385v, char* __temp1386v) {
  char* first_pos=0;
  char first=0;
  char* __temp577v__unsafe_ptr=0;
  uint64_t __temp577v__dat__pos=0;
  uint64_t __temp577v__dat__length=0;
  char __temp577v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp574v(unsafe_ptr,pos,length,first,&__temp577v__unsafe_ptr,&__temp577v__dat__pos,&__temp577v__dat__length,&__temp577v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1383v=__temp577v__unsafe_ptr;
  *__temp1384v=__temp577v__dat__pos;
  *__temp1385v=__temp577v__dat__length;
  *__temp1386v=__temp577v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1236v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1387v, uint64_t* __temp1388v, uint64_t* __temp1389v, char* __temp1390v) {
  uint64_t __temp1237v__=0;
  uint64_t __temp1238v__=0;
  char* __temp1239v__unsafe_ptr=0;
  uint64_t __temp1239v__dat__pos=0;
  uint64_t __temp1239v__dat__length=0;
  char __temp1239v__dat__first=0;
  nat__temp1226v(m__dat__pos,&__temp1237v__);
  nat__temp1226v(m__dat__length,&__temp1238v__);
  str__temp576v(m__unsafe_ptr,__temp1237v__,__temp1238v__,&__temp1239v__unsafe_ptr,&__temp1239v__dat__pos,&__temp1239v__dat__length,&__temp1239v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1387v=__temp1239v__unsafe_ptr;
  *__temp1388v=__temp1239v__dat__pos;
  *__temp1389v=__temp1239v__dat__length;
  *__temp1390v=__temp1239v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp603v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1391v, uint64_t* __temp1392v, uint64_t* __temp1393v, char* __temp1394v) {
  goto __temp_return;
  __temp_return:
  *__temp1391v=other__unsafe_ptr;
  *__temp1392v=other__dat__pos;
  *__temp1393v=other__dat__length;
  *__temp1394v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1395v) {
  goto __temp_return;
  __temp_return:
  *__temp1395v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp673v(char** __temp1396v, uint64_t* __temp1397v, uint64_t* __temp1398v, uint64_t* __temp1399v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1400v, uint64_t* __temp1401v, uint64_t* __temp1402v, char* __temp1403v) {
  char* buf__unsafe_ptr=*__temp1396v;
  uint64_t buf__unsafe_size=*__temp1397v;
  uint64_t buf__unsafe_align=*__temp1398v;
  uint64_t pos=*__temp1399v;
  char* __temp674v__unsafe_ptr=0;
  uint64_t __temp674v__dat__pos=0;
  uint64_t __temp674v__dat__length=0;
  char __temp674v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp675v__=0;
  uint64_t __temp676v__=0;
  uint64_t next_pos=0;
  uint64_t __temp677v__=0;
  char __temp678v__=0;
  uint64_t __temp679v=0;
  uint64_t __temp680v__=0;
  uint64_t prev_pos=0;
  char* __temp681v__unsafe_ptr=0;
  uint64_t __temp681v__dat__pos=0;
  uint64_t __temp681v__dat__length=0;
  char __temp681v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp674v__unsafe_ptr,&__temp674v__dat__pos,&__temp674v__dat__length,&__temp674v__dat__first);
  other__unsafe_ptr=__temp674v__unsafe_ptr;
  other__dat__pos=__temp674v__dat__pos;
  other__dat__length=__temp674v__dat__length;
  other__dat__first=__temp674v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp675v__);
  add__temp169v(pos,__temp675v__,&__temp676v__);
  next_pos=__temp676v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp677v__);
  gt__temp270v(next_pos,__temp677v__,&__temp678v__);
  if(__temp678v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp679v=0;
  add__temp169v(pos,__temp679v,&__temp680v__);
  prev_pos=__temp680v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp681v__unsafe_ptr,&__temp681v__dat__pos,&__temp681v__dat__length,&__temp681v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1396v=buf__unsafe_ptr;
  *__temp1397v=buf__unsafe_size;
  *__temp1398v=buf__unsafe_align;
  *__temp1399v=pos;
  *__temp1400v=__temp681v__unsafe_ptr;
  *__temp1401v=__temp681v__dat__pos;
  *__temp1402v=__temp681v__dat__length;
  *__temp1403v=__temp681v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp682v(char** __temp1404v, uint64_t* __temp1405v, uint64_t* __temp1406v, uint64_t* __temp1407v, const char* _other, char** __temp1408v, uint64_t* __temp1409v, uint64_t* __temp1410v, char* __temp1411v) {
  char* buf__unsafe_ptr=*__temp1404v;
  uint64_t buf__unsafe_size=*__temp1405v;
  uint64_t buf__unsafe_align=*__temp1406v;
  uint64_t pos=*__temp1407v;
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
  *__temp1404v=buf__unsafe_ptr;
  *__temp1405v=buf__unsafe_size;
  *__temp1406v=buf__unsafe_align;
  *__temp1407v=pos;
  *__temp1408v=__temp690v__unsafe_ptr;
  *__temp1409v=__temp690v__dat__pos;
  *__temp1410v=__temp690v__dat__length;
  *__temp1411v=__temp690v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1251v(char** __temp1412v, uint64_t* __temp1413v, uint64_t* __temp1414v, char** __temp1415v, uint64_t* __temp1416v, uint64_t* __temp1417v, char* __temp1418v) {
  char* buff__unsafe_ptr=*__temp1412v;
  uint64_t buff__unsafe_size=*__temp1413v;
  uint64_t buff__unsafe_align=*__temp1414v;
  uint64_t __temp1252v=0;
  uint64_t __temp1253v__=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint64_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp543v____temp468v__=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint64_t __temp1256v__unsafe_align=0;
  char* __temp1257v__buf__unsafe_ptr=0;
  uint64_t __temp1257v__buf__unsafe_size=0;
  uint64_t __temp1257v__buf__unsafe_align=0;
  uint64_t __temp1257v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint64_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1258v__=0;
  uint64_t __temp1259v__from=0;
  uint64_t __temp1259v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1260v=0;
  uint64_t __temp1261v__=0;
  uint64_t i=0;
  char* __temp1262v__=0;
  char* __temp1263v__unsafe_ptr=0;
  uint16_t __temp1263v__dat__pos=0;
  uint16_t __temp1263v__dat__length=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__dat__pos=0;
  uint64_t __temp1264v__dat__length=0;
  char __temp1264v__dat__first=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__dat__pos=0;
  uint64_t __temp1265v__dat__length=0;
  char __temp1265v__dat__first=0;
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__dat__pos=0;
  uint64_t __temp1267v__dat__length=0;
  char __temp1267v__dat__first=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__dat__pos=0;
  uint64_t __temp1268v__dat__length=0;
  char __temp1268v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1252v=4;
  KB__temp442v(__temp1252v,&__temp1253v__);
  __temp_errcode=alloc__temp537v(__temp1253v__,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v__unsafe_ptr=__temp1254v__unsafe_ptr;
  __temp1256v__unsafe_size=__temp1254v__unsafe_size;
  __temp1256v__unsafe_align=__temp1254v__unsafe_align;
  bufpos__temp651v(&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_align,&__temp1257v__buf__unsafe_ptr,&__temp1257v__buf__unsafe_size,&__temp1257v__buf__unsafe_align,&__temp1257v__pos);
  mem__buf__unsafe_ptr=__temp1257v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1257v__buf__unsafe_size;
  mem__buf__unsafe_align=__temp1257v__buf__unsafe_align;
  mem__pos=__temp1257v__pos;
  len__temp536v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1258v__);
  range__temp434v(__temp1258v__,&__temp1259v__from,&__temp1259v__to);
  iter__from=__temp1259v__from;
  iter__to=__temp1259v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp438v(&iter__from,iter__to,&__temp1261v__);
  __temp1260v=__temp_complain;
  i=__temp1261v__;
  __temp1260v=__temp1260v==0;
  if(!__temp1260v){
  break;
  }
  __temp_errcode=get__temp532v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,i,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__unsafe_ptr,__temp1262v__,8);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__dat__pos,__temp1262v__+8,2);
  if(!__temp1262v__){
  goto __temp_failure;
  }
  memcpy(&__temp1263v__dat__length,__temp1262v__+10,2);
  unpack__temp1236v(__temp1263v__unsafe_ptr,__temp1263v__dat__pos,__temp1263v__dat__length,&__temp1264v__unsafe_ptr,&__temp1264v__dat__pos,&__temp1264v__dat__length,&__temp1264v__dat__first);
  __temp_errcode=copy__temp673v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1264v__unsafe_ptr,__temp1264v__dat__pos,__temp1264v__dat__length,__temp1264v__dat__first,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length,&__temp1265v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp682v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_align,&mem__pos,__temp1266v,&__temp1267v__unsafe_ptr,&__temp1267v__dat__pos,&__temp1267v__dat__length,&__temp1267v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp604v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_align,start,mem__pos,&__temp1268v__unsafe_ptr,&__temp1268v__dat__pos,&__temp1268v__dat__length,&__temp1268v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp1268v__unsafe_ptr,&__temp1255v____temp543v____temp468v__);
  if(__temp1255v____temp543v____temp468v__){
  __temp1254v__unsafe_size=0;
  __temp1254v__unsafe_size=__temp1254v__unsafe_size;
  free__temp460v(&__temp1268v__unsafe_ptr);
  }
  __temp_return:
  *__temp1412v=buff__unsafe_ptr;
  *__temp1413v=buff__unsafe_size;
  *__temp1414v=buff__unsafe_align;
  *__temp1415v=__temp1268v__unsafe_ptr;
  *__temp1416v=__temp1268v__dat__pos;
  *__temp1417v=__temp1268v__dat__length;
  *__temp1418v=__temp1268v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp373v(uint64_t value, const char* endl) {
  int __temp374v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1269v() {
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint64_t __temp1270v__unsafe_align=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint64_t __temp1271v__unsafe_align=0;
  uint64_t __temp1272v=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint64_t __temp1273v__unsafe_align=0;
  char __temp1274v____temp468v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint64_t buff__unsafe_align=0;
  uint64_t __temp1275v=0;
  char* __temp1276v__=0;
  char* __temp1278v__unsafe_ptr=0;
  uint16_t __temp1278v__dat__pos=0;
  uint16_t __temp1278v__dat__length=0;
  uint64_t __temp1279v=0;
  char* __temp1280v__=0;
  char* __temp1282v__unsafe_ptr=0;
  uint16_t __temp1282v__dat__pos=0;
  uint16_t __temp1282v__dat__length=0;
  uint64_t __temp1283v=0;
  char* __temp1284v__=0;
  char* __temp1286v__unsafe_ptr=0;
  uint16_t __temp1286v__dat__pos=0;
  uint16_t __temp1286v__dat__length=0;
  uint64_t __temp1287v=0;
  char* __temp1288v__=0;
  char* __temp1290v__unsafe_ptr=0;
  uint16_t __temp1290v__dat__pos=0;
  uint16_t __temp1290v__dat__length=0;
  uint64_t __temp1291v=0;
  char* __temp1292v__=0;
  char* __temp1294v__unsafe_ptr=0;
  uint16_t __temp1294v__dat__pos=0;
  uint16_t __temp1294v__dat__length=0;
  uint64_t __temp1295v=0;
  char* __temp1296v__=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__dat__pos=0;
  uint64_t __temp1297v__dat__length=0;
  char __temp1297v__dat__first=0;
  char __temp1298v____temp1255v____temp543v____temp468v__=0;
  uint64_t __temp1298v____temp1254v__unsafe_size=0;
  char* __temp1299v__unsafe_ptr=0;
  uint16_t __temp1299v__dat__pos=0;
  uint16_t __temp1299v__dat__length=0;
  uint64_t __temp1300v__=0;
  uint64_t __temp1301v__from=0;
  uint64_t __temp1301v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1302v=0;
  uint64_t __temp1303v__=0;
  uint64_t j=0;
  char* __temp1305v__=0;
  char* __temp1306v__unsafe_ptr=0;
  uint16_t __temp1306v__dat__pos=0;
  uint16_t __temp1306v__dat__length=0;
  char* __temp1307v__unsafe_ptr=0;
  uint64_t __temp1307v__dat__pos=0;
  uint64_t __temp1307v__dat__length=0;
  char __temp1307v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1249v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_align);
  __temp1271v__unsafe_ptr=__temp1270v__unsafe_ptr;
  __temp1271v__unsafe_size=__temp1270v__unsafe_size;
  __temp1271v__unsafe_align=__temp1270v__unsafe_align;
  __temp1272v=6;
  __temp_errcode=alloc__temp466v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_align,__temp1272v,&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1273v__unsafe_ptr;
  buff__unsafe_size=__temp1273v__unsafe_size;
  buff__unsafe_align=__temp1273v__unsafe_align;
  __temp1275v=0;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1275v,&__temp1276v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1277v,&__temp1278v__unsafe_ptr,&__temp1278v__dat__pos,&__temp1278v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1276v__){
  goto __temp_failure;
  }
  memcpy(__temp1276v__,&__temp1278v__unsafe_ptr,8);
  if(!__temp1276v__){
  goto __temp_failure;
  }
  memcpy(__temp1276v__+8,&__temp1278v__dat__pos,2);
  if(!__temp1276v__){
  goto __temp_failure;
  }
  memcpy(__temp1276v__+10,&__temp1278v__dat__length,2);
  __temp1279v=1;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1281v,&__temp1282v__unsafe_ptr,&__temp1282v__dat__pos,&__temp1282v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  goto __temp_failure;
  }
  memcpy(__temp1280v__,&__temp1282v__unsafe_ptr,8);
  if(!__temp1280v__){
  goto __temp_failure;
  }
  memcpy(__temp1280v__+8,&__temp1282v__dat__pos,2);
  if(!__temp1280v__){
  goto __temp_failure;
  }
  memcpy(__temp1280v__+10,&__temp1282v__dat__length,2);
  __temp1283v=2;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1283v,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1285v,&__temp1286v__unsafe_ptr,&__temp1286v__dat__pos,&__temp1286v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1284v__){
  goto __temp_failure;
  }
  memcpy(__temp1284v__,&__temp1286v__unsafe_ptr,8);
  if(!__temp1284v__){
  goto __temp_failure;
  }
  memcpy(__temp1284v__+8,&__temp1286v__dat__pos,2);
  if(!__temp1284v__){
  goto __temp_failure;
  }
  memcpy(__temp1284v__+10,&__temp1286v__dat__length,2);
  __temp1287v=3;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1287v,&__temp1288v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1289v,&__temp1290v__unsafe_ptr,&__temp1290v__dat__pos,&__temp1290v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1288v__){
  goto __temp_failure;
  }
  memcpy(__temp1288v__,&__temp1290v__unsafe_ptr,8);
  if(!__temp1288v__){
  goto __temp_failure;
  }
  memcpy(__temp1288v__+8,&__temp1290v__dat__pos,2);
  if(!__temp1288v__){
  goto __temp_failure;
  }
  memcpy(__temp1288v__+10,&__temp1290v__dat__length,2);
  __temp1291v=4;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1291v,&__temp1292v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1233v(__temp1293v,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1292v__){
  goto __temp_failure;
  }
  memcpy(__temp1292v__,&__temp1294v__unsafe_ptr,8);
  if(!__temp1292v__){
  goto __temp_failure;
  }
  memcpy(__temp1292v__+8,&__temp1294v__dat__pos,2);
  if(!__temp1292v__){
  goto __temp_failure;
  }
  memcpy(__temp1292v__+10,&__temp1294v__dat__length,2);
  __temp1295v=5;
  __temp_errcode=mutget__temp528v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,__temp1295v,&__temp1296v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1251v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_align,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1230v(__temp1297v__unsafe_ptr,__temp1297v__dat__pos,__temp1297v__dat__length,__temp1297v__dat__first,&__temp1299v__unsafe_ptr,&__temp1299v__dat__pos,&__temp1299v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1296v__){
  goto __temp_failure;
  }
  memcpy(__temp1296v__,&__temp1299v__unsafe_ptr,8);
  if(!__temp1296v__){
  goto __temp_failure;
  }
  memcpy(__temp1296v__+8,&__temp1299v__dat__pos,2);
  if(!__temp1296v__){
  goto __temp_failure;
  }
  memcpy(__temp1296v__+10,&__temp1299v__dat__length,2);
  len__temp536v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,&__temp1300v__);
  range__temp434v(__temp1300v__,&__temp1301v__from,&__temp1301v__to);
  full_iter__from=__temp1301v__from;
  full_iter__to=__temp1301v__to;
  while(1){
  __temp_complain=next__temp438v(&full_iter__from,full_iter__to,&__temp1303v__);
  __temp1302v=__temp_complain;
  j=__temp1303v__;
  __temp1302v=__temp1302v==0;
  if(!__temp1302v){
  break;
  }
  print__temp373v(j,__temp1266v);
  __temp_errcode=get__temp532v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_align,j,&__temp1305v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1305v__){
  goto __temp_failure;
  }
  memcpy(&__temp1306v__unsafe_ptr,__temp1305v__,8);
  if(!__temp1305v__){
  goto __temp_failure;
  }
  memcpy(&__temp1306v__dat__pos,__temp1305v__+8,2);
  if(!__temp1305v__){
  goto __temp_failure;
  }
  memcpy(&__temp1306v__dat__length,__temp1305v__+10,2);
  unpack__temp1236v(__temp1306v__unsafe_ptr,__temp1306v__dat__pos,__temp1306v__dat__length,&__temp1307v__unsafe_ptr,&__temp1307v__dat__pos,&__temp1307v__dat__length,&__temp1307v__dat__first);
  print__temp715v(__temp1307v__unsafe_ptr,__temp1307v__dat__pos,__temp1307v__dat__length,__temp1307v__dat__first);
  }
  
  __temp_failure:exists__temp411v(__temp1297v__unsafe_ptr,&__temp1298v____temp1255v____temp543v____temp468v__);
  if(__temp1298v____temp1255v____temp543v____temp468v__){
  __temp1298v____temp1254v__unsafe_size=0;
  __temp1298v____temp1254v__unsafe_size=__temp1298v____temp1254v__unsafe_size;
  free__temp460v(&__temp1297v__unsafe_ptr);
  }
  exists__temp411v(__temp1273v__unsafe_ptr,&__temp1274v____temp468v__);
  if(__temp1274v____temp468v__){
  __temp1273v__unsafe_size=0;
  __temp1273v__unsafe_size=__temp1273v__unsafe_size;
  free__temp460v(&__temp1273v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1269v();return 0;}