#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t399t="\n";
const char* const __t391t="";
const char* const __t2768t="./tests/passing/";
const char* const __t2769t="./smoll --cleanup ";
const char* const __t2778t=".s";
static const char* __t_all_errcodes[55] = {"noerr",
"error",
"null pointer",
"assertion error",
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

static inline __attribute__((always_inline)) void console__t382t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2760t(char** __t2788t, uint64_t* __t2789t, uint16_t* __t2790t, uint16_t* __t2791t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2788t=unsafe_ptr;
  *__t2789t=unsafe_size;
  *__t2790t=unsafe_offset;
  *__t2791t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t608t(char* x, char* __t2792t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2792t=z;
}

static inline __attribute__((always_inline)) void free__t678t(char** __t2793t) {
  char* allocated=*__t2793t;
  if(allocated){
  free(allocated);
  }
  *__t2793t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2794t) {
  int value=0;
  *__t2794t=value;
}

static inline __attribute__((always_inline)) void not__t44t(int __t_anon0, int* __t2795t) {
  int __t45t__=0;
  false__t14t(&__t45t__);
  goto __t_return;
  __t_return:
  *__t2795t=__t45t__;
}

static inline __attribute__((always_inline)) void is_different__t110t(uint64_t x, uint64_t y, int* __t2796t) {
  int __t112t=0;
  int __t113t__=0;
  not__t44t(__t112t,&__t113t__);
  goto __t_return;
  __t_return:
  *__t2796t=__t113t__;
}

static inline __attribute__((always_inline)) void eq__t136t(uint64_t x, uint64_t y, char* __t2797t) {
  int __t137t__=0;
  char z=0;
  is_different__t110t(x,y,&__t137t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2797t=z;
}

static inline __attribute__((always_inline)) void neq__t160t(uint64_t x, uint64_t y, char* __t2798t) {
  int __t161t__=0;
  char z=0;
  is_different__t110t(x,y,&__t161t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2798t=z;
}

static inline __attribute__((always_inline)) void nat__t682t(uint16_t x, uint64_t* __t2799t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2799t=value;
}

static inline __attribute__((always_inline)) void mul__t215t(uint64_t x, uint64_t y, uint64_t* __t2800t) {
  int __t216t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t216t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2800t=z;
}

static inline __attribute__((always_inline)) void zero__t679t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t35t(char value, char* __t2801t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2801t=z;
}

static inline __attribute__((always_inline)) int alloc__t671t(uint64_t bytes, char** __t2802t) {
  char* allocated=0;
  char __t672t__=0;
  char __t673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t608t(allocated,&__t672t__);
  not__t35t(__t672t__,&__t673t__);
  if(__t673t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2802t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t707t(char** __t2803t, uint64_t* __t2804t, uint16_t* __t2805t, uint16_t* __t2806t, uint64_t size, char** __t2807t, uint64_t* __t2808t, uint16_t* __t2809t, uint16_t* __t2810t) {
  char* buffer__unsafe_ptr=*__t2803t;
  uint64_t buffer__unsafe_size=*__t2804t;
  uint16_t buffer__unsafe_offset=*__t2805t;
  uint16_t buffer__unsafe_align=*__t2806t;
  int __t708t=0;
  char __t709t__=0;
  char __t711t__=0;
  uint64_t __t712t=0;
  char __t713t__=0;
  uint64_t __t714t=0;
  uint64_t __t715t__=0;
  uint64_t __t716t__=0;
  uint64_t __t718t=0;
  char __t719t__=0;
  uint64_t __t720t__=0;
  uint64_t __t721t__=0;
  uint64_t bytes=0;
  uint64_t __t722t=0;
  char __t723t__=0;
  char* __t724t__=0;
  int __t725t=0;
  uint64_t __t726t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t136t(buffer__unsafe_size,size,&__t711t__);
  if(__t711t__){
  __t712t=0;
  neq__t160t(size,__t712t,&__t713t__);
  if(__t713t__){
  __t714t=0;
  nat__t682t(buffer__unsafe_align,&__t715t__);
  mul__t215t(__t715t__,size,&__t716t__);
  zero__t679t(buffer__unsafe_ptr,__t714t,__t716t__);
  }
  goto __t_return;
  }
  __t718t=0;
  neq__t160t(buffer__unsafe_size,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t682t(buffer__unsafe_align,&__t720t__);
  mul__t215t(__t720t__,size,&__t721t__);
  bytes=__t721t__;
  __t722t=0;
  eq__t136t(bytes,__t722t,&__t723t__);
  if(__t723t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t671t(bytes,&__t724t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t726t=0;
  zero__t679t(__t724t__,__t726t,bytes);
  buffer__unsafe_ptr=__t724t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t608t(buffer__unsafe_ptr,&__t709t__);
  if(__t709t__){
  free__t678t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2803t=buffer__unsafe_ptr;
  *__t2804t=buffer__unsafe_size;
  *__t2805t=buffer__unsafe_offset;
  *__t2806t=buffer__unsafe_align;
  *__t2807t=buffer__unsafe_ptr;
  *__t2808t=buffer__unsafe_size;
  *__t2809t=buffer__unsafe_offset;
  *__t2810t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2811t, uint64_t* __t2812t, uint16_t* __t2813t, uint16_t* __t2814t, uint64_t _pos, char** __t2815t, uint64_t* __t2816t, uint16_t* __t2817t, uint16_t* __t2818t, uint64_t* __t2819t) {
  char* buf__unsafe_ptr=*__t2811t;
  uint64_t buf__unsafe_size=*__t2812t;
  uint16_t buf__unsafe_offset=*__t2813t;
  uint16_t buf__unsafe_align=*__t2814t;
  uint64_t __t840t=0;
  uint64_t pos=0;
  __t840t=_pos;
  pos=__t840t;
  goto __t_return;
  __t_return:
  *__t2811t=buf__unsafe_ptr;
  *__t2812t=buf__unsafe_size;
  *__t2813t=buf__unsafe_offset;
  *__t2814t=buf__unsafe_align;
  *__t2815t=buf__unsafe_ptr;
  *__t2816t=buf__unsafe_size;
  *__t2817t=buf__unsafe_offset;
  *__t2818t=buf__unsafe_align;
  *__t2819t=pos;
}

static inline __attribute__((always_inline)) void arena__t842t(char** __t2820t, uint64_t* __t2821t, uint16_t* __t2822t, uint16_t* __t2823t, char** __t2824t, uint64_t* __t2825t, uint16_t* __t2826t, uint16_t* __t2827t, uint64_t* __t2828t) {
  char* buf__unsafe_ptr=*__t2820t;
  uint64_t buf__unsafe_size=*__t2821t;
  uint16_t buf__unsafe_offset=*__t2822t;
  uint16_t buf__unsafe_align=*__t2823t;
  uint64_t __t843t=0;
  char* __t844t__buf__unsafe_ptr=0;
  uint64_t __t844t__buf__unsafe_size=0;
  uint16_t __t844t__buf__unsafe_offset=0;
  uint16_t __t844t__buf__unsafe_align=0;
  uint64_t __t844t__pos=0;
  __t843t=0;
  arena__t839t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t843t,&__t844t__buf__unsafe_ptr,&__t844t__buf__unsafe_size,&__t844t__buf__unsafe_offset,&__t844t__buf__unsafe_align,&__t844t__pos);
  goto __t_return;
  __t_return:
  *__t2820t=buf__unsafe_ptr;
  *__t2821t=buf__unsafe_size;
  *__t2822t=buf__unsafe_offset;
  *__t2823t=buf__unsafe_align;
  *__t2824t=__t844t__buf__unsafe_ptr;
  *__t2825t=__t844t__buf__unsafe_size;
  *__t2826t=__t844t__buf__unsafe_offset;
  *__t2827t=__t844t__buf__unsafe_align;
  *__t2828t=__t844t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t955t(char** __t2829t, uint64_t* __t2830t, uint16_t* __t2831t, uint16_t* __t2832t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2829t=unsafe_ptr;
  *__t2830t=unsafe_size;
  *__t2831t=unsafe_offset;
  *__t2832t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2833t) {
  *__t2833t=to;
}

static inline __attribute__((always_inline)) void add__t191t(uint64_t x, uint64_t y, uint64_t* __t2834t) {
  int __t192t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t192t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2834t=z;
}

static inline __attribute__((always_inline)) void ge__t340t(uint64_t x, uint64_t y, char* __t2835t) {
  int __t341t__=0;
  char z=0;
  is_different__t110t(x,y,&__t341t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2835t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2836t) {
  *__t2836t=to;
}

static inline __attribute__((always_inline)) void add__t680t(char* allocated, uint64_t offset, char** __t2837t) {
  char* element=0;
  char* __t681t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t681t__);
  goto __t_return;
  __t_return:
  *__t2837t=__t681t__;
}

static inline __attribute__((always_inline)) int get__t827t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2838t) {
  char __t828t__=0;
  uint64_t __t829t__=0;
  uint64_t __t830t__=0;
  uint64_t __t831t__=0;
  uint64_t __t832t__=0;
  char* __t833t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t340t(i,buffer__unsafe_size,&__t828t__);
  if(__t828t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t682t(buffer__unsafe_align,&__t829t__);
  mul__t215t(i,__t829t__,&__t830t__);
  nat__t682t(buffer__unsafe_offset,&__t831t__);
  add__t191t(__t830t__,__t831t__,&__t832t__);
  add__t680t(buffer__unsafe_ptr,__t832t__,&__t833t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2838t=__t833t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t977t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2839t, uint64_t* __t2840t, uint64_t* __t2841t, char* __t2842t) {
  goto __t_return;
  __t_return:
  *__t2839t=unsafe_ptr;
  *__t2840t=dat__pos;
  *__t2841t=dat__length;
  *__t2842t=dat__first;
}

static inline __attribute__((always_inline)) int str__t981t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2843t, uint64_t* __t2844t, uint64_t* __t2845t, char* __t2846t) {
  char* unsafe_ptr=0;
  uint64_t __t982t__=0;
  uint64_t __t983t=0;
  char __t984t__=0;
  uint64_t __t985t__=0;
  uint64_t __t986t=0;
  char __t987t__=0;
  char* __t988t__unsafe_ptr=0;
  uint64_t __t988t__dat__pos=0;
  uint64_t __t988t__dat__length=0;
  char __t988t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t682t(buf__unsafe_align,&__t982t__);
  __t983t=1;
  neq__t160t(__t982t__,__t983t,&__t984t__);
  if(__t984t__){
  __t_errcode=19;
  goto __t_failure;
  }
  nat__t682t(buf__unsafe_offset,&__t985t__);
  __t986t=0;
  neq__t160t(__t985t__,__t986t,&__t987t__);
  if(__t987t__){
  __t_errcode=20;
  goto __t_failure;
  }
  str__t977t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t988t__unsafe_ptr,&__t988t__dat__pos,&__t988t__dat__length,&__t988t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2843t=__t988t__unsafe_ptr;
  *__t2844t=__t988t__dat__pos;
  *__t2845t=__t988t__dat__length;
  *__t2846t=__t988t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1015t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2847t, uint64_t* __t2848t, uint64_t* __t2849t, char* __t2850t) {
  uint64_t __t1016t=0;
  char __t1017t__=0;
  char* __t1019t__=0;
  char __t1020t__value=0;
  char first=0;
  char* __t1021t__unsafe_ptr=0;
  uint64_t __t1021t__dat__pos=0;
  uint64_t __t1021t__dat__length=0;
  char __t1021t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1016t=0;
  neq__t160t(length,__t1016t,&__t1017t__);
  if(__t1017t__){
  __t_errcode=get__t827t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1019t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1019t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1020t__value,__t1019t__,1);
  first=__t1020t__value;
  }
  __t_errcode=str__t981t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1021t__unsafe_ptr,&__t1021t__dat__pos,&__t1021t__dat__length,&__t1021t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2847t=__t1021t__unsafe_ptr;
  *__t2848t=__t1021t__dat__pos;
  *__t2849t=__t1021t__dat__length;
  *__t2850t=__t1021t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1037t(const char* c, char** __t2851t, uint64_t* __t2852t, uint64_t* __t2853t, char* __t2854t) {
  char* __t1038t__unsafe_ptr=0;
  uint64_t __t1038t__unsafe_size=0;
  uint16_t __t1038t__unsafe_offset=0;
  uint16_t __t1038t__unsafe_align=0;
  char* __t1039t__unsafe_ptr=0;
  uint64_t __t1039t__unsafe_size=0;
  uint16_t __t1039t__unsafe_offset=0;
  uint16_t __t1039t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1040t__=0;
  uint64_t length=0;
  uint64_t __t1041t=0;
  uint64_t __t1042t__=0;
  uint64_t __t1043t=0;
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__dat__pos=0;
  uint64_t __t1045t__dat__length=0;
  char __t1045t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t955t(&__t1038t__unsafe_ptr,&__t1038t__unsafe_size,&__t1038t__unsafe_offset,&__t1038t__unsafe_align);
  __t1039t__unsafe_ptr=__t1038t__unsafe_ptr;
  __t1039t__unsafe_size=__t1038t__unsafe_size;
  __t1039t__unsafe_offset=__t1038t__unsafe_offset;
  __t1039t__unsafe_align=__t1038t__unsafe_align;
  buf__unsafe_ptr=__t1039t__unsafe_ptr;
  buf__unsafe_size=__t1039t__unsafe_size;
  buf__unsafe_offset=__t1039t__unsafe_offset;
  buf__unsafe_align=__t1039t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1040t__);
  buf__unsafe_ptr=__t1040t__;
  if(c){
  length=strlen(c);
  }
  __t1041t=1;
  add__t191t(length,__t1041t,&__t1042t__);
  buf__unsafe_size=__t1042t__;
  __t1043t=0;
  __t_errcode=str__t1015t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1043t,length,&__t1045t__unsafe_ptr,&__t1045t__dat__pos,&__t1045t__dat__length,&__t1045t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2851t=__t1045t__unsafe_ptr;
  *__t2852t=__t1045t__dat__pos;
  *__t2853t=__t1045t__dat__length;
  *__t2854t=__t1045t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1046t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2855t) {
  goto __t_return;
  __t_return:
  *__t2855t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t834t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2856t) {
  goto __t_return;
  __t_return:
  *__t2856t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t292t(uint64_t x, uint64_t y, char* __t2857t) {
  int __t293t__=0;
  char z=0;
  is_different__t110t(x,y,&__t293t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2857t=z;
}

static inline __attribute__((always_inline)) void allocated__t845t(char** __t2858t, uint64_t* __t2859t, uint16_t* __t2860t, uint16_t* __t2861t, uint64_t pos, char** __t2862t, uint64_t* __t2863t, uint16_t* __t2864t, uint16_t* __t2865t, uint64_t* __t2866t) {
  char* buf__unsafe_ptr=*__t2858t;
  uint64_t buf__unsafe_size=*__t2859t;
  uint16_t buf__unsafe_offset=*__t2860t;
  uint16_t buf__unsafe_align=*__t2861t;
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

static inline __attribute__((always_inline)) int alloc__t877t(char** __t2867t, uint64_t* __t2868t, uint16_t* __t2869t, uint16_t* __t2870t, uint64_t* __t2871t, uint64_t length, char** __t2872t, uint64_t* __t2873t, uint16_t* __t2874t, uint16_t* __t2875t, uint64_t* __t2876t) {
  char* allocator__buf__unsafe_ptr=*__t2867t;
  uint64_t allocator__buf__unsafe_size=*__t2868t;
  uint16_t allocator__buf__unsafe_offset=*__t2869t;
  uint16_t allocator__buf__unsafe_align=*__t2870t;
  uint64_t allocator__pos=*__t2871t;
  int __t878t=0;
  uint64_t __t879t__=0;
  uint64_t next_pos=0;
  uint64_t __t880t__=0;
  char __t881t__=0;
  uint64_t __t882t=0;
  uint64_t __t883t__=0;
  uint64_t pos=0;
  char* __t884t__buf__unsafe_ptr=0;
  uint64_t __t884t__buf__unsafe_size=0;
  uint16_t __t884t__buf__unsafe_offset=0;
  uint16_t __t884t__buf__unsafe_align=0;
  uint64_t __t884t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t191t(allocator__pos,length,&__t879t__);
  next_pos=__t879t__;
  len__t834t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t880t__);
  gt__t292t(next_pos,__t880t__,&__t881t__);
  if(__t881t__){
  __t_errcode=17;
  goto __t_failure;
  }
  __t882t=0;
  add__t191t(allocator__pos,__t882t,&__t883t__);
  pos=__t883t__;
  allocator__pos=next_pos;
  allocated__t845t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t884t__buf__unsafe_ptr,&__t884t__buf__unsafe_size,&__t884t__buf__unsafe_offset,&__t884t__buf__unsafe_align,&__t884t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2867t=allocator__buf__unsafe_ptr;
  *__t2868t=allocator__buf__unsafe_size;
  *__t2869t=allocator__buf__unsafe_offset;
  *__t2870t=allocator__buf__unsafe_align;
  *__t2871t=allocator__pos;
  *__t2872t=__t884t__buf__unsafe_ptr;
  *__t2873t=__t884t__buf__unsafe_size;
  *__t2874t=__t884t__buf__unsafe_offset;
  *__t2875t=__t884t__buf__unsafe_align;
  *__t2876t=__t884t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1068t(char** __t2877t, uint64_t* __t2878t, uint16_t* __t2879t, uint16_t* __t2880t, uint64_t* __t2881t, const char* _other, char** __t2882t, uint64_t* __t2883t, uint64_t* __t2884t, char* __t2885t) {
  char* CHARS__buf__unsafe_ptr=*__t2877t;
  uint64_t CHARS__buf__unsafe_size=*__t2878t;
  uint16_t CHARS__buf__unsafe_offset=*__t2879t;
  uint16_t CHARS__buf__unsafe_align=*__t2880t;
  uint64_t CHARS__pos=*__t2881t;
  char* __t1069t__unsafe_ptr=0;
  uint64_t __t1069t__dat__pos=0;
  uint64_t __t1069t__dat__length=0;
  char __t1069t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1070t__=0;
  char* __t1071t__buf__unsafe_ptr=0;
  uint64_t __t1071t__buf__unsafe_size=0;
  uint16_t __t1071t__buf__unsafe_offset=0;
  uint16_t __t1071t__buf__unsafe_align=0;
  uint64_t __t1071t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1072t__unsafe_ptr=0;
  uint64_t __t1072t__dat__pos=0;
  uint64_t __t1072t__dat__length=0;
  char __t1072t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1037t(_other,&__t1069t__unsafe_ptr,&__t1069t__dat__pos,&__t1069t__dat__length,&__t1069t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1069t__unsafe_ptr;
  other__dat__pos=__t1069t__dat__pos;
  other__dat__length=__t1069t__dat__length;
  other__dat__first=__t1069t__dat__first;
  len__t1046t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1070t__);
  __t_errcode=alloc__t877t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1070t__,&__t1071t__buf__unsafe_ptr,&__t1071t__buf__unsafe_size,&__t1071t__buf__unsafe_offset,&__t1071t__buf__unsafe_align,&__t1071t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1071t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1071t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1071t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1071t__buf__unsafe_align;
  surface__pos=__t1071t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t981t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1072t__unsafe_ptr,&__t1072t__dat__pos,&__t1072t__dat__length,&__t1072t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2877t=CHARS__buf__unsafe_ptr;
  *__t2878t=CHARS__buf__unsafe_size;
  *__t2879t=CHARS__buf__unsafe_offset;
  *__t2880t=CHARS__buf__unsafe_align;
  *__t2881t=CHARS__pos;
  *__t2882t=__t1072t__unsafe_ptr;
  *__t2883t=__t1072t__dat__pos;
  *__t2884t=__t1072t__dat__length;
  *__t2885t=__t1072t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2632t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2633t(const char* path, char** __t2886t) {
  char* unsafe_ptr=0;
  char __t2635t__=0;
  char __t2636t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t608t(unsafe_ptr,&__t2635t__);
  not__t35t(__t2635t__,&__t2636t__);
  if(__t2636t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2632t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2886t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2644t(char** __t2887t, const char** __t2888t) {
  char* f__unsafe_ptr=*__t2887t;
  char __t2645t__=0;
  char __t2646t__=0;
  char* de=0;
  char __t2647t__=0;
  char __t2648t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t608t(f__unsafe_ptr,&__t2645t__);
  not__t35t(__t2645t__,&__t2646t__);
  if(__t2646t__){
  __t_errcode=53;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t608t(de,&__t2647t__);
  not__t35t(__t2647t__,&__t2648t__);
  if(__t2648t__){
  __t_errcode=54;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2887t=f__unsafe_ptr;
  *__t2888t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2649t(char** __t2889t, char** __t2890t, uint64_t* __t2891t, uint64_t* __t2892t, char* __t2893t) {
  char* f__unsafe_ptr=*__t2889t;
  const char* __t2650t__=0;
  char* __t2651t__unsafe_ptr=0;
  uint64_t __t2651t__dat__pos=0;
  uint64_t __t2651t__dat__length=0;
  char __t2651t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2644t(&f__unsafe_ptr,&__t2650t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1037t(__t2650t__,&__t2651t__unsafe_ptr,&__t2651t__dat__pos,&__t2651t__dat__length,&__t2651t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2889t=f__unsafe_ptr;
  *__t2890t=__t2651t__unsafe_ptr;
  *__t2891t=__t2651t__dat__pos;
  *__t2892t=__t2651t__dat__length;
  *__t2893t=__t2651t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2715t(char** __t2894t, uint64_t __t_anon1, char** __t2895t, uint64_t* __t2896t, uint64_t* __t2897t, char* __t2898t) {
  char* data__unsafe_ptr=*__t2894t;
  char* __t2716t__unsafe_ptr=0;
  uint64_t __t2716t__dat__pos=0;
  uint64_t __t2716t__dat__length=0;
  char __t2716t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2649t(&data__unsafe_ptr,&__t2716t__unsafe_ptr,&__t2716t__dat__pos,&__t2716t__dat__length,&__t2716t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2894t=data__unsafe_ptr;
  *__t2895t=__t2716t__unsafe_ptr;
  *__t2896t=__t2716t__dat__pos;
  *__t2897t=__t2716t__dat__length;
  *__t2898t=__t2716t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1014t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2899t, uint64_t* __t2900t, uint64_t* __t2901t, char* __t2902t) {
  goto __t_return;
  __t_return:
  *__t2899t=other__unsafe_ptr;
  *__t2900t=other__dat__pos;
  *__t2901t=other__dat__length;
  *__t2902t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t268t(uint64_t x, uint64_t y, char* __t2903t) {
  int __t269t__=0;
  char z=0;
  is_different__t110t(x,y,&__t269t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2903t=z;
}

static inline __attribute__((always_inline)) int sub__t368t(uint64_t x, uint64_t y, uint64_t* __t2904t) {
  int __t369t__=0;
  int __t370t=0;
  int __t371t=0;
  char __t372t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t110t(x,y,&__t369t__);
  lt__t268t(x,y,&__t372t__);
  if(__t372t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2904t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1173t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2905t) {
  uint64_t __t1174t__=0;
  char* __t1175t__=0;
  add__t191t(s__dat__pos,i,&__t1174t__);
  add__t680t(s__unsafe_ptr,__t1174t__,&__t1175t__);
  goto __t_return;
  __t_return:
  *__t2905t=__t1175t__;
}

int slice__t1196t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2906t, uint64_t* __t2907t, uint64_t* __t2908t, char* __t2909t) {
  char* __t1197t__unsafe_ptr=0;
  uint64_t __t1197t__dat__pos=0;
  uint64_t __t1197t__dat__length=0;
  char __t1197t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1198t__=0;
  char* __t1199t__unsafe_ptr=0;
  uint64_t __t1199t__dat__pos=0;
  uint64_t __t1199t__dat__length=0;
  char __t1199t__dat__first=0;
  char __t1200t__=0;
  char __t1201t__=0;
  char __t1202t=0;
  char __t1203t__=0;
  uint64_t __t1204t__=0;
  uint64_t new_length=0;
  uint64_t __t1205t=0;
  char __t1206t__=0;
  char new_first=0;
  char* __t1208t__=0;
  char __t1209t__value=0;
  uint64_t __t1210t__=0;
  char* __t1211t__unsafe_ptr=0;
  uint64_t __t1211t__dat__pos=0;
  uint64_t __t1211t__dat__length=0;
  char __t1211t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1014t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1197t__unsafe_ptr,&__t1197t__dat__pos,&__t1197t__dat__length,&__t1197t__dat__first);
  s__unsafe_ptr=__t1197t__unsafe_ptr;
  s__dat__pos=__t1197t__dat__pos;
  s__dat__length=__t1197t__dat__length;
  s__dat__first=__t1197t__dat__first;
  eq__t136t(from,to,&__t1198t__);
  if(__t1198t__){
  __t_errcode=str__t1037t(__t391t,&__t1199t__unsafe_ptr,&__t1199t__dat__pos,&__t1199t__dat__length,&__t1199t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t292t(from,to,&__t1200t__);
  if(!__t1200t__){
  gt__t292t(to,s__dat__length,&__t1201t__);
  __t1202t=__t1201t__;
  }
  else{
  __t1202t=0;
  not__t35t(__t1202t,&__t1203t__);
  __t1202t=__t1203t__;
  }
  if(__t1202t){
  __t_errcode=23;
  goto __t_failure;
  }
  __t_errcode=sub__t368t(to,from,&__t1204t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1204t__;
  __t1205t=0;
  neq__t160t(from,__t1205t,&__t1206t__);
  if(__t1206t__){
  get__t1173t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1208t__);
  if(!__t1208t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1209t__value,__t1208t__,1);
  new_first=__t1209t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t191t(s__dat__pos,from,&__t1210t__);
  str__t977t(s__unsafe_ptr,__t1210t__,new_length,new_first,&__t1211t__unsafe_ptr,&__t1211t__dat__pos,&__t1211t__dat__length,&__t1211t__dat__first);
  __t1199t__unsafe_ptr=__t1211t__unsafe_ptr;
  __t1199t__dat__pos=__t1211t__dat__pos;
  __t1199t__dat__length=__t1211t__dat__length;
  __t1199t__dat__first=__t1211t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2906t=__t1199t__unsafe_ptr;
  *__t2907t=__t1199t__dat__pos;
  *__t2908t=__t1199t__dat__length;
  *__t2909t=__t1199t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1050t(char x, char y, char* __t2910t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2910t=z;
}

static inline __attribute__((always_inline)) void eq__t1115t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2911t) {
  uint64_t __t1116t__=0;
  uint64_t n=0;
  uint64_t __t1117t__=0;
  char __t1118t__=0;
  char __t1119t=0;
  char __t1120t__=0;
  char __t1121t=0;
  char z=0;
  len__t1046t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1116t__);
  n=__t1116t__;
  len__t1046t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1117t__);
  neq__t160t(n,__t1117t__,&__t1118t__);
  if(__t1118t__){
  __t1119t=0;
  goto __t_return;
  }
  neq__t1050t(x__dat__first,y__dat__first,&__t1120t__);
  if(__t1120t__){
  __t1121t=0;
  __t1119t=__t1121t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1119t=z;
  goto __t_return;
  __t_return:
  *__t2911t=__t1119t;
}

static inline __attribute__((always_inline)) int ends_with__t1276t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2912t) {
  char* __t1277t__unsafe_ptr=0;
  uint64_t __t1277t__dat__pos=0;
  uint64_t __t1277t__dat__length=0;
  char __t1277t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1278t__unsafe_ptr=0;
  uint64_t __t1278t__dat__pos=0;
  uint64_t __t1278t__dat__length=0;
  char __t1278t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1279t__=0;
  char __t1280t=0;
  uint64_t __t1281t__=0;
  uint64_t n=0;
  uint64_t __t1282t__=0;
  uint64_t __t1283t__=0;
  char* __t1284t__unsafe_ptr=0;
  uint64_t __t1284t__dat__pos=0;
  uint64_t __t1284t__dat__length=0;
  char __t1284t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1285t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1014t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1277t__unsafe_ptr,&__t1277t__dat__pos,&__t1277t__dat__length,&__t1277t__dat__first);
  stack__unsafe_ptr=__t1277t__unsafe_ptr;
  stack__dat__pos=__t1277t__dat__pos;
  stack__dat__length=__t1277t__dat__length;
  stack__dat__first=__t1277t__dat__first;
  __t_errcode=str__t1037t(_needle,&__t1278t__unsafe_ptr,&__t1278t__dat__pos,&__t1278t__dat__length,&__t1278t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1278t__unsafe_ptr;
  needle__dat__pos=__t1278t__dat__pos;
  needle__dat__length=__t1278t__dat__length;
  needle__dat__first=__t1278t__dat__first;
  lt__t268t(stack__dat__length,needle__dat__length,&__t1279t__);
  if(__t1279t__){
  __t1280t=0;
  goto __t_return;
  }
  len__t1046t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1281t__);
  n=__t1281t__;
  len__t1046t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1282t__);
  __t_errcode=sub__t368t(n,__t1282t__,&__t1283t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1196t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1283t__,n,&__t1284t__unsafe_ptr,&__t1284t__dat__pos,&__t1284t__dat__length,&__t1284t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1284t__unsafe_ptr;
  ret__dat__pos=__t1284t__dat__pos;
  ret__dat__length=__t1284t__dat__length;
  ret__dat__first=__t1284t__dat__first;
  eq__t1115t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1285t__);
  __t1280t=__t1285t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2912t=__t1280t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1147t(char** __t2913t, uint64_t* __t2914t, uint16_t* __t2915t, uint16_t* __t2916t, uint64_t* __t2917t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2918t, uint64_t* __t2919t, uint64_t* __t2920t, char* __t2921t) {
  char* CHARS__buf__unsafe_ptr=*__t2913t;
  uint64_t CHARS__buf__unsafe_size=*__t2914t;
  uint16_t CHARS__buf__unsafe_offset=*__t2915t;
  uint16_t CHARS__buf__unsafe_align=*__t2916t;
  uint64_t CHARS__pos=*__t2917t;
  char* __t1148t__unsafe_ptr=0;
  uint64_t __t1148t__dat__pos=0;
  uint64_t __t1148t__dat__length=0;
  char __t1148t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1149t__=0;
  uint64_t __t1150t__=0;
  uint64_t null_pos=0;
  uint64_t __t1151t=0;
  uint64_t __t1152t__=0;
  uint64_t next_pos=0;
  uint64_t __t1153t__=0;
  char __t1154t__=0;
  char* endpos=0;
  uint64_t __t1155t=0;
  uint64_t __t1156t__=0;
  uint64_t prev_pos=0;
  char* __t1157t__unsafe_ptr=0;
  uint64_t __t1157t__dat__pos=0;
  uint64_t __t1157t__dat__length=0;
  char __t1157t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1014t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1148t__unsafe_ptr,&__t1148t__dat__pos,&__t1148t__dat__length,&__t1148t__dat__first);
  other__unsafe_ptr=__t1148t__unsafe_ptr;
  other__dat__pos=__t1148t__dat__pos;
  other__dat__length=__t1148t__dat__length;
  other__dat__first=__t1148t__dat__first;
  len__t1046t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1149t__);
  add__t191t(CHARS__pos,__t1149t__,&__t1150t__);
  null_pos=__t1150t__;
  __t1151t=1;
  add__t191t(null_pos,__t1151t,&__t1152t__);
  next_pos=__t1152t__;
  len__t834t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1153t__);
  gt__t292t(next_pos,__t1153t__,&__t1154t__);
  if(__t1154t__){
  __t_errcode=22;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1155t=0;
  add__t191t(CHARS__pos,__t1155t,&__t1156t__);
  prev_pos=__t1156t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t981t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1157t__unsafe_ptr,&__t1157t__dat__pos,&__t1157t__dat__length,&__t1157t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2913t=CHARS__buf__unsafe_ptr;
  *__t2914t=CHARS__buf__unsafe_size;
  *__t2915t=CHARS__buf__unsafe_offset;
  *__t2916t=CHARS__buf__unsafe_align;
  *__t2917t=CHARS__pos;
  *__t2918t=__t1157t__unsafe_ptr;
  *__t2919t=__t1157t__dat__pos;
  *__t2920t=__t1157t__dat__length;
  *__t2921t=__t1157t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1112t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2922t) {
  uint64_t __t1113t__=0;
  add__t191t(s__dat__pos,s__dat__length,&__t1113t__);
  goto __t_return;
  __t_return:
  *__t2922t=__t1113t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t2923t) {
  int value=0;
  *__t2923t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t2924t) {
  int __t47t__=0;
  true__t15t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t2924t=__t47t__;
}

static inline __attribute__((always_inline)) int str__t989t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2925t, uint64_t* __t2926t, uint64_t* __t2927t, char* __t2928t) {
  int __t990t=0;
  int __t991t=0;
  int __t992t__=0;
  uint64_t __t993t__=0;
  char __t994t__=0;
  uint64_t __t995t=0;
  uint64_t __t996t=0;
  char* __t998t__=0;
  char __t999t__value=0;
  char* __t1000t__unsafe_ptr=0;
  uint64_t __t1000t__dat__pos=0;
  uint64_t __t1000t__dat__length=0;
  char __t1000t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t46t(__t991t,&__t992t__);
  len__t834t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t993t__);
  gt__t292t(length,__t993t__,&__t994t__);
  if(__t994t__){
  __t_errcode=21;
  goto __t_failure;
  }
  __t995t=0;
  __t996t=0;
  __t_errcode=get__t827t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t996t,&__t998t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t998t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t999t__value,__t998t__,1);
  __t_errcode=str__t981t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t995t,length,__t999t__value,&__t1000t__unsafe_ptr,&__t1000t__dat__pos,&__t1000t__dat__length,&__t1000t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2925t=__t1000t__unsafe_ptr;
  *__t2926t=__t1000t__dat__pos;
  *__t2927t=__t1000t__dat__length;
  *__t2928t=__t1000t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1171t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1172t=0;
  const char* endl=0;
  endl=__t399t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t835t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1093t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2929t, uint64_t* __t2930t, uint64_t* __t2931t, char* __t2932t) {
  char* __t1094t__unsafe_ptr=0;
  uint64_t __t1094t__unsafe_size=0;
  uint16_t __t1094t__unsafe_offset=0;
  uint16_t __t1094t__unsafe_align=0;
  uint64_t __t1095t=0;
  uint64_t __t1096t__=0;
  uint64_t __t1097t__=0;
  char* __t1098t__unsafe_ptr=0;
  uint64_t __t1098t__unsafe_size=0;
  uint16_t __t1098t__unsafe_offset=0;
  uint16_t __t1098t__unsafe_align=0;
  char __t1099t____t709t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1100t=0;
  char* __t1101t__unsafe_ptr=0;
  uint64_t __t1101t__dat__pos=0;
  uint64_t __t1101t__dat__length=0;
  char __t1101t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t955t(&__t1094t__unsafe_ptr,&__t1094t__unsafe_size,&__t1094t__unsafe_offset,&__t1094t__unsafe_align);
  __t1095t=1;
  len__t1046t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1096t__);
  add__t191t(__t1095t,__t1096t__,&__t1097t__);
  __t_errcode=alloc__t707t(&__t1094t__unsafe_ptr,&__t1094t__unsafe_size,&__t1094t__unsafe_offset,&__t1094t__unsafe_align,__t1097t__,&__t1098t__unsafe_ptr,&__t1098t__unsafe_size,&__t1098t__unsafe_offset,&__t1098t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1098t__unsafe_ptr;
  buf__unsafe_size=__t1098t__unsafe_size;
  buf__unsafe_offset=__t1098t__unsafe_offset;
  buf__unsafe_align=__t1098t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1100t=0;
  __t_errcode=str__t981t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1100t,other__dat__length,other__dat__first,&__t1101t__unsafe_ptr,&__t1101t__dat__pos,&__t1101t__dat__length,&__t1101t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t608t(__t1101t__unsafe_ptr,&__t1099t____t709t__);
  if(__t1099t____t709t__){
  free__t678t(&__t1101t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2929t=__t1101t__unsafe_ptr;
  *__t2930t=__t1101t__dat__pos;
  *__t2931t=__t1101t__dat__length;
  *__t2932t=__t1101t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1102t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2933t, char** __t2934t, uint64_t* __t2935t, uint64_t* __t2936t, char* __t2937t) {
  char* __t1104t__unsafe_ptr=0;
  uint64_t __t1104t__dat__pos=0;
  uint64_t __t1104t__dat__length=0;
  char __t1104t__dat__first=0;
  char __t1105t____t1099t____t709t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1106t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t835t();
  __t_errcode=copy_null_terminated__t1093t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1104t__unsafe_ptr,&__t1104t__dat__pos,&__t1104t__dat__length,&__t1104t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1104t__unsafe_ptr;
  str__dat__pos=__t1104t__dat__pos;
  str__dat__length=__t1104t__dat__length;
  str__dat__first=__t1104t__dat__first;
  add__t680t(str__unsafe_ptr,str__dat__pos,&__t1106t__);
  _ret=__t1106t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t608t(str__unsafe_ptr,&__t1105t____t1099t____t709t__);
  if(__t1105t____t1099t____t709t__){
  free__t678t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2933t=cstr;
  *__t2934t=str__unsafe_ptr;
  *__t2935t=str__dat__pos;
  *__t2936t=str__dat__length;
  *__t2937t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1110t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2938t) {
  goto __t_return;
  __t_return:
  *__t2938t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2164t(const char* cmd, char** __t2939t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2939t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2163t(char* unsafe_ptr, int64_t* __t2940t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2940t=status;
}

static inline __attribute__((always_inline)) void int__t588t(uint64_t x, int64_t* __t2941t) {
  int __t589t=0;
  int __t590t=0;
  int __t591t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2941t=z;
}

static inline __attribute__((always_inline)) void is_different__t94t(int64_t x, int64_t y, int* __t2942t) {
  int __t96t=0;
  int __t97t__=0;
  not__t44t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2942t=__t97t__;
}

static inline __attribute__((always_inline)) void neq__t149t(int64_t x, int64_t y, char* __t2943t) {
  int __t150t__=0;
  char z=0;
  is_different__t94t(x,y,&__t150t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2943t=z;
}

static inline __attribute__((always_inline)) int open__t2165t(const char* cmd, char** __t2944t) {
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
  exists__t608t(unsafe_ptr,&__t2167t__);
  not__t35t(__t2167t__,&__t2168t__);
  if(__t2168t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t608t(unsafe_ptr,&__t2169t__);
  if(__t2169t__){
  pclose__t2163t(unsafe_ptr,&__t2170t__);
  status=__t2170t__;
  unsafe_ptr=0;
  __t2171t=0;
  int__t588t(__t2171t,&__t2172t__);
  neq__t149t(status,__t2172t__,&__t2173t__);
  if(__t2173t__){
  __t_complain=38;
  __t2174t=__t2174t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2944t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2176t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2945t) {
  const char* __t2177t__cstr=0;
  char* __t2177t__str__unsafe_ptr=0;
  uint64_t __t2177t__str__dat__pos=0;
  uint64_t __t2177t__str__dat__length=0;
  char __t2177t__str__dat__first=0;
  char __t2178t____t1105t____t1099t____t709t__=0;
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
  __t_errcode=unsafe_temp__t1102t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2177t__cstr,&__t2177t__str__unsafe_ptr,&__t2177t__str__dat__pos,&__t2177t__str__dat__length,&__t2177t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1110t(__t2177t__cstr,__t2177t__str__unsafe_ptr,__t2177t__str__dat__pos,__t2177t__str__dat__length,__t2177t__str__dat__first,&__t2179t__);
  __t_errcode=open__t2165t(__t2179t__,&__t2180t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t608t(__t2180t__unsafe_ptr,&__t2181t____t2169t__);
  if(__t2181t____t2169t__){
  pclose__t2163t(__t2180t__unsafe_ptr,&__t2181t____t2170t__);
  __t2181t__status=__t2181t____t2170t__;
  __t2180t__unsafe_ptr=0;
  __t2181t____t2171t=0;
  int__t588t(__t2181t____t2171t,&__t2181t____t2172t__);
  neq__t149t(__t2181t__status,__t2181t____t2172t__,&__t2181t____t2173t__);
  if(__t2181t____t2173t__){
  __t_complain=38;
  __t2181t____t2174t=__t2181t____t2174t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2945t=__t2180t__unsafe_ptr;
  
  __t_skip_returns:exists__t608t(__t2177t__str__unsafe_ptr,&__t2178t____t1105t____t1099t____t709t__);
  if(__t2178t____t1105t____t1099t____t709t__){
  free__t678t(&__t2177t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2143t(int64_t value, const char** __t2946t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2946t=ret;
}

static inline __attribute__((always_inline)) void print__t397t(const char* value) {
  int __t398t=0;
  const char* endl=0;
  endl=__t399t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2750t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2751t__unsafe_ptr=0;
  char __t2752t____t2181t____t2169t__=0;
  int64_t __t2752t____t2181t____t2170t__=0;
  int64_t __t2752t____t2181t__status=0;
  uint64_t __t2752t____t2181t____t2171t=0;
  int64_t __t2752t____t2181t____t2172t__=0;
  char __t2752t____t2181t____t2173t__=0;
  char __t2752t____t2181t____t2174t=0;
  char* proc__unsafe_ptr=0;
  char __t2753t=0;
  int64_t __t2754t=0;
  int64_t error=0;
  const char* __t2755t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2176t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2751t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2751t__unsafe_ptr;
  exists__t608t(__t2751t__unsafe_ptr,&__t2752t____t2181t____t2169t__);
  if(__t2752t____t2181t____t2169t__){
  pclose__t2163t(__t2751t__unsafe_ptr,&__t2752t____t2181t____t2170t__);
  __t2752t____t2181t__status=__t2752t____t2181t____t2170t__;
  __t2751t__unsafe_ptr=0;
  __t2752t____t2181t____t2171t=0;
  int__t588t(__t2752t____t2181t____t2171t,&__t2752t____t2181t____t2172t__);
  neq__t149t(__t2752t____t2181t__status,__t2752t____t2181t____t2172t__,&__t2752t____t2181t____t2173t__);
  if(__t2752t____t2181t____t2173t__){
  __t_complain=38;
  __t2752t____t2181t____t2174t=__t2752t____t2181t____t2174t==0;
  }
  }
  __t2754t=__t_complain;
  __t2753t=(__t_complain==0);
  __t_complain=0;
  error=__t2754t;
  __t2753t=__t2753t==0;
  if(__t2753t){
  cstr__t2143t(error,&__t2755t__);
  print__t397t(__t2755t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2757t() {
  char* __t2762t__unsafe_ptr=0;
  uint64_t __t2762t__unsafe_size=0;
  uint16_t __t2762t__unsafe_offset=0;
  uint16_t __t2762t__unsafe_align=0;
  uint64_t __t2763t=0;
  char* __t2764t__unsafe_ptr=0;
  uint64_t __t2764t__unsafe_size=0;
  uint16_t __t2764t__unsafe_offset=0;
  uint16_t __t2764t__unsafe_align=0;
  char __t2765t____t709t__=0;
  char* __t2766t__buf__unsafe_ptr=0;
  uint64_t __t2766t__buf__unsafe_size=0;
  uint16_t __t2766t__buf__unsafe_offset=0;
  uint16_t __t2766t__buf__unsafe_align=0;
  uint64_t __t2766t__pos=0;
  char* __t2767t__buf__unsafe_ptr=0;
  uint64_t __t2767t__buf__unsafe_size=0;
  uint16_t __t2767t__buf__unsafe_offset=0;
  uint16_t __t2767t__buf__unsafe_align=0;
  uint64_t __t2767t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2770t__unsafe_ptr=0;
  uint64_t __t2770t__dat__pos=0;
  uint64_t __t2770t__dat__length=0;
  char __t2770t__dat__first=0;
  char* __t2771t__unsafe_ptr=0;
  uint64_t __t2771t__dat__pos=0;
  uint64_t __t2771t__dat__length=0;
  char __t2771t__dat__first=0;
  char* __t2772t__unsafe_ptr=0;
  char* __t2774t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2775t=0;
  char __t2776t=0;
  char* __t2777t__unsafe_ptr=0;
  uint64_t __t2777t__dat__pos=0;
  uint64_t __t2777t__dat__length=0;
  char __t2777t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2779t__=0;
  char __t2780t__=0;
  char* __t2781t__buf__unsafe_ptr=0;
  uint64_t __t2781t__buf__unsafe_size=0;
  uint16_t __t2781t__buf__unsafe_offset=0;
  uint16_t __t2781t__buf__unsafe_align=0;
  uint64_t __t2781t__pos=0;
  char* __t2782t__unsafe_ptr=0;
  uint64_t __t2782t__dat__pos=0;
  uint64_t __t2782t__dat__length=0;
  char __t2782t__dat__first=0;
  char* __t2783t__unsafe_ptr=0;
  uint64_t __t2783t__dat__pos=0;
  uint64_t __t2783t__dat__length=0;
  char __t2783t__dat__first=0;
  uint64_t __t2784t__=0;
  char* __t2785t__unsafe_ptr=0;
  uint64_t __t2785t__dat__pos=0;
  uint64_t __t2785t__dat__length=0;
  char __t2785t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t382t();
  char____t_buffer____buffer__t2760t(&__t2762t__unsafe_ptr,&__t2762t__unsafe_size,&__t2762t__unsafe_offset,&__t2762t__unsafe_align);
  __t2763t=256;
  __t_errcode=alloc__t707t(&__t2762t__unsafe_ptr,&__t2762t__unsafe_size,&__t2762t__unsafe_offset,&__t2762t__unsafe_align,__t2763t,&__t2764t__unsafe_ptr,&__t2764t__unsafe_size,&__t2764t__unsafe_offset,&__t2764t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t842t(&__t2764t__unsafe_ptr,&__t2764t__unsafe_size,&__t2764t__unsafe_offset,&__t2764t__unsafe_align,&__t2766t__buf__unsafe_ptr,&__t2766t__buf__unsafe_size,&__t2766t__buf__unsafe_offset,&__t2766t__buf__unsafe_align,&__t2766t__pos);
  __t2767t__buf__unsafe_ptr=__t2766t__buf__unsafe_ptr;
  __t2767t__buf__unsafe_size=__t2766t__buf__unsafe_size;
  __t2767t__buf__unsafe_offset=__t2766t__buf__unsafe_offset;
  __t2767t__buf__unsafe_align=__t2766t__buf__unsafe_align;
  __t2767t__pos=__t2766t__pos;
  CHARS__buf__unsafe_ptr=__t2767t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2767t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2767t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2767t__buf__unsafe_align;
  CHARS__pos=__t2767t__pos;
  path=__t2768t;
  __t_errcode=copy__t1068t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2769t,&__t2770t__unsafe_ptr,&__t2770t__dat__pos,&__t2770t__dat__length,&__t2770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1068t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2771t__unsafe_ptr,&__t2771t__dat__pos,&__t2771t__dat__length,&__t2771t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2633t(path,&__t2772t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2774t__unsafe_ptr=__t2772t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2774t__unsafe_ptr;
  __t2775t=0-1;
  while(1){
  __t2775t=__t2775t+1;
  __t_complain=get__t2715t(&test_dir__unsafe_ptr,__t2775t,&__t2777t__unsafe_ptr,&__t2777t__dat__pos,&__t2777t__dat__length,&__t2777t__dat__first);
  __t2776t=__t_complain;
  entry__unsafe_ptr=__t2777t__unsafe_ptr;
  entry__dat__pos=__t2777t__dat__pos;
  entry__dat__length=__t2777t__dat__length;
  entry__dat__first=__t2777t__dat__first;
  __t2776t=__t2776t==0;
  if(!__t2776t){
  break;
  }
  __t_errcode=ends_with__t1276t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2778t,&__t2779t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t35t(__t2779t__,&__t2780t__);
  if(__t2780t__){
  continue;
  }
  __t2781t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2781t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2781t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2781t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2781t__pos=CHARS__pos;
  str__t1014t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2782t__unsafe_ptr,&__t2782t__dat__pos,&__t2782t__dat__length,&__t2782t__dat__first);
  __t_errcode=copy_null_terminated__t1147t(&__t2781t__buf__unsafe_ptr,&__t2781t__buf__unsafe_size,&__t2781t__buf__unsafe_offset,&__t2781t__buf__unsafe_align,&__t2781t__pos,__t2782t__unsafe_ptr,__t2782t__dat__pos,__t2782t__dat__length,__t2782t__dat__first,&__t2783t__unsafe_ptr,&__t2783t__dat__pos,&__t2783t__dat__length,&__t2783t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1112t(__t2783t__unsafe_ptr,__t2783t__dat__pos,__t2783t__dat__length,__t2783t__dat__first,&__t2784t__);
  __t_errcode=str__t989t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2784t__,&__t2785t__unsafe_ptr,&__t2785t__dat__pos,&__t2785t__dat__length,&__t2785t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2785t__unsafe_ptr;
  command__dat__pos=__t2785t__dat__pos;
  command__dat__length=__t2785t__dat__length;
  command__dat__first=__t2785t__dat__first;
  print__t1171t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2750t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2632t(__t2772t__unsafe_ptr);
  exists__t608t(__t2764t__unsafe_ptr,&__t2765t____t709t__);
  if(__t2765t____t709t__){
  free__t678t(&__t2764t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2757t();return 0;}