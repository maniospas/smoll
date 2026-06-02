#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1468t(char** __t1498t, uint64_t* __t1499t, uint16_t* __t1500t, uint16_t* __t1501t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1498t=unsafe_ptr;
  *__t1499t=unsafe_size;
  *__t1500t=unsafe_offset;
  *__t1501t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1502t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1502t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1503t) {
  char* allocated=*__t1503t;
  if(allocated){
  free(allocated);
  }
  *__t1503t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1504t) {
  int value=0;
  *__t1504t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1505t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1505t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1506t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1506t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1507t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1507t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1508t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1509t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1509t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1510t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1510t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1511t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1511t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1512t) {
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
  *__t1512t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1513t, uint64_t* __t1514t, uint16_t* __t1515t, uint16_t* __t1516t, uint64_t size, char** __t1517t, uint64_t* __t1518t, uint16_t* __t1519t, uint16_t* __t1520t) {
  char* buffer__unsafe_ptr=*__t1513t;
  uint64_t buffer__unsafe_size=*__t1514t;
  uint16_t buffer__unsafe_offset=*__t1515t;
  uint16_t buffer__unsafe_align=*__t1516t;
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
  *__t1513t=buffer__unsafe_ptr;
  *__t1514t=buffer__unsafe_size;
  *__t1515t=buffer__unsafe_offset;
  *__t1516t=buffer__unsafe_align;
  *__t1517t=buffer__unsafe_ptr;
  *__t1518t=buffer__unsafe_size;
  *__t1519t=buffer__unsafe_offset;
  *__t1520t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1521t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1521t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1522t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1523t) {
  *__t1523t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1524t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1524t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1525t, uint64_t* __t1526t, uint16_t* __t1527t, uint16_t* __t1528t, uint64_t i, char** __t1529t) {
  char* buffer__unsafe_ptr=*__t1525t;
  uint64_t buffer__unsafe_size=*__t1526t;
  uint16_t buffer__unsafe_offset=*__t1527t;
  uint16_t buffer__unsafe_align=*__t1528t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t592t__);
  mul__t198t(i,__t592t__,&__t593t__);
  nat__t512t(buffer__unsafe_offset,&__t594t__);
  add__t174t(__t593t__,__t594t__,&__t595t__);
  add__t510t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1525t=buffer__unsafe_ptr;
  *__t1526t=buffer__unsafe_size;
  *__t1527t=buffer__unsafe_offset;
  *__t1528t=buffer__unsafe_align;
  *__t1529t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t1467t(char** __t1530t, uint64_t* __t1531t, uint16_t* __t1532t, uint16_t* __t1533t) {
  char* __t1470t__unsafe_ptr=0;
  uint64_t __t1470t__unsafe_size=0;
  uint16_t __t1470t__unsafe_offset=0;
  uint16_t __t1470t__unsafe_align=0;
  uint64_t __t1471t=0;
  char* __t1472t__unsafe_ptr=0;
  uint64_t __t1472t__unsafe_size=0;
  uint16_t __t1472t__unsafe_offset=0;
  uint16_t __t1472t__unsafe_align=0;
  char __t1473t____t517t__=0;
  char* __t1474t__unsafe_ptr=0;
  uint64_t __t1474t__unsafe_size=0;
  uint16_t __t1474t__unsafe_offset=0;
  uint16_t __t1474t__unsafe_align=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1475t=0;
  char* __t1476t__=0;
  double __t1477t=0;
  char* __t1478t__unsafe_ptr=0;
  uint64_t __t1478t__unsafe_size=0;
  uint16_t __t1478t__unsafe_offset=0;
  uint16_t __t1478t__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1468t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align);
  __t1471t=1;
  __t_errcode=alloc__t515t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align,__t1471t,&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1474t__unsafe_ptr=__t1472t__unsafe_ptr;
  __t1474t__unsafe_size=__t1472t__unsafe_size;
  __t1474t__unsafe_offset=__t1472t__unsafe_offset;
  __t1474t__unsafe_align=__t1472t__unsafe_align;
  x__unsafe_ptr=__t1474t__unsafe_ptr;
  x__unsafe_size=__t1474t__unsafe_size;
  x__unsafe_offset=__t1474t__unsafe_offset;
  x__unsafe_align=__t1474t__unsafe_align;
  __t1475t=0;
  __t_errcode=mutget__t590t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1475t,&__t1476t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1477t=1.0;
  if(!__t1476t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1476t__,&__t1477t,8);
  float____t_buffer____buffer__t1468t(&__t1478t__unsafe_ptr,&__t1478t__unsafe_size,&__t1478t__unsafe_offset,&__t1478t__unsafe_align);
  y__unsafe_ptr=__t1478t__unsafe_ptr;
  y__unsafe_size=__t1478t__unsafe_size;
  y__unsafe_offset=__t1478t__unsafe_offset;
  y__unsafe_align=__t1478t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(x__unsafe_ptr,&__t1473t____t517t__);
  if(__t1473t____t517t__){
  free__t508t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1530t=x__unsafe_ptr;
  *__t1531t=x__unsafe_size;
  *__t1532t=x__unsafe_offset;
  *__t1533t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t504t(char* allocated, uint64_t bytes, char** __t1534t) {
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
  *__t1534t=__t507t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1535t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1536t, uint64_t* __t1537t, uint16_t* __t1538t, uint16_t* __t1539t, uint64_t size, char** __t1540t, uint64_t* __t1541t, uint16_t* __t1542t, uint16_t* __t1543t) {
  char* buffer__unsafe_ptr=*__t1536t;
  uint64_t buffer__unsafe_size=*__t1537t;
  uint16_t buffer__unsafe_offset=*__t1538t;
  uint16_t buffer__unsafe_align=*__t1539t;
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
  *__t1536t=buffer__unsafe_ptr;
  *__t1537t=buffer__unsafe_size;
  *__t1538t=buffer__unsafe_offset;
  *__t1539t=buffer__unsafe_align;
  *__t1540t=buffer__unsafe_ptr;
  *__t1541t=buffer__unsafe_size;
  *__t1542t=buffer__unsafe_offset;
  *__t1543t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1544t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1544t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t582t(char** __t1545t, uint64_t* __t1546t, uint16_t* __t1547t, uint16_t* __t1548t, char** __t1549t) {
  char* buffer__unsafe_ptr=*__t1545t;
  uint64_t buffer__unsafe_size=*__t1546t;
  uint16_t buffer__unsafe_offset=*__t1547t;
  uint16_t buffer__unsafe_align=*__t1548t;
  uint64_t __t583t=0;
  char __t584t__=0;
  uint64_t __t585t=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  char* __t589t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t583t=0;
  eq__t119t(__t583t,buffer__unsafe_size,&__t584t__);
  if(__t584t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t585t=1;
  __t_errcode=sub__t351t(buffer__unsafe_size,__t585t,&__t586t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t587t__);
  mul__t198t(__t586t__,__t587t__,&__t588t__);
  add__t510t(buffer__unsafe_ptr,__t588t__,&__t589t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1545t=buffer__unsafe_ptr;
  *__t1546t=buffer__unsafe_size;
  *__t1547t=buffer__unsafe_offset;
  *__t1548t=buffer__unsafe_align;
  *__t1549t=__t589t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1479t(char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t) {
  char* x__unsafe_ptr=*__t1550t;
  uint64_t x__unsafe_size=*__t1551t;
  uint16_t x__unsafe_offset=*__t1552t;
  uint16_t x__unsafe_align=*__t1553t;
  uint64_t __t1480t=0;
  char* __t1481t__unsafe_ptr=0;
  uint64_t __t1481t__unsafe_size=0;
  uint16_t __t1481t__unsafe_offset=0;
  uint16_t __t1481t__unsafe_align=0;
  char* __t1482t__=0;
  double __t1483t=0;
  char* __t1484t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1480t=2;
  __t_errcode=resize__t563t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1480t,&__t1481t__unsafe_ptr,&__t1481t__unsafe_size,&__t1481t__unsafe_offset,&__t1481t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t582t(&__t1481t__unsafe_ptr,&__t1481t__unsafe_size,&__t1481t__unsafe_offset,&__t1481t__unsafe_align,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1483t=2.0;
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1482t__,&__t1483t,8);
  __t1484t=__t1482t__;
  
  __t_failure:*__t1550t=x__unsafe_ptr;
  *__t1551t=x__unsafe_size;
  *__t1552t=x__unsafe_offset;
  *__t1553t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1554t) {
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
  *__t1554t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1555t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1555t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1556t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1485t() {
  char* __t1487t__unsafe_ptr=0;
  uint64_t __t1487t__unsafe_size=0;
  uint16_t __t1487t__unsafe_offset=0;
  uint16_t __t1487t__unsafe_align=0;
  char __t1488t____t1473t____t517t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1490t=0;
  char* __t1491t__=0;
  double __t1492t__number=0;
  uint64_t __t1493t=0;
  char* __t1494t__=0;
  double __t1495t__number=0;
  double __t1496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test1__t1467t(&__t1487t__unsafe_ptr,&__t1487t__unsafe_size,&__t1487t__unsafe_offset,&__t1487t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test2__t1479t(&__t1487t__unsafe_ptr,&__t1487t__unsafe_size,&__t1487t__unsafe_offset,&__t1487t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1490t=0;
  __t_errcode=get__t597t(__t1487t__unsafe_ptr,__t1487t__unsafe_size,__t1487t__unsafe_offset,__t1487t__unsafe_align,__t1490t,&__t1491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1491t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1492t__number,__t1491t__,8);
  __t1493t=1;
  __t_errcode=get__t597t(__t1487t__unsafe_ptr,__t1487t__unsafe_size,__t1487t__unsafe_offset,__t1487t__unsafe_align,__t1493t,&__t1494t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1494t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1495t__number,__t1494t__,8);
  add__t152t(__t1492t__number,__t1495t__number,&__t1496t__);
  print__t380t(__t1496t__);
  
  __t_failure:exists__t442t(__t1487t__unsafe_ptr,&__t1488t____t1473t____t517t__);
  if(__t1488t____t1473t____t517t__){
  free__t508t(&__t1487t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1485t();return 0;}