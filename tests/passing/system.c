#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2423t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1868t(char** __t2426t, uint64_t* __t2427t, uint16_t* __t2428t, uint16_t* __t2429t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2426t=unsafe_ptr;
  *__t2427t=unsafe_size;
  *__t2428t=unsafe_offset;
  *__t2429t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2430t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2430t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2431t) {
  char* allocated=*__t2431t;
  if(allocated){
  free(allocated);
  }
  *__t2431t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2432t) {
  int value=0;
  *__t2432t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2433t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2433t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2434t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2434t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2435t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2435t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2436t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2436t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2437t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2437t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2438t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2438t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2439t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2439t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2440t) {
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
  *__t2440t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2441t, uint64_t* __t2442t, uint16_t* __t2443t, uint16_t* __t2444t, uint64_t size, char** __t2445t, uint64_t* __t2446t, uint16_t* __t2447t, uint16_t* __t2448t) {
  char* buffer__unsafe_ptr=*__t2441t;
  uint64_t buffer__unsafe_size=*__t2442t;
  uint16_t buffer__unsafe_offset=*__t2443t;
  uint16_t buffer__unsafe_align=*__t2444t;
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
  *__t2441t=buffer__unsafe_ptr;
  *__t2442t=buffer__unsafe_size;
  *__t2443t=buffer__unsafe_offset;
  *__t2444t=buffer__unsafe_align;
  *__t2445t=buffer__unsafe_ptr;
  *__t2446t=buffer__unsafe_size;
  *__t2447t=buffer__unsafe_offset;
  *__t2448t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2449t, uint64_t* __t2450t, uint16_t* __t2451t, uint16_t* __t2452t, uint64_t _pos, char** __t2453t, uint64_t* __t2454t, uint16_t* __t2455t, uint16_t* __t2456t, uint64_t* __t2457t) {
  char* buf__unsafe_ptr=*__t2449t;
  uint64_t buf__unsafe_size=*__t2450t;
  uint16_t buf__unsafe_offset=*__t2451t;
  uint16_t buf__unsafe_align=*__t2452t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2449t=buf__unsafe_ptr;
  *__t2450t=buf__unsafe_size;
  *__t2451t=buf__unsafe_offset;
  *__t2452t=buf__unsafe_align;
  *__t2453t=buf__unsafe_ptr;
  *__t2454t=buf__unsafe_size;
  *__t2455t=buf__unsafe_offset;
  *__t2456t=buf__unsafe_align;
  *__t2457t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2458t, uint64_t* __t2459t, uint16_t* __t2460t, uint16_t* __t2461t, char** __t2462t, uint64_t* __t2463t, uint16_t* __t2464t, uint16_t* __t2465t, uint64_t* __t2466t) {
  char* buf__unsafe_ptr=*__t2458t;
  uint64_t buf__unsafe_size=*__t2459t;
  uint16_t buf__unsafe_offset=*__t2460t;
  uint16_t buf__unsafe_align=*__t2461t;
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
  *__t2458t=buf__unsafe_ptr;
  *__t2459t=buf__unsafe_size;
  *__t2460t=buf__unsafe_offset;
  *__t2461t=buf__unsafe_align;
  *__t2462t=__t657t__buf__unsafe_ptr;
  *__t2463t=__t657t__buf__unsafe_size;
  *__t2464t=__t657t__buf__unsafe_offset;
  *__t2465t=__t657t__buf__unsafe_align;
  *__t2466t=__t657t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2467t, uint64_t* __t2468t, uint16_t* __t2469t, uint16_t* __t2470t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2467t=unsafe_ptr;
  *__t2468t=unsafe_size;
  *__t2469t=unsafe_offset;
  *__t2470t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2471t) {
  *__t2471t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2472t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2472t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2473t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2473t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2474t) {
  *__t2474t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2475t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2475t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2476t) {
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
  *__t2476t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2477t, uint64_t* __t2478t, uint64_t* __t2479t, char* __t2480t) {
  goto __t_return;
  __t_return:
  *__t2477t=unsafe_ptr;
  *__t2478t=dat__pos;
  *__t2479t=dat__length;
  *__t2480t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2481t, uint64_t* __t2482t, uint64_t* __t2483t, char* __t2484t) {
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
  *__t2481t=__t794t__unsafe_ptr;
  *__t2482t=__t794t__dat__pos;
  *__t2483t=__t794t__dat__length;
  *__t2484t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2485t, uint64_t* __t2486t, uint64_t* __t2487t, char* __t2488t) {
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
  *__t2485t=__t827t__unsafe_ptr;
  *__t2486t=__t827t__dat__pos;
  *__t2487t=__t827t__dat__length;
  *__t2488t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2489t, uint64_t* __t2490t, uint64_t* __t2491t, char* __t2492t) {
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
  *__t2489t=__t853t__unsafe_ptr;
  *__t2490t=__t853t__dat__pos;
  *__t2491t=__t853t__dat__length;
  *__t2492t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2493t) {
  goto __t_return;
  __t_return:
  *__t2493t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2494t) {
  goto __t_return;
  __t_return:
  *__t2494t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2495t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2495t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2496t, uint64_t* __t2497t, uint16_t* __t2498t, uint16_t* __t2499t, uint64_t pos, char** __t2500t, uint64_t* __t2501t, uint16_t* __t2502t, uint16_t* __t2503t, uint64_t* __t2504t) {
  char* buf__unsafe_ptr=*__t2496t;
  uint64_t buf__unsafe_size=*__t2497t;
  uint16_t buf__unsafe_offset=*__t2498t;
  uint16_t buf__unsafe_align=*__t2499t;
  goto __t_return;
  __t_return:
  *__t2496t=buf__unsafe_ptr;
  *__t2497t=buf__unsafe_size;
  *__t2498t=buf__unsafe_offset;
  *__t2499t=buf__unsafe_align;
  *__t2500t=buf__unsafe_ptr;
  *__t2501t=buf__unsafe_size;
  *__t2502t=buf__unsafe_offset;
  *__t2503t=buf__unsafe_align;
  *__t2504t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2505t, uint64_t* __t2506t, uint16_t* __t2507t, uint16_t* __t2508t, uint64_t* __t2509t, uint64_t length, char** __t2510t, uint64_t* __t2511t, uint16_t* __t2512t, uint16_t* __t2513t, uint64_t* __t2514t) {
  char* allocator__buf__unsafe_ptr=*__t2505t;
  uint64_t allocator__buf__unsafe_size=*__t2506t;
  uint16_t allocator__buf__unsafe_offset=*__t2507t;
  uint16_t allocator__buf__unsafe_align=*__t2508t;
  uint64_t allocator__pos=*__t2509t;
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
  *__t2505t=allocator__buf__unsafe_ptr;
  *__t2506t=allocator__buf__unsafe_size;
  *__t2507t=allocator__buf__unsafe_offset;
  *__t2508t=allocator__buf__unsafe_align;
  *__t2509t=allocator__pos;
  *__t2510t=__t692t__buf__unsafe_ptr;
  *__t2511t=__t692t__buf__unsafe_size;
  *__t2512t=__t692t__buf__unsafe_offset;
  *__t2513t=__t692t__buf__unsafe_align;
  *__t2514t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t2515t, uint64_t* __t2516t, uint16_t* __t2517t, uint16_t* __t2518t, uint64_t* __t2519t, const char* _other, char** __t2520t, uint64_t* __t2521t, uint64_t* __t2522t, char* __t2523t) {
  char* CHARS__buf__unsafe_ptr=*__t2515t;
  uint64_t CHARS__buf__unsafe_size=*__t2516t;
  uint16_t CHARS__buf__unsafe_offset=*__t2517t;
  uint16_t CHARS__buf__unsafe_align=*__t2518t;
  uint64_t CHARS__pos=*__t2519t;
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
  *__t2515t=CHARS__buf__unsafe_ptr;
  *__t2516t=CHARS__buf__unsafe_size;
  *__t2517t=CHARS__buf__unsafe_offset;
  *__t2518t=CHARS__buf__unsafe_align;
  *__t2519t=CHARS__pos;
  *__t2520t=__t884t__unsafe_ptr;
  *__t2521t=__t884t__dat__pos;
  *__t2522t=__t884t__dat__length;
  *__t2523t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t909t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2524t, uint64_t* __t2525t, uint64_t* __t2526t, char* __t2527t) {
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
  *__t2524t=__t918t__unsafe_ptr;
  *__t2525t=__t918t__dat__pos;
  *__t2526t=__t918t__dat__length;
  *__t2527t=__t918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t919t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2528t, char** __t2529t, uint64_t* __t2530t, uint64_t* __t2531t, char* __t2532t) {
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
  *__t2528t=cstr;
  *__t2529t=str__unsafe_ptr;
  *__t2530t=str__dat__pos;
  *__t2531t=str__dat__length;
  *__t2532t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t927t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2533t) {
  goto __t_return;
  __t_return:
  *__t2533t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1911t(const char* cmd, const char** __t2534t) {
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
  *__t2534t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1910t(const char* cmd, int64_t* __t2535t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2535t=result;
}

static inline __attribute__((always_inline)) void int__t427t(uint64_t x, int64_t* __t2536t) {
  int __t428t=0;
  int __t429t=0;
  int __t430t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2536t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2537t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2537t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2538t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2538t=z;
}

int system__t1920t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1921t__cstr=0;
  char* __t1921t__str__unsafe_ptr=0;
  uint64_t __t1921t__str__dat__pos=0;
  uint64_t __t1921t__str__dat__length=0;
  char __t1921t__str__dat__first=0;
  char __t1922t____t922t____t916t____t534t__=0;
  const char* __t1923t__=0;
  const char* __t1924t__=0;
  int64_t __t1925t__=0;
  int64_t result=0;
  uint64_t __t1926t=0;
  int64_t __t1927t__=0;
  char __t1928t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t919t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1921t__cstr,&__t1921t__str__unsafe_ptr,&__t1921t__str__dat__pos,&__t1921t__str__dat__length,&__t1921t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t927t(__t1921t__cstr,__t1921t__str__unsafe_ptr,__t1921t__str__dat__pos,__t1921t__str__dat__length,__t1921t__str__dat__first,&__t1923t__);
  __t_errcode=safe__t1911t(__t1923t__,&__t1924t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1910t(__t1924t__,&__t1925t__);
  result=__t1925t__;
  __t1926t=0;
  int__t427t(__t1926t,&__t1927t__);
  neq__t133t(result,__t1927t__,&__t1928t__);
  if(__t1928t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1921t__str__unsafe_ptr,&__t1922t____t922t____t916t____t534t__);
  if(__t1922t____t922t____t916t____t534t__){
  free__t503t(&__t1921t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2416t() {
  char* __t2418t__unsafe_ptr=0;
  uint64_t __t2418t__unsafe_size=0;
  uint16_t __t2418t__unsafe_offset=0;
  uint16_t __t2418t__unsafe_align=0;
  uint64_t __t2419t=0;
  char* __t2420t__unsafe_ptr=0;
  uint64_t __t2420t__unsafe_size=0;
  uint16_t __t2420t__unsafe_offset=0;
  uint16_t __t2420t__unsafe_align=0;
  char __t2421t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t2422t__buf__unsafe_ptr=0;
  uint64_t __t2422t__buf__unsafe_size=0;
  uint16_t __t2422t__buf__unsafe_offset=0;
  uint16_t __t2422t__buf__unsafe_align=0;
  uint64_t __t2422t__pos=0;
  char* __t2424t__unsafe_ptr=0;
  uint64_t __t2424t__dat__pos=0;
  uint64_t __t2424t__dat__length=0;
  char __t2424t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t1868t(&__t2418t__unsafe_ptr,&__t2418t__unsafe_size,&__t2418t__unsafe_offset,&__t2418t__unsafe_align);
  __t2419t=2;
  __t_errcode=alloc__t532t(&__t2418t__unsafe_ptr,&__t2418t__unsafe_size,&__t2418t__unsafe_offset,&__t2418t__unsafe_align,__t2419t,&__t2420t__unsafe_ptr,&__t2420t__unsafe_size,&__t2420t__unsafe_offset,&__t2420t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2420t__unsafe_ptr;
  buf__unsafe_size=__t2420t__unsafe_size;
  buf__unsafe_offset=__t2420t__unsafe_offset;
  buf__unsafe_align=__t2420t__unsafe_align;
  arena__t655t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2422t__buf__unsafe_ptr,&__t2422t__buf__unsafe_size,&__t2422t__buf__unsafe_offset,&__t2422t__buf__unsafe_align,&__t2422t__pos);
  __t_errcode=copy__t879t(&__t2422t__buf__unsafe_ptr,&__t2422t__buf__unsafe_size,&__t2422t__buf__unsafe_offset,&__t2422t__buf__unsafe_align,&__t2422t__pos,__t2423t,&__t2424t__unsafe_ptr,&__t2424t__dat__pos,&__t2424t__dat__length,&__t2424t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2424t__unsafe_ptr;
  s__dat__pos=__t2424t__dat__pos;
  s__dat__length=__t2424t__dat__length;
  s__dat__first=__t2424t__dat__first;
  __t_errcode=system__t1920t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2420t__unsafe_ptr,&__t2421t____t534t__);
  if(__t2421t____t534t__){
  free__t503t(&__t2420t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2416t();return 0;}