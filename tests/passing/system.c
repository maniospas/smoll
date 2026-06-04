#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2191t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1636t(char** __t2194t, uint64_t* __t2195t, uint16_t* __t2196t, uint16_t* __t2197t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2194t=unsafe_ptr;
  *__t2195t=unsafe_size;
  *__t2196t=unsafe_offset;
  *__t2197t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2198t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2198t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2199t) {
  char* allocated=*__t2199t;
  if(allocated){
  free(allocated);
  }
  *__t2199t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2200t) {
  int value=0;
  *__t2200t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2201t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2201t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2202t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2202t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2203t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2203t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2204t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2204t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2205t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2205t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2206t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2206t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2207t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2207t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2208t) {
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
  *__t2208t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2209t, uint64_t* __t2210t, uint16_t* __t2211t, uint16_t* __t2212t, uint64_t size, char** __t2213t, uint64_t* __t2214t, uint16_t* __t2215t, uint16_t* __t2216t) {
  char* buffer__unsafe_ptr=*__t2209t;
  uint64_t buffer__unsafe_size=*__t2210t;
  uint16_t buffer__unsafe_offset=*__t2211t;
  uint16_t buffer__unsafe_align=*__t2212t;
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
  *__t2209t=buffer__unsafe_ptr;
  *__t2210t=buffer__unsafe_size;
  *__t2211t=buffer__unsafe_offset;
  *__t2212t=buffer__unsafe_align;
  *__t2213t=buffer__unsafe_ptr;
  *__t2214t=buffer__unsafe_size;
  *__t2215t=buffer__unsafe_offset;
  *__t2216t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2217t, uint64_t* __t2218t, uint16_t* __t2219t, uint16_t* __t2220t, uint64_t _pos, char** __t2221t, uint64_t* __t2222t, uint16_t* __t2223t, uint16_t* __t2224t, uint64_t* __t2225t) {
  char* buf__unsafe_ptr=*__t2217t;
  uint64_t buf__unsafe_size=*__t2218t;
  uint16_t buf__unsafe_offset=*__t2219t;
  uint16_t buf__unsafe_align=*__t2220t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2217t=buf__unsafe_ptr;
  *__t2218t=buf__unsafe_size;
  *__t2219t=buf__unsafe_offset;
  *__t2220t=buf__unsafe_align;
  *__t2221t=buf__unsafe_ptr;
  *__t2222t=buf__unsafe_size;
  *__t2223t=buf__unsafe_offset;
  *__t2224t=buf__unsafe_align;
  *__t2225t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2226t, uint64_t* __t2227t, uint16_t* __t2228t, uint16_t* __t2229t, char** __t2230t, uint64_t* __t2231t, uint16_t* __t2232t, uint16_t* __t2233t, uint64_t* __t2234t) {
  char* buf__unsafe_ptr=*__t2226t;
  uint64_t buf__unsafe_size=*__t2227t;
  uint16_t buf__unsafe_offset=*__t2228t;
  uint16_t buf__unsafe_align=*__t2229t;
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
  *__t2226t=buf__unsafe_ptr;
  *__t2227t=buf__unsafe_size;
  *__t2228t=buf__unsafe_offset;
  *__t2229t=buf__unsafe_align;
  *__t2230t=__t657t__buf__unsafe_ptr;
  *__t2231t=__t657t__buf__unsafe_size;
  *__t2232t=__t657t__buf__unsafe_offset;
  *__t2233t=__t657t__buf__unsafe_align;
  *__t2234t=__t657t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2235t, uint64_t* __t2236t, uint16_t* __t2237t, uint16_t* __t2238t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2235t=unsafe_ptr;
  *__t2236t=unsafe_size;
  *__t2237t=unsafe_offset;
  *__t2238t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2239t) {
  *__t2239t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2240t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2240t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2241t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2241t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2242t) {
  *__t2242t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2243t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2243t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2244t) {
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
  *__t2244t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2245t, uint64_t* __t2246t, uint64_t* __t2247t, char* __t2248t) {
  goto __t_return;
  __t_return:
  *__t2245t=unsafe_ptr;
  *__t2246t=dat__pos;
  *__t2247t=dat__length;
  *__t2248t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
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
  *__t2249t=__t794t__unsafe_ptr;
  *__t2250t=__t794t__dat__pos;
  *__t2251t=__t794t__dat__length;
  *__t2252t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2253t, uint64_t* __t2254t, uint64_t* __t2255t, char* __t2256t) {
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
  *__t2253t=__t827t__unsafe_ptr;
  *__t2254t=__t827t__dat__pos;
  *__t2255t=__t827t__dat__length;
  *__t2256t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2257t, uint64_t* __t2258t, uint64_t* __t2259t, char* __t2260t) {
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
  *__t2257t=__t853t__unsafe_ptr;
  *__t2258t=__t853t__dat__pos;
  *__t2259t=__t853t__dat__length;
  *__t2260t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2261t) {
  goto __t_return;
  __t_return:
  *__t2261t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2262t) {
  goto __t_return;
  __t_return:
  *__t2262t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2263t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2263t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2264t, uint64_t* __t2265t, uint16_t* __t2266t, uint16_t* __t2267t, uint64_t pos, char** __t2268t, uint64_t* __t2269t, uint16_t* __t2270t, uint16_t* __t2271t, uint64_t* __t2272t) {
  char* buf__unsafe_ptr=*__t2264t;
  uint64_t buf__unsafe_size=*__t2265t;
  uint16_t buf__unsafe_offset=*__t2266t;
  uint16_t buf__unsafe_align=*__t2267t;
  goto __t_return;
  __t_return:
  *__t2264t=buf__unsafe_ptr;
  *__t2265t=buf__unsafe_size;
  *__t2266t=buf__unsafe_offset;
  *__t2267t=buf__unsafe_align;
  *__t2268t=buf__unsafe_ptr;
  *__t2269t=buf__unsafe_size;
  *__t2270t=buf__unsafe_offset;
  *__t2271t=buf__unsafe_align;
  *__t2272t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2273t, uint64_t* __t2274t, uint16_t* __t2275t, uint16_t* __t2276t, uint64_t* __t2277t, uint64_t length, char** __t2278t, uint64_t* __t2279t, uint16_t* __t2280t, uint16_t* __t2281t, uint64_t* __t2282t) {
  char* allocator__buf__unsafe_ptr=*__t2273t;
  uint64_t allocator__buf__unsafe_size=*__t2274t;
  uint16_t allocator__buf__unsafe_offset=*__t2275t;
  uint16_t allocator__buf__unsafe_align=*__t2276t;
  uint64_t allocator__pos=*__t2277t;
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
  *__t2273t=allocator__buf__unsafe_ptr;
  *__t2274t=allocator__buf__unsafe_size;
  *__t2275t=allocator__buf__unsafe_offset;
  *__t2276t=allocator__buf__unsafe_align;
  *__t2277t=allocator__pos;
  *__t2278t=__t692t__buf__unsafe_ptr;
  *__t2279t=__t692t__buf__unsafe_size;
  *__t2280t=__t692t__buf__unsafe_offset;
  *__t2281t=__t692t__buf__unsafe_align;
  *__t2282t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t2283t, uint64_t* __t2284t, uint16_t* __t2285t, uint16_t* __t2286t, uint64_t* __t2287t, const char* _other, char** __t2288t, uint64_t* __t2289t, uint64_t* __t2290t, char* __t2291t) {
  char* CHARS__buf__unsafe_ptr=*__t2283t;
  uint64_t CHARS__buf__unsafe_size=*__t2284t;
  uint16_t CHARS__buf__unsafe_offset=*__t2285t;
  uint16_t CHARS__buf__unsafe_align=*__t2286t;
  uint64_t CHARS__pos=*__t2287t;
  char* __t880t__unsafe_ptr=0;
  uint64_t __t880t__dat__pos=0;
  uint64_t __t880t__dat__length=0;
  char __t880t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t881t__=0;
  char* __t882t__buf__unsafe_ptr=0;
  uint64_t __t882t__buf__unsafe_size=0;
  uint16_t __t882t__buf__unsafe_offset=0;
  uint16_t __t882t__buf__unsafe_align=0;
  uint64_t __t882t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t883t=0;
  char* __t884t__unsafe_ptr=0;
  uint64_t __t884t__dat__pos=0;
  uint64_t __t884t__dat__length=0;
  char __t884t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_other,&__t880t__unsafe_ptr,&__t880t__dat__pos,&__t880t__dat__length,&__t880t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t880t__unsafe_ptr;
  other__dat__pos=__t880t__dat__pos;
  other__dat__length=__t880t__dat__length;
  other__dat__first=__t880t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t881t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t881t__,&__t882t__buf__unsafe_ptr,&__t882t__buf__unsafe_size,&__t882t__buf__unsafe_offset,&__t882t__buf__unsafe_align,&__t882t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t882t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t882t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t882t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t882t__buf__unsafe_align;
  surface__pos=__t882t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t883t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t883t,other__dat__length,other__dat__first,&__t884t__unsafe_ptr,&__t884t__dat__pos,&__t884t__dat__length,&__t884t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2283t=CHARS__buf__unsafe_ptr;
  *__t2284t=CHARS__buf__unsafe_size;
  *__t2285t=CHARS__buf__unsafe_offset;
  *__t2286t=CHARS__buf__unsafe_align;
  *__t2287t=CHARS__pos;
  *__t2288t=__t884t__unsafe_ptr;
  *__t2289t=__t884t__dat__pos;
  *__t2290t=__t884t__dat__length;
  *__t2291t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t909t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2292t, uint64_t* __t2293t, uint64_t* __t2294t, char* __t2295t) {
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
  *__t2292t=__t918t__unsafe_ptr;
  *__t2293t=__t918t__dat__pos;
  *__t2294t=__t918t__dat__length;
  *__t2295t=__t918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t919t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2296t, char** __t2297t, uint64_t* __t2298t, uint64_t* __t2299t, char* __t2300t) {
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
  *__t2296t=cstr;
  *__t2297t=str__unsafe_ptr;
  *__t2298t=str__dat__pos;
  *__t2299t=str__dat__length;
  *__t2300t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t927t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2301t) {
  goto __t_return;
  __t_return:
  *__t2301t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1679t(const char* cmd, const char** __t2302t) {
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
  *__t2302t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1678t(const char* cmd, int64_t* __t2303t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2303t=result;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2304t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2304t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2305t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2305t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2306t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2306t=z;
}

int system__t1688t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1689t__cstr=0;
  char* __t1689t__str__unsafe_ptr=0;
  uint64_t __t1689t__str__dat__pos=0;
  uint64_t __t1689t__str__dat__length=0;
  char __t1689t__str__dat__first=0;
  char __t1690t____t922t____t916t____t534t__=0;
  const char* __t1691t__=0;
  const char* __t1692t__=0;
  int64_t __t1693t__=0;
  int64_t result=0;
  uint64_t __t1694t=0;
  int64_t __t1695t__=0;
  char __t1696t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t919t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1689t__cstr,&__t1689t__str__unsafe_ptr,&__t1689t__str__dat__pos,&__t1689t__str__dat__length,&__t1689t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t927t(__t1689t__cstr,__t1689t__str__unsafe_ptr,__t1689t__str__dat__pos,__t1689t__str__dat__length,__t1689t__str__dat__first,&__t1691t__);
  __t_errcode=safe__t1679t(__t1691t__,&__t1692t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1678t(__t1692t__,&__t1693t__);
  result=__t1693t__;
  __t1694t=0;
  int__t427t(__t1694t,&__t1695t__);
  neq__t133t(result,__t1695t__,&__t1696t__);
  if(__t1696t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1689t__str__unsafe_ptr,&__t1690t____t922t____t916t____t534t__);
  if(__t1690t____t922t____t916t____t534t__){
  free__t503t(&__t1689t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2184t() {
  char* __t2186t__unsafe_ptr=0;
  uint64_t __t2186t__unsafe_size=0;
  uint16_t __t2186t__unsafe_offset=0;
  uint16_t __t2186t__unsafe_align=0;
  uint64_t __t2187t=0;
  char* __t2188t__unsafe_ptr=0;
  uint64_t __t2188t__unsafe_size=0;
  uint16_t __t2188t__unsafe_offset=0;
  uint16_t __t2188t__unsafe_align=0;
  char __t2189t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t2190t__buf__unsafe_ptr=0;
  uint64_t __t2190t__buf__unsafe_size=0;
  uint16_t __t2190t__buf__unsafe_offset=0;
  uint16_t __t2190t__buf__unsafe_align=0;
  uint64_t __t2190t__pos=0;
  char* __t2192t__unsafe_ptr=0;
  uint64_t __t2192t__dat__pos=0;
  uint64_t __t2192t__dat__length=0;
  char __t2192t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t1636t(&__t2186t__unsafe_ptr,&__t2186t__unsafe_size,&__t2186t__unsafe_offset,&__t2186t__unsafe_align);
  __t2187t=2;
  __t_errcode=alloc__t532t(&__t2186t__unsafe_ptr,&__t2186t__unsafe_size,&__t2186t__unsafe_offset,&__t2186t__unsafe_align,__t2187t,&__t2188t__unsafe_ptr,&__t2188t__unsafe_size,&__t2188t__unsafe_offset,&__t2188t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2188t__unsafe_ptr;
  buf__unsafe_size=__t2188t__unsafe_size;
  buf__unsafe_offset=__t2188t__unsafe_offset;
  buf__unsafe_align=__t2188t__unsafe_align;
  arena__t655t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2190t__buf__unsafe_ptr,&__t2190t__buf__unsafe_size,&__t2190t__buf__unsafe_offset,&__t2190t__buf__unsafe_align,&__t2190t__pos);
  __t_errcode=copy__t879t(&__t2190t__buf__unsafe_ptr,&__t2190t__buf__unsafe_size,&__t2190t__buf__unsafe_offset,&__t2190t__buf__unsafe_align,&__t2190t__pos,__t2191t,&__t2192t__unsafe_ptr,&__t2192t__dat__pos,&__t2192t__dat__length,&__t2192t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2192t__unsafe_ptr;
  s__dat__pos=__t2192t__dat__pos;
  s__dat__length=__t2192t__dat__length;
  s__dat__first=__t2192t__dat__first;
  __t_errcode=system__t1688t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2188t__unsafe_ptr,&__t2189t____t534t__);
  if(__t2189t____t534t__){
  free__t503t(&__t2188t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2184t();return 0;}