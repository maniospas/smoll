#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2556t="hello world!";
const char* const __t2560t="it's a me, manio.";
const char* const __t2554t="hello";
const char* const __t2558t="manio";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2540t(char** __t2577t, uint64_t* __t2578t, uint16_t* __t2579t, uint16_t* __t2580t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2577t=unsafe_ptr;
  *__t2578t=unsafe_size;
  *__t2579t=unsafe_offset;
  *__t2580t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2581t) {
  int value=0;
  *__t2581t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2582t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2582t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2583t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2583t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2584t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2584t=z;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t2585t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t2585t=__t641t__;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2586t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2586t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2587t) {
  char* allocated=*__t2587t;
  if(allocated){
  free(allocated);
  }
  *__t2587t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2588t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2588t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2589t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2589t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2590t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2590t=value;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2591t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2591t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2592t) {
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
  *__t2592t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2593t, uint64_t* __t2594t, uint16_t* __t2595t, uint16_t* __t2596t, uint64_t size, char** __t2597t, uint64_t* __t2598t, uint16_t* __t2599t, uint16_t* __t2600t) {
  char* buffer__unsafe_ptr=*__t2593t;
  uint64_t buffer__unsafe_size=*__t2594t;
  uint16_t buffer__unsafe_offset=*__t2595t;
  uint16_t buffer__unsafe_align=*__t2596t;
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
  *__t2593t=buffer__unsafe_ptr;
  *__t2594t=buffer__unsafe_size;
  *__t2595t=buffer__unsafe_offset;
  *__t2596t=buffer__unsafe_align;
  *__t2597t=buffer__unsafe_ptr;
  *__t2598t=buffer__unsafe_size;
  *__t2599t=buffer__unsafe_offset;
  *__t2600t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2601t, uint64_t* __t2602t, uint16_t* __t2603t, uint16_t* __t2604t, uint64_t _pos, char** __t2605t, uint64_t* __t2606t, uint16_t* __t2607t, uint16_t* __t2608t, uint64_t* __t2609t) {
  char* buf__unsafe_ptr=*__t2601t;
  uint64_t buf__unsafe_size=*__t2602t;
  uint16_t buf__unsafe_offset=*__t2603t;
  uint16_t buf__unsafe_align=*__t2604t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2601t=buf__unsafe_ptr;
  *__t2602t=buf__unsafe_size;
  *__t2603t=buf__unsafe_offset;
  *__t2604t=buf__unsafe_align;
  *__t2605t=buf__unsafe_ptr;
  *__t2606t=buf__unsafe_size;
  *__t2607t=buf__unsafe_offset;
  *__t2608t=buf__unsafe_align;
  *__t2609t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2610t, uint64_t* __t2611t, uint16_t* __t2612t, uint16_t* __t2613t, char** __t2614t, uint64_t* __t2615t, uint16_t* __t2616t, uint16_t* __t2617t, uint64_t* __t2618t) {
  char* buf__unsafe_ptr=*__t2610t;
  uint64_t buf__unsafe_size=*__t2611t;
  uint16_t buf__unsafe_offset=*__t2612t;
  uint16_t buf__unsafe_align=*__t2613t;
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
  *__t2610t=buf__unsafe_ptr;
  *__t2611t=buf__unsafe_size;
  *__t2612t=buf__unsafe_offset;
  *__t2613t=buf__unsafe_align;
  *__t2614t=__t815t__buf__unsafe_ptr;
  *__t2615t=__t815t__buf__unsafe_size;
  *__t2616t=__t815t__buf__unsafe_offset;
  *__t2617t=__t815t__buf__unsafe_align;
  *__t2618t=__t815t__pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2534t(char** __t2619t, uint64_t* __t2620t, uint16_t* __t2621t, uint16_t* __t2622t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2619t=unsafe_ptr;
  *__t2620t=unsafe_size;
  *__t2621t=unsafe_offset;
  *__t2622t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t2454t(char** __t2623t, uint64_t* __t2624t, uint16_t* __t2625t, uint16_t* __t2626t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2623t=unsafe_ptr;
  *__t2624t=unsafe_size;
  *__t2625t=unsafe_offset;
  *__t2626t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2627t) {
  goto __t_return;
  __t_return:
  *__t2627t=buffer__unsafe_size;
}

int strmap__t2453t(char** __t2628t, uint64_t* __t2629t, uint16_t* __t2630t, uint16_t* __t2631t, char** __t2632t, uint64_t* __t2633t, uint16_t* __t2634t, uint16_t* __t2635t, char** __t2636t, uint64_t* __t2637t, uint16_t* __t2638t, uint16_t* __t2639t) {
  char* values__unsafe_ptr=*__t2628t;
  uint64_t values__unsafe_size=*__t2629t;
  uint16_t values__unsafe_offset=*__t2630t;
  uint16_t values__unsafe_align=*__t2631t;
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
  *__t2628t=values__unsafe_ptr;
  *__t2629t=values__unsafe_size;
  *__t2630t=values__unsafe_offset;
  *__t2631t=values__unsafe_align;
  *__t2632t=keys__unsafe_ptr;
  *__t2633t=keys__unsafe_size;
  *__t2634t=keys__unsafe_offset;
  *__t2635t=keys__unsafe_align;
  *__t2636t=values__unsafe_ptr;
  *__t2637t=values__unsafe_size;
  *__t2638t=values__unsafe_offset;
  *__t2639t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2640t, uint64_t* __t2641t, uint16_t* __t2642t, uint16_t* __t2643t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2640t=unsafe_ptr;
  *__t2641t=unsafe_size;
  *__t2642t=unsafe_offset;
  *__t2643t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2644t) {
  *__t2644t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2645t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2645t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2646t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2646t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2647t) {
  *__t2647t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2648t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2648t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2649t) {
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
  *__t2649t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2650t, uint64_t* __t2651t, uint64_t* __t2652t, char* __t2653t) {
  goto __t_return;
  __t_return:
  *__t2650t=unsafe_ptr;
  *__t2651t=dat__pos;
  *__t2652t=dat__length;
  *__t2653t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2654t, uint64_t* __t2655t, uint64_t* __t2656t, char* __t2657t) {
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
  *__t2654t=__t952t__unsafe_ptr;
  *__t2655t=__t952t__dat__pos;
  *__t2656t=__t952t__dat__length;
  *__t2657t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2658t, uint64_t* __t2659t, uint64_t* __t2660t, char* __t2661t) {
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
  *__t2658t=__t982t__unsafe_ptr;
  *__t2659t=__t982t__dat__pos;
  *__t2660t=__t982t__dat__length;
  *__t2661t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2662t, uint64_t* __t2663t, uint64_t* __t2664t, char* __t2665t) {
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
  *__t2662t=__t1005t__unsafe_ptr;
  *__t2663t=__t1005t__dat__pos;
  *__t2664t=__t1005t__dat__length;
  *__t2665t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t2063t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2666t, uint64_t* __t2667t, uint64_t* __t2668t, char* __t2669t) {
  goto __t_return;
  __t_return:
  *__t2666t=r__unsafe_ptr;
  *__t2667t=r__dat__pos;
  *__t2668t=r__dat__length;
  *__t2669t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2670t) {
  goto __t_return;
  __t_return:
  *__t2670t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t2067t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2671t) {
  uint64_t __t2068t=0;
  uint64_t __t2069t__=0;
  char __t2070t__=0;
  __t2068t=0;
  len__t1006t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2069t__);
  eq__t120t(__t2068t,__t2069t__,&__t2070t__);
  goto __t_return;
  __t_return:
  *__t2671t=__t2070t__;
}

static inline __attribute__((always_inline)) void raw__t2061t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2672t, uint64_t* __t2673t, uint64_t* __t2674t, char* __t2675t) {
  goto __t_return;
  __t_return:
  *__t2672t=r__s__unsafe_ptr;
  *__t2673t=r__s__dat__pos;
  *__t2674t=r__s__dat__length;
  *__t2675t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2676t, uint64_t* __t2677t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2676t=__t613t;
  *__t2677t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2678t, uint64_t* __t2679t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2678t=from;
  *__t2679t=to;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t2680t, uint64_t r__to, uint64_t* __t2681t) {
  uint64_t r__from=*__t2680t;
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
  *__t2680t=r__from;
  *__t2681t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t592t(uint64_t value, uint64_t* __t2682t) {
  goto __t_return;
  __t_return:
  *__t2682t=value;
}

static inline __attribute__((always_inline)) void lshift__t602t(uint64_t x__value, uint64_t y, uint64_t* __t2683t) {
  uint64_t z=0;
  uint64_t __t603t__value=0;
  z=(x__value<<y);
  bits__t592t(z,&__t603t__value);
  goto __t_return;
  __t_return:
  *__t2683t=__t603t__value;
}

static inline __attribute__((always_inline)) void nat__t587t(uint64_t x, uint64_t* __t2684t) {
  int __t588t=0;
  int __t589t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2684t=value;
}

static inline __attribute__((always_inline)) void nat__t598t(uint64_t x__value, uint64_t* __t2685t) {
  uint64_t __t599t__=0;
  nat__t587t(x__value,&__t599t__);
  goto __t_return;
  __t_return:
  *__t2685t=__t599t__;
}

static inline __attribute__((always_inline)) void get__t1133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2686t) {
  uint64_t __t1134t__=0;
  char* __t1135t__=0;
  add__t175t(s__dat__pos,i,&__t1134t__);
  add__t663t(s__unsafe_ptr,__t1134t__,&__t1135t__);
  goto __t_return;
  __t_return:
  *__t2686t=__t1135t__;
}

static inline __attribute__((always_inline)) void nat__t590t(char x, uint64_t* __t2687t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2687t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2688t) {
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
  *__t2688t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t2011t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2689t) {
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
  *__t2689t=__t2028t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2690t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2690t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2691t) {
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
  *__t2691t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2692t, uint64_t* __t2693t, uint16_t* __t2694t, uint16_t* __t2695t, uint64_t i, char** __t2696t) {
  char* buffer__unsafe_ptr=*__t2692t;
  uint64_t buffer__unsafe_size=*__t2693t;
  uint16_t buffer__unsafe_offset=*__t2694t;
  uint16_t buffer__unsafe_align=*__t2695t;
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
  *__t2692t=buffer__unsafe_ptr;
  *__t2693t=buffer__unsafe_size;
  *__t2694t=buffer__unsafe_offset;
  *__t2695t=buffer__unsafe_align;
  *__t2696t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1010t(char x, char y, char* __t2697t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2697t=z;
}

static inline __attribute__((always_inline)) void eq__t1076t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2698t) {
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
  *__t2698t=__t1080t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2699t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2699t=z;
}

int at__t2350t(char** __t2700t, uint64_t* __t2701t, uint16_t* __t2702t, uint16_t* __t2703t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2704t) {
  char* data__unsafe_ptr=*__t2700t;
  uint64_t data__unsafe_size=*__t2701t;
  uint16_t data__unsafe_offset=*__t2702t;
  uint16_t data__unsafe_align=*__t2703t;
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
  *__t2700t=data__unsafe_ptr;
  *__t2701t=data__unsafe_size;
  *__t2702t=data__unsafe_offset;
  *__t2703t=data__unsafe_align;
  *__t2704t=__t2353t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2477t(char** __t2705t, uint64_t* __t2706t, uint16_t* __t2707t, uint16_t* __t2708t, char** __t2709t, uint64_t* __t2710t, uint16_t* __t2711t, uint16_t* __t2712t, const char* key, char** __t2713t) {
  char* keys__unsafe_ptr=*__t2705t;
  uint64_t keys__unsafe_size=*__t2706t;
  uint16_t keys__unsafe_offset=*__t2707t;
  uint16_t keys__unsafe_align=*__t2708t;
  char* values__unsafe_ptr=*__t2709t;
  uint64_t values__unsafe_size=*__t2710t;
  uint16_t values__unsafe_offset=*__t2711t;
  uint16_t values__unsafe_align=*__t2712t;
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
  *__t2705t=keys__unsafe_ptr;
  *__t2706t=keys__unsafe_size;
  *__t2707t=keys__unsafe_offset;
  *__t2708t=keys__unsafe_align;
  *__t2709t=values__unsafe_ptr;
  *__t2710t=values__unsafe_size;
  *__t2711t=values__unsafe_offset;
  *__t2712t=values__unsafe_align;
  *__t2713t=__t2480t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2714t, uint64_t* __t2715t, uint16_t* __t2716t, uint16_t* __t2717t, uint64_t pos, char** __t2718t, uint64_t* __t2719t, uint16_t* __t2720t, uint16_t* __t2721t, uint64_t* __t2722t) {
  char* buf__unsafe_ptr=*__t2714t;
  uint64_t buf__unsafe_size=*__t2715t;
  uint16_t buf__unsafe_offset=*__t2716t;
  uint16_t buf__unsafe_align=*__t2717t;
  goto __t_return;
  __t_return:
  *__t2714t=buf__unsafe_ptr;
  *__t2715t=buf__unsafe_size;
  *__t2716t=buf__unsafe_offset;
  *__t2717t=buf__unsafe_align;
  *__t2718t=buf__unsafe_ptr;
  *__t2719t=buf__unsafe_size;
  *__t2720t=buf__unsafe_offset;
  *__t2721t=buf__unsafe_align;
  *__t2722t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2723t, uint64_t* __t2724t, uint16_t* __t2725t, uint16_t* __t2726t, uint64_t* __t2727t, uint64_t length, char** __t2728t, uint64_t* __t2729t, uint16_t* __t2730t, uint16_t* __t2731t, uint64_t* __t2732t) {
  char* allocator__buf__unsafe_ptr=*__t2723t;
  uint64_t allocator__buf__unsafe_size=*__t2724t;
  uint16_t allocator__buf__unsafe_offset=*__t2725t;
  uint16_t allocator__buf__unsafe_align=*__t2726t;
  uint64_t allocator__pos=*__t2727t;
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
  *__t2723t=allocator__buf__unsafe_ptr;
  *__t2724t=allocator__buf__unsafe_size;
  *__t2725t=allocator__buf__unsafe_offset;
  *__t2726t=allocator__buf__unsafe_align;
  *__t2727t=allocator__pos;
  *__t2728t=__t850t__buf__unsafe_ptr;
  *__t2729t=__t850t__buf__unsafe_size;
  *__t2730t=__t850t__buf__unsafe_offset;
  *__t2731t=__t850t__buf__unsafe_align;
  *__t2732t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1028t(char** __t2733t, uint64_t* __t2734t, uint16_t* __t2735t, uint16_t* __t2736t, uint64_t* __t2737t, const char* _other, char** __t2738t, uint64_t* __t2739t, uint64_t* __t2740t, char* __t2741t) {
  char* CHARS__buf__unsafe_ptr=*__t2733t;
  uint64_t CHARS__buf__unsafe_size=*__t2734t;
  uint16_t CHARS__buf__unsafe_offset=*__t2735t;
  uint16_t CHARS__buf__unsafe_align=*__t2736t;
  uint64_t CHARS__pos=*__t2737t;
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__dat__pos=0;
  uint64_t __t1029t__dat__length=0;
  char __t1029t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1030t__=0;
  char* __t1031t__buf__unsafe_ptr=0;
  uint64_t __t1031t__buf__unsafe_size=0;
  uint16_t __t1031t__buf__unsafe_offset=0;
  uint16_t __t1031t__buf__unsafe_align=0;
  uint64_t __t1031t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1032t__unsafe_ptr=0;
  uint64_t __t1032t__dat__pos=0;
  uint64_t __t1032t__dat__length=0;
  char __t1032t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(_other,&__t1029t__unsafe_ptr,&__t1029t__dat__pos,&__t1029t__dat__length,&__t1029t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1029t__unsafe_ptr;
  other__dat__pos=__t1029t__dat__pos;
  other__dat__length=__t1029t__dat__length;
  other__dat__first=__t1029t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1030t__);
  __t_errcode=alloc__t843t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1030t__,&__t1031t__buf__unsafe_ptr,&__t1031t__buf__unsafe_size,&__t1031t__buf__unsafe_offset,&__t1031t__buf__unsafe_align,&__t1031t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1031t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1031t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1031t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1031t__buf__unsafe_align;
  surface__pos=__t1031t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1032t__unsafe_ptr,&__t1032t__dat__pos,&__t1032t__dat__length,&__t1032t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2733t=CHARS__buf__unsafe_ptr;
  *__t2734t=CHARS__buf__unsafe_size;
  *__t2735t=CHARS__buf__unsafe_offset;
  *__t2736t=CHARS__buf__unsafe_align;
  *__t2737t=CHARS__pos;
  *__t2738t=__t1032t__unsafe_ptr;
  *__t2739t=__t1032t__dat__pos;
  *__t2740t=__t1032t__dat__length;
  *__t2741t=__t1032t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int create_map__t2539t(char** __t2742t, uint64_t* __t2743t, uint16_t* __t2744t, uint16_t* __t2745t, char** __t2746t, uint64_t* __t2747t, uint16_t* __t2748t, uint16_t* __t2749t, char** __t2750t, uint64_t* __t2751t, uint16_t* __t2752t, uint16_t* __t2753t, uint64_t* __t2754t) {
  char* __t2542t__unsafe_ptr=0;
  uint64_t __t2542t__unsafe_size=0;
  uint16_t __t2542t__unsafe_offset=0;
  uint16_t __t2542t__unsafe_align=0;
  uint64_t __t2543t=0;
  uint64_t __t2544t__=0;
  char* __t2545t__unsafe_ptr=0;
  uint64_t __t2545t__unsafe_size=0;
  uint16_t __t2545t__unsafe_offset=0;
  uint16_t __t2545t__unsafe_align=0;
  char __t2546t____t692t__=0;
  char* __t2547t__buf__unsafe_ptr=0;
  uint64_t __t2547t__buf__unsafe_size=0;
  uint16_t __t2547t__buf__unsafe_offset=0;
  uint16_t __t2547t__buf__unsafe_align=0;
  uint64_t __t2547t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2548t__unsafe_ptr=0;
  uint64_t __t2548t__unsafe_size=0;
  uint16_t __t2548t__unsafe_offset=0;
  uint16_t __t2548t__unsafe_align=0;
  uint64_t __t2549t=0;
  char* __t2550t__unsafe_ptr=0;
  uint64_t __t2550t__unsafe_size=0;
  uint16_t __t2550t__unsafe_offset=0;
  uint16_t __t2550t__unsafe_align=0;
  char __t2551t____t692t__=0;
  char* __t2552t__keys__unsafe_ptr=0;
  uint64_t __t2552t__keys__unsafe_size=0;
  uint16_t __t2552t__keys__unsafe_offset=0;
  uint16_t __t2552t__keys__unsafe_align=0;
  char* __t2552t__values__unsafe_ptr=0;
  uint64_t __t2552t__values__unsafe_size=0;
  uint16_t __t2552t__values__unsafe_offset=0;
  uint16_t __t2552t__values__unsafe_align=0;
  char __t2553t____t2460t____t692t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2555t__=0;
  char* __t2557t__unsafe_ptr=0;
  uint64_t __t2557t__dat__pos=0;
  uint64_t __t2557t__dat__length=0;
  char __t2557t__dat__first=0;
  char* __t2559t__=0;
  char* __t2561t__unsafe_ptr=0;
  uint64_t __t2561t__dat__pos=0;
  uint64_t __t2561t__dat__length=0;
  char __t2561t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2540t(&__t2542t__unsafe_ptr,&__t2542t__unsafe_size,&__t2542t__unsafe_offset,&__t2542t__unsafe_align);
  __t2543t=4;
  KB__t639t(__t2543t,&__t2544t__);
  __t_errcode=alloc__t690t(&__t2542t__unsafe_ptr,&__t2542t__unsafe_size,&__t2542t__unsafe_offset,&__t2542t__unsafe_align,__t2544t__,&__t2545t__unsafe_ptr,&__t2545t__unsafe_size,&__t2545t__unsafe_offset,&__t2545t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2545t__unsafe_ptr,&__t2545t__unsafe_size,&__t2545t__unsafe_offset,&__t2545t__unsafe_align,&__t2547t__buf__unsafe_ptr,&__t2547t__buf__unsafe_size,&__t2547t__buf__unsafe_offset,&__t2547t__buf__unsafe_align,&__t2547t__pos);
  CHARS__buf__unsafe_ptr=__t2547t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2547t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2547t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2547t__buf__unsafe_align;
  CHARS__pos=__t2547t__pos;
  str____t_buffer____buffer__t2534t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align);
  __t2549t=128;
  __t_errcode=alloc__t690t(&__t2548t__unsafe_ptr,&__t2548t__unsafe_size,&__t2548t__unsafe_offset,&__t2548t__unsafe_align,__t2549t,&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t2453t(&__t2550t__unsafe_ptr,&__t2550t__unsafe_size,&__t2550t__unsafe_offset,&__t2550t__unsafe_align,&__t2552t__keys__unsafe_ptr,&__t2552t__keys__unsafe_size,&__t2552t__keys__unsafe_offset,&__t2552t__keys__unsafe_align,&__t2552t__values__unsafe_ptr,&__t2552t__values__unsafe_size,&__t2552t__values__unsafe_offset,&__t2552t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2552t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2552t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2552t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2552t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2552t__values__unsafe_ptr;
  map__values__unsafe_size=__t2552t__values__unsafe_size;
  map__values__unsafe_offset=__t2552t__values__unsafe_offset;
  map__values__unsafe_align=__t2552t__values__unsafe_align;
  __t_errcode=mutget__t2477t(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__t2554t,&__t2555t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1028t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2556t,&__t2557t__unsafe_ptr,&__t2557t__dat__pos,&__t2557t__dat__length,&__t2557t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2555t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2555t__,&__t2557t__unsafe_ptr,8);
  memcpy(__t2555t__+8,&__t2557t__dat__pos,8);
  memcpy(__t2555t__+16,&__t2557t__dat__length,8);
  memcpy(__t2555t__+24,&__t2557t__dat__first,1);
  __t_errcode=mutget__t2477t(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__t2558t,&__t2559t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1028t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2560t,&__t2561t__unsafe_ptr,&__t2561t__dat__pos,&__t2561t__dat__length,&__t2561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2559t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2559t__,&__t2561t__unsafe_ptr,8);
  memcpy(__t2559t__+8,&__t2561t__dat__pos,8);
  memcpy(__t2559t__+16,&__t2561t__dat__length,8);
  memcpy(__t2559t__+24,&__t2561t__dat__first,1);
  goto __t_return;
  
  __t_failure:exists__t591t(map__keys__unsafe_ptr,&__t2553t____t2460t____t692t__);
  if(__t2553t____t2460t____t692t__){
  free__t661t(&map__keys__unsafe_ptr);
  }
  exists__t591t(map__values__unsafe_ptr,&__t2551t____t692t__);
  if(__t2551t____t692t__){
  free__t661t(&map__values__unsafe_ptr);
  }
  exists__t591t(CHARS__buf__unsafe_ptr,&__t2546t____t692t__);
  if(__t2546t____t692t__){
  free__t661t(&CHARS__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2742t=map__keys__unsafe_ptr;
  *__t2743t=map__keys__unsafe_size;
  *__t2744t=map__keys__unsafe_offset;
  *__t2745t=map__keys__unsafe_align;
  *__t2746t=map__values__unsafe_ptr;
  *__t2747t=map__values__unsafe_size;
  *__t2748t=map__values__unsafe_offset;
  *__t2749t=map__values__unsafe_align;
  *__t2750t=CHARS__buf__unsafe_ptr;
  *__t2751t=CHARS__buf__unsafe_size;
  *__t2752t=CHARS__buf__unsafe_offset;
  *__t2753t=CHARS__buf__unsafe_align;
  *__t2754t=CHARS__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void test2__t2562t(char* s__keys__unsafe_ptr, uint64_t s__keys__unsafe_size, uint16_t s__keys__unsafe_offset, uint16_t s__keys__unsafe_align, char* s__values__unsafe_ptr, uint64_t s__values__unsafe_size, uint16_t s__values__unsafe_offset, uint16_t s__values__unsafe_align, char** __t2755t, uint64_t* __t2756t, uint16_t* __t2757t, uint16_t* __t2758t, char** __t2759t, uint64_t* __t2760t, uint16_t* __t2761t, uint16_t* __t2762t) {
  goto __t_return;
  __t_return:
  *__t2755t=s__keys__unsafe_ptr;
  *__t2756t=s__keys__unsafe_size;
  *__t2757t=s__keys__unsafe_offset;
  *__t2758t=s__keys__unsafe_align;
  *__t2759t=s__values__unsafe_ptr;
  *__t2760t=s__values__unsafe_size;
  *__t2761t=s__values__unsafe_offset;
  *__t2762t=s__values__unsafe_align;
}

static inline __attribute__((always_inline)) int test__t2563t(char** __t2763t, uint64_t* __t2764t, uint16_t* __t2765t, uint16_t* __t2766t, char** __t2767t, uint64_t* __t2768t, uint16_t* __t2769t, uint16_t* __t2770t) {
  char* __t2564t__map__keys__unsafe_ptr=0;
  uint64_t __t2564t__map__keys__unsafe_size=0;
  uint16_t __t2564t__map__keys__unsafe_offset=0;
  uint16_t __t2564t__map__keys__unsafe_align=0;
  char* __t2564t__map__values__unsafe_ptr=0;
  uint64_t __t2564t__map__values__unsafe_size=0;
  uint16_t __t2564t__map__values__unsafe_offset=0;
  uint16_t __t2564t__map__values__unsafe_align=0;
  char* __t2564t__CHARS__buf__unsafe_ptr=0;
  uint64_t __t2564t__CHARS__buf__unsafe_size=0;
  uint16_t __t2564t__CHARS__buf__unsafe_offset=0;
  uint16_t __t2564t__CHARS__buf__unsafe_align=0;
  uint64_t __t2564t__CHARS__pos=0;
  char __t2565t____t2546t____t692t__=0;
  char __t2565t____t2551t____t692t__=0;
  char __t2565t____t2553t____t2460t____t692t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2566t__keys__unsafe_ptr=0;
  uint64_t __t2566t__keys__unsafe_size=0;
  uint16_t __t2566t__keys__unsafe_offset=0;
  uint16_t __t2566t__keys__unsafe_align=0;
  char* __t2566t__values__unsafe_ptr=0;
  uint64_t __t2566t__values__unsafe_size=0;
  uint16_t __t2566t__values__unsafe_offset=0;
  uint16_t __t2566t__values__unsafe_align=0;
  char* ret__keys__unsafe_ptr=0;
  uint64_t ret__keys__unsafe_size=0;
  uint16_t ret__keys__unsafe_offset=0;
  uint16_t ret__keys__unsafe_align=0;
  char* ret__values__unsafe_ptr=0;
  uint64_t ret__values__unsafe_size=0;
  uint16_t ret__values__unsafe_offset=0;
  uint16_t ret__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=create_map__t2539t(&__t2564t__map__keys__unsafe_ptr,&__t2564t__map__keys__unsafe_size,&__t2564t__map__keys__unsafe_offset,&__t2564t__map__keys__unsafe_align,&__t2564t__map__values__unsafe_ptr,&__t2564t__map__values__unsafe_size,&__t2564t__map__values__unsafe_offset,&__t2564t__map__values__unsafe_align,&__t2564t__CHARS__buf__unsafe_ptr,&__t2564t__CHARS__buf__unsafe_size,&__t2564t__CHARS__buf__unsafe_offset,&__t2564t__CHARS__buf__unsafe_align,&__t2564t__CHARS__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2564t__map__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2564t__map__keys__unsafe_size;
  map__keys__unsafe_offset=__t2564t__map__keys__unsafe_offset;
  map__keys__unsafe_align=__t2564t__map__keys__unsafe_align;
  map__values__unsafe_ptr=__t2564t__map__values__unsafe_ptr;
  map__values__unsafe_size=__t2564t__map__values__unsafe_size;
  map__values__unsafe_offset=__t2564t__map__values__unsafe_offset;
  map__values__unsafe_align=__t2564t__map__values__unsafe_align;
  test2__t2562t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,&__t2566t__keys__unsafe_ptr,&__t2566t__keys__unsafe_size,&__t2566t__keys__unsafe_offset,&__t2566t__keys__unsafe_align,&__t2566t__values__unsafe_ptr,&__t2566t__values__unsafe_size,&__t2566t__values__unsafe_offset,&__t2566t__values__unsafe_align);
  ret__keys__unsafe_ptr=__t2566t__keys__unsafe_ptr;
  ret__keys__unsafe_size=__t2566t__keys__unsafe_size;
  ret__keys__unsafe_offset=__t2566t__keys__unsafe_offset;
  ret__keys__unsafe_align=__t2566t__keys__unsafe_align;
  ret__values__unsafe_ptr=__t2566t__values__unsafe_ptr;
  ret__values__unsafe_size=__t2566t__values__unsafe_size;
  ret__values__unsafe_offset=__t2566t__values__unsafe_offset;
  ret__values__unsafe_align=__t2566t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(ret__keys__unsafe_ptr,&__t2565t____t2553t____t2460t____t692t__);
  if(__t2565t____t2553t____t2460t____t692t__){
  free__t661t(&ret__keys__unsafe_ptr);
  }
  exists__t591t(ret__values__unsafe_ptr,&__t2565t____t2551t____t692t__);
  if(__t2565t____t2551t____t692t__){
  free__t661t(&ret__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2763t=ret__keys__unsafe_ptr;
  *__t2764t=ret__keys__unsafe_size;
  *__t2765t=ret__keys__unsafe_offset;
  *__t2766t=ret__keys__unsafe_align;
  *__t2767t=ret__values__unsafe_ptr;
  *__t2768t=ret__values__unsafe_size;
  *__t2769t=ret__values__unsafe_offset;
  *__t2770t=ret__values__unsafe_align;
  
  __t_skip_returns:exists__t591t(__t2564t__CHARS__buf__unsafe_ptr,&__t2565t____t2546t____t692t__);
  if(__t2565t____t2546t____t692t__){
  free__t661t(&__t2564t__CHARS__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int raw__t2065t(const char* r, char** __t2771t, uint64_t* __t2772t, uint64_t* __t2773t, char* __t2774t) {
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
  *__t2771t=__t2066t__unsafe_ptr;
  *__t2772t=__t2066t__dat__pos;
  *__t2773t=__t2066t__dat__length;
  *__t2774t=__t2066t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t2110t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2775t) {
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
  *__t2775t=__t2113t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2469t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2776t) {
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
  *__t2776t=__t2472t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2567t() {
  char* __t2569t__keys__unsafe_ptr=0;
  uint64_t __t2569t__keys__unsafe_size=0;
  uint16_t __t2569t__keys__unsafe_offset=0;
  uint16_t __t2569t__keys__unsafe_align=0;
  char* __t2569t__values__unsafe_ptr=0;
  uint64_t __t2569t__values__unsafe_size=0;
  uint16_t __t2569t__values__unsafe_offset=0;
  uint16_t __t2569t__values__unsafe_align=0;
  char __t2570t____t2565t____t2551t____t692t__=0;
  char __t2570t____t2565t____t2553t____t2460t____t692t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2571t__=0;
  char* __t2572t__unsafe_ptr=0;
  uint64_t __t2572t__dat__pos=0;
  uint64_t __t2572t__dat__length=0;
  char __t2572t__dat__first=0;
  char* __t2574t__=0;
  char* __t2575t__unsafe_ptr=0;
  uint64_t __t2575t__dat__pos=0;
  uint64_t __t2575t__dat__length=0;
  char __t2575t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t2563t(&__t2569t__keys__unsafe_ptr,&__t2569t__keys__unsafe_size,&__t2569t__keys__unsafe_offset,&__t2569t__keys__unsafe_align,&__t2569t__values__unsafe_ptr,&__t2569t__values__unsafe_size,&__t2569t__values__unsafe_offset,&__t2569t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2569t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2569t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2569t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2569t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2569t__values__unsafe_ptr;
  map__values__unsafe_size=__t2569t__values__unsafe_size;
  map__values__unsafe_offset=__t2569t__values__unsafe_offset;
  map__values__unsafe_align=__t2569t__values__unsafe_align;
  __t_errcode=get__t2469t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2554t,&__t2571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2571t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2572t__unsafe_ptr,__t2571t__,8);
  memcpy(&__t2572t__dat__pos,__t2571t__+8,8);
  memcpy(&__t2572t__dat__length,__t2571t__+16,8);
  memcpy(&__t2572t__dat__first,__t2571t__+24,1);
  print__t1131t(__t2572t__unsafe_ptr,__t2572t__dat__pos,__t2572t__dat__length,__t2572t__dat__first);
  __t_errcode=get__t2469t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2558t,&__t2574t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2574t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2575t__unsafe_ptr,__t2574t__,8);
  memcpy(&__t2575t__dat__pos,__t2574t__+8,8);
  memcpy(&__t2575t__dat__length,__t2574t__+16,8);
  memcpy(&__t2575t__dat__first,__t2574t__+24,1);
  print__t1131t(__t2575t__unsafe_ptr,__t2575t__dat__pos,__t2575t__dat__length,__t2575t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2569t__keys__unsafe_ptr,&__t2570t____t2565t____t2553t____t2460t____t692t__);
  if(__t2570t____t2565t____t2553t____t2460t____t692t__){
  free__t661t(&__t2569t__keys__unsafe_ptr);
  }
  exists__t591t(__t2569t__values__unsafe_ptr,&__t2570t____t2565t____t2551t____t692t__);
  if(__t2570t____t2565t____t2551t____t692t__){
  free__t661t(&__t2569t__values__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2567t();return 0;}