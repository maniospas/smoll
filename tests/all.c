#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2728t=".s";
const char* const __t2719t="./smoll --cleanup ";
const char* const __t2718t="./tests/passing/";
const char* const __t386t="";
const char* const __t394t="\n";
static const char* __t_all_errcodes[54] = {"noerr",
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
"interrupted by user",
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

static inline __attribute__((always_inline)) void console__t377t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2710t(char** __t2738t, uint64_t* __t2739t, uint16_t* __t2740t, uint16_t* __t2741t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2738t=unsafe_ptr;
  *__t2739t=unsafe_size;
  *__t2740t=unsafe_offset;
  *__t2741t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t603t(char* x, char* __t2742t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2742t=z;
}

static inline __attribute__((always_inline)) void free__t673t(char** __t2743t) {
  char* allocated=*__t2743t;
  if(allocated){
  free(allocated);
  }
  *__t2743t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2744t) {
  int value=0;
  *__t2744t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2745t) {
  int __t40t__=0;
  false__t10t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2745t=__t40t__;
}

static inline __attribute__((always_inline)) void is_different__t105t(uint64_t x, uint64_t y, int* __t2746t) {
  int __t107t=0;
  int __t108t__=0;
  not__t39t(__t107t,&__t108t__);
  goto __t_return;
  __t_return:
  *__t2746t=__t108t__;
}

static inline __attribute__((always_inline)) void eq__t131t(uint64_t x, uint64_t y, char* __t2747t) {
  int __t132t__=0;
  char z=0;
  is_different__t105t(x,y,&__t132t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2747t=z;
}

static inline __attribute__((always_inline)) void neq__t155t(uint64_t x, uint64_t y, char* __t2748t) {
  int __t156t__=0;
  char z=0;
  is_different__t105t(x,y,&__t156t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2748t=z;
}

static inline __attribute__((always_inline)) void nat__t677t(uint16_t x, uint64_t* __t2749t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2749t=value;
}

static inline __attribute__((always_inline)) void mul__t210t(uint64_t x, uint64_t y, uint64_t* __t2750t) {
  int __t211t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t211t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2750t=z;
}

static inline __attribute__((always_inline)) void zero__t674t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t30t(char value, char* __t2751t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2751t=z;
}

static inline __attribute__((always_inline)) int alloc__t666t(uint64_t bytes, char** __t2752t) {
  char* allocated=0;
  char __t667t__=0;
  char __t668t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t603t(allocated,&__t667t__);
  not__t30t(__t667t__,&__t668t__);
  if(__t668t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2752t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t702t(char** __t2753t, uint64_t* __t2754t, uint16_t* __t2755t, uint16_t* __t2756t, uint64_t size, char** __t2757t, uint64_t* __t2758t, uint16_t* __t2759t, uint16_t* __t2760t) {
  char* buffer__unsafe_ptr=*__t2753t;
  uint64_t buffer__unsafe_size=*__t2754t;
  uint16_t buffer__unsafe_offset=*__t2755t;
  uint16_t buffer__unsafe_align=*__t2756t;
  int __t703t=0;
  char __t704t__=0;
  char __t706t__=0;
  uint64_t __t707t=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  uint64_t __t710t__=0;
  uint64_t __t711t__=0;
  uint64_t __t713t=0;
  char __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t bytes=0;
  uint64_t __t717t=0;
  char __t718t__=0;
  char* __t719t__=0;
  int __t720t=0;
  uint64_t __t721t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t131t(buffer__unsafe_size,size,&__t706t__);
  if(__t706t__){
  __t707t=0;
  neq__t155t(size,__t707t,&__t708t__);
  if(__t708t__){
  __t709t=0;
  nat__t677t(buffer__unsafe_align,&__t710t__);
  mul__t210t(__t710t__,size,&__t711t__);
  zero__t674t(buffer__unsafe_ptr,__t709t,__t711t__);
  }
  goto __t_return;
  }
  __t713t=0;
  neq__t155t(buffer__unsafe_size,__t713t,&__t714t__);
  if(__t714t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t677t(buffer__unsafe_align,&__t715t__);
  mul__t210t(__t715t__,size,&__t716t__);
  bytes=__t716t__;
  __t717t=0;
  eq__t131t(bytes,__t717t,&__t718t__);
  if(__t718t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t666t(bytes,&__t719t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t721t=0;
  zero__t674t(__t719t__,__t721t,bytes);
  buffer__unsafe_ptr=__t719t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t603t(buffer__unsafe_ptr,&__t704t__);
  if(__t704t__){
  free__t673t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2753t=buffer__unsafe_ptr;
  *__t2754t=buffer__unsafe_size;
  *__t2755t=buffer__unsafe_offset;
  *__t2756t=buffer__unsafe_align;
  *__t2757t=buffer__unsafe_ptr;
  *__t2758t=buffer__unsafe_size;
  *__t2759t=buffer__unsafe_offset;
  *__t2760t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t2761t, uint64_t* __t2762t, uint16_t* __t2763t, uint16_t* __t2764t, uint64_t _pos, char** __t2765t, uint64_t* __t2766t, uint16_t* __t2767t, uint16_t* __t2768t, uint64_t* __t2769t) {
  char* buf__unsafe_ptr=*__t2761t;
  uint64_t buf__unsafe_size=*__t2762t;
  uint16_t buf__unsafe_offset=*__t2763t;
  uint16_t buf__unsafe_align=*__t2764t;
  uint64_t __t835t=0;
  uint64_t pos=0;
  __t835t=_pos;
  pos=__t835t;
  goto __t_return;
  __t_return:
  *__t2761t=buf__unsafe_ptr;
  *__t2762t=buf__unsafe_size;
  *__t2763t=buf__unsafe_offset;
  *__t2764t=buf__unsafe_align;
  *__t2765t=buf__unsafe_ptr;
  *__t2766t=buf__unsafe_size;
  *__t2767t=buf__unsafe_offset;
  *__t2768t=buf__unsafe_align;
  *__t2769t=pos;
}

static inline __attribute__((always_inline)) void arena__t837t(char** __t2770t, uint64_t* __t2771t, uint16_t* __t2772t, uint16_t* __t2773t, char** __t2774t, uint64_t* __t2775t, uint16_t* __t2776t, uint16_t* __t2777t, uint64_t* __t2778t) {
  char* buf__unsafe_ptr=*__t2770t;
  uint64_t buf__unsafe_size=*__t2771t;
  uint16_t buf__unsafe_offset=*__t2772t;
  uint16_t buf__unsafe_align=*__t2773t;
  uint64_t __t838t=0;
  char* __t839t__buf__unsafe_ptr=0;
  uint64_t __t839t__buf__unsafe_size=0;
  uint16_t __t839t__buf__unsafe_offset=0;
  uint16_t __t839t__buf__unsafe_align=0;
  uint64_t __t839t__pos=0;
  __t838t=0;
  arena__t834t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t838t,&__t839t__buf__unsafe_ptr,&__t839t__buf__unsafe_size,&__t839t__buf__unsafe_offset,&__t839t__buf__unsafe_align,&__t839t__pos);
  goto __t_return;
  __t_return:
  *__t2770t=buf__unsafe_ptr;
  *__t2771t=buf__unsafe_size;
  *__t2772t=buf__unsafe_offset;
  *__t2773t=buf__unsafe_align;
  *__t2774t=__t839t__buf__unsafe_ptr;
  *__t2775t=__t839t__buf__unsafe_size;
  *__t2776t=__t839t__buf__unsafe_offset;
  *__t2777t=__t839t__buf__unsafe_align;
  *__t2778t=__t839t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t947t(char** __t2779t, uint64_t* __t2780t, uint16_t* __t2781t, uint16_t* __t2782t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2779t=unsafe_ptr;
  *__t2780t=unsafe_size;
  *__t2781t=unsafe_offset;
  *__t2782t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, const char* from, char** __t2783t) {
  *__t2783t=to;
}

static inline __attribute__((always_inline)) void add__t186t(uint64_t x, uint64_t y, uint64_t* __t2784t) {
  int __t187t__=0;
  uint64_t z=0;
  is_different__t105t(x,y,&__t187t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2784t=z;
}

static inline __attribute__((always_inline)) void ge__t335t(uint64_t x, uint64_t y, char* __t2785t) {
  int __t336t__=0;
  char z=0;
  is_different__t105t(x,y,&__t336t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2785t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t24t(char* to, char* from, char** __t2786t) {
  *__t2786t=to;
}

static inline __attribute__((always_inline)) void add__t675t(char* allocated, uint64_t offset, char** __t2787t) {
  char* element=0;
  char* __t676t__=0;
  element=allocated+offset;
  unsafe_attach_type__t24t(element,allocated,&__t676t__);
  goto __t_return;
  __t_return:
  *__t2787t=__t676t__;
}

static inline __attribute__((always_inline)) int get__t822t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2788t) {
  char __t823t__=0;
  uint64_t __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  char* __t828t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t335t(i,buffer__unsafe_size,&__t823t__);
  if(__t823t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t677t(buffer__unsafe_align,&__t824t__);
  mul__t210t(i,__t824t__,&__t825t__);
  nat__t677t(buffer__unsafe_offset,&__t826t__);
  add__t186t(__t825t__,__t826t__,&__t827t__);
  add__t675t(buffer__unsafe_ptr,__t827t__,&__t828t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2788t=__t828t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t966t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2789t, uint64_t* __t2790t, uint64_t* __t2791t, char* __t2792t) {
  goto __t_return;
  __t_return:
  *__t2789t=unsafe_ptr;
  *__t2790t=dat__pos;
  *__t2791t=dat__length;
  *__t2792t=dat__first;
}

static inline __attribute__((always_inline)) int str__t970t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2793t, uint64_t* __t2794t, uint64_t* __t2795t, char* __t2796t) {
  char* unsafe_ptr=0;
  uint64_t __t971t__=0;
  uint64_t __t972t=0;
  char __t973t__=0;
  uint64_t __t974t__=0;
  uint64_t __t975t=0;
  char __t976t__=0;
  char* __t977t__unsafe_ptr=0;
  uint64_t __t977t__dat__pos=0;
  uint64_t __t977t__dat__length=0;
  char __t977t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t677t(buf__unsafe_align,&__t971t__);
  __t972t=1;
  neq__t155t(__t971t__,__t972t,&__t973t__);
  if(__t973t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t677t(buf__unsafe_offset,&__t974t__);
  __t975t=0;
  neq__t155t(__t974t__,__t975t,&__t976t__);
  if(__t976t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t966t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t977t__unsafe_ptr,&__t977t__dat__pos,&__t977t__dat__length,&__t977t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2793t=__t977t__unsafe_ptr;
  *__t2794t=__t977t__dat__pos;
  *__t2795t=__t977t__dat__length;
  *__t2796t=__t977t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1004t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2797t, uint64_t* __t2798t, uint64_t* __t2799t, char* __t2800t) {
  uint64_t __t1005t=0;
  char __t1006t__=0;
  char* __t1008t__=0;
  char __t1009t__value=0;
  char first=0;
  char* __t1010t__unsafe_ptr=0;
  uint64_t __t1010t__dat__pos=0;
  uint64_t __t1010t__dat__length=0;
  char __t1010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1005t=0;
  neq__t155t(length,__t1005t,&__t1006t__);
  if(__t1006t__){
  __t_errcode=get__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1008t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1008t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1009t__value,__t1008t__,1);
  first=__t1009t__value;
  }
  __t_errcode=str__t970t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1010t__unsafe_ptr,&__t1010t__dat__pos,&__t1010t__dat__length,&__t1010t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2797t=__t1010t__unsafe_ptr;
  *__t2798t=__t1010t__dat__pos;
  *__t2799t=__t1010t__dat__length;
  *__t2800t=__t1010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1026t(const char* c, char** __t2801t, uint64_t* __t2802t, uint64_t* __t2803t, char* __t2804t) {
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__unsafe_size=0;
  uint16_t __t1027t__unsafe_offset=0;
  uint16_t __t1027t__unsafe_align=0;
  char* __t1028t__unsafe_ptr=0;
  uint64_t __t1028t__unsafe_size=0;
  uint16_t __t1028t__unsafe_offset=0;
  uint16_t __t1028t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1029t__=0;
  uint64_t length=0;
  uint64_t __t1030t=0;
  uint64_t __t1031t__=0;
  uint64_t __t1032t=0;
  char* __t1034t__unsafe_ptr=0;
  uint64_t __t1034t__dat__pos=0;
  uint64_t __t1034t__dat__length=0;
  char __t1034t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1027t__unsafe_ptr,&__t1027t__unsafe_size,&__t1027t__unsafe_offset,&__t1027t__unsafe_align);
  __t1028t__unsafe_ptr=__t1027t__unsafe_ptr;
  __t1028t__unsafe_size=__t1027t__unsafe_size;
  __t1028t__unsafe_offset=__t1027t__unsafe_offset;
  __t1028t__unsafe_align=__t1027t__unsafe_align;
  buf__unsafe_ptr=__t1028t__unsafe_ptr;
  buf__unsafe_size=__t1028t__unsafe_size;
  buf__unsafe_offset=__t1028t__unsafe_offset;
  buf__unsafe_align=__t1028t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t25t(buf__unsafe_ptr,c,&__t1029t__);
  buf__unsafe_ptr=__t1029t__;
  if(c){
  length=strlen(c);
  }
  __t1030t=1;
  add__t186t(length,__t1030t,&__t1031t__);
  buf__unsafe_size=__t1031t__;
  __t1032t=0;
  __t_errcode=str__t1004t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1032t,length,&__t1034t__unsafe_ptr,&__t1034t__dat__pos,&__t1034t__dat__length,&__t1034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2801t=__t1034t__unsafe_ptr;
  *__t2802t=__t1034t__dat__pos;
  *__t2803t=__t1034t__dat__length;
  *__t2804t=__t1034t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1035t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2805t) {
  goto __t_return;
  __t_return:
  *__t2805t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t829t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2806t) {
  goto __t_return;
  __t_return:
  *__t2806t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t287t(uint64_t x, uint64_t y, char* __t2807t) {
  int __t288t__=0;
  char z=0;
  is_different__t105t(x,y,&__t288t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2807t=z;
}

static inline __attribute__((always_inline)) void allocated__t840t(char** __t2808t, uint64_t* __t2809t, uint16_t* __t2810t, uint16_t* __t2811t, uint64_t pos, char** __t2812t, uint64_t* __t2813t, uint16_t* __t2814t, uint16_t* __t2815t, uint64_t* __t2816t) {
  char* buf__unsafe_ptr=*__t2808t;
  uint64_t buf__unsafe_size=*__t2809t;
  uint16_t buf__unsafe_offset=*__t2810t;
  uint16_t buf__unsafe_align=*__t2811t;
  goto __t_return;
  __t_return:
  *__t2808t=buf__unsafe_ptr;
  *__t2809t=buf__unsafe_size;
  *__t2810t=buf__unsafe_offset;
  *__t2811t=buf__unsafe_align;
  *__t2812t=buf__unsafe_ptr;
  *__t2813t=buf__unsafe_size;
  *__t2814t=buf__unsafe_offset;
  *__t2815t=buf__unsafe_align;
  *__t2816t=pos;
}

static inline __attribute__((always_inline)) int alloc__t872t(char** __t2817t, uint64_t* __t2818t, uint16_t* __t2819t, uint16_t* __t2820t, uint64_t* __t2821t, uint64_t length, char** __t2822t, uint64_t* __t2823t, uint16_t* __t2824t, uint16_t* __t2825t, uint64_t* __t2826t) {
  char* allocator__buf__unsafe_ptr=*__t2817t;
  uint64_t allocator__buf__unsafe_size=*__t2818t;
  uint16_t allocator__buf__unsafe_offset=*__t2819t;
  uint16_t allocator__buf__unsafe_align=*__t2820t;
  uint64_t allocator__pos=*__t2821t;
  int __t873t=0;
  uint64_t __t874t__=0;
  uint64_t next_pos=0;
  uint64_t __t875t__=0;
  char __t876t__=0;
  uint64_t __t877t=0;
  uint64_t __t878t__=0;
  uint64_t pos=0;
  char* __t879t__buf__unsafe_ptr=0;
  uint64_t __t879t__buf__unsafe_size=0;
  uint16_t __t879t__buf__unsafe_offset=0;
  uint16_t __t879t__buf__unsafe_align=0;
  uint64_t __t879t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t186t(allocator__pos,length,&__t874t__);
  next_pos=__t874t__;
  len__t829t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t875t__);
  gt__t287t(next_pos,__t875t__,&__t876t__);
  if(__t876t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t877t=0;
  add__t186t(allocator__pos,__t877t,&__t878t__);
  pos=__t878t__;
  allocator__pos=next_pos;
  allocated__t840t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t879t__buf__unsafe_ptr,&__t879t__buf__unsafe_size,&__t879t__buf__unsafe_offset,&__t879t__buf__unsafe_align,&__t879t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2817t=allocator__buf__unsafe_ptr;
  *__t2818t=allocator__buf__unsafe_size;
  *__t2819t=allocator__buf__unsafe_offset;
  *__t2820t=allocator__buf__unsafe_align;
  *__t2821t=allocator__pos;
  *__t2822t=__t879t__buf__unsafe_ptr;
  *__t2823t=__t879t__buf__unsafe_size;
  *__t2824t=__t879t__buf__unsafe_offset;
  *__t2825t=__t879t__buf__unsafe_align;
  *__t2826t=__t879t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1057t(char** __t2827t, uint64_t* __t2828t, uint16_t* __t2829t, uint16_t* __t2830t, uint64_t* __t2831t, const char* _other, char** __t2832t, uint64_t* __t2833t, uint64_t* __t2834t, char* __t2835t) {
  char* CHARS__buf__unsafe_ptr=*__t2827t;
  uint64_t CHARS__buf__unsafe_size=*__t2828t;
  uint16_t CHARS__buf__unsafe_offset=*__t2829t;
  uint16_t CHARS__buf__unsafe_align=*__t2830t;
  uint64_t CHARS__pos=*__t2831t;
  char* __t1058t__unsafe_ptr=0;
  uint64_t __t1058t__dat__pos=0;
  uint64_t __t1058t__dat__length=0;
  char __t1058t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1059t__=0;
  char* __t1060t__buf__unsafe_ptr=0;
  uint64_t __t1060t__buf__unsafe_size=0;
  uint16_t __t1060t__buf__unsafe_offset=0;
  uint16_t __t1060t__buf__unsafe_align=0;
  uint64_t __t1060t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1061t__unsafe_ptr=0;
  uint64_t __t1061t__dat__pos=0;
  uint64_t __t1061t__dat__length=0;
  char __t1061t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1026t(_other,&__t1058t__unsafe_ptr,&__t1058t__dat__pos,&__t1058t__dat__length,&__t1058t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1058t__unsafe_ptr;
  other__dat__pos=__t1058t__dat__pos;
  other__dat__length=__t1058t__dat__length;
  other__dat__first=__t1058t__dat__first;
  len__t1035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1059t__);
  __t_errcode=alloc__t872t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1059t__,&__t1060t__buf__unsafe_ptr,&__t1060t__buf__unsafe_size,&__t1060t__buf__unsafe_offset,&__t1060t__buf__unsafe_align,&__t1060t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1060t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1060t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1060t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1060t__buf__unsafe_align;
  surface__pos=__t1060t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t970t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1061t__unsafe_ptr,&__t1061t__dat__pos,&__t1061t__dat__length,&__t1061t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2827t=CHARS__buf__unsafe_ptr;
  *__t2828t=CHARS__buf__unsafe_size;
  *__t2829t=CHARS__buf__unsafe_offset;
  *__t2830t=CHARS__buf__unsafe_align;
  *__t2831t=CHARS__pos;
  *__t2832t=__t1061t__unsafe_ptr;
  *__t2833t=__t1061t__dat__pos;
  *__t2834t=__t1061t__dat__length;
  *__t2835t=__t1061t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2584t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2585t(const char* path, char** __t2836t) {
  char* unsafe_ptr=0;
  char __t2587t__=0;
  char __t2588t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t603t(unsafe_ptr,&__t2587t__);
  not__t30t(__t2587t__,&__t2588t__);
  if(__t2588t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2584t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2836t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2596t(char** __t2837t, const char** __t2838t) {
  char* f__unsafe_ptr=*__t2837t;
  char __t2597t__=0;
  char __t2598t__=0;
  char* de=0;
  char __t2599t__=0;
  char __t2600t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t603t(f__unsafe_ptr,&__t2597t__);
  not__t30t(__t2597t__,&__t2598t__);
  if(__t2598t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t603t(de,&__t2599t__);
  not__t30t(__t2599t__,&__t2600t__);
  if(__t2600t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2837t=f__unsafe_ptr;
  *__t2838t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2601t(char** __t2839t, char** __t2840t, uint64_t* __t2841t, uint64_t* __t2842t, char* __t2843t) {
  char* f__unsafe_ptr=*__t2839t;
  const char* __t2602t__=0;
  char* __t2603t__unsafe_ptr=0;
  uint64_t __t2603t__dat__pos=0;
  uint64_t __t2603t__dat__length=0;
  char __t2603t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2596t(&f__unsafe_ptr,&__t2602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1026t(__t2602t__,&__t2603t__unsafe_ptr,&__t2603t__dat__pos,&__t2603t__dat__length,&__t2603t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2839t=f__unsafe_ptr;
  *__t2840t=__t2603t__unsafe_ptr;
  *__t2841t=__t2603t__dat__pos;
  *__t2842t=__t2603t__dat__length;
  *__t2843t=__t2603t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2667t(char** __t2844t, uint64_t __t_anon1, char** __t2845t, uint64_t* __t2846t, uint64_t* __t2847t, char* __t2848t) {
  char* data__unsafe_ptr=*__t2844t;
  char* __t2668t__unsafe_ptr=0;
  uint64_t __t2668t__dat__pos=0;
  uint64_t __t2668t__dat__length=0;
  char __t2668t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2601t(&data__unsafe_ptr,&__t2668t__unsafe_ptr,&__t2668t__dat__pos,&__t2668t__dat__length,&__t2668t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2844t=data__unsafe_ptr;
  *__t2845t=__t2668t__unsafe_ptr;
  *__t2846t=__t2668t__dat__pos;
  *__t2847t=__t2668t__dat__length;
  *__t2848t=__t2668t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1003t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2849t, uint64_t* __t2850t, uint64_t* __t2851t, char* __t2852t) {
  goto __t_return;
  __t_return:
  *__t2849t=other__unsafe_ptr;
  *__t2850t=other__dat__pos;
  *__t2851t=other__dat__length;
  *__t2852t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t263t(uint64_t x, uint64_t y, char* __t2853t) {
  int __t264t__=0;
  char z=0;
  is_different__t105t(x,y,&__t264t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2853t=z;
}

static inline __attribute__((always_inline)) int sub__t363t(uint64_t x, uint64_t y, uint64_t* __t2854t) {
  int __t364t__=0;
  int __t365t=0;
  int __t366t=0;
  char __t367t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t105t(x,y,&__t364t__);
  lt__t263t(x,y,&__t367t__);
  if(__t367t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2854t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1161t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2855t) {
  uint64_t __t1162t__=0;
  char* __t1163t__=0;
  add__t186t(s__dat__pos,i,&__t1162t__);
  add__t675t(s__unsafe_ptr,__t1162t__,&__t1163t__);
  goto __t_return;
  __t_return:
  *__t2855t=__t1163t__;
}

int slice__t1184t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2856t, uint64_t* __t2857t, uint64_t* __t2858t, char* __t2859t) {
  char* __t1185t__unsafe_ptr=0;
  uint64_t __t1185t__dat__pos=0;
  uint64_t __t1185t__dat__length=0;
  char __t1185t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1186t__=0;
  char* __t1187t__unsafe_ptr=0;
  uint64_t __t1187t__dat__pos=0;
  uint64_t __t1187t__dat__length=0;
  char __t1187t__dat__first=0;
  char __t1188t__=0;
  char __t1189t__=0;
  char __t1190t=0;
  char __t1191t__=0;
  uint64_t __t1192t__=0;
  uint64_t new_length=0;
  uint64_t __t1193t=0;
  char __t1194t__=0;
  char new_first=0;
  char* __t1196t__=0;
  char __t1197t__value=0;
  uint64_t __t1198t__=0;
  char* __t1199t__unsafe_ptr=0;
  uint64_t __t1199t__dat__pos=0;
  uint64_t __t1199t__dat__length=0;
  char __t1199t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1003t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1185t__unsafe_ptr,&__t1185t__dat__pos,&__t1185t__dat__length,&__t1185t__dat__first);
  s__unsafe_ptr=__t1185t__unsafe_ptr;
  s__dat__pos=__t1185t__dat__pos;
  s__dat__length=__t1185t__dat__length;
  s__dat__first=__t1185t__dat__first;
  eq__t131t(from,to,&__t1186t__);
  if(__t1186t__){
  __t_errcode=str__t1026t(__t386t,&__t1187t__unsafe_ptr,&__t1187t__dat__pos,&__t1187t__dat__length,&__t1187t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t287t(from,to,&__t1188t__);
  if(!__t1188t__){
  gt__t287t(to,s__dat__length,&__t1189t__);
  __t1190t=__t1189t__;
  }
  else{
  __t1190t=0;
  not__t30t(__t1190t,&__t1191t__);
  __t1190t=__t1191t__;
  }
  if(__t1190t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t363t(to,from,&__t1192t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1192t__;
  __t1193t=0;
  neq__t155t(from,__t1193t,&__t1194t__);
  if(__t1194t__){
  get__t1161t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1196t__);
  if(!__t1196t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1197t__value,__t1196t__,1);
  new_first=__t1197t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t186t(s__dat__pos,from,&__t1198t__);
  str__t966t(s__unsafe_ptr,__t1198t__,new_length,new_first,&__t1199t__unsafe_ptr,&__t1199t__dat__pos,&__t1199t__dat__length,&__t1199t__dat__first);
  __t1187t__unsafe_ptr=__t1199t__unsafe_ptr;
  __t1187t__dat__pos=__t1199t__dat__pos;
  __t1187t__dat__length=__t1199t__dat__length;
  __t1187t__dat__first=__t1199t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2856t=__t1187t__unsafe_ptr;
  *__t2857t=__t1187t__dat__pos;
  *__t2858t=__t1187t__dat__length;
  *__t2859t=__t1187t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1039t(char x, char y, char* __t2860t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2860t=z;
}

static inline __attribute__((always_inline)) void eq__t1104t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2861t) {
  uint64_t __t1105t__=0;
  uint64_t n=0;
  uint64_t __t1106t__=0;
  char __t1107t__=0;
  char __t1108t=0;
  char __t1109t__=0;
  char __t1110t=0;
  char z=0;
  len__t1035t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1105t__);
  n=__t1105t__;
  len__t1035t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1106t__);
  neq__t155t(n,__t1106t__,&__t1107t__);
  if(__t1107t__){
  __t1108t=0;
  goto __t_return;
  }
  neq__t1039t(x__dat__first,y__dat__first,&__t1109t__);
  if(__t1109t__){
  __t1110t=0;
  __t1108t=__t1110t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1108t=z;
  goto __t_return;
  __t_return:
  *__t2861t=__t1108t;
}

static inline __attribute__((always_inline)) int ends_with__t1264t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2862t) {
  char* __t1265t__unsafe_ptr=0;
  uint64_t __t1265t__dat__pos=0;
  uint64_t __t1265t__dat__length=0;
  char __t1265t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1266t__unsafe_ptr=0;
  uint64_t __t1266t__dat__pos=0;
  uint64_t __t1266t__dat__length=0;
  char __t1266t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1267t__=0;
  char __t1268t=0;
  uint64_t __t1269t__=0;
  uint64_t n=0;
  uint64_t __t1270t__=0;
  uint64_t __t1271t__=0;
  char* __t1272t__unsafe_ptr=0;
  uint64_t __t1272t__dat__pos=0;
  uint64_t __t1272t__dat__length=0;
  char __t1272t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1273t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1003t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1265t__unsafe_ptr,&__t1265t__dat__pos,&__t1265t__dat__length,&__t1265t__dat__first);
  stack__unsafe_ptr=__t1265t__unsafe_ptr;
  stack__dat__pos=__t1265t__dat__pos;
  stack__dat__length=__t1265t__dat__length;
  stack__dat__first=__t1265t__dat__first;
  __t_errcode=str__t1026t(_needle,&__t1266t__unsafe_ptr,&__t1266t__dat__pos,&__t1266t__dat__length,&__t1266t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1266t__unsafe_ptr;
  needle__dat__pos=__t1266t__dat__pos;
  needle__dat__length=__t1266t__dat__length;
  needle__dat__first=__t1266t__dat__first;
  lt__t263t(stack__dat__length,needle__dat__length,&__t1267t__);
  if(__t1267t__){
  __t1268t=0;
  goto __t_return;
  }
  len__t1035t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1269t__);
  n=__t1269t__;
  len__t1035t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1270t__);
  __t_errcode=sub__t363t(n,__t1270t__,&__t1271t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1184t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1271t__,n,&__t1272t__unsafe_ptr,&__t1272t__dat__pos,&__t1272t__dat__length,&__t1272t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1272t__unsafe_ptr;
  ret__dat__pos=__t1272t__dat__pos;
  ret__dat__length=__t1272t__dat__length;
  ret__dat__first=__t1272t__dat__first;
  eq__t1104t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1273t__);
  __t1268t=__t1273t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2862t=__t1268t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1135t(char** __t2863t, uint64_t* __t2864t, uint16_t* __t2865t, uint16_t* __t2866t, uint64_t* __t2867t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2868t, uint64_t* __t2869t, uint64_t* __t2870t, char* __t2871t) {
  char* CHARS__buf__unsafe_ptr=*__t2863t;
  uint64_t CHARS__buf__unsafe_size=*__t2864t;
  uint16_t CHARS__buf__unsafe_offset=*__t2865t;
  uint16_t CHARS__buf__unsafe_align=*__t2866t;
  uint64_t CHARS__pos=*__t2867t;
  char* __t1136t__unsafe_ptr=0;
  uint64_t __t1136t__dat__pos=0;
  uint64_t __t1136t__dat__length=0;
  char __t1136t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1137t__=0;
  uint64_t __t1138t__=0;
  uint64_t null_pos=0;
  uint64_t __t1139t=0;
  uint64_t __t1140t__=0;
  uint64_t next_pos=0;
  uint64_t __t1141t__=0;
  char __t1142t__=0;
  char* endpos=0;
  uint64_t __t1143t=0;
  uint64_t __t1144t__=0;
  uint64_t prev_pos=0;
  char* __t1145t__unsafe_ptr=0;
  uint64_t __t1145t__dat__pos=0;
  uint64_t __t1145t__dat__length=0;
  char __t1145t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1003t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1136t__unsafe_ptr,&__t1136t__dat__pos,&__t1136t__dat__length,&__t1136t__dat__first);
  other__unsafe_ptr=__t1136t__unsafe_ptr;
  other__dat__pos=__t1136t__dat__pos;
  other__dat__length=__t1136t__dat__length;
  other__dat__first=__t1136t__dat__first;
  len__t1035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1137t__);
  add__t186t(CHARS__pos,__t1137t__,&__t1138t__);
  null_pos=__t1138t__;
  __t1139t=1;
  add__t186t(null_pos,__t1139t,&__t1140t__);
  next_pos=__t1140t__;
  len__t829t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1141t__);
  gt__t287t(next_pos,__t1141t__,&__t1142t__);
  if(__t1142t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1143t=0;
  add__t186t(CHARS__pos,__t1143t,&__t1144t__);
  prev_pos=__t1144t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t970t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1145t__unsafe_ptr,&__t1145t__dat__pos,&__t1145t__dat__length,&__t1145t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2863t=CHARS__buf__unsafe_ptr;
  *__t2864t=CHARS__buf__unsafe_size;
  *__t2865t=CHARS__buf__unsafe_offset;
  *__t2866t=CHARS__buf__unsafe_align;
  *__t2867t=CHARS__pos;
  *__t2868t=__t1145t__unsafe_ptr;
  *__t2869t=__t1145t__dat__pos;
  *__t2870t=__t1145t__dat__length;
  *__t2871t=__t1145t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1101t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2872t) {
  uint64_t __t1102t__=0;
  add__t186t(s__dat__pos,s__dat__length,&__t1102t__);
  goto __t_return;
  __t_return:
  *__t2872t=__t1102t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2873t) {
  int value=0;
  *__t2873t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t2874t) {
  int __t42t__=0;
  true__t11t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t2874t=__t42t__;
}

static inline __attribute__((always_inline)) int str__t978t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2875t, uint64_t* __t2876t, uint64_t* __t2877t, char* __t2878t) {
  int __t979t=0;
  int __t980t=0;
  int __t981t__=0;
  uint64_t __t982t__=0;
  char __t983t__=0;
  uint64_t __t984t=0;
  uint64_t __t985t=0;
  char* __t987t__=0;
  char __t988t__value=0;
  char* __t989t__unsafe_ptr=0;
  uint64_t __t989t__dat__pos=0;
  uint64_t __t989t__dat__length=0;
  char __t989t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t41t(__t980t,&__t981t__);
  len__t829t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t982t__);
  gt__t287t(length,__t982t__,&__t983t__);
  if(__t983t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t984t=0;
  __t985t=0;
  __t_errcode=get__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t985t,&__t987t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t987t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t988t__value,__t987t__,1);
  __t_errcode=str__t970t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t984t,length,__t988t__value,&__t989t__unsafe_ptr,&__t989t__dat__pos,&__t989t__dat__length,&__t989t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2875t=__t989t__unsafe_ptr;
  *__t2876t=__t989t__dat__pos;
  *__t2877t=__t989t__dat__length;
  *__t2878t=__t989t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1159t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1160t=0;
  const char* endl=0;
  endl=__t394t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t830t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1082t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2879t, uint64_t* __t2880t, uint64_t* __t2881t, char* __t2882t) {
  char* __t1083t__unsafe_ptr=0;
  uint64_t __t1083t__unsafe_size=0;
  uint16_t __t1083t__unsafe_offset=0;
  uint16_t __t1083t__unsafe_align=0;
  uint64_t __t1084t=0;
  uint64_t __t1085t__=0;
  uint64_t __t1086t__=0;
  char* __t1087t__unsafe_ptr=0;
  uint64_t __t1087t__unsafe_size=0;
  uint16_t __t1087t__unsafe_offset=0;
  uint16_t __t1087t__unsafe_align=0;
  char __t1088t____t704t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1089t=0;
  char* __t1090t__unsafe_ptr=0;
  uint64_t __t1090t__dat__pos=0;
  uint64_t __t1090t__dat__length=0;
  char __t1090t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1083t__unsafe_ptr,&__t1083t__unsafe_size,&__t1083t__unsafe_offset,&__t1083t__unsafe_align);
  __t1084t=1;
  len__t1035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1085t__);
  add__t186t(__t1084t,__t1085t__,&__t1086t__);
  __t_errcode=alloc__t702t(&__t1083t__unsafe_ptr,&__t1083t__unsafe_size,&__t1083t__unsafe_offset,&__t1083t__unsafe_align,__t1086t__,&__t1087t__unsafe_ptr,&__t1087t__unsafe_size,&__t1087t__unsafe_offset,&__t1087t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1087t__unsafe_ptr;
  buf__unsafe_size=__t1087t__unsafe_size;
  buf__unsafe_offset=__t1087t__unsafe_offset;
  buf__unsafe_align=__t1087t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1089t=0;
  __t_errcode=str__t970t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1089t,other__dat__length,other__dat__first,&__t1090t__unsafe_ptr,&__t1090t__dat__pos,&__t1090t__dat__length,&__t1090t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t603t(__t1090t__unsafe_ptr,&__t1088t____t704t__);
  if(__t1088t____t704t__){
  free__t673t(&__t1090t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2879t=__t1090t__unsafe_ptr;
  *__t2880t=__t1090t__dat__pos;
  *__t2881t=__t1090t__dat__length;
  *__t2882t=__t1090t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1091t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2883t, char** __t2884t, uint64_t* __t2885t, uint64_t* __t2886t, char* __t2887t) {
  char* __t1093t__unsafe_ptr=0;
  uint64_t __t1093t__dat__pos=0;
  uint64_t __t1093t__dat__length=0;
  char __t1093t__dat__first=0;
  char __t1094t____t1088t____t704t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1095t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t830t();
  __t_errcode=copy_null_terminated__t1082t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1093t__unsafe_ptr,&__t1093t__dat__pos,&__t1093t__dat__length,&__t1093t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1093t__unsafe_ptr;
  str__dat__pos=__t1093t__dat__pos;
  str__dat__length=__t1093t__dat__length;
  str__dat__first=__t1093t__dat__first;
  add__t675t(str__unsafe_ptr,str__dat__pos,&__t1095t__);
  _ret=__t1095t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t603t(str__unsafe_ptr,&__t1094t____t1088t____t704t__);
  if(__t1094t____t1088t____t704t__){
  free__t673t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2883t=cstr;
  *__t2884t=str__unsafe_ptr;
  *__t2885t=str__dat__pos;
  *__t2886t=str__dat__length;
  *__t2887t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1099t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2888t) {
  goto __t_return;
  __t_return:
  *__t2888t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2144t(const char* cmd, char** __t2889t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2889t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2143t(char* unsafe_ptr, int64_t* __t2890t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2890t=status;
}

static inline __attribute__((always_inline)) void int__t583t(uint64_t x, int64_t* __t2891t) {
  int __t584t=0;
  int __t585t=0;
  int __t586t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2891t=z;
}

static inline __attribute__((always_inline)) void is_different__t89t(int64_t x, int64_t y, int* __t2892t) {
  int __t91t=0;
  int __t92t__=0;
  not__t39t(__t91t,&__t92t__);
  goto __t_return;
  __t_return:
  *__t2892t=__t92t__;
}

static inline __attribute__((always_inline)) void neq__t144t(int64_t x, int64_t y, char* __t2893t) {
  int __t145t__=0;
  char z=0;
  is_different__t89t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2893t=z;
}

static inline __attribute__((always_inline)) int open__t2145t(const char* cmd, char** __t2894t) {
  char* __t2146t__=0;
  char* unsafe_ptr=0;
  char __t2147t__=0;
  char __t2148t__=0;
  char __t2149t__=0;
  int64_t __t2150t__=0;
  int64_t status=0;
  uint64_t __t2151t=0;
  int64_t __t2152t__=0;
  char __t2153t__=0;
  char __t2154t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2144t(cmd,&__t2146t__);
  unsafe_ptr=__t2146t__;
  exists__t603t(unsafe_ptr,&__t2147t__);
  not__t30t(__t2147t__,&__t2148t__);
  if(__t2148t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t603t(unsafe_ptr,&__t2149t__);
  if(__t2149t__){
  pclose__t2143t(unsafe_ptr,&__t2150t__);
  status=__t2150t__;
  unsafe_ptr=0;
  __t2151t=0;
  int__t583t(__t2151t,&__t2152t__);
  neq__t144t(status,__t2152t__,&__t2153t__);
  if(__t2153t__){
  __t_complain=37;
  __t2154t=__t2154t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2894t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2156t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2895t) {
  const char* __t2157t__cstr=0;
  char* __t2157t__str__unsafe_ptr=0;
  uint64_t __t2157t__str__dat__pos=0;
  uint64_t __t2157t__str__dat__length=0;
  char __t2157t__str__dat__first=0;
  char __t2158t____t1094t____t1088t____t704t__=0;
  const char* __t2159t__=0;
  char* __t2160t__unsafe_ptr=0;
  char __t2161t____t2149t__=0;
  int64_t __t2161t____t2150t__=0;
  int64_t __t2161t__status=0;
  uint64_t __t2161t____t2151t=0;
  int64_t __t2161t____t2152t__=0;
  char __t2161t____t2153t__=0;
  char __t2161t____t2154t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1091t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2157t__cstr,&__t2157t__str__unsafe_ptr,&__t2157t__str__dat__pos,&__t2157t__str__dat__length,&__t2157t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1099t(__t2157t__cstr,__t2157t__str__unsafe_ptr,__t2157t__str__dat__pos,__t2157t__str__dat__length,__t2157t__str__dat__first,&__t2159t__);
  __t_errcode=open__t2145t(__t2159t__,&__t2160t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t603t(__t2160t__unsafe_ptr,&__t2161t____t2149t__);
  if(__t2161t____t2149t__){
  pclose__t2143t(__t2160t__unsafe_ptr,&__t2161t____t2150t__);
  __t2161t__status=__t2161t____t2150t__;
  __t2160t__unsafe_ptr=0;
  __t2161t____t2151t=0;
  int__t583t(__t2161t____t2151t,&__t2161t____t2152t__);
  neq__t144t(__t2161t__status,__t2161t____t2152t__,&__t2161t____t2153t__);
  if(__t2161t____t2153t__){
  __t_complain=37;
  __t2161t____t2154t=__t2161t____t2154t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2895t=__t2160t__unsafe_ptr;
  
  __t_skip_returns:exists__t603t(__t2157t__str__unsafe_ptr,&__t2158t____t1094t____t1088t____t704t__);
  if(__t2158t____t1094t____t1088t____t704t__){
  free__t673t(&__t2157t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2123t(int64_t value, const char** __t2896t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2896t=ret;
}

static inline __attribute__((always_inline)) void print__t392t(const char* value) {
  int __t393t=0;
  const char* endl=0;
  endl=__t394t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2700t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2701t__unsafe_ptr=0;
  char __t2702t____t2161t____t2149t__=0;
  int64_t __t2702t____t2161t____t2150t__=0;
  int64_t __t2702t____t2161t__status=0;
  uint64_t __t2702t____t2161t____t2151t=0;
  int64_t __t2702t____t2161t____t2152t__=0;
  char __t2702t____t2161t____t2153t__=0;
  char __t2702t____t2161t____t2154t=0;
  char* proc__unsafe_ptr=0;
  char __t2703t=0;
  int64_t __t2704t=0;
  int64_t error=0;
  const char* __t2705t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2156t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2701t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2701t__unsafe_ptr;
  exists__t603t(__t2701t__unsafe_ptr,&__t2702t____t2161t____t2149t__);
  if(__t2702t____t2161t____t2149t__){
  pclose__t2143t(__t2701t__unsafe_ptr,&__t2702t____t2161t____t2150t__);
  __t2702t____t2161t__status=__t2702t____t2161t____t2150t__;
  __t2701t__unsafe_ptr=0;
  __t2702t____t2161t____t2151t=0;
  int__t583t(__t2702t____t2161t____t2151t,&__t2702t____t2161t____t2152t__);
  neq__t144t(__t2702t____t2161t__status,__t2702t____t2161t____t2152t__,&__t2702t____t2161t____t2153t__);
  if(__t2702t____t2161t____t2153t__){
  __t_complain=37;
  __t2702t____t2161t____t2154t=__t2702t____t2161t____t2154t==0;
  }
  }
  __t2704t=__t_complain;
  __t2703t=(__t_complain==0);
  __t_complain=0;
  error=__t2704t;
  __t2703t=__t2703t==0;
  if(__t2703t){
  cstr__t2123t(error,&__t2705t__);
  print__t392t(__t2705t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2707t() {
  char* __t2712t__unsafe_ptr=0;
  uint64_t __t2712t__unsafe_size=0;
  uint16_t __t2712t__unsafe_offset=0;
  uint16_t __t2712t__unsafe_align=0;
  uint64_t __t2713t=0;
  char* __t2714t__unsafe_ptr=0;
  uint64_t __t2714t__unsafe_size=0;
  uint16_t __t2714t__unsafe_offset=0;
  uint16_t __t2714t__unsafe_align=0;
  char __t2715t____t704t__=0;
  char* __t2716t__buf__unsafe_ptr=0;
  uint64_t __t2716t__buf__unsafe_size=0;
  uint16_t __t2716t__buf__unsafe_offset=0;
  uint16_t __t2716t__buf__unsafe_align=0;
  uint64_t __t2716t__pos=0;
  char* __t2717t__buf__unsafe_ptr=0;
  uint64_t __t2717t__buf__unsafe_size=0;
  uint16_t __t2717t__buf__unsafe_offset=0;
  uint16_t __t2717t__buf__unsafe_align=0;
  uint64_t __t2717t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2720t__unsafe_ptr=0;
  uint64_t __t2720t__dat__pos=0;
  uint64_t __t2720t__dat__length=0;
  char __t2720t__dat__first=0;
  char* __t2721t__unsafe_ptr=0;
  uint64_t __t2721t__dat__pos=0;
  uint64_t __t2721t__dat__length=0;
  char __t2721t__dat__first=0;
  char* __t2722t__unsafe_ptr=0;
  char* __t2724t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2725t=0;
  char __t2726t=0;
  char* __t2727t__unsafe_ptr=0;
  uint64_t __t2727t__dat__pos=0;
  uint64_t __t2727t__dat__length=0;
  char __t2727t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2729t__=0;
  char __t2730t__=0;
  char* __t2731t__buf__unsafe_ptr=0;
  uint64_t __t2731t__buf__unsafe_size=0;
  uint16_t __t2731t__buf__unsafe_offset=0;
  uint16_t __t2731t__buf__unsafe_align=0;
  uint64_t __t2731t__pos=0;
  char* __t2732t__unsafe_ptr=0;
  uint64_t __t2732t__dat__pos=0;
  uint64_t __t2732t__dat__length=0;
  char __t2732t__dat__first=0;
  char* __t2733t__unsafe_ptr=0;
  uint64_t __t2733t__dat__pos=0;
  uint64_t __t2733t__dat__length=0;
  char __t2733t__dat__first=0;
  uint64_t __t2734t__=0;
  char* __t2735t__unsafe_ptr=0;
  uint64_t __t2735t__dat__pos=0;
  uint64_t __t2735t__dat__length=0;
  char __t2735t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t377t();
  char____t_buffer____buffer__t2710t(&__t2712t__unsafe_ptr,&__t2712t__unsafe_size,&__t2712t__unsafe_offset,&__t2712t__unsafe_align);
  __t2713t=256;
  __t_errcode=alloc__t702t(&__t2712t__unsafe_ptr,&__t2712t__unsafe_size,&__t2712t__unsafe_offset,&__t2712t__unsafe_align,__t2713t,&__t2714t__unsafe_ptr,&__t2714t__unsafe_size,&__t2714t__unsafe_offset,&__t2714t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t837t(&__t2714t__unsafe_ptr,&__t2714t__unsafe_size,&__t2714t__unsafe_offset,&__t2714t__unsafe_align,&__t2716t__buf__unsafe_ptr,&__t2716t__buf__unsafe_size,&__t2716t__buf__unsafe_offset,&__t2716t__buf__unsafe_align,&__t2716t__pos);
  __t2717t__buf__unsafe_ptr=__t2716t__buf__unsafe_ptr;
  __t2717t__buf__unsafe_size=__t2716t__buf__unsafe_size;
  __t2717t__buf__unsafe_offset=__t2716t__buf__unsafe_offset;
  __t2717t__buf__unsafe_align=__t2716t__buf__unsafe_align;
  __t2717t__pos=__t2716t__pos;
  CHARS__buf__unsafe_ptr=__t2717t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2717t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2717t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2717t__buf__unsafe_align;
  CHARS__pos=__t2717t__pos;
  path=__t2718t;
  __t_errcode=copy__t1057t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2719t,&__t2720t__unsafe_ptr,&__t2720t__dat__pos,&__t2720t__dat__length,&__t2720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1057t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2721t__unsafe_ptr,&__t2721t__dat__pos,&__t2721t__dat__length,&__t2721t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2585t(path,&__t2722t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2724t__unsafe_ptr=__t2722t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2724t__unsafe_ptr;
  __t2725t=0-1;
  while(1){
  __t2725t=__t2725t+1;
  __t_complain=get__t2667t(&test_dir__unsafe_ptr,__t2725t,&__t2727t__unsafe_ptr,&__t2727t__dat__pos,&__t2727t__dat__length,&__t2727t__dat__first);
  __t2726t=__t_complain;
  entry__unsafe_ptr=__t2727t__unsafe_ptr;
  entry__dat__pos=__t2727t__dat__pos;
  entry__dat__length=__t2727t__dat__length;
  entry__dat__first=__t2727t__dat__first;
  __t2726t=__t2726t==0;
  if(!__t2726t){
  break;
  }
  __t_errcode=ends_with__t1264t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2728t,&__t2729t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t30t(__t2729t__,&__t2730t__);
  if(__t2730t__){
  continue;
  }
  __t2731t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2731t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2731t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2731t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2731t__pos=CHARS__pos;
  str__t1003t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2732t__unsafe_ptr,&__t2732t__dat__pos,&__t2732t__dat__length,&__t2732t__dat__first);
  __t_errcode=copy_null_terminated__t1135t(&__t2731t__buf__unsafe_ptr,&__t2731t__buf__unsafe_size,&__t2731t__buf__unsafe_offset,&__t2731t__buf__unsafe_align,&__t2731t__pos,__t2732t__unsafe_ptr,__t2732t__dat__pos,__t2732t__dat__length,__t2732t__dat__first,&__t2733t__unsafe_ptr,&__t2733t__dat__pos,&__t2733t__dat__length,&__t2733t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1101t(__t2733t__unsafe_ptr,__t2733t__dat__pos,__t2733t__dat__length,__t2733t__dat__first,&__t2734t__);
  __t_errcode=str__t978t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2734t__,&__t2735t__unsafe_ptr,&__t2735t__dat__pos,&__t2735t__dat__length,&__t2735t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2735t__unsafe_ptr;
  command__dat__pos=__t2735t__dat__pos;
  command__dat__length=__t2735t__dat__length;
  command__dat__first=__t2735t__dat__first;
  print__t1159t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2700t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2584t(__t2722t__unsafe_ptr);
  exists__t603t(__t2714t__unsafe_ptr,&__t2715t____t704t__);
  if(__t2715t____t704t__){
  free__t673t(&__t2714t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2707t();return 0;}