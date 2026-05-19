#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1257v="123";
const char* const __temp1259v="456";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1249v(char** __temp1266v, uint64_t* __temp1267v, uint16_t* __temp1268v, uint16_t* __temp1269v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1266v=unsafe_ptr;
  *__temp1267v=unsafe_size;
  *__temp1268v=unsafe_offset;
  *__temp1269v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1270v) {
  goto __temp_return;
  __temp_return:
  *__temp1270v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1271v) {
  int value=0;
  *__temp1271v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1272v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1272v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1273v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp95v__;
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1275v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1275v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1276v) {
  char* allocated=*__temp1276v;
  if(allocated){
  free(allocated);
  }
  *__temp1276v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1278v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1278v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1279v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1280v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1281v) {
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
  *__temp1281v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1282v, uint64_t* __temp1283v, uint16_t* __temp1284v, uint16_t* __temp1285v, uint64_t size, char** __temp1286v, uint64_t* __temp1287v, uint16_t* __temp1288v, uint16_t* __temp1289v) {
  char* buffer__unsafe_ptr=*__temp1282v;
  uint64_t buffer__unsafe_size=*__temp1283v;
  uint16_t buffer__unsafe_offset=*__temp1284v;
  uint16_t buffer__unsafe_align=*__temp1285v;
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
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_offset;
  *__temp1285v=buffer__unsafe_align;
  *__temp1286v=__temp485v__unsafe_ptr;
  *__temp1287v=__temp485v__unsafe_size;
  *__temp1288v=__temp485v__unsafe_offset;
  *__temp1289v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int list__temp558v(char** __temp1290v, uint64_t* __temp1291v, uint16_t* __temp1292v, uint16_t* __temp1293v, char** __temp1294v, uint64_t* __temp1295v, uint16_t* __temp1296v, uint16_t* __temp1297v, uint64_t* __temp1298v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  uint64_t buffer__unsafe_size=*__temp1291v;
  uint16_t buffer__unsafe_offset=*__temp1292v;
  uint16_t buffer__unsafe_align=*__temp1293v;
  uint64_t __temp559v=0;
  uint64_t __temp560v__=0;
  char __temp561v__=0;
  uint64_t __temp562v=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char __temp564v____temp475v__=0;
  uint64_t __temp565v__=0;
  uint64_t __temp566v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp559v=0;
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp560v__);
  eq__temp118v(__temp559v,__temp560v__,&__temp561v__);
  if(__temp561v__){
  __temp562v=1;
  __temp_errcode=alloc__temp473v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp562v,&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp563v__unsafe_ptr;
  buffer__unsafe_size=__temp563v__unsafe_size;
  buffer__unsafe_offset=__temp563v__unsafe_offset;
  buffer__unsafe_align=__temp563v__unsafe_align;
  }
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp565v__);
  __temp566v=__temp565v__;
  length=__temp566v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp564v____temp475v__);
  if(__temp564v____temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_offset;
  *__temp1293v=buffer__unsafe_align;
  *__temp1294v=buffer__unsafe_ptr;
  *__temp1295v=buffer__unsafe_size;
  *__temp1296v=buffer__unsafe_offset;
  *__temp1297v=buffer__unsafe_align;
  *__temp1298v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1299v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1299v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1300v) {
  *__temp1300v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1301v) {
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
  *__temp1301v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1302v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1303v, uint64_t* __temp1304v, uint16_t* __temp1305v, uint16_t* __temp1306v, uint64_t size, char** __temp1307v, uint64_t* __temp1308v, uint16_t* __temp1309v, uint16_t* __temp1310v) {
  char* buffer__unsafe_ptr=*__temp1303v;
  uint64_t buffer__unsafe_size=*__temp1304v;
  uint16_t buffer__unsafe_offset=*__temp1305v;
  uint16_t buffer__unsafe_align=*__temp1306v;
  char __temp517v__=0;
  uint64_t __temp518v=0;
  char __temp519v__=0;
  uint64_t __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  uint64_t bytes=0;
  char* __temp524v__=0;
  char __temp525v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp517v__);
  if(__temp517v__){
  goto __temp_return;
  }
  __temp518v=0;
  eq__temp118v(buffer__unsafe_size,__temp518v,&__temp519v__);
  if(__temp519v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp520v__);
  mul__temp194v(buffer__unsafe_size,__temp520v__,&__temp521v__);
  prev_bytes=__temp521v__;
  buffer__unsafe_size=size;
  nat__temp470v(buffer__unsafe_align,&__temp522v__);
  mul__temp194v(__temp522v__,size,&__temp523v__);
  bytes=__temp523v__;
  __temp_errcode=realloc__temp462v(buffer__unsafe_ptr,bytes,&__temp524v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp524v__;
  lt__temp247v(prev_bytes,bytes,&__temp525v__);
  if(__temp525v__){
  zero__temp467v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=buffer__unsafe_ptr;
  *__temp1304v=buffer__unsafe_size;
  *__temp1305v=buffer__unsafe_offset;
  *__temp1306v=buffer__unsafe_align;
  *__temp1307v=buffer__unsafe_ptr;
  *__temp1308v=buffer__unsafe_size;
  *__temp1309v=buffer__unsafe_offset;
  *__temp1310v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1311v, uint64_t* __temp1312v, uint16_t* __temp1313v, uint16_t* __temp1314v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1311v=unsafe_ptr;
  *__temp1312v=unsafe_size;
  *__temp1313v=unsafe_offset;
  *__temp1314v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1315v) {
  *__temp1315v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1316v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1317v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1317v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1318v) {
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
  *__temp1318v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1319v, uint64_t* __temp1320v, uint64_t* __temp1321v, char* __temp1322v) {
  goto __temp_return;
  __temp_return:
  *__temp1319v=unsafe_ptr;
  *__temp1320v=dat__pos;
  *__temp1321v=dat__length;
  *__temp1322v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1323v, uint64_t* __temp1324v, uint64_t* __temp1325v, char* __temp1326v) {
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
  *__temp1323v=__temp601v__unsafe_ptr;
  *__temp1324v=__temp601v__dat__pos;
  *__temp1325v=__temp601v__dat__length;
  *__temp1326v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1327v, uint64_t* __temp1328v, uint64_t* __temp1329v, char* __temp1330v) {
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
  *__temp1327v=__temp631v__unsafe_ptr;
  *__temp1328v=__temp631v__dat__pos;
  *__temp1329v=__temp631v__dat__length;
  *__temp1330v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1331v, uint64_t* __temp1332v, uint64_t* __temp1333v, char* __temp1334v) {
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
  *__temp1331v=__temp639v__unsafe_ptr;
  *__temp1332v=__temp639v__dat__pos;
  *__temp1333v=__temp639v__dat__length;
  *__temp1334v=__temp639v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp640v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1335v) {
  goto __temp_return;
  __temp_return:
  *__temp1335v=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__temp146v(char* x, char* y, char* __temp1336v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1336v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1337v) {
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
  *__temp1337v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp625v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1338v, uint64_t* __temp1339v, uint64_t* __temp1340v, char* __temp1341v) {
  goto __temp_return;
  __temp_return:
  *__temp1338v=other__unsafe_ptr;
  *__temp1339v=other__dat__pos;
  *__temp1340v=other__dat__length;
  *__temp1341v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1342v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1342v=z;
}

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1343v, uint64_t* __temp1344v, uint16_t* __temp1345v, uint16_t* __temp1346v, uint64_t* __temp1347v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1348v, uint64_t* __temp1349v, uint64_t* __temp1350v, char* __temp1351v) {
  char* buf__unsafe_ptr=*__temp1343v;
  uint64_t buf__unsafe_size=*__temp1344v;
  uint16_t buf__unsafe_offset=*__temp1345v;
  uint16_t buf__unsafe_align=*__temp1346v;
  uint64_t pos=*__temp1347v;
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
  str__temp625v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1343v=buf__unsafe_ptr;
  *__temp1344v=buf__unsafe_size;
  *__temp1345v=buf__unsafe_offset;
  *__temp1346v=buf__unsafe_align;
  *__temp1347v=pos;
  *__temp1348v=__temp708v__unsafe_ptr;
  *__temp1349v=__temp708v__dat__pos;
  *__temp1350v=__temp708v__dat__length;
  *__temp1351v=__temp708v__dat__first;
  
  return __temp_errcode;
}

int copy__temp766v(char** __temp1352v, uint64_t* __temp1353v, uint16_t* __temp1354v, uint16_t* __temp1355v, uint64_t* __temp1356v, const char* _other, char** __temp1357v, uint64_t* __temp1358v, uint64_t* __temp1359v, char* __temp1360v) {
  char* li__buffer__unsafe_ptr=*__temp1352v;
  uint64_t li__buffer__unsafe_size=*__temp1353v;
  uint16_t li__buffer__unsafe_offset=*__temp1354v;
  uint16_t li__buffer__unsafe_align=*__temp1355v;
  uint64_t li__length=*__temp1356v;
  char* __temp767v__unsafe_ptr=0;
  uint64_t __temp767v__dat__pos=0;
  uint64_t __temp767v__dat__length=0;
  char __temp767v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp768v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp769v__=0;
  uint64_t __temp770v__=0;
  uint64_t prev_length=0;
  char __temp771v__=0;
  uint64_t __temp772v__=0;
  char __temp773v__=0;
  uint64_t __temp774v=0;
  uint64_t __temp775v__=0;
  uint64_t __temp776v=0;
  uint64_t __temp777v__=0;
  uint64_t __temp778v__=0;
  char* __temp779v__unsafe_ptr=0;
  uint64_t __temp779v__unsafe_size=0;
  uint16_t __temp779v__unsafe_offset=0;
  uint16_t __temp779v__unsafe_align=0;
  char* __temp780v__unsafe_ptr=0;
  uint64_t __temp780v__dat__pos=0;
  uint64_t __temp780v__dat__length=0;
  char __temp780v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(_other,&__temp767v__unsafe_ptr,&__temp767v__dat__pos,&__temp767v__dat__length,&__temp767v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp767v__unsafe_ptr;
  other__dat__pos=__temp767v__dat__pos;
  other__dat__length=__temp767v__dat__length;
  other__dat__first=__temp767v__dat__first;
  __temp768v=li__length;
  prev_prev_length=__temp768v;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp769v__);
  add__temp170v(li__length,__temp769v__,&__temp770v__);
  prev_length=__temp770v__;
  eq__temp146v(other__unsafe_ptr,li__buffer__unsafe_ptr,&__temp771v__);
  if(__temp771v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  len__temp557v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__temp772v__);
  ge__temp319v(prev_length,__temp772v__,&__temp773v__);
  if(__temp773v__){
  __temp774v=2;
  __temp_errcode=div__temp220v(prev_length,__temp774v,&__temp775v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp776v=1;
  add__temp170v(__temp775v__,__temp776v,&__temp777v__);
  add__temp170v(prev_length,__temp777v__,&__temp778v__);
  __temp_errcode=resize__temp516v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__temp778v__,&__temp779v__unsafe_ptr,&__temp779v__unsafe_size,&__temp779v__unsafe_offset,&__temp779v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp779v__unsafe_ptr;
  li__buffer__unsafe_size=__temp779v__unsafe_size;
  li__buffer__unsafe_offset=__temp779v__unsafe_offset;
  li__buffer__unsafe_align=__temp779v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp700v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp780v__unsafe_ptr,&__temp780v__dat__pos,&__temp780v__dat__length,&__temp780v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1352v=li__buffer__unsafe_ptr;
  *__temp1353v=li__buffer__unsafe_size;
  *__temp1354v=li__buffer__unsafe_offset;
  *__temp1355v=li__buffer__unsafe_align;
  *__temp1356v=li__length;
  *__temp1357v=__temp780v__unsafe_ptr;
  *__temp1358v=__temp780v__dat__pos;
  *__temp1359v=__temp780v__dat__length;
  *__temp1360v=__temp780v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1248v(char** __temp1361v, uint64_t* __temp1362v, uint64_t* __temp1363v, char* __temp1364v, char** __temp1365v, uint64_t* __temp1366v, uint64_t* __temp1367v, char* __temp1368v) {
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  char* __temp1253v__buffer__unsafe_ptr=0;
  uint64_t __temp1253v__buffer__unsafe_size=0;
  uint16_t __temp1253v__buffer__unsafe_offset=0;
  uint16_t __temp1253v__buffer__unsafe_align=0;
  uint64_t __temp1253v__length=0;
  char __temp1254v____temp564v____temp475v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint16_t __temp1256v__unsafe_offset=0;
  uint16_t __temp1256v__unsafe_align=0;
  char* __temp1258v__unsafe_ptr=0;
  uint64_t __temp1258v__dat__pos=0;
  uint64_t __temp1258v__dat__length=0;
  char __temp1258v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__dat__pos=0;
  uint64_t __temp1260v__dat__length=0;
  char __temp1260v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp_errcode=list__temp558v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,&__temp1253v__buffer__unsafe_ptr,&__temp1253v__buffer__unsafe_size,&__temp1253v__buffer__unsafe_offset,&__temp1253v__buffer__unsafe_align,&__temp1253v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=100;
  __temp_errcode=resize__temp516v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_offset,&__temp1256v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp766v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,&__temp1252v__unsafe_size,__temp1257v,&__temp1258v__unsafe_ptr,&__temp1258v__dat__pos,&__temp1258v__dat__length,&__temp1258v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1258v__dat__pos;
  s1__dat__length=__temp1258v__dat__length;
  s1__dat__first=__temp1258v__dat__first;
  __temp_errcode=copy__temp766v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,&__temp1252v__unsafe_size,__temp1259v,&__temp1260v__unsafe_ptr,&__temp1260v__dat__pos,&__temp1260v__dat__length,&__temp1260v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1260v__dat__pos;
  s2__dat__length=__temp1260v__dat__length;
  s2__dat__first=__temp1260v__dat__first;
  s1__unsafe_ptr=__temp1252v__unsafe_ptr;
  s2__unsafe_ptr=__temp1252v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s1__unsafe_ptr,&__temp1254v____temp564v____temp475v__);
  if(__temp1254v____temp564v____temp475v__){
  __temp1253v__buffer__unsafe_size=0;
  __temp1253v__buffer__unsafe_size=__temp1253v__buffer__unsafe_size;
  s1__unsafe_ptr=s1__unsafe_ptr;
  free__temp466v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1361v=s1__unsafe_ptr;
  *__temp1362v=s1__dat__pos;
  *__temp1363v=s1__dat__length;
  *__temp1364v=s1__dat__first;
  *__temp1365v=s2__unsafe_ptr;
  *__temp1366v=s2__dat__pos;
  *__temp1367v=s2__dat__length;
  *__temp1368v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1261v() {
  char* __temp1262v__s1__unsafe_ptr=0;
  uint64_t __temp1262v__s1__dat__pos=0;
  uint64_t __temp1262v__s1__dat__length=0;
  char __temp1262v__s1__dat__first=0;
  char* __temp1262v__s2__unsafe_ptr=0;
  uint64_t __temp1262v__s2__dat__pos=0;
  uint64_t __temp1262v__s2__dat__length=0;
  char __temp1262v__s2__dat__first=0;
  char __temp1263v____temp1254v____temp564v____temp475v__=0;
  uint64_t __temp1263v____temp1253v__buffer__unsafe_size=0;
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
  __temp_errcode=test__temp1248v(&__temp1262v__s1__unsafe_ptr,&__temp1262v__s1__dat__pos,&__temp1262v__s1__dat__length,&__temp1262v__s1__dat__first,&__temp1262v__s2__unsafe_ptr,&__temp1262v__s2__dat__pos,&__temp1262v__s2__dat__length,&__temp1262v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1262v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1262v__s1__dat__pos;
  s__s1__dat__length=__temp1262v__s1__dat__length;
  s__s1__dat__first=__temp1262v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1262v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1262v__s2__dat__pos;
  s__s2__dat__length=__temp1262v__s2__dat__length;
  s__s2__dat__first=__temp1262v__s2__dat__first;
  print__temp742v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp742v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1262v__s1__unsafe_ptr,&__temp1263v____temp1254v____temp564v____temp475v__);
  if(__temp1263v____temp1254v____temp564v____temp475v__){
  __temp1263v____temp1253v__buffer__unsafe_size=0;
  __temp1263v____temp1253v__buffer__unsafe_size=__temp1263v____temp1253v__buffer__unsafe_size;
  __temp1262v__s1__unsafe_ptr=__temp1262v__s1__unsafe_ptr;
  free__temp466v(&__temp1262v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1261v();return 0;}