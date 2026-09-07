#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t442t="\n";
const char* const __t4125t="123";
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

static inline __attribute__((always_inline)) void bucket_contents____t_buffer____buffer__t1095t(char** __t4134t, uint64_t* __t4135t, uint32_t* __t4136t, uint32_t* __t4137t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t4134t=unsafe_ptr;
  *__t4135t=unsafe_size;
  *__t4136t=unsafe_offset;
  *__t4137t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4138t) {
  int value=0;
  *__t4138t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t4139t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t4139t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t4140t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t4140t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t4141t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4141t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t4142t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4142t=z;
}

static inline __attribute__((always_inline)) void nat__t739t(uint32_t x, uint64_t* __t4143t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4143t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t4144t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4144t=z;
}

static inline __attribute__((always_inline)) void zero__t732t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t4145t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4145t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t4146t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4146t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t4147t) {
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
  *__t4147t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t832t(char** __t4148t, uint64_t* __t4149t, uint32_t* __t4150t, uint32_t* __t4151t, uint64_t size, char** __t4152t, uint64_t* __t4153t, uint32_t* __t4154t, uint32_t* __t4155t) {
  char* buffer__unsafe_ptr=*__t4148t;
  uint64_t buffer__unsafe_size=*__t4149t;
  uint32_t buffer__unsafe_offset=*__t4150t;
  uint32_t buffer__unsafe_align=*__t4151t;
  int __t833t=0;
  int __t834t=0;
  char __t835t__=0;
  uint64_t __t836t=0;
  char __t837t__=0;
  char __t838t=0;
  uint64_t __t839t=0;
  uint64_t __t840t__=0;
  uint64_t __t841t__=0;
  int __t843t=0;
  uint64_t __t844t=0;
  char __t845t__=0;
  uint64_t __t846t__=0;
  uint64_t __t847t__=0;
  uint64_t bytes=0;
  int __t848t=0;
  char* __t849t__=0;
  int __t850t=0;
  uint64_t __t851t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t835t__);
  if(__t835t__){
  __t836t=0;
  neq__t157t(size,__t836t,&__t837t__);
  __t838t=__t837t__;
  }
  if(__t838t){
  __t839t=0;
  nat__t739t(buffer__unsafe_align,&__t840t__);
  mul__t211t(__t840t__,size,&__t841t__);
  zero__t732t(buffer__unsafe_ptr,__t839t,__t841t__);
  goto __t_return;
  }
  __t844t=0;
  neq__t157t(buffer__unsafe_size,__t844t,&__t845t__);
  if(__t845t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t739t(buffer__unsafe_align,&__t846t__);
  mul__t211t(__t846t__,size,&__t847t__);
  bytes=__t847t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t849t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t851t=0;
  zero__t732t(__t849t__,__t851t,bytes);
  buffer__unsafe_ptr=__t849t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4148t=buffer__unsafe_ptr;
  *__t4149t=buffer__unsafe_size;
  *__t4150t=buffer__unsafe_offset;
  *__t4151t=buffer__unsafe_align;
  *__t4152t=buffer__unsafe_ptr;
  *__t4153t=buffer__unsafe_size;
  *__t4154t=buffer__unsafe_offset;
  *__t4155t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t672t(uint64_t to, uint64_t* __t4156t, uint64_t* __t4157t) {
  uint64_t __t673t=0;
  __t673t=0;
  goto __t_return;
  __t_return:
  *__t4156t=__t673t;
  *__t4157t=to;
}

static inline __attribute__((always_inline)) void range__t689t(uint64_t _from, uint64_t to, uint64_t* __t4158t, uint64_t* __t4159t) {
  uint64_t __t690t=0;
  uint64_t from=0;
  __t690t=_from;
  from=__t690t;
  goto __t_return;
  __t_return:
  *__t4158t=from;
  *__t4159t=to;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t4160t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4160t=z;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t4161t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4161t=z;
}

static inline __attribute__((always_inline)) int get__t696t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t4162t) {
  uint64_t __t697t__=0;
  uint64_t pos=0;
  char __t698t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(_pos,r__from,&__t697t__);
  pos=__t697t__;
  ge__t372t(pos,r__to,&__t698t__);
  if(__t698t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4162t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ptr__t0t(char** __t4163t) {
  char* value=0;
  *__t4163t=value;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4164t) {
  *__t4164t=to;
}

static inline __attribute__((always_inline)) void add__t733t(char* allocated, uint64_t offset, char** __t4165t) {
  char* element=0;
  char* __t734t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t734t__);
  goto __t_return;
  __t_return:
  *__t4165t=__t734t__;
}

static inline __attribute__((always_inline)) void dereference_ptr__t735t(char* allocated, char** __t4166t) {
  char* ret=0;
  char* __t736t__=0;
  uint64_t __t737t=0;
  uint64_t ptr_size=0;
  ret=0;
  ptr__t0t(&__t736t__);
  __t737t=8;
  ptr_size=__t737t;
  memcpy(&ret,allocated,ptr_size);
  goto __t_return;
  __t_return:
  *__t4166t=ret;
}

static inline __attribute__((always_inline)) void free__t731t(char** __t4167t) {
  char* allocated=*__t4167t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4167t=allocated;
}

static inline __attribute__((always_inline)) int bucket__t1094t(char** __t4168t) {
  char* __t1097t__unsafe_ptr=0;
  uint64_t __t1097t__unsafe_size=0;
  uint32_t __t1097t__unsafe_offset=0;
  uint32_t __t1097t__unsafe_align=0;
  uint64_t __t1098t=0;
  char* __t1100t__unsafe_ptr=0;
  uint64_t __t1100t__unsafe_size=0;
  uint32_t __t1100t__unsafe_offset=0;
  uint32_t __t1100t__unsafe_align=0;
  char* __t1101t=0;
  char* unsafe_ptr=0;
  char* __t1102t__elements=0;
  uint64_t __t1102t__size=0;
  uint64_t __t1102t__allocated=0;
  char* __t1103t__elements=0;
  uint64_t __t1103t__size=0;
  uint64_t __t1103t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  uint64_t __t1104t=0;
  uint64_t __t1105t____t673t=0;
  uint64_t __t1105t__to=0;
  uint64_t __t1106t__from=0;
  uint64_t __t1106t__to=0;
  char __t1107t=0;
  uint64_t __t1108t__=0;
  uint64_t i=0;
  char* __t1109t__=0;
  uint64_t __t1110t=0;
  uint64_t __t1111t__=0;
  char* __t1112t__=0;
  char* position=0;
  char* __t1113t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  bucket_contents____t_buffer____buffer__t1095t(&__t1097t__unsafe_ptr,&__t1097t__unsafe_size,&__t1097t__unsafe_offset,&__t1097t__unsafe_align);
  __t1098t=1;
  __t_errcode=alloc__t832t(&__t1097t__unsafe_ptr,&__t1097t__unsafe_size,&__t1097t__unsafe_offset,&__t1097t__unsafe_align,__t1098t,&__t1100t__unsafe_ptr,&__t1100t__unsafe_size,&__t1100t__unsafe_offset,&__t1100t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1101t=__t1100t__unsafe_ptr;
  unsafe_ptr=__t1101t;
  goto __t_return;
  
  __t_failure:if(!unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1102t__elements,unsafe_ptr,8);
  memcpy(&__t1102t__size,unsafe_ptr+8,8);
  memcpy(&__t1102t__allocated,unsafe_ptr+16,8);
  __t1103t__elements=__t1102t__elements;
  __t1103t__size=__t1102t__size;
  __t1103t__allocated=__t1102t__allocated;
  contents__elements=__t1103t__elements;
  contents__size=__t1103t__size;
  contents__allocated=__t1103t__allocated;
  of__t672t(contents__size,&__t1105t____t673t,&__t1105t__to);
  range__t689t(__t1105t____t673t,__t1105t__to,&__t1106t__from,&__t1106t__to);
  __t1104t=0-1;
  while(1){
  __t1104t=__t1104t+1;
  __t_complain=get__t696t(__t1106t__from,__t1106t__to,__t1104t,&__t1108t__);
  __t1107t=__t_complain;
  if(__t_complain){
  goto __t1107t__label;
  }
  i=__t1108t__;
  __t1107t__label:__t1107t=__t1107t==0;
  if(!__t1107t){
  break;
  }
  ptr__t0t(&__t1109t__);
  __t1110t=8;
  mul__t211t(i,__t1110t,&__t1111t__);
  add__t733t(contents__elements,__t1111t__,&__t1112t__);
  position=__t1112t__;
  dereference_ptr__t735t(position,&__t1113t__);
  free__t731t(&__t1113t__);
  }
  free__t731t(&contents__elements);
  free__t731t(&unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4168t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t4169t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4169t=z;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1495t(char** __t4170t, uint64_t* __t4171t, uint32_t* __t4172t, uint32_t* __t4173t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4170t=unsafe_ptr;
  *__t4171t=unsafe_size;
  *__t4172t=unsafe_offset;
  *__t4173t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t4174t) {
  *__t4174t=to;
}

static inline __attribute__((always_inline)) int get__t1073t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4175t) {
  int __t1074t=0;
  char __t1075t__=0;
  uint64_t __t1076t__=0;
  uint64_t __t1077t__=0;
  uint64_t __t1078t__=0;
  uint64_t __t1079t__=0;
  char* __t1080t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1075t__);
  if(__t1075t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t739t(buffer__unsafe_align,&__t1076t__);
  mul__t211t(i,__t1076t__,&__t1077t__);
  nat__t739t(buffer__unsafe_offset,&__t1078t__);
  add__t187t(__t1077t__,__t1078t__,&__t1079t__);
  add__t733t(buffer__unsafe_ptr,__t1079t__,&__t1080t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4175t=__t1080t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1520t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4176t, uint64_t* __t4177t, uint64_t* __t4178t, char* __t4179t) {
  goto __t_return;
  __t_return:
  *__t4176t=unsafe_ptr;
  *__t4177t=dat__pos;
  *__t4178t=dat__length;
  *__t4179t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1524t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4180t, uint64_t* __t4181t, uint64_t* __t4182t, char* __t4183t) {
  char* unsafe_ptr=0;
  uint64_t __t1525t__=0;
  uint64_t __t1526t=0;
  char __t1527t__=0;
  uint64_t __t1528t__=0;
  uint64_t __t1529t=0;
  char __t1530t__=0;
  char* __t1531t__unsafe_ptr=0;
  uint64_t __t1531t__dat__pos=0;
  uint64_t __t1531t__dat__length=0;
  char __t1531t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t739t(buf__unsafe_align,&__t1525t__);
  __t1526t=1;
  neq__t157t(__t1525t__,__t1526t,&__t1527t__);
  if(__t1527t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t739t(buf__unsafe_offset,&__t1528t__);
  __t1529t=0;
  neq__t157t(__t1528t__,__t1529t,&__t1530t__);
  if(__t1530t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1520t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1531t__unsafe_ptr,&__t1531t__dat__pos,&__t1531t__dat__length,&__t1531t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4180t=__t1531t__unsafe_ptr;
  *__t4181t=__t1531t__dat__pos;
  *__t4182t=__t1531t__dat__length;
  *__t4183t=__t1531t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1558t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4184t, uint64_t* __t4185t, uint64_t* __t4186t, char* __t4187t) {
  uint64_t __t1559t=0;
  char __t1560t__=0;
  char* __t1562t__=0;
  char __t1563t__value=0;
  char first=0;
  char* __t1564t__unsafe_ptr=0;
  uint64_t __t1564t__dat__pos=0;
  uint64_t __t1564t__dat__length=0;
  char __t1564t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1559t=0;
  neq__t157t(length,__t1559t,&__t1560t__);
  if(__t1560t__){
  __t_errcode=get__t1073t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1562t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1563t__value,__t1562t__,1);
  first=__t1563t__value;
  }
  __t_errcode=str__t1524t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1564t__unsafe_ptr,&__t1564t__dat__pos,&__t1564t__dat__length,&__t1564t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4184t=__t1564t__unsafe_ptr;
  *__t4185t=__t1564t__dat__pos;
  *__t4186t=__t1564t__dat__length;
  *__t4187t=__t1564t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1580t(const char* c, char** __t4188t, uint64_t* __t4189t, uint64_t* __t4190t, char* __t4191t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__unsafe_size=0;
  uint32_t __t1581t__unsafe_offset=0;
  uint32_t __t1581t__unsafe_align=0;
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__unsafe_size=0;
  uint32_t __t1582t__unsafe_offset=0;
  uint32_t __t1582t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1583t__=0;
  uint64_t length=0;
  uint64_t __t1584t=0;
  uint64_t __t1585t__=0;
  char __t1586t=0;
  uint64_t __t1587t=0;
  char* __t1589t__unsafe_ptr=0;
  uint64_t __t1589t__dat__pos=0;
  uint64_t __t1589t__dat__length=0;
  char __t1589t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1495t(&__t1581t__unsafe_ptr,&__t1581t__unsafe_size,&__t1581t__unsafe_offset,&__t1581t__unsafe_align);
  __t1582t__unsafe_ptr=__t1581t__unsafe_ptr;
  __t1582t__unsafe_size=__t1581t__unsafe_size;
  __t1582t__unsafe_offset=__t1581t__unsafe_offset;
  __t1582t__unsafe_align=__t1581t__unsafe_align;
  buf__unsafe_ptr=__t1582t__unsafe_ptr;
  buf__unsafe_size=__t1582t__unsafe_size;
  buf__unsafe_offset=__t1582t__unsafe_offset;
  buf__unsafe_align=__t1582t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1583t__);
  buf__unsafe_ptr=__t1583t__;
  if(c){
  length=strlen(c);
  }
  __t1584t=1;
  add__t187t(length,__t1584t,&__t1585t__);
  buf__unsafe_size=__t1585t__;
  __t1587t=0;
  __t_complain=str__t1558t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1587t,length,&__t1589t__unsafe_ptr,&__t1589t__dat__pos,&__t1589t__dat__length,&__t1589t__dat__first);
  __t1586t=__t_complain;
  if(__t_complain){
  goto __t1586t__label;
  }
  ret__unsafe_ptr=__t1589t__unsafe_ptr;
  ret__dat__pos=__t1589t__dat__pos;
  ret__dat__length=__t1589t__dat__length;
  ret__dat__first=__t1589t__dat__first;
  __t1586t__label:__t1586t=__t1586t==0;
  goto __t_return;
  __t_return:
  *__t4188t=ret__unsafe_ptr;
  *__t4189t=ret__dat__pos;
  *__t4190t=ret__dat__length;
  *__t4191t=ret__dat__first;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1596t(char** __t4192t, uint64_t* __t4193t, uint32_t* __t4194t, uint32_t* __t4195t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4192t=unsafe_ptr;
  *__t4193t=unsafe_size;
  *__t4194t=unsafe_offset;
  *__t4195t=unsafe_align;
}

static inline __attribute__((always_inline)) int realloc__t721t(char* allocated, uint64_t bytes, char** __t4196t) {
  char* new_allocated=0;
  char __t722t__=0;
  char __t723t__=0;
  int __t724t=0;
  char* __t725t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t651t(new_allocated,&__t722t__);
  not__t41t(__t722t__,&__t723t__);
  if(__t723t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  unsafe_attach_type__t28t(new_allocated,allocated,&__t725t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4196t=__t725t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_alloc__t1219t(char** __t4197t, uint64_t bytes, char** __t4198t) {
  char* allocator__unsafe_ptr=*__t4197t;
  int __t1220t=0;
  char* __t1221t__elements=0;
  uint64_t __t1221t__size=0;
  uint64_t __t1221t__allocated=0;
  char* __t1222t__elements=0;
  uint64_t __t1222t__size=0;
  uint64_t __t1222t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  uint64_t __t1223t=0;
  uint64_t __t1224t__=0;
  uint64_t prev_size=0;
  uint64_t __t1225t=0;
  uint64_t __t1226t__=0;
  char __t1227t__=0;
  uint64_t __t1228t=0;
  uint64_t __t1229t__=0;
  uint64_t __t1230t=0;
  uint64_t __t1231t__=0;
  char* __t1232t__=0;
  uint64_t __t1233t=0;
  uint64_t __t1234t__=0;
  char* __t1236t__=0;
  char* new_elements=0;
  char* __t1237t__=0;
  uint64_t __t1238t=0;
  uint64_t __t1239t__=0;
  char* __t1240t__=0;
  char* position_ptr=0;
  char* __t1241t__=0;
  char* new_allocation=0;
  char* __t1242t__=0;
  uint64_t __t1243t=0;
  uint64_t ptr_size=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!allocator__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1221t__elements,allocator__unsafe_ptr,8);
  memcpy(&__t1221t__size,allocator__unsafe_ptr+8,8);
  memcpy(&__t1221t__allocated,allocator__unsafe_ptr+16,8);
  __t1222t__elements=__t1221t__elements;
  __t1222t__size=__t1221t__size;
  __t1222t__allocated=__t1221t__allocated;
  contents__elements=__t1222t__elements;
  contents__size=__t1222t__size;
  contents__allocated=__t1222t__allocated;
  __t1223t=0;
  add__t187t(contents__size,__t1223t,&__t1224t__);
  prev_size=__t1224t__;
  __t1225t=1;
  add__t187t(contents__size,__t1225t,&__t1226t__);
  contents__size=__t1226t__;
  ge__t372t(contents__size,contents__allocated,&__t1227t__);
  if(__t1227t__){
  __t1228t=2;
  mul__t211t(contents__allocated,__t1228t,&__t1229t__);
  __t1230t=1;
  add__t187t(__t1229t__,__t1230t,&__t1231t__);
  contents__allocated=__t1231t__;
  ptr__t0t(&__t1232t__);
  __t1233t=8;
  mul__t211t(contents__allocated,__t1233t,&__t1234t__);
  __t_errcode=realloc__t721t(contents__elements,__t1234t__,&__t1236t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_elements=__t1236t__;
  contents__elements=new_elements;
  }
  ptr__t0t(&__t1237t__);
  __t1238t=8;
  mul__t211t(prev_size,__t1238t,&__t1239t__);
  add__t733t(contents__elements,__t1239t__,&__t1240t__);
  position_ptr=__t1240t__;
  __t_errcode=alloc__t715t(bytes,&__t1241t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_allocation=__t1241t__;
  ptr__t0t(&__t1242t__);
  __t1243t=8;
  ptr_size=__t1243t;
  memcpy(position_ptr,&new_allocation,ptr_size);
  if(!allocator__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(allocator__unsafe_ptr,&contents__elements,8);
  memcpy(allocator__unsafe_ptr+8,&contents__size,8);
  memcpy(allocator__unsafe_ptr+16,&contents__allocated,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4197t=allocator__unsafe_ptr;
  *__t4198t=new_allocation;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1309t(char** __t4199t, uint64_t* __t4200t, uint32_t* __t4201t, uint32_t* __t4202t, char** __t4203t, uint64_t size, char** __t4204t, uint64_t* __t4205t, uint32_t* __t4206t, uint32_t* __t4207t) {
  char* buffer__unsafe_ptr=*__t4199t;
  uint64_t buffer__unsafe_size=*__t4200t;
  uint32_t buffer__unsafe_offset=*__t4201t;
  uint32_t buffer__unsafe_align=*__t4202t;
  char* BUCKET__unsafe_ptr=*__t4203t;
  int __t1310t=0;
  char __t1311t__=0;
  uint64_t __t1312t=0;
  char __t1313t__=0;
  char __t1314t=0;
  uint64_t __t1315t=0;
  uint64_t __t1316t__=0;
  uint64_t __t1317t__=0;
  int __t1319t=0;
  uint64_t __t1320t=0;
  char __t1321t__=0;
  uint64_t __t1322t__=0;
  uint64_t __t1323t__=0;
  uint64_t bytes=0;
  int __t1324t=0;
  uint64_t __t1325t=0;
  char __t1326t__=0;
  char* __t1327t__=0;
  int __t1328t=0;
  uint64_t __t1329t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t1311t__);
  if(__t1311t__){
  __t1312t=0;
  neq__t157t(size,__t1312t,&__t1313t__);
  __t1314t=__t1313t__;
  }
  if(__t1314t){
  __t1315t=0;
  nat__t739t(buffer__unsafe_align,&__t1316t__);
  mul__t211t(__t1316t__,size,&__t1317t__);
  zero__t732t(buffer__unsafe_ptr,__t1315t,__t1317t__);
  goto __t_return;
  }
  __t1320t=0;
  neq__t157t(buffer__unsafe_size,__t1320t,&__t1321t__);
  if(__t1321t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t739t(buffer__unsafe_align,&__t1322t__);
  mul__t211t(__t1322t__,size,&__t1323t__);
  bytes=__t1323t__;
  __t1325t=0;
  eq__t133t(bytes,__t1325t,&__t1326t__);
  if(__t1326t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=unsafe_alloc__t1219t(&BUCKET__unsafe_ptr,bytes,&__t1327t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1329t=0;
  zero__t732t(__t1327t__,__t1329t,bytes);
  buffer__unsafe_ptr=__t1327t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4199t=buffer__unsafe_ptr;
  *__t4200t=buffer__unsafe_size;
  *__t4201t=buffer__unsafe_offset;
  *__t4202t=buffer__unsafe_align;
  *__t4203t=BUCKET__unsafe_ptr;
  *__t4204t=buffer__unsafe_ptr;
  *__t4205t=buffer__unsafe_size;
  *__t4206t=buffer__unsafe_offset;
  *__t4207t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1127t(char** __t4208t, uint64_t* __t4209t, uint32_t* __t4210t, uint32_t* __t4211t, uint64_t pos, char** __t4212t, uint64_t* __t4213t, uint32_t* __t4214t, uint32_t* __t4215t, uint64_t* __t4216t) {
  char* buf__unsafe_ptr=*__t4208t;
  uint64_t buf__unsafe_size=*__t4209t;
  uint32_t buf__unsafe_offset=*__t4210t;
  uint32_t buf__unsafe_align=*__t4211t;
  goto __t_return;
  __t_return:
  *__t4208t=buf__unsafe_ptr;
  *__t4209t=buf__unsafe_size;
  *__t4210t=buf__unsafe_offset;
  *__t4211t=buf__unsafe_align;
  *__t4212t=buf__unsafe_ptr;
  *__t4213t=buf__unsafe_size;
  *__t4214t=buf__unsafe_offset;
  *__t4215t=buf__unsafe_align;
  *__t4216t=pos;
}

int alloc__t1595t(char** __t4217t, uint64_t length, char** __t4218t, uint64_t* __t4219t, uint32_t* __t4220t, uint32_t* __t4221t, uint64_t* __t4222t) {
  char* CHARS__unsafe_ptr=*__t4217t;
  char* __t1598t__unsafe_ptr=0;
  uint64_t __t1598t__unsafe_size=0;
  uint32_t __t1598t__unsafe_offset=0;
  uint32_t __t1598t__unsafe_align=0;
  char* __t1599t__unsafe_ptr=0;
  uint64_t __t1599t__unsafe_size=0;
  uint32_t __t1599t__unsafe_offset=0;
  uint32_t __t1599t__unsafe_align=0;
  uint64_t __t1600t=0;
  char* __t1601t__buf__unsafe_ptr=0;
  uint64_t __t1601t__buf__unsafe_size=0;
  uint32_t __t1601t__buf__unsafe_offset=0;
  uint32_t __t1601t__buf__unsafe_align=0;
  uint64_t __t1601t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1596t(&__t1598t__unsafe_ptr,&__t1598t__unsafe_size,&__t1598t__unsafe_offset,&__t1598t__unsafe_align);
  __t_errcode=alloc__t1309t(&__t1598t__unsafe_ptr,&__t1598t__unsafe_size,&__t1598t__unsafe_offset,&__t1598t__unsafe_align,&CHARS__unsafe_ptr,length,&__t1599t__unsafe_ptr,&__t1599t__unsafe_size,&__t1599t__unsafe_offset,&__t1599t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1600t=0;
  allocated__t1127t(&__t1599t__unsafe_ptr,&__t1599t__unsafe_size,&__t1599t__unsafe_offset,&__t1599t__unsafe_align,__t1600t,&__t1601t__buf__unsafe_ptr,&__t1601t__buf__unsafe_size,&__t1601t__buf__unsafe_offset,&__t1601t__buf__unsafe_align,&__t1601t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4217t=CHARS__unsafe_ptr;
  *__t4218t=__t1601t__buf__unsafe_ptr;
  *__t4219t=__t1601t__buf__unsafe_size;
  *__t4220t=__t1601t__buf__unsafe_offset;
  *__t4221t=__t1601t__buf__unsafe_align;
  *__t4222t=__t1601t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1619t(char** __t4223t, const char* _other, char** __t4224t, uint64_t* __t4225t, uint64_t* __t4226t, char* __t4227t) {
  char* CHARS__unsafe_ptr=*__t4223t;
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__dat__pos=0;
  uint64_t __t1620t__dat__length=0;
  char __t1620t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1621t__buf__unsafe_ptr=0;
  uint64_t __t1621t__buf__unsafe_size=0;
  uint32_t __t1621t__buf__unsafe_offset=0;
  uint32_t __t1621t__buf__unsafe_align=0;
  uint64_t __t1621t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1622t=0;
  char* __t1623t__unsafe_ptr=0;
  uint64_t __t1623t__dat__pos=0;
  uint64_t __t1623t__dat__length=0;
  char __t1623t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1580t(_other,&__t1620t__unsafe_ptr,&__t1620t__dat__pos,&__t1620t__dat__length,&__t1620t__dat__first);
  other__unsafe_ptr=__t1620t__unsafe_ptr;
  other__dat__pos=__t1620t__dat__pos;
  other__dat__length=__t1620t__dat__length;
  other__dat__first=__t1620t__dat__first;
  __t_errcode=alloc__t1595t(&CHARS__unsafe_ptr,other__dat__length,&__t1621t__buf__unsafe_ptr,&__t1621t__buf__unsafe_size,&__t1621t__buf__unsafe_offset,&__t1621t__buf__unsafe_align,&__t1621t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1621t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1621t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1621t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1621t__buf__unsafe_align;
  surface__pos=__t1621t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1524t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1623t__unsafe_ptr,&__t1623t__dat__pos,&__t1623t__dat__length,&__t1623t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4223t=CHARS__unsafe_ptr;
  *__t4224t=__t1623t__unsafe_ptr;
  *__t4225t=__t1623t__dat__pos;
  *__t4226t=__t1623t__dat__length;
  *__t4227t=__t1623t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t4119t(uint64_t number, char** __t4228t, uint64_t* __t4229t, uint64_t* __t4230t, char* __t4231t, char** __t4232t) {
  char* __t4120t__unsafe_ptr=0;
  char* __t4121t____t1102t__elements=0;
  uint64_t __t4121t____t1102t__size=0;
  uint64_t __t4121t____t1102t__allocated=0;
  char* __t4121t____t1103t__elements=0;
  uint64_t __t4121t____t1103t__size=0;
  uint64_t __t4121t____t1103t__allocated=0;
  char* __t4121t__contents__elements=0;
  uint64_t __t4121t__contents__size=0;
  uint64_t __t4121t__contents__allocated=0;
  uint64_t __t4121t____t1105t____t673t=0;
  uint64_t __t4121t____t1105t__to=0;
  uint64_t __t4121t____t1106t__from=0;
  uint64_t __t4121t____t1106t__to=0;
  uint64_t __t4121t____t1104t=0;
  uint64_t __t4121t____t1108t__=0;
  char __t4121t____t1107t=0;
  uint64_t __t4121t__i=0;
  char* __t4121t____t1109t__=0;
  uint64_t __t4121t____t1110t=0;
  uint64_t __t4121t____t1111t__=0;
  char* __t4121t____t1112t__=0;
  char* __t4121t__position=0;
  char* __t4121t____t1113t__=0;
  char* __t4122t__unsafe_ptr=0;
  char* alloc__unsafe_ptr=0;
  uint64_t __t4123t=0;
  char __t4124t__=0;
  char* __t4126t__unsafe_ptr=0;
  uint64_t __t4126t__dat__pos=0;
  uint64_t __t4126t__dat__length=0;
  char __t4126t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=bucket__t1094t(&__t4120t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4122t__unsafe_ptr=__t4120t__unsafe_ptr;
  alloc__unsafe_ptr=__t4122t__unsafe_ptr;
  __t4123t=0;
  gt__t324t(number,__t4123t,&__t4124t__);
  if(__t4124t__){
  __t_errcode=copy__t1619t(&alloc__unsafe_ptr,__t4125t,&__t4126t__unsafe_ptr,&__t4126t__dat__pos,&__t4126t__dat__length,&__t4126t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t4126t__unsafe_ptr;
  s__dat__pos=__t4126t__dat__pos;
  s__dat__length=__t4126t__dat__length;
  s__dat__first=__t4126t__dat__first;
  }
  goto __t_return;
  
  __t_failure:if(!alloc__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4121t____t1102t__elements,alloc__unsafe_ptr,8);
  memcpy(&__t4121t____t1102t__size,alloc__unsafe_ptr+8,8);
  memcpy(&__t4121t____t1102t__allocated,alloc__unsafe_ptr+16,8);
  __t4121t____t1103t__elements=__t4121t____t1102t__elements;
  __t4121t____t1103t__size=__t4121t____t1102t__size;
  __t4121t____t1103t__allocated=__t4121t____t1102t__allocated;
  __t4121t__contents__elements=__t4121t____t1103t__elements;
  __t4121t__contents__size=__t4121t____t1103t__size;
  __t4121t__contents__allocated=__t4121t____t1103t__allocated;
  of__t672t(__t4121t__contents__size,&__t4121t____t1105t____t673t,&__t4121t____t1105t__to);
  range__t689t(__t4121t____t1105t____t673t,__t4121t____t1105t__to,&__t4121t____t1106t__from,&__t4121t____t1106t__to);
  __t4121t____t1104t=0-1;
  while(1){
  __t4121t____t1104t=__t4121t____t1104t+1;
  __t_complain=get__t696t(__t4121t____t1106t__from,__t4121t____t1106t__to,__t4121t____t1104t,&__t4121t____t1108t__);
  __t4121t____t1107t=__t_complain;
  if(__t_complain){
  goto __t1107t__label;
  }
  __t4121t__i=__t4121t____t1108t__;
  __t1107t__label:__t4121t____t1107t=__t4121t____t1107t==0;
  if(!__t4121t____t1107t){
  break;
  }
  ptr__t0t(&__t4121t____t1109t__);
  __t4121t____t1110t=8;
  mul__t211t(__t4121t__i,__t4121t____t1110t,&__t4121t____t1111t__);
  add__t733t(__t4121t__contents__elements,__t4121t____t1111t__,&__t4121t____t1112t__);
  __t4121t__position=__t4121t____t1112t__;
  dereference_ptr__t735t(__t4121t__position,&__t4121t____t1113t__);
  free__t731t(&__t4121t____t1113t__);
  }
  free__t731t(&__t4121t__contents__elements);
  free__t731t(&alloc__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4228t=s__unsafe_ptr;
  *__t4229t=s__dat__pos;
  *__t4230t=s__dat__length;
  *__t4231t=s__dat__first;
  *__t4232t=alloc__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1760t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t4127t() {
  uint64_t __t4130t=0;
  char* __t4131t__s__unsafe_ptr=0;
  uint64_t __t4131t__s__dat__pos=0;
  uint64_t __t4131t__s__dat__length=0;
  char __t4131t__s__dat__first=0;
  char* __t4131t__alloc__unsafe_ptr=0;
  char* __t4132t____t4121t____t1102t__elements=0;
  uint64_t __t4132t____t4121t____t1102t__size=0;
  uint64_t __t4132t____t4121t____t1102t__allocated=0;
  char* __t4132t____t4121t____t1103t__elements=0;
  uint64_t __t4132t____t4121t____t1103t__size=0;
  uint64_t __t4132t____t4121t____t1103t__allocated=0;
  char* __t4132t____t4121t__contents__elements=0;
  uint64_t __t4132t____t4121t__contents__size=0;
  uint64_t __t4132t____t4121t__contents__allocated=0;
  uint64_t __t4132t____t4121t____t1105t____t673t=0;
  uint64_t __t4132t____t4121t____t1105t__to=0;
  uint64_t __t4132t____t4121t____t1106t__from=0;
  uint64_t __t4132t____t4121t____t1106t__to=0;
  uint64_t __t4132t____t4121t____t1104t=0;
  uint64_t __t4132t____t4121t____t1108t__=0;
  char __t4132t____t4121t____t1107t=0;
  uint64_t __t4132t____t4121t__i=0;
  char* __t4132t____t4121t____t1109t__=0;
  uint64_t __t4132t____t4121t____t1110t=0;
  uint64_t __t4132t____t4121t____t1111t__=0;
  char* __t4132t____t4121t____t1112t__=0;
  char* __t4132t____t4121t__position=0;
  char* __t4132t____t4121t____t1113t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  __t4130t=1;
  __t_errcode=test__t4119t(__t4130t,&__t4131t__s__unsafe_ptr,&__t4131t__s__dat__pos,&__t4131t__s__dat__length,&__t4131t__s__dat__first,&__t4131t__alloc__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1759t(__t4131t__s__unsafe_ptr,__t4131t__s__dat__pos,__t4131t__s__dat__length,__t4131t__s__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(!__t4131t__alloc__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4132t____t4121t____t1102t__elements,__t4131t__alloc__unsafe_ptr,8);
  memcpy(&__t4132t____t4121t____t1102t__size,__t4131t__alloc__unsafe_ptr+8,8);
  memcpy(&__t4132t____t4121t____t1102t__allocated,__t4131t__alloc__unsafe_ptr+16,8);
  __t4132t____t4121t____t1103t__elements=__t4132t____t4121t____t1102t__elements;
  __t4132t____t4121t____t1103t__size=__t4132t____t4121t____t1102t__size;
  __t4132t____t4121t____t1103t__allocated=__t4132t____t4121t____t1102t__allocated;
  __t4132t____t4121t__contents__elements=__t4132t____t4121t____t1103t__elements;
  __t4132t____t4121t__contents__size=__t4132t____t4121t____t1103t__size;
  __t4132t____t4121t__contents__allocated=__t4132t____t4121t____t1103t__allocated;
  of__t672t(__t4132t____t4121t__contents__size,&__t4132t____t4121t____t1105t____t673t,&__t4132t____t4121t____t1105t__to);
  range__t689t(__t4132t____t4121t____t1105t____t673t,__t4132t____t4121t____t1105t__to,&__t4132t____t4121t____t1106t__from,&__t4132t____t4121t____t1106t__to);
  __t4132t____t4121t____t1104t=0-1;
  while(1){
  __t4132t____t4121t____t1104t=__t4132t____t4121t____t1104t+1;
  __t_complain=get__t696t(__t4132t____t4121t____t1106t__from,__t4132t____t4121t____t1106t__to,__t4132t____t4121t____t1104t,&__t4132t____t4121t____t1108t__);
  __t4132t____t4121t____t1107t=__t_complain;
  if(__t_complain){
  goto __t1107t__label;
  }
  __t4132t____t4121t__i=__t4132t____t4121t____t1108t__;
  __t1107t__label:__t4132t____t4121t____t1107t=__t4132t____t4121t____t1107t==0;
  if(!__t4132t____t4121t____t1107t){
  break;
  }
  ptr__t0t(&__t4132t____t4121t____t1109t__);
  __t4132t____t4121t____t1110t=8;
  mul__t211t(__t4132t____t4121t__i,__t4132t____t4121t____t1110t,&__t4132t____t4121t____t1111t__);
  add__t733t(__t4132t____t4121t__contents__elements,__t4132t____t4121t____t1111t__,&__t4132t____t4121t____t1112t__);
  __t4132t____t4121t__position=__t4132t____t4121t____t1112t__;
  dereference_ptr__t735t(__t4132t____t4121t__position,&__t4132t____t4121t____t1113t__);
  free__t731t(&__t4132t____t4121t____t1113t__);
  }
  free__t731t(&__t4132t____t4121t__contents__elements);
  free__t731t(&__t4131t__alloc__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4127t();
                }