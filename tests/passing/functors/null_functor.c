#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t442t="\n";
const char* const __t2967t="failed";
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
int add__t2842t(uint64_t x, uint64_t* __t2975t) ;
;
int add__t2864t(uint64_t x, uint64_t* __t2977t) ;
;
int add__t2886t(uint64_t x, uint64_t* __t2979t) ;
;
int add__t2908t(uint64_t x, uint64_t* __t2981t) ;
;
int add__t2930t(uint64_t x, uint64_t* __t2983t) ;
;
int add__t2952t(uint64_t y, __smoll_func_ptr_type* __t2985t) ;
;
;
static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2969t) {
  int value=0;
  *__t2969t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2970t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2970t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2971t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2971t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2972t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2972t=z;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t2973t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2973t=z;
}

static inline __attribute__((always_inline)) void add__t2817t(uint64_t x, uint64_t* __t2974t) {
  uint64_t __t2819t=0;
  uint64_t __t2820t__=0;
  __t2819t=1;
  add__t187t(x,__t2819t,&__t2820t__);
  goto __t_return;
  __t_return:
  *__t2974t=__t2820t__;
}

int add__t2842t(uint64_t x, uint64_t* __t2975t) {
  uint64_t __t2843t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2817t(x,&__t2843t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2975t=__t2843t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2821t(uint64_t x, uint64_t* __t2976t) {
  uint64_t __t2823t=0;
  uint64_t __t2824t__=0;
  __t2823t=2;
  add__t187t(x,__t2823t,&__t2824t__);
  goto __t_return;
  __t_return:
  *__t2976t=__t2824t__;
}

int add__t2864t(uint64_t x, uint64_t* __t2977t) {
  uint64_t __t2865t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2821t(x,&__t2865t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2977t=__t2865t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2825t(uint64_t x, uint64_t* __t2978t) {
  uint64_t __t2827t=0;
  uint64_t __t2828t__=0;
  __t2827t=3;
  add__t187t(x,__t2827t,&__t2828t__);
  goto __t_return;
  __t_return:
  *__t2978t=__t2828t__;
}

int add__t2886t(uint64_t x, uint64_t* __t2979t) {
  uint64_t __t2887t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2825t(x,&__t2887t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2979t=__t2887t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2829t(uint64_t x, uint64_t* __t2980t) {
  uint64_t __t2831t=0;
  uint64_t __t2832t__=0;
  __t2831t=4;
  add__t187t(x,__t2831t,&__t2832t__);
  goto __t_return;
  __t_return:
  *__t2980t=__t2832t__;
}

int add__t2908t(uint64_t x, uint64_t* __t2981t) {
  uint64_t __t2909t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2829t(x,&__t2909t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2981t=__t2909t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2833t(uint64_t x, uint64_t* __t2982t) {
  uint64_t __t2835t=0;
  uint64_t __t2836t__=0;
  __t2835t=5;
  add__t187t(x,__t2835t,&__t2836t__);
  goto __t_return;
  __t_return:
  *__t2982t=__t2836t__;
}

int add__t2930t(uint64_t x, uint64_t* __t2983t) {
  uint64_t __t2931t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2833t(x,&__t2931t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2983t=__t2931t__;
  
  __t_skip_returns:
  return __t_errcode;
}



static inline __attribute__((always_inline)) void add__t2837t(uint64_t y, __smoll_func_ptr_type* __t2984t) {
  uint64_t __t2839t=0;
  char __t2840t__=0;
  __smoll_func_ptr_type __t2852t=0;
  __smoll_func_ptr_type __t2859t=0;
  uint64_t __t2861t=0;
  char __t2862t__=0;
  __smoll_func_ptr_type __t2874t=0;
  __smoll_func_ptr_type __t2881t=0;
  uint64_t __t2883t=0;
  char __t2884t__=0;
  __smoll_func_ptr_type __t2896t=0;
  __smoll_func_ptr_type __t2903t=0;
  uint64_t __t2905t=0;
  char __t2906t__=0;
  __smoll_func_ptr_type __t2918t=0;
  __smoll_func_ptr_type __t2925t=0;
  uint64_t __t2927t=0;
  char __t2928t__=0;
  __smoll_func_ptr_type __t2940t=0;
  __smoll_func_ptr_type __t2947t=0;
  __t2839t=1;
  eq__t133t(y,__t2839t,&__t2840t__);
  if(__t2840t__){
  __t2852t=(__smoll_func_ptr_type)add__t2842t;
  __t2859t=(__smoll_func_ptr_type)__t2852t;
  goto __t_return;
  }
  __t2861t=2;
  eq__t133t(y,__t2861t,&__t2862t__);
  if(__t2862t__){
  __t2874t=(__smoll_func_ptr_type)add__t2864t;
  __t2881t=(__smoll_func_ptr_type)__t2874t;
  __t2859t=__t2881t;
  goto __t_return;
  }
  __t2883t=3;
  eq__t133t(y,__t2883t,&__t2884t__);
  if(__t2884t__){
  __t2896t=(__smoll_func_ptr_type)add__t2886t;
  __t2903t=(__smoll_func_ptr_type)__t2896t;
  __t2859t=__t2903t;
  goto __t_return;
  }
  __t2905t=4;
  eq__t133t(y,__t2905t,&__t2906t__);
  if(__t2906t__){
  __t2918t=(__smoll_func_ptr_type)add__t2908t;
  __t2925t=(__smoll_func_ptr_type)__t2918t;
  __t2859t=__t2925t;
  goto __t_return;
  }
  __t2927t=5;
  eq__t133t(y,__t2927t,&__t2928t__);
  if(__t2928t__){
  __t2940t=(__smoll_func_ptr_type)add__t2930t;
  __t2947t=(__smoll_func_ptr_type)__t2940t;
  __t2859t=__t2947t;
  goto __t_return;
  }
  __t2859t=__t2859t;
  __t_return:
  *__t2984t=__t2859t;
}

int add__t2952t(uint64_t y, __smoll_func_ptr_type* __t2985t) {
  __smoll_func_ptr_type __t2953t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t2837t(y,&__t2953t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2985t=__t2953t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat_______nat______nat____t2797t(__smoll_func_ptr_type* __t2986t) {
  __smoll_func_ptr_type value=0;
  *__t2986t=value;
}



static inline __attribute__((always_inline)) int next__t2798t(__smoll_func_ptr_type addition_generator, __smoll_func_ptr_type* __t2987t) {
  uint64_t __t2799t=0;
  __smoll_func_ptr_type __t2801t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2799t=10;
  if(!addition_generator){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(uint64_t , __smoll_func_ptr_type* ))addition_generator)(__t2799t,&__t2801t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2987t=__t2801t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void _nat______nat___t2792t(__smoll_func_ptr_type* __t2988t) {
  __smoll_func_ptr_type value=0;
  *__t2988t=value;
}



static inline __attribute__((always_inline)) void print__t453t(uint64_t value) {
  int __t454t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t440t(const char* value) {
  int __t441t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2948t() {
  __smoll_func_ptr_type __t2960t=0;
  __smoll_func_ptr_type __t2961t__=0;
  __smoll_func_ptr_type successor_function=0;
  char __t2962t=0;
  uint64_t __t2963t=0;
  uint64_t __t2965t__=0;
  uint64_t ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  __t2960t=(__smoll_func_ptr_type)add__t2952t;
  __t_errcode=next__t2798t(__t2960t,&__t2961t__);
  if(__t_errcode){
  goto __t_failure;
  }
  successor_function=__t2961t__;
  __t2963t=5;
  if(!successor_function){
  __t_complain=2;
  __t2962t=__t_complain;
  goto __t2962t__label;
  }
  else{
  __t_complain=((int (*)(uint64_t , uint64_t* ))successor_function)(__t2963t,&__t2965t__);
  __t2962t=__t_complain;
  if(__t_complain){
  goto __t2962t__label;
  }
  }
  ret=__t2965t__;
  __t2962t__label:__t2962t=__t2962t==0;
  if(__t2962t){
  print__t453t(ret);
  }
  else{
  print__t440t(__t2967t);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t2948t();
                }