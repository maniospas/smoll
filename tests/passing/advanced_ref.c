#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1258v="456";
const char* const __temp365v="\n";
const char* const __temp1256v="123";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1248v(char** __temp1265v, uint64_t* __temp1266v, uint16_t* __temp1267v, uint16_t* __temp1268v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1265v=unsafe_ptr;
  *__temp1266v=unsafe_size;
  *__temp1267v=unsafe_offset;
  *__temp1268v=unsafe_align;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1272v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1273v) {
  char* allocated=*__temp1273v;
  if(allocated){
  free(allocated);
  }
  *__temp1273v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1274v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1275v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1275v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1276v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1277v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1278v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1279v) {
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
  *__temp1279v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1280v, uint64_t* __temp1281v, uint16_t* __temp1282v, uint16_t* __temp1283v, uint64_t size, char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v) {
  char* buffer__unsafe_ptr=*__temp1280v;
  uint64_t buffer__unsafe_size=*__temp1281v;
  uint16_t buffer__unsafe_offset=*__temp1282v;
  uint16_t buffer__unsafe_align=*__temp1283v;
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
  *__temp1280v=buffer__unsafe_ptr;
  *__temp1281v=buffer__unsafe_size;
  *__temp1282v=buffer__unsafe_offset;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=__temp486v__unsafe_ptr;
  *__temp1285v=__temp486v__unsafe_size;
  *__temp1286v=__temp486v__unsafe_offset;
  *__temp1287v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1288v) {
  goto __temp_return;
  __temp_return:
  *__temp1288v=buffer__unsafe_size;
}

int list__temp560v(char** __temp1289v, uint64_t* __temp1290v, uint16_t* __temp1291v, uint16_t* __temp1292v, char** __temp1293v, uint64_t* __temp1294v, uint16_t* __temp1295v, uint16_t* __temp1296v, uint64_t* __temp1297v) {
  char* _buffer__unsafe_ptr=*__temp1289v;
  uint64_t _buffer__unsafe_size=*__temp1290v;
  uint16_t _buffer__unsafe_offset=*__temp1291v;
  uint16_t _buffer__unsafe_align=*__temp1292v;
  uint64_t __temp561v=0;
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  uint64_t __temp563v____temp475v=0;
  char __temp563v____temp476v__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __temp564v__=0;
  uint64_t __temp565v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp561v=1;
  __temp_errcode=alloc__temp473v(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__temp561v,&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp562v__unsafe_ptr;
  buffer__unsafe_size=__temp562v__unsafe_size;
  buffer__unsafe_offset=__temp562v__unsafe_offset;
  buffer__unsafe_align=__temp562v__unsafe_align;
  len__temp559v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp564v__);
  __temp565v=__temp564v__;
  length=__temp565v;
  goto __temp_return;
  
  __temp_failure:__temp563v____temp475v=0;
  neq__temp142v(buffer__unsafe_size,__temp563v____temp475v,&__temp563v____temp476v__);
  if(__temp563v____temp476v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1289v=_buffer__unsafe_ptr;
  *__temp1290v=_buffer__unsafe_size;
  *__temp1291v=_buffer__unsafe_offset;
  *__temp1292v=_buffer__unsafe_align;
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_offset;
  *__temp1296v=buffer__unsafe_align;
  *__temp1297v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1298v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1299v) {
  *__temp1299v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1300v) {
  char* new_allocated=0;
  char __temp463v__=0;
  char __temp464v__=0;
  char* __temp465v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__temp412v(new_allocated,&__temp463v__);
  not__temp26v(__temp463v__,&__temp464v__);
  if(__temp464v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  allocated=new_allocated;
  attach_type__temp20v(new_allocated,allocated,&__temp465v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1300v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1301v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1301v=z;
}

static inline __attribute__((always_inline)) int resize__temp518v(char** __temp1302v, uint64_t* __temp1303v, uint16_t* __temp1304v, uint16_t* __temp1305v, uint64_t size, char** __temp1306v, uint64_t* __temp1307v, uint16_t* __temp1308v, uint16_t* __temp1309v) {
  char* buffer__unsafe_ptr=*__temp1302v;
  uint64_t buffer__unsafe_size=*__temp1303v;
  uint16_t buffer__unsafe_offset=*__temp1304v;
  uint16_t buffer__unsafe_align=*__temp1305v;
  char __temp519v__=0;
  uint64_t __temp520v=0;
  char __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp524v__=0;
  uint64_t __temp525v__=0;
  uint64_t bytes=0;
  char* __temp526v__=0;
  char __temp527v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp519v__);
  if(__temp519v__){
  goto __temp_return;
  }
  __temp520v=0;
  eq__temp118v(buffer__unsafe_size,__temp520v,&__temp521v__);
  if(__temp521v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(buffer__unsafe_size,__temp522v__,&__temp523v__);
  prev_bytes=__temp523v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp524v__);
  mul__temp194v(__temp524v__,size,&__temp525v__);
  bytes=__temp525v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp526v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp526v__;
  lt__temp247v(prev_bytes,bytes,&__temp527v__);
  if(__temp527v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1302v=buffer__unsafe_ptr;
  *__temp1303v=buffer__unsafe_size;
  *__temp1304v=buffer__unsafe_offset;
  *__temp1305v=buffer__unsafe_align;
  *__temp1306v=buffer__unsafe_ptr;
  *__temp1307v=buffer__unsafe_size;
  *__temp1308v=buffer__unsafe_offset;
  *__temp1309v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1310v, uint64_t* __temp1311v, uint16_t* __temp1312v, uint16_t* __temp1313v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1310v=unsafe_ptr;
  *__temp1311v=unsafe_size;
  *__temp1312v=unsafe_offset;
  *__temp1313v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1314v) {
  *__temp1314v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1315v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1316v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1316v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1317v) {
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
  *__temp1317v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1318v, uint64_t* __temp1319v, uint64_t* __temp1320v, char* __temp1321v) {
  goto __temp_return;
  __temp_return:
  *__temp1318v=unsafe_ptr;
  *__temp1319v=dat__pos;
  *__temp1320v=dat__length;
  *__temp1321v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1322v, uint64_t* __temp1323v, uint64_t* __temp1324v, char* __temp1325v) {
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
  *__temp1322v=__temp600v__unsafe_ptr;
  *__temp1323v=__temp600v__dat__pos;
  *__temp1324v=__temp600v__dat__length;
  *__temp1325v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1326v, uint64_t* __temp1327v, uint64_t* __temp1328v, char* __temp1329v) {
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
  *__temp1326v=__temp630v__unsafe_ptr;
  *__temp1327v=__temp630v__dat__pos;
  *__temp1328v=__temp630v__dat__length;
  *__temp1329v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1330v, uint64_t* __temp1331v, uint64_t* __temp1332v, char* __temp1333v) {
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
  *__temp1330v=__temp638v__unsafe_ptr;
  *__temp1331v=__temp638v__dat__pos;
  *__temp1332v=__temp638v__dat__length;
  *__temp1333v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp639v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1334v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__temp146v(char* x, char* y, char* __temp1335v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1335v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1336v) {
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
  *__temp1336v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp624v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1337v, uint64_t* __temp1338v, uint64_t* __temp1339v, char* __temp1340v) {
  goto __temp_return;
  __temp_return:
  *__temp1337v=other__unsafe_ptr;
  *__temp1338v=other__dat__pos;
  *__temp1339v=other__dat__length;
  *__temp1340v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1341v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

static inline __attribute__((always_inline)) int copy__temp699v(char** __temp1342v, uint64_t* __temp1343v, uint16_t* __temp1344v, uint16_t* __temp1345v, uint64_t* __temp1346v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1347v, uint64_t* __temp1348v, uint64_t* __temp1349v, char* __temp1350v) {
  char* buf__unsafe_ptr=*__temp1342v;
  uint64_t buf__unsafe_size=*__temp1343v;
  uint16_t buf__unsafe_offset=*__temp1344v;
  uint16_t buf__unsafe_align=*__temp1345v;
  uint64_t pos=*__temp1346v;
  char* __temp700v__unsafe_ptr=0;
  uint64_t __temp700v__dat__pos=0;
  uint64_t __temp700v__dat__length=0;
  char __temp700v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp701v__=0;
  uint64_t __temp702v__=0;
  uint64_t next_pos=0;
  uint64_t __temp703v__=0;
  char __temp704v__=0;
  uint64_t __temp705v=0;
  uint64_t __temp706v__=0;
  uint64_t prev_pos=0;
  char* __temp707v__unsafe_ptr=0;
  uint64_t __temp707v__dat__pos=0;
  uint64_t __temp707v__dat__length=0;
  char __temp707v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp624v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp700v__unsafe_ptr,&__temp700v__dat__pos,&__temp700v__dat__length,&__temp700v__dat__first);
  other__unsafe_ptr=__temp700v__unsafe_ptr;
  other__dat__pos=__temp700v__dat__pos;
  other__dat__length=__temp700v__dat__length;
  other__dat__first=__temp700v__dat__first;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp701v__);
  add__temp170v(pos,__temp701v__,&__temp702v__);
  next_pos=__temp702v__;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp703v__);
  gt__temp271v(next_pos,__temp703v__,&__temp704v__);
  if(__temp704v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp705v=0;
  add__temp170v(pos,__temp705v,&__temp706v__);
  prev_pos=__temp706v__;
  pos=next_pos;
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp707v__unsafe_ptr,&__temp707v__dat__pos,&__temp707v__dat__length,&__temp707v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1342v=buf__unsafe_ptr;
  *__temp1343v=buf__unsafe_size;
  *__temp1344v=buf__unsafe_offset;
  *__temp1345v=buf__unsafe_align;
  *__temp1346v=pos;
  *__temp1347v=__temp707v__unsafe_ptr;
  *__temp1348v=__temp707v__dat__pos;
  *__temp1349v=__temp707v__dat__length;
  *__temp1350v=__temp707v__dat__first;
  
  return __temp_errcode;
}

int copy__temp765v(char** __temp1351v, uint64_t* __temp1352v, uint16_t* __temp1353v, uint16_t* __temp1354v, uint64_t* __temp1355v, const char* _other, char** __temp1356v, uint64_t* __temp1357v, uint64_t* __temp1358v, char* __temp1359v) {
  char* li__buffer__unsafe_ptr=*__temp1351v;
  uint64_t li__buffer__unsafe_size=*__temp1352v;
  uint16_t li__buffer__unsafe_offset=*__temp1353v;
  uint16_t li__buffer__unsafe_align=*__temp1354v;
  uint64_t li__length=*__temp1355v;
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
  char __temp770v__=0;
  uint64_t __temp771v__=0;
  char __temp772v__=0;
  uint64_t __temp773v=0;
  uint64_t __temp774v__=0;
  uint64_t __temp775v=0;
  uint64_t __temp776v__=0;
  uint64_t __temp777v__=0;
  char* __temp778v__unsafe_ptr=0;
  uint64_t __temp778v__unsafe_size=0;
  uint16_t __temp778v__unsafe_offset=0;
  uint16_t __temp778v__unsafe_align=0;
  char* __temp779v__unsafe_ptr=0;
  uint64_t __temp779v__dat__pos=0;
  uint64_t __temp779v__dat__length=0;
  char __temp779v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(_other,&__temp766v__unsafe_ptr,&__temp766v__dat__pos,&__temp766v__dat__length,&__temp766v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp766v__unsafe_ptr;
  other__dat__pos=__temp766v__dat__pos;
  other__dat__length=__temp766v__dat__length;
  other__dat__first=__temp766v__dat__first;
  __temp767v=li__length;
  prev_prev_length=__temp767v;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp768v__);
  add__temp170v(li__length,__temp768v__,&__temp769v__);
  prev_length=__temp769v__;
  eq__temp146v(other__unsafe_ptr,li__buffer__unsafe_ptr,&__temp770v__);
  if(__temp770v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  len__temp559v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__temp771v__);
  ge__temp319v(prev_length,__temp771v__,&__temp772v__);
  if(__temp772v__){
  __temp773v=2;
  __temp_errcode=div__temp220v(prev_length,__temp773v,&__temp774v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp775v=1;
  add__temp170v(__temp774v__,__temp775v,&__temp776v__);
  add__temp170v(prev_length,__temp776v__,&__temp777v__);
  __temp_errcode=resize__temp518v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__temp777v__,&__temp778v__unsafe_ptr,&__temp778v__unsafe_size,&__temp778v__unsafe_offset,&__temp778v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp778v__unsafe_ptr;
  li__buffer__unsafe_size=__temp778v__unsafe_size;
  li__buffer__unsafe_offset=__temp778v__unsafe_offset;
  li__buffer__unsafe_align=__temp778v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp699v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp779v__unsafe_ptr,&__temp779v__dat__pos,&__temp779v__dat__length,&__temp779v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1351v=li__buffer__unsafe_ptr;
  *__temp1352v=li__buffer__unsafe_size;
  *__temp1353v=li__buffer__unsafe_offset;
  *__temp1354v=li__buffer__unsafe_align;
  *__temp1355v=li__length;
  *__temp1356v=__temp779v__unsafe_ptr;
  *__temp1357v=__temp779v__dat__pos;
  *__temp1358v=__temp779v__dat__length;
  *__temp1359v=__temp779v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1247v(char** __temp1360v, uint64_t* __temp1361v, uint64_t* __temp1362v, char* __temp1363v, char** __temp1364v, uint64_t* __temp1365v, uint64_t* __temp1366v, char* __temp1367v) {
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__buffer__unsafe_ptr=0;
  uint64_t __temp1252v__buffer__unsafe_size=0;
  uint16_t __temp1252v__buffer__unsafe_offset=0;
  uint16_t __temp1252v__buffer__unsafe_align=0;
  uint64_t __temp1252v__length=0;
  uint64_t __temp1253v____temp563v____temp475v=0;
  char __temp1253v____temp563v____temp476v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1254v=0;
  char* __temp1255v__unsafe_ptr=0;
  uint64_t __temp1255v__unsafe_size=0;
  uint16_t __temp1255v__unsafe_offset=0;
  uint16_t __temp1255v__unsafe_align=0;
  char* __temp1257v__unsafe_ptr=0;
  uint64_t __temp1257v__dat__pos=0;
  uint64_t __temp1257v__dat__length=0;
  char __temp1257v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1259v__unsafe_ptr=0;
  uint64_t __temp1259v__dat__pos=0;
  uint64_t __temp1259v__dat__length=0;
  char __temp1259v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1248v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_offset=__temp1250v__unsafe_offset;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp_errcode=list__temp560v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__buffer__unsafe_size=__temp1252v__buffer__unsafe_size;
  mem__length=__temp1252v__length;
  __temp1254v=100;
  __temp_errcode=resize__temp518v(&__temp1251v__unsafe_ptr,&mem__buffer__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1254v,&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_offset,&__temp1255v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp765v(&__temp1251v__unsafe_ptr,&mem__buffer__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&mem__length,__temp1256v,&__temp1257v__unsafe_ptr,&__temp1257v__dat__pos,&__temp1257v__dat__length,&__temp1257v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1257v__dat__pos;
  s1__dat__length=__temp1257v__dat__length;
  s1__dat__first=__temp1257v__dat__first;
  __temp_errcode=copy__temp765v(&__temp1251v__unsafe_ptr,&mem__buffer__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&mem__length,__temp1258v,&__temp1259v__unsafe_ptr,&__temp1259v__dat__pos,&__temp1259v__dat__length,&__temp1259v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1259v__dat__pos;
  s2__dat__length=__temp1259v__dat__length;
  s2__dat__first=__temp1259v__dat__first;
  s1__unsafe_ptr=__temp1251v__unsafe_ptr;
  s2__unsafe_ptr=__temp1251v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:__temp1253v____temp563v____temp475v=0;
  neq__temp142v(__temp1252v__buffer__unsafe_size,__temp1253v____temp563v____temp475v,&__temp1253v____temp563v____temp476v__);
  if(__temp1253v____temp563v____temp476v__){
  __temp1252v__buffer__unsafe_size=0;
  __temp1252v__buffer__unsafe_size=__temp1252v__buffer__unsafe_size;
  s1__unsafe_ptr=s1__unsafe_ptr;
  free__temp466v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1360v=s1__unsafe_ptr;
  *__temp1361v=s1__dat__pos;
  *__temp1362v=s1__dat__length;
  *__temp1363v=s1__dat__first;
  *__temp1364v=s2__unsafe_ptr;
  *__temp1365v=s2__dat__pos;
  *__temp1366v=s2__dat__length;
  *__temp1367v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1260v() {
  char* __temp1261v__s1__unsafe_ptr=0;
  uint64_t __temp1261v__s1__dat__pos=0;
  uint64_t __temp1261v__s1__dat__length=0;
  char __temp1261v__s1__dat__first=0;
  char* __temp1261v__s2__unsafe_ptr=0;
  uint64_t __temp1261v__s2__dat__pos=0;
  uint64_t __temp1261v__s2__dat__length=0;
  char __temp1261v__s2__dat__first=0;
  uint64_t __temp1262v____temp1253v____temp563v____temp475v=0;
  uint64_t __temp1262v____temp1252v__buffer__unsafe_size=0;
  char __temp1262v____temp1253v____temp563v____temp476v__=0;
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
  __temp_errcode=test__temp1247v(&__temp1261v__s1__unsafe_ptr,&__temp1261v__s1__dat__pos,&__temp1261v__s1__dat__length,&__temp1261v__s1__dat__first,&__temp1261v__s2__unsafe_ptr,&__temp1261v__s2__dat__pos,&__temp1261v__s2__dat__length,&__temp1261v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1261v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1261v__s1__dat__pos;
  s__s1__dat__length=__temp1261v__s1__dat__length;
  s__s1__dat__first=__temp1261v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1261v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1261v__s2__dat__pos;
  s__s2__dat__length=__temp1261v__s2__dat__length;
  s__s2__dat__first=__temp1261v__s2__dat__first;
  print__temp741v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp741v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:__temp1262v____temp1253v____temp563v____temp475v=0;
  neq__temp142v(__temp1262v____temp1252v__buffer__unsafe_size,__temp1262v____temp1253v____temp563v____temp475v,&__temp1262v____temp1253v____temp563v____temp476v__);
  if(__temp1262v____temp1253v____temp563v____temp476v__){
  __temp1262v____temp1252v__buffer__unsafe_size=0;
  __temp1262v____temp1252v__buffer__unsafe_size=__temp1262v____temp1252v__buffer__unsafe_size;
  __temp1261v__s1__unsafe_ptr=__temp1261v__s1__unsafe_ptr;
  free__temp466v(&__temp1261v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1260v();return 0;}