#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
const char* const __t2295t="pair";
const char* const __t2283t="pair__t2255t";
static const char* __t_all_errcodes[39] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
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
"invalid float conversion from string without a value after the dot",
"does not match",
"empty input name",
"cannot tag a structural type",
"tag surface cannot be structural type"
};

static inline __attribute__((always_inline)) void console__t375t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t768t(char** __t2309t, uint64_t* __t2310t, uint16_t* __t2311t, uint16_t* __t2312t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2309t=unsafe_ptr;
  *__t2310t=unsafe_size;
  *__t2311t=unsafe_offset;
  *__t2312t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2313t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2313t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2314t) {
  char* allocated=*__t2314t;
  if(allocated){
  free(allocated);
  }
  *__t2314t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2315t) {
  int value=0;
  *__t2315t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2316t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2316t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2317t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t2317t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t2318t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2318t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t2319t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2319t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2320t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2320t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t2321t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2321t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t2322t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2322t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2323t) {
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
  *__t2323t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2324t, uint64_t* __t2325t, uint16_t* __t2326t, uint16_t* __t2327t, uint64_t size, char** __t2328t, uint64_t* __t2329t, uint16_t* __t2330t, uint16_t* __t2331t) {
  char* buffer__unsafe_ptr=*__t2324t;
  uint64_t buffer__unsafe_size=*__t2325t;
  uint16_t buffer__unsafe_offset=*__t2326t;
  uint16_t buffer__unsafe_align=*__t2327t;
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
  *__t2324t=buffer__unsafe_ptr;
  *__t2325t=buffer__unsafe_size;
  *__t2326t=buffer__unsafe_offset;
  *__t2327t=buffer__unsafe_align;
  *__t2328t=buffer__unsafe_ptr;
  *__t2329t=buffer__unsafe_size;
  *__t2330t=buffer__unsafe_offset;
  *__t2331t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t767t(uint64_t size, char** __t2332t, uint64_t* __t2333t, uint16_t* __t2334t, uint16_t* __t2335t) {
  char* __t770t__unsafe_ptr=0;
  uint64_t __t770t__unsafe_size=0;
  uint16_t __t770t__unsafe_offset=0;
  uint16_t __t770t__unsafe_align=0;
  char* __t771t__unsafe_ptr=0;
  uint64_t __t771t__unsafe_size=0;
  uint16_t __t771t__unsafe_offset=0;
  uint16_t __t771t__unsafe_align=0;
  char __t772t____t706t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t768t(&__t770t__unsafe_ptr,&__t770t__unsafe_size,&__t770t__unsafe_offset,&__t770t__unsafe_align);
  __t_errcode=alloc__t704t(&__t770t__unsafe_ptr,&__t770t__unsafe_size,&__t770t__unsafe_offset,&__t770t__unsafe_align,size,&__t771t__unsafe_ptr,&__t771t__unsafe_size,&__t771t__unsafe_offset,&__t771t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t771t__unsafe_ptr,&__t772t____t706t__);
  if(__t772t____t706t__){
  free__t675t(&__t771t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2332t=__t771t__unsafe_ptr;
  *__t2333t=__t771t__unsafe_size;
  *__t2334t=__t771t__unsafe_offset;
  *__t2335t=__t771t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t836t(char** __t2336t, uint64_t* __t2337t, uint16_t* __t2338t, uint16_t* __t2339t, uint64_t _pos, char** __t2340t, uint64_t* __t2341t, uint16_t* __t2342t, uint16_t* __t2343t, uint64_t* __t2344t) {
  char* buf__unsafe_ptr=*__t2336t;
  uint64_t buf__unsafe_size=*__t2337t;
  uint16_t buf__unsafe_offset=*__t2338t;
  uint16_t buf__unsafe_align=*__t2339t;
  uint64_t __t837t=0;
  uint64_t pos=0;
  __t837t=_pos;
  pos=__t837t;
  goto __t_return;
  __t_return:
  *__t2336t=buf__unsafe_ptr;
  *__t2337t=buf__unsafe_size;
  *__t2338t=buf__unsafe_offset;
  *__t2339t=buf__unsafe_align;
  *__t2340t=buf__unsafe_ptr;
  *__t2341t=buf__unsafe_size;
  *__t2342t=buf__unsafe_offset;
  *__t2343t=buf__unsafe_align;
  *__t2344t=pos;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2345t, uint64_t* __t2346t, uint16_t* __t2347t, uint16_t* __t2348t, char** __t2349t, uint64_t* __t2350t, uint16_t* __t2351t, uint16_t* __t2352t, uint64_t* __t2353t) {
  char* buf__unsafe_ptr=*__t2345t;
  uint64_t buf__unsafe_size=*__t2346t;
  uint16_t buf__unsafe_offset=*__t2347t;
  uint16_t buf__unsafe_align=*__t2348t;
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
  *__t2345t=buf__unsafe_ptr;
  *__t2346t=buf__unsafe_size;
  *__t2347t=buf__unsafe_offset;
  *__t2348t=buf__unsafe_align;
  *__t2349t=__t841t__buf__unsafe_ptr;
  *__t2350t=__t841t__buf__unsafe_size;
  *__t2351t=__t841t__buf__unsafe_offset;
  *__t2352t=__t841t__buf__unsafe_align;
  *__t2353t=__t841t__pos;
}

static inline __attribute__((always_inline)) void pair__t2255t(double* __t2354t, double* __t2355t, double* __t2356t, double* __t2357t) {
  double x=*__t2354t;
  double y=*__t2355t;
  goto __t_return;
  __t_return:
  *__t2354t=x;
  *__t2355t=y;
  *__t2356t=x;
  *__t2357t=y;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t2358t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2358t=z;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2359t) {
  goto __t_return;
  __t_return:
  *__t2359t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t285t(uint64_t x, uint64_t y, char* __t2360t) {
  int __t286t__=0;
  char z=0;
  is_different__t104t(x,y,&__t286t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2360t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t2361t, uint64_t* __t2362t, uint16_t* __t2363t, uint16_t* __t2364t, uint64_t pos, char** __t2365t, uint64_t* __t2366t, uint16_t* __t2367t, uint16_t* __t2368t, uint64_t* __t2369t) {
  char* buf__unsafe_ptr=*__t2361t;
  uint64_t buf__unsafe_size=*__t2362t;
  uint16_t buf__unsafe_offset=*__t2363t;
  uint16_t buf__unsafe_align=*__t2364t;
  goto __t_return;
  __t_return:
  *__t2361t=buf__unsafe_ptr;
  *__t2362t=buf__unsafe_size;
  *__t2363t=buf__unsafe_offset;
  *__t2364t=buf__unsafe_align;
  *__t2365t=buf__unsafe_ptr;
  *__t2366t=buf__unsafe_size;
  *__t2367t=buf__unsafe_offset;
  *__t2368t=buf__unsafe_align;
  *__t2369t=pos;
}

static inline __attribute__((always_inline)) int alloc__t874t(char** __t2370t, uint64_t* __t2371t, uint16_t* __t2372t, uint16_t* __t2373t, uint64_t* __t2374t, uint64_t length, char** __t2375t, uint64_t* __t2376t, uint16_t* __t2377t, uint16_t* __t2378t, uint64_t* __t2379t) {
  char* allocator__buf__unsafe_ptr=*__t2370t;
  uint64_t allocator__buf__unsafe_size=*__t2371t;
  uint16_t allocator__buf__unsafe_offset=*__t2372t;
  uint16_t allocator__buf__unsafe_align=*__t2373t;
  uint64_t allocator__pos=*__t2374t;
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
  *__t2370t=allocator__buf__unsafe_ptr;
  *__t2371t=allocator__buf__unsafe_size;
  *__t2372t=allocator__buf__unsafe_offset;
  *__t2373t=allocator__buf__unsafe_align;
  *__t2374t=allocator__pos;
  *__t2375t=__t881t__buf__unsafe_ptr;
  *__t2376t=__t881t__buf__unsafe_size;
  *__t2377t=__t881t__buf__unsafe_offset;
  *__t2378t=__t881t__buf__unsafe_align;
  *__t2379t=__t881t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t2380t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2380t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2381t) {
  *__t2381t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2382t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2382t=__t678t__;
}

static inline __attribute__((always_inline)) int mutget__t817t(char** __t2383t, uint64_t* __t2384t, uint16_t* __t2385t, uint16_t* __t2386t, uint64_t i, char** __t2387t) {
  char* buffer__unsafe_ptr=*__t2383t;
  uint64_t buffer__unsafe_size=*__t2384t;
  uint16_t buffer__unsafe_offset=*__t2385t;
  uint16_t buffer__unsafe_align=*__t2386t;
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
  *__t2383t=buffer__unsafe_ptr;
  *__t2384t=buffer__unsafe_size;
  *__t2385t=buffer__unsafe_offset;
  *__t2386t=buffer__unsafe_align;
  *__t2387t=__t823t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int tagged_alloc__t2169t(char** __t2388t, uint64_t* __t2389t, uint16_t* __t2390t, uint16_t* __t2391t, uint64_t* __t2392t, uint64_t size, char** __t2393t) {
  char* arena__buf__unsafe_ptr=*__t2388t;
  uint64_t arena__buf__unsafe_size=*__t2389t;
  uint16_t arena__buf__unsafe_offset=*__t2390t;
  uint16_t arena__buf__unsafe_align=*__t2391t;
  uint64_t arena__pos=*__t2392t;
  char* __t2170t__buf__unsafe_ptr=0;
  uint64_t __t2170t__buf__unsafe_size=0;
  uint16_t __t2170t__buf__unsafe_offset=0;
  uint16_t __t2170t__buf__unsafe_align=0;
  uint64_t __t2170t__pos=0;
  char* __t2171t__buf__unsafe_ptr=0;
  uint64_t __t2171t__buf__unsafe_size=0;
  uint16_t __t2171t__buf__unsafe_offset=0;
  uint16_t __t2171t__buf__unsafe_align=0;
  uint64_t __t2171t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint16_t allocated__buf__unsafe_offset=0;
  uint16_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t2173t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t874t(&arena__buf__unsafe_ptr,&arena__buf__unsafe_size,&arena__buf__unsafe_offset,&arena__buf__unsafe_align,&arena__pos,size,&__t2170t__buf__unsafe_ptr,&__t2170t__buf__unsafe_size,&__t2170t__buf__unsafe_offset,&__t2170t__buf__unsafe_align,&__t2170t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2171t__buf__unsafe_ptr=__t2170t__buf__unsafe_ptr;
  __t2171t__buf__unsafe_size=__t2170t__buf__unsafe_size;
  __t2171t__buf__unsafe_offset=__t2170t__buf__unsafe_offset;
  __t2171t__buf__unsafe_align=__t2170t__buf__unsafe_align;
  __t2171t__pos=__t2170t__pos;
  allocated__buf__unsafe_ptr=__t2171t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t2171t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t2171t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t2171t__buf__unsafe_align;
  allocated__pos=__t2171t__pos;
  __t_errcode=mutget__t817t(&allocated__buf__unsafe_ptr,&allocated__buf__unsafe_size,&allocated__buf__unsafe_offset,&allocated__buf__unsafe_align,allocated__pos,&__t2173t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2388t=arena__buf__unsafe_ptr;
  *__t2389t=arena__buf__unsafe_size;
  *__t2390t=arena__buf__unsafe_offset;
  *__t2391t=arena__buf__unsafe_align;
  *__t2392t=arena__pos;
  *__t2393t=__t2173t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void tagged__t2154t(const char* value, const char** __t2394t) {
  goto __t_return;
  __t_return:
  *__t2394t=value;
}

static inline __attribute__((always_inline)) void tagged____t_buffer____buffer__t2285t(char** __t2395t, uint64_t* __t2396t, uint16_t* __t2397t, uint16_t* __t2398t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2395t=unsafe_ptr;
  *__t2396t=unsafe_size;
  *__t2397t=unsafe_offset;
  *__t2398t=unsafe_align;
}

static inline __attribute__((always_inline)) void pair____t_buffer____buffer__t2296t(char** __t2399t, uint64_t* __t2400t, uint16_t* __t2401t, uint16_t* __t2402t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=16;
  *__t2399t=unsafe_ptr;
  *__t2400t=unsafe_size;
  *__t2401t=unsafe_offset;
  *__t2402t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1123t(const char* x, const char* y, char* __t2403t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2403t=z;
}

static inline __attribute__((always_inline)) void neq__t1152t(const char* x, const char* y, char* __t2404t) {
  char __t1153t__=0;
  char __t1154t__=0;
  eq__t1123t(x,y,&__t1153t__);
  not__t37t(__t1153t__,&__t1154t__);
  goto __t_return;
  __t_return:
  *__t2404t=__t1154t__;
}

static inline __attribute__((always_inline)) int unsafe_match__t2156t(char* obj, const char* name, char* type, char** __t2405t) {
  char* value=0;
  const char* __t2158t__value=0;
  const char* found=0;
  char __t2159t__=0;
  uint64_t __t2163t=0;
  char* __t2164t__=0;
  char* __t2165t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj){
  __t_errcode=2;
  goto __t_failure;
  }
  value=obj+0;
  if(!value){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2158t__value,value,8);
  found=__t2158t__value;
  neq__t1152t(found,name,&__t2159t__);
  if(__t2159t__){
  __t_errcode=35;
  goto __t_failure;
  }
  __t2163t=8;
  add__t677t(obj,__t2163t,&__t2164t__);
  unsafe_attach_type__t28t(__t2164t__,type,&__t2165t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2405t=__t2165t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t399t(double value) {
  const char* endl=0;
  endl=__t396t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2257t() {
  uint64_t __t2260t=0;
  char* __t2261t__unsafe_ptr=0;
  uint64_t __t2261t__unsafe_size=0;
  uint16_t __t2261t__unsafe_offset=0;
  uint16_t __t2261t__unsafe_align=0;
  char __t2262t____t772t____t706t__=0;
  char* __t2263t__buf__unsafe_ptr=0;
  uint64_t __t2263t__buf__unsafe_size=0;
  uint16_t __t2263t__buf__unsafe_offset=0;
  uint16_t __t2263t__buf__unsafe_align=0;
  uint64_t __t2263t__pos=0;
  char* __t2264t__buf__unsafe_ptr=0;
  uint64_t __t2264t__buf__unsafe_size=0;
  uint16_t __t2264t__buf__unsafe_offset=0;
  uint16_t __t2264t__buf__unsafe_align=0;
  uint64_t __t2264t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  double __t2266t=0;
  double __t2267t=0;
  double __t2268t=0;
  double __t2269t=0;
  double __t2270t=0;
  double __t2271t=0;
  double __t2272t__x=0;
  double __t2272t__y=0;
  uint64_t __t2274t=0;
  uint64_t __t2275t=0;
  uint64_t __t2276t__=0;
  char* __t2277t__=0;
  const char* __t2284t__value=0;
  char* __t2287t__unsafe_ptr=0;
  uint64_t __t2287t__unsafe_size=0;
  uint16_t __t2287t__unsafe_offset=0;
  uint16_t __t2287t__unsafe_align=0;
  char* __t2288t__=0;
  char* __t2289t=0;
  char* obj=0;
  char __t2290t=0;
  char* __t2298t__unsafe_ptr=0;
  uint64_t __t2298t__unsafe_size=0;
  uint16_t __t2298t__unsafe_offset=0;
  uint16_t __t2298t__unsafe_align=0;
  char* __t2299t__=0;
  char* __t2300t=0;
  char* p=0;
  char* x=0;
  double __t2302t=0;
  double __t2304t__x=0;
  char* y=0;
  double __t2307t__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t375t();
  __t2260t=1024;
  __t_errcode=alloc__t767t(__t2260t,&__t2261t__unsafe_ptr,&__t2261t__unsafe_size,&__t2261t__unsafe_offset,&__t2261t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t839t(&__t2261t__unsafe_ptr,&__t2261t__unsafe_size,&__t2261t__unsafe_offset,&__t2261t__unsafe_align,&__t2263t__buf__unsafe_ptr,&__t2263t__buf__unsafe_size,&__t2263t__buf__unsafe_offset,&__t2263t__buf__unsafe_align,&__t2263t__pos);
  __t2264t__buf__unsafe_ptr=__t2263t__buf__unsafe_ptr;
  __t2264t__buf__unsafe_size=__t2263t__buf__unsafe_size;
  __t2264t__buf__unsafe_offset=__t2263t__buf__unsafe_offset;
  __t2264t__buf__unsafe_align=__t2263t__buf__unsafe_align;
  __t2264t__pos=__t2263t__pos;
  CHARS__buf__unsafe_ptr=__t2264t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2264t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2264t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2264t__buf__unsafe_align;
  CHARS__pos=__t2264t__pos;
  __t2266t=1.0;
  __t2267t=__t2266t;
  __t2268t=__t2267t;
  __t2269t=2.0;
  __t2270t=__t2269t;
  __t2271t=__t2270t;
  pair__t2255t(&__t2268t,&__t2271t,&__t2272t__x,&__t2272t__y);
  __t2274t=8;
  __t2275t=16;
  add__t184t(__t2274t,__t2275t,&__t2276t__);
  __t_errcode=tagged_alloc__t2169t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2276t__,&__t2277t__);
  if(__t_errcode){
  goto __t_failure;
  }
  tagged__t2154t(__t2283t,&__t2284t__value);
  if(!__t2277t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2277t__,&__t2284t__value,8);
  memcpy(__t2277t__+8,&__t2272t__x,8);
  memcpy(__t2277t__+16,&__t2272t__y,8);
  tagged____t_buffer____buffer__t2285t(&__t2287t__unsafe_ptr,&__t2287t__unsafe_size,&__t2287t__unsafe_offset,&__t2287t__unsafe_align);
  unsafe_attach_type__t28t(__t2277t__,__t2287t__unsafe_ptr,&__t2288t__);
  __t2289t=__t2288t__;
  obj=__t2289t;
  pair____t_buffer____buffer__t2296t(&__t2298t__unsafe_ptr,&__t2298t__unsafe_size,&__t2298t__unsafe_offset,&__t2298t__unsafe_align);
  __t_complain=unsafe_match__t2156t(obj,__t2283t,__t2298t__unsafe_ptr,&__t2299t__);
  __t2290t=__t_complain;
  __t2300t=__t2299t__;
  p=__t2300t;
  __t2290t=__t2290t==0;
  if(__t2290t){
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  x=p+0;
  __t2302t=3.0;
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(x,&__t2302t,8);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  x=p+0;
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2304t__x,x,8);
  print__t399t(__t2304t__x);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  y=p+8;
  if(!y){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2307t__y,y,8);
  print__t399t(__t2307t__y);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t2261t__unsafe_ptr,&__t2262t____t772t____t706t__);
  if(__t2262t____t772t____t706t__){
  free__t675t(&__t2261t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2257t();return 0;}