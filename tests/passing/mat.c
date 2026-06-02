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
const char* const __t2599t="u*a";
const char* const __t2621t="a*b";
const char* const __t2476t=" ⎦";
const char* const __t2429t="⎢ ";
const char* const __t2104t=" ]";
const char* const __t377t="\n";
const char* const __t2582t="a*x";
const char* const __t2457t=" ⎤";
const char* const __t2101t="  ";
const char* const __t369t="";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t1497t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2553t(char** __t2626t, uint64_t* __t2627t, uint16_t* __t2628t, uint16_t* __t2629t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2626t=unsafe_ptr;
  *__t2627t=unsafe_size;
  *__t2628t=unsafe_offset;
  *__t2629t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2630t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2630t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2631t) {
  char* allocated=*__t2631t;
  if(allocated){
  free(allocated);
  }
  *__t2631t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2632t) {
  int value=0;
  *__t2632t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2633t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2633t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2634t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2634t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2635t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2635t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2636t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2636t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2637t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2637t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2638t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2638t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2639t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2639t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2640t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2640t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2641t, uint64_t* __t2642t, uint16_t* __t2643t, uint16_t* __t2644t, uint64_t size, char** __t2645t, uint64_t* __t2646t, uint16_t* __t2647t, uint16_t* __t2648t) {
  char* buffer__unsafe_ptr=*__t2641t;
  uint64_t buffer__unsafe_size=*__t2642t;
  uint16_t buffer__unsafe_offset=*__t2643t;
  uint16_t buffer__unsafe_align=*__t2644t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2641t=buffer__unsafe_ptr;
  *__t2642t=buffer__unsafe_size;
  *__t2643t=buffer__unsafe_offset;
  *__t2644t=buffer__unsafe_align;
  *__t2645t=buffer__unsafe_ptr;
  *__t2646t=buffer__unsafe_size;
  *__t2647t=buffer__unsafe_offset;
  *__t2648t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2649t) {
  goto __t_return;
  __t_return:
  *__t2649t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t2650t) {
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
  *__t2650t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2651t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2651t=z;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2652t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2652t=z;
}

static inline __attribute__((always_inline)) void mat__t1494t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2653t, uint64_t* __t2654t, uint64_t* __t2655t, uint64_t* __t2656t, uint64_t* __t2657t) {
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
  *__t2653t=__t1496t__unsafe_ptr;
  *__t2654t=__t1496t__pos;
  *__t2655t=__t1496t__rows;
  *__t2656t=__t1496t__cols;
  *__t2657t=__t1496t__stride;
}

static inline __attribute__((always_inline)) int mat__t2132t(char** __t2658t, uint64_t* __t2659t, uint16_t* __t2660t, uint16_t* __t2661t, uint64_t* __t2662t, uint64_t rows, uint64_t cols, char** __t2663t, uint64_t* __t2664t, uint64_t* __t2665t, uint64_t* __t2666t, uint64_t* __t2667t) {
  char* allocator__buf__unsafe_ptr=*__t2658t;
  uint64_t allocator__buf__unsafe_size=*__t2659t;
  uint16_t allocator__buf__unsafe_offset=*__t2660t;
  uint16_t allocator__buf__unsafe_align=*__t2661t;
  uint64_t allocator__pos=*__t2662t;
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
  nat__t512t(allocator__buf__unsafe_align,&__t2133t__);
  __t2134t=8;
  neq__t143t(__t2133t__,__t2134t,&__t2135t__);
  if(__t2135t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t512t(allocator__buf__unsafe_offset,&__t2136t__);
  __t2137t=0;
  neq__t143t(__t2136t__,__t2137t,&__t2138t__);
  if(__t2138t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t198t(rows,cols,&__t2139t__);
  add__t174t(allocator__pos,__t2139t__,&__t2140t__);
  len__t604t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t2141t__);
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
  *__t2658t=allocator__buf__unsafe_ptr;
  *__t2659t=allocator__buf__unsafe_size;
  *__t2660t=allocator__buf__unsafe_offset;
  *__t2661t=allocator__buf__unsafe_align;
  *__t2662t=allocator__pos;
  *__t2663t=__t2145t__unsafe_ptr;
  *__t2664t=__t2145t__pos;
  *__t2665t=__t2145t__rows;
  *__t2666t=__t2145t__cols;
  *__t2667t=__t2145t__stride;
  
  return __t_errcode;
}

int mat__t2155t(char** __t2668t, uint64_t* __t2669t, uint16_t* __t2670t, uint16_t* __t2671t, uint64_t rows, char** __t2672t, uint64_t* __t2673t, uint64_t* __t2674t, uint64_t* __t2675t, uint64_t* __t2676t) {
  char* buf__unsafe_ptr=*__t2668t;
  uint64_t buf__unsafe_size=*__t2669t;
  uint16_t buf__unsafe_offset=*__t2670t;
  uint16_t buf__unsafe_align=*__t2671t;
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
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2156t__);
  __t_errcode=div__t224t(__t2156t__,rows,&__t2157t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2157t__;
  mul__t198t(cols,rows,&__t2158t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2159t__);
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
  *__t2668t=buf__unsafe_ptr;
  *__t2669t=buf__unsafe_size;
  *__t2670t=buf__unsafe_offset;
  *__t2671t=buf__unsafe_align;
  *__t2672t=__t2163t__unsafe_ptr;
  *__t2673t=__t2163t__pos;
  *__t2674t=__t2163t__rows;
  *__t2675t=__t2163t__cols;
  *__t2676t=__t2163t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2677t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2677t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2678t) {
  *__t2678t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2679t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2679t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t2183t(char** __t2680t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2681t) {
  char* m__unsafe_ptr=*__t2680t;
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
  add__t510t(m__unsafe_ptr,__t2190t__,&__t2191t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2680t=m__unsafe_ptr;
  *__t2681t=__t2191t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2573t(char** __t2682t, uint64_t* __t2683t, uint16_t* __t2684t, uint16_t* __t2685t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2682t=unsafe_ptr;
  *__t2683t=unsafe_size;
  *__t2684t=unsafe_offset;
  *__t2685t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1491t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2686t, uint64_t* __t2687t, uint64_t* __t2688t) {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__pos=0;
  uint64_t __t1493t__length=0;
  __t1493t__unsafe_ptr=unsafe_ptr;
  __t1493t__pos=pos;
  __t1493t__length=length;
  goto __t_return;
  __t_return:
  *__t2686t=__t1493t__unsafe_ptr;
  *__t2687t=__t1493t__pos;
  *__t2688t=__t1493t__length;
}

static inline __attribute__((always_inline)) int vec__t1543t(char** __t2689t, uint64_t* __t2690t, uint16_t* __t2691t, uint16_t* __t2692t, char** __t2693t, uint64_t* __t2694t, uint64_t* __t2695t) {
  char* buf__unsafe_ptr=*__t2689t;
  uint64_t buf__unsafe_size=*__t2690t;
  uint16_t buf__unsafe_offset=*__t2691t;
  uint16_t buf__unsafe_align=*__t2692t;
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
  nat__t512t(buf__unsafe_align,&__t1544t__);
  __t1545t=8;
  neq__t143t(__t1544t__,__t1545t,&__t1546t__);
  if(__t1546t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t1547t__);
  __t1548t=0;
  neq__t143t(__t1547t__,__t1548t,&__t1549t__);
  if(__t1549t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1550t=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1551t__);
  vec__t1491t(buf__unsafe_ptr,__t1550t,__t1551t__,&__t1552t__unsafe_ptr,&__t1552t__pos,&__t1552t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2689t=buf__unsafe_ptr;
  *__t2690t=buf__unsafe_size;
  *__t2691t=buf__unsafe_offset;
  *__t2692t=buf__unsafe_align;
  *__t2693t=__t1552t__unsafe_ptr;
  *__t2694t=__t1552t__pos;
  *__t2695t=__t1552t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t368t(const char* value, const char** __t2696t, const char** __t2697t) {
  goto __t_return;
  __t_return:
  *__t2696t=value;
  *__t2697t=__t369t;
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1503t(char** __t2698t, uint64_t* __t2699t, uint16_t* __t2700t, uint16_t* __t2701t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2698t=unsafe_ptr;
  *__t2699t=unsafe_size;
  *__t2700t=unsafe_offset;
  *__t2701t=unsafe_align;
}

int vec__t1537t(uint64_t length, char** __t2702t, uint64_t* __t2703t, uint64_t* __t2704t) {
  char* __t1538t__unsafe_ptr=0;
  uint64_t __t1538t__unsafe_size=0;
  uint16_t __t1538t__unsafe_offset=0;
  uint16_t __t1538t__unsafe_align=0;
  char* __t1539t__unsafe_ptr=0;
  uint64_t __t1539t__unsafe_size=0;
  uint16_t __t1539t__unsafe_offset=0;
  uint16_t __t1539t__unsafe_align=0;
  char __t1540t____t517t__=0;
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
  __t_errcode=alloc__t515t(&__t1538t__unsafe_ptr,&__t1538t__unsafe_size,&__t1538t__unsafe_offset,&__t1538t__unsafe_align,length,&__t1539t__unsafe_ptr,&__t1539t__unsafe_size,&__t1539t__unsafe_offset,&__t1539t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1541t=0;
  vec__t1491t(__t1539t__unsafe_ptr,__t1541t,length,&__t1542t__unsafe_ptr,&__t1542t__pos,&__t1542t__length);
  __t1542t__unsafe_ptr=__t1539t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(__t1542t__unsafe_ptr,&__t1540t____t517t__);
  if(__t1540t____t517t__){
  free__t508t(&__t1542t__unsafe_ptr);
  }
  __t_return:
  *__t2702t=__t1542t__unsafe_ptr;
  *__t2703t=__t1542t__pos;
  *__t2704t=__t1542t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2705t, uint64_t* __t2706t) {
  int __t468t=0;
  uint64_t __t469t=0;
  uint64_t _from=0;
  uint64_t __t470t=0;
  uint64_t from=0;
  __t469t=0;
  _from=__t469t;
  __t470t=_from;
  from=__t470t;
  goto __t_return;
  __t_return:
  *__t2705t=from;
  *__t2706t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2707t, uint64_t r__to, uint64_t* __t2708t) {
  uint64_t r__from=*__t2707t;
  char __t477t__=0;
  uint64_t ret=0;
  uint64_t __t478t=0;
  uint64_t __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t478t=1;
  add__t174t(ret,__t478t,&__t479t__);
  r__from=__t479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2707t=r__from;
  *__t2708t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2192t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2709t) {
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
  add__t510t(m__unsafe_ptr,__t2199t__,&__t2200t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2709t=__t2200t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1598t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2710t) {
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
  add__t510t(v__unsafe_ptr,__t1602t__,&__t1603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2710t=__t1603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2711t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2711t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2712t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2712t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2713t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2713t=z;
}

static inline __attribute__((always_inline)) int mutget__t1592t(char** __t2714t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2715t) {
  char* v__unsafe_ptr=*__t2714t;
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
  add__t510t(v__unsafe_ptr,__t1596t__,&__t1597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2714t=v__unsafe_ptr;
  *__t2715t=__t1597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2231t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2716t, uint64_t* __t2717t, uint64_t* __t2718t) {
  char __t2232t__=0;
  char* __t2233t__unsafe_ptr=0;
  uint64_t __t2233t__pos=0;
  uint64_t __t2233t__length=0;
  char __t2234t____t1540t____t517t__=0;
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
  range__t467t(m__rows,&__t2235t__from,&__t2235t__to);
  it_i__from=__t2235t__from;
  it_i__to=__t2235t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2237t__);
  __t2236t=__t_complain;
  i=__t2237t__;
  __t2236t=__t2236t==0;
  if(!__t2236t){
  break;
  }
  __t2238t=0.0;
  __t2239t=__t2238t;
  acc=__t2239t;
  range__t467t(m__cols,&__t2240t__from,&__t2240t__to);
  it_j__from=__t2240t__from;
  it_j__to=__t2240t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2242t__);
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
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2234t____t1540t____t517t__);
  if(__t2234t____t1540t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2716t=result__unsafe_ptr;
  *__t2717t=result__pos;
  *__t2718t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t370t(double value, double* __t2719t, const char** __t2720t) {
  goto __t_return;
  __t_return:
  *__t2719t=value;
  *__t2720t=__t369t;
}

static inline __attribute__((always_inline)) void print__t378t(double value, const char* endl) {
  int __t379t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2721t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2721t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2722t) {
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
  *__t2722t=z;
  
  return __t_errcode;
}

int print__t2106t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t2107t=0;
  const char* endl=0;
  const char* __t2108t__value=0;
  const char* __t2108t____t369t=0;
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
  const char* __t2115t____t369t=0;
  uint64_t __t2117t=0;
  uint64_t __t2118t__=0;
  char __t2119t__=0;
  const char* __t2120t__value=0;
  const char* __t2120t____t369t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t377t;
  nn__t368t(__t2088t,&__t2108t__value,&__t2108t____t369t);
  print__t373t(__t2108t__value,__t2108t____t369t);
  range__t467t(v__length,&__t2110t__from,&__t2110t__to);
  it__from=__t2110t__from;
  it__to=__t2110t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2112t__);
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
  nn__t370t(__t2114t__number,&__t2115t__value,&__t2115t____t369t);
  print__t378t(__t2115t__value,__t2115t____t369t);
  __t2117t=1;
  __t_errcode=sub__t351t(v__length,__t2117t,&__t2118t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2118t__,&__t2119t__);
  if(__t2119t__){
  nn__t368t(__t2101t,&__t2120t__value,&__t2120t____t369t);
  print__t373t(__t2120t__value,__t2120t____t369t);
  }
  }
  print__t373t(__t2104t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2591t(char** __t2723t, uint64_t* __t2724t, uint16_t* __t2725t, uint16_t* __t2726t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2723t=unsafe_ptr;
  *__t2724t=unsafe_size;
  *__t2725t=unsafe_offset;
  *__t2726t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2286t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2727t, uint64_t* __t2728t, uint64_t* __t2729t) {
  char __t2287t__=0;
  char* __t2288t__unsafe_ptr=0;
  uint64_t __t2288t__pos=0;
  uint64_t __t2288t__length=0;
  char __t2289t____t1540t____t517t__=0;
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
  range__t467t(m__cols,&__t2290t__from,&__t2290t__to);
  it_j__from=__t2290t__from;
  it_j__to=__t2290t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2292t__);
  __t2291t=__t_complain;
  j=__t2292t__;
  __t2291t=__t2291t==0;
  if(!__t2291t){
  break;
  }
  __t2293t=0.0;
  __t2294t=__t2293t;
  acc=__t2294t;
  range__t467t(m__rows,&__t2295t__from,&__t2295t__to);
  it_i__from=__t2295t__from;
  it_i__to=__t2295t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2297t__);
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
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2289t____t1540t____t517t__);
  if(__t2289t____t1540t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2727t=result__unsafe_ptr;
  *__t2728t=result__pos;
  *__t2729t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2608t(char** __t2730t, uint64_t* __t2731t, uint16_t* __t2732t, uint16_t* __t2733t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2730t=unsafe_ptr;
  *__t2731t=unsafe_size;
  *__t2732t=unsafe_offset;
  *__t2733t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t2125t(uint64_t rows, uint64_t cols, char** __t2734t, uint64_t* __t2735t, uint64_t* __t2736t, uint64_t* __t2737t, uint64_t* __t2738t) {
  char* __t2126t__unsafe_ptr=0;
  uint64_t __t2126t__unsafe_size=0;
  uint16_t __t2126t__unsafe_offset=0;
  uint16_t __t2126t__unsafe_align=0;
  uint64_t __t2127t__=0;
  char* __t2128t__unsafe_ptr=0;
  uint64_t __t2128t__unsafe_size=0;
  uint16_t __t2128t__unsafe_offset=0;
  uint16_t __t2128t__unsafe_align=0;
  char __t2129t____t517t__=0;
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
  __t_errcode=alloc__t515t(&__t2126t__unsafe_ptr,&__t2126t__unsafe_size,&__t2126t__unsafe_offset,&__t2126t__unsafe_align,__t2127t__,&__t2128t__unsafe_ptr,&__t2128t__unsafe_size,&__t2128t__unsafe_offset,&__t2128t__unsafe_align);
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
  
  __t_failure:exists__t442t(__t2131t__unsafe_ptr,&__t2129t____t517t__);
  if(__t2129t____t517t__){
  free__t508t(&__t2131t__unsafe_ptr);
  }
  __t_return:
  *__t2734t=__t2131t__unsafe_ptr;
  *__t2735t=__t2131t__pos;
  *__t2736t=__t2131t__rows;
  *__t2737t=__t2131t__cols;
  *__t2738t=__t2131t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2341t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2739t, uint64_t* __t2740t, uint64_t* __t2741t, uint64_t* __t2742t, uint64_t* __t2743t) {
  char __t2342t__=0;
  char* __t2343t__unsafe_ptr=0;
  uint64_t __t2343t__pos=0;
  uint64_t __t2343t__rows=0;
  uint64_t __t2343t__cols=0;
  uint64_t __t2343t__stride=0;
  char __t2344t____t2129t____t517t__=0;
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
  range__t467t(m1__rows,&__t2345t__from,&__t2345t__to);
  it_i__from=__t2345t__from;
  it_i__to=__t2345t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2347t__);
  __t2346t=__t_complain;
  i=__t2347t__;
  __t2346t=__t2346t==0;
  if(!__t2346t){
  break;
  }
  range__t467t(m2__cols,&__t2348t__from,&__t2348t__to);
  it_j__from=__t2348t__from;
  it_j__to=__t2348t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2350t__);
  __t2349t=__t_complain;
  j=__t2350t__;
  __t2349t=__t2349t==0;
  if(!__t2349t){
  break;
  }
  __t2351t=0.0;
  __t2352t=__t2351t;
  acc=__t2352t;
  range__t467t(m1__cols,&__t2353t__from,&__t2353t__to);
  it_k__from=__t2353t__from;
  it_k__to=__t2353t__to;
  while(1){
  __t_complain=next__t476t(&it_k__from,it_k__to,&__t2355t__);
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
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2344t____t2129t____t517t__);
  if(__t2344t____t2129t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2739t=result__unsafe_ptr;
  *__t2740t=result__pos;
  *__t2741t=result__rows;
  *__t2742t=result__cols;
  *__t2743t=result__stride;
  
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
  endl=__t377t;
  range__t467t(m__rows,&__t2481t__from,&__t2481t__to);
  it_i__from=__t2481t__from;
  it_i__to=__t2481t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2483t__);
  __t2482t=__t_complain;
  i=__t2483t__;
  __t2482t=__t2482t==0;
  if(!__t2482t){
  break;
  }
  __t2484t=1;
  eq__t119t(m__rows,__t2484t,&__t2485t__);
  if(__t2485t__){
  print__t373t(__t2088t,__t369t);
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
  print__t373t(__t2418t,__t369t);
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
  print__t373t(__t2429t,__t369t);
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
  print__t373t(__t2437t,__t369t);
  }
  range__t467t(m__cols,&__t2510t__from,&__t2510t__to);
  it_j__from=__t2510t__from;
  it_j__to=__t2510t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2512t__);
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
  print__t378t(__t2514t__number,__t369t);
  __t2516t=1;
  __t_errcode=sub__t351t(m__cols,__t2516t,&__t2517t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(j,__t2517t__,&__t2518t__);
  if(__t2518t__){
  print__t373t(__t2101t,__t369t);
  }
  }
  __t2520t=1;
  eq__t119t(m__rows,__t2520t,&__t2521t__);
  if(__t2521t__){
  print__t373t(__t2104t,__t369t);
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
  print__t373t(__t2457t,__t369t);
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
  print__t373t(__t2468t,__t369t);
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
  print__t373t(__t2476t,__t369t);
  }
  print__t373t(__t369t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2547t() {
  double __t2550t=0;
  double __t2555t=0;
  double __t2556t=0;
  double __t2557t=0;
  double __t2558t=0;
  double __t2559t=0;
  char* __t2560t__unsafe_ptr=0;
  uint64_t __t2560t__unsafe_size=0;
  uint16_t __t2560t__unsafe_offset=0;
  uint16_t __t2560t__unsafe_align=0;
  uint64_t __t2561t=0;
  char* __t2562t__unsafe_ptr=0;
  uint64_t __t2562t__unsafe_size=0;
  uint16_t __t2562t__unsafe_offset=0;
  uint16_t __t2562t__unsafe_align=0;
  char __t2563t____t517t__=0;
  uint64_t __t2564t=0;
  char* __t2565t__unsafe_ptr=0;
  uint64_t __t2565t__pos=0;
  uint64_t __t2565t__rows=0;
  uint64_t __t2565t__cols=0;
  uint64_t __t2565t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2566t=0;
  uint64_t __t2567t=0;
  char* __t2568t__=0;
  double __t2569t=0;
  double __t2570t=0;
  double __t2575t=0;
  double __t2576t=0;
  char* __t2577t__unsafe_ptr=0;
  uint64_t __t2577t__unsafe_size=0;
  uint16_t __t2577t__unsafe_offset=0;
  uint16_t __t2577t__unsafe_align=0;
  uint64_t __t2578t=0;
  char* __t2579t__unsafe_ptr=0;
  uint64_t __t2579t__unsafe_size=0;
  uint16_t __t2579t__unsafe_offset=0;
  uint16_t __t2579t__unsafe_align=0;
  char __t2580t____t517t__=0;
  char* __t2581t__unsafe_ptr=0;
  uint64_t __t2581t__pos=0;
  uint64_t __t2581t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2583t__value=0;
  const char* __t2583t____t369t=0;
  char* __t2585t__unsafe_ptr=0;
  uint64_t __t2585t__pos=0;
  uint64_t __t2585t__length=0;
  char __t2586t____t2234t____t1540t____t517t__=0;
  double __t2588t=0;
  double __t2593t=0;
  char* __t2594t__unsafe_ptr=0;
  uint64_t __t2594t__unsafe_size=0;
  uint16_t __t2594t__unsafe_offset=0;
  uint16_t __t2594t__unsafe_align=0;
  uint64_t __t2595t=0;
  char* __t2596t__unsafe_ptr=0;
  uint64_t __t2596t__unsafe_size=0;
  uint16_t __t2596t__unsafe_offset=0;
  uint16_t __t2596t__unsafe_align=0;
  char __t2597t____t517t__=0;
  char* __t2598t__unsafe_ptr=0;
  uint64_t __t2598t__pos=0;
  uint64_t __t2598t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2600t__value=0;
  const char* __t2600t____t369t=0;
  char* __t2602t__unsafe_ptr=0;
  uint64_t __t2602t__pos=0;
  uint64_t __t2602t__length=0;
  char __t2603t____t2289t____t1540t____t517t__=0;
  double __t2605t=0;
  double __t2610t=0;
  double __t2611t=0;
  double __t2612t=0;
  double __t2613t=0;
  double __t2614t=0;
  char* __t2615t__unsafe_ptr=0;
  uint64_t __t2615t__unsafe_size=0;
  uint16_t __t2615t__unsafe_offset=0;
  uint16_t __t2615t__unsafe_align=0;
  uint64_t __t2616t=0;
  char* __t2617t__unsafe_ptr=0;
  uint64_t __t2617t__unsafe_size=0;
  uint16_t __t2617t__unsafe_offset=0;
  uint16_t __t2617t__unsafe_align=0;
  char __t2618t____t517t__=0;
  uint64_t __t2619t=0;
  char* __t2620t__unsafe_ptr=0;
  uint64_t __t2620t__pos=0;
  uint64_t __t2620t__rows=0;
  uint64_t __t2620t__cols=0;
  uint64_t __t2620t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2623t__unsafe_ptr=0;
  uint64_t __t2623t__pos=0;
  uint64_t __t2623t__rows=0;
  uint64_t __t2623t__cols=0;
  uint64_t __t2623t__stride=0;
  char __t2624t____t2344t____t2129t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  new__t1497t();
  __t2550t=1.0;
  __t2555t=0.0;
  __t2556t=2.0;
  __t2557t=0.0;
  __t2558t=3.0;
  __t2559t=1.0;
  float____buffer__t2553t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align);
  __t2561t=6;
  __t_errcode=alloc__t515t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align,__t2561t,&__t2562t__unsafe_ptr,&__t2562t__unsafe_size,&__t2562t__unsafe_offset,&__t2562t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2560t__unsafe_ptr,&__t2550t,8);
  memcpy(__t2560t__unsafe_ptr+8,&__t2555t,8);
  memcpy(__t2560t__unsafe_ptr+16,&__t2556t,8);
  memcpy(__t2560t__unsafe_ptr+24,&__t2557t,8);
  memcpy(__t2560t__unsafe_ptr+32,&__t2558t,8);
  memcpy(__t2560t__unsafe_ptr+40,&__t2559t,8);
  __t2564t=2;
  __t_errcode=mat__t2155t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align,__t2564t,&__t2565t__unsafe_ptr,&__t2565t__pos,&__t2565t__rows,&__t2565t__cols,&__t2565t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2565t__unsafe_ptr;
  a__pos=__t2565t__pos;
  a__rows=__t2565t__rows;
  a__cols=__t2565t__cols;
  a__stride=__t2565t__stride;
  __t2566t=0;
  __t2567t=0;
  __t_errcode=mutget__t2183t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2566t,__t2567t,&__t2568t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2569t=1.0;
  if(!__t2568t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2568t__,&__t2569t,8);
  __t2570t=1.0;
  __t2575t=2.0;
  __t2576t=3.0;
  float____buffer__t2573t(&__t2577t__unsafe_ptr,&__t2577t__unsafe_size,&__t2577t__unsafe_offset,&__t2577t__unsafe_align);
  __t2578t=3;
  __t_errcode=alloc__t515t(&__t2577t__unsafe_ptr,&__t2577t__unsafe_size,&__t2577t__unsafe_offset,&__t2577t__unsafe_align,__t2578t,&__t2579t__unsafe_ptr,&__t2579t__unsafe_size,&__t2579t__unsafe_offset,&__t2579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2577t__unsafe_ptr,&__t2570t,8);
  memcpy(__t2577t__unsafe_ptr+8,&__t2575t,8);
  memcpy(__t2577t__unsafe_ptr+16,&__t2576t,8);
  __t_errcode=vec__t1543t(&__t2577t__unsafe_ptr,&__t2577t__unsafe_size,&__t2577t__unsafe_offset,&__t2577t__unsafe_align,&__t2581t__unsafe_ptr,&__t2581t__pos,&__t2581t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2581t__unsafe_ptr;
  x__pos=__t2581t__pos;
  x__length=__t2581t__length;
  nn__t368t(__t2582t,&__t2583t__value,&__t2583t____t369t);
  print__t373t(__t2583t__value,__t2583t____t369t);
  __t_errcode=mul__t2231t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2585t__unsafe_ptr,&__t2585t__pos,&__t2585t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2106t(__t2585t__unsafe_ptr,__t2585t__pos,__t2585t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2588t=1.0;
  __t2593t=2.0;
  float____buffer__t2591t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align);
  __t2595t=2;
  __t_errcode=alloc__t515t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align,__t2595t,&__t2596t__unsafe_ptr,&__t2596t__unsafe_size,&__t2596t__unsafe_offset,&__t2596t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2594t__unsafe_ptr,&__t2588t,8);
  memcpy(__t2594t__unsafe_ptr+8,&__t2593t,8);
  __t_errcode=vec__t1543t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align,&__t2598t__unsafe_ptr,&__t2598t__pos,&__t2598t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2598t__unsafe_ptr;
  u__pos=__t2598t__pos;
  u__length=__t2598t__length;
  nn__t368t(__t2599t,&__t2600t__value,&__t2600t____t369t);
  print__t373t(__t2600t__value,__t2600t____t369t);
  __t_errcode=mul__t2286t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2602t__unsafe_ptr,&__t2602t__pos,&__t2602t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2106t(__t2602t__unsafe_ptr,__t2602t__pos,__t2602t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2605t=1.0;
  __t2610t=2.0;
  __t2611t=3.0;
  __t2612t=4.0;
  __t2613t=5.0;
  __t2614t=6.0;
  float____buffer__t2608t(&__t2615t__unsafe_ptr,&__t2615t__unsafe_size,&__t2615t__unsafe_offset,&__t2615t__unsafe_align);
  __t2616t=6;
  __t_errcode=alloc__t515t(&__t2615t__unsafe_ptr,&__t2615t__unsafe_size,&__t2615t__unsafe_offset,&__t2615t__unsafe_align,__t2616t,&__t2617t__unsafe_ptr,&__t2617t__unsafe_size,&__t2617t__unsafe_offset,&__t2617t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2615t__unsafe_ptr,&__t2605t,8);
  memcpy(__t2615t__unsafe_ptr+8,&__t2610t,8);
  memcpy(__t2615t__unsafe_ptr+16,&__t2611t,8);
  memcpy(__t2615t__unsafe_ptr+24,&__t2612t,8);
  memcpy(__t2615t__unsafe_ptr+32,&__t2613t,8);
  memcpy(__t2615t__unsafe_ptr+40,&__t2614t,8);
  __t2619t=3;
  __t_errcode=mat__t2155t(&__t2615t__unsafe_ptr,&__t2615t__unsafe_size,&__t2615t__unsafe_offset,&__t2615t__unsafe_align,__t2619t,&__t2620t__unsafe_ptr,&__t2620t__pos,&__t2620t__rows,&__t2620t__cols,&__t2620t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2620t__unsafe_ptr;
  b__pos=__t2620t__pos;
  b__rows=__t2620t__rows;
  b__cols=__t2620t__cols;
  b__stride=__t2620t__stride;
  print__t375t(__t2621t);
  __t_errcode=mul__t2341t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2623t__unsafe_ptr,&__t2623t__pos,&__t2623t__rows,&__t2623t__cols,&__t2623t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2479t(__t2623t__unsafe_ptr,__t2623t__pos,__t2623t__rows,__t2623t__cols,__t2623t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t2623t__unsafe_ptr,&__t2624t____t2344t____t2129t____t517t__);
  if(__t2624t____t2344t____t2129t____t517t__){
  free__t508t(&__t2623t__unsafe_ptr);
  }
  exists__t442t(__t2617t__unsafe_ptr,&__t2618t____t517t__);
  if(__t2618t____t517t__){
  free__t508t(&__t2617t__unsafe_ptr);
  }
  exists__t442t(__t2602t__unsafe_ptr,&__t2603t____t2289t____t1540t____t517t__);
  if(__t2603t____t2289t____t1540t____t517t__){
  free__t508t(&__t2602t__unsafe_ptr);
  }
  exists__t442t(__t2596t__unsafe_ptr,&__t2597t____t517t__);
  if(__t2597t____t517t__){
  free__t508t(&__t2596t__unsafe_ptr);
  }
  exists__t442t(__t2585t__unsafe_ptr,&__t2586t____t2234t____t1540t____t517t__);
  if(__t2586t____t2234t____t1540t____t517t__){
  free__t508t(&__t2585t__unsafe_ptr);
  }
  exists__t442t(__t2579t__unsafe_ptr,&__t2580t____t517t__);
  if(__t2580t____t517t__){
  free__t508t(&__t2579t__unsafe_ptr);
  }
  exists__t442t(__t2562t__unsafe_ptr,&__t2563t____t517t__);
  if(__t2563t____t517t__){
  free__t508t(&__t2562t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}