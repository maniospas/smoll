#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2000t="hello";
const char* const __t2007t="it's a me, manio.";
const char* const __t2005t="manio";
const char* const __t377t="\n";
const char* const __t2002t="hello world!";
static const char* __t_all_errcodes[37] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2015t(char** __t2037t, uint64_t* __t2038t, uint16_t* __t2039t, uint16_t* __t2040t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2037t=unsafe_ptr;
  *__t2038t=unsafe_size;
  *__t2039t=unsafe_offset;
  *__t2040t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2041t) {
  int value=0;
  *__t2041t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2042t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2042t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2043t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2043t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2044t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2044t=z;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2045t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2045t=__t488t__;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2046t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2046t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2047t) {
  char* allocated=*__t2047t;
  if(allocated){
  free(allocated);
  }
  *__t2047t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2048t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2048t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2049t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2049t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2050t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2050t=value;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2051t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2051t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2052t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2052t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2053t, uint64_t* __t2054t, uint16_t* __t2055t, uint16_t* __t2056t, uint64_t size, char** __t2057t, uint64_t* __t2058t, uint16_t* __t2059t, uint16_t* __t2060t) {
  char* buffer__unsafe_ptr=*__t2053t;
  uint64_t buffer__unsafe_size=*__t2054t;
  uint16_t buffer__unsafe_offset=*__t2055t;
  uint16_t buffer__unsafe_align=*__t2056t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2053t=buffer__unsafe_ptr;
  *__t2054t=buffer__unsafe_size;
  *__t2055t=buffer__unsafe_offset;
  *__t2056t=buffer__unsafe_align;
  *__t2057t=buffer__unsafe_ptr;
  *__t2058t=buffer__unsafe_size;
  *__t2059t=buffer__unsafe_offset;
  *__t2060t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t724t(char** __t2061t, uint64_t* __t2062t, uint16_t* __t2063t, uint16_t* __t2064t, char** __t2065t, uint64_t* __t2066t, uint16_t* __t2067t, uint16_t* __t2068t, uint64_t* __t2069t) {
  char* buf__unsafe_ptr=*__t2061t;
  uint64_t buf__unsafe_size=*__t2062t;
  uint16_t buf__unsafe_offset=*__t2063t;
  uint16_t buf__unsafe_align=*__t2064t;
  uint64_t __t725t=0;
  uint64_t __t726t=0;
  uint64_t pos=0;
  __t725t=0;
  __t726t=__t725t;
  pos=__t726t;
  goto __t_return;
  __t_return:
  *__t2061t=buf__unsafe_ptr;
  *__t2062t=buf__unsafe_size;
  *__t2063t=buf__unsafe_offset;
  *__t2064t=buf__unsafe_align;
  *__t2065t=buf__unsafe_ptr;
  *__t2066t=buf__unsafe_size;
  *__t2067t=buf__unsafe_offset;
  *__t2068t=buf__unsafe_align;
  *__t2069t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1984t(char** __t2070t, uint64_t* __t2071t, uint16_t* __t2072t, uint16_t* __t2073t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2070t=unsafe_ptr;
  *__t2071t=unsafe_size;
  *__t2072t=unsafe_offset;
  *__t2073t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1900t(char** __t2074t, uint64_t* __t2075t, uint16_t* __t2076t, uint16_t* __t2077t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2074t=unsafe_ptr;
  *__t2075t=unsafe_size;
  *__t2076t=unsafe_offset;
  *__t2077t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2078t) {
  goto __t_return;
  __t_return:
  *__t2078t=buffer__unsafe_size;
}

int strmap__t1899t(char** __t2079t, uint64_t* __t2080t, uint16_t* __t2081t, uint16_t* __t2082t, char** __t2083t, uint64_t* __t2084t, uint16_t* __t2085t, uint16_t* __t2086t, char** __t2087t, uint64_t* __t2088t, uint16_t* __t2089t, uint16_t* __t2090t) {
  char* values__unsafe_ptr=*__t2079t;
  uint64_t values__unsafe_size=*__t2080t;
  uint16_t values__unsafe_offset=*__t2081t;
  uint16_t values__unsafe_align=*__t2082t;
  char* __t1902t__unsafe_ptr=0;
  uint64_t __t1902t__unsafe_size=0;
  uint16_t __t1902t__unsafe_offset=0;
  uint16_t __t1902t__unsafe_align=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__unsafe_size=0;
  uint16_t __t1903t__unsafe_offset=0;
  uint16_t __t1903t__unsafe_align=0;
  uint64_t __t1904t__=0;
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__unsafe_size=0;
  uint16_t __t1905t__unsafe_offset=0;
  uint16_t __t1905t__unsafe_align=0;
  char __t1906t____t517t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1900t(&__t1902t__unsafe_ptr,&__t1902t__unsafe_size,&__t1902t__unsafe_offset,&__t1902t__unsafe_align);
  __t1903t__unsafe_ptr=__t1902t__unsafe_ptr;
  __t1903t__unsafe_size=__t1902t__unsafe_size;
  __t1903t__unsafe_offset=__t1902t__unsafe_offset;
  __t1903t__unsafe_align=__t1902t__unsafe_align;
  len__t604t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1904t__);
  __t_errcode=alloc__t515t(&__t1903t__unsafe_ptr,&__t1903t__unsafe_size,&__t1903t__unsafe_offset,&__t1903t__unsafe_align,__t1904t__,&__t1905t__unsafe_ptr,&__t1905t__unsafe_size,&__t1905t__unsafe_offset,&__t1905t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1905t__unsafe_ptr;
  keys__unsafe_size=__t1905t__unsafe_size;
  keys__unsafe_offset=__t1905t__unsafe_offset;
  keys__unsafe_align=__t1905t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(keys__unsafe_ptr,&__t1906t____t517t__);
  if(__t1906t____t517t__){
  free__t508t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t2079t=values__unsafe_ptr;
  *__t2080t=values__unsafe_size;
  *__t2081t=values__unsafe_offset;
  *__t2082t=values__unsafe_align;
  *__t2083t=keys__unsafe_ptr;
  *__t2084t=keys__unsafe_size;
  *__t2085t=keys__unsafe_offset;
  *__t2086t=keys__unsafe_align;
  *__t2087t=values__unsafe_ptr;
  *__t2088t=values__unsafe_size;
  *__t2089t=values__unsafe_offset;
  *__t2090t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2091t, uint64_t* __t2092t, uint16_t* __t2093t, uint16_t* __t2094t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2091t=unsafe_ptr;
  *__t2092t=unsafe_size;
  *__t2093t=unsafe_offset;
  *__t2094t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2095t) {
  *__t2095t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2096t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2097t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2097t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2098t) {
  *__t2098t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2099t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2099t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2100t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2100t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2101t, uint64_t* __t2102t, uint64_t* __t2103t, char* __t2104t) {
  goto __t_return;
  __t_return:
  *__t2101t=unsafe_ptr;
  *__t2102t=dat__pos;
  *__t2103t=dat__length;
  *__t2104t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2105t, uint64_t* __t2106t, uint64_t* __t2107t, char* __t2108t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t512t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t143t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2105t=__t643t__unsafe_ptr;
  *__t2106t=__t643t__dat__pos;
  *__t2107t=__t643t__dat__length;
  *__t2108t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2109t, uint64_t* __t2110t, uint64_t* __t2111t, char* __t2112t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t143t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2109t=__t673t__unsafe_ptr;
  *__t2110t=__t673t__dat__pos;
  *__t2111t=__t673t__dat__length;
  *__t2112t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t2113t, uint64_t* __t2114t, uint64_t* __t2115t, char* __t2116t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t174t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2113t=__t681t__unsafe_ptr;
  *__t2114t=__t681t__dat__pos;
  *__t2115t=__t681t__dat__length;
  *__t2116t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1518t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2117t, uint64_t* __t2118t, uint64_t* __t2119t, char* __t2120t) {
  goto __t_return;
  __t_return:
  *__t2117t=r__unsafe_ptr;
  *__t2118t=r__dat__pos;
  *__t2119t=r__dat__length;
  *__t2120t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2121t) {
  goto __t_return;
  __t_return:
  *__t2121t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1522t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2122t) {
  uint64_t __t1523t=0;
  uint64_t __t1524t__=0;
  char __t1525t__=0;
  __t1523t=0;
  len__t682t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1524t__);
  eq__t119t(__t1523t,__t1524t__,&__t1525t__);
  goto __t_return;
  __t_return:
  *__t2122t=__t1525t__;
}

static inline __attribute__((always_inline)) void raw__t1516t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2123t, uint64_t* __t2124t, uint64_t* __t2125t, char* __t2126t) {
  goto __t_return;
  __t_return:
  *__t2123t=r__s__unsafe_ptr;
  *__t2124t=r__s__dat__pos;
  *__t2125t=r__s__dat__length;
  *__t2126t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2127t, uint64_t* __t2128t) {
  int __t468t=0;
  uint64_t __t469t=0;
  uint64_t _from=0;
  uint64_t __t470t=0;
  uint64_t from=0;
  __t469t=0;
  _from=__t469t;
  __t470t=_from;
  from=__t470t;
  goto __t_return;
  __t_return:
  *__t2127t=from;
  *__t2128t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2129t, uint64_t r__to, uint64_t* __t2130t) {
  uint64_t r__from=*__t2129t;
  char __t477t__=0;
  uint64_t ret=0;
  uint64_t __t478t=0;
  uint64_t __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t478t=1;
  add__t174t(ret,__t478t,&__t479t__);
  r__from=__t479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2129t=r__from;
  *__t2130t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t443t(uint64_t value, uint64_t* __t2131t) {
  goto __t_return;
  __t_return:
  *__t2131t=value;
}

static inline __attribute__((always_inline)) void lshift__t453t(uint64_t x__value, uint64_t y, uint64_t* __t2132t) {
  uint64_t z=0;
  uint64_t __t454t__value=0;
  z=(x__value<<y);
  bits__t443t(z,&__t454t__value);
  goto __t_return;
  __t_return:
  *__t2132t=__t454t__value;
}

static inline __attribute__((always_inline)) void nat__t438t(uint64_t x, uint64_t* __t2133t) {
  int __t439t=0;
  int __t440t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2133t=value;
}

static inline __attribute__((always_inline)) void nat__t449t(uint64_t x__value, uint64_t* __t2134t) {
  uint64_t __t450t__=0;
  nat__t438t(x__value,&__t450t__);
  goto __t_return;
  __t_return:
  *__t2134t=__t450t__;
}

static inline __attribute__((always_inline)) void get__t825t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2135t) {
  uint64_t __t826t__=0;
  char* __t827t__=0;
  add__t174t(s__dat__pos,i,&__t826t__);
  add__t510t(s__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  __t_return:
  *__t2135t=__t827t__;
}

static inline __attribute__((always_inline)) void nat__t441t(char x, uint64_t* __t2136t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2136t=value;
}

static inline __attribute__((always_inline)) int mod__t227t(uint64_t x, uint64_t y, uint64_t* __t2137t) {
  uint64_t zero=0;
  char __t228t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t119t(y,zero,&__t228t__);
  if(__t228t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2137t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1467t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2138t) {
  uint64_t __t1468t=0;
  uint64_t __t1469t=0;
  uint64_t h=0;
  uint64_t __t1470t__=0;
  uint64_t __t1471t__from=0;
  uint64_t __t1471t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1472t=0;
  uint64_t __t1473t__=0;
  uint64_t i=0;
  uint64_t __t1474t__value=0;
  uint64_t __t1475t=0;
  uint64_t __t1476t__value=0;
  uint64_t __t1477t__=0;
  uint64_t __t1478t__=0;
  char* __t1479t__=0;
  char __t1480t__value=0;
  uint64_t __t1481t__=0;
  uint64_t __t1482t__=0;
  uint64_t __t1483t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1468t=5381;
  __t1469t=__t1468t;
  h=__t1469t;
  len__t682t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1470t__);
  range__t467t(__t1470t__,&__t1471t__from,&__t1471t__to);
  iter__from=__t1471t__from;
  iter__to=__t1471t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1473t__);
  __t1472t=__t_complain;
  i=__t1473t__;
  __t1472t=__t1472t==0;
  if(!__t1472t){
  break;
  }
  bits__t443t(h,&__t1474t__value);
  __t1475t=5;
  lshift__t453t(__t1474t__value,__t1475t,&__t1476t__value);
  nat__t449t(__t1476t__value,&__t1477t__);
  add__t174t(__t1477t__,h,&__t1478t__);
  get__t825t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1479t__);
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1480t__value,__t1479t__,1);
  nat__t441t(__t1480t__value,&__t1481t__);
  add__t174t(__t1478t__,__t1481t__,&__t1482t__);
  h=__t1482t__;
  }
  __t_errcode=mod__t227t(h,size,&__t1483t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2138t=__t1483t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2139t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2139t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2140t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2140t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t, uint64_t i, char** __t2145t) {
  char* buffer__unsafe_ptr=*__t2141t;
  uint64_t buffer__unsafe_size=*__t2142t;
  uint16_t buffer__unsafe_offset=*__t2143t;
  uint16_t buffer__unsafe_align=*__t2144t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t592t__);
  mul__t198t(i,__t592t__,&__t593t__);
  nat__t512t(buffer__unsafe_offset,&__t594t__);
  add__t174t(__t593t__,__t594t__,&__t595t__);
  add__t510t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2141t=buffer__unsafe_ptr;
  *__t2142t=buffer__unsafe_size;
  *__t2143t=buffer__unsafe_offset;
  *__t2144t=buffer__unsafe_align;
  *__t2145t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t686t(char x, char y, char* __t2146t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2146t=z;
}

static inline __attribute__((always_inline)) void eq__t829t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2147t) {
  uint64_t __t830t__=0;
  uint64_t n=0;
  uint64_t __t831t__=0;
  char __t832t__=0;
  char __t833t=0;
  char __t834t__=0;
  char __t835t=0;
  char z=0;
  len__t682t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t830t__);
  n=__t830t__;
  len__t682t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t831t__);
  neq__t143t(n,__t831t__,&__t832t__);
  if(__t832t__){
  __t833t=0;
  goto __t_return;
  }
  neq__t686t(x__dat__first,y__dat__first,&__t834t__);
  if(__t834t__){
  __t835t=0;
  __t833t=__t835t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t833t=z;
  goto __t_return;
  __t_return:
  *__t2147t=__t833t;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2148t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2148t=z;
}

int at__t1798t(char** __t2149t, uint64_t* __t2150t, uint16_t* __t2151t, uint16_t* __t2152t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2153t) {
  char* data__unsafe_ptr=*__t2149t;
  uint64_t data__unsafe_size=*__t2150t;
  uint16_t data__unsafe_offset=*__t2151t;
  uint16_t data__unsafe_align=*__t2152t;
  char* __t1799t__unsafe_ptr=0;
  uint64_t __t1799t__dat__pos=0;
  uint64_t __t1799t__dat__length=0;
  char __t1799t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1800t__=0;
  uint64_t __t1801t=0;
  uint64_t __t1802t=0;
  char* __t1803t__=0;
  char* __t1804t__s__unsafe_ptr=0;
  uint64_t __t1804t__s__dat__pos=0;
  uint64_t __t1804t__s__dat__length=0;
  char __t1804t__s__dat__first=0;
  uint64_t __t1804t__cost=0;
  char* __t1805t__unsafe_ptr=0;
  uint64_t __t1805t__dat__pos=0;
  uint64_t __t1805t__dat__length=0;
  char __t1805t__dat__first=0;
  int __t1806t=0;
  int __t1807t__=0;
  uint64_t __t1808t__=0;
  uint64_t n=0;
  uint64_t __t1809t__=0;
  uint64_t pos=0;
  uint64_t __t1810t__from=0;
  uint64_t __t1810t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1811t=0;
  uint64_t __t1812t__=0;
  uint64_t i=0;
  uint64_t __t1813t__=0;
  uint64_t __t1814t=0;
  uint64_t idx=0;
  char __t1815t__=0;
  uint64_t __t1816t__=0;
  uint64_t __t1817t=0;
  char __t1818t__=0;
  char* __t1819t__=0;
  char* __t1820t__s__unsafe_ptr=0;
  uint64_t __t1820t__s__dat__pos=0;
  uint64_t __t1820t__s__dat__length=0;
  char __t1820t__s__dat__first=0;
  uint64_t __t1820t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1821t__unsafe_ptr=0;
  uint64_t __t1821t__dat__pos=0;
  uint64_t __t1821t__dat__length=0;
  char __t1821t__dat__first=0;
  char __t1822t__=0;
  char* __t1823t__=0;
  char* __t1824t__unsafe_ptr=0;
  uint64_t __t1824t__dat__pos=0;
  uint64_t __t1824t__dat__length=0;
  char __t1824t__dat__first=0;
  char __t1825t__=0;
  char __t1826t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1827t__=0;
  char* __t1828t__s__unsafe_ptr=0;
  uint64_t __t1828t__s__dat__pos=0;
  uint64_t __t1828t__s__dat__length=0;
  char __t1828t__s__dat__first=0;
  uint64_t __t1828t__cost=0;
  char* __t1829t__unsafe_ptr=0;
  uint64_t __t1829t__dat__pos=0;
  uint64_t __t1829t__dat__length=0;
  char __t1829t__dat__first=0;
  char* __t1830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1518t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1799t__unsafe_ptr,&__t1799t__dat__pos,&__t1799t__dat__length,&__t1799t__dat__first);
  k__unsafe_ptr=__t1799t__unsafe_ptr;
  k__dat__pos=__t1799t__dat__pos;
  k__dat__length=__t1799t__dat__length;
  k__dat__first=__t1799t__dat__first;
  is_zero__t1522t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1800t__);
  if(__t1800t__){
  __t1801t=0;
  goto __t_return;
  }
  __t1802t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1802t,&__t1803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1803t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1804t__s__unsafe_ptr,__t1803t__,8);
  memcpy(&__t1804t__s__dat__pos,__t1803t__+8,8);
  memcpy(&__t1804t__s__dat__length,__t1803t__+16,8);
  memcpy(&__t1804t__s__dat__first,__t1803t__+24,1);
  memcpy(&__t1804t__cost,__t1803t__+25,8);
  raw__t1516t(__t1804t__s__unsafe_ptr,__t1804t__s__dat__pos,__t1804t__s__dat__length,__t1804t__s__dat__first,__t1804t__cost,&__t1805t__unsafe_ptr,&__t1805t__dat__pos,&__t1805t__dat__length,&__t1805t__dat__first);
  not__t36t(__t1806t,&__t1807t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1808t__);
  n=__t1808t__;
  __t_errcode=hash__t1467t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1809t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1809t__;
  range__t467t(n,&__t1810t__from,&__t1810t__to);
  iter__from=__t1810t__from;
  iter__to=__t1810t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1812t__);
  __t1811t=__t_complain;
  i=__t1812t__;
  __t1811t=__t1811t==0;
  if(!__t1811t){
  break;
  }
  add__t174t(pos,i,&__t1813t__);
  __t1814t=__t1813t__;
  idx=__t1814t;
  ge__t323t(idx,n,&__t1815t__);
  if(__t1815t__){
  __t_errcode=sub__t351t(idx,n,&__t1816t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1816t__;
  }
  __t1817t=0;
  eq__t119t(idx,__t1817t,&__t1818t__);
  if(__t1818t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1819t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1819t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1820t__s__unsafe_ptr,__t1819t__,8);
  memcpy(&__t1820t__s__dat__pos,__t1819t__+8,8);
  memcpy(&__t1820t__s__dat__length,__t1819t__+16,8);
  memcpy(&__t1820t__s__dat__first,__t1819t__+24,1);
  memcpy(&__t1820t__cost,__t1819t__+25,8);
  entry__s__unsafe_ptr=__t1820t__s__unsafe_ptr;
  entry__s__dat__pos=__t1820t__s__dat__pos;
  entry__s__dat__length=__t1820t__s__dat__length;
  entry__s__dat__first=__t1820t__s__dat__first;
  entry__cost=__t1820t__cost;
  raw__t1516t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1821t__unsafe_ptr,&__t1821t__dat__pos,&__t1821t__dat__length,&__t1821t__dat__first);
  is_zero__t1522t(__t1821t__unsafe_ptr,__t1821t__dat__pos,__t1821t__dat__length,__t1821t__dat__first,&__t1822t__);
  if(__t1822t__){
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1823t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1823t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1823t__,&k__unsafe_ptr,8);
  memcpy(__t1823t__+8,&k__dat__pos,8);
  memcpy(__t1823t__+16,&k__dat__length,8);
  memcpy(__t1823t__+24,&k__dat__first,1);
  memcpy(__t1823t__+25,&i,8);
  __t1801t=idx;
  goto __t_return;
  }
  raw__t1516t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1824t__unsafe_ptr,&__t1824t__dat__pos,&__t1824t__dat__length,&__t1824t__dat__first);
  eq__t829t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1824t__unsafe_ptr,__t1824t__dat__pos,__t1824t__dat__length,__t1824t__dat__first,&__t1825t__);
  if(__t1825t__){
  __t1801t=idx;
  goto __t_return;
  }
  gt__t275t(i,entry__cost,&__t1826t__);
  if(__t1826t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1827t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1827t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1828t__s__unsafe_ptr,__t1827t__,8);
  memcpy(&__t1828t__s__dat__pos,__t1827t__+8,8);
  memcpy(&__t1828t__s__dat__length,__t1827t__+16,8);
  memcpy(&__t1828t__s__dat__first,__t1827t__+24,1);
  memcpy(&__t1828t__cost,__t1827t__+25,8);
  raw__t1516t(__t1828t__s__unsafe_ptr,__t1828t__s__dat__pos,__t1828t__s__dat__length,__t1828t__s__dat__first,__t1828t__cost,&__t1829t__unsafe_ptr,&__t1829t__dat__pos,&__t1829t__dat__length,&__t1829t__dat__first);
  k__unsafe_ptr=__t1829t__unsafe_ptr;
  k__dat__pos=__t1829t__dat__pos;
  k__dat__length=__t1829t__dat__length;
  k__dat__first=__t1829t__dat__first;
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1830t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1830t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1830t__,&tmp__unsafe_ptr,8);
  memcpy(__t1830t__+8,&tmp__dat__pos,8);
  memcpy(__t1830t__+16,&tmp__dat__length,8);
  memcpy(__t1830t__+24,&tmp__dat__first,1);
  memcpy(__t1830t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2149t=data__unsafe_ptr;
  *__t2150t=data__unsafe_size;
  *__t2151t=data__unsafe_offset;
  *__t2152t=data__unsafe_align;
  *__t2153t=__t1801t;
  
  return __t_errcode;
}

int mutget__t1923t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t, char** __t2158t, uint64_t* __t2159t, uint16_t* __t2160t, uint16_t* __t2161t, const char* key, char** __t2162t) {
  char* keys__unsafe_ptr=*__t2154t;
  uint64_t keys__unsafe_size=*__t2155t;
  uint16_t keys__unsafe_offset=*__t2156t;
  uint16_t keys__unsafe_align=*__t2157t;
  char* values__unsafe_ptr=*__t2158t;
  uint64_t values__unsafe_size=*__t2159t;
  uint16_t values__unsafe_offset=*__t2160t;
  uint16_t values__unsafe_align=*__t2161t;
  char* __t1924t__unsafe_ptr=0;
  uint64_t __t1924t__dat__pos=0;
  uint64_t __t1924t__dat__length=0;
  char __t1924t__dat__first=0;
  uint64_t __t1925t__=0;
  char* __t1926t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(key,&__t1924t__unsafe_ptr,&__t1924t__dat__pos,&__t1924t__dat__length,&__t1924t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1798t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1924t__unsafe_ptr,__t1924t__dat__pos,__t1924t__dat__length,__t1924t__dat__first,&__t1925t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t590t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1925t__,&__t1926t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2154t=keys__unsafe_ptr;
  *__t2155t=keys__unsafe_size;
  *__t2156t=keys__unsafe_offset;
  *__t2157t=keys__unsafe_align;
  *__t2158t=values__unsafe_ptr;
  *__t2159t=values__unsafe_size;
  *__t2160t=values__unsafe_offset;
  *__t2161t=values__unsafe_align;
  *__t2162t=__t1926t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2163t, uint64_t* __t2164t, uint64_t* __t2165t, char* __t2166t) {
  goto __t_return;
  __t_return:
  *__t2163t=other__unsafe_ptr;
  *__t2164t=other__dat__pos;
  *__t2165t=other__dat__length;
  *__t2166t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t744t(char** __t2167t, uint64_t* __t2168t, uint16_t* __t2169t, uint16_t* __t2170t, uint64_t* __t2171t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2172t, uint64_t* __t2173t, uint64_t* __t2174t, char* __t2175t) {
  char* buf__unsafe_ptr=*__t2167t;
  uint64_t buf__unsafe_size=*__t2168t;
  uint16_t buf__unsafe_offset=*__t2169t;
  uint16_t buf__unsafe_align=*__t2170t;
  uint64_t pos=*__t2171t;
  char* __t745t__unsafe_ptr=0;
  uint64_t __t745t__dat__pos=0;
  uint64_t __t745t__dat__length=0;
  char __t745t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t746t__=0;
  uint64_t __t747t__=0;
  uint64_t next_pos=0;
  uint64_t __t748t__=0;
  char __t749t__=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t prev_pos=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t745t__unsafe_ptr,&__t745t__dat__pos,&__t745t__dat__length,&__t745t__dat__first);
  other__unsafe_ptr=__t745t__unsafe_ptr;
  other__dat__pos=__t745t__dat__pos;
  other__dat__length=__t745t__dat__length;
  other__dat__first=__t745t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t746t__);
  add__t174t(pos,__t746t__,&__t747t__);
  next_pos=__t747t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t748t__);
  gt__t275t(next_pos,__t748t__,&__t749t__);
  if(__t749t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t750t=0;
  add__t174t(pos,__t750t,&__t751t__);
  prev_pos=__t751t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2167t=buf__unsafe_ptr;
  *__t2168t=buf__unsafe_size;
  *__t2169t=buf__unsafe_offset;
  *__t2170t=buf__unsafe_align;
  *__t2171t=pos;
  *__t2172t=__t752t__unsafe_ptr;
  *__t2173t=__t752t__dat__pos;
  *__t2174t=__t752t__dat__length;
  *__t2175t=__t752t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1941t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2176t, char** __t2177t, uint64_t* __t2178t, uint64_t* __t2179t, char* __t2180t) {
  uint64_t pos=*__t2176t;
  uint64_t __t1942t=0;
  char __t1943t__=0;
  uint64_t __t1944t=0;
  uint64_t __t1945t__=0;
  uint64_t __t1946t=0;
  char* __t1947t__=0;
  char* __t1948t__s__unsafe_ptr=0;
  uint64_t __t1948t__s__dat__pos=0;
  uint64_t __t1948t__s__dat__length=0;
  char __t1948t__s__dat__first=0;
  uint64_t __t1948t__cost=0;
  char* __t1949t__unsafe_ptr=0;
  uint64_t __t1949t__dat__pos=0;
  uint64_t __t1949t__dat__length=0;
  char __t1949t__dat__first=0;
  char* __t1950t__=0;
  char* __t1951t__s__unsafe_ptr=0;
  uint64_t __t1951t__s__dat__pos=0;
  uint64_t __t1951t__s__dat__length=0;
  char __t1951t__s__dat__first=0;
  uint64_t __t1951t__cost=0;
  char* __t1952t__unsafe_ptr=0;
  uint64_t __t1952t__dat__pos=0;
  uint64_t __t1952t__dat__length=0;
  char __t1952t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1953t=0;
  uint64_t __t1954t__=0;
  char* __t1955t__unsafe_ptr=0;
  uint64_t __t1955t__dat__pos=0;
  uint64_t __t1955t__dat__length=0;
  char __t1955t__dat__first=0;
  char __t1956t__=0;
  char* __t1957t__=0;
  char* __t1958t__s__unsafe_ptr=0;
  uint64_t __t1958t__s__dat__pos=0;
  uint64_t __t1958t__s__dat__length=0;
  char __t1958t__s__dat__first=0;
  uint64_t __t1958t__cost=0;
  char* __t1959t__unsafe_ptr=0;
  uint64_t __t1959t__dat__pos=0;
  uint64_t __t1959t__dat__length=0;
  char __t1959t__dat__first=0;
  uint64_t __t1960t=0;
  uint64_t __t1961t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1942t=0;
  eq__t119t(pos,__t1942t,&__t1943t__);
  if(__t1943t__){
  __t1944t=1;
  add__t174t(pos,__t1944t,&__t1945t__);
  pos=__t1945t__;
  __t1946t=0;
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1946t,&__t1947t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1947t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1948t__s__unsafe_ptr,__t1947t__,8);
  memcpy(&__t1948t__s__dat__pos,__t1947t__+8,8);
  memcpy(&__t1948t__s__dat__length,__t1947t__+16,8);
  memcpy(&__t1948t__s__dat__first,__t1947t__+24,1);
  memcpy(&__t1948t__cost,__t1947t__+25,8);
  raw__t1516t(__t1948t__s__unsafe_ptr,__t1948t__s__dat__pos,__t1948t__s__dat__length,__t1948t__s__dat__first,__t1948t__cost,&__t1949t__unsafe_ptr,&__t1949t__dat__pos,&__t1949t__dat__length,&__t1949t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1950t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1950t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1951t__s__unsafe_ptr,__t1950t__,8);
  memcpy(&__t1951t__s__dat__pos,__t1950t__+8,8);
  memcpy(&__t1951t__s__dat__length,__t1950t__+16,8);
  memcpy(&__t1951t__s__dat__first,__t1950t__+24,1);
  memcpy(&__t1951t__cost,__t1950t__+25,8);
  raw__t1516t(__t1951t__s__unsafe_ptr,__t1951t__s__dat__pos,__t1951t__s__dat__length,__t1951t__s__dat__first,__t1951t__cost,&__t1952t__unsafe_ptr,&__t1952t__dat__pos,&__t1952t__dat__length,&__t1952t__dat__first);
  ret__unsafe_ptr=__t1952t__unsafe_ptr;
  ret__dat__pos=__t1952t__dat__pos;
  ret__dat__length=__t1952t__dat__length;
  ret__dat__first=__t1952t__dat__first;
  __t1953t=1;
  add__t174t(pos,__t1953t,&__t1954t__);
  pos=__t1954t__;
  while(1){
  raw__t1518t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1955t__unsafe_ptr,&__t1955t__dat__pos,&__t1955t__dat__length,&__t1955t__dat__first);
  is_zero__t1522t(__t1955t__unsafe_ptr,__t1955t__dat__pos,__t1955t__dat__length,__t1955t__dat__first,&__t1956t__);
  if(!__t1956t__){
  break;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1957t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1957t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1958t__s__unsafe_ptr,__t1957t__,8);
  memcpy(&__t1958t__s__dat__pos,__t1957t__+8,8);
  memcpy(&__t1958t__s__dat__length,__t1957t__+16,8);
  memcpy(&__t1958t__s__dat__first,__t1957t__+24,1);
  memcpy(&__t1958t__cost,__t1957t__+25,8);
  raw__t1516t(__t1958t__s__unsafe_ptr,__t1958t__s__dat__pos,__t1958t__s__dat__length,__t1958t__s__dat__first,__t1958t__cost,&__t1959t__unsafe_ptr,&__t1959t__dat__pos,&__t1959t__dat__length,&__t1959t__dat__first);
  ret__unsafe_ptr=__t1959t__unsafe_ptr;
  ret__dat__pos=__t1959t__dat__pos;
  ret__dat__length=__t1959t__dat__length;
  ret__dat__first=__t1959t__dat__first;
  __t1960t=1;
  add__t174t(pos,__t1960t,&__t1961t__);
  pos=__t1961t__;
  }
  __t1949t__unsafe_ptr=ret__unsafe_ptr;
  __t1949t__dat__pos=ret__dat__pos;
  __t1949t__dat__length=ret__dat__length;
  __t1949t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2176t=pos;
  *__t2177t=__t1949t__unsafe_ptr;
  *__t2178t=__t1949t__dat__pos;
  *__t2179t=__t1949t__dat__length;
  *__t2180t=__t1949t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1992t(char** __t2181t, uint64_t* __t2182t, uint16_t* __t2183t, uint16_t* __t2184t, uint64_t* __t2185t, char** __t2186t, uint64_t* __t2187t, uint16_t* __t2188t, uint16_t* __t2189t, char** __t2190t, uint64_t* __t2191t, uint16_t* __t2192t, uint16_t* __t2193t) {
  char* buf__buf__unsafe_ptr=*__t2181t;
  uint64_t buf__buf__unsafe_size=*__t2182t;
  uint16_t buf__buf__unsafe_offset=*__t2183t;
  uint16_t buf__buf__unsafe_align=*__t2184t;
  uint64_t buf__pos=*__t2185t;
  char* __t1993t__unsafe_ptr=0;
  uint64_t __t1993t__unsafe_size=0;
  uint16_t __t1993t__unsafe_offset=0;
  uint16_t __t1993t__unsafe_align=0;
  uint64_t __t1994t=0;
  char* __t1995t__unsafe_ptr=0;
  uint64_t __t1995t__unsafe_size=0;
  uint16_t __t1995t__unsafe_offset=0;
  uint16_t __t1995t__unsafe_align=0;
  char __t1996t____t517t__=0;
  char* __t1997t__keys__unsafe_ptr=0;
  uint64_t __t1997t__keys__unsafe_size=0;
  uint16_t __t1997t__keys__unsafe_offset=0;
  uint16_t __t1997t__keys__unsafe_align=0;
  char* __t1997t__values__unsafe_ptr=0;
  uint64_t __t1997t__values__unsafe_size=0;
  uint16_t __t1997t__values__unsafe_offset=0;
  uint16_t __t1997t__values__unsafe_align=0;
  char __t1998t____t1906t____t517t__=0;
  char* __t1999t__keys__unsafe_ptr=0;
  uint64_t __t1999t__keys__unsafe_size=0;
  uint16_t __t1999t__keys__unsafe_offset=0;
  uint16_t __t1999t__keys__unsafe_align=0;
  char* __t1999t__values__unsafe_ptr=0;
  uint64_t __t1999t__values__unsafe_size=0;
  uint16_t __t1999t__values__unsafe_offset=0;
  uint16_t __t1999t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2001t__=0;
  char* __t2003t__unsafe_ptr=0;
  uint64_t __t2003t__dat__pos=0;
  uint64_t __t2003t__dat__length=0;
  char __t2003t__dat__first=0;
  char* __t2004t__unsafe_ptr=0;
  uint64_t __t2004t__dat__pos=0;
  uint64_t __t2004t__dat__length=0;
  char __t2004t__dat__first=0;
  char* __t2006t__=0;
  char* __t2008t__unsafe_ptr=0;
  uint64_t __t2008t__dat__pos=0;
  uint64_t __t2008t__dat__length=0;
  char __t2008t__dat__first=0;
  char* __t2009t__unsafe_ptr=0;
  uint64_t __t2009t__dat__pos=0;
  uint64_t __t2009t__dat__length=0;
  char __t2009t__dat__first=0;
  char* __t2010t__buf__unsafe_ptr=0;
  uint64_t __t2010t__buf__unsafe_size=0;
  uint16_t __t2010t__buf__unsafe_offset=0;
  uint16_t __t2010t__buf__unsafe_align=0;
  uint64_t __t2010t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t2011t=0;
  char* __t2012t__unsafe_ptr=0;
  uint64_t __t2012t__dat__pos=0;
  uint64_t __t2012t__dat__length=0;
  char __t2012t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1984t(&__t1993t__unsafe_ptr,&__t1993t__unsafe_size,&__t1993t__unsafe_offset,&__t1993t__unsafe_align);
  __t1994t=128;
  __t_errcode=alloc__t515t(&__t1993t__unsafe_ptr,&__t1993t__unsafe_size,&__t1993t__unsafe_offset,&__t1993t__unsafe_align,__t1994t,&__t1995t__unsafe_ptr,&__t1995t__unsafe_size,&__t1995t__unsafe_offset,&__t1995t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1899t(&__t1995t__unsafe_ptr,&__t1995t__unsafe_size,&__t1995t__unsafe_offset,&__t1995t__unsafe_align,&__t1997t__keys__unsafe_ptr,&__t1997t__keys__unsafe_size,&__t1997t__keys__unsafe_offset,&__t1997t__keys__unsafe_align,&__t1997t__values__unsafe_ptr,&__t1997t__values__unsafe_size,&__t1997t__values__unsafe_offset,&__t1997t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1999t__keys__unsafe_ptr=__t1997t__keys__unsafe_ptr;
  __t1999t__keys__unsafe_size=__t1997t__keys__unsafe_size;
  __t1999t__keys__unsafe_offset=__t1997t__keys__unsafe_offset;
  __t1999t__keys__unsafe_align=__t1997t__keys__unsafe_align;
  __t1999t__values__unsafe_ptr=__t1997t__values__unsafe_ptr;
  __t1999t__values__unsafe_size=__t1997t__values__unsafe_size;
  __t1999t__values__unsafe_offset=__t1997t__values__unsafe_offset;
  __t1999t__values__unsafe_align=__t1997t__values__unsafe_align;
  __t_errcode=mutget__t1923t(&__t1999t__keys__unsafe_ptr,&__t1999t__keys__unsafe_size,&__t1999t__keys__unsafe_offset,&__t1999t__keys__unsafe_align,&__t1999t__values__unsafe_ptr,&__t1999t__values__unsafe_size,&__t1999t__values__unsafe_offset,&__t1999t__values__unsafe_align,__t2000t,&__t2001t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t2002t,&__t2003t__unsafe_ptr,&__t2003t__dat__pos,&__t2003t__dat__length,&__t2003t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t744t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2003t__unsafe_ptr,__t2003t__dat__pos,__t2003t__dat__length,__t2003t__dat__first,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2001t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2001t__,&__t2004t__unsafe_ptr,8);
  memcpy(__t2001t__+8,&__t2004t__dat__pos,8);
  memcpy(__t2001t__+16,&__t2004t__dat__length,8);
  memcpy(__t2001t__+24,&__t2004t__dat__first,1);
  __t_errcode=mutget__t1923t(&__t1999t__keys__unsafe_ptr,&__t1999t__keys__unsafe_size,&__t1999t__keys__unsafe_offset,&__t1999t__keys__unsafe_align,&__t1999t__values__unsafe_ptr,&__t1999t__values__unsafe_size,&__t1999t__values__unsafe_offset,&__t1999t__values__unsafe_align,__t2005t,&__t2006t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t2007t,&__t2008t__unsafe_ptr,&__t2008t__dat__pos,&__t2008t__dat__length,&__t2008t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t744t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2008t__unsafe_ptr,__t2008t__dat__pos,__t2008t__dat__length,__t2008t__dat__first,&__t2009t__unsafe_ptr,&__t2009t__dat__pos,&__t2009t__dat__length,&__t2009t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2006t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2006t__,&__t2009t__unsafe_ptr,8);
  memcpy(__t2006t__+8,&__t2009t__dat__pos,8);
  memcpy(__t2006t__+16,&__t2009t__dat__length,8);
  memcpy(__t2006t__+24,&__t2009t__dat__first,1);
  bufpos__t724t(&__t1999t__keys__unsafe_ptr,&__t1999t__keys__unsafe_size,&__t1999t__keys__unsafe_offset,&__t1999t__keys__unsafe_align,&__t2010t__buf__unsafe_ptr,&__t2010t__buf__unsafe_size,&__t2010t__buf__unsafe_offset,&__t2010t__buf__unsafe_align,&__t2010t__pos);
  it__pos=__t2010t__pos;
  while(1){
  __t_complain=next__t1941t(__t1999t__keys__unsafe_ptr,__t1999t__keys__unsafe_size,__t1999t__keys__unsafe_offset,__t1999t__keys__unsafe_align,&it__pos,&__t2012t__unsafe_ptr,&__t2012t__dat__pos,&__t2012t__dat__length,&__t2012t__dat__first);
  __t2011t=__t_complain;
  key__unsafe_ptr=__t2012t__unsafe_ptr;
  key__dat__pos=__t2012t__dat__pos;
  key__dat__length=__t2012t__dat__length;
  key__dat__first=__t2012t__dat__first;
  __t2011t=__t2011t==0;
  if(!__t2011t){
  break;
  }
  print__t786t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t1999t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1999t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1999t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1999t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1999t__values__unsafe_ptr;
  map__values__unsafe_size=__t1999t__values__unsafe_size;
  map__values__unsafe_offset=__t1999t__values__unsafe_offset;
  map__values__unsafe_align=__t1999t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(map__keys__unsafe_ptr,&__t1998t____t1906t____t517t__);
  if(__t1998t____t1906t____t517t__){
  free__t508t(&map__keys__unsafe_ptr);
  }
  exists__t442t(map__values__unsafe_ptr,&__t1996t____t517t__);
  if(__t1996t____t517t__){
  free__t508t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2181t=buf__buf__unsafe_ptr;
  *__t2182t=buf__buf__unsafe_size;
  *__t2183t=buf__buf__unsafe_offset;
  *__t2184t=buf__buf__unsafe_align;
  *__t2185t=buf__pos;
  *__t2186t=map__keys__unsafe_ptr;
  *__t2187t=map__keys__unsafe_size;
  *__t2188t=map__keys__unsafe_offset;
  *__t2189t=map__keys__unsafe_align;
  *__t2190t=map__values__unsafe_ptr;
  *__t2191t=map__values__unsafe_size;
  *__t2192t=map__values__unsafe_offset;
  *__t2193t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2014t(char** __t2194t, uint64_t* __t2195t, uint16_t* __t2196t, uint16_t* __t2197t, char** __t2198t, uint64_t* __t2199t, uint16_t* __t2200t, uint16_t* __t2201t, char** __t2202t, uint64_t* __t2203t, uint16_t* __t2204t, uint16_t* __t2205t, uint64_t* __t2206t) {
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__unsafe_size=0;
  uint16_t __t2017t__unsafe_offset=0;
  uint16_t __t2017t__unsafe_align=0;
  uint64_t __t2018t=0;
  uint64_t __t2019t__=0;
  char* __t2020t__unsafe_ptr=0;
  uint64_t __t2020t__unsafe_size=0;
  uint16_t __t2020t__unsafe_offset=0;
  uint16_t __t2020t__unsafe_align=0;
  char __t2021t____t517t__=0;
  char* __t2022t__buf__unsafe_ptr=0;
  uint64_t __t2022t__buf__unsafe_size=0;
  uint16_t __t2022t__buf__unsafe_offset=0;
  uint16_t __t2022t__buf__unsafe_align=0;
  uint64_t __t2022t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2023t__keys__unsafe_ptr=0;
  uint64_t __t2023t__keys__unsafe_size=0;
  uint16_t __t2023t__keys__unsafe_offset=0;
  uint16_t __t2023t__keys__unsafe_align=0;
  char* __t2023t__values__unsafe_ptr=0;
  uint64_t __t2023t__values__unsafe_size=0;
  uint16_t __t2023t__values__unsafe_offset=0;
  uint16_t __t2023t__values__unsafe_align=0;
  char __t2024t____t1996t____t517t__=0;
  char __t2024t____t1998t____t1906t____t517t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2015t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align);
  __t2018t=4;
  KB__t486t(__t2018t,&__t2019t__);
  __t_errcode=alloc__t515t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align,__t2019t__,&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t724t(&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align,&__t2022t__buf__unsafe_ptr,&__t2022t__buf__unsafe_size,&__t2022t__buf__unsafe_offset,&__t2022t__buf__unsafe_align,&__t2022t__pos);
  buf__buf__unsafe_ptr=__t2022t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2022t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2022t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2022t__buf__unsafe_align;
  buf__pos=__t2022t__pos;
  __t_errcode=test__t1992t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2023t__keys__unsafe_ptr,&__t2023t__keys__unsafe_size,&__t2023t__keys__unsafe_offset,&__t2023t__keys__unsafe_align,&__t2023t__values__unsafe_ptr,&__t2023t__values__unsafe_size,&__t2023t__values__unsafe_offset,&__t2023t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2023t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2023t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2023t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2023t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2023t__values__unsafe_ptr;
  map__values__unsafe_size=__t2023t__values__unsafe_size;
  map__values__unsafe_offset=__t2023t__values__unsafe_offset;
  map__values__unsafe_align=__t2023t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(map__keys__unsafe_ptr,&__t2024t____t1998t____t1906t____t517t__);
  if(__t2024t____t1998t____t1906t____t517t__){
  free__t508t(&map__keys__unsafe_ptr);
  }
  exists__t442t(map__values__unsafe_ptr,&__t2024t____t1996t____t517t__);
  if(__t2024t____t1996t____t517t__){
  free__t508t(&map__values__unsafe_ptr);
  }
  exists__t442t(buf__buf__unsafe_ptr,&__t2021t____t517t__);
  if(__t2021t____t517t__){
  free__t508t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2194t=map__keys__unsafe_ptr;
  *__t2195t=map__keys__unsafe_size;
  *__t2196t=map__keys__unsafe_offset;
  *__t2197t=map__keys__unsafe_align;
  *__t2198t=map__values__unsafe_ptr;
  *__t2199t=map__values__unsafe_size;
  *__t2200t=map__values__unsafe_offset;
  *__t2201t=map__values__unsafe_align;
  *__t2202t=buf__buf__unsafe_ptr;
  *__t2203t=buf__buf__unsafe_size;
  *__t2204t=buf__buf__unsafe_offset;
  *__t2205t=buf__buf__unsafe_align;
  *__t2206t=buf__pos;
  
  return __t_errcode;
}

int raw__t1520t(const char* r, char** __t2207t, uint64_t* __t2208t, uint64_t* __t2209t, char* __t2210t) {
  char* __t1521t__unsafe_ptr=0;
  uint64_t __t1521t__dat__pos=0;
  uint64_t __t1521t__dat__length=0;
  char __t1521t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(r,&__t1521t__unsafe_ptr,&__t1521t__dat__pos,&__t1521t__dat__length,&__t1521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2207t=__t1521t__unsafe_ptr;
  *__t2208t=__t1521t__dat__pos;
  *__t2209t=__t1521t__dat__length;
  *__t2210t=__t1521t__dat__first;
  
  return __t_errcode;
}

int find__t1564t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2211t) {
  char* __t1565t__unsafe_ptr=0;
  uint64_t __t1565t__dat__pos=0;
  uint64_t __t1565t__dat__length=0;
  char __t1565t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1566t__=0;
  uint64_t __t1567t=0;
  uint64_t __t1568t=0;
  char* __t1569t__=0;
  char* __t1570t__s__unsafe_ptr=0;
  uint64_t __t1570t__s__dat__pos=0;
  uint64_t __t1570t__s__dat__length=0;
  char __t1570t__s__dat__first=0;
  uint64_t __t1570t__cost=0;
  char* __t1571t__unsafe_ptr=0;
  uint64_t __t1571t__dat__pos=0;
  uint64_t __t1571t__dat__length=0;
  char __t1571t__dat__first=0;
  int __t1572t=0;
  int __t1573t__=0;
  uint64_t __t1574t__=0;
  uint64_t n=0;
  uint64_t __t1575t__=0;
  uint64_t pos=0;
  uint64_t __t1576t__from=0;
  uint64_t __t1576t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1577t=0;
  uint64_t __t1578t__=0;
  uint64_t i=0;
  uint64_t __t1579t__=0;
  uint64_t __t1580t=0;
  uint64_t idx=0;
  char __t1581t__=0;
  uint64_t __t1582t__=0;
  uint64_t __t1583t=0;
  char __t1584t__=0;
  char* __t1585t__=0;
  char* __t1586t__s__unsafe_ptr=0;
  uint64_t __t1586t__s__dat__pos=0;
  uint64_t __t1586t__s__dat__length=0;
  char __t1586t__s__dat__first=0;
  uint64_t __t1586t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1587t__unsafe_ptr=0;
  uint64_t __t1587t__dat__pos=0;
  uint64_t __t1587t__dat__length=0;
  char __t1587t__dat__first=0;
  char __t1588t__=0;
  char* __t1589t__unsafe_ptr=0;
  uint64_t __t1589t__dat__pos=0;
  uint64_t __t1589t__dat__length=0;
  char __t1589t__dat__first=0;
  char __t1590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1518t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1565t__unsafe_ptr,&__t1565t__dat__pos,&__t1565t__dat__length,&__t1565t__dat__first);
  k__unsafe_ptr=__t1565t__unsafe_ptr;
  k__dat__pos=__t1565t__dat__pos;
  k__dat__length=__t1565t__dat__length;
  k__dat__first=__t1565t__dat__first;
  is_zero__t1522t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1566t__);
  if(__t1566t__){
  __t1567t=0;
  goto __t_return;
  }
  __t1568t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1568t,&__t1569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1569t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1570t__s__unsafe_ptr,__t1569t__,8);
  memcpy(&__t1570t__s__dat__pos,__t1569t__+8,8);
  memcpy(&__t1570t__s__dat__length,__t1569t__+16,8);
  memcpy(&__t1570t__s__dat__first,__t1569t__+24,1);
  memcpy(&__t1570t__cost,__t1569t__+25,8);
  raw__t1516t(__t1570t__s__unsafe_ptr,__t1570t__s__dat__pos,__t1570t__s__dat__length,__t1570t__s__dat__first,__t1570t__cost,&__t1571t__unsafe_ptr,&__t1571t__dat__pos,&__t1571t__dat__length,&__t1571t__dat__first);
  not__t36t(__t1572t,&__t1573t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1574t__);
  n=__t1574t__;
  __t_errcode=hash__t1467t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1575t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1575t__;
  range__t467t(n,&__t1576t__from,&__t1576t__to);
  iter__from=__t1576t__from;
  iter__to=__t1576t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1578t__);
  __t1577t=__t_complain;
  i=__t1578t__;
  __t1577t=__t1577t==0;
  if(!__t1577t){
  break;
  }
  add__t174t(pos,i,&__t1579t__);
  __t1580t=__t1579t__;
  idx=__t1580t;
  ge__t323t(idx,n,&__t1581t__);
  if(__t1581t__){
  __t_errcode=sub__t351t(idx,n,&__t1582t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1582t__;
  }
  __t1583t=0;
  eq__t119t(idx,__t1583t,&__t1584t__);
  if(__t1584t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1585t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1585t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1586t__s__unsafe_ptr,__t1585t__,8);
  memcpy(&__t1586t__s__dat__pos,__t1585t__+8,8);
  memcpy(&__t1586t__s__dat__length,__t1585t__+16,8);
  memcpy(&__t1586t__s__dat__first,__t1585t__+24,1);
  memcpy(&__t1586t__cost,__t1585t__+25,8);
  entry__s__unsafe_ptr=__t1586t__s__unsafe_ptr;
  entry__s__dat__pos=__t1586t__s__dat__pos;
  entry__s__dat__length=__t1586t__s__dat__length;
  entry__s__dat__first=__t1586t__s__dat__first;
  entry__cost=__t1586t__cost;
  raw__t1516t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1587t__unsafe_ptr,&__t1587t__dat__pos,&__t1587t__dat__length,&__t1587t__dat__first);
  is_zero__t1522t(__t1587t__unsafe_ptr,__t1587t__dat__pos,__t1587t__dat__length,__t1587t__dat__first,&__t1588t__);
  if(__t1588t__){
  continue;
  }
  raw__t1516t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1589t__unsafe_ptr,&__t1589t__dat__pos,&__t1589t__dat__length,&__t1589t__dat__first);
  eq__t829t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1589t__unsafe_ptr,__t1589t__dat__pos,__t1589t__dat__length,__t1589t__dat__first,&__t1590t__);
  if(__t1590t__){
  __t1567t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2211t=__t1567t;
  
  return __t_errcode;
}

int get__t1915t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2212t) {
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__dat__pos=0;
  uint64_t __t1916t__dat__length=0;
  char __t1916t__dat__first=0;
  uint64_t __t1917t__=0;
  char* __t1918t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1520t(key,&__t1916t__unsafe_ptr,&__t1916t__dat__pos,&__t1916t__dat__length,&__t1916t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1564t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1916t__unsafe_ptr,__t1916t__dat__pos,__t1916t__dat__length,__t1916t__dat__first,&__t1917t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t597t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1917t__,&__t1918t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2212t=__t1918t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2025t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2026t__=0;
  char* __t2027t____t635t__unsafe_ptr=0;
  uint64_t __t2027t____t635t__dat__pos=0;
  uint64_t __t2027t____t635t__dat__length=0;
  char __t2027t____t635t__dat__first=0;
  char* __t2029t__=0;
  char* __t2030t____t635t__unsafe_ptr=0;
  uint64_t __t2030t____t635t__dat__pos=0;
  uint64_t __t2030t____t635t__dat__length=0;
  char __t2030t____t635t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1915t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2000t,&__t2026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2027t____t635t__unsafe_ptr,__t2026t__,8);
  memcpy(&__t2027t____t635t__dat__pos,__t2026t__+8,8);
  memcpy(&__t2027t____t635t__dat__length,__t2026t__+16,8);
  memcpy(&__t2027t____t635t__dat__first,__t2026t__+24,1);
  print__t786t(__t2027t____t635t__unsafe_ptr,__t2027t____t635t__dat__pos,__t2027t____t635t__dat__length,__t2027t____t635t__dat__first);
  __t_errcode=get__t1915t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2005t,&__t2029t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2029t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2030t____t635t__unsafe_ptr,__t2029t__,8);
  memcpy(&__t2030t____t635t__dat__pos,__t2029t__+8,8);
  memcpy(&__t2030t____t635t__dat__length,__t2029t__+16,8);
  memcpy(&__t2030t____t635t__dat__first,__t2029t__+24,1);
  print__t786t(__t2030t____t635t__unsafe_ptr,__t2030t____t635t__dat__pos,__t2030t____t635t__dat__length,__t2030t____t635t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2032t() {
  char* __t2034t__map__keys__unsafe_ptr=0;
  uint64_t __t2034t__map__keys__unsafe_size=0;
  uint16_t __t2034t__map__keys__unsafe_offset=0;
  uint16_t __t2034t__map__keys__unsafe_align=0;
  char* __t2034t__map__values__unsafe_ptr=0;
  uint64_t __t2034t__map__values__unsafe_size=0;
  uint16_t __t2034t__map__values__unsafe_offset=0;
  uint16_t __t2034t__map__values__unsafe_align=0;
  char* __t2034t__buf__buf__unsafe_ptr=0;
  uint64_t __t2034t__buf__buf__unsafe_size=0;
  uint16_t __t2034t__buf__buf__unsafe_offset=0;
  uint16_t __t2034t__buf__buf__unsafe_align=0;
  uint64_t __t2034t__buf__pos=0;
  char __t2035t____t2021t____t517t__=0;
  char __t2035t____t2024t____t1996t____t517t__=0;
  char __t2035t____t2024t____t1998t____t1906t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test2__t2014t(&__t2034t__map__keys__unsafe_ptr,&__t2034t__map__keys__unsafe_size,&__t2034t__map__keys__unsafe_offset,&__t2034t__map__keys__unsafe_align,&__t2034t__map__values__unsafe_ptr,&__t2034t__map__values__unsafe_size,&__t2034t__map__values__unsafe_offset,&__t2034t__map__values__unsafe_align,&__t2034t__buf__buf__unsafe_ptr,&__t2034t__buf__buf__unsafe_size,&__t2034t__buf__buf__unsafe_offset,&__t2034t__buf__buf__unsafe_align,&__t2034t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2025t(__t2034t__map__keys__unsafe_ptr,__t2034t__map__keys__unsafe_size,__t2034t__map__keys__unsafe_offset,__t2034t__map__keys__unsafe_align,__t2034t__map__values__unsafe_ptr,__t2034t__map__values__unsafe_size,__t2034t__map__values__unsafe_offset,__t2034t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t2034t__map__keys__unsafe_ptr,&__t2035t____t2024t____t1998t____t1906t____t517t__);
  if(__t2035t____t2024t____t1998t____t1906t____t517t__){
  free__t508t(&__t2034t__map__keys__unsafe_ptr);
  }
  exists__t442t(__t2034t__map__values__unsafe_ptr,&__t2035t____t2024t____t1996t____t517t__);
  if(__t2035t____t2024t____t1996t____t517t__){
  free__t508t(&__t2034t__map__values__unsafe_ptr);
  }
  exists__t442t(__t2034t__buf__buf__unsafe_ptr,&__t2035t____t2021t____t517t__);
  if(__t2035t____t2021t____t517t__){
  free__t508t(&__t2034t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2032t();return 0;}