#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2148t="./smoll ";
const char* const __t2147t="./tests/passing/";
const char* const __t374t="";
const char* const __t2156t=".s";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2140t(char** __t2166t, uint64_t* __t2167t, uint16_t* __t2168t, uint16_t* __t2169t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2166t=unsafe_ptr;
  *__t2167t=unsafe_size;
  *__t2168t=unsafe_offset;
  *__t2169t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2170t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2170t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2171t) {
  char* allocated=*__t2171t;
  if(allocated){
  free(allocated);
  }
  *__t2171t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2172t) {
  int value=0;
  *__t2172t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2173t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2173t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2174t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2174t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2175t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2175t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2176t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2176t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2177t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2177t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2178t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2178t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2179t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2179t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2180t) {
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
  *__t2180t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2181t, uint64_t* __t2182t, uint16_t* __t2183t, uint16_t* __t2184t, uint64_t size, char** __t2185t, uint64_t* __t2186t, uint16_t* __t2187t, uint16_t* __t2188t) {
  char* buffer__unsafe_ptr=*__t2181t;
  uint64_t buffer__unsafe_size=*__t2182t;
  uint16_t buffer__unsafe_offset=*__t2183t;
  uint16_t buffer__unsafe_align=*__t2184t;
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
  *__t2181t=buffer__unsafe_ptr;
  *__t2182t=buffer__unsafe_size;
  *__t2183t=buffer__unsafe_offset;
  *__t2184t=buffer__unsafe_align;
  *__t2185t=buffer__unsafe_ptr;
  *__t2186t=buffer__unsafe_size;
  *__t2187t=buffer__unsafe_offset;
  *__t2188t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t2189t, uint64_t* __t2190t, uint16_t* __t2191t, uint16_t* __t2192t, char** __t2193t, uint64_t* __t2194t, uint16_t* __t2195t, uint16_t* __t2196t, uint64_t* __t2197t) {
  char* buf__unsafe_ptr=*__t2189t;
  uint64_t buf__unsafe_size=*__t2190t;
  uint16_t buf__unsafe_offset=*__t2191t;
  uint16_t buf__unsafe_align=*__t2192t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t2189t=buf__unsafe_ptr;
  *__t2190t=buf__unsafe_size;
  *__t2191t=buf__unsafe_offset;
  *__t2192t=buf__unsafe_align;
  *__t2193t=buf__unsafe_ptr;
  *__t2194t=buf__unsafe_size;
  *__t2195t=buf__unsafe_offset;
  *__t2196t=buf__unsafe_align;
  *__t2197t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t2198t, uint64_t* __t2199t, uint16_t* __t2200t, uint16_t* __t2201t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2198t=unsafe_ptr;
  *__t2199t=unsafe_size;
  *__t2200t=unsafe_offset;
  *__t2201t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2202t) {
  *__t2202t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2203t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2203t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2204t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2204t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2205t) {
  *__t2205t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2206t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2206t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2207t) {
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
  *__t2207t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2208t, uint64_t* __t2209t, uint64_t* __t2210t, char* __t2211t) {
  goto __t_return;
  __t_return:
  *__t2208t=unsafe_ptr;
  *__t2209t=dat__pos;
  *__t2210t=dat__length;
  *__t2211t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2212t, uint64_t* __t2213t, uint64_t* __t2214t, char* __t2215t) {
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
  *__t2212t=__t695t__unsafe_ptr;
  *__t2213t=__t695t__dat__pos;
  *__t2214t=__t695t__dat__length;
  *__t2215t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2216t, uint64_t* __t2217t, uint64_t* __t2218t, char* __t2219t) {
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
  *__t2216t=__t728t__unsafe_ptr;
  *__t2217t=__t728t__dat__pos;
  *__t2218t=__t728t__dat__length;
  *__t2219t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t2220t, uint64_t* __t2221t, uint64_t* __t2222t, char* __t2223t) {
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
  *__t2220t=__t754t__unsafe_ptr;
  *__t2221t=__t754t__dat__pos;
  *__t2222t=__t754t__dat__length;
  *__t2223t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2224t) {
  goto __t_return;
  __t_return:
  *__t2224t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2225t) {
  goto __t_return;
  __t_return:
  *__t2225t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2226t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2226t=z;
}

int copy__t856t(char** __t2227t, uint64_t* __t2228t, uint16_t* __t2229t, uint16_t* __t2230t, uint64_t* __t2231t, const char* _other, char** __t2232t, uint64_t* __t2233t, uint64_t* __t2234t, char* __t2235t) {
  char* CHARS__buf__unsafe_ptr=*__t2227t;
  uint64_t CHARS__buf__unsafe_size=*__t2228t;
  uint16_t CHARS__buf__unsafe_offset=*__t2229t;
  uint16_t CHARS__buf__unsafe_align=*__t2230t;
  uint64_t CHARS__pos=*__t2231t;
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
  *__t2227t=CHARS__buf__unsafe_ptr;
  *__t2228t=CHARS__buf__unsafe_size;
  *__t2229t=CHARS__buf__unsafe_offset;
  *__t2230t=CHARS__buf__unsafe_align;
  *__t2231t=CHARS__pos;
  *__t2232t=__t864t__unsafe_ptr;
  *__t2233t=__t864t__dat__pos;
  *__t2234t=__t864t__dat__length;
  *__t2235t=__t864t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1991t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1992t(const char* path, char** __t2236t) {
  char* unsafe_ptr=0;
  char __t1994t__=0;
  char __t1995t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t447t(unsafe_ptr,&__t1994t__);
  not__t28t(__t1994t__,&__t1995t__);
  if(__t1995t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1991t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2236t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2003t(char** __t2237t, const char** __t2238t) {
  char* f__unsafe_ptr=*__t2237t;
  char __t2004t__=0;
  char __t2005t__=0;
  char* de=0;
  char __t2006t__=0;
  char __t2007t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(f__unsafe_ptr,&__t2004t__);
  not__t28t(__t2004t__,&__t2005t__);
  if(__t2005t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t447t(de,&__t2006t__);
  not__t28t(__t2006t__,&__t2007t__);
  if(__t2007t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2237t=f__unsafe_ptr;
  *__t2238t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2008t(char** __t2239t, char** __t2240t, uint64_t* __t2241t, uint64_t* __t2242t, char* __t2243t) {
  char* f__unsafe_ptr=*__t2239t;
  const char* __t2009t__=0;
  char* __t2010t__unsafe_ptr=0;
  uint64_t __t2010t__dat__pos=0;
  uint64_t __t2010t__dat__length=0;
  char __t2010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2003t(&f__unsafe_ptr,&__t2009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t746t(__t2009t__,&__t2010t__unsafe_ptr,&__t2010t__dat__pos,&__t2010t__dat__length,&__t2010t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2239t=f__unsafe_ptr;
  *__t2240t=__t2010t__unsafe_ptr;
  *__t2241t=__t2010t__dat__pos;
  *__t2242t=__t2010t__dat__length;
  *__t2243t=__t2010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2072t(char** __t2244t, uint64_t __t_anon1, char** __t2245t, uint64_t* __t2246t, uint64_t* __t2247t, char* __t2248t) {
  char* data__unsafe_ptr=*__t2244t;
  char* __t2073t__unsafe_ptr=0;
  uint64_t __t2073t__dat__pos=0;
  uint64_t __t2073t__dat__length=0;
  char __t2073t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2008t(&data__unsafe_ptr,&__t2073t__unsafe_ptr,&__t2073t__dat__pos,&__t2073t__dat__length,&__t2073t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2244t=data__unsafe_ptr;
  *__t2245t=__t2073t__unsafe_ptr;
  *__t2246t=__t2073t__dat__pos;
  *__t2247t=__t2073t__dat__length;
  *__t2248t=__t2073t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t719t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  goto __t_return;
  __t_return:
  *__t2249t=other__unsafe_ptr;
  *__t2250t=other__dat__pos;
  *__t2251t=other__dat__length;
  *__t2252t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2253t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2253t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2254t) {
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
  *__t2254t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t928t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2255t) {
  uint64_t __t929t__=0;
  char* __t930t__=0;
  add__t175t(s__dat__pos,i,&__t929t__);
  add__t505t(s__unsafe_ptr,__t929t__,&__t930t__);
  goto __t_return;
  __t_return:
  *__t2255t=__t930t__;
}

int slice__t935t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2256t, uint64_t* __t2257t, uint64_t* __t2258t, char* __t2259t) {
  char* __t936t__unsafe_ptr=0;
  uint64_t __t936t__dat__pos=0;
  uint64_t __t936t__dat__length=0;
  char __t936t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t937t__=0;
  char* __t938t__unsafe_ptr=0;
  uint64_t __t938t__dat__pos=0;
  uint64_t __t938t__dat__length=0;
  char __t938t__dat__first=0;
  char __t939t__=0;
  char __t940t__=0;
  char __t941t=0;
  char __t942t__=0;
  uint64_t __t943t__=0;
  uint64_t new_length=0;
  uint64_t __t944t=0;
  char __t945t__=0;
  char new_first=0;
  char* __t946t__=0;
  char __t947t__value=0;
  uint64_t __t948t__=0;
  char* __t949t__unsafe_ptr=0;
  uint64_t __t949t__dat__pos=0;
  uint64_t __t949t__dat__length=0;
  char __t949t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t719t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t936t__unsafe_ptr,&__t936t__dat__pos,&__t936t__dat__length,&__t936t__dat__first);
  s__unsafe_ptr=__t936t__unsafe_ptr;
  s__dat__pos=__t936t__dat__pos;
  s__dat__length=__t936t__dat__length;
  s__dat__first=__t936t__dat__first;
  eq__t120t(from,to,&__t937t__);
  if(__t937t__){
  __t_errcode=str__t746t(__t374t,&__t938t__unsafe_ptr,&__t938t__dat__pos,&__t938t__dat__length,&__t938t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t276t(from,to,&__t939t__);
  if(!__t939t__){
  gt__t276t(to,s__dat__length,&__t940t__);
  __t941t=__t940t__;
  }
  else{
  __t941t=0;
  not__t28t(__t941t,&__t942t__);
  __t941t=__t942t__;
  }
  if(__t941t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t352t(to,from,&__t943t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t943t__;
  __t944t=0;
  neq__t144t(from,__t944t,&__t945t__);
  if(__t945t__){
  get__t928t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t946t__);
  if(!__t946t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t947t__value,__t946t__,1);
  new_first=__t947t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t175t(s__dat__pos,from,&__t948t__);
  str__t684t(s__unsafe_ptr,__t948t__,new_length,new_first,&__t949t__unsafe_ptr,&__t949t__dat__pos,&__t949t__dat__length,&__t949t__dat__first);
  __t938t__unsafe_ptr=__t949t__unsafe_ptr;
  __t938t__dat__pos=__t949t__dat__pos;
  __t938t__dat__length=__t949t__dat__length;
  __t938t__dat__first=__t949t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2256t=__t938t__unsafe_ptr;
  *__t2257t=__t938t__dat__pos;
  *__t2258t=__t938t__dat__length;
  *__t2259t=__t938t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t759t(char x, char y, char* __t2260t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2260t=z;
}

static inline __attribute__((always_inline)) void eq__t816t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2261t) {
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
  *__t2261t=__t820t;
}

static inline __attribute__((always_inline)) int ends_with__t1014t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2262t) {
  char* __t1015t__unsafe_ptr=0;
  uint64_t __t1015t__dat__pos=0;
  uint64_t __t1015t__dat__length=0;
  char __t1015t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1016t__unsafe_ptr=0;
  uint64_t __t1016t__dat__pos=0;
  uint64_t __t1016t__dat__length=0;
  char __t1016t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1017t__=0;
  char __t1018t=0;
  uint64_t __t1019t__=0;
  uint64_t n=0;
  uint64_t __t1020t__=0;
  uint64_t __t1021t__=0;
  char* __t1022t__unsafe_ptr=0;
  uint64_t __t1022t__dat__pos=0;
  uint64_t __t1022t__dat__length=0;
  char __t1022t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1023t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t719t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1015t__unsafe_ptr,&__t1015t__dat__pos,&__t1015t__dat__length,&__t1015t__dat__first);
  stack__unsafe_ptr=__t1015t__unsafe_ptr;
  stack__dat__pos=__t1015t__dat__pos;
  stack__dat__length=__t1015t__dat__length;
  stack__dat__first=__t1015t__dat__first;
  __t_errcode=str__t746t(_needle,&__t1016t__unsafe_ptr,&__t1016t__dat__pos,&__t1016t__dat__length,&__t1016t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1016t__unsafe_ptr;
  needle__dat__pos=__t1016t__dat__pos;
  needle__dat__length=__t1016t__dat__length;
  needle__dat__first=__t1016t__dat__first;
  lt__t252t(stack__dat__length,needle__dat__length,&__t1017t__);
  if(__t1017t__){
  __t1018t=0;
  goto __t_return;
  }
  len__t755t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1019t__);
  n=__t1019t__;
  len__t755t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1020t__);
  __t_errcode=sub__t352t(n,__t1020t__,&__t1021t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t935t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1021t__,n,&__t1022t__unsafe_ptr,&__t1022t__dat__pos,&__t1022t__dat__length,&__t1022t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1022t__unsafe_ptr;
  ret__dat__pos=__t1022t__dat__pos;
  ret__dat__length=__t1022t__dat__length;
  ret__dat__first=__t1022t__dat__first;
  eq__t816t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1023t__);
  __t1018t=__t1023t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2262t=__t1018t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t865t(char** __t2263t, uint64_t* __t2264t, uint16_t* __t2265t, uint16_t* __t2266t, uint64_t* __t2267t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2268t, uint64_t* __t2269t, uint64_t* __t2270t, char* __t2271t) {
  char* CHARS__buf__unsafe_ptr=*__t2263t;
  uint64_t CHARS__buf__unsafe_size=*__t2264t;
  uint16_t CHARS__buf__unsafe_offset=*__t2265t;
  uint16_t CHARS__buf__unsafe_align=*__t2266t;
  uint64_t CHARS__pos=*__t2267t;
  char* __t866t__unsafe_ptr=0;
  uint64_t __t866t__dat__pos=0;
  uint64_t __t866t__dat__length=0;
  char __t866t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t867t__=0;
  uint64_t __t868t__=0;
  uint64_t null_pos=0;
  uint64_t __t869t=0;
  uint64_t __t870t__=0;
  uint64_t next_pos=0;
  uint64_t __t871t__=0;
  char __t872t__=0;
  char* endpos=0;
  uint64_t __t873t=0;
  uint64_t __t874t__=0;
  uint64_t prev_pos=0;
  char* __t875t__unsafe_ptr=0;
  uint64_t __t875t__dat__pos=0;
  uint64_t __t875t__dat__length=0;
  char __t875t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t719t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t866t__unsafe_ptr,&__t866t__dat__pos,&__t866t__dat__length,&__t866t__dat__first);
  other__unsafe_ptr=__t866t__unsafe_ptr;
  other__dat__pos=__t866t__dat__pos;
  other__dat__length=__t866t__dat__length;
  other__dat__first=__t866t__dat__first;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t867t__);
  add__t175t(CHARS__pos,__t867t__,&__t868t__);
  null_pos=__t868t__;
  __t869t=1;
  add__t175t(null_pos,__t869t,&__t870t__);
  next_pos=__t870t__;
  len__t643t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t871t__);
  gt__t276t(next_pos,__t871t__,&__t872t__);
  if(__t872t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t873t=0;
  add__t175t(CHARS__pos,__t873t,&__t874t__);
  prev_pos=__t874t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t688t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t875t__unsafe_ptr,&__t875t__dat__pos,&__t875t__dat__length,&__t875t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2263t=CHARS__buf__unsafe_ptr;
  *__t2264t=CHARS__buf__unsafe_size;
  *__t2265t=CHARS__buf__unsafe_offset;
  *__t2266t=CHARS__buf__unsafe_align;
  *__t2267t=CHARS__pos;
  *__t2268t=__t875t__unsafe_ptr;
  *__t2269t=__t875t__dat__pos;
  *__t2270t=__t875t__dat__length;
  *__t2271t=__t875t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t813t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2272t) {
  uint64_t __t814t__=0;
  add__t175t(s__dat__pos,s__dat__length,&__t814t__);
  goto __t_return;
  __t_return:
  *__t2272t=__t814t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2273t) {
  int value=0;
  *__t2273t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2274t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2274t=__t40t__;
}

static inline __attribute__((always_inline)) int str__t696t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2275t, uint64_t* __t2276t, uint64_t* __t2277t, char* __t2278t) {
  int __t697t=0;
  int __t698t=0;
  int __t699t__=0;
  uint64_t __t700t__=0;
  char __t701t__=0;
  uint64_t __t702t=0;
  uint64_t __t703t=0;
  char* __t704t__=0;
  char __t705t__value=0;
  char* __t706t__unsafe_ptr=0;
  uint64_t __t706t__dat__pos=0;
  uint64_t __t706t__dat__length=0;
  char __t706t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t39t(__t698t,&__t699t__);
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t700t__);
  gt__t276t(length,__t700t__,&__t701t__);
  if(__t701t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t702t=0;
  __t703t=0;
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t703t,&__t704t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t704t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t705t__value,__t704t__,1);
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t702t,length,__t705t__value,&__t706t__unsafe_ptr,&__t706t__dat__pos,&__t706t__dat__length,&__t706t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2275t=__t706t__unsafe_ptr;
  *__t2276t=__t706t__dat__pos;
  *__t2277t=__t706t__dat__length;
  *__t2278t=__t706t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t778t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2279t, uint64_t* __t2280t, uint64_t* __t2281t, char* __t2282t) {
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
  *__t2279t=__t787t__unsafe_ptr;
  *__t2280t=__t787t__dat__pos;
  *__t2281t=__t787t__dat__length;
  *__t2282t=__t787t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t788t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2283t, char** __t2284t, uint64_t* __t2285t, uint64_t* __t2286t, char* __t2287t) {
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
  *__t2283t=cstr;
  *__t2284t=str__unsafe_ptr;
  *__t2285t=str__dat__pos;
  *__t2286t=str__dat__length;
  *__t2287t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t796t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2288t) {
  goto __t_return;
  __t_return:
  *__t2288t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1557t(const char* cmd, char** __t2289t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2289t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1556t(char* unsafe_ptr, int64_t* __t2290t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2290t=status;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2291t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2291t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2292t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2292t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2293t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2293t=z;
}

static inline __attribute__((always_inline)) int read__t1558t(const char* cmd, char** __t2294t) {
  char* __t1559t__=0;
  char* unsafe_ptr=0;
  char __t1560t__=0;
  char __t1561t__=0;
  char __t1562t__=0;
  int64_t __t1563t__=0;
  int64_t status=0;
  uint64_t __t1564t=0;
  int64_t __t1565t__=0;
  char __t1566t__=0;
  char __t1567t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1557t(cmd,&__t1559t__);
  unsafe_ptr=__t1559t__;
  exists__t447t(unsafe_ptr,&__t1560t__);
  not__t28t(__t1560t__,&__t1561t__);
  if(__t1561t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(unsafe_ptr,&__t1562t__);
  if(__t1562t__){
  pclose__t1556t(unsafe_ptr,&__t1563t__);
  status=__t1563t__;
  unsafe_ptr=0;
  __t1564t=0;
  int__t427t(__t1564t,&__t1565t__);
  neq__t133t(status,__t1565t__,&__t1566t__);
  if(__t1566t__){
  __t_complain=36;
  __t1567t=__t1567t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2294t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1569t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2295t) {
  const char* __t1570t__cstr=0;
  char* __t1570t__str__unsafe_ptr=0;
  uint64_t __t1570t__str__dat__pos=0;
  uint64_t __t1570t__str__dat__length=0;
  char __t1570t__str__dat__first=0;
  char __t1571t____t791t____t785t____t534t__=0;
  const char* __t1572t__=0;
  char* __t1573t__unsafe_ptr=0;
  char __t1574t____t1562t__=0;
  int64_t __t1574t____t1563t__=0;
  int64_t __t1574t__status=0;
  uint64_t __t1574t____t1564t=0;
  int64_t __t1574t____t1565t__=0;
  char __t1574t____t1566t__=0;
  char __t1574t____t1567t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t788t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1570t__cstr,&__t1570t__str__unsafe_ptr,&__t1570t__str__dat__pos,&__t1570t__str__dat__length,&__t1570t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t796t(__t1570t__cstr,__t1570t__str__unsafe_ptr,__t1570t__str__dat__pos,__t1570t__str__dat__length,__t1570t__str__dat__first,&__t1572t__);
  __t_errcode=read__t1558t(__t1572t__,&__t1573t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t1573t__unsafe_ptr,&__t1574t____t1562t__);
  if(__t1574t____t1562t__){
  pclose__t1556t(__t1573t__unsafe_ptr,&__t1574t____t1563t__);
  __t1574t__status=__t1574t____t1563t__;
  __t1573t__unsafe_ptr=0;
  __t1574t____t1564t=0;
  int__t427t(__t1574t____t1564t,&__t1574t____t1565t__);
  neq__t133t(__t1574t__status,__t1574t____t1565t__,&__t1574t____t1566t__);
  if(__t1574t____t1566t__){
  __t_complain=36;
  __t1574t____t1567t=__t1574t____t1567t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2295t=__t1573t__unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1570t__str__unsafe_ptr,&__t1571t____t791t____t785t____t534t__);
  if(__t1571t____t791t____t785t____t534t__){
  free__t503t(&__t1570t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1550t(int64_t value, const char** __t2296t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2296t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2130t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2131t__unsafe_ptr=0;
  char __t2132t____t1574t____t1562t__=0;
  int64_t __t2132t____t1574t____t1563t__=0;
  int64_t __t2132t____t1574t__status=0;
  uint64_t __t2132t____t1574t____t1564t=0;
  int64_t __t2132t____t1574t____t1565t__=0;
  char __t2132t____t1574t____t1566t__=0;
  char __t2132t____t1574t____t1567t=0;
  char* __t2133t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2134t=0;
  int64_t __t2135t=0;
  int64_t error=0;
  const char* __t2136t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1569t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2131t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2133t__unsafe_ptr=__t2131t__unsafe_ptr;
  proc__unsafe_ptr=__t2133t__unsafe_ptr;
  exists__t447t(__t2131t__unsafe_ptr,&__t2132t____t1574t____t1562t__);
  if(__t2132t____t1574t____t1562t__){
  pclose__t1556t(__t2131t__unsafe_ptr,&__t2132t____t1574t____t1563t__);
  __t2132t____t1574t__status=__t2132t____t1574t____t1563t__;
  __t2131t__unsafe_ptr=0;
  __t2132t____t1574t____t1564t=0;
  int__t427t(__t2132t____t1574t____t1564t,&__t2132t____t1574t____t1565t__);
  neq__t133t(__t2132t____t1574t__status,__t2132t____t1574t____t1565t__,&__t2132t____t1574t____t1566t__);
  if(__t2132t____t1574t____t1566t__){
  __t_complain=36;
  __t2132t____t1574t____t1567t=__t2132t____t1574t____t1567t==0;
  }
  }
  __t2135t=__t_complain;
  __t2134t=(__t_complain==0);
  __t_complain=0;
  error=__t2135t;
  __t2134t=__t2134t==0;
  if(__t2134t){
  cstr__t1550t(error,&__t2136t__);
  print__t380t(__t2136t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2138t() {
  char* __t2142t__unsafe_ptr=0;
  uint64_t __t2142t__unsafe_size=0;
  uint16_t __t2142t__unsafe_offset=0;
  uint16_t __t2142t__unsafe_align=0;
  uint64_t __t2143t=0;
  char* __t2144t__unsafe_ptr=0;
  uint64_t __t2144t__unsafe_size=0;
  uint16_t __t2144t__unsafe_offset=0;
  uint16_t __t2144t__unsafe_align=0;
  char __t2145t____t534t__=0;
  char* __t2146t__buf__unsafe_ptr=0;
  uint64_t __t2146t__buf__unsafe_size=0;
  uint16_t __t2146t__buf__unsafe_offset=0;
  uint16_t __t2146t__buf__unsafe_align=0;
  uint64_t __t2146t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2149t__unsafe_ptr=0;
  uint64_t __t2149t__dat__pos=0;
  uint64_t __t2149t__dat__length=0;
  char __t2149t__dat__first=0;
  char* __t2150t__unsafe_ptr=0;
  uint64_t __t2150t__dat__pos=0;
  uint64_t __t2150t__dat__length=0;
  char __t2150t__dat__first=0;
  char* __t2151t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2153t=0;
  char __t2154t=0;
  char* __t2155t__unsafe_ptr=0;
  uint64_t __t2155t__dat__pos=0;
  uint64_t __t2155t__dat__length=0;
  char __t2155t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2157t__=0;
  char __t2158t__=0;
  char* __t2159t__buf__unsafe_ptr=0;
  uint64_t __t2159t__buf__unsafe_size=0;
  uint16_t __t2159t__buf__unsafe_offset=0;
  uint16_t __t2159t__buf__unsafe_align=0;
  uint64_t __t2159t__pos=0;
  char* __t2160t__unsafe_ptr=0;
  uint64_t __t2160t__dat__pos=0;
  uint64_t __t2160t__dat__length=0;
  char __t2160t__dat__first=0;
  char* __t2161t__unsafe_ptr=0;
  uint64_t __t2161t__dat__pos=0;
  uint64_t __t2161t__dat__length=0;
  char __t2161t__dat__first=0;
  uint64_t __t2162t__=0;
  char* __t2163t__unsafe_ptr=0;
  uint64_t __t2163t__dat__pos=0;
  uint64_t __t2163t__dat__length=0;
  char __t2163t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2140t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align);
  __t2143t=256;
  __t_errcode=alloc__t532t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align,__t2143t,&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t673t(&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align,&__t2146t__buf__unsafe_ptr,&__t2146t__buf__unsafe_size,&__t2146t__buf__unsafe_offset,&__t2146t__buf__unsafe_align,&__t2146t__pos);
  CHARS__buf__unsafe_ptr=__t2146t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2146t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2146t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2146t__buf__unsafe_align;
  CHARS__pos=__t2146t__pos;
  path=__t2147t;
  __t_errcode=copy__t856t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2148t,&__t2149t__unsafe_ptr,&__t2149t__dat__pos,&__t2149t__dat__length,&__t2149t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t856t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2150t__unsafe_ptr,&__t2150t__dat__pos,&__t2150t__dat__length,&__t2150t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1992t(path,&__t2151t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2151t__unsafe_ptr;
  __t2153t=0;
  while(1){
  __t_complain=get__t2072t(&test_dir__unsafe_ptr,__t2153t,&__t2155t__unsafe_ptr,&__t2155t__dat__pos,&__t2155t__dat__length,&__t2155t__dat__first);
  __t2154t=__t_complain;
  entry__unsafe_ptr=__t2155t__unsafe_ptr;
  entry__dat__pos=__t2155t__dat__pos;
  entry__dat__length=__t2155t__dat__length;
  entry__dat__first=__t2155t__dat__first;
  __t2154t=__t2154t==0;
  __t2153t=__t2153t+1;
  if(!__t2154t){
  break;
  }
  __t_errcode=ends_with__t1014t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2156t,&__t2157t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t2157t__,&__t2158t__);
  if(__t2158t__){
  continue;
  }
  __t2159t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2159t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2159t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2159t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2159t__pos=CHARS__pos;
  str__t719t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2160t__unsafe_ptr,&__t2160t__dat__pos,&__t2160t__dat__length,&__t2160t__dat__first);
  __t_errcode=copy_null_terminated__t865t(&__t2159t__buf__unsafe_ptr,&__t2159t__buf__unsafe_size,&__t2159t__buf__unsafe_offset,&__t2159t__buf__unsafe_align,&__t2159t__pos,__t2160t__unsafe_ptr,__t2160t__dat__pos,__t2160t__dat__length,__t2160t__dat__first,&__t2161t__unsafe_ptr,&__t2161t__dat__pos,&__t2161t__dat__length,&__t2161t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t813t(__t2161t__unsafe_ptr,__t2161t__dat__pos,__t2161t__dat__length,__t2161t__dat__first,&__t2162t__);
  __t_errcode=str__t696t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2162t__,&__t2163t__unsafe_ptr,&__t2163t__dat__pos,&__t2163t__dat__length,&__t2163t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2163t__unsafe_ptr;
  command__dat__pos=__t2163t__dat__pos;
  command__dat__length=__t2163t__dat__length;
  command__dat__first=__t2163t__dat__first;
  print__t889t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2130t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t1991t(__t2151t__unsafe_ptr);
  exists__t447t(__t2144t__unsafe_ptr,&__t2145t____t534t__);
  if(__t2145t____t534t__){
  free__t503t(&__t2144t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2138t();return 0;}