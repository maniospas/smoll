#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1650t="world";
const char* const __t1648t=" ";
const char* const __t1642t="hello";
const char* const __t1652t="!";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1661t, uint64_t* __t1662t, uint16_t* __t1663t, uint16_t* __t1664t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1661t=unsafe_ptr;
  *__t1662t=unsafe_size;
  *__t1663t=unsafe_offset;
  *__t1664t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1665t) {
  *__t1665t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1666t) {
  int value=0;
  *__t1666t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1667t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1667t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1668t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1668t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1669t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1669t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1670t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1670t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1671t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1671t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1672t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1672t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1673t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1673t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1674t) {
  *__t1674t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1675t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1675t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1676t) {
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
  *__t1676t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1677t, uint64_t* __t1678t, uint64_t* __t1679t, char* __t1680t) {
  goto __t_return;
  __t_return:
  *__t1677t=unsafe_ptr;
  *__t1678t=dat__pos;
  *__t1679t=dat__length;
  *__t1680t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1681t, uint64_t* __t1682t, uint64_t* __t1683t, char* __t1684t) {
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
  *__t1681t=__t794t__unsafe_ptr;
  *__t1682t=__t794t__dat__pos;
  *__t1683t=__t794t__dat__length;
  *__t1684t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1685t, uint64_t* __t1686t, uint64_t* __t1687t, char* __t1688t) {
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
  *__t1685t=__t827t__unsafe_ptr;
  *__t1686t=__t827t__dat__pos;
  *__t1687t=__t827t__dat__length;
  *__t1688t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1689t, uint64_t* __t1690t, uint64_t* __t1691t, char* __t1692t) {
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
  *__t1689t=__t853t__unsafe_ptr;
  *__t1690t=__t853t__dat__pos;
  *__t1691t=__t853t__dat__length;
  *__t1692t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__ptr__nat__nat__char____buffer__t1646t(char** __t1693t, uint64_t* __t1694t, uint16_t* __t1695t, uint16_t* __t1696t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1693t=unsafe_ptr;
  *__t1694t=unsafe_size;
  *__t1695t=unsafe_offset;
  *__t1696t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1697t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1697t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1698t) {
  char* allocated=*__t1698t;
  if(allocated){
  free(allocated);
  }
  *__t1698t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1699t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1699t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1700t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1700t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1701t) {
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
  *__t1701t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1702t, uint64_t* __t1703t, uint16_t* __t1704t, uint16_t* __t1705t, uint64_t size, char** __t1706t, uint64_t* __t1707t, uint16_t* __t1708t, uint16_t* __t1709t) {
  char* buffer__unsafe_ptr=*__t1702t;
  uint64_t buffer__unsafe_size=*__t1703t;
  uint16_t buffer__unsafe_offset=*__t1704t;
  uint16_t buffer__unsafe_align=*__t1705t;
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
  *__t1702t=buffer__unsafe_ptr;
  *__t1703t=buffer__unsafe_size;
  *__t1704t=buffer__unsafe_offset;
  *__t1705t=buffer__unsafe_align;
  *__t1706t=buffer__unsafe_ptr;
  *__t1707t=buffer__unsafe_size;
  *__t1708t=buffer__unsafe_offset;
  *__t1709t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1624t(char** __t1710t, uint64_t* __t1711t, uint16_t* __t1712t, uint16_t* __t1713t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1710t=unsafe_ptr;
  *__t1711t=unsafe_size;
  *__t1712t=unsafe_offset;
  *__t1713t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1714t) {
  goto __t_return;
  __t_return:
  *__t1714t=s__dat__length;
}

static inline __attribute__((always_inline)) void total_length__t1614t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, uint64_t* __t1715t) {
  uint64_t __t1615t=0;
  uint64_t __t1616t=0;
  uint64_t size=0;
  uint64_t __t1617t=0;
  char __t1618t=0;
  char* __t1619t__=0;
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__dat__pos=0;
  uint64_t __t1620t__dat__length=0;
  char __t1620t__dat__first=0;
  char* counter_part__unsafe_ptr=0;
  uint64_t counter_part__dat__pos=0;
  uint64_t counter_part__dat__length=0;
  char counter_part__dat__first=0;
  uint64_t __t1621t__=0;
  uint64_t __t1622t__=0;
  int __t_complain=0;
  __t1615t=0;
  __t1616t=__t1615t;
  size=__t1616t;
  __t1617t=0;
  while(1){
  __t_complain=get__t640t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t1617t,&__t1619t__);
  __t1618t=__t_complain;
  if(!__t1619t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1620t__unsafe_ptr,__t1619t__,8);
  memcpy(&__t1620t__dat__pos,__t1619t__+8,8);
  memcpy(&__t1620t__dat__length,__t1619t__+16,8);
  memcpy(&__t1620t__dat__first,__t1619t__+24,1);
  }
  counter_part__unsafe_ptr=__t1620t__unsafe_ptr;
  counter_part__dat__pos=__t1620t__dat__pos;
  counter_part__dat__length=__t1620t__dat__length;
  counter_part__dat__first=__t1620t__dat__first;
  __t1618t=__t1618t==0;
  __t1617t=__t1617t+1;
  if(!__t1618t){
  break;
  }
  len__t854t(counter_part__unsafe_ptr,counter_part__dat__pos,counter_part__dat__length,counter_part__dat__first,&__t1621t__);
  add__t175t(size,__t1621t__,&__t1622t__);
  size=__t1622t__;
  }
  goto __t_return;
  __t_return:
  *__t1715t=size;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t1716t, uint64_t* __t1717t, uint16_t* __t1718t, uint16_t* __t1719t, uint64_t _pos, char** __t1720t, uint64_t* __t1721t, uint16_t* __t1722t, uint16_t* __t1723t, uint64_t* __t1724t) {
  char* buf__unsafe_ptr=*__t1716t;
  uint64_t buf__unsafe_size=*__t1717t;
  uint16_t buf__unsafe_offset=*__t1718t;
  uint16_t buf__unsafe_align=*__t1719t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
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

static inline __attribute__((always_inline)) void arena__t655t(char** __t1725t, uint64_t* __t1726t, uint16_t* __t1727t, uint16_t* __t1728t, char** __t1729t, uint64_t* __t1730t, uint16_t* __t1731t, uint16_t* __t1732t, uint64_t* __t1733t) {
  char* buf__unsafe_ptr=*__t1725t;
  uint64_t buf__unsafe_size=*__t1726t;
  uint16_t buf__unsafe_offset=*__t1727t;
  uint16_t buf__unsafe_align=*__t1728t;
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
  *__t1725t=buf__unsafe_ptr;
  *__t1726t=buf__unsafe_size;
  *__t1727t=buf__unsafe_offset;
  *__t1728t=buf__unsafe_align;
  *__t1729t=__t657t__buf__unsafe_ptr;
  *__t1730t=__t657t__buf__unsafe_size;
  *__t1731t=__t657t__buf__unsafe_offset;
  *__t1732t=__t657t__buf__unsafe_align;
  *__t1733t=__t657t__pos;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1734t, uint64_t* __t1735t, uint64_t* __t1736t, char* __t1737t) {
  goto __t_return;
  __t_return:
  *__t1734t=other__unsafe_ptr;
  *__t1735t=other__dat__pos;
  *__t1736t=other__dat__length;
  *__t1737t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1738t) {
  goto __t_return;
  __t_return:
  *__t1738t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1739t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1739t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1740t, uint64_t* __t1741t, uint16_t* __t1742t, uint16_t* __t1743t, uint64_t pos, char** __t1744t, uint64_t* __t1745t, uint16_t* __t1746t, uint16_t* __t1747t, uint64_t* __t1748t) {
  char* buf__unsafe_ptr=*__t1740t;
  uint64_t buf__unsafe_size=*__t1741t;
  uint16_t buf__unsafe_offset=*__t1742t;
  uint16_t buf__unsafe_align=*__t1743t;
  goto __t_return;
  __t_return:
  *__t1740t=buf__unsafe_ptr;
  *__t1741t=buf__unsafe_size;
  *__t1742t=buf__unsafe_offset;
  *__t1743t=buf__unsafe_align;
  *__t1744t=buf__unsafe_ptr;
  *__t1745t=buf__unsafe_size;
  *__t1746t=buf__unsafe_offset;
  *__t1747t=buf__unsafe_align;
  *__t1748t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t1749t, uint64_t* __t1750t, uint16_t* __t1751t, uint16_t* __t1752t, uint64_t* __t1753t, uint64_t length, char** __t1754t, uint64_t* __t1755t, uint16_t* __t1756t, uint16_t* __t1757t, uint64_t* __t1758t) {
  char* allocator__buf__unsafe_ptr=*__t1749t;
  uint64_t allocator__buf__unsafe_size=*__t1750t;
  uint16_t allocator__buf__unsafe_offset=*__t1751t;
  uint16_t allocator__buf__unsafe_align=*__t1752t;
  uint64_t allocator__pos=*__t1753t;
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
  *__t1749t=allocator__buf__unsafe_ptr;
  *__t1750t=allocator__buf__unsafe_size;
  *__t1751t=allocator__buf__unsafe_offset;
  *__t1752t=allocator__buf__unsafe_align;
  *__t1753t=allocator__pos;
  *__t1754t=__t692t__buf__unsafe_ptr;
  *__t1755t=__t692t__buf__unsafe_size;
  *__t1756t=__t692t__buf__unsafe_offset;
  *__t1757t=__t692t__buf__unsafe_align;
  *__t1758t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t1759t, uint64_t* __t1760t, uint16_t* __t1761t, uint16_t* __t1762t, uint64_t* __t1763t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1764t, uint64_t* __t1765t, uint64_t* __t1766t, char* __t1767t) {
  char* CHARS__buf__unsafe_ptr=*__t1759t;
  uint64_t CHARS__buf__unsafe_size=*__t1760t;
  uint16_t CHARS__buf__unsafe_offset=*__t1761t;
  uint16_t CHARS__buf__unsafe_align=*__t1762t;
  uint64_t CHARS__pos=*__t1763t;
  char* __t874t__unsafe_ptr=0;
  uint64_t __t874t__dat__pos=0;
  uint64_t __t874t__dat__length=0;
  char __t874t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t875t__=0;
  char* __t876t__buf__unsafe_ptr=0;
  uint64_t __t876t__buf__unsafe_size=0;
  uint16_t __t876t__buf__unsafe_offset=0;
  uint16_t __t876t__buf__unsafe_align=0;
  uint64_t __t876t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t877t=0;
  char* __t878t__unsafe_ptr=0;
  uint64_t __t878t__dat__pos=0;
  uint64_t __t878t__dat__length=0;
  char __t878t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t874t__unsafe_ptr,&__t874t__dat__pos,&__t874t__dat__length,&__t874t__dat__first);
  other__unsafe_ptr=__t874t__unsafe_ptr;
  other__dat__pos=__t874t__dat__pos;
  other__dat__length=__t874t__dat__length;
  other__dat__first=__t874t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t875t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t875t__,&__t876t__buf__unsafe_ptr,&__t876t__buf__unsafe_size,&__t876t__buf__unsafe_offset,&__t876t__buf__unsafe_align,&__t876t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t876t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t876t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t876t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t876t__buf__unsafe_align;
  surface__pos=__t876t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t877t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t877t,other__dat__length,other__dat__first,&__t878t__unsafe_ptr,&__t878t__dat__pos,&__t878t__dat__length,&__t878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1759t=CHARS__buf__unsafe_ptr;
  *__t1760t=CHARS__buf__unsafe_size;
  *__t1761t=CHARS__buf__unsafe_offset;
  *__t1762t=CHARS__buf__unsafe_align;
  *__t1763t=CHARS__pos;
  *__t1764t=__t878t__unsafe_ptr;
  *__t1765t=__t878t__dat__pos;
  *__t1766t=__t878t__dat__length;
  *__t1767t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t660t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t1768t, uint64_t* __t1769t, uint16_t* __t1770t, uint16_t* __t1771t, uint64_t* __t1772t) {
  char* __t661t__unsafe_ptr=0;
  uint64_t __t661t__unsafe_size=0;
  uint16_t __t661t__unsafe_offset=0;
  uint16_t __t661t__unsafe_align=0;
  uint64_t __t662t=0;
  __t661t__unsafe_ptr=self__buf__unsafe_ptr;
  __t661t__unsafe_size=self__buf__unsafe_size;
  __t661t__unsafe_offset=self__buf__unsafe_offset;
  __t661t__unsafe_align=self__buf__unsafe_align;
  __t662t=self__pos;
  goto __t_return;
  __t_return:
  *__t1768t=__t661t__unsafe_ptr;
  *__t1769t=__t661t__unsafe_size;
  *__t1770t=__t661t__unsafe_offset;
  *__t1771t=__t661t__unsafe_align;
  *__t1772t=__t662t;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1773t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1773t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1774t) {
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
  *__t1774t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t841t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t1775t, uint64_t* __t1776t, uint64_t* __t1777t, char* __t1778t) {
  uint64_t __t843t__=0;
  char* __t844t__unsafe_ptr=0;
  uint64_t __t844t__dat__pos=0;
  uint64_t __t844t__dat__length=0;
  char __t844t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t843t__,&__t844t__unsafe_ptr,&__t844t__dat__pos,&__t844t__dat__length,&__t844t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1775t=__t844t__unsafe_ptr;
  *__t1776t=__t844t__dat__pos;
  *__t1777t=__t844t__dat__length;
  *__t1778t=__t844t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1623t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, char** __t1779t, uint64_t* __t1780t, uint64_t* __t1781t, char* __t1782t) {
  char* __t1626t__unsafe_ptr=0;
  uint64_t __t1626t__unsafe_size=0;
  uint16_t __t1626t__unsafe_offset=0;
  uint16_t __t1626t__unsafe_align=0;
  uint64_t __t1627t__=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__unsafe_size=0;
  uint16_t __t1628t__unsafe_offset=0;
  uint16_t __t1628t__unsafe_align=0;
  char __t1629t____t534t__=0;
  char* __t1630t__buf__unsafe_ptr=0;
  uint64_t __t1630t__buf__unsafe_size=0;
  uint16_t __t1630t__buf__unsafe_offset=0;
  uint16_t __t1630t__buf__unsafe_align=0;
  uint64_t __t1630t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t __t1631t=0;
  char __t1632t=0;
  char* __t1633t__=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__dat__pos=0;
  uint64_t __t1634t__dat__length=0;
  char __t1634t__dat__first=0;
  char* part__unsafe_ptr=0;
  uint64_t part__dat__pos=0;
  uint64_t part__dat__length=0;
  char part__dat__first=0;
  char* __t1635t__unsafe_ptr=0;
  uint64_t __t1635t__dat__pos=0;
  uint64_t __t1635t__dat__length=0;
  char __t1635t__dat__first=0;
  char* __t1636t__t661t__unsafe_ptr=0;
  uint64_t __t1636t__t661t__unsafe_size=0;
  uint16_t __t1636t__t661t__unsafe_offset=0;
  uint16_t __t1636t__t661t__unsafe_align=0;
  uint64_t __t1636t__t662t=0;
  uint64_t __t1638t=0;
  char* __t1639t__unsafe_ptr=0;
  uint64_t __t1639t__dat__pos=0;
  uint64_t __t1639t__dat__length=0;
  char __t1639t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1624t(&__t1626t__unsafe_ptr,&__t1626t__unsafe_size,&__t1626t__unsafe_offset,&__t1626t__unsafe_align);
  total_length__t1614t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,&__t1627t__);
  __t_errcode=alloc__t532t(&__t1626t__unsafe_ptr,&__t1626t__unsafe_size,&__t1626t__unsafe_offset,&__t1626t__unsafe_align,__t1627t__,&__t1628t__unsafe_ptr,&__t1628t__unsafe_size,&__t1628t__unsafe_offset,&__t1628t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1628t__unsafe_ptr,&__t1628t__unsafe_size,&__t1628t__unsafe_offset,&__t1628t__unsafe_align,&__t1630t__buf__unsafe_ptr,&__t1630t__buf__unsafe_size,&__t1630t__buf__unsafe_offset,&__t1630t__buf__unsafe_align,&__t1630t__pos);
  CHARS__buf__unsafe_ptr=__t1630t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t1630t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t1630t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t1630t__buf__unsafe_align;
  CHARS__pos=__t1630t__pos;
  __t1631t=0;
  while(1){
  __t_complain=get__t640t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t1631t,&__t1633t__);
  __t1632t=__t_complain;
  if(!__t1633t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1634t__unsafe_ptr,__t1633t__,8);
  memcpy(&__t1634t__dat__pos,__t1633t__+8,8);
  memcpy(&__t1634t__dat__length,__t1633t__+16,8);
  memcpy(&__t1634t__dat__first,__t1633t__+24,1);
  }
  part__unsafe_ptr=__t1634t__unsafe_ptr;
  part__dat__pos=__t1634t__dat__pos;
  part__dat__length=__t1634t__dat__length;
  part__dat__first=__t1634t__dat__first;
  __t1632t=__t1632t==0;
  __t1631t=__t1631t+1;
  if(!__t1632t){
  break;
  }
  __t_errcode=copy__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,part__unsafe_ptr,part__dat__pos,part__dat__length,part__dat__first,&__t1635t__unsafe_ptr,&__t1635t__dat__pos,&__t1635t__dat__length,&__t1635t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  status__t660t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t1636t__t661t__unsafe_ptr,&__t1636t__t661t__unsafe_size,&__t1636t__t661t__unsafe_offset,&__t1636t__t661t__unsafe_align,&__t1636t__t662t);
  __t1638t=0;
  __t_errcode=str__t841t(__t1636t__t661t__unsafe_ptr,__t1636t__t661t__unsafe_size,__t1636t__t661t__unsafe_offset,__t1636t__t661t__unsafe_align,__t1636t__t662t,__t1638t,&__t1639t__unsafe_ptr,&__t1639t__dat__pos,&__t1639t__dat__length,&__t1639t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t1639t__unsafe_ptr,&__t1629t____t534t__);
  if(__t1629t____t534t__){
  free__t503t(&__t1639t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1779t=__t1639t__unsafe_ptr;
  *__t1780t=__t1639t__dat__pos;
  *__t1781t=__t1639t__dat__length;
  *__t1782t=__t1639t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1640t() {
  char* __t1643t__unsafe_ptr=0;
  uint64_t __t1643t__dat__pos=0;
  uint64_t __t1643t__dat__length=0;
  char __t1643t__dat__first=0;
  char* __t1649t__unsafe_ptr=0;
  uint64_t __t1649t__dat__pos=0;
  uint64_t __t1649t__dat__length=0;
  char __t1649t__dat__first=0;
  char* __t1651t__unsafe_ptr=0;
  uint64_t __t1651t__dat__pos=0;
  uint64_t __t1651t__dat__length=0;
  char __t1651t__dat__first=0;
  char* __t1653t__unsafe_ptr=0;
  uint64_t __t1653t__dat__pos=0;
  uint64_t __t1653t__dat__length=0;
  char __t1653t__dat__first=0;
  char* __t1654t__unsafe_ptr=0;
  uint64_t __t1654t__unsafe_size=0;
  uint16_t __t1654t__unsafe_offset=0;
  uint16_t __t1654t__unsafe_align=0;
  uint64_t __t1655t=0;
  char* __t1656t__unsafe_ptr=0;
  uint64_t __t1656t__unsafe_size=0;
  uint16_t __t1656t__unsafe_offset=0;
  uint16_t __t1656t__unsafe_align=0;
  char __t1657t____t534t__=0;
  char* __t1658t__unsafe_ptr=0;
  uint64_t __t1658t__dat__pos=0;
  uint64_t __t1658t__dat__length=0;
  char __t1658t__dat__first=0;
  char __t1659t____t1629t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t845t(__t1642t,&__t1643t__unsafe_ptr,&__t1643t__dat__pos,&__t1643t__dat__length,&__t1643t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1648t,&__t1649t__unsafe_ptr,&__t1649t__dat__pos,&__t1649t__dat__length,&__t1649t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1650t,&__t1651t__unsafe_ptr,&__t1651t__dat__pos,&__t1651t__dat__length,&__t1651t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1652t,&__t1653t__unsafe_ptr,&__t1653t__dat__pos,&__t1653t__dat__length,&__t1653t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__ptr__nat__nat__char____buffer__t1646t(&__t1654t__unsafe_ptr,&__t1654t__unsafe_size,&__t1654t__unsafe_offset,&__t1654t__unsafe_align);
  __t1655t=4;
  __t_errcode=alloc__t532t(&__t1654t__unsafe_ptr,&__t1654t__unsafe_size,&__t1654t__unsafe_offset,&__t1654t__unsafe_align,__t1655t,&__t1656t__unsafe_ptr,&__t1656t__unsafe_size,&__t1656t__unsafe_offset,&__t1656t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1654t__unsafe_ptr,&__t1643t__unsafe_ptr,8);
  memcpy(__t1654t__unsafe_ptr+8,&__t1643t__dat__pos,8);
  memcpy(__t1654t__unsafe_ptr+16,&__t1643t__dat__length,8);
  memcpy(__t1654t__unsafe_ptr+24,&__t1643t__dat__first,1);
  memcpy(__t1654t__unsafe_ptr+25,&__t1649t__unsafe_ptr,8);
  memcpy(__t1654t__unsafe_ptr+33,&__t1649t__dat__pos,8);
  memcpy(__t1654t__unsafe_ptr+41,&__t1649t__dat__length,8);
  memcpy(__t1654t__unsafe_ptr+49,&__t1649t__dat__first,1);
  memcpy(__t1654t__unsafe_ptr+50,&__t1651t__unsafe_ptr,8);
  memcpy(__t1654t__unsafe_ptr+58,&__t1651t__dat__pos,8);
  memcpy(__t1654t__unsafe_ptr+66,&__t1651t__dat__length,8);
  memcpy(__t1654t__unsafe_ptr+74,&__t1651t__dat__first,1);
  memcpy(__t1654t__unsafe_ptr+75,&__t1653t__unsafe_ptr,8);
  memcpy(__t1654t__unsafe_ptr+83,&__t1653t__dat__pos,8);
  memcpy(__t1654t__unsafe_ptr+91,&__t1653t__dat__length,8);
  memcpy(__t1654t__unsafe_ptr+99,&__t1653t__dat__first,1);
  __t_errcode=concat__t1623t(__t1654t__unsafe_ptr,__t1654t__unsafe_size,__t1654t__unsafe_offset,__t1654t__unsafe_align,&__t1658t__unsafe_ptr,&__t1658t__dat__pos,&__t1658t__dat__length,&__t1658t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t1658t__unsafe_ptr,__t1658t__dat__pos,__t1658t__dat__length,__t1658t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1658t__unsafe_ptr,&__t1659t____t1629t____t534t__);
  if(__t1659t____t1629t____t534t__){
  free__t503t(&__t1658t__unsafe_ptr);
  }
  exists__t447t(__t1656t__unsafe_ptr,&__t1657t____t534t__);
  if(__t1657t____t534t__){
  free__t503t(&__t1656t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1640t();return 0;}