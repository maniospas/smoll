#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4520t="\nhello world!";
const char* const __t4515t="hello world!";
const char* const __t475t="\n";
static const char* __t_all_errcodes[45] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"linkedmem allocation multiple must be at least 1",
"cannot create a linkedmem using an allocated buffer as prototype",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
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
"imbalanced brackets"
};
int add__t3546t(char** __t4685t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4686t, uint64_t* __t4687t, uint64_t* __t4688t, char* __t4689t) ;
int greeting__t4494t(char** __t4690t, uint64_t depth, char** __t4691t, uint64_t* __t4692t, uint64_t* __t4693t, char* __t4694t) ;
static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void bucket_contents____t_buffer____buffer__t1235t(char** __t4545t, uint64_t* __t4546t, uint32_t* __t4547t, uint32_t* __t4548t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t4545t=unsafe_ptr;
  *__t4546t=unsafe_size;
  *__t4547t=unsafe_offset;
  *__t4548t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4549t) {
  int value=0;
  *__t4549t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4550t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4550t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4551t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4551t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4552t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4552t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4553t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4553t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t4554t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4554t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4555t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4555t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t4556t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4556t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4557t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4557t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t4558t) {
  char* allocated=0;
  char __t829t__=0;
  char __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t683t(allocated,&__t829t__);
  not__t42t(__t829t__,&__t830t__);
  if(__t830t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4558t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t950t(char** __t4559t, uint64_t* __t4560t, uint32_t* __t4561t, uint32_t* __t4562t, uint64_t size, char** __t4563t, uint64_t* __t4564t, uint32_t* __t4565t, uint32_t* __t4566t) {
  char* buffer__unsafe_ptr=*__t4559t;
  uint64_t buffer__unsafe_size=*__t4560t;
  uint32_t buffer__unsafe_offset=*__t4561t;
  uint32_t buffer__unsafe_align=*__t4562t;
  int __t951t=0;
  int __t952t=0;
  char __t953t__=0;
  uint64_t __t954t=0;
  char __t955t__=0;
  char __t956t=0;
  uint64_t __t957t=0;
  uint64_t __t958t__=0;
  uint64_t __t959t__=0;
  int __t961t=0;
  uint64_t __t962t=0;
  char __t963t__=0;
  uint64_t __t964t__=0;
  uint64_t __t965t__=0;
  uint64_t bytes=0;
  int __t966t=0;
  char* __t967t__=0;
  int __t968t=0;
  uint64_t __t969t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t953t__);
  if(__t953t__){
  __t954t=0;
  neq__t158t(size,__t954t,&__t955t__);
  __t956t=__t955t__;
  }
  if(__t956t){
  __t957t=0;
  nat__t724t(buffer__unsafe_align,&__t958t__);
  mul__t212t(__t958t__,size,&__t959t__);
  zero__t845t(buffer__unsafe_ptr,__t957t,__t959t__);
  goto __t_return;
  }
  __t962t=0;
  neq__t158t(buffer__unsafe_size,__t962t,&__t963t__);
  if(__t963t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t964t__);
  mul__t212t(__t964t__,size,&__t965t__);
  bytes=__t965t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t967t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t969t=0;
  zero__t845t(__t967t__,__t969t,bytes);
  buffer__unsafe_ptr=__t967t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4559t=buffer__unsafe_ptr;
  *__t4560t=buffer__unsafe_size;
  *__t4561t=buffer__unsafe_offset;
  *__t4562t=buffer__unsafe_align;
  *__t4563t=buffer__unsafe_ptr;
  *__t4564t=buffer__unsafe_size;
  *__t4565t=buffer__unsafe_offset;
  *__t4566t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t4567t, uint64_t* __t4568t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t4567t=from;
  *__t4568t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4569t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4569t=z;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t4570t, uint64_t* __t4571t) {
  uint64_t __t797t=0;
  uint64_t __t798t__=0;
  uint64_t __t799t=0;
  uint64_t from=0;
  __t797t=0;
  add__t188t(__t797t,_from,&__t798t__);
  __t799t=__t798t__;
  from=__t799t;
  goto __t_return;
  __t_return:
  *__t4570t=from;
  *__t4571t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t4572t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4572t=z;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t4573t, uint64_t r__to, uint64_t skipped, uint64_t* __t4574t) {
  uint64_t r__from=*__t4573t;
  char __t802t__=0;
  uint64_t ret=0;
  uint64_t __t803t=0;
  uint64_t __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t802t__);
  if(__t802t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t803t=1;
  add__t188t(ret,__t803t,&__t804t__);
  r__from=__t804t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4573t=r__from;
  *__t4574t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ptr__t0t(char** __t4575t) {
  char* value=0;
  *__t4575t=value;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4576t) {
  *__t4576t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t4577t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t4577t=__t847t__;
}

static inline __attribute__((always_inline)) void dereference_ptr__t848t(char* allocated, char** __t4578t) {
  char* ret=0;
  char* __t849t__=0;
  uint64_t __t855t=0;
  uint64_t ptr_size=0;
  ret=0;
  ptr__t0t(&__t849t__);
  __t855t=8;
  ptr_size=__t855t;
  memcpy(&ret,allocated,ptr_size);
  goto __t_return;
  __t_return:
  *__t4578t=ret;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t4579t) {
  char* allocated=*__t4579t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t4579t=allocated;
}

static inline __attribute__((always_inline)) void unsafe_free__t1219t(char** __t4580t, uint64_t* __t4581t, uint64_t* __t4582t) {
  char* contents__elements=*__t4580t;
  uint64_t contents__size=*__t4581t;
  uint64_t contents__allocated=*__t4582t;
  uint64_t __t1220t=0;
  uint64_t __t1221t__from=0;
  uint64_t __t1221t__to=0;
  uint64_t __t1222t__from=0;
  uint64_t __t1222t__to=0;
  char __t1223t=0;
  uint64_t __t1224t__=0;
  uint64_t i=0;
  char* __t1225t__=0;
  uint64_t __t1228t=0;
  uint64_t __t1229t__=0;
  char* __t1230t__=0;
  char* position=0;
  char* __t1231t__=0;
  int __t_complain=0;
  of__t779t(contents__size,&__t1221t__from,&__t1221t__to);
  range__t796t(__t1221t__from,__t1221t__to,&__t1222t__from,&__t1222t__to);
  __t1220t=0-1;
  while(1){
  __t1220t=__t1220t+1;
  __t_complain=mutget__t801t(&__t1222t__from,__t1222t__to,__t1220t,&__t1224t__);
  __t1223t=__t_complain;
  if(__t_complain){
  goto __t1223t__label;
  }
  i=__t1224t__;
  __t1223t__label:__t1223t=__t1223t==0;
  if(!__t1223t){
  break;
  }
  ptr__t0t(&__t1225t__);
  __t1228t=8;
  mul__t212t(i,__t1228t,&__t1229t__);
  add__t846t(contents__elements,__t1229t__,&__t1230t__);
  position=__t1230t__;
  dereference_ptr__t848t(position,&__t1231t__);
  free__t844t(&__t1231t__);
  }
  free__t844t(&contents__elements);
  goto __t_return;
  __t_return:
  *__t4580t=contents__elements;
  *__t4581t=contents__size;
  *__t4582t=contents__allocated;
}

int bucket__t1234t(char** __t4583t) {
  char* __t1237t__unsafe_ptr=0;
  uint64_t __t1237t__unsafe_size=0;
  uint32_t __t1237t__unsafe_offset=0;
  uint32_t __t1237t__unsafe_align=0;
  uint64_t __t1238t=0;
  char* __t1240t__unsafe_ptr=0;
  uint64_t __t1240t__unsafe_size=0;
  uint32_t __t1240t__unsafe_offset=0;
  uint32_t __t1240t__unsafe_align=0;
  char* __t1241t=0;
  char* unsafe_ptr=0;
  char __t1242t=0;
  char* __t1243t__elements=0;
  uint64_t __t1243t__size=0;
  uint64_t __t1243t__allocated=0;
  char* __t1244t__elements=0;
  uint64_t __t1244t__size=0;
  uint64_t __t1244t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  int __t_errcode=0;
  int __t_complain=0;
  bucket_contents____t_buffer____buffer__t1235t(&__t1237t__unsafe_ptr,&__t1237t__unsafe_size,&__t1237t__unsafe_offset,&__t1237t__unsafe_align);
  __t1238t=1;
  __t_errcode=alloc__t950t(&__t1237t__unsafe_ptr,&__t1237t__unsafe_size,&__t1237t__unsafe_offset,&__t1237t__unsafe_align,__t1238t,&__t1240t__unsafe_ptr,&__t1240t__unsafe_size,&__t1240t__unsafe_offset,&__t1240t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1241t=__t1240t__unsafe_ptr;
  unsafe_ptr=__t1241t;
  goto __t_return;
  
  __t_failure:if(!unsafe_ptr){
  __t_complain=2;
  goto __t1242t__label;
  }
  else{
  memcpy(&__t1243t__elements,unsafe_ptr,8);
  memcpy(&__t1243t__size,unsafe_ptr+8,8);
  memcpy(&__t1243t__allocated,unsafe_ptr+16,8);
  }
  __t1244t__elements=__t1243t__elements;
  __t1244t__size=__t1243t__size;
  __t1244t__allocated=__t1243t__allocated;
  contents__elements=__t1244t__elements;
  contents__size=__t1244t__size;
  contents__allocated=__t1244t__allocated;
  __t1242t__label:__t1242t=__t1242t==0;
  if(__t1242t){
  unsafe_free__t1219t(&contents__elements,&contents__size,&contents__allocated);
  free__t844t(&unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t4583t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void le__t350t(uint64_t x, uint64_t y, char* __t4584t) {
  int __t351t__=0;
  char z=0;
  is_different__t109t(x,y,&__t351t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t4584t=z;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1805t(char** __t4585t, uint64_t* __t4586t, uint32_t* __t4587t, uint32_t* __t4588t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4585t=unsafe_ptr;
  *__t4586t=unsafe_size;
  *__t4587t=unsafe_offset;
  *__t4588t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t4589t) {
  *__t4589t=to;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4590t) {
  int __t1192t=0;
  char __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  uint64_t __t1196t__=0;
  uint64_t __t1197t__=0;
  char* __t1198t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1193t__);
  if(__t1193t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1194t__);
  mul__t212t(i,__t1194t__,&__t1195t__);
  nat__t724t(buffer__unsafe_offset,&__t1196t__);
  add__t188t(__t1195t__,__t1196t__,&__t1197t__);
  add__t846t(buffer__unsafe_ptr,__t1197t__,&__t1198t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4590t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1844t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4591t, uint64_t* __t4592t, uint64_t* __t4593t, char* __t4594t) {
  goto __t_return;
  __t_return:
  *__t4591t=unsafe_ptr;
  *__t4592t=dat__pos;
  *__t4593t=dat__length;
  *__t4594t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1848t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4595t, uint64_t* __t4596t, uint64_t* __t4597t, char* __t4598t) {
  char* unsafe_ptr=0;
  uint64_t __t1849t__=0;
  uint64_t __t1850t=0;
  char __t1851t__=0;
  uint64_t __t1852t__=0;
  uint64_t __t1853t=0;
  char __t1854t__=0;
  char* __t1855t__unsafe_ptr=0;
  uint64_t __t1855t__dat__pos=0;
  uint64_t __t1855t__dat__length=0;
  char __t1855t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1849t__);
  __t1850t=1;
  neq__t158t(__t1849t__,__t1850t,&__t1851t__);
  if(__t1851t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1852t__);
  __t1853t=0;
  neq__t158t(__t1852t__,__t1853t,&__t1854t__);
  if(__t1854t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1844t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1855t__unsafe_ptr,&__t1855t__dat__pos,&__t1855t__dat__length,&__t1855t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4595t=__t1855t__unsafe_ptr;
  *__t4596t=__t1855t__dat__pos;
  *__t4597t=__t1855t__dat__length;
  *__t4598t=__t1855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4599t, uint64_t* __t4600t, uint64_t* __t4601t, char* __t4602t) {
  uint64_t __t1883t=0;
  char __t1884t__=0;
  char* __t1886t__=0;
  char __t1887t__value=0;
  char first=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__dat__pos=0;
  uint64_t __t1888t__dat__length=0;
  char __t1888t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1883t=0;
  neq__t158t(length,__t1883t,&__t1884t__);
  if(__t1884t__){
  __t_errcode=get__t1191t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1886t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1886t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1887t__value,__t1886t__,1);
  first=__t1887t__value;
  }
  __t_errcode=str__t1848t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1888t__unsafe_ptr,&__t1888t__dat__pos,&__t1888t__dat__length,&__t1888t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4599t=__t1888t__unsafe_ptr;
  *__t4600t=__t1888t__dat__pos;
  *__t4601t=__t1888t__dat__length;
  *__t4602t=__t1888t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1904t(const char* c, char** __t4603t, uint64_t* __t4604t, uint64_t* __t4605t, char* __t4606t) {
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__unsafe_size=0;
  uint32_t __t1905t__unsafe_offset=0;
  uint32_t __t1905t__unsafe_align=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__unsafe_size=0;
  uint32_t __t1906t__unsafe_offset=0;
  uint32_t __t1906t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1907t__=0;
  uint64_t length=0;
  uint64_t __t1908t=0;
  uint64_t __t1909t__=0;
  char __t1910t=0;
  uint64_t __t1911t=0;
  char* __t1913t__unsafe_ptr=0;
  uint64_t __t1913t__dat__pos=0;
  uint64_t __t1913t__dat__length=0;
  char __t1913t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1805t(&__t1905t__unsafe_ptr,&__t1905t__unsafe_size,&__t1905t__unsafe_offset,&__t1905t__unsafe_align);
  __t1906t__unsafe_ptr=__t1905t__unsafe_ptr;
  __t1906t__unsafe_size=__t1905t__unsafe_size;
  __t1906t__unsafe_offset=__t1905t__unsafe_offset;
  __t1906t__unsafe_align=__t1905t__unsafe_align;
  buf__unsafe_ptr=__t1906t__unsafe_ptr;
  buf__unsafe_size=__t1906t__unsafe_size;
  buf__unsafe_offset=__t1906t__unsafe_offset;
  buf__unsafe_align=__t1906t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1907t__);
  buf__unsafe_ptr=__t1907t__;
  if(c){
  length=strlen(c);
  }
  __t1908t=1;
  add__t188t(length,__t1908t,&__t1909t__);
  buf__unsafe_size=__t1909t__;
  __t1911t=0;
  __t_complain=str__t1882t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1911t,length,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length,&__t1913t__dat__first);
  __t1910t=__t_complain;
  if(__t_complain){
  goto __t1910t__label;
  }
  ret__unsafe_ptr=__t1913t__unsafe_ptr;
  ret__dat__pos=__t1913t__dat__pos;
  ret__dat__length=__t1913t__dat__length;
  ret__dat__first=__t1913t__dat__first;
  __t1910t__label:__t1910t=__t1910t==0;
  goto __t_return;
  __t_return:
  *__t4603t=ret__unsafe_ptr;
  *__t4604t=ret__dat__pos;
  *__t4605t=ret__dat__length;
  *__t4606t=ret__dat__first;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t4607t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4607t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t4608t) {
  int __t403t__=0;
  int __t404t=0;
  int __t405t=0;
  char __t406t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t403t__);
  lt__t302t(x,y,&__t406t__);
  if(__t406t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4608t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1881t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4609t, uint64_t* __t4610t, uint64_t* __t4611t, char* __t4612t) {
  goto __t_return;
  __t_return:
  *__t4609t=other__unsafe_ptr;
  *__t4610t=other__dat__pos;
  *__t4611t=other__dat__length;
  *__t4612t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t1914t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t4613t) {
  goto __t_return;
  __t_return:
  *__t4613t=s__dat__length;
}

static inline __attribute__((always_inline)) int realloc__t834t(char* allocated, uint64_t bytes, char** __t4614t) {
  char* new_allocated=0;
  char __t835t__=0;
  char __t836t__=0;
  int __t837t=0;
  char* __t838t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t683t(new_allocated,&__t835t__);
  not__t42t(__t835t__,&__t836t__);
  if(__t836t__){
  __t_errcode=18;
  goto __t_failure;
  }
  allocated=new_allocated;
  unsafe_attach_type__t28t(new_allocated,allocated,&__t838t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4614t=__t838t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_alloc__t1266t(char** __t4615t, uint64_t bytes, char** __t4616t) {
  char* allocator__unsafe_ptr=*__t4615t;
  int __t1267t=0;
  char* __t1268t__elements=0;
  uint64_t __t1268t__size=0;
  uint64_t __t1268t__allocated=0;
  char* __t1269t__elements=0;
  uint64_t __t1269t__size=0;
  uint64_t __t1269t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  uint64_t __t1270t=0;
  uint64_t __t1271t__=0;
  uint64_t prev_size=0;
  uint64_t __t1272t=0;
  uint64_t __t1273t__=0;
  char __t1274t__=0;
  uint64_t __t1275t=0;
  uint64_t __t1276t__=0;
  uint64_t __t1277t=0;
  uint64_t __t1278t__=0;
  char* __t1279t__=0;
  uint64_t __t1282t=0;
  uint64_t __t1283t__=0;
  char* __t1285t__=0;
  char* new_elements=0;
  char* __t1286t__=0;
  uint64_t __t1289t=0;
  uint64_t __t1290t__=0;
  char* __t1291t__=0;
  char* position_ptr=0;
  char* __t1292t__=0;
  char* new_allocation=0;
  char* __t1293t__=0;
  uint64_t __t1296t=0;
  uint64_t ptr_size=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!allocator__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1268t__elements,allocator__unsafe_ptr,8);
  memcpy(&__t1268t__size,allocator__unsafe_ptr+8,8);
  memcpy(&__t1268t__allocated,allocator__unsafe_ptr+16,8);
  __t1269t__elements=__t1268t__elements;
  __t1269t__size=__t1268t__size;
  __t1269t__allocated=__t1268t__allocated;
  contents__elements=__t1269t__elements;
  contents__size=__t1269t__size;
  contents__allocated=__t1269t__allocated;
  __t1270t=0;
  add__t188t(contents__size,__t1270t,&__t1271t__);
  prev_size=__t1271t__;
  __t1272t=1;
  add__t188t(contents__size,__t1272t,&__t1273t__);
  contents__size=__t1273t__;
  ge__t374t(contents__size,contents__allocated,&__t1274t__);
  if(__t1274t__){
  __t1275t=2;
  mul__t212t(contents__allocated,__t1275t,&__t1276t__);
  __t1277t=1;
  add__t188t(__t1276t__,__t1277t,&__t1278t__);
  contents__allocated=__t1278t__;
  ptr__t0t(&__t1279t__);
  __t1282t=8;
  mul__t212t(contents__allocated,__t1282t,&__t1283t__);
  __t_errcode=realloc__t834t(contents__elements,__t1283t__,&__t1285t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_elements=__t1285t__;
  contents__elements=new_elements;
  }
  ptr__t0t(&__t1286t__);
  __t1289t=8;
  mul__t212t(prev_size,__t1289t,&__t1290t__);
  add__t846t(contents__elements,__t1290t__,&__t1291t__);
  position_ptr=__t1291t__;
  __t_errcode=alloc__t828t(bytes,&__t1292t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_allocation=__t1292t__;
  ptr__t0t(&__t1293t__);
  __t1296t=8;
  ptr_size=__t1296t;
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
  *__t4615t=allocator__unsafe_ptr;
  *__t4616t=new_allocation;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1370t(char** __t4617t, char** __t4618t, uint64_t* __t4619t, uint32_t* __t4620t, uint32_t* __t4621t, uint64_t size, char** __t4622t, uint64_t* __t4623t, uint32_t* __t4624t, uint32_t* __t4625t) {
  char* BUCKET__unsafe_ptr=*__t4617t;
  char* buffer__unsafe_ptr=*__t4618t;
  uint64_t buffer__unsafe_size=*__t4619t;
  uint32_t buffer__unsafe_offset=*__t4620t;
  uint32_t buffer__unsafe_align=*__t4621t;
  int __t1371t=0;
  char __t1372t__=0;
  uint64_t __t1373t=0;
  char __t1374t__=0;
  char __t1375t=0;
  uint64_t __t1376t=0;
  uint64_t __t1377t__=0;
  uint64_t __t1378t__=0;
  int __t1380t=0;
  uint64_t __t1381t=0;
  char __t1382t__=0;
  uint64_t __t1383t__=0;
  uint64_t __t1384t__=0;
  uint64_t bytes=0;
  int __t1385t=0;
  uint64_t __t1386t=0;
  char __t1387t__=0;
  char* __t1388t__=0;
  int __t1389t=0;
  uint64_t __t1390t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t1372t__);
  if(__t1372t__){
  __t1373t=0;
  neq__t158t(size,__t1373t,&__t1374t__);
  __t1375t=__t1374t__;
  }
  if(__t1375t){
  __t1376t=0;
  nat__t724t(buffer__unsafe_align,&__t1377t__);
  mul__t212t(__t1377t__,size,&__t1378t__);
  zero__t845t(buffer__unsafe_ptr,__t1376t,__t1378t__);
  goto __t_return;
  }
  __t1381t=0;
  neq__t158t(buffer__unsafe_size,__t1381t,&__t1382t__);
  if(__t1382t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1383t__);
  mul__t212t(__t1383t__,size,&__t1384t__);
  bytes=__t1384t__;
  __t1386t=0;
  eq__t134t(bytes,__t1386t,&__t1387t__);
  if(__t1387t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=unsafe_alloc__t1266t(&BUCKET__unsafe_ptr,bytes,&__t1388t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1390t=0;
  zero__t845t(__t1388t__,__t1390t,bytes);
  buffer__unsafe_ptr=__t1388t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4617t=BUCKET__unsafe_ptr;
  *__t4618t=buffer__unsafe_ptr;
  *__t4619t=buffer__unsafe_size;
  *__t4620t=buffer__unsafe_offset;
  *__t4621t=buffer__unsafe_align;
  *__t4622t=buffer__unsafe_ptr;
  *__t4623t=buffer__unsafe_size;
  *__t4624t=buffer__unsafe_offset;
  *__t4625t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1202t(char** __t4626t, uint64_t* __t4627t, uint32_t* __t4628t, uint32_t* __t4629t, uint64_t pos, char** __t4630t, uint64_t* __t4631t, uint32_t* __t4632t, uint32_t* __t4633t, uint64_t* __t4634t) {
  char* buf__unsafe_ptr=*__t4626t;
  uint64_t buf__unsafe_size=*__t4627t;
  uint32_t buf__unsafe_offset=*__t4628t;
  uint32_t buf__unsafe_align=*__t4629t;
  goto __t_return;
  __t_return:
  *__t4626t=buf__unsafe_ptr;
  *__t4627t=buf__unsafe_size;
  *__t4628t=buf__unsafe_offset;
  *__t4629t=buf__unsafe_align;
  *__t4630t=buf__unsafe_ptr;
  *__t4631t=buf__unsafe_size;
  *__t4632t=buf__unsafe_offset;
  *__t4633t=buf__unsafe_align;
  *__t4634t=pos;
}

int alloc__t1837t(char** __t4635t, uint64_t length, char** __t4636t, uint64_t* __t4637t, uint32_t* __t4638t, uint32_t* __t4639t, uint64_t* __t4640t) {
  char* CHARS__unsafe_ptr=*__t4635t;
  char* __t1838t__unsafe_ptr=0;
  uint64_t __t1838t__unsafe_size=0;
  uint32_t __t1838t__unsafe_offset=0;
  uint32_t __t1838t__unsafe_align=0;
  char* __t1839t__unsafe_ptr=0;
  uint64_t __t1839t__unsafe_size=0;
  uint32_t __t1839t__unsafe_offset=0;
  uint32_t __t1839t__unsafe_align=0;
  uint64_t __t1840t=0;
  char* __t1841t__buf__unsafe_ptr=0;
  uint64_t __t1841t__buf__unsafe_size=0;
  uint32_t __t1841t__buf__unsafe_offset=0;
  uint32_t __t1841t__buf__unsafe_align=0;
  uint64_t __t1841t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1805t(&__t1838t__unsafe_ptr,&__t1838t__unsafe_size,&__t1838t__unsafe_offset,&__t1838t__unsafe_align);
  __t_errcode=alloc__t1370t(&CHARS__unsafe_ptr,&__t1838t__unsafe_ptr,&__t1838t__unsafe_size,&__t1838t__unsafe_offset,&__t1838t__unsafe_align,length,&__t1839t__unsafe_ptr,&__t1839t__unsafe_size,&__t1839t__unsafe_offset,&__t1839t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1840t=0;
  allocated__t1202t(&__t1839t__unsafe_ptr,&__t1839t__unsafe_size,&__t1839t__unsafe_offset,&__t1839t__unsafe_align,__t1840t,&__t1841t__buf__unsafe_ptr,&__t1841t__buf__unsafe_size,&__t1841t__buf__unsafe_offset,&__t1841t__buf__unsafe_align,&__t1841t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4635t=CHARS__unsafe_ptr;
  *__t4636t=__t1841t__buf__unsafe_ptr;
  *__t4637t=__t1841t__buf__unsafe_size;
  *__t4638t=__t1841t__buf__unsafe_offset;
  *__t4639t=__t1841t__buf__unsafe_align;
  *__t4640t=__t1841t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1467t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4641t, uint64_t* __t4642t, uint32_t* __t4643t, uint32_t* __t4644t, uint64_t* __t4645t) {
  char* __t1468t__unsafe_ptr=0;
  uint64_t __t1468t__unsafe_size=0;
  uint32_t __t1468t__unsafe_offset=0;
  uint32_t __t1468t__unsafe_align=0;
  uint64_t __t1469t=0;
  __t1468t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1468t__unsafe_size=self__buf__unsafe_size;
  __t1468t__unsafe_offset=self__buf__unsafe_offset;
  __t1468t__unsafe_align=self__buf__unsafe_align;
  __t1469t=self__pos;
  goto __t_return;
  __t_return:
  *__t4641t=__t1468t__unsafe_ptr;
  *__t4642t=__t1468t__unsafe_size;
  *__t4643t=__t1468t__unsafe_offset;
  *__t4644t=__t1468t__unsafe_align;
  *__t4645t=__t1469t;
}

static inline __attribute__((always_inline)) void arena__t1458t(char** __t4646t, uint64_t* __t4647t, uint32_t* __t4648t, uint32_t* __t4649t, uint64_t _pos, char** __t4650t, uint64_t* __t4651t, uint32_t* __t4652t, uint32_t* __t4653t, uint64_t* __t4654t) {
  char* buf__unsafe_ptr=*__t4646t;
  uint64_t buf__unsafe_size=*__t4647t;
  uint32_t buf__unsafe_offset=*__t4648t;
  uint32_t buf__unsafe_align=*__t4649t;
  uint64_t __t1459t=0;
  uint64_t pos=0;
  __t1459t=_pos;
  pos=__t1459t;
  goto __t_return;
  __t_return:
  *__t4646t=buf__unsafe_ptr;
  *__t4647t=buf__unsafe_size;
  *__t4648t=buf__unsafe_offset;
  *__t4649t=buf__unsafe_align;
  *__t4650t=buf__unsafe_ptr;
  *__t4651t=buf__unsafe_size;
  *__t4652t=buf__unsafe_offset;
  *__t4653t=buf__unsafe_align;
  *__t4654t=pos;
}

static inline __attribute__((always_inline)) void len__t1199t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4655t) {
  goto __t_return;
  __t_return:
  *__t4655t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t4656t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4656t=z;
}

static inline __attribute__((always_inline)) int alloc__t1489t(char** __t4657t, uint64_t* __t4658t, uint32_t* __t4659t, uint32_t* __t4660t, uint64_t* __t4661t, uint64_t length, char** __t4662t, uint64_t* __t4663t, uint32_t* __t4664t, uint32_t* __t4665t, uint64_t* __t4666t) {
  char* allocator__buf__unsafe_ptr=*__t4657t;
  uint64_t allocator__buf__unsafe_size=*__t4658t;
  uint32_t allocator__buf__unsafe_offset=*__t4659t;
  uint32_t allocator__buf__unsafe_align=*__t4660t;
  uint64_t allocator__pos=*__t4661t;
  int __t1490t=0;
  uint64_t __t1491t__=0;
  uint64_t next_pos=0;
  uint64_t __t1492t__=0;
  char __t1493t__=0;
  uint64_t __t1494t=0;
  uint64_t __t1495t__=0;
  uint64_t pos=0;
  char* __t1496t__buf__unsafe_ptr=0;
  uint64_t __t1496t__buf__unsafe_size=0;
  uint32_t __t1496t__buf__unsafe_offset=0;
  uint32_t __t1496t__buf__unsafe_align=0;
  uint64_t __t1496t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1491t__);
  next_pos=__t1491t__;
  len__t1199t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1492t__);
  gt__t326t(next_pos,__t1492t__,&__t1493t__);
  if(__t1493t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1494t=0;
  add__t188t(allocator__pos,__t1494t,&__t1495t__);
  pos=__t1495t__;
  allocator__pos=next_pos;
  allocated__t1202t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1496t__buf__unsafe_ptr,&__t1496t__buf__unsafe_size,&__t1496t__buf__unsafe_offset,&__t1496t__buf__unsafe_align,&__t1496t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4657t=allocator__buf__unsafe_ptr;
  *__t4658t=allocator__buf__unsafe_size;
  *__t4659t=allocator__buf__unsafe_offset;
  *__t4660t=allocator__buf__unsafe_align;
  *__t4661t=allocator__pos;
  *__t4662t=__t1496t__buf__unsafe_ptr;
  *__t4663t=__t1496t__buf__unsafe_size;
  *__t4664t=__t1496t__buf__unsafe_offset;
  *__t4665t=__t1496t__buf__unsafe_align;
  *__t4666t=__t1496t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1985t(char** __t4667t, uint64_t* __t4668t, uint32_t* __t4669t, uint32_t* __t4670t, uint64_t* __t4671t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t4672t, uint64_t* __t4673t, uint64_t* __t4674t, char* __t4675t) {
  char* CHARS__buf__unsafe_ptr=*__t4667t;
  uint64_t CHARS__buf__unsafe_size=*__t4668t;
  uint32_t CHARS__buf__unsafe_offset=*__t4669t;
  uint32_t CHARS__buf__unsafe_align=*__t4670t;
  uint64_t CHARS__pos=*__t4671t;
  char* __t1986t__unsafe_ptr=0;
  uint64_t __t1986t__dat__pos=0;
  uint64_t __t1986t__dat__length=0;
  char __t1986t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1987t__buf__unsafe_ptr=0;
  uint64_t __t1987t__buf__unsafe_size=0;
  uint32_t __t1987t__buf__unsafe_offset=0;
  uint32_t __t1987t__buf__unsafe_align=0;
  uint64_t __t1987t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1988t=0;
  char* __t1989t__unsafe_ptr=0;
  uint64_t __t1989t__dat__pos=0;
  uint64_t __t1989t__dat__length=0;
  char __t1989t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1986t__unsafe_ptr,&__t1986t__dat__pos,&__t1986t__dat__length,&__t1986t__dat__first);
  other__unsafe_ptr=__t1986t__unsafe_ptr;
  other__dat__pos=__t1986t__dat__pos;
  other__dat__length=__t1986t__dat__length;
  other__dat__first=__t1986t__dat__first;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1987t__buf__unsafe_ptr,&__t1987t__buf__unsafe_size,&__t1987t__buf__unsafe_offset,&__t1987t__buf__unsafe_align,&__t1987t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1987t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1987t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1987t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1987t__buf__unsafe_align;
  surface__pos=__t1987t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1848t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1989t__unsafe_ptr,&__t1989t__dat__pos,&__t1989t__dat__length,&__t1989t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4667t=CHARS__buf__unsafe_ptr;
  *__t4668t=CHARS__buf__unsafe_size;
  *__t4669t=CHARS__buf__unsafe_offset;
  *__t4670t=CHARS__buf__unsafe_align;
  *__t4671t=CHARS__pos;
  *__t4672t=__t1989t__unsafe_ptr;
  *__t4673t=__t1989t__dat__pos;
  *__t4674t=__t1989t__dat__length;
  *__t4675t=__t1989t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1464t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4676t, uint64_t* __t4677t, uint32_t* __t4678t, uint32_t* __t4679t, uint64_t* __t4680t) {
  char* __t1465t__unsafe_ptr=0;
  uint64_t __t1465t__unsafe_size=0;
  uint32_t __t1465t__unsafe_offset=0;
  uint32_t __t1465t__unsafe_align=0;
  uint64_t __t1466t=0;
  __t1465t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1465t__unsafe_size=self__buf__unsafe_size;
  __t1465t__unsafe_offset=self__buf__unsafe_offset;
  __t1465t__unsafe_align=self__buf__unsafe_align;
  __t1466t=self__pos;
  goto __t_return;
  __t_return:
  *__t4676t=__t1465t__unsafe_ptr;
  *__t4677t=__t1465t__unsafe_size;
  *__t4678t=__t1465t__unsafe_offset;
  *__t4679t=__t1465t__unsafe_align;
  *__t4680t=__t1466t;
}

int str__t1900t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t4681t, uint64_t* __t4682t, uint64_t* __t4683t, char* __t4684t) {
  uint64_t __t1902t__=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__dat__pos=0;
  uint64_t __t1903t__dat__length=0;
  char __t1903t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1902t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1882t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1902t__,&__t1903t__unsafe_ptr,&__t1903t__dat__pos,&__t1903t__dat__length,&__t1903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4681t=__t1903t__unsafe_ptr;
  *__t4682t=__t1903t__dat__pos;
  *__t4683t=__t1903t__dat__length;
  *__t4684t=__t1903t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3546t(char** __t4685t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4686t, uint64_t* __t4687t, uint64_t* __t4688t, char* __t4689t) {
  char* CHARS__unsafe_ptr=*__t4685t;
  char* __t3547t__unsafe_ptr=0;
  uint64_t __t3547t__dat__pos=0;
  uint64_t __t3547t__dat__length=0;
  char __t3547t__dat__first=0;
  char* __t4523t__unsafe_ptr=0;
  uint64_t __t4523t__dat__pos=0;
  uint64_t __t4523t__dat__length=0;
  char __t4523t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t4524t__unsafe_ptr=0;
  uint64_t __t4524t__dat__pos=0;
  uint64_t __t4524t__dat__length=0;
  char __t4524t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t4525t=0;
  int __t4526t__=0;
  uint64_t __t4527t__=0;
  uint64_t __t4528t__=0;
  uint64_t __t4529t__=0;
  uint64_t len_sums=0;
  int __t4530t=0;
  int __t4531t=0;
  uint64_t __t4532t=0;
  uint64_t prev_pos=0;
  char* __t4533t__buf__unsafe_ptr=0;
  uint64_t __t4533t__buf__unsafe_size=0;
  uint32_t __t4533t__buf__unsafe_offset=0;
  uint32_t __t4533t__buf__unsafe_align=0;
  uint64_t __t4533t__pos=0;
  char* __t4534t____t1468t__unsafe_ptr=0;
  uint64_t __t4534t____t1468t__unsafe_size=0;
  uint32_t __t4534t____t1468t__unsafe_offset=0;
  uint32_t __t4534t____t1468t__unsafe_align=0;
  uint64_t __t4534t____t1469t=0;
  char* __t4535t__buf__unsafe_ptr=0;
  uint64_t __t4535t__buf__unsafe_size=0;
  uint32_t __t4535t__buf__unsafe_offset=0;
  uint32_t __t4535t__buf__unsafe_align=0;
  uint64_t __t4535t__pos=0;
  char* __t4536t__buf__unsafe_ptr=0;
  uint64_t __t4536t__buf__unsafe_size=0;
  uint32_t __t4536t__buf__unsafe_offset=0;
  uint32_t __t4536t__buf__unsafe_align=0;
  uint64_t __t4536t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t4537t__unsafe_ptr=0;
  uint64_t __t4537t__dat__pos=0;
  uint64_t __t4537t__dat__length=0;
  char __t4537t__dat__first=0;
  char* __t4538t__unsafe_ptr=0;
  uint64_t __t4538t__dat__pos=0;
  uint64_t __t4538t__dat__length=0;
  char __t4538t__dat__first=0;
  char __t4539t=0;
  char* __t4540t____t1465t__unsafe_ptr=0;
  uint64_t __t4540t____t1465t__unsafe_size=0;
  uint32_t __t4540t____t1465t__unsafe_offset=0;
  uint32_t __t4540t____t1465t__unsafe_align=0;
  uint64_t __t4540t____t1466t=0;
  uint64_t __t4542t=0;
  uint64_t __t4543t__=0;
  char* __t4544t__unsafe_ptr=0;
  uint64_t __t4544t__dat__pos=0;
  uint64_t __t4544t__dat__length=0;
  char __t4544t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t4523t__unsafe_ptr,&__t4523t__dat__pos,&__t4523t__dat__length,&__t4523t__dat__first);
  s1__unsafe_ptr=__t4523t__unsafe_ptr;
  s1__dat__pos=__t4523t__dat__pos;
  s1__dat__length=__t4523t__dat__length;
  s1__dat__first=__t4523t__dat__first;
  str__t1904t(_s2,&__t4524t__unsafe_ptr,&__t4524t__dat__pos,&__t4524t__dat__length,&__t4524t__dat__first);
  s2__unsafe_ptr=__t4524t__unsafe_ptr;
  s2__dat__pos=__t4524t__dat__pos;
  s2__dat__length=__t4524t__dat__length;
  s2__dat__first=__t4524t__dat__first;
  not__t51t(__t4525t,&__t4526t__);
  len__t1914t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t4527t__);
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t4528t__);
  add__t188t(__t4527t__,__t4528t__,&__t4529t__);
  len_sums=__t4529t__;
  __t4532t=0;
  prev_pos=__t4532t;
  __t_errcode=alloc__t1837t(&CHARS__unsafe_ptr,len_sums,&__t4533t__buf__unsafe_ptr,&__t4533t__buf__unsafe_size,&__t4533t__buf__unsafe_offset,&__t4533t__buf__unsafe_align,&__t4533t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t4533t__buf__unsafe_ptr,__t4533t__buf__unsafe_size,__t4533t__buf__unsafe_offset,__t4533t__buf__unsafe_align,__t4533t__pos,&__t4534t____t1468t__unsafe_ptr,&__t4534t____t1468t__unsafe_size,&__t4534t____t1468t__unsafe_offset,&__t4534t____t1468t__unsafe_align,&__t4534t____t1469t);
  arena__t1458t(&__t4534t____t1468t__unsafe_ptr,&__t4534t____t1468t__unsafe_size,&__t4534t____t1468t__unsafe_offset,&__t4534t____t1468t__unsafe_align,__t4534t____t1469t,&__t4535t__buf__unsafe_ptr,&__t4535t__buf__unsafe_size,&__t4535t__buf__unsafe_offset,&__t4535t__buf__unsafe_align,&__t4535t__pos);
  __t4536t__buf__unsafe_ptr=__t4535t__buf__unsafe_ptr;
  __t4536t__buf__unsafe_size=__t4535t__buf__unsafe_size;
  __t4536t__buf__unsafe_offset=__t4535t__buf__unsafe_offset;
  __t4536t__buf__unsafe_align=__t4535t__buf__unsafe_align;
  __t4536t__pos=__t4535t__pos;
  surface__buf__unsafe_ptr=__t4536t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t4536t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t4536t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t4536t__buf__unsafe_align;
  surface__pos=__t4536t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t4537t__unsafe_ptr,&__t4537t__dat__pos,&__t4537t__dat__length,&__t4537t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t4538t__unsafe_ptr,&__t4538t__dat__pos,&__t4538t__dat__length,&__t4538t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t4540t____t1465t__unsafe_ptr,&__t4540t____t1465t__unsafe_size,&__t4540t____t1465t__unsafe_offset,&__t4540t____t1465t__unsafe_align,&__t4540t____t1466t);
  __t4542t=0;
  add__t188t(prev_pos,__t4542t,&__t4543t__);
  __t_complain=str__t1900t(__t4540t____t1465t__unsafe_ptr,__t4540t____t1465t__unsafe_size,__t4540t____t1465t__unsafe_offset,__t4540t____t1465t__unsafe_align,__t4540t____t1466t,__t4543t__,&__t4544t__unsafe_ptr,&__t4544t__dat__pos,&__t4544t__dat__length,&__t4544t__dat__first);
  __t4539t=__t_complain;
  if(__t_complain){
  goto __t4539t__label;
  }
  ret__unsafe_ptr=__t4544t__unsafe_ptr;
  ret__dat__pos=__t4544t__dat__pos;
  ret__dat__length=__t4544t__dat__length;
  ret__dat__first=__t4544t__dat__first;
  __t4539t__label:__t4539t=__t4539t==0;
  __t3547t__unsafe_ptr=ret__unsafe_ptr;
  __t3547t__dat__pos=ret__dat__pos;
  __t3547t__dat__length=ret__dat__length;
  __t3547t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4685t=CHARS__unsafe_ptr;
  *__t4686t=__t3547t__unsafe_ptr;
  *__t4687t=__t3547t__dat__pos;
  *__t4688t=__t3547t__dat__length;
  *__t4689t=__t3547t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int greeting__t4494t(char** __t4690t, uint64_t depth, char** __t4691t, uint64_t* __t4692t, uint64_t* __t4693t, char* __t4694t) {
  char* CHARS__unsafe_ptr=*__t4690t;
  char* __t4495t__unsafe_ptr=0;
  uint64_t __t4495t__dat__pos=0;
  uint64_t __t4495t__dat__length=0;
  char __t4495t__dat__first=0;
  uint64_t __t4513t=0;
  char __t4514t__=0;
  char* __t4516t__unsafe_ptr=0;
  uint64_t __t4516t__dat__pos=0;
  uint64_t __t4516t__dat__length=0;
  char __t4516t__dat__first=0;
  uint64_t __t4517t=0;
  uint64_t __t4518t__=0;
  char* __t4519t__unsafe_ptr=0;
  uint64_t __t4519t__dat__pos=0;
  uint64_t __t4519t__dat__length=0;
  char __t4519t__dat__first=0;
  char* __t4521t__unsafe_ptr=0;
  uint64_t __t4521t__dat__pos=0;
  uint64_t __t4521t__dat__length=0;
  char __t4521t__dat__first=0;
  char* __t4522t__unsafe_ptr=0;
  uint64_t __t4522t__dat__pos=0;
  uint64_t __t4522t__dat__length=0;
  char __t4522t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  CHARS__unsafe_ptr=CHARS__unsafe_ptr;
  __t4513t=1;
  le__t350t(depth,__t4513t,&__t4514t__);
  if(__t4514t__){
  str__t1904t(__t4515t,&__t4516t__unsafe_ptr,&__t4516t__dat__pos,&__t4516t__dat__length,&__t4516t__dat__first);
  __t4495t__unsafe_ptr=__t4516t__unsafe_ptr;
  __t4495t__dat__pos=__t4516t__dat__pos;
  __t4495t__dat__length=__t4516t__dat__length;
  __t4495t__dat__first=__t4516t__dat__first;
  goto __t_return;
  }
  __t4517t=1;
  __t_errcode=sub__t402t(depth,__t4517t,&__t4518t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=greeting__t4494t(&CHARS__unsafe_ptr,__t4518t__,&__t4519t__unsafe_ptr,&__t4519t__dat__pos,&__t4519t__dat__length,&__t4519t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3546t(&CHARS__unsafe_ptr,__t4519t__unsafe_ptr,__t4519t__dat__pos,__t4519t__dat__length,__t4519t__dat__first,__t4520t,&__t4521t__unsafe_ptr,&__t4521t__dat__pos,&__t4521t__dat__length,&__t4521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1881t(__t4521t__unsafe_ptr,__t4521t__dat__pos,__t4521t__dat__length,__t4521t__dat__first,&__t4522t__unsafe_ptr,&__t4522t__dat__pos,&__t4522t__dat__length,&__t4522t__dat__first);
  __t4495t__unsafe_ptr=__t4522t__unsafe_ptr;
  __t4495t__dat__pos=__t4522t__dat__pos;
  __t4495t__dat__length=__t4522t__dat__length;
  __t4495t__dat__first=__t4522t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4690t=CHARS__unsafe_ptr;
  *__t4691t=__t4495t__unsafe_ptr;
  *__t4692t=__t4495t__dat__pos;
  *__t4693t=__t4495t__dat__length;
  *__t4694t=__t4495t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t2133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2134t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int main__t4506t() {
  char* __t4507t__unsafe_ptr=0;
  char* __t4508t____t1243t__elements=0;
  uint64_t __t4508t____t1243t__size=0;
  uint64_t __t4508t____t1243t__allocated=0;
  char* __t4508t____t1244t__elements=0;
  uint64_t __t4508t____t1244t__size=0;
  uint64_t __t4508t____t1244t__allocated=0;
  char* __t4508t__contents__elements=0;
  uint64_t __t4508t__contents__size=0;
  uint64_t __t4508t__contents__allocated=0;
  char __t4508t____t1242t=0;
  char* __t4509t__unsafe_ptr=0;
  char* CHARS__unsafe_ptr=0;
  uint64_t __t4510t=0;
  char* __t4511t__unsafe_ptr=0;
  uint64_t __t4511t__dat__pos=0;
  uint64_t __t4511t__dat__length=0;
  char __t4511t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=bucket__t1234t(&__t4507t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4509t__unsafe_ptr=__t4507t__unsafe_ptr;
  CHARS__unsafe_ptr=__t4509t__unsafe_ptr;
  __t4510t=5;
  __t_errcode=greeting__t4494t(&CHARS__unsafe_ptr,__t4510t,&__t4511t__unsafe_ptr,&__t4511t__dat__pos,&__t4511t__dat__length,&__t4511t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t2133t(__t4511t__unsafe_ptr,__t4511t__dat__pos,__t4511t__dat__length,__t4511t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(!__t4507t__unsafe_ptr){
  __t_complain=2;
  goto __t1242t__label;
  }
  else{
  memcpy(&__t4508t____t1243t__elements,__t4507t__unsafe_ptr,8);
  memcpy(&__t4508t____t1243t__size,__t4507t__unsafe_ptr+8,8);
  memcpy(&__t4508t____t1243t__allocated,__t4507t__unsafe_ptr+16,8);
  }
  __t4508t____t1244t__elements=__t4508t____t1243t__elements;
  __t4508t____t1244t__size=__t4508t____t1243t__size;
  __t4508t____t1244t__allocated=__t4508t____t1243t__allocated;
  __t4508t__contents__elements=__t4508t____t1244t__elements;
  __t4508t__contents__size=__t4508t____t1244t__size;
  __t4508t__contents__allocated=__t4508t____t1244t__allocated;
  __t1242t__label:__t4508t____t1242t=__t4508t____t1242t==0;
  if(__t4508t____t1242t){
  unsafe_free__t1219t(&__t4508t__contents__elements,&__t4508t__contents__size,&__t4508t__contents__allocated);
  free__t844t(&__t4507t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t448t();
  __t_errcode=main__t4506t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}