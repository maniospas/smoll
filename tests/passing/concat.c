#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1308v="my";
const char* const __temp1316v="is";
const char* const __temp1320v="manios";
const char* const __temp1312v="name";
const char* const __temp365v="\n";
const char* const __temp1293v=" ";
const char* const __temp1304v="hi";
static const char* __temp_all_errcodes[36] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1276v(char** __temp1336v, uint64_t* __temp1337v, uint16_t* __temp1338v, uint16_t* __temp1339v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__temp1336v=unsafe_ptr;
  *__temp1337v=unsafe_size;
  *__temp1338v=unsafe_offset;
  *__temp1339v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1340v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1341v) {
  char* allocated=*__temp1341v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1341v=allocated;
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

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1345v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1345v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1346v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1346v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1347v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1347v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1348v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1348v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1349v) {
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
  *__temp1349v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1350v, uint64_t* __temp1351v, uint16_t* __temp1352v, uint16_t* __temp1353v, uint64_t size, char** __temp1354v, uint64_t* __temp1355v, uint16_t* __temp1356v, uint16_t* __temp1357v) {
  char* buffer__unsafe_ptr=*__temp1350v;
  uint64_t buffer__unsafe_size=*__temp1351v;
  uint16_t buffer__unsafe_offset=*__temp1352v;
  uint16_t buffer__unsafe_align=*__temp1353v;
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
  *__temp1350v=buffer__unsafe_ptr;
  *__temp1351v=buffer__unsafe_size;
  *__temp1352v=buffer__unsafe_offset;
  *__temp1353v=buffer__unsafe_align;
  *__temp1354v=buffer__unsafe_ptr;
  *__temp1355v=buffer__unsafe_size;
  *__temp1356v=buffer__unsafe_offset;
  *__temp1357v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1358v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1358v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1359v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1359v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1360v) {
  *__temp1360v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1361v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1361v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1362v, uint64_t* __temp1363v, uint16_t* __temp1364v, uint16_t* __temp1365v, uint64_t i, char** __temp1366v) {
  char* buffer__unsafe_ptr=*__temp1362v;
  uint64_t buffer__unsafe_size=*__temp1363v;
  uint16_t buffer__unsafe_offset=*__temp1364v;
  uint16_t buffer__unsafe_align=*__temp1365v;
  char __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  char* __temp550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp545v__);
  if(__temp545v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp546v__);
  mul__temp194v(i,__temp546v__,&__temp547v__);
  nat__temp465v(buffer__unsafe_offset,&__temp548v__);
  add__temp170v(__temp547v__,__temp548v__,&__temp549v__);
  add__temp463v(buffer__unsafe_ptr,__temp549v__,&__temp550v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1362v=buffer__unsafe_ptr;
  *__temp1363v=buffer__unsafe_size;
  *__temp1364v=buffer__unsafe_offset;
  *__temp1365v=buffer__unsafe_align;
  *__temp1366v=__temp550v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1367v, uint64_t* __temp1368v, uint16_t* __temp1369v, uint16_t* __temp1370v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1367v=unsafe_ptr;
  *__temp1368v=unsafe_size;
  *__temp1369v=unsafe_offset;
  *__temp1370v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1371v) {
  *__temp1371v=to;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1372v) {
  char __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  char* __temp557v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp552v__);
  if(__temp552v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp553v__);
  mul__temp194v(i,__temp553v__,&__temp554v__);
  nat__temp465v(buffer__unsafe_offset,&__temp555v__);
  add__temp170v(__temp554v__,__temp555v__,&__temp556v__);
  add__temp463v(buffer__unsafe_ptr,__temp556v__,&__temp557v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1372v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1373v, uint64_t* __temp1374v, uint64_t* __temp1375v, char* __temp1376v) {
  goto __temp_return;
  __temp_return:
  *__temp1373v=unsafe_ptr;
  *__temp1374v=dat__pos;
  *__temp1375v=dat__length;
  *__temp1376v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1377v, uint64_t* __temp1378v, uint64_t* __temp1379v, char* __temp1380v) {
  char* unsafe_ptr=0;
  uint64_t __temp601v__=0;
  uint64_t __temp602v=0;
  char __temp603v__=0;
  uint64_t __temp604v__=0;
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__unsafe_ptr=0;
  uint64_t __temp607v__dat__pos=0;
  uint64_t __temp607v__dat__length=0;
  char __temp607v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp465v(buf__unsafe_align,&__temp601v__);
  __temp602v=1;
  neq__temp142v(__temp601v__,__temp602v,&__temp603v__);
  if(__temp603v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  nat__temp465v(buf__unsafe_offset,&__temp604v__);
  __temp605v=0;
  neq__temp142v(__temp604v__,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  str__temp596v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp607v__unsafe_ptr,&__temp607v__dat__pos,&__temp607v__dat__length,&__temp607v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1377v=__temp607v__unsafe_ptr;
  *__temp1378v=__temp607v__dat__pos;
  *__temp1379v=__temp607v__dat__length;
  *__temp1380v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1381v, uint64_t* __temp1382v, uint64_t* __temp1383v, char* __temp1384v) {
  uint64_t __temp633v=0;
  char __temp634v__=0;
  char* __temp635v__=0;
  char __temp636v__value=0;
  char first=0;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__dat__pos=0;
  uint64_t __temp637v__dat__length=0;
  char __temp637v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp633v=0;
  neq__temp142v(length,__temp633v,&__temp634v__);
  if(__temp634v__){
  __temp_errcode=get__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp635v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp635v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp636v__value,__temp635v__,1);
  first=__temp636v__value;
  }
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp637v__unsafe_ptr,&__temp637v__dat__pos,&__temp637v__dat__length,&__temp637v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1381v=__temp637v__unsafe_ptr;
  *__temp1382v=__temp637v__dat__pos;
  *__temp1383v=__temp637v__dat__length;
  *__temp1384v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1385v, uint64_t* __temp1386v, uint64_t* __temp1387v, char* __temp1388v) {
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__unsafe_size=0;
  uint16_t __temp639v__unsafe_offset=0;
  uint16_t __temp639v__unsafe_align=0;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__unsafe_size=0;
  uint16_t __temp640v__unsafe_offset=0;
  uint16_t __temp640v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp641v__=0;
  uint64_t length=0;
  uint64_t __temp642v=0;
  uint64_t __temp643v__=0;
  uint64_t __temp644v=0;
  char* __temp645v__unsafe_ptr=0;
  uint64_t __temp645v__dat__pos=0;
  uint64_t __temp645v__dat__length=0;
  char __temp645v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp560v(&__temp639v__unsafe_ptr,&__temp639v__unsafe_size,&__temp639v__unsafe_offset,&__temp639v__unsafe_align);
  __temp640v__unsafe_ptr=__temp639v__unsafe_ptr;
  __temp640v__unsafe_size=__temp639v__unsafe_size;
  __temp640v__unsafe_offset=__temp639v__unsafe_offset;
  __temp640v__unsafe_align=__temp639v__unsafe_align;
  buf__unsafe_ptr=__temp640v__unsafe_ptr;
  buf__unsafe_size=__temp640v__unsafe_size;
  buf__unsafe_offset=__temp640v__unsafe_offset;
  buf__unsafe_align=__temp640v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp641v__);
  buf__unsafe_ptr=__temp641v__;
  if(c){
  length=strlen(c);
  }
  __temp642v=1;
  add__temp170v(length,__temp642v,&__temp643v__);
  buf__unsafe_size=__temp643v__;
  __temp644v=0;
  __temp_errcode=str__temp632v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp644v,length,&__temp645v__unsafe_ptr,&__temp645v__dat__pos,&__temp645v__dat__length,&__temp645v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1385v=__temp645v__unsafe_ptr;
  *__temp1386v=__temp645v__dat__pos;
  *__temp1387v=__temp645v__dat__length;
  *__temp1388v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1389v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1389v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1247v(uint64_t x, uint16_t* __temp1390v) {
  uint64_t __temp1248v=0;
  char __temp1249v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1248v=65535;
  gt__temp271v(x,__temp1248v,&__temp1249v__);
  if(__temp1249v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1390v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1254v(uint64_t _pos, uint64_t _length, uint16_t* __temp1391v, uint16_t* __temp1392v) {
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
  *__temp1391v=pos;
  *__temp1392v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1257v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1393v, uint16_t* __temp1394v, uint16_t* __temp1395v) {
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
  *__temp1393v=unsafe_ptr;
  *__temp1394v=dat__pos;
  *__temp1395v=dat__length;
  
  return __temp_errcode;
}

int str__temp1260v(const char* s, char** __temp1396v, uint16_t* __temp1397v, uint16_t* __temp1398v) {
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__dat__pos=0;
  uint64_t __temp1261v__dat__length=0;
  char __temp1261v__dat__first=0;
  char* __temp1262v__unsafe_ptr=0;
  uint16_t __temp1262v__dat__pos=0;
  uint16_t __temp1262v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(s,&__temp1261v__unsafe_ptr,&__temp1261v__dat__pos,&__temp1261v__dat__length,&__temp1261v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1257v(__temp1261v__unsafe_ptr,__temp1261v__dat__pos,__temp1261v__dat__length,__temp1261v__dat__first,&__temp1262v__unsafe_ptr,&__temp1262v__dat__pos,&__temp1262v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1396v=__temp1262v__unsafe_ptr;
  *__temp1397v=__temp1262v__dat__pos;
  *__temp1398v=__temp1262v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1399v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1399v=__temp445v__;
}

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1400v, uint64_t* __temp1401v, uint16_t* __temp1402v, uint16_t* __temp1403v) {
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char* __temp564v__unsafe_ptr=0;
  uint64_t __temp564v__unsafe_size=0;
  uint16_t __temp564v__unsafe_offset=0;
  uint16_t __temp564v__unsafe_align=0;
  char __temp565v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp560v(&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align);
  __temp563v__unsafe_ptr=__temp562v__unsafe_ptr;
  __temp563v__unsafe_size=__temp562v__unsafe_size;
  __temp563v__unsafe_offset=__temp562v__unsafe_offset;
  __temp563v__unsafe_align=__temp562v__unsafe_align;
  __temp_errcode=alloc__temp468v(&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align,size,&__temp564v__unsafe_ptr,&__temp564v__unsafe_size,&__temp564v__unsafe_offset,&__temp564v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp564v__unsafe_ptr,&__temp565v____temp470v__);
  if(__temp565v____temp470v__){
  __temp564v__unsafe_size=0;
  __temp564v__unsafe_size=__temp564v__unsafe_size;
  free__temp461v(&__temp564v__unsafe_ptr);
  }
  __temp_return:
  *__temp1400v=__temp564v__unsafe_ptr;
  *__temp1401v=__temp564v__unsafe_size;
  *__temp1402v=__temp564v__unsafe_offset;
  *__temp1403v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp679v(char** __temp1404v, uint64_t* __temp1405v, uint16_t* __temp1406v, uint16_t* __temp1407v, char** __temp1408v, uint64_t* __temp1409v, uint16_t* __temp1410v, uint16_t* __temp1411v, uint64_t* __temp1412v) {
  char* buf__unsafe_ptr=*__temp1404v;
  uint64_t buf__unsafe_size=*__temp1405v;
  uint16_t buf__unsafe_offset=*__temp1406v;
  uint16_t buf__unsafe_align=*__temp1407v;
  uint64_t __temp680v=0;
  uint64_t __temp681v=0;
  uint64_t pos=0;
  __temp680v=0;
  __temp681v=__temp680v;
  pos=__temp681v;
  goto __temp_return;
  __temp_return:
  *__temp1404v=buf__unsafe_ptr;
  *__temp1405v=buf__unsafe_size;
  *__temp1406v=buf__unsafe_offset;
  *__temp1407v=buf__unsafe_align;
  *__temp1408v=buf__unsafe_ptr;
  *__temp1409v=buf__unsafe_size;
  *__temp1410v=buf__unsafe_offset;
  *__temp1411v=buf__unsafe_align;
  *__temp1412v=pos;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1413v) {
  goto __temp_return;
  __temp_return:
  *__temp1413v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1414v, uint64_t* __temp1415v) {
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
  *__temp1414v=from;
  *__temp1415v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1416v, uint64_t r__to, uint64_t* __temp1417v) {
  uint64_t r__from=*__temp1416v;
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
  *__temp1416v=r__from;
  *__temp1417v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp598v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1418v, uint64_t* __temp1419v, uint64_t* __temp1420v, char* __temp1421v) {
  char* first_pos=0;
  char first=0;
  char* __temp599v__unsafe_ptr=0;
  uint64_t __temp599v__dat__pos=0;
  uint64_t __temp599v__dat__length=0;
  char __temp599v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp596v(unsafe_ptr,pos,length,first,&__temp599v__unsafe_ptr,&__temp599v__dat__pos,&__temp599v__dat__length,&__temp599v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1418v=__temp599v__unsafe_ptr;
  *__temp1419v=__temp599v__dat__pos;
  *__temp1420v=__temp599v__dat__length;
  *__temp1421v=__temp599v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1263v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1422v, uint64_t* __temp1423v, uint64_t* __temp1424v, char* __temp1425v) {
  uint64_t __temp1264v__=0;
  uint64_t __temp1265v__=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__dat__pos=0;
  uint64_t __temp1266v__dat__length=0;
  char __temp1266v__dat__first=0;
  nat__temp465v(m__dat__pos,&__temp1264v__);
  nat__temp465v(m__dat__length,&__temp1265v__);
  str__temp598v(m__unsafe_ptr,__temp1264v__,__temp1265v__,&__temp1266v__unsafe_ptr,&__temp1266v__dat__pos,&__temp1266v__dat__length,&__temp1266v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1422v=__temp1266v__unsafe_ptr;
  *__temp1423v=__temp1266v__dat__pos;
  *__temp1424v=__temp1266v__dat__length;
  *__temp1425v=__temp1266v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp631v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1426v, uint64_t* __temp1427v, uint64_t* __temp1428v, char* __temp1429v) {
  goto __temp_return;
  __temp_return:
  *__temp1426v=other__unsafe_ptr;
  *__temp1427v=other__dat__pos;
  *__temp1428v=other__dat__length;
  *__temp1429v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1430v) {
  goto __temp_return;
  __temp_return:
  *__temp1430v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp701v(char** __temp1431v, uint64_t* __temp1432v, uint16_t* __temp1433v, uint16_t* __temp1434v, uint64_t* __temp1435v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1436v, uint64_t* __temp1437v, uint64_t* __temp1438v, char* __temp1439v) {
  char* buf__unsafe_ptr=*__temp1431v;
  uint64_t buf__unsafe_size=*__temp1432v;
  uint16_t buf__unsafe_offset=*__temp1433v;
  uint16_t buf__unsafe_align=*__temp1434v;
  uint64_t pos=*__temp1435v;
  char* __temp702v__unsafe_ptr=0;
  uint64_t __temp702v__dat__pos=0;
  uint64_t __temp702v__dat__length=0;
  char __temp702v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp703v__=0;
  uint64_t __temp704v__=0;
  uint64_t next_pos=0;
  uint64_t __temp705v__=0;
  char __temp706v__=0;
  uint64_t __temp707v=0;
  uint64_t __temp708v__=0;
  uint64_t prev_pos=0;
  char* __temp709v__unsafe_ptr=0;
  uint64_t __temp709v__dat__pos=0;
  uint64_t __temp709v__dat__length=0;
  char __temp709v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp702v__unsafe_ptr,&__temp702v__dat__pos,&__temp702v__dat__length,&__temp702v__dat__first);
  other__unsafe_ptr=__temp702v__unsafe_ptr;
  other__dat__pos=__temp702v__dat__pos;
  other__dat__length=__temp702v__dat__length;
  other__dat__first=__temp702v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp703v__);
  add__temp170v(pos,__temp703v__,&__temp704v__);
  next_pos=__temp704v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp705v__);
  gt__temp271v(next_pos,__temp705v__,&__temp706v__);
  if(__temp706v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp707v=0;
  add__temp170v(pos,__temp707v,&__temp708v__);
  prev_pos=__temp708v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp709v__unsafe_ptr,&__temp709v__dat__pos,&__temp709v__dat__length,&__temp709v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1431v=buf__unsafe_ptr;
  *__temp1432v=buf__unsafe_size;
  *__temp1433v=buf__unsafe_offset;
  *__temp1434v=buf__unsafe_align;
  *__temp1435v=pos;
  *__temp1436v=__temp709v__unsafe_ptr;
  *__temp1437v=__temp709v__dat__pos;
  *__temp1438v=__temp709v__dat__length;
  *__temp1439v=__temp709v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp710v(char** __temp1440v, uint64_t* __temp1441v, uint16_t* __temp1442v, uint16_t* __temp1443v, uint64_t* __temp1444v, const char* _other, char** __temp1445v, uint64_t* __temp1446v, uint64_t* __temp1447v, char* __temp1448v) {
  char* buf__unsafe_ptr=*__temp1440v;
  uint64_t buf__unsafe_size=*__temp1441v;
  uint16_t buf__unsafe_offset=*__temp1442v;
  uint16_t buf__unsafe_align=*__temp1443v;
  uint64_t pos=*__temp1444v;
  char* __temp711v__unsafe_ptr=0;
  uint64_t __temp711v__dat__pos=0;
  uint64_t __temp711v__dat__length=0;
  char __temp711v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp712v__=0;
  uint64_t __temp713v__=0;
  uint64_t next_pos=0;
  uint64_t __temp714v__=0;
  char __temp715v__=0;
  uint64_t __temp716v=0;
  uint64_t __temp717v__=0;
  uint64_t prev_pos=0;
  char* __temp718v__unsafe_ptr=0;
  uint64_t __temp718v__dat__pos=0;
  uint64_t __temp718v__dat__length=0;
  char __temp718v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(_other,&__temp711v__unsafe_ptr,&__temp711v__dat__pos,&__temp711v__dat__length,&__temp711v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp711v__unsafe_ptr;
  other__dat__pos=__temp711v__dat__pos;
  other__dat__length=__temp711v__dat__length;
  other__dat__first=__temp711v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp712v__);
  add__temp170v(pos,__temp712v__,&__temp713v__);
  next_pos=__temp713v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp714v__);
  gt__temp271v(next_pos,__temp714v__,&__temp715v__);
  if(__temp715v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp716v=0;
  add__temp170v(pos,__temp716v,&__temp717v__);
  prev_pos=__temp717v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp718v__unsafe_ptr,&__temp718v__dat__pos,&__temp718v__dat__length,&__temp718v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1440v=buf__unsafe_ptr;
  *__temp1441v=buf__unsafe_size;
  *__temp1442v=buf__unsafe_offset;
  *__temp1443v=buf__unsafe_align;
  *__temp1444v=pos;
  *__temp1445v=__temp718v__unsafe_ptr;
  *__temp1446v=__temp718v__dat__pos;
  *__temp1447v=__temp718v__dat__length;
  *__temp1448v=__temp718v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1278v(char** __temp1449v, uint64_t* __temp1450v, uint16_t* __temp1451v, uint16_t* __temp1452v, char** __temp1453v, uint64_t* __temp1454v, uint64_t* __temp1455v, char* __temp1456v) {
  char* buff__unsafe_ptr=*__temp1449v;
  uint64_t buff__unsafe_size=*__temp1450v;
  uint16_t buff__unsafe_offset=*__temp1451v;
  uint16_t buff__unsafe_align=*__temp1452v;
  uint64_t __temp1279v=0;
  uint64_t __temp1280v__=0;
  char* __temp1281v__unsafe_ptr=0;
  uint64_t __temp1281v__unsafe_size=0;
  uint16_t __temp1281v__unsafe_offset=0;
  uint16_t __temp1281v__unsafe_align=0;
  char __temp1282v____temp565v____temp470v__=0;
  char* __temp1283v__unsafe_ptr=0;
  uint64_t __temp1283v__unsafe_size=0;
  uint16_t __temp1283v__unsafe_offset=0;
  uint16_t __temp1283v__unsafe_align=0;
  char* __temp1284v__buf__unsafe_ptr=0;
  uint64_t __temp1284v__buf__unsafe_size=0;
  uint16_t __temp1284v__buf__unsafe_offset=0;
  uint16_t __temp1284v__buf__unsafe_align=0;
  uint64_t __temp1284v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1285v__=0;
  uint64_t __temp1286v__from=0;
  uint64_t __temp1286v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1287v=0;
  uint64_t __temp1288v__=0;
  uint64_t i=0;
  char* __temp1289v__=0;
  char* __temp1290v__unsafe_ptr=0;
  uint16_t __temp1290v__dat__pos=0;
  uint16_t __temp1290v__dat__length=0;
  char* __temp1291v__unsafe_ptr=0;
  uint64_t __temp1291v__dat__pos=0;
  uint64_t __temp1291v__dat__length=0;
  char __temp1291v__dat__first=0;
  char* __temp1292v__unsafe_ptr=0;
  uint64_t __temp1292v__dat__pos=0;
  uint64_t __temp1292v__dat__length=0;
  char __temp1292v__dat__first=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__dat__pos=0;
  uint64_t __temp1294v__dat__length=0;
  char __temp1294v__dat__first=0;
  char* __temp1295v__unsafe_ptr=0;
  uint64_t __temp1295v__dat__pos=0;
  uint64_t __temp1295v__dat__length=0;
  char __temp1295v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1279v=4;
  KB__temp443v(__temp1279v,&__temp1280v__);
  __temp_errcode=alloc__temp559v(__temp1280v__,&__temp1281v__unsafe_ptr,&__temp1281v__unsafe_size,&__temp1281v__unsafe_offset,&__temp1281v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1283v__unsafe_ptr=__temp1281v__unsafe_ptr;
  __temp1283v__unsafe_size=__temp1281v__unsafe_size;
  __temp1283v__unsafe_offset=__temp1281v__unsafe_offset;
  __temp1283v__unsafe_align=__temp1281v__unsafe_align;
  bufpos__temp679v(&__temp1283v__unsafe_ptr,&__temp1283v__unsafe_size,&__temp1283v__unsafe_offset,&__temp1283v__unsafe_align,&__temp1284v__buf__unsafe_ptr,&__temp1284v__buf__unsafe_size,&__temp1284v__buf__unsafe_offset,&__temp1284v__buf__unsafe_align,&__temp1284v__pos);
  mem__buf__unsafe_ptr=__temp1284v__buf__unsafe_ptr;
  mem__buf__unsafe_size=__temp1284v__buf__unsafe_size;
  mem__buf__unsafe_offset=__temp1284v__buf__unsafe_offset;
  mem__buf__unsafe_align=__temp1284v__buf__unsafe_align;
  mem__pos=__temp1284v__pos;
  len__temp558v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1285v__);
  range__temp435v(__temp1285v__,&__temp1286v__from,&__temp1286v__to);
  iter__from=__temp1286v__from;
  iter__to=__temp1286v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1288v__);
  __temp1287v=__temp_complain;
  i=__temp1288v__;
  __temp1287v=__temp1287v==0;
  if(!__temp1287v){
  break;
  }
  __temp_errcode=get__temp551v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1289v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1289v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1290v__unsafe_ptr,__temp1289v__,8);
  memcpy(&__temp1290v__dat__pos,__temp1289v__+8,2);
  memcpy(&__temp1290v__dat__length,__temp1289v__+10,2);
  unpack__temp1263v(__temp1290v__unsafe_ptr,__temp1290v__dat__pos,__temp1290v__dat__length,&__temp1291v__unsafe_ptr,&__temp1291v__dat__pos,&__temp1291v__dat__length,&__temp1291v__dat__first);
  __temp_errcode=copy__temp701v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,__temp1291v__unsafe_ptr,__temp1291v__dat__pos,__temp1291v__dat__length,__temp1291v__dat__first,&__temp1292v__unsafe_ptr,&__temp1292v__dat__pos,&__temp1292v__dat__length,&__temp1292v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp710v(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,__temp1293v,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length,&__temp1294v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp632v(mem__buf__unsafe_ptr,mem__buf__unsafe_size,mem__buf__unsafe_offset,mem__buf__unsafe_align,start,mem__pos,&__temp1295v__unsafe_ptr,&__temp1295v__dat__pos,&__temp1295v__dat__length,&__temp1295v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1295v__unsafe_ptr,&__temp1282v____temp565v____temp470v__);
  if(__temp1282v____temp565v____temp470v__){
  __temp1281v__unsafe_size=0;
  __temp1281v__unsafe_size=__temp1281v__unsafe_size;
  free__temp461v(&__temp1295v__unsafe_ptr);
  }
  __temp_return:
  *__temp1449v=buff__unsafe_ptr;
  *__temp1450v=buff__unsafe_size;
  *__temp1451v=buff__unsafe_offset;
  *__temp1452v=buff__unsafe_align;
  *__temp1453v=__temp1295v__unsafe_ptr;
  *__temp1454v=__temp1295v__dat__pos;
  *__temp1455v=__temp1295v__dat__length;
  *__temp1456v=__temp1295v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1296v() {
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__unsafe_size=0;
  uint16_t __temp1297v__unsafe_offset=0;
  uint16_t __temp1297v__unsafe_align=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__unsafe_size=0;
  uint16_t __temp1298v__unsafe_offset=0;
  uint16_t __temp1298v__unsafe_align=0;
  uint64_t __temp1299v=0;
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__unsafe_size=0;
  uint16_t __temp1300v__unsafe_offset=0;
  uint16_t __temp1300v__unsafe_align=0;
  char __temp1301v____temp470v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __temp1302v=0;
  char* __temp1303v__=0;
  char* __temp1305v__unsafe_ptr=0;
  uint16_t __temp1305v__dat__pos=0;
  uint16_t __temp1305v__dat__length=0;
  uint64_t __temp1306v=0;
  char* __temp1307v__=0;
  char* __temp1309v__unsafe_ptr=0;
  uint16_t __temp1309v__dat__pos=0;
  uint16_t __temp1309v__dat__length=0;
  uint64_t __temp1310v=0;
  char* __temp1311v__=0;
  char* __temp1313v__unsafe_ptr=0;
  uint16_t __temp1313v__dat__pos=0;
  uint16_t __temp1313v__dat__length=0;
  uint64_t __temp1314v=0;
  char* __temp1315v__=0;
  char* __temp1317v__unsafe_ptr=0;
  uint16_t __temp1317v__dat__pos=0;
  uint16_t __temp1317v__dat__length=0;
  uint64_t __temp1318v=0;
  char* __temp1319v__=0;
  char* __temp1321v__unsafe_ptr=0;
  uint16_t __temp1321v__dat__pos=0;
  uint16_t __temp1321v__dat__length=0;
  uint64_t __temp1322v=0;
  char* __temp1323v__=0;
  char* __temp1324v__unsafe_ptr=0;
  uint64_t __temp1324v__dat__pos=0;
  uint64_t __temp1324v__dat__length=0;
  char __temp1324v__dat__first=0;
  char __temp1325v____temp1282v____temp565v____temp470v__=0;
  uint64_t __temp1325v____temp1281v__unsafe_size=0;
  char* __temp1326v__unsafe_ptr=0;
  uint16_t __temp1326v__dat__pos=0;
  uint16_t __temp1326v__dat__length=0;
  uint64_t __temp1327v__=0;
  uint64_t __temp1328v__from=0;
  uint64_t __temp1328v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1329v=0;
  uint64_t __temp1330v__=0;
  uint64_t j=0;
  char* __temp1332v__=0;
  char* __temp1333v__unsafe_ptr=0;
  uint16_t __temp1333v__dat__pos=0;
  uint16_t __temp1333v__dat__length=0;
  char* __temp1334v__unsafe_ptr=0;
  uint64_t __temp1334v__dat__pos=0;
  uint64_t __temp1334v__dat__length=0;
  char __temp1334v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1276v(&__temp1297v__unsafe_ptr,&__temp1297v__unsafe_size,&__temp1297v__unsafe_offset,&__temp1297v__unsafe_align);
  __temp1298v__unsafe_ptr=__temp1297v__unsafe_ptr;
  __temp1298v__unsafe_size=__temp1297v__unsafe_size;
  __temp1298v__unsafe_offset=__temp1297v__unsafe_offset;
  __temp1298v__unsafe_align=__temp1297v__unsafe_align;
  __temp1299v=6;
  __temp_errcode=alloc__temp468v(&__temp1298v__unsafe_ptr,&__temp1298v__unsafe_size,&__temp1298v__unsafe_offset,&__temp1298v__unsafe_align,__temp1299v,&__temp1300v__unsafe_ptr,&__temp1300v__unsafe_size,&__temp1300v__unsafe_offset,&__temp1300v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1300v__unsafe_ptr;
  buff__unsafe_size=__temp1300v__unsafe_size;
  buff__unsafe_offset=__temp1300v__unsafe_offset;
  buff__unsafe_align=__temp1300v__unsafe_align;
  __temp1302v=0;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1302v,&__temp1303v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1304v,&__temp1305v__unsafe_ptr,&__temp1305v__dat__pos,&__temp1305v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1303v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1303v__,&__temp1305v__unsafe_ptr,8);
  memcpy(__temp1303v__+8,&__temp1305v__dat__pos,2);
  memcpy(__temp1303v__+10,&__temp1305v__dat__length,2);
  __temp1306v=1;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1306v,&__temp1307v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1308v,&__temp1309v__unsafe_ptr,&__temp1309v__dat__pos,&__temp1309v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1307v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1307v__,&__temp1309v__unsafe_ptr,8);
  memcpy(__temp1307v__+8,&__temp1309v__dat__pos,2);
  memcpy(__temp1307v__+10,&__temp1309v__dat__length,2);
  __temp1310v=2;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1310v,&__temp1311v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1312v,&__temp1313v__unsafe_ptr,&__temp1313v__dat__pos,&__temp1313v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1311v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1311v__,&__temp1313v__unsafe_ptr,8);
  memcpy(__temp1311v__+8,&__temp1313v__dat__pos,2);
  memcpy(__temp1311v__+10,&__temp1313v__dat__length,2);
  __temp1314v=3;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1314v,&__temp1315v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1316v,&__temp1317v__unsafe_ptr,&__temp1317v__dat__pos,&__temp1317v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1315v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1315v__,&__temp1317v__unsafe_ptr,8);
  memcpy(__temp1315v__+8,&__temp1317v__dat__pos,2);
  memcpy(__temp1315v__+10,&__temp1317v__dat__length,2);
  __temp1318v=4;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1318v,&__temp1319v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1320v,&__temp1321v__unsafe_ptr,&__temp1321v__dat__pos,&__temp1321v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1319v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1319v__,&__temp1321v__unsafe_ptr,8);
  memcpy(__temp1319v__+8,&__temp1321v__dat__pos,2);
  memcpy(__temp1319v__+10,&__temp1321v__dat__length,2);
  __temp1322v=5;
  __temp_errcode=mutget__temp544v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1322v,&__temp1323v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1278v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,&__temp1324v__unsafe_ptr,&__temp1324v__dat__pos,&__temp1324v__dat__length,&__temp1324v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1257v(__temp1324v__unsafe_ptr,__temp1324v__dat__pos,__temp1324v__dat__length,__temp1324v__dat__first,&__temp1326v__unsafe_ptr,&__temp1326v__dat__pos,&__temp1326v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1323v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1323v__,&__temp1326v__unsafe_ptr,8);
  memcpy(__temp1323v__+8,&__temp1326v__dat__pos,2);
  memcpy(__temp1323v__+10,&__temp1326v__dat__length,2);
  len__temp558v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1327v__);
  range__temp435v(__temp1327v__,&__temp1328v__from,&__temp1328v__to);
  full_iter__from=__temp1328v__from;
  full_iter__to=__temp1328v__to;
  while(1){
  __temp_complain=next__temp439v(&full_iter__from,full_iter__to,&__temp1330v__);
  __temp1329v=__temp_complain;
  j=__temp1330v__;
  __temp1329v=__temp1329v==0;
  if(!__temp1329v){
  break;
  }
  print__temp374v(j,__temp1293v);
  __temp_errcode=get__temp551v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1332v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1332v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1333v__unsafe_ptr,__temp1332v__,8);
  memcpy(&__temp1333v__dat__pos,__temp1332v__+8,2);
  memcpy(&__temp1333v__dat__length,__temp1332v__+10,2);
  unpack__temp1263v(__temp1333v__unsafe_ptr,__temp1333v__dat__pos,__temp1333v__dat__length,&__temp1334v__unsafe_ptr,&__temp1334v__dat__pos,&__temp1334v__dat__length,&__temp1334v__dat__first);
  print__temp743v(__temp1334v__unsafe_ptr,__temp1334v__dat__pos,__temp1334v__dat__length,__temp1334v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1324v__unsafe_ptr,&__temp1325v____temp1282v____temp565v____temp470v__);
  if(__temp1325v____temp1282v____temp565v____temp470v__){
  __temp1325v____temp1281v__unsafe_size=0;
  __temp1325v____temp1281v__unsafe_size=__temp1325v____temp1281v__unsafe_size;
  free__temp461v(&__temp1324v__unsafe_ptr);
  }
  exists__temp412v(__temp1300v__unsafe_ptr,&__temp1301v____temp470v__);
  if(__temp1301v____temp470v__){
  __temp1300v__unsafe_size=0;
  __temp1300v__unsafe_size=__temp1300v__unsafe_size;
  free__temp461v(&__temp1300v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1296v();return 0;}