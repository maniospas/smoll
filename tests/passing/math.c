#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2531t="(sum, mean, std) = (";
const char* const __t369t="";
const char* const __t2539t=")\n";
const char* const __t2534t=", ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1512t(char** __t2541t, uint64_t* __t2542t, uint16_t* __t2543t, uint16_t* __t2544t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2541t=unsafe_ptr;
  *__t2542t=unsafe_size;
  *__t2543t=unsafe_offset;
  *__t2544t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2545t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2545t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2546t) {
  char* allocated=*__t2546t;
  if(allocated){
  free(allocated);
  }
  *__t2546t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2547t) {
  int value=0;
  *__t2547t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2548t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2548t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2549t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2549t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2550t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2550t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2551t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2551t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2552t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2552t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2553t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2553t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2554t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2554t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2555t) {
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
  *__t2555t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2556t, uint64_t* __t2557t, uint16_t* __t2558t, uint16_t* __t2559t, uint64_t size, char** __t2560t, uint64_t* __t2561t, uint16_t* __t2562t, uint16_t* __t2563t) {
  char* buffer__unsafe_ptr=*__t2556t;
  uint64_t buffer__unsafe_size=*__t2557t;
  uint16_t buffer__unsafe_offset=*__t2558t;
  uint16_t buffer__unsafe_align=*__t2559t;
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
  *__t2556t=buffer__unsafe_ptr;
  *__t2557t=buffer__unsafe_size;
  *__t2558t=buffer__unsafe_offset;
  *__t2559t=buffer__unsafe_align;
  *__t2560t=buffer__unsafe_ptr;
  *__t2561t=buffer__unsafe_size;
  *__t2562t=buffer__unsafe_offset;
  *__t2563t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2564t) {
  goto __t_return;
  __t_return:
  *__t2564t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1504t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2565t, uint64_t* __t2566t, uint64_t* __t2567t) {
  char* __t1506t__unsafe_ptr=0;
  uint64_t __t1506t__pos=0;
  uint64_t __t1506t__length=0;
  __t1506t__unsafe_ptr=unsafe_ptr;
  __t1506t__pos=pos;
  __t1506t__length=length;
  goto __t_return;
  __t_return:
  *__t2565t=__t1506t__unsafe_ptr;
  *__t2566t=__t1506t__pos;
  *__t2567t=__t1506t__length;
}

static inline __attribute__((always_inline)) int vec__t1552t(char** __t2568t, uint64_t* __t2569t, uint16_t* __t2570t, uint16_t* __t2571t, char** __t2572t, uint64_t* __t2573t, uint64_t* __t2574t) {
  char* buf__unsafe_ptr=*__t2568t;
  uint64_t buf__unsafe_size=*__t2569t;
  uint16_t buf__unsafe_offset=*__t2570t;
  uint16_t buf__unsafe_align=*__t2571t;
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
  *__t2568t=buf__unsafe_ptr;
  *__t2569t=buf__unsafe_size;
  *__t2570t=buf__unsafe_offset;
  *__t2571t=buf__unsafe_align;
  *__t2572t=__t1561t__unsafe_ptr;
  *__t2573t=__t1561t__pos;
  *__t2574t=__t1561t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2575t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2575t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2576t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2576t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2577t) {
  *__t2577t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2578t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2578t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t1601t(char** __t2579t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2580t) {
  char* v__unsafe_ptr=*__t2579t;
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
  *__t2579t=v__unsafe_ptr;
  *__t2580t=__t1606t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1600t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2581t) {
  goto __t_return;
  __t_return:
  *__t2581t=v__length;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2582t, uint64_t* __t2583t) {
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
  *__t2582t=from;
  *__t2583t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2584t, uint64_t r__to, uint64_t* __t2585t) {
  uint64_t r__from=*__t2584t;
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
  *__t2584t=r__from;
  *__t2585t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1607t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2586t) {
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
  *__t2586t=__t1612t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2587t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2587t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2588t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2588t=z;
}

static inline __attribute__((always_inline)) int reduce__t1986t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2589t) {
  char __t1987t=0;
  char __t1988t=0;
  double __t1989t=0;
  double __t1990t=0;
  double ret=0;
  int __t1991t=0;
  uint64_t __t1992t__=0;
  uint64_t __t1993t__from=0;
  uint64_t __t1993t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1994t=0;
  uint64_t __t1995t__=0;
  uint64_t i=0;
  char* __t1996t__=0;
  double __t1997t__value=0;
  double __t1998t=0;
  double value=0;
  int __t1999t=0;
  char __t2000t=0;
  char __t2001t=0;
  double __t2002t__=0;
  int __t2003t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1988t=1;
  if(__t1988t){
  __t1987t=1;
  }
  if(__t1987t){
  __t1989t=0.0;
  __t1990t=__t1989t;
  ret=__t1990t;
  }
  len__t1600t(v__unsafe_ptr,v__pos,v__length,&__t1992t__);
  range__t467t(__t1992t__,&__t1993t__from,&__t1993t__to);
  it__from=__t1993t__from;
  it__to=__t1993t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t1995t__);
  __t1994t=__t_complain;
  i=__t1995t__;
  __t1994t=__t1994t==0;
  if(!__t1994t){
  break;
  }
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,i,&__t1996t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1996t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1997t__value,__t1996t__,8);
  __t1998t=__t1997t__value;
  value=__t1998t;
  __t2001t=1;
  if(__t2001t){
  __t2000t=1;
  }
  if(__t2000t){
  add__t152t(ret,value,&__t2002t__);
  ret=__t2002t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2589t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t2062t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2590t) {
  double __t2064t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1986t(v__unsafe_ptr,v__pos,v__length,&__t2064t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2590t=__t2064t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(double value, const char* endl) {
  int __t379t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2591t) {
  int value=0;
  *__t2591t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2592t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2592t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t410t(uint64_t x, double* __t2593t) {
  int __t411t=0;
  int __t412t__=0;
  int __t413t=0;
  double z=0;
  not__t38t(__t411t,&__t412t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2593t=z;
}

static inline __attribute__((always_inline)) void eq__t97t(double x, double y, char* __t2594t) {
  int __t98t__=0;
  char z=0;
  is_different__t70t(x,y,&__t98t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2594t=z;
}

static inline __attribute__((always_inline)) int div__t200t(double x, double y, double* __t2595t) {
  int __t201t__=0;
  double zero=0;
  char __t202t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t70t(x,y,&__t201t__);
  zero=0;
  eq__t97t(y,zero,&__t202t__);
  if(__t202t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2595t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t2065t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2596t) {
  double __t2067t__=0;
  uint64_t __t2068t__=0;
  double __t2069t__=0;
  double __t2070t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1986t(v__unsafe_ptr,v__pos,v__length,&__t2067t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1600t(v__unsafe_ptr,v__pos,v__length,&__t2068t__);
  float__t410t(__t2068t__,&__t2069t__);
  __t_errcode=div__t200t(__t2067t__,__t2069t__,&__t2070t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2596t=__t2070t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2597t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2597t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t2598t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2598t=z;
}

static inline __attribute__((always_inline)) int var__t2071t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2599t) {
  double __t2072t=0;
  double __t2073t=0;
  double sumsqr=0;
  double __t2074t=0;
  double __t2075t=0;
  double sum=0;
  uint64_t __t2076t__=0;
  uint64_t __t2077t__from=0;
  uint64_t __t2077t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2078t=0;
  uint64_t __t2079t__=0;
  uint64_t i=0;
  char* __t2080t__=0;
  double __t2081t__value=0;
  double value=0;
  double __t2082t__=0;
  double __t2083t__=0;
  double __t2084t__=0;
  uint64_t __t2085t__=0;
  double __t2086t__=0;
  double n=0;
  double __t2087t__=0;
  double __t2088t__=0;
  double __t2089t__=0;
  double __t2090t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2072t=0.0;
  __t2073t=__t2072t;
  sumsqr=__t2073t;
  __t2074t=0.0;
  __t2075t=__t2074t;
  sum=__t2075t;
  len__t1600t(v__unsafe_ptr,v__pos,v__length,&__t2076t__);
  range__t467t(__t2076t__,&__t2077t__from,&__t2077t__to);
  it__from=__t2077t__from;
  it__to=__t2077t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2079t__);
  __t2078t=__t_complain;
  i=__t2079t__;
  __t2078t=__t2078t==0;
  if(!__t2078t){
  break;
  }
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,i,&__t2080t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2080t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2081t__value,__t2080t__,8);
  value=__t2081t__value;
  add__t152t(sum,value,&__t2082t__);
  sum=__t2082t__;
  mul__t176t(value,value,&__t2083t__);
  add__t152t(sumsqr,__t2083t__,&__t2084t__);
  sumsqr=__t2084t__;
  }
  len__t1600t(v__unsafe_ptr,v__pos,v__length,&__t2085t__);
  float__t410t(__t2085t__,&__t2086t__);
  n=__t2086t__;
  __t_errcode=div__t200t(sum,n,&__t2087t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t2087t__;
  __t_errcode=div__t200t(sumsqr,n,&__t2088t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t176t(sum,sum,&__t2089t__);
  sub__t325t(__t2088t__,__t2089t__,&__t2090t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2599t=__t2090t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1492t(double x, double* __t2600t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2600t=z;
}

static inline __attribute__((always_inline)) int std__t2091t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2601t) {
  double __t2092t__=0;
  double __t2093t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t2071t(v__unsafe_ptr,v__pos,v__length,&__t2092t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1492t(__t2092t__,&__t2093t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2601t=__t2093t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2518t() {
  char* __t2520t__unsafe_ptr=0;
  uint64_t __t2520t__unsafe_size=0;
  uint16_t __t2520t__unsafe_offset=0;
  uint16_t __t2520t__unsafe_align=0;
  uint64_t __t2521t=0;
  char* __t2522t__unsafe_ptr=0;
  uint64_t __t2522t__unsafe_size=0;
  uint16_t __t2522t__unsafe_offset=0;
  uint16_t __t2522t__unsafe_align=0;
  char __t2523t____t517t__=0;
  char* __t2524t__unsafe_ptr=0;
  uint64_t __t2524t__pos=0;
  uint64_t __t2524t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2525t=0;
  char* __t2526t__=0;
  double __t2527t=0;
  uint64_t __t2528t=0;
  char* __t2529t__=0;
  double __t2530t=0;
  double __t2533t__=0;
  double __t2536t__=0;
  double __t2538t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  float____t_buffer____buffer__t1512t(&__t2520t__unsafe_ptr,&__t2520t__unsafe_size,&__t2520t__unsafe_offset,&__t2520t__unsafe_align);
  __t2521t=5;
  __t_errcode=alloc__t515t(&__t2520t__unsafe_ptr,&__t2520t__unsafe_size,&__t2520t__unsafe_offset,&__t2520t__unsafe_align,__t2521t,&__t2522t__unsafe_ptr,&__t2522t__unsafe_size,&__t2522t__unsafe_offset,&__t2522t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1552t(&__t2522t__unsafe_ptr,&__t2522t__unsafe_size,&__t2522t__unsafe_offset,&__t2522t__unsafe_align,&__t2524t__unsafe_ptr,&__t2524t__pos,&__t2524t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2524t__unsafe_ptr;
  v__pos=__t2524t__pos;
  v__length=__t2524t__length;
  __t2525t=0;
  __t_errcode=mutget__t1601t(&v__unsafe_ptr,v__pos,v__length,__t2525t,&__t2526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2527t=1.0;
  if(!__t2526t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2526t__,&__t2527t,8);
  __t2528t=1;
  __t_errcode=mutget__t1601t(&v__unsafe_ptr,v__pos,v__length,__t2528t,&__t2529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2530t=2.0;
  if(!__t2529t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2529t__,&__t2530t,8);
  print__t373t(__t2531t,__t369t);
  __t_errcode=sum__t2062t(v__unsafe_ptr,v__pos,v__length,&__t2533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2533t__,__t2534t);
  __t_errcode=mean__t2065t(v__unsafe_ptr,v__pos,v__length,&__t2536t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2536t__,__t2534t);
  __t_errcode=std__t2091t(v__unsafe_ptr,v__pos,v__length,&__t2538t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2538t__,__t2539t);
  
  __t_failure:exists__t442t(__t2522t__unsafe_ptr,&__t2523t____t517t__);
  if(__t2523t____t517t__){
  free__t508t(&__t2522t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2518t();return 0;}