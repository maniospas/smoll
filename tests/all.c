#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2848t="./tests/passing/";
const char* const __t2849t="./smoll --cleanup ";
const char* const __t2858t=".s";
const char* const __t395t="\n";
const char* const __t383t="";
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

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2840t(char** __t2868t, uint64_t* __t2869t, uint16_t* __t2870t, uint16_t* __t2871t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2868t=unsafe_ptr;
  *__t2869t=unsafe_size;
  *__t2870t=unsafe_offset;
  *__t2871t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2872t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2872t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2873t) {
  char* allocated=*__t2873t;
  if(allocated){
  free(allocated);
  }
  *__t2873t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2874t) {
  int value=0;
  *__t2874t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2875t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2875t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2876t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2876t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2877t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2877t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2878t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2878t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2879t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2879t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2880t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2880t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2881t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2881t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2882t) {
  char* allocated=0;
  char __t668t__=0;
  char __t669t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t604t(allocated,&__t668t__);
  not__t36t(__t668t__,&__t669t__);
  if(__t669t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2882t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2883t, uint64_t* __t2884t, uint16_t* __t2885t, uint16_t* __t2886t, uint64_t size, char** __t2887t, uint64_t* __t2888t, uint16_t* __t2889t, uint16_t* __t2890t) {
  char* buffer__unsafe_ptr=*__t2883t;
  uint64_t buffer__unsafe_size=*__t2884t;
  uint16_t buffer__unsafe_offset=*__t2885t;
  uint16_t buffer__unsafe_align=*__t2886t;
  int __t704t=0;
  char __t705t__=0;
  char __t707t__=0;
  uint64_t __t708t=0;
  char __t709t__=0;
  uint64_t __t710t=0;
  uint64_t __t711t__=0;
  uint64_t __t712t__=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t bytes=0;
  uint64_t __t718t=0;
  char __t719t__=0;
  char* __t720t__=0;
  int __t721t=0;
  uint64_t __t722t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t128t(buffer__unsafe_size,size,&__t707t__);
  if(__t707t__){
  __t708t=0;
  neq__t152t(size,__t708t,&__t709t__);
  if(__t709t__){
  __t710t=0;
  nat__t678t(buffer__unsafe_align,&__t711t__);
  mul__t207t(__t711t__,size,&__t712t__);
  zero__t675t(buffer__unsafe_ptr,__t710t,__t712t__);
  }
  goto __t_return;
  }
  __t714t=0;
  neq__t152t(buffer__unsafe_size,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t716t__);
  mul__t207t(__t716t__,size,&__t717t__);
  bytes=__t717t__;
  __t718t=0;
  eq__t128t(bytes,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t667t(bytes,&__t720t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t722t=0;
  zero__t675t(__t720t__,__t722t,bytes);
  buffer__unsafe_ptr=__t720t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t604t(buffer__unsafe_ptr,&__t705t__);
  if(__t705t__){
  free__t674t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2883t=buffer__unsafe_ptr;
  *__t2884t=buffer__unsafe_size;
  *__t2885t=buffer__unsafe_offset;
  *__t2886t=buffer__unsafe_align;
  *__t2887t=buffer__unsafe_ptr;
  *__t2888t=buffer__unsafe_size;
  *__t2889t=buffer__unsafe_offset;
  *__t2890t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t835t(char** __t2891t, uint64_t* __t2892t, uint16_t* __t2893t, uint16_t* __t2894t, uint64_t _pos, char** __t2895t, uint64_t* __t2896t, uint16_t* __t2897t, uint16_t* __t2898t, uint64_t* __t2899t) {
  char* buf__unsafe_ptr=*__t2891t;
  uint64_t buf__unsafe_size=*__t2892t;
  uint16_t buf__unsafe_offset=*__t2893t;
  uint16_t buf__unsafe_align=*__t2894t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
  goto __t_return;
  __t_return:
  *__t2891t=buf__unsafe_ptr;
  *__t2892t=buf__unsafe_size;
  *__t2893t=buf__unsafe_offset;
  *__t2894t=buf__unsafe_align;
  *__t2895t=buf__unsafe_ptr;
  *__t2896t=buf__unsafe_size;
  *__t2897t=buf__unsafe_offset;
  *__t2898t=buf__unsafe_align;
  *__t2899t=pos;
}

static inline __attribute__((always_inline)) void arena__t838t(char** __t2900t, uint64_t* __t2901t, uint16_t* __t2902t, uint16_t* __t2903t, char** __t2904t, uint64_t* __t2905t, uint16_t* __t2906t, uint16_t* __t2907t, uint64_t* __t2908t) {
  char* buf__unsafe_ptr=*__t2900t;
  uint64_t buf__unsafe_size=*__t2901t;
  uint16_t buf__unsafe_offset=*__t2902t;
  uint16_t buf__unsafe_align=*__t2903t;
  uint64_t __t839t=0;
  char* __t840t__buf__unsafe_ptr=0;
  uint64_t __t840t__buf__unsafe_size=0;
  uint16_t __t840t__buf__unsafe_offset=0;
  uint16_t __t840t__buf__unsafe_align=0;
  uint64_t __t840t__pos=0;
  __t839t=0;
  arena__t835t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t839t,&__t840t__buf__unsafe_ptr,&__t840t__buf__unsafe_size,&__t840t__buf__unsafe_offset,&__t840t__buf__unsafe_align,&__t840t__pos);
  goto __t_return;
  __t_return:
  *__t2900t=buf__unsafe_ptr;
  *__t2901t=buf__unsafe_size;
  *__t2902t=buf__unsafe_offset;
  *__t2903t=buf__unsafe_align;
  *__t2904t=__t840t__buf__unsafe_ptr;
  *__t2905t=__t840t__buf__unsafe_size;
  *__t2906t=__t840t__buf__unsafe_offset;
  *__t2907t=__t840t__buf__unsafe_align;
  *__t2908t=__t840t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t951t(char** __t2909t, uint64_t* __t2910t, uint16_t* __t2911t, uint16_t* __t2912t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2909t=unsafe_ptr;
  *__t2910t=unsafe_size;
  *__t2911t=unsafe_offset;
  *__t2912t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2913t) {
  *__t2913t=to;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2914t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2914t=z;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2915t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2915t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2916t) {
  *__t2916t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2917t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2917t=__t677t__;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2918t) {
  char __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  char* __t829t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t824t__);
  if(__t824t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t825t__);
  mul__t207t(i,__t825t__,&__t826t__);
  nat__t678t(buffer__unsafe_offset,&__t827t__);
  add__t183t(__t826t__,__t827t__,&__t828t__);
  add__t676t(buffer__unsafe_ptr,__t828t__,&__t829t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2918t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t973t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2919t, uint64_t* __t2920t, uint64_t* __t2921t, char* __t2922t) {
  goto __t_return;
  __t_return:
  *__t2919t=unsafe_ptr;
  *__t2920t=dat__pos;
  *__t2921t=dat__length;
  *__t2922t=dat__first;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2923t, uint64_t* __t2924t, uint64_t* __t2925t, char* __t2926t) {
  char* unsafe_ptr=0;
  uint64_t __t978t__=0;
  uint64_t __t979t=0;
  char __t980t__=0;
  uint64_t __t981t__=0;
  uint64_t __t982t=0;
  char __t983t__=0;
  char* __t984t__unsafe_ptr=0;
  uint64_t __t984t__dat__pos=0;
  uint64_t __t984t__dat__length=0;
  char __t984t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t678t(buf__unsafe_align,&__t978t__);
  __t979t=1;
  neq__t152t(__t978t__,__t979t,&__t980t__);
  if(__t980t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t678t(buf__unsafe_offset,&__t981t__);
  __t982t=0;
  neq__t152t(__t981t__,__t982t,&__t983t__);
  if(__t983t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t973t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t984t__unsafe_ptr,&__t984t__dat__pos,&__t984t__dat__length,&__t984t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2923t=__t984t__unsafe_ptr;
  *__t2924t=__t984t__dat__pos;
  *__t2925t=__t984t__dat__length;
  *__t2926t=__t984t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1011t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2927t, uint64_t* __t2928t, uint64_t* __t2929t, char* __t2930t) {
  uint64_t __t1012t=0;
  char __t1013t__=0;
  char* __t1015t__=0;
  char __t1016t__value=0;
  char first=0;
  char* __t1017t__unsafe_ptr=0;
  uint64_t __t1017t__dat__pos=0;
  uint64_t __t1017t__dat__length=0;
  char __t1017t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1012t=0;
  neq__t152t(length,__t1012t,&__t1013t__);
  if(__t1013t__){
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1015t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1015t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1016t__value,__t1015t__,1);
  first=__t1016t__value;
  }
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1017t__unsafe_ptr,&__t1017t__dat__pos,&__t1017t__dat__length,&__t1017t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2927t=__t1017t__unsafe_ptr;
  *__t2928t=__t1017t__dat__pos;
  *__t2929t=__t1017t__dat__length;
  *__t2930t=__t1017t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1033t(const char* c, char** __t2931t, uint64_t* __t2932t, uint64_t* __t2933t, char* __t2934t) {
  char* __t1034t__unsafe_ptr=0;
  uint64_t __t1034t__unsafe_size=0;
  uint16_t __t1034t__unsafe_offset=0;
  uint16_t __t1034t__unsafe_align=0;
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__unsafe_size=0;
  uint16_t __t1035t__unsafe_offset=0;
  uint16_t __t1035t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1036t__=0;
  uint64_t length=0;
  uint64_t __t1037t=0;
  uint64_t __t1038t__=0;
  uint64_t __t1039t=0;
  char* __t1041t__unsafe_ptr=0;
  uint64_t __t1041t__dat__pos=0;
  uint64_t __t1041t__dat__length=0;
  char __t1041t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t951t(&__t1034t__unsafe_ptr,&__t1034t__unsafe_size,&__t1034t__unsafe_offset,&__t1034t__unsafe_align);
  __t1035t__unsafe_ptr=__t1034t__unsafe_ptr;
  __t1035t__unsafe_size=__t1034t__unsafe_size;
  __t1035t__unsafe_offset=__t1034t__unsafe_offset;
  __t1035t__unsafe_align=__t1034t__unsafe_align;
  buf__unsafe_ptr=__t1035t__unsafe_ptr;
  buf__unsafe_size=__t1035t__unsafe_size;
  buf__unsafe_offset=__t1035t__unsafe_offset;
  buf__unsafe_align=__t1035t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1036t__);
  buf__unsafe_ptr=__t1036t__;
  if(c){
  length=strlen(c);
  }
  __t1037t=1;
  add__t183t(length,__t1037t,&__t1038t__);
  buf__unsafe_size=__t1038t__;
  __t1039t=0;
  __t_errcode=str__t1011t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1039t,length,&__t1041t__unsafe_ptr,&__t1041t__dat__pos,&__t1041t__dat__length,&__t1041t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2931t=__t1041t__unsafe_ptr;
  *__t2932t=__t1041t__dat__pos;
  *__t2933t=__t1041t__dat__length;
  *__t2934t=__t1041t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1042t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2935t) {
  goto __t_return;
  __t_return:
  *__t2935t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2936t) {
  goto __t_return;
  __t_return:
  *__t2936t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2937t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2937t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2938t, uint64_t* __t2939t, uint16_t* __t2940t, uint16_t* __t2941t, uint64_t pos, char** __t2942t, uint64_t* __t2943t, uint16_t* __t2944t, uint16_t* __t2945t, uint64_t* __t2946t) {
  char* buf__unsafe_ptr=*__t2938t;
  uint64_t buf__unsafe_size=*__t2939t;
  uint16_t buf__unsafe_offset=*__t2940t;
  uint16_t buf__unsafe_align=*__t2941t;
  goto __t_return;
  __t_return:
  *__t2938t=buf__unsafe_ptr;
  *__t2939t=buf__unsafe_size;
  *__t2940t=buf__unsafe_offset;
  *__t2941t=buf__unsafe_align;
  *__t2942t=buf__unsafe_ptr;
  *__t2943t=buf__unsafe_size;
  *__t2944t=buf__unsafe_offset;
  *__t2945t=buf__unsafe_align;
  *__t2946t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2947t, uint64_t* __t2948t, uint16_t* __t2949t, uint16_t* __t2950t, uint64_t* __t2951t, uint64_t length, char** __t2952t, uint64_t* __t2953t, uint16_t* __t2954t, uint16_t* __t2955t, uint64_t* __t2956t) {
  char* allocator__buf__unsafe_ptr=*__t2947t;
  uint64_t allocator__buf__unsafe_size=*__t2948t;
  uint16_t allocator__buf__unsafe_offset=*__t2949t;
  uint16_t allocator__buf__unsafe_align=*__t2950t;
  uint64_t allocator__pos=*__t2951t;
  int __t874t=0;
  uint64_t __t875t__=0;
  uint64_t next_pos=0;
  uint64_t __t876t__=0;
  char __t877t__=0;
  uint64_t __t878t=0;
  uint64_t __t879t__=0;
  uint64_t pos=0;
  char* __t880t__buf__unsafe_ptr=0;
  uint64_t __t880t__buf__unsafe_size=0;
  uint16_t __t880t__buf__unsafe_offset=0;
  uint16_t __t880t__buf__unsafe_align=0;
  uint64_t __t880t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t183t(allocator__pos,length,&__t875t__);
  next_pos=__t875t__;
  len__t830t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t876t__);
  gt__t284t(next_pos,__t876t__,&__t877t__);
  if(__t877t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t878t=0;
  add__t183t(allocator__pos,__t878t,&__t879t__);
  pos=__t879t__;
  allocator__pos=next_pos;
  allocated__t841t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t880t__buf__unsafe_ptr,&__t880t__buf__unsafe_size,&__t880t__buf__unsafe_offset,&__t880t__buf__unsafe_align,&__t880t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2947t=allocator__buf__unsafe_ptr;
  *__t2948t=allocator__buf__unsafe_size;
  *__t2949t=allocator__buf__unsafe_offset;
  *__t2950t=allocator__buf__unsafe_align;
  *__t2951t=allocator__pos;
  *__t2952t=__t880t__buf__unsafe_ptr;
  *__t2953t=__t880t__buf__unsafe_size;
  *__t2954t=__t880t__buf__unsafe_offset;
  *__t2955t=__t880t__buf__unsafe_align;
  *__t2956t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1064t(char** __t2957t, uint64_t* __t2958t, uint16_t* __t2959t, uint16_t* __t2960t, uint64_t* __t2961t, const char* _other, char** __t2962t, uint64_t* __t2963t, uint64_t* __t2964t, char* __t2965t) {
  char* CHARS__buf__unsafe_ptr=*__t2957t;
  uint64_t CHARS__buf__unsafe_size=*__t2958t;
  uint16_t CHARS__buf__unsafe_offset=*__t2959t;
  uint16_t CHARS__buf__unsafe_align=*__t2960t;
  uint64_t CHARS__pos=*__t2961t;
  char* __t1065t__unsafe_ptr=0;
  uint64_t __t1065t__dat__pos=0;
  uint64_t __t1065t__dat__length=0;
  char __t1065t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1066t__=0;
  char* __t1067t__buf__unsafe_ptr=0;
  uint64_t __t1067t__buf__unsafe_size=0;
  uint16_t __t1067t__buf__unsafe_offset=0;
  uint16_t __t1067t__buf__unsafe_align=0;
  uint64_t __t1067t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1068t__unsafe_ptr=0;
  uint64_t __t1068t__dat__pos=0;
  uint64_t __t1068t__dat__length=0;
  char __t1068t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1033t(_other,&__t1065t__unsafe_ptr,&__t1065t__dat__pos,&__t1065t__dat__length,&__t1065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1065t__unsafe_ptr;
  other__dat__pos=__t1065t__dat__pos;
  other__dat__length=__t1065t__dat__length;
  other__dat__first=__t1065t__dat__first;
  len__t1042t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1066t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1066t__,&__t1067t__buf__unsafe_ptr,&__t1067t__buf__unsafe_size,&__t1067t__buf__unsafe_offset,&__t1067t__buf__unsafe_align,&__t1067t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1067t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1067t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1067t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1067t__buf__unsafe_align;
  surface__pos=__t1067t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t977t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1068t__unsafe_ptr,&__t1068t__dat__pos,&__t1068t__dat__length,&__t1068t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2957t=CHARS__buf__unsafe_ptr;
  *__t2958t=CHARS__buf__unsafe_size;
  *__t2959t=CHARS__buf__unsafe_offset;
  *__t2960t=CHARS__buf__unsafe_align;
  *__t2961t=CHARS__pos;
  *__t2962t=__t1068t__unsafe_ptr;
  *__t2963t=__t1068t__dat__pos;
  *__t2964t=__t1068t__dat__length;
  *__t2965t=__t1068t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2712t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2713t(const char* path, char** __t2966t) {
  char* unsafe_ptr=0;
  char __t2715t__=0;
  char __t2716t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t604t(unsafe_ptr,&__t2715t__);
  not__t36t(__t2715t__,&__t2716t__);
  if(__t2716t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2712t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2966t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2724t(char** __t2967t, const char** __t2968t) {
  char* f__unsafe_ptr=*__t2967t;
  char __t2725t__=0;
  char __t2726t__=0;
  char* de=0;
  char __t2727t__=0;
  char __t2728t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t604t(f__unsafe_ptr,&__t2725t__);
  not__t36t(__t2725t__,&__t2726t__);
  if(__t2726t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t604t(de,&__t2727t__);
  not__t36t(__t2727t__,&__t2728t__);
  if(__t2728t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2967t=f__unsafe_ptr;
  *__t2968t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2729t(char** __t2969t, char** __t2970t, uint64_t* __t2971t, uint64_t* __t2972t, char* __t2973t) {
  char* f__unsafe_ptr=*__t2969t;
  const char* __t2730t__=0;
  char* __t2731t__unsafe_ptr=0;
  uint64_t __t2731t__dat__pos=0;
  uint64_t __t2731t__dat__length=0;
  char __t2731t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2724t(&f__unsafe_ptr,&__t2730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1033t(__t2730t__,&__t2731t__unsafe_ptr,&__t2731t__dat__pos,&__t2731t__dat__length,&__t2731t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2969t=f__unsafe_ptr;
  *__t2970t=__t2731t__unsafe_ptr;
  *__t2971t=__t2731t__dat__pos;
  *__t2972t=__t2731t__dat__length;
  *__t2973t=__t2731t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2795t(char** __t2974t, uint64_t __t_anon1, char** __t2975t, uint64_t* __t2976t, uint64_t* __t2977t, char* __t2978t) {
  char* data__unsafe_ptr=*__t2974t;
  char* __t2796t__unsafe_ptr=0;
  uint64_t __t2796t__dat__pos=0;
  uint64_t __t2796t__dat__length=0;
  char __t2796t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2729t(&data__unsafe_ptr,&__t2796t__unsafe_ptr,&__t2796t__dat__pos,&__t2796t__dat__length,&__t2796t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2974t=data__unsafe_ptr;
  *__t2975t=__t2796t__unsafe_ptr;
  *__t2976t=__t2796t__dat__pos;
  *__t2977t=__t2796t__dat__length;
  *__t2978t=__t2796t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1010t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2979t, uint64_t* __t2980t, uint64_t* __t2981t, char* __t2982t) {
  goto __t_return;
  __t_return:
  *__t2979t=other__unsafe_ptr;
  *__t2980t=other__dat__pos;
  *__t2981t=other__dat__length;
  *__t2982t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t260t(uint64_t x, uint64_t y, char* __t2983t) {
  int __t261t__=0;
  char z=0;
  is_different__t103t(x,y,&__t261t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2983t=z;
}

static inline __attribute__((always_inline)) int sub__t360t(uint64_t x, uint64_t y, uint64_t* __t2984t) {
  int __t361t__=0;
  int __t362t=0;
  int __t363t=0;
  char __t364t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t103t(x,y,&__t361t__);
  lt__t260t(x,y,&__t364t__);
  if(__t364t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2984t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1169t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2985t) {
  uint64_t __t1170t__=0;
  char* __t1171t__=0;
  add__t183t(s__dat__pos,i,&__t1170t__);
  add__t676t(s__unsafe_ptr,__t1170t__,&__t1171t__);
  goto __t_return;
  __t_return:
  *__t2985t=__t1171t__;
}

int slice__t1192t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2986t, uint64_t* __t2987t, uint64_t* __t2988t, char* __t2989t) {
  char* __t1193t__unsafe_ptr=0;
  uint64_t __t1193t__dat__pos=0;
  uint64_t __t1193t__dat__length=0;
  char __t1193t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1194t__=0;
  char* __t1195t__unsafe_ptr=0;
  uint64_t __t1195t__dat__pos=0;
  uint64_t __t1195t__dat__length=0;
  char __t1195t__dat__first=0;
  char __t1196t__=0;
  char __t1197t__=0;
  char __t1198t=0;
  char __t1199t__=0;
  uint64_t __t1200t__=0;
  uint64_t new_length=0;
  uint64_t __t1201t=0;
  char __t1202t__=0;
  char new_first=0;
  char* __t1204t__=0;
  char __t1205t__value=0;
  uint64_t __t1206t__=0;
  char* __t1207t__unsafe_ptr=0;
  uint64_t __t1207t__dat__pos=0;
  uint64_t __t1207t__dat__length=0;
  char __t1207t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1010t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1193t__unsafe_ptr,&__t1193t__dat__pos,&__t1193t__dat__length,&__t1193t__dat__first);
  s__unsafe_ptr=__t1193t__unsafe_ptr;
  s__dat__pos=__t1193t__dat__pos;
  s__dat__length=__t1193t__dat__length;
  s__dat__first=__t1193t__dat__first;
  eq__t128t(from,to,&__t1194t__);
  if(__t1194t__){
  __t_errcode=str__t1033t(__t383t,&__t1195t__unsafe_ptr,&__t1195t__dat__pos,&__t1195t__dat__length,&__t1195t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t284t(from,to,&__t1196t__);
  if(!__t1196t__){
  gt__t284t(to,s__dat__length,&__t1197t__);
  __t1198t=__t1197t__;
  }
  else{
  __t1198t=0;
  not__t36t(__t1198t,&__t1199t__);
  __t1198t=__t1199t__;
  }
  if(__t1198t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t360t(to,from,&__t1200t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1200t__;
  __t1201t=0;
  neq__t152t(from,__t1201t,&__t1202t__);
  if(__t1202t__){
  get__t1169t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1204t__);
  if(!__t1204t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1205t__value,__t1204t__,1);
  new_first=__t1205t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t183t(s__dat__pos,from,&__t1206t__);
  str__t973t(s__unsafe_ptr,__t1206t__,new_length,new_first,&__t1207t__unsafe_ptr,&__t1207t__dat__pos,&__t1207t__dat__length,&__t1207t__dat__first);
  __t1195t__unsafe_ptr=__t1207t__unsafe_ptr;
  __t1195t__dat__pos=__t1207t__dat__pos;
  __t1195t__dat__length=__t1207t__dat__length;
  __t1195t__dat__first=__t1207t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2986t=__t1195t__unsafe_ptr;
  *__t2987t=__t1195t__dat__pos;
  *__t2988t=__t1195t__dat__length;
  *__t2989t=__t1195t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1046t(char x, char y, char* __t2990t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2990t=z;
}

static inline __attribute__((always_inline)) void eq__t1111t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2991t) {
  uint64_t __t1112t__=0;
  uint64_t n=0;
  uint64_t __t1113t__=0;
  char __t1114t__=0;
  char __t1115t=0;
  char __t1116t__=0;
  char __t1117t=0;
  char z=0;
  len__t1042t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1112t__);
  n=__t1112t__;
  len__t1042t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1113t__);
  neq__t152t(n,__t1113t__,&__t1114t__);
  if(__t1114t__){
  __t1115t=0;
  goto __t_return;
  }
  neq__t1046t(x__dat__first,y__dat__first,&__t1116t__);
  if(__t1116t__){
  __t1117t=0;
  __t1115t=__t1117t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1115t=z;
  goto __t_return;
  __t_return:
  *__t2991t=__t1115t;
}

static inline __attribute__((always_inline)) int ends_with__t1272t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2992t) {
  char* __t1273t__unsafe_ptr=0;
  uint64_t __t1273t__dat__pos=0;
  uint64_t __t1273t__dat__length=0;
  char __t1273t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1274t__unsafe_ptr=0;
  uint64_t __t1274t__dat__pos=0;
  uint64_t __t1274t__dat__length=0;
  char __t1274t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1275t__=0;
  char __t1276t=0;
  uint64_t __t1277t__=0;
  uint64_t n=0;
  uint64_t __t1278t__=0;
  uint64_t __t1279t__=0;
  char* __t1280t__unsafe_ptr=0;
  uint64_t __t1280t__dat__pos=0;
  uint64_t __t1280t__dat__length=0;
  char __t1280t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1281t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1010t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1273t__unsafe_ptr,&__t1273t__dat__pos,&__t1273t__dat__length,&__t1273t__dat__first);
  stack__unsafe_ptr=__t1273t__unsafe_ptr;
  stack__dat__pos=__t1273t__dat__pos;
  stack__dat__length=__t1273t__dat__length;
  stack__dat__first=__t1273t__dat__first;
  __t_errcode=str__t1033t(_needle,&__t1274t__unsafe_ptr,&__t1274t__dat__pos,&__t1274t__dat__length,&__t1274t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1274t__unsafe_ptr;
  needle__dat__pos=__t1274t__dat__pos;
  needle__dat__length=__t1274t__dat__length;
  needle__dat__first=__t1274t__dat__first;
  lt__t260t(stack__dat__length,needle__dat__length,&__t1275t__);
  if(__t1275t__){
  __t1276t=0;
  goto __t_return;
  }
  len__t1042t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1277t__);
  n=__t1277t__;
  len__t1042t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1278t__);
  __t_errcode=sub__t360t(n,__t1278t__,&__t1279t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1192t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1279t__,n,&__t1280t__unsafe_ptr,&__t1280t__dat__pos,&__t1280t__dat__length,&__t1280t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1280t__unsafe_ptr;
  ret__dat__pos=__t1280t__dat__pos;
  ret__dat__length=__t1280t__dat__length;
  ret__dat__first=__t1280t__dat__first;
  eq__t1111t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1281t__);
  __t1276t=__t1281t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2992t=__t1276t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1143t(char** __t2993t, uint64_t* __t2994t, uint16_t* __t2995t, uint16_t* __t2996t, uint64_t* __t2997t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2998t, uint64_t* __t2999t, uint64_t* __t3000t, char* __t3001t) {
  char* CHARS__buf__unsafe_ptr=*__t2993t;
  uint64_t CHARS__buf__unsafe_size=*__t2994t;
  uint16_t CHARS__buf__unsafe_offset=*__t2995t;
  uint16_t CHARS__buf__unsafe_align=*__t2996t;
  uint64_t CHARS__pos=*__t2997t;
  char* __t1144t__unsafe_ptr=0;
  uint64_t __t1144t__dat__pos=0;
  uint64_t __t1144t__dat__length=0;
  char __t1144t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1145t__=0;
  uint64_t __t1146t__=0;
  uint64_t null_pos=0;
  uint64_t __t1147t=0;
  uint64_t __t1148t__=0;
  uint64_t next_pos=0;
  uint64_t __t1149t__=0;
  char __t1150t__=0;
  char* endpos=0;
  uint64_t __t1151t=0;
  uint64_t __t1152t__=0;
  uint64_t prev_pos=0;
  char* __t1153t__unsafe_ptr=0;
  uint64_t __t1153t__dat__pos=0;
  uint64_t __t1153t__dat__length=0;
  char __t1153t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1010t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1144t__unsafe_ptr,&__t1144t__dat__pos,&__t1144t__dat__length,&__t1144t__dat__first);
  other__unsafe_ptr=__t1144t__unsafe_ptr;
  other__dat__pos=__t1144t__dat__pos;
  other__dat__length=__t1144t__dat__length;
  other__dat__first=__t1144t__dat__first;
  len__t1042t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1145t__);
  add__t183t(CHARS__pos,__t1145t__,&__t1146t__);
  null_pos=__t1146t__;
  __t1147t=1;
  add__t183t(null_pos,__t1147t,&__t1148t__);
  next_pos=__t1148t__;
  len__t830t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1149t__);
  gt__t284t(next_pos,__t1149t__,&__t1150t__);
  if(__t1150t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1151t=0;
  add__t183t(CHARS__pos,__t1151t,&__t1152t__);
  prev_pos=__t1152t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t977t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1153t__unsafe_ptr,&__t1153t__dat__pos,&__t1153t__dat__length,&__t1153t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2993t=CHARS__buf__unsafe_ptr;
  *__t2994t=CHARS__buf__unsafe_size;
  *__t2995t=CHARS__buf__unsafe_offset;
  *__t2996t=CHARS__buf__unsafe_align;
  *__t2997t=CHARS__pos;
  *__t2998t=__t1153t__unsafe_ptr;
  *__t2999t=__t1153t__dat__pos;
  *__t3000t=__t1153t__dat__length;
  *__t3001t=__t1153t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1108t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3002t) {
  uint64_t __t1109t__=0;
  add__t183t(s__dat__pos,s__dat__length,&__t1109t__);
  goto __t_return;
  __t_return:
  *__t3002t=__t1109t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3003t) {
  int value=0;
  *__t3003t=value;
}

static inline __attribute__((always_inline)) void not__t47t(int __t_anon0, int* __t3004t) {
  int __t48t__=0;
  true__t15t(&__t48t__);
  goto __t_return;
  __t_return:
  *__t3004t=__t48t__;
}

static inline __attribute__((always_inline)) int str__t985t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t3005t, uint64_t* __t3006t, uint64_t* __t3007t, char* __t3008t) {
  int __t986t=0;
  int __t987t=0;
  int __t988t__=0;
  uint64_t __t989t__=0;
  char __t990t__=0;
  uint64_t __t991t=0;
  uint64_t __t992t=0;
  char* __t994t__=0;
  char __t995t__value=0;
  char* __t996t__unsafe_ptr=0;
  uint64_t __t996t__dat__pos=0;
  uint64_t __t996t__dat__length=0;
  char __t996t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t47t(__t987t,&__t988t__);
  len__t830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t989t__);
  gt__t284t(length,__t989t__,&__t990t__);
  if(__t990t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t991t=0;
  __t992t=0;
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t992t,&__t994t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t994t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t995t__value,__t994t__,1);
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t991t,length,__t995t__value,&__t996t__unsafe_ptr,&__t996t__dat__pos,&__t996t__dat__length,&__t996t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3005t=__t996t__unsafe_ptr;
  *__t3006t=__t996t__dat__pos;
  *__t3007t=__t996t__dat__length;
  *__t3008t=__t996t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1167t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1168t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t831t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1089t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3009t, uint64_t* __t3010t, uint64_t* __t3011t, char* __t3012t) {
  char* __t1090t__unsafe_ptr=0;
  uint64_t __t1090t__unsafe_size=0;
  uint16_t __t1090t__unsafe_offset=0;
  uint16_t __t1090t__unsafe_align=0;
  uint64_t __t1091t=0;
  uint64_t __t1092t__=0;
  uint64_t __t1093t__=0;
  char* __t1094t__unsafe_ptr=0;
  uint64_t __t1094t__unsafe_size=0;
  uint16_t __t1094t__unsafe_offset=0;
  uint16_t __t1094t__unsafe_align=0;
  char __t1095t____t705t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1096t=0;
  char* __t1097t__unsafe_ptr=0;
  uint64_t __t1097t__dat__pos=0;
  uint64_t __t1097t__dat__length=0;
  char __t1097t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t951t(&__t1090t__unsafe_ptr,&__t1090t__unsafe_size,&__t1090t__unsafe_offset,&__t1090t__unsafe_align);
  __t1091t=1;
  len__t1042t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1092t__);
  add__t183t(__t1091t,__t1092t__,&__t1093t__);
  __t_errcode=alloc__t703t(&__t1090t__unsafe_ptr,&__t1090t__unsafe_size,&__t1090t__unsafe_offset,&__t1090t__unsafe_align,__t1093t__,&__t1094t__unsafe_ptr,&__t1094t__unsafe_size,&__t1094t__unsafe_offset,&__t1094t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1094t__unsafe_ptr;
  buf__unsafe_size=__t1094t__unsafe_size;
  buf__unsafe_offset=__t1094t__unsafe_offset;
  buf__unsafe_align=__t1094t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1096t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1096t,other__dat__length,other__dat__first,&__t1097t__unsafe_ptr,&__t1097t__dat__pos,&__t1097t__dat__length,&__t1097t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t1097t__unsafe_ptr,&__t1095t____t705t__);
  if(__t1095t____t705t__){
  free__t674t(&__t1097t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3009t=__t1097t__unsafe_ptr;
  *__t3010t=__t1097t__dat__pos;
  *__t3011t=__t1097t__dat__length;
  *__t3012t=__t1097t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1098t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3013t, char** __t3014t, uint64_t* __t3015t, uint64_t* __t3016t, char* __t3017t) {
  char* __t1100t__unsafe_ptr=0;
  uint64_t __t1100t__dat__pos=0;
  uint64_t __t1100t__dat__length=0;
  char __t1100t__dat__first=0;
  char __t1101t____t1095t____t705t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1102t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t831t();
  __t_errcode=copy_null_terminated__t1089t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1100t__unsafe_ptr,&__t1100t__dat__pos,&__t1100t__dat__length,&__t1100t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1100t__unsafe_ptr;
  str__dat__pos=__t1100t__dat__pos;
  str__dat__length=__t1100t__dat__length;
  str__dat__first=__t1100t__dat__first;
  add__t676t(str__unsafe_ptr,str__dat__pos,&__t1102t__);
  _ret=__t1102t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t604t(str__unsafe_ptr,&__t1101t____t1095t____t705t__);
  if(__t1101t____t1095t____t705t__){
  free__t674t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3013t=cstr;
  *__t3014t=str__unsafe_ptr;
  *__t3015t=str__dat__pos;
  *__t3016t=str__dat__length;
  *__t3017t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1106t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3018t) {
  goto __t_return;
  __t_return:
  *__t3018t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2161t(const char* cmd, char** __t3019t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3019t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2160t(char* unsafe_ptr, int64_t* __t3020t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3020t=status;
}

static inline __attribute__((always_inline)) void int__t584t(uint64_t x, int64_t* __t3021t) {
  int __t585t=0;
  int __t586t=0;
  int __t587t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3021t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t3022t) {
  int __t92t=0;
  int __t93t__=0;
  not__t45t(__t92t,&__t93t__);
  goto __t_return;
  __t_return:
  *__t3022t=__t93t__;
}

static inline __attribute__((always_inline)) void neq__t141t(int64_t x, int64_t y, char* __t3023t) {
  int __t142t__=0;
  char z=0;
  is_different__t91t(x,y,&__t142t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3023t=z;
}

static inline __attribute__((always_inline)) int open__t2162t(const char* cmd, char** __t3024t) {
  char* __t2163t__=0;
  char* unsafe_ptr=0;
  char __t2164t__=0;
  char __t2165t__=0;
  char __t2166t__=0;
  int64_t __t2167t__=0;
  int64_t status=0;
  uint64_t __t2168t=0;
  int64_t __t2169t__=0;
  char __t2170t__=0;
  char __t2171t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2161t(cmd,&__t2163t__);
  unsafe_ptr=__t2163t__;
  exists__t604t(unsafe_ptr,&__t2164t__);
  not__t36t(__t2164t__,&__t2165t__);
  if(__t2165t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(unsafe_ptr,&__t2166t__);
  if(__t2166t__){
  pclose__t2160t(unsafe_ptr,&__t2167t__);
  status=__t2167t__;
  unsafe_ptr=0;
  __t2168t=0;
  int__t584t(__t2168t,&__t2169t__);
  neq__t141t(status,__t2169t__,&__t2170t__);
  if(__t2170t__){
  __t_complain=37;
  __t2171t=__t2171t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3024t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2173t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3025t) {
  const char* __t2174t__cstr=0;
  char* __t2174t__str__unsafe_ptr=0;
  uint64_t __t2174t__str__dat__pos=0;
  uint64_t __t2174t__str__dat__length=0;
  char __t2174t__str__dat__first=0;
  char __t2175t____t1101t____t1095t____t705t__=0;
  const char* __t2176t__=0;
  char* __t2177t__unsafe_ptr=0;
  char __t2178t____t2166t__=0;
  int64_t __t2178t____t2167t__=0;
  int64_t __t2178t__status=0;
  uint64_t __t2178t____t2168t=0;
  int64_t __t2178t____t2169t__=0;
  char __t2178t____t2170t__=0;
  char __t2178t____t2171t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1098t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2174t__cstr,&__t2174t__str__unsafe_ptr,&__t2174t__str__dat__pos,&__t2174t__str__dat__length,&__t2174t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1106t(__t2174t__cstr,__t2174t__str__unsafe_ptr,__t2174t__str__dat__pos,__t2174t__str__dat__length,__t2174t__str__dat__first,&__t2176t__);
  __t_errcode=open__t2162t(__t2176t__,&__t2177t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t2177t__unsafe_ptr,&__t2178t____t2166t__);
  if(__t2178t____t2166t__){
  pclose__t2160t(__t2177t__unsafe_ptr,&__t2178t____t2167t__);
  __t2178t__status=__t2178t____t2167t__;
  __t2177t__unsafe_ptr=0;
  __t2178t____t2168t=0;
  int__t584t(__t2178t____t2168t,&__t2178t____t2169t__);
  neq__t141t(__t2178t__status,__t2178t____t2169t__,&__t2178t____t2170t__);
  if(__t2178t____t2170t__){
  __t_complain=37;
  __t2178t____t2171t=__t2178t____t2171t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3025t=__t2177t__unsafe_ptr;
  
  __t_skip_returns:exists__t604t(__t2174t__str__unsafe_ptr,&__t2175t____t1101t____t1095t____t705t__);
  if(__t2175t____t1101t____t1095t____t705t__){
  free__t674t(&__t2174t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2140t(int64_t value, const char** __t3026t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3026t=ret;
}

static inline __attribute__((always_inline)) void print__t393t(const char* value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2830t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2831t__unsafe_ptr=0;
  char __t2832t____t2178t____t2166t__=0;
  int64_t __t2832t____t2178t____t2167t__=0;
  int64_t __t2832t____t2178t__status=0;
  uint64_t __t2832t____t2178t____t2168t=0;
  int64_t __t2832t____t2178t____t2169t__=0;
  char __t2832t____t2178t____t2170t__=0;
  char __t2832t____t2178t____t2171t=0;
  char* proc__unsafe_ptr=0;
  char __t2833t=0;
  int64_t __t2834t=0;
  int64_t error=0;
  const char* __t2835t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2173t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2831t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2831t__unsafe_ptr;
  exists__t604t(__t2831t__unsafe_ptr,&__t2832t____t2178t____t2166t__);
  if(__t2832t____t2178t____t2166t__){
  pclose__t2160t(__t2831t__unsafe_ptr,&__t2832t____t2178t____t2167t__);
  __t2832t____t2178t__status=__t2832t____t2178t____t2167t__;
  __t2831t__unsafe_ptr=0;
  __t2832t____t2178t____t2168t=0;
  int__t584t(__t2832t____t2178t____t2168t,&__t2832t____t2178t____t2169t__);
  neq__t141t(__t2832t____t2178t__status,__t2832t____t2178t____t2169t__,&__t2832t____t2178t____t2170t__);
  if(__t2832t____t2178t____t2170t__){
  __t_complain=37;
  __t2832t____t2178t____t2171t=__t2832t____t2178t____t2171t==0;
  }
  }
  __t2834t=__t_complain;
  __t2833t=(__t_complain==0);
  __t_complain=0;
  error=__t2834t;
  __t2833t=__t2833t==0;
  if(__t2833t){
  cstr__t2140t(error,&__t2835t__);
  print__t393t(__t2835t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2837t() {
  char* __t2842t__unsafe_ptr=0;
  uint64_t __t2842t__unsafe_size=0;
  uint16_t __t2842t__unsafe_offset=0;
  uint16_t __t2842t__unsafe_align=0;
  uint64_t __t2843t=0;
  char* __t2844t__unsafe_ptr=0;
  uint64_t __t2844t__unsafe_size=0;
  uint16_t __t2844t__unsafe_offset=0;
  uint16_t __t2844t__unsafe_align=0;
  char __t2845t____t705t__=0;
  char* __t2846t__buf__unsafe_ptr=0;
  uint64_t __t2846t__buf__unsafe_size=0;
  uint16_t __t2846t__buf__unsafe_offset=0;
  uint16_t __t2846t__buf__unsafe_align=0;
  uint64_t __t2846t__pos=0;
  char* __t2847t__buf__unsafe_ptr=0;
  uint64_t __t2847t__buf__unsafe_size=0;
  uint16_t __t2847t__buf__unsafe_offset=0;
  uint16_t __t2847t__buf__unsafe_align=0;
  uint64_t __t2847t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2850t__unsafe_ptr=0;
  uint64_t __t2850t__dat__pos=0;
  uint64_t __t2850t__dat__length=0;
  char __t2850t__dat__first=0;
  char* __t2851t__unsafe_ptr=0;
  uint64_t __t2851t__dat__pos=0;
  uint64_t __t2851t__dat__length=0;
  char __t2851t__dat__first=0;
  char* __t2852t__unsafe_ptr=0;
  char* __t2854t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2855t=0;
  char __t2856t=0;
  char* __t2857t__unsafe_ptr=0;
  uint64_t __t2857t__dat__pos=0;
  uint64_t __t2857t__dat__length=0;
  char __t2857t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2859t__=0;
  char __t2860t__=0;
  char* __t2861t__buf__unsafe_ptr=0;
  uint64_t __t2861t__buf__unsafe_size=0;
  uint16_t __t2861t__buf__unsafe_offset=0;
  uint16_t __t2861t__buf__unsafe_align=0;
  uint64_t __t2861t__pos=0;
  char* __t2862t__unsafe_ptr=0;
  uint64_t __t2862t__dat__pos=0;
  uint64_t __t2862t__dat__length=0;
  char __t2862t__dat__first=0;
  char* __t2863t__unsafe_ptr=0;
  uint64_t __t2863t__dat__pos=0;
  uint64_t __t2863t__dat__length=0;
  char __t2863t__dat__first=0;
  uint64_t __t2864t__=0;
  char* __t2865t__unsafe_ptr=0;
  uint64_t __t2865t__dat__pos=0;
  uint64_t __t2865t__dat__length=0;
  char __t2865t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  char____t_buffer____buffer__t2840t(&__t2842t__unsafe_ptr,&__t2842t__unsafe_size,&__t2842t__unsafe_offset,&__t2842t__unsafe_align);
  __t2843t=256;
  __t_errcode=alloc__t703t(&__t2842t__unsafe_ptr,&__t2842t__unsafe_size,&__t2842t__unsafe_offset,&__t2842t__unsafe_align,__t2843t,&__t2844t__unsafe_ptr,&__t2844t__unsafe_size,&__t2844t__unsafe_offset,&__t2844t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t838t(&__t2844t__unsafe_ptr,&__t2844t__unsafe_size,&__t2844t__unsafe_offset,&__t2844t__unsafe_align,&__t2846t__buf__unsafe_ptr,&__t2846t__buf__unsafe_size,&__t2846t__buf__unsafe_offset,&__t2846t__buf__unsafe_align,&__t2846t__pos);
  __t2847t__buf__unsafe_ptr=__t2846t__buf__unsafe_ptr;
  __t2847t__buf__unsafe_size=__t2846t__buf__unsafe_size;
  __t2847t__buf__unsafe_offset=__t2846t__buf__unsafe_offset;
  __t2847t__buf__unsafe_align=__t2846t__buf__unsafe_align;
  __t2847t__pos=__t2846t__pos;
  CHARS__buf__unsafe_ptr=__t2847t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2847t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2847t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2847t__buf__unsafe_align;
  CHARS__pos=__t2847t__pos;
  path=__t2848t;
  __t_errcode=copy__t1064t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2849t,&__t2850t__unsafe_ptr,&__t2850t__dat__pos,&__t2850t__dat__length,&__t2850t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1064t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2851t__unsafe_ptr,&__t2851t__dat__pos,&__t2851t__dat__length,&__t2851t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2713t(path,&__t2852t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2854t__unsafe_ptr=__t2852t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2854t__unsafe_ptr;
  __t2855t=0-1;
  while(1){
  __t2855t=__t2855t+1;
  __t_complain=get__t2795t(&test_dir__unsafe_ptr,__t2855t,&__t2857t__unsafe_ptr,&__t2857t__dat__pos,&__t2857t__dat__length,&__t2857t__dat__first);
  __t2856t=__t_complain;
  entry__unsafe_ptr=__t2857t__unsafe_ptr;
  entry__dat__pos=__t2857t__dat__pos;
  entry__dat__length=__t2857t__dat__length;
  entry__dat__first=__t2857t__dat__first;
  __t2856t=__t2856t==0;
  if(!__t2856t){
  break;
  }
  __t_errcode=ends_with__t1272t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2858t,&__t2859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t36t(__t2859t__,&__t2860t__);
  if(__t2860t__){
  continue;
  }
  __t2861t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2861t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2861t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2861t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2861t__pos=CHARS__pos;
  str__t1010t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2862t__unsafe_ptr,&__t2862t__dat__pos,&__t2862t__dat__length,&__t2862t__dat__first);
  __t_errcode=copy_null_terminated__t1143t(&__t2861t__buf__unsafe_ptr,&__t2861t__buf__unsafe_size,&__t2861t__buf__unsafe_offset,&__t2861t__buf__unsafe_align,&__t2861t__pos,__t2862t__unsafe_ptr,__t2862t__dat__pos,__t2862t__dat__length,__t2862t__dat__first,&__t2863t__unsafe_ptr,&__t2863t__dat__pos,&__t2863t__dat__length,&__t2863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1108t(__t2863t__unsafe_ptr,__t2863t__dat__pos,__t2863t__dat__length,__t2863t__dat__first,&__t2864t__);
  __t_errcode=str__t985t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2864t__,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2865t__unsafe_ptr;
  command__dat__pos=__t2865t__dat__pos;
  command__dat__length=__t2865t__dat__length;
  command__dat__first=__t2865t__dat__first;
  print__t1167t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2830t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2712t(__t2852t__unsafe_ptr);
  exists__t604t(__t2844t__unsafe_ptr,&__t2845t____t705t__);
  if(__t2845t____t705t__){
  free__t674t(&__t2844t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2837t();return 0;}