#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t362t="";
const char* const __t370t="\n";
const char* const __t1327t="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1310t(char** __t1346t, uint64_t* __t1347t, uint16_t* __t1348t, uint16_t* __t1349t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1346t=unsafe_ptr;
  *__t1347t=unsafe_size;
  *__t1348t=unsafe_offset;
  *__t1349t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1350t) {
  int value=0;
  *__t1350t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1351t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1351t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1352t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1352t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1353t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1353t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1354t) {
  char* allocated=*__t1354t;
  if(allocated){
  free(allocated);
  }
  *__t1354t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1355t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1355t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1356t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1356t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1357t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1357t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1358t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1358t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1359t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1360t) {
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
  *__t1360t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1361t, uint64_t* __t1362t, uint16_t* __t1363t, uint16_t* __t1364t, uint64_t size, char** __t1365t, uint64_t* __t1366t, uint16_t* __t1367t, uint16_t* __t1368t) {
  char* buffer__unsafe_ptr=*__t1361t;
  uint64_t buffer__unsafe_size=*__t1362t;
  uint16_t buffer__unsafe_offset=*__t1363t;
  uint16_t buffer__unsafe_align=*__t1364t;
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
  *__t1361t=buffer__unsafe_ptr;
  *__t1362t=buffer__unsafe_size;
  *__t1363t=buffer__unsafe_offset;
  *__t1364t=buffer__unsafe_align;
  *__t1365t=__t521t__unsafe_ptr;
  *__t1366t=__t521t__unsafe_size;
  *__t1367t=__t521t__unsafe_offset;
  *__t1368t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1369t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1369t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1370t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1370t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1371t) {
  *__t1371t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1372t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1372t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1373t, uint64_t* __t1374t, uint16_t* __t1375t, uint16_t* __t1376t, uint64_t i, char** __t1377t) {
  char* buffer__unsafe_ptr=*__t1373t;
  uint64_t buffer__unsafe_size=*__t1374t;
  uint16_t buffer__unsafe_offset=*__t1375t;
  uint16_t buffer__unsafe_align=*__t1376t;
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
  *__t1373t=buffer__unsafe_ptr;
  *__t1374t=buffer__unsafe_size;
  *__t1375t=buffer__unsafe_offset;
  *__t1376t=buffer__unsafe_align;
  *__t1377t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1378t) {
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
  *__t1378t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1379t) {
  goto __t_return;
  __t_return:
  *__t1379t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1309t(char** __t1380t, uint64_t* __t1381t, uint16_t* __t1382t, uint16_t* __t1383t) {
  char* __t1312t__unsafe_ptr=0;
  uint64_t __t1312t__unsafe_size=0;
  uint16_t __t1312t__unsafe_offset=0;
  uint16_t __t1312t__unsafe_align=0;
  char* __t1313t__unsafe_ptr=0;
  uint64_t __t1313t__unsafe_size=0;
  uint16_t __t1313t__unsafe_offset=0;
  uint16_t __t1313t__unsafe_align=0;
  uint64_t __t1314t=0;
  char* __t1315t__unsafe_ptr=0;
  uint64_t __t1315t__unsafe_size=0;
  uint16_t __t1315t__unsafe_offset=0;
  uint16_t __t1315t__unsafe_align=0;
  uint64_t __t1316t____t510t=0;
  char __t1316t____t511t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1317t=0;
  char* __t1318t__=0;
  double __t1319t=0;
  uint64_t __t1320t=0;
  char* __t1321t__=0;
  double __t1322t=0;
  uint64_t __t1323t=0;
  char* __t1324t__=0;
  double __t1325t__number=0;
  uint64_t __t1329t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1310t(&__t1312t__unsafe_ptr,&__t1312t__unsafe_size,&__t1312t__unsafe_offset,&__t1312t__unsafe_align);
  __t1313t__unsafe_ptr=__t1312t__unsafe_ptr;
  __t1313t__unsafe_size=__t1312t__unsafe_size;
  __t1313t__unsafe_offset=__t1312t__unsafe_offset;
  __t1313t__unsafe_align=__t1312t__unsafe_align;
  __t1314t=2;
  __t_errcode=alloc__t508t(&__t1313t__unsafe_ptr,&__t1313t__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,__t1314t,&__t1315t__unsafe_ptr,&__t1315t__unsafe_size,&__t1315t__unsafe_offset,&__t1315t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1315t__unsafe_ptr;
  x__unsafe_size=__t1315t__unsafe_size;
  x__unsafe_offset=__t1315t__unsafe_offset;
  x__unsafe_align=__t1315t__unsafe_align;
  __t1317t=0;
  __t_errcode=mutget__t590t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1317t,&__t1318t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1319t=1.0;
  if(!__t1318t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1318t__,&__t1319t,8);
  __t1320t=1;
  __t_errcode=mutget__t590t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1320t,&__t1321t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1322t=2.0;
  if(!__t1321t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1321t__,&__t1322t,8);
  __t1323t=1;
  __t_errcode=get__t597t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1323t,&__t1324t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1324t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1325t__number,__t1324t__,8);
  print__t373t(__t1325t__number);
  goto __t_return;
  
  __t_failure:print__t366t(__t1327t,__t362t);
  len__t604t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t381t(x__unsafe_size);
  __t1316t____t510t=0;
  neq__t142t(x__unsafe_size,__t1316t____t510t,&__t1316t____t511t__);
  if(__t1316t____t511t__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  x__unsafe_ptr=x__unsafe_ptr;
  free__t501t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1380t=x__unsafe_ptr;
  *__t1381t=x__unsafe_size;
  *__t1382t=x__unsafe_offset;
  *__t1383t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1331t(char** __t1384t, uint64_t* __t1385t, uint16_t* __t1386t, uint16_t* __t1387t, char** __t1388t, uint64_t* __t1389t, uint16_t* __t1390t, uint16_t* __t1391t, char** __t1392t, uint64_t* __t1393t, uint16_t* __t1394t, uint16_t* __t1395t) {
  char* __t1332t__unsafe_ptr=0;
  uint64_t __t1332t__unsafe_size=0;
  uint16_t __t1332t__unsafe_offset=0;
  uint16_t __t1332t__unsafe_align=0;
  uint64_t __t1333t____t1316t____t510t=0;
  char __t1333t____t1316t____t511t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1334t__unsafe_ptr=0;
  uint64_t __t1334t__unsafe_size=0;
  uint16_t __t1334t__unsafe_offset=0;
  uint16_t __t1334t__unsafe_align=0;
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
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1309t(&__t1332t__unsafe_ptr,&__t1332t__unsafe_size,&__t1332t__unsafe_offset,&__t1332t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1332t__unsafe_ptr;
  t__unsafe_size=__t1332t__unsafe_size;
  t__unsafe_offset=__t1332t__unsafe_offset;
  t__unsafe_align=__t1332t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1310t(&__t1334t__unsafe_ptr,&__t1334t__unsafe_size,&__t1334t__unsafe_offset,&__t1334t__unsafe_align);
  __t1335t__unsafe_ptr=__t1334t__unsafe_ptr;
  __t1335t__unsafe_size=__t1334t__unsafe_size;
  __t1335t__unsafe_offset=__t1334t__unsafe_offset;
  __t1335t__unsafe_align=__t1334t__unsafe_align;
  __t1336t=3;
  __t_errcode=alloc__t508t(&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align,__t1336t,&__t1337t__unsafe_ptr,&__t1337t__unsafe_size,&__t1337t__unsafe_offset,&__t1337t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1337t__unsafe_ptr;
  k__unsafe_size=__t1337t__unsafe_size;
  k__unsafe_offset=__t1337t__unsafe_offset;
  k__unsafe_align=__t1337t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1338t____t510t=0;
  neq__t142t(k__unsafe_size,__t1338t____t510t,&__t1338t____t511t__);
  if(__t1338t____t511t__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  k__unsafe_ptr=k__unsafe_ptr;
  free__t501t(&k__unsafe_ptr);
  }
  print__t366t(__t1327t,__t362t);
  len__t604t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t381t(t__unsafe_size);
  __t1333t____t1316t____t510t=0;
  neq__t142t(t__unsafe_size,__t1333t____t1316t____t510t,&__t1333t____t1316t____t511t__);
  if(__t1333t____t1316t____t511t__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  t__unsafe_ptr=t__unsafe_ptr;
  free__t501t(&t__unsafe_ptr);
  }
  __t_return:
  *__t1384t=t__unsafe_ptr;
  *__t1385t=t__unsafe_size;
  *__t1386t=t__unsafe_offset;
  *__t1387t=t__unsafe_align;
  *__t1388t=j__unsafe_ptr;
  *__t1389t=j__unsafe_size;
  *__t1390t=j__unsafe_offset;
  *__t1391t=j__unsafe_align;
  *__t1392t=k__unsafe_ptr;
  *__t1393t=k__unsafe_size;
  *__t1394t=k__unsafe_offset;
  *__t1395t=k__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1339t() {
  char* __t1340t__t__unsafe_ptr=0;
  uint64_t __t1340t__t__unsafe_size=0;
  uint16_t __t1340t__t__unsafe_offset=0;
  uint16_t __t1340t__t__unsafe_align=0;
  char* __t1340t__j__unsafe_ptr=0;
  uint64_t __t1340t__j__unsafe_size=0;
  uint16_t __t1340t__j__unsafe_offset=0;
  uint16_t __t1340t__j__unsafe_align=0;
  char* __t1340t__k__unsafe_ptr=0;
  uint64_t __t1340t__k__unsafe_size=0;
  uint16_t __t1340t__k__unsafe_offset=0;
  uint16_t __t1340t__k__unsafe_align=0;
  uint64_t __t1341t____t1333t____t1316t____t510t=0;
  char __t1341t____t1333t____t1316t____t511t__=0;
  uint64_t __t1341t____t1338t____t510t=0;
  char __t1341t____t1338t____t511t__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __t1342t=0;
  char* __t1343t__=0;
  double __t1344t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1331t(&__t1340t__t__unsafe_ptr,&__t1340t__t__unsafe_size,&__t1340t__t__unsafe_offset,&__t1340t__t__unsafe_align,&__t1340t__j__unsafe_ptr,&__t1340t__j__unsafe_size,&__t1340t__j__unsafe_offset,&__t1340t__j__unsafe_align,&__t1340t__k__unsafe_ptr,&__t1340t__k__unsafe_size,&__t1340t__k__unsafe_offset,&__t1340t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1340t__t__unsafe_ptr;
  t__t__unsafe_size=__t1340t__t__unsafe_size;
  t__t__unsafe_offset=__t1340t__t__unsafe_offset;
  t__t__unsafe_align=__t1340t__t__unsafe_align;
  t__j__unsafe_ptr=__t1340t__j__unsafe_ptr;
  t__j__unsafe_size=__t1340t__j__unsafe_size;
  t__j__unsafe_offset=__t1340t__j__unsafe_offset;
  t__j__unsafe_align=__t1340t__j__unsafe_align;
  t__k__unsafe_ptr=__t1340t__k__unsafe_ptr;
  t__k__unsafe_size=__t1340t__k__unsafe_size;
  t__k__unsafe_offset=__t1340t__k__unsafe_offset;
  t__k__unsafe_align=__t1340t__k__unsafe_align;
  __t1342t=1;
  __t_errcode=get__t597t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1342t,&__t1343t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1343t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1344t__number,__t1343t__,8);
  print__t373t(__t1344t__number);
  
  __t_failure:__t1341t____t1338t____t510t=0;
  neq__t142t(__t1340t__k__unsafe_size,__t1341t____t1338t____t510t,&__t1341t____t1338t____t511t__);
  if(__t1341t____t1338t____t511t__){
  __t1340t__k__unsafe_size=0;
  __t1340t__k__unsafe_size=__t1340t__k__unsafe_size;
  __t1340t__k__unsafe_ptr=__t1340t__k__unsafe_ptr;
  free__t501t(&__t1340t__k__unsafe_ptr);
  }
  print__t366t(__t1327t,__t362t);
  len__t604t(__t1340t__t__unsafe_ptr,__t1340t__t__unsafe_size,__t1340t__t__unsafe_offset,__t1340t__t__unsafe_align,&__t1340t__t__unsafe_size);
  print__t381t(__t1340t__t__unsafe_size);
  __t1341t____t1333t____t1316t____t510t=0;
  neq__t142t(__t1340t__t__unsafe_size,__t1341t____t1333t____t1316t____t510t,&__t1341t____t1333t____t1316t____t511t__);
  if(__t1341t____t1333t____t1316t____t511t__){
  __t1340t__t__unsafe_size=0;
  __t1340t__t__unsafe_size=__t1340t__t__unsafe_size;
  __t1340t__t__unsafe_ptr=__t1340t__t__unsafe_ptr;
  free__t501t(&__t1340t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1339t();return 0;}