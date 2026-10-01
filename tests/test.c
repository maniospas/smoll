#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t6138t="\nhello world!";
const char* const __t475t="\n";
const char* const __t6133t="hello world!";
static const char* __t_all_errcodes[47] = {"noerr",
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
"user input was not a float",
"user input was not a natural number",
"imbalanced brackets"
};
int add__t3528t(char** __t6321t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6322t, uint64_t* __t6323t, uint64_t* __t6324t, char* __t6325t) ;
int greeting__t6112t(char** __t6326t, uint64_t depth, char** __t6327t, uint64_t* __t6328t, uint64_t* __t6329t, char* __t6330t) ;
static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void bucket_contents____t_buffer____buffer__t1235t(char** __t6181t, uint64_t* __t6182t, uint32_t* __t6183t, uint32_t* __t6184t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t6181t=unsafe_ptr;
  *__t6182t=unsafe_size;
  *__t6183t=unsafe_offset;
  *__t6184t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6185t) {
  int value=0;
  *__t6185t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t6186t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t6186t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t6187t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t6187t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6188t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6188t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t6189t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6189t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t6190t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6190t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6191t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6191t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t6192t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6192t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t6193t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6193t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t6194t) {
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
  *__t6194t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t950t(char** __t6195t, uint64_t* __t6196t, uint32_t* __t6197t, uint32_t* __t6198t, uint64_t size, char** __t6199t, uint64_t* __t6200t, uint32_t* __t6201t, uint32_t* __t6202t) {
  char* buffer__unsafe_ptr=*__t6195t;
  uint64_t buffer__unsafe_size=*__t6196t;
  uint32_t buffer__unsafe_offset=*__t6197t;
  uint32_t buffer__unsafe_align=*__t6198t;
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
  *__t6195t=buffer__unsafe_ptr;
  *__t6196t=buffer__unsafe_size;
  *__t6197t=buffer__unsafe_offset;
  *__t6198t=buffer__unsafe_align;
  *__t6199t=buffer__unsafe_ptr;
  *__t6200t=buffer__unsafe_size;
  *__t6201t=buffer__unsafe_offset;
  *__t6202t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t6203t, uint64_t* __t6204t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t6203t=from;
  *__t6204t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6205t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6205t=z;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t6206t, uint64_t* __t6207t) {
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
  *__t6206t=from;
  *__t6207t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t6208t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6208t=z;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t6209t, uint64_t r__to, uint64_t skipped, uint64_t* __t6210t) {
  uint64_t r__from=*__t6209t;
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
  *__t6209t=r__from;
  *__t6210t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ptr__t0t(char** __t6211t) {
  char* value=0;
  *__t6211t=value;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6212t) {
  *__t6212t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t6213t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t6213t=__t847t__;
}

static inline __attribute__((always_inline)) void dereference_ptr__t848t(char* allocated, char** __t6214t) {
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
  *__t6214t=ret;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t6215t) {
  char* allocated=*__t6215t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t6215t=allocated;
}

static inline __attribute__((always_inline)) void unsafe_free__t1219t(char** __t6216t, uint64_t* __t6217t, uint64_t* __t6218t) {
  char* contents__elements=*__t6216t;
  uint64_t contents__size=*__t6217t;
  uint64_t contents__allocated=*__t6218t;
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
  *__t6216t=contents__elements;
  *__t6217t=contents__size;
  *__t6218t=contents__allocated;
}

int bucket__t1234t(char** __t6219t) {
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
  *__t6219t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void le__t350t(uint64_t x, uint64_t y, char* __t6220t) {
  int __t351t__=0;
  char z=0;
  is_different__t109t(x,y,&__t351t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t6220t=z;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1787t(char** __t6221t, uint64_t* __t6222t, uint32_t* __t6223t, uint32_t* __t6224t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6221t=unsafe_ptr;
  *__t6222t=unsafe_size;
  *__t6223t=unsafe_offset;
  *__t6224t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t6225t) {
  *__t6225t=to;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t6226t) {
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
  *__t6226t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1826t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6227t, uint64_t* __t6228t, uint64_t* __t6229t, char* __t6230t) {
  goto __t_return;
  __t_return:
  *__t6227t=unsafe_ptr;
  *__t6228t=dat__pos;
  *__t6229t=dat__length;
  *__t6230t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1830t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6231t, uint64_t* __t6232t, uint64_t* __t6233t, char* __t6234t) {
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
  *__t6231t=__t1837t__unsafe_ptr;
  *__t6232t=__t1837t__dat__pos;
  *__t6233t=__t1837t__dat__length;
  *__t6234t=__t1837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1864t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t6235t, uint64_t* __t6236t, uint64_t* __t6237t, char* __t6238t) {
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
  __t_errcode=get__t1191t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1868t__);
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
  *__t6235t=__t1870t__unsafe_ptr;
  *__t6236t=__t1870t__dat__pos;
  *__t6237t=__t1870t__dat__length;
  *__t6238t=__t1870t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1886t(const char* c, char** __t6239t, uint64_t* __t6240t, uint64_t* __t6241t, char* __t6242t) {
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
  *__t6239t=ret__unsafe_ptr;
  *__t6240t=ret__dat__pos;
  *__t6241t=ret__dat__length;
  *__t6242t=ret__dat__first;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t6243t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6243t=z;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t6244t) {
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
  *__t6244t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1863t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6245t, uint64_t* __t6246t, uint64_t* __t6247t, char* __t6248t) {
  goto __t_return;
  __t_return:
  *__t6245t=other__unsafe_ptr;
  *__t6246t=other__dat__pos;
  *__t6247t=other__dat__length;
  *__t6248t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t1896t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t6249t) {
  goto __t_return;
  __t_return:
  *__t6249t=s__dat__length;
}

static inline __attribute__((always_inline)) int realloc__t834t(char* allocated, uint64_t bytes, char** __t6250t) {
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
  *__t6250t=__t838t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_alloc__t1248t(char** __t6251t, uint64_t bytes, char** __t6252t) {
  char* allocator__unsafe_ptr=*__t6251t;
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
  *__t6251t=allocator__unsafe_ptr;
  *__t6252t=new_allocation;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1352t(char** __t6253t, char** __t6254t, uint64_t* __t6255t, uint32_t* __t6256t, uint32_t* __t6257t, uint64_t size, char** __t6258t, uint64_t* __t6259t, uint32_t* __t6260t, uint32_t* __t6261t) {
  char* BUCKET__unsafe_ptr=*__t6253t;
  char* buffer__unsafe_ptr=*__t6254t;
  uint64_t buffer__unsafe_size=*__t6255t;
  uint32_t buffer__unsafe_offset=*__t6256t;
  uint32_t buffer__unsafe_align=*__t6257t;
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
  *__t6253t=BUCKET__unsafe_ptr;
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

static inline __attribute__((always_inline)) void allocated__t1202t(char** __t6262t, uint64_t* __t6263t, uint32_t* __t6264t, uint32_t* __t6265t, uint64_t pos, char** __t6266t, uint64_t* __t6267t, uint32_t* __t6268t, uint32_t* __t6269t, uint64_t* __t6270t) {
  char* buf__unsafe_ptr=*__t6262t;
  uint64_t buf__unsafe_size=*__t6263t;
  uint32_t buf__unsafe_offset=*__t6264t;
  uint32_t buf__unsafe_align=*__t6265t;
  goto __t_return;
  __t_return:
  *__t6262t=buf__unsafe_ptr;
  *__t6263t=buf__unsafe_size;
  *__t6264t=buf__unsafe_offset;
  *__t6265t=buf__unsafe_align;
  *__t6266t=buf__unsafe_ptr;
  *__t6267t=buf__unsafe_size;
  *__t6268t=buf__unsafe_offset;
  *__t6269t=buf__unsafe_align;
  *__t6270t=pos;
}

int alloc__t1819t(char** __t6271t, uint64_t length, char** __t6272t, uint64_t* __t6273t, uint32_t* __t6274t, uint32_t* __t6275t, uint64_t* __t6276t) {
  char* CHARS__unsafe_ptr=*__t6271t;
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
  __t_errcode=alloc__t1352t(&CHARS__unsafe_ptr,&__t1820t__unsafe_ptr,&__t1820t__unsafe_size,&__t1820t__unsafe_offset,&__t1820t__unsafe_align,length,&__t1821t__unsafe_ptr,&__t1821t__unsafe_size,&__t1821t__unsafe_offset,&__t1821t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1822t=0;
  allocated__t1202t(&__t1821t__unsafe_ptr,&__t1821t__unsafe_size,&__t1821t__unsafe_offset,&__t1821t__unsafe_align,__t1822t,&__t1823t__buf__unsafe_ptr,&__t1823t__buf__unsafe_size,&__t1823t__buf__unsafe_offset,&__t1823t__buf__unsafe_align,&__t1823t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6271t=CHARS__unsafe_ptr;
  *__t6272t=__t1823t__buf__unsafe_ptr;
  *__t6273t=__t1823t__buf__unsafe_size;
  *__t6274t=__t1823t__buf__unsafe_offset;
  *__t6275t=__t1823t__buf__unsafe_align;
  *__t6276t=__t1823t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1449t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6277t, uint64_t* __t6278t, uint32_t* __t6279t, uint32_t* __t6280t, uint64_t* __t6281t) {
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
  *__t6277t=__t1450t__unsafe_ptr;
  *__t6278t=__t1450t__unsafe_size;
  *__t6279t=__t1450t__unsafe_offset;
  *__t6280t=__t1450t__unsafe_align;
  *__t6281t=__t1451t;
}

static inline __attribute__((always_inline)) void arena__t1440t(char** __t6282t, uint64_t* __t6283t, uint32_t* __t6284t, uint32_t* __t6285t, uint64_t _pos, char** __t6286t, uint64_t* __t6287t, uint32_t* __t6288t, uint32_t* __t6289t, uint64_t* __t6290t) {
  char* buf__unsafe_ptr=*__t6282t;
  uint64_t buf__unsafe_size=*__t6283t;
  uint32_t buf__unsafe_offset=*__t6284t;
  uint32_t buf__unsafe_align=*__t6285t;
  uint64_t __t1441t=0;
  uint64_t pos=0;
  __t1441t=_pos;
  pos=__t1441t;
  goto __t_return;
  __t_return:
  *__t6282t=buf__unsafe_ptr;
  *__t6283t=buf__unsafe_size;
  *__t6284t=buf__unsafe_offset;
  *__t6285t=buf__unsafe_align;
  *__t6286t=buf__unsafe_ptr;
  *__t6287t=buf__unsafe_size;
  *__t6288t=buf__unsafe_offset;
  *__t6289t=buf__unsafe_align;
  *__t6290t=pos;
}

static inline __attribute__((always_inline)) void len__t1199t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t6291t) {
  goto __t_return;
  __t_return:
  *__t6291t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t6292t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6292t=z;
}

static inline __attribute__((always_inline)) int alloc__t1471t(char** __t6293t, uint64_t* __t6294t, uint32_t* __t6295t, uint32_t* __t6296t, uint64_t* __t6297t, uint64_t length, char** __t6298t, uint64_t* __t6299t, uint32_t* __t6300t, uint32_t* __t6301t, uint64_t* __t6302t) {
  char* allocator__buf__unsafe_ptr=*__t6293t;
  uint64_t allocator__buf__unsafe_size=*__t6294t;
  uint32_t allocator__buf__unsafe_offset=*__t6295t;
  uint32_t allocator__buf__unsafe_align=*__t6296t;
  uint64_t allocator__pos=*__t6297t;
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
  len__t1199t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1474t__);
  gt__t326t(next_pos,__t1474t__,&__t1475t__);
  if(__t1475t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1476t=0;
  add__t188t(allocator__pos,__t1476t,&__t1477t__);
  pos=__t1477t__;
  allocator__pos=next_pos;
  allocated__t1202t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1478t__buf__unsafe_ptr,&__t1478t__buf__unsafe_size,&__t1478t__buf__unsafe_offset,&__t1478t__buf__unsafe_align,&__t1478t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6293t=allocator__buf__unsafe_ptr;
  *__t6294t=allocator__buf__unsafe_size;
  *__t6295t=allocator__buf__unsafe_offset;
  *__t6296t=allocator__buf__unsafe_align;
  *__t6297t=allocator__pos;
  *__t6298t=__t1478t__buf__unsafe_ptr;
  *__t6299t=__t1478t__buf__unsafe_size;
  *__t6300t=__t1478t__buf__unsafe_offset;
  *__t6301t=__t1478t__buf__unsafe_align;
  *__t6302t=__t1478t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1967t(char** __t6303t, uint64_t* __t6304t, uint32_t* __t6305t, uint32_t* __t6306t, uint64_t* __t6307t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t6308t, uint64_t* __t6309t, uint64_t* __t6310t, char* __t6311t) {
  char* CHARS__buf__unsafe_ptr=*__t6303t;
  uint64_t CHARS__buf__unsafe_size=*__t6304t;
  uint32_t CHARS__buf__unsafe_offset=*__t6305t;
  uint32_t CHARS__buf__unsafe_align=*__t6306t;
  uint64_t CHARS__pos=*__t6307t;
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
  *__t6303t=CHARS__buf__unsafe_ptr;
  *__t6304t=CHARS__buf__unsafe_size;
  *__t6305t=CHARS__buf__unsafe_offset;
  *__t6306t=CHARS__buf__unsafe_align;
  *__t6307t=CHARS__pos;
  *__t6308t=__t1971t__unsafe_ptr;
  *__t6309t=__t1971t__dat__pos;
  *__t6310t=__t1971t__dat__length;
  *__t6311t=__t1971t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1446t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6312t, uint64_t* __t6313t, uint32_t* __t6314t, uint32_t* __t6315t, uint64_t* __t6316t) {
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
  *__t6312t=__t1447t__unsafe_ptr;
  *__t6313t=__t1447t__unsafe_size;
  *__t6314t=__t1447t__unsafe_offset;
  *__t6315t=__t1447t__unsafe_align;
  *__t6316t=__t1448t;
}

int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t6317t, uint64_t* __t6318t, uint64_t* __t6319t, char* __t6320t) {
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
  *__t6317t=__t1885t__unsafe_ptr;
  *__t6318t=__t1885t__dat__pos;
  *__t6319t=__t1885t__dat__length;
  *__t6320t=__t1885t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3528t(char** __t6321t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6322t, uint64_t* __t6323t, uint64_t* __t6324t, char* __t6325t) {
  char* CHARS__unsafe_ptr=*__t6321t;
  char* __t3529t__unsafe_ptr=0;
  uint64_t __t3529t__dat__pos=0;
  uint64_t __t3529t__dat__length=0;
  char __t3529t__dat__first=0;
  char* __t4087t__unsafe_ptr=0;
  uint64_t __t4087t__dat__pos=0;
  uint64_t __t4087t__dat__length=0;
  char __t4087t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t4088t__unsafe_ptr=0;
  uint64_t __t4088t__dat__pos=0;
  uint64_t __t4088t__dat__length=0;
  char __t4088t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t4089t=0;
  int __t4090t__=0;
  uint64_t __t4091t__=0;
  uint64_t __t4092t__=0;
  uint64_t __t4093t__=0;
  uint64_t len_sums=0;
  int __t4094t=0;
  int __t4095t=0;
  uint64_t __t4096t=0;
  uint64_t prev_pos=0;
  char* __t4097t__buf__unsafe_ptr=0;
  uint64_t __t4097t__buf__unsafe_size=0;
  uint32_t __t4097t__buf__unsafe_offset=0;
  uint32_t __t4097t__buf__unsafe_align=0;
  uint64_t __t4097t__pos=0;
  char* __t4098t____t1450t__unsafe_ptr=0;
  uint64_t __t4098t____t1450t__unsafe_size=0;
  uint32_t __t4098t____t1450t__unsafe_offset=0;
  uint32_t __t4098t____t1450t__unsafe_align=0;
  uint64_t __t4098t____t1451t=0;
  char* __t4099t__buf__unsafe_ptr=0;
  uint64_t __t4099t__buf__unsafe_size=0;
  uint32_t __t4099t__buf__unsafe_offset=0;
  uint32_t __t4099t__buf__unsafe_align=0;
  uint64_t __t4099t__pos=0;
  char* __t4100t__buf__unsafe_ptr=0;
  uint64_t __t4100t__buf__unsafe_size=0;
  uint32_t __t4100t__buf__unsafe_offset=0;
  uint32_t __t4100t__buf__unsafe_align=0;
  uint64_t __t4100t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t4101t__unsafe_ptr=0;
  uint64_t __t4101t__dat__pos=0;
  uint64_t __t4101t__dat__length=0;
  char __t4101t__dat__first=0;
  char* __t4102t__unsafe_ptr=0;
  uint64_t __t4102t__dat__pos=0;
  uint64_t __t4102t__dat__length=0;
  char __t4102t__dat__first=0;
  char __t4103t=0;
  char* __t4104t____t1447t__unsafe_ptr=0;
  uint64_t __t4104t____t1447t__unsafe_size=0;
  uint32_t __t4104t____t1447t__unsafe_offset=0;
  uint32_t __t4104t____t1447t__unsafe_align=0;
  uint64_t __t4104t____t1448t=0;
  uint64_t __t4106t=0;
  uint64_t __t4107t__=0;
  char* __t4108t__unsafe_ptr=0;
  uint64_t __t4108t__dat__pos=0;
  uint64_t __t4108t__dat__length=0;
  char __t4108t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t4087t__unsafe_ptr,&__t4087t__dat__pos,&__t4087t__dat__length,&__t4087t__dat__first);
  s1__unsafe_ptr=__t4087t__unsafe_ptr;
  s1__dat__pos=__t4087t__dat__pos;
  s1__dat__length=__t4087t__dat__length;
  s1__dat__first=__t4087t__dat__first;
  str__t1886t(_s2,&__t4088t__unsafe_ptr,&__t4088t__dat__pos,&__t4088t__dat__length,&__t4088t__dat__first);
  s2__unsafe_ptr=__t4088t__unsafe_ptr;
  s2__dat__pos=__t4088t__dat__pos;
  s2__dat__length=__t4088t__dat__length;
  s2__dat__first=__t4088t__dat__first;
  not__t51t(__t4089t,&__t4090t__);
  len__t1896t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t4091t__);
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t4092t__);
  add__t188t(__t4091t__,__t4092t__,&__t4093t__);
  len_sums=__t4093t__;
  __t4096t=0;
  prev_pos=__t4096t;
  __t_errcode=alloc__t1819t(&CHARS__unsafe_ptr,len_sums,&__t4097t__buf__unsafe_ptr,&__t4097t__buf__unsafe_size,&__t4097t__buf__unsafe_offset,&__t4097t__buf__unsafe_align,&__t4097t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t4097t__buf__unsafe_ptr,__t4097t__buf__unsafe_size,__t4097t__buf__unsafe_offset,__t4097t__buf__unsafe_align,__t4097t__pos,&__t4098t____t1450t__unsafe_ptr,&__t4098t____t1450t__unsafe_size,&__t4098t____t1450t__unsafe_offset,&__t4098t____t1450t__unsafe_align,&__t4098t____t1451t);
  arena__t1440t(&__t4098t____t1450t__unsafe_ptr,&__t4098t____t1450t__unsafe_size,&__t4098t____t1450t__unsafe_offset,&__t4098t____t1450t__unsafe_align,__t4098t____t1451t,&__t4099t__buf__unsafe_ptr,&__t4099t__buf__unsafe_size,&__t4099t__buf__unsafe_offset,&__t4099t__buf__unsafe_align,&__t4099t__pos);
  __t4100t__buf__unsafe_ptr=__t4099t__buf__unsafe_ptr;
  __t4100t__buf__unsafe_size=__t4099t__buf__unsafe_size;
  __t4100t__buf__unsafe_offset=__t4099t__buf__unsafe_offset;
  __t4100t__buf__unsafe_align=__t4099t__buf__unsafe_align;
  __t4100t__pos=__t4099t__pos;
  surface__buf__unsafe_ptr=__t4100t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t4100t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t4100t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t4100t__buf__unsafe_align;
  surface__pos=__t4100t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t4101t__unsafe_ptr,&__t4101t__dat__pos,&__t4101t__dat__length,&__t4101t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t4102t__unsafe_ptr,&__t4102t__dat__pos,&__t4102t__dat__length,&__t4102t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t4104t____t1447t__unsafe_ptr,&__t4104t____t1447t__unsafe_size,&__t4104t____t1447t__unsafe_offset,&__t4104t____t1447t__unsafe_align,&__t4104t____t1448t);
  __t4106t=0;
  add__t188t(prev_pos,__t4106t,&__t4107t__);
  __t_complain=str__t1882t(__t4104t____t1447t__unsafe_ptr,__t4104t____t1447t__unsafe_size,__t4104t____t1447t__unsafe_offset,__t4104t____t1447t__unsafe_align,__t4104t____t1448t,__t4107t__,&__t4108t__unsafe_ptr,&__t4108t__dat__pos,&__t4108t__dat__length,&__t4108t__dat__first);
  __t4103t=__t_complain;
  if(__t_complain){
  goto __t4103t__label;
  }
  ret__unsafe_ptr=__t4108t__unsafe_ptr;
  ret__dat__pos=__t4108t__dat__pos;
  ret__dat__length=__t4108t__dat__length;
  ret__dat__first=__t4108t__dat__first;
  __t4103t__label:__t4103t=__t4103t==0;
  __t3529t__unsafe_ptr=ret__unsafe_ptr;
  __t3529t__dat__pos=ret__dat__pos;
  __t3529t__dat__length=ret__dat__length;
  __t3529t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6321t=CHARS__unsafe_ptr;
  *__t6322t=__t3529t__unsafe_ptr;
  *__t6323t=__t3529t__dat__pos;
  *__t6324t=__t3529t__dat__length;
  *__t6325t=__t3529t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int greeting__t6112t(char** __t6326t, uint64_t depth, char** __t6327t, uint64_t* __t6328t, uint64_t* __t6329t, char* __t6330t) {
  char* CHARS__unsafe_ptr=*__t6326t;
  char* __t6113t__unsafe_ptr=0;
  uint64_t __t6113t__dat__pos=0;
  uint64_t __t6113t__dat__length=0;
  char __t6113t__dat__first=0;
  uint64_t __t6131t=0;
  char __t6132t__=0;
  char* __t6134t__unsafe_ptr=0;
  uint64_t __t6134t__dat__pos=0;
  uint64_t __t6134t__dat__length=0;
  char __t6134t__dat__first=0;
  uint64_t __t6135t=0;
  uint64_t __t6136t__=0;
  char* __t6137t__unsafe_ptr=0;
  uint64_t __t6137t__dat__pos=0;
  uint64_t __t6137t__dat__length=0;
  char __t6137t__dat__first=0;
  char* __t6139t__unsafe_ptr=0;
  uint64_t __t6139t__dat__pos=0;
  uint64_t __t6139t__dat__length=0;
  char __t6139t__dat__first=0;
  char* __t6140t__unsafe_ptr=0;
  uint64_t __t6140t__dat__pos=0;
  uint64_t __t6140t__dat__length=0;
  char __t6140t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  CHARS__unsafe_ptr=CHARS__unsafe_ptr;
  __t6131t=1;
  le__t350t(depth,__t6131t,&__t6132t__);
  if(__t6132t__){
  str__t1886t(__t6133t,&__t6134t__unsafe_ptr,&__t6134t__dat__pos,&__t6134t__dat__length,&__t6134t__dat__first);
  __t6113t__unsafe_ptr=__t6134t__unsafe_ptr;
  __t6113t__dat__pos=__t6134t__dat__pos;
  __t6113t__dat__length=__t6134t__dat__length;
  __t6113t__dat__first=__t6134t__dat__first;
  goto __t_return;
  }
  __t6135t=1;
  __t_errcode=sub__t402t(depth,__t6135t,&__t6136t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=greeting__t6112t(&CHARS__unsafe_ptr,__t6136t__,&__t6137t__unsafe_ptr,&__t6137t__dat__pos,&__t6137t__dat__length,&__t6137t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3528t(&CHARS__unsafe_ptr,__t6137t__unsafe_ptr,__t6137t__dat__pos,__t6137t__dat__length,__t6137t__dat__first,__t6138t,&__t6139t__unsafe_ptr,&__t6139t__dat__pos,&__t6139t__dat__length,&__t6139t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1863t(__t6139t__unsafe_ptr,__t6139t__dat__pos,__t6139t__dat__length,__t6139t__dat__first,&__t6140t__unsafe_ptr,&__t6140t__dat__pos,&__t6140t__dat__length,&__t6140t__dat__first);
  __t6113t__unsafe_ptr=__t6140t__unsafe_ptr;
  __t6113t__dat__pos=__t6140t__dat__pos;
  __t6113t__dat__length=__t6140t__dat__length;
  __t6113t__dat__first=__t6140t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6326t=CHARS__unsafe_ptr;
  *__t6327t=__t6113t__unsafe_ptr;
  *__t6328t=__t6113t__dat__pos;
  *__t6329t=__t6113t__dat__length;
  *__t6330t=__t6113t__dat__first;
  
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

static inline __attribute__((always_inline)) int main__t6124t() {
  char* __t6125t__unsafe_ptr=0;
  char* __t6126t____t1243t__elements=0;
  uint64_t __t6126t____t1243t__size=0;
  uint64_t __t6126t____t1243t__allocated=0;
  char* __t6126t____t1244t__elements=0;
  uint64_t __t6126t____t1244t__size=0;
  uint64_t __t6126t____t1244t__allocated=0;
  char* __t6126t__contents__elements=0;
  uint64_t __t6126t__contents__size=0;
  uint64_t __t6126t__contents__allocated=0;
  char __t6126t____t1242t=0;
  char* __t6127t__unsafe_ptr=0;
  char* CHARS__unsafe_ptr=0;
  uint64_t __t6128t=0;
  char* __t6129t__unsafe_ptr=0;
  uint64_t __t6129t__dat__pos=0;
  uint64_t __t6129t__dat__length=0;
  char __t6129t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=bucket__t1234t(&__t6125t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6127t__unsafe_ptr=__t6125t__unsafe_ptr;
  CHARS__unsafe_ptr=__t6127t__unsafe_ptr;
  __t6128t=5;
  __t_errcode=greeting__t6112t(&CHARS__unsafe_ptr,__t6128t,&__t6129t__unsafe_ptr,&__t6129t__dat__pos,&__t6129t__dat__length,&__t6129t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t2115t(__t6129t__unsafe_ptr,__t6129t__dat__pos,__t6129t__dat__length,__t6129t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(!__t6125t__unsafe_ptr){
  __t_complain=2;
  goto __t1242t__label;
  }
  else{
  memcpy(&__t6126t____t1243t__elements,__t6125t__unsafe_ptr,8);
  memcpy(&__t6126t____t1243t__size,__t6125t__unsafe_ptr+8,8);
  memcpy(&__t6126t____t1243t__allocated,__t6125t__unsafe_ptr+16,8);
  }
  __t6126t____t1244t__elements=__t6126t____t1243t__elements;
  __t6126t____t1244t__size=__t6126t____t1243t__size;
  __t6126t____t1244t__allocated=__t6126t____t1243t__allocated;
  __t6126t__contents__elements=__t6126t____t1244t__elements;
  __t6126t__contents__size=__t6126t____t1244t__size;
  __t6126t__contents__allocated=__t6126t____t1244t__allocated;
  __t1242t__label:__t6126t____t1242t=__t6126t____t1242t==0;
  if(__t6126t____t1242t){
  unsafe_free__t1219t(&__t6126t__contents__elements,&__t6126t__contents__size,&__t6126t__contents__allocated);
  free__t844t(&__t6125t__unsafe_ptr);
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
  __t_errcode=main__t6124t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}