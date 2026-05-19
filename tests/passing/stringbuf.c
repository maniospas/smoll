#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1251v="name      ";
const char* const __temp821v="";
const char* const __temp1254v="surnname  ";
const char* const __temp365v="\n";
const char* const __temp1249v="-------------------";
const char* const __temp1274v="it's a me";
const char* const __temp1276v="mario";
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

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1259v(char** __temp1299v, uint64_t* __temp1300v, uint16_t* __temp1301v, uint16_t* __temp1302v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__temp1299v=unsafe_ptr;
  *__temp1300v=unsafe_size;
  *__temp1301v=unsafe_offset;
  *__temp1302v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1303v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1304v) {
  char* allocated=*__temp1304v;
  if(allocated){
  free(allocated);
  }
  *__temp1304v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1305v) {
  int value=0;
  *__temp1305v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1306v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1306v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1307v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1307v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1308v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
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

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1310v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1310v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1311v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1312v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1313v) {
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
  *__temp1313v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1314v, uint64_t* __temp1315v, uint16_t* __temp1316v, uint16_t* __temp1317v, uint64_t size, char** __temp1318v, uint64_t* __temp1319v, uint16_t* __temp1320v, uint16_t* __temp1321v) {
  char* buffer__unsafe_ptr=*__temp1314v;
  uint64_t buffer__unsafe_size=*__temp1315v;
  uint16_t buffer__unsafe_offset=*__temp1316v;
  uint16_t buffer__unsafe_align=*__temp1317v;
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
  *__temp1314v=buffer__unsafe_ptr;
  *__temp1315v=buffer__unsafe_size;
  *__temp1316v=buffer__unsafe_offset;
  *__temp1317v=buffer__unsafe_align;
  *__temp1318v=buffer__unsafe_ptr;
  *__temp1319v=buffer__unsafe_size;
  *__temp1320v=buffer__unsafe_offset;
  *__temp1321v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1322v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1322v=__temp446v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp555v(char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1323v=unsafe_ptr;
  *__temp1324v=unsafe_size;
  *__temp1325v=unsafe_offset;
  *__temp1326v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp554v(uint64_t size, char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
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
  *__temp1327v=__temp559v__unsafe_ptr;
  *__temp1328v=__temp559v__unsafe_size;
  *__temp1329v=__temp559v__unsafe_offset;
  *__temp1330v=__temp559v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp674v(char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v, char** __temp1335v, uint64_t* __temp1336v, uint16_t* __temp1337v, uint16_t* __temp1338v, uint64_t* __temp1339v) {
  char* buf__unsafe_ptr=*__temp1331v;
  uint64_t buf__unsafe_size=*__temp1332v;
  uint16_t buf__unsafe_offset=*__temp1333v;
  uint16_t buf__unsafe_align=*__temp1334v;
  uint64_t __temp675v=0;
  uint64_t __temp676v=0;
  uint64_t pos=0;
  __temp675v=0;
  __temp676v=__temp675v;
  pos=__temp676v;
  goto __temp_return;
  __temp_return:
  *__temp1331v=buf__unsafe_ptr;
  *__temp1332v=buf__unsafe_size;
  *__temp1333v=buf__unsafe_offset;
  *__temp1334v=buf__unsafe_align;
  *__temp1335v=buf__unsafe_ptr;
  *__temp1336v=buf__unsafe_size;
  *__temp1337v=buf__unsafe_offset;
  *__temp1338v=buf__unsafe_align;
  *__temp1339v=pos;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1340v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1341v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1342v) {
  *__temp1342v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1343v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1343v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, uint64_t i, char** __temp1348v) {
  char* buffer__unsafe_ptr=*__temp1344v;
  uint64_t buffer__unsafe_size=*__temp1345v;
  uint16_t buffer__unsafe_offset=*__temp1346v;
  uint16_t buffer__unsafe_align=*__temp1347v;
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
  *__temp1344v=buffer__unsafe_ptr;
  *__temp1345v=buffer__unsafe_size;
  *__temp1346v=buffer__unsafe_offset;
  *__temp1347v=buffer__unsafe_align;
  *__temp1348v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1349v) {
  *__temp1349v=to;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1350v) {
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
  *__temp1350v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp591v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1351v, uint64_t* __temp1352v, uint64_t* __temp1353v, char* __temp1354v) {
  goto __temp_return;
  __temp_return:
  *__temp1351v=unsafe_ptr;
  *__temp1352v=dat__pos;
  *__temp1353v=dat__length;
  *__temp1354v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp595v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1355v, uint64_t* __temp1356v, uint64_t* __temp1357v, char* __temp1358v) {
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
  *__temp1355v=__temp602v__unsafe_ptr;
  *__temp1356v=__temp602v__dat__pos;
  *__temp1357v=__temp602v__dat__length;
  *__temp1358v=__temp602v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp627v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1359v, uint64_t* __temp1360v, uint64_t* __temp1361v, char* __temp1362v) {
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
  *__temp1359v=__temp632v__unsafe_ptr;
  *__temp1360v=__temp632v__dat__pos;
  *__temp1361v=__temp632v__dat__length;
  *__temp1362v=__temp632v__dat__first;
  
  return __temp_errcode;
}

int str__temp633v(const char* c, char** __temp1363v, uint64_t* __temp1364v, uint64_t* __temp1365v, char* __temp1366v) {
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
  *__temp1363v=__temp640v__unsafe_ptr;
  *__temp1364v=__temp640v__dat__pos;
  *__temp1365v=__temp640v__dat__length;
  *__temp1366v=__temp640v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp641v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1367v) {
  goto __temp_return;
  __temp_return:
  *__temp1367v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1368v) {
  goto __temp_return;
  __temp_return:
  *__temp1368v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1369v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1369v=z;
}

int copy__temp707v(char** __temp1370v, uint64_t* __temp1371v, uint16_t* __temp1372v, uint16_t* __temp1373v, uint64_t* __temp1374v, const char* _other, char** __temp1375v, uint64_t* __temp1376v, uint64_t* __temp1377v, char* __temp1378v) {
  char* buf__unsafe_ptr=*__temp1370v;
  uint64_t buf__unsafe_size=*__temp1371v;
  uint16_t buf__unsafe_offset=*__temp1372v;
  uint16_t buf__unsafe_align=*__temp1373v;
  uint64_t pos=*__temp1374v;
  char* __temp708v__unsafe_ptr=0;
  uint64_t __temp708v__dat__pos=0;
  uint64_t __temp708v__dat__length=0;
  char __temp708v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp709v__=0;
  uint64_t __temp710v__=0;
  uint64_t next_pos=0;
  uint64_t __temp711v__=0;
  char __temp712v__=0;
  uint64_t __temp713v=0;
  uint64_t __temp714v__=0;
  uint64_t prev_pos=0;
  char* __temp715v__unsafe_ptr=0;
  uint64_t __temp715v__dat__pos=0;
  uint64_t __temp715v__dat__length=0;
  char __temp715v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(_other,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp708v__unsafe_ptr;
  other__dat__pos=__temp708v__dat__pos;
  other__dat__length=__temp708v__dat__length;
  other__dat__first=__temp708v__dat__first;
  len__temp641v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp709v__);
  add__temp170v(pos,__temp709v__,&__temp710v__);
  next_pos=__temp710v__;
  len__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp711v__);
  gt__temp271v(next_pos,__temp711v__,&__temp712v__);
  if(__temp712v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp713v=0;
  add__temp170v(pos,__temp713v,&__temp714v__);
  prev_pos=__temp714v__;
  pos=next_pos;
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp715v__unsafe_ptr,&__temp715v__dat__pos,&__temp715v__dat__length,&__temp715v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1370v=buf__unsafe_ptr;
  *__temp1371v=buf__unsafe_size;
  *__temp1372v=buf__unsafe_offset;
  *__temp1373v=buf__unsafe_align;
  *__temp1374v=pos;
  *__temp1375v=__temp715v__unsafe_ptr;
  *__temp1376v=__temp715v__dat__pos;
  *__temp1377v=__temp715v__dat__length;
  *__temp1378v=__temp715v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1246v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1379v, uint64_t* __temp1380v, uint64_t* __temp1381v, char* __temp1382v, char** __temp1383v, uint64_t* __temp1384v, uint64_t* __temp1385v, char* __temp1386v) {
  goto __temp_return;
  __temp_return:
  *__temp1379v=name__unsafe_ptr;
  *__temp1380v=name__dat__pos;
  *__temp1381v=name__dat__length;
  *__temp1382v=name__dat__first;
  *__temp1383v=surname__unsafe_ptr;
  *__temp1384v=surname__dat__pos;
  *__temp1385v=surname__dat__length;
  *__temp1386v=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__temp740v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp741v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1248v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1249v);
  print__temp361v(__temp1251v,__temp821v);
  print__temp740v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1254v,__temp821v);
  print__temp740v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1249v);
}

static inline __attribute__((always_inline)) int test__temp1258v(char** __temp1387v, uint64_t* __temp1388v, uint16_t* __temp1389v, uint16_t* __temp1390v, uint64_t* __temp1391v, char** __temp1392v, uint64_t* __temp1393v, uint16_t* __temp1394v, uint16_t* __temp1395v) {
  char* __temp1261v__unsafe_ptr=0;
  uint64_t __temp1261v__unsafe_size=0;
  uint16_t __temp1261v__unsafe_offset=0;
  uint16_t __temp1261v__unsafe_align=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  uint64_t __temp1263v=0;
  char* __temp1264v__unsafe_ptr=0;
  uint64_t __temp1264v__unsafe_size=0;
  uint16_t __temp1264v__unsafe_offset=0;
  uint16_t __temp1264v__unsafe_align=0;
  char __temp1265v____temp475v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  uint64_t __temp1266v=0;
  uint64_t __temp1267v__=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__unsafe_size=0;
  uint16_t __temp1268v__unsafe_offset=0;
  uint16_t __temp1268v__unsafe_align=0;
  char __temp1269v____temp560v____temp475v__=0;
  char* __temp1270v__buf__unsafe_ptr=0;
  uint64_t __temp1270v__buf__unsafe_size=0;
  uint16_t __temp1270v__buf__unsafe_offset=0;
  uint16_t __temp1270v__buf__unsafe_align=0;
  uint64_t __temp1270v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1271v=0;
  char* __temp1272v__=0;
  uint64_t __temp1273v=0;
  char* __temp1275v__unsafe_ptr=0;
  uint64_t __temp1275v__dat__pos=0;
  uint64_t __temp1275v__dat__length=0;
  char __temp1275v__dat__first=0;
  char* __temp1277v__unsafe_ptr=0;
  uint64_t __temp1277v__dat__pos=0;
  uint64_t __temp1277v__dat__length=0;
  char __temp1277v__dat__first=0;
  char* __temp1278v__name__unsafe_ptr=0;
  uint64_t __temp1278v__name__dat__pos=0;
  uint64_t __temp1278v__name__dat__length=0;
  char __temp1278v__name__dat__first=0;
  char* __temp1278v__surname__unsafe_ptr=0;
  uint64_t __temp1278v__surname__dat__pos=0;
  uint64_t __temp1278v__surname__dat__length=0;
  char __temp1278v__surname__dat__first=0;
  uint64_t __temp1279v=0;
  char* __temp1280v__=0;
  char* __temp1281v__name__unsafe_ptr=0;
  uint64_t __temp1281v__name__dat__pos=0;
  uint64_t __temp1281v__name__dat__length=0;
  char __temp1281v__name__dat__first=0;
  char* __temp1281v__surname__unsafe_ptr=0;
  uint64_t __temp1281v__surname__dat__pos=0;
  uint64_t __temp1281v__surname__dat__length=0;
  char __temp1281v__surname__dat__first=0;
  char* __temp1283v__unsafe_ptr=0;
  uint64_t __temp1283v__unsafe_size=0;
  uint16_t __temp1283v__unsafe_offset=0;
  uint16_t __temp1283v__unsafe_align=0;
  char* __temp1287v__unsafe_ptr=0;
  uint64_t __temp1287v__unsafe_size=0;
  uint16_t __temp1287v__unsafe_offset=0;
  uint16_t __temp1287v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1259v(&__temp1261v__unsafe_ptr,&__temp1261v__unsafe_size,&__temp1261v__unsafe_offset,&__temp1261v__unsafe_align);
  __temp1262v__unsafe_ptr=__temp1261v__unsafe_ptr;
  __temp1262v__unsafe_size=__temp1261v__unsafe_size;
  __temp1262v__unsafe_offset=__temp1261v__unsafe_offset;
  __temp1262v__unsafe_align=__temp1261v__unsafe_align;
  __temp1263v=4;
  __temp_errcode=alloc__temp473v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1263v,&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1264v__unsafe_ptr;
  people__unsafe_size=__temp1264v__unsafe_size;
  people__unsafe_offset=__temp1264v__unsafe_offset;
  people__unsafe_align=__temp1264v__unsafe_align;
  __temp1266v=4;
  KB__temp444v(__temp1266v,&__temp1267v__);
  __temp_errcode=alloc__temp554v(__temp1267v__,&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp674v(&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align,&__temp1270v__buf__unsafe_ptr,&__temp1270v__buf__unsafe_size,&__temp1270v__buf__unsafe_offset,&__temp1270v__buf__unsafe_align,&__temp1270v__pos);
  buf__buf__unsafe_ptr=__temp1270v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1270v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1270v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1270v__buf__unsafe_align;
  buf__pos=__temp1270v__pos;
  __temp1271v=0;
  __temp_errcode=mutget__temp539v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1271v,&__temp1272v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1273v=0;
  __temp_errcode=copy__temp707v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1274v,&__temp1275v__unsafe_ptr,&__temp1275v__dat__pos,&__temp1275v__dat__length,&__temp1275v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp707v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1276v,&__temp1277v__unsafe_ptr,&__temp1277v__dat__pos,&__temp1277v__dat__length,&__temp1277v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1246v(__temp1273v,__temp1275v__unsafe_ptr,__temp1275v__dat__pos,__temp1275v__dat__length,__temp1275v__dat__first,__temp1277v__unsafe_ptr,__temp1277v__dat__pos,__temp1277v__dat__length,__temp1277v__dat__first,&__temp1278v__name__unsafe_ptr,&__temp1278v__name__dat__pos,&__temp1278v__name__dat__length,&__temp1278v__name__dat__first,&__temp1278v__surname__unsafe_ptr,&__temp1278v__surname__dat__pos,&__temp1278v__surname__dat__length,&__temp1278v__surname__dat__first);
  if(!__temp1272v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1272v__,&__temp1278v__name__unsafe_ptr,8);
  memcpy(__temp1272v__+8,&__temp1278v__name__dat__pos,8);
  memcpy(__temp1272v__+16,&__temp1278v__name__dat__length,8);
  memcpy(__temp1272v__+24,&__temp1278v__name__dat__first,1);
  memcpy(__temp1272v__+25,&__temp1278v__surname__unsafe_ptr,8);
  memcpy(__temp1272v__+33,&__temp1278v__surname__dat__pos,8);
  memcpy(__temp1272v__+41,&__temp1278v__surname__dat__length,8);
  memcpy(__temp1272v__+49,&__temp1278v__surname__dat__first,1);
  __temp1279v=0;
  __temp_errcode=get__temp546v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1281v__name__unsafe_ptr,__temp1280v__,8);
  memcpy(&__temp1281v__name__dat__pos,__temp1280v__+8,8);
  memcpy(&__temp1281v__name__dat__length,__temp1280v__+16,8);
  memcpy(&__temp1281v__name__dat__first,__temp1280v__+24,1);
  memcpy(&__temp1281v__surname__unsafe_ptr,__temp1280v__+25,8);
  memcpy(&__temp1281v__surname__dat__pos,__temp1280v__+33,8);
  memcpy(&__temp1281v__surname__dat__length,__temp1280v__+41,8);
  memcpy(&__temp1281v__surname__dat__first,__temp1280v__+49,1);
  print__temp1248v(__temp1281v__name__unsafe_ptr,__temp1281v__name__dat__pos,__temp1281v__name__dat__length,__temp1281v__name__dat__first,__temp1281v__surname__unsafe_ptr,__temp1281v__surname__dat__pos,__temp1281v__surname__dat__length,__temp1281v__surname__dat__first);
  __temp1283v__unsafe_ptr=people__unsafe_ptr;
  __temp1283v__unsafe_size=people__unsafe_size;
  __temp1283v__unsafe_offset=people__unsafe_offset+0;
  __temp1283v__unsafe_align=people__unsafe_align;
  __temp1287v__unsafe_ptr=__temp1283v__unsafe_ptr;
  __temp1287v__unsafe_size=__temp1283v__unsafe_size;
  __temp1287v__unsafe_offset=__temp1283v__unsafe_offset+8;
  __temp1287v__unsafe_align=__temp1283v__unsafe_align;
  dat__unsafe_ptr=__temp1287v__unsafe_ptr;
  dat__unsafe_size=__temp1287v__unsafe_size;
  dat__unsafe_offset=__temp1287v__unsafe_offset;
  dat__unsafe_align=__temp1287v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1269v____temp560v____temp475v__);
  if(__temp1269v____temp560v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1265v____temp475v__);
  if(__temp1265v____temp475v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__temp466v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1387v=buf__buf__unsafe_ptr;
  *__temp1388v=buf__buf__unsafe_size;
  *__temp1389v=buf__buf__unsafe_offset;
  *__temp1390v=buf__buf__unsafe_align;
  *__temp1391v=buf__pos;
  *__temp1392v=dat__unsafe_ptr;
  *__temp1393v=dat__unsafe_size;
  *__temp1394v=dat__unsafe_offset;
  *__temp1395v=dat__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1291v() {
  char* __temp1292v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1292v__buf__buf__unsafe_size=0;
  uint16_t __temp1292v__buf__buf__unsafe_offset=0;
  uint16_t __temp1292v__buf__buf__unsafe_align=0;
  uint64_t __temp1292v__buf__pos=0;
  char* __temp1292v__dat__unsafe_ptr=0;
  uint64_t __temp1292v__dat__unsafe_size=0;
  uint16_t __temp1292v__dat__unsafe_offset=0;
  uint16_t __temp1292v__dat__unsafe_align=0;
  char __temp1293v____temp1265v____temp475v__=0;
  char __temp1293v____temp1269v____temp560v____temp475v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __temp1294v=0;
  char* __temp1295v__=0;
  uint64_t __temp1296v__pos=0;
  uint64_t __temp1296v__length=0;
  char __temp1296v__first=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__dat__pos=0;
  uint64_t __temp1297v__dat__length=0;
  char __temp1297v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1258v(&__temp1292v__buf__buf__unsafe_ptr,&__temp1292v__buf__buf__unsafe_size,&__temp1292v__buf__buf__unsafe_offset,&__temp1292v__buf__buf__unsafe_align,&__temp1292v__buf__pos,&__temp1292v__dat__unsafe_ptr,&__temp1292v__dat__unsafe_size,&__temp1292v__dat__unsafe_offset,&__temp1292v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1292v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1292v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__temp1292v__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__temp1292v__buf__buf__unsafe_align;
  t__buf__pos=__temp1292v__buf__pos;
  t__dat__unsafe_ptr=__temp1292v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1292v__dat__unsafe_size;
  t__dat__unsafe_offset=__temp1292v__dat__unsafe_offset;
  t__dat__unsafe_align=__temp1292v__dat__unsafe_align;
  __temp1294v=0;
  __temp_errcode=get__temp546v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1294v,&__temp1295v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1295v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1296v__pos,__temp1295v__,8);
  memcpy(&__temp1296v__length,__temp1295v__+8,8);
  memcpy(&__temp1296v__first,__temp1295v__+16,1);
  __temp_errcode=str__temp595v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1296v__pos,__temp1296v__length,__temp1296v__first,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp740v(__temp1297v__unsafe_ptr,__temp1297v__dat__pos,__temp1297v__dat__length,__temp1297v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1292v__buf__buf__unsafe_ptr,&__temp1293v____temp1269v____temp560v____temp475v__);
  if(__temp1293v____temp1269v____temp560v____temp475v__){
  __temp1292v__buf__buf__unsafe_size=0;
  __temp1292v__buf__buf__unsafe_size=__temp1292v__buf__buf__unsafe_size;
  __temp1292v__buf__buf__unsafe_ptr=__temp1292v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1292v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1292v__dat__unsafe_ptr,&__temp1293v____temp1265v____temp475v__);
  if(__temp1293v____temp1265v____temp475v__){
  __temp1292v__dat__unsafe_size=0;
  __temp1292v__dat__unsafe_size=__temp1292v__dat__unsafe_size;
  __temp1292v__dat__unsafe_ptr=__temp1292v__dat__unsafe_ptr;
  free__temp466v(&__temp1292v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1291v();return 0;}