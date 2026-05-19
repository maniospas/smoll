#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1267v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1271v(char** __temp1297v, uint64_t* __temp1298v, uint16_t* __temp1299v, uint16_t* __temp1300v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__temp1297v=unsafe_ptr;
  *__temp1298v=unsafe_size;
  *__temp1299v=unsafe_offset;
  *__temp1300v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1301v) {
  int value=0;
  *__temp1301v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1302v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1302v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1303v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1303v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1304v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1305v) {
  char* allocated=*__temp1305v;
  if(allocated){
  free(allocated);
  }
  *__temp1305v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1306v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1307v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1307v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1308v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1309v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1310v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1311v) {
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
  *__temp1311v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1312v, uint64_t* __temp1313v, uint16_t* __temp1314v, uint16_t* __temp1315v, uint64_t size, char** __temp1316v, uint64_t* __temp1317v, uint16_t* __temp1318v, uint16_t* __temp1319v) {
  char* buffer__unsafe_ptr=*__temp1312v;
  uint64_t buffer__unsafe_size=*__temp1313v;
  uint16_t buffer__unsafe_offset=*__temp1314v;
  uint16_t buffer__unsafe_align=*__temp1315v;
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
  *__temp1312v=buffer__unsafe_ptr;
  *__temp1313v=buffer__unsafe_size;
  *__temp1314v=buffer__unsafe_offset;
  *__temp1315v=buffer__unsafe_align;
  *__temp1316v=__temp486v__unsafe_ptr;
  *__temp1317v=__temp486v__unsafe_size;
  *__temp1318v=__temp486v__unsafe_offset;
  *__temp1319v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1320v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1321v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1321v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1322v) {
  *__temp1322v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1323v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1323v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1324v, uint64_t* __temp1325v, uint16_t* __temp1326v, uint16_t* __temp1327v, uint64_t i, char** __temp1328v) {
  char* buffer__unsafe_ptr=*__temp1324v;
  uint64_t buffer__unsafe_size=*__temp1325v;
  uint16_t buffer__unsafe_offset=*__temp1326v;
  uint16_t buffer__unsafe_align=*__temp1327v;
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
  *__temp1324v=buffer__unsafe_ptr;
  *__temp1325v=buffer__unsafe_size;
  *__temp1326v=buffer__unsafe_offset;
  *__temp1327v=buffer__unsafe_align;
  *__temp1328v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1247v(double x, double y, double* __temp1329v, double* __temp1330v) {
  goto __temp_return;
  __temp_return:
  *__temp1329v=x;
  *__temp1330v=y;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1265v(double x, double y, double z, double* __temp1331v, double* __temp1332v, double* __temp1333v) {
  double __temp1266v__x=0;
  double __temp1266v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1247v(x,y,&__temp1266v__x,&__temp1266v__y);
  plane__x=__temp1266v__x;
  plane__y=__temp1266v__y;
  print__temp363v(__temp1267v);
  goto __temp_return;
  __temp_return:
  *__temp1331v=plane__x;
  *__temp1332v=plane__y;
  *__temp1333v=z;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1334v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1335v, uint64_t* __temp1336v) {
  int __temp437v=0;
  uint64_t __temp438v=0;
  uint64_t _from=0;
  uint64_t __temp439v=0;
  uint64_t from=0;
  __temp438v=0;
  _from=__temp438v;
  __temp439v=_from;
  from=__temp439v;
  goto __temp_return;
  __temp_return:
  *__temp1335v=from;
  *__temp1336v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1337v, uint64_t r__to, uint64_t* __temp1338v) {
  uint64_t r__from=*__temp1337v;
  char __temp441v__=0;
  uint64_t ret=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp441v__);
  if(__temp441v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp442v=1;
  add__temp170v(ret,__temp442v,&__temp443v__);
  r__from=__temp443v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1337v=r__from;
  *__temp1338v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1339v) {
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
  *__temp1339v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1340v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1340v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1341v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1341v=z;
}

static inline __attribute__((always_inline)) int sum__temp1250v(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __temp1342v, double* __temp1343v) {
  double __temp1251v=0;
  double __temp1252v=0;
  double x=0;
  double __temp1253v=0;
  double __temp1254v=0;
  double y=0;
  uint64_t __temp1255v__=0;
  uint64_t __temp1256v__from=0;
  uint64_t __temp1256v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1257v=0;
  uint64_t __temp1258v__=0;
  uint64_t i=0;
  char* __temp1259v__=0;
  double __temp1260v__x=0;
  double __temp1260v__y=0;
  double __temp1261v__=0;
  char* __temp1262v__=0;
  double __temp1263v__x=0;
  double __temp1263v__y=0;
  double __temp1264v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1251v=0.0;
  __temp1252v=__temp1251v;
  x=__temp1252v;
  __temp1253v=0.0;
  __temp1254v=__temp1253v;
  y=__temp1254v;
  len__temp559v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__temp1255v__);
  range__temp436v(__temp1255v__,&__temp1256v__from,&__temp1256v__to);
  it__from=__temp1256v__from;
  it__to=__temp1256v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1258v__);
  __temp1257v=__temp_complain;
  i=__temp1258v__;
  __temp1257v=__temp1257v==0;
  if(!__temp1257v){
  break;
  }
  __temp_errcode=get__temp552v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1260v__x,__temp1259v__,8);
  memcpy(&__temp1260v__y,__temp1259v__+8,8);
  add__temp148v(x,__temp1260v__x,&__temp1261v__);
  x=__temp1261v__;
  __temp_errcode=get__temp552v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1263v__x,__temp1262v__,8);
  memcpy(&__temp1263v__y,__temp1262v__+8,8);
  add__temp148v(y,__temp1263v__y,&__temp1264v__);
  y=__temp1264v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1342v=x;
  *__temp1343v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1270v() {
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
  uint64_t __temp1277v____temp475v=0;
  char __temp1277v____temp476v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __temp1278v=0;
  char* __temp1279v__=0;
  double __temp1280v=0;
  double __temp1281v=0;
  double __temp1282v=0;
  double __temp1283v__plane__x=0;
  double __temp1283v__plane__y=0;
  double __temp1283v__z=0;
  uint64_t __temp1284v=0;
  char* __temp1285v__=0;
  double __temp1286v=0;
  double __temp1287v=0;
  double __temp1288v=0;
  double __temp1289v__plane__x=0;
  double __temp1289v__plane__y=0;
  double __temp1289v__z=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __temp1294v__x=0;
  double __temp1294v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D____temp_buffer____buffer__temp1271v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align);
  __temp1274v__unsafe_ptr=__temp1273v__unsafe_ptr;
  __temp1274v__unsafe_size=__temp1273v__unsafe_size;
  __temp1274v__unsafe_offset=__temp1273v__unsafe_offset;
  __temp1274v__unsafe_align=__temp1273v__unsafe_align;
  __temp1275v=10;
  __temp_errcode=alloc__temp473v(&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_offset,&__temp1274v__unsafe_align,__temp1275v,&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_offset,&__temp1276v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1276v__unsafe_ptr;
  points__unsafe_size=__temp1276v__unsafe_size;
  points__unsafe_offset=__temp1276v__unsafe_offset;
  points__unsafe_align=__temp1276v__unsafe_align;
  __temp1278v=0;
  __temp_errcode=mutget__temp545v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1278v,&__temp1279v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1280v=1.0;
  __temp1281v=2.0;
  __temp1282v=3.0;
  Point3D__temp1265v(__temp1280v,__temp1281v,__temp1282v,&__temp1283v__plane__x,&__temp1283v__plane__y,&__temp1283v__z);
  if(!__temp1279v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1279v__,&__temp1283v__plane__x,8);
  memcpy(__temp1279v__+8,&__temp1283v__plane__y,8);
  memcpy(__temp1279v__+16,&__temp1283v__z,8);
  __temp1284v=1;
  __temp_errcode=mutget__temp545v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1284v,&__temp1285v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1286v=1.0;
  __temp1287v=2.0;
  __temp1288v=3.0;
  Point3D__temp1265v(__temp1286v,__temp1287v,__temp1288v,&__temp1289v__plane__x,&__temp1289v__plane__y,&__temp1289v__z);
  if(!__temp1285v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1285v__,&__temp1289v__plane__x,8);
  memcpy(__temp1285v__+8,&__temp1289v__plane__y,8);
  memcpy(__temp1285v__+16,&__temp1289v__z,8);
  __temp1290v__unsafe_ptr=points__unsafe_ptr;
  __temp1290v__unsafe_size=points__unsafe_size;
  __temp1290v__unsafe_offset=points__unsafe_offset+0;
  __temp1290v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1290v__unsafe_ptr;
  plane__unsafe_size=__temp1290v__unsafe_size;
  plane__unsafe_offset=__temp1290v__unsafe_offset;
  plane__unsafe_align=__temp1290v__unsafe_align;
  __temp_errcode=sum__temp1250v(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__temp1294v__x,&__temp1294v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1294v__x;
  sums__y=__temp1294v__y;
  print__temp368v(sums__x);
  print__temp368v(sums__y);
  
  __temp_failure:__temp1277v____temp475v=0;
  neq__temp142v(__temp1276v__unsafe_size,__temp1277v____temp475v,&__temp1277v____temp476v__);
  if(__temp1277v____temp476v__){
  __temp1276v__unsafe_size=0;
  __temp1276v__unsafe_size=__temp1276v__unsafe_size;
  __temp1276v__unsafe_ptr=__temp1276v__unsafe_ptr;
  free__temp466v(&__temp1276v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1270v();return 0;}