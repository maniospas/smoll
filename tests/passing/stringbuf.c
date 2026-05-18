#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1275v="it's a me";
const char* const __temp1252v="name      ";
const char* const __temp822v="";
const char* const __temp365v="\n";
const char* const __temp1250v="-------------------";
const char* const __temp1255v="surnname  ";
const char* const __temp1277v="mario";
static const char* __temp_all_errcodes[34] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void Person____temp_buffer____buffer__temp1260v(char** __temp1300v, uint64_t* __temp1301v, uint16_t* __temp1302v, uint16_t* __temp1303v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__temp1300v=unsafe_ptr;
  *__temp1301v=unsafe_size;
  *__temp1302v=unsafe_offset;
  *__temp1303v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1304v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1305v) {
  char* allocated=*__temp1305v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1305v=allocated;
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

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1309v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1310v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1311v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1311v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1312v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1313v) {
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
  *__temp1313v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1314v, uint64_t* __temp1315v, uint16_t* __temp1316v, uint16_t* __temp1317v, uint64_t size, char** __temp1318v, uint64_t* __temp1319v, uint16_t* __temp1320v, uint16_t* __temp1321v) {
  char* buffer__unsafe_ptr=*__temp1314v;
  uint64_t buffer__unsafe_size=*__temp1315v;
  uint16_t buffer__unsafe_offset=*__temp1316v;
  uint16_t buffer__unsafe_align=*__temp1317v;
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

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1322v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1322v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v) {
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

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v) {
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
  *__temp1327v=__temp564v__unsafe_ptr;
  *__temp1328v=__temp564v__unsafe_size;
  *__temp1329v=__temp564v__unsafe_offset;
  *__temp1330v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp679v(char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v, char** __temp1335v, uint64_t* __temp1336v, uint16_t* __temp1337v, uint16_t* __temp1338v, uint64_t* __temp1339v) {
  char* buf__unsafe_ptr=*__temp1331v;
  uint64_t buf__unsafe_size=*__temp1332v;
  uint16_t buf__unsafe_offset=*__temp1333v;
  uint16_t buf__unsafe_align=*__temp1334v;
  uint64_t __temp680v=0;
  uint64_t __temp681v=0;
  uint64_t pos=0;
  __temp680v=0;
  __temp681v=__temp680v;
  pos=__temp681v;
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

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1343v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1343v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, uint64_t i, char** __temp1348v) {
  char* buffer__unsafe_ptr=*__temp1344v;
  uint64_t buffer__unsafe_size=*__temp1345v;
  uint16_t buffer__unsafe_offset=*__temp1346v;
  uint16_t buffer__unsafe_align=*__temp1347v;
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
  *__temp1344v=buffer__unsafe_ptr;
  *__temp1345v=buffer__unsafe_size;
  *__temp1346v=buffer__unsafe_offset;
  *__temp1347v=buffer__unsafe_align;
  *__temp1348v=__temp550v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1349v) {
  *__temp1349v=to;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1350v) {
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
  *__temp1350v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1351v, uint64_t* __temp1352v, uint64_t* __temp1353v, char* __temp1354v) {
  goto __temp_return;
  __temp_return:
  *__temp1351v=unsafe_ptr;
  *__temp1352v=dat__pos;
  *__temp1353v=dat__length;
  *__temp1354v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1355v, uint64_t* __temp1356v, uint64_t* __temp1357v, char* __temp1358v) {
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
  *__temp1355v=__temp607v__unsafe_ptr;
  *__temp1356v=__temp607v__dat__pos;
  *__temp1357v=__temp607v__dat__length;
  *__temp1358v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1359v, uint64_t* __temp1360v, uint64_t* __temp1361v, char* __temp1362v) {
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
  *__temp1359v=__temp637v__unsafe_ptr;
  *__temp1360v=__temp637v__dat__pos;
  *__temp1361v=__temp637v__dat__length;
  *__temp1362v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1363v, uint64_t* __temp1364v, uint64_t* __temp1365v, char* __temp1366v) {
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
  *__temp1363v=__temp645v__unsafe_ptr;
  *__temp1364v=__temp645v__dat__pos;
  *__temp1365v=__temp645v__dat__length;
  *__temp1366v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1367v) {
  goto __temp_return;
  __temp_return:
  *__temp1367v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1368v) {
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

int copy__temp710v(char** __temp1370v, uint64_t* __temp1371v, uint16_t* __temp1372v, uint16_t* __temp1373v, uint64_t* __temp1374v, const char* _other, char** __temp1375v, uint64_t* __temp1376v, uint64_t* __temp1377v, char* __temp1378v) {
  char* buf__unsafe_ptr=*__temp1370v;
  uint64_t buf__unsafe_size=*__temp1371v;
  uint16_t buf__unsafe_offset=*__temp1372v;
  uint16_t buf__unsafe_align=*__temp1373v;
  uint64_t pos=*__temp1374v;
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
  *__temp1370v=buf__unsafe_ptr;
  *__temp1371v=buf__unsafe_size;
  *__temp1372v=buf__unsafe_offset;
  *__temp1373v=buf__unsafe_align;
  *__temp1374v=pos;
  *__temp1375v=__temp718v__unsafe_ptr;
  *__temp1376v=__temp718v__dat__pos;
  *__temp1377v=__temp718v__dat__length;
  *__temp1378v=__temp718v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Person__temp1247v(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __temp1379v, uint64_t* __temp1380v, uint64_t* __temp1381v, char* __temp1382v, char** __temp1383v, uint64_t* __temp1384v, uint64_t* __temp1385v, char* __temp1386v) {
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

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__temp1249v(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__temp363v(__temp1250v);
  print__temp361v(__temp1252v,__temp822v);
  print__temp743v(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__temp361v(__temp1255v,__temp822v);
  print__temp743v(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__temp363v(__temp1250v);
}

static inline __attribute__((always_inline)) int test__temp1259v(char** __temp1387v, uint64_t* __temp1388v, uint16_t* __temp1389v, uint16_t* __temp1390v, uint64_t* __temp1391v, char** __temp1392v, uint64_t* __temp1393v, uint16_t* __temp1394v, uint16_t* __temp1395v) {
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint16_t __temp1262v__unsafe_offset=0;
  uint16_t __temp1262v__unsafe_align=0;
  char* __temp1263v__unsafe_ptr=0;
  uint64_t __temp1263v__unsafe_size=0;
  uint16_t __temp1263v__unsafe_offset=0;
  uint16_t __temp1263v__unsafe_align=0;
  uint64_t __temp1264v=0;
  char* __temp1265v__unsafe_ptr=0;
  uint64_t __temp1265v__unsafe_size=0;
  uint16_t __temp1265v__unsafe_offset=0;
  uint16_t __temp1265v__unsafe_align=0;
  char __temp1266v____temp470v__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  uint64_t __temp1267v=0;
  uint64_t __temp1268v__=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint16_t __temp1269v__unsafe_offset=0;
  uint16_t __temp1269v__unsafe_align=0;
  char __temp1270v____temp565v____temp470v__=0;
  char* __temp1271v__buf__unsafe_ptr=0;
  uint64_t __temp1271v__buf__unsafe_size=0;
  uint16_t __temp1271v__buf__unsafe_offset=0;
  uint16_t __temp1271v__buf__unsafe_align=0;
  uint64_t __temp1271v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __temp1272v=0;
  char* __temp1273v__=0;
  uint64_t __temp1274v=0;
  char* __temp1276v__unsafe_ptr=0;
  uint64_t __temp1276v__dat__pos=0;
  uint64_t __temp1276v__dat__length=0;
  char __temp1276v__dat__first=0;
  char* __temp1278v__unsafe_ptr=0;
  uint64_t __temp1278v__dat__pos=0;
  uint64_t __temp1278v__dat__length=0;
  char __temp1278v__dat__first=0;
  char* __temp1279v__name__unsafe_ptr=0;
  uint64_t __temp1279v__name__dat__pos=0;
  uint64_t __temp1279v__name__dat__length=0;
  char __temp1279v__name__dat__first=0;
  char* __temp1279v__surname__unsafe_ptr=0;
  uint64_t __temp1279v__surname__dat__pos=0;
  uint64_t __temp1279v__surname__dat__length=0;
  char __temp1279v__surname__dat__first=0;
  uint64_t __temp1280v=0;
  char* __temp1281v__=0;
  char* __temp1282v__name__unsafe_ptr=0;
  uint64_t __temp1282v__name__dat__pos=0;
  uint64_t __temp1282v__name__dat__length=0;
  char __temp1282v__name__dat__first=0;
  char* __temp1282v__surname__unsafe_ptr=0;
  uint64_t __temp1282v__surname__dat__pos=0;
  uint64_t __temp1282v__surname__dat__length=0;
  char __temp1282v__surname__dat__first=0;
  char* __temp1284v__unsafe_ptr=0;
  uint64_t __temp1284v__unsafe_size=0;
  uint16_t __temp1284v__unsafe_offset=0;
  uint16_t __temp1284v__unsafe_align=0;
  char* __temp1288v__unsafe_ptr=0;
  uint64_t __temp1288v__unsafe_size=0;
  uint16_t __temp1288v__unsafe_offset=0;
  uint16_t __temp1288v__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Person____temp_buffer____buffer__temp1260v(&__temp1262v__unsafe_ptr,&__temp1262v__unsafe_size,&__temp1262v__unsafe_offset,&__temp1262v__unsafe_align);
  __temp1263v__unsafe_ptr=__temp1262v__unsafe_ptr;
  __temp1263v__unsafe_size=__temp1262v__unsafe_size;
  __temp1263v__unsafe_offset=__temp1262v__unsafe_offset;
  __temp1263v__unsafe_align=__temp1262v__unsafe_align;
  __temp1264v=4;
  __temp_errcode=alloc__temp468v(&__temp1263v__unsafe_ptr,&__temp1263v__unsafe_size,&__temp1263v__unsafe_offset,&__temp1263v__unsafe_align,__temp1264v,&__temp1265v__unsafe_ptr,&__temp1265v__unsafe_size,&__temp1265v__unsafe_offset,&__temp1265v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  people__unsafe_ptr=__temp1265v__unsafe_ptr;
  people__unsafe_size=__temp1265v__unsafe_size;
  people__unsafe_offset=__temp1265v__unsafe_offset;
  people__unsafe_align=__temp1265v__unsafe_align;
  __temp1267v=4;
  KB__temp443v(__temp1267v,&__temp1268v__);
  __temp_errcode=alloc__temp559v(__temp1268v__,&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_offset,&__temp1269v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp679v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_offset,&__temp1269v__unsafe_align,&__temp1271v__buf__unsafe_ptr,&__temp1271v__buf__unsafe_size,&__temp1271v__buf__unsafe_offset,&__temp1271v__buf__unsafe_align,&__temp1271v__pos);
  buf__buf__unsafe_ptr=__temp1271v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1271v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1271v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1271v__buf__unsafe_align;
  buf__pos=__temp1271v__pos;
  __temp1272v=0;
  __temp_errcode=mutget__temp544v(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__temp1272v,&__temp1273v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1274v=0;
  __temp_errcode=copy__temp710v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1275v,&__temp1276v__unsafe_ptr,&__temp1276v__dat__pos,&__temp1276v__dat__length,&__temp1276v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp710v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1277v,&__temp1278v__unsafe_ptr,&__temp1278v__dat__pos,&__temp1278v__dat__length,&__temp1278v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  Person__temp1247v(__temp1274v,__temp1276v__unsafe_ptr,__temp1276v__dat__pos,__temp1276v__dat__length,__temp1276v__dat__first,__temp1278v__unsafe_ptr,__temp1278v__dat__pos,__temp1278v__dat__length,__temp1278v__dat__first,&__temp1279v__name__unsafe_ptr,&__temp1279v__name__dat__pos,&__temp1279v__name__dat__length,&__temp1279v__name__dat__first,&__temp1279v__surname__unsafe_ptr,&__temp1279v__surname__dat__pos,&__temp1279v__surname__dat__length,&__temp1279v__surname__dat__first);
  if(!__temp1273v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1273v__,&__temp1279v__name__unsafe_ptr,8);
  memcpy(__temp1273v__+8,&__temp1279v__name__dat__pos,8);
  memcpy(__temp1273v__+16,&__temp1279v__name__dat__length,8);
  memcpy(__temp1273v__+24,&__temp1279v__name__dat__first,1);
  memcpy(__temp1273v__+25,&__temp1279v__surname__unsafe_ptr,8);
  memcpy(__temp1273v__+33,&__temp1279v__surname__dat__pos,8);
  memcpy(__temp1273v__+41,&__temp1279v__surname__dat__length,8);
  memcpy(__temp1273v__+49,&__temp1279v__surname__dat__first,1);
  __temp1280v=0;
  __temp_errcode=get__temp551v(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__temp1280v,&__temp1281v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1281v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1282v__name__unsafe_ptr,__temp1281v__,8);
  memcpy(&__temp1282v__name__dat__pos,__temp1281v__+8,8);
  memcpy(&__temp1282v__name__dat__length,__temp1281v__+16,8);
  memcpy(&__temp1282v__name__dat__first,__temp1281v__+24,1);
  memcpy(&__temp1282v__surname__unsafe_ptr,__temp1281v__+25,8);
  memcpy(&__temp1282v__surname__dat__pos,__temp1281v__+33,8);
  memcpy(&__temp1282v__surname__dat__length,__temp1281v__+41,8);
  memcpy(&__temp1282v__surname__dat__first,__temp1281v__+49,1);
  print__temp1249v(__temp1282v__name__unsafe_ptr,__temp1282v__name__dat__pos,__temp1282v__name__dat__length,__temp1282v__name__dat__first,__temp1282v__surname__unsafe_ptr,__temp1282v__surname__dat__pos,__temp1282v__surname__dat__length,__temp1282v__surname__dat__first);
  __temp1284v__unsafe_ptr=people__unsafe_ptr;
  __temp1284v__unsafe_size=people__unsafe_size;
  __temp1284v__unsafe_offset=people__unsafe_offset+0;
  __temp1284v__unsafe_align=people__unsafe_align;
  __temp1288v__unsafe_ptr=__temp1284v__unsafe_ptr;
  __temp1288v__unsafe_size=__temp1284v__unsafe_size;
  __temp1288v__unsafe_offset=__temp1284v__unsafe_offset+8;
  __temp1288v__unsafe_align=__temp1284v__unsafe_align;
  dat__unsafe_ptr=__temp1288v__unsafe_ptr;
  dat__unsafe_size=__temp1288v__unsafe_size;
  dat__unsafe_offset=__temp1288v__unsafe_offset;
  dat__unsafe_align=__temp1288v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1270v____temp565v____temp470v__);
  if(__temp1270v____temp565v____temp470v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(dat__unsafe_ptr,&__temp1266v____temp470v__);
  if(__temp1266v____temp470v__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  free__temp461v(&dat__unsafe_ptr);
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

static inline __attribute__((always_inline)) int main__temp1292v() {
  char* __temp1293v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1293v__buf__buf__unsafe_size=0;
  uint16_t __temp1293v__buf__buf__unsafe_offset=0;
  uint16_t __temp1293v__buf__buf__unsafe_align=0;
  uint64_t __temp1293v__buf__pos=0;
  char* __temp1293v__dat__unsafe_ptr=0;
  uint64_t __temp1293v__dat__unsafe_size=0;
  uint16_t __temp1293v__dat__unsafe_offset=0;
  uint16_t __temp1293v__dat__unsafe_align=0;
  char __temp1294v____temp1266v____temp470v__=0;
  char __temp1294v____temp1270v____temp565v____temp470v__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __temp1295v=0;
  char* __temp1296v__=0;
  uint64_t __temp1297v__pos=0;
  uint64_t __temp1297v__length=0;
  char __temp1297v__first=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__dat__pos=0;
  uint64_t __temp1298v__dat__length=0;
  char __temp1298v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1259v(&__temp1293v__buf__buf__unsafe_ptr,&__temp1293v__buf__buf__unsafe_size,&__temp1293v__buf__buf__unsafe_offset,&__temp1293v__buf__buf__unsafe_align,&__temp1293v__buf__pos,&__temp1293v__dat__unsafe_ptr,&__temp1293v__dat__unsafe_size,&__temp1293v__dat__unsafe_offset,&__temp1293v__dat__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__buf__buf__unsafe_ptr=__temp1293v__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__temp1293v__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__temp1293v__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__temp1293v__buf__buf__unsafe_align;
  t__buf__pos=__temp1293v__buf__pos;
  t__dat__unsafe_ptr=__temp1293v__dat__unsafe_ptr;
  t__dat__unsafe_size=__temp1293v__dat__unsafe_size;
  t__dat__unsafe_offset=__temp1293v__dat__unsafe_offset;
  t__dat__unsafe_align=__temp1293v__dat__unsafe_align;
  __temp1295v=0;
  __temp_errcode=get__temp551v(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__temp1295v,&__temp1296v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1296v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1297v__pos,__temp1296v__,8);
  memcpy(&__temp1297v__length,__temp1296v__+8,8);
  memcpy(&__temp1297v__first,__temp1296v__+16,1);
  __temp_errcode=str__temp600v(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__temp1297v__pos,__temp1297v__length,__temp1297v__first,&__temp1298v__unsafe_ptr,&__temp1298v__dat__pos,&__temp1298v__dat__length,&__temp1298v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp743v(__temp1298v__unsafe_ptr,__temp1298v__dat__pos,__temp1298v__dat__length,__temp1298v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1293v__buf__buf__unsafe_ptr,&__temp1294v____temp1270v____temp565v____temp470v__);
  if(__temp1294v____temp1270v____temp565v____temp470v__){
  __temp1293v__buf__buf__unsafe_size=0;
  __temp1293v__buf__buf__unsafe_size=__temp1293v__buf__buf__unsafe_size;
  free__temp461v(&__temp1293v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1293v__dat__unsafe_ptr,&__temp1294v____temp1266v____temp470v__);
  if(__temp1294v____temp1266v____temp470v__){
  __temp1293v__dat__unsafe_size=0;
  __temp1293v__dat__unsafe_size=__temp1293v__dat__unsafe_size;
  free__temp461v(&__temp1293v__dat__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1292v();return 0;}