#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t374t="";
const char* const __t2450t=".s";
const char* const __t2442t="./smoll ";
const char* const __t2441t="./tests/passing/";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2434t(char** __t2460t, uint64_t* __t2461t, uint16_t* __t2462t, uint16_t* __t2463t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2460t=unsafe_ptr;
  *__t2461t=unsafe_size;
  *__t2462t=unsafe_offset;
  *__t2463t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2464t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2464t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2465t) {
  char* allocated=*__t2465t;
  if(allocated){
  free(allocated);
  }
  *__t2465t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2466t) {
  int value=0;
  *__t2466t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2467t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2467t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2468t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2468t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2469t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2469t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2470t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2470t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2471t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2471t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2472t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2472t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2473t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2473t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2474t) {
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
  *__t2474t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2475t, uint64_t* __t2476t, uint16_t* __t2477t, uint16_t* __t2478t, uint64_t size, char** __t2479t, uint64_t* __t2480t, uint16_t* __t2481t, uint16_t* __t2482t) {
  char* buffer__unsafe_ptr=*__t2475t;
  uint64_t buffer__unsafe_size=*__t2476t;
  uint16_t buffer__unsafe_offset=*__t2477t;
  uint16_t buffer__unsafe_align=*__t2478t;
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
  *__t2475t=buffer__unsafe_ptr;
  *__t2476t=buffer__unsafe_size;
  *__t2477t=buffer__unsafe_offset;
  *__t2478t=buffer__unsafe_align;
  *__t2479t=buffer__unsafe_ptr;
  *__t2480t=buffer__unsafe_size;
  *__t2481t=buffer__unsafe_offset;
  *__t2482t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2483t, uint64_t* __t2484t, uint16_t* __t2485t, uint16_t* __t2486t, uint64_t _pos, char** __t2487t, uint64_t* __t2488t, uint16_t* __t2489t, uint16_t* __t2490t, uint64_t* __t2491t) {
  char* buf__unsafe_ptr=*__t2483t;
  uint64_t buf__unsafe_size=*__t2484t;
  uint16_t buf__unsafe_offset=*__t2485t;
  uint16_t buf__unsafe_align=*__t2486t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2483t=buf__unsafe_ptr;
  *__t2484t=buf__unsafe_size;
  *__t2485t=buf__unsafe_offset;
  *__t2486t=buf__unsafe_align;
  *__t2487t=buf__unsafe_ptr;
  *__t2488t=buf__unsafe_size;
  *__t2489t=buf__unsafe_offset;
  *__t2490t=buf__unsafe_align;
  *__t2491t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2492t, uint64_t* __t2493t, uint16_t* __t2494t, uint16_t* __t2495t, char** __t2496t, uint64_t* __t2497t, uint16_t* __t2498t, uint16_t* __t2499t, uint64_t* __t2500t) {
  char* buf__unsafe_ptr=*__t2492t;
  uint64_t buf__unsafe_size=*__t2493t;
  uint16_t buf__unsafe_offset=*__t2494t;
  uint16_t buf__unsafe_align=*__t2495t;
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
  *__t2492t=buf__unsafe_ptr;
  *__t2493t=buf__unsafe_size;
  *__t2494t=buf__unsafe_offset;
  *__t2495t=buf__unsafe_align;
  *__t2496t=__t657t__buf__unsafe_ptr;
  *__t2497t=__t657t__buf__unsafe_size;
  *__t2498t=__t657t__buf__unsafe_offset;
  *__t2499t=__t657t__buf__unsafe_align;
  *__t2500t=__t657t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2501t, uint64_t* __t2502t, uint16_t* __t2503t, uint16_t* __t2504t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2501t=unsafe_ptr;
  *__t2502t=unsafe_size;
  *__t2503t=unsafe_offset;
  *__t2504t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2505t) {
  *__t2505t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2506t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2506t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2507t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2507t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2508t) {
  *__t2508t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2509t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2509t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2510t) {
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
  *__t2510t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2511t, uint64_t* __t2512t, uint64_t* __t2513t, char* __t2514t) {
  goto __t_return;
  __t_return:
  *__t2511t=unsafe_ptr;
  *__t2512t=dat__pos;
  *__t2513t=dat__length;
  *__t2514t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2515t, uint64_t* __t2516t, uint64_t* __t2517t, char* __t2518t) {
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
  *__t2515t=__t794t__unsafe_ptr;
  *__t2516t=__t794t__dat__pos;
  *__t2517t=__t794t__dat__length;
  *__t2518t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2519t, uint64_t* __t2520t, uint64_t* __t2521t, char* __t2522t) {
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
  *__t2519t=__t827t__unsafe_ptr;
  *__t2520t=__t827t__dat__pos;
  *__t2521t=__t827t__dat__length;
  *__t2522t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2523t, uint64_t* __t2524t, uint64_t* __t2525t, char* __t2526t) {
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
  *__t2523t=__t853t__unsafe_ptr;
  *__t2524t=__t853t__dat__pos;
  *__t2525t=__t853t__dat__length;
  *__t2526t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2527t) {
  goto __t_return;
  __t_return:
  *__t2527t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2528t) {
  goto __t_return;
  __t_return:
  *__t2528t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2529t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2529t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2530t, uint64_t* __t2531t, uint16_t* __t2532t, uint16_t* __t2533t, uint64_t pos, char** __t2534t, uint64_t* __t2535t, uint16_t* __t2536t, uint16_t* __t2537t, uint64_t* __t2538t) {
  char* buf__unsafe_ptr=*__t2530t;
  uint64_t buf__unsafe_size=*__t2531t;
  uint16_t buf__unsafe_offset=*__t2532t;
  uint16_t buf__unsafe_align=*__t2533t;
  goto __t_return;
  __t_return:
  *__t2530t=buf__unsafe_ptr;
  *__t2531t=buf__unsafe_size;
  *__t2532t=buf__unsafe_offset;
  *__t2533t=buf__unsafe_align;
  *__t2534t=buf__unsafe_ptr;
  *__t2535t=buf__unsafe_size;
  *__t2536t=buf__unsafe_offset;
  *__t2537t=buf__unsafe_align;
  *__t2538t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2539t, uint64_t* __t2540t, uint16_t* __t2541t, uint16_t* __t2542t, uint64_t* __t2543t, uint64_t length, char** __t2544t, uint64_t* __t2545t, uint16_t* __t2546t, uint16_t* __t2547t, uint64_t* __t2548t) {
  char* allocator__buf__unsafe_ptr=*__t2539t;
  uint64_t allocator__buf__unsafe_size=*__t2540t;
  uint16_t allocator__buf__unsafe_offset=*__t2541t;
  uint16_t allocator__buf__unsafe_align=*__t2542t;
  uint64_t allocator__pos=*__t2543t;
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
  *__t2539t=allocator__buf__unsafe_ptr;
  *__t2540t=allocator__buf__unsafe_size;
  *__t2541t=allocator__buf__unsafe_offset;
  *__t2542t=allocator__buf__unsafe_align;
  *__t2543t=allocator__pos;
  *__t2544t=__t692t__buf__unsafe_ptr;
  *__t2545t=__t692t__buf__unsafe_size;
  *__t2546t=__t692t__buf__unsafe_offset;
  *__t2547t=__t692t__buf__unsafe_align;
  *__t2548t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t2549t, uint64_t* __t2550t, uint16_t* __t2551t, uint16_t* __t2552t, uint64_t* __t2553t, const char* _other, char** __t2554t, uint64_t* __t2555t, uint64_t* __t2556t, char* __t2557t) {
  char* CHARS__buf__unsafe_ptr=*__t2549t;
  uint64_t CHARS__buf__unsafe_size=*__t2550t;
  uint16_t CHARS__buf__unsafe_offset=*__t2551t;
  uint16_t CHARS__buf__unsafe_align=*__t2552t;
  uint64_t CHARS__pos=*__t2553t;
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
  *__t2549t=CHARS__buf__unsafe_ptr;
  *__t2550t=CHARS__buf__unsafe_size;
  *__t2551t=CHARS__buf__unsafe_offset;
  *__t2552t=CHARS__buf__unsafe_align;
  *__t2553t=CHARS__pos;
  *__t2554t=__t884t__unsafe_ptr;
  *__t2555t=__t884t__dat__pos;
  *__t2556t=__t884t__dat__length;
  *__t2557t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2284t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t2285t(const char* path, char** __t2558t) {
  char* unsafe_ptr=0;
  char __t2287t__=0;
  char __t2288t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t447t(unsafe_ptr,&__t2287t__);
  not__t28t(__t2287t__,&__t2288t__);
  if(__t2288t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2284t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2558t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2296t(char** __t2559t, const char** __t2560t) {
  char* f__unsafe_ptr=*__t2559t;
  char __t2297t__=0;
  char __t2298t__=0;
  char* de=0;
  char __t2299t__=0;
  char __t2300t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(f__unsafe_ptr,&__t2297t__);
  not__t28t(__t2297t__,&__t2298t__);
  if(__t2298t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t447t(de,&__t2299t__);
  not__t28t(__t2299t__,&__t2300t__);
  if(__t2300t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2559t=f__unsafe_ptr;
  *__t2560t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2301t(char** __t2561t, char** __t2562t, uint64_t* __t2563t, uint64_t* __t2564t, char* __t2565t) {
  char* f__unsafe_ptr=*__t2561t;
  const char* __t2302t__=0;
  char* __t2303t__unsafe_ptr=0;
  uint64_t __t2303t__dat__pos=0;
  uint64_t __t2303t__dat__length=0;
  char __t2303t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2296t(&f__unsafe_ptr,&__t2302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t2302t__,&__t2303t__unsafe_ptr,&__t2303t__dat__pos,&__t2303t__dat__length,&__t2303t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2561t=f__unsafe_ptr;
  *__t2562t=__t2303t__unsafe_ptr;
  *__t2563t=__t2303t__dat__pos;
  *__t2564t=__t2303t__dat__length;
  *__t2565t=__t2303t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2366t(char** __t2566t, uint64_t __t_anon1, char** __t2567t, uint64_t* __t2568t, uint64_t* __t2569t, char* __t2570t) {
  char* data__unsafe_ptr=*__t2566t;
  char* __t2367t__unsafe_ptr=0;
  uint64_t __t2367t__dat__pos=0;
  uint64_t __t2367t__dat__length=0;
  char __t2367t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2301t(&data__unsafe_ptr,&__t2367t__unsafe_ptr,&__t2367t__dat__pos,&__t2367t__dat__length,&__t2367t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2566t=data__unsafe_ptr;
  *__t2567t=__t2367t__unsafe_ptr;
  *__t2568t=__t2367t__dat__pos;
  *__t2569t=__t2367t__dat__length;
  *__t2570t=__t2367t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2571t, uint64_t* __t2572t, uint64_t* __t2573t, char* __t2574t) {
  goto __t_return;
  __t_return:
  *__t2571t=other__unsafe_ptr;
  *__t2572t=other__dat__pos;
  *__t2573t=other__dat__length;
  *__t2574t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2575t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2575t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2576t) {
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
  *__t2576t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t989t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2577t) {
  uint64_t __t990t__=0;
  char* __t991t__=0;
  add__t175t(s__dat__pos,i,&__t990t__);
  add__t505t(s__unsafe_ptr,__t990t__,&__t991t__);
  goto __t_return;
  __t_return:
  *__t2577t=__t991t__;
}

int slice__t996t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2578t, uint64_t* __t2579t, uint64_t* __t2580t, char* __t2581t) {
  char* __t997t__unsafe_ptr=0;
  uint64_t __t997t__dat__pos=0;
  uint64_t __t997t__dat__length=0;
  char __t997t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t998t__=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__dat__pos=0;
  uint64_t __t999t__dat__length=0;
  char __t999t__dat__first=0;
  char __t1000t__=0;
  char __t1001t__=0;
  char __t1002t=0;
  char __t1003t__=0;
  uint64_t __t1004t__=0;
  uint64_t new_length=0;
  uint64_t __t1005t=0;
  char __t1006t__=0;
  char new_first=0;
  char* __t1007t__=0;
  char __t1008t__value=0;
  uint64_t __t1009t__=0;
  char* __t1010t__unsafe_ptr=0;
  uint64_t __t1010t__dat__pos=0;
  uint64_t __t1010t__dat__length=0;
  char __t1010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t997t__unsafe_ptr,&__t997t__dat__pos,&__t997t__dat__length,&__t997t__dat__first);
  s__unsafe_ptr=__t997t__unsafe_ptr;
  s__dat__pos=__t997t__dat__pos;
  s__dat__length=__t997t__dat__length;
  s__dat__first=__t997t__dat__first;
  eq__t120t(from,to,&__t998t__);
  if(__t998t__){
  __t_errcode=str__t845t(__t374t,&__t999t__unsafe_ptr,&__t999t__dat__pos,&__t999t__dat__length,&__t999t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t276t(from,to,&__t1000t__);
  if(!__t1000t__){
  gt__t276t(to,s__dat__length,&__t1001t__);
  __t1002t=__t1001t__;
  }
  else{
  __t1002t=0;
  not__t28t(__t1002t,&__t1003t__);
  __t1002t=__t1003t__;
  }
  if(__t1002t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t352t(to,from,&__t1004t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1004t__;
  __t1005t=0;
  neq__t144t(from,__t1005t,&__t1006t__);
  if(__t1006t__){
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1007t__);
  if(!__t1007t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1008t__value,__t1007t__,1);
  new_first=__t1008t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t175t(s__dat__pos,from,&__t1009t__);
  str__t783t(s__unsafe_ptr,__t1009t__,new_length,new_first,&__t1010t__unsafe_ptr,&__t1010t__dat__pos,&__t1010t__dat__length,&__t1010t__dat__first);
  __t999t__unsafe_ptr=__t1010t__unsafe_ptr;
  __t999t__dat__pos=__t1010t__dat__pos;
  __t999t__dat__length=__t1010t__dat__length;
  __t999t__dat__first=__t1010t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2578t=__t999t__unsafe_ptr;
  *__t2579t=__t999t__dat__pos;
  *__t2580t=__t999t__dat__length;
  *__t2581t=__t999t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t858t(char x, char y, char* __t2582t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2582t=z;
}

static inline __attribute__((always_inline)) void eq__t932t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2583t) {
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
  *__t2583t=__t936t;
}

static inline __attribute__((always_inline)) int ends_with__t1075t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2584t) {
  char* __t1076t__unsafe_ptr=0;
  uint64_t __t1076t__dat__pos=0;
  uint64_t __t1076t__dat__length=0;
  char __t1076t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1077t__unsafe_ptr=0;
  uint64_t __t1077t__dat__pos=0;
  uint64_t __t1077t__dat__length=0;
  char __t1077t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1078t__=0;
  char __t1079t=0;
  uint64_t __t1080t__=0;
  uint64_t n=0;
  uint64_t __t1081t__=0;
  uint64_t __t1082t__=0;
  char* __t1083t__unsafe_ptr=0;
  uint64_t __t1083t__dat__pos=0;
  uint64_t __t1083t__dat__length=0;
  char __t1083t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1084t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1076t__unsafe_ptr,&__t1076t__dat__pos,&__t1076t__dat__length,&__t1076t__dat__first);
  stack__unsafe_ptr=__t1076t__unsafe_ptr;
  stack__dat__pos=__t1076t__dat__pos;
  stack__dat__length=__t1076t__dat__length;
  stack__dat__first=__t1076t__dat__first;
  __t_errcode=str__t845t(_needle,&__t1077t__unsafe_ptr,&__t1077t__dat__pos,&__t1077t__dat__length,&__t1077t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1077t__unsafe_ptr;
  needle__dat__pos=__t1077t__dat__pos;
  needle__dat__length=__t1077t__dat__length;
  needle__dat__first=__t1077t__dat__first;
  lt__t252t(stack__dat__length,needle__dat__length,&__t1078t__);
  if(__t1078t__){
  __t1079t=0;
  goto __t_return;
  }
  len__t854t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1080t__);
  n=__t1080t__;
  len__t854t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1081t__);
  __t_errcode=sub__t352t(n,__t1081t__,&__t1082t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t996t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1082t__,n,&__t1083t__unsafe_ptr,&__t1083t__dat__pos,&__t1083t__dat__length,&__t1083t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1083t__unsafe_ptr;
  ret__dat__pos=__t1083t__dat__pos;
  ret__dat__length=__t1083t__dat__length;
  ret__dat__first=__t1083t__dat__first;
  eq__t932t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1084t__);
  __t1079t=__t1084t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2584t=__t1079t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t963t(char** __t2585t, uint64_t* __t2586t, uint16_t* __t2587t, uint16_t* __t2588t, uint64_t* __t2589t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2590t, uint64_t* __t2591t, uint64_t* __t2592t, char* __t2593t) {
  char* CHARS__buf__unsafe_ptr=*__t2585t;
  uint64_t CHARS__buf__unsafe_size=*__t2586t;
  uint16_t CHARS__buf__unsafe_offset=*__t2587t;
  uint16_t CHARS__buf__unsafe_align=*__t2588t;
  uint64_t CHARS__pos=*__t2589t;
  char* __t964t__unsafe_ptr=0;
  uint64_t __t964t__dat__pos=0;
  uint64_t __t964t__dat__length=0;
  char __t964t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t965t__=0;
  uint64_t __t966t__=0;
  uint64_t null_pos=0;
  uint64_t __t967t=0;
  uint64_t __t968t__=0;
  uint64_t next_pos=0;
  uint64_t __t969t__=0;
  char __t970t__=0;
  char* endpos=0;
  uint64_t __t971t=0;
  uint64_t __t972t__=0;
  uint64_t prev_pos=0;
  char* __t973t__unsafe_ptr=0;
  uint64_t __t973t__dat__pos=0;
  uint64_t __t973t__dat__length=0;
  char __t973t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t964t__unsafe_ptr,&__t964t__dat__pos,&__t964t__dat__length,&__t964t__dat__first);
  other__unsafe_ptr=__t964t__unsafe_ptr;
  other__dat__pos=__t964t__dat__pos;
  other__dat__length=__t964t__dat__length;
  other__dat__first=__t964t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t965t__);
  add__t175t(CHARS__pos,__t965t__,&__t966t__);
  null_pos=__t966t__;
  __t967t=1;
  add__t175t(null_pos,__t967t,&__t968t__);
  next_pos=__t968t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t969t__);
  gt__t276t(next_pos,__t969t__,&__t970t__);
  if(__t970t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t971t=0;
  add__t175t(CHARS__pos,__t971t,&__t972t__);
  prev_pos=__t972t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t787t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t973t__unsafe_ptr,&__t973t__dat__pos,&__t973t__dat__length,&__t973t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2585t=CHARS__buf__unsafe_ptr;
  *__t2586t=CHARS__buf__unsafe_size;
  *__t2587t=CHARS__buf__unsafe_offset;
  *__t2588t=CHARS__buf__unsafe_align;
  *__t2589t=CHARS__pos;
  *__t2590t=__t973t__unsafe_ptr;
  *__t2591t=__t973t__dat__pos;
  *__t2592t=__t973t__dat__length;
  *__t2593t=__t973t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t929t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2594t) {
  uint64_t __t930t__=0;
  add__t175t(s__dat__pos,s__dat__length,&__t930t__);
  goto __t_return;
  __t_return:
  *__t2594t=__t930t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2595t) {
  int value=0;
  *__t2595t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2596t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2596t=__t40t__;
}

static inline __attribute__((always_inline)) int str__t795t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2597t, uint64_t* __t2598t, uint64_t* __t2599t, char* __t2600t) {
  int __t796t=0;
  int __t797t=0;
  int __t798t__=0;
  uint64_t __t799t__=0;
  char __t800t__=0;
  uint64_t __t801t=0;
  uint64_t __t802t=0;
  char* __t803t__=0;
  char __t804t__value=0;
  char* __t805t__unsafe_ptr=0;
  uint64_t __t805t__dat__pos=0;
  uint64_t __t805t__dat__length=0;
  char __t805t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t39t(__t797t,&__t798t__);
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t799t__);
  gt__t276t(length,__t799t__,&__t800t__);
  if(__t800t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t801t=0;
  __t802t=0;
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t802t,&__t803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t803t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t804t__value,__t803t__,1);
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t801t,length,__t804t__value,&__t805t__unsafe_ptr,&__t805t__dat__pos,&__t805t__dat__length,&__t805t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2597t=__t805t__unsafe_ptr;
  *__t2598t=__t805t__dat__pos;
  *__t2599t=__t805t__dat__length;
  *__t2600t=__t805t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t909t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2601t, uint64_t* __t2602t, uint64_t* __t2603t, char* __t2604t) {
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
  *__t2601t=__t918t__unsafe_ptr;
  *__t2602t=__t918t__dat__pos;
  *__t2603t=__t918t__dat__length;
  *__t2604t=__t918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t919t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2605t, char** __t2606t, uint64_t* __t2607t, uint64_t* __t2608t, char* __t2609t) {
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
  *__t2605t=cstr;
  *__t2606t=str__unsafe_ptr;
  *__t2607t=str__dat__pos;
  *__t2608t=str__dat__length;
  *__t2609t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t927t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2610t) {
  goto __t_return;
  __t_return:
  *__t2610t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1850t(const char* cmd, char** __t2611t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2611t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1849t(char* unsafe_ptr, int64_t* __t2612t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2612t=status;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2613t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2613t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2614t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2614t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2615t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2615t=z;
}

static inline __attribute__((always_inline)) int read__t1851t(const char* cmd, char** __t2616t) {
  char* __t1852t__=0;
  char* unsafe_ptr=0;
  char __t1853t__=0;
  char __t1854t__=0;
  char __t1855t__=0;
  int64_t __t1856t__=0;
  int64_t status=0;
  uint64_t __t1857t=0;
  int64_t __t1858t__=0;
  char __t1859t__=0;
  char __t1860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1850t(cmd,&__t1852t__);
  unsafe_ptr=__t1852t__;
  exists__t447t(unsafe_ptr,&__t1853t__);
  not__t28t(__t1853t__,&__t1854t__);
  if(__t1854t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(unsafe_ptr,&__t1855t__);
  if(__t1855t__){
  pclose__t1849t(unsafe_ptr,&__t1856t__);
  status=__t1856t__;
  unsafe_ptr=0;
  __t1857t=0;
  int__t427t(__t1857t,&__t1858t__);
  neq__t133t(status,__t1858t__,&__t1859t__);
  if(__t1859t__){
  __t_complain=36;
  __t1860t=__t1860t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2616t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1862t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2617t) {
  const char* __t1863t__cstr=0;
  char* __t1863t__str__unsafe_ptr=0;
  uint64_t __t1863t__str__dat__pos=0;
  uint64_t __t1863t__str__dat__length=0;
  char __t1863t__str__dat__first=0;
  char __t1864t____t922t____t916t____t534t__=0;
  const char* __t1865t__=0;
  char* __t1866t__unsafe_ptr=0;
  char __t1867t____t1855t__=0;
  int64_t __t1867t____t1856t__=0;
  int64_t __t1867t__status=0;
  uint64_t __t1867t____t1857t=0;
  int64_t __t1867t____t1858t__=0;
  char __t1867t____t1859t__=0;
  char __t1867t____t1860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t919t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1863t__cstr,&__t1863t__str__unsafe_ptr,&__t1863t__str__dat__pos,&__t1863t__str__dat__length,&__t1863t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t927t(__t1863t__cstr,__t1863t__str__unsafe_ptr,__t1863t__str__dat__pos,__t1863t__str__dat__length,__t1863t__str__dat__first,&__t1865t__);
  __t_errcode=read__t1851t(__t1865t__,&__t1866t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t1866t__unsafe_ptr,&__t1867t____t1855t__);
  if(__t1867t____t1855t__){
  pclose__t1849t(__t1866t__unsafe_ptr,&__t1867t____t1856t__);
  __t1867t__status=__t1867t____t1856t__;
  __t1866t__unsafe_ptr=0;
  __t1867t____t1857t=0;
  int__t427t(__t1867t____t1857t,&__t1867t____t1858t__);
  neq__t133t(__t1867t__status,__t1867t____t1858t__,&__t1867t____t1859t__);
  if(__t1867t____t1859t__){
  __t_complain=36;
  __t1867t____t1860t=__t1867t____t1860t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2617t=__t1866t__unsafe_ptr;
  
  __t_skip_returns:exists__t447t(__t1863t__str__unsafe_ptr,&__t1864t____t922t____t916t____t534t__);
  if(__t1864t____t922t____t916t____t534t__){
  free__t503t(&__t1863t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1843t(int64_t value, const char** __t2618t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2618t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2424t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2425t__unsafe_ptr=0;
  char __t2426t____t1867t____t1855t__=0;
  int64_t __t2426t____t1867t____t1856t__=0;
  int64_t __t2426t____t1867t__status=0;
  uint64_t __t2426t____t1867t____t1857t=0;
  int64_t __t2426t____t1867t____t1858t__=0;
  char __t2426t____t1867t____t1859t__=0;
  char __t2426t____t1867t____t1860t=0;
  char* __t2427t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2428t=0;
  int64_t __t2429t=0;
  int64_t error=0;
  const char* __t2430t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1862t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2425t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2427t__unsafe_ptr=__t2425t__unsafe_ptr;
  proc__unsafe_ptr=__t2427t__unsafe_ptr;
  exists__t447t(__t2425t__unsafe_ptr,&__t2426t____t1867t____t1855t__);
  if(__t2426t____t1867t____t1855t__){
  pclose__t1849t(__t2425t__unsafe_ptr,&__t2426t____t1867t____t1856t__);
  __t2426t____t1867t__status=__t2426t____t1867t____t1856t__;
  __t2425t__unsafe_ptr=0;
  __t2426t____t1867t____t1857t=0;
  int__t427t(__t2426t____t1867t____t1857t,&__t2426t____t1867t____t1858t__);
  neq__t133t(__t2426t____t1867t__status,__t2426t____t1867t____t1858t__,&__t2426t____t1867t____t1859t__);
  if(__t2426t____t1867t____t1859t__){
  __t_complain=36;
  __t2426t____t1867t____t1860t=__t2426t____t1867t____t1860t==0;
  }
  }
  __t2429t=__t_complain;
  __t2428t=(__t_complain==0);
  __t_complain=0;
  error=__t2429t;
  __t2428t=__t2428t==0;
  if(__t2428t){
  cstr__t1843t(error,&__t2430t__);
  print__t380t(__t2430t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2432t() {
  char* __t2436t__unsafe_ptr=0;
  uint64_t __t2436t__unsafe_size=0;
  uint16_t __t2436t__unsafe_offset=0;
  uint16_t __t2436t__unsafe_align=0;
  uint64_t __t2437t=0;
  char* __t2438t__unsafe_ptr=0;
  uint64_t __t2438t__unsafe_size=0;
  uint16_t __t2438t__unsafe_offset=0;
  uint16_t __t2438t__unsafe_align=0;
  char __t2439t____t534t__=0;
  char* __t2440t__buf__unsafe_ptr=0;
  uint64_t __t2440t__buf__unsafe_size=0;
  uint16_t __t2440t__buf__unsafe_offset=0;
  uint16_t __t2440t__buf__unsafe_align=0;
  uint64_t __t2440t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2443t__unsafe_ptr=0;
  uint64_t __t2443t__dat__pos=0;
  uint64_t __t2443t__dat__length=0;
  char __t2443t__dat__first=0;
  char* __t2444t__unsafe_ptr=0;
  uint64_t __t2444t__dat__pos=0;
  uint64_t __t2444t__dat__length=0;
  char __t2444t__dat__first=0;
  char* __t2445t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2447t=0;
  char __t2448t=0;
  char* __t2449t__unsafe_ptr=0;
  uint64_t __t2449t__dat__pos=0;
  uint64_t __t2449t__dat__length=0;
  char __t2449t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2451t__=0;
  char __t2452t__=0;
  char* __t2453t__buf__unsafe_ptr=0;
  uint64_t __t2453t__buf__unsafe_size=0;
  uint16_t __t2453t__buf__unsafe_offset=0;
  uint16_t __t2453t__buf__unsafe_align=0;
  uint64_t __t2453t__pos=0;
  char* __t2454t__unsafe_ptr=0;
  uint64_t __t2454t__dat__pos=0;
  uint64_t __t2454t__dat__length=0;
  char __t2454t__dat__first=0;
  char* __t2455t__unsafe_ptr=0;
  uint64_t __t2455t__dat__pos=0;
  uint64_t __t2455t__dat__length=0;
  char __t2455t__dat__first=0;
  uint64_t __t2456t__=0;
  char* __t2457t__unsafe_ptr=0;
  uint64_t __t2457t__dat__pos=0;
  uint64_t __t2457t__dat__length=0;
  char __t2457t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2434t(&__t2436t__unsafe_ptr,&__t2436t__unsafe_size,&__t2436t__unsafe_offset,&__t2436t__unsafe_align);
  __t2437t=256;
  __t_errcode=alloc__t532t(&__t2436t__unsafe_ptr,&__t2436t__unsafe_size,&__t2436t__unsafe_offset,&__t2436t__unsafe_align,__t2437t,&__t2438t__unsafe_ptr,&__t2438t__unsafe_size,&__t2438t__unsafe_offset,&__t2438t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t2438t__unsafe_ptr,&__t2438t__unsafe_size,&__t2438t__unsafe_offset,&__t2438t__unsafe_align,&__t2440t__buf__unsafe_ptr,&__t2440t__buf__unsafe_size,&__t2440t__buf__unsafe_offset,&__t2440t__buf__unsafe_align,&__t2440t__pos);
  CHARS__buf__unsafe_ptr=__t2440t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2440t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2440t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2440t__buf__unsafe_align;
  CHARS__pos=__t2440t__pos;
  path=__t2441t;
  __t_errcode=copy__t879t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2442t,&__t2443t__unsafe_ptr,&__t2443t__dat__pos,&__t2443t__dat__length,&__t2443t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t879t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2444t__unsafe_ptr,&__t2444t__dat__pos,&__t2444t__dat__length,&__t2444t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t2285t(path,&__t2445t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2445t__unsafe_ptr;
  __t2447t=0;
  while(1){
  __t_complain=get__t2366t(&test_dir__unsafe_ptr,__t2447t,&__t2449t__unsafe_ptr,&__t2449t__dat__pos,&__t2449t__dat__length,&__t2449t__dat__first);
  __t2448t=__t_complain;
  entry__unsafe_ptr=__t2449t__unsafe_ptr;
  entry__dat__pos=__t2449t__dat__pos;
  entry__dat__length=__t2449t__dat__length;
  entry__dat__first=__t2449t__dat__first;
  __t2448t=__t2448t==0;
  __t2447t=__t2447t+1;
  if(!__t2448t){
  break;
  }
  __t_errcode=ends_with__t1075t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2450t,&__t2451t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t2451t__,&__t2452t__);
  if(__t2452t__){
  continue;
  }
  __t2453t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2453t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2453t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2453t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2453t__pos=CHARS__pos;
  str__t818t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2454t__unsafe_ptr,&__t2454t__dat__pos,&__t2454t__dat__length,&__t2454t__dat__first);
  __t_errcode=copy_null_terminated__t963t(&__t2453t__buf__unsafe_ptr,&__t2453t__buf__unsafe_size,&__t2453t__buf__unsafe_offset,&__t2453t__buf__unsafe_align,&__t2453t__pos,__t2454t__unsafe_ptr,__t2454t__dat__pos,__t2454t__dat__length,__t2454t__dat__first,&__t2455t__unsafe_ptr,&__t2455t__dat__pos,&__t2455t__dat__length,&__t2455t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t929t(__t2455t__unsafe_ptr,__t2455t__dat__pos,__t2455t__dat__length,__t2455t__dat__first,&__t2456t__);
  __t_errcode=str__t795t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2456t__,&__t2457t__unsafe_ptr,&__t2457t__dat__pos,&__t2457t__dat__length,&__t2457t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2457t__unsafe_ptr;
  command__dat__pos=__t2457t__dat__pos;
  command__dat__length=__t2457t__dat__length;
  command__dat__first=__t2457t__dat__first;
  print__t987t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2424t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2284t(__t2445t__unsafe_ptr);
  exists__t447t(__t2438t__unsafe_ptr,&__t2439t____t534t__);
  if(__t2439t____t534t__){
  free__t503t(&__t2438t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2432t();return 0;}