#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2560t="hello world!";
const char* const __t2565t="it's a me, manio.";
const char* const __t2558t="hello";
const char* const __t2563t="manio";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2574t(char** __t2596t, uint64_t* __t2597t, uint16_t* __t2598t, uint16_t* __t2599t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2596t=unsafe_ptr;
  *__t2597t=unsafe_size;
  *__t2598t=unsafe_offset;
  *__t2599t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2600t) {
  int value=0;
  *__t2600t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2601t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2601t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2602t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2602t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2603t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2603t=z;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t2604t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t2604t=__t641t__;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2605t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2606t) {
  char* allocated=*__t2606t;
  if(allocated){
  free(allocated);
  }
  *__t2606t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2607t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2607t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2608t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2608t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2609t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2609t=value;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2610t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2610t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2611t) {
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
  *__t2611t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2612t, uint64_t* __t2613t, uint16_t* __t2614t, uint16_t* __t2615t, uint64_t size, char** __t2616t, uint64_t* __t2617t, uint16_t* __t2618t, uint16_t* __t2619t) {
  char* buffer__unsafe_ptr=*__t2612t;
  uint64_t buffer__unsafe_size=*__t2613t;
  uint16_t buffer__unsafe_offset=*__t2614t;
  uint16_t buffer__unsafe_align=*__t2615t;
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
  buffer__unsafe_ptr=__t707t__;
  __t709t=0;
  zero__t662t(buffer__unsafe_ptr,__t709t,bytes);
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
  *__t2612t=buffer__unsafe_ptr;
  *__t2613t=buffer__unsafe_size;
  *__t2614t=buffer__unsafe_offset;
  *__t2615t=buffer__unsafe_align;
  *__t2616t=buffer__unsafe_ptr;
  *__t2617t=buffer__unsafe_size;
  *__t2618t=buffer__unsafe_offset;
  *__t2619t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2620t, uint64_t* __t2621t, uint16_t* __t2622t, uint16_t* __t2623t, uint64_t _pos, char** __t2624t, uint64_t* __t2625t, uint16_t* __t2626t, uint16_t* __t2627t, uint64_t* __t2628t) {
  char* buf__unsafe_ptr=*__t2620t;
  uint64_t buf__unsafe_size=*__t2621t;
  uint16_t buf__unsafe_offset=*__t2622t;
  uint16_t buf__unsafe_align=*__t2623t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2620t=buf__unsafe_ptr;
  *__t2621t=buf__unsafe_size;
  *__t2622t=buf__unsafe_offset;
  *__t2623t=buf__unsafe_align;
  *__t2624t=buf__unsafe_ptr;
  *__t2625t=buf__unsafe_size;
  *__t2626t=buf__unsafe_offset;
  *__t2627t=buf__unsafe_align;
  *__t2628t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t, char** __t2633t, uint64_t* __t2634t, uint16_t* __t2635t, uint16_t* __t2636t, uint64_t* __t2637t) {
  char* buf__unsafe_ptr=*__t2629t;
  uint64_t buf__unsafe_size=*__t2630t;
  uint16_t buf__unsafe_offset=*__t2631t;
  uint16_t buf__unsafe_align=*__t2632t;
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
  *__t2629t=buf__unsafe_ptr;
  *__t2630t=buf__unsafe_size;
  *__t2631t=buf__unsafe_offset;
  *__t2632t=buf__unsafe_align;
  *__t2633t=__t815t__buf__unsafe_ptr;
  *__t2634t=__t815t__buf__unsafe_size;
  *__t2635t=__t815t__buf__unsafe_offset;
  *__t2636t=__t815t__buf__unsafe_align;
  *__t2637t=__t815t__pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2542t(char** __t2638t, uint64_t* __t2639t, uint16_t* __t2640t, uint16_t* __t2641t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2638t=unsafe_ptr;
  *__t2639t=unsafe_size;
  *__t2640t=unsafe_offset;
  *__t2641t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t2462t(char** __t2642t, uint64_t* __t2643t, uint16_t* __t2644t, uint16_t* __t2645t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2642t=unsafe_ptr;
  *__t2643t=unsafe_size;
  *__t2644t=unsafe_offset;
  *__t2645t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2646t) {
  goto __t_return;
  __t_return:
  *__t2646t=buffer__unsafe_size;
}

int strmap__t2461t(char** __t2647t, uint64_t* __t2648t, uint16_t* __t2649t, uint16_t* __t2650t, char** __t2651t, uint64_t* __t2652t, uint16_t* __t2653t, uint16_t* __t2654t, char** __t2655t, uint64_t* __t2656t, uint16_t* __t2657t, uint16_t* __t2658t) {
  char* values__unsafe_ptr=*__t2647t;
  uint64_t values__unsafe_size=*__t2648t;
  uint16_t values__unsafe_offset=*__t2649t;
  uint16_t values__unsafe_align=*__t2650t;
  char* __t2464t__unsafe_ptr=0;
  uint64_t __t2464t__unsafe_size=0;
  uint16_t __t2464t__unsafe_offset=0;
  uint16_t __t2464t__unsafe_align=0;
  char* __t2465t__unsafe_ptr=0;
  uint64_t __t2465t__unsafe_size=0;
  uint16_t __t2465t__unsafe_offset=0;
  uint16_t __t2465t__unsafe_align=0;
  uint64_t __t2466t__=0;
  char* __t2467t__unsafe_ptr=0;
  uint64_t __t2467t__unsafe_size=0;
  uint16_t __t2467t__unsafe_offset=0;
  uint16_t __t2467t__unsafe_align=0;
  char __t2468t____t692t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t2462t(&__t2464t__unsafe_ptr,&__t2464t__unsafe_size,&__t2464t__unsafe_offset,&__t2464t__unsafe_align);
  __t2465t__unsafe_ptr=__t2464t__unsafe_ptr;
  __t2465t__unsafe_size=__t2464t__unsafe_size;
  __t2465t__unsafe_offset=__t2464t__unsafe_offset;
  __t2465t__unsafe_align=__t2464t__unsafe_align;
  len__t805t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t2466t__);
  __t_errcode=alloc__t690t(&__t2465t__unsafe_ptr,&__t2465t__unsafe_size,&__t2465t__unsafe_offset,&__t2465t__unsafe_align,__t2466t__,&__t2467t__unsafe_ptr,&__t2467t__unsafe_size,&__t2467t__unsafe_offset,&__t2467t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t2467t__unsafe_ptr;
  keys__unsafe_size=__t2467t__unsafe_size;
  keys__unsafe_offset=__t2467t__unsafe_offset;
  keys__unsafe_align=__t2467t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(keys__unsafe_ptr,&__t2468t____t692t__);
  if(__t2468t____t692t__){
  free__t661t(&keys__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2647t=values__unsafe_ptr;
  *__t2648t=values__unsafe_size;
  *__t2649t=values__unsafe_offset;
  *__t2650t=values__unsafe_align;
  *__t2651t=keys__unsafe_ptr;
  *__t2652t=keys__unsafe_size;
  *__t2653t=keys__unsafe_offset;
  *__t2654t=keys__unsafe_align;
  *__t2655t=values__unsafe_ptr;
  *__t2656t=values__unsafe_size;
  *__t2657t=values__unsafe_offset;
  *__t2658t=values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2659t, uint64_t* __t2660t, uint16_t* __t2661t, uint16_t* __t2662t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2659t=unsafe_ptr;
  *__t2660t=unsafe_size;
  *__t2661t=unsafe_offset;
  *__t2662t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2663t) {
  *__t2663t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2664t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2664t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2665t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2665t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2666t) {
  *__t2666t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2667t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2667t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2668t) {
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
  *__t2668t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2669t, uint64_t* __t2670t, uint64_t* __t2671t, char* __t2672t) {
  goto __t_return;
  __t_return:
  *__t2669t=unsafe_ptr;
  *__t2670t=dat__pos;
  *__t2671t=dat__length;
  *__t2672t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2673t, uint64_t* __t2674t, uint64_t* __t2675t, char* __t2676t) {
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
  *__t2673t=__t952t__unsafe_ptr;
  *__t2674t=__t952t__dat__pos;
  *__t2675t=__t952t__dat__length;
  *__t2676t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2677t, uint64_t* __t2678t, uint64_t* __t2679t, char* __t2680t) {
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
  *__t2677t=__t982t__unsafe_ptr;
  *__t2678t=__t982t__dat__pos;
  *__t2679t=__t982t__dat__length;
  *__t2680t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2681t, uint64_t* __t2682t, uint64_t* __t2683t, char* __t2684t) {
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
  *__t2681t=__t1005t__unsafe_ptr;
  *__t2682t=__t1005t__dat__pos;
  *__t2683t=__t1005t__dat__length;
  *__t2684t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t2071t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2685t, uint64_t* __t2686t, uint64_t* __t2687t, char* __t2688t) {
  goto __t_return;
  __t_return:
  *__t2685t=r__unsafe_ptr;
  *__t2686t=r__dat__pos;
  *__t2687t=r__dat__length;
  *__t2688t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2689t) {
  goto __t_return;
  __t_return:
  *__t2689t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t2075t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2690t) {
  uint64_t __t2076t=0;
  uint64_t __t2077t__=0;
  char __t2078t__=0;
  __t2076t=0;
  len__t1006t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2077t__);
  eq__t120t(__t2076t,__t2077t__,&__t2078t__);
  goto __t_return;
  __t_return:
  *__t2690t=__t2078t__;
}

static inline __attribute__((always_inline)) void raw__t2069t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2691t, uint64_t* __t2692t, uint64_t* __t2693t, char* __t2694t) {
  goto __t_return;
  __t_return:
  *__t2691t=r__s__unsafe_ptr;
  *__t2692t=r__s__dat__pos;
  *__t2693t=r__s__dat__length;
  *__t2694t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2695t, uint64_t* __t2696t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2695t=__t613t;
  *__t2696t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2697t, uint64_t* __t2698t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2697t=from;
  *__t2698t=to;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t2699t, uint64_t r__to, uint64_t* __t2700t) {
  uint64_t r__from=*__t2699t;
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
  *__t2699t=r__from;
  *__t2700t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t592t(uint64_t value, uint64_t* __t2701t) {
  goto __t_return;
  __t_return:
  *__t2701t=value;
}

static inline __attribute__((always_inline)) void lshift__t602t(uint64_t x__value, uint64_t y, uint64_t* __t2702t) {
  uint64_t z=0;
  uint64_t __t603t__value=0;
  z=(x__value<<y);
  bits__t592t(z,&__t603t__value);
  goto __t_return;
  __t_return:
  *__t2702t=__t603t__value;
}

static inline __attribute__((always_inline)) void nat__t587t(uint64_t x, uint64_t* __t2703t) {
  int __t588t=0;
  int __t589t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2703t=value;
}

static inline __attribute__((always_inline)) void nat__t598t(uint64_t x__value, uint64_t* __t2704t) {
  uint64_t __t599t__=0;
  nat__t587t(x__value,&__t599t__);
  goto __t_return;
  __t_return:
  *__t2704t=__t599t__;
}

static inline __attribute__((always_inline)) void get__t1141t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2705t) {
  uint64_t __t1142t__=0;
  char* __t1143t__=0;
  add__t175t(s__dat__pos,i,&__t1142t__);
  add__t663t(s__unsafe_ptr,__t1142t__,&__t1143t__);
  goto __t_return;
  __t_return:
  *__t2705t=__t1143t__;
}

static inline __attribute__((always_inline)) void nat__t590t(char x, uint64_t* __t2706t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2706t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2707t) {
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
  *__t2707t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t2019t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2708t) {
  uint64_t __t2020t=0;
  uint64_t __t2021t=0;
  uint64_t h=0;
  uint64_t __t2022t__=0;
  uint64_t __t2023t____t613t=0;
  uint64_t __t2023t__to=0;
  uint64_t __t2024t__from=0;
  uint64_t __t2024t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2025t=0;
  uint64_t __t2026t__=0;
  uint64_t i=0;
  uint64_t __t2027t__value=0;
  uint64_t __t2028t=0;
  uint64_t __t2029t__value=0;
  uint64_t __t2030t__=0;
  uint64_t __t2031t__=0;
  char* __t2032t__=0;
  char __t2033t__value=0;
  uint64_t __t2034t__=0;
  uint64_t __t2035t__=0;
  uint64_t __t2036t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2020t=5381;
  __t2021t=__t2020t;
  h=__t2021t;
  len__t1006t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2022t__);
  of__t612t(__t2022t__,&__t2023t____t613t,&__t2023t__to);
  range__t629t(__t2023t____t613t,__t2023t__to,&__t2024t__from,&__t2024t__to);
  iter__from=__t2024t__from;
  iter__to=__t2024t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2026t__);
  __t2025t=__t_complain;
  i=__t2026t__;
  __t2025t=__t2025t==0;
  if(!__t2025t){
  break;
  }
  bits__t592t(h,&__t2027t__value);
  __t2028t=5;
  lshift__t602t(__t2027t__value,__t2028t,&__t2029t__value);
  nat__t598t(__t2029t__value,&__t2030t__);
  add__t175t(__t2030t__,h,&__t2031t__);
  get__t1141t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t2032t__);
  if(!__t2032t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2033t__value,__t2032t__,1);
  nat__t590t(__t2033t__value,&__t2034t__);
  add__t175t(__t2031t__,__t2034t__,&__t2035t__);
  h=__t2035t__;
  }
  __t_errcode=mod__t228t(h,size,&__t2036t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2708t=__t2036t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2709t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2709t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2710t) {
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
  *__t2710t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2711t, uint64_t* __t2712t, uint16_t* __t2713t, uint16_t* __t2714t, uint64_t i, char** __t2715t) {
  char* buffer__unsafe_ptr=*__t2711t;
  uint64_t buffer__unsafe_size=*__t2712t;
  uint16_t buffer__unsafe_offset=*__t2713t;
  uint16_t buffer__unsafe_align=*__t2714t;
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
  *__t2711t=buffer__unsafe_ptr;
  *__t2712t=buffer__unsafe_size;
  *__t2713t=buffer__unsafe_offset;
  *__t2714t=buffer__unsafe_align;
  *__t2715t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1010t(char x, char y, char* __t2716t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2716t=z;
}

static inline __attribute__((always_inline)) void eq__t1084t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2717t) {
  uint64_t __t1085t__=0;
  uint64_t n=0;
  uint64_t __t1086t__=0;
  char __t1087t__=0;
  char __t1088t=0;
  char __t1089t__=0;
  char __t1090t=0;
  char z=0;
  len__t1006t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1085t__);
  n=__t1085t__;
  len__t1006t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1086t__);
  neq__t144t(n,__t1086t__,&__t1087t__);
  if(__t1087t__){
  __t1088t=0;
  goto __t_return;
  }
  neq__t1010t(x__dat__first,y__dat__first,&__t1089t__);
  if(__t1089t__){
  __t1090t=0;
  __t1088t=__t1090t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1088t=z;
  goto __t_return;
  __t_return:
  *__t2717t=__t1088t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2718t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2718t=z;
}

int at__t2358t(char** __t2719t, uint64_t* __t2720t, uint16_t* __t2721t, uint16_t* __t2722t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2723t) {
  char* data__unsafe_ptr=*__t2719t;
  uint64_t data__unsafe_size=*__t2720t;
  uint16_t data__unsafe_offset=*__t2721t;
  uint16_t data__unsafe_align=*__t2722t;
  char* __t2359t__unsafe_ptr=0;
  uint64_t __t2359t__dat__pos=0;
  uint64_t __t2359t__dat__length=0;
  char __t2359t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t2360t__=0;
  uint64_t __t2361t=0;
  uint64_t __t2362t=0;
  char* __t2363t__=0;
  char* __t2364t__s__unsafe_ptr=0;
  uint64_t __t2364t__s__dat__pos=0;
  uint64_t __t2364t__s__dat__length=0;
  char __t2364t__s__dat__first=0;
  uint64_t __t2364t__cost=0;
  char* __t2365t__unsafe_ptr=0;
  uint64_t __t2365t__dat__pos=0;
  uint64_t __t2365t__dat__length=0;
  char __t2365t__dat__first=0;
  int __t2366t=0;
  int __t2367t__=0;
  uint64_t __t2368t__=0;
  uint64_t n=0;
  uint64_t __t2369t__=0;
  uint64_t pos=0;
  uint64_t __t2370t____t613t=0;
  uint64_t __t2370t__to=0;
  uint64_t __t2371t__from=0;
  uint64_t __t2371t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2372t=0;
  uint64_t __t2373t__=0;
  uint64_t i=0;
  uint64_t __t2374t__=0;
  uint64_t __t2375t=0;
  uint64_t idx=0;
  char __t2376t__=0;
  uint64_t __t2377t__=0;
  uint64_t __t2378t=0;
  char __t2379t__=0;
  char* __t2380t__=0;
  char* __t2381t__s__unsafe_ptr=0;
  uint64_t __t2381t__s__dat__pos=0;
  uint64_t __t2381t__s__dat__length=0;
  char __t2381t__s__dat__first=0;
  uint64_t __t2381t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t2382t__unsafe_ptr=0;
  uint64_t __t2382t__dat__pos=0;
  uint64_t __t2382t__dat__length=0;
  char __t2382t__dat__first=0;
  char __t2383t__=0;
  char* __t2384t__=0;
  char* __t2385t__unsafe_ptr=0;
  uint64_t __t2385t__dat__pos=0;
  uint64_t __t2385t__dat__length=0;
  char __t2385t__dat__first=0;
  char __t2386t__=0;
  char __t2387t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t2388t__=0;
  char* __t2389t__s__unsafe_ptr=0;
  uint64_t __t2389t__s__dat__pos=0;
  uint64_t __t2389t__s__dat__length=0;
  char __t2389t__s__dat__first=0;
  uint64_t __t2389t__cost=0;
  char* __t2390t__unsafe_ptr=0;
  uint64_t __t2390t__dat__pos=0;
  uint64_t __t2390t__dat__length=0;
  char __t2390t__dat__first=0;
  char* __t2391t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t2071t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t2359t__unsafe_ptr,&__t2359t__dat__pos,&__t2359t__dat__length,&__t2359t__dat__first);
  k__unsafe_ptr=__t2359t__unsafe_ptr;
  k__dat__pos=__t2359t__dat__pos;
  k__dat__length=__t2359t__dat__length;
  k__dat__first=__t2359t__dat__first;
  is_zero__t2075t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2360t__);
  if(__t2360t__){
  __t2361t=0;
  goto __t_return;
  }
  __t2362t=0;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t2362t,&__t2363t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2363t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2364t__s__unsafe_ptr,__t2363t__,8);
  memcpy(&__t2364t__s__dat__pos,__t2363t__+8,8);
  memcpy(&__t2364t__s__dat__length,__t2363t__+16,8);
  memcpy(&__t2364t__s__dat__first,__t2363t__+24,1);
  memcpy(&__t2364t__cost,__t2363t__+25,8);
  raw__t2069t(__t2364t__s__unsafe_ptr,__t2364t__s__dat__pos,__t2364t__s__dat__length,__t2364t__s__dat__first,__t2364t__cost,&__t2365t__unsafe_ptr,&__t2365t__dat__pos,&__t2365t__dat__length,&__t2365t__dat__first);
  not__t37t(__t2366t,&__t2367t__);
  len__t805t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t2368t__);
  n=__t2368t__;
  __t_errcode=hash__t2019t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t2369t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t2369t__;
  of__t612t(n,&__t2370t____t613t,&__t2370t__to);
  range__t629t(__t2370t____t613t,__t2370t__to,&__t2371t__from,&__t2371t__to);
  iter__from=__t2371t__from;
  iter__to=__t2371t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2373t__);
  __t2372t=__t_complain;
  i=__t2373t__;
  __t2372t=__t2372t==0;
  if(!__t2372t){
  break;
  }
  add__t175t(pos,i,&__t2374t__);
  __t2375t=__t2374t__;
  idx=__t2375t;
  ge__t324t(idx,n,&__t2376t__);
  if(__t2376t__){
  __t_errcode=sub__t352t(idx,n,&__t2377t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t2377t__;
  }
  __t2378t=0;
  eq__t120t(idx,__t2378t,&__t2379t__);
  if(__t2379t__){
  continue;
  }
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
  entry__s__unsafe_ptr=__t2381t__s__unsafe_ptr;
  entry__s__dat__pos=__t2381t__s__dat__pos;
  entry__s__dat__length=__t2381t__s__dat__length;
  entry__s__dat__first=__t2381t__s__dat__first;
  entry__cost=__t2381t__cost;
  raw__t2069t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2382t__unsafe_ptr,&__t2382t__dat__pos,&__t2382t__dat__length,&__t2382t__dat__first);
  is_zero__t2075t(__t2382t__unsafe_ptr,__t2382t__dat__pos,__t2382t__dat__length,__t2382t__dat__first,&__t2383t__);
  if(__t2383t__){
  __t_errcode=mutget__t791t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2384t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2384t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2384t__,&k__unsafe_ptr,8);
  memcpy(__t2384t__+8,&k__dat__pos,8);
  memcpy(__t2384t__+16,&k__dat__length,8);
  memcpy(__t2384t__+24,&k__dat__first,1);
  memcpy(__t2384t__+25,&i,8);
  __t2361t=idx;
  goto __t_return;
  }
  raw__t2069t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2385t__unsafe_ptr,&__t2385t__dat__pos,&__t2385t__dat__length,&__t2385t__dat__first);
  eq__t1084t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t2385t__unsafe_ptr,__t2385t__dat__pos,__t2385t__dat__length,__t2385t__dat__first,&__t2386t__);
  if(__t2386t__){
  __t2361t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t2387t__);
  if(__t2387t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2388t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2388t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2389t__s__unsafe_ptr,__t2388t__,8);
  memcpy(&__t2389t__s__dat__pos,__t2388t__+8,8);
  memcpy(&__t2389t__s__dat__length,__t2388t__+16,8);
  memcpy(&__t2389t__s__dat__first,__t2388t__+24,1);
  memcpy(&__t2389t__cost,__t2388t__+25,8);
  raw__t2069t(__t2389t__s__unsafe_ptr,__t2389t__s__dat__pos,__t2389t__s__dat__length,__t2389t__s__dat__first,__t2389t__cost,&__t2390t__unsafe_ptr,&__t2390t__dat__pos,&__t2390t__dat__length,&__t2390t__dat__first);
  k__unsafe_ptr=__t2390t__unsafe_ptr;
  k__dat__pos=__t2390t__dat__pos;
  k__dat__length=__t2390t__dat__length;
  k__dat__first=__t2390t__dat__first;
  __t_errcode=mutget__t791t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t2391t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2391t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2391t__,&tmp__unsafe_ptr,8);
  memcpy(__t2391t__+8,&tmp__dat__pos,8);
  memcpy(__t2391t__+16,&tmp__dat__length,8);
  memcpy(__t2391t__+24,&tmp__dat__first,1);
  memcpy(__t2391t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2719t=data__unsafe_ptr;
  *__t2720t=data__unsafe_size;
  *__t2721t=data__unsafe_offset;
  *__t2722t=data__unsafe_align;
  *__t2723t=__t2361t;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t2485t(char** __t2724t, uint64_t* __t2725t, uint16_t* __t2726t, uint16_t* __t2727t, char** __t2728t, uint64_t* __t2729t, uint16_t* __t2730t, uint16_t* __t2731t, const char* key, char** __t2732t) {
  char* keys__unsafe_ptr=*__t2724t;
  uint64_t keys__unsafe_size=*__t2725t;
  uint16_t keys__unsafe_offset=*__t2726t;
  uint16_t keys__unsafe_align=*__t2727t;
  char* values__unsafe_ptr=*__t2728t;
  uint64_t values__unsafe_size=*__t2729t;
  uint16_t values__unsafe_offset=*__t2730t;
  uint16_t values__unsafe_align=*__t2731t;
  char* __t2486t__unsafe_ptr=0;
  uint64_t __t2486t__dat__pos=0;
  uint64_t __t2486t__dat__length=0;
  char __t2486t__dat__first=0;
  uint64_t __t2487t__=0;
  char* __t2488t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(key,&__t2486t__unsafe_ptr,&__t2486t__dat__pos,&__t2486t__dat__length,&__t2486t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2358t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t2486t__unsafe_ptr,__t2486t__dat__pos,__t2486t__dat__length,__t2486t__dat__first,&__t2487t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t791t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2487t__,&__t2488t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2724t=keys__unsafe_ptr;
  *__t2725t=keys__unsafe_size;
  *__t2726t=keys__unsafe_offset;
  *__t2727t=keys__unsafe_align;
  *__t2728t=values__unsafe_ptr;
  *__t2729t=values__unsafe_size;
  *__t2730t=values__unsafe_offset;
  *__t2731t=values__unsafe_align;
  *__t2732t=__t2488t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t976t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2733t, uint64_t* __t2734t, uint64_t* __t2735t, char* __t2736t) {
  goto __t_return;
  __t_return:
  *__t2733t=other__unsafe_ptr;
  *__t2734t=other__dat__pos;
  *__t2735t=other__dat__length;
  *__t2736t=other__dat__first;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2737t, uint64_t* __t2738t, uint16_t* __t2739t, uint16_t* __t2740t, uint64_t pos, char** __t2741t, uint64_t* __t2742t, uint16_t* __t2743t, uint16_t* __t2744t, uint64_t* __t2745t) {
  char* buf__unsafe_ptr=*__t2737t;
  uint64_t buf__unsafe_size=*__t2738t;
  uint16_t buf__unsafe_offset=*__t2739t;
  uint16_t buf__unsafe_align=*__t2740t;
  goto __t_return;
  __t_return:
  *__t2737t=buf__unsafe_ptr;
  *__t2738t=buf__unsafe_size;
  *__t2739t=buf__unsafe_offset;
  *__t2740t=buf__unsafe_align;
  *__t2741t=buf__unsafe_ptr;
  *__t2742t=buf__unsafe_size;
  *__t2743t=buf__unsafe_offset;
  *__t2744t=buf__unsafe_align;
  *__t2745t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2746t, uint64_t* __t2747t, uint16_t* __t2748t, uint16_t* __t2749t, uint64_t* __t2750t, uint64_t length, char** __t2751t, uint64_t* __t2752t, uint16_t* __t2753t, uint16_t* __t2754t, uint64_t* __t2755t) {
  char* allocator__buf__unsafe_ptr=*__t2746t;
  uint64_t allocator__buf__unsafe_size=*__t2747t;
  uint16_t allocator__buf__unsafe_offset=*__t2748t;
  uint16_t allocator__buf__unsafe_align=*__t2749t;
  uint64_t allocator__pos=*__t2750t;
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
  *__t2746t=allocator__buf__unsafe_ptr;
  *__t2747t=allocator__buf__unsafe_size;
  *__t2748t=allocator__buf__unsafe_offset;
  *__t2749t=allocator__buf__unsafe_align;
  *__t2750t=allocator__pos;
  *__t2751t=__t850t__buf__unsafe_ptr;
  *__t2752t=__t850t__buf__unsafe_size;
  *__t2753t=__t850t__buf__unsafe_offset;
  *__t2754t=__t850t__buf__unsafe_align;
  *__t2755t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1025t(char** __t2756t, uint64_t* __t2757t, uint16_t* __t2758t, uint16_t* __t2759t, uint64_t* __t2760t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2761t, uint64_t* __t2762t, uint64_t* __t2763t, char* __t2764t) {
  char* CHARS__buf__unsafe_ptr=*__t2756t;
  uint64_t CHARS__buf__unsafe_size=*__t2757t;
  uint16_t CHARS__buf__unsafe_offset=*__t2758t;
  uint16_t CHARS__buf__unsafe_align=*__t2759t;
  uint64_t CHARS__pos=*__t2760t;
  char* __t1026t__unsafe_ptr=0;
  uint64_t __t1026t__dat__pos=0;
  uint64_t __t1026t__dat__length=0;
  char __t1026t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1027t__=0;
  char* __t1028t__buf__unsafe_ptr=0;
  uint64_t __t1028t__buf__unsafe_size=0;
  uint16_t __t1028t__buf__unsafe_offset=0;
  uint16_t __t1028t__buf__unsafe_align=0;
  uint64_t __t1028t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1029t=0;
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__dat__pos=0;
  uint64_t __t1030t__dat__length=0;
  char __t1030t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1026t__unsafe_ptr,&__t1026t__dat__pos,&__t1026t__dat__length,&__t1026t__dat__first);
  other__unsafe_ptr=__t1026t__unsafe_ptr;
  other__dat__pos=__t1026t__dat__pos;
  other__dat__length=__t1026t__dat__length;
  other__dat__first=__t1026t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1027t__);
  __t_errcode=alloc__t843t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1027t__,&__t1028t__buf__unsafe_ptr,&__t1028t__buf__unsafe_size,&__t1028t__buf__unsafe_offset,&__t1028t__buf__unsafe_align,&__t1028t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1028t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1028t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1028t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1028t__buf__unsafe_align;
  surface__pos=__t1028t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t1029t=0;
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t1029t,other__dat__length,other__dat__first,&__t1030t__unsafe_ptr,&__t1030t__dat__pos,&__t1030t__dat__length,&__t1030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2756t=CHARS__buf__unsafe_ptr;
  *__t2757t=CHARS__buf__unsafe_size;
  *__t2758t=CHARS__buf__unsafe_offset;
  *__t2759t=CHARS__buf__unsafe_align;
  *__t2760t=CHARS__pos;
  *__t2761t=__t1030t__unsafe_ptr;
  *__t2762t=__t1030t__dat__pos;
  *__t2763t=__t1030t__dat__length;
  *__t2764t=__t1030t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t2499t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2765t, char** __t2766t, uint64_t* __t2767t, uint64_t* __t2768t, char* __t2769t) {
  uint64_t pos=*__t2765t;
  uint64_t __t2500t=0;
  char __t2501t__=0;
  uint64_t __t2502t=0;
  uint64_t __t2503t__=0;
  uint64_t __t2504t=0;
  char* __t2505t__=0;
  char* __t2506t__s__unsafe_ptr=0;
  uint64_t __t2506t__s__dat__pos=0;
  uint64_t __t2506t__s__dat__length=0;
  char __t2506t__s__dat__first=0;
  uint64_t __t2506t__cost=0;
  char* __t2507t__unsafe_ptr=0;
  uint64_t __t2507t__dat__pos=0;
  uint64_t __t2507t__dat__length=0;
  char __t2507t__dat__first=0;
  char* __t2508t__=0;
  char* __t2509t__s__unsafe_ptr=0;
  uint64_t __t2509t__s__dat__pos=0;
  uint64_t __t2509t__s__dat__length=0;
  char __t2509t__s__dat__first=0;
  uint64_t __t2509t__cost=0;
  char* __t2510t__unsafe_ptr=0;
  uint64_t __t2510t__dat__pos=0;
  uint64_t __t2510t__dat__length=0;
  char __t2510t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t2511t=0;
  uint64_t __t2512t__=0;
  char* __t2513t__unsafe_ptr=0;
  uint64_t __t2513t__dat__pos=0;
  uint64_t __t2513t__dat__length=0;
  char __t2513t__dat__first=0;
  char __t2514t__=0;
  char* __t2515t__=0;
  char* __t2516t__s__unsafe_ptr=0;
  uint64_t __t2516t__s__dat__pos=0;
  uint64_t __t2516t__s__dat__length=0;
  char __t2516t__s__dat__first=0;
  uint64_t __t2516t__cost=0;
  char* __t2517t__unsafe_ptr=0;
  uint64_t __t2517t__dat__pos=0;
  uint64_t __t2517t__dat__length=0;
  char __t2517t__dat__first=0;
  uint64_t __t2518t=0;
  uint64_t __t2519t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2500t=0;
  eq__t120t(pos,__t2500t,&__t2501t__);
  if(__t2501t__){
  __t2502t=1;
  add__t175t(pos,__t2502t,&__t2503t__);
  pos=__t2503t__;
  __t2504t=0;
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2504t,&__t2505t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2505t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2506t__s__unsafe_ptr,__t2505t__,8);
  memcpy(&__t2506t__s__dat__pos,__t2505t__+8,8);
  memcpy(&__t2506t__s__dat__length,__t2505t__+16,8);
  memcpy(&__t2506t__s__dat__first,__t2505t__+24,1);
  memcpy(&__t2506t__cost,__t2505t__+25,8);
  raw__t2069t(__t2506t__s__unsafe_ptr,__t2506t__s__dat__pos,__t2506t__s__dat__length,__t2506t__s__dat__first,__t2506t__cost,&__t2507t__unsafe_ptr,&__t2507t__dat__pos,&__t2507t__dat__length,&__t2507t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2508t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2509t__s__unsafe_ptr,__t2508t__,8);
  memcpy(&__t2509t__s__dat__pos,__t2508t__+8,8);
  memcpy(&__t2509t__s__dat__length,__t2508t__+16,8);
  memcpy(&__t2509t__s__dat__first,__t2508t__+24,1);
  memcpy(&__t2509t__cost,__t2508t__+25,8);
  raw__t2069t(__t2509t__s__unsafe_ptr,__t2509t__s__dat__pos,__t2509t__s__dat__length,__t2509t__s__dat__first,__t2509t__cost,&__t2510t__unsafe_ptr,&__t2510t__dat__pos,&__t2510t__dat__length,&__t2510t__dat__first);
  ret__unsafe_ptr=__t2510t__unsafe_ptr;
  ret__dat__pos=__t2510t__dat__pos;
  ret__dat__length=__t2510t__dat__length;
  ret__dat__first=__t2510t__dat__first;
  __t2511t=1;
  add__t175t(pos,__t2511t,&__t2512t__);
  pos=__t2512t__;
  while(1){
  raw__t2071t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t2513t__unsafe_ptr,&__t2513t__dat__pos,&__t2513t__dat__length,&__t2513t__dat__first);
  is_zero__t2075t(__t2513t__unsafe_ptr,__t2513t__dat__pos,__t2513t__dat__length,__t2513t__dat__first,&__t2514t__);
  if(!__t2514t__){
  break;
  }
  __t_errcode=get__t798t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t2515t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2515t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2516t__s__unsafe_ptr,__t2515t__,8);
  memcpy(&__t2516t__s__dat__pos,__t2515t__+8,8);
  memcpy(&__t2516t__s__dat__length,__t2515t__+16,8);
  memcpy(&__t2516t__s__dat__first,__t2515t__+24,1);
  memcpy(&__t2516t__cost,__t2515t__+25,8);
  raw__t2069t(__t2516t__s__unsafe_ptr,__t2516t__s__dat__pos,__t2516t__s__dat__length,__t2516t__s__dat__first,__t2516t__cost,&__t2517t__unsafe_ptr,&__t2517t__dat__pos,&__t2517t__dat__length,&__t2517t__dat__first);
  ret__unsafe_ptr=__t2517t__unsafe_ptr;
  ret__dat__pos=__t2517t__dat__pos;
  ret__dat__length=__t2517t__dat__length;
  ret__dat__first=__t2517t__dat__first;
  __t2518t=1;
  add__t175t(pos,__t2518t,&__t2519t__);
  pos=__t2519t__;
  }
  __t2507t__unsafe_ptr=ret__unsafe_ptr;
  __t2507t__dat__pos=ret__dat__pos;
  __t2507t__dat__length=ret__dat__length;
  __t2507t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2765t=pos;
  *__t2766t=__t2507t__unsafe_ptr;
  *__t2767t=__t2507t__dat__pos;
  *__t2768t=__t2507t__dat__length;
  *__t2769t=__t2507t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1139t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1140t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2550t(char** __t2770t, uint64_t* __t2771t, uint16_t* __t2772t, uint16_t* __t2773t, uint64_t* __t2774t, char** __t2775t, uint64_t* __t2776t, uint16_t* __t2777t, uint16_t* __t2778t, char** __t2779t, uint64_t* __t2780t, uint16_t* __t2781t, uint16_t* __t2782t) {
  char* buf__buf__unsafe_ptr=*__t2770t;
  uint64_t buf__buf__unsafe_size=*__t2771t;
  uint16_t buf__buf__unsafe_offset=*__t2772t;
  uint16_t buf__buf__unsafe_align=*__t2773t;
  uint64_t buf__pos=*__t2774t;
  char* __t2551t__unsafe_ptr=0;
  uint64_t __t2551t__unsafe_size=0;
  uint16_t __t2551t__unsafe_offset=0;
  uint16_t __t2551t__unsafe_align=0;
  uint64_t __t2552t=0;
  char* __t2553t__unsafe_ptr=0;
  uint64_t __t2553t__unsafe_size=0;
  uint16_t __t2553t__unsafe_offset=0;
  uint16_t __t2553t__unsafe_align=0;
  char __t2554t____t692t__=0;
  char* __t2555t__keys__unsafe_ptr=0;
  uint64_t __t2555t__keys__unsafe_size=0;
  uint16_t __t2555t__keys__unsafe_offset=0;
  uint16_t __t2555t__keys__unsafe_align=0;
  char* __t2555t__values__unsafe_ptr=0;
  uint64_t __t2555t__values__unsafe_size=0;
  uint16_t __t2555t__values__unsafe_offset=0;
  uint16_t __t2555t__values__unsafe_align=0;
  char __t2556t____t2468t____t692t__=0;
  char* __t2557t__keys__unsafe_ptr=0;
  uint64_t __t2557t__keys__unsafe_size=0;
  uint16_t __t2557t__keys__unsafe_offset=0;
  uint16_t __t2557t__keys__unsafe_align=0;
  char* __t2557t__values__unsafe_ptr=0;
  uint64_t __t2557t__values__unsafe_size=0;
  uint16_t __t2557t__values__unsafe_offset=0;
  uint16_t __t2557t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2559t__=0;
  char* __t2561t__unsafe_ptr=0;
  uint64_t __t2561t__dat__pos=0;
  uint64_t __t2561t__dat__length=0;
  char __t2561t__dat__first=0;
  char* __t2562t__unsafe_ptr=0;
  uint64_t __t2562t__dat__pos=0;
  uint64_t __t2562t__dat__length=0;
  char __t2562t__dat__first=0;
  char* __t2564t__=0;
  char* __t2566t__unsafe_ptr=0;
  uint64_t __t2566t__dat__pos=0;
  uint64_t __t2566t__dat__length=0;
  char __t2566t__dat__first=0;
  char* __t2567t__unsafe_ptr=0;
  uint64_t __t2567t__dat__pos=0;
  uint64_t __t2567t__dat__length=0;
  char __t2567t__dat__first=0;
  uint64_t __t2568t=0;
  uint64_t __t2569t=0;
  char* it__map__keys__unsafe_ptr=0;
  uint64_t it__map__keys__unsafe_size=0;
  uint16_t it__map__keys__unsafe_offset=0;
  uint16_t it__map__keys__unsafe_align=0;
  uint64_t it____t2569t=0;
  char __t2570t=0;
  char* __t2571t__unsafe_ptr=0;
  uint64_t __t2571t__dat__pos=0;
  uint64_t __t2571t__dat__length=0;
  char __t2571t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2542t(&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align);
  __t2552t=128;
  __t_errcode=alloc__t690t(&__t2551t__unsafe_ptr,&__t2551t__unsafe_size,&__t2551t__unsafe_offset,&__t2551t__unsafe_align,__t2552t,&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t2461t(&__t2553t__unsafe_ptr,&__t2553t__unsafe_size,&__t2553t__unsafe_offset,&__t2553t__unsafe_align,&__t2555t__keys__unsafe_ptr,&__t2555t__keys__unsafe_size,&__t2555t__keys__unsafe_offset,&__t2555t__keys__unsafe_align,&__t2555t__values__unsafe_ptr,&__t2555t__values__unsafe_size,&__t2555t__values__unsafe_offset,&__t2555t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2557t__keys__unsafe_ptr=__t2555t__keys__unsafe_ptr;
  __t2557t__keys__unsafe_size=__t2555t__keys__unsafe_size;
  __t2557t__keys__unsafe_offset=__t2555t__keys__unsafe_offset;
  __t2557t__keys__unsafe_align=__t2555t__keys__unsafe_align;
  __t2557t__values__unsafe_ptr=__t2555t__values__unsafe_ptr;
  __t2557t__values__unsafe_size=__t2555t__values__unsafe_size;
  __t2557t__values__unsafe_offset=__t2555t__values__unsafe_offset;
  __t2557t__values__unsafe_align=__t2555t__values__unsafe_align;
  __t_errcode=mutget__t2485t(&__t2557t__keys__unsafe_ptr,&__t2557t__keys__unsafe_size,&__t2557t__keys__unsafe_offset,&__t2557t__keys__unsafe_align,&__t2557t__values__unsafe_ptr,&__t2557t__values__unsafe_size,&__t2557t__values__unsafe_offset,&__t2557t__values__unsafe_align,__t2558t,&__t2559t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2560t,&__t2561t__unsafe_ptr,&__t2561t__dat__pos,&__t2561t__dat__length,&__t2561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1025t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2561t__unsafe_ptr,__t2561t__dat__pos,__t2561t__dat__length,__t2561t__dat__first,&__t2562t__unsafe_ptr,&__t2562t__dat__pos,&__t2562t__dat__length,&__t2562t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2559t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2559t__,&__t2562t__unsafe_ptr,8);
  memcpy(__t2559t__+8,&__t2562t__dat__pos,8);
  memcpy(__t2559t__+16,&__t2562t__dat__length,8);
  memcpy(__t2559t__+24,&__t2562t__dat__first,1);
  __t_errcode=mutget__t2485t(&__t2557t__keys__unsafe_ptr,&__t2557t__keys__unsafe_size,&__t2557t__keys__unsafe_offset,&__t2557t__keys__unsafe_align,&__t2557t__values__unsafe_ptr,&__t2557t__values__unsafe_size,&__t2557t__values__unsafe_offset,&__t2557t__values__unsafe_align,__t2563t,&__t2564t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2565t,&__t2566t__unsafe_ptr,&__t2566t__dat__pos,&__t2566t__dat__length,&__t2566t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1025t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2566t__unsafe_ptr,__t2566t__dat__pos,__t2566t__dat__length,__t2566t__dat__first,&__t2567t__unsafe_ptr,&__t2567t__dat__pos,&__t2567t__dat__length,&__t2567t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2564t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2564t__,&__t2567t__unsafe_ptr,8);
  memcpy(__t2564t__+8,&__t2567t__dat__pos,8);
  memcpy(__t2564t__+16,&__t2567t__dat__length,8);
  memcpy(__t2564t__+24,&__t2567t__dat__first,1);
  __t2568t=0;
  __t2569t=__t2568t;
  it____t2569t=__t2569t;
  while(1){
  __t_complain=next__t2499t(__t2557t__keys__unsafe_ptr,__t2557t__keys__unsafe_size,__t2557t__keys__unsafe_offset,__t2557t__keys__unsafe_align,&it____t2569t,&__t2571t__unsafe_ptr,&__t2571t__dat__pos,&__t2571t__dat__length,&__t2571t__dat__first);
  __t2570t=__t_complain;
  key__unsafe_ptr=__t2571t__unsafe_ptr;
  key__dat__pos=__t2571t__dat__pos;
  key__dat__length=__t2571t__dat__length;
  key__dat__first=__t2571t__dat__first;
  __t2570t=__t2570t==0;
  if(!__t2570t){
  break;
  }
  print__t1139t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2557t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2557t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2557t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2557t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2557t__values__unsafe_ptr;
  map__values__unsafe_size=__t2557t__values__unsafe_size;
  map__values__unsafe_offset=__t2557t__values__unsafe_offset;
  map__values__unsafe_align=__t2557t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(map__keys__unsafe_ptr,&__t2556t____t2468t____t692t__);
  if(__t2556t____t2468t____t692t__){
  free__t661t(&map__keys__unsafe_ptr);
  }
  exists__t591t(map__values__unsafe_ptr,&__t2554t____t692t__);
  if(__t2554t____t692t__){
  free__t661t(&map__values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2770t=buf__buf__unsafe_ptr;
  *__t2771t=buf__buf__unsafe_size;
  *__t2772t=buf__buf__unsafe_offset;
  *__t2773t=buf__buf__unsafe_align;
  *__t2774t=buf__pos;
  *__t2775t=map__keys__unsafe_ptr;
  *__t2776t=map__keys__unsafe_size;
  *__t2777t=map__keys__unsafe_offset;
  *__t2778t=map__keys__unsafe_align;
  *__t2779t=map__values__unsafe_ptr;
  *__t2780t=map__values__unsafe_size;
  *__t2781t=map__values__unsafe_offset;
  *__t2782t=map__values__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2573t(char** __t2783t, uint64_t* __t2784t, uint16_t* __t2785t, uint16_t* __t2786t, char** __t2787t, uint64_t* __t2788t, uint16_t* __t2789t, uint16_t* __t2790t, char** __t2791t, uint64_t* __t2792t, uint16_t* __t2793t, uint16_t* __t2794t, uint64_t* __t2795t) {
  char* __t2576t__unsafe_ptr=0;
  uint64_t __t2576t__unsafe_size=0;
  uint16_t __t2576t__unsafe_offset=0;
  uint16_t __t2576t__unsafe_align=0;
  uint64_t __t2577t=0;
  uint64_t __t2578t__=0;
  char* __t2579t__unsafe_ptr=0;
  uint64_t __t2579t__unsafe_size=0;
  uint16_t __t2579t__unsafe_offset=0;
  uint16_t __t2579t__unsafe_align=0;
  char __t2580t____t692t__=0;
  char* __t2581t__buf__unsafe_ptr=0;
  uint64_t __t2581t__buf__unsafe_size=0;
  uint16_t __t2581t__buf__unsafe_offset=0;
  uint16_t __t2581t__buf__unsafe_align=0;
  uint64_t __t2581t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2582t__keys__unsafe_ptr=0;
  uint64_t __t2582t__keys__unsafe_size=0;
  uint16_t __t2582t__keys__unsafe_offset=0;
  uint16_t __t2582t__keys__unsafe_align=0;
  char* __t2582t__values__unsafe_ptr=0;
  uint64_t __t2582t__values__unsafe_size=0;
  uint16_t __t2582t__values__unsafe_offset=0;
  uint16_t __t2582t__values__unsafe_align=0;
  char __t2583t____t2554t____t692t__=0;
  char __t2583t____t2556t____t2468t____t692t__=0;
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
  char____t_buffer____buffer__t2574t(&__t2576t__unsafe_ptr,&__t2576t__unsafe_size,&__t2576t__unsafe_offset,&__t2576t__unsafe_align);
  __t2577t=4;
  KB__t639t(__t2577t,&__t2578t__);
  __t_errcode=alloc__t690t(&__t2576t__unsafe_ptr,&__t2576t__unsafe_size,&__t2576t__unsafe_offset,&__t2576t__unsafe_align,__t2578t__,&__t2579t__unsafe_ptr,&__t2579t__unsafe_size,&__t2579t__unsafe_offset,&__t2579t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2579t__unsafe_ptr,&__t2579t__unsafe_size,&__t2579t__unsafe_offset,&__t2579t__unsafe_align,&__t2581t__buf__unsafe_ptr,&__t2581t__buf__unsafe_size,&__t2581t__buf__unsafe_offset,&__t2581t__buf__unsafe_align,&__t2581t__pos);
  buf__buf__unsafe_ptr=__t2581t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2581t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2581t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2581t__buf__unsafe_align;
  buf__pos=__t2581t__pos;
  __t_errcode=test__t2550t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2582t__keys__unsafe_ptr,&__t2582t__keys__unsafe_size,&__t2582t__keys__unsafe_offset,&__t2582t__keys__unsafe_align,&__t2582t__values__unsafe_ptr,&__t2582t__values__unsafe_size,&__t2582t__values__unsafe_offset,&__t2582t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2582t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2582t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2582t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2582t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2582t__values__unsafe_ptr;
  map__values__unsafe_size=__t2582t__values__unsafe_size;
  map__values__unsafe_offset=__t2582t__values__unsafe_offset;
  map__values__unsafe_align=__t2582t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(map__keys__unsafe_ptr,&__t2583t____t2556t____t2468t____t692t__);
  if(__t2583t____t2556t____t2468t____t692t__){
  free__t661t(&map__keys__unsafe_ptr);
  }
  exists__t591t(map__values__unsafe_ptr,&__t2583t____t2554t____t692t__);
  if(__t2583t____t2554t____t692t__){
  free__t661t(&map__values__unsafe_ptr);
  }
  exists__t591t(buf__buf__unsafe_ptr,&__t2580t____t692t__);
  if(__t2580t____t692t__){
  free__t661t(&buf__buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2783t=map__keys__unsafe_ptr;
  *__t2784t=map__keys__unsafe_size;
  *__t2785t=map__keys__unsafe_offset;
  *__t2786t=map__keys__unsafe_align;
  *__t2787t=map__values__unsafe_ptr;
  *__t2788t=map__values__unsafe_size;
  *__t2789t=map__values__unsafe_offset;
  *__t2790t=map__values__unsafe_align;
  *__t2791t=buf__buf__unsafe_ptr;
  *__t2792t=buf__buf__unsafe_size;
  *__t2793t=buf__buf__unsafe_offset;
  *__t2794t=buf__buf__unsafe_align;
  *__t2795t=buf__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int raw__t2073t(const char* r, char** __t2796t, uint64_t* __t2797t, uint64_t* __t2798t, char* __t2799t) {
  char* __t2074t__unsafe_ptr=0;
  uint64_t __t2074t__dat__pos=0;
  uint64_t __t2074t__dat__length=0;
  char __t2074t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(r,&__t2074t__unsafe_ptr,&__t2074t__dat__pos,&__t2074t__dat__length,&__t2074t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2796t=__t2074t__unsafe_ptr;
  *__t2797t=__t2074t__dat__pos;
  *__t2798t=__t2074t__dat__length;
  *__t2799t=__t2074t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int find__t2118t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2800t) {
  char* __t2119t__unsafe_ptr=0;
  uint64_t __t2119t__dat__pos=0;
  uint64_t __t2119t__dat__length=0;
  char __t2119t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t2120t__=0;
  uint64_t __t2121t=0;
  uint64_t __t2122t=0;
  char* __t2123t__=0;
  char* __t2124t__s__unsafe_ptr=0;
  uint64_t __t2124t__s__dat__pos=0;
  uint64_t __t2124t__s__dat__length=0;
  char __t2124t__s__dat__first=0;
  uint64_t __t2124t__cost=0;
  char* __t2125t__unsafe_ptr=0;
  uint64_t __t2125t__dat__pos=0;
  uint64_t __t2125t__dat__length=0;
  char __t2125t__dat__first=0;
  int __t2126t=0;
  int __t2127t__=0;
  uint64_t __t2128t__=0;
  uint64_t n=0;
  uint64_t __t2129t__=0;
  uint64_t pos=0;
  uint64_t __t2130t____t613t=0;
  uint64_t __t2130t__to=0;
  uint64_t __t2131t__from=0;
  uint64_t __t2131t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t2132t=0;
  uint64_t __t2133t__=0;
  uint64_t i=0;
  uint64_t __t2134t__=0;
  uint64_t __t2135t=0;
  uint64_t idx=0;
  char __t2136t__=0;
  uint64_t __t2137t__=0;
  uint64_t __t2138t=0;
  char __t2139t__=0;
  char* __t2140t__=0;
  char* __t2141t__s__unsafe_ptr=0;
  uint64_t __t2141t__s__dat__pos=0;
  uint64_t __t2141t__s__dat__length=0;
  char __t2141t__s__dat__first=0;
  uint64_t __t2141t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t2142t__unsafe_ptr=0;
  uint64_t __t2142t__dat__pos=0;
  uint64_t __t2142t__dat__length=0;
  char __t2142t__dat__first=0;
  char __t2143t__=0;
  char* __t2144t__unsafe_ptr=0;
  uint64_t __t2144t__dat__pos=0;
  uint64_t __t2144t__dat__length=0;
  char __t2144t__dat__first=0;
  char __t2145t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t2071t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t2119t__unsafe_ptr,&__t2119t__dat__pos,&__t2119t__dat__length,&__t2119t__dat__first);
  k__unsafe_ptr=__t2119t__unsafe_ptr;
  k__dat__pos=__t2119t__dat__pos;
  k__dat__length=__t2119t__dat__length;
  k__dat__first=__t2119t__dat__first;
  is_zero__t2075t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t2120t__);
  if(__t2120t__){
  __t2121t=0;
  goto __t_return;
  }
  __t2122t=0;
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t2122t,&__t2123t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2123t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2124t__s__unsafe_ptr,__t2123t__,8);
  memcpy(&__t2124t__s__dat__pos,__t2123t__+8,8);
  memcpy(&__t2124t__s__dat__length,__t2123t__+16,8);
  memcpy(&__t2124t__s__dat__first,__t2123t__+24,1);
  memcpy(&__t2124t__cost,__t2123t__+25,8);
  raw__t2069t(__t2124t__s__unsafe_ptr,__t2124t__s__dat__pos,__t2124t__s__dat__length,__t2124t__s__dat__first,__t2124t__cost,&__t2125t__unsafe_ptr,&__t2125t__dat__pos,&__t2125t__dat__length,&__t2125t__dat__first);
  not__t37t(__t2126t,&__t2127t__);
  len__t805t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t2128t__);
  n=__t2128t__;
  __t_errcode=hash__t2019t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t2129t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t2129t__;
  of__t612t(n,&__t2130t____t613t,&__t2130t__to);
  range__t629t(__t2130t____t613t,__t2130t__to,&__t2131t__from,&__t2131t__to);
  iter__from=__t2131t__from;
  iter__to=__t2131t__to;
  while(1){
  __t_complain=next__t632t(&iter__from,iter__to,&__t2133t__);
  __t2132t=__t_complain;
  i=__t2133t__;
  __t2132t=__t2132t==0;
  if(!__t2132t){
  break;
  }
  add__t175t(pos,i,&__t2134t__);
  __t2135t=__t2134t__;
  idx=__t2135t;
  ge__t324t(idx,n,&__t2136t__);
  if(__t2136t__){
  __t_errcode=sub__t352t(idx,n,&__t2137t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t2137t__;
  }
  __t2138t=0;
  eq__t120t(idx,__t2138t,&__t2139t__);
  if(__t2139t__){
  continue;
  }
  __t_errcode=get__t798t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t2140t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2140t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2141t__s__unsafe_ptr,__t2140t__,8);
  memcpy(&__t2141t__s__dat__pos,__t2140t__+8,8);
  memcpy(&__t2141t__s__dat__length,__t2140t__+16,8);
  memcpy(&__t2141t__s__dat__first,__t2140t__+24,1);
  memcpy(&__t2141t__cost,__t2140t__+25,8);
  entry__s__unsafe_ptr=__t2141t__s__unsafe_ptr;
  entry__s__dat__pos=__t2141t__s__dat__pos;
  entry__s__dat__length=__t2141t__s__dat__length;
  entry__s__dat__first=__t2141t__s__dat__first;
  entry__cost=__t2141t__cost;
  raw__t2069t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2142t__unsafe_ptr,&__t2142t__dat__pos,&__t2142t__dat__length,&__t2142t__dat__first);
  is_zero__t2075t(__t2142t__unsafe_ptr,__t2142t__dat__pos,__t2142t__dat__length,__t2142t__dat__first,&__t2143t__);
  if(__t2143t__){
  continue;
  }
  raw__t2069t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t2144t__unsafe_ptr,&__t2144t__dat__pos,&__t2144t__dat__length,&__t2144t__dat__first);
  eq__t1084t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t2144t__unsafe_ptr,__t2144t__dat__pos,__t2144t__dat__length,__t2144t__dat__first,&__t2145t__);
  if(__t2145t__){
  __t2121t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2800t=__t2121t;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t2477t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2801t) {
  char* __t2478t__unsafe_ptr=0;
  uint64_t __t2478t__dat__pos=0;
  uint64_t __t2478t__dat__length=0;
  char __t2478t__dat__first=0;
  uint64_t __t2479t__=0;
  char* __t2480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t2073t(key,&__t2478t__unsafe_ptr,&__t2478t__dat__pos,&__t2478t__dat__length,&__t2478t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t2118t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t2478t__unsafe_ptr,__t2478t__dat__pos,__t2478t__dat__length,__t2478t__dat__first,&__t2479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t798t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2479t__,&__t2480t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2801t=__t2480t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2584t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2585t__=0;
  char* __t2586t__unsafe_ptr=0;
  uint64_t __t2586t__dat__pos=0;
  uint64_t __t2586t__dat__length=0;
  char __t2586t__dat__first=0;
  char* __t2588t__=0;
  char* __t2589t__unsafe_ptr=0;
  uint64_t __t2589t__dat__pos=0;
  uint64_t __t2589t__dat__length=0;
  char __t2589t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2477t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2558t,&__t2585t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2585t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2586t__unsafe_ptr,__t2585t__,8);
  memcpy(&__t2586t__dat__pos,__t2585t__+8,8);
  memcpy(&__t2586t__dat__length,__t2585t__+16,8);
  memcpy(&__t2586t__dat__first,__t2585t__+24,1);
  print__t1139t(__t2586t__unsafe_ptr,__t2586t__dat__pos,__t2586t__dat__length,__t2586t__dat__first);
  __t_errcode=get__t2477t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2563t,&__t2588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2589t__unsafe_ptr,__t2588t__,8);
  memcpy(&__t2589t__dat__pos,__t2588t__+8,8);
  memcpy(&__t2589t__dat__length,__t2588t__+16,8);
  memcpy(&__t2589t__dat__first,__t2588t__+24,1);
  print__t1139t(__t2589t__unsafe_ptr,__t2589t__dat__pos,__t2589t__dat__length,__t2589t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2591t() {
  char* __t2593t__map__keys__unsafe_ptr=0;
  uint64_t __t2593t__map__keys__unsafe_size=0;
  uint16_t __t2593t__map__keys__unsafe_offset=0;
  uint16_t __t2593t__map__keys__unsafe_align=0;
  char* __t2593t__map__values__unsafe_ptr=0;
  uint64_t __t2593t__map__values__unsafe_size=0;
  uint16_t __t2593t__map__values__unsafe_offset=0;
  uint16_t __t2593t__map__values__unsafe_align=0;
  char* __t2593t__buf__buf__unsafe_ptr=0;
  uint64_t __t2593t__buf__buf__unsafe_size=0;
  uint16_t __t2593t__buf__buf__unsafe_offset=0;
  uint16_t __t2593t__buf__buf__unsafe_align=0;
  uint64_t __t2593t__buf__pos=0;
  char __t2594t____t2580t____t692t__=0;
  char __t2594t____t2583t____t2554t____t692t__=0;
  char __t2594t____t2583t____t2556t____t2468t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2573t(&__t2593t__map__keys__unsafe_ptr,&__t2593t__map__keys__unsafe_size,&__t2593t__map__keys__unsafe_offset,&__t2593t__map__keys__unsafe_align,&__t2593t__map__values__unsafe_ptr,&__t2593t__map__values__unsafe_size,&__t2593t__map__values__unsafe_offset,&__t2593t__map__values__unsafe_align,&__t2593t__buf__buf__unsafe_ptr,&__t2593t__buf__buf__unsafe_size,&__t2593t__buf__buf__unsafe_offset,&__t2593t__buf__buf__unsafe_align,&__t2593t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2584t(__t2593t__map__keys__unsafe_ptr,__t2593t__map__keys__unsafe_size,__t2593t__map__keys__unsafe_offset,__t2593t__map__keys__unsafe_align,__t2593t__map__values__unsafe_ptr,__t2593t__map__values__unsafe_size,__t2593t__map__values__unsafe_offset,__t2593t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2593t__map__keys__unsafe_ptr,&__t2594t____t2583t____t2556t____t2468t____t692t__);
  if(__t2594t____t2583t____t2556t____t2468t____t692t__){
  free__t661t(&__t2593t__map__keys__unsafe_ptr);
  }
  exists__t591t(__t2593t__map__values__unsafe_ptr,&__t2594t____t2583t____t2554t____t692t__);
  if(__t2594t____t2583t____t2554t____t692t__){
  free__t661t(&__t2593t__map__values__unsafe_ptr);
  }
  exists__t591t(__t2593t__buf__buf__unsafe_ptr,&__t2594t____t2580t____t692t__);
  if(__t2594t____t2580t____t692t__){
  free__t661t(&__t2593t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2591t();return 0;}