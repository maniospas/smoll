#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1510t(char** __t1540t, uint64_t* __t1541t, uint16_t* __t1542t, uint16_t* __t1543t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1540t=unsafe_ptr;
  *__t1541t=unsafe_size;
  *__t1542t=unsafe_offset;
  *__t1543t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1544t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1544t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1545t) {
  char* allocated=*__t1545t;
  if(allocated){
  free(allocated);
  }
  *__t1545t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1546t) {
  int value=0;
  *__t1546t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1547t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1547t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1548t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1548t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1549t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1549t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1550t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1551t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1551t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1552t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1552t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1553t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1553t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1554t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1554t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1555t, uint64_t* __t1556t, uint16_t* __t1557t, uint16_t* __t1558t, uint64_t size, char** __t1559t, uint64_t* __t1560t, uint16_t* __t1561t, uint16_t* __t1562t) {
  char* buffer__unsafe_ptr=*__t1555t;
  uint64_t buffer__unsafe_size=*__t1556t;
  uint16_t buffer__unsafe_offset=*__t1557t;
  uint16_t buffer__unsafe_align=*__t1558t;
  int __t517t=0;
  char __t518t__=0;
  char __t520t__=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t __t530t__=0;
  uint64_t bytes=0;
  uint64_t __t531t=0;
  char __t532t__=0;
  char* __t533t__=0;
  uint64_t __t534t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t520t__);
  if(__t520t__){
  __t521t=0;
  neq__t144t(size,__t521t,&__t522t__);
  if(__t522t__){
  __t523t=0;
  nat__t513t(buffer__unsafe_align,&__t524t__);
  mul__t199t(__t524t__,size,&__t525t__);
  zero__t510t(buffer__unsafe_ptr,__t523t,__t525t__);
  }
  goto __t_return;
  }
  __t527t=0;
  neq__t144t(buffer__unsafe_size,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t529t__);
  mul__t199t(__t529t__,size,&__t530t__);
  bytes=__t530t__;
  __t531t=0;
  eq__t120t(bytes,__t531t,&__t532t__);
  if(__t532t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t533t__;
  __t534t=0;
  zero__t510t(buffer__unsafe_ptr,__t534t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t518t__);
  if(__t518t__){
  free__t509t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1555t=buffer__unsafe_ptr;
  *__t1556t=buffer__unsafe_size;
  *__t1557t=buffer__unsafe_offset;
  *__t1558t=buffer__unsafe_align;
  *__t1559t=buffer__unsafe_ptr;
  *__t1560t=buffer__unsafe_size;
  *__t1561t=buffer__unsafe_offset;
  *__t1562t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1563t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1563t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1564t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1565t) {
  *__t1565t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1566t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1566t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1567t, uint64_t* __t1568t, uint16_t* __t1569t, uint16_t* __t1570t, uint64_t i, char** __t1571t) {
  char* buffer__unsafe_ptr=*__t1567t;
  uint64_t buffer__unsafe_size=*__t1568t;
  uint16_t buffer__unsafe_offset=*__t1569t;
  uint16_t buffer__unsafe_align=*__t1570t;
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t593t__);
  mul__t199t(i,__t593t__,&__t594t__);
  nat__t513t(buffer__unsafe_offset,&__t595t__);
  add__t175t(__t594t__,__t595t__,&__t596t__);
  add__t511t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1567t=buffer__unsafe_ptr;
  *__t1568t=buffer__unsafe_size;
  *__t1569t=buffer__unsafe_offset;
  *__t1570t=buffer__unsafe_align;
  *__t1571t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t1509t(char** __t1572t, uint64_t* __t1573t, uint16_t* __t1574t, uint16_t* __t1575t) {
  char* __t1512t__unsafe_ptr=0;
  uint64_t __t1512t__unsafe_size=0;
  uint16_t __t1512t__unsafe_offset=0;
  uint16_t __t1512t__unsafe_align=0;
  uint64_t __t1513t=0;
  char* __t1514t__unsafe_ptr=0;
  uint64_t __t1514t__unsafe_size=0;
  uint16_t __t1514t__unsafe_offset=0;
  uint16_t __t1514t__unsafe_align=0;
  char __t1515t____t518t__=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__unsafe_size=0;
  uint16_t __t1516t__unsafe_offset=0;
  uint16_t __t1516t__unsafe_align=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1517t=0;
  char* __t1518t__=0;
  double __t1519t=0;
  char* __t1520t__unsafe_ptr=0;
  uint64_t __t1520t__unsafe_size=0;
  uint16_t __t1520t__unsafe_offset=0;
  uint16_t __t1520t__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1510t(&__t1512t__unsafe_ptr,&__t1512t__unsafe_size,&__t1512t__unsafe_offset,&__t1512t__unsafe_align);
  __t1513t=1;
  __t_errcode=alloc__t516t(&__t1512t__unsafe_ptr,&__t1512t__unsafe_size,&__t1512t__unsafe_offset,&__t1512t__unsafe_align,__t1513t,&__t1514t__unsafe_ptr,&__t1514t__unsafe_size,&__t1514t__unsafe_offset,&__t1514t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1516t__unsafe_ptr=__t1514t__unsafe_ptr;
  __t1516t__unsafe_size=__t1514t__unsafe_size;
  __t1516t__unsafe_offset=__t1514t__unsafe_offset;
  __t1516t__unsafe_align=__t1514t__unsafe_align;
  x__unsafe_ptr=__t1516t__unsafe_ptr;
  x__unsafe_size=__t1516t__unsafe_size;
  x__unsafe_offset=__t1516t__unsafe_offset;
  x__unsafe_align=__t1516t__unsafe_align;
  __t1517t=0;
  __t_errcode=mutget__t591t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1517t,&__t1518t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1519t=1.0;
  if(!__t1518t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1518t__,&__t1519t,8);
  float____t_buffer____buffer__t1510t(&__t1520t__unsafe_ptr,&__t1520t__unsafe_size,&__t1520t__unsafe_offset,&__t1520t__unsafe_align);
  y__unsafe_ptr=__t1520t__unsafe_ptr;
  y__unsafe_size=__t1520t__unsafe_size;
  y__unsafe_offset=__t1520t__unsafe_offset;
  y__unsafe_align=__t1520t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(x__unsafe_ptr,&__t1515t____t518t__);
  if(__t1515t____t518t__){
  free__t509t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1572t=x__unsafe_ptr;
  *__t1573t=x__unsafe_size;
  *__t1574t=x__unsafe_offset;
  *__t1575t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t505t(char* allocated, uint64_t bytes, char** __t1576t) {
  char* new_allocated=0;
  char __t506t__=0;
  char __t507t__=0;
  char* __t508t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t443t(new_allocated,&__t506t__);
  not__t28t(__t506t__,&__t507t__);
  if(__t507t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t508t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1576t=__t508t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1577t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1577t=z;
}

static inline __attribute__((always_inline)) int resize__t564t(char** __t1578t, uint64_t* __t1579t, uint16_t* __t1580t, uint16_t* __t1581t, uint64_t size, char** __t1582t, uint64_t* __t1583t, uint16_t* __t1584t, uint16_t* __t1585t) {
  char* buffer__unsafe_ptr=*__t1578t;
  uint64_t buffer__unsafe_size=*__t1579t;
  uint16_t buffer__unsafe_offset=*__t1580t;
  uint16_t buffer__unsafe_align=*__t1581t;
  char __t565t__=0;
  uint64_t __t566t=0;
  char __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t __t569t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t570t__=0;
  uint64_t __t571t__=0;
  uint64_t bytes=0;
  char* __t572t__=0;
  char __t573t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t565t__);
  if(__t565t__){
  goto __t_return;
  }
  __t566t=0;
  eq__t120t(buffer__unsafe_size,__t566t,&__t567t__);
  if(__t567t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t568t__);
  mul__t199t(buffer__unsafe_size,__t568t__,&__t569t__);
  prev_bytes=__t569t__;
  buffer__unsafe_size=size;
  nat__t513t(buffer__unsafe_align,&__t570t__);
  mul__t199t(__t570t__,size,&__t571t__);
  bytes=__t571t__;
  __t_errcode=realloc__t505t(buffer__unsafe_ptr,bytes,&__t572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t572t__;
  lt__t252t(prev_bytes,bytes,&__t573t__);
  if(__t573t__){
  zero__t510t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1578t=buffer__unsafe_ptr;
  *__t1579t=buffer__unsafe_size;
  *__t1580t=buffer__unsafe_offset;
  *__t1581t=buffer__unsafe_align;
  *__t1582t=buffer__unsafe_ptr;
  *__t1583t=buffer__unsafe_size;
  *__t1584t=buffer__unsafe_offset;
  *__t1585t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1586t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1586t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t583t(char** __t1587t, uint64_t* __t1588t, uint16_t* __t1589t, uint16_t* __t1590t, char** __t1591t) {
  char* buffer__unsafe_ptr=*__t1587t;
  uint64_t buffer__unsafe_size=*__t1588t;
  uint16_t buffer__unsafe_offset=*__t1589t;
  uint16_t buffer__unsafe_align=*__t1590t;
  uint64_t __t584t=0;
  char __t585t__=0;
  uint64_t __t586t=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  uint64_t __t589t__=0;
  char* __t590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t584t=0;
  eq__t120t(__t584t,buffer__unsafe_size,&__t585t__);
  if(__t585t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t586t=1;
  __t_errcode=sub__t352t(buffer__unsafe_size,__t586t,&__t587t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t588t__);
  mul__t199t(__t587t__,__t588t__,&__t589t__);
  add__t511t(buffer__unsafe_ptr,__t589t__,&__t590t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1587t=buffer__unsafe_ptr;
  *__t1588t=buffer__unsafe_size;
  *__t1589t=buffer__unsafe_offset;
  *__t1590t=buffer__unsafe_align;
  *__t1591t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1521t(char** __t1592t, uint64_t* __t1593t, uint16_t* __t1594t, uint16_t* __t1595t) {
  char* x__unsafe_ptr=*__t1592t;
  uint64_t x__unsafe_size=*__t1593t;
  uint16_t x__unsafe_offset=*__t1594t;
  uint16_t x__unsafe_align=*__t1595t;
  uint64_t __t1522t=0;
  char* __t1523t__unsafe_ptr=0;
  uint64_t __t1523t__unsafe_size=0;
  uint16_t __t1523t__unsafe_offset=0;
  uint16_t __t1523t__unsafe_align=0;
  char* __t1524t__=0;
  double __t1525t=0;
  char* __t1526t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1522t=2;
  __t_errcode=resize__t564t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1522t,&__t1523t__unsafe_ptr,&__t1523t__unsafe_size,&__t1523t__unsafe_offset,&__t1523t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t583t(&__t1523t__unsafe_ptr,&__t1523t__unsafe_size,&__t1523t__unsafe_offset,&__t1523t__unsafe_align,&__t1524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1525t=2.0;
  if(!__t1524t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1524t__,&__t1525t,8);
  __t1526t=__t1524t__;
  
  __t_failure:*__t1592t=x__unsafe_ptr;
  *__t1593t=x__unsafe_size;
  *__t1594t=x__unsafe_offset;
  *__t1595t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1596t) {
  char __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  uint64_t __t603t__=0;
  char* __t604t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t599t__);
  if(__t599t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t600t__);
  mul__t199t(i,__t600t__,&__t601t__);
  nat__t513t(buffer__unsafe_offset,&__t602t__);
  add__t175t(__t601t__,__t602t__,&__t603t__);
  add__t511t(buffer__unsafe_ptr,__t603t__,&__t604t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1596t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1597t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1597t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1598t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1527t() {
  char* __t1529t__unsafe_ptr=0;
  uint64_t __t1529t__unsafe_size=0;
  uint16_t __t1529t__unsafe_offset=0;
  uint16_t __t1529t__unsafe_align=0;
  char __t1530t____t1515t____t518t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1532t=0;
  char* __t1533t__=0;
  double __t1534t__number=0;
  uint64_t __t1535t=0;
  char* __t1536t__=0;
  double __t1537t__number=0;
  double __t1538t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test1__t1509t(&__t1529t__unsafe_ptr,&__t1529t__unsafe_size,&__t1529t__unsafe_offset,&__t1529t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test2__t1521t(&__t1529t__unsafe_ptr,&__t1529t__unsafe_size,&__t1529t__unsafe_offset,&__t1529t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1532t=0;
  __t_errcode=get__t598t(__t1529t__unsafe_ptr,__t1529t__unsafe_size,__t1529t__unsafe_offset,__t1529t__unsafe_align,__t1532t,&__t1533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1533t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1534t__number,__t1533t__,8);
  __t1535t=1;
  __t_errcode=get__t598t(__t1529t__unsafe_ptr,__t1529t__unsafe_size,__t1529t__unsafe_offset,__t1529t__unsafe_align,__t1535t,&__t1536t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1536t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1537t__number,__t1536t__,8);
  add__t153t(__t1534t__number,__t1537t__number,&__t1538t__);
  print__t381t(__t1538t__);
  
  __t_failure:exists__t443t(__t1529t__unsafe_ptr,&__t1530t____t1515t____t518t__);
  if(__t1530t____t1515t____t518t__){
  free__t509t(&__t1529t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1527t();return 0;}