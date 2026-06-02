#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1478t="456";
const char* const __t1476t="123";
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1468t(char** __t1486t, uint64_t* __t1487t, uint16_t* __t1488t, uint16_t* __t1489t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1486t=unsafe_ptr;
  *__t1487t=unsafe_size;
  *__t1488t=unsafe_offset;
  *__t1489t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1490t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1490t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1491t) {
  char* allocated=*__t1491t;
  if(allocated){
  free(allocated);
  }
  *__t1491t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1492t) {
  int value=0;
  *__t1492t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1493t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1493t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1494t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1494t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1495t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1495t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1496t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1496t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1497t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1497t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1498t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1498t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1499t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1499t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1500t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1500t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1501t, uint64_t* __t1502t, uint16_t* __t1503t, uint16_t* __t1504t, uint64_t size, char** __t1505t, uint64_t* __t1506t, uint16_t* __t1507t, uint16_t* __t1508t) {
  char* buffer__unsafe_ptr=*__t1501t;
  uint64_t buffer__unsafe_size=*__t1502t;
  uint16_t buffer__unsafe_offset=*__t1503t;
  uint16_t buffer__unsafe_align=*__t1504t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1501t=buffer__unsafe_ptr;
  *__t1502t=buffer__unsafe_size;
  *__t1503t=buffer__unsafe_offset;
  *__t1504t=buffer__unsafe_align;
  *__t1505t=buffer__unsafe_ptr;
  *__t1506t=buffer__unsafe_size;
  *__t1507t=buffer__unsafe_offset;
  *__t1508t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1509t) {
  goto __t_return;
  __t_return:
  *__t1509t=buffer__unsafe_size;
}

int list__t605t(char** __t1510t, uint64_t* __t1511t, uint16_t* __t1512t, uint16_t* __t1513t, char** __t1514t, uint64_t* __t1515t, uint16_t* __t1516t, uint16_t* __t1517t, uint64_t* __t1518t) {
  char* _buffer__unsafe_ptr=*__t1510t;
  uint64_t _buffer__unsafe_size=*__t1511t;
  uint16_t _buffer__unsafe_offset=*__t1512t;
  uint16_t _buffer__unsafe_align=*__t1513t;
  uint64_t __t606t=0;
  char* __t607t__unsafe_ptr=0;
  uint64_t __t607t__unsafe_size=0;
  uint16_t __t607t__unsafe_offset=0;
  uint16_t __t607t__unsafe_align=0;
  char __t608t____t517t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t609t__=0;
  uint64_t __t610t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t606t=1;
  __t_errcode=alloc__t515t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t606t,&__t607t__unsafe_ptr,&__t607t__unsafe_size,&__t607t__unsafe_offset,&__t607t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t607t__unsafe_ptr;
  buffer__unsafe_size=__t607t__unsafe_size;
  buffer__unsafe_offset=__t607t__unsafe_offset;
  buffer__unsafe_align=__t607t__unsafe_align;
  len__t604t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t609t__);
  __t610t=__t609t__;
  length=__t610t;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t608t____t517t__);
  if(__t608t____t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1510t=_buffer__unsafe_ptr;
  *__t1511t=_buffer__unsafe_size;
  *__t1512t=_buffer__unsafe_offset;
  *__t1513t=_buffer__unsafe_align;
  *__t1514t=buffer__unsafe_ptr;
  *__t1515t=buffer__unsafe_size;
  *__t1516t=buffer__unsafe_offset;
  *__t1517t=buffer__unsafe_align;
  *__t1518t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1519t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1519t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1520t) {
  *__t1520t=to;
}

static inline __attribute__((always_inline)) int realloc__t504t(char* allocated, uint64_t bytes, char** __t1521t) {
  char* new_allocated=0;
  char __t505t__=0;
  char __t506t__=0;
  char* __t507t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t442t(new_allocated,&__t505t__);
  not__t27t(__t505t__,&__t506t__);
  if(__t506t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t507t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1521t=__t507t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1522t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1523t, uint64_t* __t1524t, uint16_t* __t1525t, uint16_t* __t1526t, uint64_t size, char** __t1527t, uint64_t* __t1528t, uint16_t* __t1529t, uint16_t* __t1530t) {
  char* buffer__unsafe_ptr=*__t1523t;
  uint64_t buffer__unsafe_size=*__t1524t;
  uint16_t buffer__unsafe_offset=*__t1525t;
  uint16_t buffer__unsafe_align=*__t1526t;
  char __t564t__=0;
  uint64_t __t565t=0;
  char __t566t__=0;
  uint64_t __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t569t__=0;
  uint64_t __t570t__=0;
  uint64_t bytes=0;
  char* __t571t__=0;
  char __t572t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(buffer__unsafe_size,size,&__t564t__);
  if(__t564t__){
  goto __t_return;
  }
  __t565t=0;
  eq__t119t(buffer__unsafe_size,__t565t,&__t566t__);
  if(__t566t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t567t__);
  mul__t198t(buffer__unsafe_size,__t567t__,&__t568t__);
  prev_bytes=__t568t__;
  buffer__unsafe_size=size;
  nat__t512t(buffer__unsafe_align,&__t569t__);
  mul__t198t(__t569t__,size,&__t570t__);
  bytes=__t570t__;
  __t_errcode=realloc__t504t(buffer__unsafe_ptr,bytes,&__t571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t571t__;
  lt__t251t(prev_bytes,bytes,&__t572t__);
  if(__t572t__){
  zero__t509t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1523t=buffer__unsafe_ptr;
  *__t1524t=buffer__unsafe_size;
  *__t1525t=buffer__unsafe_offset;
  *__t1526t=buffer__unsafe_align;
  *__t1527t=buffer__unsafe_ptr;
  *__t1528t=buffer__unsafe_size;
  *__t1529t=buffer__unsafe_offset;
  *__t1530t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1531t, uint64_t* __t1532t, uint16_t* __t1533t, uint16_t* __t1534t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1531t=unsafe_ptr;
  *__t1532t=unsafe_size;
  *__t1533t=unsafe_offset;
  *__t1534t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1535t) {
  *__t1535t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1536t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1536t=z;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1537t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1537t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1538t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1538t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1539t, uint64_t* __t1540t, uint64_t* __t1541t, char* __t1542t) {
  goto __t_return;
  __t_return:
  *__t1539t=unsafe_ptr;
  *__t1540t=dat__pos;
  *__t1541t=dat__length;
  *__t1542t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1543t, uint64_t* __t1544t, uint64_t* __t1545t, char* __t1546t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t512t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t143t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1543t=__t643t__unsafe_ptr;
  *__t1544t=__t643t__dat__pos;
  *__t1545t=__t643t__dat__length;
  *__t1546t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1547t, uint64_t* __t1548t, uint64_t* __t1549t, char* __t1550t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t143t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1547t=__t673t__unsafe_ptr;
  *__t1548t=__t673t__dat__pos;
  *__t1549t=__t673t__dat__length;
  *__t1550t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1551t, uint64_t* __t1552t, uint64_t* __t1553t, char* __t1554t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t174t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1551t=__t681t__unsafe_ptr;
  *__t1552t=__t681t__dat__pos;
  *__t1553t=__t681t__dat__length;
  *__t1554t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1555t) {
  goto __t_return;
  __t_return:
  *__t1555t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t147t(char* x, char* y, char* __t1556t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t1557t) {
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
  *__t1557t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1558t, uint64_t* __t1559t, uint64_t* __t1560t, char* __t1561t) {
  goto __t_return;
  __t_return:
  *__t1558t=other__unsafe_ptr;
  *__t1559t=other__dat__pos;
  *__t1560t=other__dat__length;
  *__t1561t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1562t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1562t=z;
}

static inline __attribute__((always_inline)) int copy__t744t(char** __t1563t, uint64_t* __t1564t, uint16_t* __t1565t, uint16_t* __t1566t, uint64_t* __t1567t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1568t, uint64_t* __t1569t, uint64_t* __t1570t, char* __t1571t) {
  char* buf__unsafe_ptr=*__t1563t;
  uint64_t buf__unsafe_size=*__t1564t;
  uint16_t buf__unsafe_offset=*__t1565t;
  uint16_t buf__unsafe_align=*__t1566t;
  uint64_t pos=*__t1567t;
  char* __t745t__unsafe_ptr=0;
  uint64_t __t745t__dat__pos=0;
  uint64_t __t745t__dat__length=0;
  char __t745t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t746t__=0;
  uint64_t __t747t__=0;
  uint64_t next_pos=0;
  uint64_t __t748t__=0;
  char __t749t__=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t prev_pos=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t745t__unsafe_ptr,&__t745t__dat__pos,&__t745t__dat__length,&__t745t__dat__first);
  other__unsafe_ptr=__t745t__unsafe_ptr;
  other__dat__pos=__t745t__dat__pos;
  other__dat__length=__t745t__dat__length;
  other__dat__first=__t745t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t746t__);
  add__t174t(pos,__t746t__,&__t747t__);
  next_pos=__t747t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t748t__);
  gt__t275t(next_pos,__t748t__,&__t749t__);
  if(__t749t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t750t=0;
  add__t174t(pos,__t750t,&__t751t__);
  prev_pos=__t751t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1563t=buf__unsafe_ptr;
  *__t1564t=buf__unsafe_size;
  *__t1565t=buf__unsafe_offset;
  *__t1566t=buf__unsafe_align;
  *__t1567t=pos;
  *__t1568t=__t752t__unsafe_ptr;
  *__t1569t=__t752t__dat__pos;
  *__t1570t=__t752t__dat__length;
  *__t1571t=__t752t__dat__first;
  
  return __t_errcode;
}

int copy__t810t(char** __t1572t, uint64_t* __t1573t, uint16_t* __t1574t, uint16_t* __t1575t, uint64_t* __t1576t, const char* _other, char** __t1577t, uint64_t* __t1578t, uint64_t* __t1579t, char* __t1580t) {
  char* li__buffer__unsafe_ptr=*__t1572t;
  uint64_t li__buffer__unsafe_size=*__t1573t;
  uint16_t li__buffer__unsafe_offset=*__t1574t;
  uint16_t li__buffer__unsafe_align=*__t1575t;
  uint64_t li__length=*__t1576t;
  char* __t811t__unsafe_ptr=0;
  uint64_t __t811t__dat__pos=0;
  uint64_t __t811t__dat__length=0;
  char __t811t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t812t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t prev_length=0;
  char __t815t__=0;
  uint64_t __t816t__=0;
  char __t817t__=0;
  uint64_t __t818t=0;
  uint64_t __t819t__=0;
  uint64_t __t820t=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  char* __t823t__unsafe_ptr=0;
  uint64_t __t823t__unsafe_size=0;
  uint16_t __t823t__unsafe_offset=0;
  uint16_t __t823t__unsafe_align=0;
  char* __t824t__unsafe_ptr=0;
  uint64_t __t824t__dat__pos=0;
  uint64_t __t824t__dat__length=0;
  char __t824t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t811t__unsafe_ptr,&__t811t__dat__pos,&__t811t__dat__length,&__t811t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t811t__unsafe_ptr;
  other__dat__pos=__t811t__dat__pos;
  other__dat__length=__t811t__dat__length;
  other__dat__first=__t811t__dat__first;
  __t812t=li__length;
  prev_prev_length=__t812t;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t813t__);
  add__t174t(li__length,__t813t__,&__t814t__);
  prev_length=__t814t__;
  eq__t147t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t815t__);
  if(__t815t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t604t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t816t__);
  ge__t323t(prev_length,__t816t__,&__t817t__);
  if(__t817t__){
  __t818t=2;
  __t_errcode=div__t224t(prev_length,__t818t,&__t819t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t820t=1;
  add__t174t(__t819t__,__t820t,&__t821t__);
  add__t174t(prev_length,__t821t__,&__t822t__);
  __t_errcode=resize__t563t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t822t__,&__t823t__unsafe_ptr,&__t823t__unsafe_size,&__t823t__unsafe_offset,&__t823t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t823t__unsafe_ptr;
  li__buffer__unsafe_size=__t823t__unsafe_size;
  li__buffer__unsafe_offset=__t823t__unsafe_offset;
  li__buffer__unsafe_align=__t823t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t744t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t824t__unsafe_ptr,&__t824t__dat__pos,&__t824t__dat__length,&__t824t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1572t=li__buffer__unsafe_ptr;
  *__t1573t=li__buffer__unsafe_size;
  *__t1574t=li__buffer__unsafe_offset;
  *__t1575t=li__buffer__unsafe_align;
  *__t1576t=li__length;
  *__t1577t=__t824t__unsafe_ptr;
  *__t1578t=__t824t__dat__pos;
  *__t1579t=__t824t__dat__length;
  *__t1580t=__t824t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1467t(char** __t1581t, uint64_t* __t1582t, uint64_t* __t1583t, char* __t1584t, char** __t1585t, uint64_t* __t1586t, uint64_t* __t1587t, char* __t1588t) {
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
  char __t1473t____t608t____t517t__=0;
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
  __t_errcode=list__t605t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1474t=100;
  __t_errcode=resize__t563t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,__t1474t,&__t1475t__unsafe_ptr,&__t1475t__unsafe_size,&__t1475t__unsafe_offset,&__t1475t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t810t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length,__t1476t,&__t1477t__unsafe_ptr,&__t1477t__dat__pos,&__t1477t__dat__length,&__t1477t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1477t__dat__pos;
  s1__dat__length=__t1477t__dat__length;
  s1__dat__first=__t1477t__dat__first;
  __t_errcode=copy__t810t(&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length,__t1478t,&__t1479t__unsafe_ptr,&__t1479t__dat__pos,&__t1479t__dat__length,&__t1479t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1479t__dat__pos;
  s2__dat__length=__t1479t__dat__length;
  s2__dat__first=__t1479t__dat__first;
  s1__unsafe_ptr=__t1472t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1472t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(s1__unsafe_ptr,&__t1473t____t608t____t517t__);
  if(__t1473t____t608t____t517t__){
  free__t508t(&s1__unsafe_ptr);
  }
  __t_return:
  *__t1581t=s1__unsafe_ptr;
  *__t1582t=s1__dat__pos;
  *__t1583t=s1__dat__length;
  *__t1584t=s1__dat__first;
  *__t1585t=s2__unsafe_ptr;
  *__t1586t=s2__dat__pos;
  *__t1587t=s2__dat__length;
  *__t1588t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1480t() {
  char* __t1482t__s1__unsafe_ptr=0;
  uint64_t __t1482t__s1__dat__pos=0;
  uint64_t __t1482t__s1__dat__length=0;
  char __t1482t__s1__dat__first=0;
  char* __t1482t__s2__unsafe_ptr=0;
  uint64_t __t1482t__s2__dat__pos=0;
  uint64_t __t1482t__s2__dat__length=0;
  char __t1482t__s2__dat__first=0;
  char __t1483t____t1473t____t608t____t517t__=0;
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
  console__t365t();
  __t_errcode=test__t1467t(&__t1482t__s1__unsafe_ptr,&__t1482t__s1__dat__pos,&__t1482t__s1__dat__length,&__t1482t__s1__dat__first,&__t1482t__s2__unsafe_ptr,&__t1482t__s2__dat__pos,&__t1482t__s2__dat__length,&__t1482t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1482t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1482t__s1__dat__pos;
  s__s1__dat__length=__t1482t__s1__dat__length;
  s__s1__dat__first=__t1482t__s1__dat__first;
  s__s2__unsafe_ptr=__t1482t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1482t__s2__dat__pos;
  s__s2__dat__length=__t1482t__s2__dat__length;
  s__s2__dat__first=__t1482t__s2__dat__first;
  print__t786t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t786t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t442t(__t1482t__s1__unsafe_ptr,&__t1483t____t1473t____t608t____t517t__);
  if(__t1483t____t1473t____t608t____t517t__){
  free__t508t(&__t1482t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1480t();return 0;}