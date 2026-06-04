#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t1620t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1642t(char** __t1689t, uint64_t* __t1690t, uint16_t* __t1691t, uint16_t* __t1692t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1689t=unsafe_ptr;
  *__t1690t=unsafe_size;
  *__t1691t=unsafe_offset;
  *__t1692t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1693t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1693t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1694t) {
  char* allocated=*__t1694t;
  if(allocated){
  free(allocated);
  }
  *__t1694t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1695t) {
  int value=0;
  *__t1695t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1696t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1696t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1697t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1697t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1698t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1698t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1699t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1699t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1700t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1700t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1701t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1701t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1702t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1702t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1703t) {
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
  *__t1703t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1704t, uint64_t* __t1705t, uint16_t* __t1706t, uint16_t* __t1707t, uint64_t size, char** __t1708t, uint64_t* __t1709t, uint16_t* __t1710t, uint16_t* __t1711t) {
  char* buffer__unsafe_ptr=*__t1704t;
  uint64_t buffer__unsafe_size=*__t1705t;
  uint16_t buffer__unsafe_offset=*__t1706t;
  uint16_t buffer__unsafe_align=*__t1707t;
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
  *__t1704t=buffer__unsafe_ptr;
  *__t1705t=buffer__unsafe_size;
  *__t1706t=buffer__unsafe_offset;
  *__t1707t=buffer__unsafe_align;
  *__t1708t=buffer__unsafe_ptr;
  *__t1709t=buffer__unsafe_size;
  *__t1710t=buffer__unsafe_offset;
  *__t1711t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1712t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1712t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1713t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1713t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1714t) {
  *__t1714t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1715t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1715t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1716t, uint64_t* __t1717t, uint16_t* __t1718t, uint16_t* __t1719t, uint64_t i, char** __t1720t) {
  char* buffer__unsafe_ptr=*__t1716t;
  uint64_t buffer__unsafe_size=*__t1717t;
  uint16_t buffer__unsafe_offset=*__t1718t;
  uint16_t buffer__unsafe_align=*__t1719t;
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
  *__t1716t=buffer__unsafe_ptr;
  *__t1717t=buffer__unsafe_size;
  *__t1718t=buffer__unsafe_offset;
  *__t1719t=buffer__unsafe_align;
  *__t1720t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1721t) {
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
  *__t1721t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1722t) {
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
  *__t1722t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1723t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1723t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1724t, uint64_t* __t1725t, uint16_t* __t1726t, uint16_t* __t1727t, uint64_t size, char** __t1728t, uint64_t* __t1729t, uint16_t* __t1730t, uint16_t* __t1731t) {
  char* buffer__unsafe_ptr=*__t1724t;
  uint64_t buffer__unsafe_size=*__t1725t;
  uint16_t buffer__unsafe_offset=*__t1726t;
  uint16_t buffer__unsafe_align=*__t1727t;
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
  *__t1724t=buffer__unsafe_ptr;
  *__t1725t=buffer__unsafe_size;
  *__t1726t=buffer__unsafe_offset;
  *__t1727t=buffer__unsafe_align;
  *__t1728t=buffer__unsafe_ptr;
  *__t1729t=buffer__unsafe_size;
  *__t1730t=buffer__unsafe_offset;
  *__t1731t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1732t) {
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
  *__t1732t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t623t(char** __t1733t, uint64_t* __t1734t, uint16_t* __t1735t, uint16_t* __t1736t, char** __t1737t) {
  char* buffer__unsafe_ptr=*__t1733t;
  uint64_t buffer__unsafe_size=*__t1734t;
  uint16_t buffer__unsafe_offset=*__t1735t;
  uint16_t buffer__unsafe_align=*__t1736t;
  uint64_t __t624t=0;
  char __t625t__=0;
  uint64_t __t626t=0;
  uint64_t __t627t__=0;
  uint64_t __t628t__=0;
  uint64_t __t629t__=0;
  uint64_t __t630t__=0;
  uint64_t __t631t__=0;
  char* __t632t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t624t=0;
  eq__t120t(__t624t,buffer__unsafe_size,&__t625t__);
  if(__t625t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t626t=1;
  nat__t507t(buffer__unsafe_offset,&__t627t__);
  add__t175t(__t626t,__t627t__,&__t628t__);
  __t_errcode=sub__t352t(buffer__unsafe_size,__t628t__,&__t629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t630t__);
  mul__t199t(__t629t__,__t630t__,&__t631t__);
  add__t505t(buffer__unsafe_ptr,__t631t__,&__t632t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1733t=buffer__unsafe_ptr;
  *__t1734t=buffer__unsafe_size;
  *__t1735t=buffer__unsafe_offset;
  *__t1736t=buffer__unsafe_align;
  *__t1737t=__t632t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1661t(char** __t1738t, uint64_t* __t1739t, uint16_t* __t1740t, uint16_t* __t1741t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1738t=unsafe_ptr;
  *__t1739t=unsafe_size;
  *__t1740t=unsafe_offset;
  *__t1741t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1614t(char* f) {
  char* __t1616t=0;
  char* __t1618t=0;
  double __t1619t__=0;
  char* __t1623t=0;
  char* __t1625t=0;
  double __t1626t__=0;
  char* __t1629t=0;
  char* __t1631t=0;
  double __t1632t__=0;
  char* __t1635t=0;
  char* __t1637t=0;
  double __t1638t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1616t=f+0;
  if(!__t1616t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1618t=__t1616t+0;
  if(!__t1618t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1619t__,__t1618t,8);
  print__t383t(__t1619t__,__t1620t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1623t=f+0;
  if(!__t1623t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1625t=__t1623t+8;
  if(!__t1625t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1626t__,__t1625t,8);
  print__t383t(__t1626t__,__t1620t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1629t=f+16;
  if(!__t1629t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1631t=__t1629t+0;
  if(!__t1631t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1632t__,__t1631t,8);
  print__t383t(__t1632t__,__t1620t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1635t=f+16;
  if(!__t1635t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1637t=__t1635t+8;
  if(!__t1637t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1638t__,__t1637t,8);
  print__t385t(__t1638t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t1680t(char** __t1742t, uint64_t* __t1743t, uint16_t* __t1744t, uint16_t* __t1745t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1742t=unsafe_ptr;
  *__t1743t=unsafe_size;
  *__t1744t=unsafe_offset;
  *__t1745t=unsafe_align;
}

static inline __attribute__((always_inline)) int main__t1640t() {
  char* __t1644t__unsafe_ptr=0;
  uint64_t __t1644t__unsafe_size=0;
  uint16_t __t1644t__unsafe_offset=0;
  uint16_t __t1644t__unsafe_align=0;
  uint64_t __t1645t=0;
  char* __t1646t__unsafe_ptr=0;
  uint64_t __t1646t__unsafe_size=0;
  uint16_t __t1646t__unsafe_offset=0;
  uint16_t __t1646t__unsafe_align=0;
  char __t1647t____t534t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1648t=0;
  char* __t1649t__=0;
  double __t1650t=0;
  uint64_t __t1651t=0;
  char* __t1652t__=0;
  double __t1653t__value=0;
  uint64_t __t1655t=0;
  char* __t1656t__=0;
  char* f0=0;
  uint64_t __t1657t=0;
  char* __t1658t__unsafe_ptr=0;
  uint64_t __t1658t__unsafe_size=0;
  uint16_t __t1658t__unsafe_offset=0;
  uint16_t __t1658t__unsafe_align=0;
  char* __t1659t__=0;
  double __t1660t__value=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__unsafe_size=0;
  uint16_t __t1663t__unsafe_offset=0;
  uint16_t __t1663t__unsafe_align=0;
  char* __t1664t__unsafe_ptr=0;
  uint64_t __t1664t__unsafe_size=0;
  uint16_t __t1664t__unsafe_offset=0;
  uint16_t __t1664t__unsafe_align=0;
  uint64_t __t1665t=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__unsafe_size=0;
  uint16_t __t1666t__unsafe_offset=0;
  uint16_t __t1666t__unsafe_align=0;
  char __t1667t____t534t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1668t=0;
  char* __t1669t__=0;
  double __t1670t=0;
  double __t1671t=0;
  double __t1672t=0;
  double __t1673t=0;
  uint64_t __t1674t=0;
  char* __t1675t__=0;
  double __t1677t=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__unsafe_size=0;
  uint16_t __t1682t__unsafe_offset=0;
  uint16_t __t1682t__unsafe_align=0;
  uint64_t __t1683t=0;
  char* __t1684t__unsafe_ptr=0;
  uint64_t __t1684t__unsafe_size=0;
  uint16_t __t1684t__unsafe_offset=0;
  uint16_t __t1684t__unsafe_align=0;
  char __t1685t____t534t__=0;
  char* __t1686t__=0;
  char* n=0;
  double __t1687t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1642t(&__t1644t__unsafe_ptr,&__t1644t__unsafe_size,&__t1644t__unsafe_offset,&__t1644t__unsafe_align);
  __t1645t=1;
  __t_errcode=alloc__t532t(&__t1644t__unsafe_ptr,&__t1644t__unsafe_size,&__t1644t__unsafe_offset,&__t1644t__unsafe_align,__t1645t,&__t1646t__unsafe_ptr,&__t1646t__unsafe_size,&__t1646t__unsafe_offset,&__t1646t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1648t=0;
  __t_errcode=mutget__t633t(&__t1646t__unsafe_ptr,&__t1646t__unsafe_size,&__t1646t__unsafe_offset,&__t1646t__unsafe_align,__t1648t,&__t1649t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1650t=1.0;
  if(!__t1649t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1649t__,&__t1650t,8);
  __t1651t=0;
  __t_errcode=get__t640t(__t1646t__unsafe_ptr,__t1646t__unsafe_size,__t1646t__unsafe_offset,__t1646t__unsafe_align,__t1651t,&__t1652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1652t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1653t__value,__t1652t__,8);
  print__t385t(__t1653t__value);
  __t1655t=0;
  __t_errcode=mutget__t633t(&__t1646t__unsafe_ptr,&__t1646t__unsafe_size,&__t1646t__unsafe_offset,&__t1646t__unsafe_align,__t1655t,&__t1656t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1656t__;
  __t1657t=2;
  __t_errcode=resize__t602t(&__t1646t__unsafe_ptr,&__t1646t__unsafe_size,&__t1646t__unsafe_offset,&__t1646t__unsafe_align,__t1657t,&__t1658t__unsafe_ptr,&__t1658t__unsafe_size,&__t1658t__unsafe_offset,&__t1658t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t623t(&__t1646t__unsafe_ptr,&__t1646t__unsafe_size,&__t1646t__unsafe_offset,&__t1646t__unsafe_align,&__t1659t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1660t__value,f0,8);
  if(!__t1659t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1659t__,&__t1660t__value,8);
  Field____t_buffer____buffer__t1661t(&__t1663t__unsafe_ptr,&__t1663t__unsafe_size,&__t1663t__unsafe_offset,&__t1663t__unsafe_align);
  __t1664t__unsafe_ptr=__t1663t__unsafe_ptr;
  __t1664t__unsafe_size=__t1663t__unsafe_size;
  __t1664t__unsafe_offset=__t1663t__unsafe_offset;
  __t1664t__unsafe_align=__t1663t__unsafe_align;
  __t1665t=1;
  __t_errcode=alloc__t532t(&__t1664t__unsafe_ptr,&__t1664t__unsafe_size,&__t1664t__unsafe_offset,&__t1664t__unsafe_align,__t1665t,&__t1666t__unsafe_ptr,&__t1666t__unsafe_size,&__t1666t__unsafe_offset,&__t1666t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1666t__unsafe_ptr;
  p__unsafe_size=__t1666t__unsafe_size;
  p__unsafe_offset=__t1666t__unsafe_offset;
  p__unsafe_align=__t1666t__unsafe_align;
  __t1668t=0;
  __t_errcode=mutget__t633t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1668t,&__t1669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1670t=1.0;
  __t1671t=2.0;
  __t1672t=3.0;
  __t1673t=4.0;
  if(!__t1669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1669t__,&__t1670t,8);
  memcpy(__t1669t__+8,&__t1671t,8);
  memcpy(__t1669t__+16,&__t1672t,8);
  memcpy(__t1669t__+24,&__t1673t,8);
  __t1674t=0;
  __t_errcode=get__t640t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1674t,&__t1675t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1614t(__t1675t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1677t=1.0;
  float____buffer__t1680t(&__t1682t__unsafe_ptr,&__t1682t__unsafe_size,&__t1682t__unsafe_offset,&__t1682t__unsafe_align);
  __t1683t=1;
  __t_errcode=alloc__t532t(&__t1682t__unsafe_ptr,&__t1682t__unsafe_size,&__t1682t__unsafe_offset,&__t1682t__unsafe_align,__t1683t,&__t1684t__unsafe_ptr,&__t1684t__unsafe_size,&__t1684t__unsafe_offset,&__t1684t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1682t__unsafe_ptr,&__t1677t,8);
  __t_errcode=mutlast__t623t(&__t1682t__unsafe_ptr,&__t1682t__unsafe_size,&__t1682t__unsafe_offset,&__t1682t__unsafe_align,&__t1686t__);
  if(__t_errcode){
  goto __t_failure;
  }
  n=__t1686t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1687t____0,n,8);
  print__t385t(__t1687t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1684t__unsafe_ptr,&__t1685t____t534t__);
  if(__t1685t____t534t__){
  free__t503t(&__t1684t__unsafe_ptr);
  }
  exists__t447t(__t1666t__unsafe_ptr,&__t1667t____t534t__);
  if(__t1667t____t534t__){
  free__t503t(&__t1666t__unsafe_ptr);
  }
  exists__t447t(__t1646t__unsafe_ptr,&__t1647t____t534t__);
  if(__t1647t____t534t__){
  free__t503t(&__t1646t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1640t();return 0;}