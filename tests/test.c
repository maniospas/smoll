#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t475t="\n";
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

static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void ok__t4288t(int64_t value, char* __t4457t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t4457t=ret;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4458t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4458t=z;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void console__t454t() {
  console__t448t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void cstr__t4287t(int64_t value, const char** __t4459t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4459t=ret;
}

static inline __attribute__((always_inline)) void print__t473t(const char* value) {
  int __t474t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void WHICHERR__t4289t(char* __t4460t) {
  char __t4290t=0;
  char init=0;
  int64_t __t4291t=0;
  int64_t err=0;
  char __t4292t__=0;
  char __t4293t__=0;
  const char* __t4296t__=0;
  __t4290t=1;
  init=__t4290t;
  goto __t_return;
  __t_return:
  *__t4460t=init;
}

static inline __attribute__((always_inline)) void bits__t684t(uint64_t value, uint64_t* __t4461t) {
  goto __t_return;
  __t_return:
  *__t4461t=value;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4462t) {
  int value=0;
  *__t4462t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4463t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4463t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4464t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4464t=__t111t__;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t4465t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4465t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t4466t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4466t=z;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t4467t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4467t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t4468t) {
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
  *__t4468t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4469t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4469t=z;
}

static inline __attribute__((always_inline)) void lshift__t694t(uint64_t x__value, uint64_t y, uint64_t* __t4470t) {
  uint64_t z=0;
  uint64_t __t695t__value=0;
  z=(x__value<<y);
  bits__t684t(z,&__t695t__value);
  goto __t_return;
  __t_return:
  *__t4470t=__t695t__value;
}

static inline __attribute__((always_inline)) void bnot__t704t(uint64_t x__value, uint64_t* __t4471t) {
  uint64_t z=0;
  uint64_t __t705t__value=0;
  z=(~x__value);
  bits__t684t(z,&__t705t__value);
  goto __t_return;
  __t_return:
  *__t4471t=__t705t__value;
}

static inline __attribute__((always_inline)) void band__t700t(uint64_t x__value, uint64_t y__value, uint64_t* __t4472t) {
  uint64_t z=0;
  uint64_t __t701t__value=0;
  z=(x__value&y__value);
  bits__t684t(z,&__t701t__value);
  goto __t_return;
  __t_return:
  *__t4472t=__t701t__value;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4473t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4473t=z;
}

static inline __attribute__((always_inline)) void bor__t702t(uint64_t x__value, uint64_t y__value, uint64_t* __t4474t) {
  uint64_t z=0;
  uint64_t __t703t__value=0;
  z=(x__value|y__value);
  bits__t684t(z,&__t703t__value);
  goto __t_return;
  __t_return:
  *__t4474t=__t703t__value;
}

static inline __attribute__((always_inline)) int mask__t757t(uint64_t self__value, uint64_t from, uint64_t to, uint64_t other__value, uint64_t* __t4475t) {
  char __t758t__=0;
  uint64_t __t759t=0;
  char __t760t__=0;
  uint64_t __t761t__=0;
  uint64_t width=0;
  uint64_t __t762t=0;
  char __t763t__=0;
  uint64_t __t764t=0;
  uint64_t __t765t__value=0;
  uint64_t __t766t__value=0;
  uint64_t __t767t=0;
  uint64_t __t768t__=0;
  uint64_t __t769t__value=0;
  uint64_t mask__value=0;
  uint64_t __t770t__value=0;
  uint64_t __t771t__value=0;
  uint64_t __t772t=0;
  char __t773t__=0;
  uint64_t __t774t__value=0;
  uint64_t effective_range__value=0;
  uint64_t __t775t__value=0;
  uint64_t __t776t__value=0;
  uint64_t cleared__value=0;
  uint64_t __t777t__value=0;
  uint64_t replacement__value=0;
  uint64_t __t778t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(from,to,&__t758t__);
  if(__t758t__){
  __t_errcode=14;
  goto __t_failure;
  }
  __t759t=64;
  gt__t326t(to,__t759t,&__t760t__);
  if(__t760t__){
  __t_errcode=13;
  goto __t_failure;
  }
  __t_errcode=sub__t402t(to,from,&__t761t__);
  if(__t_errcode){
  goto __t_failure;
  }
  width=__t761t__;
  __t762t=64;
  eq__t134t(width,__t762t,&__t763t__);
  if(__t763t__){
  goto __t_return;
  }
  __t764t=1;
  bits__t684t(__t764t,&__t765t__value);
  lshift__t694t(__t765t__value,width,&__t766t__value);
  __t767t=1;
  __t_errcode=sub__t402t(__t766t__value,__t767t,&__t768t__);
  if(__t_errcode){
  goto __t_failure;
  }
  bits__t684t(__t768t__,&__t769t__value);
  mask__value=__t769t__value;
  bnot__t704t(mask__value,&__t770t__value);
  band__t700t(other__value,__t770t__value,&__t771t__value);
  __t772t=0;
  neq__t158t(__t771t__value,__t772t,&__t773t__);
  if(__t773t__){
  __t_errcode=15;
  goto __t_failure;
  }
  lshift__t694t(mask__value,from,&__t774t__value);
  effective_range__value=__t774t__value;
  bnot__t704t(effective_range__value,&__t775t__value);
  band__t700t(self__value,__t775t__value,&__t776t__value);
  cleared__value=__t776t__value;
  lshift__t694t(other__value,from,&__t777t__value);
  replacement__value=__t777t__value;
  bor__t702t(cleared__value,replacement__value,&__t778t__value);
  other__value=__t778t__value;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4475t=other__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t678t(uint64_t x, uint64_t* __t4476t) {
  int __t679t=0;
  int __t680t__=0;
  int __t681t=0;
  int __t682t=0;
  uint64_t value=0;
  not__t51t(__t679t,&__t680t__);
  value=x;
  goto __t_return;
  __t_return:
  *__t4476t=value;
}

static inline __attribute__((always_inline)) void rshift__t696t(uint64_t x__value, uint64_t y, uint64_t* __t4477t) {
  uint64_t z=0;
  uint64_t __t697t__value=0;
  z=(x__value>>y);
  bits__t684t(z,&__t697t__value);
  goto __t_return;
  __t_return:
  *__t4477t=__t697t__value;
}

static inline __attribute__((always_inline)) int slice__t740t(uint64_t self__value, uint64_t from, uint64_t to, uint64_t* __t4478t) {
  char __t741t__=0;
  uint64_t __t742t=0;
  char __t743t__=0;
  char __t744t__=0;
  uint64_t __t745t=0;
  uint64_t __t746t__=0;
  uint64_t __t747t__value=0;
  uint64_t __t748t=0;
  uint64_t __t749t__value=0;
  uint64_t __t750t__=0;
  uint64_t __t751t__value=0;
  uint64_t __t752t=0;
  uint64_t __t753t__=0;
  uint64_t __t754t__value=0;
  uint64_t mask__value=0;
  uint64_t __t755t__value=0;
  uint64_t __t756t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  gt__t326t(from,to,&__t741t__);
  if(__t741t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t742t=64;
  gt__t326t(to,__t742t,&__t743t__);
  if(__t743t__){
  __t_errcode=13;
  goto __t_failure;
  }
  eq__t134t(from,to,&__t744t__);
  if(__t744t__){
  __t745t=0;
  nat__t678t(__t745t,&__t746t__);
  bits__t684t(__t746t__,&__t747t__value);
  goto __t_return;
  }
  __t748t=1;
  bits__t684t(__t748t,&__t749t__value);
  __t_errcode=sub__t402t(to,from,&__t750t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lshift__t694t(__t749t__value,__t750t__,&__t751t__value);
  __t752t=1;
  __t_errcode=sub__t402t(__t751t__value,__t752t,&__t753t__);
  if(__t_errcode){
  goto __t_failure;
  }
  bits__t684t(__t753t__,&__t754t__value);
  mask__value=__t754t__value;
  rshift__t696t(self__value,from,&__t755t__value);
  band__t700t(__t755t__value,mask__value,&__t756t__value);
  __t747t__value=__t756t__value;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4478t=__t747t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t690t(uint64_t x__value, uint64_t* __t4479t) {
  uint64_t __t691t__=0;
  nat__t678t(x__value,&__t691t__);
  goto __t_return;
  __t_return:
  *__t4479t=__t691t__;
}

static inline __attribute__((always_inline)) void print__t486t(uint64_t value) {
  int __t487t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int main__t4443t() {
  char __t4444t__init=0;
  int64_t __t4445t____t4291t=0;
  int64_t __t4445t__err=0;
  char __t4445t____t4292t__=0;
  char __t4445t____t4293t__=0;
  const char* __t4445t____t4296t__=0;
  uint64_t __t4446t=0;
  uint64_t __t4447t__value=0;
  uint64_t __t4448t__value=0;
  uint64_t x__value=0;
  uint64_t __t4449t____t4442t__first__from=0;
  uint64_t __t4449t____t4442t__first__to=0;
  uint64_t __t4449t____t4442t__second__from=0;
  uint64_t __t4449t____t4442t__second__to=0;
  uint64_t __t4450t=0;
  uint64_t __t4451t__value=0;
  uint64_t __t4452t__value=0;
  uint64_t __t4453t____t4442t__first__from=0;
  uint64_t __t4453t____t4442t__first__to=0;
  uint64_t __t4453t____t4442t__second__from=0;
  uint64_t __t4453t____t4442t__second__to=0;
  uint64_t __t4454t__value=0;
  uint64_t __t4455t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  WHICHERR__t4289t(&__t4444t__init);
  __t4446t=0;
  bits__t684t(__t4446t,&__t4447t__value);
  __t4448t__value=__t4447t__value;
  x__value=__t4448t__value;
  __t4449t____t4442t__first__from=0;
  __t4449t____t4442t__first__to=3;
  __t4449t____t4442t__second__from=3;
  __t4449t____t4442t__second__to=5;
  __t4450t=5;
  bits__t684t(__t4450t,&__t4451t__value);
  __t_errcode=mask__t757t(x__value,__t4449t____t4442t__first__from,__t4449t____t4442t__first__to,__t4451t__value,&__t4452t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  x__value=__t4452t__value;
  __t4453t____t4442t__first__from=0;
  __t4453t____t4442t__first__to=3;
  __t4453t____t4442t__second__from=3;
  __t4453t____t4442t__second__to=5;
  __t_errcode=slice__t740t(x__value,__t4453t____t4442t__first__from,__t4453t____t4442t__first__to,&__t4454t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t690t(__t4454t__value,&__t4455t__);
  print__t486t(__t4455t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(__t4444t__init){
  if(__t_complain){
  __t4445t____t4291t=__t_complain;
  }
  else{
  __t4445t____t4291t=__t_errcode;
  }
  __t4445t__err=__t4445t____t4291t;
  ok__t4288t(__t4445t__err,&__t4445t____t4292t__);
  not__t42t(__t4445t____t4292t__,&__t4445t____t4293t__);
  if(__t4445t____t4293t__){
  console__t454t();
  cstr__t4287t(__t4445t__err,&__t4445t____t4296t__);
  print__t473t(__t4445t____t4296t__);
  }
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t448t();
  __t_errcode=main__t4443t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}