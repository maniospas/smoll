#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1265v="going to deallocate of size: ";
const char* const __temp822v="";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1248v(char** __temp1284v, uint64_t* __temp1285v, uint16_t* __temp1286v, uint16_t* __temp1287v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1284v=unsafe_ptr;
  *__temp1285v=unsafe_size;
  *__temp1286v=unsafe_offset;
  *__temp1287v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1288v) {
  int value=0;
  *__temp1288v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1289v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1289v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1290v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1291v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1292v) {
  char* allocated=*__temp1292v;
  if(allocated){
  free(allocated);
  }
  *__temp1292v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1293v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1294v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1294v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1295v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1296v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1297v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1298v) {
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
  *__temp1298v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1299v, uint64_t* __temp1300v, uint16_t* __temp1301v, uint16_t* __temp1302v, uint64_t size, char** __temp1303v, uint64_t* __temp1304v, uint16_t* __temp1305v, uint16_t* __temp1306v) {
  char* buffer__unsafe_ptr=*__temp1299v;
  uint64_t buffer__unsafe_size=*__temp1300v;
  uint16_t buffer__unsafe_offset=*__temp1301v;
  uint16_t buffer__unsafe_align=*__temp1302v;
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
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_offset;
  *__temp1302v=buffer__unsafe_align;
  *__temp1303v=__temp486v__unsafe_ptr;
  *__temp1304v=__temp486v__unsafe_size;
  *__temp1305v=__temp486v__unsafe_offset;
  *__temp1306v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1307v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1308v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1309v) {
  *__temp1309v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1310v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1310v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1311v, uint64_t* __temp1312v, uint16_t* __temp1313v, uint16_t* __temp1314v, uint64_t i, char** __temp1315v) {
  char* buffer__unsafe_ptr=*__temp1311v;
  uint64_t buffer__unsafe_size=*__temp1312v;
  uint16_t buffer__unsafe_offset=*__temp1313v;
  uint16_t buffer__unsafe_align=*__temp1314v;
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
  *__temp1311v=buffer__unsafe_ptr;
  *__temp1312v=buffer__unsafe_size;
  *__temp1313v=buffer__unsafe_offset;
  *__temp1314v=buffer__unsafe_align;
  *__temp1315v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1316v) {
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
  *__temp1316v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1317v) {
  goto __temp_return;
  __temp_return:
  *__temp1317v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1247v(char** __temp1318v, uint64_t* __temp1319v, uint16_t* __temp1320v, uint16_t* __temp1321v) {
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  uint64_t __temp1252v=0;
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__unsafe_size=0;
  uint16_t __temp1253v__unsafe_offset=0;
  uint16_t __temp1253v__unsafe_align=0;
  uint64_t __temp1254v____temp475v=0;
  char __temp1254v____temp476v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__=0;
  double __temp1257v=0;
  uint64_t __temp1258v=0;
  char* __temp1259v__=0;
  double __temp1260v=0;
  uint64_t __temp1261v=0;
  char* __temp1262v__=0;
  double __temp1263v__value=0;
  uint64_t __temp1267v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1248v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_offset=__temp1250v__unsafe_offset;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp1252v=2;
  __temp_errcode=alloc__temp473v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_offset,&__temp1253v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1253v__unsafe_ptr;
  x__unsafe_size=__temp1253v__unsafe_size;
  x__unsafe_offset=__temp1253v__unsafe_offset;
  x__unsafe_align=__temp1253v__unsafe_align;
  __temp1255v=0;
  __temp_errcode=mutget__temp545v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1255v,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1257v=1.0;
  if(!__temp1256v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1256v__,&__temp1257v,8);
  __temp1258v=1;
  __temp_errcode=mutget__temp545v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1260v=2.0;
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1260v,8);
  __temp1261v=1;
  __temp_errcode=get__temp552v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1263v__value,__temp1262v__,8);
  print__temp368v(__temp1263v__value);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1265v,__temp822v);
  len__temp559v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  __temp1254v____temp475v=0;
  neq__temp142v(x__unsafe_size,__temp1254v____temp475v,&__temp1254v____temp476v__);
  if(__temp1254v____temp476v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__temp466v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1318v=x__unsafe_ptr;
  *__temp1319v=x__unsafe_size;
  *__temp1320v=x__unsafe_offset;
  *__temp1321v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1269v(char** __temp1322v, uint64_t* __temp1323v, uint16_t* __temp1324v, uint16_t* __temp1325v, char** __temp1326v, uint64_t* __temp1327v, uint16_t* __temp1328v, uint16_t* __temp1329v, char** __temp1330v, uint64_t* __temp1331v, uint16_t* __temp1332v, uint16_t* __temp1333v) {
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint16_t __temp1270v__unsafe_offset=0;
  uint16_t __temp1270v__unsafe_align=0;
  uint64_t __temp1271v____temp1254v____temp475v=0;
  char __temp1271v____temp1254v____temp476v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint16_t __temp1272v__unsafe_offset=0;
  uint16_t __temp1272v__unsafe_align=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint16_t __temp1273v__unsafe_offset=0;
  uint16_t __temp1273v__unsafe_align=0;
  uint64_t __temp1274v=0;
  char* __temp1275v__unsafe_ptr=0;
  uint64_t __temp1275v__unsafe_size=0;
  uint16_t __temp1275v__unsafe_offset=0;
  uint16_t __temp1275v__unsafe_align=0;
  uint64_t __temp1276v____temp475v=0;
  char __temp1276v____temp476v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1247v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_offset,&__temp1270v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1270v__unsafe_ptr;
  t__unsafe_size=__temp1270v__unsafe_size;
  t__unsafe_offset=__temp1270v__unsafe_offset;
  t__unsafe_align=__temp1270v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____temp_buffer____buffer__temp1248v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align);
  __temp1273v__unsafe_ptr=__temp1272v__unsafe_ptr;
  __temp1273v__unsafe_size=__temp1272v__unsafe_size;
  __temp1273v__unsafe_offset=__temp1272v__unsafe_offset;
  __temp1273v__unsafe_align=__temp1272v__unsafe_align;
  __temp1274v=3;
  __temp_errcode=alloc__temp473v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align,__temp1274v,&__temp1275v__unsafe_ptr,&__temp1275v__unsafe_size,&__temp1275v__unsafe_offset,&__temp1275v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1275v__unsafe_ptr;
  k__unsafe_size=__temp1275v__unsafe_size;
  k__unsafe_offset=__temp1275v__unsafe_offset;
  k__unsafe_align=__temp1275v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp1276v____temp475v=0;
  neq__temp142v(k__unsafe_size,__temp1276v____temp475v,&__temp1276v____temp476v__);
  if(__temp1276v____temp476v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  k__unsafe_ptr=k__unsafe_ptr;
  free__temp466v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1265v,__temp822v);
  len__temp559v(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  __temp1271v____temp1254v____temp475v=0;
  neq__temp142v(t__unsafe_size,__temp1271v____temp1254v____temp475v,&__temp1271v____temp1254v____temp476v__);
  if(__temp1271v____temp1254v____temp476v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  t__unsafe_ptr=t__unsafe_ptr;
  free__temp466v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1322v=t__unsafe_ptr;
  *__temp1323v=t__unsafe_size;
  *__temp1324v=t__unsafe_offset;
  *__temp1325v=t__unsafe_align;
  *__temp1326v=j__unsafe_ptr;
  *__temp1327v=j__unsafe_size;
  *__temp1328v=j__unsafe_offset;
  *__temp1329v=j__unsafe_align;
  *__temp1330v=k__unsafe_ptr;
  *__temp1331v=k__unsafe_size;
  *__temp1332v=k__unsafe_offset;
  *__temp1333v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1277v() {
  char* __temp1278v__t__unsafe_ptr=0;
  uint64_t __temp1278v__t__unsafe_size=0;
  uint16_t __temp1278v__t__unsafe_offset=0;
  uint16_t __temp1278v__t__unsafe_align=0;
  char* __temp1278v__j__unsafe_ptr=0;
  uint64_t __temp1278v__j__unsafe_size=0;
  uint16_t __temp1278v__j__unsafe_offset=0;
  uint16_t __temp1278v__j__unsafe_align=0;
  char* __temp1278v__k__unsafe_ptr=0;
  uint64_t __temp1278v__k__unsafe_size=0;
  uint16_t __temp1278v__k__unsafe_offset=0;
  uint16_t __temp1278v__k__unsafe_align=0;
  uint64_t __temp1279v____temp1271v____temp1254v____temp475v=0;
  char __temp1279v____temp1271v____temp1254v____temp476v__=0;
  uint64_t __temp1279v____temp1276v____temp475v=0;
  char __temp1279v____temp1276v____temp476v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __temp1280v=0;
  char* __temp1281v__=0;
  double __temp1282v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1269v(&__temp1278v__t__unsafe_ptr,&__temp1278v__t__unsafe_size,&__temp1278v__t__unsafe_offset,&__temp1278v__t__unsafe_align,&__temp1278v__j__unsafe_ptr,&__temp1278v__j__unsafe_size,&__temp1278v__j__unsafe_offset,&__temp1278v__j__unsafe_align,&__temp1278v__k__unsafe_ptr,&__temp1278v__k__unsafe_size,&__temp1278v__k__unsafe_offset,&__temp1278v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1278v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1278v__t__unsafe_size;
  t__t__unsafe_offset=__temp1278v__t__unsafe_offset;
  t__t__unsafe_align=__temp1278v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1278v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1278v__j__unsafe_size;
  t__j__unsafe_offset=__temp1278v__j__unsafe_offset;
  t__j__unsafe_align=__temp1278v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1278v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1278v__k__unsafe_size;
  t__k__unsafe_offset=__temp1278v__k__unsafe_offset;
  t__k__unsafe_align=__temp1278v__k__unsafe_align;
  __temp1280v=1;
  __temp_errcode=get__temp552v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__temp1280v,&__temp1281v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1281v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1282v__value,__temp1281v__,8);
  print__temp368v(__temp1282v__value);
  
  __temp_failure:__temp1279v____temp1276v____temp475v=0;
  neq__temp142v(__temp1278v__k__unsafe_size,__temp1279v____temp1276v____temp475v,&__temp1279v____temp1276v____temp476v__);
  if(__temp1279v____temp1276v____temp476v__){
  __temp1278v__k__unsafe_size=0;
  __temp1278v__k__unsafe_size=__temp1278v__k__unsafe_size;
  __temp1278v__k__unsafe_ptr=__temp1278v__k__unsafe_ptr;
  free__temp466v(&__temp1278v__k__unsafe_ptr);
  }
  print__temp361v(__temp1265v,__temp822v);
  len__temp559v(__temp1278v__t__unsafe_ptr,__temp1278v__t__unsafe_size,__temp1278v__t__unsafe_offset,__temp1278v__t__unsafe_align,&__temp1278v__t__unsafe_size);
  print__temp376v(__temp1278v__t__unsafe_size);
  __temp1279v____temp1271v____temp1254v____temp475v=0;
  neq__temp142v(__temp1278v__t__unsafe_size,__temp1279v____temp1271v____temp1254v____temp475v,&__temp1279v____temp1271v____temp1254v____temp476v__);
  if(__temp1279v____temp1271v____temp1254v____temp476v__){
  __temp1278v__t__unsafe_size=0;
  __temp1278v__t__unsafe_size=__temp1278v__t__unsafe_size;
  __temp1278v__t__unsafe_ptr=__temp1278v__t__unsafe_ptr;
  free__temp466v(&__temp1278v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1277v();return 0;}