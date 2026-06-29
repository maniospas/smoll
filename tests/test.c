#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4972t=" ]";
const char* const __t4953t="[ ";
const char* const __t388t="";
const char* const __t396t="\n";
const char* const __t4969t="  ";
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

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6214t(char** __t6229t, uint64_t* __t6230t, uint16_t* __t6231t, uint16_t* __t6232t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6229t=unsafe_ptr;
  *__t6230t=unsafe_size;
  *__t6231t=unsafe_offset;
  *__t6232t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t6233t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6233t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t6234t) {
  char* allocated=*__t6234t;
  if(allocated){
  free(allocated);
  }
  *__t6234t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6235t) {
  int value=0;
  *__t6235t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t6236t) {
  int __t42t__=0;
  false__t10t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t6236t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t6237t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6237t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6238t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6238t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6239t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6239t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t6240t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6240t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6241t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6241t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t6242t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6242t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t6243t) {
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
  *__t6243t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t6244t, uint64_t* __t6245t, uint16_t* __t6246t, uint16_t* __t6247t, uint64_t size, char** __t6248t, uint64_t* __t6249t, uint16_t* __t6250t, uint16_t* __t6251t) {
  char* buffer__unsafe_ptr=*__t6244t;
  uint64_t buffer__unsafe_size=*__t6245t;
  uint16_t buffer__unsafe_offset=*__t6246t;
  uint16_t buffer__unsafe_align=*__t6247t;
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
  *__t6244t=buffer__unsafe_ptr;
  *__t6245t=buffer__unsafe_size;
  *__t6246t=buffer__unsafe_offset;
  *__t6247t=buffer__unsafe_align;
  *__t6248t=buffer__unsafe_ptr;
  *__t6249t=buffer__unsafe_size;
  *__t6250t=buffer__unsafe_offset;
  *__t6251t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6252t) {
  goto __t_return;
  __t_return:
  *__t6252t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2154t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6253t, uint64_t* __t6254t, uint64_t* __t6255t) {
  char* __t2156t__unsafe_ptr=0;
  uint64_t __t2156t__pos=0;
  uint64_t __t2156t__length=0;
  __t2156t__unsafe_ptr=unsafe_ptr;
  __t2156t__pos=pos;
  __t2156t__length=length;
  goto __t_return;
  __t_return:
  *__t6253t=__t2156t__unsafe_ptr;
  *__t6254t=__t2156t__pos;
  *__t6255t=__t2156t__length;
}

static inline __attribute__((always_inline)) int vec__t2196t(char** __t6256t, uint64_t* __t6257t, uint16_t* __t6258t, uint16_t* __t6259t, char** __t6260t, uint64_t* __t6261t, uint64_t* __t6262t) {
  char* buf__unsafe_ptr=*__t6256t;
  uint64_t buf__unsafe_size=*__t6257t;
  uint16_t buf__unsafe_offset=*__t6258t;
  uint16_t buf__unsafe_align=*__t6259t;
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
  *__t6256t=buf__unsafe_ptr;
  *__t6257t=buf__unsafe_size;
  *__t6258t=buf__unsafe_offset;
  *__t6259t=buf__unsafe_align;
  *__t6260t=__t2205t__unsafe_ptr;
  *__t6261t=__t2205t__pos;
  *__t6262t=__t2205t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2165t(char** __t6263t, uint64_t* __t6264t, uint16_t* __t6265t, uint16_t* __t6266t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6263t=unsafe_ptr;
  *__t6264t=unsafe_size;
  *__t6265t=unsafe_offset;
  *__t6266t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t6267t, uint64_t* __t6268t, uint16_t* __t6269t, uint16_t* __t6270t, uint64_t size, char** __t6271t, uint64_t* __t6272t, uint16_t* __t6273t, uint16_t* __t6274t) {
  char* buffer__unsafe_ptr=*__t6267t;
  uint64_t buffer__unsafe_size=*__t6268t;
  uint16_t buffer__unsafe_offset=*__t6269t;
  uint16_t buffer__unsafe_align=*__t6270t;
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
  *__t6267t=buffer__unsafe_ptr;
  *__t6268t=buffer__unsafe_size;
  *__t6269t=buffer__unsafe_offset;
  *__t6270t=buffer__unsafe_align;
  *__t6271t=buffer__unsafe_ptr;
  *__t6272t=buffer__unsafe_size;
  *__t6273t=buffer__unsafe_offset;
  *__t6274t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t2176t(uint64_t length, char** __t6275t, uint64_t* __t6276t, uint64_t* __t6277t) {
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
  *__t6275t=__t2183t__unsafe_ptr;
  *__t6276t=__t2183t__pos;
  *__t6277t=__t2183t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t6278t) {
  int __t338t__=0;
  char z=0;
  is_different__t107t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6278t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6279t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6279t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, char* from, char** __t6280t) {
  *__t6280t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t6281t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t25t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t6281t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t2275t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6282t) {
  char __t2276t__=0;
  uint64_t __t2277t=0;
  uint64_t __t2278t__=0;
  uint64_t __t2279t__=0;
  char* __t2280t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2276t__);
  if(__t2276t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2277t=8;
  add__t188t(i,v__pos,&__t2278t__);
  mul__t212t(__t2277t,__t2278t__,&__t2279t__);
  add__t677t(v__unsafe_ptr,__t2279t__,&__t2280t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6282t=__t2280t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t2269t(char** __t6283t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6284t) {
  char* v__unsafe_ptr=*__t6283t;
  char __t2270t__=0;
  uint64_t __t2271t=0;
  uint64_t __t2272t__=0;
  uint64_t __t2273t__=0;
  char* __t2274t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2270t__);
  if(__t2270t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2271t=8;
  add__t188t(i,v__pos,&__t2272t__);
  mul__t212t(__t2271t,__t2272t__,&__t2273t__);
  add__t677t(v__unsafe_ptr,__t2273t__,&__t2274t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6283t=v__unsafe_ptr;
  *__t6284t=__t2274t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t2282t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6285t) {
  char* __t2284t__=0;
  double __t2285t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2275t(v__unsafe_ptr,v__pos,v__length,i,&__t2284t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2284t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2285t__value,__t2284t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6285t=__t2285t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t75t(double x, double y, int* __t6286t) {
  int __t77t=0;
  int __t78t__=0;
  not__t41t(__t77t,&__t78t__);
  goto __t_return;
  __t_return:
  *__t6286t=__t78t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t6287t) {
  int __t167t__=0;
  double z=0;
  is_different__t75t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6287t=z;
}

int add__t2286t(char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6288t, uint64_t* __t6289t, uint64_t* __t6290t) {
  int __t2287t=0;
  char __t2288t__=0;
  char* __t2290t__unsafe_ptr=0;
  uint64_t __t2290t__pos=0;
  uint64_t __t2290t__length=0;
  char __t2291t____t2180t____t687t__=0;
  char* __t2292t__unsafe_ptr=0;
  uint64_t __t2292t__pos=0;
  uint64_t __t2292t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2293t=0;
  char __t2294t=0;
  char* __t2295t__=0;
  double __t2296t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2298t__=0;
  double __t2299t__=0;
  double __t2300t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t157t(v1__length,v2__length,&__t2288t__);
  if(__t2288t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t2176t(v1__length,&__t2290t__unsafe_ptr,&__t2290t__pos,&__t2290t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2292t__unsafe_ptr=__t2290t__unsafe_ptr;
  __t2292t__pos=__t2290t__pos;
  __t2292t__length=__t2290t__length;
  v__unsafe_ptr=__t2292t__unsafe_ptr;
  v__pos=__t2292t__pos;
  v__length=__t2292t__length;
  __t2293t=0-1;
  while(1){
  __t2293t=__t2293t+1;
  __t_complain=get__t2275t(v1__unsafe_ptr,v1__pos,v1__length,__t2293t,&__t2295t__);
  __t2294t=__t_complain;
  if(!__t2295t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2296t__value,__t2295t__,8);
  }
  value=__t2296t__value;
  __t2294t=__t2294t==0;
  if(!__t2294t){
  break;
  }
  i=__t2293t;
  __t_errcode=mutget__t2269t(&v__unsafe_ptr,v__pos,v__length,i,&__t2298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2282t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2299t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t166t(value,__t2299t__,&__t2300t__);
  if(!__t2298t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2298t__,&__t2300t__,8);
  }
  goto __t_return;
  
  __t_failure:exists__t605t(v__unsafe_ptr,&__t2291t____t2180t____t687t__);
  if(__t2291t____t2180t____t687t__){
  free__t675t(&v__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6288t=v__unsafe_ptr;
  *__t6289t=v__pos;
  *__t6290t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t387t(const char* value, const char** __t6291t, const char** __t6292t) {
  goto __t_return;
  __t_return:
  *__t6291t=value;
  *__t6292t=__t388t;
}

static inline __attribute__((always_inline)) void print__t392t(const char* value, const char* endl) {
  int __t393t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void of__t626t(uint64_t to, uint64_t* __t6293t, uint64_t* __t6294t) {
  uint64_t __t627t=0;
  __t627t=0;
  goto __t_return;
  __t_return:
  *__t6293t=__t627t;
  *__t6294t=to;
}

static inline __attribute__((always_inline)) void range__t643t(uint64_t _from, uint64_t to, uint64_t* __t6295t, uint64_t* __t6296t) {
  uint64_t __t644t=0;
  uint64_t from=0;
  __t644t=_from;
  from=__t644t;
  goto __t_return;
  __t_return:
  *__t6295t=from;
  *__t6296t=to;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t6297t) {
  int __t266t__=0;
  char z=0;
  is_different__t107t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6297t=z;
}

static inline __attribute__((always_inline)) int get__t650t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6298t) {
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
  *__t6298t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t389t(double value, double* __t6299t, const char** __t6300t) {
  goto __t_return;
  __t_return:
  *__t6299t=value;
  *__t6300t=__t388t;
}

static inline __attribute__((always_inline)) void print__t397t(double value, const char* endl) {
  int __t398t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t6301t) {
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
  *__t6301t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4974t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4975t=0;
  const char* endl=0;
  const char* __t4976t__value=0;
  const char* __t4976t____t388t=0;
  uint64_t __t4978t=0;
  uint64_t __t4979t____t627t=0;
  uint64_t __t4979t__to=0;
  uint64_t __t4980t__from=0;
  uint64_t __t4980t__to=0;
  char __t4981t=0;
  uint64_t __t4982t__=0;
  uint64_t i=0;
  char* __t4984t__=0;
  double __t4985t__value=0;
  double __t4986t__value=0;
  const char* __t4986t____t388t=0;
  uint64_t __t4988t=0;
  uint64_t __t4989t__=0;
  char __t4990t__=0;
  const char* __t4991t__value=0;
  const char* __t4991t____t388t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t396t;
  nn__t387t(__t4953t,&__t4976t__value,&__t4976t____t388t);
  print__t392t(__t4976t__value,__t4976t____t388t);
  of__t626t(v__length,&__t4979t____t627t,&__t4979t__to);
  range__t643t(__t4979t____t627t,__t4979t__to,&__t4980t__from,&__t4980t__to);
  __t4978t=0-1;
  while(1){
  __t4978t=__t4978t+1;
  __t_complain=get__t650t(__t4980t__from,__t4980t__to,__t4978t,&__t4982t__);
  __t4981t=__t_complain;
  i=__t4982t__;
  __t4981t=__t4981t==0;
  if(!__t4981t){
  break;
  }
  __t_errcode=get__t2275t(v__unsafe_ptr,v__pos,v__length,i,&__t4984t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4984t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4985t__value,__t4984t__,8);
  nn__t389t(__t4985t__value,&__t4986t__value,&__t4986t____t388t);
  print__t397t(__t4986t__value,__t4986t____t388t);
  __t4988t=1;
  __t_errcode=sub__t365t(v__length,__t4988t,&__t4989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t265t(i,__t4989t__,&__t4990t__);
  if(__t4990t__){
  nn__t387t(__t4969t,&__t4991t__value,&__t4991t____t388t);
  print__t392t(__t4991t__value,__t4991t____t388t);
  }
  }
  print__t392t(__t4972t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6209t() {
  double __t6213t=0;
  double __t6216t=0;
  char* __t6217t__unsafe_ptr=0;
  uint64_t __t6217t__unsafe_size=0;
  uint16_t __t6217t__unsafe_offset=0;
  uint16_t __t6217t__unsafe_align=0;
  uint64_t __t6218t=0;
  char* __t6219t__unsafe_ptr=0;
  uint64_t __t6219t__unsafe_size=0;
  uint16_t __t6219t__unsafe_offset=0;
  uint16_t __t6219t__unsafe_align=0;
  char __t6220t____t706t__=0;
  char* __t6221t__unsafe_ptr=0;
  uint64_t __t6221t__pos=0;
  uint64_t __t6221t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  char* __t6223t=0;
  uint64_t __t6224t=0;
  uint64_t __t6225t=0;
  char* __t6226t__unsafe_ptr=0;
  uint64_t __t6226t__pos=0;
  uint64_t __t6226t__length=0;
  char __t6227t____t2291t____t2180t____t687t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  new__t832t();
  __t6213t=0.0;
  __t6216t=0.0;
  float____buffer__t6214t(&__t6217t__unsafe_ptr,&__t6217t__unsafe_size,&__t6217t__unsafe_offset,&__t6217t__unsafe_align);
  __t6218t=2;
  __t_errcode=alloc__t704t(&__t6217t__unsafe_ptr,&__t6217t__unsafe_size,&__t6217t__unsafe_offset,&__t6217t__unsafe_align,__t6218t,&__t6219t__unsafe_ptr,&__t6219t__unsafe_size,&__t6219t__unsafe_offset,&__t6219t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6217t__unsafe_ptr,&__t6213t,8);
  memcpy(__t6217t__unsafe_ptr+8,&__t6216t,8);
  __t_errcode=vec__t2196t(&__t6217t__unsafe_ptr,&__t6217t__unsafe_size,&__t6217t__unsafe_offset,&__t6217t__unsafe_align,&__t6221t__unsafe_ptr,&__t6221t__pos,&__t6221t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t6221t__unsafe_ptr;
  x__pos=__t6221t__pos;
  x__length=__t6221t__length;
  __t6223t="\x00\x00\x00\x00\x00\x00\xf0?\x00\x00\x00\x00\x00\x00\xf0?";
  __t6224t=0;
  __t6225t=2;
  __t_errcode=add__t2286t(x__unsafe_ptr,x__pos,x__length,__t6223t,__t6224t,__t6225t,&__t6226t__unsafe_ptr,&__t6226t__pos,&__t6226t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4974t(__t6226t__unsafe_ptr,__t6226t__pos,__t6226t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t6226t__unsafe_ptr,&__t6227t____t2291t____t2180t____t687t__);
  if(__t6227t____t2291t____t2180t____t687t__){
  free__t675t(&__t6226t__unsafe_ptr);
  }
  exists__t605t(__t6219t__unsafe_ptr,&__t6220t____t706t__);
  if(__t6220t____t706t__){
  free__t675t(&__t6219t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6209t();return 0;}