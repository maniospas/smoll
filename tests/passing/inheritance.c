#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
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

static inline __attribute__((always_inline)) void Point3D__temp_buffer__buffer__temp1244v(char** __temp1276v, uint64_t* __temp1277v, uint64_t* __temp1278v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1276v=unsafe_ptr;
  *__temp1277v=unsafe_size;
  *__temp1278v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1279v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1280v) {
  char* allocated=*__temp1280v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1280v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1281v) {
  int value=0;
  *__temp1281v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1282v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1282v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1283v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1283v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1284v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1285v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1285v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1286v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1287v) {
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
  *__temp1287v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1288v, uint64_t* __temp1289v, uint64_t* __temp1290v, uint64_t size, char** __temp1291v, uint64_t* __temp1292v, uint64_t* __temp1293v) {
  char* buffer__unsafe_ptr=*__temp1288v;
  uint64_t buffer__unsafe_size=*__temp1289v;
  uint64_t buffer__unsafe_align=*__temp1290v;
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
  *__temp1288v=buffer__unsafe_ptr;
  *__temp1289v=buffer__unsafe_size;
  *__temp1290v=buffer__unsafe_align;
  *__temp1291v=buffer__unsafe_ptr;
  *__temp1292v=buffer__unsafe_size;
  *__temp1293v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1294v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1295v) {
  *__temp1295v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1296v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1296v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, uint64_t i, char** __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1297v;
  uint64_t buffer__unsafe_size=*__temp1298v;
  uint64_t buffer__unsafe_align=*__temp1299v;
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
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1220v(double x, double y, double* __temp1301v, double* __temp1302v) {
  goto __temp_return;
  __temp_return:
  *__temp1301v=x;
  *__temp1302v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1240v(double x, double y, double z, double* __temp1303v, double* __temp1304v, double* __temp1305v) {
  double __temp1241v__x=0;
  double __temp1241v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1220v(x,y,&__temp1241v__x,&__temp1241v__y);
  plane__x=__temp1241v__x;
  plane__y=__temp1241v__y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=plane__x;
  *__temp1304v=plane__y;
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1306v) {
  goto __temp_return;
  __temp_return:
  *__temp1306v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1307v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1308v) {
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
  *__temp1308v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1309v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1309v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1310v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1310v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1311v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1311v=z;
}

static inline __attribute__((always_inline)) int sum__temp1223v(char** __temp1312v, uint64_t* __temp1313v, uint64_t* __temp1314v, double* __temp1315v, double* __temp1316v) {
  char* v__unsafe_ptr=*__temp1312v;
  uint64_t v__unsafe_size=*__temp1313v;
  uint64_t v__unsafe_align=*__temp1314v;
  double __temp1224v=0;
  double __temp1225v=0;
  double x=0;
  double __temp1226v=0;
  double __temp1227v=0;
  double y=0;
  uint64_t __temp1228v=0;
  uint64_t __temp1229v=0;
  uint64_t i=0;
  uint64_t __temp1230v__=0;
  char __temp1231v__=0;
  char* __temp1232v__=0;
  double __temp1233v__x=0;
  double __temp1233v__y=0;
  double __temp1234v__=0;
  char* __temp1235v__=0;
  double __temp1236v__x=0;
  double __temp1236v__y=0;
  double __temp1237v__=0;
  uint64_t __temp1238v=0;
  uint64_t __temp1239v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1224v=0.0;
  __temp1225v=__temp1224v;
  x=__temp1225v;
  __temp1226v=0.0;
  __temp1227v=__temp1226v;
  y=__temp1227v;
  __temp1228v=0;
  __temp1229v=__temp1228v;
  i=__temp1229v;
  while(1){
  len__temp537v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1230v__);
  lt__temp247v(i,__temp1230v__,&__temp1231v__);
  if(!__temp1231v__){
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
  __temp1238v=1;
  add__temp170v(i,__temp1238v,&__temp1239v__);
  i=__temp1239v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1312v=v__unsafe_ptr;
  *__temp1313v=v__unsafe_size;
  *__temp1314v=v__unsafe_align;
  *__temp1315v=x;
  *__temp1316v=y;
  
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
  double __temp1256v=0;
  double __temp1257v=0;
  double __temp1258v=0;
  double __temp1259v__plane__x=0;
  double __temp1259v__plane__y=0;
  double __temp1259v__z=0;
  uint64_t __temp1260v=0;
  char* __temp1261v__=0;
  double __temp1262v=0;
  double __temp1263v=0;
  double __temp1264v=0;
  double __temp1265v=0;
  double __temp1266v=0;
  double __temp1267v=0;
  double __temp1268v__plane__x=0;
  double __temp1268v__plane__y=0;
  double __temp1268v__z=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint64_t __temp1269v__unsafe_align=0;
  double __temp1273v__x=0;
  double __temp1273v__y=0;
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
  __temp1254v=__temp1253v;
  __temp1255v=2.0;
  __temp1256v=__temp1255v;
  __temp1257v=3.0;
  __temp1258v=__temp1257v;
  Point3D__temp1240v(__temp1254v,__temp1256v,__temp1258v,&__temp1259v__plane__x,&__temp1259v__plane__y,&__temp1259v__z);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__,&__temp1259v__plane__x,8);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__+8,&__temp1259v__plane__y,8);
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__+16,&__temp1259v__z,8);
  __temp1260v=1;
  __temp_errcode=mutget__temp529v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1262v=1.0;
  __temp1263v=__temp1262v;
  __temp1264v=2.0;
  __temp1265v=__temp1264v;
  __temp1266v=3.0;
  __temp1267v=__temp1266v;
  Point3D__temp1240v(__temp1263v,__temp1265v,__temp1267v,&__temp1268v__plane__x,&__temp1268v__plane__y,&__temp1268v__z);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__,&__temp1268v__plane__x,8);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__+8,&__temp1268v__plane__y,8);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__+16,&__temp1268v__z,8);
  __temp1269v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1269v__unsafe_size=points__unsafe_size;
  __temp1269v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1223v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_align,&__temp1273v__x,&__temp1273v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1273v__x;
  sums__y=__temp1273v__y;
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