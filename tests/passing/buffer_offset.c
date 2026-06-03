#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1575t="starting point creation";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1580t(char** __t1606t, uint64_t* __t1607t, uint16_t* __t1608t, uint16_t* __t1609t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1606t=unsafe_ptr;
  *__t1607t=unsafe_size;
  *__t1608t=unsafe_offset;
  *__t1609t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1610t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1610t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1611t) {
  char* allocated=*__t1611t;
  if(allocated){
  free(allocated);
  }
  *__t1611t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1612t) {
  int value=0;
  *__t1612t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1613t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1613t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1614t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1614t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1615t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1616t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1616t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1617t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1617t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1618t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1618t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1619t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1619t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1620t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1620t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1621t, uint64_t* __t1622t, uint16_t* __t1623t, uint16_t* __t1624t, uint64_t size, char** __t1625t, uint64_t* __t1626t, uint16_t* __t1627t, uint16_t* __t1628t) {
  char* buffer__unsafe_ptr=*__t1621t;
  uint64_t buffer__unsafe_size=*__t1622t;
  uint16_t buffer__unsafe_offset=*__t1623t;
  uint16_t buffer__unsafe_align=*__t1624t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1621t=buffer__unsafe_ptr;
  *__t1622t=buffer__unsafe_size;
  *__t1623t=buffer__unsafe_offset;
  *__t1624t=buffer__unsafe_align;
  *__t1625t=buffer__unsafe_ptr;
  *__t1626t=buffer__unsafe_size;
  *__t1627t=buffer__unsafe_offset;
  *__t1628t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1629t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1629t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1630t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1630t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1631t) {
  *__t1631t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1632t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1632t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1633t, uint64_t* __t1634t, uint16_t* __t1635t, uint16_t* __t1636t, uint64_t i, char** __t1637t) {
  char* buffer__unsafe_ptr=*__t1633t;
  uint64_t buffer__unsafe_size=*__t1634t;
  uint16_t buffer__unsafe_offset=*__t1635t;
  uint16_t buffer__unsafe_align=*__t1636t;
  char __t634t__=0;
  uint64_t __t635t__=0;
  uint64_t __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t__=0;
  char* __t639t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t634t__);
  if(__t634t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t635t__);
  mul__t199t(i,__t635t__,&__t636t__);
  nat__t507t(buffer__unsafe_offset,&__t637t__);
  add__t175t(__t636t__,__t637t__,&__t638t__);
  add__t505t(buffer__unsafe_ptr,__t638t__,&__t639t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1633t=buffer__unsafe_ptr;
  *__t1634t=buffer__unsafe_size;
  *__t1635t=buffer__unsafe_offset;
  *__t1636t=buffer__unsafe_align;
  *__t1637t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1555t(double x, double y, double* __t1638t, double* __t1639t) {
  goto __t_return;
  __t_return:
  *__t1638t=x;
  *__t1639t=y;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1573t(double x, double y, double z, double* __t1640t, double* __t1641t, double* __t1642t) {
  double __t1574t__x=0;
  double __t1574t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1555t(x,y,&__t1574t__x,&__t1574t__y);
  plane__x=__t1574t__x;
  plane__y=__t1574t__y;
  print__t380t(__t1575t);
  goto __t_return;
  __t_return:
  *__t1640t=plane__x;
  *__t1641t=plane__y;
  *__t1642t=z;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1643t) {
  goto __t_return;
  __t_return:
  *__t1643t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1644t, uint64_t* __t1645t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1644t=from;
  *__t1645t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1646t, uint64_t* __t1647t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1646t=__t473t__from;
  *__t1647t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1648t, uint64_t r__to, uint64_t* __t1649t) {
  uint64_t r__from=*__t1648t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1648t=r__from;
  *__t1649t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1650t) {
  char __t641t__=0;
  uint64_t __t642t__=0;
  uint64_t __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  char* __t646t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t641t__);
  if(__t641t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t642t__);
  mul__t199t(i,__t642t__,&__t643t__);
  nat__t507t(buffer__unsafe_offset,&__t644t__);
  add__t175t(__t643t__,__t644t__,&__t645t__);
  add__t505t(buffer__unsafe_ptr,__t645t__,&__t646t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1650t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1651t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1651t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1652t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1652t=z;
}

static inline __attribute__((always_inline)) int sum__t1558t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1653t, double* __t1654t) {
  double __t1559t=0;
  double __t1560t=0;
  double x=0;
  double __t1561t=0;
  double __t1562t=0;
  double y=0;
  uint64_t __t1563t__=0;
  uint64_t __t1564t__from=0;
  uint64_t __t1564t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1565t=0;
  uint64_t __t1566t__=0;
  uint64_t i=0;
  char* __t1567t__=0;
  double __t1568t__x=0;
  double __t1568t__y=0;
  double __t1569t__=0;
  char* __t1570t__=0;
  double __t1571t__x=0;
  double __t1571t__y=0;
  double __t1572t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1559t=0.0;
  __t1560t=__t1559t;
  x=__t1560t;
  __t1561t=0.0;
  __t1562t=__t1561t;
  y=__t1562t;
  len__t647t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1563t__);
  range__t471t(__t1563t__,&__t1564t__from,&__t1564t__to);
  it__from=__t1564t__from;
  it__to=__t1564t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t1566t__);
  __t1565t=__t_complain;
  i=__t1566t__;
  __t1565t=__t1565t==0;
  if(!__t1565t){
  break;
  }
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1568t__x,__t1567t__,8);
  memcpy(&__t1568t__y,__t1567t__+8,8);
  add__t153t(x,__t1568t__x,&__t1569t__);
  x=__t1569t__;
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1570t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1571t__x,__t1570t__,8);
  memcpy(&__t1571t__y,__t1570t__+8,8);
  add__t153t(y,__t1571t__y,&__t1572t__);
  y=__t1572t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1653t=x;
  *__t1654t=y;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1578t() {
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__unsafe_size=0;
  uint16_t __t1582t__unsafe_offset=0;
  uint16_t __t1582t__unsafe_align=0;
  char* __t1583t__unsafe_ptr=0;
  uint64_t __t1583t__unsafe_size=0;
  uint16_t __t1583t__unsafe_offset=0;
  uint16_t __t1583t__unsafe_align=0;
  uint64_t __t1584t=0;
  char* __t1585t__unsafe_ptr=0;
  uint64_t __t1585t__unsafe_size=0;
  uint16_t __t1585t__unsafe_offset=0;
  uint16_t __t1585t__unsafe_align=0;
  char __t1586t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1587t=0;
  char* __t1588t__=0;
  double __t1589t=0;
  double __t1590t=0;
  double __t1591t=0;
  double __t1592t__plane__x=0;
  double __t1592t__plane__y=0;
  double __t1592t__z=0;
  uint64_t __t1593t=0;
  char* __t1594t__=0;
  double __t1595t=0;
  double __t1596t=0;
  double __t1597t=0;
  double __t1598t__plane__x=0;
  double __t1598t__plane__y=0;
  double __t1598t__z=0;
  char* __t1599t__unsafe_ptr=0;
  uint64_t __t1599t__unsafe_size=0;
  uint16_t __t1599t__unsafe_offset=0;
  uint16_t __t1599t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1603t__x=0;
  double __t1603t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1580t(&__t1582t__unsafe_ptr,&__t1582t__unsafe_size,&__t1582t__unsafe_offset,&__t1582t__unsafe_align);
  __t1583t__unsafe_ptr=__t1582t__unsafe_ptr;
  __t1583t__unsafe_size=__t1582t__unsafe_size;
  __t1583t__unsafe_offset=__t1582t__unsafe_offset;
  __t1583t__unsafe_align=__t1582t__unsafe_align;
  __t1584t=10;
  __t_errcode=alloc__t532t(&__t1583t__unsafe_ptr,&__t1583t__unsafe_size,&__t1583t__unsafe_offset,&__t1583t__unsafe_align,__t1584t,&__t1585t__unsafe_ptr,&__t1585t__unsafe_size,&__t1585t__unsafe_offset,&__t1585t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1585t__unsafe_ptr;
  points__unsafe_size=__t1585t__unsafe_size;
  points__unsafe_offset=__t1585t__unsafe_offset;
  points__unsafe_align=__t1585t__unsafe_align;
  __t1587t=0;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1587t,&__t1588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1589t=1.0;
  __t1590t=2.0;
  __t1591t=3.0;
  Point3D__t1573t(__t1589t,__t1590t,__t1591t,&__t1592t__plane__x,&__t1592t__plane__y,&__t1592t__z);
  if(!__t1588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1588t__,&__t1592t__plane__x,8);
  memcpy(__t1588t__+8,&__t1592t__plane__y,8);
  memcpy(__t1588t__+16,&__t1592t__z,8);
  __t1593t=1;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1593t,&__t1594t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1595t=1.0;
  __t1596t=2.0;
  __t1597t=3.0;
  Point3D__t1573t(__t1595t,__t1596t,__t1597t,&__t1598t__plane__x,&__t1598t__plane__y,&__t1598t__z);
  if(!__t1594t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1594t__,&__t1598t__plane__x,8);
  memcpy(__t1594t__+8,&__t1598t__plane__y,8);
  memcpy(__t1594t__+16,&__t1598t__z,8);
  __t1599t__unsafe_ptr=points__unsafe_ptr;
  __t1599t__unsafe_size=points__unsafe_size;
  __t1599t__unsafe_offset=points__unsafe_offset+0;
  __t1599t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1599t__unsafe_ptr;
  plane__unsafe_size=__t1599t__unsafe_size;
  plane__unsafe_offset=__t1599t__unsafe_offset;
  plane__unsafe_align=__t1599t__unsafe_align;
  __t_errcode=sum__t1558t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1603t__x,&__t1603t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1603t__x;
  sums__y=__t1603t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1585t__unsafe_ptr,&__t1586t____t534t__);
  if(__t1586t____t534t__){
  free__t503t(&__t1585t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1578t();return 0;}