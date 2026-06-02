#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1529t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1534t(char** __t1560t, uint64_t* __t1561t, uint16_t* __t1562t, uint16_t* __t1563t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1560t=unsafe_ptr;
  *__t1561t=unsafe_size;
  *__t1562t=unsafe_offset;
  *__t1563t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1564t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1565t) {
  char* allocated=*__t1565t;
  if(allocated){
  free(allocated);
  }
  *__t1565t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1566t) {
  int value=0;
  *__t1566t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1567t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1567t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1568t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1568t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1569t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1570t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1570t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1571t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1571t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1572t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1572t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1573t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1574t) {
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
  *__t1574t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1575t, uint64_t* __t1576t, uint16_t* __t1577t, uint16_t* __t1578t, uint64_t size, char** __t1579t, uint64_t* __t1580t, uint16_t* __t1581t, uint16_t* __t1582t) {
  char* buffer__unsafe_ptr=*__t1575t;
  uint64_t buffer__unsafe_size=*__t1576t;
  uint16_t buffer__unsafe_offset=*__t1577t;
  uint16_t buffer__unsafe_align=*__t1578t;
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
  *__t1575t=buffer__unsafe_ptr;
  *__t1576t=buffer__unsafe_size;
  *__t1577t=buffer__unsafe_offset;
  *__t1578t=buffer__unsafe_align;
  *__t1579t=buffer__unsafe_ptr;
  *__t1580t=buffer__unsafe_size;
  *__t1581t=buffer__unsafe_offset;
  *__t1582t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1583t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1583t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1584t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1584t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1585t) {
  *__t1585t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1586t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1586t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1587t, uint64_t* __t1588t, uint16_t* __t1589t, uint16_t* __t1590t, uint64_t i, char** __t1591t) {
  char* buffer__unsafe_ptr=*__t1587t;
  uint64_t buffer__unsafe_size=*__t1588t;
  uint16_t buffer__unsafe_offset=*__t1589t;
  uint16_t buffer__unsafe_align=*__t1590t;
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
  *__t1587t=buffer__unsafe_ptr;
  *__t1588t=buffer__unsafe_size;
  *__t1589t=buffer__unsafe_offset;
  *__t1590t=buffer__unsafe_align;
  *__t1591t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1509t(double x, double y, double* __t1592t, double* __t1593t) {
  goto __t_return;
  __t_return:
  *__t1592t=x;
  *__t1593t=y;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1527t(double x, double y, double z, double* __t1594t, double* __t1595t, double* __t1596t) {
  double __t1528t__x=0;
  double __t1528t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1509t(x,y,&__t1528t__x,&__t1528t__y);
  plane__x=__t1528t__x;
  plane__y=__t1528t__y;
  print__t376t(__t1529t);
  goto __t_return;
  __t_return:
  *__t1594t=plane__x;
  *__t1595t=plane__y;
  *__t1596t=z;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1597t) {
  goto __t_return;
  __t_return:
  *__t1597t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t1598t, uint64_t* __t1599t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t1598t=from;
  *__t1599t=to;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t1600t, uint64_t r__to, uint64_t* __t1601t) {
  uint64_t r__from=*__t1600t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1600t=r__from;
  *__t1601t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1602t) {
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
  *__t1602t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1603t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1603t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1604t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1604t=z;
}

static inline __attribute__((always_inline)) int sum__t1512t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1605t, double* __t1606t) {
  double __t1513t=0;
  double __t1514t=0;
  double x=0;
  double __t1515t=0;
  double __t1516t=0;
  double y=0;
  uint64_t __t1517t__=0;
  uint64_t __t1518t__from=0;
  uint64_t __t1518t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1519t=0;
  uint64_t __t1520t__=0;
  uint64_t i=0;
  char* __t1521t__=0;
  double __t1522t__x=0;
  double __t1522t__y=0;
  double __t1523t__=0;
  char* __t1524t__=0;
  double __t1525t__x=0;
  double __t1525t__y=0;
  double __t1526t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1513t=0.0;
  __t1514t=__t1513t;
  x=__t1514t;
  __t1515t=0.0;
  __t1516t=__t1515t;
  y=__t1516t;
  len__t605t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1517t__);
  range__t468t(__t1517t__,&__t1518t__from,&__t1518t__to);
  it__from=__t1518t__from;
  it__to=__t1518t__to;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t1520t__);
  __t1519t=__t_complain;
  i=__t1520t__;
  __t1519t=__t1519t==0;
  if(!__t1519t){
  break;
  }
  __t_errcode=get__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1522t__x,__t1521t__,8);
  memcpy(&__t1522t__y,__t1521t__+8,8);
  add__t153t(x,__t1522t__x,&__t1523t__);
  x=__t1523t__;
  __t_errcode=get__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1524t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1525t__x,__t1524t__,8);
  memcpy(&__t1525t__y,__t1524t__+8,8);
  add__t153t(y,__t1525t__y,&__t1526t__);
  y=__t1526t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1605t=x;
  *__t1606t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1532t() {
  char* __t1536t__unsafe_ptr=0;
  uint64_t __t1536t__unsafe_size=0;
  uint16_t __t1536t__unsafe_offset=0;
  uint16_t __t1536t__unsafe_align=0;
  char* __t1537t__unsafe_ptr=0;
  uint64_t __t1537t__unsafe_size=0;
  uint16_t __t1537t__unsafe_offset=0;
  uint16_t __t1537t__unsafe_align=0;
  uint64_t __t1538t=0;
  char* __t1539t__unsafe_ptr=0;
  uint64_t __t1539t__unsafe_size=0;
  uint16_t __t1539t__unsafe_offset=0;
  uint16_t __t1539t__unsafe_align=0;
  char __t1540t____t518t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1541t=0;
  char* __t1542t__=0;
  double __t1543t=0;
  double __t1544t=0;
  double __t1545t=0;
  double __t1546t__plane__x=0;
  double __t1546t__plane__y=0;
  double __t1546t__z=0;
  uint64_t __t1547t=0;
  char* __t1548t__=0;
  double __t1549t=0;
  double __t1550t=0;
  double __t1551t=0;
  double __t1552t__plane__x=0;
  double __t1552t__plane__y=0;
  double __t1552t__z=0;
  char* __t1553t__unsafe_ptr=0;
  uint64_t __t1553t__unsafe_size=0;
  uint16_t __t1553t__unsafe_offset=0;
  uint16_t __t1553t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1557t__x=0;
  double __t1557t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1534t(&__t1536t__unsafe_ptr,&__t1536t__unsafe_size,&__t1536t__unsafe_offset,&__t1536t__unsafe_align);
  __t1537t__unsafe_ptr=__t1536t__unsafe_ptr;
  __t1537t__unsafe_size=__t1536t__unsafe_size;
  __t1537t__unsafe_offset=__t1536t__unsafe_offset;
  __t1537t__unsafe_align=__t1536t__unsafe_align;
  __t1538t=10;
  __t_errcode=alloc__t516t(&__t1537t__unsafe_ptr,&__t1537t__unsafe_size,&__t1537t__unsafe_offset,&__t1537t__unsafe_align,__t1538t,&__t1539t__unsafe_ptr,&__t1539t__unsafe_size,&__t1539t__unsafe_offset,&__t1539t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1539t__unsafe_ptr;
  points__unsafe_size=__t1539t__unsafe_size;
  points__unsafe_offset=__t1539t__unsafe_offset;
  points__unsafe_align=__t1539t__unsafe_align;
  __t1541t=0;
  __t_errcode=mutget__t591t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1541t,&__t1542t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1543t=1.0;
  __t1544t=2.0;
  __t1545t=3.0;
  Point3D__t1527t(__t1543t,__t1544t,__t1545t,&__t1546t__plane__x,&__t1546t__plane__y,&__t1546t__z);
  if(!__t1542t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1542t__,&__t1546t__plane__x,8);
  memcpy(__t1542t__+8,&__t1546t__plane__y,8);
  memcpy(__t1542t__+16,&__t1546t__z,8);
  __t1547t=1;
  __t_errcode=mutget__t591t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1547t,&__t1548t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1549t=1.0;
  __t1550t=2.0;
  __t1551t=3.0;
  Point3D__t1527t(__t1549t,__t1550t,__t1551t,&__t1552t__plane__x,&__t1552t__plane__y,&__t1552t__z);
  if(!__t1548t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1548t__,&__t1552t__plane__x,8);
  memcpy(__t1548t__+8,&__t1552t__plane__y,8);
  memcpy(__t1548t__+16,&__t1552t__z,8);
  __t1553t__unsafe_ptr=points__unsafe_ptr;
  __t1553t__unsafe_size=points__unsafe_size;
  __t1553t__unsafe_offset=points__unsafe_offset+0;
  __t1553t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1553t__unsafe_ptr;
  plane__unsafe_size=__t1553t__unsafe_size;
  plane__unsafe_offset=__t1553t__unsafe_offset;
  plane__unsafe_align=__t1553t__unsafe_align;
  __t_errcode=sum__t1512t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1557t__x,&__t1557t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1557t__x;
  sums__y=__t1557t__y;
  print__t381t(sums__x);
  print__t381t(sums__y);
  
  __t_failure:exists__t443t(__t1539t__unsafe_ptr,&__t1540t____t518t__);
  if(__t1540t____t518t__){
  free__t509t(&__t1539t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1532t();return 0;}