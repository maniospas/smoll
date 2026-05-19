#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1322v="manios";
const char* const __temp1295v=" ";
const char* const __temp1314v="name";
const char* const __temp1310v="my";
const char* const __temp365v="\n";
const char* const __temp1306v="hi";
const char* const __temp1318v="is";
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1276v(char** __temp1338v, uint64_t* __temp1339v, uint16_t* __temp1340v, uint16_t* __temp1341v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__temp1338v=unsafe_ptr;
  *__temp1339v=unsafe_size;
  *__temp1340v=unsafe_offset;
  *__temp1341v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1342v) {
  int value=0;
  *__temp1342v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1343v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1343v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1344v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1344v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1345v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1345v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1346v) {
  char* allocated=*__temp1346v;
  if(allocated){
  free(allocated);
  }
  *__temp1346v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1347v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1347v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1348v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1348v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1349v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1349v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1350v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1350v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1351v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1351v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1352v) {
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
  *__temp1352v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1353v, uint64_t* __temp1354v, uint16_t* __temp1355v, uint16_t* __temp1356v, uint64_t size, char** __temp1357v, uint64_t* __temp1358v, uint16_t* __temp1359v, uint16_t* __temp1360v) {
  char* buffer__unsafe_ptr=*__temp1353v;
  uint64_t buffer__unsafe_size=*__temp1354v;
  uint16_t buffer__unsafe_offset=*__temp1355v;
  uint16_t buffer__unsafe_align=*__temp1356v;
  int __temp474v=0;
  uint64_t __temp475v=0;
  char __temp476v__=0;
  uint64_t __temp477v=0;
  char* ptr=0;
  char __temp479v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v=0;
  uint64_t __temp483v__=0;
  uint64_t __temp484v__=0;
  char* __temp486v__unsafe_ptr=0;
  uint64_t __temp486v__unsafe_size=0;
  uint16_t __temp486v__unsafe_offset=0;
  uint16_t __temp486v__unsafe_align=0;
  uint64_t __temp487v=0;
  char __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t __temp490v__=0;
  uint64_t bytes=0;
  char* __temp491v__=0;
  uint64_t __temp492v=0;
  char* __temp494v__unsafe_ptr=0;
  uint64_t __temp494v__unsafe_size=0;
  uint16_t __temp494v__unsafe_offset=0;
  uint16_t __temp494v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp479v__);
  if(__temp479v__){
  __temp480v=0;
  neq__temp142v(size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp482v=0;
  nat__temp470v(buffer__unsafe_align,&__temp483v__);
  mul__temp194v(__temp483v__,size,&__temp484v__);
  zero__temp467v(buffer__unsafe_ptr,__temp482v,__temp484v__);
  }
  __temp486v__unsafe_ptr=buffer__unsafe_ptr;
  __temp486v__unsafe_size=buffer__unsafe_size;
  __temp486v__unsafe_offset=buffer__unsafe_offset;
  __temp486v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp487v=0;
  neq__temp142v(buffer__unsafe_size,__temp487v,&__temp488v__);
  if(__temp488v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp489v__);
  mul__temp194v(__temp489v__,size,&__temp490v__);
  bytes=__temp490v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp491v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp491v__;
  __temp492v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp492v,bytes);
  __temp494v__unsafe_ptr=buffer__unsafe_ptr;
  __temp494v__unsafe_size=buffer__unsafe_size;
  __temp494v__unsafe_offset=buffer__unsafe_offset;
  __temp494v__unsafe_align=buffer__unsafe_align;
  __temp486v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp486v__unsafe_size=__temp494v__unsafe_size;
  __temp486v__unsafe_offset=__temp494v__unsafe_offset;
  __temp486v__unsafe_align=__temp494v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp475v=0;
  neq__temp142v(__temp486v__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp486v__unsafe_size=0;
  __temp486v__unsafe_size=__temp486v__unsafe_size;
  __temp486v__unsafe_ptr=__temp486v__unsafe_ptr;
  free__temp466v(&__temp486v__unsafe_ptr);
  }
  __temp_return:
  *__temp1353v=buffer__unsafe_ptr;
  *__temp1354v=buffer__unsafe_size;
  *__temp1355v=buffer__unsafe_offset;
  *__temp1356v=buffer__unsafe_align;
  *__temp1357v=__temp486v__unsafe_ptr;
  *__temp1358v=__temp486v__unsafe_size;
  *__temp1359v=__temp486v__unsafe_offset;
  *__temp1360v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1361v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1361v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1362v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1362v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1363v) {
  *__temp1363v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1364v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1364v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1365v, uint64_t* __temp1366v, uint16_t* __temp1367v, uint16_t* __temp1368v, uint64_t i, char** __temp1369v) {
  char* buffer__unsafe_ptr=*__temp1365v;
  uint64_t buffer__unsafe_size=*__temp1366v;
  uint16_t buffer__unsafe_offset=*__temp1367v;
  uint16_t buffer__unsafe_align=*__temp1368v;
  char __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  char* __temp551v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp546v__);
  if(__temp546v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp547v__);
  mul__temp194v(i,__temp547v__,&__temp548v__);
  nat__temp470v(buffer__unsafe_offset,&__temp549v__);
  add__temp170v(__temp548v__,__temp549v__,&__temp550v__);
  add__temp468v(buffer__unsafe_ptr,__temp550v__,&__temp551v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1365v=buffer__unsafe_ptr;
  *__temp1366v=buffer__unsafe_size;
  *__temp1367v=buffer__unsafe_offset;
  *__temp1368v=buffer__unsafe_align;
  *__temp1369v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1370v, uint64_t* __temp1371v, uint16_t* __temp1372v, uint16_t* __temp1373v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1370v=unsafe_ptr;
  *__temp1371v=unsafe_size;
  *__temp1372v=unsafe_offset;
  *__temp1373v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1374v) {
  *__temp1374v=to;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1375v) {
  char __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  uint64_t __temp557v__=0;
  char* __temp558v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp553v__);
  if(__temp553v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp554v__);
  mul__temp194v(i,__temp554v__,&__temp555v__);
  nat__temp470v(buffer__unsafe_offset,&__temp556v__);
  add__temp170v(__temp555v__,__temp556v__,&__temp557v__);
  add__temp468v(buffer__unsafe_ptr,__temp557v__,&__temp558v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1375v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1376v, uint64_t* __temp1377v, uint64_t* __temp1378v, char* __temp1379v) {
  goto __temp_return;
  __temp_return:
  *__temp1376v=unsafe_ptr;
  *__temp1377v=dat__pos;
  *__temp1378v=dat__length;
  *__temp1379v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1380v, uint64_t* __temp1381v, uint64_t* __temp1382v, char* __temp1383v) {
  char* unsafe_ptr=0;
  uint64_t __temp594v__=0;
  uint64_t __temp595v=0;
  char __temp596v__=0;
  uint64_t __temp597v__=0;
  uint64_t __temp598v=0;
  char __temp599v__=0;
  char* __temp600v__unsafe_ptr=0;
  uint64_t __temp600v__dat__pos=0;
  uint64_t __temp600v__dat__length=0;
  char __temp600v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp594v__);
  __temp595v=1;
  neq__temp142v(__temp594v__,__temp595v,&__temp596v__);
  if(__temp596v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp597v__);
  __temp598v=0;
  neq__temp142v(__temp597v__,__temp598v,&__temp599v__);
  if(__temp599v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp587v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp600v__unsafe_ptr,&__temp600v__dat__pos,&__temp600v__dat__length,&__temp600v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1380v=__temp600v__unsafe_ptr;
  *__temp1381v=__temp600v__dat__pos;
  *__temp1382v=__temp600v__dat__length;
  *__temp1383v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v) {
  uint64_t __temp626v=0;
  char __temp627v__=0;
  char* __temp628v__=0;
  char __temp629v__value=0;
  char first=0;
  char* __temp630v__unsafe_ptr=0;
  uint64_t __temp630v__dat__pos=0;
  uint64_t __temp630v__dat__length=0;
  char __temp630v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp626v=0;
  neq__temp142v(length,__temp626v,&__temp627v__);
  if(__temp627v__){
  __temp_errcode=get__temp552v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp628v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp628v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp629v__value,__temp628v__,1);
  first=__temp629v__value;
  }
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp630v__unsafe_ptr,&__temp630v__dat__pos,&__temp630v__dat__length,&__temp630v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1384v=__temp630v__unsafe_ptr;
  *__temp1385v=__temp630v__dat__pos;
  *__temp1386v=__temp630v__dat__length;
  *__temp1387v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1388v, uint64_t* __temp1389v, uint64_t* __temp1390v, char* __temp1391v) {
  char* __temp632v__unsafe_ptr=0;
  uint64_t __temp632v__unsafe_size=0;
  uint16_t __temp632v__unsafe_offset=0;
  uint16_t __temp632v__unsafe_align=0;
  char* __temp633v__unsafe_ptr=0;
  uint64_t __temp633v__unsafe_size=0;
  uint16_t __temp633v__unsafe_offset=0;
  uint16_t __temp633v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp634v__=0;
  uint64_t length=0;
  uint64_t __temp635v=0;
  uint64_t __temp636v__=0;
  uint64_t __temp637v=0;
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__dat__pos=0;
  uint64_t __temp638v__dat__length=0;
  char __temp638v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp591v(&__temp632v__unsafe_ptr,&__temp632v__unsafe_size,&__temp632v__unsafe_offset,&__temp632v__unsafe_align);
  __temp633v__unsafe_ptr=__temp632v__unsafe_ptr;
  __temp633v__unsafe_size=__temp632v__unsafe_size;
  __temp633v__unsafe_offset=__temp632v__unsafe_offset;
  __temp633v__unsafe_align=__temp632v__unsafe_align;
  buf__unsafe_ptr=__temp633v__unsafe_ptr;
  buf__unsafe_size=__temp633v__unsafe_size;
  buf__unsafe_offset=__temp633v__unsafe_offset;
  buf__unsafe_align=__temp633v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp634v__);
  buf__unsafe_ptr=__temp634v__;
  if(c){
  length=strlen(c);
  }
  __temp635v=1;
  add__temp170v(length,__temp635v,&__temp636v__);
  buf__unsafe_size=__temp636v__;
  __temp637v=0;
  __temp_errcode=str__temp625v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp637v,length,&__temp638v__unsafe_ptr,&__temp638v__dat__pos,&__temp638v__dat__length,&__temp638v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1388v=__temp638v__unsafe_ptr;
  *__temp1389v=__temp638v__dat__pos;
  *__temp1390v=__temp638v__dat__length;
  *__temp1391v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1392v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1392v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1247v(uint64_t x, uint16_t* __temp1393v) {
  uint64_t __temp1248v=0;
  char __temp1249v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1248v=65535;
  gt__temp271v(x,__temp1248v,&__temp1249v__);
  if(__temp1249v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1393v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1254v(uint64_t _pos, uint64_t _length, uint16_t* __temp1394v, uint16_t* __temp1395v) {
  uint16_t __temp1255v__=0;
  uint16_t pos=0;
  uint16_t __temp1256v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1247v(_pos,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1255v__;
  __temp_errcode=nat16__temp1247v(_length,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1256v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1394v=pos;
  *__temp1395v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1257v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1396v, uint16_t* __temp1397v, uint16_t* __temp1398v) {
  char* unsafe_ptr=0;
  uint16_t __temp1258v__pos=0;
  uint16_t __temp1258v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1254v(s__dat__pos,s__dat__length,&__temp1258v__pos,&__temp1258v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1258v__pos;
  dat__length=__temp1258v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1396v=unsafe_ptr;
  *__temp1397v=dat__pos;
  *__temp1398v=dat__length;
  
  return __temp_errcode;
}

int str__temp1260v(const char* s, char** __temp1399v, uint16_t* __temp1400v, uint16_t* __temp1401v) {
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__dat__pos=0;
  uint64_t __temp1261v__dat__length=0;
  char __temp1261v__dat__first=0;
  char* __temp1262v__unsafe_ptr=0;
  uint16_t __temp1262v__dat__pos=0;
  uint16_t __temp1262v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(s,&__temp1261v__unsafe_ptr,&__temp1261v__dat__pos,&__temp1261v__dat__length,&__temp1261v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1257v(__temp1261v__unsafe_ptr,__temp1261v__dat__pos,__temp1261v__dat__length,__temp1261v__dat__first,&__temp1262v__unsafe_ptr,&__temp1262v__dat__pos,&__temp1262v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1399v=__temp1262v__unsafe_ptr;
  *__temp1400v=__temp1262v__dat__pos;
  *__temp1401v=__temp1262v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1279v(char** __temp1402v, uint64_t* __temp1403v, uint16_t* __temp1404v, uint16_t* __temp1405v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1402v=unsafe_ptr;
  *__temp1403v=unsafe_size;
  *__temp1404v=unsafe_offset;
  *__temp1405v=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1406v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1406v=__temp446v__;
}

static inline __attribute__((always_inline)) void bufpos__temp675v(char** __temp1407v, uint64_t* __temp1408v, uint16_t* __temp1409v, uint16_t* __temp1410v, char** __temp1411v, uint64_t* __temp1412v, uint16_t* __temp1413v, uint16_t* __temp1414v, uint64_t* __temp1415v) {
  char* buf__unsafe_ptr=*__temp1407v;
  uint64_t buf__unsafe_size=*__temp1408v;
  uint16_t buf__unsafe_offset=*__temp1409v;
  uint16_t buf__unsafe_align=*__temp1410v;
  uint64_t __temp676v=0;
  uint64_t __temp677v=0;
  uint64_t pos=0;
  __temp676v=0;
  __temp677v=__temp676v;
  pos=__temp677v;
  goto __temp_return;
  __temp_return:
  *__temp1407v=buf__unsafe_ptr;
  *__temp1408v=buf__unsafe_size;
  *__temp1409v=buf__unsafe_offset;
  *__temp1410v=buf__unsafe_align;
  *__temp1411v=buf__unsafe_ptr;
  *__temp1412v=buf__unsafe_size;
  *__temp1413v=buf__unsafe_offset;
  *__temp1414v=buf__unsafe_align;
  *__temp1415v=pos;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1416v) {
  goto __temp_return;
  __temp_return:
  *__temp1416v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1417v, uint64_t* __temp1418v) {
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
  *__temp1417v=from;
  *__temp1418v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1419v, uint64_t r__to, uint64_t* __temp1420v) {
  uint64_t r__from=*__temp1419v;
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
  *__temp1419v=r__from;
  *__temp1420v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp589v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1421v, uint64_t* __temp1422v, uint64_t* __temp1423v, char* __temp1424v) {
  char* first_pos=0;
  char first=0;
  char* __temp590v__unsafe_ptr=0;
  uint64_t __temp590v__dat__pos=0;
  uint64_t __temp590v__dat__length=0;
  char __temp590v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp587v(unsafe_ptr,pos,length,first,&__temp590v__unsafe_ptr,&__temp590v__dat__pos,&__temp590v__dat__length,&__temp590v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1421v=__temp590v__unsafe_ptr;
  *__temp1422v=__temp590v__dat__pos;
  *__temp1423v=__temp590v__dat__length;
  *__temp1424v=__temp590v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1263v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1425v, uint64_t* __temp1426v, uint64_t* __temp1427v, char* __temp1428v) {
  uint64_t __temp1264v__=0;
  uint64_t __temp1265v__=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__dat__pos=0;
  uint64_t __temp1266v__dat__length=0;
  char __temp1266v__dat__first=0;
  nat__temp470v(m__dat__pos,&__temp1264v__);
  nat__temp470v(m__dat__length,&__temp1265v__);
  str__temp589v(m__unsafe_ptr,__temp1264v__,__temp1265v__,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length,&__temp1266v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1425v=__temp1266v__unsafe_ptr;
  *__temp1426v=__temp1266v__dat__pos;
  *__temp1427v=__temp1266v__dat__length;
  *__temp1428v=__temp1266v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp624v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1429v, uint64_t* __temp1430v, uint64_t* __temp1431v, char* __temp1432v) {
  goto __temp_return;
  __temp_return:
  *__temp1429v=other__unsafe_ptr;
  *__temp1430v=other__dat__pos;
  *__temp1431v=other__dat__length;
  *__temp1432v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp639v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1433v) {
  goto __temp_return;
  __temp_return:
  *__temp1433v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp699v(char** __temp1434v, uint64_t* __temp1435v, uint16_t* __temp1436v, uint16_t* __temp1437v, uint64_t* __temp1438v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1439v, uint64_t* __temp1440v, uint64_t* __temp1441v, char* __temp1442v) {
  char* buf__unsafe_ptr=*__temp1434v;
  uint64_t buf__unsafe_size=*__temp1435v;
  uint16_t buf__unsafe_offset=*__temp1436v;
  uint16_t buf__unsafe_align=*__temp1437v;
  uint64_t pos=*__temp1438v;
  char* __temp700v__unsafe_ptr=0;
  uint64_t __temp700v__dat__pos=0;
  uint64_t __temp700v__dat__length=0;
  char __temp700v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp701v__=0;
  uint64_t __temp702v__=0;
  uint64_t next_pos=0;
  uint64_t __temp703v__=0;
  char __temp704v__=0;
  uint64_t __temp705v=0;
  uint64_t __temp706v__=0;
  uint64_t prev_pos=0;
  char* __temp707v__unsafe_ptr=0;
  uint64_t __temp707v__dat__pos=0;
  uint64_t __temp707v__dat__length=0;
  char __temp707v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp624v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp700v__unsafe_ptr,&__temp700v__dat__pos,&__temp700v__dat__length,&__temp700v__dat__first);
  other__unsafe_ptr=__temp700v__unsafe_ptr;
  other__dat__pos=__temp700v__dat__pos;
  other__dat__length=__temp700v__dat__length;
  other__dat__first=__temp700v__dat__first;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp701v__);
  add__temp170v(pos,__temp701v__,&__temp702v__);
  next_pos=__temp702v__;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp703v__);
  gt__temp271v(next_pos,__temp703v__,&__temp704v__);
  if(__temp704v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp705v=0;
  add__temp170v(pos,__temp705v,&__temp706v__);
  prev_pos=__temp706v__;
  pos=next_pos;
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp707v__unsafe_ptr,&__temp707v__dat__pos,&__temp707v__dat__length,&__temp707v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1434v=buf__unsafe_ptr;
  *__temp1435v=buf__unsafe_size;
  *__temp1436v=buf__unsafe_offset;
  *__temp1437v=buf__unsafe_align;
  *__temp1438v=pos;
  *__temp1439v=__temp707v__unsafe_ptr;
  *__temp1440v=__temp707v__dat__pos;
  *__temp1441v=__temp707v__dat__length;
  *__temp1442v=__temp707v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp708v(char** __temp1443v, uint64_t* __temp1444v, uint16_t* __temp1445v, uint16_t* __temp1446v, uint64_t* __temp1447v, const char* _other, char** __temp1448v, uint64_t* __temp1449v, uint64_t* __temp1450v, char* __temp1451v) {
  char* buf__unsafe_ptr=*__temp1443v;
  uint64_t buf__unsafe_size=*__temp1444v;
  uint16_t buf__unsafe_offset=*__temp1445v;
  uint16_t buf__unsafe_align=*__temp1446v;
  uint64_t pos=*__temp1447v;
  char* __temp709v__unsafe_ptr=0;
  uint64_t __temp709v__dat__pos=0;
  uint64_t __temp709v__dat__length=0;
  char __temp709v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp710v__=0;
  uint64_t __temp711v__=0;
  uint64_t next_pos=0;
  uint64_t __temp712v__=0;
  char __temp713v__=0;
  uint64_t __temp714v=0;
  uint64_t __temp715v__=0;
  uint64_t prev_pos=0;
  char* __temp716v__unsafe_ptr=0;
  uint64_t __temp716v__dat__pos=0;
  uint64_t __temp716v__dat__length=0;
  char __temp716v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(_other,&__temp709v__unsafe_ptr,&__temp709v__dat__pos,&__temp709v__dat__length,&__temp709v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp709v__unsafe_ptr;
  other__dat__pos=__temp709v__dat__pos;
  other__dat__length=__temp709v__dat__length;
  other__dat__first=__temp709v__dat__first;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp710v__);
  add__temp170v(pos,__temp710v__,&__temp711v__);
  next_pos=__temp711v__;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp712v__);
  gt__temp271v(next_pos,__temp712v__,&__temp713v__);
  if(__temp713v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp714v=0;
  add__temp170v(pos,__temp714v,&__temp715v__);
  prev_pos=__temp715v__;
  pos=next_pos;
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp716v__unsafe_ptr,&__temp716v__dat__pos,&__temp716v__dat__length,&__temp716v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1443v=buf__unsafe_ptr;
  *__temp1444v=buf__unsafe_size;
  *__temp1445v=buf__unsafe_offset;
  *__temp1446v=buf__unsafe_align;
  *__temp1447v=pos;
  *__temp1448v=__temp716v__unsafe_ptr;
  *__temp1449v=__temp716v__dat__pos;
  *__temp1450v=__temp716v__dat__length;
  *__temp1451v=__temp716v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1278v(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __temp1452v, uint64_t* __temp1453v, uint64_t* __temp1454v, char* __temp1455v) {
  char* __temp1281v__unsafe_ptr=0;
  uint64_t __temp1281v__unsafe_size=0;
  uint16_t __temp1281v__unsafe_offset=0;
  uint16_t __temp1281v__unsafe_align=0;
  uint64_t __temp1282v=0;
  uint64_t __temp1283v__=0;
  char* __temp1284v__unsafe_ptr=0;
  uint64_t __temp1284v__unsafe_size=0;
  uint16_t __temp1284v__unsafe_offset=0;
  uint16_t __temp1284v__unsafe_align=0;
  uint64_t __temp1285v____temp475v=0;
  char __temp1285v____temp476v__=0;
  char* __temp1286v__buf__unsafe_ptr=0;
  uint64_t __temp1286v__buf__unsafe_size=0;
  uint16_t __temp1286v__buf__unsafe_offset=0;
  uint16_t __temp1286v__buf__unsafe_align=0;
  uint64_t __temp1286v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1287v__=0;
  uint64_t __temp1288v__from=0;
  uint64_t __temp1288v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1289v=0;
  uint64_t __temp1290v__=0;
  uint64_t i=0;
  char* __temp1291v__=0;
  char* __temp1292v__unsafe_ptr=0;
  uint16_t __temp1292v__dat__pos=0;
  uint16_t __temp1292v__dat__length=0;
  char* __temp1293v__unsafe_ptr=0;
  uint64_t __temp1293v__dat__pos=0;
  uint64_t __temp1293v__dat__length=0;
  char __temp1293v__dat__first=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__dat__pos=0;
  uint64_t __temp1294v__dat__length=0;
  char __temp1294v__dat__first=0;
  char* __temp1296v__unsafe_ptr=0;
  uint64_t __temp1296v__dat__pos=0;
  uint64_t __temp1296v__dat__length=0;
  char __temp1296v__dat__first=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__dat__pos=0;
  uint64_t __temp1297v__dat__length=0;
  char __temp1297v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1279v(&__temp1281v__unsafe_ptr,&__temp1281v__unsafe_size,&__temp1281v__unsafe_offset,&__temp1281v__unsafe_align);
  __temp1282v=4;
  KB__temp444v(__temp1282v,&__temp1283v__);
  __temp_errcode=alloc__temp473v(&__temp1281v__unsafe_ptr,&__temp1281v__unsafe_size,&__temp1281v__unsafe_offset,&__temp1281v__unsafe_align,__temp1283v__,&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp675v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&__temp1286v__buf__unsafe_ptr,&__temp1286v__buf__unsafe_size,&__temp1286v__buf__unsafe_offset,&__temp1286v__buf__unsafe_align,&__temp1286v__pos);
  mem__pos=__temp1286v__pos;
  len__temp559v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1287v__);
  range__temp436v(__temp1287v__,&__temp1288v__from,&__temp1288v__to);
  iter__from=__temp1288v__from;
  iter__to=__temp1288v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1290v__);
  __temp1289v=__temp_complain;
  i=__temp1290v__;
  __temp1289v=__temp1289v==0;
  if(!__temp1289v){
  break;
  }
  __temp_errcode=get__temp552v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1291v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1291v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1292v__unsafe_ptr,__temp1291v__,8);
  memcpy(&__temp1292v__dat__pos,__temp1291v__+8,2);
  memcpy(&__temp1292v__dat__length,__temp1291v__+10,2);
  unpack__temp1263v(__temp1292v__unsafe_ptr,__temp1292v__dat__pos,__temp1292v__dat__length,&__temp1293v__unsafe_ptr,&__temp1293v__dat__pos,&__temp1293v__dat__length,&__temp1293v__dat__first);
  __temp_errcode=copy__temp699v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&mem__pos,__temp1293v__unsafe_ptr,__temp1293v__dat__pos,__temp1293v__dat__length,__temp1293v__dat__first,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length,&__temp1294v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp708v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&mem__pos,__temp1295v,&__temp1296v__unsafe_ptr,&__temp1296v__dat__pos,&__temp1296v__dat__length,&__temp1296v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp625v(__temp1284v__unsafe_ptr,__temp1284v__unsafe_size,__temp1284v__unsafe_offset,__temp1284v__unsafe_align,start,mem__pos,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1297v__unsafe_ptr=__temp1284v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:__temp1285v____temp475v=0;
  neq__temp142v(__temp1284v__unsafe_size,__temp1285v____temp475v,&__temp1285v____temp476v__);
  if(__temp1285v____temp476v__){
  __temp1284v__unsafe_size=0;
  __temp1284v__unsafe_size=__temp1284v__unsafe_size;
  __temp1297v__unsafe_ptr=__temp1297v__unsafe_ptr;
  free__temp466v(&__temp1297v__unsafe_ptr);
  }
  __temp_return:
  *__temp1452v=__temp1297v__unsafe_ptr;
  *__temp1453v=__temp1297v__dat__pos;
  *__temp1454v=__temp1297v__dat__length;
  *__temp1455v=__temp1297v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1298v() {
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__unsafe_size=0;
  uint16_t __temp1299v__unsafe_offset=0;
  uint16_t __temp1299v__unsafe_align=0;
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__unsafe_size=0;
  uint16_t __temp1300v__unsafe_offset=0;
  uint16_t __temp1300v__unsafe_align=0;
  uint64_t __temp1301v=0;
  char* __temp1302v__unsafe_ptr=0;
  uint64_t __temp1302v__unsafe_size=0;
  uint16_t __temp1302v__unsafe_offset=0;
  uint16_t __temp1302v__unsafe_align=0;
  uint64_t __temp1303v____temp475v=0;
  char __temp1303v____temp476v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
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
  char* __temp1323v__unsafe_ptr=0;
  uint16_t __temp1323v__dat__pos=0;
  uint16_t __temp1323v__dat__length=0;
  uint64_t __temp1324v=0;
  char* __temp1325v__=0;
  char* __temp1326v__unsafe_ptr=0;
  uint64_t __temp1326v__dat__pos=0;
  uint64_t __temp1326v__dat__length=0;
  char __temp1326v__dat__first=0;
  uint64_t __temp1327v____temp1285v____temp475v=0;
  uint64_t __temp1327v____temp1284v__unsafe_size=0;
  char __temp1327v____temp1285v____temp476v__=0;
  char* __temp1328v__unsafe_ptr=0;
  uint16_t __temp1328v__dat__pos=0;
  uint16_t __temp1328v__dat__length=0;
  uint64_t __temp1329v__=0;
  uint64_t __temp1330v__from=0;
  uint64_t __temp1330v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1331v=0;
  uint64_t __temp1332v__=0;
  uint64_t j=0;
  char* __temp1334v__=0;
  char* __temp1335v__unsafe_ptr=0;
  uint16_t __temp1335v__dat__pos=0;
  uint16_t __temp1335v__dat__length=0;
  char* __temp1336v__unsafe_ptr=0;
  uint64_t __temp1336v__dat__pos=0;
  uint64_t __temp1336v__dat__length=0;
  char __temp1336v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1276v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
  __temp1300v__unsafe_ptr=__temp1299v__unsafe_ptr;
  __temp1300v__unsafe_size=__temp1299v__unsafe_size;
  __temp1300v__unsafe_offset=__temp1299v__unsafe_offset;
  __temp1300v__unsafe_align=__temp1299v__unsafe_align;
  __temp1301v=6;
  __temp_errcode=alloc__temp473v(&__temp1300v__unsafe_ptr,&__temp1300v__unsafe_size,&__temp1300v__unsafe_offset,&__temp1300v__unsafe_align,__temp1301v,&__temp1302v__unsafe_ptr,&__temp1302v__unsafe_size,&__temp1302v__unsafe_offset,&__temp1302v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1302v__unsafe_ptr;
  buff__unsafe_size=__temp1302v__unsafe_size;
  buff__unsafe_offset=__temp1302v__unsafe_offset;
  buff__unsafe_align=__temp1302v__unsafe_align;
  __temp1304v=0;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1304v,&__temp1305v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1306v,&__temp1307v__unsafe_ptr,&__temp1307v__dat__pos,&__temp1307v__dat__length);
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
  __temp1308v=1;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1308v,&__temp1309v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1310v,&__temp1311v__unsafe_ptr,&__temp1311v__dat__pos,&__temp1311v__dat__length);
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
  __temp1312v=2;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1312v,&__temp1313v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1314v,&__temp1315v__unsafe_ptr,&__temp1315v__dat__pos,&__temp1315v__dat__length);
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
  __temp1316v=3;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1316v,&__temp1317v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1318v,&__temp1319v__unsafe_ptr,&__temp1319v__dat__pos,&__temp1319v__dat__length);
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
  __temp1320v=4;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1320v,&__temp1321v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1322v,&__temp1323v__unsafe_ptr,&__temp1323v__dat__pos,&__temp1323v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1321v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1321v__,&__temp1323v__unsafe_ptr,8);
  memcpy(__temp1321v__+8,&__temp1323v__dat__pos,2);
  memcpy(__temp1321v__+10,&__temp1323v__dat__length,2);
  __temp1324v=5;
  __temp_errcode=mutget__temp545v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1324v,&__temp1325v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1278v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1326v__unsafe_ptr,&__temp1326v__dat__pos,&__temp1326v__dat__length,&__temp1326v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1257v(__temp1326v__unsafe_ptr,__temp1326v__dat__pos,__temp1326v__dat__length,__temp1326v__dat__first,&__temp1328v__unsafe_ptr,&__temp1328v__dat__pos,&__temp1328v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1325v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1325v__,&__temp1328v__unsafe_ptr,8);
  memcpy(__temp1325v__+8,&__temp1328v__dat__pos,2);
  memcpy(__temp1325v__+10,&__temp1328v__dat__length,2);
  len__temp559v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1329v__);
  range__temp436v(__temp1329v__,&__temp1330v__from,&__temp1330v__to);
  full_iter__from=__temp1330v__from;
  full_iter__to=__temp1330v__to;
  while(1){
  __temp_complain=next__temp440v(&full_iter__from,full_iter__to,&__temp1332v__);
  __temp1331v=__temp_complain;
  j=__temp1332v__;
  __temp1331v=__temp1331v==0;
  if(!__temp1331v){
  break;
  }
  print__temp374v(j,__temp1295v);
  __temp_errcode=get__temp552v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1334v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1335v__unsafe_ptr,__temp1334v__,8);
  memcpy(&__temp1335v__dat__pos,__temp1334v__+8,2);
  memcpy(&__temp1335v__dat__length,__temp1334v__+10,2);
  unpack__temp1263v(__temp1335v__unsafe_ptr,__temp1335v__dat__pos,__temp1335v__dat__length,&__temp1336v__unsafe_ptr,&__temp1336v__dat__pos,&__temp1336v__dat__length,&__temp1336v__dat__first);
  print__temp741v(__temp1336v__unsafe_ptr,__temp1336v__dat__pos,__temp1336v__dat__length,__temp1336v__dat__first);
  }
  
  __temp_failure:__temp1327v____temp1285v____temp475v=0;
  neq__temp142v(__temp1327v____temp1284v__unsafe_size,__temp1327v____temp1285v____temp475v,&__temp1327v____temp1285v____temp476v__);
  if(__temp1327v____temp1285v____temp476v__){
  __temp1327v____temp1284v__unsafe_size=0;
  __temp1327v____temp1284v__unsafe_size=__temp1327v____temp1284v__unsafe_size;
  __temp1326v__unsafe_ptr=__temp1326v__unsafe_ptr;
  free__temp466v(&__temp1326v__unsafe_ptr);
  }
  __temp1303v____temp475v=0;
  neq__temp142v(__temp1302v__unsafe_size,__temp1303v____temp475v,&__temp1303v____temp476v__);
  if(__temp1303v____temp476v__){
  __temp1302v__unsafe_size=0;
  __temp1302v__unsafe_size=__temp1302v__unsafe_size;
  __temp1302v__unsafe_ptr=__temp1302v__unsafe_ptr;
  free__temp466v(&__temp1302v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1298v();return 0;}