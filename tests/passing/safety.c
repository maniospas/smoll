#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp825v="";
const char* const __temp1268v="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1251v(char** __temp1287v, uint64_t* __temp1288v, uint16_t* __temp1289v, uint16_t* __temp1290v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1287v=unsafe_ptr;
  *__temp1288v=unsafe_size;
  *__temp1289v=unsafe_offset;
  *__temp1290v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1291v) {
  char z=0;
  z=x!=0;
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1293v) {
  int value=0;
  *__temp1293v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1294v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1294v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1295v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1295v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1296v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1297v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1298v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1298v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1299v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1299v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1300v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1301v) {
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
  *__temp1301v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1302v, uint64_t* __temp1303v, uint16_t* __temp1304v, uint16_t* __temp1305v, uint64_t size, char** __temp1306v, uint64_t* __temp1307v, uint16_t* __temp1308v, uint16_t* __temp1309v) {
  char* buffer__unsafe_ptr=*__temp1302v;
  uint64_t buffer__unsafe_size=*__temp1303v;
  uint16_t buffer__unsafe_offset=*__temp1304v;
  uint16_t buffer__unsafe_align=*__temp1305v;
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
  *__temp1302v=buffer__unsafe_ptr;
  *__temp1303v=buffer__unsafe_size;
  *__temp1304v=buffer__unsafe_offset;
  *__temp1305v=buffer__unsafe_align;
  *__temp1306v=__temp485v__unsafe_ptr;
  *__temp1307v=__temp485v__unsafe_size;
  *__temp1308v=__temp485v__unsafe_offset;
  *__temp1309v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1310v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1311v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1312v) {
  *__temp1312v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1313v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1313v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1314v, uint64_t* __temp1315v, uint16_t* __temp1316v, uint16_t* __temp1317v, uint64_t i, char** __temp1318v) {
  char* buffer__unsafe_ptr=*__temp1314v;
  uint64_t buffer__unsafe_size=*__temp1315v;
  uint16_t buffer__unsafe_offset=*__temp1316v;
  uint16_t buffer__unsafe_align=*__temp1317v;
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
  *__temp1314v=buffer__unsafe_ptr;
  *__temp1315v=buffer__unsafe_size;
  *__temp1316v=buffer__unsafe_offset;
  *__temp1317v=buffer__unsafe_align;
  *__temp1318v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1319v) {
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
  *__temp1319v=__temp556v__;
  
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

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1320v) {
  goto __temp_return;
  __temp_return:
  *__temp1320v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1250v(char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v) {
  char* __temp1253v__unsafe_ptr=0;
  uint64_t __temp1253v__unsafe_size=0;
  uint16_t __temp1253v__unsafe_offset=0;
  uint16_t __temp1253v__unsafe_align=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint16_t __temp1254v__unsafe_offset=0;
  uint16_t __temp1254v__unsafe_align=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint16_t __temp1256v__unsafe_offset=0;
  uint16_t __temp1256v__unsafe_align=0;
  char __temp1257v____temp475v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1258v=0;
  char* __temp1259v__=0;
  double __temp1260v=0;
  uint64_t __temp1261v=0;
  char* __temp1262v__=0;
  double __temp1263v=0;
  uint64_t __temp1264v=0;
  char* __temp1265v__=0;
  double __temp1266v__number=0;
  uint64_t __temp1270v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1251v(&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_offset,&__temp1253v__unsafe_align);
  __temp1254v__unsafe_ptr=__temp1253v__unsafe_ptr;
  __temp1254v__unsafe_size=__temp1253v__unsafe_size;
  __temp1254v__unsafe_offset=__temp1253v__unsafe_offset;
  __temp1254v__unsafe_align=__temp1253v__unsafe_align;
  __temp1255v=2;
  __temp_errcode=alloc__temp473v(&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_offset,&__temp1254v__unsafe_align,__temp1255v,&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_offset,&__temp1256v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1256v__unsafe_ptr;
  x__unsafe_size=__temp1256v__unsafe_size;
  x__unsafe_offset=__temp1256v__unsafe_offset;
  x__unsafe_align=__temp1256v__unsafe_align;
  __temp1258v=0;
  __temp_errcode=mutget__temp543v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1260v=1.0;
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1259v__,&__temp1260v,8);
  __temp1261v=1;
  __temp_errcode=mutget__temp543v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1261v,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1263v=2.0;
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1262v__,&__temp1263v,8);
  __temp1264v=1;
  __temp_errcode=get__temp550v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__temp1264v,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1265v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1266v__number,__temp1265v__,8);
  print__temp368v(__temp1266v__number);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1268v,__temp825v);
  len__temp557v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  exists__temp412v(x__unsafe_ptr,&__temp1257v____temp475v__);
  if(__temp1257v____temp475v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__temp466v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1321v=x__unsafe_ptr;
  *__temp1322v=x__unsafe_size;
  *__temp1323v=x__unsafe_offset;
  *__temp1324v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1272v(char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v, char** __temp1329v, uint64_t* __temp1330v, uint16_t* __temp1331v, uint16_t* __temp1332v, char** __temp1333v, uint64_t* __temp1334v, uint16_t* __temp1335v, uint16_t* __temp1336v) {
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint16_t __temp1273v__unsafe_offset=0;
  uint16_t __temp1273v__unsafe_align=0;
  char __temp1274v____temp1257v____temp475v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __temp1275v__unsafe_ptr=0;
  uint64_t __temp1275v__unsafe_size=0;
  uint16_t __temp1275v__unsafe_offset=0;
  uint16_t __temp1275v__unsafe_align=0;
  char* __temp1276v__unsafe_ptr=0;
  uint64_t __temp1276v__unsafe_size=0;
  uint16_t __temp1276v__unsafe_offset=0;
  uint16_t __temp1276v__unsafe_align=0;
  uint64_t __temp1277v=0;
  char* __temp1278v__unsafe_ptr=0;
  uint64_t __temp1278v__unsafe_size=0;
  uint16_t __temp1278v__unsafe_offset=0;
  uint16_t __temp1278v__unsafe_align=0;
  char __temp1279v____temp475v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1250v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1273v__unsafe_ptr;
  t__unsafe_size=__temp1273v__unsafe_size;
  t__unsafe_offset=__temp1273v__unsafe_offset;
  t__unsafe_align=__temp1273v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____temp_buffer____buffer__temp1251v(&__temp1275v__unsafe_ptr,&__temp1275v__unsafe_size,&__temp1275v__unsafe_offset,&__temp1275v__unsafe_align);
  __temp1276v__unsafe_ptr=__temp1275v__unsafe_ptr;
  __temp1276v__unsafe_size=__temp1275v__unsafe_size;
  __temp1276v__unsafe_offset=__temp1275v__unsafe_offset;
  __temp1276v__unsafe_align=__temp1275v__unsafe_align;
  __temp1277v=3;
  __temp_errcode=alloc__temp473v(&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_offset,&__temp1276v__unsafe_align,__temp1277v,&__temp1278v__unsafe_ptr,&__temp1278v__unsafe_size,&__temp1278v__unsafe_offset,&__temp1278v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1278v__unsafe_ptr;
  k__unsafe_size=__temp1278v__unsafe_size;
  k__unsafe_offset=__temp1278v__unsafe_offset;
  k__unsafe_align=__temp1278v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(k__unsafe_ptr,&__temp1279v____temp475v__);
  if(__temp1279v____temp475v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  k__unsafe_ptr=k__unsafe_ptr;
  free__temp466v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1268v,__temp825v);
  len__temp557v(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  exists__temp412v(t__unsafe_ptr,&__temp1274v____temp1257v____temp475v__);
  if(__temp1274v____temp1257v____temp475v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  t__unsafe_ptr=t__unsafe_ptr;
  free__temp466v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1325v=t__unsafe_ptr;
  *__temp1326v=t__unsafe_size;
  *__temp1327v=t__unsafe_offset;
  *__temp1328v=t__unsafe_align;
  *__temp1329v=j__unsafe_ptr;
  *__temp1330v=j__unsafe_size;
  *__temp1331v=j__unsafe_offset;
  *__temp1332v=j__unsafe_align;
  *__temp1333v=k__unsafe_ptr;
  *__temp1334v=k__unsafe_size;
  *__temp1335v=k__unsafe_offset;
  *__temp1336v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1280v() {
  char* __temp1281v__t__unsafe_ptr=0;
  uint64_t __temp1281v__t__unsafe_size=0;
  uint16_t __temp1281v__t__unsafe_offset=0;
  uint16_t __temp1281v__t__unsafe_align=0;
  char* __temp1281v__j__unsafe_ptr=0;
  uint64_t __temp1281v__j__unsafe_size=0;
  uint16_t __temp1281v__j__unsafe_offset=0;
  uint16_t __temp1281v__j__unsafe_align=0;
  char* __temp1281v__k__unsafe_ptr=0;
  uint64_t __temp1281v__k__unsafe_size=0;
  uint16_t __temp1281v__k__unsafe_offset=0;
  uint16_t __temp1281v__k__unsafe_align=0;
  char __temp1282v____temp1274v____temp1257v____temp475v__=0;
  char __temp1282v____temp1279v____temp475v__=0;
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
  uint64_t __temp1283v=0;
  char* __temp1284v__=0;
  double __temp1285v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1272v(&__temp1281v__t__unsafe_ptr,&__temp1281v__t__unsafe_size,&__temp1281v__t__unsafe_offset,&__temp1281v__t__unsafe_align,&__temp1281v__j__unsafe_ptr,&__temp1281v__j__unsafe_size,&__temp1281v__j__unsafe_offset,&__temp1281v__j__unsafe_align,&__temp1281v__k__unsafe_ptr,&__temp1281v__k__unsafe_size,&__temp1281v__k__unsafe_offset,&__temp1281v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1281v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1281v__t__unsafe_size;
  t__t__unsafe_offset=__temp1281v__t__unsafe_offset;
  t__t__unsafe_align=__temp1281v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1281v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1281v__j__unsafe_size;
  t__j__unsafe_offset=__temp1281v__j__unsafe_offset;
  t__j__unsafe_align=__temp1281v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1281v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1281v__k__unsafe_size;
  t__k__unsafe_offset=__temp1281v__k__unsafe_offset;
  t__k__unsafe_align=__temp1281v__k__unsafe_align;
  __temp1283v=1;
  __temp_errcode=get__temp550v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__temp1283v,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1284v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1285v__number,__temp1284v__,8);
  print__temp368v(__temp1285v__number);
  
  __temp_failure:exists__temp412v(__temp1281v__k__unsafe_ptr,&__temp1282v____temp1279v____temp475v__);
  if(__temp1282v____temp1279v____temp475v__){
  __temp1281v__k__unsafe_size=0;
  __temp1281v__k__unsafe_size=__temp1281v__k__unsafe_size;
  __temp1281v__k__unsafe_ptr=__temp1281v__k__unsafe_ptr;
  free__temp466v(&__temp1281v__k__unsafe_ptr);
  }
  print__temp361v(__temp1268v,__temp825v);
  len__temp557v(__temp1281v__t__unsafe_ptr,__temp1281v__t__unsafe_size,__temp1281v__t__unsafe_offset,__temp1281v__t__unsafe_align,&__temp1281v__t__unsafe_size);
  print__temp376v(__temp1281v__t__unsafe_size);
  exists__temp412v(__temp1281v__t__unsafe_ptr,&__temp1282v____temp1274v____temp1257v____temp475v__);
  if(__temp1282v____temp1274v____temp1257v____temp475v__){
  __temp1281v__t__unsafe_size=0;
  __temp1281v__t__unsafe_size=__temp1281v__t__unsafe_size;
  __temp1281v__t__unsafe_ptr=__temp1281v__t__unsafe_ptr;
  free__temp466v(&__temp1281v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1280v();return 0;}