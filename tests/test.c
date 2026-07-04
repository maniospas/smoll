#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t391t="\n";
const char* const __t2263t="pair__t2239t";
const char* const __t2275t="pair";
static const char* __t_all_errcodes[40] = {"noerr",
"error",
"null pointer",
"assertion error",
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
"does not match",
"empty input name",
"cannot tag a structural type",
"tag surface cannot be structural type"
};

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2292t, uint64_t* __t2293t, uint16_t* __t2294t, uint16_t* __t2295t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2292t=unsafe_ptr;
  *__t2293t=unsafe_size;
  *__t2294t=unsafe_offset;
  *__t2295t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t600t(char* x, char* __t2296t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2296t=z;
}

static inline __attribute__((always_inline)) void free__t670t(char** __t2297t) {
  char* allocated=*__t2297t;
  if(allocated){
  free(allocated);
  }
  *__t2297t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2298t) {
  int value=0;
  *__t2298t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2299t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2299t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2300t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2300t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2301t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2301t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2302t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2302t=z;
}

static inline __attribute__((always_inline)) void nat__t674t(uint16_t x, uint64_t* __t2303t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2303t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2304t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2304t=z;
}

static inline __attribute__((always_inline)) void zero__t671t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2305t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2305t=z;
}

static inline __attribute__((always_inline)) int alloc__t663t(uint64_t bytes, char** __t2306t) {
  char* allocated=0;
  char __t664t__=0;
  char __t665t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t600t(allocated,&__t664t__);
  not__t36t(__t664t__,&__t665t__);
  if(__t665t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2306t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t699t(char** __t2307t, uint64_t* __t2308t, uint16_t* __t2309t, uint16_t* __t2310t, uint64_t size, char** __t2311t, uint64_t* __t2312t, uint16_t* __t2313t, uint16_t* __t2314t) {
  char* buffer__unsafe_ptr=*__t2307t;
  uint64_t buffer__unsafe_size=*__t2308t;
  uint16_t buffer__unsafe_offset=*__t2309t;
  uint16_t buffer__unsafe_align=*__t2310t;
  int __t700t=0;
  char __t701t__=0;
  char __t703t__=0;
  uint64_t __t704t=0;
  char __t705t__=0;
  uint64_t __t706t=0;
  uint64_t __t707t__=0;
  uint64_t __t708t__=0;
  uint64_t __t710t=0;
  char __t711t__=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t bytes=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  char* __t716t__=0;
  int __t717t=0;
  uint64_t __t718t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t128t(buffer__unsafe_size,size,&__t703t__);
  if(__t703t__){
  __t704t=0;
  neq__t152t(size,__t704t,&__t705t__);
  if(__t705t__){
  __t706t=0;
  nat__t674t(buffer__unsafe_align,&__t707t__);
  mul__t207t(__t707t__,size,&__t708t__);
  zero__t671t(buffer__unsafe_ptr,__t706t,__t708t__);
  }
  goto __t_return;
  }
  __t710t=0;
  neq__t152t(buffer__unsafe_size,__t710t,&__t711t__);
  if(__t711t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t674t(buffer__unsafe_align,&__t712t__);
  mul__t207t(__t712t__,size,&__t713t__);
  bytes=__t713t__;
  __t714t=0;
  eq__t128t(bytes,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t663t(bytes,&__t716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t718t=0;
  zero__t671t(__t716t__,__t718t,bytes);
  buffer__unsafe_ptr=__t716t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t600t(buffer__unsafe_ptr,&__t701t__);
  if(__t701t__){
  free__t670t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2307t=buffer__unsafe_ptr;
  *__t2308t=buffer__unsafe_size;
  *__t2309t=buffer__unsafe_offset;
  *__t2310t=buffer__unsafe_align;
  *__t2311t=buffer__unsafe_ptr;
  *__t2312t=buffer__unsafe_size;
  *__t2313t=buffer__unsafe_offset;
  *__t2314t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t762t(uint64_t size, char** __t2315t, uint64_t* __t2316t, uint16_t* __t2317t, uint16_t* __t2318t) {
  char* __t765t__unsafe_ptr=0;
  uint64_t __t765t__unsafe_size=0;
  uint16_t __t765t__unsafe_offset=0;
  uint16_t __t765t__unsafe_align=0;
  char* __t766t__unsafe_ptr=0;
  uint64_t __t766t__unsafe_size=0;
  uint16_t __t766t__unsafe_offset=0;
  uint16_t __t766t__unsafe_align=0;
  char __t767t____t701t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t763t(&__t765t__unsafe_ptr,&__t765t__unsafe_size,&__t765t__unsafe_offset,&__t765t__unsafe_align);
  __t_errcode=alloc__t699t(&__t765t__unsafe_ptr,&__t765t__unsafe_size,&__t765t__unsafe_offset,&__t765t__unsafe_align,size,&__t766t__unsafe_ptr,&__t766t__unsafe_size,&__t766t__unsafe_offset,&__t766t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t600t(__t766t__unsafe_ptr,&__t767t____t701t__);
  if(__t767t____t701t__){
  free__t670t(&__t766t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2315t=__t766t__unsafe_ptr;
  *__t2316t=__t766t__unsafe_size;
  *__t2317t=__t766t__unsafe_offset;
  *__t2318t=__t766t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t2319t, uint64_t* __t2320t, uint16_t* __t2321t, uint16_t* __t2322t, uint64_t _pos, char** __t2323t, uint64_t* __t2324t, uint16_t* __t2325t, uint16_t* __t2326t, uint64_t* __t2327t) {
  char* buf__unsafe_ptr=*__t2319t;
  uint64_t buf__unsafe_size=*__t2320t;
  uint16_t buf__unsafe_offset=*__t2321t;
  uint16_t buf__unsafe_align=*__t2322t;
  uint64_t __t832t=0;
  uint64_t pos=0;
  __t832t=_pos;
  pos=__t832t;
  goto __t_return;
  __t_return:
  *__t2319t=buf__unsafe_ptr;
  *__t2320t=buf__unsafe_size;
  *__t2321t=buf__unsafe_offset;
  *__t2322t=buf__unsafe_align;
  *__t2323t=buf__unsafe_ptr;
  *__t2324t=buf__unsafe_size;
  *__t2325t=buf__unsafe_offset;
  *__t2326t=buf__unsafe_align;
  *__t2327t=pos;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t2328t, uint64_t* __t2329t, uint16_t* __t2330t, uint16_t* __t2331t, char** __t2332t, uint64_t* __t2333t, uint16_t* __t2334t, uint16_t* __t2335t, uint64_t* __t2336t) {
  char* buf__unsafe_ptr=*__t2328t;
  uint64_t buf__unsafe_size=*__t2329t;
  uint16_t buf__unsafe_offset=*__t2330t;
  uint16_t buf__unsafe_align=*__t2331t;
  uint64_t __t835t=0;
  char* __t836t__buf__unsafe_ptr=0;
  uint64_t __t836t__buf__unsafe_size=0;
  uint16_t __t836t__buf__unsafe_offset=0;
  uint16_t __t836t__buf__unsafe_align=0;
  uint64_t __t836t__pos=0;
  __t835t=0;
  arena__t831t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t835t,&__t836t__buf__unsafe_ptr,&__t836t__buf__unsafe_size,&__t836t__buf__unsafe_offset,&__t836t__buf__unsafe_align,&__t836t__pos);
  goto __t_return;
  __t_return:
  *__t2328t=buf__unsafe_ptr;
  *__t2329t=buf__unsafe_size;
  *__t2330t=buf__unsafe_offset;
  *__t2331t=buf__unsafe_align;
  *__t2332t=__t836t__buf__unsafe_ptr;
  *__t2333t=__t836t__buf__unsafe_size;
  *__t2334t=__t836t__buf__unsafe_offset;
  *__t2335t=__t836t__buf__unsafe_align;
  *__t2336t=__t836t__pos;
}

static inline __attribute__((always_inline)) void pair__t2239t(double x, double y, double* __t2337t, double* __t2338t) {
  goto __t_return;
  __t_return:
  *__t2337t=x;
  *__t2338t=y;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2339t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2339t=z;
}

static inline __attribute__((always_inline)) void len__t826t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2340t) {
  goto __t_return;
  __t_return:
  *__t2340t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2341t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2341t=z;
}

static inline __attribute__((always_inline)) void allocated__t837t(char** __t2342t, uint64_t* __t2343t, uint16_t* __t2344t, uint16_t* __t2345t, uint64_t pos, char** __t2346t, uint64_t* __t2347t, uint16_t* __t2348t, uint16_t* __t2349t, uint64_t* __t2350t) {
  char* buf__unsafe_ptr=*__t2342t;
  uint64_t buf__unsafe_size=*__t2343t;
  uint16_t buf__unsafe_offset=*__t2344t;
  uint16_t buf__unsafe_align=*__t2345t;
  goto __t_return;
  __t_return:
  *__t2342t=buf__unsafe_ptr;
  *__t2343t=buf__unsafe_size;
  *__t2344t=buf__unsafe_offset;
  *__t2345t=buf__unsafe_align;
  *__t2346t=buf__unsafe_ptr;
  *__t2347t=buf__unsafe_size;
  *__t2348t=buf__unsafe_offset;
  *__t2349t=buf__unsafe_align;
  *__t2350t=pos;
}

static inline __attribute__((always_inline)) int alloc__t869t(char** __t2351t, uint64_t* __t2352t, uint16_t* __t2353t, uint16_t* __t2354t, uint64_t* __t2355t, uint64_t length, char** __t2356t, uint64_t* __t2357t, uint16_t* __t2358t, uint16_t* __t2359t, uint64_t* __t2360t) {
  char* allocator__buf__unsafe_ptr=*__t2351t;
  uint64_t allocator__buf__unsafe_size=*__t2352t;
  uint16_t allocator__buf__unsafe_offset=*__t2353t;
  uint16_t allocator__buf__unsafe_align=*__t2354t;
  uint64_t allocator__pos=*__t2355t;
  int __t870t=0;
  uint64_t __t871t__=0;
  uint64_t next_pos=0;
  uint64_t __t872t__=0;
  char __t873t__=0;
  uint64_t __t874t=0;
  uint64_t __t875t__=0;
  uint64_t pos=0;
  char* __t876t__buf__unsafe_ptr=0;
  uint64_t __t876t__buf__unsafe_size=0;
  uint16_t __t876t__buf__unsafe_offset=0;
  uint16_t __t876t__buf__unsafe_align=0;
  uint64_t __t876t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t183t(allocator__pos,length,&__t871t__);
  next_pos=__t871t__;
  len__t826t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t872t__);
  gt__t284t(next_pos,__t872t__,&__t873t__);
  if(__t873t__){
  __t_errcode=17;
  goto __t_failure;
  }
  __t874t=0;
  add__t183t(allocator__pos,__t874t,&__t875t__);
  pos=__t875t__;
  allocator__pos=next_pos;
  allocated__t837t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t876t__buf__unsafe_ptr,&__t876t__buf__unsafe_size,&__t876t__buf__unsafe_offset,&__t876t__buf__unsafe_align,&__t876t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2351t=allocator__buf__unsafe_ptr;
  *__t2352t=allocator__buf__unsafe_size;
  *__t2353t=allocator__buf__unsafe_offset;
  *__t2354t=allocator__buf__unsafe_align;
  *__t2355t=allocator__pos;
  *__t2356t=__t876t__buf__unsafe_ptr;
  *__t2357t=__t876t__buf__unsafe_size;
  *__t2358t=__t876t__buf__unsafe_offset;
  *__t2359t=__t876t__buf__unsafe_align;
  *__t2360t=__t876t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2361t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2361t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2362t) {
  *__t2362t=to;
}

static inline __attribute__((always_inline)) void add__t672t(char* allocated, uint64_t offset, char** __t2363t) {
  char* element=0;
  char* __t673t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t673t__);
  goto __t_return;
  __t_return:
  *__t2363t=__t673t__;
}

static inline __attribute__((always_inline)) int mutget__t812t(char** __t2364t, uint64_t* __t2365t, uint16_t* __t2366t, uint16_t* __t2367t, uint64_t i, char** __t2368t) {
  char* buffer__unsafe_ptr=*__t2364t;
  uint64_t buffer__unsafe_size=*__t2365t;
  uint16_t buffer__unsafe_offset=*__t2366t;
  uint16_t buffer__unsafe_align=*__t2367t;
  char __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t __t815t__=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  char* __t818t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t813t__);
  if(__t813t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t674t(buffer__unsafe_align,&__t814t__);
  mul__t207t(i,__t814t__,&__t815t__);
  nat__t674t(buffer__unsafe_offset,&__t816t__);
  add__t183t(__t815t__,__t816t__,&__t817t__);
  add__t672t(buffer__unsafe_ptr,__t817t__,&__t818t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2364t=buffer__unsafe_ptr;
  *__t2365t=buffer__unsafe_size;
  *__t2366t=buffer__unsafe_offset;
  *__t2367t=buffer__unsafe_align;
  *__t2368t=__t818t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int tagged_alloc__t2153t(char** __t2369t, uint64_t* __t2370t, uint16_t* __t2371t, uint16_t* __t2372t, uint64_t* __t2373t, uint64_t size, char** __t2374t) {
  char* arena__buf__unsafe_ptr=*__t2369t;
  uint64_t arena__buf__unsafe_size=*__t2370t;
  uint16_t arena__buf__unsafe_offset=*__t2371t;
  uint16_t arena__buf__unsafe_align=*__t2372t;
  uint64_t arena__pos=*__t2373t;
  char* __t2154t__buf__unsafe_ptr=0;
  uint64_t __t2154t__buf__unsafe_size=0;
  uint16_t __t2154t__buf__unsafe_offset=0;
  uint16_t __t2154t__buf__unsafe_align=0;
  uint64_t __t2154t__pos=0;
  char* __t2155t__buf__unsafe_ptr=0;
  uint64_t __t2155t__buf__unsafe_size=0;
  uint16_t __t2155t__buf__unsafe_offset=0;
  uint16_t __t2155t__buf__unsafe_align=0;
  uint64_t __t2155t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint16_t allocated__buf__unsafe_offset=0;
  uint16_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t2157t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t869t(&arena__buf__unsafe_ptr,&arena__buf__unsafe_size,&arena__buf__unsafe_offset,&arena__buf__unsafe_align,&arena__pos,size,&__t2154t__buf__unsafe_ptr,&__t2154t__buf__unsafe_size,&__t2154t__buf__unsafe_offset,&__t2154t__buf__unsafe_align,&__t2154t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2155t__buf__unsafe_ptr=__t2154t__buf__unsafe_ptr;
  __t2155t__buf__unsafe_size=__t2154t__buf__unsafe_size;
  __t2155t__buf__unsafe_offset=__t2154t__buf__unsafe_offset;
  __t2155t__buf__unsafe_align=__t2154t__buf__unsafe_align;
  __t2155t__pos=__t2154t__pos;
  allocated__buf__unsafe_ptr=__t2155t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t2155t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t2155t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t2155t__buf__unsafe_align;
  allocated__pos=__t2155t__pos;
  __t_errcode=mutget__t812t(&allocated__buf__unsafe_ptr,&allocated__buf__unsafe_size,&allocated__buf__unsafe_offset,&allocated__buf__unsafe_align,allocated__pos,&__t2157t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2369t=arena__buf__unsafe_ptr;
  *__t2370t=arena__buf__unsafe_size;
  *__t2371t=arena__buf__unsafe_offset;
  *__t2372t=arena__buf__unsafe_align;
  *__t2373t=arena__pos;
  *__t2374t=__t2157t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void tagged__t2136t(const char* value, const char** __t2375t) {
  goto __t_return;
  __t_return:
  *__t2375t=value;
}

static inline __attribute__((always_inline)) void tagged____t_buffer____buffer__t2265t(char** __t2376t, uint64_t* __t2377t, uint16_t* __t2378t, uint16_t* __t2379t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2376t=unsafe_ptr;
  *__t2377t=unsafe_size;
  *__t2378t=unsafe_offset;
  *__t2379t=unsafe_align;
}

static inline __attribute__((always_inline)) void pair____t_buffer____buffer__t2276t(char** __t2380t, uint64_t* __t2381t, uint16_t* __t2382t, uint16_t* __t2383t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=16;
  *__t2380t=unsafe_ptr;
  *__t2381t=unsafe_size;
  *__t2382t=unsafe_offset;
  *__t2383t=unsafe_align;
}

static inline __attribute__((always_inline)) void cstr____t_buffer____buffer__t2139t(char** __t2384t, uint64_t* __t2385t, uint16_t* __t2386t, uint16_t* __t2387t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2384t=unsafe_ptr;
  *__t2385t=unsafe_size;
  *__t2386t=unsafe_offset;
  *__t2387t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1106t(const char* x, const char* y, char* __t2388t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2388t=z;
}

static inline __attribute__((always_inline)) void neq__t1135t(const char* x, const char* y, char* __t2389t) {
  char __t1136t__=0;
  char __t1137t__=0;
  eq__t1106t(x,y,&__t1136t__);
  not__t36t(__t1136t__,&__t1137t__);
  goto __t_return;
  __t_return:
  *__t2389t=__t1137t__;
}

static inline __attribute__((always_inline)) int unsafe_match__t2138t(char* obj, const char* name, char* type, char** __t2390t) {
  char* __t2141t__unsafe_ptr=0;
  uint64_t __t2141t__unsafe_size=0;
  uint16_t __t2141t__unsafe_offset=0;
  uint16_t __t2141t__unsafe_align=0;
  const char* __t2142t__value=0;
  const char* found=0;
  char __t2143t__=0;
  uint64_t __t2147t=0;
  char* __t2148t__=0;
  char* __t2149t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  cstr____t_buffer____buffer__t2139t(&__t2141t__unsafe_ptr,&__t2141t__unsafe_size,&__t2141t__unsafe_offset,&__t2141t__unsafe_align);
  if(!obj){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2142t__value,obj,8);
  found=__t2142t__value;
  neq__t1135t(found,name,&__t2143t__);
  if(__t2143t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t2147t=8;
  add__t672t(obj,__t2147t,&__t2148t__);
  unsafe_attach_type__t28t(__t2148t__,type,&__t2149t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2390t=__t2149t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t394t(double value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2241t() {
  uint64_t __t2244t=0;
  char* __t2245t__unsafe_ptr=0;
  uint64_t __t2245t__unsafe_size=0;
  uint16_t __t2245t__unsafe_offset=0;
  uint16_t __t2245t__unsafe_align=0;
  char __t2246t____t767t____t701t__=0;
  char* __t2247t__buf__unsafe_ptr=0;
  uint64_t __t2247t__buf__unsafe_size=0;
  uint16_t __t2247t__buf__unsafe_offset=0;
  uint16_t __t2247t__buf__unsafe_align=0;
  uint64_t __t2247t__pos=0;
  char* __t2248t__buf__unsafe_ptr=0;
  uint64_t __t2248t__buf__unsafe_size=0;
  uint16_t __t2248t__buf__unsafe_offset=0;
  uint16_t __t2248t__buf__unsafe_align=0;
  uint64_t __t2248t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  double __t2250t=0;
  double __t2251t=0;
  double __t2252t__x=0;
  double __t2252t__y=0;
  uint64_t __t2254t=0;
  uint64_t __t2255t=0;
  uint64_t __t2256t__=0;
  char* __t2257t__=0;
  const char* __t2264t__value=0;
  char* __t2267t__unsafe_ptr=0;
  uint64_t __t2267t__unsafe_size=0;
  uint16_t __t2267t__unsafe_offset=0;
  uint16_t __t2267t__unsafe_align=0;
  char* __t2268t__=0;
  char* __t2269t=0;
  char* obj=0;
  char __t2270t=0;
  char* __t2278t__unsafe_ptr=0;
  uint64_t __t2278t__unsafe_size=0;
  uint16_t __t2278t__unsafe_offset=0;
  uint16_t __t2278t__unsafe_align=0;
  char* __t2279t__=0;
  char* __t2280t=0;
  char* p=0;
  char* __t2282t=0;
  double __t2283t=0;
  char* __t2285t=0;
  double __t2286t__=0;
  char* __t2289t=0;
  double __t2290t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  __t2244t=1024;
  __t_errcode=alloc__t762t(__t2244t,&__t2245t__unsafe_ptr,&__t2245t__unsafe_size,&__t2245t__unsafe_offset,&__t2245t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t834t(&__t2245t__unsafe_ptr,&__t2245t__unsafe_size,&__t2245t__unsafe_offset,&__t2245t__unsafe_align,&__t2247t__buf__unsafe_ptr,&__t2247t__buf__unsafe_size,&__t2247t__buf__unsafe_offset,&__t2247t__buf__unsafe_align,&__t2247t__pos);
  __t2248t__buf__unsafe_ptr=__t2247t__buf__unsafe_ptr;
  __t2248t__buf__unsafe_size=__t2247t__buf__unsafe_size;
  __t2248t__buf__unsafe_offset=__t2247t__buf__unsafe_offset;
  __t2248t__buf__unsafe_align=__t2247t__buf__unsafe_align;
  __t2248t__pos=__t2247t__pos;
  CHARS__buf__unsafe_ptr=__t2248t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2248t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2248t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2248t__buf__unsafe_align;
  CHARS__pos=__t2248t__pos;
  __t2250t=1.0;
  __t2251t=2.0;
  pair__t2239t(__t2250t,__t2251t,&__t2252t__x,&__t2252t__y);
  __t2254t=8;
  __t2255t=16;
  add__t183t(__t2254t,__t2255t,&__t2256t__);
  __t_errcode=tagged_alloc__t2153t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2256t__,&__t2257t__);
  if(__t_errcode){
  goto __t_failure;
  }
  tagged__t2136t(__t2263t,&__t2264t__value);
  if(!__t2257t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2257t__,&__t2264t__value,8);
  memcpy(__t2257t__+8,&__t2252t__x,8);
  memcpy(__t2257t__+16,&__t2252t__y,8);
  tagged____t_buffer____buffer__t2265t(&__t2267t__unsafe_ptr,&__t2267t__unsafe_size,&__t2267t__unsafe_offset,&__t2267t__unsafe_align);
  unsafe_attach_type__t28t(__t2257t__,__t2267t__unsafe_ptr,&__t2268t__);
  __t2269t=__t2268t__;
  obj=__t2269t;
  pair____t_buffer____buffer__t2276t(&__t2278t__unsafe_ptr,&__t2278t__unsafe_size,&__t2278t__unsafe_offset,&__t2278t__unsafe_align);
  __t_complain=unsafe_match__t2138t(obj,__t2263t,__t2278t__unsafe_ptr,&__t2279t__);
  __t2270t=__t_complain;
  __t2280t=__t2279t__;
  p=__t2280t;
  __t2270t=__t2270t==0;
  if(__t2270t){
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2282t=p+0;
  __t2283t=3.0;
  if(!__t2282t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2282t,&__t2283t,8);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2285t=p+0;
  if(!__t2285t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2286t__,__t2285t,8);
  print__t394t(__t2286t__);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2289t=p+8;
  if(!__t2289t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2290t__,__t2289t,8);
  print__t394t(__t2290t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t600t(__t2245t__unsafe_ptr,&__t2246t____t767t____t701t__);
  if(__t2246t____t767t____t701t__){
  free__t670t(&__t2245t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2241t();return 0;}