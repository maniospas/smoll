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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1322t(char** __t1351t, uint64_t* __t1352t, uint16_t* __t1353t, uint16_t* __t1354t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1351t=unsafe_ptr;
  *__t1352t=unsafe_size;
  *__t1353t=unsafe_offset;
  *__t1354t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1355t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1355t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1356t) {
  char* allocated=*__t1356t;
  if(allocated){
  free(allocated);
  }
  *__t1356t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1357t) {
  int value=0;
  *__t1357t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1358t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1358t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1359t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1359t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1360t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1361t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1361t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1362t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1362t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1363t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1364t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1364t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1365t) {
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
  *__t1365t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1366t, uint64_t* __t1367t, uint16_t* __t1368t, uint16_t* __t1369t, uint64_t size, char** __t1370t, uint64_t* __t1371t, uint16_t* __t1372t, uint16_t* __t1373t) {
  char* buffer__unsafe_ptr=*__t1366t;
  uint64_t buffer__unsafe_size=*__t1367t;
  uint16_t buffer__unsafe_offset=*__t1368t;
  uint16_t buffer__unsafe_align=*__t1369t;
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
  *__t1366t=buffer__unsafe_ptr;
  *__t1367t=buffer__unsafe_size;
  *__t1368t=buffer__unsafe_offset;
  *__t1369t=buffer__unsafe_align;
  *__t1370t=buffer__unsafe_ptr;
  *__t1371t=buffer__unsafe_size;
  *__t1372t=buffer__unsafe_offset;
  *__t1373t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1374t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1374t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1375t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1376t) {
  *__t1376t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1377t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1377t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1378t, uint64_t* __t1379t, uint16_t* __t1380t, uint16_t* __t1381t, uint64_t i, char** __t1382t) {
  char* buffer__unsafe_ptr=*__t1378t;
  uint64_t buffer__unsafe_size=*__t1379t;
  uint16_t buffer__unsafe_offset=*__t1380t;
  uint16_t buffer__unsafe_align=*__t1381t;
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
  *__t1378t=buffer__unsafe_ptr;
  *__t1379t=buffer__unsafe_size;
  *__t1380t=buffer__unsafe_offset;
  *__t1381t=buffer__unsafe_align;
  *__t1382t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t1321t(char** __t1383t, uint64_t* __t1384t, uint16_t* __t1385t, uint16_t* __t1386t) {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  uint64_t __t1325t=0;
  char* __t1326t__unsafe_ptr=0;
  uint64_t __t1326t__unsafe_size=0;
  uint16_t __t1326t__unsafe_offset=0;
  uint16_t __t1326t__unsafe_align=0;
  char __t1327t____t511t__=0;
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__unsafe_size=0;
  uint16_t __t1328t__unsafe_offset=0;
  uint16_t __t1328t__unsafe_align=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1329t=0;
  char* __t1330t__=0;
  double __t1331t=0;
  char* __t1332t__unsafe_ptr=0;
  uint64_t __t1332t__unsafe_size=0;
  uint16_t __t1332t__unsafe_offset=0;
  uint16_t __t1332t__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t=1;
  __t_errcode=alloc__t509t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align,__t1325t,&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1328t__unsafe_ptr=__t1326t__unsafe_ptr;
  __t1328t__unsafe_size=__t1326t__unsafe_size;
  __t1328t__unsafe_offset=__t1326t__unsafe_offset;
  __t1328t__unsafe_align=__t1326t__unsafe_align;
  x__unsafe_ptr=__t1328t__unsafe_ptr;
  x__unsafe_size=__t1328t__unsafe_size;
  x__unsafe_offset=__t1328t__unsafe_offset;
  x__unsafe_align=__t1328t__unsafe_align;
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
  float____t_buffer____buffer__t1322t(&__t1332t__unsafe_ptr,&__t1332t__unsafe_size,&__t1332t__unsafe_offset,&__t1332t__unsafe_align);
  y__unsafe_ptr=__t1332t__unsafe_ptr;
  y__unsafe_size=__t1332t__unsafe_size;
  y__unsafe_offset=__t1332t__unsafe_offset;
  y__unsafe_align=__t1332t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(x__unsafe_ptr,&__t1327t____t511t__);
  if(__t1327t____t511t__){
  free__t502t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1383t=x__unsafe_ptr;
  *__t1384t=x__unsafe_size;
  *__t1385t=x__unsafe_offset;
  *__t1386t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1387t) {
  char* new_allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  char* __t501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t436t(new_allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t501t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1387t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1388t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1388t=z;
}

static inline __attribute__((always_inline)) int resize__t557t(char** __t1389t, uint64_t* __t1390t, uint16_t* __t1391t, uint16_t* __t1392t, uint64_t size, char** __t1393t, uint64_t* __t1394t, uint16_t* __t1395t, uint16_t* __t1396t) {
  char* buffer__unsafe_ptr=*__t1389t;
  uint64_t buffer__unsafe_size=*__t1390t;
  uint16_t buffer__unsafe_offset=*__t1391t;
  uint16_t buffer__unsafe_align=*__t1392t;
  char __t558t__=0;
  uint64_t __t559t=0;
  char __t560t__=0;
  uint64_t __t561t__=0;
  uint64_t __t562t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t563t__=0;
  uint64_t __t564t__=0;
  uint64_t bytes=0;
  char* __t565t__=0;
  char __t566t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(buffer__unsafe_size,size,&__t558t__);
  if(__t558t__){
  goto __t_return;
  }
  __t559t=0;
  eq__t119t(buffer__unsafe_size,__t559t,&__t560t__);
  if(__t560t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t561t__);
  mul__t195t(buffer__unsafe_size,__t561t__,&__t562t__);
  prev_bytes=__t562t__;
  buffer__unsafe_size=size;
  nat__t506t(buffer__unsafe_align,&__t563t__);
  mul__t195t(__t563t__,size,&__t564t__);
  bytes=__t564t__;
  __t_errcode=realloc__t498t(buffer__unsafe_ptr,bytes,&__t565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t565t__;
  lt__t248t(prev_bytes,bytes,&__t566t__);
  if(__t566t__){
  zero__t503t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1389t=buffer__unsafe_ptr;
  *__t1390t=buffer__unsafe_size;
  *__t1391t=buffer__unsafe_offset;
  *__t1392t=buffer__unsafe_align;
  *__t1393t=buffer__unsafe_ptr;
  *__t1394t=buffer__unsafe_size;
  *__t1395t=buffer__unsafe_offset;
  *__t1396t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1397t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1397t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t576t(char** __t1398t, uint64_t* __t1399t, uint16_t* __t1400t, uint16_t* __t1401t, char** __t1402t) {
  char* buffer__unsafe_ptr=*__t1398t;
  uint64_t buffer__unsafe_size=*__t1399t;
  uint16_t buffer__unsafe_offset=*__t1400t;
  uint16_t buffer__unsafe_align=*__t1401t;
  uint64_t __t577t=0;
  char __t578t__=0;
  uint64_t __t579t=0;
  uint64_t __t580t__=0;
  uint64_t __t581t__=0;
  uint64_t __t582t__=0;
  char* __t583t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t577t=0;
  eq__t119t(__t577t,buffer__unsafe_size,&__t578t__);
  if(__t578t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t579t=1;
  __t_errcode=sub__t348t(buffer__unsafe_size,__t579t,&__t580t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t581t__);
  mul__t195t(__t580t__,__t581t__,&__t582t__);
  add__t504t(buffer__unsafe_ptr,__t582t__,&__t583t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1398t=buffer__unsafe_ptr;
  *__t1399t=buffer__unsafe_size;
  *__t1400t=buffer__unsafe_offset;
  *__t1401t=buffer__unsafe_align;
  *__t1402t=__t583t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1333t(char** __t1403t, uint64_t* __t1404t, uint16_t* __t1405t, uint16_t* __t1406t) {
  char* x__unsafe_ptr=*__t1403t;
  uint64_t x__unsafe_size=*__t1404t;
  uint16_t x__unsafe_offset=*__t1405t;
  uint16_t x__unsafe_align=*__t1406t;
  uint64_t __t1334t=0;
  char* __t1335t__unsafe_ptr=0;
  uint64_t __t1335t__unsafe_size=0;
  uint16_t __t1335t__unsafe_offset=0;
  uint16_t __t1335t__unsafe_align=0;
  char* __t1336t__=0;
  double __t1337t=0;
  char* __t1338t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1334t=2;
  __t_errcode=resize__t557t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1334t,&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t576t(&__t1335t__unsafe_ptr,&__t1335t__unsafe_size,&__t1335t__unsafe_offset,&__t1335t__unsafe_align,&__t1336t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1337t=2.0;
  if(!__t1336t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1336t__,&__t1337t,8);
  __t1338t=__t1336t__;
  
  __t_failure:*__t1403t=x__unsafe_ptr;
  *__t1404t=x__unsafe_size;
  *__t1405t=x__unsafe_offset;
  *__t1406t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1407t) {
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
  *__t1407t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1408t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1408t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1409t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1409t=z;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1339t() {
  char* __t1340t__unsafe_ptr=0;
  uint64_t __t1340t__unsafe_size=0;
  uint16_t __t1340t__unsafe_offset=0;
  uint16_t __t1340t__unsafe_align=0;
  char __t1341t____t1327t____t511t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1343t=0;
  char* __t1344t__=0;
  double __t1345t__value=0;
  uint64_t __t1346t=0;
  char* __t1347t__=0;
  double __t1348t__value=0;
  double __t1349t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1321t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test2__t1333t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1343t=0;
  __t_errcode=get__t591t(__t1340t__unsafe_ptr,__t1340t__unsafe_size,__t1340t__unsafe_offset,__t1340t__unsafe_align,__t1343t,&__t1344t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1344t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1345t__value,__t1344t__,8);
  __t1346t=1;
  __t_errcode=get__t591t(__t1340t__unsafe_ptr,__t1340t__unsafe_size,__t1340t__unsafe_offset,__t1340t__unsafe_align,__t1346t,&__t1347t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1347t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1348t__value,__t1347t__,8);
  add__t149t(__t1345t__value,__t1348t__value,&__t1349t__);
  print__t374t(__t1349t__);
  
  __t_failure:exists__t436t(__t1340t__unsafe_ptr,&__t1341t____t1327t____t511t__);
  if(__t1341t____t1327t____t511t__){
  free__t502t(&__t1340t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1339t();return 0;}