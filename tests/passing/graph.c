#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4538t="[ ";
const char* const __t374t="";
const char* const __t4552t="  ";
const char* const __t4555t=" ]";
const char* const __t382t="\n";
const char* const __t5659t="iterations: ";
static const char* __t_all_errcodes[48] = {"noerr",
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
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t673t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5647t(char** __t5664t, uint64_t* __t5665t, uint16_t* __t5666t, uint16_t* __t5667t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5664t=unsafe_ptr;
  *__t5665t=unsafe_size;
  *__t5666t=unsafe_offset;
  *__t5667t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5668t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5668t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5669t) {
  char* allocated=*__t5669t;
  if(allocated){
  free(allocated);
  }
  *__t5669t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5670t) {
  int value=0;
  *__t5670t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5671t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5671t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5672t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5672t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5673t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5673t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5674t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5674t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5675t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5675t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5676t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5676t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5677t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5677t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5678t) {
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
  *__t5678t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5679t, uint64_t* __t5680t, uint16_t* __t5681t, uint16_t* __t5682t, uint64_t size, char** __t5683t, uint64_t* __t5684t, uint16_t* __t5685t, uint16_t* __t5686t) {
  char* buffer__unsafe_ptr=*__t5679t;
  uint64_t buffer__unsafe_size=*__t5680t;
  uint16_t buffer__unsafe_offset=*__t5681t;
  uint16_t buffer__unsafe_align=*__t5682t;
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
  *__t5679t=buffer__unsafe_ptr;
  *__t5680t=buffer__unsafe_size;
  *__t5681t=buffer__unsafe_offset;
  *__t5682t=buffer__unsafe_align;
  *__t5683t=buffer__unsafe_ptr;
  *__t5684t=buffer__unsafe_size;
  *__t5685t=buffer__unsafe_offset;
  *__t5686t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5687t) {
  goto __t_return;
  __t_return:
  *__t5687t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1583t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5688t, uint64_t* __t5689t, uint64_t* __t5690t) {
  char* __t1585t__unsafe_ptr=0;
  uint64_t __t1585t__pos=0;
  uint64_t __t1585t__length=0;
  __t1585t__unsafe_ptr=unsafe_ptr;
  __t1585t__pos=pos;
  __t1585t__length=length;
  goto __t_return;
  __t_return:
  *__t5688t=__t1585t__unsafe_ptr;
  *__t5689t=__t1585t__pos;
  *__t5690t=__t1585t__length;
}

static inline __attribute__((always_inline)) int vec__t1635t(char** __t5691t, uint64_t* __t5692t, uint16_t* __t5693t, uint16_t* __t5694t, char** __t5695t, uint64_t* __t5696t, uint64_t* __t5697t) {
  char* buf__unsafe_ptr=*__t5691t;
  uint64_t buf__unsafe_size=*__t5692t;
  uint16_t buf__unsafe_offset=*__t5693t;
  uint16_t buf__unsafe_align=*__t5694t;
  uint64_t __t1636t__=0;
  uint64_t __t1637t=0;
  char __t1638t__=0;
  uint64_t __t1639t__=0;
  uint64_t __t1640t=0;
  char __t1641t__=0;
  uint64_t __t1642t=0;
  uint64_t __t1643t__=0;
  char* __t1644t__unsafe_ptr=0;
  uint64_t __t1644t__pos=0;
  uint64_t __t1644t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1636t__);
  __t1637t=8;
  neq__t144t(__t1636t__,__t1637t,&__t1638t__);
  if(__t1638t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1639t__);
  __t1640t=0;
  neq__t144t(__t1639t__,__t1640t,&__t1641t__);
  if(__t1641t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1642t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1643t__);
  vec__t1583t(buf__unsafe_ptr,__t1642t,__t1643t__,&__t1644t__unsafe_ptr,&__t1644t__pos,&__t1644t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5691t=buf__unsafe_ptr;
  *__t5692t=buf__unsafe_size;
  *__t5693t=buf__unsafe_offset;
  *__t5694t=buf__unsafe_align;
  *__t5695t=__t1644t__unsafe_ptr;
  *__t5696t=__t1644t__pos;
  *__t5697t=__t1644t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ppr__t5446t(double alpha, double* __t5698t, uint64_t* __t5699t, double* __t5700t) {
  int __t5447t=0;
  int __t5448t=0;
  double __t5449t=0;
  double tol=0;
  uint64_t __t5450t=0;
  uint64_t max_iters=0;
  int __t5451t=0;
  int __t5452t=0;
  __t5449t=0.00000001;
  tol=__t5449t;
  __t5450t=100;
  max_iters=__t5450t;
  goto __t_return;
  __t_return:
  *__t5698t=alpha;
  *__t5699t=max_iters;
  *__t5700t=tol;
}

static inline __attribute__((always_inline)) void len__t1727t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5701t) {
  goto __t_return;
  __t_return:
  *__t5701t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5702t, uint64_t* __t5703t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5702t=from;
  *__t5703t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5704t, uint64_t* __t5705t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5704t=__t473t__from;
  *__t5705t=__t473t__to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5706t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5706t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5707t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5707t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5708t) {
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
  *__t5708t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5709t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5709t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5710t) {
  *__t5710t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5711t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5711t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t1734t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5712t) {
  char __t1735t__=0;
  uint64_t __t1736t=0;
  uint64_t __t1737t__=0;
  uint64_t __t1738t__=0;
  char* __t1739t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1735t__);
  if(__t1735t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1736t=8;
  add__t175t(i,v__pos,&__t1737t__);
  mul__t199t(__t1736t,__t1737t__,&__t1738t__);
  add__t505t(v__unsafe_ptr,__t1738t__,&__t1739t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5712t=__t1739t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5713t) {
  goto __t_return;
  __t_return:
  *__t5713t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5714t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5714t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5715t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5715t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5716t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5716t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5717t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5717t=z;
}

static inline __attribute__((always_inline)) void abs__t1555t(double x, double* __t5718t) {
  int64_t c=0;
  uint64_t __t1556t__value=0;
  uint64_t __t1557t__value=0;
  uint64_t __t1558t__value=0;
  double __t1559t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1556t__value);
  bits__t450t(c,&__t1557t__value);
  band__t464t(__t1556t__value,__t1557t__value,&__t1558t__value);
  float__t457t(__t1558t__value,&__t1559t__);
  goto __t_return;
  __t_return:
  *__t5718t=__t1559t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5719t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5719t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5720t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5720t=z;
}

int reduce__t2321t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5721t) {
  int __t2322t=0;
  double __t2323t=0;
  double __t2324t=0;
  double ret=0;
  int __t2325t=0;
  int __t2326t=0;
  int __t2327t=0;
  int __t2328t__=0;
  uint64_t __t2329t=0;
  uint64_t __t2330t__=0;
  uint64_t __t2331t__from=0;
  uint64_t __t2331t__to=0;
  char __t2332t=0;
  uint64_t __t2333t__=0;
  uint64_t i=0;
  char* __t2334t__=0;
  double __t2335t__value=0;
  double __t2336t=0;
  double value=0;
  int __t2337t=0;
  int __t2338t=0;
  int __t2339t=0;
  char __t2340t=0;
  char __t2341t=0;
  double __t2342t__=0;
  int __t2343t=0;
  int __t2344t=0;
  double __t2345t__=0;
  int __t2346t=0;
  int __t2347t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2323t=0.0;
  __t2324t=__t2323t;
  ret=__t2324t;
  not__t37t(__t2327t,&__t2328t__);
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t2330t__);
  range__t471t(__t2330t__,&__t2331t__from,&__t2331t__to);
  __t2329t=0;
  while(1){
  __t_complain=get__t478t(__t2331t__from,__t2331t__to,__t2329t,&__t2333t__);
  __t2332t=__t_complain;
  i=__t2333t__;
  __t2332t=__t2332t==0;
  __t2329t=__t2329t+1;
  if(!__t2332t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t2334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2334t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2335t__value,__t2334t__,8);
  __t2336t=__t2335t__value;
  value=__t2336t;
  __t2341t=1;
  if(__t2341t){
  __t2340t=1;
  }
  if(__t2340t){
  abs__t1555t(value,&__t2342t__);
  value=__t2342t__;
  }
  add__t153t(ret,value,&__t2345t__);
  ret=__t2345t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5721t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5461t(char** __t5722t, uint64_t* __t5723t, uint16_t* __t5724t, uint16_t* __t5725t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5722t=unsafe_ptr;
  *__t5723t=unsafe_size;
  *__t5724t=unsafe_offset;
  *__t5725t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t677t(char** __t5726t, uint64_t* __t5727t, uint16_t* __t5728t, uint16_t* __t5729t, char** __t5730t, uint64_t* __t5731t, uint16_t* __t5732t, uint16_t* __t5733t, uint64_t* __t5734t) {
  char* buf__unsafe_ptr=*__t5726t;
  uint64_t buf__unsafe_size=*__t5727t;
  uint16_t buf__unsafe_offset=*__t5728t;
  uint16_t buf__unsafe_align=*__t5729t;
  uint64_t __t678t=0;
  uint64_t __t679t=0;
  uint64_t pos=0;
  __t678t=0;
  __t679t=__t678t;
  pos=__t679t;
  goto __t_return;
  __t_return:
  *__t5726t=buf__unsafe_ptr;
  *__t5727t=buf__unsafe_size;
  *__t5728t=buf__unsafe_offset;
  *__t5729t=buf__unsafe_align;
  *__t5730t=buf__unsafe_ptr;
  *__t5731t=buf__unsafe_size;
  *__t5732t=buf__unsafe_offset;
  *__t5733t=buf__unsafe_align;
  *__t5734t=pos;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5735t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5735t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5736t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5736t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5737t) {
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
  *__t5737t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5738t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5738t=z;
}

static inline __attribute__((always_inline)) int vec__t1655t(char** __t5739t, uint64_t* __t5740t, uint16_t* __t5741t, uint16_t* __t5742t, uint64_t* __t5743t, uint64_t length, char** __t5744t, uint64_t* __t5745t, uint64_t* __t5746t) {
  char* FLOATS__buf__unsafe_ptr=*__t5739t;
  uint64_t FLOATS__buf__unsafe_size=*__t5740t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5741t;
  uint16_t FLOATS__buf__unsafe_align=*__t5742t;
  uint64_t FLOATS__pos=*__t5743t;
  uint64_t __t1656t__=0;
  uint64_t __t1657t=0;
  char __t1658t__=0;
  uint64_t __t1659t__=0;
  uint64_t __t1660t=0;
  char __t1661t__=0;
  uint64_t __t1662t__=0;
  uint64_t __t1663t__=0;
  char __t1664t__=0;
  uint64_t start=0;
  uint64_t __t1665t__=0;
  int __t1666t=0;
  char* __t1667t__unsafe_ptr=0;
  uint64_t __t1667t__pos=0;
  uint64_t __t1667t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1656t__);
  __t1657t=8;
  neq__t144t(__t1656t__,__t1657t,&__t1658t__);
  if(__t1658t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1659t__);
  __t1660t=0;
  neq__t144t(__t1659t__,__t1660t,&__t1661t__);
  if(__t1661t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t1662t__);
  len__t647t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1663t__);
  gt__t276t(__t1662t__,__t1663t__,&__t1664t__);
  if(__t1664t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t1665t__);
  FLOATS__pos=__t1665t__;
  vec__t1583t(FLOATS__buf__unsafe_ptr,start,length,&__t1667t__unsafe_ptr,&__t1667t__pos,&__t1667t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5739t=FLOATS__buf__unsafe_ptr;
  *__t5740t=FLOATS__buf__unsafe_size;
  *__t5741t=FLOATS__buf__unsafe_offset;
  *__t5742t=FLOATS__buf__unsafe_align;
  *__t5743t=FLOATS__pos;
  *__t5744t=__t1667t__unsafe_ptr;
  *__t5745t=__t1667t__pos;
  *__t5746t=__t1667t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1728t(char** __t5747t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5748t) {
  char* v__unsafe_ptr=*__t5747t;
  char __t1729t__=0;
  uint64_t __t1730t=0;
  uint64_t __t1731t__=0;
  uint64_t __t1732t__=0;
  char* __t1733t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1729t__);
  if(__t1729t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1730t=8;
  add__t175t(i,v__pos,&__t1731t__);
  mul__t199t(__t1730t,__t1731t__,&__t1732t__);
  add__t505t(v__unsafe_ptr,__t1732t__,&__t1733t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5747t=v__unsafe_ptr;
  *__t5748t=__t1733t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1740t(double number, uint64_t i, double* __t5749t) {
  goto __t_return;
  __t_return:
  *__t5749t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5750t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5750t=z;
}

int mul__t1991t(char** __t5751t, uint64_t* __t5752t, uint16_t* __t5753t, uint16_t* __t5754t, uint64_t* __t5755t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5756t, uint64_t* __t5757t, uint64_t* __t5758t) {
  char* FLOATS__buf__unsafe_ptr=*__t5751t;
  uint64_t FLOATS__buf__unsafe_size=*__t5752t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5753t;
  uint16_t FLOATS__buf__unsafe_align=*__t5754t;
  uint64_t FLOATS__pos=*__t5755t;
  int __t1992t=0;
  char* __t1994t__unsafe_ptr=0;
  uint64_t __t1994t__pos=0;
  uint64_t __t1994t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1995t=0;
  uint64_t __t1996t__from=0;
  uint64_t __t1996t__to=0;
  char __t1997t=0;
  uint64_t __t1998t__=0;
  uint64_t i=0;
  char* __t1999t__=0;
  char* __t2000t__=0;
  double __t2001t__value=0;
  double __t2002t__=0;
  double __t2003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1655t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1994t__unsafe_ptr,&__t1994t__pos,&__t1994t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1994t__unsafe_ptr;
  v__pos=__t1994t__pos;
  v__length=__t1994t__length;
  range__t471t(v__length,&__t1996t__from,&__t1996t__to);
  __t1995t=0;
  while(1){
  __t_complain=get__t478t(__t1996t__from,__t1996t__to,__t1995t,&__t1998t__);
  __t1997t=__t_complain;
  i=__t1998t__;
  __t1997t=__t1997t==0;
  __t1995t=__t1995t+1;
  if(!__t1997t){
  break;
  }
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,i,&__t1999t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2000t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2000t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2001t__value,__t2000t__,8);
  at__t1740t(v2,i,&__t2002t__);
  mul__t177t(__t2001t__value,__t2002t__,&__t2003t__);
  if(!__t1999t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1999t__,&__t2003t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5751t=FLOATS__buf__unsafe_ptr;
  *__t5752t=FLOATS__buf__unsafe_size;
  *__t5753t=FLOATS__buf__unsafe_offset;
  *__t5754t=FLOATS__buf__unsafe_align;
  *__t5755t=FLOATS__pos;
  *__t5756t=v__unsafe_ptr;
  *__t5757t=v__pos;
  *__t5758t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1668t(char** __t5759t, uint64_t* __t5760t, uint16_t* __t5761t, uint16_t* __t5762t, uint64_t* __t5763t, uint64_t length, char** __t5764t, uint64_t* __t5765t, uint64_t* __t5766t) {
  char* FLOATS__buf__unsafe_ptr=*__t5759t;
  uint64_t FLOATS__buf__unsafe_size=*__t5760t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5761t;
  uint16_t FLOATS__buf__unsafe_align=*__t5762t;
  uint64_t FLOATS__pos=*__t5763t;
  uint64_t __t1669t__=0;
  uint64_t __t1670t=0;
  char __t1671t__=0;
  uint64_t __t1672t__=0;
  uint64_t __t1673t=0;
  char __t1674t__=0;
  uint64_t __t1675t__=0;
  uint64_t __t1676t__=0;
  char __t1677t__=0;
  uint64_t start=0;
  uint64_t __t1678t__=0;
  int __t1679t=0;
  uint64_t __t1680t=0;
  uint64_t __t1681t__=0;
  uint64_t __t1682t=0;
  uint64_t __t1683t__=0;
  uint64_t __t1684t__=0;
  char* __t1686t__unsafe_ptr=0;
  uint64_t __t1686t__pos=0;
  uint64_t __t1686t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1669t__);
  __t1670t=8;
  neq__t144t(__t1669t__,__t1670t,&__t1671t__);
  if(__t1671t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1672t__);
  __t1673t=0;
  neq__t144t(__t1672t__,__t1673t,&__t1674t__);
  if(__t1674t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t1675t__);
  len__t647t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1676t__);
  gt__t276t(__t1675t__,__t1676t__,&__t1677t__);
  if(__t1677t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t1678t__);
  FLOATS__pos=__t1678t__;
  __t1680t=8;
  mul__t199t(__t1680t,start,&__t1681t__);
  __t1682t=8;
  add__t175t(start,length,&__t1683t__);
  mul__t199t(__t1682t,__t1683t__,&__t1684t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1681t__,__t1684t__);
  vec__t1583t(FLOATS__buf__unsafe_ptr,start,length,&__t1686t__unsafe_ptr,&__t1686t__pos,&__t1686t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5759t=FLOATS__buf__unsafe_ptr;
  *__t5760t=FLOATS__buf__unsafe_size;
  *__t5761t=FLOATS__buf__unsafe_offset;
  *__t5762t=FLOATS__buf__unsafe_align;
  *__t5763t=FLOATS__pos;
  *__t5764t=__t1686t__unsafe_ptr;
  *__t5765t=__t1686t__pos;
  *__t5766t=__t1686t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4585t(char** __t5767t, uint64_t* __t5768t, uint16_t* __t5769t, uint16_t* __t5770t, uint64_t* __t5771t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5772t, uint64_t* __t5773t, uint64_t* __t5774t) {
  char* FLOATS__buf__unsafe_ptr=*__t5767t;
  uint64_t FLOATS__buf__unsafe_size=*__t5768t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5769t;
  uint16_t FLOATS__buf__unsafe_align=*__t5770t;
  uint64_t FLOATS__pos=*__t5771t;
  char* __t4586t__unsafe_ptr=0;
  uint64_t __t4586t__pos=0;
  uint64_t __t4586t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4587t=0;
  uint64_t __t4588t__from=0;
  uint64_t __t4588t__to=0;
  char __t4589t=0;
  uint64_t __t4590t__=0;
  uint64_t i=0;
  char* __t4591t__=0;
  char* __t4592t__=0;
  double __t4593t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1668t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4586t__unsafe_ptr,&__t4586t__pos,&__t4586t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4586t__unsafe_ptr;
  result__pos=__t4586t__pos;
  result__length=__t4586t__length;
  range__t471t(v__length,&__t4588t__from,&__t4588t__to);
  __t4587t=0;
  while(1){
  __t_complain=get__t478t(__t4588t__from,__t4588t__to,__t4587t,&__t4590t__);
  __t4589t=__t_complain;
  i=__t4590t__;
  __t4589t=__t4589t==0;
  __t4587t=__t4587t+1;
  if(!__t4589t){
  break;
  }
  __t_errcode=mutget__t1728t(&result__unsafe_ptr,result__pos,result__length,i,&__t4591t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t4592t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4592t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4593t__value,__t4592t__,8);
  if(!__t4591t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4591t__,&__t4593t__value,8);
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

static inline __attribute__((always_inline)) int get__t5456t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t5775t) {
  char __t5457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t5457t__);
  if(__t5457t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5775t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5158t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t5776t) {
  char __t5159t__=0;
  uint64_t __t5160t=0;
  uint64_t __t5161t__=0;
  char* __t5162t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5159t__);
  if(__t5159t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t5160t=24;
  mul__t199t(k,__t5160t,&__t5161t__);
  add__t505t(m__unsafe_ptr,__t5161t__,&__t5162t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5776t=__t5162t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5183t(char** __t5777t, uint64_t* __t5778t, uint16_t* __t5779t, uint16_t* __t5780t, uint64_t* __t5781t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5782t, uint64_t* __t5783t, uint64_t* __t5784t) {
  char* FLOATS__buf__unsafe_ptr=*__t5777t;
  uint64_t FLOATS__buf__unsafe_size=*__t5778t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5779t;
  uint16_t FLOATS__buf__unsafe_align=*__t5780t;
  uint64_t FLOATS__pos=*__t5781t;
  char __t5184t__=0;
  char* __t5185t__unsafe_ptr=0;
  uint64_t __t5185t__pos=0;
  uint64_t __t5185t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5186t=0;
  char __t5187t=0;
  char* __t5188t__=0;
  uint64_t __t5189t__row=0;
  uint64_t __t5189t__col=0;
  double __t5189t__value=0;
  uint64_t entry__row=0;
  uint64_t entry__col=0;
  double entry__value=0;
  char* __t5190t__=0;
  char* __t5191t__=0;
  double __t5192t__value=0;
  char* __t5193t__=0;
  double __t5194t__value=0;
  double __t5195t__=0;
  double __t5196t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5184t__);
  if(__t5184t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1668t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5185t__unsafe_ptr,&__t5185t__pos,&__t5185t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5185t__unsafe_ptr;
  result__pos=__t5185t__pos;
  result__length=__t5185t__length;
  __t5186t=0;
  while(1){
  __t_complain=get__t5158t(m__unsafe_ptr,m__rows,m__cols,m__nnz,__t5186t,&__t5188t__);
  __t5187t=__t_complain;
  if(!__t5188t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5189t__row,__t5188t__,8);
  memcpy(&__t5189t__col,__t5188t__+8,8);
  memcpy(&__t5189t__value,__t5188t__+16,8);
  }
  entry__row=__t5189t__row;
  entry__col=__t5189t__col;
  entry__value=__t5189t__value;
  __t5187t=__t5187t==0;
  __t5186t=__t5186t+1;
  if(!__t5187t){
  break;
  }
  __t_errcode=mutget__t1728t(&result__unsafe_ptr,result__pos,result__length,entry__row,&__t5190t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(result__unsafe_ptr,result__pos,result__length,entry__row,&__t5191t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5191t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5192t__value,__t5191t__,8);
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,entry__col,&__t5193t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5193t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5194t__value,__t5193t__,8);
  mul__t177t(entry__value,__t5194t__value,&__t5195t__);
  add__t153t(__t5192t__value,__t5195t__,&__t5196t__);
  if(!__t5190t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5190t__,&__t5196t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5777t=FLOATS__buf__unsafe_ptr;
  *__t5778t=FLOATS__buf__unsafe_size;
  *__t5779t=FLOATS__buf__unsafe_offset;
  *__t5780t=FLOATS__buf__unsafe_align;
  *__t5781t=FLOATS__pos;
  *__t5782t=result__unsafe_ptr;
  *__t5783t=result__pos;
  *__t5784t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1593t(char** __t5785t, uint64_t* __t5786t, uint16_t* __t5787t, uint16_t* __t5788t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5785t=unsafe_ptr;
  *__t5786t=unsafe_size;
  *__t5787t=unsafe_offset;
  *__t5788t=unsafe_align;
}

static inline __attribute__((always_inline)) void storage__t4603t(char** __t5789t, uint64_t v__pos, uint64_t v__length, char** __t5790t, uint64_t* __t5791t, uint16_t* __t5792t, uint16_t* __t5793t, uint64_t* __t5794t) {
  char* v__unsafe_ptr=*__t5789t;
  char* __t4604t__unsafe_ptr=0;
  uint64_t __t4604t__unsafe_size=0;
  uint16_t __t4604t__unsafe_offset=0;
  uint16_t __t4604t__unsafe_align=0;
  char* __t4605t__unsafe_ptr=0;
  uint64_t __t4605t__unsafe_size=0;
  uint16_t __t4605t__unsafe_offset=0;
  uint16_t __t4605t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4606t__=0;
  uint64_t __t4607t__=0;
  uint64_t __t4608t=0;
  uint64_t pos=0;
  float____t_buffer____buffer__t1593t(&__t4604t__unsafe_ptr,&__t4604t__unsafe_size,&__t4604t__unsafe_offset,&__t4604t__unsafe_align);
  __t4605t__unsafe_ptr=__t4604t__unsafe_ptr;
  __t4605t__unsafe_size=__t4604t__unsafe_size;
  __t4605t__unsafe_offset=__t4604t__unsafe_offset;
  __t4605t__unsafe_align=__t4604t__unsafe_align;
  buf__unsafe_ptr=__t4605t__unsafe_ptr;
  buf__unsafe_size=__t4605t__unsafe_size;
  buf__unsafe_offset=__t4605t__unsafe_offset;
  buf__unsafe_align=__t4605t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t4606t__);
  add__t175t(v__pos,__t4606t__,&__t4607t__);
  buf__unsafe_size=__t4607t__;
  __t4608t=v__pos;
  pos=__t4608t;
  goto __t_return;
  __t_return:
  *__t5789t=v__unsafe_ptr;
  *__t5790t=buf__unsafe_ptr;
  *__t5791t=buf__unsafe_size;
  *__t5792t=buf__unsafe_offset;
  *__t5793t=buf__unsafe_align;
  *__t5794t=pos;
}

static inline __attribute__((always_inline)) void self__t4609t(char** __t5795t, uint64_t v__pos, uint64_t v__length, char** __t5796t, uint64_t* __t5797t, uint16_t* __t5798t, uint16_t* __t5799t, uint64_t* __t5800t, char** __t5801t, uint64_t* __t5802t, uint64_t* __t5803t) {
  char* v__unsafe_ptr=*__t5795t;
  char* __t4610t__buf__unsafe_ptr=0;
  uint64_t __t4610t__buf__unsafe_size=0;
  uint16_t __t4610t__buf__unsafe_offset=0;
  uint16_t __t4610t__buf__unsafe_align=0;
  uint64_t __t4610t__pos=0;
  storage__t4603t(&v__unsafe_ptr,v__pos,v__length,&__t4610t__buf__unsafe_ptr,&__t4610t__buf__unsafe_size,&__t4610t__buf__unsafe_offset,&__t4610t__buf__unsafe_align,&__t4610t__pos);
  goto __t_return;
  __t_return:
  *__t5795t=v__unsafe_ptr;
  *__t5796t=__t4610t__buf__unsafe_ptr;
  *__t5797t=__t4610t__buf__unsafe_size;
  *__t5798t=__t4610t__buf__unsafe_offset;
  *__t5799t=__t4610t__buf__unsafe_align;
  *__t5800t=__t4610t__pos;
  *__t5801t=v__unsafe_ptr;
  *__t5802t=v__pos;
  *__t5803t=v__length;
}

static inline __attribute__((always_inline)) int at__t1741t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5804t) {
  char* __t1742t__=0;
  double __t1743t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t1742t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1742t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1743t__value,__t1742t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5804t=__t1743t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1773t(char** __t5805t, uint64_t* __t5806t, uint16_t* __t5807t, uint16_t* __t5808t, uint64_t* __t5809t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5810t, uint64_t* __t5811t, uint64_t* __t5812t) {
  char* FLOATS__buf__unsafe_ptr=*__t5805t;
  uint64_t FLOATS__buf__unsafe_size=*__t5806t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5807t;
  uint16_t FLOATS__buf__unsafe_align=*__t5808t;
  uint64_t FLOATS__pos=*__t5809t;
  int __t1774t=0;
  char __t1775t__=0;
  char* __t1777t__unsafe_ptr=0;
  uint64_t __t1777t__pos=0;
  uint64_t __t1777t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1778t=0;
  uint64_t __t1779t__from=0;
  uint64_t __t1779t__to=0;
  char __t1780t=0;
  uint64_t __t1781t__=0;
  uint64_t i=0;
  char* __t1782t__=0;
  char* __t1783t__=0;
  double __t1784t__value=0;
  double __t1785t__=0;
  double __t1786t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1775t__);
  if(__t1775t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1655t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1777t__unsafe_ptr,&__t1777t__pos,&__t1777t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1777t__unsafe_ptr;
  v__pos=__t1777t__pos;
  v__length=__t1777t__length;
  range__t471t(v1__length,&__t1779t__from,&__t1779t__to);
  __t1778t=0;
  while(1){
  __t_complain=get__t478t(__t1779t__from,__t1779t__to,__t1778t,&__t1781t__);
  __t1780t=__t_complain;
  i=__t1781t__;
  __t1780t=__t1780t==0;
  __t1778t=__t1778t+1;
  if(!__t1780t){
  break;
  }
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,i,&__t1782t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1783t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1783t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1784t__value,__t1783t__,8);
  __t_errcode=at__t1741t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1785t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1784t__value,__t1785t__,&__t1786t__);
  if(!__t1782t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1782t__,&__t1786t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5805t=FLOATS__buf__unsafe_ptr;
  *__t5806t=FLOATS__buf__unsafe_size;
  *__t5807t=FLOATS__buf__unsafe_offset;
  *__t5808t=FLOATS__buf__unsafe_align;
  *__t5809t=FLOATS__pos;
  *__t5810t=v__unsafe_ptr;
  *__t5811t=v__pos;
  *__t5812t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2198t(char** __t5813t, uint64_t* __t5814t, uint16_t* __t5815t, uint16_t* __t5816t, uint64_t* __t5817t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5818t, uint64_t* __t5819t, uint64_t* __t5820t) {
  char* FLOATS__buf__unsafe_ptr=*__t5813t;
  uint64_t FLOATS__buf__unsafe_size=*__t5814t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5815t;
  uint16_t FLOATS__buf__unsafe_align=*__t5816t;
  uint64_t FLOATS__pos=*__t5817t;
  int __t2199t=0;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__pos=0;
  uint64_t __t2201t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2202t=0;
  uint64_t __t2203t__from=0;
  uint64_t __t2203t__to=0;
  char __t2204t=0;
  uint64_t __t2205t__=0;
  uint64_t i=0;
  char* __t2206t__=0;
  char* __t2207t__=0;
  double __t2208t__value=0;
  double __t2209t__=0;
  double __t2210t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1655t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2201t__unsafe_ptr,&__t2201t__pos,&__t2201t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2201t__unsafe_ptr;
  v__pos=__t2201t__pos;
  v__length=__t2201t__length;
  p1=v1__unsafe_ptr;
  range__t471t(v__length,&__t2203t__from,&__t2203t__to);
  __t2202t=0;
  while(1){
  __t_complain=get__t478t(__t2203t__from,__t2203t__to,__t2202t,&__t2205t__);
  __t2204t=__t_complain;
  i=__t2205t__;
  __t2204t=__t2204t==0;
  __t2202t=__t2202t+1;
  if(!__t2204t){
  break;
  }
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,i,&__t2206t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2207t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2207t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2208t__value,__t2207t__,8);
  at__t1740t(v2,i,&__t2209t__);
  __t_errcode=div__t201t(__t2208t__value,__t2209t__,&__t2210t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2206t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2206t__,&__t2210t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5813t=FLOATS__buf__unsafe_ptr;
  *__t5814t=FLOATS__buf__unsafe_size;
  *__t5815t=FLOATS__buf__unsafe_offset;
  *__t5816t=FLOATS__buf__unsafe_align;
  *__t5817t=FLOATS__pos;
  *__t5818t=v__unsafe_ptr;
  *__t5819t=v__pos;
  *__t5820t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t5821t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5821t=z;
}

int reduce__t3584t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t5822t) {
  int __t3585t=0;
  double __t3586t=0;
  double __t3587t=0;
  double ret=0;
  int __t3588t=0;
  int __t3589t=0;
  uint64_t __t3590t=0;
  uint64_t __t3591t__=0;
  uint64_t __t3592t__from=0;
  uint64_t __t3592t__to=0;
  char __t3593t=0;
  uint64_t __t3594t__=0;
  uint64_t i=0;
  char* __t3595t__=0;
  double __t3596t__value=0;
  double __t3597t=0;
  double value=0;
  char __t3598t=0;
  char __t3599t=0;
  char* __t3600t__=0;
  double __t3601t__value=0;
  double __t3602t__=0;
  int __t3603t=0;
  int __t3604t=0;
  char __t3605t=0;
  char __t3606t=0;
  double __t3607t__=0;
  int __t3608t=0;
  int __t3609t=0;
  double __t3610t__=0;
  int __t3611t=0;
  int __t3612t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3586t=0.0;
  __t3587t=__t3586t;
  ret=__t3587t;
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t3591t__);
  range__t471t(__t3591t__,&__t3592t__from,&__t3592t__to);
  __t3590t=0;
  while(1){
  __t_complain=get__t478t(__t3592t__from,__t3592t__to,__t3590t,&__t3594t__);
  __t3593t=__t_complain;
  i=__t3594t__;
  __t3593t=__t3593t==0;
  __t3590t=__t3590t+1;
  if(!__t3593t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t3595t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3595t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3596t__value,__t3595t__,8);
  __t3597t=__t3596t__value;
  value=__t3597t;
  __t3599t=1;
  if(__t3599t){
  __t3598t=1;
  }
  if(__t3598t){
  __t_errcode=get__t1734t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t3600t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3600t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3601t__value,__t3600t__,8);
  sub__t326t(value,__t3601t__value,&__t3602t__);
  value=__t3602t__;
  }
  __t3606t=1;
  if(__t3606t){
  __t3605t=1;
  }
  if(__t3605t){
  abs__t1555t(value,&__t3607t__);
  value=__t3607t__;
  }
  add__t153t(ret,value,&__t3610t__);
  ret=__t3610t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5822t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5823t) {
  int value=0;
  *__t5823t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5824t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5824t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5825t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5825t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t5826t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5826t=z;
}

static inline __attribute__((always_inline)) int filter__t5504t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t5827t, uint64_t* __t5828t, uint64_t* __t5829t, double* __t5830t, uint64_t* __t5831t) {
  double __t5506t__=0;
  double p0norm=0;
  char* __t5507t__unsafe_ptr=0;
  uint64_t __t5507t__unsafe_size=0;
  uint16_t __t5507t__unsafe_offset=0;
  uint16_t __t5507t__unsafe_align=0;
  uint64_t __t5508t=0;
  uint64_t __t5509t__=0;
  uint64_t __t5510t__=0;
  char* __t5511t__unsafe_ptr=0;
  uint64_t __t5511t__unsafe_size=0;
  uint16_t __t5511t__unsafe_offset=0;
  uint16_t __t5511t__unsafe_align=0;
  char __t5512t____t534t__=0;
  char* __t5513t__buf__unsafe_ptr=0;
  uint64_t __t5513t__buf__unsafe_size=0;
  uint16_t __t5513t__buf__unsafe_offset=0;
  uint16_t __t5513t__buf__unsafe_align=0;
  uint64_t __t5513t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t5514t=0;
  double __t5515t__=0;
  double __t5516t__=0;
  char* __t5517t__unsafe_ptr=0;
  uint64_t __t5517t__pos=0;
  uint64_t __t5517t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t5518t__unsafe_ptr=0;
  uint64_t __t5518t__pos=0;
  uint64_t __t5518t__length=0;
  char* __t5519t__unsafe_ptr=0;
  uint64_t __t5519t__pos=0;
  uint64_t __t5519t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t5520t__unsafe_ptr=0;
  uint64_t __t5520t__pos=0;
  uint64_t __t5520t__length=0;
  char* __t5521t__unsafe_ptr=0;
  uint64_t __t5521t__pos=0;
  uint64_t __t5521t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t5522t__=0;
  char* __t5523t__unsafe_ptr=0;
  uint64_t __t5523t__pos=0;
  uint64_t __t5523t__length=0;
  char* __t5524t__unsafe_ptr=0;
  uint64_t __t5524t__pos=0;
  uint64_t __t5524t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t5525t=0;
  char __t5526t=0;
  double __t5527t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t5528t__unsafe_ptr=0;
  uint64_t __t5528t__pos=0;
  uint64_t __t5528t__length=0;
  char* __t5529t____t4610t__buf__unsafe_ptr=0;
  uint64_t __t5529t____t4610t__buf__unsafe_size=0;
  uint16_t __t5529t____t4610t__buf__unsafe_offset=0;
  uint16_t __t5529t____t4610t__buf__unsafe_align=0;
  uint64_t __t5529t____t4610t__pos=0;
  char* __t5529t__v__unsafe_ptr=0;
  uint64_t __t5529t__v__pos=0;
  uint64_t __t5529t__v__length=0;
  char* __t5530t__unsafe_ptr=0;
  uint64_t __t5530t__pos=0;
  uint64_t __t5530t__length=0;
  char* __t5531t____t4610t__buf__unsafe_ptr=0;
  uint64_t __t5531t____t4610t__buf__unsafe_size=0;
  uint16_t __t5531t____t4610t__buf__unsafe_offset=0;
  uint16_t __t5531t____t4610t__buf__unsafe_align=0;
  uint64_t __t5531t____t4610t__pos=0;
  char* __t5531t__v__unsafe_ptr=0;
  uint64_t __t5531t__v__pos=0;
  uint64_t __t5531t__v__length=0;
  char* __t5532t__unsafe_ptr=0;
  uint64_t __t5532t__pos=0;
  uint64_t __t5532t__length=0;
  char* __t5533t____t4610t__buf__unsafe_ptr=0;
  uint64_t __t5533t____t4610t__buf__unsafe_size=0;
  uint16_t __t5533t____t4610t__buf__unsafe_offset=0;
  uint16_t __t5533t____t4610t__buf__unsafe_align=0;
  uint64_t __t5533t____t4610t__pos=0;
  char* __t5533t__v__unsafe_ptr=0;
  uint64_t __t5533t__v__pos=0;
  uint64_t __t5533t__v__length=0;
  double __t5535t__=0;
  char* __t5536t__unsafe_ptr=0;
  uint64_t __t5536t__pos=0;
  uint64_t __t5536t__length=0;
  double __t5537t=0;
  char __t5538t__=0;
  double __t5541t__=0;
  double err=0;
  uint64_t __t5542t__=0;
  double __t5543t__=0;
  double __t5544t__=0;
  char __t5545t__=0;
  char* __t5546t____t4610t__buf__unsafe_ptr=0;
  uint64_t __t5546t____t4610t__buf__unsafe_size=0;
  uint16_t __t5546t____t4610t__buf__unsafe_offset=0;
  uint16_t __t5546t____t4610t__buf__unsafe_align=0;
  uint64_t __t5546t____t4610t__pos=0;
  char* __t5546t__v__unsafe_ptr=0;
  uint64_t __t5546t__v__pos=0;
  uint64_t __t5546t__v__length=0;
  char* __t5547t__unsafe_ptr=0;
  uint64_t __t5547t__pos=0;
  uint64_t __t5547t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2321t(p0__unsafe_ptr,p0__pos,p0__length,&__t5506t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t5506t__;
  float____t_buffer____buffer__t5461t(&__t5507t__unsafe_ptr,&__t5507t__unsafe_size,&__t5507t__unsafe_offset,&__t5507t__unsafe_align);
  __t5508t=100;
  len__t1727t(p0__unsafe_ptr,p0__pos,p0__length,&__t5509t__);
  mul__t199t(__t5508t,__t5509t__,&__t5510t__);
  __t_errcode=alloc__t532t(&__t5507t__unsafe_ptr,&__t5507t__unsafe_size,&__t5507t__unsafe_offset,&__t5507t__unsafe_align,__t5510t__,&__t5511t__unsafe_ptr,&__t5511t__unsafe_size,&__t5511t__unsafe_offset,&__t5511t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t677t(&__t5511t__unsafe_ptr,&__t5511t__unsafe_size,&__t5511t__unsafe_offset,&__t5511t__unsafe_align,&__t5513t__buf__unsafe_ptr,&__t5513t__buf__unsafe_size,&__t5513t__buf__unsafe_offset,&__t5513t__buf__unsafe_align,&__t5513t__pos);
  FLOATS__buf__unsafe_ptr=__t5513t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t5513t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t5513t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t5513t__buf__unsafe_align;
  FLOATS__pos=__t5513t__pos;
  __t5514t=1.0;
  sub__t326t(__t5514t,config__alpha,&__t5515t__);
  __t_errcode=div__t201t(__t5515t__,p0norm,&__t5516t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1991t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t5516t__,&__t5517t__unsafe_ptr,&__t5517t__pos,&__t5517t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__unsafe_ptr=__t5517t__unsafe_ptr;
  normalized_p0__pos=__t5517t__pos;
  normalized_p0__length=__t5517t__length;
  __t_errcode=copy__t4585t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5518t__unsafe_ptr,&__t5518t__pos,&__t5518t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5519t__unsafe_ptr=__t5518t__unsafe_ptr;
  __t5519t__pos=__t5518t__pos;
  __t5519t__length=__t5518t__length;
  prev_p__unsafe_ptr=__t5519t__unsafe_ptr;
  prev_p__pos=__t5519t__pos;
  prev_p__length=__t5519t__length;
  __t_errcode=copy__t4585t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5520t__unsafe_ptr,&__t5520t__pos,&__t5520t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5521t__unsafe_ptr=__t5520t__unsafe_ptr;
  __t5521t__pos=__t5520t__pos;
  __t5521t__length=__t5520t__length;
  p__unsafe_ptr=__t5521t__unsafe_ptr;
  p__pos=__t5521t__pos;
  p__length=__t5521t__length;
  len__t1727t(p__unsafe_ptr,p__pos,p__length,&__t5522t__);
  __t_errcode=vec__t1668t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,__t5522t__,&__t5523t__unsafe_ptr,&__t5523t__pos,&__t5523t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5524t__unsafe_ptr=__t5523t__unsafe_ptr;
  __t5524t__pos=__t5523t__pos;
  __t5524t__length=__t5523t__length;
  empty__unsafe_ptr=__t5524t__unsafe_ptr;
  empty__pos=__t5524t__pos;
  empty__length=__t5524t__length;
  __t5525t=0;
  while(1){
  __t_complain=get__t5456t(config__alpha,config__max_iters,config__tol,__t5525t,&__t5527t__);
  __t5526t=__t_complain;
  alpha=__t5527t__;
  __t5526t=__t5526t==0;
  __t5525t=__t5525t+1;
  if(!__t5526t){
  break;
  }
  iter=__t5525t;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5183t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t5528t__unsafe_ptr,&__t5528t__pos,&__t5528t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4609t(&__t5528t__unsafe_ptr,__t5528t__pos,__t5528t__length,&__t5529t____t4610t__buf__unsafe_ptr,&__t5529t____t4610t__buf__unsafe_size,&__t5529t____t4610t__buf__unsafe_offset,&__t5529t____t4610t__buf__unsafe_align,&__t5529t____t4610t__pos,&__t5529t__v__unsafe_ptr,&__t5529t__v__pos,&__t5529t__v__length);
  __t_errcode=mul__t1991t(&__t5529t____t4610t__buf__unsafe_ptr,&__t5529t____t4610t__buf__unsafe_size,&__t5529t____t4610t__buf__unsafe_offset,&__t5529t____t4610t__buf__unsafe_align,&__t5529t____t4610t__pos,__t5529t__v__unsafe_ptr,__t5529t__v__pos,__t5529t__v__length,alpha,&__t5530t__unsafe_ptr,&__t5530t__pos,&__t5530t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5530t__unsafe_ptr;
  p__pos=__t5530t__pos;
  p__length=__t5530t__length;
  self__t4609t(&p__unsafe_ptr,p__pos,p__length,&__t5531t____t4610t__buf__unsafe_ptr,&__t5531t____t4610t__buf__unsafe_size,&__t5531t____t4610t__buf__unsafe_offset,&__t5531t____t4610t__buf__unsafe_align,&__t5531t____t4610t__pos,&__t5531t__v__unsafe_ptr,&__t5531t__v__pos,&__t5531t__v__length);
  __t_errcode=add__t1773t(&__t5531t____t4610t__buf__unsafe_ptr,&__t5531t____t4610t__buf__unsafe_size,&__t5531t____t4610t__buf__unsafe_offset,&__t5531t____t4610t__buf__unsafe_align,&__t5531t____t4610t__pos,__t5531t__v__unsafe_ptr,__t5531t__v__pos,__t5531t__v__length,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5532t__unsafe_ptr,&__t5532t__pos,&__t5532t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5532t__unsafe_ptr;
  p__pos=__t5532t__pos;
  p__length=__t5532t__length;
  self__t4609t(&p__unsafe_ptr,p__pos,p__length,&__t5533t____t4610t__buf__unsafe_ptr,&__t5533t____t4610t__buf__unsafe_size,&__t5533t____t4610t__buf__unsafe_offset,&__t5533t____t4610t__buf__unsafe_align,&__t5533t____t4610t__pos,&__t5533t__v__unsafe_ptr,&__t5533t__v__pos,&__t5533t__v__length);
  __t_errcode=reduce__t2321t(p__unsafe_ptr,p__pos,p__length,&__t5535t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2198t(&__t5533t____t4610t__buf__unsafe_ptr,&__t5533t____t4610t__buf__unsafe_size,&__t5533t____t4610t__buf__unsafe_offset,&__t5533t____t4610t__buf__unsafe_align,&__t5533t____t4610t__pos,__t5533t__v__unsafe_ptr,__t5533t__v__pos,__t5533t__v__length,__t5535t__,&__t5536t__unsafe_ptr,&__t5536t__pos,&__t5536t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5536t__unsafe_ptr;
  p__pos=__t5536t__pos;
  p__length=__t5536t__length;
  __t5537t=0.0;
  neq__t122t(config__tol,__t5537t,&__t5538t__);
  if(__t5538t__){
  __t_errcode=reduce__t3584t(prev_p__unsafe_ptr,prev_p__pos,prev_p__length,p__unsafe_ptr,p__pos,p__length,&__t5541t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t5541t__;
  len__t1727t(p__unsafe_ptr,p__pos,p__length,&__t5542t__);
  float__t415t(__t5542t__,&__t5543t__);
  mul__t177t(config__tol,__t5543t__,&__t5544t__);
  lt__t230t(err,__t5544t__,&__t5545t__);
  if(__t5545t__){
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
  self__t4609t(&p__unsafe_ptr,p__pos,p__length,&__t5546t____t4610t__buf__unsafe_ptr,&__t5546t____t4610t__buf__unsafe_size,&__t5546t____t4610t__buf__unsafe_offset,&__t5546t____t4610t__buf__unsafe_align,&__t5546t____t4610t__pos,&__t5546t__v__unsafe_ptr,&__t5546t__v__pos,&__t5546t__v__length);
  __t_errcode=mul__t1991t(&__t5546t____t4610t__buf__unsafe_ptr,&__t5546t____t4610t__buf__unsafe_size,&__t5546t____t4610t__buf__unsafe_offset,&__t5546t____t4610t__buf__unsafe_align,&__t5546t____t4610t__pos,__t5546t__v__unsafe_ptr,__t5546t__v__pos,__t5546t__v__length,p0norm,&__t5547t__unsafe_ptr,&__t5547t__pos,&__t5547t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5547t__unsafe_ptr;
  p__pos=__t5547t__pos;
  p__length=__t5547t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5827t=p__unsafe_ptr;
  *__t5828t=p__pos;
  *__t5829t=p__length;
  *__t5830t=err;
  *__t5831t=iter;
  
  __t_skip_returns:exists__t447t(__t5511t__unsafe_ptr,&__t5512t____t534t__);
  if(__t5512t____t534t__){
  free__t503t(&__t5511t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5832t, const char** __t5833t) {
  goto __t_return;
  __t_return:
  *__t5832t=value;
  *__t5833t=__t374t;
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

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5834t, const char** __t5835t) {
  goto __t_return;
  __t_return:
  *__t5834t=value;
  *__t5835t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5836t) {
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
  *__t5836t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4557t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4558t=0;
  const char* endl=0;
  const char* __t4559t__value=0;
  const char* __t4559t____t374t=0;
  uint64_t __t4561t=0;
  uint64_t __t4562t__from=0;
  uint64_t __t4562t__to=0;
  char __t4563t=0;
  uint64_t __t4564t__=0;
  uint64_t i=0;
  char* __t4565t__=0;
  double __t4566t__value=0;
  double __t4567t__value=0;
  const char* __t4567t____t374t=0;
  uint64_t __t4569t=0;
  uint64_t __t4570t__=0;
  char __t4571t__=0;
  const char* __t4572t__value=0;
  const char* __t4572t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4538t,&__t4559t__value,&__t4559t____t374t);
  print__t378t(__t4559t__value,__t4559t____t374t);
  range__t471t(v__length,&__t4562t__from,&__t4562t__to);
  __t4561t=0;
  while(1){
  __t_complain=get__t478t(__t4562t__from,__t4562t__to,__t4561t,&__t4564t__);
  __t4563t=__t_complain;
  i=__t4564t__;
  __t4563t=__t4563t==0;
  __t4561t=__t4561t+1;
  if(!__t4563t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t4565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4565t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4566t__value,__t4565t__,8);
  nn__t375t(__t4566t__value,&__t4567t__value,&__t4567t____t374t);
  print__t383t(__t4567t__value,__t4567t____t374t);
  __t4569t=1;
  __t_errcode=sub__t352t(v__length,__t4569t,&__t4570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4570t__,&__t4571t__);
  if(__t4571t__){
  nn__t373t(__t4552t,&__t4572t__value,&__t4572t____t374t);
  print__t378t(__t4572t__value,__t4572t____t374t);
  }
  }
  print__t378t(__t4555t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5601t() {
  char* __t5639t=0;
  uint64_t __t5640t=0;
  uint64_t __t5641t=0;
  uint64_t __t5642t=0;
  char* m__t5639t=0;
  uint64_t m__t5640t=0;
  uint64_t m__t5641t=0;
  uint64_t m__t5642t=0;
  double __t5644t=0;
  double __t5649t=0;
  double __t5650t=0;
  char* __t5651t__unsafe_ptr=0;
  uint64_t __t5651t__unsafe_size=0;
  uint16_t __t5651t__unsafe_offset=0;
  uint16_t __t5651t__unsafe_align=0;
  uint64_t __t5652t=0;
  char* __t5653t__unsafe_ptr=0;
  uint64_t __t5653t__unsafe_size=0;
  uint16_t __t5653t__unsafe_offset=0;
  uint16_t __t5653t__unsafe_align=0;
  char __t5654t____t534t__=0;
  char* __t5655t__unsafe_ptr=0;
  uint64_t __t5655t__pos=0;
  uint64_t __t5655t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t5656t=0;
  double __t5657t__alpha=0;
  uint64_t __t5657t__max_iters=0;
  double __t5657t__tol=0;
  char* __t5658t__p__unsafe_ptr=0;
  uint64_t __t5658t__p__pos=0;
  uint64_t __t5658t__p__length=0;
  double __t5658t__err=0;
  uint64_t __t5658t__iter=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t5660t__value=0;
  const char* __t5660t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t5639t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t5640t=3;
  __t5641t=3;
  __t5642t=3;
  m__t5639t=__t5639t;
  m__t5640t=__t5640t;
  m__t5641t=__t5641t;
  m__t5642t=__t5642t;
  new__t673t();
  __t5644t=1.0;
  __t5649t=2.0;
  __t5650t=3.0;
  float____buffer__t5647t(&__t5651t__unsafe_ptr,&__t5651t__unsafe_size,&__t5651t__unsafe_offset,&__t5651t__unsafe_align);
  __t5652t=3;
  __t_errcode=alloc__t532t(&__t5651t__unsafe_ptr,&__t5651t__unsafe_size,&__t5651t__unsafe_offset,&__t5651t__unsafe_align,__t5652t,&__t5653t__unsafe_ptr,&__t5653t__unsafe_size,&__t5653t__unsafe_offset,&__t5653t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5651t__unsafe_ptr,&__t5644t,8);
  memcpy(__t5651t__unsafe_ptr+8,&__t5649t,8);
  memcpy(__t5651t__unsafe_ptr+16,&__t5650t,8);
  __t_errcode=vec__t1635t(&__t5651t__unsafe_ptr,&__t5651t__unsafe_size,&__t5651t__unsafe_offset,&__t5651t__unsafe_align,&__t5655t__unsafe_ptr,&__t5655t__pos,&__t5655t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5655t__unsafe_ptr;
  p0__pos=__t5655t__pos;
  p0__length=__t5655t__length;
  __t5656t=0.9;
  ppr__t5446t(__t5656t,&__t5657t__alpha,&__t5657t__max_iters,&__t5657t__tol);
  __t_errcode=filter__t5504t(__t5657t__alpha,__t5657t__max_iters,__t5657t__tol,m__t5639t,m__t5640t,m__t5641t,m__t5642t,p0__unsafe_ptr,p0__pos,p0__length,&__t5658t__p__unsafe_ptr,&__t5658t__p__pos,&__t5658t__p__length,&__t5658t__err,&__t5658t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t5658t__p__unsafe_ptr;
  result__p__pos=__t5658t__p__pos;
  result__p__length=__t5658t__p__length;
  result__err=__t5658t__err;
  result__iter=__t5658t__iter;
  nn__t373t(__t5659t,&__t5660t__value,&__t5660t____t374t);
  print__t378t(__t5660t__value,__t5660t____t374t);
  print__t393t(result__iter);
  __t_errcode=print__t4557t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5653t__unsafe_ptr,&__t5654t____t534t__);
  if(__t5654t____t534t__){
  free__t503t(&__t5653t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5601t();return 0;}