#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t396t="\n";
const char* const __t2871t=".s";
const char* const __t384t="";
const char* const __t2862t="./smoll --cleanup ";
const char* const __t2861t="./tests/passing/";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2853t(char** __t2881t, uint64_t* __t2882t, uint16_t* __t2883t, uint16_t* __t2884t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2881t=unsafe_ptr;
  *__t2882t=unsafe_size;
  *__t2883t=unsafe_offset;
  *__t2884t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2885t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2885t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2886t) {
  char* allocated=*__t2886t;
  if(allocated){
  free(allocated);
  }
  *__t2886t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2887t) {
  int value=0;
  *__t2887t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2888t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2888t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2889t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t2889t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t2890t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2890t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t2891t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2891t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2892t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2892t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t2893t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2893t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t2894t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2894t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2895t) {
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
  *__t2895t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2896t, uint64_t* __t2897t, uint16_t* __t2898t, uint16_t* __t2899t, uint64_t size, char** __t2900t, uint64_t* __t2901t, uint16_t* __t2902t, uint16_t* __t2903t) {
  char* buffer__unsafe_ptr=*__t2896t;
  uint64_t buffer__unsafe_size=*__t2897t;
  uint16_t buffer__unsafe_offset=*__t2898t;
  uint16_t buffer__unsafe_align=*__t2899t;
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
  *__t2896t=buffer__unsafe_ptr;
  *__t2897t=buffer__unsafe_size;
  *__t2898t=buffer__unsafe_offset;
  *__t2899t=buffer__unsafe_align;
  *__t2900t=buffer__unsafe_ptr;
  *__t2901t=buffer__unsafe_size;
  *__t2902t=buffer__unsafe_offset;
  *__t2903t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t836t(char** __t2904t, uint64_t* __t2905t, uint16_t* __t2906t, uint16_t* __t2907t, uint64_t _pos, char** __t2908t, uint64_t* __t2909t, uint16_t* __t2910t, uint16_t* __t2911t, uint64_t* __t2912t) {
  char* buf__unsafe_ptr=*__t2904t;
  uint64_t buf__unsafe_size=*__t2905t;
  uint16_t buf__unsafe_offset=*__t2906t;
  uint16_t buf__unsafe_align=*__t2907t;
  uint64_t __t837t=0;
  uint64_t pos=0;
  __t837t=_pos;
  pos=__t837t;
  goto __t_return;
  __t_return:
  *__t2904t=buf__unsafe_ptr;
  *__t2905t=buf__unsafe_size;
  *__t2906t=buf__unsafe_offset;
  *__t2907t=buf__unsafe_align;
  *__t2908t=buf__unsafe_ptr;
  *__t2909t=buf__unsafe_size;
  *__t2910t=buf__unsafe_offset;
  *__t2911t=buf__unsafe_align;
  *__t2912t=pos;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2913t, uint64_t* __t2914t, uint16_t* __t2915t, uint16_t* __t2916t, char** __t2917t, uint64_t* __t2918t, uint16_t* __t2919t, uint16_t* __t2920t, uint64_t* __t2921t) {
  char* buf__unsafe_ptr=*__t2913t;
  uint64_t buf__unsafe_size=*__t2914t;
  uint16_t buf__unsafe_offset=*__t2915t;
  uint16_t buf__unsafe_align=*__t2916t;
  uint64_t __t840t=0;
  char* __t841t__buf__unsafe_ptr=0;
  uint64_t __t841t__buf__unsafe_size=0;
  uint16_t __t841t__buf__unsafe_offset=0;
  uint16_t __t841t__buf__unsafe_align=0;
  uint64_t __t841t__pos=0;
  __t840t=0;
  arena__t836t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t840t,&__t841t__buf__unsafe_ptr,&__t841t__buf__unsafe_size,&__t841t__buf__unsafe_offset,&__t841t__buf__unsafe_align,&__t841t__pos);
  goto __t_return;
  __t_return:
  *__t2913t=buf__unsafe_ptr;
  *__t2914t=buf__unsafe_size;
  *__t2915t=buf__unsafe_offset;
  *__t2916t=buf__unsafe_align;
  *__t2917t=__t841t__buf__unsafe_ptr;
  *__t2918t=__t841t__buf__unsafe_size;
  *__t2919t=__t841t__buf__unsafe_offset;
  *__t2920t=__t841t__buf__unsafe_align;
  *__t2921t=__t841t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t962t(char** __t2922t, uint64_t* __t2923t, uint16_t* __t2924t, uint16_t* __t2925t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2922t=unsafe_ptr;
  *__t2923t=unsafe_size;
  *__t2924t=unsafe_offset;
  *__t2925t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2926t) {
  *__t2926t=to;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t2927t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2927t=z;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t2928t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2928t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2929t) {
  *__t2929t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2930t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2930t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t824t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2931t) {
  char __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  uint64_t __t829t__=0;
  char* __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t825t__);
  if(__t825t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t826t__);
  mul__t208t(i,__t826t__,&__t827t__);
  nat__t679t(buffer__unsafe_offset,&__t828t__);
  add__t184t(__t827t__,__t828t__,&__t829t__);
  add__t677t(buffer__unsafe_ptr,__t829t__,&__t830t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2931t=__t830t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t984t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2932t, uint64_t* __t2933t, uint64_t* __t2934t, char* __t2935t) {
  goto __t_return;
  __t_return:
  *__t2932t=unsafe_ptr;
  *__t2933t=dat__pos;
  *__t2934t=dat__length;
  *__t2935t=dat__first;
}

static inline __attribute__((always_inline)) int str__t988t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2936t, uint64_t* __t2937t, uint64_t* __t2938t, char* __t2939t) {
  char* unsafe_ptr=0;
  uint64_t __t989t__=0;
  uint64_t __t990t=0;
  char __t991t__=0;
  uint64_t __t992t__=0;
  uint64_t __t993t=0;
  char __t994t__=0;
  char* __t995t__unsafe_ptr=0;
  uint64_t __t995t__dat__pos=0;
  uint64_t __t995t__dat__length=0;
  char __t995t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t679t(buf__unsafe_align,&__t989t__);
  __t990t=1;
  neq__t153t(__t989t__,__t990t,&__t991t__);
  if(__t991t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t992t__);
  __t993t=0;
  neq__t153t(__t992t__,__t993t,&__t994t__);
  if(__t994t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t984t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t995t__unsafe_ptr,&__t995t__dat__pos,&__t995t__dat__length,&__t995t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2936t=__t995t__unsafe_ptr;
  *__t2937t=__t995t__dat__pos;
  *__t2938t=__t995t__dat__length;
  *__t2939t=__t995t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1022t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2940t, uint64_t* __t2941t, uint64_t* __t2942t, char* __t2943t) {
  uint64_t __t1023t=0;
  char __t1024t__=0;
  char* __t1026t__=0;
  char __t1027t__value=0;
  char first=0;
  char* __t1028t__unsafe_ptr=0;
  uint64_t __t1028t__dat__pos=0;
  uint64_t __t1028t__dat__length=0;
  char __t1028t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1023t=0;
  neq__t153t(length,__t1023t,&__t1024t__);
  if(__t1024t__){
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1027t__value,__t1026t__,1);
  first=__t1027t__value;
  }
  __t_errcode=str__t988t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1028t__unsafe_ptr,&__t1028t__dat__pos,&__t1028t__dat__length,&__t1028t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2940t=__t1028t__unsafe_ptr;
  *__t2941t=__t1028t__dat__pos;
  *__t2942t=__t1028t__dat__length;
  *__t2943t=__t1028t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1044t(const char* c, char** __t2944t, uint64_t* __t2945t, uint64_t* __t2946t, char* __t2947t) {
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__unsafe_size=0;
  uint16_t __t1045t__unsafe_offset=0;
  uint16_t __t1045t__unsafe_align=0;
  char* __t1046t__unsafe_ptr=0;
  uint64_t __t1046t__unsafe_size=0;
  uint16_t __t1046t__unsafe_offset=0;
  uint16_t __t1046t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1047t__=0;
  uint64_t length=0;
  uint64_t __t1048t=0;
  uint64_t __t1049t__=0;
  uint64_t __t1050t=0;
  char* __t1052t__unsafe_ptr=0;
  uint64_t __t1052t__dat__pos=0;
  uint64_t __t1052t__dat__length=0;
  char __t1052t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t962t(&__t1045t__unsafe_ptr,&__t1045t__unsafe_size,&__t1045t__unsafe_offset,&__t1045t__unsafe_align);
  __t1046t__unsafe_ptr=__t1045t__unsafe_ptr;
  __t1046t__unsafe_size=__t1045t__unsafe_size;
  __t1046t__unsafe_offset=__t1045t__unsafe_offset;
  __t1046t__unsafe_align=__t1045t__unsafe_align;
  buf__unsafe_ptr=__t1046t__unsafe_ptr;
  buf__unsafe_size=__t1046t__unsafe_size;
  buf__unsafe_offset=__t1046t__unsafe_offset;
  buf__unsafe_align=__t1046t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1047t__);
  buf__unsafe_ptr=__t1047t__;
  if(c){
  length=strlen(c);
  }
  __t1048t=1;
  add__t184t(length,__t1048t,&__t1049t__);
  buf__unsafe_size=__t1049t__;
  __t1050t=0;
  __t_errcode=str__t1022t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1050t,length,&__t1052t__unsafe_ptr,&__t1052t__dat__pos,&__t1052t__dat__length,&__t1052t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2944t=__t1052t__unsafe_ptr;
  *__t2945t=__t1052t__dat__pos;
  *__t2946t=__t1052t__dat__length;
  *__t2947t=__t1052t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1053t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2948t) {
  goto __t_return;
  __t_return:
  *__t2948t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2949t) {
  goto __t_return;
  __t_return:
  *__t2949t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t285t(uint64_t x, uint64_t y, char* __t2950t) {
  int __t286t__=0;
  char z=0;
  is_different__t104t(x,y,&__t286t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2950t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t2951t, uint64_t* __t2952t, uint16_t* __t2953t, uint16_t* __t2954t, uint64_t pos, char** __t2955t, uint64_t* __t2956t, uint16_t* __t2957t, uint16_t* __t2958t, uint64_t* __t2959t) {
  char* buf__unsafe_ptr=*__t2951t;
  uint64_t buf__unsafe_size=*__t2952t;
  uint16_t buf__unsafe_offset=*__t2953t;
  uint16_t buf__unsafe_align=*__t2954t;
  goto __t_return;
  __t_return:
  *__t2951t=buf__unsafe_ptr;
  *__t2952t=buf__unsafe_size;
  *__t2953t=buf__unsafe_offset;
  *__t2954t=buf__unsafe_align;
  *__t2955t=buf__unsafe_ptr;
  *__t2956t=buf__unsafe_size;
  *__t2957t=buf__unsafe_offset;
  *__t2958t=buf__unsafe_align;
  *__t2959t=pos;
}

static inline __attribute__((always_inline)) int alloc__t874t(char** __t2960t, uint64_t* __t2961t, uint16_t* __t2962t, uint16_t* __t2963t, uint64_t* __t2964t, uint64_t length, char** __t2965t, uint64_t* __t2966t, uint16_t* __t2967t, uint16_t* __t2968t, uint64_t* __t2969t) {
  char* allocator__buf__unsafe_ptr=*__t2960t;
  uint64_t allocator__buf__unsafe_size=*__t2961t;
  uint16_t allocator__buf__unsafe_offset=*__t2962t;
  uint16_t allocator__buf__unsafe_align=*__t2963t;
  uint64_t allocator__pos=*__t2964t;
  uint64_t __t876t__=0;
  uint64_t next_pos=0;
  uint64_t __t877t__=0;
  char __t878t__=0;
  uint64_t __t879t=0;
  uint64_t __t880t__=0;
  uint64_t pos=0;
  char* __t881t__buf__unsafe_ptr=0;
  uint64_t __t881t__buf__unsafe_size=0;
  uint16_t __t881t__buf__unsafe_offset=0;
  uint16_t __t881t__buf__unsafe_align=0;
  uint64_t __t881t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t184t(allocator__pos,length,&__t876t__);
  next_pos=__t876t__;
  len__t831t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t877t__);
  gt__t285t(next_pos,__t877t__,&__t878t__);
  if(__t878t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t879t=0;
  add__t184t(allocator__pos,__t879t,&__t880t__);
  pos=__t880t__;
  allocator__pos=next_pos;
  allocated__t842t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t881t__buf__unsafe_ptr,&__t881t__buf__unsafe_size,&__t881t__buf__unsafe_offset,&__t881t__buf__unsafe_align,&__t881t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2960t=allocator__buf__unsafe_ptr;
  *__t2961t=allocator__buf__unsafe_size;
  *__t2962t=allocator__buf__unsafe_offset;
  *__t2963t=allocator__buf__unsafe_align;
  *__t2964t=allocator__pos;
  *__t2965t=__t881t__buf__unsafe_ptr;
  *__t2966t=__t881t__buf__unsafe_size;
  *__t2967t=__t881t__buf__unsafe_offset;
  *__t2968t=__t881t__buf__unsafe_align;
  *__t2969t=__t881t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1075t(char** __t2970t, uint64_t* __t2971t, uint16_t* __t2972t, uint16_t* __t2973t, uint64_t* __t2974t, const char* _other, char** __t2975t, uint64_t* __t2976t, uint64_t* __t2977t, char* __t2978t) {
  char* CHARS__buf__unsafe_ptr=*__t2970t;
  uint64_t CHARS__buf__unsafe_size=*__t2971t;
  uint16_t CHARS__buf__unsafe_offset=*__t2972t;
  uint16_t CHARS__buf__unsafe_align=*__t2973t;
  uint64_t CHARS__pos=*__t2974t;
  char* __t1076t__unsafe_ptr=0;
  uint64_t __t1076t__dat__pos=0;
  uint64_t __t1076t__dat__length=0;
  char __t1076t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1077t__=0;
  char* __t1078t__buf__unsafe_ptr=0;
  uint64_t __t1078t__buf__unsafe_size=0;
  uint16_t __t1078t__buf__unsafe_offset=0;
  uint16_t __t1078t__buf__unsafe_align=0;
  uint64_t __t1078t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1079t__unsafe_ptr=0;
  uint64_t __t1079t__dat__pos=0;
  uint64_t __t1079t__dat__length=0;
  char __t1079t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1044t(_other,&__t1076t__unsafe_ptr,&__t1076t__dat__pos,&__t1076t__dat__length,&__t1076t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1076t__unsafe_ptr;
  other__dat__pos=__t1076t__dat__pos;
  other__dat__length=__t1076t__dat__length;
  other__dat__first=__t1076t__dat__first;
  len__t1053t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1077t__);
  __t_errcode=alloc__t874t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1077t__,&__t1078t__buf__unsafe_ptr,&__t1078t__buf__unsafe_size,&__t1078t__buf__unsafe_offset,&__t1078t__buf__unsafe_align,&__t1078t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1078t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1078t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1078t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1078t__buf__unsafe_align;
  surface__pos=__t1078t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t988t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1079t__unsafe_ptr,&__t1079t__dat__pos,&__t1079t__dat__length,&__t1079t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2970t=CHARS__buf__unsafe_ptr;
  *__t2971t=CHARS__buf__unsafe_size;
  *__t2972t=CHARS__buf__unsafe_offset;
  *__t2973t=CHARS__buf__unsafe_align;
  *__t2974t=CHARS__pos;
  *__t2975t=__t1079t__unsafe_ptr;
  *__t2976t=__t1079t__dat__pos;
  *__t2977t=__t1079t__dat__length;
  *__t2978t=__t1079t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2725t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2726t(const char* path, char** __t2979t) {
  char* unsafe_ptr=0;
  char __t2728t__=0;
  char __t2729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t605t(unsafe_ptr,&__t2728t__);
  not__t37t(__t2728t__,&__t2729t__);
  if(__t2729t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2725t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2979t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2737t(char** __t2980t, const char** __t2981t) {
  char* f__unsafe_ptr=*__t2980t;
  char __t2738t__=0;
  char __t2739t__=0;
  char* de=0;
  char __t2740t__=0;
  char __t2741t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t605t(f__unsafe_ptr,&__t2738t__);
  not__t37t(__t2738t__,&__t2739t__);
  if(__t2739t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t605t(de,&__t2740t__);
  not__t37t(__t2740t__,&__t2741t__);
  if(__t2741t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2980t=f__unsafe_ptr;
  *__t2981t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2742t(char** __t2982t, char** __t2983t, uint64_t* __t2984t, uint64_t* __t2985t, char* __t2986t) {
  char* f__unsafe_ptr=*__t2982t;
  const char* __t2743t__=0;
  char* __t2744t__unsafe_ptr=0;
  uint64_t __t2744t__dat__pos=0;
  uint64_t __t2744t__dat__length=0;
  char __t2744t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2737t(&f__unsafe_ptr,&__t2743t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1044t(__t2743t__,&__t2744t__unsafe_ptr,&__t2744t__dat__pos,&__t2744t__dat__length,&__t2744t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2982t=f__unsafe_ptr;
  *__t2983t=__t2744t__unsafe_ptr;
  *__t2984t=__t2744t__dat__pos;
  *__t2985t=__t2744t__dat__length;
  *__t2986t=__t2744t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2808t(char** __t2987t, uint64_t __t_anon1, char** __t2988t, uint64_t* __t2989t, uint64_t* __t2990t, char* __t2991t) {
  char* data__unsafe_ptr=*__t2987t;
  char* __t2809t__unsafe_ptr=0;
  uint64_t __t2809t__dat__pos=0;
  uint64_t __t2809t__dat__length=0;
  char __t2809t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2742t(&data__unsafe_ptr,&__t2809t__unsafe_ptr,&__t2809t__dat__pos,&__t2809t__dat__length,&__t2809t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2987t=data__unsafe_ptr;
  *__t2988t=__t2809t__unsafe_ptr;
  *__t2989t=__t2809t__dat__pos;
  *__t2990t=__t2809t__dat__length;
  *__t2991t=__t2809t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1021t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2992t, uint64_t* __t2993t, uint64_t* __t2994t, char* __t2995t) {
  goto __t_return;
  __t_return:
  *__t2992t=other__unsafe_ptr;
  *__t2993t=other__dat__pos;
  *__t2994t=other__dat__length;
  *__t2995t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t261t(uint64_t x, uint64_t y, char* __t2996t) {
  int __t262t__=0;
  char z=0;
  is_different__t104t(x,y,&__t262t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2996t=z;
}

static inline __attribute__((always_inline)) int sub__t361t(uint64_t x, uint64_t y, uint64_t* __t2997t) {
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
  *__t2997t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1182t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2998t) {
  uint64_t __t1183t__=0;
  char* __t1184t__=0;
  add__t184t(s__dat__pos,i,&__t1183t__);
  add__t677t(s__unsafe_ptr,__t1183t__,&__t1184t__);
  goto __t_return;
  __t_return:
  *__t2998t=__t1184t__;
}

int slice__t1205t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2999t, uint64_t* __t3000t, uint64_t* __t3001t, char* __t3002t) {
  char* __t1206t__unsafe_ptr=0;
  uint64_t __t1206t__dat__pos=0;
  uint64_t __t1206t__dat__length=0;
  char __t1206t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1207t__=0;
  char* __t1208t__unsafe_ptr=0;
  uint64_t __t1208t__dat__pos=0;
  uint64_t __t1208t__dat__length=0;
  char __t1208t__dat__first=0;
  char __t1209t__=0;
  char __t1210t__=0;
  char __t1211t=0;
  char __t1212t__=0;
  uint64_t __t1213t__=0;
  uint64_t new_length=0;
  uint64_t __t1214t=0;
  char __t1215t__=0;
  char new_first=0;
  char* __t1217t__=0;
  char __t1218t__value=0;
  uint64_t __t1219t__=0;
  char* __t1220t__unsafe_ptr=0;
  uint64_t __t1220t__dat__pos=0;
  uint64_t __t1220t__dat__length=0;
  char __t1220t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1021t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1206t__unsafe_ptr,&__t1206t__dat__pos,&__t1206t__dat__length,&__t1206t__dat__first);
  s__unsafe_ptr=__t1206t__unsafe_ptr;
  s__dat__pos=__t1206t__dat__pos;
  s__dat__length=__t1206t__dat__length;
  s__dat__first=__t1206t__dat__first;
  eq__t129t(from,to,&__t1207t__);
  if(__t1207t__){
  __t_errcode=str__t1044t(__t384t,&__t1208t__unsafe_ptr,&__t1208t__dat__pos,&__t1208t__dat__length,&__t1208t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t285t(from,to,&__t1209t__);
  if(!__t1209t__){
  gt__t285t(to,s__dat__length,&__t1210t__);
  __t1211t=__t1210t__;
  }
  else{
  __t1211t=0;
  not__t37t(__t1211t,&__t1212t__);
  __t1211t=__t1212t__;
  }
  if(__t1211t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t361t(to,from,&__t1213t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1213t__;
  __t1214t=0;
  neq__t153t(from,__t1214t,&__t1215t__);
  if(__t1215t__){
  get__t1182t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1217t__);
  if(!__t1217t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1218t__value,__t1217t__,1);
  new_first=__t1218t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t184t(s__dat__pos,from,&__t1219t__);
  str__t984t(s__unsafe_ptr,__t1219t__,new_length,new_first,&__t1220t__unsafe_ptr,&__t1220t__dat__pos,&__t1220t__dat__length,&__t1220t__dat__first);
  __t1208t__unsafe_ptr=__t1220t__unsafe_ptr;
  __t1208t__dat__pos=__t1220t__dat__pos;
  __t1208t__dat__length=__t1220t__dat__length;
  __t1208t__dat__first=__t1220t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2999t=__t1208t__unsafe_ptr;
  *__t3000t=__t1208t__dat__pos;
  *__t3001t=__t1208t__dat__length;
  *__t3002t=__t1208t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1057t(char x, char y, char* __t3003t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3003t=z;
}

static inline __attribute__((always_inline)) void eq__t1124t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3004t) {
  uint64_t __t1125t__=0;
  uint64_t n=0;
  uint64_t __t1126t__=0;
  char __t1127t__=0;
  char __t1128t=0;
  char __t1129t__=0;
  char __t1130t=0;
  char z=0;
  len__t1053t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1125t__);
  n=__t1125t__;
  len__t1053t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1126t__);
  neq__t153t(n,__t1126t__,&__t1127t__);
  if(__t1127t__){
  __t1128t=0;
  goto __t_return;
  }
  neq__t1057t(x__dat__first,y__dat__first,&__t1129t__);
  if(__t1129t__){
  __t1130t=0;
  __t1128t=__t1130t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1128t=z;
  goto __t_return;
  __t_return:
  *__t3004t=__t1128t;
}

static inline __attribute__((always_inline)) int ends_with__t1285t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3005t) {
  char* __t1286t__unsafe_ptr=0;
  uint64_t __t1286t__dat__pos=0;
  uint64_t __t1286t__dat__length=0;
  char __t1286t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1287t__unsafe_ptr=0;
  uint64_t __t1287t__dat__pos=0;
  uint64_t __t1287t__dat__length=0;
  char __t1287t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1288t__=0;
  char __t1289t=0;
  uint64_t __t1290t__=0;
  uint64_t n=0;
  uint64_t __t1291t__=0;
  uint64_t __t1292t__=0;
  char* __t1293t__unsafe_ptr=0;
  uint64_t __t1293t__dat__pos=0;
  uint64_t __t1293t__dat__length=0;
  char __t1293t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1294t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1021t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1286t__unsafe_ptr,&__t1286t__dat__pos,&__t1286t__dat__length,&__t1286t__dat__first);
  stack__unsafe_ptr=__t1286t__unsafe_ptr;
  stack__dat__pos=__t1286t__dat__pos;
  stack__dat__length=__t1286t__dat__length;
  stack__dat__first=__t1286t__dat__first;
  __t_errcode=str__t1044t(_needle,&__t1287t__unsafe_ptr,&__t1287t__dat__pos,&__t1287t__dat__length,&__t1287t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1287t__unsafe_ptr;
  needle__dat__pos=__t1287t__dat__pos;
  needle__dat__length=__t1287t__dat__length;
  needle__dat__first=__t1287t__dat__first;
  lt__t261t(stack__dat__length,needle__dat__length,&__t1288t__);
  if(__t1288t__){
  __t1289t=0;
  goto __t_return;
  }
  len__t1053t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1290t__);
  n=__t1290t__;
  len__t1053t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1291t__);
  __t_errcode=sub__t361t(n,__t1291t__,&__t1292t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1205t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1292t__,n,&__t1293t__unsafe_ptr,&__t1293t__dat__pos,&__t1293t__dat__length,&__t1293t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1293t__unsafe_ptr;
  ret__dat__pos=__t1293t__dat__pos;
  ret__dat__length=__t1293t__dat__length;
  ret__dat__first=__t1293t__dat__first;
  eq__t1124t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1294t__);
  __t1289t=__t1294t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3005t=__t1289t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1156t(char** __t3006t, uint64_t* __t3007t, uint16_t* __t3008t, uint16_t* __t3009t, uint64_t* __t3010t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3011t, uint64_t* __t3012t, uint64_t* __t3013t, char* __t3014t) {
  char* CHARS__buf__unsafe_ptr=*__t3006t;
  uint64_t CHARS__buf__unsafe_size=*__t3007t;
  uint16_t CHARS__buf__unsafe_offset=*__t3008t;
  uint16_t CHARS__buf__unsafe_align=*__t3009t;
  uint64_t CHARS__pos=*__t3010t;
  char* __t1157t__unsafe_ptr=0;
  uint64_t __t1157t__dat__pos=0;
  uint64_t __t1157t__dat__length=0;
  char __t1157t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1158t__=0;
  uint64_t __t1159t__=0;
  uint64_t null_pos=0;
  uint64_t __t1160t=0;
  uint64_t __t1161t__=0;
  uint64_t next_pos=0;
  uint64_t __t1162t__=0;
  char __t1163t__=0;
  uint64_t __t1164t=0;
  uint64_t __t1165t__=0;
  uint64_t prev_pos=0;
  char* __t1166t__unsafe_ptr=0;
  uint64_t __t1166t__dat__pos=0;
  uint64_t __t1166t__dat__length=0;
  char __t1166t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1021t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1157t__unsafe_ptr,&__t1157t__dat__pos,&__t1157t__dat__length,&__t1157t__dat__first);
  other__unsafe_ptr=__t1157t__unsafe_ptr;
  other__dat__pos=__t1157t__dat__pos;
  other__dat__length=__t1157t__dat__length;
  other__dat__first=__t1157t__dat__first;
  len__t1053t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1158t__);
  add__t184t(CHARS__pos,__t1158t__,&__t1159t__);
  null_pos=__t1159t__;
  __t1160t=1;
  add__t184t(null_pos,__t1160t,&__t1161t__);
  next_pos=__t1161t__;
  len__t831t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1162t__);
  gt__t285t(next_pos,__t1162t__,&__t1163t__);
  if(__t1163t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  add__t184t(CHARS__pos,__t1164t,&__t1165t__);
  prev_pos=__t1165t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t988t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1166t__unsafe_ptr,&__t1166t__dat__pos,&__t1166t__dat__length,&__t1166t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3006t=CHARS__buf__unsafe_ptr;
  *__t3007t=CHARS__buf__unsafe_size;
  *__t3008t=CHARS__buf__unsafe_offset;
  *__t3009t=CHARS__buf__unsafe_align;
  *__t3010t=CHARS__pos;
  *__t3011t=__t1166t__unsafe_ptr;
  *__t3012t=__t1166t__dat__pos;
  *__t3013t=__t1166t__dat__length;
  *__t3014t=__t1166t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1121t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3015t) {
  uint64_t __t1122t__=0;
  add__t184t(s__dat__pos,s__dat__length,&__t1122t__);
  goto __t_return;
  __t_return:
  *__t3015t=__t1122t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3016t) {
  int value=0;
  *__t3016t=value;
}

static inline __attribute__((always_inline)) void not__t48t(int __t_anon0, int* __t3017t) {
  int __t49t__=0;
  true__t15t(&__t49t__);
  goto __t_return;
  __t_return:
  *__t3017t=__t49t__;
}

static inline __attribute__((always_inline)) int str__t996t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t3018t, uint64_t* __t3019t, uint64_t* __t3020t, char* __t3021t) {
  int __t998t=0;
  int __t999t__=0;
  uint64_t __t1000t__=0;
  char __t1001t__=0;
  uint64_t __t1002t=0;
  uint64_t __t1003t=0;
  char* __t1005t__=0;
  char __t1006t__value=0;
  char* __t1007t__unsafe_ptr=0;
  uint64_t __t1007t__dat__pos=0;
  uint64_t __t1007t__dat__length=0;
  char __t1007t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t48t(__t998t,&__t999t__);
  len__t831t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1000t__);
  gt__t285t(length,__t1000t__,&__t1001t__);
  if(__t1001t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1002t=0;
  __t1003t=0;
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,&__t1005t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1005t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1006t__value,__t1005t__,1);
  __t_errcode=str__t988t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1002t,length,__t1006t__value,&__t1007t__unsafe_ptr,&__t1007t__dat__pos,&__t1007t__dat__length,&__t1007t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3018t=__t1007t__unsafe_ptr;
  *__t3019t=__t1007t__dat__pos;
  *__t3020t=__t1007t__dat__length;
  *__t3021t=__t1007t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1180t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  const char* endl=0;
  endl=__t396t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1101t(char** __t3022t, uint64_t* __t3023t, uint16_t* __t3024t, uint16_t* __t3025t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3022t=unsafe_ptr;
  *__t3023t=unsafe_size;
  *__t3024t=unsafe_offset;
  *__t3025t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1100t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3026t, uint64_t* __t3027t, uint64_t* __t3028t, char* __t3029t) {
  char* __t1103t__unsafe_ptr=0;
  uint64_t __t1103t__unsafe_size=0;
  uint16_t __t1103t__unsafe_offset=0;
  uint16_t __t1103t__unsafe_align=0;
  uint64_t __t1104t=0;
  uint64_t __t1105t__=0;
  uint64_t __t1106t__=0;
  char* __t1107t__unsafe_ptr=0;
  uint64_t __t1107t__unsafe_size=0;
  uint16_t __t1107t__unsafe_offset=0;
  uint16_t __t1107t__unsafe_align=0;
  char __t1108t____t706t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1109t=0;
  char* __t1110t__unsafe_ptr=0;
  uint64_t __t1110t__dat__pos=0;
  uint64_t __t1110t__dat__length=0;
  char __t1110t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1101t(&__t1103t__unsafe_ptr,&__t1103t__unsafe_size,&__t1103t__unsafe_offset,&__t1103t__unsafe_align);
  __t1104t=1;
  len__t1053t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1105t__);
  add__t184t(__t1104t,__t1105t__,&__t1106t__);
  __t_errcode=alloc__t704t(&__t1103t__unsafe_ptr,&__t1103t__unsafe_size,&__t1103t__unsafe_offset,&__t1103t__unsafe_align,__t1106t__,&__t1107t__unsafe_ptr,&__t1107t__unsafe_size,&__t1107t__unsafe_offset,&__t1107t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1107t__unsafe_ptr;
  buf__unsafe_size=__t1107t__unsafe_size;
  buf__unsafe_offset=__t1107t__unsafe_offset;
  buf__unsafe_align=__t1107t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t988t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1109t,other__dat__length,other__dat__first,&__t1110t__unsafe_ptr,&__t1110t__dat__pos,&__t1110t__dat__length,&__t1110t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t1110t__unsafe_ptr,&__t1108t____t706t__);
  if(__t1108t____t706t__){
  free__t675t(&__t1110t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3026t=__t1110t__unsafe_ptr;
  *__t3027t=__t1110t__dat__pos;
  *__t3028t=__t1110t__dat__length;
  *__t3029t=__t1110t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1111t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3030t, char** __t3031t, uint64_t* __t3032t, uint64_t* __t3033t, char* __t3034t) {
  char* __t1113t__unsafe_ptr=0;
  uint64_t __t1113t__dat__pos=0;
  uint64_t __t1113t__dat__length=0;
  char __t1113t__dat__first=0;
  char __t1114t____t1108t____t706t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1115t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t832t();
  __t_errcode=copy_null_terminated__t1100t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1113t__unsafe_ptr,&__t1113t__dat__pos,&__t1113t__dat__length,&__t1113t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1113t__unsafe_ptr;
  str__dat__pos=__t1113t__dat__pos;
  str__dat__length=__t1113t__dat__length;
  str__dat__first=__t1113t__dat__first;
  add__t677t(str__unsafe_ptr,str__dat__pos,&__t1115t__);
  _ret=__t1115t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t605t(str__unsafe_ptr,&__t1114t____t1108t____t706t__);
  if(__t1114t____t1108t____t706t__){
  free__t675t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3030t=cstr;
  *__t3031t=str__unsafe_ptr;
  *__t3032t=str__dat__pos;
  *__t3033t=str__dat__length;
  *__t3034t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1119t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3035t) {
  goto __t_return;
  __t_return:
  *__t3035t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2174t(const char* cmd, char** __t3036t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3036t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2173t(char* unsafe_ptr, int64_t* __t3037t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3037t=status;
}

static inline __attribute__((always_inline)) void int__t585t(uint64_t x, int64_t* __t3038t) {
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3038t=z;
}

static inline __attribute__((always_inline)) void is_different__t92t(int64_t x, int64_t y, int* __t3039t) {
  int __t93t=0;
  int __t94t__=0;
  not__t46t(__t93t,&__t94t__);
  goto __t_return;
  __t_return:
  *__t3039t=__t94t__;
}

static inline __attribute__((always_inline)) void neq__t142t(int64_t x, int64_t y, char* __t3040t) {
  int __t143t__=0;
  char z=0;
  is_different__t92t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3040t=z;
}

static inline __attribute__((always_inline)) int open__t2175t(const char* cmd, char** __t3041t) {
  char* __t2176t__=0;
  char* unsafe_ptr=0;
  char __t2177t__=0;
  char __t2178t__=0;
  char __t2179t__=0;
  int64_t __t2180t__=0;
  int64_t status=0;
  uint64_t __t2181t=0;
  int64_t __t2182t__=0;
  char __t2183t__=0;
  char __t2184t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2174t(cmd,&__t2176t__);
  unsafe_ptr=__t2176t__;
  exists__t605t(unsafe_ptr,&__t2177t__);
  not__t37t(__t2177t__,&__t2178t__);
  if(__t2178t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(unsafe_ptr,&__t2179t__);
  if(__t2179t__){
  pclose__t2173t(unsafe_ptr,&__t2180t__);
  status=__t2180t__;
  unsafe_ptr=0;
  __t2181t=0;
  int__t585t(__t2181t,&__t2182t__);
  neq__t142t(status,__t2182t__,&__t2183t__);
  if(__t2183t__){
  __t_complain=37;
  __t2184t=__t2184t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3041t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2186t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3042t) {
  const char* __t2187t__cstr=0;
  char* __t2187t__str__unsafe_ptr=0;
  uint64_t __t2187t__str__dat__pos=0;
  uint64_t __t2187t__str__dat__length=0;
  char __t2187t__str__dat__first=0;
  char __t2188t____t1114t____t1108t____t706t__=0;
  const char* __t2189t__=0;
  char* __t2190t__unsafe_ptr=0;
  char __t2191t____t2179t__=0;
  int64_t __t2191t____t2180t__=0;
  int64_t __t2191t__status=0;
  uint64_t __t2191t____t2181t=0;
  int64_t __t2191t____t2182t__=0;
  char __t2191t____t2183t__=0;
  char __t2191t____t2184t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1111t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2187t__cstr,&__t2187t__str__unsafe_ptr,&__t2187t__str__dat__pos,&__t2187t__str__dat__length,&__t2187t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1119t(__t2187t__cstr,__t2187t__str__unsafe_ptr,__t2187t__str__dat__pos,__t2187t__str__dat__length,__t2187t__str__dat__first,&__t2189t__);
  __t_errcode=open__t2175t(__t2189t__,&__t2190t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t2190t__unsafe_ptr,&__t2191t____t2179t__);
  if(__t2191t____t2179t__){
  pclose__t2173t(__t2190t__unsafe_ptr,&__t2191t____t2180t__);
  __t2191t__status=__t2191t____t2180t__;
  __t2190t__unsafe_ptr=0;
  __t2191t____t2181t=0;
  int__t585t(__t2191t____t2181t,&__t2191t____t2182t__);
  neq__t142t(__t2191t__status,__t2191t____t2182t__,&__t2191t____t2183t__);
  if(__t2191t____t2183t__){
  __t_complain=37;
  __t2191t____t2184t=__t2191t____t2184t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3042t=__t2190t__unsafe_ptr;
  
  __t_skip_returns:exists__t605t(__t2187t__str__unsafe_ptr,&__t2188t____t1114t____t1108t____t706t__);
  if(__t2188t____t1114t____t1108t____t706t__){
  free__t675t(&__t2187t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2153t(int64_t value, const char** __t3043t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3043t=ret;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2843t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2844t__unsafe_ptr=0;
  char __t2845t____t2191t____t2179t__=0;
  int64_t __t2845t____t2191t____t2180t__=0;
  int64_t __t2845t____t2191t__status=0;
  uint64_t __t2845t____t2191t____t2181t=0;
  int64_t __t2845t____t2191t____t2182t__=0;
  char __t2845t____t2191t____t2183t__=0;
  char __t2845t____t2191t____t2184t=0;
  char __t2846t=0;
  int64_t __t2847t=0;
  int64_t error=0;
  const char* __t2848t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2186t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2844t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  exists__t605t(__t2844t__unsafe_ptr,&__t2845t____t2191t____t2179t__);
  if(__t2845t____t2191t____t2179t__){
  pclose__t2173t(__t2844t__unsafe_ptr,&__t2845t____t2191t____t2180t__);
  __t2845t____t2191t__status=__t2845t____t2191t____t2180t__;
  __t2844t__unsafe_ptr=0;
  __t2845t____t2191t____t2181t=0;
  int__t585t(__t2845t____t2191t____t2181t,&__t2845t____t2191t____t2182t__);
  neq__t142t(__t2845t____t2191t__status,__t2845t____t2191t____t2182t__,&__t2845t____t2191t____t2183t__);
  if(__t2845t____t2191t____t2183t__){
  __t_complain=37;
  __t2845t____t2191t____t2184t=__t2845t____t2191t____t2184t==0;
  }
  }
  __t2847t=__t_complain;
  __t2846t=(__t_complain==0);
  __t_complain=0;
  error=__t2847t;
  __t2846t=__t2846t==0;
  if(__t2846t){
  cstr__t2153t(error,&__t2848t__);
  print__t394t(__t2848t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2850t() {
  char* __t2855t__unsafe_ptr=0;
  uint64_t __t2855t__unsafe_size=0;
  uint16_t __t2855t__unsafe_offset=0;
  uint16_t __t2855t__unsafe_align=0;
  uint64_t __t2856t=0;
  char* __t2857t__unsafe_ptr=0;
  uint64_t __t2857t__unsafe_size=0;
  uint16_t __t2857t__unsafe_offset=0;
  uint16_t __t2857t__unsafe_align=0;
  char __t2858t____t706t__=0;
  char* __t2859t__buf__unsafe_ptr=0;
  uint64_t __t2859t__buf__unsafe_size=0;
  uint16_t __t2859t__buf__unsafe_offset=0;
  uint16_t __t2859t__buf__unsafe_align=0;
  uint64_t __t2859t__pos=0;
  char* __t2860t__buf__unsafe_ptr=0;
  uint64_t __t2860t__buf__unsafe_size=0;
  uint16_t __t2860t__buf__unsafe_offset=0;
  uint16_t __t2860t__buf__unsafe_align=0;
  uint64_t __t2860t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2863t__unsafe_ptr=0;
  uint64_t __t2863t__dat__pos=0;
  uint64_t __t2863t__dat__length=0;
  char __t2863t__dat__first=0;
  char* __t2864t__unsafe_ptr=0;
  uint64_t __t2864t__dat__pos=0;
  uint64_t __t2864t__dat__length=0;
  char __t2864t__dat__first=0;
  char* __t2865t__unsafe_ptr=0;
  char* __t2867t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2868t=0;
  char __t2869t=0;
  char* __t2870t__unsafe_ptr=0;
  uint64_t __t2870t__dat__pos=0;
  uint64_t __t2870t__dat__length=0;
  char __t2870t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2872t__=0;
  char __t2873t__=0;
  char* __t2874t__buf__unsafe_ptr=0;
  uint64_t __t2874t__buf__unsafe_size=0;
  uint16_t __t2874t__buf__unsafe_offset=0;
  uint16_t __t2874t__buf__unsafe_align=0;
  uint64_t __t2874t__pos=0;
  char* __t2875t__unsafe_ptr=0;
  uint64_t __t2875t__dat__pos=0;
  uint64_t __t2875t__dat__length=0;
  char __t2875t__dat__first=0;
  char* __t2876t__unsafe_ptr=0;
  uint64_t __t2876t__dat__pos=0;
  uint64_t __t2876t__dat__length=0;
  char __t2876t__dat__first=0;
  uint64_t __t2877t__=0;
  char* __t2878t__unsafe_ptr=0;
  uint64_t __t2878t__dat__pos=0;
  uint64_t __t2878t__dat__length=0;
  char __t2878t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t375t();
  char____t_buffer____buffer__t2853t(&__t2855t__unsafe_ptr,&__t2855t__unsafe_size,&__t2855t__unsafe_offset,&__t2855t__unsafe_align);
  __t2856t=256;
  __t_errcode=alloc__t704t(&__t2855t__unsafe_ptr,&__t2855t__unsafe_size,&__t2855t__unsafe_offset,&__t2855t__unsafe_align,__t2856t,&__t2857t__unsafe_ptr,&__t2857t__unsafe_size,&__t2857t__unsafe_offset,&__t2857t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t839t(&__t2857t__unsafe_ptr,&__t2857t__unsafe_size,&__t2857t__unsafe_offset,&__t2857t__unsafe_align,&__t2859t__buf__unsafe_ptr,&__t2859t__buf__unsafe_size,&__t2859t__buf__unsafe_offset,&__t2859t__buf__unsafe_align,&__t2859t__pos);
  __t2860t__buf__unsafe_ptr=__t2859t__buf__unsafe_ptr;
  __t2860t__buf__unsafe_size=__t2859t__buf__unsafe_size;
  __t2860t__buf__unsafe_offset=__t2859t__buf__unsafe_offset;
  __t2860t__buf__unsafe_align=__t2859t__buf__unsafe_align;
  __t2860t__pos=__t2859t__pos;
  CHARS__buf__unsafe_ptr=__t2860t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2860t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2860t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2860t__buf__unsafe_align;
  CHARS__pos=__t2860t__pos;
  path=__t2861t;
  __t_errcode=copy__t1075t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2862t,&__t2863t__unsafe_ptr,&__t2863t__dat__pos,&__t2863t__dat__length,&__t2863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1075t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2864t__unsafe_ptr,&__t2864t__dat__pos,&__t2864t__dat__length,&__t2864t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2726t(path,&__t2865t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2867t__unsafe_ptr=__t2865t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2867t__unsafe_ptr;
  __t2868t=0-1;
  while(1){
  __t2868t=__t2868t+1;
  __t_complain=get__t2808t(&test_dir__unsafe_ptr,__t2868t,&__t2870t__unsafe_ptr,&__t2870t__dat__pos,&__t2870t__dat__length,&__t2870t__dat__first);
  __t2869t=__t_complain;
  entry__unsafe_ptr=__t2870t__unsafe_ptr;
  entry__dat__pos=__t2870t__dat__pos;
  entry__dat__length=__t2870t__dat__length;
  entry__dat__first=__t2870t__dat__first;
  __t2869t=__t2869t==0;
  if(!__t2869t){
  break;
  }
  __t_errcode=ends_with__t1285t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2871t,&__t2872t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t37t(__t2872t__,&__t2873t__);
  if(__t2873t__){
  continue;
  }
  __t2874t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2874t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2874t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2874t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2874t__pos=CHARS__pos;
  str__t1021t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2875t__unsafe_ptr,&__t2875t__dat__pos,&__t2875t__dat__length,&__t2875t__dat__first);
  __t_errcode=copy_null_terminated__t1156t(&__t2874t__buf__unsafe_ptr,&__t2874t__buf__unsafe_size,&__t2874t__buf__unsafe_offset,&__t2874t__buf__unsafe_align,&__t2874t__pos,__t2875t__unsafe_ptr,__t2875t__dat__pos,__t2875t__dat__length,__t2875t__dat__first,&__t2876t__unsafe_ptr,&__t2876t__dat__pos,&__t2876t__dat__length,&__t2876t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1121t(__t2876t__unsafe_ptr,__t2876t__dat__pos,__t2876t__dat__length,__t2876t__dat__first,&__t2877t__);
  __t_errcode=str__t996t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2877t__,&__t2878t__unsafe_ptr,&__t2878t__dat__pos,&__t2878t__dat__length,&__t2878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2878t__unsafe_ptr;
  command__dat__pos=__t2878t__dat__pos;
  command__dat__length=__t2878t__dat__length;
  command__dat__first=__t2878t__dat__first;
  print__t1180t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2843t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2725t(__t2865t__unsafe_ptr);
  exists__t605t(__t2857t__unsafe_ptr,&__t2858t____t706t__);
  if(__t2858t____t706t__){
  free__t675t(&__t2857t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2850t();return 0;}