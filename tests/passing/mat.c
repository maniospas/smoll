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
const char* const __t2139t="  ";
const char* const __t2599t="u*a";
const char* const __t2621t="a*b";
const char* const __t378t="\n";
const char* const __t2457t=" ⎤";
const char* const __t370t="";
const char* const __t2142t=" ]";
const char* const __t2476t=" ⎦";
const char* const __t2429t="⎢ ";
const char* const __t2582t="a*x";
const char* const __t2126t="[ ";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t631t() {
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

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2630t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2630t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2631t) {
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

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2633t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2633t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2634t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2634t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2635t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2635t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2636t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2636t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2637t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2637t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2638t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2638t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2639t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2639t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2640t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2640t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2641t, uint64_t* __t2642t, uint16_t* __t2643t, uint16_t* __t2644t, uint64_t size, char** __t2645t, uint64_t* __t2646t, uint16_t* __t2647t, uint16_t* __t2648t) {
  char* buffer__unsafe_ptr=*__t2641t;
  uint64_t buffer__unsafe_size=*__t2642t;
  uint16_t buffer__unsafe_offset=*__t2643t;
  uint16_t buffer__unsafe_align=*__t2644t;
  int __t517t=0;
  char __t518t__=0;
  char __t520t__=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t __t530t__=0;
  uint64_t bytes=0;
  uint64_t __t531t=0;
  char __t532t__=0;
  char* __t533t__=0;
  uint64_t __t534t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t520t__);
  if(__t520t__){
  __t521t=0;
  neq__t144t(size,__t521t,&__t522t__);
  if(__t522t__){
  __t523t=0;
  nat__t513t(buffer__unsafe_align,&__t524t__);
  mul__t199t(__t524t__,size,&__t525t__);
  zero__t510t(buffer__unsafe_ptr,__t523t,__t525t__);
  }
  goto __t_return;
  }
  __t527t=0;
  neq__t144t(buffer__unsafe_size,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t529t__);
  mul__t199t(__t529t__,size,&__t530t__);
  bytes=__t530t__;
  __t531t=0;
  eq__t120t(bytes,__t531t,&__t532t__);
  if(__t532t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t533t__;
  __t534t=0;
  zero__t510t(buffer__unsafe_ptr,__t534t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t518t__);
  if(__t518t__){
  free__t509t(&buffer__unsafe_ptr);
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

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2649t) {
  goto __t_return;
  __t_return:
  *__t2649t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t2650t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2650t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2651t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2651t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2652t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2652t=z;
}

static inline __attribute__((always_inline)) void mat__t1536t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2653t, uint64_t* __t2654t, uint64_t* __t2655t, uint64_t* __t2656t, uint64_t* __t2657t) {
  char* __t1538t__unsafe_ptr=0;
  uint64_t __t1538t__pos=0;
  uint64_t __t1538t__rows=0;
  uint64_t __t1538t__cols=0;
  uint64_t __t1538t__stride=0;
  __t1538t__unsafe_ptr=unsafe_ptr;
  __t1538t__pos=pos;
  __t1538t__rows=rows;
  __t1538t__cols=cols;
  __t1538t__stride=stride;
  goto __t_return;
  __t_return:
  *__t2653t=__t1538t__unsafe_ptr;
  *__t2654t=__t1538t__pos;
  *__t2655t=__t1538t__rows;
  *__t2656t=__t1538t__cols;
  *__t2657t=__t1538t__stride;
}

static inline __attribute__((always_inline)) int mat__t2170t(char** __t2658t, uint64_t* __t2659t, uint16_t* __t2660t, uint16_t* __t2661t, uint64_t* __t2662t, uint64_t rows, uint64_t cols, char** __t2663t, uint64_t* __t2664t, uint64_t* __t2665t, uint64_t* __t2666t, uint64_t* __t2667t) {
  char* FLOATS__buf__unsafe_ptr=*__t2658t;
  uint64_t FLOATS__buf__unsafe_size=*__t2659t;
  uint16_t FLOATS__buf__unsafe_offset=*__t2660t;
  uint16_t FLOATS__buf__unsafe_align=*__t2661t;
  uint64_t FLOATS__pos=*__t2662t;
  uint64_t __t2171t__=0;
  uint64_t __t2172t=0;
  char __t2173t__=0;
  uint64_t __t2174t__=0;
  uint64_t __t2175t=0;
  char __t2176t__=0;
  uint64_t __t2177t__=0;
  uint64_t __t2178t__=0;
  uint64_t __t2179t__=0;
  char __t2180t__=0;
  uint64_t start=0;
  uint64_t __t2181t__=0;
  uint64_t __t2182t__=0;
  char* __t2183t__unsafe_ptr=0;
  uint64_t __t2183t__pos=0;
  uint64_t __t2183t__rows=0;
  uint64_t __t2183t__cols=0;
  uint64_t __t2183t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(FLOATS__buf__unsafe_align,&__t2171t__);
  __t2172t=8;
  neq__t144t(__t2171t__,__t2172t,&__t2173t__);
  if(__t2173t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t513t(FLOATS__buf__unsafe_offset,&__t2174t__);
  __t2175t=0;
  neq__t144t(__t2174t__,__t2175t,&__t2176t__);
  if(__t2176t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t2177t__);
  add__t175t(FLOATS__pos,__t2177t__,&__t2178t__);
  len__t605t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t2179t__);
  gt__t276t(__t2178t__,__t2179t__,&__t2180t__);
  if(__t2180t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=FLOATS__pos;
  mul__t199t(rows,cols,&__t2181t__);
  add__t175t(FLOATS__pos,__t2181t__,&__t2182t__);
  FLOATS__pos=__t2182t__;
  mat__t1536t(FLOATS__buf__unsafe_ptr,start,rows,cols,cols,&__t2183t__unsafe_ptr,&__t2183t__pos,&__t2183t__rows,&__t2183t__cols,&__t2183t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2658t=FLOATS__buf__unsafe_ptr;
  *__t2659t=FLOATS__buf__unsafe_size;
  *__t2660t=FLOATS__buf__unsafe_offset;
  *__t2661t=FLOATS__buf__unsafe_align;
  *__t2662t=FLOATS__pos;
  *__t2663t=__t2183t__unsafe_ptr;
  *__t2664t=__t2183t__pos;
  *__t2665t=__t2183t__rows;
  *__t2666t=__t2183t__cols;
  *__t2667t=__t2183t__stride;
  
  return __t_errcode;
}

int mat__t2193t(char** __t2668t, uint64_t* __t2669t, uint16_t* __t2670t, uint16_t* __t2671t, uint64_t rows, char** __t2672t, uint64_t* __t2673t, uint64_t* __t2674t, uint64_t* __t2675t, uint64_t* __t2676t) {
  char* buf__unsafe_ptr=*__t2668t;
  uint64_t buf__unsafe_size=*__t2669t;
  uint16_t buf__unsafe_offset=*__t2670t;
  uint16_t buf__unsafe_align=*__t2671t;
  uint64_t __t2194t__=0;
  uint64_t __t2195t__=0;
  uint64_t cols=0;
  uint64_t __t2196t__=0;
  uint64_t __t2197t__=0;
  char __t2198t__=0;
  uint64_t __t2199t=0;
  uint64_t __t2200t=0;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__pos=0;
  uint64_t __t2201t__rows=0;
  uint64_t __t2201t__cols=0;
  uint64_t __t2201t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2194t__);
  __t_errcode=div__t225t(__t2194t__,rows,&__t2195t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2195t__;
  mul__t199t(cols,rows,&__t2196t__);
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2197t__);
  neq__t144t(__t2196t__,__t2197t__,&__t2198t__);
  if(__t2198t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t2199t=0;
  __t2200t=__t2199t;
  __t_errcode=mat__t2170t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2200t,rows,cols,&__t2201t__unsafe_ptr,&__t2201t__pos,&__t2201t__rows,&__t2201t__cols,&__t2201t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2668t=buf__unsafe_ptr;
  *__t2669t=buf__unsafe_size;
  *__t2670t=buf__unsafe_offset;
  *__t2671t=buf__unsafe_align;
  *__t2672t=__t2201t__unsafe_ptr;
  *__t2673t=__t2201t__pos;
  *__t2674t=__t2201t__rows;
  *__t2675t=__t2201t__cols;
  *__t2676t=__t2201t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2677t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2677t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2678t) {
  *__t2678t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2679t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2679t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t2240t(char** __t2680t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2681t) {
  char* m__unsafe_ptr=*__t2680t;
  char __t2241t__=0;
  char __t2242t__=0;
  uint64_t __t2243t=0;
  uint64_t __t2244t__=0;
  uint64_t __t2245t__=0;
  uint64_t __t2246t__=0;
  uint64_t __t2247t__=0;
  char* __t2248t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t2241t__);
  if(__t2241t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t2242t__);
  if(__t2242t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2243t=8;
  mul__t199t(i,m__stride,&__t2244t__);
  add__t175t(__t2244t__,j,&__t2245t__);
  add__t175t(m__pos,__t2245t__,&__t2246t__);
  mul__t199t(__t2243t,__t2246t__,&__t2247t__);
  add__t511t(m__unsafe_ptr,__t2247t__,&__t2248t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2680t=m__unsafe_ptr;
  *__t2681t=__t2248t__;
  
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

static inline __attribute__((always_inline)) void vec__t1533t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2686t, uint64_t* __t2687t, uint64_t* __t2688t) {
  char* __t1535t__unsafe_ptr=0;
  uint64_t __t1535t__pos=0;
  uint64_t __t1535t__length=0;
  __t1535t__unsafe_ptr=unsafe_ptr;
  __t1535t__pos=pos;
  __t1535t__length=length;
  goto __t_return;
  __t_return:
  *__t2686t=__t1535t__unsafe_ptr;
  *__t2687t=__t1535t__pos;
  *__t2688t=__t1535t__length;
}

static inline __attribute__((always_inline)) int vec__t1581t(char** __t2689t, uint64_t* __t2690t, uint16_t* __t2691t, uint16_t* __t2692t, char** __t2693t, uint64_t* __t2694t, uint64_t* __t2695t) {
  char* buf__unsafe_ptr=*__t2689t;
  uint64_t buf__unsafe_size=*__t2690t;
  uint16_t buf__unsafe_offset=*__t2691t;
  uint16_t buf__unsafe_align=*__t2692t;
  uint64_t __t1582t__=0;
  uint64_t __t1583t=0;
  char __t1584t__=0;
  uint64_t __t1585t__=0;
  uint64_t __t1586t=0;
  char __t1587t__=0;
  uint64_t __t1588t=0;
  uint64_t __t1589t__=0;
  char* __t1590t__unsafe_ptr=0;
  uint64_t __t1590t__pos=0;
  uint64_t __t1590t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(buf__unsafe_align,&__t1582t__);
  __t1583t=8;
  neq__t144t(__t1582t__,__t1583t,&__t1584t__);
  if(__t1584t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t513t(buf__unsafe_offset,&__t1585t__);
  __t1586t=0;
  neq__t144t(__t1585t__,__t1586t,&__t1587t__);
  if(__t1587t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1588t=0;
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1589t__);
  vec__t1533t(buf__unsafe_ptr,__t1588t,__t1589t__,&__t1590t__unsafe_ptr,&__t1590t__pos,&__t1590t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2689t=buf__unsafe_ptr;
  *__t2690t=buf__unsafe_size;
  *__t2691t=buf__unsafe_offset;
  *__t2692t=buf__unsafe_align;
  *__t2693t=__t1590t__unsafe_ptr;
  *__t2694t=__t1590t__pos;
  *__t2695t=__t1590t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t369t(const char* value, const char** __t2696t, const char** __t2697t) {
  goto __t_return;
  __t_return:
  *__t2696t=value;
  *__t2697t=__t370t;
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1541t(char** __t2698t, uint64_t* __t2699t, uint16_t* __t2700t, uint16_t* __t2701t) {
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

int vec__t1575t(uint64_t length, char** __t2702t, uint64_t* __t2703t, uint64_t* __t2704t) {
  char* __t1576t__unsafe_ptr=0;
  uint64_t __t1576t__unsafe_size=0;
  uint16_t __t1576t__unsafe_offset=0;
  uint16_t __t1576t__unsafe_align=0;
  char* __t1577t__unsafe_ptr=0;
  uint64_t __t1577t__unsafe_size=0;
  uint16_t __t1577t__unsafe_offset=0;
  uint16_t __t1577t__unsafe_align=0;
  char __t1578t____t518t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1579t=0;
  char* __t1580t__unsafe_ptr=0;
  uint64_t __t1580t__pos=0;
  uint64_t __t1580t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1541t(&__t1576t__unsafe_ptr,&__t1576t__unsafe_size,&__t1576t__unsafe_offset,&__t1576t__unsafe_align);
  __t_errcode=alloc__t516t(&__t1576t__unsafe_ptr,&__t1576t__unsafe_size,&__t1576t__unsafe_offset,&__t1576t__unsafe_align,length,&__t1577t__unsafe_ptr,&__t1577t__unsafe_size,&__t1577t__unsafe_offset,&__t1577t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1579t=0;
  vec__t1533t(__t1577t__unsafe_ptr,__t1579t,length,&__t1580t__unsafe_ptr,&__t1580t__pos,&__t1580t__length);
  __t1580t__unsafe_ptr=__t1577t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t443t(__t1580t__unsafe_ptr,&__t1578t____t518t__);
  if(__t1578t____t518t__){
  free__t509t(&__t1580t__unsafe_ptr);
  }
  __t_return:
  *__t2702t=__t1580t__unsafe_ptr;
  *__t2703t=__t1580t__pos;
  *__t2704t=__t1580t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t2705t, uint64_t* __t2706t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t2705t=from;
  *__t2706t=to;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t2707t, uint64_t r__to, uint64_t* __t2708t) {
  uint64_t r__from=*__t2707t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2707t=r__from;
  *__t2708t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2249t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2709t) {
  char __t2250t__=0;
  char __t2251t__=0;
  uint64_t __t2252t=0;
  uint64_t __t2253t__=0;
  uint64_t __t2254t__=0;
  uint64_t __t2255t__=0;
  uint64_t __t2256t__=0;
  char* __t2257t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t2250t__);
  if(__t2250t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t2251t__);
  if(__t2251t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2252t=8;
  mul__t199t(i,m__stride,&__t2253t__);
  add__t175t(__t2253t__,j,&__t2254t__);
  add__t175t(m__pos,__t2254t__,&__t2255t__);
  mul__t199t(__t2252t,__t2255t__,&__t2256t__);
  add__t511t(m__unsafe_ptr,__t2256t__,&__t2257t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2709t=__t2257t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1636t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2710t) {
  char __t1637t__=0;
  uint64_t __t1638t=0;
  uint64_t __t1639t__=0;
  uint64_t __t1640t__=0;
  char* __t1641t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1637t__);
  if(__t1637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1638t=8;
  add__t175t(i,v__pos,&__t1639t__);
  mul__t199t(__t1638t,__t1639t__,&__t1640t__);
  add__t511t(v__unsafe_ptr,__t1640t__,&__t1641t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2710t=__t1641t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2711t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2711t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t2712t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2712t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2713t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2713t=z;
}

static inline __attribute__((always_inline)) int mutget__t1630t(char** __t2714t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2715t) {
  char* v__unsafe_ptr=*__t2714t;
  char __t1631t__=0;
  uint64_t __t1632t=0;
  uint64_t __t1633t__=0;
  uint64_t __t1634t__=0;
  char* __t1635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1631t__);
  if(__t1631t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1632t=8;
  add__t175t(i,v__pos,&__t1633t__);
  mul__t199t(__t1632t,__t1633t__,&__t1634t__);
  add__t511t(v__unsafe_ptr,__t1634t__,&__t1635t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2714t=v__unsafe_ptr;
  *__t2715t=__t1635t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2288t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2716t, uint64_t* __t2717t, uint64_t* __t2718t) {
  char __t2289t__=0;
  char* __t2290t__unsafe_ptr=0;
  uint64_t __t2290t__pos=0;
  uint64_t __t2290t__length=0;
  char __t2291t____t1578t____t518t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2292t__from=0;
  uint64_t __t2292t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2293t=0;
  uint64_t __t2294t__=0;
  uint64_t i=0;
  double __t2295t=0;
  double __t2296t=0;
  double acc=0;
  uint64_t __t2297t__from=0;
  uint64_t __t2297t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2298t=0;
  uint64_t __t2299t__=0;
  uint64_t j=0;
  char* __t2300t__=0;
  double __t2301t__number=0;
  char* __t2302t__=0;
  double __t2303t__number=0;
  double __t2304t__=0;
  double __t2305t__=0;
  char* __t2306t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t2289t__);
  if(__t2289t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1575t(m__rows,&__t2290t__unsafe_ptr,&__t2290t__pos,&__t2290t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2290t__unsafe_ptr;
  result__pos=__t2290t__pos;
  result__length=__t2290t__length;
  range__t468t(m__rows,&__t2292t__from,&__t2292t__to);
  it_i__from=__t2292t__from;
  it_i__to=__t2292t__to;
  while(1){
  __t_complain=next__t477t(&it_i__from,it_i__to,&__t2294t__);
  __t2293t=__t_complain;
  i=__t2294t__;
  __t2293t=__t2293t==0;
  if(!__t2293t){
  break;
  }
  __t2295t=0.0;
  __t2296t=__t2295t;
  acc=__t2296t;
  range__t468t(m__cols,&__t2297t__from,&__t2297t__to);
  it_j__from=__t2297t__from;
  it_j__to=__t2297t__to;
  while(1){
  __t_complain=next__t477t(&it_j__from,it_j__to,&__t2299t__);
  __t2298t=__t_complain;
  j=__t2299t__;
  __t2298t=__t2298t==0;
  if(!__t2298t){
  break;
  }
  __t_errcode=get__t2249t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2300t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2300t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2301t__number,__t2300t__,8);
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,j,&__t2302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2302t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2303t__number,__t2302t__,8);
  mul__t177t(__t2301t__number,__t2303t__number,&__t2304t__);
  add__t153t(acc,__t2304t__,&__t2305t__);
  acc=__t2305t__;
  }
  __t_errcode=mutget__t1630t(&result__unsafe_ptr,result__pos,result__length,i,&__t2306t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2306t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2306t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t443t(result__unsafe_ptr,&__t2291t____t1578t____t518t__);
  if(__t2291t____t1578t____t518t__){
  free__t509t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2716t=result__unsafe_ptr;
  *__t2717t=result__pos;
  *__t2718t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t371t(double value, double* __t2719t, const char** __t2720t) {
  goto __t_return;
  __t_return:
  *__t2719t=value;
  *__t2720t=__t370t;
}

static inline __attribute__((always_inline)) void print__t379t(double value, const char* endl) {
  int __t380t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2721t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2721t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2722t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2722t=z;
  
  return __t_errcode;
}

int print__t2144t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t2145t=0;
  const char* endl=0;
  const char* __t2146t__value=0;
  const char* __t2146t____t370t=0;
  uint64_t __t2148t__from=0;
  uint64_t __t2148t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2149t=0;
  uint64_t __t2150t__=0;
  uint64_t i=0;
  char* __t2151t__=0;
  double __t2152t__number=0;
  double __t2153t__value=0;
  const char* __t2153t____t370t=0;
  uint64_t __t2155t=0;
  uint64_t __t2156t__=0;
  char __t2157t__=0;
  const char* __t2158t__value=0;
  const char* __t2158t____t370t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t378t;
  nn__t369t(__t2126t,&__t2146t__value,&__t2146t____t370t);
  print__t374t(__t2146t__value,__t2146t____t370t);
  range__t468t(v__length,&__t2148t__from,&__t2148t__to);
  it__from=__t2148t__from;
  it__to=__t2148t__to;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t2150t__);
  __t2149t=__t_complain;
  i=__t2150t__;
  __t2149t=__t2149t==0;
  if(!__t2149t){
  break;
  }
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,i,&__t2151t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2151t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2152t__number,__t2151t__,8);
  nn__t371t(__t2152t__number,&__t2153t__value,&__t2153t____t370t);
  print__t379t(__t2153t__value,__t2153t____t370t);
  __t2155t=1;
  __t_errcode=sub__t352t(v__length,__t2155t,&__t2156t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t2156t__,&__t2157t__);
  if(__t2157t__){
  nn__t369t(__t2139t,&__t2158t__value,&__t2158t____t370t);
  print__t374t(__t2158t__value,__t2158t____t370t);
  }
  }
  print__t374t(__t2142t,endl);
  
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

static inline __attribute__((always_inline)) int mul__t2325t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2727t, uint64_t* __t2728t, uint64_t* __t2729t) {
  char __t2326t__=0;
  char* __t2327t__unsafe_ptr=0;
  uint64_t __t2327t__pos=0;
  uint64_t __t2327t__length=0;
  char __t2328t____t1578t____t518t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2329t__from=0;
  uint64_t __t2329t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2330t=0;
  uint64_t __t2331t__=0;
  uint64_t j=0;
  double __t2332t=0;
  double __t2333t=0;
  double acc=0;
  uint64_t __t2334t__from=0;
  uint64_t __t2334t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2335t=0;
  uint64_t __t2336t__=0;
  uint64_t i=0;
  char* __t2337t__=0;
  double __t2338t__number=0;
  char* __t2339t__=0;
  double __t2340t__number=0;
  double __t2341t__=0;
  double __t2342t__=0;
  char* __t2343t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t2326t__);
  if(__t2326t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1575t(m__cols,&__t2327t__unsafe_ptr,&__t2327t__pos,&__t2327t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2327t__unsafe_ptr;
  result__pos=__t2327t__pos;
  result__length=__t2327t__length;
  range__t468t(m__cols,&__t2329t__from,&__t2329t__to);
  it_j__from=__t2329t__from;
  it_j__to=__t2329t__to;
  while(1){
  __t_complain=next__t477t(&it_j__from,it_j__to,&__t2331t__);
  __t2330t=__t_complain;
  j=__t2331t__;
  __t2330t=__t2330t==0;
  if(!__t2330t){
  break;
  }
  __t2332t=0.0;
  __t2333t=__t2332t;
  acc=__t2333t;
  range__t468t(m__rows,&__t2334t__from,&__t2334t__to);
  it_i__from=__t2334t__from;
  it_i__to=__t2334t__to;
  while(1){
  __t_complain=next__t477t(&it_i__from,it_i__to,&__t2336t__);
  __t2335t=__t_complain;
  i=__t2336t__;
  __t2335t=__t2335t==0;
  if(!__t2335t){
  break;
  }
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,i,&__t2337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2337t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2338t__number,__t2337t__,8);
  __t_errcode=get__t2249t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2339t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2339t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2340t__number,__t2339t__,8);
  mul__t177t(__t2338t__number,__t2340t__number,&__t2341t__);
  add__t153t(acc,__t2341t__,&__t2342t__);
  acc=__t2342t__;
  }
  __t_errcode=mutget__t1630t(&result__unsafe_ptr,result__pos,result__length,j,&__t2343t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2343t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2343t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t443t(result__unsafe_ptr,&__t2328t____t1578t____t518t__);
  if(__t2328t____t1578t____t518t__){
  free__t509t(&result__unsafe_ptr);
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

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t2163t(uint64_t rows, uint64_t cols, char** __t2734t, uint64_t* __t2735t, uint64_t* __t2736t, uint64_t* __t2737t, uint64_t* __t2738t) {
  char* __t2164t__unsafe_ptr=0;
  uint64_t __t2164t__unsafe_size=0;
  uint16_t __t2164t__unsafe_offset=0;
  uint16_t __t2164t__unsafe_align=0;
  uint64_t __t2165t__=0;
  char* __t2166t__unsafe_ptr=0;
  uint64_t __t2166t__unsafe_size=0;
  uint16_t __t2166t__unsafe_offset=0;
  uint16_t __t2166t__unsafe_align=0;
  char __t2167t____t518t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t2168t=0;
  char* __t2169t__unsafe_ptr=0;
  uint64_t __t2169t__pos=0;
  uint64_t __t2169t__rows=0;
  uint64_t __t2169t__cols=0;
  uint64_t __t2169t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1541t(&__t2164t__unsafe_ptr,&__t2164t__unsafe_size,&__t2164t__unsafe_offset,&__t2164t__unsafe_align);
  mul__t199t(rows,cols,&__t2165t__);
  __t_errcode=alloc__t516t(&__t2164t__unsafe_ptr,&__t2164t__unsafe_size,&__t2164t__unsafe_offset,&__t2164t__unsafe_align,__t2165t__,&__t2166t__unsafe_ptr,&__t2166t__unsafe_size,&__t2166t__unsafe_offset,&__t2166t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2166t__unsafe_ptr;
  buf__unsafe_size=__t2166t__unsafe_size;
  buf__unsafe_offset=__t2166t__unsafe_offset;
  buf__unsafe_align=__t2166t__unsafe_align;
  __t2168t=0;
  mat__t1536t(buf__unsafe_ptr,__t2168t,rows,cols,cols,&__t2169t__unsafe_ptr,&__t2169t__pos,&__t2169t__rows,&__t2169t__cols,&__t2169t__stride);
  goto __t_return;
  
  __t_failure:exists__t443t(__t2169t__unsafe_ptr,&__t2167t____t518t__);
  if(__t2167t____t518t__){
  free__t509t(&__t2169t__unsafe_ptr);
  }
  __t_return:
  *__t2734t=__t2169t__unsafe_ptr;
  *__t2735t=__t2169t__pos;
  *__t2736t=__t2169t__rows;
  *__t2737t=__t2169t__cols;
  *__t2738t=__t2169t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2362t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2739t, uint64_t* __t2740t, uint64_t* __t2741t, uint64_t* __t2742t, uint64_t* __t2743t) {
  char __t2363t__=0;
  char* __t2364t__unsafe_ptr=0;
  uint64_t __t2364t__pos=0;
  uint64_t __t2364t__rows=0;
  uint64_t __t2364t__cols=0;
  uint64_t __t2364t__stride=0;
  char __t2365t____t2167t____t518t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2366t__from=0;
  uint64_t __t2366t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2367t=0;
  uint64_t __t2368t__=0;
  uint64_t i=0;
  uint64_t __t2369t__from=0;
  uint64_t __t2369t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2370t=0;
  uint64_t __t2371t__=0;
  uint64_t j=0;
  double __t2372t=0;
  double __t2373t=0;
  double acc=0;
  uint64_t __t2374t__from=0;
  uint64_t __t2374t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2375t=0;
  uint64_t __t2376t__=0;
  uint64_t k=0;
  char* __t2377t__=0;
  double __t2378t__number=0;
  char* __t2379t__=0;
  double __t2380t__number=0;
  double __t2381t__=0;
  double __t2382t__=0;
  char* __t2383t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t2363t__);
  if(__t2363t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t2163t(m1__rows,m2__cols,&__t2364t__unsafe_ptr,&__t2364t__pos,&__t2364t__rows,&__t2364t__cols,&__t2364t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2364t__unsafe_ptr;
  result__pos=__t2364t__pos;
  result__rows=__t2364t__rows;
  result__cols=__t2364t__cols;
  result__stride=__t2364t__stride;
  range__t468t(m1__rows,&__t2366t__from,&__t2366t__to);
  it_i__from=__t2366t__from;
  it_i__to=__t2366t__to;
  while(1){
  __t_complain=next__t477t(&it_i__from,it_i__to,&__t2368t__);
  __t2367t=__t_complain;
  i=__t2368t__;
  __t2367t=__t2367t==0;
  if(!__t2367t){
  break;
  }
  range__t468t(m2__cols,&__t2369t__from,&__t2369t__to);
  it_j__from=__t2369t__from;
  it_j__to=__t2369t__to;
  while(1){
  __t_complain=next__t477t(&it_j__from,it_j__to,&__t2371t__);
  __t2370t=__t_complain;
  j=__t2371t__;
  __t2370t=__t2370t==0;
  if(!__t2370t){
  break;
  }
  __t2372t=0.0;
  __t2373t=__t2372t;
  acc=__t2373t;
  range__t468t(m1__cols,&__t2374t__from,&__t2374t__to);
  it_k__from=__t2374t__from;
  it_k__to=__t2374t__to;
  while(1){
  __t_complain=next__t477t(&it_k__from,it_k__to,&__t2376t__);
  __t2375t=__t_complain;
  k=__t2376t__;
  __t2375t=__t2375t==0;
  if(!__t2375t){
  break;
  }
  __t_errcode=get__t2249t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2377t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2377t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2378t__number,__t2377t__,8);
  __t_errcode=get__t2249t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2379t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2379t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2380t__number,__t2379t__,8);
  mul__t177t(__t2378t__number,__t2380t__number,&__t2381t__);
  add__t153t(acc,__t2381t__,&__t2382t__);
  acc=__t2382t__;
  }
  __t_errcode=mutget__t2240t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2383t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2383t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2383t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t443t(result__unsafe_ptr,&__t2365t____t2167t____t518t__);
  if(__t2365t____t2167t____t518t__){
  free__t509t(&result__unsafe_ptr);
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
  endl=__t378t;
  range__t468t(m__rows,&__t2481t__from,&__t2481t__to);
  it_i__from=__t2481t__from;
  it_i__to=__t2481t__to;
  while(1){
  __t_complain=next__t477t(&it_i__from,it_i__to,&__t2483t__);
  __t2482t=__t_complain;
  i=__t2483t__;
  __t2482t=__t2482t==0;
  if(!__t2482t){
  break;
  }
  __t2484t=1;
  eq__t120t(m__rows,__t2484t,&__t2485t__);
  if(__t2485t__){
  print__t374t(__t2126t,__t370t);
  }
  __t2487t=1;
  gt__t276t(m__rows,__t2487t,&__t2488t__);
  if(__t2488t__){
  __t2489t=0;
  eq__t120t(i,__t2489t,&__t2490t__);
  __t2491t=__t2490t__;
  }
  {
  __t2491t=0;
  }
  if(__t2491t){
  print__t374t(__t2418t,__t370t);
  }
  __t2493t=1;
  gt__t276t(m__rows,__t2493t,&__t2494t__);
  if(__t2494t__){
  __t2495t=0;
  gt__t276t(i,__t2495t,&__t2496t__);
  if(__t2496t__){
  __t2497t=1;
  __t_errcode=sub__t352t(m__rows,__t2497t,&__t2498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t2498t__,&__t2499t__);
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
  print__t374t(__t2429t,__t370t);
  }
  __t2503t=1;
  gt__t276t(m__rows,__t2503t,&__t2504t__);
  if(__t2504t__){
  __t2505t=1;
  __t_errcode=sub__t352t(m__rows,__t2505t,&__t2506t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t2506t__,&__t2507t__);
  __t2508t=__t2507t__;
  }
  {
  __t2508t=0;
  }
  if(__t2508t){
  print__t374t(__t2437t,__t370t);
  }
  range__t468t(m__cols,&__t2510t__from,&__t2510t__to);
  it_j__from=__t2510t__from;
  it_j__to=__t2510t__to;
  while(1){
  __t_complain=next__t477t(&it_j__from,it_j__to,&__t2512t__);
  __t2511t=__t_complain;
  j=__t2512t__;
  __t2511t=__t2511t==0;
  if(!__t2511t){
  break;
  }
  __t_errcode=get__t2249t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2513t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2513t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2514t__number,__t2513t__,8);
  print__t379t(__t2514t__number,__t370t);
  __t2516t=1;
  __t_errcode=sub__t352t(m__cols,__t2516t,&__t2517t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t2517t__,&__t2518t__);
  if(__t2518t__){
  print__t374t(__t2139t,__t370t);
  }
  }
  __t2520t=1;
  eq__t120t(m__rows,__t2520t,&__t2521t__);
  if(__t2521t__){
  print__t374t(__t2142t,__t370t);
  }
  __t2523t=1;
  gt__t276t(m__rows,__t2523t,&__t2524t__);
  if(__t2524t__){
  __t2525t=0;
  eq__t120t(i,__t2525t,&__t2526t__);
  __t2527t=__t2526t__;
  }
  {
  __t2527t=0;
  }
  if(__t2527t){
  print__t374t(__t2457t,__t370t);
  }
  __t2529t=1;
  gt__t276t(m__rows,__t2529t,&__t2530t__);
  if(__t2530t__){
  __t2531t=0;
  gt__t276t(i,__t2531t,&__t2532t__);
  if(__t2532t__){
  __t2533t=1;
  __t_errcode=sub__t352t(m__rows,__t2533t,&__t2534t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t2534t__,&__t2535t__);
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
  print__t374t(__t2468t,__t370t);
  }
  __t2539t=1;
  gt__t276t(m__rows,__t2539t,&__t2540t__);
  if(__t2540t__){
  __t2541t=1;
  __t_errcode=sub__t352t(m__rows,__t2541t,&__t2542t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t2542t__,&__t2543t__);
  __t2544t=__t2543t__;
  }
  {
  __t2544t=0;
  }
  if(__t2544t){
  print__t374t(__t2476t,__t370t);
  }
  print__t374t(__t370t,endl);
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
  char __t2563t____t518t__=0;
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
  char __t2580t____t518t__=0;
  char* __t2581t__unsafe_ptr=0;
  uint64_t __t2581t__pos=0;
  uint64_t __t2581t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2583t__value=0;
  const char* __t2583t____t370t=0;
  char* __t2585t__unsafe_ptr=0;
  uint64_t __t2585t__pos=0;
  uint64_t __t2585t__length=0;
  char __t2586t____t2291t____t1578t____t518t__=0;
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
  char __t2597t____t518t__=0;
  char* __t2598t__unsafe_ptr=0;
  uint64_t __t2598t__pos=0;
  uint64_t __t2598t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2600t__value=0;
  const char* __t2600t____t370t=0;
  char* __t2602t__unsafe_ptr=0;
  uint64_t __t2602t__pos=0;
  uint64_t __t2602t__length=0;
  char __t2603t____t2328t____t1578t____t518t__=0;
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
  char __t2618t____t518t__=0;
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
  char __t2624t____t2365t____t2167t____t518t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t631t();
  __t2550t=1.0;
  __t2555t=0.0;
  __t2556t=2.0;
  __t2557t=0.0;
  __t2558t=3.0;
  __t2559t=1.0;
  float____buffer__t2553t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align);
  __t2561t=6;
  __t_errcode=alloc__t516t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align,__t2561t,&__t2562t__unsafe_ptr,&__t2562t__unsafe_size,&__t2562t__unsafe_offset,&__t2562t__unsafe_align);
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
  __t_errcode=mat__t2193t(&__t2560t__unsafe_ptr,&__t2560t__unsafe_size,&__t2560t__unsafe_offset,&__t2560t__unsafe_align,__t2564t,&__t2565t__unsafe_ptr,&__t2565t__pos,&__t2565t__rows,&__t2565t__cols,&__t2565t__stride);
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
  __t_errcode=mutget__t2240t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2566t,__t2567t,&__t2568t__);
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
  __t_errcode=alloc__t516t(&__t2577t__unsafe_ptr,&__t2577t__unsafe_size,&__t2577t__unsafe_offset,&__t2577t__unsafe_align,__t2578t,&__t2579t__unsafe_ptr,&__t2579t__unsafe_size,&__t2579t__unsafe_offset,&__t2579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2577t__unsafe_ptr,&__t2570t,8);
  memcpy(__t2577t__unsafe_ptr+8,&__t2575t,8);
  memcpy(__t2577t__unsafe_ptr+16,&__t2576t,8);
  __t_errcode=vec__t1581t(&__t2577t__unsafe_ptr,&__t2577t__unsafe_size,&__t2577t__unsafe_offset,&__t2577t__unsafe_align,&__t2581t__unsafe_ptr,&__t2581t__pos,&__t2581t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2581t__unsafe_ptr;
  x__pos=__t2581t__pos;
  x__length=__t2581t__length;
  nn__t369t(__t2582t,&__t2583t__value,&__t2583t____t370t);
  print__t374t(__t2583t__value,__t2583t____t370t);
  __t_errcode=mul__t2288t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2585t__unsafe_ptr,&__t2585t__pos,&__t2585t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2144t(__t2585t__unsafe_ptr,__t2585t__pos,__t2585t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2588t=1.0;
  __t2593t=2.0;
  float____buffer__t2591t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align);
  __t2595t=2;
  __t_errcode=alloc__t516t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align,__t2595t,&__t2596t__unsafe_ptr,&__t2596t__unsafe_size,&__t2596t__unsafe_offset,&__t2596t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2594t__unsafe_ptr,&__t2588t,8);
  memcpy(__t2594t__unsafe_ptr+8,&__t2593t,8);
  __t_errcode=vec__t1581t(&__t2594t__unsafe_ptr,&__t2594t__unsafe_size,&__t2594t__unsafe_offset,&__t2594t__unsafe_align,&__t2598t__unsafe_ptr,&__t2598t__pos,&__t2598t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2598t__unsafe_ptr;
  u__pos=__t2598t__pos;
  u__length=__t2598t__length;
  nn__t369t(__t2599t,&__t2600t__value,&__t2600t____t370t);
  print__t374t(__t2600t__value,__t2600t____t370t);
  __t_errcode=mul__t2325t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2602t__unsafe_ptr,&__t2602t__pos,&__t2602t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2144t(__t2602t__unsafe_ptr,__t2602t__pos,__t2602t__length);
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
  __t_errcode=alloc__t516t(&__t2615t__unsafe_ptr,&__t2615t__unsafe_size,&__t2615t__unsafe_offset,&__t2615t__unsafe_align,__t2616t,&__t2617t__unsafe_ptr,&__t2617t__unsafe_size,&__t2617t__unsafe_offset,&__t2617t__unsafe_align);
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
  __t_errcode=mat__t2193t(&__t2615t__unsafe_ptr,&__t2615t__unsafe_size,&__t2615t__unsafe_offset,&__t2615t__unsafe_align,__t2619t,&__t2620t__unsafe_ptr,&__t2620t__pos,&__t2620t__rows,&__t2620t__cols,&__t2620t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2620t__unsafe_ptr;
  b__pos=__t2620t__pos;
  b__rows=__t2620t__rows;
  b__cols=__t2620t__cols;
  b__stride=__t2620t__stride;
  print__t376t(__t2621t);
  __t_errcode=mul__t2362t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2623t__unsafe_ptr,&__t2623t__pos,&__t2623t__rows,&__t2623t__cols,&__t2623t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2479t(__t2623t__unsafe_ptr,__t2623t__pos,__t2623t__rows,__t2623t__cols,__t2623t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t443t(__t2623t__unsafe_ptr,&__t2624t____t2365t____t2167t____t518t__);
  if(__t2624t____t2365t____t2167t____t518t__){
  free__t509t(&__t2623t__unsafe_ptr);
  }
  exists__t443t(__t2617t__unsafe_ptr,&__t2618t____t518t__);
  if(__t2618t____t518t__){
  free__t509t(&__t2617t__unsafe_ptr);
  }
  exists__t443t(__t2602t__unsafe_ptr,&__t2603t____t2328t____t1578t____t518t__);
  if(__t2603t____t2328t____t1578t____t518t__){
  free__t509t(&__t2602t__unsafe_ptr);
  }
  exists__t443t(__t2596t__unsafe_ptr,&__t2597t____t518t__);
  if(__t2597t____t518t__){
  free__t509t(&__t2596t__unsafe_ptr);
  }
  exists__t443t(__t2585t__unsafe_ptr,&__t2586t____t2291t____t1578t____t518t__);
  if(__t2586t____t2291t____t1578t____t518t__){
  free__t509t(&__t2585t__unsafe_ptr);
  }
  exists__t443t(__t2579t__unsafe_ptr,&__t2580t____t518t__);
  if(__t2580t____t518t__){
  free__t509t(&__t2579t__unsafe_ptr);
  }
  exists__t443t(__t2562t__unsafe_ptr,&__t2563t____t518t__);
  if(__t2563t____t518t__){
  free__t509t(&__t2562t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}