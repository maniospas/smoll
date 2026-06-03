#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2129t="ls";
static const char* __t_all_errcodes[53] = {"noerr",
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
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1575t(char** __t2132t, uint64_t* __t2133t, uint16_t* __t2134t, uint16_t* __t2135t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2132t=unsafe_ptr;
  *__t2133t=unsafe_size;
  *__t2134t=unsafe_offset;
  *__t2135t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2136t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2136t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2137t) {
  char* allocated=*__t2137t;
  if(allocated){
  free(allocated);
  }
  *__t2137t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2138t) {
  int value=0;
  *__t2138t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2139t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2139t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2140t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2140t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2141t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2141t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2142t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2142t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2143t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2143t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2144t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2144t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2145t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2145t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2146t) {
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
  *__t2146t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2147t, uint64_t* __t2148t, uint16_t* __t2149t, uint16_t* __t2150t, uint64_t size, char** __t2151t, uint64_t* __t2152t, uint16_t* __t2153t, uint16_t* __t2154t) {
  char* buffer__unsafe_ptr=*__t2147t;
  uint64_t buffer__unsafe_size=*__t2148t;
  uint16_t buffer__unsafe_offset=*__t2149t;
  uint16_t buffer__unsafe_align=*__t2150t;
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
  *__t2147t=buffer__unsafe_ptr;
  *__t2148t=buffer__unsafe_size;
  *__t2149t=buffer__unsafe_offset;
  *__t2150t=buffer__unsafe_align;
  *__t2151t=buffer__unsafe_ptr;
  *__t2152t=buffer__unsafe_size;
  *__t2153t=buffer__unsafe_offset;
  *__t2154t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t2155t, uint64_t* __t2156t, uint16_t* __t2157t, uint16_t* __t2158t, char** __t2159t, uint64_t* __t2160t, uint16_t* __t2161t, uint16_t* __t2162t, uint64_t* __t2163t) {
  char* buf__unsafe_ptr=*__t2155t;
  uint64_t buf__unsafe_size=*__t2156t;
  uint16_t buf__unsafe_offset=*__t2157t;
  uint16_t buf__unsafe_align=*__t2158t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t2155t=buf__unsafe_ptr;
  *__t2156t=buf__unsafe_size;
  *__t2157t=buf__unsafe_offset;
  *__t2158t=buf__unsafe_align;
  *__t2159t=buf__unsafe_ptr;
  *__t2160t=buf__unsafe_size;
  *__t2161t=buf__unsafe_offset;
  *__t2162t=buf__unsafe_align;
  *__t2163t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t2164t, uint64_t* __t2165t, uint16_t* __t2166t, uint16_t* __t2167t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2164t=unsafe_ptr;
  *__t2165t=unsafe_size;
  *__t2166t=unsafe_offset;
  *__t2167t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2168t) {
  *__t2168t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2169t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2169t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2170t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2170t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2171t) {
  *__t2171t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2172t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2172t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2173t) {
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
  *__t2173t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2174t, uint64_t* __t2175t, uint64_t* __t2176t, char* __t2177t) {
  goto __t_return;
  __t_return:
  *__t2174t=unsafe_ptr;
  *__t2175t=dat__pos;
  *__t2176t=dat__length;
  *__t2177t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2178t, uint64_t* __t2179t, uint64_t* __t2180t, char* __t2181t) {
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
  *__t2178t=__t695t__unsafe_ptr;
  *__t2179t=__t695t__dat__pos;
  *__t2180t=__t695t__dat__length;
  *__t2181t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2182t, uint64_t* __t2183t, uint64_t* __t2184t, char* __t2185t) {
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
  *__t2182t=__t728t__unsafe_ptr;
  *__t2183t=__t728t__dat__pos;
  *__t2184t=__t728t__dat__length;
  *__t2185t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t2186t, uint64_t* __t2187t, uint64_t* __t2188t, char* __t2189t) {
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
  *__t2186t=__t754t__unsafe_ptr;
  *__t2187t=__t754t__dat__pos;
  *__t2188t=__t754t__dat__length;
  *__t2189t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2190t) {
  goto __t_return;
  __t_return:
  *__t2190t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2191t) {
  goto __t_return;
  __t_return:
  *__t2191t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2192t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2192t=z;
}

int copy__t856t(char** __t2193t, uint64_t* __t2194t, uint16_t* __t2195t, uint16_t* __t2196t, uint64_t* __t2197t, const char* _other, char** __t2198t, uint64_t* __t2199t, uint64_t* __t2200t, char* __t2201t) {
  char* CHARS__buf__unsafe_ptr=*__t2193t;
  uint64_t CHARS__buf__unsafe_size=*__t2194t;
  uint16_t CHARS__buf__unsafe_offset=*__t2195t;
  uint16_t CHARS__buf__unsafe_align=*__t2196t;
  uint64_t CHARS__pos=*__t2197t;
  char* __t857t__unsafe_ptr=0;
  uint64_t __t857t__dat__pos=0;
  uint64_t __t857t__dat__length=0;
  char __t857t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t858t__=0;
  uint64_t __t859t__=0;
  uint64_t next_pos=0;
  uint64_t __t860t__=0;
  char __t861t__=0;
  uint64_t __t862t=0;
  uint64_t __t863t__=0;
  uint64_t prev_pos=0;
  char* __t864t__unsafe_ptr=0;
  uint64_t __t864t__dat__pos=0;
  uint64_t __t864t__dat__length=0;
  char __t864t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(_other,&__t857t__unsafe_ptr,&__t857t__dat__pos,&__t857t__dat__length,&__t857t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t857t__unsafe_ptr;
  other__dat__pos=__t857t__dat__pos;
  other__dat__length=__t857t__dat__length;
  other__dat__first=__t857t__dat__first;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t858t__);
  add__t175t(CHARS__pos,__t858t__,&__t859t__);
  next_pos=__t859t__;
  len__t643t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t860t__);
  gt__t276t(next_pos,__t860t__,&__t861t__);
  if(__t861t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t862t=0;
  add__t175t(CHARS__pos,__t862t,&__t863t__);
  prev_pos=__t863t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t688t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t864t__unsafe_ptr,&__t864t__dat__pos,&__t864t__dat__length,&__t864t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2193t=CHARS__buf__unsafe_ptr;
  *__t2194t=CHARS__buf__unsafe_size;
  *__t2195t=CHARS__buf__unsafe_offset;
  *__t2196t=CHARS__buf__unsafe_align;
  *__t2197t=CHARS__pos;
  *__t2198t=__t864t__unsafe_ptr;
  *__t2199t=__t864t__dat__pos;
  *__t2200t=__t864t__dat__length;
  *__t2201t=__t864t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t778t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2202t, uint64_t* __t2203t, uint64_t* __t2204t, char* __t2205t) {
  char* __t779t__unsafe_ptr=0;
  uint64_t __t779t__unsafe_size=0;
  uint16_t __t779t__unsafe_offset=0;
  uint16_t __t779t__unsafe_align=0;
  char* __t780t__unsafe_ptr=0;
  uint64_t __t780t__unsafe_size=0;
  uint16_t __t780t__unsafe_offset=0;
  uint16_t __t780t__unsafe_align=0;
  uint64_t __t781t=0;
  uint64_t __t782t__=0;
  uint64_t __t783t__=0;
  char* __t784t__unsafe_ptr=0;
  uint64_t __t784t__unsafe_size=0;
  uint16_t __t784t__unsafe_offset=0;
  uint16_t __t784t__unsafe_align=0;
  char __t785t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t786t=0;
  char* __t787t__unsafe_ptr=0;
  uint64_t __t787t__dat__pos=0;
  uint64_t __t787t__dat__length=0;
  char __t787t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t676t(&__t779t__unsafe_ptr,&__t779t__unsafe_size,&__t779t__unsafe_offset,&__t779t__unsafe_align);
  __t780t__unsafe_ptr=__t779t__unsafe_ptr;
  __t780t__unsafe_size=__t779t__unsafe_size;
  __t780t__unsafe_offset=__t779t__unsafe_offset;
  __t780t__unsafe_align=__t779t__unsafe_align;
  __t781t=1;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t782t__);
  add__t175t(__t781t,__t782t__,&__t783t__);
  __t_errcode=alloc__t532t(&__t780t__unsafe_ptr,&__t780t__unsafe_size,&__t780t__unsafe_offset,&__t780t__unsafe_align,__t783t__,&__t784t__unsafe_ptr,&__t784t__unsafe_size,&__t784t__unsafe_offset,&__t784t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t784t__unsafe_ptr;
  buf__unsafe_size=__t784t__unsafe_size;
  buf__unsafe_offset=__t784t__unsafe_offset;
  buf__unsafe_align=__t784t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t786t=0;
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t786t,other__dat__length,other__dat__first,&__t787t__unsafe_ptr,&__t787t__dat__pos,&__t787t__dat__length,&__t787t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t787t__unsafe_ptr,&__t785t____t534t__);
  if(__t785t____t534t__){
  free__t503t(&__t787t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2202t=__t787t__unsafe_ptr;
  *__t2203t=__t787t__dat__pos;
  *__t2204t=__t787t__dat__length;
  *__t2205t=__t787t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t788t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2206t, char** __t2207t, uint64_t* __t2208t, uint64_t* __t2209t, char* __t2210t) {
  char* __t790t__unsafe_ptr=0;
  uint64_t __t790t__dat__pos=0;
  uint64_t __t790t__dat__length=0;
  char __t790t__dat__first=0;
  char __t791t____t785t____t534t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t792t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t669t();
  __t_errcode=copy_null_terminated__t778t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t790t__unsafe_ptr,&__t790t__dat__pos,&__t790t__dat__length,&__t790t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t790t__unsafe_ptr;
  str__dat__pos=__t790t__dat__pos;
  str__dat__length=__t790t__dat__length;
  str__dat__first=__t790t__dat__first;
  add__t505t(str__unsafe_ptr,str__dat__pos,&__t792t__);
  _ret=__t792t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t447t(str__unsafe_ptr,&__t791t____t785t____t534t__);
  if(__t791t____t785t____t534t__){
  free__t503t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2206t=cstr;
  *__t2207t=str__unsafe_ptr;
  *__t2208t=str__dat__pos;
  *__t2209t=str__dat__length;
  *__t2210t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t796t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2211t) {
  goto __t_return;
  __t_return:
  *__t2211t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1618t(const char* cmd, const char** __t2212t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2212t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1617t(const char* cmd, int64_t* __t2213t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2213t=result;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2214t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2214t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2215t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2215t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2216t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2216t=z;
}

int system__t1627t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1628t__cstr=0;
  char* __t1628t__str__unsafe_ptr=0;
  uint64_t __t1628t__str__dat__pos=0;
  uint64_t __t1628t__str__dat__length=0;
  char __t1628t__str__dat__first=0;
  char __t1629t____t791t____t785t____t534t__=0;
  const char* __t1630t__=0;
  const char* __t1631t__=0;
  int64_t __t1632t__=0;
  int64_t result=0;
  uint64_t __t1633t=0;
  int64_t __t1634t__=0;
  char __t1635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t788t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1628t__cstr,&__t1628t__str__unsafe_ptr,&__t1628t__str__dat__pos,&__t1628t__str__dat__length,&__t1628t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t796t(__t1628t__cstr,__t1628t__str__unsafe_ptr,__t1628t__str__dat__pos,__t1628t__str__dat__length,__t1628t__str__dat__first,&__t1630t__);
  __t_errcode=safe__t1618t(__t1630t__,&__t1631t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1617t(__t1631t__,&__t1632t__);
  result=__t1632t__;
  __t1633t=0;
  int__t427t(__t1633t,&__t1634t__);
  neq__t133t(result,__t1634t__,&__t1635t__);
  if(__t1635t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1628t__str__unsafe_ptr,&__t1629t____t791t____t785t____t534t__);
  if(__t1629t____t791t____t785t____t534t__){
  free__t503t(&__t1628t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2122t() {
  char* __t2124t__unsafe_ptr=0;
  uint64_t __t2124t__unsafe_size=0;
  uint16_t __t2124t__unsafe_offset=0;
  uint16_t __t2124t__unsafe_align=0;
  uint64_t __t2125t=0;
  char* __t2126t__unsafe_ptr=0;
  uint64_t __t2126t__unsafe_size=0;
  uint16_t __t2126t__unsafe_offset=0;
  uint16_t __t2126t__unsafe_align=0;
  char __t2127t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t2128t__buf__unsafe_ptr=0;
  uint64_t __t2128t__buf__unsafe_size=0;
  uint16_t __t2128t__buf__unsafe_offset=0;
  uint16_t __t2128t__buf__unsafe_align=0;
  uint64_t __t2128t__pos=0;
  char* __t2130t__unsafe_ptr=0;
  uint64_t __t2130t__dat__pos=0;
  uint64_t __t2130t__dat__length=0;
  char __t2130t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t1575t(&__t2124t__unsafe_ptr,&__t2124t__unsafe_size,&__t2124t__unsafe_offset,&__t2124t__unsafe_align);
  __t2125t=2;
  __t_errcode=alloc__t532t(&__t2124t__unsafe_ptr,&__t2124t__unsafe_size,&__t2124t__unsafe_offset,&__t2124t__unsafe_align,__t2125t,&__t2126t__unsafe_ptr,&__t2126t__unsafe_size,&__t2126t__unsafe_offset,&__t2126t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2126t__unsafe_ptr;
  buf__unsafe_size=__t2126t__unsafe_size;
  buf__unsafe_offset=__t2126t__unsafe_offset;
  buf__unsafe_align=__t2126t__unsafe_align;
  arena__t673t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2128t__buf__unsafe_ptr,&__t2128t__buf__unsafe_size,&__t2128t__buf__unsafe_offset,&__t2128t__buf__unsafe_align,&__t2128t__pos);
  __t_errcode=copy__t856t(&__t2128t__buf__unsafe_ptr,&__t2128t__buf__unsafe_size,&__t2128t__buf__unsafe_offset,&__t2128t__buf__unsafe_align,&__t2128t__pos,__t2129t,&__t2130t__unsafe_ptr,&__t2130t__dat__pos,&__t2130t__dat__length,&__t2130t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2130t__unsafe_ptr;
  s__dat__pos=__t2130t__dat__pos;
  s__dat__length=__t2130t__dat__length;
  s__dat__first=__t2130t__dat__first;
  __t_errcode=system__t1627t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2126t__unsafe_ptr,&__t2127t____t534t__);
  if(__t2127t____t534t__){
  free__t503t(&__t2126t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2122t();return 0;}