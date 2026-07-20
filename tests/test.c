#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/mutex.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2315t="test";
const char* const __t395t="\n";
static const char* __t_all_errcodes[39] = {"noerr",
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

static inline __attribute__((always_inline)) void dat____t_buffer____buffer__t2279t(char** __t2318t, uint64_t* __t2319t, uint16_t* __t2320t, uint16_t* __t2321t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=20;
  *__t2318t=unsafe_ptr;
  *__t2319t=unsafe_size;
  *__t2320t=unsafe_offset;
  *__t2321t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2322t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2322t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2323t) {
  char* allocated=*__t2323t;
  if(allocated){
  free(allocated);
  }
  *__t2323t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2324t) {
  int value=0;
  *__t2324t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2325t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2325t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2326t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2326t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2327t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2327t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2328t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2328t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2329t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2329t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2330t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2330t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2331t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2331t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2332t) {
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
  *__t2332t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2333t, uint64_t* __t2334t, uint16_t* __t2335t, uint16_t* __t2336t, uint64_t size, char** __t2337t, uint64_t* __t2338t, uint16_t* __t2339t, uint16_t* __t2340t) {
  char* buffer__unsafe_ptr=*__t2333t;
  uint64_t buffer__unsafe_size=*__t2334t;
  uint16_t buffer__unsafe_offset=*__t2335t;
  uint16_t buffer__unsafe_align=*__t2336t;
  int __t704t=0;
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
  int __t721t=0;
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
  *__t2333t=buffer__unsafe_ptr;
  *__t2334t=buffer__unsafe_size;
  *__t2335t=buffer__unsafe_offset;
  *__t2336t=buffer__unsafe_align;
  *__t2337t=buffer__unsafe_ptr;
  *__t2338t=buffer__unsafe_size;
  *__t2339t=buffer__unsafe_offset;
  *__t2340t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int listofdat__t2278t(char** __t2341t, uint64_t* __t2342t, uint16_t* __t2343t, uint16_t* __t2344t) {
  char* __t2281t__unsafe_ptr=0;
  uint64_t __t2281t__unsafe_size=0;
  uint16_t __t2281t__unsafe_offset=0;
  uint16_t __t2281t__unsafe_align=0;
  uint64_t __t2282t=0;
  char* __t2283t__unsafe_ptr=0;
  uint64_t __t2283t__unsafe_size=0;
  uint16_t __t2283t__unsafe_offset=0;
  uint16_t __t2283t__unsafe_align=0;
  char __t2284t____t705t__=0;
  char* __t2285t__unsafe_ptr=0;
  uint64_t __t2285t__unsafe_size=0;
  uint16_t __t2285t__unsafe_offset=0;
  uint16_t __t2285t__unsafe_align=0;
  char* data__unsafe_ptr=0;
  uint64_t data__unsafe_size=0;
  uint16_t data__unsafe_offset=0;
  uint16_t data__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  dat____t_buffer____buffer__t2279t(&__t2281t__unsafe_ptr,&__t2281t__unsafe_size,&__t2281t__unsafe_offset,&__t2281t__unsafe_align);
  __t2282t=4;
  __t_errcode=alloc__t703t(&__t2281t__unsafe_ptr,&__t2281t__unsafe_size,&__t2281t__unsafe_offset,&__t2281t__unsafe_align,__t2282t,&__t2283t__unsafe_ptr,&__t2283t__unsafe_size,&__t2283t__unsafe_offset,&__t2283t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2285t__unsafe_ptr=__t2283t__unsafe_ptr;
  __t2285t__unsafe_size=__t2283t__unsafe_size;
  __t2285t__unsafe_offset=__t2283t__unsafe_offset;
  __t2285t__unsafe_align=__t2283t__unsafe_align;
  data__unsafe_ptr=__t2285t__unsafe_ptr;
  data__unsafe_size=__t2285t__unsafe_size;
  data__unsafe_offset=__t2285t__unsafe_offset;
  data__unsafe_align=__t2285t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t604t(data__unsafe_ptr,&__t2284t____t705t__);
  if(__t2284t____t705t__){
  free__t674t(&data__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2341t=data__unsafe_ptr;
  *__t2342t=data__unsafe_size;
  *__t2343t=data__unsafe_offset;
  *__t2344t=data__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2345t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2345t=z;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2346t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2346t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2347t) {
  *__t2347t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2348t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2348t=__t677t__;
}

static inline __attribute__((always_inline)) int mutget__t816t(char** __t2349t, uint64_t* __t2350t, uint16_t* __t2351t, uint16_t* __t2352t, uint64_t i, char** __t2353t) {
  char* buffer__unsafe_ptr=*__t2349t;
  uint64_t buffer__unsafe_size=*__t2350t;
  uint16_t buffer__unsafe_offset=*__t2351t;
  uint16_t buffer__unsafe_align=*__t2352t;
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
  *__t2349t=buffer__unsafe_ptr;
  *__t2350t=buffer__unsafe_size;
  *__t2351t=buffer__unsafe_offset;
  *__t2352t=buffer__unsafe_align;
  *__t2353t=__t822t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2270t(char** __t2354t, uint64_t* __t2355t, uint16_t* __t2356t, uint16_t* __t2357t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2354t=unsafe_ptr;
  *__t2355t=unsafe_size;
  *__t2356t=unsafe_offset;
  *__t2357t=unsafe_align;
}

static inline __attribute__((always_inline)) int dat__t2269t(char** __t2358t, uint64_t* __t2359t, uint16_t* __t2360t, uint16_t* __t2361t) {
  char* __t2272t__unsafe_ptr=0;
  uint64_t __t2272t__unsafe_size=0;
  uint16_t __t2272t__unsafe_offset=0;
  uint16_t __t2272t__unsafe_align=0;
  uint64_t __t2273t=0;
  char* __t2274t__unsafe_ptr=0;
  uint64_t __t2274t__unsafe_size=0;
  uint16_t __t2274t__unsafe_offset=0;
  uint16_t __t2274t__unsafe_align=0;
  char __t2275t____t705t__=0;
  char* __t2276t__unsafe_ptr=0;
  uint64_t __t2276t__unsafe_size=0;
  uint16_t __t2276t__unsafe_offset=0;
  uint16_t __t2276t__unsafe_align=0;
  char* data__unsafe_ptr=0;
  uint64_t data__unsafe_size=0;
  uint16_t data__unsafe_offset=0;
  uint16_t data__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2270t(&__t2272t__unsafe_ptr,&__t2272t__unsafe_size,&__t2272t__unsafe_offset,&__t2272t__unsafe_align);
  __t2273t=4;
  __t_errcode=alloc__t703t(&__t2272t__unsafe_ptr,&__t2272t__unsafe_size,&__t2272t__unsafe_offset,&__t2272t__unsafe_align,__t2273t,&__t2274t__unsafe_ptr,&__t2274t__unsafe_size,&__t2274t__unsafe_offset,&__t2274t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2276t__unsafe_ptr=__t2274t__unsafe_ptr;
  __t2276t__unsafe_size=__t2274t__unsafe_size;
  __t2276t__unsafe_offset=__t2274t__unsafe_offset;
  __t2276t__unsafe_align=__t2274t__unsafe_align;
  data__unsafe_ptr=__t2276t__unsafe_ptr;
  data__unsafe_size=__t2276t__unsafe_size;
  data__unsafe_offset=__t2276t__unsafe_offset;
  data__unsafe_align=__t2276t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t604t(data__unsafe_ptr,&__t2275t____t705t__);
  if(__t2275t____t705t__){
  free__t674t(&data__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2358t=data__unsafe_ptr;
  *__t2359t=data__unsafe_size;
  *__t2360t=data__unsafe_offset;
  *__t2361t=data__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t951t(char** __t2362t, uint64_t* __t2363t, uint16_t* __t2364t, uint16_t* __t2365t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2362t=unsafe_ptr;
  *__t2363t=unsafe_size;
  *__t2364t=unsafe_offset;
  *__t2365t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2366t) {
  *__t2366t=to;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2367t) {
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
  *__t2367t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t973t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2368t, uint64_t* __t2369t, uint64_t* __t2370t, char* __t2371t) {
  goto __t_return;
  __t_return:
  *__t2368t=unsafe_ptr;
  *__t2369t=dat__pos;
  *__t2370t=dat__length;
  *__t2371t=dat__first;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2372t, uint64_t* __t2373t, uint64_t* __t2374t, char* __t2375t) {
  char* unsafe_ptr=0;
  uint64_t __t978t__=0;
  uint64_t __t979t=0;
  char __t980t__=0;
  uint64_t __t981t__=0;
  uint64_t __t982t=0;
  char __t983t__=0;
  char* __t984t__unsafe_ptr=0;
  uint64_t __t984t__dat__pos=0;
  uint64_t __t984t__dat__length=0;
  char __t984t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t678t(buf__unsafe_align,&__t978t__);
  __t979t=1;
  neq__t152t(__t978t__,__t979t,&__t980t__);
  if(__t980t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t678t(buf__unsafe_offset,&__t981t__);
  __t982t=0;
  neq__t152t(__t981t__,__t982t,&__t983t__);
  if(__t983t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t973t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t984t__unsafe_ptr,&__t984t__dat__pos,&__t984t__dat__length,&__t984t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2372t=__t984t__unsafe_ptr;
  *__t2373t=__t984t__dat__pos;
  *__t2374t=__t984t__dat__length;
  *__t2375t=__t984t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1011t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2376t, uint64_t* __t2377t, uint64_t* __t2378t, char* __t2379t) {
  uint64_t __t1012t=0;
  char __t1013t__=0;
  char* __t1015t__=0;
  char __t1016t__value=0;
  char first=0;
  char* __t1017t__unsafe_ptr=0;
  uint64_t __t1017t__dat__pos=0;
  uint64_t __t1017t__dat__length=0;
  char __t1017t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1012t=0;
  neq__t152t(length,__t1012t,&__t1013t__);
  if(__t1013t__){
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1015t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1015t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1016t__value,__t1015t__,1);
  first=__t1016t__value;
  }
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1017t__unsafe_ptr,&__t1017t__dat__pos,&__t1017t__dat__length,&__t1017t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2376t=__t1017t__unsafe_ptr;
  *__t2377t=__t1017t__dat__pos;
  *__t2378t=__t1017t__dat__length;
  *__t2379t=__t1017t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1033t(const char* c, char** __t2380t, uint64_t* __t2381t, uint64_t* __t2382t, char* __t2383t) {
  char* __t1034t__unsafe_ptr=0;
  uint64_t __t1034t__unsafe_size=0;
  uint16_t __t1034t__unsafe_offset=0;
  uint16_t __t1034t__unsafe_align=0;
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__unsafe_size=0;
  uint16_t __t1035t__unsafe_offset=0;
  uint16_t __t1035t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1036t__=0;
  uint64_t length=0;
  uint64_t __t1037t=0;
  uint64_t __t1038t__=0;
  uint64_t __t1039t=0;
  char* __t1041t__unsafe_ptr=0;
  uint64_t __t1041t__dat__pos=0;
  uint64_t __t1041t__dat__length=0;
  char __t1041t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t951t(&__t1034t__unsafe_ptr,&__t1034t__unsafe_size,&__t1034t__unsafe_offset,&__t1034t__unsafe_align);
  __t1035t__unsafe_ptr=__t1034t__unsafe_ptr;
  __t1035t__unsafe_size=__t1034t__unsafe_size;
  __t1035t__unsafe_offset=__t1034t__unsafe_offset;
  __t1035t__unsafe_align=__t1034t__unsafe_align;
  buf__unsafe_ptr=__t1035t__unsafe_ptr;
  buf__unsafe_size=__t1035t__unsafe_size;
  buf__unsafe_offset=__t1035t__unsafe_offset;
  buf__unsafe_align=__t1035t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1036t__);
  buf__unsafe_ptr=__t1036t__;
  if(c){
  length=strlen(c);
  }
  __t1037t=1;
  add__t183t(length,__t1037t,&__t1038t__);
  buf__unsafe_size=__t1038t__;
  __t1039t=0;
  __t_errcode=str__t1011t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1039t,length,&__t1041t__unsafe_ptr,&__t1041t__dat__pos,&__t1041t__dat__length,&__t1041t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2380t=__t1041t__unsafe_ptr;
  *__t2381t=__t1041t__dat__pos;
  *__t2382t=__t1041t__dat__length;
  *__t2383t=__t1041t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1167t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1168t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int accessible__t2287t(char* obj__data__unsafe_ptr, uint64_t obj__data__unsafe_size, uint16_t obj__data__unsafe_offset, uint16_t obj__data__unsafe_align) {
  uint64_t __t2288t=0;
  char* __t2290t__=0;
  char* __t2291t__data__unsafe_ptr=0;
  uint64_t __t2291t__data__unsafe_size=0;
  uint16_t __t2291t__data__unsafe_offset=0;
  uint16_t __t2291t__data__unsafe_align=0;
  uint64_t __t2292t=0;
  char* __t2294t__=0;
  char* __t2295t__unsafe_ptr=0;
  uint64_t __t2295t__dat__pos=0;
  uint64_t __t2295t__dat__length=0;
  char __t2295t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2288t=0;
  __t_errcode=get__t823t(obj__data__unsafe_ptr,obj__data__unsafe_size,obj__data__unsafe_offset,obj__data__unsafe_align,__t2288t,&__t2290t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2290t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2291t__data__unsafe_ptr,__t2290t__,8);
  memcpy(&__t2291t__data__unsafe_size,__t2290t__+8,8);
  memcpy(&__t2291t__data__unsafe_offset,__t2290t__+16,2);
  memcpy(&__t2291t__data__unsafe_align,__t2290t__+18,2);
  __t2292t=0;
  __t_errcode=get__t823t(__t2291t__data__unsafe_ptr,__t2291t__data__unsafe_size,__t2291t__data__unsafe_offset,__t2291t__data__unsafe_align,__t2292t,&__t2294t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2294t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2295t__unsafe_ptr,__t2294t__,8);
  memcpy(&__t2295t__dat__pos,__t2294t__+8,8);
  memcpy(&__t2295t__dat__length,__t2294t__+16,8);
  memcpy(&__t2295t__dat__first,__t2294t__+24,1);
  print__t1167t(__t2295t__unsafe_ptr,__t2295t__dat__pos,__t2295t__dat__length,__t2295t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2297t() {
  char* __t2300t__data__unsafe_ptr=0;
  uint64_t __t2300t__data__unsafe_size=0;
  uint16_t __t2300t__data__unsafe_offset=0;
  uint16_t __t2300t__data__unsafe_align=0;
  char __t2301t____t2284t____t705t__=0;
  char* __t2302t__data__unsafe_ptr=0;
  uint64_t __t2302t__data__unsafe_size=0;
  uint16_t __t2302t__data__unsafe_offset=0;
  uint16_t __t2302t__data__unsafe_align=0;
  char* obj__data__unsafe_ptr=0;
  uint64_t obj__data__unsafe_size=0;
  uint16_t obj__data__unsafe_offset=0;
  uint16_t obj__data__unsafe_align=0;
  uint64_t __t2303t=0;
  char* __t2305t__=0;
  char* __t2306t__data__unsafe_ptr=0;
  uint64_t __t2306t__data__unsafe_size=0;
  uint16_t __t2306t__data__unsafe_offset=0;
  uint16_t __t2306t__data__unsafe_align=0;
  char __t2307t____t2275t____t705t__=0;
  uint64_t __t2308t=0;
  char* __t2310t__=0;
  char* __t2311t__data__unsafe_ptr=0;
  uint64_t __t2311t__data__unsafe_size=0;
  uint16_t __t2311t__data__unsafe_offset=0;
  uint16_t __t2311t__data__unsafe_align=0;
  uint64_t __t2312t=0;
  char* __t2314t__=0;
  char* __t2316t__unsafe_ptr=0;
  uint64_t __t2316t__dat__pos=0;
  uint64_t __t2316t__dat__length=0;
  char __t2316t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  __t_errcode=listofdat__t2278t(&__t2300t__data__unsafe_ptr,&__t2300t__data__unsafe_size,&__t2300t__data__unsafe_offset,&__t2300t__data__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2302t__data__unsafe_ptr=__t2300t__data__unsafe_ptr;
  __t2302t__data__unsafe_size=__t2300t__data__unsafe_size;
  __t2302t__data__unsafe_offset=__t2300t__data__unsafe_offset;
  __t2302t__data__unsafe_align=__t2300t__data__unsafe_align;
  obj__data__unsafe_ptr=__t2302t__data__unsafe_ptr;
  obj__data__unsafe_size=__t2302t__data__unsafe_size;
  obj__data__unsafe_offset=__t2302t__data__unsafe_offset;
  obj__data__unsafe_align=__t2302t__data__unsafe_align;
  __t2303t=0;
  __t_errcode=mutget__t816t(&obj__data__unsafe_ptr,&obj__data__unsafe_size,&obj__data__unsafe_offset,&obj__data__unsafe_align,__t2303t,&__t2305t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=dat__t2269t(&__t2306t__data__unsafe_ptr,&__t2306t__data__unsafe_size,&__t2306t__data__unsafe_offset,&__t2306t__data__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2305t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2305t__,&__t2306t__data__unsafe_ptr,8);
  memcpy(__t2305t__+8,&__t2306t__data__unsafe_size,8);
  memcpy(__t2305t__+16,&__t2306t__data__unsafe_offset,2);
  memcpy(__t2305t__+18,&__t2306t__data__unsafe_align,2);
  __t2308t=0;
  __t_errcode=mutget__t816t(&obj__data__unsafe_ptr,&obj__data__unsafe_size,&obj__data__unsafe_offset,&obj__data__unsafe_align,__t2308t,&__t2310t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2310t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2311t__data__unsafe_ptr,__t2310t__,8);
  memcpy(&__t2311t__data__unsafe_size,__t2310t__+8,8);
  memcpy(&__t2311t__data__unsafe_offset,__t2310t__+16,2);
  memcpy(&__t2311t__data__unsafe_align,__t2310t__+18,2);
  __t2312t=0;
  __t_errcode=mutget__t816t(&__t2311t__data__unsafe_ptr,&__t2311t__data__unsafe_size,&__t2311t__data__unsafe_offset,&__t2311t__data__unsafe_align,__t2312t,&__t2314t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1033t(__t2315t,&__t2316t__unsafe_ptr,&__t2316t__dat__pos,&__t2316t__dat__length,&__t2316t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2314t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2314t__,&__t2316t__unsafe_ptr,8);
  memcpy(__t2314t__+8,&__t2316t__dat__pos,8);
  memcpy(__t2314t__+16,&__t2316t__dat__length,8);
  memcpy(__t2314t__+24,&__t2316t__dat__first,1);
  __t_errcode=accessible__t2287t(obj__data__unsafe_ptr,obj__data__unsafe_size,obj__data__unsafe_offset,obj__data__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t604t(__t2306t__data__unsafe_ptr,&__t2307t____t2275t____t705t__);
  if(__t2307t____t2275t____t705t__){
  free__t674t(&__t2306t__data__unsafe_ptr);
  }
  exists__t604t(__t2300t__data__unsafe_ptr,&__t2301t____t2284t____t705t__);
  if(__t2301t____t2284t____t705t__){
  free__t674t(&__t2300t__data__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2297t();return 0;}