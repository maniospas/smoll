#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2418t="README.md";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2435t, uint64_t* __t2436t, uint16_t* __t2437t, uint16_t* __t2438t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2435t=unsafe_ptr;
  *__t2436t=unsafe_size;
  *__t2437t=unsafe_offset;
  *__t2438t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2439t) {
  *__t2439t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2440t) {
  int value=0;
  *__t2440t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2441t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2441t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2442t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2442t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2443t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2443t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2444t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2444t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2445t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2445t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2446t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2446t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2447t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2447t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2448t) {
  *__t2448t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2449t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2449t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2450t) {
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
  *__t2450t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2451t, uint64_t* __t2452t, uint64_t* __t2453t, char* __t2454t) {
  goto __t_return;
  __t_return:
  *__t2451t=unsafe_ptr;
  *__t2452t=dat__pos;
  *__t2453t=dat__length;
  *__t2454t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2455t, uint64_t* __t2456t, uint64_t* __t2457t, char* __t2458t) {
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
  *__t2455t=__t794t__unsafe_ptr;
  *__t2456t=__t794t__dat__pos;
  *__t2457t=__t794t__dat__length;
  *__t2458t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2459t, uint64_t* __t2460t, uint64_t* __t2461t, char* __t2462t) {
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
  *__t2459t=__t827t__unsafe_ptr;
  *__t2460t=__t827t__dat__pos;
  *__t2461t=__t827t__dat__length;
  *__t2462t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2463t, uint64_t* __t2464t, uint64_t* __t2465t, char* __t2466t) {
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
  *__t2463t=__t853t__unsafe_ptr;
  *__t2464t=__t853t__dat__pos;
  *__t2465t=__t853t__dat__length;
  *__t2466t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2467t) {
  goto __t_return;
  __t_return:
  *__t2467t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2468t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2468t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2469t) {
  char* allocated=*__t2469t;
  if(allocated){
  free(allocated);
  }
  *__t2469t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2470t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2470t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2471t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2471t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2472t) {
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
  *__t2472t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2473t, uint64_t* __t2474t, uint16_t* __t2475t, uint16_t* __t2476t, uint64_t size, char** __t2477t, uint64_t* __t2478t, uint16_t* __t2479t, uint16_t* __t2480t) {
  char* buffer__unsafe_ptr=*__t2473t;
  uint64_t buffer__unsafe_size=*__t2474t;
  uint16_t buffer__unsafe_offset=*__t2475t;
  uint16_t buffer__unsafe_align=*__t2476t;
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
  *__t2473t=buffer__unsafe_ptr;
  *__t2474t=buffer__unsafe_size;
  *__t2475t=buffer__unsafe_offset;
  *__t2476t=buffer__unsafe_align;
  *__t2477t=buffer__unsafe_ptr;
  *__t2478t=buffer__unsafe_size;
  *__t2479t=buffer__unsafe_offset;
  *__t2480t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t909t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2481t, uint64_t* __t2482t, uint64_t* __t2483t, char* __t2484t) {
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
  *__t2481t=__t918t__unsafe_ptr;
  *__t2482t=__t918t__dat__pos;
  *__t2483t=__t918t__dat__length;
  *__t2484t=__t918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t919t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2485t, char** __t2486t, uint64_t* __t2487t, uint64_t* __t2488t, char* __t2489t) {
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
  *__t2485t=cstr;
  *__t2486t=str__unsafe_ptr;
  *__t2487t=str__dat__pos;
  *__t2488t=str__dat__length;
  *__t2489t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t927t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2490t) {
  goto __t_return;
  __t_return:
  *__t2490t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1929t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2491t) {
  const char* __t1930t__cstr=0;
  char* __t1930t__str__unsafe_ptr=0;
  uint64_t __t1930t__str__dat__pos=0;
  uint64_t __t1930t__str__dat__length=0;
  char __t1930t__str__dat__first=0;
  char __t1931t____t922t____t916t____t534t__=0;
  const char* __t1932t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1933t__=0;
  char __t1934t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t919t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1930t__cstr,&__t1930t__str__unsafe_ptr,&__t1930t__str__dat__pos,&__t1930t__str__dat__length,&__t1930t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t927t(__t1930t__cstr,__t1930t__str__unsafe_ptr,__t1930t__str__dat__pos,__t1930t__str__dat__length,__t1930t__str__dat__first,&__t1932t__);
  path=__t1932t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t447t(unsafe_ptr,&__t1933t__);
  not__t28t(__t1933t__,&__t1934t__);
  if(__t1934t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2491t=unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1930t__str__unsafe_ptr,&__t1931t____t922t____t916t____t534t__);
  if(__t1931t____t922t____t916t____t534t__){
  free__t503t(&__t1930t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2492t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2492t=__t483t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t596t(char** __t2493t, uint64_t* __t2494t, uint16_t* __t2495t, uint16_t* __t2496t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2493t=unsafe_ptr;
  *__t2494t=unsafe_size;
  *__t2495t=unsafe_offset;
  *__t2496t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t595t(uint64_t size, char** __t2497t, uint64_t* __t2498t, uint16_t* __t2499t, uint16_t* __t2500t) {
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
  *__t2497t=__t600t__unsafe_ptr;
  *__t2498t=__t600t__unsafe_size;
  *__t2499t=__t600t__unsafe_offset;
  *__t2500t=__t600t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2501t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2501t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2502t) {
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
  *__t2502t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t2110t(char** __t2503t, uint64_t* __t2504t, uint16_t* __t2505t, uint16_t* __t2506t, uint64_t* __t2507t, char** __t2508t, char** __t2509t, uint64_t* __t2510t, uint64_t* __t2511t, char* __t2512t) {
  char* buf__unsafe_ptr=*__t2503t;
  uint64_t buf__unsafe_size=*__t2504t;
  uint16_t buf__unsafe_offset=*__t2505t;
  uint16_t buf__unsafe_align=*__t2506t;
  uint64_t pos=*__t2507t;
  char* f__unsafe_ptr=*__t2508t;
  int __t2111t=0;
  char __t2112t__=0;
  char __t2113t__=0;
  char* __t2114t__=0;
  char* contents=0;
  uint64_t __t2115t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t2116t__=0;
  char __t2117t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t2118t__=0;
  char* __t2120t__unsafe_ptr=0;
  uint64_t __t2120t__dat__pos=0;
  uint64_t __t2120t__dat__length=0;
  char __t2120t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(buf__unsafe_ptr,&__t2112t__);
  not__t28t(__t2112t__,&__t2113t__);
  if(__t2113t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t505t(buf__unsafe_ptr,pos,&__t2114t__);
  contents=__t2114t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t2115t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t2115t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t447t(obtained,&__t2116t__);
  not__t28t(__t2116t__,&__t2117t__);
  if(__t2117t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t2118t__);
  pos=__t2118t__;
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t2120t__unsafe_ptr,&__t2120t__dat__pos,&__t2120t__dat__length,&__t2120t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2503t=buf__unsafe_ptr;
  *__t2504t=buf__unsafe_size;
  *__t2505t=buf__unsafe_offset;
  *__t2506t=buf__unsafe_align;
  *__t2507t=pos;
  *__t2508t=f__unsafe_ptr;
  *__t2509t=__t2120t__unsafe_ptr;
  *__t2510t=__t2120t__dat__pos;
  *__t2511t=__t2120t__dat__length;
  *__t2512t=__t2120t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2368t(char** __t2513t, uint64_t* __t2514t, uint16_t* __t2515t, uint16_t* __t2516t, uint64_t* __t2517t, char** __t2518t, uint64_t __t_anon3, char** __t2519t, uint64_t* __t2520t, uint64_t* __t2521t, char* __t2522t) {
  char* buf__unsafe_ptr=*__t2513t;
  uint64_t buf__unsafe_size=*__t2514t;
  uint16_t buf__unsafe_offset=*__t2515t;
  uint16_t buf__unsafe_align=*__t2516t;
  uint64_t pos=*__t2517t;
  char* f__unsafe_ptr=*__t2518t;
  int __t2369t=0;
  char* __t2370t__unsafe_ptr=0;
  uint64_t __t2370t__dat__pos=0;
  uint64_t __t2370t__dat__length=0;
  char __t2370t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t2110t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2370t__unsafe_ptr,&__t2370t__dat__pos,&__t2370t__dat__length,&__t2370t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2513t=buf__unsafe_ptr;
  *__t2514t=buf__unsafe_size;
  *__t2515t=buf__unsafe_offset;
  *__t2516t=buf__unsafe_align;
  *__t2517t=pos;
  *__t2518t=f__unsafe_ptr;
  *__t2519t=__t2370t__unsafe_ptr;
  *__t2520t=__t2370t__dat__pos;
  *__t2521t=__t2370t__dat__length;
  *__t2522t=__t2370t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t831t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2523t, uint64_t* __t2524t, uint64_t* __t2525t, char* __t2526t) {
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
  *__t2523t=__t837t__unsafe_ptr;
  *__t2524t=__t837t__dat__pos;
  *__t2525t=__t837t__dat__length;
  *__t2526t=__t837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2416t() {
  char* __t2419t__unsafe_ptr=0;
  uint64_t __t2419t__dat__pos=0;
  uint64_t __t2419t__dat__length=0;
  char __t2419t__dat__first=0;
  char* __t2420t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2422t=0;
  uint64_t __t2423t__=0;
  char* __t2424t__unsafe_ptr=0;
  uint64_t __t2424t__unsafe_size=0;
  uint16_t __t2424t__unsafe_offset=0;
  uint16_t __t2424t__unsafe_align=0;
  char __t2425t____t601t____t534t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2426t=0;
  uint64_t __t2427t=0;
  uint64_t pos=0;
  uint64_t __t2428t=0;
  char __t2429t=0;
  char* __t2430t__unsafe_ptr=0;
  uint64_t __t2430t__dat__pos=0;
  uint64_t __t2430t__dat__length=0;
  char __t2430t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2431t=0;
  char* __t2433t__unsafe_ptr=0;
  uint64_t __t2433t__dat__pos=0;
  uint64_t __t2433t__dat__length=0;
  char __t2433t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t845t(__t2418t,&__t2419t__unsafe_ptr,&__t2419t__dat__pos,&__t2419t__dat__length,&__t2419t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1929t(__t2419t__unsafe_ptr,__t2419t__dat__pos,__t2419t__dat__length,__t2419t__dat__first,&__t2420t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2420t__unsafe_ptr;
  __t2422t=4;
  KB__t481t(__t2422t,&__t2423t__);
  __t_errcode=alloc__t595t(__t2423t__,&__t2424t__unsafe_ptr,&__t2424t__unsafe_size,&__t2424t__unsafe_offset,&__t2424t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2424t__unsafe_ptr;
  mem__unsafe_size=__t2424t__unsafe_size;
  mem__unsafe_offset=__t2424t__unsafe_offset;
  mem__unsafe_align=__t2424t__unsafe_align;
  __t2426t=0;
  __t2427t=__t2426t;
  pos=__t2427t;
  __t2428t=0;
  while(1){
  __t_complain=get__t2368t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2428t,&__t2430t__unsafe_ptr,&__t2430t__dat__pos,&__t2430t__dat__length,&__t2430t__dat__first);
  __t2429t=__t_complain;
  line__unsafe_ptr=__t2430t__unsafe_ptr;
  line__dat__pos=__t2430t__dat__pos;
  line__dat__length=__t2430t__dat__length;
  line__dat__first=__t2430t__dat__first;
  __t2429t=__t2429t==0;
  __t2428t=__t2428t+1;
  if(!__t2429t){
  break;
  }
  continue;
  }
  if(__t2420t__unsafe_ptr){
  fclose((FILE*)__t2420t__unsafe_ptr);
  __t2420t__unsafe_ptr=0;
  }
  __t2431t=0;
  __t_errcode=str__t831t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2431t,pos,&__t2433t__unsafe_ptr,&__t2433t__dat__pos,&__t2433t__dat__length,&__t2433t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t2433t__unsafe_ptr,__t2433t__dat__pos,__t2433t__dat__length,__t2433t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2424t__unsafe_ptr,&__t2425t____t601t____t534t__);
  if(__t2425t____t601t____t534t__){
  free__t503t(&__t2424t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2416t();return 0;}