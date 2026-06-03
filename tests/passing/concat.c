#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1635t="manios";
const char* const __t1606t=" ";
const char* const __t1627t="name";
const char* const __t1623t="my";
const char* const __t1619t="hi";
const char* const __t1631t="is";
const char* const __t382t="\n";
static const char* __t_all_errcodes[38] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1587t(char** __t1651t, uint64_t* __t1652t, uint16_t* __t1653t, uint16_t* __t1654t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1651t=unsafe_ptr;
  *__t1652t=unsafe_size;
  *__t1653t=unsafe_offset;
  *__t1654t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1655t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1655t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1656t) {
  char* allocated=*__t1656t;
  if(allocated){
  free(allocated);
  }
  *__t1656t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1657t) {
  int value=0;
  *__t1657t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1658t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1658t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1659t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1659t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1660t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1660t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1661t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1661t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1662t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1662t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1663t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1663t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1664t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1664t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1665t) {
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
  *__t1665t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1666t, uint64_t* __t1667t, uint16_t* __t1668t, uint16_t* __t1669t, uint64_t size, char** __t1670t, uint64_t* __t1671t, uint16_t* __t1672t, uint16_t* __t1673t) {
  char* buffer__unsafe_ptr=*__t1666t;
  uint64_t buffer__unsafe_size=*__t1667t;
  uint16_t buffer__unsafe_offset=*__t1668t;
  uint16_t buffer__unsafe_align=*__t1669t;
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
  *__t1666t=buffer__unsafe_ptr;
  *__t1667t=buffer__unsafe_size;
  *__t1668t=buffer__unsafe_offset;
  *__t1669t=buffer__unsafe_align;
  *__t1670t=buffer__unsafe_ptr;
  *__t1671t=buffer__unsafe_size;
  *__t1672t=buffer__unsafe_offset;
  *__t1673t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1674t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1674t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1675t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1675t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1676t) {
  *__t1676t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1677t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1677t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1678t, uint64_t* __t1679t, uint16_t* __t1680t, uint16_t* __t1681t, uint64_t i, char** __t1682t) {
  char* buffer__unsafe_ptr=*__t1678t;
  uint64_t buffer__unsafe_size=*__t1679t;
  uint16_t buffer__unsafe_offset=*__t1680t;
  uint16_t buffer__unsafe_align=*__t1681t;
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
  *__t1678t=buffer__unsafe_ptr;
  *__t1679t=buffer__unsafe_size;
  *__t1680t=buffer__unsafe_offset;
  *__t1681t=buffer__unsafe_align;
  *__t1682t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t1683t, uint64_t* __t1684t, uint16_t* __t1685t, uint16_t* __t1686t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1683t=unsafe_ptr;
  *__t1684t=unsafe_size;
  *__t1685t=unsafe_offset;
  *__t1686t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1687t) {
  *__t1687t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1688t) {
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
  *__t1688t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1689t, uint64_t* __t1690t, uint64_t* __t1691t, char* __t1692t) {
  goto __t_return;
  __t_return:
  *__t1689t=unsafe_ptr;
  *__t1690t=dat__pos;
  *__t1691t=dat__length;
  *__t1692t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1693t, uint64_t* __t1694t, uint64_t* __t1695t, char* __t1696t) {
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
  *__t1693t=__t699t__unsafe_ptr;
  *__t1694t=__t699t__dat__pos;
  *__t1695t=__t699t__dat__length;
  *__t1696t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1697t, uint64_t* __t1698t, uint64_t* __t1699t, char* __t1700t) {
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
  *__t1697t=__t732t__unsafe_ptr;
  *__t1698t=__t732t__dat__pos;
  *__t1699t=__t732t__dat__length;
  *__t1700t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t1701t, uint64_t* __t1702t, uint64_t* __t1703t, char* __t1704t) {
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
  *__t1701t=__t758t__unsafe_ptr;
  *__t1702t=__t758t__dat__pos;
  *__t1703t=__t758t__dat__length;
  *__t1704t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1705t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1705t=z;
}

static inline __attribute__((always_inline)) int nat16__t1558t(uint64_t x, uint16_t* __t1706t) {
  uint64_t __t1559t=0;
  char __t1560t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1559t=65535;
  gt__t276t(x,__t1559t,&__t1560t__);
  if(__t1560t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1706t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1565t(uint64_t _pos, uint64_t _length, uint16_t* __t1707t, uint16_t* __t1708t) {
  uint16_t __t1566t__=0;
  uint16_t pos=0;
  uint16_t __t1567t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1558t(_pos,&__t1566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1566t__;
  __t_errcode=nat16__t1558t(_length,&__t1567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1567t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1707t=pos;
  *__t1708t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1568t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1709t, uint16_t* __t1710t, uint16_t* __t1711t) {
  char* unsafe_ptr=0;
  uint16_t __t1569t__pos=0;
  uint16_t __t1569t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1565t(s__dat__pos,s__dat__length,&__t1569t__pos,&__t1569t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1569t__pos;
  dat__length=__t1569t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1709t=unsafe_ptr;
  *__t1710t=dat__pos;
  *__t1711t=dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1571t(const char* s, char** __t1712t, uint16_t* __t1713t, uint16_t* __t1714t) {
  char* __t1572t__unsafe_ptr=0;
  uint64_t __t1572t__dat__pos=0;
  uint64_t __t1572t__dat__length=0;
  char __t1572t__dat__first=0;
  char* __t1573t__unsafe_ptr=0;
  uint16_t __t1573t__dat__pos=0;
  uint16_t __t1573t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(s,&__t1572t__unsafe_ptr,&__t1572t__dat__pos,&__t1572t__dat__length,&__t1572t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1568t(__t1572t__unsafe_ptr,__t1572t__dat__pos,__t1572t__dat__length,__t1572t__dat__first,&__t1573t__unsafe_ptr,&__t1573t__dat__pos,&__t1573t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1712t=__t1573t__unsafe_ptr;
  *__t1713t=__t1573t__dat__pos;
  *__t1714t=__t1573t__dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1590t(char** __t1715t, uint64_t* __t1716t, uint16_t* __t1717t, uint16_t* __t1718t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1715t=unsafe_ptr;
  *__t1716t=unsafe_size;
  *__t1717t=unsafe_offset;
  *__t1718t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1719t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1719t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t677t(char** __t1720t, uint64_t* __t1721t, uint16_t* __t1722t, uint16_t* __t1723t, char** __t1724t, uint64_t* __t1725t, uint16_t* __t1726t, uint16_t* __t1727t, uint64_t* __t1728t) {
  char* buf__unsafe_ptr=*__t1720t;
  uint64_t buf__unsafe_size=*__t1721t;
  uint16_t buf__unsafe_offset=*__t1722t;
  uint16_t buf__unsafe_align=*__t1723t;
  uint64_t __t678t=0;
  uint64_t __t679t=0;
  uint64_t pos=0;
  __t678t=0;
  __t679t=__t678t;
  pos=__t679t;
  goto __t_return;
  __t_return:
  *__t1720t=buf__unsafe_ptr;
  *__t1721t=buf__unsafe_size;
  *__t1722t=buf__unsafe_offset;
  *__t1723t=buf__unsafe_align;
  *__t1724t=buf__unsafe_ptr;
  *__t1725t=buf__unsafe_size;
  *__t1726t=buf__unsafe_offset;
  *__t1727t=buf__unsafe_align;
  *__t1728t=pos;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1729t) {
  goto __t_return;
  __t_return:
  *__t1729t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1730t, uint64_t* __t1731t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1730t=from;
  *__t1731t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1732t, uint64_t* __t1733t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1732t=__t473t__from;
  *__t1733t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1734t, uint64_t r__to, uint64_t* __t1735t) {
  uint64_t r__from=*__t1734t;
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
  *__t1734t=r__from;
  *__t1735t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t690t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1736t, uint64_t* __t1737t, uint64_t* __t1738t, char* __t1739t) {
  char* first_pos=0;
  char first=0;
  char* __t691t__unsafe_ptr=0;
  uint64_t __t691t__dat__pos=0;
  uint64_t __t691t__dat__length=0;
  char __t691t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t688t(unsafe_ptr,pos,length,first,&__t691t__unsafe_ptr,&__t691t__dat__pos,&__t691t__dat__length,&__t691t__dat__first);
  goto __t_return;
  __t_return:
  *__t1736t=__t691t__unsafe_ptr;
  *__t1737t=__t691t__dat__pos;
  *__t1738t=__t691t__dat__length;
  *__t1739t=__t691t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1574t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1740t, uint64_t* __t1741t, uint64_t* __t1742t, char* __t1743t) {
  uint64_t __t1575t__=0;
  uint64_t __t1576t__=0;
  char* __t1577t__unsafe_ptr=0;
  uint64_t __t1577t__dat__pos=0;
  uint64_t __t1577t__dat__length=0;
  char __t1577t__dat__first=0;
  nat__t507t(m__dat__pos,&__t1575t__);
  nat__t507t(m__dat__length,&__t1576t__);
  str__t690t(m__unsafe_ptr,__t1575t__,__t1576t__,&__t1577t__unsafe_ptr,&__t1577t__dat__pos,&__t1577t__dat__length,&__t1577t__dat__first);
  goto __t_return;
  __t_return:
  *__t1740t=__t1577t__unsafe_ptr;
  *__t1741t=__t1577t__dat__pos;
  *__t1742t=__t1577t__dat__length;
  *__t1743t=__t1577t__dat__first;
}

static inline __attribute__((always_inline)) void str__t723t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1744t, uint64_t* __t1745t, uint64_t* __t1746t, char* __t1747t) {
  goto __t_return;
  __t_return:
  *__t1744t=other__unsafe_ptr;
  *__t1745t=other__dat__pos;
  *__t1746t=other__dat__length;
  *__t1747t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1748t) {
  goto __t_return;
  __t_return:
  *__t1748t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t851t(char** __t1749t, uint64_t* __t1750t, uint16_t* __t1751t, uint16_t* __t1752t, uint64_t* __t1753t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1754t, uint64_t* __t1755t, uint64_t* __t1756t, char* __t1757t) {
  char* CHARS__buf__unsafe_ptr=*__t1749t;
  uint64_t CHARS__buf__unsafe_size=*__t1750t;
  uint16_t CHARS__buf__unsafe_offset=*__t1751t;
  uint16_t CHARS__buf__unsafe_align=*__t1752t;
  uint64_t CHARS__pos=*__t1753t;
  char* __t852t__unsafe_ptr=0;
  uint64_t __t852t__dat__pos=0;
  uint64_t __t852t__dat__length=0;
  char __t852t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t next_pos=0;
  uint64_t __t855t__=0;
  char __t856t__=0;
  uint64_t __t857t=0;
  uint64_t __t858t__=0;
  uint64_t prev_pos=0;
  char* __t859t__unsafe_ptr=0;
  uint64_t __t859t__dat__pos=0;
  uint64_t __t859t__dat__length=0;
  char __t859t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t852t__unsafe_ptr,&__t852t__dat__pos,&__t852t__dat__length,&__t852t__dat__first);
  other__unsafe_ptr=__t852t__unsafe_ptr;
  other__dat__pos=__t852t__dat__pos;
  other__dat__length=__t852t__dat__length;
  other__dat__first=__t852t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t853t__);
  add__t175t(CHARS__pos,__t853t__,&__t854t__);
  next_pos=__t854t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t855t__);
  gt__t276t(next_pos,__t855t__,&__t856t__);
  if(__t856t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t857t=0;
  add__t175t(CHARS__pos,__t857t,&__t858t__);
  prev_pos=__t858t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t859t__unsafe_ptr,&__t859t__dat__pos,&__t859t__dat__length,&__t859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1749t=CHARS__buf__unsafe_ptr;
  *__t1750t=CHARS__buf__unsafe_size;
  *__t1751t=CHARS__buf__unsafe_offset;
  *__t1752t=CHARS__buf__unsafe_align;
  *__t1753t=CHARS__pos;
  *__t1754t=__t859t__unsafe_ptr;
  *__t1755t=__t859t__dat__pos;
  *__t1756t=__t859t__dat__length;
  *__t1757t=__t859t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t860t(char** __t1758t, uint64_t* __t1759t, uint16_t* __t1760t, uint16_t* __t1761t, uint64_t* __t1762t, const char* _other, char** __t1763t, uint64_t* __t1764t, uint64_t* __t1765t, char* __t1766t) {
  char* CHARS__buf__unsafe_ptr=*__t1758t;
  uint64_t CHARS__buf__unsafe_size=*__t1759t;
  uint16_t CHARS__buf__unsafe_offset=*__t1760t;
  uint16_t CHARS__buf__unsafe_align=*__t1761t;
  uint64_t CHARS__pos=*__t1762t;
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
  *__t1758t=CHARS__buf__unsafe_ptr;
  *__t1759t=CHARS__buf__unsafe_size;
  *__t1760t=CHARS__buf__unsafe_offset;
  *__t1761t=CHARS__buf__unsafe_align;
  *__t1762t=CHARS__pos;
  *__t1763t=__t868t__unsafe_ptr;
  *__t1764t=__t868t__dat__pos;
  *__t1765t=__t868t__dat__length;
  *__t1766t=__t868t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1767t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1767t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1768t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1768t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t736t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t1769t, uint64_t* __t1770t, uint64_t* __t1771t, char* __t1772t) {
  uint64_t __t737t__=0;
  uint64_t length=0;
  uint64_t __t738t=0;
  char __t739t__=0;
  char* __t740t__=0;
  char __t741t__value=0;
  char first=0;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__dat__pos=0;
  uint64_t __t742t__dat__length=0;
  char __t742t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t737t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t737t__;
  __t738t=0;
  neq__t144t(length,__t738t,&__t739t__);
  if(__t739t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t740t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t740t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t741t__value,__t740t__,1);
  first=__t741t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t742t__unsafe_ptr,&__t742t__dat__pos,&__t742t__dat__length,&__t742t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1769t=__t742t__unsafe_ptr;
  *__t1770t=__t742t__dat__pos;
  *__t1771t=__t742t__dat__length;
  *__t1772t=__t742t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1589t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1773t, uint64_t* __t1774t, uint64_t* __t1775t, char* __t1776t) {
  char* __t1592t__unsafe_ptr=0;
  uint64_t __t1592t__unsafe_size=0;
  uint16_t __t1592t__unsafe_offset=0;
  uint16_t __t1592t__unsafe_align=0;
  uint64_t __t1593t=0;
  uint64_t __t1594t__=0;
  char* __t1595t__unsafe_ptr=0;
  uint64_t __t1595t__unsafe_size=0;
  uint16_t __t1595t__unsafe_offset=0;
  uint16_t __t1595t__unsafe_align=0;
  char __t1596t____t534t__=0;
  char* __t1597t__buf__unsafe_ptr=0;
  uint64_t __t1597t__buf__unsafe_size=0;
  uint16_t __t1597t__buf__unsafe_offset=0;
  uint16_t __t1597t__buf__unsafe_align=0;
  uint64_t __t1597t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1598t__=0;
  uint64_t __t1599t__from=0;
  uint64_t __t1599t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1600t=0;
  uint64_t __t1601t__=0;
  uint64_t i=0;
  char* __t1602t__=0;
  char* __t1603t__unsafe_ptr=0;
  uint16_t __t1603t__dat__pos=0;
  uint16_t __t1603t__dat__length=0;
  char* __t1604t__unsafe_ptr=0;
  uint64_t __t1604t__dat__pos=0;
  uint64_t __t1604t__dat__length=0;
  char __t1604t__dat__first=0;
  char* __t1605t__unsafe_ptr=0;
  uint64_t __t1605t__dat__pos=0;
  uint64_t __t1605t__dat__length=0;
  char __t1605t__dat__first=0;
  char* __t1607t__unsafe_ptr=0;
  uint64_t __t1607t__dat__pos=0;
  uint64_t __t1607t__dat__length=0;
  char __t1607t__dat__first=0;
  char* __t1609t__unsafe_ptr=0;
  uint64_t __t1609t__dat__pos=0;
  uint64_t __t1609t__dat__length=0;
  char __t1609t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1590t(&__t1592t__unsafe_ptr,&__t1592t__unsafe_size,&__t1592t__unsafe_offset,&__t1592t__unsafe_align);
  __t1593t=4;
  KB__t481t(__t1593t,&__t1594t__);
  __t_errcode=alloc__t532t(&__t1592t__unsafe_ptr,&__t1592t__unsafe_size,&__t1592t__unsafe_offset,&__t1592t__unsafe_align,__t1594t__,&__t1595t__unsafe_ptr,&__t1595t__unsafe_size,&__t1595t__unsafe_offset,&__t1595t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t677t(&__t1595t__unsafe_ptr,&__t1595t__unsafe_size,&__t1595t__unsafe_offset,&__t1595t__unsafe_align,&__t1597t__buf__unsafe_ptr,&__t1597t__buf__unsafe_size,&__t1597t__buf__unsafe_offset,&__t1597t__buf__unsafe_align,&__t1597t__pos);
  mem__pos=__t1597t__pos;
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1598t__);
  range__t471t(__t1598t__,&__t1599t__from,&__t1599t__to);
  iter__from=__t1599t__from;
  iter__to=__t1599t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1601t__);
  __t1600t=__t_complain;
  i=__t1601t__;
  __t1600t=__t1600t==0;
  if(!__t1600t){
  break;
  }
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1602t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1603t__unsafe_ptr,__t1602t__,8);
  memcpy(&__t1603t__dat__pos,__t1602t__+8,2);
  memcpy(&__t1603t__dat__length,__t1602t__+10,2);
  unpack__t1574t(__t1603t__unsafe_ptr,__t1603t__dat__pos,__t1603t__dat__length,&__t1604t__unsafe_ptr,&__t1604t__dat__pos,&__t1604t__dat__length,&__t1604t__dat__first);
  __t_errcode=copy__t851t(&__t1595t__unsafe_ptr,&__t1595t__unsafe_size,&__t1595t__unsafe_offset,&__t1595t__unsafe_align,&mem__pos,__t1604t__unsafe_ptr,__t1604t__dat__pos,__t1604t__dat__length,__t1604t__dat__first,&__t1605t__unsafe_ptr,&__t1605t__dat__pos,&__t1605t__dat__length,&__t1605t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t860t(&__t1595t__unsafe_ptr,&__t1595t__unsafe_size,&__t1595t__unsafe_offset,&__t1595t__unsafe_align,&mem__pos,__t1606t,&__t1607t__unsafe_ptr,&__t1607t__dat__pos,&__t1607t__dat__length,&__t1607t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t736t(__t1595t__unsafe_ptr,__t1595t__unsafe_size,__t1595t__unsafe_offset,__t1595t__unsafe_align,start,mem__pos,&__t1609t__unsafe_ptr,&__t1609t__dat__pos,&__t1609t__dat__length,&__t1609t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1609t__unsafe_ptr=__t1595t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1609t__unsafe_ptr,&__t1596t____t534t__);
  if(__t1596t____t534t__){
  free__t503t(&__t1609t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1773t=__t1609t__unsafe_ptr;
  *__t1774t=__t1609t__dat__pos;
  *__t1775t=__t1609t__dat__length;
  *__t1776t=__t1609t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t391t(uint64_t value, const char* endl) {
  int __t392t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1610t() {
  char* __t1612t__unsafe_ptr=0;
  uint64_t __t1612t__unsafe_size=0;
  uint16_t __t1612t__unsafe_offset=0;
  uint16_t __t1612t__unsafe_align=0;
  char* __t1613t__unsafe_ptr=0;
  uint64_t __t1613t__unsafe_size=0;
  uint16_t __t1613t__unsafe_offset=0;
  uint16_t __t1613t__unsafe_align=0;
  uint64_t __t1614t=0;
  char* __t1615t__unsafe_ptr=0;
  uint64_t __t1615t__unsafe_size=0;
  uint16_t __t1615t__unsafe_offset=0;
  uint16_t __t1615t__unsafe_align=0;
  char __t1616t____t534t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1617t=0;
  char* __t1618t__=0;
  char* __t1620t__unsafe_ptr=0;
  uint16_t __t1620t__dat__pos=0;
  uint16_t __t1620t__dat__length=0;
  uint64_t __t1621t=0;
  char* __t1622t__=0;
  char* __t1624t__unsafe_ptr=0;
  uint16_t __t1624t__dat__pos=0;
  uint16_t __t1624t__dat__length=0;
  uint64_t __t1625t=0;
  char* __t1626t__=0;
  char* __t1628t__unsafe_ptr=0;
  uint16_t __t1628t__dat__pos=0;
  uint16_t __t1628t__dat__length=0;
  uint64_t __t1629t=0;
  char* __t1630t__=0;
  char* __t1632t__unsafe_ptr=0;
  uint16_t __t1632t__dat__pos=0;
  uint16_t __t1632t__dat__length=0;
  uint64_t __t1633t=0;
  char* __t1634t__=0;
  char* __t1636t__unsafe_ptr=0;
  uint16_t __t1636t__dat__pos=0;
  uint16_t __t1636t__dat__length=0;
  uint64_t __t1637t=0;
  char* __t1638t__=0;
  char* __t1639t__unsafe_ptr=0;
  uint64_t __t1639t__dat__pos=0;
  uint64_t __t1639t__dat__length=0;
  char __t1639t__dat__first=0;
  char __t1640t____t1596t____t534t__=0;
  char* __t1641t__unsafe_ptr=0;
  uint16_t __t1641t__dat__pos=0;
  uint16_t __t1641t__dat__length=0;
  uint64_t __t1642t__=0;
  uint64_t __t1643t__from=0;
  uint64_t __t1643t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1644t=0;
  uint64_t __t1645t__=0;
  uint64_t j=0;
  char* __t1647t__=0;
  char* __t1648t__unsafe_ptr=0;
  uint16_t __t1648t__dat__pos=0;
  uint16_t __t1648t__dat__length=0;
  char* __t1649t__unsafe_ptr=0;
  uint64_t __t1649t__dat__pos=0;
  uint64_t __t1649t__dat__length=0;
  char __t1649t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  str____t_buffer____buffer__t1587t(&__t1612t__unsafe_ptr,&__t1612t__unsafe_size,&__t1612t__unsafe_offset,&__t1612t__unsafe_align);
  __t1613t__unsafe_ptr=__t1612t__unsafe_ptr;
  __t1613t__unsafe_size=__t1612t__unsafe_size;
  __t1613t__unsafe_offset=__t1612t__unsafe_offset;
  __t1613t__unsafe_align=__t1612t__unsafe_align;
  __t1614t=6;
  __t_errcode=alloc__t532t(&__t1613t__unsafe_ptr,&__t1613t__unsafe_size,&__t1613t__unsafe_offset,&__t1613t__unsafe_align,__t1614t,&__t1615t__unsafe_ptr,&__t1615t__unsafe_size,&__t1615t__unsafe_offset,&__t1615t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1615t__unsafe_ptr;
  buff__unsafe_size=__t1615t__unsafe_size;
  buff__unsafe_offset=__t1615t__unsafe_offset;
  buff__unsafe_align=__t1615t__unsafe_align;
  __t1617t=0;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1617t,&__t1618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1571t(__t1619t,&__t1620t__unsafe_ptr,&__t1620t__dat__pos,&__t1620t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1618t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1618t__,&__t1620t__unsafe_ptr,8);
  memcpy(__t1618t__+8,&__t1620t__dat__pos,2);
  memcpy(__t1618t__+10,&__t1620t__dat__length,2);
  __t1621t=1;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1621t,&__t1622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1571t(__t1623t,&__t1624t__unsafe_ptr,&__t1624t__dat__pos,&__t1624t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1622t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1622t__,&__t1624t__unsafe_ptr,8);
  memcpy(__t1622t__+8,&__t1624t__dat__pos,2);
  memcpy(__t1622t__+10,&__t1624t__dat__length,2);
  __t1625t=2;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1625t,&__t1626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1571t(__t1627t,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1626t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1626t__,&__t1628t__unsafe_ptr,8);
  memcpy(__t1626t__+8,&__t1628t__dat__pos,2);
  memcpy(__t1626t__+10,&__t1628t__dat__length,2);
  __t1629t=3;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1629t,&__t1630t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1571t(__t1631t,&__t1632t__unsafe_ptr,&__t1632t__dat__pos,&__t1632t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1630t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1630t__,&__t1632t__unsafe_ptr,8);
  memcpy(__t1630t__+8,&__t1632t__dat__pos,2);
  memcpy(__t1630t__+10,&__t1632t__dat__length,2);
  __t1633t=4;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1633t,&__t1634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1571t(__t1635t,&__t1636t__unsafe_ptr,&__t1636t__dat__pos,&__t1636t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1634t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1634t__,&__t1636t__unsafe_ptr,8);
  memcpy(__t1634t__+8,&__t1636t__dat__pos,2);
  memcpy(__t1634t__+10,&__t1636t__dat__length,2);
  __t1637t=5;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1637t,&__t1638t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1589t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1639t__unsafe_ptr,&__t1639t__dat__pos,&__t1639t__dat__length,&__t1639t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1568t(__t1639t__unsafe_ptr,__t1639t__dat__pos,__t1639t__dat__length,__t1639t__dat__first,&__t1641t__unsafe_ptr,&__t1641t__dat__pos,&__t1641t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1638t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1638t__,&__t1641t__unsafe_ptr,8);
  memcpy(__t1638t__+8,&__t1641t__dat__pos,2);
  memcpy(__t1638t__+10,&__t1641t__dat__length,2);
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1642t__);
  range__t471t(__t1642t__,&__t1643t__from,&__t1643t__to);
  full_iter__from=__t1643t__from;
  full_iter__to=__t1643t__to;
  while(1){
  __t_complain=next__t474t(&full_iter__from,full_iter__to,&__t1645t__);
  __t1644t=__t_complain;
  j=__t1645t__;
  __t1644t=__t1644t==0;
  if(!__t1644t){
  break;
  }
  print__t391t(j,__t1606t);
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1647t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1647t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1648t__unsafe_ptr,__t1647t__,8);
  memcpy(&__t1648t__dat__pos,__t1647t__+8,2);
  memcpy(&__t1648t__dat__length,__t1647t__+10,2);
  unpack__t1574t(__t1648t__unsafe_ptr,__t1648t__dat__pos,__t1648t__dat__length,&__t1649t__unsafe_ptr,&__t1649t__dat__pos,&__t1649t__dat__length,&__t1649t__dat__first);
  print__t893t(__t1649t__unsafe_ptr,__t1649t__dat__pos,__t1649t__dat__length,__t1649t__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1639t__unsafe_ptr,&__t1640t____t1596t____t534t__);
  if(__t1640t____t1596t____t534t__){
  free__t503t(&__t1639t__unsafe_ptr);
  }
  exists__t447t(__t1615t__unsafe_ptr,&__t1616t____t534t__);
  if(__t1616t____t534t__){
  free__t503t(&__t1615t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1610t();return 0;}