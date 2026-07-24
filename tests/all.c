#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2852t="./smoll --cleanup ";
const char* const __t396t="\n";
const char* const __t384t="";
const char* const __t2851t="./tests/passing/";
const char* const __t2861t=".s";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"iteration end",
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

static inline __attribute__((always_inline)) void console__t375t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2843t(char** __t2871t, uint64_t* __t2872t, uint16_t* __t2873t, uint16_t* __t2874t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2871t=unsafe_ptr;
  *__t2872t=unsafe_size;
  *__t2873t=unsafe_offset;
  *__t2874t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2875t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2875t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2876t) {
  char* allocated=*__t2876t;
  if(allocated){
  free(allocated);
  }
  *__t2876t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2877t) {
  int value=0;
  *__t2877t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2878t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2878t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2879t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t2879t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t2880t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2880t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t2881t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2881t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2882t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2882t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t2883t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2883t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t2884t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2884t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2885t) {
  char* allocated=0;
  char __t669t__=0;
  char __t670t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t605t(allocated,&__t669t__);
  not__t37t(__t669t__,&__t670t__);
  if(__t670t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2885t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2886t, uint64_t* __t2887t, uint16_t* __t2888t, uint16_t* __t2889t, uint64_t size, char** __t2890t, uint64_t* __t2891t, uint16_t* __t2892t, uint16_t* __t2893t) {
  char* buffer__unsafe_ptr=*__t2886t;
  uint64_t buffer__unsafe_size=*__t2887t;
  uint16_t buffer__unsafe_offset=*__t2888t;
  uint16_t buffer__unsafe_align=*__t2889t;
  char __t706t__=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t __t715t=0;
  char __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t bytes=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  char* __t721t__=0;
  uint64_t __t723t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t129t(buffer__unsafe_size,size,&__t708t__);
  if(__t708t__){
  __t709t=0;
  neq__t153t(size,__t709t,&__t710t__);
  if(__t710t__){
  __t711t=0;
  nat__t679t(buffer__unsafe_align,&__t712t__);
  mul__t208t(__t712t__,size,&__t713t__);
  zero__t676t(buffer__unsafe_ptr,__t711t,__t713t__);
  }
  goto __t_return;
  }
  __t715t=0;
  neq__t153t(buffer__unsafe_size,__t715t,&__t716t__);
  if(__t716t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t717t__);
  mul__t208t(__t717t__,size,&__t718t__);
  bytes=__t718t__;
  __t719t=0;
  eq__t129t(bytes,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t668t(bytes,&__t721t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t723t=0;
  zero__t676t(__t721t__,__t723t,bytes);
  buffer__unsafe_ptr=__t721t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t605t(buffer__unsafe_ptr,&__t706t__);
  if(__t706t__){
  free__t675t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2886t=buffer__unsafe_ptr;
  *__t2887t=buffer__unsafe_size;
  *__t2888t=buffer__unsafe_offset;
  *__t2889t=buffer__unsafe_align;
  *__t2890t=buffer__unsafe_ptr;
  *__t2891t=buffer__unsafe_size;
  *__t2892t=buffer__unsafe_offset;
  *__t2893t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t826t(char** __t2894t, uint64_t* __t2895t, uint16_t* __t2896t, uint16_t* __t2897t, uint64_t _pos, char** __t2898t, uint64_t* __t2899t, uint16_t* __t2900t, uint16_t* __t2901t, uint64_t* __t2902t) {
  char* buf__unsafe_ptr=*__t2894t;
  uint64_t buf__unsafe_size=*__t2895t;
  uint16_t buf__unsafe_offset=*__t2896t;
  uint16_t buf__unsafe_align=*__t2897t;
  uint64_t __t827t=0;
  uint64_t pos=0;
  __t827t=_pos;
  pos=__t827t;
  goto __t_return;
  __t_return:
  *__t2894t=buf__unsafe_ptr;
  *__t2895t=buf__unsafe_size;
  *__t2896t=buf__unsafe_offset;
  *__t2897t=buf__unsafe_align;
  *__t2898t=buf__unsafe_ptr;
  *__t2899t=buf__unsafe_size;
  *__t2900t=buf__unsafe_offset;
  *__t2901t=buf__unsafe_align;
  *__t2902t=pos;
}

static inline __attribute__((always_inline)) void arena__t829t(char** __t2903t, uint64_t* __t2904t, uint16_t* __t2905t, uint16_t* __t2906t, char** __t2907t, uint64_t* __t2908t, uint16_t* __t2909t, uint16_t* __t2910t, uint64_t* __t2911t) {
  char* buf__unsafe_ptr=*__t2903t;
  uint64_t buf__unsafe_size=*__t2904t;
  uint16_t buf__unsafe_offset=*__t2905t;
  uint16_t buf__unsafe_align=*__t2906t;
  uint64_t __t830t=0;
  char* __t831t__buf__unsafe_ptr=0;
  uint64_t __t831t__buf__unsafe_size=0;
  uint16_t __t831t__buf__unsafe_offset=0;
  uint16_t __t831t__buf__unsafe_align=0;
  uint64_t __t831t__pos=0;
  __t830t=0;
  arena__t826t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t830t,&__t831t__buf__unsafe_ptr,&__t831t__buf__unsafe_size,&__t831t__buf__unsafe_offset,&__t831t__buf__unsafe_align,&__t831t__pos);
  goto __t_return;
  __t_return:
  *__t2903t=buf__unsafe_ptr;
  *__t2904t=buf__unsafe_size;
  *__t2905t=buf__unsafe_offset;
  *__t2906t=buf__unsafe_align;
  *__t2907t=__t831t__buf__unsafe_ptr;
  *__t2908t=__t831t__buf__unsafe_size;
  *__t2909t=__t831t__buf__unsafe_offset;
  *__t2910t=__t831t__buf__unsafe_align;
  *__t2911t=__t831t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t952t(char** __t2912t, uint64_t* __t2913t, uint16_t* __t2914t, uint16_t* __t2915t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2912t=unsafe_ptr;
  *__t2913t=unsafe_size;
  *__t2914t=unsafe_offset;
  *__t2915t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2916t) {
  *__t2916t=to;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t2917t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2917t=z;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t2918t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2918t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2919t) {
  *__t2919t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2920t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2920t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t814t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2921t) {
  char __t815t__=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  char* __t820t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t815t__);
  if(__t815t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t816t__);
  mul__t208t(i,__t816t__,&__t817t__);
  nat__t679t(buffer__unsafe_offset,&__t818t__);
  add__t184t(__t817t__,__t818t__,&__t819t__);
  add__t677t(buffer__unsafe_ptr,__t819t__,&__t820t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2921t=__t820t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t974t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2922t, uint64_t* __t2923t, uint64_t* __t2924t, char* __t2925t) {
  goto __t_return;
  __t_return:
  *__t2922t=unsafe_ptr;
  *__t2923t=dat__pos;
  *__t2924t=dat__length;
  *__t2925t=dat__first;
}

static inline __attribute__((always_inline)) int str__t978t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2926t, uint64_t* __t2927t, uint64_t* __t2928t, char* __t2929t) {
  char* unsafe_ptr=0;
  uint64_t __t979t__=0;
  uint64_t __t980t=0;
  char __t981t__=0;
  uint64_t __t982t__=0;
  uint64_t __t983t=0;
  char __t984t__=0;
  char* __t985t__unsafe_ptr=0;
  uint64_t __t985t__dat__pos=0;
  uint64_t __t985t__dat__length=0;
  char __t985t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t679t(buf__unsafe_align,&__t979t__);
  __t980t=1;
  neq__t153t(__t979t__,__t980t,&__t981t__);
  if(__t981t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t982t__);
  __t983t=0;
  neq__t153t(__t982t__,__t983t,&__t984t__);
  if(__t984t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t974t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t985t__unsafe_ptr,&__t985t__dat__pos,&__t985t__dat__length,&__t985t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2926t=__t985t__unsafe_ptr;
  *__t2927t=__t985t__dat__pos;
  *__t2928t=__t985t__dat__length;
  *__t2929t=__t985t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1012t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2930t, uint64_t* __t2931t, uint64_t* __t2932t, char* __t2933t) {
  uint64_t __t1013t=0;
  char __t1014t__=0;
  char* __t1016t__=0;
  char __t1017t__value=0;
  char first=0;
  char* __t1018t__unsafe_ptr=0;
  uint64_t __t1018t__dat__pos=0;
  uint64_t __t1018t__dat__length=0;
  char __t1018t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1013t=0;
  neq__t153t(length,__t1013t,&__t1014t__);
  if(__t1014t__){
  __t_errcode=get__t814t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1016t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1016t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1017t__value,__t1016t__,1);
  first=__t1017t__value;
  }
  __t_errcode=str__t978t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1018t__unsafe_ptr,&__t1018t__dat__pos,&__t1018t__dat__length,&__t1018t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2930t=__t1018t__unsafe_ptr;
  *__t2931t=__t1018t__dat__pos;
  *__t2932t=__t1018t__dat__length;
  *__t2933t=__t1018t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1034t(const char* c, char** __t2934t, uint64_t* __t2935t, uint64_t* __t2936t, char* __t2937t) {
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__unsafe_size=0;
  uint16_t __t1035t__unsafe_offset=0;
  uint16_t __t1035t__unsafe_align=0;
  char* __t1036t__unsafe_ptr=0;
  uint64_t __t1036t__unsafe_size=0;
  uint16_t __t1036t__unsafe_offset=0;
  uint16_t __t1036t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1037t__=0;
  uint64_t length=0;
  uint64_t __t1038t=0;
  uint64_t __t1039t__=0;
  uint64_t __t1040t=0;
  char* __t1042t__unsafe_ptr=0;
  uint64_t __t1042t__dat__pos=0;
  uint64_t __t1042t__dat__length=0;
  char __t1042t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t952t(&__t1035t__unsafe_ptr,&__t1035t__unsafe_size,&__t1035t__unsafe_offset,&__t1035t__unsafe_align);
  __t1036t__unsafe_ptr=__t1035t__unsafe_ptr;
  __t1036t__unsafe_size=__t1035t__unsafe_size;
  __t1036t__unsafe_offset=__t1035t__unsafe_offset;
  __t1036t__unsafe_align=__t1035t__unsafe_align;
  buf__unsafe_ptr=__t1036t__unsafe_ptr;
  buf__unsafe_size=__t1036t__unsafe_size;
  buf__unsafe_offset=__t1036t__unsafe_offset;
  buf__unsafe_align=__t1036t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1037t__);
  buf__unsafe_ptr=__t1037t__;
  if(c){
  length=strlen(c);
  }
  __t1038t=1;
  add__t184t(length,__t1038t,&__t1039t__);
  buf__unsafe_size=__t1039t__;
  __t1040t=0;
  __t_errcode=str__t1012t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1040t,length,&__t1042t__unsafe_ptr,&__t1042t__dat__pos,&__t1042t__dat__length,&__t1042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2934t=__t1042t__unsafe_ptr;
  *__t2935t=__t1042t__dat__pos;
  *__t2936t=__t1042t__dat__length;
  *__t2937t=__t1042t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1043t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2938t) {
  goto __t_return;
  __t_return:
  *__t2938t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t821t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2939t) {
  goto __t_return;
  __t_return:
  *__t2939t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t285t(uint64_t x, uint64_t y, char* __t2940t) {
  int __t286t__=0;
  char z=0;
  is_different__t104t(x,y,&__t286t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2940t=z;
}

static inline __attribute__((always_inline)) void allocated__t832t(char** __t2941t, uint64_t* __t2942t, uint16_t* __t2943t, uint16_t* __t2944t, uint64_t pos, char** __t2945t, uint64_t* __t2946t, uint16_t* __t2947t, uint16_t* __t2948t, uint64_t* __t2949t) {
  char* buf__unsafe_ptr=*__t2941t;
  uint64_t buf__unsafe_size=*__t2942t;
  uint16_t buf__unsafe_offset=*__t2943t;
  uint16_t buf__unsafe_align=*__t2944t;
  goto __t_return;
  __t_return:
  *__t2941t=buf__unsafe_ptr;
  *__t2942t=buf__unsafe_size;
  *__t2943t=buf__unsafe_offset;
  *__t2944t=buf__unsafe_align;
  *__t2945t=buf__unsafe_ptr;
  *__t2946t=buf__unsafe_size;
  *__t2947t=buf__unsafe_offset;
  *__t2948t=buf__unsafe_align;
  *__t2949t=pos;
}

static inline __attribute__((always_inline)) int alloc__t864t(char** __t2950t, uint64_t* __t2951t, uint16_t* __t2952t, uint16_t* __t2953t, uint64_t* __t2954t, uint64_t length, char** __t2955t, uint64_t* __t2956t, uint16_t* __t2957t, uint16_t* __t2958t, uint64_t* __t2959t) {
  char* allocator__buf__unsafe_ptr=*__t2950t;
  uint64_t allocator__buf__unsafe_size=*__t2951t;
  uint16_t allocator__buf__unsafe_offset=*__t2952t;
  uint16_t allocator__buf__unsafe_align=*__t2953t;
  uint64_t allocator__pos=*__t2954t;
  uint64_t __t866t__=0;
  uint64_t next_pos=0;
  uint64_t __t867t__=0;
  char __t868t__=0;
  uint64_t __t869t=0;
  uint64_t __t870t__=0;
  uint64_t pos=0;
  char* __t871t__buf__unsafe_ptr=0;
  uint64_t __t871t__buf__unsafe_size=0;
  uint16_t __t871t__buf__unsafe_offset=0;
  uint16_t __t871t__buf__unsafe_align=0;
  uint64_t __t871t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t184t(allocator__pos,length,&__t866t__);
  next_pos=__t866t__;
  len__t821t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t867t__);
  gt__t285t(next_pos,__t867t__,&__t868t__);
  if(__t868t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t869t=0;
  add__t184t(allocator__pos,__t869t,&__t870t__);
  pos=__t870t__;
  allocator__pos=next_pos;
  allocated__t832t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t871t__buf__unsafe_ptr,&__t871t__buf__unsafe_size,&__t871t__buf__unsafe_offset,&__t871t__buf__unsafe_align,&__t871t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2950t=allocator__buf__unsafe_ptr;
  *__t2951t=allocator__buf__unsafe_size;
  *__t2952t=allocator__buf__unsafe_offset;
  *__t2953t=allocator__buf__unsafe_align;
  *__t2954t=allocator__pos;
  *__t2955t=__t871t__buf__unsafe_ptr;
  *__t2956t=__t871t__buf__unsafe_size;
  *__t2957t=__t871t__buf__unsafe_offset;
  *__t2958t=__t871t__buf__unsafe_align;
  *__t2959t=__t871t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1065t(char** __t2960t, uint64_t* __t2961t, uint16_t* __t2962t, uint16_t* __t2963t, uint64_t* __t2964t, const char* _other, char** __t2965t, uint64_t* __t2966t, uint64_t* __t2967t, char* __t2968t) {
  char* CHARS__buf__unsafe_ptr=*__t2960t;
  uint64_t CHARS__buf__unsafe_size=*__t2961t;
  uint16_t CHARS__buf__unsafe_offset=*__t2962t;
  uint16_t CHARS__buf__unsafe_align=*__t2963t;
  uint64_t CHARS__pos=*__t2964t;
  char* __t1066t__unsafe_ptr=0;
  uint64_t __t1066t__dat__pos=0;
  uint64_t __t1066t__dat__length=0;
  char __t1066t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1067t__=0;
  char* __t1068t__buf__unsafe_ptr=0;
  uint64_t __t1068t__buf__unsafe_size=0;
  uint16_t __t1068t__buf__unsafe_offset=0;
  uint16_t __t1068t__buf__unsafe_align=0;
  uint64_t __t1068t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1069t__unsafe_ptr=0;
  uint64_t __t1069t__dat__pos=0;
  uint64_t __t1069t__dat__length=0;
  char __t1069t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1034t(_other,&__t1066t__unsafe_ptr,&__t1066t__dat__pos,&__t1066t__dat__length,&__t1066t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1066t__unsafe_ptr;
  other__dat__pos=__t1066t__dat__pos;
  other__dat__length=__t1066t__dat__length;
  other__dat__first=__t1066t__dat__first;
  len__t1043t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1067t__);
  __t_errcode=alloc__t864t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1067t__,&__t1068t__buf__unsafe_ptr,&__t1068t__buf__unsafe_size,&__t1068t__buf__unsafe_offset,&__t1068t__buf__unsafe_align,&__t1068t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1068t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1068t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1068t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1068t__buf__unsafe_align;
  surface__pos=__t1068t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t978t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1069t__unsafe_ptr,&__t1069t__dat__pos,&__t1069t__dat__length,&__t1069t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2960t=CHARS__buf__unsafe_ptr;
  *__t2961t=CHARS__buf__unsafe_size;
  *__t2962t=CHARS__buf__unsafe_offset;
  *__t2963t=CHARS__buf__unsafe_align;
  *__t2964t=CHARS__pos;
  *__t2965t=__t1069t__unsafe_ptr;
  *__t2966t=__t1069t__dat__pos;
  *__t2967t=__t1069t__dat__length;
  *__t2968t=__t1069t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2715t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2716t(const char* path, char** __t2969t) {
  char* unsafe_ptr=0;
  char __t2718t__=0;
  char __t2719t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t605t(unsafe_ptr,&__t2718t__);
  not__t37t(__t2718t__,&__t2719t__);
  if(__t2719t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2715t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2969t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2727t(char** __t2970t, const char** __t2971t) {
  char* f__unsafe_ptr=*__t2970t;
  char __t2728t__=0;
  char __t2729t__=0;
  char* de=0;
  char __t2730t__=0;
  char __t2731t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t605t(f__unsafe_ptr,&__t2728t__);
  not__t37t(__t2728t__,&__t2729t__);
  if(__t2729t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t605t(de,&__t2730t__);
  not__t37t(__t2730t__,&__t2731t__);
  if(__t2731t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2970t=f__unsafe_ptr;
  *__t2971t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2732t(char** __t2972t, char** __t2973t, uint64_t* __t2974t, uint64_t* __t2975t, char* __t2976t) {
  char* f__unsafe_ptr=*__t2972t;
  const char* __t2733t__=0;
  char* __t2734t__unsafe_ptr=0;
  uint64_t __t2734t__dat__pos=0;
  uint64_t __t2734t__dat__length=0;
  char __t2734t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2727t(&f__unsafe_ptr,&__t2733t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1034t(__t2733t__,&__t2734t__unsafe_ptr,&__t2734t__dat__pos,&__t2734t__dat__length,&__t2734t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2972t=f__unsafe_ptr;
  *__t2973t=__t2734t__unsafe_ptr;
  *__t2974t=__t2734t__dat__pos;
  *__t2975t=__t2734t__dat__length;
  *__t2976t=__t2734t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2798t(char** __t2977t, uint64_t __t_anon1, char** __t2978t, uint64_t* __t2979t, uint64_t* __t2980t, char* __t2981t) {
  char* data__unsafe_ptr=*__t2977t;
  char* __t2799t__unsafe_ptr=0;
  uint64_t __t2799t__dat__pos=0;
  uint64_t __t2799t__dat__length=0;
  char __t2799t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2732t(&data__unsafe_ptr,&__t2799t__unsafe_ptr,&__t2799t__dat__pos,&__t2799t__dat__length,&__t2799t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2977t=data__unsafe_ptr;
  *__t2978t=__t2799t__unsafe_ptr;
  *__t2979t=__t2799t__dat__pos;
  *__t2980t=__t2799t__dat__length;
  *__t2981t=__t2799t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1011t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2982t, uint64_t* __t2983t, uint64_t* __t2984t, char* __t2985t) {
  goto __t_return;
  __t_return:
  *__t2982t=other__unsafe_ptr;
  *__t2983t=other__dat__pos;
  *__t2984t=other__dat__length;
  *__t2985t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t261t(uint64_t x, uint64_t y, char* __t2986t) {
  int __t262t__=0;
  char z=0;
  is_different__t104t(x,y,&__t262t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2986t=z;
}

static inline __attribute__((always_inline)) int sub__t361t(uint64_t x, uint64_t y, uint64_t* __t2987t) {
  int __t362t__=0;
  char __t365t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t104t(x,y,&__t362t__);
  lt__t261t(x,y,&__t365t__);
  if(__t365t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2987t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1172t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2988t) {
  uint64_t __t1173t__=0;
  char* __t1174t__=0;
  add__t184t(s__dat__pos,i,&__t1173t__);
  add__t677t(s__unsafe_ptr,__t1173t__,&__t1174t__);
  goto __t_return;
  __t_return:
  *__t2988t=__t1174t__;
}

int slice__t1195t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2989t, uint64_t* __t2990t, uint64_t* __t2991t, char* __t2992t) {
  char* __t1196t__unsafe_ptr=0;
  uint64_t __t1196t__dat__pos=0;
  uint64_t __t1196t__dat__length=0;
  char __t1196t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1197t__=0;
  char* __t1198t__unsafe_ptr=0;
  uint64_t __t1198t__dat__pos=0;
  uint64_t __t1198t__dat__length=0;
  char __t1198t__dat__first=0;
  char __t1199t__=0;
  char __t1200t__=0;
  char __t1201t=0;
  char __t1202t__=0;
  uint64_t __t1203t__=0;
  uint64_t new_length=0;
  uint64_t __t1204t=0;
  char __t1205t__=0;
  char new_first=0;
  char* __t1207t__=0;
  char __t1208t__value=0;
  uint64_t __t1209t__=0;
  char* __t1210t__unsafe_ptr=0;
  uint64_t __t1210t__dat__pos=0;
  uint64_t __t1210t__dat__length=0;
  char __t1210t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1196t__unsafe_ptr,&__t1196t__dat__pos,&__t1196t__dat__length,&__t1196t__dat__first);
  s__unsafe_ptr=__t1196t__unsafe_ptr;
  s__dat__pos=__t1196t__dat__pos;
  s__dat__length=__t1196t__dat__length;
  s__dat__first=__t1196t__dat__first;
  eq__t129t(from,to,&__t1197t__);
  if(__t1197t__){
  __t_errcode=str__t1034t(__t384t,&__t1198t__unsafe_ptr,&__t1198t__dat__pos,&__t1198t__dat__length,&__t1198t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t285t(from,to,&__t1199t__);
  if(!__t1199t__){
  gt__t285t(to,s__dat__length,&__t1200t__);
  __t1201t=__t1200t__;
  }
  else{
  __t1201t=0;
  not__t37t(__t1201t,&__t1202t__);
  __t1201t=__t1202t__;
  }
  if(__t1201t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t361t(to,from,&__t1203t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1203t__;
  __t1204t=0;
  neq__t153t(from,__t1204t,&__t1205t__);
  if(__t1205t__){
  get__t1172t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1207t__);
  if(!__t1207t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1208t__value,__t1207t__,1);
  new_first=__t1208t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t184t(s__dat__pos,from,&__t1209t__);
  str__t974t(s__unsafe_ptr,__t1209t__,new_length,new_first,&__t1210t__unsafe_ptr,&__t1210t__dat__pos,&__t1210t__dat__length,&__t1210t__dat__first);
  __t1198t__unsafe_ptr=__t1210t__unsafe_ptr;
  __t1198t__dat__pos=__t1210t__dat__pos;
  __t1198t__dat__length=__t1210t__dat__length;
  __t1198t__dat__first=__t1210t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2989t=__t1198t__unsafe_ptr;
  *__t2990t=__t1198t__dat__pos;
  *__t2991t=__t1198t__dat__length;
  *__t2992t=__t1198t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1047t(char x, char y, char* __t2993t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2993t=z;
}

static inline __attribute__((always_inline)) void eq__t1114t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2994t) {
  uint64_t __t1115t__=0;
  uint64_t n=0;
  uint64_t __t1116t__=0;
  char __t1117t__=0;
  char __t1118t=0;
  char __t1119t__=0;
  char __t1120t=0;
  char z=0;
  len__t1043t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1115t__);
  n=__t1115t__;
  len__t1043t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1116t__);
  neq__t153t(n,__t1116t__,&__t1117t__);
  if(__t1117t__){
  __t1118t=0;
  goto __t_return;
  }
  neq__t1047t(x__dat__first,y__dat__first,&__t1119t__);
  if(__t1119t__){
  __t1120t=0;
  __t1118t=__t1120t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1118t=z;
  goto __t_return;
  __t_return:
  *__t2994t=__t1118t;
}

static inline __attribute__((always_inline)) int ends_with__t1275t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2995t) {
  char* __t1276t__unsafe_ptr=0;
  uint64_t __t1276t__dat__pos=0;
  uint64_t __t1276t__dat__length=0;
  char __t1276t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1277t__unsafe_ptr=0;
  uint64_t __t1277t__dat__pos=0;
  uint64_t __t1277t__dat__length=0;
  char __t1277t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1278t__=0;
  char __t1279t=0;
  uint64_t __t1280t__=0;
  uint64_t n=0;
  uint64_t __t1281t__=0;
  uint64_t __t1282t__=0;
  char* __t1283t__unsafe_ptr=0;
  uint64_t __t1283t__dat__pos=0;
  uint64_t __t1283t__dat__length=0;
  char __t1283t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1284t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1276t__unsafe_ptr,&__t1276t__dat__pos,&__t1276t__dat__length,&__t1276t__dat__first);
  stack__unsafe_ptr=__t1276t__unsafe_ptr;
  stack__dat__pos=__t1276t__dat__pos;
  stack__dat__length=__t1276t__dat__length;
  stack__dat__first=__t1276t__dat__first;
  __t_errcode=str__t1034t(_needle,&__t1277t__unsafe_ptr,&__t1277t__dat__pos,&__t1277t__dat__length,&__t1277t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1277t__unsafe_ptr;
  needle__dat__pos=__t1277t__dat__pos;
  needle__dat__length=__t1277t__dat__length;
  needle__dat__first=__t1277t__dat__first;
  lt__t261t(stack__dat__length,needle__dat__length,&__t1278t__);
  if(__t1278t__){
  __t1279t=0;
  goto __t_return;
  }
  len__t1043t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1280t__);
  n=__t1280t__;
  len__t1043t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1281t__);
  __t_errcode=sub__t361t(n,__t1281t__,&__t1282t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1195t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1282t__,n,&__t1283t__unsafe_ptr,&__t1283t__dat__pos,&__t1283t__dat__length,&__t1283t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1283t__unsafe_ptr;
  ret__dat__pos=__t1283t__dat__pos;
  ret__dat__length=__t1283t__dat__length;
  ret__dat__first=__t1283t__dat__first;
  eq__t1114t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1284t__);
  __t1279t=__t1284t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2995t=__t1279t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1146t(char** __t2996t, uint64_t* __t2997t, uint16_t* __t2998t, uint16_t* __t2999t, uint64_t* __t3000t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3001t, uint64_t* __t3002t, uint64_t* __t3003t, char* __t3004t) {
  char* CHARS__buf__unsafe_ptr=*__t2996t;
  uint64_t CHARS__buf__unsafe_size=*__t2997t;
  uint16_t CHARS__buf__unsafe_offset=*__t2998t;
  uint16_t CHARS__buf__unsafe_align=*__t2999t;
  uint64_t CHARS__pos=*__t3000t;
  char* __t1147t__unsafe_ptr=0;
  uint64_t __t1147t__dat__pos=0;
  uint64_t __t1147t__dat__length=0;
  char __t1147t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1148t__=0;
  uint64_t __t1149t__=0;
  uint64_t null_pos=0;
  uint64_t __t1150t=0;
  uint64_t __t1151t__=0;
  uint64_t next_pos=0;
  uint64_t __t1152t__=0;
  char __t1153t__=0;
  uint64_t __t1154t=0;
  uint64_t __t1155t__=0;
  uint64_t prev_pos=0;
  char* __t1156t__unsafe_ptr=0;
  uint64_t __t1156t__dat__pos=0;
  uint64_t __t1156t__dat__length=0;
  char __t1156t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1147t__unsafe_ptr,&__t1147t__dat__pos,&__t1147t__dat__length,&__t1147t__dat__first);
  other__unsafe_ptr=__t1147t__unsafe_ptr;
  other__dat__pos=__t1147t__dat__pos;
  other__dat__length=__t1147t__dat__length;
  other__dat__first=__t1147t__dat__first;
  len__t1043t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1148t__);
  add__t184t(CHARS__pos,__t1148t__,&__t1149t__);
  null_pos=__t1149t__;
  __t1150t=1;
  add__t184t(null_pos,__t1150t,&__t1151t__);
  next_pos=__t1151t__;
  len__t821t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1152t__);
  gt__t285t(next_pos,__t1152t__,&__t1153t__);
  if(__t1153t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  add__t184t(CHARS__pos,__t1154t,&__t1155t__);
  prev_pos=__t1155t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t978t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1156t__unsafe_ptr,&__t1156t__dat__pos,&__t1156t__dat__length,&__t1156t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2996t=CHARS__buf__unsafe_ptr;
  *__t2997t=CHARS__buf__unsafe_size;
  *__t2998t=CHARS__buf__unsafe_offset;
  *__t2999t=CHARS__buf__unsafe_align;
  *__t3000t=CHARS__pos;
  *__t3001t=__t1156t__unsafe_ptr;
  *__t3002t=__t1156t__dat__pos;
  *__t3003t=__t1156t__dat__length;
  *__t3004t=__t1156t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1111t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3005t) {
  uint64_t __t1112t__=0;
  add__t184t(s__dat__pos,s__dat__length,&__t1112t__);
  goto __t_return;
  __t_return:
  *__t3005t=__t1112t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3006t) {
  int value=0;
  *__t3006t=value;
}

static inline __attribute__((always_inline)) void not__t48t(int __t_anon0, int* __t3007t) {
  int __t49t__=0;
  true__t15t(&__t49t__);
  goto __t_return;
  __t_return:
  *__t3007t=__t49t__;
}

static inline __attribute__((always_inline)) int str__t986t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t3008t, uint64_t* __t3009t, uint64_t* __t3010t, char* __t3011t) {
  int __t988t=0;
  int __t989t__=0;
  uint64_t __t990t__=0;
  char __t991t__=0;
  uint64_t __t992t=0;
  uint64_t __t993t=0;
  char* __t995t__=0;
  char __t996t__value=0;
  char* __t997t__unsafe_ptr=0;
  uint64_t __t997t__dat__pos=0;
  uint64_t __t997t__dat__length=0;
  char __t997t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t48t(__t988t,&__t989t__);
  len__t821t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t990t__);
  gt__t285t(length,__t990t__,&__t991t__);
  if(__t991t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t992t=0;
  __t993t=0;
  __t_errcode=get__t814t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t993t,&__t995t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t995t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t996t__value,__t995t__,1);
  __t_errcode=str__t978t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t992t,length,__t996t__value,&__t997t__unsafe_ptr,&__t997t__dat__pos,&__t997t__dat__length,&__t997t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3008t=__t997t__unsafe_ptr;
  *__t3009t=__t997t__dat__pos;
  *__t3010t=__t997t__dat__length;
  *__t3011t=__t997t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1170t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  const char* endl=0;
  endl=__t396t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t822t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1091t(char** __t3012t, uint64_t* __t3013t, uint16_t* __t3014t, uint16_t* __t3015t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3012t=unsafe_ptr;
  *__t3013t=unsafe_size;
  *__t3014t=unsafe_offset;
  *__t3015t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1090t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3016t, uint64_t* __t3017t, uint64_t* __t3018t, char* __t3019t) {
  char* __t1093t__unsafe_ptr=0;
  uint64_t __t1093t__unsafe_size=0;
  uint16_t __t1093t__unsafe_offset=0;
  uint16_t __t1093t__unsafe_align=0;
  uint64_t __t1094t=0;
  uint64_t __t1095t__=0;
  uint64_t __t1096t__=0;
  char* __t1097t__unsafe_ptr=0;
  uint64_t __t1097t__unsafe_size=0;
  uint16_t __t1097t__unsafe_offset=0;
  uint16_t __t1097t__unsafe_align=0;
  char __t1098t____t706t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1099t=0;
  char* __t1100t__unsafe_ptr=0;
  uint64_t __t1100t__dat__pos=0;
  uint64_t __t1100t__dat__length=0;
  char __t1100t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1091t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align);
  __t1094t=1;
  len__t1043t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1095t__);
  add__t184t(__t1094t,__t1095t__,&__t1096t__);
  __t_errcode=alloc__t704t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align,__t1096t__,&__t1097t__unsafe_ptr,&__t1097t__unsafe_size,&__t1097t__unsafe_offset,&__t1097t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1097t__unsafe_ptr;
  buf__unsafe_size=__t1097t__unsafe_size;
  buf__unsafe_offset=__t1097t__unsafe_offset;
  buf__unsafe_align=__t1097t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t978t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1099t,other__dat__length,other__dat__first,&__t1100t__unsafe_ptr,&__t1100t__dat__pos,&__t1100t__dat__length,&__t1100t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t1100t__unsafe_ptr,&__t1098t____t706t__);
  if(__t1098t____t706t__){
  free__t675t(&__t1100t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3016t=__t1100t__unsafe_ptr;
  *__t3017t=__t1100t__dat__pos;
  *__t3018t=__t1100t__dat__length;
  *__t3019t=__t1100t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1101t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3020t, char** __t3021t, uint64_t* __t3022t, uint64_t* __t3023t, char* __t3024t) {
  char* __t1103t__unsafe_ptr=0;
  uint64_t __t1103t__dat__pos=0;
  uint64_t __t1103t__dat__length=0;
  char __t1103t__dat__first=0;
  char __t1104t____t1098t____t706t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1105t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t822t();
  __t_errcode=copy_null_terminated__t1090t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1103t__unsafe_ptr,&__t1103t__dat__pos,&__t1103t__dat__length,&__t1103t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1103t__unsafe_ptr;
  str__dat__pos=__t1103t__dat__pos;
  str__dat__length=__t1103t__dat__length;
  str__dat__first=__t1103t__dat__first;
  add__t677t(str__unsafe_ptr,str__dat__pos,&__t1105t__);
  _ret=__t1105t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t605t(str__unsafe_ptr,&__t1104t____t1098t____t706t__);
  if(__t1104t____t1098t____t706t__){
  free__t675t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3020t=cstr;
  *__t3021t=str__unsafe_ptr;
  *__t3022t=str__dat__pos;
  *__t3023t=str__dat__length;
  *__t3024t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1109t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3025t) {
  goto __t_return;
  __t_return:
  *__t3025t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2164t(const char* cmd, char** __t3026t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3026t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2163t(char* unsafe_ptr, int64_t* __t3027t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3027t=status;
}

static inline __attribute__((always_inline)) void int__t585t(uint64_t x, int64_t* __t3028t) {
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3028t=z;
}

static inline __attribute__((always_inline)) void is_different__t92t(int64_t x, int64_t y, int* __t3029t) {
  int __t93t=0;
  int __t94t__=0;
  not__t46t(__t93t,&__t94t__);
  goto __t_return;
  __t_return:
  *__t3029t=__t94t__;
}

static inline __attribute__((always_inline)) void neq__t142t(int64_t x, int64_t y, char* __t3030t) {
  int __t143t__=0;
  char z=0;
  is_different__t92t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3030t=z;
}

static inline __attribute__((always_inline)) int open__t2165t(const char* cmd, char** __t3031t) {
  char* __t2166t__=0;
  char* unsafe_ptr=0;
  char __t2167t__=0;
  char __t2168t__=0;
  char __t2169t__=0;
  int64_t __t2170t__=0;
  int64_t status=0;
  uint64_t __t2171t=0;
  int64_t __t2172t__=0;
  char __t2173t__=0;
  char __t2174t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2164t(cmd,&__t2166t__);
  unsafe_ptr=__t2166t__;
  exists__t605t(unsafe_ptr,&__t2167t__);
  not__t37t(__t2167t__,&__t2168t__);
  if(__t2168t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(unsafe_ptr,&__t2169t__);
  if(__t2169t__){
  pclose__t2163t(unsafe_ptr,&__t2170t__);
  status=__t2170t__;
  unsafe_ptr=0;
  __t2171t=0;
  int__t585t(__t2171t,&__t2172t__);
  neq__t142t(status,__t2172t__,&__t2173t__);
  if(__t2173t__){
  __t_complain=37;
  goto __t2174t__label;
  __t2174t__label:__t2174t=__t2174t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3031t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2176t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3032t) {
  const char* __t2177t__cstr=0;
  char* __t2177t__str__unsafe_ptr=0;
  uint64_t __t2177t__str__dat__pos=0;
  uint64_t __t2177t__str__dat__length=0;
  char __t2177t__str__dat__first=0;
  char __t2178t____t1104t____t1098t____t706t__=0;
  const char* __t2179t__=0;
  char* __t2180t__unsafe_ptr=0;
  char __t2181t____t2169t__=0;
  int64_t __t2181t____t2170t__=0;
  int64_t __t2181t__status=0;
  uint64_t __t2181t____t2171t=0;
  int64_t __t2181t____t2172t__=0;
  char __t2181t____t2173t__=0;
  char __t2181t____t2174t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1101t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2177t__cstr,&__t2177t__str__unsafe_ptr,&__t2177t__str__dat__pos,&__t2177t__str__dat__length,&__t2177t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1109t(__t2177t__cstr,__t2177t__str__unsafe_ptr,__t2177t__str__dat__pos,__t2177t__str__dat__length,__t2177t__str__dat__first,&__t2179t__);
  __t_errcode=open__t2165t(__t2179t__,&__t2180t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t2180t__unsafe_ptr,&__t2181t____t2169t__);
  if(__t2181t____t2169t__){
  pclose__t2163t(__t2180t__unsafe_ptr,&__t2181t____t2170t__);
  __t2181t__status=__t2181t____t2170t__;
  __t2180t__unsafe_ptr=0;
  __t2181t____t2171t=0;
  int__t585t(__t2181t____t2171t,&__t2181t____t2172t__);
  neq__t142t(__t2181t__status,__t2181t____t2172t__,&__t2181t____t2173t__);
  if(__t2181t____t2173t__){
  __t_complain=37;
  goto __t2174t__label;
  __t2174t__label:__t2181t____t2174t=__t2181t____t2174t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3032t=__t2180t__unsafe_ptr;
  
  __t_skip_returns:exists__t605t(__t2177t__str__unsafe_ptr,&__t2178t____t1104t____t1098t____t706t__);
  if(__t2178t____t1104t____t1098t____t706t__){
  free__t675t(&__t2177t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2143t(int64_t value, const char** __t3033t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3033t=ret;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2833t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2834t__unsafe_ptr=0;
  char __t2835t____t2181t____t2169t__=0;
  int64_t __t2835t____t2181t____t2170t__=0;
  int64_t __t2835t____t2181t__status=0;
  uint64_t __t2835t____t2181t____t2171t=0;
  int64_t __t2835t____t2181t____t2172t__=0;
  char __t2835t____t2181t____t2173t__=0;
  char __t2835t____t2181t____t2174t=0;
  char __t2836t=0;
  int64_t __t2837t=0;
  int64_t error=0;
  const char* __t2838t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2176t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2834t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  exists__t605t(__t2834t__unsafe_ptr,&__t2835t____t2181t____t2169t__);
  if(__t2835t____t2181t____t2169t__){
  pclose__t2163t(__t2834t__unsafe_ptr,&__t2835t____t2181t____t2170t__);
  __t2835t____t2181t__status=__t2835t____t2181t____t2170t__;
  __t2834t__unsafe_ptr=0;
  __t2835t____t2181t____t2171t=0;
  int__t585t(__t2835t____t2181t____t2171t,&__t2835t____t2181t____t2172t__);
  neq__t142t(__t2835t____t2181t__status,__t2835t____t2181t____t2172t__,&__t2835t____t2181t____t2173t__);
  if(__t2835t____t2181t____t2173t__){
  __t_complain=37;
  goto __t2174t__label;
  __t2174t__label:__t2835t____t2181t____t2174t=__t2835t____t2181t____t2174t==0;
  }
  }
  __t2837t=__t_complain;
  __t2836t=(__t_complain==0);
  __t_complain=0;
  error=__t2837t;
  __t2836t__label:__t2836t=__t2836t==0;
  if(__t2836t){
  cstr__t2143t(error,&__t2838t__);
  print__t394t(__t2838t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2840t() {
  char* __t2845t__unsafe_ptr=0;
  uint64_t __t2845t__unsafe_size=0;
  uint16_t __t2845t__unsafe_offset=0;
  uint16_t __t2845t__unsafe_align=0;
  uint64_t __t2846t=0;
  char* __t2847t__unsafe_ptr=0;
  uint64_t __t2847t__unsafe_size=0;
  uint16_t __t2847t__unsafe_offset=0;
  uint16_t __t2847t__unsafe_align=0;
  char __t2848t____t706t__=0;
  char* __t2849t__buf__unsafe_ptr=0;
  uint64_t __t2849t__buf__unsafe_size=0;
  uint16_t __t2849t__buf__unsafe_offset=0;
  uint16_t __t2849t__buf__unsafe_align=0;
  uint64_t __t2849t__pos=0;
  char* __t2850t__buf__unsafe_ptr=0;
  uint64_t __t2850t__buf__unsafe_size=0;
  uint16_t __t2850t__buf__unsafe_offset=0;
  uint16_t __t2850t__buf__unsafe_align=0;
  uint64_t __t2850t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2853t__unsafe_ptr=0;
  uint64_t __t2853t__dat__pos=0;
  uint64_t __t2853t__dat__length=0;
  char __t2853t__dat__first=0;
  char* __t2854t__unsafe_ptr=0;
  uint64_t __t2854t__dat__pos=0;
  uint64_t __t2854t__dat__length=0;
  char __t2854t__dat__first=0;
  char* __t2855t__unsafe_ptr=0;
  char* __t2857t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2858t=0;
  char __t2859t=0;
  char* __t2860t__unsafe_ptr=0;
  uint64_t __t2860t__dat__pos=0;
  uint64_t __t2860t__dat__length=0;
  char __t2860t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2862t__=0;
  char __t2863t__=0;
  char* __t2864t__buf__unsafe_ptr=0;
  uint64_t __t2864t__buf__unsafe_size=0;
  uint16_t __t2864t__buf__unsafe_offset=0;
  uint16_t __t2864t__buf__unsafe_align=0;
  uint64_t __t2864t__pos=0;
  char* __t2865t__unsafe_ptr=0;
  uint64_t __t2865t__dat__pos=0;
  uint64_t __t2865t__dat__length=0;
  char __t2865t__dat__first=0;
  char* __t2866t__unsafe_ptr=0;
  uint64_t __t2866t__dat__pos=0;
  uint64_t __t2866t__dat__length=0;
  char __t2866t__dat__first=0;
  uint64_t __t2867t__=0;
  char* __t2868t__unsafe_ptr=0;
  uint64_t __t2868t__dat__pos=0;
  uint64_t __t2868t__dat__length=0;
  char __t2868t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t375t();
  char____t_buffer____buffer__t2843t(&__t2845t__unsafe_ptr,&__t2845t__unsafe_size,&__t2845t__unsafe_offset,&__t2845t__unsafe_align);
  __t2846t=256;
  __t_errcode=alloc__t704t(&__t2845t__unsafe_ptr,&__t2845t__unsafe_size,&__t2845t__unsafe_offset,&__t2845t__unsafe_align,__t2846t,&__t2847t__unsafe_ptr,&__t2847t__unsafe_size,&__t2847t__unsafe_offset,&__t2847t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t829t(&__t2847t__unsafe_ptr,&__t2847t__unsafe_size,&__t2847t__unsafe_offset,&__t2847t__unsafe_align,&__t2849t__buf__unsafe_ptr,&__t2849t__buf__unsafe_size,&__t2849t__buf__unsafe_offset,&__t2849t__buf__unsafe_align,&__t2849t__pos);
  __t2850t__buf__unsafe_ptr=__t2849t__buf__unsafe_ptr;
  __t2850t__buf__unsafe_size=__t2849t__buf__unsafe_size;
  __t2850t__buf__unsafe_offset=__t2849t__buf__unsafe_offset;
  __t2850t__buf__unsafe_align=__t2849t__buf__unsafe_align;
  __t2850t__pos=__t2849t__pos;
  CHARS__buf__unsafe_ptr=__t2850t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2850t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2850t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2850t__buf__unsafe_align;
  CHARS__pos=__t2850t__pos;
  path=__t2851t;
  __t_errcode=copy__t1065t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2852t,&__t2853t__unsafe_ptr,&__t2853t__dat__pos,&__t2853t__dat__length,&__t2853t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1065t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2854t__unsafe_ptr,&__t2854t__dat__pos,&__t2854t__dat__length,&__t2854t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2716t(path,&__t2855t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2857t__unsafe_ptr=__t2855t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2857t__unsafe_ptr;
  __t2858t=0-1;
  while(1){
  __t2858t=__t2858t+1;
  __t_complain=get__t2798t(&test_dir__unsafe_ptr,__t2858t,&__t2860t__unsafe_ptr,&__t2860t__dat__pos,&__t2860t__dat__length,&__t2860t__dat__first);
  __t2859t=__t_complain;
  if(__t_complain){
  goto __t2859t__label;
  }
  entry__unsafe_ptr=__t2860t__unsafe_ptr;
  entry__dat__pos=__t2860t__dat__pos;
  entry__dat__length=__t2860t__dat__length;
  entry__dat__first=__t2860t__dat__first;
  __t2859t__label:__t2859t=__t2859t==0;
  if(!__t2859t){
  break;
  }
  __t_errcode=ends_with__t1275t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2861t,&__t2862t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t37t(__t2862t__,&__t2863t__);
  if(__t2863t__){
  continue;
  }
  __t2864t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2864t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2864t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2864t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2864t__pos=CHARS__pos;
  str__t1011t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
  __t_errcode=copy_null_terminated__t1146t(&__t2864t__buf__unsafe_ptr,&__t2864t__buf__unsafe_size,&__t2864t__buf__unsafe_offset,&__t2864t__buf__unsafe_align,&__t2864t__pos,__t2865t__unsafe_ptr,__t2865t__dat__pos,__t2865t__dat__length,__t2865t__dat__first,&__t2866t__unsafe_ptr,&__t2866t__dat__pos,&__t2866t__dat__length,&__t2866t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1111t(__t2866t__unsafe_ptr,__t2866t__dat__pos,__t2866t__dat__length,__t2866t__dat__first,&__t2867t__);
  __t_errcode=str__t986t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2867t__,&__t2868t__unsafe_ptr,&__t2868t__dat__pos,&__t2868t__dat__length,&__t2868t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2868t__unsafe_ptr;
  command__dat__pos=__t2868t__dat__pos;
  command__dat__length=__t2868t__dat__length;
  command__dat__first=__t2868t__dat__first;
  print__t1170t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2833t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2715t(__t2855t__unsafe_ptr);
  exists__t605t(__t2847t__unsafe_ptr,&__t2848t____t706t__);
  if(__t2848t____t706t__){
  free__t675t(&__t2847t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2840t();return 0;}