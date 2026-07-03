#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2961t="add";
const char* const __t399t="\n";
const char* const __t2898t="abs";
static const char* __t_all_errcodes[47] = {"noerr",
"error",
"null pointer",
"assertion error",
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

static inline __attribute__((always_inline)) void console__t382t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6157t(char** __t6170t, uint64_t* __t6171t, uint16_t* __t6172t, uint16_t* __t6173t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6170t=unsafe_ptr;
  *__t6171t=unsafe_size;
  *__t6172t=unsafe_offset;
  *__t6173t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t608t(char* x, char* __t6174t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6174t=z;
}

static inline __attribute__((always_inline)) void free__t678t(char** __t6175t) {
  char* allocated=*__t6175t;
  if(allocated){
  free(allocated);
  }
  *__t6175t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6176t) {
  int value=0;
  *__t6176t=value;
}

static inline __attribute__((always_inline)) void not__t44t(int __t_anon0, int* __t6177t) {
  int __t45t__=0;
  false__t14t(&__t45t__);
  goto __t_return;
  __t_return:
  *__t6177t=__t45t__;
}

static inline __attribute__((always_inline)) void is_different__t110t(uint64_t x, uint64_t y, int* __t6178t) {
  int __t112t=0;
  int __t113t__=0;
  not__t44t(__t112t,&__t113t__);
  goto __t_return;
  __t_return:
  *__t6178t=__t113t__;
}

static inline __attribute__((always_inline)) void eq__t136t(uint64_t x, uint64_t y, char* __t6179t) {
  int __t137t__=0;
  char z=0;
  is_different__t110t(x,y,&__t137t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6179t=z;
}

static inline __attribute__((always_inline)) void neq__t160t(uint64_t x, uint64_t y, char* __t6180t) {
  int __t161t__=0;
  char z=0;
  is_different__t110t(x,y,&__t161t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6180t=z;
}

static inline __attribute__((always_inline)) void nat__t682t(uint16_t x, uint64_t* __t6181t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6181t=value;
}

static inline __attribute__((always_inline)) void mul__t215t(uint64_t x, uint64_t y, uint64_t* __t6182t) {
  int __t216t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t216t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6182t=z;
}

static inline __attribute__((always_inline)) void zero__t679t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t35t(char value, char* __t6183t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6183t=z;
}

static inline __attribute__((always_inline)) int alloc__t671t(uint64_t bytes, char** __t6184t) {
  char* allocated=0;
  char __t672t__=0;
  char __t673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t608t(allocated,&__t672t__);
  not__t35t(__t672t__,&__t673t__);
  if(__t673t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6184t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t707t(char** __t6185t, uint64_t* __t6186t, uint16_t* __t6187t, uint16_t* __t6188t, uint64_t size, char** __t6189t, uint64_t* __t6190t, uint16_t* __t6191t, uint16_t* __t6192t) {
  char* buffer__unsafe_ptr=*__t6185t;
  uint64_t buffer__unsafe_size=*__t6186t;
  uint16_t buffer__unsafe_offset=*__t6187t;
  uint16_t buffer__unsafe_align=*__t6188t;
  int __t708t=0;
  char __t709t__=0;
  char __t711t__=0;
  uint64_t __t712t=0;
  char __t713t__=0;
  uint64_t __t714t=0;
  uint64_t __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t __t718t=0;
  char __t719t__=0;
  uint64_t __t720t__=0;
  uint64_t __t721t__=0;
  uint64_t bytes=0;
  uint64_t __t722t=0;
  char __t723t__=0;
  char* __t724t__=0;
  int __t725t=0;
  uint64_t __t726t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t136t(buffer__unsafe_size,size,&__t711t__);
  if(__t711t__){
  __t712t=0;
  neq__t160t(size,__t712t,&__t713t__);
  if(__t713t__){
  __t714t=0;
  nat__t682t(buffer__unsafe_align,&__t715t__);
  mul__t215t(__t715t__,size,&__t716t__);
  zero__t679t(buffer__unsafe_ptr,__t714t,__t716t__);
  }
  goto __t_return;
  }
  __t718t=0;
  neq__t160t(buffer__unsafe_size,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t682t(buffer__unsafe_align,&__t720t__);
  mul__t215t(__t720t__,size,&__t721t__);
  bytes=__t721t__;
  __t722t=0;
  eq__t136t(bytes,__t722t,&__t723t__);
  if(__t723t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t671t(bytes,&__t724t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t726t=0;
  zero__t679t(__t724t__,__t726t,bytes);
  buffer__unsafe_ptr=__t724t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t608t(buffer__unsafe_ptr,&__t709t__);
  if(__t709t__){
  free__t678t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6185t=buffer__unsafe_ptr;
  *__t6186t=buffer__unsafe_size;
  *__t6187t=buffer__unsafe_offset;
  *__t6188t=buffer__unsafe_align;
  *__t6189t=buffer__unsafe_ptr;
  *__t6190t=buffer__unsafe_size;
  *__t6191t=buffer__unsafe_offset;
  *__t6192t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t834t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6193t) {
  goto __t_return;
  __t_return:
  *__t6193t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2172t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6194t, uint64_t* __t6195t, uint64_t* __t6196t) {
  char* __t2174t__unsafe_ptr=0;
  uint64_t __t2174t__pos=0;
  uint64_t __t2174t__length=0;
  __t2174t__unsafe_ptr=unsafe_ptr;
  __t2174t__pos=pos;
  __t2174t__length=length;
  goto __t_return;
  __t_return:
  *__t6194t=__t2174t__unsafe_ptr;
  *__t6195t=__t2174t__pos;
  *__t6196t=__t2174t__length;
}

static inline __attribute__((always_inline)) int vec__t2219t(char** __t6197t, uint64_t* __t6198t, uint16_t* __t6199t, uint16_t* __t6200t, char** __t6201t, uint64_t* __t6202t, uint64_t* __t6203t) {
  char* buf__unsafe_ptr=*__t6197t;
  uint64_t buf__unsafe_size=*__t6198t;
  uint16_t buf__unsafe_offset=*__t6199t;
  uint16_t buf__unsafe_align=*__t6200t;
  uint64_t __t2220t__=0;
  uint64_t __t2221t=0;
  char __t2222t__=0;
  uint64_t __t2223t__=0;
  uint64_t __t2224t=0;
  char __t2225t__=0;
  uint64_t __t2226t=0;
  uint64_t __t2227t__=0;
  char* __t2228t__unsafe_ptr=0;
  uint64_t __t2228t__pos=0;
  uint64_t __t2228t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t682t(buf__unsafe_align,&__t2220t__);
  __t2221t=8;
  neq__t160t(__t2220t__,__t2221t,&__t2222t__);
  if(__t2222t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t682t(buf__unsafe_offset,&__t2223t__);
  __t2224t=0;
  neq__t160t(__t2223t__,__t2224t,&__t2225t__);
  if(__t2225t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t2226t=0;
  len__t834t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2227t__);
  vec__t2172t(buf__unsafe_ptr,__t2226t,__t2227t__,&__t2228t__unsafe_ptr,&__t2228t__pos,&__t2228t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6197t=buf__unsafe_ptr;
  *__t6198t=buf__unsafe_size;
  *__t6199t=buf__unsafe_offset;
  *__t6200t=buf__unsafe_align;
  *__t6201t=__t2228t__unsafe_ptr;
  *__t6202t=__t2228t__pos;
  *__t6203t=__t2228t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t340t(uint64_t x, uint64_t y, char* __t6204t) {
  int __t341t__=0;
  char z=0;
  is_different__t110t(x,y,&__t341t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6204t=z;
}

static inline __attribute__((always_inline)) void add__t191t(uint64_t x, uint64_t y, uint64_t* __t6205t) {
  int __t192t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t192t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6205t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6206t) {
  *__t6206t=to;
}

static inline __attribute__((always_inline)) void add__t680t(char* allocated, uint64_t offset, char** __t6207t) {
  char* element=0;
  char* __t681t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t681t__);
  goto __t_return;
  __t_return:
  *__t6207t=__t681t__;
}

static inline __attribute__((always_inline)) int get__t2298t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6208t) {
  char __t2299t__=0;
  uint64_t __t2300t=0;
  uint64_t __t2301t__=0;
  uint64_t __t2302t__=0;
  char* __t2303t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t340t(i,v__length,&__t2299t__);
  if(__t2299t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2300t=8;
  add__t191t(i,v__pos,&__t2301t__);
  mul__t215t(__t2300t,__t2301t__,&__t2302t__);
  add__t680t(v__unsafe_ptr,__t2302t__,&__t2303t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6208t=__t2303t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t609t(uint64_t value, uint64_t* __t6209t) {
  goto __t_return;
  __t_return:
  *__t6209t=value;
}

static inline __attribute__((always_inline)) void bits__t613t(double x, uint64_t* __t6210t) {
  uint64_t z=0;
  uint64_t __t614t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t609t(z,&__t614t__value);
  goto __t_return;
  __t_return:
  *__t6210t=__t614t__value;
}

static inline __attribute__((always_inline)) void bits__t611t(int64_t x, uint64_t* __t6211t) {
  uint64_t z=0;
  uint64_t __t612t__value=0;
  z=x;
  bits__t609t(z,&__t612t__value);
  goto __t_return;
  __t_return:
  *__t6211t=__t612t__value;
}

static inline __attribute__((always_inline)) void band__t625t(uint64_t x__value, uint64_t y__value, uint64_t* __t6212t) {
  uint64_t z=0;
  uint64_t __t626t__value=0;
  z=(x__value&y__value);
  bits__t609t(z,&__t626t__value);
  goto __t_return;
  __t_return:
  *__t6212t=__t626t__value;
}

static inline __attribute__((always_inline)) void float__t618t(uint64_t x__value, double* __t6213t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t6213t=z;
}

static inline __attribute__((always_inline)) void abs__t2144t(double x, double* __t6214t) {
  int64_t c=0;
  uint64_t __t2145t__value=0;
  uint64_t __t2146t__value=0;
  uint64_t __t2147t__value=0;
  double __t2148t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t613t(x,&__t2145t__value);
  bits__t611t(c,&__t2146t__value);
  band__t625t(__t2145t__value,__t2146t__value,&__t2147t__value);
  float__t618t(__t2147t__value,&__t2148t__);
  goto __t_return;
  __t_return:
  *__t6214t=__t2148t__;
}

static inline __attribute__((always_inline)) void is_different__t78t(double x, double y, int* __t6215t) {
  int __t80t=0;
  int __t81t__=0;
  not__t44t(__t80t,&__t81t__);
  goto __t_return;
  __t_return:
  *__t6215t=__t81t__;
}

static inline __attribute__((always_inline)) void add__t169t(double x, double y, double* __t6216t) {
  int __t170t__=0;
  double z=0;
  is_different__t78t(x,y,&__t170t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6216t=z;
}

static inline __attribute__((always_inline)) void reduce__t2983t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6217t) {
  char __t2984t=0;
  char __t2985t=0;
  double __t2986t=0;
  double __t2987t=0;
  double ret=0;
  int __t2988t=0;
  int __t2989t=0;
  int __t2990t=0;
  int __t2991t__=0;
  uint64_t __t2992t=0;
  char __t2993t=0;
  char* __t2994t__=0;
  double __t2995t__value=0;
  double _value=0;
  double __t2996t=0;
  double value=0;
  int __t2997t=0;
  int __t2998t=0;
  int __t2999t=0;
  char __t3000t=0;
  char __t3001t=0;
  double __t3002t__=0;
  int __t3003t=0;
  char __t3004t=0;
  char __t3005t=0;
  double __t3006t__=0;
  int __t3007t=0;
  int __t3008t=0;
  int __t_complain=0;
  __t2985t=1;
  if(__t2961t!=__t2961t){
  __t2985t=0;
  }
  if(__t2985t){
  __t2984t=1;
  }
  if(__t2984t){
  __t2986t=0.0;
  __t2987t=__t2986t;
  ret=__t2987t;
  }
  not__t44t(__t2990t,&__t2991t__);
  __t2992t=0-1;
  while(1){
  __t2992t=__t2992t+1;
  __t_complain=get__t2298t(v__unsafe_ptr,v__pos,v__length,__t2992t,&__t2994t__);
  __t2993t=__t_complain;
  if(!__t2994t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2995t__value,__t2994t__,8);
  }
  _value=__t2995t__value;
  __t2993t=__t2993t==0;
  if(!__t2993t){
  break;
  }
  __t2996t=_value;
  value=__t2996t;
  __t3001t=1;
  if(__t2898t!=__t2898t){
  __t3001t=0;
  }
  if(__t3001t){
  __t3000t=1;
  }
  if(__t3000t){
  abs__t2144t(value,&__t3002t__);
  value=__t3002t__;
  }
  __t3005t=1;
  if(__t2961t!=__t2961t){
  __t3005t=0;
  }
  if(__t3005t){
  __t3004t=1;
  }
  if(__t3004t){
  add__t169t(ret,value,&__t3006t__);
  ret=__t3006t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t6217t=ret;
}

static inline __attribute__((always_inline)) void print__t402t(double value) {
  int __t403t=0;
  const char* endl=0;
  endl=__t399t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t6153t() {
  double __t6156t=0;
  double __t6159t=0;
  double __t6160t=0;
  char* __t6161t__unsafe_ptr=0;
  uint64_t __t6161t__unsafe_size=0;
  uint16_t __t6161t__unsafe_offset=0;
  uint16_t __t6161t__unsafe_align=0;
  uint64_t __t6162t=0;
  char* __t6163t__unsafe_ptr=0;
  uint64_t __t6163t__unsafe_size=0;
  uint16_t __t6163t__unsafe_offset=0;
  uint16_t __t6163t__unsafe_align=0;
  char __t6164t____t709t__=0;
  char* __t6165t__unsafe_ptr=0;
  uint64_t __t6165t__pos=0;
  uint64_t __t6165t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  double __t6168t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t382t();
  __t6156t=1.0;
  __t6159t=2.0;
  __t6160t=3.0;
  float____buffer__t6157t(&__t6161t__unsafe_ptr,&__t6161t__unsafe_size,&__t6161t__unsafe_offset,&__t6161t__unsafe_align);
  __t6162t=3;
  __t_errcode=alloc__t707t(&__t6161t__unsafe_ptr,&__t6161t__unsafe_size,&__t6161t__unsafe_offset,&__t6161t__unsafe_align,__t6162t,&__t6163t__unsafe_ptr,&__t6163t__unsafe_size,&__t6163t__unsafe_offset,&__t6163t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6161t__unsafe_ptr,&__t6156t,8);
  memcpy(__t6161t__unsafe_ptr+8,&__t6159t,8);
  memcpy(__t6161t__unsafe_ptr+16,&__t6160t,8);
  __t_errcode=vec__t2219t(&__t6161t__unsafe_ptr,&__t6161t__unsafe_size,&__t6161t__unsafe_offset,&__t6161t__unsafe_align,&__t6165t__unsafe_ptr,&__t6165t__pos,&__t6165t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t6165t__unsafe_ptr;
  v__pos=__t6165t__pos;
  v__length=__t6165t__length;
  reduce__t2983t(v__unsafe_ptr,v__pos,v__length,&__t6168t__);
  print__t402t(__t6168t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t608t(__t6163t__unsafe_ptr,&__t6164t____t709t__);
  if(__t6164t____t709t__){
  free__t678t(&__t6163t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6153t();return 0;}