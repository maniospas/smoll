#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/curl.h"
int __t_argc;
char** __t_argv;

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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float__t4t(double* __t3362t) {
  double value=0;
  *__t3362t=value;
}

static inline __attribute__((always_inline)) void caller__t3343t(double __t_anon0, double __t_anon1, double* __t3363t) {
  double __t3344t__=0;
  float__t4t(&__t3344t__);
  goto __t_return;
  __t_return:
  *__t3363t=__t3344t__;
}

static inline __attribute__((always_inline)) void float____buffer__t3355t(char** __t3364t, uint64_t* __t3365t, uint16_t* __t3366t, uint16_t* __t3367t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t3364t=unsafe_ptr;
  *__t3365t=unsafe_size;
  *__t3366t=unsafe_offset;
  *__t3367t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t3368t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3368t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t3369t) {
  char* allocated=*__t3369t;
  if(allocated){
  free(allocated);
  }
  *__t3369t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t3370t) {
  int value=0;
  *__t3370t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t3371t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t3371t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t3372t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t3372t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t3373t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3373t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t3374t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3374t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t3375t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3375t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t3376t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3376t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t3377t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3377t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t3378t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3378t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t3379t, uint64_t* __t3380t, uint16_t* __t3381t, uint16_t* __t3382t, uint64_t size, char** __t3383t, uint64_t* __t3384t, uint16_t* __t3385t, uint16_t* __t3386t) {
  char* buffer__unsafe_ptr=*__t3379t;
  uint64_t buffer__unsafe_size=*__t3380t;
  uint16_t buffer__unsafe_offset=*__t3381t;
  uint16_t buffer__unsafe_align=*__t3382t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3379t=buffer__unsafe_ptr;
  *__t3380t=buffer__unsafe_size;
  *__t3381t=buffer__unsafe_offset;
  *__t3382t=buffer__unsafe_align;
  *__t3383t=buffer__unsafe_ptr;
  *__t3384t=buffer__unsafe_size;
  *__t3385t=buffer__unsafe_offset;
  *__t3386t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void foo__t3345t(char* c, char** __t3387t) {
  double __t3346t=0;
  double __t3347t=0;
  goto __t_return;
  __t3346t=1.0;
  __t3347t=1.0;
  __t_return:
  *__t3387t=c;
}

static inline __attribute__((always_inline)) int main__t3348t() {
  double __t3350t=0;
  double __t3351t=0;
  double __t3352t__=0;
  char* __t3357t__unsafe_ptr=0;
  uint64_t __t3357t__unsafe_size=0;
  uint16_t __t3357t__unsafe_offset=0;
  uint16_t __t3357t__unsafe_align=0;
  uint64_t __t3358t=0;
  char* __t3359t__unsafe_ptr=0;
  uint64_t __t3359t__unsafe_size=0;
  uint16_t __t3359t__unsafe_offset=0;
  uint16_t __t3359t__unsafe_align=0;
  char __t3360t____t692t__=0;
  char* __t3361t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t3350t=0.0;
  __t3351t=0.0;
  caller__t3343t(__t3350t,__t3351t,&__t3352t__);
  float____buffer__t3355t(&__t3357t__unsafe_ptr,&__t3357t__unsafe_size,&__t3357t__unsafe_offset,&__t3357t__unsafe_align);
  __t3358t=1;
  __t_errcode=alloc__t690t(&__t3357t__unsafe_ptr,&__t3357t__unsafe_size,&__t3357t__unsafe_offset,&__t3357t__unsafe_align,__t3358t,&__t3359t__unsafe_ptr,&__t3359t__unsafe_size,&__t3359t__unsafe_offset,&__t3359t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t3357t__unsafe_ptr,&__t3352t__,8);
  foo__t3345t(__t3357t__unsafe_ptr,&__t3361t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t3359t__unsafe_ptr,&__t3360t____t692t__);
  if(__t3360t____t692t__){
  free__t661t(&__t3359t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3348t();return 0;}