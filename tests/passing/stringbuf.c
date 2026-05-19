#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1252v="name      ";
const char* const __temp822v="";
const char* const __temp1279v="mario";
const char* const __temp365v="\n";
const char* const __temp1250v="-------------------";
const char* const __temp1255v="surnname  ";
const char* const __temp1277v="it's a me";
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

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1260v(char** __temp1302v, uint64_t* __temp1303v, uint16_t* __temp1304v, uint16_t* __temp1305v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__temp1302v=unsafe_ptr;
  *__temp1303v=unsafe_size;
  *__temp1304v=unsafe_offset;
  *__temp1305v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1306v) {
  int value=0;
  *__temp1306v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1307v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1307v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1308v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1308v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1309v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1310v) {
  char* allocated=*__temp1310v;
  if(allocated){
  free(allocated);
  }
  *__temp1310v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1311v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1312v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1312v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1313v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1314v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1315v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1316v) {
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
  *__temp1316v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v, uint64_t size, char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v) {
  char* buffer__unsafe_ptr=*__temp1317v;
  uint64_t buffer__unsafe_size=*__temp1318v;
  uint16_t buffer__unsafe_offset=*__temp1319v;
  uint16_t buffer__unsafe_align=*__temp1320v;
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
  *__temp1317v=buffer__unsafe_ptr;
  *__temp1318v=buffer__unsafe_size;
  *__temp1319v=buffer__unsafe_offset;
  *__temp1320v=buffer__unsafe_align;
  *__temp1321v=__temp486v__unsafe_ptr;
  *__temp1322v=__temp486v__unsafe_size;
  *__temp1323v=__temp486v__unsafe_offset;
  *__temp1324v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1266v(char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1325v=unsafe_ptr;
  *__temp1326v=unsafe_size;
  *__temp1327v=unsafe_offset;
  *__temp1328v=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1329v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1329v=__temp446v__;
}

static inline __attribute__((always_inline)) void bufpos__temp675v(char** __temp1330v, uint64_t* __temp1331v, uint16_t* __temp1332v, uint16_t* __temp1333v, char** __temp1334v, uint64_t* __temp1335v, uint16_t* __temp1336v, uint16_t* __temp1337v, uint64_t* __temp1338v) {
  char* buf__unsafe_ptr=*__temp1330v;
  uint64_t buf__unsafe_size=*__temp1331v;
  uint16_t buf__unsafe_offset=*__temp1332v;
  uint16_t buf__unsafe_align=*__temp1333v;
  uint64_t __temp676v=0;
  uint64_t __temp677v=0;
  uint64_t pos=0;
  __temp676v=0;
  __temp677v=__temp676v;
  pos=__temp677v;
  goto __temp_return;
  __temp_return:
  *__temp1330v=buf__unsafe_ptr;
  *__temp1331v=buf__unsafe_size;
  *__temp1332v=buf__unsafe_offset;
  *__temp1333v=buf__unsafe_align;
  *__temp1334v=buf__unsafe_ptr;
  *__temp1335v=buf__unsafe_size;
  *__temp1336v=buf__unsafe_offset;
  *__temp1337v=buf__unsafe_align;
  *__temp1338v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1339v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1339v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1340v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1341v) {
  *__temp1341v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1342v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1342v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1343v, uint64_t* __temp1344v, uint16_t* __temp1345v, uint16_t* __temp1346v, uint64_t i, char** __temp1347v) {
  char* buffer__unsafe_ptr=*__temp1343v;
  uint64_t buffer__unsafe_size=*__temp1344v;
  uint16_t buffer__unsafe_offset=*__temp1345v;
  uint16_t buffer__unsafe_align=*__temp1346v;
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
  *__temp1343v=buffer__unsafe_ptr;
  *__temp1344v=buffer__unsafe_size;
  *__temp1345v=buffer__unsafe_offset;
  *__temp1346v=buffer__unsafe_align;
  *__temp1347v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1348v=unsafe_ptr;
  *__temp1349v=unsafe_size;
  *__temp1350v=unsafe_offset;
  *__temp1351v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1352v) {
  *__temp1352v=to;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1353v) {
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
  *__temp1353v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1354v, uint64_t* __temp1355v, uint64_t* __temp1356v, char* __temp1357v) {
  goto __temp_return;
  __temp_return:
  *__temp1354v=unsafe_ptr;
  *__temp1355v=dat__pos;
  *__temp1356v=dat__length;
  *__temp1357v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1358v, uint64_t* __temp1359v, uint64_t* __temp1360v, char* __temp1361v) {
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
  *__temp1358v=__temp600v__unsafe_ptr;
  *__temp1359v=__temp600v__dat__pos;
  *__temp1360v=__temp600v__dat__length;
  *__temp1361v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1362v, uint64_t* __temp1363v, uint64_t* __temp1364v, char* __temp1365v) {
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
  *__temp1362v=__temp630v__unsafe_ptr;
  *__temp1363v=__temp630v__dat__pos;
  *__temp1364v=__temp630v__dat__length;
  *__temp1365v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1366v, uint64_t* __temp1367v, uint64_t* __temp1368v, char* __temp1369v) {
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
  *__temp1366v=__temp638v__unsafe_ptr;
  *__temp1367v=__temp638v__dat__pos;
  *__temp1368v=__temp638v__dat__length;
  *__temp1369v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp639v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1370v) {
  goto __temp_return;
  __temp_return:
  *__temp1370v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1371v) {
  goto __temp_return;
  __temp_return:
  *__temp1371v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1372v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1372v=z;
}

int copy__temp708v(char** __temp1373v, uint64_t* __temp1374v, uint16_t* __temp1375v, uint16_t* __temp1376v, uint64_t* __temp1377v, const char* _other, char** __temp1378v, uint64_t* __temp1379v, uint64_t* __temp1380v, char* __temp1381v) {
  char* buf__unsafe_ptr=*__temp1373v;
  uint64_t buf__unsafe_size=*__temp1374v;
  uint16_t buf__unsafe_offset=*__temp1375v;
  uint16_t buf__unsafe_align=*__temp1376v;
  uint64_t pos=*__temp1377v;
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
  *__temp1373v=buf__unsafe_ptr;
  *__temp1374v=buf__unsafe_size;
  *__temp1375v=buf__unsafe_offset;
  *__temp1376v=buf__unsafe_align;
  *__temp1377v=pos;
  *__temp1378v=__temp716v__unsafe_ptr;
  *__temp1379v=__temp716v__dat__pos;
  *__temp1380v=__temp716v__dat__length;
  *__temp1381v=__temp716v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1247v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1382v, uint64_t* __temp1383v, uint64_t* __temp1384v, char* __temp1385v, char** __temp1386v, uint64_t* __temp1387v, uint64_t* __temp1388v, char* __temp1389v) {
  goto __temp_return;
  __temp_return:
  *__temp1382v=name__unsafe_ptr;
  *__temp1383v=name__dat__pos;
  *__temp1384v=name__dat__length;
  *__temp1385v=name__dat__first;
  *__temp1386v=surname__unsafe_ptr;
  *__temp1387v=surname__dat__pos;
  *__temp1388v=surname__dat__length;
  *__temp1389v=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1249v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1250v);
  print__temp361v(__temp1252v,__temp822v);
  print__temp741v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1255v,__temp822v);
  print__temp741v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1250v);
}

static inline __attribute__((always_inline)) int test__temp1259v(char** __temp1390v, uint64_t* __temp1391v, uint16_t* __temp1392v, uint16_t* __temp1393v, uint64_t* __temp1394v, char** __temp1395v, uint64_t* __temp1396v, uint16_t* __temp1397v, uint16_t* __temp1398v) {
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  uint64_t __temp1263v=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint16_t __temp1264v__unsafe_offset=0;
  uint16_t __temp1264v__unsafe_align=0;
  uint64_t __temp1265v____temp475v=0;
  char __temp1265v____temp476v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__unsafe_size=0;
  uint16_t __temp1268v__unsafe_offset=0;
  uint16_t __temp1268v__unsafe_align=0;
  uint64_t __temp1269v=0;
  uint64_t __temp1270v__=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint16_t __temp1271v__unsafe_offset=0;
  uint16_t __temp1271v__unsafe_align=0;
  uint64_t __temp1272v____temp475v=0;
  char __temp1272v____temp476v__=0;
  char* __temp1273v__buf__unsafe_ptr=0;
  uint64_t __temp1273v__buf__unsafe_size=0;
  uint16_t __temp1273v__buf__unsafe_offset=0;
  uint16_t __temp1273v__buf__unsafe_align=0;
  uint64_t __temp1273v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1274v=0;
  char* __temp1275v__=0;
  uint64_t __temp1276v=0;
  char* __temp1278v__unsafe_ptr=0;
  uint64_t __temp1278v__dat__pos=0;
  uint64_t __temp1278v__dat__length=0;
  char __temp1278v__dat__first=0;
  char* __temp1280v__unsafe_ptr=0;
  uint64_t __temp1280v__dat__pos=0;
  uint64_t __temp1280v__dat__length=0;
  char __temp1280v__dat__first=0;
  char* __temp1281v__name__unsafe_ptr=0;
  uint64_t __temp1281v__name__dat__pos=0;
  uint64_t __temp1281v__name__dat__length=0;
  char __temp1281v__name__dat__first=0;
  char* __temp1281v__surname__unsafe_ptr=0;
  uint64_t __temp1281v__surname__dat__pos=0;
  uint64_t __temp1281v__surname__dat__length=0;
  char __temp1281v__surname__dat__first=0;
  uint64_t __temp1282v=0;
  char* __temp1283v__=0;
  char* __temp1284v__name__unsafe_ptr=0;
  uint64_t __temp1284v__name__dat__pos=0;
  uint64_t __temp1284v__name__dat__length=0;
  char __temp1284v__name__dat__first=0;
  char* __temp1284v__surname__unsafe_ptr=0;
  uint64_t __temp1284v__surname__dat__pos=0;
  uint64_t __temp1284v__surname__dat__length=0;
  char __temp1284v__surname__dat__first=0;
  char* __temp1286v__unsafe_ptr=0;
  uint64_t __temp1286v__unsafe_size=0;
  uint16_t __temp1286v__unsafe_offset=0;
  uint16_t __temp1286v__unsafe_align=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1260v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align);
  __temp1263v=4;
  __temp_errcode=alloc__temp473v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1263v,&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1264v__unsafe_ptr;
  people__unsafe_size=__temp1264v__unsafe_size;
  people__unsafe_offset=__temp1264v__unsafe_offset;
  people__unsafe_align=__temp1264v__unsafe_align;
  char____temp_buffer____buffer__temp1266v(&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align);
  __temp1269v=4;
  KB__temp444v(__temp1269v,&__temp1270v__);
  __temp_errcode=alloc__temp473v(&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align,__temp1270v__,&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_offset,&__temp1271v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp675v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_offset,&__temp1271v__unsafe_align,&__temp1273v__buf__unsafe_ptr,&__temp1273v__buf__unsafe_size,&__temp1273v__buf__unsafe_offset,&__temp1273v__buf__unsafe_align,&__temp1273v__pos);
  buf__buf__unsafe_ptr=__temp1273v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1273v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1273v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1273v__buf__unsafe_align;
  buf__pos=__temp1273v__pos;
  __temp1274v=0;
  __temp_errcode=mutget__temp545v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1274v,&__temp1275v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1276v=0;
  __temp_errcode=copy__temp708v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1277v,&__temp1278v__unsafe_ptr,&__temp1278v__dat__pos,&__temp1278v__dat__length,&__temp1278v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp708v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1279v,&__temp1280v__unsafe_ptr,&__temp1280v__dat__pos,&__temp1280v__dat__length,&__temp1280v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1247v(__temp1276v,__temp1278v__unsafe_ptr,__temp1278v__dat__pos,__temp1278v__dat__length,__temp1278v__dat__first,__temp1280v__unsafe_ptr,__temp1280v__dat__pos,__temp1280v__dat__length,__temp1280v__dat__first,&__temp1281v__name__unsafe_ptr,&__temp1281v__name__dat__pos,&__temp1281v__name__dat__length,&__temp1281v__name__dat__first,&__temp1281v__surname__unsafe_ptr,&__temp1281v__surname__dat__pos,&__temp1281v__surname__dat__length,&__temp1281v__surname__dat__first);
  if(!__temp1275v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1275v__,&__temp1281v__name__unsafe_ptr,8);
  memcpy(__temp1275v__+8,&__temp1281v__name__dat__pos,8);
  memcpy(__temp1275v__+16,&__temp1281v__name__dat__length,8);
  memcpy(__temp1275v__+24,&__temp1281v__name__dat__first,1);
  memcpy(__temp1275v__+25,&__temp1281v__surname__unsafe_ptr,8);
  memcpy(__temp1275v__+33,&__temp1281v__surname__dat__pos,8);
  memcpy(__temp1275v__+41,&__temp1281v__surname__dat__length,8);
  memcpy(__temp1275v__+49,&__temp1281v__surname__dat__first,1);
  __temp1282v=0;
  __temp_errcode=get__temp552v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1282v,&__temp1283v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1283v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1284v__name__unsafe_ptr,__temp1283v__,8);
  memcpy(&__temp1284v__name__dat__pos,__temp1283v__+8,8);
  memcpy(&__temp1284v__name__dat__length,__temp1283v__+16,8);
  memcpy(&__temp1284v__name__dat__first,__temp1283v__+24,1);
  memcpy(&__temp1284v__surname__unsafe_ptr,__temp1283v__+25,8);
  memcpy(&__temp1284v__surname__dat__pos,__temp1283v__+33,8);
  memcpy(&__temp1284v__surname__dat__length,__temp1283v__+41,8);
  memcpy(&__temp1284v__surname__dat__first,__temp1283v__+49,1);
  print__temp1249v(__temp1284v__name__unsafe_ptr,__temp1284v__name__dat__pos,__temp1284v__name__dat__length,__temp1284v__name__dat__first,__temp1284v__surname__unsafe_ptr,__temp1284v__surname__dat__pos,__temp1284v__surname__dat__length,__temp1284v__surname__dat__first);
  __temp1286v__unsafe_ptr=people__unsafe_ptr;
  __temp1286v__unsafe_size=people__unsafe_size;
  __temp1286v__unsafe_offset=people__unsafe_offset+0;
  __temp1286v__unsafe_align=people__unsafe_align;
  __temp1290v__unsafe_ptr=__temp1286v__unsafe_ptr;
  __temp1290v__unsafe_size=__temp1286v__unsafe_size;
  __temp1290v__unsafe_offset=__temp1286v__unsafe_offset+8;
  __temp1290v__unsafe_align=__temp1286v__unsafe_align;
  dat__unsafe_ptr=__temp1290v__unsafe_ptr;
  dat__unsafe_size=__temp1290v__unsafe_size;
  dat__unsafe_offset=__temp1290v__unsafe_offset;
  dat__unsafe_align=__temp1290v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp1272v____temp475v=0;
  neq__temp142v(buf__buf__unsafe_size,__temp1272v____temp475v,&__temp1272v____temp476v__);
  if(__temp1272v____temp476v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  __temp1265v____temp475v=0;
  neq__temp142v(dat__unsafe_size,__temp1265v____temp475v,&__temp1265v____temp476v__);
  if(__temp1265v____temp476v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__temp466v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1390v=buf__buf__unsafe_ptr;
  *__temp1391v=buf__buf__unsafe_size;
  *__temp1392v=buf__buf__unsafe_offset;
  *__temp1393v=buf__buf__unsafe_align;
  *__temp1394v=buf__pos;
  *__temp1395v=dat__unsafe_ptr;
  *__temp1396v=dat__unsafe_size;
  *__temp1397v=dat__unsafe_offset;
  *__temp1398v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1294v() {
  char* __temp1295v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1295v__buf__buf__unsafe_size=0;
  uint16_t __temp1295v__buf__buf__unsafe_offset=0;
  uint16_t __temp1295v__buf__buf__unsafe_align=0;
  uint64_t __temp1295v__buf__pos=0;
  char* __temp1295v__dat__unsafe_ptr=0;
  uint64_t __temp1295v__dat__unsafe_size=0;
  uint16_t __temp1295v__dat__unsafe_offset=0;
  uint16_t __temp1295v__dat__unsafe_align=0;
  uint64_t __temp1296v____temp1265v____temp475v=0;
  char __temp1296v____temp1265v____temp476v__=0;
  uint64_t __temp1296v____temp1272v____temp475v=0;
  char __temp1296v____temp1272v____temp476v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __temp1297v=0;
  char* __temp1298v__=0;
  uint64_t __temp1299v__pos=0;
  uint64_t __temp1299v__length=0;
  char __temp1299v__first=0;
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__dat__pos=0;
  uint64_t __temp1300v__dat__length=0;
  char __temp1300v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1259v(&__temp1295v__buf__buf__unsafe_ptr,&__temp1295v__buf__buf__unsafe_size,&__temp1295v__buf__buf__unsafe_offset,&__temp1295v__buf__buf__unsafe_align,&__temp1295v__buf__pos,&__temp1295v__dat__unsafe_ptr,&__temp1295v__dat__unsafe_size,&__temp1295v__dat__unsafe_offset,&__temp1295v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1295v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1295v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__temp1295v__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__temp1295v__buf__buf__unsafe_align;
  t__buf__pos=__temp1295v__buf__pos;
  t__dat__unsafe_ptr=__temp1295v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1295v__dat__unsafe_size;
  t__dat__unsafe_offset=__temp1295v__dat__unsafe_offset;
  t__dat__unsafe_align=__temp1295v__dat__unsafe_align;
  __temp1297v=0;
  __temp_errcode=get__temp552v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1297v,&__temp1298v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1298v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1299v__pos,__temp1298v__,8);
  memcpy(&__temp1299v__length,__temp1298v__+8,8);
  memcpy(&__temp1299v__first,__temp1298v__+16,1);
  __temp_errcode=str__temp593v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1299v__pos,__temp1299v__length,__temp1299v__first,&__temp1300v__unsafe_ptr,&__temp1300v__dat__pos,&__temp1300v__dat__length,&__temp1300v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp741v(__temp1300v__unsafe_ptr,__temp1300v__dat__pos,__temp1300v__dat__length,__temp1300v__dat__first);
  
  __temp_failure:__temp1296v____temp1272v____temp475v=0;
  neq__temp142v(__temp1295v__buf__buf__unsafe_size,__temp1296v____temp1272v____temp475v,&__temp1296v____temp1272v____temp476v__);
  if(__temp1296v____temp1272v____temp476v__){
  __temp1295v__buf__buf__unsafe_size=0;
  __temp1295v__buf__buf__unsafe_size=__temp1295v__buf__buf__unsafe_size;
  __temp1295v__buf__buf__unsafe_ptr=__temp1295v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1295v__buf__buf__unsafe_ptr);
  }
  __temp1296v____temp1265v____temp475v=0;
  neq__temp142v(__temp1295v__dat__unsafe_size,__temp1296v____temp1265v____temp475v,&__temp1296v____temp1265v____temp476v__);
  if(__temp1296v____temp1265v____temp476v__){
  __temp1295v__dat__unsafe_size=0;
  __temp1295v__dat__unsafe_size=__temp1295v__dat__unsafe_size;
  __temp1295v__dat__unsafe_ptr=__temp1295v__dat__unsafe_ptr;
  free__temp466v(&__temp1295v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1294v();return 0;}