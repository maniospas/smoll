#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1637t(char** __t1668t, uint64_t* __t1669t, uint16_t* __t1670t, uint16_t* __t1671t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1668t=unsafe_ptr;
  *__t1669t=unsafe_size;
  *__t1670t=unsafe_offset;
  *__t1671t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1672t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1672t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1673t) {
  char* allocated=*__t1673t;
  if(allocated){
  free(allocated);
  }
  *__t1673t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1674t) {
  int value=0;
  *__t1674t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1675t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1675t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1676t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1676t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1677t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1677t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1678t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1678t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1679t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1679t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1680t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1680t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1681t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1681t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1682t) {
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
  *__t1682t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1683t, uint64_t* __t1684t, uint16_t* __t1685t, uint16_t* __t1686t, uint64_t size, char** __t1687t, uint64_t* __t1688t, uint16_t* __t1689t, uint16_t* __t1690t) {
  char* buffer__unsafe_ptr=*__t1683t;
  uint64_t buffer__unsafe_size=*__t1684t;
  uint16_t buffer__unsafe_offset=*__t1685t;
  uint16_t buffer__unsafe_align=*__t1686t;
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
  *__t1683t=buffer__unsafe_ptr;
  *__t1684t=buffer__unsafe_size;
  *__t1685t=buffer__unsafe_offset;
  *__t1686t=buffer__unsafe_align;
  *__t1687t=buffer__unsafe_ptr;
  *__t1688t=buffer__unsafe_size;
  *__t1689t=buffer__unsafe_offset;
  *__t1690t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1691t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1691t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1692t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1692t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1693t) {
  *__t1693t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1694t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1694t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1695t, uint64_t* __t1696t, uint16_t* __t1697t, uint16_t* __t1698t, uint64_t i, char** __t1699t) {
  char* buffer__unsafe_ptr=*__t1695t;
  uint64_t buffer__unsafe_size=*__t1696t;
  uint16_t buffer__unsafe_offset=*__t1697t;
  uint16_t buffer__unsafe_align=*__t1698t;
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
  *__t1695t=buffer__unsafe_ptr;
  *__t1696t=buffer__unsafe_size;
  *__t1697t=buffer__unsafe_offset;
  *__t1698t=buffer__unsafe_align;
  *__t1699t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1612t(double x, double y, double* __t1700t, double* __t1701t) {
  goto __t_return;
  __t_return:
  *__t1700t=x;
  *__t1701t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1632t(double x, double y, double z, double* __t1702t, double* __t1703t, double* __t1704t) {
  double __t1633t__x=0;
  double __t1633t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1612t(x,y,&__t1633t__x,&__t1633t__y);
  plane__x=__t1633t__x;
  plane__y=__t1633t__y;
  goto __t_return;
  __t_return:
  *__t1702t=plane__x;
  *__t1703t=plane__y;
  *__t1704t=z;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1705t) {
  goto __t_return;
  __t_return:
  *__t1705t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1706t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1706t=z;
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
  uint64_t __t1620t=0;
  uint64_t __t1621t=0;
  uint64_t i=0;
  uint64_t __t1622t__=0;
  char __t1623t__=0;
  char* __t1624t__=0;
  double __t1625t__x=0;
  double __t1625t__y=0;
  double __t1626t__=0;
  char* __t1627t__=0;
  double __t1628t__x=0;
  double __t1628t__y=0;
  double __t1629t__=0;
  uint64_t __t1630t=0;
  uint64_t __t1631t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1616t=0.0;
  __t1617t=__t1616t;
  x=__t1617t;
  __t1618t=0.0;
  __t1619t=__t1618t;
  y=__t1619t;
  __t1620t=0;
  __t1621t=__t1620t;
  i=__t1621t;
  while(1){
  len__t647t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1622t__);
  lt__t252t(i,__t1622t__,&__t1623t__);
  if(!__t1623t__){
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
  __t1630t=1;
  add__t175t(i,__t1630t,&__t1631t__);
  i=__t1631t__;
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
  uint64_t __t1640t=0;
  char* __t1641t__unsafe_ptr=0;
  uint64_t __t1641t__unsafe_size=0;
  uint16_t __t1641t__unsafe_offset=0;
  uint16_t __t1641t__unsafe_align=0;
  char __t1642t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1643t=0;
  char* __t1644t__=0;
  double __t1645t=0;
  double __t1646t=0;
  double __t1647t=0;
  double __t1648t=0;
  double __t1649t=0;
  double __t1650t=0;
  double __t1651t__plane__x=0;
  double __t1651t__plane__y=0;
  double __t1651t__z=0;
  uint64_t __t1652t=0;
  char* __t1653t__=0;
  double __t1654t=0;
  double __t1655t=0;
  double __t1656t=0;
  double __t1657t=0;
  double __t1658t=0;
  double __t1659t=0;
  double __t1660t__plane__x=0;
  double __t1660t__plane__y=0;
  double __t1660t__z=0;
  char* __t1661t__unsafe_ptr=0;
  uint64_t __t1661t__unsafe_size=0;
  uint16_t __t1661t__unsafe_offset=0;
  uint16_t __t1661t__unsafe_align=0;
  double __t1665t__x=0;
  double __t1665t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1637t(&__t1639t__unsafe_ptr,&__t1639t__unsafe_size,&__t1639t__unsafe_offset,&__t1639t__unsafe_align);
  __t1640t=10;
  __t_errcode=alloc__t532t(&__t1639t__unsafe_ptr,&__t1639t__unsafe_size,&__t1639t__unsafe_offset,&__t1639t__unsafe_align,__t1640t,&__t1641t__unsafe_ptr,&__t1641t__unsafe_size,&__t1641t__unsafe_offset,&__t1641t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1641t__unsafe_ptr;
  points__unsafe_size=__t1641t__unsafe_size;
  points__unsafe_offset=__t1641t__unsafe_offset;
  points__unsafe_align=__t1641t__unsafe_align;
  __t1643t=0;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1643t,&__t1644t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1645t=1.0;
  __t1646t=__t1645t;
  __t1647t=2.0;
  __t1648t=__t1647t;
  __t1649t=3.0;
  __t1650t=__t1649t;
  Point3D__t1632t(__t1646t,__t1648t,__t1650t,&__t1651t__plane__x,&__t1651t__plane__y,&__t1651t__z);
  if(!__t1644t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1644t__,&__t1651t__plane__x,8);
  memcpy(__t1644t__+8,&__t1651t__plane__y,8);
  memcpy(__t1644t__+16,&__t1651t__z,8);
  __t1652t=1;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1652t,&__t1653t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1654t=1.0;
  __t1655t=__t1654t;
  __t1656t=2.0;
  __t1657t=__t1656t;
  __t1658t=3.0;
  __t1659t=__t1658t;
  Point3D__t1632t(__t1655t,__t1657t,__t1659t,&__t1660t__plane__x,&__t1660t__plane__y,&__t1660t__z);
  if(!__t1653t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1653t__,&__t1660t__plane__x,8);
  memcpy(__t1653t__+8,&__t1660t__plane__y,8);
  memcpy(__t1653t__+16,&__t1660t__z,8);
  __t1661t__unsafe_ptr=points__unsafe_ptr;
  __t1661t__unsafe_size=points__unsafe_size;
  __t1661t__unsafe_offset=points__unsafe_offset+0;
  __t1661t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1615t(__t1661t__unsafe_ptr,__t1661t__unsafe_size,__t1661t__unsafe_offset,__t1661t__unsafe_align,&__t1665t__x,&__t1665t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1665t__x;
  sums__y=__t1665t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1641t__unsafe_ptr,&__t1642t____t534t__);
  if(__t1642t____t534t__){
  free__t503t(&__t1641t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1635t();return 0;}