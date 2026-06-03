#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2124t="README.md";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2141t=unsafe_ptr;
  *__t2142t=unsafe_size;
  *__t2143t=unsafe_offset;
  *__t2144t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2145t) {
  *__t2145t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2146t) {
  int value=0;
  *__t2146t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2147t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2147t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2148t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2148t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2149t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2149t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2150t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2150t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2151t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2151t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2152t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2152t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2153t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2153t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2154t) {
  *__t2154t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2155t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2155t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2156t) {
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
  *__t2156t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2157t, uint64_t* __t2158t, uint64_t* __t2159t, char* __t2160t) {
  goto __t_return;
  __t_return:
  *__t2157t=unsafe_ptr;
  *__t2158t=dat__pos;
  *__t2159t=dat__length;
  *__t2160t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2161t, uint64_t* __t2162t, uint64_t* __t2163t, char* __t2164t) {
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
  *__t2161t=__t695t__unsafe_ptr;
  *__t2162t=__t695t__dat__pos;
  *__t2163t=__t695t__dat__length;
  *__t2164t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2165t, uint64_t* __t2166t, uint64_t* __t2167t, char* __t2168t) {
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
  *__t2165t=__t728t__unsafe_ptr;
  *__t2166t=__t728t__dat__pos;
  *__t2167t=__t728t__dat__length;
  *__t2168t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t2169t, uint64_t* __t2170t, uint64_t* __t2171t, char* __t2172t) {
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
  *__t2169t=__t754t__unsafe_ptr;
  *__t2170t=__t754t__dat__pos;
  *__t2171t=__t754t__dat__length;
  *__t2172t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2173t) {
  goto __t_return;
  __t_return:
  *__t2173t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2174t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2174t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2175t) {
  char* allocated=*__t2175t;
  if(allocated){
  free(allocated);
  }
  *__t2175t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2176t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2176t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2177t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2177t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2178t) {
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
  *__t2178t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2179t, uint64_t* __t2180t, uint16_t* __t2181t, uint16_t* __t2182t, uint64_t size, char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t) {
  char* buffer__unsafe_ptr=*__t2179t;
  uint64_t buffer__unsafe_size=*__t2180t;
  uint16_t buffer__unsafe_offset=*__t2181t;
  uint16_t buffer__unsafe_align=*__t2182t;
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
  *__t2179t=buffer__unsafe_ptr;
  *__t2180t=buffer__unsafe_size;
  *__t2181t=buffer__unsafe_offset;
  *__t2182t=buffer__unsafe_align;
  *__t2183t=buffer__unsafe_ptr;
  *__t2184t=buffer__unsafe_size;
  *__t2185t=buffer__unsafe_offset;
  *__t2186t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t778t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2187t, uint64_t* __t2188t, uint64_t* __t2189t, char* __t2190t) {
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
  *__t2187t=__t787t__unsafe_ptr;
  *__t2188t=__t787t__dat__pos;
  *__t2189t=__t787t__dat__length;
  *__t2190t=__t787t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t788t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2191t, char** __t2192t, uint64_t* __t2193t, uint64_t* __t2194t, char* __t2195t) {
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
  *__t2191t=cstr;
  *__t2192t=str__unsafe_ptr;
  *__t2193t=str__dat__pos;
  *__t2194t=str__dat__length;
  *__t2195t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t796t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2196t) {
  goto __t_return;
  __t_return:
  *__t2196t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1636t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2197t) {
  const char* __t1637t__cstr=0;
  char* __t1637t__str__unsafe_ptr=0;
  uint64_t __t1637t__str__dat__pos=0;
  uint64_t __t1637t__str__dat__length=0;
  char __t1637t__str__dat__first=0;
  char __t1638t____t791t____t785t____t534t__=0;
  const char* __t1639t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1640t__=0;
  char __t1641t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t788t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1637t__cstr,&__t1637t__str__unsafe_ptr,&__t1637t__str__dat__pos,&__t1637t__str__dat__length,&__t1637t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t796t(__t1637t__cstr,__t1637t__str__unsafe_ptr,__t1637t__str__dat__pos,__t1637t__str__dat__length,__t1637t__str__dat__first,&__t1639t__);
  path=__t1639t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t447t(unsafe_ptr,&__t1640t__);
  not__t28t(__t1640t__,&__t1641t__);
  if(__t1641t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2197t=unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1637t__str__unsafe_ptr,&__t1638t____t791t____t785t____t534t__);
  if(__t1638t____t791t____t785t____t534t__){
  free__t503t(&__t1637t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2198t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2198t=__t483t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t596t(char** __t2199t, uint64_t* __t2200t, uint16_t* __t2201t, uint16_t* __t2202t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2199t=unsafe_ptr;
  *__t2200t=unsafe_size;
  *__t2201t=unsafe_offset;
  *__t2202t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t595t(uint64_t size, char** __t2203t, uint64_t* __t2204t, uint16_t* __t2205t, uint16_t* __t2206t) {
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
  *__t2203t=__t600t__unsafe_ptr;
  *__t2204t=__t600t__unsafe_size;
  *__t2205t=__t600t__unsafe_offset;
  *__t2206t=__t600t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2207t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2207t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2208t) {
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
  *__t2208t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t1817t(char** __t2209t, uint64_t* __t2210t, uint16_t* __t2211t, uint16_t* __t2212t, uint64_t* __t2213t, char** __t2214t, char** __t2215t, uint64_t* __t2216t, uint64_t* __t2217t, char* __t2218t) {
  char* buf__unsafe_ptr=*__t2209t;
  uint64_t buf__unsafe_size=*__t2210t;
  uint16_t buf__unsafe_offset=*__t2211t;
  uint16_t buf__unsafe_align=*__t2212t;
  uint64_t pos=*__t2213t;
  char* f__unsafe_ptr=*__t2214t;
  int __t1818t=0;
  char __t1819t__=0;
  char __t1820t__=0;
  char* __t1821t__=0;
  char* contents=0;
  uint64_t __t1822t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1823t__=0;
  char __t1824t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1825t__=0;
  char* __t1827t__unsafe_ptr=0;
  uint64_t __t1827t__dat__pos=0;
  uint64_t __t1827t__dat__length=0;
  char __t1827t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(buf__unsafe_ptr,&__t1819t__);
  not__t28t(__t1819t__,&__t1820t__);
  if(__t1820t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t505t(buf__unsafe_ptr,pos,&__t1821t__);
  contents=__t1821t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t1822t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1822t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t447t(obtained,&__t1823t__);
  not__t28t(__t1823t__,&__t1824t__);
  if(__t1824t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t1825t__);
  pos=__t1825t__;
  __t_errcode=str__t723t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1827t__unsafe_ptr,&__t1827t__dat__pos,&__t1827t__dat__length,&__t1827t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2209t=buf__unsafe_ptr;
  *__t2210t=buf__unsafe_size;
  *__t2211t=buf__unsafe_offset;
  *__t2212t=buf__unsafe_align;
  *__t2213t=pos;
  *__t2214t=f__unsafe_ptr;
  *__t2215t=__t1827t__unsafe_ptr;
  *__t2216t=__t1827t__dat__pos;
  *__t2217t=__t1827t__dat__length;
  *__t2218t=__t1827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2074t(char** __t2219t, uint64_t* __t2220t, uint16_t* __t2221t, uint16_t* __t2222t, uint64_t* __t2223t, char** __t2224t, uint64_t __t_anon3, char** __t2225t, uint64_t* __t2226t, uint64_t* __t2227t, char* __t2228t) {
  char* buf__unsafe_ptr=*__t2219t;
  uint64_t buf__unsafe_size=*__t2220t;
  uint16_t buf__unsafe_offset=*__t2221t;
  uint16_t buf__unsafe_align=*__t2222t;
  uint64_t pos=*__t2223t;
  char* f__unsafe_ptr=*__t2224t;
  int __t2075t=0;
  char* __t2076t__unsafe_ptr=0;
  uint64_t __t2076t__dat__pos=0;
  uint64_t __t2076t__dat__length=0;
  char __t2076t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1817t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2076t__unsafe_ptr,&__t2076t__dat__pos,&__t2076t__dat__length,&__t2076t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2219t=buf__unsafe_ptr;
  *__t2220t=buf__unsafe_size;
  *__t2221t=buf__unsafe_offset;
  *__t2222t=buf__unsafe_align;
  *__t2223t=pos;
  *__t2224t=f__unsafe_ptr;
  *__t2225t=__t2076t__unsafe_ptr;
  *__t2226t=__t2076t__dat__pos;
  *__t2227t=__t2076t__dat__length;
  *__t2228t=__t2076t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t732t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2229t, uint64_t* __t2230t, uint64_t* __t2231t, char* __t2232t) {
  uint64_t __t733t__=0;
  uint64_t length=0;
  uint64_t __t734t=0;
  char __t735t__=0;
  char* __t736t__=0;
  char __t737t__value=0;
  char first=0;
  char* __t738t__unsafe_ptr=0;
  uint64_t __t738t__dat__pos=0;
  uint64_t __t738t__dat__length=0;
  char __t738t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t733t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t733t__;
  __t734t=0;
  neq__t144t(length,__t734t,&__t735t__);
  if(__t735t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t736t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t736t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t737t__value,__t736t__,1);
  first=__t737t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t738t__unsafe_ptr,&__t738t__dat__pos,&__t738t__dat__length,&__t738t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2229t=__t738t__unsafe_ptr;
  *__t2230t=__t738t__dat__pos;
  *__t2231t=__t738t__dat__length;
  *__t2232t=__t738t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2122t() {
  char* __t2125t__unsafe_ptr=0;
  uint64_t __t2125t__dat__pos=0;
  uint64_t __t2125t__dat__length=0;
  char __t2125t__dat__first=0;
  char* __t2126t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2128t=0;
  uint64_t __t2129t__=0;
  char* __t2130t__unsafe_ptr=0;
  uint64_t __t2130t__unsafe_size=0;
  uint16_t __t2130t__unsafe_offset=0;
  uint16_t __t2130t__unsafe_align=0;
  char __t2131t____t601t____t534t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2132t=0;
  uint64_t __t2133t=0;
  uint64_t pos=0;
  uint64_t __t2134t=0;
  char __t2135t=0;
  char* __t2136t__unsafe_ptr=0;
  uint64_t __t2136t__dat__pos=0;
  uint64_t __t2136t__dat__length=0;
  char __t2136t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2137t=0;
  char* __t2139t__unsafe_ptr=0;
  uint64_t __t2139t__dat__pos=0;
  uint64_t __t2139t__dat__length=0;
  char __t2139t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t746t(__t2124t,&__t2125t__unsafe_ptr,&__t2125t__dat__pos,&__t2125t__dat__length,&__t2125t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1636t(__t2125t__unsafe_ptr,__t2125t__dat__pos,__t2125t__dat__length,__t2125t__dat__first,&__t2126t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2126t__unsafe_ptr;
  __t2128t=4;
  KB__t481t(__t2128t,&__t2129t__);
  __t_errcode=alloc__t595t(__t2129t__,&__t2130t__unsafe_ptr,&__t2130t__unsafe_size,&__t2130t__unsafe_offset,&__t2130t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2130t__unsafe_ptr;
  mem__unsafe_size=__t2130t__unsafe_size;
  mem__unsafe_offset=__t2130t__unsafe_offset;
  mem__unsafe_align=__t2130t__unsafe_align;
  __t2132t=0;
  __t2133t=__t2132t;
  pos=__t2133t;
  __t2134t=0;
  while(1){
  __t_complain=get__t2074t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2134t,&__t2136t__unsafe_ptr,&__t2136t__dat__pos,&__t2136t__dat__length,&__t2136t__dat__first);
  __t2135t=__t_complain;
  line__unsafe_ptr=__t2136t__unsafe_ptr;
  line__dat__pos=__t2136t__dat__pos;
  line__dat__length=__t2136t__dat__length;
  line__dat__first=__t2136t__dat__first;
  __t2135t=__t2135t==0;
  __t2134t=__t2134t+1;
  if(!__t2135t){
  break;
  }
  continue;
  }
  if(__t2126t__unsafe_ptr){
  fclose((FILE*)__t2126t__unsafe_ptr);
  __t2126t__unsafe_ptr=0;
  }
  __t2137t=0;
  __t_errcode=str__t732t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2137t,pos,&__t2139t__unsafe_ptr,&__t2139t__dat__pos,&__t2139t__dat__length,&__t2139t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t889t(__t2139t__unsafe_ptr,__t2139t__dat__pos,__t2139t__dat__length,__t2139t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2130t__unsafe_ptr,&__t2131t____t601t____t534t__);
  if(__t2131t____t601t____t534t__){
  free__t503t(&__t2130t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2122t();return 0;}