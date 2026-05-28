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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1322t(char** __t1345t, uint64_t* __t1346t, uint16_t* __t1347t, uint16_t* __t1348t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1345t=unsafe_ptr;
  *__t1346t=unsafe_size;
  *__t1347t=unsafe_offset;
  *__t1348t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1349t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1349t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1350t) {
  char* allocated=*__t1350t;
  if(allocated){
  free(allocated);
  }
  *__t1350t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1351t) {
  int value=0;
  *__t1351t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1352t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1352t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1353t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1353t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1354t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1354t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1355t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1355t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1356t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1356t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1357t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1357t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1358t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1358t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1359t) {
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
  *__t1359t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1360t, uint64_t* __t1361t, uint16_t* __t1362t, uint16_t* __t1363t, uint64_t size, char** __t1364t, uint64_t* __t1365t, uint16_t* __t1366t, uint16_t* __t1367t) {
  char* buffer__unsafe_ptr=*__t1360t;
  uint64_t buffer__unsafe_size=*__t1361t;
  uint16_t buffer__unsafe_offset=*__t1362t;
  uint16_t buffer__unsafe_align=*__t1363t;
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
  *__t1360t=buffer__unsafe_ptr;
  *__t1361t=buffer__unsafe_size;
  *__t1362t=buffer__unsafe_offset;
  *__t1363t=buffer__unsafe_align;
  *__t1364t=buffer__unsafe_ptr;
  *__t1365t=buffer__unsafe_size;
  *__t1366t=buffer__unsafe_offset;
  *__t1367t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1368t) {
  goto __t_return;
  __t_return:
  *__t1368t=buffer__unsafe_size;
}

int list__t599t(char** __t1369t, uint64_t* __t1370t, uint16_t* __t1371t, uint16_t* __t1372t, char** __t1373t, uint64_t* __t1374t, uint16_t* __t1375t, uint16_t* __t1376t, uint64_t* __t1377t) {
  char* _buffer__unsafe_ptr=*__t1369t;
  uint64_t _buffer__unsafe_size=*__t1370t;
  uint16_t _buffer__unsafe_offset=*__t1371t;
  uint16_t _buffer__unsafe_align=*__t1372t;
  uint64_t __t600t=0;
  char* __t601t__unsafe_ptr=0;
  uint64_t __t601t__unsafe_size=0;
  uint16_t __t601t__unsafe_offset=0;
  uint16_t __t601t__unsafe_align=0;
  char __t602t____t511t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t603t__=0;
  uint64_t __t604t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t600t=1;
  __t_errcode=alloc__t509t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t600t,&__t601t__unsafe_ptr,&__t601t__unsafe_size,&__t601t__unsafe_offset,&__t601t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t601t__unsafe_ptr;
  buffer__unsafe_size=__t601t__unsafe_size;
  buffer__unsafe_offset=__t601t__unsafe_offset;
  buffer__unsafe_align=__t601t__unsafe_align;
  len__t598t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t603t__);
  __t604t=__t603t__;
  length=__t604t;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t602t____t511t__);
  if(__t602t____t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1369t=_buffer__unsafe_ptr;
  *__t1370t=_buffer__unsafe_size;
  *__t1371t=_buffer__unsafe_offset;
  *__t1372t=_buffer__unsafe_align;
  *__t1373t=buffer__unsafe_ptr;
  *__t1374t=buffer__unsafe_size;
  *__t1375t=buffer__unsafe_offset;
  *__t1376t=buffer__unsafe_align;
  *__t1377t=length;
  
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

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t1379t) {
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
  *__t1379t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1380t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1381t) {
  *__t1381t=to;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1382t) {
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
  *__t1382t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1383t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1383t=z;
}

static inline __attribute__((always_inline)) int resize__t557t(char** __t1384t, uint64_t* __t1385t, uint16_t* __t1386t, uint16_t* __t1387t, uint64_t size, char** __t1388t, uint64_t* __t1389t, uint16_t* __t1390t, uint16_t* __t1391t) {
  char* buffer__unsafe_ptr=*__t1384t;
  uint64_t buffer__unsafe_size=*__t1385t;
  uint16_t buffer__unsafe_offset=*__t1386t;
  uint16_t buffer__unsafe_align=*__t1387t;
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
  *__t1384t=buffer__unsafe_ptr;
  *__t1385t=buffer__unsafe_size;
  *__t1386t=buffer__unsafe_offset;
  *__t1387t=buffer__unsafe_align;
  *__t1388t=buffer__unsafe_ptr;
  *__t1389t=buffer__unsafe_size;
  *__t1390t=buffer__unsafe_offset;
  *__t1391t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1392t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1392t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1393t, uint64_t* __t1394t, uint16_t* __t1395t, uint16_t* __t1396t, uint64_t i, char** __t1397t) {
  char* buffer__unsafe_ptr=*__t1393t;
  uint64_t buffer__unsafe_size=*__t1394t;
  uint16_t buffer__unsafe_offset=*__t1395t;
  uint16_t buffer__unsafe_align=*__t1396t;
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
  *__t1393t=buffer__unsafe_ptr;
  *__t1394t=buffer__unsafe_size;
  *__t1395t=buffer__unsafe_offset;
  *__t1396t=buffer__unsafe_align;
  *__t1397t=__t590t__;
  
  return __t_errcode;
}

int push__t612t(char** __t1398t, uint64_t* __t1399t, uint16_t* __t1400t, uint16_t* __t1401t, uint64_t* __t1402t, char** __t1403t) {
  char* l__buffer__unsafe_ptr=*__t1398t;
  uint64_t l__buffer__unsafe_size=*__t1399t;
  uint16_t l__buffer__unsafe_offset=*__t1400t;
  uint16_t l__buffer__unsafe_align=*__t1401t;
  uint64_t l__length=*__t1402t;
  uint64_t prev_length=0;
  uint64_t __t613t__=0;
  char __t614t__=0;
  uint64_t __t615t=0;
  uint64_t __t616t__=0;
  uint64_t __t617t=0;
  uint64_t __t618t__=0;
  uint64_t __t619t__=0;
  char* __t620t__unsafe_ptr=0;
  uint64_t __t620t__unsafe_size=0;
  uint16_t __t620t__unsafe_offset=0;
  uint16_t __t620t__unsafe_align=0;
  uint64_t __t621t=0;
  uint64_t __t622t__=0;
  char* __t623t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t598t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t613t__);
  ge__t320t(prev_length,__t613t__,&__t614t__);
  if(__t614t__){
  __t615t=2;
  __t_errcode=div__t221t(prev_length,__t615t,&__t616t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t617t=1;
  add__t171t(__t616t__,__t617t,&__t618t__);
  add__t171t(prev_length,__t618t__,&__t619t__);
  __t_errcode=resize__t557t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t619t__,&__t620t__unsafe_ptr,&__t620t__unsafe_size,&__t620t__unsafe_offset,&__t620t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t620t__unsafe_ptr;
  l__buffer__unsafe_size=__t620t__unsafe_size;
  l__buffer__unsafe_offset=__t620t__unsafe_offset;
  l__buffer__unsafe_align=__t620t__unsafe_align;
  }
  __t621t=1;
  add__t171t(prev_length,__t621t,&__t622t__);
  l__length=__t622t__;
  __t_errcode=mutget__t584t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t623t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1398t=l__buffer__unsafe_ptr;
  *__t1399t=l__buffer__unsafe_size;
  *__t1400t=l__buffer__unsafe_offset;
  *__t1401t=l__buffer__unsafe_align;
  *__t1402t=l__length;
  *__t1403t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t609t(char** __t1404t, uint64_t* __t1405t, uint16_t* __t1406t, uint16_t* __t1407t, uint64_t* __t1408t, uint64_t pos, char** __t1409t) {
  char* l__buffer__unsafe_ptr=*__t1404t;
  uint64_t l__buffer__unsafe_size=*__t1405t;
  uint16_t l__buffer__unsafe_offset=*__t1406t;
  uint16_t l__buffer__unsafe_align=*__t1407t;
  uint64_t l__length=*__t1408t;
  char __t610t__=0;
  char* __t611t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,l__length,&__t610t__);
  if(__t610t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t584t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t611t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t611t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1404t=l__buffer__unsafe_ptr;
  *__t1405t=l__buffer__unsafe_size;
  *__t1406t=l__buffer__unsafe_offset;
  *__t1407t=l__buffer__unsafe_align;
  *__t1408t=l__length;
  *__t1409t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1410t) {
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
  *__t1410t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t606t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1411t) {
  char __t607t__=0;
  char* __t608t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,l__length,&__t607t__);
  if(__t607t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t591t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1411t=__t608t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1321t() {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  char* __t1325t__unsafe_ptr=0;
  uint64_t __t1325t__unsafe_size=0;
  uint16_t __t1325t__unsafe_offset=0;
  uint16_t __t1325t__unsafe_align=0;
  char* __t1326t__buffer__unsafe_ptr=0;
  uint64_t __t1326t__buffer__unsafe_size=0;
  uint16_t __t1326t__buffer__unsafe_offset=0;
  uint16_t __t1326t__buffer__unsafe_align=0;
  uint64_t __t1326t__length=0;
  char __t1327t____t602t____t511t__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1328t__=0;
  double __t1329t=0;
  char* __t1330t__=0;
  double __t1331t=0;
  char* __t1332t__=0;
  double __t1333t=0;
  uint64_t __t1334t=0;
  char* __t1335t__=0;
  double __t1336t=0;
  uint64_t __t1337t=0;
  char* __t1338t__=0;
  double __t1339t__value=0;
  uint64_t __t1341t=0;
  char* __t1342t__=0;
  double __t1343t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t__unsafe_ptr=__t1324t__unsafe_ptr;
  __t1325t__unsafe_size=__t1324t__unsafe_size;
  __t1325t__unsafe_offset=__t1324t__unsafe_offset;
  __t1325t__unsafe_align=__t1324t__unsafe_align;
  __t_errcode=list__t599t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1326t__buffer__unsafe_ptr,&__t1326t__buffer__unsafe_size,&__t1326t__buffer__unsafe_offset,&__t1326t__buffer__unsafe_align,&__t1326t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t612t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1325t__unsafe_size,&__t1328t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1329t=0.1;
  if(!__t1328t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1328t__,&__t1329t,8);
  __t_errcode=push__t612t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1325t__unsafe_size,&__t1330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1331t=0.1;
  if(!__t1330t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1330t__,&__t1331t,8);
  __t_errcode=push__t612t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1325t__unsafe_size,&__t1332t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1333t=0.1;
  if(!__t1332t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1332t__,&__t1333t,8);
  __t1334t=1;
  __t_errcode=mutget__t609t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1325t__unsafe_size,__t1334t,&__t1335t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1336t=0.2;
  if(!__t1335t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1335t__,&__t1336t,8);
  __t1337t=0;
  __t_errcode=get__t606t(__t1325t__unsafe_ptr,__t1325t__unsafe_size,__t1325t__unsafe_offset,__t1325t__unsafe_align,__t1325t__unsafe_size,__t1337t,&__t1338t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1338t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1339t__value,__t1338t__,8);
  print__t374t(__t1339t__value);
  __t1341t=1;
  __t_errcode=get__t606t(__t1325t__unsafe_ptr,__t1325t__unsafe_size,__t1325t__unsafe_offset,__t1325t__unsafe_align,__t1325t__unsafe_size,__t1341t,&__t1342t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1342t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1343t__value,__t1342t__,8);
  print__t374t(__t1343t__value);
  
  __t_failure:exists__t436t(__t1326t__buffer__unsafe_ptr,&__t1327t____t602t____t511t__);
  if(__t1327t____t602t____t511t__){
  free__t502t(&__t1326t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}