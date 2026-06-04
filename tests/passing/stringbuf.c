#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t1617t="name      ";
const char* const __t1642t="it's a me";
const char* const __t1615t="-------------------";
const char* const __t1620t="surnname  ";
const char* const __t1644t="mario";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1625t(char** __t1668t, uint64_t* __t1669t, uint16_t* __t1670t, uint16_t* __t1671t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1631t(char** __t1691t, uint64_t* __t1692t, uint16_t* __t1693t, uint16_t* __t1694t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1691t=unsafe_ptr;
  *__t1692t=unsafe_size;
  *__t1693t=unsafe_offset;
  *__t1694t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1695t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1695t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t1696t, uint64_t* __t1697t, uint16_t* __t1698t, uint16_t* __t1699t, uint64_t _pos, char** __t1700t, uint64_t* __t1701t, uint16_t* __t1702t, uint16_t* __t1703t, uint64_t* __t1704t) {
  char* buf__unsafe_ptr=*__t1696t;
  uint64_t buf__unsafe_size=*__t1697t;
  uint16_t buf__unsafe_offset=*__t1698t;
  uint16_t buf__unsafe_align=*__t1699t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t1696t=buf__unsafe_ptr;
  *__t1697t=buf__unsafe_size;
  *__t1698t=buf__unsafe_offset;
  *__t1699t=buf__unsafe_align;
  *__t1700t=buf__unsafe_ptr;
  *__t1701t=buf__unsafe_size;
  *__t1702t=buf__unsafe_offset;
  *__t1703t=buf__unsafe_align;
  *__t1704t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t1705t, uint64_t* __t1706t, uint16_t* __t1707t, uint16_t* __t1708t, char** __t1709t, uint64_t* __t1710t, uint16_t* __t1711t, uint16_t* __t1712t, uint64_t* __t1713t) {
  char* buf__unsafe_ptr=*__t1705t;
  uint64_t buf__unsafe_size=*__t1706t;
  uint16_t buf__unsafe_offset=*__t1707t;
  uint16_t buf__unsafe_align=*__t1708t;
  uint64_t __t656t=0;
  char* __t657t__buf__unsafe_ptr=0;
  uint64_t __t657t__buf__unsafe_size=0;
  uint16_t __t657t__buf__unsafe_offset=0;
  uint16_t __t657t__buf__unsafe_align=0;
  uint64_t __t657t__pos=0;
  __t656t=0;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t656t,&__t657t__buf__unsafe_ptr,&__t657t__buf__unsafe_size,&__t657t__buf__unsafe_offset,&__t657t__buf__unsafe_align,&__t657t__pos);
  goto __t_return;
  __t_return:
  *__t1705t=buf__unsafe_ptr;
  *__t1706t=buf__unsafe_size;
  *__t1707t=buf__unsafe_offset;
  *__t1708t=buf__unsafe_align;
  *__t1709t=__t657t__buf__unsafe_ptr;
  *__t1710t=__t657t__buf__unsafe_size;
  *__t1711t=__t657t__buf__unsafe_offset;
  *__t1712t=__t657t__buf__unsafe_align;
  *__t1713t=__t657t__pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1714t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1714t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1715t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1715t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1716t) {
  *__t1716t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1717t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1717t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1718t, uint64_t* __t1719t, uint16_t* __t1720t, uint16_t* __t1721t, uint64_t i, char** __t1722t) {
  char* buffer__unsafe_ptr=*__t1718t;
  uint64_t buffer__unsafe_size=*__t1719t;
  uint16_t buffer__unsafe_offset=*__t1720t;
  uint16_t buffer__unsafe_align=*__t1721t;
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
  *__t1718t=buffer__unsafe_ptr;
  *__t1719t=buffer__unsafe_size;
  *__t1720t=buffer__unsafe_offset;
  *__t1721t=buffer__unsafe_align;
  *__t1722t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1723t, uint64_t* __t1724t, uint16_t* __t1725t, uint16_t* __t1726t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1723t=unsafe_ptr;
  *__t1724t=unsafe_size;
  *__t1725t=unsafe_offset;
  *__t1726t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1727t) {
  *__t1727t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1728t) {
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
  *__t1728t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1729t, uint64_t* __t1730t, uint64_t* __t1731t, char* __t1732t) {
  goto __t_return;
  __t_return:
  *__t1729t=unsafe_ptr;
  *__t1730t=dat__pos;
  *__t1731t=dat__length;
  *__t1732t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1733t, uint64_t* __t1734t, uint64_t* __t1735t, char* __t1736t) {
  char* unsafe_ptr=0;
  uint64_t __t788t__=0;
  uint64_t __t789t=0;
  char __t790t__=0;
  uint64_t __t791t__=0;
  uint64_t __t792t=0;
  char __t793t__=0;
  char* __t794t__unsafe_ptr=0;
  uint64_t __t794t__dat__pos=0;
  uint64_t __t794t__dat__length=0;
  char __t794t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t788t__);
  __t789t=1;
  neq__t144t(__t788t__,__t789t,&__t790t__);
  if(__t790t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t791t__);
  __t792t=0;
  neq__t144t(__t791t__,__t792t,&__t793t__);
  if(__t793t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t783t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t794t__unsafe_ptr,&__t794t__dat__pos,&__t794t__dat__length,&__t794t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1733t=__t794t__unsafe_ptr;
  *__t1734t=__t794t__dat__pos;
  *__t1735t=__t794t__dat__length;
  *__t1736t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1737t, uint64_t* __t1738t, uint64_t* __t1739t, char* __t1740t) {
  uint64_t __t823t=0;
  char __t824t__=0;
  char* __t825t__=0;
  char __t826t__value=0;
  char first=0;
  char* __t827t__unsafe_ptr=0;
  uint64_t __t827t__dat__pos=0;
  uint64_t __t827t__dat__length=0;
  char __t827t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t823t=0;
  neq__t144t(length,__t823t,&__t824t__);
  if(__t824t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t825t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t825t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t826t__value,__t825t__,1);
  first=__t826t__value;
  }
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t827t__unsafe_ptr,&__t827t__dat__pos,&__t827t__dat__length,&__t827t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1737t=__t827t__unsafe_ptr;
  *__t1738t=__t827t__dat__pos;
  *__t1739t=__t827t__dat__length;
  *__t1740t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1741t, uint64_t* __t1742t, uint64_t* __t1743t, char* __t1744t) {
  char* __t846t__unsafe_ptr=0;
  uint64_t __t846t__unsafe_size=0;
  uint16_t __t846t__unsafe_offset=0;
  uint16_t __t846t__unsafe_align=0;
  char* __t847t__unsafe_ptr=0;
  uint64_t __t847t__unsafe_size=0;
  uint16_t __t847t__unsafe_offset=0;
  uint16_t __t847t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t848t__=0;
  uint64_t length=0;
  uint64_t __t849t=0;
  uint64_t __t850t__=0;
  uint64_t __t851t=0;
  char* __t853t__unsafe_ptr=0;
  uint64_t __t853t__dat__pos=0;
  uint64_t __t853t__dat__length=0;
  char __t853t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t763t(&__t846t__unsafe_ptr,&__t846t__unsafe_size,&__t846t__unsafe_offset,&__t846t__unsafe_align);
  __t847t__unsafe_ptr=__t846t__unsafe_ptr;
  __t847t__unsafe_size=__t846t__unsafe_size;
  __t847t__unsafe_offset=__t846t__unsafe_offset;
  __t847t__unsafe_align=__t846t__unsafe_align;
  buf__unsafe_ptr=__t847t__unsafe_ptr;
  buf__unsafe_size=__t847t__unsafe_size;
  buf__unsafe_offset=__t847t__unsafe_offset;
  buf__unsafe_align=__t847t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t848t__);
  buf__unsafe_ptr=__t848t__;
  if(c){
  length=strlen(c);
  }
  __t849t=1;
  add__t175t(length,__t849t,&__t850t__);
  buf__unsafe_size=__t850t__;
  __t851t=0;
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t851t,length,&__t853t__unsafe_ptr,&__t853t__dat__pos,&__t853t__dat__length,&__t853t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1741t=__t853t__unsafe_ptr;
  *__t1742t=__t853t__dat__pos;
  *__t1743t=__t853t__dat__length;
  *__t1744t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1745t) {
  goto __t_return;
  __t_return:
  *__t1745t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1746t) {
  goto __t_return;
  __t_return:
  *__t1746t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1747t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1747t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1748t, uint64_t* __t1749t, uint16_t* __t1750t, uint16_t* __t1751t, uint64_t pos, char** __t1752t, uint64_t* __t1753t, uint16_t* __t1754t, uint16_t* __t1755t, uint64_t* __t1756t) {
  char* buf__unsafe_ptr=*__t1748t;
  uint64_t buf__unsafe_size=*__t1749t;
  uint16_t buf__unsafe_offset=*__t1750t;
  uint16_t buf__unsafe_align=*__t1751t;
  goto __t_return;
  __t_return:
  *__t1748t=buf__unsafe_ptr;
  *__t1749t=buf__unsafe_size;
  *__t1750t=buf__unsafe_offset;
  *__t1751t=buf__unsafe_align;
  *__t1752t=buf__unsafe_ptr;
  *__t1753t=buf__unsafe_size;
  *__t1754t=buf__unsafe_offset;
  *__t1755t=buf__unsafe_align;
  *__t1756t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t1757t, uint64_t* __t1758t, uint16_t* __t1759t, uint16_t* __t1760t, uint64_t* __t1761t, uint64_t length, char** __t1762t, uint64_t* __t1763t, uint16_t* __t1764t, uint16_t* __t1765t, uint64_t* __t1766t) {
  char* allocator__buf__unsafe_ptr=*__t1757t;
  uint64_t allocator__buf__unsafe_size=*__t1758t;
  uint16_t allocator__buf__unsafe_offset=*__t1759t;
  uint16_t allocator__buf__unsafe_align=*__t1760t;
  uint64_t allocator__pos=*__t1761t;
  int __t686t=0;
  uint64_t __t687t__=0;
  uint64_t next_pos=0;
  uint64_t __t688t__=0;
  char __t689t__=0;
  uint64_t __t690t=0;
  uint64_t __t691t__=0;
  uint64_t pos=0;
  char* __t692t__buf__unsafe_ptr=0;
  uint64_t __t692t__buf__unsafe_size=0;
  uint16_t __t692t__buf__unsafe_offset=0;
  uint16_t __t692t__buf__unsafe_align=0;
  uint64_t __t692t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t687t__);
  next_pos=__t687t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t688t__);
  gt__t276t(next_pos,__t688t__,&__t689t__);
  if(__t689t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t690t=0;
  add__t175t(allocator__pos,__t690t,&__t691t__);
  pos=__t691t__;
  allocator__pos=next_pos;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t692t__buf__unsafe_ptr,&__t692t__buf__unsafe_size,&__t692t__buf__unsafe_offset,&__t692t__buf__unsafe_align,&__t692t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1757t=allocator__buf__unsafe_ptr;
  *__t1758t=allocator__buf__unsafe_size;
  *__t1759t=allocator__buf__unsafe_offset;
  *__t1760t=allocator__buf__unsafe_align;
  *__t1761t=allocator__pos;
  *__t1762t=__t692t__buf__unsafe_ptr;
  *__t1763t=__t692t__buf__unsafe_size;
  *__t1764t=__t692t__buf__unsafe_offset;
  *__t1765t=__t692t__buf__unsafe_align;
  *__t1766t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t1767t, uint64_t* __t1768t, uint16_t* __t1769t, uint16_t* __t1770t, uint64_t* __t1771t, const char* _other, char** __t1772t, uint64_t* __t1773t, uint64_t* __t1774t, char* __t1775t) {
  char* CHARS__buf__unsafe_ptr=*__t1767t;
  uint64_t CHARS__buf__unsafe_size=*__t1768t;
  uint16_t CHARS__buf__unsafe_offset=*__t1769t;
  uint16_t CHARS__buf__unsafe_align=*__t1770t;
  uint64_t CHARS__pos=*__t1771t;
  char* __t880t__unsafe_ptr=0;
  uint64_t __t880t__dat__pos=0;
  uint64_t __t880t__dat__length=0;
  char __t880t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t881t__=0;
  char* __t882t__buf__unsafe_ptr=0;
  uint64_t __t882t__buf__unsafe_size=0;
  uint16_t __t882t__buf__unsafe_offset=0;
  uint16_t __t882t__buf__unsafe_align=0;
  uint64_t __t882t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t883t=0;
  char* __t884t__unsafe_ptr=0;
  uint64_t __t884t__dat__pos=0;
  uint64_t __t884t__dat__length=0;
  char __t884t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_other,&__t880t__unsafe_ptr,&__t880t__dat__pos,&__t880t__dat__length,&__t880t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t880t__unsafe_ptr;
  other__dat__pos=__t880t__dat__pos;
  other__dat__length=__t880t__dat__length;
  other__dat__first=__t880t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t881t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t881t__,&__t882t__buf__unsafe_ptr,&__t882t__buf__unsafe_size,&__t882t__buf__unsafe_offset,&__t882t__buf__unsafe_align,&__t882t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t882t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t882t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t882t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t882t__buf__unsafe_align;
  surface__pos=__t882t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t883t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t883t,other__dat__length,other__dat__first,&__t884t__unsafe_ptr,&__t884t__dat__pos,&__t884t__dat__length,&__t884t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1767t=CHARS__buf__unsafe_ptr;
  *__t1768t=CHARS__buf__unsafe_size;
  *__t1769t=CHARS__buf__unsafe_offset;
  *__t1770t=CHARS__buf__unsafe_align;
  *__t1771t=CHARS__pos;
  *__t1772t=__t884t__unsafe_ptr;
  *__t1773t=__t884t__dat__pos;
  *__t1774t=__t884t__dat__length;
  *__t1775t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1612t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1776t, uint64_t* __t1777t, uint64_t* __t1778t, char* __t1779t, char** __t1780t, uint64_t* __t1781t, uint64_t* __t1782t, char* __t1783t) {
  goto __t_return;
  __t_return:
  *__t1776t=name__unsafe_ptr;
  *__t1777t=name__dat__pos;
  *__t1778t=name__dat__length;
  *__t1779t=name__dat__first;
  *__t1780t=surname__unsafe_ptr;
  *__t1781t=surname__dat__pos;
  *__t1782t=surname__dat__length;
  *__t1783t=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1614t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t380t(__t1615t);
  print__t378t(__t1617t,__t374t);
  print__t987t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t378t(__t1620t,__t374t);
  print__t987t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t380t(__t1615t);
}

static inline __attribute__((always_inline)) int test__t1624t(char** __t1784t, uint64_t* __t1785t, uint16_t* __t1786t, uint16_t* __t1787t, uint64_t* __t1788t, char** __t1789t, uint64_t* __t1790t, uint16_t* __t1791t, uint16_t* __t1792t) {
  char* __t1627t__unsafe_ptr=0;
  uint64_t __t1627t__unsafe_size=0;
  uint16_t __t1627t__unsafe_offset=0;
  uint16_t __t1627t__unsafe_align=0;
  uint64_t __t1628t=0;
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__unsafe_size=0;
  uint16_t __t1629t__unsafe_offset=0;
  uint16_t __t1629t__unsafe_align=0;
  char __t1630t____t534t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1633t__unsafe_ptr=0;
  uint64_t __t1633t__unsafe_size=0;
  uint16_t __t1633t__unsafe_offset=0;
  uint16_t __t1633t__unsafe_align=0;
  uint64_t __t1634t=0;
  uint64_t __t1635t__=0;
  char* __t1636t__unsafe_ptr=0;
  uint64_t __t1636t__unsafe_size=0;
  uint16_t __t1636t__unsafe_offset=0;
  uint16_t __t1636t__unsafe_align=0;
  char __t1637t____t534t__=0;
  char* __t1638t__buf__unsafe_ptr=0;
  uint64_t __t1638t__buf__unsafe_size=0;
  uint16_t __t1638t__buf__unsafe_offset=0;
  uint16_t __t1638t__buf__unsafe_align=0;
  uint64_t __t1638t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1639t=0;
  char* __t1640t__=0;
  uint64_t __t1641t=0;
  char* __t1643t__unsafe_ptr=0;
  uint64_t __t1643t__dat__pos=0;
  uint64_t __t1643t__dat__length=0;
  char __t1643t__dat__first=0;
  char* __t1645t__unsafe_ptr=0;
  uint64_t __t1645t__dat__pos=0;
  uint64_t __t1645t__dat__length=0;
  char __t1645t__dat__first=0;
  char* __t1646t__name__unsafe_ptr=0;
  uint64_t __t1646t__name__dat__pos=0;
  uint64_t __t1646t__name__dat__length=0;
  char __t1646t__name__dat__first=0;
  char* __t1646t__surname__unsafe_ptr=0;
  uint64_t __t1646t__surname__dat__pos=0;
  uint64_t __t1646t__surname__dat__length=0;
  char __t1646t__surname__dat__first=0;
  uint64_t __t1647t=0;
  char* __t1648t__=0;
  char* __t1649t__name__unsafe_ptr=0;
  uint64_t __t1649t__name__dat__pos=0;
  uint64_t __t1649t__name__dat__length=0;
  char __t1649t__name__dat__first=0;
  char* __t1649t__surname__unsafe_ptr=0;
  uint64_t __t1649t__surname__dat__pos=0;
  uint64_t __t1649t__surname__dat__length=0;
  char __t1649t__surname__dat__first=0;
  char* __t1651t__unsafe_ptr=0;
  uint64_t __t1651t__unsafe_size=0;
  uint16_t __t1651t__unsafe_offset=0;
  uint16_t __t1651t__unsafe_align=0;
  char* __t1655t__unsafe_ptr=0;
  uint64_t __t1655t__unsafe_size=0;
  uint16_t __t1655t__unsafe_offset=0;
  uint16_t __t1655t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1625t(&__t1627t__unsafe_ptr,&__t1627t__unsafe_size,&__t1627t__unsafe_offset,&__t1627t__unsafe_align);
  __t1628t=4;
  __t_errcode=alloc__t532t(&__t1627t__unsafe_ptr,&__t1627t__unsafe_size,&__t1627t__unsafe_offset,&__t1627t__unsafe_align,__t1628t,&__t1629t__unsafe_ptr,&__t1629t__unsafe_size,&__t1629t__unsafe_offset,&__t1629t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1629t__unsafe_ptr;
  people__unsafe_size=__t1629t__unsafe_size;
  people__unsafe_offset=__t1629t__unsafe_offset;
  people__unsafe_align=__t1629t__unsafe_align;
  char____t_buffer____buffer__t1631t(&__t1633t__unsafe_ptr,&__t1633t__unsafe_size,&__t1633t__unsafe_offset,&__t1633t__unsafe_align);
  __t1634t=4;
  KB__t481t(__t1634t,&__t1635t__);
  __t_errcode=alloc__t532t(&__t1633t__unsafe_ptr,&__t1633t__unsafe_size,&__t1633t__unsafe_offset,&__t1633t__unsafe_align,__t1635t__,&__t1636t__unsafe_ptr,&__t1636t__unsafe_size,&__t1636t__unsafe_offset,&__t1636t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1636t__unsafe_ptr,&__t1636t__unsafe_size,&__t1636t__unsafe_offset,&__t1636t__unsafe_align,&__t1638t__buf__unsafe_ptr,&__t1638t__buf__unsafe_size,&__t1638t__buf__unsafe_offset,&__t1638t__buf__unsafe_align,&__t1638t__pos);
  buf__buf__unsafe_ptr=__t1638t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1638t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1638t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1638t__buf__unsafe_align;
  buf__pos=__t1638t__pos;
  __t1639t=0;
  __t_errcode=mutget__t633t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1639t,&__t1640t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1641t=0;
  __t_errcode=copy__t879t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1642t,&__t1643t__unsafe_ptr,&__t1643t__dat__pos,&__t1643t__dat__length,&__t1643t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t879t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1644t,&__t1645t__unsafe_ptr,&__t1645t__dat__pos,&__t1645t__dat__length,&__t1645t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1612t(__t1641t,__t1643t__unsafe_ptr,__t1643t__dat__pos,__t1643t__dat__length,__t1643t__dat__first,__t1645t__unsafe_ptr,__t1645t__dat__pos,__t1645t__dat__length,__t1645t__dat__first,&__t1646t__name__unsafe_ptr,&__t1646t__name__dat__pos,&__t1646t__name__dat__length,&__t1646t__name__dat__first,&__t1646t__surname__unsafe_ptr,&__t1646t__surname__dat__pos,&__t1646t__surname__dat__length,&__t1646t__surname__dat__first);
  if(!__t1640t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1640t__,&__t1646t__name__unsafe_ptr,8);
  memcpy(__t1640t__+8,&__t1646t__name__dat__pos,8);
  memcpy(__t1640t__+16,&__t1646t__name__dat__length,8);
  memcpy(__t1640t__+24,&__t1646t__name__dat__first,1);
  memcpy(__t1640t__+25,&__t1646t__surname__unsafe_ptr,8);
  memcpy(__t1640t__+33,&__t1646t__surname__dat__pos,8);
  memcpy(__t1640t__+41,&__t1646t__surname__dat__length,8);
  memcpy(__t1640t__+49,&__t1646t__surname__dat__first,1);
  __t1647t=0;
  __t_errcode=get__t640t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1647t,&__t1648t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1648t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1649t__name__unsafe_ptr,__t1648t__,8);
  memcpy(&__t1649t__name__dat__pos,__t1648t__+8,8);
  memcpy(&__t1649t__name__dat__length,__t1648t__+16,8);
  memcpy(&__t1649t__name__dat__first,__t1648t__+24,1);
  memcpy(&__t1649t__surname__unsafe_ptr,__t1648t__+25,8);
  memcpy(&__t1649t__surname__dat__pos,__t1648t__+33,8);
  memcpy(&__t1649t__surname__dat__length,__t1648t__+41,8);
  memcpy(&__t1649t__surname__dat__first,__t1648t__+49,1);
  print__t1614t(__t1649t__name__unsafe_ptr,__t1649t__name__dat__pos,__t1649t__name__dat__length,__t1649t__name__dat__first,__t1649t__surname__unsafe_ptr,__t1649t__surname__dat__pos,__t1649t__surname__dat__length,__t1649t__surname__dat__first);
  __t1651t__unsafe_ptr=people__unsafe_ptr;
  __t1651t__unsafe_size=people__unsafe_size;
  __t1651t__unsafe_offset=people__unsafe_offset+0;
  __t1651t__unsafe_align=people__unsafe_align;
  __t1655t__unsafe_ptr=__t1651t__unsafe_ptr;
  __t1655t__unsafe_size=__t1651t__unsafe_size;
  __t1655t__unsafe_offset=__t1651t__unsafe_offset+8;
  __t1655t__unsafe_align=__t1651t__unsafe_align;
  dat__unsafe_ptr=__t1655t__unsafe_ptr;
  dat__unsafe_size=__t1655t__unsafe_size;
  dat__unsafe_offset=__t1655t__unsafe_offset;
  dat__unsafe_align=__t1655t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__buf__unsafe_ptr,&__t1637t____t534t__);
  if(__t1637t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  exists__t447t(dat__unsafe_ptr,&__t1630t____t534t__);
  if(__t1630t____t534t__){
  free__t503t(&dat__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1784t=buf__buf__unsafe_ptr;
  *__t1785t=buf__buf__unsafe_size;
  *__t1786t=buf__buf__unsafe_offset;
  *__t1787t=buf__buf__unsafe_align;
  *__t1788t=buf__pos;
  *__t1789t=dat__unsafe_ptr;
  *__t1790t=dat__unsafe_size;
  *__t1791t=dat__unsafe_offset;
  *__t1792t=dat__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1659t() {
  char* __t1661t__buf__buf__unsafe_ptr=0;
  uint64_t __t1661t__buf__buf__unsafe_size=0;
  uint16_t __t1661t__buf__buf__unsafe_offset=0;
  uint16_t __t1661t__buf__buf__unsafe_align=0;
  uint64_t __t1661t__buf__pos=0;
  char* __t1661t__dat__unsafe_ptr=0;
  uint64_t __t1661t__dat__unsafe_size=0;
  uint16_t __t1661t__dat__unsafe_offset=0;
  uint16_t __t1661t__dat__unsafe_align=0;
  char __t1662t____t1630t____t534t__=0;
  char __t1662t____t1637t____t534t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1663t=0;
  char* __t1664t__=0;
  uint64_t __t1665t__pos=0;
  uint64_t __t1665t__length=0;
  char __t1665t__first=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__dat__pos=0;
  uint64_t __t1666t__dat__length=0;
  char __t1666t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1624t(&__t1661t__buf__buf__unsafe_ptr,&__t1661t__buf__buf__unsafe_size,&__t1661t__buf__buf__unsafe_offset,&__t1661t__buf__buf__unsafe_align,&__t1661t__buf__pos,&__t1661t__dat__unsafe_ptr,&__t1661t__dat__unsafe_size,&__t1661t__dat__unsafe_offset,&__t1661t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1661t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1661t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1661t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1661t__buf__buf__unsafe_align;
  t__buf__pos=__t1661t__buf__pos;
  t__dat__unsafe_ptr=__t1661t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1661t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1661t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1661t__dat__unsafe_align;
  __t1663t=0;
  __t_errcode=get__t640t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1663t,&__t1664t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1664t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1665t__pos,__t1664t__,8);
  memcpy(&__t1665t__length,__t1664t__+8,8);
  memcpy(&__t1665t__first,__t1664t__+16,1);
  __t_errcode=str__t787t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1665t__pos,__t1665t__length,__t1665t__first,&__t1666t__unsafe_ptr,&__t1666t__dat__pos,&__t1666t__dat__length,&__t1666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t1666t__unsafe_ptr,__t1666t__dat__pos,__t1666t__dat__length,__t1666t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1661t__buf__buf__unsafe_ptr,&__t1662t____t1637t____t534t__);
  if(__t1662t____t1637t____t534t__){
  free__t503t(&__t1661t__buf__buf__unsafe_ptr);
  }
  exists__t447t(__t1661t__dat__unsafe_ptr,&__t1662t____t1630t____t534t__);
  if(__t1662t____t1630t____t534t__){
  free__t503t(&__t1661t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1659t();return 0;}