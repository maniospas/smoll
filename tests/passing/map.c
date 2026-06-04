#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t2141t="hello";
const char* const __t2143t="hello world!";
const char* const __t2146t="manio";
const char* const __t2148t="it's a me, manio.";
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2157t(char** __t2179t, uint64_t* __t2180t, uint16_t* __t2181t, uint16_t* __t2182t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2179t=unsafe_ptr;
  *__t2180t=unsafe_size;
  *__t2181t=unsafe_offset;
  *__t2182t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2183t) {
  int value=0;
  *__t2183t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2184t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2184t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2185t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2185t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2186t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2186t=z;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2187t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2187t=__t483t__;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2188t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2188t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2189t) {
  char* allocated=*__t2189t;
  if(allocated){
  free(allocated);
  }
  *__t2189t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2190t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2190t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2191t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2191t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2192t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2192t=value;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2193t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2193t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2194t) {
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
  *__t2194t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2195t, uint64_t* __t2196t, uint16_t* __t2197t, uint16_t* __t2198t, uint64_t size, char** __t2199t, uint64_t* __t2200t, uint16_t* __t2201t, uint16_t* __t2202t) {
  char* buffer__unsafe_ptr=*__t2195t;
  uint64_t buffer__unsafe_size=*__t2196t;
  uint16_t buffer__unsafe_offset=*__t2197t;
  uint16_t buffer__unsafe_align=*__t2198t;
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
  *__t2195t=buffer__unsafe_ptr;
  *__t2196t=buffer__unsafe_size;
  *__t2197t=buffer__unsafe_offset;
  *__t2198t=buffer__unsafe_align;
  *__t2199t=buffer__unsafe_ptr;
  *__t2200t=buffer__unsafe_size;
  *__t2201t=buffer__unsafe_offset;
  *__t2202t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2203t, uint64_t* __t2204t, uint16_t* __t2205t, uint16_t* __t2206t, uint64_t _pos, char** __t2207t, uint64_t* __t2208t, uint16_t* __t2209t, uint16_t* __t2210t, uint64_t* __t2211t) {
  char* buf__unsafe_ptr=*__t2203t;
  uint64_t buf__unsafe_size=*__t2204t;
  uint16_t buf__unsafe_offset=*__t2205t;
  uint16_t buf__unsafe_align=*__t2206t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2203t=buf__unsafe_ptr;
  *__t2204t=buf__unsafe_size;
  *__t2205t=buf__unsafe_offset;
  *__t2206t=buf__unsafe_align;
  *__t2207t=buf__unsafe_ptr;
  *__t2208t=buf__unsafe_size;
  *__t2209t=buf__unsafe_offset;
  *__t2210t=buf__unsafe_align;
  *__t2211t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2212t, uint64_t* __t2213t, uint16_t* __t2214t, uint16_t* __t2215t, char** __t2216t, uint64_t* __t2217t, uint16_t* __t2218t, uint16_t* __t2219t, uint64_t* __t2220t) {
  char* buf__unsafe_ptr=*__t2212t;
  uint64_t buf__unsafe_size=*__t2213t;
  uint16_t buf__unsafe_offset=*__t2214t;
  uint16_t buf__unsafe_align=*__t2215t;
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
  *__t2212t=buf__unsafe_ptr;
  *__t2213t=buf__unsafe_size;
  *__t2214t=buf__unsafe_offset;
  *__t2215t=buf__unsafe_align;
  *__t2216t=__t657t__buf__unsafe_ptr;
  *__t2217t=__t657t__buf__unsafe_size;
  *__t2218t=__t657t__buf__unsafe_offset;
  *__t2219t=__t657t__buf__unsafe_align;
  *__t2220t=__t657t__pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2125t(char** __t2221t, uint64_t* __t2222t, uint16_t* __t2223t, uint16_t* __t2224t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2221t=unsafe_ptr;
  *__t2222t=unsafe_size;
  *__t2223t=unsafe_offset;
  *__t2224t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t2045t(char** __t2225t, uint64_t* __t2226t, uint16_t* __t2227t, uint16_t* __t2228t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2225t=unsafe_ptr;
  *__t2226t=unsafe_size;
  *__t2227t=unsafe_offset;
  *__t2228t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2229t) {
  goto __t_return;
  __t_return:
  *__t2229t=buffer__unsafe_size;
}

int strmap__t2044t(char** __t2230t, uint64_t* __t2231t, uint16_t* __t2232t, uint16_t* __t2233t, char** __t2234t, uint64_t* __t2235t, uint16_t* __t2236t, uint16_t* __t2237t, char** __t2238t, uint64_t* __t2239t, uint16_t* __t2240t, uint16_t* __t2241t) {
  char* values__unsafe_ptr=*__t2230t;
  uint64_t values__unsafe_size=*__t2231t;
  uint16_t values__unsafe_offset=*__t2232t;
  uint16_t values__unsafe_align=*__t2233t;
  char* __t2047t__unsafe_ptr=0;
  uint64_t __t2047t__unsafe_size=0;
  uint16_t __t2047t__unsafe_offset=0;
  uint16_t __t2047t__unsafe_align=0;
  char* __t2048t__unsafe_ptr=0;
  uint64_t __t2048t__unsafe_size=0;
  uint16_t __t2048t__unsafe_offset=0;
  uint16_t __t2048t__unsafe_align=0;
  uint64_t __t2049t__=0;
  char* __t2050t__unsafe_ptr=0;
  uint64_t __t2050t__unsafe_size=0;
  uint16_t __t2050t__unsafe_offset=0;
  uint16_t __t2050t__unsafe_align=0;
  char __t2051t____t534t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t2045t(&__t2047t__unsafe_ptr,&__t2047t__unsafe_size,&__t2047t__unsafe_offset,&__t2047t__unsafe_align);
  __t2048t__unsafe_ptr=__t2047t__unsafe_ptr;
  __t2048t__unsafe_size=__t2047t__unsafe_size;
  __t2048t__unsafe_offset=__t2047t__unsafe_offset;
  __t2048t__unsafe_align=__t2047t__unsafe_align;
  len__t647t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t2049t__);
  __t_errcode=alloc__t532t(&__t2048t__unsafe_ptr,&__t2048t__unsafe_size,&__t2048t__unsafe_offset,&__t2048t__unsafe_align,__t2049t__,&__t2050t__unsafe_ptr,&__t2050t__unsafe_size,&__t2050t__unsafe_offset,&__t2050t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t2050t__unsafe_ptr;
  keys__unsafe_size=__t2050t__unsafe_size;
  keys__unsafe_offset=__t2050t__unsafe_offset;
  keys__unsafe_align=__t2050t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(keys__unsafe_ptr,&__t2051t____t534t__);
  if(__t2051t____t534t__){
  free__t503t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2230t=values__unsafe_ptr;
  *__t2231t=values__unsafe_size;
  *__t2232t=values__unsafe_offset;
  *__t2233t=values__unsafe_align;
  *__t2234t=keys__unsafe_ptr;
  *__t2235t=keys__unsafe_size;
  *__t2236t=keys__unsafe_offset;
  *__t2237t=keys__unsafe_align;
  *__t2238t=values__unsafe_ptr;
  *__t2239t=values__unsafe_size;
  *__t2240t=values__unsafe_offset;
  *__t2241t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2242t, uint64_t* __t2243t, uint16_t* __t2244t, uint16_t* __t2245t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2242t=unsafe_ptr;
  *__t2243t=unsafe_size;
  *__t2244t=unsafe_offset;
  *__t2245t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2246t) {
  *__t2246t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2247t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2247t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2248t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2248t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2249t) {
  *__t2249t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2250t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2250t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2251t) {
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
  *__t2251t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2252t, uint64_t* __t2253t, uint64_t* __t2254t, char* __t2255t) {
  goto __t_return;
  __t_return:
  *__t2252t=unsafe_ptr;
  *__t2253t=dat__pos;
  *__t2254t=dat__length;
  *__t2255t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2256t, uint64_t* __t2257t, uint64_t* __t2258t, char* __t2259t) {
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
  *__t2256t=__t794t__unsafe_ptr;
  *__t2257t=__t794t__dat__pos;
  *__t2258t=__t794t__dat__length;
  *__t2259t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2260t, uint64_t* __t2261t, uint64_t* __t2262t, char* __t2263t) {
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
  *__t2260t=__t827t__unsafe_ptr;
  *__t2261t=__t827t__dat__pos;
  *__t2262t=__t827t__dat__length;
  *__t2263t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2264t, uint64_t* __t2265t, uint64_t* __t2266t, char* __t2267t) {
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
  *__t2264t=__t853t__unsafe_ptr;
  *__t2265t=__t853t__dat__pos;
  *__t2266t=__t853t__dat__length;
  *__t2267t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1663t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2268t, uint64_t* __t2269t, uint64_t* __t2270t, char* __t2271t) {
  goto __t_return;
  __t_return:
  *__t2268t=r__unsafe_ptr;
  *__t2269t=r__dat__pos;
  *__t2270t=r__dat__length;
  *__t2271t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2272t) {
  goto __t_return;
  __t_return:
  *__t2272t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1667t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2273t) {
  uint64_t __t1668t=0;
  uint64_t __t1669t__=0;
  char __t1670t__=0;
  __t1668t=0;
  len__t854t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1669t__);
  eq__t120t(__t1668t,__t1669t__,&__t1670t__);
  goto __t_return;
  __t_return:
  *__t2273t=__t1670t__;
}

static inline __attribute__((always_inline)) void raw__t1661t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2274t, uint64_t* __t2275t, uint64_t* __t2276t, char* __t2277t) {
  goto __t_return;
  __t_return:
  *__t2274t=r__s__unsafe_ptr;
  *__t2275t=r__s__dat__pos;
  *__t2276t=r__s__dat__length;
  *__t2277t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t2278t, uint64_t* __t2279t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t2278t=from;
  *__t2279t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t2280t, uint64_t* __t2281t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t2280t=__t473t__from;
  *__t2281t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t2282t, uint64_t r__to, uint64_t* __t2283t) {
  uint64_t r__from=*__t2282t;
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
  *__t2282t=r__from;
  *__t2283t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t2284t) {
  goto __t_return;
  __t_return:
  *__t2284t=value;
}

static inline __attribute__((always_inline)) void lshift__t458t(uint64_t x__value, uint64_t y, uint64_t* __t2285t) {
  uint64_t z=0;
  uint64_t __t459t__value=0;
  z=(x__value<<y);
  bits__t448t(z,&__t459t__value);
  goto __t_return;
  __t_return:
  *__t2285t=__t459t__value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x, uint64_t* __t2286t) {
  int __t444t=0;
  int __t445t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2286t=value;
}

static inline __attribute__((always_inline)) void nat__t454t(uint64_t x__value, uint64_t* __t2287t) {
  uint64_t __t455t__=0;
  nat__t443t(x__value,&__t455t__);
  goto __t_return;
  __t_return:
  *__t2287t=__t455t__;
}

static inline __attribute__((always_inline)) void get__t989t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2288t) {
  uint64_t __t990t__=0;
  char* __t991t__=0;
  add__t175t(s__dat__pos,i,&__t990t__);
  add__t505t(s__unsafe_ptr,__t990t__,&__t991t__);
  goto __t_return;
  __t_return:
  *__t2288t=__t991t__;
}

static inline __attribute__((always_inline)) void nat__t446t(char x, uint64_t* __t2289t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2289t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2290t) {
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
  *__t2290t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1612t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2291t) {
  uint64_t __t1613t=0;
  uint64_t __t1614t=0;
  uint64_t h=0;
  uint64_t __t1615t__=0;
  uint64_t __t1616t__from=0;
  uint64_t __t1616t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1617t=0;
  uint64_t __t1618t__=0;
  uint64_t i=0;
  uint64_t __t1619t__value=0;
  uint64_t __t1620t=0;
  uint64_t __t1621t__value=0;
  uint64_t __t1622t__=0;
  uint64_t __t1623t__=0;
  char* __t1624t__=0;
  char __t1625t__value=0;
  uint64_t __t1626t__=0;
  uint64_t __t1627t__=0;
  uint64_t __t1628t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1613t=5381;
  __t1614t=__t1613t;
  h=__t1614t;
  len__t854t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1615t__);
  range__t471t(__t1615t__,&__t1616t__from,&__t1616t__to);
  iter__from=__t1616t__from;
  iter__to=__t1616t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1618t__);
  __t1617t=__t_complain;
  i=__t1618t__;
  __t1617t=__t1617t==0;
  if(!__t1617t){
  break;
  }
  bits__t448t(h,&__t1619t__value);
  __t1620t=5;
  lshift__t458t(__t1619t__value,__t1620t,&__t1621t__value);
  nat__t454t(__t1621t__value,&__t1622t__);
  add__t175t(__t1622t__,h,&__t1623t__);
  get__t989t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1624t__);
  if(!__t1624t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1625t__value,__t1624t__,1);
  nat__t446t(__t1625t__value,&__t1626t__);
  add__t175t(__t1623t__,__t1626t__,&__t1627t__);
  h=__t1627t__;
  }
  __t_errcode=mod__t228t(h,size,&__t1628t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2291t=__t1628t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2292t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2292t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2293t) {
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
  *__t2293t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t2294t, uint64_t* __t2295t, uint16_t* __t2296t, uint16_t* __t2297t, uint64_t i, char** __t2298t) {
  char* buffer__unsafe_ptr=*__t2294t;
  uint64_t buffer__unsafe_size=*__t2295t;
  uint16_t buffer__unsafe_offset=*__t2296t;
  uint16_t buffer__unsafe_align=*__t2297t;
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
  *__t2294t=buffer__unsafe_ptr;
  *__t2295t=buffer__unsafe_size;
  *__t2296t=buffer__unsafe_offset;
  *__t2297t=buffer__unsafe_align;
  *__t2298t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t858t(char x, char y, char* __t2299t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2299t=z;
}

static inline __attribute__((always_inline)) void eq__t932t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2300t) {
  uint64_t __t933t__=0;
  uint64_t n=0;
  uint64_t __t934t__=0;
  char __t935t__=0;
  char __t936t=0;
  char __t937t__=0;
  char __t938t=0;
  char z=0;
  len__t854t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t933t__);
  n=__t933t__;
  len__t854t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t934t__);
  neq__t144t(n,__t934t__,&__t935t__);
  if(__t935t__){
  __t936t=0;
  goto __t_return;
  }
  neq__t858t(x__dat__first,y__dat__first,&__t937t__);
  if(__t937t__){
  __t938t=0;
  __t936t=__t938t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t936t=z;
  goto __t_return;
  __t_return:
  *__t2300t=__t936t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2301t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2301t=z;
}

int at__t1943t(char** __t2302t, uint64_t* __t2303t, uint16_t* __t2304t, uint16_t* __t2305t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2306t) {
  char* data__unsafe_ptr=*__t2302t;
  uint64_t data__unsafe_size=*__t2303t;
  uint16_t data__unsafe_offset=*__t2304t;
  uint16_t data__unsafe_align=*__t2305t;
  char* __t1944t__unsafe_ptr=0;
  uint64_t __t1944t__dat__pos=0;
  uint64_t __t1944t__dat__length=0;
  char __t1944t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1945t__=0;
  uint64_t __t1946t=0;
  uint64_t __t1947t=0;
  char* __t1948t__=0;
  char* __t1949t__s__unsafe_ptr=0;
  uint64_t __t1949t__s__dat__pos=0;
  uint64_t __t1949t__s__dat__length=0;
  char __t1949t__s__dat__first=0;
  uint64_t __t1949t__cost=0;
  char* __t1950t__unsafe_ptr=0;
  uint64_t __t1950t__dat__pos=0;
  uint64_t __t1950t__dat__length=0;
  char __t1950t__dat__first=0;
  int __t1951t=0;
  int __t1952t__=0;
  uint64_t __t1953t__=0;
  uint64_t n=0;
  uint64_t __t1954t__=0;
  uint64_t pos=0;
  uint64_t __t1955t__from=0;
  uint64_t __t1955t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1956t=0;
  uint64_t __t1957t__=0;
  uint64_t i=0;
  uint64_t __t1958t__=0;
  uint64_t __t1959t=0;
  uint64_t idx=0;
  char __t1960t__=0;
  uint64_t __t1961t__=0;
  uint64_t __t1962t=0;
  char __t1963t__=0;
  char* __t1964t__=0;
  char* __t1965t__s__unsafe_ptr=0;
  uint64_t __t1965t__s__dat__pos=0;
  uint64_t __t1965t__s__dat__length=0;
  char __t1965t__s__dat__first=0;
  uint64_t __t1965t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1966t__unsafe_ptr=0;
  uint64_t __t1966t__dat__pos=0;
  uint64_t __t1966t__dat__length=0;
  char __t1966t__dat__first=0;
  char __t1967t__=0;
  char* __t1968t__=0;
  char* __t1969t__unsafe_ptr=0;
  uint64_t __t1969t__dat__pos=0;
  uint64_t __t1969t__dat__length=0;
  char __t1969t__dat__first=0;
  char __t1970t__=0;
  char __t1971t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1972t__=0;
  char* __t1973t__s__unsafe_ptr=0;
  uint64_t __t1973t__s__dat__pos=0;
  uint64_t __t1973t__s__dat__length=0;
  char __t1973t__s__dat__first=0;
  uint64_t __t1973t__cost=0;
  char* __t1974t__unsafe_ptr=0;
  uint64_t __t1974t__dat__pos=0;
  uint64_t __t1974t__dat__length=0;
  char __t1974t__dat__first=0;
  char* __t1975t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1663t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1944t__unsafe_ptr,&__t1944t__dat__pos,&__t1944t__dat__length,&__t1944t__dat__first);
  k__unsafe_ptr=__t1944t__unsafe_ptr;
  k__dat__pos=__t1944t__dat__pos;
  k__dat__length=__t1944t__dat__length;
  k__dat__first=__t1944t__dat__first;
  is_zero__t1667t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1945t__);
  if(__t1945t__){
  __t1946t=0;
  goto __t_return;
  }
  __t1947t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1947t,&__t1948t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1948t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1949t__s__unsafe_ptr,__t1948t__,8);
  memcpy(&__t1949t__s__dat__pos,__t1948t__+8,8);
  memcpy(&__t1949t__s__dat__length,__t1948t__+16,8);
  memcpy(&__t1949t__s__dat__first,__t1948t__+24,1);
  memcpy(&__t1949t__cost,__t1948t__+25,8);
  raw__t1661t(__t1949t__s__unsafe_ptr,__t1949t__s__dat__pos,__t1949t__s__dat__length,__t1949t__s__dat__first,__t1949t__cost,&__t1950t__unsafe_ptr,&__t1950t__dat__pos,&__t1950t__dat__length,&__t1950t__dat__first);
  not__t37t(__t1951t,&__t1952t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1953t__);
  n=__t1953t__;
  __t_errcode=hash__t1612t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1954t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1954t__;
  range__t471t(n,&__t1955t__from,&__t1955t__to);
  iter__from=__t1955t__from;
  iter__to=__t1955t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1957t__);
  __t1956t=__t_complain;
  i=__t1957t__;
  __t1956t=__t1956t==0;
  if(!__t1956t){
  break;
  }
  add__t175t(pos,i,&__t1958t__);
  __t1959t=__t1958t__;
  idx=__t1959t;
  ge__t324t(idx,n,&__t1960t__);
  if(__t1960t__){
  __t_errcode=sub__t352t(idx,n,&__t1961t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1961t__;
  }
  __t1962t=0;
  eq__t120t(idx,__t1962t,&__t1963t__);
  if(__t1963t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1964t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1964t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1965t__s__unsafe_ptr,__t1964t__,8);
  memcpy(&__t1965t__s__dat__pos,__t1964t__+8,8);
  memcpy(&__t1965t__s__dat__length,__t1964t__+16,8);
  memcpy(&__t1965t__s__dat__first,__t1964t__+24,1);
  memcpy(&__t1965t__cost,__t1964t__+25,8);
  entry__s__unsafe_ptr=__t1965t__s__unsafe_ptr;
  entry__s__dat__pos=__t1965t__s__dat__pos;
  entry__s__dat__length=__t1965t__s__dat__length;
  entry__s__dat__first=__t1965t__s__dat__first;
  entry__cost=__t1965t__cost;
  raw__t1661t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1966t__unsafe_ptr,&__t1966t__dat__pos,&__t1966t__dat__length,&__t1966t__dat__first);
  is_zero__t1667t(__t1966t__unsafe_ptr,__t1966t__dat__pos,__t1966t__dat__length,__t1966t__dat__first,&__t1967t__);
  if(__t1967t__){
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1968t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1968t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1968t__,&k__unsafe_ptr,8);
  memcpy(__t1968t__+8,&k__dat__pos,8);
  memcpy(__t1968t__+16,&k__dat__length,8);
  memcpy(__t1968t__+24,&k__dat__first,1);
  memcpy(__t1968t__+25,&i,8);
  __t1946t=idx;
  goto __t_return;
  }
  raw__t1661t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1969t__unsafe_ptr,&__t1969t__dat__pos,&__t1969t__dat__length,&__t1969t__dat__first);
  eq__t932t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1969t__unsafe_ptr,__t1969t__dat__pos,__t1969t__dat__length,__t1969t__dat__first,&__t1970t__);
  if(__t1970t__){
  __t1946t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t1971t__);
  if(__t1971t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1972t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1972t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1973t__s__unsafe_ptr,__t1972t__,8);
  memcpy(&__t1973t__s__dat__pos,__t1972t__+8,8);
  memcpy(&__t1973t__s__dat__length,__t1972t__+16,8);
  memcpy(&__t1973t__s__dat__first,__t1972t__+24,1);
  memcpy(&__t1973t__cost,__t1972t__+25,8);
  raw__t1661t(__t1973t__s__unsafe_ptr,__t1973t__s__dat__pos,__t1973t__s__dat__length,__t1973t__s__dat__first,__t1973t__cost,&__t1974t__unsafe_ptr,&__t1974t__dat__pos,&__t1974t__dat__length,&__t1974t__dat__first);
  k__unsafe_ptr=__t1974t__unsafe_ptr;
  k__dat__pos=__t1974t__dat__pos;
  k__dat__length=__t1974t__dat__length;
  k__dat__first=__t1974t__dat__first;
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1975t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1975t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1975t__,&tmp__unsafe_ptr,8);
  memcpy(__t1975t__+8,&tmp__dat__pos,8);
  memcpy(__t1975t__+16,&tmp__dat__length,8);
  memcpy(__t1975t__+24,&tmp__dat__first,1);
  memcpy(__t1975t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2302t=data__unsafe_ptr;
  *__t2303t=data__unsafe_size;
  *__t2304t=data__unsafe_offset;
  *__t2305t=data__unsafe_align;
  *__t2306t=__t1946t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2068t(char** __t2307t, uint64_t* __t2308t, uint16_t* __t2309t, uint16_t* __t2310t, char** __t2311t, uint64_t* __t2312t, uint16_t* __t2313t, uint16_t* __t2314t, const char* key, char** __t2315t) {
  char* keys__unsafe_ptr=*__t2307t;
  uint64_t keys__unsafe_size=*__t2308t;
  uint16_t keys__unsafe_offset=*__t2309t;
  uint16_t keys__unsafe_align=*__t2310t;
  char* values__unsafe_ptr=*__t2311t;
  uint64_t values__unsafe_size=*__t2312t;
  uint16_t values__unsafe_offset=*__t2313t;
  uint16_t values__unsafe_align=*__t2314t;
  char* __t2069t__unsafe_ptr=0;
  uint64_t __t2069t__dat__pos=0;
  uint64_t __t2069t__dat__length=0;
  char __t2069t__dat__first=0;
  uint64_t __t2070t__=0;
  char* __t2071t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(key,&__t2069t__unsafe_ptr,&__t2069t__dat__pos,&__t2069t__dat__length,&__t2069t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1943t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2069t__unsafe_ptr,__t2069t__dat__pos,__t2069t__dat__length,__t2069t__dat__first,&__t2070t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t633t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2070t__,&__t2071t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2307t=keys__unsafe_ptr;
  *__t2308t=keys__unsafe_size;
  *__t2309t=keys__unsafe_offset;
  *__t2310t=keys__unsafe_align;
  *__t2311t=values__unsafe_ptr;
  *__t2312t=values__unsafe_size;
  *__t2313t=values__unsafe_offset;
  *__t2314t=values__unsafe_align;
  *__t2315t=__t2071t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2316t, uint64_t* __t2317t, uint64_t* __t2318t, char* __t2319t) {
  goto __t_return;
  __t_return:
  *__t2316t=other__unsafe_ptr;
  *__t2317t=other__dat__pos;
  *__t2318t=other__dat__length;
  *__t2319t=other__dat__first;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2320t, uint64_t* __t2321t, uint16_t* __t2322t, uint16_t* __t2323t, uint64_t pos, char** __t2324t, uint64_t* __t2325t, uint16_t* __t2326t, uint16_t* __t2327t, uint64_t* __t2328t) {
  char* buf__unsafe_ptr=*__t2320t;
  uint64_t buf__unsafe_size=*__t2321t;
  uint16_t buf__unsafe_offset=*__t2322t;
  uint16_t buf__unsafe_align=*__t2323t;
  goto __t_return;
  __t_return:
  *__t2320t=buf__unsafe_ptr;
  *__t2321t=buf__unsafe_size;
  *__t2322t=buf__unsafe_offset;
  *__t2323t=buf__unsafe_align;
  *__t2324t=buf__unsafe_ptr;
  *__t2325t=buf__unsafe_size;
  *__t2326t=buf__unsafe_offset;
  *__t2327t=buf__unsafe_align;
  *__t2328t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2329t, uint64_t* __t2330t, uint16_t* __t2331t, uint16_t* __t2332t, uint64_t* __t2333t, uint64_t length, char** __t2334t, uint64_t* __t2335t, uint16_t* __t2336t, uint16_t* __t2337t, uint64_t* __t2338t) {
  char* allocator__buf__unsafe_ptr=*__t2329t;
  uint64_t allocator__buf__unsafe_size=*__t2330t;
  uint16_t allocator__buf__unsafe_offset=*__t2331t;
  uint16_t allocator__buf__unsafe_align=*__t2332t;
  uint64_t allocator__pos=*__t2333t;
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
  *__t2329t=allocator__buf__unsafe_ptr;
  *__t2330t=allocator__buf__unsafe_size;
  *__t2331t=allocator__buf__unsafe_offset;
  *__t2332t=allocator__buf__unsafe_align;
  *__t2333t=allocator__pos;
  *__t2334t=__t692t__buf__unsafe_ptr;
  *__t2335t=__t692t__buf__unsafe_size;
  *__t2336t=__t692t__buf__unsafe_offset;
  *__t2337t=__t692t__buf__unsafe_align;
  *__t2338t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t2339t, uint64_t* __t2340t, uint16_t* __t2341t, uint16_t* __t2342t, uint64_t* __t2343t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2344t, uint64_t* __t2345t, uint64_t* __t2346t, char* __t2347t) {
  char* CHARS__buf__unsafe_ptr=*__t2339t;
  uint64_t CHARS__buf__unsafe_size=*__t2340t;
  uint16_t CHARS__buf__unsafe_offset=*__t2341t;
  uint16_t CHARS__buf__unsafe_align=*__t2342t;
  uint64_t CHARS__pos=*__t2343t;
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
  *__t2339t=CHARS__buf__unsafe_ptr;
  *__t2340t=CHARS__buf__unsafe_size;
  *__t2341t=CHARS__buf__unsafe_offset;
  *__t2342t=CHARS__buf__unsafe_align;
  *__t2343t=CHARS__pos;
  *__t2344t=__t878t__unsafe_ptr;
  *__t2345t=__t878t__dat__pos;
  *__t2346t=__t878t__dat__length;
  *__t2347t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2082t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2348t, char** __t2349t, uint64_t* __t2350t, uint64_t* __t2351t, char* __t2352t) {
  uint64_t pos=*__t2348t;
  uint64_t __t2083t=0;
  char __t2084t__=0;
  uint64_t __t2085t=0;
  uint64_t __t2086t__=0;
  uint64_t __t2087t=0;
  char* __t2088t__=0;
  char* __t2089t__s__unsafe_ptr=0;
  uint64_t __t2089t__s__dat__pos=0;
  uint64_t __t2089t__s__dat__length=0;
  char __t2089t__s__dat__first=0;
  uint64_t __t2089t__cost=0;
  char* __t2090t__unsafe_ptr=0;
  uint64_t __t2090t__dat__pos=0;
  uint64_t __t2090t__dat__length=0;
  char __t2090t__dat__first=0;
  char* __t2091t__=0;
  char* __t2092t__s__unsafe_ptr=0;
  uint64_t __t2092t__s__dat__pos=0;
  uint64_t __t2092t__s__dat__length=0;
  char __t2092t__s__dat__first=0;
  uint64_t __t2092t__cost=0;
  char* __t2093t__unsafe_ptr=0;
  uint64_t __t2093t__dat__pos=0;
  uint64_t __t2093t__dat__length=0;
  char __t2093t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2094t=0;
  uint64_t __t2095t__=0;
  char* __t2096t__unsafe_ptr=0;
  uint64_t __t2096t__dat__pos=0;
  uint64_t __t2096t__dat__length=0;
  char __t2096t__dat__first=0;
  char __t2097t__=0;
  char* __t2098t__=0;
  char* __t2099t__s__unsafe_ptr=0;
  uint64_t __t2099t__s__dat__pos=0;
  uint64_t __t2099t__s__dat__length=0;
  char __t2099t__s__dat__first=0;
  uint64_t __t2099t__cost=0;
  char* __t2100t__unsafe_ptr=0;
  uint64_t __t2100t__dat__pos=0;
  uint64_t __t2100t__dat__length=0;
  char __t2100t__dat__first=0;
  uint64_t __t2101t=0;
  uint64_t __t2102t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2083t=0;
  eq__t120t(pos,__t2083t,&__t2084t__);
  if(__t2084t__){
  __t2085t=1;
  add__t175t(pos,__t2085t,&__t2086t__);
  pos=__t2086t__;
  __t2087t=0;
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2087t,&__t2088t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2088t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2089t__s__unsafe_ptr,__t2088t__,8);
  memcpy(&__t2089t__s__dat__pos,__t2088t__+8,8);
  memcpy(&__t2089t__s__dat__length,__t2088t__+16,8);
  memcpy(&__t2089t__s__dat__first,__t2088t__+24,1);
  memcpy(&__t2089t__cost,__t2088t__+25,8);
  raw__t1661t(__t2089t__s__unsafe_ptr,__t2089t__s__dat__pos,__t2089t__s__dat__length,__t2089t__s__dat__first,__t2089t__cost,&__t2090t__unsafe_ptr,&__t2090t__dat__pos,&__t2090t__dat__length,&__t2090t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2091t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2091t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2092t__s__unsafe_ptr,__t2091t__,8);
  memcpy(&__t2092t__s__dat__pos,__t2091t__+8,8);
  memcpy(&__t2092t__s__dat__length,__t2091t__+16,8);
  memcpy(&__t2092t__s__dat__first,__t2091t__+24,1);
  memcpy(&__t2092t__cost,__t2091t__+25,8);
  raw__t1661t(__t2092t__s__unsafe_ptr,__t2092t__s__dat__pos,__t2092t__s__dat__length,__t2092t__s__dat__first,__t2092t__cost,&__t2093t__unsafe_ptr,&__t2093t__dat__pos,&__t2093t__dat__length,&__t2093t__dat__first);
  ret__unsafe_ptr=__t2093t__unsafe_ptr;
  ret__dat__pos=__t2093t__dat__pos;
  ret__dat__length=__t2093t__dat__length;
  ret__dat__first=__t2093t__dat__first;
  __t2094t=1;
  add__t175t(pos,__t2094t,&__t2095t__);
  pos=__t2095t__;
  while(1){
  raw__t1663t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2096t__unsafe_ptr,&__t2096t__dat__pos,&__t2096t__dat__length,&__t2096t__dat__first);
  is_zero__t1667t(__t2096t__unsafe_ptr,__t2096t__dat__pos,__t2096t__dat__length,__t2096t__dat__first,&__t2097t__);
  if(!__t2097t__){
  break;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2098t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2098t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2099t__s__unsafe_ptr,__t2098t__,8);
  memcpy(&__t2099t__s__dat__pos,__t2098t__+8,8);
  memcpy(&__t2099t__s__dat__length,__t2098t__+16,8);
  memcpy(&__t2099t__s__dat__first,__t2098t__+24,1);
  memcpy(&__t2099t__cost,__t2098t__+25,8);
  raw__t1661t(__t2099t__s__unsafe_ptr,__t2099t__s__dat__pos,__t2099t__s__dat__length,__t2099t__s__dat__first,__t2099t__cost,&__t2100t__unsafe_ptr,&__t2100t__dat__pos,&__t2100t__dat__length,&__t2100t__dat__first);
  ret__unsafe_ptr=__t2100t__unsafe_ptr;
  ret__dat__pos=__t2100t__dat__pos;
  ret__dat__length=__t2100t__dat__length;
  ret__dat__first=__t2100t__dat__first;
  __t2101t=1;
  add__t175t(pos,__t2101t,&__t2102t__);
  pos=__t2102t__;
  }
  __t2090t__unsafe_ptr=ret__unsafe_ptr;
  __t2090t__dat__pos=ret__dat__pos;
  __t2090t__dat__length=ret__dat__length;
  __t2090t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2348t=pos;
  *__t2349t=__t2090t__unsafe_ptr;
  *__t2350t=__t2090t__dat__pos;
  *__t2351t=__t2090t__dat__length;
  *__t2352t=__t2090t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2133t(char** __t2353t, uint64_t* __t2354t, uint16_t* __t2355t, uint16_t* __t2356t, uint64_t* __t2357t, char** __t2358t, uint64_t* __t2359t, uint16_t* __t2360t, uint16_t* __t2361t, char** __t2362t, uint64_t* __t2363t, uint16_t* __t2364t, uint16_t* __t2365t) {
  char* buf__buf__unsafe_ptr=*__t2353t;
  uint64_t buf__buf__unsafe_size=*__t2354t;
  uint16_t buf__buf__unsafe_offset=*__t2355t;
  uint16_t buf__buf__unsafe_align=*__t2356t;
  uint64_t buf__pos=*__t2357t;
  char* __t2134t__unsafe_ptr=0;
  uint64_t __t2134t__unsafe_size=0;
  uint16_t __t2134t__unsafe_offset=0;
  uint16_t __t2134t__unsafe_align=0;
  uint64_t __t2135t=0;
  char* __t2136t__unsafe_ptr=0;
  uint64_t __t2136t__unsafe_size=0;
  uint16_t __t2136t__unsafe_offset=0;
  uint16_t __t2136t__unsafe_align=0;
  char __t2137t____t534t__=0;
  char* __t2138t__keys__unsafe_ptr=0;
  uint64_t __t2138t__keys__unsafe_size=0;
  uint16_t __t2138t__keys__unsafe_offset=0;
  uint16_t __t2138t__keys__unsafe_align=0;
  char* __t2138t__values__unsafe_ptr=0;
  uint64_t __t2138t__values__unsafe_size=0;
  uint16_t __t2138t__values__unsafe_offset=0;
  uint16_t __t2138t__values__unsafe_align=0;
  char __t2139t____t2051t____t534t__=0;
  char* __t2140t__keys__unsafe_ptr=0;
  uint64_t __t2140t__keys__unsafe_size=0;
  uint16_t __t2140t__keys__unsafe_offset=0;
  uint16_t __t2140t__keys__unsafe_align=0;
  char* __t2140t__values__unsafe_ptr=0;
  uint64_t __t2140t__values__unsafe_size=0;
  uint16_t __t2140t__values__unsafe_offset=0;
  uint16_t __t2140t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2142t__=0;
  char* __t2144t__unsafe_ptr=0;
  uint64_t __t2144t__dat__pos=0;
  uint64_t __t2144t__dat__length=0;
  char __t2144t__dat__first=0;
  char* __t2145t__unsafe_ptr=0;
  uint64_t __t2145t__dat__pos=0;
  uint64_t __t2145t__dat__length=0;
  char __t2145t__dat__first=0;
  char* __t2147t__=0;
  char* __t2149t__unsafe_ptr=0;
  uint64_t __t2149t__dat__pos=0;
  uint64_t __t2149t__dat__length=0;
  char __t2149t__dat__first=0;
  char* __t2150t__unsafe_ptr=0;
  uint64_t __t2150t__dat__pos=0;
  uint64_t __t2150t__dat__length=0;
  char __t2150t__dat__first=0;
  uint64_t __t2151t=0;
  uint64_t __t2152t=0;
  char* it__map__keys__unsafe_ptr=0;
  uint64_t it__map__keys__unsafe_size=0;
  uint16_t it__map__keys__unsafe_offset=0;
  uint16_t it__map__keys__unsafe_align=0;
  uint64_t it____t2152t=0;
  char __t2153t=0;
  char* __t2154t__unsafe_ptr=0;
  uint64_t __t2154t__dat__pos=0;
  uint64_t __t2154t__dat__length=0;
  char __t2154t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2125t(&__t2134t__unsafe_ptr,&__t2134t__unsafe_size,&__t2134t__unsafe_offset,&__t2134t__unsafe_align);
  __t2135t=128;
  __t_errcode=alloc__t532t(&__t2134t__unsafe_ptr,&__t2134t__unsafe_size,&__t2134t__unsafe_offset,&__t2134t__unsafe_align,__t2135t,&__t2136t__unsafe_ptr,&__t2136t__unsafe_size,&__t2136t__unsafe_offset,&__t2136t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t2044t(&__t2136t__unsafe_ptr,&__t2136t__unsafe_size,&__t2136t__unsafe_offset,&__t2136t__unsafe_align,&__t2138t__keys__unsafe_ptr,&__t2138t__keys__unsafe_size,&__t2138t__keys__unsafe_offset,&__t2138t__keys__unsafe_align,&__t2138t__values__unsafe_ptr,&__t2138t__values__unsafe_size,&__t2138t__values__unsafe_offset,&__t2138t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2140t__keys__unsafe_ptr=__t2138t__keys__unsafe_ptr;
  __t2140t__keys__unsafe_size=__t2138t__keys__unsafe_size;
  __t2140t__keys__unsafe_offset=__t2138t__keys__unsafe_offset;
  __t2140t__keys__unsafe_align=__t2138t__keys__unsafe_align;
  __t2140t__values__unsafe_ptr=__t2138t__values__unsafe_ptr;
  __t2140t__values__unsafe_size=__t2138t__values__unsafe_size;
  __t2140t__values__unsafe_offset=__t2138t__values__unsafe_offset;
  __t2140t__values__unsafe_align=__t2138t__values__unsafe_align;
  __t_errcode=mutget__t2068t(&__t2140t__keys__unsafe_ptr,&__t2140t__keys__unsafe_size,&__t2140t__keys__unsafe_offset,&__t2140t__keys__unsafe_align,&__t2140t__values__unsafe_ptr,&__t2140t__values__unsafe_size,&__t2140t__values__unsafe_offset,&__t2140t__values__unsafe_align,__t2141t,&__t2142t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t2143t,&__t2144t__unsafe_ptr,&__t2144t__dat__pos,&__t2144t__dat__length,&__t2144t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t873t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2144t__unsafe_ptr,__t2144t__dat__pos,__t2144t__dat__length,__t2144t__dat__first,&__t2145t__unsafe_ptr,&__t2145t__dat__pos,&__t2145t__dat__length,&__t2145t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2142t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2142t__,&__t2145t__unsafe_ptr,8);
  memcpy(__t2142t__+8,&__t2145t__dat__pos,8);
  memcpy(__t2142t__+16,&__t2145t__dat__length,8);
  memcpy(__t2142t__+24,&__t2145t__dat__first,1);
  __t_errcode=mutget__t2068t(&__t2140t__keys__unsafe_ptr,&__t2140t__keys__unsafe_size,&__t2140t__keys__unsafe_offset,&__t2140t__keys__unsafe_align,&__t2140t__values__unsafe_ptr,&__t2140t__values__unsafe_size,&__t2140t__values__unsafe_offset,&__t2140t__values__unsafe_align,__t2146t,&__t2147t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t2148t,&__t2149t__unsafe_ptr,&__t2149t__dat__pos,&__t2149t__dat__length,&__t2149t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t873t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2149t__unsafe_ptr,__t2149t__dat__pos,__t2149t__dat__length,__t2149t__dat__first,&__t2150t__unsafe_ptr,&__t2150t__dat__pos,&__t2150t__dat__length,&__t2150t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2147t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2147t__,&__t2150t__unsafe_ptr,8);
  memcpy(__t2147t__+8,&__t2150t__dat__pos,8);
  memcpy(__t2147t__+16,&__t2150t__dat__length,8);
  memcpy(__t2147t__+24,&__t2150t__dat__first,1);
  __t2151t=0;
  __t2152t=__t2151t;
  it____t2152t=__t2152t;
  while(1){
  __t_complain=next__t2082t(__t2140t__keys__unsafe_ptr,__t2140t__keys__unsafe_size,__t2140t__keys__unsafe_offset,__t2140t__keys__unsafe_align,&it____t2152t,&__t2154t__unsafe_ptr,&__t2154t__dat__pos,&__t2154t__dat__length,&__t2154t__dat__first);
  __t2153t=__t_complain;
  key__unsafe_ptr=__t2154t__unsafe_ptr;
  key__dat__pos=__t2154t__dat__pos;
  key__dat__length=__t2154t__dat__length;
  key__dat__first=__t2154t__dat__first;
  __t2153t=__t2153t==0;
  if(!__t2153t){
  break;
  }
  print__t987t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2140t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2140t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2140t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2140t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2140t__values__unsafe_ptr;
  map__values__unsafe_size=__t2140t__values__unsafe_size;
  map__values__unsafe_offset=__t2140t__values__unsafe_offset;
  map__values__unsafe_align=__t2140t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2139t____t2051t____t534t__);
  if(__t2139t____t2051t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2137t____t534t__);
  if(__t2137t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2353t=buf__buf__unsafe_ptr;
  *__t2354t=buf__buf__unsafe_size;
  *__t2355t=buf__buf__unsafe_offset;
  *__t2356t=buf__buf__unsafe_align;
  *__t2357t=buf__pos;
  *__t2358t=map__keys__unsafe_ptr;
  *__t2359t=map__keys__unsafe_size;
  *__t2360t=map__keys__unsafe_offset;
  *__t2361t=map__keys__unsafe_align;
  *__t2362t=map__values__unsafe_ptr;
  *__t2363t=map__values__unsafe_size;
  *__t2364t=map__values__unsafe_offset;
  *__t2365t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2156t(char** __t2366t, uint64_t* __t2367t, uint16_t* __t2368t, uint16_t* __t2369t, char** __t2370t, uint64_t* __t2371t, uint16_t* __t2372t, uint16_t* __t2373t, char** __t2374t, uint64_t* __t2375t, uint16_t* __t2376t, uint16_t* __t2377t, uint64_t* __t2378t) {
  char* __t2159t__unsafe_ptr=0;
  uint64_t __t2159t__unsafe_size=0;
  uint16_t __t2159t__unsafe_offset=0;
  uint16_t __t2159t__unsafe_align=0;
  uint64_t __t2160t=0;
  uint64_t __t2161t__=0;
  char* __t2162t__unsafe_ptr=0;
  uint64_t __t2162t__unsafe_size=0;
  uint16_t __t2162t__unsafe_offset=0;
  uint16_t __t2162t__unsafe_align=0;
  char __t2163t____t534t__=0;
  char* __t2164t__buf__unsafe_ptr=0;
  uint64_t __t2164t__buf__unsafe_size=0;
  uint16_t __t2164t__buf__unsafe_offset=0;
  uint16_t __t2164t__buf__unsafe_align=0;
  uint64_t __t2164t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2165t__keys__unsafe_ptr=0;
  uint64_t __t2165t__keys__unsafe_size=0;
  uint16_t __t2165t__keys__unsafe_offset=0;
  uint16_t __t2165t__keys__unsafe_align=0;
  char* __t2165t__values__unsafe_ptr=0;
  uint64_t __t2165t__values__unsafe_size=0;
  uint16_t __t2165t__values__unsafe_offset=0;
  uint16_t __t2165t__values__unsafe_align=0;
  char __t2166t____t2137t____t534t__=0;
  char __t2166t____t2139t____t2051t____t534t__=0;
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
  char____t_buffer____buffer__t2157t(&__t2159t__unsafe_ptr,&__t2159t__unsafe_size,&__t2159t__unsafe_offset,&__t2159t__unsafe_align);
  __t2160t=4;
  KB__t481t(__t2160t,&__t2161t__);
  __t_errcode=alloc__t532t(&__t2159t__unsafe_ptr,&__t2159t__unsafe_size,&__t2159t__unsafe_offset,&__t2159t__unsafe_align,__t2161t__,&__t2162t__unsafe_ptr,&__t2162t__unsafe_size,&__t2162t__unsafe_offset,&__t2162t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t2162t__unsafe_ptr,&__t2162t__unsafe_size,&__t2162t__unsafe_offset,&__t2162t__unsafe_align,&__t2164t__buf__unsafe_ptr,&__t2164t__buf__unsafe_size,&__t2164t__buf__unsafe_offset,&__t2164t__buf__unsafe_align,&__t2164t__pos);
  buf__buf__unsafe_ptr=__t2164t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2164t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2164t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2164t__buf__unsafe_align;
  buf__pos=__t2164t__pos;
  __t_errcode=test__t2133t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2165t__keys__unsafe_ptr,&__t2165t__keys__unsafe_size,&__t2165t__keys__unsafe_offset,&__t2165t__keys__unsafe_align,&__t2165t__values__unsafe_ptr,&__t2165t__values__unsafe_size,&__t2165t__values__unsafe_offset,&__t2165t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2165t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2165t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2165t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2165t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2165t__values__unsafe_ptr;
  map__values__unsafe_size=__t2165t__values__unsafe_size;
  map__values__unsafe_offset=__t2165t__values__unsafe_offset;
  map__values__unsafe_align=__t2165t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2166t____t2139t____t2051t____t534t__);
  if(__t2166t____t2139t____t2051t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2166t____t2137t____t534t__);
  if(__t2166t____t2137t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  exists__t447t(buf__buf__unsafe_ptr,&__t2163t____t534t__);
  if(__t2163t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2366t=map__keys__unsafe_ptr;
  *__t2367t=map__keys__unsafe_size;
  *__t2368t=map__keys__unsafe_offset;
  *__t2369t=map__keys__unsafe_align;
  *__t2370t=map__values__unsafe_ptr;
  *__t2371t=map__values__unsafe_size;
  *__t2372t=map__values__unsafe_offset;
  *__t2373t=map__values__unsafe_align;
  *__t2374t=buf__buf__unsafe_ptr;
  *__t2375t=buf__buf__unsafe_size;
  *__t2376t=buf__buf__unsafe_offset;
  *__t2377t=buf__buf__unsafe_align;
  *__t2378t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t1665t(const char* r, char** __t2379t, uint64_t* __t2380t, uint64_t* __t2381t, char* __t2382t) {
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__dat__pos=0;
  uint64_t __t1666t__dat__length=0;
  char __t1666t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(r,&__t1666t__unsafe_ptr,&__t1666t__dat__pos,&__t1666t__dat__length,&__t1666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2379t=__t1666t__unsafe_ptr;
  *__t2380t=__t1666t__dat__pos;
  *__t2381t=__t1666t__dat__length;
  *__t2382t=__t1666t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t1709t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2383t) {
  char* __t1710t__unsafe_ptr=0;
  uint64_t __t1710t__dat__pos=0;
  uint64_t __t1710t__dat__length=0;
  char __t1710t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1711t__=0;
  uint64_t __t1712t=0;
  uint64_t __t1713t=0;
  char* __t1714t__=0;
  char* __t1715t__s__unsafe_ptr=0;
  uint64_t __t1715t__s__dat__pos=0;
  uint64_t __t1715t__s__dat__length=0;
  char __t1715t__s__dat__first=0;
  uint64_t __t1715t__cost=0;
  char* __t1716t__unsafe_ptr=0;
  uint64_t __t1716t__dat__pos=0;
  uint64_t __t1716t__dat__length=0;
  char __t1716t__dat__first=0;
  int __t1717t=0;
  int __t1718t__=0;
  uint64_t __t1719t__=0;
  uint64_t n=0;
  uint64_t __t1720t__=0;
  uint64_t pos=0;
  uint64_t __t1721t__from=0;
  uint64_t __t1721t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1722t=0;
  uint64_t __t1723t__=0;
  uint64_t i=0;
  uint64_t __t1724t__=0;
  uint64_t __t1725t=0;
  uint64_t idx=0;
  char __t1726t__=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t=0;
  char __t1729t__=0;
  char* __t1730t__=0;
  char* __t1731t__s__unsafe_ptr=0;
  uint64_t __t1731t__s__dat__pos=0;
  uint64_t __t1731t__s__dat__length=0;
  char __t1731t__s__dat__first=0;
  uint64_t __t1731t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1732t__unsafe_ptr=0;
  uint64_t __t1732t__dat__pos=0;
  uint64_t __t1732t__dat__length=0;
  char __t1732t__dat__first=0;
  char __t1733t__=0;
  char* __t1734t__unsafe_ptr=0;
  uint64_t __t1734t__dat__pos=0;
  uint64_t __t1734t__dat__length=0;
  char __t1734t__dat__first=0;
  char __t1735t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1663t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1710t__unsafe_ptr,&__t1710t__dat__pos,&__t1710t__dat__length,&__t1710t__dat__first);
  k__unsafe_ptr=__t1710t__unsafe_ptr;
  k__dat__pos=__t1710t__dat__pos;
  k__dat__length=__t1710t__dat__length;
  k__dat__first=__t1710t__dat__first;
  is_zero__t1667t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1711t__);
  if(__t1711t__){
  __t1712t=0;
  goto __t_return;
  }
  __t1713t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1713t,&__t1714t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1714t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1715t__s__unsafe_ptr,__t1714t__,8);
  memcpy(&__t1715t__s__dat__pos,__t1714t__+8,8);
  memcpy(&__t1715t__s__dat__length,__t1714t__+16,8);
  memcpy(&__t1715t__s__dat__first,__t1714t__+24,1);
  memcpy(&__t1715t__cost,__t1714t__+25,8);
  raw__t1661t(__t1715t__s__unsafe_ptr,__t1715t__s__dat__pos,__t1715t__s__dat__length,__t1715t__s__dat__first,__t1715t__cost,&__t1716t__unsafe_ptr,&__t1716t__dat__pos,&__t1716t__dat__length,&__t1716t__dat__first);
  not__t37t(__t1717t,&__t1718t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1719t__);
  n=__t1719t__;
  __t_errcode=hash__t1612t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1720t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1720t__;
  range__t471t(n,&__t1721t__from,&__t1721t__to);
  iter__from=__t1721t__from;
  iter__to=__t1721t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1723t__);
  __t1722t=__t_complain;
  i=__t1723t__;
  __t1722t=__t1722t==0;
  if(!__t1722t){
  break;
  }
  add__t175t(pos,i,&__t1724t__);
  __t1725t=__t1724t__;
  idx=__t1725t;
  ge__t324t(idx,n,&__t1726t__);
  if(__t1726t__){
  __t_errcode=sub__t352t(idx,n,&__t1727t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1727t__;
  }
  __t1728t=0;
  eq__t120t(idx,__t1728t,&__t1729t__);
  if(__t1729t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1731t__s__unsafe_ptr,__t1730t__,8);
  memcpy(&__t1731t__s__dat__pos,__t1730t__+8,8);
  memcpy(&__t1731t__s__dat__length,__t1730t__+16,8);
  memcpy(&__t1731t__s__dat__first,__t1730t__+24,1);
  memcpy(&__t1731t__cost,__t1730t__+25,8);
  entry__s__unsafe_ptr=__t1731t__s__unsafe_ptr;
  entry__s__dat__pos=__t1731t__s__dat__pos;
  entry__s__dat__length=__t1731t__s__dat__length;
  entry__s__dat__first=__t1731t__s__dat__first;
  entry__cost=__t1731t__cost;
  raw__t1661t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1732t__unsafe_ptr,&__t1732t__dat__pos,&__t1732t__dat__length,&__t1732t__dat__first);
  is_zero__t1667t(__t1732t__unsafe_ptr,__t1732t__dat__pos,__t1732t__dat__length,__t1732t__dat__first,&__t1733t__);
  if(__t1733t__){
  continue;
  }
  raw__t1661t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1734t__unsafe_ptr,&__t1734t__dat__pos,&__t1734t__dat__length,&__t1734t__dat__first);
  eq__t932t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1734t__unsafe_ptr,__t1734t__dat__pos,__t1734t__dat__length,__t1734t__dat__first,&__t1735t__);
  if(__t1735t__){
  __t1712t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2383t=__t1712t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2060t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2384t) {
  char* __t2061t__unsafe_ptr=0;
  uint64_t __t2061t__dat__pos=0;
  uint64_t __t2061t__dat__length=0;
  char __t2061t__dat__first=0;
  uint64_t __t2062t__=0;
  char* __t2063t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1665t(key,&__t2061t__unsafe_ptr,&__t2061t__dat__pos,&__t2061t__dat__length,&__t2061t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1709t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2061t__unsafe_ptr,__t2061t__dat__pos,__t2061t__dat__length,__t2061t__dat__first,&__t2062t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t640t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2062t__,&__t2063t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2384t=__t2063t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2167t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2168t__=0;
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__dat__pos=0;
  uint64_t __t2169t__dat__length=0;
  char __t2169t__dat__first=0;
  char* __t2171t__=0;
  char* __t2172t__unsafe_ptr=0;
  uint64_t __t2172t__dat__pos=0;
  uint64_t __t2172t__dat__length=0;
  char __t2172t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2060t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2141t,&__t2168t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2168t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2169t__unsafe_ptr,__t2168t__,8);
  memcpy(&__t2169t__dat__pos,__t2168t__+8,8);
  memcpy(&__t2169t__dat__length,__t2168t__+16,8);
  memcpy(&__t2169t__dat__first,__t2168t__+24,1);
  print__t987t(__t2169t__unsafe_ptr,__t2169t__dat__pos,__t2169t__dat__length,__t2169t__dat__first);
  __t_errcode=get__t2060t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2146t,&__t2171t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2171t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2172t__unsafe_ptr,__t2171t__,8);
  memcpy(&__t2172t__dat__pos,__t2171t__+8,8);
  memcpy(&__t2172t__dat__length,__t2171t__+16,8);
  memcpy(&__t2172t__dat__first,__t2171t__+24,1);
  print__t987t(__t2172t__unsafe_ptr,__t2172t__dat__pos,__t2172t__dat__length,__t2172t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2174t() {
  char* __t2176t__map__keys__unsafe_ptr=0;
  uint64_t __t2176t__map__keys__unsafe_size=0;
  uint16_t __t2176t__map__keys__unsafe_offset=0;
  uint16_t __t2176t__map__keys__unsafe_align=0;
  char* __t2176t__map__values__unsafe_ptr=0;
  uint64_t __t2176t__map__values__unsafe_size=0;
  uint16_t __t2176t__map__values__unsafe_offset=0;
  uint16_t __t2176t__map__values__unsafe_align=0;
  char* __t2176t__buf__buf__unsafe_ptr=0;
  uint64_t __t2176t__buf__buf__unsafe_size=0;
  uint16_t __t2176t__buf__buf__unsafe_offset=0;
  uint16_t __t2176t__buf__buf__unsafe_align=0;
  uint64_t __t2176t__buf__pos=0;
  char __t2177t____t2163t____t534t__=0;
  char __t2177t____t2166t____t2137t____t534t__=0;
  char __t2177t____t2166t____t2139t____t2051t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2156t(&__t2176t__map__keys__unsafe_ptr,&__t2176t__map__keys__unsafe_size,&__t2176t__map__keys__unsafe_offset,&__t2176t__map__keys__unsafe_align,&__t2176t__map__values__unsafe_ptr,&__t2176t__map__values__unsafe_size,&__t2176t__map__values__unsafe_offset,&__t2176t__map__values__unsafe_align,&__t2176t__buf__buf__unsafe_ptr,&__t2176t__buf__buf__unsafe_size,&__t2176t__buf__buf__unsafe_offset,&__t2176t__buf__buf__unsafe_align,&__t2176t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2167t(__t2176t__map__keys__unsafe_ptr,__t2176t__map__keys__unsafe_size,__t2176t__map__keys__unsafe_offset,__t2176t__map__keys__unsafe_align,__t2176t__map__values__unsafe_ptr,__t2176t__map__values__unsafe_size,__t2176t__map__values__unsafe_offset,__t2176t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2176t__map__keys__unsafe_ptr,&__t2177t____t2166t____t2139t____t2051t____t534t__);
  if(__t2177t____t2166t____t2139t____t2051t____t534t__){
  free__t503t(&__t2176t__map__keys__unsafe_ptr);
  }
  exists__t447t(__t2176t__map__values__unsafe_ptr,&__t2177t____t2166t____t2137t____t534t__);
  if(__t2177t____t2166t____t2137t____t534t__){
  free__t503t(&__t2176t__map__values__unsafe_ptr);
  }
  exists__t447t(__t2176t__buf__buf__unsafe_ptr,&__t2177t____t2163t____t534t__);
  if(__t2177t____t2163t____t534t__){
  free__t503t(&__t2176t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2174t();return 0;}