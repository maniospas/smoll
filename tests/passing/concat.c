#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1692t="manios";
const char* const __t1676t="hi";
const char* const __t1684t="name";
const char* const __t1680t="my";
const char* const __t1663t=" ";
const char* const __t1688t="is";
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1644t(char** __t1708t, uint64_t* __t1709t, uint16_t* __t1710t, uint16_t* __t1711t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1708t=unsafe_ptr;
  *__t1709t=unsafe_size;
  *__t1710t=unsafe_offset;
  *__t1711t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1712t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1712t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1713t) {
  char* allocated=*__t1713t;
  if(allocated){
  free(allocated);
  }
  *__t1713t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1714t) {
  int value=0;
  *__t1714t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1715t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1715t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1716t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1716t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1717t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1717t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1718t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1718t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1719t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1719t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1720t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1720t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1721t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1721t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1722t) {
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
  *__t1722t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1723t, uint64_t* __t1724t, uint16_t* __t1725t, uint16_t* __t1726t, uint64_t size, char** __t1727t, uint64_t* __t1728t, uint16_t* __t1729t, uint16_t* __t1730t) {
  char* buffer__unsafe_ptr=*__t1723t;
  uint64_t buffer__unsafe_size=*__t1724t;
  uint16_t buffer__unsafe_offset=*__t1725t;
  uint16_t buffer__unsafe_align=*__t1726t;
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
  *__t1723t=buffer__unsafe_ptr;
  *__t1724t=buffer__unsafe_size;
  *__t1725t=buffer__unsafe_offset;
  *__t1726t=buffer__unsafe_align;
  *__t1727t=buffer__unsafe_ptr;
  *__t1728t=buffer__unsafe_size;
  *__t1729t=buffer__unsafe_offset;
  *__t1730t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1731t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1731t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1732t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1732t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1733t) {
  *__t1733t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1734t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1734t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1735t, uint64_t* __t1736t, uint16_t* __t1737t, uint16_t* __t1738t, uint64_t i, char** __t1739t) {
  char* buffer__unsafe_ptr=*__t1735t;
  uint64_t buffer__unsafe_size=*__t1736t;
  uint16_t buffer__unsafe_offset=*__t1737t;
  uint16_t buffer__unsafe_align=*__t1738t;
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
  *__t1735t=buffer__unsafe_ptr;
  *__t1736t=buffer__unsafe_size;
  *__t1737t=buffer__unsafe_offset;
  *__t1738t=buffer__unsafe_align;
  *__t1739t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1740t, uint64_t* __t1741t, uint16_t* __t1742t, uint16_t* __t1743t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1740t=unsafe_ptr;
  *__t1741t=unsafe_size;
  *__t1742t=unsafe_offset;
  *__t1743t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1744t) {
  *__t1744t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1745t) {
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
  *__t1745t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1746t, uint64_t* __t1747t, uint64_t* __t1748t, char* __t1749t) {
  goto __t_return;
  __t_return:
  *__t1746t=unsafe_ptr;
  *__t1747t=dat__pos;
  *__t1748t=dat__length;
  *__t1749t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1750t, uint64_t* __t1751t, uint64_t* __t1752t, char* __t1753t) {
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
  *__t1750t=__t794t__unsafe_ptr;
  *__t1751t=__t794t__dat__pos;
  *__t1752t=__t794t__dat__length;
  *__t1753t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1754t, uint64_t* __t1755t, uint64_t* __t1756t, char* __t1757t) {
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
  *__t1754t=__t827t__unsafe_ptr;
  *__t1755t=__t827t__dat__pos;
  *__t1756t=__t827t__dat__length;
  *__t1757t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1758t, uint64_t* __t1759t, uint64_t* __t1760t, char* __t1761t) {
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
  *__t1758t=__t853t__unsafe_ptr;
  *__t1759t=__t853t__dat__pos;
  *__t1760t=__t853t__dat__length;
  *__t1761t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1762t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1762t=z;
}

static inline __attribute__((always_inline)) int nat16__t1615t(uint64_t x, uint16_t* __t1763t) {
  uint64_t __t1616t=0;
  char __t1617t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1616t=65535;
  gt__t276t(x,__t1616t,&__t1617t__);
  if(__t1617t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1763t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1622t(uint64_t _pos, uint64_t _length, uint16_t* __t1764t, uint16_t* __t1765t) {
  uint16_t __t1623t__=0;
  uint16_t pos=0;
  uint16_t __t1624t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1615t(_pos,&__t1623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1623t__;
  __t_errcode=nat16__t1615t(_length,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1624t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1764t=pos;
  *__t1765t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1625t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1766t, uint16_t* __t1767t, uint16_t* __t1768t) {
  char* unsafe_ptr=0;
  uint16_t __t1626t__pos=0;
  uint16_t __t1626t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1622t(s__dat__pos,s__dat__length,&__t1626t__pos,&__t1626t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1626t__pos;
  dat__length=__t1626t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1766t=unsafe_ptr;
  *__t1767t=dat__pos;
  *__t1768t=dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1628t(const char* s, char** __t1769t, uint16_t* __t1770t, uint16_t* __t1771t) {
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__dat__pos=0;
  uint64_t __t1629t__dat__length=0;
  char __t1629t__dat__first=0;
  char* __t1630t__unsafe_ptr=0;
  uint16_t __t1630t__dat__pos=0;
  uint16_t __t1630t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(s,&__t1629t__unsafe_ptr,&__t1629t__dat__pos,&__t1629t__dat__length,&__t1629t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1625t(__t1629t__unsafe_ptr,__t1629t__dat__pos,__t1629t__dat__length,__t1629t__dat__first,&__t1630t__unsafe_ptr,&__t1630t__dat__pos,&__t1630t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1769t=__t1630t__unsafe_ptr;
  *__t1770t=__t1630t__dat__pos;
  *__t1771t=__t1630t__dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1647t(char** __t1772t, uint64_t* __t1773t, uint16_t* __t1774t, uint16_t* __t1775t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1772t=unsafe_ptr;
  *__t1773t=unsafe_size;
  *__t1774t=unsafe_offset;
  *__t1775t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1776t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1776t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t1777t, uint64_t* __t1778t, uint16_t* __t1779t, uint16_t* __t1780t, uint64_t _pos, char** __t1781t, uint64_t* __t1782t, uint16_t* __t1783t, uint16_t* __t1784t, uint64_t* __t1785t) {
  char* buf__unsafe_ptr=*__t1777t;
  uint64_t buf__unsafe_size=*__t1778t;
  uint16_t buf__unsafe_offset=*__t1779t;
  uint16_t buf__unsafe_align=*__t1780t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t1777t=buf__unsafe_ptr;
  *__t1778t=buf__unsafe_size;
  *__t1779t=buf__unsafe_offset;
  *__t1780t=buf__unsafe_align;
  *__t1781t=buf__unsafe_ptr;
  *__t1782t=buf__unsafe_size;
  *__t1783t=buf__unsafe_offset;
  *__t1784t=buf__unsafe_align;
  *__t1785t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t1786t, uint64_t* __t1787t, uint16_t* __t1788t, uint16_t* __t1789t, char** __t1790t, uint64_t* __t1791t, uint16_t* __t1792t, uint16_t* __t1793t, uint64_t* __t1794t) {
  char* buf__unsafe_ptr=*__t1786t;
  uint64_t buf__unsafe_size=*__t1787t;
  uint16_t buf__unsafe_offset=*__t1788t;
  uint16_t buf__unsafe_align=*__t1789t;
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
  *__t1786t=buf__unsafe_ptr;
  *__t1787t=buf__unsafe_size;
  *__t1788t=buf__unsafe_offset;
  *__t1789t=buf__unsafe_align;
  *__t1790t=__t657t__buf__unsafe_ptr;
  *__t1791t=__t657t__buf__unsafe_size;
  *__t1792t=__t657t__buf__unsafe_offset;
  *__t1793t=__t657t__buf__unsafe_align;
  *__t1794t=__t657t__pos;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1795t) {
  goto __t_return;
  __t_return:
  *__t1795t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1796t, uint64_t* __t1797t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1796t=from;
  *__t1797t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1798t, uint64_t* __t1799t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1798t=__t473t__from;
  *__t1799t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1800t, uint64_t r__to, uint64_t* __t1801t) {
  uint64_t r__from=*__t1800t;
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
  *__t1800t=r__from;
  *__t1801t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t785t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1802t, uint64_t* __t1803t, uint64_t* __t1804t, char* __t1805t) {
  char* first_pos=0;
  char first=0;
  char* __t786t__unsafe_ptr=0;
  uint64_t __t786t__dat__pos=0;
  uint64_t __t786t__dat__length=0;
  char __t786t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t783t(unsafe_ptr,pos,length,first,&__t786t__unsafe_ptr,&__t786t__dat__pos,&__t786t__dat__length,&__t786t__dat__first);
  goto __t_return;
  __t_return:
  *__t1802t=__t786t__unsafe_ptr;
  *__t1803t=__t786t__dat__pos;
  *__t1804t=__t786t__dat__length;
  *__t1805t=__t786t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1631t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1806t, uint64_t* __t1807t, uint64_t* __t1808t, char* __t1809t) {
  uint64_t __t1632t__=0;
  uint64_t __t1633t__=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__dat__pos=0;
  uint64_t __t1634t__dat__length=0;
  char __t1634t__dat__first=0;
  nat__t507t(m__dat__pos,&__t1632t__);
  nat__t507t(m__dat__length,&__t1633t__);
  str__t785t(m__unsafe_ptr,__t1632t__,__t1633t__,&__t1634t__unsafe_ptr,&__t1634t__dat__pos,&__t1634t__dat__length,&__t1634t__dat__first);
  goto __t_return;
  __t_return:
  *__t1806t=__t1634t__unsafe_ptr;
  *__t1807t=__t1634t__dat__pos;
  *__t1808t=__t1634t__dat__length;
  *__t1809t=__t1634t__dat__first;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1810t, uint64_t* __t1811t, uint64_t* __t1812t, char* __t1813t) {
  goto __t_return;
  __t_return:
  *__t1810t=other__unsafe_ptr;
  *__t1811t=other__dat__pos;
  *__t1812t=other__dat__length;
  *__t1813t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1814t) {
  goto __t_return;
  __t_return:
  *__t1814t=s__dat__length;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1815t, uint64_t* __t1816t, uint16_t* __t1817t, uint16_t* __t1818t, uint64_t pos, char** __t1819t, uint64_t* __t1820t, uint16_t* __t1821t, uint16_t* __t1822t, uint64_t* __t1823t) {
  char* buf__unsafe_ptr=*__t1815t;
  uint64_t buf__unsafe_size=*__t1816t;
  uint16_t buf__unsafe_offset=*__t1817t;
  uint16_t buf__unsafe_align=*__t1818t;
  goto __t_return;
  __t_return:
  *__t1815t=buf__unsafe_ptr;
  *__t1816t=buf__unsafe_size;
  *__t1817t=buf__unsafe_offset;
  *__t1818t=buf__unsafe_align;
  *__t1819t=buf__unsafe_ptr;
  *__t1820t=buf__unsafe_size;
  *__t1821t=buf__unsafe_offset;
  *__t1822t=buf__unsafe_align;
  *__t1823t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t1824t, uint64_t* __t1825t, uint16_t* __t1826t, uint16_t* __t1827t, uint64_t* __t1828t, uint64_t length, char** __t1829t, uint64_t* __t1830t, uint16_t* __t1831t, uint16_t* __t1832t, uint64_t* __t1833t) {
  char* allocator__buf__unsafe_ptr=*__t1824t;
  uint64_t allocator__buf__unsafe_size=*__t1825t;
  uint16_t allocator__buf__unsafe_offset=*__t1826t;
  uint16_t allocator__buf__unsafe_align=*__t1827t;
  uint64_t allocator__pos=*__t1828t;
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
  *__t1824t=allocator__buf__unsafe_ptr;
  *__t1825t=allocator__buf__unsafe_size;
  *__t1826t=allocator__buf__unsafe_offset;
  *__t1827t=allocator__buf__unsafe_align;
  *__t1828t=allocator__pos;
  *__t1829t=__t692t__buf__unsafe_ptr;
  *__t1830t=__t692t__buf__unsafe_size;
  *__t1831t=__t692t__buf__unsafe_offset;
  *__t1832t=__t692t__buf__unsafe_align;
  *__t1833t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t1834t, uint64_t* __t1835t, uint16_t* __t1836t, uint16_t* __t1837t, uint64_t* __t1838t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1839t, uint64_t* __t1840t, uint64_t* __t1841t, char* __t1842t) {
  char* CHARS__buf__unsafe_ptr=*__t1834t;
  uint64_t CHARS__buf__unsafe_size=*__t1835t;
  uint16_t CHARS__buf__unsafe_offset=*__t1836t;
  uint16_t CHARS__buf__unsafe_align=*__t1837t;
  uint64_t CHARS__pos=*__t1838t;
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
  *__t1834t=CHARS__buf__unsafe_ptr;
  *__t1835t=CHARS__buf__unsafe_size;
  *__t1836t=CHARS__buf__unsafe_offset;
  *__t1837t=CHARS__buf__unsafe_align;
  *__t1838t=CHARS__pos;
  *__t1839t=__t878t__unsafe_ptr;
  *__t1840t=__t878t__dat__pos;
  *__t1841t=__t878t__dat__length;
  *__t1842t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t1843t, uint64_t* __t1844t, uint16_t* __t1845t, uint16_t* __t1846t, uint64_t* __t1847t, const char* _other, char** __t1848t, uint64_t* __t1849t, uint64_t* __t1850t, char* __t1851t) {
  char* CHARS__buf__unsafe_ptr=*__t1843t;
  uint64_t CHARS__buf__unsafe_size=*__t1844t;
  uint16_t CHARS__buf__unsafe_offset=*__t1845t;
  uint16_t CHARS__buf__unsafe_align=*__t1846t;
  uint64_t CHARS__pos=*__t1847t;
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
  *__t1843t=CHARS__buf__unsafe_ptr;
  *__t1844t=CHARS__buf__unsafe_size;
  *__t1845t=CHARS__buf__unsafe_offset;
  *__t1846t=CHARS__buf__unsafe_align;
  *__t1847t=CHARS__pos;
  *__t1848t=__t884t__unsafe_ptr;
  *__t1849t=__t884t__dat__pos;
  *__t1850t=__t884t__dat__length;
  *__t1851t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1852t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1852t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1853t) {
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
  *__t1853t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t831t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t1854t, uint64_t* __t1855t, uint64_t* __t1856t, char* __t1857t) {
  uint64_t __t832t__=0;
  uint64_t length=0;
  uint64_t __t833t=0;
  char __t834t__=0;
  char* __t835t__=0;
  char __t836t__value=0;
  char first=0;
  char* __t837t__unsafe_ptr=0;
  uint64_t __t837t__dat__pos=0;
  uint64_t __t837t__dat__length=0;
  char __t837t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t832t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t832t__;
  __t833t=0;
  neq__t144t(length,__t833t,&__t834t__);
  if(__t834t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t835t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t835t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t836t__value,__t835t__,1);
  first=__t836t__value;
  }
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t837t__unsafe_ptr,&__t837t__dat__pos,&__t837t__dat__length,&__t837t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1854t=__t837t__unsafe_ptr;
  *__t1855t=__t837t__dat__pos;
  *__t1856t=__t837t__dat__length;
  *__t1857t=__t837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1646t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1858t, uint64_t* __t1859t, uint64_t* __t1860t, char* __t1861t) {
  char* __t1649t__unsafe_ptr=0;
  uint64_t __t1649t__unsafe_size=0;
  uint16_t __t1649t__unsafe_offset=0;
  uint16_t __t1649t__unsafe_align=0;
  uint64_t __t1650t=0;
  uint64_t __t1651t__=0;
  char* __t1652t__unsafe_ptr=0;
  uint64_t __t1652t__unsafe_size=0;
  uint16_t __t1652t__unsafe_offset=0;
  uint16_t __t1652t__unsafe_align=0;
  char __t1653t____t534t__=0;
  char* __t1654t__buf__unsafe_ptr=0;
  uint64_t __t1654t__buf__unsafe_size=0;
  uint16_t __t1654t__buf__unsafe_offset=0;
  uint16_t __t1654t__buf__unsafe_align=0;
  uint64_t __t1654t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1655t__=0;
  uint64_t __t1656t__from=0;
  uint64_t __t1656t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1657t=0;
  uint64_t __t1658t__=0;
  uint64_t i=0;
  char* __t1659t__=0;
  char* __t1660t__unsafe_ptr=0;
  uint16_t __t1660t__dat__pos=0;
  uint16_t __t1660t__dat__length=0;
  char* __t1661t__unsafe_ptr=0;
  uint64_t __t1661t__dat__pos=0;
  uint64_t __t1661t__dat__length=0;
  char __t1661t__dat__first=0;
  char* __t1662t__unsafe_ptr=0;
  uint64_t __t1662t__dat__pos=0;
  uint64_t __t1662t__dat__length=0;
  char __t1662t__dat__first=0;
  char* __t1664t__unsafe_ptr=0;
  uint64_t __t1664t__dat__pos=0;
  uint64_t __t1664t__dat__length=0;
  char __t1664t__dat__first=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__dat__pos=0;
  uint64_t __t1666t__dat__length=0;
  char __t1666t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1647t(&__t1649t__unsafe_ptr,&__t1649t__unsafe_size,&__t1649t__unsafe_offset,&__t1649t__unsafe_align);
  __t1650t=4;
  KB__t481t(__t1650t,&__t1651t__);
  __t_errcode=alloc__t532t(&__t1649t__unsafe_ptr,&__t1649t__unsafe_size,&__t1649t__unsafe_offset,&__t1649t__unsafe_align,__t1651t__,&__t1652t__unsafe_ptr,&__t1652t__unsafe_size,&__t1652t__unsafe_offset,&__t1652t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1652t__unsafe_ptr,&__t1652t__unsafe_size,&__t1652t__unsafe_offset,&__t1652t__unsafe_align,&__t1654t__buf__unsafe_ptr,&__t1654t__buf__unsafe_size,&__t1654t__buf__unsafe_offset,&__t1654t__buf__unsafe_align,&__t1654t__pos);
  mem__pos=__t1654t__pos;
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1655t__);
  range__t471t(__t1655t__,&__t1656t__from,&__t1656t__to);
  iter__from=__t1656t__from;
  iter__to=__t1656t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1658t__);
  __t1657t=__t_complain;
  i=__t1658t__;
  __t1657t=__t1657t==0;
  if(!__t1657t){
  break;
  }
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1659t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1659t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1660t__unsafe_ptr,__t1659t__,8);
  memcpy(&__t1660t__dat__pos,__t1659t__+8,2);
  memcpy(&__t1660t__dat__length,__t1659t__+10,2);
  unpack__t1631t(__t1660t__unsafe_ptr,__t1660t__dat__pos,__t1660t__dat__length,&__t1661t__unsafe_ptr,&__t1661t__dat__pos,&__t1661t__dat__length,&__t1661t__dat__first);
  __t_errcode=copy__t873t(&__t1652t__unsafe_ptr,&__t1652t__unsafe_size,&__t1652t__unsafe_offset,&__t1652t__unsafe_align,&mem__pos,__t1661t__unsafe_ptr,__t1661t__dat__pos,__t1661t__dat__length,__t1661t__dat__first,&__t1662t__unsafe_ptr,&__t1662t__dat__pos,&__t1662t__dat__length,&__t1662t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t879t(&__t1652t__unsafe_ptr,&__t1652t__unsafe_size,&__t1652t__unsafe_offset,&__t1652t__unsafe_align,&mem__pos,__t1663t,&__t1664t__unsafe_ptr,&__t1664t__dat__pos,&__t1664t__dat__length,&__t1664t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t831t(__t1652t__unsafe_ptr,__t1652t__unsafe_size,__t1652t__unsafe_offset,__t1652t__unsafe_align,start,mem__pos,&__t1666t__unsafe_ptr,&__t1666t__dat__pos,&__t1666t__dat__length,&__t1666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1666t__unsafe_ptr=__t1652t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1666t__unsafe_ptr,&__t1653t____t534t__);
  if(__t1653t____t534t__){
  free__t503t(&__t1666t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1858t=__t1666t__unsafe_ptr;
  *__t1859t=__t1666t__dat__pos;
  *__t1860t=__t1666t__dat__length;
  *__t1861t=__t1666t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t391t(uint64_t value, const char* endl) {
  int __t392t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1667t() {
  char* __t1669t__unsafe_ptr=0;
  uint64_t __t1669t__unsafe_size=0;
  uint16_t __t1669t__unsafe_offset=0;
  uint16_t __t1669t__unsafe_align=0;
  char* __t1670t__unsafe_ptr=0;
  uint64_t __t1670t__unsafe_size=0;
  uint16_t __t1670t__unsafe_offset=0;
  uint16_t __t1670t__unsafe_align=0;
  uint64_t __t1671t=0;
  char* __t1672t__unsafe_ptr=0;
  uint64_t __t1672t__unsafe_size=0;
  uint16_t __t1672t__unsafe_offset=0;
  uint16_t __t1672t__unsafe_align=0;
  char __t1673t____t534t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1674t=0;
  char* __t1675t__=0;
  char* __t1677t__unsafe_ptr=0;
  uint16_t __t1677t__dat__pos=0;
  uint16_t __t1677t__dat__length=0;
  uint64_t __t1678t=0;
  char* __t1679t__=0;
  char* __t1681t__unsafe_ptr=0;
  uint16_t __t1681t__dat__pos=0;
  uint16_t __t1681t__dat__length=0;
  uint64_t __t1682t=0;
  char* __t1683t__=0;
  char* __t1685t__unsafe_ptr=0;
  uint16_t __t1685t__dat__pos=0;
  uint16_t __t1685t__dat__length=0;
  uint64_t __t1686t=0;
  char* __t1687t__=0;
  char* __t1689t__unsafe_ptr=0;
  uint16_t __t1689t__dat__pos=0;
  uint16_t __t1689t__dat__length=0;
  uint64_t __t1690t=0;
  char* __t1691t__=0;
  char* __t1693t__unsafe_ptr=0;
  uint16_t __t1693t__dat__pos=0;
  uint16_t __t1693t__dat__length=0;
  uint64_t __t1694t=0;
  char* __t1695t__=0;
  char* __t1696t__unsafe_ptr=0;
  uint64_t __t1696t__dat__pos=0;
  uint64_t __t1696t__dat__length=0;
  char __t1696t__dat__first=0;
  char __t1697t____t1653t____t534t__=0;
  char* __t1698t__unsafe_ptr=0;
  uint16_t __t1698t__dat__pos=0;
  uint16_t __t1698t__dat__length=0;
  uint64_t __t1699t__=0;
  uint64_t __t1700t__from=0;
  uint64_t __t1700t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1701t=0;
  uint64_t __t1702t__=0;
  uint64_t j=0;
  char* __t1704t__=0;
  char* __t1705t__unsafe_ptr=0;
  uint16_t __t1705t__dat__pos=0;
  uint16_t __t1705t__dat__length=0;
  char* __t1706t__unsafe_ptr=0;
  uint64_t __t1706t__dat__pos=0;
  uint64_t __t1706t__dat__length=0;
  char __t1706t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  str____t_buffer____buffer__t1644t(&__t1669t__unsafe_ptr,&__t1669t__unsafe_size,&__t1669t__unsafe_offset,&__t1669t__unsafe_align);
  __t1670t__unsafe_ptr=__t1669t__unsafe_ptr;
  __t1670t__unsafe_size=__t1669t__unsafe_size;
  __t1670t__unsafe_offset=__t1669t__unsafe_offset;
  __t1670t__unsafe_align=__t1669t__unsafe_align;
  __t1671t=6;
  __t_errcode=alloc__t532t(&__t1670t__unsafe_ptr,&__t1670t__unsafe_size,&__t1670t__unsafe_offset,&__t1670t__unsafe_align,__t1671t,&__t1672t__unsafe_ptr,&__t1672t__unsafe_size,&__t1672t__unsafe_offset,&__t1672t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1672t__unsafe_ptr;
  buff__unsafe_size=__t1672t__unsafe_size;
  buff__unsafe_offset=__t1672t__unsafe_offset;
  buff__unsafe_align=__t1672t__unsafe_align;
  __t1674t=0;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1674t,&__t1675t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1628t(__t1676t,&__t1677t__unsafe_ptr,&__t1677t__dat__pos,&__t1677t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1675t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1675t__,&__t1677t__unsafe_ptr,8);
  memcpy(__t1675t__+8,&__t1677t__dat__pos,2);
  memcpy(__t1675t__+10,&__t1677t__dat__length,2);
  __t1678t=1;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1678t,&__t1679t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1628t(__t1680t,&__t1681t__unsafe_ptr,&__t1681t__dat__pos,&__t1681t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1679t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1679t__,&__t1681t__unsafe_ptr,8);
  memcpy(__t1679t__+8,&__t1681t__dat__pos,2);
  memcpy(__t1679t__+10,&__t1681t__dat__length,2);
  __t1682t=2;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1682t,&__t1683t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1628t(__t1684t,&__t1685t__unsafe_ptr,&__t1685t__dat__pos,&__t1685t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1683t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1683t__,&__t1685t__unsafe_ptr,8);
  memcpy(__t1683t__+8,&__t1685t__dat__pos,2);
  memcpy(__t1683t__+10,&__t1685t__dat__length,2);
  __t1686t=3;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1686t,&__t1687t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1628t(__t1688t,&__t1689t__unsafe_ptr,&__t1689t__dat__pos,&__t1689t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1687t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1687t__,&__t1689t__unsafe_ptr,8);
  memcpy(__t1687t__+8,&__t1689t__dat__pos,2);
  memcpy(__t1687t__+10,&__t1689t__dat__length,2);
  __t1690t=4;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1690t,&__t1691t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1628t(__t1692t,&__t1693t__unsafe_ptr,&__t1693t__dat__pos,&__t1693t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1691t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1691t__,&__t1693t__unsafe_ptr,8);
  memcpy(__t1691t__+8,&__t1693t__dat__pos,2);
  memcpy(__t1691t__+10,&__t1693t__dat__length,2);
  __t1694t=5;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1694t,&__t1695t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1646t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1696t__unsafe_ptr,&__t1696t__dat__pos,&__t1696t__dat__length,&__t1696t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1625t(__t1696t__unsafe_ptr,__t1696t__dat__pos,__t1696t__dat__length,__t1696t__dat__first,&__t1698t__unsafe_ptr,&__t1698t__dat__pos,&__t1698t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1695t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1695t__,&__t1698t__unsafe_ptr,8);
  memcpy(__t1695t__+8,&__t1698t__dat__pos,2);
  memcpy(__t1695t__+10,&__t1698t__dat__length,2);
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1699t__);
  range__t471t(__t1699t__,&__t1700t__from,&__t1700t__to);
  full_iter__from=__t1700t__from;
  full_iter__to=__t1700t__to;
  while(1){
  __t_complain=next__t474t(&full_iter__from,full_iter__to,&__t1702t__);
  __t1701t=__t_complain;
  j=__t1702t__;
  __t1701t=__t1701t==0;
  if(!__t1701t){
  break;
  }
  print__t391t(j,__t1663t);
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1704t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1704t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1705t__unsafe_ptr,__t1704t__,8);
  memcpy(&__t1705t__dat__pos,__t1704t__+8,2);
  memcpy(&__t1705t__dat__length,__t1704t__+10,2);
  unpack__t1631t(__t1705t__unsafe_ptr,__t1705t__dat__pos,__t1705t__dat__length,&__t1706t__unsafe_ptr,&__t1706t__dat__pos,&__t1706t__dat__length,&__t1706t__dat__first);
  print__t987t(__t1706t__unsafe_ptr,__t1706t__dat__pos,__t1706t__dat__length,__t1706t__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1696t__unsafe_ptr,&__t1697t____t1653t____t534t__);
  if(__t1697t____t1653t____t534t__){
  free__t503t(&__t1696t__unsafe_ptr);
  }
  exists__t447t(__t1672t__unsafe_ptr,&__t1673t____t534t__);
  if(__t1673t____t534t__){
  free__t503t(&__t1672t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1667t();return 0;}