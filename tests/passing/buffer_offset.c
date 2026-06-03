#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1571t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1576t(char** __t1602t, uint64_t* __t1603t, uint16_t* __t1604t, uint16_t* __t1605t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1602t=unsafe_ptr;
  *__t1603t=unsafe_size;
  *__t1604t=unsafe_offset;
  *__t1605t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1606t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1606t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1607t) {
  char* allocated=*__t1607t;
  if(allocated){
  free(allocated);
  }
  *__t1607t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1608t) {
  int value=0;
  *__t1608t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1609t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1609t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1610t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1610t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1611t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1611t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1612t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1612t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1613t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1613t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1614t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1614t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1615t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1616t) {
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
  *__t1616t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1617t, uint64_t* __t1618t, uint16_t* __t1619t, uint16_t* __t1620t, uint64_t size, char** __t1621t, uint64_t* __t1622t, uint16_t* __t1623t, uint16_t* __t1624t) {
  char* buffer__unsafe_ptr=*__t1617t;
  uint64_t buffer__unsafe_size=*__t1618t;
  uint16_t buffer__unsafe_offset=*__t1619t;
  uint16_t buffer__unsafe_align=*__t1620t;
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
  *__t1617t=buffer__unsafe_ptr;
  *__t1618t=buffer__unsafe_size;
  *__t1619t=buffer__unsafe_offset;
  *__t1620t=buffer__unsafe_align;
  *__t1621t=buffer__unsafe_ptr;
  *__t1622t=buffer__unsafe_size;
  *__t1623t=buffer__unsafe_offset;
  *__t1624t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1625t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1625t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1626t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1626t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1627t) {
  *__t1627t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1628t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1628t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1629t, uint64_t* __t1630t, uint16_t* __t1631t, uint16_t* __t1632t, uint64_t i, char** __t1633t) {
  char* buffer__unsafe_ptr=*__t1629t;
  uint64_t buffer__unsafe_size=*__t1630t;
  uint16_t buffer__unsafe_offset=*__t1631t;
  uint16_t buffer__unsafe_align=*__t1632t;
  char __t630t__=0;
  uint64_t __t631t__=0;
  uint64_t __t632t__=0;
  uint64_t __t633t__=0;
  uint64_t __t634t__=0;
  char* __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t630t__);
  if(__t630t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t631t__);
  mul__t199t(i,__t631t__,&__t632t__);
  nat__t507t(buffer__unsafe_offset,&__t633t__);
  add__t175t(__t632t__,__t633t__,&__t634t__);
  add__t505t(buffer__unsafe_ptr,__t634t__,&__t635t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1629t=buffer__unsafe_ptr;
  *__t1630t=buffer__unsafe_size;
  *__t1631t=buffer__unsafe_offset;
  *__t1632t=buffer__unsafe_align;
  *__t1633t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1551t(double x, double y, double* __t1634t, double* __t1635t) {
  goto __t_return;
  __t_return:
  *__t1634t=x;
  *__t1635t=y;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1569t(double x, double y, double z, double* __t1636t, double* __t1637t, double* __t1638t) {
  double __t1570t__x=0;
  double __t1570t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1551t(x,y,&__t1570t__x,&__t1570t__y);
  plane__x=__t1570t__x;
  plane__y=__t1570t__y;
  print__t380t(__t1571t);
  goto __t_return;
  __t_return:
  *__t1636t=plane__x;
  *__t1637t=plane__y;
  *__t1638t=z;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1639t) {
  goto __t_return;
  __t_return:
  *__t1639t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1640t, uint64_t* __t1641t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1640t=from;
  *__t1641t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1642t, uint64_t* __t1643t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1642t=__t473t__from;
  *__t1643t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1644t, uint64_t r__to, uint64_t* __t1645t) {
  uint64_t r__from=*__t1644t;
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
  *__t1644t=r__from;
  *__t1645t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1646t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1646t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1647t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1647t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1648t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1648t=z;
}

static inline __attribute__((always_inline)) int sum__t1554t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1649t, double* __t1650t) {
  double __t1555t=0;
  double __t1556t=0;
  double x=0;
  double __t1557t=0;
  double __t1558t=0;
  double y=0;
  uint64_t __t1559t__=0;
  uint64_t __t1560t__from=0;
  uint64_t __t1560t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1561t=0;
  uint64_t __t1562t__=0;
  uint64_t i=0;
  char* __t1563t__=0;
  double __t1564t__x=0;
  double __t1564t__y=0;
  double __t1565t__=0;
  char* __t1566t__=0;
  double __t1567t__x=0;
  double __t1567t__y=0;
  double __t1568t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1555t=0.0;
  __t1556t=__t1555t;
  x=__t1556t;
  __t1557t=0.0;
  __t1558t=__t1557t;
  y=__t1558t;
  len__t643t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1559t__);
  range__t471t(__t1559t__,&__t1560t__from,&__t1560t__to);
  it__from=__t1560t__from;
  it__to=__t1560t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t1562t__);
  __t1561t=__t_complain;
  i=__t1562t__;
  __t1561t=__t1561t==0;
  if(!__t1561t){
  break;
  }
  __t_errcode=get__t636t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1564t__x,__t1563t__,8);
  memcpy(&__t1564t__y,__t1563t__+8,8);
  add__t153t(x,__t1564t__x,&__t1565t__);
  x=__t1565t__;
  __t_errcode=get__t636t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1566t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1567t__x,__t1566t__,8);
  memcpy(&__t1567t__y,__t1566t__+8,8);
  add__t153t(y,__t1567t__y,&__t1568t__);
  y=__t1568t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1649t=x;
  *__t1650t=y;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1574t() {
  char* __t1578t__unsafe_ptr=0;
  uint64_t __t1578t__unsafe_size=0;
  uint16_t __t1578t__unsafe_offset=0;
  uint16_t __t1578t__unsafe_align=0;
  char* __t1579t__unsafe_ptr=0;
  uint64_t __t1579t__unsafe_size=0;
  uint16_t __t1579t__unsafe_offset=0;
  uint16_t __t1579t__unsafe_align=0;
  uint64_t __t1580t=0;
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__unsafe_size=0;
  uint16_t __t1581t__unsafe_offset=0;
  uint16_t __t1581t__unsafe_align=0;
  char __t1582t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1583t=0;
  char* __t1584t__=0;
  double __t1585t=0;
  double __t1586t=0;
  double __t1587t=0;
  double __t1588t__plane__x=0;
  double __t1588t__plane__y=0;
  double __t1588t__z=0;
  uint64_t __t1589t=0;
  char* __t1590t__=0;
  double __t1591t=0;
  double __t1592t=0;
  double __t1593t=0;
  double __t1594t__plane__x=0;
  double __t1594t__plane__y=0;
  double __t1594t__z=0;
  char* __t1595t__unsafe_ptr=0;
  uint64_t __t1595t__unsafe_size=0;
  uint16_t __t1595t__unsafe_offset=0;
  uint16_t __t1595t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1599t__x=0;
  double __t1599t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1576t(&__t1578t__unsafe_ptr,&__t1578t__unsafe_size,&__t1578t__unsafe_offset,&__t1578t__unsafe_align);
  __t1579t__unsafe_ptr=__t1578t__unsafe_ptr;
  __t1579t__unsafe_size=__t1578t__unsafe_size;
  __t1579t__unsafe_offset=__t1578t__unsafe_offset;
  __t1579t__unsafe_align=__t1578t__unsafe_align;
  __t1580t=10;
  __t_errcode=alloc__t532t(&__t1579t__unsafe_ptr,&__t1579t__unsafe_size,&__t1579t__unsafe_offset,&__t1579t__unsafe_align,__t1580t,&__t1581t__unsafe_ptr,&__t1581t__unsafe_size,&__t1581t__unsafe_offset,&__t1581t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1581t__unsafe_ptr;
  points__unsafe_size=__t1581t__unsafe_size;
  points__unsafe_offset=__t1581t__unsafe_offset;
  points__unsafe_align=__t1581t__unsafe_align;
  __t1583t=0;
  __t_errcode=mutget__t629t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1583t,&__t1584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1585t=1.0;
  __t1586t=2.0;
  __t1587t=3.0;
  Point3D__t1569t(__t1585t,__t1586t,__t1587t,&__t1588t__plane__x,&__t1588t__plane__y,&__t1588t__z);
  if(!__t1584t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1584t__,&__t1588t__plane__x,8);
  memcpy(__t1584t__+8,&__t1588t__plane__y,8);
  memcpy(__t1584t__+16,&__t1588t__z,8);
  __t1589t=1;
  __t_errcode=mutget__t629t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1589t,&__t1590t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1591t=1.0;
  __t1592t=2.0;
  __t1593t=3.0;
  Point3D__t1569t(__t1591t,__t1592t,__t1593t,&__t1594t__plane__x,&__t1594t__plane__y,&__t1594t__z);
  if(!__t1590t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1590t__,&__t1594t__plane__x,8);
  memcpy(__t1590t__+8,&__t1594t__plane__y,8);
  memcpy(__t1590t__+16,&__t1594t__z,8);
  __t1595t__unsafe_ptr=points__unsafe_ptr;
  __t1595t__unsafe_size=points__unsafe_size;
  __t1595t__unsafe_offset=points__unsafe_offset+0;
  __t1595t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1595t__unsafe_ptr;
  plane__unsafe_size=__t1595t__unsafe_size;
  plane__unsafe_offset=__t1595t__unsafe_offset;
  plane__unsafe_align=__t1595t__unsafe_align;
  __t_errcode=sum__t1554t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1599t__x,&__t1599t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1599t__x;
  sums__y=__t1599t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1581t__unsafe_ptr,&__t1582t____t534t__);
  if(__t1582t____t534t__){
  free__t503t(&__t1581t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1574t();return 0;}