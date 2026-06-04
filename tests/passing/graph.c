#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4587t=" ]";
const char* const __t374t="";
const char* const __t4570t="[ ";
const char* const __t5621t="iterations: ";
const char* const __t4584t="  ";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5609t(char** __t5626t, uint64_t* __t5627t, uint16_t* __t5628t, uint16_t* __t5629t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5626t=unsafe_ptr;
  *__t5627t=unsafe_size;
  *__t5628t=unsafe_offset;
  *__t5629t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5630t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5630t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5631t) {
  char* allocated=*__t5631t;
  if(allocated){
  free(allocated);
  }
  *__t5631t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5632t) {
  int value=0;
  *__t5632t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5633t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5633t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5634t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5634t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5635t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5635t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5636t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5636t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5637t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5637t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5638t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5638t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5639t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5639t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5640t) {
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
  *__t5640t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5641t, uint64_t* __t5642t, uint16_t* __t5643t, uint16_t* __t5644t, uint64_t size, char** __t5645t, uint64_t* __t5646t, uint16_t* __t5647t, uint16_t* __t5648t) {
  char* buffer__unsafe_ptr=*__t5641t;
  uint64_t buffer__unsafe_size=*__t5642t;
  uint16_t buffer__unsafe_offset=*__t5643t;
  uint16_t buffer__unsafe_align=*__t5644t;
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
  *__t5641t=buffer__unsafe_ptr;
  *__t5642t=buffer__unsafe_size;
  *__t5643t=buffer__unsafe_offset;
  *__t5644t=buffer__unsafe_align;
  *__t5645t=buffer__unsafe_ptr;
  *__t5646t=buffer__unsafe_size;
  *__t5647t=buffer__unsafe_offset;
  *__t5648t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5649t) {
  goto __t_return;
  __t_return:
  *__t5649t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1640t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5650t, uint64_t* __t5651t, uint64_t* __t5652t) {
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__pos=0;
  uint64_t __t1642t__length=0;
  __t1642t__unsafe_ptr=unsafe_ptr;
  __t1642t__pos=pos;
  __t1642t__length=length;
  goto __t_return;
  __t_return:
  *__t5650t=__t1642t__unsafe_ptr;
  *__t5651t=__t1642t__pos;
  *__t5652t=__t1642t__length;
}

static inline __attribute__((always_inline)) int vec__t1683t(char** __t5653t, uint64_t* __t5654t, uint16_t* __t5655t, uint16_t* __t5656t, char** __t5657t, uint64_t* __t5658t, uint64_t* __t5659t) {
  char* buf__unsafe_ptr=*__t5653t;
  uint64_t buf__unsafe_size=*__t5654t;
  uint16_t buf__unsafe_offset=*__t5655t;
  uint16_t buf__unsafe_align=*__t5656t;
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
  *__t5653t=buf__unsafe_ptr;
  *__t5654t=buf__unsafe_size;
  *__t5655t=buf__unsafe_offset;
  *__t5656t=buf__unsafe_align;
  *__t5657t=__t1692t__unsafe_ptr;
  *__t5658t=__t1692t__pos;
  *__t5659t=__t1692t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ppr__t5408t(double alpha, double* __t5660t, uint64_t* __t5661t, double* __t5662t) {
  int __t5409t=0;
  int __t5410t=0;
  double __t5411t=0;
  double tol=0;
  uint64_t __t5412t=0;
  uint64_t max_iters=0;
  int __t5413t=0;
  int __t5414t=0;
  __t5411t=0.00000001;
  tol=__t5411t;
  __t5412t=100;
  max_iters=__t5412t;
  goto __t_return;
  __t_return:
  *__t5660t=alpha;
  *__t5661t=max_iters;
  *__t5662t=tol;
}

static inline __attribute__((always_inline)) void len__t1759t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5663t) {
  goto __t_return;
  __t_return:
  *__t5663t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5664t, uint64_t* __t5665t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5664t=from;
  *__t5665t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5666t, uint64_t* __t5667t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5666t=__t473t__from;
  *__t5667t=__t473t__to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5668t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5668t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5669t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5669t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5670t) {
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
  *__t5670t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5671t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5671t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5672t) {
  *__t5672t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5673t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5673t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t1766t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5674t) {
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
  *__t5674t=__t1771t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5675t) {
  goto __t_return;
  __t_return:
  *__t5675t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5676t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5676t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5677t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5677t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5678t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5678t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5679t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5679t=z;
}

static inline __attribute__((always_inline)) void abs__t1612t(double x, double* __t5680t) {
  int64_t c=0;
  uint64_t __t1613t__value=0;
  uint64_t __t1614t__value=0;
  uint64_t __t1615t__value=0;
  double __t1616t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1613t__value);
  bits__t450t(c,&__t1614t__value);
  band__t464t(__t1613t__value,__t1614t__value,&__t1615t__value);
  float__t457t(__t1615t__value,&__t1616t__);
  goto __t_return;
  __t_return:
  *__t5680t=__t1616t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5681t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5681t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5682t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5682t=z;
}

int reduce__t2353t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5683t) {
  int __t2354t=0;
  double __t2355t=0;
  double __t2356t=0;
  double ret=0;
  int __t2357t=0;
  int __t2358t=0;
  int __t2359t=0;
  int __t2360t__=0;
  uint64_t __t2361t=0;
  uint64_t __t2362t__=0;
  uint64_t __t2363t__from=0;
  uint64_t __t2363t__to=0;
  char __t2364t=0;
  uint64_t __t2365t__=0;
  uint64_t i=0;
  char* __t2366t__=0;
  double __t2367t__value=0;
  double __t2368t=0;
  double value=0;
  int __t2369t=0;
  int __t2370t=0;
  int __t2371t=0;
  char __t2372t=0;
  char __t2373t=0;
  double __t2374t__=0;
  int __t2375t=0;
  int __t2376t=0;
  double __t2377t__=0;
  int __t2378t=0;
  int __t2379t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2355t=0.0;
  __t2356t=__t2355t;
  ret=__t2356t;
  not__t37t(__t2359t,&__t2360t__);
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t2362t__);
  range__t471t(__t2362t__,&__t2363t__from,&__t2363t__to);
  __t2361t=0;
  while(1){
  __t_complain=get__t478t(__t2363t__from,__t2363t__to,__t2361t,&__t2365t__);
  __t2364t=__t_complain;
  i=__t2365t__;
  __t2364t=__t2364t==0;
  __t2361t=__t2361t+1;
  if(!__t2364t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t2366t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2366t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2367t__value,__t2366t__,8);
  __t2368t=__t2367t__value;
  value=__t2368t;
  __t2373t=1;
  if(__t2373t){
  __t2372t=1;
  }
  if(__t2372t){
  abs__t1612t(value,&__t2374t__);
  value=__t2374t__;
  }
  add__t153t(ret,value,&__t2377t__);
  ret=__t2377t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5683t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5423t(char** __t5684t, uint64_t* __t5685t, uint16_t* __t5686t, uint16_t* __t5687t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5684t=unsafe_ptr;
  *__t5685t=unsafe_size;
  *__t5686t=unsafe_offset;
  *__t5687t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t5688t, uint64_t* __t5689t, uint16_t* __t5690t, uint16_t* __t5691t, uint64_t _pos, char** __t5692t, uint64_t* __t5693t, uint16_t* __t5694t, uint16_t* __t5695t, uint64_t* __t5696t) {
  char* buf__unsafe_ptr=*__t5688t;
  uint64_t buf__unsafe_size=*__t5689t;
  uint16_t buf__unsafe_offset=*__t5690t;
  uint16_t buf__unsafe_align=*__t5691t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t5688t=buf__unsafe_ptr;
  *__t5689t=buf__unsafe_size;
  *__t5690t=buf__unsafe_offset;
  *__t5691t=buf__unsafe_align;
  *__t5692t=buf__unsafe_ptr;
  *__t5693t=buf__unsafe_size;
  *__t5694t=buf__unsafe_offset;
  *__t5695t=buf__unsafe_align;
  *__t5696t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t5697t, uint64_t* __t5698t, uint16_t* __t5699t, uint16_t* __t5700t, char** __t5701t, uint64_t* __t5702t, uint16_t* __t5703t, uint16_t* __t5704t, uint64_t* __t5705t) {
  char* buf__unsafe_ptr=*__t5697t;
  uint64_t buf__unsafe_size=*__t5698t;
  uint16_t buf__unsafe_offset=*__t5699t;
  uint16_t buf__unsafe_align=*__t5700t;
  uint64_t __t656t=0;
  char* __t657t__buf__unsafe_ptr=0;
  uint64_t __t657t__buf__unsafe_size=0;
  uint16_t __t657t__buf__unsafe_offset=0;
  uint16_t __t657t__buf__unsafe_align=0;
  uint64_t __t657t__pos=0;
  __t656t=0;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t656t,&__t657t__buf__unsafe_ptr,&__t657t__buf__unsafe_size,&__t657t__buf__unsafe_offset,&__t657t__buf__unsafe_align,&__t657t__pos);
  goto __t_return;
  __t_return:
  *__t5697t=buf__unsafe_ptr;
  *__t5698t=buf__unsafe_size;
  *__t5699t=buf__unsafe_offset;
  *__t5700t=buf__unsafe_align;
  *__t5701t=__t657t__buf__unsafe_ptr;
  *__t5702t=__t657t__buf__unsafe_size;
  *__t5703t=__t657t__buf__unsafe_offset;
  *__t5704t=__t657t__buf__unsafe_align;
  *__t5705t=__t657t__pos;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5706t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5706t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5707t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5707t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5708t) {
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
  *__t5708t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5709t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5709t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5710t, uint64_t* __t5711t, uint16_t* __t5712t, uint16_t* __t5713t, uint64_t pos, char** __t5714t, uint64_t* __t5715t, uint16_t* __t5716t, uint16_t* __t5717t, uint64_t* __t5718t) {
  char* buf__unsafe_ptr=*__t5710t;
  uint64_t buf__unsafe_size=*__t5711t;
  uint16_t buf__unsafe_offset=*__t5712t;
  uint16_t buf__unsafe_align=*__t5713t;
  goto __t_return;
  __t_return:
  *__t5710t=buf__unsafe_ptr;
  *__t5711t=buf__unsafe_size;
  *__t5712t=buf__unsafe_offset;
  *__t5713t=buf__unsafe_align;
  *__t5714t=buf__unsafe_ptr;
  *__t5715t=buf__unsafe_size;
  *__t5716t=buf__unsafe_offset;
  *__t5717t=buf__unsafe_align;
  *__t5718t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t5719t, uint64_t* __t5720t, uint16_t* __t5721t, uint16_t* __t5722t, uint64_t* __t5723t, uint64_t length, char** __t5724t, uint64_t* __t5725t, uint16_t* __t5726t, uint16_t* __t5727t, uint64_t* __t5728t) {
  char* allocator__buf__unsafe_ptr=*__t5719t;
  uint64_t allocator__buf__unsafe_size=*__t5720t;
  uint16_t allocator__buf__unsafe_offset=*__t5721t;
  uint16_t allocator__buf__unsafe_align=*__t5722t;
  uint64_t allocator__pos=*__t5723t;
  int __t686t=0;
  uint64_t __t687t__=0;
  uint64_t next_pos=0;
  uint64_t __t688t__=0;
  char __t689t__=0;
  uint64_t __t690t=0;
  uint64_t __t691t__=0;
  uint64_t pos=0;
  char* __t692t__buf__unsafe_ptr=0;
  uint64_t __t692t__buf__unsafe_size=0;
  uint16_t __t692t__buf__unsafe_offset=0;
  uint16_t __t692t__buf__unsafe_align=0;
  uint64_t __t692t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t687t__);
  next_pos=__t687t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t688t__);
  gt__t276t(next_pos,__t688t__,&__t689t__);
  if(__t689t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t690t=0;
  add__t175t(allocator__pos,__t690t,&__t691t__);
  pos=__t691t__;
  allocator__pos=next_pos;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t692t__buf__unsafe_ptr,&__t692t__buf__unsafe_size,&__t692t__buf__unsafe_offset,&__t692t__buf__unsafe_align,&__t692t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5719t=allocator__buf__unsafe_ptr;
  *__t5720t=allocator__buf__unsafe_size;
  *__t5721t=allocator__buf__unsafe_offset;
  *__t5722t=allocator__buf__unsafe_align;
  *__t5723t=allocator__pos;
  *__t5724t=__t692t__buf__unsafe_ptr;
  *__t5725t=__t692t__buf__unsafe_size;
  *__t5726t=__t692t__buf__unsafe_offset;
  *__t5727t=__t692t__buf__unsafe_align;
  *__t5728t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1703t(char** __t5729t, uint64_t* __t5730t, uint16_t* __t5731t, uint16_t* __t5732t, uint64_t* __t5733t, uint64_t length, char** __t5734t, uint64_t* __t5735t, uint64_t* __t5736t) {
  char* FLOATS__buf__unsafe_ptr=*__t5729t;
  uint64_t FLOATS__buf__unsafe_size=*__t5730t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5731t;
  uint16_t FLOATS__buf__unsafe_align=*__t5732t;
  uint64_t FLOATS__pos=*__t5733t;
  uint64_t __t1704t__=0;
  uint64_t __t1705t=0;
  char __t1706t__=0;
  uint64_t __t1707t__=0;
  uint64_t __t1708t=0;
  char __t1709t__=0;
  char* __t1710t__buf__unsafe_ptr=0;
  uint64_t __t1710t__buf__unsafe_size=0;
  uint16_t __t1710t__buf__unsafe_offset=0;
  uint16_t __t1710t__buf__unsafe_align=0;
  uint64_t __t1710t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1711t__=0;
  int __t1712t=0;
  char* __t1713t__unsafe_ptr=0;
  uint64_t __t1713t__pos=0;
  uint64_t __t1713t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1704t__);
  __t1705t=8;
  neq__t144t(__t1704t__,__t1705t,&__t1706t__);
  if(__t1706t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1707t__);
  __t1708t=0;
  neq__t144t(__t1707t__,__t1708t,&__t1709t__);
  if(__t1709t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1710t__buf__unsafe_ptr,&__t1710t__buf__unsafe_size,&__t1710t__buf__unsafe_offset,&__t1710t__buf__unsafe_align,&__t1710t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1710t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1710t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1710t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1710t__buf__unsafe_align;
  surface__pos=__t1710t__pos;
  add__t175t(FLOATS__pos,length,&__t1711t__);
  FLOATS__pos=__t1711t__;
  vec__t1640t(surface__buf__unsafe_ptr,surface__pos,length,&__t1713t__unsafe_ptr,&__t1713t__pos,&__t1713t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5729t=FLOATS__buf__unsafe_ptr;
  *__t5730t=FLOATS__buf__unsafe_size;
  *__t5731t=FLOATS__buf__unsafe_offset;
  *__t5732t=FLOATS__buf__unsafe_align;
  *__t5733t=FLOATS__pos;
  *__t5734t=__t1713t__unsafe_ptr;
  *__t5735t=__t1713t__pos;
  *__t5736t=__t1713t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1760t(char** __t5737t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5738t) {
  char* v__unsafe_ptr=*__t5737t;
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
  *__t5737t=v__unsafe_ptr;
  *__t5738t=__t1765t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1772t(double number, uint64_t i, double* __t5739t) {
  goto __t_return;
  __t_return:
  *__t5739t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5740t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5740t=z;
}

int mul__t2023t(char** __t5741t, uint64_t* __t5742t, uint16_t* __t5743t, uint16_t* __t5744t, uint64_t* __t5745t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5746t, uint64_t* __t5747t, uint64_t* __t5748t) {
  char* FLOATS__buf__unsafe_ptr=*__t5741t;
  uint64_t FLOATS__buf__unsafe_size=*__t5742t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5743t;
  uint16_t FLOATS__buf__unsafe_align=*__t5744t;
  uint64_t FLOATS__pos=*__t5745t;
  int __t2024t=0;
  char* __t2026t__unsafe_ptr=0;
  uint64_t __t2026t__pos=0;
  uint64_t __t2026t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2027t=0;
  uint64_t __t2028t__from=0;
  uint64_t __t2028t__to=0;
  char __t2029t=0;
  uint64_t __t2030t__=0;
  uint64_t i=0;
  char* __t2031t__=0;
  char* __t2032t__=0;
  double __t2033t__value=0;
  double __t2034t__=0;
  double __t2035t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1703t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2026t__unsafe_ptr,&__t2026t__pos,&__t2026t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2026t__unsafe_ptr;
  v__pos=__t2026t__pos;
  v__length=__t2026t__length;
  range__t471t(v__length,&__t2028t__from,&__t2028t__to);
  __t2027t=0;
  while(1){
  __t_complain=get__t478t(__t2028t__from,__t2028t__to,__t2027t,&__t2030t__);
  __t2029t=__t_complain;
  i=__t2030t__;
  __t2029t=__t2029t==0;
  __t2027t=__t2027t+1;
  if(!__t2029t){
  break;
  }
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,i,&__t2031t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2032t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2032t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2033t__value,__t2032t__,8);
  at__t1772t(v2,i,&__t2034t__);
  mul__t177t(__t2033t__value,__t2034t__,&__t2035t__);
  if(!__t2031t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2031t__,&__t2035t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5741t=FLOATS__buf__unsafe_ptr;
  *__t5742t=FLOATS__buf__unsafe_size;
  *__t5743t=FLOATS__buf__unsafe_offset;
  *__t5744t=FLOATS__buf__unsafe_align;
  *__t5745t=FLOATS__pos;
  *__t5746t=v__unsafe_ptr;
  *__t5747t=v__pos;
  *__t5748t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1714t(char** __t5749t, uint64_t* __t5750t, uint16_t* __t5751t, uint16_t* __t5752t, uint64_t* __t5753t, uint64_t length, char** __t5754t, uint64_t* __t5755t, uint64_t* __t5756t) {
  char* FLOATS__buf__unsafe_ptr=*__t5749t;
  uint64_t FLOATS__buf__unsafe_size=*__t5750t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5751t;
  uint16_t FLOATS__buf__unsafe_align=*__t5752t;
  uint64_t FLOATS__pos=*__t5753t;
  uint64_t __t1715t__=0;
  uint64_t __t1716t=0;
  char __t1717t__=0;
  uint64_t __t1718t__=0;
  uint64_t __t1719t=0;
  char __t1720t__=0;
  char* __t1721t__buf__unsafe_ptr=0;
  uint64_t __t1721t__buf__unsafe_size=0;
  uint16_t __t1721t__buf__unsafe_offset=0;
  uint16_t __t1721t__buf__unsafe_align=0;
  uint64_t __t1721t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1722t__=0;
  int __t1723t=0;
  uint64_t __t1724t=0;
  uint64_t __t1725t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t__=0;
  char* __t1730t__unsafe_ptr=0;
  uint64_t __t1730t__pos=0;
  uint64_t __t1730t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1715t__);
  __t1716t=8;
  neq__t144t(__t1715t__,__t1716t,&__t1717t__);
  if(__t1717t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1718t__);
  __t1719t=0;
  neq__t144t(__t1718t__,__t1719t,&__t1720t__);
  if(__t1720t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1721t__buf__unsafe_ptr,&__t1721t__buf__unsafe_size,&__t1721t__buf__unsafe_offset,&__t1721t__buf__unsafe_align,&__t1721t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1721t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1721t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1721t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1721t__buf__unsafe_align;
  surface__pos=__t1721t__pos;
  add__t175t(FLOATS__pos,length,&__t1722t__);
  FLOATS__pos=__t1722t__;
  __t1724t=8;
  mul__t199t(__t1724t,surface__pos,&__t1725t__);
  __t1726t=8;
  add__t175t(surface__pos,length,&__t1727t__);
  mul__t199t(__t1726t,__t1727t__,&__t1728t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1725t__,__t1728t__);
  vec__t1640t(surface__buf__unsafe_ptr,surface__pos,length,&__t1730t__unsafe_ptr,&__t1730t__pos,&__t1730t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5749t=FLOATS__buf__unsafe_ptr;
  *__t5750t=FLOATS__buf__unsafe_size;
  *__t5751t=FLOATS__buf__unsafe_offset;
  *__t5752t=FLOATS__buf__unsafe_align;
  *__t5753t=FLOATS__pos;
  *__t5754t=__t1730t__unsafe_ptr;
  *__t5755t=__t1730t__pos;
  *__t5756t=__t1730t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4617t(char** __t5757t, uint64_t* __t5758t, uint16_t* __t5759t, uint16_t* __t5760t, uint64_t* __t5761t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5762t, uint64_t* __t5763t, uint64_t* __t5764t) {
  char* FLOATS__buf__unsafe_ptr=*__t5757t;
  uint64_t FLOATS__buf__unsafe_size=*__t5758t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5759t;
  uint16_t FLOATS__buf__unsafe_align=*__t5760t;
  uint64_t FLOATS__pos=*__t5761t;
  char* __t4618t__unsafe_ptr=0;
  uint64_t __t4618t__pos=0;
  uint64_t __t4618t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4619t=0;
  uint64_t __t4620t__from=0;
  uint64_t __t4620t__to=0;
  char __t4621t=0;
  uint64_t __t4622t__=0;
  uint64_t i=0;
  char* __t4623t__=0;
  char* __t4624t__=0;
  double __t4625t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1714t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4618t__unsafe_ptr,&__t4618t__pos,&__t4618t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4618t__unsafe_ptr;
  result__pos=__t4618t__pos;
  result__length=__t4618t__length;
  range__t471t(v__length,&__t4620t__from,&__t4620t__to);
  __t4619t=0;
  while(1){
  __t_complain=get__t478t(__t4620t__from,__t4620t__to,__t4619t,&__t4622t__);
  __t4621t=__t_complain;
  i=__t4622t__;
  __t4621t=__t4621t==0;
  __t4619t=__t4619t+1;
  if(!__t4621t){
  break;
  }
  __t_errcode=mutget__t1760t(&result__unsafe_ptr,result__pos,result__length,i,&__t4623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t4624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4624t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4625t__value,__t4624t__,8);
  if(!__t4623t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4623t__,&__t4625t__value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5757t=FLOATS__buf__unsafe_ptr;
  *__t5758t=FLOATS__buf__unsafe_size;
  *__t5759t=FLOATS__buf__unsafe_offset;
  *__t5760t=FLOATS__buf__unsafe_align;
  *__t5761t=FLOATS__pos;
  *__t5762t=result__unsafe_ptr;
  *__t5763t=result__pos;
  *__t5764t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5418t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t5765t) {
  char __t5419t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t5419t__);
  if(__t5419t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5765t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5120t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t5766t) {
  char __t5121t__=0;
  uint64_t __t5122t=0;
  uint64_t __t5123t__=0;
  char* __t5124t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5121t__);
  if(__t5121t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t5122t=24;
  mul__t199t(k,__t5122t,&__t5123t__);
  add__t505t(m__unsafe_ptr,__t5123t__,&__t5124t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5766t=__t5124t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5145t(char** __t5767t, uint64_t* __t5768t, uint16_t* __t5769t, uint16_t* __t5770t, uint64_t* __t5771t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5772t, uint64_t* __t5773t, uint64_t* __t5774t) {
  char* FLOATS__buf__unsafe_ptr=*__t5767t;
  uint64_t FLOATS__buf__unsafe_size=*__t5768t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5769t;
  uint16_t FLOATS__buf__unsafe_align=*__t5770t;
  uint64_t FLOATS__pos=*__t5771t;
  char __t5146t__=0;
  char* __t5147t__unsafe_ptr=0;
  uint64_t __t5147t__pos=0;
  uint64_t __t5147t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5148t=0;
  char __t5149t=0;
  char* __t5150t__=0;
  uint64_t __t5151t__row=0;
  uint64_t __t5151t__col=0;
  double __t5151t__value=0;
  uint64_t entry__row=0;
  uint64_t entry__col=0;
  double entry__value=0;
  char* __t5152t__=0;
  char* __t5153t__=0;
  double __t5154t__value=0;
  char* __t5155t__=0;
  double __t5156t__value=0;
  double __t5157t__=0;
  double __t5158t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5146t__);
  if(__t5146t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t1714t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5147t__unsafe_ptr,&__t5147t__pos,&__t5147t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5147t__unsafe_ptr;
  result__pos=__t5147t__pos;
  result__length=__t5147t__length;
  __t5148t=0;
  while(1){
  __t_complain=get__t5120t(m__unsafe_ptr,m__rows,m__cols,m__nnz,__t5148t,&__t5150t__);
  __t5149t=__t_complain;
  if(!__t5150t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5151t__row,__t5150t__,8);
  memcpy(&__t5151t__col,__t5150t__+8,8);
  memcpy(&__t5151t__value,__t5150t__+16,8);
  }
  entry__row=__t5151t__row;
  entry__col=__t5151t__col;
  entry__value=__t5151t__value;
  __t5149t=__t5149t==0;
  __t5148t=__t5148t+1;
  if(!__t5149t){
  break;
  }
  __t_errcode=mutget__t1760t(&result__unsafe_ptr,result__pos,result__length,entry__row,&__t5152t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(result__unsafe_ptr,result__pos,result__length,entry__row,&__t5153t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5153t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5154t__value,__t5153t__,8);
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,entry__col,&__t5155t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5155t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5156t__value,__t5155t__,8);
  mul__t177t(entry__value,__t5156t__value,&__t5157t__);
  add__t153t(__t5154t__value,__t5157t__,&__t5158t__);
  if(!__t5152t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5152t__,&__t5158t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5767t=FLOATS__buf__unsafe_ptr;
  *__t5768t=FLOATS__buf__unsafe_size;
  *__t5769t=FLOATS__buf__unsafe_offset;
  *__t5770t=FLOATS__buf__unsafe_align;
  *__t5771t=FLOATS__pos;
  *__t5772t=result__unsafe_ptr;
  *__t5773t=result__pos;
  *__t5774t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1651t(char** __t5775t, uint64_t* __t5776t, uint16_t* __t5777t, uint16_t* __t5778t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5775t=unsafe_ptr;
  *__t5776t=unsafe_size;
  *__t5777t=unsafe_offset;
  *__t5778t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t4635t(char** __t5779t, uint64_t v__pos, uint64_t v__length, char** __t5780t, uint64_t* __t5781t, uint16_t* __t5782t, uint16_t* __t5783t, uint64_t* __t5784t) {
  char* v__unsafe_ptr=*__t5779t;
  char* __t4636t__unsafe_ptr=0;
  uint64_t __t4636t__unsafe_size=0;
  uint16_t __t4636t__unsafe_offset=0;
  uint16_t __t4636t__unsafe_align=0;
  char* __t4637t__unsafe_ptr=0;
  uint64_t __t4637t__unsafe_size=0;
  uint16_t __t4637t__unsafe_offset=0;
  uint16_t __t4637t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4638t__=0;
  uint64_t __t4639t__=0;
  uint64_t __t4640t=0;
  uint64_t pos=0;
  char* __t4641t__buf__unsafe_ptr=0;
  uint64_t __t4641t__buf__unsafe_size=0;
  uint16_t __t4641t__buf__unsafe_offset=0;
  uint16_t __t4641t__buf__unsafe_align=0;
  uint64_t __t4641t__pos=0;
  float____t_buffer____buffer__t1651t(&__t4636t__unsafe_ptr,&__t4636t__unsafe_size,&__t4636t__unsafe_offset,&__t4636t__unsafe_align);
  __t4637t__unsafe_ptr=__t4636t__unsafe_ptr;
  __t4637t__unsafe_size=__t4636t__unsafe_size;
  __t4637t__unsafe_offset=__t4636t__unsafe_offset;
  __t4637t__unsafe_align=__t4636t__unsafe_align;
  buf__unsafe_ptr=__t4637t__unsafe_ptr;
  buf__unsafe_size=__t4637t__unsafe_size;
  buf__unsafe_offset=__t4637t__unsafe_offset;
  buf__unsafe_align=__t4637t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t4638t__);
  add__t175t(v__pos,__t4638t__,&__t4639t__);
  buf__unsafe_size=__t4639t__;
  __t4640t=v__pos;
  pos=__t4640t;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,pos,&__t4641t__buf__unsafe_ptr,&__t4641t__buf__unsafe_size,&__t4641t__buf__unsafe_offset,&__t4641t__buf__unsafe_align,&__t4641t__pos);
  goto __t_return;
  __t_return:
  *__t5779t=v__unsafe_ptr;
  *__t5780t=__t4641t__buf__unsafe_ptr;
  *__t5781t=__t4641t__buf__unsafe_size;
  *__t5782t=__t4641t__buf__unsafe_offset;
  *__t5783t=__t4641t__buf__unsafe_align;
  *__t5784t=__t4641t__pos;
}

static inline __attribute__((always_inline)) void self__t4642t(char** __t5785t, uint64_t v__pos, uint64_t v__length, char** __t5786t, uint64_t* __t5787t, uint16_t* __t5788t, uint16_t* __t5789t, uint64_t* __t5790t, char** __t5791t, uint64_t* __t5792t, uint64_t* __t5793t) {
  char* v__unsafe_ptr=*__t5785t;
  char* __t4643t__buf__unsafe_ptr=0;
  uint64_t __t4643t__buf__unsafe_size=0;
  uint16_t __t4643t__buf__unsafe_offset=0;
  uint16_t __t4643t__buf__unsafe_align=0;
  uint64_t __t4643t__pos=0;
  arena__t4635t(&v__unsafe_ptr,v__pos,v__length,&__t4643t__buf__unsafe_ptr,&__t4643t__buf__unsafe_size,&__t4643t__buf__unsafe_offset,&__t4643t__buf__unsafe_align,&__t4643t__pos);
  goto __t_return;
  __t_return:
  *__t5785t=v__unsafe_ptr;
  *__t5786t=__t4643t__buf__unsafe_ptr;
  *__t5787t=__t4643t__buf__unsafe_size;
  *__t5788t=__t4643t__buf__unsafe_offset;
  *__t5789t=__t4643t__buf__unsafe_align;
  *__t5790t=__t4643t__pos;
  *__t5791t=v__unsafe_ptr;
  *__t5792t=v__pos;
  *__t5793t=v__length;
}

static inline __attribute__((always_inline)) int at__t1773t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5794t) {
  char* __t1774t__=0;
  double __t1775t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t1774t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1774t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1775t__value,__t1774t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5794t=__t1775t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1805t(char** __t5795t, uint64_t* __t5796t, uint16_t* __t5797t, uint16_t* __t5798t, uint64_t* __t5799t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5800t, uint64_t* __t5801t, uint64_t* __t5802t) {
  char* FLOATS__buf__unsafe_ptr=*__t5795t;
  uint64_t FLOATS__buf__unsafe_size=*__t5796t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5797t;
  uint16_t FLOATS__buf__unsafe_align=*__t5798t;
  uint64_t FLOATS__pos=*__t5799t;
  int __t1806t=0;
  char __t1807t__=0;
  char* __t1809t__unsafe_ptr=0;
  uint64_t __t1809t__pos=0;
  uint64_t __t1809t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1810t=0;
  uint64_t __t1811t__from=0;
  uint64_t __t1811t__to=0;
  char __t1812t=0;
  uint64_t __t1813t__=0;
  uint64_t i=0;
  char* __t1814t__=0;
  char* __t1815t__=0;
  double __t1816t__value=0;
  double __t1817t__=0;
  double __t1818t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1807t__);
  if(__t1807t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t1703t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1809t__unsafe_ptr,&__t1809t__pos,&__t1809t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1809t__unsafe_ptr;
  v__pos=__t1809t__pos;
  v__length=__t1809t__length;
  range__t471t(v1__length,&__t1811t__from,&__t1811t__to);
  __t1810t=0;
  while(1){
  __t_complain=get__t478t(__t1811t__from,__t1811t__to,__t1810t,&__t1813t__);
  __t1812t=__t_complain;
  i=__t1813t__;
  __t1812t=__t1812t==0;
  __t1810t=__t1810t+1;
  if(!__t1812t){
  break;
  }
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,i,&__t1814t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1815t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1815t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1816t__value,__t1815t__,8);
  __t_errcode=at__t1773t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1817t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1816t__value,__t1817t__,&__t1818t__);
  if(!__t1814t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1814t__,&__t1818t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5795t=FLOATS__buf__unsafe_ptr;
  *__t5796t=FLOATS__buf__unsafe_size;
  *__t5797t=FLOATS__buf__unsafe_offset;
  *__t5798t=FLOATS__buf__unsafe_align;
  *__t5799t=FLOATS__pos;
  *__t5800t=v__unsafe_ptr;
  *__t5801t=v__pos;
  *__t5802t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2230t(char** __t5803t, uint64_t* __t5804t, uint16_t* __t5805t, uint16_t* __t5806t, uint64_t* __t5807t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5808t, uint64_t* __t5809t, uint64_t* __t5810t) {
  char* FLOATS__buf__unsafe_ptr=*__t5803t;
  uint64_t FLOATS__buf__unsafe_size=*__t5804t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5805t;
  uint16_t FLOATS__buf__unsafe_align=*__t5806t;
  uint64_t FLOATS__pos=*__t5807t;
  int __t2231t=0;
  char* __t2233t__unsafe_ptr=0;
  uint64_t __t2233t__pos=0;
  uint64_t __t2233t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2234t=0;
  uint64_t __t2235t__from=0;
  uint64_t __t2235t__to=0;
  char __t2236t=0;
  uint64_t __t2237t__=0;
  uint64_t i=0;
  char* __t2238t__=0;
  char* __t2239t__=0;
  double __t2240t__value=0;
  double __t2241t__=0;
  double __t2242t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1703t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2233t__unsafe_ptr,&__t2233t__pos,&__t2233t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2233t__unsafe_ptr;
  v__pos=__t2233t__pos;
  v__length=__t2233t__length;
  p1=v1__unsafe_ptr;
  range__t471t(v__length,&__t2235t__from,&__t2235t__to);
  __t2234t=0;
  while(1){
  __t_complain=get__t478t(__t2235t__from,__t2235t__to,__t2234t,&__t2237t__);
  __t2236t=__t_complain;
  i=__t2237t__;
  __t2236t=__t2236t==0;
  __t2234t=__t2234t+1;
  if(!__t2236t){
  break;
  }
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,i,&__t2238t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2239t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2239t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2240t__value,__t2239t__,8);
  at__t1772t(v2,i,&__t2241t__);
  __t_errcode=div__t201t(__t2240t__value,__t2241t__,&__t2242t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2238t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2238t__,&__t2242t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5803t=FLOATS__buf__unsafe_ptr;
  *__t5804t=FLOATS__buf__unsafe_size;
  *__t5805t=FLOATS__buf__unsafe_offset;
  *__t5806t=FLOATS__buf__unsafe_align;
  *__t5807t=FLOATS__pos;
  *__t5808t=v__unsafe_ptr;
  *__t5809t=v__pos;
  *__t5810t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t5811t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5811t=z;
}

int reduce__t3616t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t5812t) {
  int __t3617t=0;
  double __t3618t=0;
  double __t3619t=0;
  double ret=0;
  int __t3620t=0;
  int __t3621t=0;
  uint64_t __t3622t=0;
  uint64_t __t3623t__=0;
  uint64_t __t3624t__from=0;
  uint64_t __t3624t__to=0;
  char __t3625t=0;
  uint64_t __t3626t__=0;
  uint64_t i=0;
  char* __t3627t__=0;
  double __t3628t__value=0;
  double __t3629t=0;
  double value=0;
  char __t3630t=0;
  char __t3631t=0;
  char* __t3632t__=0;
  double __t3633t__value=0;
  double __t3634t__=0;
  int __t3635t=0;
  int __t3636t=0;
  char __t3637t=0;
  char __t3638t=0;
  double __t3639t__=0;
  int __t3640t=0;
  int __t3641t=0;
  double __t3642t__=0;
  int __t3643t=0;
  int __t3644t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3618t=0.0;
  __t3619t=__t3618t;
  ret=__t3619t;
  len__t1759t(v__unsafe_ptr,v__pos,v__length,&__t3623t__);
  range__t471t(__t3623t__,&__t3624t__from,&__t3624t__to);
  __t3622t=0;
  while(1){
  __t_complain=get__t478t(__t3624t__from,__t3624t__to,__t3622t,&__t3626t__);
  __t3625t=__t_complain;
  i=__t3626t__;
  __t3625t=__t3625t==0;
  __t3622t=__t3622t+1;
  if(!__t3625t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t3627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3627t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3628t__value,__t3627t__,8);
  __t3629t=__t3628t__value;
  value=__t3629t;
  __t3631t=1;
  if(__t3631t){
  __t3630t=1;
  }
  if(__t3630t){
  __t_errcode=get__t1766t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t3632t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3632t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3633t__value,__t3632t__,8);
  sub__t326t(value,__t3633t__value,&__t3634t__);
  value=__t3634t__;
  }
  __t3638t=1;
  if(__t3638t){
  __t3637t=1;
  }
  if(__t3637t){
  abs__t1612t(value,&__t3639t__);
  value=__t3639t__;
  }
  add__t153t(ret,value,&__t3642t__);
  ret=__t3642t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5812t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5813t) {
  int value=0;
  *__t5813t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5814t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5814t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5815t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5815t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t5816t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5816t=z;
}

static inline __attribute__((always_inline)) int filter__t5466t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t5817t, uint64_t* __t5818t, uint64_t* __t5819t, double* __t5820t, uint64_t* __t5821t) {
  double __t5468t__=0;
  double p0norm=0;
  char* __t5469t__unsafe_ptr=0;
  uint64_t __t5469t__unsafe_size=0;
  uint16_t __t5469t__unsafe_offset=0;
  uint16_t __t5469t__unsafe_align=0;
  uint64_t __t5470t=0;
  uint64_t __t5471t__=0;
  uint64_t __t5472t__=0;
  char* __t5473t__unsafe_ptr=0;
  uint64_t __t5473t__unsafe_size=0;
  uint16_t __t5473t__unsafe_offset=0;
  uint16_t __t5473t__unsafe_align=0;
  char __t5474t____t534t__=0;
  char* __t5475t__buf__unsafe_ptr=0;
  uint64_t __t5475t__buf__unsafe_size=0;
  uint16_t __t5475t__buf__unsafe_offset=0;
  uint16_t __t5475t__buf__unsafe_align=0;
  uint64_t __t5475t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t5476t=0;
  double __t5477t__=0;
  double __t5478t__=0;
  char* __t5479t__unsafe_ptr=0;
  uint64_t __t5479t__pos=0;
  uint64_t __t5479t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t5480t__unsafe_ptr=0;
  uint64_t __t5480t__pos=0;
  uint64_t __t5480t__length=0;
  char* __t5481t__unsafe_ptr=0;
  uint64_t __t5481t__pos=0;
  uint64_t __t5481t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t5482t__unsafe_ptr=0;
  uint64_t __t5482t__pos=0;
  uint64_t __t5482t__length=0;
  char* __t5483t__unsafe_ptr=0;
  uint64_t __t5483t__pos=0;
  uint64_t __t5483t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t5484t__=0;
  char* __t5485t__unsafe_ptr=0;
  uint64_t __t5485t__pos=0;
  uint64_t __t5485t__length=0;
  char* __t5486t__unsafe_ptr=0;
  uint64_t __t5486t__pos=0;
  uint64_t __t5486t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t5487t=0;
  char __t5488t=0;
  double __t5489t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t5490t__unsafe_ptr=0;
  uint64_t __t5490t__pos=0;
  uint64_t __t5490t__length=0;
  char* __t5491t____t4643t__buf__unsafe_ptr=0;
  uint64_t __t5491t____t4643t__buf__unsafe_size=0;
  uint16_t __t5491t____t4643t__buf__unsafe_offset=0;
  uint16_t __t5491t____t4643t__buf__unsafe_align=0;
  uint64_t __t5491t____t4643t__pos=0;
  char* __t5491t__v__unsafe_ptr=0;
  uint64_t __t5491t__v__pos=0;
  uint64_t __t5491t__v__length=0;
  char* __t5492t__unsafe_ptr=0;
  uint64_t __t5492t__pos=0;
  uint64_t __t5492t__length=0;
  char* __t5493t____t4643t__buf__unsafe_ptr=0;
  uint64_t __t5493t____t4643t__buf__unsafe_size=0;
  uint16_t __t5493t____t4643t__buf__unsafe_offset=0;
  uint16_t __t5493t____t4643t__buf__unsafe_align=0;
  uint64_t __t5493t____t4643t__pos=0;
  char* __t5493t__v__unsafe_ptr=0;
  uint64_t __t5493t__v__pos=0;
  uint64_t __t5493t__v__length=0;
  char* __t5494t__unsafe_ptr=0;
  uint64_t __t5494t__pos=0;
  uint64_t __t5494t__length=0;
  char* __t5495t____t4643t__buf__unsafe_ptr=0;
  uint64_t __t5495t____t4643t__buf__unsafe_size=0;
  uint16_t __t5495t____t4643t__buf__unsafe_offset=0;
  uint16_t __t5495t____t4643t__buf__unsafe_align=0;
  uint64_t __t5495t____t4643t__pos=0;
  char* __t5495t__v__unsafe_ptr=0;
  uint64_t __t5495t__v__pos=0;
  uint64_t __t5495t__v__length=0;
  double __t5497t__=0;
  char* __t5498t__unsafe_ptr=0;
  uint64_t __t5498t__pos=0;
  uint64_t __t5498t__length=0;
  double __t5499t=0;
  char __t5500t__=0;
  double __t5503t__=0;
  double err=0;
  uint64_t __t5504t__=0;
  double __t5505t__=0;
  double __t5506t__=0;
  char __t5507t__=0;
  char* __t5508t____t4643t__buf__unsafe_ptr=0;
  uint64_t __t5508t____t4643t__buf__unsafe_size=0;
  uint16_t __t5508t____t4643t__buf__unsafe_offset=0;
  uint16_t __t5508t____t4643t__buf__unsafe_align=0;
  uint64_t __t5508t____t4643t__pos=0;
  char* __t5508t__v__unsafe_ptr=0;
  uint64_t __t5508t__v__pos=0;
  uint64_t __t5508t__v__length=0;
  char* __t5509t__unsafe_ptr=0;
  uint64_t __t5509t__pos=0;
  uint64_t __t5509t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2353t(p0__unsafe_ptr,p0__pos,p0__length,&__t5468t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t5468t__;
  float____t_buffer____buffer__t5423t(&__t5469t__unsafe_ptr,&__t5469t__unsafe_size,&__t5469t__unsafe_offset,&__t5469t__unsafe_align);
  __t5470t=100;
  len__t1759t(p0__unsafe_ptr,p0__pos,p0__length,&__t5471t__);
  mul__t199t(__t5470t,__t5471t__,&__t5472t__);
  __t_errcode=alloc__t532t(&__t5469t__unsafe_ptr,&__t5469t__unsafe_size,&__t5469t__unsafe_offset,&__t5469t__unsafe_align,__t5472t__,&__t5473t__unsafe_ptr,&__t5473t__unsafe_size,&__t5473t__unsafe_offset,&__t5473t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t5473t__unsafe_ptr,&__t5473t__unsafe_size,&__t5473t__unsafe_offset,&__t5473t__unsafe_align,&__t5475t__buf__unsafe_ptr,&__t5475t__buf__unsafe_size,&__t5475t__buf__unsafe_offset,&__t5475t__buf__unsafe_align,&__t5475t__pos);
  FLOATS__buf__unsafe_ptr=__t5475t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t5475t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t5475t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t5475t__buf__unsafe_align;
  FLOATS__pos=__t5475t__pos;
  __t5476t=1.0;
  sub__t326t(__t5476t,config__alpha,&__t5477t__);
  __t_errcode=div__t201t(__t5477t__,p0norm,&__t5478t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2023t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t5478t__,&__t5479t__unsafe_ptr,&__t5479t__pos,&__t5479t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__unsafe_ptr=__t5479t__unsafe_ptr;
  normalized_p0__pos=__t5479t__pos;
  normalized_p0__length=__t5479t__length;
  __t_errcode=copy__t4617t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5480t__unsafe_ptr,&__t5480t__pos,&__t5480t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5481t__unsafe_ptr=__t5480t__unsafe_ptr;
  __t5481t__pos=__t5480t__pos;
  __t5481t__length=__t5480t__length;
  prev_p__unsafe_ptr=__t5481t__unsafe_ptr;
  prev_p__pos=__t5481t__pos;
  prev_p__length=__t5481t__length;
  __t_errcode=copy__t4617t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5482t__unsafe_ptr,&__t5482t__pos,&__t5482t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5483t__unsafe_ptr=__t5482t__unsafe_ptr;
  __t5483t__pos=__t5482t__pos;
  __t5483t__length=__t5482t__length;
  p__unsafe_ptr=__t5483t__unsafe_ptr;
  p__pos=__t5483t__pos;
  p__length=__t5483t__length;
  len__t1759t(p__unsafe_ptr,p__pos,p__length,&__t5484t__);
  __t_errcode=vec__t1714t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,__t5484t__,&__t5485t__unsafe_ptr,&__t5485t__pos,&__t5485t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5486t__unsafe_ptr=__t5485t__unsafe_ptr;
  __t5486t__pos=__t5485t__pos;
  __t5486t__length=__t5485t__length;
  empty__unsafe_ptr=__t5486t__unsafe_ptr;
  empty__pos=__t5486t__pos;
  empty__length=__t5486t__length;
  __t5487t=0;
  while(1){
  __t_complain=get__t5418t(config__alpha,config__max_iters,config__tol,__t5487t,&__t5489t__);
  __t5488t=__t_complain;
  alpha=__t5489t__;
  __t5488t=__t5488t==0;
  __t5487t=__t5487t+1;
  if(!__t5488t){
  break;
  }
  iter=__t5487t;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5145t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t5490t__unsafe_ptr,&__t5490t__pos,&__t5490t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4642t(&__t5490t__unsafe_ptr,__t5490t__pos,__t5490t__length,&__t5491t____t4643t__buf__unsafe_ptr,&__t5491t____t4643t__buf__unsafe_size,&__t5491t____t4643t__buf__unsafe_offset,&__t5491t____t4643t__buf__unsafe_align,&__t5491t____t4643t__pos,&__t5491t__v__unsafe_ptr,&__t5491t__v__pos,&__t5491t__v__length);
  __t_errcode=mul__t2023t(&__t5491t____t4643t__buf__unsafe_ptr,&__t5491t____t4643t__buf__unsafe_size,&__t5491t____t4643t__buf__unsafe_offset,&__t5491t____t4643t__buf__unsafe_align,&__t5491t____t4643t__pos,__t5491t__v__unsafe_ptr,__t5491t__v__pos,__t5491t__v__length,alpha,&__t5492t__unsafe_ptr,&__t5492t__pos,&__t5492t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5492t__unsafe_ptr;
  p__pos=__t5492t__pos;
  p__length=__t5492t__length;
  self__t4642t(&p__unsafe_ptr,p__pos,p__length,&__t5493t____t4643t__buf__unsafe_ptr,&__t5493t____t4643t__buf__unsafe_size,&__t5493t____t4643t__buf__unsafe_offset,&__t5493t____t4643t__buf__unsafe_align,&__t5493t____t4643t__pos,&__t5493t__v__unsafe_ptr,&__t5493t__v__pos,&__t5493t__v__length);
  __t_errcode=add__t1805t(&__t5493t____t4643t__buf__unsafe_ptr,&__t5493t____t4643t__buf__unsafe_size,&__t5493t____t4643t__buf__unsafe_offset,&__t5493t____t4643t__buf__unsafe_align,&__t5493t____t4643t__pos,__t5493t__v__unsafe_ptr,__t5493t__v__pos,__t5493t__v__length,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5494t__unsafe_ptr,&__t5494t__pos,&__t5494t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5494t__unsafe_ptr;
  p__pos=__t5494t__pos;
  p__length=__t5494t__length;
  self__t4642t(&p__unsafe_ptr,p__pos,p__length,&__t5495t____t4643t__buf__unsafe_ptr,&__t5495t____t4643t__buf__unsafe_size,&__t5495t____t4643t__buf__unsafe_offset,&__t5495t____t4643t__buf__unsafe_align,&__t5495t____t4643t__pos,&__t5495t__v__unsafe_ptr,&__t5495t__v__pos,&__t5495t__v__length);
  __t_errcode=reduce__t2353t(p__unsafe_ptr,p__pos,p__length,&__t5497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2230t(&__t5495t____t4643t__buf__unsafe_ptr,&__t5495t____t4643t__buf__unsafe_size,&__t5495t____t4643t__buf__unsafe_offset,&__t5495t____t4643t__buf__unsafe_align,&__t5495t____t4643t__pos,__t5495t__v__unsafe_ptr,__t5495t__v__pos,__t5495t__v__length,__t5497t__,&__t5498t__unsafe_ptr,&__t5498t__pos,&__t5498t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5498t__unsafe_ptr;
  p__pos=__t5498t__pos;
  p__length=__t5498t__length;
  __t5499t=0.0;
  neq__t122t(config__tol,__t5499t,&__t5500t__);
  if(__t5500t__){
  __t_errcode=reduce__t3616t(prev_p__unsafe_ptr,prev_p__pos,prev_p__length,p__unsafe_ptr,p__pos,p__length,&__t5503t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t5503t__;
  len__t1759t(p__unsafe_ptr,p__pos,p__length,&__t5504t__);
  float__t415t(__t5504t__,&__t5505t__);
  mul__t177t(config__tol,__t5505t__,&__t5506t__);
  lt__t230t(err,__t5506t__,&__t5507t__);
  if(__t5507t__){
  break;
  }
  }
  empty__unsafe_ptr=prev_p__unsafe_ptr;
  empty__pos=prev_p__pos;
  empty__length=prev_p__length;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  FLOATS__pos=empty__pos;
  }
  self__t4642t(&p__unsafe_ptr,p__pos,p__length,&__t5508t____t4643t__buf__unsafe_ptr,&__t5508t____t4643t__buf__unsafe_size,&__t5508t____t4643t__buf__unsafe_offset,&__t5508t____t4643t__buf__unsafe_align,&__t5508t____t4643t__pos,&__t5508t__v__unsafe_ptr,&__t5508t__v__pos,&__t5508t__v__length);
  __t_errcode=mul__t2023t(&__t5508t____t4643t__buf__unsafe_ptr,&__t5508t____t4643t__buf__unsafe_size,&__t5508t____t4643t__buf__unsafe_offset,&__t5508t____t4643t__buf__unsafe_align,&__t5508t____t4643t__pos,__t5508t__v__unsafe_ptr,__t5508t__v__pos,__t5508t__v__length,p0norm,&__t5509t__unsafe_ptr,&__t5509t__pos,&__t5509t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5509t__unsafe_ptr;
  p__pos=__t5509t__pos;
  p__length=__t5509t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5817t=p__unsafe_ptr;
  *__t5818t=p__pos;
  *__t5819t=p__length;
  *__t5820t=err;
  *__t5821t=iter;
  
  __t_skip_returns:exists__t447t(__t5473t__unsafe_ptr,&__t5474t____t534t__);
  if(__t5474t____t534t__){
  free__t503t(&__t5473t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5822t, const char** __t5823t) {
  goto __t_return;
  __t_return:
  *__t5822t=value;
  *__t5823t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5824t, const char** __t5825t) {
  goto __t_return;
  __t_return:
  *__t5824t=value;
  *__t5825t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5826t) {
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
  *__t5826t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4589t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4590t=0;
  const char* endl=0;
  const char* __t4591t__value=0;
  const char* __t4591t____t374t=0;
  uint64_t __t4593t=0;
  uint64_t __t4594t__from=0;
  uint64_t __t4594t__to=0;
  char __t4595t=0;
  uint64_t __t4596t__=0;
  uint64_t i=0;
  char* __t4597t__=0;
  double __t4598t__value=0;
  double __t4599t__value=0;
  const char* __t4599t____t374t=0;
  uint64_t __t4601t=0;
  uint64_t __t4602t__=0;
  char __t4603t__=0;
  const char* __t4604t__value=0;
  const char* __t4604t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4570t,&__t4591t__value,&__t4591t____t374t);
  print__t378t(__t4591t__value,__t4591t____t374t);
  range__t471t(v__length,&__t4594t__from,&__t4594t__to);
  __t4593t=0;
  while(1){
  __t_complain=get__t478t(__t4594t__from,__t4594t__to,__t4593t,&__t4596t__);
  __t4595t=__t_complain;
  i=__t4596t__;
  __t4595t=__t4595t==0;
  __t4593t=__t4593t+1;
  if(!__t4595t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t4597t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4597t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4598t__value,__t4597t__,8);
  nn__t375t(__t4598t__value,&__t4599t__value,&__t4599t____t374t);
  print__t383t(__t4599t__value,__t4599t____t374t);
  __t4601t=1;
  __t_errcode=sub__t352t(v__length,__t4601t,&__t4602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4602t__,&__t4603t__);
  if(__t4603t__){
  nn__t373t(__t4584t,&__t4604t__value,&__t4604t____t374t);
  print__t378t(__t4604t__value,__t4604t____t374t);
  }
  }
  print__t378t(__t4587t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5563t() {
  char* __t5601t=0;
  uint64_t __t5602t=0;
  uint64_t __t5603t=0;
  uint64_t __t5604t=0;
  char* m__t5601t=0;
  uint64_t m__t5602t=0;
  uint64_t m__t5603t=0;
  uint64_t m__t5604t=0;
  double __t5606t=0;
  double __t5611t=0;
  double __t5612t=0;
  char* __t5613t__unsafe_ptr=0;
  uint64_t __t5613t__unsafe_size=0;
  uint16_t __t5613t__unsafe_offset=0;
  uint16_t __t5613t__unsafe_align=0;
  uint64_t __t5614t=0;
  char* __t5615t__unsafe_ptr=0;
  uint64_t __t5615t__unsafe_size=0;
  uint16_t __t5615t__unsafe_offset=0;
  uint16_t __t5615t__unsafe_align=0;
  char __t5616t____t534t__=0;
  char* __t5617t__unsafe_ptr=0;
  uint64_t __t5617t__pos=0;
  uint64_t __t5617t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t5618t=0;
  double __t5619t__alpha=0;
  uint64_t __t5619t__max_iters=0;
  double __t5619t__tol=0;
  char* __t5620t__p__unsafe_ptr=0;
  uint64_t __t5620t__p__pos=0;
  uint64_t __t5620t__p__length=0;
  double __t5620t__err=0;
  uint64_t __t5620t__iter=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t5622t__value=0;
  const char* __t5622t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t5601t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t5602t=3;
  __t5603t=3;
  __t5604t=3;
  m__t5601t=__t5601t;
  m__t5602t=__t5602t;
  m__t5603t=__t5603t;
  m__t5604t=__t5604t;
  new__t648t();
  __t5606t=1.0;
  __t5611t=2.0;
  __t5612t=3.0;
  float____buffer__t5609t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align);
  __t5614t=3;
  __t_errcode=alloc__t532t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align,__t5614t,&__t5615t__unsafe_ptr,&__t5615t__unsafe_size,&__t5615t__unsafe_offset,&__t5615t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5613t__unsafe_ptr,&__t5606t,8);
  memcpy(__t5613t__unsafe_ptr+8,&__t5611t,8);
  memcpy(__t5613t__unsafe_ptr+16,&__t5612t,8);
  __t_errcode=vec__t1683t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align,&__t5617t__unsafe_ptr,&__t5617t__pos,&__t5617t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5617t__unsafe_ptr;
  p0__pos=__t5617t__pos;
  p0__length=__t5617t__length;
  __t5618t=0.9;
  ppr__t5408t(__t5618t,&__t5619t__alpha,&__t5619t__max_iters,&__t5619t__tol);
  __t_errcode=filter__t5466t(__t5619t__alpha,__t5619t__max_iters,__t5619t__tol,m__t5601t,m__t5602t,m__t5603t,m__t5604t,p0__unsafe_ptr,p0__pos,p0__length,&__t5620t__p__unsafe_ptr,&__t5620t__p__pos,&__t5620t__p__length,&__t5620t__err,&__t5620t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t5620t__p__unsafe_ptr;
  result__p__pos=__t5620t__p__pos;
  result__p__length=__t5620t__p__length;
  result__err=__t5620t__err;
  result__iter=__t5620t__iter;
  nn__t373t(__t5621t,&__t5622t__value,&__t5622t____t374t);
  print__t378t(__t5622t__value,__t5622t____t374t);
  print__t393t(result__iter);
  __t_errcode=print__t4589t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5615t__unsafe_ptr,&__t5616t____t534t__);
  if(__t5616t____t534t__){
  free__t503t(&__t5615t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5563t();return 0;}