#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1260v="hello";
const char* const __temp1267v="greeting";
const char* const __temp1264v="world";
const char* const __temp365v="\n";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1283v, uint64_t* __temp1284v, uint16_t* __temp1285v, uint16_t* __temp1286v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1283v=unsafe_ptr;
  *__temp1284v=unsafe_size;
  *__temp1285v=unsafe_offset;
  *__temp1286v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1287v) {
  *__temp1287v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1288v) {
  int value=0;
  *__temp1288v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1289v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1289v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1290v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1291v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1292v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1293v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1294v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1294v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1295v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1296v) {
  *__temp1296v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1297v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1297v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1298v) {
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
  *__temp1298v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, char* __temp1302v) {
  goto __temp_return;
  __temp_return:
  *__temp1299v=unsafe_ptr;
  *__temp1300v=dat__pos;
  *__temp1301v=dat__length;
  *__temp1302v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1303v, uint64_t* __temp1304v, uint64_t* __temp1305v, char* __temp1306v) {
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
  *__temp1303v=__temp600v__unsafe_ptr;
  *__temp1304v=__temp600v__dat__pos;
  *__temp1305v=__temp600v__dat__length;
  *__temp1306v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1307v, uint64_t* __temp1308v, uint64_t* __temp1309v, char* __temp1310v) {
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
  *__temp1307v=__temp630v__unsafe_ptr;
  *__temp1308v=__temp630v__dat__pos;
  *__temp1309v=__temp630v__dat__length;
  *__temp1310v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v, char* __temp1314v) {
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
  *__temp1311v=__temp638v__unsafe_ptr;
  *__temp1312v=__temp638v__dat__pos;
  *__temp1313v=__temp638v__dat__length;
  *__temp1314v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1253v(char** __temp1315v, uint64_t* __temp1316v, uint16_t* __temp1317v, uint16_t* __temp1318v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1315v=unsafe_ptr;
  *__temp1316v=unsafe_size;
  *__temp1317v=unsafe_offset;
  *__temp1318v=unsafe_align;
}

static inline __attribute__((always_inline)) void named_buffer__temp1249v(char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char** __temp1319v, uint64_t* __temp1320v, uint16_t* __temp1321v, uint16_t* __temp1322v, char** __temp1323v, uint64_t* __temp1324v, uint64_t* __temp1325v, char* __temp1326v, char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
  char* buf__unsafe_ptr=*__temp1319v;
  uint64_t buf__unsafe_size=*__temp1320v;
  uint16_t buf__unsafe_offset=*__temp1321v;
  uint16_t buf__unsafe_align=*__temp1322v;
  goto __temp_return;
  __temp_return:
  *__temp1319v=buf__unsafe_ptr;
  *__temp1320v=buf__unsafe_size;
  *__temp1321v=buf__unsafe_offset;
  *__temp1322v=buf__unsafe_align;
  *__temp1323v=name__unsafe_ptr;
  *__temp1324v=name__dat__pos;
  *__temp1325v=name__dat__length;
  *__temp1326v=name__dat__first;
  *__temp1327v=buf__unsafe_ptr;
  *__temp1328v=buf__unsafe_size;
  *__temp1329v=buf__unsafe_offset;
  *__temp1330v=buf__unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1331v) {
  char* allocated=*__temp1331v;
  if(allocated){
  free(allocated);
  }
  *__temp1331v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1332v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1332v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1333v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1333v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1334v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1334v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1335v) {
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
  *__temp1335v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1336v, uint64_t* __temp1337v, uint16_t* __temp1338v, uint16_t* __temp1339v, uint64_t size, char** __temp1340v, uint64_t* __temp1341v, uint16_t* __temp1342v, uint16_t* __temp1343v) {
  char* buffer__unsafe_ptr=*__temp1336v;
  uint64_t buffer__unsafe_size=*__temp1337v;
  uint16_t buffer__unsafe_offset=*__temp1338v;
  uint16_t buffer__unsafe_align=*__temp1339v;
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
  *__temp1336v=buffer__unsafe_ptr;
  *__temp1337v=buffer__unsafe_size;
  *__temp1338v=buffer__unsafe_offset;
  *__temp1339v=buffer__unsafe_align;
  *__temp1340v=__temp486v__unsafe_ptr;
  *__temp1341v=__temp486v__unsafe_size;
  *__temp1342v=__temp486v__unsafe_offset;
  *__temp1343v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, uint64_t i, char** __temp1348v) {
  char* buffer__unsafe_ptr=*__temp1344v;
  uint64_t buffer__unsafe_size=*__temp1345v;
  uint16_t buffer__unsafe_offset=*__temp1346v;
  uint16_t buffer__unsafe_align=*__temp1347v;
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
  *__temp1344v=buffer__unsafe_ptr;
  *__temp1345v=buffer__unsafe_size;
  *__temp1346v=buffer__unsafe_offset;
  *__temp1347v=buffer__unsafe_align;
  *__temp1348v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int populate__temp1257v(char* named__name__unsafe_ptr, uint64_t named__name__dat__pos, uint64_t named__name__dat__length, char named__name__dat__first, char** __temp1349v, uint64_t* __temp1350v, uint16_t* __temp1351v, uint16_t* __temp1352v) {
  char* named__buf__unsafe_ptr=*__temp1349v;
  uint64_t named__buf__unsafe_size=*__temp1350v;
  uint16_t named__buf__unsafe_offset=*__temp1351v;
  uint16_t named__buf__unsafe_align=*__temp1352v;
  uint64_t __temp1258v=0;
  char* __temp1259v__=0;
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__dat__pos=0;
  uint64_t __temp1261v__dat__length=0;
  char __temp1261v__dat__first=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__dat__pos=0;
  uint64_t __temp1265v__dat__length=0;
  char __temp1265v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1258v=0;
  __temp_errcode=mutget__temp545v(&named__buf__unsafe_ptr,&named__buf__unsafe_size,&named__buf__unsafe_offset,&named__buf__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp631v(__temp1260v,&__temp1261v__unsafe_ptr,&__temp1261v__dat__pos,&__temp1261v__dat__length,&__temp1261v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1261v__unsafe_ptr,8);
  memcpy(__temp1259v__+8,&__temp1261v__dat__pos,8);
  memcpy(__temp1259v__+16,&__temp1261v__dat__length,8);
  memcpy(__temp1259v__+24,&__temp1261v__dat__first,1);
  __temp1262v=1;
  __temp_errcode=mutget__temp545v(&named__buf__unsafe_ptr,&named__buf__unsafe_size,&named__buf__unsafe_offset,&named__buf__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp631v(__temp1264v,&__temp1265v__unsafe_ptr,&__temp1265v__dat__pos,&__temp1265v__dat__length,&__temp1265v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1263v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1263v__,&__temp1265v__unsafe_ptr,8);
  memcpy(__temp1263v__+8,&__temp1265v__dat__pos,8);
  memcpy(__temp1263v__+16,&__temp1265v__dat__length,8);
  memcpy(__temp1263v__+24,&__temp1265v__dat__first,1);
  
  __temp_failure:*__temp1349v=named__buf__unsafe_ptr;
  *__temp1350v=named__buf__unsafe_size;
  *__temp1351v=named__buf__unsafe_offset;
  *__temp1352v=named__buf__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1266v() {
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__dat__pos=0;
  uint64_t __temp1268v__dat__length=0;
  char __temp1268v__dat__first=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint16_t __temp1269v__unsafe_offset=0;
  uint16_t __temp1269v__unsafe_align=0;
  char* __temp1270v__name__unsafe_ptr=0;
  uint64_t __temp1270v__name__dat__pos=0;
  uint64_t __temp1270v__name__dat__length=0;
  char __temp1270v__name__dat__first=0;
  char* __temp1270v__buf__unsafe_ptr=0;
  uint64_t __temp1270v__buf__unsafe_size=0;
  uint16_t __temp1270v__buf__unsafe_offset=0;
  uint16_t __temp1270v__buf__unsafe_align=0;
  char* elements__name__unsafe_ptr=0;
  uint64_t elements__name__dat__pos=0;
  uint64_t elements__name__dat__length=0;
  char elements__name__dat__first=0;
  char* elements__buf__unsafe_ptr=0;
  uint64_t elements__buf__unsafe_size=0;
  uint16_t elements__buf__unsafe_offset=0;
  uint16_t elements__buf__unsafe_align=0;
  uint64_t __temp1271v=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint16_t __temp1272v__unsafe_offset=0;
  uint16_t __temp1272v__unsafe_align=0;
  uint64_t __temp1273v____temp475v=0;
  char __temp1273v____temp476v__=0;
  uint64_t __temp1275v=0;
  char* __temp1276v__=0;
  char* __temp1277v__unsafe_ptr=0;
  uint64_t __temp1277v__dat__pos=0;
  uint64_t __temp1277v__dat__length=0;
  char __temp1277v__dat__first=0;
  uint64_t __temp1279v=0;
  char* __temp1280v__=0;
  char* __temp1281v__unsafe_ptr=0;
  uint64_t __temp1281v__dat__pos=0;
  uint64_t __temp1281v__dat__length=0;
  char __temp1281v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(__temp1267v,&__temp1268v__unsafe_ptr,&__temp1268v__dat__pos,&__temp1268v__dat__length,&__temp1268v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str____temp_buffer____buffer__temp1253v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_offset,&__temp1269v__unsafe_align);
  named_buffer__temp1249v(__temp1268v__unsafe_ptr,__temp1268v__dat__pos,__temp1268v__dat__length,__temp1268v__dat__first,&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_offset,&__temp1269v__unsafe_align,&__temp1270v__name__unsafe_ptr,&__temp1270v__name__dat__pos,&__temp1270v__name__dat__length,&__temp1270v__name__dat__first,&__temp1270v__buf__unsafe_ptr,&__temp1270v__buf__unsafe_size,&__temp1270v__buf__unsafe_offset,&__temp1270v__buf__unsafe_align);
  elements__name__unsafe_ptr=__temp1270v__name__unsafe_ptr;
  elements__name__dat__pos=__temp1270v__name__dat__pos;
  elements__name__dat__length=__temp1270v__name__dat__length;
  elements__name__dat__first=__temp1270v__name__dat__first;
  elements__buf__unsafe_ptr=__temp1270v__buf__unsafe_ptr;
  elements__buf__unsafe_size=__temp1270v__buf__unsafe_size;
  elements__buf__unsafe_offset=__temp1270v__buf__unsafe_offset;
  elements__buf__unsafe_align=__temp1270v__buf__unsafe_align;
  __temp1271v=2;
  __temp_errcode=alloc__temp473v(&elements__buf__unsafe_ptr,&elements__buf__unsafe_size,&elements__buf__unsafe_offset,&elements__buf__unsafe_align,__temp1271v,&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  elements__buf__unsafe_ptr=__temp1272v__unsafe_ptr;
  elements__buf__unsafe_size=__temp1272v__unsafe_size;
  elements__buf__unsafe_offset=__temp1272v__unsafe_offset;
  elements__buf__unsafe_align=__temp1272v__unsafe_align;
  __temp_errcode=populate__temp1257v(elements__name__unsafe_ptr,elements__name__dat__pos,elements__name__dat__length,elements__name__dat__first,&elements__buf__unsafe_ptr,&elements__buf__unsafe_size,&elements__buf__unsafe_offset,&elements__buf__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1275v=0;
  __temp_errcode=get__temp552v(elements__buf__unsafe_ptr,elements__buf__unsafe_size,elements__buf__unsafe_offset,elements__buf__unsafe_align,__temp1275v,&__temp1276v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1276v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1277v__unsafe_ptr,__temp1276v__,8);
  memcpy(&__temp1277v__dat__pos,__temp1276v__+8,8);
  memcpy(&__temp1277v__dat__length,__temp1276v__+16,8);
  memcpy(&__temp1277v__dat__first,__temp1276v__+24,1);
  print__temp741v(__temp1277v__unsafe_ptr,__temp1277v__dat__pos,__temp1277v__dat__length,__temp1277v__dat__first);
  __temp1279v=1;
  __temp_errcode=get__temp552v(elements__buf__unsafe_ptr,elements__buf__unsafe_size,elements__buf__unsafe_offset,elements__buf__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1281v__unsafe_ptr,__temp1280v__,8);
  memcpy(&__temp1281v__dat__pos,__temp1280v__+8,8);
  memcpy(&__temp1281v__dat__length,__temp1280v__+16,8);
  memcpy(&__temp1281v__dat__first,__temp1280v__+24,1);
  print__temp741v(__temp1281v__unsafe_ptr,__temp1281v__dat__pos,__temp1281v__dat__length,__temp1281v__dat__first);
  
  __temp_failure:__temp1273v____temp475v=0;
  neq__temp142v(__temp1272v__unsafe_size,__temp1273v____temp475v,&__temp1273v____temp476v__);
  if(__temp1273v____temp476v__){
  __temp1272v__unsafe_size=0;
  __temp1272v__unsafe_size=__temp1272v__unsafe_size;
  __temp1272v__unsafe_ptr=__temp1272v__unsafe_ptr;
  free__temp466v(&__temp1272v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1266v();return 0;}