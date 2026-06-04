#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2378t="manio";
const char* const __t2373t="hello";
const char* const __t2375t="hello world!";
const char* const __t2380t="it's a me, manio.";
const char* const __t382t="\n";
static const char* __t_all_errcodes[37] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2389t(char** __t2411t, uint64_t* __t2412t, uint16_t* __t2413t, uint16_t* __t2414t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2411t=unsafe_ptr;
  *__t2412t=unsafe_size;
  *__t2413t=unsafe_offset;
  *__t2414t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2415t) {
  int value=0;
  *__t2415t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2416t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2416t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2417t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2417t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2418t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2418t=z;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2419t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2419t=__t483t__;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2420t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2420t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2421t) {
  char* allocated=*__t2421t;
  if(allocated){
  free(allocated);
  }
  *__t2421t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2422t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2422t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2423t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2423t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2424t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2424t=value;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2425t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2425t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2426t) {
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
  *__t2426t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2427t, uint64_t* __t2428t, uint16_t* __t2429t, uint16_t* __t2430t, uint64_t size, char** __t2431t, uint64_t* __t2432t, uint16_t* __t2433t, uint16_t* __t2434t) {
  char* buffer__unsafe_ptr=*__t2427t;
  uint64_t buffer__unsafe_size=*__t2428t;
  uint16_t buffer__unsafe_offset=*__t2429t;
  uint16_t buffer__unsafe_align=*__t2430t;
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
  *__t2427t=buffer__unsafe_ptr;
  *__t2428t=buffer__unsafe_size;
  *__t2429t=buffer__unsafe_offset;
  *__t2430t=buffer__unsafe_align;
  *__t2431t=buffer__unsafe_ptr;
  *__t2432t=buffer__unsafe_size;
  *__t2433t=buffer__unsafe_offset;
  *__t2434t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2435t, uint64_t* __t2436t, uint16_t* __t2437t, uint16_t* __t2438t, uint64_t _pos, char** __t2439t, uint64_t* __t2440t, uint16_t* __t2441t, uint16_t* __t2442t, uint64_t* __t2443t) {
  char* buf__unsafe_ptr=*__t2435t;
  uint64_t buf__unsafe_size=*__t2436t;
  uint16_t buf__unsafe_offset=*__t2437t;
  uint16_t buf__unsafe_align=*__t2438t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2435t=buf__unsafe_ptr;
  *__t2436t=buf__unsafe_size;
  *__t2437t=buf__unsafe_offset;
  *__t2438t=buf__unsafe_align;
  *__t2439t=buf__unsafe_ptr;
  *__t2440t=buf__unsafe_size;
  *__t2441t=buf__unsafe_offset;
  *__t2442t=buf__unsafe_align;
  *__t2443t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2444t, uint64_t* __t2445t, uint16_t* __t2446t, uint16_t* __t2447t, char** __t2448t, uint64_t* __t2449t, uint16_t* __t2450t, uint16_t* __t2451t, uint64_t* __t2452t) {
  char* buf__unsafe_ptr=*__t2444t;
  uint64_t buf__unsafe_size=*__t2445t;
  uint16_t buf__unsafe_offset=*__t2446t;
  uint16_t buf__unsafe_align=*__t2447t;
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
  *__t2444t=buf__unsafe_ptr;
  *__t2445t=buf__unsafe_size;
  *__t2446t=buf__unsafe_offset;
  *__t2447t=buf__unsafe_align;
  *__t2448t=__t657t__buf__unsafe_ptr;
  *__t2449t=__t657t__buf__unsafe_size;
  *__t2450t=__t657t__buf__unsafe_offset;
  *__t2451t=__t657t__buf__unsafe_align;
  *__t2452t=__t657t__pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2357t(char** __t2453t, uint64_t* __t2454t, uint16_t* __t2455t, uint16_t* __t2456t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2453t=unsafe_ptr;
  *__t2454t=unsafe_size;
  *__t2455t=unsafe_offset;
  *__t2456t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t2277t(char** __t2457t, uint64_t* __t2458t, uint16_t* __t2459t, uint16_t* __t2460t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2457t=unsafe_ptr;
  *__t2458t=unsafe_size;
  *__t2459t=unsafe_offset;
  *__t2460t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2461t) {
  goto __t_return;
  __t_return:
  *__t2461t=buffer__unsafe_size;
}

int strmap__t2276t(char** __t2462t, uint64_t* __t2463t, uint16_t* __t2464t, uint16_t* __t2465t, char** __t2466t, uint64_t* __t2467t, uint16_t* __t2468t, uint16_t* __t2469t, char** __t2470t, uint64_t* __t2471t, uint16_t* __t2472t, uint16_t* __t2473t) {
  char* values__unsafe_ptr=*__t2462t;
  uint64_t values__unsafe_size=*__t2463t;
  uint16_t values__unsafe_offset=*__t2464t;
  uint16_t values__unsafe_align=*__t2465t;
  char* __t2279t__unsafe_ptr=0;
  uint64_t __t2279t__unsafe_size=0;
  uint16_t __t2279t__unsafe_offset=0;
  uint16_t __t2279t__unsafe_align=0;
  char* __t2280t__unsafe_ptr=0;
  uint64_t __t2280t__unsafe_size=0;
  uint16_t __t2280t__unsafe_offset=0;
  uint16_t __t2280t__unsafe_align=0;
  uint64_t __t2281t__=0;
  char* __t2282t__unsafe_ptr=0;
  uint64_t __t2282t__unsafe_size=0;
  uint16_t __t2282t__unsafe_offset=0;
  uint16_t __t2282t__unsafe_align=0;
  char __t2283t____t534t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t2277t(&__t2279t__unsafe_ptr,&__t2279t__unsafe_size,&__t2279t__unsafe_offset,&__t2279t__unsafe_align);
  __t2280t__unsafe_ptr=__t2279t__unsafe_ptr;
  __t2280t__unsafe_size=__t2279t__unsafe_size;
  __t2280t__unsafe_offset=__t2279t__unsafe_offset;
  __t2280t__unsafe_align=__t2279t__unsafe_align;
  len__t647t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t2281t__);
  __t_errcode=alloc__t532t(&__t2280t__unsafe_ptr,&__t2280t__unsafe_size,&__t2280t__unsafe_offset,&__t2280t__unsafe_align,__t2281t__,&__t2282t__unsafe_ptr,&__t2282t__unsafe_size,&__t2282t__unsafe_offset,&__t2282t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t2282t__unsafe_ptr;
  keys__unsafe_size=__t2282t__unsafe_size;
  keys__unsafe_offset=__t2282t__unsafe_offset;
  keys__unsafe_align=__t2282t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(keys__unsafe_ptr,&__t2283t____t534t__);
  if(__t2283t____t534t__){
  free__t503t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2462t=values__unsafe_ptr;
  *__t2463t=values__unsafe_size;
  *__t2464t=values__unsafe_offset;
  *__t2465t=values__unsafe_align;
  *__t2466t=keys__unsafe_ptr;
  *__t2467t=keys__unsafe_size;
  *__t2468t=keys__unsafe_offset;
  *__t2469t=keys__unsafe_align;
  *__t2470t=values__unsafe_ptr;
  *__t2471t=values__unsafe_size;
  *__t2472t=values__unsafe_offset;
  *__t2473t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2474t, uint64_t* __t2475t, uint16_t* __t2476t, uint16_t* __t2477t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2474t=unsafe_ptr;
  *__t2475t=unsafe_size;
  *__t2476t=unsafe_offset;
  *__t2477t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2478t) {
  *__t2478t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2479t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2479t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2480t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2480t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2481t) {
  *__t2481t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2482t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2482t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2483t) {
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
  *__t2483t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2484t, uint64_t* __t2485t, uint64_t* __t2486t, char* __t2487t) {
  goto __t_return;
  __t_return:
  *__t2484t=unsafe_ptr;
  *__t2485t=dat__pos;
  *__t2486t=dat__length;
  *__t2487t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2488t, uint64_t* __t2489t, uint64_t* __t2490t, char* __t2491t) {
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
  *__t2488t=__t794t__unsafe_ptr;
  *__t2489t=__t794t__dat__pos;
  *__t2490t=__t794t__dat__length;
  *__t2491t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2492t, uint64_t* __t2493t, uint64_t* __t2494t, char* __t2495t) {
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
  *__t2492t=__t827t__unsafe_ptr;
  *__t2493t=__t827t__dat__pos;
  *__t2494t=__t827t__dat__length;
  *__t2495t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2496t, uint64_t* __t2497t, uint64_t* __t2498t, char* __t2499t) {
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
  *__t2496t=__t853t__unsafe_ptr;
  *__t2497t=__t853t__dat__pos;
  *__t2498t=__t853t__dat__length;
  *__t2499t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1895t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2500t, uint64_t* __t2501t, uint64_t* __t2502t, char* __t2503t) {
  goto __t_return;
  __t_return:
  *__t2500t=r__unsafe_ptr;
  *__t2501t=r__dat__pos;
  *__t2502t=r__dat__length;
  *__t2503t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2504t) {
  goto __t_return;
  __t_return:
  *__t2504t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1899t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2505t) {
  uint64_t __t1900t=0;
  uint64_t __t1901t__=0;
  char __t1902t__=0;
  __t1900t=0;
  len__t854t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1901t__);
  eq__t120t(__t1900t,__t1901t__,&__t1902t__);
  goto __t_return;
  __t_return:
  *__t2505t=__t1902t__;
}

static inline __attribute__((always_inline)) void raw__t1893t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2506t, uint64_t* __t2507t, uint64_t* __t2508t, char* __t2509t) {
  goto __t_return;
  __t_return:
  *__t2506t=r__s__unsafe_ptr;
  *__t2507t=r__s__dat__pos;
  *__t2508t=r__s__dat__length;
  *__t2509t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t2510t, uint64_t* __t2511t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t2510t=from;
  *__t2511t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t2512t, uint64_t* __t2513t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t2512t=__t473t__from;
  *__t2513t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t2514t, uint64_t r__to, uint64_t* __t2515t) {
  uint64_t r__from=*__t2514t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2514t=r__from;
  *__t2515t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t2516t) {
  goto __t_return;
  __t_return:
  *__t2516t=value;
}

static inline __attribute__((always_inline)) void lshift__t458t(uint64_t x__value, uint64_t y, uint64_t* __t2517t) {
  uint64_t z=0;
  uint64_t __t459t__value=0;
  z=(x__value<<y);
  bits__t448t(z,&__t459t__value);
  goto __t_return;
  __t_return:
  *__t2517t=__t459t__value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x, uint64_t* __t2518t) {
  int __t444t=0;
  int __t445t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2518t=value;
}

static inline __attribute__((always_inline)) void nat__t454t(uint64_t x__value, uint64_t* __t2519t) {
  uint64_t __t455t__=0;
  nat__t443t(x__value,&__t455t__);
  goto __t_return;
  __t_return:
  *__t2519t=__t455t__;
}

static inline __attribute__((always_inline)) void get__t989t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2520t) {
  uint64_t __t990t__=0;
  char* __t991t__=0;
  add__t175t(s__dat__pos,i,&__t990t__);
  add__t505t(s__unsafe_ptr,__t990t__,&__t991t__);
  goto __t_return;
  __t_return:
  *__t2520t=__t991t__;
}

static inline __attribute__((always_inline)) void nat__t446t(char x, uint64_t* __t2521t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2521t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2522t) {
  uint64_t zero=0;
  char __t229t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t120t(y,zero,&__t229t__);
  if(__t229t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2522t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1844t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2523t) {
  uint64_t __t1845t=0;
  uint64_t __t1846t=0;
  uint64_t h=0;
  uint64_t __t1847t__=0;
  uint64_t __t1848t__from=0;
  uint64_t __t1848t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1849t=0;
  uint64_t __t1850t__=0;
  uint64_t i=0;
  uint64_t __t1851t__value=0;
  uint64_t __t1852t=0;
  uint64_t __t1853t__value=0;
  uint64_t __t1854t__=0;
  uint64_t __t1855t__=0;
  char* __t1856t__=0;
  char __t1857t__value=0;
  uint64_t __t1858t__=0;
  uint64_t __t1859t__=0;
  uint64_t __t1860t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1845t=5381;
  __t1846t=__t1845t;
  h=__t1846t;
  len__t854t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1847t__);
  range__t471t(__t1847t__,&__t1848t__from,&__t1848t__to);
  iter__from=__t1848t__from;
  iter__to=__t1848t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1850t__);
  __t1849t=__t_complain;
  i=__t1850t__;
  __t1849t=__t1849t==0;
  if(!__t1849t){
  break;
  }
  bits__t448t(h,&__t1851t__value);
  __t1852t=5;
  lshift__t458t(__t1851t__value,__t1852t,&__t1853t__value);
  nat__t454t(__t1853t__value,&__t1854t__);
  add__t175t(__t1854t__,h,&__t1855t__);
  get__t989t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1856t__);
  if(!__t1856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1857t__value,__t1856t__,1);
  nat__t446t(__t1857t__value,&__t1858t__);
  add__t175t(__t1855t__,__t1858t__,&__t1859t__);
  h=__t1859t__;
  }
  __t_errcode=mod__t228t(h,size,&__t1860t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2523t=__t1860t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2524t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2524t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2525t) {
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
  *__t2525t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t2526t, uint64_t* __t2527t, uint16_t* __t2528t, uint16_t* __t2529t, uint64_t i, char** __t2530t) {
  char* buffer__unsafe_ptr=*__t2526t;
  uint64_t buffer__unsafe_size=*__t2527t;
  uint16_t buffer__unsafe_offset=*__t2528t;
  uint16_t buffer__unsafe_align=*__t2529t;
  char __t634t__=0;
  uint64_t __t635t__=0;
  uint64_t __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t__=0;
  char* __t639t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t634t__);
  if(__t634t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t635t__);
  mul__t199t(i,__t635t__,&__t636t__);
  nat__t507t(buffer__unsafe_offset,&__t637t__);
  add__t175t(__t636t__,__t637t__,&__t638t__);
  add__t505t(buffer__unsafe_ptr,__t638t__,&__t639t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2526t=buffer__unsafe_ptr;
  *__t2527t=buffer__unsafe_size;
  *__t2528t=buffer__unsafe_offset;
  *__t2529t=buffer__unsafe_align;
  *__t2530t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t858t(char x, char y, char* __t2531t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2531t=z;
}

static inline __attribute__((always_inline)) void eq__t932t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2532t) {
  uint64_t __t933t__=0;
  uint64_t n=0;
  uint64_t __t934t__=0;
  char __t935t__=0;
  char __t936t=0;
  char __t937t__=0;
  char __t938t=0;
  char z=0;
  len__t854t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t933t__);
  n=__t933t__;
  len__t854t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t934t__);
  neq__t144t(n,__t934t__,&__t935t__);
  if(__t935t__){
  __t936t=0;
  goto __t_return;
  }
  neq__t858t(x__dat__first,y__dat__first,&__t937t__);
  if(__t937t__){
  __t938t=0;
  __t936t=__t938t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t936t=z;
  goto __t_return;
  __t_return:
  *__t2532t=__t936t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2533t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2533t=z;
}

int at__t2175t(char** __t2534t, uint64_t* __t2535t, uint16_t* __t2536t, uint16_t* __t2537t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2538t) {
  char* data__unsafe_ptr=*__t2534t;
  uint64_t data__unsafe_size=*__t2535t;
  uint16_t data__unsafe_offset=*__t2536t;
  uint16_t data__unsafe_align=*__t2537t;
  char* __t2176t__unsafe_ptr=0;
  uint64_t __t2176t__dat__pos=0;
  uint64_t __t2176t__dat__length=0;
  char __t2176t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t2177t__=0;
  uint64_t __t2178t=0;
  uint64_t __t2179t=0;
  char* __t2180t__=0;
  char* __t2181t__s__unsafe_ptr=0;
  uint64_t __t2181t__s__dat__pos=0;
  uint64_t __t2181t__s__dat__length=0;
  char __t2181t__s__dat__first=0;
  uint64_t __t2181t__cost=0;
  char* __t2182t__unsafe_ptr=0;
  uint64_t __t2182t__dat__pos=0;
  uint64_t __t2182t__dat__length=0;
  char __t2182t__dat__first=0;
  int __t2183t=0;
  int __t2184t__=0;
  uint64_t __t2185t__=0;
  uint64_t n=0;
  uint64_t __t2186t__=0;
  uint64_t pos=0;
  uint64_t __t2187t__from=0;
  uint64_t __t2187t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2188t=0;
  uint64_t __t2189t__=0;
  uint64_t i=0;
  uint64_t __t2190t__=0;
  uint64_t __t2191t=0;
  uint64_t idx=0;
  char __t2192t__=0;
  uint64_t __t2193t__=0;
  uint64_t __t2194t=0;
  char __t2195t__=0;
  char* __t2196t__=0;
  char* __t2197t__s__unsafe_ptr=0;
  uint64_t __t2197t__s__dat__pos=0;
  uint64_t __t2197t__s__dat__length=0;
  char __t2197t__s__dat__first=0;
  uint64_t __t2197t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t2198t__unsafe_ptr=0;
  uint64_t __t2198t__dat__pos=0;
  uint64_t __t2198t__dat__length=0;
  char __t2198t__dat__first=0;
  char __t2199t__=0;
  char* __t2200t__=0;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__dat__pos=0;
  uint64_t __t2201t__dat__length=0;
  char __t2201t__dat__first=0;
  char __t2202t__=0;
  char __t2203t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t2204t__=0;
  char* __t2205t__s__unsafe_ptr=0;
  uint64_t __t2205t__s__dat__pos=0;
  uint64_t __t2205t__s__dat__length=0;
  char __t2205t__s__dat__first=0;
  uint64_t __t2205t__cost=0;
  char* __t2206t__unsafe_ptr=0;
  uint64_t __t2206t__dat__pos=0;
  uint64_t __t2206t__dat__length=0;
  char __t2206t__dat__first=0;
  char* __t2207t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1895t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t2176t__unsafe_ptr,&__t2176t__dat__pos,&__t2176t__dat__length,&__t2176t__dat__first);
  k__unsafe_ptr=__t2176t__unsafe_ptr;
  k__dat__pos=__t2176t__dat__pos;
  k__dat__length=__t2176t__dat__length;
  k__dat__first=__t2176t__dat__first;
  is_zero__t1899t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2177t__);
  if(__t2177t__){
  __t2178t=0;
  goto __t_return;
  }
  __t2179t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t2179t,&__t2180t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2180t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2181t__s__unsafe_ptr,__t2180t__,8);
  memcpy(&__t2181t__s__dat__pos,__t2180t__+8,8);
  memcpy(&__t2181t__s__dat__length,__t2180t__+16,8);
  memcpy(&__t2181t__s__dat__first,__t2180t__+24,1);
  memcpy(&__t2181t__cost,__t2180t__+25,8);
  raw__t1893t(__t2181t__s__unsafe_ptr,__t2181t__s__dat__pos,__t2181t__s__dat__length,__t2181t__s__dat__first,__t2181t__cost,&__t2182t__unsafe_ptr,&__t2182t__dat__pos,&__t2182t__dat__length,&__t2182t__dat__first);
  not__t37t(__t2183t,&__t2184t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t2185t__);
  n=__t2185t__;
  __t_errcode=hash__t1844t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t2186t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t2186t__;
  range__t471t(n,&__t2187t__from,&__t2187t__to);
  iter__from=__t2187t__from;
  iter__to=__t2187t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t2189t__);
  __t2188t=__t_complain;
  i=__t2189t__;
  __t2188t=__t2188t==0;
  if(!__t2188t){
  break;
  }
  add__t175t(pos,i,&__t2190t__);
  __t2191t=__t2190t__;
  idx=__t2191t;
  ge__t324t(idx,n,&__t2192t__);
  if(__t2192t__){
  __t_errcode=sub__t352t(idx,n,&__t2193t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t2193t__;
  }
  __t2194t=0;
  eq__t120t(idx,__t2194t,&__t2195t__);
  if(__t2195t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2196t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2196t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2197t__s__unsafe_ptr,__t2196t__,8);
  memcpy(&__t2197t__s__dat__pos,__t2196t__+8,8);
  memcpy(&__t2197t__s__dat__length,__t2196t__+16,8);
  memcpy(&__t2197t__s__dat__first,__t2196t__+24,1);
  memcpy(&__t2197t__cost,__t2196t__+25,8);
  entry__s__unsafe_ptr=__t2197t__s__unsafe_ptr;
  entry__s__dat__pos=__t2197t__s__dat__pos;
  entry__s__dat__length=__t2197t__s__dat__length;
  entry__s__dat__first=__t2197t__s__dat__first;
  entry__cost=__t2197t__cost;
  raw__t1893t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2198t__unsafe_ptr,&__t2198t__dat__pos,&__t2198t__dat__length,&__t2198t__dat__first);
  is_zero__t1899t(__t2198t__unsafe_ptr,__t2198t__dat__pos,__t2198t__dat__length,__t2198t__dat__first,&__t2199t__);
  if(__t2199t__){
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2200t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2200t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2200t__,&k__unsafe_ptr,8);
  memcpy(__t2200t__+8,&k__dat__pos,8);
  memcpy(__t2200t__+16,&k__dat__length,8);
  memcpy(__t2200t__+24,&k__dat__first,1);
  memcpy(__t2200t__+25,&i,8);
  __t2178t=idx;
  goto __t_return;
  }
  raw__t1893t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2201t__unsafe_ptr,&__t2201t__dat__pos,&__t2201t__dat__length,&__t2201t__dat__first);
  eq__t932t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t2201t__unsafe_ptr,__t2201t__dat__pos,__t2201t__dat__length,__t2201t__dat__first,&__t2202t__);
  if(__t2202t__){
  __t2178t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t2203t__);
  if(__t2203t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2204t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2204t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2205t__s__unsafe_ptr,__t2204t__,8);
  memcpy(&__t2205t__s__dat__pos,__t2204t__+8,8);
  memcpy(&__t2205t__s__dat__length,__t2204t__+16,8);
  memcpy(&__t2205t__s__dat__first,__t2204t__+24,1);
  memcpy(&__t2205t__cost,__t2204t__+25,8);
  raw__t1893t(__t2205t__s__unsafe_ptr,__t2205t__s__dat__pos,__t2205t__s__dat__length,__t2205t__s__dat__first,__t2205t__cost,&__t2206t__unsafe_ptr,&__t2206t__dat__pos,&__t2206t__dat__length,&__t2206t__dat__first);
  k__unsafe_ptr=__t2206t__unsafe_ptr;
  k__dat__pos=__t2206t__dat__pos;
  k__dat__length=__t2206t__dat__length;
  k__dat__first=__t2206t__dat__first;
  __t_errcode=mutget__t633t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2207t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2207t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2207t__,&tmp__unsafe_ptr,8);
  memcpy(__t2207t__+8,&tmp__dat__pos,8);
  memcpy(__t2207t__+16,&tmp__dat__length,8);
  memcpy(__t2207t__+24,&tmp__dat__first,1);
  memcpy(__t2207t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2534t=data__unsafe_ptr;
  *__t2535t=data__unsafe_size;
  *__t2536t=data__unsafe_offset;
  *__t2537t=data__unsafe_align;
  *__t2538t=__t2178t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2300t(char** __t2539t, uint64_t* __t2540t, uint16_t* __t2541t, uint16_t* __t2542t, char** __t2543t, uint64_t* __t2544t, uint16_t* __t2545t, uint16_t* __t2546t, const char* key, char** __t2547t) {
  char* keys__unsafe_ptr=*__t2539t;
  uint64_t keys__unsafe_size=*__t2540t;
  uint16_t keys__unsafe_offset=*__t2541t;
  uint16_t keys__unsafe_align=*__t2542t;
  char* values__unsafe_ptr=*__t2543t;
  uint64_t values__unsafe_size=*__t2544t;
  uint16_t values__unsafe_offset=*__t2545t;
  uint16_t values__unsafe_align=*__t2546t;
  char* __t2301t__unsafe_ptr=0;
  uint64_t __t2301t__dat__pos=0;
  uint64_t __t2301t__dat__length=0;
  char __t2301t__dat__first=0;
  uint64_t __t2302t__=0;
  char* __t2303t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(key,&__t2301t__unsafe_ptr,&__t2301t__dat__pos,&__t2301t__dat__length,&__t2301t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2175t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2301t__unsafe_ptr,__t2301t__dat__pos,__t2301t__dat__length,__t2301t__dat__first,&__t2302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t633t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2302t__,&__t2303t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2539t=keys__unsafe_ptr;
  *__t2540t=keys__unsafe_size;
  *__t2541t=keys__unsafe_offset;
  *__t2542t=keys__unsafe_align;
  *__t2543t=values__unsafe_ptr;
  *__t2544t=values__unsafe_size;
  *__t2545t=values__unsafe_offset;
  *__t2546t=values__unsafe_align;
  *__t2547t=__t2303t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2548t, uint64_t* __t2549t, uint64_t* __t2550t, char* __t2551t) {
  goto __t_return;
  __t_return:
  *__t2548t=other__unsafe_ptr;
  *__t2549t=other__dat__pos;
  *__t2550t=other__dat__length;
  *__t2551t=other__dat__first;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2552t, uint64_t* __t2553t, uint16_t* __t2554t, uint16_t* __t2555t, uint64_t pos, char** __t2556t, uint64_t* __t2557t, uint16_t* __t2558t, uint16_t* __t2559t, uint64_t* __t2560t) {
  char* buf__unsafe_ptr=*__t2552t;
  uint64_t buf__unsafe_size=*__t2553t;
  uint16_t buf__unsafe_offset=*__t2554t;
  uint16_t buf__unsafe_align=*__t2555t;
  goto __t_return;
  __t_return:
  *__t2552t=buf__unsafe_ptr;
  *__t2553t=buf__unsafe_size;
  *__t2554t=buf__unsafe_offset;
  *__t2555t=buf__unsafe_align;
  *__t2556t=buf__unsafe_ptr;
  *__t2557t=buf__unsafe_size;
  *__t2558t=buf__unsafe_offset;
  *__t2559t=buf__unsafe_align;
  *__t2560t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2561t, uint64_t* __t2562t, uint16_t* __t2563t, uint16_t* __t2564t, uint64_t* __t2565t, uint64_t length, char** __t2566t, uint64_t* __t2567t, uint16_t* __t2568t, uint16_t* __t2569t, uint64_t* __t2570t) {
  char* allocator__buf__unsafe_ptr=*__t2561t;
  uint64_t allocator__buf__unsafe_size=*__t2562t;
  uint16_t allocator__buf__unsafe_offset=*__t2563t;
  uint16_t allocator__buf__unsafe_align=*__t2564t;
  uint64_t allocator__pos=*__t2565t;
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
  *__t2561t=allocator__buf__unsafe_ptr;
  *__t2562t=allocator__buf__unsafe_size;
  *__t2563t=allocator__buf__unsafe_offset;
  *__t2564t=allocator__buf__unsafe_align;
  *__t2565t=allocator__pos;
  *__t2566t=__t692t__buf__unsafe_ptr;
  *__t2567t=__t692t__buf__unsafe_size;
  *__t2568t=__t692t__buf__unsafe_offset;
  *__t2569t=__t692t__buf__unsafe_align;
  *__t2570t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t2571t, uint64_t* __t2572t, uint16_t* __t2573t, uint16_t* __t2574t, uint64_t* __t2575t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2576t, uint64_t* __t2577t, uint64_t* __t2578t, char* __t2579t) {
  char* CHARS__buf__unsafe_ptr=*__t2571t;
  uint64_t CHARS__buf__unsafe_size=*__t2572t;
  uint16_t CHARS__buf__unsafe_offset=*__t2573t;
  uint16_t CHARS__buf__unsafe_align=*__t2574t;
  uint64_t CHARS__pos=*__t2575t;
  char* __t874t__unsafe_ptr=0;
  uint64_t __t874t__dat__pos=0;
  uint64_t __t874t__dat__length=0;
  char __t874t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t875t__=0;
  char* __t876t__buf__unsafe_ptr=0;
  uint64_t __t876t__buf__unsafe_size=0;
  uint16_t __t876t__buf__unsafe_offset=0;
  uint16_t __t876t__buf__unsafe_align=0;
  uint64_t __t876t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t877t=0;
  char* __t878t__unsafe_ptr=0;
  uint64_t __t878t__dat__pos=0;
  uint64_t __t878t__dat__length=0;
  char __t878t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t874t__unsafe_ptr,&__t874t__dat__pos,&__t874t__dat__length,&__t874t__dat__first);
  other__unsafe_ptr=__t874t__unsafe_ptr;
  other__dat__pos=__t874t__dat__pos;
  other__dat__length=__t874t__dat__length;
  other__dat__first=__t874t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t875t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t875t__,&__t876t__buf__unsafe_ptr,&__t876t__buf__unsafe_size,&__t876t__buf__unsafe_offset,&__t876t__buf__unsafe_align,&__t876t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t876t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t876t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t876t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t876t__buf__unsafe_align;
  surface__pos=__t876t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t877t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t877t,other__dat__length,other__dat__first,&__t878t__unsafe_ptr,&__t878t__dat__pos,&__t878t__dat__length,&__t878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2571t=CHARS__buf__unsafe_ptr;
  *__t2572t=CHARS__buf__unsafe_size;
  *__t2573t=CHARS__buf__unsafe_offset;
  *__t2574t=CHARS__buf__unsafe_align;
  *__t2575t=CHARS__pos;
  *__t2576t=__t878t__unsafe_ptr;
  *__t2577t=__t878t__dat__pos;
  *__t2578t=__t878t__dat__length;
  *__t2579t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2314t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2580t, char** __t2581t, uint64_t* __t2582t, uint64_t* __t2583t, char* __t2584t) {
  uint64_t pos=*__t2580t;
  uint64_t __t2315t=0;
  char __t2316t__=0;
  uint64_t __t2317t=0;
  uint64_t __t2318t__=0;
  uint64_t __t2319t=0;
  char* __t2320t__=0;
  char* __t2321t__s__unsafe_ptr=0;
  uint64_t __t2321t__s__dat__pos=0;
  uint64_t __t2321t__s__dat__length=0;
  char __t2321t__s__dat__first=0;
  uint64_t __t2321t__cost=0;
  char* __t2322t__unsafe_ptr=0;
  uint64_t __t2322t__dat__pos=0;
  uint64_t __t2322t__dat__length=0;
  char __t2322t__dat__first=0;
  char* __t2323t__=0;
  char* __t2324t__s__unsafe_ptr=0;
  uint64_t __t2324t__s__dat__pos=0;
  uint64_t __t2324t__s__dat__length=0;
  char __t2324t__s__dat__first=0;
  uint64_t __t2324t__cost=0;
  char* __t2325t__unsafe_ptr=0;
  uint64_t __t2325t__dat__pos=0;
  uint64_t __t2325t__dat__length=0;
  char __t2325t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2326t=0;
  uint64_t __t2327t__=0;
  char* __t2328t__unsafe_ptr=0;
  uint64_t __t2328t__dat__pos=0;
  uint64_t __t2328t__dat__length=0;
  char __t2328t__dat__first=0;
  char __t2329t__=0;
  char* __t2330t__=0;
  char* __t2331t__s__unsafe_ptr=0;
  uint64_t __t2331t__s__dat__pos=0;
  uint64_t __t2331t__s__dat__length=0;
  char __t2331t__s__dat__first=0;
  uint64_t __t2331t__cost=0;
  char* __t2332t__unsafe_ptr=0;
  uint64_t __t2332t__dat__pos=0;
  uint64_t __t2332t__dat__length=0;
  char __t2332t__dat__first=0;
  uint64_t __t2333t=0;
  uint64_t __t2334t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2315t=0;
  eq__t120t(pos,__t2315t,&__t2316t__);
  if(__t2316t__){
  __t2317t=1;
  add__t175t(pos,__t2317t,&__t2318t__);
  pos=__t2318t__;
  __t2319t=0;
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2319t,&__t2320t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2320t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2321t__s__unsafe_ptr,__t2320t__,8);
  memcpy(&__t2321t__s__dat__pos,__t2320t__+8,8);
  memcpy(&__t2321t__s__dat__length,__t2320t__+16,8);
  memcpy(&__t2321t__s__dat__first,__t2320t__+24,1);
  memcpy(&__t2321t__cost,__t2320t__+25,8);
  raw__t1893t(__t2321t__s__unsafe_ptr,__t2321t__s__dat__pos,__t2321t__s__dat__length,__t2321t__s__dat__first,__t2321t__cost,&__t2322t__unsafe_ptr,&__t2322t__dat__pos,&__t2322t__dat__length,&__t2322t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2323t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2323t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2324t__s__unsafe_ptr,__t2323t__,8);
  memcpy(&__t2324t__s__dat__pos,__t2323t__+8,8);
  memcpy(&__t2324t__s__dat__length,__t2323t__+16,8);
  memcpy(&__t2324t__s__dat__first,__t2323t__+24,1);
  memcpy(&__t2324t__cost,__t2323t__+25,8);
  raw__t1893t(__t2324t__s__unsafe_ptr,__t2324t__s__dat__pos,__t2324t__s__dat__length,__t2324t__s__dat__first,__t2324t__cost,&__t2325t__unsafe_ptr,&__t2325t__dat__pos,&__t2325t__dat__length,&__t2325t__dat__first);
  ret__unsafe_ptr=__t2325t__unsafe_ptr;
  ret__dat__pos=__t2325t__dat__pos;
  ret__dat__length=__t2325t__dat__length;
  ret__dat__first=__t2325t__dat__first;
  __t2326t=1;
  add__t175t(pos,__t2326t,&__t2327t__);
  pos=__t2327t__;
  while(1){
  raw__t1895t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2328t__unsafe_ptr,&__t2328t__dat__pos,&__t2328t__dat__length,&__t2328t__dat__first);
  is_zero__t1899t(__t2328t__unsafe_ptr,__t2328t__dat__pos,__t2328t__dat__length,__t2328t__dat__first,&__t2329t__);
  if(!__t2329t__){
  break;
  }
  __t_errcode=get__t640t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2330t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2331t__s__unsafe_ptr,__t2330t__,8);
  memcpy(&__t2331t__s__dat__pos,__t2330t__+8,8);
  memcpy(&__t2331t__s__dat__length,__t2330t__+16,8);
  memcpy(&__t2331t__s__dat__first,__t2330t__+24,1);
  memcpy(&__t2331t__cost,__t2330t__+25,8);
  raw__t1893t(__t2331t__s__unsafe_ptr,__t2331t__s__dat__pos,__t2331t__s__dat__length,__t2331t__s__dat__first,__t2331t__cost,&__t2332t__unsafe_ptr,&__t2332t__dat__pos,&__t2332t__dat__length,&__t2332t__dat__first);
  ret__unsafe_ptr=__t2332t__unsafe_ptr;
  ret__dat__pos=__t2332t__dat__pos;
  ret__dat__length=__t2332t__dat__length;
  ret__dat__first=__t2332t__dat__first;
  __t2333t=1;
  add__t175t(pos,__t2333t,&__t2334t__);
  pos=__t2334t__;
  }
  __t2322t__unsafe_ptr=ret__unsafe_ptr;
  __t2322t__dat__pos=ret__dat__pos;
  __t2322t__dat__length=ret__dat__length;
  __t2322t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2580t=pos;
  *__t2581t=__t2322t__unsafe_ptr;
  *__t2582t=__t2322t__dat__pos;
  *__t2583t=__t2322t__dat__length;
  *__t2584t=__t2322t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2365t(char** __t2585t, uint64_t* __t2586t, uint16_t* __t2587t, uint16_t* __t2588t, uint64_t* __t2589t, char** __t2590t, uint64_t* __t2591t, uint16_t* __t2592t, uint16_t* __t2593t, char** __t2594t, uint64_t* __t2595t, uint16_t* __t2596t, uint16_t* __t2597t) {
  char* buf__buf__unsafe_ptr=*__t2585t;
  uint64_t buf__buf__unsafe_size=*__t2586t;
  uint16_t buf__buf__unsafe_offset=*__t2587t;
  uint16_t buf__buf__unsafe_align=*__t2588t;
  uint64_t buf__pos=*__t2589t;
  char* __t2366t__unsafe_ptr=0;
  uint64_t __t2366t__unsafe_size=0;
  uint16_t __t2366t__unsafe_offset=0;
  uint16_t __t2366t__unsafe_align=0;
  uint64_t __t2367t=0;
  char* __t2368t__unsafe_ptr=0;
  uint64_t __t2368t__unsafe_size=0;
  uint16_t __t2368t__unsafe_offset=0;
  uint16_t __t2368t__unsafe_align=0;
  char __t2369t____t534t__=0;
  char* __t2370t__keys__unsafe_ptr=0;
  uint64_t __t2370t__keys__unsafe_size=0;
  uint16_t __t2370t__keys__unsafe_offset=0;
  uint16_t __t2370t__keys__unsafe_align=0;
  char* __t2370t__values__unsafe_ptr=0;
  uint64_t __t2370t__values__unsafe_size=0;
  uint16_t __t2370t__values__unsafe_offset=0;
  uint16_t __t2370t__values__unsafe_align=0;
  char __t2371t____t2283t____t534t__=0;
  char* __t2372t__keys__unsafe_ptr=0;
  uint64_t __t2372t__keys__unsafe_size=0;
  uint16_t __t2372t__keys__unsafe_offset=0;
  uint16_t __t2372t__keys__unsafe_align=0;
  char* __t2372t__values__unsafe_ptr=0;
  uint64_t __t2372t__values__unsafe_size=0;
  uint16_t __t2372t__values__unsafe_offset=0;
  uint16_t __t2372t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2374t__=0;
  char* __t2376t__unsafe_ptr=0;
  uint64_t __t2376t__dat__pos=0;
  uint64_t __t2376t__dat__length=0;
  char __t2376t__dat__first=0;
  char* __t2377t__unsafe_ptr=0;
  uint64_t __t2377t__dat__pos=0;
  uint64_t __t2377t__dat__length=0;
  char __t2377t__dat__first=0;
  char* __t2379t__=0;
  char* __t2381t__unsafe_ptr=0;
  uint64_t __t2381t__dat__pos=0;
  uint64_t __t2381t__dat__length=0;
  char __t2381t__dat__first=0;
  char* __t2382t__unsafe_ptr=0;
  uint64_t __t2382t__dat__pos=0;
  uint64_t __t2382t__dat__length=0;
  char __t2382t__dat__first=0;
  uint64_t __t2383t=0;
  uint64_t __t2384t=0;
  char* it__map__keys__unsafe_ptr=0;
  uint64_t it__map__keys__unsafe_size=0;
  uint16_t it__map__keys__unsafe_offset=0;
  uint16_t it__map__keys__unsafe_align=0;
  uint64_t it____t2384t=0;
  char __t2385t=0;
  char* __t2386t__unsafe_ptr=0;
  uint64_t __t2386t__dat__pos=0;
  uint64_t __t2386t__dat__length=0;
  char __t2386t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2357t(&__t2366t__unsafe_ptr,&__t2366t__unsafe_size,&__t2366t__unsafe_offset,&__t2366t__unsafe_align);
  __t2367t=128;
  __t_errcode=alloc__t532t(&__t2366t__unsafe_ptr,&__t2366t__unsafe_size,&__t2366t__unsafe_offset,&__t2366t__unsafe_align,__t2367t,&__t2368t__unsafe_ptr,&__t2368t__unsafe_size,&__t2368t__unsafe_offset,&__t2368t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t2276t(&__t2368t__unsafe_ptr,&__t2368t__unsafe_size,&__t2368t__unsafe_offset,&__t2368t__unsafe_align,&__t2370t__keys__unsafe_ptr,&__t2370t__keys__unsafe_size,&__t2370t__keys__unsafe_offset,&__t2370t__keys__unsafe_align,&__t2370t__values__unsafe_ptr,&__t2370t__values__unsafe_size,&__t2370t__values__unsafe_offset,&__t2370t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2372t__keys__unsafe_ptr=__t2370t__keys__unsafe_ptr;
  __t2372t__keys__unsafe_size=__t2370t__keys__unsafe_size;
  __t2372t__keys__unsafe_offset=__t2370t__keys__unsafe_offset;
  __t2372t__keys__unsafe_align=__t2370t__keys__unsafe_align;
  __t2372t__values__unsafe_ptr=__t2370t__values__unsafe_ptr;
  __t2372t__values__unsafe_size=__t2370t__values__unsafe_size;
  __t2372t__values__unsafe_offset=__t2370t__values__unsafe_offset;
  __t2372t__values__unsafe_align=__t2370t__values__unsafe_align;
  __t_errcode=mutget__t2300t(&__t2372t__keys__unsafe_ptr,&__t2372t__keys__unsafe_size,&__t2372t__keys__unsafe_offset,&__t2372t__keys__unsafe_align,&__t2372t__values__unsafe_ptr,&__t2372t__values__unsafe_size,&__t2372t__values__unsafe_offset,&__t2372t__values__unsafe_align,__t2373t,&__t2374t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t2375t,&__t2376t__unsafe_ptr,&__t2376t__dat__pos,&__t2376t__dat__length,&__t2376t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t873t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2376t__unsafe_ptr,__t2376t__dat__pos,__t2376t__dat__length,__t2376t__dat__first,&__t2377t__unsafe_ptr,&__t2377t__dat__pos,&__t2377t__dat__length,&__t2377t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2374t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2374t__,&__t2377t__unsafe_ptr,8);
  memcpy(__t2374t__+8,&__t2377t__dat__pos,8);
  memcpy(__t2374t__+16,&__t2377t__dat__length,8);
  memcpy(__t2374t__+24,&__t2377t__dat__first,1);
  __t_errcode=mutget__t2300t(&__t2372t__keys__unsafe_ptr,&__t2372t__keys__unsafe_size,&__t2372t__keys__unsafe_offset,&__t2372t__keys__unsafe_align,&__t2372t__values__unsafe_ptr,&__t2372t__values__unsafe_size,&__t2372t__values__unsafe_offset,&__t2372t__values__unsafe_align,__t2378t,&__t2379t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t2380t,&__t2381t__unsafe_ptr,&__t2381t__dat__pos,&__t2381t__dat__length,&__t2381t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t873t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2381t__unsafe_ptr,__t2381t__dat__pos,__t2381t__dat__length,__t2381t__dat__first,&__t2382t__unsafe_ptr,&__t2382t__dat__pos,&__t2382t__dat__length,&__t2382t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2379t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2379t__,&__t2382t__unsafe_ptr,8);
  memcpy(__t2379t__+8,&__t2382t__dat__pos,8);
  memcpy(__t2379t__+16,&__t2382t__dat__length,8);
  memcpy(__t2379t__+24,&__t2382t__dat__first,1);
  __t2383t=0;
  __t2384t=__t2383t;
  it____t2384t=__t2384t;
  while(1){
  __t_complain=next__t2314t(__t2372t__keys__unsafe_ptr,__t2372t__keys__unsafe_size,__t2372t__keys__unsafe_offset,__t2372t__keys__unsafe_align,&it____t2384t,&__t2386t__unsafe_ptr,&__t2386t__dat__pos,&__t2386t__dat__length,&__t2386t__dat__first);
  __t2385t=__t_complain;
  key__unsafe_ptr=__t2386t__unsafe_ptr;
  key__dat__pos=__t2386t__dat__pos;
  key__dat__length=__t2386t__dat__length;
  key__dat__first=__t2386t__dat__first;
  __t2385t=__t2385t==0;
  if(!__t2385t){
  break;
  }
  print__t987t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2372t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2372t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2372t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2372t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2372t__values__unsafe_ptr;
  map__values__unsafe_size=__t2372t__values__unsafe_size;
  map__values__unsafe_offset=__t2372t__values__unsafe_offset;
  map__values__unsafe_align=__t2372t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2371t____t2283t____t534t__);
  if(__t2371t____t2283t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2369t____t534t__);
  if(__t2369t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2585t=buf__buf__unsafe_ptr;
  *__t2586t=buf__buf__unsafe_size;
  *__t2587t=buf__buf__unsafe_offset;
  *__t2588t=buf__buf__unsafe_align;
  *__t2589t=buf__pos;
  *__t2590t=map__keys__unsafe_ptr;
  *__t2591t=map__keys__unsafe_size;
  *__t2592t=map__keys__unsafe_offset;
  *__t2593t=map__keys__unsafe_align;
  *__t2594t=map__values__unsafe_ptr;
  *__t2595t=map__values__unsafe_size;
  *__t2596t=map__values__unsafe_offset;
  *__t2597t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2388t(char** __t2598t, uint64_t* __t2599t, uint16_t* __t2600t, uint16_t* __t2601t, char** __t2602t, uint64_t* __t2603t, uint16_t* __t2604t, uint16_t* __t2605t, char** __t2606t, uint64_t* __t2607t, uint16_t* __t2608t, uint16_t* __t2609t, uint64_t* __t2610t) {
  char* __t2391t__unsafe_ptr=0;
  uint64_t __t2391t__unsafe_size=0;
  uint16_t __t2391t__unsafe_offset=0;
  uint16_t __t2391t__unsafe_align=0;
  uint64_t __t2392t=0;
  uint64_t __t2393t__=0;
  char* __t2394t__unsafe_ptr=0;
  uint64_t __t2394t__unsafe_size=0;
  uint16_t __t2394t__unsafe_offset=0;
  uint16_t __t2394t__unsafe_align=0;
  char __t2395t____t534t__=0;
  char* __t2396t__buf__unsafe_ptr=0;
  uint64_t __t2396t__buf__unsafe_size=0;
  uint16_t __t2396t__buf__unsafe_offset=0;
  uint16_t __t2396t__buf__unsafe_align=0;
  uint64_t __t2396t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2397t__keys__unsafe_ptr=0;
  uint64_t __t2397t__keys__unsafe_size=0;
  uint16_t __t2397t__keys__unsafe_offset=0;
  uint16_t __t2397t__keys__unsafe_align=0;
  char* __t2397t__values__unsafe_ptr=0;
  uint64_t __t2397t__values__unsafe_size=0;
  uint16_t __t2397t__values__unsafe_offset=0;
  uint16_t __t2397t__values__unsafe_align=0;
  char __t2398t____t2369t____t534t__=0;
  char __t2398t____t2371t____t2283t____t534t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2389t(&__t2391t__unsafe_ptr,&__t2391t__unsafe_size,&__t2391t__unsafe_offset,&__t2391t__unsafe_align);
  __t2392t=4;
  KB__t481t(__t2392t,&__t2393t__);
  __t_errcode=alloc__t532t(&__t2391t__unsafe_ptr,&__t2391t__unsafe_size,&__t2391t__unsafe_offset,&__t2391t__unsafe_align,__t2393t__,&__t2394t__unsafe_ptr,&__t2394t__unsafe_size,&__t2394t__unsafe_offset,&__t2394t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t2394t__unsafe_ptr,&__t2394t__unsafe_size,&__t2394t__unsafe_offset,&__t2394t__unsafe_align,&__t2396t__buf__unsafe_ptr,&__t2396t__buf__unsafe_size,&__t2396t__buf__unsafe_offset,&__t2396t__buf__unsafe_align,&__t2396t__pos);
  buf__buf__unsafe_ptr=__t2396t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2396t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2396t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2396t__buf__unsafe_align;
  buf__pos=__t2396t__pos;
  __t_errcode=test__t2365t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2397t__keys__unsafe_ptr,&__t2397t__keys__unsafe_size,&__t2397t__keys__unsafe_offset,&__t2397t__keys__unsafe_align,&__t2397t__values__unsafe_ptr,&__t2397t__values__unsafe_size,&__t2397t__values__unsafe_offset,&__t2397t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2397t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2397t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2397t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2397t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2397t__values__unsafe_ptr;
  map__values__unsafe_size=__t2397t__values__unsafe_size;
  map__values__unsafe_offset=__t2397t__values__unsafe_offset;
  map__values__unsafe_align=__t2397t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(map__keys__unsafe_ptr,&__t2398t____t2371t____t2283t____t534t__);
  if(__t2398t____t2371t____t2283t____t534t__){
  free__t503t(&map__keys__unsafe_ptr);
  }
  exists__t447t(map__values__unsafe_ptr,&__t2398t____t2369t____t534t__);
  if(__t2398t____t2369t____t534t__){
  free__t503t(&map__values__unsafe_ptr);
  }
  exists__t447t(buf__buf__unsafe_ptr,&__t2395t____t534t__);
  if(__t2395t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2598t=map__keys__unsafe_ptr;
  *__t2599t=map__keys__unsafe_size;
  *__t2600t=map__keys__unsafe_offset;
  *__t2601t=map__keys__unsafe_align;
  *__t2602t=map__values__unsafe_ptr;
  *__t2603t=map__values__unsafe_size;
  *__t2604t=map__values__unsafe_offset;
  *__t2605t=map__values__unsafe_align;
  *__t2606t=buf__buf__unsafe_ptr;
  *__t2607t=buf__buf__unsafe_size;
  *__t2608t=buf__buf__unsafe_offset;
  *__t2609t=buf__buf__unsafe_align;
  *__t2610t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t1897t(const char* r, char** __t2611t, uint64_t* __t2612t, uint64_t* __t2613t, char* __t2614t) {
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__dat__pos=0;
  uint64_t __t1898t__dat__length=0;
  char __t1898t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(r,&__t1898t__unsafe_ptr,&__t1898t__dat__pos,&__t1898t__dat__length,&__t1898t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2611t=__t1898t__unsafe_ptr;
  *__t2612t=__t1898t__dat__pos;
  *__t2613t=__t1898t__dat__length;
  *__t2614t=__t1898t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t1941t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2615t) {
  char* __t1942t__unsafe_ptr=0;
  uint64_t __t1942t__dat__pos=0;
  uint64_t __t1942t__dat__length=0;
  char __t1942t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1943t__=0;
  uint64_t __t1944t=0;
  uint64_t __t1945t=0;
  char* __t1946t__=0;
  char* __t1947t__s__unsafe_ptr=0;
  uint64_t __t1947t__s__dat__pos=0;
  uint64_t __t1947t__s__dat__length=0;
  char __t1947t__s__dat__first=0;
  uint64_t __t1947t__cost=0;
  char* __t1948t__unsafe_ptr=0;
  uint64_t __t1948t__dat__pos=0;
  uint64_t __t1948t__dat__length=0;
  char __t1948t__dat__first=0;
  int __t1949t=0;
  int __t1950t__=0;
  uint64_t __t1951t__=0;
  uint64_t n=0;
  uint64_t __t1952t__=0;
  uint64_t pos=0;
  uint64_t __t1953t__from=0;
  uint64_t __t1953t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1954t=0;
  uint64_t __t1955t__=0;
  uint64_t i=0;
  uint64_t __t1956t__=0;
  uint64_t __t1957t=0;
  uint64_t idx=0;
  char __t1958t__=0;
  uint64_t __t1959t__=0;
  uint64_t __t1960t=0;
  char __t1961t__=0;
  char* __t1962t__=0;
  char* __t1963t__s__unsafe_ptr=0;
  uint64_t __t1963t__s__dat__pos=0;
  uint64_t __t1963t__s__dat__length=0;
  char __t1963t__s__dat__first=0;
  uint64_t __t1963t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1964t__unsafe_ptr=0;
  uint64_t __t1964t__dat__pos=0;
  uint64_t __t1964t__dat__length=0;
  char __t1964t__dat__first=0;
  char __t1965t__=0;
  char* __t1966t__unsafe_ptr=0;
  uint64_t __t1966t__dat__pos=0;
  uint64_t __t1966t__dat__length=0;
  char __t1966t__dat__first=0;
  char __t1967t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1895t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1942t__unsafe_ptr,&__t1942t__dat__pos,&__t1942t__dat__length,&__t1942t__dat__first);
  k__unsafe_ptr=__t1942t__unsafe_ptr;
  k__dat__pos=__t1942t__dat__pos;
  k__dat__length=__t1942t__dat__length;
  k__dat__first=__t1942t__dat__first;
  is_zero__t1899t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1943t__);
  if(__t1943t__){
  __t1944t=0;
  goto __t_return;
  }
  __t1945t=0;
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1945t,&__t1946t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1946t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1947t__s__unsafe_ptr,__t1946t__,8);
  memcpy(&__t1947t__s__dat__pos,__t1946t__+8,8);
  memcpy(&__t1947t__s__dat__length,__t1946t__+16,8);
  memcpy(&__t1947t__s__dat__first,__t1946t__+24,1);
  memcpy(&__t1947t__cost,__t1946t__+25,8);
  raw__t1893t(__t1947t__s__unsafe_ptr,__t1947t__s__dat__pos,__t1947t__s__dat__length,__t1947t__s__dat__first,__t1947t__cost,&__t1948t__unsafe_ptr,&__t1948t__dat__pos,&__t1948t__dat__length,&__t1948t__dat__first);
  not__t37t(__t1949t,&__t1950t__);
  len__t647t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1951t__);
  n=__t1951t__;
  __t_errcode=hash__t1844t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1952t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1952t__;
  range__t471t(n,&__t1953t__from,&__t1953t__to);
  iter__from=__t1953t__from;
  iter__to=__t1953t__to;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1955t__);
  __t1954t=__t_complain;
  i=__t1955t__;
  __t1954t=__t1954t==0;
  if(!__t1954t){
  break;
  }
  add__t175t(pos,i,&__t1956t__);
  __t1957t=__t1956t__;
  idx=__t1957t;
  ge__t324t(idx,n,&__t1958t__);
  if(__t1958t__){
  __t_errcode=sub__t352t(idx,n,&__t1959t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1959t__;
  }
  __t1960t=0;
  eq__t120t(idx,__t1960t,&__t1961t__);
  if(__t1961t__){
  continue;
  }
  __t_errcode=get__t640t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1962t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1962t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1963t__s__unsafe_ptr,__t1962t__,8);
  memcpy(&__t1963t__s__dat__pos,__t1962t__+8,8);
  memcpy(&__t1963t__s__dat__length,__t1962t__+16,8);
  memcpy(&__t1963t__s__dat__first,__t1962t__+24,1);
  memcpy(&__t1963t__cost,__t1962t__+25,8);
  entry__s__unsafe_ptr=__t1963t__s__unsafe_ptr;
  entry__s__dat__pos=__t1963t__s__dat__pos;
  entry__s__dat__length=__t1963t__s__dat__length;
  entry__s__dat__first=__t1963t__s__dat__first;
  entry__cost=__t1963t__cost;
  raw__t1893t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1964t__unsafe_ptr,&__t1964t__dat__pos,&__t1964t__dat__length,&__t1964t__dat__first);
  is_zero__t1899t(__t1964t__unsafe_ptr,__t1964t__dat__pos,__t1964t__dat__length,__t1964t__dat__first,&__t1965t__);
  if(__t1965t__){
  continue;
  }
  raw__t1893t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1966t__unsafe_ptr,&__t1966t__dat__pos,&__t1966t__dat__length,&__t1966t__dat__first);
  eq__t932t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1966t__unsafe_ptr,__t1966t__dat__pos,__t1966t__dat__length,__t1966t__dat__first,&__t1967t__);
  if(__t1967t__){
  __t1944t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2615t=__t1944t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2292t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2616t) {
  char* __t2293t__unsafe_ptr=0;
  uint64_t __t2293t__dat__pos=0;
  uint64_t __t2293t__dat__length=0;
  char __t2293t__dat__first=0;
  uint64_t __t2294t__=0;
  char* __t2295t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1897t(key,&__t2293t__unsafe_ptr,&__t2293t__dat__pos,&__t2293t__dat__length,&__t2293t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1941t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2293t__unsafe_ptr,__t2293t__dat__pos,__t2293t__dat__length,__t2293t__dat__first,&__t2294t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t640t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2294t__,&__t2295t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2616t=__t2295t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2399t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2400t__=0;
  char* __t2401t__unsafe_ptr=0;
  uint64_t __t2401t__dat__pos=0;
  uint64_t __t2401t__dat__length=0;
  char __t2401t__dat__first=0;
  char* __t2403t__=0;
  char* __t2404t__unsafe_ptr=0;
  uint64_t __t2404t__dat__pos=0;
  uint64_t __t2404t__dat__length=0;
  char __t2404t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2292t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2373t,&__t2400t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2400t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2401t__unsafe_ptr,__t2400t__,8);
  memcpy(&__t2401t__dat__pos,__t2400t__+8,8);
  memcpy(&__t2401t__dat__length,__t2400t__+16,8);
  memcpy(&__t2401t__dat__first,__t2400t__+24,1);
  print__t987t(__t2401t__unsafe_ptr,__t2401t__dat__pos,__t2401t__dat__length,__t2401t__dat__first);
  __t_errcode=get__t2292t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2378t,&__t2403t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2403t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2404t__unsafe_ptr,__t2403t__,8);
  memcpy(&__t2404t__dat__pos,__t2403t__+8,8);
  memcpy(&__t2404t__dat__length,__t2403t__+16,8);
  memcpy(&__t2404t__dat__first,__t2403t__+24,1);
  print__t987t(__t2404t__unsafe_ptr,__t2404t__dat__pos,__t2404t__dat__length,__t2404t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2406t() {
  char* __t2408t__map__keys__unsafe_ptr=0;
  uint64_t __t2408t__map__keys__unsafe_size=0;
  uint16_t __t2408t__map__keys__unsafe_offset=0;
  uint16_t __t2408t__map__keys__unsafe_align=0;
  char* __t2408t__map__values__unsafe_ptr=0;
  uint64_t __t2408t__map__values__unsafe_size=0;
  uint16_t __t2408t__map__values__unsafe_offset=0;
  uint16_t __t2408t__map__values__unsafe_align=0;
  char* __t2408t__buf__buf__unsafe_ptr=0;
  uint64_t __t2408t__buf__buf__unsafe_size=0;
  uint16_t __t2408t__buf__buf__unsafe_offset=0;
  uint16_t __t2408t__buf__buf__unsafe_align=0;
  uint64_t __t2408t__buf__pos=0;
  char __t2409t____t2395t____t534t__=0;
  char __t2409t____t2398t____t2369t____t534t__=0;
  char __t2409t____t2398t____t2371t____t2283t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2388t(&__t2408t__map__keys__unsafe_ptr,&__t2408t__map__keys__unsafe_size,&__t2408t__map__keys__unsafe_offset,&__t2408t__map__keys__unsafe_align,&__t2408t__map__values__unsafe_ptr,&__t2408t__map__values__unsafe_size,&__t2408t__map__values__unsafe_offset,&__t2408t__map__values__unsafe_align,&__t2408t__buf__buf__unsafe_ptr,&__t2408t__buf__buf__unsafe_size,&__t2408t__buf__buf__unsafe_offset,&__t2408t__buf__buf__unsafe_align,&__t2408t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2399t(__t2408t__map__keys__unsafe_ptr,__t2408t__map__keys__unsafe_size,__t2408t__map__keys__unsafe_offset,__t2408t__map__keys__unsafe_align,__t2408t__map__values__unsafe_ptr,__t2408t__map__values__unsafe_size,__t2408t__map__values__unsafe_offset,__t2408t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2408t__map__keys__unsafe_ptr,&__t2409t____t2398t____t2371t____t2283t____t534t__);
  if(__t2409t____t2398t____t2371t____t2283t____t534t__){
  free__t503t(&__t2408t__map__keys__unsafe_ptr);
  }
  exists__t447t(__t2408t__map__values__unsafe_ptr,&__t2409t____t2398t____t2369t____t534t__);
  if(__t2409t____t2398t____t2369t____t534t__){
  free__t503t(&__t2408t__map__values__unsafe_ptr);
  }
  exists__t447t(__t2408t__buf__buf__unsafe_ptr,&__t2409t____t2395t____t534t__);
  if(__t2409t____t2395t____t534t__){
  free__t503t(&__t2408t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2406t();return 0;}