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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1274v(char** __temp1306v, uint64_t* __temp1307v, uint16_t* __temp1308v, uint16_t* __temp1309v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__temp1306v=unsafe_ptr;
  *__temp1307v=unsafe_size;
  *__temp1308v=unsafe_offset;
  *__temp1309v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1310v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1311v) {
  char* allocated=*__temp1311v;
  if(allocated){
  free(allocated);
  }
  *__temp1311v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1312v) {
  int value=0;
  *__temp1312v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1313v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1313v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1314v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1314v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1315v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1316v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1316v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1317v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1317v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1318v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1318v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1319v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1320v) {
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
  *__temp1320v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v, uint64_t size, char** __temp1325v, uint64_t* __temp1326v, uint16_t* __temp1327v, uint16_t* __temp1328v) {
  char* buffer__unsafe_ptr=*__temp1321v;
  uint64_t buffer__unsafe_size=*__temp1322v;
  uint16_t buffer__unsafe_offset=*__temp1323v;
  uint16_t buffer__unsafe_align=*__temp1324v;
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
  *__temp1321v=buffer__unsafe_ptr;
  *__temp1322v=buffer__unsafe_size;
  *__temp1323v=buffer__unsafe_offset;
  *__temp1324v=buffer__unsafe_align;
  *__temp1325v=__temp485v__unsafe_ptr;
  *__temp1326v=__temp485v__unsafe_size;
  *__temp1327v=__temp485v__unsafe_offset;
  *__temp1328v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1329v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1329v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1330v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1330v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1331v) {
  *__temp1331v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1332v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1332v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1333v, uint64_t* __temp1334v, uint16_t* __temp1335v, uint16_t* __temp1336v, uint64_t i, char** __temp1337v) {
  char* buffer__unsafe_ptr=*__temp1333v;
  uint64_t buffer__unsafe_size=*__temp1334v;
  uint16_t buffer__unsafe_offset=*__temp1335v;
  uint16_t buffer__unsafe_align=*__temp1336v;
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
  *__temp1333v=buffer__unsafe_ptr;
  *__temp1334v=buffer__unsafe_size;
  *__temp1335v=buffer__unsafe_offset;
  *__temp1336v=buffer__unsafe_align;
  *__temp1337v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1250v(double x, double y, double* __temp1338v, double* __temp1339v) {
  goto __temp_return;
  __temp_return:
  *__temp1338v=x;
  *__temp1339v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1270v(double x, double y, double z, double* __temp1340v, double* __temp1341v, double* __temp1342v) {
  double __temp1271v__x=0;
  double __temp1271v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1250v(x,y,&__temp1271v__x,&__temp1271v__y);
  plane__x=__temp1271v__x;
  plane__y=__temp1271v__y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=plane__x;
  *__temp1341v=plane__y;
  *__temp1342v=z;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1343v) {
  goto __temp_return;
  __temp_return:
  *__temp1343v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1344v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1344v=z;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1345v) {
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
  *__temp1345v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1346v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1346v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1347v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1347v=z;
}

static inline __attribute__((always_inline)) int sum__temp1253v(char** __temp1348v, uint64_t* __temp1349v, uint16_t* __temp1350v, uint16_t* __temp1351v, double* __temp1352v, double* __temp1353v) {
  char* v__unsafe_ptr=*__temp1348v;
  uint64_t v__unsafe_size=*__temp1349v;
  uint16_t v__unsafe_offset=*__temp1350v;
  uint16_t v__unsafe_align=*__temp1351v;
  double __temp1254v=0;
  double __temp1255v=0;
  double x=0;
  double __temp1256v=0;
  double __temp1257v=0;
  double y=0;
  uint64_t __temp1258v=0;
  uint64_t __temp1259v=0;
  uint64_t i=0;
  uint64_t __temp1260v__=0;
  char __temp1261v__=0;
  char* __temp1262v__=0;
  double __temp1263v__x=0;
  double __temp1263v__y=0;
  double __temp1264v__=0;
  char* __temp1265v__=0;
  double __temp1266v__x=0;
  double __temp1266v__y=0;
  double __temp1267v__=0;
  uint64_t __temp1268v=0;
  uint64_t __temp1269v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1254v=0.0;
  __temp1255v=__temp1254v;
  x=__temp1255v;
  __temp1256v=0.0;
  __temp1257v=__temp1256v;
  y=__temp1257v;
  __temp1258v=0;
  __temp1259v=__temp1258v;
  i=__temp1259v;
  while(1){
  len__temp557v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__temp1260v__);
  lt__temp247v(i,__temp1260v__,&__temp1261v__);
  if(!__temp1261v__){
  break;
  }
  __temp_errcode=get__temp550v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1263v__x,__temp1262v__,8);
  memcpy(&__temp1263v__y,__temp1262v__+8,8);
  add__temp148v(x,__temp1263v__x,&__temp1264v__);
  x=__temp1264v__;
  __temp_errcode=get__temp550v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1265v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1265v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1266v__x,__temp1265v__,8);
  memcpy(&__temp1266v__y,__temp1265v__+8,8);
  add__temp148v(y,__temp1266v__y,&__temp1267v__);
  y=__temp1267v__;
  __temp1268v=1;
  add__temp170v(i,__temp1268v,&__temp1269v__);
  i=__temp1269v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1348v=v__unsafe_ptr;
  *__temp1349v=v__unsafe_size;
  *__temp1350v=v__unsafe_offset;
  *__temp1351v=v__unsafe_align;
  *__temp1352v=x;
  *__temp1353v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1273v() {
  char* __temp1276v__unsafe_ptr=0;
  uint64_t __temp1276v__unsafe_size=0;
  uint16_t __temp1276v__unsafe_offset=0;
  uint16_t __temp1276v__unsafe_align=0;
  char* __temp1277v__unsafe_ptr=0;
  uint64_t __temp1277v__unsafe_size=0;
  uint16_t __temp1277v__unsafe_offset=0;
  uint16_t __temp1277v__unsafe_align=0;
  uint64_t __temp1278v=0;
  char* __temp1279v__unsafe_ptr=0;
  uint64_t __temp1279v__unsafe_size=0;
  uint16_t __temp1279v__unsafe_offset=0;
  uint16_t __temp1279v__unsafe_align=0;
  char __temp1280v____temp475v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __temp1281v=0;
  char* __temp1282v__=0;
  double __temp1283v=0;
  double __temp1284v=0;
  double __temp1285v=0;
  double __temp1286v=0;
  double __temp1287v=0;
  double __temp1288v=0;
  double __temp1289v__plane__x=0;
  double __temp1289v__plane__y=0;
  double __temp1289v__z=0;
  uint64_t __temp1290v=0;
  char* __temp1291v__=0;
  double __temp1292v=0;
  double __temp1293v=0;
  double __temp1294v=0;
  double __temp1295v=0;
  double __temp1296v=0;
  double __temp1297v=0;
  double __temp1298v__plane__x=0;
  double __temp1298v__plane__y=0;
  double __temp1298v__z=0;
  char* __temp1299v__unsafe_ptr=0;
  uint64_t __temp1299v__unsafe_size=0;
  uint16_t __temp1299v__unsafe_offset=0;
  uint16_t __temp1299v__unsafe_align=0;
  double __temp1303v__x=0;
  double __temp1303v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D____temp_buffer____buffer__temp1274v(&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_offset,&__temp1276v__unsafe_align);
  __temp1277v__unsafe_ptr=__temp1276v__unsafe_ptr;
  __temp1277v__unsafe_size=__temp1276v__unsafe_size;
  __temp1277v__unsafe_offset=__temp1276v__unsafe_offset;
  __temp1277v__unsafe_align=__temp1276v__unsafe_align;
  __temp1278v=10;
  __temp_errcode=alloc__temp473v(&__temp1277v__unsafe_ptr,&__temp1277v__unsafe_size,&__temp1277v__unsafe_offset,&__temp1277v__unsafe_align,__temp1278v,&__temp1279v__unsafe_ptr,&__temp1279v__unsafe_size,&__temp1279v__unsafe_offset,&__temp1279v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1279v__unsafe_ptr;
  points__unsafe_size=__temp1279v__unsafe_size;
  points__unsafe_offset=__temp1279v__unsafe_offset;
  points__unsafe_align=__temp1279v__unsafe_align;
  __temp1281v=0;
  __temp_errcode=mutget__temp543v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1281v,&__temp1282v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1283v=1.0;
  __temp1284v=__temp1283v;
  __temp1285v=2.0;
  __temp1286v=__temp1285v;
  __temp1287v=3.0;
  __temp1288v=__temp1287v;
  Point3D__temp1270v(__temp1284v,__temp1286v,__temp1288v,&__temp1289v__plane__x,&__temp1289v__plane__y,&__temp1289v__z);
  if(!__temp1282v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1282v__,&__temp1289v__plane__x,8);
  memcpy(__temp1282v__+8,&__temp1289v__plane__y,8);
  memcpy(__temp1282v__+16,&__temp1289v__z,8);
  __temp1290v=1;
  __temp_errcode=mutget__temp543v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1290v,&__temp1291v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1292v=1.0;
  __temp1293v=__temp1292v;
  __temp1294v=2.0;
  __temp1295v=__temp1294v;
  __temp1296v=3.0;
  __temp1297v=__temp1296v;
  Point3D__temp1270v(__temp1293v,__temp1295v,__temp1297v,&__temp1298v__plane__x,&__temp1298v__plane__y,&__temp1298v__z);
  if(!__temp1291v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1291v__,&__temp1298v__plane__x,8);
  memcpy(__temp1291v__+8,&__temp1298v__plane__y,8);
  memcpy(__temp1291v__+16,&__temp1298v__z,8);
  __temp1299v__unsafe_ptr=points__unsafe_ptr;
  __temp1299v__unsafe_size=points__unsafe_size;
  __temp1299v__unsafe_offset=points__unsafe_offset+0;
  __temp1299v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1253v(&__temp1299v__unsafe_ptr,&__temp1299v__unsafe_size,&__temp1299v__unsafe_offset,&__temp1299v__unsafe_align,&__temp1303v__x,&__temp1303v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1303v__x;
  sums__y=__temp1303v__y;
  print__temp368v(sums__x);
  print__temp368v(sums__y);
  
  __temp_failure:exists__temp412v(__temp1279v__unsafe_ptr,&__temp1280v____temp475v__);
  if(__temp1280v____temp475v__){
  __temp1279v__unsafe_size=0;
  __temp1279v__unsafe_size=__temp1279v__unsafe_size;
  __temp1279v__unsafe_ptr=__temp1279v__unsafe_ptr;
  free__temp466v(&__temp1279v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1273v();return 0;}