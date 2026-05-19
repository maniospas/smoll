#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1296v=" ";
const char* const __temp1307v="hi";
const char* const __temp365v="\n";
const char* const __temp1311v="my";
const char* const __temp1319v="is";
const char* const __temp1315v="name";
const char* const __temp1323v="manios";
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1277v(char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__temp1339v=unsafe_ptr;
  *__temp1340v=unsafe_size;
  *__temp1341v=unsafe_offset;
  *__temp1342v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1343v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1343v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1344v) {
  char* allocated=*__temp1344v;
  if(allocated){
  free(allocated);
  }
  *__temp1344v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1345v) {
  int value=0;
  *__temp1345v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1346v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1346v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1347v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1347v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1348v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1348v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1349v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1349v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1350v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1350v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1351v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1351v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1352v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1352v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1353v) {
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
  *__temp1353v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1354v, uint64_t* __temp1355v, uint16_t* __temp1356v, uint16_t* __temp1357v, uint64_t size, char** __temp1358v, uint64_t* __temp1359v, uint16_t* __temp1360v, uint16_t* __temp1361v) {
  char* buffer__unsafe_ptr=*__temp1354v;
  uint64_t buffer__unsafe_size=*__temp1355v;
  uint16_t buffer__unsafe_offset=*__temp1356v;
  uint16_t buffer__unsafe_align=*__temp1357v;
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
  char* __temp485v__unsafe_ptr=0;
  uint64_t __temp485v__unsafe_size=0;
  uint16_t __temp485v__unsafe_offset=0;
  uint16_t __temp485v__unsafe_align=0;
  uint64_t __temp486v=0;
  char __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t bytes=0;
  char* __temp490v__=0;
  uint64_t __temp491v=0;
  char* __temp493v__unsafe_ptr=0;
  uint64_t __temp493v__unsafe_size=0;
  uint16_t __temp493v__unsafe_offset=0;
  uint16_t __temp493v__unsafe_align=0;
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
  __temp485v__unsafe_ptr=buffer__unsafe_ptr;
  __temp485v__unsafe_size=buffer__unsafe_size;
  __temp485v__unsafe_offset=buffer__unsafe_offset;
  __temp485v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp486v=0;
  neq__temp142v(buffer__unsafe_size,__temp486v,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp488v__);
  mul__temp194v(__temp488v__,size,&__temp489v__);
  bytes=__temp489v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp490v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp490v__;
  __temp491v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp491v,bytes);
  __temp493v__unsafe_ptr=buffer__unsafe_ptr;
  __temp493v__unsafe_size=buffer__unsafe_size;
  __temp493v__unsafe_offset=buffer__unsafe_offset;
  __temp493v__unsafe_align=buffer__unsafe_align;
  __temp485v__unsafe_ptr=__temp493v__unsafe_ptr;
  __temp485v__unsafe_size=__temp493v__unsafe_size;
  __temp485v__unsafe_offset=__temp493v__unsafe_offset;
  __temp485v__unsafe_align=__temp493v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp485v__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  __temp485v__unsafe_size=0;
  __temp485v__unsafe_size=__temp485v__unsafe_size;
  __temp485v__unsafe_ptr=__temp485v__unsafe_ptr;
  free__temp466v(&__temp485v__unsafe_ptr);
  }
  __temp_return:
  *__temp1354v=buffer__unsafe_ptr;
  *__temp1355v=buffer__unsafe_size;
  *__temp1356v=buffer__unsafe_offset;
  *__temp1357v=buffer__unsafe_align;
  *__temp1358v=__temp485v__unsafe_ptr;
  *__temp1359v=__temp485v__unsafe_size;
  *__temp1360v=__temp485v__unsafe_offset;
  *__temp1361v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1362v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1362v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1363v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1363v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1364v) {
  *__temp1364v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1365v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1365v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1366v, uint64_t* __temp1367v, uint16_t* __temp1368v, uint16_t* __temp1369v, uint64_t i, char** __temp1370v) {
  char* buffer__unsafe_ptr=*__temp1366v;
  uint64_t buffer__unsafe_size=*__temp1367v;
  uint16_t buffer__unsafe_offset=*__temp1368v;
  uint16_t buffer__unsafe_align=*__temp1369v;
  char __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  char* __temp549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp544v__);
  if(__temp544v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp545v__);
  mul__temp194v(i,__temp545v__,&__temp546v__);
  nat__temp470v(buffer__unsafe_offset,&__temp547v__);
  add__temp170v(__temp546v__,__temp547v__,&__temp548v__);
  add__temp468v(buffer__unsafe_ptr,__temp548v__,&__temp549v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1366v=buffer__unsafe_ptr;
  *__temp1367v=buffer__unsafe_size;
  *__temp1368v=buffer__unsafe_offset;
  *__temp1369v=buffer__unsafe_align;
  *__temp1370v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1371v, uint64_t* __temp1372v, uint16_t* __temp1373v, uint16_t* __temp1374v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1371v=unsafe_ptr;
  *__temp1372v=unsafe_size;
  *__temp1373v=unsafe_offset;
  *__temp1374v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1375v) {
  *__temp1375v=to;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1376v) {
  char __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  char* __temp556v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp551v__);
  if(__temp551v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp552v__);
  mul__temp194v(i,__temp552v__,&__temp553v__);
  nat__temp470v(buffer__unsafe_offset,&__temp554v__);
  add__temp170v(__temp553v__,__temp554v__,&__temp555v__);
  add__temp468v(buffer__unsafe_ptr,__temp555v__,&__temp556v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1376v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1377v, uint64_t* __temp1378v, uint64_t* __temp1379v, char* __temp1380v) {
  goto __temp_return;
  __temp_return:
  *__temp1377v=unsafe_ptr;
  *__temp1378v=dat__pos;
  *__temp1379v=dat__length;
  *__temp1380v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1381v, uint64_t* __temp1382v, uint64_t* __temp1383v, char* __temp1384v) {
  char* unsafe_ptr=0;
  uint64_t __temp595v__=0;
  uint64_t __temp596v=0;
  char __temp597v__=0;
  uint64_t __temp598v__=0;
  uint64_t __temp599v=0;
  char __temp600v__=0;
  char* __temp601v__unsafe_ptr=0;
  uint64_t __temp601v__dat__pos=0;
  uint64_t __temp601v__dat__length=0;
  char __temp601v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp595v__);
  __temp596v=1;
  neq__temp142v(__temp595v__,__temp596v,&__temp597v__);
  if(__temp597v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp598v__);
  __temp599v=0;
  neq__temp142v(__temp598v__,__temp599v,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp588v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp601v__unsafe_ptr,&__temp601v__dat__pos,&__temp601v__dat__length,&__temp601v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1381v=__temp601v__unsafe_ptr;
  *__temp1382v=__temp601v__dat__pos;
  *__temp1383v=__temp601v__dat__length;
  *__temp1384v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1385v, uint64_t* __temp1386v, uint64_t* __temp1387v, char* __temp1388v) {
  uint64_t __temp627v=0;
  char __temp628v__=0;
  char* __temp629v__=0;
  char __temp630v__value=0;
  char first=0;
  char* __temp631v__unsafe_ptr=0;
  uint64_t __temp631v__dat__pos=0;
  uint64_t __temp631v__dat__length=0;
  char __temp631v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp627v=0;
  neq__temp142v(length,__temp627v,&__temp628v__);
  if(__temp628v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp629v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp629v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp630v__value,__temp629v__,1);
  first=__temp630v__value;
  }
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp631v__unsafe_ptr,&__temp631v__dat__pos,&__temp631v__dat__length,&__temp631v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1385v=__temp631v__unsafe_ptr;
  *__temp1386v=__temp631v__dat__pos;
  *__temp1387v=__temp631v__dat__length;
  *__temp1388v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1389v, uint64_t* __temp1390v, uint64_t* __temp1391v, char* __temp1392v) {
  char* __temp633v__unsafe_ptr=0;
  uint64_t __temp633v__unsafe_size=0;
  uint16_t __temp633v__unsafe_offset=0;
  uint16_t __temp633v__unsafe_align=0;
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp635v__=0;
  uint64_t length=0;
  uint64_t __temp636v=0;
  uint64_t __temp637v__=0;
  uint64_t __temp638v=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__dat__pos=0;
  uint64_t __temp639v__dat__length=0;
  char __temp639v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp592v(&__temp633v__unsafe_ptr,&__temp633v__unsafe_size,&__temp633v__unsafe_offset,&__temp633v__unsafe_align);
  __temp634v__unsafe_ptr=__temp633v__unsafe_ptr;
  __temp634v__unsafe_size=__temp633v__unsafe_size;
  __temp634v__unsafe_offset=__temp633v__unsafe_offset;
  __temp634v__unsafe_align=__temp633v__unsafe_align;
  buf__unsafe_ptr=__temp634v__unsafe_ptr;
  buf__unsafe_size=__temp634v__unsafe_size;
  buf__unsafe_offset=__temp634v__unsafe_offset;
  buf__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp635v__);
  buf__unsafe_ptr=__temp635v__;
  if(c){
  length=strlen(c);
  }
  __temp636v=1;
  add__temp170v(length,__temp636v,&__temp637v__);
  buf__unsafe_size=__temp637v__;
  __temp638v=0;
  __temp_errcode=str__temp626v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp638v,length,&__temp639v__unsafe_ptr,&__temp639v__dat__pos,&__temp639v__dat__length,&__temp639v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1389v=__temp639v__unsafe_ptr;
  *__temp1390v=__temp639v__dat__pos;
  *__temp1391v=__temp639v__dat__length;
  *__temp1392v=__temp639v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1393v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1393v=z;
}

static inline __attribute__((always_inline)) int nat16__temp1248v(uint64_t x, uint16_t* __temp1394v) {
  uint64_t __temp1249v=0;
  char __temp1250v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1249v=65535;
  gt__temp271v(x,__temp1249v,&__temp1250v__);
  if(__temp1250v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1394v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1255v(uint64_t _pos, uint64_t _length, uint16_t* __temp1395v, uint16_t* __temp1396v) {
  uint16_t __temp1256v__=0;
  uint16_t pos=0;
  uint16_t __temp1257v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1248v(_pos,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1256v__;
  __temp_errcode=nat16__temp1248v(_length,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1257v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1395v=pos;
  *__temp1396v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1258v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1397v, uint16_t* __temp1398v, uint16_t* __temp1399v) {
  char* unsafe_ptr=0;
  uint16_t __temp1259v__pos=0;
  uint16_t __temp1259v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1255v(s__dat__pos,s__dat__length,&__temp1259v__pos,&__temp1259v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1259v__pos;
  dat__length=__temp1259v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1397v=unsafe_ptr;
  *__temp1398v=dat__pos;
  *__temp1399v=dat__length;
  
  return __temp_errcode;
}

int str__temp1261v(const char* s, char** __temp1400v, uint16_t* __temp1401v, uint16_t* __temp1402v) {
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__dat__pos=0;
  uint64_t __temp1262v__dat__length=0;
  char __temp1262v__dat__first=0;
  char* __temp1263v__unsafe_ptr=0;
  uint16_t __temp1263v__dat__pos=0;
  uint16_t __temp1263v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(s,&__temp1262v__unsafe_ptr,&__temp1262v__dat__pos,&__temp1262v__dat__length,&__temp1262v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1258v(__temp1262v__unsafe_ptr,__temp1262v__dat__pos,__temp1262v__dat__length,__temp1262v__dat__first,&__temp1263v__unsafe_ptr,&__temp1263v__dat__pos,&__temp1263v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1400v=__temp1263v__unsafe_ptr;
  *__temp1401v=__temp1263v__dat__pos;
  *__temp1402v=__temp1263v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1280v(char** __temp1403v, uint64_t* __temp1404v, uint16_t* __temp1405v, uint16_t* __temp1406v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1403v=unsafe_ptr;
  *__temp1404v=unsafe_size;
  *__temp1405v=unsafe_offset;
  *__temp1406v=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1407v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1407v=__temp446v__;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1408v, uint64_t* __temp1409v, uint16_t* __temp1410v, uint16_t* __temp1411v, char** __temp1412v, uint64_t* __temp1413v, uint16_t* __temp1414v, uint16_t* __temp1415v, uint64_t* __temp1416v) {
  char* buf__unsafe_ptr=*__temp1408v;
  uint64_t buf__unsafe_size=*__temp1409v;
  uint16_t buf__unsafe_offset=*__temp1410v;
  uint16_t buf__unsafe_align=*__temp1411v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1408v=buf__unsafe_ptr;
  *__temp1409v=buf__unsafe_size;
  *__temp1410v=buf__unsafe_offset;
  *__temp1411v=buf__unsafe_align;
  *__temp1412v=buf__unsafe_ptr;
  *__temp1413v=buf__unsafe_size;
  *__temp1414v=buf__unsafe_offset;
  *__temp1415v=buf__unsafe_align;
  *__temp1416v=pos;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1417v) {
  goto __temp_return;
  __temp_return:
  *__temp1417v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1418v, uint64_t* __temp1419v) {
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
  *__temp1418v=from;
  *__temp1419v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1420v, uint64_t r__to, uint64_t* __temp1421v) {
  uint64_t r__from=*__temp1420v;
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
  *__temp1420v=r__from;
  *__temp1421v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp590v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1422v, uint64_t* __temp1423v, uint64_t* __temp1424v, char* __temp1425v) {
  char* first_pos=0;
  char first=0;
  char* __temp591v__unsafe_ptr=0;
  uint64_t __temp591v__dat__pos=0;
  uint64_t __temp591v__dat__length=0;
  char __temp591v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp588v(unsafe_ptr,pos,length,first,&__temp591v__unsafe_ptr,&__temp591v__dat__pos,&__temp591v__dat__length,&__temp591v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1422v=__temp591v__unsafe_ptr;
  *__temp1423v=__temp591v__dat__pos;
  *__temp1424v=__temp591v__dat__length;
  *__temp1425v=__temp591v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1264v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1426v, uint64_t* __temp1427v, uint64_t* __temp1428v, char* __temp1429v) {
  uint64_t __temp1265v__=0;
  uint64_t __temp1266v__=0;
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__dat__pos=0;
  uint64_t __temp1267v__dat__length=0;
  char __temp1267v__dat__first=0;
  nat__temp470v(m__dat__pos,&__temp1265v__);
  nat__temp470v(m__dat__length,&__temp1266v__);
  str__temp590v(m__unsafe_ptr,__temp1265v__,__temp1266v__,&__temp1267v__unsafe_ptr,&__temp1267v__dat__pos,&__temp1267v__dat__length,&__temp1267v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1426v=__temp1267v__unsafe_ptr;
  *__temp1427v=__temp1267v__dat__pos;
  *__temp1428v=__temp1267v__dat__length;
  *__temp1429v=__temp1267v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp625v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1430v, uint64_t* __temp1431v, uint64_t* __temp1432v, char* __temp1433v) {
  goto __temp_return;
  __temp_return:
  *__temp1430v=other__unsafe_ptr;
  *__temp1431v=other__dat__pos;
  *__temp1432v=other__dat__length;
  *__temp1433v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp640v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1434v) {
  goto __temp_return;
  __temp_return:
  *__temp1434v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1435v, uint64_t* __temp1436v, uint16_t* __temp1437v, uint16_t* __temp1438v, uint64_t* __temp1439v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1440v, uint64_t* __temp1441v, uint64_t* __temp1442v, char* __temp1443v) {
  char* buf__unsafe_ptr=*__temp1435v;
  uint64_t buf__unsafe_size=*__temp1436v;
  uint16_t buf__unsafe_offset=*__temp1437v;
  uint16_t buf__unsafe_align=*__temp1438v;
  uint64_t pos=*__temp1439v;
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
  str__temp625v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1435v=buf__unsafe_ptr;
  *__temp1436v=buf__unsafe_size;
  *__temp1437v=buf__unsafe_offset;
  *__temp1438v=buf__unsafe_align;
  *__temp1439v=pos;
  *__temp1440v=__temp708v__unsafe_ptr;
  *__temp1441v=__temp708v__dat__pos;
  *__temp1442v=__temp708v__dat__length;
  *__temp1443v=__temp708v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp709v(char** __temp1444v, uint64_t* __temp1445v, uint16_t* __temp1446v, uint16_t* __temp1447v, uint64_t* __temp1448v, const char* _other, char** __temp1449v, uint64_t* __temp1450v, uint64_t* __temp1451v, char* __temp1452v) {
  char* buf__unsafe_ptr=*__temp1444v;
  uint64_t buf__unsafe_size=*__temp1445v;
  uint16_t buf__unsafe_offset=*__temp1446v;
  uint16_t buf__unsafe_align=*__temp1447v;
  uint64_t pos=*__temp1448v;
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
  __temp_errcode=str__temp632v(_other,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp710v__unsafe_ptr;
  other__dat__pos=__temp710v__dat__pos;
  other__dat__length=__temp710v__dat__length;
  other__dat__first=__temp710v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp711v__);
  add__temp170v(pos,__temp711v__,&__temp712v__);
  next_pos=__temp712v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp713v__);
  gt__temp271v(next_pos,__temp713v__,&__temp714v__);
  if(__temp714v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp715v=0;
  add__temp170v(pos,__temp715v,&__temp716v__);
  prev_pos=__temp716v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp717v__unsafe_ptr,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1444v=buf__unsafe_ptr;
  *__temp1445v=buf__unsafe_size;
  *__temp1446v=buf__unsafe_offset;
  *__temp1447v=buf__unsafe_align;
  *__temp1448v=pos;
  *__temp1449v=__temp717v__unsafe_ptr;
  *__temp1450v=__temp717v__dat__pos;
  *__temp1451v=__temp717v__dat__length;
  *__temp1452v=__temp717v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1279v(char** __temp1453v, uint64_t* __temp1454v, uint16_t* __temp1455v, uint16_t* __temp1456v, char** __temp1457v, uint64_t* __temp1458v, uint64_t* __temp1459v, char* __temp1460v) {
  char* buff__unsafe_ptr=*__temp1453v;
  uint64_t buff__unsafe_size=*__temp1454v;
  uint16_t buff__unsafe_offset=*__temp1455v;
  uint16_t buff__unsafe_align=*__temp1456v;
  char* __temp1282v__unsafe_ptr=0;
  uint64_t __temp1282v__unsafe_size=0;
  uint16_t __temp1282v__unsafe_offset=0;
  uint16_t __temp1282v__unsafe_align=0;
  uint64_t __temp1283v=0;
  uint64_t __temp1284v__=0;
  char* __temp1285v__unsafe_ptr=0;
  uint64_t __temp1285v__unsafe_size=0;
  uint16_t __temp1285v__unsafe_offset=0;
  uint16_t __temp1285v__unsafe_align=0;
  char __temp1286v____temp475v__=0;
  char* __temp1287v__buf__unsafe_ptr=0;
  uint64_t __temp1287v__buf__unsafe_size=0;
  uint16_t __temp1287v__buf__unsafe_offset=0;
  uint16_t __temp1287v__buf__unsafe_align=0;
  uint64_t __temp1287v__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __temp1288v__=0;
  uint64_t __temp1289v__from=0;
  uint64_t __temp1289v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __temp1290v=0;
  uint64_t __temp1291v__=0;
  uint64_t i=0;
  char* __temp1292v__=0;
  char* __temp1293v__unsafe_ptr=0;
  uint16_t __temp1293v__dat__pos=0;
  uint16_t __temp1293v__dat__length=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__dat__pos=0;
  uint64_t __temp1294v__dat__length=0;
  char __temp1294v__dat__first=0;
  char* __temp1295v__unsafe_ptr=0;
  uint64_t __temp1295v__dat__pos=0;
  uint64_t __temp1295v__dat__length=0;
  char __temp1295v__dat__first=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__dat__pos=0;
  uint64_t __temp1297v__dat__length=0;
  char __temp1297v__dat__first=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__dat__pos=0;
  uint64_t __temp1298v__dat__length=0;
  char __temp1298v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1280v(&__temp1282v__unsafe_ptr,&__temp1282v__unsafe_size,&__temp1282v__unsafe_offset,&__temp1282v__unsafe_align);
  __temp1283v=4;
  KB__temp444v(__temp1283v,&__temp1284v__);
  __temp_errcode=alloc__temp473v(&__temp1282v__unsafe_ptr,&__temp1282v__unsafe_size,&__temp1282v__unsafe_offset,&__temp1282v__unsafe_align,__temp1284v__,&__temp1285v__unsafe_ptr,&__temp1285v__unsafe_size,&__temp1285v__unsafe_offset,&__temp1285v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1285v__unsafe_ptr,&__temp1285v__unsafe_size,&__temp1285v__unsafe_offset,&__temp1285v__unsafe_align,&__temp1287v__buf__unsafe_ptr,&__temp1287v__buf__unsafe_size,&__temp1287v__buf__unsafe_offset,&__temp1287v__buf__unsafe_align,&__temp1287v__pos);
  mem__pos=__temp1287v__pos;
  len__temp557v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1288v__);
  range__temp436v(__temp1288v__,&__temp1289v__from,&__temp1289v__to);
  iter__from=__temp1289v__from;
  iter__to=__temp1289v__to;
  start=mem__pos;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1291v__);
  __temp1290v=__temp_complain;
  i=__temp1291v__;
  __temp1290v=__temp1290v==0;
  if(!__temp1290v){
  break;
  }
  __temp_errcode=get__temp550v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1292v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1292v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1293v__unsafe_ptr,__temp1292v__,8);
  memcpy(&__temp1293v__dat__pos,__temp1292v__+8,2);
  memcpy(&__temp1293v__dat__length,__temp1292v__+10,2);
  unpack__temp1264v(__temp1293v__unsafe_ptr,__temp1293v__dat__pos,__temp1293v__dat__length,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length,&__temp1294v__dat__first);
  __temp_errcode=copy__temp700v(&__temp1285v__unsafe_ptr,&__temp1285v__unsafe_size,&__temp1285v__unsafe_offset,&__temp1285v__unsafe_align,&mem__pos,__temp1294v__unsafe_ptr,__temp1294v__dat__pos,__temp1294v__dat__length,__temp1294v__dat__first,&__temp1295v__unsafe_ptr,&__temp1295v__dat__pos,&__temp1295v__dat__length,&__temp1295v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&__temp1285v__unsafe_ptr,&__temp1285v__unsafe_size,&__temp1285v__unsafe_offset,&__temp1285v__unsafe_align,&mem__pos,__temp1296v,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp626v(__temp1285v__unsafe_ptr,__temp1285v__unsafe_size,__temp1285v__unsafe_offset,__temp1285v__unsafe_align,start,mem__pos,&__temp1298v__unsafe_ptr,&__temp1298v__dat__pos,&__temp1298v__dat__length,&__temp1298v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1298v__unsafe_ptr=__temp1285v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1298v__unsafe_ptr,&__temp1286v____temp475v__);
  if(__temp1286v____temp475v__){
  __temp1285v__unsafe_size=0;
  __temp1285v__unsafe_size=__temp1285v__unsafe_size;
  __temp1298v__unsafe_ptr=__temp1298v__unsafe_ptr;
  free__temp466v(&__temp1298v__unsafe_ptr);
  }
  __temp_return:
  *__temp1453v=buff__unsafe_ptr;
  *__temp1454v=buff__unsafe_size;
  *__temp1455v=buff__unsafe_offset;
  *__temp1456v=buff__unsafe_align;
  *__temp1457v=__temp1298v__unsafe_ptr;
  *__temp1458v=__temp1298v__dat__pos;
  *__temp1459v=__temp1298v__dat__length;
  *__temp1460v=__temp1298v__dat__first;
  
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

static inline __attribute__((always_inline)) int main__temp1299v() {
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__unsafe_size=0;
  uint16_t __temp1300v__unsafe_offset=0;
  uint16_t __temp1300v__unsafe_align=0;
  char* __temp1301v__unsafe_ptr=0;
  uint64_t __temp1301v__unsafe_size=0;
  uint16_t __temp1301v__unsafe_offset=0;
  uint16_t __temp1301v__unsafe_align=0;
  uint64_t __temp1302v=0;
  char* __temp1303v__unsafe_ptr=0;
  uint64_t __temp1303v__unsafe_size=0;
  uint16_t __temp1303v__unsafe_offset=0;
  uint16_t __temp1303v__unsafe_align=0;
  char __temp1304v____temp475v__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
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
  char* __temp1324v__unsafe_ptr=0;
  uint16_t __temp1324v__dat__pos=0;
  uint16_t __temp1324v__dat__length=0;
  uint64_t __temp1325v=0;
  char* __temp1326v__=0;
  char* __temp1327v__unsafe_ptr=0;
  uint64_t __temp1327v__dat__pos=0;
  uint64_t __temp1327v__dat__length=0;
  char __temp1327v__dat__first=0;
  char __temp1328v____temp1286v____temp475v__=0;
  uint64_t __temp1328v____temp1285v__unsafe_size=0;
  char* __temp1329v__unsafe_ptr=0;
  uint16_t __temp1329v__dat__pos=0;
  uint16_t __temp1329v__dat__length=0;
  uint64_t __temp1330v__=0;
  uint64_t __temp1331v__from=0;
  uint64_t __temp1331v__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __temp1332v=0;
  uint64_t __temp1333v__=0;
  uint64_t j=0;
  char* __temp1335v__=0;
  char* __temp1336v__unsafe_ptr=0;
  uint16_t __temp1336v__dat__pos=0;
  uint16_t __temp1336v__dat__length=0;
  char* __temp1337v__unsafe_ptr=0;
  uint64_t __temp1337v__dat__pos=0;
  uint64_t __temp1337v__dat__length=0;
  char __temp1337v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1277v(&__temp1300v__unsafe_ptr,&__temp1300v__unsafe_size,&__temp1300v__unsafe_offset,&__temp1300v__unsafe_align);
  __temp1301v__unsafe_ptr=__temp1300v__unsafe_ptr;
  __temp1301v__unsafe_size=__temp1300v__unsafe_size;
  __temp1301v__unsafe_offset=__temp1300v__unsafe_offset;
  __temp1301v__unsafe_align=__temp1300v__unsafe_align;
  __temp1302v=6;
  __temp_errcode=alloc__temp473v(&__temp1301v__unsafe_ptr,&__temp1301v__unsafe_size,&__temp1301v__unsafe_offset,&__temp1301v__unsafe_align,__temp1302v,&__temp1303v__unsafe_ptr,&__temp1303v__unsafe_size,&__temp1303v__unsafe_offset,&__temp1303v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buff__unsafe_ptr=__temp1303v__unsafe_ptr;
  buff__unsafe_size=__temp1303v__unsafe_size;
  buff__unsafe_offset=__temp1303v__unsafe_offset;
  buff__unsafe_align=__temp1303v__unsafe_align;
  __temp1305v=0;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1305v,&__temp1306v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1261v(__temp1307v,&__temp1308v__unsafe_ptr,&__temp1308v__dat__pos,&__temp1308v__dat__length);
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
  __temp1309v=1;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1309v,&__temp1310v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1261v(__temp1311v,&__temp1312v__unsafe_ptr,&__temp1312v__dat__pos,&__temp1312v__dat__length);
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
  __temp1313v=2;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1313v,&__temp1314v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1261v(__temp1315v,&__temp1316v__unsafe_ptr,&__temp1316v__dat__pos,&__temp1316v__dat__length);
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
  __temp1317v=3;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1317v,&__temp1318v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1261v(__temp1319v,&__temp1320v__unsafe_ptr,&__temp1320v__dat__pos,&__temp1320v__dat__length);
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
  __temp1321v=4;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1321v,&__temp1322v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1261v(__temp1323v,&__temp1324v__unsafe_ptr,&__temp1324v__dat__pos,&__temp1324v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1322v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1322v__,&__temp1324v__unsafe_ptr,8);
  memcpy(__temp1322v__+8,&__temp1324v__dat__pos,2);
  memcpy(__temp1322v__+10,&__temp1324v__dat__length,2);
  __temp1325v=5;
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1325v,&__temp1326v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1279v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,&__temp1327v__unsafe_ptr,&__temp1327v__dat__pos,&__temp1327v__dat__length,&__temp1327v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1258v(__temp1327v__unsafe_ptr,__temp1327v__dat__pos,__temp1327v__dat__length,__temp1327v__dat__first,&__temp1329v__unsafe_ptr,&__temp1329v__dat__pos,&__temp1329v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1326v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1326v__,&__temp1329v__unsafe_ptr,8);
  memcpy(__temp1326v__+8,&__temp1329v__dat__pos,2);
  memcpy(__temp1326v__+10,&__temp1329v__dat__length,2);
  len__temp557v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1330v__);
  range__temp436v(__temp1330v__,&__temp1331v__from,&__temp1331v__to);
  full_iter__from=__temp1331v__from;
  full_iter__to=__temp1331v__to;
  while(1){
  __temp_complain=next__temp440v(&full_iter__from,full_iter__to,&__temp1333v__);
  __temp1332v=__temp_complain;
  j=__temp1333v__;
  __temp1332v=__temp1332v==0;
  if(!__temp1332v){
  break;
  }
  print__temp374v(j,__temp1296v);
  __temp_errcode=get__temp550v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1335v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1335v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1336v__unsafe_ptr,__temp1335v__,8);
  memcpy(&__temp1336v__dat__pos,__temp1335v__+8,2);
  memcpy(&__temp1336v__dat__length,__temp1335v__+10,2);
  unpack__temp1264v(__temp1336v__unsafe_ptr,__temp1336v__dat__pos,__temp1336v__dat__length,&__temp1337v__unsafe_ptr,&__temp1337v__dat__pos,&__temp1337v__dat__length,&__temp1337v__dat__first);
  print__temp742v(__temp1337v__unsafe_ptr,__temp1337v__dat__pos,__temp1337v__dat__length,__temp1337v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1327v__unsafe_ptr,&__temp1328v____temp1286v____temp475v__);
  if(__temp1328v____temp1286v____temp475v__){
  __temp1328v____temp1285v__unsafe_size=0;
  __temp1328v____temp1285v__unsafe_size=__temp1328v____temp1285v__unsafe_size;
  __temp1327v__unsafe_ptr=__temp1327v__unsafe_ptr;
  free__temp466v(&__temp1327v__unsafe_ptr);
  }
  exists__temp412v(__temp1303v__unsafe_ptr,&__temp1304v____temp475v__);
  if(__temp1304v____temp475v__){
  __temp1303v__unsafe_size=0;
  __temp1303v__unsafe_size=__temp1303v__unsafe_size;
  __temp1303v__unsafe_ptr=__temp1303v__unsafe_ptr;
  free__temp466v(&__temp1303v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1299v();return 0;}