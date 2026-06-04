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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1614t(char** __t1640t, uint64_t* __t1641t, uint16_t* __t1642t, uint16_t* __t1643t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1640t=unsafe_ptr;
  *__t1641t=unsafe_size;
  *__t1642t=unsafe_offset;
  *__t1643t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1644t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1644t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1645t) {
  char* allocated=*__t1645t;
  if(allocated){
  free(allocated);
  }
  *__t1645t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1646t) {
  int value=0;
  *__t1646t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1647t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1647t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1648t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1648t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1649t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1649t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1650t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1650t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1651t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1651t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1652t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1652t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1653t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1653t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1654t) {
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
  *__t1654t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1655t, uint64_t* __t1656t, uint16_t* __t1657t, uint16_t* __t1658t, uint64_t size, char** __t1659t, uint64_t* __t1660t, uint16_t* __t1661t, uint16_t* __t1662t) {
  char* buffer__unsafe_ptr=*__t1655t;
  uint64_t buffer__unsafe_size=*__t1656t;
  uint16_t buffer__unsafe_offset=*__t1657t;
  uint16_t buffer__unsafe_align=*__t1658t;
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
  *__t1655t=buffer__unsafe_ptr;
  *__t1656t=buffer__unsafe_size;
  *__t1657t=buffer__unsafe_offset;
  *__t1658t=buffer__unsafe_align;
  *__t1659t=buffer__unsafe_ptr;
  *__t1660t=buffer__unsafe_size;
  *__t1661t=buffer__unsafe_offset;
  *__t1662t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1663t) {
  goto __t_return;
  __t_return:
  *__t1663t=buffer__unsafe_size;
}

int list__t670t(char** __t1664t, uint64_t* __t1665t, uint16_t* __t1666t, uint16_t* __t1667t, char** __t1668t, uint64_t* __t1669t, uint16_t* __t1670t, uint16_t* __t1671t, uint64_t* __t1672t) {
  char* _buf__unsafe_ptr=*__t1664t;
  uint64_t _buf__unsafe_size=*__t1665t;
  uint16_t _buf__unsafe_offset=*__t1666t;
  uint16_t _buf__unsafe_align=*__t1667t;
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
  *__t1664t=_buf__unsafe_ptr;
  *__t1665t=_buf__unsafe_size;
  *__t1666t=_buf__unsafe_offset;
  *__t1667t=_buf__unsafe_align;
  *__t1668t=buf__unsafe_ptr;
  *__t1669t=buf__unsafe_size;
  *__t1670t=buf__unsafe_offset;
  *__t1671t=buf__unsafe_align;
  *__t1672t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1673t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1673t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1674t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1674t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1675t) {
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
  *__t1675t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1676t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1676t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1677t) {
  *__t1677t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1678t) {
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
  *__t1678t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1679t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1679t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1680t, uint64_t* __t1681t, uint16_t* __t1682t, uint16_t* __t1683t, uint64_t size, char** __t1684t, uint64_t* __t1685t, uint16_t* __t1686t, uint16_t* __t1687t) {
  char* buffer__unsafe_ptr=*__t1680t;
  uint64_t buffer__unsafe_size=*__t1681t;
  uint16_t buffer__unsafe_offset=*__t1682t;
  uint16_t buffer__unsafe_align=*__t1683t;
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
  *__t1680t=buffer__unsafe_ptr;
  *__t1681t=buffer__unsafe_size;
  *__t1682t=buffer__unsafe_offset;
  *__t1683t=buffer__unsafe_align;
  *__t1684t=buffer__unsafe_ptr;
  *__t1685t=buffer__unsafe_size;
  *__t1686t=buffer__unsafe_offset;
  *__t1687t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1688t, uint64_t* __t1689t, uint16_t* __t1690t, uint16_t* __t1691t, uint64_t pos, char** __t1692t, uint64_t* __t1693t, uint16_t* __t1694t, uint16_t* __t1695t, uint64_t* __t1696t) {
  char* buf__unsafe_ptr=*__t1688t;
  uint64_t buf__unsafe_size=*__t1689t;
  uint16_t buf__unsafe_offset=*__t1690t;
  uint16_t buf__unsafe_align=*__t1691t;
  goto __t_return;
  __t_return:
  *__t1688t=buf__unsafe_ptr;
  *__t1689t=buf__unsafe_size;
  *__t1690t=buf__unsafe_offset;
  *__t1691t=buf__unsafe_align;
  *__t1692t=buf__unsafe_ptr;
  *__t1693t=buf__unsafe_size;
  *__t1694t=buf__unsafe_offset;
  *__t1695t=buf__unsafe_align;
  *__t1696t=pos;
}

int alloc__t745t(char** __t1697t, uint64_t* __t1698t, uint16_t* __t1699t, uint16_t* __t1700t, uint64_t* __t1701t, char** __t1702t, uint64_t* __t1703t, uint16_t* __t1704t, uint16_t* __t1705t, uint64_t* __t1706t) {
  char* allocator__buf__unsafe_ptr=*__t1697t;
  uint64_t allocator__buf__unsafe_size=*__t1698t;
  uint16_t allocator__buf__unsafe_offset=*__t1699t;
  uint16_t allocator__buf__unsafe_align=*__t1700t;
  uint64_t allocator__length=*__t1701t;
  int __t746t=0;
  uint64_t __t747t=0;
  uint64_t length=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t pos=0;
  uint64_t __t750t__=0;
  uint64_t prev_length=0;
  uint64_t __t751t__=0;
  char __t752t__=0;
  uint64_t __t753t=0;
  uint64_t __t754t__=0;
  uint64_t __t755t=0;
  uint64_t __t756t__=0;
  uint64_t __t757t__=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__unsafe_size=0;
  uint16_t __t758t__unsafe_offset=0;
  uint16_t __t758t__unsafe_align=0;
  char* __t759t__buf__unsafe_ptr=0;
  uint64_t __t759t__buf__unsafe_size=0;
  uint16_t __t759t__buf__unsafe_offset=0;
  uint16_t __t759t__buf__unsafe_align=0;
  uint64_t __t759t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t747t=1;
  length=__t747t;
  __t748t=0;
  add__t175t(allocator__length,__t748t,&__t749t__);
  pos=__t749t__;
  add__t175t(allocator__length,length,&__t750t__);
  prev_length=__t750t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t751t__);
  gt__t276t(prev_length,__t751t__,&__t752t__);
  if(__t752t__){
  __t753t=2;
  __t_errcode=div__t225t(prev_length,__t753t,&__t754t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t755t=1;
  add__t175t(__t754t__,__t755t,&__t756t__);
  add__t175t(prev_length,__t756t__,&__t757t__);
  __t_errcode=resize__t602t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t757t__,&__t758t__unsafe_ptr,&__t758t__unsafe_size,&__t758t__unsafe_offset,&__t758t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t758t__unsafe_ptr;
  allocator__buf__unsafe_size=__t758t__unsafe_size;
  allocator__buf__unsafe_offset=__t758t__unsafe_offset;
  allocator__buf__unsafe_align=__t758t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t759t__buf__unsafe_ptr,&__t759t__buf__unsafe_size,&__t759t__buf__unsafe_offset,&__t759t__buf__unsafe_align,&__t759t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1697t=allocator__buf__unsafe_ptr;
  *__t1698t=allocator__buf__unsafe_size;
  *__t1699t=allocator__buf__unsafe_offset;
  *__t1700t=allocator__buf__unsafe_align;
  *__t1701t=allocator__length;
  *__t1702t=__t759t__buf__unsafe_ptr;
  *__t1703t=__t759t__buf__unsafe_size;
  *__t1704t=__t759t__buf__unsafe_offset;
  *__t1705t=__t759t__buf__unsafe_align;
  *__t1706t=__t759t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1707t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1707t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1708t, uint64_t* __t1709t, uint16_t* __t1710t, uint16_t* __t1711t, uint64_t i, char** __t1712t) {
  char* buffer__unsafe_ptr=*__t1708t;
  uint64_t buffer__unsafe_size=*__t1709t;
  uint16_t buffer__unsafe_offset=*__t1710t;
  uint16_t buffer__unsafe_align=*__t1711t;
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
  *__t1708t=buffer__unsafe_ptr;
  *__t1709t=buffer__unsafe_size;
  *__t1710t=buffer__unsafe_offset;
  *__t1711t=buffer__unsafe_align;
  *__t1712t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t760t(char** __t1713t, uint64_t* __t1714t, uint16_t* __t1715t, uint16_t* __t1716t, uint64_t surface__pos, char** __t1717t) {
  char* surface__buf__unsafe_ptr=*__t1713t;
  uint64_t surface__buf__unsafe_size=*__t1714t;
  uint16_t surface__buf__unsafe_offset=*__t1715t;
  uint16_t surface__buf__unsafe_align=*__t1716t;
  char* __t761t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t633t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t761t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1713t=surface__buf__unsafe_ptr;
  *__t1714t=surface__buf__unsafe_size;
  *__t1715t=surface__buf__unsafe_offset;
  *__t1716t=surface__buf__unsafe_align;
  *__t1717t=__t761t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t683t(char** __t1718t, uint64_t* __t1719t, uint16_t* __t1720t, uint16_t* __t1721t, uint64_t* __t1722t, uint64_t pos, char** __t1723t) {
  char* self__buf__unsafe_ptr=*__t1718t;
  uint64_t self__buf__unsafe_size=*__t1719t;
  uint16_t self__buf__unsafe_offset=*__t1720t;
  uint16_t self__buf__unsafe_align=*__t1721t;
  uint64_t self__length=*__t1722t;
  char* __t684t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t633t(&self__buf__unsafe_ptr,&self__buf__unsafe_size,&self__buf__unsafe_offset,&self__buf__unsafe_align,pos,&__t684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1718t=self__buf__unsafe_ptr;
  *__t1719t=self__buf__unsafe_size;
  *__t1720t=self__buf__unsafe_offset;
  *__t1721t=self__buf__unsafe_align;
  *__t1722t=self__length;
  *__t1723t=__t684t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1724t) {
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
  *__t1724t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t679t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__length, uint64_t pos, char** __t1725t) {
  char* __t680t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t640t(self__buf__unsafe_ptr,self__buf__unsafe_size,self__buf__unsafe_offset,self__buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1725t=__t680t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1612t() {
  char* __t1616t__unsafe_ptr=0;
  uint64_t __t1616t__unsafe_size=0;
  uint16_t __t1616t__unsafe_offset=0;
  uint16_t __t1616t__unsafe_align=0;
  char* __t1617t__unsafe_ptr=0;
  uint64_t __t1617t__unsafe_size=0;
  uint16_t __t1617t__unsafe_offset=0;
  uint16_t __t1617t__unsafe_align=0;
  char* __t1618t__buf__unsafe_ptr=0;
  uint64_t __t1618t__buf__unsafe_size=0;
  uint16_t __t1618t__buf__unsafe_offset=0;
  uint16_t __t1618t__buf__unsafe_align=0;
  uint64_t __t1618t__length=0;
  char __t1619t____t673t____t534t__=0;
  char* li__buf__unsafe_ptr=0;
  uint64_t li__buf__unsafe_size=0;
  uint16_t li__buf__unsafe_offset=0;
  uint16_t li__buf__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1620t__buf__unsafe_ptr=0;
  uint64_t __t1620t__buf__unsafe_size=0;
  uint16_t __t1620t__buf__unsafe_offset=0;
  uint16_t __t1620t__buf__unsafe_align=0;
  uint64_t __t1620t__pos=0;
  char* __t1621t__=0;
  double __t1622t=0;
  char* __t1623t__buf__unsafe_ptr=0;
  uint64_t __t1623t__buf__unsafe_size=0;
  uint16_t __t1623t__buf__unsafe_offset=0;
  uint16_t __t1623t__buf__unsafe_align=0;
  uint64_t __t1623t__pos=0;
  char* __t1624t__=0;
  double __t1625t=0;
  char* __t1626t__buf__unsafe_ptr=0;
  uint64_t __t1626t__buf__unsafe_size=0;
  uint16_t __t1626t__buf__unsafe_offset=0;
  uint16_t __t1626t__buf__unsafe_align=0;
  uint64_t __t1626t__pos=0;
  char* __t1627t__=0;
  double __t1628t=0;
  uint64_t __t1629t=0;
  char* __t1630t__=0;
  double __t1631t=0;
  uint64_t __t1632t=0;
  char* __t1633t__=0;
  double __t1634t__value=0;
  uint64_t __t1636t=0;
  char* __t1637t__=0;
  double __t1638t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1614t(&__t1616t__unsafe_ptr,&__t1616t__unsafe_size,&__t1616t__unsafe_offset,&__t1616t__unsafe_align);
  __t1617t__unsafe_ptr=__t1616t__unsafe_ptr;
  __t1617t__unsafe_size=__t1616t__unsafe_size;
  __t1617t__unsafe_offset=__t1616t__unsafe_offset;
  __t1617t__unsafe_align=__t1616t__unsafe_align;
  __t_errcode=list__t670t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,&__t1618t__buf__unsafe_ptr,&__t1618t__buf__unsafe_size,&__t1618t__buf__unsafe_offset,&__t1618t__buf__unsafe_align,&__t1618t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=alloc__t745t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,&__t1617t__unsafe_size,&__t1620t__buf__unsafe_ptr,&__t1620t__buf__unsafe_size,&__t1620t__buf__unsafe_offset,&__t1620t__buf__unsafe_align,&__t1620t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,__t1620t__pos,&__t1621t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1622t=0.1;
  if(!__t1621t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1621t__,&__t1622t,8);
  __t_errcode=alloc__t745t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,&__t1617t__unsafe_size,&__t1623t__buf__unsafe_ptr,&__t1623t__buf__unsafe_size,&__t1623t__buf__unsafe_offset,&__t1623t__buf__unsafe_align,&__t1623t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,__t1623t__pos,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1625t=0.1;
  if(!__t1624t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1624t__,&__t1625t,8);
  __t_errcode=alloc__t745t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,&__t1617t__unsafe_size,&__t1626t__buf__unsafe_ptr,&__t1626t__buf__unsafe_size,&__t1626t__buf__unsafe_offset,&__t1626t__buf__unsafe_align,&__t1626t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,__t1626t__pos,&__t1627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1628t=0.1;
  if(!__t1627t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1627t__,&__t1628t,8);
  __t1629t=1;
  __t_errcode=mutget__t683t(&__t1617t__unsafe_ptr,&__t1617t__unsafe_size,&__t1617t__unsafe_offset,&__t1617t__unsafe_align,&__t1617t__unsafe_size,__t1629t,&__t1630t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1631t=0.2;
  if(!__t1630t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1630t__,&__t1631t,8);
  __t1632t=0;
  __t_errcode=get__t679t(__t1617t__unsafe_ptr,__t1617t__unsafe_size,__t1617t__unsafe_offset,__t1617t__unsafe_align,__t1617t__unsafe_size,__t1632t,&__t1633t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1633t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1634t__value,__t1633t__,8);
  print__t385t(__t1634t__value);
  __t1636t=1;
  __t_errcode=get__t679t(__t1617t__unsafe_ptr,__t1617t__unsafe_size,__t1617t__unsafe_offset,__t1617t__unsafe_align,__t1617t__unsafe_size,__t1636t,&__t1637t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1637t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1638t__value,__t1637t__,8);
  print__t385t(__t1638t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1618t__buf__unsafe_ptr,&__t1619t____t673t____t534t__);
  if(__t1619t____t673t____t534t__){
  free__t503t(&__t1618t__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1612t();return 0;}