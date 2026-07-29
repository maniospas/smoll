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

static inline __attribute__((always_inline)) void console__t375t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____buffer__t2152t(char** __t2168t, uint64_t* __t2169t, uint16_t* __t2170t, uint16_t* __t2171t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2168t=unsafe_ptr;
  *__t2169t=unsafe_size;
  *__t2170t=unsafe_offset;
  *__t2171t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2172t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2172t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2173t) {
  char* allocated=*__t2173t;
  if(allocated){
  free(allocated);
  }
  *__t2173t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2174t) {
  int value=0;
  *__t2174t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2175t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2175t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2176t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t2176t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t2177t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2177t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t2178t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2178t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2179t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2179t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t2180t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2180t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t2181t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2181t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2182t) {
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
  *__t2182t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t, uint64_t size, char** __t2187t, uint64_t* __t2188t, uint16_t* __t2189t, uint16_t* __t2190t) {
  char* buffer__unsafe_ptr=*__t2183t;
  uint64_t buffer__unsafe_size=*__t2184t;
  uint16_t buffer__unsafe_offset=*__t2185t;
  uint16_t buffer__unsafe_align=*__t2186t;
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
  *__t2183t=buffer__unsafe_ptr;
  *__t2184t=buffer__unsafe_size;
  *__t2185t=buffer__unsafe_offset;
  *__t2186t=buffer__unsafe_align;
  *__t2187t=buffer__unsafe_ptr;
  *__t2188t=buffer__unsafe_size;
  *__t2189t=buffer__unsafe_offset;
  *__t2190t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t2191t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2191t=z;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t2192t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2192t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2193t) {
  *__t2193t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2194t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2194t=__t678t__;
}

static inline __attribute__((always_inline)) int mutget__t807t(char** __t2195t, uint64_t* __t2196t, uint16_t* __t2197t, uint16_t* __t2198t, uint64_t i, char** __t2199t) {
  char* buffer__unsafe_ptr=*__t2195t;
  uint64_t buffer__unsafe_size=*__t2196t;
  uint16_t buffer__unsafe_offset=*__t2197t;
  uint16_t buffer__unsafe_align=*__t2198t;
  char __t808t__=0;
  uint64_t __t809t__=0;
  uint64_t __t810t__=0;
  uint64_t __t811t__=0;
  uint64_t __t812t__=0;
  char* __t813t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t808t__);
  if(__t808t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t809t__);
  mul__t208t(i,__t809t__,&__t810t__);
  nat__t679t(buffer__unsafe_offset,&__t811t__);
  add__t184t(__t810t__,__t811t__,&__t812t__);
  add__t677t(buffer__unsafe_ptr,__t812t__,&__t813t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2195t=buffer__unsafe_ptr;
  *__t2196t=buffer__unsafe_size;
  *__t2197t=buffer__unsafe_offset;
  *__t2198t=buffer__unsafe_align;
  *__t2199t=__t813t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t407t(uint64_t value) {
  const char* endl=0;
  endl=__t396t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2148t() {
  uint64_t __t2151t=0;
  uint64_t __t2154t=0;
  uint64_t __t2155t=0;
  char* __t2156t__unsafe_ptr=0;
  uint64_t __t2156t__unsafe_size=0;
  uint16_t __t2156t__unsafe_offset=0;
  uint16_t __t2156t__unsafe_align=0;
  uint64_t __t2157t=0;
  char* __t2158t__unsafe_ptr=0;
  uint64_t __t2158t__unsafe_size=0;
  uint16_t __t2158t__unsafe_offset=0;
  uint16_t __t2158t__unsafe_align=0;
  char __t2159t____t706t__=0;
  char* __t2160t__unsafe_ptr=0;
  uint64_t __t2160t__unsafe_size=0;
  uint16_t __t2160t__unsafe_offset=0;
  uint16_t __t2160t__unsafe_align=0;
  char* xs__unsafe_ptr=0;
  uint64_t xs__unsafe_size=0;
  uint16_t xs__unsafe_offset=0;
  uint16_t xs__unsafe_align=0;
  char __t2161t=0;
  uint64_t __t2162t=0;
  char* __t2164t__=0;
  char* __t2165t=0;
  char* x=0;
  uint64_t __t2166t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t375t();
  __t2151t=1;
  __t2154t=2;
  __t2155t=3;
  nat____buffer__t2152t(&__t2156t__unsafe_ptr,&__t2156t__unsafe_size,&__t2156t__unsafe_offset,&__t2156t__unsafe_align);
  __t2157t=3;
  __t_errcode=alloc__t704t(&__t2156t__unsafe_ptr,&__t2156t__unsafe_size,&__t2156t__unsafe_offset,&__t2156t__unsafe_align,__t2157t,&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2156t__unsafe_ptr,&__t2151t,8);
  memcpy(__t2156t__unsafe_ptr+8,&__t2154t,8);
  memcpy(__t2156t__unsafe_ptr+16,&__t2155t,8);
  __t2160t__unsafe_ptr=__t2156t__unsafe_ptr;
  __t2160t__unsafe_size=__t2156t__unsafe_size;
  __t2160t__unsafe_offset=__t2156t__unsafe_offset;
  __t2160t__unsafe_align=__t2156t__unsafe_align;
  xs__unsafe_ptr=__t2160t__unsafe_ptr;
  xs__unsafe_size=__t2160t__unsafe_size;
  xs__unsafe_offset=__t2160t__unsafe_offset;
  xs__unsafe_align=__t2160t__unsafe_align;
  __t2162t=5;
  __t_complain=mutget__t807t(&xs__unsafe_ptr,&xs__unsafe_size,&xs__unsafe_offset,&xs__unsafe_align,__t2162t,&__t2164t__);
  __t2161t=__t_complain;
  if(__t_complain){
  goto __t2161t__label;
  }
  __t2165t=__t2164t__;
  x=__t2165t;
  __t2161t__label:__t2161t=__t2161t==0;
  if(__t2161t){
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2166t__value,x,8);
  print__t407t(__t2166t__value);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t2158t__unsafe_ptr,&__t2159t____t706t__);
  if(__t2159t____t706t__){
  free__t675t(&__t2158t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2148t();return 0;}