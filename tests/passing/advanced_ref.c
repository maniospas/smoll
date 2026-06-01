#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1478t="456";
const char* const __t374t="\n";
const char* const __t1476t="123";
static const char* __t_all_errcodes[35] = {"noerr",
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
"unexpected end of console read",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1468t(char** __t1485t, uint64_t* __t1486t, uint16_t* __t1487t, uint16_t* __t1488t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1485t=unsafe_ptr;
  *__t1486t=unsafe_size;
  *__t1487t=unsafe_offset;
  *__t1488t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1489t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1489t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1490t) {
  char* allocated=*__t1490t;
  if(allocated){
  free(allocated);
  }
  *__t1490t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1491t) {
  int value=0;
  *__t1491t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1492t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1492t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1493t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1493t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1494t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1494t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1495t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1495t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1496t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1496t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1497t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1497t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1498t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1498t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1499t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1499t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1500t, uint64_t* __t1501t, uint16_t* __t1502t, uint16_t* __t1503t, uint64_t size, char** __t1504t, uint64_t* __t1505t, uint16_t* __t1506t, uint16_t* __t1507t) {
  char* buffer__unsafe_ptr=*__t1500t;
  uint64_t buffer__unsafe_size=*__t1501t;
  uint16_t buffer__unsafe_offset=*__t1502t;
  uint16_t buffer__unsafe_align=*__t1503t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1500t=buffer__unsafe_ptr;
  *__t1501t=buffer__unsafe_size;
  *__t1502t=buffer__unsafe_offset;
  *__t1503t=buffer__unsafe_align;
  *__t1504t=buffer__unsafe_ptr;
  *__t1505t=buffer__unsafe_size;
  *__t1506t=buffer__unsafe_offset;
  *__t1507t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1508t) {
  goto __t_return;
  __t_return:
  *__t1508t=buffer__unsafe_size;
}

int list__t602t(char** __t1509t, uint64_t* __t1510t, uint16_t* __t1511t, uint16_t* __t1512t, char** __t1513t, uint64_t* __t1514t, uint16_t* __t1515t, uint16_t* __t1516t, uint64_t* __t1517t) {
  char* _buffer__unsafe_ptr=*__t1509t;
  uint64_t _buffer__unsafe_size=*__t1510t;
  uint16_t _buffer__unsafe_offset=*__t1511t;
  uint16_t _buffer__unsafe_align=*__t1512t;
  uint64_t __t603t=0;
  char* __t604t__unsafe_ptr=0;
  uint64_t __t604t__unsafe_size=0;
  uint16_t __t604t__unsafe_offset=0;
  uint16_t __t604t__unsafe_align=0;
  char __t605t____t514t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t606t__=0;
  uint64_t __t607t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t603t=1;
  __t_errcode=alloc__t512t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t603t,&__t604t__unsafe_ptr,&__t604t__unsafe_size,&__t604t__unsafe_offset,&__t604t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t604t__unsafe_ptr;
  buffer__unsafe_size=__t604t__unsafe_size;
  buffer__unsafe_offset=__t604t__unsafe_offset;
  buffer__unsafe_align=__t604t__unsafe_align;
  len__t601t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t606t__);
  __t607t=__t606t__;
  length=__t607t;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t605t____t514t__);
  if(__t605t____t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1509t=_buffer__unsafe_ptr;
  *__t1510t=_buffer__unsafe_size;
  *__t1511t=_buffer__unsafe_offset;
  *__t1512t=_buffer__unsafe_align;
  *__t1513t=buffer__unsafe_ptr;
  *__t1514t=buffer__unsafe_size;
  *__t1515t=buffer__unsafe_offset;
  *__t1516t=buffer__unsafe_align;
  *__t1517t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1518t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1518t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1519t) {
  *__t1519t=to;
}

static inline __attribute__((always_inline)) int realloc__t501t(char* allocated, uint64_t bytes, char** __t1520t) {
  char* new_allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  char* __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t439t(new_allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t504t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1520t=__t504t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1521t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1521t=z;
}

static inline __attribute__((always_inline)) int resize__t560t(char** __t1522t, uint64_t* __t1523t, uint16_t* __t1524t, uint16_t* __t1525t, uint64_t size, char** __t1526t, uint64_t* __t1527t, uint16_t* __t1528t, uint16_t* __t1529t) {
  char* buffer__unsafe_ptr=*__t1522t;
  uint64_t buffer__unsafe_size=*__t1523t;
  uint16_t buffer__unsafe_offset=*__t1524t;
  uint16_t buffer__unsafe_align=*__t1525t;
  char __t561t__=0;
  uint64_t __t562t=0;
  char __t563t__=0;
  uint64_t __t564t__=0;
  uint64_t __t565t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t566t__=0;
  uint64_t __t567t__=0;
  uint64_t bytes=0;
  char* __t568t__=0;
  char __t569t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(buffer__unsafe_size,size,&__t561t__);
  if(__t561t__){
  goto __t_return;
  }
  __t562t=0;
  eq__t119t(buffer__unsafe_size,__t562t,&__t563t__);
  if(__t563t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t564t__);
  mul__t198t(buffer__unsafe_size,__t564t__,&__t565t__);
  prev_bytes=__t565t__;
  buffer__unsafe_size=size;
  nat__t509t(buffer__unsafe_align,&__t566t__);
  mul__t198t(__t566t__,size,&__t567t__);
  bytes=__t567t__;
  __t_errcode=realloc__t501t(buffer__unsafe_ptr,bytes,&__t568t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t568t__;
  lt__t251t(prev_bytes,bytes,&__t569t__);
  if(__t569t__){
  zero__t506t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1522t=buffer__unsafe_ptr;
  *__t1523t=buffer__unsafe_size;
  *__t1524t=buffer__unsafe_offset;
  *__t1525t=buffer__unsafe_align;
  *__t1526t=buffer__unsafe_ptr;
  *__t1527t=buffer__unsafe_size;
  *__t1528t=buffer__unsafe_offset;
  *__t1529t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t1530t, uint64_t* __t1531t, uint16_t* __t1532t, uint16_t* __t1533t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1530t=unsafe_ptr;
  *__t1531t=unsafe_size;
  *__t1532t=unsafe_offset;
  *__t1533t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1534t) {
  *__t1534t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1535t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1536t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1536t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1537t) {
  char __t595t__=0;
  uint64_t __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  char* __t600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t595t__);
  if(__t595t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t596t__);
  mul__t198t(i,__t596t__,&__t597t__);
  nat__t509t(buffer__unsafe_offset,&__t598t__);
  add__t174t(__t597t__,__t598t__,&__t599t__);
  add__t507t(buffer__unsafe_ptr,__t599t__,&__t600t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1537t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1538t, uint64_t* __t1539t, uint64_t* __t1540t, char* __t1541t) {
  goto __t_return;
  __t_return:
  *__t1538t=unsafe_ptr;
  *__t1539t=dat__pos;
  *__t1540t=dat__length;
  *__t1541t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1542t, uint64_t* __t1543t, uint64_t* __t1544t, char* __t1545t) {
  char* unsafe_ptr=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  char* __t640t__unsafe_ptr=0;
  uint64_t __t640t__dat__pos=0;
  uint64_t __t640t__dat__length=0;
  char __t640t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t509t(buf__unsafe_align,&__t634t__);
  __t635t=1;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t637t__);
  __t638t=0;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t629t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t640t__unsafe_ptr,&__t640t__dat__pos,&__t640t__dat__length,&__t640t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1542t=__t640t__unsafe_ptr;
  *__t1543t=__t640t__dat__pos;
  *__t1544t=__t640t__dat__length;
  *__t1545t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1546t, uint64_t* __t1547t, uint64_t* __t1548t, char* __t1549t) {
  uint64_t __t666t=0;
  char __t667t__=0;
  char* __t668t__=0;
  char __t669t__value=0;
  char first=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t666t=0;
  neq__t143t(length,__t666t,&__t667t__);
  if(__t667t__){
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t669t__value,__t668t__,1);
  first=__t669t__value;
  }
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1546t=__t670t__unsafe_ptr;
  *__t1547t=__t670t__dat__pos;
  *__t1548t=__t670t__dat__length;
  *__t1549t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t1550t, uint64_t* __t1551t, uint64_t* __t1552t, char* __t1553t) {
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t674t__=0;
  uint64_t length=0;
  uint64_t __t675t=0;
  uint64_t __t676t__=0;
  uint64_t __t677t=0;
  char* __t678t__unsafe_ptr=0;
  uint64_t __t678t__dat__pos=0;
  uint64_t __t678t__dat__length=0;
  char __t678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  __t673t__unsafe_ptr=__t672t__unsafe_ptr;
  __t673t__unsafe_size=__t672t__unsafe_size;
  __t673t__unsafe_offset=__t672t__unsafe_offset;
  __t673t__unsafe_align=__t672t__unsafe_align;
  buf__unsafe_ptr=__t673t__unsafe_ptr;
  buf__unsafe_size=__t673t__unsafe_size;
  buf__unsafe_offset=__t673t__unsafe_offset;
  buf__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t674t__);
  buf__unsafe_ptr=__t674t__;
  if(c){
  length=strlen(c);
  }
  __t675t=1;
  add__t174t(length,__t675t,&__t676t__);
  buf__unsafe_size=__t676t__;
  __t677t=0;
  __t_errcode=str__t665t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t677t,length,&__t678t__unsafe_ptr,&__t678t__dat__pos,&__t678t__dat__length,&__t678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1550t=__t678t__unsafe_ptr;
  *__t1551t=__t678t__dat__pos;
  *__t1552t=__t678t__dat__length;
  *__t1553t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1554t) {
  goto __t_return;
  __t_return:
  *__t1554t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t147t(char* x, char* y, char* __t1555t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1555t=z;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t1556t) {
  int __t225t__=0;
  uint64_t zero=0;
  char __t226t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t225t__);
  zero=0;
  eq__t119t(y,zero,&__t226t__);
  if(__t226t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1556t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t664t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1557t, uint64_t* __t1558t, uint64_t* __t1559t, char* __t1560t) {
  goto __t_return;
  __t_return:
  *__t1557t=other__unsafe_ptr;
  *__t1558t=other__dat__pos;
  *__t1559t=other__dat__length;
  *__t1560t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1561t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1561t=z;
}

static inline __attribute__((always_inline)) int copy__t741t(char** __t1562t, uint64_t* __t1563t, uint16_t* __t1564t, uint16_t* __t1565t, uint64_t* __t1566t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1567t, uint64_t* __t1568t, uint64_t* __t1569t, char* __t1570t) {
  char* buf__unsafe_ptr=*__t1562t;
  uint64_t buf__unsafe_size=*__t1563t;
  uint16_t buf__unsafe_offset=*__t1564t;
  uint16_t buf__unsafe_align=*__t1565t;
  uint64_t pos=*__t1566t;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__dat__pos=0;
  uint64_t __t742t__dat__length=0;
  char __t742t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t743t__=0;
  uint64_t __t744t__=0;
  uint64_t next_pos=0;
  uint64_t __t745t__=0;
  char __t746t__=0;
  uint64_t __t747t=0;
  uint64_t __t748t__=0;
  uint64_t prev_pos=0;
  char* __t749t__unsafe_ptr=0;
  uint64_t __t749t__dat__pos=0;
  uint64_t __t749t__dat__length=0;
  char __t749t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t742t__unsafe_ptr,&__t742t__dat__pos,&__t742t__dat__length,&__t742t__dat__first);
  other__unsafe_ptr=__t742t__unsafe_ptr;
  other__dat__pos=__t742t__dat__pos;
  other__dat__length=__t742t__dat__length;
  other__dat__first=__t742t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t743t__);
  add__t174t(pos,__t743t__,&__t744t__);
  next_pos=__t744t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t745t__);
  gt__t275t(next_pos,__t745t__,&__t746t__);
  if(__t746t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t747t=0;
  add__t174t(pos,__t747t,&__t748t__);
  prev_pos=__t748t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t749t__unsafe_ptr,&__t749t__dat__pos,&__t749t__dat__length,&__t749t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1562t=buf__unsafe_ptr;
  *__t1563t=buf__unsafe_size;
  *__t1564t=buf__unsafe_offset;
  *__t1565t=buf__unsafe_align;
  *__t1566t=pos;
  *__t1567t=__t749t__unsafe_ptr;
  *__t1568t=__t749t__dat__pos;
  *__t1569t=__t749t__dat__length;
  *__t1570t=__t749t__dat__first;
  
  return __t_errcode;
}

int copy__t807t(char** __t1571t, uint64_t* __t1572t, uint16_t* __t1573t, uint16_t* __t1574t, uint64_t* __t1575t, const char* _other, char** __t1576t, uint64_t* __t1577t, uint64_t* __t1578t, char* __t1579t) {
  char* li__buffer__unsafe_ptr=*__t1571t;
  uint64_t li__buffer__unsafe_size=*__t1572t;
  uint16_t li__buffer__unsafe_offset=*__t1573t;
  uint16_t li__buffer__unsafe_align=*__t1574t;
  uint64_t li__length=*__t1575t;
  char* __t808t__unsafe_ptr=0;
  uint64_t __t808t__dat__pos=0;
  uint64_t __t808t__dat__length=0;
  char __t808t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t809t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t810t__=0;
  uint64_t __t811t__=0;
  uint64_t prev_length=0;
  char __t812t__=0;
  uint64_t __t813t__=0;
  char __t814t__=0;
  uint64_t __t815t=0;
  uint64_t __t816t__=0;
  uint64_t __t817t=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  char* __t820t__unsafe_ptr=0;
  uint64_t __t820t__unsafe_size=0;
  uint16_t __t820t__unsafe_offset=0;
  uint16_t __t820t__unsafe_align=0;
  char* __t821t__unsafe_ptr=0;
  uint64_t __t821t__dat__pos=0;
  uint64_t __t821t__dat__length=0;
  char __t821t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(_other,&__t808t__unsafe_ptr,&__t808t__dat__pos,&__t808t__dat__length,&__t808t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t808t__unsafe_ptr;
  other__dat__pos=__t808t__dat__pos;
  other__dat__length=__t808t__dat__length;
  other__dat__first=__t808t__dat__first;
  __t809t=li__length;
  prev_prev_length=__t809t;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t810t__);
  add__t174t(li__length,__t810t__,&__t811t__);
  prev_length=__t811t__;
  eq__t147t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t812t__);
  if(__t812t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t601t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t813t__);
  ge__t323t(prev_length,__t813t__,&__t814t__);
  if(__t814t__){
  __t815t=2;
  __t_errcode=div__t224t(prev_length,__t815t,&__t816t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t817t=1;
  add__t174t(__t816t__,__t817t,&__t818t__);
  add__t174t(prev_length,__t818t__,&__t819t__);
  __t_errcode=resize__t560t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t819t__,&__t820t__unsafe_ptr,&__t820t__unsafe_size,&__t820t__unsafe_offset,&__t820t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t820t__unsafe_ptr;
  li__buffer__unsafe_size=__t820t__unsafe_size;
  li__buffer__unsafe_offset=__t820t__unsafe_offset;
  li__buffer__unsafe_align=__t820t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t741t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t821t__unsafe_ptr,&__t821t__dat__pos,&__t821t__dat__length,&__t821t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1571t=li__buffer__unsafe_ptr;
  *__t1572t=li__buffer__unsafe_size;
  *__t1573t=li__buffer__unsafe_offset;
  *__t1574t=li__buffer__unsafe_align;
  *__t1575t=li__length;
  *__t1576t=__t821t__unsafe_ptr;
  *__t1577t=__t821t__dat__pos;
  *__t1578t=__t821t__dat__length;
  *__t1579t=__t821t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1467t(char** __t1580t, uint64_t* __t1581t, uint64_t* __t1582t, char* __t1583t, char** __t1584t, uint64_t* __t1585t, uint64_t* __t1586t, char* __t1587t) {
  char* __t1470t__unsafe_ptr=0;
  uint64_t __t1470t__unsafe_size=0;
  uint16_t __t1470t__unsafe_offset=0;
  uint16_t __t1470t__unsafe_align=0;
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__unsafe_size=0;
  uint16_t __t1471t__unsafe_offset=0;
  uint16_t __t1471t__unsafe_align=0;
  char* __t1472t__buffer__unsafe_ptr=0;
  uint64_t __t1472t__buffer__unsafe_size=0;
  uint16_t __t1472t__buffer__unsafe_offset=0;
  uint16_t __t1472t__buffer__unsafe_align=0;
  uint64_t __t1472t__length=0;
  char __t1473t____t605t____t514t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1474t=0;
  char* __t1475t__unsafe_ptr=0;
  uint64_t __t1475t__unsafe_size=0;
  uint16_t __t1475t__unsafe_offset=0;
  uint16_t __t1475t__unsafe_align=0;
  char* __t1477t__unsafe_ptr=0;
  uint64_t __t1477t__dat__pos=0;
  uint64_t __t1477t__dat__length=0;
  char __t1477t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1479t__unsafe_ptr=0;
  uint64_t __t1479t__dat__pos=0;
  uint64_t __t1479t__dat__length=0;
  char __t1479t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1468t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align);
  __t1471t__unsafe_ptr=__t1470t__unsafe_ptr;
  __t1471t__unsafe_size=__t1470t__unsafe_size;
  __t1471t__unsafe_offset=__t1470t__unsafe_offset;
  __t1471t__unsafe_align=__t1470t__unsafe_align;
  __t_errcode=list__t602t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1474t=100;
  __t_errcode=resize__t560t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,__t1474t,&__t1475t__unsafe_ptr,&__t1475t__unsafe_size,&__t1475t__unsafe_offset,&__t1475t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t807t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length,__t1476t,&__t1477t__unsafe_ptr,&__t1477t__dat__pos,&__t1477t__dat__length,&__t1477t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1477t__dat__pos;
  s1__dat__length=__t1477t__dat__length;
  s1__dat__first=__t1477t__dat__first;
  __t_errcode=copy__t807t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length,__t1478t,&__t1479t__unsafe_ptr,&__t1479t__dat__pos,&__t1479t__dat__length,&__t1479t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1479t__dat__pos;
  s2__dat__length=__t1479t__dat__length;
  s2__dat__first=__t1479t__dat__first;
  s1__unsafe_ptr=__t1472t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1472t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t439t(s1__unsafe_ptr,&__t1473t____t605t____t514t__);
  if(__t1473t____t605t____t514t__){
  free__t505t(&s1__unsafe_ptr);
  }
  __t_return:
  *__t1580t=s1__unsafe_ptr;
  *__t1581t=s1__dat__pos;
  *__t1582t=s1__dat__length;
  *__t1583t=s1__dat__first;
  *__t1584t=s2__unsafe_ptr;
  *__t1585t=s2__dat__pos;
  *__t1586t=s2__dat__length;
  *__t1587t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1480t() {
  char* __t1481t__s1__unsafe_ptr=0;
  uint64_t __t1481t__s1__dat__pos=0;
  uint64_t __t1481t__s1__dat__length=0;
  char __t1481t__s1__dat__first=0;
  char* __t1481t__s2__unsafe_ptr=0;
  uint64_t __t1481t__s2__dat__pos=0;
  uint64_t __t1481t__s2__dat__length=0;
  char __t1481t__s2__dat__first=0;
  char __t1482t____t1473t____t605t____t514t__=0;
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
  __t_errcode=test__t1467t(&__t1481t__s1__unsafe_ptr,&__t1481t__s1__dat__pos,&__t1481t__s1__dat__length,&__t1481t__s1__dat__first,&__t1481t__s2__unsafe_ptr,&__t1481t__s2__dat__pos,&__t1481t__s2__dat__length,&__t1481t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1481t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1481t__s1__dat__pos;
  s__s1__dat__length=__t1481t__s1__dat__length;
  s__s1__dat__first=__t1481t__s1__dat__first;
  s__s2__unsafe_ptr=__t1481t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1481t__s2__dat__pos;
  s__s2__dat__length=__t1481t__s2__dat__length;
  s__s2__dat__first=__t1481t__s2__dat__first;
  print__t783t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t783t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t439t(__t1481t__s1__unsafe_ptr,&__t1482t____t1473t____t605t____t514t__);
  if(__t1482t____t1473t____t605t____t514t__){
  free__t505t(&__t1481t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1480t();return 0;}