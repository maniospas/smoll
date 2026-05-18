#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1258v="456";
const char* const __temp365v="\n";
const char* const __temp1256v="123";
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

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1269v) {
  goto __temp_return;
  __temp_return:
  *__temp1269v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1270v) {
  int value=0;
  *__temp1270v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1271v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1271v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1272v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1272v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1273v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1274v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1275v) {
  char* allocated=*__temp1275v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1275v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1276v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1277v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1277v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1278v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1279v) {
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
  *__temp1279v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1280v, uint64_t* __temp1281v, uint16_t* __temp1282v, uint16_t* __temp1283v, uint64_t size, char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v) {
  char* buffer__unsafe_ptr=*__temp1280v;
  uint64_t buffer__unsafe_size=*__temp1281v;
  uint16_t buffer__unsafe_offset=*__temp1282v;
  uint16_t buffer__unsafe_align=*__temp1283v;
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
  *__temp1280v=buffer__unsafe_ptr;
  *__temp1281v=buffer__unsafe_size;
  *__temp1282v=buffer__unsafe_offset;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_offset;
  *__temp1287v=buffer__unsafe_align;
  
  return __temp_errcode;
}

int list__temp566v(char** __temp1288v, uint64_t* __temp1289v, uint16_t* __temp1290v, uint16_t* __temp1291v, char** __temp1292v, uint64_t* __temp1293v, uint16_t* __temp1294v, uint16_t* __temp1295v, uint64_t* __temp1296v) {
  char* buffer__unsafe_ptr=*__temp1288v;
  uint64_t buffer__unsafe_size=*__temp1289v;
  uint16_t buffer__unsafe_offset=*__temp1290v;
  uint16_t buffer__unsafe_align=*__temp1291v;
  uint64_t __temp567v=0;
  uint64_t __temp568v__=0;
  char __temp569v__=0;
  uint64_t __temp570v=0;
  char* __temp571v__unsafe_ptr=0;
  uint64_t __temp571v__unsafe_size=0;
  uint16_t __temp571v__unsafe_offset=0;
  uint16_t __temp571v__unsafe_align=0;
  char __temp572v____temp470v__=0;
  uint64_t __temp573v__=0;
  uint64_t __temp574v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp567v=0;
  len__temp558v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp568v__);
  eq__temp118v(__temp567v,__temp568v__,&__temp569v__);
  if(__temp569v__){
  __temp570v=1;
  __temp_errcode=alloc__temp468v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_offset,&buffer__unsafe_align,__temp570v,&__temp571v__unsafe_ptr,&__temp571v__unsafe_size,&__temp571v__unsafe_offset,&__temp571v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp571v__unsafe_ptr;
  buffer__unsafe_size=__temp571v__unsafe_size;
  buffer__unsafe_offset=__temp571v__unsafe_offset;
  buffer__unsafe_align=__temp571v__unsafe_align;
  }
  len__temp558v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__temp573v__);
  __temp574v=__temp573v__;
  length=__temp574v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp572v____temp470v__);
  if(__temp572v____temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_offset;
  *__temp1291v=buffer__unsafe_align;
  *__temp1292v=buffer__unsafe_ptr;
  *__temp1293v=buffer__unsafe_size;
  *__temp1294v=buffer__unsafe_offset;
  *__temp1295v=buffer__unsafe_align;
  *__temp1296v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1297v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1298v) {
  *__temp1298v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1299v) {
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
  *__temp1299v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1300v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) int resize__temp507v(char** __temp1301v, uint64_t* __temp1302v, uint16_t* __temp1303v, uint16_t* __temp1304v, uint64_t size, char** __temp1305v, uint64_t* __temp1306v, uint16_t* __temp1307v, uint16_t* __temp1308v) {
  char* buffer__unsafe_ptr=*__temp1301v;
  uint64_t buffer__unsafe_size=*__temp1302v;
  uint16_t buffer__unsafe_offset=*__temp1303v;
  uint16_t buffer__unsafe_align=*__temp1304v;
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
  uint64_t __temp519v=0;
  char __temp520v__=0;
  uint64_t __temp521v__=0;
  uint64_t __temp522v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp523v__=0;
  uint64_t __temp524v__=0;
  uint64_t bytes=0;
  char* __temp525v__=0;
  char __temp526v__=0;
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
  __temp519v=1;
  neq__temp142v(__temp518v__,__temp519v,&__temp520v__);
  if(__temp520v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp521v__);
  mul__temp194v(buffer__unsafe_size,__temp521v__,&__temp522v__);
  prev_bytes=__temp522v__;
  buffer__unsafe_size=size;
  nat__temp465v(buffer__unsafe_align,&__temp523v__);
  mul__temp194v(__temp523v__,size,&__temp524v__);
  bytes=__temp524v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp525v__;
  lt__temp247v(prev_bytes,bytes,&__temp526v__);
  if(__temp526v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1301v=buffer__unsafe_ptr;
  *__temp1302v=buffer__unsafe_size;
  *__temp1303v=buffer__unsafe_offset;
  *__temp1304v=buffer__unsafe_align;
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_offset;
  *__temp1308v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1309v, uint64_t* __temp1310v, uint16_t* __temp1311v, uint16_t* __temp1312v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1309v=unsafe_ptr;
  *__temp1310v=unsafe_size;
  *__temp1311v=unsafe_offset;
  *__temp1312v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1313v) {
  *__temp1313v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1314v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1315v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1315v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1316v) {
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
  *__temp1316v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1317v, uint64_t* __temp1318v, uint64_t* __temp1319v, char* __temp1320v) {
  goto __temp_return;
  __temp_return:
  *__temp1317v=unsafe_ptr;
  *__temp1318v=dat__pos;
  *__temp1319v=dat__length;
  *__temp1320v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1321v, uint64_t* __temp1322v, uint64_t* __temp1323v, char* __temp1324v) {
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
  *__temp1321v=__temp607v__unsafe_ptr;
  *__temp1322v=__temp607v__dat__pos;
  *__temp1323v=__temp607v__dat__length;
  *__temp1324v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1325v, uint64_t* __temp1326v, uint64_t* __temp1327v, char* __temp1328v) {
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
  *__temp1325v=__temp637v__unsafe_ptr;
  *__temp1326v=__temp637v__dat__pos;
  *__temp1327v=__temp637v__dat__length;
  *__temp1328v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1329v, uint64_t* __temp1330v, uint64_t* __temp1331v, char* __temp1332v) {
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
  *__temp1329v=__temp645v__unsafe_ptr;
  *__temp1330v=__temp645v__dat__pos;
  *__temp1331v=__temp645v__dat__length;
  *__temp1332v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1333v) {
  goto __temp_return;
  __temp_return:
  *__temp1333v=s__dat__length;
}

static inline __attribute__((always_inline)) int div__temp220v(uint64_t x, uint64_t y, uint64_t* __temp1334v) {
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
  *__temp1334v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp631v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1335v, uint64_t* __temp1336v, uint64_t* __temp1337v, char* __temp1338v) {
  goto __temp_return;
  __temp_return:
  *__temp1335v=other__unsafe_ptr;
  *__temp1336v=other__dat__pos;
  *__temp1337v=other__dat__length;
  *__temp1338v=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1339v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1339v=z;
}

static inline __attribute__((always_inline)) int copy__temp701v(char** __temp1340v, uint64_t* __temp1341v, uint16_t* __temp1342v, uint16_t* __temp1343v, uint64_t* __temp1344v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1345v, uint64_t* __temp1346v, uint64_t* __temp1347v, char* __temp1348v) {
  char* buf__unsafe_ptr=*__temp1340v;
  uint64_t buf__unsafe_size=*__temp1341v;
  uint16_t buf__unsafe_offset=*__temp1342v;
  uint16_t buf__unsafe_align=*__temp1343v;
  uint64_t pos=*__temp1344v;
  char* __temp702v__unsafe_ptr=0;
  uint64_t __temp702v__dat__pos=0;
  uint64_t __temp702v__dat__length=0;
  char __temp702v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp703v__=0;
  uint64_t __temp704v__=0;
  uint64_t next_pos=0;
  uint64_t __temp705v__=0;
  char __temp706v__=0;
  uint64_t __temp707v=0;
  uint64_t __temp708v__=0;
  uint64_t prev_pos=0;
  char* __temp709v__unsafe_ptr=0;
  uint64_t __temp709v__dat__pos=0;
  uint64_t __temp709v__dat__length=0;
  char __temp709v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp702v__unsafe_ptr,&__temp702v__dat__pos,&__temp702v__dat__length,&__temp702v__dat__first);
  other__unsafe_ptr=__temp702v__unsafe_ptr;
  other__dat__pos=__temp702v__dat__pos;
  other__dat__length=__temp702v__dat__length;
  other__dat__first=__temp702v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp703v__);
  add__temp170v(pos,__temp703v__,&__temp704v__);
  next_pos=__temp704v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp705v__);
  gt__temp271v(next_pos,__temp705v__,&__temp706v__);
  if(__temp706v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp707v=0;
  add__temp170v(pos,__temp707v,&__temp708v__);
  prev_pos=__temp708v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp709v__unsafe_ptr,&__temp709v__dat__pos,&__temp709v__dat__length,&__temp709v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1340v=buf__unsafe_ptr;
  *__temp1341v=buf__unsafe_size;
  *__temp1342v=buf__unsafe_offset;
  *__temp1343v=buf__unsafe_align;
  *__temp1344v=pos;
  *__temp1345v=__temp709v__unsafe_ptr;
  *__temp1346v=__temp709v__dat__pos;
  *__temp1347v=__temp709v__dat__length;
  *__temp1348v=__temp709v__dat__first;
  
  return __temp_errcode;
}

int copy__temp766v(char** __temp1349v, uint64_t* __temp1350v, uint16_t* __temp1351v, uint16_t* __temp1352v, uint64_t* __temp1353v, const char* _other, char** __temp1354v, uint64_t* __temp1355v, uint64_t* __temp1356v, char* __temp1357v) {
  char* li__buffer__unsafe_ptr=*__temp1349v;
  uint64_t li__buffer__unsafe_size=*__temp1350v;
  uint16_t li__buffer__unsafe_offset=*__temp1351v;
  uint16_t li__buffer__unsafe_align=*__temp1352v;
  uint64_t li__length=*__temp1353v;
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
  __temp_errcode=str__temp638v(_other,&__temp767v__unsafe_ptr,&__temp767v__dat__pos,&__temp767v__dat__length,&__temp767v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp767v__unsafe_ptr;
  other__dat__pos=__temp767v__dat__pos;
  other__dat__length=__temp767v__dat__length;
  other__dat__first=__temp767v__dat__first;
  __temp768v=li__length;
  prev_prev_length=__temp768v;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp769v__);
  add__temp170v(li__length,__temp769v__,&__temp770v__);
  prev_length=__temp770v__;
  len__temp558v(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__temp771v__);
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
  __temp_errcode=resize__temp507v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__temp777v__,&__temp778v__unsafe_ptr,&__temp778v__unsafe_size,&__temp778v__unsafe_offset,&__temp778v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp778v__unsafe_ptr;
  li__buffer__unsafe_size=__temp778v__unsafe_size;
  li__buffer__unsafe_offset=__temp778v__unsafe_offset;
  li__buffer__unsafe_align=__temp778v__unsafe_align;
  }
  li__length=prev_length;
  __temp_errcode=copy__temp701v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp779v__unsafe_ptr,&__temp779v__dat__pos,&__temp779v__dat__length,&__temp779v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1349v=li__buffer__unsafe_ptr;
  *__temp1350v=li__buffer__unsafe_size;
  *__temp1351v=li__buffer__unsafe_offset;
  *__temp1352v=li__buffer__unsafe_align;
  *__temp1353v=li__length;
  *__temp1354v=__temp779v__unsafe_ptr;
  *__temp1355v=__temp779v__dat__pos;
  *__temp1356v=__temp779v__dat__length;
  *__temp1357v=__temp779v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test__temp1247v(char** __temp1358v, uint64_t* __temp1359v, uint64_t* __temp1360v, char* __temp1361v, char** __temp1362v, uint64_t* __temp1363v, uint64_t* __temp1364v, char* __temp1365v) {
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
  char __temp1253v____temp572v____temp470v__=0;
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
  __temp_errcode=list__temp566v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1252v__buffer__unsafe_ptr,&__temp1252v__buffer__unsafe_size,&__temp1252v__buffer__unsafe_offset,&__temp1252v__buffer__unsafe_align,&__temp1252v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1254v=100;
  __temp_errcode=resize__temp507v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1254v,&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_offset,&__temp1255v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp766v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,__temp1256v,&__temp1257v__unsafe_ptr,&__temp1257v__dat__pos,&__temp1257v__dat__length,&__temp1257v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s1__dat__pos=__temp1257v__dat__pos;
  s1__dat__length=__temp1257v__dat__length;
  s1__dat__first=__temp1257v__dat__first;
  __temp_errcode=copy__temp766v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,&__temp1251v__unsafe_size,__temp1258v,&__temp1259v__unsafe_ptr,&__temp1259v__dat__pos,&__temp1259v__dat__length,&__temp1259v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  s2__dat__pos=__temp1259v__dat__pos;
  s2__dat__length=__temp1259v__dat__length;
  s2__dat__first=__temp1259v__dat__first;
  s1__unsafe_ptr=__temp1251v__unsafe_ptr;
  s2__unsafe_ptr=__temp1251v__unsafe_ptr;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(s1__unsafe_ptr,&__temp1253v____temp572v____temp470v__);
  if(__temp1253v____temp572v____temp470v__){
  __temp1252v__buffer__unsafe_size=0;
  __temp1252v__buffer__unsafe_size=__temp1252v__buffer__unsafe_size;
  free__temp461v(&s1__unsafe_ptr);
  }
  __temp_return:
  *__temp1358v=s1__unsafe_ptr;
  *__temp1359v=s1__dat__pos;
  *__temp1360v=s1__dat__length;
  *__temp1361v=s1__dat__first;
  *__temp1362v=s2__unsafe_ptr;
  *__temp1363v=s2__dat__pos;
  *__temp1364v=s2__dat__length;
  *__temp1365v=s2__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
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
  char __temp1262v____temp1253v____temp572v____temp470v__=0;
  uint64_t __temp1262v____temp1252v__buffer__unsafe_size=0;
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
  print__temp743v(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__temp743v(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __temp_failure:exists__temp412v(__temp1261v__s1__unsafe_ptr,&__temp1262v____temp1253v____temp572v____temp470v__);
  if(__temp1262v____temp1253v____temp572v____temp470v__){
  __temp1262v____temp1252v__buffer__unsafe_size=0;
  __temp1262v____temp1252v__buffer__unsafe_size=__temp1262v____temp1252v__buffer__unsafe_size;
  free__temp461v(&__temp1261v__s1__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1260v();return 0;}