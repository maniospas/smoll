#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1329t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1333t(char** __t1359t, uint64_t* __t1360t, uint16_t* __t1361t, uint16_t* __t1362t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1359t=unsafe_ptr;
  *__t1360t=unsafe_size;
  *__t1361t=unsafe_offset;
  *__t1362t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1363t) {
  int value=0;
  *__t1363t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1364t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1364t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1365t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1365t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1366t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1366t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1367t) {
  char* allocated=*__t1367t;
  if(allocated){
  free(allocated);
  }
  *__t1367t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1368t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1369t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1369t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1370t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1370t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1371t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1371t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1372t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1372t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1373t) {
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
  *__t1373t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1374t, uint64_t* __t1375t, uint16_t* __t1376t, uint16_t* __t1377t, uint64_t size, char** __t1378t, uint64_t* __t1379t, uint16_t* __t1380t, uint16_t* __t1381t) {
  char* buffer__unsafe_ptr=*__t1374t;
  uint64_t buffer__unsafe_size=*__t1375t;
  uint16_t buffer__unsafe_offset=*__t1376t;
  uint16_t buffer__unsafe_align=*__t1377t;
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
  *__t1374t=buffer__unsafe_ptr;
  *__t1375t=buffer__unsafe_size;
  *__t1376t=buffer__unsafe_offset;
  *__t1377t=buffer__unsafe_align;
  *__t1378t=__t521t__unsafe_ptr;
  *__t1379t=__t521t__unsafe_size;
  *__t1380t=__t521t__unsafe_offset;
  *__t1381t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1382t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1382t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1383t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1383t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1384t) {
  *__t1384t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1385t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1385t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1386t, uint64_t* __t1387t, uint16_t* __t1388t, uint16_t* __t1389t, uint64_t i, char** __t1390t) {
  char* buffer__unsafe_ptr=*__t1386t;
  uint64_t buffer__unsafe_size=*__t1387t;
  uint16_t buffer__unsafe_offset=*__t1388t;
  uint16_t buffer__unsafe_align=*__t1389t;
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
  *__t1386t=buffer__unsafe_ptr;
  *__t1387t=buffer__unsafe_size;
  *__t1388t=buffer__unsafe_offset;
  *__t1389t=buffer__unsafe_align;
  *__t1390t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1309t(double x, double y, double* __t1391t, double* __t1392t) {
  goto __t_return;
  __t_return:
  *__t1391t=x;
  *__t1392t=y;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1327t(double x, double y, double z, double* __t1393t, double* __t1394t, double* __t1395t) {
  double __t1328t__x=0;
  double __t1328t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1309t(x,y,&__t1328t__x,&__t1328t__y);
  plane__x=__t1328t__x;
  plane__y=__t1328t__y;
  print__t368t(__t1329t);
  goto __t_return;
  __t_return:
  *__t1393t=plane__x;
  *__t1394t=plane__y;
  *__t1395t=z;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1396t) {
  goto __t_return;
  __t_return:
  *__t1396t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t1397t, uint64_t* __t1398t) {
  int __t461t=0;
  uint64_t __t462t=0;
  uint64_t _from=0;
  uint64_t __t463t=0;
  uint64_t from=0;
  __t462t=0;
  _from=__t462t;
  __t463t=_from;
  from=__t463t;
  goto __t_return;
  __t_return:
  *__t1397t=from;
  *__t1398t=to;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t1399t, uint64_t r__to, uint64_t* __t1400t) {
  uint64_t r__from=*__t1399t;
  char __t470t__=0;
  uint64_t ret=0;
  uint64_t __t471t=0;
  uint64_t __t472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t470t__);
  if(__t470t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t471t=1;
  add__t170t(ret,__t471t,&__t472t__);
  r__from=__t472t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1399t=r__from;
  *__t1400t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1401t) {
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
  *__t1401t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1402t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1402t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1403t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1403t=z;
}

static inline __attribute__((always_inline)) int sum__t1312t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1404t, double* __t1405t) {
  double __t1313t=0;
  double __t1314t=0;
  double x=0;
  double __t1315t=0;
  double __t1316t=0;
  double y=0;
  uint64_t __t1317t__=0;
  uint64_t __t1318t__from=0;
  uint64_t __t1318t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1319t=0;
  uint64_t __t1320t__=0;
  uint64_t i=0;
  char* __t1321t__=0;
  double __t1322t__x=0;
  double __t1322t__y=0;
  double __t1323t__=0;
  char* __t1324t__=0;
  double __t1325t__x=0;
  double __t1325t__y=0;
  double __t1326t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1313t=0.0;
  __t1314t=__t1313t;
  x=__t1314t;
  __t1315t=0.0;
  __t1316t=__t1315t;
  y=__t1316t;
  len__t604t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1317t__);
  range__t460t(__t1317t__,&__t1318t__from,&__t1318t__to);
  it__from=__t1318t__from;
  it__to=__t1318t__to;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1320t__);
  __t1319t=__t_complain;
  i=__t1320t__;
  __t1319t=__t1319t==0;
  if(!__t1319t){
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
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1404t=x;
  *__t1405t=y;
  
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
  char* __t1336t__unsafe_ptr=0;
  uint64_t __t1336t__unsafe_size=0;
  uint16_t __t1336t__unsafe_offset=0;
  uint16_t __t1336t__unsafe_align=0;
  uint64_t __t1337t=0;
  char* __t1338t__unsafe_ptr=0;
  uint64_t __t1338t__unsafe_size=0;
  uint16_t __t1338t__unsafe_offset=0;
  uint16_t __t1338t__unsafe_align=0;
  uint64_t __t1339t____t510t=0;
  char __t1339t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1340t=0;
  char* __t1341t__=0;
  double __t1342t=0;
  double __t1343t=0;
  double __t1344t=0;
  double __t1345t__plane__x=0;
  double __t1345t__plane__y=0;
  double __t1345t__z=0;
  uint64_t __t1346t=0;
  char* __t1347t__=0;
  double __t1348t=0;
  double __t1349t=0;
  double __t1350t=0;
  double __t1351t__plane__x=0;
  double __t1351t__plane__y=0;
  double __t1351t__z=0;
  char* __t1352t__unsafe_ptr=0;
  uint64_t __t1352t__unsafe_size=0;
  uint16_t __t1352t__unsafe_offset=0;
  uint16_t __t1352t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1356t__x=0;
  double __t1356t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1333t(&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align);
  __t1336t__unsafe_ptr=__t1335t__unsafe_ptr;
  __t1336t__unsafe_size=__t1335t__unsafe_size;
  __t1336t__unsafe_offset=__t1335t__unsafe_offset;
  __t1336t__unsafe_align=__t1335t__unsafe_align;
  __t1337t=10;
  __t_errcode=alloc__t508t(&__t1336t__unsafe_ptr,&__t1336t__unsafe_size,&__t1336t__unsafe_offset,&__t1336t__unsafe_align,__t1337t,&__t1338t__unsafe_ptr,&__t1338t__unsafe_size,&__t1338t__unsafe_offset,&__t1338t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1338t__unsafe_ptr;
  points__unsafe_size=__t1338t__unsafe_size;
  points__unsafe_offset=__t1338t__unsafe_offset;
  points__unsafe_align=__t1338t__unsafe_align;
  __t1340t=0;
  __t_errcode=mutget__t590t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1340t,&__t1341t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1342t=1.0;
  __t1343t=2.0;
  __t1344t=3.0;
  Point3D__t1327t(__t1342t,__t1343t,__t1344t,&__t1345t__plane__x,&__t1345t__plane__y,&__t1345t__z);
  if(!__t1341t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1341t__,&__t1345t__plane__x,8);
  memcpy(__t1341t__+8,&__t1345t__plane__y,8);
  memcpy(__t1341t__+16,&__t1345t__z,8);
  __t1346t=1;
  __t_errcode=mutget__t590t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1346t,&__t1347t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1348t=1.0;
  __t1349t=2.0;
  __t1350t=3.0;
  Point3D__t1327t(__t1348t,__t1349t,__t1350t,&__t1351t__plane__x,&__t1351t__plane__y,&__t1351t__z);
  if(!__t1347t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1347t__,&__t1351t__plane__x,8);
  memcpy(__t1347t__+8,&__t1351t__plane__y,8);
  memcpy(__t1347t__+16,&__t1351t__z,8);
  __t1352t__unsafe_ptr=points__unsafe_ptr;
  __t1352t__unsafe_size=points__unsafe_size;
  __t1352t__unsafe_offset=points__unsafe_offset+0;
  __t1352t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1352t__unsafe_ptr;
  plane__unsafe_size=__t1352t__unsafe_size;
  plane__unsafe_offset=__t1352t__unsafe_offset;
  plane__unsafe_align=__t1352t__unsafe_align;
  __t_errcode=sum__t1312t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1356t__x,&__t1356t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1356t__x;
  sums__y=__t1356t__y;
  print__t373t(sums__x);
  print__t373t(sums__y);
  
  __t_failure:__t1339t____t510t=0;
  neq__t142t(__t1338t__unsafe_size,__t1339t____t510t,&__t1339t____t511t__);
  if(__t1339t____t511t__){
  __t1338t__unsafe_size=0;
  __t1338t__unsafe_size=__t1338t__unsafe_size;
  __t1338t__unsafe_ptr=__t1338t__unsafe_ptr;
  free__t501t(&__t1338t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1332t();return 0;}