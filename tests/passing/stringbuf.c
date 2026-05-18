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

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1304v) {
  char* allocated=*__temp1304v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
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

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1310v) {
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

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1312v) {
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
  *__temp1312v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1313v, uint64_t* __temp1314v, uint16_t* __temp1315v, uint16_t* __temp1316v, uint64_t size, char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v) {
  char* buffer__unsafe_ptr=*__temp1313v;
  uint64_t buffer__unsafe_size=*__temp1314v;
  uint16_t buffer__unsafe_offset=*__temp1315v;
  uint16_t buffer__unsafe_align=*__temp1316v;
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
  *__temp1313v=buffer__unsafe_ptr;
  *__temp1314v=buffer__unsafe_size;
  *__temp1315v=buffer__unsafe_offset;
  *__temp1316v=buffer__unsafe_align;
  *__temp1317v=buffer__unsafe_ptr;
  *__temp1318v=buffer__unsafe_size;
  *__temp1319v=buffer__unsafe_offset;
  *__temp1320v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1321v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1321v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp557v(char** __temp1322v, uint64_t* __temp1323v, uint16_t* __temp1324v, uint16_t* __temp1325v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1322v=unsafe_ptr;
  *__temp1323v=unsafe_size;
  *__temp1324v=unsafe_offset;
  *__temp1325v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp556v(uint64_t size, char** __temp1326v, uint64_t* __temp1327v, uint16_t* __temp1328v, uint16_t* __temp1329v) {
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
  *__temp1326v=__temp561v__unsafe_ptr;
  *__temp1327v=__temp561v__unsafe_size;
  *__temp1328v=__temp561v__unsafe_offset;
  *__temp1329v=__temp561v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1330v, uint64_t* __temp1331v, uint16_t* __temp1332v, uint16_t* __temp1333v, char** __temp1334v, uint64_t* __temp1335v, uint16_t* __temp1336v, uint16_t* __temp1337v, uint64_t* __temp1338v) {
  char* buf__unsafe_ptr=*__temp1330v;
  uint64_t buf__unsafe_size=*__temp1331v;
  uint16_t buf__unsafe_offset=*__temp1332v;
  uint16_t buf__unsafe_align=*__temp1333v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
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

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1342v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1342v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp541v(char** __temp1343v, uint64_t* __temp1344v, uint16_t* __temp1345v, uint16_t* __temp1346v, uint64_t i, char** __temp1347v) {
  char* buffer__unsafe_ptr=*__temp1343v;
  uint64_t buffer__unsafe_size=*__temp1344v;
  uint16_t buffer__unsafe_offset=*__temp1345v;
  uint16_t buffer__unsafe_align=*__temp1346v;
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
  *__temp1343v=buffer__unsafe_ptr;
  *__temp1344v=buffer__unsafe_size;
  *__temp1345v=buffer__unsafe_offset;
  *__temp1346v=buffer__unsafe_align;
  *__temp1347v=__temp547v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1348v) {
  *__temp1348v=to;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1349v) {
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
  *__temp1349v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1350v, uint64_t* __temp1351v, uint64_t* __temp1352v, char* __temp1353v) {
  goto __temp_return;
  __temp_return:
  *__temp1350v=unsafe_ptr;
  *__temp1351v=dat__pos;
  *__temp1352v=dat__length;
  *__temp1353v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp597v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1354v, uint64_t* __temp1355v, uint64_t* __temp1356v, char* __temp1357v) {
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
  *__temp1354v=__temp604v__unsafe_ptr;
  *__temp1355v=__temp604v__dat__pos;
  *__temp1356v=__temp604v__dat__length;
  *__temp1357v=__temp604v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp629v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1358v, uint64_t* __temp1359v, uint64_t* __temp1360v, char* __temp1361v) {
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
  *__temp1358v=__temp634v__unsafe_ptr;
  *__temp1359v=__temp634v__dat__pos;
  *__temp1360v=__temp634v__dat__length;
  *__temp1361v=__temp634v__dat__first;
  
  return __temp_errcode;
}

int str__temp635v(const char* c, char** __temp1362v, uint64_t* __temp1363v, uint64_t* __temp1364v, char* __temp1365v) {
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
  *__temp1362v=__temp642v__unsafe_ptr;
  *__temp1363v=__temp642v__dat__pos;
  *__temp1364v=__temp642v__dat__length;
  *__temp1365v=__temp642v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp643v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1366v) {
  goto __temp_return;
  __temp_return:
  *__temp1366v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1367v) {
  goto __temp_return;
  __temp_return:
  *__temp1367v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1368v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1368v=z;
}

int copy__temp709v(char** __temp1369v, uint64_t* __temp1370v, uint16_t* __temp1371v, uint16_t* __temp1372v, uint64_t* __temp1373v, const char* _other, char** __temp1374v, uint64_t* __temp1375v, uint64_t* __temp1376v, char* __temp1377v) {
  char* buf__unsafe_ptr=*__temp1369v;
  uint64_t buf__unsafe_size=*__temp1370v;
  uint16_t buf__unsafe_offset=*__temp1371v;
  uint16_t buf__unsafe_align=*__temp1372v;
  uint64_t pos=*__temp1373v;
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
  *__temp1369v=buf__unsafe_ptr;
  *__temp1370v=buf__unsafe_size;
  *__temp1371v=buf__unsafe_offset;
  *__temp1372v=buf__unsafe_align;
  *__temp1373v=pos;
  *__temp1374v=__temp717v__unsafe_ptr;
  *__temp1375v=__temp717v__dat__pos;
  *__temp1376v=__temp717v__dat__length;
  *__temp1377v=__temp717v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1246v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1378v, uint64_t* __temp1379v, uint64_t* __temp1380v, char* __temp1381v, char** __temp1382v, uint64_t* __temp1383v, uint64_t* __temp1384v, char* __temp1385v) {
  goto __temp_return;
  __temp_return:
  *__temp1378v=name__unsafe_ptr;
  *__temp1379v=name__dat__pos;
  *__temp1380v=name__dat__length;
  *__temp1381v=name__dat__first;
  *__temp1382v=surname__unsafe_ptr;
  *__temp1383v=surname__dat__pos;
  *__temp1384v=surname__dat__length;
  *__temp1385v=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__temp1248v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1249v);
  print__temp361v(__temp1251v,__temp821v);
  print__temp742v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1254v,__temp821v);
  print__temp742v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1249v);
}

static inline __attribute__((always_inline)) int test__temp1258v(char** __temp1386v, uint64_t* __temp1387v, uint16_t* __temp1388v, uint16_t* __temp1389v, uint64_t* __temp1390v, char** __temp1391v, uint64_t* __temp1392v, uint16_t* __temp1393v, uint16_t* __temp1394v) {
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
  char __temp1265v____temp470v__=0;
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
  char __temp1269v____temp562v____temp470v__=0;
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
  __temp_errcode=alloc__temp468v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align,__temp1263v,&__temp1264v__unsafe_ptr,&__temp1264v__unsafe_size,&__temp1264v__unsafe_offset,&__temp1264v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1264v__unsafe_ptr;
  people__unsafe_size=__temp1264v__unsafe_size;
  people__unsafe_offset=__temp1264v__unsafe_offset;
  people__unsafe_align=__temp1264v__unsafe_align;
  __temp1266v=4;
  KB__temp443v(__temp1266v,&__temp1267v__);
  __temp_errcode=alloc__temp556v(__temp1267v__,&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_offset,&__temp1268v__unsafe_align,&__temp1270v__buf__unsafe_ptr,&__temp1270v__buf__unsafe_size,&__temp1270v__buf__unsafe_offset,&__temp1270v__buf__unsafe_align,&__temp1270v__pos);
  buf__buf__unsafe_ptr=__temp1270v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1270v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1270v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1270v__buf__unsafe_align;
  buf__pos=__temp1270v__pos;
  __temp1271v=0;
  __temp_errcode=mutget__temp541v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1271v,&__temp1272v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1273v=0;
  __temp_errcode=copy__temp709v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1274v,&__temp1275v__unsafe_ptr,&__temp1275v__dat__pos,&__temp1275v__dat__length,&__temp1275v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1276v,&__temp1277v__unsafe_ptr,&__temp1277v__dat__pos,&__temp1277v__dat__length,&__temp1277v__dat__first);
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
  __temp_errcode=get__temp548v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1279v,&__temp1280v__);
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
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1269v____temp562v____temp470v__);
  if(__temp1269v____temp562v____temp470v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1265v____temp470v__);
  if(__temp1265v____temp470v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp461v(&dat__unsafe_ptr);
  }
  __temp_return:
  *__temp1386v=buf__buf__unsafe_ptr;
  *__temp1387v=buf__buf__unsafe_size;
  *__temp1388v=buf__buf__unsafe_offset;
  *__temp1389v=buf__buf__unsafe_align;
  *__temp1390v=buf__pos;
  *__temp1391v=dat__unsafe_ptr;
  *__temp1392v=dat__unsafe_size;
  *__temp1393v=dat__unsafe_offset;
  *__temp1394v=dat__unsafe_align;
  
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
  char __temp1293v____temp1265v____temp470v__=0;
  char __temp1293v____temp1269v____temp562v____temp470v__=0;
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
  __temp_errcode=get__temp548v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1294v,&__temp1295v__);
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
  __temp_errcode=str__temp597v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1296v__pos,__temp1296v__length,__temp1296v__first,&__temp1297v__unsafe_ptr,&__temp1297v__dat__pos,&__temp1297v__dat__length,&__temp1297v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp742v(__temp1297v__unsafe_ptr,__temp1297v__dat__pos,__temp1297v__dat__length,__temp1297v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1292v__buf__buf__unsafe_ptr,&__temp1293v____temp1269v____temp562v____temp470v__);
  if(__temp1293v____temp1269v____temp562v____temp470v__){
  __temp1292v__buf__buf__unsafe_size=0;
  __temp1292v__buf__buf__unsafe_size=__temp1292v__buf__buf__unsafe_size;
  free__temp461v(&__temp1292v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1292v__dat__unsafe_ptr,&__temp1293v____temp1265v____temp470v__);
  if(__temp1293v____temp1265v____temp470v__){
  __temp1292v__dat__unsafe_size=0;
  __temp1292v__dat__unsafe_size=__temp1292v__dat__unsafe_size;
  free__temp461v(&__temp1292v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1291v();return 0;}