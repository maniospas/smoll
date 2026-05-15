#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
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
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void Point3D____temp_buffer____buffer__temp1246v(char** __temp1278v, uint64_t* __temp1279v, uint64_t* __temp1280v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=24;
  *__temp1278v=unsafe_ptr;
  *__temp1279v=unsafe_size;
  *__temp1280v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1281v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1282v) {
  char* allocated=*__temp1282v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1282v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1283v) {
  int value=0;
  *__temp1283v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1284v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1284v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1285v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1285v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1286v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1287v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1288v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1289v) {
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
  *__temp1289v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v, uint64_t size, char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  uint64_t buffer__unsafe_size=*__temp1291v;
  uint64_t buffer__unsafe_align=*__temp1292v;
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
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1296v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1297v) {
  *__temp1297v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1298v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, uint64_t i, char** __temp1302v) {
  char* buffer__unsafe_ptr=*__temp1299v;
  uint64_t buffer__unsafe_size=*__temp1300v;
  uint64_t buffer__unsafe_align=*__temp1301v;
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
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_align;
  *__temp1302v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Point2D__temp1222v(double x, double y, double* __temp1303v, double* __temp1304v) {
  goto __temp_return;
  __temp_return:
  *__temp1303v=x;
  *__temp1304v=y;
}

static inline __attribute__((always_inline)) void Point3D__temp1242v(double x, double y, double z, double* __temp1305v, double* __temp1306v, double* __temp1307v) {
  double __temp1243v__x=0;
  double __temp1243v__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__temp1222v(x,y,&__temp1243v__x,&__temp1243v__y);
  plane__x=__temp1243v__x;
  plane__y=__temp1243v__y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=plane__x;
  *__temp1306v=plane__y;
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1308v) {
  goto __temp_return;
  __temp_return:
  *__temp1308v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1309v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1309v=z;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1310v) {
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
  *__temp1310v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1311v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1311v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1312v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1312v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1313v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1313v=z;
}

static inline __attribute__((always_inline)) int sum__temp1225v(char** __temp1314v, uint64_t* __temp1315v, uint64_t* __temp1316v, double* __temp1317v, double* __temp1318v) {
  char* v__unsafe_ptr=*__temp1314v;
  uint64_t v__unsafe_size=*__temp1315v;
  uint64_t v__unsafe_align=*__temp1316v;
  double __temp1226v=0;
  double __temp1227v=0;
  double x=0;
  double __temp1228v=0;
  double __temp1229v=0;
  double y=0;
  uint64_t __temp1230v=0;
  uint64_t __temp1231v=0;
  uint64_t i=0;
  uint64_t __temp1232v__=0;
  char __temp1233v__=0;
  char* __temp1234v__=0;
  double __temp1235v__x=0;
  double __temp1235v__y=0;
  double __temp1236v__=0;
  char* __temp1237v__=0;
  double __temp1238v__x=0;
  double __temp1238v__y=0;
  double __temp1239v__=0;
  uint64_t __temp1240v=0;
  uint64_t __temp1241v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1226v=0.0;
  __temp1227v=__temp1226v;
  x=__temp1227v;
  __temp1228v=0.0;
  __temp1229v=__temp1228v;
  y=__temp1229v;
  __temp1230v=0;
  __temp1231v=__temp1230v;
  i=__temp1231v;
  while(1){
  len__temp537v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,&__temp1232v__);
  lt__temp247v(i,__temp1232v__,&__temp1233v__);
  if(!__temp1233v__){
  break;
  }
  __temp_errcode=get__temp533v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1234v__);
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
  add__temp148v(x,__temp1235v__x,&__temp1236v__);
  x=__temp1236v__;
  __temp_errcode=get__temp533v(v__unsafe_ptr,v__unsafe_size,v__unsafe_align,i,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__x,__temp1237v__,8);
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__y,__temp1237v__+8,8);
  add__temp148v(y,__temp1238v__y,&__temp1239v__);
  y=__temp1239v__;
  __temp1240v=1;
  add__temp170v(i,__temp1240v,&__temp1241v__);
  i=__temp1241v__;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1314v=v__unsafe_ptr;
  *__temp1315v=v__unsafe_size;
  *__temp1316v=v__unsafe_align;
  *__temp1317v=x;
  *__temp1318v=y;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1245v() {
  char* __temp1248v__unsafe_ptr=0;
  uint64_t __temp1248v__unsafe_size=0;
  uint64_t __temp1248v__unsafe_align=0;
  char* __temp1249v__unsafe_ptr=0;
  uint64_t __temp1249v__unsafe_size=0;
  uint64_t __temp1249v__unsafe_align=0;
  uint64_t __temp1250v=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint64_t __temp1251v__unsafe_align=0;
  char __temp1252v____temp469v__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint64_t points__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__=0;
  double __temp1255v=0;
  double __temp1256v=0;
  double __temp1257v=0;
  double __temp1258v=0;
  double __temp1259v=0;
  double __temp1260v=0;
  double __temp1261v__plane__x=0;
  double __temp1261v__plane__y=0;
  double __temp1261v__z=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  double __temp1264v=0;
  double __temp1265v=0;
  double __temp1266v=0;
  double __temp1267v=0;
  double __temp1268v=0;
  double __temp1269v=0;
  double __temp1270v__plane__x=0;
  double __temp1270v__plane__y=0;
  double __temp1270v__z=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint64_t __temp1271v__unsafe_align=0;
  double __temp1275v__x=0;
  double __temp1275v__y=0;
  double sums__x=0;
  double sums__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  Point3D____temp_buffer____buffer__temp1246v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align);
  __temp1249v__unsafe_ptr=__temp1248v__unsafe_ptr;
  __temp1249v__unsafe_size=__temp1248v__unsafe_size;
  __temp1249v__unsafe_align=__temp1248v__unsafe_align;
  __temp1250v=10;
  __temp_errcode=alloc__temp467v(&__temp1249v__unsafe_ptr,&__temp1249v__unsafe_size,&__temp1249v__unsafe_align,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  points__unsafe_ptr=__temp1251v__unsafe_ptr;
  points__unsafe_size=__temp1251v__unsafe_size;
  points__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=0;
  __temp_errcode=mutget__temp529v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1253v,&__temp1254v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1255v=1.0;
  __temp1256v=__temp1255v;
  __temp1257v=2.0;
  __temp1258v=__temp1257v;
  __temp1259v=3.0;
  __temp1260v=__temp1259v;
  Point3D__temp1242v(__temp1256v,__temp1258v,__temp1260v,&__temp1261v__plane__x,&__temp1261v__plane__y,&__temp1261v__z);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__,&__temp1261v__plane__x,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+8,&__temp1261v__plane__y,8);
  if(!__temp1254v__){
  goto __temp_failure;
  }
  memcpy(__temp1254v__+16,&__temp1261v__z,8);
  __temp1262v=1;
  __temp_errcode=mutget__temp529v(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1264v=1.0;
  __temp1265v=__temp1264v;
  __temp1266v=2.0;
  __temp1267v=__temp1266v;
  __temp1268v=3.0;
  __temp1269v=__temp1268v;
  Point3D__temp1242v(__temp1265v,__temp1267v,__temp1269v,&__temp1270v__plane__x,&__temp1270v__plane__y,&__temp1270v__z);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__,&__temp1270v__plane__x,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+8,&__temp1270v__plane__y,8);
  if(!__temp1263v__){
  goto __temp_failure;
  }
  memcpy(__temp1263v__+16,&__temp1270v__z,8);
  __temp1271v__unsafe_ptr=points__unsafe_ptr+0;
  __temp1271v__unsafe_size=points__unsafe_size;
  __temp1271v__unsafe_align=points__unsafe_align;
  __temp_errcode=sum__temp1225v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_align,&__temp1275v__x,&__temp1275v__y);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sums__x=__temp1275v__x;
  sums__y=__temp1275v__y;
  print__temp366v(sums__x);
  print__temp366v(sums__y);
  
  __temp_failure:exists__temp412v(__temp1251v__unsafe_ptr,&__temp1252v____temp469v__);
  if(__temp1252v____temp469v__){
  __temp1251v__unsafe_size=0;
  __temp1251v__unsafe_size=__temp1251v__unsafe_size;
  free__temp461v(&__temp1251v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1245v();return 0;}