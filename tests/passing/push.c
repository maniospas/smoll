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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1326t(char** __t1350t, uint64_t* __t1351t, uint16_t* __t1352t, uint16_t* __t1353t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1350t=unsafe_ptr;
  *__t1351t=unsafe_size;
  *__t1352t=unsafe_offset;
  *__t1353t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1354t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1354t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1355t) {
  char* allocated=*__t1355t;
  if(allocated){
  free(allocated);
  }
  *__t1355t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1356t) {
  int value=0;
  *__t1356t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1357t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1357t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1358t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1358t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1359t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1360t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1361t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1361t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1362t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1362t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1363t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1364t) {
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
  *__t1364t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1365t, uint64_t* __t1366t, uint16_t* __t1367t, uint16_t* __t1368t, uint64_t size, char** __t1369t, uint64_t* __t1370t, uint16_t* __t1371t, uint16_t* __t1372t) {
  char* buffer__unsafe_ptr=*__t1365t;
  uint64_t buffer__unsafe_size=*__t1366t;
  uint16_t buffer__unsafe_offset=*__t1367t;
  uint16_t buffer__unsafe_align=*__t1368t;
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
  *__t1365t=buffer__unsafe_ptr;
  *__t1366t=buffer__unsafe_size;
  *__t1367t=buffer__unsafe_offset;
  *__t1368t=buffer__unsafe_align;
  *__t1369t=__t520t__unsafe_ptr;
  *__t1370t=__t520t__unsafe_size;
  *__t1371t=__t520t__unsafe_offset;
  *__t1372t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1373t) {
  goto __t_return;
  __t_return:
  *__t1373t=buffer__unsafe_size;
}

int list__t603t(char** __t1374t, uint64_t* __t1375t, uint16_t* __t1376t, uint16_t* __t1377t, char** __t1378t, uint64_t* __t1379t, uint16_t* __t1380t, uint16_t* __t1381t, uint64_t* __t1382t) {
  char* _buffer__unsafe_ptr=*__t1374t;
  uint64_t _buffer__unsafe_size=*__t1375t;
  uint16_t _buffer__unsafe_offset=*__t1376t;
  uint16_t _buffer__unsafe_align=*__t1377t;
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
  *__t1374t=_buffer__unsafe_ptr;
  *__t1375t=_buffer__unsafe_size;
  *__t1376t=_buffer__unsafe_offset;
  *__t1377t=_buffer__unsafe_align;
  *__t1378t=buffer__unsafe_ptr;
  *__t1379t=buffer__unsafe_size;
  *__t1380t=buffer__unsafe_offset;
  *__t1381t=buffer__unsafe_align;
  *__t1382t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1383t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1383t=z;
}

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t1384t) {
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
  *__t1384t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1385t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1385t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1386t) {
  *__t1386t=to;
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

static inline __attribute__((always_inline)) int resize__t561t(char** __t1389t, uint64_t* __t1390t, uint16_t* __t1391t, uint16_t* __t1392t, uint64_t size, char** __t1393t, uint64_t* __t1394t, uint16_t* __t1395t, uint16_t* __t1396t) {
  char* buffer__unsafe_ptr=*__t1389t;
  uint64_t buffer__unsafe_size=*__t1390t;
  uint16_t buffer__unsafe_offset=*__t1391t;
  uint16_t buffer__unsafe_align=*__t1392t;
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

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1397t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1397t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1398t, uint64_t* __t1399t, uint16_t* __t1400t, uint16_t* __t1401t, uint64_t i, char** __t1402t) {
  char* buffer__unsafe_ptr=*__t1398t;
  uint64_t buffer__unsafe_size=*__t1399t;
  uint16_t buffer__unsafe_offset=*__t1400t;
  uint16_t buffer__unsafe_align=*__t1401t;
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
  *__t1398t=buffer__unsafe_ptr;
  *__t1399t=buffer__unsafe_size;
  *__t1400t=buffer__unsafe_offset;
  *__t1401t=buffer__unsafe_align;
  *__t1402t=__t594t__;
  
  return __t_errcode;
}

int push__t616t(char** __t1403t, uint64_t* __t1404t, uint16_t* __t1405t, uint16_t* __t1406t, uint64_t* __t1407t, char** __t1408t) {
  char* l__buffer__unsafe_ptr=*__t1403t;
  uint64_t l__buffer__unsafe_size=*__t1404t;
  uint16_t l__buffer__unsafe_offset=*__t1405t;
  uint16_t l__buffer__unsafe_align=*__t1406t;
  uint64_t l__length=*__t1407t;
  uint64_t prev_length=0;
  uint64_t __t617t__=0;
  char __t618t__=0;
  uint64_t __t619t=0;
  uint64_t __t620t__=0;
  uint64_t __t621t=0;
  uint64_t __t622t__=0;
  uint64_t __t623t__=0;
  char* __t624t__unsafe_ptr=0;
  uint64_t __t624t__unsafe_size=0;
  uint16_t __t624t__unsafe_offset=0;
  uint16_t __t624t__unsafe_align=0;
  uint64_t __t625t=0;
  uint64_t __t626t__=0;
  char* __t627t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t602t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t617t__);
  ge__t320t(prev_length,__t617t__,&__t618t__);
  if(__t618t__){
  __t619t=2;
  __t_errcode=div__t221t(prev_length,__t619t,&__t620t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t621t=1;
  add__t171t(__t620t__,__t621t,&__t622t__);
  add__t171t(prev_length,__t622t__,&__t623t__);
  __t_errcode=resize__t561t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t623t__,&__t624t__unsafe_ptr,&__t624t__unsafe_size,&__t624t__unsafe_offset,&__t624t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t624t__unsafe_ptr;
  l__buffer__unsafe_size=__t624t__unsafe_size;
  l__buffer__unsafe_offset=__t624t__unsafe_offset;
  l__buffer__unsafe_align=__t624t__unsafe_align;
  }
  __t625t=1;
  add__t171t(prev_length,__t625t,&__t626t__);
  l__length=__t626t__;
  __t_errcode=mutget__t588t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t627t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1403t=l__buffer__unsafe_ptr;
  *__t1404t=l__buffer__unsafe_size;
  *__t1405t=l__buffer__unsafe_offset;
  *__t1406t=l__buffer__unsafe_align;
  *__t1407t=l__length;
  *__t1408t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t613t(char** __t1409t, uint64_t* __t1410t, uint16_t* __t1411t, uint16_t* __t1412t, uint64_t* __t1413t, uint64_t pos, char** __t1414t) {
  char* l__buffer__unsafe_ptr=*__t1409t;
  uint64_t l__buffer__unsafe_size=*__t1410t;
  uint16_t l__buffer__unsafe_offset=*__t1411t;
  uint16_t l__buffer__unsafe_align=*__t1412t;
  uint64_t l__length=*__t1413t;
  char __t614t__=0;
  char* __t615t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,l__length,&__t614t__);
  if(__t614t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t588t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t615t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t615t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1409t=l__buffer__unsafe_ptr;
  *__t1410t=l__buffer__unsafe_size;
  *__t1411t=l__buffer__unsafe_offset;
  *__t1412t=l__buffer__unsafe_align;
  *__t1413t=l__length;
  *__t1414t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1415t) {
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
  *__t1415t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t610t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1416t) {
  char __t611t__=0;
  char* __t612t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,l__length,&__t611t__);
  if(__t611t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t595t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t612t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1416t=__t612t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1325t() {
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
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1333t__=0;
  double __t1334t=0;
  char* __t1335t__=0;
  double __t1336t=0;
  char* __t1337t__=0;
  double __t1338t=0;
  uint64_t __t1339t=0;
  char* __t1340t__=0;
  double __t1341t=0;
  uint64_t __t1342t=0;
  char* __t1343t__=0;
  double __t1344t__value=0;
  uint64_t __t1346t=0;
  char* __t1347t__=0;
  double __t1348t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1326t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align);
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
  li__buffer__unsafe_size=__t1332t__buffer__unsafe_size;
  li__length=__t1332t__length;
  __t_errcode=push__t616t(&__t1329t__unsafe_ptr,&li__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&li__length,&__t1333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1334t=0.1;
  if(!__t1333t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1333t__,&__t1334t,8);
  __t_errcode=push__t616t(&__t1329t__unsafe_ptr,&li__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&li__length,&__t1335t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1336t=0.1;
  if(!__t1335t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1335t__,&__t1336t,8);
  __t_errcode=push__t616t(&__t1329t__unsafe_ptr,&li__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&li__length,&__t1337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1338t=0.1;
  if(!__t1337t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1337t__,&__t1338t,8);
  __t1339t=1;
  __t_errcode=mutget__t613t(&__t1329t__unsafe_ptr,&li__buffer__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align,&li__length,__t1339t,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1341t=0.2;
  if(!__t1340t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1340t__,&__t1341t,8);
  __t1342t=0;
  __t_errcode=get__t610t(__t1329t__unsafe_ptr,li__buffer__unsafe_size,__t1329t__unsafe_offset,__t1329t__unsafe_align,li__length,__t1342t,&__t1343t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1343t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1344t__value,__t1343t__,8);
  print__t374t(__t1344t__value);
  __t1346t=1;
  __t_errcode=get__t610t(__t1329t__unsafe_ptr,li__buffer__unsafe_size,__t1329t__unsafe_offset,__t1329t__unsafe_align,li__length,__t1346t,&__t1347t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1347t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1348t__value,__t1347t__,8);
  print__t374t(__t1348t__value);
  
  __t_failure:exists__t436t(__t1330t__buffer__unsafe_ptr,&__t1331t____t606t____t511t__);
  if(__t1331t____t606t____t511t__){
  __t1330t__buffer__unsafe_ptr=__t1330t__buffer__unsafe_ptr;
  free__t502t(&__t1330t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1325t();return 0;}