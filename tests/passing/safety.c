#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t363t="";
const char* const __t1339t="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1322t(char** __t1358t, uint64_t* __t1359t, uint16_t* __t1360t, uint16_t* __t1361t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1358t=unsafe_ptr;
  *__t1359t=unsafe_size;
  *__t1360t=unsafe_offset;
  *__t1361t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1362t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1362t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1363t) {
  char* allocated=*__t1363t;
  if(allocated){
  free(allocated);
  }
  *__t1363t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1364t) {
  int value=0;
  *__t1364t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1365t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1365t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1366t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1366t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1367t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1367t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1368t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1369t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1369t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1370t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1370t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1371t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1371t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1372t) {
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
  *__t1372t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1373t, uint64_t* __t1374t, uint16_t* __t1375t, uint16_t* __t1376t, uint64_t size, char** __t1377t, uint64_t* __t1378t, uint16_t* __t1379t, uint16_t* __t1380t) {
  char* buffer__unsafe_ptr=*__t1373t;
  uint64_t buffer__unsafe_size=*__t1374t;
  uint16_t buffer__unsafe_offset=*__t1375t;
  uint16_t buffer__unsafe_align=*__t1376t;
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
  *__t1373t=buffer__unsafe_ptr;
  *__t1374t=buffer__unsafe_size;
  *__t1375t=buffer__unsafe_offset;
  *__t1376t=buffer__unsafe_align;
  *__t1377t=buffer__unsafe_ptr;
  *__t1378t=buffer__unsafe_size;
  *__t1379t=buffer__unsafe_offset;
  *__t1380t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1381t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1381t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1382t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1382t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1383t) {
  *__t1383t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1384t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1384t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1385t, uint64_t* __t1386t, uint16_t* __t1387t, uint16_t* __t1388t, uint64_t i, char** __t1389t) {
  char* buffer__unsafe_ptr=*__t1385t;
  uint64_t buffer__unsafe_size=*__t1386t;
  uint16_t buffer__unsafe_offset=*__t1387t;
  uint16_t buffer__unsafe_align=*__t1388t;
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
  *__t1385t=buffer__unsafe_ptr;
  *__t1386t=buffer__unsafe_size;
  *__t1387t=buffer__unsafe_offset;
  *__t1388t=buffer__unsafe_align;
  *__t1389t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1390t) {
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
  *__t1390t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1391t) {
  goto __t_return;
  __t_return:
  *__t1391t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1321t(char** __t1392t, uint64_t* __t1393t, uint16_t* __t1394t, uint16_t* __t1395t) {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  char* __t1325t__unsafe_ptr=0;
  uint64_t __t1325t__unsafe_size=0;
  uint16_t __t1325t__unsafe_offset=0;
  uint16_t __t1325t__unsafe_align=0;
  uint64_t __t1326t=0;
  char* __t1327t__unsafe_ptr=0;
  uint64_t __t1327t__unsafe_size=0;
  uint16_t __t1327t__unsafe_offset=0;
  uint16_t __t1327t__unsafe_align=0;
  char __t1328t____t511t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1329t=0;
  char* __t1330t__=0;
  double __t1331t=0;
  uint64_t __t1332t=0;
  char* __t1333t__=0;
  double __t1334t=0;
  uint64_t __t1335t=0;
  char* __t1336t__=0;
  double __t1337t__value=0;
  uint64_t __t1341t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t__unsafe_ptr=__t1324t__unsafe_ptr;
  __t1325t__unsafe_size=__t1324t__unsafe_size;
  __t1325t__unsafe_offset=__t1324t__unsafe_offset;
  __t1325t__unsafe_align=__t1324t__unsafe_align;
  __t1326t=2;
  __t_errcode=alloc__t509t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,__t1326t,&__t1327t__unsafe_ptr,&__t1327t__unsafe_size,&__t1327t__unsafe_offset,&__t1327t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1327t__unsafe_ptr;
  x__unsafe_size=__t1327t__unsafe_size;
  x__unsafe_offset=__t1327t__unsafe_offset;
  x__unsafe_align=__t1327t__unsafe_align;
  __t1329t=0;
  __t_errcode=mutget__t584t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1329t,&__t1330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1331t=1.0;
  if(!__t1330t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1330t__,&__t1331t,8);
  __t1332t=1;
  __t_errcode=mutget__t584t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1332t,&__t1333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1334t=2.0;
  if(!__t1333t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1333t__,&__t1334t,8);
  __t1335t=1;
  __t_errcode=get__t591t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1335t,&__t1336t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1336t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1337t__value,__t1336t__,8);
  print__t374t(__t1337t__value);
  goto __t_return;
  
  __t_failure:print__t367t(__t1339t,__t363t);
  len__t598t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t382t(x__unsafe_size);
  exists__t436t(x__unsafe_ptr,&__t1328t____t511t__);
  if(__t1328t____t511t__){
  free__t502t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1392t=x__unsafe_ptr;
  *__t1393t=x__unsafe_size;
  *__t1394t=x__unsafe_offset;
  *__t1395t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1343t(char** __t1396t, uint64_t* __t1397t, uint16_t* __t1398t, uint16_t* __t1399t, char** __t1400t, uint64_t* __t1401t, uint16_t* __t1402t, uint16_t* __t1403t, char** __t1404t, uint64_t* __t1405t, uint16_t* __t1406t, uint16_t* __t1407t) {
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__unsafe_size=0;
  uint16_t __t1344t__unsafe_offset=0;
  uint16_t __t1344t__unsafe_align=0;
  char __t1345t____t1328t____t511t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint16_t __t1346t__unsafe_offset=0;
  uint16_t __t1346t__unsafe_align=0;
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
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1321t(&__t1344t__unsafe_ptr,&__t1344t__unsafe_size,&__t1344t__unsafe_offset,&__t1344t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1344t__unsafe_ptr;
  t__unsafe_size=__t1344t__unsafe_size;
  t__unsafe_offset=__t1344t__unsafe_offset;
  t__unsafe_align=__t1344t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1322t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  __t1347t__unsafe_ptr=__t1346t__unsafe_ptr;
  __t1347t__unsafe_size=__t1346t__unsafe_size;
  __t1347t__unsafe_offset=__t1346t__unsafe_offset;
  __t1347t__unsafe_align=__t1346t__unsafe_align;
  __t1348t=3;
  __t_errcode=alloc__t509t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align,__t1348t,&__t1349t__unsafe_ptr,&__t1349t__unsafe_size,&__t1349t__unsafe_offset,&__t1349t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1349t__unsafe_ptr;
  k__unsafe_size=__t1349t__unsafe_size;
  k__unsafe_offset=__t1349t__unsafe_offset;
  k__unsafe_align=__t1349t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(k__unsafe_ptr,&__t1350t____t511t__);
  if(__t1350t____t511t__){
  free__t502t(&k__unsafe_ptr);
  }
  print__t367t(__t1339t,__t363t);
  len__t598t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t382t(t__unsafe_size);
  exists__t436t(t__unsafe_ptr,&__t1345t____t1328t____t511t__);
  if(__t1345t____t1328t____t511t__){
  free__t502t(&t__unsafe_ptr);
  }
  __t_return:
  *__t1396t=t__unsafe_ptr;
  *__t1397t=t__unsafe_size;
  *__t1398t=t__unsafe_offset;
  *__t1399t=t__unsafe_align;
  *__t1400t=j__unsafe_ptr;
  *__t1401t=j__unsafe_size;
  *__t1402t=j__unsafe_offset;
  *__t1403t=j__unsafe_align;
  *__t1404t=k__unsafe_ptr;
  *__t1405t=k__unsafe_size;
  *__t1406t=k__unsafe_offset;
  *__t1407t=k__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1351t() {
  char* __t1352t__t__unsafe_ptr=0;
  uint64_t __t1352t__t__unsafe_size=0;
  uint16_t __t1352t__t__unsafe_offset=0;
  uint16_t __t1352t__t__unsafe_align=0;
  char* __t1352t__j__unsafe_ptr=0;
  uint64_t __t1352t__j__unsafe_size=0;
  uint16_t __t1352t__j__unsafe_offset=0;
  uint16_t __t1352t__j__unsafe_align=0;
  char* __t1352t__k__unsafe_ptr=0;
  uint64_t __t1352t__k__unsafe_size=0;
  uint16_t __t1352t__k__unsafe_offset=0;
  uint16_t __t1352t__k__unsafe_align=0;
  char __t1353t____t1345t____t1328t____t511t__=0;
  char __t1353t____t1350t____t511t__=0;
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
  uint64_t __t1354t=0;
  char* __t1355t__=0;
  double __t1356t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1343t(&__t1352t__t__unsafe_ptr,&__t1352t__t__unsafe_size,&__t1352t__t__unsafe_offset,&__t1352t__t__unsafe_align,&__t1352t__j__unsafe_ptr,&__t1352t__j__unsafe_size,&__t1352t__j__unsafe_offset,&__t1352t__j__unsafe_align,&__t1352t__k__unsafe_ptr,&__t1352t__k__unsafe_size,&__t1352t__k__unsafe_offset,&__t1352t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1352t__t__unsafe_ptr;
  t__t__unsafe_size=__t1352t__t__unsafe_size;
  t__t__unsafe_offset=__t1352t__t__unsafe_offset;
  t__t__unsafe_align=__t1352t__t__unsafe_align;
  t__j__unsafe_ptr=__t1352t__j__unsafe_ptr;
  t__j__unsafe_size=__t1352t__j__unsafe_size;
  t__j__unsafe_offset=__t1352t__j__unsafe_offset;
  t__j__unsafe_align=__t1352t__j__unsafe_align;
  t__k__unsafe_ptr=__t1352t__k__unsafe_ptr;
  t__k__unsafe_size=__t1352t__k__unsafe_size;
  t__k__unsafe_offset=__t1352t__k__unsafe_offset;
  t__k__unsafe_align=__t1352t__k__unsafe_align;
  __t1354t=1;
  __t_errcode=get__t591t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1354t,&__t1355t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1355t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1356t__value,__t1355t__,8);
  print__t374t(__t1356t__value);
  
  __t_failure:exists__t436t(__t1352t__k__unsafe_ptr,&__t1353t____t1350t____t511t__);
  if(__t1353t____t1350t____t511t__){
  free__t502t(&__t1352t__k__unsafe_ptr);
  }
  print__t367t(__t1339t,__t363t);
  len__t598t(__t1352t__t__unsafe_ptr,__t1352t__t__unsafe_size,__t1352t__t__unsafe_offset,__t1352t__t__unsafe_align,&__t1352t__t__unsafe_size);
  print__t382t(__t1352t__t__unsafe_size);
  exists__t436t(__t1352t__t__unsafe_ptr,&__t1353t____t1345t____t1328t____t511t__);
  if(__t1353t____t1345t____t1328t____t511t__){
  free__t502t(&__t1352t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1351t();return 0;}