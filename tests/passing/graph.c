#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t374t="";
const char* const __t4548t="  ";
const char* const __t4551t=" ]";
const char* const __t5655t="iterations: ";
const char* const __t4534t="[ ";
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

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5643t(char** __t5660t, uint64_t* __t5661t, uint16_t* __t5662t, uint16_t* __t5663t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5660t=unsafe_ptr;
  *__t5661t=unsafe_size;
  *__t5662t=unsafe_offset;
  *__t5663t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5664t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5664t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5665t) {
  char* allocated=*__t5665t;
  if(allocated){
  free(allocated);
  }
  *__t5665t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5666t) {
  int value=0;
  *__t5666t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5667t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5667t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5668t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5668t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5669t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5669t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5670t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5670t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5671t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5671t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5672t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5672t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5673t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5673t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5674t) {
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
  *__t5674t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5675t, uint64_t* __t5676t, uint16_t* __t5677t, uint16_t* __t5678t, uint64_t size, char** __t5679t, uint64_t* __t5680t, uint16_t* __t5681t, uint16_t* __t5682t) {
  char* buffer__unsafe_ptr=*__t5675t;
  uint64_t buffer__unsafe_size=*__t5676t;
  uint16_t buffer__unsafe_offset=*__t5677t;
  uint16_t buffer__unsafe_align=*__t5678t;
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
  *__t5675t=buffer__unsafe_ptr;
  *__t5676t=buffer__unsafe_size;
  *__t5677t=buffer__unsafe_offset;
  *__t5678t=buffer__unsafe_align;
  *__t5679t=buffer__unsafe_ptr;
  *__t5680t=buffer__unsafe_size;
  *__t5681t=buffer__unsafe_offset;
  *__t5682t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5683t) {
  goto __t_return;
  __t_return:
  *__t5683t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1579t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5684t, uint64_t* __t5685t, uint64_t* __t5686t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__pos=0;
  uint64_t __t1581t__length=0;
  __t1581t__unsafe_ptr=unsafe_ptr;
  __t1581t__pos=pos;
  __t1581t__length=length;
  goto __t_return;
  __t_return:
  *__t5684t=__t1581t__unsafe_ptr;
  *__t5685t=__t1581t__pos;
  *__t5686t=__t1581t__length;
}

static inline __attribute__((always_inline)) int vec__t1631t(char** __t5687t, uint64_t* __t5688t, uint16_t* __t5689t, uint16_t* __t5690t, char** __t5691t, uint64_t* __t5692t, uint64_t* __t5693t) {
  char* buf__unsafe_ptr=*__t5687t;
  uint64_t buf__unsafe_size=*__t5688t;
  uint16_t buf__unsafe_offset=*__t5689t;
  uint16_t buf__unsafe_align=*__t5690t;
  uint64_t __t1632t__=0;
  uint64_t __t1633t=0;
  char __t1634t__=0;
  uint64_t __t1635t__=0;
  uint64_t __t1636t=0;
  char __t1637t__=0;
  uint64_t __t1638t=0;
  uint64_t __t1639t__=0;
  char* __t1640t__unsafe_ptr=0;
  uint64_t __t1640t__pos=0;
  uint64_t __t1640t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1632t__);
  __t1633t=8;
  neq__t144t(__t1632t__,__t1633t,&__t1634t__);
  if(__t1634t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1635t__);
  __t1636t=0;
  neq__t144t(__t1635t__,__t1636t,&__t1637t__);
  if(__t1637t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1638t=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1639t__);
  vec__t1579t(buf__unsafe_ptr,__t1638t,__t1639t__,&__t1640t__unsafe_ptr,&__t1640t__pos,&__t1640t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5687t=buf__unsafe_ptr;
  *__t5688t=buf__unsafe_size;
  *__t5689t=buf__unsafe_offset;
  *__t5690t=buf__unsafe_align;
  *__t5691t=__t1640t__unsafe_ptr;
  *__t5692t=__t1640t__pos;
  *__t5693t=__t1640t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ppr__t5442t(double alpha, double* __t5694t, uint64_t* __t5695t, double* __t5696t) {
  int __t5443t=0;
  int __t5444t=0;
  double __t5445t=0;
  double tol=0;
  uint64_t __t5446t=0;
  uint64_t max_iters=0;
  int __t5447t=0;
  int __t5448t=0;
  __t5445t=0.00000001;
  tol=__t5445t;
  __t5446t=100;
  max_iters=__t5446t;
  goto __t_return;
  __t_return:
  *__t5694t=alpha;
  *__t5695t=max_iters;
  *__t5696t=tol;
}

static inline __attribute__((always_inline)) void len__t1723t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5697t) {
  goto __t_return;
  __t_return:
  *__t5697t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5698t, uint64_t* __t5699t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5698t=from;
  *__t5699t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5700t, uint64_t* __t5701t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5700t=__t473t__from;
  *__t5701t=__t473t__to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5702t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5702t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5703t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5703t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5704t) {
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
  *__t5704t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5705t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5705t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5706t) {
  *__t5706t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5707t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5707t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t1730t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5708t) {
  char __t1731t__=0;
  uint64_t __t1732t=0;
  uint64_t __t1733t__=0;
  uint64_t __t1734t__=0;
  char* __t1735t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1731t__);
  if(__t1731t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1732t=8;
  add__t175t(i,v__pos,&__t1733t__);
  mul__t199t(__t1732t,__t1733t__,&__t1734t__);
  add__t505t(v__unsafe_ptr,__t1734t__,&__t1735t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5708t=__t1735t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5709t) {
  goto __t_return;
  __t_return:
  *__t5709t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5710t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5710t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5711t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5711t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5712t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5712t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5713t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5713t=z;
}

static inline __attribute__((always_inline)) void abs__t1551t(double x, double* __t5714t) {
  int64_t c=0;
  uint64_t __t1552t__value=0;
  uint64_t __t1553t__value=0;
  uint64_t __t1554t__value=0;
  double __t1555t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1552t__value);
  bits__t450t(c,&__t1553t__value);
  band__t464t(__t1552t__value,__t1553t__value,&__t1554t__value);
  float__t457t(__t1554t__value,&__t1555t__);
  goto __t_return;
  __t_return:
  *__t5714t=__t1555t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5715t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5715t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5716t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5716t=z;
}

int reduce__t2317t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5717t) {
  int __t2318t=0;
  double __t2319t=0;
  double __t2320t=0;
  double ret=0;
  int __t2321t=0;
  int __t2322t=0;
  int __t2323t=0;
  int __t2324t__=0;
  uint64_t __t2325t=0;
  uint64_t __t2326t__=0;
  uint64_t __t2327t__from=0;
  uint64_t __t2327t__to=0;
  char __t2328t=0;
  uint64_t __t2329t__=0;
  uint64_t i=0;
  char* __t2330t__=0;
  double __t2331t__value=0;
  double __t2332t=0;
  double value=0;
  int __t2333t=0;
  int __t2334t=0;
  int __t2335t=0;
  char __t2336t=0;
  char __t2337t=0;
  double __t2338t__=0;
  int __t2339t=0;
  int __t2340t=0;
  double __t2341t__=0;
  int __t2342t=0;
  int __t2343t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2319t=0.0;
  __t2320t=__t2319t;
  ret=__t2320t;
  not__t37t(__t2323t,&__t2324t__);
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t2326t__);
  range__t471t(__t2326t__,&__t2327t__from,&__t2327t__to);
  __t2325t=0;
  while(1){
  __t_complain=get__t478t(__t2327t__from,__t2327t__to,__t2325t,&__t2329t__);
  __t2328t=__t_complain;
  i=__t2329t__;
  __t2328t=__t2328t==0;
  __t2325t=__t2325t+1;
  if(!__t2328t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t2330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2330t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2331t__value,__t2330t__,8);
  __t2332t=__t2331t__value;
  value=__t2332t;
  __t2337t=1;
  if(__t2337t){
  __t2336t=1;
  }
  if(__t2336t){
  abs__t1551t(value,&__t2338t__);
  value=__t2338t__;
  }
  add__t153t(ret,value,&__t2341t__);
  ret=__t2341t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5717t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5457t(char** __t5718t, uint64_t* __t5719t, uint16_t* __t5720t, uint16_t* __t5721t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5718t=unsafe_ptr;
  *__t5719t=unsafe_size;
  *__t5720t=unsafe_offset;
  *__t5721t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t673t(char** __t5722t, uint64_t* __t5723t, uint16_t* __t5724t, uint16_t* __t5725t, char** __t5726t, uint64_t* __t5727t, uint16_t* __t5728t, uint16_t* __t5729t, uint64_t* __t5730t) {
  char* buf__unsafe_ptr=*__t5722t;
  uint64_t buf__unsafe_size=*__t5723t;
  uint16_t buf__unsafe_offset=*__t5724t;
  uint16_t buf__unsafe_align=*__t5725t;
  uint64_t __t674t=0;
  uint64_t __t675t=0;
  uint64_t pos=0;
  __t674t=0;
  __t675t=__t674t;
  pos=__t675t;
  goto __t_return;
  __t_return:
  *__t5722t=buf__unsafe_ptr;
  *__t5723t=buf__unsafe_size;
  *__t5724t=buf__unsafe_offset;
  *__t5725t=buf__unsafe_align;
  *__t5726t=buf__unsafe_ptr;
  *__t5727t=buf__unsafe_size;
  *__t5728t=buf__unsafe_offset;
  *__t5729t=buf__unsafe_align;
  *__t5730t=pos;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5731t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5731t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5732t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5732t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5733t) {
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
  *__t5733t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5734t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5734t=z;
}

static inline __attribute__((always_inline)) int vec__t1651t(char** __t5735t, uint64_t* __t5736t, uint16_t* __t5737t, uint16_t* __t5738t, uint64_t* __t5739t, uint64_t length, char** __t5740t, uint64_t* __t5741t, uint64_t* __t5742t) {
  char* FLOATS__buf__unsafe_ptr=*__t5735t;
  uint64_t FLOATS__buf__unsafe_size=*__t5736t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5737t;
  uint16_t FLOATS__buf__unsafe_align=*__t5738t;
  uint64_t FLOATS__pos=*__t5739t;
  uint64_t __t1652t__=0;
  uint64_t __t1653t=0;
  char __t1654t__=0;
  uint64_t __t1655t__=0;
  uint64_t __t1656t=0;
  char __t1657t__=0;
  uint64_t __t1658t__=0;
  uint64_t __t1659t__=0;
  char __t1660t__=0;
  uint64_t start=0;
  uint64_t __t1661t__=0;
  int __t1662t=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__pos=0;
  uint64_t __t1663t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1652t__);
  __t1653t=8;
  neq__t144t(__t1652t__,__t1653t,&__t1654t__);
  if(__t1654t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1655t__);
  __t1656t=0;
  neq__t144t(__t1655t__,__t1656t,&__t1657t__);
  if(__t1657t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t1658t__);
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1659t__);
  gt__t276t(__t1658t__,__t1659t__,&__t1660t__);
  if(__t1660t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t1661t__);
  FLOATS__pos=__t1661t__;
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1663t__unsafe_ptr,&__t1663t__pos,&__t1663t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5735t=FLOATS__buf__unsafe_ptr;
  *__t5736t=FLOATS__buf__unsafe_size;
  *__t5737t=FLOATS__buf__unsafe_offset;
  *__t5738t=FLOATS__buf__unsafe_align;
  *__t5739t=FLOATS__pos;
  *__t5740t=__t1663t__unsafe_ptr;
  *__t5741t=__t1663t__pos;
  *__t5742t=__t1663t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1724t(char** __t5743t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5744t) {
  char* v__unsafe_ptr=*__t5743t;
  char __t1725t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t__=0;
  char* __t1729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1725t__);
  if(__t1725t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1726t=8;
  add__t175t(i,v__pos,&__t1727t__);
  mul__t199t(__t1726t,__t1727t__,&__t1728t__);
  add__t505t(v__unsafe_ptr,__t1728t__,&__t1729t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5743t=v__unsafe_ptr;
  *__t5744t=__t1729t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1736t(double number, uint64_t i, double* __t5745t) {
  goto __t_return;
  __t_return:
  *__t5745t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5746t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5746t=z;
}

int mul__t1987t(char** __t5747t, uint64_t* __t5748t, uint16_t* __t5749t, uint16_t* __t5750t, uint64_t* __t5751t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5752t, uint64_t* __t5753t, uint64_t* __t5754t) {
  char* FLOATS__buf__unsafe_ptr=*__t5747t;
  uint64_t FLOATS__buf__unsafe_size=*__t5748t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5749t;
  uint16_t FLOATS__buf__unsafe_align=*__t5750t;
  uint64_t FLOATS__pos=*__t5751t;
  int __t1988t=0;
  char* __t1990t__unsafe_ptr=0;
  uint64_t __t1990t__pos=0;
  uint64_t __t1990t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1991t=0;
  uint64_t __t1992t__from=0;
  uint64_t __t1992t__to=0;
  char __t1993t=0;
  uint64_t __t1994t__=0;
  uint64_t i=0;
  char* __t1995t__=0;
  char* __t1996t__=0;
  double __t1997t__value=0;
  double __t1998t__=0;
  double __t1999t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1651t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1990t__unsafe_ptr,&__t1990t__pos,&__t1990t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1990t__unsafe_ptr;
  v__pos=__t1990t__pos;
  v__length=__t1990t__length;
  range__t471t(v__length,&__t1992t__from,&__t1992t__to);
  __t1991t=0;
  while(1){
  __t_complain=get__t478t(__t1992t__from,__t1992t__to,__t1991t,&__t1994t__);
  __t1993t=__t_complain;
  i=__t1994t__;
  __t1993t=__t1993t==0;
  __t1991t=__t1991t+1;
  if(!__t1993t){
  break;
  }
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,i,&__t1995t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1996t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1996t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1997t__value,__t1996t__,8);
  at__t1736t(v2,i,&__t1998t__);
  mul__t177t(__t1997t__value,__t1998t__,&__t1999t__);
  if(!__t1995t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1995t__,&__t1999t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5747t=FLOATS__buf__unsafe_ptr;
  *__t5748t=FLOATS__buf__unsafe_size;
  *__t5749t=FLOATS__buf__unsafe_offset;
  *__t5750t=FLOATS__buf__unsafe_align;
  *__t5751t=FLOATS__pos;
  *__t5752t=v__unsafe_ptr;
  *__t5753t=v__pos;
  *__t5754t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1664t(char** __t5755t, uint64_t* __t5756t, uint16_t* __t5757t, uint16_t* __t5758t, uint64_t* __t5759t, uint64_t length, char** __t5760t, uint64_t* __t5761t, uint64_t* __t5762t) {
  char* FLOATS__buf__unsafe_ptr=*__t5755t;
  uint64_t FLOATS__buf__unsafe_size=*__t5756t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5757t;
  uint16_t FLOATS__buf__unsafe_align=*__t5758t;
  uint64_t FLOATS__pos=*__t5759t;
  uint64_t __t1665t__=0;
  uint64_t __t1666t=0;
  char __t1667t__=0;
  uint64_t __t1668t__=0;
  uint64_t __t1669t=0;
  char __t1670t__=0;
  uint64_t __t1671t__=0;
  uint64_t __t1672t__=0;
  char __t1673t__=0;
  uint64_t start=0;
  uint64_t __t1674t__=0;
  int __t1675t=0;
  uint64_t __t1676t=0;
  uint64_t __t1677t__=0;
  uint64_t __t1678t=0;
  uint64_t __t1679t__=0;
  uint64_t __t1680t__=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__pos=0;
  uint64_t __t1682t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1665t__);
  __t1666t=8;
  neq__t144t(__t1665t__,__t1666t,&__t1667t__);
  if(__t1667t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1668t__);
  __t1669t=0;
  neq__t144t(__t1668t__,__t1669t,&__t1670t__);
  if(__t1670t__){
  __t_errcode=36;
  goto __t_failure;
  }
  add__t175t(FLOATS__pos,length,&__t1671t__);
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1672t__);
  gt__t276t(__t1671t__,__t1672t__,&__t1673t__);
  if(__t1673t__){
  __t_errcode=37;
  goto __t_failure;
  }
  start=FLOATS__pos;
  add__t175t(FLOATS__pos,length,&__t1674t__);
  FLOATS__pos=__t1674t__;
  __t1676t=8;
  mul__t199t(__t1676t,start,&__t1677t__);
  __t1678t=8;
  add__t175t(start,length,&__t1679t__);
  mul__t199t(__t1678t,__t1679t__,&__t1680t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1677t__,__t1680t__);
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1682t__unsafe_ptr,&__t1682t__pos,&__t1682t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5755t=FLOATS__buf__unsafe_ptr;
  *__t5756t=FLOATS__buf__unsafe_size;
  *__t5757t=FLOATS__buf__unsafe_offset;
  *__t5758t=FLOATS__buf__unsafe_align;
  *__t5759t=FLOATS__pos;
  *__t5760t=__t1682t__unsafe_ptr;
  *__t5761t=__t1682t__pos;
  *__t5762t=__t1682t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4581t(char** __t5763t, uint64_t* __t5764t, uint16_t* __t5765t, uint16_t* __t5766t, uint64_t* __t5767t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5768t, uint64_t* __t5769t, uint64_t* __t5770t) {
  char* FLOATS__buf__unsafe_ptr=*__t5763t;
  uint64_t FLOATS__buf__unsafe_size=*__t5764t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5765t;
  uint16_t FLOATS__buf__unsafe_align=*__t5766t;
  uint64_t FLOATS__pos=*__t5767t;
  char* __t4582t__unsafe_ptr=0;
  uint64_t __t4582t__pos=0;
  uint64_t __t4582t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4583t=0;
  uint64_t __t4584t__from=0;
  uint64_t __t4584t__to=0;
  char __t4585t=0;
  uint64_t __t4586t__=0;
  uint64_t i=0;
  char* __t4587t__=0;
  char* __t4588t__=0;
  double __t4589t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1664t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4582t__unsafe_ptr,&__t4582t__pos,&__t4582t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4582t__unsafe_ptr;
  result__pos=__t4582t__pos;
  result__length=__t4582t__length;
  range__t471t(v__length,&__t4584t__from,&__t4584t__to);
  __t4583t=0;
  while(1){
  __t_complain=get__t478t(__t4584t__from,__t4584t__to,__t4583t,&__t4586t__);
  __t4585t=__t_complain;
  i=__t4586t__;
  __t4585t=__t4585t==0;
  __t4583t=__t4583t+1;
  if(!__t4585t){
  break;
  }
  __t_errcode=mutget__t1724t(&result__unsafe_ptr,result__pos,result__length,i,&__t4587t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t4588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4589t__value,__t4588t__,8);
  if(!__t4587t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4587t__,&__t4589t__value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5763t=FLOATS__buf__unsafe_ptr;
  *__t5764t=FLOATS__buf__unsafe_size;
  *__t5765t=FLOATS__buf__unsafe_offset;
  *__t5766t=FLOATS__buf__unsafe_align;
  *__t5767t=FLOATS__pos;
  *__t5768t=result__unsafe_ptr;
  *__t5769t=result__pos;
  *__t5770t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5452t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t5771t) {
  char __t5453t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t5453t__);
  if(__t5453t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5771t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5154t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t5772t) {
  char __t5155t__=0;
  uint64_t __t5156t=0;
  uint64_t __t5157t__=0;
  char* __t5158t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5155t__);
  if(__t5155t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t5156t=24;
  mul__t199t(k,__t5156t,&__t5157t__);
  add__t505t(m__unsafe_ptr,__t5157t__,&__t5158t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5772t=__t5158t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5179t(char** __t5773t, uint64_t* __t5774t, uint16_t* __t5775t, uint16_t* __t5776t, uint64_t* __t5777t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5778t, uint64_t* __t5779t, uint64_t* __t5780t) {
  char* FLOATS__buf__unsafe_ptr=*__t5773t;
  uint64_t FLOATS__buf__unsafe_size=*__t5774t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5775t;
  uint16_t FLOATS__buf__unsafe_align=*__t5776t;
  uint64_t FLOATS__pos=*__t5777t;
  char __t5180t__=0;
  char* __t5181t__unsafe_ptr=0;
  uint64_t __t5181t__pos=0;
  uint64_t __t5181t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5182t=0;
  char __t5183t=0;
  char* __t5184t__=0;
  uint64_t __t5185t__row=0;
  uint64_t __t5185t__col=0;
  double __t5185t__value=0;
  uint64_t entry__row=0;
  uint64_t entry__col=0;
  double entry__value=0;
  char* __t5186t__=0;
  char* __t5187t__=0;
  double __t5188t__value=0;
  char* __t5189t__=0;
  double __t5190t__value=0;
  double __t5191t__=0;
  double __t5192t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5180t__);
  if(__t5180t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1664t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5181t__unsafe_ptr,&__t5181t__pos,&__t5181t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5181t__unsafe_ptr;
  result__pos=__t5181t__pos;
  result__length=__t5181t__length;
  __t5182t=0;
  while(1){
  __t_complain=get__t5154t(m__unsafe_ptr,m__rows,m__cols,m__nnz,__t5182t,&__t5184t__);
  __t5183t=__t_complain;
  if(!__t5184t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5185t__row,__t5184t__,8);
  memcpy(&__t5185t__col,__t5184t__+8,8);
  memcpy(&__t5185t__value,__t5184t__+16,8);
  }
  entry__row=__t5185t__row;
  entry__col=__t5185t__col;
  entry__value=__t5185t__value;
  __t5183t=__t5183t==0;
  __t5182t=__t5182t+1;
  if(!__t5183t){
  break;
  }
  __t_errcode=mutget__t1724t(&result__unsafe_ptr,result__pos,result__length,entry__row,&__t5186t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(result__unsafe_ptr,result__pos,result__length,entry__row,&__t5187t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5187t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5188t__value,__t5187t__,8);
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,entry__col,&__t5189t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5189t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5190t__value,__t5189t__,8);
  mul__t177t(entry__value,__t5190t__value,&__t5191t__);
  add__t153t(__t5188t__value,__t5191t__,&__t5192t__);
  if(!__t5186t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5186t__,&__t5192t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5773t=FLOATS__buf__unsafe_ptr;
  *__t5774t=FLOATS__buf__unsafe_size;
  *__t5775t=FLOATS__buf__unsafe_offset;
  *__t5776t=FLOATS__buf__unsafe_align;
  *__t5777t=FLOATS__pos;
  *__t5778t=result__unsafe_ptr;
  *__t5779t=result__pos;
  *__t5780t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1589t(char** __t5781t, uint64_t* __t5782t, uint16_t* __t5783t, uint16_t* __t5784t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5781t=unsafe_ptr;
  *__t5782t=unsafe_size;
  *__t5783t=unsafe_offset;
  *__t5784t=unsafe_align;
}

static inline __attribute__((always_inline)) void storage__t4599t(char** __t5785t, uint64_t v__pos, uint64_t v__length, char** __t5786t, uint64_t* __t5787t, uint16_t* __t5788t, uint16_t* __t5789t, uint64_t* __t5790t) {
  char* v__unsafe_ptr=*__t5785t;
  char* __t4600t__unsafe_ptr=0;
  uint64_t __t4600t__unsafe_size=0;
  uint16_t __t4600t__unsafe_offset=0;
  uint16_t __t4600t__unsafe_align=0;
  char* __t4601t__unsafe_ptr=0;
  uint64_t __t4601t__unsafe_size=0;
  uint16_t __t4601t__unsafe_offset=0;
  uint16_t __t4601t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4602t__=0;
  uint64_t __t4603t__=0;
  uint64_t __t4604t=0;
  uint64_t pos=0;
  float____t_buffer____buffer__t1589t(&__t4600t__unsafe_ptr,&__t4600t__unsafe_size,&__t4600t__unsafe_offset,&__t4600t__unsafe_align);
  __t4601t__unsafe_ptr=__t4600t__unsafe_ptr;
  __t4601t__unsafe_size=__t4600t__unsafe_size;
  __t4601t__unsafe_offset=__t4600t__unsafe_offset;
  __t4601t__unsafe_align=__t4600t__unsafe_align;
  buf__unsafe_ptr=__t4601t__unsafe_ptr;
  buf__unsafe_size=__t4601t__unsafe_size;
  buf__unsafe_offset=__t4601t__unsafe_offset;
  buf__unsafe_align=__t4601t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t4602t__);
  add__t175t(v__pos,__t4602t__,&__t4603t__);
  buf__unsafe_size=__t4603t__;
  __t4604t=v__pos;
  pos=__t4604t;
  goto __t_return;
  __t_return:
  *__t5785t=v__unsafe_ptr;
  *__t5786t=buf__unsafe_ptr;
  *__t5787t=buf__unsafe_size;
  *__t5788t=buf__unsafe_offset;
  *__t5789t=buf__unsafe_align;
  *__t5790t=pos;
}

static inline __attribute__((always_inline)) void self__t4605t(char** __t5791t, uint64_t v__pos, uint64_t v__length, char** __t5792t, uint64_t* __t5793t, uint16_t* __t5794t, uint16_t* __t5795t, uint64_t* __t5796t, char** __t5797t, uint64_t* __t5798t, uint64_t* __t5799t) {
  char* v__unsafe_ptr=*__t5791t;
  char* __t4606t__buf__unsafe_ptr=0;
  uint64_t __t4606t__buf__unsafe_size=0;
  uint16_t __t4606t__buf__unsafe_offset=0;
  uint16_t __t4606t__buf__unsafe_align=0;
  uint64_t __t4606t__pos=0;
  storage__t4599t(&v__unsafe_ptr,v__pos,v__length,&__t4606t__buf__unsafe_ptr,&__t4606t__buf__unsafe_size,&__t4606t__buf__unsafe_offset,&__t4606t__buf__unsafe_align,&__t4606t__pos);
  goto __t_return;
  __t_return:
  *__t5791t=v__unsafe_ptr;
  *__t5792t=__t4606t__buf__unsafe_ptr;
  *__t5793t=__t4606t__buf__unsafe_size;
  *__t5794t=__t4606t__buf__unsafe_offset;
  *__t5795t=__t4606t__buf__unsafe_align;
  *__t5796t=__t4606t__pos;
  *__t5797t=v__unsafe_ptr;
  *__t5798t=v__pos;
  *__t5799t=v__length;
}

static inline __attribute__((always_inline)) int at__t1737t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5800t) {
  char* __t1738t__=0;
  double __t1739t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t1738t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1738t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1739t__value,__t1738t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5800t=__t1739t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1769t(char** __t5801t, uint64_t* __t5802t, uint16_t* __t5803t, uint16_t* __t5804t, uint64_t* __t5805t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5806t, uint64_t* __t5807t, uint64_t* __t5808t) {
  char* FLOATS__buf__unsafe_ptr=*__t5801t;
  uint64_t FLOATS__buf__unsafe_size=*__t5802t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5803t;
  uint16_t FLOATS__buf__unsafe_align=*__t5804t;
  uint64_t FLOATS__pos=*__t5805t;
  int __t1770t=0;
  char __t1771t__=0;
  char* __t1773t__unsafe_ptr=0;
  uint64_t __t1773t__pos=0;
  uint64_t __t1773t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1774t=0;
  uint64_t __t1775t__from=0;
  uint64_t __t1775t__to=0;
  char __t1776t=0;
  uint64_t __t1777t__=0;
  uint64_t i=0;
  char* __t1778t__=0;
  char* __t1779t__=0;
  double __t1780t__value=0;
  double __t1781t__=0;
  double __t1782t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1771t__);
  if(__t1771t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1651t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1773t__unsafe_ptr,&__t1773t__pos,&__t1773t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1773t__unsafe_ptr;
  v__pos=__t1773t__pos;
  v__length=__t1773t__length;
  range__t471t(v1__length,&__t1775t__from,&__t1775t__to);
  __t1774t=0;
  while(1){
  __t_complain=get__t478t(__t1775t__from,__t1775t__to,__t1774t,&__t1777t__);
  __t1776t=__t_complain;
  i=__t1777t__;
  __t1776t=__t1776t==0;
  __t1774t=__t1774t+1;
  if(!__t1776t){
  break;
  }
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,i,&__t1778t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1779t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1779t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1780t__value,__t1779t__,8);
  __t_errcode=at__t1737t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1781t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1780t__value,__t1781t__,&__t1782t__);
  if(!__t1778t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1778t__,&__t1782t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5801t=FLOATS__buf__unsafe_ptr;
  *__t5802t=FLOATS__buf__unsafe_size;
  *__t5803t=FLOATS__buf__unsafe_offset;
  *__t5804t=FLOATS__buf__unsafe_align;
  *__t5805t=FLOATS__pos;
  *__t5806t=v__unsafe_ptr;
  *__t5807t=v__pos;
  *__t5808t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2194t(char** __t5809t, uint64_t* __t5810t, uint16_t* __t5811t, uint16_t* __t5812t, uint64_t* __t5813t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5814t, uint64_t* __t5815t, uint64_t* __t5816t) {
  char* FLOATS__buf__unsafe_ptr=*__t5809t;
  uint64_t FLOATS__buf__unsafe_size=*__t5810t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5811t;
  uint16_t FLOATS__buf__unsafe_align=*__t5812t;
  uint64_t FLOATS__pos=*__t5813t;
  int __t2195t=0;
  char* __t2197t__unsafe_ptr=0;
  uint64_t __t2197t__pos=0;
  uint64_t __t2197t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2198t=0;
  uint64_t __t2199t__from=0;
  uint64_t __t2199t__to=0;
  char __t2200t=0;
  uint64_t __t2201t__=0;
  uint64_t i=0;
  char* __t2202t__=0;
  char* __t2203t__=0;
  double __t2204t__value=0;
  double __t2205t__=0;
  double __t2206t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1651t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2197t__unsafe_ptr,&__t2197t__pos,&__t2197t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2197t__unsafe_ptr;
  v__pos=__t2197t__pos;
  v__length=__t2197t__length;
  p1=v1__unsafe_ptr;
  range__t471t(v__length,&__t2199t__from,&__t2199t__to);
  __t2198t=0;
  while(1){
  __t_complain=get__t478t(__t2199t__from,__t2199t__to,__t2198t,&__t2201t__);
  __t2200t=__t_complain;
  i=__t2201t__;
  __t2200t=__t2200t==0;
  __t2198t=__t2198t+1;
  if(!__t2200t){
  break;
  }
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,i,&__t2202t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2203t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2203t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2204t__value,__t2203t__,8);
  at__t1736t(v2,i,&__t2205t__);
  __t_errcode=div__t201t(__t2204t__value,__t2205t__,&__t2206t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2202t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2202t__,&__t2206t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5809t=FLOATS__buf__unsafe_ptr;
  *__t5810t=FLOATS__buf__unsafe_size;
  *__t5811t=FLOATS__buf__unsafe_offset;
  *__t5812t=FLOATS__buf__unsafe_align;
  *__t5813t=FLOATS__pos;
  *__t5814t=v__unsafe_ptr;
  *__t5815t=v__pos;
  *__t5816t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t5817t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5817t=z;
}

int reduce__t3580t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t5818t) {
  int __t3581t=0;
  double __t3582t=0;
  double __t3583t=0;
  double ret=0;
  int __t3584t=0;
  int __t3585t=0;
  uint64_t __t3586t=0;
  uint64_t __t3587t__=0;
  uint64_t __t3588t__from=0;
  uint64_t __t3588t__to=0;
  char __t3589t=0;
  uint64_t __t3590t__=0;
  uint64_t i=0;
  char* __t3591t__=0;
  double __t3592t__value=0;
  double __t3593t=0;
  double value=0;
  char __t3594t=0;
  char __t3595t=0;
  char* __t3596t__=0;
  double __t3597t__value=0;
  double __t3598t__=0;
  int __t3599t=0;
  int __t3600t=0;
  char __t3601t=0;
  char __t3602t=0;
  double __t3603t__=0;
  int __t3604t=0;
  int __t3605t=0;
  double __t3606t__=0;
  int __t3607t=0;
  int __t3608t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3582t=0.0;
  __t3583t=__t3582t;
  ret=__t3583t;
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t3587t__);
  range__t471t(__t3587t__,&__t3588t__from,&__t3588t__to);
  __t3586t=0;
  while(1){
  __t_complain=get__t478t(__t3588t__from,__t3588t__to,__t3586t,&__t3590t__);
  __t3589t=__t_complain;
  i=__t3590t__;
  __t3589t=__t3589t==0;
  __t3586t=__t3586t+1;
  if(!__t3589t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t3591t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3591t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3592t__value,__t3591t__,8);
  __t3593t=__t3592t__value;
  value=__t3593t;
  __t3595t=1;
  if(__t3595t){
  __t3594t=1;
  }
  if(__t3594t){
  __t_errcode=get__t1730t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t3596t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3596t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3597t__value,__t3596t__,8);
  sub__t326t(value,__t3597t__value,&__t3598t__);
  value=__t3598t__;
  }
  __t3602t=1;
  if(__t3602t){
  __t3601t=1;
  }
  if(__t3601t){
  abs__t1551t(value,&__t3603t__);
  value=__t3603t__;
  }
  add__t153t(ret,value,&__t3606t__);
  ret=__t3606t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5818t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5819t) {
  int value=0;
  *__t5819t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5820t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5820t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5821t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5821t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t5822t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5822t=z;
}

static inline __attribute__((always_inline)) int filter__t5500t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t5823t, uint64_t* __t5824t, uint64_t* __t5825t, double* __t5826t, uint64_t* __t5827t) {
  double __t5502t__=0;
  double p0norm=0;
  char* __t5503t__unsafe_ptr=0;
  uint64_t __t5503t__unsafe_size=0;
  uint16_t __t5503t__unsafe_offset=0;
  uint16_t __t5503t__unsafe_align=0;
  uint64_t __t5504t=0;
  uint64_t __t5505t__=0;
  uint64_t __t5506t__=0;
  char* __t5507t__unsafe_ptr=0;
  uint64_t __t5507t__unsafe_size=0;
  uint16_t __t5507t__unsafe_offset=0;
  uint16_t __t5507t__unsafe_align=0;
  char __t5508t____t534t__=0;
  char* __t5509t__buf__unsafe_ptr=0;
  uint64_t __t5509t__buf__unsafe_size=0;
  uint16_t __t5509t__buf__unsafe_offset=0;
  uint16_t __t5509t__buf__unsafe_align=0;
  uint64_t __t5509t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t5510t=0;
  double __t5511t__=0;
  double __t5512t__=0;
  char* __t5513t__unsafe_ptr=0;
  uint64_t __t5513t__pos=0;
  uint64_t __t5513t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t5514t__unsafe_ptr=0;
  uint64_t __t5514t__pos=0;
  uint64_t __t5514t__length=0;
  char* __t5515t__unsafe_ptr=0;
  uint64_t __t5515t__pos=0;
  uint64_t __t5515t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t5516t__unsafe_ptr=0;
  uint64_t __t5516t__pos=0;
  uint64_t __t5516t__length=0;
  char* __t5517t__unsafe_ptr=0;
  uint64_t __t5517t__pos=0;
  uint64_t __t5517t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t5518t__=0;
  char* __t5519t__unsafe_ptr=0;
  uint64_t __t5519t__pos=0;
  uint64_t __t5519t__length=0;
  char* __t5520t__unsafe_ptr=0;
  uint64_t __t5520t__pos=0;
  uint64_t __t5520t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t5521t=0;
  char __t5522t=0;
  double __t5523t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t5524t__unsafe_ptr=0;
  uint64_t __t5524t__pos=0;
  uint64_t __t5524t__length=0;
  char* __t5525t____t4606t__buf__unsafe_ptr=0;
  uint64_t __t5525t____t4606t__buf__unsafe_size=0;
  uint16_t __t5525t____t4606t__buf__unsafe_offset=0;
  uint16_t __t5525t____t4606t__buf__unsafe_align=0;
  uint64_t __t5525t____t4606t__pos=0;
  char* __t5525t__v__unsafe_ptr=0;
  uint64_t __t5525t__v__pos=0;
  uint64_t __t5525t__v__length=0;
  char* __t5526t__unsafe_ptr=0;
  uint64_t __t5526t__pos=0;
  uint64_t __t5526t__length=0;
  char* __t5527t____t4606t__buf__unsafe_ptr=0;
  uint64_t __t5527t____t4606t__buf__unsafe_size=0;
  uint16_t __t5527t____t4606t__buf__unsafe_offset=0;
  uint16_t __t5527t____t4606t__buf__unsafe_align=0;
  uint64_t __t5527t____t4606t__pos=0;
  char* __t5527t__v__unsafe_ptr=0;
  uint64_t __t5527t__v__pos=0;
  uint64_t __t5527t__v__length=0;
  char* __t5528t__unsafe_ptr=0;
  uint64_t __t5528t__pos=0;
  uint64_t __t5528t__length=0;
  char* __t5529t____t4606t__buf__unsafe_ptr=0;
  uint64_t __t5529t____t4606t__buf__unsafe_size=0;
  uint16_t __t5529t____t4606t__buf__unsafe_offset=0;
  uint16_t __t5529t____t4606t__buf__unsafe_align=0;
  uint64_t __t5529t____t4606t__pos=0;
  char* __t5529t__v__unsafe_ptr=0;
  uint64_t __t5529t__v__pos=0;
  uint64_t __t5529t__v__length=0;
  double __t5531t__=0;
  char* __t5532t__unsafe_ptr=0;
  uint64_t __t5532t__pos=0;
  uint64_t __t5532t__length=0;
  double __t5533t=0;
  char __t5534t__=0;
  double __t5537t__=0;
  double err=0;
  uint64_t __t5538t__=0;
  double __t5539t__=0;
  double __t5540t__=0;
  char __t5541t__=0;
  char* __t5542t____t4606t__buf__unsafe_ptr=0;
  uint64_t __t5542t____t4606t__buf__unsafe_size=0;
  uint16_t __t5542t____t4606t__buf__unsafe_offset=0;
  uint16_t __t5542t____t4606t__buf__unsafe_align=0;
  uint64_t __t5542t____t4606t__pos=0;
  char* __t5542t__v__unsafe_ptr=0;
  uint64_t __t5542t__v__pos=0;
  uint64_t __t5542t__v__length=0;
  char* __t5543t__unsafe_ptr=0;
  uint64_t __t5543t__pos=0;
  uint64_t __t5543t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2317t(p0__unsafe_ptr,p0__pos,p0__length,&__t5502t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t5502t__;
  float____t_buffer____buffer__t5457t(&__t5503t__unsafe_ptr,&__t5503t__unsafe_size,&__t5503t__unsafe_offset,&__t5503t__unsafe_align);
  __t5504t=100;
  len__t1723t(p0__unsafe_ptr,p0__pos,p0__length,&__t5505t__);
  mul__t199t(__t5504t,__t5505t__,&__t5506t__);
  __t_errcode=alloc__t532t(&__t5503t__unsafe_ptr,&__t5503t__unsafe_size,&__t5503t__unsafe_offset,&__t5503t__unsafe_align,__t5506t__,&__t5507t__unsafe_ptr,&__t5507t__unsafe_size,&__t5507t__unsafe_offset,&__t5507t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t673t(&__t5507t__unsafe_ptr,&__t5507t__unsafe_size,&__t5507t__unsafe_offset,&__t5507t__unsafe_align,&__t5509t__buf__unsafe_ptr,&__t5509t__buf__unsafe_size,&__t5509t__buf__unsafe_offset,&__t5509t__buf__unsafe_align,&__t5509t__pos);
  FLOATS__buf__unsafe_ptr=__t5509t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t5509t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t5509t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t5509t__buf__unsafe_align;
  FLOATS__pos=__t5509t__pos;
  __t5510t=1.0;
  sub__t326t(__t5510t,config__alpha,&__t5511t__);
  __t_errcode=div__t201t(__t5511t__,p0norm,&__t5512t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1987t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t5512t__,&__t5513t__unsafe_ptr,&__t5513t__pos,&__t5513t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__unsafe_ptr=__t5513t__unsafe_ptr;
  normalized_p0__pos=__t5513t__pos;
  normalized_p0__length=__t5513t__length;
  __t_errcode=copy__t4581t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5514t__unsafe_ptr,&__t5514t__pos,&__t5514t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5515t__unsafe_ptr=__t5514t__unsafe_ptr;
  __t5515t__pos=__t5514t__pos;
  __t5515t__length=__t5514t__length;
  prev_p__unsafe_ptr=__t5515t__unsafe_ptr;
  prev_p__pos=__t5515t__pos;
  prev_p__length=__t5515t__length;
  __t_errcode=copy__t4581t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5516t__unsafe_ptr,&__t5516t__pos,&__t5516t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5517t__unsafe_ptr=__t5516t__unsafe_ptr;
  __t5517t__pos=__t5516t__pos;
  __t5517t__length=__t5516t__length;
  p__unsafe_ptr=__t5517t__unsafe_ptr;
  p__pos=__t5517t__pos;
  p__length=__t5517t__length;
  len__t1723t(p__unsafe_ptr,p__pos,p__length,&__t5518t__);
  __t_errcode=vec__t1664t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,__t5518t__,&__t5519t__unsafe_ptr,&__t5519t__pos,&__t5519t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5520t__unsafe_ptr=__t5519t__unsafe_ptr;
  __t5520t__pos=__t5519t__pos;
  __t5520t__length=__t5519t__length;
  empty__unsafe_ptr=__t5520t__unsafe_ptr;
  empty__pos=__t5520t__pos;
  empty__length=__t5520t__length;
  __t5521t=0;
  while(1){
  __t_complain=get__t5452t(config__alpha,config__max_iters,config__tol,__t5521t,&__t5523t__);
  __t5522t=__t_complain;
  alpha=__t5523t__;
  __t5522t=__t5522t==0;
  __t5521t=__t5521t+1;
  if(!__t5522t){
  break;
  }
  iter=__t5521t;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5179t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t5524t__unsafe_ptr,&__t5524t__pos,&__t5524t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4605t(&__t5524t__unsafe_ptr,__t5524t__pos,__t5524t__length,&__t5525t____t4606t__buf__unsafe_ptr,&__t5525t____t4606t__buf__unsafe_size,&__t5525t____t4606t__buf__unsafe_offset,&__t5525t____t4606t__buf__unsafe_align,&__t5525t____t4606t__pos,&__t5525t__v__unsafe_ptr,&__t5525t__v__pos,&__t5525t__v__length);
  __t_errcode=mul__t1987t(&__t5525t____t4606t__buf__unsafe_ptr,&__t5525t____t4606t__buf__unsafe_size,&__t5525t____t4606t__buf__unsafe_offset,&__t5525t____t4606t__buf__unsafe_align,&__t5525t____t4606t__pos,__t5525t__v__unsafe_ptr,__t5525t__v__pos,__t5525t__v__length,alpha,&__t5526t__unsafe_ptr,&__t5526t__pos,&__t5526t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5526t__unsafe_ptr;
  p__pos=__t5526t__pos;
  p__length=__t5526t__length;
  self__t4605t(&p__unsafe_ptr,p__pos,p__length,&__t5527t____t4606t__buf__unsafe_ptr,&__t5527t____t4606t__buf__unsafe_size,&__t5527t____t4606t__buf__unsafe_offset,&__t5527t____t4606t__buf__unsafe_align,&__t5527t____t4606t__pos,&__t5527t__v__unsafe_ptr,&__t5527t__v__pos,&__t5527t__v__length);
  __t_errcode=add__t1769t(&__t5527t____t4606t__buf__unsafe_ptr,&__t5527t____t4606t__buf__unsafe_size,&__t5527t____t4606t__buf__unsafe_offset,&__t5527t____t4606t__buf__unsafe_align,&__t5527t____t4606t__pos,__t5527t__v__unsafe_ptr,__t5527t__v__pos,__t5527t__v__length,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5528t__unsafe_ptr,&__t5528t__pos,&__t5528t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5528t__unsafe_ptr;
  p__pos=__t5528t__pos;
  p__length=__t5528t__length;
  self__t4605t(&p__unsafe_ptr,p__pos,p__length,&__t5529t____t4606t__buf__unsafe_ptr,&__t5529t____t4606t__buf__unsafe_size,&__t5529t____t4606t__buf__unsafe_offset,&__t5529t____t4606t__buf__unsafe_align,&__t5529t____t4606t__pos,&__t5529t__v__unsafe_ptr,&__t5529t__v__pos,&__t5529t__v__length);
  __t_errcode=reduce__t2317t(p__unsafe_ptr,p__pos,p__length,&__t5531t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2194t(&__t5529t____t4606t__buf__unsafe_ptr,&__t5529t____t4606t__buf__unsafe_size,&__t5529t____t4606t__buf__unsafe_offset,&__t5529t____t4606t__buf__unsafe_align,&__t5529t____t4606t__pos,__t5529t__v__unsafe_ptr,__t5529t__v__pos,__t5529t__v__length,__t5531t__,&__t5532t__unsafe_ptr,&__t5532t__pos,&__t5532t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5532t__unsafe_ptr;
  p__pos=__t5532t__pos;
  p__length=__t5532t__length;
  __t5533t=0.0;
  neq__t122t(config__tol,__t5533t,&__t5534t__);
  if(__t5534t__){
  __t_errcode=reduce__t3580t(prev_p__unsafe_ptr,prev_p__pos,prev_p__length,p__unsafe_ptr,p__pos,p__length,&__t5537t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t5537t__;
  len__t1723t(p__unsafe_ptr,p__pos,p__length,&__t5538t__);
  float__t415t(__t5538t__,&__t5539t__);
  mul__t177t(config__tol,__t5539t__,&__t5540t__);
  lt__t230t(err,__t5540t__,&__t5541t__);
  if(__t5541t__){
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
  self__t4605t(&p__unsafe_ptr,p__pos,p__length,&__t5542t____t4606t__buf__unsafe_ptr,&__t5542t____t4606t__buf__unsafe_size,&__t5542t____t4606t__buf__unsafe_offset,&__t5542t____t4606t__buf__unsafe_align,&__t5542t____t4606t__pos,&__t5542t__v__unsafe_ptr,&__t5542t__v__pos,&__t5542t__v__length);
  __t_errcode=mul__t1987t(&__t5542t____t4606t__buf__unsafe_ptr,&__t5542t____t4606t__buf__unsafe_size,&__t5542t____t4606t__buf__unsafe_offset,&__t5542t____t4606t__buf__unsafe_align,&__t5542t____t4606t__pos,__t5542t__v__unsafe_ptr,__t5542t__v__pos,__t5542t__v__length,p0norm,&__t5543t__unsafe_ptr,&__t5543t__pos,&__t5543t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5543t__unsafe_ptr;
  p__pos=__t5543t__pos;
  p__length=__t5543t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5823t=p__unsafe_ptr;
  *__t5824t=p__pos;
  *__t5825t=p__length;
  *__t5826t=err;
  *__t5827t=iter;
  
  __t_skip_returns:exists__t447t(__t5507t__unsafe_ptr,&__t5508t____t534t__);
  if(__t5508t____t534t__){
  free__t503t(&__t5507t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5828t, const char** __t5829t) {
  goto __t_return;
  __t_return:
  *__t5828t=value;
  *__t5829t=__t374t;
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

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5830t, const char** __t5831t) {
  goto __t_return;
  __t_return:
  *__t5830t=value;
  *__t5831t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5832t) {
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
  *__t5832t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4553t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4554t=0;
  const char* endl=0;
  const char* __t4555t__value=0;
  const char* __t4555t____t374t=0;
  uint64_t __t4557t=0;
  uint64_t __t4558t__from=0;
  uint64_t __t4558t__to=0;
  char __t4559t=0;
  uint64_t __t4560t__=0;
  uint64_t i=0;
  char* __t4561t__=0;
  double __t4562t__value=0;
  double __t4563t__value=0;
  const char* __t4563t____t374t=0;
  uint64_t __t4565t=0;
  uint64_t __t4566t__=0;
  char __t4567t__=0;
  const char* __t4568t__value=0;
  const char* __t4568t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4534t,&__t4555t__value,&__t4555t____t374t);
  print__t378t(__t4555t__value,__t4555t____t374t);
  range__t471t(v__length,&__t4558t__from,&__t4558t__to);
  __t4557t=0;
  while(1){
  __t_complain=get__t478t(__t4558t__from,__t4558t__to,__t4557t,&__t4560t__);
  __t4559t=__t_complain;
  i=__t4560t__;
  __t4559t=__t4559t==0;
  __t4557t=__t4557t+1;
  if(!__t4559t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t4561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4561t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4562t__value,__t4561t__,8);
  nn__t375t(__t4562t__value,&__t4563t__value,&__t4563t____t374t);
  print__t383t(__t4563t__value,__t4563t____t374t);
  __t4565t=1;
  __t_errcode=sub__t352t(v__length,__t4565t,&__t4566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4566t__,&__t4567t__);
  if(__t4567t__){
  nn__t373t(__t4548t,&__t4568t__value,&__t4568t____t374t);
  print__t378t(__t4568t__value,__t4568t____t374t);
  }
  }
  print__t378t(__t4551t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5597t() {
  char* __t5635t=0;
  uint64_t __t5636t=0;
  uint64_t __t5637t=0;
  uint64_t __t5638t=0;
  char* m__t5635t=0;
  uint64_t m__t5636t=0;
  uint64_t m__t5637t=0;
  uint64_t m__t5638t=0;
  double __t5640t=0;
  double __t5645t=0;
  double __t5646t=0;
  char* __t5647t__unsafe_ptr=0;
  uint64_t __t5647t__unsafe_size=0;
  uint16_t __t5647t__unsafe_offset=0;
  uint16_t __t5647t__unsafe_align=0;
  uint64_t __t5648t=0;
  char* __t5649t__unsafe_ptr=0;
  uint64_t __t5649t__unsafe_size=0;
  uint16_t __t5649t__unsafe_offset=0;
  uint16_t __t5649t__unsafe_align=0;
  char __t5650t____t534t__=0;
  char* __t5651t__unsafe_ptr=0;
  uint64_t __t5651t__pos=0;
  uint64_t __t5651t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t5652t=0;
  double __t5653t__alpha=0;
  uint64_t __t5653t__max_iters=0;
  double __t5653t__tol=0;
  char* __t5654t__p__unsafe_ptr=0;
  uint64_t __t5654t__p__pos=0;
  uint64_t __t5654t__p__length=0;
  double __t5654t__err=0;
  uint64_t __t5654t__iter=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t5656t__value=0;
  const char* __t5656t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t5635t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t5636t=3;
  __t5637t=3;
  __t5638t=3;
  m__t5635t=__t5635t;
  m__t5636t=__t5636t;
  m__t5637t=__t5637t;
  m__t5638t=__t5638t;
  new__t669t();
  __t5640t=1.0;
  __t5645t=2.0;
  __t5646t=3.0;
  float____buffer__t5643t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align);
  __t5648t=3;
  __t_errcode=alloc__t532t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align,__t5648t,&__t5649t__unsafe_ptr,&__t5649t__unsafe_size,&__t5649t__unsafe_offset,&__t5649t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5647t__unsafe_ptr,&__t5640t,8);
  memcpy(__t5647t__unsafe_ptr+8,&__t5645t,8);
  memcpy(__t5647t__unsafe_ptr+16,&__t5646t,8);
  __t_errcode=vec__t1631t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align,&__t5651t__unsafe_ptr,&__t5651t__pos,&__t5651t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5651t__unsafe_ptr;
  p0__pos=__t5651t__pos;
  p0__length=__t5651t__length;
  __t5652t=0.9;
  ppr__t5442t(__t5652t,&__t5653t__alpha,&__t5653t__max_iters,&__t5653t__tol);
  __t_errcode=filter__t5500t(__t5653t__alpha,__t5653t__max_iters,__t5653t__tol,m__t5635t,m__t5636t,m__t5637t,m__t5638t,p0__unsafe_ptr,p0__pos,p0__length,&__t5654t__p__unsafe_ptr,&__t5654t__p__pos,&__t5654t__p__length,&__t5654t__err,&__t5654t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t5654t__p__unsafe_ptr;
  result__p__pos=__t5654t__p__pos;
  result__p__length=__t5654t__p__length;
  result__err=__t5654t__err;
  result__iter=__t5654t__iter;
  nn__t373t(__t5655t,&__t5656t__value,&__t5656t____t374t);
  print__t378t(__t5656t__value,__t5656t____t374t);
  print__t393t(result__iter);
  __t_errcode=print__t4553t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5649t__unsafe_ptr,&__t5650t____t534t__);
  if(__t5650t____t534t__){
  free__t503t(&__t5649t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5597t();return 0;}