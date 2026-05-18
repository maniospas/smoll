#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1307v="my";
const char* const __temp365v="\n";
const char* const __temp1311v="name";
const char* const __temp1319v="manios";
const char* const __temp1315v="is";
const char* const __temp1292v=" ";
const char* const __temp1303v="hi";
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
"cannot resize a buffer with offset",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1275v(char** __temp1335v, uint64_t* __temp1336v, uint16_t* __temp1337v, uint16_t* __temp1338v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__temp1335v=unsafe_ptr;
  *__temp1336v=unsafe_size;
  *__temp1337v=unsafe_offset;
  *__temp1338v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1339v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1339v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1340v) {
  char* allocated=*__temp1340v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1340v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1341v) {
  int value=0;
  *__temp1341v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1342v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1342v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1343v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1343v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1344v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1344v=z;
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

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1346v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1346v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1347v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1347v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1348v) {
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
  *__temp1348v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1349v, uint64_t* __temp1350v, uint16_t* __temp1351v, uint16_t* __temp1352v, uint64_t size, char** __temp1353v, uint64_t* __temp1354v, uint16_t* __temp1355v, uint16_t* __temp1356v) {
  char* buffer__unsafe_ptr=*__temp1349v;
  uint64_t buffer__unsafe_size=*__temp1350v;
  uint16_t buffer__unsafe_offset=*__temp1351v;
  uint16_t buffer__unsafe_align=*__temp1352v;
  int __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp477v__=0;
  uint64_t __temp478v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t bytes=0;
  char* __temp484v__=0;
  uint64_t __temp485v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  neq__temp142v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  nat__temp465v(buffer__unsafe_align,&__temp477v__);
  mul__temp194v(__temp477v__,size,&__temp478v__);
  zero__temp462v(buffer__unsafe_ptr,__temp476v,__temp478v__);
  }
  goto __temp_return;
  }
  __temp480v=0;
  neq__temp142v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  bytes=__temp483v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  __temp485v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp485v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp470v__);
  if(__temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
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

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1360v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1360v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp541v(char** __temp1361v, uint64_t* __temp1362v, uint16_t* __temp1363v, uint16_t* __temp1364v, uint64_t i, char** __temp1365v) {
  char* buffer__unsafe_ptr=*__temp1361v;
  uint64_t buffer__unsafe_size=*__temp1362v;
  uint16_t buffer__unsafe_offset=*__temp1363v;
  uint16_t buffer__unsafe_align=*__temp1364v;
  char __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  char* __temp547v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp542v__);
  if(__temp542v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp543v__);
  mul__temp194v(i,__temp543v__,&__temp544v__);
  nat__temp465v(buffer__unsafe_offset,&__temp545v__);
  add__temp170v(__temp544v__,__temp545v__,&__temp546v__);
  add__temp463v(buffer__unsafe_ptr,__temp546v__,&__temp547v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1361v=buffer__unsafe_ptr;
  *__temp1362v=buffer__unsafe_size;
  *__temp1363v=buffer__unsafe_offset;
  *__temp1364v=buffer__unsafe_align;
  *__temp1365v=__temp547v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp557v(char** __temp1366v, uint64_t* __temp1367v, uint16_t* __temp1368v, uint16_t* __temp1369v) {
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

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1371v) {
  char __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  char* __temp554v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp549v__);
  if(__temp549v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp550v__);
  mul__temp194v(i,__temp550v__,&__temp551v__);
  nat__temp465v(buffer__unsafe_offset,&__temp552v__);
  add__temp170v(__temp551v__,__temp552v__,&__temp553v__);
  add__temp463v(buffer__unsafe_ptr,__temp553v__,&__temp554v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1371v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1372v, uint64_t* __temp1373v, uint64_t* __temp1374v, char* __temp1375v) {
  goto __temp_return;
  __temp_return:
  *__temp1372v=unsafe_ptr;
  *__temp1373v=dat__pos;
  *__temp1374v=dat__length;
  *__temp1375v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp597v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1376v, uint64_t* __temp1377v, uint64_t* __temp1378v, char* __temp1379v) {
  char* unsafe_ptr=0;
  uint64_t __temp598v__=0;
  uint64_t __temp599v=0;
  char __temp600v__=0;
  uint64_t __temp601v__=0;
  uint64_t __temp602v=0;
  char __temp603v__=0;
  char* __temp604v__unsafe_ptr=0;
  uint64_t __temp604v__dat__pos=0;
  uint64_t __temp604v__dat__length=0;
  char __temp604v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp465v(buf__unsafe_align,&__temp598v__);
  __temp599v=1;
  neq__temp142v(__temp598v__,__temp599v,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buf__unsafe_offset,&__temp601v__);
  __temp602v=0;
  neq__temp142v(__temp601v__,__temp602v,&__temp603v__);
  if(__temp603v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  str__temp593v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp604v__unsafe_ptr,&__temp604v__dat__pos,&__temp604v__dat__length,&__temp604v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1376v=__temp604v__unsafe_ptr;
  *__temp1377v=__temp604v__dat__pos;
  *__temp1378v=__temp604v__dat__length;
  *__temp1379v=__temp604v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp629v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1380v, uint64_t* __temp1381v, uint64_t* __temp1382v, char* __temp1383v) {
  uint64_t __temp630v=0;
  char __temp631v__=0;
  char* __temp632v__=0;
  char __temp633v__value=0;
  char first=0;
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__dat__pos=0;
  uint64_t __temp634v__dat__length=0;
  char __temp634v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp630v=0;
  neq__temp142v(length,__temp630v,&__temp631v__);
  if(__temp631v__){
  __temp_errcode=get__temp548v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp632v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp632v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp633v__value,__temp632v__,1);
  first=__temp633v__value;
  }
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp634v__unsafe_ptr,&__temp634v__dat__pos,&__temp634v__dat__length,&__temp634v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1380v=__temp634v__unsafe_ptr;
  *__temp1381v=__temp634v__dat__pos;
  *__temp1382v=__temp634v__dat__length;
  *__temp1383v=__temp634v__dat__first;
  
  return __temp_errcode;
}

int str__temp635v(const char* c, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v) {
  char* __temp636v__unsafe_ptr=0;
  uint64_t __temp636v__unsafe_size=0;
  uint16_t __temp636v__unsafe_offset=0;
  uint16_t __temp636v__unsafe_align=0;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__unsafe_size=0;
  uint16_t __temp637v__unsafe_offset=0;
  uint16_t __temp637v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp638v__=0;
  uint64_t length=0;
  uint64_t __temp639v=0;
  uint64_t __temp640v__=0;
  uint64_t __temp641v=0;
  char* __temp642v__unsafe_ptr=0;
  uint64_t __temp642v__dat__pos=0;
  uint64_t __temp642v__dat__length=0;
  char __temp642v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp557v(&__temp636v__unsafe_ptr,&__temp636v__unsafe_size,&__temp636v__unsafe_offset,&__temp636v__unsafe_align);
  __temp637v__unsafe_ptr=__temp636v__unsafe_ptr;
  __temp637v__unsafe_size=__temp636v__unsafe_size;
  __temp637v__unsafe_offset=__temp636v__unsafe_offset;
  __temp637v__unsafe_align=__temp636v__unsafe_align;
  buf__unsafe_ptr=__temp637v__unsafe_ptr;
  buf__unsafe_size=__temp637v__unsafe_size;
  buf__unsafe_offset=__temp637v__unsafe_offset;
  buf__unsafe_align=__temp637v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp638v__);
  buf__unsafe_ptr=__temp638v__;
  if(c){
  length=strlen(c);
  }
  __temp639v=1;
  add__temp170v(length,__temp639v,&__temp640v__);
  buf__unsafe_size=__temp640v__;
  __temp641v=0;
  __temp_errcode=str__temp629v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp641v,length,&__temp642v__unsafe_ptr,&__temp642v__dat__pos,&__temp642v__dat__length,&__temp642v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1384v=__temp642v__unsafe_ptr;
  *__temp1385v=__temp642v__dat__pos;
  *__temp1386v=__temp642v__dat__length;
  *__temp1387v=__temp642v__dat__first;
  
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
  __temp_errcode=str__temp635v(s,&__temp1260v__unsafe_ptr,&__temp1260v__dat__pos,&__temp1260v__dat__length,&__temp1260v__dat__first);
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

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1398v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1398v=__temp445v__;
}

static inline __attribute__((always_inline)) int alloc__temp556v(uint64_t size, char** __temp1399v, uint64_t* __temp1400v, uint16_t* __temp1401v, uint16_t* __temp1402v) {
  char* __temp559v__unsafe_ptr=0;
  uint64_t __temp559v__unsafe_size=0;
  uint16_t __temp559v__unsafe_offset=0;
  uint16_t __temp559v__unsafe_align=0;
  char* __temp560v__unsafe_ptr=0;
  uint64_t __temp560v__unsafe_size=0;
  uint16_t __temp560v__unsafe_offset=0;
  uint16_t __temp560v__unsafe_align=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__unsafe_size=0;
  uint16_t __temp561v__unsafe_offset=0;
  uint16_t __temp561v__unsafe_align=0;
  char __temp562v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp557v(&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_offset,&__temp559v__unsafe_align);
  __temp560v__unsafe_ptr=__temp559v__unsafe_ptr;
  __temp560v__unsafe_size=__temp559v__unsafe_size;
  __temp560v__unsafe_offset=__temp559v__unsafe_offset;
  __temp560v__unsafe_align=__temp559v__unsafe_align;
  __temp_errcode=alloc__temp468v(&__temp560v__unsafe_ptr,&__temp560v__unsafe_size,&__temp560v__unsafe_offset,&__temp560v__unsafe_align,size,&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_offset,&__temp561v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp561v__unsafe_ptr,&__temp562v____temp470v__);
  if(__temp562v____temp470v__){
  __temp561v__unsafe_size=0;
  __temp561v__unsafe_size=__temp561v__unsafe_size;
  free__temp461v(&__temp561v__unsafe_ptr);
  }
  __temp_return:
  *__temp1399v=__temp561v__unsafe_ptr;
  *__temp1400v=__temp561v__unsafe_size;
  *__temp1401v=__temp561v__unsafe_offset;
  *__temp1402v=__temp561v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1403v, uint64_t* __temp1404v, uint16_t* __temp1405v, uint16_t* __temp1406v, char** __temp1407v, uint64_t* __temp1408v, uint16_t* __temp1409v, uint16_t* __temp1410v, uint64_t* __temp1411v) {
  char* buf__unsafe_ptr=*__temp1403v;
  uint64_t buf__unsafe_size=*__temp1404v;
  uint16_t buf__unsafe_offset=*__temp1405v;
  uint16_t buf__unsafe_align=*__temp1406v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
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

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1412v) {
  goto __temp_return;
  __temp_return:
  *__temp1412v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1413v, uint64_t* __temp1414v) {
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
  *__temp1413v=from;
  *__temp1414v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1415v, uint64_t r__to, uint64_t* __temp1416v) {
  uint64_t r__from=*__temp1415v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1415v=r__from;
  *__temp1416v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1417v, uint64_t* __temp1418v, uint64_t* __temp1419v, char* __temp1420v) {
  char* first_pos=0;
  char first=0;
  char* __temp596v__unsafe_ptr=0;
  uint64_t __temp596v__dat__pos=0;
  uint64_t __temp596v__dat__length=0;
  char __temp596v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp593v(unsafe_ptr,pos,length,first,&__temp596v__unsafe_ptr,&__temp596v__dat__pos,&__temp596v__dat__length,&__temp596v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1417v=__temp596v__unsafe_ptr;
  *__temp1418v=__temp596v__dat__pos;
  *__temp1419v=__temp596v__dat__length;
  *__temp1420v=__temp596v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1262v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1421v, uint64_t* __temp1422v, uint64_t* __temp1423v, char* __temp1424v) {
  uint64_t __temp1263v__=0;
  uint64_t __temp1264v__=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__dat__pos=0;
  uint64_t __temp1265v__dat__length=0;
  char __temp1265v__dat__first=0;
  nat__temp465v(m__dat__pos,&__temp1263v__);
  nat__temp465v(m__dat__length,&__temp1264v__);
  str__temp595v(m__unsafe_ptr,__temp1263v__,__temp1264v__,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length,&__temp1265v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1421v=__temp1265v__unsafe_ptr;
  *__temp1422v=__temp1265v__dat__pos;
  *__temp1423v=__temp1265v__dat__length;
  *__temp1424v=__temp1265v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp628v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1425v, uint64_t* __temp1426v, uint64_t* __temp1427v, char* __temp1428v) {
  goto __temp_return;
  __temp_return:
  *__temp1425v=other__unsafe_ptr;
  *__temp1426v=other__dat__pos;
  *__temp1427v=other__dat__length;
  *__temp1428v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp643v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1429v) {
  goto __temp_return;
  __temp_return:
  *__temp1429v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1430v, uint64_t* __temp1431v, uint16_t* __temp1432v, uint16_t* __temp1433v, uint64_t* __temp1434v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1435v, uint64_t* __temp1436v, uint64_t* __temp1437v, char* __temp1438v) {
  char* buf__unsafe_ptr=*__temp1430v;
  uint64_t buf__unsafe_size=*__temp1431v;
  uint16_t buf__unsafe_offset=*__temp1432v;
  uint16_t buf__unsafe_align=*__temp1433v;
  uint64_t pos=*__temp1434v;
  char* __temp701v__unsafe_ptr=0;
  uint64_t __temp701v__dat__pos=0;
  uint64_t __temp701v__dat__length=0;
  char __temp701v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp702v__=0;
  uint64_t __temp703v__=0;
  uint64_t next_pos=0;
  uint64_t __temp704v__=0;
  char __temp705v__=0;
  uint64_t __temp706v=0;
  uint64_t __temp707v__=0;
  uint64_t prev_pos=0;
  char* __temp708v__unsafe_ptr=0;
  uint64_t __temp708v__dat__pos=0;
  uint64_t __temp708v__dat__length=0;
  char __temp708v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp628v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
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
  *__temp1435v=__temp708v__unsafe_ptr;
  *__temp1436v=__temp708v__dat__pos;
  *__temp1437v=__temp708v__dat__length;
  *__temp1438v=__temp708v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp709v(char** __temp1439v, uint64_t* __temp1440v, uint16_t* __temp1441v, uint16_t* __temp1442v, uint64_t* __temp1443v, const char* _other, char** __temp1444v, uint64_t* __temp1445v, uint64_t* __temp1446v, char* __temp1447v) {
  char* buf__unsafe_ptr=*__temp1439v;
  uint64_t buf__unsafe_size=*__temp1440v;
  uint16_t buf__unsafe_offset=*__temp1441v;
  uint16_t buf__unsafe_align=*__temp1442v;
  uint64_t pos=*__temp1443v;
  char* __temp710v__unsafe_ptr=0;
  uint64_t __temp710v__dat__pos=0;
  uint64_t __temp710v__dat__length=0;
  char __temp710v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp711v__=0;
  uint64_t __temp712v__=0;
  uint64_t next_pos=0;
  uint64_t __temp713v__=0;
  char __temp714v__=0;
  uint64_t __temp715v=0;
  uint64_t __temp716v__=0;
  uint64_t prev_pos=0;
  char* __temp717v__unsafe_ptr=0;
  uint64_t __temp717v__dat__pos=0;
  uint64_t __temp717v__dat__length=0;
  char __temp717v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp635v(_other,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp710v__unsafe_ptr;
  other__dat__pos=__temp710v__dat__pos;
  other__dat__length=__temp710v__dat__length;
  other__dat__first=__temp710v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp711v__);
  add__temp170v(pos,__temp711v__,&__temp712v__);
  next_pos=__temp712v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp713v__);
  gt__temp271v(next_pos,__temp713v__,&__temp714v__);
  if(__temp714v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp715v=0;
  add__temp170v(pos,__temp715v,&__temp716v__);
  prev_pos=__temp716v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp717v__unsafe_ptr,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
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
  *__temp1444v=__temp717v__unsafe_ptr;
  *__temp1445v=__temp717v__dat__pos;
  *__temp1446v=__temp717v__dat__length;
  *__temp1447v=__temp717v__dat__first;
  
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
  char __temp1281v____temp562v____temp470v__=0;
  char* __temp1282v__unsafe_ptr=0;
  uint64_t __temp1282v__unsafe_size=0;
  uint16_t __temp1282v__unsafe_offset=0;
  uint16_t __temp1282v__unsafe_align=0;
  char* __temp1283v__buf__unsafe_ptr=0;
  uint64_t __temp1283v__buf__unsafe_size=0;
  uint16_t __temp1283v__buf__unsafe_offset=0;
  uint16_t __temp1283v__buf__unsafe_align=0;
  uint64_t __temp1283v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1284v__=0;
  uint64_t __temp1285v__from=0;
  uint64_t __temp1285v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1286v=0;
  uint64_t __temp1287v__=0;
  uint64_t i=0;
  char* __temp1288v__=0;
  char* __temp1289v__unsafe_ptr=0;
  uint16_t __temp1289v__dat__pos=0;
  uint16_t __temp1289v__dat__length=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__dat__pos=0;
  uint64_t __temp1290v__dat__length=0;
  char __temp1290v__dat__first=0;
  char* __temp1291v__unsafe_ptr=0;
  uint64_t __temp1291v__dat__pos=0;
  uint64_t __temp1291v__dat__length=0;
  char __temp1291v__dat__first=0;
  char* __temp1293v__unsafe_ptr=0;
  uint64_t __temp1293v__dat__pos=0;
  uint64_t __temp1293v__dat__length=0;
  char __temp1293v__dat__first=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__dat__pos=0;
  uint64_t __temp1294v__dat__length=0;
  char __temp1294v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1278v=4;
  KB__temp443v(__temp1278v,&__temp1279v__);
  __temp_errcode=alloc__temp556v(__temp1279v__,&__temp1280v__unsafe_ptr,&__temp1280v__unsafe_size,&__temp1280v__unsafe_offset,&__temp1280v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1282v__unsafe_ptr=__temp1280v__unsafe_ptr;
  __temp1282v__unsafe_size=__temp1280v__unsafe_size;
  __temp1282v__unsafe_offset=__temp1280v__unsafe_offset;
  __temp1282v__unsafe_align=__temp1280v__unsafe_align;
  bufpos__temp676v(&__temp1282v__unsafe_ptr,&__temp1282v__unsafe_size,&__temp1282v__unsafe_offset,&__temp1282v__unsafe_align,&__temp1283v__buf__unsafe_ptr,&__temp1283v__buf__unsafe_size,&__temp1283v__buf__unsafe_offset,&__temp1283v__buf__unsafe_align,&__temp1283v__pos);
  mem__buf__unsafe_ptr=__temp1283v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1283v__buf__unsafe_size;
  mem__buf__unsafe_offset=__temp1283v__buf__unsafe_offset;
  mem__buf__unsafe_align=__temp1283v__buf__unsafe_align;
  mem__pos=__temp1283v__pos;
  len__temp555v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1284v__);
  range__temp435v(__temp1284v__,&__temp1285v__from,&__temp1285v__to);
  iter__from=__temp1285v__from;
  iter__to=__temp1285v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1287v__);
  __temp1286v=__temp_complain;
  i=__temp1287v__;
  __temp1286v=__temp1286v==0;
  if(!__temp1286v){
  break;
  }
  __temp_errcode=get__temp548v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1288v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1288v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1289v__unsafe_ptr,__temp1288v__,8);
  memcpy(&__temp1289v__dat__pos,__temp1288v__+8,2);
  memcpy(&__temp1289v__dat__length,__temp1288v__+10,2);
  unpack__temp1262v(__temp1289v__unsafe_ptr,__temp1289v__dat__pos,__temp1289v__dat__length,&__temp1290v__unsafe_ptr,&__temp1290v__dat__pos,&__temp1290v__dat__length,&__temp1290v__dat__first);
  __temp_errcode=copy__temp700v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,__temp1290v__unsafe_ptr,__temp1290v__dat__pos,__temp1290v__dat__length,__temp1290v__dat__first,&__temp1291v__unsafe_ptr,&__temp1291v__dat__pos,&__temp1291v__dat__length,&__temp1291v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,__temp1292v,&__temp1293v__unsafe_ptr,&__temp1293v__dat__pos,&__temp1293v__dat__length,&__temp1293v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp629v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_offset,mem__buf__unsafe_align,start,mem__pos,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length,&__temp1294v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1294v__unsafe_ptr,&__temp1281v____temp562v____temp470v__);
  if(__temp1281v____temp562v____temp470v__){
  __temp1280v__unsafe_size=0;
  __temp1280v__unsafe_size=__temp1280v__unsafe_size;
  free__temp461v(&__temp1294v__unsafe_ptr);
  }
  __temp_return:
  *__temp1448v=buff__unsafe_ptr;
  *__temp1449v=buff__unsafe_size;
  *__temp1450v=buff__unsafe_offset;
  *__temp1451v=buff__unsafe_align;
  *__temp1452v=__temp1294v__unsafe_ptr;
  *__temp1453v=__temp1294v__dat__pos;
  *__temp1454v=__temp1294v__dat__length;
  *__temp1455v=__temp1294v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1295v() {
  char* __temp1296v__unsafe_ptr=0;
  uint64_t __temp1296v__unsafe_size=0;
  uint16_t __temp1296v__unsafe_offset=0;
  uint16_t __temp1296v__unsafe_align=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__unsafe_size=0;
  uint16_t __temp1297v__unsafe_offset=0;
  uint16_t __temp1297v__unsafe_align=0;
  uint64_t __temp1298v=0;
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__unsafe_size=0;
  uint16_t __temp1299v__unsafe_offset=0;
  uint16_t __temp1299v__unsafe_align=0;
  char __temp1300v____temp470v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __temp1301v=0;
  char* __temp1302v__=0;
  char* __temp1304v__unsafe_ptr=0;
  uint16_t __temp1304v__dat__pos=0;
  uint16_t __temp1304v__dat__length=0;
  uint64_t __temp1305v=0;
  char* __temp1306v__=0;
  char* __temp1308v__unsafe_ptr=0;
  uint16_t __temp1308v__dat__pos=0;
  uint16_t __temp1308v__dat__length=0;
  uint64_t __temp1309v=0;
  char* __temp1310v__=0;
  char* __temp1312v__unsafe_ptr=0;
  uint16_t __temp1312v__dat__pos=0;
  uint16_t __temp1312v__dat__length=0;
  uint64_t __temp1313v=0;
  char* __temp1314v__=0;
  char* __temp1316v__unsafe_ptr=0;
  uint16_t __temp1316v__dat__pos=0;
  uint16_t __temp1316v__dat__length=0;
  uint64_t __temp1317v=0;
  char* __temp1318v__=0;
  char* __temp1320v__unsafe_ptr=0;
  uint16_t __temp1320v__dat__pos=0;
  uint16_t __temp1320v__dat__length=0;
  uint64_t __temp1321v=0;
  char* __temp1322v__=0;
  char* __temp1323v__unsafe_ptr=0;
  uint64_t __temp1323v__dat__pos=0;
  uint64_t __temp1323v__dat__length=0;
  char __temp1323v__dat__first=0;
  char __temp1324v____temp1281v____temp562v____temp470v__=0;
  uint64_t __temp1324v____temp1280v__unsafe_size=0;
  char* __temp1325v__unsafe_ptr=0;
  uint16_t __temp1325v__dat__pos=0;
  uint16_t __temp1325v__dat__length=0;
  uint64_t __temp1326v__=0;
  uint64_t __temp1327v__from=0;
  uint64_t __temp1327v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1328v=0;
  uint64_t __temp1329v__=0;
  uint64_t j=0;
  char* __temp1331v__=0;
  char* __temp1332v__unsafe_ptr=0;
  uint16_t __temp1332v__dat__pos=0;
  uint16_t __temp1332v__dat__length=0;
  char* __temp1333v__unsafe_ptr=0;
  uint64_t __temp1333v__dat__pos=0;
  uint64_t __temp1333v__dat__length=0;
  char __temp1333v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1275v(&__temp1296v__unsafe_ptr,&__temp1296v__unsafe_size,&__temp1296v__unsafe_offset,&__temp1296v__unsafe_align);
  __temp1297v__unsafe_ptr=__temp1296v__unsafe_ptr;
  __temp1297v__unsafe_size=__temp1296v__unsafe_size;
  __temp1297v__unsafe_offset=__temp1296v__unsafe_offset;
  __temp1297v__unsafe_align=__temp1296v__unsafe_align;
  __temp1298v=6;
  __temp_errcode=alloc__temp468v(&__temp1297v__unsafe_ptr,&__temp1297v__unsafe_size,&__temp1297v__unsafe_offset,&__temp1297v__unsafe_align,__temp1298v,&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1299v__unsafe_ptr;
  buff__unsafe_size=__temp1299v__unsafe_size;
  buff__unsafe_offset=__temp1299v__unsafe_offset;
  buff__unsafe_align=__temp1299v__unsafe_align;
  __temp1301v=0;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1301v,&__temp1302v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1303v,&__temp1304v__unsafe_ptr,&__temp1304v__dat__pos,&__temp1304v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1302v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1302v__,&__temp1304v__unsafe_ptr,8);
  memcpy(__temp1302v__+8,&__temp1304v__dat__pos,2);
  memcpy(__temp1302v__+10,&__temp1304v__dat__length,2);
  __temp1305v=1;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1305v,&__temp1306v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1307v,&__temp1308v__unsafe_ptr,&__temp1308v__dat__pos,&__temp1308v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1306v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1306v__,&__temp1308v__unsafe_ptr,8);
  memcpy(__temp1306v__+8,&__temp1308v__dat__pos,2);
  memcpy(__temp1306v__+10,&__temp1308v__dat__length,2);
  __temp1309v=2;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1309v,&__temp1310v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1311v,&__temp1312v__unsafe_ptr,&__temp1312v__dat__pos,&__temp1312v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1310v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1310v__,&__temp1312v__unsafe_ptr,8);
  memcpy(__temp1310v__+8,&__temp1312v__dat__pos,2);
  memcpy(__temp1310v__+10,&__temp1312v__dat__length,2);
  __temp1313v=3;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1313v,&__temp1314v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1315v,&__temp1316v__unsafe_ptr,&__temp1316v__dat__pos,&__temp1316v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1314v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1314v__,&__temp1316v__unsafe_ptr,8);
  memcpy(__temp1314v__+8,&__temp1316v__dat__pos,2);
  memcpy(__temp1314v__+10,&__temp1316v__dat__length,2);
  __temp1317v=4;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1317v,&__temp1318v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1259v(__temp1319v,&__temp1320v__unsafe_ptr,&__temp1320v__dat__pos,&__temp1320v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1318v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1318v__,&__temp1320v__unsafe_ptr,8);
  memcpy(__temp1318v__+8,&__temp1320v__dat__pos,2);
  memcpy(__temp1318v__+10,&__temp1320v__dat__length,2);
  __temp1321v=5;
  __temp_errcode=mutget__temp541v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1321v,&__temp1322v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1277v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,&__temp1323v__unsafe_ptr,&__temp1323v__dat__pos,&__temp1323v__dat__length,&__temp1323v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1256v(__temp1323v__unsafe_ptr,__temp1323v__dat__pos,__temp1323v__dat__length,__temp1323v__dat__first,&__temp1325v__unsafe_ptr,&__temp1325v__dat__pos,&__temp1325v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1322v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1322v__,&__temp1325v__unsafe_ptr,8);
  memcpy(__temp1322v__+8,&__temp1325v__dat__pos,2);
  memcpy(__temp1322v__+10,&__temp1325v__dat__length,2);
  len__temp555v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1326v__);
  range__temp435v(__temp1326v__,&__temp1327v__from,&__temp1327v__to);
  full_iter__from=__temp1327v__from;
  full_iter__to=__temp1327v__to;
  while(1){
  __temp_complain=next__temp439v(&full_iter__from,full_iter__to,&__temp1329v__);
  __temp1328v=__temp_complain;
  j=__temp1329v__;
  __temp1328v=__temp1328v==0;
  if(!__temp1328v){
  break;
  }
  print__temp374v(j,__temp1292v);
  __temp_errcode=get__temp548v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1331v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1331v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1332v__unsafe_ptr,__temp1331v__,8);
  memcpy(&__temp1332v__dat__pos,__temp1331v__+8,2);
  memcpy(&__temp1332v__dat__length,__temp1331v__+10,2);
  unpack__temp1262v(__temp1332v__unsafe_ptr,__temp1332v__dat__pos,__temp1332v__dat__length,&__temp1333v__unsafe_ptr,&__temp1333v__dat__pos,&__temp1333v__dat__length,&__temp1333v__dat__first);
  print__temp742v(__temp1333v__unsafe_ptr,__temp1333v__dat__pos,__temp1333v__dat__length,__temp1333v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1323v__unsafe_ptr,&__temp1324v____temp1281v____temp562v____temp470v__);
  if(__temp1324v____temp1281v____temp562v____temp470v__){
  __temp1324v____temp1280v__unsafe_size=0;
  __temp1324v____temp1280v__unsafe_size=__temp1324v____temp1280v__unsafe_size;
  free__temp461v(&__temp1323v__unsafe_ptr);
  }
  exists__temp412v(__temp1299v__unsafe_ptr,&__temp1300v____temp470v__);
  if(__temp1300v____temp470v__){
  __temp1299v__unsafe_size=0;
  __temp1299v__unsafe_size=__temp1299v__unsafe_size;
  free__temp461v(&__temp1299v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1295v();return 0;}