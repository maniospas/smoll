#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2154t="created";
const char* const __t394t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
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
"invalid float conversion from string without a value after the dot"
};
int string_creator__t2168t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2274t, uint64_t* __t2275t, uint64_t* __t2276t, char* __t2277t) ;
;
static inline __attribute__((always_inline)) void console__t377t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t947t(char** __t2190t, uint64_t* __t2191t, uint16_t* __t2192t, uint16_t* __t2193t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2190t=unsafe_ptr;
  *__t2191t=unsafe_size;
  *__t2192t=unsafe_offset;
  *__t2193t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, const char* from, char** __t2194t) {
  *__t2194t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2195t) {
  int value=0;
  *__t2195t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2196t) {
  int __t40t__=0;
  false__t10t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2196t=__t40t__;
}

static inline __attribute__((always_inline)) void is_different__t105t(uint64_t x, uint64_t y, int* __t2197t) {
  int __t107t=0;
  int __t108t__=0;
  not__t39t(__t107t,&__t108t__);
  goto __t_return;
  __t_return:
  *__t2197t=__t108t__;
}

static inline __attribute__((always_inline)) void add__t186t(uint64_t x, uint64_t y, uint64_t* __t2198t) {
  int __t187t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t187t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2198t=z;
}

static inline __attribute__((always_inline)) void neq__t155t(uint64_t x, uint64_t y, char* __t2199t) {
  int __t156t__=0;
  char z=0;
  is_different__t105t(x,y,&__t156t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2199t=z;
}

static inline __attribute__((always_inline)) void ge__t335t(uint64_t x, uint64_t y, char* __t2200t) {
  int __t336t__=0;
  char z=0;
  is_different__t105t(x,y,&__t336t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2200t=z;
}

static inline __attribute__((always_inline)) void nat__t677t(uint16_t x, uint64_t* __t2201t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2201t=value;
}

static inline __attribute__((always_inline)) void mul__t210t(uint64_t x, uint64_t y, uint64_t* __t2202t) {
  int __t211t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t211t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2202t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t24t(char* to, char* from, char** __t2203t) {
  *__t2203t=to;
}

static inline __attribute__((always_inline)) void add__t675t(char* allocated, uint64_t offset, char** __t2204t) {
  char* element=0;
  char* __t676t__=0;
  element=allocated+offset;
  unsafe_attach_type__t24t(element,allocated,&__t676t__);
  goto __t_return;
  __t_return:
  *__t2204t=__t676t__;
}

static inline __attribute__((always_inline)) int get__t822t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2205t) {
  char __t823t__=0;
  uint64_t __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  char* __t828t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t335t(i,buffer__unsafe_size,&__t823t__);
  if(__t823t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t677t(buffer__unsafe_align,&__t824t__);
  mul__t210t(i,__t824t__,&__t825t__);
  nat__t677t(buffer__unsafe_offset,&__t826t__);
  add__t186t(__t825t__,__t826t__,&__t827t__);
  add__t675t(buffer__unsafe_ptr,__t827t__,&__t828t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2205t=__t828t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t966t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2206t, uint64_t* __t2207t, uint64_t* __t2208t, char* __t2209t) {
  goto __t_return;
  __t_return:
  *__t2206t=unsafe_ptr;
  *__t2207t=dat__pos;
  *__t2208t=dat__length;
  *__t2209t=dat__first;
}

static inline __attribute__((always_inline)) int str__t970t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2210t, uint64_t* __t2211t, uint64_t* __t2212t, char* __t2213t) {
  char* unsafe_ptr=0;
  uint64_t __t971t__=0;
  uint64_t __t972t=0;
  char __t973t__=0;
  uint64_t __t974t__=0;
  uint64_t __t975t=0;
  char __t976t__=0;
  char* __t977t__unsafe_ptr=0;
  uint64_t __t977t__dat__pos=0;
  uint64_t __t977t__dat__length=0;
  char __t977t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t677t(buf__unsafe_align,&__t971t__);
  __t972t=1;
  neq__t155t(__t971t__,__t972t,&__t973t__);
  if(__t973t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t677t(buf__unsafe_offset,&__t974t__);
  __t975t=0;
  neq__t155t(__t974t__,__t975t,&__t976t__);
  if(__t976t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t966t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t977t__unsafe_ptr,&__t977t__dat__pos,&__t977t__dat__length,&__t977t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2210t=__t977t__unsafe_ptr;
  *__t2211t=__t977t__dat__pos;
  *__t2212t=__t977t__dat__length;
  *__t2213t=__t977t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1004t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2214t, uint64_t* __t2215t, uint64_t* __t2216t, char* __t2217t) {
  uint64_t __t1005t=0;
  char __t1006t__=0;
  char* __t1008t__=0;
  char __t1009t__value=0;
  char first=0;
  char* __t1010t__unsafe_ptr=0;
  uint64_t __t1010t__dat__pos=0;
  uint64_t __t1010t__dat__length=0;
  char __t1010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1005t=0;
  neq__t155t(length,__t1005t,&__t1006t__);
  if(__t1006t__){
  __t_errcode=get__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1008t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1008t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1009t__value,__t1008t__,1);
  first=__t1009t__value;
  }
  __t_errcode=str__t970t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1010t__unsafe_ptr,&__t1010t__dat__pos,&__t1010t__dat__length,&__t1010t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2214t=__t1010t__unsafe_ptr;
  *__t2215t=__t1010t__dat__pos;
  *__t2216t=__t1010t__dat__length;
  *__t2217t=__t1010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1026t(const char* c, char** __t2218t, uint64_t* __t2219t, uint64_t* __t2220t, char* __t2221t) {
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__unsafe_size=0;
  uint16_t __t1027t__unsafe_offset=0;
  uint16_t __t1027t__unsafe_align=0;
  char* __t1028t__unsafe_ptr=0;
  uint64_t __t1028t__unsafe_size=0;
  uint16_t __t1028t__unsafe_offset=0;
  uint16_t __t1028t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1029t__=0;
  uint64_t length=0;
  uint64_t __t1030t=0;
  uint64_t __t1031t__=0;
  uint64_t __t1032t=0;
  char* __t1034t__unsafe_ptr=0;
  uint64_t __t1034t__dat__pos=0;
  uint64_t __t1034t__dat__length=0;
  char __t1034t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1027t__unsafe_ptr,&__t1027t__unsafe_size,&__t1027t__unsafe_offset,&__t1027t__unsafe_align);
  __t1028t__unsafe_ptr=__t1027t__unsafe_ptr;
  __t1028t__unsafe_size=__t1027t__unsafe_size;
  __t1028t__unsafe_offset=__t1027t__unsafe_offset;
  __t1028t__unsafe_align=__t1027t__unsafe_align;
  buf__unsafe_ptr=__t1028t__unsafe_ptr;
  buf__unsafe_size=__t1028t__unsafe_size;
  buf__unsafe_offset=__t1028t__unsafe_offset;
  buf__unsafe_align=__t1028t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t25t(buf__unsafe_ptr,c,&__t1029t__);
  buf__unsafe_ptr=__t1029t__;
  if(c){
  length=strlen(c);
  }
  __t1030t=1;
  add__t186t(length,__t1030t,&__t1031t__);
  buf__unsafe_size=__t1031t__;
  __t1032t=0;
  __t_errcode=str__t1004t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1032t,length,&__t1034t__unsafe_ptr,&__t1034t__dat__pos,&__t1034t__dat__length,&__t1034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2218t=__t1034t__unsafe_ptr;
  *__t2219t=__t1034t__dat__pos;
  *__t2220t=__t1034t__dat__length;
  *__t2221t=__t1034t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1035t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2222t) {
  goto __t_return;
  __t_return:
  *__t2222t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t829t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2223t) {
  goto __t_return;
  __t_return:
  *__t2223t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t287t(uint64_t x, uint64_t y, char* __t2224t) {
  int __t288t__=0;
  char z=0;
  is_different__t105t(x,y,&__t288t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2224t=z;
}

static inline __attribute__((always_inline)) void allocated__t840t(char** __t2225t, uint64_t* __t2226t, uint16_t* __t2227t, uint16_t* __t2228t, uint64_t pos, char** __t2229t, uint64_t* __t2230t, uint16_t* __t2231t, uint16_t* __t2232t, uint64_t* __t2233t) {
  char* buf__unsafe_ptr=*__t2225t;
  uint64_t buf__unsafe_size=*__t2226t;
  uint16_t buf__unsafe_offset=*__t2227t;
  uint16_t buf__unsafe_align=*__t2228t;
  goto __t_return;
  __t_return:
  *__t2225t=buf__unsafe_ptr;
  *__t2226t=buf__unsafe_size;
  *__t2227t=buf__unsafe_offset;
  *__t2228t=buf__unsafe_align;
  *__t2229t=buf__unsafe_ptr;
  *__t2230t=buf__unsafe_size;
  *__t2231t=buf__unsafe_offset;
  *__t2232t=buf__unsafe_align;
  *__t2233t=pos;
}

static inline __attribute__((always_inline)) int alloc__t872t(char** __t2234t, uint64_t* __t2235t, uint16_t* __t2236t, uint16_t* __t2237t, uint64_t* __t2238t, uint64_t length, char** __t2239t, uint64_t* __t2240t, uint16_t* __t2241t, uint16_t* __t2242t, uint64_t* __t2243t) {
  char* allocator__buf__unsafe_ptr=*__t2234t;
  uint64_t allocator__buf__unsafe_size=*__t2235t;
  uint16_t allocator__buf__unsafe_offset=*__t2236t;
  uint16_t allocator__buf__unsafe_align=*__t2237t;
  uint64_t allocator__pos=*__t2238t;
  int __t873t=0;
  uint64_t __t874t__=0;
  uint64_t next_pos=0;
  uint64_t __t875t__=0;
  char __t876t__=0;
  uint64_t __t877t=0;
  uint64_t __t878t__=0;
  uint64_t pos=0;
  char* __t879t__buf__unsafe_ptr=0;
  uint64_t __t879t__buf__unsafe_size=0;
  uint16_t __t879t__buf__unsafe_offset=0;
  uint16_t __t879t__buf__unsafe_align=0;
  uint64_t __t879t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t186t(allocator__pos,length,&__t874t__);
  next_pos=__t874t__;
  len__t829t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t875t__);
  gt__t287t(next_pos,__t875t__,&__t876t__);
  if(__t876t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t877t=0;
  add__t186t(allocator__pos,__t877t,&__t878t__);
  pos=__t878t__;
  allocator__pos=next_pos;
  allocated__t840t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t879t__buf__unsafe_ptr,&__t879t__buf__unsafe_size,&__t879t__buf__unsafe_offset,&__t879t__buf__unsafe_align,&__t879t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2234t=allocator__buf__unsafe_ptr;
  *__t2235t=allocator__buf__unsafe_size;
  *__t2236t=allocator__buf__unsafe_offset;
  *__t2237t=allocator__buf__unsafe_align;
  *__t2238t=allocator__pos;
  *__t2239t=__t879t__buf__unsafe_ptr;
  *__t2240t=__t879t__buf__unsafe_size;
  *__t2241t=__t879t__buf__unsafe_offset;
  *__t2242t=__t879t__buf__unsafe_align;
  *__t2243t=__t879t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1057t(char** __t2244t, uint64_t* __t2245t, uint16_t* __t2246t, uint16_t* __t2247t, uint64_t* __t2248t, const char* _other, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  char* CHARS__buf__unsafe_ptr=*__t2244t;
  uint64_t CHARS__buf__unsafe_size=*__t2245t;
  uint16_t CHARS__buf__unsafe_offset=*__t2246t;
  uint16_t CHARS__buf__unsafe_align=*__t2247t;
  uint64_t CHARS__pos=*__t2248t;
  char* __t1058t__unsafe_ptr=0;
  uint64_t __t1058t__dat__pos=0;
  uint64_t __t1058t__dat__length=0;
  char __t1058t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1059t__=0;
  char* __t1060t__buf__unsafe_ptr=0;
  uint64_t __t1060t__buf__unsafe_size=0;
  uint16_t __t1060t__buf__unsafe_offset=0;
  uint16_t __t1060t__buf__unsafe_align=0;
  uint64_t __t1060t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1061t__unsafe_ptr=0;
  uint64_t __t1061t__dat__pos=0;
  uint64_t __t1061t__dat__length=0;
  char __t1061t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1026t(_other,&__t1058t__unsafe_ptr,&__t1058t__dat__pos,&__t1058t__dat__length,&__t1058t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1058t__unsafe_ptr;
  other__dat__pos=__t1058t__dat__pos;
  other__dat__length=__t1058t__dat__length;
  other__dat__first=__t1058t__dat__first;
  len__t1035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1059t__);
  __t_errcode=alloc__t872t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1059t__,&__t1060t__buf__unsafe_ptr,&__t1060t__buf__unsafe_size,&__t1060t__buf__unsafe_offset,&__t1060t__buf__unsafe_align,&__t1060t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1060t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1060t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1060t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1060t__buf__unsafe_align;
  surface__pos=__t1060t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t970t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1061t__unsafe_ptr,&__t1061t__dat__pos,&__t1061t__dat__length,&__t1061t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2244t=CHARS__buf__unsafe_ptr;
  *__t2245t=CHARS__buf__unsafe_size;
  *__t2246t=CHARS__buf__unsafe_offset;
  *__t2247t=CHARS__buf__unsafe_align;
  *__t2248t=CHARS__pos;
  *__t2249t=__t1061t__unsafe_ptr;
  *__t2250t=__t1061t__dat__pos;
  *__t2251t=__t1061t__dat__length;
  *__t2252t=__t1061t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____buffer__t2156t(char** __t2253t, uint64_t* __t2254t, uint16_t* __t2255t, uint16_t* __t2256t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2253t=unsafe_ptr;
  *__t2254t=unsafe_size;
  *__t2255t=unsafe_offset;
  *__t2256t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t603t(char* x, char* __t2257t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2257t=z;
}

static inline __attribute__((always_inline)) void free__t673t(char** __t2258t) {
  char* allocated=*__t2258t;
  if(allocated){
  free(allocated);
  }
  *__t2258t=allocated;
}

static inline __attribute__((always_inline)) void eq__t131t(uint64_t x, uint64_t y, char* __t2259t) {
  int __t132t__=0;
  char z=0;
  is_different__t105t(x,y,&__t132t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2259t=z;
}

static inline __attribute__((always_inline)) void zero__t674t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t30t(char value, char* __t2260t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2260t=z;
}

static inline __attribute__((always_inline)) int alloc__t666t(uint64_t bytes, char** __t2261t) {
  char* allocated=0;
  char __t667t__=0;
  char __t668t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t603t(allocated,&__t667t__);
  not__t30t(__t667t__,&__t668t__);
  if(__t668t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2261t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t702t(char** __t2262t, uint64_t* __t2263t, uint16_t* __t2264t, uint16_t* __t2265t, uint64_t size, char** __t2266t, uint64_t* __t2267t, uint16_t* __t2268t, uint16_t* __t2269t) {
  char* buffer__unsafe_ptr=*__t2262t;
  uint64_t buffer__unsafe_size=*__t2263t;
  uint16_t buffer__unsafe_offset=*__t2264t;
  uint16_t buffer__unsafe_align=*__t2265t;
  int __t703t=0;
  char __t704t__=0;
  char __t706t__=0;
  uint64_t __t707t=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  uint64_t __t710t__=0;
  uint64_t __t711t__=0;
  uint64_t __t713t=0;
  char __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t bytes=0;
  uint64_t __t717t=0;
  char __t718t__=0;
  char* __t719t__=0;
  int __t720t=0;
  uint64_t __t721t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t131t(buffer__unsafe_size,size,&__t706t__);
  if(__t706t__){
  __t707t=0;
  neq__t155t(size,__t707t,&__t708t__);
  if(__t708t__){
  __t709t=0;
  nat__t677t(buffer__unsafe_align,&__t710t__);
  mul__t210t(__t710t__,size,&__t711t__);
  zero__t674t(buffer__unsafe_ptr,__t709t,__t711t__);
  }
  goto __t_return;
  }
  __t713t=0;
  neq__t155t(buffer__unsafe_size,__t713t,&__t714t__);
  if(__t714t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t677t(buffer__unsafe_align,&__t715t__);
  mul__t210t(__t715t__,size,&__t716t__);
  bytes=__t716t__;
  __t717t=0;
  eq__t131t(bytes,__t717t,&__t718t__);
  if(__t718t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t666t(bytes,&__t719t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t721t=0;
  zero__t674t(__t719t__,__t721t,bytes);
  buffer__unsafe_ptr=__t719t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t603t(buffer__unsafe_ptr,&__t704t__);
  if(__t704t__){
  free__t673t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2262t=buffer__unsafe_ptr;
  *__t2263t=buffer__unsafe_size;
  *__t2264t=buffer__unsafe_offset;
  *__t2265t=buffer__unsafe_align;
  *__t2266t=buffer__unsafe_ptr;
  *__t2267t=buffer__unsafe_size;
  *__t2268t=buffer__unsafe_offset;
  *__t2269t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int string_creator__t2153t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2270t, uint64_t* __t2271t, uint64_t* __t2272t, char* __t2273t) {
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2155t__unsafe_ptr=0;
  uint64_t __t2155t__dat__pos=0;
  uint64_t __t2155t__dat__length=0;
  char __t2155t__dat__first=0;
  char* __t2158t__unsafe_ptr=0;
  uint64_t __t2158t__unsafe_size=0;
  uint16_t __t2158t__unsafe_offset=0;
  uint16_t __t2158t__unsafe_align=0;
  uint64_t __t2159t=0;
  char* __t2160t__unsafe_ptr=0;
  uint64_t __t2160t__unsafe_size=0;
  uint16_t __t2160t__unsafe_offset=0;
  uint16_t __t2160t__unsafe_align=0;
  char __t2161t____t704t__=0;
  char* strings__unsafe_ptr=0;
  uint64_t strings__unsafe_size=0;
  uint16_t strings__unsafe_offset=0;
  uint16_t strings__unsafe_align=0;
  uint64_t __t2162t=0;
  char* __t2164t__=0;
  char* __t2165t__unsafe_ptr=0;
  uint64_t __t2165t__dat__pos=0;
  uint64_t __t2165t__dat__length=0;
  char __t2165t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  CHARS__buf__unsafe_ptr=_CHARS__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=_CHARS__buf__unsafe_size;
  CHARS__buf__unsafe_offset=_CHARS__buf__unsafe_offset;
  CHARS__buf__unsafe_align=_CHARS__buf__unsafe_align;
  CHARS__pos=_CHARS__pos;
  __t_errcode=copy__t1057t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2154t,&__t2155t__unsafe_ptr,&__t2155t__dat__pos,&__t2155t__dat__length,&__t2155t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str____buffer__t2156t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align);
  __t2159t=1;
  __t_errcode=alloc__t702t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align,__t2159t,&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2158t__unsafe_ptr,&__t2155t__unsafe_ptr,8);
  memcpy(__t2158t__unsafe_ptr+8,&__t2155t__dat__pos,8);
  memcpy(__t2158t__unsafe_ptr+16,&__t2155t__dat__length,8);
  memcpy(__t2158t__unsafe_ptr+24,&__t2155t__dat__first,1);
  strings__unsafe_ptr=__t2158t__unsafe_ptr;
  strings__unsafe_size=__t2158t__unsafe_size;
  strings__unsafe_offset=__t2158t__unsafe_offset;
  strings__unsafe_align=__t2158t__unsafe_align;
  __t2162t=0;
  __t_errcode=get__t822t(strings__unsafe_ptr,strings__unsafe_size,strings__unsafe_offset,strings__unsafe_align,__t2162t,&__t2164t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2164t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2165t__unsafe_ptr,__t2164t__,8);
  memcpy(&__t2165t__dat__pos,__t2164t__+8,8);
  memcpy(&__t2165t__dat__length,__t2164t__+16,8);
  memcpy(&__t2165t__dat__first,__t2164t__+24,1);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2270t=__t2165t__unsafe_ptr;
  *__t2271t=__t2165t__dat__pos;
  *__t2272t=__t2165t__dat__length;
  *__t2273t=__t2165t__dat__first;
  
  __t_skip_returns:exists__t603t(__t2160t__unsafe_ptr,&__t2161t____t704t__);
  if(__t2161t____t704t__){
  free__t673t(&__t2160t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int string_creator__t2168t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2274t, uint64_t* __t2275t, uint64_t* __t2276t, char* __t2277t) {
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__dat__pos=0;
  uint64_t __t2169t__dat__length=0;
  char __t2169t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=string_creator__t2153t(_CHARS__buf__unsafe_ptr,_CHARS__buf__unsafe_size,_CHARS__buf__unsafe_offset,_CHARS__buf__unsafe_align,_CHARS__pos,&__t2169t__unsafe_ptr,&__t2169t__dat__pos,&__t2169t__dat__length,&__t2169t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2274t=__t2169t__unsafe_ptr;
  *__t2275t=__t2169t__dat__pos;
  *__t2276t=__t2169t__dat__length;
  *__t2277t=__t2169t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2140t(char** __t2278t, uint64_t* __t2279t, uint16_t* __t2280t, uint16_t* __t2281t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2278t=unsafe_ptr;
  *__t2279t=unsafe_size;
  *__t2280t=unsafe_offset;
  *__t2281t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t2282t, uint64_t* __t2283t, uint16_t* __t2284t, uint16_t* __t2285t, uint64_t _pos, char** __t2286t, uint64_t* __t2287t, uint16_t* __t2288t, uint16_t* __t2289t, uint64_t* __t2290t) {
  char* buf__unsafe_ptr=*__t2282t;
  uint64_t buf__unsafe_size=*__t2283t;
  uint16_t buf__unsafe_offset=*__t2284t;
  uint16_t buf__unsafe_align=*__t2285t;
  uint64_t __t835t=0;
  uint64_t pos=0;
  __t835t=_pos;
  pos=__t835t;
  goto __t_return;
  __t_return:
  *__t2282t=buf__unsafe_ptr;
  *__t2283t=buf__unsafe_size;
  *__t2284t=buf__unsafe_offset;
  *__t2285t=buf__unsafe_align;
  *__t2286t=buf__unsafe_ptr;
  *__t2287t=buf__unsafe_size;
  *__t2288t=buf__unsafe_offset;
  *__t2289t=buf__unsafe_align;
  *__t2290t=pos;
}

static inline __attribute__((always_inline)) void arena__t837t(char** __t2291t, uint64_t* __t2292t, uint16_t* __t2293t, uint16_t* __t2294t, char** __t2295t, uint64_t* __t2296t, uint16_t* __t2297t, uint16_t* __t2298t, uint64_t* __t2299t) {
  char* buf__unsafe_ptr=*__t2291t;
  uint64_t buf__unsafe_size=*__t2292t;
  uint16_t buf__unsafe_offset=*__t2293t;
  uint16_t buf__unsafe_align=*__t2294t;
  uint64_t __t838t=0;
  char* __t839t__buf__unsafe_ptr=0;
  uint64_t __t839t__buf__unsafe_size=0;
  uint16_t __t839t__buf__unsafe_offset=0;
  uint16_t __t839t__buf__unsafe_align=0;
  uint64_t __t839t__pos=0;
  __t838t=0;
  arena__t834t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t838t,&__t839t__buf__unsafe_ptr,&__t839t__buf__unsafe_size,&__t839t__buf__unsafe_offset,&__t839t__buf__unsafe_align,&__t839t__pos);
  goto __t_return;
  __t_return:
  *__t2291t=buf__unsafe_ptr;
  *__t2292t=buf__unsafe_size;
  *__t2293t=buf__unsafe_offset;
  *__t2294t=buf__unsafe_align;
  *__t2295t=__t839t__buf__unsafe_ptr;
  *__t2296t=__t839t__buf__unsafe_size;
  *__t2297t=__t839t__buf__unsafe_offset;
  *__t2298t=__t839t__buf__unsafe_align;
  *__t2299t=__t839t__pos;
}

static inline __attribute__((always_inline)) void _arena______str___t2138t(__smoll_func_ptr_type* __t2300t) {
  __smoll_func_ptr_type value=0;
  *__t2300t=value;
}



static inline __attribute__((always_inline)) void new__t830t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str__t1003t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2301t, uint64_t* __t2302t, uint64_t* __t2303t, char* __t2304t) {
  goto __t_return;
  __t_return:
  *__t2301t=other__unsafe_ptr;
  *__t2302t=other__dat__pos;
  *__t2303t=other__dat__length;
  *__t2304t=other__dat__first;
}

int alloc__t958t(uint64_t length, char** __t2305t, uint64_t* __t2306t, uint16_t* __t2307t, uint16_t* __t2308t, uint64_t* __t2309t) {
  char* __t959t__unsafe_ptr=0;
  uint64_t __t959t__unsafe_size=0;
  uint16_t __t959t__unsafe_offset=0;
  uint16_t __t959t__unsafe_align=0;
  char* __t960t__unsafe_ptr=0;
  uint64_t __t960t__unsafe_size=0;
  uint16_t __t960t__unsafe_offset=0;
  uint16_t __t960t__unsafe_align=0;
  char __t961t____t704t__=0;
  uint64_t __t962t=0;
  char* __t963t__buf__unsafe_ptr=0;
  uint64_t __t963t__buf__unsafe_size=0;
  uint16_t __t963t__buf__unsafe_offset=0;
  uint16_t __t963t__buf__unsafe_align=0;
  uint64_t __t963t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t959t__unsafe_ptr,&__t959t__unsafe_size,&__t959t__unsafe_offset,&__t959t__unsafe_align);
  __t_errcode=alloc__t702t(&__t959t__unsafe_ptr,&__t959t__unsafe_size,&__t959t__unsafe_offset,&__t959t__unsafe_align,length,&__t960t__unsafe_ptr,&__t960t__unsafe_size,&__t960t__unsafe_offset,&__t960t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t962t=0;
  allocated__t840t(&__t960t__unsafe_ptr,&__t960t__unsafe_size,&__t960t__unsafe_offset,&__t960t__unsafe_align,__t962t,&__t963t__buf__unsafe_ptr,&__t963t__buf__unsafe_size,&__t963t__buf__unsafe_offset,&__t963t__buf__unsafe_align,&__t963t__pos);
  goto __t_return;
  
  __t_failure:exists__t603t(__t963t__buf__unsafe_ptr,&__t961t____t704t__);
  if(__t961t____t704t__){
  free__t673t(&__t963t__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2305t=__t963t__buf__unsafe_ptr;
  *__t2306t=__t963t__buf__unsafe_size;
  *__t2307t=__t963t__buf__unsafe_offset;
  *__t2308t=__t963t__buf__unsafe_align;
  *__t2309t=__t963t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1040t(char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2310t, uint64_t* __t2311t, uint64_t* __t2312t, char* __t2313t) {
  char* __t1041t__unsafe_ptr=0;
  uint64_t __t1041t__dat__pos=0;
  uint64_t __t1041t__dat__length=0;
  char __t1041t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1042t__=0;
  char* __t1043t__buf__unsafe_ptr=0;
  uint64_t __t1043t__buf__unsafe_size=0;
  uint16_t __t1043t__buf__unsafe_offset=0;
  uint16_t __t1043t__buf__unsafe_align=0;
  uint64_t __t1043t__pos=0;
  char __t1044t____t961t____t704t__=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__dat__pos=0;
  uint64_t __t1045t__dat__length=0;
  char __t1045t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1003t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1041t__unsafe_ptr,&__t1041t__dat__pos,&__t1041t__dat__length,&__t1041t__dat__first);
  other__unsafe_ptr=__t1041t__unsafe_ptr;
  other__dat__pos=__t1041t__dat__pos;
  other__dat__length=__t1041t__dat__length;
  other__dat__first=__t1041t__dat__first;
  len__t1035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1042t__);
  __t_errcode=alloc__t958t(__t1042t__,&__t1043t__buf__unsafe_ptr,&__t1043t__buf__unsafe_size,&__t1043t__buf__unsafe_offset,&__t1043t__buf__unsafe_align,&__t1043t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1043t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1043t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1043t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1043t__buf__unsafe_align;
  surface__pos=__t1043t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t970t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1045t__unsafe_ptr,&__t1045t__dat__pos,&__t1045t__dat__length,&__t1045t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t603t(__t1045t__unsafe_ptr,&__t1044t____t961t____t704t__);
  if(__t1044t____t961t____t704t__){
  free__t673t(&__t1045t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2310t=__t1045t__unsafe_ptr;
  *__t2311t=__t1045t__dat__pos;
  *__t2312t=__t1045t__dat__length;
  *__t2313t=__t1045t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t2139t(__smoll_func_ptr_type creator, char** __t2314t, uint64_t* __t2315t, uint64_t* __t2316t, char* __t2317t) {
  char* __t2142t__unsafe_ptr=0;
  uint64_t __t2142t__unsafe_size=0;
  uint16_t __t2142t__unsafe_offset=0;
  uint16_t __t2142t__unsafe_align=0;
  uint64_t __t2143t=0;
  char* __t2144t__unsafe_ptr=0;
  uint64_t __t2144t__unsafe_size=0;
  uint16_t __t2144t__unsafe_offset=0;
  uint16_t __t2144t__unsafe_align=0;
  char __t2145t____t704t__=0;
  char* __t2146t__buf__unsafe_ptr=0;
  uint64_t __t2146t__buf__unsafe_size=0;
  uint16_t __t2146t__buf__unsafe_offset=0;
  uint16_t __t2146t__buf__unsafe_align=0;
  uint64_t __t2146t__pos=0;
  char* __t2147t__buf__unsafe_ptr=0;
  uint64_t __t2147t__buf__unsafe_size=0;
  uint16_t __t2147t__buf__unsafe_offset=0;
  uint16_t __t2147t__buf__unsafe_align=0;
  uint64_t __t2147t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2149t____t2134t=0;
  uint64_t __t2149t____t2135t=0;
  uint64_t __t2149t____t2136t=0;
  char __t2149t____t2137t=0;
  char* ret__t2134t=0;
  uint64_t ret__t2135t=0;
  uint64_t ret__t2136t=0;
  char ret__t2137t=0;
  char* __t2151t__unsafe_ptr=0;
  uint64_t __t2151t__dat__pos=0;
  uint64_t __t2151t__dat__length=0;
  char __t2151t__dat__first=0;
  char __t2152t____t1044t____t961t____t704t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2140t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align);
  __t2143t=128;
  __t_errcode=alloc__t702t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align,__t2143t,&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t837t(&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align,&__t2146t__buf__unsafe_ptr,&__t2146t__buf__unsafe_size,&__t2146t__buf__unsafe_offset,&__t2146t__buf__unsafe_align,&__t2146t__pos);
  __t2147t__buf__unsafe_ptr=__t2146t__buf__unsafe_ptr;
  __t2147t__buf__unsafe_size=__t2146t__buf__unsafe_size;
  __t2147t__buf__unsafe_offset=__t2146t__buf__unsafe_offset;
  __t2147t__buf__unsafe_align=__t2146t__buf__unsafe_align;
  __t2147t__pos=__t2146t__pos;
  CHARS__buf__unsafe_ptr=__t2147t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2147t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2147t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2147t__buf__unsafe_align;
  CHARS__pos=__t2147t__pos;
  if(!creator){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(char* , uint64_t , uint16_t , uint16_t , uint64_t , char** , uint64_t* , uint64_t* , char* ))creator)(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t2149t____t2134t,&__t2149t____t2135t,&__t2149t____t2136t,&__t2149t____t2137t);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__t2134t=__t2149t____t2134t;
  ret__t2135t=__t2149t____t2135t;
  ret__t2136t=__t2149t____t2136t;
  ret__t2137t=__t2149t____t2137t;
  new__t830t();
  __t_errcode=copy__t1040t(ret__t2134t,ret__t2135t,ret__t2136t,ret__t2137t,&__t2151t__unsafe_ptr,&__t2151t__dat__pos,&__t2151t__dat__length,&__t2151t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t603t(__t2151t__unsafe_ptr,&__t2152t____t1044t____t961t____t704t__);
  if(__t2152t____t1044t____t961t____t704t__){
  free__t673t(&__t2151t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2314t=__t2151t__unsafe_ptr;
  *__t2315t=__t2151t__dat__pos;
  *__t2316t=__t2151t__dat__length;
  *__t2317t=__t2151t__dat__first;
  
  __t_skip_returns:exists__t603t(__t2144t__unsafe_ptr,&__t2145t____t704t__);
  if(__t2145t____t704t__){
  free__t673t(&__t2144t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1159t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1160t=0;
  const char* endl=0;
  endl=__t394t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2166t() {
  __smoll_func_ptr_type __t2172t=0;
  char* __t2187t__unsafe_ptr=0;
  uint64_t __t2187t__dat__pos=0;
  uint64_t __t2187t__dat__length=0;
  char __t2187t__dat__first=0;
  char __t2188t____t2152t____t1044t____t961t____t704t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t377t();
  __t2172t=(__smoll_func_ptr_type)string_creator__t2168t;
  __t_errcode=test__t2139t(__t2172t,&__t2187t__unsafe_ptr,&__t2187t__dat__pos,&__t2187t__dat__length,&__t2187t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1159t(__t2187t__unsafe_ptr,__t2187t__dat__pos,__t2187t__dat__length,__t2187t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t603t(__t2187t__unsafe_ptr,&__t2188t____t2152t____t1044t____t961t____t704t__);
  if(__t2188t____t2152t____t1044t____t961t____t704t__){
  free__t673t(&__t2187t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2166t();return 0;}