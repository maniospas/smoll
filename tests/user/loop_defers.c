#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t707t="sjip";
const char* const __t711t="alloc";
const char* const __t702t="free";
const char* const __t403t="\n";
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

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____t_buffer____buffer__t2787t(char** __t2811t, uint64_t* __t2812t, uint32_t* __t2813t, uint32_t* __t2814t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t2811t=unsafe_ptr;
  *__t2812t=unsafe_size;
  *__t2813t=unsafe_offset;
  *__t2814t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t382t() {
  console__t379t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t401t(const char* value) {
  int __t402t=0;
  const char* endl=0;
  endl=__t403t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t2815t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2815t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2816t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2816t=z;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t2817t) {
  char* allocated=*__t2817t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t2817t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2818t) {
  int value=0;
  *__t2818t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2819t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2819t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2820t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2820t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2821t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2821t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2822t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2822t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t2823t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2823t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2824t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2824t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t2825t) {
  char* allocated=0;
  char __t676t__=0;
  char __t677t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t612t(allocated,&__t676t__);
  not__t41t(__t676t__,&__t677t__);
  if(__t677t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2825t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t842t(char** __t2826t, uint64_t* __t2827t, uint32_t* __t2828t, uint32_t* __t2829t, uint64_t size, char** __t2830t, uint64_t* __t2831t, uint32_t* __t2832t, uint32_t* __t2833t) {
  char* buffer__unsafe_ptr=*__t2826t;
  uint64_t buffer__unsafe_size=*__t2827t;
  uint32_t buffer__unsafe_offset=*__t2828t;
  uint32_t buffer__unsafe_align=*__t2829t;
  int __t843t=0;
  char __t846t__=0;
  char __t847t__=0;
  char __t853t__=0;
  uint64_t __t854t=0;
  char __t855t__=0;
  char __t856t=0;
  uint64_t __t857t=0;
  uint64_t __t858t__=0;
  uint64_t __t859t__=0;
  int __t861t=0;
  uint64_t __t862t=0;
  char __t863t__=0;
  uint64_t __t864t__=0;
  uint64_t __t865t__=0;
  uint64_t bytes=0;
  int __t866t=0;
  uint64_t __t867t=0;
  char __t868t__=0;
  char* __t869t__=0;
  int __t870t=0;
  uint64_t __t871t=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_console__t382t();
  print__t401t(__t711t);
  eq__t133t(buffer__unsafe_size,size,&__t853t__);
  if(__t853t__){
  __t854t=0;
  neq__t157t(size,__t854t,&__t855t__);
  __t856t=__t855t__;
  }
  if(__t856t){
  __t857t=0;
  nat__t687t(buffer__unsafe_align,&__t858t__);
  mul__t212t(__t858t__,size,&__t859t__);
  zero__t683t(buffer__unsafe_ptr,__t857t,__t859t__);
  goto __t_return;
  }
  __t862t=0;
  neq__t157t(buffer__unsafe_size,__t862t,&__t863t__);
  if(__t863t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t864t__);
  mul__t212t(__t864t__,size,&__t865t__);
  bytes=__t865t__;
  __t867t=0;
  eq__t133t(bytes,__t867t,&__t868t__);
  if(__t868t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t675t(bytes,&__t869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t871t=0;
  zero__t683t(__t869t__,__t871t,bytes);
  buffer__unsafe_ptr=__t869t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:unsafe_console__t382t();
  print__t401t(__t702t);
  exists__t612t(buffer__unsafe_ptr,&__t846t__);
  not__t41t(__t846t__,&__t847t__);
  if(__t847t__){
  unsafe_console__t382t();
  print__t401t(__t707t);
  }
  free__t682t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2826t=buffer__unsafe_ptr;
  *__t2827t=buffer__unsafe_size;
  *__t2828t=buffer__unsafe_offset;
  *__t2829t=buffer__unsafe_align;
  *__t2830t=buffer__unsafe_ptr;
  *__t2831t=buffer__unsafe_size;
  *__t2832t=buffer__unsafe_offset;
  *__t2833t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t633t(uint64_t to, uint64_t* __t2834t, uint64_t* __t2835t) {
  uint64_t __t634t=0;
  __t634t=0;
  goto __t_return;
  __t_return:
  *__t2834t=__t634t;
  *__t2835t=to;
}

static inline __attribute__((always_inline)) void range__t650t(uint64_t _from, uint64_t to, uint64_t* __t2836t, uint64_t* __t2837t) {
  uint64_t __t651t=0;
  uint64_t from=0;
  __t651t=_from;
  from=__t651t;
  goto __t_return;
  __t_return:
  *__t2836t=from;
  *__t2837t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2838t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2838t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2839t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2839t=z;
}

static inline __attribute__((always_inline)) int get__t657t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t2840t) {
  uint64_t __t658t__=0;
  uint64_t pos=0;
  char __t659t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(_pos,r__from,&__t658t__);
  pos=__t658t__;
  ge__t337t(pos,r__to,&__t659t__);
  if(__t659t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2840t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2841t) {
  *__t2841t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t2842t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t2842t=__t685t__;
}

static inline __attribute__((always_inline)) int mutget__t1089t(char** __t2843t, uint64_t* __t2844t, uint32_t* __t2845t, uint32_t* __t2846t, uint64_t i, char** __t2847t) {
  char* buffer__unsafe_ptr=*__t2843t;
  uint64_t buffer__unsafe_size=*__t2844t;
  uint32_t buffer__unsafe_offset=*__t2845t;
  uint32_t buffer__unsafe_align=*__t2846t;
  char __t1090t__=0;
  uint64_t __t1091t__=0;
  uint64_t __t1092t__=0;
  uint64_t __t1093t__=0;
  uint64_t __t1094t__=0;
  char* __t1095t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t1090t__);
  if(__t1090t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t1091t__);
  mul__t212t(i,__t1091t__,&__t1092t__);
  nat__t687t(buffer__unsafe_offset,&__t1093t__);
  add__t188t(__t1092t__,__t1093t__,&__t1094t__);
  add__t684t(buffer__unsafe_ptr,__t1094t__,&__t1095t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2843t=buffer__unsafe_ptr;
  *__t2844t=buffer__unsafe_size;
  *__t2845t=buffer__unsafe_offset;
  *__t2846t=buffer__unsafe_align;
  *__t2847t=__t1095t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t2786t(char** __t2848t, uint64_t* __t2849t, uint32_t* __t2850t, uint32_t* __t2851t) {
  char* __t2789t__unsafe_ptr=0;
  uint64_t __t2789t__unsafe_size=0;
  uint32_t __t2789t__unsafe_offset=0;
  uint32_t __t2789t__unsafe_align=0;
  uint64_t __t2790t=0;
  char* __t2791t__unsafe_ptr=0;
  uint64_t __t2791t__unsafe_size=0;
  uint32_t __t2791t__unsafe_offset=0;
  uint32_t __t2791t__unsafe_align=0;
  char __t2792t____t846t__=0;
  char __t2792t____t847t__=0;
  char* __t2793t__unsafe_ptr=0;
  uint64_t __t2793t__unsafe_size=0;
  uint32_t __t2793t__unsafe_offset=0;
  uint32_t __t2793t__unsafe_align=0;
  char* z__unsafe_ptr=0;
  uint64_t z__unsafe_size=0;
  uint32_t z__unsafe_offset=0;
  uint32_t z__unsafe_align=0;
  uint64_t __t2794t=0;
  uint64_t __t2795t=0;
  uint64_t __t2796t____t634t=0;
  uint64_t __t2796t__to=0;
  uint64_t __t2797t__from=0;
  uint64_t __t2797t__to=0;
  char __t2798t=0;
  uint64_t __t2799t__=0;
  uint64_t i=0;
  uint64_t __t2800t=0;
  char* __t2802t__=0;
  uint64_t __t2803t=0;
  uint64_t __t2804t=0;
  char __t2805t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat____t_buffer____buffer__t2787t(&__t2789t__unsafe_ptr,&__t2789t__unsafe_size,&__t2789t__unsafe_offset,&__t2789t__unsafe_align);
  __t2790t=10;
  __t_errcode=alloc__t842t(&__t2789t__unsafe_ptr,&__t2789t__unsafe_size,&__t2789t__unsafe_offset,&__t2789t__unsafe_align,__t2790t,&__t2791t__unsafe_ptr,&__t2791t__unsafe_size,&__t2791t__unsafe_offset,&__t2791t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2793t__unsafe_ptr=__t2791t__unsafe_ptr;
  __t2793t__unsafe_size=__t2791t__unsafe_size;
  __t2793t__unsafe_offset=__t2791t__unsafe_offset;
  __t2793t__unsafe_align=__t2791t__unsafe_align;
  z__unsafe_ptr=__t2793t__unsafe_ptr;
  z__unsafe_size=__t2793t__unsafe_size;
  z__unsafe_offset=__t2793t__unsafe_offset;
  z__unsafe_align=__t2793t__unsafe_align;
  __t2795t=10;
  of__t633t(__t2795t,&__t2796t____t634t,&__t2796t__to);
  range__t650t(__t2796t____t634t,__t2796t__to,&__t2797t__from,&__t2797t__to);
  __t2794t=0-1;
  while(1){
  __t2794t=__t2794t+1;
  __t_complain=get__t657t(__t2797t__from,__t2797t__to,__t2794t,&__t2799t__);
  __t2798t=__t_complain;
  if(__t_complain){
  goto __t2798t__label;
  }
  i=__t2799t__;
  __t2798t__label:__t2798t=__t2798t==0;
  if(!__t2798t){
  break;
  }
  __t2800t=5;
  __t_errcode=mutget__t1089t(&z__unsafe_ptr,&z__unsafe_size,&z__unsafe_offset,&z__unsafe_align,__t2800t,&__t2802t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2803t=5;
  if(!__t2802t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2802t__,&__t2803t,8);
  __t2804t=5;
  eq__t133t(i,__t2804t,&__t2805t__);
  if(__t2805t__){
  goto __t_return;
  }
  }
  z__unsafe_ptr=z__unsafe_ptr;
  z__unsafe_size=z__unsafe_size;
  z__unsafe_offset=z__unsafe_offset;
  z__unsafe_align=z__unsafe_align;
  
  __t_failure:unsafe_console__t382t();
  print__t401t(__t702t);
  exists__t612t(z__unsafe_ptr,&__t2792t____t846t__);
  not__t41t(__t2792t____t846t__,&__t2792t____t847t__);
  if(__t2792t____t847t__){
  unsafe_console__t382t();
  print__t401t(__t707t);
  }
  free__t682t(&z__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2848t=z__unsafe_ptr;
  *__t2849t=z__unsafe_size;
  *__t2850t=z__unsafe_offset;
  *__t2851t=z__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2806t() {
  char* __t2809t__unsafe_ptr=0;
  uint64_t __t2809t__unsafe_size=0;
  uint32_t __t2809t__unsafe_offset=0;
  uint32_t __t2809t__unsafe_align=0;
  char __t2810t____t2792t____t846t__=0;
  char __t2810t____t2792t____t847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t_errcode=test__t2786t(&__t2809t__unsafe_ptr,&__t2809t__unsafe_size,&__t2809t__unsafe_offset,&__t2809t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:unsafe_console__t382t();
  print__t401t(__t702t);
  exists__t612t(__t2809t__unsafe_ptr,&__t2810t____t2792t____t846t__);
  not__t41t(__t2810t____t2792t____t846t__,&__t2810t____t2792t____t847t__);
  if(__t2810t____t2792t____t847t__){
  unsafe_console__t382t();
  print__t401t(__t707t);
  }
  free__t682t(&__t2809t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2806t();return 0;}