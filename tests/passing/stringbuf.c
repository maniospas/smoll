#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1258v="surnname  ";
const char* const __temp1280v="mario";
const char* const __temp1253v="-------------------";
const char* const __temp365v="\n";
const char* const __temp825v="";
const char* const __temp1278v="it's a me";
const char* const __temp1255v="name      ";
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

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1263v(char** __temp1303v, uint64_t* __temp1304v, uint16_t* __temp1305v, uint16_t* __temp1306v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__temp1303v=unsafe_ptr;
  *__temp1304v=unsafe_size;
  *__temp1305v=unsafe_offset;
  *__temp1306v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1307v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1308v) {
  char* allocated=*__temp1308v;
  if(allocated){
  free(allocated);
  }
  *__temp1308v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1309v) {
  int value=0;
  *__temp1309v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1310v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1310v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1311v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1312v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1313v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1314v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1314v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1315v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1316v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1317v) {
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
  *__temp1317v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1318v, uint64_t* __temp1319v, uint16_t* __temp1320v, uint16_t* __temp1321v, uint64_t size, char** __temp1322v, uint64_t* __temp1323v, uint16_t* __temp1324v, uint16_t* __temp1325v) {
  char* buffer__unsafe_ptr=*__temp1318v;
  uint64_t buffer__unsafe_size=*__temp1319v;
  uint16_t buffer__unsafe_offset=*__temp1320v;
  uint16_t buffer__unsafe_align=*__temp1321v;
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
  *__temp1318v=buffer__unsafe_ptr;
  *__temp1319v=buffer__unsafe_size;
  *__temp1320v=buffer__unsafe_offset;
  *__temp1321v=buffer__unsafe_align;
  *__temp1322v=__temp485v__unsafe_ptr;
  *__temp1323v=__temp485v__unsafe_size;
  *__temp1324v=__temp485v__unsafe_offset;
  *__temp1325v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1326v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1326v=__temp446v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
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

int alloc__temp558v(uint64_t size, char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v) {
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
  *__temp1331v=__temp563v__unsafe_ptr;
  *__temp1332v=__temp563v__unsafe_size;
  *__temp1333v=__temp563v__unsafe_offset;
  *__temp1334v=__temp563v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp678v(char** __temp1335v, uint64_t* __temp1336v, uint16_t* __temp1337v, uint16_t* __temp1338v, char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v, uint64_t* __temp1343v) {
  char* buf__unsafe_ptr=*__temp1335v;
  uint64_t buf__unsafe_size=*__temp1336v;
  uint16_t buf__unsafe_offset=*__temp1337v;
  uint16_t buf__unsafe_align=*__temp1338v;
  uint64_t __temp679v=0;
  uint64_t __temp680v=0;
  uint64_t pos=0;
  __temp679v=0;
  __temp680v=__temp679v;
  pos=__temp680v;
  goto __temp_return;
  __temp_return:
  *__temp1335v=buf__unsafe_ptr;
  *__temp1336v=buf__unsafe_size;
  *__temp1337v=buf__unsafe_offset;
  *__temp1338v=buf__unsafe_align;
  *__temp1339v=buf__unsafe_ptr;
  *__temp1340v=buf__unsafe_size;
  *__temp1341v=buf__unsafe_offset;
  *__temp1342v=buf__unsafe_align;
  *__temp1343v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1344v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1344v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1345v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1345v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1346v) {
  *__temp1346v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1347v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1347v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, uint64_t i, char** __temp1352v) {
  char* buffer__unsafe_ptr=*__temp1348v;
  uint64_t buffer__unsafe_size=*__temp1349v;
  uint16_t buffer__unsafe_offset=*__temp1350v;
  uint16_t buffer__unsafe_align=*__temp1351v;
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
  *__temp1348v=buffer__unsafe_ptr;
  *__temp1349v=buffer__unsafe_size;
  *__temp1350v=buffer__unsafe_offset;
  *__temp1351v=buffer__unsafe_align;
  *__temp1352v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1353v) {
  *__temp1353v=to;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1354v) {
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
  *__temp1354v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1355v, uint64_t* __temp1356v, uint64_t* __temp1357v, char* __temp1358v) {
  goto __temp_return;
  __temp_return:
  *__temp1355v=unsafe_ptr;
  *__temp1356v=dat__pos;
  *__temp1357v=dat__length;
  *__temp1358v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1359v, uint64_t* __temp1360v, uint64_t* __temp1361v, char* __temp1362v) {
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
  *__temp1359v=__temp606v__unsafe_ptr;
  *__temp1360v=__temp606v__dat__pos;
  *__temp1361v=__temp606v__dat__length;
  *__temp1362v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1363v, uint64_t* __temp1364v, uint64_t* __temp1365v, char* __temp1366v) {
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
  *__temp1363v=__temp636v__unsafe_ptr;
  *__temp1364v=__temp636v__dat__pos;
  *__temp1365v=__temp636v__dat__length;
  *__temp1366v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1367v, uint64_t* __temp1368v, uint64_t* __temp1369v, char* __temp1370v) {
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
  *__temp1367v=__temp644v__unsafe_ptr;
  *__temp1368v=__temp644v__dat__pos;
  *__temp1369v=__temp644v__dat__length;
  *__temp1370v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1371v) {
  goto __temp_return;
  __temp_return:
  *__temp1371v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1372v) {
  goto __temp_return;
  __temp_return:
  *__temp1372v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1373v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1373v=z;
}

int copy__temp711v(char** __temp1374v, uint64_t* __temp1375v, uint16_t* __temp1376v, uint16_t* __temp1377v, uint64_t* __temp1378v, const char* _other, char** __temp1379v, uint64_t* __temp1380v, uint64_t* __temp1381v, char* __temp1382v) {
  char* buf__unsafe_ptr=*__temp1374v;
  uint64_t buf__unsafe_size=*__temp1375v;
  uint16_t buf__unsafe_offset=*__temp1376v;
  uint16_t buf__unsafe_align=*__temp1377v;
  uint64_t pos=*__temp1378v;
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
  *__temp1374v=buf__unsafe_ptr;
  *__temp1375v=buf__unsafe_size;
  *__temp1376v=buf__unsafe_offset;
  *__temp1377v=buf__unsafe_align;
  *__temp1378v=pos;
  *__temp1379v=__temp719v__unsafe_ptr;
  *__temp1380v=__temp719v__dat__pos;
  *__temp1381v=__temp719v__dat__length;
  *__temp1382v=__temp719v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1250v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1383v, uint64_t* __temp1384v, uint64_t* __temp1385v, char* __temp1386v, char** __temp1387v, uint64_t* __temp1388v, uint64_t* __temp1389v, char* __temp1390v) {
  goto __temp_return;
  __temp_return:
  *__temp1383v=name__unsafe_ptr;
  *__temp1384v=name__dat__pos;
  *__temp1385v=name__dat__length;
  *__temp1386v=name__dat__first;
  *__temp1387v=surname__unsafe_ptr;
  *__temp1388v=surname__dat__pos;
  *__temp1389v=surname__dat__length;
  *__temp1390v=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1252v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1253v);
  print__temp361v(__temp1255v,__temp825v);
  print__temp744v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1258v,__temp825v);
  print__temp744v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1253v);
}

static inline __attribute__((always_inline)) int test__temp1262v(char** __temp1391v, uint64_t* __temp1392v, uint16_t* __temp1393v, uint16_t* __temp1394v, uint64_t* __temp1395v, char** __temp1396v, uint64_t* __temp1397v, uint16_t* __temp1398v, uint16_t* __temp1399v) {
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__unsafe_size=0;
  uint16_t __temp1265v__unsafe_offset=0;
  uint16_t __temp1265v__unsafe_align=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__unsafe_size=0;
  uint16_t __temp1266v__unsafe_offset=0;
  uint16_t __temp1266v__unsafe_align=0;
  uint64_t __temp1267v=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__unsafe_size=0;
  uint16_t __temp1268v__unsafe_offset=0;
  uint16_t __temp1268v__unsafe_align=0;
  char __temp1269v____temp475v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  uint64_t __temp1270v=0;
  uint64_t __temp1271v__=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint16_t __temp1272v__unsafe_offset=0;
  uint16_t __temp1272v__unsafe_align=0;
  char __temp1273v____temp564v____temp475v__=0;
  char* __temp1274v__buf__unsafe_ptr=0;
  uint64_t __temp1274v__buf__unsafe_size=0;
  uint16_t __temp1274v__buf__unsafe_offset=0;
  uint16_t __temp1274v__buf__unsafe_align=0;
  uint64_t __temp1274v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1275v=0;
  char* __temp1276v__=0;
  uint64_t __temp1277v=0;
  char* __temp1279v__unsafe_ptr=0;
  uint64_t __temp1279v__dat__pos=0;
  uint64_t __temp1279v__dat__length=0;
  char __temp1279v__dat__first=0;
  char* __temp1281v__unsafe_ptr=0;
  uint64_t __temp1281v__dat__pos=0;
  uint64_t __temp1281v__dat__length=0;
  char __temp1281v__dat__first=0;
  char* __temp1282v__name__unsafe_ptr=0;
  uint64_t __temp1282v__name__dat__pos=0;
  uint64_t __temp1282v__name__dat__length=0;
  char __temp1282v__name__dat__first=0;
  char* __temp1282v__surname__unsafe_ptr=0;
  uint64_t __temp1282v__surname__dat__pos=0;
  uint64_t __temp1282v__surname__dat__length=0;
  char __temp1282v__surname__dat__first=0;
  uint64_t __temp1283v=0;
  char* __temp1284v__=0;
  char* __temp1285v__name__unsafe_ptr=0;
  uint64_t __temp1285v__name__dat__pos=0;
  uint64_t __temp1285v__name__dat__length=0;
  char __temp1285v__name__dat__first=0;
  char* __temp1285v__surname__unsafe_ptr=0;
  uint64_t __temp1285v__surname__dat__pos=0;
  uint64_t __temp1285v__surname__dat__length=0;
  char __temp1285v__surname__dat__first=0;
  char* __temp1287v__unsafe_ptr=0;
  uint64_t __temp1287v__unsafe_size=0;
  uint16_t __temp1287v__unsafe_offset=0;
  uint16_t __temp1287v__unsafe_align=0;
  char* __temp1291v__unsafe_ptr=0;
  uint64_t __temp1291v__unsafe_size=0;
  uint16_t __temp1291v__unsafe_offset=0;
  uint16_t __temp1291v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1263v(&__temp1265v__unsafe_ptr,&__temp1265v__unsafe_size,&__temp1265v__unsafe_offset,&__temp1265v__unsafe_align);
  __temp1266v__unsafe_ptr=__temp1265v__unsafe_ptr;
  __temp1266v__unsafe_size=__temp1265v__unsafe_size;
  __temp1266v__unsafe_offset=__temp1265v__unsafe_offset;
  __temp1266v__unsafe_align=__temp1265v__unsafe_align;
  __temp1267v=4;
  __temp_errcode=alloc__temp473v(&__temp1266v__unsafe_ptr,&__temp1266v__unsafe_size,&__temp1266v__unsafe_offset,&__temp1266v__unsafe_align,__temp1267v,&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1268v__unsafe_ptr;
  people__unsafe_size=__temp1268v__unsafe_size;
  people__unsafe_offset=__temp1268v__unsafe_offset;
  people__unsafe_align=__temp1268v__unsafe_align;
  __temp1270v=4;
  KB__temp444v(__temp1270v,&__temp1271v__);
  __temp_errcode=alloc__temp558v(__temp1271v__,&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp678v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align,&__temp1274v__buf__unsafe_ptr,&__temp1274v__buf__unsafe_size,&__temp1274v__buf__unsafe_offset,&__temp1274v__buf__unsafe_align,&__temp1274v__pos);
  buf__buf__unsafe_ptr=__temp1274v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1274v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1274v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1274v__buf__unsafe_align;
  buf__pos=__temp1274v__pos;
  __temp1275v=0;
  __temp_errcode=mutget__temp543v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1275v,&__temp1276v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1277v=0;
  __temp_errcode=copy__temp711v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1278v,&__temp1279v__unsafe_ptr,&__temp1279v__dat__pos,&__temp1279v__dat__length,&__temp1279v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp711v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1280v,&__temp1281v__unsafe_ptr,&__temp1281v__dat__pos,&__temp1281v__dat__length,&__temp1281v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1250v(__temp1277v,__temp1279v__unsafe_ptr,__temp1279v__dat__pos,__temp1279v__dat__length,__temp1279v__dat__first,__temp1281v__unsafe_ptr,__temp1281v__dat__pos,__temp1281v__dat__length,__temp1281v__dat__first,&__temp1282v__name__unsafe_ptr,&__temp1282v__name__dat__pos,&__temp1282v__name__dat__length,&__temp1282v__name__dat__first,&__temp1282v__surname__unsafe_ptr,&__temp1282v__surname__dat__pos,&__temp1282v__surname__dat__length,&__temp1282v__surname__dat__first);
  if(!__temp1276v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1276v__,&__temp1282v__name__unsafe_ptr,8);
  memcpy(__temp1276v__+8,&__temp1282v__name__dat__pos,8);
  memcpy(__temp1276v__+16,&__temp1282v__name__dat__length,8);
  memcpy(__temp1276v__+24,&__temp1282v__name__dat__first,1);
  memcpy(__temp1276v__+25,&__temp1282v__surname__unsafe_ptr,8);
  memcpy(__temp1276v__+33,&__temp1282v__surname__dat__pos,8);
  memcpy(__temp1276v__+41,&__temp1282v__surname__dat__length,8);
  memcpy(__temp1276v__+49,&__temp1282v__surname__dat__first,1);
  __temp1283v=0;
  __temp_errcode=get__temp550v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1283v,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1284v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1285v__name__unsafe_ptr,__temp1284v__,8);
  memcpy(&__temp1285v__name__dat__pos,__temp1284v__+8,8);
  memcpy(&__temp1285v__name__dat__length,__temp1284v__+16,8);
  memcpy(&__temp1285v__name__dat__first,__temp1284v__+24,1);
  memcpy(&__temp1285v__surname__unsafe_ptr,__temp1284v__+25,8);
  memcpy(&__temp1285v__surname__dat__pos,__temp1284v__+33,8);
  memcpy(&__temp1285v__surname__dat__length,__temp1284v__+41,8);
  memcpy(&__temp1285v__surname__dat__first,__temp1284v__+49,1);
  print__temp1252v(__temp1285v__name__unsafe_ptr,__temp1285v__name__dat__pos,__temp1285v__name__dat__length,__temp1285v__name__dat__first,__temp1285v__surname__unsafe_ptr,__temp1285v__surname__dat__pos,__temp1285v__surname__dat__length,__temp1285v__surname__dat__first);
  __temp1287v__unsafe_ptr=people__unsafe_ptr;
  __temp1287v__unsafe_size=people__unsafe_size;
  __temp1287v__unsafe_offset=people__unsafe_offset+0;
  __temp1287v__unsafe_align=people__unsafe_align;
  __temp1291v__unsafe_ptr=__temp1287v__unsafe_ptr;
  __temp1291v__unsafe_size=__temp1287v__unsafe_size;
  __temp1291v__unsafe_offset=__temp1287v__unsafe_offset+8;
  __temp1291v__unsafe_align=__temp1287v__unsafe_align;
  dat__unsafe_ptr=__temp1291v__unsafe_ptr;
  dat__unsafe_size=__temp1291v__unsafe_size;
  dat__unsafe_offset=__temp1291v__unsafe_offset;
  dat__unsafe_align=__temp1291v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1273v____temp564v____temp475v__);
  if(__temp1273v____temp564v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1269v____temp475v__);
  if(__temp1269v____temp475v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__temp466v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1391v=buf__buf__unsafe_ptr;
  *__temp1392v=buf__buf__unsafe_size;
  *__temp1393v=buf__buf__unsafe_offset;
  *__temp1394v=buf__buf__unsafe_align;
  *__temp1395v=buf__pos;
  *__temp1396v=dat__unsafe_ptr;
  *__temp1397v=dat__unsafe_size;
  *__temp1398v=dat__unsafe_offset;
  *__temp1399v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1295v() {
  char* __temp1296v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1296v__buf__buf__unsafe_size=0;
  uint16_t __temp1296v__buf__buf__unsafe_offset=0;
  uint16_t __temp1296v__buf__buf__unsafe_align=0;
  uint64_t __temp1296v__buf__pos=0;
  char* __temp1296v__dat__unsafe_ptr=0;
  uint64_t __temp1296v__dat__unsafe_size=0;
  uint16_t __temp1296v__dat__unsafe_offset=0;
  uint16_t __temp1296v__dat__unsafe_align=0;
  char __temp1297v____temp1269v____temp475v__=0;
  char __temp1297v____temp1273v____temp564v____temp475v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __temp1298v=0;
  char* __temp1299v__=0;
  uint64_t __temp1300v__pos=0;
  uint64_t __temp1300v__length=0;
  char __temp1300v__first=0;
  char* __temp1301v__unsafe_ptr=0;
  uint64_t __temp1301v__dat__pos=0;
  uint64_t __temp1301v__dat__length=0;
  char __temp1301v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1262v(&__temp1296v__buf__buf__unsafe_ptr,&__temp1296v__buf__buf__unsafe_size,&__temp1296v__buf__buf__unsafe_offset,&__temp1296v__buf__buf__unsafe_align,&__temp1296v__buf__pos,&__temp1296v__dat__unsafe_ptr,&__temp1296v__dat__unsafe_size,&__temp1296v__dat__unsafe_offset,&__temp1296v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1296v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1296v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__temp1296v__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__temp1296v__buf__buf__unsafe_align;
  t__buf__pos=__temp1296v__buf__pos;
  t__dat__unsafe_ptr=__temp1296v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1296v__dat__unsafe_size;
  t__dat__unsafe_offset=__temp1296v__dat__unsafe_offset;
  t__dat__unsafe_align=__temp1296v__dat__unsafe_align;
  __temp1298v=0;
  __temp_errcode=get__temp550v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1298v,&__temp1299v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1299v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1300v__pos,__temp1299v__,8);
  memcpy(&__temp1300v__length,__temp1299v__+8,8);
  memcpy(&__temp1300v__first,__temp1299v__+16,1);
  __temp_errcode=str__temp599v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1300v__pos,__temp1300v__length,__temp1300v__first,&__temp1301v__unsafe_ptr,&__temp1301v__dat__pos,&__temp1301v__dat__length,&__temp1301v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp744v(__temp1301v__unsafe_ptr,__temp1301v__dat__pos,__temp1301v__dat__length,__temp1301v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1296v__buf__buf__unsafe_ptr,&__temp1297v____temp1273v____temp564v____temp475v__);
  if(__temp1297v____temp1273v____temp564v____temp475v__){
  __temp1296v__buf__buf__unsafe_size=0;
  __temp1296v__buf__buf__unsafe_size=__temp1296v__buf__buf__unsafe_size;
  __temp1296v__buf__buf__unsafe_ptr=__temp1296v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1296v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1296v__dat__unsafe_ptr,&__temp1297v____temp1269v____temp475v__);
  if(__temp1297v____temp1269v____temp475v__){
  __temp1296v__dat__unsafe_size=0;
  __temp1296v__dat__unsafe_size=__temp1296v__dat__unsafe_size;
  __temp1296v__dat__unsafe_ptr=__temp1296v__dat__unsafe_ptr;
  free__temp466v(&__temp1296v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1295v();return 0;}