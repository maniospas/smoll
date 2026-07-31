#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2235t="consumed at end of test5: ";
const char* const __t386t="";
const char* const __t2199t="test";
const char* const __t2200t="2";
const char* const __t2254t="consumed after test5: ";
const char* const __t2250t="consumed after test1: ";
const char* const __t398t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t377t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t770t(char** __t2258t, uint64_t* __t2259t, uint16_t* __t2260t, uint16_t* __t2261t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2258t=unsafe_ptr;
  *__t2259t=unsafe_size;
  *__t2260t=unsafe_offset;
  *__t2261t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t607t(char* x, char* __t2262t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2262t=z;
}

static inline __attribute__((always_inline)) void free__t677t(char** __t2263t) {
  char* allocated=*__t2263t;
  if(allocated){
  free(allocated);
  }
  *__t2263t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2264t) {
  int value=0;
  *__t2264t=value;
}

static inline __attribute__((always_inline)) void not__t48t(int __t_anon0, int* __t2265t) {
  int __t49t__=0;
  false__t14t(&__t49t__);
  goto __t_return;
  __t_return:
  *__t2265t=__t49t__;
}

static inline __attribute__((always_inline)) void is_different__t106t(uint64_t x, uint64_t y, int* __t2266t) {
  int __t107t=0;
  int __t108t__=0;
  not__t48t(__t107t,&__t108t__);
  goto __t_return;
  __t_return:
  *__t2266t=__t108t__;
}

static inline __attribute__((always_inline)) void eq__t131t(uint64_t x, uint64_t y, char* __t2267t) {
  int __t132t__=0;
  char z=0;
  is_different__t106t(x,y,&__t132t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2267t=z;
}

static inline __attribute__((always_inline)) void neq__t155t(uint64_t x, uint64_t y, char* __t2268t) {
  int __t156t__=0;
  char z=0;
  is_different__t106t(x,y,&__t156t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2268t=z;
}

static inline __attribute__((always_inline)) void nat__t681t(uint16_t x, uint64_t* __t2269t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2269t=value;
}

static inline __attribute__((always_inline)) void mul__t210t(uint64_t x, uint64_t y, uint64_t* __t2270t) {
  int __t211t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t211t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2270t=z;
}

static inline __attribute__((always_inline)) void zero__t678t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t39t(char value, char* __t2271t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2271t=z;
}

static inline __attribute__((always_inline)) int alloc__t670t(uint64_t bytes, char** __t2272t) {
  char* allocated=0;
  char __t671t__=0;
  char __t672t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t607t(allocated,&__t671t__);
  not__t39t(__t671t__,&__t672t__);
  if(__t672t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2272t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t706t(char** __t2273t, uint64_t* __t2274t, uint16_t* __t2275t, uint16_t* __t2276t, uint64_t size, char** __t2277t, uint64_t* __t2278t, uint16_t* __t2279t, uint16_t* __t2280t) {
  char* buffer__unsafe_ptr=*__t2273t;
  uint64_t buffer__unsafe_size=*__t2274t;
  uint16_t buffer__unsafe_offset=*__t2275t;
  uint16_t buffer__unsafe_align=*__t2276t;
  int __t707t=0;
  char __t708t__=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  char __t712t__=0;
  uint64_t __t713t=0;
  uint64_t __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t __t717t=0;
  char __t718t__=0;
  uint64_t __t719t__=0;
  uint64_t __t720t__=0;
  uint64_t bytes=0;
  uint64_t __t721t=0;
  char __t722t__=0;
  char* __t723t__=0;
  int __t724t=0;
  uint64_t __t725t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t131t(buffer__unsafe_size,size,&__t710t__);
  if(__t710t__){
  __t711t=0;
  neq__t155t(size,__t711t,&__t712t__);
  if(__t712t__){
  __t713t=0;
  nat__t681t(buffer__unsafe_align,&__t714t__);
  mul__t210t(__t714t__,size,&__t715t__);
  zero__t678t(buffer__unsafe_ptr,__t713t,__t715t__);
  }
  goto __t_return;
  }
  __t717t=0;
  neq__t155t(buffer__unsafe_size,__t717t,&__t718t__);
  if(__t718t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t681t(buffer__unsafe_align,&__t719t__);
  mul__t210t(__t719t__,size,&__t720t__);
  bytes=__t720t__;
  __t721t=0;
  eq__t131t(bytes,__t721t,&__t722t__);
  if(__t722t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t670t(bytes,&__t723t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t725t=0;
  zero__t678t(__t723t__,__t725t,bytes);
  buffer__unsafe_ptr=__t723t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t607t(buffer__unsafe_ptr,&__t708t__);
  if(__t708t__){
  free__t677t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2273t=buffer__unsafe_ptr;
  *__t2274t=buffer__unsafe_size;
  *__t2275t=buffer__unsafe_offset;
  *__t2276t=buffer__unsafe_align;
  *__t2277t=buffer__unsafe_ptr;
  *__t2278t=buffer__unsafe_size;
  *__t2279t=buffer__unsafe_offset;
  *__t2280t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t769t(uint64_t size, char** __t2281t, uint64_t* __t2282t, uint16_t* __t2283t, uint16_t* __t2284t) {
  char* __t772t__unsafe_ptr=0;
  uint64_t __t772t__unsafe_size=0;
  uint16_t __t772t__unsafe_offset=0;
  uint16_t __t772t__unsafe_align=0;
  char* __t773t__unsafe_ptr=0;
  uint64_t __t773t__unsafe_size=0;
  uint16_t __t773t__unsafe_offset=0;
  uint16_t __t773t__unsafe_align=0;
  char __t774t____t708t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t770t(&__t772t__unsafe_ptr,&__t772t__unsafe_size,&__t772t__unsafe_offset,&__t772t__unsafe_align);
  __t_errcode=alloc__t706t(&__t772t__unsafe_ptr,&__t772t__unsafe_size,&__t772t__unsafe_offset,&__t772t__unsafe_align,size,&__t773t__unsafe_ptr,&__t773t__unsafe_size,&__t773t__unsafe_offset,&__t773t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t607t(__t773t__unsafe_ptr,&__t774t____t708t__);
  if(__t774t____t708t__){
  free__t677t(&__t773t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2281t=__t773t__unsafe_ptr;
  *__t2282t=__t773t__unsafe_size;
  *__t2283t=__t773t__unsafe_offset;
  *__t2284t=__t773t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t828t(char** __t2285t, uint64_t* __t2286t, uint16_t* __t2287t, uint16_t* __t2288t, uint64_t _pos, char** __t2289t, uint64_t* __t2290t, uint16_t* __t2291t, uint16_t* __t2292t, uint64_t* __t2293t) {
  char* buf__unsafe_ptr=*__t2285t;
  uint64_t buf__unsafe_size=*__t2286t;
  uint16_t buf__unsafe_offset=*__t2287t;
  uint16_t buf__unsafe_align=*__t2288t;
  uint64_t __t829t=0;
  uint64_t pos=0;
  __t829t=_pos;
  pos=__t829t;
  goto __t_return;
  __t_return:
  *__t2285t=buf__unsafe_ptr;
  *__t2286t=buf__unsafe_size;
  *__t2287t=buf__unsafe_offset;
  *__t2288t=buf__unsafe_align;
  *__t2289t=buf__unsafe_ptr;
  *__t2290t=buf__unsafe_size;
  *__t2291t=buf__unsafe_offset;
  *__t2292t=buf__unsafe_align;
  *__t2293t=pos;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t2294t, uint64_t* __t2295t, uint16_t* __t2296t, uint16_t* __t2297t, char** __t2298t, uint64_t* __t2299t, uint16_t* __t2300t, uint16_t* __t2301t, uint64_t* __t2302t) {
  char* buf__unsafe_ptr=*__t2294t;
  uint64_t buf__unsafe_size=*__t2295t;
  uint16_t buf__unsafe_offset=*__t2296t;
  uint16_t buf__unsafe_align=*__t2297t;
  uint64_t __t832t=0;
  char* __t833t__buf__unsafe_ptr=0;
  uint64_t __t833t__buf__unsafe_size=0;
  uint16_t __t833t__buf__unsafe_offset=0;
  uint16_t __t833t__buf__unsafe_align=0;
  uint64_t __t833t__pos=0;
  __t832t=0;
  arena__t828t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t832t,&__t833t__buf__unsafe_ptr,&__t833t__buf__unsafe_size,&__t833t__buf__unsafe_offset,&__t833t__buf__unsafe_align,&__t833t__pos);
  goto __t_return;
  __t_return:
  *__t2294t=buf__unsafe_ptr;
  *__t2295t=buf__unsafe_size;
  *__t2296t=buf__unsafe_offset;
  *__t2297t=buf__unsafe_align;
  *__t2298t=__t833t__buf__unsafe_ptr;
  *__t2299t=__t833t__buf__unsafe_size;
  *__t2300t=__t833t__buf__unsafe_offset;
  *__t2301t=__t833t__buf__unsafe_align;
  *__t2302t=__t833t__pos;
}

static inline __attribute__((always_inline)) void gc__t834t(char** __t2303t, uint64_t* __t2304t, uint16_t* __t2305t, uint16_t* __t2306t, uint64_t* __t2307t) {
  char* arn__buf__unsafe_ptr=*__t2303t;
  uint64_t arn__buf__unsafe_size=*__t2304t;
  uint16_t arn__buf__unsafe_offset=*__t2305t;
  uint16_t arn__buf__unsafe_align=*__t2306t;
  uint64_t arn__pos=*__t2307t;
  uint64_t tracked_position=0;
  tracked_position=arn__pos;
  *__t2303t=arn__buf__unsafe_ptr;
  *__t2304t=arn__buf__unsafe_size;
  *__t2305t=arn__buf__unsafe_offset;
  *__t2306t=arn__buf__unsafe_align;
  *__t2307t=arn__pos;
  arn__pos=tracked_position;
}

static inline __attribute__((always_inline)) void add__t186t(uint64_t x, uint64_t y, uint64_t* __t2308t) {
  int __t187t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t187t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2308t=z;
}

static inline __attribute__((always_inline)) void len__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2309t) {
  goto __t_return;
  __t_return:
  *__t2309t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t287t(uint64_t x, uint64_t y, char* __t2310t) {
  int __t288t__=0;
  char z=0;
  is_different__t106t(x,y,&__t288t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2310t=z;
}

static inline __attribute__((always_inline)) void allocated__t836t(char** __t2311t, uint64_t* __t2312t, uint16_t* __t2313t, uint16_t* __t2314t, uint64_t pos, char** __t2315t, uint64_t* __t2316t, uint16_t* __t2317t, uint16_t* __t2318t, uint64_t* __t2319t) {
  char* buf__unsafe_ptr=*__t2311t;
  uint64_t buf__unsafe_size=*__t2312t;
  uint16_t buf__unsafe_offset=*__t2313t;
  uint16_t buf__unsafe_align=*__t2314t;
  goto __t_return;
  __t_return:
  *__t2311t=buf__unsafe_ptr;
  *__t2312t=buf__unsafe_size;
  *__t2313t=buf__unsafe_offset;
  *__t2314t=buf__unsafe_align;
  *__t2315t=buf__unsafe_ptr;
  *__t2316t=buf__unsafe_size;
  *__t2317t=buf__unsafe_offset;
  *__t2318t=buf__unsafe_align;
  *__t2319t=pos;
}

static inline __attribute__((always_inline)) int alloc__t876t(char** __t2320t, uint64_t* __t2321t, uint16_t* __t2322t, uint16_t* __t2323t, uint64_t* __t2324t, uint64_t length, char** __t2325t, uint64_t* __t2326t, uint16_t* __t2327t, uint16_t* __t2328t, uint64_t* __t2329t) {
  char* allocator__buf__unsafe_ptr=*__t2320t;
  uint64_t allocator__buf__unsafe_size=*__t2321t;
  uint16_t allocator__buf__unsafe_offset=*__t2322t;
  uint16_t allocator__buf__unsafe_align=*__t2323t;
  uint64_t allocator__pos=*__t2324t;
  int __t877t=0;
  uint64_t __t878t__=0;
  uint64_t next_pos=0;
  uint64_t __t879t__=0;
  char __t880t__=0;
  uint64_t __t881t=0;
  uint64_t __t882t__=0;
  uint64_t pos=0;
  char* __t883t__buf__unsafe_ptr=0;
  uint64_t __t883t__buf__unsafe_size=0;
  uint16_t __t883t__buf__unsafe_offset=0;
  uint16_t __t883t__buf__unsafe_align=0;
  uint64_t __t883t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t186t(allocator__pos,length,&__t878t__);
  next_pos=__t878t__;
  len__t823t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t879t__);
  gt__t287t(next_pos,__t879t__,&__t880t__);
  if(__t880t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t881t=0;
  add__t186t(allocator__pos,__t881t,&__t882t__);
  pos=__t882t__;
  allocator__pos=next_pos;
  allocated__t836t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t883t__buf__unsafe_ptr,&__t883t__buf__unsafe_size,&__t883t__buf__unsafe_offset,&__t883t__buf__unsafe_align,&__t883t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2320t=allocator__buf__unsafe_ptr;
  *__t2321t=allocator__buf__unsafe_size;
  *__t2322t=allocator__buf__unsafe_offset;
  *__t2323t=allocator__buf__unsafe_align;
  *__t2324t=allocator__pos;
  *__t2325t=__t883t__buf__unsafe_ptr;
  *__t2326t=__t883t__buf__unsafe_size;
  *__t2327t=__t883t__buf__unsafe_offset;
  *__t2328t=__t883t__buf__unsafe_align;
  *__t2329t=__t883t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat16__t950t(uint64_t x, uint16_t* __t2330t) {
  uint16_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2330t=value;
}

static inline __attribute__((always_inline)) int slice__t951t(char** __t2331t, uint64_t* __t2332t, uint16_t* __t2333t, uint16_t* __t2334t, uint64_t* __t2335t, uint64_t length, char** __t2336t, uint64_t* __t2337t, uint16_t* __t2338t, uint16_t* __t2339t) {
  char* surface__buf__unsafe_ptr=*__t2331t;
  uint64_t surface__buf__unsafe_size=*__t2332t;
  uint16_t surface__buf__unsafe_offset=*__t2333t;
  uint16_t surface__buf__unsafe_align=*__t2334t;
  uint64_t surface__pos=*__t2335t;
  char* __t952t__buf__unsafe_ptr=0;
  uint64_t __t952t__buf__unsafe_size=0;
  uint16_t __t952t__buf__unsafe_offset=0;
  uint16_t __t952t__buf__unsafe_align=0;
  uint64_t __t952t__pos=0;
  char* __t953t__buf__unsafe_ptr=0;
  uint64_t __t953t__buf__unsafe_size=0;
  uint16_t __t953t__buf__unsafe_offset=0;
  uint16_t __t953t__buf__unsafe_align=0;
  uint64_t __t953t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint16_t allocated__buf__unsafe_offset=0;
  uint16_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t954t__unsafe_ptr=0;
  uint64_t __t954t__unsafe_size=0;
  uint16_t __t954t__unsafe_offset=0;
  uint16_t __t954t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  uint64_t __t957t__=0;
  uint64_t __t958t__=0;
  uint16_t __t959t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t876t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,length,&__t952t__buf__unsafe_ptr,&__t952t__buf__unsafe_size,&__t952t__buf__unsafe_offset,&__t952t__buf__unsafe_align,&__t952t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t953t__buf__unsafe_ptr=__t952t__buf__unsafe_ptr;
  __t953t__buf__unsafe_size=__t952t__buf__unsafe_size;
  __t953t__buf__unsafe_offset=__t952t__buf__unsafe_offset;
  __t953t__buf__unsafe_align=__t952t__buf__unsafe_align;
  __t953t__pos=__t952t__pos;
  allocated__buf__unsafe_ptr=__t953t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t953t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t953t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t953t__buf__unsafe_align;
  allocated__pos=__t953t__pos;
  __t954t__unsafe_ptr=allocated__buf__unsafe_ptr;
  __t954t__unsafe_size=allocated__buf__unsafe_size;
  __t954t__unsafe_offset=allocated__buf__unsafe_offset;
  __t954t__unsafe_align=allocated__buf__unsafe_align;
  buf__unsafe_ptr=__t954t__unsafe_ptr;
  buf__unsafe_size=__t954t__unsafe_size;
  buf__unsafe_offset=__t954t__unsafe_offset;
  buf__unsafe_align=__t954t__unsafe_align;
  buf__unsafe_size=length;
  nat__t681t(buf__unsafe_offset,&__t955t__);
  nat__t681t(buf__unsafe_align,&__t956t__);
  mul__t210t(__t956t__,allocated__pos,&__t957t__);
  add__t186t(__t955t__,__t957t__,&__t958t__);
  nat16__t950t(__t958t__,&__t959t__);
  buf__unsafe_offset=__t959t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2331t=surface__buf__unsafe_ptr;
  *__t2332t=surface__buf__unsafe_size;
  *__t2333t=surface__buf__unsafe_offset;
  *__t2334t=surface__buf__unsafe_align;
  *__t2335t=surface__pos;
  *__t2336t=buf__unsafe_ptr;
  *__t2337t=buf__unsafe_size;
  *__t2338t=buf__unsafe_offset;
  *__t2339t=buf__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t2189t(char** __t2340t, uint64_t* __t2341t, uint16_t* __t2342t, uint16_t* __t2343t, uint64_t* __t2344t) {
  char* arn__buf__unsafe_ptr=*__t2340t;
  uint64_t arn__buf__unsafe_size=*__t2341t;
  uint16_t arn__buf__unsafe_offset=*__t2342t;
  uint16_t arn__buf__unsafe_align=*__t2343t;
  uint64_t arn__pos=*__t2344t;
  uint64_t __t2191t=0;
  char* __t2192t__unsafe_ptr=0;
  uint64_t __t2192t__unsafe_size=0;
  uint16_t __t2192t__unsafe_offset=0;
  uint16_t __t2192t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  gc__t834t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  __t2191t=5;
  __t_errcode=slice__t951t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,__t2191t,&__t2192t__unsafe_ptr,&__t2192t__unsafe_size,&__t2192t__unsafe_offset,&__t2192t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;*__t2340t=arn__buf__unsafe_ptr;
  *__t2341t=arn__buf__unsafe_size;
  *__t2342t=arn__buf__unsafe_offset;
  *__t2343t=arn__buf__unsafe_align;
  *__t2344t=arn__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t409t(uint64_t value) {
  int __t410t=0;
  const char* endl=0;
  endl=__t398t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t385t(const char* value, const char** __t2345t, const char** __t2346t) {
  const char* __t387t=0;
  __t387t=__t386t;
  goto __t_return;
  __t_return:
  *__t2345t=value;
  *__t2346t=__t387t;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value, const char* endl) {
  int __t395t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t964t(char** __t2347t, uint64_t* __t2348t, uint16_t* __t2349t, uint16_t* __t2350t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2347t=unsafe_ptr;
  *__t2348t=unsafe_size;
  *__t2349t=unsafe_offset;
  *__t2350t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2351t) {
  *__t2351t=to;
}

static inline __attribute__((always_inline)) void ge__t335t(uint64_t x, uint64_t y, char* __t2352t) {
  int __t336t__=0;
  char z=0;
  is_different__t106t(x,y,&__t336t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2352t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2353t) {
  *__t2353t=to;
}

static inline __attribute__((always_inline)) void add__t679t(char* allocated, uint64_t offset, char** __t2354t) {
  char* element=0;
  char* __t680t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t680t__);
  goto __t_return;
  __t_return:
  *__t2354t=__t680t__;
}

static inline __attribute__((always_inline)) int get__t816t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2355t) {
  char __t817t__=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  char* __t822t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t335t(i,buffer__unsafe_size,&__t817t__);
  if(__t817t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t681t(buffer__unsafe_align,&__t818t__);
  mul__t210t(i,__t818t__,&__t819t__);
  nat__t681t(buffer__unsafe_offset,&__t820t__);
  add__t186t(__t819t__,__t820t__,&__t821t__);
  add__t679t(buffer__unsafe_ptr,__t821t__,&__t822t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2355t=__t822t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t986t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2356t, uint64_t* __t2357t, uint64_t* __t2358t, char* __t2359t) {
  goto __t_return;
  __t_return:
  *__t2356t=unsafe_ptr;
  *__t2357t=dat__pos;
  *__t2358t=dat__length;
  *__t2359t=dat__first;
}

static inline __attribute__((always_inline)) int str__t990t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2360t, uint64_t* __t2361t, uint64_t* __t2362t, char* __t2363t) {
  char* unsafe_ptr=0;
  uint64_t __t991t__=0;
  uint64_t __t992t=0;
  char __t993t__=0;
  uint64_t __t994t__=0;
  uint64_t __t995t=0;
  char __t996t__=0;
  char* __t997t__unsafe_ptr=0;
  uint64_t __t997t__dat__pos=0;
  uint64_t __t997t__dat__length=0;
  char __t997t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t681t(buf__unsafe_align,&__t991t__);
  __t992t=1;
  neq__t155t(__t991t__,__t992t,&__t993t__);
  if(__t993t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t681t(buf__unsafe_offset,&__t994t__);
  __t995t=0;
  neq__t155t(__t994t__,__t995t,&__t996t__);
  if(__t996t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t986t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t997t__unsafe_ptr,&__t997t__dat__pos,&__t997t__dat__length,&__t997t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2360t=__t997t__unsafe_ptr;
  *__t2361t=__t997t__dat__pos;
  *__t2362t=__t997t__dat__length;
  *__t2363t=__t997t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1024t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2364t, uint64_t* __t2365t, uint64_t* __t2366t, char* __t2367t) {
  uint64_t __t1025t=0;
  char __t1026t__=0;
  char* __t1028t__=0;
  char __t1029t__value=0;
  char first=0;
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__dat__pos=0;
  uint64_t __t1030t__dat__length=0;
  char __t1030t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1025t=0;
  neq__t155t(length,__t1025t,&__t1026t__);
  if(__t1026t__){
  __t_errcode=get__t816t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1028t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1028t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1029t__value,__t1028t__,1);
  first=__t1029t__value;
  }
  __t_errcode=str__t990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1030t__unsafe_ptr,&__t1030t__dat__pos,&__t1030t__dat__length,&__t1030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2364t=__t1030t__unsafe_ptr;
  *__t2365t=__t1030t__dat__pos;
  *__t2366t=__t1030t__dat__length;
  *__t2367t=__t1030t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1046t(const char* c, char** __t2368t, uint64_t* __t2369t, uint64_t* __t2370t, char* __t2371t) {
  char* __t1047t__unsafe_ptr=0;
  uint64_t __t1047t__unsafe_size=0;
  uint16_t __t1047t__unsafe_offset=0;
  uint16_t __t1047t__unsafe_align=0;
  char* __t1048t__unsafe_ptr=0;
  uint64_t __t1048t__unsafe_size=0;
  uint16_t __t1048t__unsafe_offset=0;
  uint16_t __t1048t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1049t__=0;
  uint64_t length=0;
  uint64_t __t1050t=0;
  uint64_t __t1051t__=0;
  uint64_t __t1052t=0;
  char* __t1054t__unsafe_ptr=0;
  uint64_t __t1054t__dat__pos=0;
  uint64_t __t1054t__dat__length=0;
  char __t1054t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t964t(&__t1047t__unsafe_ptr,&__t1047t__unsafe_size,&__t1047t__unsafe_offset,&__t1047t__unsafe_align);
  __t1048t__unsafe_ptr=__t1047t__unsafe_ptr;
  __t1048t__unsafe_size=__t1047t__unsafe_size;
  __t1048t__unsafe_offset=__t1047t__unsafe_offset;
  __t1048t__unsafe_align=__t1047t__unsafe_align;
  buf__unsafe_ptr=__t1048t__unsafe_ptr;
  buf__unsafe_size=__t1048t__unsafe_size;
  buf__unsafe_offset=__t1048t__unsafe_offset;
  buf__unsafe_align=__t1048t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1049t__);
  buf__unsafe_ptr=__t1049t__;
  if(c){
  length=strlen(c);
  }
  __t1050t=1;
  add__t186t(length,__t1050t,&__t1051t__);
  buf__unsafe_size=__t1051t__;
  __t1052t=0;
  __t_errcode=str__t1024t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1052t,length,&__t1054t__unsafe_ptr,&__t1054t__dat__pos,&__t1054t__dat__length,&__t1054t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2368t=__t1054t__unsafe_ptr;
  *__t2369t=__t1054t__dat__pos;
  *__t2370t=__t1054t__dat__length;
  *__t2371t=__t1054t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1055t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2372t) {
  goto __t_return;
  __t_return:
  *__t2372t=s__dat__length;
}

static inline __attribute__((always_inline)) void status__t841t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2373t, uint64_t* __t2374t, uint16_t* __t2375t, uint16_t* __t2376t, uint64_t* __t2377t) {
  char* __t842t__unsafe_ptr=0;
  uint64_t __t842t__unsafe_size=0;
  uint16_t __t842t__unsafe_offset=0;
  uint16_t __t842t__unsafe_align=0;
  uint64_t __t843t=0;
  __t842t__unsafe_ptr=self__buf__unsafe_ptr;
  __t842t__unsafe_size=self__buf__unsafe_size;
  __t842t__unsafe_offset=self__buf__unsafe_offset;
  __t842t__unsafe_align=self__buf__unsafe_align;
  __t843t=self__pos;
  goto __t_return;
  __t_return:
  *__t2373t=__t842t__unsafe_ptr;
  *__t2374t=__t842t__unsafe_size;
  *__t2375t=__t842t__unsafe_offset;
  *__t2376t=__t842t__unsafe_align;
  *__t2377t=__t843t;
}

static inline __attribute__((always_inline)) void str__t1023t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2378t, uint64_t* __t2379t, uint64_t* __t2380t, char* __t2381t) {
  goto __t_return;
  __t_return:
  *__t2378t=other__unsafe_ptr;
  *__t2379t=other__dat__pos;
  *__t2380t=other__dat__length;
  *__t2381t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t1072t(char** __t2382t, uint64_t* __t2383t, uint16_t* __t2384t, uint16_t* __t2385t, uint64_t* __t2386t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2387t, uint64_t* __t2388t, uint64_t* __t2389t, char* __t2390t) {
  char* CHARS__buf__unsafe_ptr=*__t2382t;
  uint64_t CHARS__buf__unsafe_size=*__t2383t;
  uint16_t CHARS__buf__unsafe_offset=*__t2384t;
  uint16_t CHARS__buf__unsafe_align=*__t2385t;
  uint64_t CHARS__pos=*__t2386t;
  char* __t1073t__unsafe_ptr=0;
  uint64_t __t1073t__dat__pos=0;
  uint64_t __t1073t__dat__length=0;
  char __t1073t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1074t__=0;
  char* __t1075t__buf__unsafe_ptr=0;
  uint64_t __t1075t__buf__unsafe_size=0;
  uint16_t __t1075t__buf__unsafe_offset=0;
  uint16_t __t1075t__buf__unsafe_align=0;
  uint64_t __t1075t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1076t__unsafe_ptr=0;
  uint64_t __t1076t__dat__pos=0;
  uint64_t __t1076t__dat__length=0;
  char __t1076t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1023t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1073t__unsafe_ptr,&__t1073t__dat__pos,&__t1073t__dat__length,&__t1073t__dat__first);
  other__unsafe_ptr=__t1073t__unsafe_ptr;
  other__dat__pos=__t1073t__dat__pos;
  other__dat__length=__t1073t__dat__length;
  other__dat__first=__t1073t__dat__first;
  len__t1055t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1074t__);
  __t_errcode=alloc__t876t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1074t__,&__t1075t__buf__unsafe_ptr,&__t1075t__buf__unsafe_size,&__t1075t__buf__unsafe_offset,&__t1075t__buf__unsafe_align,&__t1075t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1075t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1075t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1075t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1075t__buf__unsafe_align;
  surface__pos=__t1075t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t990t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1076t__unsafe_ptr,&__t1076t__dat__pos,&__t1076t__dat__length,&__t1076t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2382t=CHARS__buf__unsafe_ptr;
  *__t2383t=CHARS__buf__unsafe_size;
  *__t2384t=CHARS__buf__unsafe_offset;
  *__t2385t=CHARS__buf__unsafe_align;
  *__t2386t=CHARS__pos;
  *__t2387t=__t1076t__unsafe_ptr;
  *__t2388t=__t1076t__dat__pos;
  *__t2389t=__t1076t__dat__length;
  *__t2390t=__t1076t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t838t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2391t, uint64_t* __t2392t, uint16_t* __t2393t, uint16_t* __t2394t, uint64_t* __t2395t) {
  char* __t839t__unsafe_ptr=0;
  uint64_t __t839t__unsafe_size=0;
  uint16_t __t839t__unsafe_offset=0;
  uint16_t __t839t__unsafe_align=0;
  uint64_t __t840t=0;
  __t839t__unsafe_ptr=self__buf__unsafe_ptr;
  __t839t__unsafe_size=self__buf__unsafe_size;
  __t839t__unsafe_offset=self__buf__unsafe_offset;
  __t839t__unsafe_align=self__buf__unsafe_align;
  __t840t=self__pos;
  goto __t_return;
  __t_return:
  *__t2391t=__t839t__unsafe_ptr;
  *__t2392t=__t839t__unsafe_size;
  *__t2393t=__t839t__unsafe_offset;
  *__t2394t=__t839t__unsafe_align;
  *__t2395t=__t840t;
}

static inline __attribute__((always_inline)) void lt__t263t(uint64_t x, uint64_t y, char* __t2396t) {
  int __t264t__=0;
  char z=0;
  is_different__t106t(x,y,&__t264t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2396t=z;
}

static inline __attribute__((always_inline)) int sub__t363t(uint64_t x, uint64_t y, uint64_t* __t2397t) {
  int __t364t__=0;
  int __t365t=0;
  int __t366t=0;
  char __t367t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t106t(x,y,&__t364t__);
  lt__t263t(x,y,&__t367t__);
  if(__t367t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2397t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1042t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2398t, uint64_t* __t2399t, uint64_t* __t2400t, char* __t2401t) {
  uint64_t __t1044t__=0;
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__dat__pos=0;
  uint64_t __t1045t__dat__length=0;
  char __t1045t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t363t(endpos,pos,&__t1044t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1024t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1044t__,&__t1045t__unsafe_ptr,&__t1045t__dat__pos,&__t1045t__dat__length,&__t1045t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2398t=__t1045t__unsafe_ptr;
  *__t2399t=__t1045t__dat__pos;
  *__t2400t=__t1045t__dat__length;
  *__t2401t=__t1045t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1544t(char** __t2402t, uint64_t* __t2403t, uint16_t* __t2404t, uint16_t* __t2405t, uint64_t* __t2406t, const char* _s1, const char* _s2, char** __t2407t, uint64_t* __t2408t, uint64_t* __t2409t, char* __t2410t) {
  char* CHARS__buf__unsafe_ptr=*__t2402t;
  uint64_t CHARS__buf__unsafe_size=*__t2403t;
  uint16_t CHARS__buf__unsafe_offset=*__t2404t;
  uint16_t CHARS__buf__unsafe_align=*__t2405t;
  uint64_t CHARS__pos=*__t2406t;
  char* __t1545t__unsafe_ptr=0;
  uint64_t __t1545t__dat__pos=0;
  uint64_t __t1545t__dat__length=0;
  char __t1545t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1546t__unsafe_ptr=0;
  uint64_t __t1546t__dat__pos=0;
  uint64_t __t1546t__dat__length=0;
  char __t1546t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t1547t__=0;
  uint64_t __t1548t__=0;
  uint64_t __t1549t__=0;
  char* __t1550t__buf__unsafe_ptr=0;
  uint64_t __t1550t__buf__unsafe_size=0;
  uint16_t __t1550t__buf__unsafe_offset=0;
  uint16_t __t1550t__buf__unsafe_align=0;
  uint64_t __t1550t__pos=0;
  char* __t1551t____t842t__unsafe_ptr=0;
  uint64_t __t1551t____t842t__unsafe_size=0;
  uint16_t __t1551t____t842t__unsafe_offset=0;
  uint16_t __t1551t____t842t__unsafe_align=0;
  uint64_t __t1551t____t843t=0;
  char* __t1552t__buf__unsafe_ptr=0;
  uint64_t __t1552t__buf__unsafe_size=0;
  uint16_t __t1552t__buf__unsafe_offset=0;
  uint16_t __t1552t__buf__unsafe_align=0;
  uint64_t __t1552t__pos=0;
  char* __t1553t__buf__unsafe_ptr=0;
  uint64_t __t1553t__buf__unsafe_size=0;
  uint16_t __t1553t__buf__unsafe_offset=0;
  uint16_t __t1553t__buf__unsafe_align=0;
  uint64_t __t1553t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1554t=0;
  uint64_t __t1555t__=0;
  uint64_t start=0;
  char* __t1556t__unsafe_ptr=0;
  uint64_t __t1556t__dat__pos=0;
  uint64_t __t1556t__dat__length=0;
  char __t1556t__dat__first=0;
  char* __t1557t__unsafe_ptr=0;
  uint64_t __t1557t__dat__pos=0;
  uint64_t __t1557t__dat__length=0;
  char __t1557t__dat__first=0;
  char* __t1558t____t839t__unsafe_ptr=0;
  uint64_t __t1558t____t839t__unsafe_size=0;
  uint16_t __t1558t____t839t__unsafe_offset=0;
  uint16_t __t1558t____t839t__unsafe_align=0;
  uint64_t __t1558t____t840t=0;
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__dat__pos=0;
  uint64_t __t1560t__dat__length=0;
  char __t1560t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1046t(_s1,&__t1545t__unsafe_ptr,&__t1545t__dat__pos,&__t1545t__dat__length,&__t1545t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__unsafe_ptr=__t1545t__unsafe_ptr;
  s1__dat__pos=__t1545t__dat__pos;
  s1__dat__length=__t1545t__dat__length;
  s1__dat__first=__t1545t__dat__first;
  __t_errcode=str__t1046t(_s2,&__t1546t__unsafe_ptr,&__t1546t__dat__pos,&__t1546t__dat__length,&__t1546t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1546t__unsafe_ptr;
  s2__dat__pos=__t1546t__dat__pos;
  s2__dat__length=__t1546t__dat__length;
  s2__dat__first=__t1546t__dat__first;
  len__t1055t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1547t__);
  len__t1055t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1548t__);
  add__t186t(__t1547t__,__t1548t__,&__t1549t__);
  __t_errcode=alloc__t876t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1549t__,&__t1550t__buf__unsafe_ptr,&__t1550t__buf__unsafe_size,&__t1550t__buf__unsafe_offset,&__t1550t__buf__unsafe_align,&__t1550t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t841t(__t1550t__buf__unsafe_ptr,__t1550t__buf__unsafe_size,__t1550t__buf__unsafe_offset,__t1550t__buf__unsafe_align,__t1550t__pos,&__t1551t____t842t__unsafe_ptr,&__t1551t____t842t__unsafe_size,&__t1551t____t842t__unsafe_offset,&__t1551t____t842t__unsafe_align,&__t1551t____t843t);
  arena__t828t(&__t1551t____t842t__unsafe_ptr,&__t1551t____t842t__unsafe_size,&__t1551t____t842t__unsafe_offset,&__t1551t____t842t__unsafe_align,__t1551t____t843t,&__t1552t__buf__unsafe_ptr,&__t1552t__buf__unsafe_size,&__t1552t__buf__unsafe_offset,&__t1552t__buf__unsafe_align,&__t1552t__pos);
  __t1553t__buf__unsafe_ptr=__t1552t__buf__unsafe_ptr;
  __t1553t__buf__unsafe_size=__t1552t__buf__unsafe_size;
  __t1553t__buf__unsafe_offset=__t1552t__buf__unsafe_offset;
  __t1553t__buf__unsafe_align=__t1552t__buf__unsafe_align;
  __t1553t__pos=__t1552t__pos;
  surface__buf__unsafe_ptr=__t1553t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1553t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1553t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1553t__buf__unsafe_align;
  surface__pos=__t1553t__pos;
  __t1554t=0;
  add__t186t(surface__pos,__t1554t,&__t1555t__);
  start=__t1555t__;
  __t_errcode=copy__t1072t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1556t__unsafe_ptr,&__t1556t__dat__pos,&__t1556t__dat__length,&__t1556t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1072t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1557t__unsafe_ptr,&__t1557t__dat__pos,&__t1557t__dat__length,&__t1557t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t838t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1558t____t839t__unsafe_ptr,&__t1558t____t839t__unsafe_size,&__t1558t____t839t__unsafe_offset,&__t1558t____t839t__unsafe_align,&__t1558t____t840t);
  __t_errcode=str__t1042t(__t1558t____t839t__unsafe_ptr,__t1558t____t839t__unsafe_size,__t1558t____t839t__unsafe_offset,__t1558t____t839t__unsafe_align,__t1558t____t840t,start,&__t1560t__unsafe_ptr,&__t1560t__dat__pos,&__t1560t__dat__length,&__t1560t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2402t=CHARS__buf__unsafe_ptr;
  *__t2403t=CHARS__buf__unsafe_size;
  *__t2404t=CHARS__buf__unsafe_offset;
  *__t2405t=CHARS__buf__unsafe_align;
  *__t2406t=CHARS__pos;
  *__t2407t=__t1560t__unsafe_ptr;
  *__t2408t=__t1560t__dat__pos;
  *__t2409t=__t1560t__dat__length;
  *__t2410t=__t1560t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2197t(char** __t2411t, uint64_t* __t2412t, uint16_t* __t2413t, uint16_t* __t2414t, uint64_t* __t2415t, char** __t2416t, uint64_t* __t2417t, uint64_t* __t2418t, char* __t2419t) {
  char* CHARS__buf__unsafe_ptr=*__t2411t;
  uint64_t CHARS__buf__unsafe_size=*__t2412t;
  uint16_t CHARS__buf__unsafe_offset=*__t2413t;
  uint16_t CHARS__buf__unsafe_align=*__t2414t;
  uint64_t CHARS__pos=*__t2415t;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__dat__pos=0;
  uint64_t __t2201t__dat__length=0;
  char __t2201t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  gc__t834t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos);
  __t_errcode=add__t1544t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2199t,__t2200t,&__t2201t__unsafe_ptr,&__t2201t__dat__pos,&__t2201t__dat__length,&__t2201t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2411t=CHARS__buf__unsafe_ptr;
  *__t2412t=CHARS__buf__unsafe_size;
  *__t2413t=CHARS__buf__unsafe_offset;
  *__t2414t=CHARS__buf__unsafe_align;
  *__t2415t=CHARS__pos;
  *__t2416t=__t2201t__unsafe_ptr;
  *__t2417t=__t2201t__dat__pos;
  *__t2418t=__t2201t__dat__length;
  *__t2419t=__t2201t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test3__t2206t(char** __t2420t, uint64_t* __t2421t, uint16_t* __t2422t, uint16_t* __t2423t, uint64_t* __t2424t, char** __t2425t, uint64_t* __t2426t, uint64_t* __t2427t, char* __t2428t) {
  char* CHARS__buf__unsafe_ptr=*__t2420t;
  uint64_t CHARS__buf__unsafe_size=*__t2421t;
  uint16_t CHARS__buf__unsafe_offset=*__t2422t;
  uint16_t CHARS__buf__unsafe_align=*__t2423t;
  uint64_t CHARS__pos=*__t2424t;
  char* __t2207t__unsafe_ptr=0;
  uint64_t __t2207t__dat__pos=0;
  uint64_t __t2207t__dat__length=0;
  char __t2207t__dat__first=0;
  char* __t2208t__unsafe_ptr=0;
  uint64_t __t2208t__dat__pos=0;
  uint64_t __t2208t__dat__length=0;
  char __t2208t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t2197t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t2207t__unsafe_ptr,&__t2207t__dat__pos,&__t2207t__dat__length,&__t2207t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1072t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2207t__unsafe_ptr,__t2207t__dat__pos,__t2207t__dat__length,__t2207t__dat__first,&__t2208t__unsafe_ptr,&__t2208t__dat__pos,&__t2208t__dat__length,&__t2208t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2420t=CHARS__buf__unsafe_ptr;
  *__t2421t=CHARS__buf__unsafe_size;
  *__t2422t=CHARS__buf__unsafe_offset;
  *__t2423t=CHARS__buf__unsafe_align;
  *__t2424t=CHARS__pos;
  *__t2425t=__t2208t__unsafe_ptr;
  *__t2426t=__t2208t__dat__pos;
  *__t2427t=__t2208t__dat__length;
  *__t2428t=__t2208t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____buffer__t2216t(char** __t2429t, uint64_t* __t2430t, uint16_t* __t2431t, uint16_t* __t2432t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2429t=unsafe_ptr;
  *__t2430t=unsafe_size;
  *__t2431t=unsafe_offset;
  *__t2432t=unsafe_align;
}

static inline __attribute__((always_inline)) int test4__t2213t(char** __t2433t, uint64_t* __t2434t, uint16_t* __t2435t, uint16_t* __t2436t, uint64_t* __t2437t, char** __t2438t, uint64_t* __t2439t, uint16_t* __t2440t, uint16_t* __t2441t) {
  char* arn__buf__unsafe_ptr=*__t2433t;
  uint64_t arn__buf__unsafe_size=*__t2434t;
  uint16_t arn__buf__unsafe_offset=*__t2435t;
  uint16_t arn__buf__unsafe_align=*__t2436t;
  uint64_t arn__pos=*__t2437t;
  char* __t2215t__unsafe_ptr=0;
  uint64_t __t2215t__dat__pos=0;
  uint64_t __t2215t__dat__length=0;
  char __t2215t__dat__first=0;
  char* __t2218t__unsafe_ptr=0;
  uint64_t __t2218t__unsafe_size=0;
  uint16_t __t2218t__unsafe_offset=0;
  uint16_t __t2218t__unsafe_align=0;
  uint64_t __t2219t=0;
  char* __t2220t__unsafe_ptr=0;
  uint64_t __t2220t__unsafe_size=0;
  uint16_t __t2220t__unsafe_offset=0;
  uint16_t __t2220t__unsafe_align=0;
  char __t2221t____t708t__=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint16_t ret__unsafe_offset=0;
  uint16_t ret__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  gc__t834t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  __t_errcode=test3__t2206t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t2215t__unsafe_ptr,&__t2215t__dat__pos,&__t2215t__dat__length,&__t2215t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str____buffer__t2216t(&__t2218t__unsafe_ptr,&__t2218t__unsafe_size,&__t2218t__unsafe_offset,&__t2218t__unsafe_align);
  __t2219t=1;
  __t_errcode=alloc__t706t(&__t2218t__unsafe_ptr,&__t2218t__unsafe_size,&__t2218t__unsafe_offset,&__t2218t__unsafe_align,__t2219t,&__t2220t__unsafe_ptr,&__t2220t__unsafe_size,&__t2220t__unsafe_offset,&__t2220t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2218t__unsafe_ptr,&__t2215t__unsafe_ptr,8);
  memcpy(__t2218t__unsafe_ptr+8,&__t2215t__dat__pos,8);
  memcpy(__t2218t__unsafe_ptr+16,&__t2215t__dat__length,8);
  memcpy(__t2218t__unsafe_ptr+24,&__t2215t__dat__first,1);
  ret__unsafe_ptr=__t2218t__unsafe_ptr;
  ret__unsafe_size=__t2218t__unsafe_size;
  ret__unsafe_offset=__t2218t__unsafe_offset;
  ret__unsafe_align=__t2218t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t607t(ret__unsafe_ptr,&__t2221t____t708t__);
  if(__t2221t____t708t__){
  free__t677t(&ret__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2433t=arn__buf__unsafe_ptr;
  *__t2434t=arn__buf__unsafe_size;
  *__t2435t=arn__buf__unsafe_offset;
  *__t2436t=arn__buf__unsafe_align;
  *__t2437t=arn__pos;
  *__t2438t=ret__unsafe_ptr;
  *__t2439t=ret__unsafe_size;
  *__t2440t=ret__unsafe_offset;
  *__t2441t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1190t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1191t=0;
  const char* endl=0;
  endl=__t398t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void length__t835t(char* arn__buf__unsafe_ptr, uint64_t arn__buf__unsafe_size, uint16_t arn__buf__unsafe_offset, uint16_t arn__buf__unsafe_align, uint64_t arn__pos, uint64_t* __t2442t) {
  goto __t_return;
  __t_return:
  *__t2442t=arn__pos;
}

static inline __attribute__((always_inline)) int test5__t2226t(char** __t2443t, uint64_t* __t2444t, uint16_t* __t2445t, uint16_t* __t2446t, uint64_t* __t2447t) {
  char* arn__buf__unsafe_ptr=*__t2443t;
  uint64_t arn__buf__unsafe_size=*__t2444t;
  uint16_t arn__buf__unsafe_offset=*__t2445t;
  uint16_t arn__buf__unsafe_align=*__t2446t;
  uint64_t arn__pos=*__t2447t;
  char* __t2228t__unsafe_ptr=0;
  uint64_t __t2228t__unsafe_size=0;
  uint16_t __t2228t__unsafe_offset=0;
  uint16_t __t2228t__unsafe_align=0;
  char __t2229t____t2221t____t708t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t2230t=0;
  char* __t2232t__=0;
  char* z=0;
  char* __t2233t__unsafe_ptr=0;
  uint64_t __t2233t__dat__pos=0;
  uint64_t __t2233t__dat__length=0;
  char __t2233t__dat__first=0;
  const char* __t2236t__value=0;
  const char* __t2236t____t387t=0;
  uint64_t __t2238t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  gc__t834t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  __t_errcode=test4__t2213t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos,&__t2228t__unsafe_ptr,&__t2228t__unsafe_size,&__t2228t__unsafe_offset,&__t2228t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2228t__unsafe_ptr;
  x__unsafe_size=__t2228t__unsafe_size;
  x__unsafe_offset=__t2228t__unsafe_offset;
  x__unsafe_align=__t2228t__unsafe_align;
  __t2230t=0;
  __t_errcode=get__t816t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t2230t,&__t2232t__);
  if(__t_errcode){
  goto __t_failure;
  }
  z=__t2232t__;
  if(!z){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2233t__unsafe_ptr,z,8);
  memcpy(&__t2233t__dat__pos,z+8,8);
  memcpy(&__t2233t__dat__length,z+16,8);
  memcpy(&__t2233t__dat__first,z+24,1);
  print__t1190t(__t2233t__unsafe_ptr,__t2233t__dat__pos,__t2233t__dat__length,__t2233t__dat__first);
  nn__t385t(__t2235t,&__t2236t__value,&__t2236t____t387t);
  print__t394t(__t2236t__value,__t2236t____t387t);
  length__t835t(arn__buf__unsafe_ptr,arn__buf__unsafe_size,arn__buf__unsafe_offset,arn__buf__unsafe_align,arn__pos,&__t2238t__);
  print__t409t(__t2238t__);
  
  __t_failure:
  goto __t_skip_returns;*__t2443t=arn__buf__unsafe_ptr;
  *__t2444t=arn__buf__unsafe_size;
  *__t2445t=arn__buf__unsafe_offset;
  *__t2446t=arn__buf__unsafe_align;
  *__t2447t=arn__pos;
  
  __t_skip_returns:exists__t607t(__t2228t__unsafe_ptr,&__t2229t____t2221t____t708t__);
  if(__t2229t____t2221t____t708t__){
  free__t677t(&__t2228t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2240t() {
  uint64_t __t2243t=0;
  char* __t2244t__unsafe_ptr=0;
  uint64_t __t2244t__unsafe_size=0;
  uint16_t __t2244t__unsafe_offset=0;
  uint16_t __t2244t__unsafe_align=0;
  char __t2245t____t774t____t708t__=0;
  char* __t2246t__buf__unsafe_ptr=0;
  uint64_t __t2246t__buf__unsafe_size=0;
  uint16_t __t2246t__buf__unsafe_offset=0;
  uint16_t __t2246t__buf__unsafe_align=0;
  uint64_t __t2246t__pos=0;
  char* __t2247t__buf__unsafe_ptr=0;
  uint64_t __t2247t__buf__unsafe_size=0;
  uint16_t __t2247t__buf__unsafe_offset=0;
  uint16_t __t2247t__buf__unsafe_align=0;
  uint64_t __t2247t__pos=0;
  char* arn__buf__unsafe_ptr=0;
  uint64_t arn__buf__unsafe_size=0;
  uint16_t arn__buf__unsafe_offset=0;
  uint16_t arn__buf__unsafe_align=0;
  uint64_t arn__pos=0;
  const char* __t2251t__value=0;
  const char* __t2251t____t387t=0;
  const char* __t2255t__value=0;
  const char* __t2255t____t387t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t377t();
  __t2243t=1024;
  __t_errcode=alloc__t769t(__t2243t,&__t2244t__unsafe_ptr,&__t2244t__unsafe_size,&__t2244t__unsafe_offset,&__t2244t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t831t(&__t2244t__unsafe_ptr,&__t2244t__unsafe_size,&__t2244t__unsafe_offset,&__t2244t__unsafe_align,&__t2246t__buf__unsafe_ptr,&__t2246t__buf__unsafe_size,&__t2246t__buf__unsafe_offset,&__t2246t__buf__unsafe_align,&__t2246t__pos);
  __t2247t__buf__unsafe_ptr=__t2246t__buf__unsafe_ptr;
  __t2247t__buf__unsafe_size=__t2246t__buf__unsafe_size;
  __t2247t__buf__unsafe_offset=__t2246t__buf__unsafe_offset;
  __t2247t__buf__unsafe_align=__t2246t__buf__unsafe_align;
  __t2247t__pos=__t2246t__pos;
  arn__buf__unsafe_ptr=__t2247t__buf__unsafe_ptr;
  arn__buf__unsafe_size=__t2247t__buf__unsafe_size;
  arn__buf__unsafe_offset=__t2247t__buf__unsafe_offset;
  arn__buf__unsafe_align=__t2247t__buf__unsafe_align;
  arn__pos=__t2247t__pos;
  __t_errcode=test1__t2189t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t409t(arn__pos);
  nn__t385t(__t2250t,&__t2251t__value,&__t2251t____t387t);
  print__t394t(__t2251t__value,__t2251t____t387t);
  __t_errcode=test5__t2226t(&arn__buf__unsafe_ptr,&arn__buf__unsafe_size,&arn__buf__unsafe_offset,&arn__buf__unsafe_align,&arn__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  nn__t385t(__t2254t,&__t2255t__value,&__t2255t____t387t);
  print__t394t(__t2255t__value,__t2255t____t387t);
  print__t409t(arn__pos);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t607t(__t2244t__unsafe_ptr,&__t2245t____t774t____t708t__);
  if(__t2245t____t774t____t708t__){
  free__t677t(&__t2244t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2240t();return 0;}