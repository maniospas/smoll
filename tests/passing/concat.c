#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1627t="is";
const char* const __t1623t="name";
const char* const __t1619t="my";
const char* const __t1615t="hi";
const char* const __t1631t="manios";
const char* const __t1602t=" ";
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

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1583t(char** __t1647t, uint64_t* __t1648t, uint16_t* __t1649t, uint16_t* __t1650t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1647t=unsafe_ptr;
  *__t1648t=unsafe_size;
  *__t1649t=unsafe_offset;
  *__t1650t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1651t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1651t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1652t) {
  char* allocated=*__t1652t;
  if(allocated){
  free(allocated);
  }
  *__t1652t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1653t) {
  int value=0;
  *__t1653t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1654t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1654t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1655t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1655t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1656t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1656t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1657t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1657t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1658t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1658t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1659t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1659t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1660t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1660t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1661t) {
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
  *__t1661t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1662t, uint64_t* __t1663t, uint16_t* __t1664t, uint16_t* __t1665t, uint64_t size, char** __t1666t, uint64_t* __t1667t, uint16_t* __t1668t, uint16_t* __t1669t) {
  char* buffer__unsafe_ptr=*__t1662t;
  uint64_t buffer__unsafe_size=*__t1663t;
  uint16_t buffer__unsafe_offset=*__t1664t;
  uint16_t buffer__unsafe_align=*__t1665t;
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
  *__t1662t=buffer__unsafe_ptr;
  *__t1663t=buffer__unsafe_size;
  *__t1664t=buffer__unsafe_offset;
  *__t1665t=buffer__unsafe_align;
  *__t1666t=buffer__unsafe_ptr;
  *__t1667t=buffer__unsafe_size;
  *__t1668t=buffer__unsafe_offset;
  *__t1669t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1670t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1670t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1671t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1671t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1672t) {
  *__t1672t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1673t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1673t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1674t, uint64_t* __t1675t, uint16_t* __t1676t, uint16_t* __t1677t, uint64_t i, char** __t1678t) {
  char* buffer__unsafe_ptr=*__t1674t;
  uint64_t buffer__unsafe_size=*__t1675t;
  uint16_t buffer__unsafe_offset=*__t1676t;
  uint16_t buffer__unsafe_align=*__t1677t;
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
  *__t1674t=buffer__unsafe_ptr;
  *__t1675t=buffer__unsafe_size;
  *__t1676t=buffer__unsafe_offset;
  *__t1677t=buffer__unsafe_align;
  *__t1678t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t1679t, uint64_t* __t1680t, uint16_t* __t1681t, uint16_t* __t1682t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1679t=unsafe_ptr;
  *__t1680t=unsafe_size;
  *__t1681t=unsafe_offset;
  *__t1682t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1683t) {
  *__t1683t=to;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1684t) {
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
  *__t1684t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1685t, uint64_t* __t1686t, uint64_t* __t1687t, char* __t1688t) {
  goto __t_return;
  __t_return:
  *__t1685t=unsafe_ptr;
  *__t1686t=dat__pos;
  *__t1687t=dat__length;
  *__t1688t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1689t, uint64_t* __t1690t, uint64_t* __t1691t, char* __t1692t) {
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
  *__t1689t=__t695t__unsafe_ptr;
  *__t1690t=__t695t__dat__pos;
  *__t1691t=__t695t__dat__length;
  *__t1692t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1693t, uint64_t* __t1694t, uint64_t* __t1695t, char* __t1696t) {
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
  *__t1693t=__t728t__unsafe_ptr;
  *__t1694t=__t728t__dat__pos;
  *__t1695t=__t728t__dat__length;
  *__t1696t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t1697t, uint64_t* __t1698t, uint64_t* __t1699t, char* __t1700t) {
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
  *__t1697t=__t754t__unsafe_ptr;
  *__t1698t=__t754t__dat__pos;
  *__t1699t=__t754t__dat__length;
  *__t1700t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1701t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1701t=z;
}

static inline __attribute__((always_inline)) int nat16__t1554t(uint64_t x, uint16_t* __t1702t) {
  uint64_t __t1555t=0;
  char __t1556t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1555t=65535;
  gt__t276t(x,__t1555t,&__t1556t__);
  if(__t1556t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1702t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1561t(uint64_t _pos, uint64_t _length, uint16_t* __t1703t, uint16_t* __t1704t) {
  uint16_t __t1562t__=0;
  uint16_t pos=0;
  uint16_t __t1563t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1554t(_pos,&__t1562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1562t__;
  __t_errcode=nat16__t1554t(_length,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1563t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1703t=pos;
  *__t1704t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1564t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1705t, uint16_t* __t1706t, uint16_t* __t1707t) {
  char* unsafe_ptr=0;
  uint16_t __t1565t__pos=0;
  uint16_t __t1565t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1561t(s__dat__pos,s__dat__length,&__t1565t__pos,&__t1565t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1565t__pos;
  dat__length=__t1565t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1705t=unsafe_ptr;
  *__t1706t=dat__pos;
  *__t1707t=dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1567t(const char* s, char** __t1708t, uint16_t* __t1709t, uint16_t* __t1710t) {
  char* __t1568t__unsafe_ptr=0;
  uint64_t __t1568t__dat__pos=0;
  uint64_t __t1568t__dat__length=0;
  char __t1568t__dat__first=0;
  char* __t1569t__unsafe_ptr=0;
  uint16_t __t1569t__dat__pos=0;
  uint16_t __t1569t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(s,&__t1568t__unsafe_ptr,&__t1568t__dat__pos,&__t1568t__dat__length,&__t1568t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1564t(__t1568t__unsafe_ptr,__t1568t__dat__pos,__t1568t__dat__length,__t1568t__dat__first,&__t1569t__unsafe_ptr,&__t1569t__dat__pos,&__t1569t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1708t=__t1569t__unsafe_ptr;
  *__t1709t=__t1569t__dat__pos;
  *__t1710t=__t1569t__dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1586t(char** __t1711t, uint64_t* __t1712t, uint16_t* __t1713t, uint16_t* __t1714t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1711t=unsafe_ptr;
  *__t1712t=unsafe_size;
  *__t1713t=unsafe_offset;
  *__t1714t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1715t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1715t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t1716t, uint64_t* __t1717t, uint16_t* __t1718t, uint16_t* __t1719t, char** __t1720t, uint64_t* __t1721t, uint16_t* __t1722t, uint16_t* __t1723t, uint64_t* __t1724t) {
  char* buf__unsafe_ptr=*__t1716t;
  uint64_t buf__unsafe_size=*__t1717t;
  uint16_t buf__unsafe_offset=*__t1718t;
  uint16_t buf__unsafe_align=*__t1719t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t1716t=buf__unsafe_ptr;
  *__t1717t=buf__unsafe_size;
  *__t1718t=buf__unsafe_offset;
  *__t1719t=buf__unsafe_align;
  *__t1720t=buf__unsafe_ptr;
  *__t1721t=buf__unsafe_size;
  *__t1722t=buf__unsafe_offset;
  *__t1723t=buf__unsafe_align;
  *__t1724t=pos;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1725t) {
  goto __t_return;
  __t_return:
  *__t1725t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1726t, uint64_t* __t1727t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1726t=from;
  *__t1727t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1728t, uint64_t* __t1729t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1728t=__t473t__from;
  *__t1729t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1730t, uint64_t r__to, uint64_t* __t1731t) {
  uint64_t r__from=*__t1730t;
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
  *__t1730t=r__from;
  *__t1731t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t686t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1732t, uint64_t* __t1733t, uint64_t* __t1734t, char* __t1735t) {
  char* first_pos=0;
  char first=0;
  char* __t687t__unsafe_ptr=0;
  uint64_t __t687t__dat__pos=0;
  uint64_t __t687t__dat__length=0;
  char __t687t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t684t(unsafe_ptr,pos,length,first,&__t687t__unsafe_ptr,&__t687t__dat__pos,&__t687t__dat__length,&__t687t__dat__first);
  goto __t_return;
  __t_return:
  *__t1732t=__t687t__unsafe_ptr;
  *__t1733t=__t687t__dat__pos;
  *__t1734t=__t687t__dat__length;
  *__t1735t=__t687t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1570t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1736t, uint64_t* __t1737t, uint64_t* __t1738t, char* __t1739t) {
  uint64_t __t1571t__=0;
  uint64_t __t1572t__=0;
  char* __t1573t__unsafe_ptr=0;
  uint64_t __t1573t__dat__pos=0;
  uint64_t __t1573t__dat__length=0;
  char __t1573t__dat__first=0;
  nat__t507t(m__dat__pos,&__t1571t__);
  nat__t507t(m__dat__length,&__t1572t__);
  str__t686t(m__unsafe_ptr,__t1571t__,__t1572t__,&__t1573t__unsafe_ptr,&__t1573t__dat__pos,&__t1573t__dat__length,&__t1573t__dat__first);
  goto __t_return;
  __t_return:
  *__t1736t=__t1573t__unsafe_ptr;
  *__t1737t=__t1573t__dat__pos;
  *__t1738t=__t1573t__dat__length;
  *__t1739t=__t1573t__dat__first;
}

static inline __attribute__((always_inline)) void str__t719t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1740t, uint64_t* __t1741t, uint64_t* __t1742t, char* __t1743t) {
  goto __t_return;
  __t_return:
  *__t1740t=other__unsafe_ptr;
  *__t1741t=other__dat__pos;
  *__t1742t=other__dat__length;
  *__t1743t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1744t) {
  goto __t_return;
  __t_return:
  *__t1744t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t847t(char** __t1745t, uint64_t* __t1746t, uint16_t* __t1747t, uint16_t* __t1748t, uint64_t* __t1749t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1750t, uint64_t* __t1751t, uint64_t* __t1752t, char* __t1753t) {
  char* CHARS__buf__unsafe_ptr=*__t1745t;
  uint64_t CHARS__buf__unsafe_size=*__t1746t;
  uint16_t CHARS__buf__unsafe_offset=*__t1747t;
  uint16_t CHARS__buf__unsafe_align=*__t1748t;
  uint64_t CHARS__pos=*__t1749t;
  char* __t848t__unsafe_ptr=0;
  uint64_t __t848t__dat__pos=0;
  uint64_t __t848t__dat__length=0;
  char __t848t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t849t__=0;
  uint64_t __t850t__=0;
  uint64_t next_pos=0;
  uint64_t __t851t__=0;
  char __t852t__=0;
  uint64_t __t853t=0;
  uint64_t __t854t__=0;
  uint64_t prev_pos=0;
  char* __t855t__unsafe_ptr=0;
  uint64_t __t855t__dat__pos=0;
  uint64_t __t855t__dat__length=0;
  char __t855t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t719t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t848t__unsafe_ptr,&__t848t__dat__pos,&__t848t__dat__length,&__t848t__dat__first);
  other__unsafe_ptr=__t848t__unsafe_ptr;
  other__dat__pos=__t848t__dat__pos;
  other__dat__length=__t848t__dat__length;
  other__dat__first=__t848t__dat__first;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t849t__);
  add__t175t(CHARS__pos,__t849t__,&__t850t__);
  next_pos=__t850t__;
  len__t643t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t851t__);
  gt__t276t(next_pos,__t851t__,&__t852t__);
  if(__t852t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t853t=0;
  add__t175t(CHARS__pos,__t853t,&__t854t__);
  prev_pos=__t854t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t688t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t855t__unsafe_ptr,&__t855t__dat__pos,&__t855t__dat__length,&__t855t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1745t=CHARS__buf__unsafe_ptr;
  *__t1746t=CHARS__buf__unsafe_size;
  *__t1747t=CHARS__buf__unsafe_offset;
  *__t1748t=CHARS__buf__unsafe_align;
  *__t1749t=CHARS__pos;
  *__t1750t=__t855t__unsafe_ptr;
  *__t1751t=__t855t__dat__pos;
  *__t1752t=__t855t__dat__length;
  *__t1753t=__t855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t856t(char** __t1754t, uint64_t* __t1755t, uint16_t* __t1756t, uint16_t* __t1757t, uint64_t* __t1758t, const char* _other, char** __t1759t, uint64_t* __t1760t, uint64_t* __t1761t, char* __t1762t) {
  char* CHARS__buf__unsafe_ptr=*__t1754t;
  uint64_t CHARS__buf__unsafe_size=*__t1755t;
  uint16_t CHARS__buf__unsafe_offset=*__t1756t;
  uint16_t CHARS__buf__unsafe_align=*__t1757t;
  uint64_t CHARS__pos=*__t1758t;
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
  *__t1754t=CHARS__buf__unsafe_ptr;
  *__t1755t=CHARS__buf__unsafe_size;
  *__t1756t=CHARS__buf__unsafe_offset;
  *__t1757t=CHARS__buf__unsafe_align;
  *__t1758t=CHARS__pos;
  *__t1759t=__t864t__unsafe_ptr;
  *__t1760t=__t864t__dat__pos;
  *__t1761t=__t864t__dat__length;
  *__t1762t=__t864t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1763t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1763t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1764t) {
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
  *__t1764t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t732t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t1765t, uint64_t* __t1766t, uint64_t* __t1767t, char* __t1768t) {
  uint64_t __t733t__=0;
  uint64_t length=0;
  uint64_t __t734t=0;
  char __t735t__=0;
  char* __t736t__=0;
  char __t737t__value=0;
  char first=0;
  char* __t738t__unsafe_ptr=0;
  uint64_t __t738t__dat__pos=0;
  uint64_t __t738t__dat__length=0;
  char __t738t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t733t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t733t__;
  __t734t=0;
  neq__t144t(length,__t734t,&__t735t__);
  if(__t735t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t736t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t736t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t737t__value,__t736t__,1);
  first=__t737t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t738t__unsafe_ptr,&__t738t__dat__pos,&__t738t__dat__length,&__t738t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1765t=__t738t__unsafe_ptr;
  *__t1766t=__t738t__dat__pos;
  *__t1767t=__t738t__dat__length;
  *__t1768t=__t738t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1585t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1769t, uint64_t* __t1770t, uint64_t* __t1771t, char* __t1772t) {
  char* __t1588t__unsafe_ptr=0;
  uint64_t __t1588t__unsafe_size=0;
  uint16_t __t1588t__unsafe_offset=0;
  uint16_t __t1588t__unsafe_align=0;
  uint64_t __t1589t=0;
  uint64_t __t1590t__=0;
  char* __t1591t__unsafe_ptr=0;
  uint64_t __t1591t__unsafe_size=0;
  uint16_t __t1591t__unsafe_offset=0;
  uint16_t __t1591t__unsafe_align=0;
  char __t1592t____t534t__=0;
  char* __t1593t__buf__unsafe_ptr=0;
  uint64_t __t1593t__buf__unsafe_size=0;
  uint16_t __t1593t__buf__unsafe_offset=0;
  uint16_t __t1593t__buf__unsafe_align=0;
  uint64_t __t1593t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1594t__=0;
  uint64_t __t1595t__from=0;
  uint64_t __t1595t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1596t=0;
  uint64_t __t1597t__=0;
  uint64_t i=0;
  char* __t1598t__=0;
  char* __t1599t__unsafe_ptr=0;
  uint16_t __t1599t__dat__pos=0;
  uint16_t __t1599t__dat__length=0;
  char* __t1600t__unsafe_ptr=0;
  uint64_t __t1600t__dat__pos=0;
  uint64_t __t1600t__dat__length=0;
  char __t1600t__dat__first=0;
  char* __t1601t__unsafe_ptr=0;
  uint64_t __t1601t__dat__pos=0;
  uint64_t __t1601t__dat__length=0;
  char __t1601t__dat__first=0;
  char* __t1603t__unsafe_ptr=0;
  uint64_t __t1603t__dat__pos=0;
  uint64_t __t1603t__dat__length=0;
  char __t1603t__dat__first=0;
  char* __t1605t__unsafe_ptr=0;
  uint64_t __t1605t__dat__pos=0;
  uint64_t __t1605t__dat__length=0;
  char __t1605t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1586t(&__t1588t__unsafe_ptr,&__t1588t__unsafe_size,&__t1588t__unsafe_offset,&__t1588t__unsafe_align);
  __t1589t=4;
  KB__t481t(__t1589t,&__t1590t__);
  __t_errcode=alloc__t532t(&__t1588t__unsafe_ptr,&__t1588t__unsafe_size,&__t1588t__unsafe_offset,&__t1588t__unsafe_align,__t1590t__,&__t1591t__unsafe_ptr,&__t1591t__unsafe_size,&__t1591t__unsafe_offset,&__t1591t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t673t(&__t1591t__unsafe_ptr,&__t1591t__unsafe_size,&__t1591t__unsafe_offset,&__t1591t__unsafe_align,&__t1593t__buf__unsafe_ptr,&__t1593t__buf__unsafe_size,&__t1593t__buf__unsafe_offset,&__t1593t__buf__unsafe_align,&__t1593t__pos);
  mem__pos=__t1593t__pos;
  len__t643t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1594t__);
  range__t471t(__t1594t__,&__t1595t__from,&__t1595t__to);
  iter__from=__t1595t__from;
  iter__to=__t1595t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1597t__);
  __t1596t=__t_complain;
  i=__t1597t__;
  __t1596t=__t1596t==0;
  if(!__t1596t){
  break;
  }
  __t_errcode=get__t636t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1598t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1599t__unsafe_ptr,__t1598t__,8);
  memcpy(&__t1599t__dat__pos,__t1598t__+8,2);
  memcpy(&__t1599t__dat__length,__t1598t__+10,2);
  unpack__t1570t(__t1599t__unsafe_ptr,__t1599t__dat__pos,__t1599t__dat__length,&__t1600t__unsafe_ptr,&__t1600t__dat__pos,&__t1600t__dat__length,&__t1600t__dat__first);
  __t_errcode=copy__t847t(&__t1591t__unsafe_ptr,&__t1591t__unsafe_size,&__t1591t__unsafe_offset,&__t1591t__unsafe_align,&mem__pos,__t1600t__unsafe_ptr,__t1600t__dat__pos,__t1600t__dat__length,__t1600t__dat__first,&__t1601t__unsafe_ptr,&__t1601t__dat__pos,&__t1601t__dat__length,&__t1601t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t856t(&__t1591t__unsafe_ptr,&__t1591t__unsafe_size,&__t1591t__unsafe_offset,&__t1591t__unsafe_align,&mem__pos,__t1602t,&__t1603t__unsafe_ptr,&__t1603t__dat__pos,&__t1603t__dat__length,&__t1603t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t732t(__t1591t__unsafe_ptr,__t1591t__unsafe_size,__t1591t__unsafe_offset,__t1591t__unsafe_align,start,mem__pos,&__t1605t__unsafe_ptr,&__t1605t__dat__pos,&__t1605t__dat__length,&__t1605t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1605t__unsafe_ptr=__t1591t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1605t__unsafe_ptr,&__t1592t____t534t__);
  if(__t1592t____t534t__){
  free__t503t(&__t1605t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1769t=__t1605t__unsafe_ptr;
  *__t1770t=__t1605t__dat__pos;
  *__t1771t=__t1605t__dat__length;
  *__t1772t=__t1605t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t391t(uint64_t value, const char* endl) {
  int __t392t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1606t() {
  char* __t1608t__unsafe_ptr=0;
  uint64_t __t1608t__unsafe_size=0;
  uint16_t __t1608t__unsafe_offset=0;
  uint16_t __t1608t__unsafe_align=0;
  char* __t1609t__unsafe_ptr=0;
  uint64_t __t1609t__unsafe_size=0;
  uint16_t __t1609t__unsafe_offset=0;
  uint16_t __t1609t__unsafe_align=0;
  uint64_t __t1610t=0;
  char* __t1611t__unsafe_ptr=0;
  uint64_t __t1611t__unsafe_size=0;
  uint16_t __t1611t__unsafe_offset=0;
  uint16_t __t1611t__unsafe_align=0;
  char __t1612t____t534t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1613t=0;
  char* __t1614t__=0;
  char* __t1616t__unsafe_ptr=0;
  uint16_t __t1616t__dat__pos=0;
  uint16_t __t1616t__dat__length=0;
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
  char* __t1635t__unsafe_ptr=0;
  uint64_t __t1635t__dat__pos=0;
  uint64_t __t1635t__dat__length=0;
  char __t1635t__dat__first=0;
  char __t1636t____t1592t____t534t__=0;
  char* __t1637t__unsafe_ptr=0;
  uint16_t __t1637t__dat__pos=0;
  uint16_t __t1637t__dat__length=0;
  uint64_t __t1638t__=0;
  uint64_t __t1639t__from=0;
  uint64_t __t1639t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1640t=0;
  uint64_t __t1641t__=0;
  uint64_t j=0;
  char* __t1643t__=0;
  char* __t1644t__unsafe_ptr=0;
  uint16_t __t1644t__dat__pos=0;
  uint16_t __t1644t__dat__length=0;
  char* __t1645t__unsafe_ptr=0;
  uint64_t __t1645t__dat__pos=0;
  uint64_t __t1645t__dat__length=0;
  char __t1645t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  str____t_buffer____buffer__t1583t(&__t1608t__unsafe_ptr,&__t1608t__unsafe_size,&__t1608t__unsafe_offset,&__t1608t__unsafe_align);
  __t1609t__unsafe_ptr=__t1608t__unsafe_ptr;
  __t1609t__unsafe_size=__t1608t__unsafe_size;
  __t1609t__unsafe_offset=__t1608t__unsafe_offset;
  __t1609t__unsafe_align=__t1608t__unsafe_align;
  __t1610t=6;
  __t_errcode=alloc__t532t(&__t1609t__unsafe_ptr,&__t1609t__unsafe_size,&__t1609t__unsafe_offset,&__t1609t__unsafe_align,__t1610t,&__t1611t__unsafe_ptr,&__t1611t__unsafe_size,&__t1611t__unsafe_offset,&__t1611t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1611t__unsafe_ptr;
  buff__unsafe_size=__t1611t__unsafe_size;
  buff__unsafe_offset=__t1611t__unsafe_offset;
  buff__unsafe_align=__t1611t__unsafe_align;
  __t1613t=0;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1613t,&__t1614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1567t(__t1615t,&__t1616t__unsafe_ptr,&__t1616t__dat__pos,&__t1616t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1614t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1614t__,&__t1616t__unsafe_ptr,8);
  memcpy(__t1614t__+8,&__t1616t__dat__pos,2);
  memcpy(__t1614t__+10,&__t1616t__dat__length,2);
  __t1617t=1;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1617t,&__t1618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1567t(__t1619t,&__t1620t__unsafe_ptr,&__t1620t__dat__pos,&__t1620t__dat__length);
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
  __t1621t=2;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1621t,&__t1622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1567t(__t1623t,&__t1624t__unsafe_ptr,&__t1624t__dat__pos,&__t1624t__dat__length);
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
  __t1625t=3;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1625t,&__t1626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1567t(__t1627t,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length);
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
  __t1629t=4;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1629t,&__t1630t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1567t(__t1631t,&__t1632t__unsafe_ptr,&__t1632t__dat__pos,&__t1632t__dat__length);
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
  __t1633t=5;
  __t_errcode=mutget__t629t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1633t,&__t1634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1585t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1635t__unsafe_ptr,&__t1635t__dat__pos,&__t1635t__dat__length,&__t1635t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1564t(__t1635t__unsafe_ptr,__t1635t__dat__pos,__t1635t__dat__length,__t1635t__dat__first,&__t1637t__unsafe_ptr,&__t1637t__dat__pos,&__t1637t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1634t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1634t__,&__t1637t__unsafe_ptr,8);
  memcpy(__t1634t__+8,&__t1637t__dat__pos,2);
  memcpy(__t1634t__+10,&__t1637t__dat__length,2);
  len__t643t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1638t__);
  range__t471t(__t1638t__,&__t1639t__from,&__t1639t__to);
  full_iter__from=__t1639t__from;
  full_iter__to=__t1639t__to;
  while(1){
  __t_complain=next__t474t(&full_iter__from,full_iter__to,&__t1641t__);
  __t1640t=__t_complain;
  j=__t1641t__;
  __t1640t=__t1640t==0;
  if(!__t1640t){
  break;
  }
  print__t391t(j,__t1602t);
  __t_errcode=get__t636t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1643t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1643t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1644t__unsafe_ptr,__t1643t__,8);
  memcpy(&__t1644t__dat__pos,__t1643t__+8,2);
  memcpy(&__t1644t__dat__length,__t1643t__+10,2);
  unpack__t1570t(__t1644t__unsafe_ptr,__t1644t__dat__pos,__t1644t__dat__length,&__t1645t__unsafe_ptr,&__t1645t__dat__pos,&__t1645t__dat__length,&__t1645t__dat__first);
  print__t889t(__t1645t__unsafe_ptr,__t1645t__dat__pos,__t1645t__dat__length,__t1645t__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1635t__unsafe_ptr,&__t1636t____t1592t____t534t__);
  if(__t1636t____t1592t____t534t__){
  free__t503t(&__t1635t__unsafe_ptr);
  }
  exists__t447t(__t1611t__unsafe_ptr,&__t1612t____t534t__);
  if(__t1612t____t534t__){
  free__t503t(&__t1611t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1606t();return 0;}