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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1349t(char** __t1380t, uint64_t* __t1381t, uint16_t* __t1382t, uint16_t* __t1383t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1380t=unsafe_ptr;
  *__t1381t=unsafe_size;
  *__t1382t=unsafe_offset;
  *__t1383t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1384t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1384t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1385t) {
  char* allocated=*__t1385t;
  if(allocated){
  free(allocated);
  }
  *__t1385t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1386t) {
  int value=0;
  *__t1386t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1387t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1387t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1388t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1388t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1389t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1390t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1390t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1391t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1391t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1392t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1392t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1393t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1393t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1394t) {
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
  *__t1394t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1395t, uint64_t* __t1396t, uint16_t* __t1397t, uint16_t* __t1398t, uint64_t size, char** __t1399t, uint64_t* __t1400t, uint16_t* __t1401t, uint16_t* __t1402t) {
  char* buffer__unsafe_ptr=*__t1395t;
  uint64_t buffer__unsafe_size=*__t1396t;
  uint16_t buffer__unsafe_offset=*__t1397t;
  uint16_t buffer__unsafe_align=*__t1398t;
  int __t510t=0;
  char __t511t__=0;
  char* ptr=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  char* __t520t__unsafe_ptr=0;
  uint64_t __t520t__unsafe_size=0;
  uint16_t __t520t__unsafe_offset=0;
  uint16_t __t520t__unsafe_align=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t bytes=0;
  uint64_t __t525t=0;
  char __t526t__=0;
  char* __t527t__=0;
  uint64_t __t528t=0;
  char* __t530t__unsafe_ptr=0;
  uint64_t __t530t__unsafe_size=0;
  uint16_t __t530t__unsafe_offset=0;
  uint16_t __t530t__unsafe_align=0;
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
  __t520t__unsafe_ptr=buffer__unsafe_ptr;
  __t520t__unsafe_size=buffer__unsafe_size;
  __t520t__unsafe_offset=buffer__unsafe_offset;
  __t520t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t521t=0;
  neq__t143t(buffer__unsafe_size,__t521t,&__t522t__);
  if(__t522t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t523t__);
  mul__t195t(__t523t__,size,&__t524t__);
  bytes=__t524t__;
  __t525t=0;
  eq__t119t(bytes,__t525t,&__t526t__);
  if(__t526t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t527t__;
  __t528t=0;
  zero__t503t(buffer__unsafe_ptr,__t528t,bytes);
  __t530t__unsafe_ptr=buffer__unsafe_ptr;
  __t530t__unsafe_size=buffer__unsafe_size;
  __t530t__unsafe_offset=buffer__unsafe_offset;
  __t530t__unsafe_align=buffer__unsafe_align;
  __t520t__unsafe_ptr=__t530t__unsafe_ptr;
  __t520t__unsafe_size=__t530t__unsafe_size;
  __t520t__unsafe_offset=__t530t__unsafe_offset;
  __t520t__unsafe_align=__t530t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(__t520t__unsafe_ptr,&__t511t__);
  if(__t511t__){
  __t520t__unsafe_ptr=__t520t__unsafe_ptr;
  free__t502t(&__t520t__unsafe_ptr);
  }
  __t_return:
  *__t1395t=buffer__unsafe_ptr;
  *__t1396t=buffer__unsafe_size;
  *__t1397t=buffer__unsafe_offset;
  *__t1398t=buffer__unsafe_align;
  *__t1399t=__t520t__unsafe_ptr;
  *__t1400t=__t520t__unsafe_size;
  *__t1401t=__t520t__unsafe_offset;
  *__t1402t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1403t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1403t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1404t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1404t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1405t) {
  *__t1405t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1406t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1406t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1407t, uint64_t* __t1408t, uint16_t* __t1409t, uint16_t* __t1410t, uint64_t i, char** __t1411t) {
  char* buffer__unsafe_ptr=*__t1407t;
  uint64_t buffer__unsafe_size=*__t1408t;
  uint16_t buffer__unsafe_offset=*__t1409t;
  uint16_t buffer__unsafe_align=*__t1410t;
  char __t589t__=0;
  uint64_t __t590t__=0;
  uint64_t __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  char* __t594t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t589t__);
  if(__t589t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t590t__);
  mul__t195t(i,__t590t__,&__t591t__);
  nat__t506t(buffer__unsafe_offset,&__t592t__);
  add__t171t(__t591t__,__t592t__,&__t593t__);
  add__t504t(buffer__unsafe_ptr,__t593t__,&__t594t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1407t=buffer__unsafe_ptr;
  *__t1408t=buffer__unsafe_size;
  *__t1409t=buffer__unsafe_offset;
  *__t1410t=buffer__unsafe_align;
  *__t1411t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1325t(double x, double y, double* __t1412t, double* __t1413t) {
  goto __t_return;
  __t_return:
  *__t1412t=x;
  *__t1413t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1345t(double x, double y, double z, double* __t1414t, double* __t1415t, double* __t1416t) {
  double __t1346t__x=0;
  double __t1346t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1325t(x,y,&__t1346t__x,&__t1346t__y);
  plane__x=__t1346t__x;
  plane__y=__t1346t__y;
  goto __t_return;
  __t_return:
  *__t1414t=plane__x;
  *__t1415t=plane__y;
  *__t1416t=z;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1417t) {
  goto __t_return;
  __t_return:
  *__t1417t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1418t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1418t=z;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1419t) {
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  char* __t601t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t596t__);
  if(__t596t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t597t__);
  mul__t195t(i,__t597t__,&__t598t__);
  nat__t506t(buffer__unsafe_offset,&__t599t__);
  add__t171t(__t598t__,__t599t__,&__t600t__);
  add__t504t(buffer__unsafe_ptr,__t600t__,&__t601t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1419t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1420t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1420t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1421t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1421t=z;
}

static inline __attribute__((always_inline)) int sum__t1328t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1422t, double* __t1423t) {
  double __t1329t=0;
  double __t1330t=0;
  double x=0;
  double __t1331t=0;
  double __t1332t=0;
  double y=0;
  uint64_t __t1333t=0;
  uint64_t __t1334t=0;
  uint64_t i=0;
  uint64_t __t1335t__=0;
  char __t1336t__=0;
  char* __t1337t__=0;
  double __t1338t__x=0;
  double __t1338t__y=0;
  double __t1339t__=0;
  char* __t1340t__=0;
  double __t1341t__x=0;
  double __t1341t__y=0;
  double __t1342t__=0;
  uint64_t __t1343t=0;
  uint64_t __t1344t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1329t=0.0;
  __t1330t=__t1329t;
  x=__t1330t;
  __t1331t=0.0;
  __t1332t=__t1331t;
  y=__t1332t;
  __t1333t=0;
  __t1334t=__t1333t;
  i=__t1334t;
  while(1){
  len__t602t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1335t__);
  lt__t248t(i,__t1335t__,&__t1336t__);
  if(!__t1336t__){
  break;
  }
  __t_errcode=get__t595t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1337t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1338t__x,__t1337t__,8);
  memcpy(&__t1338t__y,__t1337t__+8,8);
  add__t149t(x,__t1338t__x,&__t1339t__);
  x=__t1339t__;
  __t_errcode=get__t595t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1340t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1341t__x,__t1340t__,8);
  memcpy(&__t1341t__y,__t1340t__+8,8);
  add__t149t(y,__t1341t__y,&__t1342t__);
  y=__t1342t__;
  __t1343t=1;
  add__t171t(i,__t1343t,&__t1344t__);
  i=__t1344t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1422t=x;
  *__t1423t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1348t() {
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__unsafe_size=0;
  uint16_t __t1351t__unsafe_offset=0;
  uint16_t __t1351t__unsafe_align=0;
  uint64_t __t1352t=0;
  char* __t1353t__unsafe_ptr=0;
  uint64_t __t1353t__unsafe_size=0;
  uint16_t __t1353t__unsafe_offset=0;
  uint16_t __t1353t__unsafe_align=0;
  char __t1354t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1355t=0;
  char* __t1356t__=0;
  double __t1357t=0;
  double __t1358t=0;
  double __t1359t=0;
  double __t1360t=0;
  double __t1361t=0;
  double __t1362t=0;
  double __t1363t__plane__x=0;
  double __t1363t__plane__y=0;
  double __t1363t__z=0;
  uint64_t __t1364t=0;
  char* __t1365t__=0;
  double __t1366t=0;
  double __t1367t=0;
  double __t1368t=0;
  double __t1369t=0;
  double __t1370t=0;
  double __t1371t=0;
  double __t1372t__plane__x=0;
  double __t1372t__plane__y=0;
  double __t1372t__z=0;
  char* __t1373t__unsafe_ptr=0;
  uint64_t __t1373t__unsafe_size=0;
  uint16_t __t1373t__unsafe_offset=0;
  uint16_t __t1373t__unsafe_align=0;
  double __t1377t__x=0;
  double __t1377t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1349t(&__t1351t__unsafe_ptr,&__t1351t__unsafe_size,&__t1351t__unsafe_offset,&__t1351t__unsafe_align);
  __t1352t=10;
  __t_errcode=alloc__t509t(&__t1351t__unsafe_ptr,&__t1351t__unsafe_size,&__t1351t__unsafe_offset,&__t1351t__unsafe_align,__t1352t,&__t1353t__unsafe_ptr,&__t1353t__unsafe_size,&__t1353t__unsafe_offset,&__t1353t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1353t__unsafe_ptr;
  points__unsafe_size=__t1353t__unsafe_size;
  points__unsafe_offset=__t1353t__unsafe_offset;
  points__unsafe_align=__t1353t__unsafe_align;
  __t1355t=0;
  __t_errcode=mutget__t588t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1355t,&__t1356t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1357t=1.0;
  __t1358t=__t1357t;
  __t1359t=2.0;
  __t1360t=__t1359t;
  __t1361t=3.0;
  __t1362t=__t1361t;
  Point3D__t1345t(__t1358t,__t1360t,__t1362t,&__t1363t__plane__x,&__t1363t__plane__y,&__t1363t__z);
  if(!__t1356t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1356t__,&__t1363t__plane__x,8);
  memcpy(__t1356t__+8,&__t1363t__plane__y,8);
  memcpy(__t1356t__+16,&__t1363t__z,8);
  __t1364t=1;
  __t_errcode=mutget__t588t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1364t,&__t1365t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1366t=1.0;
  __t1367t=__t1366t;
  __t1368t=2.0;
  __t1369t=__t1368t;
  __t1370t=3.0;
  __t1371t=__t1370t;
  Point3D__t1345t(__t1367t,__t1369t,__t1371t,&__t1372t__plane__x,&__t1372t__plane__y,&__t1372t__z);
  if(!__t1365t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1365t__,&__t1372t__plane__x,8);
  memcpy(__t1365t__+8,&__t1372t__plane__y,8);
  memcpy(__t1365t__+16,&__t1372t__z,8);
  __t1373t__unsafe_ptr=points__unsafe_ptr;
  __t1373t__unsafe_size=points__unsafe_size;
  __t1373t__unsafe_offset=points__unsafe_offset+0;
  __t1373t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1328t(__t1373t__unsafe_ptr,__t1373t__unsafe_size,__t1373t__unsafe_offset,__t1373t__unsafe_align,&__t1377t__x,&__t1377t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1377t__x;
  sums__y=__t1377t__y;
  print__t374t(sums__x);
  print__t374t(sums__y);
  
  __t_failure:exists__t436t(__t1353t__unsafe_ptr,&__t1354t____t511t__);
  if(__t1354t____t511t__){
  __t1353t__unsafe_ptr=__t1353t__unsafe_ptr;
  free__t502t(&__t1353t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1348t();return 0;}