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

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1288v) {
  char* allocated=*__temp1288v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
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

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1294v) {
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

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1296v) {
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
  *__temp1296v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1297v, uint64_t* __temp1298v, uint16_t* __temp1299v, uint16_t* __temp1300v, uint64_t size, char** __temp1301v, uint64_t* __temp1302v, uint16_t* __temp1303v, uint16_t* __temp1304v) {
  char* buffer__unsafe_ptr=*__temp1297v;
  uint64_t buffer__unsafe_size=*__temp1298v;
  uint16_t buffer__unsafe_offset=*__temp1299v;
  uint16_t buffer__unsafe_align=*__temp1300v;
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
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_offset;
  *__temp1300v=buffer__unsafe_align;
  *__temp1301v=buffer__unsafe_ptr;
  *__temp1302v=buffer__unsafe_size;
  *__temp1303v=buffer__unsafe_offset;
  *__temp1304v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1305v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1306v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1307v) {
  *__temp1307v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1308v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1308v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp541v(char** __temp1309v, uint64_t* __temp1310v, uint16_t* __temp1311v, uint16_t* __temp1312v, uint64_t i, char** __temp1313v) {
  char* buffer__unsafe_ptr=*__temp1309v;
  uint64_t buffer__unsafe_size=*__temp1310v;
  uint16_t buffer__unsafe_offset=*__temp1311v;
  uint16_t buffer__unsafe_align=*__temp1312v;
  char __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  char* __temp547v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp542v__);
  if(__temp542v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp543v__);
  mul__temp194v(i,__temp543v__,&__temp544v__);
  nat__temp465v(buffer__unsafe_offset,&__temp545v__);
  add__temp170v(__temp544v__,__temp545v__,&__temp546v__);
  add__temp463v(buffer__unsafe_ptr,__temp546v__,&__temp547v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1309v=buffer__unsafe_ptr;
  *__temp1310v=buffer__unsafe_size;
  *__temp1311v=buffer__unsafe_offset;
  *__temp1312v=buffer__unsafe_align;
  *__temp1313v=__temp547v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1314v) {
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
  *__temp1314v=__temp554v__;
  
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

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1315v) {
  goto __temp_return;
  __temp_return:
  *__temp1315v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1246v(char** __temp1316v, uint64_t* __temp1317v, uint16_t* __temp1318v, uint16_t* __temp1319v) {
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
  char __temp1253v____temp470v__=0;
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
  double __temp1262v__value=0;
  uint64_t __temp1266v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1247v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_offset,&__temp1249v__unsafe_align);
  __temp1250v__unsafe_ptr=__temp1249v__unsafe_ptr;
  __temp1250v__unsafe_size=__temp1249v__unsafe_size;
  __temp1250v__unsafe_offset=__temp1249v__unsafe_offset;
  __temp1250v__unsafe_align=__temp1249v__unsafe_align;
  __temp1251v=2;
  __temp_errcode=alloc__temp468v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_offset,&__temp1250v__unsafe_align,__temp1251v,&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_offset,&__temp1252v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1252v__unsafe_ptr;
  x__unsafe_size=__temp1252v__unsafe_size;
  x__unsafe_offset=__temp1252v__unsafe_offset;
  x__unsafe_align=__temp1252v__unsafe_align;
  __temp1254v=0;
  __temp_errcode=mutget__temp541v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1254v,&__temp1255v__);
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
  __temp_errcode=mutget__temp541v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__temp1257v,&__temp1258v__);
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
  __temp_errcode=get__temp548v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1261v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1262v__value,__temp1261v__,8);
  print__temp368v(__temp1262v__value);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1264v,__temp821v);
  len__temp555v(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  exists__temp412v(x__unsafe_ptr,&__temp1253v____temp470v__);
  if(__temp1253v____temp470v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp461v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1316v=x__unsafe_ptr;
  *__temp1317v=x__unsafe_size;
  *__temp1318v=x__unsafe_offset;
  *__temp1319v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1268v(char** __temp1320v, uint64_t* __temp1321v, uint16_t* __temp1322v, uint16_t* __temp1323v, char** __temp1324v, uint64_t* __temp1325v, uint16_t* __temp1326v, uint16_t* __temp1327v, char** __temp1328v, uint64_t* __temp1329v, uint16_t* __temp1330v, uint16_t* __temp1331v) {
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint16_t __temp1269v__unsafe_offset=0;
  uint16_t __temp1269v__unsafe_align=0;
  char __temp1270v____temp1253v____temp470v__=0;
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
  char __temp1275v____temp470v__=0;
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
  __temp_errcode=alloc__temp468v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align,__temp1273v,&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_offset,&__temp1274v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1274v__unsafe_ptr;
  k__unsafe_size=__temp1274v__unsafe_size;
  k__unsafe_offset=__temp1274v__unsafe_offset;
  k__unsafe_align=__temp1274v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(k__unsafe_ptr,&__temp1275v____temp470v__);
  if(__temp1275v____temp470v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp461v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1264v,__temp821v);
  len__temp555v(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  exists__temp412v(t__unsafe_ptr,&__temp1270v____temp1253v____temp470v__);
  if(__temp1270v____temp1253v____temp470v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp461v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1320v=t__unsafe_ptr;
  *__temp1321v=t__unsafe_size;
  *__temp1322v=t__unsafe_offset;
  *__temp1323v=t__unsafe_align;
  *__temp1324v=j__unsafe_ptr;
  *__temp1325v=j__unsafe_size;
  *__temp1326v=j__unsafe_offset;
  *__temp1327v=j__unsafe_align;
  *__temp1328v=k__unsafe_ptr;
  *__temp1329v=k__unsafe_size;
  *__temp1330v=k__unsafe_offset;
  *__temp1331v=k__unsafe_align;
  
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
  char __temp1278v____temp1270v____temp1253v____temp470v__=0;
  char __temp1278v____temp1275v____temp470v__=0;
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
  double __temp1281v__value=0;
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
  __temp_errcode=get__temp548v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__temp1279v,&__temp1280v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1280v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1281v__value,__temp1280v__,8);
  print__temp368v(__temp1281v__value);
  
  __temp_failure:exists__temp412v(__temp1277v__k__unsafe_ptr,&__temp1278v____temp1275v____temp470v__);
  if(__temp1278v____temp1275v____temp470v__){
  __temp1277v__k__unsafe_size=0;
  __temp1277v__k__unsafe_size=__temp1277v__k__unsafe_size;
  free__temp461v(&__temp1277v__k__unsafe_ptr);
  }
  print__temp361v(__temp1264v,__temp821v);
  len__temp555v(__temp1277v__t__unsafe_ptr,__temp1277v__t__unsafe_size,__temp1277v__t__unsafe_offset,__temp1277v__t__unsafe_align,&__temp1277v__t__unsafe_size);
  print__temp376v(__temp1277v__t__unsafe_size);
  exists__temp412v(__temp1277v__t__unsafe_ptr,&__temp1278v____temp1270v____temp1253v____temp470v__);
  if(__temp1278v____temp1270v____temp1253v____temp470v__){
  __temp1277v__t__unsafe_size=0;
  __temp1277v__t__unsafe_size=__temp1277v__t__unsafe_size;
  free__temp461v(&__temp1277v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1276v();return 0;}