#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1266v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1270v(char** __temp1296v, uint64_t* __temp1297v, uint16_t* __temp1298v, uint16_t* __temp1299v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__temp1296v=unsafe_ptr;
  *__temp1297v=unsafe_size;
  *__temp1298v=unsafe_offset;
  *__temp1299v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1300v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1301v) {
  char* allocated=*__temp1301v;
  if(allocated){
  free(allocated);
  }
  *__temp1301v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1302v) {
  int value=0;
  *__temp1302v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1303v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1303v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1304v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1304v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1305v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1306v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1309v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1310v) {
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
  *__temp1310v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1311v, uint64_t* __temp1312v, uint16_t* __temp1313v, uint16_t* __temp1314v, uint64_t size, char** __temp1315v, uint64_t* __temp1316v, uint16_t* __temp1317v, uint16_t* __temp1318v) {
  char* buffer__unsafe_ptr=*__temp1311v;
  uint64_t buffer__unsafe_size=*__temp1312v;
  uint16_t buffer__unsafe_offset=*__temp1313v;
  uint16_t buffer__unsafe_align=*__temp1314v;
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
  *__temp1311v=buffer__unsafe_ptr;
  *__temp1312v=buffer__unsafe_size;
  *__temp1313v=buffer__unsafe_offset;
  *__temp1314v=buffer__unsafe_align;
  *__temp1315v=buffer__unsafe_ptr;
  *__temp1316v=buffer__unsafe_size;
  *__temp1317v=buffer__unsafe_offset;
  *__temp1318v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1319v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1319v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1320v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1321v) {
  *__temp1321v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1322v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1322v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1323v, uint64_t* __temp1324v, uint16_t* __temp1325v, uint16_t* __temp1326v, uint64_t i, char** __temp1327v) {
  char* buffer__unsafe_ptr=*__temp1323v;
  uint64_t buffer__unsafe_size=*__temp1324v;
  uint16_t buffer__unsafe_offset=*__temp1325v;
  uint16_t buffer__unsafe_align=*__temp1326v;
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
  *__temp1323v=buffer__unsafe_ptr;
  *__temp1324v=buffer__unsafe_size;
  *__temp1325v=buffer__unsafe_offset;
  *__temp1326v=buffer__unsafe_align;
  *__temp1327v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1246v(double x, double y, double* __temp1328v, double* __temp1329v) {
  goto __temp_return;
  __temp_return:
  *__temp1328v=x;
  *__temp1329v=y;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1264v(double x, double y, double z, double* __temp1330v, double* __temp1331v, double* __temp1332v) {
  double __temp1265v__x=0;
  double __temp1265v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1246v(x,y,&__temp1265v__x,&__temp1265v__y);
  plane__x=__temp1265v__x;
  plane__y=__temp1265v__y;
  print__temp363v(__temp1266v);
  goto __temp_return;
  __temp_return:
  *__temp1330v=plane__x;
  *__temp1331v=plane__y;
  *__temp1332v=z;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1333v) {
  goto __temp_return;
  __temp_return:
  *__temp1333v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1334v, uint64_t* __temp1335v) {
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
  *__temp1334v=from;
  *__temp1335v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1336v, uint64_t r__to, uint64_t* __temp1337v) {
  uint64_t r__from=*__temp1336v;
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
  *__temp1336v=r__from;
  *__temp1337v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1338v) {
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
  *__temp1338v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1339v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1339v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1340v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1340v=z;
}

static inline __attribute__((always_inline)) int sum__temp1249v(char** __temp1341v, uint64_t* __temp1342v, uint16_t* __temp1343v, uint16_t* __temp1344v, double* __temp1345v, double* __temp1346v) {
  char* v__unsafe_ptr=*__temp1341v;
  uint64_t v__unsafe_size=*__temp1342v;
  uint16_t v__unsafe_offset=*__temp1343v;
  uint16_t v__unsafe_align=*__temp1344v;
  double __temp1250v=0;
  double __temp1251v=0;
  double x=0;
  double __temp1252v=0;
  double __temp1253v=0;
  double y=0;
  uint64_t __temp1254v__=0;
  uint64_t __temp1255v__from=0;
  uint64_t __temp1255v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1256v=0;
  uint64_t __temp1257v__=0;
  uint64_t i=0;
  char* __temp1258v__=0;
  double __temp1259v__x=0;
  double __temp1259v__y=0;
  double __temp1260v__=0;
  char* __temp1261v__=0;
  double __temp1262v__x=0;
  double __temp1262v__y=0;
  double __temp1263v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1250v=0.0;
  __temp1251v=__temp1250v;
  x=__temp1251v;
  __temp1252v=0.0;
  __temp1253v=__temp1252v;
  y=__temp1253v;
  len__temp553v(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__temp1254v__);
  range__temp436v(__temp1254v__,&__temp1255v__from,&__temp1255v__to);
  it__from=__temp1255v__from;
  it__to=__temp1255v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1257v__);
  __temp1256v=__temp_complain;
  i=__temp1257v__;
  __temp1256v=__temp1256v==0;
  if(!__temp1256v){
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
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1341v=v__unsafe_ptr;
  *__temp1342v=v__unsafe_size;
  *__temp1343v=v__unsafe_offset;
  *__temp1344v=v__unsafe_align;
  *__temp1345v=x;
  *__temp1346v=y;
  
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
  double __temp1282v__plane__x=0;
  double __temp1282v__plane__y=0;
  double __temp1282v__z=0;
  uint64_t __temp1283v=0;
  char* __temp1284v__=0;
  double __temp1285v=0;
  double __temp1286v=0;
  double __temp1287v=0;
  double __temp1288v__plane__x=0;
  double __temp1288v__plane__y=0;
  double __temp1288v__z=0;
  char* __temp1289v__unsafe_ptr=0;
  uint64_t __temp1289v__unsafe_size=0;
  uint16_t __temp1289v__unsafe_offset=0;
  uint16_t __temp1289v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __temp1293v__x=0;
  double __temp1293v__y=0;
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
  __temp1280v=2.0;
  __temp1281v=3.0;
  Point3D__temp1264v(__temp1279v,__temp1280v,__temp1281v,&__temp1282v__plane__x,&__temp1282v__plane__y,&__temp1282v__z);
  if(!__temp1278v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1278v__,&__temp1282v__plane__x,8);
  memcpy(__temp1278v__+8,&__temp1282v__plane__y,8);
  memcpy(__temp1278v__+16,&__temp1282v__z,8);
  __temp1283v=1;
  __temp_errcode=mutget__temp539v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__temp1283v,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1285v=1.0;
  __temp1286v=2.0;
  __temp1287v=3.0;
  Point3D__temp1264v(__temp1285v,__temp1286v,__temp1287v,&__temp1288v__plane__x,&__temp1288v__plane__y,&__temp1288v__z);
  if(!__temp1284v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1284v__,&__temp1288v__plane__x,8);
  memcpy(__temp1284v__+8,&__temp1288v__plane__y,8);
  memcpy(__temp1284v__+16,&__temp1288v__z,8);
  __temp1289v__unsafe_ptr=points__unsafe_ptr;
  __temp1289v__unsafe_size=points__unsafe_size;
  __temp1289v__unsafe_offset=points__unsafe_offset+0;
  __temp1289v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1289v__unsafe_ptr;
  plane__unsafe_size=__temp1289v__unsafe_size;
  plane__unsafe_offset=__temp1289v__unsafe_offset;
  plane__unsafe_align=__temp1289v__unsafe_align;
  __temp_errcode=sum__temp1249v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_offset,&plane__unsafe_align,&__temp1293v__x,&__temp1293v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1293v__x;
  sums__y=__temp1293v__y;
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