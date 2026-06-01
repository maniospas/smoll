#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
const char* const __t2000t="hello";
const char* const __t2007t="it's a me, manio.";
const char* const __t2005t="manio";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2015t(char** __t2036t, uint64_t* __t2037t, uint16_t* __t2038t, uint16_t* __t2039t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2036t=unsafe_ptr;
  *__t2037t=unsafe_size;
  *__t2038t=unsafe_offset;
  *__t2039t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2040t) {
  int value=0;
  *__t2040t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2041t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2041t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2042t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2042t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2043t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) void KB__t483t(uint64_t x, uint64_t* __t2044t) {
  uint64_t __t484t=0;
  uint64_t __t485t__=0;
  __t484t=1024;
  mul__t198t(x,__t484t,&__t485t__);
  goto __t_return;
  __t_return:
  *__t2044t=__t485t__;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2045t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2045t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t2046t) {
  char* allocated=*__t2046t;
  if(allocated){
  free(allocated);
  }
  *__t2046t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2047t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2047t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2048t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2048t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2049t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2049t=value;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2050t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2050t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t2051t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2051t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t2052t, uint64_t* __t2053t, uint16_t* __t2054t, uint16_t* __t2055t, uint64_t size, char** __t2056t, uint64_t* __t2057t, uint16_t* __t2058t, uint16_t* __t2059t) {
  char* buffer__unsafe_ptr=*__t2052t;
  uint64_t buffer__unsafe_size=*__t2053t;
  uint16_t buffer__unsafe_offset=*__t2054t;
  uint16_t buffer__unsafe_align=*__t2055t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2052t=buffer__unsafe_ptr;
  *__t2053t=buffer__unsafe_size;
  *__t2054t=buffer__unsafe_offset;
  *__t2055t=buffer__unsafe_align;
  *__t2056t=buffer__unsafe_ptr;
  *__t2057t=buffer__unsafe_size;
  *__t2058t=buffer__unsafe_offset;
  *__t2059t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t721t(char** __t2060t, uint64_t* __t2061t, uint16_t* __t2062t, uint16_t* __t2063t, char** __t2064t, uint64_t* __t2065t, uint16_t* __t2066t, uint16_t* __t2067t, uint64_t* __t2068t) {
  char* buf__unsafe_ptr=*__t2060t;
  uint64_t buf__unsafe_size=*__t2061t;
  uint16_t buf__unsafe_offset=*__t2062t;
  uint16_t buf__unsafe_align=*__t2063t;
  uint64_t __t722t=0;
  uint64_t __t723t=0;
  uint64_t pos=0;
  __t722t=0;
  __t723t=__t722t;
  pos=__t723t;
  goto __t_return;
  __t_return:
  *__t2060t=buf__unsafe_ptr;
  *__t2061t=buf__unsafe_size;
  *__t2062t=buf__unsafe_offset;
  *__t2063t=buf__unsafe_align;
  *__t2064t=buf__unsafe_ptr;
  *__t2065t=buf__unsafe_size;
  *__t2066t=buf__unsafe_offset;
  *__t2067t=buf__unsafe_align;
  *__t2068t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1984t(char** __t2069t, uint64_t* __t2070t, uint16_t* __t2071t, uint16_t* __t2072t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2069t=unsafe_ptr;
  *__t2070t=unsafe_size;
  *__t2071t=unsafe_offset;
  *__t2072t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1900t(char** __t2073t, uint64_t* __t2074t, uint16_t* __t2075t, uint16_t* __t2076t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2073t=unsafe_ptr;
  *__t2074t=unsafe_size;
  *__t2075t=unsafe_offset;
  *__t2076t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2077t) {
  goto __t_return;
  __t_return:
  *__t2077t=buffer__unsafe_size;
}

int strmap__t1899t(char** __t2078t, uint64_t* __t2079t, uint16_t* __t2080t, uint16_t* __t2081t, char** __t2082t, uint64_t* __t2083t, uint16_t* __t2084t, uint16_t* __t2085t, char** __t2086t, uint64_t* __t2087t, uint16_t* __t2088t, uint16_t* __t2089t) {
  char* values__unsafe_ptr=*__t2078t;
  uint64_t values__unsafe_size=*__t2079t;
  uint16_t values__unsafe_offset=*__t2080t;
  uint16_t values__unsafe_align=*__t2081t;
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
  char __t1906t____t514t__=0;
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
  len__t601t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1904t__);
  __t_errcode=alloc__t512t(&__t1903t__unsafe_ptr,&__t1903t__unsafe_size,&__t1903t__unsafe_offset,&__t1903t__unsafe_align,__t1904t__,&__t1905t__unsafe_ptr,&__t1905t__unsafe_size,&__t1905t__unsafe_offset,&__t1905t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1905t__unsafe_ptr;
  keys__unsafe_size=__t1905t__unsafe_size;
  keys__unsafe_offset=__t1905t__unsafe_offset;
  keys__unsafe_align=__t1905t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(keys__unsafe_ptr,&__t1906t____t514t__);
  if(__t1906t____t514t__){
  free__t505t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t2078t=values__unsafe_ptr;
  *__t2079t=values__unsafe_size;
  *__t2080t=values__unsafe_offset;
  *__t2081t=values__unsafe_align;
  *__t2082t=keys__unsafe_ptr;
  *__t2083t=keys__unsafe_size;
  *__t2084t=keys__unsafe_offset;
  *__t2085t=keys__unsafe_align;
  *__t2086t=values__unsafe_ptr;
  *__t2087t=values__unsafe_size;
  *__t2088t=values__unsafe_offset;
  *__t2089t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t2090t, uint64_t* __t2091t, uint16_t* __t2092t, uint16_t* __t2093t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2090t=unsafe_ptr;
  *__t2091t=unsafe_size;
  *__t2092t=unsafe_offset;
  *__t2093t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2094t) {
  *__t2094t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2095t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2095t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2096t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2097t) {
  *__t2097t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2098t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2098t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2099t) {
  char __t595t__=0;
  uint64_t __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  char* __t600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t595t__);
  if(__t595t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t596t__);
  mul__t198t(i,__t596t__,&__t597t__);
  nat__t509t(buffer__unsafe_offset,&__t598t__);
  add__t174t(__t597t__,__t598t__,&__t599t__);
  add__t507t(buffer__unsafe_ptr,__t599t__,&__t600t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2099t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2100t, uint64_t* __t2101t, uint64_t* __t2102t, char* __t2103t) {
  goto __t_return;
  __t_return:
  *__t2100t=unsafe_ptr;
  *__t2101t=dat__pos;
  *__t2102t=dat__length;
  *__t2103t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2104t, uint64_t* __t2105t, uint64_t* __t2106t, char* __t2107t) {
  char* unsafe_ptr=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  char* __t640t__unsafe_ptr=0;
  uint64_t __t640t__dat__pos=0;
  uint64_t __t640t__dat__length=0;
  char __t640t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t509t(buf__unsafe_align,&__t634t__);
  __t635t=1;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t637t__);
  __t638t=0;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t629t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t640t__unsafe_ptr,&__t640t__dat__pos,&__t640t__dat__length,&__t640t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2104t=__t640t__unsafe_ptr;
  *__t2105t=__t640t__dat__pos;
  *__t2106t=__t640t__dat__length;
  *__t2107t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2108t, uint64_t* __t2109t, uint64_t* __t2110t, char* __t2111t) {
  uint64_t __t666t=0;
  char __t667t__=0;
  char* __t668t__=0;
  char __t669t__value=0;
  char first=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t666t=0;
  neq__t143t(length,__t666t,&__t667t__);
  if(__t667t__){
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t669t__value,__t668t__,1);
  first=__t669t__value;
  }
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2108t=__t670t__unsafe_ptr;
  *__t2109t=__t670t__dat__pos;
  *__t2110t=__t670t__dat__length;
  *__t2111t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t2112t, uint64_t* __t2113t, uint64_t* __t2114t, char* __t2115t) {
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t674t__=0;
  uint64_t length=0;
  uint64_t __t675t=0;
  uint64_t __t676t__=0;
  uint64_t __t677t=0;
  char* __t678t__unsafe_ptr=0;
  uint64_t __t678t__dat__pos=0;
  uint64_t __t678t__dat__length=0;
  char __t678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  __t673t__unsafe_ptr=__t672t__unsafe_ptr;
  __t673t__unsafe_size=__t672t__unsafe_size;
  __t673t__unsafe_offset=__t672t__unsafe_offset;
  __t673t__unsafe_align=__t672t__unsafe_align;
  buf__unsafe_ptr=__t673t__unsafe_ptr;
  buf__unsafe_size=__t673t__unsafe_size;
  buf__unsafe_offset=__t673t__unsafe_offset;
  buf__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t674t__);
  buf__unsafe_ptr=__t674t__;
  if(c){
  length=strlen(c);
  }
  __t675t=1;
  add__t174t(length,__t675t,&__t676t__);
  buf__unsafe_size=__t676t__;
  __t677t=0;
  __t_errcode=str__t665t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t677t,length,&__t678t__unsafe_ptr,&__t678t__dat__pos,&__t678t__dat__length,&__t678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2112t=__t678t__unsafe_ptr;
  *__t2113t=__t678t__dat__pos;
  *__t2114t=__t678t__dat__length;
  *__t2115t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1518t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2116t, uint64_t* __t2117t, uint64_t* __t2118t, char* __t2119t) {
  goto __t_return;
  __t_return:
  *__t2116t=r__unsafe_ptr;
  *__t2117t=r__dat__pos;
  *__t2118t=r__dat__length;
  *__t2119t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2120t) {
  goto __t_return;
  __t_return:
  *__t2120t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1522t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2121t) {
  uint64_t __t1523t=0;
  uint64_t __t1524t__=0;
  char __t1525t__=0;
  __t1523t=0;
  len__t679t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1524t__);
  eq__t119t(__t1523t,__t1524t__,&__t1525t__);
  goto __t_return;
  __t_return:
  *__t2121t=__t1525t__;
}

static inline __attribute__((always_inline)) void raw__t1516t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2122t, uint64_t* __t2123t, uint64_t* __t2124t, char* __t2125t) {
  goto __t_return;
  __t_return:
  *__t2122t=r__s__unsafe_ptr;
  *__t2123t=r__s__dat__pos;
  *__t2124t=r__s__dat__length;
  *__t2125t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t2126t, uint64_t* __t2127t) {
  int __t465t=0;
  uint64_t __t466t=0;
  uint64_t _from=0;
  uint64_t __t467t=0;
  uint64_t from=0;
  __t466t=0;
  _from=__t466t;
  __t467t=_from;
  from=__t467t;
  goto __t_return;
  __t_return:
  *__t2126t=from;
  *__t2127t=to;
}

static inline __attribute__((always_inline)) int next__t473t(uint64_t* __t2128t, uint64_t r__to, uint64_t* __t2129t) {
  uint64_t r__from=*__t2128t;
  char __t474t__=0;
  uint64_t ret=0;
  uint64_t __t475t=0;
  uint64_t __t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t474t__);
  if(__t474t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t475t=1;
  add__t174t(ret,__t475t,&__t476t__);
  r__from=__t476t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2128t=r__from;
  *__t2129t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t440t(uint64_t value, uint64_t* __t2130t) {
  goto __t_return;
  __t_return:
  *__t2130t=value;
}

static inline __attribute__((always_inline)) void lshift__t450t(uint64_t x__value, uint64_t y, uint64_t* __t2131t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=(x__value<<y);
  bits__t440t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t2131t=__t451t__value;
}

static inline __attribute__((always_inline)) void nat__t435t(uint64_t x, uint64_t* __t2132t) {
  int __t436t=0;
  int __t437t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2132t=value;
}

static inline __attribute__((always_inline)) void nat__t446t(uint64_t x__value, uint64_t* __t2133t) {
  uint64_t __t447t__=0;
  nat__t435t(x__value,&__t447t__);
  goto __t_return;
  __t_return:
  *__t2133t=__t447t__;
}

static inline __attribute__((always_inline)) void get__t822t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2134t) {
  uint64_t __t823t__=0;
  char* __t824t__=0;
  add__t174t(s__dat__pos,i,&__t823t__);
  add__t507t(s__unsafe_ptr,__t823t__,&__t824t__);
  goto __t_return;
  __t_return:
  *__t2134t=__t824t__;
}

static inline __attribute__((always_inline)) void nat__t438t(char x, uint64_t* __t2135t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2135t=value;
}

static inline __attribute__((always_inline)) int mod__t227t(uint64_t x, uint64_t y, uint64_t* __t2136t) {
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
  *__t2136t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1467t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2137t) {
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
  len__t679t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1470t__);
  range__t464t(__t1470t__,&__t1471t__from,&__t1471t__to);
  iter__from=__t1471t__from;
  iter__to=__t1471t__to;
  while(1){
  __t_complain=next__t473t(&iter__from,iter__to,&__t1473t__);
  __t1472t=__t_complain;
  i=__t1473t__;
  __t1472t=__t1472t==0;
  if(!__t1472t){
  break;
  }
  bits__t440t(h,&__t1474t__value);
  __t1475t=5;
  lshift__t450t(__t1474t__value,__t1475t,&__t1476t__value);
  nat__t446t(__t1476t__value,&__t1477t__);
  add__t174t(__t1477t__,h,&__t1478t__);
  get__t822t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1479t__);
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1480t__value,__t1479t__,1);
  nat__t438t(__t1480t__value,&__t1481t__);
  add__t174t(__t1478t__,__t1481t__,&__t1482t__);
  h=__t1482t__;
  }
  __t_errcode=mod__t227t(h,size,&__t1483t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2137t=__t1483t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2138t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2138t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2139t) {
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
  *__t2139t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t2140t, uint64_t* __t2141t, uint16_t* __t2142t, uint16_t* __t2143t, uint64_t i, char** __t2144t) {
  char* buffer__unsafe_ptr=*__t2140t;
  uint64_t buffer__unsafe_size=*__t2141t;
  uint16_t buffer__unsafe_offset=*__t2142t;
  uint16_t buffer__unsafe_align=*__t2143t;
  char __t588t__=0;
  uint64_t __t589t__=0;
  uint64_t __t590t__=0;
  uint64_t __t591t__=0;
  uint64_t __t592t__=0;
  char* __t593t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t588t__);
  if(__t588t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t589t__);
  mul__t198t(i,__t589t__,&__t590t__);
  nat__t509t(buffer__unsafe_offset,&__t591t__);
  add__t174t(__t590t__,__t591t__,&__t592t__);
  add__t507t(buffer__unsafe_ptr,__t592t__,&__t593t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2140t=buffer__unsafe_ptr;
  *__t2141t=buffer__unsafe_size;
  *__t2142t=buffer__unsafe_offset;
  *__t2143t=buffer__unsafe_align;
  *__t2144t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t683t(char x, char y, char* __t2145t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2145t=z;
}

static inline __attribute__((always_inline)) void eq__t826t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2146t) {
  uint64_t __t827t__=0;
  uint64_t n=0;
  uint64_t __t828t__=0;
  char __t829t__=0;
  char __t830t=0;
  char __t831t__=0;
  char __t832t=0;
  char z=0;
  len__t679t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t827t__);
  n=__t827t__;
  len__t679t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t828t__);
  neq__t143t(n,__t828t__,&__t829t__);
  if(__t829t__){
  __t830t=0;
  goto __t_return;
  }
  neq__t683t(x__dat__first,y__dat__first,&__t831t__);
  if(__t831t__){
  __t832t=0;
  __t830t=__t832t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t830t=z;
  goto __t_return;
  __t_return:
  *__t2146t=__t830t;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2147t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2147t=z;
}

int at__t1798t(char** __t2148t, uint64_t* __t2149t, uint16_t* __t2150t, uint16_t* __t2151t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2152t) {
  char* data__unsafe_ptr=*__t2148t;
  uint64_t data__unsafe_size=*__t2149t;
  uint16_t data__unsafe_offset=*__t2150t;
  uint16_t data__unsafe_align=*__t2151t;
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
  __t_errcode=get__t594t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1802t,&__t1803t__);
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
  len__t601t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1808t__);
  n=__t1808t__;
  __t_errcode=hash__t1467t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1809t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1809t__;
  range__t464t(n,&__t1810t__from,&__t1810t__to);
  iter__from=__t1810t__from;
  iter__to=__t1810t__to;
  while(1){
  __t_complain=next__t473t(&iter__from,iter__to,&__t1812t__);
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
  __t_errcode=get__t594t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1819t__);
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
  __t_errcode=mutget__t587t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1823t__);
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
  eq__t826t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1824t__unsafe_ptr,__t1824t__dat__pos,__t1824t__dat__length,__t1824t__dat__first,&__t1825t__);
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
  __t_errcode=get__t594t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1827t__);
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
  __t_errcode=mutget__t587t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1830t__);
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
  *__t2148t=data__unsafe_ptr;
  *__t2149t=data__unsafe_size;
  *__t2150t=data__unsafe_offset;
  *__t2151t=data__unsafe_align;
  *__t2152t=__t1801t;
  
  return __t_errcode;
}

int mutget__t1923t(char** __t2153t, uint64_t* __t2154t, uint16_t* __t2155t, uint16_t* __t2156t, char** __t2157t, uint64_t* __t2158t, uint16_t* __t2159t, uint16_t* __t2160t, const char* key, char** __t2161t) {
  char* keys__unsafe_ptr=*__t2153t;
  uint64_t keys__unsafe_size=*__t2154t;
  uint16_t keys__unsafe_offset=*__t2155t;
  uint16_t keys__unsafe_align=*__t2156t;
  char* values__unsafe_ptr=*__t2157t;
  uint64_t values__unsafe_size=*__t2158t;
  uint16_t values__unsafe_offset=*__t2159t;
  uint16_t values__unsafe_align=*__t2160t;
  char* __t1924t__unsafe_ptr=0;
  uint64_t __t1924t__dat__pos=0;
  uint64_t __t1924t__dat__length=0;
  char __t1924t__dat__first=0;
  uint64_t __t1925t__=0;
  char* __t1926t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(key,&__t1924t__unsafe_ptr,&__t1924t__dat__pos,&__t1924t__dat__length,&__t1924t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1798t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1924t__unsafe_ptr,__t1924t__dat__pos,__t1924t__dat__length,__t1924t__dat__first,&__t1925t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t587t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1925t__,&__t1926t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2153t=keys__unsafe_ptr;
  *__t2154t=keys__unsafe_size;
  *__t2155t=keys__unsafe_offset;
  *__t2156t=keys__unsafe_align;
  *__t2157t=values__unsafe_ptr;
  *__t2158t=values__unsafe_size;
  *__t2159t=values__unsafe_offset;
  *__t2160t=values__unsafe_align;
  *__t2161t=__t1926t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t664t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2162t, uint64_t* __t2163t, uint64_t* __t2164t, char* __t2165t) {
  goto __t_return;
  __t_return:
  *__t2162t=other__unsafe_ptr;
  *__t2163t=other__dat__pos;
  *__t2164t=other__dat__length;
  *__t2165t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t741t(char** __t2166t, uint64_t* __t2167t, uint16_t* __t2168t, uint16_t* __t2169t, uint64_t* __t2170t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2171t, uint64_t* __t2172t, uint64_t* __t2173t, char* __t2174t) {
  char* buf__unsafe_ptr=*__t2166t;
  uint64_t buf__unsafe_size=*__t2167t;
  uint16_t buf__unsafe_offset=*__t2168t;
  uint16_t buf__unsafe_align=*__t2169t;
  uint64_t pos=*__t2170t;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__dat__pos=0;
  uint64_t __t742t__dat__length=0;
  char __t742t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t743t__=0;
  uint64_t __t744t__=0;
  uint64_t next_pos=0;
  uint64_t __t745t__=0;
  char __t746t__=0;
  uint64_t __t747t=0;
  uint64_t __t748t__=0;
  uint64_t prev_pos=0;
  char* __t749t__unsafe_ptr=0;
  uint64_t __t749t__dat__pos=0;
  uint64_t __t749t__dat__length=0;
  char __t749t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t742t__unsafe_ptr,&__t742t__dat__pos,&__t742t__dat__length,&__t742t__dat__first);
  other__unsafe_ptr=__t742t__unsafe_ptr;
  other__dat__pos=__t742t__dat__pos;
  other__dat__length=__t742t__dat__length;
  other__dat__first=__t742t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t743t__);
  add__t174t(pos,__t743t__,&__t744t__);
  next_pos=__t744t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t745t__);
  gt__t275t(next_pos,__t745t__,&__t746t__);
  if(__t746t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t747t=0;
  add__t174t(pos,__t747t,&__t748t__);
  prev_pos=__t748t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t749t__unsafe_ptr,&__t749t__dat__pos,&__t749t__dat__length,&__t749t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2166t=buf__unsafe_ptr;
  *__t2167t=buf__unsafe_size;
  *__t2168t=buf__unsafe_offset;
  *__t2169t=buf__unsafe_align;
  *__t2170t=pos;
  *__t2171t=__t749t__unsafe_ptr;
  *__t2172t=__t749t__dat__pos;
  *__t2173t=__t749t__dat__length;
  *__t2174t=__t749t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1941t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2175t, char** __t2176t, uint64_t* __t2177t, uint64_t* __t2178t, char* __t2179t) {
  uint64_t pos=*__t2175t;
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
  __t_errcode=get__t594t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1946t,&__t1947t__);
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
  __t_errcode=get__t594t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1950t__);
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
  __t_errcode=get__t594t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1957t__);
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
  *__t2175t=pos;
  *__t2176t=__t1949t__unsafe_ptr;
  *__t2177t=__t1949t__dat__pos;
  *__t2178t=__t1949t__dat__length;
  *__t2179t=__t1949t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1992t(char** __t2180t, uint64_t* __t2181t, uint16_t* __t2182t, uint16_t* __t2183t, uint64_t* __t2184t, char** __t2185t, uint64_t* __t2186t, uint16_t* __t2187t, uint16_t* __t2188t, char** __t2189t, uint64_t* __t2190t, uint16_t* __t2191t, uint16_t* __t2192t) {
  char* buf__buf__unsafe_ptr=*__t2180t;
  uint64_t buf__buf__unsafe_size=*__t2181t;
  uint16_t buf__buf__unsafe_offset=*__t2182t;
  uint16_t buf__buf__unsafe_align=*__t2183t;
  uint64_t buf__pos=*__t2184t;
  char* __t1993t__unsafe_ptr=0;
  uint64_t __t1993t__unsafe_size=0;
  uint16_t __t1993t__unsafe_offset=0;
  uint16_t __t1993t__unsafe_align=0;
  uint64_t __t1994t=0;
  char* __t1995t__unsafe_ptr=0;
  uint64_t __t1995t__unsafe_size=0;
  uint16_t __t1995t__unsafe_offset=0;
  uint16_t __t1995t__unsafe_align=0;
  char __t1996t____t514t__=0;
  char* __t1997t__keys__unsafe_ptr=0;
  uint64_t __t1997t__keys__unsafe_size=0;
  uint16_t __t1997t__keys__unsafe_offset=0;
  uint16_t __t1997t__keys__unsafe_align=0;
  char* __t1997t__values__unsafe_ptr=0;
  uint64_t __t1997t__values__unsafe_size=0;
  uint16_t __t1997t__values__unsafe_offset=0;
  uint16_t __t1997t__values__unsafe_align=0;
  char __t1998t____t1906t____t514t__=0;
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
  __t_errcode=alloc__t512t(&__t1993t__unsafe_ptr,&__t1993t__unsafe_size,&__t1993t__unsafe_offset,&__t1993t__unsafe_align,__t1994t,&__t1995t__unsafe_ptr,&__t1995t__unsafe_size,&__t1995t__unsafe_offset,&__t1995t__unsafe_align);
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
  __t_errcode=str__t671t(__t2002t,&__t2003t__unsafe_ptr,&__t2003t__dat__pos,&__t2003t__dat__length,&__t2003t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t741t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2003t__unsafe_ptr,__t2003t__dat__pos,__t2003t__dat__length,__t2003t__dat__first,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
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
  __t_errcode=str__t671t(__t2007t,&__t2008t__unsafe_ptr,&__t2008t__dat__pos,&__t2008t__dat__length,&__t2008t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t741t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2008t__unsafe_ptr,__t2008t__dat__pos,__t2008t__dat__length,__t2008t__dat__first,&__t2009t__unsafe_ptr,&__t2009t__dat__pos,&__t2009t__dat__length,&__t2009t__dat__first);
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
  bufpos__t721t(&__t1999t__keys__unsafe_ptr,&__t1999t__keys__unsafe_size,&__t1999t__keys__unsafe_offset,&__t1999t__keys__unsafe_align,&__t2010t__buf__unsafe_ptr,&__t2010t__buf__unsafe_size,&__t2010t__buf__unsafe_offset,&__t2010t__buf__unsafe_align,&__t2010t__pos);
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
  print__t783t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
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
  
  __t_failure:exists__t439t(map__keys__unsafe_ptr,&__t1998t____t1906t____t514t__);
  if(__t1998t____t1906t____t514t__){
  free__t505t(&map__keys__unsafe_ptr);
  }
  exists__t439t(map__values__unsafe_ptr,&__t1996t____t514t__);
  if(__t1996t____t514t__){
  free__t505t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2180t=buf__buf__unsafe_ptr;
  *__t2181t=buf__buf__unsafe_size;
  *__t2182t=buf__buf__unsafe_offset;
  *__t2183t=buf__buf__unsafe_align;
  *__t2184t=buf__pos;
  *__t2185t=map__keys__unsafe_ptr;
  *__t2186t=map__keys__unsafe_size;
  *__t2187t=map__keys__unsafe_offset;
  *__t2188t=map__keys__unsafe_align;
  *__t2189t=map__values__unsafe_ptr;
  *__t2190t=map__values__unsafe_size;
  *__t2191t=map__values__unsafe_offset;
  *__t2192t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2014t(char** __t2193t, uint64_t* __t2194t, uint16_t* __t2195t, uint16_t* __t2196t, char** __t2197t, uint64_t* __t2198t, uint16_t* __t2199t, uint16_t* __t2200t, char** __t2201t, uint64_t* __t2202t, uint16_t* __t2203t, uint16_t* __t2204t, uint64_t* __t2205t) {
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
  char __t2021t____t514t__=0;
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
  char __t2024t____t1996t____t514t__=0;
  char __t2024t____t1998t____t1906t____t514t__=0;
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
  KB__t483t(__t2018t,&__t2019t__);
  __t_errcode=alloc__t512t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align,__t2019t__,&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t721t(&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align,&__t2022t__buf__unsafe_ptr,&__t2022t__buf__unsafe_size,&__t2022t__buf__unsafe_offset,&__t2022t__buf__unsafe_align,&__t2022t__pos);
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
  
  __t_failure:exists__t439t(map__keys__unsafe_ptr,&__t2024t____t1998t____t1906t____t514t__);
  if(__t2024t____t1998t____t1906t____t514t__){
  free__t505t(&map__keys__unsafe_ptr);
  }
  exists__t439t(map__values__unsafe_ptr,&__t2024t____t1996t____t514t__);
  if(__t2024t____t1996t____t514t__){
  free__t505t(&map__values__unsafe_ptr);
  }
  exists__t439t(buf__buf__unsafe_ptr,&__t2021t____t514t__);
  if(__t2021t____t514t__){
  free__t505t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2193t=map__keys__unsafe_ptr;
  *__t2194t=map__keys__unsafe_size;
  *__t2195t=map__keys__unsafe_offset;
  *__t2196t=map__keys__unsafe_align;
  *__t2197t=map__values__unsafe_ptr;
  *__t2198t=map__values__unsafe_size;
  *__t2199t=map__values__unsafe_offset;
  *__t2200t=map__values__unsafe_align;
  *__t2201t=buf__buf__unsafe_ptr;
  *__t2202t=buf__buf__unsafe_size;
  *__t2203t=buf__buf__unsafe_offset;
  *__t2204t=buf__buf__unsafe_align;
  *__t2205t=buf__pos;
  
  return __t_errcode;
}

int raw__t1520t(const char* r, char** __t2206t, uint64_t* __t2207t, uint64_t* __t2208t, char* __t2209t) {
  char* __t1521t__unsafe_ptr=0;
  uint64_t __t1521t__dat__pos=0;
  uint64_t __t1521t__dat__length=0;
  char __t1521t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(r,&__t1521t__unsafe_ptr,&__t1521t__dat__pos,&__t1521t__dat__length,&__t1521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2206t=__t1521t__unsafe_ptr;
  *__t2207t=__t1521t__dat__pos;
  *__t2208t=__t1521t__dat__length;
  *__t2209t=__t1521t__dat__first;
  
  return __t_errcode;
}

int find__t1564t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2210t) {
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
  __t_errcode=get__t594t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1568t,&__t1569t__);
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
  len__t601t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1574t__);
  n=__t1574t__;
  __t_errcode=hash__t1467t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1575t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1575t__;
  range__t464t(n,&__t1576t__from,&__t1576t__to);
  iter__from=__t1576t__from;
  iter__to=__t1576t__to;
  while(1){
  __t_complain=next__t473t(&iter__from,iter__to,&__t1578t__);
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
  __t_errcode=get__t594t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1585t__);
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
  eq__t826t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1589t__unsafe_ptr,__t1589t__dat__pos,__t1589t__dat__length,__t1589t__dat__first,&__t1590t__);
  if(__t1590t__){
  __t1567t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2210t=__t1567t;
  
  return __t_errcode;
}

int get__t1915t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2211t) {
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
  __t_errcode=get__t594t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1917t__,&__t1918t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2211t=__t1918t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2025t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2026t__=0;
  char* __t2027t____t651t__unsafe_ptr=0;
  uint64_t __t2027t____t651t__dat__pos=0;
  uint64_t __t2027t____t651t__dat__length=0;
  char __t2027t____t651t__dat__first=0;
  char* __t2029t__=0;
  char* __t2030t____t651t__unsafe_ptr=0;
  uint64_t __t2030t____t651t__dat__pos=0;
  uint64_t __t2030t____t651t__dat__length=0;
  char __t2030t____t651t__dat__first=0;
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
  memcpy(&__t2027t____t651t__unsafe_ptr,__t2026t__,8);
  memcpy(&__t2027t____t651t__dat__pos,__t2026t__+8,8);
  memcpy(&__t2027t____t651t__dat__length,__t2026t__+16,8);
  memcpy(&__t2027t____t651t__dat__first,__t2026t__+24,1);
  print__t783t(__t2027t____t651t__unsafe_ptr,__t2027t____t651t__dat__pos,__t2027t____t651t__dat__length,__t2027t____t651t__dat__first);
  __t_errcode=get__t1915t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2005t,&__t2029t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2029t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2030t____t651t__unsafe_ptr,__t2029t__,8);
  memcpy(&__t2030t____t651t__dat__pos,__t2029t__+8,8);
  memcpy(&__t2030t____t651t__dat__length,__t2029t__+16,8);
  memcpy(&__t2030t____t651t__dat__first,__t2029t__+24,1);
  print__t783t(__t2030t____t651t__unsafe_ptr,__t2030t____t651t__dat__pos,__t2030t____t651t__dat__length,__t2030t____t651t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2032t() {
  char* __t2033t__map__keys__unsafe_ptr=0;
  uint64_t __t2033t__map__keys__unsafe_size=0;
  uint16_t __t2033t__map__keys__unsafe_offset=0;
  uint16_t __t2033t__map__keys__unsafe_align=0;
  char* __t2033t__map__values__unsafe_ptr=0;
  uint64_t __t2033t__map__values__unsafe_size=0;
  uint16_t __t2033t__map__values__unsafe_offset=0;
  uint16_t __t2033t__map__values__unsafe_align=0;
  char* __t2033t__buf__buf__unsafe_ptr=0;
  uint64_t __t2033t__buf__buf__unsafe_size=0;
  uint16_t __t2033t__buf__buf__unsafe_offset=0;
  uint16_t __t2033t__buf__buf__unsafe_align=0;
  uint64_t __t2033t__buf__pos=0;
  char __t2034t____t2021t____t514t__=0;
  char __t2034t____t2024t____t1996t____t514t__=0;
  char __t2034t____t2024t____t1998t____t1906t____t514t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t2014t(&__t2033t__map__keys__unsafe_ptr,&__t2033t__map__keys__unsafe_size,&__t2033t__map__keys__unsafe_offset,&__t2033t__map__keys__unsafe_align,&__t2033t__map__values__unsafe_ptr,&__t2033t__map__values__unsafe_size,&__t2033t__map__values__unsafe_offset,&__t2033t__map__values__unsafe_align,&__t2033t__buf__buf__unsafe_ptr,&__t2033t__buf__buf__unsafe_size,&__t2033t__buf__buf__unsafe_offset,&__t2033t__buf__buf__unsafe_align,&__t2033t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2025t(__t2033t__map__keys__unsafe_ptr,__t2033t__map__keys__unsafe_size,__t2033t__map__keys__unsafe_offset,__t2033t__map__keys__unsafe_align,__t2033t__map__values__unsafe_ptr,__t2033t__map__values__unsafe_size,__t2033t__map__values__unsafe_offset,__t2033t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t439t(__t2033t__map__keys__unsafe_ptr,&__t2034t____t2024t____t1998t____t1906t____t514t__);
  if(__t2034t____t2024t____t1998t____t1906t____t514t__){
  free__t505t(&__t2033t__map__keys__unsafe_ptr);
  }
  exists__t439t(__t2033t__map__values__unsafe_ptr,&__t2034t____t2024t____t1996t____t514t__);
  if(__t2034t____t2024t____t1996t____t514t__){
  free__t505t(&__t2033t__map__values__unsafe_ptr);
  }
  exists__t439t(__t2033t__buf__buf__unsafe_ptr,&__t2034t____t2021t____t514t__);
  if(__t2034t____t2021t____t514t__){
  free__t505t(&__t2033t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2032t();return 0;}