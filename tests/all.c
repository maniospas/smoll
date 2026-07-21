#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2870t=".s";
const char* const __t2860t="./tests/passing/";
const char* const __t395t="\n";
const char* const __t383t="";
const char* const __t2861t="./smoll --cleanup ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2852t(char** __t2880t, uint64_t* __t2881t, uint16_t* __t2882t, uint16_t* __t2883t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2880t=unsafe_ptr;
  *__t2881t=unsafe_size;
  *__t2882t=unsafe_offset;
  *__t2883t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2884t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2884t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2885t) {
  char* allocated=*__t2885t;
  if(allocated){
  free(allocated);
  }
  *__t2885t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2886t) {
  int value=0;
  *__t2886t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2887t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2887t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2888t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2888t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2889t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2889t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2890t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2890t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2891t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2891t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2892t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2892t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2893t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2893t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2894t) {
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
  *__t2894t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2895t, uint64_t* __t2896t, uint16_t* __t2897t, uint16_t* __t2898t, uint64_t size, char** __t2899t, uint64_t* __t2900t, uint16_t* __t2901t, uint16_t* __t2902t) {
  char* buffer__unsafe_ptr=*__t2895t;
  uint64_t buffer__unsafe_size=*__t2896t;
  uint16_t buffer__unsafe_offset=*__t2897t;
  uint16_t buffer__unsafe_align=*__t2898t;
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
  *__t2895t=buffer__unsafe_ptr;
  *__t2896t=buffer__unsafe_size;
  *__t2897t=buffer__unsafe_offset;
  *__t2898t=buffer__unsafe_align;
  *__t2899t=buffer__unsafe_ptr;
  *__t2900t=buffer__unsafe_size;
  *__t2901t=buffer__unsafe_offset;
  *__t2902t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t835t(char** __t2903t, uint64_t* __t2904t, uint16_t* __t2905t, uint16_t* __t2906t, uint64_t _pos, char** __t2907t, uint64_t* __t2908t, uint16_t* __t2909t, uint16_t* __t2910t, uint64_t* __t2911t) {
  char* buf__unsafe_ptr=*__t2903t;
  uint64_t buf__unsafe_size=*__t2904t;
  uint16_t buf__unsafe_offset=*__t2905t;
  uint16_t buf__unsafe_align=*__t2906t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
  goto __t_return;
  __t_return:
  *__t2903t=buf__unsafe_ptr;
  *__t2904t=buf__unsafe_size;
  *__t2905t=buf__unsafe_offset;
  *__t2906t=buf__unsafe_align;
  *__t2907t=buf__unsafe_ptr;
  *__t2908t=buf__unsafe_size;
  *__t2909t=buf__unsafe_offset;
  *__t2910t=buf__unsafe_align;
  *__t2911t=pos;
}

static inline __attribute__((always_inline)) void arena__t838t(char** __t2912t, uint64_t* __t2913t, uint16_t* __t2914t, uint16_t* __t2915t, char** __t2916t, uint64_t* __t2917t, uint16_t* __t2918t, uint16_t* __t2919t, uint64_t* __t2920t) {
  char* buf__unsafe_ptr=*__t2912t;
  uint64_t buf__unsafe_size=*__t2913t;
  uint16_t buf__unsafe_offset=*__t2914t;
  uint16_t buf__unsafe_align=*__t2915t;
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
  *__t2912t=buf__unsafe_ptr;
  *__t2913t=buf__unsafe_size;
  *__t2914t=buf__unsafe_offset;
  *__t2915t=buf__unsafe_align;
  *__t2916t=__t840t__buf__unsafe_ptr;
  *__t2917t=__t840t__buf__unsafe_size;
  *__t2918t=__t840t__buf__unsafe_offset;
  *__t2919t=__t840t__buf__unsafe_align;
  *__t2920t=__t840t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t961t(char** __t2921t, uint64_t* __t2922t, uint16_t* __t2923t, uint16_t* __t2924t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2921t=unsafe_ptr;
  *__t2922t=unsafe_size;
  *__t2923t=unsafe_offset;
  *__t2924t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2925t) {
  *__t2925t=to;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2926t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2926t=z;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2927t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2927t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2928t) {
  *__t2928t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2929t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2929t=__t677t__;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2930t) {
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
  *__t2930t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t983t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2931t, uint64_t* __t2932t, uint64_t* __t2933t, char* __t2934t) {
  goto __t_return;
  __t_return:
  *__t2931t=unsafe_ptr;
  *__t2932t=dat__pos;
  *__t2933t=dat__length;
  *__t2934t=dat__first;
}

static inline __attribute__((always_inline)) int str__t987t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2935t, uint64_t* __t2936t, uint64_t* __t2937t, char* __t2938t) {
  char* unsafe_ptr=0;
  uint64_t __t988t__=0;
  uint64_t __t989t=0;
  char __t990t__=0;
  uint64_t __t991t__=0;
  uint64_t __t992t=0;
  char __t993t__=0;
  char* __t994t__unsafe_ptr=0;
  uint64_t __t994t__dat__pos=0;
  uint64_t __t994t__dat__length=0;
  char __t994t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t678t(buf__unsafe_align,&__t988t__);
  __t989t=1;
  neq__t152t(__t988t__,__t989t,&__t990t__);
  if(__t990t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t678t(buf__unsafe_offset,&__t991t__);
  __t992t=0;
  neq__t152t(__t991t__,__t992t,&__t993t__);
  if(__t993t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t983t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t994t__unsafe_ptr,&__t994t__dat__pos,&__t994t__dat__length,&__t994t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2935t=__t994t__unsafe_ptr;
  *__t2936t=__t994t__dat__pos;
  *__t2937t=__t994t__dat__length;
  *__t2938t=__t994t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1021t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2939t, uint64_t* __t2940t, uint64_t* __t2941t, char* __t2942t) {
  uint64_t __t1022t=0;
  char __t1023t__=0;
  char* __t1025t__=0;
  char __t1026t__value=0;
  char first=0;
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__dat__pos=0;
  uint64_t __t1027t__dat__length=0;
  char __t1027t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1022t=0;
  neq__t152t(length,__t1022t,&__t1023t__);
  if(__t1023t__){
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1025t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1025t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1026t__value,__t1025t__,1);
  first=__t1026t__value;
  }
  __t_errcode=str__t987t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1027t__unsafe_ptr,&__t1027t__dat__pos,&__t1027t__dat__length,&__t1027t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2939t=__t1027t__unsafe_ptr;
  *__t2940t=__t1027t__dat__pos;
  *__t2941t=__t1027t__dat__length;
  *__t2942t=__t1027t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1043t(const char* c, char** __t2943t, uint64_t* __t2944t, uint64_t* __t2945t, char* __t2946t) {
  char* __t1044t__unsafe_ptr=0;
  uint64_t __t1044t__unsafe_size=0;
  uint16_t __t1044t__unsafe_offset=0;
  uint16_t __t1044t__unsafe_align=0;
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__unsafe_size=0;
  uint16_t __t1045t__unsafe_offset=0;
  uint16_t __t1045t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1046t__=0;
  uint64_t length=0;
  uint64_t __t1047t=0;
  uint64_t __t1048t__=0;
  uint64_t __t1049t=0;
  char* __t1051t__unsafe_ptr=0;
  uint64_t __t1051t__dat__pos=0;
  uint64_t __t1051t__dat__length=0;
  char __t1051t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t961t(&__t1044t__unsafe_ptr,&__t1044t__unsafe_size,&__t1044t__unsafe_offset,&__t1044t__unsafe_align);
  __t1045t__unsafe_ptr=__t1044t__unsafe_ptr;
  __t1045t__unsafe_size=__t1044t__unsafe_size;
  __t1045t__unsafe_offset=__t1044t__unsafe_offset;
  __t1045t__unsafe_align=__t1044t__unsafe_align;
  buf__unsafe_ptr=__t1045t__unsafe_ptr;
  buf__unsafe_size=__t1045t__unsafe_size;
  buf__unsafe_offset=__t1045t__unsafe_offset;
  buf__unsafe_align=__t1045t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1046t__);
  buf__unsafe_ptr=__t1046t__;
  if(c){
  length=strlen(c);
  }
  __t1047t=1;
  add__t183t(length,__t1047t,&__t1048t__);
  buf__unsafe_size=__t1048t__;
  __t1049t=0;
  __t_errcode=str__t1021t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1049t,length,&__t1051t__unsafe_ptr,&__t1051t__dat__pos,&__t1051t__dat__length,&__t1051t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2943t=__t1051t__unsafe_ptr;
  *__t2944t=__t1051t__dat__pos;
  *__t2945t=__t1051t__dat__length;
  *__t2946t=__t1051t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1052t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2947t) {
  goto __t_return;
  __t_return:
  *__t2947t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2948t) {
  goto __t_return;
  __t_return:
  *__t2948t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2949t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2949t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2950t, uint64_t* __t2951t, uint16_t* __t2952t, uint16_t* __t2953t, uint64_t pos, char** __t2954t, uint64_t* __t2955t, uint16_t* __t2956t, uint16_t* __t2957t, uint64_t* __t2958t) {
  char* buf__unsafe_ptr=*__t2950t;
  uint64_t buf__unsafe_size=*__t2951t;
  uint16_t buf__unsafe_offset=*__t2952t;
  uint16_t buf__unsafe_align=*__t2953t;
  goto __t_return;
  __t_return:
  *__t2950t=buf__unsafe_ptr;
  *__t2951t=buf__unsafe_size;
  *__t2952t=buf__unsafe_offset;
  *__t2953t=buf__unsafe_align;
  *__t2954t=buf__unsafe_ptr;
  *__t2955t=buf__unsafe_size;
  *__t2956t=buf__unsafe_offset;
  *__t2957t=buf__unsafe_align;
  *__t2958t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2959t, uint64_t* __t2960t, uint16_t* __t2961t, uint16_t* __t2962t, uint64_t* __t2963t, uint64_t length, char** __t2964t, uint64_t* __t2965t, uint16_t* __t2966t, uint16_t* __t2967t, uint64_t* __t2968t) {
  char* allocator__buf__unsafe_ptr=*__t2959t;
  uint64_t allocator__buf__unsafe_size=*__t2960t;
  uint16_t allocator__buf__unsafe_offset=*__t2961t;
  uint16_t allocator__buf__unsafe_align=*__t2962t;
  uint64_t allocator__pos=*__t2963t;
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
  *__t2959t=allocator__buf__unsafe_ptr;
  *__t2960t=allocator__buf__unsafe_size;
  *__t2961t=allocator__buf__unsafe_offset;
  *__t2962t=allocator__buf__unsafe_align;
  *__t2963t=allocator__pos;
  *__t2964t=__t880t__buf__unsafe_ptr;
  *__t2965t=__t880t__buf__unsafe_size;
  *__t2966t=__t880t__buf__unsafe_offset;
  *__t2967t=__t880t__buf__unsafe_align;
  *__t2968t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1074t(char** __t2969t, uint64_t* __t2970t, uint16_t* __t2971t, uint16_t* __t2972t, uint64_t* __t2973t, const char* _other, char** __t2974t, uint64_t* __t2975t, uint64_t* __t2976t, char* __t2977t) {
  char* CHARS__buf__unsafe_ptr=*__t2969t;
  uint64_t CHARS__buf__unsafe_size=*__t2970t;
  uint16_t CHARS__buf__unsafe_offset=*__t2971t;
  uint16_t CHARS__buf__unsafe_align=*__t2972t;
  uint64_t CHARS__pos=*__t2973t;
  char* __t1075t__unsafe_ptr=0;
  uint64_t __t1075t__dat__pos=0;
  uint64_t __t1075t__dat__length=0;
  char __t1075t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1076t__=0;
  char* __t1077t__buf__unsafe_ptr=0;
  uint64_t __t1077t__buf__unsafe_size=0;
  uint16_t __t1077t__buf__unsafe_offset=0;
  uint16_t __t1077t__buf__unsafe_align=0;
  uint64_t __t1077t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1078t__unsafe_ptr=0;
  uint64_t __t1078t__dat__pos=0;
  uint64_t __t1078t__dat__length=0;
  char __t1078t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1043t(_other,&__t1075t__unsafe_ptr,&__t1075t__dat__pos,&__t1075t__dat__length,&__t1075t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1075t__unsafe_ptr;
  other__dat__pos=__t1075t__dat__pos;
  other__dat__length=__t1075t__dat__length;
  other__dat__first=__t1075t__dat__first;
  len__t1052t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1076t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1076t__,&__t1077t__buf__unsafe_ptr,&__t1077t__buf__unsafe_size,&__t1077t__buf__unsafe_offset,&__t1077t__buf__unsafe_align,&__t1077t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1077t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1077t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1077t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1077t__buf__unsafe_align;
  surface__pos=__t1077t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t987t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1078t__unsafe_ptr,&__t1078t__dat__pos,&__t1078t__dat__length,&__t1078t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2969t=CHARS__buf__unsafe_ptr;
  *__t2970t=CHARS__buf__unsafe_size;
  *__t2971t=CHARS__buf__unsafe_offset;
  *__t2972t=CHARS__buf__unsafe_align;
  *__t2973t=CHARS__pos;
  *__t2974t=__t1078t__unsafe_ptr;
  *__t2975t=__t1078t__dat__pos;
  *__t2976t=__t1078t__dat__length;
  *__t2977t=__t1078t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2724t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2725t(const char* path, char** __t2978t) {
  char* unsafe_ptr=0;
  char __t2727t__=0;
  char __t2728t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t604t(unsafe_ptr,&__t2727t__);
  not__t36t(__t2727t__,&__t2728t__);
  if(__t2728t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2724t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2978t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2736t(char** __t2979t, const char** __t2980t) {
  char* f__unsafe_ptr=*__t2979t;
  char __t2737t__=0;
  char __t2738t__=0;
  char* de=0;
  char __t2739t__=0;
  char __t2740t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t604t(f__unsafe_ptr,&__t2737t__);
  not__t36t(__t2737t__,&__t2738t__);
  if(__t2738t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t604t(de,&__t2739t__);
  not__t36t(__t2739t__,&__t2740t__);
  if(__t2740t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2979t=f__unsafe_ptr;
  *__t2980t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2741t(char** __t2981t, char** __t2982t, uint64_t* __t2983t, uint64_t* __t2984t, char* __t2985t) {
  char* f__unsafe_ptr=*__t2981t;
  const char* __t2742t__=0;
  char* __t2743t__unsafe_ptr=0;
  uint64_t __t2743t__dat__pos=0;
  uint64_t __t2743t__dat__length=0;
  char __t2743t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2736t(&f__unsafe_ptr,&__t2742t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1043t(__t2742t__,&__t2743t__unsafe_ptr,&__t2743t__dat__pos,&__t2743t__dat__length,&__t2743t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2981t=f__unsafe_ptr;
  *__t2982t=__t2743t__unsafe_ptr;
  *__t2983t=__t2743t__dat__pos;
  *__t2984t=__t2743t__dat__length;
  *__t2985t=__t2743t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2807t(char** __t2986t, uint64_t __t_anon1, char** __t2987t, uint64_t* __t2988t, uint64_t* __t2989t, char* __t2990t) {
  char* data__unsafe_ptr=*__t2986t;
  char* __t2808t__unsafe_ptr=0;
  uint64_t __t2808t__dat__pos=0;
  uint64_t __t2808t__dat__length=0;
  char __t2808t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2741t(&data__unsafe_ptr,&__t2808t__unsafe_ptr,&__t2808t__dat__pos,&__t2808t__dat__length,&__t2808t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2986t=data__unsafe_ptr;
  *__t2987t=__t2808t__unsafe_ptr;
  *__t2988t=__t2808t__dat__pos;
  *__t2989t=__t2808t__dat__length;
  *__t2990t=__t2808t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1020t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2991t, uint64_t* __t2992t, uint64_t* __t2993t, char* __t2994t) {
  goto __t_return;
  __t_return:
  *__t2991t=other__unsafe_ptr;
  *__t2992t=other__dat__pos;
  *__t2993t=other__dat__length;
  *__t2994t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t260t(uint64_t x, uint64_t y, char* __t2995t) {
  int __t261t__=0;
  char z=0;
  is_different__t103t(x,y,&__t261t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2995t=z;
}

static inline __attribute__((always_inline)) int sub__t360t(uint64_t x, uint64_t y, uint64_t* __t2996t) {
  int __t361t__=0;
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
  *__t2996t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1181t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2997t) {
  uint64_t __t1182t__=0;
  char* __t1183t__=0;
  add__t183t(s__dat__pos,i,&__t1182t__);
  add__t676t(s__unsafe_ptr,__t1182t__,&__t1183t__);
  goto __t_return;
  __t_return:
  *__t2997t=__t1183t__;
}

int slice__t1204t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2998t, uint64_t* __t2999t, uint64_t* __t3000t, char* __t3001t) {
  char* __t1205t__unsafe_ptr=0;
  uint64_t __t1205t__dat__pos=0;
  uint64_t __t1205t__dat__length=0;
  char __t1205t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1206t__=0;
  char* __t1207t__unsafe_ptr=0;
  uint64_t __t1207t__dat__pos=0;
  uint64_t __t1207t__dat__length=0;
  char __t1207t__dat__first=0;
  char __t1208t__=0;
  char __t1209t__=0;
  char __t1210t=0;
  char __t1211t__=0;
  uint64_t __t1212t__=0;
  uint64_t new_length=0;
  uint64_t __t1213t=0;
  char __t1214t__=0;
  char new_first=0;
  char* __t1216t__=0;
  char __t1217t__value=0;
  uint64_t __t1218t__=0;
  char* __t1219t__unsafe_ptr=0;
  uint64_t __t1219t__dat__pos=0;
  uint64_t __t1219t__dat__length=0;
  char __t1219t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1020t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1205t__unsafe_ptr,&__t1205t__dat__pos,&__t1205t__dat__length,&__t1205t__dat__first);
  s__unsafe_ptr=__t1205t__unsafe_ptr;
  s__dat__pos=__t1205t__dat__pos;
  s__dat__length=__t1205t__dat__length;
  s__dat__first=__t1205t__dat__first;
  eq__t128t(from,to,&__t1206t__);
  if(__t1206t__){
  __t_errcode=str__t1043t(__t383t,&__t1207t__unsafe_ptr,&__t1207t__dat__pos,&__t1207t__dat__length,&__t1207t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t284t(from,to,&__t1208t__);
  if(!__t1208t__){
  gt__t284t(to,s__dat__length,&__t1209t__);
  __t1210t=__t1209t__;
  }
  else{
  __t1210t=0;
  not__t36t(__t1210t,&__t1211t__);
  __t1210t=__t1211t__;
  }
  if(__t1210t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t360t(to,from,&__t1212t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1212t__;
  __t1213t=0;
  neq__t152t(from,__t1213t,&__t1214t__);
  if(__t1214t__){
  get__t1181t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1216t__);
  if(!__t1216t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1217t__value,__t1216t__,1);
  new_first=__t1217t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t183t(s__dat__pos,from,&__t1218t__);
  str__t983t(s__unsafe_ptr,__t1218t__,new_length,new_first,&__t1219t__unsafe_ptr,&__t1219t__dat__pos,&__t1219t__dat__length,&__t1219t__dat__first);
  __t1207t__unsafe_ptr=__t1219t__unsafe_ptr;
  __t1207t__dat__pos=__t1219t__dat__pos;
  __t1207t__dat__length=__t1219t__dat__length;
  __t1207t__dat__first=__t1219t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2998t=__t1207t__unsafe_ptr;
  *__t2999t=__t1207t__dat__pos;
  *__t3000t=__t1207t__dat__length;
  *__t3001t=__t1207t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1056t(char x, char y, char* __t3002t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3002t=z;
}

static inline __attribute__((always_inline)) void eq__t1123t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3003t) {
  uint64_t __t1124t__=0;
  uint64_t n=0;
  uint64_t __t1125t__=0;
  char __t1126t__=0;
  char __t1127t=0;
  char __t1128t__=0;
  char __t1129t=0;
  char z=0;
  len__t1052t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1124t__);
  n=__t1124t__;
  len__t1052t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1125t__);
  neq__t152t(n,__t1125t__,&__t1126t__);
  if(__t1126t__){
  __t1127t=0;
  goto __t_return;
  }
  neq__t1056t(x__dat__first,y__dat__first,&__t1128t__);
  if(__t1128t__){
  __t1129t=0;
  __t1127t=__t1129t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1127t=z;
  goto __t_return;
  __t_return:
  *__t3003t=__t1127t;
}

static inline __attribute__((always_inline)) int ends_with__t1284t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3004t) {
  char* __t1285t__unsafe_ptr=0;
  uint64_t __t1285t__dat__pos=0;
  uint64_t __t1285t__dat__length=0;
  char __t1285t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1286t__unsafe_ptr=0;
  uint64_t __t1286t__dat__pos=0;
  uint64_t __t1286t__dat__length=0;
  char __t1286t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1287t__=0;
  char __t1288t=0;
  uint64_t __t1289t__=0;
  uint64_t n=0;
  uint64_t __t1290t__=0;
  uint64_t __t1291t__=0;
  char* __t1292t__unsafe_ptr=0;
  uint64_t __t1292t__dat__pos=0;
  uint64_t __t1292t__dat__length=0;
  char __t1292t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1293t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1020t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1285t__unsafe_ptr,&__t1285t__dat__pos,&__t1285t__dat__length,&__t1285t__dat__first);
  stack__unsafe_ptr=__t1285t__unsafe_ptr;
  stack__dat__pos=__t1285t__dat__pos;
  stack__dat__length=__t1285t__dat__length;
  stack__dat__first=__t1285t__dat__first;
  __t_errcode=str__t1043t(_needle,&__t1286t__unsafe_ptr,&__t1286t__dat__pos,&__t1286t__dat__length,&__t1286t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1286t__unsafe_ptr;
  needle__dat__pos=__t1286t__dat__pos;
  needle__dat__length=__t1286t__dat__length;
  needle__dat__first=__t1286t__dat__first;
  lt__t260t(stack__dat__length,needle__dat__length,&__t1287t__);
  if(__t1287t__){
  __t1288t=0;
  goto __t_return;
  }
  len__t1052t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1289t__);
  n=__t1289t__;
  len__t1052t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1290t__);
  __t_errcode=sub__t360t(n,__t1290t__,&__t1291t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1204t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1291t__,n,&__t1292t__unsafe_ptr,&__t1292t__dat__pos,&__t1292t__dat__length,&__t1292t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1292t__unsafe_ptr;
  ret__dat__pos=__t1292t__dat__pos;
  ret__dat__length=__t1292t__dat__length;
  ret__dat__first=__t1292t__dat__first;
  eq__t1123t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1293t__);
  __t1288t=__t1293t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3004t=__t1288t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1155t(char** __t3005t, uint64_t* __t3006t, uint16_t* __t3007t, uint16_t* __t3008t, uint64_t* __t3009t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3010t, uint64_t* __t3011t, uint64_t* __t3012t, char* __t3013t) {
  char* CHARS__buf__unsafe_ptr=*__t3005t;
  uint64_t CHARS__buf__unsafe_size=*__t3006t;
  uint16_t CHARS__buf__unsafe_offset=*__t3007t;
  uint16_t CHARS__buf__unsafe_align=*__t3008t;
  uint64_t CHARS__pos=*__t3009t;
  char* __t1156t__unsafe_ptr=0;
  uint64_t __t1156t__dat__pos=0;
  uint64_t __t1156t__dat__length=0;
  char __t1156t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1157t__=0;
  uint64_t __t1158t__=0;
  uint64_t null_pos=0;
  uint64_t __t1159t=0;
  uint64_t __t1160t__=0;
  uint64_t next_pos=0;
  uint64_t __t1161t__=0;
  char __t1162t__=0;
  uint64_t __t1163t=0;
  uint64_t __t1164t__=0;
  uint64_t prev_pos=0;
  char* __t1165t__unsafe_ptr=0;
  uint64_t __t1165t__dat__pos=0;
  uint64_t __t1165t__dat__length=0;
  char __t1165t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1020t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1156t__unsafe_ptr,&__t1156t__dat__pos,&__t1156t__dat__length,&__t1156t__dat__first);
  other__unsafe_ptr=__t1156t__unsafe_ptr;
  other__dat__pos=__t1156t__dat__pos;
  other__dat__length=__t1156t__dat__length;
  other__dat__first=__t1156t__dat__first;
  len__t1052t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1157t__);
  add__t183t(CHARS__pos,__t1157t__,&__t1158t__);
  null_pos=__t1158t__;
  __t1159t=1;
  add__t183t(null_pos,__t1159t,&__t1160t__);
  next_pos=__t1160t__;
  len__t830t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1161t__);
  gt__t284t(next_pos,__t1161t__,&__t1162t__);
  if(__t1162t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  add__t183t(CHARS__pos,__t1163t,&__t1164t__);
  prev_pos=__t1164t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t987t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1165t__unsafe_ptr,&__t1165t__dat__pos,&__t1165t__dat__length,&__t1165t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3005t=CHARS__buf__unsafe_ptr;
  *__t3006t=CHARS__buf__unsafe_size;
  *__t3007t=CHARS__buf__unsafe_offset;
  *__t3008t=CHARS__buf__unsafe_align;
  *__t3009t=CHARS__pos;
  *__t3010t=__t1165t__unsafe_ptr;
  *__t3011t=__t1165t__dat__pos;
  *__t3012t=__t1165t__dat__length;
  *__t3013t=__t1165t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1120t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3014t) {
  uint64_t __t1121t__=0;
  add__t183t(s__dat__pos,s__dat__length,&__t1121t__);
  goto __t_return;
  __t_return:
  *__t3014t=__t1121t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3015t) {
  int value=0;
  *__t3015t=value;
}

static inline __attribute__((always_inline)) void not__t47t(int __t_anon0, int* __t3016t) {
  int __t48t__=0;
  true__t15t(&__t48t__);
  goto __t_return;
  __t_return:
  *__t3016t=__t48t__;
}

static inline __attribute__((always_inline)) int str__t995t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t3017t, uint64_t* __t3018t, uint64_t* __t3019t, char* __t3020t) {
  int __t997t=0;
  int __t998t__=0;
  uint64_t __t999t__=0;
  char __t1000t__=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t=0;
  char* __t1004t__=0;
  char __t1005t__value=0;
  char* __t1006t__unsafe_ptr=0;
  uint64_t __t1006t__dat__pos=0;
  uint64_t __t1006t__dat__length=0;
  char __t1006t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t47t(__t997t,&__t998t__);
  len__t830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t999t__);
  gt__t284t(length,__t999t__,&__t1000t__);
  if(__t1000t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1001t=0;
  __t1002t=0;
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1002t,&__t1004t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1004t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1005t__value,__t1004t__,1);
  __t_errcode=str__t987t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1001t,length,__t1005t__value,&__t1006t__unsafe_ptr,&__t1006t__dat__pos,&__t1006t__dat__length,&__t1006t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3017t=__t1006t__unsafe_ptr;
  *__t3018t=__t1006t__dat__pos;
  *__t3019t=__t1006t__dat__length;
  *__t3020t=__t1006t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1179t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  const char* endl=0;
  endl=__t395t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t831t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1100t(char** __t3021t, uint64_t* __t3022t, uint16_t* __t3023t, uint16_t* __t3024t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3021t=unsafe_ptr;
  *__t3022t=unsafe_size;
  *__t3023t=unsafe_offset;
  *__t3024t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1099t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3025t, uint64_t* __t3026t, uint64_t* __t3027t, char* __t3028t) {
  char* __t1102t__unsafe_ptr=0;
  uint64_t __t1102t__unsafe_size=0;
  uint16_t __t1102t__unsafe_offset=0;
  uint16_t __t1102t__unsafe_align=0;
  uint64_t __t1103t=0;
  uint64_t __t1104t__=0;
  uint64_t __t1105t__=0;
  char* __t1106t__unsafe_ptr=0;
  uint64_t __t1106t__unsafe_size=0;
  uint16_t __t1106t__unsafe_offset=0;
  uint16_t __t1106t__unsafe_align=0;
  char __t1107t____t705t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1108t=0;
  char* __t1109t__unsafe_ptr=0;
  uint64_t __t1109t__dat__pos=0;
  uint64_t __t1109t__dat__length=0;
  char __t1109t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1100t(&__t1102t__unsafe_ptr,&__t1102t__unsafe_size,&__t1102t__unsafe_offset,&__t1102t__unsafe_align);
  __t1103t=1;
  len__t1052t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1104t__);
  add__t183t(__t1103t,__t1104t__,&__t1105t__);
  __t_errcode=alloc__t703t(&__t1102t__unsafe_ptr,&__t1102t__unsafe_size,&__t1102t__unsafe_offset,&__t1102t__unsafe_align,__t1105t__,&__t1106t__unsafe_ptr,&__t1106t__unsafe_size,&__t1106t__unsafe_offset,&__t1106t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1106t__unsafe_ptr;
  buf__unsafe_size=__t1106t__unsafe_size;
  buf__unsafe_offset=__t1106t__unsafe_offset;
  buf__unsafe_align=__t1106t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t987t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1108t,other__dat__length,other__dat__first,&__t1109t__unsafe_ptr,&__t1109t__dat__pos,&__t1109t__dat__length,&__t1109t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t1109t__unsafe_ptr,&__t1107t____t705t__);
  if(__t1107t____t705t__){
  free__t674t(&__t1109t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3025t=__t1109t__unsafe_ptr;
  *__t3026t=__t1109t__dat__pos;
  *__t3027t=__t1109t__dat__length;
  *__t3028t=__t1109t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1110t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3029t, char** __t3030t, uint64_t* __t3031t, uint64_t* __t3032t, char* __t3033t) {
  char* __t1112t__unsafe_ptr=0;
  uint64_t __t1112t__dat__pos=0;
  uint64_t __t1112t__dat__length=0;
  char __t1112t__dat__first=0;
  char __t1113t____t1107t____t705t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1114t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t831t();
  __t_errcode=copy_null_terminated__t1099t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1112t__unsafe_ptr,&__t1112t__dat__pos,&__t1112t__dat__length,&__t1112t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1112t__unsafe_ptr;
  str__dat__pos=__t1112t__dat__pos;
  str__dat__length=__t1112t__dat__length;
  str__dat__first=__t1112t__dat__first;
  add__t676t(str__unsafe_ptr,str__dat__pos,&__t1114t__);
  _ret=__t1114t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t604t(str__unsafe_ptr,&__t1113t____t1107t____t705t__);
  if(__t1113t____t1107t____t705t__){
  free__t674t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3029t=cstr;
  *__t3030t=str__unsafe_ptr;
  *__t3031t=str__dat__pos;
  *__t3032t=str__dat__length;
  *__t3033t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1118t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3034t) {
  goto __t_return;
  __t_return:
  *__t3034t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2173t(const char* cmd, char** __t3035t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3035t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2172t(char* unsafe_ptr, int64_t* __t3036t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3036t=status;
}

static inline __attribute__((always_inline)) void int__t584t(uint64_t x, int64_t* __t3037t) {
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3037t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t3038t) {
  int __t92t=0;
  int __t93t__=0;
  not__t45t(__t92t,&__t93t__);
  goto __t_return;
  __t_return:
  *__t3038t=__t93t__;
}

static inline __attribute__((always_inline)) void neq__t141t(int64_t x, int64_t y, char* __t3039t) {
  int __t142t__=0;
  char z=0;
  is_different__t91t(x,y,&__t142t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3039t=z;
}

static inline __attribute__((always_inline)) int open__t2174t(const char* cmd, char** __t3040t) {
  char* __t2175t__=0;
  char* unsafe_ptr=0;
  char __t2176t__=0;
  char __t2177t__=0;
  char __t2178t__=0;
  int64_t __t2179t__=0;
  int64_t status=0;
  uint64_t __t2180t=0;
  int64_t __t2181t__=0;
  char __t2182t__=0;
  char __t2183t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2173t(cmd,&__t2175t__);
  unsafe_ptr=__t2175t__;
  exists__t604t(unsafe_ptr,&__t2176t__);
  not__t36t(__t2176t__,&__t2177t__);
  if(__t2177t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(unsafe_ptr,&__t2178t__);
  if(__t2178t__){
  pclose__t2172t(unsafe_ptr,&__t2179t__);
  status=__t2179t__;
  unsafe_ptr=0;
  __t2180t=0;
  int__t584t(__t2180t,&__t2181t__);
  neq__t141t(status,__t2181t__,&__t2182t__);
  if(__t2182t__){
  __t_complain=37;
  __t2183t=__t2183t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3040t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2185t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3041t) {
  const char* __t2186t__cstr=0;
  char* __t2186t__str__unsafe_ptr=0;
  uint64_t __t2186t__str__dat__pos=0;
  uint64_t __t2186t__str__dat__length=0;
  char __t2186t__str__dat__first=0;
  char __t2187t____t1113t____t1107t____t705t__=0;
  const char* __t2188t__=0;
  char* __t2189t__unsafe_ptr=0;
  char __t2190t____t2178t__=0;
  int64_t __t2190t____t2179t__=0;
  int64_t __t2190t__status=0;
  uint64_t __t2190t____t2180t=0;
  int64_t __t2190t____t2181t__=0;
  char __t2190t____t2182t__=0;
  char __t2190t____t2183t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1110t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2186t__cstr,&__t2186t__str__unsafe_ptr,&__t2186t__str__dat__pos,&__t2186t__str__dat__length,&__t2186t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1118t(__t2186t__cstr,__t2186t__str__unsafe_ptr,__t2186t__str__dat__pos,__t2186t__str__dat__length,__t2186t__str__dat__first,&__t2188t__);
  __t_errcode=open__t2174t(__t2188t__,&__t2189t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t2189t__unsafe_ptr,&__t2190t____t2178t__);
  if(__t2190t____t2178t__){
  pclose__t2172t(__t2189t__unsafe_ptr,&__t2190t____t2179t__);
  __t2190t__status=__t2190t____t2179t__;
  __t2189t__unsafe_ptr=0;
  __t2190t____t2180t=0;
  int__t584t(__t2190t____t2180t,&__t2190t____t2181t__);
  neq__t141t(__t2190t__status,__t2190t____t2181t__,&__t2190t____t2182t__);
  if(__t2190t____t2182t__){
  __t_complain=37;
  __t2190t____t2183t=__t2190t____t2183t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3041t=__t2189t__unsafe_ptr;
  
  __t_skip_returns:exists__t604t(__t2186t__str__unsafe_ptr,&__t2187t____t1113t____t1107t____t705t__);
  if(__t2187t____t1113t____t1107t____t705t__){
  free__t674t(&__t2186t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2152t(int64_t value, const char** __t3042t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3042t=ret;
}

static inline __attribute__((always_inline)) void print__t393t(const char* value) {
  const char* endl=0;
  endl=__t395t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2842t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2843t__unsafe_ptr=0;
  char __t2844t____t2190t____t2178t__=0;
  int64_t __t2844t____t2190t____t2179t__=0;
  int64_t __t2844t____t2190t__status=0;
  uint64_t __t2844t____t2190t____t2180t=0;
  int64_t __t2844t____t2190t____t2181t__=0;
  char __t2844t____t2190t____t2182t__=0;
  char __t2844t____t2190t____t2183t=0;
  char __t2845t=0;
  int64_t __t2846t=0;
  int64_t error=0;
  const char* __t2847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2185t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2843t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  exists__t604t(__t2843t__unsafe_ptr,&__t2844t____t2190t____t2178t__);
  if(__t2844t____t2190t____t2178t__){
  pclose__t2172t(__t2843t__unsafe_ptr,&__t2844t____t2190t____t2179t__);
  __t2844t____t2190t__status=__t2844t____t2190t____t2179t__;
  __t2843t__unsafe_ptr=0;
  __t2844t____t2190t____t2180t=0;
  int__t584t(__t2844t____t2190t____t2180t,&__t2844t____t2190t____t2181t__);
  neq__t141t(__t2844t____t2190t__status,__t2844t____t2190t____t2181t__,&__t2844t____t2190t____t2182t__);
  if(__t2844t____t2190t____t2182t__){
  __t_complain=37;
  __t2844t____t2190t____t2183t=__t2844t____t2190t____t2183t==0;
  }
  }
  __t2846t=__t_complain;
  __t2845t=(__t_complain==0);
  __t_complain=0;
  error=__t2846t;
  __t2845t=__t2845t==0;
  if(__t2845t){
  cstr__t2152t(error,&__t2847t__);
  print__t393t(__t2847t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2849t() {
  char* __t2854t__unsafe_ptr=0;
  uint64_t __t2854t__unsafe_size=0;
  uint16_t __t2854t__unsafe_offset=0;
  uint16_t __t2854t__unsafe_align=0;
  uint64_t __t2855t=0;
  char* __t2856t__unsafe_ptr=0;
  uint64_t __t2856t__unsafe_size=0;
  uint16_t __t2856t__unsafe_offset=0;
  uint16_t __t2856t__unsafe_align=0;
  char __t2857t____t705t__=0;
  char* __t2858t__buf__unsafe_ptr=0;
  uint64_t __t2858t__buf__unsafe_size=0;
  uint16_t __t2858t__buf__unsafe_offset=0;
  uint16_t __t2858t__buf__unsafe_align=0;
  uint64_t __t2858t__pos=0;
  char* __t2859t__buf__unsafe_ptr=0;
  uint64_t __t2859t__buf__unsafe_size=0;
  uint16_t __t2859t__buf__unsafe_offset=0;
  uint16_t __t2859t__buf__unsafe_align=0;
  uint64_t __t2859t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2862t__unsafe_ptr=0;
  uint64_t __t2862t__dat__pos=0;
  uint64_t __t2862t__dat__length=0;
  char __t2862t__dat__first=0;
  char* __t2863t__unsafe_ptr=0;
  uint64_t __t2863t__dat__pos=0;
  uint64_t __t2863t__dat__length=0;
  char __t2863t__dat__first=0;
  char* __t2864t__unsafe_ptr=0;
  char* __t2866t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2867t=0;
  char __t2868t=0;
  char* __t2869t__unsafe_ptr=0;
  uint64_t __t2869t__dat__pos=0;
  uint64_t __t2869t__dat__length=0;
  char __t2869t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2871t__=0;
  char __t2872t__=0;
  char* __t2873t__buf__unsafe_ptr=0;
  uint64_t __t2873t__buf__unsafe_size=0;
  uint16_t __t2873t__buf__unsafe_offset=0;
  uint16_t __t2873t__buf__unsafe_align=0;
  uint64_t __t2873t__pos=0;
  char* __t2874t__unsafe_ptr=0;
  uint64_t __t2874t__dat__pos=0;
  uint64_t __t2874t__dat__length=0;
  char __t2874t__dat__first=0;
  char* __t2875t__unsafe_ptr=0;
  uint64_t __t2875t__dat__pos=0;
  uint64_t __t2875t__dat__length=0;
  char __t2875t__dat__first=0;
  uint64_t __t2876t__=0;
  char* __t2877t__unsafe_ptr=0;
  uint64_t __t2877t__dat__pos=0;
  uint64_t __t2877t__dat__length=0;
  char __t2877t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  char____t_buffer____buffer__t2852t(&__t2854t__unsafe_ptr,&__t2854t__unsafe_size,&__t2854t__unsafe_offset,&__t2854t__unsafe_align);
  __t2855t=256;
  __t_errcode=alloc__t703t(&__t2854t__unsafe_ptr,&__t2854t__unsafe_size,&__t2854t__unsafe_offset,&__t2854t__unsafe_align,__t2855t,&__t2856t__unsafe_ptr,&__t2856t__unsafe_size,&__t2856t__unsafe_offset,&__t2856t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t838t(&__t2856t__unsafe_ptr,&__t2856t__unsafe_size,&__t2856t__unsafe_offset,&__t2856t__unsafe_align,&__t2858t__buf__unsafe_ptr,&__t2858t__buf__unsafe_size,&__t2858t__buf__unsafe_offset,&__t2858t__buf__unsafe_align,&__t2858t__pos);
  __t2859t__buf__unsafe_ptr=__t2858t__buf__unsafe_ptr;
  __t2859t__buf__unsafe_size=__t2858t__buf__unsafe_size;
  __t2859t__buf__unsafe_offset=__t2858t__buf__unsafe_offset;
  __t2859t__buf__unsafe_align=__t2858t__buf__unsafe_align;
  __t2859t__pos=__t2858t__pos;
  CHARS__buf__unsafe_ptr=__t2859t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2859t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2859t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2859t__buf__unsafe_align;
  CHARS__pos=__t2859t__pos;
  path=__t2860t;
  __t_errcode=copy__t1074t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2861t,&__t2862t__unsafe_ptr,&__t2862t__dat__pos,&__t2862t__dat__length,&__t2862t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1074t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2863t__unsafe_ptr,&__t2863t__dat__pos,&__t2863t__dat__length,&__t2863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2725t(path,&__t2864t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2866t__unsafe_ptr=__t2864t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2866t__unsafe_ptr;
  __t2867t=0-1;
  while(1){
  __t2867t=__t2867t+1;
  __t_complain=get__t2807t(&test_dir__unsafe_ptr,__t2867t,&__t2869t__unsafe_ptr,&__t2869t__dat__pos,&__t2869t__dat__length,&__t2869t__dat__first);
  __t2868t=__t_complain;
  entry__unsafe_ptr=__t2869t__unsafe_ptr;
  entry__dat__pos=__t2869t__dat__pos;
  entry__dat__length=__t2869t__dat__length;
  entry__dat__first=__t2869t__dat__first;
  __t2868t=__t2868t==0;
  if(!__t2868t){
  break;
  }
  __t_errcode=ends_with__t1284t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2870t,&__t2871t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t36t(__t2871t__,&__t2872t__);
  if(__t2872t__){
  continue;
  }
  __t2873t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2873t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2873t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2873t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2873t__pos=CHARS__pos;
  str__t1020t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2874t__unsafe_ptr,&__t2874t__dat__pos,&__t2874t__dat__length,&__t2874t__dat__first);
  __t_errcode=copy_null_terminated__t1155t(&__t2873t__buf__unsafe_ptr,&__t2873t__buf__unsafe_size,&__t2873t__buf__unsafe_offset,&__t2873t__buf__unsafe_align,&__t2873t__pos,__t2874t__unsafe_ptr,__t2874t__dat__pos,__t2874t__dat__length,__t2874t__dat__first,&__t2875t__unsafe_ptr,&__t2875t__dat__pos,&__t2875t__dat__length,&__t2875t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1120t(__t2875t__unsafe_ptr,__t2875t__dat__pos,__t2875t__dat__length,__t2875t__dat__first,&__t2876t__);
  __t_errcode=str__t995t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2876t__,&__t2877t__unsafe_ptr,&__t2877t__dat__pos,&__t2877t__dat__length,&__t2877t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2877t__unsafe_ptr;
  command__dat__pos=__t2877t__dat__pos;
  command__dat__length=__t2877t__dat__length;
  command__dat__first=__t2877t__dat__first;
  print__t1179t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2842t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2724t(__t2864t__unsafe_ptr);
  exists__t604t(__t2856t__unsafe_ptr,&__t2857t____t705t__);
  if(__t2857t____t705t__){
  free__t674t(&__t2856t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2849t();return 0;}