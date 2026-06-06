#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2590t="ls";
static const char* __t_all_errcodes[53] = {"noerr",
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
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2035t(char** __t2593t, uint64_t* __t2594t, uint16_t* __t2595t, uint16_t* __t2596t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2593t=unsafe_ptr;
  *__t2594t=unsafe_size;
  *__t2595t=unsafe_offset;
  *__t2596t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2597t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2597t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2598t) {
  char* allocated=*__t2598t;
  if(allocated){
  free(allocated);
  }
  *__t2598t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2599t) {
  int value=0;
  *__t2599t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2600t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2600t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2601t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2601t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2602t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2602t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2603t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2603t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2604t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2604t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2605t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2605t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2606t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2606t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2607t) {
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
  *__t2607t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2608t, uint64_t* __t2609t, uint16_t* __t2610t, uint16_t* __t2611t, uint64_t size, char** __t2612t, uint64_t* __t2613t, uint16_t* __t2614t, uint16_t* __t2615t) {
  char* buffer__unsafe_ptr=*__t2608t;
  uint64_t buffer__unsafe_size=*__t2609t;
  uint16_t buffer__unsafe_offset=*__t2610t;
  uint16_t buffer__unsafe_align=*__t2611t;
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
  *__t2608t=buffer__unsafe_ptr;
  *__t2609t=buffer__unsafe_size;
  *__t2610t=buffer__unsafe_offset;
  *__t2611t=buffer__unsafe_align;
  *__t2612t=buffer__unsafe_ptr;
  *__t2613t=buffer__unsafe_size;
  *__t2614t=buffer__unsafe_offset;
  *__t2615t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2616t, uint64_t* __t2617t, uint16_t* __t2618t, uint16_t* __t2619t, uint64_t _pos, char** __t2620t, uint64_t* __t2621t, uint16_t* __t2622t, uint16_t* __t2623t, uint64_t* __t2624t) {
  char* buf__unsafe_ptr=*__t2616t;
  uint64_t buf__unsafe_size=*__t2617t;
  uint16_t buf__unsafe_offset=*__t2618t;
  uint16_t buf__unsafe_align=*__t2619t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2616t=buf__unsafe_ptr;
  *__t2617t=buf__unsafe_size;
  *__t2618t=buf__unsafe_offset;
  *__t2619t=buf__unsafe_align;
  *__t2620t=buf__unsafe_ptr;
  *__t2621t=buf__unsafe_size;
  *__t2622t=buf__unsafe_offset;
  *__t2623t=buf__unsafe_align;
  *__t2624t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2625t, uint64_t* __t2626t, uint16_t* __t2627t, uint16_t* __t2628t, char** __t2629t, uint64_t* __t2630t, uint16_t* __t2631t, uint16_t* __t2632t, uint64_t* __t2633t) {
  char* buf__unsafe_ptr=*__t2625t;
  uint64_t buf__unsafe_size=*__t2626t;
  uint16_t buf__unsafe_offset=*__t2627t;
  uint16_t buf__unsafe_align=*__t2628t;
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
  *__t2625t=buf__unsafe_ptr;
  *__t2626t=buf__unsafe_size;
  *__t2627t=buf__unsafe_offset;
  *__t2628t=buf__unsafe_align;
  *__t2629t=__t815t__buf__unsafe_ptr;
  *__t2630t=__t815t__buf__unsafe_size;
  *__t2631t=__t815t__buf__unsafe_offset;
  *__t2632t=__t815t__buf__unsafe_align;
  *__t2633t=__t815t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2634t, uint64_t* __t2635t, uint16_t* __t2636t, uint16_t* __t2637t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2634t=unsafe_ptr;
  *__t2635t=unsafe_size;
  *__t2636t=unsafe_offset;
  *__t2637t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2638t) {
  *__t2638t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2639t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2639t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2640t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2640t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2641t) {
  *__t2641t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2642t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2642t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2643t) {
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
  *__t2643t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2644t, uint64_t* __t2645t, uint64_t* __t2646t, char* __t2647t) {
  goto __t_return;
  __t_return:
  *__t2644t=unsafe_ptr;
  *__t2645t=dat__pos;
  *__t2646t=dat__length;
  *__t2647t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2648t, uint64_t* __t2649t, uint64_t* __t2650t, char* __t2651t) {
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
  *__t2648t=__t952t__unsafe_ptr;
  *__t2649t=__t952t__dat__pos;
  *__t2650t=__t952t__dat__length;
  *__t2651t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2652t, uint64_t* __t2653t, uint64_t* __t2654t, char* __t2655t) {
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
  *__t2652t=__t982t__unsafe_ptr;
  *__t2653t=__t982t__dat__pos;
  *__t2654t=__t982t__dat__length;
  *__t2655t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2656t, uint64_t* __t2657t, uint64_t* __t2658t, char* __t2659t) {
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
  *__t2656t=__t1005t__unsafe_ptr;
  *__t2657t=__t1005t__dat__pos;
  *__t2658t=__t1005t__dat__length;
  *__t2659t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2660t) {
  goto __t_return;
  __t_return:
  *__t2660t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2661t) {
  goto __t_return;
  __t_return:
  *__t2661t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2662t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2662t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2663t, uint64_t* __t2664t, uint16_t* __t2665t, uint16_t* __t2666t, uint64_t pos, char** __t2667t, uint64_t* __t2668t, uint16_t* __t2669t, uint16_t* __t2670t, uint64_t* __t2671t) {
  char* buf__unsafe_ptr=*__t2663t;
  uint64_t buf__unsafe_size=*__t2664t;
  uint16_t buf__unsafe_offset=*__t2665t;
  uint16_t buf__unsafe_align=*__t2666t;
  goto __t_return;
  __t_return:
  *__t2663t=buf__unsafe_ptr;
  *__t2664t=buf__unsafe_size;
  *__t2665t=buf__unsafe_offset;
  *__t2666t=buf__unsafe_align;
  *__t2667t=buf__unsafe_ptr;
  *__t2668t=buf__unsafe_size;
  *__t2669t=buf__unsafe_offset;
  *__t2670t=buf__unsafe_align;
  *__t2671t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2672t, uint64_t* __t2673t, uint16_t* __t2674t, uint16_t* __t2675t, uint64_t* __t2676t, uint64_t length, char** __t2677t, uint64_t* __t2678t, uint16_t* __t2679t, uint16_t* __t2680t, uint64_t* __t2681t) {
  char* allocator__buf__unsafe_ptr=*__t2672t;
  uint64_t allocator__buf__unsafe_size=*__t2673t;
  uint16_t allocator__buf__unsafe_offset=*__t2674t;
  uint16_t allocator__buf__unsafe_align=*__t2675t;
  uint64_t allocator__pos=*__t2676t;
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
  *__t2672t=allocator__buf__unsafe_ptr;
  *__t2673t=allocator__buf__unsafe_size;
  *__t2674t=allocator__buf__unsafe_offset;
  *__t2675t=allocator__buf__unsafe_align;
  *__t2676t=allocator__pos;
  *__t2677t=__t850t__buf__unsafe_ptr;
  *__t2678t=__t850t__buf__unsafe_size;
  *__t2679t=__t850t__buf__unsafe_offset;
  *__t2680t=__t850t__buf__unsafe_align;
  *__t2681t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1028t(char** __t2682t, uint64_t* __t2683t, uint16_t* __t2684t, uint16_t* __t2685t, uint64_t* __t2686t, const char* _other, char** __t2687t, uint64_t* __t2688t, uint64_t* __t2689t, char* __t2690t) {
  char* CHARS__buf__unsafe_ptr=*__t2682t;
  uint64_t CHARS__buf__unsafe_size=*__t2683t;
  uint16_t CHARS__buf__unsafe_offset=*__t2684t;
  uint16_t CHARS__buf__unsafe_align=*__t2685t;
  uint64_t CHARS__pos=*__t2686t;
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
  *__t2682t=CHARS__buf__unsafe_ptr;
  *__t2683t=CHARS__buf__unsafe_size;
  *__t2684t=CHARS__buf__unsafe_offset;
  *__t2685t=CHARS__buf__unsafe_align;
  *__t2686t=CHARS__pos;
  *__t2687t=__t1032t__unsafe_ptr;
  *__t2688t=__t1032t__dat__pos;
  *__t2689t=__t1032t__dat__length;
  *__t2690t=__t1032t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1053t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2691t, uint64_t* __t2692t, uint64_t* __t2693t, char* __t2694t) {
  char* __t1054t__unsafe_ptr=0;
  uint64_t __t1054t__unsafe_size=0;
  uint16_t __t1054t__unsafe_offset=0;
  uint16_t __t1054t__unsafe_align=0;
  char* __t1055t__unsafe_ptr=0;
  uint64_t __t1055t__unsafe_size=0;
  uint16_t __t1055t__unsafe_offset=0;
  uint16_t __t1055t__unsafe_align=0;
  uint64_t __t1056t=0;
  uint64_t __t1057t__=0;
  uint64_t __t1058t__=0;
  char* __t1059t__unsafe_ptr=0;
  uint64_t __t1059t__unsafe_size=0;
  uint16_t __t1059t__unsafe_offset=0;
  uint16_t __t1059t__unsafe_align=0;
  char __t1060t____t692t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1061t=0;
  char* __t1062t__unsafe_ptr=0;
  uint64_t __t1062t__dat__pos=0;
  uint64_t __t1062t__dat__length=0;
  char __t1062t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t1054t__unsafe_ptr,&__t1054t__unsafe_size,&__t1054t__unsafe_offset,&__t1054t__unsafe_align);
  __t1055t__unsafe_ptr=__t1054t__unsafe_ptr;
  __t1055t__unsafe_size=__t1054t__unsafe_size;
  __t1055t__unsafe_offset=__t1054t__unsafe_offset;
  __t1055t__unsafe_align=__t1054t__unsafe_align;
  __t1056t=1;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1057t__);
  add__t175t(__t1056t,__t1057t__,&__t1058t__);
  __t_errcode=alloc__t690t(&__t1055t__unsafe_ptr,&__t1055t__unsafe_size,&__t1055t__unsafe_offset,&__t1055t__unsafe_align,__t1058t__,&__t1059t__unsafe_ptr,&__t1059t__unsafe_size,&__t1059t__unsafe_offset,&__t1059t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1059t__unsafe_ptr;
  buf__unsafe_size=__t1059t__unsafe_size;
  buf__unsafe_offset=__t1059t__unsafe_offset;
  buf__unsafe_align=__t1059t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1061t=0;
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1061t,other__dat__length,other__dat__first,&__t1062t__unsafe_ptr,&__t1062t__dat__pos,&__t1062t__dat__length,&__t1062t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t1062t__unsafe_ptr,&__t1060t____t692t__);
  if(__t1060t____t692t__){
  free__t661t(&__t1062t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2691t=__t1062t__unsafe_ptr;
  *__t2692t=__t1062t__dat__pos;
  *__t2693t=__t1062t__dat__length;
  *__t2694t=__t1062t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1063t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2695t, char** __t2696t, uint64_t* __t2697t, uint64_t* __t2698t, char* __t2699t) {
  char* __t1065t__unsafe_ptr=0;
  uint64_t __t1065t__dat__pos=0;
  uint64_t __t1065t__dat__length=0;
  char __t1065t__dat__first=0;
  char __t1066t____t1060t____t692t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1067t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t806t();
  __t_errcode=copy_null_terminated__t1053t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1065t__unsafe_ptr,&__t1065t__dat__pos,&__t1065t__dat__length,&__t1065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1065t__unsafe_ptr;
  str__dat__pos=__t1065t__dat__pos;
  str__dat__length=__t1065t__dat__length;
  str__dat__first=__t1065t__dat__first;
  add__t663t(str__unsafe_ptr,str__dat__pos,&__t1067t__);
  _ret=__t1067t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t591t(str__unsafe_ptr,&__t1066t____t1060t____t692t__);
  if(__t1066t____t1060t____t692t__){
  free__t661t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2695t=cstr;
  *__t2696t=str__unsafe_ptr;
  *__t2697t=str__dat__pos;
  *__t2698t=str__dat__length;
  *__t2699t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1071t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2700t) {
  goto __t_return;
  __t_return:
  *__t2700t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t2078t(const char* cmd, const char** __t2701t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2701t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t2077t(const char* cmd, int64_t* __t2702t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2702t=result;
}

static inline __attribute__((always_inline)) void int__t571t(uint64_t x, int64_t* __t2703t) {
  int __t572t=0;
  int __t573t=0;
  int __t574t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2703t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2704t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2704t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2705t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2705t=z;
}

int system__t2087t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t2088t__cstr=0;
  char* __t2088t__str__unsafe_ptr=0;
  uint64_t __t2088t__str__dat__pos=0;
  uint64_t __t2088t__str__dat__length=0;
  char __t2088t__str__dat__first=0;
  char __t2089t____t1066t____t1060t____t692t__=0;
  const char* __t2090t__=0;
  const char* __t2091t__=0;
  int64_t __t2092t__=0;
  int64_t result=0;
  uint64_t __t2093t=0;
  int64_t __t2094t__=0;
  char __t2095t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1063t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t2088t__cstr,&__t2088t__str__unsafe_ptr,&__t2088t__str__dat__pos,&__t2088t__str__dat__length,&__t2088t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1071t(__t2088t__cstr,__t2088t__str__unsafe_ptr,__t2088t__str__dat__pos,__t2088t__str__dat__length,__t2088t__str__dat__first,&__t2090t__);
  __t_errcode=safe__t2078t(__t2090t__,&__t2091t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t2077t(__t2091t__,&__t2092t__);
  result=__t2092t__;
  __t2093t=0;
  int__t571t(__t2093t,&__t2094t__);
  neq__t133t(result,__t2094t__,&__t2095t__);
  if(__t2095t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2088t__str__unsafe_ptr,&__t2089t____t1066t____t1060t____t692t__);
  if(__t2089t____t1066t____t1060t____t692t__){
  free__t661t(&__t2088t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2583t() {
  char* __t2585t__unsafe_ptr=0;
  uint64_t __t2585t__unsafe_size=0;
  uint16_t __t2585t__unsafe_offset=0;
  uint16_t __t2585t__unsafe_align=0;
  uint64_t __t2586t=0;
  char* __t2587t__unsafe_ptr=0;
  uint64_t __t2587t__unsafe_size=0;
  uint16_t __t2587t__unsafe_offset=0;
  uint16_t __t2587t__unsafe_align=0;
  char __t2588t____t692t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t2589t__buf__unsafe_ptr=0;
  uint64_t __t2589t__buf__unsafe_size=0;
  uint16_t __t2589t__buf__unsafe_offset=0;
  uint16_t __t2589t__buf__unsafe_align=0;
  uint64_t __t2589t__pos=0;
  char* __t2591t__unsafe_ptr=0;
  uint64_t __t2591t__dat__pos=0;
  uint64_t __t2591t__dat__length=0;
  char __t2591t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2035t(&__t2585t__unsafe_ptr,&__t2585t__unsafe_size,&__t2585t__unsafe_offset,&__t2585t__unsafe_align);
  __t2586t=2;
  __t_errcode=alloc__t690t(&__t2585t__unsafe_ptr,&__t2585t__unsafe_size,&__t2585t__unsafe_offset,&__t2585t__unsafe_align,__t2586t,&__t2587t__unsafe_ptr,&__t2587t__unsafe_size,&__t2587t__unsafe_offset,&__t2587t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2587t__unsafe_ptr;
  buf__unsafe_size=__t2587t__unsafe_size;
  buf__unsafe_offset=__t2587t__unsafe_offset;
  buf__unsafe_align=__t2587t__unsafe_align;
  arena__t813t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2589t__buf__unsafe_ptr,&__t2589t__buf__unsafe_size,&__t2589t__buf__unsafe_offset,&__t2589t__buf__unsafe_align,&__t2589t__pos);
  __t_errcode=copy__t1028t(&__t2589t__buf__unsafe_ptr,&__t2589t__buf__unsafe_size,&__t2589t__buf__unsafe_offset,&__t2589t__buf__unsafe_align,&__t2589t__pos,__t2590t,&__t2591t__unsafe_ptr,&__t2591t__dat__pos,&__t2591t__dat__length,&__t2591t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2591t__unsafe_ptr;
  s__dat__pos=__t2591t__dat__pos;
  s__dat__length=__t2591t__dat__length;
  s__dat__first=__t2591t__dat__first;
  __t_errcode=system__t2087t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2587t__unsafe_ptr,&__t2588t____t692t__);
  if(__t2588t____t692t__){
  free__t661t(&__t2587t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2583t();return 0;}