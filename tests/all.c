#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t2152t="./smoll ";
const char* const __t2151t="./tests/passing/";
const char* const __t382t="\n";
const char* const __t2160t=".s";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2144t(char** __t2170t, uint64_t* __t2171t, uint16_t* __t2172t, uint16_t* __t2173t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2170t=unsafe_ptr;
  *__t2171t=unsafe_size;
  *__t2172t=unsafe_offset;
  *__t2173t=unsafe_align;
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

static inline __attribute__((always_inline)) void false__t10t(int* __t2176t) {
  int value=0;
  *__t2176t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2177t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2177t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2178t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2178t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2179t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2179t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2180t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2180t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2181t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2181t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2182t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2182t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2183t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2183t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2184t) {
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
  *__t2184t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2185t, uint64_t* __t2186t, uint16_t* __t2187t, uint16_t* __t2188t, uint64_t size, char** __t2189t, uint64_t* __t2190t, uint16_t* __t2191t, uint16_t* __t2192t) {
  char* buffer__unsafe_ptr=*__t2185t;
  uint64_t buffer__unsafe_size=*__t2186t;
  uint16_t buffer__unsafe_offset=*__t2187t;
  uint16_t buffer__unsafe_align=*__t2188t;
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
  *__t2185t=buffer__unsafe_ptr;
  *__t2186t=buffer__unsafe_size;
  *__t2187t=buffer__unsafe_offset;
  *__t2188t=buffer__unsafe_align;
  *__t2189t=buffer__unsafe_ptr;
  *__t2190t=buffer__unsafe_size;
  *__t2191t=buffer__unsafe_offset;
  *__t2192t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t677t(char** __t2193t, uint64_t* __t2194t, uint16_t* __t2195t, uint16_t* __t2196t, char** __t2197t, uint64_t* __t2198t, uint16_t* __t2199t, uint16_t* __t2200t, uint64_t* __t2201t) {
  char* buf__unsafe_ptr=*__t2193t;
  uint64_t buf__unsafe_size=*__t2194t;
  uint16_t buf__unsafe_offset=*__t2195t;
  uint16_t buf__unsafe_align=*__t2196t;
  uint64_t __t678t=0;
  uint64_t __t679t=0;
  uint64_t pos=0;
  __t678t=0;
  __t679t=__t678t;
  pos=__t679t;
  goto __t_return;
  __t_return:
  *__t2193t=buf__unsafe_ptr;
  *__t2194t=buf__unsafe_size;
  *__t2195t=buf__unsafe_offset;
  *__t2196t=buf__unsafe_align;
  *__t2197t=buf__unsafe_ptr;
  *__t2198t=buf__unsafe_size;
  *__t2199t=buf__unsafe_offset;
  *__t2200t=buf__unsafe_align;
  *__t2201t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t2202t, uint64_t* __t2203t, uint16_t* __t2204t, uint16_t* __t2205t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2202t=unsafe_ptr;
  *__t2203t=unsafe_size;
  *__t2204t=unsafe_offset;
  *__t2205t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2206t) {
  *__t2206t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2207t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2207t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2208t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2208t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2209t) {
  *__t2209t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2210t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2210t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2211t) {
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
  *__t2211t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2212t, uint64_t* __t2213t, uint64_t* __t2214t, char* __t2215t) {
  goto __t_return;
  __t_return:
  *__t2212t=unsafe_ptr;
  *__t2213t=dat__pos;
  *__t2214t=dat__length;
  *__t2215t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2216t, uint64_t* __t2217t, uint64_t* __t2218t, char* __t2219t) {
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
  *__t2216t=__t699t__unsafe_ptr;
  *__t2217t=__t699t__dat__pos;
  *__t2218t=__t699t__dat__length;
  *__t2219t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2220t, uint64_t* __t2221t, uint64_t* __t2222t, char* __t2223t) {
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
  *__t2220t=__t732t__unsafe_ptr;
  *__t2221t=__t732t__dat__pos;
  *__t2222t=__t732t__dat__length;
  *__t2223t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t2224t, uint64_t* __t2225t, uint64_t* __t2226t, char* __t2227t) {
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
  *__t2224t=__t758t__unsafe_ptr;
  *__t2225t=__t758t__dat__pos;
  *__t2226t=__t758t__dat__length;
  *__t2227t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2228t) {
  goto __t_return;
  __t_return:
  *__t2228t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2229t) {
  goto __t_return;
  __t_return:
  *__t2229t=buffer__unsafe_size;
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

int copy__t860t(char** __t2231t, uint64_t* __t2232t, uint16_t* __t2233t, uint16_t* __t2234t, uint64_t* __t2235t, const char* _other, char** __t2236t, uint64_t* __t2237t, uint64_t* __t2238t, char* __t2239t) {
  char* CHARS__buf__unsafe_ptr=*__t2231t;
  uint64_t CHARS__buf__unsafe_size=*__t2232t;
  uint16_t CHARS__buf__unsafe_offset=*__t2233t;
  uint16_t CHARS__buf__unsafe_align=*__t2234t;
  uint64_t CHARS__pos=*__t2235t;
  char* __t861t__unsafe_ptr=0;
  uint64_t __t861t__dat__pos=0;
  uint64_t __t861t__dat__length=0;
  char __t861t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t862t__=0;
  uint64_t __t863t__=0;
  uint64_t next_pos=0;
  uint64_t __t864t__=0;
  char __t865t__=0;
  uint64_t __t866t=0;
  uint64_t __t867t__=0;
  uint64_t prev_pos=0;
  char* __t868t__unsafe_ptr=0;
  uint64_t __t868t__dat__pos=0;
  uint64_t __t868t__dat__length=0;
  char __t868t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(_other,&__t861t__unsafe_ptr,&__t861t__dat__pos,&__t861t__dat__length,&__t861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t861t__unsafe_ptr;
  other__dat__pos=__t861t__dat__pos;
  other__dat__length=__t861t__dat__length;
  other__dat__first=__t861t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t862t__);
  add__t175t(CHARS__pos,__t862t__,&__t863t__);
  next_pos=__t863t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t864t__);
  gt__t276t(next_pos,__t864t__,&__t865t__);
  if(__t865t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t866t=0;
  add__t175t(CHARS__pos,__t866t,&__t867t__);
  prev_pos=__t867t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t868t__unsafe_ptr,&__t868t__dat__pos,&__t868t__dat__length,&__t868t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2231t=CHARS__buf__unsafe_ptr;
  *__t2232t=CHARS__buf__unsafe_size;
  *__t2233t=CHARS__buf__unsafe_offset;
  *__t2234t=CHARS__buf__unsafe_align;
  *__t2235t=CHARS__pos;
  *__t2236t=__t868t__unsafe_ptr;
  *__t2237t=__t868t__dat__pos;
  *__t2238t=__t868t__dat__length;
  *__t2239t=__t868t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1995t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1996t(const char* path, char** __t2240t) {
  char* unsafe_ptr=0;
  char __t1998t__=0;
  char __t1999t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t447t(unsafe_ptr,&__t1998t__);
  not__t28t(__t1998t__,&__t1999t__);
  if(__t1999t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1995t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2240t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2007t(char** __t2241t, const char** __t2242t) {
  char* f__unsafe_ptr=*__t2241t;
  char __t2008t__=0;
  char __t2009t__=0;
  char* de=0;
  char __t2010t__=0;
  char __t2011t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(f__unsafe_ptr,&__t2008t__);
  not__t28t(__t2008t__,&__t2009t__);
  if(__t2009t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t447t(de,&__t2010t__);
  not__t28t(__t2010t__,&__t2011t__);
  if(__t2011t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2241t=f__unsafe_ptr;
  *__t2242t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2012t(char** __t2243t, char** __t2244t, uint64_t* __t2245t, uint64_t* __t2246t, char* __t2247t) {
  char* f__unsafe_ptr=*__t2243t;
  const char* __t2013t__=0;
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__dat__pos=0;
  uint64_t __t2014t__dat__length=0;
  char __t2014t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2007t(&f__unsafe_ptr,&__t2013t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t750t(__t2013t__,&__t2014t__unsafe_ptr,&__t2014t__dat__pos,&__t2014t__dat__length,&__t2014t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2243t=f__unsafe_ptr;
  *__t2244t=__t2014t__unsafe_ptr;
  *__t2245t=__t2014t__dat__pos;
  *__t2246t=__t2014t__dat__length;
  *__t2247t=__t2014t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2076t(char** __t2248t, uint64_t __t_anon1, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  char* data__unsafe_ptr=*__t2248t;
  char* __t2077t__unsafe_ptr=0;
  uint64_t __t2077t__dat__pos=0;
  uint64_t __t2077t__dat__length=0;
  char __t2077t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2012t(&data__unsafe_ptr,&__t2077t__unsafe_ptr,&__t2077t__dat__pos,&__t2077t__dat__length,&__t2077t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2248t=data__unsafe_ptr;
  *__t2249t=__t2077t__unsafe_ptr;
  *__t2250t=__t2077t__dat__pos;
  *__t2251t=__t2077t__dat__length;
  *__t2252t=__t2077t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t723t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2253t, uint64_t* __t2254t, uint64_t* __t2255t, char* __t2256t) {
  goto __t_return;
  __t_return:
  *__t2253t=other__unsafe_ptr;
  *__t2254t=other__dat__pos;
  *__t2255t=other__dat__length;
  *__t2256t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2257t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2257t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2258t) {
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
  *__t2258t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t932t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2259t) {
  uint64_t __t933t__=0;
  char* __t934t__=0;
  add__t175t(s__dat__pos,i,&__t933t__);
  add__t505t(s__unsafe_ptr,__t933t__,&__t934t__);
  goto __t_return;
  __t_return:
  *__t2259t=__t934t__;
}

int slice__t939t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2260t, uint64_t* __t2261t, uint64_t* __t2262t, char* __t2263t) {
  char* __t940t__unsafe_ptr=0;
  uint64_t __t940t__dat__pos=0;
  uint64_t __t940t__dat__length=0;
  char __t940t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t941t__=0;
  char* __t942t__unsafe_ptr=0;
  uint64_t __t942t__dat__pos=0;
  uint64_t __t942t__dat__length=0;
  char __t942t__dat__first=0;
  char __t943t__=0;
  char __t944t__=0;
  char __t945t=0;
  char __t946t__=0;
  uint64_t __t947t__=0;
  uint64_t new_length=0;
  uint64_t __t948t=0;
  char __t949t__=0;
  char new_first=0;
  char* __t950t__=0;
  char __t951t__value=0;
  uint64_t __t952t__=0;
  char* __t953t__unsafe_ptr=0;
  uint64_t __t953t__dat__pos=0;
  uint64_t __t953t__dat__length=0;
  char __t953t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t940t__unsafe_ptr,&__t940t__dat__pos,&__t940t__dat__length,&__t940t__dat__first);
  s__unsafe_ptr=__t940t__unsafe_ptr;
  s__dat__pos=__t940t__dat__pos;
  s__dat__length=__t940t__dat__length;
  s__dat__first=__t940t__dat__first;
  eq__t120t(from,to,&__t941t__);
  if(__t941t__){
  __t_errcode=str__t750t(__t374t,&__t942t__unsafe_ptr,&__t942t__dat__pos,&__t942t__dat__length,&__t942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t276t(from,to,&__t943t__);
  if(!__t943t__){
  gt__t276t(to,s__dat__length,&__t944t__);
  __t945t=__t944t__;
  }
  else{
  __t945t=0;
  not__t28t(__t945t,&__t946t__);
  __t945t=__t946t__;
  }
  if(__t945t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t352t(to,from,&__t947t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t947t__;
  __t948t=0;
  neq__t144t(from,__t948t,&__t949t__);
  if(__t949t__){
  get__t932t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t950t__);
  if(!__t950t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t951t__value,__t950t__,1);
  new_first=__t951t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t175t(s__dat__pos,from,&__t952t__);
  str__t688t(s__unsafe_ptr,__t952t__,new_length,new_first,&__t953t__unsafe_ptr,&__t953t__dat__pos,&__t953t__dat__length,&__t953t__dat__first);
  __t942t__unsafe_ptr=__t953t__unsafe_ptr;
  __t942t__dat__pos=__t953t__dat__pos;
  __t942t__dat__length=__t953t__dat__length;
  __t942t__dat__first=__t953t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2260t=__t942t__unsafe_ptr;
  *__t2261t=__t942t__dat__pos;
  *__t2262t=__t942t__dat__length;
  *__t2263t=__t942t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t763t(char x, char y, char* __t2264t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2264t=z;
}

static inline __attribute__((always_inline)) void eq__t820t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2265t) {
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
  *__t2265t=__t824t;
}

static inline __attribute__((always_inline)) int ends_with__t1018t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2266t) {
  char* __t1019t__unsafe_ptr=0;
  uint64_t __t1019t__dat__pos=0;
  uint64_t __t1019t__dat__length=0;
  char __t1019t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1020t__unsafe_ptr=0;
  uint64_t __t1020t__dat__pos=0;
  uint64_t __t1020t__dat__length=0;
  char __t1020t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1021t__=0;
  char __t1022t=0;
  uint64_t __t1023t__=0;
  uint64_t n=0;
  uint64_t __t1024t__=0;
  uint64_t __t1025t__=0;
  char* __t1026t__unsafe_ptr=0;
  uint64_t __t1026t__dat__pos=0;
  uint64_t __t1026t__dat__length=0;
  char __t1026t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1027t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1019t__unsafe_ptr,&__t1019t__dat__pos,&__t1019t__dat__length,&__t1019t__dat__first);
  stack__unsafe_ptr=__t1019t__unsafe_ptr;
  stack__dat__pos=__t1019t__dat__pos;
  stack__dat__length=__t1019t__dat__length;
  stack__dat__first=__t1019t__dat__first;
  __t_errcode=str__t750t(_needle,&__t1020t__unsafe_ptr,&__t1020t__dat__pos,&__t1020t__dat__length,&__t1020t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1020t__unsafe_ptr;
  needle__dat__pos=__t1020t__dat__pos;
  needle__dat__length=__t1020t__dat__length;
  needle__dat__first=__t1020t__dat__first;
  lt__t252t(stack__dat__length,needle__dat__length,&__t1021t__);
  if(__t1021t__){
  __t1022t=0;
  goto __t_return;
  }
  len__t759t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1023t__);
  n=__t1023t__;
  len__t759t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1024t__);
  __t_errcode=sub__t352t(n,__t1024t__,&__t1025t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t939t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1025t__,n,&__t1026t__unsafe_ptr,&__t1026t__dat__pos,&__t1026t__dat__length,&__t1026t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1026t__unsafe_ptr;
  ret__dat__pos=__t1026t__dat__pos;
  ret__dat__length=__t1026t__dat__length;
  ret__dat__first=__t1026t__dat__first;
  eq__t820t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1027t__);
  __t1022t=__t1027t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2266t=__t1022t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t869t(char** __t2267t, uint64_t* __t2268t, uint16_t* __t2269t, uint16_t* __t2270t, uint64_t* __t2271t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2272t, uint64_t* __t2273t, uint64_t* __t2274t, char* __t2275t) {
  char* CHARS__buf__unsafe_ptr=*__t2267t;
  uint64_t CHARS__buf__unsafe_size=*__t2268t;
  uint16_t CHARS__buf__unsafe_offset=*__t2269t;
  uint16_t CHARS__buf__unsafe_align=*__t2270t;
  uint64_t CHARS__pos=*__t2271t;
  char* __t870t__unsafe_ptr=0;
  uint64_t __t870t__dat__pos=0;
  uint64_t __t870t__dat__length=0;
  char __t870t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t871t__=0;
  uint64_t __t872t__=0;
  uint64_t null_pos=0;
  uint64_t __t873t=0;
  uint64_t __t874t__=0;
  uint64_t next_pos=0;
  uint64_t __t875t__=0;
  char __t876t__=0;
  char* endpos=0;
  uint64_t __t877t=0;
  uint64_t __t878t__=0;
  uint64_t prev_pos=0;
  char* __t879t__unsafe_ptr=0;
  uint64_t __t879t__dat__pos=0;
  uint64_t __t879t__dat__length=0;
  char __t879t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t870t__unsafe_ptr,&__t870t__dat__pos,&__t870t__dat__length,&__t870t__dat__first);
  other__unsafe_ptr=__t870t__unsafe_ptr;
  other__dat__pos=__t870t__dat__pos;
  other__dat__length=__t870t__dat__length;
  other__dat__first=__t870t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t871t__);
  add__t175t(CHARS__pos,__t871t__,&__t872t__);
  null_pos=__t872t__;
  __t873t=1;
  add__t175t(null_pos,__t873t,&__t874t__);
  next_pos=__t874t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t875t__);
  gt__t276t(next_pos,__t875t__,&__t876t__);
  if(__t876t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t877t=0;
  add__t175t(CHARS__pos,__t877t,&__t878t__);
  prev_pos=__t878t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t879t__unsafe_ptr,&__t879t__dat__pos,&__t879t__dat__length,&__t879t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2267t=CHARS__buf__unsafe_ptr;
  *__t2268t=CHARS__buf__unsafe_size;
  *__t2269t=CHARS__buf__unsafe_offset;
  *__t2270t=CHARS__buf__unsafe_align;
  *__t2271t=CHARS__pos;
  *__t2272t=__t879t__unsafe_ptr;
  *__t2273t=__t879t__dat__pos;
  *__t2274t=__t879t__dat__length;
  *__t2275t=__t879t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t817t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2276t) {
  uint64_t __t818t__=0;
  add__t175t(s__dat__pos,s__dat__length,&__t818t__);
  goto __t_return;
  __t_return:
  *__t2276t=__t818t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2277t) {
  int value=0;
  *__t2277t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2278t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2278t=__t40t__;
}

static inline __attribute__((always_inline)) int str__t700t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2279t, uint64_t* __t2280t, uint64_t* __t2281t, char* __t2282t) {
  int __t701t=0;
  int __t702t=0;
  int __t703t__=0;
  uint64_t __t704t__=0;
  char __t705t__=0;
  uint64_t __t706t=0;
  uint64_t __t707t=0;
  char* __t708t__=0;
  char __t709t__value=0;
  char* __t710t__unsafe_ptr=0;
  uint64_t __t710t__dat__pos=0;
  uint64_t __t710t__dat__length=0;
  char __t710t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t39t(__t702t,&__t703t__);
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t704t__);
  gt__t276t(length,__t704t__,&__t705t__);
  if(__t705t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t706t=0;
  __t707t=0;
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t707t,&__t708t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t708t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t709t__value,__t708t__,1);
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t706t,length,__t709t__value,&__t710t__unsafe_ptr,&__t710t__dat__pos,&__t710t__dat__length,&__t710t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2279t=__t710t__unsafe_ptr;
  *__t2280t=__t710t__dat__pos;
  *__t2281t=__t710t__dat__length;
  *__t2282t=__t710t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t673t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t782t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2283t, uint64_t* __t2284t, uint64_t* __t2285t, char* __t2286t) {
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
  *__t2283t=__t791t__unsafe_ptr;
  *__t2284t=__t791t__dat__pos;
  *__t2285t=__t791t__dat__length;
  *__t2286t=__t791t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t792t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2287t, char** __t2288t, uint64_t* __t2289t, uint64_t* __t2290t, char* __t2291t) {
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
  *__t2287t=cstr;
  *__t2288t=str__unsafe_ptr;
  *__t2289t=str__dat__pos;
  *__t2290t=str__dat__length;
  *__t2291t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t800t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2292t) {
  goto __t_return;
  __t_return:
  *__t2292t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1561t(const char* cmd, char** __t2293t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2293t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1560t(char* unsafe_ptr, int64_t* __t2294t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2294t=status;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2295t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2295t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2296t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2296t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2297t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2297t=z;
}

static inline __attribute__((always_inline)) int read__t1562t(const char* cmd, char** __t2298t) {
  char* __t1563t__=0;
  char* unsafe_ptr=0;
  char __t1564t__=0;
  char __t1565t__=0;
  char __t1566t__=0;
  int64_t __t1567t__=0;
  int64_t status=0;
  uint64_t __t1568t=0;
  int64_t __t1569t__=0;
  char __t1570t__=0;
  char __t1571t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1561t(cmd,&__t1563t__);
  unsafe_ptr=__t1563t__;
  exists__t447t(unsafe_ptr,&__t1564t__);
  not__t28t(__t1564t__,&__t1565t__);
  if(__t1565t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(unsafe_ptr,&__t1566t__);
  if(__t1566t__){
  pclose__t1560t(unsafe_ptr,&__t1567t__);
  status=__t1567t__;
  unsafe_ptr=0;
  __t1568t=0;
  int__t427t(__t1568t,&__t1569t__);
  neq__t133t(status,__t1569t__,&__t1570t__);
  if(__t1570t__){
  __t_complain=36;
  __t1571t=__t1571t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2298t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1573t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2299t) {
  const char* __t1574t__cstr=0;
  char* __t1574t__str__unsafe_ptr=0;
  uint64_t __t1574t__str__dat__pos=0;
  uint64_t __t1574t__str__dat__length=0;
  char __t1574t__str__dat__first=0;
  char __t1575t____t795t____t789t____t534t__=0;
  const char* __t1576t__=0;
  char* __t1577t__unsafe_ptr=0;
  char __t1578t____t1566t__=0;
  int64_t __t1578t____t1567t__=0;
  int64_t __t1578t__status=0;
  uint64_t __t1578t____t1568t=0;
  int64_t __t1578t____t1569t__=0;
  char __t1578t____t1570t__=0;
  char __t1578t____t1571t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t792t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1574t__cstr,&__t1574t__str__unsafe_ptr,&__t1574t__str__dat__pos,&__t1574t__str__dat__length,&__t1574t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t800t(__t1574t__cstr,__t1574t__str__unsafe_ptr,__t1574t__str__dat__pos,__t1574t__str__dat__length,__t1574t__str__dat__first,&__t1576t__);
  __t_errcode=read__t1562t(__t1576t__,&__t1577t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t1577t__unsafe_ptr,&__t1578t____t1566t__);
  if(__t1578t____t1566t__){
  pclose__t1560t(__t1577t__unsafe_ptr,&__t1578t____t1567t__);
  __t1578t__status=__t1578t____t1567t__;
  __t1577t__unsafe_ptr=0;
  __t1578t____t1568t=0;
  int__t427t(__t1578t____t1568t,&__t1578t____t1569t__);
  neq__t133t(__t1578t__status,__t1578t____t1569t__,&__t1578t____t1570t__);
  if(__t1578t____t1570t__){
  __t_complain=36;
  __t1578t____t1571t=__t1578t____t1571t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2299t=__t1577t__unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1574t__str__unsafe_ptr,&__t1575t____t795t____t789t____t534t__);
  if(__t1575t____t795t____t789t____t534t__){
  free__t503t(&__t1574t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1554t(int64_t value, const char** __t2300t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2300t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2134t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2135t__unsafe_ptr=0;
  char __t2136t____t1578t____t1566t__=0;
  int64_t __t2136t____t1578t____t1567t__=0;
  int64_t __t2136t____t1578t__status=0;
  uint64_t __t2136t____t1578t____t1568t=0;
  int64_t __t2136t____t1578t____t1569t__=0;
  char __t2136t____t1578t____t1570t__=0;
  char __t2136t____t1578t____t1571t=0;
  char* __t2137t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2138t=0;
  int64_t __t2139t=0;
  int64_t error=0;
  const char* __t2140t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1573t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2135t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2137t__unsafe_ptr=__t2135t__unsafe_ptr;
  proc__unsafe_ptr=__t2137t__unsafe_ptr;
  exists__t447t(__t2135t__unsafe_ptr,&__t2136t____t1578t____t1566t__);
  if(__t2136t____t1578t____t1566t__){
  pclose__t1560t(__t2135t__unsafe_ptr,&__t2136t____t1578t____t1567t__);
  __t2136t____t1578t__status=__t2136t____t1578t____t1567t__;
  __t2135t__unsafe_ptr=0;
  __t2136t____t1578t____t1568t=0;
  int__t427t(__t2136t____t1578t____t1568t,&__t2136t____t1578t____t1569t__);
  neq__t133t(__t2136t____t1578t__status,__t2136t____t1578t____t1569t__,&__t2136t____t1578t____t1570t__);
  if(__t2136t____t1578t____t1570t__){
  __t_complain=36;
  __t2136t____t1578t____t1571t=__t2136t____t1578t____t1571t==0;
  }
  }
  __t2139t=__t_complain;
  __t2138t=(__t_complain==0);
  __t_complain=0;
  error=__t2139t;
  __t2138t=__t2138t==0;
  if(__t2138t){
  cstr__t1554t(error,&__t2140t__);
  print__t380t(__t2140t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2142t() {
  char* __t2146t__unsafe_ptr=0;
  uint64_t __t2146t__unsafe_size=0;
  uint16_t __t2146t__unsafe_offset=0;
  uint16_t __t2146t__unsafe_align=0;
  uint64_t __t2147t=0;
  char* __t2148t__unsafe_ptr=0;
  uint64_t __t2148t__unsafe_size=0;
  uint16_t __t2148t__unsafe_offset=0;
  uint16_t __t2148t__unsafe_align=0;
  char __t2149t____t534t__=0;
  char* __t2150t__buf__unsafe_ptr=0;
  uint64_t __t2150t__buf__unsafe_size=0;
  uint16_t __t2150t__buf__unsafe_offset=0;
  uint16_t __t2150t__buf__unsafe_align=0;
  uint64_t __t2150t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2153t__unsafe_ptr=0;
  uint64_t __t2153t__dat__pos=0;
  uint64_t __t2153t__dat__length=0;
  char __t2153t__dat__first=0;
  char* __t2154t__unsafe_ptr=0;
  uint64_t __t2154t__dat__pos=0;
  uint64_t __t2154t__dat__length=0;
  char __t2154t__dat__first=0;
  char* __t2155t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2157t=0;
  char __t2158t=0;
  char* __t2159t__unsafe_ptr=0;
  uint64_t __t2159t__dat__pos=0;
  uint64_t __t2159t__dat__length=0;
  char __t2159t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2161t__=0;
  char __t2162t__=0;
  char* __t2163t__buf__unsafe_ptr=0;
  uint64_t __t2163t__buf__unsafe_size=0;
  uint16_t __t2163t__buf__unsafe_offset=0;
  uint16_t __t2163t__buf__unsafe_align=0;
  uint64_t __t2163t__pos=0;
  char* __t2164t__unsafe_ptr=0;
  uint64_t __t2164t__dat__pos=0;
  uint64_t __t2164t__dat__length=0;
  char __t2164t__dat__first=0;
  char* __t2165t__unsafe_ptr=0;
  uint64_t __t2165t__dat__pos=0;
  uint64_t __t2165t__dat__length=0;
  char __t2165t__dat__first=0;
  uint64_t __t2166t__=0;
  char* __t2167t__unsafe_ptr=0;
  uint64_t __t2167t__dat__pos=0;
  uint64_t __t2167t__dat__length=0;
  char __t2167t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2144t(&__t2146t__unsafe_ptr,&__t2146t__unsafe_size,&__t2146t__unsafe_offset,&__t2146t__unsafe_align);
  __t2147t=256;
  __t_errcode=alloc__t532t(&__t2146t__unsafe_ptr,&__t2146t__unsafe_size,&__t2146t__unsafe_offset,&__t2146t__unsafe_align,__t2147t,&__t2148t__unsafe_ptr,&__t2148t__unsafe_size,&__t2148t__unsafe_offset,&__t2148t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t677t(&__t2148t__unsafe_ptr,&__t2148t__unsafe_size,&__t2148t__unsafe_offset,&__t2148t__unsafe_align,&__t2150t__buf__unsafe_ptr,&__t2150t__buf__unsafe_size,&__t2150t__buf__unsafe_offset,&__t2150t__buf__unsafe_align,&__t2150t__pos);
  CHARS__buf__unsafe_ptr=__t2150t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2150t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2150t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2150t__buf__unsafe_align;
  CHARS__pos=__t2150t__pos;
  path=__t2151t;
  __t_errcode=copy__t860t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2152t,&__t2153t__unsafe_ptr,&__t2153t__dat__pos,&__t2153t__dat__length,&__t2153t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t860t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2154t__unsafe_ptr,&__t2154t__dat__pos,&__t2154t__dat__length,&__t2154t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1996t(path,&__t2155t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2155t__unsafe_ptr;
  __t2157t=0;
  while(1){
  __t_complain=get__t2076t(&test_dir__unsafe_ptr,__t2157t,&__t2159t__unsafe_ptr,&__t2159t__dat__pos,&__t2159t__dat__length,&__t2159t__dat__first);
  __t2158t=__t_complain;
  entry__unsafe_ptr=__t2159t__unsafe_ptr;
  entry__dat__pos=__t2159t__dat__pos;
  entry__dat__length=__t2159t__dat__length;
  entry__dat__first=__t2159t__dat__first;
  __t2158t=__t2158t==0;
  __t2157t=__t2157t+1;
  if(!__t2158t){
  break;
  }
  __t_errcode=ends_with__t1018t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2160t,&__t2161t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t2161t__,&__t2162t__);
  if(__t2162t__){
  continue;
  }
  __t2163t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2163t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2163t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2163t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2163t__pos=CHARS__pos;
  str__t723t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2164t__unsafe_ptr,&__t2164t__dat__pos,&__t2164t__dat__length,&__t2164t__dat__first);
  __t_errcode=copy_null_terminated__t869t(&__t2163t__buf__unsafe_ptr,&__t2163t__buf__unsafe_size,&__t2163t__buf__unsafe_offset,&__t2163t__buf__unsafe_align,&__t2163t__pos,__t2164t__unsafe_ptr,__t2164t__dat__pos,__t2164t__dat__length,__t2164t__dat__first,&__t2165t__unsafe_ptr,&__t2165t__dat__pos,&__t2165t__dat__length,&__t2165t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t817t(__t2165t__unsafe_ptr,__t2165t__dat__pos,__t2165t__dat__length,__t2165t__dat__first,&__t2166t__);
  __t_errcode=str__t700t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2166t__,&__t2167t__unsafe_ptr,&__t2167t__dat__pos,&__t2167t__dat__length,&__t2167t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2167t__unsafe_ptr;
  command__dat__pos=__t2167t__dat__pos;
  command__dat__length=__t2167t__dat__length;
  command__dat__first=__t2167t__dat__first;
  print__t893t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2134t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t1995t(__t2155t__unsafe_ptr);
  exists__t447t(__t2148t__unsafe_ptr,&__t2149t____t534t__);
  if(__t2149t____t534t__){
  free__t503t(&__t2148t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2142t();return 0;}