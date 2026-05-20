#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
static const char* __t_all_errcodes[34] = {"noerr",
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
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1290t(char** __t1321t, uint64_t* __t1322t, uint16_t* __t1323t, uint16_t* __t1324t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1321t=unsafe_ptr;
  *__t1322t=unsafe_size;
  *__t1323t=unsafe_offset;
  *__t1324t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1325t) {
  int value=0;
  *__t1325t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1326t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1326t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1327t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1327t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1328t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1328t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1329t) {
  char* allocated=*__t1329t;
  if(allocated){
  free(allocated);
  }
  *__t1329t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1330t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1330t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1331t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1331t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1332t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1332t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1333t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1333t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1334t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1335t) {
  char* allocated=0;
  char __t460t__=0;
  char __t461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t412t(allocated,&__t460t__);
  not__t26t(__t460t__,&__t461t__);
  if(__t461t__){
  __t_errcode=8;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1335t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1336t, uint64_t* __t1337t, uint16_t* __t1338t, uint16_t* __t1339t, uint64_t size, char** __t1340t, uint64_t* __t1341t, uint16_t* __t1342t, uint16_t* __t1343t) {
  char* buffer__unsafe_ptr=*__t1336t;
  uint64_t buffer__unsafe_size=*__t1337t;
  uint16_t buffer__unsafe_offset=*__t1338t;
  uint16_t buffer__unsafe_align=*__t1339t;
  int __t474t=0;
  uint64_t __t475t=0;
  char __t476t__=0;
  uint64_t __t477t=0;
  char* ptr=0;
  char __t479t__=0;
  uint64_t __t480t=0;
  char __t481t__=0;
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  uint64_t __t484t__=0;
  char* __t486t__unsafe_ptr=0;
  uint64_t __t486t__unsafe_size=0;
  uint16_t __t486t__unsafe_offset=0;
  uint16_t __t486t__unsafe_align=0;
  uint64_t __t487t=0;
  char __t488t__=0;
  uint64_t __t489t__=0;
  uint64_t __t490t__=0;
  uint64_t bytes=0;
  char* __t491t__=0;
  uint64_t __t492t=0;
  char* __t494t__unsafe_ptr=0;
  uint64_t __t494t__unsafe_size=0;
  uint16_t __t494t__unsafe_offset=0;
  uint16_t __t494t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t479t__);
  if(__t479t__){
  __t480t=0;
  neq__t142t(size,__t480t,&__t481t__);
  if(__t481t__){
  __t482t=0;
  nat__t470t(buffer__unsafe_align,&__t483t__);
  mul__t194t(__t483t__,size,&__t484t__);
  zero__t467t(buffer__unsafe_ptr,__t482t,__t484t__);
  }
  __t486t__unsafe_ptr=buffer__unsafe_ptr;
  __t486t__unsafe_size=buffer__unsafe_size;
  __t486t__unsafe_offset=buffer__unsafe_offset;
  __t486t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t487t=0;
  neq__t142t(buffer__unsafe_size,__t487t,&__t488t__);
  if(__t488t__){
  __t_errcode=10;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t489t__);
  mul__t194t(__t489t__,size,&__t490t__);
  bytes=__t490t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t459t(bytes,&__t491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t491t__;
  __t492t=0;
  zero__t467t(buffer__unsafe_ptr,__t492t,bytes);
  __t494t__unsafe_ptr=buffer__unsafe_ptr;
  __t494t__unsafe_size=buffer__unsafe_size;
  __t494t__unsafe_offset=buffer__unsafe_offset;
  __t494t__unsafe_align=buffer__unsafe_align;
  __t486t__unsafe_ptr=__t494t__unsafe_ptr;
  __t486t__unsafe_size=__t494t__unsafe_size;
  __t486t__unsafe_offset=__t494t__unsafe_offset;
  __t486t__unsafe_align=__t494t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t475t=0;
  neq__t142t(__t486t__unsafe_size,__t475t,&__t476t__);
  if(__t476t__){
  __t486t__unsafe_size=0;
  __t486t__unsafe_size=__t486t__unsafe_size;
  __t486t__unsafe_ptr=__t486t__unsafe_ptr;
  free__t466t(&__t486t__unsafe_ptr);
  }
  __t_return:
  *__t1336t=buffer__unsafe_ptr;
  *__t1337t=buffer__unsafe_size;
  *__t1338t=buffer__unsafe_offset;
  *__t1339t=buffer__unsafe_align;
  *__t1340t=__t486t__unsafe_ptr;
  *__t1341t=__t486t__unsafe_size;
  *__t1342t=__t486t__unsafe_offset;
  *__t1343t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1344t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1344t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1345t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1345t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1346t) {
  *__t1346t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1347t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1347t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1348t, uint64_t* __t1349t, uint16_t* __t1350t, uint16_t* __t1351t, uint64_t i, char** __t1352t) {
  char* buffer__unsafe_ptr=*__t1348t;
  uint64_t buffer__unsafe_size=*__t1349t;
  uint16_t buffer__unsafe_offset=*__t1350t;
  uint16_t buffer__unsafe_align=*__t1351t;
  char __t546t__=0;
  uint64_t __t547t__=0;
  uint64_t __t548t__=0;
  uint64_t __t549t__=0;
  uint64_t __t550t__=0;
  char* __t551t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t546t__);
  if(__t546t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t547t__);
  mul__t194t(i,__t547t__,&__t548t__);
  nat__t470t(buffer__unsafe_offset,&__t549t__);
  add__t170t(__t548t__,__t549t__,&__t550t__);
  add__t468t(buffer__unsafe_ptr,__t550t__,&__t551t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1348t=buffer__unsafe_ptr;
  *__t1349t=buffer__unsafe_size;
  *__t1350t=buffer__unsafe_offset;
  *__t1351t=buffer__unsafe_align;
  *__t1352t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1266t(double x, double y, double* __t1353t, double* __t1354t) {
  goto __t_return;
  __t_return:
  *__t1353t=x;
  *__t1354t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1286t(double x, double y, double z, double* __t1355t, double* __t1356t, double* __t1357t) {
  double __t1287t__x=0;
  double __t1287t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1266t(x,y,&__t1287t__x,&__t1287t__y);
  plane__x=__t1287t__x;
  plane__y=__t1287t__y;
  goto __t_return;
  __t_return:
  *__t1355t=plane__x;
  *__t1356t=plane__y;
  *__t1357t=z;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1358t) {
  goto __t_return;
  __t_return:
  *__t1358t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1359t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1360t) {
  char __t553t__=0;
  uint64_t __t554t__=0;
  uint64_t __t555t__=0;
  uint64_t __t556t__=0;
  uint64_t __t557t__=0;
  char* __t558t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t553t__);
  if(__t553t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t554t__);
  mul__t194t(i,__t554t__,&__t555t__);
  nat__t470t(buffer__unsafe_offset,&__t556t__);
  add__t170t(__t555t__,__t556t__,&__t557t__);
  add__t468t(buffer__unsafe_ptr,__t557t__,&__t558t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1360t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1361t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1361t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1362t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1362t=z;
}

static inline __attribute__((always_inline)) int sum__t1269t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1363t, double* __t1364t) {
  double __t1270t=0;
  double __t1271t=0;
  double x=0;
  double __t1272t=0;
  double __t1273t=0;
  double y=0;
  uint64_t __t1274t=0;
  uint64_t __t1275t=0;
  uint64_t i=0;
  uint64_t __t1276t__=0;
  char __t1277t__=0;
  char* __t1278t__=0;
  double __t1279t__x=0;
  double __t1279t__y=0;
  double __t1280t__=0;
  char* __t1281t__=0;
  double __t1282t__x=0;
  double __t1282t__y=0;
  double __t1283t__=0;
  uint64_t __t1284t=0;
  uint64_t __t1285t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1270t=0.0;
  __t1271t=__t1270t;
  x=__t1271t;
  __t1272t=0.0;
  __t1273t=__t1272t;
  y=__t1273t;
  __t1274t=0;
  __t1275t=__t1274t;
  i=__t1275t;
  while(1){
  len__t559t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1276t__);
  lt__t247t(i,__t1276t__,&__t1277t__);
  if(!__t1277t__){
  break;
  }
  __t_errcode=get__t552t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1278t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1278t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1279t__x,__t1278t__,8);
  memcpy(&__t1279t__y,__t1278t__+8,8);
  add__t148t(x,__t1279t__x,&__t1280t__);
  x=__t1280t__;
  __t_errcode=get__t552t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1281t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1281t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1282t__x,__t1281t__,8);
  memcpy(&__t1282t__y,__t1281t__+8,8);
  add__t148t(y,__t1282t__y,&__t1283t__);
  y=__t1283t__;
  __t1284t=1;
  add__t170t(i,__t1284t,&__t1285t__);
  i=__t1285t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1363t=x;
  *__t1364t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1289t() {
  char* __t1292t__unsafe_ptr=0;
  uint64_t __t1292t__unsafe_size=0;
  uint16_t __t1292t__unsafe_offset=0;
  uint16_t __t1292t__unsafe_align=0;
  uint64_t __t1293t=0;
  char* __t1294t__unsafe_ptr=0;
  uint64_t __t1294t__unsafe_size=0;
  uint16_t __t1294t__unsafe_offset=0;
  uint16_t __t1294t__unsafe_align=0;
  uint64_t __t1295t____t475t=0;
  char __t1295t____t476t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1296t=0;
  char* __t1297t__=0;
  double __t1298t=0;
  double __t1299t=0;
  double __t1300t=0;
  double __t1301t=0;
  double __t1302t=0;
  double __t1303t=0;
  double __t1304t__plane__x=0;
  double __t1304t__plane__y=0;
  double __t1304t__z=0;
  uint64_t __t1305t=0;
  char* __t1306t__=0;
  double __t1307t=0;
  double __t1308t=0;
  double __t1309t=0;
  double __t1310t=0;
  double __t1311t=0;
  double __t1312t=0;
  double __t1313t__plane__x=0;
  double __t1313t__plane__y=0;
  double __t1313t__z=0;
  char* __t1314t__unsafe_ptr=0;
  uint64_t __t1314t__unsafe_size=0;
  uint16_t __t1314t__unsafe_offset=0;
  uint16_t __t1314t__unsafe_align=0;
  double __t1318t__x=0;
  double __t1318t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1290t(&__t1292t__unsafe_ptr,&__t1292t__unsafe_size,&__t1292t__unsafe_offset,&__t1292t__unsafe_align);
  __t1293t=10;
  __t_errcode=alloc__t473t(&__t1292t__unsafe_ptr,&__t1292t__unsafe_size,&__t1292t__unsafe_offset,&__t1292t__unsafe_align,__t1293t,&__t1294t__unsafe_ptr,&__t1294t__unsafe_size,&__t1294t__unsafe_offset,&__t1294t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1294t__unsafe_ptr;
  points__unsafe_size=__t1294t__unsafe_size;
  points__unsafe_offset=__t1294t__unsafe_offset;
  points__unsafe_align=__t1294t__unsafe_align;
  __t1296t=0;
  __t_errcode=mutget__t545t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1296t,&__t1297t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1298t=1.0;
  __t1299t=__t1298t;
  __t1300t=2.0;
  __t1301t=__t1300t;
  __t1302t=3.0;
  __t1303t=__t1302t;
  Point3D__t1286t(__t1299t,__t1301t,__t1303t,&__t1304t__plane__x,&__t1304t__plane__y,&__t1304t__z);
  if(!__t1297t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1297t__,&__t1304t__plane__x,8);
  memcpy(__t1297t__+8,&__t1304t__plane__y,8);
  memcpy(__t1297t__+16,&__t1304t__z,8);
  __t1305t=1;
  __t_errcode=mutget__t545t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1305t,&__t1306t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1307t=1.0;
  __t1308t=__t1307t;
  __t1309t=2.0;
  __t1310t=__t1309t;
  __t1311t=3.0;
  __t1312t=__t1311t;
  Point3D__t1286t(__t1308t,__t1310t,__t1312t,&__t1313t__plane__x,&__t1313t__plane__y,&__t1313t__z);
  if(!__t1306t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1306t__,&__t1313t__plane__x,8);
  memcpy(__t1306t__+8,&__t1313t__plane__y,8);
  memcpy(__t1306t__+16,&__t1313t__z,8);
  __t1314t__unsafe_ptr=points__unsafe_ptr;
  __t1314t__unsafe_size=points__unsafe_size;
  __t1314t__unsafe_offset=points__unsafe_offset+0;
  __t1314t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1269t(__t1314t__unsafe_ptr,__t1314t__unsafe_size,__t1314t__unsafe_offset,__t1314t__unsafe_align,&__t1318t__x,&__t1318t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1318t__x;
  sums__y=__t1318t__y;
  print__t368t(sums__x);
  print__t368t(sums__y);
  
  __t_failure:__t1295t____t475t=0;
  neq__t142t(__t1294t__unsafe_size,__t1295t____t475t,&__t1295t____t476t__);
  if(__t1295t____t476t__){
  __t1294t__unsafe_size=0;
  __t1294t__unsafe_size=__t1294t__unsafe_size;
  __t1294t__unsafe_ptr=__t1294t__unsafe_ptr;
  free__t466t(&__t1294t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1289t();return 0;}