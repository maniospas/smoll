#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1243v(char** __temp1275v, uint64_t* __temp1276v, uint64_t* __temp1277v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1275v=unsafe_ptr;
  *__temp1276v=unsafe_size;
  *__temp1277v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1278v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1279v) {
  char* allocated=*__temp1279v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1279v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1280v) {
  int value=0;
  *__temp1280v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1281v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1281v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1282v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1282v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1283v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1284v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1285v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1286v) {
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
  *__temp1286v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1287v, uint64_t* __temp1288v, uint64_t* __temp1289v, uint64_t size, char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v) {
  char* buffer__unsafe_ptr=*__temp1287v;
  uint64_t buffer__unsafe_size=*__temp1288v;
  uint64_t buffer__unsafe_align=*__temp1289v;
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
  *__temp1287v=buffer__unsafe_ptr;
  *__temp1288v=buffer__unsafe_size;
  *__temp1289v=buffer__unsafe_align;
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1293v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1294v) {
  *__temp1294v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1295v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1295v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1296v, uint64_t* __temp1297v, uint64_t* __temp1298v, uint64_t i, char** __temp1299v) {
  char* buffer__unsafe_ptr=*__temp1296v;
  uint64_t buffer__unsafe_size=*__temp1297v;
  uint64_t buffer__unsafe_align=*__temp1298v;
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
  *__temp1296v=buffer__unsafe_ptr;
  *__temp1297v=buffer__unsafe_size;
  *__temp1298v=buffer__unsafe_align;
  *__temp1299v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1219v(double x, double y, double* __temp1300v, double* __temp1301v) {
  goto __temp_return;
  __temp_return:
  *__temp1300v=x;
  *__temp1301v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1239v(double x, double y, double z, double* __temp1302v, double* __temp1303v, double* __temp1304v) {
  double __temp1240v__x=0;
  double __temp1240v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1219v(x,y,&__temp1240v__x,&__temp1240v__y);
  plane__x=__temp1240v__x;
  plane__y=__temp1240v__y;
  goto __temp_return;
  __temp_return:
  *__temp1302v=plane__x;
  *__temp1303v=plane__y;
  *__temp1304v=z;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1305v) {
  goto __temp_return;
  __temp_return:
  *__temp1305v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1306v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1307v) {
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
  *__temp1307v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp68v(double x, double y, int* __temp1308v) {
  int __temp69v=0;
  int __temp70v__=0;
  not__temp34v(__temp69v,&__temp70v__);
  goto __temp_return;
  __temp_return:
  *__temp1308v=__temp70v__;
}

static inline __attribute__((always_inline)) void add__temp147v(double x, double y, double* __temp1309v) {
  int __temp148v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp148v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1310v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) int sum__temp1222v(char** __temp1311v, uint64_t* __temp1312v, uint64_t* __temp1313v, double* __temp1314v, double* __temp1315v) {
  char* v__unsafe_ptr=*__temp1311v;
  uint64_t v__unsafe_size=*__temp1312v;
  uint64_t v__unsafe_align=*__temp1313v;
  double __temp1223v=0;
  double __temp1224v=0;
  double x=0;
  double __temp1225v=0;
  double __temp1226v=0;
  double y=0;
  uint64_t __temp1227v=0;
  uint64_t __temp1228v=0;
  uint64_t i=0;
  uint64_t __temp1229v__=0;
  char __temp1230v__=0;
  char* __temp1231v__=0;
  double __temp1232v__x=0;
  double __temp1232v__y=0;
  double __temp1233v__=0;
  char* __temp1234v__=0;
  double __temp1235v__x=0;
  double __temp1235v__y=0;
  double __temp1236v__=0;
  uint64_t __temp1237v=0;
  uint64_t __temp1238v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1223v=0.0;
  __temp1224v=__temp1223v;
  x=__temp1224v;
  __temp1225v=0.0;
  __temp1226v=__temp1225v;
  y=__temp1226v;
  __temp1227v=0;
  __temp1228v=__temp1227v;
  i=__temp1228v;
  while(1){
  len__temp536v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1229v__);
  lt__temp246v(i,__temp1229v__,&__temp1230v__);
  if(!__temp1230v__){
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
  __temp1237v=1;
  add__temp169v(i,__temp1237v,&__temp1238v__);
  i=__temp1238v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1311v=v__unsafe_ptr;
  *__temp1312v=v__unsafe_size;
  *__temp1313v=v__unsafe_align;
  *__temp1314v=x;
  *__temp1315v=y;
  
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
  double __temp1255v=0;
  double __temp1256v=0;
  double __temp1257v=0;
  double __temp1258v__plane__x=0;
  double __temp1258v__plane__y=0;
  double __temp1258v__z=0;
  uint64_t __temp1259v=0;
  char* __temp1260v__=0;
  double __temp1261v=0;
  double __temp1262v=0;
  double __temp1263v=0;
  double __temp1264v=0;
  double __temp1265v=0;
  double __temp1266v=0;
  double __temp1267v__plane__x=0;
  double __temp1267v__plane__y=0;
  double __temp1267v__z=0;
  char* __temp1268v__unsafe_ptr=0;
  uint64_t __temp1268v__unsafe_size=0;
  uint64_t __temp1268v__unsafe_align=0;
  double __temp1272v__x=0;
  double __temp1272v__y=0;
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
  __temp1253v=__temp1252v;
  __temp1254v=2.0;
  __temp1255v=__temp1254v;
  __temp1256v=3.0;
  __temp1257v=__temp1256v;
  Point3D__temp1239v(__temp1253v,__temp1255v,__temp1257v,&__temp1258v__plane__x,&__temp1258v__plane__y,&__temp1258v__z);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__,&__temp1258v__plane__x,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+8,&__temp1258v__plane__y,8);
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(__temp1251v__+16,&__temp1258v__z,8);
  __temp1259v=1;
  __temp_errcode=mutget__temp528v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1259v,&__temp1260v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1261v=1.0;
  __temp1262v=__temp1261v;
  __temp1263v=2.0;
  __temp1264v=__temp1263v;
  __temp1265v=3.0;
  __temp1266v=__temp1265v;
  Point3D__temp1239v(__temp1262v,__temp1264v,__temp1266v,&__temp1267v__plane__x,&__temp1267v__plane__y,&__temp1267v__z);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__,&__temp1267v__plane__x,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__+8,&__temp1267v__plane__y,8);
  if(!__temp1260v__){
  goto __temp_failure;
  }
  memcpy(__temp1260v__+16,&__temp1267v__z,8);
  __temp1268v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1268v__unsafe_size=points__unsafe_size;
  __temp1268v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1222v(&__temp1268v__unsafe_ptr,&__temp1268v__unsafe_size,&__temp1268v__unsafe_align,&__temp1272v__x,&__temp1272v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1272v__x;
  sums__y=__temp1272v__y;
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