#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t391t="\n";
const char* const __t2761t="./smoll --cleanup ";
const char* const __t2760t="./tests/passing/";
const char* const __t2770t=".s";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2752t(char** __t2780t, uint64_t* __t2781t, uint16_t* __t2782t, uint16_t* __t2783t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2780t=unsafe_ptr;
  *__t2781t=unsafe_size;
  *__t2782t=unsafe_offset;
  *__t2783t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t600t(char* x, char* __t2784t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2784t=z;
}

static inline __attribute__((always_inline)) void free__t670t(char** __t2785t) {
  char* allocated=*__t2785t;
  if(allocated){
  free(allocated);
  }
  *__t2785t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2786t) {
  int value=0;
  *__t2786t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2787t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2787t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2788t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2788t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2789t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2789t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2790t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2790t=z;
}

static inline __attribute__((always_inline)) void nat__t674t(uint16_t x, uint64_t* __t2791t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2791t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2792t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2792t=z;
}

static inline __attribute__((always_inline)) void zero__t671t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2793t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2793t=z;
}

static inline __attribute__((always_inline)) int alloc__t663t(uint64_t bytes, char** __t2794t) {
  char* allocated=0;
  char __t664t__=0;
  char __t665t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t600t(allocated,&__t664t__);
  not__t36t(__t664t__,&__t665t__);
  if(__t665t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2794t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t699t(char** __t2795t, uint64_t* __t2796t, uint16_t* __t2797t, uint16_t* __t2798t, uint64_t size, char** __t2799t, uint64_t* __t2800t, uint16_t* __t2801t, uint16_t* __t2802t) {
  char* buffer__unsafe_ptr=*__t2795t;
  uint64_t buffer__unsafe_size=*__t2796t;
  uint16_t buffer__unsafe_offset=*__t2797t;
  uint16_t buffer__unsafe_align=*__t2798t;
  int __t700t=0;
  char __t701t__=0;
  char __t703t__=0;
  uint64_t __t704t=0;
  char __t705t__=0;
  uint64_t __t706t=0;
  uint64_t __t707t__=0;
  uint64_t __t708t__=0;
  uint64_t __t710t=0;
  char __t711t__=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t bytes=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  char* __t716t__=0;
  int __t717t=0;
  uint64_t __t718t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t128t(buffer__unsafe_size,size,&__t703t__);
  if(__t703t__){
  __t704t=0;
  neq__t152t(size,__t704t,&__t705t__);
  if(__t705t__){
  __t706t=0;
  nat__t674t(buffer__unsafe_align,&__t707t__);
  mul__t207t(__t707t__,size,&__t708t__);
  zero__t671t(buffer__unsafe_ptr,__t706t,__t708t__);
  }
  goto __t_return;
  }
  __t710t=0;
  neq__t152t(buffer__unsafe_size,__t710t,&__t711t__);
  if(__t711t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t674t(buffer__unsafe_align,&__t712t__);
  mul__t207t(__t712t__,size,&__t713t__);
  bytes=__t713t__;
  __t714t=0;
  eq__t128t(bytes,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t663t(bytes,&__t716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t718t=0;
  zero__t671t(__t716t__,__t718t,bytes);
  buffer__unsafe_ptr=__t716t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t600t(buffer__unsafe_ptr,&__t701t__);
  if(__t701t__){
  free__t670t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2795t=buffer__unsafe_ptr;
  *__t2796t=buffer__unsafe_size;
  *__t2797t=buffer__unsafe_offset;
  *__t2798t=buffer__unsafe_align;
  *__t2799t=buffer__unsafe_ptr;
  *__t2800t=buffer__unsafe_size;
  *__t2801t=buffer__unsafe_offset;
  *__t2802t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t2803t, uint64_t* __t2804t, uint16_t* __t2805t, uint16_t* __t2806t, uint64_t _pos, char** __t2807t, uint64_t* __t2808t, uint16_t* __t2809t, uint16_t* __t2810t, uint64_t* __t2811t) {
  char* buf__unsafe_ptr=*__t2803t;
  uint64_t buf__unsafe_size=*__t2804t;
  uint16_t buf__unsafe_offset=*__t2805t;
  uint16_t buf__unsafe_align=*__t2806t;
  uint64_t __t832t=0;
  uint64_t pos=0;
  __t832t=_pos;
  pos=__t832t;
  goto __t_return;
  __t_return:
  *__t2803t=buf__unsafe_ptr;
  *__t2804t=buf__unsafe_size;
  *__t2805t=buf__unsafe_offset;
  *__t2806t=buf__unsafe_align;
  *__t2807t=buf__unsafe_ptr;
  *__t2808t=buf__unsafe_size;
  *__t2809t=buf__unsafe_offset;
  *__t2810t=buf__unsafe_align;
  *__t2811t=pos;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t2812t, uint64_t* __t2813t, uint16_t* __t2814t, uint16_t* __t2815t, char** __t2816t, uint64_t* __t2817t, uint16_t* __t2818t, uint16_t* __t2819t, uint64_t* __t2820t) {
  char* buf__unsafe_ptr=*__t2812t;
  uint64_t buf__unsafe_size=*__t2813t;
  uint16_t buf__unsafe_offset=*__t2814t;
  uint16_t buf__unsafe_align=*__t2815t;
  uint64_t __t835t=0;
  char* __t836t__buf__unsafe_ptr=0;
  uint64_t __t836t__buf__unsafe_size=0;
  uint16_t __t836t__buf__unsafe_offset=0;
  uint16_t __t836t__buf__unsafe_align=0;
  uint64_t __t836t__pos=0;
  __t835t=0;
  arena__t831t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t835t,&__t836t__buf__unsafe_ptr,&__t836t__buf__unsafe_size,&__t836t__buf__unsafe_offset,&__t836t__buf__unsafe_align,&__t836t__pos);
  goto __t_return;
  __t_return:
  *__t2812t=buf__unsafe_ptr;
  *__t2813t=buf__unsafe_size;
  *__t2814t=buf__unsafe_offset;
  *__t2815t=buf__unsafe_align;
  *__t2816t=__t836t__buf__unsafe_ptr;
  *__t2817t=__t836t__buf__unsafe_size;
  *__t2818t=__t836t__buf__unsafe_offset;
  *__t2819t=__t836t__buf__unsafe_align;
  *__t2820t=__t836t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t947t(char** __t2821t, uint64_t* __t2822t, uint16_t* __t2823t, uint16_t* __t2824t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2821t=unsafe_ptr;
  *__t2822t=unsafe_size;
  *__t2823t=unsafe_offset;
  *__t2824t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2825t) {
  *__t2825t=to;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2826t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2826t=z;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2827t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2827t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2828t) {
  *__t2828t=to;
}

static inline __attribute__((always_inline)) void add__t672t(char* allocated, uint64_t offset, char** __t2829t) {
  char* element=0;
  char* __t673t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t673t__);
  goto __t_return;
  __t_return:
  *__t2829t=__t673t__;
}

static inline __attribute__((always_inline)) int get__t819t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2830t) {
  char __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  char* __t825t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t820t__);
  if(__t820t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t674t(buffer__unsafe_align,&__t821t__);
  mul__t207t(i,__t821t__,&__t822t__);
  nat__t674t(buffer__unsafe_offset,&__t823t__);
  add__t183t(__t822t__,__t823t__,&__t824t__);
  add__t672t(buffer__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2830t=__t825t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t969t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2831t, uint64_t* __t2832t, uint64_t* __t2833t, char* __t2834t) {
  goto __t_return;
  __t_return:
  *__t2831t=unsafe_ptr;
  *__t2832t=dat__pos;
  *__t2833t=dat__length;
  *__t2834t=dat__first;
}

static inline __attribute__((always_inline)) int str__t973t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2835t, uint64_t* __t2836t, uint64_t* __t2837t, char* __t2838t) {
  char* unsafe_ptr=0;
  uint64_t __t974t__=0;
  uint64_t __t975t=0;
  char __t976t__=0;
  uint64_t __t977t__=0;
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__unsafe_ptr=0;
  uint64_t __t980t__dat__pos=0;
  uint64_t __t980t__dat__length=0;
  char __t980t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t674t(buf__unsafe_align,&__t974t__);
  __t975t=1;
  neq__t152t(__t974t__,__t975t,&__t976t__);
  if(__t976t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t674t(buf__unsafe_offset,&__t977t__);
  __t978t=0;
  neq__t152t(__t977t__,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t969t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t980t__unsafe_ptr,&__t980t__dat__pos,&__t980t__dat__length,&__t980t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2835t=__t980t__unsafe_ptr;
  *__t2836t=__t980t__dat__pos;
  *__t2837t=__t980t__dat__length;
  *__t2838t=__t980t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1007t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2839t, uint64_t* __t2840t, uint64_t* __t2841t, char* __t2842t) {
  uint64_t __t1008t=0;
  char __t1009t__=0;
  char* __t1011t__=0;
  char __t1012t__value=0;
  char first=0;
  char* __t1013t__unsafe_ptr=0;
  uint64_t __t1013t__dat__pos=0;
  uint64_t __t1013t__dat__length=0;
  char __t1013t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1008t=0;
  neq__t152t(length,__t1008t,&__t1009t__);
  if(__t1009t__){
  __t_errcode=get__t819t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1011t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1011t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1012t__value,__t1011t__,1);
  first=__t1012t__value;
  }
  __t_errcode=str__t973t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1013t__unsafe_ptr,&__t1013t__dat__pos,&__t1013t__dat__length,&__t1013t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2839t=__t1013t__unsafe_ptr;
  *__t2840t=__t1013t__dat__pos;
  *__t2841t=__t1013t__dat__length;
  *__t2842t=__t1013t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1029t(const char* c, char** __t2843t, uint64_t* __t2844t, uint64_t* __t2845t, char* __t2846t) {
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__unsafe_size=0;
  uint16_t __t1030t__unsafe_offset=0;
  uint16_t __t1030t__unsafe_align=0;
  char* __t1031t__unsafe_ptr=0;
  uint64_t __t1031t__unsafe_size=0;
  uint16_t __t1031t__unsafe_offset=0;
  uint16_t __t1031t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1032t__=0;
  uint64_t length=0;
  uint64_t __t1033t=0;
  uint64_t __t1034t__=0;
  uint64_t __t1035t=0;
  char* __t1037t__unsafe_ptr=0;
  uint64_t __t1037t__dat__pos=0;
  uint64_t __t1037t__dat__length=0;
  char __t1037t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1030t__unsafe_ptr,&__t1030t__unsafe_size,&__t1030t__unsafe_offset,&__t1030t__unsafe_align);
  __t1031t__unsafe_ptr=__t1030t__unsafe_ptr;
  __t1031t__unsafe_size=__t1030t__unsafe_size;
  __t1031t__unsafe_offset=__t1030t__unsafe_offset;
  __t1031t__unsafe_align=__t1030t__unsafe_align;
  buf__unsafe_ptr=__t1031t__unsafe_ptr;
  buf__unsafe_size=__t1031t__unsafe_size;
  buf__unsafe_offset=__t1031t__unsafe_offset;
  buf__unsafe_align=__t1031t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1032t__);
  buf__unsafe_ptr=__t1032t__;
  if(c){
  length=strlen(c);
  }
  __t1033t=1;
  add__t183t(length,__t1033t,&__t1034t__);
  buf__unsafe_size=__t1034t__;
  __t1035t=0;
  __t_errcode=str__t1007t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1035t,length,&__t1037t__unsafe_ptr,&__t1037t__dat__pos,&__t1037t__dat__length,&__t1037t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2843t=__t1037t__unsafe_ptr;
  *__t2844t=__t1037t__dat__pos;
  *__t2845t=__t1037t__dat__length;
  *__t2846t=__t1037t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1038t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2847t) {
  goto __t_return;
  __t_return:
  *__t2847t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t826t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2848t) {
  goto __t_return;
  __t_return:
  *__t2848t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t284t(uint64_t x, uint64_t y, char* __t2849t) {
  int __t285t__=0;
  char z=0;
  is_different__t103t(x,y,&__t285t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2849t=z;
}

static inline __attribute__((always_inline)) void allocated__t837t(char** __t2850t, uint64_t* __t2851t, uint16_t* __t2852t, uint16_t* __t2853t, uint64_t pos, char** __t2854t, uint64_t* __t2855t, uint16_t* __t2856t, uint16_t* __t2857t, uint64_t* __t2858t) {
  char* buf__unsafe_ptr=*__t2850t;
  uint64_t buf__unsafe_size=*__t2851t;
  uint16_t buf__unsafe_offset=*__t2852t;
  uint16_t buf__unsafe_align=*__t2853t;
  goto __t_return;
  __t_return:
  *__t2850t=buf__unsafe_ptr;
  *__t2851t=buf__unsafe_size;
  *__t2852t=buf__unsafe_offset;
  *__t2853t=buf__unsafe_align;
  *__t2854t=buf__unsafe_ptr;
  *__t2855t=buf__unsafe_size;
  *__t2856t=buf__unsafe_offset;
  *__t2857t=buf__unsafe_align;
  *__t2858t=pos;
}

static inline __attribute__((always_inline)) int alloc__t869t(char** __t2859t, uint64_t* __t2860t, uint16_t* __t2861t, uint16_t* __t2862t, uint64_t* __t2863t, uint64_t length, char** __t2864t, uint64_t* __t2865t, uint16_t* __t2866t, uint16_t* __t2867t, uint64_t* __t2868t) {
  char* allocator__buf__unsafe_ptr=*__t2859t;
  uint64_t allocator__buf__unsafe_size=*__t2860t;
  uint16_t allocator__buf__unsafe_offset=*__t2861t;
  uint16_t allocator__buf__unsafe_align=*__t2862t;
  uint64_t allocator__pos=*__t2863t;
  int __t870t=0;
  uint64_t __t871t__=0;
  uint64_t next_pos=0;
  uint64_t __t872t__=0;
  char __t873t__=0;
  uint64_t __t874t=0;
  uint64_t __t875t__=0;
  uint64_t pos=0;
  char* __t876t__buf__unsafe_ptr=0;
  uint64_t __t876t__buf__unsafe_size=0;
  uint16_t __t876t__buf__unsafe_offset=0;
  uint16_t __t876t__buf__unsafe_align=0;
  uint64_t __t876t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t183t(allocator__pos,length,&__t871t__);
  next_pos=__t871t__;
  len__t826t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t872t__);
  gt__t284t(next_pos,__t872t__,&__t873t__);
  if(__t873t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t874t=0;
  add__t183t(allocator__pos,__t874t,&__t875t__);
  pos=__t875t__;
  allocator__pos=next_pos;
  allocated__t837t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t876t__buf__unsafe_ptr,&__t876t__buf__unsafe_size,&__t876t__buf__unsafe_offset,&__t876t__buf__unsafe_align,&__t876t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2859t=allocator__buf__unsafe_ptr;
  *__t2860t=allocator__buf__unsafe_size;
  *__t2861t=allocator__buf__unsafe_offset;
  *__t2862t=allocator__buf__unsafe_align;
  *__t2863t=allocator__pos;
  *__t2864t=__t876t__buf__unsafe_ptr;
  *__t2865t=__t876t__buf__unsafe_size;
  *__t2866t=__t876t__buf__unsafe_offset;
  *__t2867t=__t876t__buf__unsafe_align;
  *__t2868t=__t876t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1060t(char** __t2869t, uint64_t* __t2870t, uint16_t* __t2871t, uint16_t* __t2872t, uint64_t* __t2873t, const char* _other, char** __t2874t, uint64_t* __t2875t, uint64_t* __t2876t, char* __t2877t) {
  char* CHARS__buf__unsafe_ptr=*__t2869t;
  uint64_t CHARS__buf__unsafe_size=*__t2870t;
  uint16_t CHARS__buf__unsafe_offset=*__t2871t;
  uint16_t CHARS__buf__unsafe_align=*__t2872t;
  uint64_t CHARS__pos=*__t2873t;
  char* __t1061t__unsafe_ptr=0;
  uint64_t __t1061t__dat__pos=0;
  uint64_t __t1061t__dat__length=0;
  char __t1061t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1062t__=0;
  char* __t1063t__buf__unsafe_ptr=0;
  uint64_t __t1063t__buf__unsafe_size=0;
  uint16_t __t1063t__buf__unsafe_offset=0;
  uint16_t __t1063t__buf__unsafe_align=0;
  uint64_t __t1063t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1064t__unsafe_ptr=0;
  uint64_t __t1064t__dat__pos=0;
  uint64_t __t1064t__dat__length=0;
  char __t1064t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1029t(_other,&__t1061t__unsafe_ptr,&__t1061t__dat__pos,&__t1061t__dat__length,&__t1061t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1061t__unsafe_ptr;
  other__dat__pos=__t1061t__dat__pos;
  other__dat__length=__t1061t__dat__length;
  other__dat__first=__t1061t__dat__first;
  len__t1038t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1062t__);
  __t_errcode=alloc__t869t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1062t__,&__t1063t__buf__unsafe_ptr,&__t1063t__buf__unsafe_size,&__t1063t__buf__unsafe_offset,&__t1063t__buf__unsafe_align,&__t1063t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1063t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1063t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1063t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1063t__buf__unsafe_align;
  surface__pos=__t1063t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t973t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1064t__unsafe_ptr,&__t1064t__dat__pos,&__t1064t__dat__length,&__t1064t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2869t=CHARS__buf__unsafe_ptr;
  *__t2870t=CHARS__buf__unsafe_size;
  *__t2871t=CHARS__buf__unsafe_offset;
  *__t2872t=CHARS__buf__unsafe_align;
  *__t2873t=CHARS__pos;
  *__t2874t=__t1064t__unsafe_ptr;
  *__t2875t=__t1064t__dat__pos;
  *__t2876t=__t1064t__dat__length;
  *__t2877t=__t1064t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2624t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2625t(const char* path, char** __t2878t) {
  char* unsafe_ptr=0;
  char __t2627t__=0;
  char __t2628t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t600t(unsafe_ptr,&__t2627t__);
  not__t36t(__t2627t__,&__t2628t__);
  if(__t2628t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2624t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2878t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2636t(char** __t2879t, const char** __t2880t) {
  char* f__unsafe_ptr=*__t2879t;
  char __t2637t__=0;
  char __t2638t__=0;
  char* de=0;
  char __t2639t__=0;
  char __t2640t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t600t(f__unsafe_ptr,&__t2637t__);
  not__t36t(__t2637t__,&__t2638t__);
  if(__t2638t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t600t(de,&__t2639t__);
  not__t36t(__t2639t__,&__t2640t__);
  if(__t2640t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2879t=f__unsafe_ptr;
  *__t2880t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2641t(char** __t2881t, char** __t2882t, uint64_t* __t2883t, uint64_t* __t2884t, char* __t2885t) {
  char* f__unsafe_ptr=*__t2881t;
  const char* __t2642t__=0;
  char* __t2643t__unsafe_ptr=0;
  uint64_t __t2643t__dat__pos=0;
  uint64_t __t2643t__dat__length=0;
  char __t2643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2636t(&f__unsafe_ptr,&__t2642t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1029t(__t2642t__,&__t2643t__unsafe_ptr,&__t2643t__dat__pos,&__t2643t__dat__length,&__t2643t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2881t=f__unsafe_ptr;
  *__t2882t=__t2643t__unsafe_ptr;
  *__t2883t=__t2643t__dat__pos;
  *__t2884t=__t2643t__dat__length;
  *__t2885t=__t2643t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2707t(char** __t2886t, uint64_t __t_anon1, char** __t2887t, uint64_t* __t2888t, uint64_t* __t2889t, char* __t2890t) {
  char* data__unsafe_ptr=*__t2886t;
  char* __t2708t__unsafe_ptr=0;
  uint64_t __t2708t__dat__pos=0;
  uint64_t __t2708t__dat__length=0;
  char __t2708t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2641t(&data__unsafe_ptr,&__t2708t__unsafe_ptr,&__t2708t__dat__pos,&__t2708t__dat__length,&__t2708t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2886t=data__unsafe_ptr;
  *__t2887t=__t2708t__unsafe_ptr;
  *__t2888t=__t2708t__dat__pos;
  *__t2889t=__t2708t__dat__length;
  *__t2890t=__t2708t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1006t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2891t, uint64_t* __t2892t, uint64_t* __t2893t, char* __t2894t) {
  goto __t_return;
  __t_return:
  *__t2891t=other__unsafe_ptr;
  *__t2892t=other__dat__pos;
  *__t2893t=other__dat__length;
  *__t2894t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t260t(uint64_t x, uint64_t y, char* __t2895t) {
  int __t261t__=0;
  char z=0;
  is_different__t103t(x,y,&__t261t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2895t=z;
}

static inline __attribute__((always_inline)) int sub__t360t(uint64_t x, uint64_t y, uint64_t* __t2896t) {
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
  *__t2896t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1165t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2897t) {
  uint64_t __t1166t__=0;
  char* __t1167t__=0;
  add__t183t(s__dat__pos,i,&__t1166t__);
  add__t672t(s__unsafe_ptr,__t1166t__,&__t1167t__);
  goto __t_return;
  __t_return:
  *__t2897t=__t1167t__;
}

int slice__t1188t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2898t, uint64_t* __t2899t, uint64_t* __t2900t, char* __t2901t) {
  char* __t1189t__unsafe_ptr=0;
  uint64_t __t1189t__dat__pos=0;
  uint64_t __t1189t__dat__length=0;
  char __t1189t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1190t__=0;
  char* __t1191t__unsafe_ptr=0;
  uint64_t __t1191t__dat__pos=0;
  uint64_t __t1191t__dat__length=0;
  char __t1191t__dat__first=0;
  char __t1192t__=0;
  char __t1193t__=0;
  char __t1194t=0;
  char __t1195t__=0;
  uint64_t __t1196t__=0;
  uint64_t new_length=0;
  uint64_t __t1197t=0;
  char __t1198t__=0;
  char new_first=0;
  char* __t1200t__=0;
  char __t1201t__value=0;
  uint64_t __t1202t__=0;
  char* __t1203t__unsafe_ptr=0;
  uint64_t __t1203t__dat__pos=0;
  uint64_t __t1203t__dat__length=0;
  char __t1203t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1006t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1189t__unsafe_ptr,&__t1189t__dat__pos,&__t1189t__dat__length,&__t1189t__dat__first);
  s__unsafe_ptr=__t1189t__unsafe_ptr;
  s__dat__pos=__t1189t__dat__pos;
  s__dat__length=__t1189t__dat__length;
  s__dat__first=__t1189t__dat__first;
  eq__t128t(from,to,&__t1190t__);
  if(__t1190t__){
  __t_errcode=str__t1029t(__t383t,&__t1191t__unsafe_ptr,&__t1191t__dat__pos,&__t1191t__dat__length,&__t1191t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t284t(from,to,&__t1192t__);
  if(!__t1192t__){
  gt__t284t(to,s__dat__length,&__t1193t__);
  __t1194t=__t1193t__;
  }
  else{
  __t1194t=0;
  not__t36t(__t1194t,&__t1195t__);
  __t1194t=__t1195t__;
  }
  if(__t1194t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t360t(to,from,&__t1196t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1196t__;
  __t1197t=0;
  neq__t152t(from,__t1197t,&__t1198t__);
  if(__t1198t__){
  get__t1165t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1200t__);
  if(!__t1200t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1201t__value,__t1200t__,1);
  new_first=__t1201t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t183t(s__dat__pos,from,&__t1202t__);
  str__t969t(s__unsafe_ptr,__t1202t__,new_length,new_first,&__t1203t__unsafe_ptr,&__t1203t__dat__pos,&__t1203t__dat__length,&__t1203t__dat__first);
  __t1191t__unsafe_ptr=__t1203t__unsafe_ptr;
  __t1191t__dat__pos=__t1203t__dat__pos;
  __t1191t__dat__length=__t1203t__dat__length;
  __t1191t__dat__first=__t1203t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2898t=__t1191t__unsafe_ptr;
  *__t2899t=__t1191t__dat__pos;
  *__t2900t=__t1191t__dat__length;
  *__t2901t=__t1191t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1042t(char x, char y, char* __t2902t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2902t=z;
}

static inline __attribute__((always_inline)) void eq__t1107t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2903t) {
  uint64_t __t1108t__=0;
  uint64_t n=0;
  uint64_t __t1109t__=0;
  char __t1110t__=0;
  char __t1111t=0;
  char __t1112t__=0;
  char __t1113t=0;
  char z=0;
  len__t1038t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1108t__);
  n=__t1108t__;
  len__t1038t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1109t__);
  neq__t152t(n,__t1109t__,&__t1110t__);
  if(__t1110t__){
  __t1111t=0;
  goto __t_return;
  }
  neq__t1042t(x__dat__first,y__dat__first,&__t1112t__);
  if(__t1112t__){
  __t1113t=0;
  __t1111t=__t1113t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1111t=z;
  goto __t_return;
  __t_return:
  *__t2903t=__t1111t;
}

static inline __attribute__((always_inline)) int ends_with__t1268t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2904t) {
  char* __t1269t__unsafe_ptr=0;
  uint64_t __t1269t__dat__pos=0;
  uint64_t __t1269t__dat__length=0;
  char __t1269t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1270t__unsafe_ptr=0;
  uint64_t __t1270t__dat__pos=0;
  uint64_t __t1270t__dat__length=0;
  char __t1270t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1271t__=0;
  char __t1272t=0;
  uint64_t __t1273t__=0;
  uint64_t n=0;
  uint64_t __t1274t__=0;
  uint64_t __t1275t__=0;
  char* __t1276t__unsafe_ptr=0;
  uint64_t __t1276t__dat__pos=0;
  uint64_t __t1276t__dat__length=0;
  char __t1276t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1277t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1006t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1269t__unsafe_ptr,&__t1269t__dat__pos,&__t1269t__dat__length,&__t1269t__dat__first);
  stack__unsafe_ptr=__t1269t__unsafe_ptr;
  stack__dat__pos=__t1269t__dat__pos;
  stack__dat__length=__t1269t__dat__length;
  stack__dat__first=__t1269t__dat__first;
  __t_errcode=str__t1029t(_needle,&__t1270t__unsafe_ptr,&__t1270t__dat__pos,&__t1270t__dat__length,&__t1270t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1270t__unsafe_ptr;
  needle__dat__pos=__t1270t__dat__pos;
  needle__dat__length=__t1270t__dat__length;
  needle__dat__first=__t1270t__dat__first;
  lt__t260t(stack__dat__length,needle__dat__length,&__t1271t__);
  if(__t1271t__){
  __t1272t=0;
  goto __t_return;
  }
  len__t1038t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1273t__);
  n=__t1273t__;
  len__t1038t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1274t__);
  __t_errcode=sub__t360t(n,__t1274t__,&__t1275t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1188t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1275t__,n,&__t1276t__unsafe_ptr,&__t1276t__dat__pos,&__t1276t__dat__length,&__t1276t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1276t__unsafe_ptr;
  ret__dat__pos=__t1276t__dat__pos;
  ret__dat__length=__t1276t__dat__length;
  ret__dat__first=__t1276t__dat__first;
  eq__t1107t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1277t__);
  __t1272t=__t1277t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2904t=__t1272t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1139t(char** __t2905t, uint64_t* __t2906t, uint16_t* __t2907t, uint16_t* __t2908t, uint64_t* __t2909t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2910t, uint64_t* __t2911t, uint64_t* __t2912t, char* __t2913t) {
  char* CHARS__buf__unsafe_ptr=*__t2905t;
  uint64_t CHARS__buf__unsafe_size=*__t2906t;
  uint16_t CHARS__buf__unsafe_offset=*__t2907t;
  uint16_t CHARS__buf__unsafe_align=*__t2908t;
  uint64_t CHARS__pos=*__t2909t;
  char* __t1140t__unsafe_ptr=0;
  uint64_t __t1140t__dat__pos=0;
  uint64_t __t1140t__dat__length=0;
  char __t1140t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1141t__=0;
  uint64_t __t1142t__=0;
  uint64_t null_pos=0;
  uint64_t __t1143t=0;
  uint64_t __t1144t__=0;
  uint64_t next_pos=0;
  uint64_t __t1145t__=0;
  char __t1146t__=0;
  char* endpos=0;
  uint64_t __t1147t=0;
  uint64_t __t1148t__=0;
  uint64_t prev_pos=0;
  char* __t1149t__unsafe_ptr=0;
  uint64_t __t1149t__dat__pos=0;
  uint64_t __t1149t__dat__length=0;
  char __t1149t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1006t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1140t__unsafe_ptr,&__t1140t__dat__pos,&__t1140t__dat__length,&__t1140t__dat__first);
  other__unsafe_ptr=__t1140t__unsafe_ptr;
  other__dat__pos=__t1140t__dat__pos;
  other__dat__length=__t1140t__dat__length;
  other__dat__first=__t1140t__dat__first;
  len__t1038t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1141t__);
  add__t183t(CHARS__pos,__t1141t__,&__t1142t__);
  null_pos=__t1142t__;
  __t1143t=1;
  add__t183t(null_pos,__t1143t,&__t1144t__);
  next_pos=__t1144t__;
  len__t826t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1145t__);
  gt__t284t(next_pos,__t1145t__,&__t1146t__);
  if(__t1146t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1147t=0;
  add__t183t(CHARS__pos,__t1147t,&__t1148t__);
  prev_pos=__t1148t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t973t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1149t__unsafe_ptr,&__t1149t__dat__pos,&__t1149t__dat__length,&__t1149t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2905t=CHARS__buf__unsafe_ptr;
  *__t2906t=CHARS__buf__unsafe_size;
  *__t2907t=CHARS__buf__unsafe_offset;
  *__t2908t=CHARS__buf__unsafe_align;
  *__t2909t=CHARS__pos;
  *__t2910t=__t1149t__unsafe_ptr;
  *__t2911t=__t1149t__dat__pos;
  *__t2912t=__t1149t__dat__length;
  *__t2913t=__t1149t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1104t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2914t) {
  uint64_t __t1105t__=0;
  add__t183t(s__dat__pos,s__dat__length,&__t1105t__);
  goto __t_return;
  __t_return:
  *__t2914t=__t1105t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t2915t) {
  int value=0;
  *__t2915t=value;
}

static inline __attribute__((always_inline)) void not__t47t(int __t_anon0, int* __t2916t) {
  int __t48t__=0;
  true__t15t(&__t48t__);
  goto __t_return;
  __t_return:
  *__t2916t=__t48t__;
}

static inline __attribute__((always_inline)) int str__t981t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2917t, uint64_t* __t2918t, uint64_t* __t2919t, char* __t2920t) {
  int __t982t=0;
  int __t983t=0;
  int __t984t__=0;
  uint64_t __t985t__=0;
  char __t986t__=0;
  uint64_t __t987t=0;
  uint64_t __t988t=0;
  char* __t990t__=0;
  char __t991t__value=0;
  char* __t992t__unsafe_ptr=0;
  uint64_t __t992t__dat__pos=0;
  uint64_t __t992t__dat__length=0;
  char __t992t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t47t(__t983t,&__t984t__);
  len__t826t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t985t__);
  gt__t284t(length,__t985t__,&__t986t__);
  if(__t986t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t987t=0;
  __t988t=0;
  __t_errcode=get__t819t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t988t,&__t990t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t990t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t991t__value,__t990t__,1);
  __t_errcode=str__t973t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t987t,length,__t991t__value,&__t992t__unsafe_ptr,&__t992t__dat__pos,&__t992t__dat__length,&__t992t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2917t=__t992t__unsafe_ptr;
  *__t2918t=__t992t__dat__pos;
  *__t2919t=__t992t__dat__length;
  *__t2920t=__t992t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1163t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1164t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t827t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1085t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2921t, uint64_t* __t2922t, uint64_t* __t2923t, char* __t2924t) {
  char* __t1086t__unsafe_ptr=0;
  uint64_t __t1086t__unsafe_size=0;
  uint16_t __t1086t__unsafe_offset=0;
  uint16_t __t1086t__unsafe_align=0;
  uint64_t __t1087t=0;
  uint64_t __t1088t__=0;
  uint64_t __t1089t__=0;
  char* __t1090t__unsafe_ptr=0;
  uint64_t __t1090t__unsafe_size=0;
  uint16_t __t1090t__unsafe_offset=0;
  uint16_t __t1090t__unsafe_align=0;
  char __t1091t____t701t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1092t=0;
  char* __t1093t__unsafe_ptr=0;
  uint64_t __t1093t__dat__pos=0;
  uint64_t __t1093t__dat__length=0;
  char __t1093t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1086t__unsafe_ptr,&__t1086t__unsafe_size,&__t1086t__unsafe_offset,&__t1086t__unsafe_align);
  __t1087t=1;
  len__t1038t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1088t__);
  add__t183t(__t1087t,__t1088t__,&__t1089t__);
  __t_errcode=alloc__t699t(&__t1086t__unsafe_ptr,&__t1086t__unsafe_size,&__t1086t__unsafe_offset,&__t1086t__unsafe_align,__t1089t__,&__t1090t__unsafe_ptr,&__t1090t__unsafe_size,&__t1090t__unsafe_offset,&__t1090t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1090t__unsafe_ptr;
  buf__unsafe_size=__t1090t__unsafe_size;
  buf__unsafe_offset=__t1090t__unsafe_offset;
  buf__unsafe_align=__t1090t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1092t=0;
  __t_errcode=str__t973t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1092t,other__dat__length,other__dat__first,&__t1093t__unsafe_ptr,&__t1093t__dat__pos,&__t1093t__dat__length,&__t1093t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t600t(__t1093t__unsafe_ptr,&__t1091t____t701t__);
  if(__t1091t____t701t__){
  free__t670t(&__t1093t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2921t=__t1093t__unsafe_ptr;
  *__t2922t=__t1093t__dat__pos;
  *__t2923t=__t1093t__dat__length;
  *__t2924t=__t1093t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1094t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2925t, char** __t2926t, uint64_t* __t2927t, uint64_t* __t2928t, char* __t2929t) {
  char* __t1096t__unsafe_ptr=0;
  uint64_t __t1096t__dat__pos=0;
  uint64_t __t1096t__dat__length=0;
  char __t1096t__dat__first=0;
  char __t1097t____t1091t____t701t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1098t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t827t();
  __t_errcode=copy_null_terminated__t1085t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1096t__unsafe_ptr,&__t1096t__dat__pos,&__t1096t__dat__length,&__t1096t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1096t__unsafe_ptr;
  str__dat__pos=__t1096t__dat__pos;
  str__dat__length=__t1096t__dat__length;
  str__dat__first=__t1096t__dat__first;
  add__t672t(str__unsafe_ptr,str__dat__pos,&__t1098t__);
  _ret=__t1098t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t600t(str__unsafe_ptr,&__t1097t____t1091t____t701t__);
  if(__t1097t____t1091t____t701t__){
  free__t670t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2925t=cstr;
  *__t2926t=str__unsafe_ptr;
  *__t2927t=str__dat__pos;
  *__t2928t=str__dat__length;
  *__t2929t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1102t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2930t) {
  goto __t_return;
  __t_return:
  *__t2930t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2156t(const char* cmd, char** __t2931t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2931t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2155t(char* unsafe_ptr, int64_t* __t2932t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2932t=status;
}

static inline __attribute__((always_inline)) void int__t580t(uint64_t x, int64_t* __t2933t) {
  int __t581t=0;
  int __t582t=0;
  int __t583t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2933t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t2934t) {
  int __t92t=0;
  int __t93t__=0;
  not__t45t(__t92t,&__t93t__);
  goto __t_return;
  __t_return:
  *__t2934t=__t93t__;
}

static inline __attribute__((always_inline)) void neq__t141t(int64_t x, int64_t y, char* __t2935t) {
  int __t142t__=0;
  char z=0;
  is_different__t91t(x,y,&__t142t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2935t=z;
}

static inline __attribute__((always_inline)) int open__t2157t(const char* cmd, char** __t2936t) {
  char* __t2158t__=0;
  char* unsafe_ptr=0;
  char __t2159t__=0;
  char __t2160t__=0;
  char __t2161t__=0;
  int64_t __t2162t__=0;
  int64_t status=0;
  uint64_t __t2163t=0;
  int64_t __t2164t__=0;
  char __t2165t__=0;
  char __t2166t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2156t(cmd,&__t2158t__);
  unsafe_ptr=__t2158t__;
  exists__t600t(unsafe_ptr,&__t2159t__);
  not__t36t(__t2159t__,&__t2160t__);
  if(__t2160t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t600t(unsafe_ptr,&__t2161t__);
  if(__t2161t__){
  pclose__t2155t(unsafe_ptr,&__t2162t__);
  status=__t2162t__;
  unsafe_ptr=0;
  __t2163t=0;
  int__t580t(__t2163t,&__t2164t__);
  neq__t141t(status,__t2164t__,&__t2165t__);
  if(__t2165t__){
  __t_complain=37;
  __t2166t=__t2166t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2936t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2168t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2937t) {
  const char* __t2169t__cstr=0;
  char* __t2169t__str__unsafe_ptr=0;
  uint64_t __t2169t__str__dat__pos=0;
  uint64_t __t2169t__str__dat__length=0;
  char __t2169t__str__dat__first=0;
  char __t2170t____t1097t____t1091t____t701t__=0;
  const char* __t2171t__=0;
  char* __t2172t__unsafe_ptr=0;
  char __t2173t____t2161t__=0;
  int64_t __t2173t____t2162t__=0;
  int64_t __t2173t__status=0;
  uint64_t __t2173t____t2163t=0;
  int64_t __t2173t____t2164t__=0;
  char __t2173t____t2165t__=0;
  char __t2173t____t2166t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1094t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2169t__cstr,&__t2169t__str__unsafe_ptr,&__t2169t__str__dat__pos,&__t2169t__str__dat__length,&__t2169t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1102t(__t2169t__cstr,__t2169t__str__unsafe_ptr,__t2169t__str__dat__pos,__t2169t__str__dat__length,__t2169t__str__dat__first,&__t2171t__);
  __t_errcode=open__t2157t(__t2171t__,&__t2172t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t600t(__t2172t__unsafe_ptr,&__t2173t____t2161t__);
  if(__t2173t____t2161t__){
  pclose__t2155t(__t2172t__unsafe_ptr,&__t2173t____t2162t__);
  __t2173t__status=__t2173t____t2162t__;
  __t2172t__unsafe_ptr=0;
  __t2173t____t2163t=0;
  int__t580t(__t2173t____t2163t,&__t2173t____t2164t__);
  neq__t141t(__t2173t__status,__t2173t____t2164t__,&__t2173t____t2165t__);
  if(__t2173t____t2165t__){
  __t_complain=37;
  __t2173t____t2166t=__t2173t____t2166t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2937t=__t2172t__unsafe_ptr;
  
  __t_skip_returns:exists__t600t(__t2169t__str__unsafe_ptr,&__t2170t____t1097t____t1091t____t701t__);
  if(__t2170t____t1097t____t1091t____t701t__){
  free__t670t(&__t2169t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2135t(int64_t value, const char** __t2938t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2938t=ret;
}

static inline __attribute__((always_inline)) void print__t389t(const char* value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2742t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2743t__unsafe_ptr=0;
  char __t2744t____t2173t____t2161t__=0;
  int64_t __t2744t____t2173t____t2162t__=0;
  int64_t __t2744t____t2173t__status=0;
  uint64_t __t2744t____t2173t____t2163t=0;
  int64_t __t2744t____t2173t____t2164t__=0;
  char __t2744t____t2173t____t2165t__=0;
  char __t2744t____t2173t____t2166t=0;
  char* proc__unsafe_ptr=0;
  char __t2745t=0;
  int64_t __t2746t=0;
  int64_t error=0;
  const char* __t2747t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2168t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2743t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2743t__unsafe_ptr;
  exists__t600t(__t2743t__unsafe_ptr,&__t2744t____t2173t____t2161t__);
  if(__t2744t____t2173t____t2161t__){
  pclose__t2155t(__t2743t__unsafe_ptr,&__t2744t____t2173t____t2162t__);
  __t2744t____t2173t__status=__t2744t____t2173t____t2162t__;
  __t2743t__unsafe_ptr=0;
  __t2744t____t2173t____t2163t=0;
  int__t580t(__t2744t____t2173t____t2163t,&__t2744t____t2173t____t2164t__);
  neq__t141t(__t2744t____t2173t__status,__t2744t____t2173t____t2164t__,&__t2744t____t2173t____t2165t__);
  if(__t2744t____t2173t____t2165t__){
  __t_complain=37;
  __t2744t____t2173t____t2166t=__t2744t____t2173t____t2166t==0;
  }
  }
  __t2746t=__t_complain;
  __t2745t=(__t_complain==0);
  __t_complain=0;
  error=__t2746t;
  __t2745t=__t2745t==0;
  if(__t2745t){
  cstr__t2135t(error,&__t2747t__);
  print__t389t(__t2747t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2749t() {
  char* __t2754t__unsafe_ptr=0;
  uint64_t __t2754t__unsafe_size=0;
  uint16_t __t2754t__unsafe_offset=0;
  uint16_t __t2754t__unsafe_align=0;
  uint64_t __t2755t=0;
  char* __t2756t__unsafe_ptr=0;
  uint64_t __t2756t__unsafe_size=0;
  uint16_t __t2756t__unsafe_offset=0;
  uint16_t __t2756t__unsafe_align=0;
  char __t2757t____t701t__=0;
  char* __t2758t__buf__unsafe_ptr=0;
  uint64_t __t2758t__buf__unsafe_size=0;
  uint16_t __t2758t__buf__unsafe_offset=0;
  uint16_t __t2758t__buf__unsafe_align=0;
  uint64_t __t2758t__pos=0;
  char* __t2759t__buf__unsafe_ptr=0;
  uint64_t __t2759t__buf__unsafe_size=0;
  uint16_t __t2759t__buf__unsafe_offset=0;
  uint16_t __t2759t__buf__unsafe_align=0;
  uint64_t __t2759t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2762t__unsafe_ptr=0;
  uint64_t __t2762t__dat__pos=0;
  uint64_t __t2762t__dat__length=0;
  char __t2762t__dat__first=0;
  char* __t2763t__unsafe_ptr=0;
  uint64_t __t2763t__dat__pos=0;
  uint64_t __t2763t__dat__length=0;
  char __t2763t__dat__first=0;
  char* __t2764t__unsafe_ptr=0;
  char* __t2766t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2767t=0;
  char __t2768t=0;
  char* __t2769t__unsafe_ptr=0;
  uint64_t __t2769t__dat__pos=0;
  uint64_t __t2769t__dat__length=0;
  char __t2769t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2771t__=0;
  char __t2772t__=0;
  char* __t2773t__buf__unsafe_ptr=0;
  uint64_t __t2773t__buf__unsafe_size=0;
  uint16_t __t2773t__buf__unsafe_offset=0;
  uint16_t __t2773t__buf__unsafe_align=0;
  uint64_t __t2773t__pos=0;
  char* __t2774t__unsafe_ptr=0;
  uint64_t __t2774t__dat__pos=0;
  uint64_t __t2774t__dat__length=0;
  char __t2774t__dat__first=0;
  char* __t2775t__unsafe_ptr=0;
  uint64_t __t2775t__dat__pos=0;
  uint64_t __t2775t__dat__length=0;
  char __t2775t__dat__first=0;
  uint64_t __t2776t__=0;
  char* __t2777t__unsafe_ptr=0;
  uint64_t __t2777t__dat__pos=0;
  uint64_t __t2777t__dat__length=0;
  char __t2777t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  char____t_buffer____buffer__t2752t(&__t2754t__unsafe_ptr,&__t2754t__unsafe_size,&__t2754t__unsafe_offset,&__t2754t__unsafe_align);
  __t2755t=256;
  __t_errcode=alloc__t699t(&__t2754t__unsafe_ptr,&__t2754t__unsafe_size,&__t2754t__unsafe_offset,&__t2754t__unsafe_align,__t2755t,&__t2756t__unsafe_ptr,&__t2756t__unsafe_size,&__t2756t__unsafe_offset,&__t2756t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t834t(&__t2756t__unsafe_ptr,&__t2756t__unsafe_size,&__t2756t__unsafe_offset,&__t2756t__unsafe_align,&__t2758t__buf__unsafe_ptr,&__t2758t__buf__unsafe_size,&__t2758t__buf__unsafe_offset,&__t2758t__buf__unsafe_align,&__t2758t__pos);
  __t2759t__buf__unsafe_ptr=__t2758t__buf__unsafe_ptr;
  __t2759t__buf__unsafe_size=__t2758t__buf__unsafe_size;
  __t2759t__buf__unsafe_offset=__t2758t__buf__unsafe_offset;
  __t2759t__buf__unsafe_align=__t2758t__buf__unsafe_align;
  __t2759t__pos=__t2758t__pos;
  CHARS__buf__unsafe_ptr=__t2759t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2759t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2759t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2759t__buf__unsafe_align;
  CHARS__pos=__t2759t__pos;
  path=__t2760t;
  __t_errcode=copy__t1060t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2761t,&__t2762t__unsafe_ptr,&__t2762t__dat__pos,&__t2762t__dat__length,&__t2762t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1060t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2763t__unsafe_ptr,&__t2763t__dat__pos,&__t2763t__dat__length,&__t2763t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2625t(path,&__t2764t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2766t__unsafe_ptr=__t2764t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2766t__unsafe_ptr;
  __t2767t=0-1;
  while(1){
  __t2767t=__t2767t+1;
  __t_complain=get__t2707t(&test_dir__unsafe_ptr,__t2767t,&__t2769t__unsafe_ptr,&__t2769t__dat__pos,&__t2769t__dat__length,&__t2769t__dat__first);
  __t2768t=__t_complain;
  entry__unsafe_ptr=__t2769t__unsafe_ptr;
  entry__dat__pos=__t2769t__dat__pos;
  entry__dat__length=__t2769t__dat__length;
  entry__dat__first=__t2769t__dat__first;
  __t2768t=__t2768t==0;
  if(!__t2768t){
  break;
  }
  __t_errcode=ends_with__t1268t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2770t,&__t2771t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t36t(__t2771t__,&__t2772t__);
  if(__t2772t__){
  continue;
  }
  __t2773t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2773t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2773t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2773t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2773t__pos=CHARS__pos;
  str__t1006t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2774t__unsafe_ptr,&__t2774t__dat__pos,&__t2774t__dat__length,&__t2774t__dat__first);
  __t_errcode=copy_null_terminated__t1139t(&__t2773t__buf__unsafe_ptr,&__t2773t__buf__unsafe_size,&__t2773t__buf__unsafe_offset,&__t2773t__buf__unsafe_align,&__t2773t__pos,__t2774t__unsafe_ptr,__t2774t__dat__pos,__t2774t__dat__length,__t2774t__dat__first,&__t2775t__unsafe_ptr,&__t2775t__dat__pos,&__t2775t__dat__length,&__t2775t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1104t(__t2775t__unsafe_ptr,__t2775t__dat__pos,__t2775t__dat__length,__t2775t__dat__first,&__t2776t__);
  __t_errcode=str__t981t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2776t__,&__t2777t__unsafe_ptr,&__t2777t__dat__pos,&__t2777t__dat__length,&__t2777t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2777t__unsafe_ptr;
  command__dat__pos=__t2777t__dat__pos;
  command__dat__length=__t2777t__dat__length;
  command__dat__first=__t2777t__dat__first;
  print__t1163t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2742t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2624t(__t2764t__unsafe_ptr);
  exists__t600t(__t2756t__unsafe_ptr,&__t2757t____t701t__);
  if(__t2757t____t701t__){
  free__t670t(&__t2756t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2749t();return 0;}