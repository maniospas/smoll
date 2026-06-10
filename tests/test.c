#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/curl.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t393t="\n";
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
"curl initialization failed",
"out of memory while reading response"
};
int min__t3456t(uint64_t x, uint64_t y, char* __t3493t) ;
;
static inline __attribute__((always_inline)) void console__t376t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____buffer__t3446t(char** __t3468t, uint64_t* __t3469t, uint16_t* __t3470t, uint16_t* __t3471t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t3468t=unsafe_ptr;
  *__t3469t=unsafe_size;
  *__t3470t=unsafe_offset;
  *__t3471t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t602t(char* x, char* __t3472t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3472t=z;
}

static inline __attribute__((always_inline)) void free__t672t(char** __t3473t) {
  char* allocated=*__t3473t;
  if(allocated){
  free(allocated);
  }
  *__t3473t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t3474t) {
  int value=0;
  *__t3474t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t3475t) {
  int __t39t__=0;
  false__t10t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t3475t=__t39t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t3476t) {
  int __t106t=0;
  int __t107t__=0;
  not__t38t(__t106t,&__t107t__);
  goto __t_return;
  __t_return:
  *__t3476t=__t107t__;
}

static inline __attribute__((always_inline)) void eq__t130t(uint64_t x, uint64_t y, char* __t3477t) {
  int __t131t__=0;
  char z=0;
  is_different__t104t(x,y,&__t131t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3477t=z;
}

static inline __attribute__((always_inline)) void neq__t154t(uint64_t x, uint64_t y, char* __t3478t) {
  int __t155t__=0;
  char z=0;
  is_different__t104t(x,y,&__t155t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3478t=z;
}

static inline __attribute__((always_inline)) void nat__t676t(uint16_t x, uint64_t* __t3479t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3479t=value;
}

static inline __attribute__((always_inline)) void mul__t209t(uint64_t x, uint64_t y, uint64_t* __t3480t) {
  int __t210t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t210t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3480t=z;
}

static inline __attribute__((always_inline)) void zero__t673t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t29t(char value, char* __t3481t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3481t=z;
}

static inline __attribute__((always_inline)) int alloc__t665t(uint64_t bytes, char** __t3482t) {
  char* allocated=0;
  char __t666t__=0;
  char __t667t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t602t(allocated,&__t666t__);
  not__t29t(__t666t__,&__t667t__);
  if(__t667t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3482t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t701t(char** __t3483t, uint64_t* __t3484t, uint16_t* __t3485t, uint16_t* __t3486t, uint64_t size, char** __t3487t, uint64_t* __t3488t, uint16_t* __t3489t, uint16_t* __t3490t) {
  char* buffer__unsafe_ptr=*__t3483t;
  uint64_t buffer__unsafe_size=*__t3484t;
  uint16_t buffer__unsafe_offset=*__t3485t;
  uint16_t buffer__unsafe_align=*__t3486t;
  int __t702t=0;
  char __t703t__=0;
  char __t705t__=0;
  uint64_t __t706t=0;
  char __t707t__=0;
  uint64_t __t708t=0;
  uint64_t __t709t__=0;
  uint64_t __t710t__=0;
  uint64_t __t712t=0;
  char __t713t__=0;
  uint64_t __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t bytes=0;
  uint64_t __t716t=0;
  char __t717t__=0;
  char* __t718t__=0;
  int __t719t=0;
  uint64_t __t720t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t130t(buffer__unsafe_size,size,&__t705t__);
  if(__t705t__){
  __t706t=0;
  neq__t154t(size,__t706t,&__t707t__);
  if(__t707t__){
  __t708t=0;
  nat__t676t(buffer__unsafe_align,&__t709t__);
  mul__t209t(__t709t__,size,&__t710t__);
  zero__t673t(buffer__unsafe_ptr,__t708t,__t710t__);
  }
  goto __t_return;
  }
  __t712t=0;
  neq__t154t(buffer__unsafe_size,__t712t,&__t713t__);
  if(__t713t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t676t(buffer__unsafe_align,&__t714t__);
  mul__t209t(__t714t__,size,&__t715t__);
  bytes=__t715t__;
  __t716t=0;
  eq__t130t(bytes,__t716t,&__t717t__);
  if(__t717t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t665t(bytes,&__t718t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t720t=0;
  zero__t673t(__t718t__,__t720t,bytes);
  buffer__unsafe_ptr=__t718t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t602t(buffer__unsafe_ptr,&__t703t__);
  if(__t703t__){
  free__t672t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3483t=buffer__unsafe_ptr;
  *__t3484t=buffer__unsafe_size;
  *__t3485t=buffer__unsafe_offset;
  *__t3486t=buffer__unsafe_align;
  *__t3487t=buffer__unsafe_ptr;
  *__t3488t=buffer__unsafe_size;
  *__t3489t=buffer__unsafe_offset;
  *__t3490t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t262t(uint64_t x, uint64_t y, char* __t3491t) {
  int __t263t__=0;
  char z=0;
  is_different__t104t(x,y,&__t263t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3491t=z;
}

static inline __attribute__((always_inline)) void min__t3436t(uint64_t x, uint64_t y, char* __t3492t) {
  char __t3437t__=0;
  char __t3438t=0;
  char __t3439t=0;
  lt__t262t(x,y,&__t3437t__);
  if(__t3437t__){
  __t3438t=1;
  goto __t_return;
  }
  __t3439t=0;
  __t3438t=__t3439t;
  goto __t_return;
  __t_return:
  *__t3492t=__t3438t;
}

int min__t3456t(uint64_t x, uint64_t y, char* __t3493t) {
  char __t3457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  min__t3436t(x,y,&__t3457t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3493t=__t3457t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t334t(uint64_t x, uint64_t y, char* __t3494t) {
  int __t335t__=0;
  char z=0;
  is_different__t104t(x,y,&__t335t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3494t=z;
}

static inline __attribute__((always_inline)) void add__t185t(uint64_t x, uint64_t y, uint64_t* __t3495t) {
  int __t186t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t186t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3495t=z;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, char* from, char** __t3496t) {
  *__t3496t=to;
}

static inline __attribute__((always_inline)) void add__t674t(char* allocated, uint64_t offset, char** __t3497t) {
  char* element=0;
  char* __t675t__=0;
  element=allocated+offset;
  attach_type__t23t(element,allocated,&__t675t__);
  goto __t_return;
  __t_return:
  *__t3497t=__t675t__;
}

static inline __attribute__((always_inline)) int get__t821t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t3498t) {
  char __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  char* __t827t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t334t(i,buffer__unsafe_size,&__t822t__);
  if(__t822t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t676t(buffer__unsafe_align,&__t823t__);
  mul__t209t(i,__t823t__,&__t824t__);
  nat__t676t(buffer__unsafe_offset,&__t825t__);
  add__t185t(__t824t__,__t825t__,&__t826t__);
  add__t674t(buffer__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3498t=__t827t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat___nat______bool___t3423t(__smoll_func_ptr_type* __t3499t) {
  __smoll_func_ptr_type value=0;
  *__t3499t=value;
}



static inline __attribute__((always_inline)) int least__t3424t(char* numbers__unsafe_ptr, uint64_t numbers__unsafe_size, uint16_t numbers__unsafe_offset, uint16_t numbers__unsafe_align, __smoll_func_ptr_type order, uint64_t* __t3500t) {
  uint64_t __t3425t=0;
  char* __t3427t__=0;
  uint64_t __t3428t__value=0;
  uint64_t __t3429t=0;
  uint64_t ret=0;
  uint64_t __t3430t=0;
  char __t3431t=0;
  char* __t3432t__=0;
  uint64_t __t3433t__value=0;
  uint64_t number=0;
  char __t3435t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3425t=0;
  __t_errcode=get__t821t(numbers__unsafe_ptr,numbers__unsafe_size,numbers__unsafe_offset,numbers__unsafe_align,__t3425t,&__t3427t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3427t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3428t__value,__t3427t__,8);
  __t3429t=__t3428t__value;
  ret=__t3429t;
  __t3430t=0-1;
  while(1){
  __t3430t=__t3430t+1;
  __t_complain=get__t821t(numbers__unsafe_ptr,numbers__unsafe_size,numbers__unsafe_offset,numbers__unsafe_align,__t3430t,&__t3432t__);
  __t3431t=__t_complain;
  if(!__t3432t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t3433t__value,__t3432t__,8);
  }
  number=__t3433t__value;
  __t3431t=__t3431t==0;
  if(!__t3431t){
  break;
  }
  if(!order){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , uint64_t , char* ))order)(number,ret,&__t3435t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(__t3435t__){
  ret=number;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3500t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t404t(uint64_t value) {
  int __t405t=0;
  const char* endl=0;
  endl=__t393t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t3440t() {
  uint64_t __t3443t=0;
  uint64_t __t3448t=0;
  uint64_t __t3449t=0;
  uint64_t __t3450t=0;
  uint64_t __t3451t=0;
  char* __t3452t__unsafe_ptr=0;
  uint64_t __t3452t__unsafe_size=0;
  uint16_t __t3452t__unsafe_offset=0;
  uint16_t __t3452t__unsafe_align=0;
  uint64_t __t3453t=0;
  char* __t3454t__unsafe_ptr=0;
  uint64_t __t3454t__unsafe_size=0;
  uint16_t __t3454t__unsafe_offset=0;
  uint16_t __t3454t__unsafe_align=0;
  char __t3455t____t703t__=0;
  __smoll_func_ptr_type __t3460t=0;
  uint64_t __t3466t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t376t();
  __t3443t=5;
  __t3448t=4;
  __t3449t=1;
  __t3450t=3;
  __t3451t=2;
  nat____buffer__t3446t(&__t3452t__unsafe_ptr,&__t3452t__unsafe_size,&__t3452t__unsafe_offset,&__t3452t__unsafe_align);
  __t3453t=5;
  __t_errcode=alloc__t701t(&__t3452t__unsafe_ptr,&__t3452t__unsafe_size,&__t3452t__unsafe_offset,&__t3452t__unsafe_align,__t3453t,&__t3454t__unsafe_ptr,&__t3454t__unsafe_size,&__t3454t__unsafe_offset,&__t3454t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t3452t__unsafe_ptr,&__t3443t,8);
  memcpy(__t3452t__unsafe_ptr+8,&__t3448t,8);
  memcpy(__t3452t__unsafe_ptr+16,&__t3449t,8);
  memcpy(__t3452t__unsafe_ptr+24,&__t3450t,8);
  memcpy(__t3452t__unsafe_ptr+32,&__t3451t,8);
  __t3460t=(__smoll_func_ptr_type)min__t3456t;
  __t_errcode=least__t3424t(__t3452t__unsafe_ptr,__t3452t__unsafe_size,__t3452t__unsafe_offset,__t3452t__unsafe_align,__t3460t,&__t3466t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t404t(__t3466t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t602t(__t3454t__unsafe_ptr,&__t3455t____t703t__);
  if(__t3455t____t703t__){
  free__t672t(&__t3454t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3440t();return 0;}