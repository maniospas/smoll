#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2556t="it's a me, manio.";
const char* const __t2549t="hello";
const char* const __t2551t="hello world!";
const char* const __t2554t="manio";
const char* const __t382t="\n";
static const char* __t_all_errcodes[37] = {"noerr",
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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2565t(char** __t2587t, uint64_t* __t2588t, uint16_t* __t2589t, uint16_t* __t2590t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2587t=unsafe_ptr;
  *__t2588t=unsafe_size;
  *__t2589t=unsafe_offset;
  *__t2590t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2591t) {
  int value=0;
  *__t2591t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2592t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2592t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2593t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2593t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2594t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2594t=z;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t2595t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t2595t=__t641t__;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2596t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2596t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2597t) {
  char* allocated=*__t2597t;
  if(allocated){
  free(allocated);
  }
  *__t2597t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2598t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2598t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2599t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2599t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2600t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2600t=value;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2601t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2601t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2602t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2602t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2603t, uint64_t* __t2604t, uint16_t* __t2605t, uint16_t* __t2606t, uint64_t size, char** __t2607t, uint64_t* __t2608t, uint16_t* __t2609t, uint16_t* __t2610t) {
  char* buffer__unsafe_ptr=*__t2603t;
  uint64_t buffer__unsafe_size=*__t2604t;
  uint16_t buffer__unsafe_offset=*__t2605t;
  uint16_t buffer__unsafe_align=*__t2606t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2603t=buffer__unsafe_ptr;
  *__t2604t=buffer__unsafe_size;
  *__t2605t=buffer__unsafe_offset;
  *__t2606t=buffer__unsafe_align;
  *__t2607t=buffer__unsafe_ptr;
  *__t2608t=buffer__unsafe_size;
  *__t2609t=buffer__unsafe_offset;
  *__t2610t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2611t, uint64_t* __t2612t, uint16_t* __t2613t, uint16_t* __t2614t, uint64_t _pos, char** __t2615t, uint64_t* __t2616t, uint16_t* __t2617t, uint16_t* __t2618t, uint64_t* __t2619t) {
  char* buf__unsafe_ptr=*__t2611t;
  uint64_t buf__unsafe_size=*__t2612t;
  uint16_t buf__unsafe_offset=*__t2613t;
  uint16_t buf__unsafe_align=*__t2614t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2611t=buf__unsafe_ptr;
  *__t2612t=buf__unsafe_size;
  *__t2613t=buf__unsafe_offset;
  *__t2614t=buf__unsafe_align;
  *__t2615t=buf__unsafe_ptr;
  *__t2616t=buf__unsafe_size;
  *__t2617t=buf__unsafe_offset;
  *__t2618t=buf__unsafe_align;
  *__t2619t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2620t, uint64_t* __t2621t, uint16_t* __t2622t, uint16_t* __t2623t, char** __t2624t, uint64_t* __t2625t, uint16_t* __t2626t, uint16_t* __t2627t, uint64_t* __t2628t) {
  char* buf__unsafe_ptr=*__t2620t;
  uint64_t buf__unsafe_size=*__t2621t;
  uint16_t buf__unsafe_offset=*__t2622t;
  uint16_t buf__unsafe_align=*__t2623t;
  uint64_t __t814t=0;
  char* __t815t__buf__unsafe_ptr=0;
  uint64_t __t815t__buf__unsafe_size=0;
  uint16_t __t815t__buf__unsafe_offset=0;
  uint16_t __t815t__buf__unsafe_align=0;
  uint64_t __t815t__pos=0;
  __t814t=0;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t814t,&__t815t__buf__unsafe_ptr,&__t815t__buf__unsafe_size,&__t815t__buf__unsafe_offset,&__t815t__buf__unsafe_align,&__t815t__pos);
  goto __t_return;
  __t_return:
  *__t2620t=buf__unsafe_ptr;
  *__t2621t=buf__unsafe_size;
  *__t2622t=buf__unsafe_offset;
  *__t2623t=buf__unsafe_align;
  *__t2624t=__t815t__buf__unsafe_ptr;
  *__t2625t=__t815t__buf__unsafe_size;
  *__t2626t=__t815t__buf__unsafe_offset;
  *__t2627t=__t815t__buf__unsafe_align;
  *__t2628t=__t815t__pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2534t(char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2629t=unsafe_ptr;
  *__t2630t=unsafe_size;
  *__t2631t=unsafe_offset;
  *__t2632t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t2454t(char** __t2633t, uint64_t* __t2634t, uint16_t* __t2635t, uint16_t* __t2636t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2633t=unsafe_ptr;
  *__t2634t=unsafe_size;
  *__t2635t=unsafe_offset;
  *__t2636t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2637t) {
  goto __t_return;
  __t_return:
  *__t2637t=buffer__unsafe_size;
}

int strmap__t2453t(char** __t2638t, uint64_t* __t2639t, uint16_t* __t2640t, uint16_t* __t2641t, char** __t2642t, uint64_t* __t2643t, uint16_t* __t2644t, uint16_t* __t2645t, char** __t2646t, uint64_t* __t2647t, uint16_t* __t2648t, uint16_t* __t2649t) {
  char* values__unsafe_ptr=*__t2638t;
  uint64_t values__unsafe_size=*__t2639t;
  uint16_t values__unsafe_offset=*__t2640t;
  uint16_t values__unsafe_align=*__t2641t;
  char* __t2456t__unsafe_ptr=0;
  uint64_t __t2456t__unsafe_size=0;
  uint16_t __t2456t__unsafe_offset=0;
  uint16_t __t2456t__unsafe_align=0;
  char* __t2457t__unsafe_ptr=0;
  uint64_t __t2457t__unsafe_size=0;
  uint16_t __t2457t__unsafe_offset=0;
  uint16_t __t2457t__unsafe_align=0;
  uint64_t __t2458t__=0;
  char* __t2459t__unsafe_ptr=0;
  uint64_t __t2459t__unsafe_size=0;
  uint16_t __t2459t__unsafe_offset=0;
  uint16_t __t2459t__unsafe_align=0;
  char __t2460t____t692t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t2454t(&__t2456t__unsafe_ptr,&__t2456t__unsafe_size,&__t2456t__unsafe_offset,&__t2456t__unsafe_align);
  __t2457t__unsafe_ptr=__t2456t__unsafe_ptr;
  __t2457t__unsafe_size=__t2456t__unsafe_size;
  __t2457t__unsafe_offset=__t2456t__unsafe_offset;
  __t2457t__unsafe_align=__t2456t__unsafe_align;
  len__t805t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t2458t__);
  __t_errcode=alloc__t690t(&__t2457t__unsafe_ptr,&__t2457t__unsafe_size,&__t2457t__unsafe_offset,&__t2457t__unsafe_align,__t2458t__,&__t2459t__unsafe_ptr,&__t2459t__unsafe_size,&__t2459t__unsafe_offset,&__t2459t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t2459t__unsafe_ptr;
  keys__unsafe_size=__t2459t__unsafe_size;
  keys__unsafe_offset=__t2459t__unsafe_offset;
  keys__unsafe_align=__t2459t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(keys__unsafe_ptr,&__t2460t____t692t__);
  if(__t2460t____t692t__){
  free__t661t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2638t=values__unsafe_ptr;
  *__t2639t=values__unsafe_size;
  *__t2640t=values__unsafe_offset;
  *__t2641t=values__unsafe_align;
  *__t2642t=keys__unsafe_ptr;
  *__t2643t=keys__unsafe_size;
  *__t2644t=keys__unsafe_offset;
  *__t2645t=keys__unsafe_align;
  *__t2646t=values__unsafe_ptr;
  *__t2647t=values__unsafe_size;
  *__t2648t=values__unsafe_offset;
  *__t2649t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2650t, uint64_t* __t2651t, uint16_t* __t2652t, uint16_t* __t2653t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2650t=unsafe_ptr;
  *__t2651t=unsafe_size;
  *__t2652t=unsafe_offset;
  *__t2653t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2654t) {
  *__t2654t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2655t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2655t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2656t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2656t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2657t) {
  *__t2657t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2658t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2658t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2659t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2659t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2660t, uint64_t* __t2661t, uint64_t* __t2662t, char* __t2663t) {
  goto __t_return;
  __t_return:
  *__t2660t=unsafe_ptr;
  *__t2661t=dat__pos;
  *__t2662t=dat__length;
  *__t2663t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2664t, uint64_t* __t2665t, uint64_t* __t2666t, char* __t2667t) {
  char* unsafe_ptr=0;
  uint64_t __t946t__=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t=0;
  char __t951t__=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__dat__pos=0;
  uint64_t __t952t__dat__length=0;
  char __t952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t946t__);
  __t947t=1;
  neq__t144t(__t946t__,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t949t__);
  __t950t=0;
  neq__t144t(__t949t__,__t950t,&__t951t__);
  if(__t951t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t941t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t952t__unsafe_ptr,&__t952t__dat__pos,&__t952t__dat__length,&__t952t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2664t=__t952t__unsafe_ptr;
  *__t2665t=__t952t__dat__pos;
  *__t2666t=__t952t__dat__length;
  *__t2667t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2668t, uint64_t* __t2669t, uint64_t* __t2670t, char* __t2671t) {
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__=0;
  char __t981t__value=0;
  char first=0;
  char* __t982t__unsafe_ptr=0;
  uint64_t __t982t__dat__pos=0;
  uint64_t __t982t__dat__length=0;
  char __t982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t978t=0;
  neq__t144t(length,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t980t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t980t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t981t__value,__t980t__,1);
  first=__t981t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t982t__unsafe_ptr,&__t982t__dat__pos,&__t982t__dat__length,&__t982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2668t=__t982t__unsafe_ptr;
  *__t2669t=__t982t__dat__pos;
  *__t2670t=__t982t__dat__length;
  *__t2671t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2672t, uint64_t* __t2673t, uint64_t* __t2674t, char* __t2675t) {
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__unsafe_size=0;
  uint16_t __t998t__unsafe_offset=0;
  uint16_t __t998t__unsafe_align=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__unsafe_size=0;
  uint16_t __t999t__unsafe_offset=0;
  uint16_t __t999t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1000t__=0;
  uint64_t length=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t__=0;
  uint64_t __t1003t=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t998t__unsafe_ptr,&__t998t__unsafe_size,&__t998t__unsafe_offset,&__t998t__unsafe_align);
  __t999t__unsafe_ptr=__t998t__unsafe_ptr;
  __t999t__unsafe_size=__t998t__unsafe_size;
  __t999t__unsafe_offset=__t998t__unsafe_offset;
  __t999t__unsafe_align=__t998t__unsafe_align;
  buf__unsafe_ptr=__t999t__unsafe_ptr;
  buf__unsafe_size=__t999t__unsafe_size;
  buf__unsafe_offset=__t999t__unsafe_offset;
  buf__unsafe_align=__t999t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1000t__);
  buf__unsafe_ptr=__t1000t__;
  if(c){
  length=strlen(c);
  }
  __t1001t=1;
  add__t175t(length,__t1001t,&__t1002t__);
  buf__unsafe_size=__t1002t__;
  __t1003t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,length,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2672t=__t1005t__unsafe_ptr;
  *__t2673t=__t1005t__dat__pos;
  *__t2674t=__t1005t__dat__length;
  *__t2675t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t2063t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2676t, uint64_t* __t2677t, uint64_t* __t2678t, char* __t2679t) {
  goto __t_return;
  __t_return:
  *__t2676t=r__unsafe_ptr;
  *__t2677t=r__dat__pos;
  *__t2678t=r__dat__length;
  *__t2679t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2680t) {
  goto __t_return;
  __t_return:
  *__t2680t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t2067t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2681t) {
  uint64_t __t2068t=0;
  uint64_t __t2069t__=0;
  char __t2070t__=0;
  __t2068t=0;
  len__t1006t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2069t__);
  eq__t120t(__t2068t,__t2069t__,&__t2070t__);
  goto __t_return;
  __t_return:
  *__t2681t=__t2070t__;
}

static inline __attribute__((always_inline)) void raw__t2061t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2682t, uint64_t* __t2683t, uint64_t* __t2684t, char* __t2685t) {
  goto __t_return;
  __t_return:
  *__t2682t=r__s__unsafe_ptr;
  *__t2683t=r__s__dat__pos;
  *__t2684t=r__s__dat__length;
  *__t2685t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2686t, uint64_t* __t2687t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2686t=__t613t;
  *__t2687t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2688t, uint64_t* __t2689t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2688t=from;
  *__t2689t=to;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t2690t, uint64_t r__to, uint64_t* __t2691t) {
  uint64_t r__from=*__t2690t;
  char __t633t__=0;
  uint64_t ret=0;
  uint64_t __t634t=0;
  uint64_t __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t633t__);
  if(__t633t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t634t=1;
  add__t175t(ret,__t634t,&__t635t__);
  r__from=__t635t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2690t=r__from;
  *__t2691t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t592t(uint64_t value, uint64_t* __t2692t) {
  goto __t_return;
  __t_return:
  *__t2692t=value;
}

static inline __attribute__((always_inline)) void lshift__t602t(uint64_t x__value, uint64_t y, uint64_t* __t2693t) {
  uint64_t z=0;
  uint64_t __t603t__value=0;
  z=(x__value<<y);
  bits__t592t(z,&__t603t__value);
  goto __t_return;
  __t_return:
  *__t2693t=__t603t__value;
}

static inline __attribute__((always_inline)) void nat__t587t(uint64_t x, uint64_t* __t2694t) {
  int __t588t=0;
  int __t589t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2694t=value;
}

static inline __attribute__((always_inline)) void nat__t598t(uint64_t x__value, uint64_t* __t2695t) {
  uint64_t __t599t__=0;
  nat__t587t(x__value,&__t599t__);
  goto __t_return;
  __t_return:
  *__t2695t=__t599t__;
}

static inline __attribute__((always_inline)) void get__t1133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2696t) {
  uint64_t __t1134t__=0;
  char* __t1135t__=0;
  add__t175t(s__dat__pos,i,&__t1134t__);
  add__t663t(s__unsafe_ptr,__t1134t__,&__t1135t__);
  goto __t_return;
  __t_return:
  *__t2696t=__t1135t__;
}

static inline __attribute__((always_inline)) void nat__t590t(char x, uint64_t* __t2697t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2697t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2698t) {
  uint64_t zero=0;
  char __t229t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t120t(y,zero,&__t229t__);
  if(__t229t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2698t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t2011t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2699t) {
  uint64_t __t2012t=0;
  uint64_t __t2013t=0;
  uint64_t h=0;
  uint64_t __t2014t__=0;
  uint64_t __t2015t____t613t=0;
  uint64_t __t2015t__to=0;
  uint64_t __t2016t__from=0;
  uint64_t __t2016t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2017t=0;
  uint64_t __t2018t__=0;
  uint64_t i=0;
  uint64_t __t2019t__value=0;
  uint64_t __t2020t=0;
  uint64_t __t2021t__value=0;
  uint64_t __t2022t__=0;
  uint64_t __t2023t__=0;
  char* __t2024t__=0;
  char __t2025t__value=0;
  uint64_t __t2026t__=0;
  uint64_t __t2027t__=0;
  uint64_t __t2028t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2012t=5381;
  __t2013t=__t2012t;
  h=__t2013t;
  len__t1006t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2014t__);
  of__t612t(__t2014t__,&__t2015t____t613t,&__t2015t__to);
  range__t629t(__t2015t____t613t,__t2015t__to,&__t2016t__from,&__t2016t__to);
  iter__from=__t2016t__from;
  iter__to=__t2016t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2018t__);
  __t2017t=__t_complain;
  i=__t2018t__;
  __t2017t=__t2017t==0;
  if(!__t2017t){
  break;
  }
  bits__t592t(h,&__t2019t__value);
  __t2020t=5;
  lshift__t602t(__t2019t__value,__t2020t,&__t2021t__value);
  nat__t598t(__t2021t__value,&__t2022t__);
  add__t175t(__t2022t__,h,&__t2023t__);
  get__t1133t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t2024t__);
  if(!__t2024t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2025t__value,__t2024t__,1);
  nat__t590t(__t2025t__value,&__t2026t__);
  add__t175t(__t2023t__,__t2026t__,&__t2027t__);
  h=__t2027t__;
  }
  __t_errcode=mod__t228t(h,size,&__t2028t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2699t=__t2028t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2700t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2700t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2701t) {
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
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2701t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2702t, uint64_t* __t2703t, uint16_t* __t2704t, uint16_t* __t2705t, uint64_t i, char** __t2706t) {
  char* buffer__unsafe_ptr=*__t2702t;
  uint64_t buffer__unsafe_size=*__t2703t;
  uint16_t buffer__unsafe_offset=*__t2704t;
  uint16_t buffer__unsafe_align=*__t2705t;
  char __t792t__=0;
  uint64_t __t793t__=0;
  uint64_t __t794t__=0;
  uint64_t __t795t__=0;
  uint64_t __t796t__=0;
  char* __t797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t792t__);
  if(__t792t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t793t__);
  mul__t199t(i,__t793t__,&__t794t__);
  nat__t665t(buffer__unsafe_offset,&__t795t__);
  add__t175t(__t794t__,__t795t__,&__t796t__);
  add__t663t(buffer__unsafe_ptr,__t796t__,&__t797t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2702t=buffer__unsafe_ptr;
  *__t2703t=buffer__unsafe_size;
  *__t2704t=buffer__unsafe_offset;
  *__t2705t=buffer__unsafe_align;
  *__t2706t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1010t(char x, char y, char* __t2707t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2707t=z;
}

static inline __attribute__((always_inline)) void eq__t1076t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2708t) {
  uint64_t __t1077t__=0;
  uint64_t n=0;
  uint64_t __t1078t__=0;
  char __t1079t__=0;
  char __t1080t=0;
  char __t1081t__=0;
  char __t1082t=0;
  char z=0;
  len__t1006t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1077t__);
  n=__t1077t__;
  len__t1006t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1078t__);
  neq__t144t(n,__t1078t__,&__t1079t__);
  if(__t1079t__){
  __t1080t=0;
  goto __t_return;
  }
  neq__t1010t(x__dat__first,y__dat__first,&__t1081t__);
  if(__t1081t__){
  __t1082t=0;
  __t1080t=__t1082t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1080t=z;
  goto __t_return;
  __t_return:
  *__t2708t=__t1080t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2709t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2709t=z;
}

int at__t2350t(char** __t2710t, uint64_t* __t2711t, uint16_t* __t2712t, uint16_t* __t2713t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2714t) {
  char* data__unsafe_ptr=*__t2710t;
  uint64_t data__unsafe_size=*__t2711t;
  uint16_t data__unsafe_offset=*__t2712t;
  uint16_t data__unsafe_align=*__t2713t;
  char* __t2351t__unsafe_ptr=0;
  uint64_t __t2351t__dat__pos=0;
  uint64_t __t2351t__dat__length=0;
  char __t2351t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t2352t__=0;
  uint64_t __t2353t=0;
  uint64_t __t2354t=0;
  char* __t2355t__=0;
  char* __t2356t__s__unsafe_ptr=0;
  uint64_t __t2356t__s__dat__pos=0;
  uint64_t __t2356t__s__dat__length=0;
  char __t2356t__s__dat__first=0;
  uint64_t __t2356t__cost=0;
  char* __t2357t__unsafe_ptr=0;
  uint64_t __t2357t__dat__pos=0;
  uint64_t __t2357t__dat__length=0;
  char __t2357t__dat__first=0;
  int __t2358t=0;
  int __t2359t__=0;
  uint64_t __t2360t__=0;
  uint64_t n=0;
  uint64_t __t2361t__=0;
  uint64_t pos=0;
  uint64_t __t2362t____t613t=0;
  uint64_t __t2362t__to=0;
  uint64_t __t2363t__from=0;
  uint64_t __t2363t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2364t=0;
  uint64_t __t2365t__=0;
  uint64_t i=0;
  uint64_t __t2366t__=0;
  uint64_t __t2367t=0;
  uint64_t idx=0;
  char __t2368t__=0;
  uint64_t __t2369t__=0;
  uint64_t __t2370t=0;
  char __t2371t__=0;
  char* __t2372t__=0;
  char* __t2373t__s__unsafe_ptr=0;
  uint64_t __t2373t__s__dat__pos=0;
  uint64_t __t2373t__s__dat__length=0;
  char __t2373t__s__dat__first=0;
  uint64_t __t2373t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t2374t__unsafe_ptr=0;
  uint64_t __t2374t__dat__pos=0;
  uint64_t __t2374t__dat__length=0;
  char __t2374t__dat__first=0;
  char __t2375t__=0;
  char* __t2376t__=0;
  char* __t2377t__unsafe_ptr=0;
  uint64_t __t2377t__dat__pos=0;
  uint64_t __t2377t__dat__length=0;
  char __t2377t__dat__first=0;
  char __t2378t__=0;
  char __t2379t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t2380t__=0;
  char* __t2381t__s__unsafe_ptr=0;
  uint64_t __t2381t__s__dat__pos=0;
  uint64_t __t2381t__s__dat__length=0;
  char __t2381t__s__dat__first=0;
  uint64_t __t2381t__cost=0;
  char* __t2382t__unsafe_ptr=0;
  uint64_t __t2382t__dat__pos=0;
  uint64_t __t2382t__dat__length=0;
  char __t2382t__dat__first=0;
  char* __t2383t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t2063t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t2351t__unsafe_ptr,&__t2351t__dat__pos,&__t2351t__dat__length,&__t2351t__dat__first);
  k__unsafe_ptr=__t2351t__unsafe_ptr;
  k__dat__pos=__t2351t__dat__pos;
  k__dat__length=__t2351t__dat__length;
  k__dat__first=__t2351t__dat__first;
  is_zero__t2067t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2352t__);
  if(__t2352t__){
  __t2353t=0;
  goto __t_return;
  }
  __t2354t=0;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t2354t,&__t2355t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2355t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2356t__s__unsafe_ptr,__t2355t__,8);
  memcpy(&__t2356t__s__dat__pos,__t2355t__+8,8);
  memcpy(&__t2356t__s__dat__length,__t2355t__+16,8);
  memcpy(&__t2356t__s__dat__first,__t2355t__+24,1);
  memcpy(&__t2356t__cost,__t2355t__+25,8);
  raw__t2061t(__t2356t__s__unsafe_ptr,__t2356t__s__dat__pos,__t2356t__s__dat__length,__t2356t__s__dat__first,__t2356t__cost,&__t2357t__unsafe_ptr,&__t2357t__dat__pos,&__t2357t__dat__length,&__t2357t__dat__first);
  not__t37t(__t2358t,&__t2359t__);
  len__t805t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t2360t__);
  n=__t2360t__;
  __t_errcode=hash__t2011t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t2361t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t2361t__;
  of__t612t(n,&__t2362t____t613t,&__t2362t__to);
  range__t629t(__t2362t____t613t,__t2362t__to,&__t2363t__from,&__t2363t__to);
  iter__from=__t2363t__from;
  iter__to=__t2363t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2365t__);
  __t2364t=__t_complain;
  i=__t2365t__;
  __t2364t=__t2364t==0;
  if(!__t2364t){
  break;
  }
  add__t175t(pos,i,&__t2366t__);
  __t2367t=__t2366t__;
  idx=__t2367t;
  ge__t324t(idx,n,&__t2368t__);
  if(__t2368t__){
  __t_errcode=sub__t352t(idx,n,&__t2369t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t2369t__;
  }
  __t2370t=0;
  eq__t120t(idx,__t2370t,&__t2371t__);
  if(__t2371t__){
  continue;
  }
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2372t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2372t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2373t__s__unsafe_ptr,__t2372t__,8);
  memcpy(&__t2373t__s__dat__pos,__t2372t__+8,8);
  memcpy(&__t2373t__s__dat__length,__t2372t__+16,8);
  memcpy(&__t2373t__s__dat__first,__t2372t__+24,1);
  memcpy(&__t2373t__cost,__t2372t__+25,8);
  entry__s__unsafe_ptr=__t2373t__s__unsafe_ptr;
  entry__s__dat__pos=__t2373t__s__dat__pos;
  entry__s__dat__length=__t2373t__s__dat__length;
  entry__s__dat__first=__t2373t__s__dat__first;
  entry__cost=__t2373t__cost;
  raw__t2061t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2374t__unsafe_ptr,&__t2374t__dat__pos,&__t2374t__dat__length,&__t2374t__dat__first);
  is_zero__t2067t(__t2374t__unsafe_ptr,__t2374t__dat__pos,__t2374t__dat__length,__t2374t__dat__first,&__t2375t__);
  if(__t2375t__){
  __t_errcode=mutget__t791t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2376t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2376t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2376t__,&k__unsafe_ptr,8);
  memcpy(__t2376t__+8,&k__dat__pos,8);
  memcpy(__t2376t__+16,&k__dat__length,8);
  memcpy(__t2376t__+24,&k__dat__first,1);
  memcpy(__t2376t__+25,&i,8);
  __t2353t=idx;
  goto __t_return;
  }
  raw__t2061t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2377t__unsafe_ptr,&__t2377t__dat__pos,&__t2377t__dat__length,&__t2377t__dat__first);
  eq__t1076t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t2377t__unsafe_ptr,__t2377t__dat__pos,__t2377t__dat__length,__t2377t__dat__first,&__t2378t__);
  if(__t2378t__){
  __t2353t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t2379t__);
  if(__t2379t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2380t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2380t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2381t__s__unsafe_ptr,__t2380t__,8);
  memcpy(&__t2381t__s__dat__pos,__t2380t__+8,8);
  memcpy(&__t2381t__s__dat__length,__t2380t__+16,8);
  memcpy(&__t2381t__s__dat__first,__t2380t__+24,1);
  memcpy(&__t2381t__cost,__t2380t__+25,8);
  raw__t2061t(__t2381t__s__unsafe_ptr,__t2381t__s__dat__pos,__t2381t__s__dat__length,__t2381t__s__dat__first,__t2381t__cost,&__t2382t__unsafe_ptr,&__t2382t__dat__pos,&__t2382t__dat__length,&__t2382t__dat__first);
  k__unsafe_ptr=__t2382t__unsafe_ptr;
  k__dat__pos=__t2382t__dat__pos;
  k__dat__length=__t2382t__dat__length;
  k__dat__first=__t2382t__dat__first;
  __t_errcode=mutget__t791t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2383t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2383t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2383t__,&tmp__unsafe_ptr,8);
  memcpy(__t2383t__+8,&tmp__dat__pos,8);
  memcpy(__t2383t__+16,&tmp__dat__length,8);
  memcpy(__t2383t__+24,&tmp__dat__first,1);
  memcpy(__t2383t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2710t=data__unsafe_ptr;
  *__t2711t=data__unsafe_size;
  *__t2712t=data__unsafe_offset;
  *__t2713t=data__unsafe_align;
  *__t2714t=__t2353t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2477t(char** __t2715t, uint64_t* __t2716t, uint16_t* __t2717t, uint16_t* __t2718t, char** __t2719t, uint64_t* __t2720t, uint16_t* __t2721t, uint16_t* __t2722t, const char* key, char** __t2723t) {
  char* keys__unsafe_ptr=*__t2715t;
  uint64_t keys__unsafe_size=*__t2716t;
  uint16_t keys__unsafe_offset=*__t2717t;
  uint16_t keys__unsafe_align=*__t2718t;
  char* values__unsafe_ptr=*__t2719t;
  uint64_t values__unsafe_size=*__t2720t;
  uint16_t values__unsafe_offset=*__t2721t;
  uint16_t values__unsafe_align=*__t2722t;
  char* __t2478t__unsafe_ptr=0;
  uint64_t __t2478t__dat__pos=0;
  uint64_t __t2478t__dat__length=0;
  char __t2478t__dat__first=0;
  uint64_t __t2479t__=0;
  char* __t2480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(key,&__t2478t__unsafe_ptr,&__t2478t__dat__pos,&__t2478t__dat__length,&__t2478t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2350t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2478t__unsafe_ptr,__t2478t__dat__pos,__t2478t__dat__length,__t2478t__dat__first,&__t2479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t791t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2479t__,&__t2480t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2715t=keys__unsafe_ptr;
  *__t2716t=keys__unsafe_size;
  *__t2717t=keys__unsafe_offset;
  *__t2718t=keys__unsafe_align;
  *__t2719t=values__unsafe_ptr;
  *__t2720t=values__unsafe_size;
  *__t2721t=values__unsafe_offset;
  *__t2722t=values__unsafe_align;
  *__t2723t=__t2480t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t976t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2724t, uint64_t* __t2725t, uint64_t* __t2726t, char* __t2727t) {
  goto __t_return;
  __t_return:
  *__t2724t=other__unsafe_ptr;
  *__t2725t=other__dat__pos;
  *__t2726t=other__dat__length;
  *__t2727t=other__dat__first;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2728t, uint64_t* __t2729t, uint16_t* __t2730t, uint16_t* __t2731t, uint64_t pos, char** __t2732t, uint64_t* __t2733t, uint16_t* __t2734t, uint16_t* __t2735t, uint64_t* __t2736t) {
  char* buf__unsafe_ptr=*__t2728t;
  uint64_t buf__unsafe_size=*__t2729t;
  uint16_t buf__unsafe_offset=*__t2730t;
  uint16_t buf__unsafe_align=*__t2731t;
  goto __t_return;
  __t_return:
  *__t2728t=buf__unsafe_ptr;
  *__t2729t=buf__unsafe_size;
  *__t2730t=buf__unsafe_offset;
  *__t2731t=buf__unsafe_align;
  *__t2732t=buf__unsafe_ptr;
  *__t2733t=buf__unsafe_size;
  *__t2734t=buf__unsafe_offset;
  *__t2735t=buf__unsafe_align;
  *__t2736t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2737t, uint64_t* __t2738t, uint16_t* __t2739t, uint16_t* __t2740t, uint64_t* __t2741t, uint64_t length, char** __t2742t, uint64_t* __t2743t, uint16_t* __t2744t, uint16_t* __t2745t, uint64_t* __t2746t) {
  char* allocator__buf__unsafe_ptr=*__t2737t;
  uint64_t allocator__buf__unsafe_size=*__t2738t;
  uint16_t allocator__buf__unsafe_offset=*__t2739t;
  uint16_t allocator__buf__unsafe_align=*__t2740t;
  uint64_t allocator__pos=*__t2741t;
  int __t844t=0;
  uint64_t __t845t__=0;
  uint64_t next_pos=0;
  uint64_t __t846t__=0;
  char __t847t__=0;
  uint64_t __t848t=0;
  uint64_t __t849t__=0;
  uint64_t pos=0;
  char* __t850t__buf__unsafe_ptr=0;
  uint64_t __t850t__buf__unsafe_size=0;
  uint16_t __t850t__buf__unsafe_offset=0;
  uint16_t __t850t__buf__unsafe_align=0;
  uint64_t __t850t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t845t__);
  next_pos=__t845t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t846t__);
  gt__t276t(next_pos,__t846t__,&__t847t__);
  if(__t847t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t848t=0;
  add__t175t(allocator__pos,__t848t,&__t849t__);
  pos=__t849t__;
  allocator__pos=next_pos;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t850t__buf__unsafe_ptr,&__t850t__buf__unsafe_size,&__t850t__buf__unsafe_offset,&__t850t__buf__unsafe_align,&__t850t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2737t=allocator__buf__unsafe_ptr;
  *__t2738t=allocator__buf__unsafe_size;
  *__t2739t=allocator__buf__unsafe_offset;
  *__t2740t=allocator__buf__unsafe_align;
  *__t2741t=allocator__pos;
  *__t2742t=__t850t__buf__unsafe_ptr;
  *__t2743t=__t850t__buf__unsafe_size;
  *__t2744t=__t850t__buf__unsafe_offset;
  *__t2745t=__t850t__buf__unsafe_align;
  *__t2746t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1023t(char** __t2747t, uint64_t* __t2748t, uint16_t* __t2749t, uint16_t* __t2750t, uint64_t* __t2751t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2752t, uint64_t* __t2753t, uint64_t* __t2754t, char* __t2755t) {
  char* CHARS__buf__unsafe_ptr=*__t2747t;
  uint64_t CHARS__buf__unsafe_size=*__t2748t;
  uint16_t CHARS__buf__unsafe_offset=*__t2749t;
  uint16_t CHARS__buf__unsafe_align=*__t2750t;
  uint64_t CHARS__pos=*__t2751t;
  char* __t1024t__unsafe_ptr=0;
  uint64_t __t1024t__dat__pos=0;
  uint64_t __t1024t__dat__length=0;
  char __t1024t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1025t__=0;
  char* __t1026t__buf__unsafe_ptr=0;
  uint64_t __t1026t__buf__unsafe_size=0;
  uint16_t __t1026t__buf__unsafe_offset=0;
  uint16_t __t1026t__buf__unsafe_align=0;
  uint64_t __t1026t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__dat__pos=0;
  uint64_t __t1027t__dat__length=0;
  char __t1027t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1024t__unsafe_ptr,&__t1024t__dat__pos,&__t1024t__dat__length,&__t1024t__dat__first);
  other__unsafe_ptr=__t1024t__unsafe_ptr;
  other__dat__pos=__t1024t__dat__pos;
  other__dat__length=__t1024t__dat__length;
  other__dat__first=__t1024t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1025t__);
  __t_errcode=alloc__t843t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1025t__,&__t1026t__buf__unsafe_ptr,&__t1026t__buf__unsafe_size,&__t1026t__buf__unsafe_offset,&__t1026t__buf__unsafe_align,&__t1026t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1026t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1026t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1026t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1026t__buf__unsafe_align;
  surface__pos=__t1026t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1027t__unsafe_ptr,&__t1027t__dat__pos,&__t1027t__dat__length,&__t1027t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2747t=CHARS__buf__unsafe_ptr;
  *__t2748t=CHARS__buf__unsafe_size;
  *__t2749t=CHARS__buf__unsafe_offset;
  *__t2750t=CHARS__buf__unsafe_align;
  *__t2751t=CHARS__pos;
  *__t2752t=__t1027t__unsafe_ptr;
  *__t2753t=__t1027t__dat__pos;
  *__t2754t=__t1027t__dat__length;
  *__t2755t=__t1027t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2491t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2756t, char** __t2757t, uint64_t* __t2758t, uint64_t* __t2759t, char* __t2760t) {
  uint64_t pos=*__t2756t;
  uint64_t __t2492t=0;
  char __t2493t__=0;
  uint64_t __t2494t=0;
  uint64_t __t2495t__=0;
  uint64_t __t2496t=0;
  char* __t2497t__=0;
  char* __t2498t__s__unsafe_ptr=0;
  uint64_t __t2498t__s__dat__pos=0;
  uint64_t __t2498t__s__dat__length=0;
  char __t2498t__s__dat__first=0;
  uint64_t __t2498t__cost=0;
  char* __t2499t__unsafe_ptr=0;
  uint64_t __t2499t__dat__pos=0;
  uint64_t __t2499t__dat__length=0;
  char __t2499t__dat__first=0;
  char* __t2500t__=0;
  char* __t2501t__s__unsafe_ptr=0;
  uint64_t __t2501t__s__dat__pos=0;
  uint64_t __t2501t__s__dat__length=0;
  char __t2501t__s__dat__first=0;
  uint64_t __t2501t__cost=0;
  char* __t2502t__unsafe_ptr=0;
  uint64_t __t2502t__dat__pos=0;
  uint64_t __t2502t__dat__length=0;
  char __t2502t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2503t=0;
  uint64_t __t2504t__=0;
  char* __t2505t__unsafe_ptr=0;
  uint64_t __t2505t__dat__pos=0;
  uint64_t __t2505t__dat__length=0;
  char __t2505t__dat__first=0;
  char __t2506t__=0;
  char* __t2507t__=0;
  char* __t2508t__s__unsafe_ptr=0;
  uint64_t __t2508t__s__dat__pos=0;
  uint64_t __t2508t__s__dat__length=0;
  char __t2508t__s__dat__first=0;
  uint64_t __t2508t__cost=0;
  char* __t2509t__unsafe_ptr=0;
  uint64_t __t2509t__dat__pos=0;
  uint64_t __t2509t__dat__length=0;
  char __t2509t__dat__first=0;
  uint64_t __t2510t=0;
  uint64_t __t2511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2492t=0;
  eq__t120t(pos,__t2492t,&__t2493t__);
  if(__t2493t__){
  __t2494t=1;
  add__t175t(pos,__t2494t,&__t2495t__);
  pos=__t2495t__;
  __t2496t=0;
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2496t,&__t2497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2497t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2498t__s__unsafe_ptr,__t2497t__,8);
  memcpy(&__t2498t__s__dat__pos,__t2497t__+8,8);
  memcpy(&__t2498t__s__dat__length,__t2497t__+16,8);
  memcpy(&__t2498t__s__dat__first,__t2497t__+24,1);
  memcpy(&__t2498t__cost,__t2497t__+25,8);
  raw__t2061t(__t2498t__s__unsafe_ptr,__t2498t__s__dat__pos,__t2498t__s__dat__length,__t2498t__s__dat__first,__t2498t__cost,&__t2499t__unsafe_ptr,&__t2499t__dat__pos,&__t2499t__dat__length,&__t2499t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2500t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2500t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2501t__s__unsafe_ptr,__t2500t__,8);
  memcpy(&__t2501t__s__dat__pos,__t2500t__+8,8);
  memcpy(&__t2501t__s__dat__length,__t2500t__+16,8);
  memcpy(&__t2501t__s__dat__first,__t2500t__+24,1);
  memcpy(&__t2501t__cost,__t2500t__+25,8);
  raw__t2061t(__t2501t__s__unsafe_ptr,__t2501t__s__dat__pos,__t2501t__s__dat__length,__t2501t__s__dat__first,__t2501t__cost,&__t2502t__unsafe_ptr,&__t2502t__dat__pos,&__t2502t__dat__length,&__t2502t__dat__first);
  ret__unsafe_ptr=__t2502t__unsafe_ptr;
  ret__dat__pos=__t2502t__dat__pos;
  ret__dat__length=__t2502t__dat__length;
  ret__dat__first=__t2502t__dat__first;
  __t2503t=1;
  add__t175t(pos,__t2503t,&__t2504t__);
  pos=__t2504t__;
  while(1){
  raw__t2063t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2505t__unsafe_ptr,&__t2505t__dat__pos,&__t2505t__dat__length,&__t2505t__dat__first);
  is_zero__t2067t(__t2505t__unsafe_ptr,__t2505t__dat__pos,__t2505t__dat__length,__t2505t__dat__first,&__t2506t__);
  if(!__t2506t__){
  break;
  }
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2507t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2508t__s__unsafe_ptr,__t2507t__,8);
  memcpy(&__t2508t__s__dat__pos,__t2507t__+8,8);
  memcpy(&__t2508t__s__dat__length,__t2507t__+16,8);
  memcpy(&__t2508t__s__dat__first,__t2507t__+24,1);
  memcpy(&__t2508t__cost,__t2507t__+25,8);
  raw__t2061t(__t2508t__s__unsafe_ptr,__t2508t__s__dat__pos,__t2508t__s__dat__length,__t2508t__s__dat__first,__t2508t__cost,&__t2509t__unsafe_ptr,&__t2509t__dat__pos,&__t2509t__dat__length,&__t2509t__dat__first);
  ret__unsafe_ptr=__t2509t__unsafe_ptr;
  ret__dat__pos=__t2509t__dat__pos;
  ret__dat__length=__t2509t__dat__length;
  ret__dat__first=__t2509t__dat__first;
  __t2510t=1;
  add__t175t(pos,__t2510t,&__t2511t__);
  pos=__t2511t__;
  }
  __t2499t__unsafe_ptr=ret__unsafe_ptr;
  __t2499t__dat__pos=ret__dat__pos;
  __t2499t__dat__length=ret__dat__length;
  __t2499t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2756t=pos;
  *__t2757t=__t2499t__unsafe_ptr;
  *__t2758t=__t2499t__dat__pos;
  *__t2759t=__t2499t__dat__length;
  *__t2760t=__t2499t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2542t(char** __t2761t, uint64_t* __t2762t, uint16_t* __t2763t, uint16_t* __t2764t, uint64_t* __t2765t, char** __t2766t, uint64_t* __t2767t, uint16_t* __t2768t, uint16_t* __t2769t, char** __t2770t, uint64_t* __t2771t, uint16_t* __t2772t, uint16_t* __t2773t) {
  char* buf__buf__unsafe_ptr=*__t2761t;
  uint64_t buf__buf__unsafe_size=*__t2762t;
  uint16_t buf__buf__unsafe_offset=*__t2763t;
  uint16_t buf__buf__unsafe_align=*__t2764t;
  uint64_t buf__pos=*__t2765t;
  char* __t2543t__unsafe_ptr=0;
  uint64_t __t2543t__unsafe_size=0;
  uint16_t __t2543t__unsafe_offset=0;
  uint16_t __t2543t__unsafe_align=0;
  uint64_t __t2544t=0;
  char* __t2545t__unsafe_ptr=0;
  uint64_t __t2545t__unsafe_size=0;
  uint16_t __t2545t__unsafe_offset=0;
  uint16_t __t2545t__unsafe_align=0;
  char __t2546t____t692t__=0;
  char* __t2547t__keys__unsafe_ptr=0;
  uint64_t __t2547t__keys__unsafe_size=0;
  uint16_t __t2547t__keys__unsafe_offset=0;
  uint16_t __t2547t__keys__unsafe_align=0;
  char* __t2547t__values__unsafe_ptr=0;
  uint64_t __t2547t__values__unsafe_size=0;
  uint16_t __t2547t__values__unsafe_offset=0;
  uint16_t __t2547t__values__unsafe_align=0;
  char __t2548t____t2460t____t692t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2550t__=0;
  char* __t2552t__unsafe_ptr=0;
  uint64_t __t2552t__dat__pos=0;
  uint64_t __t2552t__dat__length=0;
  char __t2552t__dat__first=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__dat__pos=0;
  uint64_t __t2553t__dat__length=0;
  char __t2553t__dat__first=0;
  char* __t2555t__=0;
  char* __t2557t__unsafe_ptr=0;
  uint64_t __t2557t__dat__pos=0;
  uint64_t __t2557t__dat__length=0;
  char __t2557t__dat__first=0;
  char* __t2558t__unsafe_ptr=0;
  uint64_t __t2558t__dat__pos=0;
  uint64_t __t2558t__dat__length=0;
  char __t2558t__dat__first=0;
  uint64_t __t2559t=0;
  uint64_t __t2560t=0;
  char* it__map__keys__unsafe_ptr=0;
  uint64_t it__map__keys__unsafe_size=0;
  uint16_t it__map__keys__unsafe_offset=0;
  uint16_t it__map__keys__unsafe_align=0;
  uint64_t it____t2560t=0;
  char __t2561t=0;
  char* __t2562t__unsafe_ptr=0;
  uint64_t __t2562t__dat__pos=0;
  uint64_t __t2562t__dat__length=0;
  char __t2562t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2534t(&__t2543t__unsafe_ptr,&__t2543t__unsafe_size,&__t2543t__unsafe_offset,&__t2543t__unsafe_align);
  __t2544t=128;
  __t_errcode=alloc__t690t(&__t2543t__unsafe_ptr,&__t2543t__unsafe_size,&__t2543t__unsafe_offset,&__t2543t__unsafe_align,__t2544t,&__t2545t__unsafe_ptr,&__t2545t__unsafe_size,&__t2545t__unsafe_offset,&__t2545t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t2453t(&__t2545t__unsafe_ptr,&__t2545t__unsafe_size,&__t2545t__unsafe_offset,&__t2545t__unsafe_align,&__t2547t__keys__unsafe_ptr,&__t2547t__keys__unsafe_size,&__t2547t__keys__unsafe_offset,&__t2547t__keys__unsafe_align,&__t2547t__values__unsafe_ptr,&__t2547t__values__unsafe_size,&__t2547t__values__unsafe_offset,&__t2547t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2547t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2547t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2547t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2547t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2547t__values__unsafe_ptr;
  map__values__unsafe_size=__t2547t__values__unsafe_size;
  map__values__unsafe_offset=__t2547t__values__unsafe_offset;
  map__values__unsafe_align=__t2547t__values__unsafe_align;
  __t_errcode=mutget__t2477t(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__t2549t,&__t2550t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2551t,&__t2552t__unsafe_ptr,&__t2552t__dat__pos,&__t2552t__dat__length,&__t2552t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1023t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2552t__unsafe_ptr,__t2552t__dat__pos,__t2552t__dat__length,__t2552t__dat__first,&__t2553t__unsafe_ptr,&__t2553t__dat__pos,&__t2553t__dat__length,&__t2553t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2550t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2550t__,&__t2553t__unsafe_ptr,8);
  memcpy(__t2550t__+8,&__t2553t__dat__pos,8);
  memcpy(__t2550t__+16,&__t2553t__dat__length,8);
  memcpy(__t2550t__+24,&__t2553t__dat__first,1);
  __t_errcode=mutget__t2477t(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__t2554t,&__t2555t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2556t,&__t2557t__unsafe_ptr,&__t2557t__dat__pos,&__t2557t__dat__length,&__t2557t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1023t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2557t__unsafe_ptr,__t2557t__dat__pos,__t2557t__dat__length,__t2557t__dat__first,&__t2558t__unsafe_ptr,&__t2558t__dat__pos,&__t2558t__dat__length,&__t2558t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2555t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2555t__,&__t2558t__unsafe_ptr,8);
  memcpy(__t2555t__+8,&__t2558t__dat__pos,8);
  memcpy(__t2555t__+16,&__t2558t__dat__length,8);
  memcpy(__t2555t__+24,&__t2558t__dat__first,1);
  __t2559t=0;
  __t2560t=__t2559t;
  it__map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  it__map__keys__unsafe_size=map__keys__unsafe_size;
  it__map__keys__unsafe_offset=map__keys__unsafe_offset;
  it__map__keys__unsafe_align=map__keys__unsafe_align;
  it____t2560t=__t2560t;
  while(1){
  __t_complain=next__t2491t(it__map__keys__unsafe_ptr,it__map__keys__unsafe_size,it__map__keys__unsafe_offset,it__map__keys__unsafe_align,&it____t2560t,&__t2562t__unsafe_ptr,&__t2562t__dat__pos,&__t2562t__dat__length,&__t2562t__dat__first);
  __t2561t=__t_complain;
  key__unsafe_ptr=__t2562t__unsafe_ptr;
  key__dat__pos=__t2562t__dat__pos;
  key__dat__length=__t2562t__dat__length;
  key__dat__first=__t2562t__dat__first;
  __t2561t=__t2561t==0;
  if(!__t2561t){
  break;
  }
  print__t1131t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  goto __t_return;
  
  __t_failure:exists__t591t(map__keys__unsafe_ptr,&__t2548t____t2460t____t692t__);
  if(__t2548t____t2460t____t692t__){
  free__t661t(&map__keys__unsafe_ptr);
  }
  exists__t591t(map__values__unsafe_ptr,&__t2546t____t692t__);
  if(__t2546t____t692t__){
  free__t661t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2761t=buf__buf__unsafe_ptr;
  *__t2762t=buf__buf__unsafe_size;
  *__t2763t=buf__buf__unsafe_offset;
  *__t2764t=buf__buf__unsafe_align;
  *__t2765t=buf__pos;
  *__t2766t=map__keys__unsafe_ptr;
  *__t2767t=map__keys__unsafe_size;
  *__t2768t=map__keys__unsafe_offset;
  *__t2769t=map__keys__unsafe_align;
  *__t2770t=map__values__unsafe_ptr;
  *__t2771t=map__values__unsafe_size;
  *__t2772t=map__values__unsafe_offset;
  *__t2773t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2564t(char** __t2774t, uint64_t* __t2775t, uint16_t* __t2776t, uint16_t* __t2777t, char** __t2778t, uint64_t* __t2779t, uint16_t* __t2780t, uint16_t* __t2781t, char** __t2782t, uint64_t* __t2783t, uint16_t* __t2784t, uint16_t* __t2785t, uint64_t* __t2786t) {
  char* __t2567t__unsafe_ptr=0;
  uint64_t __t2567t__unsafe_size=0;
  uint16_t __t2567t__unsafe_offset=0;
  uint16_t __t2567t__unsafe_align=0;
  uint64_t __t2568t=0;
  uint64_t __t2569t__=0;
  char* __t2570t__unsafe_ptr=0;
  uint64_t __t2570t__unsafe_size=0;
  uint16_t __t2570t__unsafe_offset=0;
  uint16_t __t2570t__unsafe_align=0;
  char __t2571t____t692t__=0;
  char* __t2572t__buf__unsafe_ptr=0;
  uint64_t __t2572t__buf__unsafe_size=0;
  uint16_t __t2572t__buf__unsafe_offset=0;
  uint16_t __t2572t__buf__unsafe_align=0;
  uint64_t __t2572t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2573t__keys__unsafe_ptr=0;
  uint64_t __t2573t__keys__unsafe_size=0;
  uint16_t __t2573t__keys__unsafe_offset=0;
  uint16_t __t2573t__keys__unsafe_align=0;
  char* __t2573t__values__unsafe_ptr=0;
  uint64_t __t2573t__values__unsafe_size=0;
  uint16_t __t2573t__values__unsafe_offset=0;
  uint16_t __t2573t__values__unsafe_align=0;
  char __t2574t____t2546t____t692t__=0;
  char __t2574t____t2548t____t2460t____t692t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2565t(&__t2567t__unsafe_ptr,&__t2567t__unsafe_size,&__t2567t__unsafe_offset,&__t2567t__unsafe_align);
  __t2568t=4;
  KB__t639t(__t2568t,&__t2569t__);
  __t_errcode=alloc__t690t(&__t2567t__unsafe_ptr,&__t2567t__unsafe_size,&__t2567t__unsafe_offset,&__t2567t__unsafe_align,__t2569t__,&__t2570t__unsafe_ptr,&__t2570t__unsafe_size,&__t2570t__unsafe_offset,&__t2570t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2570t__unsafe_ptr,&__t2570t__unsafe_size,&__t2570t__unsafe_offset,&__t2570t__unsafe_align,&__t2572t__buf__unsafe_ptr,&__t2572t__buf__unsafe_size,&__t2572t__buf__unsafe_offset,&__t2572t__buf__unsafe_align,&__t2572t__pos);
  buf__buf__unsafe_ptr=__t2572t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2572t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2572t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2572t__buf__unsafe_align;
  buf__pos=__t2572t__pos;
  __t_errcode=test__t2542t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2573t__keys__unsafe_ptr,&__t2573t__keys__unsafe_size,&__t2573t__keys__unsafe_offset,&__t2573t__keys__unsafe_align,&__t2573t__values__unsafe_ptr,&__t2573t__values__unsafe_size,&__t2573t__values__unsafe_offset,&__t2573t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2573t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2573t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2573t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2573t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2573t__values__unsafe_ptr;
  map__values__unsafe_size=__t2573t__values__unsafe_size;
  map__values__unsafe_offset=__t2573t__values__unsafe_offset;
  map__values__unsafe_align=__t2573t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(map__keys__unsafe_ptr,&__t2574t____t2548t____t2460t____t692t__);
  if(__t2574t____t2548t____t2460t____t692t__){
  free__t661t(&map__keys__unsafe_ptr);
  }
  exists__t591t(map__values__unsafe_ptr,&__t2574t____t2546t____t692t__);
  if(__t2574t____t2546t____t692t__){
  free__t661t(&map__values__unsafe_ptr);
  }
  exists__t591t(buf__buf__unsafe_ptr,&__t2571t____t692t__);
  if(__t2571t____t692t__){
  free__t661t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2774t=map__keys__unsafe_ptr;
  *__t2775t=map__keys__unsafe_size;
  *__t2776t=map__keys__unsafe_offset;
  *__t2777t=map__keys__unsafe_align;
  *__t2778t=map__values__unsafe_ptr;
  *__t2779t=map__values__unsafe_size;
  *__t2780t=map__values__unsafe_offset;
  *__t2781t=map__values__unsafe_align;
  *__t2782t=buf__buf__unsafe_ptr;
  *__t2783t=buf__buf__unsafe_size;
  *__t2784t=buf__buf__unsafe_offset;
  *__t2785t=buf__buf__unsafe_align;
  *__t2786t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t2065t(const char* r, char** __t2787t, uint64_t* __t2788t, uint64_t* __t2789t, char* __t2790t) {
  char* __t2066t__unsafe_ptr=0;
  uint64_t __t2066t__dat__pos=0;
  uint64_t __t2066t__dat__length=0;
  char __t2066t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(r,&__t2066t__unsafe_ptr,&__t2066t__dat__pos,&__t2066t__dat__length,&__t2066t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2787t=__t2066t__unsafe_ptr;
  *__t2788t=__t2066t__dat__pos;
  *__t2789t=__t2066t__dat__length;
  *__t2790t=__t2066t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t2110t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2791t) {
  char* __t2111t__unsafe_ptr=0;
  uint64_t __t2111t__dat__pos=0;
  uint64_t __t2111t__dat__length=0;
  char __t2111t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t2112t__=0;
  uint64_t __t2113t=0;
  uint64_t __t2114t=0;
  char* __t2115t__=0;
  char* __t2116t__s__unsafe_ptr=0;
  uint64_t __t2116t__s__dat__pos=0;
  uint64_t __t2116t__s__dat__length=0;
  char __t2116t__s__dat__first=0;
  uint64_t __t2116t__cost=0;
  char* __t2117t__unsafe_ptr=0;
  uint64_t __t2117t__dat__pos=0;
  uint64_t __t2117t__dat__length=0;
  char __t2117t__dat__first=0;
  int __t2118t=0;
  int __t2119t__=0;
  uint64_t __t2120t__=0;
  uint64_t n=0;
  uint64_t __t2121t__=0;
  uint64_t pos=0;
  uint64_t __t2122t____t613t=0;
  uint64_t __t2122t__to=0;
  uint64_t __t2123t__from=0;
  uint64_t __t2123t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2124t=0;
  uint64_t __t2125t__=0;
  uint64_t i=0;
  uint64_t __t2126t__=0;
  uint64_t __t2127t=0;
  uint64_t idx=0;
  char __t2128t__=0;
  uint64_t __t2129t__=0;
  uint64_t __t2130t=0;
  char __t2131t__=0;
  char* __t2132t__=0;
  char* __t2133t__s__unsafe_ptr=0;
  uint64_t __t2133t__s__dat__pos=0;
  uint64_t __t2133t__s__dat__length=0;
  char __t2133t__s__dat__first=0;
  uint64_t __t2133t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t2134t__unsafe_ptr=0;
  uint64_t __t2134t__dat__pos=0;
  uint64_t __t2134t__dat__length=0;
  char __t2134t__dat__first=0;
  char __t2135t__=0;
  char* __t2136t__unsafe_ptr=0;
  uint64_t __t2136t__dat__pos=0;
  uint64_t __t2136t__dat__length=0;
  char __t2136t__dat__first=0;
  char __t2137t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t2063t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t2111t__unsafe_ptr,&__t2111t__dat__pos,&__t2111t__dat__length,&__t2111t__dat__first);
  k__unsafe_ptr=__t2111t__unsafe_ptr;
  k__dat__pos=__t2111t__dat__pos;
  k__dat__length=__t2111t__dat__length;
  k__dat__first=__t2111t__dat__first;
  is_zero__t2067t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2112t__);
  if(__t2112t__){
  __t2113t=0;
  goto __t_return;
  }
  __t2114t=0;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t2114t,&__t2115t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2115t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2116t__s__unsafe_ptr,__t2115t__,8);
  memcpy(&__t2116t__s__dat__pos,__t2115t__+8,8);
  memcpy(&__t2116t__s__dat__length,__t2115t__+16,8);
  memcpy(&__t2116t__s__dat__first,__t2115t__+24,1);
  memcpy(&__t2116t__cost,__t2115t__+25,8);
  raw__t2061t(__t2116t__s__unsafe_ptr,__t2116t__s__dat__pos,__t2116t__s__dat__length,__t2116t__s__dat__first,__t2116t__cost,&__t2117t__unsafe_ptr,&__t2117t__dat__pos,&__t2117t__dat__length,&__t2117t__dat__first);
  not__t37t(__t2118t,&__t2119t__);
  len__t805t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t2120t__);
  n=__t2120t__;
  __t_errcode=hash__t2011t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t2121t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t2121t__;
  of__t612t(n,&__t2122t____t613t,&__t2122t__to);
  range__t629t(__t2122t____t613t,__t2122t__to,&__t2123t__from,&__t2123t__to);
  iter__from=__t2123t__from;
  iter__to=__t2123t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2125t__);
  __t2124t=__t_complain;
  i=__t2125t__;
  __t2124t=__t2124t==0;
  if(!__t2124t){
  break;
  }
  add__t175t(pos,i,&__t2126t__);
  __t2127t=__t2126t__;
  idx=__t2127t;
  ge__t324t(idx,n,&__t2128t__);
  if(__t2128t__){
  __t_errcode=sub__t352t(idx,n,&__t2129t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t2129t__;
  }
  __t2130t=0;
  eq__t120t(idx,__t2130t,&__t2131t__);
  if(__t2131t__){
  continue;
  }
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2132t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2132t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2133t__s__unsafe_ptr,__t2132t__,8);
  memcpy(&__t2133t__s__dat__pos,__t2132t__+8,8);
  memcpy(&__t2133t__s__dat__length,__t2132t__+16,8);
  memcpy(&__t2133t__s__dat__first,__t2132t__+24,1);
  memcpy(&__t2133t__cost,__t2132t__+25,8);
  entry__s__unsafe_ptr=__t2133t__s__unsafe_ptr;
  entry__s__dat__pos=__t2133t__s__dat__pos;
  entry__s__dat__length=__t2133t__s__dat__length;
  entry__s__dat__first=__t2133t__s__dat__first;
  entry__cost=__t2133t__cost;
  raw__t2061t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2134t__unsafe_ptr,&__t2134t__dat__pos,&__t2134t__dat__length,&__t2134t__dat__first);
  is_zero__t2067t(__t2134t__unsafe_ptr,__t2134t__dat__pos,__t2134t__dat__length,__t2134t__dat__first,&__t2135t__);
  if(__t2135t__){
  continue;
  }
  raw__t2061t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2136t__unsafe_ptr,&__t2136t__dat__pos,&__t2136t__dat__length,&__t2136t__dat__first);
  eq__t1076t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t2136t__unsafe_ptr,__t2136t__dat__pos,__t2136t__dat__length,__t2136t__dat__first,&__t2137t__);
  if(__t2137t__){
  __t2113t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2791t=__t2113t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2469t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2792t) {
  char* __t2470t__unsafe_ptr=0;
  uint64_t __t2470t__dat__pos=0;
  uint64_t __t2470t__dat__length=0;
  char __t2470t__dat__first=0;
  uint64_t __t2471t__=0;
  char* __t2472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t2065t(key,&__t2470t__unsafe_ptr,&__t2470t__dat__pos,&__t2470t__dat__length,&__t2470t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t2110t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2470t__unsafe_ptr,__t2470t__dat__pos,__t2470t__dat__length,__t2470t__dat__first,&__t2471t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t798t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2471t__,&__t2472t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2792t=__t2472t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2575t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2576t__=0;
  char* __t2577t__unsafe_ptr=0;
  uint64_t __t2577t__dat__pos=0;
  uint64_t __t2577t__dat__length=0;
  char __t2577t__dat__first=0;
  char* __t2579t__=0;
  char* __t2580t__unsafe_ptr=0;
  uint64_t __t2580t__dat__pos=0;
  uint64_t __t2580t__dat__length=0;
  char __t2580t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2469t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2549t,&__t2576t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2576t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2577t__unsafe_ptr,__t2576t__,8);
  memcpy(&__t2577t__dat__pos,__t2576t__+8,8);
  memcpy(&__t2577t__dat__length,__t2576t__+16,8);
  memcpy(&__t2577t__dat__first,__t2576t__+24,1);
  print__t1131t(__t2577t__unsafe_ptr,__t2577t__dat__pos,__t2577t__dat__length,__t2577t__dat__first);
  __t_errcode=get__t2469t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2554t,&__t2579t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2579t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2580t__unsafe_ptr,__t2579t__,8);
  memcpy(&__t2580t__dat__pos,__t2579t__+8,8);
  memcpy(&__t2580t__dat__length,__t2579t__+16,8);
  memcpy(&__t2580t__dat__first,__t2579t__+24,1);
  print__t1131t(__t2580t__unsafe_ptr,__t2580t__dat__pos,__t2580t__dat__length,__t2580t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2582t() {
  char* __t2584t__map__keys__unsafe_ptr=0;
  uint64_t __t2584t__map__keys__unsafe_size=0;
  uint16_t __t2584t__map__keys__unsafe_offset=0;
  uint16_t __t2584t__map__keys__unsafe_align=0;
  char* __t2584t__map__values__unsafe_ptr=0;
  uint64_t __t2584t__map__values__unsafe_size=0;
  uint16_t __t2584t__map__values__unsafe_offset=0;
  uint16_t __t2584t__map__values__unsafe_align=0;
  char* __t2584t__buf__buf__unsafe_ptr=0;
  uint64_t __t2584t__buf__buf__unsafe_size=0;
  uint16_t __t2584t__buf__buf__unsafe_offset=0;
  uint16_t __t2584t__buf__buf__unsafe_align=0;
  uint64_t __t2584t__buf__pos=0;
  char __t2585t____t2571t____t692t__=0;
  char __t2585t____t2574t____t2546t____t692t__=0;
  char __t2585t____t2574t____t2548t____t2460t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2564t(&__t2584t__map__keys__unsafe_ptr,&__t2584t__map__keys__unsafe_size,&__t2584t__map__keys__unsafe_offset,&__t2584t__map__keys__unsafe_align,&__t2584t__map__values__unsafe_ptr,&__t2584t__map__values__unsafe_size,&__t2584t__map__values__unsafe_offset,&__t2584t__map__values__unsafe_align,&__t2584t__buf__buf__unsafe_ptr,&__t2584t__buf__buf__unsafe_size,&__t2584t__buf__buf__unsafe_offset,&__t2584t__buf__buf__unsafe_align,&__t2584t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2575t(__t2584t__map__keys__unsafe_ptr,__t2584t__map__keys__unsafe_size,__t2584t__map__keys__unsafe_offset,__t2584t__map__keys__unsafe_align,__t2584t__map__values__unsafe_ptr,__t2584t__map__values__unsafe_size,__t2584t__map__values__unsafe_offset,__t2584t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2584t__map__keys__unsafe_ptr,&__t2585t____t2574t____t2548t____t2460t____t692t__);
  if(__t2585t____t2574t____t2548t____t2460t____t692t__){
  free__t661t(&__t2584t__map__keys__unsafe_ptr);
  }
  exists__t591t(__t2584t__map__values__unsafe_ptr,&__t2585t____t2574t____t2546t____t692t__);
  if(__t2585t____t2574t____t2546t____t692t__){
  free__t661t(&__t2584t__map__values__unsafe_ptr);
  }
  exists__t591t(__t2584t__buf__buf__unsafe_ptr,&__t2585t____t2571t____t692t__);
  if(__t2585t____t2571t____t692t__){
  free__t661t(&__t2584t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2582t();return 0;}