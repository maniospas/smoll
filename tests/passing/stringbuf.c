#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1583t="mario";
const char* const __t374t="";
const char* const __t1556t="name      ";
const char* const __t1559t="surnname  ";
const char* const __t1554t="-------------------";
const char* const __t1581t="it's a me";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1564t(char** __t1607t, uint64_t* __t1608t, uint16_t* __t1609t, uint16_t* __t1610t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1607t=unsafe_ptr;
  *__t1608t=unsafe_size;
  *__t1609t=unsafe_offset;
  *__t1610t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1611t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1611t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1612t) {
  char* allocated=*__t1612t;
  if(allocated){
  free(allocated);
  }
  *__t1612t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1613t) {
  int value=0;
  *__t1613t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1614t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1614t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1615t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1615t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1616t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1616t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1617t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1617t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1618t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1618t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1619t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1619t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1620t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1620t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1621t) {
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
  *__t1621t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1622t, uint64_t* __t1623t, uint16_t* __t1624t, uint16_t* __t1625t, uint64_t size, char** __t1626t, uint64_t* __t1627t, uint16_t* __t1628t, uint16_t* __t1629t) {
  char* buffer__unsafe_ptr=*__t1622t;
  uint64_t buffer__unsafe_size=*__t1623t;
  uint16_t buffer__unsafe_offset=*__t1624t;
  uint16_t buffer__unsafe_align=*__t1625t;
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
  *__t1622t=buffer__unsafe_ptr;
  *__t1623t=buffer__unsafe_size;
  *__t1624t=buffer__unsafe_offset;
  *__t1625t=buffer__unsafe_align;
  *__t1626t=buffer__unsafe_ptr;
  *__t1627t=buffer__unsafe_size;
  *__t1628t=buffer__unsafe_offset;
  *__t1629t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1570t(char** __t1630t, uint64_t* __t1631t, uint16_t* __t1632t, uint16_t* __t1633t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1630t=unsafe_ptr;
  *__t1631t=unsafe_size;
  *__t1632t=unsafe_offset;
  *__t1633t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1634t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1634t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t1635t, uint64_t* __t1636t, uint16_t* __t1637t, uint16_t* __t1638t, char** __t1639t, uint64_t* __t1640t, uint16_t* __t1641t, uint16_t* __t1642t, uint64_t* __t1643t) {
  char* buf__unsafe_ptr=*__t1635t;
  uint64_t buf__unsafe_size=*__t1636t;
  uint16_t buf__unsafe_offset=*__t1637t;
  uint16_t buf__unsafe_align=*__t1638t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t1635t=buf__unsafe_ptr;
  *__t1636t=buf__unsafe_size;
  *__t1637t=buf__unsafe_offset;
  *__t1638t=buf__unsafe_align;
  *__t1639t=buf__unsafe_ptr;
  *__t1640t=buf__unsafe_size;
  *__t1641t=buf__unsafe_offset;
  *__t1642t=buf__unsafe_align;
  *__t1643t=pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1644t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1644t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1645t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1645t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1646t) {
  *__t1646t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1647t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1647t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1648t, uint64_t* __t1649t, uint16_t* __t1650t, uint16_t* __t1651t, uint64_t i, char** __t1652t) {
  char* buffer__unsafe_ptr=*__t1648t;
  uint64_t buffer__unsafe_size=*__t1649t;
  uint16_t buffer__unsafe_offset=*__t1650t;
  uint16_t buffer__unsafe_align=*__t1651t;
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
  *__t1648t=buffer__unsafe_ptr;
  *__t1649t=buffer__unsafe_size;
  *__t1650t=buffer__unsafe_offset;
  *__t1651t=buffer__unsafe_align;
  *__t1652t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t1653t, uint64_t* __t1654t, uint16_t* __t1655t, uint16_t* __t1656t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1653t=unsafe_ptr;
  *__t1654t=unsafe_size;
  *__t1655t=unsafe_offset;
  *__t1656t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1657t) {
  *__t1657t=to;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1658t) {
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
  *__t1658t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1659t, uint64_t* __t1660t, uint64_t* __t1661t, char* __t1662t) {
  goto __t_return;
  __t_return:
  *__t1659t=unsafe_ptr;
  *__t1660t=dat__pos;
  *__t1661t=dat__length;
  *__t1662t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1663t, uint64_t* __t1664t, uint64_t* __t1665t, char* __t1666t) {
  char* unsafe_ptr=0;
  uint64_t __t689t__=0;
  uint64_t __t690t=0;
  char __t691t__=0;
  uint64_t __t692t__=0;
  uint64_t __t693t=0;
  char __t694t__=0;
  char* __t695t__unsafe_ptr=0;
  uint64_t __t695t__dat__pos=0;
  uint64_t __t695t__dat__length=0;
  char __t695t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t689t__);
  __t690t=1;
  neq__t144t(__t689t__,__t690t,&__t691t__);
  if(__t691t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t692t__);
  __t693t=0;
  neq__t144t(__t692t__,__t693t,&__t694t__);
  if(__t694t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t684t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t695t__unsafe_ptr,&__t695t__dat__pos,&__t695t__dat__length,&__t695t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1663t=__t695t__unsafe_ptr;
  *__t1664t=__t695t__dat__pos;
  *__t1665t=__t695t__dat__length;
  *__t1666t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1667t, uint64_t* __t1668t, uint64_t* __t1669t, char* __t1670t) {
  uint64_t __t724t=0;
  char __t725t__=0;
  char* __t726t__=0;
  char __t727t__value=0;
  char first=0;
  char* __t728t__unsafe_ptr=0;
  uint64_t __t728t__dat__pos=0;
  uint64_t __t728t__dat__length=0;
  char __t728t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t724t=0;
  neq__t144t(length,__t724t,&__t725t__);
  if(__t725t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t726t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t726t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t727t__value,__t726t__,1);
  first=__t727t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t728t__unsafe_ptr,&__t728t__dat__pos,&__t728t__dat__length,&__t728t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1667t=__t728t__unsafe_ptr;
  *__t1668t=__t728t__dat__pos;
  *__t1669t=__t728t__dat__length;
  *__t1670t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t1671t, uint64_t* __t1672t, uint64_t* __t1673t, char* __t1674t) {
  char* __t747t__unsafe_ptr=0;
  uint64_t __t747t__unsafe_size=0;
  uint16_t __t747t__unsafe_offset=0;
  uint16_t __t747t__unsafe_align=0;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__unsafe_size=0;
  uint16_t __t748t__unsafe_offset=0;
  uint16_t __t748t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t749t__=0;
  uint64_t length=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t __t752t=0;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t676t(&__t747t__unsafe_ptr,&__t747t__unsafe_size,&__t747t__unsafe_offset,&__t747t__unsafe_align);
  __t748t__unsafe_ptr=__t747t__unsafe_ptr;
  __t748t__unsafe_size=__t747t__unsafe_size;
  __t748t__unsafe_offset=__t747t__unsafe_offset;
  __t748t__unsafe_align=__t747t__unsafe_align;
  buf__unsafe_ptr=__t748t__unsafe_ptr;
  buf__unsafe_size=__t748t__unsafe_size;
  buf__unsafe_offset=__t748t__unsafe_offset;
  buf__unsafe_align=__t748t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t749t__);
  buf__unsafe_ptr=__t749t__;
  if(c){
  length=strlen(c);
  }
  __t750t=1;
  add__t175t(length,__t750t,&__t751t__);
  buf__unsafe_size=__t751t__;
  __t752t=0;
  __t_errcode=str__t723t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t752t,length,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1671t=__t754t__unsafe_ptr;
  *__t1672t=__t754t__dat__pos;
  *__t1673t=__t754t__dat__length;
  *__t1674t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1675t) {
  goto __t_return;
  __t_return:
  *__t1675t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1676t) {
  goto __t_return;
  __t_return:
  *__t1676t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1677t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1677t=z;
}

int copy__t856t(char** __t1678t, uint64_t* __t1679t, uint16_t* __t1680t, uint16_t* __t1681t, uint64_t* __t1682t, const char* _other, char** __t1683t, uint64_t* __t1684t, uint64_t* __t1685t, char* __t1686t) {
  char* CHARS__buf__unsafe_ptr=*__t1678t;
  uint64_t CHARS__buf__unsafe_size=*__t1679t;
  uint16_t CHARS__buf__unsafe_offset=*__t1680t;
  uint16_t CHARS__buf__unsafe_align=*__t1681t;
  uint64_t CHARS__pos=*__t1682t;
  char* __t857t__unsafe_ptr=0;
  uint64_t __t857t__dat__pos=0;
  uint64_t __t857t__dat__length=0;
  char __t857t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t858t__=0;
  uint64_t __t859t__=0;
  uint64_t next_pos=0;
  uint64_t __t860t__=0;
  char __t861t__=0;
  uint64_t __t862t=0;
  uint64_t __t863t__=0;
  uint64_t prev_pos=0;
  char* __t864t__unsafe_ptr=0;
  uint64_t __t864t__dat__pos=0;
  uint64_t __t864t__dat__length=0;
  char __t864t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(_other,&__t857t__unsafe_ptr,&__t857t__dat__pos,&__t857t__dat__length,&__t857t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t857t__unsafe_ptr;
  other__dat__pos=__t857t__dat__pos;
  other__dat__length=__t857t__dat__length;
  other__dat__first=__t857t__dat__first;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t858t__);
  add__t175t(CHARS__pos,__t858t__,&__t859t__);
  next_pos=__t859t__;
  len__t643t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t860t__);
  gt__t276t(next_pos,__t860t__,&__t861t__);
  if(__t861t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t862t=0;
  add__t175t(CHARS__pos,__t862t,&__t863t__);
  prev_pos=__t863t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t688t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t864t__unsafe_ptr,&__t864t__dat__pos,&__t864t__dat__length,&__t864t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1678t=CHARS__buf__unsafe_ptr;
  *__t1679t=CHARS__buf__unsafe_size;
  *__t1680t=CHARS__buf__unsafe_offset;
  *__t1681t=CHARS__buf__unsafe_align;
  *__t1682t=CHARS__pos;
  *__t1683t=__t864t__unsafe_ptr;
  *__t1684t=__t864t__dat__pos;
  *__t1685t=__t864t__dat__length;
  *__t1686t=__t864t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1551t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1687t, uint64_t* __t1688t, uint64_t* __t1689t, char* __t1690t, char** __t1691t, uint64_t* __t1692t, uint64_t* __t1693t, char* __t1694t) {
  goto __t_return;
  __t_return:
  *__t1687t=name__unsafe_ptr;
  *__t1688t=name__dat__pos;
  *__t1689t=name__dat__length;
  *__t1690t=name__dat__first;
  *__t1691t=surname__unsafe_ptr;
  *__t1692t=surname__dat__pos;
  *__t1693t=surname__dat__length;
  *__t1694t=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1553t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t380t(__t1554t);
  print__t378t(__t1556t,__t374t);
  print__t889t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t378t(__t1559t,__t374t);
  print__t889t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t380t(__t1554t);
}

static inline __attribute__((always_inline)) int test__t1563t(char** __t1695t, uint64_t* __t1696t, uint16_t* __t1697t, uint16_t* __t1698t, uint64_t* __t1699t, char** __t1700t, uint64_t* __t1701t, uint16_t* __t1702t, uint16_t* __t1703t) {
  char* __t1566t__unsafe_ptr=0;
  uint64_t __t1566t__unsafe_size=0;
  uint16_t __t1566t__unsafe_offset=0;
  uint16_t __t1566t__unsafe_align=0;
  uint64_t __t1567t=0;
  char* __t1568t__unsafe_ptr=0;
  uint64_t __t1568t__unsafe_size=0;
  uint16_t __t1568t__unsafe_offset=0;
  uint16_t __t1568t__unsafe_align=0;
  char __t1569t____t534t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1572t__unsafe_ptr=0;
  uint64_t __t1572t__unsafe_size=0;
  uint16_t __t1572t__unsafe_offset=0;
  uint16_t __t1572t__unsafe_align=0;
  uint64_t __t1573t=0;
  uint64_t __t1574t__=0;
  char* __t1575t__unsafe_ptr=0;
  uint64_t __t1575t__unsafe_size=0;
  uint16_t __t1575t__unsafe_offset=0;
  uint16_t __t1575t__unsafe_align=0;
  char __t1576t____t534t__=0;
  char* __t1577t__buf__unsafe_ptr=0;
  uint64_t __t1577t__buf__unsafe_size=0;
  uint16_t __t1577t__buf__unsafe_offset=0;
  uint16_t __t1577t__buf__unsafe_align=0;
  uint64_t __t1577t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1578t=0;
  char* __t1579t__=0;
  uint64_t __t1580t=0;
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__dat__pos=0;
  uint64_t __t1582t__dat__length=0;
  char __t1582t__dat__first=0;
  char* __t1584t__unsafe_ptr=0;
  uint64_t __t1584t__dat__pos=0;
  uint64_t __t1584t__dat__length=0;
  char __t1584t__dat__first=0;
  char* __t1585t__name__unsafe_ptr=0;
  uint64_t __t1585t__name__dat__pos=0;
  uint64_t __t1585t__name__dat__length=0;
  char __t1585t__name__dat__first=0;
  char* __t1585t__surname__unsafe_ptr=0;
  uint64_t __t1585t__surname__dat__pos=0;
  uint64_t __t1585t__surname__dat__length=0;
  char __t1585t__surname__dat__first=0;
  uint64_t __t1586t=0;
  char* __t1587t__=0;
  char* __t1588t__name__unsafe_ptr=0;
  uint64_t __t1588t__name__dat__pos=0;
  uint64_t __t1588t__name__dat__length=0;
  char __t1588t__name__dat__first=0;
  char* __t1588t__surname__unsafe_ptr=0;
  uint64_t __t1588t__surname__dat__pos=0;
  uint64_t __t1588t__surname__dat__length=0;
  char __t1588t__surname__dat__first=0;
  char* __t1590t__unsafe_ptr=0;
  uint64_t __t1590t__unsafe_size=0;
  uint16_t __t1590t__unsafe_offset=0;
  uint16_t __t1590t__unsafe_align=0;
  char* __t1594t__unsafe_ptr=0;
  uint64_t __t1594t__unsafe_size=0;
  uint16_t __t1594t__unsafe_offset=0;
  uint16_t __t1594t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1564t(&__t1566t__unsafe_ptr,&__t1566t__unsafe_size,&__t1566t__unsafe_offset,&__t1566t__unsafe_align);
  __t1567t=4;
  __t_errcode=alloc__t532t(&__t1566t__unsafe_ptr,&__t1566t__unsafe_size,&__t1566t__unsafe_offset,&__t1566t__unsafe_align,__t1567t,&__t1568t__unsafe_ptr,&__t1568t__unsafe_size,&__t1568t__unsafe_offset,&__t1568t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1568t__unsafe_ptr;
  people__unsafe_size=__t1568t__unsafe_size;
  people__unsafe_offset=__t1568t__unsafe_offset;
  people__unsafe_align=__t1568t__unsafe_align;
  char____t_buffer____buffer__t1570t(&__t1572t__unsafe_ptr,&__t1572t__unsafe_size,&__t1572t__unsafe_offset,&__t1572t__unsafe_align);
  __t1573t=4;
  KB__t481t(__t1573t,&__t1574t__);
  __t_errcode=alloc__t532t(&__t1572t__unsafe_ptr,&__t1572t__unsafe_size,&__t1572t__unsafe_offset,&__t1572t__unsafe_align,__t1574t__,&__t1575t__unsafe_ptr,&__t1575t__unsafe_size,&__t1575t__unsafe_offset,&__t1575t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t673t(&__t1575t__unsafe_ptr,&__t1575t__unsafe_size,&__t1575t__unsafe_offset,&__t1575t__unsafe_align,&__t1577t__buf__unsafe_ptr,&__t1577t__buf__unsafe_size,&__t1577t__buf__unsafe_offset,&__t1577t__buf__unsafe_align,&__t1577t__pos);
  buf__buf__unsafe_ptr=__t1577t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1577t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1577t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1577t__buf__unsafe_align;
  buf__pos=__t1577t__pos;
  __t1578t=0;
  __t_errcode=mutget__t629t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1578t,&__t1579t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1580t=0;
  __t_errcode=copy__t856t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1581t,&__t1582t__unsafe_ptr,&__t1582t__dat__pos,&__t1582t__dat__length,&__t1582t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t856t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1583t,&__t1584t__unsafe_ptr,&__t1584t__dat__pos,&__t1584t__dat__length,&__t1584t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1551t(__t1580t,__t1582t__unsafe_ptr,__t1582t__dat__pos,__t1582t__dat__length,__t1582t__dat__first,__t1584t__unsafe_ptr,__t1584t__dat__pos,__t1584t__dat__length,__t1584t__dat__first,&__t1585t__name__unsafe_ptr,&__t1585t__name__dat__pos,&__t1585t__name__dat__length,&__t1585t__name__dat__first,&__t1585t__surname__unsafe_ptr,&__t1585t__surname__dat__pos,&__t1585t__surname__dat__length,&__t1585t__surname__dat__first);
  if(!__t1579t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1579t__,&__t1585t__name__unsafe_ptr,8);
  memcpy(__t1579t__+8,&__t1585t__name__dat__pos,8);
  memcpy(__t1579t__+16,&__t1585t__name__dat__length,8);
  memcpy(__t1579t__+24,&__t1585t__name__dat__first,1);
  memcpy(__t1579t__+25,&__t1585t__surname__unsafe_ptr,8);
  memcpy(__t1579t__+33,&__t1585t__surname__dat__pos,8);
  memcpy(__t1579t__+41,&__t1585t__surname__dat__length,8);
  memcpy(__t1579t__+49,&__t1585t__surname__dat__first,1);
  __t1586t=0;
  __t_errcode=get__t636t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1586t,&__t1587t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1587t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1588t__name__unsafe_ptr,__t1587t__,8);
  memcpy(&__t1588t__name__dat__pos,__t1587t__+8,8);
  memcpy(&__t1588t__name__dat__length,__t1587t__+16,8);
  memcpy(&__t1588t__name__dat__first,__t1587t__+24,1);
  memcpy(&__t1588t__surname__unsafe_ptr,__t1587t__+25,8);
  memcpy(&__t1588t__surname__dat__pos,__t1587t__+33,8);
  memcpy(&__t1588t__surname__dat__length,__t1587t__+41,8);
  memcpy(&__t1588t__surname__dat__first,__t1587t__+49,1);
  print__t1553t(__t1588t__name__unsafe_ptr,__t1588t__name__dat__pos,__t1588t__name__dat__length,__t1588t__name__dat__first,__t1588t__surname__unsafe_ptr,__t1588t__surname__dat__pos,__t1588t__surname__dat__length,__t1588t__surname__dat__first);
  __t1590t__unsafe_ptr=people__unsafe_ptr;
  __t1590t__unsafe_size=people__unsafe_size;
  __t1590t__unsafe_offset=people__unsafe_offset+0;
  __t1590t__unsafe_align=people__unsafe_align;
  __t1594t__unsafe_ptr=__t1590t__unsafe_ptr;
  __t1594t__unsafe_size=__t1590t__unsafe_size;
  __t1594t__unsafe_offset=__t1590t__unsafe_offset+8;
  __t1594t__unsafe_align=__t1590t__unsafe_align;
  dat__unsafe_ptr=__t1594t__unsafe_ptr;
  dat__unsafe_size=__t1594t__unsafe_size;
  dat__unsafe_offset=__t1594t__unsafe_offset;
  dat__unsafe_align=__t1594t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__buf__unsafe_ptr,&__t1576t____t534t__);
  if(__t1576t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  exists__t447t(dat__unsafe_ptr,&__t1569t____t534t__);
  if(__t1569t____t534t__){
  free__t503t(&dat__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1695t=buf__buf__unsafe_ptr;
  *__t1696t=buf__buf__unsafe_size;
  *__t1697t=buf__buf__unsafe_offset;
  *__t1698t=buf__buf__unsafe_align;
  *__t1699t=buf__pos;
  *__t1700t=dat__unsafe_ptr;
  *__t1701t=dat__unsafe_size;
  *__t1702t=dat__unsafe_offset;
  *__t1703t=dat__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1598t() {
  char* __t1600t__buf__buf__unsafe_ptr=0;
  uint64_t __t1600t__buf__buf__unsafe_size=0;
  uint16_t __t1600t__buf__buf__unsafe_offset=0;
  uint16_t __t1600t__buf__buf__unsafe_align=0;
  uint64_t __t1600t__buf__pos=0;
  char* __t1600t__dat__unsafe_ptr=0;
  uint64_t __t1600t__dat__unsafe_size=0;
  uint16_t __t1600t__dat__unsafe_offset=0;
  uint16_t __t1600t__dat__unsafe_align=0;
  char __t1601t____t1569t____t534t__=0;
  char __t1601t____t1576t____t534t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1602t=0;
  char* __t1603t__=0;
  uint64_t __t1604t__pos=0;
  uint64_t __t1604t__length=0;
  char __t1604t__first=0;
  char* __t1605t__unsafe_ptr=0;
  uint64_t __t1605t__dat__pos=0;
  uint64_t __t1605t__dat__length=0;
  char __t1605t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1563t(&__t1600t__buf__buf__unsafe_ptr,&__t1600t__buf__buf__unsafe_size,&__t1600t__buf__buf__unsafe_offset,&__t1600t__buf__buf__unsafe_align,&__t1600t__buf__pos,&__t1600t__dat__unsafe_ptr,&__t1600t__dat__unsafe_size,&__t1600t__dat__unsafe_offset,&__t1600t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1600t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1600t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1600t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1600t__buf__buf__unsafe_align;
  t__buf__pos=__t1600t__buf__pos;
  t__dat__unsafe_ptr=__t1600t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1600t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1600t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1600t__dat__unsafe_align;
  __t1602t=0;
  __t_errcode=get__t636t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1602t,&__t1603t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1603t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1604t__pos,__t1603t__,8);
  memcpy(&__t1604t__length,__t1603t__+8,8);
  memcpy(&__t1604t__first,__t1603t__+16,1);
  __t_errcode=str__t688t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1604t__pos,__t1604t__length,__t1604t__first,&__t1605t__unsafe_ptr,&__t1605t__dat__pos,&__t1605t__dat__length,&__t1605t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t889t(__t1605t__unsafe_ptr,__t1605t__dat__pos,__t1605t__dat__length,__t1605t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1600t__buf__buf__unsafe_ptr,&__t1601t____t1576t____t534t__);
  if(__t1601t____t1576t____t534t__){
  free__t503t(&__t1600t__buf__buf__unsafe_ptr);
  }
  exists__t447t(__t1600t__dat__unsafe_ptr,&__t1601t____t1569t____t534t__);
  if(__t1601t____t1569t____t534t__){
  free__t503t(&__t1600t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1598t();return 0;}