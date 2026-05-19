#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1261v="456";
const char* const __temp1259v="123";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1251v(char** __temp1268v, uint64_t* __temp1269v, uint16_t* __temp1270v, uint16_t* __temp1271v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1268v=unsafe_ptr;
  *__temp1269v=unsafe_size;
  *__temp1270v=unsafe_offset;
  *__temp1271v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1272v) {
  goto __temp_return;
  __temp_return:
  *__temp1272v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1273v) {
  int value=0;
  *__temp1273v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1274v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1274v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1275v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1275v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1276v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1277v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1278v) {
  char* allocated=*__temp1278v;
  if(allocated){
  free(allocated);
  }
  *__temp1278v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1279v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1280v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1280v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1281v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1282v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1283v) {
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
  *__temp1283v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v, uint64_t size, char** __temp1288v, uint64_t* __temp1289v, uint16_t* __temp1290v, uint16_t* __temp1291v) {
  char* buffer__unsafe_ptr=*__temp1284v;
  uint64_t buffer__unsafe_size=*__temp1285v;
  uint16_t buffer__unsafe_offset=*__temp1286v;
  uint16_t buffer__unsafe_align=*__temp1287v;
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
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_offset;
  *__temp1287v=buffer__unsafe_align;
  *__temp1288v=__temp485v__unsafe_ptr;
  *__temp1289v=__temp485v__unsafe_size;
  *__temp1290v=__temp485v__unsafe_offset;
  *__temp1291v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int list__temp565v(char** __temp1292v, uint64_t* __temp1293v, uint16_t* __temp1294v, uint16_t* __temp1295v, char** __temp1296v, uint64_t* __temp1297v, uint16_t* __temp1298v, uint16_t* __temp1299v, uint64_t* __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1292v;
  uint64_t buffer__unsafe_size=*__temp1293v;
  uint16_t buffer__unsafe_offset=*__temp1294v;
  uint16_t buffer__unsafe_align=*__temp1295v;
  uint64_t __temp566v=0;
  uint64_t __temp567v__=0;
  char __temp568v__=0;
  uint64_t __temp569v=0;
  char* __temp570v__unsafe_ptr=0;
  uint64_t __temp570v__unsafe_size=0;
  uint16_t __temp570v__unsafe_offset=0;
  uint16_t __temp570v__unsafe_align=0;
  char __temp571v____temp475v__=0;
  uint64_t __temp572v__=0;
  uint64_t __temp573v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp566v=0;
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp567v__);
  eq__temp118v(__temp566v,__temp567v__,&__temp568v__);
  if(__temp568v__){
  __temp569v=1;
  __temp_errcode=alloc__temp473v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp569v,&__temp570v__unsafe_ptr,&__temp570v__unsafe_size,&__temp570v__unsafe_offset,&__temp570v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp570v__unsafe_ptr;
  buffer__unsafe_size=__temp570v__unsafe_size;
  buffer__unsafe_offset=__temp570v__unsafe_offset;
  buffer__unsafe_align=__temp570v__unsafe_align;
  }
  len__temp557v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp572v__);
  __temp573v=__temp572v__;
  length=__temp573v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp571v____temp475v__);
  if(__temp571v____temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_offset;
  *__temp1295v=buffer__unsafe_align;
  *__temp1296v=buffer__unsafe_ptr;
  *__temp1297v=buffer__unsafe_size;
  *__temp1298v=buffer__unsafe_offset;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1301v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1301v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1302v) {
  *__temp1302v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1303v) {
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
  *__temp1303v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1304v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) int resize__temp516v(char** __temp1305v, uint64_t* __temp1306v, uint16_t* __temp1307v, uint16_t* __temp1308v, uint64_t size, char** __temp1309v, uint64_t* __temp1310v, uint16_t* __temp1311v, uint16_t* __temp1312v) {
  char* buffer__unsafe_ptr=*__temp1305v;
  uint64_t buffer__unsafe_size=*__temp1306v;
  uint16_t buffer__unsafe_offset=*__temp1307v;
  uint16_t buffer__unsafe_align=*__temp1308v;
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
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_offset;
  *__temp1308v=buffer__unsafe_align;
  *__temp1309v=buffer__unsafe_ptr;
  *__temp1310v=buffer__unsafe_size;
  *__temp1311v=buffer__unsafe_offset;
  *__temp1312v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1313v, uint64_t* __temp1314v, uint16_t* __temp1315v, uint16_t* __temp1316v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1313v=unsafe_ptr;
  *__temp1314v=unsafe_size;
  *__temp1315v=unsafe_offset;
  *__temp1316v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1317v) {
  *__temp1317v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1318v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1318v=z;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1319v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1319v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1320v) {
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
  *__temp1320v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1321v, uint64_t* __temp1322v, uint64_t* __temp1323v, char* __temp1324v) {
  goto __temp_return;
  __temp_return:
  *__temp1321v=unsafe_ptr;
  *__temp1322v=dat__pos;
  *__temp1323v=dat__length;
  *__temp1324v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1325v, uint64_t* __temp1326v, uint64_t* __temp1327v, char* __temp1328v) {
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
  *__temp1325v=__temp606v__unsafe_ptr;
  *__temp1326v=__temp606v__dat__pos;
  *__temp1327v=__temp606v__dat__length;
  *__temp1328v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1329v, uint64_t* __temp1330v, uint64_t* __temp1331v, char* __temp1332v) {
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
  *__temp1329v=__temp636v__unsafe_ptr;
  *__temp1330v=__temp636v__dat__pos;
  *__temp1331v=__temp636v__dat__length;
  *__temp1332v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1333v, uint64_t* __temp1334v, uint64_t* __temp1335v, char* __temp1336v) {
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
  *__temp1333v=__temp644v__unsafe_ptr;
  *__temp1334v=__temp644v__dat__pos;
  *__temp1335v=__temp644v__dat__length;
  *__temp1336v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1337v) {
  goto __temp_return;
  __temp_return:
  *__temp1337v=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__temp146v(char* x, char* y, char* __temp1338v) {
  char z=0;
  z=(x==y);
  goto __temp_return;
  __temp_return:
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1339v) {
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
  *__temp1339v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp630v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1340v, uint64_t* __temp1341v, uint64_t* __temp1342v, char* __temp1343v) {
  goto __temp_return;
  __temp_return:
  *__temp1340v=other__unsafe_ptr;
  *__temp1341v=other__dat__pos;
  *__temp1342v=other__dat__length;
  *__temp1343v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1344v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1344v=z;
}

static inline __attribute__((always_inline)) int copy__temp702v(char** __temp1345v, uint64_t* __temp1346v, uint16_t* __temp1347v, uint16_t* __temp1348v, uint64_t* __temp1349v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1350v, uint64_t* __temp1351v, uint64_t* __temp1352v, char* __temp1353v) {
  char* buf__unsafe_ptr=*__temp1345v;
  uint64_t buf__unsafe_size=*__temp1346v;
  uint16_t buf__unsafe_offset=*__temp1347v;
  uint16_t buf__unsafe_align=*__temp1348v;
  uint64_t pos=*__temp1349v;
  char* __temp703v__unsafe_ptr=0;
  uint64_t __temp703v__dat__pos=0;
  uint64_t __temp703v__dat__length=0;
  char __temp703v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp704v__=0;
  uint64_t __temp705v__=0;
  uint64_t next_pos=0;
  uint64_t __temp706v__=0;
  char __temp707v__=0;
  uint64_t __temp708v=0;
  uint64_t __temp709v__=0;
  uint64_t prev_pos=0;
  char* __temp710v__unsafe_ptr=0;
  uint64_t __temp710v__dat__pos=0;
  uint64_t __temp710v__dat__length=0;
  char __temp710v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp703v__unsafe_ptr,&__temp703v__dat__pos,&__temp703v__dat__length,&__temp703v__dat__first);
  other__unsafe_ptr=__temp703v__unsafe_ptr;
  other__dat__pos=__temp703v__dat__pos;
  other__dat__length=__temp703v__dat__length;
  other__dat__first=__temp703v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp704v__);
  add__temp170v(pos,__temp704v__,&__temp705v__);
  next_pos=__temp705v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp706v__);
  gt__temp271v(next_pos,__temp706v__,&__temp707v__);
  if(__temp707v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp708v=0;
  add__temp170v(pos,__temp708v,&__temp709v__);
  prev_pos=__temp709v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1345v=buf__unsafe_ptr;
  *__temp1346v=buf__unsafe_size;
  *__temp1347v=buf__unsafe_offset;
  *__temp1348v=buf__unsafe_align;
  *__temp1349v=pos;
  *__temp1350v=__temp710v__unsafe_ptr;
  *__temp1351v=__temp710v__dat__pos;
  *__temp1352v=__temp710v__dat__length;
  *__temp1353v=__temp710v__dat__first;
  
  return __temp_errcode;
}

int copy__temp768v(char** __temp1354v, uint64_t* __temp1355v, uint16_t* __temp1356v, uint16_t* __temp1357v, uint64_t* __temp1358v, const char* _other, char** __temp1359v, uint64_t* __temp1360v, uint64_t* __temp1361v, char* __temp1362v) {
  char* li__buffer__unsafe_ptr=*__temp1354v;
  uint64_t li__buffer__unsafe_size=*__temp1355v;
  uint16_t li__buffer__unsafe_offset=*__temp1356v;
  uint16_t li__buffer__unsafe_align=*__temp1357v;
  uint64_t li__length=*__temp1358v;
  char* __temp769v__unsafe_ptr=0;
  uint64_t __temp769v__dat__pos=0;
  uint64_t __temp769v__dat__length=0;
  char __temp769v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp770v=0;
  uint64_t prev_prev_length=0;
  uint64_t __temp771v__=0;
  uint64_t __temp772v__=0;
  uint64_t prev_length=0;
  char __temp773v__=0;
  uint64_t __temp774v__=0;
  char __temp775v__=0;
  uint64_t __temp776v=0;
  uint64_t __temp777v__=0;
  uint64_t __temp778v=0;
  uint64_t __temp779v__=0;
  uint64_t __temp780v__=0;
  char* __temp781v__unsafe_ptr=0;
  uint64_t __temp781v__unsafe_size=0;
  uint16_t __temp781v__unsafe_offset=0;
  uint16_t __temp781v__unsafe_align=0;
  char* __temp782v__unsafe_ptr=0;
  uint64_t __temp782v__dat__pos=0;
  uint64_t __temp782v__dat__length=0;
  char __temp782v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(_other,&__temp769v__unsafe_ptr,&__temp769v__dat__pos,&__temp769v__dat__length,&__temp769v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp769v__unsafe_ptr;
  other__dat__pos=__temp769v__dat__pos;
  other__dat__length=__temp769v__dat__length;
  other__dat__first=__temp769v__dat__first;
  __temp770v=li__length;
  prev_prev_length=__temp770v;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp771v__);
  add__temp170v(li__length,__temp771v__,&__temp772v__);
  prev_length=__temp772v__;
  eq__temp146v(other__unsafe_ptr,li__buffer__unsafe_ptr,&__temp773v__);
  if(__temp773v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  len__temp557v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__temp774v__);
  ge__temp319v(prev_length,__temp774v__,&__temp775v__);
  if(__temp775v__){
  __temp776v=2;
  __temp_errcode=div__temp220v(prev_length,__temp776v,&__temp777v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp778v=1;
  add__temp170v(__temp777v__,__temp778v,&__temp779v__);
  add__temp170v(prev_length,__temp779v__,&__temp780v__);
  __temp_errcode=resize__temp516v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__temp780v__,&__temp781v__unsafe_ptr,&__temp781v__unsafe_size,&__temp781v__unsafe_offset,&__temp781v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp781v__unsafe_ptr;
  li__buffer__unsafe_size=__temp781v__unsafe_size;
  li__buffer__unsafe_offset=__temp781v__unsafe_offset;
  li__buffer__unsafe_align=__temp781v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp702v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp782v__unsafe_ptr,&__temp782v__dat__pos,&__temp782v__dat__length,&__temp782v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1354v=li__buffer__unsafe_ptr;
  *__temp1355v=li__buffer__unsafe_size;
  *__temp1356v=li__buffer__unsafe_offset;
  *__temp1357v=li__buffer__unsafe_align;
  *__temp1358v=li__length;
  *__temp1359v=__temp782v__unsafe_ptr;
  *__temp1360v=__temp782v__dat__pos;
  *__temp1361v=__temp782v__dat__length;
  *__temp1362v=__temp782v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1250v(char** __temp1363v, uint64_t* __temp1364v, uint64_t* __temp1365v, char* __temp1366v, char** __temp1367v, uint64_t* __temp1368v, uint64_t* __temp1369v, char* __temp1370v) {
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__unsafe_size=0;
  uint16_t __temp1253v__unsafe_offset=0;
  uint16_t __temp1253v__unsafe_align=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char* __temp1255v__buffer__unsafe_ptr=0;
  uint64_t __temp1255v__buffer__unsafe_size=0;
  uint16_t __temp1255v__buffer__unsafe_offset=0;
  uint16_t __temp1255v__buffer__unsafe_align=0;
  uint64_t __temp1255v__length=0;
  char __temp1256v____temp571v____temp475v__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__unsafe_ptr=0;
  uint64_t __temp1258v__unsafe_size=0;
  uint16_t __temp1258v__unsafe_offset=0;
  uint16_t __temp1258v__unsafe_align=0;
  char* __temp1260v__unsafe_ptr=0;
  uint64_t __temp1260v__dat__pos=0;
  uint64_t __temp1260v__dat__length=0;
  char __temp1260v__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__dat__pos=0;
  uint64_t __temp1262v__dat__length=0;
  char __temp1262v__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp1251v(&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_offset,&__temp1253v__unsafe_align);
  __temp1254v__unsafe_ptr=__temp1253v__unsafe_ptr;
  __temp1254v__unsafe_size=__temp1253v__unsafe_size;
  __temp1254v__unsafe_offset=__temp1253v__unsafe_offset;
  __temp1254v__unsafe_align=__temp1253v__unsafe_align;
  __temp_errcode=list__temp565v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align,&__temp1255v__buffer__unsafe_ptr,&__temp1255v__buffer__unsafe_size,&__temp1255v__buffer__unsafe_offset,&__temp1255v__buffer__unsafe_align,&__temp1255v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v=100;
  __temp_errcode=resize__temp516v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align,__temp1257v,&__temp1258v__unsafe_ptr,&__temp1258v__unsafe_size,&__temp1258v__unsafe_offset,&__temp1258v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp768v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align,&__temp1254v__unsafe_size,__temp1259v,&__temp1260v__unsafe_ptr,&__temp1260v__dat__pos,&__temp1260v__dat__length,&__temp1260v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1260v__dat__pos;
  s1__dat__length=__temp1260v__dat__length;
  s1__dat__first=__temp1260v__dat__first;
  __temp_errcode=copy__temp768v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align,&__temp1254v__unsafe_size,__temp1261v,&__temp1262v__unsafe_ptr,&__temp1262v__dat__pos,&__temp1262v__dat__length,&__temp1262v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1262v__dat__pos;
  s2__dat__length=__temp1262v__dat__length;
  s2__dat__first=__temp1262v__dat__first;
  s1__unsafe_ptr=__temp1254v__unsafe_ptr;
  s2__unsafe_ptr=__temp1254v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s2__unsafe_ptr,&__temp1256v____temp571v____temp475v__);
  if(__temp1256v____temp571v____temp475v__){
  __temp1255v__buffer__unsafe_size=0;
  __temp1255v__buffer__unsafe_size=__temp1255v__buffer__unsafe_size;
  s2__unsafe_ptr=s2__unsafe_ptr;
  free__temp466v(&s2__unsafe_ptr);
  }
  __temp_return:
  *__temp1363v=s1__unsafe_ptr;
  *__temp1364v=s1__dat__pos;
  *__temp1365v=s1__dat__length;
  *__temp1366v=s1__dat__first;
  *__temp1367v=s2__unsafe_ptr;
  *__temp1368v=s2__dat__pos;
  *__temp1369v=s2__dat__length;
  *__temp1370v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1263v() {
  char* __temp1264v__s1__unsafe_ptr=0;
  uint64_t __temp1264v__s1__dat__pos=0;
  uint64_t __temp1264v__s1__dat__length=0;
  char __temp1264v__s1__dat__first=0;
  char* __temp1264v__s2__unsafe_ptr=0;
  uint64_t __temp1264v__s2__dat__pos=0;
  uint64_t __temp1264v__s2__dat__length=0;
  char __temp1264v__s2__dat__first=0;
  char __temp1265v____temp1256v____temp571v____temp475v__=0;
  uint64_t __temp1265v____temp1255v__buffer__unsafe_size=0;
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
  __temp_errcode=test__temp1250v(&__temp1264v__s1__unsafe_ptr,&__temp1264v__s1__dat__pos,&__temp1264v__s1__dat__length,&__temp1264v__s1__dat__first,&__temp1264v__s2__unsafe_ptr,&__temp1264v__s2__dat__pos,&__temp1264v__s2__dat__length,&__temp1264v__s2__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s__s1__unsafe_ptr=__temp1264v__s1__unsafe_ptr;
  s__s1__dat__pos=__temp1264v__s1__dat__pos;
  s__s1__dat__length=__temp1264v__s1__dat__length;
  s__s1__dat__first=__temp1264v__s1__dat__first;
  s__s2__unsafe_ptr=__temp1264v__s2__unsafe_ptr;
  s__s2__dat__pos=__temp1264v__s2__dat__pos;
  s__s2__dat__length=__temp1264v__s2__dat__length;
  s__s2__dat__first=__temp1264v__s2__dat__first;
  print__temp744v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp744v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1264v__s2__unsafe_ptr,&__temp1265v____temp1256v____temp571v____temp475v__);
  if(__temp1265v____temp1256v____temp571v____temp475v__){
  __temp1265v____temp1255v__buffer__unsafe_size=0;
  __temp1265v____temp1255v__buffer__unsafe_size=__temp1265v____temp1255v__buffer__unsafe_size;
  __temp1264v__s2__unsafe_ptr=__temp1264v__s2__unsafe_ptr;
  free__temp466v(&__temp1264v__s2__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1263v();return 0;}