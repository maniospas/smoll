#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t452t="\n";
static const char* __t_all_errcodes[45] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
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
"not found",
"unexpected end of console read",
"user input was not a float",
"user input was not a natural number",
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
"imbalanced brackets"
};

static inline __attribute__((always_inline)) void of__t750t(uint64_t to, uint64_t* __t4431t, uint64_t* __t4432t) {
  uint64_t __t751t=0;
  uint64_t from=0;
  __t751t=0;
  from=__t751t;
  goto __t_return;
  __t_return:
  *__t4431t=from;
  *__t4432t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4433t) {
  int value=0;
  *__t4433t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4434t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4434t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4435t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4435t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4436t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4436t=z;
}

static inline __attribute__((always_inline)) void range__t767t(uint64_t _from, uint64_t to, uint64_t* __t4437t, uint64_t* __t4438t) {
  uint64_t __t768t=0;
  uint64_t __t769t__=0;
  uint64_t __t770t=0;
  uint64_t from=0;
  __t768t=0;
  add__t188t(__t768t,_from,&__t769t__);
  __t770t=__t769t__;
  from=__t770t;
  goto __t_return;
  __t_return:
  *__t4437t=from;
  *__t4438t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t4439t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4439t=z;
}

static inline __attribute__((always_inline)) int mutget__t772t(uint64_t* __t4440t, uint64_t r__to, uint64_t skipped, uint64_t* __t4441t) {
  uint64_t r__from=*__t4440t;
  char __t773t__=0;
  uint64_t ret=0;
  uint64_t __t774t=0;
  uint64_t __t775t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t773t__);
  if(__t773t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t774t=1;
  add__t188t(ret,__t774t,&__t775t__);
  r__from=__t775t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4440t=r__from;
  *__t4441t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t4442t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4442t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t4443t) {
  int __t403t__=0;
  int __t404t=0;
  int __t405t=0;
  char __t406t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t403t__);
  lt__t302t(x,y,&__t406t__);
  if(__t406t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4443t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int consume__t4400t(uint64_t* __t4444t) {
  uint64_t FINITE__remaining=*__t4444t;
  int __t4401t=0;
  uint64_t __t4402t=0;
  uint64_t cost=0;
  uint64_t __t4403t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4402t=1;
  cost=__t4402t;
  __t_errcode=sub__t402t(FINITE__remaining,cost,&__t4403t__);
  if(__t_errcode){
  goto __t_failure;
  }
  FINITE__remaining=__t4403t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4444t=FINITE__remaining;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t463t(uint64_t value) {
  int __t464t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int main__t4422t(uint64_t* __t4445t) {
  uint64_t FINITE__remaining=*__t4445t;
  uint64_t __t4423t=0;
  uint64_t __t4424t=0;
  uint64_t __t4425t__from=0;
  uint64_t __t4425t__to=0;
  uint64_t __t4426t__from=0;
  uint64_t __t4426t__to=0;
  char __t4427t=0;
  uint64_t __t4428t__=0;
  uint64_t i=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4424t=10;
  of__t750t(__t4424t,&__t4425t__from,&__t4425t__to);
  range__t767t(__t4425t__from,__t4425t__to,&__t4426t__from,&__t4426t__to);
  __t4423t=0-1;
  while(1){
  __t4423t=__t4423t+1;
  __t_complain=mutget__t772t(&__t4426t__from,__t4426t__to,__t4423t,&__t4428t__);
  __t4427t=__t_complain;
  if(__t_complain){
  goto __t4427t__label;
  }
  i=__t4428t__;
  __t4427t__label:__t4427t=__t4427t==0;
  if(!__t4427t){
  break;
  }
  __t_errcode=consume__t4400t(&FINITE__remaining);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t463t(i);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4445t=FINITE__remaining;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void console__t425t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void budget__t4394t(uint64_t capacity, uint64_t* __t4446t) {
  uint64_t __t4395t=0;
  uint64_t remaining=0;
  __t4395t=capacity;
  remaining=__t4395t;
  goto __t_return;
  __t_return:
  *__t4446t=remaining;
}

static inline __attribute__((always_inline)) void FINITE__t4404t(uint64_t* __t4447t) {
  uint64_t __t4420t____t4419t____t4414t=0;
  uint64_t __t4421t__remaining=0;
  __t4420t____t4419t____t4414t=0;
  budget__t4394t(__t4420t____t4419t____t4414t,&__t4421t__remaining);
  goto __t_return;
  __t_return:
  *__t4447t=__t4421t__remaining;
}

int main(int argc, char** argv) {
  uint64_t __t4450t__remaining=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t425t();
  FINITE__t4404t(&__t4450t__remaining);
  __t_errcode=main__t4422t(&__t4450t__remaining);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}