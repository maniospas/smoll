#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3495t="test";
const char* const __t400t="\n";
const char* const __t3476t="./README.md";
const char* const __t3491t="./test/test.txt";
const char* const __t3480t="here";
const char* const __t388t="";
const char* const __t3485t="there";
const char* const __t3499t="std/ArianaVioleta-dz2K.ttf";
const char* const __t3489t="./test";
static const char* __t_all_errcodes[58] = {"noerr",
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
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"alopeny drawing on window",
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t772t(char** __t3522t, uint64_t* __t3523t, uint16_t* __t3524t, uint16_t* __t3525t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3522t=unsafe_ptr;
  *__t3523t=unsafe_size;
  *__t3524t=unsafe_offset;
  *__t3525t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t3526t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3526t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t3527t) {
  char* allocated=*__t3527t;
  if(allocated){
  free(allocated);
  }
  *__t3527t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3528t) {
  int value=0;
  *__t3528t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3529t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3529t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3530t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3530t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3531t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3531t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3532t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3532t=z;
}

static inline __attribute__((always_inline)) void nat__t683t(uint16_t x, uint64_t* __t3533t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3533t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3534t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3534t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3535t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3535t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t3536t) {
  char* allocated=0;
  char __t673t__=0;
  char __t674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t609t(allocated,&__t673t__);
  not__t41t(__t673t__,&__t674t__);
  if(__t674t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3536t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t708t(char** __t3537t, uint64_t* __t3538t, uint16_t* __t3539t, uint16_t* __t3540t, uint64_t size, char** __t3541t, uint64_t* __t3542t, uint16_t* __t3543t, uint16_t* __t3544t) {
  char* buffer__unsafe_ptr=*__t3537t;
  uint64_t buffer__unsafe_size=*__t3538t;
  uint16_t buffer__unsafe_offset=*__t3539t;
  uint16_t buffer__unsafe_align=*__t3540t;
  int __t709t=0;
  char __t710t__=0;
  char __t712t__=0;
  uint64_t __t713t=0;
  char __t714t__=0;
  uint64_t __t715t=0;
  uint64_t __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  uint64_t __t721t__=0;
  uint64_t __t722t__=0;
  uint64_t bytes=0;
  uint64_t __t723t=0;
  char __t724t__=0;
  char* __t725t__=0;
  int __t726t=0;
  uint64_t __t727t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t712t__);
  if(__t712t__){
  __t713t=0;
  neq__t157t(size,__t713t,&__t714t__);
  if(__t714t__){
  __t715t=0;
  nat__t683t(buffer__unsafe_align,&__t716t__);
  mul__t212t(__t716t__,size,&__t717t__);
  zero__t680t(buffer__unsafe_ptr,__t715t,__t717t__);
  }
  goto __t_return;
  }
  __t719t=0;
  neq__t157t(buffer__unsafe_size,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t683t(buffer__unsafe_align,&__t721t__);
  mul__t212t(__t721t__,size,&__t722t__);
  bytes=__t722t__;
  __t723t=0;
  eq__t133t(bytes,__t723t,&__t724t__);
  if(__t724t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t672t(bytes,&__t725t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t727t=0;
  zero__t680t(__t725t__,__t727t,bytes);
  buffer__unsafe_ptr=__t725t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t609t(buffer__unsafe_ptr,&__t710t__);
  if(__t710t__){
  free__t679t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3537t=buffer__unsafe_ptr;
  *__t3538t=buffer__unsafe_size;
  *__t3539t=buffer__unsafe_offset;
  *__t3540t=buffer__unsafe_align;
  *__t3541t=buffer__unsafe_ptr;
  *__t3542t=buffer__unsafe_size;
  *__t3543t=buffer__unsafe_offset;
  *__t3544t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t771t(uint64_t size, char** __t3545t, uint64_t* __t3546t, uint16_t* __t3547t, uint16_t* __t3548t) {
  char* __t774t__unsafe_ptr=0;
  uint64_t __t774t__unsafe_size=0;
  uint16_t __t774t__unsafe_offset=0;
  uint16_t __t774t__unsafe_align=0;
  char* __t775t__unsafe_ptr=0;
  uint64_t __t775t__unsafe_size=0;
  uint16_t __t775t__unsafe_offset=0;
  uint16_t __t775t__unsafe_align=0;
  char __t776t____t710t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t772t(&__t774t__unsafe_ptr,&__t774t__unsafe_size,&__t774t__unsafe_offset,&__t774t__unsafe_align);
  __t_errcode=alloc__t708t(&__t774t__unsafe_ptr,&__t774t__unsafe_size,&__t774t__unsafe_offset,&__t774t__unsafe_align,size,&__t775t__unsafe_ptr,&__t775t__unsafe_size,&__t775t__unsafe_offset,&__t775t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t775t__unsafe_ptr,&__t776t____t710t__);
  if(__t776t____t710t__){
  free__t679t(&__t775t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3545t=__t775t__unsafe_ptr;
  *__t3546t=__t775t__unsafe_size;
  *__t3547t=__t775t__unsafe_offset;
  *__t3548t=__t775t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t830t(char** __t3549t, uint64_t* __t3550t, uint16_t* __t3551t, uint16_t* __t3552t, uint64_t _pos, char** __t3553t, uint64_t* __t3554t, uint16_t* __t3555t, uint16_t* __t3556t, uint64_t* __t3557t) {
  char* buf__unsafe_ptr=*__t3549t;
  uint64_t buf__unsafe_size=*__t3550t;
  uint16_t buf__unsafe_offset=*__t3551t;
  uint16_t buf__unsafe_align=*__t3552t;
  uint64_t __t831t=0;
  uint64_t pos=0;
  __t831t=_pos;
  pos=__t831t;
  goto __t_return;
  __t_return:
  *__t3549t=buf__unsafe_ptr;
  *__t3550t=buf__unsafe_size;
  *__t3551t=buf__unsafe_offset;
  *__t3552t=buf__unsafe_align;
  *__t3553t=buf__unsafe_ptr;
  *__t3554t=buf__unsafe_size;
  *__t3555t=buf__unsafe_offset;
  *__t3556t=buf__unsafe_align;
  *__t3557t=pos;
}

static inline __attribute__((always_inline)) void arena__t833t(char** __t3558t, uint64_t* __t3559t, uint16_t* __t3560t, uint16_t* __t3561t, char** __t3562t, uint64_t* __t3563t, uint16_t* __t3564t, uint16_t* __t3565t, uint64_t* __t3566t) {
  char* buf__unsafe_ptr=*__t3558t;
  uint64_t buf__unsafe_size=*__t3559t;
  uint16_t buf__unsafe_offset=*__t3560t;
  uint16_t buf__unsafe_align=*__t3561t;
  uint64_t __t834t=0;
  char* __t835t__buf__unsafe_ptr=0;
  uint64_t __t835t__buf__unsafe_size=0;
  uint16_t __t835t__buf__unsafe_offset=0;
  uint16_t __t835t__buf__unsafe_align=0;
  uint64_t __t835t__pos=0;
  __t834t=0;
  arena__t830t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t834t,&__t835t__buf__unsafe_ptr,&__t835t__buf__unsafe_size,&__t835t__buf__unsafe_offset,&__t835t__buf__unsafe_align,&__t835t__pos);
  goto __t_return;
  __t_return:
  *__t3558t=buf__unsafe_ptr;
  *__t3559t=buf__unsafe_size;
  *__t3560t=buf__unsafe_offset;
  *__t3561t=buf__unsafe_align;
  *__t3562t=__t835t__buf__unsafe_ptr;
  *__t3563t=__t835t__buf__unsafe_size;
  *__t3564t=__t835t__buf__unsafe_offset;
  *__t3565t=__t835t__buf__unsafe_align;
  *__t3566t=__t835t__pos;
}

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t966t(char** __t3567t, uint64_t* __t3568t, uint16_t* __t3569t, uint16_t* __t3570t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3567t=unsafe_ptr;
  *__t3568t=unsafe_size;
  *__t3569t=unsafe_offset;
  *__t3570t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3571t) {
  *__t3571t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3572t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3572t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3573t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3573t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3574t) {
  *__t3574t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t3575t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t3575t=__t682t__;
}

static inline __attribute__((always_inline)) int get__t818t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t3576t) {
  char __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  uint64_t __t823t__=0;
  char* __t824t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t819t__);
  if(__t819t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t683t(buffer__unsafe_align,&__t820t__);
  mul__t212t(i,__t820t__,&__t821t__);
  nat__t683t(buffer__unsafe_offset,&__t822t__);
  add__t188t(__t821t__,__t822t__,&__t823t__);
  add__t681t(buffer__unsafe_ptr,__t823t__,&__t824t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3576t=__t824t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t988t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3577t, uint64_t* __t3578t, uint64_t* __t3579t, char* __t3580t) {
  goto __t_return;
  __t_return:
  *__t3577t=unsafe_ptr;
  *__t3578t=dat__pos;
  *__t3579t=dat__length;
  *__t3580t=dat__first;
}

static inline __attribute__((always_inline)) int str__t992t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3581t, uint64_t* __t3582t, uint64_t* __t3583t, char* __t3584t) {
  char* unsafe_ptr=0;
  uint64_t __t993t__=0;
  uint64_t __t994t=0;
  char __t995t__=0;
  uint64_t __t996t__=0;
  uint64_t __t997t=0;
  char __t998t__=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__dat__pos=0;
  uint64_t __t999t__dat__length=0;
  char __t999t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t683t(buf__unsafe_align,&__t993t__);
  __t994t=1;
  neq__t157t(__t993t__,__t994t,&__t995t__);
  if(__t995t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t683t(buf__unsafe_offset,&__t996t__);
  __t997t=0;
  neq__t157t(__t996t__,__t997t,&__t998t__);
  if(__t998t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t988t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t999t__unsafe_ptr,&__t999t__dat__pos,&__t999t__dat__length,&__t999t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3581t=__t999t__unsafe_ptr;
  *__t3582t=__t999t__dat__pos;
  *__t3583t=__t999t__dat__length;
  *__t3584t=__t999t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1026t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3585t, uint64_t* __t3586t, uint64_t* __t3587t, char* __t3588t) {
  uint64_t __t1027t=0;
  char __t1028t__=0;
  char* __t1030t__=0;
  char __t1031t__value=0;
  char first=0;
  char* __t1032t__unsafe_ptr=0;
  uint64_t __t1032t__dat__pos=0;
  uint64_t __t1032t__dat__length=0;
  char __t1032t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1027t=0;
  neq__t157t(length,__t1027t,&__t1028t__);
  if(__t1028t__){
  __t_errcode=get__t818t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1030t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1030t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1031t__value,__t1030t__,1);
  first=__t1031t__value;
  }
  __t_errcode=str__t992t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1032t__unsafe_ptr,&__t1032t__dat__pos,&__t1032t__dat__length,&__t1032t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3585t=__t1032t__unsafe_ptr;
  *__t3586t=__t1032t__dat__pos;
  *__t3587t=__t1032t__dat__length;
  *__t3588t=__t1032t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1048t(const char* c, char** __t3589t, uint64_t* __t3590t, uint64_t* __t3591t, char* __t3592t) {
  char* __t1049t__unsafe_ptr=0;
  uint64_t __t1049t__unsafe_size=0;
  uint16_t __t1049t__unsafe_offset=0;
  uint16_t __t1049t__unsafe_align=0;
  char* __t1050t__unsafe_ptr=0;
  uint64_t __t1050t__unsafe_size=0;
  uint16_t __t1050t__unsafe_offset=0;
  uint16_t __t1050t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1051t__=0;
  uint64_t length=0;
  uint64_t __t1052t=0;
  uint64_t __t1053t__=0;
  uint64_t __t1054t=0;
  char* __t1056t__unsafe_ptr=0;
  uint64_t __t1056t__dat__pos=0;
  uint64_t __t1056t__dat__length=0;
  char __t1056t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t966t(&__t1049t__unsafe_ptr,&__t1049t__unsafe_size,&__t1049t__unsafe_offset,&__t1049t__unsafe_align);
  __t1050t__unsafe_ptr=__t1049t__unsafe_ptr;
  __t1050t__unsafe_size=__t1049t__unsafe_size;
  __t1050t__unsafe_offset=__t1049t__unsafe_offset;
  __t1050t__unsafe_align=__t1049t__unsafe_align;
  buf__unsafe_ptr=__t1050t__unsafe_ptr;
  buf__unsafe_size=__t1050t__unsafe_size;
  buf__unsafe_offset=__t1050t__unsafe_offset;
  buf__unsafe_align=__t1050t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1051t__);
  buf__unsafe_ptr=__t1051t__;
  if(c){
  length=strlen(c);
  }
  __t1052t=1;
  add__t188t(length,__t1052t,&__t1053t__);
  buf__unsafe_size=__t1053t__;
  __t1054t=0;
  __t_errcode=str__t1026t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1054t,length,&__t1056t__unsafe_ptr,&__t1056t__dat__pos,&__t1056t__dat__length,&__t1056t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3589t=__t1056t__unsafe_ptr;
  *__t3590t=__t1056t__dat__pos;
  *__t3591t=__t1056t__dat__length;
  *__t3592t=__t1056t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1121t(const char* cstr, const char** __t3593t, char** __t3594t, uint64_t* __t3595t, uint64_t* __t3596t, char* __t3597t) {
  char* __t1122t__unsafe_ptr=0;
  uint64_t __t1122t__dat__pos=0;
  uint64_t __t1122t__dat__length=0;
  char __t1122t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1048t(cstr,&__t1122t__unsafe_ptr,&__t1122t__dat__pos,&__t1122t__dat__length,&__t1122t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1122t__unsafe_ptr;
  str__dat__pos=__t1122t__dat__pos;
  str__dat__length=__t1122t__dat__length;
  str__dat__first=__t1122t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3593t=cstr;
  *__t3594t=str__unsafe_ptr;
  *__t3595t=str__dat__pos;
  *__t3596t=str__dat__length;
  *__t3597t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1124t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3598t) {
  goto __t_return;
  __t_return:
  *__t3598t=value__cstr;
}

static inline __attribute__((always_inline)) void _is_file__t3324t(const char* path, char* __t3599t) {
  char exists=0;
  exists=__smo_is_file(path);
  goto __t_return;
  __t_return:
  *__t3599t=exists;
}

int is_file__t3330t(const char* _path, char* __t3600t) {
  const char* __t3331t__cstr=0;
  char* __t3331t__str__unsafe_ptr=0;
  uint64_t __t3331t__str__dat__pos=0;
  uint64_t __t3331t__str__dat__length=0;
  char __t3331t__str__dat__first=0;
  const char* __t3332t__=0;
  char __t3333t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1121t(_path,&__t3331t__cstr,&__t3331t__str__unsafe_ptr,&__t3331t__str__dat__pos,&__t3331t__str__dat__length,&__t3331t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1124t(__t3331t__cstr,__t3331t__str__unsafe_ptr,__t3331t__str__dat__pos,__t3331t__str__dat__length,__t3331t__str__dat__first,&__t3332t__);
  _is_file__t3324t(__t3332t__,&__t3333t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3600t=__t3333t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void blank__t10t() {
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int open__t2807t(const char* _path, char** __t3601t) {
  int __t2809t=0;
  const char* __t2810t__cstr=0;
  char* __t2810t__str__unsafe_ptr=0;
  uint64_t __t2810t__str__dat__pos=0;
  uint64_t __t2810t__str__dat__length=0;
  char __t2810t__str__dat__first=0;
  const char* __t2811t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t2812t__=0;
  char __t2813t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1121t(_path,&__t2810t__cstr,&__t2810t__str__unsafe_ptr,&__t2810t__str__dat__pos,&__t2810t__str__dat__length,&__t2810t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1124t(__t2810t__cstr,__t2810t__str__unsafe_ptr,__t2810t__str__dat__pos,__t2810t__str__dat__length,__t2810t__str__dat__first,&__t2811t__);
  path=__t2811t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t609t(unsafe_ptr,&__t2812t__);
  not__t41t(__t2812t__,&__t2813t__);
  if(__t2813t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t3601t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3602t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3602t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3603t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3603t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1033t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t3604t, uint64_t* __t3605t, uint64_t* __t3606t, char* __t3607t) {
  uint64_t __t1034t__=0;
  uint64_t length=0;
  uint64_t __t1035t=0;
  char __t1036t__=0;
  char* __t1038t__=0;
  char __t1039t__value=0;
  char first=0;
  char* __t1040t__unsafe_ptr=0;
  uint64_t __t1040t__dat__pos=0;
  uint64_t __t1040t__dat__length=0;
  char __t1040t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1034t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1034t__;
  __t1035t=0;
  neq__t157t(length,__t1035t,&__t1036t__);
  if(__t1036t__){
  __t_errcode=get__t818t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1038t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1038t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1039t__value,__t1038t__,1);
  first=__t1039t__value;
  }
  __t_errcode=str__t992t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1040t__unsafe_ptr,&__t1040t__dat__pos,&__t1040t__dat__length,&__t1040t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3604t=__t1040t__unsafe_ptr;
  *__t3605t=__t1040t__dat__pos;
  *__t3606t=__t1040t__dat__length;
  *__t3607t=__t1040t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t3015t(char** __t3608t, uint64_t* __t3609t, uint16_t* __t3610t, uint16_t* __t3611t, uint64_t* __t3612t, char** __t3613t, char** __t3614t, uint64_t* __t3615t, uint64_t* __t3616t, char* __t3617t) {
  char* CHARS__buf__unsafe_ptr=*__t3608t;
  uint64_t CHARS__buf__unsafe_size=*__t3609t;
  uint16_t CHARS__buf__unsafe_offset=*__t3610t;
  uint16_t CHARS__buf__unsafe_align=*__t3611t;
  uint64_t CHARS__pos=*__t3612t;
  char* f__unsafe_ptr=*__t3613t;
  int __t3020t=0;
  uint64_t pos=0;
  int __t3025t=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t3026t__=0;
  char __t3027t__=0;
  char* __t3028t__=0;
  char* contents=0;
  uint64_t __t3029t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t3030t__=0;
  char __t3031t__=0;
  uint64_t bytes_open=0;
  uint64_t __t3032t__=0;
  char* __t3034t__unsafe_ptr=0;
  uint64_t __t3034t__dat__pos=0;
  uint64_t __t3034t__dat__length=0;
  char __t3034t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  pos=CHARS__pos;
  exists__t609t(CHARS__buf__unsafe_ptr,&__t3026t__);
  not__t41t(__t3026t__,&__t3027t__);
  if(__t3027t__){
  __t_errcode=51;
  goto __t_failure;
  }
  add__t681t(CHARS__buf__unsafe_ptr,pos,&__t3028t__);
  contents=__t3028t__;
  __t_errcode=sub__t365t(CHARS__buf__unsafe_size,pos,&__t3029t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t3029t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t609t(obtained,&__t3030t__);
  not__t41t(__t3030t__,&__t3031t__);
  if(__t3031t__){
  __t_errcode=42;
  goto __t_failure;
  }
  bytes_open=strlen(contents);
  add__t188t(pos,bytes_open,&__t3032t__);
  CHARS__pos=__t3032t__;
  __t_errcode=str__t1033t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,pos,CHARS__pos,&__t3034t__unsafe_ptr,&__t3034t__dat__pos,&__t3034t__dat__length,&__t3034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3034t__unsafe_ptr=CHARS__buf__unsafe_ptr;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3608t=CHARS__buf__unsafe_ptr;
  *__t3609t=CHARS__buf__unsafe_size;
  *__t3610t=CHARS__buf__unsafe_offset;
  *__t3611t=CHARS__buf__unsafe_align;
  *__t3612t=CHARS__pos;
  *__t3613t=f__unsafe_ptr;
  *__t3614t=__t3034t__unsafe_ptr;
  *__t3615t=__t3034t__dat__pos;
  *__t3616t=__t3034t__dat__length;
  *__t3617t=__t3034t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1192t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1193t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int create_dir__t3315t(const char* path) {
  int __t3317t=0;
  char result=0;
  char __t3318t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  result=__smo_create_dir(path);
  not__t41t(result,&__t3318t__);
  if(__t3318t__){
  __t_errcode=54;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int write__t2824t(const char* _path, char** __t3618t) {
  const char* __t2825t__cstr=0;
  char* __t2825t__str__unsafe_ptr=0;
  uint64_t __t2825t__str__dat__pos=0;
  uint64_t __t2825t__str__dat__length=0;
  char __t2825t__str__dat__first=0;
  const char* __t2826t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  int __t2828t=0;
  char __t2829t__=0;
  char __t2830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1121t(_path,&__t2825t__cstr,&__t2825t__str__unsafe_ptr,&__t2825t__str__dat__pos,&__t2825t__str__dat__length,&__t2825t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1124t(__t2825t__cstr,__t2825t__str__unsafe_ptr,__t2825t__str__dat__pos,__t2825t__str__dat__length,__t2825t__str__dat__first,&__t2826t__);
  path=__t2826t__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t609t(unsafe_ptr,&__t2829t__);
  not__t41t(__t2829t__,&__t2830t__);
  if(__t2830t__){
  __t_errcode=46;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __smo_flush_fs();
  
  goto __t_skip_returns;__t_return:
  *__t3618t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1057t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3619t) {
  goto __t_return;
  __t_return:
  *__t3619t=s__dat__length;
}

static inline __attribute__((always_inline)) int _print__t3214t(char** __t3620t, char* text__unsafe_ptr, uint64_t text__dat__pos, uint64_t text__dat__length, char text__dat__first) {
  char* f__unsafe_ptr=*__t3620t;
  char __t3215t__=0;
  char __t3216t__=0;
  uint64_t __t3217t=0;
  char __t3218t__=0;
  char* first_pos=0;
  uint64_t bytes_written=0;
  uint64_t __t3219t__=0;
  char __t3220t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t609t(f__unsafe_ptr,&__t3215t__);
  not__t41t(__t3215t__,&__t3216t__);
  if(__t3216t__){
  __t_errcode=52;
  goto __t_failure;
  }
  __t3217t=0;
  neq__t157t(__t3217t,text__dat__length,&__t3218t__);
  if(__t3218t__){
  first_pos=text__unsafe_ptr+text__dat__pos;
  bytes_written=fwrite(first_pos,1,text__dat__length,(FILE*)f__unsafe_ptr);
  len__t1057t(text__unsafe_ptr,text__dat__pos,text__dat__length,text__dat__first,&__t3219t__);
  neq__t157t(bytes_written,__t3219t__,&__t3220t__);
  if(__t3220t__){
  __t_errcode=53;
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;*__t3620t=f__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t1127t(const char* x, const char* y, char* __t3621t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t3621t=z;
}

static inline __attribute__((always_inline)) void neq__t1156t(const char* x, const char* y, char* __t3622t) {
  char __t1157t__=0;
  char __t1158t__=0;
  eq__t1127t(x,y,&__t1157t__);
  not__t41t(__t1157t__,&__t1158t__);
  goto __t_return;
  __t_return:
  *__t3622t=__t1158t__;
}

static inline __attribute__((always_inline)) int print__t3298t(char** __t3623t, const char* text) {
  char* f__unsafe_ptr=*__t3623t;
  int __t3299t=0;
  const char* endl=0;
  char* __t3300t__unsafe_ptr=0;
  uint64_t __t3300t__dat__pos=0;
  uint64_t __t3300t__dat__length=0;
  char __t3300t__dat__first=0;
  char __t3302t__=0;
  char* __t3303t__unsafe_ptr=0;
  uint64_t __t3303t__dat__pos=0;
  uint64_t __t3303t__dat__length=0;
  char __t3303t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t400t;
  __t_errcode=str__t1048t(text,&__t3300t__unsafe_ptr,&__t3300t__dat__pos,&__t3300t__dat__length,&__t3300t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=_print__t3214t(&f__unsafe_ptr,__t3300t__unsafe_ptr,__t3300t__dat__pos,__t3300t__dat__length,__t3300t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  neq__t1156t(endl,__t388t,&__t3302t__);
  if(__t3302t__){
  __t_errcode=str__t1048t(endl,&__t3303t__unsafe_ptr,&__t3303t__dat__pos,&__t3303t__dat__length,&__t3303t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=_print__t3214t(&f__unsafe_ptr,__t3303t__unsafe_ptr,__t3303t__dat__pos,__t3303t__dat__length,__t3303t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;*__t3623t=f__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t986t(const char* c, char* __t3624t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3624t=z;
}

static inline __attribute__((always_inline)) void unsafe_open_window__t2234t(double size__width, double size__height, const char* title, const char* font_path) {
  char __t2235t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  exists__t986t(font_path,&__t2235t__);
  if(__t2235t__){
  __smolambda_n=0;
  for(c=32;
  c<=126;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_codepoints[__smolambda_n++]=0x2018;
  __smolambda_codepoints[__smolambda_n++]=0x2019;
  for(int c=0x2500;
  c<=0x257F;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_font=__smo_load_font(font_path,128,__smolambda_codepoints,__smolambda_n);
  }
}

static inline __attribute__((always_inline)) void window__t2236t(double size__width, double size__height, const char* title, const char* font_path, double* __t3625t, double* __t3626t, const char** __t3627t, char* __t3628t) {
  int __t2241t=0;
  char __t2242t=0;
  char __t2243t=0;
  char openy=0;
  __t2242t=0;
  __t2243t=__t2242t;
  openy=__t2243t;
  unsafe_open_window__t2234t(size__width,size__height,title,font_path);
  goto __t_return;
  __t_return:
  *__t3625t=size__width;
  *__t3626t=size__height;
  *__t3627t=title;
  *__t3628t=openy;
}

static inline __attribute__((always_inline)) void is_open__t2246t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t3629t, char* __t3630t) {
  char WINDOW__openy=*__t3629t;
  char ret=0;
  char __t2247t__=0;
  ret=WindowShouldClose();
  not__t41t(ret,&__t2247t__);
  goto __t_return;
  __t_return:
  *__t3629t=WINDOW__openy;
  *__t3630t=__t2247t__;
}

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t2248t() {
  BeginDrawing();
}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t2249t() {
  int __t2251t=0;
  EndDrawing();
  emscripten_sleep(0);
}

static inline __attribute__((always_inline)) int draw__t2252t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t3631t, char* __t3632t) {
  char WINDOW__openy=*__t3631t;
  char __t2253t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__openy){
  __t_errcode=38;
  goto __t_failure;
  }
  __t2253t=1;
  is_drawing=__t2253t;
  unsafe_begin_drawing__t2248t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t2249t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t3631t=WINDOW__openy;
  *__t3632t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3633t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3633t=z;
}

static inline __attribute__((always_inline)) int nat8__t2187t(uint64_t x, uint8_t* __t3634t) {
  uint64_t __t2188t=0;
  char __t2189t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2188t=255;
  gt__t289t(x,__t2188t,&__t2189t__);
  if(__t2189t__){
  __t_errcode=35;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3634t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t2225t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t3635t, uint8_t* __t3636t, uint8_t* __t3637t, uint8_t* __t3638t) {
  int __t2226t=0;
  uint64_t __t2227t=0;
  uint64_t _a=0;
  uint8_t __t2228t__=0;
  uint8_t r=0;
  uint8_t __t2229t__=0;
  uint8_t g=0;
  uint8_t __t2230t__=0;
  uint8_t b=0;
  uint8_t __t2231t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2227t=255;
  _a=__t2227t;
  __t_errcode=nat8__t2187t(_r,&__t2228t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t2228t__;
  __t_errcode=nat8__t2187t(_g,&__t2229t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t2229t__;
  __t_errcode=nat8__t2187t(_b,&__t2230t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t2230t__;
  __t_errcode=nat8__t2187t(_a,&__t2231t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t2231t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3635t=r;
  *__t3636t=g;
  *__t3637t=b;
  *__t3638t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void text__t2258t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t3639t, char* txt__unsafe_ptr, uint64_t txt__dat__pos, uint64_t txt__dat__length, char txt__dat__first, double pos__x, double pos__y, double size, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t3639t;
  DrawTextEx(__smolambda_font,TextSubtext(txt__unsafe_ptr,txt__dat__pos,txt__dat__length),(Vector2){
  pos__x,pos__y}
  ,size,1.0f,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t3639t=WINDOW__openy;
}

static inline __attribute__((always_inline)) void circ__t2322t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t3640t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t3640t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t3640t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int main__t3466t() {
  uint64_t __t3467t=0;
  char* __t3468t__unsafe_ptr=0;
  uint64_t __t3468t__unsafe_size=0;
  uint16_t __t3468t__unsafe_offset=0;
  uint16_t __t3468t__unsafe_align=0;
  char __t3469t____t776t____t710t__=0;
  char* __t3470t__buf__unsafe_ptr=0;
  uint64_t __t3470t__buf__unsafe_size=0;
  uint16_t __t3470t__buf__unsafe_offset=0;
  uint16_t __t3470t__buf__unsafe_align=0;
  uint64_t __t3470t__pos=0;
  char* __t3471t__buf__unsafe_ptr=0;
  uint64_t __t3471t__buf__unsafe_size=0;
  uint16_t __t3471t__buf__unsafe_offset=0;
  uint16_t __t3471t__buf__unsafe_align=0;
  uint64_t __t3471t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t __t3474t=0;
  uint64_t __t3475t=0;
  uint64_t i=0;
  char __t3477t__=0;
  char __t3478t__=0;
  char* __t3482t__unsafe_ptr=0;
  char* __t3484t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  char* __t3487t__unsafe_ptr=0;
  uint64_t __t3487t__dat__pos=0;
  uint64_t __t3487t__dat__length=0;
  char __t3487t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  char* __t3492t__unsafe_ptr=0;
  char* __t3494t__unsafe_ptr=0;
  char* writter__unsafe_ptr=0;
  double __t3497t=0;
  double __t3498t=0;
  double __t3500t__size__width=0;
  double __t3500t__size__height=0;
  const char* __t3500t__title=0;
  char __t3500t__openy=0;
  double __t3501t__size__width=0;
  double __t3501t__size__height=0;
  const char* __t3501t__title=0;
  char __t3501t__openy=0;
  double WINDOW__size__width=0;
  double WINDOW__size__height=0;
  const char* WINDOW__title=0;
  char WINDOW__openy=0;
  char __t3502t__=0;
  char __t3503t__=0;
  char frame=0;
  double __t3505t=0;
  double __t3506t=0;
  double __t3507t=0;
  uint64_t __t3508t=0;
  uint64_t __t3509t=0;
  uint64_t __t3510t=0;
  uint8_t __t3511t__r=0;
  uint8_t __t3511t__g=0;
  uint8_t __t3511t__b=0;
  uint8_t __t3511t__a=0;
  double __t3513t=0;
  double __t3514t=0;
  double __t3515t=0;
  uint64_t __t3517t=0;
  uint64_t __t3518t=0;
  uint64_t __t3519t=0;
  uint8_t __t3520t__r=0;
  uint8_t __t3520t__g=0;
  uint8_t __t3520t__b=0;
  uint8_t __t3520t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3467t=1024;
  __t_errcode=alloc__t771t(__t3467t,&__t3468t__unsafe_ptr,&__t3468t__unsafe_size,&__t3468t__unsafe_offset,&__t3468t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t833t(&__t3468t__unsafe_ptr,&__t3468t__unsafe_size,&__t3468t__unsafe_offset,&__t3468t__unsafe_align,&__t3470t__buf__unsafe_ptr,&__t3470t__buf__unsafe_size,&__t3470t__buf__unsafe_offset,&__t3470t__buf__unsafe_align,&__t3470t__pos);
  __t3471t__buf__unsafe_ptr=__t3470t__buf__unsafe_ptr;
  __t3471t__buf__unsafe_size=__t3470t__buf__unsafe_size;
  __t3471t__buf__unsafe_offset=__t3470t__buf__unsafe_offset;
  __t3471t__buf__unsafe_align=__t3470t__buf__unsafe_align;
  __t3471t__pos=__t3470t__pos;
  CHARS__buf__unsafe_ptr=__t3471t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3471t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3471t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3471t__buf__unsafe_align;
  CHARS__pos=__t3471t__pos;
  console__t379t();
  __t3474t=0;
  __t3475t=__t3474t;
  i=__t3475t;
  while(1){
  __t_errcode=is_file__t3330t(__t3476t,&__t3477t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3477t__,&__t3478t__);
  if(!__t3478t__){
  break;
  }
  blank__t10t();
  }
  print__t398t(__t3480t);
  __t_errcode=open__t2807t(__t3476t,&__t3482t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3484t__unsafe_ptr=__t3482t__unsafe_ptr;
  f__unsafe_ptr=__t3484t__unsafe_ptr;
  print__t398t(__t3485t);
  __t_errcode=line__t3015t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&f__unsafe_ptr,&__t3487t__unsafe_ptr,&__t3487t__dat__pos,&__t3487t__dat__length,&__t3487t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  line__unsafe_ptr=__t3487t__unsafe_ptr;
  line__dat__pos=__t3487t__dat__pos;
  line__dat__length=__t3487t__dat__length;
  line__dat__first=__t3487t__dat__first;
  print__t1192t(line__unsafe_ptr,line__dat__pos,line__dat__length,line__dat__first);
  __t_errcode=create_dir__t3315t(__t3489t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=write__t2824t(__t3491t,&__t3492t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3494t__unsafe_ptr=__t3492t__unsafe_ptr;
  writter__unsafe_ptr=__t3494t__unsafe_ptr;
  __t_errcode=print__t3298t(&writter__unsafe_ptr,__t3495t);
  if(__t_errcode){
  goto __t_failure;
  }
  if(__t3492t__unsafe_ptr){
  fclose((FILE*)__t3492t__unsafe_ptr);
  __t3492t__unsafe_ptr=0;
  }
  __smo_flush_fs();
  __t3497t=800.0;
  __t3498t=600.0;
  window__t2236t(__t3497t,__t3498t,__t3495t,__t3499t,&__t3500t__size__width,&__t3500t__size__height,&__t3500t__title,&__t3500t__openy);
  __t3501t__size__width=__t3500t__size__width;
  __t3501t__size__height=__t3500t__size__height;
  __t3501t__title=__t3500t__title;
  __t3501t__openy=__t3500t__openy;
  WINDOW__size__width=__t3501t__size__width;
  WINDOW__size__height=__t3501t__size__height;
  WINDOW__title=__t3501t__title;
  WINDOW__openy=__t3501t__openy;
  while(1){
  is_open__t2246t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t3502t__);
  if(!__t3502t__){
  break;
  }
  __t_errcode=draw__t2252t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t3503t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t3503t__;
  __t3505t=10.0;
  __t3506t=10.0;
  __t3507t=64.0;
  __t3508t=255;
  __t3509t=255;
  __t3510t=255;
  __t_errcode=color__t2225t(__t3508t,__t3509t,__t3510t,&__t3511t__r,&__t3511t__g,&__t3511t__b,&__t3511t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  text__t2258t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,line__unsafe_ptr,line__dat__pos,line__dat__length,line__dat__first,__t3505t,__t3506t,__t3507t,__t3511t__r,__t3511t__g,__t3511t__b,__t3511t__a);
  __t3513t=20.0;
  __t3514t=20.0;
  __t3515t=20.0;
  __t3517t=255;
  __t3518t=0;
  __t3519t=0;
  __t_errcode=color__t2225t(__t3517t,__t3518t,__t3519t,&__t3520t__r,&__t3520t__g,&__t3520t__b,&__t3520t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  circ__t2322t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t3513t,__t3514t,__t3515t,__t3520t__r,__t3520t__g,__t3520t__b,__t3520t__a);
  if(__t3503t__){
  unsafe_end_drawing__t2249t();
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t3482t__unsafe_ptr){
  fclose((FILE*)__t3482t__unsafe_ptr);
  __t3482t__unsafe_ptr=0;
  }
  exists__t609t(__t3468t__unsafe_ptr,&__t3469t____t776t____t710t__);
  if(__t3469t____t776t____t710t__){
  free__t679t(&__t3468t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3466t();return 0;}