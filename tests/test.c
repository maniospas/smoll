#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t375t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____t_buffer____buffer__t2158t(char** __t2226t, uint64_t* __t2227t, uint16_t* __t2228t, uint16_t* __t2229t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2226t=unsafe_ptr;
  *__t2227t=unsafe_size;
  *__t2228t=unsafe_offset;
  *__t2229t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2230t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2230t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2231t) {
  char* allocated=*__t2231t;
  if(allocated){
  free(allocated);
  }
  *__t2231t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2232t) {
  int value=0;
  *__t2232t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2233t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2233t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2234t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t2234t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t2235t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2235t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t2236t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2236t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2237t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2237t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t2238t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2238t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t2239t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2239t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2240t) {
  char* allocated=0;
  char __t669t__=0;
  char __t670t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t605t(allocated,&__t669t__);
  not__t37t(__t669t__,&__t670t__);
  if(__t670t__){
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

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2241t, uint64_t* __t2242t, uint16_t* __t2243t, uint16_t* __t2244t, uint64_t size, char** __t2245t, uint64_t* __t2246t, uint16_t* __t2247t, uint16_t* __t2248t) {
  char* buffer__unsafe_ptr=*__t2241t;
  uint64_t buffer__unsafe_size=*__t2242t;
  uint16_t buffer__unsafe_offset=*__t2243t;
  uint16_t buffer__unsafe_align=*__t2244t;
  char __t706t__=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t __t715t=0;
  char __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t bytes=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  char* __t721t__=0;
  uint64_t __t723t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t129t(buffer__unsafe_size,size,&__t708t__);
  if(__t708t__){
  __t709t=0;
  neq__t153t(size,__t709t,&__t710t__);
  if(__t710t__){
  __t711t=0;
  nat__t679t(buffer__unsafe_align,&__t712t__);
  mul__t208t(__t712t__,size,&__t713t__);
  zero__t676t(buffer__unsafe_ptr,__t711t,__t713t__);
  }
  goto __t_return;
  }
  __t715t=0;
  neq__t153t(buffer__unsafe_size,__t715t,&__t716t__);
  if(__t716t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t717t__);
  mul__t208t(__t717t__,size,&__t718t__);
  bytes=__t718t__;
  __t719t=0;
  eq__t129t(bytes,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t668t(bytes,&__t721t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t723t=0;
  zero__t676t(__t721t__,__t723t,bytes);
  buffer__unsafe_ptr=__t721t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t605t(buffer__unsafe_ptr,&__t706t__);
  if(__t706t__){
  free__t675t(&buffer__unsafe_ptr);
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

static inline __attribute__((always_inline)) void arena__t836t(char** __t2249t, uint64_t* __t2250t, uint16_t* __t2251t, uint16_t* __t2252t, uint64_t _pos, char** __t2253t, uint64_t* __t2254t, uint16_t* __t2255t, uint16_t* __t2256t, uint64_t* __t2257t) {
  char* buf__unsafe_ptr=*__t2249t;
  uint64_t buf__unsafe_size=*__t2250t;
  uint16_t buf__unsafe_offset=*__t2251t;
  uint16_t buf__unsafe_align=*__t2252t;
  uint64_t __t837t=0;
  uint64_t pos=0;
  __t837t=_pos;
  pos=__t837t;
  goto __t_return;
  __t_return:
  *__t2249t=buf__unsafe_ptr;
  *__t2250t=buf__unsafe_size;
  *__t2251t=buf__unsafe_offset;
  *__t2252t=buf__unsafe_align;
  *__t2253t=buf__unsafe_ptr;
  *__t2254t=buf__unsafe_size;
  *__t2255t=buf__unsafe_offset;
  *__t2256t=buf__unsafe_align;
  *__t2257t=pos;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2258t, uint64_t* __t2259t, uint16_t* __t2260t, uint16_t* __t2261t, char** __t2262t, uint64_t* __t2263t, uint16_t* __t2264t, uint16_t* __t2265t, uint64_t* __t2266t) {
  char* buf__unsafe_ptr=*__t2258t;
  uint64_t buf__unsafe_size=*__t2259t;
  uint16_t buf__unsafe_offset=*__t2260t;
  uint16_t buf__unsafe_align=*__t2261t;
  uint64_t __t840t=0;
  char* __t841t__buf__unsafe_ptr=0;
  uint64_t __t841t__buf__unsafe_size=0;
  uint16_t __t841t__buf__unsafe_offset=0;
  uint16_t __t841t__buf__unsafe_align=0;
  uint64_t __t841t__pos=0;
  __t840t=0;
  arena__t836t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t840t,&__t841t__buf__unsafe_ptr,&__t841t__buf__unsafe_size,&__t841t__buf__unsafe_offset,&__t841t__buf__unsafe_align,&__t841t__pos);
  goto __t_return;
  __t_return:
  *__t2258t=buf__unsafe_ptr;
  *__t2259t=buf__unsafe_size;
  *__t2260t=buf__unsafe_offset;
  *__t2261t=buf__unsafe_align;
  *__t2262t=__t841t__buf__unsafe_ptr;
  *__t2263t=__t841t__buf__unsafe_size;
  *__t2264t=__t841t__buf__unsafe_offset;
  *__t2265t=__t841t__buf__unsafe_align;
  *__t2266t=__t841t__pos;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t2267t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2267t=z;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2268t) {
  goto __t_return;
  __t_return:
  *__t2268t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t285t(uint64_t x, uint64_t y, char* __t2269t) {
  int __t286t__=0;
  char z=0;
  is_different__t104t(x,y,&__t286t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2269t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t2270t, uint64_t* __t2271t, uint16_t* __t2272t, uint16_t* __t2273t, uint64_t pos, char** __t2274t, uint64_t* __t2275t, uint16_t* __t2276t, uint16_t* __t2277t, uint64_t* __t2278t) {
  char* buf__unsafe_ptr=*__t2270t;
  uint64_t buf__unsafe_size=*__t2271t;
  uint16_t buf__unsafe_offset=*__t2272t;
  uint16_t buf__unsafe_align=*__t2273t;
  goto __t_return;
  __t_return:
  *__t2270t=buf__unsafe_ptr;
  *__t2271t=buf__unsafe_size;
  *__t2272t=buf__unsafe_offset;
  *__t2273t=buf__unsafe_align;
  *__t2274t=buf__unsafe_ptr;
  *__t2275t=buf__unsafe_size;
  *__t2276t=buf__unsafe_offset;
  *__t2277t=buf__unsafe_align;
  *__t2278t=pos;
}

static inline __attribute__((always_inline)) int alloc__t874t(char** __t2279t, uint64_t* __t2280t, uint16_t* __t2281t, uint16_t* __t2282t, uint64_t* __t2283t, uint64_t length, char** __t2284t, uint64_t* __t2285t, uint16_t* __t2286t, uint16_t* __t2287t, uint64_t* __t2288t) {
  char* allocator__buf__unsafe_ptr=*__t2279t;
  uint64_t allocator__buf__unsafe_size=*__t2280t;
  uint16_t allocator__buf__unsafe_offset=*__t2281t;
  uint16_t allocator__buf__unsafe_align=*__t2282t;
  uint64_t allocator__pos=*__t2283t;
  uint64_t __t876t__=0;
  uint64_t next_pos=0;
  uint64_t __t877t__=0;
  char __t878t__=0;
  uint64_t __t879t=0;
  uint64_t __t880t__=0;
  uint64_t pos=0;
  char* __t881t__buf__unsafe_ptr=0;
  uint64_t __t881t__buf__unsafe_size=0;
  uint16_t __t881t__buf__unsafe_offset=0;
  uint16_t __t881t__buf__unsafe_align=0;
  uint64_t __t881t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t184t(allocator__pos,length,&__t876t__);
  next_pos=__t876t__;
  len__t831t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t877t__);
  gt__t285t(next_pos,__t877t__,&__t878t__);
  if(__t878t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t879t=0;
  add__t184t(allocator__pos,__t879t,&__t880t__);
  pos=__t880t__;
  allocator__pos=next_pos;
  allocated__t842t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t881t__buf__unsafe_ptr,&__t881t__buf__unsafe_size,&__t881t__buf__unsafe_offset,&__t881t__buf__unsafe_align,&__t881t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2279t=allocator__buf__unsafe_ptr;
  *__t2280t=allocator__buf__unsafe_size;
  *__t2281t=allocator__buf__unsafe_offset;
  *__t2282t=allocator__buf__unsafe_align;
  *__t2283t=allocator__pos;
  *__t2284t=__t881t__buf__unsafe_ptr;
  *__t2285t=__t881t__buf__unsafe_size;
  *__t2286t=__t881t__buf__unsafe_offset;
  *__t2287t=__t881t__buf__unsafe_align;
  *__t2288t=__t881t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat16__t948t(uint64_t x, uint16_t* __t2289t) {
  uint16_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2289t=value;
}

static inline __attribute__((always_inline)) int slice__t949t(char** __t2290t, uint64_t* __t2291t, uint16_t* __t2292t, uint16_t* __t2293t, uint64_t* __t2294t, uint64_t length, char** __t2295t, uint64_t* __t2296t, uint16_t* __t2297t, uint16_t* __t2298t) {
  char* surface__buf__unsafe_ptr=*__t2290t;
  uint64_t surface__buf__unsafe_size=*__t2291t;
  uint16_t surface__buf__unsafe_offset=*__t2292t;
  uint16_t surface__buf__unsafe_align=*__t2293t;
  uint64_t surface__pos=*__t2294t;
  char* __t950t__buf__unsafe_ptr=0;
  uint64_t __t950t__buf__unsafe_size=0;
  uint16_t __t950t__buf__unsafe_offset=0;
  uint16_t __t950t__buf__unsafe_align=0;
  uint64_t __t950t__pos=0;
  char* __t951t__buf__unsafe_ptr=0;
  uint64_t __t951t__buf__unsafe_size=0;
  uint16_t __t951t__buf__unsafe_offset=0;
  uint16_t __t951t__buf__unsafe_align=0;
  uint64_t __t951t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint16_t allocated__buf__unsafe_offset=0;
  uint16_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__unsafe_size=0;
  uint16_t __t952t__unsafe_offset=0;
  uint16_t __t952t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t953t__=0;
  uint64_t __t954t__=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  uint16_t __t957t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t874t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,length,&__t950t__buf__unsafe_ptr,&__t950t__buf__unsafe_size,&__t950t__buf__unsafe_offset,&__t950t__buf__unsafe_align,&__t950t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t951t__buf__unsafe_ptr=__t950t__buf__unsafe_ptr;
  __t951t__buf__unsafe_size=__t950t__buf__unsafe_size;
  __t951t__buf__unsafe_offset=__t950t__buf__unsafe_offset;
  __t951t__buf__unsafe_align=__t950t__buf__unsafe_align;
  __t951t__pos=__t950t__pos;
  allocated__buf__unsafe_ptr=__t951t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t951t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t951t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t951t__buf__unsafe_align;
  allocated__pos=__t951t__pos;
  __t952t__unsafe_ptr=allocated__buf__unsafe_ptr;
  __t952t__unsafe_size=allocated__buf__unsafe_size;
  __t952t__unsafe_offset=allocated__buf__unsafe_offset;
  __t952t__unsafe_align=allocated__buf__unsafe_align;
  buf__unsafe_ptr=__t952t__unsafe_ptr;
  buf__unsafe_size=__t952t__unsafe_size;
  buf__unsafe_offset=__t952t__unsafe_offset;
  buf__unsafe_align=__t952t__unsafe_align;
  buf__unsafe_size=length;
  nat__t679t(buf__unsafe_offset,&__t953t__);
  nat__t679t(buf__unsafe_align,&__t954t__);
  mul__t208t(__t954t__,allocated__pos,&__t955t__);
  add__t184t(__t953t__,__t955t__,&__t956t__);
  nat16__t948t(__t956t__,&__t957t__);
  buf__unsafe_offset=__t957t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2290t=surface__buf__unsafe_ptr;
  *__t2291t=surface__buf__unsafe_size;
  *__t2292t=surface__buf__unsafe_offset;
  *__t2293t=surface__buf__unsafe_align;
  *__t2294t=surface__pos;
  *__t2295t=buf__unsafe_ptr;
  *__t2296t=buf__unsafe_size;
  *__t2297t=buf__unsafe_offset;
  *__t2298t=buf__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t2299t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2299t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2300t) {
  *__t2300t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2301t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2301t=__t678t__;
}

static inline __attribute__((always_inline)) int mutget__t817t(char** __t2302t, uint64_t* __t2303t, uint16_t* __t2304t, uint16_t* __t2305t, uint64_t i, char** __t2306t) {
  char* buffer__unsafe_ptr=*__t2302t;
  uint64_t buffer__unsafe_size=*__t2303t;
  uint16_t buffer__unsafe_offset=*__t2304t;
  uint16_t buffer__unsafe_align=*__t2305t;
  char __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  char* __t823t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t818t__);
  if(__t818t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t819t__);
  mul__t208t(i,__t819t__,&__t820t__);
  nat__t679t(buffer__unsafe_offset,&__t821t__);
  add__t184t(__t820t__,__t821t__,&__t822t__);
  add__t677t(buffer__unsafe_ptr,__t822t__,&__t823t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2302t=buffer__unsafe_ptr;
  *__t2303t=buffer__unsafe_size;
  *__t2304t=buffer__unsafe_offset;
  *__t2305t=buffer__unsafe_align;
  *__t2306t=__t823t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t824t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2307t) {
  char __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  uint64_t __t829t__=0;
  char* __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t825t__);
  if(__t825t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t826t__);
  mul__t208t(i,__t826t__,&__t827t__);
  nat__t679t(buffer__unsafe_offset,&__t828t__);
  add__t184t(__t827t__,__t828t__,&__t829t__);
  add__t677t(buffer__unsafe_ptr,__t829t__,&__t830t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2307t=__t830t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t407t(uint64_t value) {
  const char* endl=0;
  endl=__t396t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2155t() {
  char* __t2160t__unsafe_ptr=0;
  uint64_t __t2160t__unsafe_size=0;
  uint16_t __t2160t__unsafe_offset=0;
  uint16_t __t2160t__unsafe_align=0;
  uint64_t __t2161t=0;
  char* __t2162t__unsafe_ptr=0;
  uint64_t __t2162t__unsafe_size=0;
  uint16_t __t2162t__unsafe_offset=0;
  uint16_t __t2162t__unsafe_align=0;
  char __t2163t____t706t__=0;
  char* __t2164t__buf__unsafe_ptr=0;
  uint64_t __t2164t__buf__unsafe_size=0;
  uint16_t __t2164t__buf__unsafe_offset=0;
  uint16_t __t2164t__buf__unsafe_align=0;
  uint64_t __t2164t__pos=0;
  char* __t2165t__buf__unsafe_ptr=0;
  uint64_t __t2165t__buf__unsafe_size=0;
  uint16_t __t2165t__buf__unsafe_offset=0;
  uint16_t __t2165t__buf__unsafe_align=0;
  uint64_t __t2165t__pos=0;
  char* xall__buf__unsafe_ptr=0;
  uint64_t xall__buf__unsafe_size=0;
  uint16_t xall__buf__unsafe_offset=0;
  uint16_t xall__buf__unsafe_align=0;
  uint64_t xall__pos=0;
  uint64_t __t2166t=0;
  char* __t2167t__unsafe_ptr=0;
  uint64_t __t2167t__unsafe_size=0;
  uint16_t __t2167t__unsafe_offset=0;
  uint16_t __t2167t__unsafe_align=0;
  char* __t2168t__unsafe_ptr=0;
  uint64_t __t2168t__unsafe_size=0;
  uint16_t __t2168t__unsafe_offset=0;
  uint16_t __t2168t__unsafe_align=0;
  char* x1__unsafe_ptr=0;
  uint64_t x1__unsafe_size=0;
  uint16_t x1__unsafe_offset=0;
  uint16_t x1__unsafe_align=0;
  uint64_t __t2169t=0;
  char* __t2170t__unsafe_ptr=0;
  uint64_t __t2170t__unsafe_size=0;
  uint16_t __t2170t__unsafe_offset=0;
  uint16_t __t2170t__unsafe_align=0;
  char* __t2171t__unsafe_ptr=0;
  uint64_t __t2171t__unsafe_size=0;
  uint16_t __t2171t__unsafe_offset=0;
  uint16_t __t2171t__unsafe_align=0;
  char* x2__unsafe_ptr=0;
  uint64_t x2__unsafe_size=0;
  uint16_t x2__unsafe_offset=0;
  uint16_t x2__unsafe_align=0;
  uint64_t __t2172t=0;
  char* __t2173t__unsafe_ptr=0;
  uint64_t __t2173t__unsafe_size=0;
  uint16_t __t2173t__unsafe_offset=0;
  uint16_t __t2173t__unsafe_align=0;
  char* __t2174t__unsafe_ptr=0;
  uint64_t __t2174t__unsafe_size=0;
  uint16_t __t2174t__unsafe_offset=0;
  uint16_t __t2174t__unsafe_align=0;
  char* x3__unsafe_ptr=0;
  uint64_t x3__unsafe_size=0;
  uint16_t x3__unsafe_offset=0;
  uint16_t x3__unsafe_align=0;
  uint64_t __t2175t=0;
  char* __t2177t__=0;
  uint64_t __t2178t=0;
  uint64_t __t2179t=0;
  char* __t2181t__=0;
  uint64_t __t2182t=0;
  uint64_t __t2183t=0;
  char* __t2185t__=0;
  uint64_t __t2186t=0;
  uint64_t __t2187t=0;
  char* __t2189t__=0;
  uint64_t __t2190t=0;
  uint64_t __t2191t=0;
  char* __t2193t__=0;
  uint64_t __t2194t=0;
  uint64_t __t2195t=0;
  char* __t2197t__=0;
  uint64_t __t2198t=0;
  uint64_t __t2199t=0;
  char* __t2201t__=0;
  uint64_t __t2202t=0;
  uint64_t __t2203t=0;
  char* __t2205t__=0;
  uint64_t __t2206t=0;
  uint64_t __t2207t=0;
  char* __t2209t__=0;
  uint64_t __t2210t=0;
  uint64_t __t2211t=0;
  char* __t2213t__=0;
  uint64_t __t2214t__value=0;
  uint64_t __t2216t=0;
  char* __t2218t__=0;
  uint64_t __t2219t__value=0;
  uint64_t __t2221t=0;
  char* __t2223t__=0;
  uint64_t __t2224t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t375t();
  nat____t_buffer____buffer__t2158t(&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align);
  __t2161t=10;
  __t_errcode=alloc__t704t(&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align,__t2161t,&__t2162t__unsafe_ptr,&__t2162t__unsafe_size,&__t2162t__unsafe_offset,&__t2162t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t839t(&__t2162t__unsafe_ptr,&__t2162t__unsafe_size,&__t2162t__unsafe_offset,&__t2162t__unsafe_align,&__t2164t__buf__unsafe_ptr,&__t2164t__buf__unsafe_size,&__t2164t__buf__unsafe_offset,&__t2164t__buf__unsafe_align,&__t2164t__pos);
  __t2165t__buf__unsafe_ptr=__t2164t__buf__unsafe_ptr;
  __t2165t__buf__unsafe_size=__t2164t__buf__unsafe_size;
  __t2165t__buf__unsafe_offset=__t2164t__buf__unsafe_offset;
  __t2165t__buf__unsafe_align=__t2164t__buf__unsafe_align;
  __t2165t__pos=__t2164t__pos;
  xall__buf__unsafe_ptr=__t2165t__buf__unsafe_ptr;
  xall__buf__unsafe_size=__t2165t__buf__unsafe_size;
  xall__buf__unsafe_offset=__t2165t__buf__unsafe_offset;
  xall__buf__unsafe_align=__t2165t__buf__unsafe_align;
  xall__pos=__t2165t__pos;
  __t2166t=3;
  __t_errcode=slice__t949t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2166t,&__t2167t__unsafe_ptr,&__t2167t__unsafe_size,&__t2167t__unsafe_offset,&__t2167t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2168t__unsafe_ptr=__t2167t__unsafe_ptr;
  __t2168t__unsafe_size=__t2167t__unsafe_size;
  __t2168t__unsafe_offset=__t2167t__unsafe_offset;
  __t2168t__unsafe_align=__t2167t__unsafe_align;
  x1__unsafe_ptr=__t2168t__unsafe_ptr;
  x1__unsafe_size=__t2168t__unsafe_size;
  x1__unsafe_offset=__t2168t__unsafe_offset;
  x1__unsafe_align=__t2168t__unsafe_align;
  __t2169t=3;
  __t_errcode=slice__t949t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2169t,&__t2170t__unsafe_ptr,&__t2170t__unsafe_size,&__t2170t__unsafe_offset,&__t2170t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2171t__unsafe_ptr=__t2170t__unsafe_ptr;
  __t2171t__unsafe_size=__t2170t__unsafe_size;
  __t2171t__unsafe_offset=__t2170t__unsafe_offset;
  __t2171t__unsafe_align=__t2170t__unsafe_align;
  x2__unsafe_ptr=__t2171t__unsafe_ptr;
  x2__unsafe_size=__t2171t__unsafe_size;
  x2__unsafe_offset=__t2171t__unsafe_offset;
  x2__unsafe_align=__t2171t__unsafe_align;
  __t2172t=3;
  __t_errcode=slice__t949t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2172t,&__t2173t__unsafe_ptr,&__t2173t__unsafe_size,&__t2173t__unsafe_offset,&__t2173t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2174t__unsafe_ptr=__t2173t__unsafe_ptr;
  __t2174t__unsafe_size=__t2173t__unsafe_size;
  __t2174t__unsafe_offset=__t2173t__unsafe_offset;
  __t2174t__unsafe_align=__t2173t__unsafe_align;
  x3__unsafe_ptr=__t2174t__unsafe_ptr;
  x3__unsafe_size=__t2174t__unsafe_size;
  x3__unsafe_offset=__t2174t__unsafe_offset;
  x3__unsafe_align=__t2174t__unsafe_align;
  __t2175t=0;
  __t_errcode=mutget__t817t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2175t,&__t2177t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2178t=0;
  if(!__t2177t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2177t__,&__t2178t,8);
  __t2179t=1;
  __t_errcode=mutget__t817t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2179t,&__t2181t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2182t=1;
  if(!__t2181t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2181t__,&__t2182t,8);
  __t2183t=2;
  __t_errcode=mutget__t817t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2183t,&__t2185t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2186t=2;
  if(!__t2185t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2185t__,&__t2186t,8);
  __t2187t=0;
  __t_errcode=mutget__t817t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2187t,&__t2189t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2190t=3;
  if(!__t2189t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2189t__,&__t2190t,8);
  __t2191t=1;
  __t_errcode=mutget__t817t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2191t,&__t2193t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2194t=4;
  if(!__t2193t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2193t__,&__t2194t,8);
  __t2195t=2;
  __t_errcode=mutget__t817t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2195t,&__t2197t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2198t=5;
  if(!__t2197t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2197t__,&__t2198t,8);
  __t2199t=0;
  __t_errcode=mutget__t817t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2199t,&__t2201t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2202t=6;
  if(!__t2201t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2201t__,&__t2202t,8);
  __t2203t=1;
  __t_errcode=mutget__t817t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2203t,&__t2205t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2206t=7;
  if(!__t2205t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2205t__,&__t2206t,8);
  __t2207t=2;
  __t_errcode=mutget__t817t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2207t,&__t2209t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2210t=8;
  if(!__t2209t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2209t__,&__t2210t,8);
  __t2211t=2;
  __t_errcode=get__t824t(x1__unsafe_ptr,x1__unsafe_size,x1__unsafe_offset,x1__unsafe_align,__t2211t,&__t2213t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2213t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2214t__value,__t2213t__,8);
  print__t407t(__t2214t__value);
  __t2216t=2;
  __t_errcode=get__t824t(x2__unsafe_ptr,x2__unsafe_size,x2__unsafe_offset,x2__unsafe_align,__t2216t,&__t2218t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2218t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2219t__value,__t2218t__,8);
  print__t407t(__t2219t__value);
  __t2221t=2;
  __t_errcode=get__t824t(x3__unsafe_ptr,x3__unsafe_size,x3__unsafe_offset,x3__unsafe_align,__t2221t,&__t2223t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2223t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2224t__value,__t2223t__,8);
  print__t407t(__t2224t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t2162t__unsafe_ptr,&__t2163t____t706t__);
  if(__t2163t____t706t__){
  free__t675t(&__t2162t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2155t();return 0;}