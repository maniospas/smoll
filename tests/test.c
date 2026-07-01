#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
const char* const __t6243t="vec";
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

static inline __attribute__((always_inline)) void float____buffer__t6232t(char** __t6245t, uint64_t* __t6246t, uint16_t* __t6247t, uint16_t* __t6248t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6245t=unsafe_ptr;
  *__t6246t=unsafe_size;
  *__t6247t=unsafe_offset;
  *__t6248t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t6249t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6249t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t6250t) {
  char* allocated=*__t6250t;
  if(allocated){
  free(allocated);
  }
  *__t6250t=allocated;
}

static inline __attribute__((always_inline)) void false__t13t(int* __t6251t) {
  int value=0;
  *__t6251t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t6252t) {
  int __t42t__=0;
  false__t13t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t6252t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t6253t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6253t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6254t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6254t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6255t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6255t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t6256t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6256t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6257t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6257t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t6258t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6258t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t6259t) {
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
  *__t6259t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t6260t, uint64_t* __t6261t, uint16_t* __t6262t, uint16_t* __t6263t, uint64_t size, char** __t6264t, uint64_t* __t6265t, uint16_t* __t6266t, uint16_t* __t6267t) {
  char* buffer__unsafe_ptr=*__t6260t;
  uint64_t buffer__unsafe_size=*__t6261t;
  uint16_t buffer__unsafe_offset=*__t6262t;
  uint16_t buffer__unsafe_align=*__t6263t;
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
  *__t6260t=buffer__unsafe_ptr;
  *__t6261t=buffer__unsafe_size;
  *__t6262t=buffer__unsafe_offset;
  *__t6263t=buffer__unsafe_align;
  *__t6264t=buffer__unsafe_ptr;
  *__t6265t=buffer__unsafe_size;
  *__t6266t=buffer__unsafe_offset;
  *__t6267t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6268t) {
  goto __t_return;
  __t_return:
  *__t6268t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t2167t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6269t, uint64_t* __t6270t, uint64_t* __t6271t) {
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__pos=0;
  uint64_t __t2169t__length=0;
  __t2169t__unsafe_ptr=unsafe_ptr;
  __t2169t__pos=pos;
  __t2169t__length=length;
  goto __t_return;
  __t_return:
  *__t6269t=__t2169t__unsafe_ptr;
  *__t6270t=__t2169t__pos;
  *__t6271t=__t2169t__length;
}

static inline __attribute__((always_inline)) int vec__t2214t(char** __t6272t, uint64_t* __t6273t, uint16_t* __t6274t, uint16_t* __t6275t, char** __t6276t, uint64_t* __t6277t, uint64_t* __t6278t) {
  char* buf__unsafe_ptr=*__t6272t;
  uint64_t buf__unsafe_size=*__t6273t;
  uint16_t buf__unsafe_offset=*__t6274t;
  uint16_t buf__unsafe_align=*__t6275t;
  uint64_t __t2215t__=0;
  uint64_t __t2216t=0;
  char __t2217t__=0;
  uint64_t __t2218t__=0;
  uint64_t __t2219t=0;
  char __t2220t__=0;
  uint64_t __t2221t=0;
  uint64_t __t2222t__=0;
  char* __t2223t__unsafe_ptr=0;
  uint64_t __t2223t__pos=0;
  uint64_t __t2223t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t679t(buf__unsafe_align,&__t2215t__);
  __t2216t=8;
  neq__t157t(__t2215t__,__t2216t,&__t2217t__);
  if(__t2217t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t2218t__);
  __t2219t=0;
  neq__t157t(__t2218t__,__t2219t,&__t2220t__);
  if(__t2220t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t2221t=0;
  len__t831t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2222t__);
  vec__t2167t(buf__unsafe_ptr,__t2221t,__t2222t__,&__t2223t__unsafe_ptr,&__t2223t__pos,&__t2223t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6272t=buf__unsafe_ptr;
  *__t6273t=buf__unsafe_size;
  *__t6274t=buf__unsafe_offset;
  *__t6275t=buf__unsafe_align;
  *__t6276t=__t2223t__unsafe_ptr;
  *__t6277t=__t2223t__pos;
  *__t6278t=__t2223t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t6227t() {
  double __t6231t=0;
  double __t6234t=0;
  char* __t6235t__unsafe_ptr=0;
  uint64_t __t6235t__unsafe_size=0;
  uint16_t __t6235t__unsafe_offset=0;
  uint16_t __t6235t__unsafe_align=0;
  uint64_t __t6236t=0;
  char* __t6237t__unsafe_ptr=0;
  uint64_t __t6237t__unsafe_size=0;
  uint16_t __t6237t__unsafe_offset=0;
  uint16_t __t6237t__unsafe_align=0;
  char __t6238t____t706t__=0;
  char* __t6239t__unsafe_ptr=0;
  uint64_t __t6239t__pos=0;
  uint64_t __t6239t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  new__t832t();
  __t6231t=0.0;
  __t6234t=0.0;
  float____buffer__t6232t(&__t6235t__unsafe_ptr,&__t6235t__unsafe_size,&__t6235t__unsafe_offset,&__t6235t__unsafe_align);
  __t6236t=2;
  __t_errcode=alloc__t704t(&__t6235t__unsafe_ptr,&__t6235t__unsafe_size,&__t6235t__unsafe_offset,&__t6235t__unsafe_align,__t6236t,&__t6237t__unsafe_ptr,&__t6237t__unsafe_size,&__t6237t__unsafe_offset,&__t6237t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6235t__unsafe_ptr,&__t6231t,8);
  memcpy(__t6235t__unsafe_ptr+8,&__t6234t,8);
  __t_errcode=vec__t2214t(&__t6235t__unsafe_ptr,&__t6235t__unsafe_size,&__t6235t__unsafe_offset,&__t6235t__unsafe_align,&__t6239t__unsafe_ptr,&__t6239t__pos,&__t6239t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t6239t__unsafe_ptr;
  x__pos=__t6239t__pos;
  x__length=__t6239t__length;
  print__t394t(__t6243t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t6237t__unsafe_ptr,&__t6238t____t706t__);
  if(__t6238t____t706t__){
  free__t675t(&__t6237t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6227t();return 0;}