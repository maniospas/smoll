#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1251v="-------------------";
const char* const __temp823v="";
const char* const __temp1253v="name      ";
const char* const __temp1279v="it's a me";
const char* const __temp1256v="surnname  ";
const char* const __temp365v="\n";
const char* const __temp1281v="mario";
static const char* __temp_all_errcodes[33] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1261v(char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__temp1304v=unsafe_ptr;
  *__temp1305v=unsafe_size;
  *__temp1306v=unsafe_offset;
  *__temp1307v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1308v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1309v) {
  char* allocated=*__temp1309v;
  if(allocated){
  free(allocated);
  }
  *__temp1309v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1310v) {
  int value=0;
  *__temp1310v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1311v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1312v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1312v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1313v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1314v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1315v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1315v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1316v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1317v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1317v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1318v) {
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
  *__temp1318v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1319v, uint64_t* __temp1320v, uint16_t* __temp1321v, uint16_t* __temp1322v, uint64_t size, char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v) {
  char* buffer__unsafe_ptr=*__temp1319v;
  uint64_t buffer__unsafe_size=*__temp1320v;
  uint16_t buffer__unsafe_offset=*__temp1321v;
  uint16_t buffer__unsafe_align=*__temp1322v;
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
  *__temp1319v=buffer__unsafe_ptr;
  *__temp1320v=buffer__unsafe_size;
  *__temp1321v=buffer__unsafe_offset;
  *__temp1322v=buffer__unsafe_align;
  *__temp1323v=__temp485v__unsafe_ptr;
  *__temp1324v=__temp485v__unsafe_size;
  *__temp1325v=__temp485v__unsafe_offset;
  *__temp1326v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1268v(char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1327v=unsafe_ptr;
  *__temp1328v=unsafe_size;
  *__temp1329v=unsafe_offset;
  *__temp1330v=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1331v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1331v=__temp446v__;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1332v, uint64_t* __temp1333v, uint16_t* __temp1334v, uint16_t* __temp1335v, char** __temp1336v, uint64_t* __temp1337v, uint16_t* __temp1338v, uint16_t* __temp1339v, uint64_t* __temp1340v) {
  char* buf__unsafe_ptr=*__temp1332v;
  uint64_t buf__unsafe_size=*__temp1333v;
  uint16_t buf__unsafe_offset=*__temp1334v;
  uint16_t buf__unsafe_align=*__temp1335v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1332v=buf__unsafe_ptr;
  *__temp1333v=buf__unsafe_size;
  *__temp1334v=buf__unsafe_offset;
  *__temp1335v=buf__unsafe_align;
  *__temp1336v=buf__unsafe_ptr;
  *__temp1337v=buf__unsafe_size;
  *__temp1338v=buf__unsafe_offset;
  *__temp1339v=buf__unsafe_align;
  *__temp1340v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1341v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1342v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1342v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1343v) {
  *__temp1343v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1344v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1344v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1345v, uint64_t* __temp1346v, uint16_t* __temp1347v, uint16_t* __temp1348v, uint64_t i, char** __temp1349v) {
  char* buffer__unsafe_ptr=*__temp1345v;
  uint64_t buffer__unsafe_size=*__temp1346v;
  uint16_t buffer__unsafe_offset=*__temp1347v;
  uint16_t buffer__unsafe_align=*__temp1348v;
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
  *__temp1345v=buffer__unsafe_ptr;
  *__temp1346v=buffer__unsafe_size;
  *__temp1347v=buffer__unsafe_offset;
  *__temp1348v=buffer__unsafe_align;
  *__temp1349v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1350v, uint64_t* __temp1351v, uint16_t* __temp1352v, uint16_t* __temp1353v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1350v=unsafe_ptr;
  *__temp1351v=unsafe_size;
  *__temp1352v=unsafe_offset;
  *__temp1353v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1354v) {
  *__temp1354v=to;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1355v) {
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
  *__temp1355v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1356v, uint64_t* __temp1357v, uint64_t* __temp1358v, char* __temp1359v) {
  goto __temp_return;
  __temp_return:
  *__temp1356v=unsafe_ptr;
  *__temp1357v=dat__pos;
  *__temp1358v=dat__length;
  *__temp1359v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1360v, uint64_t* __temp1361v, uint64_t* __temp1362v, char* __temp1363v) {
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
  *__temp1360v=__temp601v__unsafe_ptr;
  *__temp1361v=__temp601v__dat__pos;
  *__temp1362v=__temp601v__dat__length;
  *__temp1363v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1364v, uint64_t* __temp1365v, uint64_t* __temp1366v, char* __temp1367v) {
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
  *__temp1364v=__temp631v__unsafe_ptr;
  *__temp1365v=__temp631v__dat__pos;
  *__temp1366v=__temp631v__dat__length;
  *__temp1367v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1368v, uint64_t* __temp1369v, uint64_t* __temp1370v, char* __temp1371v) {
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
  *__temp1368v=__temp639v__unsafe_ptr;
  *__temp1369v=__temp639v__dat__pos;
  *__temp1370v=__temp639v__dat__length;
  *__temp1371v=__temp639v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp640v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1372v) {
  goto __temp_return;
  __temp_return:
  *__temp1372v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1373v) {
  goto __temp_return;
  __temp_return:
  *__temp1373v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1374v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1374v=z;
}

int copy__temp709v(char** __temp1375v, uint64_t* __temp1376v, uint16_t* __temp1377v, uint16_t* __temp1378v, uint64_t* __temp1379v, const char* _other, char** __temp1380v, uint64_t* __temp1381v, uint64_t* __temp1382v, char* __temp1383v) {
  char* buf__unsafe_ptr=*__temp1375v;
  uint64_t buf__unsafe_size=*__temp1376v;
  uint16_t buf__unsafe_offset=*__temp1377v;
  uint16_t buf__unsafe_align=*__temp1378v;
  uint64_t pos=*__temp1379v;
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
  *__temp1375v=buf__unsafe_ptr;
  *__temp1376v=buf__unsafe_size;
  *__temp1377v=buf__unsafe_offset;
  *__temp1378v=buf__unsafe_align;
  *__temp1379v=pos;
  *__temp1380v=__temp717v__unsafe_ptr;
  *__temp1381v=__temp717v__dat__pos;
  *__temp1382v=__temp717v__dat__length;
  *__temp1383v=__temp717v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1248v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1384v, uint64_t* __temp1385v, uint64_t* __temp1386v, char* __temp1387v, char** __temp1388v, uint64_t* __temp1389v, uint64_t* __temp1390v, char* __temp1391v) {
  goto __temp_return;
  __temp_return:
  *__temp1384v=name__unsafe_ptr;
  *__temp1385v=name__dat__pos;
  *__temp1386v=name__dat__length;
  *__temp1387v=name__dat__first;
  *__temp1388v=surname__unsafe_ptr;
  *__temp1389v=surname__dat__pos;
  *__temp1390v=surname__dat__length;
  *__temp1391v=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1250v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1251v);
  print__temp361v(__temp1253v,__temp823v);
  print__temp742v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1256v,__temp823v);
  print__temp742v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1251v);
}

static inline __attribute__((always_inline)) int test__temp1260v(char** __temp1392v, uint64_t* __temp1393v, uint16_t* __temp1394v, uint16_t* __temp1395v, uint64_t* __temp1396v, char** __temp1397v, uint64_t* __temp1398v, uint16_t* __temp1399v, uint16_t* __temp1400v) {
  char* __temp1263v__unsafe_ptr=0;
  uint64_t __temp1263v__unsafe_size=0;
  uint16_t __temp1263v__unsafe_offset=0;
  uint16_t __temp1263v__unsafe_align=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint16_t __temp1264v__unsafe_offset=0;
  uint16_t __temp1264v__unsafe_align=0;
  uint64_t __temp1265v=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__unsafe_size=0;
  uint16_t __temp1266v__unsafe_offset=0;
  uint16_t __temp1266v__unsafe_align=0;
  char __temp1267v____temp475v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint16_t __temp1270v__unsafe_offset=0;
  uint16_t __temp1270v__unsafe_align=0;
  uint64_t __temp1271v=0;
  uint64_t __temp1272v__=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint16_t __temp1273v__unsafe_offset=0;
  uint16_t __temp1273v__unsafe_align=0;
  char __temp1274v____temp475v__=0;
  char* __temp1275v__buf__unsafe_ptr=0;
  uint64_t __temp1275v__buf__unsafe_size=0;
  uint16_t __temp1275v__buf__unsafe_offset=0;
  uint16_t __temp1275v__buf__unsafe_align=0;
  uint64_t __temp1275v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1276v=0;
  char* __temp1277v__=0;
  uint64_t __temp1278v=0;
  char* __temp1280v__unsafe_ptr=0;
  uint64_t __temp1280v__dat__pos=0;
  uint64_t __temp1280v__dat__length=0;
  char __temp1280v__dat__first=0;
  char* __temp1282v__unsafe_ptr=0;
  uint64_t __temp1282v__dat__pos=0;
  uint64_t __temp1282v__dat__length=0;
  char __temp1282v__dat__first=0;
  char* __temp1283v__name__unsafe_ptr=0;
  uint64_t __temp1283v__name__dat__pos=0;
  uint64_t __temp1283v__name__dat__length=0;
  char __temp1283v__name__dat__first=0;
  char* __temp1283v__surname__unsafe_ptr=0;
  uint64_t __temp1283v__surname__dat__pos=0;
  uint64_t __temp1283v__surname__dat__length=0;
  char __temp1283v__surname__dat__first=0;
  uint64_t __temp1284v=0;
  char* __temp1285v__=0;
  char* __temp1286v__name__unsafe_ptr=0;
  uint64_t __temp1286v__name__dat__pos=0;
  uint64_t __temp1286v__name__dat__length=0;
  char __temp1286v__name__dat__first=0;
  char* __temp1286v__surname__unsafe_ptr=0;
  uint64_t __temp1286v__surname__dat__pos=0;
  uint64_t __temp1286v__surname__dat__length=0;
  char __temp1286v__surname__dat__first=0;
  char* __temp1288v__unsafe_ptr=0;
  uint64_t __temp1288v__unsafe_size=0;
  uint16_t __temp1288v__unsafe_offset=0;
  uint16_t __temp1288v__unsafe_align=0;
  char* __temp1292v__unsafe_ptr=0;
  uint64_t __temp1292v__unsafe_size=0;
  uint16_t __temp1292v__unsafe_offset=0;
  uint16_t __temp1292v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1261v(&__temp1263v__unsafe_ptr,&__temp1263v__unsafe_size,&__temp1263v__unsafe_offset,&__temp1263v__unsafe_align);
  __temp1264v__unsafe_ptr=__temp1263v__unsafe_ptr;
  __temp1264v__unsafe_size=__temp1263v__unsafe_size;
  __temp1264v__unsafe_offset=__temp1263v__unsafe_offset;
  __temp1264v__unsafe_align=__temp1263v__unsafe_align;
  __temp1265v=4;
  __temp_errcode=alloc__temp473v(&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align,__temp1265v,&__temp1266v__unsafe_ptr,&__temp1266v__unsafe_size,&__temp1266v__unsafe_offset,&__temp1266v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1266v__unsafe_ptr;
  people__unsafe_size=__temp1266v__unsafe_size;
  people__unsafe_offset=__temp1266v__unsafe_offset;
  people__unsafe_align=__temp1266v__unsafe_align;
  char____temp_buffer____buffer__temp1268v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_offset,&__temp1270v__unsafe_align);
  __temp1271v=4;
  KB__temp444v(__temp1271v,&__temp1272v__);
  __temp_errcode=alloc__temp473v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_offset,&__temp1270v__unsafe_align,__temp1272v__,&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align,&__temp1275v__buf__unsafe_ptr,&__temp1275v__buf__unsafe_size,&__temp1275v__buf__unsafe_offset,&__temp1275v__buf__unsafe_align,&__temp1275v__pos);
  buf__buf__unsafe_ptr=__temp1275v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1275v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1275v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1275v__buf__unsafe_align;
  buf__pos=__temp1275v__pos;
  __temp1276v=0;
  __temp_errcode=mutget__temp543v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1276v,&__temp1277v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1278v=0;
  __temp_errcode=copy__temp709v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1279v,&__temp1280v__unsafe_ptr,&__temp1280v__dat__pos,&__temp1280v__dat__length,&__temp1280v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1281v,&__temp1282v__unsafe_ptr,&__temp1282v__dat__pos,&__temp1282v__dat__length,&__temp1282v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1248v(__temp1278v,__temp1280v__unsafe_ptr,__temp1280v__dat__pos,__temp1280v__dat__length,__temp1280v__dat__first,__temp1282v__unsafe_ptr,__temp1282v__dat__pos,__temp1282v__dat__length,__temp1282v__dat__first,&__temp1283v__name__unsafe_ptr,&__temp1283v__name__dat__pos,&__temp1283v__name__dat__length,&__temp1283v__name__dat__first,&__temp1283v__surname__unsafe_ptr,&__temp1283v__surname__dat__pos,&__temp1283v__surname__dat__length,&__temp1283v__surname__dat__first);
  if(!__temp1277v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1277v__,&__temp1283v__name__unsafe_ptr,8);
  memcpy(__temp1277v__+8,&__temp1283v__name__dat__pos,8);
  memcpy(__temp1277v__+16,&__temp1283v__name__dat__length,8);
  memcpy(__temp1277v__+24,&__temp1283v__name__dat__first,1);
  memcpy(__temp1277v__+25,&__temp1283v__surname__unsafe_ptr,8);
  memcpy(__temp1277v__+33,&__temp1283v__surname__dat__pos,8);
  memcpy(__temp1277v__+41,&__temp1283v__surname__dat__length,8);
  memcpy(__temp1277v__+49,&__temp1283v__surname__dat__first,1);
  __temp1284v=0;
  __temp_errcode=get__temp550v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1284v,&__temp1285v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1285v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1286v__name__unsafe_ptr,__temp1285v__,8);
  memcpy(&__temp1286v__name__dat__pos,__temp1285v__+8,8);
  memcpy(&__temp1286v__name__dat__length,__temp1285v__+16,8);
  memcpy(&__temp1286v__name__dat__first,__temp1285v__+24,1);
  memcpy(&__temp1286v__surname__unsafe_ptr,__temp1285v__+25,8);
  memcpy(&__temp1286v__surname__dat__pos,__temp1285v__+33,8);
  memcpy(&__temp1286v__surname__dat__length,__temp1285v__+41,8);
  memcpy(&__temp1286v__surname__dat__first,__temp1285v__+49,1);
  print__temp1250v(__temp1286v__name__unsafe_ptr,__temp1286v__name__dat__pos,__temp1286v__name__dat__length,__temp1286v__name__dat__first,__temp1286v__surname__unsafe_ptr,__temp1286v__surname__dat__pos,__temp1286v__surname__dat__length,__temp1286v__surname__dat__first);
  __temp1288v__unsafe_ptr=people__unsafe_ptr;
  __temp1288v__unsafe_size=people__unsafe_size;
  __temp1288v__unsafe_offset=people__unsafe_offset+0;
  __temp1288v__unsafe_align=people__unsafe_align;
  __temp1292v__unsafe_ptr=__temp1288v__unsafe_ptr;
  __temp1292v__unsafe_size=__temp1288v__unsafe_size;
  __temp1292v__unsafe_offset=__temp1288v__unsafe_offset+8;
  __temp1292v__unsafe_align=__temp1288v__unsafe_align;
  dat__unsafe_ptr=__temp1292v__unsafe_ptr;
  dat__unsafe_size=__temp1292v__unsafe_size;
  dat__unsafe_offset=__temp1292v__unsafe_offset;
  dat__unsafe_align=__temp1292v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1274v____temp475v__);
  if(__temp1274v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1267v____temp475v__);
  if(__temp1267v____temp475v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__temp466v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1392v=buf__buf__unsafe_ptr;
  *__temp1393v=buf__buf__unsafe_size;
  *__temp1394v=buf__buf__unsafe_offset;
  *__temp1395v=buf__buf__unsafe_align;
  *__temp1396v=buf__pos;
  *__temp1397v=dat__unsafe_ptr;
  *__temp1398v=dat__unsafe_size;
  *__temp1399v=dat__unsafe_offset;
  *__temp1400v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1296v() {
  char* __temp1297v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1297v__buf__buf__unsafe_size=0;
  uint16_t __temp1297v__buf__buf__unsafe_offset=0;
  uint16_t __temp1297v__buf__buf__unsafe_align=0;
  uint64_t __temp1297v__buf__pos=0;
  char* __temp1297v__dat__unsafe_ptr=0;
  uint64_t __temp1297v__dat__unsafe_size=0;
  uint16_t __temp1297v__dat__unsafe_offset=0;
  uint16_t __temp1297v__dat__unsafe_align=0;
  char __temp1298v____temp1267v____temp475v__=0;
  char __temp1298v____temp1274v____temp475v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __temp1299v=0;
  char* __temp1300v__=0;
  uint64_t __temp1301v__pos=0;
  uint64_t __temp1301v__length=0;
  char __temp1301v__first=0;
  char* __temp1302v__unsafe_ptr=0;
  uint64_t __temp1302v__dat__pos=0;
  uint64_t __temp1302v__dat__length=0;
  char __temp1302v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1260v(&__temp1297v__buf__buf__unsafe_ptr,&__temp1297v__buf__buf__unsafe_size,&__temp1297v__buf__buf__unsafe_offset,&__temp1297v__buf__buf__unsafe_align,&__temp1297v__buf__pos,&__temp1297v__dat__unsafe_ptr,&__temp1297v__dat__unsafe_size,&__temp1297v__dat__unsafe_offset,&__temp1297v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1297v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1297v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__temp1297v__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__temp1297v__buf__buf__unsafe_align;
  t__buf__pos=__temp1297v__buf__pos;
  t__dat__unsafe_ptr=__temp1297v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1297v__dat__unsafe_size;
  t__dat__unsafe_offset=__temp1297v__dat__unsafe_offset;
  t__dat__unsafe_align=__temp1297v__dat__unsafe_align;
  __temp1299v=0;
  __temp_errcode=get__temp550v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1299v,&__temp1300v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1300v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1301v__pos,__temp1300v__,8);
  memcpy(&__temp1301v__length,__temp1300v__+8,8);
  memcpy(&__temp1301v__first,__temp1300v__+16,1);
  __temp_errcode=str__temp594v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1301v__pos,__temp1301v__length,__temp1301v__first,&__temp1302v__unsafe_ptr,&__temp1302v__dat__pos,&__temp1302v__dat__length,&__temp1302v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp742v(__temp1302v__unsafe_ptr,__temp1302v__dat__pos,__temp1302v__dat__length,__temp1302v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1297v__buf__buf__unsafe_ptr,&__temp1298v____temp1274v____temp475v__);
  if(__temp1298v____temp1274v____temp475v__){
  __temp1297v__buf__buf__unsafe_size=0;
  __temp1297v__buf__buf__unsafe_size=__temp1297v__buf__buf__unsafe_size;
  __temp1297v__buf__buf__unsafe_ptr=__temp1297v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1297v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1297v__dat__unsafe_ptr,&__temp1298v____temp1267v____temp475v__);
  if(__temp1298v____temp1267v____temp475v__){
  __temp1297v__dat__unsafe_size=0;
  __temp1297v__dat__unsafe_size=__temp1297v__dat__unsafe_size;
  __temp1297v__dat__unsafe_ptr=__temp1297v__dat__unsafe_ptr;
  free__temp466v(&__temp1297v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1296v();return 0;}