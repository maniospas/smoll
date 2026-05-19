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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1270v(char** __temp1302v, uint64_t* __temp1303v, uint16_t* __temp1304v, uint16_t* __temp1305v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__temp1302v=unsafe_ptr;
  *__temp1303v=unsafe_size;
  *__temp1304v=unsafe_offset;
  *__temp1305v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1306v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1307v) {
  char* allocated=*__temp1307v;
  if(allocated){
  free(allocated);
  }
  *__temp1307v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1308v) {
  int value=0;
  *__temp1308v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1309v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1310v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1310v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1311v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1312v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1313v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1313v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1314v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1314v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1315v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1316v) {
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
  *__temp1316v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v, uint64_t size, char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v) {
  char* buffer__unsafe_ptr=*__temp1317v;
  uint64_t buffer__unsafe_size=*__temp1318v;
  uint16_t buffer__unsafe_offset=*__temp1319v;
  uint16_t buffer__unsafe_align=*__temp1320v;
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
  *__temp1317v=buffer__unsafe_ptr;
  *__temp1318v=buffer__unsafe_size;
  *__temp1319v=buffer__unsafe_offset;
  *__temp1320v=buffer__unsafe_align;
  *__temp1321v=buffer__unsafe_ptr;
  *__temp1322v=buffer__unsafe_size;
  *__temp1323v=buffer__unsafe_offset;
  *__temp1324v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1325v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1325v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1326v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1326v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1327v) {
  *__temp1327v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1328v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1328v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1329v, uint64_t* __temp1330v, uint16_t* __temp1331v, uint16_t* __temp1332v, uint64_t i, char** __temp1333v) {
  char* buffer__unsafe_ptr=*__temp1329v;
  uint64_t buffer__unsafe_size=*__temp1330v;
  uint16_t buffer__unsafe_offset=*__temp1331v;
  uint16_t buffer__unsafe_align=*__temp1332v;
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
  *__temp1329v=buffer__unsafe_ptr;
  *__temp1330v=buffer__unsafe_size;
  *__temp1331v=buffer__unsafe_offset;
  *__temp1332v=buffer__unsafe_align;
  *__temp1333v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1246v(double x, double y, double* __temp1334v, double* __temp1335v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=x;
  *__temp1335v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1266v(double x, double y, double z, double* __temp1336v, double* __temp1337v, double* __temp1338v) {
  double __temp1267v__x=0;
  double __temp1267v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1246v(x,y,&__temp1267v__x,&__temp1267v__y);
  plane__x=__temp1267v__x;
  plane__y=__temp1267v__y;
  goto __temp_return;
  __temp_return:
  *__temp1336v=plane__x;
  *__temp1337v=plane__y;
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1339v) {
  goto __temp_return;
  __temp_return:
  *__temp1339v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1340v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1341v) {
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
  *__temp1341v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1342v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1342v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1343v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1343v=z;
}

static inline __attribute__((always_inline)) int sum__temp1249v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, double* __temp1348v, double* __temp1349v) {
  char* v__unsafe_ptr=*__temp1344v;
  uint64_t v__unsafe_size=*__temp1345v;
  uint16_t v__unsafe_offset=*__temp1346v;
  uint16_t v__unsafe_align=*__temp1347v;
  double __temp1250v=0;
  double __temp1251v=0;
  double x=0;
  double __temp1252v=0;
  double __temp1253v=0;
  double y=0;
  uint64_t __temp1254v=0;
  uint64_t __temp1255v=0;
  uint64_t i=0;
  uint64_t __temp1256v__=0;
  char __temp1257v__=0;
  char* __temp1258v__=0;
  double __temp1259v__x=0;
  double __temp1259v__y=0;
  double __temp1260v__=0;
  char* __temp1261v__=0;
  double __temp1262v__x=0;
  double __temp1262v__y=0;
  double __temp1263v__=0;
  uint64_t __temp1264v=0;
  uint64_t __temp1265v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1250v=0.0;
  __temp1251v=__temp1250v;
  x=__temp1251v;
  __temp1252v=0.0;
  __temp1253v=__temp1252v;
  y=__temp1253v;
  __temp1254v=0;
  __temp1255v=__temp1254v;
  i=__temp1255v;
  while(1){
  len__temp553v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__temp1256v__);
  lt__temp247v(i,__temp1256v__,&__temp1257v__);
  if(!__temp1257v__){
  break;
  }
  __temp_errcode=get__temp546v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1259v__x,__temp1258v__,8);
  memcpy(&__temp1259v__y,__temp1258v__+8,8);
  add__temp148v(x,__temp1259v__x,&__temp1260v__);
  x=__temp1260v__;
  __temp_errcode=get__temp546v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1261v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1262v__x,__temp1261v__,8);
  memcpy(&__temp1262v__y,__temp1261v__+8,8);
  add__temp148v(y,__temp1262v__y,&__temp1263v__);
  y=__temp1263v__;
  __temp1264v=1;
  add__temp170v(i,__temp1264v,&__temp1265v__);
  i=__temp1265v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1344v=v__unsafe_ptr;
  *__temp1345v=v__unsafe_size;
  *__temp1346v=v__unsafe_offset;
  *__temp1347v=v__unsafe_align;
  *__temp1348v=x;
  *__temp1349v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1269v() {
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
  char __temp1276v____temp475v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __temp1277v=0;
  char* __temp1278v__=0;
  double __temp1279v=0;
  double __temp1280v=0;
  double __temp1281v=0;
  double __temp1282v=0;
  double __temp1283v=0;
  double __temp1284v=0;
  double __temp1285v__plane__x=0;
  double __temp1285v__plane__y=0;
  double __temp1285v__z=0;
  uint64_t __temp1286v=0;
  char* __temp1287v__=0;
  double __temp1288v=0;
  double __temp1289v=0;
  double __temp1290v=0;
  double __temp1291v=0;
  double __temp1292v=0;
  double __temp1293v=0;
  double __temp1294v__plane__x=0;
  double __temp1294v__plane__y=0;
  double __temp1294v__z=0;
  char* __temp1295v__unsafe_ptr=0;
  uint64_t __temp1295v__unsafe_size=0;
  uint16_t __temp1295v__unsafe_offset=0;
  uint16_t __temp1295v__unsafe_align=0;
  double __temp1299v__x=0;
  double __temp1299v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D____temp_buffer____buffer__temp1270v(&__temp1272v__unsafe_ptr,&__temp1272v__unsafe_size,&__temp1272v__unsafe_offset,&__temp1272v__unsafe_align);
  __temp1273v__unsafe_ptr=__temp1272v__unsafe_ptr;
  __temp1273v__unsafe_size=__temp1272v__unsafe_size;
  __temp1273v__unsafe_offset=__temp1272v__unsafe_offset;
  __temp1273v__unsafe_align=__temp1272v__unsafe_align;
  __temp1274v=10;
  __temp_errcode=alloc__temp473v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_offset,&__temp1273v__unsafe_align,__temp1274v,&__temp1275v__unsafe_ptr,&__temp1275v__unsafe_size,&__temp1275v__unsafe_offset,&__temp1275v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1275v__unsafe_ptr;
  points__unsafe_size=__temp1275v__unsafe_size;
  points__unsafe_offset=__temp1275v__unsafe_offset;
  points__unsafe_align=__temp1275v__unsafe_align;
  __temp1277v=0;
  __temp_errcode=mutget__temp539v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1277v,&__temp1278v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1279v=1.0;
  __temp1280v=__temp1279v;
  __temp1281v=2.0;
  __temp1282v=__temp1281v;
  __temp1283v=3.0;
  __temp1284v=__temp1283v;
  Point3D__temp1266v(__temp1280v,__temp1282v,__temp1284v,&__temp1285v__plane__x,&__temp1285v__plane__y,&__temp1285v__z);
  if(!__temp1278v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1278v__,&__temp1285v__plane__x,8);
  memcpy(__temp1278v__+8,&__temp1285v__plane__y,8);
  memcpy(__temp1278v__+16,&__temp1285v__z,8);
  __temp1286v=1;
  __temp_errcode=mutget__temp539v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1286v,&__temp1287v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1288v=1.0;
  __temp1289v=__temp1288v;
  __temp1290v=2.0;
  __temp1291v=__temp1290v;
  __temp1292v=3.0;
  __temp1293v=__temp1292v;
  Point3D__temp1266v(__temp1289v,__temp1291v,__temp1293v,&__temp1294v__plane__x,&__temp1294v__plane__y,&__temp1294v__z);
  if(!__temp1287v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1287v__,&__temp1294v__plane__x,8);
  memcpy(__temp1287v__+8,&__temp1294v__plane__y,8);
  memcpy(__temp1287v__+16,&__temp1294v__z,8);
  __temp1295v__unsafe_ptr=points__unsafe_ptr;
  __temp1295v__unsafe_size=points__unsafe_size;
  __temp1295v__unsafe_offset=points__unsafe_offset+0;
  __temp1295v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1249v(&__temp1295v__unsafe_ptr,&__temp1295v__unsafe_size,&__temp1295v__unsafe_offset,&__temp1295v__unsafe_align,&__temp1299v__x,&__temp1299v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1299v__x;
  sums__y=__temp1299v__y;
  print__temp368v(sums__x);
  print__temp368v(sums__y);
  
  __temp_failure:exists__temp412v(__temp1275v__unsafe_ptr,&__temp1276v____temp475v__);
  if(__temp1276v____temp475v__){
  __temp1275v__unsafe_size=0;
  __temp1275v__unsafe_size=__temp1275v__unsafe_size;
  __temp1275v__unsafe_ptr=__temp1275v__unsafe_ptr;
  free__temp466v(&__temp1275v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1269v();return 0;}