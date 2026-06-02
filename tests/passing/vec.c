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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1503t(char** __t2595t, uint64_t* __t2596t, uint16_t* __t2597t, uint16_t* __t2598t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2595t=unsafe_ptr;
  *__t2596t=unsafe_size;
  *__t2597t=unsafe_offset;
  *__t2598t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2599t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2599t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2600t) {
  char* allocated=*__t2600t;
  if(allocated){
  free(allocated);
  }
  *__t2600t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2601t) {
  int value=0;
  *__t2601t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2602t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2602t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2603t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2603t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2604t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2604t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2605t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2606t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2606t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2607t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2607t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2608t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2608t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2609t) {
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
  *__t2609t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2610t, uint64_t* __t2611t, uint16_t* __t2612t, uint16_t* __t2613t, uint64_t size, char** __t2614t, uint64_t* __t2615t, uint16_t* __t2616t, uint16_t* __t2617t) {
  char* buffer__unsafe_ptr=*__t2610t;
  uint64_t buffer__unsafe_size=*__t2611t;
  uint16_t buffer__unsafe_offset=*__t2612t;
  uint16_t buffer__unsafe_align=*__t2613t;
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
  *__t2610t=buffer__unsafe_ptr;
  *__t2611t=buffer__unsafe_size;
  *__t2612t=buffer__unsafe_offset;
  *__t2613t=buffer__unsafe_align;
  *__t2614t=buffer__unsafe_ptr;
  *__t2615t=buffer__unsafe_size;
  *__t2616t=buffer__unsafe_offset;
  *__t2617t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2618t) {
  goto __t_return;
  __t_return:
  *__t2618t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2619t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2619t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2620t) {
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
  *__t2620t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2621t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) void circular__t1501t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2622t, uint64_t length, char** __t2623t, uint64_t* __t2624t, uint16_t* __t2625t, uint16_t* __t2626t, uint64_t* __t2627t, uint64_t* __t2628t) {
  uint64_t pos=*__t2622t;
  goto __t_return;
  __t_return:
  *__t2622t=pos;
  *__t2623t=buf__unsafe_ptr;
  *__t2624t=buf__unsafe_size;
  *__t2625t=buf__unsafe_offset;
  *__t2626t=buf__unsafe_align;
  *__t2627t=pos;
  *__t2628t=length;
}

static inline __attribute__((always_inline)) int circular__t1527t(char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t, char** __t2633t, uint64_t* __t2634t, uint16_t* __t2635t, uint16_t* __t2636t, uint64_t* __t2637t, uint64_t* __t2638t) {
  char* buf__unsafe_ptr=*__t2629t;
  uint64_t buf__unsafe_size=*__t2630t;
  uint16_t buf__unsafe_offset=*__t2631t;
  uint16_t buf__unsafe_align=*__t2632t;
  int __t1528t=0;
  int __t1529t=0;
  uint64_t __t1530t=0;
  uint64_t __t1531t=0;
  uint64_t pos=0;
  int __t1532t=0;
  uint64_t __t1533t__=0;
  uint64_t __t1534t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1535t__=0;
  char* __t1536t__buf__unsafe_ptr=0;
  uint64_t __t1536t__buf__unsafe_size=0;
  uint16_t __t1536t__buf__unsafe_offset=0;
  uint16_t __t1536t__buf__unsafe_align=0;
  uint64_t __t1536t__pos=0;
  uint64_t __t1536t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1530t=0;
  __t1531t=__t1530t;
  pos=__t1531t;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1533t__);
  __t_errcode=sub__t351t(__t1533t__,pos,&__t1534t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1534t__;
  start=pos;
  add__t174t(pos,length,&__t1535t__);
  pos=__t1535t__;
  circular__t1501t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1536t__buf__unsafe_ptr,&__t1536t__buf__unsafe_size,&__t1536t__buf__unsafe_offset,&__t1536t__buf__unsafe_align,&__t1536t__pos,&__t1536t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2629t=buf__unsafe_ptr;
  *__t2630t=buf__unsafe_size;
  *__t2631t=buf__unsafe_offset;
  *__t2632t=buf__unsafe_align;
  *__t2633t=__t1536t__buf__unsafe_ptr;
  *__t2634t=__t1536t__buf__unsafe_size;
  *__t2635t=__t1536t__buf__unsafe_offset;
  *__t2636t=__t1536t__buf__unsafe_align;
  *__t2637t=__t1536t__pos;
  *__t2638t=__t1536t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1497t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1491t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2639t, uint64_t* __t2640t, uint64_t* __t2641t) {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__pos=0;
  uint64_t __t1493t__length=0;
  __t1493t__unsafe_ptr=unsafe_ptr;
  __t1493t__pos=pos;
  __t1493t__length=length;
  goto __t_return;
  __t_return:
  *__t2639t=__t1493t__unsafe_ptr;
  *__t2640t=__t1493t__pos;
  *__t2641t=__t1493t__length;
}

int vec__t1537t(uint64_t length, char** __t2642t, uint64_t* __t2643t, uint64_t* __t2644t) {
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
  *__t2642t=__t1542t__unsafe_ptr;
  *__t2643t=__t1542t__pos;
  *__t2644t=__t1542t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2645t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2645t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2646t) {
  *__t2646t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2647t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2647t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t1592t(char** __t2648t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2649t) {
  char* v__unsafe_ptr=*__t2648t;
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
  *__t2648t=v__unsafe_ptr;
  *__t2649t=__t1597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2650t, uint64_t* __t2651t) {
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
  *__t2650t=from;
  *__t2651t=to;
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

static inline __attribute__((always_inline)) int vec__t1575t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2653t, uint64_t allocator__length, uint64_t length, char** __t2654t, uint64_t* __t2655t, uint64_t* __t2656t) {
  uint64_t allocator__pos=*__t2653t;
  uint64_t __t1576t__=0;
  uint64_t __t1577t=0;
  char __t1578t__=0;
  uint64_t __t1579t__=0;
  uint64_t __t1580t=0;
  char __t1581t__=0;
  uint64_t __t1582t__=0;
  char __t1583t__=0;
  uint64_t __t1584t=0;
  uint64_t start=0;
  uint64_t __t1585t__=0;
  char __t1586t__=0;
  uint64_t __t1587t=0;
  uint64_t __t1588t__=0;
  uint64_t __t1589t=0;
  char* __t1590t__unsafe_ptr=0;
  uint64_t __t1590t__pos=0;
  uint64_t __t1590t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t512t(allocator__buf__unsafe_align,&__t1576t__);
  __t1577t=8;
  neq__t143t(__t1576t__,__t1577t,&__t1578t__);
  if(__t1578t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t512t(allocator__buf__unsafe_offset,&__t1579t__);
  __t1580t=0;
  neq__t143t(__t1579t__,__t1580t,&__t1581t__);
  if(__t1581t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t604t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1582t__);
  gt__t275t(length,__t1582t__,&__t1583t__);
  if(__t1583t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1584t=allocator__pos;
  start=__t1584t;
  add__t174t(allocator__pos,length,&__t1585t__);
  allocator__pos=__t1585t__;
  ge__t323t(allocator__pos,allocator__length,&__t1586t__);
  if(__t1586t__){
  __t1587t=0;
  add__t174t(length,__t1587t,&__t1588t__);
  allocator__pos=__t1588t__;
  __t1589t=0;
  start=__t1589t;
  }
  vec__t1491t(allocator__buf__unsafe_ptr,start,length,&__t1590t__unsafe_ptr,&__t1590t__pos,&__t1590t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2653t=allocator__pos;
  *__t2654t=__t1590t__unsafe_ptr;
  *__t2655t=__t1590t__pos;
  *__t2656t=__t1590t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2657t, uint64_t r__to, uint64_t* __t2658t) {
  uint64_t r__from=*__t2657t;
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
  *__t2657t=r__from;
  *__t2658t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t483t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t2659t) {
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
  *__t2659t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1598t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2660t) {
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
  *__t2660t=__t1603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1605t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2661t) {
  char* __t1606t__=0;
  double __t1607t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1598t(v__unsafe_ptr,v__pos,v__length,i,&__t1606t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1606t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1607t__number,__t1606t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2661t=__t1607t__number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2662t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2662t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t2663t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2663t=z;
}

int add__t1660t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2664t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2665t, uint64_t* __t2666t, uint64_t* __t2667t) {
  uint64_t allocator__pos=*__t2664t;
  int __t1661t=0;
  char __t1662t__=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__pos=0;
  uint64_t __t1663t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t1664t=0;
  uint64_t __t1665t__from=0;
  uint64_t __t1665t__to=0;
  char __t1666t=0;
  uint64_t __t1667t__=0;
  uint64_t i=0;
  char* __t1668t__=0;
  char* __t1669t__=0;
  double __t1670t__number=0;
  double __t1671t__=0;
  double __t1672t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v1__length,v2__length,&__t1662t__);
  if(__t1662t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1575t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1663t__unsafe_ptr,&__t1663t__pos,&__t1663t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1663t__unsafe_ptr;
  v__pos=__t1663t__pos;
  v__length=__t1663t__length;
  p1=v1__unsafe_ptr;
  range__t467t(v1__length,&__t1665t__from,&__t1665t__to);
  __t1664t=0;
  while(1){
  __t_complain=get__t483t(__t1665t__from,__t1665t__to,__t1664t,&__t1667t__);
  __t1666t=__t_complain;
  i=__t1667t__;
  __t1666t=__t1666t==0;
  __t1664t=__t1664t+1;
  if(!__t1666t){
  break;
  }
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,i,&__t1668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1598t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1670t__number,__t1669t__,8);
  __t_errcode=at__t1605t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t152t(__t1670t__number,__t1671t__,&__t1672t__);
  if(!__t1668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1668t__,&__t1672t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2664t=allocator__pos;
  *__t2665t=v__unsafe_ptr;
  *__t2666t=v__pos;
  *__t2667t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1604t(double number, uint64_t i, double* __t2668t) {
  goto __t_return;
  __t_return:
  *__t2668t=number;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t2669t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2669t=z;
}

static inline __attribute__((always_inline)) int mul__t1851t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2670t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2671t, uint64_t* __t2672t, uint64_t* __t2673t) {
  uint64_t allocator__pos=*__t2670t;
  int __t1852t=0;
  char* __t1853t__unsafe_ptr=0;
  uint64_t __t1853t__pos=0;
  uint64_t __t1853t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1854t__from=0;
  uint64_t __t1854t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1855t=0;
  uint64_t __t1856t__=0;
  uint64_t i=0;
  char* __t1857t__=0;
  char* __t1858t__=0;
  double __t1859t__number=0;
  double __t1860t__=0;
  double __t1861t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1575t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1853t__unsafe_ptr,&__t1853t__pos,&__t1853t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1853t__unsafe_ptr;
  v__pos=__t1853t__pos;
  v__length=__t1853t__length;
  range__t467t(v1__length,&__t1854t__from,&__t1854t__to);
  it__from=__t1854t__from;
  it__to=__t1854t__to;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t1856t__);
  __t1855t=__t_complain;
  i=__t1856t__;
  __t1855t=__t1855t==0;
  if(!__t1855t){
  break;
  }
  __t_errcode=mutget__t1592t(&v__unsafe_ptr,v__pos,v__length,i,&__t1857t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1598t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1858t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1859t__number,__t1858t__,8);
  at__t1604t(v2,i,&__t1860t__);
  mul__t176t(__t1859t__number,__t1860t__,&__t1861t__);
  if(!__t1857t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1857t__,&__t1861t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2670t=allocator__pos;
  *__t2671t=v__unsafe_ptr;
  *__t2672t=v__pos;
  *__t2673t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1867t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2674t, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2675t, uint64_t* __t2676t, uint64_t* __t2677t) {
  uint64_t allocator__pos=*__t2674t;
  char* __t1868t__unsafe_ptr=0;
  uint64_t __t1868t__pos=0;
  uint64_t __t1868t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1851t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1868t__unsafe_ptr,&__t1868t__pos,&__t1868t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2674t=allocator__pos;
  *__t2675t=__t1868t__unsafe_ptr;
  *__t2676t=__t1868t__pos;
  *__t2677t=__t1868t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t2547t() {
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
  char* __t2552t__buf__unsafe_ptr=0;
  uint64_t __t2552t__buf__unsafe_size=0;
  uint16_t __t2552t__buf__unsafe_offset=0;
  uint16_t __t2552t__buf__unsafe_align=0;
  uint64_t __t2552t__pos=0;
  uint64_t __t2552t__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__unsafe_size=0;
  uint16_t __t2553t__unsafe_offset=0;
  uint16_t __t2553t__unsafe_align=0;
  uint64_t __t2554t=0;
  char* __t2555t__unsafe_ptr=0;
  uint64_t __t2555t__unsafe_size=0;
  uint16_t __t2555t__unsafe_offset=0;
  uint16_t __t2555t__unsafe_align=0;
  char __t2556t____t517t__=0;
  char* __t2557t__buf__unsafe_ptr=0;
  uint64_t __t2557t__buf__unsafe_size=0;
  uint16_t __t2557t__buf__unsafe_offset=0;
  uint16_t __t2557t__buf__unsafe_align=0;
  uint64_t __t2557t__pos=0;
  uint64_t __t2557t__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __t2559t=0;
  char* __t2560t__unsafe_ptr=0;
  uint64_t __t2560t__pos=0;
  uint64_t __t2560t__length=0;
  char __t2561t____t1540t____t517t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2563t=0;
  char* __t2564t__unsafe_ptr=0;
  uint64_t __t2564t__pos=0;
  uint64_t __t2564t__length=0;
  char __t2565t____t1540t____t517t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t2566t=0;
  char* __t2567t__=0;
  double __t2568t=0;
  uint64_t __t2569t=0;
  char* __t2570t__=0;
  double __t2571t=0;
  uint64_t __t2572t=0;
  uint64_t __t2573t__from=0;
  uint64_t __t2573t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t2574t=0;
  char* __t2575t__unsafe_ptr=0;
  uint64_t __t2575t__pos=0;
  uint64_t __t2575t__length=0;
  char* __t2576t__unsafe_ptr=0;
  uint64_t __t2576t__pos=0;
  uint64_t __t2576t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t2577t=0;
  uint64_t __t2578t__=0;
  uint64_t i=0;
  double __t2579t=0;
  char* __t2580t__unsafe_ptr=0;
  uint64_t __t2580t__pos=0;
  uint64_t __t2580t__length=0;
  char* __t2581t__unsafe_ptr=0;
  uint64_t __t2581t__pos=0;
  uint64_t __t2581t__length=0;
  char* __t2582t__unsafe_ptr=0;
  uint64_t __t2582t__pos=0;
  uint64_t __t2582t__length=0;
  uint64_t __t2583t=0;
  char* __t2584t__=0;
  double __t2585t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1503t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align);
  __t2549t=200;
  __t_errcode=alloc__t515t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,__t2549t,&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1527t(&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align,&__t2552t__buf__unsafe_ptr,&__t2552t__buf__unsafe_size,&__t2552t__buf__unsafe_offset,&__t2552t__buf__unsafe_align,&__t2552t__pos,&__t2552t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1503t(&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align);
  __t2554t=200;
  __t_errcode=alloc__t515t(&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align,__t2554t,&__t2555t__unsafe_ptr,&__t2555t__unsafe_size,&__t2555t__unsafe_offset,&__t2555t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1527t(&__t2555t__unsafe_ptr,&__t2555t__unsafe_size,&__t2555t__unsafe_offset,&__t2555t__unsafe_align,&__t2557t__buf__unsafe_ptr,&__t2557t__buf__unsafe_size,&__t2557t__buf__unsafe_offset,&__t2557t__buf__unsafe_align,&__t2557t__pos,&__t2557t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t1497t();
  __t2559t=10;
  __t_errcode=vec__t1537t(__t2559t,&__t2560t__unsafe_ptr,&__t2560t__pos,&__t2560t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2560t__unsafe_ptr;
  v1__pos=__t2560t__pos;
  v1__length=__t2560t__length;
  new__t1497t();
  __t2563t=10;
  __t_errcode=vec__t1537t(__t2563t,&__t2564t__unsafe_ptr,&__t2564t__pos,&__t2564t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2564t__unsafe_ptr;
  v2__pos=__t2564t__pos;
  v2__length=__t2564t__length;
  __t2566t=0;
  __t_errcode=mutget__t1592t(&v1__unsafe_ptr,v1__pos,v1__length,__t2566t,&__t2567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2568t=1.0;
  if(!__t2567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2567t__,&__t2568t,8);
  __t2569t=0;
  __t_errcode=mutget__t1592t(&v2__unsafe_ptr,v2__pos,v2__length,__t2569t,&__t2570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2571t=2.0;
  if(!__t2570t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2570t__,&__t2571t,8);
  __t2572t=5;
  range__t467t(__t2572t,&__t2573t__from,&__t2573t__to);
  it__from=__t2573t__from;
  it__to=__t2573t__to;
  __t2574t=10;
  __t_errcode=vec__t1575t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,__t2574t,&__t2575t__unsafe_ptr,&__t2575t__pos,&__t2575t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2576t__pos=__t2575t__pos;
  __t2576t__length=__t2575t__length;
  v__pos=__t2576t__pos;
  v__length=__t2576t__length;
  while(1){
  __t_complain=next__t476t(&it__from,it__to,&__t2578t__);
  __t2577t=__t_complain;
  i=__t2578t__;
  __t2577t=__t2577t==0;
  if(!__t2577t){
  break;
  }
  __t2579t=2.0;
  __t_errcode=add__t1660t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2552t__buf__unsafe_ptr,v__pos,v__length,&__t2580t__unsafe_ptr,&__t2580t__pos,&__t2580t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1660t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2552t__buf__unsafe_ptr,__t2580t__pos,__t2580t__length,&__t2581t__unsafe_ptr,&__t2581t__pos,&__t2581t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1867t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,__t2579t,__t2552t__buf__unsafe_ptr,__t2581t__pos,__t2581t__length,&__t2582t__unsafe_ptr,&__t2582t__pos,&__t2582t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2582t__pos;
  v__length=__t2582t__length;
  }
  __t2583t=0;
  __t_errcode=get__t1598t(__t2552t__buf__unsafe_ptr,v__pos,v__length,__t2583t,&__t2584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2584t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2585t__number,__t2584t__,8);
  print__t380t(__t2585t__number);
  
  __t_failure:exists__t442t(__t2564t__unsafe_ptr,&__t2565t____t1540t____t517t__);
  if(__t2565t____t1540t____t517t__){
  free__t508t(&__t2564t__unsafe_ptr);
  }
  exists__t442t(__t2560t__unsafe_ptr,&__t2561t____t1540t____t517t__);
  if(__t2561t____t1540t____t517t__){
  free__t508t(&__t2560t__unsafe_ptr);
  }
  exists__t442t(__t2555t__unsafe_ptr,&__t2556t____t517t__);
  if(__t2556t____t517t__){
  free__t508t(&__t2555t__unsafe_ptr);
  }
  exists__t442t(__t2550t__unsafe_ptr,&__t2551t____t517t__);
  if(__t2551t____t517t__){
  free__t508t(&__t2550t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1466t(int64_t value, const char** __t2678t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2678t=ret;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2587t() {
  char __t2589t=0;
  char __t2591t=0;
  int64_t __t2592t=0;
  int64_t error=0;
  const char* __t2593t__=0;
  int __t_complain=0;
  console__t365t();
  __t_complain=safe_main__t2547t();
  __t2589t=__t_complain;
  __t2589t=__t2589t==0;
  __t2592t=__t_complain;
  __t2591t=(__t_complain==0);
  __t_complain=0;
  error=__t2592t;
  __t2591t=__t2591t==0;
  if(__t2591t){
  cstr__t1466t(error,&__t2593t__);
  print__t375t(__t2593t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2587t();return 0;}