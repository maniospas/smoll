#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1558t="-------------------";
const char* const __t374t="";
const char* const __t1587t="mario";
const char* const __t1563t="surnname  ";
const char* const __t1560t="name      ";
const char* const __t1585t="it's a me";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1568t(char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1574t(char** __t1634t, uint64_t* __t1635t, uint16_t* __t1636t, uint16_t* __t1637t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1634t=unsafe_ptr;
  *__t1635t=unsafe_size;
  *__t1636t=unsafe_offset;
  *__t1637t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1638t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1638t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t677t(char** __t1639t, uint64_t* __t1640t, uint16_t* __t1641t, uint16_t* __t1642t, char** __t1643t, uint64_t* __t1644t, uint16_t* __t1645t, uint16_t* __t1646t, uint64_t* __t1647t) {
  char* buf__unsafe_ptr=*__t1639t;
  uint64_t buf__unsafe_size=*__t1640t;
  uint16_t buf__unsafe_offset=*__t1641t;
  uint16_t buf__unsafe_align=*__t1642t;
  uint64_t __t678t=0;
  uint64_t __t679t=0;
  uint64_t pos=0;
  __t678t=0;
  __t679t=__t678t;
  pos=__t679t;
  goto __t_return;
  __t_return:
  *__t1639t=buf__unsafe_ptr;
  *__t1640t=buf__unsafe_size;
  *__t1641t=buf__unsafe_offset;
  *__t1642t=buf__unsafe_align;
  *__t1643t=buf__unsafe_ptr;
  *__t1644t=buf__unsafe_size;
  *__t1645t=buf__unsafe_offset;
  *__t1646t=buf__unsafe_align;
  *__t1647t=pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1648t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1648t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1649t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1649t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1650t) {
  *__t1650t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1651t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1651t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1652t, uint64_t* __t1653t, uint16_t* __t1654t, uint16_t* __t1655t, uint64_t i, char** __t1656t) {
  char* buffer__unsafe_ptr=*__t1652t;
  uint64_t buffer__unsafe_size=*__t1653t;
  uint16_t buffer__unsafe_offset=*__t1654t;
  uint16_t buffer__unsafe_align=*__t1655t;
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
  *__t1652t=buffer__unsafe_ptr;
  *__t1653t=buffer__unsafe_size;
  *__t1654t=buffer__unsafe_offset;
  *__t1655t=buffer__unsafe_align;
  *__t1656t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t1657t, uint64_t* __t1658t, uint16_t* __t1659t, uint16_t* __t1660t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1657t=unsafe_ptr;
  *__t1658t=unsafe_size;
  *__t1659t=unsafe_offset;
  *__t1660t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1661t) {
  *__t1661t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1662t) {
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
  *__t1662t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1663t, uint64_t* __t1664t, uint64_t* __t1665t, char* __t1666t) {
  goto __t_return;
  __t_return:
  *__t1663t=unsafe_ptr;
  *__t1664t=dat__pos;
  *__t1665t=dat__length;
  *__t1666t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1667t, uint64_t* __t1668t, uint64_t* __t1669t, char* __t1670t) {
  char* unsafe_ptr=0;
  uint64_t __t693t__=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  uint64_t __t696t__=0;
  uint64_t __t697t=0;
  char __t698t__=0;
  char* __t699t__unsafe_ptr=0;
  uint64_t __t699t__dat__pos=0;
  uint64_t __t699t__dat__length=0;
  char __t699t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t693t__);
  __t694t=1;
  neq__t144t(__t693t__,__t694t,&__t695t__);
  if(__t695t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t696t__);
  __t697t=0;
  neq__t144t(__t696t__,__t697t,&__t698t__);
  if(__t698t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t688t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t699t__unsafe_ptr,&__t699t__dat__pos,&__t699t__dat__length,&__t699t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1667t=__t699t__unsafe_ptr;
  *__t1668t=__t699t__dat__pos;
  *__t1669t=__t699t__dat__length;
  *__t1670t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1671t, uint64_t* __t1672t, uint64_t* __t1673t, char* __t1674t) {
  uint64_t __t728t=0;
  char __t729t__=0;
  char* __t730t__=0;
  char __t731t__value=0;
  char first=0;
  char* __t732t__unsafe_ptr=0;
  uint64_t __t732t__dat__pos=0;
  uint64_t __t732t__dat__length=0;
  char __t732t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t728t=0;
  neq__t144t(length,__t728t,&__t729t__);
  if(__t729t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t731t__value,__t730t__,1);
  first=__t731t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t732t__unsafe_ptr,&__t732t__dat__pos,&__t732t__dat__length,&__t732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1671t=__t732t__unsafe_ptr;
  *__t1672t=__t732t__dat__pos;
  *__t1673t=__t732t__dat__length;
  *__t1674t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t1675t, uint64_t* __t1676t, uint64_t* __t1677t, char* __t1678t) {
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__unsafe_size=0;
  uint16_t __t751t__unsafe_offset=0;
  uint16_t __t751t__unsafe_align=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__unsafe_size=0;
  uint16_t __t752t__unsafe_offset=0;
  uint16_t __t752t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t753t__=0;
  uint64_t length=0;
  uint64_t __t754t=0;
  uint64_t __t755t__=0;
  uint64_t __t756t=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t751t__unsafe_ptr,&__t751t__unsafe_size,&__t751t__unsafe_offset,&__t751t__unsafe_align);
  __t752t__unsafe_ptr=__t751t__unsafe_ptr;
  __t752t__unsafe_size=__t751t__unsafe_size;
  __t752t__unsafe_offset=__t751t__unsafe_offset;
  __t752t__unsafe_align=__t751t__unsafe_align;
  buf__unsafe_ptr=__t752t__unsafe_ptr;
  buf__unsafe_size=__t752t__unsafe_size;
  buf__unsafe_offset=__t752t__unsafe_offset;
  buf__unsafe_align=__t752t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t753t__);
  buf__unsafe_ptr=__t753t__;
  if(c){
  length=strlen(c);
  }
  __t754t=1;
  add__t175t(length,__t754t,&__t755t__);
  buf__unsafe_size=__t755t__;
  __t756t=0;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t756t,length,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1675t=__t758t__unsafe_ptr;
  *__t1676t=__t758t__dat__pos;
  *__t1677t=__t758t__dat__length;
  *__t1678t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1679t) {
  goto __t_return;
  __t_return:
  *__t1679t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1680t) {
  goto __t_return;
  __t_return:
  *__t1680t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1681t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1681t=z;
}

int copy__t860t(char** __t1682t, uint64_t* __t1683t, uint16_t* __t1684t, uint16_t* __t1685t, uint64_t* __t1686t, const char* _other, char** __t1687t, uint64_t* __t1688t, uint64_t* __t1689t, char* __t1690t) {
  char* CHARS__buf__unsafe_ptr=*__t1682t;
  uint64_t CHARS__buf__unsafe_size=*__t1683t;
  uint16_t CHARS__buf__unsafe_offset=*__t1684t;
  uint16_t CHARS__buf__unsafe_align=*__t1685t;
  uint64_t CHARS__pos=*__t1686t;
  char* __t861t__unsafe_ptr=0;
  uint64_t __t861t__dat__pos=0;
  uint64_t __t861t__dat__length=0;
  char __t861t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t862t__=0;
  uint64_t __t863t__=0;
  uint64_t next_pos=0;
  uint64_t __t864t__=0;
  char __t865t__=0;
  uint64_t __t866t=0;
  uint64_t __t867t__=0;
  uint64_t prev_pos=0;
  char* __t868t__unsafe_ptr=0;
  uint64_t __t868t__dat__pos=0;
  uint64_t __t868t__dat__length=0;
  char __t868t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(_other,&__t861t__unsafe_ptr,&__t861t__dat__pos,&__t861t__dat__length,&__t861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t861t__unsafe_ptr;
  other__dat__pos=__t861t__dat__pos;
  other__dat__length=__t861t__dat__length;
  other__dat__first=__t861t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t862t__);
  add__t175t(CHARS__pos,__t862t__,&__t863t__);
  next_pos=__t863t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t864t__);
  gt__t276t(next_pos,__t864t__,&__t865t__);
  if(__t865t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t866t=0;
  add__t175t(CHARS__pos,__t866t,&__t867t__);
  prev_pos=__t867t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t868t__unsafe_ptr,&__t868t__dat__pos,&__t868t__dat__length,&__t868t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1682t=CHARS__buf__unsafe_ptr;
  *__t1683t=CHARS__buf__unsafe_size;
  *__t1684t=CHARS__buf__unsafe_offset;
  *__t1685t=CHARS__buf__unsafe_align;
  *__t1686t=CHARS__pos;
  *__t1687t=__t868t__unsafe_ptr;
  *__t1688t=__t868t__dat__pos;
  *__t1689t=__t868t__dat__length;
  *__t1690t=__t868t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1555t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1691t, uint64_t* __t1692t, uint64_t* __t1693t, char* __t1694t, char** __t1695t, uint64_t* __t1696t, uint64_t* __t1697t, char* __t1698t) {
  goto __t_return;
  __t_return:
  *__t1691t=name__unsafe_ptr;
  *__t1692t=name__dat__pos;
  *__t1693t=name__dat__length;
  *__t1694t=name__dat__first;
  *__t1695t=surname__unsafe_ptr;
  *__t1696t=surname__dat__pos;
  *__t1697t=surname__dat__length;
  *__t1698t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1557t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t380t(__t1558t);
  print__t378t(__t1560t,__t374t);
  print__t893t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t378t(__t1563t,__t374t);
  print__t893t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t380t(__t1558t);
}

static inline __attribute__((always_inline)) int test__t1567t(char** __t1699t, uint64_t* __t1700t, uint16_t* __t1701t, uint16_t* __t1702t, uint64_t* __t1703t, char** __t1704t, uint64_t* __t1705t, uint16_t* __t1706t, uint16_t* __t1707t) {
  char* __t1570t__unsafe_ptr=0;
  uint64_t __t1570t__unsafe_size=0;
  uint16_t __t1570t__unsafe_offset=0;
  uint16_t __t1570t__unsafe_align=0;
  uint64_t __t1571t=0;
  char* __t1572t__unsafe_ptr=0;
  uint64_t __t1572t__unsafe_size=0;
  uint16_t __t1572t__unsafe_offset=0;
  uint16_t __t1572t__unsafe_align=0;
  char __t1573t____t534t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1576t__unsafe_ptr=0;
  uint64_t __t1576t__unsafe_size=0;
  uint16_t __t1576t__unsafe_offset=0;
  uint16_t __t1576t__unsafe_align=0;
  uint64_t __t1577t=0;
  uint64_t __t1578t__=0;
  char* __t1579t__unsafe_ptr=0;
  uint64_t __t1579t__unsafe_size=0;
  uint16_t __t1579t__unsafe_offset=0;
  uint16_t __t1579t__unsafe_align=0;
  char __t1580t____t534t__=0;
  char* __t1581t__buf__unsafe_ptr=0;
  uint64_t __t1581t__buf__unsafe_size=0;
  uint16_t __t1581t__buf__unsafe_offset=0;
  uint16_t __t1581t__buf__unsafe_align=0;
  uint64_t __t1581t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1582t=0;
  char* __t1583t__=0;
  uint64_t __t1584t=0;
  char* __t1586t__unsafe_ptr=0;
  uint64_t __t1586t__dat__pos=0;
  uint64_t __t1586t__dat__length=0;
  char __t1586t__dat__first=0;
  char* __t1588t__unsafe_ptr=0;
  uint64_t __t1588t__dat__pos=0;
  uint64_t __t1588t__dat__length=0;
  char __t1588t__dat__first=0;
  char* __t1589t__name__unsafe_ptr=0;
  uint64_t __t1589t__name__dat__pos=0;
  uint64_t __t1589t__name__dat__length=0;
  char __t1589t__name__dat__first=0;
  char* __t1589t__surname__unsafe_ptr=0;
  uint64_t __t1589t__surname__dat__pos=0;
  uint64_t __t1589t__surname__dat__length=0;
  char __t1589t__surname__dat__first=0;
  uint64_t __t1590t=0;
  char* __t1591t__=0;
  char* __t1592t__name__unsafe_ptr=0;
  uint64_t __t1592t__name__dat__pos=0;
  uint64_t __t1592t__name__dat__length=0;
  char __t1592t__name__dat__first=0;
  char* __t1592t__surname__unsafe_ptr=0;
  uint64_t __t1592t__surname__dat__pos=0;
  uint64_t __t1592t__surname__dat__length=0;
  char __t1592t__surname__dat__first=0;
  char* __t1594t__unsafe_ptr=0;
  uint64_t __t1594t__unsafe_size=0;
  uint16_t __t1594t__unsafe_offset=0;
  uint16_t __t1594t__unsafe_align=0;
  char* __t1598t__unsafe_ptr=0;
  uint64_t __t1598t__unsafe_size=0;
  uint16_t __t1598t__unsafe_offset=0;
  uint16_t __t1598t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1568t(&__t1570t__unsafe_ptr,&__t1570t__unsafe_size,&__t1570t__unsafe_offset,&__t1570t__unsafe_align);
  __t1571t=4;
  __t_errcode=alloc__t532t(&__t1570t__unsafe_ptr,&__t1570t__unsafe_size,&__t1570t__unsafe_offset,&__t1570t__unsafe_align,__t1571t,&__t1572t__unsafe_ptr,&__t1572t__unsafe_size,&__t1572t__unsafe_offset,&__t1572t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1572t__unsafe_ptr;
  people__unsafe_size=__t1572t__unsafe_size;
  people__unsafe_offset=__t1572t__unsafe_offset;
  people__unsafe_align=__t1572t__unsafe_align;
  char____t_buffer____buffer__t1574t(&__t1576t__unsafe_ptr,&__t1576t__unsafe_size,&__t1576t__unsafe_offset,&__t1576t__unsafe_align);
  __t1577t=4;
  KB__t481t(__t1577t,&__t1578t__);
  __t_errcode=alloc__t532t(&__t1576t__unsafe_ptr,&__t1576t__unsafe_size,&__t1576t__unsafe_offset,&__t1576t__unsafe_align,__t1578t__,&__t1579t__unsafe_ptr,&__t1579t__unsafe_size,&__t1579t__unsafe_offset,&__t1579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t677t(&__t1579t__unsafe_ptr,&__t1579t__unsafe_size,&__t1579t__unsafe_offset,&__t1579t__unsafe_align,&__t1581t__buf__unsafe_ptr,&__t1581t__buf__unsafe_size,&__t1581t__buf__unsafe_offset,&__t1581t__buf__unsafe_align,&__t1581t__pos);
  buf__buf__unsafe_ptr=__t1581t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1581t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1581t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1581t__buf__unsafe_align;
  buf__pos=__t1581t__pos;
  __t1582t=0;
  __t_errcode=mutget__t633t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1582t,&__t1583t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1584t=0;
  __t_errcode=copy__t860t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1585t,&__t1586t__unsafe_ptr,&__t1586t__dat__pos,&__t1586t__dat__length,&__t1586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t860t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1587t,&__t1588t__unsafe_ptr,&__t1588t__dat__pos,&__t1588t__dat__length,&__t1588t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1555t(__t1584t,__t1586t__unsafe_ptr,__t1586t__dat__pos,__t1586t__dat__length,__t1586t__dat__first,__t1588t__unsafe_ptr,__t1588t__dat__pos,__t1588t__dat__length,__t1588t__dat__first,&__t1589t__name__unsafe_ptr,&__t1589t__name__dat__pos,&__t1589t__name__dat__length,&__t1589t__name__dat__first,&__t1589t__surname__unsafe_ptr,&__t1589t__surname__dat__pos,&__t1589t__surname__dat__length,&__t1589t__surname__dat__first);
  if(!__t1583t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1583t__,&__t1589t__name__unsafe_ptr,8);
  memcpy(__t1583t__+8,&__t1589t__name__dat__pos,8);
  memcpy(__t1583t__+16,&__t1589t__name__dat__length,8);
  memcpy(__t1583t__+24,&__t1589t__name__dat__first,1);
  memcpy(__t1583t__+25,&__t1589t__surname__unsafe_ptr,8);
  memcpy(__t1583t__+33,&__t1589t__surname__dat__pos,8);
  memcpy(__t1583t__+41,&__t1589t__surname__dat__length,8);
  memcpy(__t1583t__+49,&__t1589t__surname__dat__first,1);
  __t1590t=0;
  __t_errcode=get__t640t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1590t,&__t1591t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1591t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1592t__name__unsafe_ptr,__t1591t__,8);
  memcpy(&__t1592t__name__dat__pos,__t1591t__+8,8);
  memcpy(&__t1592t__name__dat__length,__t1591t__+16,8);
  memcpy(&__t1592t__name__dat__first,__t1591t__+24,1);
  memcpy(&__t1592t__surname__unsafe_ptr,__t1591t__+25,8);
  memcpy(&__t1592t__surname__dat__pos,__t1591t__+33,8);
  memcpy(&__t1592t__surname__dat__length,__t1591t__+41,8);
  memcpy(&__t1592t__surname__dat__first,__t1591t__+49,1);
  print__t1557t(__t1592t__name__unsafe_ptr,__t1592t__name__dat__pos,__t1592t__name__dat__length,__t1592t__name__dat__first,__t1592t__surname__unsafe_ptr,__t1592t__surname__dat__pos,__t1592t__surname__dat__length,__t1592t__surname__dat__first);
  __t1594t__unsafe_ptr=people__unsafe_ptr;
  __t1594t__unsafe_size=people__unsafe_size;
  __t1594t__unsafe_offset=people__unsafe_offset+0;
  __t1594t__unsafe_align=people__unsafe_align;
  __t1598t__unsafe_ptr=__t1594t__unsafe_ptr;
  __t1598t__unsafe_size=__t1594t__unsafe_size;
  __t1598t__unsafe_offset=__t1594t__unsafe_offset+8;
  __t1598t__unsafe_align=__t1594t__unsafe_align;
  dat__unsafe_ptr=__t1598t__unsafe_ptr;
  dat__unsafe_size=__t1598t__unsafe_size;
  dat__unsafe_offset=__t1598t__unsafe_offset;
  dat__unsafe_align=__t1598t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__buf__unsafe_ptr,&__t1580t____t534t__);
  if(__t1580t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  exists__t447t(dat__unsafe_ptr,&__t1573t____t534t__);
  if(__t1573t____t534t__){
  free__t503t(&dat__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1699t=buf__buf__unsafe_ptr;
  *__t1700t=buf__buf__unsafe_size;
  *__t1701t=buf__buf__unsafe_offset;
  *__t1702t=buf__buf__unsafe_align;
  *__t1703t=buf__pos;
  *__t1704t=dat__unsafe_ptr;
  *__t1705t=dat__unsafe_size;
  *__t1706t=dat__unsafe_offset;
  *__t1707t=dat__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1602t() {
  char* __t1604t__buf__buf__unsafe_ptr=0;
  uint64_t __t1604t__buf__buf__unsafe_size=0;
  uint16_t __t1604t__buf__buf__unsafe_offset=0;
  uint16_t __t1604t__buf__buf__unsafe_align=0;
  uint64_t __t1604t__buf__pos=0;
  char* __t1604t__dat__unsafe_ptr=0;
  uint64_t __t1604t__dat__unsafe_size=0;
  uint16_t __t1604t__dat__unsafe_offset=0;
  uint16_t __t1604t__dat__unsafe_align=0;
  char __t1605t____t1573t____t534t__=0;
  char __t1605t____t1580t____t534t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1606t=0;
  char* __t1607t__=0;
  uint64_t __t1608t__pos=0;
  uint64_t __t1608t__length=0;
  char __t1608t__first=0;
  char* __t1609t__unsafe_ptr=0;
  uint64_t __t1609t__dat__pos=0;
  uint64_t __t1609t__dat__length=0;
  char __t1609t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1567t(&__t1604t__buf__buf__unsafe_ptr,&__t1604t__buf__buf__unsafe_size,&__t1604t__buf__buf__unsafe_offset,&__t1604t__buf__buf__unsafe_align,&__t1604t__buf__pos,&__t1604t__dat__unsafe_ptr,&__t1604t__dat__unsafe_size,&__t1604t__dat__unsafe_offset,&__t1604t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1604t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1604t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1604t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1604t__buf__buf__unsafe_align;
  t__buf__pos=__t1604t__buf__pos;
  t__dat__unsafe_ptr=__t1604t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1604t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1604t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1604t__dat__unsafe_align;
  __t1606t=0;
  __t_errcode=get__t640t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1606t,&__t1607t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1607t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1608t__pos,__t1607t__,8);
  memcpy(&__t1608t__length,__t1607t__+8,8);
  memcpy(&__t1608t__first,__t1607t__+16,1);
  __t_errcode=str__t692t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1608t__pos,__t1608t__length,__t1608t__first,&__t1609t__unsafe_ptr,&__t1609t__dat__pos,&__t1609t__dat__length,&__t1609t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t893t(__t1609t__unsafe_ptr,__t1609t__dat__pos,__t1609t__dat__length,__t1609t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1604t__buf__buf__unsafe_ptr,&__t1605t____t1580t____t534t__);
  if(__t1605t____t1580t____t534t__){
  free__t503t(&__t1604t__buf__buf__unsafe_ptr);
  }
  exists__t447t(__t1604t__dat__unsafe_ptr,&__t1605t____t1573t____t534t__);
  if(__t1605t____t1573t____t534t__){
  free__t503t(&__t1604t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1602t();return 0;}