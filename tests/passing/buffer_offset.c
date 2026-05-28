#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1341t="starting point creation";
const char* const __t371t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1345t(char** __t1371t, uint64_t* __t1372t, uint16_t* __t1373t, uint16_t* __t1374t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1371t=unsafe_ptr;
  *__t1372t=unsafe_size;
  *__t1373t=unsafe_offset;
  *__t1374t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1375t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1376t) {
  char* allocated=*__t1376t;
  if(allocated){
  free(allocated);
  }
  *__t1376t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1377t) {
  int value=0;
  *__t1377t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1378t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1378t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1379t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1379t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1380t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1381t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1381t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1382t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1382t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1383t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1383t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1384t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1384t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1385t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1385t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1386t, uint64_t* __t1387t, uint16_t* __t1388t, uint16_t* __t1389t, uint64_t size, char** __t1390t, uint64_t* __t1391t, uint16_t* __t1392t, uint16_t* __t1393t) {
  char* buffer__unsafe_ptr=*__t1386t;
  uint64_t buffer__unsafe_size=*__t1387t;
  uint16_t buffer__unsafe_offset=*__t1388t;
  uint16_t buffer__unsafe_align=*__t1389t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1386t=buffer__unsafe_ptr;
  *__t1387t=buffer__unsafe_size;
  *__t1388t=buffer__unsafe_offset;
  *__t1389t=buffer__unsafe_align;
  *__t1390t=buffer__unsafe_ptr;
  *__t1391t=buffer__unsafe_size;
  *__t1392t=buffer__unsafe_offset;
  *__t1393t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1394t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1394t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1395t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1395t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1396t) {
  *__t1396t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1397t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1397t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1398t, uint64_t* __t1399t, uint16_t* __t1400t, uint16_t* __t1401t, uint64_t i, char** __t1402t) {
  char* buffer__unsafe_ptr=*__t1398t;
  uint64_t buffer__unsafe_size=*__t1399t;
  uint16_t buffer__unsafe_offset=*__t1400t;
  uint16_t buffer__unsafe_align=*__t1401t;
  char __t585t__=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  uint64_t __t589t__=0;
  char* __t590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t585t__);
  if(__t585t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t586t__);
  mul__t195t(i,__t586t__,&__t587t__);
  nat__t506t(buffer__unsafe_offset,&__t588t__);
  add__t171t(__t587t__,__t588t__,&__t589t__);
  add__t504t(buffer__unsafe_ptr,__t589t__,&__t590t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1398t=buffer__unsafe_ptr;
  *__t1399t=buffer__unsafe_size;
  *__t1400t=buffer__unsafe_offset;
  *__t1401t=buffer__unsafe_align;
  *__t1402t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1321t(double x, double y, double* __t1403t, double* __t1404t) {
  goto __t_return;
  __t_return:
  *__t1403t=x;
  *__t1404t=y;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1339t(double x, double y, double z, double* __t1405t, double* __t1406t, double* __t1407t) {
  double __t1340t__x=0;
  double __t1340t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1321t(x,y,&__t1340t__x,&__t1340t__y);
  plane__x=__t1340t__x;
  plane__y=__t1340t__y;
  print__t369t(__t1341t);
  goto __t_return;
  __t_return:
  *__t1405t=plane__x;
  *__t1406t=plane__y;
  *__t1407t=z;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1408t) {
  goto __t_return;
  __t_return:
  *__t1408t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1409t, uint64_t* __t1410t) {
  int __t462t=0;
  uint64_t __t463t=0;
  uint64_t _from=0;
  uint64_t __t464t=0;
  uint64_t from=0;
  __t463t=0;
  _from=__t463t;
  __t464t=_from;
  from=__t464t;
  goto __t_return;
  __t_return:
  *__t1409t=from;
  *__t1410t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1411t, uint64_t r__to, uint64_t* __t1412t) {
  uint64_t r__from=*__t1411t;
  char __t471t__=0;
  uint64_t ret=0;
  uint64_t __t472t=0;
  uint64_t __t473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(r__from,r__to,&__t471t__);
  if(__t471t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t472t=1;
  add__t171t(ret,__t472t,&__t473t__);
  r__from=__t473t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1411t=r__from;
  *__t1412t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1413t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1413t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1414t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1414t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1415t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1415t=z;
}

static inline __attribute__((always_inline)) int sum__t1324t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1416t, double* __t1417t) {
  double __t1325t=0;
  double __t1326t=0;
  double x=0;
  double __t1327t=0;
  double __t1328t=0;
  double y=0;
  uint64_t __t1329t__=0;
  uint64_t __t1330t__from=0;
  uint64_t __t1330t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1331t=0;
  uint64_t __t1332t__=0;
  uint64_t i=0;
  char* __t1333t__=0;
  double __t1334t__x=0;
  double __t1334t__y=0;
  double __t1335t__=0;
  char* __t1336t__=0;
  double __t1337t__x=0;
  double __t1337t__y=0;
  double __t1338t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1325t=0.0;
  __t1326t=__t1325t;
  x=__t1326t;
  __t1327t=0.0;
  __t1328t=__t1327t;
  y=__t1328t;
  len__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1329t__);
  range__t461t(__t1329t__,&__t1330t__from,&__t1330t__to);
  it__from=__t1330t__from;
  it__to=__t1330t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1332t__);
  __t1331t=__t_complain;
  i=__t1332t__;
  __t1331t=__t1331t==0;
  if(!__t1331t){
  break;
  }
  __t_errcode=get__t591t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1333t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1334t__x,__t1333t__,8);
  memcpy(&__t1334t__y,__t1333t__+8,8);
  add__t149t(x,__t1334t__x,&__t1335t__);
  x=__t1335t__;
  __t_errcode=get__t591t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1336t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1336t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1337t__x,__t1336t__,8);
  memcpy(&__t1337t__y,__t1336t__+8,8);
  add__t149t(y,__t1337t__y,&__t1338t__);
  y=__t1338t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1416t=x;
  *__t1417t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1344t() {
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__unsafe_size=0;
  uint16_t __t1347t__unsafe_offset=0;
  uint16_t __t1347t__unsafe_align=0;
  char* __t1348t__unsafe_ptr=0;
  uint64_t __t1348t__unsafe_size=0;
  uint16_t __t1348t__unsafe_offset=0;
  uint16_t __t1348t__unsafe_align=0;
  uint64_t __t1349t=0;
  char* __t1350t__unsafe_ptr=0;
  uint64_t __t1350t__unsafe_size=0;
  uint16_t __t1350t__unsafe_offset=0;
  uint16_t __t1350t__unsafe_align=0;
  char __t1351t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1352t=0;
  char* __t1353t__=0;
  double __t1354t=0;
  double __t1355t=0;
  double __t1356t=0;
  double __t1357t__plane__x=0;
  double __t1357t__plane__y=0;
  double __t1357t__z=0;
  uint64_t __t1358t=0;
  char* __t1359t__=0;
  double __t1360t=0;
  double __t1361t=0;
  double __t1362t=0;
  double __t1363t__plane__x=0;
  double __t1363t__plane__y=0;
  double __t1363t__z=0;
  char* __t1364t__unsafe_ptr=0;
  uint64_t __t1364t__unsafe_size=0;
  uint16_t __t1364t__unsafe_offset=0;
  uint16_t __t1364t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1368t__x=0;
  double __t1368t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1345t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align);
  __t1348t__unsafe_ptr=__t1347t__unsafe_ptr;
  __t1348t__unsafe_size=__t1347t__unsafe_size;
  __t1348t__unsafe_offset=__t1347t__unsafe_offset;
  __t1348t__unsafe_align=__t1347t__unsafe_align;
  __t1349t=10;
  __t_errcode=alloc__t509t(&__t1348t__unsafe_ptr,&__t1348t__unsafe_size,&__t1348t__unsafe_offset,&__t1348t__unsafe_align,__t1349t,&__t1350t__unsafe_ptr,&__t1350t__unsafe_size,&__t1350t__unsafe_offset,&__t1350t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1350t__unsafe_ptr;
  points__unsafe_size=__t1350t__unsafe_size;
  points__unsafe_offset=__t1350t__unsafe_offset;
  points__unsafe_align=__t1350t__unsafe_align;
  __t1352t=0;
  __t_errcode=mutget__t584t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1352t,&__t1353t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1354t=1.0;
  __t1355t=2.0;
  __t1356t=3.0;
  Point3D__t1339t(__t1354t,__t1355t,__t1356t,&__t1357t__plane__x,&__t1357t__plane__y,&__t1357t__z);
  if(!__t1353t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1353t__,&__t1357t__plane__x,8);
  memcpy(__t1353t__+8,&__t1357t__plane__y,8);
  memcpy(__t1353t__+16,&__t1357t__z,8);
  __t1358t=1;
  __t_errcode=mutget__t584t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1358t,&__t1359t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1360t=1.0;
  __t1361t=2.0;
  __t1362t=3.0;
  Point3D__t1339t(__t1360t,__t1361t,__t1362t,&__t1363t__plane__x,&__t1363t__plane__y,&__t1363t__z);
  if(!__t1359t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1359t__,&__t1363t__plane__x,8);
  memcpy(__t1359t__+8,&__t1363t__plane__y,8);
  memcpy(__t1359t__+16,&__t1363t__z,8);
  __t1364t__unsafe_ptr=points__unsafe_ptr;
  __t1364t__unsafe_size=points__unsafe_size;
  __t1364t__unsafe_offset=points__unsafe_offset+0;
  __t1364t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1364t__unsafe_ptr;
  plane__unsafe_size=__t1364t__unsafe_size;
  plane__unsafe_offset=__t1364t__unsafe_offset;
  plane__unsafe_align=__t1364t__unsafe_align;
  __t_errcode=sum__t1324t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1368t__x,&__t1368t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1368t__x;
  sums__y=__t1368t__y;
  print__t374t(sums__x);
  print__t374t(sums__y);
  
  __t_failure:exists__t436t(__t1350t__unsafe_ptr,&__t1351t____t511t__);
  if(__t1351t____t511t__){
  free__t502t(&__t1350t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1344t();return 0;}