#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;

static const char* __t_all_errcodes[38] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes"
};

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5871t(char** __t5892t, uint64_t* __t5893t, uint32_t* __t5894t, uint32_t* __t5895t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5892t=unsafe_ptr;
  *__t5893t=unsafe_size;
  *__t5894t=unsafe_offset;
  *__t5895t=unsafe_align;
}

static inline __attribute__((always_inline)) void new__t1064t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2846t(char** __t5896t, uint64_t* __t5897t, uint32_t* __t5898t, uint32_t* __t5899t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5896t=unsafe_ptr;
  *__t5897t=unsafe_size;
  *__t5898t=unsafe_offset;
  *__t5899t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t5900t) {
  char* allocated=*__t5900t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5900t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5901t) {
  int value=0;
  *__t5901t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t5902t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t5902t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t5903t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t5903t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t5904t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5904t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t5905t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5905t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t5906t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5906t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t5907t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5907t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t5908t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5908t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t5909t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5909t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t5910t) {
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
  *__t5910t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t739t(char** __t5911t, uint64_t* __t5912t, uint32_t* __t5913t, uint32_t* __t5914t, uint64_t size, char** __t5915t, uint64_t* __t5916t, uint32_t* __t5917t, uint32_t* __t5918t) {
  char* buffer__unsafe_ptr=*__t5911t;
  uint64_t buffer__unsafe_size=*__t5912t;
  uint32_t buffer__unsafe_offset=*__t5913t;
  uint32_t buffer__unsafe_align=*__t5914t;
  int __t740t=0;
  char __t742t__=0;
  uint64_t __t743t=0;
  char __t744t__=0;
  char __t745t=0;
  uint64_t __t746t=0;
  uint64_t __t747t__=0;
  uint64_t __t748t__=0;
  int __t750t=0;
  uint64_t __t751t__=0;
  uint64_t __t752t__=0;
  uint64_t bytes=0;
  int __t753t=0;
  char* __t754t__=0;
  int __t755t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t742t__);
  if(__t742t__){
  __t743t=0;
  neq__t157t(size,__t743t,&__t744t__);
  __t745t=__t744t__;
  }
  if(__t745t){
  __t746t=0;
  nat__t727t(buffer__unsafe_align,&__t747t__);
  mul__t211t(__t747t__,size,&__t748t__);
  zero__t723t(buffer__unsafe_ptr,__t746t,__t748t__);
  goto __t_return;
  }
  nat__t727t(buffer__unsafe_align,&__t751t__);
  mul__t211t(__t751t__,size,&__t752t__);
  bytes=__t752t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t754t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t754t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t722t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5911t=buffer__unsafe_ptr;
  *__t5912t=buffer__unsafe_size;
  *__t5913t=buffer__unsafe_offset;
  *__t5914t=buffer__unsafe_align;
  *__t5915t=buffer__unsafe_ptr;
  *__t5916t=buffer__unsafe_size;
  *__t5917t=buffer__unsafe_offset;
  *__t5918t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t2811t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5919t, uint64_t* __t5920t, uint64_t* __t5921t) {
  char* __t2813t__unsafe_ptr=0;
  uint64_t __t2813t__pos=0;
  uint64_t __t2813t__length=0;
  __t2813t__unsafe_ptr=unsafe_ptr;
  __t2813t__pos=pos;
  __t2813t__length=length;
  goto __t_return;
  __t_return:
  *__t5919t=__t2813t__unsafe_ptr;
  *__t5920t=__t2813t__pos;
  *__t5921t=__t2813t__length;
}

static inline __attribute__((always_inline)) int vec__t2952t(uint64_t length, char** __t5922t, uint64_t* __t5923t, uint64_t* __t5924t) {
  char* __t2953t__unsafe_ptr=0;
  uint64_t __t2953t__unsafe_size=0;
  uint32_t __t2953t__unsafe_offset=0;
  uint32_t __t2953t__unsafe_align=0;
  char* __t2956t__unsafe_ptr=0;
  uint64_t __t2956t__unsafe_size=0;
  uint32_t __t2956t__unsafe_offset=0;
  uint32_t __t2956t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  int __t2958t=0;
  uint64_t __t2959t=0;
  uint64_t __t2960t=0;
  uint64_t __t2961t__=0;
  uint64_t __t2963t=0;
  char* __t2964t__unsafe_ptr=0;
  uint64_t __t2964t__pos=0;
  uint64_t __t2964t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2846t(&__t2953t__unsafe_ptr,&__t2953t__unsafe_size,&__t2953t__unsafe_offset,&__t2953t__unsafe_align);
  __t_errcode=alloc__t739t(&__t2953t__unsafe_ptr,&__t2953t__unsafe_size,&__t2953t__unsafe_offset,&__t2953t__unsafe_align,length,&__t2956t__unsafe_ptr,&__t2956t__unsafe_size,&__t2956t__unsafe_offset,&__t2956t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2956t__unsafe_ptr;
  buf__unsafe_size=__t2956t__unsafe_size;
  buf__unsafe_offset=__t2956t__unsafe_offset;
  buf__unsafe_align=__t2956t__unsafe_align;
  __t2959t=0;
  __t2960t=8;
  mul__t211t(__t2960t,length,&__t2961t__);
  zero__t723t(buf__unsafe_ptr,__t2959t,__t2961t__);
  __t2963t=0;
  vec__t2811t(buf__unsafe_ptr,__t2963t,length,&__t2964t__unsafe_ptr,&__t2964t__pos,&__t2964t__length);
  goto __t_return;
  
  __t_failure:free__t722t(&__t2964t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5922t=__t2964t__unsafe_ptr;
  *__t5923t=__t2964t__pos;
  *__t5924t=__t2964t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t3037t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5925t) {
  goto __t_return;
  __t_return:
  *__t5925t=v__length;
}

static inline __attribute__((always_inline)) void arena__t1068t(char** __t5926t, uint64_t* __t5927t, uint32_t* __t5928t, uint32_t* __t5929t, uint64_t _pos, char** __t5930t, uint64_t* __t5931t, uint32_t* __t5932t, uint32_t* __t5933t, uint64_t* __t5934t) {
  char* buf__unsafe_ptr=*__t5926t;
  uint64_t buf__unsafe_size=*__t5927t;
  uint32_t buf__unsafe_offset=*__t5928t;
  uint32_t buf__unsafe_align=*__t5929t;
  uint64_t __t1069t=0;
  uint64_t pos=0;
  __t1069t=_pos;
  pos=__t1069t;
  goto __t_return;
  __t_return:
  *__t5926t=buf__unsafe_ptr;
  *__t5927t=buf__unsafe_size;
  *__t5928t=buf__unsafe_offset;
  *__t5929t=buf__unsafe_align;
  *__t5930t=buf__unsafe_ptr;
  *__t5931t=buf__unsafe_size;
  *__t5932t=buf__unsafe_offset;
  *__t5933t=buf__unsafe_align;
  *__t5934t=pos;
}

static inline __attribute__((always_inline)) void arena__t1071t(char** __t5935t, uint64_t* __t5936t, uint32_t* __t5937t, uint32_t* __t5938t, char** __t5939t, uint64_t* __t5940t, uint32_t* __t5941t, uint32_t* __t5942t, uint64_t* __t5943t) {
  char* buf__unsafe_ptr=*__t5935t;
  uint64_t buf__unsafe_size=*__t5936t;
  uint32_t buf__unsafe_offset=*__t5937t;
  uint32_t buf__unsafe_align=*__t5938t;
  uint64_t __t1072t=0;
  char* __t1073t__buf__unsafe_ptr=0;
  uint64_t __t1073t__buf__unsafe_size=0;
  uint32_t __t1073t__buf__unsafe_offset=0;
  uint32_t __t1073t__buf__unsafe_align=0;
  uint64_t __t1073t__pos=0;
  __t1072t=0;
  arena__t1068t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1072t,&__t1073t__buf__unsafe_ptr,&__t1073t__buf__unsafe_size,&__t1073t__buf__unsafe_offset,&__t1073t__buf__unsafe_align,&__t1073t__pos);
  goto __t_return;
  __t_return:
  *__t5935t=buf__unsafe_ptr;
  *__t5936t=buf__unsafe_size;
  *__t5937t=buf__unsafe_offset;
  *__t5938t=buf__unsafe_align;
  *__t5939t=__t1073t__buf__unsafe_ptr;
  *__t5940t=__t1073t__buf__unsafe_size;
  *__t5941t=__t1073t__buf__unsafe_offset;
  *__t5942t=__t1073t__buf__unsafe_align;
  *__t5943t=__t1073t__pos;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t5944t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5944t=z;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5945t) {
  goto __t_return;
  __t_return:
  *__t5945t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t5946t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5946t=z;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t5947t, uint64_t* __t5948t, uint32_t* __t5949t, uint32_t* __t5950t, uint64_t pos, char** __t5951t, uint64_t* __t5952t, uint32_t* __t5953t, uint32_t* __t5954t, uint64_t* __t5955t) {
  char* buf__unsafe_ptr=*__t5947t;
  uint64_t buf__unsafe_size=*__t5948t;
  uint32_t buf__unsafe_offset=*__t5949t;
  uint32_t buf__unsafe_align=*__t5950t;
  goto __t_return;
  __t_return:
  *__t5947t=buf__unsafe_ptr;
  *__t5948t=buf__unsafe_size;
  *__t5949t=buf__unsafe_offset;
  *__t5950t=buf__unsafe_align;
  *__t5951t=buf__unsafe_ptr;
  *__t5952t=buf__unsafe_size;
  *__t5953t=buf__unsafe_offset;
  *__t5954t=buf__unsafe_align;
  *__t5955t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1150t(char** __t5956t, uint64_t* __t5957t, uint32_t* __t5958t, uint32_t* __t5959t, uint64_t* __t5960t, uint64_t length, char** __t5961t, uint64_t* __t5962t, uint32_t* __t5963t, uint32_t* __t5964t, uint64_t* __t5965t) {
  char* allocator__buf__unsafe_ptr=*__t5956t;
  uint64_t allocator__buf__unsafe_size=*__t5957t;
  uint32_t allocator__buf__unsafe_offset=*__t5958t;
  uint32_t allocator__buf__unsafe_align=*__t5959t;
  uint64_t allocator__pos=*__t5960t;
  int __t1151t=0;
  uint64_t __t1152t__=0;
  uint64_t next_pos=0;
  uint64_t __t1153t__=0;
  char __t1154t__=0;
  uint64_t __t1155t=0;
  uint64_t __t1156t__=0;
  uint64_t pos=0;
  char* __t1157t__buf__unsafe_ptr=0;
  uint64_t __t1157t__buf__unsafe_size=0;
  uint32_t __t1157t__buf__unsafe_offset=0;
  uint32_t __t1157t__buf__unsafe_align=0;
  uint64_t __t1157t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(allocator__pos,length,&__t1152t__);
  next_pos=__t1152t__;
  len__t1063t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1153t__);
  gt__t324t(next_pos,__t1153t__,&__t1154t__);
  if(__t1154t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1155t=0;
  add__t187t(allocator__pos,__t1155t,&__t1156t__);
  pos=__t1156t__;
  allocator__pos=next_pos;
  allocated__t1075t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1157t__buf__unsafe_ptr,&__t1157t__buf__unsafe_size,&__t1157t__buf__unsafe_offset,&__t1157t__buf__unsafe_align,&__t1157t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5956t=allocator__buf__unsafe_ptr;
  *__t5957t=allocator__buf__unsafe_size;
  *__t5958t=allocator__buf__unsafe_offset;
  *__t5959t=allocator__buf__unsafe_align;
  *__t5960t=allocator__pos;
  *__t5961t=__t1157t__buf__unsafe_ptr;
  *__t5962t=__t1157t__buf__unsafe_size;
  *__t5963t=__t1157t__buf__unsafe_offset;
  *__t5964t=__t1157t__buf__unsafe_align;
  *__t5965t=__t1157t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t2985t(char** __t5966t, uint64_t* __t5967t, uint32_t* __t5968t, uint32_t* __t5969t, uint64_t* __t5970t, uint64_t length, char** __t5971t, uint64_t* __t5972t, uint64_t* __t5973t) {
  char* FLOATS__buf__unsafe_ptr=*__t5966t;
  uint64_t FLOATS__buf__unsafe_size=*__t5967t;
  uint32_t FLOATS__buf__unsafe_offset=*__t5968t;
  uint32_t FLOATS__buf__unsafe_align=*__t5969t;
  uint64_t FLOATS__pos=*__t5970t;
  uint64_t __t2986t__=0;
  uint64_t __t2987t=0;
  char __t2988t__=0;
  uint64_t __t2989t__=0;
  uint64_t __t2990t=0;
  char __t2991t__=0;
  char* __t2992t__buf__unsafe_ptr=0;
  uint64_t __t2992t__buf__unsafe_size=0;
  uint32_t __t2992t__buf__unsafe_offset=0;
  uint32_t __t2992t__buf__unsafe_align=0;
  uint64_t __t2992t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t2993t=0;
  char* __t2994t__unsafe_ptr=0;
  uint64_t __t2994t__pos=0;
  uint64_t __t2994t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t727t(FLOATS__buf__unsafe_align,&__t2986t__);
  __t2987t=8;
  neq__t157t(__t2986t__,__t2987t,&__t2988t__);
  if(__t2988t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t727t(FLOATS__buf__unsafe_offset,&__t2989t__);
  __t2990t=0;
  neq__t157t(__t2989t__,__t2990t,&__t2991t__);
  if(__t2991t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t1150t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2992t__buf__unsafe_ptr,&__t2992t__buf__unsafe_size,&__t2992t__buf__unsafe_offset,&__t2992t__buf__unsafe_align,&__t2992t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2992t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2992t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2992t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2992t__buf__unsafe_align;
  surface__pos=__t2992t__pos;
  vec__t2811t(surface__buf__unsafe_ptr,surface__pos,length,&__t2994t__unsafe_ptr,&__t2994t__pos,&__t2994t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5966t=FLOATS__buf__unsafe_ptr;
  *__t5967t=FLOATS__buf__unsafe_size;
  *__t5968t=FLOATS__buf__unsafe_offset;
  *__t5969t=FLOATS__buf__unsafe_align;
  *__t5970t=FLOATS__pos;
  *__t5971t=__t2994t__unsafe_ptr;
  *__t5972t=__t2994t__pos;
  *__t5973t=__t2994t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t5974t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5974t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5975t) {
  *__t5975t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t5976t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t5976t=__t725t__;
}

static inline __attribute__((always_inline)) int get__t3057t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5977t) {
  int __t3058t=0;
  char __t3059t__=0;
  uint64_t __t3060t=0;
  uint64_t __t3061t__=0;
  uint64_t __t3062t__=0;
  char* __t3063t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,v__length,&__t3059t__);
  if(__t3059t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t3060t=8;
  add__t187t(i,v__pos,&__t3061t__);
  mul__t211t(__t3060t,__t3061t__,&__t3062t__);
  add__t724t(v__unsafe_ptr,__t3062t__,&__t3063t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5977t=__t3063t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mutget__t3038t(char** __t5978t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5979t) {
  char* v__unsafe_ptr=*__t5978t;
  int __t3039t=0;
  uint64_t __t3040t=0;
  uint64_t __t3041t__=0;
  uint64_t __t3042t__=0;
  char* __t3043t__=0;
  __t3040t=8;
  add__t187t(i,v__pos,&__t3041t__);
  mul__t211t(__t3040t,__t3041t__,&__t3042t__);
  add__t724t(v__unsafe_ptr,__t3042t__,&__t3043t__);
  goto __t_return;
  __t_return:
  *__t5978t=v__unsafe_ptr;
  *__t5979t=__t3043t__;
}

int copy__t5832t(char** __t5980t, uint64_t* __t5981t, uint32_t* __t5982t, uint32_t* __t5983t, uint64_t* __t5984t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5985t, uint64_t* __t5986t, uint64_t* __t5987t) {
  char* FLOATS__buf__unsafe_ptr=*__t5980t;
  uint64_t FLOATS__buf__unsafe_size=*__t5981t;
  uint32_t FLOATS__buf__unsafe_offset=*__t5982t;
  uint32_t FLOATS__buf__unsafe_align=*__t5983t;
  uint64_t FLOATS__pos=*__t5984t;
  char* __t5834t__unsafe_ptr=0;
  uint64_t __t5834t__pos=0;
  uint64_t __t5834t__length=0;
  char* __t5835t__unsafe_ptr=0;
  uint64_t __t5835t__pos=0;
  uint64_t __t5835t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5836t=0;
  char __t5837t=0;
  char* __t5838t__=0;
  double __t5839t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t5842t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2985t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t5834t__unsafe_ptr,&__t5834t__pos,&__t5834t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5835t__unsafe_ptr=__t5834t__unsafe_ptr;
  __t5835t__pos=__t5834t__pos;
  __t5835t__length=__t5834t__length;
  result__unsafe_ptr=__t5835t__unsafe_ptr;
  result__pos=__t5835t__pos;
  result__length=__t5835t__length;
  __t5836t=0-1;
  while(1){
  __t5836t=__t5836t+1;
  __t_complain=get__t3057t(v__unsafe_ptr,v__pos,v__length,__t5836t,&__t5838t__);
  __t5837t=__t_complain;
  if(__t_complain){
  goto __t5837t__label;
  }
  if(!__t5838t__){
  __t_complain=2;
  goto __t5837t__label;
  }
  else{
  memcpy(&__t5839t__value,__t5838t__,8);
  }
  value=__t5839t__value;
  __t5837t__label:__t5837t=__t5837t==0;
  if(!__t5837t){
  break;
  }
  i=__t5836t;
  mutget__t3038t(&result__unsafe_ptr,result__pos,result__length,i,&__t5842t__);
  if(!__t5842t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5842t__,&value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5980t=FLOATS__buf__unsafe_ptr;
  *__t5981t=FLOATS__buf__unsafe_size;
  *__t5982t=FLOATS__buf__unsafe_offset;
  *__t5983t=FLOATS__buf__unsafe_align;
  *__t5984t=FLOATS__pos;
  *__t5985t=result__unsafe_ptr;
  *__t5986t=result__pos;
  *__t5987t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5868t() {
  char* __t5873t__unsafe_ptr=0;
  uint64_t __t5873t__unsafe_size=0;
  uint32_t __t5873t__unsafe_offset=0;
  uint32_t __t5873t__unsafe_align=0;
  char* __t5874t__unsafe_ptr=0;
  uint64_t __t5874t__unsafe_size=0;
  uint32_t __t5874t__unsafe_offset=0;
  uint32_t __t5874t__unsafe_align=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint32_t f__unsafe_offset=0;
  uint32_t f__unsafe_align=0;
  uint64_t __t5876t=0;
  char* __t5877t__unsafe_ptr=0;
  uint64_t __t5877t__pos=0;
  uint64_t __t5877t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  char* __t5879t__unsafe_ptr=0;
  uint64_t __t5879t__unsafe_size=0;
  uint32_t __t5879t__unsafe_offset=0;
  uint32_t __t5879t__unsafe_align=0;
  uint64_t __t5880t=0;
  uint64_t __t5881t__=0;
  uint64_t __t5882t__=0;
  char* __t5885t__unsafe_ptr=0;
  uint64_t __t5885t__unsafe_size=0;
  uint32_t __t5885t__unsafe_offset=0;
  uint32_t __t5885t__unsafe_align=0;
  char* __t5887t__buf__unsafe_ptr=0;
  uint64_t __t5887t__buf__unsafe_size=0;
  uint32_t __t5887t__buf__unsafe_offset=0;
  uint32_t __t5887t__buf__unsafe_align=0;
  uint64_t __t5887t__pos=0;
  char* __t5888t__buf__unsafe_ptr=0;
  uint64_t __t5888t__buf__unsafe_size=0;
  uint32_t __t5888t__buf__unsafe_offset=0;
  uint32_t __t5888t__buf__unsafe_align=0;
  uint64_t __t5888t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint32_t FLOATS__buf__unsafe_offset=0;
  uint32_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  char* __t5889t__unsafe_ptr=0;
  uint64_t __t5889t__pos=0;
  uint64_t __t5889t__length=0;
  char* __t5890t__unsafe_ptr=0;
  uint64_t __t5890t__pos=0;
  uint64_t __t5890t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t5891t__unsafe_ptr=0;
  uint64_t __t5891t__pos=0;
  uint64_t __t5891t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  float____t_buffer____buffer__t5871t(&__t5873t__unsafe_ptr,&__t5873t__unsafe_size,&__t5873t__unsafe_offset,&__t5873t__unsafe_align);
  __t5874t__unsafe_ptr=__t5873t__unsafe_ptr;
  __t5874t__unsafe_size=__t5873t__unsafe_size;
  __t5874t__unsafe_offset=__t5873t__unsafe_offset;
  __t5874t__unsafe_align=__t5873t__unsafe_align;
  f__unsafe_ptr=__t5874t__unsafe_ptr;
  f__unsafe_size=__t5874t__unsafe_size;
  f__unsafe_offset=__t5874t__unsafe_offset;
  f__unsafe_align=__t5874t__unsafe_align;
  new__t1064t();
  __t5876t=10;
  __t_errcode=vec__t2952t(__t5876t,&__t5877t__unsafe_ptr,&__t5877t__pos,&__t5877t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5877t__unsafe_ptr;
  p0__pos=__t5877t__pos;
  p0__length=__t5877t__length;
  float____t_buffer____buffer__t5871t(&__t5879t__unsafe_ptr,&__t5879t__unsafe_size,&__t5879t__unsafe_offset,&__t5879t__unsafe_align);
  __t5880t=5;
  len__t3037t(p0__unsafe_ptr,p0__pos,p0__length,&__t5881t__);
  mul__t211t(__t5880t,__t5881t__,&__t5882t__);
  __t_errcode=alloc__t739t(&__t5879t__unsafe_ptr,&__t5879t__unsafe_size,&__t5879t__unsafe_offset,&__t5879t__unsafe_align,__t5882t__,&__t5885t__unsafe_ptr,&__t5885t__unsafe_size,&__t5885t__unsafe_offset,&__t5885t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1071t(&__t5885t__unsafe_ptr,&__t5885t__unsafe_size,&__t5885t__unsafe_offset,&__t5885t__unsafe_align,&__t5887t__buf__unsafe_ptr,&__t5887t__buf__unsafe_size,&__t5887t__buf__unsafe_offset,&__t5887t__buf__unsafe_align,&__t5887t__pos);
  __t5888t__pos=__t5887t__pos;
  FLOATS__pos=__t5888t__pos;
  __t_errcode=copy__t5832t(&__t5885t__unsafe_ptr,&__t5885t__unsafe_size,&__t5885t__unsafe_offset,&__t5885t__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,&__t5889t__unsafe_ptr,&__t5889t__pos,&__t5889t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5890t__pos=__t5889t__pos;
  __t5890t__length=__t5889t__length;
  prev_p__pos=__t5890t__pos;
  prev_p__length=__t5890t__length;
  __t_errcode=copy__t5832t(&__t5885t__unsafe_ptr,&__t5885t__unsafe_size,&__t5885t__unsafe_offset,&__t5885t__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,&__t5891t__unsafe_ptr,&__t5891t__pos,&__t5891t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  prev_p__pos=__t5891t__pos;
  prev_p__length=__t5891t__length;
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t722t(&__t5885t__unsafe_ptr);
  free__t722t(&__t5877t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t5868t();return 0;}