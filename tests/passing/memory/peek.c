#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat____buffer__t6188t(char** __t6205t, uint64_t* __t6206t, uint32_t* __t6207t, uint32_t* __t6208t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6205t=unsafe_ptr;
  *__t6206t=unsafe_size;
  *__t6207t=unsafe_offset;
  *__t6208t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t6209t) {
  char* allocated=*__t6209t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t6209t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6210t) {
  int value=0;
  *__t6210t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t6211t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t6211t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t6212t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6212t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6213t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6213t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6214t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6214t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t6215t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6215t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6216t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6216t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t6217t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6217t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t6218t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6218t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t6219t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6219t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t6220t, uint64_t* __t6221t, uint32_t* __t6222t, uint32_t* __t6223t, uint64_t size, char** __t6224t, uint64_t* __t6225t, uint32_t* __t6226t, uint32_t* __t6227t) {
  char* buffer__unsafe_ptr=*__t6220t;
  uint64_t buffer__unsafe_size=*__t6221t;
  uint32_t buffer__unsafe_offset=*__t6222t;
  uint32_t buffer__unsafe_align=*__t6223t;
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
  mul__t212t(__t847t__,size,&__t848t__);
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
  mul__t212t(__t853t__,size,&__t854t__);
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
  *__t6220t=buffer__unsafe_ptr;
  *__t6221t=buffer__unsafe_size;
  *__t6222t=buffer__unsafe_offset;
  *__t6223t=buffer__unsafe_align;
  *__t6224t=buffer__unsafe_ptr;
  *__t6225t=buffer__unsafe_size;
  *__t6226t=buffer__unsafe_offset;
  *__t6227t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t6228t) {
  int __t302t__=0;
  char z=0;
  is_different__t108t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6228t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t6229t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6229t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6230t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6230t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6231t) {
  *__t6231t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t6232t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t6232t=__t725t__;
}

static inline __attribute__((always_inline)) int last__t1020t(char** __t6233t, uint64_t* __t6234t, uint32_t* __t6235t, uint32_t* __t6236t, char** __t6237t) {
  char* buffer__unsafe_ptr=*__t6233t;
  uint64_t buffer__unsafe_size=*__t6234t;
  uint32_t buffer__unsafe_offset=*__t6235t;
  uint32_t buffer__unsafe_align=*__t6236t;
  char __t1021t=0;
  uint64_t __t1022t=0;
  uint64_t __t1023t__=0;
  uint64_t adjusted_size=0;
  char __t1024t__=0;
  uint64_t __t1025t__=0;
  uint64_t __t1026t__=0;
  uint64_t __t1027t__=0;
  uint64_t __t1028t__=0;
  char* __t1029t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1022t=1;
  __t_complain=sub__t401t(buffer__unsafe_size,__t1022t,&__t1023t__);
  __t1021t=__t_complain;
  if(__t_complain){
  goto __t1021t__label;
  }
  adjusted_size=__t1023t__;
  __t1021t__label:__t1021t=__t1021t==0;
  not__t41t(__t1021t,&__t1024t__);
  if(__t1024t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_offset,&__t1025t__);
  add__t188t(adjusted_size,__t1025t__,&__t1026t__);
  nat__t727t(buffer__unsafe_align,&__t1027t__);
  mul__t212t(__t1026t__,__t1027t__,&__t1028t__);
  add__t724t(buffer__unsafe_ptr,__t1028t__,&__t1029t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6233t=buffer__unsafe_ptr;
  *__t6234t=buffer__unsafe_size;
  *__t6235t=buffer__unsafe_offset;
  *__t6236t=buffer__unsafe_align;
  *__t6237t=__t1029t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat____buffer__t6196t(char** __t6238t, uint64_t* __t6239t, uint32_t* __t6240t, uint32_t* __t6241t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6238t=unsafe_ptr;
  *__t6239t=unsafe_size;
  *__t6240t=unsafe_offset;
  *__t6241t=unsafe_align;
}

static inline __attribute__((always_inline)) void already_defined__t2848t(char* x, char* y, int* __t6242t) {
  int __t2849t=0;
  int __t2850t__=0;
  false__t14t(&__t2850t__);
  goto __t_return;
  __t_return:
  *__t6242t=__t2850t__;
}

static inline __attribute__((always_inline)) int to_number__t2797t(char* x, uint64_t* __t6243t) {
  int __t2798t=0;
  uint64_t __t2799t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!x){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2799t__value,x,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6243t=__t2799t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t4804t(char* _x, char* _y, uint64_t* __t6244t) {
  int __t4805t__=0;
  uint64_t __t4806t__=0;
  uint64_t x=0;
  uint64_t __t4807t__=0;
  uint64_t y=0;
  int __t4808t__=0;
  uint64_t __t4809t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  already_defined__t2848t(_x,_y,&__t4805t__);
  __t_errcode=to_number__t2797t(_x,&__t4806t__);
  if(__t_errcode){
  goto __t_failure;
  }
  x=__t4806t__;
  __t_errcode=to_number__t2797t(_y,&__t4807t__);
  if(__t_errcode){
  goto __t_failure;
  }
  y=__t4807t__;
  is_different__t108t(x,y,&__t4808t__);
  add__t188t(x,y,&__t4809t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6244t=__t4809t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t6184t() {
  uint64_t __t6187t=0;
  char* __t6190t__unsafe_ptr=0;
  uint64_t __t6190t__unsafe_size=0;
  uint32_t __t6190t__unsafe_offset=0;
  uint32_t __t6190t__unsafe_align=0;
  uint64_t __t6191t=0;
  char* __t6192t__unsafe_ptr=0;
  uint64_t __t6192t__unsafe_size=0;
  uint32_t __t6192t__unsafe_offset=0;
  uint32_t __t6192t__unsafe_align=0;
  char* __t6194t__=0;
  char* x=0;
  uint64_t __t6195t=0;
  char* __t6198t__unsafe_ptr=0;
  uint64_t __t6198t__unsafe_size=0;
  uint32_t __t6198t__unsafe_offset=0;
  uint32_t __t6198t__unsafe_align=0;
  uint64_t __t6199t=0;
  char* __t6200t__unsafe_ptr=0;
  uint64_t __t6200t__unsafe_size=0;
  uint32_t __t6200t__unsafe_offset=0;
  uint32_t __t6200t__unsafe_align=0;
  char* __t6202t__=0;
  char* y=0;
  uint64_t __t6203t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t6187t=0;
  nat____buffer__t6188t(&__t6190t__unsafe_ptr,&__t6190t__unsafe_size,&__t6190t__unsafe_offset,&__t6190t__unsafe_align);
  __t6191t=1;
  __t_errcode=alloc__t839t(&__t6190t__unsafe_ptr,&__t6190t__unsafe_size,&__t6190t__unsafe_offset,&__t6190t__unsafe_align,__t6191t,&__t6192t__unsafe_ptr,&__t6192t__unsafe_size,&__t6192t__unsafe_offset,&__t6192t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6190t__unsafe_ptr,&__t6187t,8);
  __t_errcode=last__t1020t(&__t6190t__unsafe_ptr,&__t6190t__unsafe_size,&__t6190t__unsafe_offset,&__t6190t__unsafe_align,&__t6194t__);
  if(__t_errcode){
  goto __t_failure;
  }
  x=__t6194t__;
  __t6195t=1;
  nat____buffer__t6196t(&__t6198t__unsafe_ptr,&__t6198t__unsafe_size,&__t6198t__unsafe_offset,&__t6198t__unsafe_align);
  __t6199t=1;
  __t_errcode=alloc__t839t(&__t6198t__unsafe_ptr,&__t6198t__unsafe_size,&__t6198t__unsafe_offset,&__t6198t__unsafe_align,__t6199t,&__t6200t__unsafe_ptr,&__t6200t__unsafe_size,&__t6200t__unsafe_offset,&__t6200t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6198t__unsafe_ptr,&__t6195t,8);
  __t_errcode=last__t1020t(&__t6198t__unsafe_ptr,&__t6198t__unsafe_size,&__t6198t__unsafe_offset,&__t6198t__unsafe_align,&__t6202t__);
  if(__t_errcode){
  goto __t_failure;
  }
  y=__t6202t__;
  __t_errcode=add__t4804t(x,y,&__t6203t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t454t(__t6203t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t722t(&__t6200t__unsafe_ptr);
  free__t722t(&__t6192t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6184t();return 0;}