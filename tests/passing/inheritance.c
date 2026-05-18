#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1271v(char** __temp1303v, uint64_t* __temp1304v, uint16_t* __temp1305v, uint16_t* __temp1306v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__temp1303v=unsafe_ptr;
  *__temp1304v=unsafe_size;
  *__temp1305v=unsafe_offset;
  *__temp1306v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1307v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1308v) {
  char* allocated=*__temp1308v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1308v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1309v) {
  int value=0;
  *__temp1309v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1310v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1310v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1311v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1312v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1313v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1314v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1314v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1315v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1315v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1316v) {
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
  *__temp1316v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1317v, uint64_t* __temp1318v, uint16_t* __temp1319v, uint16_t* __temp1320v, uint64_t size, char** __temp1321v, uint64_t* __temp1322v, uint16_t* __temp1323v, uint16_t* __temp1324v) {
  char* buffer__unsafe_ptr=*__temp1317v;
  uint64_t buffer__unsafe_size=*__temp1318v;
  uint16_t buffer__unsafe_offset=*__temp1319v;
  uint16_t buffer__unsafe_align=*__temp1320v;
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

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1328v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1328v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1329v, uint64_t* __temp1330v, uint16_t* __temp1331v, uint16_t* __temp1332v, uint64_t i, char** __temp1333v) {
  char* buffer__unsafe_ptr=*__temp1329v;
  uint64_t buffer__unsafe_size=*__temp1330v;
  uint16_t buffer__unsafe_offset=*__temp1331v;
  uint16_t buffer__unsafe_align=*__temp1332v;
  char __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  char* __temp550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp545v__);
  if(__temp545v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp546v__);
  mul__temp194v(i,__temp546v__,&__temp547v__);
  nat__temp465v(buffer__unsafe_offset,&__temp548v__);
  add__temp170v(__temp547v__,__temp548v__,&__temp549v__);
  add__temp463v(buffer__unsafe_ptr,__temp549v__,&__temp550v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1329v=buffer__unsafe_ptr;
  *__temp1330v=buffer__unsafe_size;
  *__temp1331v=buffer__unsafe_offset;
  *__temp1332v=buffer__unsafe_align;
  *__temp1333v=__temp550v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1247v(double x, double y, double* __temp1334v, double* __temp1335v) {
  goto __temp_return;
  __temp_return:
  *__temp1334v=x;
  *__temp1335v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1267v(double x, double y, double z, double* __temp1336v, double* __temp1337v, double* __temp1338v) {
  double __temp1268v__x=0;
  double __temp1268v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1247v(x,y,&__temp1268v__x,&__temp1268v__y);
  plane__x=__temp1268v__x;
  plane__y=__temp1268v__y;
  goto __temp_return;
  __temp_return:
  *__temp1336v=plane__x;
  *__temp1337v=plane__y;
  *__temp1338v=z;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1339v) {
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

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1341v) {
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
  *__temp1341v=__temp557v__;
  
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

static inline __attribute__((always_inline)) int sum__temp1250v(char** __temp1344v, uint64_t* __temp1345v, uint16_t* __temp1346v, uint16_t* __temp1347v, double* __temp1348v, double* __temp1349v) {
  char* v__unsafe_ptr=*__temp1344v;
  uint64_t v__unsafe_size=*__temp1345v;
  uint16_t v__unsafe_offset=*__temp1346v;
  uint16_t v__unsafe_align=*__temp1347v;
  double __temp1251v=0;
  double __temp1252v=0;
  double x=0;
  double __temp1253v=0;
  double __temp1254v=0;
  double y=0;
  uint64_t __temp1255v=0;
  uint64_t __temp1256v=0;
  uint64_t i=0;
  uint64_t __temp1257v__=0;
  char __temp1258v__=0;
  char* __temp1259v__=0;
  double __temp1260v__x=0;
  double __temp1260v__y=0;
  double __temp1261v__=0;
  char* __temp1262v__=0;
  double __temp1263v__x=0;
  double __temp1263v__y=0;
  double __temp1264v__=0;
  uint64_t __temp1265v=0;
  uint64_t __temp1266v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1251v=0.0;
  __temp1252v=__temp1251v;
  x=__temp1252v;
  __temp1253v=0.0;
  __temp1254v=__temp1253v;
  y=__temp1254v;
  __temp1255v=0;
  __temp1256v=__temp1255v;
  i=__temp1256v;
  while(1){
  len__temp558v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__temp1257v__);
  lt__temp247v(i,__temp1257v__,&__temp1258v__);
  if(!__temp1258v__){
  break;
  }
  __temp_errcode=get__temp551v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1259v__);
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
  __temp_errcode=get__temp551v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__temp1262v__);
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
  __temp1265v=1;
  add__temp170v(i,__temp1265v,&__temp1266v__);
  i=__temp1266v__;
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
  char __temp1277v____temp470v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __temp1278v=0;
  char* __temp1279v__=0;
  double __temp1280v=0;
  double __temp1281v=0;
  double __temp1282v=0;
  double __temp1283v=0;
  double __temp1284v=0;
  double __temp1285v=0;
  double __temp1286v__plane__x=0;
  double __temp1286v__plane__y=0;
  double __temp1286v__z=0;
  uint64_t __temp1287v=0;
  char* __temp1288v__=0;
  double __temp1289v=0;
  double __temp1290v=0;
  double __temp1291v=0;
  double __temp1292v=0;
  double __temp1293v=0;
  double __temp1294v=0;
  double __temp1295v__plane__x=0;
  double __temp1295v__plane__y=0;
  double __temp1295v__z=0;
  char* __temp1296v__unsafe_ptr=0;
  uint64_t __temp1296v__unsafe_size=0;
  uint16_t __temp1296v__unsafe_offset=0;
  uint16_t __temp1296v__unsafe_align=0;
  double __temp1300v__x=0;
  double __temp1300v__y=0;
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
  __temp_errcode=alloc__temp468v(&__temp1274v__unsafe_ptr,&__temp1274v__unsafe_size,&__temp1274v__unsafe_offset,&__temp1274v__unsafe_align,__temp1275v,&__temp1276v__unsafe_ptr,&__temp1276v__unsafe_size,&__temp1276v__unsafe_offset,&__temp1276v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1276v__unsafe_ptr;
  points__unsafe_size=__temp1276v__unsafe_size;
  points__unsafe_offset=__temp1276v__unsafe_offset;
  points__unsafe_align=__temp1276v__unsafe_align;
  __temp1278v=0;
  __temp_errcode=mutget__temp544v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1278v,&__temp1279v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1280v=1.0;
  __temp1281v=__temp1280v;
  __temp1282v=2.0;
  __temp1283v=__temp1282v;
  __temp1284v=3.0;
  __temp1285v=__temp1284v;
  Point3D__temp1267v(__temp1281v,__temp1283v,__temp1285v,&__temp1286v__plane__x,&__temp1286v__plane__y,&__temp1286v__z);
  if(!__temp1279v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1279v__,&__temp1286v__plane__x,8);
  memcpy(__temp1279v__+8,&__temp1286v__plane__y,8);
  memcpy(__temp1279v__+16,&__temp1286v__z,8);
  __temp1287v=1;
  __temp_errcode=mutget__temp544v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1287v,&__temp1288v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1289v=1.0;
  __temp1290v=__temp1289v;
  __temp1291v=2.0;
  __temp1292v=__temp1291v;
  __temp1293v=3.0;
  __temp1294v=__temp1293v;
  Point3D__temp1267v(__temp1290v,__temp1292v,__temp1294v,&__temp1295v__plane__x,&__temp1295v__plane__y,&__temp1295v__z);
  if(!__temp1288v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1288v__,&__temp1295v__plane__x,8);
  memcpy(__temp1288v__+8,&__temp1295v__plane__y,8);
  memcpy(__temp1288v__+16,&__temp1295v__z,8);
  __temp1296v__unsafe_ptr=points__unsafe_ptr;
  __temp1296v__unsafe_size=points__unsafe_size;
  __temp1296v__unsafe_offset=points__unsafe_offset+0;
  __temp1296v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1250v(&__temp1296v__unsafe_ptr,&__temp1296v__unsafe_size,&__temp1296v__unsafe_offset,&__temp1296v__unsafe_align,&__temp1300v__x,&__temp1300v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1300v__x;
  sums__y=__temp1300v__y;
  print__temp368v(sums__x);
  print__temp368v(sums__y);
  
  __temp_failure:exists__temp412v(__temp1276v__unsafe_ptr,&__temp1277v____temp470v__);
  if(__temp1277v____temp470v__){
  __temp1276v__unsafe_size=0;
  __temp1276v__unsafe_size=__temp1276v__unsafe_size;
  free__temp461v(&__temp1276v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1270v();return 0;}