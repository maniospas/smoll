#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5300t=", ";
const char* const __t374t="";
const char* const __t5585t=")\n";
const char* const __t5578t="(sum, mean, std) = (";
static const char* __t_all_errcodes[46] = {"noerr",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5565t(char** __t5587t, uint64_t* __t5588t, uint16_t* __t5589t, uint16_t* __t5590t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5587t=unsafe_ptr;
  *__t5588t=unsafe_size;
  *__t5589t=unsafe_offset;
  *__t5590t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5591t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5591t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5592t) {
  char* allocated=*__t5592t;
  if(allocated){
  free(allocated);
  }
  *__t5592t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5593t) {
  int value=0;
  *__t5593t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5594t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5594t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5595t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5595t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5596t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5596t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5597t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5597t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5598t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5598t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5599t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5599t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5600t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5600t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5601t) {
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
  *__t5601t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5602t, uint64_t* __t5603t, uint16_t* __t5604t, uint16_t* __t5605t, uint64_t size, char** __t5606t, uint64_t* __t5607t, uint16_t* __t5608t, uint16_t* __t5609t) {
  char* buffer__unsafe_ptr=*__t5602t;
  uint64_t buffer__unsafe_size=*__t5603t;
  uint16_t buffer__unsafe_offset=*__t5604t;
  uint16_t buffer__unsafe_align=*__t5605t;
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
  *__t5602t=buffer__unsafe_ptr;
  *__t5603t=buffer__unsafe_size;
  *__t5604t=buffer__unsafe_offset;
  *__t5605t=buffer__unsafe_align;
  *__t5606t=buffer__unsafe_ptr;
  *__t5607t=buffer__unsafe_size;
  *__t5608t=buffer__unsafe_offset;
  *__t5609t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5610t) {
  goto __t_return;
  __t_return:
  *__t5610t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1640t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5611t, uint64_t* __t5612t, uint64_t* __t5613t) {
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__pos=0;
  uint64_t __t1642t__length=0;
  __t1642t__unsafe_ptr=unsafe_ptr;
  __t1642t__pos=pos;
  __t1642t__length=length;
  goto __t_return;
  __t_return:
  *__t5611t=__t1642t__unsafe_ptr;
  *__t5612t=__t1642t__pos;
  *__t5613t=__t1642t__length;
}

static inline __attribute__((always_inline)) int vec__t1683t(char** __t5614t, uint64_t* __t5615t, uint16_t* __t5616t, uint16_t* __t5617t, char** __t5618t, uint64_t* __t5619t, uint64_t* __t5620t) {
  char* buf__unsafe_ptr=*__t5614t;
  uint64_t buf__unsafe_size=*__t5615t;
  uint16_t buf__unsafe_offset=*__t5616t;
  uint16_t buf__unsafe_align=*__t5617t;
  uint64_t __t1684t__=0;
  uint64_t __t1685t=0;
  char __t1686t__=0;
  uint64_t __t1687t__=0;
  uint64_t __t1688t=0;
  char __t1689t__=0;
  uint64_t __t1690t=0;
  uint64_t __t1691t__=0;
  char* __t1692t__unsafe_ptr=0;
  uint64_t __t1692t__pos=0;
  uint64_t __t1692t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1684t__);
  __t1685t=8;
  neq__t144t(__t1684t__,__t1685t,&__t1686t__);
  if(__t1686t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1687t__);
  __t1688t=0;
  neq__t144t(__t1687t__,__t1688t,&__t1689t__);
  if(__t1689t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1690t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1691t__);
  vec__t1640t(buf__unsafe_ptr,__t1690t,__t1691t__,&__t1692t__unsafe_ptr,&__t1692t__pos,&__t1692t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5614t=buf__unsafe_ptr;
  *__t5615t=buf__unsafe_size;
  *__t5616t=buf__unsafe_offset;
  *__t5617t=buf__unsafe_align;
  *__t5618t=__t1692t__unsafe_ptr;
  *__t5619t=__t1692t__pos;
  *__t5620t=__t1692t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5621t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5621t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5622t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5622t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5623t) {
  *__t5623t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5624t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5624t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1760t(char** __t5625t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5626t) {
  char* v__unsafe_ptr=*__t5625t;
  char __t1761t__=0;
  uint64_t __t1762t=0;
  uint64_t __t1763t__=0;
  uint64_t __t1764t__=0;
  char* __t1765t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1761t__);
  if(__t1761t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1762t=8;
  add__t175t(i,v__pos,&__t1763t__);
  mul__t199t(__t1762t,__t1763t__,&__t1764t__);
  add__t505t(v__unsafe_ptr,__t1764t__,&__t1765t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5625t=v__unsafe_ptr;
  *__t5626t=__t1765t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1759t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5627t) {
  goto __t_return;
  __t_return:
  *__t5627t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5628t, uint64_t* __t5629t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5628t=from;
  *__t5629t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5630t, uint64_t* __t5631t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5630t=__t473t__from;
  *__t5631t=__t473t__to;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5632t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5632t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5633t) {
  char __t479t__=0;
  char __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t479t__);
  if(__t479t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t480t__);
  if(__t480t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5633t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1766t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5634t) {
  char __t1767t__=0;
  uint64_t __t1768t=0;
  uint64_t __t1769t__=0;
  uint64_t __t1770t__=0;
  char* __t1771t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1767t__);
  if(__t1767t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1768t=8;
  add__t175t(i,v__pos,&__t1769t__);
  mul__t199t(__t1768t,__t1769t__,&__t1770t__);
  add__t505t(v__unsafe_ptr,__t1770t__,&__t1771t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5634t=__t1771t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5635t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5635t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5636t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5636t=z;
}

static inline __attribute__((always_inline)) int reduce__t2437t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5637t) {
  char __t2438t=0;
  char __t2439t=0;
  double __t2440t=0;
  double __t2441t=0;
  double ret=0;
  int __t2442t=0;
  int __t2443t=0;
  int __t2444t=0;
  int __t2445t__=0;
  uint64_t __t2446t=0;
  uint64_t __t2447t__=0;
  uint64_t __t2448t__from=0;
  uint64_t __t2448t__to=0;
  char __t2449t=0;
  uint64_t __t2450t__=0;
  uint64_t i=0;
  char* __t2451t__=0;
  double __t2452t__value=0;
  double __t2453t=0;
  double value=0;
  int __t2454t=0;
  int __t2455t=0;
  int __t2456t=0;
  int __t2457t=0;
  int __t2458t=0;
  char __t2459t=0;
  char __t2460t=0;
  double __t2461t__=0;
  int __t2462t=0;
  int __t2463t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2439t=1;
  if(__t2439t){
  __t2438t=1;
  }
  if(__t2438t){
  __t2440t=0.0;
  __t2441t=__t2440t;
  ret=__t2441t;
  }
  not__t37t(__t2444t,&__t2445t__);
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t2447t__);
  range__t471t(__t2447t__,&__t2448t__from,&__t2448t__to);
  __t2446t=0;
  while(1){
  __t_complain=get__t478t(__t2448t__from,__t2448t__to,__t2446t,&__t2450t__);
  __t2449t=__t_complain;
  i=__t2450t__;
  __t2449t=__t2449t==0;
  __t2446t=__t2446t+1;
  if(!__t2449t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t2451t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2451t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2452t__value,__t2451t__,8);
  __t2453t=__t2452t__value;
  value=__t2453t;
  __t2460t=1;
  if(__t2460t){
  __t2459t=1;
  }
  if(__t2459t){
  add__t153t(ret,value,&__t2461t__);
  ret=__t2461t__;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5637t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t4535t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5638t) {
  double __t4537t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2437t(v__unsafe_ptr,v__pos,v__length,&__t4537t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5638t=__t4537t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5639t) {
  int value=0;
  *__t5639t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5640t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5640t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5641t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5641t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5642t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5642t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5643t) {
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
  *__t5643t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t4538t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5644t) {
  double __t4540t__=0;
  uint64_t __t4541t__=0;
  double __t4542t__=0;
  double __t4543t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2437t(v__unsafe_ptr,v__pos,v__length,&__t4540t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t4541t__);
  float__t415t(__t4541t__,&__t4542t__);
  __t_errcode=div__t201t(__t4540t__,__t4542t__,&__t4543t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5644t=__t4543t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5645t, uint64_t r__to, uint64_t* __t5646t) {
  uint64_t r__from=*__t5645t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5645t=r__from;
  *__t5646t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5647t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5647t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5648t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5648t=z;
}

static inline __attribute__((always_inline)) int var__t4544t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5649t) {
  double __t4545t=0;
  double __t4546t=0;
  double sumsqr=0;
  double __t4547t=0;
  double __t4548t=0;
  double sum=0;
  uint64_t __t4549t__=0;
  uint64_t __t4550t__from=0;
  uint64_t __t4550t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t4551t=0;
  uint64_t __t4552t__=0;
  uint64_t i=0;
  char* __t4553t__=0;
  double __t4554t__value=0;
  double value=0;
  double __t4555t__=0;
  double __t4556t__=0;
  double __t4557t__=0;
  uint64_t __t4558t__=0;
  double __t4559t__=0;
  double n=0;
  double __t4560t__=0;
  double __t4561t__=0;
  double __t4562t__=0;
  double __t4563t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4545t=0.0;
  __t4546t=__t4545t;
  sumsqr=__t4546t;
  __t4547t=0.0;
  __t4548t=__t4547t;
  sum=__t4548t;
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t4549t__);
  range__t471t(__t4549t__,&__t4550t__from,&__t4550t__to);
  it__from=__t4550t__from;
  it__to=__t4550t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t4552t__);
  __t4551t=__t_complain;
  i=__t4552t__;
  __t4551t=__t4551t==0;
  if(!__t4551t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t4553t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4553t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4554t__value,__t4553t__,8);
  value=__t4554t__value;
  add__t153t(sum,value,&__t4555t__);
  sum=__t4555t__;
  mul__t177t(value,value,&__t4556t__);
  add__t153t(sumsqr,__t4556t__,&__t4557t__);
  sumsqr=__t4557t__;
  }
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t4558t__);
  float__t415t(__t4558t__,&__t4559t__);
  n=__t4559t__;
  __t_errcode=div__t201t(sum,n,&__t4560t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t4560t__;
  __t_errcode=div__t201t(sumsqr,n,&__t4561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t4562t__);
  sub__t326t(__t4561t__,__t4562t__,&__t4563t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5649t=__t4563t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1626t(double x, double* __t5650t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t5650t=z;
}

static inline __attribute__((always_inline)) int std__t4564t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5651t) {
  double __t4565t__=0;
  double __t4566t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t4544t(v__unsafe_ptr,v__pos,v__length,&__t4565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1626t(__t4565t__,&__t4566t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5651t=__t4566t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5563t() {
  char* __t5567t__unsafe_ptr=0;
  uint64_t __t5567t__unsafe_size=0;
  uint16_t __t5567t__unsafe_offset=0;
  uint16_t __t5567t__unsafe_align=0;
  uint64_t __t5568t=0;
  char* __t5569t__unsafe_ptr=0;
  uint64_t __t5569t__unsafe_size=0;
  uint16_t __t5569t__unsafe_offset=0;
  uint16_t __t5569t__unsafe_align=0;
  char __t5570t____t534t__=0;
  char* __t5571t__unsafe_ptr=0;
  uint64_t __t5571t__pos=0;
  uint64_t __t5571t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t5572t=0;
  char* __t5573t__=0;
  double __t5574t=0;
  uint64_t __t5575t=0;
  char* __t5576t__=0;
  double __t5577t=0;
  double __t5580t__=0;
  double __t5582t__=0;
  double __t5584t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t5565t(&__t5567t__unsafe_ptr,&__t5567t__unsafe_size,&__t5567t__unsafe_offset,&__t5567t__unsafe_align);
  __t5568t=5;
  __t_errcode=alloc__t532t(&__t5567t__unsafe_ptr,&__t5567t__unsafe_size,&__t5567t__unsafe_offset,&__t5567t__unsafe_align,__t5568t,&__t5569t__unsafe_ptr,&__t5569t__unsafe_size,&__t5569t__unsafe_offset,&__t5569t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1683t(&__t5569t__unsafe_ptr,&__t5569t__unsafe_size,&__t5569t__unsafe_offset,&__t5569t__unsafe_align,&__t5571t__unsafe_ptr,&__t5571t__pos,&__t5571t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t5571t__unsafe_ptr;
  v__pos=__t5571t__pos;
  v__length=__t5571t__length;
  __t5572t=0;
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,__t5572t,&__t5573t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5574t=1.0;
  if(!__t5573t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5573t__,&__t5574t,8);
  __t5575t=1;
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,__t5575t,&__t5576t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5577t=2.0;
  if(!__t5576t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5576t__,&__t5577t,8);
  print__t378t(__t5578t,__t374t);
  __t_errcode=sum__t4535t(v__unsafe_ptr,v__pos,v__length,&__t5580t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5580t__,__t5300t);
  __t_errcode=mean__t4538t(v__unsafe_ptr,v__pos,v__length,&__t5582t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5582t__,__t5300t);
  __t_errcode=std__t4564t(v__unsafe_ptr,v__pos,v__length,&__t5584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5584t__,__t5585t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5569t__unsafe_ptr,&__t5570t____t534t__);
  if(__t5570t____t534t__){
  free__t503t(&__t5569t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5563t();return 0;}