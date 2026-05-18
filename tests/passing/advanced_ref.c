#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1257v="456";
const char* const __temp1255v="123";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1247v(char** __temp1264v, uint64_t* __temp1265v, uint16_t* __temp1266v, uint16_t* __temp1267v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1264v=unsafe_ptr;
  *__temp1265v=unsafe_size;
  *__temp1266v=unsafe_offset;
  *__temp1267v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1268v) {
  goto __temp_return;
  __temp_return:
  *__temp1268v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1269v) {
  int value=0;
  *__temp1269v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1270v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1270v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1271v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1271v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1272v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1273v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1274v) {
  char* allocated=*__temp1274v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1274v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1275v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1275v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1276v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1276v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1277v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1278v) {
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
  *__temp1278v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1279v, uint64_t* __temp1280v, uint16_t* __temp1281v, uint16_t* __temp1282v, uint64_t size, char** __temp1283v, uint64_t* __temp1284v, uint16_t* __temp1285v, uint16_t* __temp1286v) {
  char* buffer__unsafe_ptr=*__temp1279v;
  uint64_t buffer__unsafe_size=*__temp1280v;
  uint16_t buffer__unsafe_offset=*__temp1281v;
  uint16_t buffer__unsafe_align=*__temp1282v;
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
  *__temp1279v=buffer__unsafe_ptr;
  *__temp1280v=buffer__unsafe_size;
  *__temp1281v=buffer__unsafe_offset;
  *__temp1282v=buffer__unsafe_align;
  *__temp1283v=buffer__unsafe_ptr;
  *__temp1284v=buffer__unsafe_size;
  *__temp1285v=buffer__unsafe_offset;
  *__temp1286v=buffer__unsafe_align;
  
  return __temp_errcode;
}

int list__temp563v(char** __temp1287v, uint64_t* __temp1288v, uint16_t* __temp1289v, uint16_t* __temp1290v, char** __temp1291v, uint64_t* __temp1292v, uint16_t* __temp1293v, uint16_t* __temp1294v, uint64_t* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1287v;
  uint64_t buffer__unsafe_size=*__temp1288v;
  uint16_t buffer__unsafe_offset=*__temp1289v;
  uint16_t buffer__unsafe_align=*__temp1290v;
  uint64_t __temp564v=0;
  uint64_t __temp565v__=0;
  char __temp566v__=0;
  uint64_t __temp567v=0;
  char* __temp568v__unsafe_ptr=0;
  uint64_t __temp568v__unsafe_size=0;
  uint16_t __temp568v__unsafe_offset=0;
  uint16_t __temp568v__unsafe_align=0;
  char __temp569v____temp470v__=0;
  uint64_t __temp570v__=0;
  uint64_t __temp571v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp564v=0;
  len__temp555v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp565v__);
  eq__temp118v(__temp564v,__temp565v__,&__temp566v__);
  if(__temp566v__){
  __temp567v=1;
  __temp_errcode=alloc__temp468v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp567v,&__temp568v__unsafe_ptr,&__temp568v__unsafe_size,&__temp568v__unsafe_offset,&__temp568v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp568v__unsafe_ptr;
  buffer__unsafe_size=__temp568v__unsafe_size;
  buffer__unsafe_offset=__temp568v__unsafe_offset;
  buffer__unsafe_align=__temp568v__unsafe_align;
  }
  len__temp555v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp570v__);
  __temp571v=__temp570v__;
  length=__temp571v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp569v____temp470v__);
  if(__temp569v____temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1287v=buffer__unsafe_ptr;
  *__temp1288v=buffer__unsafe_size;
  *__temp1289v=buffer__unsafe_offset;
  *__temp1290v=buffer__unsafe_align;
  *__temp1291v=buffer__unsafe_ptr;
  *__temp1292v=buffer__unsafe_size;
  *__temp1293v=buffer__unsafe_offset;
  *__temp1294v=buffer__unsafe_align;
  *__temp1295v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1296v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1297v) {
  *__temp1297v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1298v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1298v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1299v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1299v=z;
}

static inline __attribute__((always_inline)) int resize__temp507v(char** __temp1300v, uint64_t* __temp1301v, uint16_t* __temp1302v, uint16_t* __temp1303v, uint64_t size, char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v) {
  char* buffer__unsafe_ptr=*__temp1300v;
  uint64_t buffer__unsafe_size=*__temp1301v;
  uint16_t buffer__unsafe_offset=*__temp1302v;
  uint16_t buffer__unsafe_align=*__temp1303v;
  char __temp508v__=0;
  uint64_t __temp509v=0;
  char __temp510v__=0;
  uint64_t __temp511v=0;
  uint64_t __temp513v=0;
  char __temp514v__=0;
  uint64_t __temp515v__=0;
  uint64_t __temp516v=0;
  char __temp517v__=0;
  uint64_t __temp518v__=0;
  uint64_t __temp519v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t bytes=0;
  char* __temp522v__=0;
  char __temp523v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp508v__);
  if(__temp508v__){
  goto __temp_return;
  }
  __temp509v=0;
  eq__temp118v(size,__temp509v,&__temp510v__);
  if(__temp510v__){
  __temp511v=0;
  buffer__unsafe_size=__temp511v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp513v=0;
  eq__temp118v(buffer__unsafe_size,__temp513v,&__temp514v__);
  if(__temp514v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_offset,&__temp515v__);
  __temp516v=0;
  neq__temp142v(__temp515v__,__temp516v,&__temp517v__);
  if(__temp517v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp518v__);
  mul__temp194v(buffer__unsafe_size,__temp518v__,&__temp519v__);
  prev_bytes=__temp519v__;
  buffer__unsafe_size=size;
  nat__temp465v(buffer__unsafe_align,&__temp520v__);
  mul__temp194v(__temp520v__,size,&__temp521v__);
  bytes=__temp521v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp522v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp522v__;
  lt__temp247v(prev_bytes,bytes,&__temp523v__);
  if(__temp523v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1300v=buffer__unsafe_ptr;
  *__temp1301v=buffer__unsafe_size;
  *__temp1302v=buffer__unsafe_offset;
  *__temp1303v=buffer__unsafe_align;
  *__temp1304v=buffer__unsafe_ptr;
  *__temp1305v=buffer__unsafe_size;
  *__temp1306v=buffer__unsafe_offset;
  *__temp1307v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp557v(char** __temp1308v, uint64_t* __temp1309v, uint16_t* __temp1310v, uint16_t* __temp1311v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1308v=unsafe_ptr;
  *__temp1309v=unsafe_size;
  *__temp1310v=unsafe_offset;
  *__temp1311v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1312v) {
  *__temp1312v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1313v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1314v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1314v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1315v) {
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
  *__temp1315v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1316v, uint64_t* __temp1317v, uint64_t* __temp1318v, char* __temp1319v) {
  goto __temp_return;
  __temp_return:
  *__temp1316v=unsafe_ptr;
  *__temp1317v=dat__pos;
  *__temp1318v=dat__length;
  *__temp1319v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp597v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1320v, uint64_t* __temp1321v, uint64_t* __temp1322v, char* __temp1323v) {
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
  *__temp1320v=__temp604v__unsafe_ptr;
  *__temp1321v=__temp604v__dat__pos;
  *__temp1322v=__temp604v__dat__length;
  *__temp1323v=__temp604v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp629v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1324v, uint64_t* __temp1325v, uint64_t* __temp1326v, char* __temp1327v) {
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
  *__temp1324v=__temp634v__unsafe_ptr;
  *__temp1325v=__temp634v__dat__pos;
  *__temp1326v=__temp634v__dat__length;
  *__temp1327v=__temp634v__dat__first;
  
  return __temp_errcode;
}

int str__temp635v(const char* c, char** __temp1328v, uint64_t* __temp1329v, uint64_t* __temp1330v, char* __temp1331v) {
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
  *__temp1328v=__temp642v__unsafe_ptr;
  *__temp1329v=__temp642v__dat__pos;
  *__temp1330v=__temp642v__dat__length;
  *__temp1331v=__temp642v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp643v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1332v) {
  goto __temp_return;
  __temp_return:
  *__temp1332v=s__dat__length;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1333v) {
  int __temp221v__=0;
  uint64_t zero=0;
  char __temp222v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp221v__);
  zero=0;
  eq__temp118v(y,zero,&__temp222v__);
  if(__temp222v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1333v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp628v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1334v, uint64_t* __temp1335v, uint64_t* __temp1336v, char* __temp1337v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=other__unsafe_ptr;
  *__temp1335v=other__dat__pos;
  *__temp1336v=other__dat__length;
  *__temp1337v=other__dat__first;
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

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1339v, uint64_t* __temp1340v, uint16_t* __temp1341v, uint16_t* __temp1342v, uint64_t* __temp1343v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1344v, uint64_t* __temp1345v, uint64_t* __temp1346v, char* __temp1347v) {
  char* buf__unsafe_ptr=*__temp1339v;
  uint64_t buf__unsafe_size=*__temp1340v;
  uint16_t buf__unsafe_offset=*__temp1341v;
  uint16_t buf__unsafe_align=*__temp1342v;
  uint64_t pos=*__temp1343v;
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
  str__temp628v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
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
  *__temp1344v=__temp708v__unsafe_ptr;
  *__temp1345v=__temp708v__dat__pos;
  *__temp1346v=__temp708v__dat__length;
  *__temp1347v=__temp708v__dat__first;
  
  return __temp_errcode;
}

int copy__temp765v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, uint64_t* __temp1352v, const char* _other, char** __temp1353v, uint64_t* __temp1354v, uint64_t* __temp1355v, char* __temp1356v) {
  char* li__buffer__unsafe_ptr=*__temp1348v;
  uint64_t li__buffer__unsafe_size=*__temp1349v;
  uint16_t li__buffer__unsafe_offset=*__temp1350v;
  uint16_t li__buffer__unsafe_align=*__temp1351v;
  uint64_t li__length=*__temp1352v;
  char* __temp766v__unsafe_ptr=0;
  uint64_t __temp766v__dat__pos=0;
  uint64_t __temp766v__dat__length=0;
  char __temp766v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp767v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp768v__=0;
  uint64_t __temp769v__=0;
  uint64_t prev_length=0;
  uint64_t __temp770v__=0;
  char __temp771v__=0;
  uint64_t __temp772v=0;
  uint64_t __temp773v__=0;
  uint64_t __temp774v=0;
  uint64_t __temp775v__=0;
  uint64_t __temp776v__=0;
  char* __temp777v__unsafe_ptr=0;
  uint64_t __temp777v__unsafe_size=0;
  uint16_t __temp777v__unsafe_offset=0;
  uint16_t __temp777v__unsafe_align=0;
  char* __temp778v__unsafe_ptr=0;
  uint64_t __temp778v__dat__pos=0;
  uint64_t __temp778v__dat__length=0;
  char __temp778v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp635v(_other,&__temp766v__unsafe_ptr,&__temp766v__dat__pos,&__temp766v__dat__length,&__temp766v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp766v__unsafe_ptr;
  other__dat__pos=__temp766v__dat__pos;
  other__dat__length=__temp766v__dat__length;
  other__dat__first=__temp766v__dat__first;
  __temp767v=li__length;
  prev_prev_length=__temp767v;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp768v__);
  add__temp170v(li__length,__temp768v__,&__temp769v__);
  prev_length=__temp769v__;
  len__temp555v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__temp770v__);
  ge__temp319v(prev_length,__temp770v__,&__temp771v__);
  if(__temp771v__){
  __temp772v=2;
  __temp_errcode=div__temp220v(prev_length,__temp772v,&__temp773v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp774v=1;
  add__temp170v(__temp773v__,__temp774v,&__temp775v__);
  add__temp170v(prev_length,__temp775v__,&__temp776v__);
  __temp_errcode=resize__temp507v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__temp776v__,&__temp777v__unsafe_ptr,&__temp777v__unsafe_size,&__temp777v__unsafe_offset,&__temp777v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp777v__unsafe_ptr;
  li__buffer__unsafe_size=__temp777v__unsafe_size;
  li__buffer__unsafe_offset=__temp777v__unsafe_offset;
  li__buffer__unsafe_align=__temp777v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp700v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp778v__unsafe_ptr,&__temp778v__dat__pos,&__temp778v__dat__length,&__temp778v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=li__buffer__unsafe_ptr;
  *__temp1349v=li__buffer__unsafe_size;
  *__temp1350v=li__buffer__unsafe_offset;
  *__temp1351v=li__buffer__unsafe_align;
  *__temp1352v=li__length;
  *__temp1353v=__temp778v__unsafe_ptr;
  *__temp1354v=__temp778v__dat__pos;
  *__temp1355v=__temp778v__dat__length;
  *__temp1356v=__temp778v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1246v(char** __temp1357v, uint64_t* __temp1358v, uint64_t* __temp1359v, char* __temp1360v, char** __temp1361v, uint64_t* __temp1362v, uint64_t* __temp1363v, char* __temp1364v) {
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__unsafe_size=0;
  uint16_t __temp1249v__unsafe_offset=0;
  uint16_t __temp1249v__unsafe_align=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__buffer__unsafe_ptr=0;
  uint64_t __temp1251v__buffer__unsafe_size=0;
  uint16_t __temp1251v__buffer__unsafe_offset=0;
  uint16_t __temp1251v__buffer__unsafe_align=0;
  uint64_t __temp1251v__length=0;
  char __temp1252v____temp569v____temp470v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__dat__pos=0;
  uint64_t __temp1256v__dat__length=0;
  char __temp1256v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1258v__unsafe_ptr=0;
  uint64_t __temp1258v__dat__pos=0;
  uint64_t __temp1258v__dat__length=0;
  char __temp1258v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1247v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_offset,&__temp1249v__unsafe_align);
  __temp1250v__unsafe_ptr=__temp1249v__unsafe_ptr;
  __temp1250v__unsafe_size=__temp1249v__unsafe_size;
  __temp1250v__unsafe_offset=__temp1249v__unsafe_offset;
  __temp1250v__unsafe_align=__temp1249v__unsafe_align;
  __temp_errcode=list__temp563v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1251v__buffer__unsafe_ptr,&__temp1251v__buffer__unsafe_size,&__temp1251v__buffer__unsafe_offset,&__temp1251v__buffer__unsafe_align,&__temp1251v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1253v=100;
  __temp_errcode=resize__temp507v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp765v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__dat__pos,&__temp1256v__dat__length,&__temp1256v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1256v__dat__pos;
  s1__dat__length=__temp1256v__dat__length;
  s1__dat__first=__temp1256v__dat__first;
  __temp_errcode=copy__temp765v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,&__temp1250v__unsafe_size,__temp1257v,&__temp1258v__unsafe_ptr,&__temp1258v__dat__pos,&__temp1258v__dat__length,&__temp1258v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1258v__dat__pos;
  s2__dat__length=__temp1258v__dat__length;
  s2__dat__first=__temp1258v__dat__first;
  s1__unsafe_ptr=__temp1250v__unsafe_ptr;
  s2__unsafe_ptr=__temp1250v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s1__unsafe_ptr,&__temp1252v____temp569v____temp470v__);
  if(__temp1252v____temp569v____temp470v__){
  __temp1251v__buffer__unsafe_size=0;
  __temp1251v__buffer__unsafe_size=__temp1251v__buffer__unsafe_size;
  free__temp461v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1357v=s1__unsafe_ptr;
  *__temp1358v=s1__dat__pos;
  *__temp1359v=s1__dat__length;
  *__temp1360v=s1__dat__first;
  *__temp1361v=s2__unsafe_ptr;
  *__temp1362v=s2__dat__pos;
  *__temp1363v=s2__dat__length;
  *__temp1364v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1259v() {
  char* __temp1260v__s1__unsafe_ptr=0;
  uint64_t __temp1260v__s1__dat__pos=0;
  uint64_t __temp1260v__s1__dat__length=0;
  char __temp1260v__s1__dat__first=0;
  char* __temp1260v__s2__unsafe_ptr=0;
  uint64_t __temp1260v__s2__dat__pos=0;
  uint64_t __temp1260v__s2__dat__length=0;
  char __temp1260v__s2__dat__first=0;
  char __temp1261v____temp1252v____temp569v____temp470v__=0;
  uint64_t __temp1261v____temp1251v__buffer__unsafe_size=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1246v(&__temp1260v__s1__unsafe_ptr,&__temp1260v__s1__dat__pos,&__temp1260v__s1__dat__length,&__temp1260v__s1__dat__first,&__temp1260v__s2__unsafe_ptr,&__temp1260v__s2__dat__pos,&__temp1260v__s2__dat__length,&__temp1260v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1260v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1260v__s1__dat__pos;
  s__s1__dat__length=__temp1260v__s1__dat__length;
  s__s1__dat__first=__temp1260v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1260v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1260v__s2__dat__pos;
  s__s2__dat__length=__temp1260v__s2__dat__length;
  s__s2__dat__first=__temp1260v__s2__dat__first;
  print__temp742v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp742v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1260v__s1__unsafe_ptr,&__temp1261v____temp1252v____temp569v____temp470v__);
  if(__temp1261v____temp1252v____temp569v____temp470v__){
  __temp1261v____temp1251v__buffer__unsafe_size=0;
  __temp1261v____temp1251v__buffer__unsafe_size=__temp1261v____temp1251v__buffer__unsafe_size;
  free__temp461v(&__temp1260v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1259v();return 0;}