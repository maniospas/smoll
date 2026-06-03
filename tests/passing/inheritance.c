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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1580t(char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1611t=unsafe_ptr;
  *__t1612t=unsafe_size;
  *__t1613t=unsafe_offset;
  *__t1614t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1615t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1616t) {
  char* allocated=*__t1616t;
  if(allocated){
  free(allocated);
  }
  *__t1616t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1617t) {
  int value=0;
  *__t1617t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1618t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1618t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1619t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1619t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1620t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1620t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1621t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1621t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1622t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1622t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1623t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1623t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1624t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1624t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1625t) {
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
  *__t1625t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1626t, uint64_t* __t1627t, uint16_t* __t1628t, uint16_t* __t1629t, uint64_t size, char** __t1630t, uint64_t* __t1631t, uint16_t* __t1632t, uint16_t* __t1633t) {
  char* buffer__unsafe_ptr=*__t1626t;
  uint64_t buffer__unsafe_size=*__t1627t;
  uint16_t buffer__unsafe_offset=*__t1628t;
  uint16_t buffer__unsafe_align=*__t1629t;
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
  *__t1626t=buffer__unsafe_ptr;
  *__t1627t=buffer__unsafe_size;
  *__t1628t=buffer__unsafe_offset;
  *__t1629t=buffer__unsafe_align;
  *__t1630t=buffer__unsafe_ptr;
  *__t1631t=buffer__unsafe_size;
  *__t1632t=buffer__unsafe_offset;
  *__t1633t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1634t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1634t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1635t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1635t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1636t) {
  *__t1636t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1637t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1637t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1638t, uint64_t* __t1639t, uint16_t* __t1640t, uint16_t* __t1641t, uint64_t i, char** __t1642t) {
  char* buffer__unsafe_ptr=*__t1638t;
  uint64_t buffer__unsafe_size=*__t1639t;
  uint16_t buffer__unsafe_offset=*__t1640t;
  uint16_t buffer__unsafe_align=*__t1641t;
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
  *__t1638t=buffer__unsafe_ptr;
  *__t1639t=buffer__unsafe_size;
  *__t1640t=buffer__unsafe_offset;
  *__t1641t=buffer__unsafe_align;
  *__t1642t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1555t(double x, double y, double* __t1643t, double* __t1644t) {
  goto __t_return;
  __t_return:
  *__t1643t=x;
  *__t1644t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1575t(double x, double y, double z, double* __t1645t, double* __t1646t, double* __t1647t) {
  double __t1576t__x=0;
  double __t1576t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1555t(x,y,&__t1576t__x,&__t1576t__y);
  plane__x=__t1576t__x;
  plane__y=__t1576t__y;
  goto __t_return;
  __t_return:
  *__t1645t=plane__x;
  *__t1646t=plane__y;
  *__t1647t=z;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1648t) {
  goto __t_return;
  __t_return:
  *__t1648t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1649t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1649t=z;
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
  uint64_t __t1563t=0;
  uint64_t __t1564t=0;
  uint64_t i=0;
  uint64_t __t1565t__=0;
  char __t1566t__=0;
  char* __t1567t__=0;
  double __t1568t__x=0;
  double __t1568t__y=0;
  double __t1569t__=0;
  char* __t1570t__=0;
  double __t1571t__x=0;
  double __t1571t__y=0;
  double __t1572t__=0;
  uint64_t __t1573t=0;
  uint64_t __t1574t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1559t=0.0;
  __t1560t=__t1559t;
  x=__t1560t;
  __t1561t=0.0;
  __t1562t=__t1561t;
  y=__t1562t;
  __t1563t=0;
  __t1564t=__t1563t;
  i=__t1564t;
  while(1){
  len__t647t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1565t__);
  lt__t252t(i,__t1565t__,&__t1566t__);
  if(!__t1566t__){
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
  __t1573t=1;
  add__t175t(i,__t1573t,&__t1574t__);
  i=__t1574t__;
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
  uint64_t __t1583t=0;
  char* __t1584t__unsafe_ptr=0;
  uint64_t __t1584t__unsafe_size=0;
  uint16_t __t1584t__unsafe_offset=0;
  uint16_t __t1584t__unsafe_align=0;
  char __t1585t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1586t=0;
  char* __t1587t__=0;
  double __t1588t=0;
  double __t1589t=0;
  double __t1590t=0;
  double __t1591t=0;
  double __t1592t=0;
  double __t1593t=0;
  double __t1594t__plane__x=0;
  double __t1594t__plane__y=0;
  double __t1594t__z=0;
  uint64_t __t1595t=0;
  char* __t1596t__=0;
  double __t1597t=0;
  double __t1598t=0;
  double __t1599t=0;
  double __t1600t=0;
  double __t1601t=0;
  double __t1602t=0;
  double __t1603t__plane__x=0;
  double __t1603t__plane__y=0;
  double __t1603t__z=0;
  char* __t1604t__unsafe_ptr=0;
  uint64_t __t1604t__unsafe_size=0;
  uint16_t __t1604t__unsafe_offset=0;
  uint16_t __t1604t__unsafe_align=0;
  double __t1608t__x=0;
  double __t1608t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1580t(&__t1582t__unsafe_ptr,&__t1582t__unsafe_size,&__t1582t__unsafe_offset,&__t1582t__unsafe_align);
  __t1583t=10;
  __t_errcode=alloc__t532t(&__t1582t__unsafe_ptr,&__t1582t__unsafe_size,&__t1582t__unsafe_offset,&__t1582t__unsafe_align,__t1583t,&__t1584t__unsafe_ptr,&__t1584t__unsafe_size,&__t1584t__unsafe_offset,&__t1584t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1584t__unsafe_ptr;
  points__unsafe_size=__t1584t__unsafe_size;
  points__unsafe_offset=__t1584t__unsafe_offset;
  points__unsafe_align=__t1584t__unsafe_align;
  __t1586t=0;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1586t,&__t1587t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1588t=1.0;
  __t1589t=__t1588t;
  __t1590t=2.0;
  __t1591t=__t1590t;
  __t1592t=3.0;
  __t1593t=__t1592t;
  Point3D__t1575t(__t1589t,__t1591t,__t1593t,&__t1594t__plane__x,&__t1594t__plane__y,&__t1594t__z);
  if(!__t1587t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1587t__,&__t1594t__plane__x,8);
  memcpy(__t1587t__+8,&__t1594t__plane__y,8);
  memcpy(__t1587t__+16,&__t1594t__z,8);
  __t1595t=1;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1595t,&__t1596t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1597t=1.0;
  __t1598t=__t1597t;
  __t1599t=2.0;
  __t1600t=__t1599t;
  __t1601t=3.0;
  __t1602t=__t1601t;
  Point3D__t1575t(__t1598t,__t1600t,__t1602t,&__t1603t__plane__x,&__t1603t__plane__y,&__t1603t__z);
  if(!__t1596t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1596t__,&__t1603t__plane__x,8);
  memcpy(__t1596t__+8,&__t1603t__plane__y,8);
  memcpy(__t1596t__+16,&__t1603t__z,8);
  __t1604t__unsafe_ptr=points__unsafe_ptr;
  __t1604t__unsafe_size=points__unsafe_size;
  __t1604t__unsafe_offset=points__unsafe_offset+0;
  __t1604t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1558t(__t1604t__unsafe_ptr,__t1604t__unsafe_size,__t1604t__unsafe_offset,__t1604t__unsafe_align,&__t1608t__x,&__t1608t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1608t__x;
  sums__y=__t1608t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1584t__unsafe_ptr,&__t1585t____t534t__);
  if(__t1585t____t534t__){
  free__t503t(&__t1584t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1578t();return 0;}