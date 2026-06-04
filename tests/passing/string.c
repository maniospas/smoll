#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t2186t="README.md";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2203t, uint64_t* __t2204t, uint16_t* __t2205t, uint16_t* __t2206t) {
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

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2207t) {
  *__t2207t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2208t) {
  int value=0;
  *__t2208t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2209t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2209t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2210t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2210t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2211t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2211t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2212t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2212t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2213t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2213t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2214t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2214t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2215t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2215t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2216t) {
  *__t2216t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2217t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2217t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2218t) {
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
  *__t2218t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2219t, uint64_t* __t2220t, uint64_t* __t2221t, char* __t2222t) {
  goto __t_return;
  __t_return:
  *__t2219t=unsafe_ptr;
  *__t2220t=dat__pos;
  *__t2221t=dat__length;
  *__t2222t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2223t, uint64_t* __t2224t, uint64_t* __t2225t, char* __t2226t) {
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
  *__t2223t=__t794t__unsafe_ptr;
  *__t2224t=__t794t__dat__pos;
  *__t2225t=__t794t__dat__length;
  *__t2226t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2227t, uint64_t* __t2228t, uint64_t* __t2229t, char* __t2230t) {
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
  *__t2227t=__t827t__unsafe_ptr;
  *__t2228t=__t827t__dat__pos;
  *__t2229t=__t827t__dat__length;
  *__t2230t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2231t, uint64_t* __t2232t, uint64_t* __t2233t, char* __t2234t) {
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
  *__t2231t=__t853t__unsafe_ptr;
  *__t2232t=__t853t__dat__pos;
  *__t2233t=__t853t__dat__length;
  *__t2234t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2235t) {
  goto __t_return;
  __t_return:
  *__t2235t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2236t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2236t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2237t) {
  char* allocated=*__t2237t;
  if(allocated){
  free(allocated);
  }
  *__t2237t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2238t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2238t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2239t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2239t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2240t) {
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
  *__t2240t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2241t, uint64_t* __t2242t, uint16_t* __t2243t, uint16_t* __t2244t, uint64_t size, char** __t2245t, uint64_t* __t2246t, uint16_t* __t2247t, uint16_t* __t2248t) {
  char* buffer__unsafe_ptr=*__t2241t;
  uint64_t buffer__unsafe_size=*__t2242t;
  uint16_t buffer__unsafe_offset=*__t2243t;
  uint16_t buffer__unsafe_align=*__t2244t;
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
  *__t2241t=buffer__unsafe_ptr;
  *__t2242t=buffer__unsafe_size;
  *__t2243t=buffer__unsafe_offset;
  *__t2244t=buffer__unsafe_align;
  *__t2245t=buffer__unsafe_ptr;
  *__t2246t=buffer__unsafe_size;
  *__t2247t=buffer__unsafe_offset;
  *__t2248t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t909t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  char* __t910t__unsafe_ptr=0;
  uint64_t __t910t__unsafe_size=0;
  uint16_t __t910t__unsafe_offset=0;
  uint16_t __t910t__unsafe_align=0;
  char* __t911t__unsafe_ptr=0;
  uint64_t __t911t__unsafe_size=0;
  uint16_t __t911t__unsafe_offset=0;
  uint16_t __t911t__unsafe_align=0;
  uint64_t __t912t=0;
  uint64_t __t913t__=0;
  uint64_t __t914t__=0;
  char* __t915t__unsafe_ptr=0;
  uint64_t __t915t__unsafe_size=0;
  uint16_t __t915t__unsafe_offset=0;
  uint16_t __t915t__unsafe_align=0;
  char __t916t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t917t=0;
  char* __t918t__unsafe_ptr=0;
  uint64_t __t918t__dat__pos=0;
  uint64_t __t918t__dat__length=0;
  char __t918t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t763t(&__t910t__unsafe_ptr,&__t910t__unsafe_size,&__t910t__unsafe_offset,&__t910t__unsafe_align);
  __t911t__unsafe_ptr=__t910t__unsafe_ptr;
  __t911t__unsafe_size=__t910t__unsafe_size;
  __t911t__unsafe_offset=__t910t__unsafe_offset;
  __t911t__unsafe_align=__t910t__unsafe_align;
  __t912t=1;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t913t__);
  add__t175t(__t912t,__t913t__,&__t914t__);
  __t_errcode=alloc__t532t(&__t911t__unsafe_ptr,&__t911t__unsafe_size,&__t911t__unsafe_offset,&__t911t__unsafe_align,__t914t__,&__t915t__unsafe_ptr,&__t915t__unsafe_size,&__t915t__unsafe_offset,&__t915t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t915t__unsafe_ptr;
  buf__unsafe_size=__t915t__unsafe_size;
  buf__unsafe_offset=__t915t__unsafe_offset;
  buf__unsafe_align=__t915t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t917t=0;
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t917t,other__dat__length,other__dat__first,&__t918t__unsafe_ptr,&__t918t__dat__pos,&__t918t__dat__length,&__t918t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t918t__unsafe_ptr,&__t916t____t534t__);
  if(__t916t____t534t__){
  free__t503t(&__t918t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2249t=__t918t__unsafe_ptr;
  *__t2250t=__t918t__dat__pos;
  *__t2251t=__t918t__dat__length;
  *__t2252t=__t918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t919t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2253t, char** __t2254t, uint64_t* __t2255t, uint64_t* __t2256t, char* __t2257t) {
  char* __t921t__unsafe_ptr=0;
  uint64_t __t921t__dat__pos=0;
  uint64_t __t921t__dat__length=0;
  char __t921t__dat__first=0;
  char __t922t____t916t____t534t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t923t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t648t();
  __t_errcode=copy_null_terminated__t909t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t921t__unsafe_ptr,&__t921t__dat__pos,&__t921t__dat__length,&__t921t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t921t__unsafe_ptr;
  str__dat__pos=__t921t__dat__pos;
  str__dat__length=__t921t__dat__length;
  str__dat__first=__t921t__dat__first;
  add__t505t(str__unsafe_ptr,str__dat__pos,&__t923t__);
  _ret=__t923t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t447t(str__unsafe_ptr,&__t922t____t916t____t534t__);
  if(__t922t____t916t____t534t__){
  free__t503t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2253t=cstr;
  *__t2254t=str__unsafe_ptr;
  *__t2255t=str__dat__pos;
  *__t2256t=str__dat__length;
  *__t2257t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t927t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2258t) {
  goto __t_return;
  __t_return:
  *__t2258t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1697t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2259t) {
  const char* __t1698t__cstr=0;
  char* __t1698t__str__unsafe_ptr=0;
  uint64_t __t1698t__str__dat__pos=0;
  uint64_t __t1698t__str__dat__length=0;
  char __t1698t__str__dat__first=0;
  char __t1699t____t922t____t916t____t534t__=0;
  const char* __t1700t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1701t__=0;
  char __t1702t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t919t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1698t__cstr,&__t1698t__str__unsafe_ptr,&__t1698t__str__dat__pos,&__t1698t__str__dat__length,&__t1698t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t927t(__t1698t__cstr,__t1698t__str__unsafe_ptr,__t1698t__str__dat__pos,__t1698t__str__dat__length,__t1698t__str__dat__first,&__t1700t__);
  path=__t1700t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t447t(unsafe_ptr,&__t1701t__);
  not__t28t(__t1701t__,&__t1702t__);
  if(__t1702t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2259t=unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1698t__str__unsafe_ptr,&__t1699t____t922t____t916t____t534t__);
  if(__t1699t____t922t____t916t____t534t__){
  free__t503t(&__t1698t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2260t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2260t=__t483t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t596t(char** __t2261t, uint64_t* __t2262t, uint16_t* __t2263t, uint16_t* __t2264t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2261t=unsafe_ptr;
  *__t2262t=unsafe_size;
  *__t2263t=unsafe_offset;
  *__t2264t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t595t(uint64_t size, char** __t2265t, uint64_t* __t2266t, uint16_t* __t2267t, uint16_t* __t2268t) {
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
  *__t2265t=__t600t__unsafe_ptr;
  *__t2266t=__t600t__unsafe_size;
  *__t2267t=__t600t__unsafe_offset;
  *__t2268t=__t600t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2269t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2269t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2270t) {
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
  *__t2270t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t1878t(char** __t2271t, uint64_t* __t2272t, uint16_t* __t2273t, uint16_t* __t2274t, uint64_t* __t2275t, char** __t2276t, char** __t2277t, uint64_t* __t2278t, uint64_t* __t2279t, char* __t2280t) {
  char* buf__unsafe_ptr=*__t2271t;
  uint64_t buf__unsafe_size=*__t2272t;
  uint16_t buf__unsafe_offset=*__t2273t;
  uint16_t buf__unsafe_align=*__t2274t;
  uint64_t pos=*__t2275t;
  char* f__unsafe_ptr=*__t2276t;
  int __t1879t=0;
  char __t1880t__=0;
  char __t1881t__=0;
  char* __t1882t__=0;
  char* contents=0;
  uint64_t __t1883t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1884t__=0;
  char __t1885t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1886t__=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__dat__pos=0;
  uint64_t __t1888t__dat__length=0;
  char __t1888t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(buf__unsafe_ptr,&__t1880t__);
  not__t28t(__t1880t__,&__t1881t__);
  if(__t1881t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t505t(buf__unsafe_ptr,pos,&__t1882t__);
  contents=__t1882t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t1883t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1883t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t447t(obtained,&__t1884t__);
  not__t28t(__t1884t__,&__t1885t__);
  if(__t1885t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t1886t__);
  pos=__t1886t__;
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1888t__unsafe_ptr,&__t1888t__dat__pos,&__t1888t__dat__length,&__t1888t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2271t=buf__unsafe_ptr;
  *__t2272t=buf__unsafe_size;
  *__t2273t=buf__unsafe_offset;
  *__t2274t=buf__unsafe_align;
  *__t2275t=pos;
  *__t2276t=f__unsafe_ptr;
  *__t2277t=__t1888t__unsafe_ptr;
  *__t2278t=__t1888t__dat__pos;
  *__t2279t=__t1888t__dat__length;
  *__t2280t=__t1888t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2136t(char** __t2281t, uint64_t* __t2282t, uint16_t* __t2283t, uint16_t* __t2284t, uint64_t* __t2285t, char** __t2286t, uint64_t __t_anon3, char** __t2287t, uint64_t* __t2288t, uint64_t* __t2289t, char* __t2290t) {
  char* buf__unsafe_ptr=*__t2281t;
  uint64_t buf__unsafe_size=*__t2282t;
  uint16_t buf__unsafe_offset=*__t2283t;
  uint16_t buf__unsafe_align=*__t2284t;
  uint64_t pos=*__t2285t;
  char* f__unsafe_ptr=*__t2286t;
  int __t2137t=0;
  char* __t2138t__unsafe_ptr=0;
  uint64_t __t2138t__dat__pos=0;
  uint64_t __t2138t__dat__length=0;
  char __t2138t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1878t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2138t__unsafe_ptr,&__t2138t__dat__pos,&__t2138t__dat__length,&__t2138t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2281t=buf__unsafe_ptr;
  *__t2282t=buf__unsafe_size;
  *__t2283t=buf__unsafe_offset;
  *__t2284t=buf__unsafe_align;
  *__t2285t=pos;
  *__t2286t=f__unsafe_ptr;
  *__t2287t=__t2138t__unsafe_ptr;
  *__t2288t=__t2138t__dat__pos;
  *__t2289t=__t2138t__dat__length;
  *__t2290t=__t2138t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t831t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2291t, uint64_t* __t2292t, uint64_t* __t2293t, char* __t2294t) {
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
  *__t2291t=__t837t__unsafe_ptr;
  *__t2292t=__t837t__dat__pos;
  *__t2293t=__t837t__dat__length;
  *__t2294t=__t837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2184t() {
  char* __t2187t__unsafe_ptr=0;
  uint64_t __t2187t__dat__pos=0;
  uint64_t __t2187t__dat__length=0;
  char __t2187t__dat__first=0;
  char* __t2188t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2190t=0;
  uint64_t __t2191t__=0;
  char* __t2192t__unsafe_ptr=0;
  uint64_t __t2192t__unsafe_size=0;
  uint16_t __t2192t__unsafe_offset=0;
  uint16_t __t2192t__unsafe_align=0;
  char __t2193t____t601t____t534t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2194t=0;
  uint64_t __t2195t=0;
  uint64_t pos=0;
  uint64_t __t2196t=0;
  char __t2197t=0;
  char* __t2198t__unsafe_ptr=0;
  uint64_t __t2198t__dat__pos=0;
  uint64_t __t2198t__dat__length=0;
  char __t2198t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2199t=0;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__dat__pos=0;
  uint64_t __t2201t__dat__length=0;
  char __t2201t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t845t(__t2186t,&__t2187t__unsafe_ptr,&__t2187t__dat__pos,&__t2187t__dat__length,&__t2187t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1697t(__t2187t__unsafe_ptr,__t2187t__dat__pos,__t2187t__dat__length,__t2187t__dat__first,&__t2188t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2188t__unsafe_ptr;
  __t2190t=4;
  KB__t481t(__t2190t,&__t2191t__);
  __t_errcode=alloc__t595t(__t2191t__,&__t2192t__unsafe_ptr,&__t2192t__unsafe_size,&__t2192t__unsafe_offset,&__t2192t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2192t__unsafe_ptr;
  mem__unsafe_size=__t2192t__unsafe_size;
  mem__unsafe_offset=__t2192t__unsafe_offset;
  mem__unsafe_align=__t2192t__unsafe_align;
  __t2194t=0;
  __t2195t=__t2194t;
  pos=__t2195t;
  __t2196t=0;
  while(1){
  __t_complain=get__t2136t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2196t,&__t2198t__unsafe_ptr,&__t2198t__dat__pos,&__t2198t__dat__length,&__t2198t__dat__first);
  __t2197t=__t_complain;
  line__unsafe_ptr=__t2198t__unsafe_ptr;
  line__dat__pos=__t2198t__dat__pos;
  line__dat__length=__t2198t__dat__length;
  line__dat__first=__t2198t__dat__first;
  __t2197t=__t2197t==0;
  __t2196t=__t2196t+1;
  if(!__t2197t){
  break;
  }
  continue;
  }
  if(__t2188t__unsafe_ptr){
  fclose((FILE*)__t2188t__unsafe_ptr);
  __t2188t__unsafe_ptr=0;
  }
  __t2199t=0;
  __t_errcode=str__t831t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2199t,pos,&__t2201t__unsafe_ptr,&__t2201t__dat__pos,&__t2201t__dat__length,&__t2201t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t2201t__unsafe_ptr,__t2201t__dat__pos,__t2201t__dat__length,__t2201t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2192t__unsafe_ptr,&__t2193t____t601t____t534t__);
  if(__t2193t____t601t____t534t__){
  free__t503t(&__t2192t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2184t();return 0;}