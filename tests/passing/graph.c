#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5090t=" ]";
const char* const __t374t="";
const char* const __t5087t="  ";
const char* const __t5072t="[ ";
const char* const __t6157t="iterations: ";
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

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6144t(char** __t6162t, uint64_t* __t6163t, uint16_t* __t6164t, uint16_t* __t6165t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6162t=unsafe_ptr;
  *__t6163t=unsafe_size;
  *__t6164t=unsafe_offset;
  *__t6165t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t6166t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6166t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t6167t) {
  char* allocated=*__t6167t;
  if(allocated){
  free(allocated);
  }
  *__t6167t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6168t) {
  int value=0;
  *__t6168t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6169t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6169t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t6170t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t6170t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t6171t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6171t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t6172t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6172t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t6173t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6173t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t6174t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6174t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t6175t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6175t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t6176t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6176t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t6177t, uint64_t* __t6178t, uint16_t* __t6179t, uint16_t* __t6180t, uint64_t size, char** __t6181t, uint64_t* __t6182t, uint16_t* __t6183t, uint16_t* __t6184t) {
  char* buffer__unsafe_ptr=*__t6177t;
  uint64_t buffer__unsafe_size=*__t6178t;
  uint16_t buffer__unsafe_offset=*__t6179t;
  uint16_t buffer__unsafe_align=*__t6180t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6177t=buffer__unsafe_ptr;
  *__t6178t=buffer__unsafe_size;
  *__t6179t=buffer__unsafe_offset;
  *__t6180t=buffer__unsafe_align;
  *__t6181t=buffer__unsafe_ptr;
  *__t6182t=buffer__unsafe_size;
  *__t6183t=buffer__unsafe_offset;
  *__t6184t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6185t) {
  goto __t_return;
  __t_return:
  *__t6185t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2039t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6186t, uint64_t* __t6187t, uint64_t* __t6188t) {
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__pos=0;
  uint64_t __t2041t__length=0;
  __t2041t__unsafe_ptr=unsafe_ptr;
  __t2041t__pos=pos;
  __t2041t__length=length;
  goto __t_return;
  __t_return:
  *__t6186t=__t2041t__unsafe_ptr;
  *__t6187t=__t2041t__pos;
  *__t6188t=__t2041t__length;
}

static inline __attribute__((always_inline)) int vec__t2082t(char** __t6189t, uint64_t* __t6190t, uint16_t* __t6191t, uint16_t* __t6192t, char** __t6193t, uint64_t* __t6194t, uint64_t* __t6195t) {
  char* buf__unsafe_ptr=*__t6189t;
  uint64_t buf__unsafe_size=*__t6190t;
  uint16_t buf__unsafe_offset=*__t6191t;
  uint16_t buf__unsafe_align=*__t6192t;
  uint64_t __t2083t__=0;
  uint64_t __t2084t=0;
  char __t2085t__=0;
  uint64_t __t2086t__=0;
  uint64_t __t2087t=0;
  char __t2088t__=0;
  uint64_t __t2089t=0;
  uint64_t __t2090t__=0;
  char* __t2091t__unsafe_ptr=0;
  uint64_t __t2091t__pos=0;
  uint64_t __t2091t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(buf__unsafe_align,&__t2083t__);
  __t2084t=8;
  neq__t144t(__t2083t__,__t2084t,&__t2085t__);
  if(__t2085t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t2086t__);
  __t2087t=0;
  neq__t144t(__t2086t__,__t2087t,&__t2088t__);
  if(__t2088t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t2089t=0;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2090t__);
  vec__t2039t(buf__unsafe_ptr,__t2089t,__t2090t__,&__t2091t__unsafe_ptr,&__t2091t__pos,&__t2091t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6189t=buf__unsafe_ptr;
  *__t6190t=buf__unsafe_size;
  *__t6191t=buf__unsafe_offset;
  *__t6192t=buf__unsafe_align;
  *__t6193t=__t2091t__unsafe_ptr;
  *__t6194t=__t2091t__pos;
  *__t6195t=__t2091t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ppr__t5943t(double alpha, double* __t6196t, uint64_t* __t6197t, double* __t6198t) {
  int __t5944t=0;
  int __t5945t=0;
  double __t5946t=0;
  double tol=0;
  uint64_t __t5947t=0;
  uint64_t max_iters=0;
  int __t5948t=0;
  int __t5949t=0;
  __t5946t=0.00000001;
  tol=__t5946t;
  __t5947t=100;
  max_iters=__t5947t;
  goto __t_return;
  __t_return:
  *__t6196t=alpha;
  *__t6197t=max_iters;
  *__t6198t=tol;
}

static inline __attribute__((always_inline)) void len__t2158t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t6199t) {
  goto __t_return;
  __t_return:
  *__t6199t=v__length;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t6200t, uint64_t* __t6201t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t6200t=__t613t;
  *__t6201t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t6202t, uint64_t* __t6203t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t6202t=from;
  *__t6203t=to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t6204t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6204t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t6205t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6205t=z;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6206t) {
  char __t637t__=0;
  char __t638t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t637t__);
  if(__t637t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t638t__);
  if(__t638t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6206t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t6207t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6207t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t6208t) {
  *__t6208t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t6209t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t6209t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t2165t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6210t) {
  char __t2166t__=0;
  uint64_t __t2167t=0;
  uint64_t __t2168t__=0;
  uint64_t __t2169t__=0;
  char* __t2170t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2166t__);
  if(__t2166t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2167t=8;
  add__t175t(i,v__pos,&__t2168t__);
  mul__t199t(__t2167t,__t2168t__,&__t2169t__);
  add__t663t(v__unsafe_ptr,__t2169t__,&__t2170t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6210t=__t2170t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t592t(uint64_t value, uint64_t* __t6211t) {
  goto __t_return;
  __t_return:
  *__t6211t=value;
}

static inline __attribute__((always_inline)) void bits__t596t(double x, uint64_t* __t6212t) {
  uint64_t z=0;
  uint64_t __t597t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t592t(z,&__t597t__value);
  goto __t_return;
  __t_return:
  *__t6212t=__t597t__value;
}

static inline __attribute__((always_inline)) void bits__t594t(int64_t x, uint64_t* __t6213t) {
  uint64_t z=0;
  uint64_t __t595t__value=0;
  z=x;
  bits__t592t(z,&__t595t__value);
  goto __t_return;
  __t_return:
  *__t6213t=__t595t__value;
}

static inline __attribute__((always_inline)) void band__t608t(uint64_t x__value, uint64_t y__value, uint64_t* __t6214t) {
  uint64_t z=0;
  uint64_t __t609t__value=0;
  z=(x__value&y__value);
  bits__t592t(z,&__t609t__value);
  goto __t_return;
  __t_return:
  *__t6214t=__t609t__value;
}

static inline __attribute__((always_inline)) void float__t601t(uint64_t x__value, double* __t6215t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t6215t=z;
}

static inline __attribute__((always_inline)) void abs__t2011t(double x, double* __t6216t) {
  int64_t c=0;
  uint64_t __t2012t__value=0;
  uint64_t __t2013t__value=0;
  uint64_t __t2014t__value=0;
  double __t2015t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t596t(x,&__t2012t__value);
  bits__t594t(c,&__t2013t__value);
  band__t608t(__t2012t__value,__t2013t__value,&__t2014t__value);
  float__t601t(__t2014t__value,&__t2015t__);
  goto __t_return;
  __t_return:
  *__t6216t=__t2015t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6217t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6217t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t6218t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6218t=z;
}

int reduce__t2795t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6219t) {
  int __t2796t=0;
  double __t2797t=0;
  double __t2798t=0;
  double ret=0;
  int __t2799t=0;
  int __t2800t=0;
  int __t2801t=0;
  int __t2802t__=0;
  uint64_t __t2803t=0;
  uint64_t __t2804t__=0;
  uint64_t __t2805t____t613t=0;
  uint64_t __t2805t__to=0;
  uint64_t __t2806t__from=0;
  uint64_t __t2806t__to=0;
  char __t2807t=0;
  uint64_t __t2808t__=0;
  uint64_t i=0;
  char* __t2809t__=0;
  double __t2810t__value=0;
  double __t2811t=0;
  double value=0;
  int __t2812t=0;
  int __t2813t=0;
  int __t2814t=0;
  char __t2815t=0;
  char __t2816t=0;
  double __t2817t__=0;
  int __t2818t=0;
  int __t2819t=0;
  double __t2820t__=0;
  int __t2821t=0;
  int __t2822t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2797t=0.0;
  __t2798t=__t2797t;
  ret=__t2798t;
  not__t37t(__t2801t,&__t2802t__);
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t2804t__);
  of__t612t(__t2804t__,&__t2805t____t613t,&__t2805t__to);
  range__t629t(__t2805t____t613t,__t2805t__to,&__t2806t__from,&__t2806t__to);
  __t2803t=0;
  while(1){
  __t_complain=get__t636t(__t2806t__from,__t2806t__to,__t2803t,&__t2808t__);
  __t2807t=__t_complain;
  i=__t2808t__;
  __t2807t=__t2807t==0;
  __t2803t=__t2803t+1;
  if(!__t2807t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t2809t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2809t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2810t__value,__t2809t__,8);
  __t2811t=__t2810t__value;
  value=__t2811t;
  __t2816t=1;
  if(__t2816t){
  __t2815t=1;
  }
  if(__t2815t){
  abs__t2011t(value,&__t2817t__);
  value=__t2817t__;
  }
  add__t153t(ret,value,&__t2820t__);
  ret=__t2820t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6219t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5958t(char** __t6220t, uint64_t* __t6221t, uint16_t* __t6222t, uint16_t* __t6223t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6220t=unsafe_ptr;
  *__t6221t=unsafe_size;
  *__t6222t=unsafe_offset;
  *__t6223t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t6224t, uint64_t* __t6225t, uint16_t* __t6226t, uint16_t* __t6227t, uint64_t _pos, char** __t6228t, uint64_t* __t6229t, uint16_t* __t6230t, uint16_t* __t6231t, uint64_t* __t6232t) {
  char* buf__unsafe_ptr=*__t6224t;
  uint64_t buf__unsafe_size=*__t6225t;
  uint16_t buf__unsafe_offset=*__t6226t;
  uint16_t buf__unsafe_align=*__t6227t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t6224t=buf__unsafe_ptr;
  *__t6225t=buf__unsafe_size;
  *__t6226t=buf__unsafe_offset;
  *__t6227t=buf__unsafe_align;
  *__t6228t=buf__unsafe_ptr;
  *__t6229t=buf__unsafe_size;
  *__t6230t=buf__unsafe_offset;
  *__t6231t=buf__unsafe_align;
  *__t6232t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t6233t, uint64_t* __t6234t, uint16_t* __t6235t, uint16_t* __t6236t, char** __t6237t, uint64_t* __t6238t, uint16_t* __t6239t, uint16_t* __t6240t, uint64_t* __t6241t) {
  char* buf__unsafe_ptr=*__t6233t;
  uint64_t buf__unsafe_size=*__t6234t;
  uint16_t buf__unsafe_offset=*__t6235t;
  uint16_t buf__unsafe_align=*__t6236t;
  uint64_t __t814t=0;
  char* __t815t__buf__unsafe_ptr=0;
  uint64_t __t815t__buf__unsafe_size=0;
  uint16_t __t815t__buf__unsafe_offset=0;
  uint16_t __t815t__buf__unsafe_align=0;
  uint64_t __t815t__pos=0;
  __t814t=0;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t814t,&__t815t__buf__unsafe_ptr,&__t815t__buf__unsafe_size,&__t815t__buf__unsafe_offset,&__t815t__buf__unsafe_align,&__t815t__pos);
  goto __t_return;
  __t_return:
  *__t6233t=buf__unsafe_ptr;
  *__t6234t=buf__unsafe_size;
  *__t6235t=buf__unsafe_offset;
  *__t6236t=buf__unsafe_align;
  *__t6237t=__t815t__buf__unsafe_ptr;
  *__t6238t=__t815t__buf__unsafe_size;
  *__t6239t=__t815t__buf__unsafe_offset;
  *__t6240t=__t815t__buf__unsafe_align;
  *__t6241t=__t815t__pos;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t6242t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6242t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t6243t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6243t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t6244t) {
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
  *__t6244t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t6245t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6245t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t6246t, uint64_t* __t6247t, uint16_t* __t6248t, uint16_t* __t6249t, uint64_t pos, char** __t6250t, uint64_t* __t6251t, uint16_t* __t6252t, uint16_t* __t6253t, uint64_t* __t6254t) {
  char* buf__unsafe_ptr=*__t6246t;
  uint64_t buf__unsafe_size=*__t6247t;
  uint16_t buf__unsafe_offset=*__t6248t;
  uint16_t buf__unsafe_align=*__t6249t;
  goto __t_return;
  __t_return:
  *__t6246t=buf__unsafe_ptr;
  *__t6247t=buf__unsafe_size;
  *__t6248t=buf__unsafe_offset;
  *__t6249t=buf__unsafe_align;
  *__t6250t=buf__unsafe_ptr;
  *__t6251t=buf__unsafe_size;
  *__t6252t=buf__unsafe_offset;
  *__t6253t=buf__unsafe_align;
  *__t6254t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t6255t, uint64_t* __t6256t, uint16_t* __t6257t, uint16_t* __t6258t, uint64_t* __t6259t, uint64_t length, char** __t6260t, uint64_t* __t6261t, uint16_t* __t6262t, uint16_t* __t6263t, uint64_t* __t6264t) {
  char* allocator__buf__unsafe_ptr=*__t6255t;
  uint64_t allocator__buf__unsafe_size=*__t6256t;
  uint16_t allocator__buf__unsafe_offset=*__t6257t;
  uint16_t allocator__buf__unsafe_align=*__t6258t;
  uint64_t allocator__pos=*__t6259t;
  int __t844t=0;
  uint64_t __t845t__=0;
  uint64_t next_pos=0;
  uint64_t __t846t__=0;
  char __t847t__=0;
  uint64_t __t848t=0;
  uint64_t __t849t__=0;
  uint64_t pos=0;
  char* __t850t__buf__unsafe_ptr=0;
  uint64_t __t850t__buf__unsafe_size=0;
  uint16_t __t850t__buf__unsafe_offset=0;
  uint16_t __t850t__buf__unsafe_align=0;
  uint64_t __t850t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t845t__);
  next_pos=__t845t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t846t__);
  gt__t276t(next_pos,__t846t__,&__t847t__);
  if(__t847t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t848t=0;
  add__t175t(allocator__pos,__t848t,&__t849t__);
  pos=__t849t__;
  allocator__pos=next_pos;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t850t__buf__unsafe_ptr,&__t850t__buf__unsafe_size,&__t850t__buf__unsafe_offset,&__t850t__buf__unsafe_align,&__t850t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6255t=allocator__buf__unsafe_ptr;
  *__t6256t=allocator__buf__unsafe_size;
  *__t6257t=allocator__buf__unsafe_offset;
  *__t6258t=allocator__buf__unsafe_align;
  *__t6259t=allocator__pos;
  *__t6260t=__t850t__buf__unsafe_ptr;
  *__t6261t=__t850t__buf__unsafe_size;
  *__t6262t=__t850t__buf__unsafe_offset;
  *__t6263t=__t850t__buf__unsafe_align;
  *__t6264t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t2102t(char** __t6265t, uint64_t* __t6266t, uint16_t* __t6267t, uint16_t* __t6268t, uint64_t* __t6269t, uint64_t length, char** __t6270t, uint64_t* __t6271t, uint64_t* __t6272t) {
  char* FLOATS__buf__unsafe_ptr=*__t6265t;
  uint64_t FLOATS__buf__unsafe_size=*__t6266t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6267t;
  uint16_t FLOATS__buf__unsafe_align=*__t6268t;
  uint64_t FLOATS__pos=*__t6269t;
  uint64_t __t2103t__=0;
  uint64_t __t2104t=0;
  char __t2105t__=0;
  uint64_t __t2106t__=0;
  uint64_t __t2107t=0;
  char __t2108t__=0;
  char* __t2109t__buf__unsafe_ptr=0;
  uint64_t __t2109t__buf__unsafe_size=0;
  uint16_t __t2109t__buf__unsafe_offset=0;
  uint16_t __t2109t__buf__unsafe_align=0;
  uint64_t __t2109t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t2110t__=0;
  int __t2111t=0;
  char* __t2112t__unsafe_ptr=0;
  uint64_t __t2112t__pos=0;
  uint64_t __t2112t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t2103t__);
  __t2104t=8;
  neq__t144t(__t2103t__,__t2104t,&__t2105t__);
  if(__t2105t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t2106t__);
  __t2107t=0;
  neq__t144t(__t2106t__,__t2107t,&__t2108t__);
  if(__t2108t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2109t__buf__unsafe_ptr,&__t2109t__buf__unsafe_size,&__t2109t__buf__unsafe_offset,&__t2109t__buf__unsafe_align,&__t2109t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2109t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2109t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2109t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2109t__buf__unsafe_align;
  surface__pos=__t2109t__pos;
  add__t175t(FLOATS__pos,length,&__t2110t__);
  FLOATS__pos=__t2110t__;
  vec__t2039t(surface__buf__unsafe_ptr,surface__pos,length,&__t2112t__unsafe_ptr,&__t2112t__pos,&__t2112t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6265t=FLOATS__buf__unsafe_ptr;
  *__t6266t=FLOATS__buf__unsafe_size;
  *__t6267t=FLOATS__buf__unsafe_offset;
  *__t6268t=FLOATS__buf__unsafe_align;
  *__t6269t=FLOATS__pos;
  *__t6270t=__t2112t__unsafe_ptr;
  *__t6271t=__t2112t__pos;
  *__t6272t=__t2112t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t2159t(char** __t6273t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6274t) {
  char* v__unsafe_ptr=*__t6273t;
  char __t2160t__=0;
  uint64_t __t2161t=0;
  uint64_t __t2162t__=0;
  uint64_t __t2163t__=0;
  char* __t2164t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2160t__);
  if(__t2160t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2161t=8;
  add__t175t(i,v__pos,&__t2162t__);
  mul__t199t(__t2161t,__t2162t__,&__t2163t__);
  add__t663t(v__unsafe_ptr,__t2163t__,&__t2164t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6273t=v__unsafe_ptr;
  *__t6274t=__t2164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2171t(double number, uint64_t i, double* __t6275t) {
  goto __t_return;
  __t_return:
  *__t6275t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t6276t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6276t=z;
}

int mul__t2440t(char** __t6277t, uint64_t* __t6278t, uint16_t* __t6279t, uint16_t* __t6280t, uint64_t* __t6281t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6282t, uint64_t* __t6283t, uint64_t* __t6284t) {
  char* FLOATS__buf__unsafe_ptr=*__t6277t;
  uint64_t FLOATS__buf__unsafe_size=*__t6278t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6279t;
  uint16_t FLOATS__buf__unsafe_align=*__t6280t;
  uint64_t FLOATS__pos=*__t6281t;
  int __t2441t=0;
  char* __t2443t__unsafe_ptr=0;
  uint64_t __t2443t__pos=0;
  uint64_t __t2443t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2444t=0;
  uint64_t __t2445t____t613t=0;
  uint64_t __t2445t__to=0;
  uint64_t __t2446t__from=0;
  uint64_t __t2446t__to=0;
  char __t2447t=0;
  uint64_t __t2448t__=0;
  uint64_t i=0;
  char* __t2449t__=0;
  char* __t2450t__=0;
  double __t2451t__value=0;
  double __t2452t__=0;
  double __t2453t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2102t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2443t__unsafe_ptr,&__t2443t__pos,&__t2443t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2443t__unsafe_ptr;
  v__pos=__t2443t__pos;
  v__length=__t2443t__length;
  of__t612t(v__length,&__t2445t____t613t,&__t2445t__to);
  range__t629t(__t2445t____t613t,__t2445t__to,&__t2446t__from,&__t2446t__to);
  __t2444t=0;
  while(1){
  __t_complain=get__t636t(__t2446t__from,__t2446t__to,__t2444t,&__t2448t__);
  __t2447t=__t_complain;
  i=__t2448t__;
  __t2447t=__t2447t==0;
  __t2444t=__t2444t+1;
  if(!__t2447t){
  break;
  }
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,i,&__t2449t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2165t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2450t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2450t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2451t__value,__t2450t__,8);
  at__t2171t(v2,i,&__t2452t__);
  mul__t177t(__t2451t__value,__t2452t__,&__t2453t__);
  if(!__t2449t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2449t__,&__t2453t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6277t=FLOATS__buf__unsafe_ptr;
  *__t6278t=FLOATS__buf__unsafe_size;
  *__t6279t=FLOATS__buf__unsafe_offset;
  *__t6280t=FLOATS__buf__unsafe_align;
  *__t6281t=FLOATS__pos;
  *__t6282t=v__unsafe_ptr;
  *__t6283t=v__pos;
  *__t6284t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t2113t(char** __t6285t, uint64_t* __t6286t, uint16_t* __t6287t, uint16_t* __t6288t, uint64_t* __t6289t, uint64_t length, char** __t6290t, uint64_t* __t6291t, uint64_t* __t6292t) {
  char* FLOATS__buf__unsafe_ptr=*__t6285t;
  uint64_t FLOATS__buf__unsafe_size=*__t6286t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6287t;
  uint16_t FLOATS__buf__unsafe_align=*__t6288t;
  uint64_t FLOATS__pos=*__t6289t;
  uint64_t __t2114t__=0;
  uint64_t __t2115t=0;
  char __t2116t__=0;
  uint64_t __t2117t__=0;
  uint64_t __t2118t=0;
  char __t2119t__=0;
  char* __t2120t__buf__unsafe_ptr=0;
  uint64_t __t2120t__buf__unsafe_size=0;
  uint16_t __t2120t__buf__unsafe_offset=0;
  uint16_t __t2120t__buf__unsafe_align=0;
  uint64_t __t2120t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t2121t__=0;
  int __t2122t=0;
  uint64_t __t2123t=0;
  uint64_t __t2124t__=0;
  uint64_t __t2125t=0;
  uint64_t __t2126t__=0;
  uint64_t __t2127t__=0;
  char* __t2129t__unsafe_ptr=0;
  uint64_t __t2129t__pos=0;
  uint64_t __t2129t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t2114t__);
  __t2115t=8;
  neq__t144t(__t2114t__,__t2115t,&__t2116t__);
  if(__t2116t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t2117t__);
  __t2118t=0;
  neq__t144t(__t2117t__,__t2118t,&__t2119t__);
  if(__t2119t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2120t__buf__unsafe_ptr,&__t2120t__buf__unsafe_size,&__t2120t__buf__unsafe_offset,&__t2120t__buf__unsafe_align,&__t2120t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2120t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2120t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2120t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2120t__buf__unsafe_align;
  surface__pos=__t2120t__pos;
  add__t175t(FLOATS__pos,length,&__t2121t__);
  FLOATS__pos=__t2121t__;
  __t2123t=8;
  mul__t199t(__t2123t,surface__pos,&__t2124t__);
  __t2125t=8;
  add__t175t(surface__pos,length,&__t2126t__);
  mul__t199t(__t2125t,__t2126t__,&__t2127t__);
  zero__t662t(FLOATS__buf__unsafe_ptr,__t2124t__,__t2127t__);
  vec__t2039t(surface__buf__unsafe_ptr,surface__pos,length,&__t2129t__unsafe_ptr,&__t2129t__pos,&__t2129t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6285t=FLOATS__buf__unsafe_ptr;
  *__t6286t=FLOATS__buf__unsafe_size;
  *__t6287t=FLOATS__buf__unsafe_offset;
  *__t6288t=FLOATS__buf__unsafe_align;
  *__t6289t=FLOATS__pos;
  *__t6290t=__t2129t__unsafe_ptr;
  *__t6291t=__t2129t__pos;
  *__t6292t=__t2129t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t5122t(char** __t6293t, uint64_t* __t6294t, uint16_t* __t6295t, uint16_t* __t6296t, uint64_t* __t6297t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6298t, uint64_t* __t6299t, uint64_t* __t6300t) {
  char* FLOATS__buf__unsafe_ptr=*__t6293t;
  uint64_t FLOATS__buf__unsafe_size=*__t6294t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6295t;
  uint16_t FLOATS__buf__unsafe_align=*__t6296t;
  uint64_t FLOATS__pos=*__t6297t;
  char* __t5123t__unsafe_ptr=0;
  uint64_t __t5123t__pos=0;
  uint64_t __t5123t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5124t=0;
  uint64_t __t5125t____t613t=0;
  uint64_t __t5125t__to=0;
  uint64_t __t5126t__from=0;
  uint64_t __t5126t__to=0;
  char __t5127t=0;
  uint64_t __t5128t__=0;
  uint64_t i=0;
  char* __t5129t__=0;
  char* __t5130t__=0;
  double __t5131t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2113t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t5123t__unsafe_ptr,&__t5123t__pos,&__t5123t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5123t__unsafe_ptr;
  result__pos=__t5123t__pos;
  result__length=__t5123t__length;
  of__t612t(v__length,&__t5125t____t613t,&__t5125t__to);
  range__t629t(__t5125t____t613t,__t5125t__to,&__t5126t__from,&__t5126t__to);
  __t5124t=0;
  while(1){
  __t_complain=get__t636t(__t5126t__from,__t5126t__to,__t5124t,&__t5128t__);
  __t5127t=__t_complain;
  i=__t5128t__;
  __t5127t=__t5127t==0;
  __t5124t=__t5124t+1;
  if(!__t5127t){
  break;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,i,&__t5129t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t5130t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5130t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5131t__value,__t5130t__,8);
  if(!__t5129t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5129t__,&__t5131t__value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6293t=FLOATS__buf__unsafe_ptr;
  *__t6294t=FLOATS__buf__unsafe_size;
  *__t6295t=FLOATS__buf__unsafe_offset;
  *__t6296t=FLOATS__buf__unsafe_align;
  *__t6297t=FLOATS__pos;
  *__t6298t=result__unsafe_ptr;
  *__t6299t=result__pos;
  *__t6300t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5953t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t6301t) {
  char __t5954t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t5954t__);
  if(__t5954t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6301t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5652t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t6302t) {
  char __t5653t__=0;
  uint64_t __t5654t=0;
  uint64_t __t5655t__=0;
  char* __t5656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5653t__);
  if(__t5653t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t5654t=24;
  mul__t199t(k,__t5654t,&__t5655t__);
  add__t663t(m__unsafe_ptr,__t5655t__,&__t5656t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6302t=__t5656t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5677t(char** __t6303t, uint64_t* __t6304t, uint16_t* __t6305t, uint16_t* __t6306t, uint64_t* __t6307t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6308t, uint64_t* __t6309t, uint64_t* __t6310t) {
  char* FLOATS__buf__unsafe_ptr=*__t6303t;
  uint64_t FLOATS__buf__unsafe_size=*__t6304t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6305t;
  uint16_t FLOATS__buf__unsafe_align=*__t6306t;
  uint64_t FLOATS__pos=*__t6307t;
  char __t5678t__=0;
  char* __t5679t__unsafe_ptr=0;
  uint64_t __t5679t__pos=0;
  uint64_t __t5679t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5680t=0;
  char __t5681t=0;
  char* __t5682t__=0;
  uint64_t __t5683t__row=0;
  uint64_t __t5683t__col=0;
  double __t5683t__value=0;
  uint64_t entry__row=0;
  uint64_t entry__col=0;
  double entry__value=0;
  char* __t5684t__=0;
  char* __t5685t__=0;
  double __t5686t__value=0;
  char* __t5687t__=0;
  double __t5688t__value=0;
  double __t5689t__=0;
  double __t5690t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5678t__);
  if(__t5678t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t2113t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5679t__unsafe_ptr,&__t5679t__pos,&__t5679t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5679t__unsafe_ptr;
  result__pos=__t5679t__pos;
  result__length=__t5679t__length;
  __t5680t=0;
  while(1){
  __t_complain=get__t5652t(m__unsafe_ptr,m__rows,m__cols,m__nnz,__t5680t,&__t5682t__);
  __t5681t=__t_complain;
  if(!__t5682t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5683t__row,__t5682t__,8);
  memcpy(&__t5683t__col,__t5682t__+8,8);
  memcpy(&__t5683t__value,__t5682t__+16,8);
  }
  entry__row=__t5683t__row;
  entry__col=__t5683t__col;
  entry__value=__t5683t__value;
  __t5681t=__t5681t==0;
  __t5680t=__t5680t+1;
  if(!__t5681t){
  break;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,entry__row,&__t5684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2165t(result__unsafe_ptr,result__pos,result__length,entry__row,&__t5685t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5685t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5686t__value,__t5685t__,8);
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,entry__col,&__t5687t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5687t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5688t__value,__t5687t__,8);
  mul__t177t(entry__value,__t5688t__value,&__t5689t__);
  add__t153t(__t5686t__value,__t5689t__,&__t5690t__);
  if(!__t5684t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5684t__,&__t5690t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6303t=FLOATS__buf__unsafe_ptr;
  *__t6304t=FLOATS__buf__unsafe_size;
  *__t6305t=FLOATS__buf__unsafe_offset;
  *__t6306t=FLOATS__buf__unsafe_align;
  *__t6307t=FLOATS__pos;
  *__t6308t=result__unsafe_ptr;
  *__t6309t=result__pos;
  *__t6310t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2050t(char** __t6311t, uint64_t* __t6312t, uint16_t* __t6313t, uint16_t* __t6314t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6311t=unsafe_ptr;
  *__t6312t=unsafe_size;
  *__t6313t=unsafe_offset;
  *__t6314t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t5142t(char** __t6315t, uint64_t v__pos, uint64_t v__length, char** __t6316t, uint64_t* __t6317t, uint16_t* __t6318t, uint16_t* __t6319t, uint64_t* __t6320t) {
  char* v__unsafe_ptr=*__t6315t;
  char* __t5143t__unsafe_ptr=0;
  uint64_t __t5143t__unsafe_size=0;
  uint16_t __t5143t__unsafe_offset=0;
  uint16_t __t5143t__unsafe_align=0;
  char* __t5144t__unsafe_ptr=0;
  uint64_t __t5144t__unsafe_size=0;
  uint16_t __t5144t__unsafe_offset=0;
  uint16_t __t5144t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t5145t__=0;
  uint64_t __t5146t__=0;
  uint64_t __t5147t=0;
  uint64_t pos=0;
  char* __t5148t__buf__unsafe_ptr=0;
  uint64_t __t5148t__buf__unsafe_size=0;
  uint16_t __t5148t__buf__unsafe_offset=0;
  uint16_t __t5148t__buf__unsafe_align=0;
  uint64_t __t5148t__pos=0;
  float____t_buffer____buffer__t2050t(&__t5143t__unsafe_ptr,&__t5143t__unsafe_size,&__t5143t__unsafe_offset,&__t5143t__unsafe_align);
  __t5144t__unsafe_ptr=__t5143t__unsafe_ptr;
  __t5144t__unsafe_size=__t5143t__unsafe_size;
  __t5144t__unsafe_offset=__t5143t__unsafe_offset;
  __t5144t__unsafe_align=__t5143t__unsafe_align;
  buf__unsafe_ptr=__t5144t__unsafe_ptr;
  buf__unsafe_size=__t5144t__unsafe_size;
  buf__unsafe_offset=__t5144t__unsafe_offset;
  buf__unsafe_align=__t5144t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t5145t__);
  add__t175t(v__pos,__t5145t__,&__t5146t__);
  buf__unsafe_size=__t5146t__;
  __t5147t=v__pos;
  pos=__t5147t;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,pos,&__t5148t__buf__unsafe_ptr,&__t5148t__buf__unsafe_size,&__t5148t__buf__unsafe_offset,&__t5148t__buf__unsafe_align,&__t5148t__pos);
  goto __t_return;
  __t_return:
  *__t6315t=v__unsafe_ptr;
  *__t6316t=__t5148t__buf__unsafe_ptr;
  *__t6317t=__t5148t__buf__unsafe_size;
  *__t6318t=__t5148t__buf__unsafe_offset;
  *__t6319t=__t5148t__buf__unsafe_align;
  *__t6320t=__t5148t__pos;
}

static inline __attribute__((always_inline)) void self__t5149t(char** __t6321t, uint64_t v__pos, uint64_t v__length, char** __t6322t, uint64_t* __t6323t, uint16_t* __t6324t, uint16_t* __t6325t, uint64_t* __t6326t, char** __t6327t, uint64_t* __t6328t, uint64_t* __t6329t) {
  char* v__unsafe_ptr=*__t6321t;
  char* __t5150t__buf__unsafe_ptr=0;
  uint64_t __t5150t__buf__unsafe_size=0;
  uint16_t __t5150t__buf__unsafe_offset=0;
  uint16_t __t5150t__buf__unsafe_align=0;
  uint64_t __t5150t__pos=0;
  arena__t5142t(&v__unsafe_ptr,v__pos,v__length,&__t5150t__buf__unsafe_ptr,&__t5150t__buf__unsafe_size,&__t5150t__buf__unsafe_offset,&__t5150t__buf__unsafe_align,&__t5150t__pos);
  goto __t_return;
  __t_return:
  *__t6321t=v__unsafe_ptr;
  *__t6322t=__t5150t__buf__unsafe_ptr;
  *__t6323t=__t5150t__buf__unsafe_size;
  *__t6324t=__t5150t__buf__unsafe_offset;
  *__t6325t=__t5150t__buf__unsafe_align;
  *__t6326t=__t5150t__pos;
  *__t6327t=v__unsafe_ptr;
  *__t6328t=v__pos;
  *__t6329t=v__length;
}

static inline __attribute__((always_inline)) int at__t2172t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6330t) {
  char* __t2173t__=0;
  double __t2174t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t2173t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2173t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2174t__value,__t2173t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6330t=__t2174t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2206t(char** __t6331t, uint64_t* __t6332t, uint16_t* __t6333t, uint16_t* __t6334t, uint64_t* __t6335t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6336t, uint64_t* __t6337t, uint64_t* __t6338t) {
  char* FLOATS__buf__unsafe_ptr=*__t6331t;
  uint64_t FLOATS__buf__unsafe_size=*__t6332t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6333t;
  uint16_t FLOATS__buf__unsafe_align=*__t6334t;
  uint64_t FLOATS__pos=*__t6335t;
  int __t2207t=0;
  char __t2208t__=0;
  char* __t2210t__unsafe_ptr=0;
  uint64_t __t2210t__pos=0;
  uint64_t __t2210t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2211t=0;
  uint64_t __t2212t____t613t=0;
  uint64_t __t2212t__to=0;
  uint64_t __t2213t__from=0;
  uint64_t __t2213t__to=0;
  char __t2214t=0;
  uint64_t __t2215t__=0;
  uint64_t i=0;
  char* __t2216t__=0;
  char* __t2217t__=0;
  double __t2218t__value=0;
  double __t2219t__=0;
  double __t2220t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t2208t__);
  if(__t2208t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t2102t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2210t__unsafe_ptr,&__t2210t__pos,&__t2210t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2210t__unsafe_ptr;
  v__pos=__t2210t__pos;
  v__length=__t2210t__length;
  of__t612t(v1__length,&__t2212t____t613t,&__t2212t__to);
  range__t629t(__t2212t____t613t,__t2212t__to,&__t2213t__from,&__t2213t__to);
  __t2211t=0;
  while(1){
  __t_complain=get__t636t(__t2213t__from,__t2213t__to,__t2211t,&__t2215t__);
  __t2214t=__t_complain;
  i=__t2215t__;
  __t2214t=__t2214t==0;
  __t2211t=__t2211t+1;
  if(!__t2214t){
  break;
  }
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,i,&__t2216t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2165t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2217t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2217t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2218t__value,__t2217t__,8);
  __t_errcode=at__t2172t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2219t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t2218t__value,__t2219t__,&__t2220t__);
  if(!__t2216t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2216t__,&__t2220t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6331t=FLOATS__buf__unsafe_ptr;
  *__t6332t=FLOATS__buf__unsafe_size;
  *__t6333t=FLOATS__buf__unsafe_offset;
  *__t6334t=FLOATS__buf__unsafe_align;
  *__t6335t=FLOATS__pos;
  *__t6336t=v__unsafe_ptr;
  *__t6337t=v__pos;
  *__t6338t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2662t(char** __t6339t, uint64_t* __t6340t, uint16_t* __t6341t, uint16_t* __t6342t, uint64_t* __t6343t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6344t, uint64_t* __t6345t, uint64_t* __t6346t) {
  char* FLOATS__buf__unsafe_ptr=*__t6339t;
  uint64_t FLOATS__buf__unsafe_size=*__t6340t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6341t;
  uint16_t FLOATS__buf__unsafe_align=*__t6342t;
  uint64_t FLOATS__pos=*__t6343t;
  int __t2663t=0;
  char* __t2665t__unsafe_ptr=0;
  uint64_t __t2665t__pos=0;
  uint64_t __t2665t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2666t=0;
  uint64_t __t2667t____t613t=0;
  uint64_t __t2667t__to=0;
  uint64_t __t2668t__from=0;
  uint64_t __t2668t__to=0;
  char __t2669t=0;
  uint64_t __t2670t__=0;
  uint64_t i=0;
  char* __t2671t__=0;
  char* __t2672t__=0;
  double __t2673t__value=0;
  double __t2674t__=0;
  double __t2675t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2102t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2665t__unsafe_ptr,&__t2665t__pos,&__t2665t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2665t__unsafe_ptr;
  v__pos=__t2665t__pos;
  v__length=__t2665t__length;
  p1=v1__unsafe_ptr;
  of__t612t(v__length,&__t2667t____t613t,&__t2667t__to);
  range__t629t(__t2667t____t613t,__t2667t__to,&__t2668t__from,&__t2668t__to);
  __t2666t=0;
  while(1){
  __t_complain=get__t636t(__t2668t__from,__t2668t__to,__t2666t,&__t2670t__);
  __t2669t=__t_complain;
  i=__t2670t__;
  __t2669t=__t2669t==0;
  __t2666t=__t2666t+1;
  if(!__t2669t){
  break;
  }
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,i,&__t2671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t2165t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2672t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2672t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2673t__value,__t2672t__,8);
  at__t2171t(v2,i,&__t2674t__);
  __t_errcode=div__t201t(__t2673t__value,__t2674t__,&__t2675t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2671t__,&__t2675t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6339t=FLOATS__buf__unsafe_ptr;
  *__t6340t=FLOATS__buf__unsafe_size;
  *__t6341t=FLOATS__buf__unsafe_offset;
  *__t6342t=FLOATS__buf__unsafe_align;
  *__t6343t=FLOATS__pos;
  *__t6344t=v__unsafe_ptr;
  *__t6345t=v__pos;
  *__t6346t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t6347t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6347t=z;
}

int reduce__t4094t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t6348t) {
  int __t4095t=0;
  double __t4096t=0;
  double __t4097t=0;
  double ret=0;
  int __t4098t=0;
  int __t4099t=0;
  uint64_t __t4100t=0;
  uint64_t __t4101t__=0;
  uint64_t __t4102t____t613t=0;
  uint64_t __t4102t__to=0;
  uint64_t __t4103t__from=0;
  uint64_t __t4103t__to=0;
  char __t4104t=0;
  uint64_t __t4105t__=0;
  uint64_t i=0;
  char* __t4106t__=0;
  double __t4107t__value=0;
  double __t4108t=0;
  double value=0;
  char __t4109t=0;
  char __t4110t=0;
  char* __t4111t__=0;
  double __t4112t__value=0;
  double __t4113t__=0;
  int __t4114t=0;
  int __t4115t=0;
  char __t4116t=0;
  char __t4117t=0;
  double __t4118t__=0;
  int __t4119t=0;
  int __t4120t=0;
  double __t4121t__=0;
  int __t4122t=0;
  int __t4123t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4096t=0.0;
  __t4097t=__t4096t;
  ret=__t4097t;
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t4101t__);
  of__t612t(__t4101t__,&__t4102t____t613t,&__t4102t__to);
  range__t629t(__t4102t____t613t,__t4102t__to,&__t4103t__from,&__t4103t__to);
  __t4100t=0;
  while(1){
  __t_complain=get__t636t(__t4103t__from,__t4103t__to,__t4100t,&__t4105t__);
  __t4104t=__t_complain;
  i=__t4105t__;
  __t4104t=__t4104t==0;
  __t4100t=__t4100t+1;
  if(!__t4104t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t4106t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4106t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4107t__value,__t4106t__,8);
  __t4108t=__t4107t__value;
  value=__t4108t;
  __t4110t=1;
  if(__t4110t){
  __t4109t=1;
  }
  if(__t4109t){
  __t_errcode=get__t2165t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t4111t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4111t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4112t__value,__t4111t__,8);
  sub__t326t(value,__t4112t__value,&__t4113t__);
  value=__t4113t__;
  }
  __t4117t=1;
  if(__t4117t){
  __t4116t=1;
  }
  if(__t4116t){
  abs__t2011t(value,&__t4118t__);
  value=__t4118t__;
  }
  add__t153t(ret,value,&__t4121t__);
  ret=__t4121t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6348t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t6349t) {
  int value=0;
  *__t6349t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t6350t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t6350t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t559t(uint64_t x, double* __t6351t) {
  int __t560t=0;
  int __t561t__=0;
  int __t562t=0;
  double z=0;
  not__t39t(__t560t,&__t561t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6351t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t6352t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6352t=z;
}

static inline __attribute__((always_inline)) int filter__t6001t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t6353t, uint64_t* __t6354t, uint64_t* __t6355t, double* __t6356t, uint64_t* __t6357t) {
  double __t6003t__=0;
  double p0norm=0;
  char* __t6004t__unsafe_ptr=0;
  uint64_t __t6004t__unsafe_size=0;
  uint16_t __t6004t__unsafe_offset=0;
  uint16_t __t6004t__unsafe_align=0;
  uint64_t __t6005t=0;
  uint64_t __t6006t__=0;
  uint64_t __t6007t__=0;
  char* __t6008t__unsafe_ptr=0;
  uint64_t __t6008t__unsafe_size=0;
  uint16_t __t6008t__unsafe_offset=0;
  uint16_t __t6008t__unsafe_align=0;
  char __t6009t____t692t__=0;
  char* __t6010t__buf__unsafe_ptr=0;
  uint64_t __t6010t__buf__unsafe_size=0;
  uint16_t __t6010t__buf__unsafe_offset=0;
  uint16_t __t6010t__buf__unsafe_align=0;
  uint64_t __t6010t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t6011t=0;
  double __t6012t__=0;
  double __t6013t__=0;
  char* __t6014t__unsafe_ptr=0;
  uint64_t __t6014t__pos=0;
  uint64_t __t6014t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t6015t__unsafe_ptr=0;
  uint64_t __t6015t__pos=0;
  uint64_t __t6015t__length=0;
  char* __t6016t__unsafe_ptr=0;
  uint64_t __t6016t__pos=0;
  uint64_t __t6016t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t6017t__unsafe_ptr=0;
  uint64_t __t6017t__pos=0;
  uint64_t __t6017t__length=0;
  char* __t6018t__unsafe_ptr=0;
  uint64_t __t6018t__pos=0;
  uint64_t __t6018t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t6019t__=0;
  char* __t6020t__unsafe_ptr=0;
  uint64_t __t6020t__pos=0;
  uint64_t __t6020t__length=0;
  char* __t6021t__unsafe_ptr=0;
  uint64_t __t6021t__pos=0;
  uint64_t __t6021t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t6022t=0;
  char __t6023t=0;
  double __t6024t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t6025t__unsafe_ptr=0;
  uint64_t __t6025t__pos=0;
  uint64_t __t6025t__length=0;
  char* __t6026t____t5150t__buf__unsafe_ptr=0;
  uint64_t __t6026t____t5150t__buf__unsafe_size=0;
  uint16_t __t6026t____t5150t__buf__unsafe_offset=0;
  uint16_t __t6026t____t5150t__buf__unsafe_align=0;
  uint64_t __t6026t____t5150t__pos=0;
  char* __t6026t__v__unsafe_ptr=0;
  uint64_t __t6026t__v__pos=0;
  uint64_t __t6026t__v__length=0;
  char* __t6027t__unsafe_ptr=0;
  uint64_t __t6027t__pos=0;
  uint64_t __t6027t__length=0;
  char* __t6028t____t5150t__buf__unsafe_ptr=0;
  uint64_t __t6028t____t5150t__buf__unsafe_size=0;
  uint16_t __t6028t____t5150t__buf__unsafe_offset=0;
  uint16_t __t6028t____t5150t__buf__unsafe_align=0;
  uint64_t __t6028t____t5150t__pos=0;
  char* __t6028t__v__unsafe_ptr=0;
  uint64_t __t6028t__v__pos=0;
  uint64_t __t6028t__v__length=0;
  char* __t6029t__unsafe_ptr=0;
  uint64_t __t6029t__pos=0;
  uint64_t __t6029t__length=0;
  char* __t6030t____t5150t__buf__unsafe_ptr=0;
  uint64_t __t6030t____t5150t__buf__unsafe_size=0;
  uint16_t __t6030t____t5150t__buf__unsafe_offset=0;
  uint16_t __t6030t____t5150t__buf__unsafe_align=0;
  uint64_t __t6030t____t5150t__pos=0;
  char* __t6030t__v__unsafe_ptr=0;
  uint64_t __t6030t__v__pos=0;
  uint64_t __t6030t__v__length=0;
  double __t6032t__=0;
  char* __t6033t__unsafe_ptr=0;
  uint64_t __t6033t__pos=0;
  uint64_t __t6033t__length=0;
  double __t6034t=0;
  char __t6035t__=0;
  double __t6038t__=0;
  double err=0;
  uint64_t __t6039t__=0;
  double __t6040t__=0;
  double __t6041t__=0;
  char __t6042t__=0;
  char* __t6043t____t5150t__buf__unsafe_ptr=0;
  uint64_t __t6043t____t5150t__buf__unsafe_size=0;
  uint16_t __t6043t____t5150t__buf__unsafe_offset=0;
  uint16_t __t6043t____t5150t__buf__unsafe_align=0;
  uint64_t __t6043t____t5150t__pos=0;
  char* __t6043t__v__unsafe_ptr=0;
  uint64_t __t6043t__v__pos=0;
  uint64_t __t6043t__v__length=0;
  char* __t6044t__unsafe_ptr=0;
  uint64_t __t6044t__pos=0;
  uint64_t __t6044t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2795t(p0__unsafe_ptr,p0__pos,p0__length,&__t6003t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t6003t__;
  float____t_buffer____buffer__t5958t(&__t6004t__unsafe_ptr,&__t6004t__unsafe_size,&__t6004t__unsafe_offset,&__t6004t__unsafe_align);
  __t6005t=100;
  len__t2158t(p0__unsafe_ptr,p0__pos,p0__length,&__t6006t__);
  mul__t199t(__t6005t,__t6006t__,&__t6007t__);
  __t_errcode=alloc__t690t(&__t6004t__unsafe_ptr,&__t6004t__unsafe_size,&__t6004t__unsafe_offset,&__t6004t__unsafe_align,__t6007t__,&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&__t6010t__buf__unsafe_ptr,&__t6010t__buf__unsafe_size,&__t6010t__buf__unsafe_offset,&__t6010t__buf__unsafe_align,&__t6010t__pos);
  FLOATS__pos=__t6010t__pos;
  __t6011t=1.0;
  sub__t326t(__t6011t,config__alpha,&__t6012t__);
  __t_errcode=div__t201t(__t6012t__,p0norm,&__t6013t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2440t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t6013t__,&__t6014t__unsafe_ptr,&__t6014t__pos,&__t6014t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__pos=__t6014t__pos;
  normalized_p0__length=__t6014t__length;
  __t_errcode=copy__t5122t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&FLOATS__pos,__t6008t__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6015t__unsafe_ptr,&__t6015t__pos,&__t6015t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6016t__pos=__t6015t__pos;
  __t6016t__length=__t6015t__length;
  prev_p__pos=__t6016t__pos;
  prev_p__length=__t6016t__length;
  __t_errcode=copy__t5122t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&FLOATS__pos,__t6008t__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6017t__unsafe_ptr,&__t6017t__pos,&__t6017t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6018t__pos=__t6017t__pos;
  __t6018t__length=__t6017t__length;
  p__pos=__t6018t__pos;
  p__length=__t6018t__length;
  len__t2158t(__t6008t__unsafe_ptr,p__pos,p__length,&__t6019t__);
  __t_errcode=vec__t2113t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&FLOATS__pos,__t6019t__,&__t6020t__unsafe_ptr,&__t6020t__pos,&__t6020t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6021t__pos=__t6020t__pos;
  __t6021t__length=__t6020t__length;
  empty__pos=__t6021t__pos;
  empty__length=__t6021t__length;
  __t6022t=0;
  while(1){
  __t_complain=get__t5953t(config__alpha,config__max_iters,config__tol,__t6022t,&__t6024t__);
  __t6023t=__t_complain;
  alpha=__t6024t__;
  __t6023t=__t6023t==0;
  __t6022t=__t6022t+1;
  if(!__t6023t){
  break;
  }
  iter=__t6022t;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5677t(&__t6008t__unsafe_ptr,&__t6008t__unsafe_size,&__t6008t__unsafe_offset,&__t6008t__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,__t6008t__unsafe_ptr,p__pos,p__length,&__t6025t__unsafe_ptr,&__t6025t__pos,&__t6025t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t5149t(&__t6008t__unsafe_ptr,__t6025t__pos,__t6025t__length,&__t6026t____t5150t__buf__unsafe_ptr,&__t6026t____t5150t__buf__unsafe_size,&__t6026t____t5150t__buf__unsafe_offset,&__t6026t____t5150t__buf__unsafe_align,&__t6026t____t5150t__pos,&__t6026t__v__unsafe_ptr,&__t6026t__v__pos,&__t6026t__v__length);
  __t_errcode=mul__t2440t(&__t6008t__unsafe_ptr,&__t6026t____t5150t__buf__unsafe_size,&__t6026t____t5150t__buf__unsafe_offset,&__t6026t____t5150t__buf__unsafe_align,&__t6026t____t5150t__pos,__t6008t__unsafe_ptr,__t6026t__v__pos,__t6026t__v__length,alpha,&__t6027t__unsafe_ptr,&__t6027t__pos,&__t6027t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__pos=__t6027t__pos;
  p__length=__t6027t__length;
  self__t5149t(&__t6008t__unsafe_ptr,p__pos,p__length,&__t6028t____t5150t__buf__unsafe_ptr,&__t6028t____t5150t__buf__unsafe_size,&__t6028t____t5150t__buf__unsafe_offset,&__t6028t____t5150t__buf__unsafe_align,&__t6028t____t5150t__pos,&__t6028t__v__unsafe_ptr,&__t6028t__v__pos,&__t6028t__v__length);
  __t_errcode=add__t2206t(&__t6008t__unsafe_ptr,&__t6028t____t5150t__buf__unsafe_size,&__t6028t____t5150t__buf__unsafe_offset,&__t6028t____t5150t__buf__unsafe_align,&__t6028t____t5150t__pos,__t6008t__unsafe_ptr,__t6028t__v__pos,__t6028t__v__length,__t6008t__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t6029t__unsafe_ptr,&__t6029t__pos,&__t6029t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__pos=__t6029t__pos;
  p__length=__t6029t__length;
  self__t5149t(&__t6008t__unsafe_ptr,p__pos,p__length,&__t6030t____t5150t__buf__unsafe_ptr,&__t6030t____t5150t__buf__unsafe_size,&__t6030t____t5150t__buf__unsafe_offset,&__t6030t____t5150t__buf__unsafe_align,&__t6030t____t5150t__pos,&__t6030t__v__unsafe_ptr,&__t6030t__v__pos,&__t6030t__v__length);
  __t_errcode=reduce__t2795t(__t6008t__unsafe_ptr,p__pos,p__length,&__t6032t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2662t(&__t6008t__unsafe_ptr,&__t6030t____t5150t__buf__unsafe_size,&__t6030t____t5150t__buf__unsafe_offset,&__t6030t____t5150t__buf__unsafe_align,&__t6030t____t5150t__pos,__t6008t__unsafe_ptr,__t6030t__v__pos,__t6030t__v__length,__t6032t__,&__t6033t__unsafe_ptr,&__t6033t__pos,&__t6033t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__pos=__t6033t__pos;
  p__length=__t6033t__length;
  __t6034t=0.0;
  neq__t122t(config__tol,__t6034t,&__t6035t__);
  if(__t6035t__){
  __t_errcode=reduce__t4094t(__t6008t__unsafe_ptr,prev_p__pos,prev_p__length,__t6008t__unsafe_ptr,p__pos,p__length,&__t6038t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t6038t__;
  len__t2158t(__t6008t__unsafe_ptr,p__pos,p__length,&__t6039t__);
  float__t559t(__t6039t__,&__t6040t__);
  mul__t177t(config__tol,__t6040t__,&__t6041t__);
  lt__t230t(err,__t6041t__,&__t6042t__);
  if(__t6042t__){
  break;
  }
  }
  empty__pos=prev_p__pos;
  empty__length=prev_p__length;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  FLOATS__pos=empty__pos;
  }
  self__t5149t(&__t6008t__unsafe_ptr,p__pos,p__length,&__t6043t____t5150t__buf__unsafe_ptr,&__t6043t____t5150t__buf__unsafe_size,&__t6043t____t5150t__buf__unsafe_offset,&__t6043t____t5150t__buf__unsafe_align,&__t6043t____t5150t__pos,&__t6043t__v__unsafe_ptr,&__t6043t__v__pos,&__t6043t__v__length);
  __t_errcode=mul__t2440t(&__t6008t__unsafe_ptr,&__t6043t____t5150t__buf__unsafe_size,&__t6043t____t5150t__buf__unsafe_offset,&__t6043t____t5150t__buf__unsafe_align,&__t6043t____t5150t__pos,__t6008t__unsafe_ptr,__t6043t__v__pos,__t6043t__v__length,p0norm,&__t6044t__unsafe_ptr,&__t6044t__pos,&__t6044t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__pos=__t6044t__pos;
  p__length=__t6044t__length;
  p__unsafe_ptr=__t6008t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t591t(p__unsafe_ptr,&__t6009t____t692t__);
  if(__t6009t____t692t__){
  free__t661t(&p__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6353t=p__unsafe_ptr;
  *__t6354t=p__pos;
  *__t6355t=p__length;
  *__t6356t=err;
  *__t6357t=iter;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t6358t, const char** __t6359t) {
  goto __t_return;
  __t_return:
  *__t6358t=value;
  *__t6359t=__t374t;
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

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t6360t, const char** __t6361t) {
  goto __t_return;
  __t_return:
  *__t6360t=value;
  *__t6361t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t6362t) {
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
  *__t6362t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5092t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t5093t=0;
  const char* endl=0;
  const char* __t5094t__value=0;
  const char* __t5094t____t374t=0;
  uint64_t __t5096t=0;
  uint64_t __t5097t____t613t=0;
  uint64_t __t5097t__to=0;
  uint64_t __t5098t__from=0;
  uint64_t __t5098t__to=0;
  char __t5099t=0;
  uint64_t __t5100t__=0;
  uint64_t i=0;
  char* __t5101t__=0;
  double __t5102t__value=0;
  double __t5103t__value=0;
  const char* __t5103t____t374t=0;
  uint64_t __t5105t=0;
  uint64_t __t5106t__=0;
  char __t5107t__=0;
  const char* __t5108t__value=0;
  const char* __t5108t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t5072t,&__t5094t__value,&__t5094t____t374t);
  print__t378t(__t5094t__value,__t5094t____t374t);
  of__t612t(v__length,&__t5097t____t613t,&__t5097t__to);
  range__t629t(__t5097t____t613t,__t5097t__to,&__t5098t__from,&__t5098t__to);
  __t5096t=0;
  while(1){
  __t_complain=get__t636t(__t5098t__from,__t5098t__to,__t5096t,&__t5100t__);
  __t5099t=__t_complain;
  i=__t5100t__;
  __t5099t=__t5099t==0;
  __t5096t=__t5096t+1;
  if(!__t5099t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t5101t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5101t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5102t__value,__t5101t__,8);
  nn__t375t(__t5102t__value,&__t5103t__value,&__t5103t____t374t);
  print__t383t(__t5103t__value,__t5103t____t374t);
  __t5105t=1;
  __t_errcode=sub__t352t(v__length,__t5105t,&__t5106t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5106t__,&__t5107t__);
  if(__t5107t__){
  nn__t373t(__t5087t,&__t5108t__value,&__t5108t____t374t);
  print__t378t(__t5108t__value,__t5108t____t374t);
  }
  }
  print__t378t(__t5090t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6098t() {
  char* __t6136t=0;
  uint64_t __t6137t=0;
  uint64_t __t6138t=0;
  uint64_t __t6139t=0;
  char* m__t6136t=0;
  uint64_t m__t6137t=0;
  uint64_t m__t6138t=0;
  uint64_t m__t6139t=0;
  double __t6141t=0;
  double __t6146t=0;
  double __t6147t=0;
  char* __t6148t__unsafe_ptr=0;
  uint64_t __t6148t__unsafe_size=0;
  uint16_t __t6148t__unsafe_offset=0;
  uint16_t __t6148t__unsafe_align=0;
  uint64_t __t6149t=0;
  char* __t6150t__unsafe_ptr=0;
  uint64_t __t6150t__unsafe_size=0;
  uint16_t __t6150t__unsafe_offset=0;
  uint16_t __t6150t__unsafe_align=0;
  char __t6151t____t692t__=0;
  char* __t6152t__unsafe_ptr=0;
  uint64_t __t6152t__pos=0;
  uint64_t __t6152t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t6153t=0;
  double __t6154t__alpha=0;
  uint64_t __t6154t__max_iters=0;
  double __t6154t__tol=0;
  char* __t6155t__p__unsafe_ptr=0;
  uint64_t __t6155t__p__pos=0;
  uint64_t __t6155t__p__length=0;
  double __t6155t__err=0;
  uint64_t __t6155t__iter=0;
  char __t6156t____t6009t____t692t__=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t6158t__value=0;
  const char* __t6158t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t6136t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t6137t=3;
  __t6138t=3;
  __t6139t=3;
  m__t6136t=__t6136t;
  m__t6137t=__t6137t;
  m__t6138t=__t6138t;
  m__t6139t=__t6139t;
  new__t806t();
  __t6141t=1.0;
  __t6146t=2.0;
  __t6147t=3.0;
  float____buffer__t6144t(&__t6148t__unsafe_ptr,&__t6148t__unsafe_size,&__t6148t__unsafe_offset,&__t6148t__unsafe_align);
  __t6149t=3;
  __t_errcode=alloc__t690t(&__t6148t__unsafe_ptr,&__t6148t__unsafe_size,&__t6148t__unsafe_offset,&__t6148t__unsafe_align,__t6149t,&__t6150t__unsafe_ptr,&__t6150t__unsafe_size,&__t6150t__unsafe_offset,&__t6150t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6148t__unsafe_ptr,&__t6141t,8);
  memcpy(__t6148t__unsafe_ptr+8,&__t6146t,8);
  memcpy(__t6148t__unsafe_ptr+16,&__t6147t,8);
  __t_errcode=vec__t2082t(&__t6148t__unsafe_ptr,&__t6148t__unsafe_size,&__t6148t__unsafe_offset,&__t6148t__unsafe_align,&__t6152t__unsafe_ptr,&__t6152t__pos,&__t6152t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t6152t__unsafe_ptr;
  p0__pos=__t6152t__pos;
  p0__length=__t6152t__length;
  __t6153t=0.9;
  ppr__t5943t(__t6153t,&__t6154t__alpha,&__t6154t__max_iters,&__t6154t__tol);
  __t_errcode=filter__t6001t(__t6154t__alpha,__t6154t__max_iters,__t6154t__tol,m__t6136t,m__t6137t,m__t6138t,m__t6139t,p0__unsafe_ptr,p0__pos,p0__length,&__t6155t__p__unsafe_ptr,&__t6155t__p__pos,&__t6155t__p__length,&__t6155t__err,&__t6155t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t6155t__p__unsafe_ptr;
  result__p__pos=__t6155t__p__pos;
  result__p__length=__t6155t__p__length;
  result__err=__t6155t__err;
  result__iter=__t6155t__iter;
  nn__t373t(__t6157t,&__t6158t__value,&__t6158t____t374t);
  print__t378t(__t6158t__value,__t6158t____t374t);
  print__t393t(result__iter);
  __t_errcode=print__t5092t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t6155t__p__unsafe_ptr,&__t6156t____t6009t____t692t__);
  if(__t6156t____t6009t____t692t__){
  free__t661t(&__t6155t__p__unsafe_ptr);
  }
  exists__t591t(__t6150t__unsafe_ptr,&__t6151t____t692t__);
  if(__t6151t____t692t__){
  free__t661t(&__t6150t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6098t();return 0;}