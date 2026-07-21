#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t395t="\n";
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

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____t_buffer____buffer__t2156t(char** __t2224t, uint64_t* __t2225t, uint16_t* __t2226t, uint16_t* __t2227t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2224t=unsafe_ptr;
  *__t2225t=unsafe_size;
  *__t2226t=unsafe_offset;
  *__t2227t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2228t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2228t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2229t) {
  char* allocated=*__t2229t;
  if(allocated){
  free(allocated);
  }
  *__t2229t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2230t) {
  int value=0;
  *__t2230t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2231t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2231t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2232t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2232t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2233t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2233t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2234t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2234t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2235t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2235t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2236t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2236t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2237t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2237t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2238t) {
  char* allocated=0;
  char __t668t__=0;
  char __t669t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t604t(allocated,&__t668t__);
  not__t36t(__t668t__,&__t669t__);
  if(__t669t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2238t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2239t, uint64_t* __t2240t, uint16_t* __t2241t, uint16_t* __t2242t, uint64_t size, char** __t2243t, uint64_t* __t2244t, uint16_t* __t2245t, uint16_t* __t2246t) {
  char* buffer__unsafe_ptr=*__t2239t;
  uint64_t buffer__unsafe_size=*__t2240t;
  uint16_t buffer__unsafe_offset=*__t2241t;
  uint16_t buffer__unsafe_align=*__t2242t;
  char __t705t__=0;
  char __t707t__=0;
  uint64_t __t708t=0;
  char __t709t__=0;
  uint64_t __t710t=0;
  uint64_t __t711t__=0;
  uint64_t __t712t__=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t bytes=0;
  uint64_t __t718t=0;
  char __t719t__=0;
  char* __t720t__=0;
  uint64_t __t722t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t128t(buffer__unsafe_size,size,&__t707t__);
  if(__t707t__){
  __t708t=0;
  neq__t152t(size,__t708t,&__t709t__);
  if(__t709t__){
  __t710t=0;
  nat__t678t(buffer__unsafe_align,&__t711t__);
  mul__t207t(__t711t__,size,&__t712t__);
  zero__t675t(buffer__unsafe_ptr,__t710t,__t712t__);
  }
  goto __t_return;
  }
  __t714t=0;
  neq__t152t(buffer__unsafe_size,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t716t__);
  mul__t207t(__t716t__,size,&__t717t__);
  bytes=__t717t__;
  __t718t=0;
  eq__t128t(bytes,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t667t(bytes,&__t720t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t722t=0;
  zero__t675t(__t720t__,__t722t,bytes);
  buffer__unsafe_ptr=__t720t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t604t(buffer__unsafe_ptr,&__t705t__);
  if(__t705t__){
  free__t674t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2239t=buffer__unsafe_ptr;
  *__t2240t=buffer__unsafe_size;
  *__t2241t=buffer__unsafe_offset;
  *__t2242t=buffer__unsafe_align;
  *__t2243t=buffer__unsafe_ptr;
  *__t2244t=buffer__unsafe_size;
  *__t2245t=buffer__unsafe_offset;
  *__t2246t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t835t(char** __t2247t, uint64_t* __t2248t, uint16_t* __t2249t, uint16_t* __t2250t, uint64_t _pos, char** __t2251t, uint64_t* __t2252t, uint16_t* __t2253t, uint16_t* __t2254t, uint64_t* __t2255t) {
  char* buf__unsafe_ptr=*__t2247t;
  uint64_t buf__unsafe_size=*__t2248t;
  uint16_t buf__unsafe_offset=*__t2249t;
  uint16_t buf__unsafe_align=*__t2250t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
  goto __t_return;
  __t_return:
  *__t2247t=buf__unsafe_ptr;
  *__t2248t=buf__unsafe_size;
  *__t2249t=buf__unsafe_offset;
  *__t2250t=buf__unsafe_align;
  *__t2251t=buf__unsafe_ptr;
  *__t2252t=buf__unsafe_size;
  *__t2253t=buf__unsafe_offset;
  *__t2254t=buf__unsafe_align;
  *__t2255t=pos;
}

static inline __attribute__((always_inline)) void arena__t838t(char** __t2256t, uint64_t* __t2257t, uint16_t* __t2258t, uint16_t* __t2259t, char** __t2260t, uint64_t* __t2261t, uint16_t* __t2262t, uint16_t* __t2263t, uint64_t* __t2264t) {
  char* buf__unsafe_ptr=*__t2256t;
  uint64_t buf__unsafe_size=*__t2257t;
  uint16_t buf__unsafe_offset=*__t2258t;
  uint16_t buf__unsafe_align=*__t2259t;
  uint64_t __t839t=0;
  char* __t840t__buf__unsafe_ptr=0;
  uint64_t __t840t__buf__unsafe_size=0;
  uint16_t __t840t__buf__unsafe_offset=0;
  uint16_t __t840t__buf__unsafe_align=0;
  uint64_t __t840t__pos=0;
  __t839t=0;
  arena__t835t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t839t,&__t840t__buf__unsafe_ptr,&__t840t__buf__unsafe_size,&__t840t__buf__unsafe_offset,&__t840t__buf__unsafe_align,&__t840t__pos);
  goto __t_return;
  __t_return:
  *__t2256t=buf__unsafe_ptr;
  *__t2257t=buf__unsafe_size;
  *__t2258t=buf__unsafe_offset;
  *__t2259t=buf__unsafe_align;
  *__t2260t=__t840t__buf__unsafe_ptr;
  *__t2261t=__t840t__buf__unsafe_size;
  *__t2262t=__t840t__buf__unsafe_offset;
  *__t2263t=__t840t__buf__unsafe_align;
  *__t2264t=__t840t__pos;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2265t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2265t=z;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2266t) {
  goto __t_return;
  __t_return:
  *__t2266t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2267t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2267t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2268t, uint64_t* __t2269t, uint16_t* __t2270t, uint16_t* __t2271t, uint64_t pos, char** __t2272t, uint64_t* __t2273t, uint16_t* __t2274t, uint16_t* __t2275t, uint64_t* __t2276t) {
  char* buf__unsafe_ptr=*__t2268t;
  uint64_t buf__unsafe_size=*__t2269t;
  uint16_t buf__unsafe_offset=*__t2270t;
  uint16_t buf__unsafe_align=*__t2271t;
  goto __t_return;
  __t_return:
  *__t2268t=buf__unsafe_ptr;
  *__t2269t=buf__unsafe_size;
  *__t2270t=buf__unsafe_offset;
  *__t2271t=buf__unsafe_align;
  *__t2272t=buf__unsafe_ptr;
  *__t2273t=buf__unsafe_size;
  *__t2274t=buf__unsafe_offset;
  *__t2275t=buf__unsafe_align;
  *__t2276t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2277t, uint64_t* __t2278t, uint16_t* __t2279t, uint16_t* __t2280t, uint64_t* __t2281t, uint64_t length, char** __t2282t, uint64_t* __t2283t, uint16_t* __t2284t, uint16_t* __t2285t, uint64_t* __t2286t) {
  char* allocator__buf__unsafe_ptr=*__t2277t;
  uint64_t allocator__buf__unsafe_size=*__t2278t;
  uint16_t allocator__buf__unsafe_offset=*__t2279t;
  uint16_t allocator__buf__unsafe_align=*__t2280t;
  uint64_t allocator__pos=*__t2281t;
  uint64_t __t875t__=0;
  uint64_t next_pos=0;
  uint64_t __t876t__=0;
  char __t877t__=0;
  uint64_t __t878t=0;
  uint64_t __t879t__=0;
  uint64_t pos=0;
  char* __t880t__buf__unsafe_ptr=0;
  uint64_t __t880t__buf__unsafe_size=0;
  uint16_t __t880t__buf__unsafe_offset=0;
  uint16_t __t880t__buf__unsafe_align=0;
  uint64_t __t880t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t183t(allocator__pos,length,&__t875t__);
  next_pos=__t875t__;
  len__t830t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t876t__);
  gt__t284t(next_pos,__t876t__,&__t877t__);
  if(__t877t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t878t=0;
  add__t183t(allocator__pos,__t878t,&__t879t__);
  pos=__t879t__;
  allocator__pos=next_pos;
  allocated__t841t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t880t__buf__unsafe_ptr,&__t880t__buf__unsafe_size,&__t880t__buf__unsafe_offset,&__t880t__buf__unsafe_align,&__t880t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2277t=allocator__buf__unsafe_ptr;
  *__t2278t=allocator__buf__unsafe_size;
  *__t2279t=allocator__buf__unsafe_offset;
  *__t2280t=allocator__buf__unsafe_align;
  *__t2281t=allocator__pos;
  *__t2282t=__t880t__buf__unsafe_ptr;
  *__t2283t=__t880t__buf__unsafe_size;
  *__t2284t=__t880t__buf__unsafe_offset;
  *__t2285t=__t880t__buf__unsafe_align;
  *__t2286t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat16__t947t(uint64_t x, uint16_t* __t2287t) {
  uint16_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2287t=value;
}

static inline __attribute__((always_inline)) int slice__t948t(char** __t2288t, uint64_t* __t2289t, uint16_t* __t2290t, uint16_t* __t2291t, uint64_t* __t2292t, uint64_t length, char** __t2293t, uint64_t* __t2294t, uint16_t* __t2295t, uint16_t* __t2296t) {
  char* surface__buf__unsafe_ptr=*__t2288t;
  uint64_t surface__buf__unsafe_size=*__t2289t;
  uint16_t surface__buf__unsafe_offset=*__t2290t;
  uint16_t surface__buf__unsafe_align=*__t2291t;
  uint64_t surface__pos=*__t2292t;
  char* __t949t__buf__unsafe_ptr=0;
  uint64_t __t949t__buf__unsafe_size=0;
  uint16_t __t949t__buf__unsafe_offset=0;
  uint16_t __t949t__buf__unsafe_align=0;
  uint64_t __t949t__pos=0;
  char* __t950t__buf__unsafe_ptr=0;
  uint64_t __t950t__buf__unsafe_size=0;
  uint16_t __t950t__buf__unsafe_offset=0;
  uint16_t __t950t__buf__unsafe_align=0;
  uint64_t __t950t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint16_t allocated__buf__unsafe_offset=0;
  uint16_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t951t__unsafe_ptr=0;
  uint64_t __t951t__unsafe_size=0;
  uint16_t __t951t__unsafe_offset=0;
  uint16_t __t951t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t952t__=0;
  uint64_t __t953t__=0;
  uint64_t __t954t__=0;
  uint64_t __t955t__=0;
  uint16_t __t956t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t873t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,length,&__t949t__buf__unsafe_ptr,&__t949t__buf__unsafe_size,&__t949t__buf__unsafe_offset,&__t949t__buf__unsafe_align,&__t949t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t950t__buf__unsafe_ptr=__t949t__buf__unsafe_ptr;
  __t950t__buf__unsafe_size=__t949t__buf__unsafe_size;
  __t950t__buf__unsafe_offset=__t949t__buf__unsafe_offset;
  __t950t__buf__unsafe_align=__t949t__buf__unsafe_align;
  __t950t__pos=__t949t__pos;
  allocated__buf__unsafe_ptr=__t950t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t950t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t950t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t950t__buf__unsafe_align;
  allocated__pos=__t950t__pos;
  __t951t__unsafe_ptr=allocated__buf__unsafe_ptr;
  __t951t__unsafe_size=allocated__buf__unsafe_size;
  __t951t__unsafe_offset=allocated__buf__unsafe_offset;
  __t951t__unsafe_align=allocated__buf__unsafe_align;
  buf__unsafe_ptr=__t951t__unsafe_ptr;
  buf__unsafe_size=__t951t__unsafe_size;
  buf__unsafe_offset=__t951t__unsafe_offset;
  buf__unsafe_align=__t951t__unsafe_align;
  buf__unsafe_size=length;
  nat__t678t(buf__unsafe_offset,&__t952t__);
  nat__t678t(buf__unsafe_align,&__t953t__);
  mul__t207t(__t953t__,allocated__pos,&__t954t__);
  add__t183t(__t952t__,__t954t__,&__t955t__);
  nat16__t947t(__t955t__,&__t956t__);
  buf__unsafe_offset=__t956t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2288t=surface__buf__unsafe_ptr;
  *__t2289t=surface__buf__unsafe_size;
  *__t2290t=surface__buf__unsafe_offset;
  *__t2291t=surface__buf__unsafe_align;
  *__t2292t=surface__pos;
  *__t2293t=buf__unsafe_ptr;
  *__t2294t=buf__unsafe_size;
  *__t2295t=buf__unsafe_offset;
  *__t2296t=buf__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2297t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2297t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2298t) {
  *__t2298t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2299t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2299t=__t677t__;
}

static inline __attribute__((always_inline)) int mutget__t816t(char** __t2300t, uint64_t* __t2301t, uint16_t* __t2302t, uint16_t* __t2303t, uint64_t i, char** __t2304t) {
  char* buffer__unsafe_ptr=*__t2300t;
  uint64_t buffer__unsafe_size=*__t2301t;
  uint16_t buffer__unsafe_offset=*__t2302t;
  uint16_t buffer__unsafe_align=*__t2303t;
  char __t817t__=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  char* __t822t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t817t__);
  if(__t817t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t818t__);
  mul__t207t(i,__t818t__,&__t819t__);
  nat__t678t(buffer__unsafe_offset,&__t820t__);
  add__t183t(__t819t__,__t820t__,&__t821t__);
  add__t676t(buffer__unsafe_ptr,__t821t__,&__t822t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2300t=buffer__unsafe_ptr;
  *__t2301t=buffer__unsafe_size;
  *__t2302t=buffer__unsafe_offset;
  *__t2303t=buffer__unsafe_align;
  *__t2304t=__t822t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2305t) {
  char __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  char* __t829t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t824t__);
  if(__t824t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t825t__);
  mul__t207t(i,__t825t__,&__t826t__);
  nat__t678t(buffer__unsafe_offset,&__t827t__);
  add__t183t(__t826t__,__t827t__,&__t828t__);
  add__t676t(buffer__unsafe_ptr,__t828t__,&__t829t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2305t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t406t(uint64_t value) {
  const char* endl=0;
  endl=__t395t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2153t() {
  char* __t2158t__unsafe_ptr=0;
  uint64_t __t2158t__unsafe_size=0;
  uint16_t __t2158t__unsafe_offset=0;
  uint16_t __t2158t__unsafe_align=0;
  uint64_t __t2159t=0;
  char* __t2160t__unsafe_ptr=0;
  uint64_t __t2160t__unsafe_size=0;
  uint16_t __t2160t__unsafe_offset=0;
  uint16_t __t2160t__unsafe_align=0;
  char __t2161t____t705t__=0;
  char* __t2162t__buf__unsafe_ptr=0;
  uint64_t __t2162t__buf__unsafe_size=0;
  uint16_t __t2162t__buf__unsafe_offset=0;
  uint16_t __t2162t__buf__unsafe_align=0;
  uint64_t __t2162t__pos=0;
  char* __t2163t__buf__unsafe_ptr=0;
  uint64_t __t2163t__buf__unsafe_size=0;
  uint16_t __t2163t__buf__unsafe_offset=0;
  uint16_t __t2163t__buf__unsafe_align=0;
  uint64_t __t2163t__pos=0;
  char* xall__buf__unsafe_ptr=0;
  uint64_t xall__buf__unsafe_size=0;
  uint16_t xall__buf__unsafe_offset=0;
  uint16_t xall__buf__unsafe_align=0;
  uint64_t xall__pos=0;
  uint64_t __t2164t=0;
  char* __t2165t__unsafe_ptr=0;
  uint64_t __t2165t__unsafe_size=0;
  uint16_t __t2165t__unsafe_offset=0;
  uint16_t __t2165t__unsafe_align=0;
  char* __t2166t__unsafe_ptr=0;
  uint64_t __t2166t__unsafe_size=0;
  uint16_t __t2166t__unsafe_offset=0;
  uint16_t __t2166t__unsafe_align=0;
  char* x1__unsafe_ptr=0;
  uint64_t x1__unsafe_size=0;
  uint16_t x1__unsafe_offset=0;
  uint16_t x1__unsafe_align=0;
  uint64_t __t2167t=0;
  char* __t2168t__unsafe_ptr=0;
  uint64_t __t2168t__unsafe_size=0;
  uint16_t __t2168t__unsafe_offset=0;
  uint16_t __t2168t__unsafe_align=0;
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__unsafe_size=0;
  uint16_t __t2169t__unsafe_offset=0;
  uint16_t __t2169t__unsafe_align=0;
  char* x2__unsafe_ptr=0;
  uint64_t x2__unsafe_size=0;
  uint16_t x2__unsafe_offset=0;
  uint16_t x2__unsafe_align=0;
  uint64_t __t2170t=0;
  char* __t2171t__unsafe_ptr=0;
  uint64_t __t2171t__unsafe_size=0;
  uint16_t __t2171t__unsafe_offset=0;
  uint16_t __t2171t__unsafe_align=0;
  char* __t2172t__unsafe_ptr=0;
  uint64_t __t2172t__unsafe_size=0;
  uint16_t __t2172t__unsafe_offset=0;
  uint16_t __t2172t__unsafe_align=0;
  char* x3__unsafe_ptr=0;
  uint64_t x3__unsafe_size=0;
  uint16_t x3__unsafe_offset=0;
  uint16_t x3__unsafe_align=0;
  uint64_t __t2173t=0;
  char* __t2175t__=0;
  uint64_t __t2176t=0;
  uint64_t __t2177t=0;
  char* __t2179t__=0;
  uint64_t __t2180t=0;
  uint64_t __t2181t=0;
  char* __t2183t__=0;
  uint64_t __t2184t=0;
  uint64_t __t2185t=0;
  char* __t2187t__=0;
  uint64_t __t2188t=0;
  uint64_t __t2189t=0;
  char* __t2191t__=0;
  uint64_t __t2192t=0;
  uint64_t __t2193t=0;
  char* __t2195t__=0;
  uint64_t __t2196t=0;
  uint64_t __t2197t=0;
  char* __t2199t__=0;
  uint64_t __t2200t=0;
  uint64_t __t2201t=0;
  char* __t2203t__=0;
  uint64_t __t2204t=0;
  uint64_t __t2205t=0;
  char* __t2207t__=0;
  uint64_t __t2208t=0;
  uint64_t __t2209t=0;
  char* __t2211t__=0;
  uint64_t __t2212t__value=0;
  uint64_t __t2214t=0;
  char* __t2216t__=0;
  uint64_t __t2217t__value=0;
  uint64_t __t2219t=0;
  char* __t2221t__=0;
  uint64_t __t2222t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  nat____t_buffer____buffer__t2156t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align);
  __t2159t=10;
  __t_errcode=alloc__t703t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align,__t2159t,&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t838t(&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align,&__t2162t__buf__unsafe_ptr,&__t2162t__buf__unsafe_size,&__t2162t__buf__unsafe_offset,&__t2162t__buf__unsafe_align,&__t2162t__pos);
  __t2163t__buf__unsafe_ptr=__t2162t__buf__unsafe_ptr;
  __t2163t__buf__unsafe_size=__t2162t__buf__unsafe_size;
  __t2163t__buf__unsafe_offset=__t2162t__buf__unsafe_offset;
  __t2163t__buf__unsafe_align=__t2162t__buf__unsafe_align;
  __t2163t__pos=__t2162t__pos;
  xall__buf__unsafe_ptr=__t2163t__buf__unsafe_ptr;
  xall__buf__unsafe_size=__t2163t__buf__unsafe_size;
  xall__buf__unsafe_offset=__t2163t__buf__unsafe_offset;
  xall__buf__unsafe_align=__t2163t__buf__unsafe_align;
  xall__pos=__t2163t__pos;
  __t2164t=3;
  __t_errcode=slice__t948t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2164t,&__t2165t__unsafe_ptr,&__t2165t__unsafe_size,&__t2165t__unsafe_offset,&__t2165t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2166t__unsafe_ptr=__t2165t__unsafe_ptr;
  __t2166t__unsafe_size=__t2165t__unsafe_size;
  __t2166t__unsafe_offset=__t2165t__unsafe_offset;
  __t2166t__unsafe_align=__t2165t__unsafe_align;
  x1__unsafe_ptr=__t2166t__unsafe_ptr;
  x1__unsafe_size=__t2166t__unsafe_size;
  x1__unsafe_offset=__t2166t__unsafe_offset;
  x1__unsafe_align=__t2166t__unsafe_align;
  __t2167t=3;
  __t_errcode=slice__t948t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2167t,&__t2168t__unsafe_ptr,&__t2168t__unsafe_size,&__t2168t__unsafe_offset,&__t2168t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2169t__unsafe_ptr=__t2168t__unsafe_ptr;
  __t2169t__unsafe_size=__t2168t__unsafe_size;
  __t2169t__unsafe_offset=__t2168t__unsafe_offset;
  __t2169t__unsafe_align=__t2168t__unsafe_align;
  x2__unsafe_ptr=__t2169t__unsafe_ptr;
  x2__unsafe_size=__t2169t__unsafe_size;
  x2__unsafe_offset=__t2169t__unsafe_offset;
  x2__unsafe_align=__t2169t__unsafe_align;
  __t2170t=3;
  __t_errcode=slice__t948t(&xall__buf__unsafe_ptr,&xall__buf__unsafe_size,&xall__buf__unsafe_offset,&xall__buf__unsafe_align,&xall__pos,__t2170t,&__t2171t__unsafe_ptr,&__t2171t__unsafe_size,&__t2171t__unsafe_offset,&__t2171t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2172t__unsafe_ptr=__t2171t__unsafe_ptr;
  __t2172t__unsafe_size=__t2171t__unsafe_size;
  __t2172t__unsafe_offset=__t2171t__unsafe_offset;
  __t2172t__unsafe_align=__t2171t__unsafe_align;
  x3__unsafe_ptr=__t2172t__unsafe_ptr;
  x3__unsafe_size=__t2172t__unsafe_size;
  x3__unsafe_offset=__t2172t__unsafe_offset;
  x3__unsafe_align=__t2172t__unsafe_align;
  __t2173t=0;
  __t_errcode=mutget__t816t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2173t,&__t2175t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2176t=0;
  if(!__t2175t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2175t__,&__t2176t,8);
  __t2177t=1;
  __t_errcode=mutget__t816t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2177t,&__t2179t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2180t=1;
  if(!__t2179t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2179t__,&__t2180t,8);
  __t2181t=2;
  __t_errcode=mutget__t816t(&x1__unsafe_ptr,&x1__unsafe_size,&x1__unsafe_offset,&x1__unsafe_align,__t2181t,&__t2183t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2184t=2;
  if(!__t2183t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2183t__,&__t2184t,8);
  __t2185t=0;
  __t_errcode=mutget__t816t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2185t,&__t2187t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2188t=3;
  if(!__t2187t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2187t__,&__t2188t,8);
  __t2189t=1;
  __t_errcode=mutget__t816t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2189t,&__t2191t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2192t=4;
  if(!__t2191t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2191t__,&__t2192t,8);
  __t2193t=2;
  __t_errcode=mutget__t816t(&x2__unsafe_ptr,&x2__unsafe_size,&x2__unsafe_offset,&x2__unsafe_align,__t2193t,&__t2195t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2196t=5;
  if(!__t2195t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2195t__,&__t2196t,8);
  __t2197t=0;
  __t_errcode=mutget__t816t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2197t,&__t2199t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2200t=6;
  if(!__t2199t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2199t__,&__t2200t,8);
  __t2201t=1;
  __t_errcode=mutget__t816t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2201t,&__t2203t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2204t=7;
  if(!__t2203t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2203t__,&__t2204t,8);
  __t2205t=2;
  __t_errcode=mutget__t816t(&x3__unsafe_ptr,&x3__unsafe_size,&x3__unsafe_offset,&x3__unsafe_align,__t2205t,&__t2207t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2208t=8;
  if(!__t2207t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2207t__,&__t2208t,8);
  __t2209t=2;
  __t_errcode=get__t823t(x1__unsafe_ptr,x1__unsafe_size,x1__unsafe_offset,x1__unsafe_align,__t2209t,&__t2211t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2211t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2212t__value,__t2211t__,8);
  print__t406t(__t2212t__value);
  __t2214t=2;
  __t_errcode=get__t823t(x2__unsafe_ptr,x2__unsafe_size,x2__unsafe_offset,x2__unsafe_align,__t2214t,&__t2216t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2216t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2217t__value,__t2216t__,8);
  print__t406t(__t2217t__value);
  __t2219t=2;
  __t_errcode=get__t823t(x3__unsafe_ptr,x3__unsafe_size,x3__unsafe_offset,x3__unsafe_align,__t2219t,&__t2221t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2221t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2222t__value,__t2221t__,8);
  print__t406t(__t2222t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t604t(__t2160t__unsafe_ptr,&__t2161t____t705t__);
  if(__t2161t____t705t__){
  free__t674t(&__t2160t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2153t();return 0;}