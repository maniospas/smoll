#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2080t="hello";
const char* const __t2087t="it's a me, manio.";
const char* const __t2085t="manio";
const char* const __t382t="\n";
const char* const __t2082t="hello world!";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2095t(char** __t2117t, uint64_t* __t2118t, uint16_t* __t2119t, uint16_t* __t2120t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2117t=unsafe_ptr;
  *__t2118t=unsafe_size;
  *__t2119t=unsafe_offset;
  *__t2120t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2121t) {
  int value=0;
  *__t2121t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2122t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2122t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2123t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2123t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2124t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2124t=z;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2125t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2125t=__t483t__;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2126t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2126t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2127t) {
  char* allocated=*__t2127t;
  if(allocated){
  free(allocated);
  }
  *__t2127t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2128t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2128t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2129t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2129t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2130t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2130t=value;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2131t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2131t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2132t) {
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
  *__t2132t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2133t, uint64_t* __t2134t, uint16_t* __t2135t, uint16_t* __t2136t, uint64_t size, char** __t2137t, uint64_t* __t2138t, uint16_t* __t2139t, uint16_t* __t2140t) {
  char* buffer__unsafe_ptr=*__t2133t;
  uint64_t buffer__unsafe_size=*__t2134t;
  uint16_t buffer__unsafe_offset=*__t2135t;
  uint16_t buffer__unsafe_align=*__t2136t;
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
  *__t2133t=buffer__unsafe_ptr;
  *__t2134t=buffer__unsafe_size;
  *__t2135t=buffer__unsafe_offset;
  *__t2136t=buffer__unsafe_align;
  *__t2137t=buffer__unsafe_ptr;
  *__t2138t=buffer__unsafe_size;
  *__t2139t=buffer__unsafe_offset;
  *__t2140t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t, char** __t2145t, uint64_t* __t2146t, uint16_t* __t2147t, uint16_t* __t2148t, uint64_t* __t2149t) {
  char* buf__unsafe_ptr=*__t2141t;
  uint64_t buf__unsafe_size=*__t2142t;
  uint16_t buf__unsafe_offset=*__t2143t;
  uint16_t buf__unsafe_align=*__t2144t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t2141t=buf__unsafe_ptr;
  *__t2142t=buf__unsafe_size;
  *__t2143t=buf__unsafe_offset;
  *__t2144t=buf__unsafe_align;
  *__t2145t=buf__unsafe_ptr;
  *__t2146t=buf__unsafe_size;
  *__t2147t=buf__unsafe_offset;
  *__t2148t=buf__unsafe_align;
  *__t2149t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2064t(char** __t2150t, uint64_t* __t2151t, uint16_t* __t2152t, uint16_t* __t2153t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2150t=unsafe_ptr;
  *__t2151t=unsafe_size;
  *__t2152t=unsafe_offset;
  *__t2153t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1984t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2154t=unsafe_ptr;
  *__t2155t=unsafe_size;
  *__t2156t=unsafe_offset;
  *__t2157t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2158t) {
  goto __t_return;
  __t_return:
  *__t2158t=buffer__unsafe_size;
}

int strmap__t1983t(char** __t2159t, uint64_t* __t2160t, uint16_t* __t2161t, uint16_t* __t2162t, char** __t2163t, uint64_t* __t2164t, uint16_t* __t2165t, uint16_t* __t2166t, char** __t2167t, uint64_t* __t2168t, uint16_t* __t2169t, uint16_t* __t2170t) {
  char* values__unsafe_ptr=*__t2159t;
  uint64_t values__unsafe_size=*__t2160t;
  uint16_t values__unsafe_offset=*__t2161t;
  uint16_t values__unsafe_align=*__t2162t;
  char* __t1986t__unsafe_ptr=0;
  uint64_t __t1986t__unsafe_size=0;
  uint16_t __t1986t__unsafe_offset=0;
  uint16_t __t1986t__unsafe_align=0;
  char* __t1987t__unsafe_ptr=0;
  uint64_t __t1987t__unsafe_size=0;
  uint16_t __t1987t__unsafe_offset=0;
  uint16_t __t1987t__unsafe_align=0;
  uint64_t __t1988t__=0;
  char* __t1989t__unsafe_ptr=0;
  uint64_t __t1989t__unsafe_size=0;
  uint16_t __t1989t__unsafe_offset=0;
  uint16_t __t1989t__unsafe_align=0;
  char __t1990t____t534t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1984t(&__t1986t__unsafe_ptr,&__t1986t__unsafe_size,&__t1986t__unsafe_offset,&__t1986t__unsafe_align);
  __t1987t__unsafe_ptr=__t1986t__unsafe_ptr;
  __t1987t__unsafe_size=__t1986t__unsafe_size;
  __t1987t__unsafe_offset=__t1986t__unsafe_offset;
  __t1987t__unsafe_align=__t1986t__unsafe_align;
  len__t643t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1988t__);
  __t_errcode=alloc__t532t(&__t1987t__unsafe_ptr,&__t1987t__unsafe_size,&__t1987t__unsafe_offset,&__t1987t__unsafe_align,__t1988t__,&__t1989t__unsafe_ptr,&__t1989t__unsafe_size,&__t1989t__unsafe_offset,&__t1989t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1989t__unsafe_ptr;
  keys__unsafe_size=__t1989t__unsafe_size;
  keys__unsafe_offset=__t1989t__unsafe_offset;
  keys__unsafe_align=__t1989t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(keys__unsafe_ptr,&__t1990t____t534t__);
  if(__t1990t____t534t__){
  free__t503t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2159t=values__unsafe_ptr;
  *__t2160t=values__unsafe_size;
  *__t2161t=values__unsafe_offset;
  *__t2162t=values__unsafe_align;
  *__t2163t=keys__unsafe_ptr;
  *__t2164t=keys__unsafe_size;
  *__t2165t=keys__unsafe_offset;
  *__t2166t=keys__unsafe_align;
  *__t2167t=values__unsafe_ptr;
  *__t2168t=values__unsafe_size;
  *__t2169t=values__unsafe_offset;
  *__t2170t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t2171t, uint64_t* __t2172t, uint16_t* __t2173t, uint16_t* __t2174t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2171t=unsafe_ptr;
  *__t2172t=unsafe_size;
  *__t2173t=unsafe_offset;
  *__t2174t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2175t) {
  *__t2175t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2176t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2176t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2177t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2177t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2178t) {
  *__t2178t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2179t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2179t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2180t) {
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
  *__t2180t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2181t, uint64_t* __t2182t, uint64_t* __t2183t, char* __t2184t) {
  goto __t_return;
  __t_return:
  *__t2181t=unsafe_ptr;
  *__t2182t=dat__pos;
  *__t2183t=dat__length;
  *__t2184t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2185t, uint64_t* __t2186t, uint64_t* __t2187t, char* __t2188t) {
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
  *__t2185t=__t695t__unsafe_ptr;
  *__t2186t=__t695t__dat__pos;
  *__t2187t=__t695t__dat__length;
  *__t2188t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2189t, uint64_t* __t2190t, uint64_t* __t2191t, char* __t2192t) {
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
  *__t2189t=__t728t__unsafe_ptr;
  *__t2190t=__t728t__dat__pos;
  *__t2191t=__t728t__dat__length;
  *__t2192t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t2193t, uint64_t* __t2194t, uint64_t* __t2195t, char* __t2196t) {
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
  *__t2193t=__t754t__unsafe_ptr;
  *__t2194t=__t754t__dat__pos;
  *__t2195t=__t754t__dat__length;
  *__t2196t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1602t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2197t, uint64_t* __t2198t, uint64_t* __t2199t, char* __t2200t) {
  goto __t_return;
  __t_return:
  *__t2197t=r__unsafe_ptr;
  *__t2198t=r__dat__pos;
  *__t2199t=r__dat__length;
  *__t2200t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2201t) {
  goto __t_return;
  __t_return:
  *__t2201t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1606t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2202t) {
  uint64_t __t1607t=0;
  uint64_t __t1608t__=0;
  char __t1609t__=0;
  __t1607t=0;
  len__t755t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1608t__);
  eq__t120t(__t1607t,__t1608t__,&__t1609t__);
  goto __t_return;
  __t_return:
  *__t2202t=__t1609t__;
}

static inline __attribute__((always_inline)) void raw__t1600t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2203t, uint64_t* __t2204t, uint64_t* __t2205t, char* __t2206t) {
  goto __t_return;
  __t_return:
  *__t2203t=r__s__unsafe_ptr;
  *__t2204t=r__s__dat__pos;
  *__t2205t=r__s__dat__length;
  *__t2206t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t2207t, uint64_t* __t2208t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t2207t=from;
  *__t2208t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t2209t, uint64_t* __t2210t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t2209t=__t473t__from;
  *__t2210t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t2211t, uint64_t r__to, uint64_t* __t2212t) {
  uint64_t r__from=*__t2211t;
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
  *__t2211t=r__from;
  *__t2212t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t2213t) {
  goto __t_return;
  __t_return:
  *__t2213t=value;
}

static inline __attribute__((always_inline)) void lshift__t458t(uint64_t x__value, uint64_t y, uint64_t* __t2214t) {
  uint64_t z=0;
  uint64_t __t459t__value=0;
  z=(x__value<<y);
  bits__t448t(z,&__t459t__value);
  goto __t_return;
  __t_return:
  *__t2214t=__t459t__value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x, uint64_t* __t2215t) {
  int __t444t=0;
  int __t445t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2215t=value;
}

static inline __attribute__((always_inline)) void nat__t454t(uint64_t x__value, uint64_t* __t2216t) {
  uint64_t __t455t__=0;
  nat__t443t(x__value,&__t455t__);
  goto __t_return;
  __t_return:
  *__t2216t=__t455t__;
}

static inline __attribute__((always_inline)) void get__t928t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2217t) {
  uint64_t __t929t__=0;
  char* __t930t__=0;
  add__t175t(s__dat__pos,i,&__t929t__);
  add__t505t(s__unsafe_ptr,__t929t__,&__t930t__);
  goto __t_return;
  __t_return:
  *__t2217t=__t930t__;
}

static inline __attribute__((always_inline)) void nat__t446t(char x, uint64_t* __t2218t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2218t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2219t) {
  uint64_t zero=0;
  char __t229t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t120t(y,zero,&__t229t__);
  if(__t229t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2219t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1551t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2220t) {
  uint64_t __t1552t=0;
  uint64_t __t1553t=0;
  uint64_t h=0;
  uint64_t __t1554t__=0;
  uint64_t __t1555t__from=0;
  uint64_t __t1555t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1556t=0;
  uint64_t __t1557t__=0;
  uint64_t i=0;
  uint64_t __t1558t__value=0;
  uint64_t __t1559t=0;
  uint64_t __t1560t__value=0;
  uint64_t __t1561t__=0;
  uint64_t __t1562t__=0;
  char* __t1563t__=0;
  char __t1564t__value=0;
  uint64_t __t1565t__=0;
  uint64_t __t1566t__=0;
  uint64_t __t1567t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1552t=5381;
  __t1553t=__t1552t;
  h=__t1553t;
  len__t755t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1554t__);
  range__t471t(__t1554t__,&__t1555t__from,&__t1555t__to);
  iter__from=__t1555t__from;
  iter__to=__t1555t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1557t__);
  __t1556t=__t_complain;
  i=__t1557t__;
  __t1556t=__t1556t==0;
  if(!__t1556t){
  break;
  }
  bits__t448t(h,&__t1558t__value);
  __t1559t=5;
  lshift__t458t(__t1558t__value,__t1559t,&__t1560t__value);
  nat__t454t(__t1560t__value,&__t1561t__);
  add__t175t(__t1561t__,h,&__t1562t__);
  get__t928t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1563t__);
  if(!__t1563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1564t__value,__t1563t__,1);
  nat__t446t(__t1564t__value,&__t1565t__);
  add__t175t(__t1562t__,__t1565t__,&__t1566t__);
  h=__t1566t__;
  }
  __t_errcode=mod__t228t(h,size,&__t1567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2220t=__t1567t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2221t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2221t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2222t) {
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
  *__t2222t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t2223t, uint64_t* __t2224t, uint16_t* __t2225t, uint16_t* __t2226t, uint64_t i, char** __t2227t) {
  char* buffer__unsafe_ptr=*__t2223t;
  uint64_t buffer__unsafe_size=*__t2224t;
  uint16_t buffer__unsafe_offset=*__t2225t;
  uint16_t buffer__unsafe_align=*__t2226t;
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
  *__t2223t=buffer__unsafe_ptr;
  *__t2224t=buffer__unsafe_size;
  *__t2225t=buffer__unsafe_offset;
  *__t2226t=buffer__unsafe_align;
  *__t2227t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t759t(char x, char y, char* __t2228t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2228t=z;
}

static inline __attribute__((always_inline)) void eq__t816t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2229t) {
  uint64_t __t817t__=0;
  uint64_t n=0;
  uint64_t __t818t__=0;
  char __t819t__=0;
  char __t820t=0;
  char __t821t__=0;
  char __t822t=0;
  char z=0;
  len__t755t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t817t__);
  n=__t817t__;
  len__t755t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t818t__);
  neq__t144t(n,__t818t__,&__t819t__);
  if(__t819t__){
  __t820t=0;
  goto __t_return;
  }
  neq__t759t(x__dat__first,y__dat__first,&__t821t__);
  if(__t821t__){
  __t822t=0;
  __t820t=__t822t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t820t=z;
  goto __t_return;
  __t_return:
  *__t2229t=__t820t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2230t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2230t=z;
}

int at__t1882t(char** __t2231t, uint64_t* __t2232t, uint16_t* __t2233t, uint16_t* __t2234t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2235t) {
  char* data__unsafe_ptr=*__t2231t;
  uint64_t data__unsafe_size=*__t2232t;
  uint16_t data__unsafe_offset=*__t2233t;
  uint16_t data__unsafe_align=*__t2234t;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__dat__pos=0;
  uint64_t __t1883t__dat__length=0;
  char __t1883t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1884t__=0;
  uint64_t __t1885t=0;
  uint64_t __t1886t=0;
  char* __t1887t__=0;
  char* __t1888t__s__unsafe_ptr=0;
  uint64_t __t1888t__s__dat__pos=0;
  uint64_t __t1888t__s__dat__length=0;
  char __t1888t__s__dat__first=0;
  uint64_t __t1888t__cost=0;
  char* __t1889t__unsafe_ptr=0;
  uint64_t __t1889t__dat__pos=0;
  uint64_t __t1889t__dat__length=0;
  char __t1889t__dat__first=0;
  int __t1890t=0;
  int __t1891t__=0;
  uint64_t __t1892t__=0;
  uint64_t n=0;
  uint64_t __t1893t__=0;
  uint64_t pos=0;
  uint64_t __t1894t__from=0;
  uint64_t __t1894t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1895t=0;
  uint64_t __t1896t__=0;
  uint64_t i=0;
  uint64_t __t1897t__=0;
  uint64_t __t1898t=0;
  uint64_t idx=0;
  char __t1899t__=0;
  uint64_t __t1900t__=0;
  uint64_t __t1901t=0;
  char __t1902t__=0;
  char* __t1903t__=0;
  char* __t1904t__s__unsafe_ptr=0;
  uint64_t __t1904t__s__dat__pos=0;
  uint64_t __t1904t__s__dat__length=0;
  char __t1904t__s__dat__first=0;
  uint64_t __t1904t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__dat__pos=0;
  uint64_t __t1905t__dat__length=0;
  char __t1905t__dat__first=0;
  char __t1906t__=0;
  char* __t1907t__=0;
  char* __t1908t__unsafe_ptr=0;
  uint64_t __t1908t__dat__pos=0;
  uint64_t __t1908t__dat__length=0;
  char __t1908t__dat__first=0;
  char __t1909t__=0;
  char __t1910t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1911t__=0;
  char* __t1912t__s__unsafe_ptr=0;
  uint64_t __t1912t__s__dat__pos=0;
  uint64_t __t1912t__s__dat__length=0;
  char __t1912t__s__dat__first=0;
  uint64_t __t1912t__cost=0;
  char* __t1913t__unsafe_ptr=0;
  uint64_t __t1913t__dat__pos=0;
  uint64_t __t1913t__dat__length=0;
  char __t1913t__dat__first=0;
  char* __t1914t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1602t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1883t__unsafe_ptr,&__t1883t__dat__pos,&__t1883t__dat__length,&__t1883t__dat__first);
  k__unsafe_ptr=__t1883t__unsafe_ptr;
  k__dat__pos=__t1883t__dat__pos;
  k__dat__length=__t1883t__dat__length;
  k__dat__first=__t1883t__dat__first;
  is_zero__t1606t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1884t__);
  if(__t1884t__){
  __t1885t=0;
  goto __t_return;
  }
  __t1886t=0;
  __t_errcode=get__t636t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1886t,&__t1887t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1887t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1888t__s__unsafe_ptr,__t1887t__,8);
  memcpy(&__t1888t__s__dat__pos,__t1887t__+8,8);
  memcpy(&__t1888t__s__dat__length,__t1887t__+16,8);
  memcpy(&__t1888t__s__dat__first,__t1887t__+24,1);
  memcpy(&__t1888t__cost,__t1887t__+25,8);
  raw__t1600t(__t1888t__s__unsafe_ptr,__t1888t__s__dat__pos,__t1888t__s__dat__length,__t1888t__s__dat__first,__t1888t__cost,&__t1889t__unsafe_ptr,&__t1889t__dat__pos,&__t1889t__dat__length,&__t1889t__dat__first);
  not__t37t(__t1890t,&__t1891t__);
  len__t643t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1892t__);
  n=__t1892t__;
  __t_errcode=hash__t1551t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1893t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1893t__;
  range__t471t(n,&__t1894t__from,&__t1894t__to);
  iter__from=__t1894t__from;
  iter__to=__t1894t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1896t__);
  __t1895t=__t_complain;
  i=__t1896t__;
  __t1895t=__t1895t==0;
  if(!__t1895t){
  break;
  }
  add__t175t(pos,i,&__t1897t__);
  __t1898t=__t1897t__;
  idx=__t1898t;
  ge__t324t(idx,n,&__t1899t__);
  if(__t1899t__){
  __t_errcode=sub__t352t(idx,n,&__t1900t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1900t__;
  }
  __t1901t=0;
  eq__t120t(idx,__t1901t,&__t1902t__);
  if(__t1902t__){
  continue;
  }
  __t_errcode=get__t636t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1903t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1903t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1904t__s__unsafe_ptr,__t1903t__,8);
  memcpy(&__t1904t__s__dat__pos,__t1903t__+8,8);
  memcpy(&__t1904t__s__dat__length,__t1903t__+16,8);
  memcpy(&__t1904t__s__dat__first,__t1903t__+24,1);
  memcpy(&__t1904t__cost,__t1903t__+25,8);
  entry__s__unsafe_ptr=__t1904t__s__unsafe_ptr;
  entry__s__dat__pos=__t1904t__s__dat__pos;
  entry__s__dat__length=__t1904t__s__dat__length;
  entry__s__dat__first=__t1904t__s__dat__first;
  entry__cost=__t1904t__cost;
  raw__t1600t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1905t__unsafe_ptr,&__t1905t__dat__pos,&__t1905t__dat__length,&__t1905t__dat__first);
  is_zero__t1606t(__t1905t__unsafe_ptr,__t1905t__dat__pos,__t1905t__dat__length,__t1905t__dat__first,&__t1906t__);
  if(__t1906t__){
  __t_errcode=mutget__t629t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1907t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1907t__,&k__unsafe_ptr,8);
  memcpy(__t1907t__+8,&k__dat__pos,8);
  memcpy(__t1907t__+16,&k__dat__length,8);
  memcpy(__t1907t__+24,&k__dat__first,1);
  memcpy(__t1907t__+25,&i,8);
  __t1885t=idx;
  goto __t_return;
  }
  raw__t1600t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1908t__unsafe_ptr,&__t1908t__dat__pos,&__t1908t__dat__length,&__t1908t__dat__first);
  eq__t816t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1908t__unsafe_ptr,__t1908t__dat__pos,__t1908t__dat__length,__t1908t__dat__first,&__t1909t__);
  if(__t1909t__){
  __t1885t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t1910t__);
  if(__t1910t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t636t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1911t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1911t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1912t__s__unsafe_ptr,__t1911t__,8);
  memcpy(&__t1912t__s__dat__pos,__t1911t__+8,8);
  memcpy(&__t1912t__s__dat__length,__t1911t__+16,8);
  memcpy(&__t1912t__s__dat__first,__t1911t__+24,1);
  memcpy(&__t1912t__cost,__t1911t__+25,8);
  raw__t1600t(__t1912t__s__unsafe_ptr,__t1912t__s__dat__pos,__t1912t__s__dat__length,__t1912t__s__dat__first,__t1912t__cost,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length,&__t1913t__dat__first);
  k__unsafe_ptr=__t1913t__unsafe_ptr;
  k__dat__pos=__t1913t__dat__pos;
  k__dat__length=__t1913t__dat__length;
  k__dat__first=__t1913t__dat__first;
  __t_errcode=mutget__t629t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1914t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1914t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1914t__,&tmp__unsafe_ptr,8);
  memcpy(__t1914t__+8,&tmp__dat__pos,8);
  memcpy(__t1914t__+16,&tmp__dat__length,8);
  memcpy(__t1914t__+24,&tmp__dat__first,1);
  memcpy(__t1914t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2231t=data__unsafe_ptr;
  *__t2232t=data__unsafe_size;
  *__t2233t=data__unsafe_offset;
  *__t2234t=data__unsafe_align;
  *__t2235t=__t1885t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2007t(char** __t2236t, uint64_t* __t2237t, uint16_t* __t2238t, uint16_t* __t2239t, char** __t2240t, uint64_t* __t2241t, uint16_t* __t2242t, uint16_t* __t2243t, const char* key, char** __t2244t) {
  char* keys__unsafe_ptr=*__t2236t;
  uint64_t keys__unsafe_size=*__t2237t;
  uint16_t keys__unsafe_offset=*__t2238t;
  uint16_t keys__unsafe_align=*__t2239t;
  char* values__unsafe_ptr=*__t2240t;
  uint64_t values__unsafe_size=*__t2241t;
  uint16_t values__unsafe_offset=*__t2242t;
  uint16_t values__unsafe_align=*__t2243t;
  char* __t2008t__unsafe_ptr=0;
  uint64_t __t2008t__dat__pos=0;
  uint64_t __t2008t__dat__length=0;
  char __t2008t__dat__first=0;
  uint64_t __t2009t__=0;
  char* __t2010t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(key,&__t2008t__unsafe_ptr,&__t2008t__dat__pos,&__t2008t__dat__length,&__t2008t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1882t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2008t__unsafe_ptr,__t2008t__dat__pos,__t2008t__dat__length,__t2008t__dat__first,&__t2009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t629t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2009t__,&__t2010t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2236t=keys__unsafe_ptr;
  *__t2237t=keys__unsafe_size;
  *__t2238t=keys__unsafe_offset;
  *__t2239t=keys__unsafe_align;
  *__t2240t=values__unsafe_ptr;
  *__t2241t=values__unsafe_size;
  *__t2242t=values__unsafe_offset;
  *__t2243t=values__unsafe_align;
  *__t2244t=__t2010t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t719t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2245t, uint64_t* __t2246t, uint64_t* __t2247t, char* __t2248t) {
  goto __t_return;
  __t_return:
  *__t2245t=other__unsafe_ptr;
  *__t2246t=other__dat__pos;
  *__t2247t=other__dat__length;
  *__t2248t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t847t(char** __t2249t, uint64_t* __t2250t, uint16_t* __t2251t, uint16_t* __t2252t, uint64_t* __t2253t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2254t, uint64_t* __t2255t, uint64_t* __t2256t, char* __t2257t) {
  char* CHARS__buf__unsafe_ptr=*__t2249t;
  uint64_t CHARS__buf__unsafe_size=*__t2250t;
  uint16_t CHARS__buf__unsafe_offset=*__t2251t;
  uint16_t CHARS__buf__unsafe_align=*__t2252t;
  uint64_t CHARS__pos=*__t2253t;
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
  *__t2249t=CHARS__buf__unsafe_ptr;
  *__t2250t=CHARS__buf__unsafe_size;
  *__t2251t=CHARS__buf__unsafe_offset;
  *__t2252t=CHARS__buf__unsafe_align;
  *__t2253t=CHARS__pos;
  *__t2254t=__t855t__unsafe_ptr;
  *__t2255t=__t855t__dat__pos;
  *__t2256t=__t855t__dat__length;
  *__t2257t=__t855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2021t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2258t, char** __t2259t, uint64_t* __t2260t, uint64_t* __t2261t, char* __t2262t) {
  uint64_t pos=*__t2258t;
  uint64_t __t2022t=0;
  char __t2023t__=0;
  uint64_t __t2024t=0;
  uint64_t __t2025t__=0;
  uint64_t __t2026t=0;
  char* __t2027t__=0;
  char* __t2028t__s__unsafe_ptr=0;
  uint64_t __t2028t__s__dat__pos=0;
  uint64_t __t2028t__s__dat__length=0;
  char __t2028t__s__dat__first=0;
  uint64_t __t2028t__cost=0;
  char* __t2029t__unsafe_ptr=0;
  uint64_t __t2029t__dat__pos=0;
  uint64_t __t2029t__dat__length=0;
  char __t2029t__dat__first=0;
  char* __t2030t__=0;
  char* __t2031t__s__unsafe_ptr=0;
  uint64_t __t2031t__s__dat__pos=0;
  uint64_t __t2031t__s__dat__length=0;
  char __t2031t__s__dat__first=0;
  uint64_t __t2031t__cost=0;
  char* __t2032t__unsafe_ptr=0;
  uint64_t __t2032t__dat__pos=0;
  uint64_t __t2032t__dat__length=0;
  char __t2032t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2033t=0;
  uint64_t __t2034t__=0;
  char* __t2035t__unsafe_ptr=0;
  uint64_t __t2035t__dat__pos=0;
  uint64_t __t2035t__dat__length=0;
  char __t2035t__dat__first=0;
  char __t2036t__=0;
  char* __t2037t__=0;
  char* __t2038t__s__unsafe_ptr=0;
  uint64_t __t2038t__s__dat__pos=0;
  uint64_t __t2038t__s__dat__length=0;
  char __t2038t__s__dat__first=0;
  uint64_t __t2038t__cost=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__dat__pos=0;
  uint64_t __t2039t__dat__length=0;
  char __t2039t__dat__first=0;
  uint64_t __t2040t=0;
  uint64_t __t2041t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2022t=0;
  eq__t120t(pos,__t2022t,&__t2023t__);
  if(__t2023t__){
  __t2024t=1;
  add__t175t(pos,__t2024t,&__t2025t__);
  pos=__t2025t__;
  __t2026t=0;
  __t_errcode=get__t636t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2026t,&__t2027t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2027t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2028t__s__unsafe_ptr,__t2027t__,8);
  memcpy(&__t2028t__s__dat__pos,__t2027t__+8,8);
  memcpy(&__t2028t__s__dat__length,__t2027t__+16,8);
  memcpy(&__t2028t__s__dat__first,__t2027t__+24,1);
  memcpy(&__t2028t__cost,__t2027t__+25,8);
  raw__t1600t(__t2028t__s__unsafe_ptr,__t2028t__s__dat__pos,__t2028t__s__dat__length,__t2028t__s__dat__first,__t2028t__cost,&__t2029t__unsafe_ptr,&__t2029t__dat__pos,&__t2029t__dat__length,&__t2029t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t636t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2030t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2030t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2031t__s__unsafe_ptr,__t2030t__,8);
  memcpy(&__t2031t__s__dat__pos,__t2030t__+8,8);
  memcpy(&__t2031t__s__dat__length,__t2030t__+16,8);
  memcpy(&__t2031t__s__dat__first,__t2030t__+24,1);
  memcpy(&__t2031t__cost,__t2030t__+25,8);
  raw__t1600t(__t2031t__s__unsafe_ptr,__t2031t__s__dat__pos,__t2031t__s__dat__length,__t2031t__s__dat__first,__t2031t__cost,&__t2032t__unsafe_ptr,&__t2032t__dat__pos,&__t2032t__dat__length,&__t2032t__dat__first);
  ret__unsafe_ptr=__t2032t__unsafe_ptr;
  ret__dat__pos=__t2032t__dat__pos;
  ret__dat__length=__t2032t__dat__length;
  ret__dat__first=__t2032t__dat__first;
  __t2033t=1;
  add__t175t(pos,__t2033t,&__t2034t__);
  pos=__t2034t__;
  while(1){
  raw__t1602t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2035t__unsafe_ptr,&__t2035t__dat__pos,&__t2035t__dat__length,&__t2035t__dat__first);
  is_zero__t1606t(__t2035t__unsafe_ptr,__t2035t__dat__pos,__t2035t__dat__length,__t2035t__dat__first,&__t2036t__);
  if(!__t2036t__){
  break;
  }
  __t_errcode=get__t636t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2037t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2037t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2038t__s__unsafe_ptr,__t2037t__,8);
  memcpy(&__t2038t__s__dat__pos,__t2037t__+8,8);
  memcpy(&__t2038t__s__dat__length,__t2037t__+16,8);
  memcpy(&__t2038t__s__dat__first,__t2037t__+24,1);
  memcpy(&__t2038t__cost,__t2037t__+25,8);
  raw__t1600t(__t2038t__s__unsafe_ptr,__t2038t__s__dat__pos,__t2038t__s__dat__length,__t2038t__s__dat__first,__t2038t__cost,&__t2039t__unsafe_ptr,&__t2039t__dat__pos,&__t2039t__dat__length,&__t2039t__dat__first);
  ret__unsafe_ptr=__t2039t__unsafe_ptr;
  ret__dat__pos=__t2039t__dat__pos;
  ret__dat__length=__t2039t__dat__length;
  ret__dat__first=__t2039t__dat__first;
  __t2040t=1;
  add__t175t(pos,__t2040t,&__t2041t__);
  pos=__t2041t__;
  }
  __t2029t__unsafe_ptr=ret__unsafe_ptr;
  __t2029t__dat__pos=ret__dat__pos;
  __t2029t__dat__length=ret__dat__length;
  __t2029t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2258t=pos;
  *__t2259t=__t2029t__unsafe_ptr;
  *__t2260t=__t2029t__dat__pos;
  *__t2261t=__t2029t__dat__length;
  *__t2262t=__t2029t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2072t(char** __t2263t, uint64_t* __t2264t, uint16_t* __t2265t, uint16_t* __t2266t, uint64_t* __t2267t, char** __t2268t, uint64_t* __t2269t, uint16_t* __t2270t, uint16_t* __t2271t, char** __t2272t, uint64_t* __t2273t, uint16_t* __t2274t, uint16_t* __t2275t) {
  char* buf__buf__unsafe_ptr=*__t2263t;
  uint64_t buf__buf__unsafe_size=*__t2264t;
  uint16_t buf__buf__unsafe_offset=*__t2265t;
  uint16_t buf__buf__unsafe_align=*__t2266t;
  uint64_t buf__pos=*__t2267t;
  char* __t2073t__unsafe_ptr=0;
  uint64_t __t2073t__unsafe_size=0;
  uint16_t __t2073t__unsafe_offset=0;
  uint16_t __t2073t__unsafe_align=0;
  uint64_t __t2074t=0;
  char* __t2075t__unsafe_ptr=0;
  uint64_t __t2075t__unsafe_size=0;
  uint16_t __t2075t__unsafe_offset=0;
  uint16_t __t2075t__unsafe_align=0;
  char __t2076t____t534t__=0;
  char* __t2077t__keys__unsafe_ptr=0;
  uint64_t __t2077t__keys__unsafe_size=0;
  uint16_t __t2077t__keys__unsafe_offset=0;
  uint16_t __t2077t__keys__unsafe_align=0;
  char* __t2077t__values__unsafe_ptr=0;
  uint64_t __t2077t__values__unsafe_size=0;
  uint16_t __t2077t__values__unsafe_offset=0;
  uint16_t __t2077t__values__unsafe_align=0;
  char __t2078t____t1990t____t534t__=0;
  char* __t2079t__keys__unsafe_ptr=0;
  uint64_t __t2079t__keys__unsafe_size=0;
  uint16_t __t2079t__keys__unsafe_offset=0;
  uint16_t __t2079t__keys__unsafe_align=0;
  char* __t2079t__values__unsafe_ptr=0;
  uint64_t __t2079t__values__unsafe_size=0;
  uint16_t __t2079t__values__unsafe_offset=0;
  uint16_t __t2079t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2081t__=0;
  char* __t2083t__unsafe_ptr=0;
  uint64_t __t2083t__dat__pos=0;
  uint64_t __t2083t__dat__length=0;
  char __t2083t__dat__first=0;
  char* __t2084t__unsafe_ptr=0;
  uint64_t __t2084t__dat__pos=0;
  uint64_t __t2084t__dat__length=0;
  char __t2084t__dat__first=0;
  char* __t2086t__=0;
  char* __t2088t__unsafe_ptr=0;
  uint64_t __t2088t__dat__pos=0;
  uint64_t __t2088t__dat__length=0;
  char __t2088t__dat__first=0;
  char* __t2089t__unsafe_ptr=0;
  uint64_t __t2089t__dat__pos=0;
  uint64_t __t2089t__dat__length=0;
  char __t2089t__dat__first=0;
  char* __t2090t__buf__unsafe_ptr=0;
  uint64_t __t2090t__buf__unsafe_size=0;
  uint16_t __t2090t__buf__unsafe_offset=0;
  uint16_t __t2090t__buf__unsafe_align=0;
  uint64_t __t2090t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t2091t=0;
  char* __t2092t__unsafe_ptr=0;
  uint64_t __t2092t__dat__pos=0;
  uint64_t __t2092t__dat__length=0;
  char __t2092t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2064t(&__t2073t__unsafe_ptr,&__t2073t__unsafe_size,&__t2073t__unsafe_offset,&__t2073t__unsafe_align);
  __t2074t=128;
  __t_errcode=alloc__t532t(&__t2073t__unsafe_ptr,&__t2073t__unsafe_size,&__t2073t__unsafe_offset,&__t2073t__unsafe_align,__t2074t,&__t2075t__unsafe_ptr,&__t2075t__unsafe_size,&__t2075t__unsafe_offset,&__t2075t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1983t(&__t2075t__unsafe_ptr,&__t2075t__unsafe_size,&__t2075t__unsafe_offset,&__t2075t__unsafe_align,&__t2077t__keys__unsafe_ptr,&__t2077t__keys__unsafe_size,&__t2077t__keys__unsafe_offset,&__t2077t__keys__unsafe_align,&__t2077t__values__unsafe_ptr,&__t2077t__values__unsafe_size,&__t2077t__values__unsafe_offset,&__t2077t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2079t__keys__unsafe_ptr=__t2077t__keys__unsafe_ptr;
  __t2079t__keys__unsafe_size=__t2077t__keys__unsafe_size;
  __t2079t__keys__unsafe_offset=__t2077t__keys__unsafe_offset;
  __t2079t__keys__unsafe_align=__t2077t__keys__unsafe_align;
  __t2079t__values__unsafe_ptr=__t2077t__values__unsafe_ptr;
  __t2079t__values__unsafe_size=__t2077t__values__unsafe_size;
  __t2079t__values__unsafe_offset=__t2077t__values__unsafe_offset;
  __t2079t__values__unsafe_align=__t2077t__values__unsafe_align;
  __t_errcode=mutget__t2007t(&__t2079t__keys__unsafe_ptr,&__t2079t__keys__unsafe_size,&__t2079t__keys__unsafe_offset,&__t2079t__keys__unsafe_align,&__t2079t__values__unsafe_ptr,&__t2079t__values__unsafe_size,&__t2079t__values__unsafe_offset,&__t2079t__values__unsafe_align,__t2080t,&__t2081t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t746t(__t2082t,&__t2083t__unsafe_ptr,&__t2083t__dat__pos,&__t2083t__dat__length,&__t2083t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t847t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2083t__unsafe_ptr,__t2083t__dat__pos,__t2083t__dat__length,__t2083t__dat__first,&__t2084t__unsafe_ptr,&__t2084t__dat__pos,&__t2084t__dat__length,&__t2084t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2081t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2081t__,&__t2084t__unsafe_ptr,8);
  memcpy(__t2081t__+8,&__t2084t__dat__pos,8);
  memcpy(__t2081t__+16,&__t2084t__dat__length,8);
  memcpy(__t2081t__+24,&__t2084t__dat__first,1);
  __t_errcode=mutget__t2007t(&__t2079t__keys__unsafe_ptr,&__t2079t__keys__unsafe_size,&__t2079t__keys__unsafe_offset,&__t2079t__keys__unsafe_align,&__t2079t__values__unsafe_ptr,&__t2079t__values__unsafe_size,&__t2079t__values__unsafe_offset,&__t2079t__values__unsafe_align,__t2085t,&__t2086t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t746t(__t2087t,&__t2088t__unsafe_ptr,&__t2088t__dat__pos,&__t2088t__dat__length,&__t2088t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t847t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2088t__unsafe_ptr,__t2088t__dat__pos,__t2088t__dat__length,__t2088t__dat__first,&__t2089t__unsafe_ptr,&__t2089t__dat__pos,&__t2089t__dat__length,&__t2089t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2086t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2086t__,&__t2089t__unsafe_ptr,8);
  memcpy(__t2086t__+8,&__t2089t__dat__pos,8);
  memcpy(__t2086t__+16,&__t2089t__dat__length,8);
  memcpy(__t2086t__+24,&__t2089t__dat__first,1);
  arena__t673t(&__t2079t__keys__unsafe_ptr,&__t2079t__keys__unsafe_size,&__t2079t__keys__unsafe_offset,&__t2079t__keys__unsafe_align,&__t2090t__buf__unsafe_ptr,&__t2090t__buf__unsafe_size,&__t2090t__buf__unsafe_offset,&__t2090t__buf__unsafe_align,&__t2090t__pos);
  it__pos=__t2090t__pos;
  while(1){
  __t_complain=next__t2021t(__t2079t__keys__unsafe_ptr,__t2079t__keys__unsafe_size,__t2079t__keys__unsafe_offset,__t2079t__keys__unsafe_align,&it__pos,&__t2092t__unsafe_ptr,&__t2092t__dat__pos,&__t2092t__dat__length,&__t2092t__dat__first);
  __t2091t=__t_complain;
  key__unsafe_ptr=__t2092t__unsafe_ptr;
  key__dat__pos=__t2092t__dat__pos;
  key__dat__length=__t2092t__dat__length;
  key__dat__first=__t2092t__dat__first;
  __t2091t=__t2091t==0;
  if(!__t2091t){
  break;
  }
  print__t889t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2079t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2079t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2079t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2079t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2079t__values__unsafe_ptr;
  map__values__unsafe_size=__t2079t__values__unsafe_size;
  map__values__unsafe_offset=__t2079t__values__unsafe_offset;
  map__values__unsafe_align=__t2079t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2078t____t1990t____t534t__);
  if(__t2078t____t1990t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2076t____t534t__);
  if(__t2076t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2263t=buf__buf__unsafe_ptr;
  *__t2264t=buf__buf__unsafe_size;
  *__t2265t=buf__buf__unsafe_offset;
  *__t2266t=buf__buf__unsafe_align;
  *__t2267t=buf__pos;
  *__t2268t=map__keys__unsafe_ptr;
  *__t2269t=map__keys__unsafe_size;
  *__t2270t=map__keys__unsafe_offset;
  *__t2271t=map__keys__unsafe_align;
  *__t2272t=map__values__unsafe_ptr;
  *__t2273t=map__values__unsafe_size;
  *__t2274t=map__values__unsafe_offset;
  *__t2275t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2094t(char** __t2276t, uint64_t* __t2277t, uint16_t* __t2278t, uint16_t* __t2279t, char** __t2280t, uint64_t* __t2281t, uint16_t* __t2282t, uint16_t* __t2283t, char** __t2284t, uint64_t* __t2285t, uint16_t* __t2286t, uint16_t* __t2287t, uint64_t* __t2288t) {
  char* __t2097t__unsafe_ptr=0;
  uint64_t __t2097t__unsafe_size=0;
  uint16_t __t2097t__unsafe_offset=0;
  uint16_t __t2097t__unsafe_align=0;
  uint64_t __t2098t=0;
  uint64_t __t2099t__=0;
  char* __t2100t__unsafe_ptr=0;
  uint64_t __t2100t__unsafe_size=0;
  uint16_t __t2100t__unsafe_offset=0;
  uint16_t __t2100t__unsafe_align=0;
  char __t2101t____t534t__=0;
  char* __t2102t__buf__unsafe_ptr=0;
  uint64_t __t2102t__buf__unsafe_size=0;
  uint16_t __t2102t__buf__unsafe_offset=0;
  uint16_t __t2102t__buf__unsafe_align=0;
  uint64_t __t2102t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2103t__keys__unsafe_ptr=0;
  uint64_t __t2103t__keys__unsafe_size=0;
  uint16_t __t2103t__keys__unsafe_offset=0;
  uint16_t __t2103t__keys__unsafe_align=0;
  char* __t2103t__values__unsafe_ptr=0;
  uint64_t __t2103t__values__unsafe_size=0;
  uint16_t __t2103t__values__unsafe_offset=0;
  uint16_t __t2103t__values__unsafe_align=0;
  char __t2104t____t2076t____t534t__=0;
  char __t2104t____t2078t____t1990t____t534t__=0;
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
  char____t_buffer____buffer__t2095t(&__t2097t__unsafe_ptr,&__t2097t__unsafe_size,&__t2097t__unsafe_offset,&__t2097t__unsafe_align);
  __t2098t=4;
  KB__t481t(__t2098t,&__t2099t__);
  __t_errcode=alloc__t532t(&__t2097t__unsafe_ptr,&__t2097t__unsafe_size,&__t2097t__unsafe_offset,&__t2097t__unsafe_align,__t2099t__,&__t2100t__unsafe_ptr,&__t2100t__unsafe_size,&__t2100t__unsafe_offset,&__t2100t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t673t(&__t2100t__unsafe_ptr,&__t2100t__unsafe_size,&__t2100t__unsafe_offset,&__t2100t__unsafe_align,&__t2102t__buf__unsafe_ptr,&__t2102t__buf__unsafe_size,&__t2102t__buf__unsafe_offset,&__t2102t__buf__unsafe_align,&__t2102t__pos);
  buf__buf__unsafe_ptr=__t2102t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2102t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2102t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2102t__buf__unsafe_align;
  buf__pos=__t2102t__pos;
  __t_errcode=test__t2072t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2103t__keys__unsafe_ptr,&__t2103t__keys__unsafe_size,&__t2103t__keys__unsafe_offset,&__t2103t__keys__unsafe_align,&__t2103t__values__unsafe_ptr,&__t2103t__values__unsafe_size,&__t2103t__values__unsafe_offset,&__t2103t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2103t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2103t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2103t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2103t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2103t__values__unsafe_ptr;
  map__values__unsafe_size=__t2103t__values__unsafe_size;
  map__values__unsafe_offset=__t2103t__values__unsafe_offset;
  map__values__unsafe_align=__t2103t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2104t____t2078t____t1990t____t534t__);
  if(__t2104t____t2078t____t1990t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2104t____t2076t____t534t__);
  if(__t2104t____t2076t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  exists__t447t(buf__buf__unsafe_ptr,&__t2101t____t534t__);
  if(__t2101t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2276t=map__keys__unsafe_ptr;
  *__t2277t=map__keys__unsafe_size;
  *__t2278t=map__keys__unsafe_offset;
  *__t2279t=map__keys__unsafe_align;
  *__t2280t=map__values__unsafe_ptr;
  *__t2281t=map__values__unsafe_size;
  *__t2282t=map__values__unsafe_offset;
  *__t2283t=map__values__unsafe_align;
  *__t2284t=buf__buf__unsafe_ptr;
  *__t2285t=buf__buf__unsafe_size;
  *__t2286t=buf__buf__unsafe_offset;
  *__t2287t=buf__buf__unsafe_align;
  *__t2288t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t1604t(const char* r, char** __t2289t, uint64_t* __t2290t, uint64_t* __t2291t, char* __t2292t) {
  char* __t1605t__unsafe_ptr=0;
  uint64_t __t1605t__dat__pos=0;
  uint64_t __t1605t__dat__length=0;
  char __t1605t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(r,&__t1605t__unsafe_ptr,&__t1605t__dat__pos,&__t1605t__dat__length,&__t1605t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2289t=__t1605t__unsafe_ptr;
  *__t2290t=__t1605t__dat__pos;
  *__t2291t=__t1605t__dat__length;
  *__t2292t=__t1605t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t1648t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2293t) {
  char* __t1649t__unsafe_ptr=0;
  uint64_t __t1649t__dat__pos=0;
  uint64_t __t1649t__dat__length=0;
  char __t1649t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1650t__=0;
  uint64_t __t1651t=0;
  uint64_t __t1652t=0;
  char* __t1653t__=0;
  char* __t1654t__s__unsafe_ptr=0;
  uint64_t __t1654t__s__dat__pos=0;
  uint64_t __t1654t__s__dat__length=0;
  char __t1654t__s__dat__first=0;
  uint64_t __t1654t__cost=0;
  char* __t1655t__unsafe_ptr=0;
  uint64_t __t1655t__dat__pos=0;
  uint64_t __t1655t__dat__length=0;
  char __t1655t__dat__first=0;
  int __t1656t=0;
  int __t1657t__=0;
  uint64_t __t1658t__=0;
  uint64_t n=0;
  uint64_t __t1659t__=0;
  uint64_t pos=0;
  uint64_t __t1660t__from=0;
  uint64_t __t1660t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1661t=0;
  uint64_t __t1662t__=0;
  uint64_t i=0;
  uint64_t __t1663t__=0;
  uint64_t __t1664t=0;
  uint64_t idx=0;
  char __t1665t__=0;
  uint64_t __t1666t__=0;
  uint64_t __t1667t=0;
  char __t1668t__=0;
  char* __t1669t__=0;
  char* __t1670t__s__unsafe_ptr=0;
  uint64_t __t1670t__s__dat__pos=0;
  uint64_t __t1670t__s__dat__length=0;
  char __t1670t__s__dat__first=0;
  uint64_t __t1670t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1671t__unsafe_ptr=0;
  uint64_t __t1671t__dat__pos=0;
  uint64_t __t1671t__dat__length=0;
  char __t1671t__dat__first=0;
  char __t1672t__=0;
  char* __t1673t__unsafe_ptr=0;
  uint64_t __t1673t__dat__pos=0;
  uint64_t __t1673t__dat__length=0;
  char __t1673t__dat__first=0;
  char __t1674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1602t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1649t__unsafe_ptr,&__t1649t__dat__pos,&__t1649t__dat__length,&__t1649t__dat__first);
  k__unsafe_ptr=__t1649t__unsafe_ptr;
  k__dat__pos=__t1649t__dat__pos;
  k__dat__length=__t1649t__dat__length;
  k__dat__first=__t1649t__dat__first;
  is_zero__t1606t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1650t__);
  if(__t1650t__){
  __t1651t=0;
  goto __t_return;
  }
  __t1652t=0;
  __t_errcode=get__t636t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1652t,&__t1653t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1653t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1654t__s__unsafe_ptr,__t1653t__,8);
  memcpy(&__t1654t__s__dat__pos,__t1653t__+8,8);
  memcpy(&__t1654t__s__dat__length,__t1653t__+16,8);
  memcpy(&__t1654t__s__dat__first,__t1653t__+24,1);
  memcpy(&__t1654t__cost,__t1653t__+25,8);
  raw__t1600t(__t1654t__s__unsafe_ptr,__t1654t__s__dat__pos,__t1654t__s__dat__length,__t1654t__s__dat__first,__t1654t__cost,&__t1655t__unsafe_ptr,&__t1655t__dat__pos,&__t1655t__dat__length,&__t1655t__dat__first);
  not__t37t(__t1656t,&__t1657t__);
  len__t643t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1658t__);
  n=__t1658t__;
  __t_errcode=hash__t1551t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1659t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1659t__;
  range__t471t(n,&__t1660t__from,&__t1660t__to);
  iter__from=__t1660t__from;
  iter__to=__t1660t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1662t__);
  __t1661t=__t_complain;
  i=__t1662t__;
  __t1661t=__t1661t==0;
  if(!__t1661t){
  break;
  }
  add__t175t(pos,i,&__t1663t__);
  __t1664t=__t1663t__;
  idx=__t1664t;
  ge__t324t(idx,n,&__t1665t__);
  if(__t1665t__){
  __t_errcode=sub__t352t(idx,n,&__t1666t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1666t__;
  }
  __t1667t=0;
  eq__t120t(idx,__t1667t,&__t1668t__);
  if(__t1668t__){
  continue;
  }
  __t_errcode=get__t636t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1670t__s__unsafe_ptr,__t1669t__,8);
  memcpy(&__t1670t__s__dat__pos,__t1669t__+8,8);
  memcpy(&__t1670t__s__dat__length,__t1669t__+16,8);
  memcpy(&__t1670t__s__dat__first,__t1669t__+24,1);
  memcpy(&__t1670t__cost,__t1669t__+25,8);
  entry__s__unsafe_ptr=__t1670t__s__unsafe_ptr;
  entry__s__dat__pos=__t1670t__s__dat__pos;
  entry__s__dat__length=__t1670t__s__dat__length;
  entry__s__dat__first=__t1670t__s__dat__first;
  entry__cost=__t1670t__cost;
  raw__t1600t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1671t__unsafe_ptr,&__t1671t__dat__pos,&__t1671t__dat__length,&__t1671t__dat__first);
  is_zero__t1606t(__t1671t__unsafe_ptr,__t1671t__dat__pos,__t1671t__dat__length,__t1671t__dat__first,&__t1672t__);
  if(__t1672t__){
  continue;
  }
  raw__t1600t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1673t__unsafe_ptr,&__t1673t__dat__pos,&__t1673t__dat__length,&__t1673t__dat__first);
  eq__t816t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1673t__unsafe_ptr,__t1673t__dat__pos,__t1673t__dat__length,__t1673t__dat__first,&__t1674t__);
  if(__t1674t__){
  __t1651t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2293t=__t1651t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t1999t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2294t) {
  char* __t2000t__unsafe_ptr=0;
  uint64_t __t2000t__dat__pos=0;
  uint64_t __t2000t__dat__length=0;
  char __t2000t__dat__first=0;
  uint64_t __t2001t__=0;
  char* __t2002t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1604t(key,&__t2000t__unsafe_ptr,&__t2000t__dat__pos,&__t2000t__dat__length,&__t2000t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1648t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2000t__unsafe_ptr,__t2000t__dat__pos,__t2000t__dat__length,__t2000t__dat__first,&__t2001t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t636t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2001t__,&__t2002t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2294t=__t2002t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2105t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2106t__=0;
  char* __t2107t__unsafe_ptr=0;
  uint64_t __t2107t__dat__pos=0;
  uint64_t __t2107t__dat__length=0;
  char __t2107t__dat__first=0;
  char* __t2109t__=0;
  char* __t2110t__unsafe_ptr=0;
  uint64_t __t2110t__dat__pos=0;
  uint64_t __t2110t__dat__length=0;
  char __t2110t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1999t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2080t,&__t2106t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2106t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2107t__unsafe_ptr,__t2106t__,8);
  memcpy(&__t2107t__dat__pos,__t2106t__+8,8);
  memcpy(&__t2107t__dat__length,__t2106t__+16,8);
  memcpy(&__t2107t__dat__first,__t2106t__+24,1);
  print__t889t(__t2107t__unsafe_ptr,__t2107t__dat__pos,__t2107t__dat__length,__t2107t__dat__first);
  __t_errcode=get__t1999t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2085t,&__t2109t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2109t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2110t__unsafe_ptr,__t2109t__,8);
  memcpy(&__t2110t__dat__pos,__t2109t__+8,8);
  memcpy(&__t2110t__dat__length,__t2109t__+16,8);
  memcpy(&__t2110t__dat__first,__t2109t__+24,1);
  print__t889t(__t2110t__unsafe_ptr,__t2110t__dat__pos,__t2110t__dat__length,__t2110t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2112t() {
  char* __t2114t__map__keys__unsafe_ptr=0;
  uint64_t __t2114t__map__keys__unsafe_size=0;
  uint16_t __t2114t__map__keys__unsafe_offset=0;
  uint16_t __t2114t__map__keys__unsafe_align=0;
  char* __t2114t__map__values__unsafe_ptr=0;
  uint64_t __t2114t__map__values__unsafe_size=0;
  uint16_t __t2114t__map__values__unsafe_offset=0;
  uint16_t __t2114t__map__values__unsafe_align=0;
  char* __t2114t__buf__buf__unsafe_ptr=0;
  uint64_t __t2114t__buf__buf__unsafe_size=0;
  uint16_t __t2114t__buf__buf__unsafe_offset=0;
  uint16_t __t2114t__buf__buf__unsafe_align=0;
  uint64_t __t2114t__buf__pos=0;
  char __t2115t____t2101t____t534t__=0;
  char __t2115t____t2104t____t2076t____t534t__=0;
  char __t2115t____t2104t____t2078t____t1990t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2094t(&__t2114t__map__keys__unsafe_ptr,&__t2114t__map__keys__unsafe_size,&__t2114t__map__keys__unsafe_offset,&__t2114t__map__keys__unsafe_align,&__t2114t__map__values__unsafe_ptr,&__t2114t__map__values__unsafe_size,&__t2114t__map__values__unsafe_offset,&__t2114t__map__values__unsafe_align,&__t2114t__buf__buf__unsafe_ptr,&__t2114t__buf__buf__unsafe_size,&__t2114t__buf__buf__unsafe_offset,&__t2114t__buf__buf__unsafe_align,&__t2114t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2105t(__t2114t__map__keys__unsafe_ptr,__t2114t__map__keys__unsafe_size,__t2114t__map__keys__unsafe_offset,__t2114t__map__keys__unsafe_align,__t2114t__map__values__unsafe_ptr,__t2114t__map__values__unsafe_size,__t2114t__map__values__unsafe_offset,__t2114t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2114t__map__keys__unsafe_ptr,&__t2115t____t2104t____t2078t____t1990t____t534t__);
  if(__t2115t____t2104t____t2078t____t1990t____t534t__){
  free__t503t(&__t2114t__map__keys__unsafe_ptr);
  }
  exists__t447t(__t2114t__map__values__unsafe_ptr,&__t2115t____t2104t____t2076t____t534t__);
  if(__t2115t____t2104t____t2076t____t534t__){
  free__t503t(&__t2114t__map__values__unsafe_ptr);
  }
  exists__t447t(__t2114t__buf__buf__unsafe_ptr,&__t2115t____t2101t____t534t__);
  if(__t2115t____t2101t____t534t__){
  free__t503t(&__t2114t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2112t();return 0;}