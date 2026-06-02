#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1512t(char** __t2566t, uint64_t* __t2567t, uint16_t* __t2568t, uint16_t* __t2569t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2566t=unsafe_ptr;
  *__t2567t=unsafe_size;
  *__t2568t=unsafe_offset;
  *__t2569t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2570t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2570t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2571t) {
  char* allocated=*__t2571t;
  if(allocated){
  free(allocated);
  }
  *__t2571t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2572t) {
  int value=0;
  *__t2572t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2573t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2573t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2574t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2574t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2575t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2575t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2576t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2576t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2577t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2577t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2578t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2578t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2579t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2579t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2580t) {
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
  *__t2580t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2581t, uint64_t* __t2582t, uint16_t* __t2583t, uint16_t* __t2584t, uint64_t size, char** __t2585t, uint64_t* __t2586t, uint16_t* __t2587t, uint16_t* __t2588t) {
  char* buffer__unsafe_ptr=*__t2581t;
  uint64_t buffer__unsafe_size=*__t2582t;
  uint16_t buffer__unsafe_offset=*__t2583t;
  uint16_t buffer__unsafe_align=*__t2584t;
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
  *__t2581t=buffer__unsafe_ptr;
  *__t2582t=buffer__unsafe_size;
  *__t2583t=buffer__unsafe_offset;
  *__t2584t=buffer__unsafe_align;
  *__t2585t=buffer__unsafe_ptr;
  *__t2586t=buffer__unsafe_size;
  *__t2587t=buffer__unsafe_offset;
  *__t2588t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2589t) {
  goto __t_return;
  __t_return:
  *__t2589t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2590t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2590t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2591t) {
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
  *__t2591t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2592t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2592t=z;
}

static inline __attribute__((always_inline)) void circular__t637t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2593t, uint64_t length, char** __t2594t, uint64_t* __t2595t, uint16_t* __t2596t, uint16_t* __t2597t, uint64_t* __t2598t, uint64_t* __t2599t) {
  uint64_t pos=*__t2593t;
  goto __t_return;
  __t_return:
  *__t2593t=pos;
  *__t2594t=buf__unsafe_ptr;
  *__t2595t=buf__unsafe_size;
  *__t2596t=buf__unsafe_offset;
  *__t2597t=buf__unsafe_align;
  *__t2598t=pos;
  *__t2599t=length;
}

static inline __attribute__((always_inline)) int circular__t1536t(char** __t2600t, uint64_t* __t2601t, uint16_t* __t2602t, uint16_t* __t2603t, char** __t2604t, uint64_t* __t2605t, uint16_t* __t2606t, uint16_t* __t2607t, uint64_t* __t2608t, uint64_t* __t2609t) {
  char* buf__unsafe_ptr=*__t2600t;
  uint64_t buf__unsafe_size=*__t2601t;
  uint16_t buf__unsafe_offset=*__t2602t;
  uint16_t buf__unsafe_align=*__t2603t;
  int __t1537t=0;
  int __t1538t=0;
  uint64_t __t1539t=0;
  uint64_t __t1540t=0;
  uint64_t pos=0;
  int __t1541t=0;
  uint64_t __t1542t__=0;
  uint64_t __t1543t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1544t__=0;
  char* __t1545t__buf__unsafe_ptr=0;
  uint64_t __t1545t__buf__unsafe_size=0;
  uint16_t __t1545t__buf__unsafe_offset=0;
  uint16_t __t1545t__buf__unsafe_align=0;
  uint64_t __t1545t__pos=0;
  uint64_t __t1545t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1539t=0;
  __t1540t=__t1539t;
  pos=__t1540t;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1542t__);
  __t_errcode=sub__t351t(__t1542t__,pos,&__t1543t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1543t__;
  start=pos;
  add__t174t(pos,length,&__t1544t__);
  pos=__t1544t__;
  circular__t637t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1545t__buf__unsafe_ptr,&__t1545t__buf__unsafe_size,&__t1545t__buf__unsafe_offset,&__t1545t__buf__unsafe_align,&__t1545t__pos,&__t1545t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2600t=buf__unsafe_ptr;
  *__t2601t=buf__unsafe_size;
  *__t2602t=buf__unsafe_offset;
  *__t2603t=buf__unsafe_align;
  *__t2604t=__t1545t__buf__unsafe_ptr;
  *__t2605t=__t1545t__buf__unsafe_size;
  *__t2606t=__t1545t__buf__unsafe_offset;
  *__t2607t=__t1545t__buf__unsafe_align;
  *__t2608t=__t1545t__pos;
  *__t2609t=__t1545t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t630t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1504t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2610t, uint64_t* __t2611t, uint64_t* __t2612t) {
  char* __t1506t__unsafe_ptr=0;
  uint64_t __t1506t__pos=0;
  uint64_t __t1506t__length=0;
  __t1506t__unsafe_ptr=unsafe_ptr;
  __t1506t__pos=pos;
  __t1506t__length=length;
  goto __t_return;
  __t_return:
  *__t2610t=__t1506t__unsafe_ptr;
  *__t2611t=__t1506t__pos;
  *__t2612t=__t1506t__length;
}

int vec__t1546t(uint64_t length, char** __t2613t, uint64_t* __t2614t, uint64_t* __t2615t) {
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
  *__t2613t=__t1551t__unsafe_ptr;
  *__t2614t=__t1551t__pos;
  *__t2615t=__t1551t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2616t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2616t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2617t) {
  *__t2617t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2618t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2618t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t1601t(char** __t2619t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2620t) {
  char* v__unsafe_ptr=*__t2619t;
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
  *__t2619t=v__unsafe_ptr;
  *__t2620t=__t1606t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2621t, uint64_t* __t2622t) {
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
  *__t2621t=from;
  *__t2622t=to;
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

static inline __attribute__((always_inline)) int vec__t1584t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2624t, uint64_t FLOATS__length, uint64_t length, char** __t2625t, uint64_t* __t2626t, uint64_t* __t2627t) {
  uint64_t FLOATS__pos=*__t2624t;
  uint64_t __t1585t__=0;
  uint64_t __t1586t=0;
  char __t1587t__=0;
  uint64_t __t1588t__=0;
  uint64_t __t1589t=0;
  char __t1590t__=0;
  uint64_t __t1591t__=0;
  char __t1592t__=0;
  uint64_t __t1593t=0;
  uint64_t start=0;
  uint64_t __t1594t__=0;
  char __t1595t__=0;
  uint64_t __t1596t=0;
  uint64_t __t1597t__=0;
  uint64_t __t1598t=0;
  char* __t1599t__unsafe_ptr=0;
  uint64_t __t1599t__pos=0;
  uint64_t __t1599t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t512t(FLOATS__buf__unsafe_align,&__t1585t__);
  __t1586t=8;
  neq__t143t(__t1585t__,__t1586t,&__t1587t__);
  if(__t1587t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t512t(FLOATS__buf__unsafe_offset,&__t1588t__);
  __t1589t=0;
  neq__t143t(__t1588t__,__t1589t,&__t1590t__);
  if(__t1590t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t604t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1591t__);
  gt__t275t(length,__t1591t__,&__t1592t__);
  if(__t1592t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1593t=FLOATS__pos;
  start=__t1593t;
  add__t174t(FLOATS__pos,length,&__t1594t__);
  FLOATS__pos=__t1594t__;
  ge__t323t(FLOATS__pos,FLOATS__length,&__t1595t__);
  if(__t1595t__){
  __t1596t=0;
  add__t174t(length,__t1596t,&__t1597t__);
  FLOATS__pos=__t1597t__;
  __t1598t=0;
  start=__t1598t;
  }
  vec__t1504t(FLOATS__buf__unsafe_ptr,start,length,&__t1599t__unsafe_ptr,&__t1599t__pos,&__t1599t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2624t=FLOATS__pos;
  *__t2625t=__t1599t__unsafe_ptr;
  *__t2626t=__t1599t__pos;
  *__t2627t=__t1599t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2628t, uint64_t r__to, uint64_t* __t2629t) {
  uint64_t r__from=*__t2628t;
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
  *__t2628t=r__from;
  *__t2629t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t483t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t2630t) {
  char __t484t__=0;
  char __t485t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,r__to,&__t484t__);
  if(__t484t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t251t(pos,r__from,&__t485t__);
  if(__t485t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2630t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1607t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2631t) {
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
  *__t2631t=__t1612t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1614t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2632t) {
  char* __t1615t__=0;
  double __t1616t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1607t(v__unsafe_ptr,v__pos,v__length,i,&__t1615t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1615t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1616t__value,__t1615t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2632t=__t1616t__value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2633t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2633t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2634t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2634t=z;
}

int add__t1669t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2635t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2636t, uint64_t* __t2637t, uint64_t* __t2638t) {
  uint64_t FLOATS__pos=*__t2635t;
  int __t1670t=0;
  char __t1671t__=0;
  char* __t1672t__unsafe_ptr=0;
  uint64_t __t1672t__pos=0;
  uint64_t __t1672t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t1673t=0;
  uint64_t __t1674t__from=0;
  uint64_t __t1674t__to=0;
  char __t1675t=0;
  uint64_t __t1676t__=0;
  uint64_t i=0;
  char* __t1677t__=0;
  char* __t1678t__=0;
  double __t1679t__value=0;
  double __t1680t__=0;
  double __t1681t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v1__length,v2__length,&__t1671t__);
  if(__t1671t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1584t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1672t__unsafe_ptr,&__t1672t__pos,&__t1672t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1672t__unsafe_ptr;
  v__pos=__t1672t__pos;
  v__length=__t1672t__length;
  p1=v1__unsafe_ptr;
  range__t467t(v1__length,&__t1674t__from,&__t1674t__to);
  __t1673t=0;
  while(1){
  __t_complain=get__t483t(__t1674t__from,__t1674t__to,__t1673t,&__t1676t__);
  __t1675t=__t_complain;
  i=__t1676t__;
  __t1675t=__t1675t==0;
  __t1673t=__t1673t+1;
  if(!__t1675t){
  break;
  }
  __t_errcode=mutget__t1601t(&v__unsafe_ptr,v__pos,v__length,i,&__t1677t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1607t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1678t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1678t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1679t__value,__t1678t__,8);
  __t_errcode=at__t1614t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t152t(__t1679t__value,__t1680t__,&__t1681t__);
  if(!__t1677t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1677t__,&__t1681t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2635t=FLOATS__pos;
  *__t2636t=v__unsafe_ptr;
  *__t2637t=v__pos;
  *__t2638t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1613t(double number, uint64_t i, double* __t2639t) {
  goto __t_return;
  __t_return:
  *__t2639t=number;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2640t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2640t=z;
}

static inline __attribute__((always_inline)) int mul__t1860t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2641t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2642t, uint64_t* __t2643t, uint64_t* __t2644t) {
  uint64_t FLOATS__pos=*__t2641t;
  int __t1861t=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__pos=0;
  uint64_t __t1862t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1863t__from=0;
  uint64_t __t1863t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1864t=0;
  uint64_t __t1865t__=0;
  uint64_t i=0;
  char* __t1866t__=0;
  char* __t1867t__=0;
  double __t1868t__value=0;
  double __t1869t__=0;
  double __t1870t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1584t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1862t__unsafe_ptr,&__t1862t__pos,&__t1862t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1862t__unsafe_ptr;
  v__pos=__t1862t__pos;
  v__length=__t1862t__length;
  range__t467t(v1__length,&__t1863t__from,&__t1863t__to);
  it__from=__t1863t__from;
  it__to=__t1863t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t1865t__);
  __t1864t=__t_complain;
  i=__t1865t__;
  __t1864t=__t1864t==0;
  if(!__t1864t){
  break;
  }
  __t_errcode=mutget__t1601t(&v__unsafe_ptr,v__pos,v__length,i,&__t1866t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1607t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1867t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1867t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1868t__value,__t1867t__,8);
  at__t1613t(v2,i,&__t1869t__);
  mul__t176t(__t1868t__value,__t1869t__,&__t1870t__);
  if(!__t1866t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1866t__,&__t1870t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2641t=FLOATS__pos;
  *__t2642t=v__unsafe_ptr;
  *__t2643t=v__pos;
  *__t2644t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1876t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2645t, uint64_t FLOATS__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2646t, uint64_t* __t2647t, uint64_t* __t2648t) {
  uint64_t FLOATS__pos=*__t2645t;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__pos=0;
  uint64_t __t1877t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1860t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1877t__unsafe_ptr,&__t1877t__pos,&__t1877t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2645t=FLOATS__pos;
  *__t2646t=__t1877t__unsafe_ptr;
  *__t2647t=__t1877t__pos;
  *__t2648t=__t1877t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t2518t() {
  char* __t2519t__unsafe_ptr=0;
  uint64_t __t2519t__unsafe_size=0;
  uint16_t __t2519t__unsafe_offset=0;
  uint16_t __t2519t__unsafe_align=0;
  uint64_t __t2520t=0;
  char* __t2521t__unsafe_ptr=0;
  uint64_t __t2521t__unsafe_size=0;
  uint16_t __t2521t__unsafe_offset=0;
  uint16_t __t2521t__unsafe_align=0;
  char __t2522t____t517t__=0;
  char* __t2523t__buf__unsafe_ptr=0;
  uint64_t __t2523t__buf__unsafe_size=0;
  uint16_t __t2523t__buf__unsafe_offset=0;
  uint16_t __t2523t__buf__unsafe_align=0;
  uint64_t __t2523t__pos=0;
  uint64_t __t2523t__length=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  uint64_t FLOATS__length=0;
  char* __t2524t__unsafe_ptr=0;
  uint64_t __t2524t__unsafe_size=0;
  uint16_t __t2524t__unsafe_offset=0;
  uint16_t __t2524t__unsafe_align=0;
  uint64_t __t2525t=0;
  char* __t2526t__unsafe_ptr=0;
  uint64_t __t2526t__unsafe_size=0;
  uint16_t __t2526t__unsafe_offset=0;
  uint16_t __t2526t__unsafe_align=0;
  char __t2527t____t517t__=0;
  char* __t2528t__buf__unsafe_ptr=0;
  uint64_t __t2528t__buf__unsafe_size=0;
  uint16_t __t2528t__buf__unsafe_offset=0;
  uint16_t __t2528t__buf__unsafe_align=0;
  uint64_t __t2528t__pos=0;
  uint64_t __t2528t__length=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t FLOATS2__length=0;
  uint64_t __t2530t=0;
  char* __t2531t__unsafe_ptr=0;
  uint64_t __t2531t__pos=0;
  uint64_t __t2531t__length=0;
  char __t2532t____t1549t____t517t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2534t=0;
  char* __t2535t__unsafe_ptr=0;
  uint64_t __t2535t__pos=0;
  uint64_t __t2535t__length=0;
  char __t2536t____t1549t____t517t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t2537t=0;
  char* __t2538t__=0;
  double __t2539t=0;
  uint64_t __t2540t=0;
  char* __t2541t__=0;
  double __t2542t=0;
  uint64_t __t2543t=0;
  uint64_t __t2544t__from=0;
  uint64_t __t2544t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t2545t=0;
  char* __t2546t__unsafe_ptr=0;
  uint64_t __t2546t__pos=0;
  uint64_t __t2546t__length=0;
  char* __t2547t__unsafe_ptr=0;
  uint64_t __t2547t__pos=0;
  uint64_t __t2547t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t2548t=0;
  uint64_t __t2549t__=0;
  uint64_t i=0;
  double __t2550t=0;
  char* __t2551t__unsafe_ptr=0;
  uint64_t __t2551t__pos=0;
  uint64_t __t2551t__length=0;
  char* __t2552t__unsafe_ptr=0;
  uint64_t __t2552t__pos=0;
  uint64_t __t2552t__length=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__pos=0;
  uint64_t __t2553t__length=0;
  uint64_t __t2554t=0;
  char* __t2555t__=0;
  double __t2556t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1512t(&__t2519t__unsafe_ptr,&__t2519t__unsafe_size,&__t2519t__unsafe_offset,&__t2519t__unsafe_align);
  __t2520t=200;
  __t_errcode=alloc__t515t(&__t2519t__unsafe_ptr,&__t2519t__unsafe_size,&__t2519t__unsafe_offset,&__t2519t__unsafe_align,__t2520t,&__t2521t__unsafe_ptr,&__t2521t__unsafe_size,&__t2521t__unsafe_offset,&__t2521t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1536t(&__t2521t__unsafe_ptr,&__t2521t__unsafe_size,&__t2521t__unsafe_offset,&__t2521t__unsafe_align,&__t2523t__buf__unsafe_ptr,&__t2523t__buf__unsafe_size,&__t2523t__buf__unsafe_offset,&__t2523t__buf__unsafe_align,&__t2523t__pos,&__t2523t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1512t(&__t2524t__unsafe_ptr,&__t2524t__unsafe_size,&__t2524t__unsafe_offset,&__t2524t__unsafe_align);
  __t2525t=200;
  __t_errcode=alloc__t515t(&__t2524t__unsafe_ptr,&__t2524t__unsafe_size,&__t2524t__unsafe_offset,&__t2524t__unsafe_align,__t2525t,&__t2526t__unsafe_ptr,&__t2526t__unsafe_size,&__t2526t__unsafe_offset,&__t2526t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1536t(&__t2526t__unsafe_ptr,&__t2526t__unsafe_size,&__t2526t__unsafe_offset,&__t2526t__unsafe_align,&__t2528t__buf__unsafe_ptr,&__t2528t__buf__unsafe_size,&__t2528t__buf__unsafe_offset,&__t2528t__buf__unsafe_align,&__t2528t__pos,&__t2528t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t630t();
  __t2530t=10;
  __t_errcode=vec__t1546t(__t2530t,&__t2531t__unsafe_ptr,&__t2531t__pos,&__t2531t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2531t__unsafe_ptr;
  v1__pos=__t2531t__pos;
  v1__length=__t2531t__length;
  new__t630t();
  __t2534t=10;
  __t_errcode=vec__t1546t(__t2534t,&__t2535t__unsafe_ptr,&__t2535t__pos,&__t2535t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2535t__unsafe_ptr;
  v2__pos=__t2535t__pos;
  v2__length=__t2535t__length;
  __t2537t=0;
  __t_errcode=mutget__t1601t(&v1__unsafe_ptr,v1__pos,v1__length,__t2537t,&__t2538t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2539t=1.0;
  if(!__t2538t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2538t__,&__t2539t,8);
  __t2540t=0;
  __t_errcode=mutget__t1601t(&v2__unsafe_ptr,v2__pos,v2__length,__t2540t,&__t2541t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2542t=2.0;
  if(!__t2541t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2541t__,&__t2542t,8);
  __t2543t=5;
  range__t467t(__t2543t,&__t2544t__from,&__t2544t__to);
  it__from=__t2544t__from;
  it__to=__t2544t__to;
  __t2545t=10;
  __t_errcode=vec__t1584t(__t2523t__buf__unsafe_ptr,__t2523t__buf__unsafe_size,__t2523t__buf__unsafe_offset,__t2523t__buf__unsafe_align,&__t2523t__pos,__t2523t__length,__t2545t,&__t2546t__unsafe_ptr,&__t2546t__pos,&__t2546t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2547t__pos=__t2546t__pos;
  __t2547t__length=__t2546t__length;
  v__pos=__t2547t__pos;
  v__length=__t2547t__length;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2549t__);
  __t2548t=__t_complain;
  i=__t2549t__;
  __t2548t=__t2548t==0;
  if(!__t2548t){
  break;
  }
  __t2550t=2.0;
  __t_errcode=add__t1669t(__t2523t__buf__unsafe_ptr,__t2523t__buf__unsafe_size,__t2523t__buf__unsafe_offset,__t2523t__buf__unsafe_align,&__t2523t__pos,__t2523t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2523t__buf__unsafe_ptr,v__pos,v__length,&__t2551t__unsafe_ptr,&__t2551t__pos,&__t2551t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1669t(__t2523t__buf__unsafe_ptr,__t2523t__buf__unsafe_size,__t2523t__buf__unsafe_offset,__t2523t__buf__unsafe_align,&__t2523t__pos,__t2523t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2523t__buf__unsafe_ptr,__t2551t__pos,__t2551t__length,&__t2552t__unsafe_ptr,&__t2552t__pos,&__t2552t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1876t(__t2523t__buf__unsafe_ptr,__t2523t__buf__unsafe_size,__t2523t__buf__unsafe_offset,__t2523t__buf__unsafe_align,&__t2523t__pos,__t2523t__length,__t2550t,__t2523t__buf__unsafe_ptr,__t2552t__pos,__t2552t__length,&__t2553t__unsafe_ptr,&__t2553t__pos,&__t2553t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2553t__pos;
  v__length=__t2553t__length;
  }
  __t2554t=0;
  __t_errcode=get__t1607t(__t2523t__buf__unsafe_ptr,v__pos,v__length,__t2554t,&__t2555t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2555t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2556t__value,__t2555t__,8);
  print__t380t(__t2556t__value);
  
  __t_failure:exists__t442t(__t2535t__unsafe_ptr,&__t2536t____t1549t____t517t__);
  if(__t2536t____t1549t____t517t__){
  free__t508t(&__t2535t__unsafe_ptr);
  }
  exists__t442t(__t2531t__unsafe_ptr,&__t2532t____t1549t____t517t__);
  if(__t2532t____t1549t____t517t__){
  free__t508t(&__t2531t__unsafe_ptr);
  }
  exists__t442t(__t2526t__unsafe_ptr,&__t2527t____t517t__);
  if(__t2527t____t517t__){
  free__t508t(&__t2526t__unsafe_ptr);
  }
  exists__t442t(__t2521t__unsafe_ptr,&__t2522t____t517t__);
  if(__t2522t____t517t__){
  free__t508t(&__t2521t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1479t(int64_t value, const char** __t2649t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2649t=ret;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2558t() {
  char __t2560t=0;
  char __t2562t=0;
  int64_t __t2563t=0;
  int64_t error=0;
  const char* __t2564t__=0;
  int __t_complain=0;
  console__t365t();
  __t_complain=safe_main__t2518t();
  __t2560t=__t_complain;
  __t2560t=__t2560t==0;
  __t2563t=__t_complain;
  __t2562t=(__t_complain==0);
  __t_complain=0;
  error=__t2563t;
  __t2562t=__t2562t==0;
  if(__t2562t){
  cstr__t1479t(error,&__t2564t__);
  print__t375t(__t2564t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2558t();return 0;}