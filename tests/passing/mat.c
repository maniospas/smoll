#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2570t="u*a";
const char* const __t2110t="  ";
const char* const __t2113t=" ]";
const char* const __t2447t=" ⎦";
const char* const __t2408t="⎣ ";
const char* const __t2400t="⎢ ";
const char* const __t377t="\n";
const char* const __t2428t=" ⎤";
const char* const __t2389t="⎡ ";
const char* const __t2592t="a*b";
const char* const __t2097t="[ ";
const char* const __t369t="";
const char* const __t2439t=" ⎥";
const char* const __t2553t="a*x";
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

static inline __attribute__((always_inline)) void new__t630t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2524t(char** __t2597t, uint64_t* __t2598t, uint16_t* __t2599t, uint16_t* __t2600t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2597t=unsafe_ptr;
  *__t2598t=unsafe_size;
  *__t2599t=unsafe_offset;
  *__t2600t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2601t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2601t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2602t) {
  char* allocated=*__t2602t;
  if(allocated){
  free(allocated);
  }
  *__t2602t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2603t) {
  int value=0;
  *__t2603t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2604t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2604t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2605t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2605t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2606t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2606t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2607t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2607t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2608t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2608t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2609t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2609t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2610t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2610t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2611t) {
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
  *__t2611t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2612t, uint64_t* __t2613t, uint16_t* __t2614t, uint16_t* __t2615t, uint64_t size, char** __t2616t, uint64_t* __t2617t, uint16_t* __t2618t, uint16_t* __t2619t) {
  char* buffer__unsafe_ptr=*__t2612t;
  uint64_t buffer__unsafe_size=*__t2613t;
  uint16_t buffer__unsafe_offset=*__t2614t;
  uint16_t buffer__unsafe_align=*__t2615t;
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
  *__t2612t=buffer__unsafe_ptr;
  *__t2613t=buffer__unsafe_size;
  *__t2614t=buffer__unsafe_offset;
  *__t2615t=buffer__unsafe_align;
  *__t2616t=buffer__unsafe_ptr;
  *__t2617t=buffer__unsafe_size;
  *__t2618t=buffer__unsafe_offset;
  *__t2619t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2620t) {
  goto __t_return;
  __t_return:
  *__t2620t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t2621t) {
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
  *__t2621t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2622t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2622t=z;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2623t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2623t=z;
}

static inline __attribute__((always_inline)) void mat__t1507t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2624t, uint64_t* __t2625t, uint64_t* __t2626t, uint64_t* __t2627t, uint64_t* __t2628t) {
  char* __t1509t__unsafe_ptr=0;
  uint64_t __t1509t__pos=0;
  uint64_t __t1509t__rows=0;
  uint64_t __t1509t__cols=0;
  uint64_t __t1509t__stride=0;
  __t1509t__unsafe_ptr=unsafe_ptr;
  __t1509t__pos=pos;
  __t1509t__rows=rows;
  __t1509t__cols=cols;
  __t1509t__stride=stride;
  goto __t_return;
  __t_return:
  *__t2624t=__t1509t__unsafe_ptr;
  *__t2625t=__t1509t__pos;
  *__t2626t=__t1509t__rows;
  *__t2627t=__t1509t__cols;
  *__t2628t=__t1509t__stride;
}

static inline __attribute__((always_inline)) int mat__t2141t(char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t, uint64_t* __t2633t, uint64_t rows, uint64_t cols, char** __t2634t, uint64_t* __t2635t, uint64_t* __t2636t, uint64_t* __t2637t, uint64_t* __t2638t) {
  char* FLOATS__buf__unsafe_ptr=*__t2629t;
  uint64_t FLOATS__buf__unsafe_size=*__t2630t;
  uint16_t FLOATS__buf__unsafe_offset=*__t2631t;
  uint16_t FLOATS__buf__unsafe_align=*__t2632t;
  uint64_t FLOATS__pos=*__t2633t;
  uint64_t __t2142t__=0;
  uint64_t __t2143t=0;
  char __t2144t__=0;
  uint64_t __t2145t__=0;
  uint64_t __t2146t=0;
  char __t2147t__=0;
  uint64_t __t2148t__=0;
  uint64_t __t2149t__=0;
  uint64_t __t2150t__=0;
  char __t2151t__=0;
  uint64_t start=0;
  uint64_t __t2152t__=0;
  uint64_t __t2153t__=0;
  char* __t2154t__unsafe_ptr=0;
  uint64_t __t2154t__pos=0;
  uint64_t __t2154t__rows=0;
  uint64_t __t2154t__cols=0;
  uint64_t __t2154t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t512t(FLOATS__buf__unsafe_align,&__t2142t__);
  __t2143t=8;
  neq__t143t(__t2142t__,__t2143t,&__t2144t__);
  if(__t2144t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t512t(FLOATS__buf__unsafe_offset,&__t2145t__);
  __t2146t=0;
  neq__t143t(__t2145t__,__t2146t,&__t2147t__);
  if(__t2147t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t198t(rows,cols,&__t2148t__);
  add__t174t(FLOATS__pos,__t2148t__,&__t2149t__);
  len__t604t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t2150t__);
  gt__t275t(__t2149t__,__t2150t__,&__t2151t__);
  if(__t2151t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=FLOATS__pos;
  mul__t198t(rows,cols,&__t2152t__);
  add__t174t(FLOATS__pos,__t2152t__,&__t2153t__);
  FLOATS__pos=__t2153t__;
  mat__t1507t(FLOATS__buf__unsafe_ptr,start,rows,cols,cols,&__t2154t__unsafe_ptr,&__t2154t__pos,&__t2154t__rows,&__t2154t__cols,&__t2154t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2629t=FLOATS__buf__unsafe_ptr;
  *__t2630t=FLOATS__buf__unsafe_size;
  *__t2631t=FLOATS__buf__unsafe_offset;
  *__t2632t=FLOATS__buf__unsafe_align;
  *__t2633t=FLOATS__pos;
  *__t2634t=__t2154t__unsafe_ptr;
  *__t2635t=__t2154t__pos;
  *__t2636t=__t2154t__rows;
  *__t2637t=__t2154t__cols;
  *__t2638t=__t2154t__stride;
  
  return __t_errcode;
}

int mat__t2164t(char** __t2639t, uint64_t* __t2640t, uint16_t* __t2641t, uint16_t* __t2642t, uint64_t rows, char** __t2643t, uint64_t* __t2644t, uint64_t* __t2645t, uint64_t* __t2646t, uint64_t* __t2647t) {
  char* buf__unsafe_ptr=*__t2639t;
  uint64_t buf__unsafe_size=*__t2640t;
  uint16_t buf__unsafe_offset=*__t2641t;
  uint16_t buf__unsafe_align=*__t2642t;
  uint64_t __t2165t__=0;
  uint64_t __t2166t__=0;
  uint64_t cols=0;
  uint64_t __t2167t__=0;
  uint64_t __t2168t__=0;
  char __t2169t__=0;
  uint64_t __t2170t=0;
  uint64_t __t2171t=0;
  char* __t2172t__unsafe_ptr=0;
  uint64_t __t2172t__pos=0;
  uint64_t __t2172t__rows=0;
  uint64_t __t2172t__cols=0;
  uint64_t __t2172t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2165t__);
  __t_errcode=div__t224t(__t2165t__,rows,&__t2166t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2166t__;
  mul__t198t(cols,rows,&__t2167t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2168t__);
  neq__t143t(__t2167t__,__t2168t__,&__t2169t__);
  if(__t2169t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t2170t=0;
  __t2171t=__t2170t;
  __t_errcode=mat__t2141t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2171t,rows,cols,&__t2172t__unsafe_ptr,&__t2172t__pos,&__t2172t__rows,&__t2172t__cols,&__t2172t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2639t=buf__unsafe_ptr;
  *__t2640t=buf__unsafe_size;
  *__t2641t=buf__unsafe_offset;
  *__t2642t=buf__unsafe_align;
  *__t2643t=__t2172t__unsafe_ptr;
  *__t2644t=__t2172t__pos;
  *__t2645t=__t2172t__rows;
  *__t2646t=__t2172t__cols;
  *__t2647t=__t2172t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2648t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2648t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2649t) {
  *__t2649t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2650t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2650t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t2211t(char** __t2651t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2652t) {
  char* m__unsafe_ptr=*__t2651t;
  char __t2212t__=0;
  char __t2213t__=0;
  uint64_t __t2214t=0;
  uint64_t __t2215t__=0;
  uint64_t __t2216t__=0;
  uint64_t __t2217t__=0;
  uint64_t __t2218t__=0;
  char* __t2219t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,m__rows,&__t2212t__);
  if(__t2212t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t323t(j,m__cols,&__t2213t__);
  if(__t2213t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2214t=8;
  mul__t198t(i,m__stride,&__t2215t__);
  add__t174t(__t2215t__,j,&__t2216t__);
  add__t174t(m__pos,__t2216t__,&__t2217t__);
  mul__t198t(__t2214t,__t2217t__,&__t2218t__);
  add__t510t(m__unsafe_ptr,__t2218t__,&__t2219t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2651t=m__unsafe_ptr;
  *__t2652t=__t2219t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2544t(char** __t2653t, uint64_t* __t2654t, uint16_t* __t2655t, uint16_t* __t2656t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2653t=unsafe_ptr;
  *__t2654t=unsafe_size;
  *__t2655t=unsafe_offset;
  *__t2656t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1504t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2657t, uint64_t* __t2658t, uint64_t* __t2659t) {
  char* __t1506t__unsafe_ptr=0;
  uint64_t __t1506t__pos=0;
  uint64_t __t1506t__length=0;
  __t1506t__unsafe_ptr=unsafe_ptr;
  __t1506t__pos=pos;
  __t1506t__length=length;
  goto __t_return;
  __t_return:
  *__t2657t=__t1506t__unsafe_ptr;
  *__t2658t=__t1506t__pos;
  *__t2659t=__t1506t__length;
}

static inline __attribute__((always_inline)) int vec__t1552t(char** __t2660t, uint64_t* __t2661t, uint16_t* __t2662t, uint16_t* __t2663t, char** __t2664t, uint64_t* __t2665t, uint64_t* __t2666t) {
  char* buf__unsafe_ptr=*__t2660t;
  uint64_t buf__unsafe_size=*__t2661t;
  uint16_t buf__unsafe_offset=*__t2662t;
  uint16_t buf__unsafe_align=*__t2663t;
  uint64_t __t1553t__=0;
  uint64_t __t1554t=0;
  char __t1555t__=0;
  uint64_t __t1556t__=0;
  uint64_t __t1557t=0;
  char __t1558t__=0;
  uint64_t __t1559t=0;
  uint64_t __t1560t__=0;
  char* __t1561t__unsafe_ptr=0;
  uint64_t __t1561t__pos=0;
  uint64_t __t1561t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t512t(buf__unsafe_align,&__t1553t__);
  __t1554t=8;
  neq__t143t(__t1553t__,__t1554t,&__t1555t__);
  if(__t1555t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t1556t__);
  __t1557t=0;
  neq__t143t(__t1556t__,__t1557t,&__t1558t__);
  if(__t1558t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1559t=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1560t__);
  vec__t1504t(buf__unsafe_ptr,__t1559t,__t1560t__,&__t1561t__unsafe_ptr,&__t1561t__pos,&__t1561t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2660t=buf__unsafe_ptr;
  *__t2661t=buf__unsafe_size;
  *__t2662t=buf__unsafe_offset;
  *__t2663t=buf__unsafe_align;
  *__t2664t=__t1561t__unsafe_ptr;
  *__t2665t=__t1561t__pos;
  *__t2666t=__t1561t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t368t(const char* value, const char** __t2667t, const char** __t2668t) {
  goto __t_return;
  __t_return:
  *__t2667t=value;
  *__t2668t=__t369t;
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1512t(char** __t2669t, uint64_t* __t2670t, uint16_t* __t2671t, uint16_t* __t2672t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2669t=unsafe_ptr;
  *__t2670t=unsafe_size;
  *__t2671t=unsafe_offset;
  *__t2672t=unsafe_align;
}

int vec__t1546t(uint64_t length, char** __t2673t, uint64_t* __t2674t, uint64_t* __t2675t) {
  char* __t1547t__unsafe_ptr=0;
  uint64_t __t1547t__unsafe_size=0;
  uint16_t __t1547t__unsafe_offset=0;
  uint16_t __t1547t__unsafe_align=0;
  char* __t1548t__unsafe_ptr=0;
  uint64_t __t1548t__unsafe_size=0;
  uint16_t __t1548t__unsafe_offset=0;
  uint16_t __t1548t__unsafe_align=0;
  char __t1549t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1550t=0;
  char* __t1551t__unsafe_ptr=0;
  uint64_t __t1551t__pos=0;
  uint64_t __t1551t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1512t(&__t1547t__unsafe_ptr,&__t1547t__unsafe_size,&__t1547t__unsafe_offset,&__t1547t__unsafe_align);
  __t_errcode=alloc__t515t(&__t1547t__unsafe_ptr,&__t1547t__unsafe_size,&__t1547t__unsafe_offset,&__t1547t__unsafe_align,length,&__t1548t__unsafe_ptr,&__t1548t__unsafe_size,&__t1548t__unsafe_offset,&__t1548t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1550t=0;
  vec__t1504t(__t1548t__unsafe_ptr,__t1550t,length,&__t1551t__unsafe_ptr,&__t1551t__pos,&__t1551t__length);
  __t1551t__unsafe_ptr=__t1548t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(__t1551t__unsafe_ptr,&__t1549t____t517t__);
  if(__t1549t____t517t__){
  free__t508t(&__t1551t__unsafe_ptr);
  }
  __t_return:
  *__t2673t=__t1551t__unsafe_ptr;
  *__t2674t=__t1551t__pos;
  *__t2675t=__t1551t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2676t, uint64_t* __t2677t) {
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
  *__t2676t=from;
  *__t2677t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2678t, uint64_t r__to, uint64_t* __t2679t) {
  uint64_t r__from=*__t2678t;
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
  *__t2678t=r__from;
  *__t2679t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2220t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2680t) {
  char __t2221t__=0;
  char __t2222t__=0;
  uint64_t __t2223t=0;
  uint64_t __t2224t__=0;
  uint64_t __t2225t__=0;
  uint64_t __t2226t__=0;
  uint64_t __t2227t__=0;
  char* __t2228t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,m__rows,&__t2221t__);
  if(__t2221t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t323t(j,m__cols,&__t2222t__);
  if(__t2222t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t2223t=8;
  mul__t198t(i,m__stride,&__t2224t__);
  add__t174t(__t2224t__,j,&__t2225t__);
  add__t174t(m__pos,__t2225t__,&__t2226t__);
  mul__t198t(__t2223t,__t2226t__,&__t2227t__);
  add__t510t(m__unsafe_ptr,__t2227t__,&__t2228t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2680t=__t2228t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1607t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2681t) {
  char __t1608t__=0;
  uint64_t __t1609t=0;
  uint64_t __t1610t__=0;
  uint64_t __t1611t__=0;
  char* __t1612t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,v__length,&__t1608t__);
  if(__t1608t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1609t=8;
  add__t174t(i,v__pos,&__t1610t__);
  mul__t198t(__t1609t,__t1610t__,&__t1611t__);
  add__t510t(v__unsafe_ptr,__t1611t__,&__t1612t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2681t=__t1612t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2682t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2682t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2683t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2683t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2684t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2684t=z;
}

static inline __attribute__((always_inline)) int mutget__t1601t(char** __t2685t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2686t) {
  char* v__unsafe_ptr=*__t2685t;
  char __t1602t__=0;
  uint64_t __t1603t=0;
  uint64_t __t1604t__=0;
  uint64_t __t1605t__=0;
  char* __t1606t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,v__length,&__t1602t__);
  if(__t1602t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1603t=8;
  add__t174t(i,v__pos,&__t1604t__);
  mul__t198t(__t1603t,__t1604t__,&__t1605t__);
  add__t510t(v__unsafe_ptr,__t1605t__,&__t1606t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2685t=v__unsafe_ptr;
  *__t2686t=__t1606t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2259t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2687t, uint64_t* __t2688t, uint64_t* __t2689t) {
  char __t2260t__=0;
  char* __t2261t__unsafe_ptr=0;
  uint64_t __t2261t__pos=0;
  uint64_t __t2261t__length=0;
  char __t2262t____t1549t____t517t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2263t__from=0;
  uint64_t __t2263t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2264t=0;
  uint64_t __t2265t__=0;
  uint64_t i=0;
  double __t2266t=0;
  double __t2267t=0;
  double acc=0;
  uint64_t __t2268t__from=0;
  uint64_t __t2268t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2269t=0;
  uint64_t __t2270t__=0;
  uint64_t j=0;
  char* __t2271t__=0;
  double __t2272t__value=0;
  char* __t2273t__=0;
  double __t2274t__value=0;
  double __t2275t__=0;
  double __t2276t__=0;
  char* __t2277t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m__cols,v__length,&__t2260t__);
  if(__t2260t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1546t(m__rows,&__t2261t__unsafe_ptr,&__t2261t__pos,&__t2261t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2261t__unsafe_ptr;
  result__pos=__t2261t__pos;
  result__length=__t2261t__length;
  range__t467t(m__rows,&__t2263t__from,&__t2263t__to);
  it_i__from=__t2263t__from;
  it_i__to=__t2263t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2265t__);
  __t2264t=__t_complain;
  i=__t2265t__;
  __t2264t=__t2264t==0;
  if(!__t2264t){
  break;
  }
  __t2266t=0.0;
  __t2267t=__t2266t;
  acc=__t2267t;
  range__t467t(m__cols,&__t2268t__from,&__t2268t__to);
  it_j__from=__t2268t__from;
  it_j__to=__t2268t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2270t__);
  __t2269t=__t_complain;
  j=__t2270t__;
  __t2269t=__t2269t==0;
  if(!__t2269t){
  break;
  }
  __t_errcode=get__t2220t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2271t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2271t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2272t__value,__t2271t__,8);
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,j,&__t2273t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2273t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2274t__value,__t2273t__,8);
  mul__t176t(__t2272t__value,__t2274t__value,&__t2275t__);
  add__t152t(acc,__t2275t__,&__t2276t__);
  acc=__t2276t__;
  }
  __t_errcode=mutget__t1601t(&result__unsafe_ptr,result__pos,result__length,i,&__t2277t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2277t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2277t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2262t____t1549t____t517t__);
  if(__t2262t____t1549t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2687t=result__unsafe_ptr;
  *__t2688t=result__pos;
  *__t2689t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t370t(double value, double* __t2690t, const char** __t2691t) {
  goto __t_return;
  __t_return:
  *__t2690t=value;
  *__t2691t=__t369t;
}

static inline __attribute__((always_inline)) void print__t378t(double value, const char* endl) {
  int __t379t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2692t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2692t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2693t) {
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
  *__t2693t=z;
  
  return __t_errcode;
}

int print__t2115t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t2116t=0;
  const char* endl=0;
  const char* __t2117t__value=0;
  const char* __t2117t____t369t=0;
  uint64_t __t2119t__from=0;
  uint64_t __t2119t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2120t=0;
  uint64_t __t2121t__=0;
  uint64_t i=0;
  char* __t2122t__=0;
  double __t2123t__value=0;
  double __t2124t__value=0;
  const char* __t2124t____t369t=0;
  uint64_t __t2126t=0;
  uint64_t __t2127t__=0;
  char __t2128t__=0;
  const char* __t2129t__value=0;
  const char* __t2129t____t369t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t377t;
  nn__t368t(__t2097t,&__t2117t__value,&__t2117t____t369t);
  print__t373t(__t2117t__value,__t2117t____t369t);
  range__t467t(v__length,&__t2119t__from,&__t2119t__to);
  it__from=__t2119t__from;
  it__to=__t2119t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2121t__);
  __t2120t=__t_complain;
  i=__t2121t__;
  __t2120t=__t2120t==0;
  if(!__t2120t){
  break;
  }
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,i,&__t2122t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2122t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2123t__value,__t2122t__,8);
  nn__t370t(__t2123t__value,&__t2124t__value,&__t2124t____t369t);
  print__t378t(__t2124t__value,__t2124t____t369t);
  __t2126t=1;
  __t_errcode=sub__t351t(v__length,__t2126t,&__t2127t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2127t__,&__t2128t__);
  if(__t2128t__){
  nn__t368t(__t2110t,&__t2129t__value,&__t2129t____t369t);
  print__t373t(__t2129t__value,__t2129t____t369t);
  }
  }
  print__t373t(__t2113t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2562t(char** __t2694t, uint64_t* __t2695t, uint16_t* __t2696t, uint16_t* __t2697t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2694t=unsafe_ptr;
  *__t2695t=unsafe_size;
  *__t2696t=unsafe_offset;
  *__t2697t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2296t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2698t, uint64_t* __t2699t, uint64_t* __t2700t) {
  char __t2297t__=0;
  char* __t2298t__unsafe_ptr=0;
  uint64_t __t2298t__pos=0;
  uint64_t __t2298t__length=0;
  char __t2299t____t1549t____t517t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2300t__from=0;
  uint64_t __t2300t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2301t=0;
  uint64_t __t2302t__=0;
  uint64_t j=0;
  double __t2303t=0;
  double __t2304t=0;
  double acc=0;
  uint64_t __t2305t__from=0;
  uint64_t __t2305t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2306t=0;
  uint64_t __t2307t__=0;
  uint64_t i=0;
  char* __t2308t__=0;
  double __t2309t__value=0;
  char* __t2310t__=0;
  double __t2311t__value=0;
  double __t2312t__=0;
  double __t2313t__=0;
  char* __t2314t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v__length,m__rows,&__t2297t__);
  if(__t2297t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1546t(m__cols,&__t2298t__unsafe_ptr,&__t2298t__pos,&__t2298t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2298t__unsafe_ptr;
  result__pos=__t2298t__pos;
  result__length=__t2298t__length;
  range__t467t(m__cols,&__t2300t__from,&__t2300t__to);
  it_j__from=__t2300t__from;
  it_j__to=__t2300t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2302t__);
  __t2301t=__t_complain;
  j=__t2302t__;
  __t2301t=__t2301t==0;
  if(!__t2301t){
  break;
  }
  __t2303t=0.0;
  __t2304t=__t2303t;
  acc=__t2304t;
  range__t467t(m__rows,&__t2305t__from,&__t2305t__to);
  it_i__from=__t2305t__from;
  it_i__to=__t2305t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2307t__);
  __t2306t=__t_complain;
  i=__t2307t__;
  __t2306t=__t2306t==0;
  if(!__t2306t){
  break;
  }
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,i,&__t2308t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2308t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2309t__value,__t2308t__,8);
  __t_errcode=get__t2220t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2310t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2310t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2311t__value,__t2310t__,8);
  mul__t176t(__t2309t__value,__t2311t__value,&__t2312t__);
  add__t152t(acc,__t2312t__,&__t2313t__);
  acc=__t2313t__;
  }
  __t_errcode=mutget__t1601t(&result__unsafe_ptr,result__pos,result__length,j,&__t2314t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2314t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2314t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2299t____t1549t____t517t__);
  if(__t2299t____t1549t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2698t=result__unsafe_ptr;
  *__t2699t=result__pos;
  *__t2700t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2579t(char** __t2701t, uint64_t* __t2702t, uint16_t* __t2703t, uint16_t* __t2704t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2701t=unsafe_ptr;
  *__t2702t=unsafe_size;
  *__t2703t=unsafe_offset;
  *__t2704t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t2134t(uint64_t rows, uint64_t cols, char** __t2705t, uint64_t* __t2706t, uint64_t* __t2707t, uint64_t* __t2708t, uint64_t* __t2709t) {
  char* __t2135t__unsafe_ptr=0;
  uint64_t __t2135t__unsafe_size=0;
  uint16_t __t2135t__unsafe_offset=0;
  uint16_t __t2135t__unsafe_align=0;
  uint64_t __t2136t__=0;
  char* __t2137t__unsafe_ptr=0;
  uint64_t __t2137t__unsafe_size=0;
  uint16_t __t2137t__unsafe_offset=0;
  uint16_t __t2137t__unsafe_align=0;
  char __t2138t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t2139t=0;
  char* __t2140t__unsafe_ptr=0;
  uint64_t __t2140t__pos=0;
  uint64_t __t2140t__rows=0;
  uint64_t __t2140t__cols=0;
  uint64_t __t2140t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1512t(&__t2135t__unsafe_ptr,&__t2135t__unsafe_size,&__t2135t__unsafe_offset,&__t2135t__unsafe_align);
  mul__t198t(rows,cols,&__t2136t__);
  __t_errcode=alloc__t515t(&__t2135t__unsafe_ptr,&__t2135t__unsafe_size,&__t2135t__unsafe_offset,&__t2135t__unsafe_align,__t2136t__,&__t2137t__unsafe_ptr,&__t2137t__unsafe_size,&__t2137t__unsafe_offset,&__t2137t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2137t__unsafe_ptr;
  buf__unsafe_size=__t2137t__unsafe_size;
  buf__unsafe_offset=__t2137t__unsafe_offset;
  buf__unsafe_align=__t2137t__unsafe_align;
  __t2139t=0;
  mat__t1507t(buf__unsafe_ptr,__t2139t,rows,cols,cols,&__t2140t__unsafe_ptr,&__t2140t__pos,&__t2140t__rows,&__t2140t__cols,&__t2140t__stride);
  goto __t_return;
  
  __t_failure:exists__t442t(__t2140t__unsafe_ptr,&__t2138t____t517t__);
  if(__t2138t____t517t__){
  free__t508t(&__t2140t__unsafe_ptr);
  }
  __t_return:
  *__t2705t=__t2140t__unsafe_ptr;
  *__t2706t=__t2140t__pos;
  *__t2707t=__t2140t__rows;
  *__t2708t=__t2140t__cols;
  *__t2709t=__t2140t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2333t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2710t, uint64_t* __t2711t, uint64_t* __t2712t, uint64_t* __t2713t, uint64_t* __t2714t) {
  char __t2334t__=0;
  char* __t2335t__unsafe_ptr=0;
  uint64_t __t2335t__pos=0;
  uint64_t __t2335t__rows=0;
  uint64_t __t2335t__cols=0;
  uint64_t __t2335t__stride=0;
  char __t2336t____t2138t____t517t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2337t__from=0;
  uint64_t __t2337t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2338t=0;
  uint64_t __t2339t__=0;
  uint64_t i=0;
  uint64_t __t2340t__from=0;
  uint64_t __t2340t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2341t=0;
  uint64_t __t2342t__=0;
  uint64_t j=0;
  double __t2343t=0;
  double __t2344t=0;
  double acc=0;
  uint64_t __t2345t__from=0;
  uint64_t __t2345t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2346t=0;
  uint64_t __t2347t__=0;
  uint64_t k=0;
  char* __t2348t__=0;
  double __t2349t__value=0;
  char* __t2350t__=0;
  double __t2351t__value=0;
  double __t2352t__=0;
  double __t2353t__=0;
  char* __t2354t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m1__cols,m2__rows,&__t2334t__);
  if(__t2334t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t2134t(m1__rows,m2__cols,&__t2335t__unsafe_ptr,&__t2335t__pos,&__t2335t__rows,&__t2335t__cols,&__t2335t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2335t__unsafe_ptr;
  result__pos=__t2335t__pos;
  result__rows=__t2335t__rows;
  result__cols=__t2335t__cols;
  result__stride=__t2335t__stride;
  range__t467t(m1__rows,&__t2337t__from,&__t2337t__to);
  it_i__from=__t2337t__from;
  it_i__to=__t2337t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2339t__);
  __t2338t=__t_complain;
  i=__t2339t__;
  __t2338t=__t2338t==0;
  if(!__t2338t){
  break;
  }
  range__t467t(m2__cols,&__t2340t__from,&__t2340t__to);
  it_j__from=__t2340t__from;
  it_j__to=__t2340t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2342t__);
  __t2341t=__t_complain;
  j=__t2342t__;
  __t2341t=__t2341t==0;
  if(!__t2341t){
  break;
  }
  __t2343t=0.0;
  __t2344t=__t2343t;
  acc=__t2344t;
  range__t467t(m1__cols,&__t2345t__from,&__t2345t__to);
  it_k__from=__t2345t__from;
  it_k__to=__t2345t__to;
  while(1){
  __t_complain=next__t476t(&it_k__from,it_k__to,&__t2347t__);
  __t2346t=__t_complain;
  k=__t2347t__;
  __t2346t=__t2346t==0;
  if(!__t2346t){
  break;
  }
  __t_errcode=get__t2220t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2348t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2348t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2349t__value,__t2348t__,8);
  __t_errcode=get__t2220t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2350t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2350t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2351t__value,__t2350t__,8);
  mul__t176t(__t2349t__value,__t2351t__value,&__t2352t__);
  add__t152t(acc,__t2352t__,&__t2353t__);
  acc=__t2353t__;
  }
  __t_errcode=mutget__t2211t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2354t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2354t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2354t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t442t(result__unsafe_ptr,&__t2336t____t2138t____t517t__);
  if(__t2336t____t2138t____t517t__){
  free__t508t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2710t=result__unsafe_ptr;
  *__t2711t=result__pos;
  *__t2712t=result__rows;
  *__t2713t=result__cols;
  *__t2714t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2450t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2451t=0;
  const char* endl=0;
  uint64_t __t2452t__from=0;
  uint64_t __t2452t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2453t=0;
  uint64_t __t2454t__=0;
  uint64_t i=0;
  uint64_t __t2455t=0;
  char __t2456t__=0;
  uint64_t __t2458t=0;
  char __t2459t__=0;
  uint64_t __t2460t=0;
  char __t2461t__=0;
  char __t2462t=0;
  uint64_t __t2464t=0;
  char __t2465t__=0;
  uint64_t __t2466t=0;
  char __t2467t__=0;
  uint64_t __t2468t=0;
  uint64_t __t2469t__=0;
  char __t2470t__=0;
  char __t2471t=0;
  char __t2472t=0;
  uint64_t __t2474t=0;
  char __t2475t__=0;
  uint64_t __t2476t=0;
  uint64_t __t2477t__=0;
  char __t2478t__=0;
  char __t2479t=0;
  uint64_t __t2481t__from=0;
  uint64_t __t2481t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2482t=0;
  uint64_t __t2483t__=0;
  uint64_t j=0;
  char* __t2484t__=0;
  double __t2485t__value=0;
  uint64_t __t2487t=0;
  uint64_t __t2488t__=0;
  char __t2489t__=0;
  uint64_t __t2491t=0;
  char __t2492t__=0;
  uint64_t __t2494t=0;
  char __t2495t__=0;
  uint64_t __t2496t=0;
  char __t2497t__=0;
  char __t2498t=0;
  uint64_t __t2500t=0;
  char __t2501t__=0;
  uint64_t __t2502t=0;
  char __t2503t__=0;
  uint64_t __t2504t=0;
  uint64_t __t2505t__=0;
  char __t2506t__=0;
  char __t2507t=0;
  char __t2508t=0;
  uint64_t __t2510t=0;
  char __t2511t__=0;
  uint64_t __t2512t=0;
  uint64_t __t2513t__=0;
  char __t2514t__=0;
  char __t2515t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t377t;
  range__t467t(m__rows,&__t2452t__from,&__t2452t__to);
  it_i__from=__t2452t__from;
  it_i__to=__t2452t__to;
  while(1){
  __t_complain=next__t476t(&it_i__from,it_i__to,&__t2454t__);
  __t2453t=__t_complain;
  i=__t2454t__;
  __t2453t=__t2453t==0;
  if(!__t2453t){
  break;
  }
  __t2455t=1;
  eq__t119t(m__rows,__t2455t,&__t2456t__);
  if(__t2456t__){
  print__t373t(__t2097t,__t369t);
  }
  __t2458t=1;
  gt__t275t(m__rows,__t2458t,&__t2459t__);
  if(__t2459t__){
  __t2460t=0;
  eq__t119t(i,__t2460t,&__t2461t__);
  __t2462t=__t2461t__;
  }
  {
  __t2462t=0;
  }
  if(__t2462t){
  print__t373t(__t2389t,__t369t);
  }
  __t2464t=1;
  gt__t275t(m__rows,__t2464t,&__t2465t__);
  if(__t2465t__){
  __t2466t=0;
  gt__t275t(i,__t2466t,&__t2467t__);
  if(__t2467t__){
  __t2468t=1;
  __t_errcode=sub__t351t(m__rows,__t2468t,&__t2469t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2469t__,&__t2470t__);
  __t2471t=__t2470t__;
  }
  {
  __t2471t=0;
  }
  __t2472t=__t2471t;
  }
  {
  __t2472t=0;
  }
  if(__t2472t){
  print__t373t(__t2400t,__t369t);
  }
  __t2474t=1;
  gt__t275t(m__rows,__t2474t,&__t2475t__);
  if(__t2475t__){
  __t2476t=1;
  __t_errcode=sub__t351t(m__rows,__t2476t,&__t2477t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2477t__,&__t2478t__);
  __t2479t=__t2478t__;
  }
  {
  __t2479t=0;
  }
  if(__t2479t){
  print__t373t(__t2408t,__t369t);
  }
  range__t467t(m__cols,&__t2481t__from,&__t2481t__to);
  it_j__from=__t2481t__from;
  it_j__to=__t2481t__to;
  while(1){
  __t_complain=next__t476t(&it_j__from,it_j__to,&__t2483t__);
  __t2482t=__t_complain;
  j=__t2483t__;
  __t2482t=__t2482t==0;
  if(!__t2482t){
  break;
  }
  __t_errcode=get__t2220t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2484t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2485t__value,__t2484t__,8);
  print__t378t(__t2485t__value,__t369t);
  __t2487t=1;
  __t_errcode=sub__t351t(m__cols,__t2487t,&__t2488t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(j,__t2488t__,&__t2489t__);
  if(__t2489t__){
  print__t373t(__t2110t,__t369t);
  }
  }
  __t2491t=1;
  eq__t119t(m__rows,__t2491t,&__t2492t__);
  if(__t2492t__){
  print__t373t(__t2113t,__t369t);
  }
  __t2494t=1;
  gt__t275t(m__rows,__t2494t,&__t2495t__);
  if(__t2495t__){
  __t2496t=0;
  eq__t119t(i,__t2496t,&__t2497t__);
  __t2498t=__t2497t__;
  }
  {
  __t2498t=0;
  }
  if(__t2498t){
  print__t373t(__t2428t,__t369t);
  }
  __t2500t=1;
  gt__t275t(m__rows,__t2500t,&__t2501t__);
  if(__t2501t__){
  __t2502t=0;
  gt__t275t(i,__t2502t,&__t2503t__);
  if(__t2503t__){
  __t2504t=1;
  __t_errcode=sub__t351t(m__rows,__t2504t,&__t2505t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t251t(i,__t2505t__,&__t2506t__);
  __t2507t=__t2506t__;
  }
  {
  __t2507t=0;
  }
  __t2508t=__t2507t;
  }
  {
  __t2508t=0;
  }
  if(__t2508t){
  print__t373t(__t2439t,__t369t);
  }
  __t2510t=1;
  gt__t275t(m__rows,__t2510t,&__t2511t__);
  if(__t2511t__){
  __t2512t=1;
  __t_errcode=sub__t351t(m__rows,__t2512t,&__t2513t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2513t__,&__t2514t__);
  __t2515t=__t2514t__;
  }
  {
  __t2515t=0;
  }
  if(__t2515t){
  print__t373t(__t2447t,__t369t);
  }
  print__t373t(__t369t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2518t() {
  double __t2521t=0;
  double __t2526t=0;
  double __t2527t=0;
  double __t2528t=0;
  double __t2529t=0;
  double __t2530t=0;
  char* __t2531t__unsafe_ptr=0;
  uint64_t __t2531t__unsafe_size=0;
  uint16_t __t2531t__unsafe_offset=0;
  uint16_t __t2531t__unsafe_align=0;
  uint64_t __t2532t=0;
  char* __t2533t__unsafe_ptr=0;
  uint64_t __t2533t__unsafe_size=0;
  uint16_t __t2533t__unsafe_offset=0;
  uint16_t __t2533t__unsafe_align=0;
  char __t2534t____t517t__=0;
  uint64_t __t2535t=0;
  char* __t2536t__unsafe_ptr=0;
  uint64_t __t2536t__pos=0;
  uint64_t __t2536t__rows=0;
  uint64_t __t2536t__cols=0;
  uint64_t __t2536t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2537t=0;
  uint64_t __t2538t=0;
  char* __t2539t__=0;
  double __t2540t=0;
  double __t2541t=0;
  double __t2546t=0;
  double __t2547t=0;
  char* __t2548t__unsafe_ptr=0;
  uint64_t __t2548t__unsafe_size=0;
  uint16_t __t2548t__unsafe_offset=0;
  uint16_t __t2548t__unsafe_align=0;
  uint64_t __t2549t=0;
  char* __t2550t__unsafe_ptr=0;
  uint64_t __t2550t__unsafe_size=0;
  uint16_t __t2550t__unsafe_offset=0;
  uint16_t __t2550t__unsafe_align=0;
  char __t2551t____t517t__=0;
  char* __t2552t__unsafe_ptr=0;
  uint64_t __t2552t__pos=0;
  uint64_t __t2552t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2554t__value=0;
  const char* __t2554t____t369t=0;
  char* __t2556t__unsafe_ptr=0;
  uint64_t __t2556t__pos=0;
  uint64_t __t2556t__length=0;
  char __t2557t____t2262t____t1549t____t517t__=0;
  double __t2559t=0;
  double __t2564t=0;
  char* __t2565t__unsafe_ptr=0;
  uint64_t __t2565t__unsafe_size=0;
  uint16_t __t2565t__unsafe_offset=0;
  uint16_t __t2565t__unsafe_align=0;
  uint64_t __t2566t=0;
  char* __t2567t__unsafe_ptr=0;
  uint64_t __t2567t__unsafe_size=0;
  uint16_t __t2567t__unsafe_offset=0;
  uint16_t __t2567t__unsafe_align=0;
  char __t2568t____t517t__=0;
  char* __t2569t__unsafe_ptr=0;
  uint64_t __t2569t__pos=0;
  uint64_t __t2569t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2571t__value=0;
  const char* __t2571t____t369t=0;
  char* __t2573t__unsafe_ptr=0;
  uint64_t __t2573t__pos=0;
  uint64_t __t2573t__length=0;
  char __t2574t____t2299t____t1549t____t517t__=0;
  double __t2576t=0;
  double __t2581t=0;
  double __t2582t=0;
  double __t2583t=0;
  double __t2584t=0;
  double __t2585t=0;
  char* __t2586t__unsafe_ptr=0;
  uint64_t __t2586t__unsafe_size=0;
  uint16_t __t2586t__unsafe_offset=0;
  uint16_t __t2586t__unsafe_align=0;
  uint64_t __t2587t=0;
  char* __t2588t__unsafe_ptr=0;
  uint64_t __t2588t__unsafe_size=0;
  uint16_t __t2588t__unsafe_offset=0;
  uint16_t __t2588t__unsafe_align=0;
  char __t2589t____t517t__=0;
  uint64_t __t2590t=0;
  char* __t2591t__unsafe_ptr=0;
  uint64_t __t2591t__pos=0;
  uint64_t __t2591t__rows=0;
  uint64_t __t2591t__cols=0;
  uint64_t __t2591t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2594t__unsafe_ptr=0;
  uint64_t __t2594t__pos=0;
  uint64_t __t2594t__rows=0;
  uint64_t __t2594t__cols=0;
  uint64_t __t2594t__stride=0;
  char __t2595t____t2336t____t2138t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  new__t630t();
  __t2521t=1.0;
  __t2526t=0.0;
  __t2527t=2.0;
  __t2528t=0.0;
  __t2529t=3.0;
  __t2530t=1.0;
  float____buffer__t2524t(&__t2531t__unsafe_ptr,&__t2531t__unsafe_size,&__t2531t__unsafe_offset,&__t2531t__unsafe_align);
  __t2532t=6;
  __t_errcode=alloc__t515t(&__t2531t__unsafe_ptr,&__t2531t__unsafe_size,&__t2531t__unsafe_offset,&__t2531t__unsafe_align,__t2532t,&__t2533t__unsafe_ptr,&__t2533t__unsafe_size,&__t2533t__unsafe_offset,&__t2533t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2531t__unsafe_ptr,&__t2521t,8);
  memcpy(__t2531t__unsafe_ptr+8,&__t2526t,8);
  memcpy(__t2531t__unsafe_ptr+16,&__t2527t,8);
  memcpy(__t2531t__unsafe_ptr+24,&__t2528t,8);
  memcpy(__t2531t__unsafe_ptr+32,&__t2529t,8);
  memcpy(__t2531t__unsafe_ptr+40,&__t2530t,8);
  __t2535t=2;
  __t_errcode=mat__t2164t(&__t2531t__unsafe_ptr,&__t2531t__unsafe_size,&__t2531t__unsafe_offset,&__t2531t__unsafe_align,__t2535t,&__t2536t__unsafe_ptr,&__t2536t__pos,&__t2536t__rows,&__t2536t__cols,&__t2536t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2536t__unsafe_ptr;
  a__pos=__t2536t__pos;
  a__rows=__t2536t__rows;
  a__cols=__t2536t__cols;
  a__stride=__t2536t__stride;
  __t2537t=0;
  __t2538t=0;
  __t_errcode=mutget__t2211t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2537t,__t2538t,&__t2539t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2540t=1.0;
  if(!__t2539t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2539t__,&__t2540t,8);
  __t2541t=1.0;
  __t2546t=2.0;
  __t2547t=3.0;
  float____buffer__t2544t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align);
  __t2549t=3;
  __t_errcode=alloc__t515t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,__t2549t,&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2548t__unsafe_ptr,&__t2541t,8);
  memcpy(__t2548t__unsafe_ptr+8,&__t2546t,8);
  memcpy(__t2548t__unsafe_ptr+16,&__t2547t,8);
  __t_errcode=vec__t1552t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,&__t2552t__unsafe_ptr,&__t2552t__pos,&__t2552t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2552t__unsafe_ptr;
  x__pos=__t2552t__pos;
  x__length=__t2552t__length;
  nn__t368t(__t2553t,&__t2554t__value,&__t2554t____t369t);
  print__t373t(__t2554t__value,__t2554t____t369t);
  __t_errcode=mul__t2259t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2556t__unsafe_ptr,&__t2556t__pos,&__t2556t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2115t(__t2556t__unsafe_ptr,__t2556t__pos,__t2556t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2559t=1.0;
  __t2564t=2.0;
  float____buffer__t2562t(&__t2565t__unsafe_ptr,&__t2565t__unsafe_size,&__t2565t__unsafe_offset,&__t2565t__unsafe_align);
  __t2566t=2;
  __t_errcode=alloc__t515t(&__t2565t__unsafe_ptr,&__t2565t__unsafe_size,&__t2565t__unsafe_offset,&__t2565t__unsafe_align,__t2566t,&__t2567t__unsafe_ptr,&__t2567t__unsafe_size,&__t2567t__unsafe_offset,&__t2567t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2565t__unsafe_ptr,&__t2559t,8);
  memcpy(__t2565t__unsafe_ptr+8,&__t2564t,8);
  __t_errcode=vec__t1552t(&__t2565t__unsafe_ptr,&__t2565t__unsafe_size,&__t2565t__unsafe_offset,&__t2565t__unsafe_align,&__t2569t__unsafe_ptr,&__t2569t__pos,&__t2569t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2569t__unsafe_ptr;
  u__pos=__t2569t__pos;
  u__length=__t2569t__length;
  nn__t368t(__t2570t,&__t2571t__value,&__t2571t____t369t);
  print__t373t(__t2571t__value,__t2571t____t369t);
  __t_errcode=mul__t2296t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2573t__unsafe_ptr,&__t2573t__pos,&__t2573t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2115t(__t2573t__unsafe_ptr,__t2573t__pos,__t2573t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2576t=1.0;
  __t2581t=2.0;
  __t2582t=3.0;
  __t2583t=4.0;
  __t2584t=5.0;
  __t2585t=6.0;
  float____buffer__t2579t(&__t2586t__unsafe_ptr,&__t2586t__unsafe_size,&__t2586t__unsafe_offset,&__t2586t__unsafe_align);
  __t2587t=6;
  __t_errcode=alloc__t515t(&__t2586t__unsafe_ptr,&__t2586t__unsafe_size,&__t2586t__unsafe_offset,&__t2586t__unsafe_align,__t2587t,&__t2588t__unsafe_ptr,&__t2588t__unsafe_size,&__t2588t__unsafe_offset,&__t2588t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2586t__unsafe_ptr,&__t2576t,8);
  memcpy(__t2586t__unsafe_ptr+8,&__t2581t,8);
  memcpy(__t2586t__unsafe_ptr+16,&__t2582t,8);
  memcpy(__t2586t__unsafe_ptr+24,&__t2583t,8);
  memcpy(__t2586t__unsafe_ptr+32,&__t2584t,8);
  memcpy(__t2586t__unsafe_ptr+40,&__t2585t,8);
  __t2590t=3;
  __t_errcode=mat__t2164t(&__t2586t__unsafe_ptr,&__t2586t__unsafe_size,&__t2586t__unsafe_offset,&__t2586t__unsafe_align,__t2590t,&__t2591t__unsafe_ptr,&__t2591t__pos,&__t2591t__rows,&__t2591t__cols,&__t2591t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2591t__unsafe_ptr;
  b__pos=__t2591t__pos;
  b__rows=__t2591t__rows;
  b__cols=__t2591t__cols;
  b__stride=__t2591t__stride;
  print__t375t(__t2592t);
  __t_errcode=mul__t2333t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2594t__unsafe_ptr,&__t2594t__pos,&__t2594t__rows,&__t2594t__cols,&__t2594t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2450t(__t2594t__unsafe_ptr,__t2594t__pos,__t2594t__rows,__t2594t__cols,__t2594t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t2594t__unsafe_ptr,&__t2595t____t2336t____t2138t____t517t__);
  if(__t2595t____t2336t____t2138t____t517t__){
  free__t508t(&__t2594t__unsafe_ptr);
  }
  exists__t442t(__t2588t__unsafe_ptr,&__t2589t____t517t__);
  if(__t2589t____t517t__){
  free__t508t(&__t2588t__unsafe_ptr);
  }
  exists__t442t(__t2573t__unsafe_ptr,&__t2574t____t2299t____t1549t____t517t__);
  if(__t2574t____t2299t____t1549t____t517t__){
  free__t508t(&__t2573t__unsafe_ptr);
  }
  exists__t442t(__t2567t__unsafe_ptr,&__t2568t____t517t__);
  if(__t2568t____t517t__){
  free__t508t(&__t2567t__unsafe_ptr);
  }
  exists__t442t(__t2556t__unsafe_ptr,&__t2557t____t2262t____t1549t____t517t__);
  if(__t2557t____t2262t____t1549t____t517t__){
  free__t508t(&__t2556t__unsafe_ptr);
  }
  exists__t442t(__t2550t__unsafe_ptr,&__t2551t____t517t__);
  if(__t2551t____t517t__){
  free__t508t(&__t2550t__unsafe_ptr);
  }
  exists__t442t(__t2533t__unsafe_ptr,&__t2534t____t517t__);
  if(__t2534t____t517t__){
  free__t508t(&__t2533t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2518t();return 0;}