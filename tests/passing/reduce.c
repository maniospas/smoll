#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t397t="\n";
const char* const __t3064t="mul";
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

static inline __attribute__((always_inline)) void console__t380t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6153t(char** __t6165t, uint64_t* __t6166t, uint16_t* __t6167t, uint16_t* __t6168t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6165t=unsafe_ptr;
  *__t6166t=unsafe_size;
  *__t6167t=unsafe_offset;
  *__t6168t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t606t(char* x, char* __t6169t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6169t=z;
}

static inline __attribute__((always_inline)) void free__t676t(char** __t6170t) {
  char* allocated=*__t6170t;
  if(allocated){
  free(allocated);
  }
  *__t6170t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6171t) {
  int value=0;
  *__t6171t=value;
}

static inline __attribute__((always_inline)) void not__t42t(int __t_anon0, int* __t6172t) {
  int __t43t__=0;
  false__t14t(&__t43t__);
  goto __t_return;
  __t_return:
  *__t6172t=__t43t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t6173t) {
  int __t110t=0;
  int __t111t__=0;
  not__t42t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t6173t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6174t) {
  int __t135t__=0;
  char z=0;
  is_different__t108t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6174t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t6175t) {
  int __t159t__=0;
  char z=0;
  is_different__t108t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6175t=z;
}

static inline __attribute__((always_inline)) void nat__t680t(uint16_t x, uint64_t* __t6176t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6176t=value;
}

static inline __attribute__((always_inline)) void mul__t213t(uint64_t x, uint64_t y, uint64_t* __t6177t) {
  int __t214t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t214t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6177t=z;
}

static inline __attribute__((always_inline)) void zero__t677t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t33t(char value, char* __t6178t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6178t=z;
}

static inline __attribute__((always_inline)) int alloc__t669t(uint64_t bytes, char** __t6179t) {
  char* allocated=0;
  char __t670t__=0;
  char __t671t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t606t(allocated,&__t670t__);
  not__t33t(__t670t__,&__t671t__);
  if(__t671t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6179t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t705t(char** __t6180t, uint64_t* __t6181t, uint16_t* __t6182t, uint16_t* __t6183t, uint64_t size, char** __t6184t, uint64_t* __t6185t, uint16_t* __t6186t, uint16_t* __t6187t) {
  char* buffer__unsafe_ptr=*__t6180t;
  uint64_t buffer__unsafe_size=*__t6181t;
  uint16_t buffer__unsafe_offset=*__t6182t;
  uint16_t buffer__unsafe_align=*__t6183t;
  int __t706t=0;
  char __t707t__=0;
  char __t709t__=0;
  uint64_t __t710t=0;
  char __t711t__=0;
  uint64_t __t712t=0;
  uint64_t __t713t__=0;
  uint64_t __t714t__=0;
  uint64_t __t716t=0;
  char __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t __t719t__=0;
  uint64_t bytes=0;
  uint64_t __t720t=0;
  char __t721t__=0;
  char* __t722t__=0;
  int __t723t=0;
  uint64_t __t724t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t709t__);
  if(__t709t__){
  __t710t=0;
  neq__t158t(size,__t710t,&__t711t__);
  if(__t711t__){
  __t712t=0;
  nat__t680t(buffer__unsafe_align,&__t713t__);
  mul__t213t(__t713t__,size,&__t714t__);
  zero__t677t(buffer__unsafe_ptr,__t712t,__t714t__);
  }
  goto __t_return;
  }
  __t716t=0;
  neq__t158t(buffer__unsafe_size,__t716t,&__t717t__);
  if(__t717t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t680t(buffer__unsafe_align,&__t718t__);
  mul__t213t(__t718t__,size,&__t719t__);
  bytes=__t719t__;
  __t720t=0;
  eq__t134t(bytes,__t720t,&__t721t__);
  if(__t721t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t669t(bytes,&__t722t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t724t=0;
  zero__t677t(__t722t__,__t724t,bytes);
  buffer__unsafe_ptr=__t722t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t606t(buffer__unsafe_ptr,&__t707t__);
  if(__t707t__){
  free__t676t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6180t=buffer__unsafe_ptr;
  *__t6181t=buffer__unsafe_size;
  *__t6182t=buffer__unsafe_offset;
  *__t6183t=buffer__unsafe_align;
  *__t6184t=buffer__unsafe_ptr;
  *__t6185t=buffer__unsafe_size;
  *__t6186t=buffer__unsafe_offset;
  *__t6187t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t832t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6188t) {
  goto __t_return;
  __t_return:
  *__t6188t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2168t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6189t, uint64_t* __t6190t, uint64_t* __t6191t) {
  char* __t2170t__unsafe_ptr=0;
  uint64_t __t2170t__pos=0;
  uint64_t __t2170t__length=0;
  __t2170t__unsafe_ptr=unsafe_ptr;
  __t2170t__pos=pos;
  __t2170t__length=length;
  goto __t_return;
  __t_return:
  *__t6189t=__t2170t__unsafe_ptr;
  *__t6190t=__t2170t__pos;
  *__t6191t=__t2170t__length;
}

static inline __attribute__((always_inline)) int vec__t2215t(char** __t6192t, uint64_t* __t6193t, uint16_t* __t6194t, uint16_t* __t6195t, char** __t6196t, uint64_t* __t6197t, uint64_t* __t6198t) {
  char* buf__unsafe_ptr=*__t6192t;
  uint64_t buf__unsafe_size=*__t6193t;
  uint16_t buf__unsafe_offset=*__t6194t;
  uint16_t buf__unsafe_align=*__t6195t;
  uint64_t __t2216t__=0;
  uint64_t __t2217t=0;
  char __t2218t__=0;
  uint64_t __t2219t__=0;
  uint64_t __t2220t=0;
  char __t2221t__=0;
  uint64_t __t2222t=0;
  uint64_t __t2223t__=0;
  char* __t2224t__unsafe_ptr=0;
  uint64_t __t2224t__pos=0;
  uint64_t __t2224t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t680t(buf__unsafe_align,&__t2216t__);
  __t2217t=8;
  neq__t158t(__t2216t__,__t2217t,&__t2218t__);
  if(__t2218t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t680t(buf__unsafe_offset,&__t2219t__);
  __t2220t=0;
  neq__t158t(__t2219t__,__t2220t,&__t2221t__);
  if(__t2221t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t2222t=0;
  len__t832t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2223t__);
  vec__t2168t(buf__unsafe_ptr,__t2222t,__t2223t__,&__t2224t__unsafe_ptr,&__t2224t__pos,&__t2224t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6192t=buf__unsafe_ptr;
  *__t6193t=buf__unsafe_size;
  *__t6194t=buf__unsafe_offset;
  *__t6195t=buf__unsafe_align;
  *__t6196t=__t2224t__unsafe_ptr;
  *__t6197t=__t2224t__pos;
  *__t6198t=__t2224t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t338t(uint64_t x, uint64_t y, char* __t6199t) {
  int __t339t__=0;
  char z=0;
  is_different__t108t(x,y,&__t339t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6199t=z;
}

static inline __attribute__((always_inline)) void add__t189t(uint64_t x, uint64_t y, uint64_t* __t6200t) {
  int __t190t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t190t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6200t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6201t) {
  *__t6201t=to;
}

static inline __attribute__((always_inline)) void add__t678t(char* allocated, uint64_t offset, char** __t6202t) {
  char* element=0;
  char* __t679t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t679t__);
  goto __t_return;
  __t_return:
  *__t6202t=__t679t__;
}

static inline __attribute__((always_inline)) int get__t2294t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6203t) {
  char __t2295t__=0;
  uint64_t __t2296t=0;
  uint64_t __t2297t__=0;
  uint64_t __t2298t__=0;
  char* __t2299t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t338t(i,v__length,&__t2295t__);
  if(__t2295t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2296t=8;
  add__t189t(i,v__pos,&__t2297t__);
  mul__t213t(__t2296t,__t2297t__,&__t2298t__);
  add__t678t(v__unsafe_ptr,__t2298t__,&__t2299t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6203t=__t2299t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t76t(double x, double y, int* __t6204t) {
  int __t78t=0;
  int __t79t__=0;
  not__t42t(__t78t,&__t79t__);
  goto __t_return;
  __t_return:
  *__t6204t=__t79t__;
}

static inline __attribute__((always_inline)) void mul__t191t(double x, double y, double* __t6205t) {
  int __t192t__=0;
  double z=0;
  is_different__t76t(x,y,&__t192t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6205t=z;
}

static inline __attribute__((always_inline)) void reduce__t3060t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t6206t) {
  int __t3061t=0;
  char __t3062t=0;
  char __t3063t=0;
  double __t3065t=0;
  double __t3066t=0;
  double ret=0;
  int __t3067t=0;
  int __t3068t=0;
  int __t3069t__=0;
  uint64_t __t3070t=0;
  char __t3071t=0;
  char* __t3072t__=0;
  double __t3073t__value=0;
  double _value=0;
  double __t3074t=0;
  double value=0;
  int __t3075t=0;
  int __t3076t=0;
  int __t3077t=0;
  int __t3078t=0;
  int __t3079t=0;
  int __t3080t=0;
  char __t3081t=0;
  char __t3082t=0;
  double __t3083t__=0;
  int __t3084t=0;
  int __t_complain=0;
  __t3063t=1;
  if(__t3064t!=__t3064t){
  __t3063t=0;
  }
  if(__t3063t){
  __t3062t=1;
  }
  if(__t3062t){
  __t3065t=1.0;
  __t3066t=__t3065t;
  ret=__t3066t;
  }
  not__t42t(__t3068t,&__t3069t__);
  __t3070t=0-1;
  while(1){
  __t3070t=__t3070t+1;
  __t_complain=get__t2294t(v__unsafe_ptr,v__pos,v__length,__t3070t,&__t3072t__);
  __t3071t=__t_complain;
  if(!__t3072t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t3073t__value,__t3072t__,8);
  }
  _value=__t3073t__value;
  __t3071t=__t3071t==0;
  if(!__t3071t){
  break;
  }
  __t3074t=_value;
  value=__t3074t;
  __t3082t=1;
  if(__t3064t!=__t3064t){
  __t3082t=0;
  }
  if(__t3082t){
  __t3081t=1;
  }
  if(__t3081t){
  mul__t191t(ret,value,&__t3083t__);
  ret=__t3083t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t6206t=ret;
}

static inline __attribute__((always_inline)) void print__t400t(double value) {
  int __t401t=0;
  const char* endl=0;
  endl=__t397t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t6149t() {
  double __t6152t=0;
  double __t6155t=0;
  double __t6156t=0;
  char* __t6157t__unsafe_ptr=0;
  uint64_t __t6157t__unsafe_size=0;
  uint16_t __t6157t__unsafe_offset=0;
  uint16_t __t6157t__unsafe_align=0;
  uint64_t __t6158t=0;
  char* __t6159t__unsafe_ptr=0;
  uint64_t __t6159t__unsafe_size=0;
  uint16_t __t6159t__unsafe_offset=0;
  uint16_t __t6159t__unsafe_align=0;
  char __t6160t____t707t__=0;
  char* __t6161t__unsafe_ptr=0;
  uint64_t __t6161t__pos=0;
  uint64_t __t6161t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  double __t6163t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t380t();
  __t6152t=1.0;
  __t6155t=2.0;
  __t6156t=3.0;
  float____buffer__t6153t(&__t6157t__unsafe_ptr,&__t6157t__unsafe_size,&__t6157t__unsafe_offset,&__t6157t__unsafe_align);
  __t6158t=3;
  __t_errcode=alloc__t705t(&__t6157t__unsafe_ptr,&__t6157t__unsafe_size,&__t6157t__unsafe_offset,&__t6157t__unsafe_align,__t6158t,&__t6159t__unsafe_ptr,&__t6159t__unsafe_size,&__t6159t__unsafe_offset,&__t6159t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6157t__unsafe_ptr,&__t6152t,8);
  memcpy(__t6157t__unsafe_ptr+8,&__t6155t,8);
  memcpy(__t6157t__unsafe_ptr+16,&__t6156t,8);
  __t_errcode=vec__t2215t(&__t6157t__unsafe_ptr,&__t6157t__unsafe_size,&__t6157t__unsafe_offset,&__t6157t__unsafe_align,&__t6161t__unsafe_ptr,&__t6161t__pos,&__t6161t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t6161t__unsafe_ptr;
  v__pos=__t6161t__pos;
  v__length=__t6161t__length;
  reduce__t3060t(v__unsafe_ptr,v__pos,v__length,&__t6163t__);
  print__t400t(__t6163t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t606t(__t6159t__unsafe_ptr,&__t6160t____t707t__);
  if(__t6160t____t707t__){
  free__t676t(&__t6159t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6149t();return 0;}