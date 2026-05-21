#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1333t(char** __t1364t, uint64_t* __t1365t, uint16_t* __t1366t, uint16_t* __t1367t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1364t=unsafe_ptr;
  *__t1365t=unsafe_size;
  *__t1366t=unsafe_offset;
  *__t1367t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1368t) {
  int value=0;
  *__t1368t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1369t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1369t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1370t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1370t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1371t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1371t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1372t) {
  char* allocated=*__t1372t;
  if(allocated){
  free(allocated);
  }
  *__t1372t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1373t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1373t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1374t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1374t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1375t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1376t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1376t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1377t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1378t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1378t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1379t, uint64_t* __t1380t, uint16_t* __t1381t, uint16_t* __t1382t, uint64_t size, char** __t1383t, uint64_t* __t1384t, uint16_t* __t1385t, uint16_t* __t1386t) {
  char* buffer__unsafe_ptr=*__t1379t;
  uint64_t buffer__unsafe_size=*__t1380t;
  uint16_t buffer__unsafe_offset=*__t1381t;
  uint16_t buffer__unsafe_align=*__t1382t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t1379t=buffer__unsafe_ptr;
  *__t1380t=buffer__unsafe_size;
  *__t1381t=buffer__unsafe_offset;
  *__t1382t=buffer__unsafe_align;
  *__t1383t=__t521t__unsafe_ptr;
  *__t1384t=__t521t__unsafe_size;
  *__t1385t=__t521t__unsafe_offset;
  *__t1386t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1387t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1387t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1388t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1388t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1389t) {
  *__t1389t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1390t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1390t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1391t, uint64_t* __t1392t, uint16_t* __t1393t, uint16_t* __t1394t, uint64_t i, char** __t1395t) {
  char* buffer__unsafe_ptr=*__t1391t;
  uint64_t buffer__unsafe_size=*__t1392t;
  uint16_t buffer__unsafe_offset=*__t1393t;
  uint16_t buffer__unsafe_align=*__t1394t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t592t__);
  mul__t194t(i,__t592t__,&__t593t__);
  nat__t505t(buffer__unsafe_offset,&__t594t__);
  add__t170t(__t593t__,__t594t__,&__t595t__);
  add__t503t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1391t=buffer__unsafe_ptr;
  *__t1392t=buffer__unsafe_size;
  *__t1393t=buffer__unsafe_offset;
  *__t1394t=buffer__unsafe_align;
  *__t1395t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1309t(double x, double y, double* __t1396t, double* __t1397t) {
  goto __t_return;
  __t_return:
  *__t1396t=x;
  *__t1397t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1329t(double x, double y, double z, double* __t1398t, double* __t1399t, double* __t1400t) {
  double __t1330t__x=0;
  double __t1330t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1309t(x,y,&__t1330t__x,&__t1330t__y);
  plane__x=__t1330t__x;
  plane__y=__t1330t__y;
  goto __t_return;
  __t_return:
  *__t1398t=plane__x;
  *__t1399t=plane__y;
  *__t1400t=z;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1401t) {
  goto __t_return;
  __t_return:
  *__t1401t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1402t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1402t=z;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1403t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t599t__);
  mul__t194t(i,__t599t__,&__t600t__);
  nat__t505t(buffer__unsafe_offset,&__t601t__);
  add__t170t(__t600t__,__t601t__,&__t602t__);
  add__t503t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1403t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1404t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1404t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1405t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1405t=z;
}

static inline __attribute__((always_inline)) int sum__t1312t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1406t, double* __t1407t) {
  double __t1313t=0;
  double __t1314t=0;
  double x=0;
  double __t1315t=0;
  double __t1316t=0;
  double y=0;
  uint64_t __t1317t=0;
  uint64_t __t1318t=0;
  uint64_t i=0;
  uint64_t __t1319t__=0;
  char __t1320t__=0;
  char* __t1321t__=0;
  double __t1322t__x=0;
  double __t1322t__y=0;
  double __t1323t__=0;
  char* __t1324t__=0;
  double __t1325t__x=0;
  double __t1325t__y=0;
  double __t1326t__=0;
  uint64_t __t1327t=0;
  uint64_t __t1328t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1313t=0.0;
  __t1314t=__t1313t;
  x=__t1314t;
  __t1315t=0.0;
  __t1316t=__t1315t;
  y=__t1316t;
  __t1317t=0;
  __t1318t=__t1317t;
  i=__t1318t;
  while(1){
  len__t604t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1319t__);
  lt__t247t(i,__t1319t__,&__t1320t__);
  if(!__t1320t__){
  break;
  }
  __t_errcode=get__t597t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1321t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1321t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1322t__x,__t1321t__,8);
  memcpy(&__t1322t__y,__t1321t__+8,8);
  add__t148t(x,__t1322t__x,&__t1323t__);
  x=__t1323t__;
  __t_errcode=get__t597t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1324t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1324t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1325t__x,__t1324t__,8);
  memcpy(&__t1325t__y,__t1324t__+8,8);
  add__t148t(y,__t1325t__y,&__t1326t__);
  y=__t1326t__;
  __t1327t=1;
  add__t170t(i,__t1327t,&__t1328t__);
  i=__t1328t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1406t=x;
  *__t1407t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1332t() {
  char* __t1335t__unsafe_ptr=0;
  uint64_t __t1335t__unsafe_size=0;
  uint16_t __t1335t__unsafe_offset=0;
  uint16_t __t1335t__unsafe_align=0;
  uint64_t __t1336t=0;
  char* __t1337t__unsafe_ptr=0;
  uint64_t __t1337t__unsafe_size=0;
  uint16_t __t1337t__unsafe_offset=0;
  uint16_t __t1337t__unsafe_align=0;
  uint64_t __t1338t____t510t=0;
  char __t1338t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1339t=0;
  char* __t1340t__=0;
  double __t1341t=0;
  double __t1342t=0;
  double __t1343t=0;
  double __t1344t=0;
  double __t1345t=0;
  double __t1346t=0;
  double __t1347t__plane__x=0;
  double __t1347t__plane__y=0;
  double __t1347t__z=0;
  uint64_t __t1348t=0;
  char* __t1349t__=0;
  double __t1350t=0;
  double __t1351t=0;
  double __t1352t=0;
  double __t1353t=0;
  double __t1354t=0;
  double __t1355t=0;
  double __t1356t__plane__x=0;
  double __t1356t__plane__y=0;
  double __t1356t__z=0;
  char* __t1357t__unsafe_ptr=0;
  uint64_t __t1357t__unsafe_size=0;
  uint16_t __t1357t__unsafe_offset=0;
  uint16_t __t1357t__unsafe_align=0;
  double __t1361t__x=0;
  double __t1361t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1333t(&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align);
  __t1336t=10;
  __t_errcode=alloc__t508t(&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align,__t1336t,&__t1337t__unsafe_ptr,&__t1337t__unsafe_size,&__t1337t__unsafe_offset,&__t1337t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1337t__unsafe_ptr;
  points__unsafe_size=__t1337t__unsafe_size;
  points__unsafe_offset=__t1337t__unsafe_offset;
  points__unsafe_align=__t1337t__unsafe_align;
  __t1339t=0;
  __t_errcode=mutget__t590t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1339t,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1341t=1.0;
  __t1342t=__t1341t;
  __t1343t=2.0;
  __t1344t=__t1343t;
  __t1345t=3.0;
  __t1346t=__t1345t;
  Point3D__t1329t(__t1342t,__t1344t,__t1346t,&__t1347t__plane__x,&__t1347t__plane__y,&__t1347t__z);
  if(!__t1340t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1340t__,&__t1347t__plane__x,8);
  memcpy(__t1340t__+8,&__t1347t__plane__y,8);
  memcpy(__t1340t__+16,&__t1347t__z,8);
  __t1348t=1;
  __t_errcode=mutget__t590t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1348t,&__t1349t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1350t=1.0;
  __t1351t=__t1350t;
  __t1352t=2.0;
  __t1353t=__t1352t;
  __t1354t=3.0;
  __t1355t=__t1354t;
  Point3D__t1329t(__t1351t,__t1353t,__t1355t,&__t1356t__plane__x,&__t1356t__plane__y,&__t1356t__z);
  if(!__t1349t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1349t__,&__t1356t__plane__x,8);
  memcpy(__t1349t__+8,&__t1356t__plane__y,8);
  memcpy(__t1349t__+16,&__t1356t__z,8);
  __t1357t__unsafe_ptr=points__unsafe_ptr;
  __t1357t__unsafe_size=points__unsafe_size;
  __t1357t__unsafe_offset=points__unsafe_offset+0;
  __t1357t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1312t(__t1357t__unsafe_ptr,__t1357t__unsafe_size,__t1357t__unsafe_offset,__t1357t__unsafe_align,&__t1361t__x,&__t1361t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1361t__x;
  sums__y=__t1361t__y;
  print__t373t(sums__x);
  print__t373t(sums__y);
  
  __t_failure:__t1338t____t510t=0;
  neq__t142t(__t1337t__unsafe_size,__t1338t____t510t,&__t1338t____t511t__);
  if(__t1338t____t511t__){
  __t1337t__unsafe_size=0;
  __t1337t__unsafe_size=__t1337t__unsafe_size;
  __t1337t__unsafe_ptr=__t1337t__unsafe_ptr;
  free__t501t(&__t1337t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1332t();return 0;}