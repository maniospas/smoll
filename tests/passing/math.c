#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2560t="(sum, mean, std) = (";
const char* const __t2568t=")\n";
const char* const __t370t="";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1541t(char** __t2570t, uint64_t* __t2571t, uint16_t* __t2572t, uint16_t* __t2573t) {
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

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2574t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2574t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2575t) {
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

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2577t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2577t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2578t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2578t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2579t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2579t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2580t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2580t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2581t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2581t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2582t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2582t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2583t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2583t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2584t) {
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
  *__t2584t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2585t, uint64_t* __t2586t, uint16_t* __t2587t, uint16_t* __t2588t, uint64_t size, char** __t2589t, uint64_t* __t2590t, uint16_t* __t2591t, uint16_t* __t2592t) {
  char* buffer__unsafe_ptr=*__t2585t;
  uint64_t buffer__unsafe_size=*__t2586t;
  uint16_t buffer__unsafe_offset=*__t2587t;
  uint16_t buffer__unsafe_align=*__t2588t;
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

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2593t) {
  goto __t_return;
  __t_return:
  *__t2593t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1533t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2594t, uint64_t* __t2595t, uint64_t* __t2596t) {
  char* __t1535t__unsafe_ptr=0;
  uint64_t __t1535t__pos=0;
  uint64_t __t1535t__length=0;
  __t1535t__unsafe_ptr=unsafe_ptr;
  __t1535t__pos=pos;
  __t1535t__length=length;
  goto __t_return;
  __t_return:
  *__t2594t=__t1535t__unsafe_ptr;
  *__t2595t=__t1535t__pos;
  *__t2596t=__t1535t__length;
}

static inline __attribute__((always_inline)) int vec__t1581t(char** __t2597t, uint64_t* __t2598t, uint16_t* __t2599t, uint16_t* __t2600t, char** __t2601t, uint64_t* __t2602t, uint64_t* __t2603t) {
  char* buf__unsafe_ptr=*__t2597t;
  uint64_t buf__unsafe_size=*__t2598t;
  uint16_t buf__unsafe_offset=*__t2599t;
  uint16_t buf__unsafe_align=*__t2600t;
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
  *__t2597t=buf__unsafe_ptr;
  *__t2598t=buf__unsafe_size;
  *__t2599t=buf__unsafe_offset;
  *__t2600t=buf__unsafe_align;
  *__t2601t=__t1590t__unsafe_ptr;
  *__t2602t=__t1590t__pos;
  *__t2603t=__t1590t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2604t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2604t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2605t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2606t) {
  *__t2606t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2607t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2607t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t1630t(char** __t2608t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2609t) {
  char* v__unsafe_ptr=*__t2608t;
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
  *__t2608t=v__unsafe_ptr;
  *__t2609t=__t1635t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1629t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2610t) {
  goto __t_return;
  __t_return:
  *__t2610t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t2611t, uint64_t* __t2612t) {
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
  *__t2611t=from;
  *__t2612t=to;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t2613t, uint64_t r__to, uint64_t* __t2614t) {
  uint64_t r__from=*__t2613t;
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
  *__t2613t=r__from;
  *__t2614t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1636t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2615t) {
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
  *__t2615t=__t1641t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2616t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2616t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2617t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2617t=z;
}

static inline __attribute__((always_inline)) int reduce__t2015t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2618t) {
  char __t2016t=0;
  char __t2017t=0;
  double __t2018t=0;
  double __t2019t=0;
  double ret=0;
  int __t2020t=0;
  uint64_t __t2021t__=0;
  uint64_t __t2022t__from=0;
  uint64_t __t2022t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2023t=0;
  uint64_t __t2024t__=0;
  uint64_t i=0;
  char* __t2025t__=0;
  double __t2026t__number=0;
  double __t2027t=0;
  double value=0;
  int __t2028t=0;
  char __t2029t=0;
  char __t2030t=0;
  double __t2031t__=0;
  int __t2032t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2017t=1;
  if(__t2017t){
  __t2016t=1;
  }
  if(__t2016t){
  __t2018t=0.0;
  __t2019t=__t2018t;
  ret=__t2019t;
  }
  len__t1629t(v__unsafe_ptr,v__pos,v__length,&__t2021t__);
  range__t468t(__t2021t__,&__t2022t__from,&__t2022t__to);
  it__from=__t2022t__from;
  it__to=__t2022t__to;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t2024t__);
  __t2023t=__t_complain;
  i=__t2024t__;
  __t2023t=__t2023t==0;
  if(!__t2023t){
  break;
  }
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,i,&__t2025t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2025t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2026t__number,__t2025t__,8);
  __t2027t=__t2026t__number;
  value=__t2027t;
  __t2030t=1;
  if(__t2030t){
  __t2029t=1;
  }
  if(__t2029t){
  add__t153t(ret,value,&__t2031t__);
  ret=__t2031t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2618t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t2091t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2619t) {
  double __t2093t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2015t(v__unsafe_ptr,v__pos,v__length,&__t2093t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2619t=__t2093t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t379t(double value, const char* endl) {
  int __t380t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2620t) {
  int value=0;
  *__t2620t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2621t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2621t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t411t(uint64_t x, double* __t2622t) {
  int __t412t=0;
  int __t413t__=0;
  int __t414t=0;
  double z=0;
  not__t39t(__t412t,&__t413t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2622t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t2623t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2623t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t2624t) {
  int __t202t__=0;
  double zero=0;
  char __t203t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t71t(x,y,&__t202t__);
  zero=0;
  eq__t98t(y,zero,&__t203t__);
  if(__t203t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2624t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t2094t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2625t) {
  double __t2096t__=0;
  uint64_t __t2097t__=0;
  double __t2098t__=0;
  double __t2099t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2015t(v__unsafe_ptr,v__pos,v__length,&__t2096t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1629t(v__unsafe_ptr,v__pos,v__length,&__t2097t__);
  float__t411t(__t2097t__,&__t2098t__);
  __t_errcode=div__t201t(__t2096t__,__t2098t__,&__t2099t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2625t=__t2099t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t2626t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2626t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t2627t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2627t=z;
}

static inline __attribute__((always_inline)) int var__t2100t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2628t) {
  double __t2101t=0;
  double __t2102t=0;
  double sumsqr=0;
  double __t2103t=0;
  double __t2104t=0;
  double sum=0;
  uint64_t __t2105t__=0;
  uint64_t __t2106t__from=0;
  uint64_t __t2106t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t2107t=0;
  uint64_t __t2108t__=0;
  uint64_t i=0;
  char* __t2109t__=0;
  double __t2110t__number=0;
  double value=0;
  double __t2111t__=0;
  double __t2112t__=0;
  double __t2113t__=0;
  uint64_t __t2114t__=0;
  double __t2115t__=0;
  double n=0;
  double __t2116t__=0;
  double __t2117t__=0;
  double __t2118t__=0;
  double __t2119t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2101t=0.0;
  __t2102t=__t2101t;
  sumsqr=__t2102t;
  __t2103t=0.0;
  __t2104t=__t2103t;
  sum=__t2104t;
  len__t1629t(v__unsafe_ptr,v__pos,v__length,&__t2105t__);
  range__t468t(__t2105t__,&__t2106t__from,&__t2106t__to);
  it__from=__t2106t__from;
  it__to=__t2106t__to;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t2108t__);
  __t2107t=__t_complain;
  i=__t2108t__;
  __t2107t=__t2107t==0;
  if(!__t2107t){
  break;
  }
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,i,&__t2109t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2109t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2110t__number,__t2109t__,8);
  value=__t2110t__number;
  add__t153t(sum,value,&__t2111t__);
  sum=__t2111t__;
  mul__t177t(value,value,&__t2112t__);
  add__t153t(sumsqr,__t2112t__,&__t2113t__);
  sumsqr=__t2113t__;
  }
  len__t1629t(v__unsafe_ptr,v__pos,v__length,&__t2114t__);
  float__t411t(__t2114t__,&__t2115t__);
  n=__t2115t__;
  __t_errcode=div__t201t(sum,n,&__t2116t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t2116t__;
  __t_errcode=div__t201t(sumsqr,n,&__t2117t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t2118t__);
  sub__t326t(__t2117t__,__t2118t__,&__t2119t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2628t=__t2119t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1521t(double x, double* __t2629t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2629t=z;
}

static inline __attribute__((always_inline)) int std__t2120t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2630t) {
  double __t2121t__=0;
  double __t2122t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t2100t(v__unsafe_ptr,v__pos,v__length,&__t2121t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1521t(__t2121t__,&__t2122t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2630t=__t2122t__;
  
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
  char __t2552t____t518t__=0;
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
  console__t366t();
  float____t_buffer____buffer__t1541t(&__t2549t__unsafe_ptr,&__t2549t__unsafe_size,&__t2549t__unsafe_offset,&__t2549t__unsafe_align);
  __t2550t=5;
  __t_errcode=alloc__t516t(&__t2549t__unsafe_ptr,&__t2549t__unsafe_size,&__t2549t__unsafe_offset,&__t2549t__unsafe_align,__t2550t,&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1581t(&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align,&__t2553t__unsafe_ptr,&__t2553t__pos,&__t2553t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2553t__unsafe_ptr;
  v__pos=__t2553t__pos;
  v__length=__t2553t__length;
  __t2554t=0;
  __t_errcode=mutget__t1630t(&v__unsafe_ptr,v__pos,v__length,__t2554t,&__t2555t__);
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
  __t_errcode=mutget__t1630t(&v__unsafe_ptr,v__pos,v__length,__t2557t,&__t2558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2559t=2.0;
  if(!__t2558t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2558t__,&__t2559t,8);
  print__t374t(__t2560t,__t370t);
  __t_errcode=sum__t2091t(v__unsafe_ptr,v__pos,v__length,&__t2562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t379t(__t2562t__,__t2563t);
  __t_errcode=mean__t2094t(v__unsafe_ptr,v__pos,v__length,&__t2565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t379t(__t2565t__,__t2563t);
  __t_errcode=std__t2120t(v__unsafe_ptr,v__pos,v__length,&__t2567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t379t(__t2567t__,__t2568t);
  
  __t_failure:exists__t443t(__t2551t__unsafe_ptr,&__t2552t____t518t__);
  if(__t2552t____t518t__){
  free__t509t(&__t2551t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2547t();return 0;}