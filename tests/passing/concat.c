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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1279v(char** __temp1338v, uint64_t* __temp1339v, uint16_t* __temp1340v, uint16_t* __temp1341v) {
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1342v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1342v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1343v) {
  char* allocated=*__temp1343v;
  if(allocated){
  free(allocated);
  }
  *__temp1343v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1344v) {
  int value=0;
  *__temp1344v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1345v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1345v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1346v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1346v=__temp95v__;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1348v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1348v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1349v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1349v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1350v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1350v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
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
  *__temp1353v=buffer__unsafe_ptr;
  *__temp1354v=buffer__unsafe_size;
  *__temp1355v=buffer__unsafe_offset;
  *__temp1356v=buffer__unsafe_align;
  *__temp1357v=__temp485v__unsafe_ptr;
  *__temp1358v=__temp485v__unsafe_size;
  *__temp1359v=__temp485v__unsafe_offset;
  *__temp1360v=__temp485v__unsafe_align;
  
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

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1365v, uint64_t* __temp1366v, uint16_t* __temp1367v, uint16_t* __temp1368v, uint64_t i, char** __temp1369v) {
  char* buffer__unsafe_ptr=*__temp1365v;
  uint64_t buffer__unsafe_size=*__temp1366v;
  uint16_t buffer__unsafe_offset=*__temp1367v;
  uint16_t buffer__unsafe_align=*__temp1368v;
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
  *__temp1365v=buffer__unsafe_ptr;
  *__temp1366v=buffer__unsafe_size;
  *__temp1367v=buffer__unsafe_offset;
  *__temp1368v=buffer__unsafe_align;
  *__temp1369v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1370v, uint64_t* __temp1371v, uint16_t* __temp1372v, uint16_t* __temp1373v) {
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

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1375v) {
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
  *__temp1375v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1376v, uint64_t* __temp1377v, uint64_t* __temp1378v, char* __temp1379v) {
  goto __temp_return;
  __temp_return:
  *__temp1376v=unsafe_ptr;
  *__temp1377v=dat__pos;
  *__temp1378v=dat__length;
  *__temp1379v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1380v, uint64_t* __temp1381v, uint64_t* __temp1382v, char* __temp1383v) {
  char* unsafe_ptr=0;
  uint64_t __temp600v__=0;
  uint64_t __temp601v=0;
  char __temp602v__=0;
  uint64_t __temp603v__=0;
  uint64_t __temp604v=0;
  char __temp605v__=0;
  char* __temp606v__unsafe_ptr=0;
  uint64_t __temp606v__dat__pos=0;
  uint64_t __temp606v__dat__length=0;
  char __temp606v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp600v__);
  __temp601v=1;
  neq__temp142v(__temp600v__,__temp601v,&__temp602v__);
  if(__temp602v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp603v__);
  __temp604v=0;
  neq__temp142v(__temp603v__,__temp604v,&__temp605v__);
  if(__temp605v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp595v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp606v__unsafe_ptr,&__temp606v__dat__pos,&__temp606v__dat__length,&__temp606v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1380v=__temp606v__unsafe_ptr;
  *__temp1381v=__temp606v__dat__pos;
  *__temp1382v=__temp606v__dat__length;
  *__temp1383v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v) {
  uint64_t __temp632v=0;
  char __temp633v__=0;
  char* __temp634v__=0;
  char __temp635v__value=0;
  char first=0;
  char* __temp636v__unsafe_ptr=0;
  uint64_t __temp636v__dat__pos=0;
  uint64_t __temp636v__dat__length=0;
  char __temp636v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp632v=0;
  neq__temp142v(length,__temp632v,&__temp633v__);
  if(__temp633v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp634v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp634v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp635v__value,__temp634v__,1);
  first=__temp635v__value;
  }
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp636v__unsafe_ptr,&__temp636v__dat__pos,&__temp636v__dat__length,&__temp636v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1384v=__temp636v__unsafe_ptr;
  *__temp1385v=__temp636v__dat__pos;
  *__temp1386v=__temp636v__dat__length;
  *__temp1387v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1388v, uint64_t* __temp1389v, uint64_t* __temp1390v, char* __temp1391v) {
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__unsafe_size=0;
  uint16_t __temp638v__unsafe_offset=0;
  uint16_t __temp638v__unsafe_align=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__unsafe_size=0;
  uint16_t __temp639v__unsafe_offset=0;
  uint16_t __temp639v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp640v__=0;
  uint64_t length=0;
  uint64_t __temp641v=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp559v(&__temp638v__unsafe_ptr,&__temp638v__unsafe_size,&__temp638v__unsafe_offset,&__temp638v__unsafe_align);
  __temp639v__unsafe_ptr=__temp638v__unsafe_ptr;
  __temp639v__unsafe_size=__temp638v__unsafe_size;
  __temp639v__unsafe_offset=__temp638v__unsafe_offset;
  __temp639v__unsafe_align=__temp638v__unsafe_align;
  buf__unsafe_ptr=__temp639v__unsafe_ptr;
  buf__unsafe_size=__temp639v__unsafe_size;
  buf__unsafe_offset=__temp639v__unsafe_offset;
  buf__unsafe_align=__temp639v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp640v__);
  buf__unsafe_ptr=__temp640v__;
  if(c){
  length=strlen(c);
  }
  __temp641v=1;
  add__temp170v(length,__temp641v,&__temp642v__);
  buf__unsafe_size=__temp642v__;
  __temp643v=0;
  __temp_errcode=str__temp631v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp643v,length,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1388v=__temp644v__unsafe_ptr;
  *__temp1389v=__temp644v__dat__pos;
  *__temp1390v=__temp644v__dat__length;
  *__temp1391v=__temp644v__dat__first;
  
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

static inline __attribute__((always_inline)) int nat16__temp1250v(uint64_t x, uint16_t* __temp1393v) {
  uint64_t __temp1251v=0;
  char __temp1252v__=0;
  uint16_t value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1251v=65535;
  gt__temp271v(x,__temp1251v,&__temp1252v__);
  if(__temp1252v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  value=x;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1393v=value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int strdat__temp1257v(uint64_t _pos, uint64_t _length, uint16_t* __temp1394v, uint16_t* __temp1395v) {
  uint16_t __temp1258v__=0;
  uint16_t pos=0;
  uint16_t __temp1259v__=0;
  uint16_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=nat16__temp1250v(_pos,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1258v__;
  __temp_errcode=nat16__temp1250v(_length,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1259v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1394v=pos;
  *__temp1395v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp1260v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __temp1396v, uint16_t* __temp1397v, uint16_t* __temp1398v) {
  char* unsafe_ptr=0;
  uint16_t __temp1261v__pos=0;
  uint16_t __temp1261v__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __temp_errcode=strdat__temp1257v(s__dat__pos,s__dat__length,&__temp1261v__pos,&__temp1261v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  dat__pos=__temp1261v__pos;
  dat__length=__temp1261v__length;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1396v=unsafe_ptr;
  *__temp1397v=dat__pos;
  *__temp1398v=dat__length;
  
  return __temp_errcode;
}

int str__temp1263v(const char* s, char** __temp1399v, uint16_t* __temp1400v, uint16_t* __temp1401v) {
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__dat__pos=0;
  uint64_t __temp1264v__dat__length=0;
  char __temp1264v__dat__first=0;
  char* __temp1265v__unsafe_ptr=0;
  uint16_t __temp1265v__dat__pos=0;
  uint16_t __temp1265v__dat__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(s,&__temp1264v__unsafe_ptr,&__temp1264v__dat__pos,&__temp1264v__dat__length,&__temp1264v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1264v__unsafe_ptr,__temp1264v__dat__pos,__temp1264v__dat__length,__temp1264v__dat__first,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1399v=__temp1265v__unsafe_ptr;
  *__temp1400v=__temp1265v__dat__pos;
  *__temp1401v=__temp1265v__dat__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1402v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1402v=__temp446v__;
}

int alloc__temp558v(uint64_t size, char** __temp1403v, uint64_t* __temp1404v, uint16_t* __temp1405v, uint16_t* __temp1406v) {
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__unsafe_size=0;
  uint16_t __temp561v__unsafe_offset=0;
  uint16_t __temp561v__unsafe_align=0;
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char __temp564v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp559v(&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_offset,&__temp561v__unsafe_align);
  __temp562v__unsafe_ptr=__temp561v__unsafe_ptr;
  __temp562v__unsafe_size=__temp561v__unsafe_size;
  __temp562v__unsafe_offset=__temp561v__unsafe_offset;
  __temp562v__unsafe_align=__temp561v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align,size,&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp563v__unsafe_ptr,&__temp564v____temp475v__);
  if(__temp564v____temp475v__){
  __temp563v__unsafe_size=0;
  __temp563v__unsafe_size=__temp563v__unsafe_size;
  __temp563v__unsafe_ptr=__temp563v__unsafe_ptr;
  free__temp466v(&__temp563v__unsafe_ptr);
  }
  __temp_return:
  *__temp1403v=__temp563v__unsafe_ptr;
  *__temp1404v=__temp563v__unsafe_size;
  *__temp1405v=__temp563v__unsafe_offset;
  *__temp1406v=__temp563v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp678v(char** __temp1407v, uint64_t* __temp1408v, uint16_t* __temp1409v, uint16_t* __temp1410v, char** __temp1411v, uint64_t* __temp1412v, uint16_t* __temp1413v, uint16_t* __temp1414v, uint64_t* __temp1415v) {
  char* buf__unsafe_ptr=*__temp1407v;
  uint64_t buf__unsafe_size=*__temp1408v;
  uint16_t buf__unsafe_offset=*__temp1409v;
  uint16_t buf__unsafe_align=*__temp1410v;
  uint64_t __temp679v=0;
  uint64_t __temp680v=0;
  uint64_t pos=0;
  __temp679v=0;
  __temp680v=__temp679v;
  pos=__temp680v;
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

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1416v) {
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

static inline __attribute__((always_inline)) void str__temp597v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1421v, uint64_t* __temp1422v, uint64_t* __temp1423v, char* __temp1424v) {
  char* first_pos=0;
  char first=0;
  char* __temp598v__unsafe_ptr=0;
  uint64_t __temp598v__dat__pos=0;
  uint64_t __temp598v__dat__length=0;
  char __temp598v__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__temp595v(unsafe_ptr,pos,length,first,&__temp598v__unsafe_ptr,&__temp598v__dat__pos,&__temp598v__dat__length,&__temp598v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1421v=__temp598v__unsafe_ptr;
  *__temp1422v=__temp598v__dat__pos;
  *__temp1423v=__temp598v__dat__length;
  *__temp1424v=__temp598v__dat__first;
}

static inline __attribute__((always_inline)) void unpack__temp1266v(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __temp1425v, uint64_t* __temp1426v, uint64_t* __temp1427v, char* __temp1428v) {
  uint64_t __temp1267v__=0;
  uint64_t __temp1268v__=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__dat__pos=0;
  uint64_t __temp1269v__dat__length=0;
  char __temp1269v__dat__first=0;
  nat__temp470v(m__dat__pos,&__temp1267v__);
  nat__temp470v(m__dat__length,&__temp1268v__);
  str__temp597v(m__unsafe_ptr,__temp1267v__,__temp1268v__,&__temp1269v__unsafe_ptr,&__temp1269v__dat__pos,&__temp1269v__dat__length,&__temp1269v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1425v=__temp1269v__unsafe_ptr;
  *__temp1426v=__temp1269v__dat__pos;
  *__temp1427v=__temp1269v__dat__length;
  *__temp1428v=__temp1269v__dat__first;
}

static inline __attribute__((always_inline)) void str__temp630v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1429v, uint64_t* __temp1430v, uint64_t* __temp1431v, char* __temp1432v) {
  goto __temp_return;
  __temp_return:
  *__temp1429v=other__unsafe_ptr;
  *__temp1430v=other__dat__pos;
  *__temp1431v=other__dat__length;
  *__temp1432v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1433v) {
  goto __temp_return;
  __temp_return:
  *__temp1433v=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__temp702v(char** __temp1434v, uint64_t* __temp1435v, uint16_t* __temp1436v, uint16_t* __temp1437v, uint64_t* __temp1438v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1439v, uint64_t* __temp1440v, uint64_t* __temp1441v, char* __temp1442v) {
  char* buf__unsafe_ptr=*__temp1434v;
  uint64_t buf__unsafe_size=*__temp1435v;
  uint16_t buf__unsafe_offset=*__temp1436v;
  uint16_t buf__unsafe_align=*__temp1437v;
  uint64_t pos=*__temp1438v;
  char* __temp703v__unsafe_ptr=0;
  uint64_t __temp703v__dat__pos=0;
  uint64_t __temp703v__dat__length=0;
  char __temp703v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp704v__=0;
  uint64_t __temp705v__=0;
  uint64_t next_pos=0;
  uint64_t __temp706v__=0;
  char __temp707v__=0;
  uint64_t __temp708v=0;
  uint64_t __temp709v__=0;
  uint64_t prev_pos=0;
  char* __temp710v__unsafe_ptr=0;
  uint64_t __temp710v__dat__pos=0;
  uint64_t __temp710v__dat__length=0;
  char __temp710v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp703v__unsafe_ptr,&__temp703v__dat__pos,&__temp703v__dat__length,&__temp703v__dat__first);
  other__unsafe_ptr=__temp703v__unsafe_ptr;
  other__dat__pos=__temp703v__dat__pos;
  other__dat__length=__temp703v__dat__length;
  other__dat__first=__temp703v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp704v__);
  add__temp170v(pos,__temp704v__,&__temp705v__);
  next_pos=__temp705v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp706v__);
  gt__temp271v(next_pos,__temp706v__,&__temp707v__);
  if(__temp707v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp708v=0;
  add__temp170v(pos,__temp708v,&__temp709v__);
  prev_pos=__temp709v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
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
  *__temp1439v=__temp710v__unsafe_ptr;
  *__temp1440v=__temp710v__dat__pos;
  *__temp1441v=__temp710v__dat__length;
  *__temp1442v=__temp710v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy__temp711v(char** __temp1443v, uint64_t* __temp1444v, uint16_t* __temp1445v, uint16_t* __temp1446v, uint64_t* __temp1447v, const char* _other, char** __temp1448v, uint64_t* __temp1449v, uint64_t* __temp1450v, char* __temp1451v) {
  char* buf__unsafe_ptr=*__temp1443v;
  uint64_t buf__unsafe_size=*__temp1444v;
  uint16_t buf__unsafe_offset=*__temp1445v;
  uint16_t buf__unsafe_align=*__temp1446v;
  uint64_t pos=*__temp1447v;
  char* __temp712v__unsafe_ptr=0;
  uint64_t __temp712v__dat__pos=0;
  uint64_t __temp712v__dat__length=0;
  char __temp712v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp713v__=0;
  uint64_t __temp714v__=0;
  uint64_t next_pos=0;
  uint64_t __temp715v__=0;
  char __temp716v__=0;
  uint64_t __temp717v=0;
  uint64_t __temp718v__=0;
  uint64_t prev_pos=0;
  char* __temp719v__unsafe_ptr=0;
  uint64_t __temp719v__dat__pos=0;
  uint64_t __temp719v__dat__length=0;
  char __temp719v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(_other,&__temp712v__unsafe_ptr,&__temp712v__dat__pos,&__temp712v__dat__length,&__temp712v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp712v__unsafe_ptr;
  other__dat__pos=__temp712v__dat__pos;
  other__dat__length=__temp712v__dat__length;
  other__dat__first=__temp712v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp713v__);
  add__temp170v(pos,__temp713v__,&__temp714v__);
  next_pos=__temp714v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp715v__);
  gt__temp271v(next_pos,__temp715v__,&__temp716v__);
  if(__temp716v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp717v=0;
  add__temp170v(pos,__temp717v,&__temp718v__);
  prev_pos=__temp718v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp719v__unsafe_ptr,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
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
  *__temp1448v=__temp719v__unsafe_ptr;
  *__temp1449v=__temp719v__dat__pos;
  *__temp1450v=__temp719v__dat__length;
  *__temp1451v=__temp719v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int concat__temp1281v(char** __temp1452v, uint64_t* __temp1453v, uint16_t* __temp1454v, uint16_t* __temp1455v, char** __temp1456v, uint64_t* __temp1457v, uint64_t* __temp1458v, char* __temp1459v) {
  char* buff__unsafe_ptr=*__temp1452v;
  uint64_t buff__unsafe_size=*__temp1453v;
  uint16_t buff__unsafe_offset=*__temp1454v;
  uint16_t buff__unsafe_align=*__temp1455v;
  uint64_t __temp1282v=0;
  uint64_t __temp1283v__=0;
  char* __temp1284v__unsafe_ptr=0;
  uint64_t __temp1284v__unsafe_size=0;
  uint16_t __temp1284v__unsafe_offset=0;
  uint16_t __temp1284v__unsafe_align=0;
  char __temp1285v____temp564v____temp475v__=0;
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
  __temp1282v=4;
  KB__temp444v(__temp1282v,&__temp1283v__);
  __temp_errcode=alloc__temp558v(__temp1283v__,&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp678v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&__temp1286v__buf__unsafe_ptr,&__temp1286v__buf__unsafe_size,&__temp1286v__buf__unsafe_offset,&__temp1286v__buf__unsafe_align,&__temp1286v__pos);
  mem__pos=__temp1286v__pos;
  len__temp557v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1287v__);
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
  __temp_errcode=get__temp550v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__temp1291v__);
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
  unpack__temp1266v(__temp1292v__unsafe_ptr,__temp1292v__dat__pos,__temp1292v__dat__length,&__temp1293v__unsafe_ptr,&__temp1293v__dat__pos,&__temp1293v__dat__length,&__temp1293v__dat__first);
  __temp_errcode=copy__temp702v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&mem__pos,__temp1293v__unsafe_ptr,__temp1293v__dat__pos,__temp1293v__dat__length,__temp1293v__dat__first,&__temp1294v__unsafe_ptr,&__temp1294v__dat__pos,&__temp1294v__dat__length,&__temp1294v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp711v(&__temp1284v__unsafe_ptr,&__temp1284v__unsafe_size,&__temp1284v__unsafe_offset,&__temp1284v__unsafe_align,&mem__pos,__temp1295v,&__temp1296v__unsafe_ptr,&__temp1296v__dat__pos,&__temp1296v__dat__length,&__temp1296v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  __temp_errcode=str__temp631v(__temp1284v__unsafe_ptr,__temp1284v__unsafe_size,__temp1284v__unsafe_offset,__temp1284v__unsafe_align,start,mem__pos,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1297v__unsafe_ptr=__temp1284v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1297v__unsafe_ptr,&__temp1285v____temp564v____temp475v__);
  if(__temp1285v____temp564v____temp475v__){
  __temp1284v__unsafe_size=0;
  __temp1284v__unsafe_size=__temp1284v__unsafe_size;
  __temp1297v__unsafe_ptr=__temp1297v__unsafe_ptr;
  free__temp466v(&__temp1297v__unsafe_ptr);
  }
  __temp_return:
  *__temp1452v=buff__unsafe_ptr;
  *__temp1453v=buff__unsafe_size;
  *__temp1454v=buff__unsafe_offset;
  *__temp1455v=buff__unsafe_align;
  *__temp1456v=__temp1297v__unsafe_ptr;
  *__temp1457v=__temp1297v__dat__pos;
  *__temp1458v=__temp1297v__dat__length;
  *__temp1459v=__temp1297v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
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
  char __temp1303v____temp475v__=0;
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
  char __temp1327v____temp1285v____temp564v____temp475v__=0;
  uint64_t __temp1327v____temp1284v__unsafe_size=0;
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
  str____temp_buffer____buffer__temp1279v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1304v,&__temp1305v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1263v(__temp1306v,&__temp1307v__unsafe_ptr,&__temp1307v__dat__pos,&__temp1307v__dat__length);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1308v,&__temp1309v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1263v(__temp1310v,&__temp1311v__unsafe_ptr,&__temp1311v__dat__pos,&__temp1311v__dat__length);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1312v,&__temp1313v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1263v(__temp1314v,&__temp1315v__unsafe_ptr,&__temp1315v__dat__pos,&__temp1315v__dat__length);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1316v,&__temp1317v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1263v(__temp1318v,&__temp1319v__unsafe_ptr,&__temp1319v__dat__pos,&__temp1319v__dat__length);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1320v,&__temp1321v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1263v(__temp1322v,&__temp1323v__unsafe_ptr,&__temp1323v__dat__pos,&__temp1323v__dat__length);
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
  __temp_errcode=mutget__temp543v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__temp1324v,&__temp1325v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=concat__temp1281v(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,&__temp1326v__unsafe_ptr,&__temp1326v__dat__pos,&__temp1326v__dat__length,&__temp1326v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp1260v(__temp1326v__unsafe_ptr,__temp1326v__dat__pos,__temp1326v__dat__length,__temp1326v__dat__first,&__temp1328v__unsafe_ptr,&__temp1328v__dat__pos,&__temp1328v__dat__length);
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
  len__temp557v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__temp1329v__);
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
  __temp_errcode=get__temp550v(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__temp1334v__);
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
  unpack__temp1266v(__temp1335v__unsafe_ptr,__temp1335v__dat__pos,__temp1335v__dat__length,&__temp1336v__unsafe_ptr,&__temp1336v__dat__pos,&__temp1336v__dat__length,&__temp1336v__dat__first);
  print__temp744v(__temp1336v__unsafe_ptr,__temp1336v__dat__pos,__temp1336v__dat__length,__temp1336v__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1326v__unsafe_ptr,&__temp1327v____temp1285v____temp564v____temp475v__);
  if(__temp1327v____temp1285v____temp564v____temp475v__){
  __temp1327v____temp1284v__unsafe_size=0;
  __temp1327v____temp1284v__unsafe_size=__temp1327v____temp1284v__unsafe_size;
  __temp1326v__unsafe_ptr=__temp1326v__unsafe_ptr;
  free__temp466v(&__temp1326v__unsafe_ptr);
  }
  exists__temp412v(__temp1302v__unsafe_ptr,&__temp1303v____temp475v__);
  if(__temp1303v____temp475v__){
  __temp1302v__unsafe_size=0;
  __temp1302v__unsafe_size=__temp1302v__unsafe_size;
  __temp1302v__unsafe_ptr=__temp1302v__unsafe_ptr;
  free__temp466v(&__temp1302v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1298v();return 0;}