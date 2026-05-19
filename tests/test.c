#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1253v="123";
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1246v(char** __temp1270v, uint64_t* __temp1271v, uint16_t* __temp1272v, uint16_t* __temp1273v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1270v=unsafe_ptr;
  *__temp1271v=unsafe_size;
  *__temp1272v=unsafe_offset;
  *__temp1273v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1274v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1275v) {
  char* allocated=*__temp1275v;
  if(allocated){
  free(allocated);
  }
  *__temp1275v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1276v) {
  int value=0;
  *__temp1276v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1277v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1277v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1278v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1279v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1280v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1281v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1281v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1282v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1283v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1284v) {
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
  *__temp1284v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1285v, uint64_t* __temp1286v, uint16_t* __temp1287v, uint16_t* __temp1288v, uint64_t size, char** __temp1289v, uint64_t* __temp1290v, uint16_t* __temp1291v, uint16_t* __temp1292v) {
  char* buffer__unsafe_ptr=*__temp1285v;
  uint64_t buffer__unsafe_size=*__temp1286v;
  uint16_t buffer__unsafe_offset=*__temp1287v;
  uint16_t buffer__unsafe_align=*__temp1288v;
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
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_offset;
  *__temp1288v=buffer__unsafe_align;
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_offset;
  *__temp1292v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp555v(char** __temp1293v, uint64_t* __temp1294v, uint16_t* __temp1295v, uint16_t* __temp1296v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1293v=unsafe_ptr;
  *__temp1294v=unsafe_size;
  *__temp1295v=unsafe_offset;
  *__temp1296v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp554v(uint64_t size, char** __temp1297v, uint64_t* __temp1298v, uint16_t* __temp1299v, uint16_t* __temp1300v) {
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
  *__temp1297v=__temp559v__unsafe_ptr;
  *__temp1298v=__temp559v__unsafe_size;
  *__temp1299v=__temp559v__unsafe_offset;
  *__temp1300v=__temp559v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp674v(char** __temp1301v, uint64_t* __temp1302v, uint16_t* __temp1303v, uint16_t* __temp1304v, char** __temp1305v, uint64_t* __temp1306v, uint16_t* __temp1307v, uint16_t* __temp1308v, uint64_t* __temp1309v) {
  char* buf__unsafe_ptr=*__temp1301v;
  uint64_t buf__unsafe_size=*__temp1302v;
  uint16_t buf__unsafe_offset=*__temp1303v;
  uint16_t buf__unsafe_align=*__temp1304v;
  uint64_t __temp675v=0;
  uint64_t __temp676v=0;
  uint64_t pos=0;
  __temp675v=0;
  __temp676v=__temp675v;
  pos=__temp676v;
  goto __temp_return;
  __temp_return:
  *__temp1301v=buf__unsafe_ptr;
  *__temp1302v=buf__unsafe_size;
  *__temp1303v=buf__unsafe_offset;
  *__temp1304v=buf__unsafe_align;
  *__temp1305v=buf__unsafe_ptr;
  *__temp1306v=buf__unsafe_size;
  *__temp1307v=buf__unsafe_offset;
  *__temp1308v=buf__unsafe_align;
  *__temp1309v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1310v) {
  *__temp1310v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1311v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1312v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1313v) {
  *__temp1313v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1314v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1314v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1315v) {
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
  *__temp1315v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp591v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v, char* __temp1319v) {
  goto __temp_return;
  __temp_return:
  *__temp1316v=unsafe_ptr;
  *__temp1317v=dat__pos;
  *__temp1318v=dat__length;
  *__temp1319v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp595v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1320v, uint64_t* __temp1321v, uint64_t* __temp1322v, char* __temp1323v) {
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
  *__temp1320v=__temp602v__unsafe_ptr;
  *__temp1321v=__temp602v__dat__pos;
  *__temp1322v=__temp602v__dat__length;
  *__temp1323v=__temp602v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp627v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1324v, uint64_t* __temp1325v, uint64_t* __temp1326v, char* __temp1327v) {
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
  *__temp1324v=__temp632v__unsafe_ptr;
  *__temp1325v=__temp632v__dat__pos;
  *__temp1326v=__temp632v__dat__length;
  *__temp1327v=__temp632v__dat__first;
  
  return __temp_errcode;
}

int str__temp633v(const char* c, char** __temp1328v, uint64_t* __temp1329v, uint64_t* __temp1330v, char* __temp1331v) {
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
  *__temp1328v=__temp640v__unsafe_ptr;
  *__temp1329v=__temp640v__dat__pos;
  *__temp1330v=__temp640v__dat__length;
  *__temp1331v=__temp640v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp626v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1332v, uint64_t* __temp1333v, uint64_t* __temp1334v, char* __temp1335v) {
  goto __temp_return;
  __temp_return:
  *__temp1332v=other__unsafe_ptr;
  *__temp1333v=other__dat__pos;
  *__temp1334v=other__dat__length;
  *__temp1335v=other__dat__first;
}

static inline __attribute__((always_inline)) void len__temp641v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1336v) {
  goto __temp_return;
  __temp_return:
  *__temp1336v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1337v) {
  goto __temp_return;
  __temp_return:
  *__temp1337v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1338v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) int copy__temp698v(char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v, uint64_t* __temp1343v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1344v, uint64_t* __temp1345v, uint64_t* __temp1346v, char* __temp1347v) {
  char* buf__unsafe_ptr=*__temp1339v;
  uint64_t buf__unsafe_size=*__temp1340v;
  uint16_t buf__unsafe_offset=*__temp1341v;
  uint16_t buf__unsafe_align=*__temp1342v;
  uint64_t pos=*__temp1343v;
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
  *__temp1339v=buf__unsafe_ptr;
  *__temp1340v=buf__unsafe_size;
  *__temp1341v=buf__unsafe_offset;
  *__temp1342v=buf__unsafe_align;
  *__temp1343v=pos;
  *__temp1344v=__temp706v__unsafe_ptr;
  *__temp1345v=__temp706v__dat__pos;
  *__temp1346v=__temp706v__dat__length;
  *__temp1347v=__temp706v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp740v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp741v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, uint64_t i, char** __temp1352v) {
  char* buffer__unsafe_ptr=*__temp1348v;
  uint64_t buffer__unsafe_size=*__temp1349v;
  uint16_t buffer__unsafe_offset=*__temp1350v;
  uint16_t buffer__unsafe_align=*__temp1351v;
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
  *__temp1348v=buffer__unsafe_ptr;
  *__temp1349v=buffer__unsafe_size;
  *__temp1350v=buffer__unsafe_offset;
  *__temp1351v=buffer__unsafe_align;
  *__temp1352v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int add__temp1248v(char** __temp1353v, uint64_t* __temp1354v, uint16_t* __temp1355v, uint16_t* __temp1356v) {
  char* values__unsafe_ptr=*__temp1353v;
  uint64_t values__unsafe_size=*__temp1354v;
  uint16_t values__unsafe_offset=*__temp1355v;
  uint16_t values__unsafe_align=*__temp1356v;
  uint64_t __temp1249v=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char __temp1251v____temp560v____temp475v__=0;
  char* __temp1252v__buf__unsafe_ptr=0;
  uint64_t __temp1252v__buf__unsafe_size=0;
  uint16_t __temp1252v__buf__unsafe_offset=0;
  uint16_t __temp1252v__buf__unsafe_align=0;
  uint64_t __temp1252v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__dat__pos=0;
  uint64_t __temp1254v__dat__length=0;
  char __temp1254v__dat__first=0;
  char* __temp1255v__unsafe_ptr=0;
  uint64_t __temp1255v__dat__pos=0;
  uint64_t __temp1255v__dat__length=0;
  char __temp1255v__dat__first=0;
  char* x__unsafe_ptr=0;
  uint64_t x__dat__pos=0;
  uint64_t x__dat__length=0;
  char x__dat__first=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1249v=128;
  __temp_errcode=alloc__temp554v(__temp1249v,&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp674v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1252v__buf__unsafe_ptr,&__temp1252v__buf__unsafe_size,&__temp1252v__buf__unsafe_offset,&__temp1252v__buf__unsafe_align,&__temp1252v__pos);
  buf__buf__unsafe_ptr=__temp1252v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1252v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1252v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1252v__buf__unsafe_align;
  buf__pos=__temp1252v__pos;
  __temp_errcode=str__temp633v(__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__dat__pos,&__temp1254v__dat__length,&__temp1254v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp698v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1254v__unsafe_ptr,__temp1254v__dat__pos,__temp1254v__dat__length,__temp1254v__dat__first,&__temp1255v__unsafe_ptr,&__temp1255v__dat__pos,&__temp1255v__dat__length,&__temp1255v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1255v__unsafe_ptr;
  x__dat__pos=__temp1255v__dat__pos;
  x__dat__length=__temp1255v__dat__length;
  x__dat__first=__temp1255v__dat__first;
  print__temp740v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first);
  __temp1257v=0;
  __temp_errcode=mutget__temp539v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&x__unsafe_ptr,8);
  memcpy(__temp1258v__+8,&x__dat__pos,8);
  memcpy(__temp1258v__+16,&x__dat__length,8);
  memcpy(__temp1258v__+24,&x__dat__first,1);
  
  __temp_failure:*__temp1353v=values__unsafe_ptr;
  *__temp1354v=values__unsafe_size;
  *__temp1355v=values__unsafe_offset;
  *__temp1356v=values__unsafe_align;
  exists__temp412v(__temp1250v__unsafe_ptr,&__temp1251v____temp560v____temp475v__);
  if(__temp1251v____temp560v____temp475v__){
  __temp1250v__unsafe_size=0;
  __temp1250v__unsafe_size=__temp1250v__unsafe_size;
  __temp1250v__unsafe_ptr=__temp1250v__unsafe_ptr;
  free__temp466v(&__temp1250v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1259v() {
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__unsafe_size=0;
  uint16_t __temp1260v__unsafe_offset=0;
  uint16_t __temp1260v__unsafe_align=0;
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__unsafe_size=0;
  uint16_t __temp1261v__unsafe_offset=0;
  uint16_t __temp1261v__unsafe_align=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__unsafe_ptr=0;
  uint64_t __temp1263v__unsafe_size=0;
  uint16_t __temp1263v__unsafe_offset=0;
  uint16_t __temp1263v__unsafe_align=0;
  char __temp1264v____temp475v__=0;
  char* values__unsafe_ptr=0;
  uint64_t values__unsafe_size=0;
  uint16_t values__unsafe_offset=0;
  uint16_t values__unsafe_align=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__dat__pos=0;
  uint64_t __temp1268v__dat__length=0;
  char __temp1268v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1246v(&__temp1260v__unsafe_ptr,&__temp1260v__unsafe_size,&__temp1260v__unsafe_offset,&__temp1260v__unsafe_align);
  __temp1261v__unsafe_ptr=__temp1260v__unsafe_ptr;
  __temp1261v__unsafe_size=__temp1260v__unsafe_size;
  __temp1261v__unsafe_offset=__temp1260v__unsafe_offset;
  __temp1261v__unsafe_align=__temp1260v__unsafe_align;
  __temp1262v=5;
  __temp_errcode=alloc__temp473v(&__temp1261v__unsafe_ptr,&__temp1261v__unsafe_size,&__temp1261v__unsafe_offset,&__temp1261v__unsafe_align,__temp1262v,&__temp1263v__unsafe_ptr,&__temp1263v__unsafe_size,&__temp1263v__unsafe_offset,&__temp1263v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  values__unsafe_ptr=__temp1263v__unsafe_ptr;
  values__unsafe_size=__temp1263v__unsafe_size;
  values__unsafe_offset=__temp1263v__unsafe_offset;
  values__unsafe_align=__temp1263v__unsafe_align;
  __temp_errcode=add__temp1248v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1266v=0;
  __temp_errcode=get__temp546v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1266v,&__temp1267v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1267v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1268v__unsafe_ptr,__temp1267v__,8);
  memcpy(&__temp1268v__dat__pos,__temp1267v__+8,8);
  memcpy(&__temp1268v__dat__length,__temp1267v__+16,8);
  memcpy(&__temp1268v__dat__first,__temp1267v__+24,1);
  print__temp740v(__temp1268v__unsafe_ptr,__temp1268v__dat__pos,__temp1268v__dat__length,__temp1268v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1263v__unsafe_ptr,&__temp1264v____temp475v__);
  if(__temp1264v____temp475v__){
  __temp1263v__unsafe_size=0;
  __temp1263v__unsafe_size=__temp1263v__unsafe_size;
  __temp1263v__unsafe_ptr=__temp1263v__unsafe_ptr;
  free__temp466v(&__temp1263v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1259v();return 0;}