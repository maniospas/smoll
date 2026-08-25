#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
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
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
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
int l1__t2819t(char* _p, uint64_t* __t2873t) ;
;
;
static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void point__t2790t(uint64_t x, uint64_t y, uint64_t* __t2837t, uint64_t* __t2838t) {
  goto __t_return;
  __t_return:
  *__t2837t=x;
  *__t2838t=y;
}

static inline __attribute__((always_inline)) void point____buffer__t2812t(char** __t2839t, uint64_t* __t2840t, uint32_t* __t2841t, uint32_t* __t2842t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=16;
  *__t2839t=unsafe_ptr;
  *__t2840t=unsafe_size;
  *__t2841t=unsafe_offset;
  *__t2842t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t2843t) {
  char* allocated=*__t2843t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t2843t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2844t) {
  int value=0;
  *__t2844t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2845t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2845t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2846t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2846t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2847t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2847t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2848t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2848t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t2849t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2849t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2850t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2850t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t2851t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2851t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2852t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2852t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t2853t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2853t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t2854t, uint64_t* __t2855t, uint32_t* __t2856t, uint32_t* __t2857t, uint64_t size, char** __t2858t, uint64_t* __t2859t, uint32_t* __t2860t, uint32_t* __t2861t) {
  char* buffer__unsafe_ptr=*__t2854t;
  uint64_t buffer__unsafe_size=*__t2855t;
  uint32_t buffer__unsafe_offset=*__t2856t;
  uint32_t buffer__unsafe_align=*__t2857t;
  int __t840t=0;
  char __t842t__=0;
  uint64_t __t843t=0;
  char __t844t__=0;
  char __t845t=0;
  uint64_t __t846t=0;
  uint64_t __t847t__=0;
  uint64_t __t848t__=0;
  int __t850t=0;
  uint64_t __t851t=0;
  char __t852t__=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t bytes=0;
  int __t855t=0;
  uint64_t __t856t=0;
  char __t857t__=0;
  char* __t858t__=0;
  int __t859t=0;
  uint64_t __t860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t842t__);
  if(__t842t__){
  __t843t=0;
  neq__t157t(size,__t843t,&__t844t__);
  __t845t=__t844t__;
  }
  if(__t845t){
  __t846t=0;
  nat__t727t(buffer__unsafe_align,&__t847t__);
  mul__t212t(__t847t__,size,&__t848t__);
  zero__t723t(buffer__unsafe_ptr,__t846t,__t848t__);
  goto __t_return;
  }
  __t851t=0;
  neq__t157t(buffer__unsafe_size,__t851t,&__t852t__);
  if(__t852t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t853t__);
  mul__t212t(__t853t__,size,&__t854t__);
  bytes=__t854t__;
  __t856t=0;
  eq__t133t(bytes,__t856t,&__t857t__);
  if(__t857t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t860t=0;
  zero__t723t(__t858t__,__t860t,bytes);
  buffer__unsafe_ptr=__t858t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t722t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2854t=buffer__unsafe_ptr;
  *__t2855t=buffer__unsafe_size;
  *__t2856t=buffer__unsafe_offset;
  *__t2857t=buffer__unsafe_align;
  *__t2858t=buffer__unsafe_ptr;
  *__t2859t=buffer__unsafe_size;
  *__t2860t=buffer__unsafe_offset;
  *__t2861t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t2862t) {
  int __t302t__=0;
  char z=0;
  is_different__t108t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2862t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t2863t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2863t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2864t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2864t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2865t) {
  *__t2865t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t2866t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t2866t=__t725t__;
}

static inline __attribute__((always_inline)) int last__t1020t(char** __t2867t, uint64_t* __t2868t, uint32_t* __t2869t, uint32_t* __t2870t, char** __t2871t) {
  char* buffer__unsafe_ptr=*__t2867t;
  uint64_t buffer__unsafe_size=*__t2868t;
  uint32_t buffer__unsafe_offset=*__t2869t;
  uint32_t buffer__unsafe_align=*__t2870t;
  char __t1021t=0;
  uint64_t __t1022t=0;
  uint64_t __t1023t__=0;
  uint64_t adjusted_size=0;
  char __t1024t__=0;
  uint64_t __t1025t__=0;
  uint64_t __t1026t__=0;
  uint64_t __t1027t__=0;
  uint64_t __t1028t__=0;
  char* __t1029t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1022t=1;
  __t_complain=sub__t401t(buffer__unsafe_size,__t1022t,&__t1023t__);
  __t1021t=__t_complain;
  if(__t_complain){
  goto __t1021t__label;
  }
  adjusted_size=__t1023t__;
  __t1021t__label:__t1021t=__t1021t==0;
  not__t41t(__t1021t,&__t1024t__);
  if(__t1024t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_offset,&__t1025t__);
  add__t188t(adjusted_size,__t1025t__,&__t1026t__);
  nat__t727t(buffer__unsafe_align,&__t1027t__);
  mul__t212t(__t1026t__,__t1027t__,&__t1028t__);
  add__t724t(buffer__unsafe_ptr,__t1028t__,&__t1029t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2867t=buffer__unsafe_ptr;
  *__t2868t=buffer__unsafe_size;
  *__t2869t=buffer__unsafe_offset;
  *__t2870t=buffer__unsafe_align;
  *__t2871t=__t1029t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int l1__t2803t(char* _p, uint64_t* __t2872t) {
  uint64_t __t2804t__x=0;
  uint64_t __t2804t__y=0;
  uint64_t p__x=0;
  uint64_t p__y=0;
  uint64_t __t2805t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!_p){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2804t__x,_p,8);
  memcpy(&__t2804t__y,_p+8,8);
  p__x=__t2804t__x;
  p__y=__t2804t__y;
  add__t188t(p__x,p__y,&__t2805t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2872t=__t2805t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int l1__t2819t(char* _p, uint64_t* __t2873t) {
  uint64_t __t2820t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=l1__t2803t(_p,&__t2820t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2873t=__t2820t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void _point_ptr______nat___t2798t(__smoll_func_ptr_type* __t2874t) {
  __smoll_func_ptr_type value=0;
  *__t2874t=value;
}



static inline __attribute__((always_inline)) int test__t2799t(char* self, __smoll_func_ptr_type func, uint64_t* __t2875t) {
  uint64_t __t2801t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!func){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(char* , uint64_t* ))func)(self,&__t2801t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2875t=__t2801t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2806t() {
  uint64_t __t2809t=0;
  uint64_t __t2810t=0;
  uint64_t __t2811t__x=0;
  uint64_t __t2811t__y=0;
  char* __t2814t__unsafe_ptr=0;
  uint64_t __t2814t__unsafe_size=0;
  uint32_t __t2814t__unsafe_offset=0;
  uint32_t __t2814t__unsafe_align=0;
  uint64_t __t2815t=0;
  char* __t2816t__unsafe_ptr=0;
  uint64_t __t2816t__unsafe_size=0;
  uint32_t __t2816t__unsafe_offset=0;
  uint32_t __t2816t__unsafe_align=0;
  char* __t2818t__=0;
  char* p=0;
  __smoll_func_ptr_type __t2827t=0;
  __smoll_func_ptr_type __t2834t=0;
  uint64_t __t2835t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t2809t=1;
  __t2810t=2;
  point__t2790t(__t2809t,__t2810t,&__t2811t__x,&__t2811t__y);
  point____buffer__t2812t(&__t2814t__unsafe_ptr,&__t2814t__unsafe_size,&__t2814t__unsafe_offset,&__t2814t__unsafe_align);
  __t2815t=1;
  __t_errcode=alloc__t839t(&__t2814t__unsafe_ptr,&__t2814t__unsafe_size,&__t2814t__unsafe_offset,&__t2814t__unsafe_align,__t2815t,&__t2816t__unsafe_ptr,&__t2816t__unsafe_size,&__t2816t__unsafe_offset,&__t2816t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2814t__unsafe_ptr,&__t2811t__x,8);
  memcpy(__t2814t__unsafe_ptr+8,&__t2811t__y,8);
  __t_errcode=last__t1020t(&__t2814t__unsafe_ptr,&__t2814t__unsafe_size,&__t2814t__unsafe_offset,&__t2814t__unsafe_align,&__t2818t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p=__t2818t__;
  __t2827t=(__smoll_func_ptr_type)l1__t2819t;
  __t2834t=(__smoll_func_ptr_type)__t2827t;
  __t_errcode=test__t2799t(p,__t2834t,&__t2835t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t454t(__t2835t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t722t(&__t2816t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2806t();return 0;}