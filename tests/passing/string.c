#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2128t="README.md";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t2145t, uint64_t* __t2146t, uint16_t* __t2147t, uint16_t* __t2148t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2145t=unsafe_ptr;
  *__t2146t=unsafe_size;
  *__t2147t=unsafe_offset;
  *__t2148t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2149t) {
  *__t2149t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2150t) {
  int value=0;
  *__t2150t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2151t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2151t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2152t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2152t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2153t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2153t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2154t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2154t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2155t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2155t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2156t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2156t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2157t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2157t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2158t) {
  *__t2158t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2159t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2159t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2160t) {
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
  *__t2160t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2161t, uint64_t* __t2162t, uint64_t* __t2163t, char* __t2164t) {
  goto __t_return;
  __t_return:
  *__t2161t=unsafe_ptr;
  *__t2162t=dat__pos;
  *__t2163t=dat__length;
  *__t2164t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2165t, uint64_t* __t2166t, uint64_t* __t2167t, char* __t2168t) {
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
  *__t2165t=__t699t__unsafe_ptr;
  *__t2166t=__t699t__dat__pos;
  *__t2167t=__t699t__dat__length;
  *__t2168t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2169t, uint64_t* __t2170t, uint64_t* __t2171t, char* __t2172t) {
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
  *__t2169t=__t732t__unsafe_ptr;
  *__t2170t=__t732t__dat__pos;
  *__t2171t=__t732t__dat__length;
  *__t2172t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t2173t, uint64_t* __t2174t, uint64_t* __t2175t, char* __t2176t) {
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
  *__t2173t=__t758t__unsafe_ptr;
  *__t2174t=__t758t__dat__pos;
  *__t2175t=__t758t__dat__length;
  *__t2176t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t673t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2177t) {
  goto __t_return;
  __t_return:
  *__t2177t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2178t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2178t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2179t) {
  char* allocated=*__t2179t;
  if(allocated){
  free(allocated);
  }
  *__t2179t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2180t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2180t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2181t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2181t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2182t) {
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
  *__t2182t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t, uint64_t size, char** __t2187t, uint64_t* __t2188t, uint16_t* __t2189t, uint16_t* __t2190t) {
  char* buffer__unsafe_ptr=*__t2183t;
  uint64_t buffer__unsafe_size=*__t2184t;
  uint16_t buffer__unsafe_offset=*__t2185t;
  uint16_t buffer__unsafe_align=*__t2186t;
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
  *__t2183t=buffer__unsafe_ptr;
  *__t2184t=buffer__unsafe_size;
  *__t2185t=buffer__unsafe_offset;
  *__t2186t=buffer__unsafe_align;
  *__t2187t=buffer__unsafe_ptr;
  *__t2188t=buffer__unsafe_size;
  *__t2189t=buffer__unsafe_offset;
  *__t2190t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t782t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2191t, uint64_t* __t2192t, uint64_t* __t2193t, char* __t2194t) {
  char* __t783t__unsafe_ptr=0;
  uint64_t __t783t__unsafe_size=0;
  uint16_t __t783t__unsafe_offset=0;
  uint16_t __t783t__unsafe_align=0;
  char* __t784t__unsafe_ptr=0;
  uint64_t __t784t__unsafe_size=0;
  uint16_t __t784t__unsafe_offset=0;
  uint16_t __t784t__unsafe_align=0;
  uint64_t __t785t=0;
  uint64_t __t786t__=0;
  uint64_t __t787t__=0;
  char* __t788t__unsafe_ptr=0;
  uint64_t __t788t__unsafe_size=0;
  uint16_t __t788t__unsafe_offset=0;
  uint16_t __t788t__unsafe_align=0;
  char __t789t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t790t=0;
  char* __t791t__unsafe_ptr=0;
  uint64_t __t791t__dat__pos=0;
  uint64_t __t791t__dat__length=0;
  char __t791t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t783t__unsafe_ptr,&__t783t__unsafe_size,&__t783t__unsafe_offset,&__t783t__unsafe_align);
  __t784t__unsafe_ptr=__t783t__unsafe_ptr;
  __t784t__unsafe_size=__t783t__unsafe_size;
  __t784t__unsafe_offset=__t783t__unsafe_offset;
  __t784t__unsafe_align=__t783t__unsafe_align;
  __t785t=1;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t786t__);
  add__t175t(__t785t,__t786t__,&__t787t__);
  __t_errcode=alloc__t532t(&__t784t__unsafe_ptr,&__t784t__unsafe_size,&__t784t__unsafe_offset,&__t784t__unsafe_align,__t787t__,&__t788t__unsafe_ptr,&__t788t__unsafe_size,&__t788t__unsafe_offset,&__t788t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t788t__unsafe_ptr;
  buf__unsafe_size=__t788t__unsafe_size;
  buf__unsafe_offset=__t788t__unsafe_offset;
  buf__unsafe_align=__t788t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t790t=0;
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t790t,other__dat__length,other__dat__first,&__t791t__unsafe_ptr,&__t791t__dat__pos,&__t791t__dat__length,&__t791t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t791t__unsafe_ptr,&__t789t____t534t__);
  if(__t789t____t534t__){
  free__t503t(&__t791t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2191t=__t791t__unsafe_ptr;
  *__t2192t=__t791t__dat__pos;
  *__t2193t=__t791t__dat__length;
  *__t2194t=__t791t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t792t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2195t, char** __t2196t, uint64_t* __t2197t, uint64_t* __t2198t, char* __t2199t) {
  char* __t794t__unsafe_ptr=0;
  uint64_t __t794t__dat__pos=0;
  uint64_t __t794t__dat__length=0;
  char __t794t__dat__first=0;
  char __t795t____t789t____t534t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t796t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t673t();
  __t_errcode=copy_null_terminated__t782t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t794t__unsafe_ptr,&__t794t__dat__pos,&__t794t__dat__length,&__t794t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t794t__unsafe_ptr;
  str__dat__pos=__t794t__dat__pos;
  str__dat__length=__t794t__dat__length;
  str__dat__first=__t794t__dat__first;
  add__t505t(str__unsafe_ptr,str__dat__pos,&__t796t__);
  _ret=__t796t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t447t(str__unsafe_ptr,&__t795t____t789t____t534t__);
  if(__t795t____t789t____t534t__){
  free__t503t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2195t=cstr;
  *__t2196t=str__unsafe_ptr;
  *__t2197t=str__dat__pos;
  *__t2198t=str__dat__length;
  *__t2199t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t800t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2200t) {
  goto __t_return;
  __t_return:
  *__t2200t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1640t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2201t) {
  const char* __t1641t__cstr=0;
  char* __t1641t__str__unsafe_ptr=0;
  uint64_t __t1641t__str__dat__pos=0;
  uint64_t __t1641t__str__dat__length=0;
  char __t1641t__str__dat__first=0;
  char __t1642t____t795t____t789t____t534t__=0;
  const char* __t1643t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1644t__=0;
  char __t1645t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t792t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1641t__cstr,&__t1641t__str__unsafe_ptr,&__t1641t__str__dat__pos,&__t1641t__str__dat__length,&__t1641t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t800t(__t1641t__cstr,__t1641t__str__unsafe_ptr,__t1641t__str__dat__pos,__t1641t__str__dat__length,__t1641t__str__dat__first,&__t1643t__);
  path=__t1643t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t447t(unsafe_ptr,&__t1644t__);
  not__t28t(__t1644t__,&__t1645t__);
  if(__t1645t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2201t=unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1641t__str__unsafe_ptr,&__t1642t____t795t____t789t____t534t__);
  if(__t1642t____t795t____t789t____t534t__){
  free__t503t(&__t1641t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2202t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2202t=__t483t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t596t(char** __t2203t, uint64_t* __t2204t, uint16_t* __t2205t, uint16_t* __t2206t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2203t=unsafe_ptr;
  *__t2204t=unsafe_size;
  *__t2205t=unsafe_offset;
  *__t2206t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t595t(uint64_t size, char** __t2207t, uint64_t* __t2208t, uint16_t* __t2209t, uint16_t* __t2210t) {
  char* __t598t__unsafe_ptr=0;
  uint64_t __t598t__unsafe_size=0;
  uint16_t __t598t__unsafe_offset=0;
  uint16_t __t598t__unsafe_align=0;
  char* __t599t__unsafe_ptr=0;
  uint64_t __t599t__unsafe_size=0;
  uint16_t __t599t__unsafe_offset=0;
  uint16_t __t599t__unsafe_align=0;
  char* __t600t__unsafe_ptr=0;
  uint64_t __t600t__unsafe_size=0;
  uint16_t __t600t__unsafe_offset=0;
  uint16_t __t600t__unsafe_align=0;
  char __t601t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t596t(&__t598t__unsafe_ptr,&__t598t__unsafe_size,&__t598t__unsafe_offset,&__t598t__unsafe_align);
  __t599t__unsafe_ptr=__t598t__unsafe_ptr;
  __t599t__unsafe_size=__t598t__unsafe_size;
  __t599t__unsafe_offset=__t598t__unsafe_offset;
  __t599t__unsafe_align=__t598t__unsafe_align;
  __t_errcode=alloc__t532t(&__t599t__unsafe_ptr,&__t599t__unsafe_size,&__t599t__unsafe_offset,&__t599t__unsafe_align,size,&__t600t__unsafe_ptr,&__t600t__unsafe_size,&__t600t__unsafe_offset,&__t600t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t600t__unsafe_ptr,&__t601t____t534t__);
  if(__t601t____t534t__){
  free__t503t(&__t600t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2207t=__t600t__unsafe_ptr;
  *__t2208t=__t600t__unsafe_size;
  *__t2209t=__t600t__unsafe_offset;
  *__t2210t=__t600t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2211t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2211t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2212t) {
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
  *__t2212t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t1821t(char** __t2213t, uint64_t* __t2214t, uint16_t* __t2215t, uint16_t* __t2216t, uint64_t* __t2217t, char** __t2218t, char** __t2219t, uint64_t* __t2220t, uint64_t* __t2221t, char* __t2222t) {
  char* buf__unsafe_ptr=*__t2213t;
  uint64_t buf__unsafe_size=*__t2214t;
  uint16_t buf__unsafe_offset=*__t2215t;
  uint16_t buf__unsafe_align=*__t2216t;
  uint64_t pos=*__t2217t;
  char* f__unsafe_ptr=*__t2218t;
  int __t1822t=0;
  char __t1823t__=0;
  char __t1824t__=0;
  char* __t1825t__=0;
  char* contents=0;
  uint64_t __t1826t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1827t__=0;
  char __t1828t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1829t__=0;
  char* __t1831t__unsafe_ptr=0;
  uint64_t __t1831t__dat__pos=0;
  uint64_t __t1831t__dat__length=0;
  char __t1831t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(buf__unsafe_ptr,&__t1823t__);
  not__t28t(__t1823t__,&__t1824t__);
  if(__t1824t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t505t(buf__unsafe_ptr,pos,&__t1825t__);
  contents=__t1825t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t1826t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1826t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t447t(obtained,&__t1827t__);
  not__t28t(__t1827t__,&__t1828t__);
  if(__t1828t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t1829t__);
  pos=__t1829t__;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1831t__unsafe_ptr,&__t1831t__dat__pos,&__t1831t__dat__length,&__t1831t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2213t=buf__unsafe_ptr;
  *__t2214t=buf__unsafe_size;
  *__t2215t=buf__unsafe_offset;
  *__t2216t=buf__unsafe_align;
  *__t2217t=pos;
  *__t2218t=f__unsafe_ptr;
  *__t2219t=__t1831t__unsafe_ptr;
  *__t2220t=__t1831t__dat__pos;
  *__t2221t=__t1831t__dat__length;
  *__t2222t=__t1831t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2078t(char** __t2223t, uint64_t* __t2224t, uint16_t* __t2225t, uint16_t* __t2226t, uint64_t* __t2227t, char** __t2228t, uint64_t __t_anon3, char** __t2229t, uint64_t* __t2230t, uint64_t* __t2231t, char* __t2232t) {
  char* buf__unsafe_ptr=*__t2223t;
  uint64_t buf__unsafe_size=*__t2224t;
  uint16_t buf__unsafe_offset=*__t2225t;
  uint16_t buf__unsafe_align=*__t2226t;
  uint64_t pos=*__t2227t;
  char* f__unsafe_ptr=*__t2228t;
  int __t2079t=0;
  char* __t2080t__unsafe_ptr=0;
  uint64_t __t2080t__dat__pos=0;
  uint64_t __t2080t__dat__length=0;
  char __t2080t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1821t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2080t__unsafe_ptr,&__t2080t__dat__pos,&__t2080t__dat__length,&__t2080t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2223t=buf__unsafe_ptr;
  *__t2224t=buf__unsafe_size;
  *__t2225t=buf__unsafe_offset;
  *__t2226t=buf__unsafe_align;
  *__t2227t=pos;
  *__t2228t=f__unsafe_ptr;
  *__t2229t=__t2080t__unsafe_ptr;
  *__t2230t=__t2080t__dat__pos;
  *__t2231t=__t2080t__dat__length;
  *__t2232t=__t2080t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t736t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2233t, uint64_t* __t2234t, uint64_t* __t2235t, char* __t2236t) {
  uint64_t __t737t__=0;
  uint64_t length=0;
  uint64_t __t738t=0;
  char __t739t__=0;
  char* __t740t__=0;
  char __t741t__value=0;
  char first=0;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__dat__pos=0;
  uint64_t __t742t__dat__length=0;
  char __t742t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t737t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t737t__;
  __t738t=0;
  neq__t144t(length,__t738t,&__t739t__);
  if(__t739t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t740t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t740t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t741t__value,__t740t__,1);
  first=__t741t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t742t__unsafe_ptr,&__t742t__dat__pos,&__t742t__dat__length,&__t742t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2233t=__t742t__unsafe_ptr;
  *__t2234t=__t742t__dat__pos;
  *__t2235t=__t742t__dat__length;
  *__t2236t=__t742t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2126t() {
  char* __t2129t__unsafe_ptr=0;
  uint64_t __t2129t__dat__pos=0;
  uint64_t __t2129t__dat__length=0;
  char __t2129t__dat__first=0;
  char* __t2130t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2132t=0;
  uint64_t __t2133t__=0;
  char* __t2134t__unsafe_ptr=0;
  uint64_t __t2134t__unsafe_size=0;
  uint16_t __t2134t__unsafe_offset=0;
  uint16_t __t2134t__unsafe_align=0;
  char __t2135t____t601t____t534t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2136t=0;
  uint64_t __t2137t=0;
  uint64_t pos=0;
  uint64_t __t2138t=0;
  char __t2139t=0;
  char* __t2140t__unsafe_ptr=0;
  uint64_t __t2140t__dat__pos=0;
  uint64_t __t2140t__dat__length=0;
  char __t2140t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2141t=0;
  char* __t2143t__unsafe_ptr=0;
  uint64_t __t2143t__dat__pos=0;
  uint64_t __t2143t__dat__length=0;
  char __t2143t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t750t(__t2128t,&__t2129t__unsafe_ptr,&__t2129t__dat__pos,&__t2129t__dat__length,&__t2129t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1640t(__t2129t__unsafe_ptr,__t2129t__dat__pos,__t2129t__dat__length,__t2129t__dat__first,&__t2130t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2130t__unsafe_ptr;
  __t2132t=4;
  KB__t481t(__t2132t,&__t2133t__);
  __t_errcode=alloc__t595t(__t2133t__,&__t2134t__unsafe_ptr,&__t2134t__unsafe_size,&__t2134t__unsafe_offset,&__t2134t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2134t__unsafe_ptr;
  mem__unsafe_size=__t2134t__unsafe_size;
  mem__unsafe_offset=__t2134t__unsafe_offset;
  mem__unsafe_align=__t2134t__unsafe_align;
  __t2136t=0;
  __t2137t=__t2136t;
  pos=__t2137t;
  __t2138t=0;
  while(1){
  __t_complain=get__t2078t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2138t,&__t2140t__unsafe_ptr,&__t2140t__dat__pos,&__t2140t__dat__length,&__t2140t__dat__first);
  __t2139t=__t_complain;
  line__unsafe_ptr=__t2140t__unsafe_ptr;
  line__dat__pos=__t2140t__dat__pos;
  line__dat__length=__t2140t__dat__length;
  line__dat__first=__t2140t__dat__first;
  __t2139t=__t2139t==0;
  __t2138t=__t2138t+1;
  if(!__t2139t){
  break;
  }
  continue;
  }
  if(__t2130t__unsafe_ptr){
  fclose((FILE*)__t2130t__unsafe_ptr);
  __t2130t__unsafe_ptr=0;
  }
  __t2141t=0;
  __t_errcode=str__t736t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2141t,pos,&__t2143t__unsafe_ptr,&__t2143t__dat__pos,&__t2143t__dat__length,&__t2143t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t893t(__t2143t__unsafe_ptr,__t2143t__dat__pos,__t2143t__dat__length,__t2143t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2134t__unsafe_ptr,&__t2135t____t601t____t534t__);
  if(__t2135t____t601t____t534t__){
  free__t503t(&__t2134t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2126t();return 0;}