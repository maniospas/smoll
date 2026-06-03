#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2089t="manio";
const char* const __t2084t="hello";
const char* const __t2086t="hello world!";
const char* const __t2091t="it's a me, manio.";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2099t(char** __t2121t, uint64_t* __t2122t, uint16_t* __t2123t, uint16_t* __t2124t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2121t=unsafe_ptr;
  *__t2122t=unsafe_size;
  *__t2123t=unsafe_offset;
  *__t2124t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2125t) {
  int value=0;
  *__t2125t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2126t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2126t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2127t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2127t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2128t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2128t=z;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2129t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2129t=__t483t__;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2130t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2130t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2131t) {
  char* allocated=*__t2131t;
  if(allocated){
  free(allocated);
  }
  *__t2131t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2132t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2132t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2133t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2133t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2134t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2134t=value;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2135t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2135t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2136t) {
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
  *__t2136t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2137t, uint64_t* __t2138t, uint16_t* __t2139t, uint16_t* __t2140t, uint64_t size, char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t) {
  char* buffer__unsafe_ptr=*__t2137t;
  uint64_t buffer__unsafe_size=*__t2138t;
  uint16_t buffer__unsafe_offset=*__t2139t;
  uint16_t buffer__unsafe_align=*__t2140t;
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
  *__t2137t=buffer__unsafe_ptr;
  *__t2138t=buffer__unsafe_size;
  *__t2139t=buffer__unsafe_offset;
  *__t2140t=buffer__unsafe_align;
  *__t2141t=buffer__unsafe_ptr;
  *__t2142t=buffer__unsafe_size;
  *__t2143t=buffer__unsafe_offset;
  *__t2144t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t677t(char** __t2145t, uint64_t* __t2146t, uint16_t* __t2147t, uint16_t* __t2148t, char** __t2149t, uint64_t* __t2150t, uint16_t* __t2151t, uint16_t* __t2152t, uint64_t* __t2153t) {
  char* buf__unsafe_ptr=*__t2145t;
  uint64_t buf__unsafe_size=*__t2146t;
  uint16_t buf__unsafe_offset=*__t2147t;
  uint16_t buf__unsafe_align=*__t2148t;
  uint64_t __t678t=0;
  uint64_t __t679t=0;
  uint64_t pos=0;
  __t678t=0;
  __t679t=__t678t;
  pos=__t679t;
  goto __t_return;
  __t_return:
  *__t2145t=buf__unsafe_ptr;
  *__t2146t=buf__unsafe_size;
  *__t2147t=buf__unsafe_offset;
  *__t2148t=buf__unsafe_align;
  *__t2149t=buf__unsafe_ptr;
  *__t2150t=buf__unsafe_size;
  *__t2151t=buf__unsafe_offset;
  *__t2152t=buf__unsafe_align;
  *__t2153t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2068t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2154t=unsafe_ptr;
  *__t2155t=unsafe_size;
  *__t2156t=unsafe_offset;
  *__t2157t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1988t(char** __t2158t, uint64_t* __t2159t, uint16_t* __t2160t, uint16_t* __t2161t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2158t=unsafe_ptr;
  *__t2159t=unsafe_size;
  *__t2160t=unsafe_offset;
  *__t2161t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2162t) {
  goto __t_return;
  __t_return:
  *__t2162t=buffer__unsafe_size;
}

int strmap__t1987t(char** __t2163t, uint64_t* __t2164t, uint16_t* __t2165t, uint16_t* __t2166t, char** __t2167t, uint64_t* __t2168t, uint16_t* __t2169t, uint16_t* __t2170t, char** __t2171t, uint64_t* __t2172t, uint16_t* __t2173t, uint16_t* __t2174t) {
  char* values__unsafe_ptr=*__t2163t;
  uint64_t values__unsafe_size=*__t2164t;
  uint16_t values__unsafe_offset=*__t2165t;
  uint16_t values__unsafe_align=*__t2166t;
  char* __t1990t__unsafe_ptr=0;
  uint64_t __t1990t__unsafe_size=0;
  uint16_t __t1990t__unsafe_offset=0;
  uint16_t __t1990t__unsafe_align=0;
  char* __t1991t__unsafe_ptr=0;
  uint64_t __t1991t__unsafe_size=0;
  uint16_t __t1991t__unsafe_offset=0;
  uint16_t __t1991t__unsafe_align=0;
  uint64_t __t1992t__=0;
  char* __t1993t__unsafe_ptr=0;
  uint64_t __t1993t__unsafe_size=0;
  uint16_t __t1993t__unsafe_offset=0;
  uint16_t __t1993t__unsafe_align=0;
  char __t1994t____t534t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1988t(&__t1990t__unsafe_ptr,&__t1990t__unsafe_size,&__t1990t__unsafe_offset,&__t1990t__unsafe_align);
  __t1991t__unsafe_ptr=__t1990t__unsafe_ptr;
  __t1991t__unsafe_size=__t1990t__unsafe_size;
  __t1991t__unsafe_offset=__t1990t__unsafe_offset;
  __t1991t__unsafe_align=__t1990t__unsafe_align;
  len__t647t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1992t__);
  __t_errcode=alloc__t532t(&__t1991t__unsafe_ptr,&__t1991t__unsafe_size,&__t1991t__unsafe_offset,&__t1991t__unsafe_align,__t1992t__,&__t1993t__unsafe_ptr,&__t1993t__unsafe_size,&__t1993t__unsafe_offset,&__t1993t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1993t__unsafe_ptr;
  keys__unsafe_size=__t1993t__unsafe_size;
  keys__unsafe_offset=__t1993t__unsafe_offset;
  keys__unsafe_align=__t1993t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(keys__unsafe_ptr,&__t1994t____t534t__);
  if(__t1994t____t534t__){
  free__t503t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2163t=values__unsafe_ptr;
  *__t2164t=values__unsafe_size;
  *__t2165t=values__unsafe_offset;
  *__t2166t=values__unsafe_align;
  *__t2167t=keys__unsafe_ptr;
  *__t2168t=keys__unsafe_size;
  *__t2169t=keys__unsafe_offset;
  *__t2170t=keys__unsafe_align;
  *__t2171t=values__unsafe_ptr;
  *__t2172t=values__unsafe_size;
  *__t2173t=values__unsafe_offset;
  *__t2174t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t2175t, uint64_t* __t2176t, uint16_t* __t2177t, uint16_t* __t2178t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2175t=unsafe_ptr;
  *__t2176t=unsafe_size;
  *__t2177t=unsafe_offset;
  *__t2178t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2179t) {
  *__t2179t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2180t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2180t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2181t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2181t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2182t) {
  *__t2182t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2183t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2183t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2184t) {
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
  *__t2184t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2185t, uint64_t* __t2186t, uint64_t* __t2187t, char* __t2188t) {
  goto __t_return;
  __t_return:
  *__t2185t=unsafe_ptr;
  *__t2186t=dat__pos;
  *__t2187t=dat__length;
  *__t2188t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2189t, uint64_t* __t2190t, uint64_t* __t2191t, char* __t2192t) {
  char* unsafe_ptr=0;
  uint64_t __t693t__=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  uint64_t __t696t__=0;
  uint64_t __t697t=0;
  char __t698t__=0;
  char* __t699t__unsafe_ptr=0;
  uint64_t __t699t__dat__pos=0;
  uint64_t __t699t__dat__length=0;
  char __t699t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t693t__);
  __t694t=1;
  neq__t144t(__t693t__,__t694t,&__t695t__);
  if(__t695t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t696t__);
  __t697t=0;
  neq__t144t(__t696t__,__t697t,&__t698t__);
  if(__t698t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t688t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t699t__unsafe_ptr,&__t699t__dat__pos,&__t699t__dat__length,&__t699t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2189t=__t699t__unsafe_ptr;
  *__t2190t=__t699t__dat__pos;
  *__t2191t=__t699t__dat__length;
  *__t2192t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2193t, uint64_t* __t2194t, uint64_t* __t2195t, char* __t2196t) {
  uint64_t __t728t=0;
  char __t729t__=0;
  char* __t730t__=0;
  char __t731t__value=0;
  char first=0;
  char* __t732t__unsafe_ptr=0;
  uint64_t __t732t__dat__pos=0;
  uint64_t __t732t__dat__length=0;
  char __t732t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t728t=0;
  neq__t144t(length,__t728t,&__t729t__);
  if(__t729t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t731t__value,__t730t__,1);
  first=__t731t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t732t__unsafe_ptr,&__t732t__dat__pos,&__t732t__dat__length,&__t732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2193t=__t732t__unsafe_ptr;
  *__t2194t=__t732t__dat__pos;
  *__t2195t=__t732t__dat__length;
  *__t2196t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t2197t, uint64_t* __t2198t, uint64_t* __t2199t, char* __t2200t) {
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__unsafe_size=0;
  uint16_t __t751t__unsafe_offset=0;
  uint16_t __t751t__unsafe_align=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__unsafe_size=0;
  uint16_t __t752t__unsafe_offset=0;
  uint16_t __t752t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t753t__=0;
  uint64_t length=0;
  uint64_t __t754t=0;
  uint64_t __t755t__=0;
  uint64_t __t756t=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t751t__unsafe_ptr,&__t751t__unsafe_size,&__t751t__unsafe_offset,&__t751t__unsafe_align);
  __t752t__unsafe_ptr=__t751t__unsafe_ptr;
  __t752t__unsafe_size=__t751t__unsafe_size;
  __t752t__unsafe_offset=__t751t__unsafe_offset;
  __t752t__unsafe_align=__t751t__unsafe_align;
  buf__unsafe_ptr=__t752t__unsafe_ptr;
  buf__unsafe_size=__t752t__unsafe_size;
  buf__unsafe_offset=__t752t__unsafe_offset;
  buf__unsafe_align=__t752t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t753t__);
  buf__unsafe_ptr=__t753t__;
  if(c){
  length=strlen(c);
  }
  __t754t=1;
  add__t175t(length,__t754t,&__t755t__);
  buf__unsafe_size=__t755t__;
  __t756t=0;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t756t,length,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2197t=__t758t__unsafe_ptr;
  *__t2198t=__t758t__dat__pos;
  *__t2199t=__t758t__dat__length;
  *__t2200t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1606t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2201t, uint64_t* __t2202t, uint64_t* __t2203t, char* __t2204t) {
  goto __t_return;
  __t_return:
  *__t2201t=r__unsafe_ptr;
  *__t2202t=r__dat__pos;
  *__t2203t=r__dat__length;
  *__t2204t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2205t) {
  goto __t_return;
  __t_return:
  *__t2205t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1610t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2206t) {
  uint64_t __t1611t=0;
  uint64_t __t1612t__=0;
  char __t1613t__=0;
  __t1611t=0;
  len__t759t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1612t__);
  eq__t120t(__t1611t,__t1612t__,&__t1613t__);
  goto __t_return;
  __t_return:
  *__t2206t=__t1613t__;
}

static inline __attribute__((always_inline)) void raw__t1604t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2207t, uint64_t* __t2208t, uint64_t* __t2209t, char* __t2210t) {
  goto __t_return;
  __t_return:
  *__t2207t=r__s__unsafe_ptr;
  *__t2208t=r__s__dat__pos;
  *__t2209t=r__s__dat__length;
  *__t2210t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t2211t, uint64_t* __t2212t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t2211t=from;
  *__t2212t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t2213t, uint64_t* __t2214t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t2213t=__t473t__from;
  *__t2214t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t2215t, uint64_t r__to, uint64_t* __t2216t) {
  uint64_t r__from=*__t2215t;
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
  *__t2215t=r__from;
  *__t2216t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t2217t) {
  goto __t_return;
  __t_return:
  *__t2217t=value;
}

static inline __attribute__((always_inline)) void lshift__t458t(uint64_t x__value, uint64_t y, uint64_t* __t2218t) {
  uint64_t z=0;
  uint64_t __t459t__value=0;
  z=(x__value<<y);
  bits__t448t(z,&__t459t__value);
  goto __t_return;
  __t_return:
  *__t2218t=__t459t__value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x, uint64_t* __t2219t) {
  int __t444t=0;
  int __t445t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2219t=value;
}

static inline __attribute__((always_inline)) void nat__t454t(uint64_t x__value, uint64_t* __t2220t) {
  uint64_t __t455t__=0;
  nat__t443t(x__value,&__t455t__);
  goto __t_return;
  __t_return:
  *__t2220t=__t455t__;
}

static inline __attribute__((always_inline)) void get__t932t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2221t) {
  uint64_t __t933t__=0;
  char* __t934t__=0;
  add__t175t(s__dat__pos,i,&__t933t__);
  add__t505t(s__unsafe_ptr,__t933t__,&__t934t__);
  goto __t_return;
  __t_return:
  *__t2221t=__t934t__;
}

static inline __attribute__((always_inline)) void nat__t446t(char x, uint64_t* __t2222t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2222t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2223t) {
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
  *__t2223t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1555t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2224t) {
  uint64_t __t1556t=0;
  uint64_t __t1557t=0;
  uint64_t h=0;
  uint64_t __t1558t__=0;
  uint64_t __t1559t__from=0;
  uint64_t __t1559t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1560t=0;
  uint64_t __t1561t__=0;
  uint64_t i=0;
  uint64_t __t1562t__value=0;
  uint64_t __t1563t=0;
  uint64_t __t1564t__value=0;
  uint64_t __t1565t__=0;
  uint64_t __t1566t__=0;
  char* __t1567t__=0;
  char __t1568t__value=0;
  uint64_t __t1569t__=0;
  uint64_t __t1570t__=0;
  uint64_t __t1571t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1556t=5381;
  __t1557t=__t1556t;
  h=__t1557t;
  len__t759t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1558t__);
  range__t471t(__t1558t__,&__t1559t__from,&__t1559t__to);
  iter__from=__t1559t__from;
  iter__to=__t1559t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1561t__);
  __t1560t=__t_complain;
  i=__t1561t__;
  __t1560t=__t1560t==0;
  if(!__t1560t){
  break;
  }
  bits__t448t(h,&__t1562t__value);
  __t1563t=5;
  lshift__t458t(__t1562t__value,__t1563t,&__t1564t__value);
  nat__t454t(__t1564t__value,&__t1565t__);
  add__t175t(__t1565t__,h,&__t1566t__);
  get__t932t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1567t__);
  if(!__t1567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1568t__value,__t1567t__,1);
  nat__t446t(__t1568t__value,&__t1569t__);
  add__t175t(__t1566t__,__t1569t__,&__t1570t__);
  h=__t1570t__;
  }
  __t_errcode=mod__t228t(h,size,&__t1571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2224t=__t1571t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2225t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2225t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2226t) {
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
  *__t2226t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t2227t, uint64_t* __t2228t, uint16_t* __t2229t, uint16_t* __t2230t, uint64_t i, char** __t2231t) {
  char* buffer__unsafe_ptr=*__t2227t;
  uint64_t buffer__unsafe_size=*__t2228t;
  uint16_t buffer__unsafe_offset=*__t2229t;
  uint16_t buffer__unsafe_align=*__t2230t;
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
  *__t2227t=buffer__unsafe_ptr;
  *__t2228t=buffer__unsafe_size;
  *__t2229t=buffer__unsafe_offset;
  *__t2230t=buffer__unsafe_align;
  *__t2231t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t763t(char x, char y, char* __t2232t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2232t=z;
}

static inline __attribute__((always_inline)) void eq__t820t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2233t) {
  uint64_t __t821t__=0;
  uint64_t n=0;
  uint64_t __t822t__=0;
  char __t823t__=0;
  char __t824t=0;
  char __t825t__=0;
  char __t826t=0;
  char z=0;
  len__t759t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t821t__);
  n=__t821t__;
  len__t759t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t822t__);
  neq__t144t(n,__t822t__,&__t823t__);
  if(__t823t__){
  __t824t=0;
  goto __t_return;
  }
  neq__t763t(x__dat__first,y__dat__first,&__t825t__);
  if(__t825t__){
  __t826t=0;
  __t824t=__t826t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t824t=z;
  goto __t_return;
  __t_return:
  *__t2233t=__t824t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2234t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2234t=z;
}

int at__t1886t(char** __t2235t, uint64_t* __t2236t, uint16_t* __t2237t, uint16_t* __t2238t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2239t) {
  char* data__unsafe_ptr=*__t2235t;
  uint64_t data__unsafe_size=*__t2236t;
  uint16_t data__unsafe_offset=*__t2237t;
  uint16_t data__unsafe_align=*__t2238t;
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__dat__pos=0;
  uint64_t __t1887t__dat__length=0;
  char __t1887t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1888t__=0;
  uint64_t __t1889t=0;
  uint64_t __t1890t=0;
  char* __t1891t__=0;
  char* __t1892t__s__unsafe_ptr=0;
  uint64_t __t1892t__s__dat__pos=0;
  uint64_t __t1892t__s__dat__length=0;
  char __t1892t__s__dat__first=0;
  uint64_t __t1892t__cost=0;
  char* __t1893t__unsafe_ptr=0;
  uint64_t __t1893t__dat__pos=0;
  uint64_t __t1893t__dat__length=0;
  char __t1893t__dat__first=0;
  int __t1894t=0;
  int __t1895t__=0;
  uint64_t __t1896t__=0;
  uint64_t n=0;
  uint64_t __t1897t__=0;
  uint64_t pos=0;
  uint64_t __t1898t__from=0;
  uint64_t __t1898t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1899t=0;
  uint64_t __t1900t__=0;
  uint64_t i=0;
  uint64_t __t1901t__=0;
  uint64_t __t1902t=0;
  uint64_t idx=0;
  char __t1903t__=0;
  uint64_t __t1904t__=0;
  uint64_t __t1905t=0;
  char __t1906t__=0;
  char* __t1907t__=0;
  char* __t1908t__s__unsafe_ptr=0;
  uint64_t __t1908t__s__dat__pos=0;
  uint64_t __t1908t__s__dat__length=0;
  char __t1908t__s__dat__first=0;
  uint64_t __t1908t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1909t__unsafe_ptr=0;
  uint64_t __t1909t__dat__pos=0;
  uint64_t __t1909t__dat__length=0;
  char __t1909t__dat__first=0;
  char __t1910t__=0;
  char* __t1911t__=0;
  char* __t1912t__unsafe_ptr=0;
  uint64_t __t1912t__dat__pos=0;
  uint64_t __t1912t__dat__length=0;
  char __t1912t__dat__first=0;
  char __t1913t__=0;
  char __t1914t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1915t__=0;
  char* __t1916t__s__unsafe_ptr=0;
  uint64_t __t1916t__s__dat__pos=0;
  uint64_t __t1916t__s__dat__length=0;
  char __t1916t__s__dat__first=0;
  uint64_t __t1916t__cost=0;
  char* __t1917t__unsafe_ptr=0;
  uint64_t __t1917t__dat__pos=0;
  uint64_t __t1917t__dat__length=0;
  char __t1917t__dat__first=0;
  char* __t1918t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1606t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1887t__unsafe_ptr,&__t1887t__dat__pos,&__t1887t__dat__length,&__t1887t__dat__first);
  k__unsafe_ptr=__t1887t__unsafe_ptr;
  k__dat__pos=__t1887t__dat__pos;
  k__dat__length=__t1887t__dat__length;
  k__dat__first=__t1887t__dat__first;
  is_zero__t1610t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1888t__);
  if(__t1888t__){
  __t1889t=0;
  goto __t_return;
  }
  __t1890t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1890t,&__t1891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1891t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1892t__s__unsafe_ptr,__t1891t__,8);
  memcpy(&__t1892t__s__dat__pos,__t1891t__+8,8);
  memcpy(&__t1892t__s__dat__length,__t1891t__+16,8);
  memcpy(&__t1892t__s__dat__first,__t1891t__+24,1);
  memcpy(&__t1892t__cost,__t1891t__+25,8);
  raw__t1604t(__t1892t__s__unsafe_ptr,__t1892t__s__dat__pos,__t1892t__s__dat__length,__t1892t__s__dat__first,__t1892t__cost,&__t1893t__unsafe_ptr,&__t1893t__dat__pos,&__t1893t__dat__length,&__t1893t__dat__first);
  not__t37t(__t1894t,&__t1895t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1896t__);
  n=__t1896t__;
  __t_errcode=hash__t1555t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1897t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1897t__;
  range__t471t(n,&__t1898t__from,&__t1898t__to);
  iter__from=__t1898t__from;
  iter__to=__t1898t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1900t__);
  __t1899t=__t_complain;
  i=__t1900t__;
  __t1899t=__t1899t==0;
  if(!__t1899t){
  break;
  }
  add__t175t(pos,i,&__t1901t__);
  __t1902t=__t1901t__;
  idx=__t1902t;
  ge__t324t(idx,n,&__t1903t__);
  if(__t1903t__){
  __t_errcode=sub__t352t(idx,n,&__t1904t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1904t__;
  }
  __t1905t=0;
  eq__t120t(idx,__t1905t,&__t1906t__);
  if(__t1906t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1907t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1908t__s__unsafe_ptr,__t1907t__,8);
  memcpy(&__t1908t__s__dat__pos,__t1907t__+8,8);
  memcpy(&__t1908t__s__dat__length,__t1907t__+16,8);
  memcpy(&__t1908t__s__dat__first,__t1907t__+24,1);
  memcpy(&__t1908t__cost,__t1907t__+25,8);
  entry__s__unsafe_ptr=__t1908t__s__unsafe_ptr;
  entry__s__dat__pos=__t1908t__s__dat__pos;
  entry__s__dat__length=__t1908t__s__dat__length;
  entry__s__dat__first=__t1908t__s__dat__first;
  entry__cost=__t1908t__cost;
  raw__t1604t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1909t__unsafe_ptr,&__t1909t__dat__pos,&__t1909t__dat__length,&__t1909t__dat__first);
  is_zero__t1610t(__t1909t__unsafe_ptr,__t1909t__dat__pos,__t1909t__dat__length,__t1909t__dat__first,&__t1910t__);
  if(__t1910t__){
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1911t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1911t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1911t__,&k__unsafe_ptr,8);
  memcpy(__t1911t__+8,&k__dat__pos,8);
  memcpy(__t1911t__+16,&k__dat__length,8);
  memcpy(__t1911t__+24,&k__dat__first,1);
  memcpy(__t1911t__+25,&i,8);
  __t1889t=idx;
  goto __t_return;
  }
  raw__t1604t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1912t__unsafe_ptr,&__t1912t__dat__pos,&__t1912t__dat__length,&__t1912t__dat__first);
  eq__t820t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1912t__unsafe_ptr,__t1912t__dat__pos,__t1912t__dat__length,__t1912t__dat__first,&__t1913t__);
  if(__t1913t__){
  __t1889t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t1914t__);
  if(__t1914t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1915t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1915t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1916t__s__unsafe_ptr,__t1915t__,8);
  memcpy(&__t1916t__s__dat__pos,__t1915t__+8,8);
  memcpy(&__t1916t__s__dat__length,__t1915t__+16,8);
  memcpy(&__t1916t__s__dat__first,__t1915t__+24,1);
  memcpy(&__t1916t__cost,__t1915t__+25,8);
  raw__t1604t(__t1916t__s__unsafe_ptr,__t1916t__s__dat__pos,__t1916t__s__dat__length,__t1916t__s__dat__first,__t1916t__cost,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length,&__t1917t__dat__first);
  k__unsafe_ptr=__t1917t__unsafe_ptr;
  k__dat__pos=__t1917t__dat__pos;
  k__dat__length=__t1917t__dat__length;
  k__dat__first=__t1917t__dat__first;
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1918t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1918t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1918t__,&tmp__unsafe_ptr,8);
  memcpy(__t1918t__+8,&tmp__dat__pos,8);
  memcpy(__t1918t__+16,&tmp__dat__length,8);
  memcpy(__t1918t__+24,&tmp__dat__first,1);
  memcpy(__t1918t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2235t=data__unsafe_ptr;
  *__t2236t=data__unsafe_size;
  *__t2237t=data__unsafe_offset;
  *__t2238t=data__unsafe_align;
  *__t2239t=__t1889t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2011t(char** __t2240t, uint64_t* __t2241t, uint16_t* __t2242t, uint16_t* __t2243t, char** __t2244t, uint64_t* __t2245t, uint16_t* __t2246t, uint16_t* __t2247t, const char* key, char** __t2248t) {
  char* keys__unsafe_ptr=*__t2240t;
  uint64_t keys__unsafe_size=*__t2241t;
  uint16_t keys__unsafe_offset=*__t2242t;
  uint16_t keys__unsafe_align=*__t2243t;
  char* values__unsafe_ptr=*__t2244t;
  uint64_t values__unsafe_size=*__t2245t;
  uint16_t values__unsafe_offset=*__t2246t;
  uint16_t values__unsafe_align=*__t2247t;
  char* __t2012t__unsafe_ptr=0;
  uint64_t __t2012t__dat__pos=0;
  uint64_t __t2012t__dat__length=0;
  char __t2012t__dat__first=0;
  uint64_t __t2013t__=0;
  char* __t2014t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(key,&__t2012t__unsafe_ptr,&__t2012t__dat__pos,&__t2012t__dat__length,&__t2012t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1886t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2012t__unsafe_ptr,__t2012t__dat__pos,__t2012t__dat__length,__t2012t__dat__first,&__t2013t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t633t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2013t__,&__t2014t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2240t=keys__unsafe_ptr;
  *__t2241t=keys__unsafe_size;
  *__t2242t=keys__unsafe_offset;
  *__t2243t=keys__unsafe_align;
  *__t2244t=values__unsafe_ptr;
  *__t2245t=values__unsafe_size;
  *__t2246t=values__unsafe_offset;
  *__t2247t=values__unsafe_align;
  *__t2248t=__t2014t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t723t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  goto __t_return;
  __t_return:
  *__t2249t=other__unsafe_ptr;
  *__t2250t=other__dat__pos;
  *__t2251t=other__dat__length;
  *__t2252t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t851t(char** __t2253t, uint64_t* __t2254t, uint16_t* __t2255t, uint16_t* __t2256t, uint64_t* __t2257t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2258t, uint64_t* __t2259t, uint64_t* __t2260t, char* __t2261t) {
  char* CHARS__buf__unsafe_ptr=*__t2253t;
  uint64_t CHARS__buf__unsafe_size=*__t2254t;
  uint16_t CHARS__buf__unsafe_offset=*__t2255t;
  uint16_t CHARS__buf__unsafe_align=*__t2256t;
  uint64_t CHARS__pos=*__t2257t;
  char* __t852t__unsafe_ptr=0;
  uint64_t __t852t__dat__pos=0;
  uint64_t __t852t__dat__length=0;
  char __t852t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t next_pos=0;
  uint64_t __t855t__=0;
  char __t856t__=0;
  uint64_t __t857t=0;
  uint64_t __t858t__=0;
  uint64_t prev_pos=0;
  char* __t859t__unsafe_ptr=0;
  uint64_t __t859t__dat__pos=0;
  uint64_t __t859t__dat__length=0;
  char __t859t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t852t__unsafe_ptr,&__t852t__dat__pos,&__t852t__dat__length,&__t852t__dat__first);
  other__unsafe_ptr=__t852t__unsafe_ptr;
  other__dat__pos=__t852t__dat__pos;
  other__dat__length=__t852t__dat__length;
  other__dat__first=__t852t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t853t__);
  add__t175t(CHARS__pos,__t853t__,&__t854t__);
  next_pos=__t854t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t855t__);
  gt__t276t(next_pos,__t855t__,&__t856t__);
  if(__t856t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t857t=0;
  add__t175t(CHARS__pos,__t857t,&__t858t__);
  prev_pos=__t858t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t859t__unsafe_ptr,&__t859t__dat__pos,&__t859t__dat__length,&__t859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2253t=CHARS__buf__unsafe_ptr;
  *__t2254t=CHARS__buf__unsafe_size;
  *__t2255t=CHARS__buf__unsafe_offset;
  *__t2256t=CHARS__buf__unsafe_align;
  *__t2257t=CHARS__pos;
  *__t2258t=__t859t__unsafe_ptr;
  *__t2259t=__t859t__dat__pos;
  *__t2260t=__t859t__dat__length;
  *__t2261t=__t859t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2025t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2262t, char** __t2263t, uint64_t* __t2264t, uint64_t* __t2265t, char* __t2266t) {
  uint64_t pos=*__t2262t;
  uint64_t __t2026t=0;
  char __t2027t__=0;
  uint64_t __t2028t=0;
  uint64_t __t2029t__=0;
  uint64_t __t2030t=0;
  char* __t2031t__=0;
  char* __t2032t__s__unsafe_ptr=0;
  uint64_t __t2032t__s__dat__pos=0;
  uint64_t __t2032t__s__dat__length=0;
  char __t2032t__s__dat__first=0;
  uint64_t __t2032t__cost=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__dat__pos=0;
  uint64_t __t2033t__dat__length=0;
  char __t2033t__dat__first=0;
  char* __t2034t__=0;
  char* __t2035t__s__unsafe_ptr=0;
  uint64_t __t2035t__s__dat__pos=0;
  uint64_t __t2035t__s__dat__length=0;
  char __t2035t__s__dat__first=0;
  uint64_t __t2035t__cost=0;
  char* __t2036t__unsafe_ptr=0;
  uint64_t __t2036t__dat__pos=0;
  uint64_t __t2036t__dat__length=0;
  char __t2036t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2037t=0;
  uint64_t __t2038t__=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__dat__pos=0;
  uint64_t __t2039t__dat__length=0;
  char __t2039t__dat__first=0;
  char __t2040t__=0;
  char* __t2041t__=0;
  char* __t2042t__s__unsafe_ptr=0;
  uint64_t __t2042t__s__dat__pos=0;
  uint64_t __t2042t__s__dat__length=0;
  char __t2042t__s__dat__first=0;
  uint64_t __t2042t__cost=0;
  char* __t2043t__unsafe_ptr=0;
  uint64_t __t2043t__dat__pos=0;
  uint64_t __t2043t__dat__length=0;
  char __t2043t__dat__first=0;
  uint64_t __t2044t=0;
  uint64_t __t2045t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2026t=0;
  eq__t120t(pos,__t2026t,&__t2027t__);
  if(__t2027t__){
  __t2028t=1;
  add__t175t(pos,__t2028t,&__t2029t__);
  pos=__t2029t__;
  __t2030t=0;
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2030t,&__t2031t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2031t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2032t__s__unsafe_ptr,__t2031t__,8);
  memcpy(&__t2032t__s__dat__pos,__t2031t__+8,8);
  memcpy(&__t2032t__s__dat__length,__t2031t__+16,8);
  memcpy(&__t2032t__s__dat__first,__t2031t__+24,1);
  memcpy(&__t2032t__cost,__t2031t__+25,8);
  raw__t1604t(__t2032t__s__unsafe_ptr,__t2032t__s__dat__pos,__t2032t__s__dat__length,__t2032t__s__dat__first,__t2032t__cost,&__t2033t__unsafe_ptr,&__t2033t__dat__pos,&__t2033t__dat__length,&__t2033t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2034t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2034t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2035t__s__unsafe_ptr,__t2034t__,8);
  memcpy(&__t2035t__s__dat__pos,__t2034t__+8,8);
  memcpy(&__t2035t__s__dat__length,__t2034t__+16,8);
  memcpy(&__t2035t__s__dat__first,__t2034t__+24,1);
  memcpy(&__t2035t__cost,__t2034t__+25,8);
  raw__t1604t(__t2035t__s__unsafe_ptr,__t2035t__s__dat__pos,__t2035t__s__dat__length,__t2035t__s__dat__first,__t2035t__cost,&__t2036t__unsafe_ptr,&__t2036t__dat__pos,&__t2036t__dat__length,&__t2036t__dat__first);
  ret__unsafe_ptr=__t2036t__unsafe_ptr;
  ret__dat__pos=__t2036t__dat__pos;
  ret__dat__length=__t2036t__dat__length;
  ret__dat__first=__t2036t__dat__first;
  __t2037t=1;
  add__t175t(pos,__t2037t,&__t2038t__);
  pos=__t2038t__;
  while(1){
  raw__t1606t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2039t__unsafe_ptr,&__t2039t__dat__pos,&__t2039t__dat__length,&__t2039t__dat__first);
  is_zero__t1610t(__t2039t__unsafe_ptr,__t2039t__dat__pos,__t2039t__dat__length,__t2039t__dat__first,&__t2040t__);
  if(!__t2040t__){
  break;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2041t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2041t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2042t__s__unsafe_ptr,__t2041t__,8);
  memcpy(&__t2042t__s__dat__pos,__t2041t__+8,8);
  memcpy(&__t2042t__s__dat__length,__t2041t__+16,8);
  memcpy(&__t2042t__s__dat__first,__t2041t__+24,1);
  memcpy(&__t2042t__cost,__t2041t__+25,8);
  raw__t1604t(__t2042t__s__unsafe_ptr,__t2042t__s__dat__pos,__t2042t__s__dat__length,__t2042t__s__dat__first,__t2042t__cost,&__t2043t__unsafe_ptr,&__t2043t__dat__pos,&__t2043t__dat__length,&__t2043t__dat__first);
  ret__unsafe_ptr=__t2043t__unsafe_ptr;
  ret__dat__pos=__t2043t__dat__pos;
  ret__dat__length=__t2043t__dat__length;
  ret__dat__first=__t2043t__dat__first;
  __t2044t=1;
  add__t175t(pos,__t2044t,&__t2045t__);
  pos=__t2045t__;
  }
  __t2033t__unsafe_ptr=ret__unsafe_ptr;
  __t2033t__dat__pos=ret__dat__pos;
  __t2033t__dat__length=ret__dat__length;
  __t2033t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2262t=pos;
  *__t2263t=__t2033t__unsafe_ptr;
  *__t2264t=__t2033t__dat__pos;
  *__t2265t=__t2033t__dat__length;
  *__t2266t=__t2033t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2076t(char** __t2267t, uint64_t* __t2268t, uint16_t* __t2269t, uint16_t* __t2270t, uint64_t* __t2271t, char** __t2272t, uint64_t* __t2273t, uint16_t* __t2274t, uint16_t* __t2275t, char** __t2276t, uint64_t* __t2277t, uint16_t* __t2278t, uint16_t* __t2279t) {
  char* buf__buf__unsafe_ptr=*__t2267t;
  uint64_t buf__buf__unsafe_size=*__t2268t;
  uint16_t buf__buf__unsafe_offset=*__t2269t;
  uint16_t buf__buf__unsafe_align=*__t2270t;
  uint64_t buf__pos=*__t2271t;
  char* __t2077t__unsafe_ptr=0;
  uint64_t __t2077t__unsafe_size=0;
  uint16_t __t2077t__unsafe_offset=0;
  uint16_t __t2077t__unsafe_align=0;
  uint64_t __t2078t=0;
  char* __t2079t__unsafe_ptr=0;
  uint64_t __t2079t__unsafe_size=0;
  uint16_t __t2079t__unsafe_offset=0;
  uint16_t __t2079t__unsafe_align=0;
  char __t2080t____t534t__=0;
  char* __t2081t__keys__unsafe_ptr=0;
  uint64_t __t2081t__keys__unsafe_size=0;
  uint16_t __t2081t__keys__unsafe_offset=0;
  uint16_t __t2081t__keys__unsafe_align=0;
  char* __t2081t__values__unsafe_ptr=0;
  uint64_t __t2081t__values__unsafe_size=0;
  uint16_t __t2081t__values__unsafe_offset=0;
  uint16_t __t2081t__values__unsafe_align=0;
  char __t2082t____t1994t____t534t__=0;
  char* __t2083t__keys__unsafe_ptr=0;
  uint64_t __t2083t__keys__unsafe_size=0;
  uint16_t __t2083t__keys__unsafe_offset=0;
  uint16_t __t2083t__keys__unsafe_align=0;
  char* __t2083t__values__unsafe_ptr=0;
  uint64_t __t2083t__values__unsafe_size=0;
  uint16_t __t2083t__values__unsafe_offset=0;
  uint16_t __t2083t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2085t__=0;
  char* __t2087t__unsafe_ptr=0;
  uint64_t __t2087t__dat__pos=0;
  uint64_t __t2087t__dat__length=0;
  char __t2087t__dat__first=0;
  char* __t2088t__unsafe_ptr=0;
  uint64_t __t2088t__dat__pos=0;
  uint64_t __t2088t__dat__length=0;
  char __t2088t__dat__first=0;
  char* __t2090t__=0;
  char* __t2092t__unsafe_ptr=0;
  uint64_t __t2092t__dat__pos=0;
  uint64_t __t2092t__dat__length=0;
  char __t2092t__dat__first=0;
  char* __t2093t__unsafe_ptr=0;
  uint64_t __t2093t__dat__pos=0;
  uint64_t __t2093t__dat__length=0;
  char __t2093t__dat__first=0;
  char* __t2094t__buf__unsafe_ptr=0;
  uint64_t __t2094t__buf__unsafe_size=0;
  uint16_t __t2094t__buf__unsafe_offset=0;
  uint16_t __t2094t__buf__unsafe_align=0;
  uint64_t __t2094t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t2095t=0;
  char* __t2096t__unsafe_ptr=0;
  uint64_t __t2096t__dat__pos=0;
  uint64_t __t2096t__dat__length=0;
  char __t2096t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2068t(&__t2077t__unsafe_ptr,&__t2077t__unsafe_size,&__t2077t__unsafe_offset,&__t2077t__unsafe_align);
  __t2078t=128;
  __t_errcode=alloc__t532t(&__t2077t__unsafe_ptr,&__t2077t__unsafe_size,&__t2077t__unsafe_offset,&__t2077t__unsafe_align,__t2078t,&__t2079t__unsafe_ptr,&__t2079t__unsafe_size,&__t2079t__unsafe_offset,&__t2079t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1987t(&__t2079t__unsafe_ptr,&__t2079t__unsafe_size,&__t2079t__unsafe_offset,&__t2079t__unsafe_align,&__t2081t__keys__unsafe_ptr,&__t2081t__keys__unsafe_size,&__t2081t__keys__unsafe_offset,&__t2081t__keys__unsafe_align,&__t2081t__values__unsafe_ptr,&__t2081t__values__unsafe_size,&__t2081t__values__unsafe_offset,&__t2081t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2083t__keys__unsafe_ptr=__t2081t__keys__unsafe_ptr;
  __t2083t__keys__unsafe_size=__t2081t__keys__unsafe_size;
  __t2083t__keys__unsafe_offset=__t2081t__keys__unsafe_offset;
  __t2083t__keys__unsafe_align=__t2081t__keys__unsafe_align;
  __t2083t__values__unsafe_ptr=__t2081t__values__unsafe_ptr;
  __t2083t__values__unsafe_size=__t2081t__values__unsafe_size;
  __t2083t__values__unsafe_offset=__t2081t__values__unsafe_offset;
  __t2083t__values__unsafe_align=__t2081t__values__unsafe_align;
  __t_errcode=mutget__t2011t(&__t2083t__keys__unsafe_ptr,&__t2083t__keys__unsafe_size,&__t2083t__keys__unsafe_offset,&__t2083t__keys__unsafe_align,&__t2083t__values__unsafe_ptr,&__t2083t__values__unsafe_size,&__t2083t__values__unsafe_offset,&__t2083t__values__unsafe_align,__t2084t,&__t2085t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t750t(__t2086t,&__t2087t__unsafe_ptr,&__t2087t__dat__pos,&__t2087t__dat__length,&__t2087t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t851t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2087t__unsafe_ptr,__t2087t__dat__pos,__t2087t__dat__length,__t2087t__dat__first,&__t2088t__unsafe_ptr,&__t2088t__dat__pos,&__t2088t__dat__length,&__t2088t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2085t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2085t__,&__t2088t__unsafe_ptr,8);
  memcpy(__t2085t__+8,&__t2088t__dat__pos,8);
  memcpy(__t2085t__+16,&__t2088t__dat__length,8);
  memcpy(__t2085t__+24,&__t2088t__dat__first,1);
  __t_errcode=mutget__t2011t(&__t2083t__keys__unsafe_ptr,&__t2083t__keys__unsafe_size,&__t2083t__keys__unsafe_offset,&__t2083t__keys__unsafe_align,&__t2083t__values__unsafe_ptr,&__t2083t__values__unsafe_size,&__t2083t__values__unsafe_offset,&__t2083t__values__unsafe_align,__t2089t,&__t2090t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t750t(__t2091t,&__t2092t__unsafe_ptr,&__t2092t__dat__pos,&__t2092t__dat__length,&__t2092t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t851t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2092t__unsafe_ptr,__t2092t__dat__pos,__t2092t__dat__length,__t2092t__dat__first,&__t2093t__unsafe_ptr,&__t2093t__dat__pos,&__t2093t__dat__length,&__t2093t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2090t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2090t__,&__t2093t__unsafe_ptr,8);
  memcpy(__t2090t__+8,&__t2093t__dat__pos,8);
  memcpy(__t2090t__+16,&__t2093t__dat__length,8);
  memcpy(__t2090t__+24,&__t2093t__dat__first,1);
  arena__t677t(&__t2083t__keys__unsafe_ptr,&__t2083t__keys__unsafe_size,&__t2083t__keys__unsafe_offset,&__t2083t__keys__unsafe_align,&__t2094t__buf__unsafe_ptr,&__t2094t__buf__unsafe_size,&__t2094t__buf__unsafe_offset,&__t2094t__buf__unsafe_align,&__t2094t__pos);
  it__pos=__t2094t__pos;
  while(1){
  __t_complain=next__t2025t(__t2083t__keys__unsafe_ptr,__t2083t__keys__unsafe_size,__t2083t__keys__unsafe_offset,__t2083t__keys__unsafe_align,&it__pos,&__t2096t__unsafe_ptr,&__t2096t__dat__pos,&__t2096t__dat__length,&__t2096t__dat__first);
  __t2095t=__t_complain;
  key__unsafe_ptr=__t2096t__unsafe_ptr;
  key__dat__pos=__t2096t__dat__pos;
  key__dat__length=__t2096t__dat__length;
  key__dat__first=__t2096t__dat__first;
  __t2095t=__t2095t==0;
  if(!__t2095t){
  break;
  }
  print__t893t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2083t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2083t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2083t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2083t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2083t__values__unsafe_ptr;
  map__values__unsafe_size=__t2083t__values__unsafe_size;
  map__values__unsafe_offset=__t2083t__values__unsafe_offset;
  map__values__unsafe_align=__t2083t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2082t____t1994t____t534t__);
  if(__t2082t____t1994t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2080t____t534t__);
  if(__t2080t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2267t=buf__buf__unsafe_ptr;
  *__t2268t=buf__buf__unsafe_size;
  *__t2269t=buf__buf__unsafe_offset;
  *__t2270t=buf__buf__unsafe_align;
  *__t2271t=buf__pos;
  *__t2272t=map__keys__unsafe_ptr;
  *__t2273t=map__keys__unsafe_size;
  *__t2274t=map__keys__unsafe_offset;
  *__t2275t=map__keys__unsafe_align;
  *__t2276t=map__values__unsafe_ptr;
  *__t2277t=map__values__unsafe_size;
  *__t2278t=map__values__unsafe_offset;
  *__t2279t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2098t(char** __t2280t, uint64_t* __t2281t, uint16_t* __t2282t, uint16_t* __t2283t, char** __t2284t, uint64_t* __t2285t, uint16_t* __t2286t, uint16_t* __t2287t, char** __t2288t, uint64_t* __t2289t, uint16_t* __t2290t, uint16_t* __t2291t, uint64_t* __t2292t) {
  char* __t2101t__unsafe_ptr=0;
  uint64_t __t2101t__unsafe_size=0;
  uint16_t __t2101t__unsafe_offset=0;
  uint16_t __t2101t__unsafe_align=0;
  uint64_t __t2102t=0;
  uint64_t __t2103t__=0;
  char* __t2104t__unsafe_ptr=0;
  uint64_t __t2104t__unsafe_size=0;
  uint16_t __t2104t__unsafe_offset=0;
  uint16_t __t2104t__unsafe_align=0;
  char __t2105t____t534t__=0;
  char* __t2106t__buf__unsafe_ptr=0;
  uint64_t __t2106t__buf__unsafe_size=0;
  uint16_t __t2106t__buf__unsafe_offset=0;
  uint16_t __t2106t__buf__unsafe_align=0;
  uint64_t __t2106t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2107t__keys__unsafe_ptr=0;
  uint64_t __t2107t__keys__unsafe_size=0;
  uint16_t __t2107t__keys__unsafe_offset=0;
  uint16_t __t2107t__keys__unsafe_align=0;
  char* __t2107t__values__unsafe_ptr=0;
  uint64_t __t2107t__values__unsafe_size=0;
  uint16_t __t2107t__values__unsafe_offset=0;
  uint16_t __t2107t__values__unsafe_align=0;
  char __t2108t____t2080t____t534t__=0;
  char __t2108t____t2082t____t1994t____t534t__=0;
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
  char____t_buffer____buffer__t2099t(&__t2101t__unsafe_ptr,&__t2101t__unsafe_size,&__t2101t__unsafe_offset,&__t2101t__unsafe_align);
  __t2102t=4;
  KB__t481t(__t2102t,&__t2103t__);
  __t_errcode=alloc__t532t(&__t2101t__unsafe_ptr,&__t2101t__unsafe_size,&__t2101t__unsafe_offset,&__t2101t__unsafe_align,__t2103t__,&__t2104t__unsafe_ptr,&__t2104t__unsafe_size,&__t2104t__unsafe_offset,&__t2104t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t677t(&__t2104t__unsafe_ptr,&__t2104t__unsafe_size,&__t2104t__unsafe_offset,&__t2104t__unsafe_align,&__t2106t__buf__unsafe_ptr,&__t2106t__buf__unsafe_size,&__t2106t__buf__unsafe_offset,&__t2106t__buf__unsafe_align,&__t2106t__pos);
  buf__buf__unsafe_ptr=__t2106t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2106t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2106t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2106t__buf__unsafe_align;
  buf__pos=__t2106t__pos;
  __t_errcode=test__t2076t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2107t__keys__unsafe_ptr,&__t2107t__keys__unsafe_size,&__t2107t__keys__unsafe_offset,&__t2107t__keys__unsafe_align,&__t2107t__values__unsafe_ptr,&__t2107t__values__unsafe_size,&__t2107t__values__unsafe_offset,&__t2107t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2107t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2107t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2107t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2107t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2107t__values__unsafe_ptr;
  map__values__unsafe_size=__t2107t__values__unsafe_size;
  map__values__unsafe_offset=__t2107t__values__unsafe_offset;
  map__values__unsafe_align=__t2107t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2108t____t2082t____t1994t____t534t__);
  if(__t2108t____t2082t____t1994t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2108t____t2080t____t534t__);
  if(__t2108t____t2080t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  exists__t447t(buf__buf__unsafe_ptr,&__t2105t____t534t__);
  if(__t2105t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2280t=map__keys__unsafe_ptr;
  *__t2281t=map__keys__unsafe_size;
  *__t2282t=map__keys__unsafe_offset;
  *__t2283t=map__keys__unsafe_align;
  *__t2284t=map__values__unsafe_ptr;
  *__t2285t=map__values__unsafe_size;
  *__t2286t=map__values__unsafe_offset;
  *__t2287t=map__values__unsafe_align;
  *__t2288t=buf__buf__unsafe_ptr;
  *__t2289t=buf__buf__unsafe_size;
  *__t2290t=buf__buf__unsafe_offset;
  *__t2291t=buf__buf__unsafe_align;
  *__t2292t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t1608t(const char* r, char** __t2293t, uint64_t* __t2294t, uint64_t* __t2295t, char* __t2296t) {
  char* __t1609t__unsafe_ptr=0;
  uint64_t __t1609t__dat__pos=0;
  uint64_t __t1609t__dat__length=0;
  char __t1609t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(r,&__t1609t__unsafe_ptr,&__t1609t__dat__pos,&__t1609t__dat__length,&__t1609t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2293t=__t1609t__unsafe_ptr;
  *__t2294t=__t1609t__dat__pos;
  *__t2295t=__t1609t__dat__length;
  *__t2296t=__t1609t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t1652t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2297t) {
  char* __t1653t__unsafe_ptr=0;
  uint64_t __t1653t__dat__pos=0;
  uint64_t __t1653t__dat__length=0;
  char __t1653t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1654t__=0;
  uint64_t __t1655t=0;
  uint64_t __t1656t=0;
  char* __t1657t__=0;
  char* __t1658t__s__unsafe_ptr=0;
  uint64_t __t1658t__s__dat__pos=0;
  uint64_t __t1658t__s__dat__length=0;
  char __t1658t__s__dat__first=0;
  uint64_t __t1658t__cost=0;
  char* __t1659t__unsafe_ptr=0;
  uint64_t __t1659t__dat__pos=0;
  uint64_t __t1659t__dat__length=0;
  char __t1659t__dat__first=0;
  int __t1660t=0;
  int __t1661t__=0;
  uint64_t __t1662t__=0;
  uint64_t n=0;
  uint64_t __t1663t__=0;
  uint64_t pos=0;
  uint64_t __t1664t__from=0;
  uint64_t __t1664t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1665t=0;
  uint64_t __t1666t__=0;
  uint64_t i=0;
  uint64_t __t1667t__=0;
  uint64_t __t1668t=0;
  uint64_t idx=0;
  char __t1669t__=0;
  uint64_t __t1670t__=0;
  uint64_t __t1671t=0;
  char __t1672t__=0;
  char* __t1673t__=0;
  char* __t1674t__s__unsafe_ptr=0;
  uint64_t __t1674t__s__dat__pos=0;
  uint64_t __t1674t__s__dat__length=0;
  char __t1674t__s__dat__first=0;
  uint64_t __t1674t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1675t__unsafe_ptr=0;
  uint64_t __t1675t__dat__pos=0;
  uint64_t __t1675t__dat__length=0;
  char __t1675t__dat__first=0;
  char __t1676t__=0;
  char* __t1677t__unsafe_ptr=0;
  uint64_t __t1677t__dat__pos=0;
  uint64_t __t1677t__dat__length=0;
  char __t1677t__dat__first=0;
  char __t1678t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1606t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1653t__unsafe_ptr,&__t1653t__dat__pos,&__t1653t__dat__length,&__t1653t__dat__first);
  k__unsafe_ptr=__t1653t__unsafe_ptr;
  k__dat__pos=__t1653t__dat__pos;
  k__dat__length=__t1653t__dat__length;
  k__dat__first=__t1653t__dat__first;
  is_zero__t1610t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1654t__);
  if(__t1654t__){
  __t1655t=0;
  goto __t_return;
  }
  __t1656t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1656t,&__t1657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1657t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1658t__s__unsafe_ptr,__t1657t__,8);
  memcpy(&__t1658t__s__dat__pos,__t1657t__+8,8);
  memcpy(&__t1658t__s__dat__length,__t1657t__+16,8);
  memcpy(&__t1658t__s__dat__first,__t1657t__+24,1);
  memcpy(&__t1658t__cost,__t1657t__+25,8);
  raw__t1604t(__t1658t__s__unsafe_ptr,__t1658t__s__dat__pos,__t1658t__s__dat__length,__t1658t__s__dat__first,__t1658t__cost,&__t1659t__unsafe_ptr,&__t1659t__dat__pos,&__t1659t__dat__length,&__t1659t__dat__first);
  not__t37t(__t1660t,&__t1661t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1662t__);
  n=__t1662t__;
  __t_errcode=hash__t1555t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1663t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1663t__;
  range__t471t(n,&__t1664t__from,&__t1664t__to);
  iter__from=__t1664t__from;
  iter__to=__t1664t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1666t__);
  __t1665t=__t_complain;
  i=__t1666t__;
  __t1665t=__t1665t==0;
  if(!__t1665t){
  break;
  }
  add__t175t(pos,i,&__t1667t__);
  __t1668t=__t1667t__;
  idx=__t1668t;
  ge__t324t(idx,n,&__t1669t__);
  if(__t1669t__){
  __t_errcode=sub__t352t(idx,n,&__t1670t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1670t__;
  }
  __t1671t=0;
  eq__t120t(idx,__t1671t,&__t1672t__);
  if(__t1672t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1673t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1673t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1674t__s__unsafe_ptr,__t1673t__,8);
  memcpy(&__t1674t__s__dat__pos,__t1673t__+8,8);
  memcpy(&__t1674t__s__dat__length,__t1673t__+16,8);
  memcpy(&__t1674t__s__dat__first,__t1673t__+24,1);
  memcpy(&__t1674t__cost,__t1673t__+25,8);
  entry__s__unsafe_ptr=__t1674t__s__unsafe_ptr;
  entry__s__dat__pos=__t1674t__s__dat__pos;
  entry__s__dat__length=__t1674t__s__dat__length;
  entry__s__dat__first=__t1674t__s__dat__first;
  entry__cost=__t1674t__cost;
  raw__t1604t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1675t__unsafe_ptr,&__t1675t__dat__pos,&__t1675t__dat__length,&__t1675t__dat__first);
  is_zero__t1610t(__t1675t__unsafe_ptr,__t1675t__dat__pos,__t1675t__dat__length,__t1675t__dat__first,&__t1676t__);
  if(__t1676t__){
  continue;
  }
  raw__t1604t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1677t__unsafe_ptr,&__t1677t__dat__pos,&__t1677t__dat__length,&__t1677t__dat__first);
  eq__t820t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1677t__unsafe_ptr,__t1677t__dat__pos,__t1677t__dat__length,__t1677t__dat__first,&__t1678t__);
  if(__t1678t__){
  __t1655t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2297t=__t1655t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2003t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2298t) {
  char* __t2004t__unsafe_ptr=0;
  uint64_t __t2004t__dat__pos=0;
  uint64_t __t2004t__dat__length=0;
  char __t2004t__dat__first=0;
  uint64_t __t2005t__=0;
  char* __t2006t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1608t(key,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1652t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2004t__unsafe_ptr,__t2004t__dat__pos,__t2004t__dat__length,__t2004t__dat__first,&__t2005t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t640t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2005t__,&__t2006t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2298t=__t2006t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2109t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2110t__=0;
  char* __t2111t__unsafe_ptr=0;
  uint64_t __t2111t__dat__pos=0;
  uint64_t __t2111t__dat__length=0;
  char __t2111t__dat__first=0;
  char* __t2113t__=0;
  char* __t2114t__unsafe_ptr=0;
  uint64_t __t2114t__dat__pos=0;
  uint64_t __t2114t__dat__length=0;
  char __t2114t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2003t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2084t,&__t2110t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2110t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2111t__unsafe_ptr,__t2110t__,8);
  memcpy(&__t2111t__dat__pos,__t2110t__+8,8);
  memcpy(&__t2111t__dat__length,__t2110t__+16,8);
  memcpy(&__t2111t__dat__first,__t2110t__+24,1);
  print__t893t(__t2111t__unsafe_ptr,__t2111t__dat__pos,__t2111t__dat__length,__t2111t__dat__first);
  __t_errcode=get__t2003t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2089t,&__t2113t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2113t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2114t__unsafe_ptr,__t2113t__,8);
  memcpy(&__t2114t__dat__pos,__t2113t__+8,8);
  memcpy(&__t2114t__dat__length,__t2113t__+16,8);
  memcpy(&__t2114t__dat__first,__t2113t__+24,1);
  print__t893t(__t2114t__unsafe_ptr,__t2114t__dat__pos,__t2114t__dat__length,__t2114t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2116t() {
  char* __t2118t__map__keys__unsafe_ptr=0;
  uint64_t __t2118t__map__keys__unsafe_size=0;
  uint16_t __t2118t__map__keys__unsafe_offset=0;
  uint16_t __t2118t__map__keys__unsafe_align=0;
  char* __t2118t__map__values__unsafe_ptr=0;
  uint64_t __t2118t__map__values__unsafe_size=0;
  uint16_t __t2118t__map__values__unsafe_offset=0;
  uint16_t __t2118t__map__values__unsafe_align=0;
  char* __t2118t__buf__buf__unsafe_ptr=0;
  uint64_t __t2118t__buf__buf__unsafe_size=0;
  uint16_t __t2118t__buf__buf__unsafe_offset=0;
  uint16_t __t2118t__buf__buf__unsafe_align=0;
  uint64_t __t2118t__buf__pos=0;
  char __t2119t____t2105t____t534t__=0;
  char __t2119t____t2108t____t2080t____t534t__=0;
  char __t2119t____t2108t____t2082t____t1994t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2098t(&__t2118t__map__keys__unsafe_ptr,&__t2118t__map__keys__unsafe_size,&__t2118t__map__keys__unsafe_offset,&__t2118t__map__keys__unsafe_align,&__t2118t__map__values__unsafe_ptr,&__t2118t__map__values__unsafe_size,&__t2118t__map__values__unsafe_offset,&__t2118t__map__values__unsafe_align,&__t2118t__buf__buf__unsafe_ptr,&__t2118t__buf__buf__unsafe_size,&__t2118t__buf__buf__unsafe_offset,&__t2118t__buf__buf__unsafe_align,&__t2118t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2109t(__t2118t__map__keys__unsafe_ptr,__t2118t__map__keys__unsafe_size,__t2118t__map__keys__unsafe_offset,__t2118t__map__keys__unsafe_align,__t2118t__map__values__unsafe_ptr,__t2118t__map__values__unsafe_size,__t2118t__map__values__unsafe_offset,__t2118t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2118t__map__keys__unsafe_ptr,&__t2119t____t2108t____t2082t____t1994t____t534t__);
  if(__t2119t____t2108t____t2082t____t1994t____t534t__){
  free__t503t(&__t2118t__map__keys__unsafe_ptr);
  }
  exists__t447t(__t2118t__map__values__unsafe_ptr,&__t2119t____t2108t____t2080t____t534t__);
  if(__t2119t____t2108t____t2080t____t534t__){
  free__t503t(&__t2118t__map__values__unsafe_ptr);
  }
  exists__t447t(__t2118t__buf__buf__unsafe_ptr,&__t2119t____t2105t____t534t__);
  if(__t2119t____t2105t____t534t__){
  free__t503t(&__t2118t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2116t();return 0;}