#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t6147t(char** __t6204t, uint64_t* __t6205t, uint16_t* __t6206t, uint16_t* __t6207t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6204t=unsafe_ptr;
  *__t6205t=unsafe_size;
  *__t6206t=unsafe_offset;
  *__t6207t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t6208t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6208t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t6209t) {
  char* allocated=*__t6209t;
  if(allocated){
  free(allocated);
  }
  *__t6209t=allocated;
}

static inline __attribute__((always_inline)) void false__t13t(int* __t6210t) {
  int value=0;
  *__t6210t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t6211t) {
  int __t42t__=0;
  false__t13t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t6211t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t6212t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6212t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6213t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6213t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6214t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6214t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t6215t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6215t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6216t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6216t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t6217t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6217t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t6218t) {
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
  *__t6218t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t6219t, uint64_t* __t6220t, uint16_t* __t6221t, uint16_t* __t6222t, uint64_t size, char** __t6223t, uint64_t* __t6224t, uint16_t* __t6225t, uint16_t* __t6226t) {
  char* buffer__unsafe_ptr=*__t6219t;
  uint64_t buffer__unsafe_size=*__t6220t;
  uint16_t buffer__unsafe_offset=*__t6221t;
  uint16_t buffer__unsafe_align=*__t6222t;
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
  *__t6219t=buffer__unsafe_ptr;
  *__t6220t=buffer__unsafe_size;
  *__t6221t=buffer__unsafe_offset;
  *__t6222t=buffer__unsafe_align;
  *__t6223t=buffer__unsafe_ptr;
  *__t6224t=buffer__unsafe_size;
  *__t6225t=buffer__unsafe_offset;
  *__t6226t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circular__t850t(char** __t6227t, uint64_t* __t6228t, uint16_t* __t6229t, uint16_t* __t6230t, char** __t6231t, uint64_t* __t6232t, uint16_t* __t6233t, uint16_t* __t6234t, uint64_t* __t6235t) {
  char* buf__unsafe_ptr=*__t6227t;
  uint64_t buf__unsafe_size=*__t6228t;
  uint16_t buf__unsafe_offset=*__t6229t;
  uint16_t buf__unsafe_align=*__t6230t;
  uint64_t __t851t=0;
  uint64_t __t852t=0;
  uint64_t pos=0;
  __t851t=0;
  __t852t=__t851t;
  pos=__t852t;
  goto __t_return;
  __t_return:
  *__t6227t=buf__unsafe_ptr;
  *__t6228t=buf__unsafe_size;
  *__t6229t=buf__unsafe_offset;
  *__t6230t=buf__unsafe_align;
  *__t6231t=buf__unsafe_ptr;
  *__t6232t=buf__unsafe_size;
  *__t6233t=buf__unsafe_offset;
  *__t6234t=buf__unsafe_align;
  *__t6235t=pos;
}

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2181t(char** __t6236t, uint64_t* __t6237t, uint16_t* __t6238t, uint16_t* __t6239t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6236t=unsafe_ptr;
  *__t6237t=unsafe_size;
  *__t6238t=unsafe_offset;
  *__t6239t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t6240t, uint64_t* __t6241t, uint16_t* __t6242t, uint16_t* __t6243t, uint64_t size, char** __t6244t, uint64_t* __t6245t, uint16_t* __t6246t, uint16_t* __t6247t) {
  char* buffer__unsafe_ptr=*__t6240t;
  uint64_t buffer__unsafe_size=*__t6241t;
  uint16_t buffer__unsafe_offset=*__t6242t;
  uint16_t buffer__unsafe_align=*__t6243t;
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
  *__t6240t=buffer__unsafe_ptr;
  *__t6241t=buffer__unsafe_size;
  *__t6242t=buffer__unsafe_offset;
  *__t6243t=buffer__unsafe_align;
  *__t6244t=buffer__unsafe_ptr;
  *__t6245t=buffer__unsafe_size;
  *__t6246t=buffer__unsafe_offset;
  *__t6247t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t2167t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6248t, uint64_t* __t6249t, uint64_t* __t6250t) {
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__pos=0;
  uint64_t __t2169t__length=0;
  __t2169t__unsafe_ptr=unsafe_ptr;
  __t2169t__pos=pos;
  __t2169t__length=length;
  goto __t_return;
  __t_return:
  *__t6248t=__t2169t__unsafe_ptr;
  *__t6249t=__t2169t__pos;
  *__t6250t=__t2169t__length;
}

int vec__t2202t(uint64_t length, char** __t6251t, uint64_t* __t6252t, uint64_t* __t6253t) {
  char* __t2203t__unsafe_ptr=0;
  uint64_t __t2203t__unsafe_size=0;
  uint16_t __t2203t__unsafe_offset=0;
  uint16_t __t2203t__unsafe_align=0;
  char* __t2205t__unsafe_ptr=0;
  uint64_t __t2205t__unsafe_size=0;
  uint16_t __t2205t__unsafe_offset=0;
  uint16_t __t2205t__unsafe_align=0;
  char __t2206t____t687t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t2207t=0;
  uint64_t __t2208t=0;
  uint64_t __t2209t=0;
  uint64_t __t2210t__=0;
  uint64_t __t2212t=0;
  char* __t2213t__unsafe_ptr=0;
  uint64_t __t2213t__pos=0;
  uint64_t __t2213t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2181t(&__t2203t__unsafe_ptr,&__t2203t__unsafe_size,&__t2203t__unsafe_offset,&__t2203t__unsafe_align);
  __t_errcode=alloc__t685t(&__t2203t__unsafe_ptr,&__t2203t__unsafe_size,&__t2203t__unsafe_offset,&__t2203t__unsafe_align,length,&__t2205t__unsafe_ptr,&__t2205t__unsafe_size,&__t2205t__unsafe_offset,&__t2205t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2205t__unsafe_ptr;
  buf__unsafe_size=__t2205t__unsafe_size;
  buf__unsafe_offset=__t2205t__unsafe_offset;
  buf__unsafe_align=__t2205t__unsafe_align;
  __t2208t=0;
  __t2209t=8;
  mul__t212t(__t2209t,length,&__t2210t__);
  zero__t676t(buf__unsafe_ptr,__t2208t,__t2210t__);
  __t2212t=0;
  vec__t2167t(buf__unsafe_ptr,__t2212t,length,&__t2213t__unsafe_ptr,&__t2213t__pos,&__t2213t__length);
  goto __t_return;
  
  __t_failure:exists__t605t(__t2213t__unsafe_ptr,&__t2206t____t687t__);
  if(__t2206t____t687t__){
  free__t675t(&__t2213t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6251t=__t2213t__unsafe_ptr;
  *__t6252t=__t2213t__pos;
  *__t6253t=__t2213t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t6254t) {
  int __t338t__=0;
  char z=0;
  is_different__t107t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6254t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6255t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6255t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t27t(char* to, char* from, char** __t6256t) {
  *__t6256t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t6257t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t27t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t6257t=__t678t__;
}

static inline __attribute__((always_inline)) int mutget__t2287t(char** __t6258t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6259t) {
  char* v__unsafe_ptr=*__t6258t;
  char __t2288t__=0;
  uint64_t __t2289t=0;
  uint64_t __t2290t__=0;
  uint64_t __t2291t__=0;
  char* __t2292t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2288t__);
  if(__t2288t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2289t=8;
  add__t188t(i,v__pos,&__t2290t__);
  mul__t212t(__t2289t,__t2290t__,&__t2291t__);
  add__t677t(v__unsafe_ptr,__t2291t__,&__t2292t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6258t=v__unsafe_ptr;
  *__t6259t=__t2292t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t626t(uint64_t to, uint64_t* __t6260t, uint64_t* __t6261t) {
  uint64_t __t627t=0;
  __t627t=0;
  goto __t_return;
  __t_return:
  *__t6260t=__t627t;
  *__t6261t=to;
}

static inline __attribute__((always_inline)) void range__t643t(uint64_t _from, uint64_t to, uint64_t* __t6262t, uint64_t* __t6263t) {
  uint64_t __t644t=0;
  uint64_t from=0;
  __t644t=_from;
  from=__t644t;
  goto __t_return;
  __t_return:
  *__t6262t=from;
  *__t6263t=to;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6264t) {
  goto __t_return;
  __t_return:
  *__t6264t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t6265t) {
  int __t290t__=0;
  char z=0;
  is_different__t107t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6265t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t6266t, uint64_t* __t6267t, uint16_t* __t6268t, uint16_t* __t6269t, uint64_t pos, char** __t6270t, uint64_t* __t6271t, uint16_t* __t6272t, uint16_t* __t6273t, uint64_t* __t6274t) {
  char* buf__unsafe_ptr=*__t6266t;
  uint64_t buf__unsafe_size=*__t6267t;
  uint16_t buf__unsafe_offset=*__t6268t;
  uint16_t buf__unsafe_align=*__t6269t;
  goto __t_return;
  __t_return:
  *__t6266t=buf__unsafe_ptr;
  *__t6267t=buf__unsafe_size;
  *__t6268t=buf__unsafe_offset;
  *__t6269t=buf__unsafe_align;
  *__t6270t=buf__unsafe_ptr;
  *__t6271t=buf__unsafe_size;
  *__t6272t=buf__unsafe_offset;
  *__t6273t=buf__unsafe_align;
  *__t6274t=pos;
}

static inline __attribute__((always_inline)) int alloc__t891t(char** __t6275t, uint64_t* __t6276t, uint16_t* __t6277t, uint16_t* __t6278t, uint64_t* __t6279t, uint64_t length, char** __t6280t, uint64_t* __t6281t, uint16_t* __t6282t, uint16_t* __t6283t, uint64_t* __t6284t) {
  char* allocator__buf__unsafe_ptr=*__t6275t;
  uint64_t allocator__buf__unsafe_size=*__t6276t;
  uint16_t allocator__buf__unsafe_offset=*__t6277t;
  uint16_t allocator__buf__unsafe_align=*__t6278t;
  uint64_t allocator__pos=*__t6279t;
  int __t892t=0;
  uint64_t __t893t__=0;
  char __t894t__=0;
  uint64_t __t895t__=0;
  uint64_t __t896t=0;
  uint64_t next_pos=0;
  uint64_t __t897t__=0;
  char __t898t__=0;
  uint64_t __t900t=0;
  uint64_t __t901t__=0;
  uint64_t pos=0;
  uint64_t __t899t=0;
  char* __t902t__buf__unsafe_ptr=0;
  uint64_t __t902t__buf__unsafe_size=0;
  uint16_t __t902t__buf__unsafe_offset=0;
  uint16_t __t902t__buf__unsafe_align=0;
  uint64_t __t902t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t831t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t893t__);
  ge__t337t(length,__t893t__,&__t894t__);
  if(__t894t__){
  __t_errcode=18;
  goto __t_failure;
  }
  add__t188t(length,allocator__pos,&__t895t__);
  __t896t=__t895t__;
  next_pos=__t896t;
  len__t831t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t897t__);
  gt__t289t(next_pos,__t897t__,&__t898t__);
  if(__t898t__){
  next_pos=length;
  __t899t=0;
  pos=__t899t;
  }
  else{
  __t900t=0;
  add__t188t(allocator__pos,__t900t,&__t901t__);
  pos=__t901t__;
  }
  allocator__pos=next_pos;
  allocated__t842t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t902t__buf__unsafe_ptr,&__t902t__buf__unsafe_size,&__t902t__buf__unsafe_offset,&__t902t__buf__unsafe_align,&__t902t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6275t=allocator__buf__unsafe_ptr;
  *__t6276t=allocator__buf__unsafe_size;
  *__t6277t=allocator__buf__unsafe_offset;
  *__t6278t=allocator__buf__unsafe_align;
  *__t6279t=allocator__pos;
  *__t6280t=__t902t__buf__unsafe_ptr;
  *__t6281t=__t902t__buf__unsafe_size;
  *__t6282t=__t902t__buf__unsafe_offset;
  *__t6283t=__t902t__buf__unsafe_align;
  *__t6284t=__t902t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t2270t(char** __t6285t, uint64_t* __t6286t, uint16_t* __t6287t, uint16_t* __t6288t, uint64_t* __t6289t, uint64_t length, char** __t6290t, uint64_t* __t6291t, uint64_t* __t6292t) {
  char* FLOATS__buf__unsafe_ptr=*__t6285t;
  uint64_t FLOATS__buf__unsafe_size=*__t6286t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6287t;
  uint16_t FLOATS__buf__unsafe_align=*__t6288t;
  uint64_t FLOATS__pos=*__t6289t;
  uint64_t __t2271t__=0;
  uint64_t __t2272t=0;
  char __t2273t__=0;
  uint64_t __t2274t__=0;
  uint64_t __t2275t=0;
  char __t2276t__=0;
  char* __t2277t__buf__unsafe_ptr=0;
  uint64_t __t2277t__buf__unsafe_size=0;
  uint16_t __t2277t__buf__unsafe_offset=0;
  uint16_t __t2277t__buf__unsafe_align=0;
  uint64_t __t2277t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t2278t=0;
  uint64_t __t2279t=0;
  uint64_t __t2280t__=0;
  uint64_t __t2281t=0;
  uint64_t __t2282t__=0;
  uint64_t __t2283t__=0;
  char* __t2285t__unsafe_ptr=0;
  uint64_t __t2285t__pos=0;
  uint64_t __t2285t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t679t(FLOATS__buf__unsafe_align,&__t2271t__);
  __t2272t=8;
  neq__t157t(__t2271t__,__t2272t,&__t2273t__);
  if(__t2273t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t679t(FLOATS__buf__unsafe_offset,&__t2274t__);
  __t2275t=0;
  neq__t157t(__t2274t__,__t2275t,&__t2276t__);
  if(__t2276t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=alloc__t891t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2277t__buf__unsafe_ptr,&__t2277t__buf__unsafe_size,&__t2277t__buf__unsafe_offset,&__t2277t__buf__unsafe_align,&__t2277t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2277t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2277t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2277t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2277t__buf__unsafe_align;
  surface__pos=__t2277t__pos;
  __t2279t=8;
  mul__t212t(__t2279t,surface__pos,&__t2280t__);
  __t2281t=8;
  add__t188t(surface__pos,length,&__t2282t__);
  mul__t212t(__t2281t,__t2282t__,&__t2283t__);
  zero__t676t(FLOATS__buf__unsafe_ptr,__t2280t__,__t2283t__);
  vec__t2167t(surface__buf__unsafe_ptr,surface__pos,length,&__t2285t__unsafe_ptr,&__t2285t__pos,&__t2285t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6285t=FLOATS__buf__unsafe_ptr;
  *__t6286t=FLOATS__buf__unsafe_size;
  *__t6287t=FLOATS__buf__unsafe_offset;
  *__t6288t=FLOATS__buf__unsafe_align;
  *__t6289t=FLOATS__pos;
  *__t6290t=__t2285t__unsafe_ptr;
  *__t6291t=__t2285t__pos;
  *__t6292t=__t2285t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t646t(uint64_t* __t6293t, uint64_t r__to, uint64_t* __t6294t) {
  uint64_t r__from=*__t6293t;
  char __t647t__=0;
  uint64_t ret=0;
  uint64_t __t648t=0;
  uint64_t __t649t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(r__from,r__to,&__t647t__);
  if(__t647t__){
  __t_errcode=9;
  goto __t_failure;
  }
  ret=r__from;
  __t648t=1;
  add__t188t(ret,__t648t,&__t649t__);
  r__from=__t649t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6293t=r__from;
  *__t6294t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t2260t(char** __t6295t, uint64_t* __t6296t, uint16_t* __t6297t, uint16_t* __t6298t, uint64_t* __t6299t, uint64_t length, char** __t6300t, uint64_t* __t6301t, uint64_t* __t6302t) {
  char* FLOATS__buf__unsafe_ptr=*__t6295t;
  uint64_t FLOATS__buf__unsafe_size=*__t6296t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6297t;
  uint16_t FLOATS__buf__unsafe_align=*__t6298t;
  uint64_t FLOATS__pos=*__t6299t;
  uint64_t __t2261t__=0;
  uint64_t __t2262t=0;
  char __t2263t__=0;
  uint64_t __t2264t__=0;
  uint64_t __t2265t=0;
  char __t2266t__=0;
  char* __t2267t__buf__unsafe_ptr=0;
  uint64_t __t2267t__buf__unsafe_size=0;
  uint16_t __t2267t__buf__unsafe_offset=0;
  uint16_t __t2267t__buf__unsafe_align=0;
  uint64_t __t2267t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t2268t=0;
  char* __t2269t__unsafe_ptr=0;
  uint64_t __t2269t__pos=0;
  uint64_t __t2269t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t679t(FLOATS__buf__unsafe_align,&__t2261t__);
  __t2262t=8;
  neq__t157t(__t2261t__,__t2262t,&__t2263t__);
  if(__t2263t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t679t(FLOATS__buf__unsafe_offset,&__t2264t__);
  __t2265t=0;
  neq__t157t(__t2264t__,__t2265t,&__t2266t__);
  if(__t2266t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=alloc__t891t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2267t__buf__unsafe_ptr,&__t2267t__buf__unsafe_size,&__t2267t__buf__unsafe_offset,&__t2267t__buf__unsafe_align,&__t2267t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2267t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2267t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2267t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2267t__buf__unsafe_align;
  surface__pos=__t2267t__pos;
  vec__t2167t(surface__buf__unsafe_ptr,surface__pos,length,&__t2269t__unsafe_ptr,&__t2269t__pos,&__t2269t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6295t=FLOATS__buf__unsafe_ptr;
  *__t6296t=FLOATS__buf__unsafe_size;
  *__t6297t=FLOATS__buf__unsafe_offset;
  *__t6298t=FLOATS__buf__unsafe_align;
  *__t6299t=FLOATS__pos;
  *__t6300t=__t2269t__unsafe_ptr;
  *__t6301t=__t2269t__pos;
  *__t6302t=__t2269t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2293t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6303t) {
  char __t2294t__=0;
  uint64_t __t2295t=0;
  uint64_t __t2296t__=0;
  uint64_t __t2297t__=0;
  char* __t2298t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,v__length,&__t2294t__);
  if(__t2294t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t2295t=8;
  add__t188t(i,v__pos,&__t2296t__);
  mul__t212t(__t2295t,__t2296t__,&__t2297t__);
  add__t677t(v__unsafe_ptr,__t2297t__,&__t2298t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6303t=__t2298t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t2300t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6304t) {
  char* __t2302t__=0;
  double __t2303t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2293t(v__unsafe_ptr,v__pos,v__length,i,&__t2302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2302t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2303t__value,__t2302t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6304t=__t2303t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t75t(double x, double y, int* __t6305t) {
  int __t77t=0;
  int __t78t__=0;
  not__t41t(__t77t,&__t78t__);
  goto __t_return;
  __t_return:
  *__t6305t=__t78t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t6306t) {
  int __t167t__=0;
  double z=0;
  is_different__t75t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6306t=z;
}

int add__t2360t(char** __t6307t, uint64_t* __t6308t, uint16_t* __t6309t, uint16_t* __t6310t, uint64_t* __t6311t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6312t, uint64_t* __t6313t, uint64_t* __t6314t) {
  char* FLOATS__buf__unsafe_ptr=*__t6307t;
  uint64_t FLOATS__buf__unsafe_size=*__t6308t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6309t;
  uint16_t FLOATS__buf__unsafe_align=*__t6310t;
  uint64_t FLOATS__pos=*__t6311t;
  int __t2361t=0;
  char __t2362t__=0;
  char* __t2364t__unsafe_ptr=0;
  uint64_t __t2364t__pos=0;
  uint64_t __t2364t__length=0;
  char* __t2365t__unsafe_ptr=0;
  uint64_t __t2365t__pos=0;
  uint64_t __t2365t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2366t=0;
  char __t2367t=0;
  char* __t2368t__=0;
  double __t2369t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2371t__=0;
  double __t2372t__=0;
  double __t2373t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t157t(v1__length,v2__length,&__t2362t__);
  if(__t2362t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t2260t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2364t__unsafe_ptr,&__t2364t__pos,&__t2364t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2365t__unsafe_ptr=__t2364t__unsafe_ptr;
  __t2365t__pos=__t2364t__pos;
  __t2365t__length=__t2364t__length;
  v__unsafe_ptr=__t2365t__unsafe_ptr;
  v__pos=__t2365t__pos;
  v__length=__t2365t__length;
  __t2366t=0-1;
  while(1){
  __t2366t=__t2366t+1;
  __t_complain=get__t2293t(v1__unsafe_ptr,v1__pos,v1__length,__t2366t,&__t2368t__);
  __t2367t=__t_complain;
  if(!__t2368t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2369t__value,__t2368t__,8);
  }
  value=__t2369t__value;
  __t2367t=__t2367t==0;
  if(!__t2367t){
  break;
  }
  i=__t2366t;
  __t_errcode=mutget__t2287t(&v__unsafe_ptr,v__pos,v__length,i,&__t2371t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2300t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2372t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t166t(value,__t2372t__,&__t2373t__);
  if(!__t2371t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2371t__,&__t2373t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6307t=FLOATS__buf__unsafe_ptr;
  *__t6308t=FLOATS__buf__unsafe_size;
  *__t6309t=FLOATS__buf__unsafe_offset;
  *__t6310t=FLOATS__buf__unsafe_align;
  *__t6311t=FLOATS__pos;
  *__t6312t=v__unsafe_ptr;
  *__t6313t=v__pos;
  *__t6314t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2299t(double number, uint64_t i, double* __t6315t) {
  goto __t_return;
  __t_return:
  *__t6315t=number;
}

static inline __attribute__((always_inline)) void mul__t190t(double x, double y, double* __t6316t) {
  int __t191t__=0;
  double z=0;
  is_different__t75t(x,y,&__t191t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6316t=z;
}

static inline __attribute__((always_inline)) int mul__t2578t(char** __t6317t, uint64_t* __t6318t, uint16_t* __t6319t, uint16_t* __t6320t, uint64_t* __t6321t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6322t, uint64_t* __t6323t, uint64_t* __t6324t) {
  char* FLOATS__buf__unsafe_ptr=*__t6317t;
  uint64_t FLOATS__buf__unsafe_size=*__t6318t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6319t;
  uint16_t FLOATS__buf__unsafe_align=*__t6320t;
  uint64_t FLOATS__pos=*__t6321t;
  int __t2579t=0;
  char* __t2581t__unsafe_ptr=0;
  uint64_t __t2581t__pos=0;
  uint64_t __t2581t__length=0;
  char* __t2582t__unsafe_ptr=0;
  uint64_t __t2582t__pos=0;
  uint64_t __t2582t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2583t=0;
  char __t2584t=0;
  char* __t2585t__=0;
  double __t2586t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2588t__=0;
  double __t2589t__=0;
  double __t2590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2260t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2581t__unsafe_ptr,&__t2581t__pos,&__t2581t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2582t__unsafe_ptr=__t2581t__unsafe_ptr;
  __t2582t__pos=__t2581t__pos;
  __t2582t__length=__t2581t__length;
  v__unsafe_ptr=__t2582t__unsafe_ptr;
  v__pos=__t2582t__pos;
  v__length=__t2582t__length;
  __t2583t=0-1;
  while(1){
  __t2583t=__t2583t+1;
  __t_complain=get__t2293t(v1__unsafe_ptr,v1__pos,v1__length,__t2583t,&__t2585t__);
  __t2584t=__t_complain;
  if(!__t2585t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2586t__value,__t2585t__,8);
  }
  value=__t2586t__value;
  __t2584t=__t2584t==0;
  if(!__t2584t){
  break;
  }
  i=__t2583t;
  __t_errcode=mutget__t2287t(&v__unsafe_ptr,v__pos,v__length,i,&__t2588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  at__t2299t(v2,i,&__t2589t__);
  mul__t190t(value,__t2589t__,&__t2590t__);
  if(!__t2588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2588t__,&__t2590t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6317t=FLOATS__buf__unsafe_ptr;
  *__t6318t=FLOATS__buf__unsafe_size;
  *__t6319t=FLOATS__buf__unsafe_offset;
  *__t6320t=FLOATS__buf__unsafe_align;
  *__t6321t=FLOATS__pos;
  *__t6322t=v__unsafe_ptr;
  *__t6323t=v__pos;
  *__t6324t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2596t(char** __t6325t, uint64_t* __t6326t, uint16_t* __t6327t, uint16_t* __t6328t, uint64_t* __t6329t, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6330t, uint64_t* __t6331t, uint64_t* __t6332t) {
  char* FLOATS__buf__unsafe_ptr=*__t6325t;
  uint64_t FLOATS__buf__unsafe_size=*__t6326t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6327t;
  uint16_t FLOATS__buf__unsafe_align=*__t6328t;
  uint64_t FLOATS__pos=*__t6329t;
  char* __t2597t__unsafe_ptr=0;
  uint64_t __t2597t__pos=0;
  uint64_t __t2597t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2578t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2597t__unsafe_ptr,&__t2597t__pos,&__t2597t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6325t=FLOATS__buf__unsafe_ptr;
  *__t6326t=FLOATS__buf__unsafe_size;
  *__t6327t=FLOATS__buf__unsafe_offset;
  *__t6328t=FLOATS__buf__unsafe_align;
  *__t6329t=FLOATS__pos;
  *__t6330t=__t2597t__unsafe_ptr;
  *__t6331t=__t2597t__pos;
  *__t6332t=__t2597t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t399t(double value) {
  int __t400t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t6146t() {
  char* __t6149t__unsafe_ptr=0;
  uint64_t __t6149t__unsafe_size=0;
  uint16_t __t6149t__unsafe_offset=0;
  uint16_t __t6149t__unsafe_align=0;
  uint64_t __t6150t=0;
  char* __t6151t__unsafe_ptr=0;
  uint64_t __t6151t__unsafe_size=0;
  uint16_t __t6151t__unsafe_offset=0;
  uint16_t __t6151t__unsafe_align=0;
  char __t6152t____t706t__=0;
  char* __t6153t__buf__unsafe_ptr=0;
  uint64_t __t6153t__buf__unsafe_size=0;
  uint16_t __t6153t__buf__unsafe_offset=0;
  uint16_t __t6153t__buf__unsafe_align=0;
  uint64_t __t6153t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  char* __t6154t__unsafe_ptr=0;
  uint64_t __t6154t__unsafe_size=0;
  uint16_t __t6154t__unsafe_offset=0;
  uint16_t __t6154t__unsafe_align=0;
  uint64_t __t6155t=0;
  char* __t6156t__unsafe_ptr=0;
  uint64_t __t6156t__unsafe_size=0;
  uint16_t __t6156t__unsafe_offset=0;
  uint16_t __t6156t__unsafe_align=0;
  char __t6157t____t706t__=0;
  char* __t6158t__buf__unsafe_ptr=0;
  uint64_t __t6158t__buf__unsafe_size=0;
  uint16_t __t6158t__buf__unsafe_offset=0;
  uint16_t __t6158t__buf__unsafe_align=0;
  uint64_t __t6158t__pos=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t __t6160t=0;
  char* __t6161t__unsafe_ptr=0;
  uint64_t __t6161t__pos=0;
  uint64_t __t6161t__length=0;
  char __t6162t____t2206t____t687t__=0;
  char* __t6163t__unsafe_ptr=0;
  uint64_t __t6163t__pos=0;
  uint64_t __t6163t__length=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t6165t=0;
  char* __t6166t__unsafe_ptr=0;
  uint64_t __t6166t__pos=0;
  uint64_t __t6166t__length=0;
  char __t6167t____t2206t____t687t__=0;
  char* __t6168t__unsafe_ptr=0;
  uint64_t __t6168t__pos=0;
  uint64_t __t6168t__length=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t6169t=0;
  char* __t6171t__=0;
  double __t6172t=0;
  uint64_t __t6173t=0;
  char* __t6175t__=0;
  double __t6176t=0;
  uint64_t __t6177t=0;
  uint64_t __t6178t____t627t=0;
  uint64_t __t6178t__to=0;
  uint64_t __t6179t__from=0;
  uint64_t __t6179t__to=0;
  uint64_t __t6180t__from=0;
  uint64_t __t6180t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t6181t=0;
  char* __t6182t__unsafe_ptr=0;
  uint64_t __t6182t__pos=0;
  uint64_t __t6182t__length=0;
  char* __t6183t__unsafe_ptr=0;
  uint64_t __t6183t__pos=0;
  uint64_t __t6183t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t6184t=0;
  uint64_t __t6185t__=0;
  uint64_t i=0;
  double __t6186t=0;
  char* __t6187t__unsafe_ptr=0;
  uint64_t __t6187t__pos=0;
  uint64_t __t6187t__length=0;
  char* __t6188t__unsafe_ptr=0;
  uint64_t __t6188t__pos=0;
  uint64_t __t6188t__length=0;
  char* __t6189t__unsafe_ptr=0;
  uint64_t __t6189t__pos=0;
  uint64_t __t6189t__length=0;
  uint64_t __t6190t=0;
  char* __t6192t__=0;
  double __t6193t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t6147t(&__t6149t__unsafe_ptr,&__t6149t__unsafe_size,&__t6149t__unsafe_offset,&__t6149t__unsafe_align);
  __t6150t=200;
  __t_errcode=alloc__t704t(&__t6149t__unsafe_ptr,&__t6149t__unsafe_size,&__t6149t__unsafe_offset,&__t6149t__unsafe_align,__t6150t,&__t6151t__unsafe_ptr,&__t6151t__unsafe_size,&__t6151t__unsafe_offset,&__t6151t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t850t(&__t6151t__unsafe_ptr,&__t6151t__unsafe_size,&__t6151t__unsafe_offset,&__t6151t__unsafe_align,&__t6153t__buf__unsafe_ptr,&__t6153t__buf__unsafe_size,&__t6153t__buf__unsafe_offset,&__t6153t__buf__unsafe_align,&__t6153t__pos);
  float____t_buffer____buffer__t6147t(&__t6154t__unsafe_ptr,&__t6154t__unsafe_size,&__t6154t__unsafe_offset,&__t6154t__unsafe_align);
  __t6155t=200;
  __t_errcode=alloc__t704t(&__t6154t__unsafe_ptr,&__t6154t__unsafe_size,&__t6154t__unsafe_offset,&__t6154t__unsafe_align,__t6155t,&__t6156t__unsafe_ptr,&__t6156t__unsafe_size,&__t6156t__unsafe_offset,&__t6156t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t850t(&__t6156t__unsafe_ptr,&__t6156t__unsafe_size,&__t6156t__unsafe_offset,&__t6156t__unsafe_align,&__t6158t__buf__unsafe_ptr,&__t6158t__buf__unsafe_size,&__t6158t__buf__unsafe_offset,&__t6158t__buf__unsafe_align,&__t6158t__pos);
  new__t832t();
  __t6160t=10;
  __t_errcode=vec__t2202t(__t6160t,&__t6161t__unsafe_ptr,&__t6161t__pos,&__t6161t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6163t__unsafe_ptr=__t6161t__unsafe_ptr;
  __t6163t__pos=__t6161t__pos;
  __t6163t__length=__t6161t__length;
  v1__unsafe_ptr=__t6163t__unsafe_ptr;
  v1__pos=__t6163t__pos;
  v1__length=__t6163t__length;
  new__t832t();
  __t6165t=10;
  __t_errcode=vec__t2202t(__t6165t,&__t6166t__unsafe_ptr,&__t6166t__pos,&__t6166t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6168t__unsafe_ptr=__t6166t__unsafe_ptr;
  __t6168t__pos=__t6166t__pos;
  __t6168t__length=__t6166t__length;
  v2__unsafe_ptr=__t6168t__unsafe_ptr;
  v2__pos=__t6168t__pos;
  v2__length=__t6168t__length;
  __t6169t=0;
  __t_errcode=mutget__t2287t(&v1__unsafe_ptr,v1__pos,v1__length,__t6169t,&__t6171t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6172t=1.0;
  if(!__t6171t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t6171t__,&__t6172t,8);
  __t6173t=0;
  __t_errcode=mutget__t2287t(&v2__unsafe_ptr,v2__pos,v2__length,__t6173t,&__t6175t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6176t=2.0;
  if(!__t6175t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t6175t__,&__t6176t,8);
  __t6177t=5;
  of__t626t(__t6177t,&__t6178t____t627t,&__t6178t__to);
  range__t643t(__t6178t____t627t,__t6178t__to,&__t6179t__from,&__t6179t__to);
  __t6180t__from=__t6179t__from;
  __t6180t__to=__t6179t__to;
  it__from=__t6180t__from;
  it__to=__t6180t__to;
  __t6181t=10;
  __t_errcode=vec__t2270t(&__t6153t__buf__unsafe_ptr,&__t6153t__buf__unsafe_size,&__t6153t__buf__unsafe_offset,&__t6153t__buf__unsafe_align,&__t6153t__pos,__t6181t,&__t6182t__unsafe_ptr,&__t6182t__pos,&__t6182t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6183t__pos=__t6182t__pos;
  __t6183t__length=__t6182t__length;
  v__pos=__t6183t__pos;
  v__length=__t6183t__length;
  while(1){
  __t_complain=next__t646t(&it__from,it__to,&__t6185t__);
  __t6184t=__t_complain;
  i=__t6185t__;
  __t6184t=__t6184t==0;
  if(!__t6184t){
  break;
  }
  __t6186t=2.0;
  __t_errcode=add__t2360t(&__t6153t__buf__unsafe_ptr,&__t6153t__buf__unsafe_size,&__t6153t__buf__unsafe_offset,&__t6153t__buf__unsafe_align,&__t6153t__pos,v2__unsafe_ptr,v2__pos,v2__length,__t6153t__buf__unsafe_ptr,v__pos,v__length,&__t6187t__unsafe_ptr,&__t6187t__pos,&__t6187t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2360t(&__t6153t__buf__unsafe_ptr,&__t6153t__buf__unsafe_size,&__t6153t__buf__unsafe_offset,&__t6153t__buf__unsafe_align,&__t6153t__pos,v1__unsafe_ptr,v1__pos,v1__length,__t6153t__buf__unsafe_ptr,__t6187t__pos,__t6187t__length,&__t6188t__unsafe_ptr,&__t6188t__pos,&__t6188t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2596t(&__t6153t__buf__unsafe_ptr,&__t6153t__buf__unsafe_size,&__t6153t__buf__unsafe_offset,&__t6153t__buf__unsafe_align,&__t6153t__pos,__t6186t,__t6153t__buf__unsafe_ptr,__t6188t__pos,__t6188t__length,&__t6189t__unsafe_ptr,&__t6189t__pos,&__t6189t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t6189t__pos;
  v__length=__t6189t__length;
  }
  __t6190t=0;
  __t_errcode=get__t2293t(__t6153t__buf__unsafe_ptr,v__pos,v__length,__t6190t,&__t6192t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t6192t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t6193t__value,__t6192t__,8);
  print__t399t(__t6193t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t6166t__unsafe_ptr,&__t6167t____t2206t____t687t__);
  if(__t6167t____t2206t____t687t__){
  free__t675t(&__t6166t__unsafe_ptr);
  }
  exists__t605t(__t6161t__unsafe_ptr,&__t6162t____t2206t____t687t__);
  if(__t6162t____t2206t____t687t__){
  free__t675t(&__t6161t__unsafe_ptr);
  }
  exists__t605t(__t6156t__unsafe_ptr,&__t6157t____t706t__);
  if(__t6157t____t706t__){
  free__t675t(&__t6156t__unsafe_ptr);
  }
  exists__t605t(__t6151t__unsafe_ptr,&__t6152t____t706t__);
  if(__t6152t____t706t__){
  free__t675t(&__t6151t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2138t(int64_t value, const char** __t6333t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t6333t=ret;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t6195t() {
  char __t6198t=0;
  char __t6200t=0;
  int64_t __t6201t=0;
  int64_t error=0;
  const char* __t6202t__=0;
  int __t_complain=0;
  console__t379t();
  __t_complain=safe_main__t6146t();
  __t6198t=__t_complain;
  __t6198t=__t6198t==0;
  __t6201t=__t_complain;
  __t6200t=(__t_complain==0);
  __t_complain=0;
  error=__t6201t;
  __t6200t=__t6200t==0;
  if(__t6200t){
  cstr__t2138t(error,&__t6202t__);
  print__t394t(__t6202t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6195t();return 0;}