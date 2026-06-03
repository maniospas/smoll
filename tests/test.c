#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t6237t="here";
const char* const __t4737t="  ";
const char* const __t4723t="[ ";
const char* const __t373t="";
const char* const __t4740t=" ]";
const char* const __t6455t="iterations: ";
const char* const __t381t="\n";
static const char* __t_all_errcodes[49] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree",
"index out of bounds"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t678t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6443t(char** __t6460t, uint64_t* __t6461t, uint16_t* __t6462t, uint16_t* __t6463t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6460t=unsafe_ptr;
  *__t6461t=unsafe_size;
  *__t6462t=unsafe_offset;
  *__t6463t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t446t(char* x, char* __t6464t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6464t=z;
}

static inline __attribute__((always_inline)) void free__t512t(char** __t6465t) {
  char* allocated=*__t6465t;
  if(allocated){
  free(allocated);
  }
  *__t6465t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6466t) {
  int value=0;
  *__t6466t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6467t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6467t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t6468t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t6468t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t6469t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6469t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t6470t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6470t=z;
}

static inline __attribute__((always_inline)) void nat__t516t(uint16_t x, uint64_t* __t6471t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6471t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t6472t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6472t=z;
}

static inline __attribute__((always_inline)) void zero__t513t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t6473t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6473t=z;
}

static inline __attribute__((always_inline)) int alloc__t505t(uint64_t bytes, char** __t6474t) {
  char* allocated=0;
  char __t506t__=0;
  char __t507t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t446t(allocated,&__t506t__);
  not__t28t(__t506t__,&__t507t__);
  if(__t507t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6474t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t541t(char** __t6475t, uint64_t* __t6476t, uint16_t* __t6477t, uint16_t* __t6478t, uint64_t size, char** __t6479t, uint64_t* __t6480t, uint16_t* __t6481t, uint16_t* __t6482t) {
  char* buffer__unsafe_ptr=*__t6475t;
  uint64_t buffer__unsafe_size=*__t6476t;
  uint16_t buffer__unsafe_offset=*__t6477t;
  uint16_t buffer__unsafe_align=*__t6478t;
  int __t542t=0;
  char __t543t__=0;
  char __t545t__=0;
  uint64_t __t546t=0;
  char __t547t__=0;
  uint64_t __t548t=0;
  uint64_t __t549t__=0;
  uint64_t __t550t__=0;
  uint64_t __t552t=0;
  char __t553t__=0;
  uint64_t __t554t__=0;
  uint64_t __t555t__=0;
  uint64_t bytes=0;
  uint64_t __t556t=0;
  char __t557t__=0;
  char* __t558t__=0;
  int __t559t=0;
  uint64_t __t560t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t545t__);
  if(__t545t__){
  __t546t=0;
  neq__t144t(size,__t546t,&__t547t__);
  if(__t547t__){
  __t548t=0;
  nat__t516t(buffer__unsafe_align,&__t549t__);
  mul__t199t(__t549t__,size,&__t550t__);
  zero__t513t(buffer__unsafe_ptr,__t548t,__t550t__);
  }
  goto __t_return;
  }
  __t552t=0;
  neq__t144t(buffer__unsafe_size,__t552t,&__t553t__);
  if(__t553t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t516t(buffer__unsafe_align,&__t554t__);
  mul__t199t(__t554t__,size,&__t555t__);
  bytes=__t555t__;
  __t556t=0;
  eq__t120t(bytes,__t556t,&__t557t__);
  if(__t557t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t505t(bytes,&__t558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t558t__;
  __t560t=0;
  zero__t513t(buffer__unsafe_ptr,__t560t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t446t(buffer__unsafe_ptr,&__t543t__);
  if(__t543t__){
  free__t512t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6475t=buffer__unsafe_ptr;
  *__t6476t=buffer__unsafe_size;
  *__t6477t=buffer__unsafe_offset;
  *__t6478t=buffer__unsafe_align;
  *__t6479t=buffer__unsafe_ptr;
  *__t6480t=buffer__unsafe_size;
  *__t6481t=buffer__unsafe_offset;
  *__t6482t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t652t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6483t) {
  goto __t_return;
  __t_return:
  *__t6483t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2103t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6484t, uint64_t* __t6485t, uint64_t* __t6486t) {
  char* __t2114t__unsafe_ptr=0;
  uint64_t __t2114t__pos=0;
  uint64_t __t2114t__length=0;
  __t2114t__unsafe_ptr=unsafe_ptr;
  __t2114t__pos=pos;
  __t2114t__length=length;
  goto __t_return;
  __t_return:
  *__t6484t=__t2114t__unsafe_ptr;
  *__t6485t=__t2114t__pos;
  *__t6486t=__t2114t__length;
}

static inline __attribute__((always_inline)) int vec__t2263t(char** __t6487t, uint64_t* __t6488t, uint16_t* __t6489t, uint16_t* __t6490t, char** __t6491t, uint64_t* __t6492t, uint64_t* __t6493t) {
  char* buf__unsafe_ptr=*__t6487t;
  uint64_t buf__unsafe_size=*__t6488t;
  uint16_t buf__unsafe_offset=*__t6489t;
  uint16_t buf__unsafe_align=*__t6490t;
  uint64_t __t2264t__=0;
  uint64_t __t2265t=0;
  char __t2266t__=0;
  uint64_t __t2267t__=0;
  uint64_t __t2268t=0;
  char __t2269t__=0;
  uint64_t __t2270t=0;
  uint64_t __t2271t__=0;
  char* __t2272t__unsafe_ptr=0;
  uint64_t __t2272t__pos=0;
  uint64_t __t2272t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t516t(buf__unsafe_align,&__t2264t__);
  __t2265t=8;
  neq__t144t(__t2264t__,__t2265t,&__t2266t__);
  if(__t2266t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t516t(buf__unsafe_offset,&__t2267t__);
  __t2268t=0;
  neq__t144t(__t2267t__,__t2268t,&__t2269t__);
  if(__t2269t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t2270t=0;
  len__t652t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2271t__);
  vec__t2103t(buf__unsafe_ptr,__t2270t,__t2271t__,&__t2272t__unsafe_ptr,&__t2272t__pos,&__t2272t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6487t=buf__unsafe_ptr;
  *__t6488t=buf__unsafe_size;
  *__t6489t=buf__unsafe_offset;
  *__t6490t=buf__unsafe_align;
  *__t6491t=__t2272t__unsafe_ptr;
  *__t6492t=__t2272t__pos;
  *__t6493t=__t2272t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t14t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t368t() {
  console__t366t();
  unsafe_singletons__t14t();
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t379t(const char* value) {
  int __t380t=0;
  const char* endl=0;
  endl=__t381t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void ppr__t6233t(double alpha, double* __t6494t, uint64_t* __t6495t, double* __t6496t) {
  int __t6234t=0;
  int __t6235t=0;
  double __t6239t=0;
  double tol=0;
  uint64_t __t6240t=0;
  uint64_t max_iters=0;
  int __t6241t=0;
  int __t6242t=0;
  unsafe_console__t368t();
  print__t379t(__t6237t);
  __t6239t=0.00000001;
  tol=__t6239t;
  __t6240t=100;
  max_iters=__t6240t;
  goto __t_return;
  __t_return:
  *__t6494t=alpha;
  *__t6495t=max_iters;
  *__t6496t=tol;
}

static inline __attribute__((always_inline)) void len__t2427t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t6497t) {
  goto __t_return;
  __t_return:
  *__t6497t=v__length;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t6498t, uint64_t* __t6499t) {
  int __t472t=0;
  uint64_t __t473t=0;
  uint64_t _from=0;
  uint64_t __t474t=0;
  uint64_t from=0;
  __t473t=0;
  _from=__t473t;
  __t474t=_from;
  from=__t474t;
  goto __t_return;
  __t_return:
  *__t6498t=from;
  *__t6499t=to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t6500t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6500t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t6501t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6501t=z;
}

static inline __attribute__((always_inline)) int get__t487t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6502t) {
  char __t488t__=0;
  char __t489t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t488t__);
  if(__t488t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t489t__);
  if(__t489t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6502t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t6503t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6503t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t6504t) {
  *__t6504t=to;
}

static inline __attribute__((always_inline)) void add__t514t(char* allocated, uint64_t offset, char** __t6505t) {
  char* element=0;
  char* __t515t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t515t__);
  goto __t_return;
  __t_return:
  *__t6505t=__t515t__;
}

static inline __attribute__((always_inline)) int get__t2440t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6506t) {
  char __t2447t__=0;
  uint64_t __t2448t=0;
  uint64_t __t2449t__=0;
  uint64_t __t2450t__=0;
  char* __t2451t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2447t__);
  if(__t2447t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2448t=8;
  add__t175t(i,v__pos,&__t2449t__);
  mul__t199t(__t2448t,__t2449t__,&__t2450t__);
  add__t514t(v__unsafe_ptr,__t2450t__,&__t2451t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6506t=__t2451t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6507t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6507t=__t73t__;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t6508t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6508t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t6509t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6509t=z;
}

static inline __attribute__((always_inline)) void abs__t2070t(double x, double* __t6510t) {
  double __t2071t=0;
  char __t2072t__=0;
  double __t2073t=0;
  double __t2074t__=0;
  __t2071t=0.0;
  lt__t230t(x,__t2071t,&__t2072t__);
  if(__t2072t__){
  __t2073t=0.0;
  sub__t326t(__t2073t,x,&__t2074t__);
  goto __t_return;
  }
  __t2074t__=x;
  goto __t_return;
  __t_return:
  *__t6510t=__t2074t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t6511t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6511t=z;
}

int reduce__t3036t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6512t) {
  int __t3037t=0;
  double __t3038t=0;
  double __t3039t=0;
  double ret=0;
  int __t3040t=0;
  int __t3041t=0;
  int __t3042t=0;
  int __t3043t__=0;
  uint64_t __t3044t=0;
  uint64_t __t3045t__=0;
  uint64_t __t3046t__from=0;
  uint64_t __t3046t__to=0;
  char __t3047t=0;
  uint64_t __t3048t__=0;
  uint64_t i=0;
  char* __t3049t__=0;
  double __t3050t__value=0;
  double __t3051t=0;
  double value=0;
  int __t3052t=0;
  int __t3053t=0;
  char __t3054t=0;
  char __t3055t=0;
  double __t3056t__=0;
  int __t3057t=0;
  int __t3058t=0;
  double __t3059t__=0;
  int __t3060t=0;
  int __t3061t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3038t=0.0;
  __t3039t=__t3038t;
  ret=__t3039t;
  not__t37t(__t3042t,&__t3043t__);
  len__t2427t(v__unsafe_ptr,v__pos,v__length,&__t3045t__);
  range__t471t(__t3045t__,&__t3046t__from,&__t3046t__to);
  __t3044t=0;
  while(1){
  __t_complain=get__t487t(__t3046t__from,__t3046t__to,__t3044t,&__t3048t__);
  __t3047t=__t_complain;
  i=__t3048t__;
  __t3047t=__t3047t==0;
  __t3044t=__t3044t+1;
  if(!__t3047t){
  break;
  }
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,i,&__t3049t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3049t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3050t__value,__t3049t__,8);
  __t3051t=__t3050t__value;
  value=__t3051t;
  __t3055t=1;
  if(__t3055t){
  __t3054t=1;
  }
  if(__t3054t){
  abs__t2070t(value,&__t3056t__);
  value=__t3056t__;
  }
  add__t153t(ret,value,&__t3059t__);
  ret=__t3059t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6512t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t6253t(char** __t6513t, uint64_t* __t6514t, uint16_t* __t6515t, uint16_t* __t6516t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6513t=unsafe_ptr;
  *__t6514t=unsafe_size;
  *__t6515t=unsafe_offset;
  *__t6516t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t682t(char** __t6517t, uint64_t* __t6518t, uint16_t* __t6519t, uint16_t* __t6520t, char** __t6521t, uint64_t* __t6522t, uint16_t* __t6523t, uint16_t* __t6524t, uint64_t* __t6525t) {
  char* buf__unsafe_ptr=*__t6517t;
  uint64_t buf__unsafe_size=*__t6518t;
  uint16_t buf__unsafe_offset=*__t6519t;
  uint16_t buf__unsafe_align=*__t6520t;
  uint64_t __t683t=0;
  uint64_t __t684t=0;
  uint64_t pos=0;
  __t683t=0;
  __t684t=__t683t;
  pos=__t684t;
  goto __t_return;
  __t_return:
  *__t6517t=buf__unsafe_ptr;
  *__t6518t=buf__unsafe_size;
  *__t6519t=buf__unsafe_offset;
  *__t6520t=buf__unsafe_align;
  *__t6521t=buf__unsafe_ptr;
  *__t6522t=buf__unsafe_size;
  *__t6523t=buf__unsafe_offset;
  *__t6524t=buf__unsafe_align;
  *__t6525t=pos;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t6526t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6526t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t6527t) {
  int __t202t__=0;
  double zero=0;
  char __t203t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t71t(x,y,&__t202t__);
  zero=0;
  eq__t98t(y,zero,&__t203t__);
  if(__t203t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6527t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t6528t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6528t=z;
}

static inline __attribute__((always_inline)) int vec__t2283t(char** __t6529t, uint64_t* __t6530t, uint16_t* __t6531t, uint16_t* __t6532t, uint64_t* __t6533t, uint64_t length, char** __t6534t, uint64_t* __t6535t, uint64_t* __t6536t) {
  char* FLOATS__buf__unsafe_ptr=*__t6529t;
  uint64_t FLOATS__buf__unsafe_size=*__t6530t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6531t;
  uint16_t FLOATS__buf__unsafe_align=*__t6532t;
  uint64_t FLOATS__pos=*__t6533t;
  uint64_t __t2316t__=0;
  uint64_t __t2317t=0;
  char __t2318t__=0;
  uint64_t __t2319t__=0;
  uint64_t __t2320t=0;
  char __t2321t__=0;
  uint64_t __t2322t__=0;
  uint64_t __t2323t__=0;
  char __t2324t__=0;
  uint64_t start=0;
  uint64_t __t2325t__=0;
  int __t2326t=0;
  char* __t2327t__unsafe_ptr=0;
  uint64_t __t2327t__pos=0;
  uint64_t __t2327t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t516t(FLOATS__buf__unsafe_align,&__t2316t__);
  __t2317t=8;
  neq__t144t(__t2316t__,__t2317t,&__t2318t__);
  if(__t2318t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t516t(FLOATS__buf__unsafe_offset,&__t2319t__);
  __t2320t=0;
  neq__t144t(__t2319t__,__t2320t,&__t2321t__);
  if(__t2321t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t2322t__);
  len__t652t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t2323t__);
  gt__t276t(__t2322t__,__t2323t__,&__t2324t__);
  if(__t2324t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t2325t__);
  FLOATS__pos=__t2325t__;
  vec__t2103t(FLOATS__buf__unsafe_ptr,start,length,&__t2327t__unsafe_ptr,&__t2327t__pos,&__t2327t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6529t=FLOATS__buf__unsafe_ptr;
  *__t6530t=FLOATS__buf__unsafe_size;
  *__t6531t=FLOATS__buf__unsafe_offset;
  *__t6532t=FLOATS__buf__unsafe_align;
  *__t6533t=FLOATS__pos;
  *__t6534t=__t2327t__unsafe_ptr;
  *__t6535t=__t2327t__pos;
  *__t6536t=__t2327t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t2428t(char** __t6537t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6538t) {
  char* v__unsafe_ptr=*__t6537t;
  char __t2435t__=0;
  uint64_t __t2436t=0;
  uint64_t __t2437t__=0;
  uint64_t __t2438t__=0;
  char* __t2439t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2435t__);
  if(__t2435t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2436t=8;
  add__t175t(i,v__pos,&__t2437t__);
  mul__t199t(__t2436t,__t2437t__,&__t2438t__);
  add__t514t(v__unsafe_ptr,__t2438t__,&__t2439t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6537t=v__unsafe_ptr;
  *__t6538t=__t2439t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2452t(double number, uint64_t i, double* __t6539t) {
  goto __t_return;
  __t_return:
  *__t6539t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t6540t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6540t=z;
}

int mul__t2707t(char** __t6541t, uint64_t* __t6542t, uint16_t* __t6543t, uint16_t* __t6544t, uint64_t* __t6545t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6546t, uint64_t* __t6547t, uint64_t* __t6548t) {
  char* FLOATS__buf__unsafe_ptr=*__t6541t;
  uint64_t FLOATS__buf__unsafe_size=*__t6542t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6543t;
  uint16_t FLOATS__buf__unsafe_align=*__t6544t;
  uint64_t FLOATS__pos=*__t6545t;
  int __t2708t=0;
  char* __t2710t__unsafe_ptr=0;
  uint64_t __t2710t__pos=0;
  uint64_t __t2710t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2711t=0;
  uint64_t __t2712t__from=0;
  uint64_t __t2712t__to=0;
  char __t2713t=0;
  uint64_t __t2714t__=0;
  uint64_t i=0;
  char* __t2715t__=0;
  char* __t2716t__=0;
  double __t2717t__value=0;
  double __t2718t__=0;
  double __t2719t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2283t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2710t__unsafe_ptr,&__t2710t__pos,&__t2710t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2710t__unsafe_ptr;
  v__pos=__t2710t__pos;
  v__length=__t2710t__length;
  range__t471t(v__length,&__t2712t__from,&__t2712t__to);
  __t2711t=0;
  while(1){
  __t_complain=get__t487t(__t2712t__from,__t2712t__to,__t2711t,&__t2714t__);
  __t2713t=__t_complain;
  i=__t2714t__;
  __t2713t=__t2713t==0;
  __t2711t=__t2711t+1;
  if(!__t2713t){
  break;
  }
  __t_errcode=mutget__t2428t(&v__unsafe_ptr,v__pos,v__length,i,&__t2715t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2440t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2716t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2717t__value,__t2716t__,8);
  at__t2452t(v2,i,&__t2718t__);
  mul__t177t(__t2717t__value,__t2718t__,&__t2719t__);
  if(!__t2715t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2715t__,&__t2719t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6541t=FLOATS__buf__unsafe_ptr;
  *__t6542t=FLOATS__buf__unsafe_size;
  *__t6543t=FLOATS__buf__unsafe_offset;
  *__t6544t=FLOATS__buf__unsafe_align;
  *__t6545t=FLOATS__pos;
  *__t6546t=v__unsafe_ptr;
  *__t6547t=v__pos;
  *__t6548t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t2296t(char** __t6549t, uint64_t* __t6550t, uint16_t* __t6551t, uint16_t* __t6552t, uint64_t* __t6553t, uint64_t length, char** __t6554t, uint64_t* __t6555t, uint64_t* __t6556t) {
  char* FLOATS__buf__unsafe_ptr=*__t6549t;
  uint64_t FLOATS__buf__unsafe_size=*__t6550t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6551t;
  uint16_t FLOATS__buf__unsafe_align=*__t6552t;
  uint64_t FLOATS__pos=*__t6553t;
  uint64_t __t2329t__=0;
  uint64_t __t2330t=0;
  char __t2331t__=0;
  uint64_t __t2332t__=0;
  uint64_t __t2333t=0;
  char __t2334t__=0;
  uint64_t __t2335t__=0;
  uint64_t __t2336t__=0;
  char __t2337t__=0;
  uint64_t start=0;
  uint64_t __t2338t__=0;
  int __t2339t=0;
  uint64_t __t2340t=0;
  uint64_t __t2341t__=0;
  uint64_t __t2342t=0;
  uint64_t __t2343t__=0;
  uint64_t __t2344t__=0;
  char* __t2346t__unsafe_ptr=0;
  uint64_t __t2346t__pos=0;
  uint64_t __t2346t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t516t(FLOATS__buf__unsafe_align,&__t2329t__);
  __t2330t=8;
  neq__t144t(__t2329t__,__t2330t,&__t2331t__);
  if(__t2331t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t516t(FLOATS__buf__unsafe_offset,&__t2332t__);
  __t2333t=0;
  neq__t144t(__t2332t__,__t2333t,&__t2334t__);
  if(__t2334t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t2335t__);
  len__t652t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t2336t__);
  gt__t276t(__t2335t__,__t2336t__,&__t2337t__);
  if(__t2337t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t2338t__);
  FLOATS__pos=__t2338t__;
  __t2340t=8;
  mul__t199t(__t2340t,start,&__t2341t__);
  __t2342t=8;
  add__t175t(start,length,&__t2343t__);
  mul__t199t(__t2342t,__t2343t__,&__t2344t__);
  zero__t513t(FLOATS__buf__unsafe_ptr,__t2341t__,__t2344t__);
  vec__t2103t(FLOATS__buf__unsafe_ptr,start,length,&__t2346t__unsafe_ptr,&__t2346t__pos,&__t2346t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6549t=FLOATS__buf__unsafe_ptr;
  *__t6550t=FLOATS__buf__unsafe_size;
  *__t6551t=FLOATS__buf__unsafe_offset;
  *__t6552t=FLOATS__buf__unsafe_align;
  *__t6553t=FLOATS__pos;
  *__t6554t=__t2346t__unsafe_ptr;
  *__t6555t=__t2346t__pos;
  *__t6556t=__t2346t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4770t(char** __t6557t, uint64_t* __t6558t, uint16_t* __t6559t, uint16_t* __t6560t, uint64_t* __t6561t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6562t, uint64_t* __t6563t, uint64_t* __t6564t) {
  char* FLOATS__buf__unsafe_ptr=*__t6557t;
  uint64_t FLOATS__buf__unsafe_size=*__t6558t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6559t;
  uint16_t FLOATS__buf__unsafe_align=*__t6560t;
  uint64_t FLOATS__pos=*__t6561t;
  char* __t4771t__unsafe_ptr=0;
  uint64_t __t4771t__pos=0;
  uint64_t __t4771t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4772t=0;
  uint64_t __t4773t__from=0;
  uint64_t __t4773t__to=0;
  char __t4774t=0;
  uint64_t __t4775t__=0;
  uint64_t i=0;
  char* __t4776t__=0;
  char* __t4777t__=0;
  double __t4778t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2296t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4771t__unsafe_ptr,&__t4771t__pos,&__t4771t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4771t__unsafe_ptr;
  result__pos=__t4771t__pos;
  result__length=__t4771t__length;
  range__t471t(v__length,&__t4773t__from,&__t4773t__to);
  __t4772t=0;
  while(1){
  __t_complain=get__t487t(__t4773t__from,__t4773t__to,__t4772t,&__t4775t__);
  __t4774t=__t_complain;
  i=__t4775t__;
  __t4774t=__t4774t==0;
  __t4772t=__t4772t+1;
  if(!__t4774t){
  break;
  }
  __t_errcode=mutget__t2428t(&result__unsafe_ptr,result__pos,result__length,i,&__t4776t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,i,&__t4777t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4777t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4778t__value,__t4777t__,8);
  if(!__t4776t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4776t__,&__t4778t__value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6557t=FLOATS__buf__unsafe_ptr;
  *__t6558t=FLOATS__buf__unsafe_size;
  *__t6559t=FLOATS__buf__unsafe_offset;
  *__t6560t=FLOATS__buf__unsafe_align;
  *__t6561t=FLOATS__pos;
  *__t6562t=result__unsafe_ptr;
  *__t6563t=result__pos;
  *__t6564t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t6246t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t6565t) {
  char __t6249t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t6249t__);
  if(__t6249t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6565t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t480t(uint64_t* __t6566t, uint64_t r__to, uint64_t* __t6567t) {
  uint64_t r__from=*__t6566t;
  char __t481t__=0;
  uint64_t ret=0;
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t481t__);
  if(__t481t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t482t=1;
  add__t175t(ret,__t482t,&__t483t__);
  r__from=__t483t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6566t=r__from;
  *__t6567t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5908t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t6568t) {
  char __t5914t__=0;
  uint64_t __t5915t=0;
  uint64_t __t5916t__=0;
  char* __t5917t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5914t__);
  if(__t5914t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t5915t=24;
  mul__t199t(k,__t5915t,&__t5916t__);
  add__t514t(m__unsafe_ptr,__t5916t__,&__t5917t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6568t=__t5917t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5944t(char** __t6569t, uint64_t* __t6570t, uint16_t* __t6571t, uint16_t* __t6572t, uint64_t* __t6573t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6574t, uint64_t* __t6575t, uint64_t* __t6576t) {
  char* FLOATS__buf__unsafe_ptr=*__t6569t;
  uint64_t FLOATS__buf__unsafe_size=*__t6570t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6571t;
  uint16_t FLOATS__buf__unsafe_align=*__t6572t;
  uint64_t FLOATS__pos=*__t6573t;
  char __t5945t__=0;
  char* __t5946t__unsafe_ptr=0;
  uint64_t __t5946t__pos=0;
  uint64_t __t5946t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5947t__from=0;
  uint64_t __t5947t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t5948t=0;
  uint64_t __t5949t__=0;
  uint64_t k=0;
  char* __t5950t__=0;
  uint64_t __t5951t__row=0;
  uint64_t __t5951t__col=0;
  double __t5951t__value=0;
  uint64_t e__row=0;
  uint64_t e__col=0;
  double e__value=0;
  char* __t5952t__=0;
  char* __t5953t__=0;
  double __t5954t__value=0;
  char* __t5955t__=0;
  double __t5956t__value=0;
  double __t5957t__=0;
  double __t5958t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5945t__);
  if(__t5945t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t2296t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5946t__unsafe_ptr,&__t5946t__pos,&__t5946t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5946t__unsafe_ptr;
  result__pos=__t5946t__pos;
  result__length=__t5946t__length;
  range__t471t(m__nnz,&__t5947t__from,&__t5947t__to);
  it_k__from=__t5947t__from;
  it_k__to=__t5947t__to;
  while(1){
  __t_complain=next__t480t(&it_k__from,it_k__to,&__t5949t__);
  __t5948t=__t_complain;
  k=__t5949t__;
  __t5948t=__t5948t==0;
  if(!__t5948t){
  break;
  }
  __t_errcode=get__t5908t(m__unsafe_ptr,m__rows,m__cols,m__nnz,k,&__t5950t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5950t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5951t__row,__t5950t__,8);
  memcpy(&__t5951t__col,__t5950t__+8,8);
  memcpy(&__t5951t__value,__t5950t__+16,8);
  e__row=__t5951t__row;
  e__col=__t5951t__col;
  e__value=__t5951t__value;
  __t_errcode=mutget__t2428t(&result__unsafe_ptr,result__pos,result__length,e__row,&__t5952t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2440t(result__unsafe_ptr,result__pos,result__length,e__row,&__t5953t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5953t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5954t__value,__t5953t__,8);
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,e__col,&__t5955t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5955t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5956t__value,__t5955t__,8);
  mul__t177t(e__value,__t5956t__value,&__t5957t__);
  add__t153t(__t5954t__value,__t5957t__,&__t5958t__);
  if(!__t5952t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5952t__,&__t5958t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6569t=FLOATS__buf__unsafe_ptr;
  *__t6570t=FLOATS__buf__unsafe_size;
  *__t6571t=FLOATS__buf__unsafe_offset;
  *__t6572t=FLOATS__buf__unsafe_align;
  *__t6573t=FLOATS__pos;
  *__t6574t=result__unsafe_ptr;
  *__t6575t=result__pos;
  *__t6576t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2191t(char** __t6577t, uint64_t* __t6578t, uint16_t* __t6579t, uint16_t* __t6580t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6577t=unsafe_ptr;
  *__t6578t=unsafe_size;
  *__t6579t=unsafe_offset;
  *__t6580t=unsafe_align;
}

static inline __attribute__((always_inline)) void storage__t4788t(char** __t6581t, uint64_t v__pos, uint64_t v__length, char** __t6582t, uint64_t* __t6583t, uint16_t* __t6584t, uint16_t* __t6585t, uint64_t* __t6586t) {
  char* v__unsafe_ptr=*__t6581t;
  char* __t4789t__unsafe_ptr=0;
  uint64_t __t4789t__unsafe_size=0;
  uint16_t __t4789t__unsafe_offset=0;
  uint16_t __t4789t__unsafe_align=0;
  char* __t4790t__unsafe_ptr=0;
  uint64_t __t4790t__unsafe_size=0;
  uint16_t __t4790t__unsafe_offset=0;
  uint16_t __t4790t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4791t__=0;
  uint64_t __t4792t__=0;
  uint64_t __t4793t=0;
  uint64_t pos=0;
  float____t_buffer____buffer__t2191t(&__t4789t__unsafe_ptr,&__t4789t__unsafe_size,&__t4789t__unsafe_offset,&__t4789t__unsafe_align);
  __t4790t__unsafe_ptr=__t4789t__unsafe_ptr;
  __t4790t__unsafe_size=__t4789t__unsafe_size;
  __t4790t__unsafe_offset=__t4789t__unsafe_offset;
  __t4790t__unsafe_align=__t4789t__unsafe_align;
  buf__unsafe_ptr=__t4790t__unsafe_ptr;
  buf__unsafe_size=__t4790t__unsafe_size;
  buf__unsafe_offset=__t4790t__unsafe_offset;
  buf__unsafe_align=__t4790t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t2427t(v__unsafe_ptr,v__pos,v__length,&__t4791t__);
  add__t175t(v__pos,__t4791t__,&__t4792t__);
  buf__unsafe_size=__t4792t__;
  __t4793t=v__pos;
  pos=__t4793t;
  goto __t_return;
  __t_return:
  *__t6581t=v__unsafe_ptr;
  *__t6582t=buf__unsafe_ptr;
  *__t6583t=buf__unsafe_size;
  *__t6584t=buf__unsafe_offset;
  *__t6585t=buf__unsafe_align;
  *__t6586t=pos;
}

static inline __attribute__((always_inline)) void self__t4794t(char** __t6587t, uint64_t v__pos, uint64_t v__length, char** __t6588t, uint64_t* __t6589t, uint16_t* __t6590t, uint16_t* __t6591t, uint64_t* __t6592t, char** __t6593t, uint64_t* __t6594t, uint64_t* __t6595t) {
  char* v__unsafe_ptr=*__t6587t;
  char* __t4795t__buf__unsafe_ptr=0;
  uint64_t __t4795t__buf__unsafe_size=0;
  uint16_t __t4795t__buf__unsafe_offset=0;
  uint16_t __t4795t__buf__unsafe_align=0;
  uint64_t __t4795t__pos=0;
  storage__t4788t(&v__unsafe_ptr,v__pos,v__length,&__t4795t__buf__unsafe_ptr,&__t4795t__buf__unsafe_size,&__t4795t__buf__unsafe_offset,&__t4795t__buf__unsafe_align,&__t4795t__pos);
  goto __t_return;
  __t_return:
  *__t6587t=v__unsafe_ptr;
  *__t6588t=__t4795t__buf__unsafe_ptr;
  *__t6589t=__t4795t__buf__unsafe_size;
  *__t6590t=__t4795t__buf__unsafe_offset;
  *__t6591t=__t4795t__buf__unsafe_align;
  *__t6592t=__t4795t__pos;
  *__t6593t=v__unsafe_ptr;
  *__t6594t=v__pos;
  *__t6595t=v__length;
}

static inline __attribute__((always_inline)) int at__t2454t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6596t) {
  char* __t2458t__=0;
  double __t2459t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,i,&__t2458t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2458t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2459t__value,__t2458t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6596t=__t2459t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2489t(char** __t6597t, uint64_t* __t6598t, uint16_t* __t6599t, uint16_t* __t6600t, uint64_t* __t6601t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6602t, uint64_t* __t6603t, uint64_t* __t6604t) {
  char* FLOATS__buf__unsafe_ptr=*__t6597t;
  uint64_t FLOATS__buf__unsafe_size=*__t6598t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6599t;
  uint16_t FLOATS__buf__unsafe_align=*__t6600t;
  uint64_t FLOATS__pos=*__t6601t;
  int __t2490t=0;
  char __t2491t__=0;
  char* __t2493t__unsafe_ptr=0;
  uint64_t __t2493t__pos=0;
  uint64_t __t2493t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2494t=0;
  uint64_t __t2495t__from=0;
  uint64_t __t2495t__to=0;
  char __t2496t=0;
  uint64_t __t2497t__=0;
  uint64_t i=0;
  char* __t2498t__=0;
  char* __t2499t__=0;
  double __t2500t__value=0;
  double __t2501t__=0;
  double __t2502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t2491t__);
  if(__t2491t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t2283t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2493t__unsafe_ptr,&__t2493t__pos,&__t2493t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2493t__unsafe_ptr;
  v__pos=__t2493t__pos;
  v__length=__t2493t__length;
  range__t471t(v1__length,&__t2495t__from,&__t2495t__to);
  __t2494t=0;
  while(1){
  __t_complain=get__t487t(__t2495t__from,__t2495t__to,__t2494t,&__t2497t__);
  __t2496t=__t_complain;
  i=__t2497t__;
  __t2496t=__t2496t==0;
  __t2494t=__t2494t+1;
  if(!__t2496t){
  break;
  }
  __t_errcode=mutget__t2428t(&v__unsafe_ptr,v__pos,v__length,i,&__t2498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2440t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2499t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2499t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2500t__value,__t2499t__,8);
  __t_errcode=at__t2454t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2501t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t2500t__value,__t2501t__,&__t2502t__);
  if(!__t2498t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2498t__,&__t2502t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6597t=FLOATS__buf__unsafe_ptr;
  *__t6598t=FLOATS__buf__unsafe_size;
  *__t6599t=FLOATS__buf__unsafe_offset;
  *__t6600t=FLOATS__buf__unsafe_align;
  *__t6601t=FLOATS__pos;
  *__t6602t=v__unsafe_ptr;
  *__t6603t=v__pos;
  *__t6604t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2914t(char** __t6605t, uint64_t* __t6606t, uint16_t* __t6607t, uint16_t* __t6608t, uint64_t* __t6609t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6610t, uint64_t* __t6611t, uint64_t* __t6612t) {
  char* FLOATS__buf__unsafe_ptr=*__t6605t;
  uint64_t FLOATS__buf__unsafe_size=*__t6606t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6607t;
  uint16_t FLOATS__buf__unsafe_align=*__t6608t;
  uint64_t FLOATS__pos=*__t6609t;
  int __t2915t=0;
  char* __t2917t__unsafe_ptr=0;
  uint64_t __t2917t__pos=0;
  uint64_t __t2917t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2918t=0;
  uint64_t __t2919t__from=0;
  uint64_t __t2919t__to=0;
  char __t2920t=0;
  uint64_t __t2921t__=0;
  uint64_t i=0;
  char* __t2922t__=0;
  char* __t2923t__=0;
  double __t2924t__value=0;
  double __t2925t__=0;
  double __t2926t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2283t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2917t__unsafe_ptr,&__t2917t__pos,&__t2917t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2917t__unsafe_ptr;
  v__pos=__t2917t__pos;
  v__length=__t2917t__length;
  p1=v1__unsafe_ptr;
  range__t471t(v__length,&__t2919t__from,&__t2919t__to);
  __t2918t=0;
  while(1){
  __t_complain=get__t487t(__t2919t__from,__t2919t__to,__t2918t,&__t2921t__);
  __t2920t=__t_complain;
  i=__t2921t__;
  __t2920t=__t2920t==0;
  __t2918t=__t2918t+1;
  if(!__t2920t){
  break;
  }
  __t_errcode=mutget__t2428t(&v__unsafe_ptr,v__pos,v__length,i,&__t2922t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2440t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2923t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2923t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2924t__value,__t2923t__,8);
  at__t2452t(v2,i,&__t2925t__);
  __t_errcode=div__t201t(__t2924t__value,__t2925t__,&__t2926t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2922t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2922t__,&__t2926t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6605t=FLOATS__buf__unsafe_ptr;
  *__t6606t=FLOATS__buf__unsafe_size;
  *__t6607t=FLOATS__buf__unsafe_offset;
  *__t6608t=FLOATS__buf__unsafe_align;
  *__t6609t=FLOATS__pos;
  *__t6610t=v__unsafe_ptr;
  *__t6611t=v__pos;
  *__t6612t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t6613t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6613t=z;
}

int reduce__t3792t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t6614t) {
  int __t3793t=0;
  double __t3794t=0;
  double __t3795t=0;
  double ret=0;
  int __t3796t=0;
  int __t3797t=0;
  uint64_t __t3798t=0;
  uint64_t __t3799t__=0;
  uint64_t __t3800t__from=0;
  uint64_t __t3800t__to=0;
  char __t3801t=0;
  uint64_t __t3802t__=0;
  uint64_t i=0;
  char* __t3803t__=0;
  double __t3804t__value=0;
  double __t3805t=0;
  double value=0;
  char __t3806t=0;
  char __t3807t=0;
  char* __t3808t__=0;
  double __t3809t__value=0;
  double __t3810t__=0;
  int __t3811t=0;
  char __t3812t=0;
  char __t3813t=0;
  double __t3814t__=0;
  int __t3815t=0;
  int __t3816t=0;
  double __t3817t__=0;
  int __t3818t=0;
  int __t3819t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3794t=0.0;
  __t3795t=__t3794t;
  ret=__t3795t;
  len__t2427t(v__unsafe_ptr,v__pos,v__length,&__t3799t__);
  range__t471t(__t3799t__,&__t3800t__from,&__t3800t__to);
  __t3798t=0;
  while(1){
  __t_complain=get__t487t(__t3800t__from,__t3800t__to,__t3798t,&__t3802t__);
  __t3801t=__t_complain;
  i=__t3802t__;
  __t3801t=__t3801t==0;
  __t3798t=__t3798t+1;
  if(!__t3801t){
  break;
  }
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,i,&__t3803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3803t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3804t__value,__t3803t__,8);
  __t3805t=__t3804t__value;
  value=__t3805t;
  __t3807t=1;
  if(__t3807t){
  __t3806t=1;
  }
  if(__t3806t){
  __t_errcode=get__t2440t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t3808t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3808t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3809t__value,__t3808t__,8);
  sub__t326t(value,__t3809t__value,&__t3810t__);
  value=__t3810t__;
  }
  __t3813t=1;
  if(__t3813t){
  __t3812t=1;
  }
  if(__t3812t){
  abs__t2070t(value,&__t3814t__);
  value=__t3814t__;
  }
  add__t153t(ret,value,&__t3817t__);
  ret=__t3817t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6614t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t6615t) {
  int value=0;
  *__t6615t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t6616t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t6616t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t414t(uint64_t x, double* __t6617t) {
  int __t415t=0;
  int __t416t__=0;
  int __t417t=0;
  double z=0;
  not__t39t(__t415t,&__t416t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6617t=z;
}

static inline __attribute__((always_inline)) int filter__t6298t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t6618t, uint64_t* __t6619t, uint64_t* __t6620t, double* __t6621t, uint64_t* __t6622t) {
  double __t6300t__=0;
  double p0norm=0;
  char* __t6301t__unsafe_ptr=0;
  uint64_t __t6301t__unsafe_size=0;
  uint16_t __t6301t__unsafe_offset=0;
  uint16_t __t6301t__unsafe_align=0;
  uint64_t __t6302t=0;
  uint64_t __t6303t__=0;
  uint64_t __t6304t__=0;
  char* __t6305t__unsafe_ptr=0;
  uint64_t __t6305t__unsafe_size=0;
  uint16_t __t6305t__unsafe_offset=0;
  uint16_t __t6305t__unsafe_align=0;
  char __t6306t____t543t__=0;
  char* __t6307t__buf__unsafe_ptr=0;
  uint64_t __t6307t__buf__unsafe_size=0;
  uint16_t __t6307t__buf__unsafe_offset=0;
  uint16_t __t6307t__buf__unsafe_align=0;
  uint64_t __t6307t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t6308t=0;
  double __t6309t__=0;
  double __t6310t__=0;
  char* __t6311t__unsafe_ptr=0;
  uint64_t __t6311t__pos=0;
  uint64_t __t6311t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t6312t__unsafe_ptr=0;
  uint64_t __t6312t__pos=0;
  uint64_t __t6312t__length=0;
  char* __t6313t__unsafe_ptr=0;
  uint64_t __t6313t__pos=0;
  uint64_t __t6313t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t6314t__unsafe_ptr=0;
  uint64_t __t6314t__pos=0;
  uint64_t __t6314t__length=0;
  char* __t6315t__unsafe_ptr=0;
  uint64_t __t6315t__pos=0;
  uint64_t __t6315t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t6316t__=0;
  char* __t6317t__unsafe_ptr=0;
  uint64_t __t6317t__pos=0;
  uint64_t __t6317t__length=0;
  char* __t6318t__unsafe_ptr=0;
  uint64_t __t6318t__pos=0;
  uint64_t __t6318t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t6319t=0;
  char __t6320t=0;
  double __t6321t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t6322t__unsafe_ptr=0;
  uint64_t __t6322t__pos=0;
  uint64_t __t6322t__length=0;
  char* __t6323t____t4795t__buf__unsafe_ptr=0;
  uint64_t __t6323t____t4795t__buf__unsafe_size=0;
  uint16_t __t6323t____t4795t__buf__unsafe_offset=0;
  uint16_t __t6323t____t4795t__buf__unsafe_align=0;
  uint64_t __t6323t____t4795t__pos=0;
  char* __t6323t__v__unsafe_ptr=0;
  uint64_t __t6323t__v__pos=0;
  uint64_t __t6323t__v__length=0;
  char* __t6324t__unsafe_ptr=0;
  uint64_t __t6324t__pos=0;
  uint64_t __t6324t__length=0;
  char* __t6325t____t4795t__buf__unsafe_ptr=0;
  uint64_t __t6325t____t4795t__buf__unsafe_size=0;
  uint16_t __t6325t____t4795t__buf__unsafe_offset=0;
  uint16_t __t6325t____t4795t__buf__unsafe_align=0;
  uint64_t __t6325t____t4795t__pos=0;
  char* __t6325t__v__unsafe_ptr=0;
  uint64_t __t6325t__v__pos=0;
  uint64_t __t6325t__v__length=0;
  char* __t6326t__unsafe_ptr=0;
  uint64_t __t6326t__pos=0;
  uint64_t __t6326t__length=0;
  char* __t6327t____t4795t__buf__unsafe_ptr=0;
  uint64_t __t6327t____t4795t__buf__unsafe_size=0;
  uint16_t __t6327t____t4795t__buf__unsafe_offset=0;
  uint16_t __t6327t____t4795t__buf__unsafe_align=0;
  uint64_t __t6327t____t4795t__pos=0;
  char* __t6327t__v__unsafe_ptr=0;
  uint64_t __t6327t__v__pos=0;
  uint64_t __t6327t__v__length=0;
  double __t6329t__=0;
  char* __t6330t__unsafe_ptr=0;
  uint64_t __t6330t__pos=0;
  uint64_t __t6330t__length=0;
  double __t6331t=0;
  char __t6332t__=0;
  double __t6335t__=0;
  double err=0;
  uint64_t __t6336t__=0;
  double __t6337t__=0;
  double __t6338t__=0;
  char __t6339t__=0;
  uint64_t __t6340t=0;
  uint64_t __t6341t__=0;
  char* __t6342t____t4795t__buf__unsafe_ptr=0;
  uint64_t __t6342t____t4795t__buf__unsafe_size=0;
  uint16_t __t6342t____t4795t__buf__unsafe_offset=0;
  uint16_t __t6342t____t4795t__buf__unsafe_align=0;
  uint64_t __t6342t____t4795t__pos=0;
  char* __t6342t__v__unsafe_ptr=0;
  uint64_t __t6342t__v__pos=0;
  uint64_t __t6342t__v__length=0;
  char* __t6343t__unsafe_ptr=0;
  uint64_t __t6343t__pos=0;
  uint64_t __t6343t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t3036t(p0__unsafe_ptr,p0__pos,p0__length,&__t6300t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t6300t__;
  float____t_buffer____buffer__t6253t(&__t6301t__unsafe_ptr,&__t6301t__unsafe_size,&__t6301t__unsafe_offset,&__t6301t__unsafe_align);
  __t6302t=100;
  len__t2427t(p0__unsafe_ptr,p0__pos,p0__length,&__t6303t__);
  mul__t199t(__t6302t,__t6303t__,&__t6304t__);
  __t_errcode=alloc__t541t(&__t6301t__unsafe_ptr,&__t6301t__unsafe_size,&__t6301t__unsafe_offset,&__t6301t__unsafe_align,__t6304t__,&__t6305t__unsafe_ptr,&__t6305t__unsafe_size,&__t6305t__unsafe_offset,&__t6305t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t682t(&__t6305t__unsafe_ptr,&__t6305t__unsafe_size,&__t6305t__unsafe_offset,&__t6305t__unsafe_align,&__t6307t__buf__unsafe_ptr,&__t6307t__buf__unsafe_size,&__t6307t__buf__unsafe_offset,&__t6307t__buf__unsafe_align,&__t6307t__pos);
  FLOATS__buf__unsafe_ptr=__t6307t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t6307t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t6307t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t6307t__buf__unsafe_align;
  FLOATS__pos=__t6307t__pos;
  __t6308t=1.0;
  sub__t326t(__t6308t,config__alpha,&__t6309t__);
  __t_errcode=div__t201t(__t6309t__,p0norm,&__t6310t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2707t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t6310t__,&__t6311t__unsafe_ptr,&__t6311t__pos,&__t6311t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__unsafe_ptr=__t6311t__unsafe_ptr;
  normalized_p0__pos=__t6311t__pos;
  normalized_p0__length=__t6311t__length;
  __t_errcode=copy__t4770t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6312t__unsafe_ptr,&__t6312t__pos,&__t6312t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6313t__unsafe_ptr=__t6312t__unsafe_ptr;
  __t6313t__pos=__t6312t__pos;
  __t6313t__length=__t6312t__length;
  prev_p__unsafe_ptr=__t6313t__unsafe_ptr;
  prev_p__pos=__t6313t__pos;
  prev_p__length=__t6313t__length;
  __t_errcode=copy__t4770t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6314t__unsafe_ptr,&__t6314t__pos,&__t6314t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6315t__unsafe_ptr=__t6314t__unsafe_ptr;
  __t6315t__pos=__t6314t__pos;
  __t6315t__length=__t6314t__length;
  p__unsafe_ptr=__t6315t__unsafe_ptr;
  p__pos=__t6315t__pos;
  p__length=__t6315t__length;
  len__t2427t(p__unsafe_ptr,p__pos,p__length,&__t6316t__);
  __t_errcode=vec__t2296t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,__t6316t__,&__t6317t__unsafe_ptr,&__t6317t__pos,&__t6317t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6318t__unsafe_ptr=__t6317t__unsafe_ptr;
  __t6318t__pos=__t6317t__pos;
  __t6318t__length=__t6317t__length;
  empty__unsafe_ptr=__t6318t__unsafe_ptr;
  empty__pos=__t6318t__pos;
  empty__length=__t6318t__length;
  __t6319t=0;
  while(1){
  __t_complain=get__t6246t(config__alpha,config__max_iters,config__tol,__t6319t,&__t6321t__);
  __t6320t=__t_complain;
  alpha=__t6321t__;
  __t6320t=__t6320t==0;
  __t6319t=__t6319t+1;
  if(!__t6320t){
  break;
  }
  iter=__t6319t;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5944t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t6322t__unsafe_ptr,&__t6322t__pos,&__t6322t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4794t(&__t6322t__unsafe_ptr,__t6322t__pos,__t6322t__length,&__t6323t____t4795t__buf__unsafe_ptr,&__t6323t____t4795t__buf__unsafe_size,&__t6323t____t4795t__buf__unsafe_offset,&__t6323t____t4795t__buf__unsafe_align,&__t6323t____t4795t__pos,&__t6323t__v__unsafe_ptr,&__t6323t__v__pos,&__t6323t__v__length);
  __t_errcode=mul__t2707t(&__t6323t____t4795t__buf__unsafe_ptr,&__t6323t____t4795t__buf__unsafe_size,&__t6323t____t4795t__buf__unsafe_offset,&__t6323t____t4795t__buf__unsafe_align,&__t6323t____t4795t__pos,__t6323t__v__unsafe_ptr,__t6323t__v__pos,__t6323t__v__length,alpha,&__t6324t__unsafe_ptr,&__t6324t__pos,&__t6324t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t6324t__unsafe_ptr;
  p__pos=__t6324t__pos;
  p__length=__t6324t__length;
  self__t4794t(&p__unsafe_ptr,p__pos,p__length,&__t6325t____t4795t__buf__unsafe_ptr,&__t6325t____t4795t__buf__unsafe_size,&__t6325t____t4795t__buf__unsafe_offset,&__t6325t____t4795t__buf__unsafe_align,&__t6325t____t4795t__pos,&__t6325t__v__unsafe_ptr,&__t6325t__v__pos,&__t6325t__v__length);
  __t_errcode=add__t2489t(&__t6325t____t4795t__buf__unsafe_ptr,&__t6325t____t4795t__buf__unsafe_size,&__t6325t____t4795t__buf__unsafe_offset,&__t6325t____t4795t__buf__unsafe_align,&__t6325t____t4795t__pos,__t6325t__v__unsafe_ptr,__t6325t__v__pos,__t6325t__v__length,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6326t__unsafe_ptr,&__t6326t__pos,&__t6326t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t6326t__unsafe_ptr;
  p__pos=__t6326t__pos;
  p__length=__t6326t__length;
  self__t4794t(&p__unsafe_ptr,p__pos,p__length,&__t6327t____t4795t__buf__unsafe_ptr,&__t6327t____t4795t__buf__unsafe_size,&__t6327t____t4795t__buf__unsafe_offset,&__t6327t____t4795t__buf__unsafe_align,&__t6327t____t4795t__pos,&__t6327t__v__unsafe_ptr,&__t6327t__v__pos,&__t6327t__v__length);
  __t_errcode=reduce__t3036t(p__unsafe_ptr,p__pos,p__length,&__t6329t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2914t(&__t6327t____t4795t__buf__unsafe_ptr,&__t6327t____t4795t__buf__unsafe_size,&__t6327t____t4795t__buf__unsafe_offset,&__t6327t____t4795t__buf__unsafe_align,&__t6327t____t4795t__pos,__t6327t__v__unsafe_ptr,__t6327t__v__pos,__t6327t__v__length,__t6329t__,&__t6330t__unsafe_ptr,&__t6330t__pos,&__t6330t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t6330t__unsafe_ptr;
  p__pos=__t6330t__pos;
  p__length=__t6330t__length;
  __t6331t=0.0;
  neq__t122t(config__tol,__t6331t,&__t6332t__);
  if(__t6332t__){
  __t_errcode=reduce__t3792t(prev_p__unsafe_ptr,prev_p__pos,prev_p__length,p__unsafe_ptr,p__pos,p__length,&__t6335t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t6335t__;
  len__t2427t(p__unsafe_ptr,p__pos,p__length,&__t6336t__);
  float__t414t(__t6336t__,&__t6337t__);
  mul__t177t(config__tol,__t6337t__,&__t6338t__);
  lt__t230t(err,__t6338t__,&__t6339t__);
  if(__t6339t__){
  break;
  }
  }
  empty__unsafe_ptr=prev_p__unsafe_ptr;
  empty__pos=prev_p__pos;
  empty__length=prev_p__length;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t6340t=0;
  add__t175t(empty__pos,__t6340t,&__t6341t__);
  FLOATS__pos=__t6341t__;
  }
  self__t4794t(&p__unsafe_ptr,p__pos,p__length,&__t6342t____t4795t__buf__unsafe_ptr,&__t6342t____t4795t__buf__unsafe_size,&__t6342t____t4795t__buf__unsafe_offset,&__t6342t____t4795t__buf__unsafe_align,&__t6342t____t4795t__pos,&__t6342t__v__unsafe_ptr,&__t6342t__v__pos,&__t6342t__v__length);
  __t_errcode=mul__t2707t(&__t6342t____t4795t__buf__unsafe_ptr,&__t6342t____t4795t__buf__unsafe_size,&__t6342t____t4795t__buf__unsafe_offset,&__t6342t____t4795t__buf__unsafe_align,&__t6342t____t4795t__pos,__t6342t__v__unsafe_ptr,__t6342t__v__pos,__t6342t__v__length,p0norm,&__t6343t__unsafe_ptr,&__t6343t__pos,&__t6343t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t6343t__unsafe_ptr;
  p__pos=__t6343t__pos;
  p__length=__t6343t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6618t=p__unsafe_ptr;
  *__t6619t=p__pos;
  *__t6620t=p__length;
  *__t6621t=err;
  *__t6622t=iter;
  
  __t_skip_returns:exists__t446t(__t6305t__unsafe_ptr,&__t6306t____t543t__);
  if(__t6306t____t543t__){
  free__t512t(&__t6305t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t372t(const char* value, const char** __t6623t, const char** __t6624t) {
  goto __t_return;
  __t_return:
  *__t6623t=value;
  *__t6624t=__t373t;
}

static inline __attribute__((always_inline)) void print__t377t(const char* value, const char* endl) {
  int __t378t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t392t(uint64_t value) {
  int __t393t=0;
  const char* endl=0;
  endl=__t381t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t374t(double value, double* __t6625t, const char** __t6626t) {
  goto __t_return;
  __t_return:
  *__t6625t=value;
  *__t6626t=__t373t;
}

static inline __attribute__((always_inline)) void print__t382t(double value, const char* endl) {
  int __t383t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t6627t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6627t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4742t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4743t=0;
  const char* endl=0;
  const char* __t4744t__value=0;
  const char* __t4744t____t373t=0;
  uint64_t __t4746t=0;
  uint64_t __t4747t__from=0;
  uint64_t __t4747t__to=0;
  char __t4748t=0;
  uint64_t __t4749t__=0;
  uint64_t i=0;
  char* __t4750t__=0;
  double __t4751t__value=0;
  double __t4752t__value=0;
  const char* __t4752t____t373t=0;
  uint64_t __t4754t=0;
  uint64_t __t4755t__=0;
  char __t4756t__=0;
  const char* __t4757t__value=0;
  const char* __t4757t____t373t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t381t;
  nn__t372t(__t4723t,&__t4744t__value,&__t4744t____t373t);
  print__t377t(__t4744t__value,__t4744t____t373t);
  range__t471t(v__length,&__t4747t__from,&__t4747t__to);
  __t4746t=0;
  while(1){
  __t_complain=get__t487t(__t4747t__from,__t4747t__to,__t4746t,&__t4749t__);
  __t4748t=__t_complain;
  i=__t4749t__;
  __t4748t=__t4748t==0;
  __t4746t=__t4746t+1;
  if(!__t4748t){
  break;
  }
  __t_errcode=get__t2440t(v__unsafe_ptr,v__pos,v__length,i,&__t4750t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4750t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4751t__value,__t4750t__,8);
  nn__t374t(__t4751t__value,&__t4752t__value,&__t4752t____t373t);
  print__t382t(__t4752t__value,__t4752t____t373t);
  __t4754t=1;
  __t_errcode=sub__t352t(v__length,__t4754t,&__t4755t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4755t__,&__t4756t__);
  if(__t4756t__){
  nn__t372t(__t4737t,&__t4757t__value,&__t4757t____t373t);
  print__t377t(__t4757t__value,__t4757t____t373t);
  }
  }
  print__t377t(__t4740t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6397t() {
  char* __t6435t=0;
  uint64_t __t6436t=0;
  uint64_t __t6437t=0;
  uint64_t __t6438t=0;
  char* m__t6435t=0;
  uint64_t m__t6436t=0;
  uint64_t m__t6437t=0;
  uint64_t m__t6438t=0;
  double __t6440t=0;
  double __t6445t=0;
  double __t6446t=0;
  char* __t6447t__unsafe_ptr=0;
  uint64_t __t6447t__unsafe_size=0;
  uint16_t __t6447t__unsafe_offset=0;
  uint16_t __t6447t__unsafe_align=0;
  uint64_t __t6448t=0;
  char* __t6449t__unsafe_ptr=0;
  uint64_t __t6449t__unsafe_size=0;
  uint16_t __t6449t__unsafe_offset=0;
  uint16_t __t6449t__unsafe_align=0;
  char __t6450t____t543t__=0;
  char* __t6451t__unsafe_ptr=0;
  uint64_t __t6451t__pos=0;
  uint64_t __t6451t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t6452t=0;
  double __t6453t__alpha=0;
  uint64_t __t6453t__max_iters=0;
  double __t6453t__tol=0;
  char* __t6454t__p__unsafe_ptr=0;
  uint64_t __t6454t__p__pos=0;
  uint64_t __t6454t__p__length=0;
  double __t6454t__err=0;
  uint64_t __t6454t__iter=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t6456t__value=0;
  const char* __t6456t____t373t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t6435t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t6436t=3;
  __t6437t=3;
  __t6438t=3;
  m__t6435t=__t6435t;
  m__t6436t=__t6436t;
  m__t6437t=__t6437t;
  m__t6438t=__t6438t;
  new__t678t();
  __t6440t=1.0;
  __t6445t=2.0;
  __t6446t=3.0;
  float____buffer__t6443t(&__t6447t__unsafe_ptr,&__t6447t__unsafe_size,&__t6447t__unsafe_offset,&__t6447t__unsafe_align);
  __t6448t=3;
  __t_errcode=alloc__t541t(&__t6447t__unsafe_ptr,&__t6447t__unsafe_size,&__t6447t__unsafe_offset,&__t6447t__unsafe_align,__t6448t,&__t6449t__unsafe_ptr,&__t6449t__unsafe_size,&__t6449t__unsafe_offset,&__t6449t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6447t__unsafe_ptr,&__t6440t,8);
  memcpy(__t6447t__unsafe_ptr+8,&__t6445t,8);
  memcpy(__t6447t__unsafe_ptr+16,&__t6446t,8);
  __t_errcode=vec__t2263t(&__t6447t__unsafe_ptr,&__t6447t__unsafe_size,&__t6447t__unsafe_offset,&__t6447t__unsafe_align,&__t6451t__unsafe_ptr,&__t6451t__pos,&__t6451t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t6451t__unsafe_ptr;
  p0__pos=__t6451t__pos;
  p0__length=__t6451t__length;
  __t6452t=0.9;
  ppr__t6233t(__t6452t,&__t6453t__alpha,&__t6453t__max_iters,&__t6453t__tol);
  __t_errcode=filter__t6298t(__t6453t__alpha,__t6453t__max_iters,__t6453t__tol,m__t6435t,m__t6436t,m__t6437t,m__t6438t,p0__unsafe_ptr,p0__pos,p0__length,&__t6454t__p__unsafe_ptr,&__t6454t__p__pos,&__t6454t__p__length,&__t6454t__err,&__t6454t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t6454t__p__unsafe_ptr;
  result__p__pos=__t6454t__p__pos;
  result__p__length=__t6454t__p__length;
  result__err=__t6454t__err;
  result__iter=__t6454t__iter;
  nn__t372t(__t6455t,&__t6456t__value,&__t6456t____t373t);
  print__t377t(__t6456t__value,__t6456t____t373t);
  print__t392t(result__iter);
  __t_errcode=print__t4742t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t446t(__t6449t__unsafe_ptr,&__t6450t____t543t__);
  if(__t6450t____t543t__){
  free__t512t(&__t6449t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6397t();return 0;}