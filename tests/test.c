#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2154t="created";
const char* const __t395t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
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
static inline __attribute__((always_inline)) void console__t378t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t948t(char** __t2190t, uint64_t* __t2191t, uint16_t* __t2192t, uint16_t* __t2193t) {
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

static inline __attribute__((always_inline)) void not__t40t(int __t_anon0, int* __t2196t) {
  int __t41t__=0;
  false__t10t(&__t41t__);
  goto __t_return;
  __t_return:
  *__t2196t=__t41t__;
}

static inline __attribute__((always_inline)) void is_different__t106t(uint64_t x, uint64_t y, int* __t2197t) {
  int __t108t=0;
  int __t109t__=0;
  not__t40t(__t108t,&__t109t__);
  goto __t_return;
  __t_return:
  *__t2197t=__t109t__;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t2198t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2198t=z;
}

static inline __attribute__((always_inline)) void neq__t156t(uint64_t x, uint64_t y, char* __t2199t) {
  int __t157t__=0;
  char z=0;
  is_different__t106t(x,y,&__t157t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2199t=z;
}

static inline __attribute__((always_inline)) void ge__t336t(uint64_t x, uint64_t y, char* __t2200t) {
  int __t337t__=0;
  char z=0;
  is_different__t106t(x,y,&__t337t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2200t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2201t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2201t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t2202t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2202t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t24t(char* to, char* from, char** __t2203t) {
  *__t2203t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2204t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t24t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2204t=__t677t__;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2205t) {
  char __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  char* __t829t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t336t(i,buffer__unsafe_size,&__t824t__);
  if(__t824t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t825t__);
  mul__t211t(i,__t825t__,&__t826t__);
  nat__t678t(buffer__unsafe_offset,&__t827t__);
  add__t187t(__t826t__,__t827t__,&__t828t__);
  add__t676t(buffer__unsafe_ptr,__t828t__,&__t829t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2205t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t967t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2206t, uint64_t* __t2207t, uint64_t* __t2208t, char* __t2209t) {
  goto __t_return;
  __t_return:
  *__t2206t=unsafe_ptr;
  *__t2207t=dat__pos;
  *__t2208t=dat__length;
  *__t2209t=dat__first;
}

static inline __attribute__((always_inline)) int str__t971t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2210t, uint64_t* __t2211t, uint64_t* __t2212t, char* __t2213t) {
  char* unsafe_ptr=0;
  uint64_t __t972t__=0;
  uint64_t __t973t=0;
  char __t974t__=0;
  uint64_t __t975t__=0;
  uint64_t __t976t=0;
  char __t977t__=0;
  char* __t978t__unsafe_ptr=0;
  uint64_t __t978t__dat__pos=0;
  uint64_t __t978t__dat__length=0;
  char __t978t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t678t(buf__unsafe_align,&__t972t__);
  __t973t=1;
  neq__t156t(__t972t__,__t973t,&__t974t__);
  if(__t974t__){
  __t_errcode=19;
  goto __t_failure;
  }
  nat__t678t(buf__unsafe_offset,&__t975t__);
  __t976t=0;
  neq__t156t(__t975t__,__t976t,&__t977t__);
  if(__t977t__){
  __t_errcode=20;
  goto __t_failure;
  }
  str__t967t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t978t__unsafe_ptr,&__t978t__dat__pos,&__t978t__dat__length,&__t978t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2210t=__t978t__unsafe_ptr;
  *__t2211t=__t978t__dat__pos;
  *__t2212t=__t978t__dat__length;
  *__t2213t=__t978t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1005t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2214t, uint64_t* __t2215t, uint64_t* __t2216t, char* __t2217t) {
  uint64_t __t1006t=0;
  char __t1007t__=0;
  char* __t1009t__=0;
  char __t1010t__value=0;
  char first=0;
  char* __t1011t__unsafe_ptr=0;
  uint64_t __t1011t__dat__pos=0;
  uint64_t __t1011t__dat__length=0;
  char __t1011t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1006t=0;
  neq__t156t(length,__t1006t,&__t1007t__);
  if(__t1007t__){
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1009t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1010t__value,__t1009t__,1);
  first=__t1010t__value;
  }
  __t_errcode=str__t971t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1011t__unsafe_ptr,&__t1011t__dat__pos,&__t1011t__dat__length,&__t1011t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2214t=__t1011t__unsafe_ptr;
  *__t2215t=__t1011t__dat__pos;
  *__t2216t=__t1011t__dat__length;
  *__t2217t=__t1011t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1027t(const char* c, char** __t2218t, uint64_t* __t2219t, uint64_t* __t2220t, char* __t2221t) {
  char* __t1028t__unsafe_ptr=0;
  uint64_t __t1028t__unsafe_size=0;
  uint16_t __t1028t__unsafe_offset=0;
  uint16_t __t1028t__unsafe_align=0;
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__unsafe_size=0;
  uint16_t __t1029t__unsafe_offset=0;
  uint16_t __t1029t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1030t__=0;
  uint64_t length=0;
  uint64_t __t1031t=0;
  uint64_t __t1032t__=0;
  uint64_t __t1033t=0;
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__dat__pos=0;
  uint64_t __t1035t__dat__length=0;
  char __t1035t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t948t(&__t1028t__unsafe_ptr,&__t1028t__unsafe_size,&__t1028t__unsafe_offset,&__t1028t__unsafe_align);
  __t1029t__unsafe_ptr=__t1028t__unsafe_ptr;
  __t1029t__unsafe_size=__t1028t__unsafe_size;
  __t1029t__unsafe_offset=__t1028t__unsafe_offset;
  __t1029t__unsafe_align=__t1028t__unsafe_align;
  buf__unsafe_ptr=__t1029t__unsafe_ptr;
  buf__unsafe_size=__t1029t__unsafe_size;
  buf__unsafe_offset=__t1029t__unsafe_offset;
  buf__unsafe_align=__t1029t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t25t(buf__unsafe_ptr,c,&__t1030t__);
  buf__unsafe_ptr=__t1030t__;
  if(c){
  length=strlen(c);
  }
  __t1031t=1;
  add__t187t(length,__t1031t,&__t1032t__);
  buf__unsafe_size=__t1032t__;
  __t1033t=0;
  __t_errcode=str__t1005t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1033t,length,&__t1035t__unsafe_ptr,&__t1035t__dat__pos,&__t1035t__dat__length,&__t1035t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2218t=__t1035t__unsafe_ptr;
  *__t2219t=__t1035t__dat__pos;
  *__t2220t=__t1035t__dat__length;
  *__t2221t=__t1035t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1036t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2222t) {
  goto __t_return;
  __t_return:
  *__t2222t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2223t) {
  goto __t_return;
  __t_return:
  *__t2223t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t288t(uint64_t x, uint64_t y, char* __t2224t) {
  int __t289t__=0;
  char z=0;
  is_different__t106t(x,y,&__t289t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2224t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2225t, uint64_t* __t2226t, uint16_t* __t2227t, uint16_t* __t2228t, uint64_t pos, char** __t2229t, uint64_t* __t2230t, uint16_t* __t2231t, uint16_t* __t2232t, uint64_t* __t2233t) {
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

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2234t, uint64_t* __t2235t, uint16_t* __t2236t, uint16_t* __t2237t, uint64_t* __t2238t, uint64_t length, char** __t2239t, uint64_t* __t2240t, uint16_t* __t2241t, uint16_t* __t2242t, uint64_t* __t2243t) {
  char* allocator__buf__unsafe_ptr=*__t2234t;
  uint64_t allocator__buf__unsafe_size=*__t2235t;
  uint16_t allocator__buf__unsafe_offset=*__t2236t;
  uint16_t allocator__buf__unsafe_align=*__t2237t;
  uint64_t allocator__pos=*__t2238t;
  int __t874t=0;
  uint64_t __t875t__=0;
  uint64_t next_pos=0;
  uint64_t __t876t__=0;
  char __t877t__=0;
  uint64_t __t878t=0;
  uint64_t __t879t__=0;
  uint64_t pos=0;
  char* __t880t__buf__unsafe_ptr=0;
  uint64_t __t880t__buf__unsafe_size=0;
  uint16_t __t880t__buf__unsafe_offset=0;
  uint16_t __t880t__buf__unsafe_align=0;
  uint64_t __t880t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(allocator__pos,length,&__t875t__);
  next_pos=__t875t__;
  len__t830t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t876t__);
  gt__t288t(next_pos,__t876t__,&__t877t__);
  if(__t877t__){
  __t_errcode=17;
  goto __t_failure;
  }
  __t878t=0;
  add__t187t(allocator__pos,__t878t,&__t879t__);
  pos=__t879t__;
  allocator__pos=next_pos;
  allocated__t841t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t880t__buf__unsafe_ptr,&__t880t__buf__unsafe_size,&__t880t__buf__unsafe_offset,&__t880t__buf__unsafe_align,&__t880t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2234t=allocator__buf__unsafe_ptr;
  *__t2235t=allocator__buf__unsafe_size;
  *__t2236t=allocator__buf__unsafe_offset;
  *__t2237t=allocator__buf__unsafe_align;
  *__t2238t=allocator__pos;
  *__t2239t=__t880t__buf__unsafe_ptr;
  *__t2240t=__t880t__buf__unsafe_size;
  *__t2241t=__t880t__buf__unsafe_offset;
  *__t2242t=__t880t__buf__unsafe_align;
  *__t2243t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1058t(char** __t2244t, uint64_t* __t2245t, uint16_t* __t2246t, uint16_t* __t2247t, uint64_t* __t2248t, const char* _other, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  char* CHARS__buf__unsafe_ptr=*__t2244t;
  uint64_t CHARS__buf__unsafe_size=*__t2245t;
  uint16_t CHARS__buf__unsafe_offset=*__t2246t;
  uint16_t CHARS__buf__unsafe_align=*__t2247t;
  uint64_t CHARS__pos=*__t2248t;
  char* __t1059t__unsafe_ptr=0;
  uint64_t __t1059t__dat__pos=0;
  uint64_t __t1059t__dat__length=0;
  char __t1059t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1060t__=0;
  char* __t1061t__buf__unsafe_ptr=0;
  uint64_t __t1061t__buf__unsafe_size=0;
  uint16_t __t1061t__buf__unsafe_offset=0;
  uint16_t __t1061t__buf__unsafe_align=0;
  uint64_t __t1061t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1062t__unsafe_ptr=0;
  uint64_t __t1062t__dat__pos=0;
  uint64_t __t1062t__dat__length=0;
  char __t1062t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1027t(_other,&__t1059t__unsafe_ptr,&__t1059t__dat__pos,&__t1059t__dat__length,&__t1059t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1059t__unsafe_ptr;
  other__dat__pos=__t1059t__dat__pos;
  other__dat__length=__t1059t__dat__length;
  other__dat__first=__t1059t__dat__first;
  len__t1036t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1060t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1060t__,&__t1061t__buf__unsafe_ptr,&__t1061t__buf__unsafe_size,&__t1061t__buf__unsafe_offset,&__t1061t__buf__unsafe_align,&__t1061t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1061t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1061t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1061t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1061t__buf__unsafe_align;
  surface__pos=__t1061t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t971t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1062t__unsafe_ptr,&__t1062t__dat__pos,&__t1062t__dat__length,&__t1062t__dat__first);
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
  *__t2249t=__t1062t__unsafe_ptr;
  *__t2250t=__t1062t__dat__pos;
  *__t2251t=__t1062t__dat__length;
  *__t2252t=__t1062t__dat__first;
  
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

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2257t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2257t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2258t) {
  char* allocated=*__t2258t;
  if(allocated){
  free(allocated);
  }
  *__t2258t=allocated;
}

static inline __attribute__((always_inline)) void eq__t132t(uint64_t x, uint64_t y, char* __t2259t) {
  int __t133t__=0;
  char z=0;
  is_different__t106t(x,y,&__t133t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2259t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t31t(char value, char* __t2260t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2260t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2261t) {
  char* allocated=0;
  char __t668t__=0;
  char __t669t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t604t(allocated,&__t668t__);
  not__t31t(__t668t__,&__t669t__);
  if(__t669t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2261t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2262t, uint64_t* __t2263t, uint16_t* __t2264t, uint16_t* __t2265t, uint64_t size, char** __t2266t, uint64_t* __t2267t, uint16_t* __t2268t, uint16_t* __t2269t) {
  char* buffer__unsafe_ptr=*__t2262t;
  uint64_t buffer__unsafe_size=*__t2263t;
  uint16_t buffer__unsafe_offset=*__t2264t;
  uint16_t buffer__unsafe_align=*__t2265t;
  int __t704t=0;
  char __t705t__=0;
  char __t707t__=0;
  uint64_t __t708t=0;
  char __t709t__=0;
  uint64_t __t710t=0;
  uint64_t __t711t__=0;
  uint64_t __t712t__=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t bytes=0;
  uint64_t __t718t=0;
  char __t719t__=0;
  char* __t720t__=0;
  int __t721t=0;
  uint64_t __t722t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t132t(buffer__unsafe_size,size,&__t707t__);
  if(__t707t__){
  __t708t=0;
  neq__t156t(size,__t708t,&__t709t__);
  if(__t709t__){
  __t710t=0;
  nat__t678t(buffer__unsafe_align,&__t711t__);
  mul__t211t(__t711t__,size,&__t712t__);
  zero__t675t(buffer__unsafe_ptr,__t710t,__t712t__);
  }
  goto __t_return;
  }
  __t714t=0;
  neq__t156t(buffer__unsafe_size,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t716t__);
  mul__t211t(__t716t__,size,&__t717t__);
  bytes=__t717t__;
  __t718t=0;
  eq__t132t(bytes,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t667t(bytes,&__t720t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t722t=0;
  zero__t675t(__t720t__,__t722t,bytes);
  buffer__unsafe_ptr=__t720t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t604t(buffer__unsafe_ptr,&__t705t__);
  if(__t705t__){
  free__t674t(&buffer__unsafe_ptr);
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
  char __t2161t____t705t__=0;
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
  __t_errcode=copy__t1058t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2154t,&__t2155t__unsafe_ptr,&__t2155t__dat__pos,&__t2155t__dat__length,&__t2155t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str____buffer__t2156t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align);
  __t2159t=1;
  __t_errcode=alloc__t703t(&__t2158t__unsafe_ptr,&__t2158t__unsafe_size,&__t2158t__unsafe_offset,&__t2158t__unsafe_align,__t2159t,&__t2160t__unsafe_ptr,&__t2160t__unsafe_size,&__t2160t__unsafe_offset,&__t2160t__unsafe_align);
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
  __t_errcode=get__t823t(strings__unsafe_ptr,strings__unsafe_size,strings__unsafe_offset,strings__unsafe_align,__t2162t,&__t2164t__);
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
  
  __t_skip_returns:exists__t604t(__t2160t__unsafe_ptr,&__t2161t____t705t__);
  if(__t2161t____t705t__){
  free__t674t(&__t2160t__unsafe_ptr);
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2141t(char** __t2278t, uint64_t* __t2279t, uint16_t* __t2280t, uint16_t* __t2281t) {
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

static inline __attribute__((always_inline)) void arena__t835t(char** __t2282t, uint64_t* __t2283t, uint16_t* __t2284t, uint16_t* __t2285t, uint64_t _pos, char** __t2286t, uint64_t* __t2287t, uint16_t* __t2288t, uint16_t* __t2289t, uint64_t* __t2290t) {
  char* buf__unsafe_ptr=*__t2282t;
  uint64_t buf__unsafe_size=*__t2283t;
  uint16_t buf__unsafe_offset=*__t2284t;
  uint16_t buf__unsafe_align=*__t2285t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
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

static inline __attribute__((always_inline)) void arena__t838t(char** __t2291t, uint64_t* __t2292t, uint16_t* __t2293t, uint16_t* __t2294t, char** __t2295t, uint64_t* __t2296t, uint16_t* __t2297t, uint16_t* __t2298t, uint64_t* __t2299t) {
  char* buf__unsafe_ptr=*__t2291t;
  uint64_t buf__unsafe_size=*__t2292t;
  uint16_t buf__unsafe_offset=*__t2293t;
  uint16_t buf__unsafe_align=*__t2294t;
  uint64_t __t839t=0;
  char* __t840t__buf__unsafe_ptr=0;
  uint64_t __t840t__buf__unsafe_size=0;
  uint16_t __t840t__buf__unsafe_offset=0;
  uint16_t __t840t__buf__unsafe_align=0;
  uint64_t __t840t__pos=0;
  __t839t=0;
  arena__t835t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t839t,&__t840t__buf__unsafe_ptr,&__t840t__buf__unsafe_size,&__t840t__buf__unsafe_offset,&__t840t__buf__unsafe_align,&__t840t__pos);
  goto __t_return;
  __t_return:
  *__t2291t=buf__unsafe_ptr;
  *__t2292t=buf__unsafe_size;
  *__t2293t=buf__unsafe_offset;
  *__t2294t=buf__unsafe_align;
  *__t2295t=__t840t__buf__unsafe_ptr;
  *__t2296t=__t840t__buf__unsafe_size;
  *__t2297t=__t840t__buf__unsafe_offset;
  *__t2298t=__t840t__buf__unsafe_align;
  *__t2299t=__t840t__pos;
}

static inline __attribute__((always_inline)) void _arena______str___t2139t(__smoll_func_ptr_type* __t2300t) {
  __smoll_func_ptr_type value=0;
  *__t2300t=value;
}



static inline __attribute__((always_inline)) void str__t1004t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2301t, uint64_t* __t2302t, uint64_t* __t2303t, char* __t2304t) {
  goto __t_return;
  __t_return:
  *__t2301t=other__unsafe_ptr;
  *__t2302t=other__dat__pos;
  *__t2303t=other__dat__length;
  *__t2304t=other__dat__first;
}

static inline __attribute__((always_inline)) int assert_eq__t28t(char* to, char* from) {
  int __t_errcode=0;
  int __t_complain=0;
  if(to!=from){
  __t_errcode==3;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t2140t(__smoll_func_ptr_type creator, char** __t2305t, uint64_t* __t2306t, uint64_t* __t2307t, char* __t2308t) {
  char* __t2143t__unsafe_ptr=0;
  uint64_t __t2143t__unsafe_size=0;
  uint16_t __t2143t__unsafe_offset=0;
  uint16_t __t2143t__unsafe_align=0;
  uint64_t __t2144t=0;
  char* __t2145t__unsafe_ptr=0;
  uint64_t __t2145t__unsafe_size=0;
  uint16_t __t2145t__unsafe_offset=0;
  uint16_t __t2145t__unsafe_align=0;
  char __t2146t____t705t__=0;
  char* __t2147t__buf__unsafe_ptr=0;
  uint64_t __t2147t__buf__unsafe_size=0;
  uint16_t __t2147t__buf__unsafe_offset=0;
  uint16_t __t2147t__buf__unsafe_align=0;
  uint64_t __t2147t__pos=0;
  char* __t2148t__buf__unsafe_ptr=0;
  uint64_t __t2148t__buf__unsafe_size=0;
  uint16_t __t2148t__buf__unsafe_offset=0;
  uint16_t __t2148t__buf__unsafe_align=0;
  uint64_t __t2148t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2150t____t2135t=0;
  uint64_t __t2150t____t2136t=0;
  uint64_t __t2150t____t2137t=0;
  char __t2150t____t2138t=0;
  char* __t2151t__unsafe_ptr=0;
  uint64_t __t2151t__dat__pos=0;
  uint64_t __t2151t__dat__length=0;
  char __t2151t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2141t(&__t2143t__unsafe_ptr,&__t2143t__unsafe_size,&__t2143t__unsafe_offset,&__t2143t__unsafe_align);
  __t2144t=128;
  __t_errcode=alloc__t703t(&__t2143t__unsafe_ptr,&__t2143t__unsafe_size,&__t2143t__unsafe_offset,&__t2143t__unsafe_align,__t2144t,&__t2145t__unsafe_ptr,&__t2145t__unsafe_size,&__t2145t__unsafe_offset,&__t2145t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t838t(&__t2145t__unsafe_ptr,&__t2145t__unsafe_size,&__t2145t__unsafe_offset,&__t2145t__unsafe_align,&__t2147t__buf__unsafe_ptr,&__t2147t__buf__unsafe_size,&__t2147t__buf__unsafe_offset,&__t2147t__buf__unsafe_align,&__t2147t__pos);
  __t2148t__buf__unsafe_ptr=__t2147t__buf__unsafe_ptr;
  __t2148t__buf__unsafe_size=__t2147t__buf__unsafe_size;
  __t2148t__buf__unsafe_offset=__t2147t__buf__unsafe_offset;
  __t2148t__buf__unsafe_align=__t2147t__buf__unsafe_align;
  __t2148t__pos=__t2147t__pos;
  CHARS__buf__unsafe_ptr=__t2148t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2148t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2148t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2148t__buf__unsafe_align;
  CHARS__pos=__t2148t__pos;
  if(!creator){
  __t_errcode=2;
  goto __t_failure;
  }
  __t_errcode=__smoll_func_cast((int (*)(char* , uint64_t , uint16_t , uint16_t , uint64_t , char** , uint64_t* , uint64_t* , char* ))creator)(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t2150t____t2135t,&__t2150t____t2136t,&__t2150t____t2137t,&__t2150t____t2138t);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1004t(__t2150t____t2135t,__t2150t____t2136t,__t2150t____t2137t,__t2150t____t2138t,&__t2151t__unsafe_ptr,&__t2151t__dat__pos,&__t2151t__dat__length,&__t2151t__dat__first);
  ret__unsafe_ptr=__t2151t__unsafe_ptr;
  ret__dat__pos=__t2151t__dat__pos;
  ret__dat__length=__t2151t__dat__length;
  ret__dat__first=__t2151t__dat__first;
  __t_errcode=assert_eq__t28t(ret__unsafe_ptr,CHARS__buf__unsafe_ptr);
  ret__unsafe_ptr=CHARS__buf__unsafe_ptr;
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(ret__unsafe_ptr,&__t2146t____t705t__);
  if(__t2146t____t705t__){
  free__t674t(&ret__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2305t=ret__unsafe_ptr;
  *__t2306t=ret__dat__pos;
  *__t2307t=ret__dat__length;
  *__t2308t=ret__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1160t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1161t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2166t() {
  __smoll_func_ptr_type __t2172t=0;
  char* __t2187t__unsafe_ptr=0;
  uint64_t __t2187t__dat__pos=0;
  uint64_t __t2187t__dat__length=0;
  char __t2187t__dat__first=0;
  char __t2188t____t2146t____t705t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t378t();
  __t2172t=(__smoll_func_ptr_type)string_creator__t2168t;
  __t_errcode=test__t2140t(__t2172t,&__t2187t__unsafe_ptr,&__t2187t__dat__pos,&__t2187t__dat__length,&__t2187t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1160t(__t2187t__unsafe_ptr,__t2187t__dat__pos,__t2187t__dat__length,__t2187t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t604t(__t2187t__unsafe_ptr,&__t2188t____t2146t____t705t__);
  if(__t2188t____t2146t____t705t__){
  free__t674t(&__t2187t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2166t();return 0;}