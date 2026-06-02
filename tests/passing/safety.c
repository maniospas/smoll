#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1485t="going to deallocate of size: ";
const char* const __t369t="";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1468t(char** __t1505t, uint64_t* __t1506t, uint16_t* __t1507t, uint16_t* __t1508t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1505t=unsafe_ptr;
  *__t1506t=unsafe_size;
  *__t1507t=unsafe_offset;
  *__t1508t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1509t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1510t) {
  char* allocated=*__t1510t;
  if(allocated){
  free(allocated);
  }
  *__t1510t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1511t) {
  int value=0;
  *__t1511t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1512t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1512t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1513t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1513t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1514t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1514t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1515t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1515t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1516t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1516t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1517t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1517t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1518t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1518t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1519t) {
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
  *__t1519t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1520t, uint64_t* __t1521t, uint16_t* __t1522t, uint16_t* __t1523t, uint64_t size, char** __t1524t, uint64_t* __t1525t, uint16_t* __t1526t, uint16_t* __t1527t) {
  char* buffer__unsafe_ptr=*__t1520t;
  uint64_t buffer__unsafe_size=*__t1521t;
  uint16_t buffer__unsafe_offset=*__t1522t;
  uint16_t buffer__unsafe_align=*__t1523t;
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
  *__t1520t=buffer__unsafe_ptr;
  *__t1521t=buffer__unsafe_size;
  *__t1522t=buffer__unsafe_offset;
  *__t1523t=buffer__unsafe_align;
  *__t1524t=buffer__unsafe_ptr;
  *__t1525t=buffer__unsafe_size;
  *__t1526t=buffer__unsafe_offset;
  *__t1527t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1528t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1528t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1529t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1529t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1530t) {
  *__t1530t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1531t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1531t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1532t, uint64_t* __t1533t, uint16_t* __t1534t, uint16_t* __t1535t, uint64_t i, char** __t1536t) {
  char* buffer__unsafe_ptr=*__t1532t;
  uint64_t buffer__unsafe_size=*__t1533t;
  uint16_t buffer__unsafe_offset=*__t1534t;
  uint16_t buffer__unsafe_align=*__t1535t;
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
  *__t1532t=buffer__unsafe_ptr;
  *__t1533t=buffer__unsafe_size;
  *__t1534t=buffer__unsafe_offset;
  *__t1535t=buffer__unsafe_align;
  *__t1536t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1537t) {
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
  *__t1537t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1538t) {
  goto __t_return;
  __t_return:
  *__t1538t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1467t(char** __t1539t, uint64_t* __t1540t, uint16_t* __t1541t, uint16_t* __t1542t) {
  char* __t1470t__unsafe_ptr=0;
  uint64_t __t1470t__unsafe_size=0;
  uint16_t __t1470t__unsafe_offset=0;
  uint16_t __t1470t__unsafe_align=0;
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__unsafe_size=0;
  uint16_t __t1471t__unsafe_offset=0;
  uint16_t __t1471t__unsafe_align=0;
  uint64_t __t1472t=0;
  char* __t1473t__unsafe_ptr=0;
  uint64_t __t1473t__unsafe_size=0;
  uint16_t __t1473t__unsafe_offset=0;
  uint16_t __t1473t__unsafe_align=0;
  char __t1474t____t517t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1475t=0;
  char* __t1476t__=0;
  double __t1477t=0;
  uint64_t __t1478t=0;
  char* __t1479t__=0;
  double __t1480t=0;
  uint64_t __t1481t=0;
  char* __t1482t__=0;
  double __t1483t__number=0;
  uint64_t __t1487t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1468t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align);
  __t1471t__unsafe_ptr=__t1470t__unsafe_ptr;
  __t1471t__unsafe_size=__t1470t__unsafe_size;
  __t1471t__unsafe_offset=__t1470t__unsafe_offset;
  __t1471t__unsafe_align=__t1470t__unsafe_align;
  __t1472t=2;
  __t_errcode=alloc__t515t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,__t1472t,&__t1473t__unsafe_ptr,&__t1473t__unsafe_size,&__t1473t__unsafe_offset,&__t1473t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1473t__unsafe_ptr;
  x__unsafe_size=__t1473t__unsafe_size;
  x__unsafe_offset=__t1473t__unsafe_offset;
  x__unsafe_align=__t1473t__unsafe_align;
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
  __t1478t=1;
  __t_errcode=mutget__t590t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1478t,&__t1479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1480t=2.0;
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1479t__,&__t1480t,8);
  __t1481t=1;
  __t_errcode=get__t597t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1481t,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1483t__number,__t1482t__,8);
  print__t380t(__t1483t__number);
  goto __t_return;
  
  __t_failure:print__t373t(__t1485t,__t369t);
  len__t604t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t388t(x__unsafe_size);
  exists__t442t(x__unsafe_ptr,&__t1474t____t517t__);
  if(__t1474t____t517t__){
  free__t508t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1539t=x__unsafe_ptr;
  *__t1540t=x__unsafe_size;
  *__t1541t=x__unsafe_offset;
  *__t1542t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1489t(char** __t1543t, uint64_t* __t1544t, uint16_t* __t1545t, uint16_t* __t1546t, char** __t1547t, uint64_t* __t1548t, uint16_t* __t1549t, uint16_t* __t1550t, char** __t1551t, uint64_t* __t1552t, uint16_t* __t1553t, uint16_t* __t1554t) {
  char* __t1490t__unsafe_ptr=0;
  uint64_t __t1490t__unsafe_size=0;
  uint16_t __t1490t__unsafe_offset=0;
  uint16_t __t1490t__unsafe_align=0;
  char __t1491t____t1474t____t517t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1492t__unsafe_ptr=0;
  uint64_t __t1492t__unsafe_size=0;
  uint16_t __t1492t__unsafe_offset=0;
  uint16_t __t1492t__unsafe_align=0;
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__unsafe_size=0;
  uint16_t __t1493t__unsafe_offset=0;
  uint16_t __t1493t__unsafe_align=0;
  uint64_t __t1494t=0;
  char* __t1495t__unsafe_ptr=0;
  uint64_t __t1495t__unsafe_size=0;
  uint16_t __t1495t__unsafe_offset=0;
  uint16_t __t1495t__unsafe_align=0;
  char __t1496t____t517t__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1467t(&__t1490t__unsafe_ptr,&__t1490t__unsafe_size,&__t1490t__unsafe_offset,&__t1490t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1490t__unsafe_ptr;
  t__unsafe_size=__t1490t__unsafe_size;
  t__unsafe_offset=__t1490t__unsafe_offset;
  t__unsafe_align=__t1490t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1468t(&__t1492t__unsafe_ptr,&__t1492t__unsafe_size,&__t1492t__unsafe_offset,&__t1492t__unsafe_align);
  __t1493t__unsafe_ptr=__t1492t__unsafe_ptr;
  __t1493t__unsafe_size=__t1492t__unsafe_size;
  __t1493t__unsafe_offset=__t1492t__unsafe_offset;
  __t1493t__unsafe_align=__t1492t__unsafe_align;
  __t1494t=3;
  __t_errcode=alloc__t515t(&__t1493t__unsafe_ptr,&__t1493t__unsafe_size,&__t1493t__unsafe_offset,&__t1493t__unsafe_align,__t1494t,&__t1495t__unsafe_ptr,&__t1495t__unsafe_size,&__t1495t__unsafe_offset,&__t1495t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1495t__unsafe_ptr;
  k__unsafe_size=__t1495t__unsafe_size;
  k__unsafe_offset=__t1495t__unsafe_offset;
  k__unsafe_align=__t1495t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(k__unsafe_ptr,&__t1496t____t517t__);
  if(__t1496t____t517t__){
  free__t508t(&k__unsafe_ptr);
  }
  print__t373t(__t1485t,__t369t);
  len__t604t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t388t(t__unsafe_size);
  exists__t442t(t__unsafe_ptr,&__t1491t____t1474t____t517t__);
  if(__t1491t____t1474t____t517t__){
  free__t508t(&t__unsafe_ptr);
  }
  __t_return:
  *__t1543t=t__unsafe_ptr;
  *__t1544t=t__unsafe_size;
  *__t1545t=t__unsafe_offset;
  *__t1546t=t__unsafe_align;
  *__t1547t=j__unsafe_ptr;
  *__t1548t=j__unsafe_size;
  *__t1549t=j__unsafe_offset;
  *__t1550t=j__unsafe_align;
  *__t1551t=k__unsafe_ptr;
  *__t1552t=k__unsafe_size;
  *__t1553t=k__unsafe_offset;
  *__t1554t=k__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1497t() {
  char* __t1499t__t__unsafe_ptr=0;
  uint64_t __t1499t__t__unsafe_size=0;
  uint16_t __t1499t__t__unsafe_offset=0;
  uint16_t __t1499t__t__unsafe_align=0;
  char* __t1499t__j__unsafe_ptr=0;
  uint64_t __t1499t__j__unsafe_size=0;
  uint16_t __t1499t__j__unsafe_offset=0;
  uint16_t __t1499t__j__unsafe_align=0;
  char* __t1499t__k__unsafe_ptr=0;
  uint64_t __t1499t__k__unsafe_size=0;
  uint16_t __t1499t__k__unsafe_offset=0;
  uint16_t __t1499t__k__unsafe_align=0;
  char __t1500t____t1491t____t1474t____t517t__=0;
  char __t1500t____t1496t____t517t__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __t1501t=0;
  char* __t1502t__=0;
  double __t1503t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test2__t1489t(&__t1499t__t__unsafe_ptr,&__t1499t__t__unsafe_size,&__t1499t__t__unsafe_offset,&__t1499t__t__unsafe_align,&__t1499t__j__unsafe_ptr,&__t1499t__j__unsafe_size,&__t1499t__j__unsafe_offset,&__t1499t__j__unsafe_align,&__t1499t__k__unsafe_ptr,&__t1499t__k__unsafe_size,&__t1499t__k__unsafe_offset,&__t1499t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1499t__t__unsafe_ptr;
  t__t__unsafe_size=__t1499t__t__unsafe_size;
  t__t__unsafe_offset=__t1499t__t__unsafe_offset;
  t__t__unsafe_align=__t1499t__t__unsafe_align;
  t__j__unsafe_ptr=__t1499t__j__unsafe_ptr;
  t__j__unsafe_size=__t1499t__j__unsafe_size;
  t__j__unsafe_offset=__t1499t__j__unsafe_offset;
  t__j__unsafe_align=__t1499t__j__unsafe_align;
  t__k__unsafe_ptr=__t1499t__k__unsafe_ptr;
  t__k__unsafe_size=__t1499t__k__unsafe_size;
  t__k__unsafe_offset=__t1499t__k__unsafe_offset;
  t__k__unsafe_align=__t1499t__k__unsafe_align;
  __t1501t=1;
  __t_errcode=get__t597t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1501t,&__t1502t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1502t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1503t__number,__t1502t__,8);
  print__t380t(__t1503t__number);
  
  __t_failure:exists__t442t(__t1499t__k__unsafe_ptr,&__t1500t____t1496t____t517t__);
  if(__t1500t____t1496t____t517t__){
  free__t508t(&__t1499t__k__unsafe_ptr);
  }
  print__t373t(__t1485t,__t369t);
  len__t604t(__t1499t__t__unsafe_ptr,__t1499t__t__unsafe_size,__t1499t__t__unsafe_offset,__t1499t__t__unsafe_align,&__t1499t__t__unsafe_size);
  print__t388t(__t1499t__t__unsafe_size);
  exists__t442t(__t1499t__t__unsafe_ptr,&__t1500t____t1491t____t1474t____t517t__);
  if(__t1500t____t1491t____t1474t____t517t__){
  free__t508t(&__t1499t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1497t();return 0;}