#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1302v="hi";
const char* const __temp1314v="is";
const char* const __temp1310v="name";
const char* const __temp365v="\n";
const char* const __temp1306v="my";
const char* const __temp1318v="manios";
const char* const __temp1291v=" ";
static const char* __temp_all_errcodes[35] = {"noerr",
"error",
"null pointer",
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
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1275v(char** __temp1334v, uint64_t* __temp1335v, uint16_t* __temp1336v, uint16_t* __temp1337v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__temp1334v=unsafe_ptr;
  *__temp1335v=unsafe_size;
  *__temp1336v=unsafe_offset;
  *__temp1337v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1338v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1339v) {
  char* allocated=*__temp1339v;
  if(allocated){
  free(allocated);
  }
  *__temp1339v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1340v) {
  int value=0;
  *__temp1340v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1341v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1341v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1342v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1342v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1343v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1343v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1344v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1344v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1345v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1345v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1346v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1346v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1347v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1347v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1348v) {
  char* allocated=0;
  char __temp460v__=0;
  char __temp461v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  exists__temp412v(allocated,&__temp460v__);
  not__temp26v(__temp460v__,&__temp461v__);
  if(__temp461v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1349v, uint64_t* __temp1350v, uint16_t* __temp1351v, uint16_t* __temp1352v, uint64_t size, char** __temp1353v, uint64_t* __temp1354v, uint16_t* __temp1355v, uint16_t* __temp1356v) {
  char* buffer__unsafe_ptr=*__temp1349v;
  uint64_t buffer__unsafe_size=*__temp1350v;
  uint16_t buffer__unsafe_offset=*__temp1351v;
  uint16_t buffer__unsafe_align=*__temp1352v;
  int __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp478v__);
  if(__temp478v__){
  __temp479v=0;
  neq__temp142v(size,__temp479v,&__temp480v__);
  if(__temp480v__){
  __temp481v=0;
  nat__temp470v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  zero__temp467v(buffer__unsafe_ptr,__temp481v,__temp483v__);
  }
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1349v=buffer__unsafe_ptr;
  *__temp1350v=buffer__unsafe_size;
  *__temp1351v=buffer__unsafe_offset;
  *__temp1352v=buffer__unsafe_align;
  *__temp1353v=buffer__unsafe_ptr;
  *__temp1354v=buffer__unsafe_size;
  *__temp1355v=buffer__unsafe_offset;
  *__temp1356v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1357v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1357v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1358v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1358v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1359v) {
  *__temp1359v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1360v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1360v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1361v, uint64_t* __temp1362v, uint16_t* __temp1363v, uint16_t* __temp1364v, uint64_t i, char** __temp1365v) {
  char* buffer__unsafe_ptr=*__temp1361v;
  uint64_t buffer__unsafe_size=*__temp1362v;
  uint16_t buffer__unsafe_offset=*__temp1363v;
  uint16_t buffer__unsafe_align=*__temp1364v;
  char __temp540v__=0;
  uint64_t __temp541v__=0;
  uint64_t __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  char* __temp545v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp540v__);
  if(__temp540v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp541v__);
  mul__temp194v(i,__temp541v__,&__temp542v__);
  nat__temp470v(buffer__unsafe_offset,&__temp543v__);
  add__temp170v(__temp542v__,__temp543v__,&__temp544v__);
  add__temp468v(buffer__unsafe_ptr,__temp544v__,&__temp545v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1361v=buffer__unsafe_ptr;
  *__temp1362v=buffer__unsafe_size;
  *__temp1363v=buffer__unsafe_offset;
  *__temp1364v=buffer__unsafe_align;
  *__temp1365v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp555v(char** __temp1366v, uint64_t* __temp1367v, uint16_t* __temp1368v, uint16_t* __temp1369v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1366v=unsafe_ptr;
  *__temp1367v=unsafe_size;
  *__temp1368v=unsafe_offset;
  *__temp1369v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1370v) {
  *__temp1370v=to;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1371v) {
  char __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  char* __temp552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp547v__);
  if(__temp547v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp548v__);
  mul__temp194v(i,__temp548v__,&__temp549v__);
  nat__temp470v(buffer__unsafe_offset,&__temp550v__);
  add__temp170v(__temp549v__,__temp550v__,&__temp551v__);
  add__temp468v(buffer__unsafe_ptr,__temp551v__,&__temp552v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1371v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp591v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1372v, uint64_t* __temp1373v, uint64_t* __temp1374v, char* __temp1375v) {
  goto __temp_return;
  __temp_return:
  *__temp1372v=unsafe_ptr;
  *__temp1373v=dat__pos;
  *__temp1374v=dat__length;
  *__temp1375v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp595v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1376v, uint64_t* __temp1377v, uint64_t* __temp1378v, char* __temp1379v) {
  char* unsafe_ptr=0;
  uint64_t __temp596v__=0;
  uint64_t __temp597v=0;
  char __temp598v__=0;
  uint64_t __temp599v__=0;
  uint64_t __temp600v=0;
  char __temp601v__=0;
  char* __temp602v__unsafe_ptr=0;
  uint64_t __temp602v__dat__pos=0;
  uint64_t __temp602v__dat__length=0;
  char __temp602v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp596v__);
  __temp597v=1;
  neq__temp142v(__temp596v__,__temp597v,&__temp598v__);
  if(__temp598v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp599v__);
  __temp600v=0;
  neq__temp142v(__temp599v__,__temp600v,&__temp601v__);
  if(__temp601v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp591v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp602v__unsafe_ptr,&__temp602v__dat__pos,&__temp602v__dat__length,&__temp602v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1376v=__temp602v__unsafe_ptr;
  *__temp1377v=__temp602v__dat__pos;
  *__temp1378v=__temp602v__dat__length;
  *__temp1379v=__temp602v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp627v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1380v, uint64_t* __temp1381v, uint64_t* __temp1382v, char* __temp1383v) {
  uint64_t __temp628v=0;
  char __temp629v__=0;
  char* __temp630v__=0;
  char __temp631v__value=0;
  char first=0;
  char* __temp632v__unsafe_ptr=0;
  uint64_t __temp632v__dat__pos=0;
  uint64_t __temp632v__dat__length=0;
  char __temp632v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp628v=0;
  neq__temp142v(length,__temp628v,&__temp629v__);
  if(__temp629v__){
  __temp_errcode=get__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp630v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp630v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp631v__value,__temp630v__,1);
  first=__temp631v__value;
  }
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp632v__unsafe_ptr,&__temp632v__dat__pos,&__temp632v__dat__length,&__temp632v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1380v=__temp632v__unsafe_ptr;
  *__temp1381v=__temp632v__dat__pos;
  *__temp1382v=__temp632v__dat__length;
  *__temp1383v=__temp632v__dat__first;
  
  return __temp_errcode;
}

int str__temp633v(const char* c, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v) {
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* __temp635v__unsafe_ptr=0;
  uint64_t __temp635v__unsafe_size=0;
  uint16_t __temp635v__unsafe_offset=0;
  uint16_t __temp635v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp636v__=0;
  uint64_t length=0;
  uint64_t __temp637v=0;
  uint64_t __temp638v__=0;
  uint64_t __temp639v=0;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__dat__pos=0;
  uint64_t __temp640v__dat__length=0;
  char __temp640v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp634v__unsafe_ptr,&__temp634v__unsafe_size,&__temp634v__unsafe_offset,&__temp634v__unsafe_align);
  __temp635v__unsafe_ptr=__temp634v__unsafe_ptr;
  __temp635v__unsafe_size=__temp634v__unsafe_size;
  __temp635v__unsafe_offset=__temp634v__unsafe_offset;
  __temp635v__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=__temp635v__unsafe_ptr;
  buf__unsafe_size=__temp635v__unsafe_size;
  buf__unsafe_offset=__temp635v__unsafe_offset;
  buf__unsafe_align=__temp635v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp636v__);
  buf__unsafe_ptr=__temp636v__;
  if(c){
  length=strlen(c);
  }
  __temp637v=1;
  add__temp170v(length,__temp637v,&__temp638v__);
  buf__unsafe_size=__temp638v__;
  __temp639v=0;
  __temp_errcode=str__temp627v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp639v,length,&__temp640v__unsafe_ptr,&__temp640v__dat__pos,&__temp640v__dat__length,&__temp640v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1384v=__temp640v__unsafe_ptr;
  *__temp1385v=__temp640v__dat__pos;
  *__temp1386v=__temp640v__dat__length;
  *__temp1387v=__temp640v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1388v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1388v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1246v(uint64_t x, uint16_t* __temp1389v) {
  uint64_t __temp1247v=0;
  char __temp1248v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1247v=65535;
  gt__temp271v(x,__temp1247v,&__temp1248v__);
  if(__temp1248v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1389v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1253v(uint64_t _pos, uint64_t _length, uint16_t* __temp1390v, uint16_t* __temp1391v) {
  uint16_t __temp1254v__=0;
  uint16_t pos=0;
  uint16_t __temp1255v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1246v(_pos,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1254v__;
  __temp_errcode=nat16__temp1246v(_length,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1255v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1390v=pos;
  *__temp1391v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1256v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1392v, uint16_t* __temp1393v, uint16_t* __temp1394v) {
  char* unsafe_ptr=0;
  uint16_t __temp1257v__pos=0;
  uint16_t __temp1257v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1253v(s__dat__pos,s__dat__length,&__temp1257v__pos,&__temp1257v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1257v__pos;
  dat__length=__temp1257v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1392v=unsafe_ptr;
  *__temp1393v=dat__pos;
  *__temp1394v=dat__length;
  
  return __temp_errcode;
}

int str__temp1259v(const char* s, char** __temp1395v, uint16_t* __temp1396v, uint16_t* __temp1397v) {
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__dat__pos=0;
  uint64_t __temp1260v__dat__length=0;
  char __temp1260v__dat__first=0;
  char* __temp1261v__unsafe_ptr=0;
  uint16_t __temp1261v__dat__pos=0;
  uint16_t __temp1261v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(s,&__temp1260v__unsafe_ptr,&__temp1260v__dat__pos,&__temp1260v__dat__length,&__temp1260v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1256v(__temp1260v__unsafe_ptr,__temp1260v__dat__pos,__temp1260v__dat__length,__temp1260v__dat__first,&__temp1261v__unsafe_ptr,&__temp1261v__dat__pos,&__temp1261v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1395v=__temp1261v__unsafe_ptr;
  *__temp1396v=__temp1261v__dat__pos;
  *__temp1397v=__temp1261v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1398v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1398v=__temp446v__;
}

static inline __attribute__((always_inline)) int alloc__temp554v(uint64_t size, char** __temp1399v, uint64_t* __temp1400v, uint16_t* __temp1401v, uint16_t* __temp1402v) {
  char* __temp557v__unsafe_ptr=0;
  uint64_t __temp557v__unsafe_size=0;
  uint16_t __temp557v__unsafe_offset=0;
  uint16_t __temp557v__unsafe_align=0;
  char* __temp558v__unsafe_ptr=0;
  uint64_t __temp558v__unsafe_size=0;
  uint16_t __temp558v__unsafe_offset=0;
  uint16_t __temp558v__unsafe_align=0;
  char* __temp559v__unsafe_ptr=0;
  uint64_t __temp559v__unsafe_size=0;
  uint16_t __temp559v__unsafe_offset=0;
  uint16_t __temp559v__unsafe_align=0;
  char __temp560v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp557v__unsafe_ptr,&__temp557v__unsafe_size,&__temp557v__unsafe_offset,&__temp557v__unsafe_align);
  __temp558v__unsafe_ptr=__temp557v__unsafe_ptr;
  __temp558v__unsafe_size=__temp557v__unsafe_size;
  __temp558v__unsafe_offset=__temp557v__unsafe_offset;
  __temp558v__unsafe_align=__temp557v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp558v__unsafe_ptr,&__temp558v__unsafe_size,&__temp558v__unsafe_offset,&__temp558v__unsafe_align,size,&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_offset,&__temp559v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp559v__unsafe_ptr,&__temp560v____temp475v__);
  if(__temp560v____temp475v__){
  __temp559v__unsafe_size=0;
  __temp559v__unsafe_size=__temp559v__unsafe_size;
  __temp559v__unsafe_ptr=__temp559v__unsafe_ptr;
  free__temp466v(&__temp559v__unsafe_ptr);
  }
  __temp_return:
  *__temp1399v=__temp559v__unsafe_ptr;
  *__temp1400v=__temp559v__unsafe_size;
  *__temp1401v=__temp559v__unsafe_offset;
  *__temp1402v=__temp559v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp674v(char** __temp1403v, uint64_t* __temp1404v, uint16_t* __temp1405v, uint16_t* __temp1406v, char** __temp1407v, uint64_t* __temp1408v, uint16_t* __temp1409v, uint16_t* __temp1410v, uint64_t* __temp1411v) {
  char* buf__unsafe_ptr=*__temp1403v;
  uint64_t buf__unsafe_size=*__temp1404v;
  uint16_t buf__unsafe_offset=*__temp1405v;
  uint16_t buf__unsafe_align=*__temp1406v;
  uint64_t __temp675v=0;
  uint64_t __temp676v=0;
  uint64_t pos=0;
  __temp675v=0;
  __temp676v=__temp675v;
  pos=__temp676v;
  goto __temp_return;
  __temp_return:
  *__temp1403v=buf__unsafe_ptr;
  *__temp1404v=buf__unsafe_size;
  *__temp1405v=buf__unsafe_offset;
  *__temp1406v=buf__unsafe_align;
  *__temp1407v=buf__unsafe_ptr;
  *__temp1408v=buf__unsafe_size;
  *__temp1409v=buf__unsafe_offset;
  *__temp1410v=buf__unsafe_align;
  *__temp1411v=pos;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1412v) {
  goto __temp_return;
  __temp_return:
  *__temp1412v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1413v, uint64_t* __temp1414v) {
  int __temp437v=0;
  uint64_t __temp438v=0;
  uint64_t _from=0;
  uint64_t __temp439v=0;
  uint64_t from=0;
  __temp438v=0;
  _from=__temp438v;
  __temp439v=_from;
  from=__temp439v;
  goto __temp_return;
  __temp_return:
  *__temp1413v=from;
  *__temp1414v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1415v, uint64_t r__to, uint64_t* __temp1416v) {
  uint64_t r__from=*__temp1415v;
  char __temp441v__=0;
  uint64_t ret=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp441v__);
  if(__temp441v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp442v=1;
  add__temp170v(ret,__temp442v,&__temp443v__);
  r__from=__temp443v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1415v=r__from;
  *__temp1416v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1417v, uint64_t* __temp1418v, uint64_t* __temp1419v, char* __temp1420v) {
  char* first_pos=0;
  char first=0;
  char* __temp594v__unsafe_ptr=0;
  uint64_t __temp594v__dat__pos=0;
  uint64_t __temp594v__dat__length=0;
  char __temp594v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp591v(unsafe_ptr,pos,length,first,&__temp594v__unsafe_ptr,&__temp594v__dat__pos,&__temp594v__dat__length,&__temp594v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1417v=__temp594v__unsafe_ptr;
  *__temp1418v=__temp594v__dat__pos;
  *__temp1419v=__temp594v__dat__length;
  *__temp1420v=__temp594v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1262v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1421v, uint64_t* __temp1422v, uint64_t* __temp1423v, char* __temp1424v) {
  uint64_t __temp1263v__=0;
  uint64_t __temp1264v__=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__dat__pos=0;
  uint64_t __temp1265v__dat__length=0;
  char __temp1265v__dat__first=0;
  nat__temp470v(m__dat__pos,&__temp1263v__);
  nat__temp470v(m__dat__length,&__temp1264v__);
  str__temp593v(m__unsafe_ptr,__temp1263v__,__temp1264v__,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length,&__temp1265v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1421v=__temp1265v__unsafe_ptr;
  *__temp1422v=__temp1265v__dat__pos;
  *__temp1423v=__temp1265v__dat__length;
  *__temp1424v=__temp1265v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp626v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1425v, uint64_t* __temp1426v, uint64_t* __temp1427v, char* __temp1428v) {
  goto __temp_return;
  __temp_return:
  *__temp1425v=other__unsafe_ptr;
  *__temp1426v=other__dat__pos;
  *__temp1427v=other__dat__length;
  *__temp1428v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp641v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1429v) {
  goto __temp_return;
  __temp_return:
  *__temp1429v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp698v(char** __temp1430v, uint64_t* __temp1431v, uint16_t* __temp1432v, uint16_t* __temp1433v, uint64_t* __temp1434v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1435v, uint64_t* __temp1436v, uint64_t* __temp1437v, char* __temp1438v) {
  char* buf__unsafe_ptr=*__temp1430v;
  uint64_t buf__unsafe_size=*__temp1431v;
  uint16_t buf__unsafe_offset=*__temp1432v;
  uint16_t buf__unsafe_align=*__temp1433v;
  uint64_t pos=*__temp1434v;
  char* __temp699v__unsafe_ptr=0;
  uint64_t __temp699v__dat__pos=0;
  uint64_t __temp699v__dat__length=0;
  char __temp699v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp700v__=0;
  uint64_t __temp701v__=0;
  uint64_t next_pos=0;
  uint64_t __temp702v__=0;
  char __temp703v__=0;
  uint64_t __temp704v=0;
  uint64_t __temp705v__=0;
  uint64_t prev_pos=0;
  char* __temp706v__unsafe_ptr=0;
  uint64_t __temp706v__dat__pos=0;
  uint64_t __temp706v__dat__length=0;
  char __temp706v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp626v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp699v__unsafe_ptr,&__temp699v__dat__pos,&__temp699v__dat__length,&__temp699v__dat__first);
  other__unsafe_ptr=__temp699v__unsafe_ptr;
  other__dat__pos=__temp699v__dat__pos;
  other__dat__length=__temp699v__dat__length;
  other__dat__first=__temp699v__dat__first;
  len__temp641v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp700v__);
  add__temp170v(pos,__temp700v__,&__temp701v__);
  next_pos=__temp701v__;
  len__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp702v__);
  gt__temp271v(next_pos,__temp702v__,&__temp703v__);
  if(__temp703v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp704v=0;
  add__temp170v(pos,__temp704v,&__temp705v__);
  prev_pos=__temp705v__;
  pos=next_pos;
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp706v__unsafe_ptr,&__temp706v__dat__pos,&__temp706v__dat__length,&__temp706v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1430v=buf__unsafe_ptr;
  *__temp1431v=buf__unsafe_size;
  *__temp1432v=buf__unsafe_offset;
  *__temp1433v=buf__unsafe_align;
  *__temp1434v=pos;
  *__temp1435v=__temp706v__unsafe_ptr;
  *__temp1436v=__temp706v__dat__pos;
  *__temp1437v=__temp706v__dat__length;
  *__temp1438v=__temp706v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp707v(char** __temp1439v, uint64_t* __temp1440v, uint16_t* __temp1441v, uint16_t* __temp1442v, uint64_t* __temp1443v, const char* _other, char** __temp1444v, uint64_t* __temp1445v, uint64_t* __temp1446v, char* __temp1447v) {
  char* buf__unsafe_ptr=*__temp1439v;
  uint64_t buf__unsafe_size=*__temp1440v;
  uint16_t buf__unsafe_offset=*__temp1441v;
  uint16_t buf__unsafe_align=*__temp1442v;
  uint64_t pos=*__temp1443v;
  char* __temp708v__unsafe_ptr=0;
  uint64_t __temp708v__dat__pos=0;
  uint64_t __temp708v__dat__length=0;
  char __temp708v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp709v__=0;
  uint64_t __temp710v__=0;
  uint64_t next_pos=0;
  uint64_t __temp711v__=0;
  char __temp712v__=0;
  uint64_t __temp713v=0;
  uint64_t __temp714v__=0;
  uint64_t prev_pos=0;
  char* __temp715v__unsafe_ptr=0;
  uint64_t __temp715v__dat__pos=0;
  uint64_t __temp715v__dat__length=0;
  char __temp715v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(_other,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp708v__unsafe_ptr;
  other__dat__pos=__temp708v__dat__pos;
  other__dat__length=__temp708v__dat__length;
  other__dat__first=__temp708v__dat__first;
  len__temp641v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp709v__);
  add__temp170v(pos,__temp709v__,&__temp710v__);
  next_pos=__temp710v__;
  len__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp711v__);
  gt__temp271v(next_pos,__temp711v__,&__temp712v__);
  if(__temp712v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp713v=0;
  add__temp170v(pos,__temp713v,&__temp714v__);
  prev_pos=__temp714v__;
  pos=next_pos;
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp715v__unsafe_ptr,&__temp715v__dat__pos,&__temp715v__dat__length,&__temp715v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1439v=buf__unsafe_ptr;
  *__temp1440v=buf__unsafe_size;
  *__temp1441v=buf__unsafe_offset;
  *__temp1442v=buf__unsafe_align;
  *__temp1443v=pos;
  *__temp1444v=__temp715v__unsafe_ptr;
  *__temp1445v=__temp715v__dat__pos;
  *__temp1446v=__temp715v__dat__length;
  *__temp1447v=__temp715v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1277v(char** __temp1448v, uint64_t* __temp1449v, uint16_t* __temp1450v, uint16_t* __temp1451v, char** __temp1452v, uint64_t* __temp1453v, uint64_t* __temp1454v, char* __temp1455v) {
  char* buff__unsafe_ptr=*__temp1448v;
  uint64_t buff__unsafe_size=*__temp1449v;
  uint16_t buff__unsafe_offset=*__temp1450v;
  uint16_t buff__unsafe_align=*__temp1451v;
  uint64_t __temp1278v=0;
  uint64_t __temp1279v__=0;
  char* __temp1280v__unsafe_ptr=0;
  uint64_t __temp1280v__unsafe_size=0;
  uint16_t __temp1280v__unsafe_offset=0;
  uint16_t __temp1280v__unsafe_align=0;
  char __temp1281v____temp560v____temp475v__=0;
  char* __temp1282v__buf__unsafe_ptr=0;
  uint64_t __temp1282v__buf__unsafe_size=0;
  uint16_t __temp1282v__buf__unsafe_offset=0;
  uint16_t __temp1282v__buf__unsafe_align=0;
  uint64_t __temp1282v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1283v__=0;
  uint64_t __temp1284v__from=0;
  uint64_t __temp1284v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1285v=0;
  uint64_t __temp1286v__=0;
  uint64_t i=0;
  char* __temp1287v__=0;
  char* __temp1288v__unsafe_ptr=0;
  uint16_t __temp1288v__dat__pos=0;
  uint16_t __temp1288v__dat__length=0;
  char* __temp1289v__unsafe_ptr=0;
  uint64_t __temp1289v__dat__pos=0;
  uint64_t __temp1289v__dat__length=0;
  char __temp1289v__dat__first=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__dat__pos=0;
  uint64_t __temp1290v__dat__length=0;
  char __temp1290v__dat__first=0;
  char* __temp1292v__unsafe_ptr=0;
  uint64_t __temp1292v__dat__pos=0;
  uint64_t __temp1292v__dat__length=0;
  char __temp1292v__dat__first=0;
  char* __temp1293v__unsafe_ptr=0;
  uint64_t __temp1293v__dat__pos=0;
  uint64_t __temp1293v__dat__length=0;
  char __temp1293v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1278v=4;
  KB__temp444v(__temp1278v,&__temp1279v__);
  __temp_errcode=alloc__temp554v(__temp1279v__,&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp674v(&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align,&__temp1282v__buf__unsafe_ptr,&__temp1282v__buf__unsafe_size,&__temp1282v__buf__unsafe_offset,&__temp1282v__buf__unsafe_align,&__temp1282v__pos);
  mem__pos=__temp1282v__pos;
  len__temp553v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1283v__);
  range__temp436v(__temp1283v__,&__temp1284v__from,&__temp1284v__to);
  iter__from=__temp1284v__from;
  iter__to=__temp1284v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1286v__);
  __temp1285v=__temp_complain;
  i=__temp1286v__;
  __temp1285v=__temp1285v==0;
  if(!__temp1285v){
  break;
  }
  __temp_errcode=get__temp546v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1287v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1287v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1288v__unsafe_ptr,__temp1287v__,8);
  memcpy(&__temp1288v__dat__pos,__temp1287v__+8,2);
  memcpy(&__temp1288v__dat__length,__temp1287v__+10,2);
  unpack__temp1262v(__temp1288v__unsafe_ptr,__temp1288v__dat__pos,__temp1288v__dat__length,&__temp1289v__unsafe_ptr,&__temp1289v__dat__pos,&__temp1289v__dat__length,&__temp1289v__dat__first);
  __temp_errcode=copy__temp698v(&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align,&mem__pos,__temp1289v__unsafe_ptr,__temp1289v__dat__pos,__temp1289v__dat__length,__temp1289v__dat__first,&__temp1290v__unsafe_ptr,&__temp1290v__dat__pos,&__temp1290v__dat__length,&__temp1290v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp707v(&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align,&mem__pos,__temp1291v,&__temp1292v__unsafe_ptr,&__temp1292v__dat__pos,&__temp1292v__dat__length,&__temp1292v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp627v(__temp1280v__unsafe_ptr,__temp1280v__unsafe_size,__temp1280v__unsafe_offset,__temp1280v__unsafe_align,start,mem__pos,&__temp1293v__unsafe_ptr,&__temp1293v__dat__pos,&__temp1293v__dat__length,&__temp1293v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1293v__unsafe_ptr=__temp1280v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1293v__unsafe_ptr,&__temp1281v____temp560v____temp475v__);
  if(__temp1281v____temp560v____temp475v__){
  __temp1280v__unsafe_size=0;
  __temp1280v__unsafe_size=__temp1280v__unsafe_size;
  __temp1293v__unsafe_ptr=__temp1293v__unsafe_ptr;
  free__temp466v(&__temp1293v__unsafe_ptr);
  }
  __temp_return:
  *__temp1448v=buff__unsafe_ptr;
  *__temp1449v=buff__unsafe_size;
  *__temp1450v=buff__unsafe_offset;
  *__temp1451v=buff__unsafe_align;
  *__temp1452v=__temp1293v__unsafe_ptr;
  *__temp1453v=__temp1293v__dat__pos;
  *__temp1454v=__temp1293v__dat__length;
  *__temp1455v=__temp1293v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp740v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp741v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1294v() {
  char* __temp1295v__unsafe_ptr=0;
  uint64_t __temp1295v__unsafe_size=0;
  uint16_t __temp1295v__unsafe_offset=0;
  uint16_t __temp1295v__unsafe_align=0;
  char* __temp1296v__unsafe_ptr=0;
  uint64_t __temp1296v__unsafe_size=0;
  uint16_t __temp1296v__unsafe_offset=0;
  uint16_t __temp1296v__unsafe_align=0;
  uint64_t __temp1297v=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__unsafe_size=0;
  uint16_t __temp1298v__unsafe_offset=0;
  uint16_t __temp1298v__unsafe_align=0;
  char __temp1299v____temp475v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __temp1300v=0;
  char* __temp1301v__=0;
  char* __temp1303v__unsafe_ptr=0;
  uint16_t __temp1303v__dat__pos=0;
  uint16_t __temp1303v__dat__length=0;
  uint64_t __temp1304v=0;
  char* __temp1305v__=0;
  char* __temp1307v__unsafe_ptr=0;
  uint16_t __temp1307v__dat__pos=0;
  uint16_t __temp1307v__dat__length=0;
  uint64_t __temp1308v=0;
  char* __temp1309v__=0;
  char* __temp1311v__unsafe_ptr=0;
  uint16_t __temp1311v__dat__pos=0;
  uint16_t __temp1311v__dat__length=0;
  uint64_t __temp1312v=0;
  char* __temp1313v__=0;
  char* __temp1315v__unsafe_ptr=0;
  uint16_t __temp1315v__dat__pos=0;
  uint16_t __temp1315v__dat__length=0;
  uint64_t __temp1316v=0;
  char* __temp1317v__=0;
  char* __temp1319v__unsafe_ptr=0;
  uint16_t __temp1319v__dat__pos=0;
  uint16_t __temp1319v__dat__length=0;
  uint64_t __temp1320v=0;
  char* __temp1321v__=0;
  char* __temp1322v__unsafe_ptr=0;
  uint64_t __temp1322v__dat__pos=0;
  uint64_t __temp1322v__dat__length=0;
  char __temp1322v__dat__first=0;
  char __temp1323v____temp1281v____temp560v____temp475v__=0;
  uint64_t __temp1323v____temp1280v__unsafe_size=0;
  char* __temp1324v__unsafe_ptr=0;
  uint16_t __temp1324v__dat__pos=0;
  uint16_t __temp1324v__dat__length=0;
  uint64_t __temp1325v__=0;
  uint64_t __temp1326v__from=0;
  uint64_t __temp1326v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1327v=0;
  uint64_t __temp1328v__=0;
  uint64_t j=0;
  char* __temp1330v__=0;
  char* __temp1331v__unsafe_ptr=0;
  uint16_t __temp1331v__dat__pos=0;
  uint16_t __temp1331v__dat__length=0;
  char* __temp1332v__unsafe_ptr=0;
  uint64_t __temp1332v__dat__pos=0;
  uint64_t __temp1332v__dat__length=0;
  char __temp1332v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1275v(&__temp1295v__unsafe_ptr,&__temp1295v__unsafe_size,&__temp1295v__unsafe_offset,&__temp1295v__unsafe_align);
  __temp1296v__unsafe_ptr=__temp1295v__unsafe_ptr;
  __temp1296v__unsafe_size=__temp1295v__unsafe_size;
  __temp1296v__unsafe_offset=__temp1295v__unsafe_offset;
  __temp1296v__unsafe_align=__temp1295v__unsafe_align;
  __temp1297v=6;
  __temp_errcode=alloc__temp473v(&__temp1296v__unsafe_ptr,&__temp1296v__unsafe_size,&__temp1296v__unsafe_offset,&__temp1296v__unsafe_align,__temp1297v,&__temp1298v__unsafe_ptr,&__temp1298v__unsafe_size,&__temp1298v__unsafe_offset,&__temp1298v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1298v__unsafe_ptr;
  buff__unsafe_size=__temp1298v__unsafe_size;
  buff__unsafe_offset=__temp1298v__unsafe_offset;
  buff__unsafe_align=__temp1298v__unsafe_align;
  __temp1300v=0;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1300v,&__temp1301v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1302v,&__temp1303v__unsafe_ptr,&__temp1303v__dat__pos,&__temp1303v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1301v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1301v__,&__temp1303v__unsafe_ptr,8);
  memcpy(__temp1301v__+8,&__temp1303v__dat__pos,2);
  memcpy(__temp1301v__+10,&__temp1303v__dat__length,2);
  __temp1304v=1;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1304v,&__temp1305v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1306v,&__temp1307v__unsafe_ptr,&__temp1307v__dat__pos,&__temp1307v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1305v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1305v__,&__temp1307v__unsafe_ptr,8);
  memcpy(__temp1305v__+8,&__temp1307v__dat__pos,2);
  memcpy(__temp1305v__+10,&__temp1307v__dat__length,2);
  __temp1308v=2;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1308v,&__temp1309v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1310v,&__temp1311v__unsafe_ptr,&__temp1311v__dat__pos,&__temp1311v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1309v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1309v__,&__temp1311v__unsafe_ptr,8);
  memcpy(__temp1309v__+8,&__temp1311v__dat__pos,2);
  memcpy(__temp1309v__+10,&__temp1311v__dat__length,2);
  __temp1312v=3;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1312v,&__temp1313v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1314v,&__temp1315v__unsafe_ptr,&__temp1315v__dat__pos,&__temp1315v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1313v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1313v__,&__temp1315v__unsafe_ptr,8);
  memcpy(__temp1313v__+8,&__temp1315v__dat__pos,2);
  memcpy(__temp1313v__+10,&__temp1315v__dat__length,2);
  __temp1316v=4;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1316v,&__temp1317v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1318v,&__temp1319v__unsafe_ptr,&__temp1319v__dat__pos,&__temp1319v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1317v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1317v__,&__temp1319v__unsafe_ptr,8);
  memcpy(__temp1317v__+8,&__temp1319v__dat__pos,2);
  memcpy(__temp1317v__+10,&__temp1319v__dat__length,2);
  __temp1320v=5;
  __temp_errcode=mutget__temp539v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1320v,&__temp1321v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1277v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,&__temp1322v__unsafe_ptr,&__temp1322v__dat__pos,&__temp1322v__dat__length,&__temp1322v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1256v(__temp1322v__unsafe_ptr,__temp1322v__dat__pos,__temp1322v__dat__length,__temp1322v__dat__first,&__temp1324v__unsafe_ptr,&__temp1324v__dat__pos,&__temp1324v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1321v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1321v__,&__temp1324v__unsafe_ptr,8);
  memcpy(__temp1321v__+8,&__temp1324v__dat__pos,2);
  memcpy(__temp1321v__+10,&__temp1324v__dat__length,2);
  len__temp553v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1325v__);
  range__temp436v(__temp1325v__,&__temp1326v__from,&__temp1326v__to);
  full_iter__from=__temp1326v__from;
  full_iter__to=__temp1326v__to;
  while(1){
  __temp_complain=next__temp440v(&full_iter__from,full_iter__to,&__temp1328v__);
  __temp1327v=__temp_complain;
  j=__temp1328v__;
  __temp1327v=__temp1327v==0;
  if(!__temp1327v){
  break;
  }
  print__temp374v(j,__temp1291v);
  __temp_errcode=get__temp546v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1330v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1330v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1331v__unsafe_ptr,__temp1330v__,8);
  memcpy(&__temp1331v__dat__pos,__temp1330v__+8,2);
  memcpy(&__temp1331v__dat__length,__temp1330v__+10,2);
  unpack__temp1262v(__temp1331v__unsafe_ptr,__temp1331v__dat__pos,__temp1331v__dat__length,&__temp1332v__unsafe_ptr,&__temp1332v__dat__pos,&__temp1332v__dat__length,&__temp1332v__dat__first);
  print__temp740v(__temp1332v__unsafe_ptr,__temp1332v__dat__pos,__temp1332v__dat__length,__temp1332v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1322v__unsafe_ptr,&__temp1323v____temp1281v____temp560v____temp475v__);
  if(__temp1323v____temp1281v____temp560v____temp475v__){
  __temp1323v____temp1280v__unsafe_size=0;
  __temp1323v____temp1280v__unsafe_size=__temp1323v____temp1280v__unsafe_size;
  __temp1322v__unsafe_ptr=__temp1322v__unsafe_ptr;
  free__temp466v(&__temp1322v__unsafe_ptr);
  }
  exists__temp412v(__temp1298v__unsafe_ptr,&__temp1299v____temp475v__);
  if(__temp1299v____temp475v__){
  __temp1298v__unsafe_size=0;
  __temp1298v__unsafe_size=__temp1298v__unsafe_size;
  __temp1298v__unsafe_ptr=__temp1298v__unsafe_ptr;
  free__temp466v(&__temp1298v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1294v();return 0;}