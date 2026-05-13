#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
const char* const __temp1239v="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1243v(char** __temp1269v, uint64_t* __temp1270v, uint64_t* __temp1271v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1269v=unsafe_ptr;
  *__temp1270v=unsafe_size;
  *__temp1271v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1272v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1273v) {
  char* allocated=*__temp1273v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1273v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1274v) {
  int value=0;
  *__temp1274v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1275v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1275v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1276v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1279v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1280v) {
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
  *__temp1280v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1281v, uint64_t* __temp1282v, uint64_t* __temp1283v, uint64_t size, char** __temp1284v, uint64_t* __temp1285v, uint64_t* __temp1286v) {
  char* buffer__unsafe_ptr=*__temp1281v;
  uint64_t buffer__unsafe_size=*__temp1282v;
  uint64_t buffer__unsafe_align=*__temp1283v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1281v=buffer__unsafe_ptr;
  *__temp1282v=buffer__unsafe_size;
  *__temp1283v=buffer__unsafe_align;
  *__temp1284v=buffer__unsafe_ptr;
  *__temp1285v=buffer__unsafe_size;
  *__temp1286v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1287v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1288v) {
  *__temp1288v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1289v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1289v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v, uint64_t i, char** __temp1293v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  uint64_t buffer__unsafe_size=*__temp1291v;
  uint64_t buffer__unsafe_align=*__temp1292v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1219v(double x, double y, double* __temp1294v, double* __temp1295v) {
  goto __temp_return;
  __temp_return:
  *__temp1294v=x;
  *__temp1295v=y;
}

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__temp1237v(double x, double y, double z, double* __temp1296v, double* __temp1297v, double* __temp1298v) {
  double __temp1238v__x=0;
  double __temp1238v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1219v(x,y,&__temp1238v__x,&__temp1238v__y);
  plane__x=__temp1238v__x;
  plane__y=__temp1238v__y;
  print__temp362v(__temp1239v);
  goto __temp_return;
  __temp_return:
  *__temp1296v=plane__x;
  *__temp1297v=plane__y;
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1299v) {
  goto __temp_return;
  __temp_return:
  *__temp1299v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__temp434v(uint64_t to, uint64_t* __temp1300v, uint64_t* __temp1301v) {
  int __temp435v=0;
  uint64_t __temp436v=0;
  uint64_t _from=0;
  uint64_t __temp437v=0;
  uint64_t from=0;
  __temp436v=0;
  _from=__temp436v;
  __temp437v=_from;
  from=__temp437v;
  goto __temp_return;
  __temp_return:
  *__temp1300v=from;
  *__temp1301v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1302v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=z;
}

static inline __attribute__((always_inline)) int next__temp438v(uint64_t* __temp1303v, uint64_t r__to, uint64_t* __temp1304v) {
  uint64_t r__from=*__temp1303v;
  char __temp439v__=0;
  uint64_t ret=0;
  uint64_t __temp440v=0;
  uint64_t __temp441v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(r__from,r__to,&__temp439v__);
  if(__temp439v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp440v=1;
  add__temp169v(ret,__temp440v,&__temp441v__);
  r__from=__temp441v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1303v=r__from;
  *__temp1304v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1305v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1305v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp68v(double x, double y, int* __temp1306v) {
  int __temp69v=0;
  int __temp70v__=0;
  not__temp34v(__temp69v,&__temp70v__);
  goto __temp_return;
  __temp_return:
  *__temp1306v=__temp70v__;
}

static inline __attribute__((always_inline)) void add__temp147v(double x, double y, double* __temp1307v) {
  int __temp148v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp148v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) int sum__temp1222v(char** __temp1308v, uint64_t* __temp1309v, uint64_t* __temp1310v, double* __temp1311v, double* __temp1312v) {
  char* v__unsafe_ptr=*__temp1308v;
  uint64_t v__unsafe_size=*__temp1309v;
  uint64_t v__unsafe_align=*__temp1310v;
  double __temp1223v=0;
  double __temp1224v=0;
  double x=0;
  double __temp1225v=0;
  double __temp1226v=0;
  double y=0;
  uint64_t __temp1227v__=0;
  uint64_t __temp1228v__from=0;
  uint64_t __temp1228v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1229v=0;
  uint64_t __temp1230v__=0;
  uint64_t i=0;
  char* __temp1231v__=0;
  double __temp1232v__x=0;
  double __temp1232v__y=0;
  double __temp1233v__=0;
  char* __temp1234v__=0;
  double __temp1235v__x=0;
  double __temp1235v__y=0;
  double __temp1236v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1223v=0.0;
  __temp1224v=__temp1223v;
  x=__temp1224v;
  __temp1225v=0.0;
  __temp1226v=__temp1225v;
  y=__temp1226v;
  len__temp536v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1227v__);
  range__temp434v(__temp1227v__,&__temp1228v__from,&__temp1228v__to);
  it__from=__temp1228v__from;
  it__to=__temp1228v__to;
  while(1){
  __temp_complain=next__temp438v(&it__from,it__to,&__temp1230v__);
  __temp1229v=__temp_complain;
  i=__temp1230v__;
  __temp1229v=__temp1229v==0;
  if(!__temp1229v){
  break;
  }
  __temp_errcode=get__temp532v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__x,__temp1231v__,8);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__y,__temp1231v__+8,8);
  add__temp147v(x,__temp1232v__x,&__temp1233v__);
  x=__temp1233v__;
  __temp_errcode=get__temp532v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__x,__temp1234v__,8);
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__y,__temp1234v__+8,8);
  add__temp147v(y,__temp1235v__y,&__temp1236v__);
  y=__temp1236v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1308v=v__unsafe_ptr;
  *__temp1309v=v__unsafe_size;
  *__temp1310v=v__unsafe_align;
  *__temp1311v=x;
  *__temp1312v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1242v() {
  char* __temp1245v__unsafe_ptr=0;
  uint64_t __temp1245v__unsafe_size=0;
  uint64_t __temp1245v__unsafe_align=0;
  char* __temp1246v__unsafe_ptr=0;
  uint64_t __temp1246v__unsafe_size=0;
  uint64_t __temp1246v__unsafe_align=0;
  uint64_t __temp1247v=0;
  char* __temp1248v__unsafe_ptr=0;
  uint64_t __temp1248v__unsafe_size=0;
  uint64_t __temp1248v__unsafe_align=0;
  char __temp1249v____temp468v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1250v=0;
  char* __temp1251v__=0;
  double __temp1252v=0;
  double __temp1253v=0;
  double __temp1254v=0;
  double __temp1255v__plane__x=0;
  double __temp1255v__plane__y=0;
  double __temp1255v__z=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  double __temp1259v=0;
  double __temp1260v=0;
  double __temp1261v__plane__x=0;
  double __temp1261v__plane__y=0;
  double __temp1261v__z=0;
  char* __temp1262v__unsafe_ptr=0;
  uint64_t __temp1262v__unsafe_size=0;
  uint64_t __temp1262v__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint64_t plane__unsafe_align=0;
  double __temp1266v__x=0;
  double __temp1266v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D__temp_buffer__buffer__temp1243v(&__temp1245v__unsafe_ptr,&__temp1245v__unsafe_size,&__temp1245v__unsafe_align);
  __temp1246v__unsafe_ptr=__temp1245v__unsafe_ptr;
  __temp1246v__unsafe_size=__temp1245v__unsafe_size;
  __temp1246v__unsafe_align=__temp1245v__unsafe_align;
  __temp1247v=10;
  __temp_errcode=alloc__temp466v(&__temp1246v__unsafe_ptr,&__temp1246v__unsafe_size,&__temp1246v__unsafe_align,__temp1247v,&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1248v__unsafe_ptr;
  points__unsafe_size=__temp1248v__unsafe_size;
  points__unsafe_align=__temp1248v__unsafe_align;
  __temp1250v=0;
  __temp_errcode=mutget__temp528v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1250v,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1252v=1.0;
  __temp1253v=2.0;
  __temp1254v=3.0;
  Point3D__temp1237v(__temp1252v,__temp1253v,__temp1254v,&__temp1255v__plane__x,&__temp1255v__plane__y,&__temp1255v__z);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__,&__temp1255v__plane__x,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+8,&__temp1255v__plane__y,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+16,&__temp1255v__z,8);
  __temp1256v=1;
  __temp_errcode=mutget__temp528v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  __temp1259v=2.0;
  __temp1260v=3.0;
  Point3D__temp1237v(__temp1258v,__temp1259v,__temp1260v,&__temp1261v__plane__x,&__temp1261v__plane__y,&__temp1261v__z);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1261v__plane__x,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+8,&__temp1261v__plane__y,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+16,&__temp1261v__z,8);
  __temp1262v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1262v__unsafe_size=points__unsafe_size;
  __temp1262v__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__temp1262v__unsafe_ptr;
  plane__unsafe_size=__temp1262v__unsafe_size;
  plane__unsafe_align=__temp1262v__unsafe_align;
  __temp_errcode=sum__temp1222v(&plane__unsafe_ptr,&plane__unsafe_size,&plane__unsafe_align,&__temp1266v__x,&__temp1266v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1266v__x;
  sums__y=__temp1266v__y;
  print__temp367v(sums__x);
  print__temp367v(sums__y);
  
  __temp_failure:exists__temp411v(__temp1248v__unsafe_ptr,&__temp1249v____temp468v__);
  if(__temp1249v____temp468v__){
  __temp1248v__unsafe_size=0;
  __temp1248v__unsafe_size=__temp1248v__unsafe_size;
  free__temp460v(&__temp1248v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1242v();return 0;}