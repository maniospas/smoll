#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t6113t="(sum, mean, std) = (";
const char* const __t5835t=", ";
const char* const __t374t="";
const char* const __t6120t=")\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t6100t(char** __t6122t, uint64_t* __t6123t, uint16_t* __t6124t, uint16_t* __t6125t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6122t=unsafe_ptr;
  *__t6123t=unsafe_size;
  *__t6124t=unsafe_offset;
  *__t6125t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t6126t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6126t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t6127t) {
  char* allocated=*__t6127t;
  if(allocated){
  free(allocated);
  }
  *__t6127t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6128t) {
  int value=0;
  *__t6128t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6129t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6129t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t6130t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t6130t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t6131t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6131t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t6132t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6132t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t6133t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6133t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t6134t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6134t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t6135t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6135t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t6136t) {
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
  *__t6136t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t6137t, uint64_t* __t6138t, uint16_t* __t6139t, uint16_t* __t6140t, uint64_t size, char** __t6141t, uint64_t* __t6142t, uint16_t* __t6143t, uint16_t* __t6144t) {
  char* buffer__unsafe_ptr=*__t6137t;
  uint64_t buffer__unsafe_size=*__t6138t;
  uint16_t buffer__unsafe_offset=*__t6139t;
  uint16_t buffer__unsafe_align=*__t6140t;
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
  *__t6137t=buffer__unsafe_ptr;
  *__t6138t=buffer__unsafe_size;
  *__t6139t=buffer__unsafe_offset;
  *__t6140t=buffer__unsafe_align;
  *__t6141t=buffer__unsafe_ptr;
  *__t6142t=buffer__unsafe_size;
  *__t6143t=buffer__unsafe_offset;
  *__t6144t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6145t) {
  goto __t_return;
  __t_return:
  *__t6145t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2039t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6146t, uint64_t* __t6147t, uint64_t* __t6148t) {
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__pos=0;
  uint64_t __t2041t__length=0;
  __t2041t__unsafe_ptr=unsafe_ptr;
  __t2041t__pos=pos;
  __t2041t__length=length;
  goto __t_return;
  __t_return:
  *__t6146t=__t2041t__unsafe_ptr;
  *__t6147t=__t2041t__pos;
  *__t6148t=__t2041t__length;
}

static inline __attribute__((always_inline)) int vec__t2082t(char** __t6149t, uint64_t* __t6150t, uint16_t* __t6151t, uint16_t* __t6152t, char** __t6153t, uint64_t* __t6154t, uint64_t* __t6155t) {
  char* buf__unsafe_ptr=*__t6149t;
  uint64_t buf__unsafe_size=*__t6150t;
  uint16_t buf__unsafe_offset=*__t6151t;
  uint16_t buf__unsafe_align=*__t6152t;
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
  *__t6149t=buf__unsafe_ptr;
  *__t6150t=buf__unsafe_size;
  *__t6151t=buf__unsafe_offset;
  *__t6152t=buf__unsafe_align;
  *__t6153t=__t2091t__unsafe_ptr;
  *__t6154t=__t2091t__pos;
  *__t6155t=__t2091t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t6156t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6156t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t6157t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6157t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t6158t) {
  *__t6158t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t6159t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t6159t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t2159t(char** __t6160t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6161t) {
  char* v__unsafe_ptr=*__t6160t;
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
  *__t6160t=v__unsafe_ptr;
  *__t6161t=__t2164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t2158t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t6162t) {
  goto __t_return;
  __t_return:
  *__t6162t=v__length;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t6163t, uint64_t* __t6164t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t6163t=__t613t;
  *__t6164t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t6165t, uint64_t* __t6166t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t6165t=from;
  *__t6166t=to;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t6167t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6167t=z;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6168t) {
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
  *__t6168t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2165t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6169t) {
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
  *__t6169t=__t2170t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6170t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6170t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t6171t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6171t=z;
}

static inline __attribute__((always_inline)) int reduce__t2882t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6172t) {
  char __t2883t=0;
  char __t2884t=0;
  double __t2885t=0;
  double __t2886t=0;
  double ret=0;
  int __t2887t=0;
  int __t2888t=0;
  int __t2889t=0;
  int __t2890t__=0;
  uint64_t __t2891t=0;
  uint64_t __t2892t__=0;
  uint64_t __t2893t____t613t=0;
  uint64_t __t2893t__to=0;
  uint64_t __t2894t__from=0;
  uint64_t __t2894t__to=0;
  char __t2895t=0;
  uint64_t __t2896t__=0;
  uint64_t i=0;
  char* __t2897t__=0;
  double __t2898t__value=0;
  double __t2899t=0;
  double value=0;
  int __t2900t=0;
  int __t2901t=0;
  int __t2902t=0;
  int __t2903t=0;
  int __t2904t=0;
  char __t2905t=0;
  char __t2906t=0;
  double __t2907t__=0;
  int __t2908t=0;
  int __t2909t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2884t=1;
  if(__t2884t){
  __t2883t=1;
  }
  if(__t2883t){
  __t2885t=0.0;
  __t2886t=__t2885t;
  ret=__t2886t;
  }
  not__t37t(__t2889t,&__t2890t__);
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t2892t__);
  of__t612t(__t2892t__,&__t2893t____t613t,&__t2893t__to);
  range__t629t(__t2893t____t613t,__t2893t__to,&__t2894t__from,&__t2894t__to);
  __t2891t=0;
  while(1){
  __t_complain=get__t636t(__t2894t__from,__t2894t__to,__t2891t,&__t2896t__);
  __t2895t=__t_complain;
  i=__t2896t__;
  __t2895t=__t2895t==0;
  __t2891t=__t2891t+1;
  if(!__t2895t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t2897t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2897t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2898t__value,__t2897t__,8);
  __t2899t=__t2898t__value;
  value=__t2899t;
  __t2906t=1;
  if(__t2906t){
  __t2905t=1;
  }
  if(__t2905t){
  add__t153t(ret,value,&__t2907t__);
  ret=__t2907t__;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6172t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t5036t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6173t) {
  double __t5038t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2882t(v__unsafe_ptr,v__pos,v__length,&__t5038t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6173t=__t5038t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t6174t) {
  int value=0;
  *__t6174t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t6175t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t6175t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t559t(uint64_t x, double* __t6176t) {
  int __t560t=0;
  int __t561t__=0;
  int __t562t=0;
  double z=0;
  not__t39t(__t560t,&__t561t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6176t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t6177t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6177t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t6178t) {
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
  *__t6178t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t5039t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6179t) {
  double __t5041t__=0;
  uint64_t __t5042t__=0;
  double __t5043t__=0;
  double __t5044t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2882t(v__unsafe_ptr,v__pos,v__length,&__t5041t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t5042t__);
  float__t559t(__t5042t__,&__t5043t__);
  __t_errcode=div__t201t(__t5041t__,__t5043t__,&__t5044t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6179t=__t5044t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t6180t, uint64_t r__to, uint64_t* __t6181t) {
  uint64_t r__from=*__t6180t;
  char __t633t__=0;
  uint64_t ret=0;
  uint64_t __t634t=0;
  uint64_t __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t633t__);
  if(__t633t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t634t=1;
  add__t175t(ret,__t634t,&__t635t__);
  r__from=__t635t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6180t=r__from;
  *__t6181t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t6182t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6182t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t6183t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6183t=z;
}

static inline __attribute__((always_inline)) int var__t5045t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6184t) {
  double __t5046t=0;
  double __t5047t=0;
  double sumsqr=0;
  double __t5048t=0;
  double __t5049t=0;
  double sum=0;
  uint64_t __t5050t__=0;
  uint64_t __t5051t____t613t=0;
  uint64_t __t5051t__to=0;
  uint64_t __t5052t__from=0;
  uint64_t __t5052t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t5053t=0;
  uint64_t __t5054t__=0;
  uint64_t i=0;
  char* __t5055t__=0;
  double __t5056t__value=0;
  double value=0;
  double __t5057t__=0;
  double __t5058t__=0;
  double __t5059t__=0;
  uint64_t __t5060t__=0;
  double __t5061t__=0;
  double n=0;
  double __t5062t__=0;
  double __t5063t__=0;
  double __t5064t__=0;
  double __t5065t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5046t=0.0;
  __t5047t=__t5046t;
  sumsqr=__t5047t;
  __t5048t=0.0;
  __t5049t=__t5048t;
  sum=__t5049t;
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t5050t__);
  of__t612t(__t5050t__,&__t5051t____t613t,&__t5051t__to);
  range__t629t(__t5051t____t613t,__t5051t__to,&__t5052t__from,&__t5052t__to);
  it__from=__t5052t__from;
  it__to=__t5052t__to;
  while(1){
  __t_complain=next__t632t(&it__from,it__to,&__t5054t__);
  __t5053t=__t_complain;
  i=__t5054t__;
  __t5053t=__t5053t==0;
  if(!__t5053t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t5055t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5055t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5056t__value,__t5055t__,8);
  value=__t5056t__value;
  add__t153t(sum,value,&__t5057t__);
  sum=__t5057t__;
  mul__t177t(value,value,&__t5058t__);
  add__t153t(sumsqr,__t5058t__,&__t5059t__);
  sumsqr=__t5059t__;
  }
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t5060t__);
  float__t559t(__t5060t__,&__t5061t__);
  n=__t5061t__;
  __t_errcode=div__t201t(sum,n,&__t5062t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t5062t__;
  __t_errcode=div__t201t(sumsqr,n,&__t5063t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t5064t__);
  sub__t326t(__t5063t__,__t5064t__,&__t5065t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6184t=__t5065t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t2025t(double x, double* __t6185t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t6185t=z;
}

static inline __attribute__((always_inline)) int std__t5066t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6186t) {
  double __t5067t__=0;
  double __t5068t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t5045t(v__unsafe_ptr,v__pos,v__length,&__t5067t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t2025t(__t5067t__,&__t5068t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6186t=__t5068t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6098t() {
  char* __t6102t__unsafe_ptr=0;
  uint64_t __t6102t__unsafe_size=0;
  uint16_t __t6102t__unsafe_offset=0;
  uint16_t __t6102t__unsafe_align=0;
  uint64_t __t6103t=0;
  char* __t6104t__unsafe_ptr=0;
  uint64_t __t6104t__unsafe_size=0;
  uint16_t __t6104t__unsafe_offset=0;
  uint16_t __t6104t__unsafe_align=0;
  char __t6105t____t692t__=0;
  char* __t6106t__unsafe_ptr=0;
  uint64_t __t6106t__pos=0;
  uint64_t __t6106t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t6107t=0;
  char* __t6108t__=0;
  double __t6109t=0;
  uint64_t __t6110t=0;
  char* __t6111t__=0;
  double __t6112t=0;
  double __t6115t__=0;
  double __t6117t__=0;
  double __t6119t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t6100t(&__t6102t__unsafe_ptr,&__t6102t__unsafe_size,&__t6102t__unsafe_offset,&__t6102t__unsafe_align);
  __t6103t=5;
  __t_errcode=alloc__t690t(&__t6102t__unsafe_ptr,&__t6102t__unsafe_size,&__t6102t__unsafe_offset,&__t6102t__unsafe_align,__t6103t,&__t6104t__unsafe_ptr,&__t6104t__unsafe_size,&__t6104t__unsafe_offset,&__t6104t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t2082t(&__t6104t__unsafe_ptr,&__t6104t__unsafe_size,&__t6104t__unsafe_offset,&__t6104t__unsafe_align,&__t6106t__unsafe_ptr,&__t6106t__pos,&__t6106t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t6106t__unsafe_ptr;
  v__pos=__t6106t__pos;
  v__length=__t6106t__length;
  __t6107t=0;
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,__t6107t,&__t6108t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6109t=1.0;
  if(!__t6108t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t6108t__,&__t6109t,8);
  __t6110t=1;
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,__t6110t,&__t6111t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6112t=2.0;
  if(!__t6111t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t6111t__,&__t6112t,8);
  print__t378t(__t6113t,__t374t);
  __t_errcode=sum__t5036t(v__unsafe_ptr,v__pos,v__length,&__t6115t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t6115t__,__t5835t);
  __t_errcode=mean__t5039t(v__unsafe_ptr,v__pos,v__length,&__t6117t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t6117t__,__t5835t);
  __t_errcode=std__t5066t(v__unsafe_ptr,v__pos,v__length,&__t6119t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t6119t__,__t6120t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t6104t__unsafe_ptr,&__t6105t____t692t__);
  if(__t6105t____t692t__){
  free__t661t(&__t6104t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6098t();return 0;}