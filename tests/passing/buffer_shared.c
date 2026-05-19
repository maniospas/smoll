#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1248v(char** __temp1268v, uint64_t* __temp1269v, uint16_t* __temp1270v, uint16_t* __temp1271v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1268v=unsafe_ptr;
  *__temp1269v=unsafe_size;
  *__temp1270v=unsafe_offset;
  *__temp1271v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1272v) {
  int value=0;
  *__temp1272v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1273v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1274v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1274v=__temp95v__;
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

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1276v) {
  char* allocated=*__temp1276v;
  if(allocated){
  free(allocated);
  }
  *__temp1276v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1280v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1281v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1282v) {
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
  *__temp1282v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1283v, uint64_t* __temp1284v, uint16_t* __temp1285v, uint16_t* __temp1286v, uint64_t size, char** __temp1287v, uint64_t* __temp1288v, uint16_t* __temp1289v, uint16_t* __temp1290v) {
  char* buffer__unsafe_ptr=*__temp1283v;
  uint64_t buffer__unsafe_size=*__temp1284v;
  uint16_t buffer__unsafe_offset=*__temp1285v;
  uint16_t buffer__unsafe_align=*__temp1286v;
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
  *__temp1283v=buffer__unsafe_ptr;
  *__temp1284v=buffer__unsafe_size;
  *__temp1285v=buffer__unsafe_offset;
  *__temp1286v=buffer__unsafe_align;
  *__temp1287v=__temp486v__unsafe_ptr;
  *__temp1288v=__temp486v__unsafe_size;
  *__temp1289v=__temp486v__unsafe_offset;
  *__temp1290v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1291v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1292v) {
  *__temp1292v=to;
}

static inline __attribute__((always_inline)) int realloc__temp462v(char* allocated, uint64_t bytes, char** __temp1293v) {
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
  *__temp1293v=__temp465v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1294v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) int resize__temp518v(char** __temp1295v, uint64_t* __temp1296v, uint16_t* __temp1297v, uint16_t* __temp1298v, uint64_t size, char** __temp1299v, uint64_t* __temp1300v, uint16_t* __temp1301v, uint16_t* __temp1302v) {
  char* buffer__unsafe_ptr=*__temp1295v;
  uint64_t buffer__unsafe_size=*__temp1296v;
  uint16_t buffer__unsafe_offset=*__temp1297v;
  uint16_t buffer__unsafe_align=*__temp1298v;
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
  *__temp1295v=buffer__unsafe_ptr;
  *__temp1296v=buffer__unsafe_size;
  *__temp1297v=buffer__unsafe_offset;
  *__temp1298v=buffer__unsafe_align;
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_offset;
  *__temp1302v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1303v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1304v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1304v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1305v, uint64_t* __temp1306v, uint16_t* __temp1307v, uint16_t* __temp1308v, uint64_t i, char** __temp1309v) {
  char* buffer__unsafe_ptr=*__temp1305v;
  uint64_t buffer__unsafe_size=*__temp1306v;
  uint16_t buffer__unsafe_offset=*__temp1307v;
  uint16_t buffer__unsafe_align=*__temp1308v;
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
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_offset;
  *__temp1308v=buffer__unsafe_align;
  *__temp1309v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1310v) {
  goto __temp_return;
  __temp_return:
  *__temp1310v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1311v) {
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
  *__temp1311v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1247v() {
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __temp1252v=0;
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__unsafe_size=0;
  uint16_t __temp1253v__unsafe_offset=0;
  uint16_t __temp1253v__unsafe_align=0;
  uint64_t __temp1254v____temp475v=0;
  char __temp1254v____temp476v__=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint16_t __temp1256v__unsafe_offset=0;
  uint16_t __temp1256v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__=0;
  double __temp1259v=0;
  uint64_t __temp1260v__=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1264v=0;
  char* __temp1265v__=0;
  double __temp1266v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1248v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_offset=__temp1250v__unsafe_offset;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp1252v=20;
  __temp_errcode=alloc__temp473v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_offset,&__temp1253v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=10;
  __temp_errcode=resize__temp518v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_offset,&__temp1256v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v=0;
  __temp_errcode=mutget__temp545v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1259v=1.0;
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1259v,8);
  len__temp559v(__temp1251v__unsafe_ptr,__temp1251v__unsafe_size,__temp1251v__unsafe_offset,__temp1251v__unsafe_align,&__temp1260v__);
  print__temp376v(__temp1251v__unsafe_size);
  len__temp559v(__temp1251v__unsafe_ptr,__temp1251v__unsafe_size,__temp1251v__unsafe_offset,__temp1251v__unsafe_align,&__temp1262v__);
  print__temp376v(__temp1251v__unsafe_size);
  __temp1264v=0;
  __temp_errcode=get__temp552v(__temp1251v__unsafe_ptr,__temp1251v__unsafe_size,__temp1251v__unsafe_offset,__temp1251v__unsafe_align,__temp1264v,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1265v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1266v__value,__temp1265v__,8);
  print__temp368v(__temp1266v__value);
  
  __temp_failure:__temp1254v____temp475v=0;
  neq__temp142v(__temp1253v__unsafe_size,__temp1254v____temp475v,&__temp1254v____temp476v__);
  if(__temp1254v____temp476v__){
  __temp1253v__unsafe_size=0;
  __temp1253v__unsafe_size=__temp1253v__unsafe_size;
  __temp1253v__unsafe_ptr=__temp1253v__unsafe_ptr;
  free__temp466v(&__temp1253v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}