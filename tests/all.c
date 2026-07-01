#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2763t="./tests/passing/";
const char* const __t396t="\n";
const char* const __t388t="";
const char* const __t2773t=".s";
const char* const __t2764t="./smoll --cleanup ";
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

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2755t(char** __t2783t, uint64_t* __t2784t, uint16_t* __t2785t, uint16_t* __t2786t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2783t=unsafe_ptr;
  *__t2784t=unsafe_size;
  *__t2785t=unsafe_offset;
  *__t2786t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2787t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2787t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2788t) {
  char* allocated=*__t2788t;
  if(allocated){
  free(allocated);
  }
  *__t2788t=allocated;
}

static inline __attribute__((always_inline)) void false__t13t(int* __t2789t) {
  int value=0;
  *__t2789t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t2790t) {
  int __t42t__=0;
  false__t13t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t2790t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t2791t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2791t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2792t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2792t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2793t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2793t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2794t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2794t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2795t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2795t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t2796t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2796t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2797t) {
  char* allocated=0;
  char __t669t__=0;
  char __t670t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t605t(allocated,&__t669t__);
  not__t32t(__t669t__,&__t670t__);
  if(__t670t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2797t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2798t, uint64_t* __t2799t, uint16_t* __t2800t, uint16_t* __t2801t, uint64_t size, char** __t2802t, uint64_t* __t2803t, uint16_t* __t2804t, uint16_t* __t2805t) {
  char* buffer__unsafe_ptr=*__t2798t;
  uint64_t buffer__unsafe_size=*__t2799t;
  uint16_t buffer__unsafe_offset=*__t2800t;
  uint16_t buffer__unsafe_align=*__t2801t;
  int __t705t=0;
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
  int __t722t=0;
  uint64_t __t723t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t708t__);
  if(__t708t__){
  __t709t=0;
  neq__t157t(size,__t709t,&__t710t__);
  if(__t710t__){
  __t711t=0;
  nat__t679t(buffer__unsafe_align,&__t712t__);
  mul__t212t(__t712t__,size,&__t713t__);
  zero__t676t(buffer__unsafe_ptr,__t711t,__t713t__);
  }
  goto __t_return;
  }
  __t715t=0;
  neq__t157t(buffer__unsafe_size,__t715t,&__t716t__);
  if(__t716t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t717t__);
  mul__t212t(__t717t__,size,&__t718t__);
  bytes=__t718t__;
  __t719t=0;
  eq__t133t(bytes,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=14;
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
  *__t2798t=buffer__unsafe_ptr;
  *__t2799t=buffer__unsafe_size;
  *__t2800t=buffer__unsafe_offset;
  *__t2801t=buffer__unsafe_align;
  *__t2802t=buffer__unsafe_ptr;
  *__t2803t=buffer__unsafe_size;
  *__t2804t=buffer__unsafe_offset;
  *__t2805t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t836t(char** __t2806t, uint64_t* __t2807t, uint16_t* __t2808t, uint16_t* __t2809t, uint64_t _pos, char** __t2810t, uint64_t* __t2811t, uint16_t* __t2812t, uint16_t* __t2813t, uint64_t* __t2814t) {
  char* buf__unsafe_ptr=*__t2806t;
  uint64_t buf__unsafe_size=*__t2807t;
  uint16_t buf__unsafe_offset=*__t2808t;
  uint16_t buf__unsafe_align=*__t2809t;
  uint64_t __t837t=0;
  uint64_t pos=0;
  __t837t=_pos;
  pos=__t837t;
  goto __t_return;
  __t_return:
  *__t2806t=buf__unsafe_ptr;
  *__t2807t=buf__unsafe_size;
  *__t2808t=buf__unsafe_offset;
  *__t2809t=buf__unsafe_align;
  *__t2810t=buf__unsafe_ptr;
  *__t2811t=buf__unsafe_size;
  *__t2812t=buf__unsafe_offset;
  *__t2813t=buf__unsafe_align;
  *__t2814t=pos;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2815t, uint64_t* __t2816t, uint16_t* __t2817t, uint16_t* __t2818t, char** __t2819t, uint64_t* __t2820t, uint16_t* __t2821t, uint16_t* __t2822t, uint64_t* __t2823t) {
  char* buf__unsafe_ptr=*__t2815t;
  uint64_t buf__unsafe_size=*__t2816t;
  uint16_t buf__unsafe_offset=*__t2817t;
  uint16_t buf__unsafe_align=*__t2818t;
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
  *__t2815t=buf__unsafe_ptr;
  *__t2816t=buf__unsafe_size;
  *__t2817t=buf__unsafe_offset;
  *__t2818t=buf__unsafe_align;
  *__t2819t=__t841t__buf__unsafe_ptr;
  *__t2820t=__t841t__buf__unsafe_size;
  *__t2821t=__t841t__buf__unsafe_offset;
  *__t2822t=__t841t__buf__unsafe_align;
  *__t2823t=__t841t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t952t(char** __t2824t, uint64_t* __t2825t, uint16_t* __t2826t, uint16_t* __t2827t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2824t=unsafe_ptr;
  *__t2825t=unsafe_size;
  *__t2826t=unsafe_offset;
  *__t2827t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, const char* from, char** __t2828t) {
  *__t2828t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2829t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2829t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2830t) {
  int __t338t__=0;
  char z=0;
  is_different__t107t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2830t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t27t(char* to, char* from, char** __t2831t) {
  *__t2831t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2832t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t27t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2832t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t824t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2833t) {
  char __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  uint64_t __t829t__=0;
  char* __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t825t__);
  if(__t825t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t826t__);
  mul__t212t(i,__t826t__,&__t827t__);
  nat__t679t(buffer__unsafe_offset,&__t828t__);
  add__t188t(__t827t__,__t828t__,&__t829t__);
  add__t677t(buffer__unsafe_ptr,__t829t__,&__t830t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2833t=__t830t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t974t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2834t, uint64_t* __t2835t, uint64_t* __t2836t, char* __t2837t) {
  goto __t_return;
  __t_return:
  *__t2834t=unsafe_ptr;
  *__t2835t=dat__pos;
  *__t2836t=dat__length;
  *__t2837t=dat__first;
}

static inline __attribute__((always_inline)) int str__t978t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2838t, uint64_t* __t2839t, uint64_t* __t2840t, char* __t2841t) {
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
  neq__t157t(__t979t__,__t980t,&__t981t__);
  if(__t981t__){
  __t_errcode=19;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t982t__);
  __t983t=0;
  neq__t157t(__t982t__,__t983t,&__t984t__);
  if(__t984t__){
  __t_errcode=20;
  goto __t_failure;
  }
  str__t974t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t985t__unsafe_ptr,&__t985t__dat__pos,&__t985t__dat__length,&__t985t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2838t=__t985t__unsafe_ptr;
  *__t2839t=__t985t__dat__pos;
  *__t2840t=__t985t__dat__length;
  *__t2841t=__t985t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1012t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2842t, uint64_t* __t2843t, uint64_t* __t2844t, char* __t2845t) {
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
  neq__t157t(length,__t1013t,&__t1014t__);
  if(__t1014t__){
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1016t__);
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
  *__t2842t=__t1018t__unsafe_ptr;
  *__t2843t=__t1018t__dat__pos;
  *__t2844t=__t1018t__dat__length;
  *__t2845t=__t1018t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1034t(const char* c, char** __t2846t, uint64_t* __t2847t, uint64_t* __t2848t, char* __t2849t) {
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
  unsafe_attach_type__t28t(buf__unsafe_ptr,c,&__t1037t__);
  buf__unsafe_ptr=__t1037t__;
  if(c){
  length=strlen(c);
  }
  __t1038t=1;
  add__t188t(length,__t1038t,&__t1039t__);
  buf__unsafe_size=__t1039t__;
  __t1040t=0;
  __t_errcode=str__t1012t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1040t,length,&__t1042t__unsafe_ptr,&__t1042t__dat__pos,&__t1042t__dat__length,&__t1042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2846t=__t1042t__unsafe_ptr;
  *__t2847t=__t1042t__dat__pos;
  *__t2848t=__t1042t__dat__length;
  *__t2849t=__t1042t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1043t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2850t) {
  goto __t_return;
  __t_return:
  *__t2850t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2851t) {
  goto __t_return;
  __t_return:
  *__t2851t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t2852t) {
  int __t290t__=0;
  char z=0;
  is_different__t107t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2852t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t2853t, uint64_t* __t2854t, uint16_t* __t2855t, uint16_t* __t2856t, uint64_t pos, char** __t2857t, uint64_t* __t2858t, uint16_t* __t2859t, uint16_t* __t2860t, uint64_t* __t2861t) {
  char* buf__unsafe_ptr=*__t2853t;
  uint64_t buf__unsafe_size=*__t2854t;
  uint16_t buf__unsafe_offset=*__t2855t;
  uint16_t buf__unsafe_align=*__t2856t;
  goto __t_return;
  __t_return:
  *__t2853t=buf__unsafe_ptr;
  *__t2854t=buf__unsafe_size;
  *__t2855t=buf__unsafe_offset;
  *__t2856t=buf__unsafe_align;
  *__t2857t=buf__unsafe_ptr;
  *__t2858t=buf__unsafe_size;
  *__t2859t=buf__unsafe_offset;
  *__t2860t=buf__unsafe_align;
  *__t2861t=pos;
}

static inline __attribute__((always_inline)) int alloc__t874t(char** __t2862t, uint64_t* __t2863t, uint16_t* __t2864t, uint16_t* __t2865t, uint64_t* __t2866t, uint64_t length, char** __t2867t, uint64_t* __t2868t, uint16_t* __t2869t, uint16_t* __t2870t, uint64_t* __t2871t) {
  char* allocator__buf__unsafe_ptr=*__t2862t;
  uint64_t allocator__buf__unsafe_size=*__t2863t;
  uint16_t allocator__buf__unsafe_offset=*__t2864t;
  uint16_t allocator__buf__unsafe_align=*__t2865t;
  uint64_t allocator__pos=*__t2866t;
  int __t875t=0;
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
  add__t188t(allocator__pos,length,&__t876t__);
  next_pos=__t876t__;
  len__t831t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t877t__);
  gt__t289t(next_pos,__t877t__,&__t878t__);
  if(__t878t__){
  __t_errcode=17;
  goto __t_failure;
  }
  __t879t=0;
  add__t188t(allocator__pos,__t879t,&__t880t__);
  pos=__t880t__;
  allocator__pos=next_pos;
  allocated__t842t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t881t__buf__unsafe_ptr,&__t881t__buf__unsafe_size,&__t881t__buf__unsafe_offset,&__t881t__buf__unsafe_align,&__t881t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2862t=allocator__buf__unsafe_ptr;
  *__t2863t=allocator__buf__unsafe_size;
  *__t2864t=allocator__buf__unsafe_offset;
  *__t2865t=allocator__buf__unsafe_align;
  *__t2866t=allocator__pos;
  *__t2867t=__t881t__buf__unsafe_ptr;
  *__t2868t=__t881t__buf__unsafe_size;
  *__t2869t=__t881t__buf__unsafe_offset;
  *__t2870t=__t881t__buf__unsafe_align;
  *__t2871t=__t881t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1065t(char** __t2872t, uint64_t* __t2873t, uint16_t* __t2874t, uint16_t* __t2875t, uint64_t* __t2876t, const char* _other, char** __t2877t, uint64_t* __t2878t, uint64_t* __t2879t, char* __t2880t) {
  char* CHARS__buf__unsafe_ptr=*__t2872t;
  uint64_t CHARS__buf__unsafe_size=*__t2873t;
  uint16_t CHARS__buf__unsafe_offset=*__t2874t;
  uint16_t CHARS__buf__unsafe_align=*__t2875t;
  uint64_t CHARS__pos=*__t2876t;
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
  __t_errcode=alloc__t874t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1067t__,&__t1068t__buf__unsafe_ptr,&__t1068t__buf__unsafe_size,&__t1068t__buf__unsafe_offset,&__t1068t__buf__unsafe_align,&__t1068t__pos);
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
  *__t2872t=CHARS__buf__unsafe_ptr;
  *__t2873t=CHARS__buf__unsafe_size;
  *__t2874t=CHARS__buf__unsafe_offset;
  *__t2875t=CHARS__buf__unsafe_align;
  *__t2876t=CHARS__pos;
  *__t2877t=__t1069t__unsafe_ptr;
  *__t2878t=__t1069t__dat__pos;
  *__t2879t=__t1069t__dat__length;
  *__t2880t=__t1069t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2627t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2628t(const char* path, char** __t2881t) {
  char* unsafe_ptr=0;
  char __t2630t__=0;
  char __t2631t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t605t(unsafe_ptr,&__t2630t__);
  not__t32t(__t2630t__,&__t2631t__);
  if(__t2631t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2627t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2881t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2639t(char** __t2882t, const char** __t2883t) {
  char* f__unsafe_ptr=*__t2882t;
  char __t2640t__=0;
  char __t2641t__=0;
  char* de=0;
  char __t2642t__=0;
  char __t2643t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t605t(f__unsafe_ptr,&__t2640t__);
  not__t32t(__t2640t__,&__t2641t__);
  if(__t2641t__){
  __t_errcode=53;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t605t(de,&__t2642t__);
  not__t32t(__t2642t__,&__t2643t__);
  if(__t2643t__){
  __t_errcode=54;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2882t=f__unsafe_ptr;
  *__t2883t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2644t(char** __t2884t, char** __t2885t, uint64_t* __t2886t, uint64_t* __t2887t, char* __t2888t) {
  char* f__unsafe_ptr=*__t2884t;
  const char* __t2645t__=0;
  char* __t2646t__unsafe_ptr=0;
  uint64_t __t2646t__dat__pos=0;
  uint64_t __t2646t__dat__length=0;
  char __t2646t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2639t(&f__unsafe_ptr,&__t2645t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1034t(__t2645t__,&__t2646t__unsafe_ptr,&__t2646t__dat__pos,&__t2646t__dat__length,&__t2646t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2884t=f__unsafe_ptr;
  *__t2885t=__t2646t__unsafe_ptr;
  *__t2886t=__t2646t__dat__pos;
  *__t2887t=__t2646t__dat__length;
  *__t2888t=__t2646t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2710t(char** __t2889t, uint64_t __t_anon1, char** __t2890t, uint64_t* __t2891t, uint64_t* __t2892t, char* __t2893t) {
  char* data__unsafe_ptr=*__t2889t;
  char* __t2711t__unsafe_ptr=0;
  uint64_t __t2711t__dat__pos=0;
  uint64_t __t2711t__dat__length=0;
  char __t2711t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2644t(&data__unsafe_ptr,&__t2711t__unsafe_ptr,&__t2711t__dat__pos,&__t2711t__dat__length,&__t2711t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2889t=data__unsafe_ptr;
  *__t2890t=__t2711t__unsafe_ptr;
  *__t2891t=__t2711t__dat__pos;
  *__t2892t=__t2711t__dat__length;
  *__t2893t=__t2711t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1011t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2894t, uint64_t* __t2895t, uint64_t* __t2896t, char* __t2897t) {
  goto __t_return;
  __t_return:
  *__t2894t=other__unsafe_ptr;
  *__t2895t=other__dat__pos;
  *__t2896t=other__dat__length;
  *__t2897t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t2898t) {
  int __t266t__=0;
  char z=0;
  is_different__t107t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2898t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t2899t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t107t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2899t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1170t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2900t) {
  uint64_t __t1171t__=0;
  char* __t1172t__=0;
  add__t188t(s__dat__pos,i,&__t1171t__);
  add__t677t(s__unsafe_ptr,__t1171t__,&__t1172t__);
  goto __t_return;
  __t_return:
  *__t2900t=__t1172t__;
}

int slice__t1193t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2901t, uint64_t* __t2902t, uint64_t* __t2903t, char* __t2904t) {
  char* __t1194t__unsafe_ptr=0;
  uint64_t __t1194t__dat__pos=0;
  uint64_t __t1194t__dat__length=0;
  char __t1194t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1195t__=0;
  char* __t1196t__unsafe_ptr=0;
  uint64_t __t1196t__dat__pos=0;
  uint64_t __t1196t__dat__length=0;
  char __t1196t__dat__first=0;
  char __t1197t__=0;
  char __t1198t__=0;
  char __t1199t=0;
  char __t1200t__=0;
  uint64_t __t1201t__=0;
  uint64_t new_length=0;
  uint64_t __t1202t=0;
  char __t1203t__=0;
  char new_first=0;
  char* __t1205t__=0;
  char __t1206t__value=0;
  uint64_t __t1207t__=0;
  char* __t1208t__unsafe_ptr=0;
  uint64_t __t1208t__dat__pos=0;
  uint64_t __t1208t__dat__length=0;
  char __t1208t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1194t__unsafe_ptr,&__t1194t__dat__pos,&__t1194t__dat__length,&__t1194t__dat__first);
  s__unsafe_ptr=__t1194t__unsafe_ptr;
  s__dat__pos=__t1194t__dat__pos;
  s__dat__length=__t1194t__dat__length;
  s__dat__first=__t1194t__dat__first;
  eq__t133t(from,to,&__t1195t__);
  if(__t1195t__){
  __t_errcode=str__t1034t(__t388t,&__t1196t__unsafe_ptr,&__t1196t__dat__pos,&__t1196t__dat__length,&__t1196t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1197t__);
  if(!__t1197t__){
  gt__t289t(to,s__dat__length,&__t1198t__);
  __t1199t=__t1198t__;
  }
  else{
  __t1199t=0;
  not__t32t(__t1199t,&__t1200t__);
  __t1199t=__t1200t__;
  }
  if(__t1199t){
  __t_errcode=23;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1201t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1201t__;
  __t1202t=0;
  neq__t157t(from,__t1202t,&__t1203t__);
  if(__t1203t__){
  get__t1170t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1205t__);
  if(!__t1205t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1206t__value,__t1205t__,1);
  new_first=__t1206t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1207t__);
  str__t974t(s__unsafe_ptr,__t1207t__,new_length,new_first,&__t1208t__unsafe_ptr,&__t1208t__dat__pos,&__t1208t__dat__length,&__t1208t__dat__first);
  __t1196t__unsafe_ptr=__t1208t__unsafe_ptr;
  __t1196t__dat__pos=__t1208t__dat__pos;
  __t1196t__dat__length=__t1208t__dat__length;
  __t1196t__dat__first=__t1208t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2901t=__t1196t__unsafe_ptr;
  *__t2902t=__t1196t__dat__pos;
  *__t2903t=__t1196t__dat__length;
  *__t2904t=__t1196t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1047t(char x, char y, char* __t2905t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2905t=z;
}

static inline __attribute__((always_inline)) void eq__t1112t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2906t) {
  uint64_t __t1113t__=0;
  uint64_t n=0;
  uint64_t __t1114t__=0;
  char __t1115t__=0;
  char __t1116t=0;
  char __t1117t__=0;
  char __t1118t=0;
  char z=0;
  len__t1043t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1113t__);
  n=__t1113t__;
  len__t1043t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1114t__);
  neq__t157t(n,__t1114t__,&__t1115t__);
  if(__t1115t__){
  __t1116t=0;
  goto __t_return;
  }
  neq__t1047t(x__dat__first,y__dat__first,&__t1117t__);
  if(__t1117t__){
  __t1118t=0;
  __t1116t=__t1118t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1116t=z;
  goto __t_return;
  __t_return:
  *__t2906t=__t1116t;
}

static inline __attribute__((always_inline)) int ends_with__t1273t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2907t) {
  char* __t1274t__unsafe_ptr=0;
  uint64_t __t1274t__dat__pos=0;
  uint64_t __t1274t__dat__length=0;
  char __t1274t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1275t__unsafe_ptr=0;
  uint64_t __t1275t__dat__pos=0;
  uint64_t __t1275t__dat__length=0;
  char __t1275t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1276t__=0;
  char __t1277t=0;
  uint64_t __t1278t__=0;
  uint64_t n=0;
  uint64_t __t1279t__=0;
  uint64_t __t1280t__=0;
  char* __t1281t__unsafe_ptr=0;
  uint64_t __t1281t__dat__pos=0;
  uint64_t __t1281t__dat__length=0;
  char __t1281t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1282t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1274t__unsafe_ptr,&__t1274t__dat__pos,&__t1274t__dat__length,&__t1274t__dat__first);
  stack__unsafe_ptr=__t1274t__unsafe_ptr;
  stack__dat__pos=__t1274t__dat__pos;
  stack__dat__length=__t1274t__dat__length;
  stack__dat__first=__t1274t__dat__first;
  __t_errcode=str__t1034t(_needle,&__t1275t__unsafe_ptr,&__t1275t__dat__pos,&__t1275t__dat__length,&__t1275t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1275t__unsafe_ptr;
  needle__dat__pos=__t1275t__dat__pos;
  needle__dat__length=__t1275t__dat__length;
  needle__dat__first=__t1275t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1276t__);
  if(__t1276t__){
  __t1277t=0;
  goto __t_return;
  }
  len__t1043t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1278t__);
  n=__t1278t__;
  len__t1043t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1279t__);
  __t_errcode=sub__t365t(n,__t1279t__,&__t1280t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1193t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1280t__,n,&__t1281t__unsafe_ptr,&__t1281t__dat__pos,&__t1281t__dat__length,&__t1281t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1281t__unsafe_ptr;
  ret__dat__pos=__t1281t__dat__pos;
  ret__dat__length=__t1281t__dat__length;
  ret__dat__first=__t1281t__dat__first;
  eq__t1112t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1282t__);
  __t1277t=__t1282t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2907t=__t1277t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1144t(char** __t2908t, uint64_t* __t2909t, uint16_t* __t2910t, uint16_t* __t2911t, uint64_t* __t2912t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2913t, uint64_t* __t2914t, uint64_t* __t2915t, char* __t2916t) {
  char* CHARS__buf__unsafe_ptr=*__t2908t;
  uint64_t CHARS__buf__unsafe_size=*__t2909t;
  uint16_t CHARS__buf__unsafe_offset=*__t2910t;
  uint16_t CHARS__buf__unsafe_align=*__t2911t;
  uint64_t CHARS__pos=*__t2912t;
  char* __t1145t__unsafe_ptr=0;
  uint64_t __t1145t__dat__pos=0;
  uint64_t __t1145t__dat__length=0;
  char __t1145t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1146t__=0;
  uint64_t __t1147t__=0;
  uint64_t null_pos=0;
  uint64_t __t1148t=0;
  uint64_t __t1149t__=0;
  uint64_t next_pos=0;
  uint64_t __t1150t__=0;
  char __t1151t__=0;
  char* endpos=0;
  uint64_t __t1152t=0;
  uint64_t __t1153t__=0;
  uint64_t prev_pos=0;
  char* __t1154t__unsafe_ptr=0;
  uint64_t __t1154t__dat__pos=0;
  uint64_t __t1154t__dat__length=0;
  char __t1154t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1011t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1145t__unsafe_ptr,&__t1145t__dat__pos,&__t1145t__dat__length,&__t1145t__dat__first);
  other__unsafe_ptr=__t1145t__unsafe_ptr;
  other__dat__pos=__t1145t__dat__pos;
  other__dat__length=__t1145t__dat__length;
  other__dat__first=__t1145t__dat__first;
  len__t1043t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1146t__);
  add__t188t(CHARS__pos,__t1146t__,&__t1147t__);
  null_pos=__t1147t__;
  __t1148t=1;
  add__t188t(null_pos,__t1148t,&__t1149t__);
  next_pos=__t1149t__;
  len__t831t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1150t__);
  gt__t289t(next_pos,__t1150t__,&__t1151t__);
  if(__t1151t__){
  __t_errcode=22;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1152t=0;
  add__t188t(CHARS__pos,__t1152t,&__t1153t__);
  prev_pos=__t1153t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t978t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1154t__unsafe_ptr,&__t1154t__dat__pos,&__t1154t__dat__length,&__t1154t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2908t=CHARS__buf__unsafe_ptr;
  *__t2909t=CHARS__buf__unsafe_size;
  *__t2910t=CHARS__buf__unsafe_offset;
  *__t2911t=CHARS__buf__unsafe_align;
  *__t2912t=CHARS__pos;
  *__t2913t=__t1154t__unsafe_ptr;
  *__t2914t=__t1154t__dat__pos;
  *__t2915t=__t1154t__dat__length;
  *__t2916t=__t1154t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1109t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2917t) {
  uint64_t __t1110t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1110t__);
  goto __t_return;
  __t_return:
  *__t2917t=__t1110t__;
}

static inline __attribute__((always_inline)) void true__t14t(int* __t2918t) {
  int value=0;
  *__t2918t=value;
}

static inline __attribute__((always_inline)) void not__t43t(int __t_anon0, int* __t2919t) {
  int __t44t__=0;
  true__t14t(&__t44t__);
  goto __t_return;
  __t_return:
  *__t2919t=__t44t__;
}

static inline __attribute__((always_inline)) int str__t986t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2920t, uint64_t* __t2921t, uint64_t* __t2922t, char* __t2923t) {
  int __t987t=0;
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
  not__t43t(__t988t,&__t989t__);
  len__t831t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t990t__);
  gt__t289t(length,__t990t__,&__t991t__);
  if(__t991t__){
  __t_errcode=21;
  goto __t_failure;
  }
  __t992t=0;
  __t993t=0;
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t993t,&__t995t__);
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
  *__t2920t=__t997t__unsafe_ptr;
  *__t2921t=__t997t__dat__pos;
  *__t2922t=__t997t__dat__length;
  *__t2923t=__t997t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1168t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1169t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1090t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2924t, uint64_t* __t2925t, uint64_t* __t2926t, char* __t2927t) {
  char* __t1091t__unsafe_ptr=0;
  uint64_t __t1091t__unsafe_size=0;
  uint16_t __t1091t__unsafe_offset=0;
  uint16_t __t1091t__unsafe_align=0;
  uint64_t __t1092t=0;
  uint64_t __t1093t__=0;
  uint64_t __t1094t__=0;
  char* __t1095t__unsafe_ptr=0;
  uint64_t __t1095t__unsafe_size=0;
  uint16_t __t1095t__unsafe_offset=0;
  uint16_t __t1095t__unsafe_align=0;
  char __t1096t____t706t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1097t=0;
  char* __t1098t__unsafe_ptr=0;
  uint64_t __t1098t__dat__pos=0;
  uint64_t __t1098t__dat__length=0;
  char __t1098t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t952t(&__t1091t__unsafe_ptr,&__t1091t__unsafe_size,&__t1091t__unsafe_offset,&__t1091t__unsafe_align);
  __t1092t=1;
  len__t1043t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1093t__);
  add__t188t(__t1092t,__t1093t__,&__t1094t__);
  __t_errcode=alloc__t704t(&__t1091t__unsafe_ptr,&__t1091t__unsafe_size,&__t1091t__unsafe_offset,&__t1091t__unsafe_align,__t1094t__,&__t1095t__unsafe_ptr,&__t1095t__unsafe_size,&__t1095t__unsafe_offset,&__t1095t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1095t__unsafe_ptr;
  buf__unsafe_size=__t1095t__unsafe_size;
  buf__unsafe_offset=__t1095t__unsafe_offset;
  buf__unsafe_align=__t1095t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1097t=0;
  __t_errcode=str__t978t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1097t,other__dat__length,other__dat__first,&__t1098t__unsafe_ptr,&__t1098t__dat__pos,&__t1098t__dat__length,&__t1098t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t1098t__unsafe_ptr,&__t1096t____t706t__);
  if(__t1096t____t706t__){
  free__t675t(&__t1098t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2924t=__t1098t__unsafe_ptr;
  *__t2925t=__t1098t__dat__pos;
  *__t2926t=__t1098t__dat__length;
  *__t2927t=__t1098t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1099t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2928t, char** __t2929t, uint64_t* __t2930t, uint64_t* __t2931t, char* __t2932t) {
  char* __t1101t__unsafe_ptr=0;
  uint64_t __t1101t__dat__pos=0;
  uint64_t __t1101t__dat__length=0;
  char __t1101t__dat__first=0;
  char __t1102t____t1096t____t706t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1103t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t832t();
  __t_errcode=copy_null_terminated__t1090t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1101t__unsafe_ptr,&__t1101t__dat__pos,&__t1101t__dat__length,&__t1101t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1101t__unsafe_ptr;
  str__dat__pos=__t1101t__dat__pos;
  str__dat__length=__t1101t__dat__length;
  str__dat__first=__t1101t__dat__first;
  add__t677t(str__unsafe_ptr,str__dat__pos,&__t1103t__);
  _ret=__t1103t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t605t(str__unsafe_ptr,&__t1102t____t1096t____t706t__);
  if(__t1102t____t1096t____t706t__){
  free__t675t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2928t=cstr;
  *__t2929t=str__unsafe_ptr;
  *__t2930t=str__dat__pos;
  *__t2931t=str__dat__length;
  *__t2932t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1107t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2933t) {
  goto __t_return;
  __t_return:
  *__t2933t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2159t(const char* cmd, char** __t2934t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2934t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2158t(char* unsafe_ptr, int64_t* __t2935t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2935t=status;
}

static inline __attribute__((always_inline)) void int__t585t(uint64_t x, int64_t* __t2936t) {
  int __t586t=0;
  int __t587t=0;
  int __t588t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2936t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t2937t) {
  int __t93t=0;
  int __t94t__=0;
  not__t41t(__t93t,&__t94t__);
  goto __t_return;
  __t_return:
  *__t2937t=__t94t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t2938t) {
  int __t147t__=0;
  char z=0;
  is_different__t91t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2938t=z;
}

static inline __attribute__((always_inline)) int open__t2160t(const char* cmd, char** __t2939t) {
  char* __t2161t__=0;
  char* unsafe_ptr=0;
  char __t2162t__=0;
  char __t2163t__=0;
  char __t2164t__=0;
  int64_t __t2165t__=0;
  int64_t status=0;
  uint64_t __t2166t=0;
  int64_t __t2167t__=0;
  char __t2168t__=0;
  char __t2169t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2159t(cmd,&__t2161t__);
  unsafe_ptr=__t2161t__;
  exists__t605t(unsafe_ptr,&__t2162t__);
  not__t32t(__t2162t__,&__t2163t__);
  if(__t2163t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(unsafe_ptr,&__t2164t__);
  if(__t2164t__){
  pclose__t2158t(unsafe_ptr,&__t2165t__);
  status=__t2165t__;
  unsafe_ptr=0;
  __t2166t=0;
  int__t585t(__t2166t,&__t2167t__);
  neq__t146t(status,__t2167t__,&__t2168t__);
  if(__t2168t__){
  __t_complain=38;
  __t2169t=__t2169t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2939t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2171t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2940t) {
  const char* __t2172t__cstr=0;
  char* __t2172t__str__unsafe_ptr=0;
  uint64_t __t2172t__str__dat__pos=0;
  uint64_t __t2172t__str__dat__length=0;
  char __t2172t__str__dat__first=0;
  char __t2173t____t1102t____t1096t____t706t__=0;
  const char* __t2174t__=0;
  char* __t2175t__unsafe_ptr=0;
  char __t2176t____t2164t__=0;
  int64_t __t2176t____t2165t__=0;
  int64_t __t2176t__status=0;
  uint64_t __t2176t____t2166t=0;
  int64_t __t2176t____t2167t__=0;
  char __t2176t____t2168t__=0;
  char __t2176t____t2169t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1099t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2172t__cstr,&__t2172t__str__unsafe_ptr,&__t2172t__str__dat__pos,&__t2172t__str__dat__length,&__t2172t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1107t(__t2172t__cstr,__t2172t__str__unsafe_ptr,__t2172t__str__dat__pos,__t2172t__str__dat__length,__t2172t__str__dat__first,&__t2174t__);
  __t_errcode=open__t2160t(__t2174t__,&__t2175t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t2175t__unsafe_ptr,&__t2176t____t2164t__);
  if(__t2176t____t2164t__){
  pclose__t2158t(__t2175t__unsafe_ptr,&__t2176t____t2165t__);
  __t2176t__status=__t2176t____t2165t__;
  __t2175t__unsafe_ptr=0;
  __t2176t____t2166t=0;
  int__t585t(__t2176t____t2166t,&__t2176t____t2167t__);
  neq__t146t(__t2176t__status,__t2176t____t2167t__,&__t2176t____t2168t__);
  if(__t2176t____t2168t__){
  __t_complain=38;
  __t2176t____t2169t=__t2176t____t2169t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2940t=__t2175t__unsafe_ptr;
  
  __t_skip_returns:exists__t605t(__t2172t__str__unsafe_ptr,&__t2173t____t1102t____t1096t____t706t__);
  if(__t2173t____t1102t____t1096t____t706t__){
  free__t675t(&__t2172t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2138t(int64_t value, const char** __t2941t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2941t=ret;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2745t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2746t__unsafe_ptr=0;
  char __t2747t____t2176t____t2164t__=0;
  int64_t __t2747t____t2176t____t2165t__=0;
  int64_t __t2747t____t2176t__status=0;
  uint64_t __t2747t____t2176t____t2166t=0;
  int64_t __t2747t____t2176t____t2167t__=0;
  char __t2747t____t2176t____t2168t__=0;
  char __t2747t____t2176t____t2169t=0;
  char* proc__unsafe_ptr=0;
  char __t2748t=0;
  int64_t __t2749t=0;
  int64_t error=0;
  const char* __t2750t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2171t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2746t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2746t__unsafe_ptr;
  exists__t605t(__t2746t__unsafe_ptr,&__t2747t____t2176t____t2164t__);
  if(__t2747t____t2176t____t2164t__){
  pclose__t2158t(__t2746t__unsafe_ptr,&__t2747t____t2176t____t2165t__);
  __t2747t____t2176t__status=__t2747t____t2176t____t2165t__;
  __t2746t__unsafe_ptr=0;
  __t2747t____t2176t____t2166t=0;
  int__t585t(__t2747t____t2176t____t2166t,&__t2747t____t2176t____t2167t__);
  neq__t146t(__t2747t____t2176t__status,__t2747t____t2176t____t2167t__,&__t2747t____t2176t____t2168t__);
  if(__t2747t____t2176t____t2168t__){
  __t_complain=38;
  __t2747t____t2176t____t2169t=__t2747t____t2176t____t2169t==0;
  }
  }
  __t2749t=__t_complain;
  __t2748t=(__t_complain==0);
  __t_complain=0;
  error=__t2749t;
  __t2748t=__t2748t==0;
  if(__t2748t){
  cstr__t2138t(error,&__t2750t__);
  print__t394t(__t2750t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2752t() {
  char* __t2757t__unsafe_ptr=0;
  uint64_t __t2757t__unsafe_size=0;
  uint16_t __t2757t__unsafe_offset=0;
  uint16_t __t2757t__unsafe_align=0;
  uint64_t __t2758t=0;
  char* __t2759t__unsafe_ptr=0;
  uint64_t __t2759t__unsafe_size=0;
  uint16_t __t2759t__unsafe_offset=0;
  uint16_t __t2759t__unsafe_align=0;
  char __t2760t____t706t__=0;
  char* __t2761t__buf__unsafe_ptr=0;
  uint64_t __t2761t__buf__unsafe_size=0;
  uint16_t __t2761t__buf__unsafe_offset=0;
  uint16_t __t2761t__buf__unsafe_align=0;
  uint64_t __t2761t__pos=0;
  char* __t2762t__buf__unsafe_ptr=0;
  uint64_t __t2762t__buf__unsafe_size=0;
  uint16_t __t2762t__buf__unsafe_offset=0;
  uint16_t __t2762t__buf__unsafe_align=0;
  uint64_t __t2762t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2765t__unsafe_ptr=0;
  uint64_t __t2765t__dat__pos=0;
  uint64_t __t2765t__dat__length=0;
  char __t2765t__dat__first=0;
  char* __t2766t__unsafe_ptr=0;
  uint64_t __t2766t__dat__pos=0;
  uint64_t __t2766t__dat__length=0;
  char __t2766t__dat__first=0;
  char* __t2767t__unsafe_ptr=0;
  char* __t2769t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2770t=0;
  char __t2771t=0;
  char* __t2772t__unsafe_ptr=0;
  uint64_t __t2772t__dat__pos=0;
  uint64_t __t2772t__dat__length=0;
  char __t2772t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2774t__=0;
  char __t2775t__=0;
  char* __t2776t__buf__unsafe_ptr=0;
  uint64_t __t2776t__buf__unsafe_size=0;
  uint16_t __t2776t__buf__unsafe_offset=0;
  uint16_t __t2776t__buf__unsafe_align=0;
  uint64_t __t2776t__pos=0;
  char* __t2777t__unsafe_ptr=0;
  uint64_t __t2777t__dat__pos=0;
  uint64_t __t2777t__dat__length=0;
  char __t2777t__dat__first=0;
  char* __t2778t__unsafe_ptr=0;
  uint64_t __t2778t__dat__pos=0;
  uint64_t __t2778t__dat__length=0;
  char __t2778t__dat__first=0;
  uint64_t __t2779t__=0;
  char* __t2780t__unsafe_ptr=0;
  uint64_t __t2780t__dat__pos=0;
  uint64_t __t2780t__dat__length=0;
  char __t2780t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  char____t_buffer____buffer__t2755t(&__t2757t__unsafe_ptr,&__t2757t__unsafe_size,&__t2757t__unsafe_offset,&__t2757t__unsafe_align);
  __t2758t=256;
  __t_errcode=alloc__t704t(&__t2757t__unsafe_ptr,&__t2757t__unsafe_size,&__t2757t__unsafe_offset,&__t2757t__unsafe_align,__t2758t,&__t2759t__unsafe_ptr,&__t2759t__unsafe_size,&__t2759t__unsafe_offset,&__t2759t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t839t(&__t2759t__unsafe_ptr,&__t2759t__unsafe_size,&__t2759t__unsafe_offset,&__t2759t__unsafe_align,&__t2761t__buf__unsafe_ptr,&__t2761t__buf__unsafe_size,&__t2761t__buf__unsafe_offset,&__t2761t__buf__unsafe_align,&__t2761t__pos);
  __t2762t__buf__unsafe_ptr=__t2761t__buf__unsafe_ptr;
  __t2762t__buf__unsafe_size=__t2761t__buf__unsafe_size;
  __t2762t__buf__unsafe_offset=__t2761t__buf__unsafe_offset;
  __t2762t__buf__unsafe_align=__t2761t__buf__unsafe_align;
  __t2762t__pos=__t2761t__pos;
  CHARS__buf__unsafe_ptr=__t2762t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2762t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2762t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2762t__buf__unsafe_align;
  CHARS__pos=__t2762t__pos;
  path=__t2763t;
  __t_errcode=copy__t1065t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2764t,&__t2765t__unsafe_ptr,&__t2765t__dat__pos,&__t2765t__dat__length,&__t2765t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1065t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2766t__unsafe_ptr,&__t2766t__dat__pos,&__t2766t__dat__length,&__t2766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2628t(path,&__t2767t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2769t__unsafe_ptr=__t2767t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2769t__unsafe_ptr;
  __t2770t=0-1;
  while(1){
  __t2770t=__t2770t+1;
  __t_complain=get__t2710t(&test_dir__unsafe_ptr,__t2770t,&__t2772t__unsafe_ptr,&__t2772t__dat__pos,&__t2772t__dat__length,&__t2772t__dat__first);
  __t2771t=__t_complain;
  entry__unsafe_ptr=__t2772t__unsafe_ptr;
  entry__dat__pos=__t2772t__dat__pos;
  entry__dat__length=__t2772t__dat__length;
  entry__dat__first=__t2772t__dat__first;
  __t2771t=__t2771t==0;
  if(!__t2771t){
  break;
  }
  __t_errcode=ends_with__t1273t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2773t,&__t2774t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t32t(__t2774t__,&__t2775t__);
  if(__t2775t__){
  continue;
  }
  __t2776t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2776t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2776t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2776t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2776t__pos=CHARS__pos;
  str__t1011t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2777t__unsafe_ptr,&__t2777t__dat__pos,&__t2777t__dat__length,&__t2777t__dat__first);
  __t_errcode=copy_null_terminated__t1144t(&__t2776t__buf__unsafe_ptr,&__t2776t__buf__unsafe_size,&__t2776t__buf__unsafe_offset,&__t2776t__buf__unsafe_align,&__t2776t__pos,__t2777t__unsafe_ptr,__t2777t__dat__pos,__t2777t__dat__length,__t2777t__dat__first,&__t2778t__unsafe_ptr,&__t2778t__dat__pos,&__t2778t__dat__length,&__t2778t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1109t(__t2778t__unsafe_ptr,__t2778t__dat__pos,__t2778t__dat__length,__t2778t__dat__first,&__t2779t__);
  __t_errcode=str__t986t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2779t__,&__t2780t__unsafe_ptr,&__t2780t__dat__pos,&__t2780t__dat__length,&__t2780t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2780t__unsafe_ptr;
  command__dat__pos=__t2780t__dat__pos;
  command__dat__length=__t2780t__dat__length;
  command__dat__first=__t2780t__dat__first;
  print__t1168t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2745t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2627t(__t2767t__unsafe_ptr);
  exists__t605t(__t2759t__unsafe_ptr,&__t2760t____t706t__);
  if(__t2760t____t706t__){
  free__t675t(&__t2759t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2752t();return 0;}