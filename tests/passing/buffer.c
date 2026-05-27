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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1326t(char** __t1355t, uint64_t* __t1356t, uint16_t* __t1357t, uint16_t* __t1358t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1355t=unsafe_ptr;
  *__t1356t=unsafe_size;
  *__t1357t=unsafe_offset;
  *__t1358t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1359t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1360t) {
  char* allocated=*__t1360t;
  if(allocated){
  free(allocated);
  }
  *__t1360t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1361t) {
  int value=0;
  *__t1361t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1362t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1362t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1363t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1363t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1364t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1364t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1365t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1366t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1366t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1367t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1367t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1368t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1369t) {
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
  *__t1369t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1370t, uint64_t* __t1371t, uint16_t* __t1372t, uint16_t* __t1373t, uint64_t size, char** __t1374t, uint64_t* __t1375t, uint16_t* __t1376t, uint16_t* __t1377t) {
  char* buffer__unsafe_ptr=*__t1370t;
  uint64_t buffer__unsafe_size=*__t1371t;
  uint16_t buffer__unsafe_offset=*__t1372t;
  uint16_t buffer__unsafe_align=*__t1373t;
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
  *__t1370t=buffer__unsafe_ptr;
  *__t1371t=buffer__unsafe_size;
  *__t1372t=buffer__unsafe_offset;
  *__t1373t=buffer__unsafe_align;
  *__t1374t=__t520t__unsafe_ptr;
  *__t1375t=__t520t__unsafe_size;
  *__t1376t=__t520t__unsafe_offset;
  *__t1377t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1378t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1378t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1379t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1379t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1380t) {
  *__t1380t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1381t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1381t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1382t, uint64_t* __t1383t, uint16_t* __t1384t, uint16_t* __t1385t, uint64_t i, char** __t1386t) {
  char* buffer__unsafe_ptr=*__t1382t;
  uint64_t buffer__unsafe_size=*__t1383t;
  uint16_t buffer__unsafe_offset=*__t1384t;
  uint16_t buffer__unsafe_align=*__t1385t;
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
  *__t1382t=buffer__unsafe_ptr;
  *__t1383t=buffer__unsafe_size;
  *__t1384t=buffer__unsafe_offset;
  *__t1385t=buffer__unsafe_align;
  *__t1386t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t1325t(char** __t1387t, uint64_t* __t1388t, uint16_t* __t1389t, uint16_t* __t1390t) {
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__unsafe_size=0;
  uint16_t __t1328t__unsafe_offset=0;
  uint16_t __t1328t__unsafe_align=0;
  char* __t1329t__unsafe_ptr=0;
  uint64_t __t1329t__unsafe_size=0;
  uint16_t __t1329t__unsafe_offset=0;
  uint16_t __t1329t__unsafe_align=0;
  uint64_t __t1330t=0;
  char* __t1331t__unsafe_ptr=0;
  uint64_t __t1331t__unsafe_size=0;
  uint16_t __t1331t__unsafe_offset=0;
  uint16_t __t1331t__unsafe_align=0;
  char __t1332t____t511t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1333t=0;
  char* __t1334t__=0;
  double __t1335t=0;
  char* __t1336t__unsafe_ptr=0;
  uint64_t __t1336t__unsafe_size=0;
  uint16_t __t1336t__unsafe_offset=0;
  uint16_t __t1336t__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1326t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align);
  __t1329t__unsafe_ptr=__t1328t__unsafe_ptr;
  __t1329t__unsafe_size=__t1328t__unsafe_size;
  __t1329t__unsafe_offset=__t1328t__unsafe_offset;
  __t1329t__unsafe_align=__t1328t__unsafe_align;
  __t1330t=1;
  __t_errcode=alloc__t509t(&__t1329t__unsafe_ptr,&__t1329t__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,__t1330t,&__t1331t__unsafe_ptr,&__t1331t__unsafe_size,&__t1331t__unsafe_offset,&__t1331t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1331t__unsafe_ptr;
  x__unsafe_size=__t1331t__unsafe_size;
  x__unsafe_offset=__t1331t__unsafe_offset;
  x__unsafe_align=__t1331t__unsafe_align;
  __t1333t=0;
  __t_errcode=mutget__t588t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1333t,&__t1334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1335t=1.0;
  if(!__t1334t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1334t__,&__t1335t,8);
  float____t_buffer____buffer__t1326t(&__t1336t__unsafe_ptr,&__t1336t__unsafe_size,&__t1336t__unsafe_offset,&__t1336t__unsafe_align);
  y__unsafe_ptr=__t1336t__unsafe_ptr;
  y__unsafe_size=__t1336t__unsafe_size;
  y__unsafe_offset=__t1336t__unsafe_offset;
  y__unsafe_align=__t1336t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(x__unsafe_ptr,&__t1332t____t511t__);
  if(__t1332t____t511t__){
  x__unsafe_ptr=x__unsafe_ptr;
  free__t502t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1387t=x__unsafe_ptr;
  *__t1388t=x__unsafe_size;
  *__t1389t=x__unsafe_offset;
  *__t1390t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1391t) {
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
  *__t1391t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1392t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1392t=z;
}

static inline __attribute__((always_inline)) int resize__t561t(char** __t1393t, uint64_t* __t1394t, uint16_t* __t1395t, uint16_t* __t1396t, uint64_t size, char** __t1397t, uint64_t* __t1398t, uint16_t* __t1399t, uint16_t* __t1400t) {
  char* buffer__unsafe_ptr=*__t1393t;
  uint64_t buffer__unsafe_size=*__t1394t;
  uint16_t buffer__unsafe_offset=*__t1395t;
  uint16_t buffer__unsafe_align=*__t1396t;
  char __t562t__=0;
  uint64_t __t563t=0;
  char __t564t__=0;
  uint64_t __t565t__=0;
  uint64_t __t566t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t bytes=0;
  char* __t569t__=0;
  char __t570t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(buffer__unsafe_size,size,&__t562t__);
  if(__t562t__){
  goto __t_return;
  }
  __t563t=0;
  eq__t119t(buffer__unsafe_size,__t563t,&__t564t__);
  if(__t564t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t565t__);
  mul__t195t(buffer__unsafe_size,__t565t__,&__t566t__);
  prev_bytes=__t566t__;
  buffer__unsafe_size=size;
  nat__t506t(buffer__unsafe_align,&__t567t__);
  mul__t195t(__t567t__,size,&__t568t__);
  bytes=__t568t__;
  __t_errcode=realloc__t498t(buffer__unsafe_ptr,bytes,&__t569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t569t__;
  lt__t248t(prev_bytes,bytes,&__t570t__);
  if(__t570t__){
  zero__t503t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1393t=buffer__unsafe_ptr;
  *__t1394t=buffer__unsafe_size;
  *__t1395t=buffer__unsafe_offset;
  *__t1396t=buffer__unsafe_align;
  *__t1397t=buffer__unsafe_ptr;
  *__t1398t=buffer__unsafe_size;
  *__t1399t=buffer__unsafe_offset;
  *__t1400t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1401t) {
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
  *__t1401t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t580t(char** __t1402t, uint64_t* __t1403t, uint16_t* __t1404t, uint16_t* __t1405t, char** __t1406t) {
  char* buffer__unsafe_ptr=*__t1402t;
  uint64_t buffer__unsafe_size=*__t1403t;
  uint16_t buffer__unsafe_offset=*__t1404t;
  uint16_t buffer__unsafe_align=*__t1405t;
  uint64_t __t581t=0;
  char __t582t__=0;
  uint64_t __t583t=0;
  uint64_t __t584t__=0;
  uint64_t __t585t__=0;
  uint64_t __t586t__=0;
  char* __t587t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t581t=0;
  eq__t119t(__t581t,buffer__unsafe_size,&__t582t__);
  if(__t582t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t583t=1;
  __t_errcode=sub__t348t(buffer__unsafe_size,__t583t,&__t584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t585t__);
  mul__t195t(__t584t__,__t585t__,&__t586t__);
  add__t504t(buffer__unsafe_ptr,__t586t__,&__t587t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1402t=buffer__unsafe_ptr;
  *__t1403t=buffer__unsafe_size;
  *__t1404t=buffer__unsafe_offset;
  *__t1405t=buffer__unsafe_align;
  *__t1406t=__t587t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1337t(char** __t1407t, uint64_t* __t1408t, uint16_t* __t1409t, uint16_t* __t1410t) {
  char* x__unsafe_ptr=*__t1407t;
  uint64_t x__unsafe_size=*__t1408t;
  uint16_t x__unsafe_offset=*__t1409t;
  uint16_t x__unsafe_align=*__t1410t;
  uint64_t __t1338t=0;
  char* __t1339t__unsafe_ptr=0;
  uint64_t __t1339t__unsafe_size=0;
  uint16_t __t1339t__unsafe_offset=0;
  uint16_t __t1339t__unsafe_align=0;
  char* __t1340t__=0;
  double __t1341t=0;
  char* __t1342t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1338t=2;
  __t_errcode=resize__t561t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1338t,&__t1339t__unsafe_ptr,&__t1339t__unsafe_size,&__t1339t__unsafe_offset,&__t1339t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t580t(&__t1339t__unsafe_ptr,&__t1339t__unsafe_size,&__t1339t__unsafe_offset,&__t1339t__unsafe_align,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1341t=2.0;
  if(!__t1340t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1340t__,&__t1341t,8);
  __t1342t=__t1340t__;
  
  __t_failure:*__t1407t=x__unsafe_ptr;
  *__t1408t=x__unsafe_size;
  *__t1409t=x__unsafe_offset;
  *__t1410t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1411t) {
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
  *__t1411t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1412t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1412t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1413t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1413t=z;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1343t() {
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__unsafe_size=0;
  uint16_t __t1344t__unsafe_offset=0;
  uint16_t __t1344t__unsafe_align=0;
  char __t1345t____t1332t____t511t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1347t=0;
  char* __t1348t__=0;
  double __t1349t__value=0;
  uint64_t __t1350t=0;
  char* __t1351t__=0;
  double __t1352t__value=0;
  double __t1353t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1325t(&__t1344t__unsafe_ptr,&__t1344t__unsafe_size,&__t1344t__unsafe_offset,&__t1344t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test2__t1337t(&__t1344t__unsafe_ptr,&__t1344t__unsafe_size,&__t1344t__unsafe_offset,&__t1344t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1347t=0;
  __t_errcode=get__t595t(__t1344t__unsafe_ptr,__t1344t__unsafe_size,__t1344t__unsafe_offset,__t1344t__unsafe_align,__t1347t,&__t1348t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1348t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1349t__value,__t1348t__,8);
  __t1350t=1;
  __t_errcode=get__t595t(__t1344t__unsafe_ptr,__t1344t__unsafe_size,__t1344t__unsafe_offset,__t1344t__unsafe_align,__t1350t,&__t1351t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1351t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1352t__value,__t1351t__,8);
  add__t149t(__t1349t__value,__t1352t__value,&__t1353t__);
  print__t374t(__t1353t__);
  
  __t_failure:exists__t436t(__t1344t__unsafe_ptr,&__t1345t____t1332t____t511t__);
  if(__t1345t____t1332t____t511t__){
  __t1344t__unsafe_ptr=__t1344t__unsafe_ptr;
  free__t502t(&__t1344t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1343t();return 0;}