#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t369t="";
const char* const __t2560t="(sum, mean, std) = (";
const char* const __t2568t=")\n";
const char* const __t2563t=", ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1503t(char** __t2570t, uint64_t* __t2571t, uint16_t* __t2572t, uint16_t* __t2573t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2570t=unsafe_ptr;
  *__t2571t=unsafe_size;
  *__t2572t=unsafe_offset;
  *__t2573t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2574t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2574t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2575t) {
  char* allocated=*__t2575t;
  if(allocated){
  free(allocated);
  }
  *__t2575t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2576t) {
  int value=0;
  *__t2576t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2577t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2577t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2578t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2578t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2579t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2579t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2580t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2580t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2581t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2581t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2582t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2582t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2583t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2583t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2584t) {
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
  *__t2584t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2585t, uint64_t* __t2586t, uint16_t* __t2587t, uint16_t* __t2588t, uint64_t size, char** __t2589t, uint64_t* __t2590t, uint16_t* __t2591t, uint16_t* __t2592t) {
  char* buffer__unsafe_ptr=*__t2585t;
  uint64_t buffer__unsafe_size=*__t2586t;
  uint16_t buffer__unsafe_offset=*__t2587t;
  uint16_t buffer__unsafe_align=*__t2588t;
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
  *__t2585t=buffer__unsafe_ptr;
  *__t2586t=buffer__unsafe_size;
  *__t2587t=buffer__unsafe_offset;
  *__t2588t=buffer__unsafe_align;
  *__t2589t=buffer__unsafe_ptr;
  *__t2590t=buffer__unsafe_size;
  *__t2591t=buffer__unsafe_offset;
  *__t2592t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2593t) {
  goto __t_return;
  __t_return:
  *__t2593t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1491t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2594t, uint64_t* __t2595t, uint64_t* __t2596t) {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__pos=0;
  uint64_t __t1493t__length=0;
  __t1493t__unsafe_ptr=unsafe_ptr;
  __t1493t__pos=pos;
  __t1493t__length=length;
  goto __t_return;
  __t_return:
  *__t2594t=__t1493t__unsafe_ptr;
  *__t2595t=__t1493t__pos;
  *__t2596t=__t1493t__length;
}

static inline __attribute__((always_inline)) int vec__t1543t(char** __t2597t, uint64_t* __t2598t, uint16_t* __t2599t, uint16_t* __t2600t, char** __t2601t, uint64_t* __t2602t, uint64_t* __t2603t) {
  char* buf__unsafe_ptr=*__t2597t;
  uint64_t buf__unsafe_size=*__t2598t;
  uint16_t buf__unsafe_offset=*__t2599t;
  uint16_t buf__unsafe_align=*__t2600t;
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
  *__t2597t=buf__unsafe_ptr;
  *__t2598t=buf__unsafe_size;
  *__t2599t=buf__unsafe_offset;
  *__t2600t=buf__unsafe_align;
  *__t2601t=__t1552t__unsafe_ptr;
  *__t2602t=__t1552t__pos;
  *__t2603t=__t1552t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2604t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2604t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2605t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2606t) {
  *__t2606t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2607t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2607t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t1592t(char** __t2608t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2609t) {
  char* v__unsafe_ptr=*__t2608t;
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
  *__t2608t=v__unsafe_ptr;
  *__t2609t=__t1597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1591t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2610t) {
  goto __t_return;
  __t_return:
  *__t2610t=v__length;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2611t, uint64_t* __t2612t) {
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
  *__t2611t=from;
  *__t2612t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2613t, uint64_t r__to, uint64_t* __t2614t) {
  uint64_t r__from=*__t2613t;
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
  *__t2613t=r__from;
  *__t2614t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1598t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2615t) {
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
  *__t2615t=__t1603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2616t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2616t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2617t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2617t=z;
}

static inline __attribute__((always_inline)) int reduce__t1977t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2618t) {
  char __t1978t=0;
  char __t1979t=0;
  double __t1980t=0;
  double __t1981t=0;
  double ret=0;
  int __t1982t=0;
  uint64_t __t1983t__=0;
  uint64_t __t1984t__from=0;
  uint64_t __t1984t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1985t=0;
  uint64_t __t1986t__=0;
  uint64_t i=0;
  char* __t1987t__=0;
  double __t1988t__number=0;
  double __t1989t=0;
  double value=0;
  int __t1990t=0;
  char __t1991t=0;
  char __t1992t=0;
  double __t1993t__=0;
  int __t1994t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1979t=1;
  if(__t1979t){
  __t1978t=1;
  }
  if(__t1978t){
  __t1980t=0.0;
  __t1981t=__t1980t;
  ret=__t1981t;
  }
  len__t1591t(v__unsafe_ptr,v__pos,v__length,&__t1983t__);
  range__t467t(__t1983t__,&__t1984t__from,&__t1984t__to);
  it__from=__t1984t__from;
  it__to=__t1984t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t1986t__);
  __t1985t=__t_complain;
  i=__t1986t__;
  __t1985t=__t1985t==0;
  if(!__t1985t){
  break;
  }
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,i,&__t1987t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1987t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1988t__number,__t1987t__,8);
  __t1989t=__t1988t__number;
  value=__t1989t;
  __t1992t=1;
  if(__t1992t){
  __t1991t=1;
  }
  if(__t1991t){
  add__t152t(ret,value,&__t1993t__);
  ret=__t1993t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2618t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t2053t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2619t) {
  double __t2055t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1977t(v__unsafe_ptr,v__pos,v__length,&__t2055t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2619t=__t2055t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(double value, const char* endl) {
  int __t379t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2620t) {
  int value=0;
  *__t2620t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2621t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2621t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t410t(uint64_t x, double* __t2622t) {
  int __t411t=0;
  int __t412t__=0;
  int __t413t=0;
  double z=0;
  not__t38t(__t411t,&__t412t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2622t=z;
}

static inline __attribute__((always_inline)) void eq__t97t(double x, double y, char* __t2623t) {
  int __t98t__=0;
  char z=0;
  is_different__t70t(x,y,&__t98t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2623t=z;
}

static inline __attribute__((always_inline)) int div__t200t(double x, double y, double* __t2624t) {
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
  *__t2624t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t2056t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2625t) {
  double __t2058t__=0;
  uint64_t __t2059t__=0;
  double __t2060t__=0;
  double __t2061t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1977t(v__unsafe_ptr,v__pos,v__length,&__t2058t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1591t(v__unsafe_ptr,v__pos,v__length,&__t2059t__);
  float__t410t(__t2059t__,&__t2060t__);
  __t_errcode=div__t200t(__t2058t__,__t2060t__,&__t2061t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2625t=__t2061t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2626t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2626t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t2627t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2627t=z;
}

static inline __attribute__((always_inline)) int var__t2062t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2628t) {
  double __t2063t=0;
  double __t2064t=0;
  double sumsqr=0;
  double __t2065t=0;
  double __t2066t=0;
  double sum=0;
  uint64_t __t2067t__=0;
  uint64_t __t2068t__from=0;
  uint64_t __t2068t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2069t=0;
  uint64_t __t2070t__=0;
  uint64_t i=0;
  char* __t2071t__=0;
  double __t2072t__number=0;
  double value=0;
  double __t2073t__=0;
  double __t2074t__=0;
  double __t2075t__=0;
  uint64_t __t2076t__=0;
  double __t2077t__=0;
  double n=0;
  double __t2078t__=0;
  double __t2079t__=0;
  double __t2080t__=0;
  double __t2081t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2063t=0.0;
  __t2064t=__t2063t;
  sumsqr=__t2064t;
  __t2065t=0.0;
  __t2066t=__t2065t;
  sum=__t2066t;
  len__t1591t(v__unsafe_ptr,v__pos,v__length,&__t2067t__);
  range__t467t(__t2067t__,&__t2068t__from,&__t2068t__to);
  it__from=__t2068t__from;
  it__to=__t2068t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2070t__);
  __t2069t=__t_complain;
  i=__t2070t__;
  __t2069t=__t2069t==0;
  if(!__t2069t){
  break;
  }
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,i,&__t2071t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2071t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2072t__number,__t2071t__,8);
  value=__t2072t__number;
  add__t152t(sum,value,&__t2073t__);
  sum=__t2073t__;
  mul__t176t(value,value,&__t2074t__);
  add__t152t(sumsqr,__t2074t__,&__t2075t__);
  sumsqr=__t2075t__;
  }
  len__t1591t(v__unsafe_ptr,v__pos,v__length,&__t2076t__);
  float__t410t(__t2076t__,&__t2077t__);
  n=__t2077t__;
  __t_errcode=div__t200t(sum,n,&__t2078t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t2078t__;
  __t_errcode=div__t200t(sumsqr,n,&__t2079t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t176t(sum,sum,&__t2080t__);
  sub__t325t(__t2079t__,__t2080t__,&__t2081t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2628t=__t2081t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1479t(double x, double* __t2629t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2629t=z;
}

static inline __attribute__((always_inline)) int std__t2082t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2630t) {
  double __t2083t__=0;
  double __t2084t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t2062t(v__unsafe_ptr,v__pos,v__length,&__t2083t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1479t(__t2083t__,&__t2084t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2630t=__t2084t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2547t() {
  char* __t2549t__unsafe_ptr=0;
  uint64_t __t2549t__unsafe_size=0;
  uint16_t __t2549t__unsafe_offset=0;
  uint16_t __t2549t__unsafe_align=0;
  uint64_t __t2550t=0;
  char* __t2551t__unsafe_ptr=0;
  uint64_t __t2551t__unsafe_size=0;
  uint16_t __t2551t__unsafe_offset=0;
  uint16_t __t2551t__unsafe_align=0;
  char __t2552t____t517t__=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__pos=0;
  uint64_t __t2553t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2554t=0;
  char* __t2555t__=0;
  double __t2556t=0;
  uint64_t __t2557t=0;
  char* __t2558t__=0;
  double __t2559t=0;
  double __t2562t__=0;
  double __t2565t__=0;
  double __t2567t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  float____t_buffer____buffer__t1503t(&__t2549t__unsafe_ptr,&__t2549t__unsafe_size,&__t2549t__unsafe_offset,&__t2549t__unsafe_align);
  __t2550t=5;
  __t_errcode=alloc__t515t(&__t2549t__unsafe_ptr,&__t2549t__unsafe_size,&__t2549t__unsafe_offset,&__t2549t__unsafe_align,__t2550t,&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1543t(&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align,&__t2553t__unsafe_ptr,&__t2553t__pos,&__t2553t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2553t__unsafe_ptr;
  v__pos=__t2553t__pos;
  v__length=__t2553t__length;
  __t2554t=0;
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,__t2554t,&__t2555t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2556t=1.0;
  if(!__t2555t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2555t__,&__t2556t,8);
  __t2557t=1;
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,__t2557t,&__t2558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2559t=2.0;
  if(!__t2558t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2558t__,&__t2559t,8);
  print__t373t(__t2560t,__t369t);
  __t_errcode=sum__t2053t(v__unsafe_ptr,v__pos,v__length,&__t2562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2562t__,__t2563t);
  __t_errcode=mean__t2056t(v__unsafe_ptr,v__pos,v__length,&__t2565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2565t__,__t2563t);
  __t_errcode=std__t2082t(v__unsafe_ptr,v__pos,v__length,&__t2567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t378t(__t2567t__,__t2568t);
  
  __t_failure:exists__t442t(__t2551t__unsafe_ptr,&__t2552t____t517t__);
  if(__t2552t____t517t__){
  free__t508t(&__t2551t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}