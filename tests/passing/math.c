#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2567t=")\n";
const char* const __t366t="";
const char* const __t2559t="(sum, mean, std) = (";
const char* const __t2562t=", ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1503t(char** __t2569t, uint64_t* __t2570t, uint16_t* __t2571t, uint16_t* __t2572t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2569t=unsafe_ptr;
  *__t2570t=unsafe_size;
  *__t2571t=unsafe_offset;
  *__t2572t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2573t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2573t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t2574t) {
  char* allocated=*__t2574t;
  if(allocated){
  free(allocated);
  }
  *__t2574t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2575t) {
  int value=0;
  *__t2575t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2576t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2576t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2577t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2577t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2578t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2578t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2579t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2579t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2580t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2580t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2581t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2581t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2582t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2582t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t2583t) {
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
  *__t2583t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t2584t, uint64_t* __t2585t, uint16_t* __t2586t, uint16_t* __t2587t, uint64_t size, char** __t2588t, uint64_t* __t2589t, uint16_t* __t2590t, uint16_t* __t2591t) {
  char* buffer__unsafe_ptr=*__t2584t;
  uint64_t buffer__unsafe_size=*__t2585t;
  uint16_t buffer__unsafe_offset=*__t2586t;
  uint16_t buffer__unsafe_align=*__t2587t;
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
  *__t2584t=buffer__unsafe_ptr;
  *__t2585t=buffer__unsafe_size;
  *__t2586t=buffer__unsafe_offset;
  *__t2587t=buffer__unsafe_align;
  *__t2588t=buffer__unsafe_ptr;
  *__t2589t=buffer__unsafe_size;
  *__t2590t=buffer__unsafe_offset;
  *__t2591t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2592t) {
  goto __t_return;
  __t_return:
  *__t2592t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1491t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2593t, uint64_t* __t2594t, uint64_t* __t2595t) {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__pos=0;
  uint64_t __t1493t__length=0;
  __t1493t__unsafe_ptr=unsafe_ptr;
  __t1493t__pos=pos;
  __t1493t__length=length;
  goto __t_return;
  __t_return:
  *__t2593t=__t1493t__unsafe_ptr;
  *__t2594t=__t1493t__pos;
  *__t2595t=__t1493t__length;
}

static inline __attribute__((always_inline)) int vec__t1543t(char** __t2596t, uint64_t* __t2597t, uint16_t* __t2598t, uint16_t* __t2599t, char** __t2600t, uint64_t* __t2601t, uint64_t* __t2602t) {
  char* buf__unsafe_ptr=*__t2596t;
  uint64_t buf__unsafe_size=*__t2597t;
  uint16_t buf__unsafe_offset=*__t2598t;
  uint16_t buf__unsafe_align=*__t2599t;
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
  *__t2596t=buf__unsafe_ptr;
  *__t2597t=buf__unsafe_size;
  *__t2598t=buf__unsafe_offset;
  *__t2599t=buf__unsafe_align;
  *__t2600t=__t1552t__unsafe_ptr;
  *__t2601t=__t1552t__pos;
  *__t2602t=__t1552t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2603t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2603t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2604t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2604t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2605t) {
  *__t2605t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2606t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2606t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t1592t(char** __t2607t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2608t) {
  char* v__unsafe_ptr=*__t2607t;
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
  *__t2607t=v__unsafe_ptr;
  *__t2608t=__t1597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t370t(const char* value, const char* endl) {
  int __t371t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1591t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2609t) {
  goto __t_return;
  __t_return:
  *__t2609t=v__length;
}

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t2610t, uint64_t* __t2611t) {
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
  *__t2610t=from;
  *__t2611t=to;
}

static inline __attribute__((always_inline)) int next__t473t(uint64_t* __t2612t, uint64_t r__to, uint64_t* __t2613t) {
  uint64_t r__from=*__t2612t;
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
  *__t2612t=r__from;
  *__t2613t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1598t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2614t) {
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
  *__t2614t=__t1603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2615t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2615t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2616t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2616t=z;
}

static inline __attribute__((always_inline)) int reduce__t1977t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2617t) {
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
  range__t464t(__t1983t__,&__t1984t__from,&__t1984t__to);
  it__from=__t1984t__from;
  it__to=__t1984t__to;
  while(1){
  __t_complain=next__t473t(&it__from,it__to,&__t1986t__);
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
  *__t2617t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t2053t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2618t) {
  double __t2055t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1977t(v__unsafe_ptr,v__pos,v__length,&__t2055t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2618t=__t2055t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t375t(double value, const char* endl) {
  int __t376t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2619t) {
  int value=0;
  *__t2619t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2620t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2620t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t407t(uint64_t x, double* __t2621t) {
  int __t408t=0;
  int __t409t__=0;
  int __t410t=0;
  double z=0;
  not__t38t(__t408t,&__t409t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) void eq__t97t(double x, double y, char* __t2622t) {
  int __t98t__=0;
  char z=0;
  is_different__t70t(x,y,&__t98t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2622t=z;
}

static inline __attribute__((always_inline)) int div__t200t(double x, double y, double* __t2623t) {
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
  *__t2623t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t2056t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2624t) {
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
  float__t407t(__t2059t__,&__t2060t__);
  __t_errcode=div__t200t(__t2058t__,__t2060t__,&__t2061t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2624t=__t2061t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2625t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2625t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t2626t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2626t=z;
}

static inline __attribute__((always_inline)) int var__t2062t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2627t) {
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
  range__t464t(__t2067t__,&__t2068t__from,&__t2068t__to);
  it__from=__t2068t__from;
  it__to=__t2068t__to;
  while(1){
  __t_complain=next__t473t(&it__from,it__to,&__t2070t__);
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
  float__t407t(__t2076t__,&__t2077t__);
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
  *__t2627t=__t2081t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1479t(double x, double* __t2628t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2628t=z;
}

static inline __attribute__((always_inline)) int std__t2082t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2629t) {
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
  *__t2629t=__t2084t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2547t() {
  char* __t2548t__unsafe_ptr=0;
  uint64_t __t2548t__unsafe_size=0;
  uint16_t __t2548t__unsafe_offset=0;
  uint16_t __t2548t__unsafe_align=0;
  uint64_t __t2549t=0;
  char* __t2550t__unsafe_ptr=0;
  uint64_t __t2550t__unsafe_size=0;
  uint16_t __t2550t__unsafe_offset=0;
  uint16_t __t2550t__unsafe_align=0;
  char __t2551t____t514t__=0;
  char* __t2552t__unsafe_ptr=0;
  uint64_t __t2552t__pos=0;
  uint64_t __t2552t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2553t=0;
  char* __t2554t__=0;
  double __t2555t=0;
  uint64_t __t2556t=0;
  char* __t2557t__=0;
  double __t2558t=0;
  double __t2561t__=0;
  double __t2564t__=0;
  double __t2566t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1503t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align);
  __t2549t=5;
  __t_errcode=alloc__t512t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,__t2549t,&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1543t(&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align,&__t2552t__unsafe_ptr,&__t2552t__pos,&__t2552t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2552t__unsafe_ptr;
  v__pos=__t2552t__pos;
  v__length=__t2552t__length;
  __t2553t=0;
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,__t2553t,&__t2554t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2555t=1.0;
  if(!__t2554t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2554t__,&__t2555t,8);
  __t2556t=1;
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,__t2556t,&__t2557t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2558t=2.0;
  if(!__t2557t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2557t__,&__t2558t,8);
  print__t370t(__t2559t,__t366t);
  __t_errcode=sum__t2053t(v__unsafe_ptr,v__pos,v__length,&__t2561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t375t(__t2561t__,__t2562t);
  __t_errcode=mean__t2056t(v__unsafe_ptr,v__pos,v__length,&__t2564t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t375t(__t2564t__,__t2562t);
  __t_errcode=std__t2082t(v__unsafe_ptr,v__pos,v__length,&__t2566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t375t(__t2566t__,__t2567t);
  
  __t_failure:exists__t439t(__t2550t__unsafe_ptr,&__t2551t____t514t__);
  if(__t2551t____t514t__){
  free__t505t(&__t2550t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}