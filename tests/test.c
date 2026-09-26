#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5173t="hello";
const char* const __t1820t="Used ";
const char* const __t463t="";
const char* const __t1830t=" allocated bytes (";
const char* const __t5174t=" ";
const char* const __t1839t="%)";
const char* const __t1825t=" of ";
const char* const __t5176t="world!";
const char* const __t475t="\n";
static const char* __t_all_errcodes[46] = {"noerr",
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
"does not fit in circular arena",
"arena is out of space",
"linkedmem allocation multiple must be at least 1",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
"user input was not a float",
"user input was not a natural number",
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

static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t5165t(char** __t5180t, uint64_t* __t5181t, uint32_t* __t5182t, uint32_t* __t5183t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5180t=unsafe_ptr;
  *__t5181t=unsafe_size;
  *__t5182t=unsafe_offset;
  *__t5183t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5184t) {
  int value=0;
  *__t5184t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5185t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5185t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5186t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5186t=__t111t__;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5187t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5187t=z;
}

static inline __attribute__((always_inline)) void bucket_contents____t_buffer____buffer__t1235t(char** __t5188t, uint64_t* __t5189t, uint32_t* __t5190t, uint32_t* __t5191t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t5188t=unsafe_ptr;
  *__t5189t=unsafe_size;
  *__t5190t=unsafe_offset;
  *__t5191t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5192t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5192t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5193t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5193t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5194t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5194t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5195t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5195t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t5196t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5196t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5197t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5197t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t5198t) {
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
  *__t5198t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t948t(char** __t5199t, uint64_t* __t5200t, uint32_t* __t5201t, uint32_t* __t5202t, uint64_t size, char** __t5203t, uint64_t* __t5204t, uint32_t* __t5205t, uint32_t* __t5206t) {
  char* buffer__unsafe_ptr=*__t5199t;
  uint64_t buffer__unsafe_size=*__t5200t;
  uint32_t buffer__unsafe_offset=*__t5201t;
  uint32_t buffer__unsafe_align=*__t5202t;
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
  *__t5199t=buffer__unsafe_ptr;
  *__t5200t=buffer__unsafe_size;
  *__t5201t=buffer__unsafe_offset;
  *__t5202t=buffer__unsafe_align;
  *__t5203t=buffer__unsafe_ptr;
  *__t5204t=buffer__unsafe_size;
  *__t5205t=buffer__unsafe_offset;
  *__t5206t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t5207t, uint64_t* __t5208t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t5207t=from;
  *__t5208t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5209t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5209t=z;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t5210t, uint64_t* __t5211t) {
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
  *__t5210t=from;
  *__t5211t=to;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5212t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5212t=z;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t5213t, uint64_t r__to, uint64_t skipped, uint64_t* __t5214t) {
  uint64_t r__from=*__t5213t;
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
  *__t5213t=r__from;
  *__t5214t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ptr__t0t(char** __t5215t) {
  char* value=0;
  *__t5215t=value;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5216t) {
  *__t5216t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5217t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5217t=__t847t__;
}

static inline __attribute__((always_inline)) void dereference_ptr__t848t(char* allocated, char** __t5218t) {
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
  *__t5218t=ret;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t5219t) {
  char* allocated=*__t5219t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5219t=allocated;
}

static inline __attribute__((always_inline)) void unsafe_free__t1219t(char** __t5220t, uint64_t* __t5221t, uint64_t* __t5222t) {
  char* contents__elements=*__t5220t;
  uint64_t contents__size=*__t5221t;
  uint64_t contents__allocated=*__t5222t;
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
  *__t5220t=contents__elements;
  *__t5221t=contents__size;
  *__t5222t=contents__allocated;
}

static inline __attribute__((always_inline)) int bucket__t1234t(char** __t5223t) {
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
  char* __t1242t__elements=0;
  uint64_t __t1242t__size=0;
  uint64_t __t1242t__allocated=0;
  char* __t1243t__elements=0;
  uint64_t __t1243t__size=0;
  uint64_t __t1243t__allocated=0;
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
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1242t__elements,unsafe_ptr,8);
  memcpy(&__t1242t__size,unsafe_ptr+8,8);
  memcpy(&__t1242t__allocated,unsafe_ptr+16,8);
  __t1243t__elements=__t1242t__elements;
  __t1243t__size=__t1242t__size;
  __t1243t__allocated=__t1242t__allocated;
  contents__elements=__t1243t__elements;
  contents__size=__t1243t__size;
  contents__allocated=__t1243t__allocated;
  unsafe_free__t1219t(&contents__elements,&contents__size,&contents__allocated);
  free__t844t(&unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5223t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1573t(char** __t5224t, uint64_t* __t5225t, uint32_t* __t5226t, uint32_t* __t5227t, uint64_t _pos, char** __t5228t, uint64_t* __t5229t, uint32_t* __t5230t, uint32_t* __t5231t, uint64_t* __t5232t) {
  char* buf__unsafe_ptr=*__t5224t;
  uint64_t buf__unsafe_size=*__t5225t;
  uint32_t buf__unsafe_offset=*__t5226t;
  uint32_t buf__unsafe_align=*__t5227t;
  uint64_t __t1574t=0;
  uint64_t pos=0;
  __t1574t=_pos;
  pos=__t1574t;
  goto __t_return;
  __t_return:
  *__t5224t=buf__unsafe_ptr;
  *__t5225t=buf__unsafe_size;
  *__t5226t=buf__unsafe_offset;
  *__t5227t=buf__unsafe_align;
  *__t5228t=buf__unsafe_ptr;
  *__t5229t=buf__unsafe_size;
  *__t5230t=buf__unsafe_offset;
  *__t5231t=buf__unsafe_align;
  *__t5232t=pos;
}

static inline __attribute__((always_inline)) void arena__t1576t(char** __t5233t, uint64_t* __t5234t, uint32_t* __t5235t, uint32_t* __t5236t, char** __t5237t, uint64_t* __t5238t, uint32_t* __t5239t, uint32_t* __t5240t, uint64_t* __t5241t) {
  char* buf__unsafe_ptr=*__t5233t;
  uint64_t buf__unsafe_size=*__t5234t;
  uint32_t buf__unsafe_offset=*__t5235t;
  uint32_t buf__unsafe_align=*__t5236t;
  uint64_t __t1577t=0;
  char* __t1578t__buf__unsafe_ptr=0;
  uint64_t __t1578t__buf__unsafe_size=0;
  uint32_t __t1578t__buf__unsafe_offset=0;
  uint32_t __t1578t__buf__unsafe_align=0;
  uint64_t __t1578t__pos=0;
  __t1577t=0;
  arena__t1573t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1577t,&__t1578t__buf__unsafe_ptr,&__t1578t__buf__unsafe_size,&__t1578t__buf__unsafe_offset,&__t1578t__buf__unsafe_align,&__t1578t__pos);
  goto __t_return;
  __t_return:
  *__t5233t=buf__unsafe_ptr;
  *__t5234t=buf__unsafe_size;
  *__t5235t=buf__unsafe_offset;
  *__t5236t=buf__unsafe_align;
  *__t5237t=__t1578t__buf__unsafe_ptr;
  *__t5238t=__t1578t__buf__unsafe_size;
  *__t5239t=__t1578t__buf__unsafe_offset;
  *__t5240t=__t1578t__buf__unsafe_align;
  *__t5241t=__t1578t__pos;
}

int linkedmem__t1638t(char** __t5242t, uint64_t* __t5243t, uint32_t* __t5244t, uint32_t* __t5245t, uint64_t multiple, char** __t5246t, uint64_t* __t5247t, uint32_t* __t5248t, uint32_t* __t5249t, uint64_t* __t5250t, char** __t5251t, uint64_t* __t5252t) {
  char* buf__unsafe_ptr=*__t5242t;
  uint64_t buf__unsafe_size=*__t5243t;
  uint32_t buf__unsafe_offset=*__t5244t;
  uint32_t buf__unsafe_align=*__t5245t;
  uint64_t __t1639t=0;
  char __t1640t__=0;
  char* __t1641t__unsafe_ptr=0;
  char* __t1642t____t1242t__elements=0;
  uint64_t __t1642t____t1242t__size=0;
  uint64_t __t1642t____t1242t__allocated=0;
  char* __t1642t____t1243t__elements=0;
  uint64_t __t1642t____t1243t__size=0;
  uint64_t __t1642t____t1243t__allocated=0;
  char* __t1642t__contents__elements=0;
  uint64_t __t1642t__contents__size=0;
  uint64_t __t1642t__contents__allocated=0;
  char* __t1643t__unsafe_ptr=0;
  char* BUFFERS__unsafe_ptr=0;
  char* __t1644t__buf__unsafe_ptr=0;
  uint64_t __t1644t__buf__unsafe_size=0;
  uint32_t __t1644t__buf__unsafe_offset=0;
  uint32_t __t1644t__buf__unsafe_align=0;
  uint64_t __t1644t__pos=0;
  char* __t1645t__buf__unsafe_ptr=0;
  uint64_t __t1645t__buf__unsafe_size=0;
  uint32_t __t1645t__buf__unsafe_offset=0;
  uint32_t __t1645t__buf__unsafe_align=0;
  uint64_t __t1645t__pos=0;
  char* unsafe_current__buf__unsafe_ptr=0;
  uint64_t unsafe_current__buf__unsafe_size=0;
  uint32_t unsafe_current__buf__unsafe_offset=0;
  uint32_t unsafe_current__buf__unsafe_align=0;
  uint64_t unsafe_current__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1639t=1;
  lt__t302t(multiple,__t1639t,&__t1640t__);
  if(__t1640t__){
  __t_errcode=25;
  goto __t_failure;
  }
  __t_errcode=bucket__t1234t(&__t1641t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1643t__unsafe_ptr=__t1641t__unsafe_ptr;
  BUFFERS__unsafe_ptr=__t1643t__unsafe_ptr;
  arena__t1576t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1644t__buf__unsafe_ptr,&__t1644t__buf__unsafe_size,&__t1644t__buf__unsafe_offset,&__t1644t__buf__unsafe_align,&__t1644t__pos);
  __t1645t__buf__unsafe_ptr=__t1644t__buf__unsafe_ptr;
  __t1645t__buf__unsafe_size=__t1644t__buf__unsafe_size;
  __t1645t__buf__unsafe_offset=__t1644t__buf__unsafe_offset;
  __t1645t__buf__unsafe_align=__t1644t__buf__unsafe_align;
  __t1645t__pos=__t1644t__pos;
  unsafe_current__buf__unsafe_ptr=__t1645t__buf__unsafe_ptr;
  unsafe_current__buf__unsafe_size=__t1645t__buf__unsafe_size;
  unsafe_current__buf__unsafe_offset=__t1645t__buf__unsafe_offset;
  unsafe_current__buf__unsafe_align=__t1645t__buf__unsafe_align;
  unsafe_current__pos=__t1645t__pos;
  goto __t_return;
  
  __t_failure:if(!BUFFERS__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1642t____t1242t__elements,BUFFERS__unsafe_ptr,8);
  memcpy(&__t1642t____t1242t__size,BUFFERS__unsafe_ptr+8,8);
  memcpy(&__t1642t____t1242t__allocated,BUFFERS__unsafe_ptr+16,8);
  __t1642t____t1243t__elements=__t1642t____t1242t__elements;
  __t1642t____t1243t__size=__t1642t____t1242t__size;
  __t1642t____t1243t__allocated=__t1642t____t1242t__allocated;
  __t1642t__contents__elements=__t1642t____t1243t__elements;
  __t1642t__contents__size=__t1642t____t1243t__size;
  __t1642t__contents__allocated=__t1642t____t1243t__allocated;
  unsafe_free__t1219t(&__t1642t__contents__elements,&__t1642t__contents__size,&__t1642t__contents__allocated);
  free__t844t(&BUFFERS__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5242t=buf__unsafe_ptr;
  *__t5243t=buf__unsafe_size;
  *__t5244t=buf__unsafe_offset;
  *__t5245t=buf__unsafe_align;
  *__t5246t=unsafe_current__buf__unsafe_ptr;
  *__t5247t=unsafe_current__buf__unsafe_size;
  *__t5248t=unsafe_current__buf__unsafe_offset;
  *__t5249t=unsafe_current__buf__unsafe_align;
  *__t5250t=unsafe_current__pos;
  *__t5251t=BUFFERS__unsafe_ptr;
  *__t5252t=multiple;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void consumption__t1630t(uint64_t* __t5253t, uint64_t* __t5254t) {
  uint64_t __t1631t=0;
  uint64_t __t1632t=0;
  uint64_t used=0;
  uint64_t __t1633t=0;
  uint64_t __t1634t=0;
  uint64_t total=0;
  __t1631t=0;
  __t1632t=__t1631t;
  used=__t1632t;
  __t1633t=0;
  __t1634t=__t1633t;
  total=__t1634t;
  goto __t_return;
  __t_return:
  *__t5253t=used;
  *__t5254t=total;
}

static inline __attribute__((always_inline)) int linkedmem__t1809t(char** __t5255t, uint64_t* __t5256t, uint32_t* __t5257t, uint32_t* __t5258t, uint64_t multiple, char** __t5259t, uint64_t* __t5260t, uint32_t* __t5261t, uint32_t* __t5262t, uint64_t* __t5263t, char** __t5264t, uint64_t* __t5265t, uint64_t* __t5266t, uint64_t* __t5267t) {
  char* buf__unsafe_ptr=*__t5255t;
  uint64_t buf__unsafe_size=*__t5256t;
  uint32_t buf__unsafe_offset=*__t5257t;
  uint32_t buf__unsafe_align=*__t5258t;
  int __t1810t=0;
  char* __t1811t__unsafe_current__buf__unsafe_ptr=0;
  uint64_t __t1811t__unsafe_current__buf__unsafe_size=0;
  uint32_t __t1811t__unsafe_current__buf__unsafe_offset=0;
  uint32_t __t1811t__unsafe_current__buf__unsafe_align=0;
  uint64_t __t1811t__unsafe_current__pos=0;
  char* __t1811t__BUFFERS__unsafe_ptr=0;
  uint64_t __t1811t__multiple=0;
  char* __t1812t____t1642t____t1242t__elements=0;
  uint64_t __t1812t____t1642t____t1242t__size=0;
  uint64_t __t1812t____t1642t____t1242t__allocated=0;
  char* __t1812t____t1642t____t1243t__elements=0;
  uint64_t __t1812t____t1642t____t1243t__size=0;
  uint64_t __t1812t____t1642t____t1243t__allocated=0;
  char* __t1812t____t1642t__contents__elements=0;
  uint64_t __t1812t____t1642t__contents__size=0;
  uint64_t __t1812t____t1642t__contents__allocated=0;
  uint64_t __t1813t__used=0;
  uint64_t __t1813t__total=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=linkedmem__t1638t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,multiple,&__t1811t__unsafe_current__buf__unsafe_ptr,&__t1811t__unsafe_current__buf__unsafe_size,&__t1811t__unsafe_current__buf__unsafe_offset,&__t1811t__unsafe_current__buf__unsafe_align,&__t1811t__unsafe_current__pos,&__t1811t__BUFFERS__unsafe_ptr,&__t1811t__multiple);
  if(__t_errcode){
  goto __t_failure;
  }
  consumption__t1630t(&__t1813t__used,&__t1813t__total);
  goto __t_return;
  
  __t_failure:if(!__t1811t__BUFFERS__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1812t____t1642t____t1242t__elements,__t1811t__BUFFERS__unsafe_ptr,8);
  memcpy(&__t1812t____t1642t____t1242t__size,__t1811t__BUFFERS__unsafe_ptr+8,8);
  memcpy(&__t1812t____t1642t____t1242t__allocated,__t1811t__BUFFERS__unsafe_ptr+16,8);
  __t1812t____t1642t____t1243t__elements=__t1812t____t1642t____t1242t__elements;
  __t1812t____t1642t____t1243t__size=__t1812t____t1642t____t1242t__size;
  __t1812t____t1642t____t1243t__allocated=__t1812t____t1642t____t1242t__allocated;
  __t1812t____t1642t__contents__elements=__t1812t____t1642t____t1243t__elements;
  __t1812t____t1642t__contents__size=__t1812t____t1642t____t1243t__size;
  __t1812t____t1642t__contents__allocated=__t1812t____t1642t____t1243t__allocated;
  unsafe_free__t1219t(&__t1812t____t1642t__contents__elements,&__t1812t____t1642t__contents__size,&__t1812t____t1642t__contents__allocated);
  free__t844t(&__t1811t__BUFFERS__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5255t=buf__unsafe_ptr;
  *__t5256t=buf__unsafe_size;
  *__t5257t=buf__unsafe_offset;
  *__t5258t=buf__unsafe_align;
  *__t5259t=__t1811t__unsafe_current__buf__unsafe_ptr;
  *__t5260t=__t1811t__unsafe_current__buf__unsafe_size;
  *__t5261t=__t1811t__unsafe_current__buf__unsafe_offset;
  *__t5262t=__t1811t__unsafe_current__buf__unsafe_align;
  *__t5263t=__t1811t__unsafe_current__pos;
  *__t5264t=__t1811t__BUFFERS__unsafe_ptr;
  *__t5265t=__t1811t__multiple;
  *__t5266t=__t1813t__used;
  *__t5267t=__t1813t__total;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1882t(char** __t5268t, uint64_t* __t5269t, uint32_t* __t5270t, uint32_t* __t5271t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5268t=unsafe_ptr;
  *__t5269t=unsafe_size;
  *__t5270t=unsafe_offset;
  *__t5271t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5272t) {
  *__t5272t=to;
}

static inline __attribute__((always_inline)) int get__t1189t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5273t) {
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
  *__t5273t=__t1196t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1923t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5274t, uint64_t* __t5275t, uint64_t* __t5276t, char* __t5277t) {
  goto __t_return;
  __t_return:
  *__t5274t=unsafe_ptr;
  *__t5275t=dat__pos;
  *__t5276t=dat__length;
  *__t5277t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1927t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5278t, uint64_t* __t5279t, uint64_t* __t5280t, char* __t5281t) {
  char* unsafe_ptr=0;
  uint64_t __t1928t__=0;
  uint64_t __t1929t=0;
  char __t1930t__=0;
  uint64_t __t1931t__=0;
  uint64_t __t1932t=0;
  char __t1933t__=0;
  char* __t1934t__unsafe_ptr=0;
  uint64_t __t1934t__dat__pos=0;
  uint64_t __t1934t__dat__length=0;
  char __t1934t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1928t__);
  __t1929t=1;
  neq__t158t(__t1928t__,__t1929t,&__t1930t__);
  if(__t1930t__){
  __t_errcode=26;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1931t__);
  __t1932t=0;
  neq__t158t(__t1931t__,__t1932t,&__t1933t__);
  if(__t1933t__){
  __t_errcode=27;
  goto __t_failure;
  }
  str__t1923t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1934t__unsafe_ptr,&__t1934t__dat__pos,&__t1934t__dat__length,&__t1934t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5278t=__t1934t__unsafe_ptr;
  *__t5279t=__t1934t__dat__pos;
  *__t5280t=__t1934t__dat__length;
  *__t5281t=__t1934t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1961t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5282t, uint64_t* __t5283t, uint64_t* __t5284t, char* __t5285t) {
  uint64_t __t1962t=0;
  char __t1963t__=0;
  char* __t1965t__=0;
  char __t1966t__value=0;
  char first=0;
  char* __t1967t__unsafe_ptr=0;
  uint64_t __t1967t__dat__pos=0;
  uint64_t __t1967t__dat__length=0;
  char __t1967t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1962t=0;
  neq__t158t(length,__t1962t,&__t1963t__);
  if(__t1963t__){
  __t_errcode=get__t1189t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1965t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1965t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1966t__value,__t1965t__,1);
  first=__t1966t__value;
  }
  __t_errcode=str__t1927t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1967t__unsafe_ptr,&__t1967t__dat__pos,&__t1967t__dat__length,&__t1967t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5282t=__t1967t__unsafe_ptr;
  *__t5283t=__t1967t__dat__pos;
  *__t5284t=__t1967t__dat__length;
  *__t5285t=__t1967t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1983t(const char* c, char** __t5286t, uint64_t* __t5287t, uint64_t* __t5288t, char* __t5289t) {
  char* __t1984t__unsafe_ptr=0;
  uint64_t __t1984t__unsafe_size=0;
  uint32_t __t1984t__unsafe_offset=0;
  uint32_t __t1984t__unsafe_align=0;
  char* __t1985t__unsafe_ptr=0;
  uint64_t __t1985t__unsafe_size=0;
  uint32_t __t1985t__unsafe_offset=0;
  uint32_t __t1985t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1986t__=0;
  uint64_t length=0;
  uint64_t __t1987t=0;
  uint64_t __t1988t__=0;
  char __t1989t=0;
  uint64_t __t1990t=0;
  char* __t1992t__unsafe_ptr=0;
  uint64_t __t1992t__dat__pos=0;
  uint64_t __t1992t__dat__length=0;
  char __t1992t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1882t(&__t1984t__unsafe_ptr,&__t1984t__unsafe_size,&__t1984t__unsafe_offset,&__t1984t__unsafe_align);
  __t1985t__unsafe_ptr=__t1984t__unsafe_ptr;
  __t1985t__unsafe_size=__t1984t__unsafe_size;
  __t1985t__unsafe_offset=__t1984t__unsafe_offset;
  __t1985t__unsafe_align=__t1984t__unsafe_align;
  buf__unsafe_ptr=__t1985t__unsafe_ptr;
  buf__unsafe_size=__t1985t__unsafe_size;
  buf__unsafe_offset=__t1985t__unsafe_offset;
  buf__unsafe_align=__t1985t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1986t__);
  buf__unsafe_ptr=__t1986t__;
  if(c){
  length=strlen(c);
  }
  __t1987t=1;
  add__t188t(length,__t1987t,&__t1988t__);
  buf__unsafe_size=__t1988t__;
  __t1990t=0;
  __t_complain=str__t1961t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1990t,length,&__t1992t__unsafe_ptr,&__t1992t__dat__pos,&__t1992t__dat__length,&__t1992t__dat__first);
  __t1989t=__t_complain;
  if(__t_complain){
  goto __t1989t__label;
  }
  ret__unsafe_ptr=__t1992t__unsafe_ptr;
  ret__dat__pos=__t1992t__dat__pos;
  ret__dat__length=__t1992t__dat__length;
  ret__dat__first=__t1992t__dat__first;
  __t1989t__label:__t1989t=__t1989t==0;
  goto __t_return;
  __t_return:
  *__t5286t=ret__unsafe_ptr;
  *__t5287t=ret__dat__pos;
  *__t5288t=ret__dat__length;
  *__t5289t=ret__dat__first;
}

static inline __attribute__((always_inline)) void len__t1993t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5290t) {
  goto __t_return;
  __t_return:
  *__t5290t=s__dat__length;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5291t) {
  int value=0;
  *__t5291t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5292t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5292t=__t54t__;
}

static inline __attribute__((always_inline)) void len__t1197t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5293t) {
  goto __t_return;
  __t_return:
  *__t5293t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void le__t350t(uint64_t x, uint64_t y, char* __t5294t) {
  int __t351t__=0;
  char z=0;
  is_different__t109t(x,y,&__t351t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t5294t=z;
}

static inline __attribute__((always_inline)) int realloc__t834t(char* allocated, uint64_t bytes, char** __t5295t) {
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
  *__t5295t=__t838t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5296t) {
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
  *__t5296t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t5297t) {
  int __t271t__=0;
  int __t272t=0;
  uint64_t zero=0;
  char __t273t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t271t__);
  zero=0;
  eq__t134t(y,zero,&__t273t__);
  if(__t273t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5297t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5298t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5298t=z;
}

static inline __attribute__((always_inline)) int nat32__t718t(uint64_t x, uint32_t* __t5299t) {
  uint64_t __t719t=0;
  char __t720t__=0;
  uint32_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t719t=4294967295;
  gt__t326t(x,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=11;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5299t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

int ensure_arena__t1704t(char** __t5300t, uint64_t* __t5301t, uint32_t* __t5302t, uint32_t* __t5303t, uint64_t* __t5304t, char** __t5305t, uint64_t linkedmem__multiple, uint64_t* __t5306t, uint64_t* __t5307t, uint64_t minimum_capacity, char** __t5308t, uint64_t* __t5309t, uint32_t* __t5310t, uint32_t* __t5311t, uint64_t* __t5312t) {
  char* linkedmem__unsafe_current__buf__unsafe_ptr=*__t5300t;
  uint64_t linkedmem__unsafe_current__buf__unsafe_size=*__t5301t;
  uint32_t linkedmem__unsafe_current__buf__unsafe_offset=*__t5302t;
  uint32_t linkedmem__unsafe_current__buf__unsafe_align=*__t5303t;
  uint64_t linkedmem__unsafe_current__pos=*__t5304t;
  char* linkedmem__BUFFERS__unsafe_ptr=*__t5305t;
  uint64_t consumption__used=*__t5306t;
  uint64_t consumption__total=*__t5307t;
  int __t1705t=0;
  int __t1706t__=0;
  uint64_t __t1707t__=0;
  uint64_t __t1708t__=0;
  char __t1709t__=0;
  uint64_t __t1710t=0;
  char __t1711t__=0;
  char* __t1712t__elements=0;
  uint64_t __t1712t__size=0;
  uint64_t __t1712t__allocated=0;
  char* __t1713t__elements=0;
  uint64_t __t1713t__size=0;
  uint64_t __t1713t__allocated=0;
  char* contents__elements=0;
  uint64_t contents__size=0;
  uint64_t contents__allocated=0;
  uint64_t __t1714t=0;
  uint64_t __t1715t__=0;
  uint64_t prev_size=0;
  uint64_t __t1716t=0;
  uint64_t __t1717t__=0;
  char __t1718t__=0;
  uint64_t __t1719t=0;
  uint64_t __t1720t__=0;
  uint64_t __t1721t=0;
  uint64_t __t1722t__=0;
  char* __t1723t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  char* __t1729t__=0;
  char* new_elements=0;
  char* __t1730t__=0;
  uint64_t __t1733t=0;
  uint64_t __t1734t__=0;
  char* __t1735t__=0;
  char* position_ptr=0;
  char* old_allocation=0;
  char* __t1736t__=0;
  uint64_t __t1739t=0;
  uint64_t ptr_size=0;
  uint64_t multiple=0;
  uint64_t __t1740t__=0;
  uint64_t __t1741t=0;
  uint64_t __t1742t__=0;
  uint64_t __t1743t__=0;
  uint64_t __t1744t__=0;
  uint64_t capacity=0;
  char* __t1745t__unsafe_ptr=0;
  uint64_t __t1745t__unsafe_size=0;
  uint32_t __t1745t__unsafe_offset=0;
  uint32_t __t1745t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  uint64_t __t1746t=0;
  uint32_t __t1747t__=0;
  uint64_t __t1748t__=0;
  uint64_t __t1749t__=0;
  char* __t1750t__=0;
  char* __t1751t__buf__unsafe_ptr=0;
  uint64_t __t1751t__buf__unsafe_size=0;
  uint32_t __t1751t__buf__unsafe_offset=0;
  uint32_t __t1751t__buf__unsafe_align=0;
  uint64_t __t1751t__pos=0;
  char* __t1752t__buf__unsafe_ptr=0;
  uint64_t __t1752t__buf__unsafe_size=0;
  uint32_t __t1752t__buf__unsafe_offset=0;
  uint32_t __t1752t__buf__unsafe_align=0;
  uint64_t __t1752t__pos=0;
  int __t1753t=0;
  int __t1754t__=0;
  uint64_t __t1755t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t53t(__t1705t,&__t1706t__);
  add__t188t(linkedmem__unsafe_current__pos,minimum_capacity,&__t1707t__);
  len__t1197t(linkedmem__unsafe_current__buf__unsafe_ptr,linkedmem__unsafe_current__buf__unsafe_size,linkedmem__unsafe_current__buf__unsafe_offset,linkedmem__unsafe_current__buf__unsafe_align,&__t1708t__);
  le__t350t(__t1707t__,__t1708t__,&__t1709t__);
  if(__t1709t__){
  goto __t_return;
  }
  __t1710t=0;
  neq__t158t(linkedmem__unsafe_current__buf__unsafe_size,__t1710t,&__t1711t__);
  if(__t1711t__){
  if(!linkedmem__BUFFERS__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1712t__elements,linkedmem__BUFFERS__unsafe_ptr,8);
  memcpy(&__t1712t__size,linkedmem__BUFFERS__unsafe_ptr+8,8);
  memcpy(&__t1712t__allocated,linkedmem__BUFFERS__unsafe_ptr+16,8);
  __t1713t__elements=__t1712t__elements;
  __t1713t__size=__t1712t__size;
  __t1713t__allocated=__t1712t__allocated;
  contents__elements=__t1713t__elements;
  contents__size=__t1713t__size;
  contents__allocated=__t1713t__allocated;
  __t1714t=0;
  add__t188t(contents__size,__t1714t,&__t1715t__);
  prev_size=__t1715t__;
  __t1716t=1;
  add__t188t(contents__size,__t1716t,&__t1717t__);
  contents__size=__t1717t__;
  ge__t374t(contents__size,contents__allocated,&__t1718t__);
  if(__t1718t__){
  __t1719t=2;
  mul__t212t(contents__allocated,__t1719t,&__t1720t__);
  __t1721t=1;
  add__t188t(__t1720t__,__t1721t,&__t1722t__);
  contents__allocated=__t1722t__;
  ptr__t0t(&__t1723t__);
  __t1726t=8;
  mul__t212t(contents__allocated,__t1726t,&__t1727t__);
  __t_errcode=realloc__t834t(contents__elements,__t1727t__,&__t1729t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_elements=__t1729t__;
  contents__elements=new_elements;
  }
  ptr__t0t(&__t1730t__);
  __t1733t=8;
  mul__t212t(prev_size,__t1733t,&__t1734t__);
  add__t846t(contents__elements,__t1734t__,&__t1735t__);
  position_ptr=__t1735t__;
  old_allocation=linkedmem__unsafe_current__buf__unsafe_ptr;
  ptr__t0t(&__t1736t__);
  __t1739t=8;
  ptr_size=__t1739t;
  memcpy(position_ptr,&old_allocation,ptr_size);
  if(!linkedmem__BUFFERS__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(linkedmem__BUFFERS__unsafe_ptr,&contents__elements,8);
  memcpy(linkedmem__BUFFERS__unsafe_ptr+8,&contents__size,8);
  memcpy(linkedmem__BUFFERS__unsafe_ptr+16,&contents__allocated,8);
  }
  multiple=linkedmem__multiple;
  add__t188t(minimum_capacity,multiple,&__t1740t__);
  __t1741t=1;
  __t_errcode=sub__t402t(__t1740t__,__t1741t,&__t1742t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t270t(__t1742t__,multiple,&__t1743t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t212t(__t1743t__,multiple,&__t1744t__);
  capacity=__t1744t__;
  __t1745t__unsafe_ptr=linkedmem__unsafe_current__buf__unsafe_ptr;
  __t1745t__unsafe_size=linkedmem__unsafe_current__buf__unsafe_size;
  __t1745t__unsafe_offset=linkedmem__unsafe_current__buf__unsafe_offset;
  __t1745t__unsafe_align=linkedmem__unsafe_current__buf__unsafe_align;
  buf__unsafe_ptr=__t1745t__unsafe_ptr;
  buf__unsafe_size=__t1745t__unsafe_size;
  buf__unsafe_offset=__t1745t__unsafe_offset;
  buf__unsafe_align=__t1745t__unsafe_align;
  buf__unsafe_size=capacity;
  __t1746t=0;
  __t_errcode=nat32__t718t(__t1746t,&__t1747t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_offset=__t1747t__;
  nat__t724t(buf__unsafe_align,&__t1748t__);
  mul__t212t(capacity,__t1748t__,&__t1749t__);
  __t_errcode=alloc__t828t(__t1749t__,&__t1750t__);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1576t(&__t1750t__,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1751t__buf__unsafe_ptr,&__t1751t__buf__unsafe_size,&__t1751t__buf__unsafe_offset,&__t1751t__buf__unsafe_align,&__t1751t__pos);
  __t1752t__buf__unsafe_size=__t1751t__buf__unsafe_size;
  __t1752t__buf__unsafe_offset=__t1751t__buf__unsafe_offset;
  __t1752t__buf__unsafe_align=__t1751t__buf__unsafe_align;
  __t1752t__pos=__t1751t__pos;
  linkedmem__unsafe_current__buf__unsafe_size=__t1752t__buf__unsafe_size;
  linkedmem__unsafe_current__buf__unsafe_offset=__t1752t__buf__unsafe_offset;
  linkedmem__unsafe_current__buf__unsafe_align=__t1752t__buf__unsafe_align;
  linkedmem__unsafe_current__pos=__t1752t__pos;
  not__t53t(__t1753t,&__t1754t__);
  add__t188t(consumption__total,capacity,&__t1755t__);
  consumption__total=__t1755t__;
  linkedmem__unsafe_current__buf__unsafe_ptr=__t1750t__;
  linkedmem__unsafe_current__buf__unsafe_ptr=linkedmem__unsafe_current__buf__unsafe_ptr;
  linkedmem__unsafe_current__buf__unsafe_size=linkedmem__unsafe_current__buf__unsafe_size;
  linkedmem__unsafe_current__buf__unsafe_offset=linkedmem__unsafe_current__buf__unsafe_offset;
  linkedmem__unsafe_current__buf__unsafe_align=linkedmem__unsafe_current__buf__unsafe_align;
  linkedmem__unsafe_current__pos=linkedmem__unsafe_current__pos;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5300t=linkedmem__unsafe_current__buf__unsafe_ptr;
  *__t5301t=linkedmem__unsafe_current__buf__unsafe_size;
  *__t5302t=linkedmem__unsafe_current__buf__unsafe_offset;
  *__t5303t=linkedmem__unsafe_current__buf__unsafe_align;
  *__t5304t=linkedmem__unsafe_current__pos;
  *__t5305t=linkedmem__BUFFERS__unsafe_ptr;
  *__t5306t=consumption__used;
  *__t5307t=consumption__total;
  *__t5308t=linkedmem__unsafe_current__buf__unsafe_ptr;
  *__t5309t=linkedmem__unsafe_current__buf__unsafe_size;
  *__t5310t=linkedmem__unsafe_current__buf__unsafe_offset;
  *__t5311t=linkedmem__unsafe_current__buf__unsafe_align;
  *__t5312t=linkedmem__unsafe_current__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1200t(char** __t5313t, uint64_t* __t5314t, uint32_t* __t5315t, uint32_t* __t5316t, uint64_t pos, char** __t5317t, uint64_t* __t5318t, uint32_t* __t5319t, uint32_t* __t5320t, uint64_t* __t5321t) {
  char* buf__unsafe_ptr=*__t5313t;
  uint64_t buf__unsafe_size=*__t5314t;
  uint32_t buf__unsafe_offset=*__t5315t;
  uint32_t buf__unsafe_align=*__t5316t;
  goto __t_return;
  __t_return:
  *__t5313t=buf__unsafe_ptr;
  *__t5314t=buf__unsafe_size;
  *__t5315t=buf__unsafe_offset;
  *__t5316t=buf__unsafe_align;
  *__t5317t=buf__unsafe_ptr;
  *__t5318t=buf__unsafe_size;
  *__t5319t=buf__unsafe_offset;
  *__t5320t=buf__unsafe_align;
  *__t5321t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1604t(char** __t5322t, uint64_t* __t5323t, uint32_t* __t5324t, uint32_t* __t5325t, uint64_t* __t5326t, uint64_t length, char** __t5327t, uint64_t* __t5328t, uint32_t* __t5329t, uint32_t* __t5330t, uint64_t* __t5331t) {
  char* allocator__buf__unsafe_ptr=*__t5322t;
  uint64_t allocator__buf__unsafe_size=*__t5323t;
  uint32_t allocator__buf__unsafe_offset=*__t5324t;
  uint32_t allocator__buf__unsafe_align=*__t5325t;
  uint64_t allocator__pos=*__t5326t;
  int __t1605t=0;
  uint64_t __t1606t__=0;
  uint64_t next_pos=0;
  uint64_t __t1607t__=0;
  char __t1608t__=0;
  uint64_t __t1609t=0;
  uint64_t __t1610t__=0;
  uint64_t pos=0;
  char* __t1611t__buf__unsafe_ptr=0;
  uint64_t __t1611t__buf__unsafe_size=0;
  uint32_t __t1611t__buf__unsafe_offset=0;
  uint32_t __t1611t__buf__unsafe_align=0;
  uint64_t __t1611t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1606t__);
  next_pos=__t1606t__;
  len__t1197t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1607t__);
  gt__t326t(next_pos,__t1607t__,&__t1608t__);
  if(__t1608t__){
  __t_errcode=24;
  goto __t_failure;
  }
  __t1609t=0;
  add__t188t(allocator__pos,__t1609t,&__t1610t__);
  pos=__t1610t__;
  allocator__pos=next_pos;
  allocated__t1200t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1611t__buf__unsafe_ptr,&__t1611t__buf__unsafe_size,&__t1611t__buf__unsafe_offset,&__t1611t__buf__unsafe_align,&__t1611t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5322t=allocator__buf__unsafe_ptr;
  *__t5323t=allocator__buf__unsafe_size;
  *__t5324t=allocator__buf__unsafe_offset;
  *__t5325t=allocator__buf__unsafe_align;
  *__t5326t=allocator__pos;
  *__t5327t=__t1611t__buf__unsafe_ptr;
  *__t5328t=__t1611t__buf__unsafe_size;
  *__t5329t=__t1611t__buf__unsafe_offset;
  *__t5330t=__t1611t__buf__unsafe_align;
  *__t5331t=__t1611t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1775t(char** __t5332t, uint64_t* __t5333t, uint32_t* __t5334t, uint32_t* __t5335t, uint64_t* __t5336t, char** __t5337t, uint64_t linkedmem__multiple, uint64_t* __t5338t, uint64_t* __t5339t, uint64_t length, char** __t5340t, uint64_t* __t5341t, uint32_t* __t5342t, uint32_t* __t5343t, uint64_t* __t5344t) {
  char* linkedmem__unsafe_current__buf__unsafe_ptr=*__t5332t;
  uint64_t linkedmem__unsafe_current__buf__unsafe_size=*__t5333t;
  uint32_t linkedmem__unsafe_current__buf__unsafe_offset=*__t5334t;
  uint32_t linkedmem__unsafe_current__buf__unsafe_align=*__t5335t;
  uint64_t linkedmem__unsafe_current__pos=*__t5336t;
  char* linkedmem__BUFFERS__unsafe_ptr=*__t5337t;
  uint64_t consumption__used=*__t5338t;
  uint64_t consumption__total=*__t5339t;
  int __t1776t=0;
  int __t1777t=0;
  char* __t1778t__buf__unsafe_ptr=0;
  uint64_t __t1778t__buf__unsafe_size=0;
  uint32_t __t1778t__buf__unsafe_offset=0;
  uint32_t __t1778t__buf__unsafe_align=0;
  uint64_t __t1778t__pos=0;
  char* __t1779t__buf__unsafe_ptr=0;
  uint64_t __t1779t__buf__unsafe_size=0;
  uint32_t __t1779t__buf__unsafe_offset=0;
  uint32_t __t1779t__buf__unsafe_align=0;
  uint64_t __t1779t__pos=0;
  char* current__buf__unsafe_ptr=0;
  uint64_t current__buf__unsafe_size=0;
  uint32_t current__buf__unsafe_offset=0;
  uint32_t current__buf__unsafe_align=0;
  uint64_t current__pos=0;
  char* __t1780t__buf__unsafe_ptr=0;
  uint64_t __t1780t__buf__unsafe_size=0;
  uint32_t __t1780t__buf__unsafe_offset=0;
  uint32_t __t1780t__buf__unsafe_align=0;
  uint64_t __t1780t__pos=0;
  char* __t1781t__buf__unsafe_ptr=0;
  uint64_t __t1781t__buf__unsafe_size=0;
  uint32_t __t1781t__buf__unsafe_offset=0;
  uint32_t __t1781t__buf__unsafe_align=0;
  uint64_t __t1781t__pos=0;
  char* result__buf__unsafe_ptr=0;
  uint64_t result__buf__unsafe_size=0;
  uint32_t result__buf__unsafe_offset=0;
  uint32_t result__buf__unsafe_align=0;
  uint64_t result__pos=0;
  int __t1782t=0;
  int __t1783t__=0;
  uint64_t __t1784t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=ensure_arena__t1704t(&linkedmem__unsafe_current__buf__unsafe_ptr,&linkedmem__unsafe_current__buf__unsafe_size,&linkedmem__unsafe_current__buf__unsafe_offset,&linkedmem__unsafe_current__buf__unsafe_align,&linkedmem__unsafe_current__pos,&linkedmem__BUFFERS__unsafe_ptr,linkedmem__multiple,&consumption__used,&consumption__total,length,&__t1778t__buf__unsafe_ptr,&__t1778t__buf__unsafe_size,&__t1778t__buf__unsafe_offset,&__t1778t__buf__unsafe_align,&__t1778t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1779t__buf__unsafe_ptr=__t1778t__buf__unsafe_ptr;
  __t1779t__buf__unsafe_size=__t1778t__buf__unsafe_size;
  __t1779t__buf__unsafe_offset=__t1778t__buf__unsafe_offset;
  __t1779t__buf__unsafe_align=__t1778t__buf__unsafe_align;
  __t1779t__pos=__t1778t__pos;
  current__buf__unsafe_ptr=__t1779t__buf__unsafe_ptr;
  current__buf__unsafe_size=__t1779t__buf__unsafe_size;
  current__buf__unsafe_offset=__t1779t__buf__unsafe_offset;
  current__buf__unsafe_align=__t1779t__buf__unsafe_align;
  current__pos=__t1779t__pos;
  __t_errcode=alloc__t1604t(&current__buf__unsafe_ptr,&current__buf__unsafe_size,&current__buf__unsafe_offset,&current__buf__unsafe_align,&current__pos,length,&__t1780t__buf__unsafe_ptr,&__t1780t__buf__unsafe_size,&__t1780t__buf__unsafe_offset,&__t1780t__buf__unsafe_align,&__t1780t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1781t__buf__unsafe_ptr=__t1780t__buf__unsafe_ptr;
  __t1781t__buf__unsafe_size=__t1780t__buf__unsafe_size;
  __t1781t__buf__unsafe_offset=__t1780t__buf__unsafe_offset;
  __t1781t__buf__unsafe_align=__t1780t__buf__unsafe_align;
  __t1781t__pos=__t1780t__pos;
  result__buf__unsafe_ptr=__t1781t__buf__unsafe_ptr;
  result__buf__unsafe_size=__t1781t__buf__unsafe_size;
  result__buf__unsafe_offset=__t1781t__buf__unsafe_offset;
  result__buf__unsafe_align=__t1781t__buf__unsafe_align;
  result__pos=__t1781t__pos;
  not__t53t(__t1782t,&__t1783t__);
  add__t188t(consumption__used,length,&__t1784t__);
  consumption__used=__t1784t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5332t=linkedmem__unsafe_current__buf__unsafe_ptr;
  *__t5333t=linkedmem__unsafe_current__buf__unsafe_size;
  *__t5334t=linkedmem__unsafe_current__buf__unsafe_offset;
  *__t5335t=linkedmem__unsafe_current__buf__unsafe_align;
  *__t5336t=linkedmem__unsafe_current__pos;
  *__t5337t=linkedmem__BUFFERS__unsafe_ptr;
  *__t5338t=consumption__used;
  *__t5339t=consumption__total;
  *__t5340t=result__buf__unsafe_ptr;
  *__t5341t=result__buf__unsafe_size;
  *__t5342t=result__buf__unsafe_offset;
  *__t5343t=result__buf__unsafe_align;
  *__t5344t=result__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1582t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5345t, uint64_t* __t5346t, uint32_t* __t5347t, uint32_t* __t5348t, uint64_t* __t5349t) {
  char* __t1583t__unsafe_ptr=0;
  uint64_t __t1583t__unsafe_size=0;
  uint32_t __t1583t__unsafe_offset=0;
  uint32_t __t1583t__unsafe_align=0;
  uint64_t __t1584t=0;
  __t1583t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1583t__unsafe_size=self__buf__unsafe_size;
  __t1583t__unsafe_offset=self__buf__unsafe_offset;
  __t1583t__unsafe_align=self__buf__unsafe_align;
  __t1584t=self__pos;
  goto __t_return;
  __t_return:
  *__t5345t=__t1583t__unsafe_ptr;
  *__t5346t=__t1583t__unsafe_size;
  *__t5347t=__t1583t__unsafe_offset;
  *__t5348t=__t1583t__unsafe_align;
  *__t5349t=__t1584t;
}

static inline __attribute__((always_inline)) void str__t1960t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5350t, uint64_t* __t5351t, uint64_t* __t5352t, char* __t5353t) {
  goto __t_return;
  __t_return:
  *__t5350t=other__unsafe_ptr;
  *__t5351t=other__dat__pos;
  *__t5352t=other__dat__length;
  *__t5353t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t2064t(char** __t5354t, uint64_t* __t5355t, uint32_t* __t5356t, uint32_t* __t5357t, uint64_t* __t5358t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5359t, uint64_t* __t5360t, uint64_t* __t5361t, char* __t5362t) {
  char* CHARS__buf__unsafe_ptr=*__t5354t;
  uint64_t CHARS__buf__unsafe_size=*__t5355t;
  uint32_t CHARS__buf__unsafe_offset=*__t5356t;
  uint32_t CHARS__buf__unsafe_align=*__t5357t;
  uint64_t CHARS__pos=*__t5358t;
  char* __t2065t__unsafe_ptr=0;
  uint64_t __t2065t__dat__pos=0;
  uint64_t __t2065t__dat__length=0;
  char __t2065t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t2066t__buf__unsafe_ptr=0;
  uint64_t __t2066t__buf__unsafe_size=0;
  uint32_t __t2066t__buf__unsafe_offset=0;
  uint32_t __t2066t__buf__unsafe_align=0;
  uint64_t __t2066t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t2067t=0;
  char* __t2068t__unsafe_ptr=0;
  uint64_t __t2068t__dat__pos=0;
  uint64_t __t2068t__dat__length=0;
  char __t2068t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1960t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t2065t__unsafe_ptr,&__t2065t__dat__pos,&__t2065t__dat__length,&__t2065t__dat__first);
  other__unsafe_ptr=__t2065t__unsafe_ptr;
  other__dat__pos=__t2065t__dat__pos;
  other__dat__length=__t2065t__dat__length;
  other__dat__first=__t2065t__dat__first;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t2066t__buf__unsafe_ptr,&__t2066t__buf__unsafe_size,&__t2066t__buf__unsafe_offset,&__t2066t__buf__unsafe_align,&__t2066t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2066t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2066t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2066t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2066t__buf__unsafe_align;
  surface__pos=__t2066t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1927t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t2068t__unsafe_ptr,&__t2068t__dat__pos,&__t2068t__dat__length,&__t2068t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5354t=CHARS__buf__unsafe_ptr;
  *__t5355t=CHARS__buf__unsafe_size;
  *__t5356t=CHARS__buf__unsafe_offset;
  *__t5357t=CHARS__buf__unsafe_align;
  *__t5358t=CHARS__pos;
  *__t5359t=__t2068t__unsafe_ptr;
  *__t5360t=__t2068t__dat__pos;
  *__t5361t=__t2068t__dat__length;
  *__t5362t=__t2068t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1579t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5363t, uint64_t* __t5364t, uint32_t* __t5365t, uint32_t* __t5366t, uint64_t* __t5367t) {
  char* __t1580t__unsafe_ptr=0;
  uint64_t __t1580t__unsafe_size=0;
  uint32_t __t1580t__unsafe_offset=0;
  uint32_t __t1580t__unsafe_align=0;
  uint64_t __t1581t=0;
  __t1580t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1580t__unsafe_size=self__buf__unsafe_size;
  __t1580t__unsafe_offset=self__buf__unsafe_offset;
  __t1580t__unsafe_align=self__buf__unsafe_align;
  __t1581t=self__pos;
  goto __t_return;
  __t_return:
  *__t5363t=__t1580t__unsafe_ptr;
  *__t5364t=__t1580t__unsafe_size;
  *__t5365t=__t1580t__unsafe_offset;
  *__t5366t=__t1580t__unsafe_align;
  *__t5367t=__t1581t;
}

int str__t1979t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5368t, uint64_t* __t5369t, uint64_t* __t5370t, char* __t5371t) {
  uint64_t __t1981t__=0;
  char* __t1982t__unsafe_ptr=0;
  uint64_t __t1982t__dat__pos=0;
  uint64_t __t1982t__dat__length=0;
  char __t1982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1981t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1961t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1981t__,&__t1982t__unsafe_ptr,&__t1982t__dat__pos,&__t1982t__dat__length,&__t1982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5368t=__t1982t__unsafe_ptr;
  *__t5369t=__t1982t__dat__pos;
  *__t5370t=__t1982t__dat__length;
  *__t5371t=__t1982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3365t(char** __t5372t, uint64_t* __t5373t, uint32_t* __t5374t, uint32_t* __t5375t, uint64_t* __t5376t, char** __t5377t, uint64_t CHARS____t1816t__multiple, uint64_t* __t5378t, uint64_t* __t5379t, const char* _s1, const char* _s2, char** __t5380t, uint64_t* __t5381t, uint64_t* __t5382t, char* __t5383t) {
  char* CHARS____t1816t__unsafe_current__buf__unsafe_ptr=*__t5372t;
  uint64_t CHARS____t1816t__unsafe_current__buf__unsafe_size=*__t5373t;
  uint32_t CHARS____t1816t__unsafe_current__buf__unsafe_offset=*__t5374t;
  uint32_t CHARS____t1816t__unsafe_current__buf__unsafe_align=*__t5375t;
  uint64_t CHARS____t1816t__unsafe_current__pos=*__t5376t;
  char* CHARS____t1816t__BUFFERS__unsafe_ptr=*__t5377t;
  uint64_t CHARS____t1818t__used=*__t5378t;
  uint64_t CHARS____t1818t__total=*__t5379t;
  char* __t3366t__unsafe_ptr=0;
  uint64_t __t3366t__dat__pos=0;
  uint64_t __t3366t__dat__length=0;
  char __t3366t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3367t__unsafe_ptr=0;
  uint64_t __t3367t__dat__pos=0;
  uint64_t __t3367t__dat__length=0;
  char __t3367t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t3368t__=0;
  uint64_t __t3369t__=0;
  uint64_t __t3370t__=0;
  char* __t3371t__buf__unsafe_ptr=0;
  uint64_t __t3371t__buf__unsafe_size=0;
  uint32_t __t3371t__buf__unsafe_offset=0;
  uint32_t __t3371t__buf__unsafe_align=0;
  uint64_t __t3371t__pos=0;
  char* __t3372t____t1583t__unsafe_ptr=0;
  uint64_t __t3372t____t1583t__unsafe_size=0;
  uint32_t __t3372t____t1583t__unsafe_offset=0;
  uint32_t __t3372t____t1583t__unsafe_align=0;
  uint64_t __t3372t____t1584t=0;
  char* charalloc____t1583t__unsafe_ptr=0;
  uint64_t charalloc____t1583t__unsafe_size=0;
  uint32_t charalloc____t1583t__unsafe_offset=0;
  uint32_t charalloc____t1583t__unsafe_align=0;
  uint64_t charalloc____t1584t=0;
  char* __t3373t__buf__unsafe_ptr=0;
  uint64_t __t3373t__buf__unsafe_size=0;
  uint32_t __t3373t__buf__unsafe_offset=0;
  uint32_t __t3373t__buf__unsafe_align=0;
  uint64_t __t3373t__pos=0;
  char* __t3374t__buf__unsafe_ptr=0;
  uint64_t __t3374t__buf__unsafe_size=0;
  uint32_t __t3374t__buf__unsafe_offset=0;
  uint32_t __t3374t__buf__unsafe_align=0;
  uint64_t __t3374t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t3375t=0;
  uint64_t __t3376t__=0;
  uint64_t start=0;
  int __t3377t=0;
  char* __t3378t__unsafe_ptr=0;
  uint64_t __t3378t__dat__pos=0;
  uint64_t __t3378t__dat__length=0;
  char __t3378t__dat__first=0;
  char* __t3379t__unsafe_ptr=0;
  uint64_t __t3379t__dat__pos=0;
  uint64_t __t3379t__dat__length=0;
  char __t3379t__dat__first=0;
  char __t3380t=0;
  char* __t3381t____t1580t__unsafe_ptr=0;
  uint64_t __t3381t____t1580t__unsafe_size=0;
  uint32_t __t3381t____t1580t__unsafe_offset=0;
  uint32_t __t3381t____t1580t__unsafe_align=0;
  uint64_t __t3381t____t1581t=0;
  char* __t3383t__unsafe_ptr=0;
  uint64_t __t3383t__dat__pos=0;
  uint64_t __t3383t__dat__length=0;
  char __t3383t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1983t(_s1,&__t3366t__unsafe_ptr,&__t3366t__dat__pos,&__t3366t__dat__length,&__t3366t__dat__first);
  s1__unsafe_ptr=__t3366t__unsafe_ptr;
  s1__dat__pos=__t3366t__dat__pos;
  s1__dat__length=__t3366t__dat__length;
  s1__dat__first=__t3366t__dat__first;
  str__t1983t(_s2,&__t3367t__unsafe_ptr,&__t3367t__dat__pos,&__t3367t__dat__length,&__t3367t__dat__first);
  s2__unsafe_ptr=__t3367t__unsafe_ptr;
  s2__dat__pos=__t3367t__dat__pos;
  s2__dat__length=__t3367t__dat__length;
  s2__dat__first=__t3367t__dat__first;
  len__t1993t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3368t__);
  len__t1993t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3369t__);
  add__t188t(__t3368t__,__t3369t__,&__t3370t__);
  __t_errcode=alloc__t1775t(&CHARS____t1816t__unsafe_current__buf__unsafe_ptr,&CHARS____t1816t__unsafe_current__buf__unsafe_size,&CHARS____t1816t__unsafe_current__buf__unsafe_offset,&CHARS____t1816t__unsafe_current__buf__unsafe_align,&CHARS____t1816t__unsafe_current__pos,&CHARS____t1816t__BUFFERS__unsafe_ptr,CHARS____t1816t__multiple,&CHARS____t1818t__used,&CHARS____t1818t__total,__t3370t__,&__t3371t__buf__unsafe_ptr,&__t3371t__buf__unsafe_size,&__t3371t__buf__unsafe_offset,&__t3371t__buf__unsafe_align,&__t3371t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3371t__buf__unsafe_ptr,__t3371t__buf__unsafe_size,__t3371t__buf__unsafe_offset,__t3371t__buf__unsafe_align,__t3371t__pos,&__t3372t____t1583t__unsafe_ptr,&__t3372t____t1583t__unsafe_size,&__t3372t____t1583t__unsafe_offset,&__t3372t____t1583t__unsafe_align,&__t3372t____t1584t);
  charalloc____t1583t__unsafe_ptr=__t3372t____t1583t__unsafe_ptr;
  charalloc____t1583t__unsafe_size=__t3372t____t1583t__unsafe_size;
  charalloc____t1583t__unsafe_offset=__t3372t____t1583t__unsafe_offset;
  charalloc____t1583t__unsafe_align=__t3372t____t1583t__unsafe_align;
  charalloc____t1584t=__t3372t____t1584t;
  arena__t1573t(&charalloc____t1583t__unsafe_ptr,&charalloc____t1583t__unsafe_size,&charalloc____t1583t__unsafe_offset,&charalloc____t1583t__unsafe_align,charalloc____t1584t,&__t3373t__buf__unsafe_ptr,&__t3373t__buf__unsafe_size,&__t3373t__buf__unsafe_offset,&__t3373t__buf__unsafe_align,&__t3373t__pos);
  __t3374t__buf__unsafe_ptr=__t3373t__buf__unsafe_ptr;
  __t3374t__buf__unsafe_size=__t3373t__buf__unsafe_size;
  __t3374t__buf__unsafe_offset=__t3373t__buf__unsafe_offset;
  __t3374t__buf__unsafe_align=__t3373t__buf__unsafe_align;
  __t3374t__pos=__t3373t__pos;
  surface__buf__unsafe_ptr=__t3374t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3374t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3374t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3374t__buf__unsafe_align;
  surface__pos=__t3374t__pos;
  __t3375t=0;
  add__t188t(surface__pos,__t3375t,&__t3376t__);
  start=__t3376t__;
  __t_errcode=copy__t2064t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3378t__unsafe_ptr,&__t3378t__dat__pos,&__t3378t__dat__length,&__t3378t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t2064t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3379t__unsafe_ptr,&__t3379t__dat__pos,&__t3379t__dat__length,&__t3379t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3381t____t1580t__unsafe_ptr,&__t3381t____t1580t__unsafe_size,&__t3381t____t1580t__unsafe_offset,&__t3381t____t1580t__unsafe_align,&__t3381t____t1581t);
  __t_complain=str__t1979t(__t3381t____t1580t__unsafe_ptr,__t3381t____t1580t__unsafe_size,__t3381t____t1580t__unsafe_offset,__t3381t____t1580t__unsafe_align,__t3381t____t1581t,start,&__t3383t__unsafe_ptr,&__t3383t__dat__pos,&__t3383t__dat__length,&__t3383t__dat__first);
  __t3380t=__t_complain;
  if(__t_complain){
  goto __t3380t__label;
  }
  ret__unsafe_ptr=__t3383t__unsafe_ptr;
  ret__dat__pos=__t3383t__dat__pos;
  ret__dat__length=__t3383t__dat__length;
  ret__dat__first=__t3383t__dat__first;
  __t3380t__label:__t3380t=__t3380t==0;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5372t=CHARS____t1816t__unsafe_current__buf__unsafe_ptr;
  *__t5373t=CHARS____t1816t__unsafe_current__buf__unsafe_size;
  *__t5374t=CHARS____t1816t__unsafe_current__buf__unsafe_offset;
  *__t5375t=CHARS____t1816t__unsafe_current__buf__unsafe_align;
  *__t5376t=CHARS____t1816t__unsafe_current__pos;
  *__t5377t=CHARS____t1816t__BUFFERS__unsafe_ptr;
  *__t5378t=CHARS____t1818t__used;
  *__t5379t=CHARS____t1818t__total;
  *__t5380t=ret__unsafe_ptr;
  *__t5381t=ret__dat__pos;
  *__t5382t=ret__dat__length;
  *__t5383t=ret__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3327t(char** __t5384t, uint64_t* __t5385t, uint32_t* __t5386t, uint32_t* __t5387t, uint64_t* __t5388t, char** __t5389t, uint64_t CHARS____t1816t__multiple, uint64_t* __t5390t, uint64_t* __t5391t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5392t, uint64_t* __t5393t, uint64_t* __t5394t, char* __t5395t) {
  char* CHARS____t1816t__unsafe_current__buf__unsafe_ptr=*__t5384t;
  uint64_t CHARS____t1816t__unsafe_current__buf__unsafe_size=*__t5385t;
  uint32_t CHARS____t1816t__unsafe_current__buf__unsafe_offset=*__t5386t;
  uint32_t CHARS____t1816t__unsafe_current__buf__unsafe_align=*__t5387t;
  uint64_t CHARS____t1816t__unsafe_current__pos=*__t5388t;
  char* CHARS____t1816t__BUFFERS__unsafe_ptr=*__t5389t;
  uint64_t CHARS____t1818t__used=*__t5390t;
  uint64_t CHARS____t1818t__total=*__t5391t;
  char* __t3328t__unsafe_ptr=0;
  uint64_t __t3328t__dat__pos=0;
  uint64_t __t3328t__dat__length=0;
  char __t3328t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3329t__unsafe_ptr=0;
  uint64_t __t3329t__dat__pos=0;
  uint64_t __t3329t__dat__length=0;
  char __t3329t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t3330t__=0;
  uint64_t __t3331t__=0;
  uint64_t __t3332t__=0;
  char* __t3333t__buf__unsafe_ptr=0;
  uint64_t __t3333t__buf__unsafe_size=0;
  uint32_t __t3333t__buf__unsafe_offset=0;
  uint32_t __t3333t__buf__unsafe_align=0;
  uint64_t __t3333t__pos=0;
  char* __t3334t____t1583t__unsafe_ptr=0;
  uint64_t __t3334t____t1583t__unsafe_size=0;
  uint32_t __t3334t____t1583t__unsafe_offset=0;
  uint32_t __t3334t____t1583t__unsafe_align=0;
  uint64_t __t3334t____t1584t=0;
  char* charalloc____t1583t__unsafe_ptr=0;
  uint64_t charalloc____t1583t__unsafe_size=0;
  uint32_t charalloc____t1583t__unsafe_offset=0;
  uint32_t charalloc____t1583t__unsafe_align=0;
  uint64_t charalloc____t1584t=0;
  char* __t3335t__buf__unsafe_ptr=0;
  uint64_t __t3335t__buf__unsafe_size=0;
  uint32_t __t3335t__buf__unsafe_offset=0;
  uint32_t __t3335t__buf__unsafe_align=0;
  uint64_t __t3335t__pos=0;
  char* __t3336t__buf__unsafe_ptr=0;
  uint64_t __t3336t__buf__unsafe_size=0;
  uint32_t __t3336t__buf__unsafe_offset=0;
  uint32_t __t3336t__buf__unsafe_align=0;
  uint64_t __t3336t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t3337t=0;
  uint64_t __t3338t__=0;
  uint64_t start=0;
  int __t3339t=0;
  char* __t3340t__unsafe_ptr=0;
  uint64_t __t3340t__dat__pos=0;
  uint64_t __t3340t__dat__length=0;
  char __t3340t__dat__first=0;
  char* __t3341t__unsafe_ptr=0;
  uint64_t __t3341t__dat__pos=0;
  uint64_t __t3341t__dat__length=0;
  char __t3341t__dat__first=0;
  char __t3342t=0;
  char* __t3343t____t1580t__unsafe_ptr=0;
  uint64_t __t3343t____t1580t__unsafe_size=0;
  uint32_t __t3343t____t1580t__unsafe_offset=0;
  uint32_t __t3343t____t1580t__unsafe_align=0;
  uint64_t __t3343t____t1581t=0;
  char* __t3345t__unsafe_ptr=0;
  uint64_t __t3345t__dat__pos=0;
  uint64_t __t3345t__dat__length=0;
  char __t3345t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1960t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t3328t__unsafe_ptr,&__t3328t__dat__pos,&__t3328t__dat__length,&__t3328t__dat__first);
  s1__unsafe_ptr=__t3328t__unsafe_ptr;
  s1__dat__pos=__t3328t__dat__pos;
  s1__dat__length=__t3328t__dat__length;
  s1__dat__first=__t3328t__dat__first;
  str__t1983t(_s2,&__t3329t__unsafe_ptr,&__t3329t__dat__pos,&__t3329t__dat__length,&__t3329t__dat__first);
  s2__unsafe_ptr=__t3329t__unsafe_ptr;
  s2__dat__pos=__t3329t__dat__pos;
  s2__dat__length=__t3329t__dat__length;
  s2__dat__first=__t3329t__dat__first;
  len__t1993t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3330t__);
  len__t1993t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3331t__);
  add__t188t(__t3330t__,__t3331t__,&__t3332t__);
  __t_errcode=alloc__t1775t(&CHARS____t1816t__unsafe_current__buf__unsafe_ptr,&CHARS____t1816t__unsafe_current__buf__unsafe_size,&CHARS____t1816t__unsafe_current__buf__unsafe_offset,&CHARS____t1816t__unsafe_current__buf__unsafe_align,&CHARS____t1816t__unsafe_current__pos,&CHARS____t1816t__BUFFERS__unsafe_ptr,CHARS____t1816t__multiple,&CHARS____t1818t__used,&CHARS____t1818t__total,__t3332t__,&__t3333t__buf__unsafe_ptr,&__t3333t__buf__unsafe_size,&__t3333t__buf__unsafe_offset,&__t3333t__buf__unsafe_align,&__t3333t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3333t__buf__unsafe_ptr,__t3333t__buf__unsafe_size,__t3333t__buf__unsafe_offset,__t3333t__buf__unsafe_align,__t3333t__pos,&__t3334t____t1583t__unsafe_ptr,&__t3334t____t1583t__unsafe_size,&__t3334t____t1583t__unsafe_offset,&__t3334t____t1583t__unsafe_align,&__t3334t____t1584t);
  charalloc____t1583t__unsafe_ptr=__t3334t____t1583t__unsafe_ptr;
  charalloc____t1583t__unsafe_size=__t3334t____t1583t__unsafe_size;
  charalloc____t1583t__unsafe_offset=__t3334t____t1583t__unsafe_offset;
  charalloc____t1583t__unsafe_align=__t3334t____t1583t__unsafe_align;
  charalloc____t1584t=__t3334t____t1584t;
  arena__t1573t(&charalloc____t1583t__unsafe_ptr,&charalloc____t1583t__unsafe_size,&charalloc____t1583t__unsafe_offset,&charalloc____t1583t__unsafe_align,charalloc____t1584t,&__t3335t__buf__unsafe_ptr,&__t3335t__buf__unsafe_size,&__t3335t__buf__unsafe_offset,&__t3335t__buf__unsafe_align,&__t3335t__pos);
  __t3336t__buf__unsafe_ptr=__t3335t__buf__unsafe_ptr;
  __t3336t__buf__unsafe_size=__t3335t__buf__unsafe_size;
  __t3336t__buf__unsafe_offset=__t3335t__buf__unsafe_offset;
  __t3336t__buf__unsafe_align=__t3335t__buf__unsafe_align;
  __t3336t__pos=__t3335t__pos;
  surface__buf__unsafe_ptr=__t3336t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3336t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3336t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3336t__buf__unsafe_align;
  surface__pos=__t3336t__pos;
  __t3337t=0;
  add__t188t(surface__pos,__t3337t,&__t3338t__);
  start=__t3338t__;
  __t_errcode=copy__t2064t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3340t__unsafe_ptr,&__t3340t__dat__pos,&__t3340t__dat__length,&__t3340t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t2064t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3341t__unsafe_ptr,&__t3341t__dat__pos,&__t3341t__dat__length,&__t3341t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3343t____t1580t__unsafe_ptr,&__t3343t____t1580t__unsafe_size,&__t3343t____t1580t__unsafe_offset,&__t3343t____t1580t__unsafe_align,&__t3343t____t1581t);
  __t_complain=str__t1979t(__t3343t____t1580t__unsafe_ptr,__t3343t____t1580t__unsafe_size,__t3343t____t1580t__unsafe_offset,__t3343t____t1580t__unsafe_align,__t3343t____t1581t,start,&__t3345t__unsafe_ptr,&__t3345t__dat__pos,&__t3345t__dat__length,&__t3345t__dat__first);
  __t3342t=__t_complain;
  if(__t_complain){
  goto __t3342t__label;
  }
  ret__unsafe_ptr=__t3345t__unsafe_ptr;
  ret__dat__pos=__t3345t__dat__pos;
  ret__dat__length=__t3345t__dat__length;
  ret__dat__first=__t3345t__dat__first;
  __t3342t__label:__t3342t=__t3342t==0;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5384t=CHARS____t1816t__unsafe_current__buf__unsafe_ptr;
  *__t5385t=CHARS____t1816t__unsafe_current__buf__unsafe_size;
  *__t5386t=CHARS____t1816t__unsafe_current__buf__unsafe_offset;
  *__t5387t=CHARS____t1816t__unsafe_current__buf__unsafe_align;
  *__t5388t=CHARS____t1816t__unsafe_current__pos;
  *__t5389t=CHARS____t1816t__BUFFERS__unsafe_ptr;
  *__t5390t=CHARS____t1818t__used;
  *__t5391t=CHARS____t1818t__total;
  *__t5392t=ret__unsafe_ptr;
  *__t5393t=ret__dat__pos;
  *__t5394t=ret__dat__length;
  *__t5395t=ret__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t2221t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2222t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t5396t, const char** __t5397t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t5396t=value;
  *__t5397t=__t464t;
}

static inline __attribute__((always_inline)) void print__t471t(const char* value, const char* endl) {
  int __t472t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t469t(uint64_t value, uint64_t* __t5398t, const char** __t5399t) {
  const char* __t470t=0;
  __t470t=__t463t;
  goto __t_return;
  __t_return:
  *__t5398t=value;
  *__t5399t=__t470t;
}

static inline __attribute__((always_inline)) void print__t484t(uint64_t value, const char* endl) {
  int __t485t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void float__t648t(uint64_t x, double* __t5400t) {
  int __t649t=0;
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5400t=z;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t5401t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t5401t=__t87t__;
}

static inline __attribute__((always_inline)) void eq__t112t(double x, double y, char* __t5402t) {
  int __t113t__=0;
  char z=0;
  is_different__t85t(x,y,&__t113t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5402t=z;
}

static inline __attribute__((always_inline)) int div__t220t(double x, double y, double* __t5403t) {
  int __t221t__=0;
  int __t222t=0;
  double zero=0;
  char __t223t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t85t(x,y,&__t221t__);
  zero=0;
  eq__t112t(y,zero,&__t223t__);
  if(__t223t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5403t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int utilization__t1800t(uint64_t consumption__used, uint64_t consumption__total, double* __t5404t) {
  double __t1801t__=0;
  double __t1802t__=0;
  double __t1803t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float__t648t(consumption__used,&__t1801t__);
  float__t648t(consumption__total,&__t1802t__);
  __t_errcode=div__t220t(__t1801t__,__t1802t__,&__t1803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5404t=__t1803t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t190t(double x, double y, double* __t5405t) {
  int __t191t__=0;
  double z=0;
  is_different__t85t(x,y,&__t191t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5405t=z;
}

static inline __attribute__((always_inline)) void lt__t280t(double x, double y, char* __t5406t) {
  int __t281t__=0;
  char z=0;
  is_different__t85t(x,y,&__t281t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5406t=z;
}

static inline __attribute__((always_inline)) int nat__t662t(double x, uint64_t* __t5407t) {
  int __t663t=0;
  int __t664t__=0;
  int __t665t=0;
  int __t666t=0;
  uint64_t __t667t=0;
  double __t668t__=0;
  char __t669t__=0;
  uint64_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t53t(__t663t,&__t664t__);
  __t667t=0;
  float__t648t(__t667t,&__t668t__);
  lt__t280t(x,__t668t__,&__t669t__);
  if(__t669t__){
  __t_errcode=7;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5407t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t473t(const char* value) {
  int __t474t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int print_report__t1819t(char* blank__unsafe_current__buf__unsafe_ptr, uint64_t blank__unsafe_current__buf__unsafe_size, uint32_t blank__unsafe_current__buf__unsafe_offset, uint32_t blank__unsafe_current__buf__unsafe_align, uint64_t blank__unsafe_current__pos, char* blank__BUFFERS__unsafe_ptr, uint64_t blank__multiple, uint64_t consumption__used, uint64_t consumption__total) {
  const char* __t1821t__value=0;
  const char* __t1821t____t464t=0;
  uint64_t __t1823t__value=0;
  const char* __t1823t____t470t=0;
  const char* __t1826t__value=0;
  const char* __t1826t____t464t=0;
  uint64_t __t1828t__value=0;
  const char* __t1828t____t470t=0;
  const char* __t1831t__value=0;
  const char* __t1831t____t464t=0;
  double __t1833t=0;
  double __t1834t__=0;
  double __t1835t__=0;
  uint64_t __t1836t__=0;
  uint64_t __t1837t__value=0;
  const char* __t1837t____t470t=0;
  int __t_errcode=0;
  int __t_complain=0;
  nn__t462t(__t1820t,&__t1821t__value,&__t1821t____t464t);
  print__t471t(__t1821t__value,__t1821t____t464t);
  nn__t469t(consumption__used,&__t1823t__value,&__t1823t____t470t);
  print__t484t(__t1823t__value,__t1823t____t470t);
  nn__t462t(__t1825t,&__t1826t__value,&__t1826t____t464t);
  print__t471t(__t1826t__value,__t1826t____t464t);
  nn__t469t(consumption__total,&__t1828t__value,&__t1828t____t470t);
  print__t484t(__t1828t__value,__t1828t____t470t);
  nn__t462t(__t1830t,&__t1831t__value,&__t1831t____t464t);
  print__t471t(__t1831t__value,__t1831t____t464t);
  __t1833t=100.0;
  __t_errcode=utilization__t1800t(consumption__used,consumption__total,&__t1834t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t190t(__t1833t,__t1834t__,&__t1835t__);
  __t_errcode=nat__t662t(__t1835t__,&__t1836t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nn__t469t(__t1836t__,&__t1837t__value,&__t1837t____t470t);
  print__t484t(__t1837t__value,__t1837t____t470t);
  print__t473t(__t1839t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5164t() {
  char* __t5167t__unsafe_ptr=0;
  uint64_t __t5167t__unsafe_size=0;
  uint32_t __t5167t__unsafe_offset=0;
  uint32_t __t5167t__unsafe_align=0;
  uint64_t __t5168t=0;
  char* __t5170t____t1811t__unsafe_current__buf__unsafe_ptr=0;
  uint64_t __t5170t____t1811t__unsafe_current__buf__unsafe_size=0;
  uint32_t __t5170t____t1811t__unsafe_current__buf__unsafe_offset=0;
  uint32_t __t5170t____t1811t__unsafe_current__buf__unsafe_align=0;
  uint64_t __t5170t____t1811t__unsafe_current__pos=0;
  char* __t5170t____t1811t__BUFFERS__unsafe_ptr=0;
  uint64_t __t5170t____t1811t__multiple=0;
  uint64_t __t5170t____t1813t__used=0;
  uint64_t __t5170t____t1813t__total=0;
  char* __t5171t____t1812t____t1642t____t1242t__elements=0;
  uint64_t __t5171t____t1812t____t1642t____t1242t__size=0;
  uint64_t __t5171t____t1812t____t1642t____t1242t__allocated=0;
  char* __t5171t____t1812t____t1642t____t1243t__elements=0;
  uint64_t __t5171t____t1812t____t1642t____t1243t__size=0;
  uint64_t __t5171t____t1812t____t1642t____t1243t__allocated=0;
  char* __t5171t____t1812t____t1642t__contents__elements=0;
  uint64_t __t5171t____t1812t____t1642t__contents__size=0;
  uint64_t __t5171t____t1812t____t1642t__contents__allocated=0;
  char* __t5172t____t1811t__unsafe_current__buf__unsafe_ptr=0;
  uint64_t __t5172t____t1811t__unsafe_current__buf__unsafe_size=0;
  uint32_t __t5172t____t1811t__unsafe_current__buf__unsafe_offset=0;
  uint32_t __t5172t____t1811t__unsafe_current__buf__unsafe_align=0;
  uint64_t __t5172t____t1811t__unsafe_current__pos=0;
  char* __t5172t____t1811t__BUFFERS__unsafe_ptr=0;
  uint64_t __t5172t____t1811t__multiple=0;
  uint64_t __t5172t____t1813t__used=0;
  uint64_t __t5172t____t1813t__total=0;
  char* CHARS____t1811t__unsafe_current__buf__unsafe_ptr=0;
  uint64_t CHARS____t1811t__unsafe_current__buf__unsafe_size=0;
  uint32_t CHARS____t1811t__unsafe_current__buf__unsafe_offset=0;
  uint32_t CHARS____t1811t__unsafe_current__buf__unsafe_align=0;
  uint64_t CHARS____t1811t__unsafe_current__pos=0;
  char* CHARS____t1811t__BUFFERS__unsafe_ptr=0;
  uint64_t CHARS____t1811t__multiple=0;
  uint64_t CHARS____t1813t__used=0;
  uint64_t CHARS____t1813t__total=0;
  char* __t5175t__unsafe_ptr=0;
  uint64_t __t5175t__dat__pos=0;
  uint64_t __t5175t__dat__length=0;
  char __t5175t__dat__first=0;
  char* __t5177t__unsafe_ptr=0;
  uint64_t __t5177t__dat__pos=0;
  uint64_t __t5177t__dat__length=0;
  char __t5177t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t5165t(&__t5167t__unsafe_ptr,&__t5167t__unsafe_size,&__t5167t__unsafe_offset,&__t5167t__unsafe_align);
  __t5168t=8;
  __t_errcode=linkedmem__t1809t(&__t5167t__unsafe_ptr,&__t5167t__unsafe_size,&__t5167t__unsafe_offset,&__t5167t__unsafe_align,__t5168t,&__t5170t____t1811t__unsafe_current__buf__unsafe_ptr,&__t5170t____t1811t__unsafe_current__buf__unsafe_size,&__t5170t____t1811t__unsafe_current__buf__unsafe_offset,&__t5170t____t1811t__unsafe_current__buf__unsafe_align,&__t5170t____t1811t__unsafe_current__pos,&__t5170t____t1811t__BUFFERS__unsafe_ptr,&__t5170t____t1811t__multiple,&__t5170t____t1813t__used,&__t5170t____t1813t__total);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5172t____t1811t__unsafe_current__buf__unsafe_ptr=__t5170t____t1811t__unsafe_current__buf__unsafe_ptr;
  __t5172t____t1811t__unsafe_current__buf__unsafe_size=__t5170t____t1811t__unsafe_current__buf__unsafe_size;
  __t5172t____t1811t__unsafe_current__buf__unsafe_offset=__t5170t____t1811t__unsafe_current__buf__unsafe_offset;
  __t5172t____t1811t__unsafe_current__buf__unsafe_align=__t5170t____t1811t__unsafe_current__buf__unsafe_align;
  __t5172t____t1811t__unsafe_current__pos=__t5170t____t1811t__unsafe_current__pos;
  __t5172t____t1811t__BUFFERS__unsafe_ptr=__t5170t____t1811t__BUFFERS__unsafe_ptr;
  __t5172t____t1811t__multiple=__t5170t____t1811t__multiple;
  __t5172t____t1813t__used=__t5170t____t1813t__used;
  __t5172t____t1813t__total=__t5170t____t1813t__total;
  CHARS____t1811t__unsafe_current__buf__unsafe_ptr=__t5172t____t1811t__unsafe_current__buf__unsafe_ptr;
  CHARS____t1811t__unsafe_current__buf__unsafe_size=__t5172t____t1811t__unsafe_current__buf__unsafe_size;
  CHARS____t1811t__unsafe_current__buf__unsafe_offset=__t5172t____t1811t__unsafe_current__buf__unsafe_offset;
  CHARS____t1811t__unsafe_current__buf__unsafe_align=__t5172t____t1811t__unsafe_current__buf__unsafe_align;
  CHARS____t1811t__unsafe_current__pos=__t5172t____t1811t__unsafe_current__pos;
  CHARS____t1811t__BUFFERS__unsafe_ptr=__t5172t____t1811t__BUFFERS__unsafe_ptr;
  CHARS____t1811t__multiple=__t5172t____t1811t__multiple;
  CHARS____t1813t__used=__t5172t____t1813t__used;
  CHARS____t1813t__total=__t5172t____t1813t__total;
  __t_errcode=add__t3365t(&CHARS____t1811t__unsafe_current__buf__unsafe_ptr,&CHARS____t1811t__unsafe_current__buf__unsafe_size,&CHARS____t1811t__unsafe_current__buf__unsafe_offset,&CHARS____t1811t__unsafe_current__buf__unsafe_align,&CHARS____t1811t__unsafe_current__pos,&CHARS____t1811t__BUFFERS__unsafe_ptr,CHARS____t1811t__multiple,&CHARS____t1813t__used,&CHARS____t1813t__total,__t5173t,__t5174t,&__t5175t__unsafe_ptr,&__t5175t__dat__pos,&__t5175t__dat__length,&__t5175t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3327t(&CHARS____t1811t__unsafe_current__buf__unsafe_ptr,&CHARS____t1811t__unsafe_current__buf__unsafe_size,&CHARS____t1811t__unsafe_current__buf__unsafe_offset,&CHARS____t1811t__unsafe_current__buf__unsafe_align,&CHARS____t1811t__unsafe_current__pos,&CHARS____t1811t__BUFFERS__unsafe_ptr,CHARS____t1811t__multiple,&CHARS____t1813t__used,&CHARS____t1813t__total,__t5175t__unsafe_ptr,__t5175t__dat__pos,__t5175t__dat__length,__t5175t__dat__first,__t5176t,&__t5177t__unsafe_ptr,&__t5177t__dat__pos,&__t5177t__dat__length,&__t5177t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t2221t(__t5177t__unsafe_ptr,__t5177t__dat__pos,__t5177t__dat__length,__t5177t__dat__first);
  __t_errcode=print_report__t1819t(CHARS____t1811t__unsafe_current__buf__unsafe_ptr,CHARS____t1811t__unsafe_current__buf__unsafe_size,CHARS____t1811t__unsafe_current__buf__unsafe_offset,CHARS____t1811t__unsafe_current__buf__unsafe_align,CHARS____t1811t__unsafe_current__pos,CHARS____t1811t__BUFFERS__unsafe_ptr,CHARS____t1811t__multiple,CHARS____t1813t__used,CHARS____t1813t__total);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:if(!__t5170t____t1811t__BUFFERS__unsafe_ptr){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5171t____t1812t____t1642t____t1242t__elements,__t5170t____t1811t__BUFFERS__unsafe_ptr,8);
  memcpy(&__t5171t____t1812t____t1642t____t1242t__size,__t5170t____t1811t__BUFFERS__unsafe_ptr+8,8);
  memcpy(&__t5171t____t1812t____t1642t____t1242t__allocated,__t5170t____t1811t__BUFFERS__unsafe_ptr+16,8);
  __t5171t____t1812t____t1642t____t1243t__elements=__t5171t____t1812t____t1642t____t1242t__elements;
  __t5171t____t1812t____t1642t____t1243t__size=__t5171t____t1812t____t1642t____t1242t__size;
  __t5171t____t1812t____t1642t____t1243t__allocated=__t5171t____t1812t____t1642t____t1242t__allocated;
  __t5171t____t1812t____t1642t__contents__elements=__t5171t____t1812t____t1642t____t1243t__elements;
  __t5171t____t1812t____t1642t__contents__size=__t5171t____t1812t____t1642t____t1243t__size;
  __t5171t____t1812t____t1642t__contents__allocated=__t5171t____t1812t____t1642t____t1243t__allocated;
  unsafe_free__t1219t(&__t5171t____t1812t____t1642t__contents__elements,&__t5171t____t1812t____t1642t__contents__size,&__t5171t____t1812t____t1642t__contents__allocated);
  free__t844t(&__t5170t____t1811t__BUFFERS__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t448t();
  __t_errcode=main__t5164t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}