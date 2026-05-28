#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1345t(char** __t1376t, uint64_t* __t1377t, uint16_t* __t1378t, uint16_t* __t1379t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1376t=unsafe_ptr;
  *__t1377t=unsafe_size;
  *__t1378t=unsafe_offset;
  *__t1379t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1380t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1381t) {
  char* allocated=*__t1381t;
  if(allocated){
  free(allocated);
  }
  *__t1381t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1382t) {
  int value=0;
  *__t1382t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1383t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1383t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1384t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1384t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1385t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1385t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1386t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1386t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1387t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1387t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1388t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1388t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1389t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1390t) {
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
  *__t1390t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1391t, uint64_t* __t1392t, uint16_t* __t1393t, uint16_t* __t1394t, uint64_t size, char** __t1395t, uint64_t* __t1396t, uint16_t* __t1397t, uint16_t* __t1398t) {
  char* buffer__unsafe_ptr=*__t1391t;
  uint64_t buffer__unsafe_size=*__t1392t;
  uint16_t buffer__unsafe_offset=*__t1393t;
  uint16_t buffer__unsafe_align=*__t1394t;
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
  *__t1391t=buffer__unsafe_ptr;
  *__t1392t=buffer__unsafe_size;
  *__t1393t=buffer__unsafe_offset;
  *__t1394t=buffer__unsafe_align;
  *__t1395t=buffer__unsafe_ptr;
  *__t1396t=buffer__unsafe_size;
  *__t1397t=buffer__unsafe_offset;
  *__t1398t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1399t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1399t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1400t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1400t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1401t) {
  *__t1401t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1402t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1402t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1403t, uint64_t* __t1404t, uint16_t* __t1405t, uint16_t* __t1406t, uint64_t i, char** __t1407t) {
  char* buffer__unsafe_ptr=*__t1403t;
  uint64_t buffer__unsafe_size=*__t1404t;
  uint16_t buffer__unsafe_offset=*__t1405t;
  uint16_t buffer__unsafe_align=*__t1406t;
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
  *__t1403t=buffer__unsafe_ptr;
  *__t1404t=buffer__unsafe_size;
  *__t1405t=buffer__unsafe_offset;
  *__t1406t=buffer__unsafe_align;
  *__t1407t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1321t(double x, double y, double* __t1408t, double* __t1409t) {
  goto __t_return;
  __t_return:
  *__t1408t=x;
  *__t1409t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1341t(double x, double y, double z, double* __t1410t, double* __t1411t, double* __t1412t) {
  double __t1342t__x=0;
  double __t1342t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1321t(x,y,&__t1342t__x,&__t1342t__y);
  plane__x=__t1342t__x;
  plane__y=__t1342t__y;
  goto __t_return;
  __t_return:
  *__t1410t=plane__x;
  *__t1411t=plane__y;
  *__t1412t=z;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1413t) {
  goto __t_return;
  __t_return:
  *__t1413t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1414t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1414t=z;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1415t) {
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
  *__t1415t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1416t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1416t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1417t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1417t=z;
}

static inline __attribute__((always_inline)) int sum__t1324t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1418t, double* __t1419t) {
  double __t1325t=0;
  double __t1326t=0;
  double x=0;
  double __t1327t=0;
  double __t1328t=0;
  double y=0;
  uint64_t __t1329t=0;
  uint64_t __t1330t=0;
  uint64_t i=0;
  uint64_t __t1331t__=0;
  char __t1332t__=0;
  char* __t1333t__=0;
  double __t1334t__x=0;
  double __t1334t__y=0;
  double __t1335t__=0;
  char* __t1336t__=0;
  double __t1337t__x=0;
  double __t1337t__y=0;
  double __t1338t__=0;
  uint64_t __t1339t=0;
  uint64_t __t1340t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1325t=0.0;
  __t1326t=__t1325t;
  x=__t1326t;
  __t1327t=0.0;
  __t1328t=__t1327t;
  y=__t1328t;
  __t1329t=0;
  __t1330t=__t1329t;
  i=__t1330t;
  while(1){
  len__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1331t__);
  lt__t248t(i,__t1331t__,&__t1332t__);
  if(!__t1332t__){
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
  __t1339t=1;
  add__t171t(i,__t1339t,&__t1340t__);
  i=__t1340t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1418t=x;
  *__t1419t=y;
  
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
  uint64_t __t1348t=0;
  char* __t1349t__unsafe_ptr=0;
  uint64_t __t1349t__unsafe_size=0;
  uint16_t __t1349t__unsafe_offset=0;
  uint16_t __t1349t__unsafe_align=0;
  char __t1350t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1351t=0;
  char* __t1352t__=0;
  double __t1353t=0;
  double __t1354t=0;
  double __t1355t=0;
  double __t1356t=0;
  double __t1357t=0;
  double __t1358t=0;
  double __t1359t__plane__x=0;
  double __t1359t__plane__y=0;
  double __t1359t__z=0;
  uint64_t __t1360t=0;
  char* __t1361t__=0;
  double __t1362t=0;
  double __t1363t=0;
  double __t1364t=0;
  double __t1365t=0;
  double __t1366t=0;
  double __t1367t=0;
  double __t1368t__plane__x=0;
  double __t1368t__plane__y=0;
  double __t1368t__z=0;
  char* __t1369t__unsafe_ptr=0;
  uint64_t __t1369t__unsafe_size=0;
  uint16_t __t1369t__unsafe_offset=0;
  uint16_t __t1369t__unsafe_align=0;
  double __t1373t__x=0;
  double __t1373t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1345t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align);
  __t1348t=10;
  __t_errcode=alloc__t509t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align,__t1348t,&__t1349t__unsafe_ptr,&__t1349t__unsafe_size,&__t1349t__unsafe_offset,&__t1349t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1349t__unsafe_ptr;
  points__unsafe_size=__t1349t__unsafe_size;
  points__unsafe_offset=__t1349t__unsafe_offset;
  points__unsafe_align=__t1349t__unsafe_align;
  __t1351t=0;
  __t_errcode=mutget__t584t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1351t,&__t1352t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1353t=1.0;
  __t1354t=__t1353t;
  __t1355t=2.0;
  __t1356t=__t1355t;
  __t1357t=3.0;
  __t1358t=__t1357t;
  Point3D__t1341t(__t1354t,__t1356t,__t1358t,&__t1359t__plane__x,&__t1359t__plane__y,&__t1359t__z);
  if(!__t1352t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1352t__,&__t1359t__plane__x,8);
  memcpy(__t1352t__+8,&__t1359t__plane__y,8);
  memcpy(__t1352t__+16,&__t1359t__z,8);
  __t1360t=1;
  __t_errcode=mutget__t584t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1360t,&__t1361t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1362t=1.0;
  __t1363t=__t1362t;
  __t1364t=2.0;
  __t1365t=__t1364t;
  __t1366t=3.0;
  __t1367t=__t1366t;
  Point3D__t1341t(__t1363t,__t1365t,__t1367t,&__t1368t__plane__x,&__t1368t__plane__y,&__t1368t__z);
  if(!__t1361t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1361t__,&__t1368t__plane__x,8);
  memcpy(__t1361t__+8,&__t1368t__plane__y,8);
  memcpy(__t1361t__+16,&__t1368t__z,8);
  __t1369t__unsafe_ptr=points__unsafe_ptr;
  __t1369t__unsafe_size=points__unsafe_size;
  __t1369t__unsafe_offset=points__unsafe_offset+0;
  __t1369t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1324t(__t1369t__unsafe_ptr,__t1369t__unsafe_size,__t1369t__unsafe_offset,__t1369t__unsafe_align,&__t1373t__x,&__t1373t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1373t__x;
  sums__y=__t1373t__y;
  print__t374t(sums__x);
  print__t374t(sums__y);
  
  __t_failure:exists__t436t(__t1349t__unsafe_ptr,&__t1350t____t511t__);
  if(__t1350t____t511t__){
  free__t502t(&__t1349t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1344t();return 0;}