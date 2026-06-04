#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1556t=".";
const char* const __t1465t="+";
const char* const __t1462t="-";
const char* const __t382t="\n";
const char* const __t1846t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1849t, uint64_t* __t1850t, uint16_t* __t1851t, uint16_t* __t1852t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1849t=unsafe_ptr;
  *__t1850t=unsafe_size;
  *__t1851t=unsafe_offset;
  *__t1852t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1853t) {
  *__t1853t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1854t) {
  int value=0;
  *__t1854t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1855t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1855t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1856t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1856t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1857t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1857t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1858t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1858t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1859t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1859t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1860t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1860t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1861t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1861t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1862t) {
  *__t1862t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1863t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1863t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1864t) {
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
  *__t1864t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1865t, uint64_t* __t1866t, uint64_t* __t1867t, char* __t1868t) {
  goto __t_return;
  __t_return:
  *__t1865t=unsafe_ptr;
  *__t1866t=dat__pos;
  *__t1867t=dat__length;
  *__t1868t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1869t, uint64_t* __t1870t, uint64_t* __t1871t, char* __t1872t) {
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
  *__t1869t=__t794t__unsafe_ptr;
  *__t1870t=__t794t__dat__pos;
  *__t1871t=__t794t__dat__length;
  *__t1872t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1873t, uint64_t* __t1874t, uint64_t* __t1875t, char* __t1876t) {
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
  *__t1873t=__t827t__unsafe_ptr;
  *__t1874t=__t827t__dat__pos;
  *__t1875t=__t827t__dat__length;
  *__t1876t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1877t, uint64_t* __t1878t, uint64_t* __t1879t, char* __t1880t) {
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
  *__t1877t=__t853t__unsafe_ptr;
  *__t1878t=__t853t__dat__pos;
  *__t1879t=__t853t__dat__length;
  *__t1880t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1881t) {
  goto __t_return;
  __t_return:
  *__t1881t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1882t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1882t=z;
}

static inline __attribute__((always_inline)) void get__t989t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1883t) {
  uint64_t __t990t__=0;
  char* __t991t__=0;
  add__t175t(s__dat__pos,i,&__t990t__);
  add__t505t(s__unsafe_ptr,__t990t__,&__t991t__);
  goto __t_return;
  __t_return:
  *__t1883t=__t991t__;
}

static inline __attribute__((always_inline)) void char__t856t(const char* s, char* __t1884t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1884t=c;
}

static inline __attribute__((always_inline)) void eq__t857t(char x, char y, char* __t1885t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1886t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1887t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1887t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1888t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1888t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1889t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1889t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1890t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1890t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t1891t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1891t=z;
}

static inline __attribute__((always_inline)) int float__t1719t(const char* _s, double* __t1892t) {
  char* __t1720t__unsafe_ptr=0;
  uint64_t __t1720t__dat__pos=0;
  uint64_t __t1720t__dat__length=0;
  char __t1720t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1721t=0;
  uint64_t __t1722t__=0;
  char __t1723t__=0;
  double __t1724t=0;
  double __t1725t=0;
  double number=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t=0;
  uint64_t i=0;
  uint64_t __t1728t=0;
  uint64_t __t1729t__=0;
  char __t1730t__=0;
  uint64_t __t1731t=0;
  uint64_t __t1732t=0;
  uint64_t __t1733t=0;
  char* __t1734t__=0;
  char __t1735t__value=0;
  char __t1736t__=0;
  char __t1737t__=0;
  char negative=0;
  char* __t1742t__=0;
  char __t1743t__value=0;
  char __t1744t__=0;
  char __t1745t__=0;
  uint64_t __t1746t=0;
  uint64_t __t1747t__=0;
  uint64_t __t1748t__=0;
  char __t1749t__=0;
  uint64_t __t1738t=0;
  uint64_t __t1739t__=0;
  uint64_t __t1740t__=0;
  char __t1741t__=0;
  uint64_t __t1750t__=0;
  char __t1751t__=0;
  char* __t1752t__=0;
  char __t1753t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1754t__=0;
  char __t1755t__=0;
  char is_dot=0;
  uint64_t __t1756t=0;
  uint64_t __t1757t__=0;
  char __t1758t__=0;
  double __t1759t=0;
  double __t1760t__=0;
  double __t1761t__=0;
  uint64_t __t1762t=0;
  uint64_t __t1763t__=0;
  uint64_t __t1764t__=0;
  char __t1765t__=0;
  double __t1766t=0;
  double __t1767t=0;
  double base=0;
  uint64_t __t1768t__=0;
  char __t1769t__=0;
  char* __t1770t__=0;
  char __t1771t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1772t__=0;
  double __t1773t__=0;
  double __t1774t__=0;
  double __t1775t=0;
  double __t1776t__=0;
  uint64_t __t1777t=0;
  uint64_t __t1778t__=0;
  double __t1779t=0;
  double __t1780t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_s,&__t1720t__unsafe_ptr,&__t1720t__dat__pos,&__t1720t__dat__length,&__t1720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1720t__unsafe_ptr;
  s__dat__pos=__t1720t__dat__pos;
  s__dat__length=__t1720t__dat__length;
  s__dat__first=__t1720t__dat__first;
  __t1721t=0;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1722t__);
  eq__t120t(__t1721t,__t1722t__,&__t1723t__);
  if(__t1723t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1724t=0.0;
  __t1725t=__t1724t;
  number=__t1725t;
  __t1726t=0;
  __t1727t=__t1726t;
  i=__t1727t;
  __t1728t=0;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1729t__);
  eq__t120t(__t1728t,__t1729t__,&__t1730t__);
  if(__t1730t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1731t=0;
  __t1732t=__t1731t;
  i=__t1732t;
  __t1733t=0;
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1733t,&__t1734t__);
  if(!__t1734t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1735t__value,__t1734t__,1);
  char__t856t(__t1462t,&__t1736t__);
  eq__t857t(__t1735t__value,__t1736t__,&__t1737t__);
  negative=__t1737t__;
  if(negative){
  __t1738t=1;
  add__t175t(i,__t1738t,&__t1739t__);
  i=__t1739t__;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1740t__);
  eq__t120t(i,__t1740t__,&__t1741t__);
  if(__t1741t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1742t__);
  if(!__t1742t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1743t__value,__t1742t__,1);
  char__t856t(__t1465t,&__t1744t__);
  eq__t857t(__t1743t__value,__t1744t__,&__t1745t__);
  if(__t1745t__){
  __t1746t=1;
  add__t175t(i,__t1746t,&__t1747t__);
  i=__t1747t__;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1748t__);
  eq__t120t(i,__t1748t__,&__t1749t__);
  if(__t1749t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1750t__);
  lt__t252t(i,__t1750t__,&__t1751t__);
  if(!__t1751t__){
  break;
  }
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1752t__);
  if(!__t1752t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1753t__value,__t1752t__,1);
  c=__t1753t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t856t(__t1556t,&__t1754t__);
  eq__t857t(c,__t1754t__,&__t1755t__);
  is_dot=__t1755t__;
  if(is_dot){
  __t1756t=1;
  add__t175t(i,__t1756t,&__t1757t__);
  i=__t1757t__;
  break;
  }
  not__t28t(is_digit,&__t1758t__);
  if(__t1758t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1759t=10.0;
  mul__t177t(number,__t1759t,&__t1760t__);
  add__t153t(__t1760t__,digit,&__t1761t__);
  number=__t1761t__;
  __t1762t=1;
  add__t175t(i,__t1762t,&__t1763t__);
  i=__t1763t__;
  }
  if(is_dot){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1764t__);
  eq__t120t(i,__t1764t__,&__t1765t__);
  if(__t1765t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1766t=0.1;
  __t1767t=__t1766t;
  base=__t1767t;
  while(1){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1768t__);
  lt__t252t(i,__t1768t__,&__t1769t__);
  if(!__t1769t__){
  break;
  }
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1770t__);
  if(!__t1770t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1771t__value,__t1770t__,1);
  d=__t1771t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1772t__);
  if(__t1772t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1773t__);
  add__t153t(number,__t1773t__,&__t1774t__);
  number=__t1774t__;
  __t1775t=0.1;
  mul__t177t(base,__t1775t,&__t1776t__);
  base=__t1776t__;
  __t1777t=1;
  add__t175t(i,__t1777t,&__t1778t__);
  i=__t1778t__;
  }
  }
  if(negative){
  __t1779t=0.0;
  sub__t326t(__t1779t,number,&__t1780t__);
  number=__t1780t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1892t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1844t() {
  double __t1847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1719t(__t1846t,&__t1847t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t1847t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}