#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2418t="./std";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void closedir__t2284t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2429t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2429t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2430t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2430t=z;
}

static inline __attribute__((always_inline)) int read__t2285t(const char* path, char** __t2431t) {
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
  *__t2431t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1868t(char** __t2432t, uint64_t* __t2433t, uint16_t* __t2434t, uint16_t* __t2435t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2432t=unsafe_ptr;
  *__t2433t=unsafe_size;
  *__t2434t=unsafe_offset;
  *__t2435t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2436t) {
  char* allocated=*__t2436t;
  if(allocated){
  free(allocated);
  }
  *__t2436t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2437t) {
  int value=0;
  *__t2437t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2438t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2438t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2439t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2439t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2440t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2440t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2441t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2441t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2442t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2442t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2443t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2443t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2444t) {
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
  *__t2444t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2445t, uint64_t* __t2446t, uint16_t* __t2447t, uint16_t* __t2448t, uint64_t size, char** __t2449t, uint64_t* __t2450t, uint16_t* __t2451t, uint16_t* __t2452t) {
  char* buffer__unsafe_ptr=*__t2445t;
  uint64_t buffer__unsafe_size=*__t2446t;
  uint16_t buffer__unsafe_offset=*__t2447t;
  uint16_t buffer__unsafe_align=*__t2448t;
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
  *__t2445t=buffer__unsafe_ptr;
  *__t2446t=buffer__unsafe_size;
  *__t2447t=buffer__unsafe_offset;
  *__t2448t=buffer__unsafe_align;
  *__t2449t=buffer__unsafe_ptr;
  *__t2450t=buffer__unsafe_size;
  *__t2451t=buffer__unsafe_offset;
  *__t2452t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2296t(char** __t2453t, const char** __t2454t) {
  char* f__unsafe_ptr=*__t2453t;
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
  *__t2453t=f__unsafe_ptr;
  *__t2454t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t2455t, uint64_t* __t2456t, uint16_t* __t2457t, uint16_t* __t2458t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2455t=unsafe_ptr;
  *__t2456t=unsafe_size;
  *__t2457t=unsafe_offset;
  *__t2458t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2459t) {
  *__t2459t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2460t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2460t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2461t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2461t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2462t) {
  *__t2462t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2463t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2463t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2464t) {
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
  *__t2464t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2465t, uint64_t* __t2466t, uint64_t* __t2467t, char* __t2468t) {
  goto __t_return;
  __t_return:
  *__t2465t=unsafe_ptr;
  *__t2466t=dat__pos;
  *__t2467t=dat__length;
  *__t2468t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2469t, uint64_t* __t2470t, uint64_t* __t2471t, char* __t2472t) {
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
  *__t2469t=__t794t__unsafe_ptr;
  *__t2470t=__t794t__dat__pos;
  *__t2471t=__t794t__dat__length;
  *__t2472t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2473t, uint64_t* __t2474t, uint64_t* __t2475t, char* __t2476t) {
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
  *__t2473t=__t827t__unsafe_ptr;
  *__t2474t=__t827t__dat__pos;
  *__t2475t=__t827t__dat__length;
  *__t2476t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t2477t, uint64_t* __t2478t, uint64_t* __t2479t, char* __t2480t) {
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
  *__t2477t=__t853t__unsafe_ptr;
  *__t2478t=__t853t__dat__pos;
  *__t2479t=__t853t__dat__length;
  *__t2480t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int entry__t2301t(char** __t2481t, char** __t2482t, uint64_t* __t2483t, uint64_t* __t2484t, char* __t2485t) {
  char* f__unsafe_ptr=*__t2481t;
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
  *__t2481t=f__unsafe_ptr;
  *__t2482t=__t2303t__unsafe_ptr;
  *__t2483t=__t2303t__dat__pos;
  *__t2484t=__t2303t__dat__length;
  *__t2485t=__t2303t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2416t() {
  char* __t2419t__unsafe_ptr=0;
  char* __t2421t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t2422t__unsafe_ptr=0;
  uint64_t __t2422t__unsafe_size=0;
  uint16_t __t2422t__unsafe_offset=0;
  uint16_t __t2422t__unsafe_align=0;
  uint64_t __t2423t=0;
  char* __t2424t__unsafe_ptr=0;
  uint64_t __t2424t__unsafe_size=0;
  uint16_t __t2424t__unsafe_offset=0;
  uint16_t __t2424t__unsafe_align=0;
  char __t2425t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t2426t=0;
  char* __t2427t__unsafe_ptr=0;
  uint64_t __t2427t__dat__pos=0;
  uint64_t __t2427t__dat__length=0;
  char __t2427t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=read__t2285t(__t2418t,&__t2419t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2421t__unsafe_ptr=__t2419t__unsafe_ptr;
  dir__unsafe_ptr=__t2421t__unsafe_ptr;
  char____t_buffer____buffer__t1868t(&__t2422t__unsafe_ptr,&__t2422t__unsafe_size,&__t2422t__unsafe_offset,&__t2422t__unsafe_align);
  __t2423t=128;
  __t_errcode=alloc__t532t(&__t2422t__unsafe_ptr,&__t2422t__unsafe_size,&__t2422t__unsafe_offset,&__t2422t__unsafe_align,__t2423t,&__t2424t__unsafe_ptr,&__t2424t__unsafe_size,&__t2424t__unsafe_offset,&__t2424t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2424t__unsafe_ptr;
  buf__unsafe_size=__t2424t__unsafe_size;
  buf__unsafe_offset=__t2424t__unsafe_offset;
  buf__unsafe_align=__t2424t__unsafe_align;
  while(1){
  __t_complain=entry__t2301t(&dir__unsafe_ptr,&__t2427t__unsafe_ptr,&__t2427t__dat__pos,&__t2427t__dat__length,&__t2427t__dat__first);
  __t2426t=__t_complain;
  entry__unsafe_ptr=__t2427t__unsafe_ptr;
  entry__dat__pos=__t2427t__dat__pos;
  entry__dat__length=__t2427t__dat__length;
  entry__dat__first=__t2427t__dat__first;
  __t2426t=__t2426t==0;
  if(!__t2426t){
  break;
  }
  print__t987t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2424t__unsafe_ptr,&__t2425t____t534t__);
  if(__t2425t____t534t__){
  free__t503t(&__t2424t__unsafe_ptr);
  }
  closedir__t2284t(__t2419t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2416t();return 0;}