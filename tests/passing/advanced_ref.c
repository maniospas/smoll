#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1337t="456";
const char* const __t1335t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1326t(char** __t1344t, uint64_t* __t1345t, uint16_t* __t1346t, uint16_t* __t1347t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1344t=unsafe_ptr;
  *__t1345t=unsafe_size;
  *__t1346t=unsafe_offset;
  *__t1347t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1348t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1348t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1349t) {
  char* allocated=*__t1349t;
  if(allocated){
  free(allocated);
  }
  *__t1349t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1350t) {
  int value=0;
  *__t1350t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1351t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1351t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1352t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1352t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1353t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1353t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1354t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1354t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1355t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1355t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1356t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1356t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1357t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1357t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1358t) {
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
  *__t1358t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1359t, uint64_t* __t1360t, uint16_t* __t1361t, uint16_t* __t1362t, uint64_t size, char** __t1363t, uint64_t* __t1364t, uint16_t* __t1365t, uint16_t* __t1366t) {
  char* buffer__unsafe_ptr=*__t1359t;
  uint64_t buffer__unsafe_size=*__t1360t;
  uint16_t buffer__unsafe_offset=*__t1361t;
  uint16_t buffer__unsafe_align=*__t1362t;
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
  *__t1359t=buffer__unsafe_ptr;
  *__t1360t=buffer__unsafe_size;
  *__t1361t=buffer__unsafe_offset;
  *__t1362t=buffer__unsafe_align;
  *__t1363t=__t520t__unsafe_ptr;
  *__t1364t=__t520t__unsafe_size;
  *__t1365t=__t520t__unsafe_offset;
  *__t1366t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1367t) {
  goto __t_return;
  __t_return:
  *__t1367t=buffer__unsafe_size;
}

int list__t603t(char** __t1368t, uint64_t* __t1369t, uint16_t* __t1370t, uint16_t* __t1371t, char** __t1372t, uint64_t* __t1373t, uint16_t* __t1374t, uint16_t* __t1375t, uint64_t* __t1376t) {
  char* _buffer__unsafe_ptr=*__t1368t;
  uint64_t _buffer__unsafe_size=*__t1369t;
  uint16_t _buffer__unsafe_offset=*__t1370t;
  uint16_t _buffer__unsafe_align=*__t1371t;
  uint64_t __t604t=0;
  char* __t605t__unsafe_ptr=0;
  uint64_t __t605t__unsafe_size=0;
  uint16_t __t605t__unsafe_offset=0;
  uint16_t __t605t__unsafe_align=0;
  char __t606t____t511t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t607t__=0;
  uint64_t __t608t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t604t=1;
  __t_errcode=alloc__t509t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t604t,&__t605t__unsafe_ptr,&__t605t__unsafe_size,&__t605t__unsafe_offset,&__t605t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t605t__unsafe_ptr;
  buffer__unsafe_size=__t605t__unsafe_size;
  buffer__unsafe_offset=__t605t__unsafe_offset;
  buffer__unsafe_align=__t605t__unsafe_align;
  len__t602t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t607t__);
  __t608t=__t607t__;
  length=__t608t;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t606t____t511t__);
  if(__t606t____t511t__){
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1368t=_buffer__unsafe_ptr;
  *__t1369t=_buffer__unsafe_size;
  *__t1370t=_buffer__unsafe_offset;
  *__t1371t=_buffer__unsafe_align;
  *__t1372t=buffer__unsafe_ptr;
  *__t1373t=buffer__unsafe_size;
  *__t1374t=buffer__unsafe_offset;
  *__t1375t=buffer__unsafe_align;
  *__t1376t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1377t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1378t) {
  *__t1378t=to;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1379t) {
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
  *__t1379t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1380t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) int resize__t561t(char** __t1381t, uint64_t* __t1382t, uint16_t* __t1383t, uint16_t* __t1384t, uint64_t size, char** __t1385t, uint64_t* __t1386t, uint16_t* __t1387t, uint16_t* __t1388t) {
  char* buffer__unsafe_ptr=*__t1381t;
  uint64_t buffer__unsafe_size=*__t1382t;
  uint16_t buffer__unsafe_offset=*__t1383t;
  uint16_t buffer__unsafe_align=*__t1384t;
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
  *__t1381t=buffer__unsafe_ptr;
  *__t1382t=buffer__unsafe_size;
  *__t1383t=buffer__unsafe_offset;
  *__t1384t=buffer__unsafe_align;
  *__t1385t=buffer__unsafe_ptr;
  *__t1386t=buffer__unsafe_size;
  *__t1387t=buffer__unsafe_offset;
  *__t1388t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1389t, uint64_t* __t1390t, uint16_t* __t1391t, uint16_t* __t1392t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1389t=unsafe_ptr;
  *__t1390t=unsafe_size;
  *__t1391t=unsafe_offset;
  *__t1392t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1393t) {
  *__t1393t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1394t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1394t=z;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1395t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1395t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1396t) {
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
  *__t1396t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1397t, uint64_t* __t1398t, uint64_t* __t1399t, char* __t1400t) {
  goto __t_return;
  __t_return:
  *__t1397t=unsafe_ptr;
  *__t1398t=dat__pos;
  *__t1399t=dat__length;
  *__t1400t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1401t, uint64_t* __t1402t, uint64_t* __t1403t, char* __t1404t) {
  char* unsafe_ptr=0;
  uint64_t __t635t__=0;
  uint64_t __t636t=0;
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t=0;
  char __t640t__=0;
  char* __t641t__unsafe_ptr=0;
  uint64_t __t641t__dat__pos=0;
  uint64_t __t641t__dat__length=0;
  char __t641t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t635t__);
  __t636t=1;
  neq__t143t(__t635t__,__t636t,&__t637t__);
  if(__t637t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t638t__);
  __t639t=0;
  neq__t143t(__t638t__,__t639t,&__t640t__);
  if(__t640t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t630t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t641t__unsafe_ptr,&__t641t__dat__pos,&__t641t__dat__length,&__t641t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1401t=__t641t__unsafe_ptr;
  *__t1402t=__t641t__dat__pos;
  *__t1403t=__t641t__dat__length;
  *__t1404t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1405t, uint64_t* __t1406t, uint64_t* __t1407t, char* __t1408t) {
  uint64_t __t667t=0;
  char __t668t__=0;
  char* __t669t__=0;
  char __t670t__value=0;
  char first=0;
  char* __t671t__unsafe_ptr=0;
  uint64_t __t671t__dat__pos=0;
  uint64_t __t671t__dat__length=0;
  char __t671t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t667t=0;
  neq__t143t(length,__t667t,&__t668t__);
  if(__t668t__){
  __t_errcode=get__t595t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t670t__value,__t669t__,1);
  first=__t670t__value;
  }
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t671t__unsafe_ptr,&__t671t__dat__pos,&__t671t__dat__length,&__t671t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1405t=__t671t__unsafe_ptr;
  *__t1406t=__t671t__dat__pos;
  *__t1407t=__t671t__dat__length;
  *__t1408t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1409t, uint64_t* __t1410t, uint64_t* __t1411t, char* __t1412t) {
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__unsafe_size=0;
  uint16_t __t674t__unsafe_offset=0;
  uint16_t __t674t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t675t__=0;
  uint64_t length=0;
  uint64_t __t676t=0;
  uint64_t __t677t__=0;
  uint64_t __t678t=0;
  char* __t679t__unsafe_ptr=0;
  uint64_t __t679t__dat__pos=0;
  uint64_t __t679t__dat__length=0;
  char __t679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t673t__unsafe_ptr,&__t673t__unsafe_size,&__t673t__unsafe_offset,&__t673t__unsafe_align);
  __t674t__unsafe_ptr=__t673t__unsafe_ptr;
  __t674t__unsafe_size=__t673t__unsafe_size;
  __t674t__unsafe_offset=__t673t__unsafe_offset;
  __t674t__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=__t674t__unsafe_ptr;
  buf__unsafe_size=__t674t__unsafe_size;
  buf__unsafe_offset=__t674t__unsafe_offset;
  buf__unsafe_align=__t674t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t675t__);
  buf__unsafe_ptr=__t675t__;
  if(c){
  length=strlen(c);
  }
  __t676t=1;
  add__t171t(length,__t676t,&__t677t__);
  buf__unsafe_size=__t677t__;
  __t678t=0;
  __t_errcode=str__t666t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t678t,length,&__t679t__unsafe_ptr,&__t679t__dat__pos,&__t679t__dat__length,&__t679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1409t=__t679t__unsafe_ptr;
  *__t1410t=__t679t__dat__pos;
  *__t1411t=__t679t__dat__length;
  *__t1412t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1413t) {
  goto __t_return;
  __t_return:
  *__t1413t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t147t(char* x, char* y, char* __t1414t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1414t=z;
}

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t1415t) {
  int __t222t__=0;
  uint64_t zero=0;
  char __t223t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t222t__);
  zero=0;
  eq__t119t(y,zero,&__t223t__);
  if(__t223t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1415t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t665t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1416t, uint64_t* __t1417t, uint64_t* __t1418t, char* __t1419t) {
  goto __t_return;
  __t_return:
  *__t1416t=other__unsafe_ptr;
  *__t1417t=other__dat__pos;
  *__t1418t=other__dat__length;
  *__t1419t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1420t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1420t=z;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1421t, uint64_t* __t1422t, uint16_t* __t1423t, uint16_t* __t1424t, uint64_t* __t1425t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1426t, uint64_t* __t1427t, uint64_t* __t1428t, char* __t1429t) {
  char* buf__unsafe_ptr=*__t1421t;
  uint64_t buf__unsafe_size=*__t1422t;
  uint16_t buf__unsafe_offset=*__t1423t;
  uint16_t buf__unsafe_align=*__t1424t;
  uint64_t pos=*__t1425t;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__dat__pos=0;
  uint64_t __t743t__dat__length=0;
  char __t743t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t744t__=0;
  uint64_t __t745t__=0;
  uint64_t next_pos=0;
  uint64_t __t746t__=0;
  char __t747t__=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t prev_pos=0;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t665t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t171t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t272t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t171t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1421t=buf__unsafe_ptr;
  *__t1422t=buf__unsafe_size;
  *__t1423t=buf__unsafe_offset;
  *__t1424t=buf__unsafe_align;
  *__t1425t=pos;
  *__t1426t=__t750t__unsafe_ptr;
  *__t1427t=__t750t__dat__pos;
  *__t1428t=__t750t__dat__length;
  *__t1429t=__t750t__dat__first;
  
  return __t_errcode;
}

int copy__t808t(char** __t1430t, uint64_t* __t1431t, uint16_t* __t1432t, uint16_t* __t1433t, uint64_t* __t1434t, const char* _other, char** __t1435t, uint64_t* __t1436t, uint64_t* __t1437t, char* __t1438t) {
  char* li__buffer__unsafe_ptr=*__t1430t;
  uint64_t li__buffer__unsafe_size=*__t1431t;
  uint16_t li__buffer__unsafe_offset=*__t1432t;
  uint16_t li__buffer__unsafe_align=*__t1433t;
  uint64_t li__length=*__t1434t;
  char* __t809t__unsafe_ptr=0;
  uint64_t __t809t__dat__pos=0;
  uint64_t __t809t__dat__length=0;
  char __t809t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t810t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t811t__=0;
  uint64_t __t812t__=0;
  uint64_t prev_length=0;
  char __t813t__=0;
  uint64_t __t814t__=0;
  char __t815t__=0;
  uint64_t __t816t=0;
  uint64_t __t817t__=0;
  uint64_t __t818t=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  char* __t821t__unsafe_ptr=0;
  uint64_t __t821t__unsafe_size=0;
  uint16_t __t821t__unsafe_offset=0;
  uint16_t __t821t__unsafe_align=0;
  char* __t822t__unsafe_ptr=0;
  uint64_t __t822t__dat__pos=0;
  uint64_t __t822t__dat__length=0;
  char __t822t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t672t(_other,&__t809t__unsafe_ptr,&__t809t__dat__pos,&__t809t__dat__length,&__t809t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t809t__unsafe_ptr;
  other__dat__pos=__t809t__dat__pos;
  other__dat__length=__t809t__dat__length;
  other__dat__first=__t809t__dat__first;
  __t810t=li__length;
  prev_prev_length=__t810t;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t811t__);
  add__t171t(li__length,__t811t__,&__t812t__);
  prev_length=__t812t__;
  eq__t147t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t813t__);
  if(__t813t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t602t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t814t__);
  ge__t320t(prev_length,__t814t__,&__t815t__);
  if(__t815t__){
  __t816t=2;
  __t_errcode=div__t221t(prev_length,__t816t,&__t817t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t818t=1;
  add__t171t(__t817t__,__t818t,&__t819t__);
  add__t171t(prev_length,__t819t__,&__t820t__);
  __t_errcode=resize__t561t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t820t__,&__t821t__unsafe_ptr,&__t821t__unsafe_size,&__t821t__unsafe_offset,&__t821t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t821t__unsafe_ptr;
  li__buffer__unsafe_size=__t821t__unsafe_size;
  li__buffer__unsafe_offset=__t821t__unsafe_offset;
  li__buffer__unsafe_align=__t821t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t742t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t822t__unsafe_ptr,&__t822t__dat__pos,&__t822t__dat__length,&__t822t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1430t=li__buffer__unsafe_ptr;
  *__t1431t=li__buffer__unsafe_size;
  *__t1432t=li__buffer__unsafe_offset;
  *__t1433t=li__buffer__unsafe_align;
  *__t1434t=li__length;
  *__t1435t=__t822t__unsafe_ptr;
  *__t1436t=__t822t__dat__pos;
  *__t1437t=__t822t__dat__length;
  *__t1438t=__t822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1325t(char** __t1439t, uint64_t* __t1440t, uint64_t* __t1441t, char* __t1442t, char** __t1443t, uint64_t* __t1444t, uint64_t* __t1445t, char* __t1446t) {
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__unsafe_size=0;
  uint16_t __t1328t__unsafe_offset=0;
  uint16_t __t1328t__unsafe_align=0;
  char* __t1329t__unsafe_ptr=0;
  uint64_t __t1329t__unsafe_size=0;
  uint16_t __t1329t__unsafe_offset=0;
  uint16_t __t1329t__unsafe_align=0;
  char* __t1330t__buffer__unsafe_ptr=0;
  uint64_t __t1330t__buffer__unsafe_size=0;
  uint16_t __t1330t__buffer__unsafe_offset=0;
  uint16_t __t1330t__buffer__unsafe_align=0;
  uint64_t __t1330t__length=0;
  char __t1331t____t606t____t511t__=0;
  char* __t1332t__buffer__unsafe_ptr=0;
  uint64_t __t1332t__buffer__unsafe_size=0;
  uint16_t __t1332t__buffer__unsafe_offset=0;
  uint16_t __t1332t__buffer__unsafe_align=0;
  uint64_t __t1332t__length=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1333t=0;
  char* __t1334t__unsafe_ptr=0;
  uint64_t __t1334t__unsafe_size=0;
  uint16_t __t1334t__unsafe_offset=0;
  uint16_t __t1334t__unsafe_align=0;
  char* __t1336t__unsafe_ptr=0;
  uint64_t __t1336t__dat__pos=0;
  uint64_t __t1336t__dat__length=0;
  char __t1336t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1338t__unsafe_ptr=0;
  uint64_t __t1338t__dat__pos=0;
  uint64_t __t1338t__dat__length=0;
  char __t1338t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1326t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align);
  __t1329t__unsafe_ptr=__t1328t__unsafe_ptr;
  __t1329t__unsafe_size=__t1328t__unsafe_size;
  __t1329t__unsafe_offset=__t1328t__unsafe_offset;
  __t1329t__unsafe_align=__t1328t__unsafe_align;
  __t_errcode=list__t603t(&__t1329t__unsafe_ptr,&__t1329t__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&__t1330t__buffer__unsafe_ptr,&__t1330t__buffer__unsafe_size,&__t1330t__buffer__unsafe_offset,&__t1330t__buffer__unsafe_align,&__t1330t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1332t__buffer__unsafe_size=__t1330t__buffer__unsafe_size;
  __t1332t__length=__t1330t__length;
  mem__buffer__unsafe_size=__t1332t__buffer__unsafe_size;
  mem__length=__t1332t__length;
  __t1333t=100;
  __t_errcode=resize__t561t(&__t1329t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,__t1333t,&__t1334t__unsafe_ptr,&__t1334t__unsafe_size,&__t1334t__unsafe_offset,&__t1334t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t808t(&__t1329t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&mem__length,__t1335t,&__t1336t__unsafe_ptr,&__t1336t__dat__pos,&__t1336t__dat__length,&__t1336t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1336t__dat__pos;
  s1__dat__length=__t1336t__dat__length;
  s1__dat__first=__t1336t__dat__first;
  __t_errcode=copy__t808t(&__t1329t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&mem__length,__t1337t,&__t1338t__unsafe_ptr,&__t1338t__dat__pos,&__t1338t__dat__length,&__t1338t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1338t__dat__pos;
  s2__dat__length=__t1338t__dat__length;
  s2__dat__first=__t1338t__dat__first;
  s1__unsafe_ptr=__t1329t__unsafe_ptr;
  s2__unsafe_ptr=__t1329t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(s1__unsafe_ptr,&__t1331t____t606t____t511t__);
  if(__t1331t____t606t____t511t__){
  s1__unsafe_ptr=s1__unsafe_ptr;
  free__t502t(&s1__unsafe_ptr);
  }
  __t_return:
  *__t1439t=s1__unsafe_ptr;
  *__t1440t=s1__dat__pos;
  *__t1441t=s1__dat__length;
  *__t1442t=s1__dat__first;
  *__t1443t=s2__unsafe_ptr;
  *__t1444t=s2__dat__pos;
  *__t1445t=s2__dat__length;
  *__t1446t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1339t() {
  char* __t1340t__s1__unsafe_ptr=0;
  uint64_t __t1340t__s1__dat__pos=0;
  uint64_t __t1340t__s1__dat__length=0;
  char __t1340t__s1__dat__first=0;
  char* __t1340t__s2__unsafe_ptr=0;
  uint64_t __t1340t__s2__dat__pos=0;
  uint64_t __t1340t__s2__dat__length=0;
  char __t1340t__s2__dat__first=0;
  char __t1341t____t1331t____t606t____t511t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1325t(&__t1340t__s1__unsafe_ptr,&__t1340t__s1__dat__pos,&__t1340t__s1__dat__length,&__t1340t__s1__dat__first,&__t1340t__s2__unsafe_ptr,&__t1340t__s2__dat__pos,&__t1340t__s2__dat__length,&__t1340t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1340t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1340t__s1__dat__pos;
  s__s1__dat__length=__t1340t__s1__dat__length;
  s__s1__dat__first=__t1340t__s1__dat__first;
  s__s2__unsafe_ptr=__t1340t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1340t__s2__dat__pos;
  s__s2__dat__length=__t1340t__s2__dat__length;
  s__s2__dat__first=__t1340t__s2__dat__first;
  print__t784t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t784t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t436t(__t1340t__s1__unsafe_ptr,&__t1341t____t1331t____t606t____t511t__);
  if(__t1341t____t1331t____t606t____t511t__){
  __t1340t__s1__unsafe_ptr=__t1340t__s1__unsafe_ptr;
  free__t502t(&__t1340t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1339t();return 0;}