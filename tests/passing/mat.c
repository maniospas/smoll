#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2468t=" ⎥";
const char* const __t2437t="⎣ ";
const char* const __t2418t="⎡ ";
const char* const __t374t="\n";
const char* const __t2620t="a*b";
const char* const __t366t="";
const char* const __t2476t=" ⎦";
const char* const __t2429t="⎢ ";
const char* const __t2104t=" ]";
const char* const __t2581t="a*x";
const char* const __t2457t=" ⎤";
const char* const __t2598t="u*a";
const char* const __t2101t="  ";
const char* const __t2088t="[ ";
static const char* __t_all_errcodes[48] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void new__t1497t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2552t(char** __t2625t, uint64_t* __t2626t, uint16_t* __t2627t, uint16_t* __t2628t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2625t=unsafe_ptr;
  *__t2626t=unsafe_size;
  *__t2627t=unsafe_offset;
  *__t2628t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2629t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2629t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t2630t) {
  char* allocated=*__t2630t;
  if(allocated){
  free(allocated);
  }
  *__t2630t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2631t) {
  int value=0;
  *__t2631t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2632t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2632t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2633t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2633t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2634t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2634t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2635t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2635t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2636t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2636t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2637t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2637t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2638t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2638t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t2639t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2639t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t2640t, uint64_t* __t2641t, uint16_t* __t2642t, uint16_t* __t2643t, uint64_t size, char** __t2644t, uint64_t* __t2645t, uint16_t* __t2646t, uint16_t* __t2647t) {
  char* buffer__unsafe_ptr=*__t2640t;
  uint64_t buffer__unsafe_size=*__t2641t;
  uint16_t buffer__unsafe_offset=*__t2642t;
  uint16_t buffer__unsafe_align=*__t2643t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2640t=buffer__unsafe_ptr;
  *__t2641t=buffer__unsafe_size;
  *__t2642t=buffer__unsafe_offset;
  *__t2643t=buffer__unsafe_align;
  *__t2644t=buffer__unsafe_ptr;
  *__t2645t=buffer__unsafe_size;
  *__t2646t=buffer__unsafe_offset;
  *__t2647t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2648t) {
  goto __t_return;
  __t_return:
  *__t2648t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t2649t) {
  int __t225t__=0;
  uint64_t zero=0;
  char __t226t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t225t__);
  zero=0;
  eq__t119t(y,zero,&__t226t__);
  if(__t226t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2649t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2650t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2650t=z;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2651t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2651t=z;
}

static inline __attribute__((always_inline)) void mat__t1494t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2652t, uint64_t* __t2653t, uint64_t* __t2654t, uint64_t* __t2655t, uint64_t* __t2656t) {
  char* __t1496t__unsafe_ptr=0;
  uint64_t __t1496t__pos=0;
  uint64_t __t1496t__rows=0;
  uint64_t __t1496t__cols=0;
  uint64_t __t1496t__stride=0;
  __t1496t__unsafe_ptr=unsafe_ptr;
  __t1496t__pos=pos;
  __t1496t__rows=rows;
  __t1496t__cols=cols;
  __t1496t__stride=stride;
  goto __t_return;
  __t_return:
  *__t2652t=__t1496t__unsafe_ptr;
  *__t2653t=__t1496t__pos;
  *__t2654t=__t1496t__rows;
  *__t2655t=__t1496t__cols;
  *__t2656t=__t1496t__stride;
}

static inline __attribute__((always_inline)) int mat__t2132t(char** __t2657t, uint64_t* __t2658t, uint16_t* __t2659t, uint16_t* __t2660t, uint64_t* __t2661t, uint64_t rows, uint64_t cols, char** __t2662t, uint64_t* __t2663t, uint64_t* __t2664t, uint64_t* __t2665t, uint64_t* __t2666t) {
  char* allocator__buf__unsafe_ptr=*__t2657t;
  uint64_t allocator__buf__unsafe_size=*__t2658t;
  uint16_t allocator__buf__unsafe_offset=*__t2659t;
  uint16_t allocator__buf__unsafe_align=*__t2660t;
  uint64_t allocator__pos=*__t2661t;
  uint64_t __t2133t__=0;
  uint64_t __t2134t=0;
  char __t2135t__=0;
  uint64_t __t2136t__=0;
  uint64_t __t2137t=0;
  char __t2138t__=0;
  uint64_t __t2139t__=0;
  uint64_t __t2140t__=0;
  uint64_t __t2141t__=0;
  char __t2142t__=0;
  uint64_t start=0;
  uint64_t __t2143t__=0;
  uint64_t __t2144t__=0;
  char* __t2145t__unsafe_ptr=0;
  uint64_t __t2145t__pos=0;
  uint64_t __t2145t__rows=0;
  uint64_t __t2145t__cols=0;
  uint64_t __t2145t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t509t(allocator__buf__unsafe_align,&__t2133t__);
  __t2134t=8;
  neq__t143t(__t2133t__,__t2134t,&__t2135t__);
  if(__t2135t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t509t(allocator__buf__unsafe_offset,&__t2136t__);
  __t2137t=0;
  neq__t143t(__t2136t__,__t2137t,&__t2138t__);
  if(__t2138t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t198t(rows,cols,&__t2139t__);
  add__t174t(allocator__pos,__t2139t__,&__t2140t__);
  len__t601t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t2141t__);
  gt__t275t(__t2140t__,__t2141t__,&__t2142t__);
  if(__t2142t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t198t(rows,cols,&__t2143t__);
  add__t174t(allocator__pos,__t2143t__,&__t2144t__);
  allocator__pos=__t2144t__;
  mat__t1494t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t2145t__unsafe_ptr,&__t2145t__pos,&__t2145t__rows,&__t2145t__cols,&__t2145t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2657t=allocator__buf__unsafe_ptr;
  *__t2658t=allocator__buf__unsafe_size;
  *__t2659t=allocator__buf__unsafe_offset;
  *__t2660t=allocator__buf__unsafe_align;
  *__t2661t=allocator__pos;
  *__t2662t=__t2145t__unsafe_ptr;
  *__t2663t=__t2145t__pos;
  *__t2664t=__t2145t__rows;
  *__t2665t=__t2145t__cols;
  *__t2666t=__t2145t__stride;
  
  return __t_errcode;
}

int mat__t2155t(char** __t2667t, uint64_t* __t2668t, uint16_t* __t2669t, uint16_t* __t2670t, uint64_t rows, char** __t2671t, uint64_t* __t2672t, uint64_t* __t2673t, uint64_t* __t2674t, uint64_t* __t2675t) {
  char* buf__unsafe_ptr=*__t2667t;
  uint64_t buf__unsafe_size=*__t2668t;
  uint16_t buf__unsafe_offset=*__t2669t;
  uint16_t buf__unsafe_align=*__t2670t;
  uint64_t __t2156t__=0;
  uint64_t __t2157t__=0;
  uint64_t cols=0;
  uint64_t __t2158t__=0;
  uint64_t __t2159t__=0;
  char __t2160t__=0;
  uint64_t __t2161t=0;
  uint64_t __t2162t=0;
  char* __t2163t__unsafe_ptr=0;
  uint64_t __t2163t__pos=0;
  uint64_t __t2163t__rows=0;
  uint64_t __t2163t__cols=0;
  uint64_t __t2163t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2156t__);
  __t_errcode=div__t224t(__t2156t__,rows,&__t2157t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2157t__;
  mul__t198t(cols,rows,&__t2158t__);
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2159t__);
  neq__t143t(__t2158t__,__t2159t__,&__t2160t__);
  if(__t2160t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t2161t=0;
  __t2162t=__t2161t;
  __t_errcode=mat__t2132t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2162t,rows,cols,&__t2163t__unsafe_ptr,&__t2163t__pos,&__t2163t__rows,&__t2163t__cols,&__t2163t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2667t=buf__unsafe_ptr;
  *__t2668t=buf__unsafe_size;
  *__t2669t=buf__unsafe_offset;
  *__t2670t=buf__unsafe_align;
  *__t2671t=__t2163t__unsafe_ptr;
  *__t2672t=__t2163t__pos;
  *__t2673t=__t2163t__rows;
  *__t2674t=__t2163t__cols;
  *__t2675t=__t2163t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2676t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2676t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2677t) {
  *__t2677t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2678t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2678t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t2183t(char** __t2679t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2680t) {
  char* m__unsafe_ptr=*__t2679t;
  char __t2184t__=0;
  char __t2185t__=0;
  uint64_t __t2186t=0;
  uint64_t __t2187t__=0;
  uint64_t __t2188t__=0;
  uint64_t __t2189t__=0;
  uint64_t __t2190t__=0;
  char* __t2191t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,m__rows,&__t2184t__);
  if(__t2184t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t323t(j,m__cols,&__t2185t__);
  if(__t2185t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2186t=8;
  mul__t198t(i,m__stride,&__t2187t__);
  add__t174t(__t2187t__,j,&__t2188t__);
  add__t174t(m__pos,__t2188t__,&__t2189t__);
  mul__t198t(__t2186t,__t2189t__,&__t2190t__);
  add__t507t(m__unsafe_ptr,__t2190t__,&__t2191t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2679t=m__unsafe_ptr;
  *__t2680t=__t2191t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2572t(char** __t2681t, uint64_t* __t2682t, uint16_t* __t2683t, uint16_t* __t2684t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2681t=unsafe_ptr;
  *__t2682t=unsafe_size;
  *__t2683t=unsafe_offset;
  *__t2684t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1491t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2685t, uint64_t* __t2686t, uint64_t* __t2687t) {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__pos=0;
  uint64_t __t1493t__length=0;
  __t1493t__unsafe_ptr=unsafe_ptr;
  __t1493t__pos=pos;
  __t1493t__length=length;
  goto __t_return;
  __t_return:
  *__t2685t=__t1493t__unsafe_ptr;
  *__t2686t=__t1493t__pos;
  *__t2687t=__t1493t__length;
}

static inline __attribute__((always_inline)) int vec__t1543t(char** __t2688t, uint64_t* __t2689t, uint16_t* __t2690t, uint16_t* __t2691t, char** __t2692t, uint64_t* __t2693t, uint64_t* __t2694t) {
  char* buf__unsafe_ptr=*__t2688t;
  uint64_t buf__unsafe_size=*__t2689t;
  uint16_t buf__unsafe_offset=*__t2690t;
  uint16_t buf__unsafe_align=*__t2691t;
  uint64_t __t1544t__=0;
  uint64_t __t1545t=0;
  char __t1546t__=0;
  uint64_t __t1547t__=0;
  uint64_t __t1548t=0;
  char __t1549t__=0;
  uint64_t __t1550t=0;
  uint64_t __t1551t__=0;
  char* __t1552t__unsafe_ptr=0;
  uint64_t __t1552t__pos=0;
  uint64_t __t1552t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t509t(buf__unsafe_align,&__t1544t__);
  __t1545t=8;
  neq__t143t(__t1544t__,__t1545t,&__t1546t__);
  if(__t1546t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t1547t__);
  __t1548t=0;
  neq__t143t(__t1547t__,__t1548t,&__t1549t__);
  if(__t1549t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1550t=0;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1551t__);
  vec__t1491t(buf__unsafe_ptr,__t1550t,__t1551t__,&__t1552t__unsafe_ptr,&__t1552t__pos,&__t1552t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2688t=buf__unsafe_ptr;
  *__t2689t=buf__unsafe_size;
  *__t2690t=buf__unsafe_offset;
  *__t2691t=buf__unsafe_align;
  *__t2692t=__t1552t__unsafe_ptr;
  *__t2693t=__t1552t__pos;
  *__t2694t=__t1552t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t365t(const char* value, const char** __t2695t, const char** __t2696t) {
  goto __t_return;
  __t_return:
  *__t2695t=value;
  *__t2696t=__t366t;
}

static inline __attribute__((always_inline)) void print__t370t(const char* value, const char* endl) {
  int __t371t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1503t(char** __t2697t, uint64_t* __t2698t, uint16_t* __t2699t, uint16_t* __t2700t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2697t=unsafe_ptr;
  *__t2698t=unsafe_size;
  *__t2699t=unsafe_offset;
  *__t2700t=unsafe_align;
}

int vec__t1537t(uint64_t length, char** __t2701t, uint64_t* __t2702t, uint64_t* __t2703t) {
  char* __t1538t__unsafe_ptr=0;
  uint64_t __t1538t__unsafe_size=0;
  uint16_t __t1538t__unsafe_offset=0;
  uint16_t __t1538t__unsafe_align=0;
  char* __t1539t__unsafe_ptr=0;
  uint64_t __t1539t__unsafe_size=0;
  uint16_t __t1539t__unsafe_offset=0;
  uint16_t __t1539t__unsafe_align=0;
  char __t1540t____t514t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1541t=0;
  char* __t1542t__unsafe_ptr=0;
  uint64_t __t1542t__pos=0;
  uint64_t __t1542t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1503t(&__t1538t__unsafe_ptr,&__t1538t__unsafe_size,&__t1538t__unsafe_offset,&__t1538t__unsafe_align);
  __t_errcode=alloc__t512t(&__t1538t__unsafe_ptr,&__t1538t__unsafe_size,&__t1538t__unsafe_offset,&__t1538t__unsafe_align,length,&__t1539t__unsafe_ptr,&__t1539t__unsafe_size,&__t1539t__unsafe_offset,&__t1539t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1541t=0;
  vec__t1491t(__t1539t__unsafe_ptr,__t1541t,length,&__t1542t__unsafe_ptr,&__t1542t__pos,&__t1542t__length);
  __t1542t__unsafe_ptr=__t1539t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t439t(__t1542t__unsafe_ptr,&__t1540t____t514t__);
  if(__t1540t____t514t__){
  free__t505t(&__t1542t__unsafe_ptr);
  }
  __t_return:
  *__t2701t=__t1542t__unsafe_ptr;
  *__t2702t=__t1542t__pos;
  *__t2703t=__t1542t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t2704t, uint64_t* __t2705t) {
  int __t465t=0;
  uint64_t __t466t=0;
  uint64_t _from=0;
  uint64_t __t467t=0;
  uint64_t from=0;
  __t466t=0;
  _from=__t466t;
  __t467t=_from;
  from=__t467t;
  goto __t_return;
  __t_return:
  *__t2704t=from;
  *__t2705t=to;
}

static inline __attribute__((always_inline)) int next__t473t(uint64_t* __t2706t, uint64_t r__to, uint64_t* __t2707t) {
  uint64_t r__from=*__t2706t;
  char __t474t__=0;
  uint64_t ret=0;
  uint64_t __t475t=0;
  uint64_t __t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t474t__);
  if(__t474t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t475t=1;
  add__t174t(ret,__t475t,&__t476t__);
  r__from=__t476t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2706t=r__from;
  *__t2707t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2192t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2708t) {
  char __t2193t__=0;
  char __t2194t__=0;
  uint64_t __t2195t=0;
  uint64_t __t2196t__=0;
  uint64_t __t2197t__=0;
  uint64_t __t2198t__=0;
  uint64_t __t2199t__=0;
  char* __t2200t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,m__rows,&__t2193t__);
  if(__t2193t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t323t(j,m__cols,&__t2194t__);
  if(__t2194t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2195t=8;
  mul__t198t(i,m__stride,&__t2196t__);
  add__t174t(__t2196t__,j,&__t2197t__);
  add__t174t(m__pos,__t2197t__,&__t2198t__);
  mul__t198t(__t2195t,__t2198t__,&__t2199t__);
  add__t507t(m__unsafe_ptr,__t2199t__,&__t2200t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2708t=__t2200t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1598t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2709t) {
  char __t1599t__=0;
  uint64_t __t1600t=0;
  uint64_t __t1601t__=0;
  uint64_t __t1602t__=0;
  char* __t1603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,v__length,&__t1599t__);
  if(__t1599t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1600t=8;
  add__t174t(i,v__pos,&__t1601t__);
  mul__t198t(__t1600t,__t1601t__,&__t1602t__);
  add__t507t(v__unsafe_ptr,__t1602t__,&__t1603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2709t=__t1603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2710t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2710t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2711t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2711t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2712t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2712t=z;
}

static inline __attribute__((always_inline)) int mutget__t1592t(char** __t2713t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2714t) {
  char* v__unsafe_ptr=*__t2713t;
  char __t1593t__=0;
  uint64_t __t1594t=0;
  uint64_t __t1595t__=0;
  uint64_t __t1596t__=0;
  char* __t1597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,v__length,&__t1593t__);
  if(__t1593t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1594t=8;
  add__t174t(i,v__pos,&__t1595t__);
  mul__t198t(__t1594t,__t1595t__,&__t1596t__);
  add__t507t(v__unsafe_ptr,__t1596t__,&__t1597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2713t=v__unsafe_ptr;
  *__t2714t=__t1597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2231t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2715t, uint64_t* __t2716t, uint64_t* __t2717t) {
  char __t2232t__=0;
  char* __t2233t__unsafe_ptr=0;
  uint64_t __t2233t__pos=0;
  uint64_t __t2233t__length=0;
  char __t2234t____t1540t____t514t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2235t__from=0;
  uint64_t __t2235t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2236t=0;
  uint64_t __t2237t__=0;
  uint64_t i=0;
  double __t2238t=0;
  double __t2239t=0;
  double acc=0;
  uint64_t __t2240t__from=0;
  uint64_t __t2240t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2241t=0;
  uint64_t __t2242t__=0;
  uint64_t j=0;
  char* __t2243t__=0;
  double __t2244t__number=0;
  char* __t2245t__=0;
  double __t2246t__number=0;
  double __t2247t__=0;
  double __t2248t__=0;
  char* __t2249t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m__cols,v__length,&__t2232t__);
  if(__t2232t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1537t(m__rows,&__t2233t__unsafe_ptr,&__t2233t__pos,&__t2233t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2233t__unsafe_ptr;
  result__pos=__t2233t__pos;
  result__length=__t2233t__length;
  range__t464t(m__rows,&__t2235t__from,&__t2235t__to);
  it_i__from=__t2235t__from;
  it_i__to=__t2235t__to;
  while(1){
  __t_complain=next__t473t(&it_i__from,it_i__to,&__t2237t__);
  __t2236t=__t_complain;
  i=__t2237t__;
  __t2236t=__t2236t==0;
  if(!__t2236t){
  break;
  }
  __t2238t=0.0;
  __t2239t=__t2238t;
  acc=__t2239t;
  range__t464t(m__cols,&__t2240t__from,&__t2240t__to);
  it_j__from=__t2240t__from;
  it_j__to=__t2240t__to;
  while(1){
  __t_complain=next__t473t(&it_j__from,it_j__to,&__t2242t__);
  __t2241t=__t_complain;
  j=__t2242t__;
  __t2241t=__t2241t==0;
  if(!__t2241t){
  break;
  }
  __t_errcode=get__t2192t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2243t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2243t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2244t__number,__t2243t__,8);
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,j,&__t2245t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2245t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2246t__number,__t2245t__,8);
  mul__t176t(__t2244t__number,__t2246t__number,&__t2247t__);
  add__t152t(acc,__t2247t__,&__t2248t__);
  acc=__t2248t__;
  }
  __t_errcode=mutget__t1592t(&result__unsafe_ptr,result__pos,result__length,i,&__t2249t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2249t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2249t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t439t(result__unsafe_ptr,&__t2234t____t1540t____t514t__);
  if(__t2234t____t1540t____t514t__){
  free__t505t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2715t=result__unsafe_ptr;
  *__t2716t=result__pos;
  *__t2717t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t367t(double value, double* __t2718t, const char** __t2719t) {
  goto __t_return;
  __t_return:
  *__t2718t=value;
  *__t2719t=__t366t;
}

static inline __attribute__((always_inline)) void print__t375t(double value, const char* endl) {
  int __t376t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2720t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2720t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2721t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2721t=z;
  
  return __t_errcode;
}

int print__t2106t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t2107t=0;
  const char* endl=0;
  const char* __t2108t__value=0;
  const char* __t2108t____t366t=0;
  uint64_t __t2110t__from=0;
  uint64_t __t2110t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2111t=0;
  uint64_t __t2112t__=0;
  uint64_t i=0;
  char* __t2113t__=0;
  double __t2114t__number=0;
  double __t2115t__value=0;
  const char* __t2115t____t366t=0;
  uint64_t __t2117t=0;
  uint64_t __t2118t__=0;
  char __t2119t__=0;
  const char* __t2120t__value=0;
  const char* __t2120t____t366t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t374t;
  nn__t365t(__t2088t,&__t2108t__value,&__t2108t____t366t);
  print__t370t(__t2108t__value,__t2108t____t366t);
  range__t464t(v__length,&__t2110t__from,&__t2110t__to);
  it__from=__t2110t__from;
  it__to=__t2110t__to;
  while(1){
  __t_complain=next__t473t(&it__from,it__to,&__t2112t__);
  __t2111t=__t_complain;
  i=__t2112t__;
  __t2111t=__t2111t==0;
  if(!__t2111t){
  break;
  }
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,i,&__t2113t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2113t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2114t__number,__t2113t__,8);
  nn__t367t(__t2114t__number,&__t2115t__value,&__t2115t____t366t);
  print__t375t(__t2115t__value,__t2115t____t366t);
  __t2117t=1;
  __t_errcode=sub__t351t(v__length,__t2117t,&__t2118t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2118t__,&__t2119t__);
  if(__t2119t__){
  nn__t365t(__t2101t,&__t2120t__value,&__t2120t____t366t);
  print__t370t(__t2120t__value,__t2120t____t366t);
  }
  }
  print__t370t(__t2104t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2590t(char** __t2722t, uint64_t* __t2723t, uint16_t* __t2724t, uint16_t* __t2725t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2722t=unsafe_ptr;
  *__t2723t=unsafe_size;
  *__t2724t=unsafe_offset;
  *__t2725t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2286t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2726t, uint64_t* __t2727t, uint64_t* __t2728t) {
  char __t2287t__=0;
  char* __t2288t__unsafe_ptr=0;
  uint64_t __t2288t__pos=0;
  uint64_t __t2288t__length=0;
  char __t2289t____t1540t____t514t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2290t__from=0;
  uint64_t __t2290t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2291t=0;
  uint64_t __t2292t__=0;
  uint64_t j=0;
  double __t2293t=0;
  double __t2294t=0;
  double acc=0;
  uint64_t __t2295t__from=0;
  uint64_t __t2295t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2296t=0;
  uint64_t __t2297t__=0;
  uint64_t i=0;
  char* __t2298t__=0;
  double __t2299t__number=0;
  char* __t2300t__=0;
  double __t2301t__number=0;
  double __t2302t__=0;
  double __t2303t__=0;
  char* __t2304t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v__length,m__rows,&__t2287t__);
  if(__t2287t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1537t(m__cols,&__t2288t__unsafe_ptr,&__t2288t__pos,&__t2288t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2288t__unsafe_ptr;
  result__pos=__t2288t__pos;
  result__length=__t2288t__length;
  range__t464t(m__cols,&__t2290t__from,&__t2290t__to);
  it_j__from=__t2290t__from;
  it_j__to=__t2290t__to;
  while(1){
  __t_complain=next__t473t(&it_j__from,it_j__to,&__t2292t__);
  __t2291t=__t_complain;
  j=__t2292t__;
  __t2291t=__t2291t==0;
  if(!__t2291t){
  break;
  }
  __t2293t=0.0;
  __t2294t=__t2293t;
  acc=__t2294t;
  range__t464t(m__rows,&__t2295t__from,&__t2295t__to);
  it_i__from=__t2295t__from;
  it_i__to=__t2295t__to;
  while(1){
  __t_complain=next__t473t(&it_i__from,it_i__to,&__t2297t__);
  __t2296t=__t_complain;
  i=__t2297t__;
  __t2296t=__t2296t==0;
  if(!__t2296t){
  break;
  }
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,i,&__t2298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2298t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2299t__number,__t2298t__,8);
  __t_errcode=get__t2192t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2300t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2300t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2301t__number,__t2300t__,8);
  mul__t176t(__t2299t__number,__t2301t__number,&__t2302t__);
  add__t152t(acc,__t2302t__,&__t2303t__);
  acc=__t2303t__;
  }
  __t_errcode=mutget__t1592t(&result__unsafe_ptr,result__pos,result__length,j,&__t2304t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2304t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2304t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t439t(result__unsafe_ptr,&__t2289t____t1540t____t514t__);
  if(__t2289t____t1540t____t514t__){
  free__t505t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2726t=result__unsafe_ptr;
  *__t2727t=result__pos;
  *__t2728t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2607t(char** __t2729t, uint64_t* __t2730t, uint16_t* __t2731t, uint16_t* __t2732t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2729t=unsafe_ptr;
  *__t2730t=unsafe_size;
  *__t2731t=unsafe_offset;
  *__t2732t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t2125t(uint64_t rows, uint64_t cols, char** __t2733t, uint64_t* __t2734t, uint64_t* __t2735t, uint64_t* __t2736t, uint64_t* __t2737t) {
  char* __t2126t__unsafe_ptr=0;
  uint64_t __t2126t__unsafe_size=0;
  uint16_t __t2126t__unsafe_offset=0;
  uint16_t __t2126t__unsafe_align=0;
  uint64_t __t2127t__=0;
  char* __t2128t__unsafe_ptr=0;
  uint64_t __t2128t__unsafe_size=0;
  uint16_t __t2128t__unsafe_offset=0;
  uint16_t __t2128t__unsafe_align=0;
  char __t2129t____t514t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t2130t=0;
  char* __t2131t__unsafe_ptr=0;
  uint64_t __t2131t__pos=0;
  uint64_t __t2131t__rows=0;
  uint64_t __t2131t__cols=0;
  uint64_t __t2131t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1503t(&__t2126t__unsafe_ptr,&__t2126t__unsafe_size,&__t2126t__unsafe_offset,&__t2126t__unsafe_align);
  mul__t198t(rows,cols,&__t2127t__);
  __t_errcode=alloc__t512t(&__t2126t__unsafe_ptr,&__t2126t__unsafe_size,&__t2126t__unsafe_offset,&__t2126t__unsafe_align,__t2127t__,&__t2128t__unsafe_ptr,&__t2128t__unsafe_size,&__t2128t__unsafe_offset,&__t2128t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2128t__unsafe_ptr;
  buf__unsafe_size=__t2128t__unsafe_size;
  buf__unsafe_offset=__t2128t__unsafe_offset;
  buf__unsafe_align=__t2128t__unsafe_align;
  __t2130t=0;
  mat__t1494t(buf__unsafe_ptr,__t2130t,rows,cols,cols,&__t2131t__unsafe_ptr,&__t2131t__pos,&__t2131t__rows,&__t2131t__cols,&__t2131t__stride);
  goto __t_return;
  
  __t_failure:exists__t439t(__t2131t__unsafe_ptr,&__t2129t____t514t__);
  if(__t2129t____t514t__){
  free__t505t(&__t2131t__unsafe_ptr);
  }
  __t_return:
  *__t2733t=__t2131t__unsafe_ptr;
  *__t2734t=__t2131t__pos;
  *__t2735t=__t2131t__rows;
  *__t2736t=__t2131t__cols;
  *__t2737t=__t2131t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2341t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2738t, uint64_t* __t2739t, uint64_t* __t2740t, uint64_t* __t2741t, uint64_t* __t2742t) {
  char __t2342t__=0;
  char* __t2343t__unsafe_ptr=0;
  uint64_t __t2343t__pos=0;
  uint64_t __t2343t__rows=0;
  uint64_t __t2343t__cols=0;
  uint64_t __t2343t__stride=0;
  char __t2344t____t2129t____t514t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2345t__from=0;
  uint64_t __t2345t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2346t=0;
  uint64_t __t2347t__=0;
  uint64_t i=0;
  uint64_t __t2348t__from=0;
  uint64_t __t2348t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2349t=0;
  uint64_t __t2350t__=0;
  uint64_t j=0;
  double __t2351t=0;
  double __t2352t=0;
  double acc=0;
  uint64_t __t2353t__from=0;
  uint64_t __t2353t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2354t=0;
  uint64_t __t2355t__=0;
  uint64_t k=0;
  char* __t2356t__=0;
  double __t2357t__number=0;
  char* __t2358t__=0;
  double __t2359t__number=0;
  double __t2360t__=0;
  double __t2361t__=0;
  char* __t2362t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m1__cols,m2__rows,&__t2342t__);
  if(__t2342t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t2125t(m1__rows,m2__cols,&__t2343t__unsafe_ptr,&__t2343t__pos,&__t2343t__rows,&__t2343t__cols,&__t2343t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2343t__unsafe_ptr;
  result__pos=__t2343t__pos;
  result__rows=__t2343t__rows;
  result__cols=__t2343t__cols;
  result__stride=__t2343t__stride;
  range__t464t(m1__rows,&__t2345t__from,&__t2345t__to);
  it_i__from=__t2345t__from;
  it_i__to=__t2345t__to;
  while(1){
  __t_complain=next__t473t(&it_i__from,it_i__to,&__t2347t__);
  __t2346t=__t_complain;
  i=__t2347t__;
  __t2346t=__t2346t==0;
  if(!__t2346t){
  break;
  }
  range__t464t(m2__cols,&__t2348t__from,&__t2348t__to);
  it_j__from=__t2348t__from;
  it_j__to=__t2348t__to;
  while(1){
  __t_complain=next__t473t(&it_j__from,it_j__to,&__t2350t__);
  __t2349t=__t_complain;
  j=__t2350t__;
  __t2349t=__t2349t==0;
  if(!__t2349t){
  break;
  }
  __t2351t=0.0;
  __t2352t=__t2351t;
  acc=__t2352t;
  range__t464t(m1__cols,&__t2353t__from,&__t2353t__to);
  it_k__from=__t2353t__from;
  it_k__to=__t2353t__to;
  while(1){
  __t_complain=next__t473t(&it_k__from,it_k__to,&__t2355t__);
  __t2354t=__t_complain;
  k=__t2355t__;
  __t2354t=__t2354t==0;
  if(!__t2354t){
  break;
  }
  __t_errcode=get__t2192t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2356t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2356t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2357t__number,__t2356t__,8);
  __t_errcode=get__t2192t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2358t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2358t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2359t__number,__t2358t__,8);
  mul__t176t(__t2357t__number,__t2359t__number,&__t2360t__);
  add__t152t(acc,__t2360t__,&__t2361t__);
  acc=__t2361t__;
  }
  __t_errcode=mutget__t2183t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2362t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2362t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2362t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t439t(result__unsafe_ptr,&__t2344t____t2129t____t514t__);
  if(__t2344t____t2129t____t514t__){
  free__t505t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2738t=result__unsafe_ptr;
  *__t2739t=result__pos;
  *__t2740t=result__rows;
  *__t2741t=result__cols;
  *__t2742t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2479t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2480t=0;
  const char* endl=0;
  uint64_t __t2481t__from=0;
  uint64_t __t2481t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2482t=0;
  uint64_t __t2483t__=0;
  uint64_t i=0;
  uint64_t __t2484t=0;
  char __t2485t__=0;
  uint64_t __t2487t=0;
  char __t2488t__=0;
  uint64_t __t2489t=0;
  char __t2490t__=0;
  char __t2491t=0;
  uint64_t __t2493t=0;
  char __t2494t__=0;
  uint64_t __t2495t=0;
  char __t2496t__=0;
  uint64_t __t2497t=0;
  uint64_t __t2498t__=0;
  char __t2499t__=0;
  char __t2500t=0;
  char __t2501t=0;
  uint64_t __t2503t=0;
  char __t2504t__=0;
  uint64_t __t2505t=0;
  uint64_t __t2506t__=0;
  char __t2507t__=0;
  char __t2508t=0;
  uint64_t __t2510t__from=0;
  uint64_t __t2510t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2511t=0;
  uint64_t __t2512t__=0;
  uint64_t j=0;
  char* __t2513t__=0;
  double __t2514t__number=0;
  uint64_t __t2516t=0;
  uint64_t __t2517t__=0;
  char __t2518t__=0;
  uint64_t __t2520t=0;
  char __t2521t__=0;
  uint64_t __t2523t=0;
  char __t2524t__=0;
  uint64_t __t2525t=0;
  char __t2526t__=0;
  char __t2527t=0;
  uint64_t __t2529t=0;
  char __t2530t__=0;
  uint64_t __t2531t=0;
  char __t2532t__=0;
  uint64_t __t2533t=0;
  uint64_t __t2534t__=0;
  char __t2535t__=0;
  char __t2536t=0;
  char __t2537t=0;
  uint64_t __t2539t=0;
  char __t2540t__=0;
  uint64_t __t2541t=0;
  uint64_t __t2542t__=0;
  char __t2543t__=0;
  char __t2544t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t374t;
  range__t464t(m__rows,&__t2481t__from,&__t2481t__to);
  it_i__from=__t2481t__from;
  it_i__to=__t2481t__to;
  while(1){
  __t_complain=next__t473t(&it_i__from,it_i__to,&__t2483t__);
  __t2482t=__t_complain;
  i=__t2483t__;
  __t2482t=__t2482t==0;
  if(!__t2482t){
  break;
  }
  __t2484t=1;
  eq__t119t(m__rows,__t2484t,&__t2485t__);
  if(__t2485t__){
  print__t370t(__t2088t,__t366t);
  }
  __t2487t=1;
  gt__t275t(m__rows,__t2487t,&__t2488t__);
  if(__t2488t__){
  __t2489t=0;
  eq__t119t(i,__t2489t,&__t2490t__);
  __t2491t=__t2490t__;
  }
  {
  __t2491t=0;
  }
  if(__t2491t){
  print__t370t(__t2418t,__t366t);
  }
  __t2493t=1;
  gt__t275t(m__rows,__t2493t,&__t2494t__);
  if(__t2494t__){
  __t2495t=0;
  gt__t275t(i,__t2495t,&__t2496t__);
  if(__t2496t__){
  __t2497t=1;
  __t_errcode=sub__t351t(m__rows,__t2497t,&__t2498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2498t__,&__t2499t__);
  __t2500t=__t2499t__;
  }
  {
  __t2500t=0;
  }
  __t2501t=__t2500t;
  }
  {
  __t2501t=0;
  }
  if(__t2501t){
  print__t370t(__t2429t,__t366t);
  }
  __t2503t=1;
  gt__t275t(m__rows,__t2503t,&__t2504t__);
  if(__t2504t__){
  __t2505t=1;
  __t_errcode=sub__t351t(m__rows,__t2505t,&__t2506t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2506t__,&__t2507t__);
  __t2508t=__t2507t__;
  }
  {
  __t2508t=0;
  }
  if(__t2508t){
  print__t370t(__t2437t,__t366t);
  }
  range__t464t(m__cols,&__t2510t__from,&__t2510t__to);
  it_j__from=__t2510t__from;
  it_j__to=__t2510t__to;
  while(1){
  __t_complain=next__t473t(&it_j__from,it_j__to,&__t2512t__);
  __t2511t=__t_complain;
  j=__t2512t__;
  __t2511t=__t2511t==0;
  if(!__t2511t){
  break;
  }
  __t_errcode=get__t2192t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2513t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2513t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2514t__number,__t2513t__,8);
  print__t375t(__t2514t__number,__t366t);
  __t2516t=1;
  __t_errcode=sub__t351t(m__cols,__t2516t,&__t2517t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(j,__t2517t__,&__t2518t__);
  if(__t2518t__){
  print__t370t(__t2101t,__t366t);
  }
  }
  __t2520t=1;
  eq__t119t(m__rows,__t2520t,&__t2521t__);
  if(__t2521t__){
  print__t370t(__t2104t,__t366t);
  }
  __t2523t=1;
  gt__t275t(m__rows,__t2523t,&__t2524t__);
  if(__t2524t__){
  __t2525t=0;
  eq__t119t(i,__t2525t,&__t2526t__);
  __t2527t=__t2526t__;
  }
  {
  __t2527t=0;
  }
  if(__t2527t){
  print__t370t(__t2457t,__t366t);
  }
  __t2529t=1;
  gt__t275t(m__rows,__t2529t,&__t2530t__);
  if(__t2530t__){
  __t2531t=0;
  gt__t275t(i,__t2531t,&__t2532t__);
  if(__t2532t__){
  __t2533t=1;
  __t_errcode=sub__t351t(m__rows,__t2533t,&__t2534t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2534t__,&__t2535t__);
  __t2536t=__t2535t__;
  }
  {
  __t2536t=0;
  }
  __t2537t=__t2536t;
  }
  {
  __t2537t=0;
  }
  if(__t2537t){
  print__t370t(__t2468t,__t366t);
  }
  __t2539t=1;
  gt__t275t(m__rows,__t2539t,&__t2540t__);
  if(__t2540t__){
  __t2541t=1;
  __t_errcode=sub__t351t(m__rows,__t2541t,&__t2542t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2542t__,&__t2543t__);
  __t2544t=__t2543t__;
  }
  {
  __t2544t=0;
  }
  if(__t2544t){
  print__t370t(__t2476t,__t366t);
  }
  print__t370t(__t366t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2547t() {
  double __t2549t=0;
  double __t2554t=0;
  double __t2555t=0;
  double __t2556t=0;
  double __t2557t=0;
  double __t2558t=0;
  char* __t2559t__unsafe_ptr=0;
  uint64_t __t2559t__unsafe_size=0;
  uint16_t __t2559t__unsafe_offset=0;
  uint16_t __t2559t__unsafe_align=0;
  uint64_t __t2560t=0;
  char* __t2561t__unsafe_ptr=0;
  uint64_t __t2561t__unsafe_size=0;
  uint16_t __t2561t__unsafe_offset=0;
  uint16_t __t2561t__unsafe_align=0;
  char __t2562t____t514t__=0;
  uint64_t __t2563t=0;
  char* __t2564t__unsafe_ptr=0;
  uint64_t __t2564t__pos=0;
  uint64_t __t2564t__rows=0;
  uint64_t __t2564t__cols=0;
  uint64_t __t2564t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2565t=0;
  uint64_t __t2566t=0;
  char* __t2567t__=0;
  double __t2568t=0;
  double __t2569t=0;
  double __t2574t=0;
  double __t2575t=0;
  char* __t2576t__unsafe_ptr=0;
  uint64_t __t2576t__unsafe_size=0;
  uint16_t __t2576t__unsafe_offset=0;
  uint16_t __t2576t__unsafe_align=0;
  uint64_t __t2577t=0;
  char* __t2578t__unsafe_ptr=0;
  uint64_t __t2578t__unsafe_size=0;
  uint16_t __t2578t__unsafe_offset=0;
  uint16_t __t2578t__unsafe_align=0;
  char __t2579t____t514t__=0;
  char* __t2580t__unsafe_ptr=0;
  uint64_t __t2580t__pos=0;
  uint64_t __t2580t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2582t__value=0;
  const char* __t2582t____t366t=0;
  char* __t2584t__unsafe_ptr=0;
  uint64_t __t2584t__pos=0;
  uint64_t __t2584t__length=0;
  char __t2585t____t2234t____t1540t____t514t__=0;
  double __t2587t=0;
  double __t2592t=0;
  char* __t2593t__unsafe_ptr=0;
  uint64_t __t2593t__unsafe_size=0;
  uint16_t __t2593t__unsafe_offset=0;
  uint16_t __t2593t__unsafe_align=0;
  uint64_t __t2594t=0;
  char* __t2595t__unsafe_ptr=0;
  uint64_t __t2595t__unsafe_size=0;
  uint16_t __t2595t__unsafe_offset=0;
  uint16_t __t2595t__unsafe_align=0;
  char __t2596t____t514t__=0;
  char* __t2597t__unsafe_ptr=0;
  uint64_t __t2597t__pos=0;
  uint64_t __t2597t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2599t__value=0;
  const char* __t2599t____t366t=0;
  char* __t2601t__unsafe_ptr=0;
  uint64_t __t2601t__pos=0;
  uint64_t __t2601t__length=0;
  char __t2602t____t2289t____t1540t____t514t__=0;
  double __t2604t=0;
  double __t2609t=0;
  double __t2610t=0;
  double __t2611t=0;
  double __t2612t=0;
  double __t2613t=0;
  char* __t2614t__unsafe_ptr=0;
  uint64_t __t2614t__unsafe_size=0;
  uint16_t __t2614t__unsafe_offset=0;
  uint16_t __t2614t__unsafe_align=0;
  uint64_t __t2615t=0;
  char* __t2616t__unsafe_ptr=0;
  uint64_t __t2616t__unsafe_size=0;
  uint16_t __t2616t__unsafe_offset=0;
  uint16_t __t2616t__unsafe_align=0;
  char __t2617t____t514t__=0;
  uint64_t __t2618t=0;
  char* __t2619t__unsafe_ptr=0;
  uint64_t __t2619t__pos=0;
  uint64_t __t2619t__rows=0;
  uint64_t __t2619t__cols=0;
  uint64_t __t2619t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2622t__unsafe_ptr=0;
  uint64_t __t2622t__pos=0;
  uint64_t __t2622t__rows=0;
  uint64_t __t2622t__cols=0;
  uint64_t __t2622t__stride=0;
  char __t2623t____t2344t____t2129t____t514t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1497t();
  __t2549t=1.0;
  __t2554t=0.0;
  __t2555t=2.0;
  __t2556t=0.0;
  __t2557t=3.0;
  __t2558t=1.0;
  float____buffer__t2552t(&__t2559t__unsafe_ptr,&__t2559t__unsafe_size,&__t2559t__unsafe_offset,&__t2559t__unsafe_align);
  __t2560t=6;
  __t_errcode=alloc__t512t(&__t2559t__unsafe_ptr,&__t2559t__unsafe_size,&__t2559t__unsafe_offset,&__t2559t__unsafe_align,__t2560t,&__t2561t__unsafe_ptr,&__t2561t__unsafe_size,&__t2561t__unsafe_offset,&__t2561t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2559t__unsafe_ptr,&__t2549t,8);
  memcpy(__t2559t__unsafe_ptr+8,&__t2554t,8);
  memcpy(__t2559t__unsafe_ptr+16,&__t2555t,8);
  memcpy(__t2559t__unsafe_ptr+24,&__t2556t,8);
  memcpy(__t2559t__unsafe_ptr+32,&__t2557t,8);
  memcpy(__t2559t__unsafe_ptr+40,&__t2558t,8);
  __t2563t=2;
  __t_errcode=mat__t2155t(&__t2559t__unsafe_ptr,&__t2559t__unsafe_size,&__t2559t__unsafe_offset,&__t2559t__unsafe_align,__t2563t,&__t2564t__unsafe_ptr,&__t2564t__pos,&__t2564t__rows,&__t2564t__cols,&__t2564t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2564t__unsafe_ptr;
  a__pos=__t2564t__pos;
  a__rows=__t2564t__rows;
  a__cols=__t2564t__cols;
  a__stride=__t2564t__stride;
  __t2565t=0;
  __t2566t=0;
  __t_errcode=mutget__t2183t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2565t,__t2566t,&__t2567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2568t=1.0;
  if(!__t2567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2567t__,&__t2568t,8);
  __t2569t=1.0;
  __t2574t=2.0;
  __t2575t=3.0;
  float____buffer__t2572t(&__t2576t__unsafe_ptr,&__t2576t__unsafe_size,&__t2576t__unsafe_offset,&__t2576t__unsafe_align);
  __t2577t=3;
  __t_errcode=alloc__t512t(&__t2576t__unsafe_ptr,&__t2576t__unsafe_size,&__t2576t__unsafe_offset,&__t2576t__unsafe_align,__t2577t,&__t2578t__unsafe_ptr,&__t2578t__unsafe_size,&__t2578t__unsafe_offset,&__t2578t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2576t__unsafe_ptr,&__t2569t,8);
  memcpy(__t2576t__unsafe_ptr+8,&__t2574t,8);
  memcpy(__t2576t__unsafe_ptr+16,&__t2575t,8);
  __t_errcode=vec__t1543t(&__t2576t__unsafe_ptr,&__t2576t__unsafe_size,&__t2576t__unsafe_offset,&__t2576t__unsafe_align,&__t2580t__unsafe_ptr,&__t2580t__pos,&__t2580t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2580t__unsafe_ptr;
  x__pos=__t2580t__pos;
  x__length=__t2580t__length;
  nn__t365t(__t2581t,&__t2582t__value,&__t2582t____t366t);
  print__t370t(__t2582t__value,__t2582t____t366t);
  __t_errcode=mul__t2231t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2584t__unsafe_ptr,&__t2584t__pos,&__t2584t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2106t(__t2584t__unsafe_ptr,__t2584t__pos,__t2584t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2587t=1.0;
  __t2592t=2.0;
  float____buffer__t2590t(&__t2593t__unsafe_ptr,&__t2593t__unsafe_size,&__t2593t__unsafe_offset,&__t2593t__unsafe_align);
  __t2594t=2;
  __t_errcode=alloc__t512t(&__t2593t__unsafe_ptr,&__t2593t__unsafe_size,&__t2593t__unsafe_offset,&__t2593t__unsafe_align,__t2594t,&__t2595t__unsafe_ptr,&__t2595t__unsafe_size,&__t2595t__unsafe_offset,&__t2595t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2593t__unsafe_ptr,&__t2587t,8);
  memcpy(__t2593t__unsafe_ptr+8,&__t2592t,8);
  __t_errcode=vec__t1543t(&__t2593t__unsafe_ptr,&__t2593t__unsafe_size,&__t2593t__unsafe_offset,&__t2593t__unsafe_align,&__t2597t__unsafe_ptr,&__t2597t__pos,&__t2597t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2597t__unsafe_ptr;
  u__pos=__t2597t__pos;
  u__length=__t2597t__length;
  nn__t365t(__t2598t,&__t2599t__value,&__t2599t____t366t);
  print__t370t(__t2599t__value,__t2599t____t366t);
  __t_errcode=mul__t2286t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2601t__unsafe_ptr,&__t2601t__pos,&__t2601t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2106t(__t2601t__unsafe_ptr,__t2601t__pos,__t2601t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2604t=1.0;
  __t2609t=2.0;
  __t2610t=3.0;
  __t2611t=4.0;
  __t2612t=5.0;
  __t2613t=6.0;
  float____buffer__t2607t(&__t2614t__unsafe_ptr,&__t2614t__unsafe_size,&__t2614t__unsafe_offset,&__t2614t__unsafe_align);
  __t2615t=6;
  __t_errcode=alloc__t512t(&__t2614t__unsafe_ptr,&__t2614t__unsafe_size,&__t2614t__unsafe_offset,&__t2614t__unsafe_align,__t2615t,&__t2616t__unsafe_ptr,&__t2616t__unsafe_size,&__t2616t__unsafe_offset,&__t2616t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2614t__unsafe_ptr,&__t2604t,8);
  memcpy(__t2614t__unsafe_ptr+8,&__t2609t,8);
  memcpy(__t2614t__unsafe_ptr+16,&__t2610t,8);
  memcpy(__t2614t__unsafe_ptr+24,&__t2611t,8);
  memcpy(__t2614t__unsafe_ptr+32,&__t2612t,8);
  memcpy(__t2614t__unsafe_ptr+40,&__t2613t,8);
  __t2618t=3;
  __t_errcode=mat__t2155t(&__t2614t__unsafe_ptr,&__t2614t__unsafe_size,&__t2614t__unsafe_offset,&__t2614t__unsafe_align,__t2618t,&__t2619t__unsafe_ptr,&__t2619t__pos,&__t2619t__rows,&__t2619t__cols,&__t2619t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2619t__unsafe_ptr;
  b__pos=__t2619t__pos;
  b__rows=__t2619t__rows;
  b__cols=__t2619t__cols;
  b__stride=__t2619t__stride;
  print__t372t(__t2620t);
  __t_errcode=mul__t2341t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2622t__unsafe_ptr,&__t2622t__pos,&__t2622t__rows,&__t2622t__cols,&__t2622t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2479t(__t2622t__unsafe_ptr,__t2622t__pos,__t2622t__rows,__t2622t__cols,__t2622t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t439t(__t2622t__unsafe_ptr,&__t2623t____t2344t____t2129t____t514t__);
  if(__t2623t____t2344t____t2129t____t514t__){
  free__t505t(&__t2622t__unsafe_ptr);
  }
  exists__t439t(__t2616t__unsafe_ptr,&__t2617t____t514t__);
  if(__t2617t____t514t__){
  free__t505t(&__t2616t__unsafe_ptr);
  }
  exists__t439t(__t2601t__unsafe_ptr,&__t2602t____t2289t____t1540t____t514t__);
  if(__t2602t____t2289t____t1540t____t514t__){
  free__t505t(&__t2601t__unsafe_ptr);
  }
  exists__t439t(__t2595t__unsafe_ptr,&__t2596t____t514t__);
  if(__t2596t____t514t__){
  free__t505t(&__t2595t__unsafe_ptr);
  }
  exists__t439t(__t2584t__unsafe_ptr,&__t2585t____t2234t____t1540t____t514t__);
  if(__t2585t____t2234t____t1540t____t514t__){
  free__t505t(&__t2584t__unsafe_ptr);
  }
  exists__t439t(__t2578t__unsafe_ptr,&__t2579t____t514t__);
  if(__t2579t____t514t__){
  free__t505t(&__t2578t__unsafe_ptr);
  }
  exists__t439t(__t2561t__unsafe_ptr,&__t2562t____t514t__);
  if(__t2562t____t514t__){
  free__t505t(&__t2561t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}