#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t442t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t3665t(char** __t3693t, uint64_t* __t3694t, uint32_t* __t3695t, uint32_t* __t3696t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t3693t=unsafe_ptr;
  *__t3694t=unsafe_size;
  *__t3695t=unsafe_offset;
  *__t3696t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t3697t) {
  char* allocated=*__t3697t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t3697t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3698t) {
  int value=0;
  *__t3698t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3699t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3699t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3700t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3700t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3701t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3701t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3702t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3702t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t3703t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3703t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t3704t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3704t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t3705t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3705t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3706t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3706t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t3707t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t651t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3707t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t3708t, uint64_t* __t3709t, uint32_t* __t3710t, uint32_t* __t3711t, uint64_t size, char** __t3712t, uint64_t* __t3713t, uint32_t* __t3714t, uint32_t* __t3715t) {
  char* buffer__unsafe_ptr=*__t3708t;
  uint64_t buffer__unsafe_size=*__t3709t;
  uint32_t buffer__unsafe_offset=*__t3710t;
  uint32_t buffer__unsafe_align=*__t3711t;
  int __t840t=0;
  char __t842t__=0;
  uint64_t __t843t=0;
  char __t844t__=0;
  char __t845t=0;
  uint64_t __t846t=0;
  uint64_t __t847t__=0;
  uint64_t __t848t__=0;
  int __t850t=0;
  uint64_t __t851t=0;
  char __t852t__=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t bytes=0;
  int __t855t=0;
  uint64_t __t856t=0;
  char __t857t__=0;
  char* __t858t__=0;
  int __t859t=0;
  uint64_t __t860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t842t__);
  if(__t842t__){
  __t843t=0;
  neq__t157t(size,__t843t,&__t844t__);
  __t845t=__t844t__;
  }
  if(__t845t){
  __t846t=0;
  nat__t727t(buffer__unsafe_align,&__t847t__);
  mul__t211t(__t847t__,size,&__t848t__);
  zero__t723t(buffer__unsafe_ptr,__t846t,__t848t__);
  goto __t_return;
  }
  __t851t=0;
  neq__t157t(buffer__unsafe_size,__t851t,&__t852t__);
  if(__t852t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t853t__);
  mul__t211t(__t853t__,size,&__t854t__);
  bytes=__t854t__;
  __t856t=0;
  eq__t133t(bytes,__t856t,&__t857t__);
  if(__t857t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t860t=0;
  zero__t723t(__t858t__,__t860t,bytes);
  buffer__unsafe_ptr=__t858t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t722t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3708t=buffer__unsafe_ptr;
  *__t3709t=buffer__unsafe_size;
  *__t3710t=buffer__unsafe_offset;
  *__t3711t=buffer__unsafe_align;
  *__t3712t=buffer__unsafe_ptr;
  *__t3713t=buffer__unsafe_size;
  *__t3714t=buffer__unsafe_offset;
  *__t3715t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int list__t1108t(char** __t3716t, uint64_t* __t3717t, uint32_t* __t3718t, uint32_t* __t3719t, char** __t3720t, uint64_t* __t3721t, uint32_t* __t3722t, uint32_t* __t3723t, uint64_t* __t3724t) {
  char* _buf__unsafe_ptr=*__t3716t;
  uint64_t _buf__unsafe_size=*__t3717t;
  uint32_t _buf__unsafe_offset=*__t3718t;
  uint32_t _buf__unsafe_align=*__t3719t;
  int __t1109t=0;
  uint64_t __t1110t=0;
  char* __t1111t__unsafe_ptr=0;
  uint64_t __t1111t__unsafe_size=0;
  uint32_t __t1111t__unsafe_offset=0;
  uint32_t __t1111t__unsafe_align=0;
  char* __t1113t__unsafe_ptr=0;
  uint64_t __t1113t__unsafe_size=0;
  uint32_t __t1113t__unsafe_offset=0;
  uint32_t __t1113t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  uint64_t __t1114t=0;
  uint64_t __t1115t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1110t=1;
  __t_errcode=alloc__t839t(&_buf__unsafe_ptr,&_buf__unsafe_size,&_buf__unsafe_offset,&_buf__unsafe_align,__t1110t,&__t1111t__unsafe_ptr,&__t1111t__unsafe_size,&__t1111t__unsafe_offset,&__t1111t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1113t__unsafe_ptr=__t1111t__unsafe_ptr;
  __t1113t__unsafe_size=__t1111t__unsafe_size;
  __t1113t__unsafe_offset=__t1111t__unsafe_offset;
  __t1113t__unsafe_align=__t1111t__unsafe_align;
  buf__unsafe_ptr=__t1113t__unsafe_ptr;
  buf__unsafe_size=__t1113t__unsafe_size;
  buf__unsafe_offset=__t1113t__unsafe_offset;
  buf__unsafe_align=__t1113t__unsafe_align;
  __t1114t=0;
  __t1115t=__t1114t;
  length=__t1115t;
  goto __t_return;
  
  __t_failure:free__t722t(&buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3716t=_buf__unsafe_ptr;
  *__t3717t=_buf__unsafe_size;
  *__t3718t=_buf__unsafe_offset;
  *__t3719t=_buf__unsafe_align;
  *__t3720t=buf__unsafe_ptr;
  *__t3721t=buf__unsafe_size;
  *__t3722t=buf__unsafe_offset;
  *__t3723t=buf__unsafe_align;
  *__t3724t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t3725t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3725t=z;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3726t) {
  goto __t_return;
  __t_return:
  *__t3726t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t3727t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3727t=z;
}

static inline __attribute__((always_inline)) int div__t269t(uint64_t x, uint64_t y, uint64_t* __t3728t) {
  int __t270t__=0;
  int __t271t=0;
  uint64_t zero=0;
  char __t272t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t270t__);
  zero=0;
  eq__t133t(y,zero,&__t272t__);
  if(__t272t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3728t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t3729t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3729t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3730t) {
  *__t3730t=to;
}

static inline __attribute__((always_inline)) int realloc__t718t(char* allocated, uint64_t bytes, char** __t3731t) {
  char* new_allocated=0;
  char __t719t__=0;
  char __t720t__=0;
  char* __t721t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t651t(new_allocated,&__t719t__);
  not__t41t(__t719t__,&__t720t__);
  if(__t720t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  unsafe_attach_type__t28t(new_allocated,allocated,&__t721t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3731t=__t721t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t300t(uint64_t x, uint64_t y, char* __t3732t) {
  int __t301t__=0;
  char z=0;
  is_different__t108t(x,y,&__t301t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3732t=z;
}

static inline __attribute__((always_inline)) int resize__t1008t(char** __t3733t, uint64_t* __t3734t, uint32_t* __t3735t, uint32_t* __t3736t, uint64_t size, char** __t3737t, uint64_t* __t3738t, uint32_t* __t3739t, uint32_t* __t3740t) {
  char* buffer__unsafe_ptr=*__t3733t;
  uint64_t buffer__unsafe_size=*__t3734t;
  uint32_t buffer__unsafe_offset=*__t3735t;
  uint32_t buffer__unsafe_align=*__t3736t;
  int __t1009t=0;
  char __t1010t__=0;
  uint64_t __t1011t=0;
  char __t1012t__=0;
  uint64_t __t1013t__=0;
  uint64_t __t1014t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t1015t__=0;
  uint64_t __t1016t__=0;
  uint64_t bytes=0;
  char* __t1017t__=0;
  char __t1018t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(buffer__unsafe_size,size,&__t1010t__);
  if(__t1010t__){
  goto __t_return;
  }
  __t1011t=0;
  eq__t133t(buffer__unsafe_size,__t1011t,&__t1012t__);
  if(__t1012t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1013t__);
  mul__t211t(buffer__unsafe_size,__t1013t__,&__t1014t__);
  prev_bytes=__t1014t__;
  buffer__unsafe_size=size;
  nat__t727t(buffer__unsafe_align,&__t1015t__);
  mul__t211t(__t1015t__,size,&__t1016t__);
  bytes=__t1016t__;
  __t_errcode=realloc__t718t(buffer__unsafe_ptr,bytes,&__t1017t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t1017t__;
  lt__t300t(prev_bytes,bytes,&__t1018t__);
  if(__t1018t__){
  zero__t723t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3733t=buffer__unsafe_ptr;
  *__t3734t=buffer__unsafe_size;
  *__t3735t=buffer__unsafe_offset;
  *__t3736t=buffer__unsafe_align;
  *__t3737t=buffer__unsafe_ptr;
  *__t3738t=buffer__unsafe_size;
  *__t3739t=buffer__unsafe_offset;
  *__t3740t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t3741t, uint64_t* __t3742t, uint32_t* __t3743t, uint32_t* __t3744t, uint64_t pos, char** __t3745t, uint64_t* __t3746t, uint32_t* __t3747t, uint32_t* __t3748t, uint64_t* __t3749t) {
  char* buf__unsafe_ptr=*__t3741t;
  uint64_t buf__unsafe_size=*__t3742t;
  uint32_t buf__unsafe_offset=*__t3743t;
  uint32_t buf__unsafe_align=*__t3744t;
  goto __t_return;
  __t_return:
  *__t3741t=buf__unsafe_ptr;
  *__t3742t=buf__unsafe_size;
  *__t3743t=buf__unsafe_offset;
  *__t3744t=buf__unsafe_align;
  *__t3745t=buf__unsafe_ptr;
  *__t3746t=buf__unsafe_size;
  *__t3747t=buf__unsafe_offset;
  *__t3748t=buf__unsafe_align;
  *__t3749t=pos;
}

int alloc__t1206t(char** __t3750t, uint64_t* __t3751t, uint32_t* __t3752t, uint32_t* __t3753t, uint64_t* __t3754t, char** __t3755t, uint64_t* __t3756t, uint32_t* __t3757t, uint32_t* __t3758t, uint64_t* __t3759t) {
  char* allocator__buf__unsafe_ptr=*__t3750t;
  uint64_t allocator__buf__unsafe_size=*__t3751t;
  uint32_t allocator__buf__unsafe_offset=*__t3752t;
  uint32_t allocator__buf__unsafe_align=*__t3753t;
  uint64_t allocator__length=*__t3754t;
  int __t1207t=0;
  uint64_t __t1208t=0;
  uint64_t length=0;
  uint64_t __t1209t=0;
  uint64_t __t1210t__=0;
  uint64_t pos=0;
  uint64_t __t1211t__=0;
  uint64_t prev_length=0;
  uint64_t __t1212t__=0;
  char __t1213t__=0;
  uint64_t __t1214t=0;
  uint64_t __t1215t__=0;
  uint64_t __t1216t__=0;
  uint64_t __t1217t=0;
  uint64_t __t1218t__=0;
  char* __t1219t__unsafe_ptr=0;
  uint64_t __t1219t__unsafe_size=0;
  uint32_t __t1219t__unsafe_offset=0;
  uint32_t __t1219t__unsafe_align=0;
  char* __t1220t__buf__unsafe_ptr=0;
  uint64_t __t1220t__buf__unsafe_size=0;
  uint32_t __t1220t__buf__unsafe_offset=0;
  uint32_t __t1220t__buf__unsafe_align=0;
  uint64_t __t1220t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1208t=1;
  length=__t1208t;
  __t1209t=0;
  add__t187t(allocator__length,__t1209t,&__t1210t__);
  pos=__t1210t__;
  add__t187t(allocator__length,length,&__t1211t__);
  prev_length=__t1211t__;
  len__t1063t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1212t__);
  gt__t324t(prev_length,__t1212t__,&__t1213t__);
  if(__t1213t__){
  __t1214t=2;
  __t_errcode=div__t269t(prev_length,__t1214t,&__t1215t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t187t(prev_length,__t1215t__,&__t1216t__);
  __t1217t=1;
  add__t187t(__t1216t__,__t1217t,&__t1218t__);
  __t_errcode=resize__t1008t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t1218t__,&__t1219t__unsafe_ptr,&__t1219t__unsafe_size,&__t1219t__unsafe_offset,&__t1219t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t1219t__unsafe_ptr;
  allocator__buf__unsafe_size=__t1219t__unsafe_size;
  allocator__buf__unsafe_offset=__t1219t__unsafe_offset;
  allocator__buf__unsafe_align=__t1219t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t1075t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1220t__buf__unsafe_ptr,&__t1220t__buf__unsafe_size,&__t1220t__buf__unsafe_offset,&__t1220t__buf__unsafe_align,&__t1220t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3750t=allocator__buf__unsafe_ptr;
  *__t3751t=allocator__buf__unsafe_size;
  *__t3752t=allocator__buf__unsafe_offset;
  *__t3753t=allocator__buf__unsafe_align;
  *__t3754t=allocator__length;
  *__t3755t=__t1220t__buf__unsafe_ptr;
  *__t3756t=__t1220t__buf__unsafe_size;
  *__t3757t=__t1220t__buf__unsafe_offset;
  *__t3758t=__t1220t__buf__unsafe_align;
  *__t3759t=__t1220t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t3760t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t3760t=__t725t__;
}

static inline __attribute__((always_inline)) int mutget__t1040t(char** __t3761t, uint64_t* __t3762t, uint32_t* __t3763t, uint32_t* __t3764t, uint64_t i, char** __t3765t) {
  char* buffer__unsafe_ptr=*__t3761t;
  uint64_t buffer__unsafe_size=*__t3762t;
  uint32_t buffer__unsafe_offset=*__t3763t;
  uint32_t buffer__unsafe_align=*__t3764t;
  int __t1041t=0;
  char __t1042t__=0;
  uint64_t __t1043t__=0;
  uint64_t __t1044t__=0;
  uint64_t __t1045t__=0;
  uint64_t __t1046t__=0;
  char* __t1047t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1042t__);
  if(__t1042t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1043t__);
  mul__t211t(i,__t1043t__,&__t1044t__);
  nat__t727t(buffer__unsafe_offset,&__t1045t__);
  add__t187t(__t1044t__,__t1045t__,&__t1046t__);
  add__t724t(buffer__unsafe_ptr,__t1046t__,&__t1047t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3761t=buffer__unsafe_ptr;
  *__t3762t=buffer__unsafe_size;
  *__t3763t=buffer__unsafe_offset;
  *__t3764t=buffer__unsafe_align;
  *__t3765t=__t1047t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1250t(char** __t3766t, uint64_t* __t3767t, uint32_t* __t3768t, uint32_t* __t3769t, uint64_t surface__pos, char** __t3770t) {
  char* surface__buf__unsafe_ptr=*__t3766t;
  uint64_t surface__buf__unsafe_size=*__t3767t;
  uint32_t surface__buf__unsafe_offset=*__t3768t;
  uint32_t surface__buf__unsafe_align=*__t3769t;
  char* __t1252t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t1040t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t1252t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3766t=surface__buf__unsafe_ptr;
  *__t3767t=surface__buf__unsafe_size;
  *__t3768t=surface__buf__unsafe_offset;
  *__t3769t=surface__buf__unsafe_align;
  *__t3770t=__t1252t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1144t(char** __t3771t, uint64_t* __t3772t, uint32_t* __t3773t, uint32_t* __t3774t, uint64_t* __t3775t, uint64_t pos, char** __t3776t) {
  char* self__buf__unsafe_ptr=*__t3771t;
  uint64_t self__buf__unsafe_size=*__t3772t;
  uint32_t self__buf__unsafe_offset=*__t3773t;
  uint32_t self__buf__unsafe_align=*__t3774t;
  uint64_t self__length=*__t3775t;
  char* __t1146t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t1040t(&self__buf__unsafe_ptr,&self__buf__unsafe_size,&self__buf__unsafe_offset,&self__buf__unsafe_align,pos,&__t1146t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3771t=self__buf__unsafe_ptr;
  *__t3772t=self__buf__unsafe_size;
  *__t3773t=self__buf__unsafe_offset;
  *__t3774t=self__buf__unsafe_align;
  *__t3775t=self__length;
  *__t3776t=__t1146t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t445t(double value) {
  int __t446t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t3662t() {
  char* __t3667t__unsafe_ptr=0;
  uint64_t __t3667t__unsafe_size=0;
  uint32_t __t3667t__unsafe_offset=0;
  uint32_t __t3667t__unsafe_align=0;
  char* __t3668t__buf__unsafe_ptr=0;
  uint64_t __t3668t__buf__unsafe_size=0;
  uint32_t __t3668t__buf__unsafe_offset=0;
  uint32_t __t3668t__buf__unsafe_align=0;
  uint64_t __t3668t__length=0;
  char* li__buf__unsafe_ptr=0;
  uint64_t li__buf__unsafe_size=0;
  uint32_t li__buf__unsafe_offset=0;
  uint32_t li__buf__unsafe_align=0;
  uint64_t li__length=0;
  char* __t3670t__buf__unsafe_ptr=0;
  uint64_t __t3670t__buf__unsafe_size=0;
  uint32_t __t3670t__buf__unsafe_offset=0;
  uint32_t __t3670t__buf__unsafe_align=0;
  uint64_t __t3670t__pos=0;
  char* __t3671t__=0;
  double __t3672t=0;
  char* __t3673t__buf__unsafe_ptr=0;
  uint64_t __t3673t__buf__unsafe_size=0;
  uint32_t __t3673t__buf__unsafe_offset=0;
  uint32_t __t3673t__buf__unsafe_align=0;
  uint64_t __t3673t__pos=0;
  char* __t3674t__=0;
  double __t3675t=0;
  char* __t3676t__buf__unsafe_ptr=0;
  uint64_t __t3676t__buf__unsafe_size=0;
  uint32_t __t3676t__buf__unsafe_offset=0;
  uint32_t __t3676t__buf__unsafe_align=0;
  uint64_t __t3676t__pos=0;
  char* __t3677t__=0;
  double __t3678t=0;
  uint64_t __t3679t=0;
  char* __t3681t__=0;
  double __t3682t=0;
  uint64_t __t3683t=0;
  char* __t3685t__=0;
  double __t3686t__value=0;
  uint64_t __t3688t=0;
  char* __t3690t__=0;
  double __t3691t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  float____t_buffer____buffer__t3665t(&__t3667t__unsafe_ptr,&__t3667t__unsafe_size,&__t3667t__unsafe_offset,&__t3667t__unsafe_align);
  __t_errcode=list__t1108t(&__t3667t__unsafe_ptr,&__t3667t__unsafe_size,&__t3667t__unsafe_offset,&__t3667t__unsafe_align,&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=alloc__t1206t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,&__t3670t__buf__unsafe_ptr,&__t3670t__buf__unsafe_size,&__t3670t__buf__unsafe_offset,&__t3670t__buf__unsafe_align,&__t3670t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1250t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,__t3670t__pos,&__t3671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3672t=0.1;
  if(!__t3671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t3671t__,&__t3672t,8);
  __t_errcode=alloc__t1206t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,&__t3673t__buf__unsafe_ptr,&__t3673t__buf__unsafe_size,&__t3673t__buf__unsafe_offset,&__t3673t__buf__unsafe_align,&__t3673t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1250t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,__t3673t__pos,&__t3674t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3675t=0.1;
  if(!__t3674t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t3674t__,&__t3675t,8);
  __t_errcode=alloc__t1206t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,&__t3676t__buf__unsafe_ptr,&__t3676t__buf__unsafe_size,&__t3676t__buf__unsafe_offset,&__t3676t__buf__unsafe_align,&__t3676t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1250t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,__t3676t__pos,&__t3677t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3678t=0.1;
  if(!__t3677t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t3677t__,&__t3678t,8);
  __t3679t=1;
  __t_errcode=mutget__t1144t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,__t3679t,&__t3681t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3682t=0.2;
  if(!__t3681t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t3681t__,&__t3682t,8);
  __t3683t=0;
  __t_errcode=mutget__t1144t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,__t3683t,&__t3685t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3685t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3686t__value,__t3685t__,8);
  print__t445t(__t3686t__value);
  __t3688t=1;
  __t_errcode=mutget__t1144t(&__t3668t__buf__unsafe_ptr,&__t3668t__buf__unsafe_size,&__t3668t__buf__unsafe_offset,&__t3668t__buf__unsafe_align,&__t3668t__length,__t3688t,&__t3690t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3690t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3691t__value,__t3690t__,8);
  print__t445t(__t3691t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t722t(&__t3668t__buf__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t3662t();
                }