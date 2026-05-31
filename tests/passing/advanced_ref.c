#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1332t="456";
const char* const __t371t="\n";
const char* const __t1330t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1322t(char** __t1339t, uint64_t* __t1340t, uint16_t* __t1341t, uint16_t* __t1342t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1339t=unsafe_ptr;
  *__t1340t=unsafe_size;
  *__t1341t=unsafe_offset;
  *__t1342t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1343t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1343t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1344t) {
  char* allocated=*__t1344t;
  if(allocated){
  free(allocated);
  }
  *__t1344t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1345t) {
  int value=0;
  *__t1345t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1346t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1346t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1347t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1347t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1348t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1348t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1349t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1349t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1350t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1350t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1351t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1351t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1352t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1352t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1353t) {
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
  *__t1353t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1354t, uint64_t* __t1355t, uint16_t* __t1356t, uint16_t* __t1357t, uint64_t size, char** __t1358t, uint64_t* __t1359t, uint16_t* __t1360t, uint16_t* __t1361t) {
  char* buffer__unsafe_ptr=*__t1354t;
  uint64_t buffer__unsafe_size=*__t1355t;
  uint16_t buffer__unsafe_offset=*__t1356t;
  uint16_t buffer__unsafe_align=*__t1357t;
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
  *__t1354t=buffer__unsafe_ptr;
  *__t1355t=buffer__unsafe_size;
  *__t1356t=buffer__unsafe_offset;
  *__t1357t=buffer__unsafe_align;
  *__t1358t=buffer__unsafe_ptr;
  *__t1359t=buffer__unsafe_size;
  *__t1360t=buffer__unsafe_offset;
  *__t1361t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1362t) {
  goto __t_return;
  __t_return:
  *__t1362t=buffer__unsafe_size;
}

int list__t599t(char** __t1363t, uint64_t* __t1364t, uint16_t* __t1365t, uint16_t* __t1366t, char** __t1367t, uint64_t* __t1368t, uint16_t* __t1369t, uint16_t* __t1370t, uint64_t* __t1371t) {
  char* _buffer__unsafe_ptr=*__t1363t;
  uint64_t _buffer__unsafe_size=*__t1364t;
  uint16_t _buffer__unsafe_offset=*__t1365t;
  uint16_t _buffer__unsafe_align=*__t1366t;
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
  *__t1363t=_buffer__unsafe_ptr;
  *__t1364t=_buffer__unsafe_size;
  *__t1365t=_buffer__unsafe_offset;
  *__t1366t=_buffer__unsafe_align;
  *__t1367t=buffer__unsafe_ptr;
  *__t1368t=buffer__unsafe_size;
  *__t1369t=buffer__unsafe_offset;
  *__t1370t=buffer__unsafe_align;
  *__t1371t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1372t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1372t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1373t) {
  *__t1373t=to;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1374t) {
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
  *__t1374t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1375t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) int resize__t557t(char** __t1376t, uint64_t* __t1377t, uint16_t* __t1378t, uint16_t* __t1379t, uint64_t size, char** __t1380t, uint64_t* __t1381t, uint16_t* __t1382t, uint16_t* __t1383t) {
  char* buffer__unsafe_ptr=*__t1376t;
  uint64_t buffer__unsafe_size=*__t1377t;
  uint16_t buffer__unsafe_offset=*__t1378t;
  uint16_t buffer__unsafe_align=*__t1379t;
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
  *__t1376t=buffer__unsafe_ptr;
  *__t1377t=buffer__unsafe_size;
  *__t1378t=buffer__unsafe_offset;
  *__t1379t=buffer__unsafe_align;
  *__t1380t=buffer__unsafe_ptr;
  *__t1381t=buffer__unsafe_size;
  *__t1382t=buffer__unsafe_offset;
  *__t1383t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1384t, uint64_t* __t1385t, uint16_t* __t1386t, uint16_t* __t1387t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1384t=unsafe_ptr;
  *__t1385t=unsafe_size;
  *__t1386t=unsafe_offset;
  *__t1387t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1388t) {
  *__t1388t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1389t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1390t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1390t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1391t) {
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
  *__t1391t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1392t, uint64_t* __t1393t, uint64_t* __t1394t, char* __t1395t) {
  goto __t_return;
  __t_return:
  *__t1392t=unsafe_ptr;
  *__t1393t=dat__pos;
  *__t1394t=dat__length;
  *__t1395t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1396t, uint64_t* __t1397t, uint64_t* __t1398t, char* __t1399t) {
  char* unsafe_ptr=0;
  uint64_t __t631t__=0;
  uint64_t __t632t=0;
  char __t633t__=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  char* __t637t__unsafe_ptr=0;
  uint64_t __t637t__dat__pos=0;
  uint64_t __t637t__dat__length=0;
  char __t637t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t631t__);
  __t632t=1;
  neq__t143t(__t631t__,__t632t,&__t633t__);
  if(__t633t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t634t__);
  __t635t=0;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t626t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t637t__unsafe_ptr,&__t637t__dat__pos,&__t637t__dat__length,&__t637t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1396t=__t637t__unsafe_ptr;
  *__t1397t=__t637t__dat__pos;
  *__t1398t=__t637t__dat__length;
  *__t1399t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1400t, uint64_t* __t1401t, uint64_t* __t1402t, char* __t1403t) {
  uint64_t __t663t=0;
  char __t664t__=0;
  char* __t665t__=0;
  char __t666t__value=0;
  char first=0;
  char* __t667t__unsafe_ptr=0;
  uint64_t __t667t__dat__pos=0;
  uint64_t __t667t__dat__length=0;
  char __t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t663t=0;
  neq__t143t(length,__t663t,&__t664t__);
  if(__t664t__){
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t666t__value,__t665t__,1);
  first=__t666t__value;
  }
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t667t__unsafe_ptr,&__t667t__dat__pos,&__t667t__dat__length,&__t667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1400t=__t667t__unsafe_ptr;
  *__t1401t=__t667t__dat__pos;
  *__t1402t=__t667t__dat__length;
  *__t1403t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1404t, uint64_t* __t1405t, uint64_t* __t1406t, char* __t1407t) {
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__unsafe_size=0;
  uint16_t __t670t__unsafe_offset=0;
  uint16_t __t670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t671t__=0;
  uint64_t length=0;
  uint64_t __t672t=0;
  uint64_t __t673t__=0;
  uint64_t __t674t=0;
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__dat__pos=0;
  uint64_t __t675t__dat__length=0;
  char __t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  __t670t__unsafe_ptr=__t669t__unsafe_ptr;
  __t670t__unsafe_size=__t669t__unsafe_size;
  __t670t__unsafe_offset=__t669t__unsafe_offset;
  __t670t__unsafe_align=__t669t__unsafe_align;
  buf__unsafe_ptr=__t670t__unsafe_ptr;
  buf__unsafe_size=__t670t__unsafe_size;
  buf__unsafe_offset=__t670t__unsafe_offset;
  buf__unsafe_align=__t670t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t671t__);
  buf__unsafe_ptr=__t671t__;
  if(c){
  length=strlen(c);
  }
  __t672t=1;
  add__t171t(length,__t672t,&__t673t__);
  buf__unsafe_size=__t673t__;
  __t674t=0;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t674t,length,&__t675t__unsafe_ptr,&__t675t__dat__pos,&__t675t__dat__length,&__t675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1404t=__t675t__unsafe_ptr;
  *__t1405t=__t675t__dat__pos;
  *__t1406t=__t675t__dat__length;
  *__t1407t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1408t) {
  goto __t_return;
  __t_return:
  *__t1408t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t147t(char* x, char* y, char* __t1409t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1409t=z;
}

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t1410t) {
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
  *__t1410t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1411t, uint64_t* __t1412t, uint64_t* __t1413t, char* __t1414t) {
  goto __t_return;
  __t_return:
  *__t1411t=other__unsafe_ptr;
  *__t1412t=other__dat__pos;
  *__t1413t=other__dat__length;
  *__t1414t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1415t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1415t=z;
}

static inline __attribute__((always_inline)) int copy__t738t(char** __t1416t, uint64_t* __t1417t, uint16_t* __t1418t, uint16_t* __t1419t, uint64_t* __t1420t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1421t, uint64_t* __t1422t, uint64_t* __t1423t, char* __t1424t) {
  char* buf__unsafe_ptr=*__t1416t;
  uint64_t buf__unsafe_size=*__t1417t;
  uint16_t buf__unsafe_offset=*__t1418t;
  uint16_t buf__unsafe_align=*__t1419t;
  uint64_t pos=*__t1420t;
  char* __t739t__unsafe_ptr=0;
  uint64_t __t739t__dat__pos=0;
  uint64_t __t739t__dat__length=0;
  char __t739t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t740t__=0;
  uint64_t __t741t__=0;
  uint64_t next_pos=0;
  uint64_t __t742t__=0;
  char __t743t__=0;
  uint64_t __t744t=0;
  uint64_t __t745t__=0;
  uint64_t prev_pos=0;
  char* __t746t__unsafe_ptr=0;
  uint64_t __t746t__dat__pos=0;
  uint64_t __t746t__dat__length=0;
  char __t746t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t739t__unsafe_ptr,&__t739t__dat__pos,&__t739t__dat__length,&__t739t__dat__first);
  other__unsafe_ptr=__t739t__unsafe_ptr;
  other__dat__pos=__t739t__dat__pos;
  other__dat__length=__t739t__dat__length;
  other__dat__first=__t739t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t740t__);
  add__t171t(pos,__t740t__,&__t741t__);
  next_pos=__t741t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t742t__);
  gt__t272t(next_pos,__t742t__,&__t743t__);
  if(__t743t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t744t=0;
  add__t171t(pos,__t744t,&__t745t__);
  prev_pos=__t745t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t746t__unsafe_ptr,&__t746t__dat__pos,&__t746t__dat__length,&__t746t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1416t=buf__unsafe_ptr;
  *__t1417t=buf__unsafe_size;
  *__t1418t=buf__unsafe_offset;
  *__t1419t=buf__unsafe_align;
  *__t1420t=pos;
  *__t1421t=__t746t__unsafe_ptr;
  *__t1422t=__t746t__dat__pos;
  *__t1423t=__t746t__dat__length;
  *__t1424t=__t746t__dat__first;
  
  return __t_errcode;
}

int copy__t804t(char** __t1425t, uint64_t* __t1426t, uint16_t* __t1427t, uint16_t* __t1428t, uint64_t* __t1429t, const char* _other, char** __t1430t, uint64_t* __t1431t, uint64_t* __t1432t, char* __t1433t) {
  char* li__buffer__unsafe_ptr=*__t1425t;
  uint64_t li__buffer__unsafe_size=*__t1426t;
  uint16_t li__buffer__unsafe_offset=*__t1427t;
  uint16_t li__buffer__unsafe_align=*__t1428t;
  uint64_t li__length=*__t1429t;
  char* __t805t__unsafe_ptr=0;
  uint64_t __t805t__dat__pos=0;
  uint64_t __t805t__dat__length=0;
  char __t805t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t806t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t807t__=0;
  uint64_t __t808t__=0;
  uint64_t prev_length=0;
  char __t809t__=0;
  uint64_t __t810t__=0;
  char __t811t__=0;
  uint64_t __t812t=0;
  uint64_t __t813t__=0;
  uint64_t __t814t=0;
  uint64_t __t815t__=0;
  uint64_t __t816t__=0;
  char* __t817t__unsafe_ptr=0;
  uint64_t __t817t__unsafe_size=0;
  uint16_t __t817t__unsafe_offset=0;
  uint16_t __t817t__unsafe_align=0;
  char* __t818t__unsafe_ptr=0;
  uint64_t __t818t__dat__pos=0;
  uint64_t __t818t__dat__length=0;
  char __t818t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(_other,&__t805t__unsafe_ptr,&__t805t__dat__pos,&__t805t__dat__length,&__t805t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t805t__unsafe_ptr;
  other__dat__pos=__t805t__dat__pos;
  other__dat__length=__t805t__dat__length;
  other__dat__first=__t805t__dat__first;
  __t806t=li__length;
  prev_prev_length=__t806t;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t807t__);
  add__t171t(li__length,__t807t__,&__t808t__);
  prev_length=__t808t__;
  eq__t147t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t809t__);
  if(__t809t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t598t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t810t__);
  ge__t320t(prev_length,__t810t__,&__t811t__);
  if(__t811t__){
  __t812t=2;
  __t_errcode=div__t221t(prev_length,__t812t,&__t813t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t814t=1;
  add__t171t(__t813t__,__t814t,&__t815t__);
  add__t171t(prev_length,__t815t__,&__t816t__);
  __t_errcode=resize__t557t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t816t__,&__t817t__unsafe_ptr,&__t817t__unsafe_size,&__t817t__unsafe_offset,&__t817t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t817t__unsafe_ptr;
  li__buffer__unsafe_size=__t817t__unsafe_size;
  li__buffer__unsafe_offset=__t817t__unsafe_offset;
  li__buffer__unsafe_align=__t817t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t738t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t818t__unsafe_ptr,&__t818t__dat__pos,&__t818t__dat__length,&__t818t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1425t=li__buffer__unsafe_ptr;
  *__t1426t=li__buffer__unsafe_size;
  *__t1427t=li__buffer__unsafe_offset;
  *__t1428t=li__buffer__unsafe_align;
  *__t1429t=li__length;
  *__t1430t=__t818t__unsafe_ptr;
  *__t1431t=__t818t__dat__pos;
  *__t1432t=__t818t__dat__length;
  *__t1433t=__t818t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1321t(char** __t1434t, uint64_t* __t1435t, uint64_t* __t1436t, char* __t1437t, char** __t1438t, uint64_t* __t1439t, uint64_t* __t1440t, char* __t1441t) {
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
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1328t=0;
  char* __t1329t__unsafe_ptr=0;
  uint64_t __t1329t__unsafe_size=0;
  uint16_t __t1329t__unsafe_offset=0;
  uint16_t __t1329t__unsafe_align=0;
  char* __t1331t__unsafe_ptr=0;
  uint64_t __t1331t__dat__pos=0;
  uint64_t __t1331t__dat__length=0;
  char __t1331t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1333t__unsafe_ptr=0;
  uint64_t __t1333t__dat__pos=0;
  uint64_t __t1333t__dat__length=0;
  char __t1333t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t__unsafe_ptr=__t1324t__unsafe_ptr;
  __t1325t__unsafe_size=__t1324t__unsafe_size;
  __t1325t__unsafe_offset=__t1324t__unsafe_offset;
  __t1325t__unsafe_align=__t1324t__unsafe_align;
  __t_errcode=list__t599t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,&__t1326t__buffer__unsafe_ptr,&__t1326t__buffer__unsafe_size,&__t1326t__buffer__unsafe_offset,&__t1326t__buffer__unsafe_align,&__t1326t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1328t=100;
  __t_errcode=resize__t557t(&__t1326t__buffer__unsafe_ptr,&__t1326t__buffer__unsafe_size,&__t1326t__buffer__unsafe_offset,&__t1326t__buffer__unsafe_align,__t1328t,&__t1329t__unsafe_ptr,&__t1329t__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t804t(&__t1326t__buffer__unsafe_ptr,&__t1326t__buffer__unsafe_size,&__t1326t__buffer__unsafe_offset,&__t1326t__buffer__unsafe_align,&__t1326t__length,__t1330t,&__t1331t__unsafe_ptr,&__t1331t__dat__pos,&__t1331t__dat__length,&__t1331t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1331t__dat__pos;
  s1__dat__length=__t1331t__dat__length;
  s1__dat__first=__t1331t__dat__first;
  __t_errcode=copy__t804t(&__t1326t__buffer__unsafe_ptr,&__t1326t__buffer__unsafe_size,&__t1326t__buffer__unsafe_offset,&__t1326t__buffer__unsafe_align,&__t1326t__length,__t1332t,&__t1333t__unsafe_ptr,&__t1333t__dat__pos,&__t1333t__dat__length,&__t1333t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1333t__dat__pos;
  s2__dat__length=__t1333t__dat__length;
  s2__dat__first=__t1333t__dat__first;
  s1__unsafe_ptr=__t1326t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1326t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(s1__unsafe_ptr,&__t1327t____t602t____t511t__);
  if(__t1327t____t602t____t511t__){
  free__t502t(&s1__unsafe_ptr);
  }
  __t_return:
  *__t1434t=s1__unsafe_ptr;
  *__t1435t=s1__dat__pos;
  *__t1436t=s1__dat__length;
  *__t1437t=s1__dat__first;
  *__t1438t=s2__unsafe_ptr;
  *__t1439t=s2__dat__pos;
  *__t1440t=s2__dat__length;
  *__t1441t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1334t() {
  char* __t1335t__s1__unsafe_ptr=0;
  uint64_t __t1335t__s1__dat__pos=0;
  uint64_t __t1335t__s1__dat__length=0;
  char __t1335t__s1__dat__first=0;
  char* __t1335t__s2__unsafe_ptr=0;
  uint64_t __t1335t__s2__dat__pos=0;
  uint64_t __t1335t__s2__dat__length=0;
  char __t1335t__s2__dat__first=0;
  char __t1336t____t1327t____t602t____t511t__=0;
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
  __t_errcode=test__t1321t(&__t1335t__s1__unsafe_ptr,&__t1335t__s1__dat__pos,&__t1335t__s1__dat__length,&__t1335t__s1__dat__first,&__t1335t__s2__unsafe_ptr,&__t1335t__s2__dat__pos,&__t1335t__s2__dat__length,&__t1335t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1335t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1335t__s1__dat__pos;
  s__s1__dat__length=__t1335t__s1__dat__length;
  s__s1__dat__first=__t1335t__s1__dat__first;
  s__s2__unsafe_ptr=__t1335t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1335t__s2__dat__pos;
  s__s2__dat__length=__t1335t__s2__dat__length;
  s__s2__dat__first=__t1335t__s2__dat__first;
  print__t780t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t780t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t436t(__t1335t__s1__unsafe_ptr,&__t1336t____t1327t____t602t____t511t__);
  if(__t1336t____t1327t____t602t____t511t__){
  free__t502t(&__t1335t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1334t();return 0;}