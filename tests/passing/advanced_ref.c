#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1621t="123";
const char* const __t382t="\n";
const char* const __t1623t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1613t(char** __t1631t, uint64_t* __t1632t, uint16_t* __t1633t, uint16_t* __t1634t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1631t=unsafe_ptr;
  *__t1632t=unsafe_size;
  *__t1633t=unsafe_offset;
  *__t1634t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1635t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1635t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1636t) {
  char* allocated=*__t1636t;
  if(allocated){
  free(allocated);
  }
  *__t1636t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1637t) {
  int value=0;
  *__t1637t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1638t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1638t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1639t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1639t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1640t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1640t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1641t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1641t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1642t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1642t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1643t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1643t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1644t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1644t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1645t) {
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
  *__t1645t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1646t, uint64_t* __t1647t, uint16_t* __t1648t, uint16_t* __t1649t, uint64_t size, char** __t1650t, uint64_t* __t1651t, uint16_t* __t1652t, uint16_t* __t1653t) {
  char* buffer__unsafe_ptr=*__t1646t;
  uint64_t buffer__unsafe_size=*__t1647t;
  uint16_t buffer__unsafe_offset=*__t1648t;
  uint16_t buffer__unsafe_align=*__t1649t;
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
  *__t1646t=buffer__unsafe_ptr;
  *__t1647t=buffer__unsafe_size;
  *__t1648t=buffer__unsafe_offset;
  *__t1649t=buffer__unsafe_align;
  *__t1650t=buffer__unsafe_ptr;
  *__t1651t=buffer__unsafe_size;
  *__t1652t=buffer__unsafe_offset;
  *__t1653t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1654t) {
  goto __t_return;
  __t_return:
  *__t1654t=buffer__unsafe_size;
}

int list__t670t(char** __t1655t, uint64_t* __t1656t, uint16_t* __t1657t, uint16_t* __t1658t, char** __t1659t, uint64_t* __t1660t, uint16_t* __t1661t, uint16_t* __t1662t, uint64_t* __t1663t) {
  char* _buf__unsafe_ptr=*__t1655t;
  uint64_t _buf__unsafe_size=*__t1656t;
  uint16_t _buf__unsafe_offset=*__t1657t;
  uint16_t _buf__unsafe_align=*__t1658t;
  uint64_t __t671t=0;
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char __t673t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t674t__=0;
  uint64_t __t675t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t671t=1;
  __t_errcode=alloc__t532t(&_buf__unsafe_ptr,&_buf__unsafe_size,&_buf__unsafe_offset,&_buf__unsafe_align,__t671t,&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t672t__unsafe_ptr;
  buf__unsafe_size=__t672t__unsafe_size;
  buf__unsafe_offset=__t672t__unsafe_offset;
  buf__unsafe_align=__t672t__unsafe_align;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t674t__);
  __t675t=__t674t__;
  length=__t675t;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__unsafe_ptr,&__t673t____t534t__);
  if(__t673t____t534t__){
  free__t503t(&buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1655t=_buf__unsafe_ptr;
  *__t1656t=_buf__unsafe_size;
  *__t1657t=_buf__unsafe_offset;
  *__t1658t=_buf__unsafe_align;
  *__t1659t=buf__unsafe_ptr;
  *__t1660t=buf__unsafe_size;
  *__t1661t=buf__unsafe_offset;
  *__t1662t=buf__unsafe_align;
  *__t1663t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1664t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1664t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1665t) {
  *__t1665t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1666t) {
  char* new_allocated=0;
  char __t500t__=0;
  char __t501t__=0;
  char* __t502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t447t(new_allocated,&__t500t__);
  not__t28t(__t500t__,&__t501t__);
  if(__t501t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t502t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1666t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1667t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1667t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1668t, uint64_t* __t1669t, uint16_t* __t1670t, uint16_t* __t1671t, uint64_t size, char** __t1672t, uint64_t* __t1673t, uint16_t* __t1674t, uint16_t* __t1675t) {
  char* buffer__unsafe_ptr=*__t1668t;
  uint64_t buffer__unsafe_size=*__t1669t;
  uint16_t buffer__unsafe_offset=*__t1670t;
  uint16_t buffer__unsafe_align=*__t1671t;
  char __t603t__=0;
  uint64_t __t604t=0;
  char __t605t__=0;
  uint64_t __t606t__=0;
  uint64_t __t607t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t608t__=0;
  uint64_t __t609t__=0;
  uint64_t bytes=0;
  char* __t610t__=0;
  char __t611t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t603t__);
  if(__t603t__){
  goto __t_return;
  }
  __t604t=0;
  eq__t120t(buffer__unsafe_size,__t604t,&__t605t__);
  if(__t605t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t606t__);
  mul__t199t(buffer__unsafe_size,__t606t__,&__t607t__);
  prev_bytes=__t607t__;
  buffer__unsafe_size=size;
  nat__t507t(buffer__unsafe_align,&__t608t__);
  mul__t199t(__t608t__,size,&__t609t__);
  bytes=__t609t__;
  __t_errcode=realloc__t499t(buffer__unsafe_ptr,bytes,&__t610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t610t__;
  lt__t252t(prev_bytes,bytes,&__t611t__);
  if(__t611t__){
  zero__t504t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1668t=buffer__unsafe_ptr;
  *__t1669t=buffer__unsafe_size;
  *__t1670t=buffer__unsafe_offset;
  *__t1671t=buffer__unsafe_align;
  *__t1672t=buffer__unsafe_ptr;
  *__t1673t=buffer__unsafe_size;
  *__t1674t=buffer__unsafe_offset;
  *__t1675t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1676t, uint64_t* __t1677t, uint16_t* __t1678t, uint16_t* __t1679t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1676t=unsafe_ptr;
  *__t1677t=unsafe_size;
  *__t1678t=unsafe_offset;
  *__t1679t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1680t) {
  *__t1680t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1681t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1681t=z;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1682t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1682t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1683t) {
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
  *__t1683t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1684t, uint64_t* __t1685t, uint64_t* __t1686t, char* __t1687t) {
  goto __t_return;
  __t_return:
  *__t1684t=unsafe_ptr;
  *__t1685t=dat__pos;
  *__t1686t=dat__length;
  *__t1687t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1688t, uint64_t* __t1689t, uint64_t* __t1690t, char* __t1691t) {
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
  *__t1688t=__t794t__unsafe_ptr;
  *__t1689t=__t794t__dat__pos;
  *__t1690t=__t794t__dat__length;
  *__t1691t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1692t, uint64_t* __t1693t, uint64_t* __t1694t, char* __t1695t) {
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
  *__t1692t=__t827t__unsafe_ptr;
  *__t1693t=__t827t__dat__pos;
  *__t1694t=__t827t__dat__length;
  *__t1695t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1696t, uint64_t* __t1697t, uint64_t* __t1698t, char* __t1699t) {
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
  *__t1696t=__t853t__unsafe_ptr;
  *__t1697t=__t853t__dat__pos;
  *__t1698t=__t853t__dat__length;
  *__t1699t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1700t) {
  goto __t_return;
  __t_return:
  *__t1700t=s__dat__length;
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

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1702t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1702t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1703t, uint64_t* __t1704t, uint16_t* __t1705t, uint16_t* __t1706t, uint64_t pos, char** __t1707t, uint64_t* __t1708t, uint16_t* __t1709t, uint16_t* __t1710t, uint64_t* __t1711t) {
  char* buf__unsafe_ptr=*__t1703t;
  uint64_t buf__unsafe_size=*__t1704t;
  uint16_t buf__unsafe_offset=*__t1705t;
  uint16_t buf__unsafe_align=*__t1706t;
  goto __t_return;
  __t_return:
  *__t1703t=buf__unsafe_ptr;
  *__t1704t=buf__unsafe_size;
  *__t1705t=buf__unsafe_offset;
  *__t1706t=buf__unsafe_align;
  *__t1707t=buf__unsafe_ptr;
  *__t1708t=buf__unsafe_size;
  *__t1709t=buf__unsafe_offset;
  *__t1710t=buf__unsafe_align;
  *__t1711t=pos;
}

int alloc__t731t(char** __t1712t, uint64_t* __t1713t, uint16_t* __t1714t, uint16_t* __t1715t, uint64_t* __t1716t, uint64_t length, char** __t1717t, uint64_t* __t1718t, uint16_t* __t1719t, uint16_t* __t1720t, uint64_t* __t1721t) {
  char* allocator__buf__unsafe_ptr=*__t1712t;
  uint64_t allocator__buf__unsafe_size=*__t1713t;
  uint16_t allocator__buf__unsafe_offset=*__t1714t;
  uint16_t allocator__buf__unsafe_align=*__t1715t;
  uint64_t allocator__length=*__t1716t;
  int __t732t=0;
  uint64_t __t733t=0;
  uint64_t __t734t__=0;
  uint64_t pos=0;
  uint64_t __t735t__=0;
  uint64_t prev_length=0;
  uint64_t __t736t__=0;
  char __t737t__=0;
  uint64_t __t738t=0;
  uint64_t __t739t__=0;
  uint64_t __t740t=0;
  uint64_t __t741t__=0;
  uint64_t __t742t__=0;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__unsafe_size=0;
  uint16_t __t743t__unsafe_offset=0;
  uint16_t __t743t__unsafe_align=0;
  char* __t744t__buf__unsafe_ptr=0;
  uint64_t __t744t__buf__unsafe_size=0;
  uint16_t __t744t__buf__unsafe_offset=0;
  uint16_t __t744t__buf__unsafe_align=0;
  uint64_t __t744t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t733t=0;
  add__t175t(allocator__length,__t733t,&__t734t__);
  pos=__t734t__;
  add__t175t(allocator__length,length,&__t735t__);
  prev_length=__t735t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t736t__);
  gt__t276t(prev_length,__t736t__,&__t737t__);
  if(__t737t__){
  __t738t=2;
  __t_errcode=div__t225t(prev_length,__t738t,&__t739t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t740t=1;
  add__t175t(__t739t__,__t740t,&__t741t__);
  add__t175t(prev_length,__t741t__,&__t742t__);
  __t_errcode=resize__t602t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t742t__,&__t743t__unsafe_ptr,&__t743t__unsafe_size,&__t743t__unsafe_offset,&__t743t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t743t__unsafe_ptr;
  allocator__buf__unsafe_size=__t743t__unsafe_size;
  allocator__buf__unsafe_offset=__t743t__unsafe_offset;
  allocator__buf__unsafe_align=__t743t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t744t__buf__unsafe_ptr,&__t744t__buf__unsafe_size,&__t744t__buf__unsafe_offset,&__t744t__buf__unsafe_align,&__t744t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1712t=allocator__buf__unsafe_ptr;
  *__t1713t=allocator__buf__unsafe_size;
  *__t1714t=allocator__buf__unsafe_offset;
  *__t1715t=allocator__buf__unsafe_align;
  *__t1716t=allocator__length;
  *__t1717t=__t744t__buf__unsafe_ptr;
  *__t1718t=__t744t__buf__unsafe_size;
  *__t1719t=__t744t__buf__unsafe_offset;
  *__t1720t=__t744t__buf__unsafe_align;
  *__t1721t=__t744t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t903t(char** __t1722t, uint64_t* __t1723t, uint16_t* __t1724t, uint16_t* __t1725t, uint64_t* __t1726t, const char* _other, char** __t1727t, uint64_t* __t1728t, uint64_t* __t1729t, char* __t1730t) {
  char* CHARS__buf__unsafe_ptr=*__t1722t;
  uint64_t CHARS__buf__unsafe_size=*__t1723t;
  uint16_t CHARS__buf__unsafe_offset=*__t1724t;
  uint16_t CHARS__buf__unsafe_align=*__t1725t;
  uint64_t CHARS__length=*__t1726t;
  char* __t904t__unsafe_ptr=0;
  uint64_t __t904t__dat__pos=0;
  uint64_t __t904t__dat__length=0;
  char __t904t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t905t__=0;
  char* __t906t__buf__unsafe_ptr=0;
  uint64_t __t906t__buf__unsafe_size=0;
  uint16_t __t906t__buf__unsafe_offset=0;
  uint16_t __t906t__buf__unsafe_align=0;
  uint64_t __t906t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t907t=0;
  char* __t908t__unsafe_ptr=0;
  uint64_t __t908t__dat__pos=0;
  uint64_t __t908t__dat__length=0;
  char __t908t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_other,&__t904t__unsafe_ptr,&__t904t__dat__pos,&__t904t__dat__length,&__t904t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t904t__unsafe_ptr;
  other__dat__pos=__t904t__dat__pos;
  other__dat__length=__t904t__dat__length;
  other__dat__first=__t904t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t905t__);
  __t_errcode=alloc__t731t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__length,__t905t__,&__t906t__buf__unsafe_ptr,&__t906t__buf__unsafe_size,&__t906t__buf__unsafe_offset,&__t906t__buf__unsafe_align,&__t906t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t906t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t906t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t906t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t906t__buf__unsafe_align;
  surface__pos=__t906t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t907t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t907t,other__dat__length,other__dat__first,&__t908t__unsafe_ptr,&__t908t__dat__pos,&__t908t__dat__length,&__t908t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1722t=CHARS__buf__unsafe_ptr;
  *__t1723t=CHARS__buf__unsafe_size;
  *__t1724t=CHARS__buf__unsafe_offset;
  *__t1725t=CHARS__buf__unsafe_align;
  *__t1726t=CHARS__length;
  *__t1727t=__t908t__unsafe_ptr;
  *__t1728t=__t908t__dat__pos;
  *__t1729t=__t908t__dat__length;
  *__t1730t=__t908t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1612t(char** __t1731t, uint64_t* __t1732t, uint64_t* __t1733t, char* __t1734t, char** __t1735t, uint64_t* __t1736t, uint64_t* __t1737t, char* __t1738t) {
  char* __t1615t__unsafe_ptr=0;
  uint64_t __t1615t__unsafe_size=0;
  uint16_t __t1615t__unsafe_offset=0;
  uint16_t __t1615t__unsafe_align=0;
  char* __t1616t__unsafe_ptr=0;
  uint64_t __t1616t__unsafe_size=0;
  uint16_t __t1616t__unsafe_offset=0;
  uint16_t __t1616t__unsafe_align=0;
  char* __t1617t__buf__unsafe_ptr=0;
  uint64_t __t1617t__buf__unsafe_size=0;
  uint16_t __t1617t__buf__unsafe_offset=0;
  uint16_t __t1617t__buf__unsafe_align=0;
  uint64_t __t1617t__length=0;
  char __t1618t____t673t____t534t__=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1619t=0;
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__unsafe_size=0;
  uint16_t __t1620t__unsafe_offset=0;
  uint16_t __t1620t__unsafe_align=0;
  char* __t1622t__unsafe_ptr=0;
  uint64_t __t1622t__dat__pos=0;
  uint64_t __t1622t__dat__length=0;
  char __t1622t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1624t__unsafe_ptr=0;
  uint64_t __t1624t__dat__pos=0;
  uint64_t __t1624t__dat__length=0;
  char __t1624t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1613t(&__t1615t__unsafe_ptr,&__t1615t__unsafe_size,&__t1615t__unsafe_offset,&__t1615t__unsafe_align);
  __t1616t__unsafe_ptr=__t1615t__unsafe_ptr;
  __t1616t__unsafe_size=__t1615t__unsafe_size;
  __t1616t__unsafe_offset=__t1615t__unsafe_offset;
  __t1616t__unsafe_align=__t1615t__unsafe_align;
  __t_errcode=list__t670t(&__t1616t__unsafe_ptr,&__t1616t__unsafe_size,&__t1616t__unsafe_offset,&__t1616t__unsafe_align,&__t1617t__buf__unsafe_ptr,&__t1617t__buf__unsafe_size,&__t1617t__buf__unsafe_offset,&__t1617t__buf__unsafe_align,&__t1617t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1619t=100;
  __t_errcode=resize__t602t(&__t1617t__buf__unsafe_ptr,&__t1617t__buf__unsafe_size,&__t1617t__buf__unsafe_offset,&__t1617t__buf__unsafe_align,__t1619t,&__t1620t__unsafe_ptr,&__t1620t__unsafe_size,&__t1620t__unsafe_offset,&__t1620t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t903t(&__t1617t__buf__unsafe_ptr,&__t1617t__buf__unsafe_size,&__t1617t__buf__unsafe_offset,&__t1617t__buf__unsafe_align,&__t1617t__length,__t1621t,&__t1622t__unsafe_ptr,&__t1622t__dat__pos,&__t1622t__dat__length,&__t1622t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1622t__dat__pos;
  s1__dat__length=__t1622t__dat__length;
  s1__dat__first=__t1622t__dat__first;
  __t_errcode=copy__t903t(&__t1617t__buf__unsafe_ptr,&__t1617t__buf__unsafe_size,&__t1617t__buf__unsafe_offset,&__t1617t__buf__unsafe_align,&__t1617t__length,__t1623t,&__t1624t__unsafe_ptr,&__t1624t__dat__pos,&__t1624t__dat__length,&__t1624t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1624t__dat__pos;
  s2__dat__length=__t1624t__dat__length;
  s2__dat__first=__t1624t__dat__first;
  s1__unsafe_ptr=__t1617t__buf__unsafe_ptr;
  s2__unsafe_ptr=__t1617t__buf__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(s1__unsafe_ptr,&__t1618t____t673t____t534t__);
  if(__t1618t____t673t____t534t__){
  free__t503t(&s1__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1731t=s1__unsafe_ptr;
  *__t1732t=s1__dat__pos;
  *__t1733t=s1__dat__length;
  *__t1734t=s1__dat__first;
  *__t1735t=s2__unsafe_ptr;
  *__t1736t=s2__dat__pos;
  *__t1737t=s2__dat__length;
  *__t1738t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1625t() {
  char* __t1627t__s1__unsafe_ptr=0;
  uint64_t __t1627t__s1__dat__pos=0;
  uint64_t __t1627t__s1__dat__length=0;
  char __t1627t__s1__dat__first=0;
  char* __t1627t__s2__unsafe_ptr=0;
  uint64_t __t1627t__s2__dat__pos=0;
  uint64_t __t1627t__s2__dat__length=0;
  char __t1627t__s2__dat__first=0;
  char __t1628t____t1618t____t673t____t534t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1612t(&__t1627t__s1__unsafe_ptr,&__t1627t__s1__dat__pos,&__t1627t__s1__dat__length,&__t1627t__s1__dat__first,&__t1627t__s2__unsafe_ptr,&__t1627t__s2__dat__pos,&__t1627t__s2__dat__length,&__t1627t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1627t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1627t__s1__dat__pos;
  s__s1__dat__length=__t1627t__s1__dat__length;
  s__s1__dat__first=__t1627t__s1__dat__first;
  s__s2__unsafe_ptr=__t1627t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1627t__s2__dat__pos;
  s__s2__dat__length=__t1627t__s2__dat__length;
  s__s2__dat__first=__t1627t__s2__dat__first;
  print__t987t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t987t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1627t__s1__unsafe_ptr,&__t1628t____t1618t____t673t____t534t__);
  if(__t1628t____t1618t____t673t____t534t__){
  free__t503t(&__t1627t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1625t();return 0;}