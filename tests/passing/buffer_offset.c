#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1240v="starting point creation";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1244v(char** __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1270v=unsafe_ptr;
  *__temp1271v=unsafe_size;
  *__temp1272v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1273v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1274v) {
  char* allocated=*__temp1274v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1274v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1275v) {
  int value=0;
  *__temp1275v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1276v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1277v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1277v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1279v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1280v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1281v) {
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
  *__temp1281v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1282v, uint64_t* __temp1283v, uint64_t* __temp1284v, uint64_t size, char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v) {
  char* buffer__unsafe_ptr=*__temp1282v;
  uint64_t buffer__unsafe_size=*__temp1283v;
  uint64_t buffer__unsafe_align=*__temp1284v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_align;
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1288v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1289v) {
  *__temp1289v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1290v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1290v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v, uint64_t i, char** __temp1294v) {
  char* buffer__unsafe_ptr=*__temp1291v;
  uint64_t buffer__unsafe_size=*__temp1292v;
  uint64_t buffer__unsafe_align=*__temp1293v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1291v=buffer__unsafe_ptr;
  *__temp1292v=buffer__unsafe_size;
  *__temp1293v=buffer__unsafe_align;
  *__temp1294v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1220v(double x, double y, double* __temp1295v, double* __temp1296v) {
  goto __temp_return;
  __temp_return:
  *__temp1295v=x;
  *__temp1296v=y;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1238v(double x, double y, double z, double* __temp1297v, double* __temp1298v, double* __temp1299v) {
  double __temp1239v__x=0;
  double __temp1239v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1220v(x,y,&__temp1239v__x,&__temp1239v__y);
  plane__x=__temp1239v__x;
  plane__y=__temp1239v__y;
  print__temp361v(__temp1240v);
  goto __temp_return;
  __temp_return:
  *__temp1297v=plane__x;
  *__temp1298v=plane__y;
  *__temp1299v=z;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1300v) {
  goto __temp_return;
  __temp_return:
  *__temp1300v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1301v, uint64_t* __temp1302v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1301v=from;
  *__temp1302v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1303v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1304v, uint64_t r__to, uint64_t* __temp1305v) {
  uint64_t r__from=*__temp1304v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1304v=r__from;
  *__temp1305v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1306v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1306v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1307v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1307v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1308v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1308v=z;
}

static inline __attribute__((always_inline)) int sum__temp1223v(char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v, double* __temp1312v, double* __temp1313v) {
  char* v__unsafe_ptr=*__temp1309v;
  uint64_t v__unsafe_size=*__temp1310v;
  uint64_t v__unsafe_align=*__temp1311v;
  double __temp1224v=0;
  double __temp1225v=0;
  double x=0;
  double __temp1226v=0;
  double __temp1227v=0;
  double y=0;
  uint64_t __temp1228v__=0;
  uint64_t __temp1229v__from=0;
  uint64_t __temp1229v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1230v=0;
  uint64_t __temp1231v__=0;
  uint64_t i=0;
  char* __temp1232v__=0;
  double __temp1233v__x=0;
  double __temp1233v__y=0;
  double __temp1234v__=0;
  char* __temp1235v__=0;
  double __temp1236v__x=0;
  double __temp1236v__y=0;
  double __temp1237v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1224v=0.0;
  __temp1225v=__temp1224v;
  x=__temp1225v;
  __temp1226v=0.0;
  __temp1227v=__temp1226v;
  y=__temp1227v;
  len__temp537v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1228v__);
  range__temp435v(__temp1228v__,&__temp1229v__from,&__temp1229v__to);
  it__from=__temp1229v__from;
  it__to=__temp1229v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1231v__);
  __temp1230v=__temp_complain;
  i=__temp1231v__;
  __temp1230v=__temp1230v==0;
  if(!__temp1230v){
  break;
  }
  __temp_errcode=get__temp533v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1232v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__x,__temp1232v__,8);
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__y,__temp1232v__+8,8);
  add__temp148v(x,__temp1233v__x,&__temp1234v__);
  x=__temp1234v__;
  __temp_errcode=get__temp533v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(&__temp1236v__x,__temp1235v__,8);
  if(!__temp1235v__){
  goto __temp_failure;
  }
  memcpy(&__temp1236v__y,__temp1235v__+8,8);
  add__temp148v(y,__temp1236v__y,&__temp1237v__);
  y=__temp1237v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1309v=v__unsafe_ptr;
  *__temp1310v=v__unsafe_size;
  *__temp1311v=v__unsafe_align;
  *__temp1312v=x;
  *__temp1313v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1243v() {
  char* __temp1246v__unsafe_ptr=0;
  uint64_t __temp1246v__unsafe_size=0;
  uint64_t __temp1246v__unsafe_align=0;
  char* __temp1247v__unsafe_ptr=0;
  uint64_t __temp1247v__unsafe_size=0;
  uint64_t __temp1247v__unsafe_align=0;
  uint64_t __temp1248v=0;
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__unsafe_size=0;
  uint64_t __temp1249v__unsafe_align=0;
  char __temp1250v____temp469v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1251v=0;
  char* __temp1252v__=0;
  double __temp1253v=0;
  double __temp1254v=0;
  double __temp1255v=0;
  double __temp1256v__plane__x=0;
  double __temp1256v__plane__y=0;
  double __temp1256v__z=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__=0;
  double __temp1259v=0;
  double __temp1260v=0;
  double __temp1261v=0;
  double __temp1262v__plane__x=0;
  double __temp1262v__plane__y=0;
  double __temp1262v__z=0;
  char* __temp1263v__unsafe_ptr=0;
  uint64_t __temp1263v__unsafe_size=0;
  uint64_t __temp1263v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint64_t plane__unsafe_align=0;
  double __temp1267v__x=0;
  double __temp1267v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1244v(&__temp1246v__unsafe_ptr,&__temp1246v__unsafe_size,&__temp1246v__unsafe_align);
  __temp1247v__unsafe_ptr=__temp1246v__unsafe_ptr;
  __temp1247v__unsafe_size=__temp1246v__unsafe_size;
  __temp1247v__unsafe_align=__temp1246v__unsafe_align;
  __temp1248v=10;
  __temp_errcode=alloc__temp467v(&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align,__temp1248v,&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1249v__unsafe_ptr;
  points__unsafe_size=__temp1249v__unsafe_size;
  points__unsafe_align=__temp1249v__unsafe_align;
  __temp1251v=0;
  __temp_errcode=mutget__temp529v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1251v,&__temp1252v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1253v=1.0;
  __temp1254v=2.0;
  __temp1255v=3.0;
  Point3D__temp1238v(__temp1253v,__temp1254v,__temp1255v,&__temp1256v__plane__x,&__temp1256v__plane__y,&__temp1256v__z);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__,&__temp1256v__plane__x,8);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__+8,&__temp1256v__plane__y,8);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__+16,&__temp1256v__z,8);
  __temp1257v=1;
  __temp_errcode=mutget__temp529v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1257v,&__temp1258v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1259v=1.0;
  __temp1260v=2.0;
  __temp1261v=3.0;
  Point3D__temp1238v(__temp1259v,__temp1260v,__temp1261v,&__temp1262v__plane__x,&__temp1262v__plane__y,&__temp1262v__z);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__,&__temp1262v__plane__x,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+8,&__temp1262v__plane__y,8);
  if(!__temp1258v__){
  goto __temp_failure;
  }
  memcpy(__temp1258v__+16,&__temp1262v__z,8);
  __temp1263v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1263v__unsafe_size=points__unsafe_size;
  __temp1263v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1263v__unsafe_ptr;
  plane__unsafe_size=__temp1263v__unsafe_size;
  plane__unsafe_align=__temp1263v__unsafe_align;
  __temp_errcode=sum__temp1223v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1267v__x,&__temp1267v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1267v__x;
  sums__y=__temp1267v__y;
  print__temp366v(sums__x);
  print__temp366v(sums__y);
  
  __temp_failure:exists__temp412v(__temp1249v__unsafe_ptr,&__temp1250v____temp469v__);
  if(__temp1250v____temp469v__){
  __temp1249v__unsafe_size=0;
  __temp1249v__unsafe_size=__temp1249v__unsafe_size;
  free__temp461v(&__temp1249v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1243v();return 0;}