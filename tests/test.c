#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t475t="\n";
const char* const __t3879t="hello world!";
const char* const __t3884t="\nhello world!";
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
int add__t2904t(char** __t4053t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4054t, uint64_t* __t4055t, uint64_t* __t4056t, char* __t4057t) ;
int greeting__t3852t(char** __t4058t, uint64_t depth, char** __t4059t, uint64_t* __t4060t, uint64_t* __t4061t, char* __t4062t) ;
static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void bucket_contents____t_buffer____buffer__t1235t(char** __t3909t, uint64_t* __t3910t, uint32_t* __t3911t, uint32_t* __t3912t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t3909t=unsafe_ptr;
  *__t3910t=unsafe_size;
  *__t3911t=unsafe_offset;
  *__t3912t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3913t) {
  int value=0;
  *__t3913t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t3914t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t3914t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t3915t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t3915t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t3916t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3916t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t3917t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3917t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t3918t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3918t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3919t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3919t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t3920t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3920t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t3921t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3921t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t3922t) {
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
  *__t3922t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t948t(char** __t3923t, uint64_t* __t3924t, uint32_t* __t3925t, uint32_t* __t3926t, uint64_t size, char** __t3927t, uint64_t* __t3928t, uint32_t* __t3929t, uint32_t* __t3930t) {
  char* buffer__unsafe_ptr=*__t3923t;
  uint64_t buffer__unsafe_size=*__t3924t;
  uint32_t buffer__unsafe_offset=*__t3925t;
  uint32_t buffer__unsafe_align=*__t3926t;
  int __t949t=0;
  int __t950t=0;
  char __t951t__=0;
  uint64_t __t952t=0;
  char __t953t__=0;
  char __t954t=0;
  uint64_t __t955t=0;
  uint64_t __t956t__=0;
  uint64_t __t957t__=0;
  int __t959t=0;
  uint64_t __t960t=0;
  char __t961t__=0;
  uint64_t __t962t__=0;
  uint64_t __t963t__=0;
  uint64_t bytes=0;
  int __t964t=0;
  char* __t965t__=0;
  int __t966t=0;
  uint64_t __t967t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t951t__);
  if(__t951t__){
  __t952t=0;
  neq__t158t(size,__t952t,&__t953t__);
  __t954t=__t953t__;
  }
  if(__t954t){
  __t955t=0;
  nat__t724t(buffer__unsafe_align,&__t956t__);
  mul__t212t(__t956t__,size,&__t957t__);
  zero__t845t(buffer__unsafe_ptr,__t955t,__t957t__);
  goto __t_return;
  }
  __t960t=0;
  neq__t158t(buffer__unsafe_size,__t960t,&__t961t__);
  if(__t961t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t962t__);
  mul__t212t(__t962t__,size,&__t963t__);
  bytes=__t963t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t965t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t967t=0;
  zero__t845t(__t965t__,__t967t,bytes);
  buffer__unsafe_ptr=__t965t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3923t=buffer__unsafe_ptr;
  *__t3924t=buffer__unsafe_size;
  *__t3925t=buffer__unsafe_offset;
  *__t3926t=buffer__unsafe_align;
  *__t3927t=buffer__unsafe_ptr;
  *__t3928t=buffer__unsafe_size;
  *__t3929t=buffer__unsafe_offset;
  *__t3930t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t3931t, uint64_t* __t3932t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t3931t=from;
  *__t3932t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3933t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3933t=z;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t3934t, uint64_t* __t3935t) {
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
  *__t3934t=from;
  *__t3935t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t3936t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3936t=z;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t3937t, uint64_t r__to, uint64_t skipped, uint64_t* __t3938t) {
  uint64_t r__from=*__t3937t;
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
  *__t3937t=r__from;
  *__t3938t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ptr__t0t(char** __t3939t) {
  char* value=0;
  *__t3939t=value;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3940t) {
  *__t3940t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t3941t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t3941t=__t847t__;
}

static inline __attribute__((always_inline)) void dereference_ptr__t848t(char* allocated, char** __t3942t) {
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
  *__t3942t=ret;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t3943t) {
  char* allocated=*__t3943t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t3943t=allocated;
}

static inline __attribute__((always_inline)) void unsafe_free__t1219t(char** __t3944t, uint64_t* __t3945t, uint64_t* __t3946t) {
  char* contents__elements=*__t3944t;
  uint64_t contents__size=*__t3945t;
  uint64_t contents__allocated=*__t3946t;
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
  *__t3944t=contents__elements;
  *__t3945t=contents__size;
  *__t3946t=contents__allocated;
}

int bucket__t1234t(char** __t3947t) {
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
  __t_errcode=alloc__t948t(&__t1237t__unsafe_ptr,&__t1237t__unsafe_size,&__t1237t__unsafe_offset,&__t1237t__unsafe_align,__t1238t,&__t1240t__unsafe_ptr,&__t1240t__unsafe_size,&__t1240t__unsafe_offset,&__t1240t__unsafe_align);
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
  *__t3947t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t3868t(char** __t3948t, uint64_t* __t3949t, uint32_t* __t3950t, uint32_t* __t3951t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=25;
  *__t3948t=unsafe_ptr;
  *__t3949t=unsafe_size;
  *__t3950t=unsafe_offset;
  *__t3951t=unsafe_align;
}

static inline __attribute__((always_inline)) void le__t350t(uint64_t x, uint64_t y, char* __t3952t) {
  int __t351t__=0;
  char z=0;
  is_different__t109t(x,y,&__t351t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t3952t=z;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1787t(char** __t3953t, uint64_t* __t3954t, uint32_t* __t3955t, uint32_t* __t3956t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3953t=unsafe_ptr;
  *__t3954t=unsafe_size;
  *__t3955t=unsafe_offset;
  *__t3956t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3957t) {
  *__t3957t=to;
}

static inline __attribute__((always_inline)) int get__t1189t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3958t) {
  int __t1190t=0;
  char __t1191t__=0;
  uint64_t __t1192t__=0;
  uint64_t __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  char* __t1196t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1191t__);
  if(__t1191t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1192t__);
  mul__t212t(i,__t1192t__,&__t1193t__);
  nat__t724t(buffer__unsafe_offset,&__t1194t__);
  add__t188t(__t1193t__,__t1194t__,&__t1195t__);
  add__t846t(buffer__unsafe_ptr,__t1195t__,&__t1196t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3958t=__t1196t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1826t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3959t, uint64_t* __t3960t, uint64_t* __t3961t, char* __t3962t) {
  goto __t_return;
  __t_return:
  *__t3959t=unsafe_ptr;
  *__t3960t=dat__pos;
  *__t3961t=dat__length;
  *__t3962t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1830t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3963t, uint64_t* __t3964t, uint64_t* __t3965t, char* __t3966t) {
  char* unsafe_ptr=0;
  uint64_t __t1831t__=0;
  uint64_t __t1832t=0;
  char __t1833t__=0;
  uint64_t __t1834t__=0;
  uint64_t __t1835t=0;
  char __t1836t__=0;
  char* __t1837t__unsafe_ptr=0;
  uint64_t __t1837t__dat__pos=0;
  uint64_t __t1837t__dat__length=0;
  char __t1837t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1831t__);
  __t1832t=1;
  neq__t158t(__t1831t__,__t1832t,&__t1833t__);
  if(__t1833t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1834t__);
  __t1835t=0;
  neq__t158t(__t1834t__,__t1835t,&__t1836t__);
  if(__t1836t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1826t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1837t__unsafe_ptr,&__t1837t__dat__pos,&__t1837t__dat__length,&__t1837t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3963t=__t1837t__unsafe_ptr;
  *__t3964t=__t1837t__dat__pos;
  *__t3965t=__t1837t__dat__length;
  *__t3966t=__t1837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1864t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3967t, uint64_t* __t3968t, uint64_t* __t3969t, char* __t3970t) {
  uint64_t __t1865t=0;
  char __t1866t__=0;
  char* __t1868t__=0;
  char __t1869t__value=0;
  char first=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__dat__pos=0;
  uint64_t __t1870t__dat__length=0;
  char __t1870t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1865t=0;
  neq__t158t(length,__t1865t,&__t1866t__);
  if(__t1866t__){
  __t_errcode=get__t1189t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1868t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1868t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1869t__value,__t1868t__,1);
  first=__t1869t__value;
  }
  __t_errcode=str__t1830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1870t__unsafe_ptr,&__t1870t__dat__pos,&__t1870t__dat__length,&__t1870t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3967t=__t1870t__unsafe_ptr;
  *__t3968t=__t1870t__dat__pos;
  *__t3969t=__t1870t__dat__length;
  *__t3970t=__t1870t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1886t(const char* c, char** __t3971t, uint64_t* __t3972t, uint64_t* __t3973t, char* __t3974t) {
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__unsafe_size=0;
  uint32_t __t1887t__unsafe_offset=0;
  uint32_t __t1887t__unsafe_align=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__unsafe_size=0;
  uint32_t __t1888t__unsafe_offset=0;
  uint32_t __t1888t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1889t__=0;
  uint64_t length=0;
  uint64_t __t1890t=0;
  uint64_t __t1891t__=0;
  char __t1892t=0;
  uint64_t __t1893t=0;
  char* __t1895t__unsafe_ptr=0;
  uint64_t __t1895t__dat__pos=0;
  uint64_t __t1895t__dat__length=0;
  char __t1895t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1787t(&__t1887t__unsafe_ptr,&__t1887t__unsafe_size,&__t1887t__unsafe_offset,&__t1887t__unsafe_align);
  __t1888t__unsafe_ptr=__t1887t__unsafe_ptr;
  __t1888t__unsafe_size=__t1887t__unsafe_size;
  __t1888t__unsafe_offset=__t1887t__unsafe_offset;
  __t1888t__unsafe_align=__t1887t__unsafe_align;
  buf__unsafe_ptr=__t1888t__unsafe_ptr;
  buf__unsafe_size=__t1888t__unsafe_size;
  buf__unsafe_offset=__t1888t__unsafe_offset;
  buf__unsafe_align=__t1888t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1889t__);
  buf__unsafe_ptr=__t1889t__;
  if(c){
  length=strlen(c);
  }
  __t1890t=1;
  add__t188t(length,__t1890t,&__t1891t__);
  buf__unsafe_size=__t1891t__;
  __t1893t=0;
  __t_complain=str__t1864t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1893t,length,&__t1895t__unsafe_ptr,&__t1895t__dat__pos,&__t1895t__dat__length,&__t1895t__dat__first);
  __t1892t=__t_complain;
  if(__t_complain){
  goto __t1892t__label;
  }
  ret__unsafe_ptr=__t1895t__unsafe_ptr;
  ret__dat__pos=__t1895t__dat__pos;
  ret__dat__length=__t1895t__dat__length;
  ret__dat__first=__t1895t__dat__first;
  __t1892t__label:__t1892t=__t1892t==0;
  goto __t_return;
  __t_return:
  *__t3971t=ret__unsafe_ptr;
  *__t3972t=ret__dat__pos;
  *__t3973t=ret__dat__length;
  *__t3974t=ret__dat__first;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t3975t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3975t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t3976t) {
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
  *__t3976t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1863t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3977t, uint64_t* __t3978t, uint64_t* __t3979t, char* __t3980t) {
  goto __t_return;
  __t_return:
  *__t3977t=other__unsafe_ptr;
  *__t3978t=other__dat__pos;
  *__t3979t=other__dat__length;
  *__t3980t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t1896t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3981t) {
  goto __t_return;
  __t_return:
  *__t3981t=s__dat__length;
}

static inline __attribute__((always_inline)) int realloc__t834t(char* allocated, uint64_t bytes, char** __t3982t) {
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
  *__t3982t=__t838t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_alloc__t1248t(char** __t3983t, uint64_t bytes, char** __t3984t) {
  char* allocator__unsafe_ptr=*__t3983t;
  int __t1249t=0;
  char* __t1250t__elements=0;
  uint64_t __t1250t__size=0;
  uint64_t __t1250t__allocated=0;
  char* __t1251t__elements=0;
  uint64_t __t1251t__size=0;
  uint64_t __t1251t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  uint64_t __t1252t=0;
  uint64_t __t1253t__=0;
  uint64_t prev_size=0;
  uint64_t __t1254t=0;
  uint64_t __t1255t__=0;
  char __t1256t__=0;
  uint64_t __t1257t=0;
  uint64_t __t1258t__=0;
  uint64_t __t1259t=0;
  uint64_t __t1260t__=0;
  char* __t1261t__=0;
  uint64_t __t1264t=0;
  uint64_t __t1265t__=0;
  char* __t1267t__=0;
  char* new_elements=0;
  char* __t1268t__=0;
  uint64_t __t1271t=0;
  uint64_t __t1272t__=0;
  char* __t1273t__=0;
  char* position_ptr=0;
  char* __t1274t__=0;
  char* new_allocation=0;
  char* __t1275t__=0;
  uint64_t __t1278t=0;
  uint64_t ptr_size=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!allocator__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1250t__elements,allocator__unsafe_ptr,8);
  memcpy(&__t1250t__size,allocator__unsafe_ptr+8,8);
  memcpy(&__t1250t__allocated,allocator__unsafe_ptr+16,8);
  __t1251t__elements=__t1250t__elements;
  __t1251t__size=__t1250t__size;
  __t1251t__allocated=__t1250t__allocated;
  contents__elements=__t1251t__elements;
  contents__size=__t1251t__size;
  contents__allocated=__t1251t__allocated;
  __t1252t=0;
  add__t188t(contents__size,__t1252t,&__t1253t__);
  prev_size=__t1253t__;
  __t1254t=1;
  add__t188t(contents__size,__t1254t,&__t1255t__);
  contents__size=__t1255t__;
  ge__t374t(contents__size,contents__allocated,&__t1256t__);
  if(__t1256t__){
  __t1257t=2;
  mul__t212t(contents__allocated,__t1257t,&__t1258t__);
  __t1259t=1;
  add__t188t(__t1258t__,__t1259t,&__t1260t__);
  contents__allocated=__t1260t__;
  ptr__t0t(&__t1261t__);
  __t1264t=8;
  mul__t212t(contents__allocated,__t1264t,&__t1265t__);
  __t_errcode=realloc__t834t(contents__elements,__t1265t__,&__t1267t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_elements=__t1267t__;
  contents__elements=new_elements;
  }
  ptr__t0t(&__t1268t__);
  __t1271t=8;
  mul__t212t(prev_size,__t1271t,&__t1272t__);
  add__t846t(contents__elements,__t1272t__,&__t1273t__);
  position_ptr=__t1273t__;
  __t_errcode=alloc__t828t(bytes,&__t1274t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_allocation=__t1274t__;
  ptr__t0t(&__t1275t__);
  __t1278t=8;
  ptr_size=__t1278t;
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
  *__t3983t=allocator__unsafe_ptr;
  *__t3984t=new_allocation;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1352t(char** __t3985t, uint64_t* __t3986t, uint32_t* __t3987t, uint32_t* __t3988t, char** __t3989t, uint64_t size, char** __t3990t, uint64_t* __t3991t, uint32_t* __t3992t, uint32_t* __t3993t) {
  char* buffer__unsafe_ptr=*__t3985t;
  uint64_t buffer__unsafe_size=*__t3986t;
  uint32_t buffer__unsafe_offset=*__t3987t;
  uint32_t buffer__unsafe_align=*__t3988t;
  char* BUCKET__unsafe_ptr=*__t3989t;
  int __t1353t=0;
  char __t1354t__=0;
  uint64_t __t1355t=0;
  char __t1356t__=0;
  char __t1357t=0;
  uint64_t __t1358t=0;
  uint64_t __t1359t__=0;
  uint64_t __t1360t__=0;
  int __t1362t=0;
  uint64_t __t1363t=0;
  char __t1364t__=0;
  uint64_t __t1365t__=0;
  uint64_t __t1366t__=0;
  uint64_t bytes=0;
  int __t1367t=0;
  uint64_t __t1368t=0;
  char __t1369t__=0;
  char* __t1370t__=0;
  int __t1371t=0;
  uint64_t __t1372t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t1354t__);
  if(__t1354t__){
  __t1355t=0;
  neq__t158t(size,__t1355t,&__t1356t__);
  __t1357t=__t1356t__;
  }
  if(__t1357t){
  __t1358t=0;
  nat__t724t(buffer__unsafe_align,&__t1359t__);
  mul__t212t(__t1359t__,size,&__t1360t__);
  zero__t845t(buffer__unsafe_ptr,__t1358t,__t1360t__);
  goto __t_return;
  }
  __t1363t=0;
  neq__t158t(buffer__unsafe_size,__t1363t,&__t1364t__);
  if(__t1364t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1365t__);
  mul__t212t(__t1365t__,size,&__t1366t__);
  bytes=__t1366t__;
  __t1368t=0;
  eq__t134t(bytes,__t1368t,&__t1369t__);
  if(__t1369t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=unsafe_alloc__t1248t(&BUCKET__unsafe_ptr,bytes,&__t1370t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1372t=0;
  zero__t845t(__t1370t__,__t1372t,bytes);
  buffer__unsafe_ptr=__t1370t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3985t=buffer__unsafe_ptr;
  *__t3986t=buffer__unsafe_size;
  *__t3987t=buffer__unsafe_offset;
  *__t3988t=buffer__unsafe_align;
  *__t3989t=BUCKET__unsafe_ptr;
  *__t3990t=buffer__unsafe_ptr;
  *__t3991t=buffer__unsafe_size;
  *__t3992t=buffer__unsafe_offset;
  *__t3993t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1200t(char** __t3994t, uint64_t* __t3995t, uint32_t* __t3996t, uint32_t* __t3997t, uint64_t pos, char** __t3998t, uint64_t* __t3999t, uint32_t* __t4000t, uint32_t* __t4001t, uint64_t* __t4002t) {
  char* buf__unsafe_ptr=*__t3994t;
  uint64_t buf__unsafe_size=*__t3995t;
  uint32_t buf__unsafe_offset=*__t3996t;
  uint32_t buf__unsafe_align=*__t3997t;
  goto __t_return;
  __t_return:
  *__t3994t=buf__unsafe_ptr;
  *__t3995t=buf__unsafe_size;
  *__t3996t=buf__unsafe_offset;
  *__t3997t=buf__unsafe_align;
  *__t3998t=buf__unsafe_ptr;
  *__t3999t=buf__unsafe_size;
  *__t4000t=buf__unsafe_offset;
  *__t4001t=buf__unsafe_align;
  *__t4002t=pos;
}

int alloc__t1819t(char** __t4003t, uint64_t length, char** __t4004t, uint64_t* __t4005t, uint32_t* __t4006t, uint32_t* __t4007t, uint64_t* __t4008t) {
  char* CHARS__unsafe_ptr=*__t4003t;
  char* __t1820t__unsafe_ptr=0;
  uint64_t __t1820t__unsafe_size=0;
  uint32_t __t1820t__unsafe_offset=0;
  uint32_t __t1820t__unsafe_align=0;
  char* __t1821t__unsafe_ptr=0;
  uint64_t __t1821t__unsafe_size=0;
  uint32_t __t1821t__unsafe_offset=0;
  uint32_t __t1821t__unsafe_align=0;
  uint64_t __t1822t=0;
  char* __t1823t__buf__unsafe_ptr=0;
  uint64_t __t1823t__buf__unsafe_size=0;
  uint32_t __t1823t__buf__unsafe_offset=0;
  uint32_t __t1823t__buf__unsafe_align=0;
  uint64_t __t1823t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1787t(&__t1820t__unsafe_ptr,&__t1820t__unsafe_size,&__t1820t__unsafe_offset,&__t1820t__unsafe_align);
  __t_errcode=alloc__t1352t(&__t1820t__unsafe_ptr,&__t1820t__unsafe_size,&__t1820t__unsafe_offset,&__t1820t__unsafe_align,&CHARS__unsafe_ptr,length,&__t1821t__unsafe_ptr,&__t1821t__unsafe_size,&__t1821t__unsafe_offset,&__t1821t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1822t=0;
  allocated__t1200t(&__t1821t__unsafe_ptr,&__t1821t__unsafe_size,&__t1821t__unsafe_offset,&__t1821t__unsafe_align,__t1822t,&__t1823t__buf__unsafe_ptr,&__t1823t__buf__unsafe_size,&__t1823t__buf__unsafe_offset,&__t1823t__buf__unsafe_align,&__t1823t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4003t=CHARS__unsafe_ptr;
  *__t4004t=__t1823t__buf__unsafe_ptr;
  *__t4005t=__t1823t__buf__unsafe_size;
  *__t4006t=__t1823t__buf__unsafe_offset;
  *__t4007t=__t1823t__buf__unsafe_align;
  *__t4008t=__t1823t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1449t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4009t, uint64_t* __t4010t, uint32_t* __t4011t, uint32_t* __t4012t, uint64_t* __t4013t) {
  char* __t1450t__unsafe_ptr=0;
  uint64_t __t1450t__unsafe_size=0;
  uint32_t __t1450t__unsafe_offset=0;
  uint32_t __t1450t__unsafe_align=0;
  uint64_t __t1451t=0;
  __t1450t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1450t__unsafe_size=self__buf__unsafe_size;
  __t1450t__unsafe_offset=self__buf__unsafe_offset;
  __t1450t__unsafe_align=self__buf__unsafe_align;
  __t1451t=self__pos;
  goto __t_return;
  __t_return:
  *__t4009t=__t1450t__unsafe_ptr;
  *__t4010t=__t1450t__unsafe_size;
  *__t4011t=__t1450t__unsafe_offset;
  *__t4012t=__t1450t__unsafe_align;
  *__t4013t=__t1451t;
}

static inline __attribute__((always_inline)) void arena__t1440t(char** __t4014t, uint64_t* __t4015t, uint32_t* __t4016t, uint32_t* __t4017t, uint64_t _pos, char** __t4018t, uint64_t* __t4019t, uint32_t* __t4020t, uint32_t* __t4021t, uint64_t* __t4022t) {
  char* buf__unsafe_ptr=*__t4014t;
  uint64_t buf__unsafe_size=*__t4015t;
  uint32_t buf__unsafe_offset=*__t4016t;
  uint32_t buf__unsafe_align=*__t4017t;
  uint64_t __t1441t=0;
  uint64_t pos=0;
  __t1441t=_pos;
  pos=__t1441t;
  goto __t_return;
  __t_return:
  *__t4014t=buf__unsafe_ptr;
  *__t4015t=buf__unsafe_size;
  *__t4016t=buf__unsafe_offset;
  *__t4017t=buf__unsafe_align;
  *__t4018t=buf__unsafe_ptr;
  *__t4019t=buf__unsafe_size;
  *__t4020t=buf__unsafe_offset;
  *__t4021t=buf__unsafe_align;
  *__t4022t=pos;
}

static inline __attribute__((always_inline)) void len__t1197t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4023t) {
  goto __t_return;
  __t_return:
  *__t4023t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t4024t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4024t=z;
}

static inline __attribute__((always_inline)) int alloc__t1471t(char** __t4025t, uint64_t* __t4026t, uint32_t* __t4027t, uint32_t* __t4028t, uint64_t* __t4029t, uint64_t length, char** __t4030t, uint64_t* __t4031t, uint32_t* __t4032t, uint32_t* __t4033t, uint64_t* __t4034t) {
  char* allocator__buf__unsafe_ptr=*__t4025t;
  uint64_t allocator__buf__unsafe_size=*__t4026t;
  uint32_t allocator__buf__unsafe_offset=*__t4027t;
  uint32_t allocator__buf__unsafe_align=*__t4028t;
  uint64_t allocator__pos=*__t4029t;
  int __t1472t=0;
  uint64_t __t1473t__=0;
  uint64_t next_pos=0;
  uint64_t __t1474t__=0;
  char __t1475t__=0;
  uint64_t __t1476t=0;
  uint64_t __t1477t__=0;
  uint64_t pos=0;
  char* __t1478t__buf__unsafe_ptr=0;
  uint64_t __t1478t__buf__unsafe_size=0;
  uint32_t __t1478t__buf__unsafe_offset=0;
  uint32_t __t1478t__buf__unsafe_align=0;
  uint64_t __t1478t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1473t__);
  next_pos=__t1473t__;
  len__t1197t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1474t__);
  gt__t326t(next_pos,__t1474t__,&__t1475t__);
  if(__t1475t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1476t=0;
  add__t188t(allocator__pos,__t1476t,&__t1477t__);
  pos=__t1477t__;
  allocator__pos=next_pos;
  allocated__t1200t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1478t__buf__unsafe_ptr,&__t1478t__buf__unsafe_size,&__t1478t__buf__unsafe_offset,&__t1478t__buf__unsafe_align,&__t1478t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4025t=allocator__buf__unsafe_ptr;
  *__t4026t=allocator__buf__unsafe_size;
  *__t4027t=allocator__buf__unsafe_offset;
  *__t4028t=allocator__buf__unsafe_align;
  *__t4029t=allocator__pos;
  *__t4030t=__t1478t__buf__unsafe_ptr;
  *__t4031t=__t1478t__buf__unsafe_size;
  *__t4032t=__t1478t__buf__unsafe_offset;
  *__t4033t=__t1478t__buf__unsafe_align;
  *__t4034t=__t1478t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1967t(char** __t4035t, uint64_t* __t4036t, uint32_t* __t4037t, uint32_t* __t4038t, uint64_t* __t4039t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t4040t, uint64_t* __t4041t, uint64_t* __t4042t, char* __t4043t) {
  char* CHARS__buf__unsafe_ptr=*__t4035t;
  uint64_t CHARS__buf__unsafe_size=*__t4036t;
  uint32_t CHARS__buf__unsafe_offset=*__t4037t;
  uint32_t CHARS__buf__unsafe_align=*__t4038t;
  uint64_t CHARS__pos=*__t4039t;
  char* __t1968t__unsafe_ptr=0;
  uint64_t __t1968t__dat__pos=0;
  uint64_t __t1968t__dat__length=0;
  char __t1968t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1969t__buf__unsafe_ptr=0;
  uint64_t __t1969t__buf__unsafe_size=0;
  uint32_t __t1969t__buf__unsafe_offset=0;
  uint32_t __t1969t__buf__unsafe_align=0;
  uint64_t __t1969t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1970t=0;
  char* __t1971t__unsafe_ptr=0;
  uint64_t __t1971t__dat__pos=0;
  uint64_t __t1971t__dat__length=0;
  char __t1971t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1968t__unsafe_ptr,&__t1968t__dat__pos,&__t1968t__dat__length,&__t1968t__dat__first);
  other__unsafe_ptr=__t1968t__unsafe_ptr;
  other__dat__pos=__t1968t__dat__pos;
  other__dat__length=__t1968t__dat__length;
  other__dat__first=__t1968t__dat__first;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1969t__buf__unsafe_ptr,&__t1969t__buf__unsafe_size,&__t1969t__buf__unsafe_offset,&__t1969t__buf__unsafe_align,&__t1969t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1969t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1969t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1969t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1969t__buf__unsafe_align;
  surface__pos=__t1969t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1830t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1971t__unsafe_ptr,&__t1971t__dat__pos,&__t1971t__dat__length,&__t1971t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4035t=CHARS__buf__unsafe_ptr;
  *__t4036t=CHARS__buf__unsafe_size;
  *__t4037t=CHARS__buf__unsafe_offset;
  *__t4038t=CHARS__buf__unsafe_align;
  *__t4039t=CHARS__pos;
  *__t4040t=__t1971t__unsafe_ptr;
  *__t4041t=__t1971t__dat__pos;
  *__t4042t=__t1971t__dat__length;
  *__t4043t=__t1971t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1446t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4044t, uint64_t* __t4045t, uint32_t* __t4046t, uint32_t* __t4047t, uint64_t* __t4048t) {
  char* __t1447t__unsafe_ptr=0;
  uint64_t __t1447t__unsafe_size=0;
  uint32_t __t1447t__unsafe_offset=0;
  uint32_t __t1447t__unsafe_align=0;
  uint64_t __t1448t=0;
  __t1447t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1447t__unsafe_size=self__buf__unsafe_size;
  __t1447t__unsafe_offset=self__buf__unsafe_offset;
  __t1447t__unsafe_align=self__buf__unsafe_align;
  __t1448t=self__pos;
  goto __t_return;
  __t_return:
  *__t4044t=__t1447t__unsafe_ptr;
  *__t4045t=__t1447t__unsafe_size;
  *__t4046t=__t1447t__unsafe_offset;
  *__t4047t=__t1447t__unsafe_align;
  *__t4048t=__t1448t;
}

int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t4049t, uint64_t* __t4050t, uint64_t* __t4051t, char* __t4052t) {
  uint64_t __t1884t__=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1884t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1864t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1884t__,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4049t=__t1885t__unsafe_ptr;
  *__t4050t=__t1885t__dat__pos;
  *__t4051t=__t1885t__dat__length;
  *__t4052t=__t1885t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2904t(char** __t4053t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4054t, uint64_t* __t4055t, uint64_t* __t4056t, char* __t4057t) {
  char* CHARS__unsafe_ptr=*__t4053t;
  char* __t2905t__unsafe_ptr=0;
  uint64_t __t2905t__dat__pos=0;
  uint64_t __t2905t__dat__length=0;
  char __t2905t__dat__first=0;
  char* __t3887t__unsafe_ptr=0;
  uint64_t __t3887t__dat__pos=0;
  uint64_t __t3887t__dat__length=0;
  char __t3887t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3888t__unsafe_ptr=0;
  uint64_t __t3888t__dat__pos=0;
  uint64_t __t3888t__dat__length=0;
  char __t3888t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t3889t=0;
  int __t3890t__=0;
  uint64_t __t3891t__=0;
  uint64_t __t3892t__=0;
  uint64_t __t3893t__=0;
  uint64_t len_sums=0;
  int __t3894t=0;
  int __t3895t=0;
  uint64_t __t3896t=0;
  uint64_t prev_pos=0;
  char* __t3897t__buf__unsafe_ptr=0;
  uint64_t __t3897t__buf__unsafe_size=0;
  uint32_t __t3897t__buf__unsafe_offset=0;
  uint32_t __t3897t__buf__unsafe_align=0;
  uint64_t __t3897t__pos=0;
  char* __t3898t____t1450t__unsafe_ptr=0;
  uint64_t __t3898t____t1450t__unsafe_size=0;
  uint32_t __t3898t____t1450t__unsafe_offset=0;
  uint32_t __t3898t____t1450t__unsafe_align=0;
  uint64_t __t3898t____t1451t=0;
  char* __t3899t__buf__unsafe_ptr=0;
  uint64_t __t3899t__buf__unsafe_size=0;
  uint32_t __t3899t__buf__unsafe_offset=0;
  uint32_t __t3899t__buf__unsafe_align=0;
  uint64_t __t3899t__pos=0;
  char* __t3900t__buf__unsafe_ptr=0;
  uint64_t __t3900t__buf__unsafe_size=0;
  uint32_t __t3900t__buf__unsafe_offset=0;
  uint32_t __t3900t__buf__unsafe_align=0;
  uint64_t __t3900t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3901t__unsafe_ptr=0;
  uint64_t __t3901t__dat__pos=0;
  uint64_t __t3901t__dat__length=0;
  char __t3901t__dat__first=0;
  char* __t3902t__unsafe_ptr=0;
  uint64_t __t3902t__dat__pos=0;
  uint64_t __t3902t__dat__length=0;
  char __t3902t__dat__first=0;
  char __t3903t=0;
  char* __t3904t____t1447t__unsafe_ptr=0;
  uint64_t __t3904t____t1447t__unsafe_size=0;
  uint32_t __t3904t____t1447t__unsafe_offset=0;
  uint32_t __t3904t____t1447t__unsafe_align=0;
  uint64_t __t3904t____t1448t=0;
  uint64_t __t3906t=0;
  uint64_t __t3907t__=0;
  char* __t3908t__unsafe_ptr=0;
  uint64_t __t3908t__dat__pos=0;
  uint64_t __t3908t__dat__length=0;
  char __t3908t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t3887t__unsafe_ptr,&__t3887t__dat__pos,&__t3887t__dat__length,&__t3887t__dat__first);
  s1__unsafe_ptr=__t3887t__unsafe_ptr;
  s1__dat__pos=__t3887t__dat__pos;
  s1__dat__length=__t3887t__dat__length;
  s1__dat__first=__t3887t__dat__first;
  str__t1886t(_s2,&__t3888t__unsafe_ptr,&__t3888t__dat__pos,&__t3888t__dat__length,&__t3888t__dat__first);
  s2__unsafe_ptr=__t3888t__unsafe_ptr;
  s2__dat__pos=__t3888t__dat__pos;
  s2__dat__length=__t3888t__dat__length;
  s2__dat__first=__t3888t__dat__first;
  not__t51t(__t3889t,&__t3890t__);
  len__t1896t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3891t__);
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3892t__);
  add__t188t(__t3891t__,__t3892t__,&__t3893t__);
  len_sums=__t3893t__;
  __t3896t=0;
  prev_pos=__t3896t;
  __t_errcode=alloc__t1819t(&CHARS__unsafe_ptr,len_sums,&__t3897t__buf__unsafe_ptr,&__t3897t__buf__unsafe_size,&__t3897t__buf__unsafe_offset,&__t3897t__buf__unsafe_align,&__t3897t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t3897t__buf__unsafe_ptr,__t3897t__buf__unsafe_size,__t3897t__buf__unsafe_offset,__t3897t__buf__unsafe_align,__t3897t__pos,&__t3898t____t1450t__unsafe_ptr,&__t3898t____t1450t__unsafe_size,&__t3898t____t1450t__unsafe_offset,&__t3898t____t1450t__unsafe_align,&__t3898t____t1451t);
  arena__t1440t(&__t3898t____t1450t__unsafe_ptr,&__t3898t____t1450t__unsafe_size,&__t3898t____t1450t__unsafe_offset,&__t3898t____t1450t__unsafe_align,__t3898t____t1451t,&__t3899t__buf__unsafe_ptr,&__t3899t__buf__unsafe_size,&__t3899t__buf__unsafe_offset,&__t3899t__buf__unsafe_align,&__t3899t__pos);
  __t3900t__buf__unsafe_ptr=__t3899t__buf__unsafe_ptr;
  __t3900t__buf__unsafe_size=__t3899t__buf__unsafe_size;
  __t3900t__buf__unsafe_offset=__t3899t__buf__unsafe_offset;
  __t3900t__buf__unsafe_align=__t3899t__buf__unsafe_align;
  __t3900t__pos=__t3899t__pos;
  surface__buf__unsafe_ptr=__t3900t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3900t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3900t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3900t__buf__unsafe_align;
  surface__pos=__t3900t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3901t__unsafe_ptr,&__t3901t__dat__pos,&__t3901t__dat__length,&__t3901t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3902t__unsafe_ptr,&__t3902t__dat__pos,&__t3902t__dat__length,&__t3902t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3904t____t1447t__unsafe_ptr,&__t3904t____t1447t__unsafe_size,&__t3904t____t1447t__unsafe_offset,&__t3904t____t1447t__unsafe_align,&__t3904t____t1448t);
  __t3906t=0;
  add__t188t(prev_pos,__t3906t,&__t3907t__);
  __t_complain=str__t1882t(__t3904t____t1447t__unsafe_ptr,__t3904t____t1447t__unsafe_size,__t3904t____t1447t__unsafe_offset,__t3904t____t1447t__unsafe_align,__t3904t____t1448t,__t3907t__,&__t3908t__unsafe_ptr,&__t3908t__dat__pos,&__t3908t__dat__length,&__t3908t__dat__first);
  __t3903t=__t_complain;
  if(__t_complain){
  goto __t3903t__label;
  }
  ret__unsafe_ptr=__t3908t__unsafe_ptr;
  ret__dat__pos=__t3908t__dat__pos;
  ret__dat__length=__t3908t__dat__length;
  ret__dat__first=__t3908t__dat__first;
  __t3903t__label:__t3903t=__t3903t==0;
  __t2905t__unsafe_ptr=ret__unsafe_ptr;
  __t2905t__dat__pos=ret__dat__pos;
  __t2905t__dat__length=ret__dat__length;
  __t2905t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4053t=CHARS__unsafe_ptr;
  *__t4054t=__t2905t__unsafe_ptr;
  *__t4055t=__t2905t__dat__pos;
  *__t4056t=__t2905t__dat__length;
  *__t4057t=__t2905t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int greeting__t3852t(char** __t4058t, uint64_t depth, char** __t4059t, uint64_t* __t4060t, uint64_t* __t4061t, char* __t4062t) {
  char* CHARS__unsafe_ptr=*__t4058t;
  char* __t3853t__unsafe_ptr=0;
  uint64_t __t3853t__dat__pos=0;
  uint64_t __t3853t__dat__length=0;
  char __t3853t__dat__first=0;
  uint64_t __t3877t=0;
  char __t3878t__=0;
  char* __t3880t__unsafe_ptr=0;
  uint64_t __t3880t__dat__pos=0;
  uint64_t __t3880t__dat__length=0;
  char __t3880t__dat__first=0;
  uint64_t __t3881t=0;
  uint64_t __t3882t__=0;
  char* __t3883t__unsafe_ptr=0;
  uint64_t __t3883t__dat__pos=0;
  uint64_t __t3883t__dat__length=0;
  char __t3883t__dat__first=0;
  char* __t3885t__unsafe_ptr=0;
  uint64_t __t3885t__dat__pos=0;
  uint64_t __t3885t__dat__length=0;
  char __t3885t__dat__first=0;
  char* __t3886t__unsafe_ptr=0;
  uint64_t __t3886t__dat__pos=0;
  uint64_t __t3886t__dat__length=0;
  char __t3886t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  CHARS__unsafe_ptr=CHARS__unsafe_ptr;
  __t3877t=1;
  le__t350t(depth,__t3877t,&__t3878t__);
  if(__t3878t__){
  str__t1886t(__t3879t,&__t3880t__unsafe_ptr,&__t3880t__dat__pos,&__t3880t__dat__length,&__t3880t__dat__first);
  __t3853t__unsafe_ptr=__t3880t__unsafe_ptr;
  __t3853t__dat__pos=__t3880t__dat__pos;
  __t3853t__dat__length=__t3880t__dat__length;
  __t3853t__dat__first=__t3880t__dat__first;
  goto __t_return;
  }
  __t3881t=1;
  __t_errcode=sub__t402t(depth,__t3881t,&__t3882t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=greeting__t3852t(&CHARS__unsafe_ptr,__t3882t__,&__t3883t__unsafe_ptr,&__t3883t__dat__pos,&__t3883t__dat__length,&__t3883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2904t(&CHARS__unsafe_ptr,__t3883t__unsafe_ptr,__t3883t__dat__pos,__t3883t__dat__length,__t3883t__dat__first,__t3884t,&__t3885t__unsafe_ptr,&__t3885t__dat__pos,&__t3885t__dat__length,&__t3885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1863t(__t3885t__unsafe_ptr,__t3885t__dat__pos,__t3885t__dat__length,__t3885t__dat__first,&__t3886t__unsafe_ptr,&__t3886t__dat__pos,&__t3886t__dat__length,&__t3886t__dat__first);
  __t3853t__unsafe_ptr=__t3886t__unsafe_ptr;
  __t3853t__dat__pos=__t3886t__dat__pos;
  __t3853t__dat__length=__t3886t__dat__length;
  __t3853t__dat__first=__t3886t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4058t=CHARS__unsafe_ptr;
  *__t4059t=__t3853t__unsafe_ptr;
  *__t4060t=__t3853t__dat__pos;
  *__t4061t=__t3853t__dat__length;
  *__t4062t=__t3853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t2115t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2116t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int alloc__t1099t(char** __t4063t, uint64_t* __t4064t, uint32_t* __t4065t, uint32_t* __t4066t, char** __t4067t, uint64_t* __t4068t, uint32_t* __t4069t, uint32_t* __t4070t) {
  char* buffer__unsafe_ptr=*__t4063t;
  uint64_t buffer__unsafe_size=*__t4064t;
  uint32_t buffer__unsafe_offset=*__t4065t;
  uint32_t buffer__unsafe_align=*__t4066t;
  int __t1100t=0;
  uint64_t __t1101t=0;
  uint64_t size=0;
  int __t1102t=0;
  char __t1104t__=0;
  uint64_t __t1105t=0;
  char __t1106t__=0;
  char __t1107t=0;
  uint64_t __t1108t=0;
  uint64_t __t1109t__=0;
  uint64_t __t1110t__=0;
  int __t1112t=0;
  uint64_t __t1113t=0;
  char __t1114t__=0;
  uint64_t __t1115t__=0;
  uint64_t __t1116t__=0;
  uint64_t bytes=0;
  int __t1117t=0;
  uint64_t __t1118t=0;
  char __t1119t__=0;
  char* __t1120t__=0;
  int __t1121t=0;
  uint64_t __t1122t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1101t=1;
  size=__t1101t;
  eq__t134t(buffer__unsafe_size,size,&__t1104t__);
  if(__t1104t__){
  __t1105t=0;
  neq__t158t(size,__t1105t,&__t1106t__);
  __t1107t=__t1106t__;
  }
  if(__t1107t){
  __t1108t=0;
  nat__t724t(buffer__unsafe_align,&__t1109t__);
  mul__t212t(__t1109t__,size,&__t1110t__);
  zero__t845t(buffer__unsafe_ptr,__t1108t,__t1110t__);
  goto __t_return;
  }
  __t1113t=0;
  neq__t158t(buffer__unsafe_size,__t1113t,&__t1114t__);
  if(__t1114t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1115t__);
  mul__t212t(__t1115t__,size,&__t1116t__);
  bytes=__t1116t__;
  __t1118t=0;
  eq__t134t(bytes,__t1118t,&__t1119t__);
  if(__t1119t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t1120t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1122t=0;
  zero__t845t(__t1120t__,__t1122t,bytes);
  buffer__unsafe_ptr=__t1120t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4063t=buffer__unsafe_ptr;
  *__t4064t=buffer__unsafe_size;
  *__t4065t=buffer__unsafe_offset;
  *__t4066t=buffer__unsafe_align;
  *__t4067t=buffer__unsafe_ptr;
  *__t4068t=buffer__unsafe_size;
  *__t4069t=buffer__unsafe_offset;
  *__t4070t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t3864t() {
  char* __t3865t__unsafe_ptr=0;
  char* __t3866t____t1243t__elements=0;
  uint64_t __t3866t____t1243t__size=0;
  uint64_t __t3866t____t1243t__allocated=0;
  char* __t3866t____t1244t__elements=0;
  uint64_t __t3866t____t1244t__size=0;
  uint64_t __t3866t____t1244t__allocated=0;
  char* __t3866t__contents__elements=0;
  uint64_t __t3866t__contents__size=0;
  uint64_t __t3866t__contents__allocated=0;
  char __t3866t____t1242t=0;
  char* __t3867t__unsafe_ptr=0;
  char* CHARS__unsafe_ptr=0;
  char* __t3870t__unsafe_ptr=0;
  uint64_t __t3870t__unsafe_size=0;
  uint32_t __t3870t__unsafe_offset=0;
  uint32_t __t3870t__unsafe_align=0;
  uint64_t __t3871t=0;
  char* __t3872t__unsafe_ptr=0;
  uint64_t __t3872t__dat__pos=0;
  uint64_t __t3872t__dat__length=0;
  char __t3872t__dat__first=0;
  char* __t3874t__unsafe_ptr=0;
  uint64_t __t3874t__unsafe_size=0;
  uint32_t __t3874t__unsafe_offset=0;
  uint32_t __t3874t__unsafe_align=0;
  char* __t3876t__unsafe_ptr=0;
  uint64_t __t3876t__unsafe_size=0;
  uint32_t __t3876t__unsafe_offset=0;
  uint32_t __t3876t__unsafe_align=0;
  char* strs__unsafe_ptr=0;
  uint64_t strs__unsafe_size=0;
  uint32_t strs__unsafe_offset=0;
  uint32_t strs__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=bucket__t1234t(&__t3865t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3867t__unsafe_ptr=__t3865t__unsafe_ptr;
  CHARS__unsafe_ptr=__t3867t__unsafe_ptr;
  str____t_buffer____buffer__t3868t(&__t3870t__unsafe_ptr,&__t3870t__unsafe_size,&__t3870t__unsafe_offset,&__t3870t__unsafe_align);
  __t3871t=5;
  __t_errcode=greeting__t3852t(&CHARS__unsafe_ptr,__t3871t,&__t3872t__unsafe_ptr,&__t3872t__dat__pos,&__t3872t__dat__length,&__t3872t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t2115t(__t3872t__unsafe_ptr,__t3872t__dat__pos,__t3872t__dat__length,__t3872t__dat__first);
  __t_errcode=alloc__t1099t(&__t3870t__unsafe_ptr,&__t3870t__unsafe_size,&__t3870t__unsafe_offset,&__t3870t__unsafe_align,&__t3874t__unsafe_ptr,&__t3874t__unsafe_size,&__t3874t__unsafe_offset,&__t3874t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3876t__unsafe_ptr=__t3874t__unsafe_ptr;
  __t3876t__unsafe_size=__t3874t__unsafe_size;
  __t3876t__unsafe_offset=__t3874t__unsafe_offset;
  __t3876t__unsafe_align=__t3874t__unsafe_align;
  strs__unsafe_ptr=__t3876t__unsafe_ptr;
  strs__unsafe_size=__t3876t__unsafe_size;
  strs__unsafe_offset=__t3876t__unsafe_offset;
  strs__unsafe_align=__t3876t__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:free__t844t(&__t3874t__unsafe_ptr);
  if(!__t3865t__unsafe_ptr){
  __t_complain=2;
  goto __t1242t__label;
  }
  else{
  memcpy(&__t3866t____t1243t__elements,__t3865t__unsafe_ptr,8);
  memcpy(&__t3866t____t1243t__size,__t3865t__unsafe_ptr+8,8);
  memcpy(&__t3866t____t1243t__allocated,__t3865t__unsafe_ptr+16,8);
  }
  __t3866t____t1244t__elements=__t3866t____t1243t__elements;
  __t3866t____t1244t__size=__t3866t____t1243t__size;
  __t3866t____t1244t__allocated=__t3866t____t1243t__allocated;
  __t3866t__contents__elements=__t3866t____t1244t__elements;
  __t3866t__contents__size=__t3866t____t1244t__size;
  __t3866t__contents__allocated=__t3866t____t1244t__allocated;
  __t1242t__label:__t3866t____t1242t=__t3866t____t1242t==0;
  if(__t3866t____t1242t){
  unsafe_free__t1219t(&__t3866t__contents__elements,&__t3866t__contents__size,&__t3866t__contents__allocated);
  free__t844t(&__t3865t__unsafe_ptr);
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
  __t_errcode=main__t3864t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}