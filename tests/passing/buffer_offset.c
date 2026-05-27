#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t1345t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1349t(char** __t1375t, uint64_t* __t1376t, uint16_t* __t1377t, uint16_t* __t1378t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1375t=unsafe_ptr;
  *__t1376t=unsafe_size;
  *__t1377t=unsafe_offset;
  *__t1378t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1379t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1379t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1380t) {
  char* allocated=*__t1380t;
  if(allocated){
  free(allocated);
  }
  *__t1380t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1381t) {
  int value=0;
  *__t1381t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1382t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1382t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1383t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1383t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1384t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1384t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1385t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1385t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1386t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1386t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1387t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1387t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1388t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1388t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1389t) {
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
  *__t1389t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1390t, uint64_t* __t1391t, uint16_t* __t1392t, uint16_t* __t1393t, uint64_t size, char** __t1394t, uint64_t* __t1395t, uint16_t* __t1396t, uint16_t* __t1397t) {
  char* buffer__unsafe_ptr=*__t1390t;
  uint64_t buffer__unsafe_size=*__t1391t;
  uint16_t buffer__unsafe_offset=*__t1392t;
  uint16_t buffer__unsafe_align=*__t1393t;
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
  *__t1390t=buffer__unsafe_ptr;
  *__t1391t=buffer__unsafe_size;
  *__t1392t=buffer__unsafe_offset;
  *__t1393t=buffer__unsafe_align;
  *__t1394t=__t520t__unsafe_ptr;
  *__t1395t=__t520t__unsafe_size;
  *__t1396t=__t520t__unsafe_offset;
  *__t1397t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1398t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1398t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1399t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1399t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1400t) {
  *__t1400t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1401t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1401t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1402t, uint64_t* __t1403t, uint16_t* __t1404t, uint16_t* __t1405t, uint64_t i, char** __t1406t) {
  char* buffer__unsafe_ptr=*__t1402t;
  uint64_t buffer__unsafe_size=*__t1403t;
  uint16_t buffer__unsafe_offset=*__t1404t;
  uint16_t buffer__unsafe_align=*__t1405t;
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
  *__t1402t=buffer__unsafe_ptr;
  *__t1403t=buffer__unsafe_size;
  *__t1404t=buffer__unsafe_offset;
  *__t1405t=buffer__unsafe_align;
  *__t1406t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1325t(double x, double y, double* __t1407t, double* __t1408t) {
  goto __t_return;
  __t_return:
  *__t1407t=x;
  *__t1408t=y;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1343t(double x, double y, double z, double* __t1409t, double* __t1410t, double* __t1411t) {
  double __t1344t__x=0;
  double __t1344t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1325t(x,y,&__t1344t__x,&__t1344t__y);
  plane__x=__t1344t__x;
  plane__y=__t1344t__y;
  print__t369t(__t1345t);
  goto __t_return;
  __t_return:
  *__t1409t=plane__x;
  *__t1410t=plane__y;
  *__t1411t=z;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1412t) {
  goto __t_return;
  __t_return:
  *__t1412t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1413t, uint64_t* __t1414t) {
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
  *__t1413t=from;
  *__t1414t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1415t, uint64_t r__to, uint64_t* __t1416t) {
  uint64_t r__from=*__t1415t;
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
  *__t1415t=r__from;
  *__t1416t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1417t) {
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
  *__t1417t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1418t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1418t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1419t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1419t=z;
}

static inline __attribute__((always_inline)) int sum__t1328t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1420t, double* __t1421t) {
  double __t1329t=0;
  double __t1330t=0;
  double x=0;
  double __t1331t=0;
  double __t1332t=0;
  double y=0;
  uint64_t __t1333t__=0;
  uint64_t __t1334t__from=0;
  uint64_t __t1334t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1335t=0;
  uint64_t __t1336t__=0;
  uint64_t i=0;
  char* __t1337t__=0;
  double __t1338t__x=0;
  double __t1338t__y=0;
  double __t1339t__=0;
  char* __t1340t__=0;
  double __t1341t__x=0;
  double __t1341t__y=0;
  double __t1342t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1329t=0.0;
  __t1330t=__t1329t;
  x=__t1330t;
  __t1331t=0.0;
  __t1332t=__t1331t;
  y=__t1332t;
  len__t602t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1333t__);
  range__t461t(__t1333t__,&__t1334t__from,&__t1334t__to);
  it__from=__t1334t__from;
  it__to=__t1334t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1336t__);
  __t1335t=__t_complain;
  i=__t1336t__;
  __t1335t=__t1335t==0;
  if(!__t1335t){
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
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1420t=x;
  *__t1421t=y;
  
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
  char* __t1352t__unsafe_ptr=0;
  uint64_t __t1352t__unsafe_size=0;
  uint16_t __t1352t__unsafe_offset=0;
  uint16_t __t1352t__unsafe_align=0;
  uint64_t __t1353t=0;
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__unsafe_size=0;
  uint16_t __t1354t__unsafe_offset=0;
  uint16_t __t1354t__unsafe_align=0;
  char __t1355t____t511t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1356t=0;
  char* __t1357t__=0;
  double __t1358t=0;
  double __t1359t=0;
  double __t1360t=0;
  double __t1361t__plane__x=0;
  double __t1361t__plane__y=0;
  double __t1361t__z=0;
  uint64_t __t1362t=0;
  char* __t1363t__=0;
  double __t1364t=0;
  double __t1365t=0;
  double __t1366t=0;
  double __t1367t__plane__x=0;
  double __t1367t__plane__y=0;
  double __t1367t__z=0;
  char* __t1368t__unsafe_ptr=0;
  uint64_t __t1368t__unsafe_size=0;
  uint16_t __t1368t__unsafe_offset=0;
  uint16_t __t1368t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1372t__x=0;
  double __t1372t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1349t(&__t1351t__unsafe_ptr,&__t1351t__unsafe_size,&__t1351t__unsafe_offset,&__t1351t__unsafe_align);
  __t1352t__unsafe_ptr=__t1351t__unsafe_ptr;
  __t1352t__unsafe_size=__t1351t__unsafe_size;
  __t1352t__unsafe_offset=__t1351t__unsafe_offset;
  __t1352t__unsafe_align=__t1351t__unsafe_align;
  __t1353t=10;
  __t_errcode=alloc__t509t(&__t1352t__unsafe_ptr,&__t1352t__unsafe_size,&__t1352t__unsafe_offset,&__t1352t__unsafe_align,__t1353t,&__t1354t__unsafe_ptr,&__t1354t__unsafe_size,&__t1354t__unsafe_offset,&__t1354t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1354t__unsafe_ptr;
  points__unsafe_size=__t1354t__unsafe_size;
  points__unsafe_offset=__t1354t__unsafe_offset;
  points__unsafe_align=__t1354t__unsafe_align;
  __t1356t=0;
  __t_errcode=mutget__t588t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1356t,&__t1357t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1358t=1.0;
  __t1359t=2.0;
  __t1360t=3.0;
  Point3D__t1343t(__t1358t,__t1359t,__t1360t,&__t1361t__plane__x,&__t1361t__plane__y,&__t1361t__z);
  if(!__t1357t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1357t__,&__t1361t__plane__x,8);
  memcpy(__t1357t__+8,&__t1361t__plane__y,8);
  memcpy(__t1357t__+16,&__t1361t__z,8);
  __t1362t=1;
  __t_errcode=mutget__t588t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1362t,&__t1363t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1364t=1.0;
  __t1365t=2.0;
  __t1366t=3.0;
  Point3D__t1343t(__t1364t,__t1365t,__t1366t,&__t1367t__plane__x,&__t1367t__plane__y,&__t1367t__z);
  if(!__t1363t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1363t__,&__t1367t__plane__x,8);
  memcpy(__t1363t__+8,&__t1367t__plane__y,8);
  memcpy(__t1363t__+16,&__t1367t__z,8);
  __t1368t__unsafe_ptr=points__unsafe_ptr;
  __t1368t__unsafe_size=points__unsafe_size;
  __t1368t__unsafe_offset=points__unsafe_offset+0;
  __t1368t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1368t__unsafe_ptr;
  plane__unsafe_size=__t1368t__unsafe_size;
  plane__unsafe_offset=__t1368t__unsafe_offset;
  plane__unsafe_align=__t1368t__unsafe_align;
  __t_errcode=sum__t1328t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1372t__x,&__t1372t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1372t__x;
  sums__y=__t1372t__y;
  print__t374t(sums__x);
  print__t374t(sums__y);
  
  __t_failure:exists__t436t(__t1354t__unsafe_ptr,&__t1355t____t511t__);
  if(__t1355t____t511t__){
  __t1354t__unsafe_ptr=__t1354t__unsafe_ptr;
  free__t502t(&__t1354t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1348t();return 0;}