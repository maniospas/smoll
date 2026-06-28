#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4957t="[ ";
const char* const __t4976t=" ]";
const char* const __t396t="\n";
const char* const __t388t="";
const char* const __t4973t="  ";
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

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6205t(char** __t6216t, uint64_t* __t6217t, uint16_t* __t6218t, uint16_t* __t6219t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6216t=unsafe_ptr;
  *__t6217t=unsafe_size;
  *__t6218t=unsafe_offset;
  *__t6219t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t6220t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6220t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t6221t) {
  char* allocated=*__t6221t;
  if(allocated){
  free(allocated);
  }
  *__t6221t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6222t) {
  int value=0;
  *__t6222t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t6223t) {
  int __t42t__=0;
  false__t10t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t6223t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t6224t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6224t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6225t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6225t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6226t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6226t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t6227t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6227t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6228t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6228t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t6229t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6229t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t6230t) {
  char* allocated=0;
  char __t669t__=0;
  char __t670t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t605t(allocated,&__t669t__);
  not__t32t(__t669t__,&__t670t__);
  if(__t670t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6230t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t6231t, uint64_t* __t6232t, uint16_t* __t6233t, uint16_t* __t6234t, uint64_t size, char** __t6235t, uint64_t* __t6236t, uint16_t* __t6237t, uint16_t* __t6238t) {
  char* buffer__unsafe_ptr=*__t6231t;
  uint64_t buffer__unsafe_size=*__t6232t;
  uint16_t buffer__unsafe_offset=*__t6233t;
  uint16_t buffer__unsafe_align=*__t6234t;
  int __t705t=0;
  char __t706t__=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t __t715t=0;
  char __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t bytes=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  char* __t721t__=0;
  int __t722t=0;
  uint64_t __t723t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t708t__);
  if(__t708t__){
  __t709t=0;
  neq__t157t(size,__t709t,&__t710t__);
  if(__t710t__){
  __t711t=0;
  nat__t679t(buffer__unsafe_align,&__t712t__);
  mul__t212t(__t712t__,size,&__t713t__);
  zero__t676t(buffer__unsafe_ptr,__t711t,__t713t__);
  }
  goto __t_return;
  }
  __t715t=0;
  neq__t157t(buffer__unsafe_size,__t715t,&__t716t__);
  if(__t716t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t717t__);
  mul__t212t(__t717t__,size,&__t718t__);
  bytes=__t718t__;
  __t719t=0;
  eq__t133t(bytes,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t668t(bytes,&__t721t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t723t=0;
  zero__t676t(__t721t__,__t723t,bytes);
  buffer__unsafe_ptr=__t721t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t605t(buffer__unsafe_ptr,&__t706t__);
  if(__t706t__){
  free__t675t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6231t=buffer__unsafe_ptr;
  *__t6232t=buffer__unsafe_size;
  *__t6233t=buffer__unsafe_offset;
  *__t6234t=buffer__unsafe_align;
  *__t6235t=buffer__unsafe_ptr;
  *__t6236t=buffer__unsafe_size;
  *__t6237t=buffer__unsafe_offset;
  *__t6238t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6239t) {
  goto __t_return;
  __t_return:
  *__t6239t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2154t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6240t, uint64_t* __t6241t, uint64_t* __t6242t) {
  char* __t2156t__unsafe_ptr=0;
  uint64_t __t2156t__pos=0;
  uint64_t __t2156t__length=0;
  __t2156t__unsafe_ptr=unsafe_ptr;
  __t2156t__pos=pos;
  __t2156t__length=length;
  goto __t_return;
  __t_return:
  *__t6240t=__t2156t__unsafe_ptr;
  *__t6241t=__t2156t__pos;
  *__t6242t=__t2156t__length;
}

static inline __attribute__((always_inline)) int vec__t2196t(char** __t6243t, uint64_t* __t6244t, uint16_t* __t6245t, uint16_t* __t6246t, char** __t6247t, uint64_t* __t6248t, uint64_t* __t6249t) {
  char* buf__unsafe_ptr=*__t6243t;
  uint64_t buf__unsafe_size=*__t6244t;
  uint16_t buf__unsafe_offset=*__t6245t;
  uint16_t buf__unsafe_align=*__t6246t;
  uint64_t __t2197t__=0;
  uint64_t __t2198t=0;
  char __t2199t__=0;
  uint64_t __t2200t__=0;
  uint64_t __t2201t=0;
  char __t2202t__=0;
  uint64_t __t2203t=0;
  uint64_t __t2204t__=0;
  char* __t2205t__unsafe_ptr=0;
  uint64_t __t2205t__pos=0;
  uint64_t __t2205t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t679t(buf__unsafe_align,&__t2197t__);
  __t2198t=8;
  neq__t157t(__t2197t__,__t2198t,&__t2199t__);
  if(__t2199t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t2200t__);
  __t2201t=0;
  neq__t157t(__t2200t__,__t2201t,&__t2202t__);
  if(__t2202t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t2203t=0;
  len__t831t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2204t__);
  vec__t2154t(buf__unsafe_ptr,__t2203t,__t2204t__,&__t2205t__unsafe_ptr,&__t2205t__pos,&__t2205t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6243t=buf__unsafe_ptr;
  *__t6244t=buf__unsafe_size;
  *__t6245t=buf__unsafe_offset;
  *__t6246t=buf__unsafe_align;
  *__t6247t=__t2205t__unsafe_ptr;
  *__t6248t=__t2205t__pos;
  *__t6249t=__t2205t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2165t(char** __t6250t, uint64_t* __t6251t, uint16_t* __t6252t, uint16_t* __t6253t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6250t=unsafe_ptr;
  *__t6251t=unsafe_size;
  *__t6252t=unsafe_offset;
  *__t6253t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t6254t, uint64_t* __t6255t, uint16_t* __t6256t, uint16_t* __t6257t, uint64_t size, char** __t6258t, uint64_t* __t6259t, uint16_t* __t6260t, uint16_t* __t6261t) {
  char* buffer__unsafe_ptr=*__t6254t;
  uint64_t buffer__unsafe_size=*__t6255t;
  uint16_t buffer__unsafe_offset=*__t6256t;
  uint16_t buffer__unsafe_align=*__t6257t;
  int __t686t=0;
  char __t687t__=0;
  char __t689t__=0;
  uint64_t __t690t=0;
  char __t691t__=0;
  uint64_t __t692t=0;
  uint64_t __t693t__=0;
  uint64_t __t694t__=0;
  uint64_t __t696t=0;
  char __t697t__=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t bytes=0;
  uint64_t __t700t=0;
  char __t701t__=0;
  char* __t702t__=0;
  int __t703t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t689t__);
  if(__t689t__){
  __t690t=0;
  neq__t157t(size,__t690t,&__t691t__);
  if(__t691t__){
  __t692t=0;
  nat__t679t(buffer__unsafe_align,&__t693t__);
  mul__t212t(__t693t__,size,&__t694t__);
  zero__t676t(buffer__unsafe_ptr,__t692t,__t694t__);
  }
  goto __t_return;
  }
  __t696t=0;
  neq__t157t(buffer__unsafe_size,__t696t,&__t697t__);
  if(__t697t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t698t__);
  mul__t212t(__t698t__,size,&__t699t__);
  bytes=__t699t__;
  __t700t=0;
  eq__t133t(bytes,__t700t,&__t701t__);
  if(__t701t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t668t(bytes,&__t702t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t702t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t605t(buffer__unsafe_ptr,&__t687t__);
  if(__t687t__){
  free__t675t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6254t=buffer__unsafe_ptr;
  *__t6255t=buffer__unsafe_size;
  *__t6256t=buffer__unsafe_offset;
  *__t6257t=buffer__unsafe_align;
  *__t6258t=buffer__unsafe_ptr;
  *__t6259t=buffer__unsafe_size;
  *__t6260t=buffer__unsafe_offset;
  *__t6261t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t2176t(uint64_t length, char** __t6262t, uint64_t* __t6263t, uint64_t* __t6264t) {
  char* __t2177t__unsafe_ptr=0;
  uint64_t __t2177t__unsafe_size=0;
  uint16_t __t2177t__unsafe_offset=0;
  uint16_t __t2177t__unsafe_align=0;
  char* __t2179t__unsafe_ptr=0;
  uint64_t __t2179t__unsafe_size=0;
  uint16_t __t2179t__unsafe_offset=0;
  uint16_t __t2179t__unsafe_align=0;
  char __t2180t____t687t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t2181t=0;
  uint64_t __t2182t=0;
  char* __t2183t__unsafe_ptr=0;
  uint64_t __t2183t__pos=0;
  uint64_t __t2183t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2165t(&__t2177t__unsafe_ptr,&__t2177t__unsafe_size,&__t2177t__unsafe_offset,&__t2177t__unsafe_align);
  __t_errcode=alloc__t685t(&__t2177t__unsafe_ptr,&__t2177t__unsafe_size,&__t2177t__unsafe_offset,&__t2177t__unsafe_align,length,&__t2179t__unsafe_ptr,&__t2179t__unsafe_size,&__t2179t__unsafe_offset,&__t2179t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2179t__unsafe_ptr;
  buf__unsafe_size=__t2179t__unsafe_size;
  buf__unsafe_offset=__t2179t__unsafe_offset;
  buf__unsafe_align=__t2179t__unsafe_align;
  __t2182t=0;
  vec__t2154t(buf__unsafe_ptr,__t2182t,length,&__t2183t__unsafe_ptr,&__t2183t__pos,&__t2183t__length);
  goto __t_return;
  
  __t_failure:exists__t605t(__t2183t__unsafe_ptr,&__t2180t____t687t__);
  if(__t2180t____t687t__){
  free__t675t(&__t2183t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6262t=__t2183t__unsafe_ptr;
  *__t6263t=__t2183t__pos;
  *__t6264t=__t2183t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t6265t) {
  int __t338t__=0;
  char z=0;
  is_different__t107t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6265t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6266t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6266t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, char* from, char** __t6267t) {
  *__t6267t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t6268t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t25t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t6268t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t2279t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6269t) {
  char __t2280t__=0;
  uint64_t __t2281t=0;
  uint64_t __t2282t__=0;
  uint64_t __t2283t__=0;
  char* __t2284t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2280t__);
  if(__t2280t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2281t=8;
  add__t188t(i,v__pos,&__t2282t__);
  mul__t212t(__t2281t,__t2282t__,&__t2283t__);
  add__t677t(v__unsafe_ptr,__t2283t__,&__t2284t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6269t=__t2284t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t2273t(char** __t6270t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6271t) {
  char* v__unsafe_ptr=*__t6270t;
  char __t2274t__=0;
  uint64_t __t2275t=0;
  uint64_t __t2276t__=0;
  uint64_t __t2277t__=0;
  char* __t2278t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2274t__);
  if(__t2274t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2275t=8;
  add__t188t(i,v__pos,&__t2276t__);
  mul__t212t(__t2275t,__t2276t__,&__t2277t__);
  add__t677t(v__unsafe_ptr,__t2277t__,&__t2278t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6270t=v__unsafe_ptr;
  *__t6271t=__t2278t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t2286t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6272t) {
  char* __t2288t__=0;
  double __t2289t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2279t(v__unsafe_ptr,v__pos,v__length,i,&__t2288t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2288t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2289t__value,__t2288t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6272t=__t2289t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t75t(double x, double y, int* __t6273t) {
  int __t77t=0;
  int __t78t__=0;
  not__t41t(__t77t,&__t78t__);
  goto __t_return;
  __t_return:
  *__t6273t=__t78t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t6274t) {
  int __t167t__=0;
  double z=0;
  is_different__t75t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6274t=z;
}

static inline __attribute__((always_inline)) int add__t2290t(char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6275t, uint64_t* __t6276t, uint64_t* __t6277t) {
  int __t2291t=0;
  char __t2292t__=0;
  char* __t2294t__unsafe_ptr=0;
  uint64_t __t2294t__pos=0;
  uint64_t __t2294t__length=0;
  char __t2295t____t2180t____t687t__=0;
  char* __t2296t__unsafe_ptr=0;
  uint64_t __t2296t__pos=0;
  uint64_t __t2296t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2297t=0;
  char __t2298t=0;
  char* __t2299t__=0;
  double __t2300t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2302t__=0;
  double __t2303t__=0;
  double __t2304t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t157t(v1__length,v2__length,&__t2292t__);
  if(__t2292t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t2176t(v1__length,&__t2294t__unsafe_ptr,&__t2294t__pos,&__t2294t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2296t__unsafe_ptr=__t2294t__unsafe_ptr;
  __t2296t__pos=__t2294t__pos;
  __t2296t__length=__t2294t__length;
  v__unsafe_ptr=__t2296t__unsafe_ptr;
  v__pos=__t2296t__pos;
  v__length=__t2296t__length;
  __t2297t=0-1;
  while(1){
  __t2297t=__t2297t+1;
  __t_complain=get__t2279t(v1__unsafe_ptr,v1__pos,v1__length,__t2297t,&__t2299t__);
  __t2298t=__t_complain;
  if(!__t2299t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2300t__value,__t2299t__,8);
  }
  value=__t2300t__value;
  __t2298t=__t2298t==0;
  if(!__t2298t){
  break;
  }
  i=__t2297t;
  __t_errcode=mutget__t2273t(&v__unsafe_ptr,v__pos,v__length,i,&__t2302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2286t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2303t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t166t(value,__t2303t__,&__t2304t__);
  if(!__t2302t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2302t__,&__t2304t__,8);
  }
  goto __t_return;
  
  __t_failure:exists__t605t(v__unsafe_ptr,&__t2295t____t2180t____t687t__);
  if(__t2295t____t2180t____t687t__){
  free__t675t(&v__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6275t=v__unsafe_ptr;
  *__t6276t=v__pos;
  *__t6277t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int offset__t6193t(char* x__unsafe_ptr, uint64_t x__pos, uint64_t x__length, char** __t6278t, uint64_t* __t6279t, uint64_t* __t6280t) {
  char* __t6196t=0;
  uint64_t __t6197t=0;
  uint64_t __t6198t=0;
  char* __t6199t__unsafe_ptr=0;
  uint64_t __t6199t__pos=0;
  uint64_t __t6199t__length=0;
  char __t6200t____t2295t____t2180t____t687t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t832t();
  __t6196t="\x00\x00\x00\x00\x00\x00\xf0?\x00\x00\x00\x00\x00\x00\xf0?";
  __t6197t=0;
  __t6198t=2;
  __t_errcode=add__t2290t(x__unsafe_ptr,x__pos,x__length,__t6196t,__t6197t,__t6198t,&__t6199t__unsafe_ptr,&__t6199t__pos,&__t6199t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t6199t__unsafe_ptr,&__t6200t____t2295t____t2180t____t687t__);
  if(__t6200t____t2295t____t2180t____t687t__){
  free__t675t(&__t6199t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6278t=__t6199t__unsafe_ptr;
  *__t6279t=__t6199t__pos;
  *__t6280t=__t6199t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t387t(const char* value, const char** __t6281t, const char** __t6282t) {
  goto __t_return;
  __t_return:
  *__t6281t=value;
  *__t6282t=__t388t;
}

static inline __attribute__((always_inline)) void print__t392t(const char* value, const char* endl) {
  int __t393t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void of__t626t(uint64_t to, uint64_t* __t6283t, uint64_t* __t6284t) {
  uint64_t __t627t=0;
  __t627t=0;
  goto __t_return;
  __t_return:
  *__t6283t=__t627t;
  *__t6284t=to;
}

static inline __attribute__((always_inline)) void range__t643t(uint64_t _from, uint64_t to, uint64_t* __t6285t, uint64_t* __t6286t) {
  uint64_t __t644t=0;
  uint64_t from=0;
  __t644t=_from;
  from=__t644t;
  goto __t_return;
  __t_return:
  *__t6285t=from;
  *__t6286t=to;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t6287t) {
  int __t266t__=0;
  char z=0;
  is_different__t107t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6287t=z;
}

static inline __attribute__((always_inline)) int get__t650t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6288t) {
  char __t651t__=0;
  char __t652t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(pos,r__to,&__t651t__);
  if(__t651t__){
  __t_errcode=9;
  goto __t_failure;
  }
  lt__t265t(pos,r__from,&__t652t__);
  if(__t652t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6288t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t389t(double value, double* __t6289t, const char** __t6290t) {
  goto __t_return;
  __t_return:
  *__t6289t=value;
  *__t6290t=__t388t;
}

static inline __attribute__((always_inline)) void print__t397t(double value, const char* endl) {
  int __t398t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t6291t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t107t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6291t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4978t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4979t=0;
  const char* endl=0;
  const char* __t4980t__value=0;
  const char* __t4980t____t388t=0;
  uint64_t __t4982t=0;
  uint64_t __t4983t____t627t=0;
  uint64_t __t4983t__to=0;
  uint64_t __t4984t__from=0;
  uint64_t __t4984t__to=0;
  char __t4985t=0;
  uint64_t __t4986t__=0;
  uint64_t i=0;
  char* __t4988t__=0;
  double __t4989t__value=0;
  double __t4990t__value=0;
  const char* __t4990t____t388t=0;
  uint64_t __t4992t=0;
  uint64_t __t4993t__=0;
  char __t4994t__=0;
  const char* __t4995t__value=0;
  const char* __t4995t____t388t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t396t;
  nn__t387t(__t4957t,&__t4980t__value,&__t4980t____t388t);
  print__t392t(__t4980t__value,__t4980t____t388t);
  of__t626t(v__length,&__t4983t____t627t,&__t4983t__to);
  range__t643t(__t4983t____t627t,__t4983t__to,&__t4984t__from,&__t4984t__to);
  __t4982t=0-1;
  while(1){
  __t4982t=__t4982t+1;
  __t_complain=get__t650t(__t4984t__from,__t4984t__to,__t4982t,&__t4986t__);
  __t4985t=__t_complain;
  i=__t4986t__;
  __t4985t=__t4985t==0;
  if(!__t4985t){
  break;
  }
  __t_errcode=get__t2279t(v__unsafe_ptr,v__pos,v__length,i,&__t4988t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4988t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4989t__value,__t4988t__,8);
  nn__t389t(__t4989t__value,&__t4990t__value,&__t4990t____t388t);
  print__t397t(__t4990t__value,__t4990t____t388t);
  __t4992t=1;
  __t_errcode=sub__t365t(v__length,__t4992t,&__t4993t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t265t(i,__t4993t__,&__t4994t__);
  if(__t4994t__){
  nn__t387t(__t4973t,&__t4995t__value,&__t4995t____t388t);
  print__t392t(__t4995t__value,__t4995t____t388t);
  }
  }
  print__t392t(__t4976t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6201t() {
  double __t6204t=0;
  double __t6207t=0;
  char* __t6208t__unsafe_ptr=0;
  uint64_t __t6208t__unsafe_size=0;
  uint16_t __t6208t__unsafe_offset=0;
  uint16_t __t6208t__unsafe_align=0;
  uint64_t __t6209t=0;
  char* __t6210t__unsafe_ptr=0;
  uint64_t __t6210t__unsafe_size=0;
  uint16_t __t6210t__unsafe_offset=0;
  uint16_t __t6210t__unsafe_align=0;
  char __t6211t____t706t__=0;
  char* __t6212t__unsafe_ptr=0;
  uint64_t __t6212t__pos=0;
  uint64_t __t6212t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  char* __t6213t__unsafe_ptr=0;
  uint64_t __t6213t__pos=0;
  uint64_t __t6213t__length=0;
  char __t6214t____t6200t____t2295t____t2180t____t687t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t6204t=0.0;
  __t6207t=0.0;
  float____buffer__t6205t(&__t6208t__unsafe_ptr,&__t6208t__unsafe_size,&__t6208t__unsafe_offset,&__t6208t__unsafe_align);
  __t6209t=2;
  __t_errcode=alloc__t704t(&__t6208t__unsafe_ptr,&__t6208t__unsafe_size,&__t6208t__unsafe_offset,&__t6208t__unsafe_align,__t6209t,&__t6210t__unsafe_ptr,&__t6210t__unsafe_size,&__t6210t__unsafe_offset,&__t6210t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6208t__unsafe_ptr,&__t6204t,8);
  memcpy(__t6208t__unsafe_ptr+8,&__t6207t,8);
  __t_errcode=vec__t2196t(&__t6208t__unsafe_ptr,&__t6208t__unsafe_size,&__t6208t__unsafe_offset,&__t6208t__unsafe_align,&__t6212t__unsafe_ptr,&__t6212t__pos,&__t6212t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t6212t__unsafe_ptr;
  x__pos=__t6212t__pos;
  x__length=__t6212t__length;
  __t_errcode=offset__t6193t(x__unsafe_ptr,x__pos,x__length,&__t6213t__unsafe_ptr,&__t6213t__pos,&__t6213t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4978t(__t6213t__unsafe_ptr,__t6213t__pos,__t6213t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t6213t__unsafe_ptr,&__t6214t____t6200t____t2295t____t2180t____t687t__);
  if(__t6214t____t6200t____t2295t____t2180t____t687t__){
  free__t675t(&__t6213t__unsafe_ptr);
  }
  exists__t605t(__t6210t__unsafe_ptr,&__t6211t____t706t__);
  if(__t6211t____t706t__){
  free__t675t(&__t6210t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6201t();return 0;}