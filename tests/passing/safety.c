#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1264v="going to deallocate of size: ";
const char* const __temp821v="";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1247v(char** __temp1283v, uint64_t* __temp1284v, uint16_t* __temp1285v, uint16_t* __temp1286v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1283v=unsafe_ptr;
  *__temp1284v=unsafe_size;
  *__temp1285v=unsafe_offset;
  *__temp1286v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1287v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1288v) {
  char* allocated=*__temp1288v;
  if(allocated){
  free(allocated);
  }
  *__temp1288v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1289v) {
  int value=0;
  *__temp1289v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1290v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1291v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1291v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1292v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1293v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1296v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1297v) {
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
  *__temp1297v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1298v, uint64_t* __temp1299v, uint16_t* __temp1300v, uint16_t* __temp1301v, uint64_t size, char** __temp1302v, uint64_t* __temp1303v, uint16_t* __temp1304v, uint16_t* __temp1305v) {
  char* buffer__unsafe_ptr=*__temp1298v;
  uint64_t buffer__unsafe_size=*__temp1299v;
  uint16_t buffer__unsafe_offset=*__temp1300v;
  uint16_t buffer__unsafe_align=*__temp1301v;
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
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
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
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1298v=buffer__unsafe_ptr;
  *__temp1299v=buffer__unsafe_size;
  *__temp1300v=buffer__unsafe_offset;
  *__temp1301v=buffer__unsafe_align;
  *__temp1302v=buffer__unsafe_ptr;
  *__temp1303v=buffer__unsafe_size;
  *__temp1304v=buffer__unsafe_offset;
  *__temp1305v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1306v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1307v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1308v) {
  *__temp1308v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1309v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1310v, uint64_t* __temp1311v, uint16_t* __temp1312v, uint16_t* __temp1313v, uint64_t i, char** __temp1314v) {
  char* buffer__unsafe_ptr=*__temp1310v;
  uint64_t buffer__unsafe_size=*__temp1311v;
  uint16_t buffer__unsafe_offset=*__temp1312v;
  uint16_t buffer__unsafe_align=*__temp1313v;
  char __temp540v__=0;
  uint64_t __temp541v__=0;
  uint64_t __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  char* __temp545v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp540v__);
  if(__temp540v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp541v__);
  mul__temp194v(i,__temp541v__,&__temp542v__);
  nat__temp470v(buffer__unsafe_offset,&__temp543v__);
  add__temp170v(__temp542v__,__temp543v__,&__temp544v__);
  add__temp468v(buffer__unsafe_ptr,__temp544v__,&__temp545v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1310v=buffer__unsafe_ptr;
  *__temp1311v=buffer__unsafe_size;
  *__temp1312v=buffer__unsafe_offset;
  *__temp1313v=buffer__unsafe_align;
  *__temp1314v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1315v) {
  char __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  char* __temp552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp547v__);
  if(__temp547v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp548v__);
  mul__temp194v(i,__temp548v__,&__temp549v__);
  nat__temp470v(buffer__unsafe_offset,&__temp550v__);
  add__temp170v(__temp549v__,__temp550v__,&__temp551v__);
  add__temp468v(buffer__unsafe_ptr,__temp551v__,&__temp552v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1315v=__temp552v__;
  
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

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1316v) {
  goto __temp_return;
  __temp_return:
  *__temp1316v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1246v(char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v) {
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__unsafe_size=0;
  uint16_t __temp1249v__unsafe_offset=0;
  uint16_t __temp1249v__unsafe_align=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint16_t __temp1250v__unsafe_offset=0;
  uint16_t __temp1250v__unsafe_align=0;
  uint64_t __temp1251v=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint16_t __temp1252v__unsafe_offset=0;
  uint16_t __temp1252v__unsafe_align=0;
  char __temp1253v____temp475v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __temp1254v=0;
  char* __temp1255v__=0;
  double __temp1256v=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__=0;
  double __temp1259v=0;
  uint64_t __temp1260v=0;
  char* __temp1261v__=0;
  double __temp1262v__number=0;
  uint64_t __temp1266v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1247v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_offset,&__temp1249v__unsafe_align);
  __temp1250v__unsafe_ptr=__temp1249v__unsafe_ptr;
  __temp1250v__unsafe_size=__temp1249v__unsafe_size;
  __temp1250v__unsafe_offset=__temp1249v__unsafe_offset;
  __temp1250v__unsafe_align=__temp1249v__unsafe_align;
  __temp1251v=2;
  __temp_errcode=alloc__temp473v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,__temp1251v,&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1252v__unsafe_ptr;
  x__unsafe_size=__temp1252v__unsafe_size;
  x__unsafe_offset=__temp1252v__unsafe_offset;
  x__unsafe_align=__temp1252v__unsafe_align;
  __temp1254v=0;
  __temp_errcode=mutget__temp539v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1254v,&__temp1255v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1256v=1.0;
  if(!__temp1255v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1255v__,&__temp1256v,8);
  __temp1257v=1;
  __temp_errcode=mutget__temp539v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1259v=2.0;
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1259v,8);
  __temp1260v=1;
  __temp_errcode=get__temp546v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1261v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1262v__number,__temp1261v__,8);
  print__temp368v(__temp1262v__number);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1264v,__temp821v);
  len__temp553v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  exists__temp412v(x__unsafe_ptr,&__temp1253v____temp475v__);
  if(__temp1253v____temp475v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__temp466v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1317v=x__unsafe_ptr;
  *__temp1318v=x__unsafe_size;
  *__temp1319v=x__unsafe_offset;
  *__temp1320v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1268v(char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v, char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v, char** __temp1329v, uint64_t* __temp1330v, uint16_t* __temp1331v, uint16_t* __temp1332v) {
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint16_t __temp1269v__unsafe_offset=0;
  uint16_t __temp1269v__unsafe_align=0;
  char __temp1270v____temp1253v____temp475v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint16_t __temp1271v__unsafe_offset=0;
  uint16_t __temp1271v__unsafe_align=0;
  char* __temp1272v__unsafe_ptr=0;
  uint64_t __temp1272v__unsafe_size=0;
  uint16_t __temp1272v__unsafe_offset=0;
  uint16_t __temp1272v__unsafe_align=0;
  uint64_t __temp1273v=0;
  char* __temp1274v__unsafe_ptr=0;
  uint64_t __temp1274v__unsafe_size=0;
  uint16_t __temp1274v__unsafe_offset=0;
  uint16_t __temp1274v__unsafe_align=0;
  char __temp1275v____temp475v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1246v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_offset,&__temp1269v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1269v__unsafe_ptr;
  t__unsafe_size=__temp1269v__unsafe_size;
  t__unsafe_offset=__temp1269v__unsafe_offset;
  t__unsafe_align=__temp1269v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____temp_buffer____buffer__temp1247v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_offset,&__temp1271v__unsafe_align);
  __temp1272v__unsafe_ptr=__temp1271v__unsafe_ptr;
  __temp1272v__unsafe_size=__temp1271v__unsafe_size;
  __temp1272v__unsafe_offset=__temp1271v__unsafe_offset;
  __temp1272v__unsafe_align=__temp1271v__unsafe_align;
  __temp1273v=3;
  __temp_errcode=alloc__temp473v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align,__temp1273v,&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_offset,&__temp1274v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1274v__unsafe_ptr;
  k__unsafe_size=__temp1274v__unsafe_size;
  k__unsafe_offset=__temp1274v__unsafe_offset;
  k__unsafe_align=__temp1274v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(k__unsafe_ptr,&__temp1275v____temp475v__);
  if(__temp1275v____temp475v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  k__unsafe_ptr=k__unsafe_ptr;
  free__temp466v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1264v,__temp821v);
  len__temp553v(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  exists__temp412v(t__unsafe_ptr,&__temp1270v____temp1253v____temp475v__);
  if(__temp1270v____temp1253v____temp475v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  t__unsafe_ptr=t__unsafe_ptr;
  free__temp466v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1321v=t__unsafe_ptr;
  *__temp1322v=t__unsafe_size;
  *__temp1323v=t__unsafe_offset;
  *__temp1324v=t__unsafe_align;
  *__temp1325v=j__unsafe_ptr;
  *__temp1326v=j__unsafe_size;
  *__temp1327v=j__unsafe_offset;
  *__temp1328v=j__unsafe_align;
  *__temp1329v=k__unsafe_ptr;
  *__temp1330v=k__unsafe_size;
  *__temp1331v=k__unsafe_offset;
  *__temp1332v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1276v() {
  char* __temp1277v__t__unsafe_ptr=0;
  uint64_t __temp1277v__t__unsafe_size=0;
  uint16_t __temp1277v__t__unsafe_offset=0;
  uint16_t __temp1277v__t__unsafe_align=0;
  char* __temp1277v__j__unsafe_ptr=0;
  uint64_t __temp1277v__j__unsafe_size=0;
  uint16_t __temp1277v__j__unsafe_offset=0;
  uint16_t __temp1277v__j__unsafe_align=0;
  char* __temp1277v__k__unsafe_ptr=0;
  uint64_t __temp1277v__k__unsafe_size=0;
  uint16_t __temp1277v__k__unsafe_offset=0;
  uint16_t __temp1277v__k__unsafe_align=0;
  char __temp1278v____temp1270v____temp1253v____temp475v__=0;
  char __temp1278v____temp1275v____temp475v__=0;
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
  uint64_t __temp1279v=0;
  char* __temp1280v__=0;
  double __temp1281v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1268v(&__temp1277v__t__unsafe_ptr,&__temp1277v__t__unsafe_size,&__temp1277v__t__unsafe_offset,&__temp1277v__t__unsafe_align,&__temp1277v__j__unsafe_ptr,&__temp1277v__j__unsafe_size,&__temp1277v__j__unsafe_offset,&__temp1277v__j__unsafe_align,&__temp1277v__k__unsafe_ptr,&__temp1277v__k__unsafe_size,&__temp1277v__k__unsafe_offset,&__temp1277v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1277v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1277v__t__unsafe_size;
  t__t__unsafe_offset=__temp1277v__t__unsafe_offset;
  t__t__unsafe_align=__temp1277v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1277v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1277v__j__unsafe_size;
  t__j__unsafe_offset=__temp1277v__j__unsafe_offset;
  t__j__unsafe_align=__temp1277v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1277v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1277v__k__unsafe_size;
  t__k__unsafe_offset=__temp1277v__k__unsafe_offset;
  t__k__unsafe_align=__temp1277v__k__unsafe_align;
  __temp1279v=1;
  __temp_errcode=get__temp546v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1281v__number,__temp1280v__,8);
  print__temp368v(__temp1281v__number);
  
  __temp_failure:exists__temp412v(__temp1277v__k__unsafe_ptr,&__temp1278v____temp1275v____temp475v__);
  if(__temp1278v____temp1275v____temp475v__){
  __temp1277v__k__unsafe_size=0;
  __temp1277v__k__unsafe_size=__temp1277v__k__unsafe_size;
  __temp1277v__k__unsafe_ptr=__temp1277v__k__unsafe_ptr;
  free__temp466v(&__temp1277v__k__unsafe_ptr);
  }
  print__temp361v(__temp1264v,__temp821v);
  len__temp553v(__temp1277v__t__unsafe_ptr,__temp1277v__t__unsafe_size,__temp1277v__t__unsafe_offset,__temp1277v__t__unsafe_align,&__temp1277v__t__unsafe_size);
  print__temp376v(__temp1277v__t__unsafe_size);
  exists__temp412v(__temp1277v__t__unsafe_ptr,&__temp1278v____temp1270v____temp1253v____temp475v__);
  if(__temp1278v____temp1270v____temp1253v____temp475v__){
  __temp1277v__t__unsafe_size=0;
  __temp1277v__t__unsafe_size=__temp1277v__t__unsafe_size;
  __temp1277v__t__unsafe_ptr=__temp1277v__t__unsafe_ptr;
  free__temp466v(&__temp1277v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1276v();return 0;}