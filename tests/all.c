#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2608t="./tests/passing/";
const char* const __t374t="";
const char* const __t2609t="./smoll ";
const char* const __t2617t=".s";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2601t(char** __t2627t, uint64_t* __t2628t, uint16_t* __t2629t, uint16_t* __t2630t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2627t=unsafe_ptr;
  *__t2628t=unsafe_size;
  *__t2629t=unsafe_offset;
  *__t2630t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2631t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2631t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2632t) {
  char* allocated=*__t2632t;
  if(allocated){
  free(allocated);
  }
  *__t2632t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2633t) {
  int value=0;
  *__t2633t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2634t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2634t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2635t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2635t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2636t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2636t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2637t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2637t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2638t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2638t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2639t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2639t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2640t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2640t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2641t) {
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
  *__t2641t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2642t, uint64_t* __t2643t, uint16_t* __t2644t, uint16_t* __t2645t, uint64_t size, char** __t2646t, uint64_t* __t2647t, uint16_t* __t2648t, uint16_t* __t2649t) {
  char* buffer__unsafe_ptr=*__t2642t;
  uint64_t buffer__unsafe_size=*__t2643t;
  uint16_t buffer__unsafe_offset=*__t2644t;
  uint16_t buffer__unsafe_align=*__t2645t;
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
  *__t2642t=buffer__unsafe_ptr;
  *__t2643t=buffer__unsafe_size;
  *__t2644t=buffer__unsafe_offset;
  *__t2645t=buffer__unsafe_align;
  *__t2646t=buffer__unsafe_ptr;
  *__t2647t=buffer__unsafe_size;
  *__t2648t=buffer__unsafe_offset;
  *__t2649t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2650t, uint64_t* __t2651t, uint16_t* __t2652t, uint16_t* __t2653t, uint64_t _pos, char** __t2654t, uint64_t* __t2655t, uint16_t* __t2656t, uint16_t* __t2657t, uint64_t* __t2658t) {
  char* buf__unsafe_ptr=*__t2650t;
  uint64_t buf__unsafe_size=*__t2651t;
  uint16_t buf__unsafe_offset=*__t2652t;
  uint16_t buf__unsafe_align=*__t2653t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2650t=buf__unsafe_ptr;
  *__t2651t=buf__unsafe_size;
  *__t2652t=buf__unsafe_offset;
  *__t2653t=buf__unsafe_align;
  *__t2654t=buf__unsafe_ptr;
  *__t2655t=buf__unsafe_size;
  *__t2656t=buf__unsafe_offset;
  *__t2657t=buf__unsafe_align;
  *__t2658t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2659t, uint64_t* __t2660t, uint16_t* __t2661t, uint16_t* __t2662t, char** __t2663t, uint64_t* __t2664t, uint16_t* __t2665t, uint16_t* __t2666t, uint64_t* __t2667t) {
  char* buf__unsafe_ptr=*__t2659t;
  uint64_t buf__unsafe_size=*__t2660t;
  uint16_t buf__unsafe_offset=*__t2661t;
  uint16_t buf__unsafe_align=*__t2662t;
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
  *__t2659t=buf__unsafe_ptr;
  *__t2660t=buf__unsafe_size;
  *__t2661t=buf__unsafe_offset;
  *__t2662t=buf__unsafe_align;
  *__t2663t=__t815t__buf__unsafe_ptr;
  *__t2664t=__t815t__buf__unsafe_size;
  *__t2665t=__t815t__buf__unsafe_offset;
  *__t2666t=__t815t__buf__unsafe_align;
  *__t2667t=__t815t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2668t, uint64_t* __t2669t, uint16_t* __t2670t, uint16_t* __t2671t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2668t=unsafe_ptr;
  *__t2669t=unsafe_size;
  *__t2670t=unsafe_offset;
  *__t2671t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2672t) {
  *__t2672t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2673t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2673t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2674t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2674t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2675t) {
  *__t2675t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2676t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2676t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2677t) {
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
  *__t2677t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2678t, uint64_t* __t2679t, uint64_t* __t2680t, char* __t2681t) {
  goto __t_return;
  __t_return:
  *__t2678t=unsafe_ptr;
  *__t2679t=dat__pos;
  *__t2680t=dat__length;
  *__t2681t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2682t, uint64_t* __t2683t, uint64_t* __t2684t, char* __t2685t) {
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
  *__t2682t=__t952t__unsafe_ptr;
  *__t2683t=__t952t__dat__pos;
  *__t2684t=__t952t__dat__length;
  *__t2685t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2686t, uint64_t* __t2687t, uint64_t* __t2688t, char* __t2689t) {
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
  *__t2686t=__t982t__unsafe_ptr;
  *__t2687t=__t982t__dat__pos;
  *__t2688t=__t982t__dat__length;
  *__t2689t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2690t, uint64_t* __t2691t, uint64_t* __t2692t, char* __t2693t) {
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
  *__t2690t=__t1005t__unsafe_ptr;
  *__t2691t=__t1005t__dat__pos;
  *__t2692t=__t1005t__dat__length;
  *__t2693t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2694t) {
  goto __t_return;
  __t_return:
  *__t2694t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2695t) {
  goto __t_return;
  __t_return:
  *__t2695t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2696t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2696t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2697t, uint64_t* __t2698t, uint16_t* __t2699t, uint16_t* __t2700t, uint64_t pos, char** __t2701t, uint64_t* __t2702t, uint16_t* __t2703t, uint16_t* __t2704t, uint64_t* __t2705t) {
  char* buf__unsafe_ptr=*__t2697t;
  uint64_t buf__unsafe_size=*__t2698t;
  uint16_t buf__unsafe_offset=*__t2699t;
  uint16_t buf__unsafe_align=*__t2700t;
  goto __t_return;
  __t_return:
  *__t2697t=buf__unsafe_ptr;
  *__t2698t=buf__unsafe_size;
  *__t2699t=buf__unsafe_offset;
  *__t2700t=buf__unsafe_align;
  *__t2701t=buf__unsafe_ptr;
  *__t2702t=buf__unsafe_size;
  *__t2703t=buf__unsafe_offset;
  *__t2704t=buf__unsafe_align;
  *__t2705t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2706t, uint64_t* __t2707t, uint16_t* __t2708t, uint16_t* __t2709t, uint64_t* __t2710t, uint64_t length, char** __t2711t, uint64_t* __t2712t, uint16_t* __t2713t, uint16_t* __t2714t, uint64_t* __t2715t) {
  char* allocator__buf__unsafe_ptr=*__t2706t;
  uint64_t allocator__buf__unsafe_size=*__t2707t;
  uint16_t allocator__buf__unsafe_offset=*__t2708t;
  uint16_t allocator__buf__unsafe_align=*__t2709t;
  uint64_t allocator__pos=*__t2710t;
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
  *__t2706t=allocator__buf__unsafe_ptr;
  *__t2707t=allocator__buf__unsafe_size;
  *__t2708t=allocator__buf__unsafe_offset;
  *__t2709t=allocator__buf__unsafe_align;
  *__t2710t=allocator__pos;
  *__t2711t=__t850t__buf__unsafe_ptr;
  *__t2712t=__t850t__buf__unsafe_size;
  *__t2713t=__t850t__buf__unsafe_offset;
  *__t2714t=__t850t__buf__unsafe_align;
  *__t2715t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1028t(char** __t2716t, uint64_t* __t2717t, uint16_t* __t2718t, uint16_t* __t2719t, uint64_t* __t2720t, const char* _other, char** __t2721t, uint64_t* __t2722t, uint64_t* __t2723t, char* __t2724t) {
  char* CHARS__buf__unsafe_ptr=*__t2716t;
  uint64_t CHARS__buf__unsafe_size=*__t2717t;
  uint16_t CHARS__buf__unsafe_offset=*__t2718t;
  uint16_t CHARS__buf__unsafe_align=*__t2719t;
  uint64_t CHARS__pos=*__t2720t;
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
  *__t2716t=CHARS__buf__unsafe_ptr;
  *__t2717t=CHARS__buf__unsafe_size;
  *__t2718t=CHARS__buf__unsafe_offset;
  *__t2719t=CHARS__buf__unsafe_align;
  *__t2720t=CHARS__pos;
  *__t2721t=__t1032t__unsafe_ptr;
  *__t2722t=__t1032t__dat__pos;
  *__t2723t=__t1032t__dat__length;
  *__t2724t=__t1032t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2451t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t2452t(const char* path, char** __t2725t) {
  char* unsafe_ptr=0;
  char __t2454t__=0;
  char __t2455t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t591t(unsafe_ptr,&__t2454t__);
  not__t28t(__t2454t__,&__t2455t__);
  if(__t2455t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2451t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2725t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2463t(char** __t2726t, const char** __t2727t) {
  char* f__unsafe_ptr=*__t2726t;
  char __t2464t__=0;
  char __t2465t__=0;
  char* de=0;
  char __t2466t__=0;
  char __t2467t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t591t(f__unsafe_ptr,&__t2464t__);
  not__t28t(__t2464t__,&__t2465t__);
  if(__t2465t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t591t(de,&__t2466t__);
  not__t28t(__t2466t__,&__t2467t__);
  if(__t2467t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2726t=f__unsafe_ptr;
  *__t2727t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2468t(char** __t2728t, char** __t2729t, uint64_t* __t2730t, uint64_t* __t2731t, char* __t2732t) {
  char* f__unsafe_ptr=*__t2728t;
  const char* __t2469t__=0;
  char* __t2470t__unsafe_ptr=0;
  uint64_t __t2470t__dat__pos=0;
  uint64_t __t2470t__dat__length=0;
  char __t2470t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2463t(&f__unsafe_ptr,&__t2469t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2469t__,&__t2470t__unsafe_ptr,&__t2470t__dat__pos,&__t2470t__dat__length,&__t2470t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2728t=f__unsafe_ptr;
  *__t2729t=__t2470t__unsafe_ptr;
  *__t2730t=__t2470t__dat__pos;
  *__t2731t=__t2470t__dat__length;
  *__t2732t=__t2470t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2533t(char** __t2733t, uint64_t __t_anon1, char** __t2734t, uint64_t* __t2735t, uint64_t* __t2736t, char* __t2737t) {
  char* data__unsafe_ptr=*__t2733t;
  char* __t2534t__unsafe_ptr=0;
  uint64_t __t2534t__dat__pos=0;
  uint64_t __t2534t__dat__length=0;
  char __t2534t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2468t(&data__unsafe_ptr,&__t2534t__unsafe_ptr,&__t2534t__dat__pos,&__t2534t__dat__length,&__t2534t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2733t=data__unsafe_ptr;
  *__t2734t=__t2534t__unsafe_ptr;
  *__t2735t=__t2534t__dat__pos;
  *__t2736t=__t2534t__dat__length;
  *__t2737t=__t2534t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t976t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2738t, uint64_t* __t2739t, uint64_t* __t2740t, char* __t2741t) {
  goto __t_return;
  __t_return:
  *__t2738t=other__unsafe_ptr;
  *__t2739t=other__dat__pos;
  *__t2740t=other__dat__length;
  *__t2741t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2742t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2742t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2743t) {
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
  *__t2743t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2744t) {
  uint64_t __t1134t__=0;
  char* __t1135t__=0;
  add__t175t(s__dat__pos,i,&__t1134t__);
  add__t663t(s__unsafe_ptr,__t1134t__,&__t1135t__);
  goto __t_return;
  __t_return:
  *__t2744t=__t1135t__;
}

int slice__t1155t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2745t, uint64_t* __t2746t, uint64_t* __t2747t, char* __t2748t) {
  char* __t1156t__unsafe_ptr=0;
  uint64_t __t1156t__dat__pos=0;
  uint64_t __t1156t__dat__length=0;
  char __t1156t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1157t__=0;
  char* __t1158t__unsafe_ptr=0;
  uint64_t __t1158t__dat__pos=0;
  uint64_t __t1158t__dat__length=0;
  char __t1158t__dat__first=0;
  char __t1159t__=0;
  char __t1160t__=0;
  char __t1161t=0;
  char __t1162t__=0;
  uint64_t __t1163t__=0;
  uint64_t new_length=0;
  uint64_t __t1164t=0;
  char __t1165t__=0;
  char new_first=0;
  char* __t1166t__=0;
  char __t1167t__value=0;
  uint64_t __t1168t__=0;
  char* __t1169t__unsafe_ptr=0;
  uint64_t __t1169t__dat__pos=0;
  uint64_t __t1169t__dat__length=0;
  char __t1169t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1156t__unsafe_ptr,&__t1156t__dat__pos,&__t1156t__dat__length,&__t1156t__dat__first);
  s__unsafe_ptr=__t1156t__unsafe_ptr;
  s__dat__pos=__t1156t__dat__pos;
  s__dat__length=__t1156t__dat__length;
  s__dat__first=__t1156t__dat__first;
  eq__t120t(from,to,&__t1157t__);
  if(__t1157t__){
  __t_errcode=str__t997t(__t374t,&__t1158t__unsafe_ptr,&__t1158t__dat__pos,&__t1158t__dat__length,&__t1158t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t276t(from,to,&__t1159t__);
  if(!__t1159t__){
  gt__t276t(to,s__dat__length,&__t1160t__);
  __t1161t=__t1160t__;
  }
  else{
  __t1161t=0;
  not__t28t(__t1161t,&__t1162t__);
  __t1161t=__t1162t__;
  }
  if(__t1161t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t352t(to,from,&__t1163t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1163t__;
  __t1164t=0;
  neq__t144t(from,__t1164t,&__t1165t__);
  if(__t1165t__){
  get__t1133t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1166t__);
  if(!__t1166t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1167t__value,__t1166t__,1);
  new_first=__t1167t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t175t(s__dat__pos,from,&__t1168t__);
  str__t941t(s__unsafe_ptr,__t1168t__,new_length,new_first,&__t1169t__unsafe_ptr,&__t1169t__dat__pos,&__t1169t__dat__length,&__t1169t__dat__first);
  __t1158t__unsafe_ptr=__t1169t__unsafe_ptr;
  __t1158t__dat__pos=__t1169t__dat__pos;
  __t1158t__dat__length=__t1169t__dat__length;
  __t1158t__dat__first=__t1169t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2745t=__t1158t__unsafe_ptr;
  *__t2746t=__t1158t__dat__pos;
  *__t2747t=__t1158t__dat__length;
  *__t2748t=__t1158t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1010t(char x, char y, char* __t2749t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2749t=z;
}

static inline __attribute__((always_inline)) void eq__t1076t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2750t) {
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
  *__t2750t=__t1080t;
}

static inline __attribute__((always_inline)) int ends_with__t1234t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2751t) {
  char* __t1235t__unsafe_ptr=0;
  uint64_t __t1235t__dat__pos=0;
  uint64_t __t1235t__dat__length=0;
  char __t1235t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1236t__unsafe_ptr=0;
  uint64_t __t1236t__dat__pos=0;
  uint64_t __t1236t__dat__length=0;
  char __t1236t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1237t__=0;
  char __t1238t=0;
  uint64_t __t1239t__=0;
  uint64_t n=0;
  uint64_t __t1240t__=0;
  uint64_t __t1241t__=0;
  char* __t1242t__unsafe_ptr=0;
  uint64_t __t1242t__dat__pos=0;
  uint64_t __t1242t__dat__length=0;
  char __t1242t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1243t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1235t__unsafe_ptr,&__t1235t__dat__pos,&__t1235t__dat__length,&__t1235t__dat__first);
  stack__unsafe_ptr=__t1235t__unsafe_ptr;
  stack__dat__pos=__t1235t__dat__pos;
  stack__dat__length=__t1235t__dat__length;
  stack__dat__first=__t1235t__dat__first;
  __t_errcode=str__t997t(_needle,&__t1236t__unsafe_ptr,&__t1236t__dat__pos,&__t1236t__dat__length,&__t1236t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1236t__unsafe_ptr;
  needle__dat__pos=__t1236t__dat__pos;
  needle__dat__length=__t1236t__dat__length;
  needle__dat__first=__t1236t__dat__first;
  lt__t252t(stack__dat__length,needle__dat__length,&__t1237t__);
  if(__t1237t__){
  __t1238t=0;
  goto __t_return;
  }
  len__t1006t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1239t__);
  n=__t1239t__;
  len__t1006t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1240t__);
  __t_errcode=sub__t352t(n,__t1240t__,&__t1241t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1155t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1241t__,n,&__t1242t__unsafe_ptr,&__t1242t__dat__pos,&__t1242t__dat__length,&__t1242t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1242t__unsafe_ptr;
  ret__dat__pos=__t1242t__dat__pos;
  ret__dat__length=__t1242t__dat__length;
  ret__dat__first=__t1242t__dat__first;
  eq__t1076t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1243t__);
  __t1238t=__t1243t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2751t=__t1238t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1107t(char** __t2752t, uint64_t* __t2753t, uint16_t* __t2754t, uint16_t* __t2755t, uint64_t* __t2756t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2757t, uint64_t* __t2758t, uint64_t* __t2759t, char* __t2760t) {
  char* CHARS__buf__unsafe_ptr=*__t2752t;
  uint64_t CHARS__buf__unsafe_size=*__t2753t;
  uint16_t CHARS__buf__unsafe_offset=*__t2754t;
  uint16_t CHARS__buf__unsafe_align=*__t2755t;
  uint64_t CHARS__pos=*__t2756t;
  char* __t1108t__unsafe_ptr=0;
  uint64_t __t1108t__dat__pos=0;
  uint64_t __t1108t__dat__length=0;
  char __t1108t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1109t__=0;
  uint64_t __t1110t__=0;
  uint64_t null_pos=0;
  uint64_t __t1111t=0;
  uint64_t __t1112t__=0;
  uint64_t next_pos=0;
  uint64_t __t1113t__=0;
  char __t1114t__=0;
  char* endpos=0;
  uint64_t __t1115t=0;
  uint64_t __t1116t__=0;
  uint64_t prev_pos=0;
  char* __t1117t__unsafe_ptr=0;
  uint64_t __t1117t__dat__pos=0;
  uint64_t __t1117t__dat__length=0;
  char __t1117t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1108t__unsafe_ptr,&__t1108t__dat__pos,&__t1108t__dat__length,&__t1108t__dat__first);
  other__unsafe_ptr=__t1108t__unsafe_ptr;
  other__dat__pos=__t1108t__dat__pos;
  other__dat__length=__t1108t__dat__length;
  other__dat__first=__t1108t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1109t__);
  add__t175t(CHARS__pos,__t1109t__,&__t1110t__);
  null_pos=__t1110t__;
  __t1111t=1;
  add__t175t(null_pos,__t1111t,&__t1112t__);
  next_pos=__t1112t__;
  len__t805t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1113t__);
  gt__t276t(next_pos,__t1113t__,&__t1114t__);
  if(__t1114t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1115t=0;
  add__t175t(CHARS__pos,__t1115t,&__t1116t__);
  prev_pos=__t1116t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t945t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1117t__unsafe_ptr,&__t1117t__dat__pos,&__t1117t__dat__length,&__t1117t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2752t=CHARS__buf__unsafe_ptr;
  *__t2753t=CHARS__buf__unsafe_size;
  *__t2754t=CHARS__buf__unsafe_offset;
  *__t2755t=CHARS__buf__unsafe_align;
  *__t2756t=CHARS__pos;
  *__t2757t=__t1117t__unsafe_ptr;
  *__t2758t=__t1117t__dat__pos;
  *__t2759t=__t1117t__dat__length;
  *__t2760t=__t1117t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1073t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2761t) {
  uint64_t __t1074t__=0;
  add__t175t(s__dat__pos,s__dat__length,&__t1074t__);
  goto __t_return;
  __t_return:
  *__t2761t=__t1074t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2762t) {
  int value=0;
  *__t2762t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2763t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2763t=__t40t__;
}

static inline __attribute__((always_inline)) int str__t953t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2764t, uint64_t* __t2765t, uint64_t* __t2766t, char* __t2767t) {
  int __t954t=0;
  int __t955t=0;
  int __t956t__=0;
  uint64_t __t957t__=0;
  char __t958t__=0;
  uint64_t __t959t=0;
  uint64_t __t960t=0;
  char* __t961t__=0;
  char __t962t__value=0;
  char* __t963t__unsafe_ptr=0;
  uint64_t __t963t__dat__pos=0;
  uint64_t __t963t__dat__length=0;
  char __t963t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t39t(__t955t,&__t956t__);
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t957t__);
  gt__t276t(length,__t957t__,&__t958t__);
  if(__t958t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t959t=0;
  __t960t=0;
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t960t,&__t961t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t961t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t962t__value,__t961t__,1);
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t959t,length,__t962t__value,&__t963t__unsafe_ptr,&__t963t__dat__pos,&__t963t__dat__length,&__t963t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2764t=__t963t__unsafe_ptr;
  *__t2765t=__t963t__dat__pos;
  *__t2766t=__t963t__dat__length;
  *__t2767t=__t963t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1053t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2768t, uint64_t* __t2769t, uint64_t* __t2770t, char* __t2771t) {
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
  *__t2768t=__t1062t__unsafe_ptr;
  *__t2769t=__t1062t__dat__pos;
  *__t2770t=__t1062t__dat__length;
  *__t2771t=__t1062t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1063t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2772t, char** __t2773t, uint64_t* __t2774t, uint64_t* __t2775t, char* __t2776t) {
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
  *__t2772t=cstr;
  *__t2773t=str__unsafe_ptr;
  *__t2774t=str__dat__pos;
  *__t2775t=str__dat__length;
  *__t2776t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1071t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2777t) {
  goto __t_return;
  __t_return:
  *__t2777t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2017t(const char* cmd, char** __t2778t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2778t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2016t(char* unsafe_ptr, int64_t* __t2779t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2779t=status;
}

static inline __attribute__((always_inline)) void int__t571t(uint64_t x, int64_t* __t2780t) {
  int __t572t=0;
  int __t573t=0;
  int __t574t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2780t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2781t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2781t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2782t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2782t=z;
}

static inline __attribute__((always_inline)) int read__t2018t(const char* cmd, char** __t2783t) {
  char* __t2019t__=0;
  char* unsafe_ptr=0;
  char __t2020t__=0;
  char __t2021t__=0;
  char __t2022t__=0;
  int64_t __t2023t__=0;
  int64_t status=0;
  uint64_t __t2024t=0;
  int64_t __t2025t__=0;
  char __t2026t__=0;
  char __t2027t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2017t(cmd,&__t2019t__);
  unsafe_ptr=__t2019t__;
  exists__t591t(unsafe_ptr,&__t2020t__);
  not__t28t(__t2020t__,&__t2021t__);
  if(__t2021t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(unsafe_ptr,&__t2022t__);
  if(__t2022t__){
  pclose__t2016t(unsafe_ptr,&__t2023t__);
  status=__t2023t__;
  unsafe_ptr=0;
  __t2024t=0;
  int__t571t(__t2024t,&__t2025t__);
  neq__t133t(status,__t2025t__,&__t2026t__);
  if(__t2026t__){
  __t_complain=36;
  __t2027t=__t2027t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2783t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t2029t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2784t) {
  const char* __t2030t__cstr=0;
  char* __t2030t__str__unsafe_ptr=0;
  uint64_t __t2030t__str__dat__pos=0;
  uint64_t __t2030t__str__dat__length=0;
  char __t2030t__str__dat__first=0;
  char __t2031t____t1066t____t1060t____t692t__=0;
  const char* __t2032t__=0;
  char* __t2033t__unsafe_ptr=0;
  char __t2034t____t2022t__=0;
  int64_t __t2034t____t2023t__=0;
  int64_t __t2034t__status=0;
  uint64_t __t2034t____t2024t=0;
  int64_t __t2034t____t2025t__=0;
  char __t2034t____t2026t__=0;
  char __t2034t____t2027t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1063t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2030t__cstr,&__t2030t__str__unsafe_ptr,&__t2030t__str__dat__pos,&__t2030t__str__dat__length,&__t2030t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1071t(__t2030t__cstr,__t2030t__str__unsafe_ptr,__t2030t__str__dat__pos,__t2030t__str__dat__length,__t2030t__str__dat__first,&__t2032t__);
  __t_errcode=read__t2018t(__t2032t__,&__t2033t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t2033t__unsafe_ptr,&__t2034t____t2022t__);
  if(__t2034t____t2022t__){
  pclose__t2016t(__t2033t__unsafe_ptr,&__t2034t____t2023t__);
  __t2034t__status=__t2034t____t2023t__;
  __t2033t__unsafe_ptr=0;
  __t2034t____t2024t=0;
  int__t571t(__t2034t____t2024t,&__t2034t____t2025t__);
  neq__t133t(__t2034t__status,__t2034t____t2025t__,&__t2034t____t2026t__);
  if(__t2034t____t2026t__){
  __t_complain=36;
  __t2034t____t2027t=__t2034t____t2027t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2784t=__t2033t__unsafe_ptr;
  
  __t_skip_returns:exists__t591t(__t2030t__str__unsafe_ptr,&__t2031t____t1066t____t1060t____t692t__);
  if(__t2031t____t1066t____t1060t____t692t__){
  free__t661t(&__t2030t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2010t(int64_t value, const char** __t2785t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2785t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2591t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2592t__unsafe_ptr=0;
  char __t2593t____t2034t____t2022t__=0;
  int64_t __t2593t____t2034t____t2023t__=0;
  int64_t __t2593t____t2034t__status=0;
  uint64_t __t2593t____t2034t____t2024t=0;
  int64_t __t2593t____t2034t____t2025t__=0;
  char __t2593t____t2034t____t2026t__=0;
  char __t2593t____t2034t____t2027t=0;
  char* __t2594t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2595t=0;
  int64_t __t2596t=0;
  int64_t error=0;
  const char* __t2597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t2029t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2592t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2594t__unsafe_ptr=__t2592t__unsafe_ptr;
  proc__unsafe_ptr=__t2594t__unsafe_ptr;
  exists__t591t(__t2592t__unsafe_ptr,&__t2593t____t2034t____t2022t__);
  if(__t2593t____t2034t____t2022t__){
  pclose__t2016t(__t2592t__unsafe_ptr,&__t2593t____t2034t____t2023t__);
  __t2593t____t2034t__status=__t2593t____t2034t____t2023t__;
  __t2592t__unsafe_ptr=0;
  __t2593t____t2034t____t2024t=0;
  int__t571t(__t2593t____t2034t____t2024t,&__t2593t____t2034t____t2025t__);
  neq__t133t(__t2593t____t2034t__status,__t2593t____t2034t____t2025t__,&__t2593t____t2034t____t2026t__);
  if(__t2593t____t2034t____t2026t__){
  __t_complain=36;
  __t2593t____t2034t____t2027t=__t2593t____t2034t____t2027t==0;
  }
  }
  __t2596t=__t_complain;
  __t2595t=(__t_complain==0);
  __t_complain=0;
  error=__t2596t;
  __t2595t=__t2595t==0;
  if(__t2595t){
  cstr__t2010t(error,&__t2597t__);
  print__t380t(__t2597t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2599t() {
  char* __t2603t__unsafe_ptr=0;
  uint64_t __t2603t__unsafe_size=0;
  uint16_t __t2603t__unsafe_offset=0;
  uint16_t __t2603t__unsafe_align=0;
  uint64_t __t2604t=0;
  char* __t2605t__unsafe_ptr=0;
  uint64_t __t2605t__unsafe_size=0;
  uint16_t __t2605t__unsafe_offset=0;
  uint16_t __t2605t__unsafe_align=0;
  char __t2606t____t692t__=0;
  char* __t2607t__buf__unsafe_ptr=0;
  uint64_t __t2607t__buf__unsafe_size=0;
  uint16_t __t2607t__buf__unsafe_offset=0;
  uint16_t __t2607t__buf__unsafe_align=0;
  uint64_t __t2607t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2610t__unsafe_ptr=0;
  uint64_t __t2610t__dat__pos=0;
  uint64_t __t2610t__dat__length=0;
  char __t2610t__dat__first=0;
  char* __t2611t__unsafe_ptr=0;
  uint64_t __t2611t__dat__pos=0;
  uint64_t __t2611t__dat__length=0;
  char __t2611t__dat__first=0;
  char* __t2612t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2614t=0;
  char __t2615t=0;
  char* __t2616t__unsafe_ptr=0;
  uint64_t __t2616t__dat__pos=0;
  uint64_t __t2616t__dat__length=0;
  char __t2616t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2618t__=0;
  char __t2619t__=0;
  char* __t2620t__buf__unsafe_ptr=0;
  uint64_t __t2620t__buf__unsafe_size=0;
  uint16_t __t2620t__buf__unsafe_offset=0;
  uint16_t __t2620t__buf__unsafe_align=0;
  uint64_t __t2620t__pos=0;
  char* __t2621t__unsafe_ptr=0;
  uint64_t __t2621t__dat__pos=0;
  uint64_t __t2621t__dat__length=0;
  char __t2621t__dat__first=0;
  char* __t2622t__unsafe_ptr=0;
  uint64_t __t2622t__dat__pos=0;
  uint64_t __t2622t__dat__length=0;
  char __t2622t__dat__first=0;
  uint64_t __t2623t__=0;
  char* __t2624t__unsafe_ptr=0;
  uint64_t __t2624t__dat__pos=0;
  uint64_t __t2624t__dat__length=0;
  char __t2624t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2601t(&__t2603t__unsafe_ptr,&__t2603t__unsafe_size,&__t2603t__unsafe_offset,&__t2603t__unsafe_align);
  __t2604t=256;
  __t_errcode=alloc__t690t(&__t2603t__unsafe_ptr,&__t2603t__unsafe_size,&__t2603t__unsafe_offset,&__t2603t__unsafe_align,__t2604t,&__t2605t__unsafe_ptr,&__t2605t__unsafe_size,&__t2605t__unsafe_offset,&__t2605t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2605t__unsafe_ptr,&__t2605t__unsafe_size,&__t2605t__unsafe_offset,&__t2605t__unsafe_align,&__t2607t__buf__unsafe_ptr,&__t2607t__buf__unsafe_size,&__t2607t__buf__unsafe_offset,&__t2607t__buf__unsafe_align,&__t2607t__pos);
  CHARS__buf__unsafe_ptr=__t2607t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2607t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2607t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2607t__buf__unsafe_align;
  CHARS__pos=__t2607t__pos;
  path=__t2608t;
  __t_errcode=copy__t1028t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2609t,&__t2610t__unsafe_ptr,&__t2610t__dat__pos,&__t2610t__dat__length,&__t2610t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1028t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2611t__unsafe_ptr,&__t2611t__dat__pos,&__t2611t__dat__length,&__t2611t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t2452t(path,&__t2612t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2612t__unsafe_ptr;
  __t2614t=0;
  while(1){
  __t_complain=get__t2533t(&test_dir__unsafe_ptr,__t2614t,&__t2616t__unsafe_ptr,&__t2616t__dat__pos,&__t2616t__dat__length,&__t2616t__dat__first);
  __t2615t=__t_complain;
  entry__unsafe_ptr=__t2616t__unsafe_ptr;
  entry__dat__pos=__t2616t__dat__pos;
  entry__dat__length=__t2616t__dat__length;
  entry__dat__first=__t2616t__dat__first;
  __t2615t=__t2615t==0;
  __t2614t=__t2614t+1;
  if(!__t2615t){
  break;
  }
  __t_errcode=ends_with__t1234t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2617t,&__t2618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t2618t__,&__t2619t__);
  if(__t2619t__){
  continue;
  }
  __t2620t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2620t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2620t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2620t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2620t__pos=CHARS__pos;
  str__t976t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2621t__unsafe_ptr,&__t2621t__dat__pos,&__t2621t__dat__length,&__t2621t__dat__first);
  __t_errcode=copy_null_terminated__t1107t(&__t2620t__buf__unsafe_ptr,&__t2620t__buf__unsafe_size,&__t2620t__buf__unsafe_offset,&__t2620t__buf__unsafe_align,&__t2620t__pos,__t2621t__unsafe_ptr,__t2621t__dat__pos,__t2621t__dat__length,__t2621t__dat__first,&__t2622t__unsafe_ptr,&__t2622t__dat__pos,&__t2622t__dat__length,&__t2622t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1073t(__t2622t__unsafe_ptr,__t2622t__dat__pos,__t2622t__dat__length,__t2622t__dat__first,&__t2623t__);
  __t_errcode=str__t953t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2623t__,&__t2624t__unsafe_ptr,&__t2624t__dat__pos,&__t2624t__dat__length,&__t2624t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2624t__unsafe_ptr;
  command__dat__pos=__t2624t__dat__pos;
  command__dat__length=__t2624t__dat__length;
  command__dat__first=__t2624t__dat__first;
  print__t1131t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2591t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2451t(__t2612t__unsafe_ptr);
  exists__t591t(__t2605t__unsafe_ptr,&__t2606t____t692t__);
  if(__t2606t____t692t__){
  free__t661t(&__t2605t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2599t();return 0;}