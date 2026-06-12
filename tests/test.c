#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2150t="created";
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
int string_creator__t2164t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2269t, uint64_t* __t2270t, uint64_t* __t2271t, char* __t2272t) ;
;
static inline __attribute__((always_inline)) void console__t377t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t947t(char** __t2185t, uint64_t* __t2186t, uint16_t* __t2187t, uint16_t* __t2188t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2185t=unsafe_ptr;
  *__t2186t=unsafe_size;
  *__t2187t=unsafe_offset;
  *__t2188t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, const char* from, char** __t2189t) {
  *__t2189t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2190t) {
  int value=0;
  *__t2190t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2191t) {
  int __t40t__=0;
  false__t10t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2191t=__t40t__;
}

static inline __attribute__((always_inline)) void is_different__t105t(uint64_t x, uint64_t y, int* __t2192t) {
  int __t107t=0;
  int __t108t__=0;
  not__t39t(__t107t,&__t108t__);
  goto __t_return;
  __t_return:
  *__t2192t=__t108t__;
}

static inline __attribute__((always_inline)) void add__t186t(uint64_t x, uint64_t y, uint64_t* __t2193t) {
  int __t187t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t187t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2193t=z;
}

static inline __attribute__((always_inline)) void neq__t155t(uint64_t x, uint64_t y, char* __t2194t) {
  int __t156t__=0;
  char z=0;
  is_different__t105t(x,y,&__t156t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2194t=z;
}

static inline __attribute__((always_inline)) void ge__t335t(uint64_t x, uint64_t y, char* __t2195t) {
  int __t336t__=0;
  char z=0;
  is_different__t105t(x,y,&__t336t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2195t=z;
}

static inline __attribute__((always_inline)) void nat__t677t(uint16_t x, uint64_t* __t2196t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2196t=value;
}

static inline __attribute__((always_inline)) void mul__t210t(uint64_t x, uint64_t y, uint64_t* __t2197t) {
  int __t211t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t211t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2197t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t24t(char* to, char* from, char** __t2198t) {
  *__t2198t=to;
}

static inline __attribute__((always_inline)) void add__t675t(char* allocated, uint64_t offset, char** __t2199t) {
  char* element=0;
  char* __t676t__=0;
  element=allocated+offset;
  unsafe_attach_type__t24t(element,allocated,&__t676t__);
  goto __t_return;
  __t_return:
  *__t2199t=__t676t__;
}

static inline __attribute__((always_inline)) int get__t822t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2200t) {
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
  *__t2200t=__t828t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t966t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2201t, uint64_t* __t2202t, uint64_t* __t2203t, char* __t2204t) {
  goto __t_return;
  __t_return:
  *__t2201t=unsafe_ptr;
  *__t2202t=dat__pos;
  *__t2203t=dat__length;
  *__t2204t=dat__first;
}

static inline __attribute__((always_inline)) int str__t970t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2205t, uint64_t* __t2206t, uint64_t* __t2207t, char* __t2208t) {
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
  *__t2205t=__t977t__unsafe_ptr;
  *__t2206t=__t977t__dat__pos;
  *__t2207t=__t977t__dat__length;
  *__t2208t=__t977t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1004t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2209t, uint64_t* __t2210t, uint64_t* __t2211t, char* __t2212t) {
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
  *__t2209t=__t1010t__unsafe_ptr;
  *__t2210t=__t1010t__dat__pos;
  *__t2211t=__t1010t__dat__length;
  *__t2212t=__t1010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1026t(const char* c, char** __t2213t, uint64_t* __t2214t, uint64_t* __t2215t, char* __t2216t) {
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
  *__t2213t=__t1034t__unsafe_ptr;
  *__t2214t=__t1034t__dat__pos;
  *__t2215t=__t1034t__dat__length;
  *__t2216t=__t1034t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1035t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2217t) {
  goto __t_return;
  __t_return:
  *__t2217t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t829t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2218t) {
  goto __t_return;
  __t_return:
  *__t2218t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t287t(uint64_t x, uint64_t y, char* __t2219t) {
  int __t288t__=0;
  char z=0;
  is_different__t105t(x,y,&__t288t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2219t=z;
}

static inline __attribute__((always_inline)) void allocated__t840t(char** __t2220t, uint64_t* __t2221t, uint16_t* __t2222t, uint16_t* __t2223t, uint64_t pos, char** __t2224t, uint64_t* __t2225t, uint16_t* __t2226t, uint16_t* __t2227t, uint64_t* __t2228t) {
  char* buf__unsafe_ptr=*__t2220t;
  uint64_t buf__unsafe_size=*__t2221t;
  uint16_t buf__unsafe_offset=*__t2222t;
  uint16_t buf__unsafe_align=*__t2223t;
  goto __t_return;
  __t_return:
  *__t2220t=buf__unsafe_ptr;
  *__t2221t=buf__unsafe_size;
  *__t2222t=buf__unsafe_offset;
  *__t2223t=buf__unsafe_align;
  *__t2224t=buf__unsafe_ptr;
  *__t2225t=buf__unsafe_size;
  *__t2226t=buf__unsafe_offset;
  *__t2227t=buf__unsafe_align;
  *__t2228t=pos;
}

static inline __attribute__((always_inline)) int alloc__t872t(char** __t2229t, uint64_t* __t2230t, uint16_t* __t2231t, uint16_t* __t2232t, uint64_t* __t2233t, uint64_t length, char** __t2234t, uint64_t* __t2235t, uint16_t* __t2236t, uint16_t* __t2237t, uint64_t* __t2238t) {
  char* allocator__buf__unsafe_ptr=*__t2229t;
  uint64_t allocator__buf__unsafe_size=*__t2230t;
  uint16_t allocator__buf__unsafe_offset=*__t2231t;
  uint16_t allocator__buf__unsafe_align=*__t2232t;
  uint64_t allocator__pos=*__t2233t;
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
  *__t2229t=allocator__buf__unsafe_ptr;
  *__t2230t=allocator__buf__unsafe_size;
  *__t2231t=allocator__buf__unsafe_offset;
  *__t2232t=allocator__buf__unsafe_align;
  *__t2233t=allocator__pos;
  *__t2234t=__t879t__buf__unsafe_ptr;
  *__t2235t=__t879t__buf__unsafe_size;
  *__t2236t=__t879t__buf__unsafe_offset;
  *__t2237t=__t879t__buf__unsafe_align;
  *__t2238t=__t879t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1057t(char** __t2239t, uint64_t* __t2240t, uint16_t* __t2241t, uint16_t* __t2242t, uint64_t* __t2243t, const char* _other, char** __t2244t, uint64_t* __t2245t, uint64_t* __t2246t, char* __t2247t) {
  char* CHARS__buf__unsafe_ptr=*__t2239t;
  uint64_t CHARS__buf__unsafe_size=*__t2240t;
  uint16_t CHARS__buf__unsafe_offset=*__t2241t;
  uint16_t CHARS__buf__unsafe_align=*__t2242t;
  uint64_t CHARS__pos=*__t2243t;
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
  *__t2239t=CHARS__buf__unsafe_ptr;
  *__t2240t=CHARS__buf__unsafe_size;
  *__t2241t=CHARS__buf__unsafe_offset;
  *__t2242t=CHARS__buf__unsafe_align;
  *__t2243t=CHARS__pos;
  *__t2244t=__t1061t__unsafe_ptr;
  *__t2245t=__t1061t__dat__pos;
  *__t2246t=__t1061t__dat__length;
  *__t2247t=__t1061t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str____buffer__t2152t(char** __t2248t, uint64_t* __t2249t, uint16_t* __t2250t, uint16_t* __t2251t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2248t=unsafe_ptr;
  *__t2249t=unsafe_size;
  *__t2250t=unsafe_offset;
  *__t2251t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t603t(char* x, char* __t2252t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2252t=z;
}

static inline __attribute__((always_inline)) void free__t673t(char** __t2253t) {
  char* allocated=*__t2253t;
  if(allocated){
  free(allocated);
  }
  *__t2253t=allocated;
}

static inline __attribute__((always_inline)) void eq__t131t(uint64_t x, uint64_t y, char* __t2254t) {
  int __t132t__=0;
  char z=0;
  is_different__t105t(x,y,&__t132t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2254t=z;
}

static inline __attribute__((always_inline)) void zero__t674t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t30t(char value, char* __t2255t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2255t=z;
}

static inline __attribute__((always_inline)) int alloc__t666t(uint64_t bytes, char** __t2256t) {
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
  *__t2256t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t702t(char** __t2257t, uint64_t* __t2258t, uint16_t* __t2259t, uint16_t* __t2260t, uint64_t size, char** __t2261t, uint64_t* __t2262t, uint16_t* __t2263t, uint16_t* __t2264t) {
  char* buffer__unsafe_ptr=*__t2257t;
  uint64_t buffer__unsafe_size=*__t2258t;
  uint16_t buffer__unsafe_offset=*__t2259t;
  uint16_t buffer__unsafe_align=*__t2260t;
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
  *__t2257t=buffer__unsafe_ptr;
  *__t2258t=buffer__unsafe_size;
  *__t2259t=buffer__unsafe_offset;
  *__t2260t=buffer__unsafe_align;
  *__t2261t=buffer__unsafe_ptr;
  *__t2262t=buffer__unsafe_size;
  *__t2263t=buffer__unsafe_offset;
  *__t2264t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int string_creator__t2149t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2265t, uint64_t* __t2266t, uint64_t* __t2267t, char* __t2268t) {
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2151t__unsafe_ptr=0;
  uint64_t __t2151t__dat__pos=0;
  uint64_t __t2151t__dat__length=0;
  char __t2151t__dat__first=0;
  char* __t2154t__unsafe_ptr=0;
  uint64_t __t2154t__unsafe_size=0;
  uint16_t __t2154t__unsafe_offset=0;
  uint16_t __t2154t__unsafe_align=0;
  uint64_t __t2155t=0;
  char* __t2156t__unsafe_ptr=0;
  uint64_t __t2156t__unsafe_size=0;
  uint16_t __t2156t__unsafe_offset=0;
  uint16_t __t2156t__unsafe_align=0;
  char __t2157t____t704t__=0;
  char* strings__unsafe_ptr=0;
  uint64_t strings__unsafe_size=0;
  uint16_t strings__unsafe_offset=0;
  uint16_t strings__unsafe_align=0;
  uint64_t __t2158t=0;
  char* __t2160t__=0;
  char* __t2161t__unsafe_ptr=0;
  uint64_t __t2161t__dat__pos=0;
  uint64_t __t2161t__dat__length=0;
  char __t2161t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  CHARS__buf__unsafe_ptr=_CHARS__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=_CHARS__buf__unsafe_size;
  CHARS__buf__unsafe_offset=_CHARS__buf__unsafe_offset;
  CHARS__buf__unsafe_align=_CHARS__buf__unsafe_align;
  CHARS__pos=_CHARS__pos;
  __t_errcode=copy__t1057t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2150t,&__t2151t__unsafe_ptr,&__t2151t__dat__pos,&__t2151t__dat__length,&__t2151t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str____buffer__t2152t(&__t2154t__unsafe_ptr,&__t2154t__unsafe_size,&__t2154t__unsafe_offset,&__t2154t__unsafe_align);
  __t2155t=1;
  __t_errcode=alloc__t702t(&__t2154t__unsafe_ptr,&__t2154t__unsafe_size,&__t2154t__unsafe_offset,&__t2154t__unsafe_align,__t2155t,&__t2156t__unsafe_ptr,&__t2156t__unsafe_size,&__t2156t__unsafe_offset,&__t2156t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2154t__unsafe_ptr,&__t2151t__unsafe_ptr,8);
  memcpy(__t2154t__unsafe_ptr+8,&__t2151t__dat__pos,8);
  memcpy(__t2154t__unsafe_ptr+16,&__t2151t__dat__length,8);
  memcpy(__t2154t__unsafe_ptr+24,&__t2151t__dat__first,1);
  strings__unsafe_ptr=__t2154t__unsafe_ptr;
  strings__unsafe_size=__t2154t__unsafe_size;
  strings__unsafe_offset=__t2154t__unsafe_offset;
  strings__unsafe_align=__t2154t__unsafe_align;
  __t2158t=0;
  __t_errcode=get__t822t(strings__unsafe_ptr,strings__unsafe_size,strings__unsafe_offset,strings__unsafe_align,__t2158t,&__t2160t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2160t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2161t__unsafe_ptr,__t2160t__,8);
  memcpy(&__t2161t__dat__pos,__t2160t__+8,8);
  memcpy(&__t2161t__dat__length,__t2160t__+16,8);
  memcpy(&__t2161t__dat__first,__t2160t__+24,1);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2265t=__t2161t__unsafe_ptr;
  *__t2266t=__t2161t__dat__pos;
  *__t2267t=__t2161t__dat__length;
  *__t2268t=__t2161t__dat__first;
  
  __t_skip_returns:exists__t603t(__t2156t__unsafe_ptr,&__t2157t____t704t__);
  if(__t2157t____t704t__){
  free__t673t(&__t2156t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int string_creator__t2164t(char* _CHARS__buf__unsafe_ptr, uint64_t _CHARS__buf__unsafe_size, uint16_t _CHARS__buf__unsafe_offset, uint16_t _CHARS__buf__unsafe_align, uint64_t _CHARS__pos, char** __t2269t, uint64_t* __t2270t, uint64_t* __t2271t, char* __t2272t) {
  char* __t2165t__unsafe_ptr=0;
  uint64_t __t2165t__dat__pos=0;
  uint64_t __t2165t__dat__length=0;
  char __t2165t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=string_creator__t2149t(_CHARS__buf__unsafe_ptr,_CHARS__buf__unsafe_size,_CHARS__buf__unsafe_offset,_CHARS__buf__unsafe_align,_CHARS__pos,&__t2165t__unsafe_ptr,&__t2165t__dat__pos,&__t2165t__dat__length,&__t2165t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2269t=__t2165t__unsafe_ptr;
  *__t2270t=__t2165t__dat__pos;
  *__t2271t=__t2165t__dat__length;
  *__t2272t=__t2165t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2140t(char** __t2273t, uint64_t* __t2274t, uint16_t* __t2275t, uint16_t* __t2276t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2273t=unsafe_ptr;
  *__t2274t=unsafe_size;
  *__t2275t=unsafe_offset;
  *__t2276t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t2277t, uint64_t* __t2278t, uint16_t* __t2279t, uint16_t* __t2280t, uint64_t _pos, char** __t2281t, uint64_t* __t2282t, uint16_t* __t2283t, uint16_t* __t2284t, uint64_t* __t2285t) {
  char* buf__unsafe_ptr=*__t2277t;
  uint64_t buf__unsafe_size=*__t2278t;
  uint16_t buf__unsafe_offset=*__t2279t;
  uint16_t buf__unsafe_align=*__t2280t;
  uint64_t __t835t=0;
  uint64_t pos=0;
  __t835t=_pos;
  pos=__t835t;
  goto __t_return;
  __t_return:
  *__t2277t=buf__unsafe_ptr;
  *__t2278t=buf__unsafe_size;
  *__t2279t=buf__unsafe_offset;
  *__t2280t=buf__unsafe_align;
  *__t2281t=buf__unsafe_ptr;
  *__t2282t=buf__unsafe_size;
  *__t2283t=buf__unsafe_offset;
  *__t2284t=buf__unsafe_align;
  *__t2285t=pos;
}

static inline __attribute__((always_inline)) void arena__t837t(char** __t2286t, uint64_t* __t2287t, uint16_t* __t2288t, uint16_t* __t2289t, char** __t2290t, uint64_t* __t2291t, uint16_t* __t2292t, uint16_t* __t2293t, uint64_t* __t2294t) {
  char* buf__unsafe_ptr=*__t2286t;
  uint64_t buf__unsafe_size=*__t2287t;
  uint16_t buf__unsafe_offset=*__t2288t;
  uint16_t buf__unsafe_align=*__t2289t;
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
  *__t2286t=buf__unsafe_ptr;
  *__t2287t=buf__unsafe_size;
  *__t2288t=buf__unsafe_offset;
  *__t2289t=buf__unsafe_align;
  *__t2290t=__t839t__buf__unsafe_ptr;
  *__t2291t=__t839t__buf__unsafe_size;
  *__t2292t=__t839t__buf__unsafe_offset;
  *__t2293t=__t839t__buf__unsafe_align;
  *__t2294t=__t839t__pos;
}

static inline __attribute__((always_inline)) void _arena______str___t2138t(__smoll_func_ptr_type* __t2295t) {
  __smoll_func_ptr_type value=0;
  *__t2295t=value;
}



static inline __attribute__((always_inline)) int test__t2139t(__smoll_func_ptr_type creator, char** __t2296t, uint64_t* __t2297t, uint64_t* __t2298t, char* __t2299t) {
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
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2148t____t2134t=0;
  uint64_t __t2148t____t2135t=0;
  uint64_t __t2148t____t2136t=0;
  char __t2148t____t2137t=0;
  char* ret__t2134t=0;
  uint64_t ret__t2135t=0;
  uint64_t ret__t2136t=0;
  char ret__t2137t=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2140t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align);
  __t2143t=128;
  __t_errcode=alloc__t702t(&__t2142t__unsafe_ptr,&__t2142t__unsafe_size,&__t2142t__unsafe_offset,&__t2142t__unsafe_align,__t2143t,&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t837t(&__t2144t__unsafe_ptr,&__t2144t__unsafe_size,&__t2144t__unsafe_offset,&__t2144t__unsafe_align,&__t2146t__buf__unsafe_ptr,&__t2146t__buf__unsafe_size,&__t2146t__buf__unsafe_offset,&__t2146t__buf__unsafe_align,&__t2146t__pos);
  CHARS__buf__unsafe_ptr=__t2146t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2146t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2146t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2146t__buf__unsafe_align;
  CHARS__pos=__t2146t__pos;
  if(!creator){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=((int (*)(char* , uint64_t , uint16_t , uint16_t , uint64_t , char** , uint64_t* , uint64_t* , char* ))creator)(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t2148t____t2134t,&__t2148t____t2135t,&__t2148t____t2136t,&__t2148t____t2137t);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__t2134t=__t2148t____t2134t;
  ret__t2135t=__t2148t____t2135t;
  ret__t2136t=__t2148t____t2136t;
  ret__t2137t=__t2148t____t2137t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2296t=ret__t2134t;
  *__t2297t=ret__t2135t;
  *__t2298t=ret__t2136t;
  *__t2299t=ret__t2137t;
  
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

static inline __attribute__((always_inline)) int main__t2162t() {
  __smoll_func_ptr_type __t2168t=0;
  char* __t2183t__t2134t=0;
  uint64_t __t2183t__t2135t=0;
  uint64_t __t2183t__t2136t=0;
  char __t2183t__t2137t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t377t();
  __t2168t=(__smoll_func_ptr_type)string_creator__t2164t;
  __t_errcode=test__t2139t(__t2168t,&__t2183t__t2134t,&__t2183t__t2135t,&__t2183t__t2136t,&__t2183t__t2137t);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1159t(__t2183t__t2134t,__t2183t__t2135t,__t2183t__t2136t,__t2183t__t2137t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2162t();return 0;}