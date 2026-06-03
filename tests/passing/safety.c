#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t382t="\n";
const char* const __t1569t="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1552t(char** __t1589t, uint64_t* __t1590t, uint16_t* __t1591t, uint16_t* __t1592t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1589t=unsafe_ptr;
  *__t1590t=unsafe_size;
  *__t1591t=unsafe_offset;
  *__t1592t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1593t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1594t) {
  char* allocated=*__t1594t;
  if(allocated){
  free(allocated);
  }
  *__t1594t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1595t) {
  int value=0;
  *__t1595t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1596t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1596t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1597t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1597t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1598t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1599t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1599t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1600t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1600t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1601t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1601t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1602t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1602t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1603t) {
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
  *__t1603t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1604t, uint64_t* __t1605t, uint16_t* __t1606t, uint16_t* __t1607t, uint64_t size, char** __t1608t, uint64_t* __t1609t, uint16_t* __t1610t, uint16_t* __t1611t) {
  char* buffer__unsafe_ptr=*__t1604t;
  uint64_t buffer__unsafe_size=*__t1605t;
  uint16_t buffer__unsafe_offset=*__t1606t;
  uint16_t buffer__unsafe_align=*__t1607t;
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
  *__t1604t=buffer__unsafe_ptr;
  *__t1605t=buffer__unsafe_size;
  *__t1606t=buffer__unsafe_offset;
  *__t1607t=buffer__unsafe_align;
  *__t1608t=buffer__unsafe_ptr;
  *__t1609t=buffer__unsafe_size;
  *__t1610t=buffer__unsafe_offset;
  *__t1611t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1612t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1612t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1613t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1613t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1614t) {
  *__t1614t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1615t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1615t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1616t, uint64_t* __t1617t, uint16_t* __t1618t, uint16_t* __t1619t, uint64_t i, char** __t1620t) {
  char* buffer__unsafe_ptr=*__t1616t;
  uint64_t buffer__unsafe_size=*__t1617t;
  uint16_t buffer__unsafe_offset=*__t1618t;
  uint16_t buffer__unsafe_align=*__t1619t;
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
  *__t1616t=buffer__unsafe_ptr;
  *__t1617t=buffer__unsafe_size;
  *__t1618t=buffer__unsafe_offset;
  *__t1619t=buffer__unsafe_align;
  *__t1620t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1621t) {
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
  *__t1621t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1622t) {
  goto __t_return;
  __t_return:
  *__t1622t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1551t(char** __t1623t, uint64_t* __t1624t, uint16_t* __t1625t, uint16_t* __t1626t) {
  char* __t1554t__unsafe_ptr=0;
  uint64_t __t1554t__unsafe_size=0;
  uint16_t __t1554t__unsafe_offset=0;
  uint16_t __t1554t__unsafe_align=0;
  char* __t1555t__unsafe_ptr=0;
  uint64_t __t1555t__unsafe_size=0;
  uint16_t __t1555t__unsafe_offset=0;
  uint16_t __t1555t__unsafe_align=0;
  uint64_t __t1556t=0;
  char* __t1557t__unsafe_ptr=0;
  uint64_t __t1557t__unsafe_size=0;
  uint16_t __t1557t__unsafe_offset=0;
  uint16_t __t1557t__unsafe_align=0;
  char __t1558t____t534t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1559t=0;
  char* __t1560t__=0;
  double __t1561t=0;
  uint64_t __t1562t=0;
  char* __t1563t__=0;
  double __t1564t=0;
  uint64_t __t1565t=0;
  char* __t1566t__=0;
  double __t1567t__value=0;
  uint64_t __t1571t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1552t(&__t1554t__unsafe_ptr,&__t1554t__unsafe_size,&__t1554t__unsafe_offset,&__t1554t__unsafe_align);
  __t1555t__unsafe_ptr=__t1554t__unsafe_ptr;
  __t1555t__unsafe_size=__t1554t__unsafe_size;
  __t1555t__unsafe_offset=__t1554t__unsafe_offset;
  __t1555t__unsafe_align=__t1554t__unsafe_align;
  __t1556t=2;
  __t_errcode=alloc__t532t(&__t1555t__unsafe_ptr,&__t1555t__unsafe_size,&__t1555t__unsafe_offset,&__t1555t__unsafe_align,__t1556t,&__t1557t__unsafe_ptr,&__t1557t__unsafe_size,&__t1557t__unsafe_offset,&__t1557t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1557t__unsafe_ptr;
  x__unsafe_size=__t1557t__unsafe_size;
  x__unsafe_offset=__t1557t__unsafe_offset;
  x__unsafe_align=__t1557t__unsafe_align;
  __t1559t=0;
  __t_errcode=mutget__t629t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1559t,&__t1560t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1561t=1.0;
  if(!__t1560t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1560t__,&__t1561t,8);
  __t1562t=1;
  __t_errcode=mutget__t629t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1562t,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1564t=2.0;
  if(!__t1563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1563t__,&__t1564t,8);
  __t1565t=1;
  __t_errcode=get__t636t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1565t,&__t1566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1566t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1567t__value,__t1566t__,8);
  print__t385t(__t1567t__value);
  goto __t_return;
  
  __t_failure:print__t378t(__t1569t,__t374t);
  len__t643t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t393t(x__unsafe_size);
  exists__t447t(x__unsafe_ptr,&__t1558t____t534t__);
  if(__t1558t____t534t__){
  free__t503t(&x__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1623t=x__unsafe_ptr;
  *__t1624t=x__unsafe_size;
  *__t1625t=x__unsafe_offset;
  *__t1626t=x__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1573t(char** __t1627t, uint64_t* __t1628t, uint16_t* __t1629t, uint16_t* __t1630t, char** __t1631t, uint64_t* __t1632t, uint16_t* __t1633t, uint16_t* __t1634t, char** __t1635t, uint64_t* __t1636t, uint16_t* __t1637t, uint16_t* __t1638t) {
  char* __t1574t__unsafe_ptr=0;
  uint64_t __t1574t__unsafe_size=0;
  uint16_t __t1574t__unsafe_offset=0;
  uint16_t __t1574t__unsafe_align=0;
  char __t1575t____t1558t____t534t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1576t__unsafe_ptr=0;
  uint64_t __t1576t__unsafe_size=0;
  uint16_t __t1576t__unsafe_offset=0;
  uint16_t __t1576t__unsafe_align=0;
  char* __t1577t__unsafe_ptr=0;
  uint64_t __t1577t__unsafe_size=0;
  uint16_t __t1577t__unsafe_offset=0;
  uint16_t __t1577t__unsafe_align=0;
  uint64_t __t1578t=0;
  char* __t1579t__unsafe_ptr=0;
  uint64_t __t1579t__unsafe_size=0;
  uint16_t __t1579t__unsafe_offset=0;
  uint16_t __t1579t__unsafe_align=0;
  char __t1580t____t534t__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1551t(&__t1574t__unsafe_ptr,&__t1574t__unsafe_size,&__t1574t__unsafe_offset,&__t1574t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1574t__unsafe_ptr;
  t__unsafe_size=__t1574t__unsafe_size;
  t__unsafe_offset=__t1574t__unsafe_offset;
  t__unsafe_align=__t1574t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1552t(&__t1576t__unsafe_ptr,&__t1576t__unsafe_size,&__t1576t__unsafe_offset,&__t1576t__unsafe_align);
  __t1577t__unsafe_ptr=__t1576t__unsafe_ptr;
  __t1577t__unsafe_size=__t1576t__unsafe_size;
  __t1577t__unsafe_offset=__t1576t__unsafe_offset;
  __t1577t__unsafe_align=__t1576t__unsafe_align;
  __t1578t=3;
  __t_errcode=alloc__t532t(&__t1577t__unsafe_ptr,&__t1577t__unsafe_size,&__t1577t__unsafe_offset,&__t1577t__unsafe_align,__t1578t,&__t1579t__unsafe_ptr,&__t1579t__unsafe_size,&__t1579t__unsafe_offset,&__t1579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1579t__unsafe_ptr;
  k__unsafe_size=__t1579t__unsafe_size;
  k__unsafe_offset=__t1579t__unsafe_offset;
  k__unsafe_align=__t1579t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(k__unsafe_ptr,&__t1580t____t534t__);
  if(__t1580t____t534t__){
  free__t503t(&k__unsafe_ptr);
  }
  print__t378t(__t1569t,__t374t);
  len__t643t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t393t(t__unsafe_size);
  exists__t447t(t__unsafe_ptr,&__t1575t____t1558t____t534t__);
  if(__t1575t____t1558t____t534t__){
  free__t503t(&t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1627t=t__unsafe_ptr;
  *__t1628t=t__unsafe_size;
  *__t1629t=t__unsafe_offset;
  *__t1630t=t__unsafe_align;
  *__t1631t=j__unsafe_ptr;
  *__t1632t=j__unsafe_size;
  *__t1633t=j__unsafe_offset;
  *__t1634t=j__unsafe_align;
  *__t1635t=k__unsafe_ptr;
  *__t1636t=k__unsafe_size;
  *__t1637t=k__unsafe_offset;
  *__t1638t=k__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1581t() {
  char* __t1583t__t__unsafe_ptr=0;
  uint64_t __t1583t__t__unsafe_size=0;
  uint16_t __t1583t__t__unsafe_offset=0;
  uint16_t __t1583t__t__unsafe_align=0;
  char* __t1583t__j__unsafe_ptr=0;
  uint64_t __t1583t__j__unsafe_size=0;
  uint16_t __t1583t__j__unsafe_offset=0;
  uint16_t __t1583t__j__unsafe_align=0;
  char* __t1583t__k__unsafe_ptr=0;
  uint64_t __t1583t__k__unsafe_size=0;
  uint16_t __t1583t__k__unsafe_offset=0;
  uint16_t __t1583t__k__unsafe_align=0;
  char __t1584t____t1575t____t1558t____t534t__=0;
  char __t1584t____t1580t____t534t__=0;
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
  uint64_t __t1585t=0;
  char* __t1586t__=0;
  double __t1587t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t1573t(&__t1583t__t__unsafe_ptr,&__t1583t__t__unsafe_size,&__t1583t__t__unsafe_offset,&__t1583t__t__unsafe_align,&__t1583t__j__unsafe_ptr,&__t1583t__j__unsafe_size,&__t1583t__j__unsafe_offset,&__t1583t__j__unsafe_align,&__t1583t__k__unsafe_ptr,&__t1583t__k__unsafe_size,&__t1583t__k__unsafe_offset,&__t1583t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1583t__t__unsafe_ptr;
  t__t__unsafe_size=__t1583t__t__unsafe_size;
  t__t__unsafe_offset=__t1583t__t__unsafe_offset;
  t__t__unsafe_align=__t1583t__t__unsafe_align;
  t__j__unsafe_ptr=__t1583t__j__unsafe_ptr;
  t__j__unsafe_size=__t1583t__j__unsafe_size;
  t__j__unsafe_offset=__t1583t__j__unsafe_offset;
  t__j__unsafe_align=__t1583t__j__unsafe_align;
  t__k__unsafe_ptr=__t1583t__k__unsafe_ptr;
  t__k__unsafe_size=__t1583t__k__unsafe_size;
  t__k__unsafe_offset=__t1583t__k__unsafe_offset;
  t__k__unsafe_align=__t1583t__k__unsafe_align;
  __t1585t=1;
  __t_errcode=get__t636t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1585t,&__t1586t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1586t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1587t__value,__t1586t__,8);
  print__t385t(__t1587t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1583t__k__unsafe_ptr,&__t1584t____t1580t____t534t__);
  if(__t1584t____t1580t____t534t__){
  free__t503t(&__t1583t__k__unsafe_ptr);
  }
  print__t378t(__t1569t,__t374t);
  len__t643t(__t1583t__t__unsafe_ptr,__t1583t__t__unsafe_size,__t1583t__t__unsafe_offset,__t1583t__t__unsafe_align,&__t1583t__t__unsafe_size);
  print__t393t(__t1583t__t__unsafe_size);
  exists__t447t(__t1583t__t__unsafe_ptr,&__t1584t____t1575t____t1558t____t534t__);
  if(__t1584t____t1575t____t1558t____t534t__){
  free__t503t(&__t1583t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1581t();return 0;}