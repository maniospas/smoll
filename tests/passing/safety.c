#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1266v="going to deallocate of size: ";
const char* const __temp823v="";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1249v(char** __temp1285v, uint64_t* __temp1286v, uint16_t* __temp1287v, uint16_t* __temp1288v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1285v=unsafe_ptr;
  *__temp1286v=unsafe_size;
  *__temp1287v=unsafe_offset;
  *__temp1288v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1289v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1290v) {
  char* allocated=*__temp1290v;
  if(allocated){
  free(allocated);
  }
  *__temp1290v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1291v) {
  int value=0;
  *__temp1291v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1292v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1292v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1293v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1293v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1294v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1295v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1296v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1296v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1297v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1298v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1299v) {
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
  *__temp1299v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1300v, uint64_t* __temp1301v, uint16_t* __temp1302v, uint16_t* __temp1303v, uint64_t size, char** __temp1304v, uint64_t* __temp1305v, uint16_t* __temp1306v, uint16_t* __temp1307v) {
  char* buffer__unsafe_ptr=*__temp1300v;
  uint64_t buffer__unsafe_size=*__temp1301v;
  uint16_t buffer__unsafe_offset=*__temp1302v;
  uint16_t buffer__unsafe_align=*__temp1303v;
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
  *__temp1300v=buffer__unsafe_ptr;
  *__temp1301v=buffer__unsafe_size;
  *__temp1302v=buffer__unsafe_offset;
  *__temp1303v=buffer__unsafe_align;
  *__temp1304v=__temp485v__unsafe_ptr;
  *__temp1305v=__temp485v__unsafe_size;
  *__temp1306v=__temp485v__unsafe_offset;
  *__temp1307v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1308v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1309v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1310v) {
  *__temp1310v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1311v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1312v, uint64_t* __temp1313v, uint16_t* __temp1314v, uint16_t* __temp1315v, uint64_t i, char** __temp1316v) {
  char* buffer__unsafe_ptr=*__temp1312v;
  uint64_t buffer__unsafe_size=*__temp1313v;
  uint16_t buffer__unsafe_offset=*__temp1314v;
  uint16_t buffer__unsafe_align=*__temp1315v;
  char __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  char* __temp549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp544v__);
  if(__temp544v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp545v__);
  mul__temp194v(i,__temp545v__,&__temp546v__);
  nat__temp470v(buffer__unsafe_offset,&__temp547v__);
  add__temp170v(__temp546v__,__temp547v__,&__temp548v__);
  add__temp468v(buffer__unsafe_ptr,__temp548v__,&__temp549v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1312v=buffer__unsafe_ptr;
  *__temp1313v=buffer__unsafe_size;
  *__temp1314v=buffer__unsafe_offset;
  *__temp1315v=buffer__unsafe_align;
  *__temp1316v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1317v) {
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
  *__temp1317v=__temp556v__;
  
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

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1318v) {
  goto __temp_return;
  __temp_return:
  *__temp1318v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1248v(char** __temp1319v, uint64_t* __temp1320v, uint16_t* __temp1321v, uint16_t* __temp1322v) {
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint16_t __temp1251v__unsafe_offset=0;
  uint16_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp475v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  uint64_t __temp1259v=0;
  char* __temp1260v__=0;
  double __temp1261v=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  double __temp1264v__value=0;
  uint64_t __temp1268v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_offset,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_offset=__temp1251v__unsafe_offset;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=2;
  __temp_errcode=alloc__temp473v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1254v__unsafe_ptr;
  x__unsafe_size=__temp1254v__unsafe_size;
  x__unsafe_offset=__temp1254v__unsafe_offset;
  x__unsafe_align=__temp1254v__unsafe_align;
  __temp1256v=0;
  __temp_errcode=mutget__temp543v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  if(!__temp1257v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  __temp1259v=1;
  __temp_errcode=mutget__temp543v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1259v,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1261v=2.0;
  if(!__temp1260v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1260v__,&__temp1261v,8);
  __temp1262v=1;
  __temp_errcode=get__temp550v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1263v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1264v__value,__temp1263v__,8);
  print__temp368v(__temp1264v__value);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1266v,__temp823v);
  len__temp557v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  exists__temp412v(x__unsafe_ptr,&__temp1255v____temp475v__);
  if(__temp1255v____temp475v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__temp466v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1319v=x__unsafe_ptr;
  *__temp1320v=x__unsafe_size;
  *__temp1321v=x__unsafe_offset;
  *__temp1322v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1270v(char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v, char** __temp1327v, uint64_t* __temp1328v, uint16_t* __temp1329v, uint16_t* __temp1330v, char** __temp1331v, uint64_t* __temp1332v, uint16_t* __temp1333v, uint16_t* __temp1334v) {
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint16_t __temp1271v__unsafe_offset=0;
  uint16_t __temp1271v__unsafe_align=0;
  char __temp1272v____temp1255v____temp475v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint16_t __temp1273v__unsafe_offset=0;
  uint16_t __temp1273v__unsafe_align=0;
  char* __temp1274v__unsafe_ptr=0;
  uint64_t __temp1274v__unsafe_size=0;
  uint16_t __temp1274v__unsafe_offset=0;
  uint16_t __temp1274v__unsafe_align=0;
  uint64_t __temp1275v=0;
  char* __temp1276v__unsafe_ptr=0;
  uint64_t __temp1276v__unsafe_size=0;
  uint16_t __temp1276v__unsafe_offset=0;
  uint16_t __temp1276v__unsafe_align=0;
  char __temp1277v____temp475v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1248v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_offset,&__temp1271v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1271v__unsafe_ptr;
  t__unsafe_size=__temp1271v__unsafe_size;
  t__unsafe_offset=__temp1271v__unsafe_offset;
  t__unsafe_align=__temp1271v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____temp_buffer____buffer__temp1249v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align);
  __temp1274v__unsafe_ptr=__temp1273v__unsafe_ptr;
  __temp1274v__unsafe_size=__temp1273v__unsafe_size;
  __temp1274v__unsafe_offset=__temp1273v__unsafe_offset;
  __temp1274v__unsafe_align=__temp1273v__unsafe_align;
  __temp1275v=3;
  __temp_errcode=alloc__temp473v(&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_offset,&__temp1274v__unsafe_align,__temp1275v,&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_offset,&__temp1276v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1276v__unsafe_ptr;
  k__unsafe_size=__temp1276v__unsafe_size;
  k__unsafe_offset=__temp1276v__unsafe_offset;
  k__unsafe_align=__temp1276v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(k__unsafe_ptr,&__temp1277v____temp475v__);
  if(__temp1277v____temp475v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  k__unsafe_ptr=k__unsafe_ptr;
  free__temp466v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1266v,__temp823v);
  len__temp557v(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  exists__temp412v(t__unsafe_ptr,&__temp1272v____temp1255v____temp475v__);
  if(__temp1272v____temp1255v____temp475v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  t__unsafe_ptr=t__unsafe_ptr;
  free__temp466v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1323v=t__unsafe_ptr;
  *__temp1324v=t__unsafe_size;
  *__temp1325v=t__unsafe_offset;
  *__temp1326v=t__unsafe_align;
  *__temp1327v=j__unsafe_ptr;
  *__temp1328v=j__unsafe_size;
  *__temp1329v=j__unsafe_offset;
  *__temp1330v=j__unsafe_align;
  *__temp1331v=k__unsafe_ptr;
  *__temp1332v=k__unsafe_size;
  *__temp1333v=k__unsafe_offset;
  *__temp1334v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1278v() {
  char* __temp1279v__t__unsafe_ptr=0;
  uint64_t __temp1279v__t__unsafe_size=0;
  uint16_t __temp1279v__t__unsafe_offset=0;
  uint16_t __temp1279v__t__unsafe_align=0;
  char* __temp1279v__j__unsafe_ptr=0;
  uint64_t __temp1279v__j__unsafe_size=0;
  uint16_t __temp1279v__j__unsafe_offset=0;
  uint16_t __temp1279v__j__unsafe_align=0;
  char* __temp1279v__k__unsafe_ptr=0;
  uint64_t __temp1279v__k__unsafe_size=0;
  uint16_t __temp1279v__k__unsafe_offset=0;
  uint16_t __temp1279v__k__unsafe_align=0;
  char __temp1280v____temp1272v____temp1255v____temp475v__=0;
  char __temp1280v____temp1277v____temp475v__=0;
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
  uint64_t __temp1281v=0;
  char* __temp1282v__=0;
  double __temp1283v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1270v(&__temp1279v__t__unsafe_ptr,&__temp1279v__t__unsafe_size,&__temp1279v__t__unsafe_offset,&__temp1279v__t__unsafe_align,&__temp1279v__j__unsafe_ptr,&__temp1279v__j__unsafe_size,&__temp1279v__j__unsafe_offset,&__temp1279v__j__unsafe_align,&__temp1279v__k__unsafe_ptr,&__temp1279v__k__unsafe_size,&__temp1279v__k__unsafe_offset,&__temp1279v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1279v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1279v__t__unsafe_size;
  t__t__unsafe_offset=__temp1279v__t__unsafe_offset;
  t__t__unsafe_align=__temp1279v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1279v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1279v__j__unsafe_size;
  t__j__unsafe_offset=__temp1279v__j__unsafe_offset;
  t__j__unsafe_align=__temp1279v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1279v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1279v__k__unsafe_size;
  t__k__unsafe_offset=__temp1279v__k__unsafe_offset;
  t__k__unsafe_align=__temp1279v__k__unsafe_align;
  __temp1281v=1;
  __temp_errcode=get__temp550v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__temp1281v,&__temp1282v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1282v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1283v__value,__temp1282v__,8);
  print__temp368v(__temp1283v__value);
  
  __temp_failure:exists__temp412v(__temp1279v__k__unsafe_ptr,&__temp1280v____temp1277v____temp475v__);
  if(__temp1280v____temp1277v____temp475v__){
  __temp1279v__k__unsafe_size=0;
  __temp1279v__k__unsafe_size=__temp1279v__k__unsafe_size;
  __temp1279v__k__unsafe_ptr=__temp1279v__k__unsafe_ptr;
  free__temp466v(&__temp1279v__k__unsafe_ptr);
  }
  print__temp361v(__temp1266v,__temp823v);
  len__temp557v(__temp1279v__t__unsafe_ptr,__temp1279v__t__unsafe_size,__temp1279v__t__unsafe_offset,__temp1279v__t__unsafe_align,&__temp1279v__t__unsafe_size);
  print__temp376v(__temp1279v__t__unsafe_size);
  exists__temp412v(__temp1279v__t__unsafe_ptr,&__temp1280v____temp1272v____temp1255v____temp475v__);
  if(__temp1280v____temp1272v____temp1255v____temp475v__){
  __temp1279v__t__unsafe_size=0;
  __temp1279v__t__unsafe_size=__temp1279v__t__unsafe_size;
  __temp1279v__t__unsafe_ptr=__temp1279v__t__unsafe_ptr;
  free__temp466v(&__temp1279v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1278v();return 0;}