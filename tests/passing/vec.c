#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1541t(char** __t2595t, uint64_t* __t2596t, uint16_t* __t2597t, uint16_t* __t2598t) {
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

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2599t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2599t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2600t) {
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

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2602t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2602t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2603t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2603t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2604t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2604t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2605t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2606t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2606t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2607t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2607t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2608t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2608t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2609t) {
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
  *__t2609t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2610t, uint64_t* __t2611t, uint16_t* __t2612t, uint16_t* __t2613t, uint64_t size, char** __t2614t, uint64_t* __t2615t, uint16_t* __t2616t, uint16_t* __t2617t) {
  char* buffer__unsafe_ptr=*__t2610t;
  uint64_t buffer__unsafe_size=*__t2611t;
  uint16_t buffer__unsafe_offset=*__t2612t;
  uint16_t buffer__unsafe_align=*__t2613t;
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

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2618t) {
  goto __t_return;
  __t_return:
  *__t2618t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2619t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2619t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2620t) {
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
  *__t2620t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2621t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) void circular__t638t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2622t, uint64_t length, char** __t2623t, uint64_t* __t2624t, uint16_t* __t2625t, uint16_t* __t2626t, uint64_t* __t2627t, uint64_t* __t2628t) {
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

static inline __attribute__((always_inline)) int circular__t1565t(char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t, char** __t2633t, uint64_t* __t2634t, uint16_t* __t2635t, uint16_t* __t2636t, uint64_t* __t2637t, uint64_t* __t2638t) {
  char* buf__unsafe_ptr=*__t2629t;
  uint64_t buf__unsafe_size=*__t2630t;
  uint16_t buf__unsafe_offset=*__t2631t;
  uint16_t buf__unsafe_align=*__t2632t;
  int __t1566t=0;
  int __t1567t=0;
  uint64_t __t1568t=0;
  uint64_t __t1569t=0;
  uint64_t pos=0;
  int __t1570t=0;
  uint64_t __t1571t__=0;
  uint64_t __t1572t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1573t__=0;
  char* __t1574t__buf__unsafe_ptr=0;
  uint64_t __t1574t__buf__unsafe_size=0;
  uint16_t __t1574t__buf__unsafe_offset=0;
  uint16_t __t1574t__buf__unsafe_align=0;
  uint64_t __t1574t__pos=0;
  uint64_t __t1574t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1568t=0;
  __t1569t=__t1568t;
  pos=__t1569t;
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1571t__);
  __t_errcode=sub__t352t(__t1571t__,pos,&__t1572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1572t__;
  start=pos;
  add__t175t(pos,length,&__t1573t__);
  pos=__t1573t__;
  circular__t638t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1574t__buf__unsafe_ptr,&__t1574t__buf__unsafe_size,&__t1574t__buf__unsafe_offset,&__t1574t__buf__unsafe_align,&__t1574t__pos,&__t1574t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2629t=buf__unsafe_ptr;
  *__t2630t=buf__unsafe_size;
  *__t2631t=buf__unsafe_offset;
  *__t2632t=buf__unsafe_align;
  *__t2633t=__t1574t__buf__unsafe_ptr;
  *__t2634t=__t1574t__buf__unsafe_size;
  *__t2635t=__t1574t__buf__unsafe_offset;
  *__t2636t=__t1574t__buf__unsafe_align;
  *__t2637t=__t1574t__pos;
  *__t2638t=__t1574t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t631t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1533t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2639t, uint64_t* __t2640t, uint64_t* __t2641t) {
  char* __t1535t__unsafe_ptr=0;
  uint64_t __t1535t__pos=0;
  uint64_t __t1535t__length=0;
  __t1535t__unsafe_ptr=unsafe_ptr;
  __t1535t__pos=pos;
  __t1535t__length=length;
  goto __t_return;
  __t_return:
  *__t2639t=__t1535t__unsafe_ptr;
  *__t2640t=__t1535t__pos;
  *__t2641t=__t1535t__length;
}

int vec__t1575t(uint64_t length, char** __t2642t, uint64_t* __t2643t, uint64_t* __t2644t) {
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
  *__t2642t=__t1580t__unsafe_ptr;
  *__t2643t=__t1580t__pos;
  *__t2644t=__t1580t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2645t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2645t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2646t) {
  *__t2646t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2647t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2647t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t1630t(char** __t2648t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2649t) {
  char* v__unsafe_ptr=*__t2648t;
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
  *__t2648t=v__unsafe_ptr;
  *__t2649t=__t1635t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t2650t, uint64_t* __t2651t) {
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
  *__t2650t=from;
  *__t2651t=to;
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

static inline __attribute__((always_inline)) int vec__t1613t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2653t, uint64_t FLOATS__length, uint64_t length, char** __t2654t, uint64_t* __t2655t, uint64_t* __t2656t) {
  uint64_t FLOATS__pos=*__t2653t;
  uint64_t __t1614t__=0;
  uint64_t __t1615t=0;
  char __t1616t__=0;
  uint64_t __t1617t__=0;
  uint64_t __t1618t=0;
  char __t1619t__=0;
  uint64_t __t1620t__=0;
  char __t1621t__=0;
  uint64_t __t1622t=0;
  uint64_t start=0;
  uint64_t __t1623t__=0;
  char __t1624t__=0;
  uint64_t __t1625t=0;
  uint64_t __t1626t__=0;
  uint64_t __t1627t=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__pos=0;
  uint64_t __t1628t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(FLOATS__buf__unsafe_align,&__t1614t__);
  __t1615t=8;
  neq__t144t(__t1614t__,__t1615t,&__t1616t__);
  if(__t1616t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t513t(FLOATS__buf__unsafe_offset,&__t1617t__);
  __t1618t=0;
  neq__t144t(__t1617t__,__t1618t,&__t1619t__);
  if(__t1619t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t605t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1620t__);
  gt__t276t(length,__t1620t__,&__t1621t__);
  if(__t1621t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1622t=FLOATS__pos;
  start=__t1622t;
  add__t175t(FLOATS__pos,length,&__t1623t__);
  FLOATS__pos=__t1623t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1624t__);
  if(__t1624t__){
  __t1625t=0;
  add__t175t(length,__t1625t,&__t1626t__);
  FLOATS__pos=__t1626t__;
  __t1627t=0;
  start=__t1627t;
  }
  vec__t1533t(FLOATS__buf__unsafe_ptr,start,length,&__t1628t__unsafe_ptr,&__t1628t__pos,&__t1628t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2653t=FLOATS__pos;
  *__t2654t=__t1628t__unsafe_ptr;
  *__t2655t=__t1628t__pos;
  *__t2656t=__t1628t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t2657t, uint64_t r__to, uint64_t* __t2658t) {
  uint64_t r__from=*__t2657t;
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
  *__t2657t=r__from;
  *__t2658t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t484t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t2659t) {
  char __t485t__=0;
  char __t486t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t485t__);
  if(__t485t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t486t__);
  if(__t486t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2659t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1636t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2660t) {
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
  *__t2660t=__t1641t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1643t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2661t) {
  char* __t1644t__=0;
  double __t1645t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1636t(v__unsafe_ptr,v__pos,v__length,i,&__t1644t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1644t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1645t__number,__t1644t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2661t=__t1645t__number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2662t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2662t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2663t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2663t=z;
}

int add__t1698t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2664t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2665t, uint64_t* __t2666t, uint64_t* __t2667t) {
  uint64_t FLOATS__pos=*__t2664t;
  int __t1699t=0;
  char __t1700t__=0;
  char* __t1701t__unsafe_ptr=0;
  uint64_t __t1701t__pos=0;
  uint64_t __t1701t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t1702t=0;
  uint64_t __t1703t__from=0;
  uint64_t __t1703t__to=0;
  char __t1704t=0;
  uint64_t __t1705t__=0;
  uint64_t i=0;
  char* __t1706t__=0;
  char* __t1707t__=0;
  double __t1708t__number=0;
  double __t1709t__=0;
  double __t1710t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1700t__);
  if(__t1700t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1613t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1701t__unsafe_ptr,&__t1701t__pos,&__t1701t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1701t__unsafe_ptr;
  v__pos=__t1701t__pos;
  v__length=__t1701t__length;
  p1=v1__unsafe_ptr;
  range__t468t(v1__length,&__t1703t__from,&__t1703t__to);
  __t1702t=0;
  while(1){
  __t_complain=get__t484t(__t1703t__from,__t1703t__to,__t1702t,&__t1705t__);
  __t1704t=__t_complain;
  i=__t1705t__;
  __t1704t=__t1704t==0;
  __t1702t=__t1702t+1;
  if(!__t1704t){
  break;
  }
  __t_errcode=mutget__t1630t(&v__unsafe_ptr,v__pos,v__length,i,&__t1706t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1636t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1707t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1708t__number,__t1707t__,8);
  __t_errcode=at__t1643t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1709t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1708t__number,__t1709t__,&__t1710t__);
  if(!__t1706t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1706t__,&__t1710t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2664t=FLOATS__pos;
  *__t2665t=v__unsafe_ptr;
  *__t2666t=v__pos;
  *__t2667t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1642t(double number, uint64_t i, double* __t2668t) {
  goto __t_return;
  __t_return:
  *__t2668t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t2669t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2669t=z;
}

static inline __attribute__((always_inline)) int mul__t1889t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2670t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2671t, uint64_t* __t2672t, uint64_t* __t2673t) {
  uint64_t FLOATS__pos=*__t2670t;
  int __t1890t=0;
  char* __t1891t__unsafe_ptr=0;
  uint64_t __t1891t__pos=0;
  uint64_t __t1891t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1892t__from=0;
  uint64_t __t1892t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1893t=0;
  uint64_t __t1894t__=0;
  uint64_t i=0;
  char* __t1895t__=0;
  char* __t1896t__=0;
  double __t1897t__number=0;
  double __t1898t__=0;
  double __t1899t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1613t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1891t__unsafe_ptr,&__t1891t__pos,&__t1891t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1891t__unsafe_ptr;
  v__pos=__t1891t__pos;
  v__length=__t1891t__length;
  range__t468t(v1__length,&__t1892t__from,&__t1892t__to);
  it__from=__t1892t__from;
  it__to=__t1892t__to;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t1894t__);
  __t1893t=__t_complain;
  i=__t1894t__;
  __t1893t=__t1893t==0;
  if(!__t1893t){
  break;
  }
  __t_errcode=mutget__t1630t(&v__unsafe_ptr,v__pos,v__length,i,&__t1895t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1636t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1896t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1896t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1897t__number,__t1896t__,8);
  at__t1642t(v2,i,&__t1898t__);
  mul__t177t(__t1897t__number,__t1898t__,&__t1899t__);
  if(!__t1895t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1895t__,&__t1899t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2670t=FLOATS__pos;
  *__t2671t=v__unsafe_ptr;
  *__t2672t=v__pos;
  *__t2673t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1905t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t2674t, uint64_t FLOATS__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2675t, uint64_t* __t2676t, uint64_t* __t2677t) {
  uint64_t FLOATS__pos=*__t2674t;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__pos=0;
  uint64_t __t1906t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1889t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1906t__unsafe_ptr,&__t1906t__pos,&__t1906t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2674t=FLOATS__pos;
  *__t2675t=__t1906t__unsafe_ptr;
  *__t2676t=__t1906t__pos;
  *__t2677t=__t1906t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
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
  char __t2551t____t518t__=0;
  char* __t2552t__buf__unsafe_ptr=0;
  uint64_t __t2552t__buf__unsafe_size=0;
  uint16_t __t2552t__buf__unsafe_offset=0;
  uint16_t __t2552t__buf__unsafe_align=0;
  uint64_t __t2552t__pos=0;
  uint64_t __t2552t__length=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  uint64_t FLOATS__length=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__unsafe_size=0;
  uint16_t __t2553t__unsafe_offset=0;
  uint16_t __t2553t__unsafe_align=0;
  uint64_t __t2554t=0;
  char* __t2555t__unsafe_ptr=0;
  uint64_t __t2555t__unsafe_size=0;
  uint16_t __t2555t__unsafe_offset=0;
  uint16_t __t2555t__unsafe_align=0;
  char __t2556t____t518t__=0;
  char* __t2557t__buf__unsafe_ptr=0;
  uint64_t __t2557t__buf__unsafe_size=0;
  uint16_t __t2557t__buf__unsafe_offset=0;
  uint16_t __t2557t__buf__unsafe_align=0;
  uint64_t __t2557t__pos=0;
  uint64_t __t2557t__length=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t FLOATS2__length=0;
  uint64_t __t2559t=0;
  char* __t2560t__unsafe_ptr=0;
  uint64_t __t2560t__pos=0;
  uint64_t __t2560t__length=0;
  char __t2561t____t1578t____t518t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2563t=0;
  char* __t2564t__unsafe_ptr=0;
  uint64_t __t2564t__pos=0;
  uint64_t __t2564t__length=0;
  char __t2565t____t1578t____t518t__=0;
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
  float____t_buffer____buffer__t1541t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align);
  __t2549t=200;
  __t_errcode=alloc__t516t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,__t2549t,&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1565t(&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align,&__t2552t__buf__unsafe_ptr,&__t2552t__buf__unsafe_size,&__t2552t__buf__unsafe_offset,&__t2552t__buf__unsafe_align,&__t2552t__pos,&__t2552t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1541t(&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align);
  __t2554t=200;
  __t_errcode=alloc__t516t(&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align,__t2554t,&__t2555t__unsafe_ptr,&__t2555t__unsafe_size,&__t2555t__unsafe_offset,&__t2555t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1565t(&__t2555t__unsafe_ptr,&__t2555t__unsafe_size,&__t2555t__unsafe_offset,&__t2555t__unsafe_align,&__t2557t__buf__unsafe_ptr,&__t2557t__buf__unsafe_size,&__t2557t__buf__unsafe_offset,&__t2557t__buf__unsafe_align,&__t2557t__pos,&__t2557t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t631t();
  __t2559t=10;
  __t_errcode=vec__t1575t(__t2559t,&__t2560t__unsafe_ptr,&__t2560t__pos,&__t2560t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2560t__unsafe_ptr;
  v1__pos=__t2560t__pos;
  v1__length=__t2560t__length;
  new__t631t();
  __t2563t=10;
  __t_errcode=vec__t1575t(__t2563t,&__t2564t__unsafe_ptr,&__t2564t__pos,&__t2564t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2564t__unsafe_ptr;
  v2__pos=__t2564t__pos;
  v2__length=__t2564t__length;
  __t2566t=0;
  __t_errcode=mutget__t1630t(&v1__unsafe_ptr,v1__pos,v1__length,__t2566t,&__t2567t__);
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
  __t_errcode=mutget__t1630t(&v2__unsafe_ptr,v2__pos,v2__length,__t2569t,&__t2570t__);
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
  range__t468t(__t2572t,&__t2573t__from,&__t2573t__to);
  it__from=__t2573t__from;
  it__to=__t2573t__to;
  __t2574t=10;
  __t_errcode=vec__t1613t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,__t2574t,&__t2575t__unsafe_ptr,&__t2575t__pos,&__t2575t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2576t__pos=__t2575t__pos;
  __t2576t__length=__t2575t__length;
  v__pos=__t2576t__pos;
  v__length=__t2576t__length;
  while(1){
  __t_complain=next__t477t(&it__from,it__to,&__t2578t__);
  __t2577t=__t_complain;
  i=__t2578t__;
  __t2577t=__t2577t==0;
  if(!__t2577t){
  break;
  }
  __t2579t=2.0;
  __t_errcode=add__t1698t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2552t__buf__unsafe_ptr,v__pos,v__length,&__t2580t__unsafe_ptr,&__t2580t__pos,&__t2580t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1698t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2552t__buf__unsafe_ptr,__t2580t__pos,__t2580t__length,&__t2581t__unsafe_ptr,&__t2581t__pos,&__t2581t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1905t(__t2552t__buf__unsafe_ptr,__t2552t__buf__unsafe_size,__t2552t__buf__unsafe_offset,__t2552t__buf__unsafe_align,&__t2552t__pos,__t2552t__length,__t2579t,__t2552t__buf__unsafe_ptr,__t2581t__pos,__t2581t__length,&__t2582t__unsafe_ptr,&__t2582t__pos,&__t2582t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2582t__pos;
  v__length=__t2582t__length;
  }
  __t2583t=0;
  __t_errcode=get__t1636t(__t2552t__buf__unsafe_ptr,v__pos,v__length,__t2583t,&__t2584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2584t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2585t__number,__t2584t__,8);
  print__t381t(__t2585t__number);
  
  __t_failure:exists__t443t(__t2564t__unsafe_ptr,&__t2565t____t1578t____t518t__);
  if(__t2565t____t1578t____t518t__){
  free__t509t(&__t2564t__unsafe_ptr);
  }
  exists__t443t(__t2560t__unsafe_ptr,&__t2561t____t1578t____t518t__);
  if(__t2561t____t1578t____t518t__){
  free__t509t(&__t2560t__unsafe_ptr);
  }
  exists__t443t(__t2555t__unsafe_ptr,&__t2556t____t518t__);
  if(__t2556t____t518t__){
  free__t509t(&__t2555t__unsafe_ptr);
  }
  exists__t443t(__t2550t__unsafe_ptr,&__t2551t____t518t__);
  if(__t2551t____t518t__){
  free__t509t(&__t2550t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1508t(int64_t value, const char** __t2678t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2678t=ret;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2587t() {
  char __t2589t=0;
  char __t2591t=0;
  int64_t __t2592t=0;
  int64_t error=0;
  const char* __t2593t__=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=safe_main__t2547t();
  __t2589t=__t_complain;
  __t2589t=__t2589t==0;
  __t2592t=__t_complain;
  __t2591t=(__t_complain==0);
  __t_complain=0;
  error=__t2592t;
  __t2591t=__t2591t==0;
  if(__t2591t){
  cstr__t1508t(error,&__t2593t__);
  print__t376t(__t2593t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2587t();return 0;}