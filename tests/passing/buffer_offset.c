#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1632t="starting point creation";
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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1637t(char** __t1663t, uint64_t* __t1664t, uint16_t* __t1665t, uint16_t* __t1666t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1663t=unsafe_ptr;
  *__t1664t=unsafe_size;
  *__t1665t=unsafe_offset;
  *__t1666t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1667t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1667t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1668t) {
  char* allocated=*__t1668t;
  if(allocated){
  free(allocated);
  }
  *__t1668t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1669t) {
  int value=0;
  *__t1669t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1670t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1670t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1671t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1671t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1672t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1672t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1673t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1673t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1674t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1674t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1675t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1675t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1676t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1676t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1677t) {
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
  *__t1677t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1678t, uint64_t* __t1679t, uint16_t* __t1680t, uint16_t* __t1681t, uint64_t size, char** __t1682t, uint64_t* __t1683t, uint16_t* __t1684t, uint16_t* __t1685t) {
  char* buffer__unsafe_ptr=*__t1678t;
  uint64_t buffer__unsafe_size=*__t1679t;
  uint16_t buffer__unsafe_offset=*__t1680t;
  uint16_t buffer__unsafe_align=*__t1681t;
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
  *__t1678t=buffer__unsafe_ptr;
  *__t1679t=buffer__unsafe_size;
  *__t1680t=buffer__unsafe_offset;
  *__t1681t=buffer__unsafe_align;
  *__t1682t=buffer__unsafe_ptr;
  *__t1683t=buffer__unsafe_size;
  *__t1684t=buffer__unsafe_offset;
  *__t1685t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1686t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1686t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1687t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1687t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1688t) {
  *__t1688t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1689t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1689t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1690t, uint64_t* __t1691t, uint16_t* __t1692t, uint16_t* __t1693t, uint64_t i, char** __t1694t) {
  char* buffer__unsafe_ptr=*__t1690t;
  uint64_t buffer__unsafe_size=*__t1691t;
  uint16_t buffer__unsafe_offset=*__t1692t;
  uint16_t buffer__unsafe_align=*__t1693t;
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
  *__t1690t=buffer__unsafe_ptr;
  *__t1691t=buffer__unsafe_size;
  *__t1692t=buffer__unsafe_offset;
  *__t1693t=buffer__unsafe_align;
  *__t1694t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1612t(double x, double y, double* __t1695t, double* __t1696t) {
  goto __t_return;
  __t_return:
  *__t1695t=x;
  *__t1696t=y;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1630t(double x, double y, double z, double* __t1697t, double* __t1698t, double* __t1699t) {
  double __t1631t__x=0;
  double __t1631t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1612t(x,y,&__t1631t__x,&__t1631t__y);
  plane__x=__t1631t__x;
  plane__y=__t1631t__y;
  print__t380t(__t1632t);
  goto __t_return;
  __t_return:
  *__t1697t=plane__x;
  *__t1698t=plane__y;
  *__t1699t=z;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1700t) {
  goto __t_return;
  __t_return:
  *__t1700t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1701t, uint64_t* __t1702t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1701t=from;
  *__t1702t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1703t, uint64_t* __t1704t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1703t=__t473t__from;
  *__t1704t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1705t, uint64_t r__to, uint64_t* __t1706t) {
  uint64_t r__from=*__t1705t;
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
  *__t1705t=r__from;
  *__t1706t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1707t) {
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
  *__t1707t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1708t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1708t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1709t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1709t=z;
}

static inline __attribute__((always_inline)) int sum__t1615t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1710t, double* __t1711t) {
  double __t1616t=0;
  double __t1617t=0;
  double x=0;
  double __t1618t=0;
  double __t1619t=0;
  double y=0;
  uint64_t __t1620t__=0;
  uint64_t __t1621t__from=0;
  uint64_t __t1621t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1622t=0;
  uint64_t __t1623t__=0;
  uint64_t i=0;
  char* __t1624t__=0;
  double __t1625t__x=0;
  double __t1625t__y=0;
  double __t1626t__=0;
  char* __t1627t__=0;
  double __t1628t__x=0;
  double __t1628t__y=0;
  double __t1629t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1616t=0.0;
  __t1617t=__t1616t;
  x=__t1617t;
  __t1618t=0.0;
  __t1619t=__t1618t;
  y=__t1619t;
  len__t647t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1620t__);
  range__t471t(__t1620t__,&__t1621t__from,&__t1621t__to);
  it__from=__t1621t__from;
  it__to=__t1621t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t1623t__);
  __t1622t=__t_complain;
  i=__t1623t__;
  __t1622t=__t1622t==0;
  if(!__t1622t){
  break;
  }
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1624t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1625t__x,__t1624t__,8);
  memcpy(&__t1625t__y,__t1624t__+8,8);
  add__t153t(x,__t1625t__x,&__t1626t__);
  x=__t1626t__;
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1627t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1628t__x,__t1627t__,8);
  memcpy(&__t1628t__y,__t1627t__+8,8);
  add__t153t(y,__t1628t__y,&__t1629t__);
  y=__t1629t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1710t=x;
  *__t1711t=y;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1635t() {
  char* __t1639t__unsafe_ptr=0;
  uint64_t __t1639t__unsafe_size=0;
  uint16_t __t1639t__unsafe_offset=0;
  uint16_t __t1639t__unsafe_align=0;
  char* __t1640t__unsafe_ptr=0;
  uint64_t __t1640t__unsafe_size=0;
  uint16_t __t1640t__unsafe_offset=0;
  uint16_t __t1640t__unsafe_align=0;
  uint64_t __t1641t=0;
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__unsafe_size=0;
  uint16_t __t1642t__unsafe_offset=0;
  uint16_t __t1642t__unsafe_align=0;
  char __t1643t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1644t=0;
  char* __t1645t__=0;
  double __t1646t=0;
  double __t1647t=0;
  double __t1648t=0;
  double __t1649t__plane__x=0;
  double __t1649t__plane__y=0;
  double __t1649t__z=0;
  uint64_t __t1650t=0;
  char* __t1651t__=0;
  double __t1652t=0;
  double __t1653t=0;
  double __t1654t=0;
  double __t1655t__plane__x=0;
  double __t1655t__plane__y=0;
  double __t1655t__z=0;
  char* __t1656t__unsafe_ptr=0;
  uint64_t __t1656t__unsafe_size=0;
  uint16_t __t1656t__unsafe_offset=0;
  uint16_t __t1656t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1660t__x=0;
  double __t1660t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1637t(&__t1639t__unsafe_ptr,&__t1639t__unsafe_size,&__t1639t__unsafe_offset,&__t1639t__unsafe_align);
  __t1640t__unsafe_ptr=__t1639t__unsafe_ptr;
  __t1640t__unsafe_size=__t1639t__unsafe_size;
  __t1640t__unsafe_offset=__t1639t__unsafe_offset;
  __t1640t__unsafe_align=__t1639t__unsafe_align;
  __t1641t=10;
  __t_errcode=alloc__t532t(&__t1640t__unsafe_ptr,&__t1640t__unsafe_size,&__t1640t__unsafe_offset,&__t1640t__unsafe_align,__t1641t,&__t1642t__unsafe_ptr,&__t1642t__unsafe_size,&__t1642t__unsafe_offset,&__t1642t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1642t__unsafe_ptr;
  points__unsafe_size=__t1642t__unsafe_size;
  points__unsafe_offset=__t1642t__unsafe_offset;
  points__unsafe_align=__t1642t__unsafe_align;
  __t1644t=0;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1644t,&__t1645t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1646t=1.0;
  __t1647t=2.0;
  __t1648t=3.0;
  Point3D__t1630t(__t1646t,__t1647t,__t1648t,&__t1649t__plane__x,&__t1649t__plane__y,&__t1649t__z);
  if(!__t1645t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1645t__,&__t1649t__plane__x,8);
  memcpy(__t1645t__+8,&__t1649t__plane__y,8);
  memcpy(__t1645t__+16,&__t1649t__z,8);
  __t1650t=1;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1650t,&__t1651t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1652t=1.0;
  __t1653t=2.0;
  __t1654t=3.0;
  Point3D__t1630t(__t1652t,__t1653t,__t1654t,&__t1655t__plane__x,&__t1655t__plane__y,&__t1655t__z);
  if(!__t1651t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1651t__,&__t1655t__plane__x,8);
  memcpy(__t1651t__+8,&__t1655t__plane__y,8);
  memcpy(__t1651t__+16,&__t1655t__z,8);
  __t1656t__unsafe_ptr=points__unsafe_ptr;
  __t1656t__unsafe_size=points__unsafe_size;
  __t1656t__unsafe_offset=points__unsafe_offset+0;
  __t1656t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1656t__unsafe_ptr;
  plane__unsafe_size=__t1656t__unsafe_size;
  plane__unsafe_offset=__t1656t__unsafe_offset;
  plane__unsafe_align=__t1656t__unsafe_align;
  __t_errcode=sum__t1615t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1660t__x,&__t1660t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1660t__x;
  sums__y=__t1660t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1642t__unsafe_ptr,&__t1643t____t534t__);
  if(__t1643t____t534t__){
  free__t503t(&__t1642t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1635t();return 0;}