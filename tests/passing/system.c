#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2832t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2179t(char** __t2835t, uint64_t* __t2836t, uint16_t* __t2837t, uint16_t* __t2838t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2835t=unsafe_ptr;
  *__t2836t=unsafe_size;
  *__t2837t=unsafe_offset;
  *__t2838t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2839t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2839t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2840t) {
  char* allocated=*__t2840t;
  if(allocated){
  free(allocated);
  }
  *__t2840t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2841t) {
  int value=0;
  *__t2841t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2842t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2842t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2843t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2843t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2844t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2844t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2845t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2845t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2846t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2846t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2847t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2847t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2848t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2848t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2849t) {
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
  *__t2849t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2850t, uint64_t* __t2851t, uint16_t* __t2852t, uint16_t* __t2853t, uint64_t size, char** __t2854t, uint64_t* __t2855t, uint16_t* __t2856t, uint16_t* __t2857t) {
  char* buffer__unsafe_ptr=*__t2850t;
  uint64_t buffer__unsafe_size=*__t2851t;
  uint16_t buffer__unsafe_offset=*__t2852t;
  uint16_t buffer__unsafe_align=*__t2853t;
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
  *__t2850t=buffer__unsafe_ptr;
  *__t2851t=buffer__unsafe_size;
  *__t2852t=buffer__unsafe_offset;
  *__t2853t=buffer__unsafe_align;
  *__t2854t=buffer__unsafe_ptr;
  *__t2855t=buffer__unsafe_size;
  *__t2856t=buffer__unsafe_offset;
  *__t2857t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t835t(char** __t2858t, uint64_t* __t2859t, uint16_t* __t2860t, uint16_t* __t2861t, uint64_t _pos, char** __t2862t, uint64_t* __t2863t, uint16_t* __t2864t, uint16_t* __t2865t, uint64_t* __t2866t) {
  char* buf__unsafe_ptr=*__t2858t;
  uint64_t buf__unsafe_size=*__t2859t;
  uint16_t buf__unsafe_offset=*__t2860t;
  uint16_t buf__unsafe_align=*__t2861t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
  goto __t_return;
  __t_return:
  *__t2858t=buf__unsafe_ptr;
  *__t2859t=buf__unsafe_size;
  *__t2860t=buf__unsafe_offset;
  *__t2861t=buf__unsafe_align;
  *__t2862t=buf__unsafe_ptr;
  *__t2863t=buf__unsafe_size;
  *__t2864t=buf__unsafe_offset;
  *__t2865t=buf__unsafe_align;
  *__t2866t=pos;
}

static inline __attribute__((always_inline)) void arena__t838t(char** __t2867t, uint64_t* __t2868t, uint16_t* __t2869t, uint16_t* __t2870t, char** __t2871t, uint64_t* __t2872t, uint16_t* __t2873t, uint16_t* __t2874t, uint64_t* __t2875t) {
  char* buf__unsafe_ptr=*__t2867t;
  uint64_t buf__unsafe_size=*__t2868t;
  uint16_t buf__unsafe_offset=*__t2869t;
  uint16_t buf__unsafe_align=*__t2870t;
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
  *__t2867t=buf__unsafe_ptr;
  *__t2868t=buf__unsafe_size;
  *__t2869t=buf__unsafe_offset;
  *__t2870t=buf__unsafe_align;
  *__t2871t=__t840t__buf__unsafe_ptr;
  *__t2872t=__t840t__buf__unsafe_size;
  *__t2873t=__t840t__buf__unsafe_offset;
  *__t2874t=__t840t__buf__unsafe_align;
  *__t2875t=__t840t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t951t(char** __t2876t, uint64_t* __t2877t, uint16_t* __t2878t, uint16_t* __t2879t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2876t=unsafe_ptr;
  *__t2877t=unsafe_size;
  *__t2878t=unsafe_offset;
  *__t2879t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2880t) {
  *__t2880t=to;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2881t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2881t=z;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2882t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2882t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2883t) {
  *__t2883t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2884t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2884t=__t677t__;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2885t) {
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
  *__t2885t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t973t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2886t, uint64_t* __t2887t, uint64_t* __t2888t, char* __t2889t) {
  goto __t_return;
  __t_return:
  *__t2886t=unsafe_ptr;
  *__t2887t=dat__pos;
  *__t2888t=dat__length;
  *__t2889t=dat__first;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2890t, uint64_t* __t2891t, uint64_t* __t2892t, char* __t2893t) {
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
  *__t2890t=__t984t__unsafe_ptr;
  *__t2891t=__t984t__dat__pos;
  *__t2892t=__t984t__dat__length;
  *__t2893t=__t984t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1011t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2894t, uint64_t* __t2895t, uint64_t* __t2896t, char* __t2897t) {
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
  *__t2894t=__t1017t__unsafe_ptr;
  *__t2895t=__t1017t__dat__pos;
  *__t2896t=__t1017t__dat__length;
  *__t2897t=__t1017t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1033t(const char* c, char** __t2898t, uint64_t* __t2899t, uint64_t* __t2900t, char* __t2901t) {
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
  *__t2898t=__t1041t__unsafe_ptr;
  *__t2899t=__t1041t__dat__pos;
  *__t2900t=__t1041t__dat__length;
  *__t2901t=__t1041t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1042t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2902t) {
  goto __t_return;
  __t_return:
  *__t2902t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2903t) {
  goto __t_return;
  __t_return:
  *__t2903t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2904t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2904t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2905t, uint64_t* __t2906t, uint16_t* __t2907t, uint16_t* __t2908t, uint64_t pos, char** __t2909t, uint64_t* __t2910t, uint16_t* __t2911t, uint16_t* __t2912t, uint64_t* __t2913t) {
  char* buf__unsafe_ptr=*__t2905t;
  uint64_t buf__unsafe_size=*__t2906t;
  uint16_t buf__unsafe_offset=*__t2907t;
  uint16_t buf__unsafe_align=*__t2908t;
  goto __t_return;
  __t_return:
  *__t2905t=buf__unsafe_ptr;
  *__t2906t=buf__unsafe_size;
  *__t2907t=buf__unsafe_offset;
  *__t2908t=buf__unsafe_align;
  *__t2909t=buf__unsafe_ptr;
  *__t2910t=buf__unsafe_size;
  *__t2911t=buf__unsafe_offset;
  *__t2912t=buf__unsafe_align;
  *__t2913t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2914t, uint64_t* __t2915t, uint16_t* __t2916t, uint16_t* __t2917t, uint64_t* __t2918t, uint64_t length, char** __t2919t, uint64_t* __t2920t, uint16_t* __t2921t, uint16_t* __t2922t, uint64_t* __t2923t) {
  char* allocator__buf__unsafe_ptr=*__t2914t;
  uint64_t allocator__buf__unsafe_size=*__t2915t;
  uint16_t allocator__buf__unsafe_offset=*__t2916t;
  uint16_t allocator__buf__unsafe_align=*__t2917t;
  uint64_t allocator__pos=*__t2918t;
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
  *__t2914t=allocator__buf__unsafe_ptr;
  *__t2915t=allocator__buf__unsafe_size;
  *__t2916t=allocator__buf__unsafe_offset;
  *__t2917t=allocator__buf__unsafe_align;
  *__t2918t=allocator__pos;
  *__t2919t=__t880t__buf__unsafe_ptr;
  *__t2920t=__t880t__buf__unsafe_size;
  *__t2921t=__t880t__buf__unsafe_offset;
  *__t2922t=__t880t__buf__unsafe_align;
  *__t2923t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1064t(char** __t2924t, uint64_t* __t2925t, uint16_t* __t2926t, uint16_t* __t2927t, uint64_t* __t2928t, const char* _other, char** __t2929t, uint64_t* __t2930t, uint64_t* __t2931t, char* __t2932t) {
  char* CHARS__buf__unsafe_ptr=*__t2924t;
  uint64_t CHARS__buf__unsafe_size=*__t2925t;
  uint16_t CHARS__buf__unsafe_offset=*__t2926t;
  uint16_t CHARS__buf__unsafe_align=*__t2927t;
  uint64_t CHARS__pos=*__t2928t;
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
  *__t2924t=CHARS__buf__unsafe_ptr;
  *__t2925t=CHARS__buf__unsafe_size;
  *__t2926t=CHARS__buf__unsafe_offset;
  *__t2927t=CHARS__buf__unsafe_align;
  *__t2928t=CHARS__pos;
  *__t2929t=__t1068t__unsafe_ptr;
  *__t2930t=__t1068t__dat__pos;
  *__t2931t=__t1068t__dat__length;
  *__t2932t=__t1068t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t831t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1089t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2933t, uint64_t* __t2934t, uint64_t* __t2935t, char* __t2936t) {
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
  *__t2933t=__t1097t__unsafe_ptr;
  *__t2934t=__t1097t__dat__pos;
  *__t2935t=__t1097t__dat__length;
  *__t2936t=__t1097t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1098t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2937t, char** __t2938t, uint64_t* __t2939t, uint64_t* __t2940t, char* __t2941t) {
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
  *__t2937t=cstr;
  *__t2938t=str__unsafe_ptr;
  *__t2939t=str__dat__pos;
  *__t2940t=str__dat__length;
  *__t2941t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1106t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2942t) {
  goto __t_return;
  __t_return:
  *__t2942t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t2229t(const char* cmd, const char** __t2943t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=39;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2943t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t2228t(const char* cmd, int64_t* __t2944t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2944t=result;
}

static inline __attribute__((always_inline)) void int__t584t(uint64_t x, int64_t* __t2945t) {
  int __t585t=0;
  int __t586t=0;
  int __t587t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2945t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t2946t) {
  int __t92t=0;
  int __t93t__=0;
  not__t45t(__t92t,&__t93t__);
  goto __t_return;
  __t_return:
  *__t2946t=__t93t__;
}

static inline __attribute__((always_inline)) void neq__t141t(int64_t x, int64_t y, char* __t2947t) {
  int __t142t__=0;
  char z=0;
  is_different__t91t(x,y,&__t142t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2947t=z;
}

int system__t2238t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t2239t__cstr=0;
  char* __t2239t__str__unsafe_ptr=0;
  uint64_t __t2239t__str__dat__pos=0;
  uint64_t __t2239t__str__dat__length=0;
  char __t2239t__str__dat__first=0;
  char __t2240t____t1101t____t1095t____t705t__=0;
  const char* __t2241t__=0;
  const char* __t2242t__=0;
  int64_t __t2243t__=0;
  int64_t result=0;
  uint64_t __t2244t=0;
  int64_t __t2245t__=0;
  char __t2246t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1098t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t2239t__cstr,&__t2239t__str__unsafe_ptr,&__t2239t__str__dat__pos,&__t2239t__str__dat__length,&__t2239t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1106t(__t2239t__cstr,__t2239t__str__unsafe_ptr,__t2239t__str__dat__pos,__t2239t__str__dat__length,__t2239t__str__dat__first,&__t2241t__);
  __t_errcode=safe__t2229t(__t2241t__,&__t2242t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t2228t(__t2242t__,&__t2243t__);
  result=__t2243t__;
  __t2244t=0;
  int__t584t(__t2244t,&__t2245t__);
  neq__t141t(result,__t2245t__,&__t2246t__);
  if(__t2246t__){
  __t_errcode=40;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t604t(__t2239t__str__unsafe_ptr,&__t2240t____t1101t____t1095t____t705t__);
  if(__t2240t____t1101t____t1095t____t705t__){
  free__t674t(&__t2239t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2823t() {
  char* __t2826t__unsafe_ptr=0;
  uint64_t __t2826t__unsafe_size=0;
  uint16_t __t2826t__unsafe_offset=0;
  uint16_t __t2826t__unsafe_align=0;
  uint64_t __t2827t=0;
  char* __t2828t__unsafe_ptr=0;
  uint64_t __t2828t__unsafe_size=0;
  uint16_t __t2828t__unsafe_offset=0;
  uint16_t __t2828t__unsafe_align=0;
  char __t2829t____t705t__=0;
  char* __t2830t__unsafe_ptr=0;
  uint64_t __t2830t__unsafe_size=0;
  uint16_t __t2830t__unsafe_offset=0;
  uint16_t __t2830t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t2831t__buf__unsafe_ptr=0;
  uint64_t __t2831t__buf__unsafe_size=0;
  uint16_t __t2831t__buf__unsafe_offset=0;
  uint16_t __t2831t__buf__unsafe_align=0;
  uint64_t __t2831t__pos=0;
  char* __t2833t__unsafe_ptr=0;
  uint64_t __t2833t__dat__pos=0;
  uint64_t __t2833t__dat__length=0;
  char __t2833t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  char____t_buffer____buffer__t2179t(&__t2826t__unsafe_ptr,&__t2826t__unsafe_size,&__t2826t__unsafe_offset,&__t2826t__unsafe_align);
  __t2827t=2;
  __t_errcode=alloc__t703t(&__t2826t__unsafe_ptr,&__t2826t__unsafe_size,&__t2826t__unsafe_offset,&__t2826t__unsafe_align,__t2827t,&__t2828t__unsafe_ptr,&__t2828t__unsafe_size,&__t2828t__unsafe_offset,&__t2828t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2830t__unsafe_ptr=__t2828t__unsafe_ptr;
  __t2830t__unsafe_size=__t2828t__unsafe_size;
  __t2830t__unsafe_offset=__t2828t__unsafe_offset;
  __t2830t__unsafe_align=__t2828t__unsafe_align;
  buf__unsafe_ptr=__t2830t__unsafe_ptr;
  buf__unsafe_size=__t2830t__unsafe_size;
  buf__unsafe_offset=__t2830t__unsafe_offset;
  buf__unsafe_align=__t2830t__unsafe_align;
  arena__t838t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2831t__buf__unsafe_ptr,&__t2831t__buf__unsafe_size,&__t2831t__buf__unsafe_offset,&__t2831t__buf__unsafe_align,&__t2831t__pos);
  __t_errcode=copy__t1064t(&__t2831t__buf__unsafe_ptr,&__t2831t__buf__unsafe_size,&__t2831t__buf__unsafe_offset,&__t2831t__buf__unsafe_align,&__t2831t__pos,__t2832t,&__t2833t__unsafe_ptr,&__t2833t__dat__pos,&__t2833t__dat__length,&__t2833t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2833t__unsafe_ptr;
  s__dat__pos=__t2833t__dat__pos;
  s__dat__length=__t2833t__dat__length;
  s__dat__first=__t2833t__dat__first;
  __t_errcode=system__t2238t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t604t(__t2828t__unsafe_ptr,&__t2829t____t705t__);
  if(__t2829t____t705t__){
  free__t674t(&__t2828t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2823t();return 0;}