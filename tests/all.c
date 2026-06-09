#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t393t="\n";
const char* const __t2718t="./smoll --cleanup ";
const char* const __t385t="";
const char* const __t2717t="./tests/passing/";
const char* const __t2727t=".s";
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

static inline __attribute__((always_inline)) void console__t376t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2709t(char** __t2737t, uint64_t* __t2738t, uint16_t* __t2739t, uint16_t* __t2740t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2737t=unsafe_ptr;
  *__t2738t=unsafe_size;
  *__t2739t=unsafe_offset;
  *__t2740t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t602t(char* x, char* __t2741t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2741t=z;
}

static inline __attribute__((always_inline)) void free__t672t(char** __t2742t) {
  char* allocated=*__t2742t;
  if(allocated){
  free(allocated);
  }
  *__t2742t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2743t) {
  int value=0;
  *__t2743t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2744t) {
  int __t39t__=0;
  false__t10t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2744t=__t39t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2745t) {
  int __t106t=0;
  int __t107t__=0;
  not__t38t(__t106t,&__t107t__);
  goto __t_return;
  __t_return:
  *__t2745t=__t107t__;
}

static inline __attribute__((always_inline)) void eq__t130t(uint64_t x, uint64_t y, char* __t2746t) {
  int __t131t__=0;
  char z=0;
  is_different__t104t(x,y,&__t131t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2746t=z;
}

static inline __attribute__((always_inline)) void neq__t154t(uint64_t x, uint64_t y, char* __t2747t) {
  int __t155t__=0;
  char z=0;
  is_different__t104t(x,y,&__t155t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2747t=z;
}

static inline __attribute__((always_inline)) void nat__t676t(uint16_t x, uint64_t* __t2748t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2748t=value;
}

static inline __attribute__((always_inline)) void mul__t209t(uint64_t x, uint64_t y, uint64_t* __t2749t) {
  int __t210t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t210t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2749t=z;
}

static inline __attribute__((always_inline)) void zero__t673t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t29t(char value, char* __t2750t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2750t=z;
}

static inline __attribute__((always_inline)) int alloc__t665t(uint64_t bytes, char** __t2751t) {
  char* allocated=0;
  char __t666t__=0;
  char __t667t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t602t(allocated,&__t666t__);
  not__t29t(__t666t__,&__t667t__);
  if(__t667t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2751t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t701t(char** __t2752t, uint64_t* __t2753t, uint16_t* __t2754t, uint16_t* __t2755t, uint64_t size, char** __t2756t, uint64_t* __t2757t, uint16_t* __t2758t, uint16_t* __t2759t) {
  char* buffer__unsafe_ptr=*__t2752t;
  uint64_t buffer__unsafe_size=*__t2753t;
  uint16_t buffer__unsafe_offset=*__t2754t;
  uint16_t buffer__unsafe_align=*__t2755t;
  int __t702t=0;
  char __t703t__=0;
  char __t705t__=0;
  uint64_t __t706t=0;
  char __t707t__=0;
  uint64_t __t708t=0;
  uint64_t __t709t__=0;
  uint64_t __t710t__=0;
  uint64_t __t712t=0;
  char __t713t__=0;
  uint64_t __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t bytes=0;
  uint64_t __t716t=0;
  char __t717t__=0;
  char* __t718t__=0;
  int __t719t=0;
  uint64_t __t720t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t130t(buffer__unsafe_size,size,&__t705t__);
  if(__t705t__){
  __t706t=0;
  neq__t154t(size,__t706t,&__t707t__);
  if(__t707t__){
  __t708t=0;
  nat__t676t(buffer__unsafe_align,&__t709t__);
  mul__t209t(__t709t__,size,&__t710t__);
  zero__t673t(buffer__unsafe_ptr,__t708t,__t710t__);
  }
  goto __t_return;
  }
  __t712t=0;
  neq__t154t(buffer__unsafe_size,__t712t,&__t713t__);
  if(__t713t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t676t(buffer__unsafe_align,&__t714t__);
  mul__t209t(__t714t__,size,&__t715t__);
  bytes=__t715t__;
  __t716t=0;
  eq__t130t(bytes,__t716t,&__t717t__);
  if(__t717t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t665t(bytes,&__t718t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t720t=0;
  zero__t673t(__t718t__,__t720t,bytes);
  buffer__unsafe_ptr=__t718t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t602t(buffer__unsafe_ptr,&__t703t__);
  if(__t703t__){
  free__t672t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2752t=buffer__unsafe_ptr;
  *__t2753t=buffer__unsafe_size;
  *__t2754t=buffer__unsafe_offset;
  *__t2755t=buffer__unsafe_align;
  *__t2756t=buffer__unsafe_ptr;
  *__t2757t=buffer__unsafe_size;
  *__t2758t=buffer__unsafe_offset;
  *__t2759t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t833t(char** __t2760t, uint64_t* __t2761t, uint16_t* __t2762t, uint16_t* __t2763t, uint64_t _pos, char** __t2764t, uint64_t* __t2765t, uint16_t* __t2766t, uint16_t* __t2767t, uint64_t* __t2768t) {
  char* buf__unsafe_ptr=*__t2760t;
  uint64_t buf__unsafe_size=*__t2761t;
  uint16_t buf__unsafe_offset=*__t2762t;
  uint16_t buf__unsafe_align=*__t2763t;
  uint64_t __t834t=0;
  uint64_t pos=0;
  __t834t=_pos;
  pos=__t834t;
  goto __t_return;
  __t_return:
  *__t2760t=buf__unsafe_ptr;
  *__t2761t=buf__unsafe_size;
  *__t2762t=buf__unsafe_offset;
  *__t2763t=buf__unsafe_align;
  *__t2764t=buf__unsafe_ptr;
  *__t2765t=buf__unsafe_size;
  *__t2766t=buf__unsafe_offset;
  *__t2767t=buf__unsafe_align;
  *__t2768t=pos;
}

static inline __attribute__((always_inline)) void arena__t836t(char** __t2769t, uint64_t* __t2770t, uint16_t* __t2771t, uint16_t* __t2772t, char** __t2773t, uint64_t* __t2774t, uint16_t* __t2775t, uint16_t* __t2776t, uint64_t* __t2777t) {
  char* buf__unsafe_ptr=*__t2769t;
  uint64_t buf__unsafe_size=*__t2770t;
  uint16_t buf__unsafe_offset=*__t2771t;
  uint16_t buf__unsafe_align=*__t2772t;
  uint64_t __t837t=0;
  char* __t838t__buf__unsafe_ptr=0;
  uint64_t __t838t__buf__unsafe_size=0;
  uint16_t __t838t__buf__unsafe_offset=0;
  uint16_t __t838t__buf__unsafe_align=0;
  uint64_t __t838t__pos=0;
  __t837t=0;
  arena__t833t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t837t,&__t838t__buf__unsafe_ptr,&__t838t__buf__unsafe_size,&__t838t__buf__unsafe_offset,&__t838t__buf__unsafe_align,&__t838t__pos);
  goto __t_return;
  __t_return:
  *__t2769t=buf__unsafe_ptr;
  *__t2770t=buf__unsafe_size;
  *__t2771t=buf__unsafe_offset;
  *__t2772t=buf__unsafe_align;
  *__t2773t=__t838t__buf__unsafe_ptr;
  *__t2774t=__t838t__buf__unsafe_size;
  *__t2775t=__t838t__buf__unsafe_offset;
  *__t2776t=__t838t__buf__unsafe_align;
  *__t2777t=__t838t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t946t(char** __t2778t, uint64_t* __t2779t, uint16_t* __t2780t, uint16_t* __t2781t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2778t=unsafe_ptr;
  *__t2779t=unsafe_size;
  *__t2780t=unsafe_offset;
  *__t2781t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t24t(char* to, const char* from, char** __t2782t) {
  *__t2782t=to;
}

static inline __attribute__((always_inline)) void add__t185t(uint64_t x, uint64_t y, uint64_t* __t2783t) {
  int __t186t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t186t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2783t=z;
}

static inline __attribute__((always_inline)) void ge__t334t(uint64_t x, uint64_t y, char* __t2784t) {
  int __t335t__=0;
  char z=0;
  is_different__t104t(x,y,&__t335t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2784t=z;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, char* from, char** __t2785t) {
  *__t2785t=to;
}

static inline __attribute__((always_inline)) void add__t674t(char* allocated, uint64_t offset, char** __t2786t) {
  char* element=0;
  char* __t675t__=0;
  element=allocated+offset;
  attach_type__t23t(element,allocated,&__t675t__);
  goto __t_return;
  __t_return:
  *__t2786t=__t675t__;
}

static inline __attribute__((always_inline)) int get__t821t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2787t) {
  char __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  char* __t827t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t334t(i,buffer__unsafe_size,&__t822t__);
  if(__t822t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t676t(buffer__unsafe_align,&__t823t__);
  mul__t209t(i,__t823t__,&__t824t__);
  nat__t676t(buffer__unsafe_offset,&__t825t__);
  add__t185t(__t824t__,__t825t__,&__t826t__);
  add__t674t(buffer__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2787t=__t827t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t965t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2788t, uint64_t* __t2789t, uint64_t* __t2790t, char* __t2791t) {
  goto __t_return;
  __t_return:
  *__t2788t=unsafe_ptr;
  *__t2789t=dat__pos;
  *__t2790t=dat__length;
  *__t2791t=dat__first;
}

static inline __attribute__((always_inline)) int str__t969t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2792t, uint64_t* __t2793t, uint64_t* __t2794t, char* __t2795t) {
  char* unsafe_ptr=0;
  uint64_t __t970t__=0;
  uint64_t __t971t=0;
  char __t972t__=0;
  uint64_t __t973t__=0;
  uint64_t __t974t=0;
  char __t975t__=0;
  char* __t976t__unsafe_ptr=0;
  uint64_t __t976t__dat__pos=0;
  uint64_t __t976t__dat__length=0;
  char __t976t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t676t(buf__unsafe_align,&__t970t__);
  __t971t=1;
  neq__t154t(__t970t__,__t971t,&__t972t__);
  if(__t972t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t676t(buf__unsafe_offset,&__t973t__);
  __t974t=0;
  neq__t154t(__t973t__,__t974t,&__t975t__);
  if(__t975t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t965t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t976t__unsafe_ptr,&__t976t__dat__pos,&__t976t__dat__length,&__t976t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2792t=__t976t__unsafe_ptr;
  *__t2793t=__t976t__dat__pos;
  *__t2794t=__t976t__dat__length;
  *__t2795t=__t976t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1003t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2796t, uint64_t* __t2797t, uint64_t* __t2798t, char* __t2799t) {
  uint64_t __t1004t=0;
  char __t1005t__=0;
  char* __t1007t__=0;
  char __t1008t__value=0;
  char first=0;
  char* __t1009t__unsafe_ptr=0;
  uint64_t __t1009t__dat__pos=0;
  uint64_t __t1009t__dat__length=0;
  char __t1009t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1004t=0;
  neq__t154t(length,__t1004t,&__t1005t__);
  if(__t1005t__){
  __t_errcode=get__t821t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1007t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1007t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1008t__value,__t1007t__,1);
  first=__t1008t__value;
  }
  __t_errcode=str__t969t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1009t__unsafe_ptr,&__t1009t__dat__pos,&__t1009t__dat__length,&__t1009t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2796t=__t1009t__unsafe_ptr;
  *__t2797t=__t1009t__dat__pos;
  *__t2798t=__t1009t__dat__length;
  *__t2799t=__t1009t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1025t(const char* c, char** __t2800t, uint64_t* __t2801t, uint64_t* __t2802t, char* __t2803t) {
  char* __t1026t__unsafe_ptr=0;
  uint64_t __t1026t__unsafe_size=0;
  uint16_t __t1026t__unsafe_offset=0;
  uint16_t __t1026t__unsafe_align=0;
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__unsafe_size=0;
  uint16_t __t1027t__unsafe_offset=0;
  uint16_t __t1027t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1028t__=0;
  uint64_t length=0;
  uint64_t __t1029t=0;
  uint64_t __t1030t__=0;
  uint64_t __t1031t=0;
  char* __t1033t__unsafe_ptr=0;
  uint64_t __t1033t__dat__pos=0;
  uint64_t __t1033t__dat__length=0;
  char __t1033t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t946t(&__t1026t__unsafe_ptr,&__t1026t__unsafe_size,&__t1026t__unsafe_offset,&__t1026t__unsafe_align);
  __t1027t__unsafe_ptr=__t1026t__unsafe_ptr;
  __t1027t__unsafe_size=__t1026t__unsafe_size;
  __t1027t__unsafe_offset=__t1026t__unsafe_offset;
  __t1027t__unsafe_align=__t1026t__unsafe_align;
  buf__unsafe_ptr=__t1027t__unsafe_ptr;
  buf__unsafe_size=__t1027t__unsafe_size;
  buf__unsafe_offset=__t1027t__unsafe_offset;
  buf__unsafe_align=__t1027t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t24t(buf__unsafe_ptr,c,&__t1028t__);
  buf__unsafe_ptr=__t1028t__;
  if(c){
  length=strlen(c);
  }
  __t1029t=1;
  add__t185t(length,__t1029t,&__t1030t__);
  buf__unsafe_size=__t1030t__;
  __t1031t=0;
  __t_errcode=str__t1003t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1031t,length,&__t1033t__unsafe_ptr,&__t1033t__dat__pos,&__t1033t__dat__length,&__t1033t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2800t=__t1033t__unsafe_ptr;
  *__t2801t=__t1033t__dat__pos;
  *__t2802t=__t1033t__dat__length;
  *__t2803t=__t1033t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1034t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2804t) {
  goto __t_return;
  __t_return:
  *__t2804t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t828t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2805t) {
  goto __t_return;
  __t_return:
  *__t2805t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t286t(uint64_t x, uint64_t y, char* __t2806t) {
  int __t287t__=0;
  char z=0;
  is_different__t104t(x,y,&__t287t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2806t=z;
}

static inline __attribute__((always_inline)) void allocated__t839t(char** __t2807t, uint64_t* __t2808t, uint16_t* __t2809t, uint16_t* __t2810t, uint64_t pos, char** __t2811t, uint64_t* __t2812t, uint16_t* __t2813t, uint16_t* __t2814t, uint64_t* __t2815t) {
  char* buf__unsafe_ptr=*__t2807t;
  uint64_t buf__unsafe_size=*__t2808t;
  uint16_t buf__unsafe_offset=*__t2809t;
  uint16_t buf__unsafe_align=*__t2810t;
  goto __t_return;
  __t_return:
  *__t2807t=buf__unsafe_ptr;
  *__t2808t=buf__unsafe_size;
  *__t2809t=buf__unsafe_offset;
  *__t2810t=buf__unsafe_align;
  *__t2811t=buf__unsafe_ptr;
  *__t2812t=buf__unsafe_size;
  *__t2813t=buf__unsafe_offset;
  *__t2814t=buf__unsafe_align;
  *__t2815t=pos;
}

static inline __attribute__((always_inline)) int alloc__t871t(char** __t2816t, uint64_t* __t2817t, uint16_t* __t2818t, uint16_t* __t2819t, uint64_t* __t2820t, uint64_t length, char** __t2821t, uint64_t* __t2822t, uint16_t* __t2823t, uint16_t* __t2824t, uint64_t* __t2825t) {
  char* allocator__buf__unsafe_ptr=*__t2816t;
  uint64_t allocator__buf__unsafe_size=*__t2817t;
  uint16_t allocator__buf__unsafe_offset=*__t2818t;
  uint16_t allocator__buf__unsafe_align=*__t2819t;
  uint64_t allocator__pos=*__t2820t;
  int __t872t=0;
  uint64_t __t873t__=0;
  uint64_t next_pos=0;
  uint64_t __t874t__=0;
  char __t875t__=0;
  uint64_t __t876t=0;
  uint64_t __t877t__=0;
  uint64_t pos=0;
  char* __t878t__buf__unsafe_ptr=0;
  uint64_t __t878t__buf__unsafe_size=0;
  uint16_t __t878t__buf__unsafe_offset=0;
  uint16_t __t878t__buf__unsafe_align=0;
  uint64_t __t878t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t185t(allocator__pos,length,&__t873t__);
  next_pos=__t873t__;
  len__t828t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t874t__);
  gt__t286t(next_pos,__t874t__,&__t875t__);
  if(__t875t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t876t=0;
  add__t185t(allocator__pos,__t876t,&__t877t__);
  pos=__t877t__;
  allocator__pos=next_pos;
  allocated__t839t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t878t__buf__unsafe_ptr,&__t878t__buf__unsafe_size,&__t878t__buf__unsafe_offset,&__t878t__buf__unsafe_align,&__t878t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2816t=allocator__buf__unsafe_ptr;
  *__t2817t=allocator__buf__unsafe_size;
  *__t2818t=allocator__buf__unsafe_offset;
  *__t2819t=allocator__buf__unsafe_align;
  *__t2820t=allocator__pos;
  *__t2821t=__t878t__buf__unsafe_ptr;
  *__t2822t=__t878t__buf__unsafe_size;
  *__t2823t=__t878t__buf__unsafe_offset;
  *__t2824t=__t878t__buf__unsafe_align;
  *__t2825t=__t878t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1056t(char** __t2826t, uint64_t* __t2827t, uint16_t* __t2828t, uint16_t* __t2829t, uint64_t* __t2830t, const char* _other, char** __t2831t, uint64_t* __t2832t, uint64_t* __t2833t, char* __t2834t) {
  char* CHARS__buf__unsafe_ptr=*__t2826t;
  uint64_t CHARS__buf__unsafe_size=*__t2827t;
  uint16_t CHARS__buf__unsafe_offset=*__t2828t;
  uint16_t CHARS__buf__unsafe_align=*__t2829t;
  uint64_t CHARS__pos=*__t2830t;
  char* __t1057t__unsafe_ptr=0;
  uint64_t __t1057t__dat__pos=0;
  uint64_t __t1057t__dat__length=0;
  char __t1057t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1058t__=0;
  char* __t1059t__buf__unsafe_ptr=0;
  uint64_t __t1059t__buf__unsafe_size=0;
  uint16_t __t1059t__buf__unsafe_offset=0;
  uint16_t __t1059t__buf__unsafe_align=0;
  uint64_t __t1059t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1060t__unsafe_ptr=0;
  uint64_t __t1060t__dat__pos=0;
  uint64_t __t1060t__dat__length=0;
  char __t1060t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1025t(_other,&__t1057t__unsafe_ptr,&__t1057t__dat__pos,&__t1057t__dat__length,&__t1057t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1057t__unsafe_ptr;
  other__dat__pos=__t1057t__dat__pos;
  other__dat__length=__t1057t__dat__length;
  other__dat__first=__t1057t__dat__first;
  len__t1034t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1058t__);
  __t_errcode=alloc__t871t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1058t__,&__t1059t__buf__unsafe_ptr,&__t1059t__buf__unsafe_size,&__t1059t__buf__unsafe_offset,&__t1059t__buf__unsafe_align,&__t1059t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1059t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1059t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1059t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1059t__buf__unsafe_align;
  surface__pos=__t1059t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t969t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1060t__unsafe_ptr,&__t1060t__dat__pos,&__t1060t__dat__length,&__t1060t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2826t=CHARS__buf__unsafe_ptr;
  *__t2827t=CHARS__buf__unsafe_size;
  *__t2828t=CHARS__buf__unsafe_offset;
  *__t2829t=CHARS__buf__unsafe_align;
  *__t2830t=CHARS__pos;
  *__t2831t=__t1060t__unsafe_ptr;
  *__t2832t=__t1060t__dat__pos;
  *__t2833t=__t1060t__dat__length;
  *__t2834t=__t1060t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2583t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2584t(const char* path, char** __t2835t) {
  char* unsafe_ptr=0;
  char __t2586t__=0;
  char __t2587t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t602t(unsafe_ptr,&__t2586t__);
  not__t29t(__t2586t__,&__t2587t__);
  if(__t2587t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2583t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2835t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2595t(char** __t2836t, const char** __t2837t) {
  char* f__unsafe_ptr=*__t2836t;
  char __t2596t__=0;
  char __t2597t__=0;
  char* de=0;
  char __t2598t__=0;
  char __t2599t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t602t(f__unsafe_ptr,&__t2596t__);
  not__t29t(__t2596t__,&__t2597t__);
  if(__t2597t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t602t(de,&__t2598t__);
  not__t29t(__t2598t__,&__t2599t__);
  if(__t2599t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2836t=f__unsafe_ptr;
  *__t2837t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2600t(char** __t2838t, char** __t2839t, uint64_t* __t2840t, uint64_t* __t2841t, char* __t2842t) {
  char* f__unsafe_ptr=*__t2838t;
  const char* __t2601t__=0;
  char* __t2602t__unsafe_ptr=0;
  uint64_t __t2602t__dat__pos=0;
  uint64_t __t2602t__dat__length=0;
  char __t2602t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2595t(&f__unsafe_ptr,&__t2601t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1025t(__t2601t__,&__t2602t__unsafe_ptr,&__t2602t__dat__pos,&__t2602t__dat__length,&__t2602t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2838t=f__unsafe_ptr;
  *__t2839t=__t2602t__unsafe_ptr;
  *__t2840t=__t2602t__dat__pos;
  *__t2841t=__t2602t__dat__length;
  *__t2842t=__t2602t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2666t(char** __t2843t, uint64_t __t_anon1, char** __t2844t, uint64_t* __t2845t, uint64_t* __t2846t, char* __t2847t) {
  char* data__unsafe_ptr=*__t2843t;
  char* __t2667t__unsafe_ptr=0;
  uint64_t __t2667t__dat__pos=0;
  uint64_t __t2667t__dat__length=0;
  char __t2667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2600t(&data__unsafe_ptr,&__t2667t__unsafe_ptr,&__t2667t__dat__pos,&__t2667t__dat__length,&__t2667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2843t=data__unsafe_ptr;
  *__t2844t=__t2667t__unsafe_ptr;
  *__t2845t=__t2667t__dat__pos;
  *__t2846t=__t2667t__dat__length;
  *__t2847t=__t2667t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1002t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2848t, uint64_t* __t2849t, uint64_t* __t2850t, char* __t2851t) {
  goto __t_return;
  __t_return:
  *__t2848t=other__unsafe_ptr;
  *__t2849t=other__dat__pos;
  *__t2850t=other__dat__length;
  *__t2851t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t262t(uint64_t x, uint64_t y, char* __t2852t) {
  int __t263t__=0;
  char z=0;
  is_different__t104t(x,y,&__t263t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2852t=z;
}

static inline __attribute__((always_inline)) int sub__t362t(uint64_t x, uint64_t y, uint64_t* __t2853t) {
  int __t363t__=0;
  int __t364t=0;
  int __t365t=0;
  char __t366t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t104t(x,y,&__t363t__);
  lt__t262t(x,y,&__t366t__);
  if(__t366t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2853t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1160t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2854t) {
  uint64_t __t1161t__=0;
  char* __t1162t__=0;
  add__t185t(s__dat__pos,i,&__t1161t__);
  add__t674t(s__unsafe_ptr,__t1161t__,&__t1162t__);
  goto __t_return;
  __t_return:
  *__t2854t=__t1162t__;
}

int slice__t1183t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2855t, uint64_t* __t2856t, uint64_t* __t2857t, char* __t2858t) {
  char* __t1184t__unsafe_ptr=0;
  uint64_t __t1184t__dat__pos=0;
  uint64_t __t1184t__dat__length=0;
  char __t1184t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1185t__=0;
  char* __t1186t__unsafe_ptr=0;
  uint64_t __t1186t__dat__pos=0;
  uint64_t __t1186t__dat__length=0;
  char __t1186t__dat__first=0;
  char __t1187t__=0;
  char __t1188t__=0;
  char __t1189t=0;
  char __t1190t__=0;
  uint64_t __t1191t__=0;
  uint64_t new_length=0;
  uint64_t __t1192t=0;
  char __t1193t__=0;
  char new_first=0;
  char* __t1195t__=0;
  char __t1196t__value=0;
  uint64_t __t1197t__=0;
  char* __t1198t__unsafe_ptr=0;
  uint64_t __t1198t__dat__pos=0;
  uint64_t __t1198t__dat__length=0;
  char __t1198t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1002t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1184t__unsafe_ptr,&__t1184t__dat__pos,&__t1184t__dat__length,&__t1184t__dat__first);
  s__unsafe_ptr=__t1184t__unsafe_ptr;
  s__dat__pos=__t1184t__dat__pos;
  s__dat__length=__t1184t__dat__length;
  s__dat__first=__t1184t__dat__first;
  eq__t130t(from,to,&__t1185t__);
  if(__t1185t__){
  __t_errcode=str__t1025t(__t385t,&__t1186t__unsafe_ptr,&__t1186t__dat__pos,&__t1186t__dat__length,&__t1186t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t286t(from,to,&__t1187t__);
  if(!__t1187t__){
  gt__t286t(to,s__dat__length,&__t1188t__);
  __t1189t=__t1188t__;
  }
  else{
  __t1189t=0;
  not__t29t(__t1189t,&__t1190t__);
  __t1189t=__t1190t__;
  }
  if(__t1189t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t362t(to,from,&__t1191t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1191t__;
  __t1192t=0;
  neq__t154t(from,__t1192t,&__t1193t__);
  if(__t1193t__){
  get__t1160t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1195t__);
  if(!__t1195t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1196t__value,__t1195t__,1);
  new_first=__t1196t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t185t(s__dat__pos,from,&__t1197t__);
  str__t965t(s__unsafe_ptr,__t1197t__,new_length,new_first,&__t1198t__unsafe_ptr,&__t1198t__dat__pos,&__t1198t__dat__length,&__t1198t__dat__first);
  __t1186t__unsafe_ptr=__t1198t__unsafe_ptr;
  __t1186t__dat__pos=__t1198t__dat__pos;
  __t1186t__dat__length=__t1198t__dat__length;
  __t1186t__dat__first=__t1198t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2855t=__t1186t__unsafe_ptr;
  *__t2856t=__t1186t__dat__pos;
  *__t2857t=__t1186t__dat__length;
  *__t2858t=__t1186t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1038t(char x, char y, char* __t2859t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2859t=z;
}

static inline __attribute__((always_inline)) void eq__t1103t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2860t) {
  uint64_t __t1104t__=0;
  uint64_t n=0;
  uint64_t __t1105t__=0;
  char __t1106t__=0;
  char __t1107t=0;
  char __t1108t__=0;
  char __t1109t=0;
  char z=0;
  len__t1034t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1104t__);
  n=__t1104t__;
  len__t1034t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1105t__);
  neq__t154t(n,__t1105t__,&__t1106t__);
  if(__t1106t__){
  __t1107t=0;
  goto __t_return;
  }
  neq__t1038t(x__dat__first,y__dat__first,&__t1108t__);
  if(__t1108t__){
  __t1109t=0;
  __t1107t=__t1109t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1107t=z;
  goto __t_return;
  __t_return:
  *__t2860t=__t1107t;
}

static inline __attribute__((always_inline)) int ends_with__t1263t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2861t) {
  char* __t1264t__unsafe_ptr=0;
  uint64_t __t1264t__dat__pos=0;
  uint64_t __t1264t__dat__length=0;
  char __t1264t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1265t__unsafe_ptr=0;
  uint64_t __t1265t__dat__pos=0;
  uint64_t __t1265t__dat__length=0;
  char __t1265t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1266t__=0;
  char __t1267t=0;
  uint64_t __t1268t__=0;
  uint64_t n=0;
  uint64_t __t1269t__=0;
  uint64_t __t1270t__=0;
  char* __t1271t__unsafe_ptr=0;
  uint64_t __t1271t__dat__pos=0;
  uint64_t __t1271t__dat__length=0;
  char __t1271t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1272t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1002t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1264t__unsafe_ptr,&__t1264t__dat__pos,&__t1264t__dat__length,&__t1264t__dat__first);
  stack__unsafe_ptr=__t1264t__unsafe_ptr;
  stack__dat__pos=__t1264t__dat__pos;
  stack__dat__length=__t1264t__dat__length;
  stack__dat__first=__t1264t__dat__first;
  __t_errcode=str__t1025t(_needle,&__t1265t__unsafe_ptr,&__t1265t__dat__pos,&__t1265t__dat__length,&__t1265t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1265t__unsafe_ptr;
  needle__dat__pos=__t1265t__dat__pos;
  needle__dat__length=__t1265t__dat__length;
  needle__dat__first=__t1265t__dat__first;
  lt__t262t(stack__dat__length,needle__dat__length,&__t1266t__);
  if(__t1266t__){
  __t1267t=0;
  goto __t_return;
  }
  len__t1034t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1268t__);
  n=__t1268t__;
  len__t1034t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1269t__);
  __t_errcode=sub__t362t(n,__t1269t__,&__t1270t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1183t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1270t__,n,&__t1271t__unsafe_ptr,&__t1271t__dat__pos,&__t1271t__dat__length,&__t1271t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1271t__unsafe_ptr;
  ret__dat__pos=__t1271t__dat__pos;
  ret__dat__length=__t1271t__dat__length;
  ret__dat__first=__t1271t__dat__first;
  eq__t1103t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1272t__);
  __t1267t=__t1272t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2861t=__t1267t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1134t(char** __t2862t, uint64_t* __t2863t, uint16_t* __t2864t, uint16_t* __t2865t, uint64_t* __t2866t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2867t, uint64_t* __t2868t, uint64_t* __t2869t, char* __t2870t) {
  char* CHARS__buf__unsafe_ptr=*__t2862t;
  uint64_t CHARS__buf__unsafe_size=*__t2863t;
  uint16_t CHARS__buf__unsafe_offset=*__t2864t;
  uint16_t CHARS__buf__unsafe_align=*__t2865t;
  uint64_t CHARS__pos=*__t2866t;
  char* __t1135t__unsafe_ptr=0;
  uint64_t __t1135t__dat__pos=0;
  uint64_t __t1135t__dat__length=0;
  char __t1135t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1136t__=0;
  uint64_t __t1137t__=0;
  uint64_t null_pos=0;
  uint64_t __t1138t=0;
  uint64_t __t1139t__=0;
  uint64_t next_pos=0;
  uint64_t __t1140t__=0;
  char __t1141t__=0;
  char* endpos=0;
  uint64_t __t1142t=0;
  uint64_t __t1143t__=0;
  uint64_t prev_pos=0;
  char* __t1144t__unsafe_ptr=0;
  uint64_t __t1144t__dat__pos=0;
  uint64_t __t1144t__dat__length=0;
  char __t1144t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1002t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1135t__unsafe_ptr,&__t1135t__dat__pos,&__t1135t__dat__length,&__t1135t__dat__first);
  other__unsafe_ptr=__t1135t__unsafe_ptr;
  other__dat__pos=__t1135t__dat__pos;
  other__dat__length=__t1135t__dat__length;
  other__dat__first=__t1135t__dat__first;
  len__t1034t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1136t__);
  add__t185t(CHARS__pos,__t1136t__,&__t1137t__);
  null_pos=__t1137t__;
  __t1138t=1;
  add__t185t(null_pos,__t1138t,&__t1139t__);
  next_pos=__t1139t__;
  len__t828t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1140t__);
  gt__t286t(next_pos,__t1140t__,&__t1141t__);
  if(__t1141t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1142t=0;
  add__t185t(CHARS__pos,__t1142t,&__t1143t__);
  prev_pos=__t1143t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t969t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1144t__unsafe_ptr,&__t1144t__dat__pos,&__t1144t__dat__length,&__t1144t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2862t=CHARS__buf__unsafe_ptr;
  *__t2863t=CHARS__buf__unsafe_size;
  *__t2864t=CHARS__buf__unsafe_offset;
  *__t2865t=CHARS__buf__unsafe_align;
  *__t2866t=CHARS__pos;
  *__t2867t=__t1144t__unsafe_ptr;
  *__t2868t=__t1144t__dat__pos;
  *__t2869t=__t1144t__dat__length;
  *__t2870t=__t1144t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1100t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2871t) {
  uint64_t __t1101t__=0;
  add__t185t(s__dat__pos,s__dat__length,&__t1101t__);
  goto __t_return;
  __t_return:
  *__t2871t=__t1101t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2872t) {
  int value=0;
  *__t2872t=value;
}

static inline __attribute__((always_inline)) void not__t40t(int __t_anon0, int* __t2873t) {
  int __t41t__=0;
  true__t11t(&__t41t__);
  goto __t_return;
  __t_return:
  *__t2873t=__t41t__;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2874t, uint64_t* __t2875t, uint64_t* __t2876t, char* __t2877t) {
  int __t978t=0;
  int __t979t=0;
  int __t980t__=0;
  uint64_t __t981t__=0;
  char __t982t__=0;
  uint64_t __t983t=0;
  uint64_t __t984t=0;
  char* __t986t__=0;
  char __t987t__value=0;
  char* __t988t__unsafe_ptr=0;
  uint64_t __t988t__dat__pos=0;
  uint64_t __t988t__dat__length=0;
  char __t988t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t40t(__t979t,&__t980t__);
  len__t828t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t981t__);
  gt__t286t(length,__t981t__,&__t982t__);
  if(__t982t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t983t=0;
  __t984t=0;
  __t_errcode=get__t821t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t984t,&__t986t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t986t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t987t__value,__t986t__,1);
  __t_errcode=str__t969t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t983t,length,__t987t__value,&__t988t__unsafe_ptr,&__t988t__dat__pos,&__t988t__dat__length,&__t988t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2874t=__t988t__unsafe_ptr;
  *__t2875t=__t988t__dat__pos;
  *__t2876t=__t988t__dat__length;
  *__t2877t=__t988t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1158t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1159t=0;
  const char* endl=0;
  endl=__t393t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t829t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1081t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2878t, uint64_t* __t2879t, uint64_t* __t2880t, char* __t2881t) {
  char* __t1082t__unsafe_ptr=0;
  uint64_t __t1082t__unsafe_size=0;
  uint16_t __t1082t__unsafe_offset=0;
  uint16_t __t1082t__unsafe_align=0;
  uint64_t __t1083t=0;
  uint64_t __t1084t__=0;
  uint64_t __t1085t__=0;
  char* __t1086t__unsafe_ptr=0;
  uint64_t __t1086t__unsafe_size=0;
  uint16_t __t1086t__unsafe_offset=0;
  uint16_t __t1086t__unsafe_align=0;
  char __t1087t____t703t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1088t=0;
  char* __t1089t__unsafe_ptr=0;
  uint64_t __t1089t__dat__pos=0;
  uint64_t __t1089t__dat__length=0;
  char __t1089t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t946t(&__t1082t__unsafe_ptr,&__t1082t__unsafe_size,&__t1082t__unsafe_offset,&__t1082t__unsafe_align);
  __t1083t=1;
  len__t1034t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1084t__);
  add__t185t(__t1083t,__t1084t__,&__t1085t__);
  __t_errcode=alloc__t701t(&__t1082t__unsafe_ptr,&__t1082t__unsafe_size,&__t1082t__unsafe_offset,&__t1082t__unsafe_align,__t1085t__,&__t1086t__unsafe_ptr,&__t1086t__unsafe_size,&__t1086t__unsafe_offset,&__t1086t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1086t__unsafe_ptr;
  buf__unsafe_size=__t1086t__unsafe_size;
  buf__unsafe_offset=__t1086t__unsafe_offset;
  buf__unsafe_align=__t1086t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1088t=0;
  __t_errcode=str__t969t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1088t,other__dat__length,other__dat__first,&__t1089t__unsafe_ptr,&__t1089t__dat__pos,&__t1089t__dat__length,&__t1089t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t602t(__t1089t__unsafe_ptr,&__t1087t____t703t__);
  if(__t1087t____t703t__){
  free__t672t(&__t1089t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2878t=__t1089t__unsafe_ptr;
  *__t2879t=__t1089t__dat__pos;
  *__t2880t=__t1089t__dat__length;
  *__t2881t=__t1089t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1090t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2882t, char** __t2883t, uint64_t* __t2884t, uint64_t* __t2885t, char* __t2886t) {
  char* __t1092t__unsafe_ptr=0;
  uint64_t __t1092t__dat__pos=0;
  uint64_t __t1092t__dat__length=0;
  char __t1092t__dat__first=0;
  char __t1093t____t1087t____t703t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1094t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t829t();
  __t_errcode=copy_null_terminated__t1081t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1092t__unsafe_ptr,&__t1092t__dat__pos,&__t1092t__dat__length,&__t1092t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1092t__unsafe_ptr;
  str__dat__pos=__t1092t__dat__pos;
  str__dat__length=__t1092t__dat__length;
  str__dat__first=__t1092t__dat__first;
  add__t674t(str__unsafe_ptr,str__dat__pos,&__t1094t__);
  _ret=__t1094t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t602t(str__unsafe_ptr,&__t1093t____t1087t____t703t__);
  if(__t1093t____t1087t____t703t__){
  free__t672t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2882t=cstr;
  *__t2883t=str__unsafe_ptr;
  *__t2884t=str__dat__pos;
  *__t2885t=str__dat__length;
  *__t2886t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1098t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2887t) {
  goto __t_return;
  __t_return:
  *__t2887t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2143t(const char* cmd, char** __t2888t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2888t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2142t(char* unsafe_ptr, int64_t* __t2889t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2889t=status;
}

static inline __attribute__((always_inline)) void int__t582t(uint64_t x, int64_t* __t2890t) {
  int __t583t=0;
  int __t584t=0;
  int __t585t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2890t=z;
}

static inline __attribute__((always_inline)) void is_different__t88t(int64_t x, int64_t y, int* __t2891t) {
  int __t90t=0;
  int __t91t__=0;
  not__t38t(__t90t,&__t91t__);
  goto __t_return;
  __t_return:
  *__t2891t=__t91t__;
}

static inline __attribute__((always_inline)) void neq__t143t(int64_t x, int64_t y, char* __t2892t) {
  int __t144t__=0;
  char z=0;
  is_different__t88t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2892t=z;
}

static inline __attribute__((always_inline)) int open__t2144t(const char* cmd, char** __t2893t) {
  char* __t2145t__=0;
  char* unsafe_ptr=0;
  char __t2146t__=0;
  char __t2147t__=0;
  char __t2148t__=0;
  int64_t __t2149t__=0;
  int64_t status=0;
  uint64_t __t2150t=0;
  int64_t __t2151t__=0;
  char __t2152t__=0;
  char __t2153t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2143t(cmd,&__t2145t__);
  unsafe_ptr=__t2145t__;
  exists__t602t(unsafe_ptr,&__t2146t__);
  not__t29t(__t2146t__,&__t2147t__);
  if(__t2147t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t602t(unsafe_ptr,&__t2148t__);
  if(__t2148t__){
  pclose__t2142t(unsafe_ptr,&__t2149t__);
  status=__t2149t__;
  unsafe_ptr=0;
  __t2150t=0;
  int__t582t(__t2150t,&__t2151t__);
  neq__t143t(status,__t2151t__,&__t2152t__);
  if(__t2152t__){
  __t_complain=37;
  __t2153t=__t2153t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2893t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2155t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2894t) {
  const char* __t2156t__cstr=0;
  char* __t2156t__str__unsafe_ptr=0;
  uint64_t __t2156t__str__dat__pos=0;
  uint64_t __t2156t__str__dat__length=0;
  char __t2156t__str__dat__first=0;
  char __t2157t____t1093t____t1087t____t703t__=0;
  const char* __t2158t__=0;
  char* __t2159t__unsafe_ptr=0;
  char __t2160t____t2148t__=0;
  int64_t __t2160t____t2149t__=0;
  int64_t __t2160t__status=0;
  uint64_t __t2160t____t2150t=0;
  int64_t __t2160t____t2151t__=0;
  char __t2160t____t2152t__=0;
  char __t2160t____t2153t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1090t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2156t__cstr,&__t2156t__str__unsafe_ptr,&__t2156t__str__dat__pos,&__t2156t__str__dat__length,&__t2156t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1098t(__t2156t__cstr,__t2156t__str__unsafe_ptr,__t2156t__str__dat__pos,__t2156t__str__dat__length,__t2156t__str__dat__first,&__t2158t__);
  __t_errcode=open__t2144t(__t2158t__,&__t2159t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t602t(__t2159t__unsafe_ptr,&__t2160t____t2148t__);
  if(__t2160t____t2148t__){
  pclose__t2142t(__t2159t__unsafe_ptr,&__t2160t____t2149t__);
  __t2160t__status=__t2160t____t2149t__;
  __t2159t__unsafe_ptr=0;
  __t2160t____t2150t=0;
  int__t582t(__t2160t____t2150t,&__t2160t____t2151t__);
  neq__t143t(__t2160t__status,__t2160t____t2151t__,&__t2160t____t2152t__);
  if(__t2160t____t2152t__){
  __t_complain=37;
  __t2160t____t2153t=__t2160t____t2153t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2894t=__t2159t__unsafe_ptr;
  
  __t_skip_returns:exists__t602t(__t2156t__str__unsafe_ptr,&__t2157t____t1093t____t1087t____t703t__);
  if(__t2157t____t1093t____t1087t____t703t__){
  free__t672t(&__t2156t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2122t(int64_t value, const char** __t2895t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2895t=ret;
}

static inline __attribute__((always_inline)) void print__t391t(const char* value) {
  int __t392t=0;
  const char* endl=0;
  endl=__t393t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2699t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2700t__unsafe_ptr=0;
  char __t2701t____t2160t____t2148t__=0;
  int64_t __t2701t____t2160t____t2149t__=0;
  int64_t __t2701t____t2160t__status=0;
  uint64_t __t2701t____t2160t____t2150t=0;
  int64_t __t2701t____t2160t____t2151t__=0;
  char __t2701t____t2160t____t2152t__=0;
  char __t2701t____t2160t____t2153t=0;
  char* proc__unsafe_ptr=0;
  char __t2702t=0;
  int64_t __t2703t=0;
  int64_t error=0;
  const char* __t2704t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2155t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2700t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2700t__unsafe_ptr;
  exists__t602t(__t2700t__unsafe_ptr,&__t2701t____t2160t____t2148t__);
  if(__t2701t____t2160t____t2148t__){
  pclose__t2142t(__t2700t__unsafe_ptr,&__t2701t____t2160t____t2149t__);
  __t2701t____t2160t__status=__t2701t____t2160t____t2149t__;
  __t2700t__unsafe_ptr=0;
  __t2701t____t2160t____t2150t=0;
  int__t582t(__t2701t____t2160t____t2150t,&__t2701t____t2160t____t2151t__);
  neq__t143t(__t2701t____t2160t__status,__t2701t____t2160t____t2151t__,&__t2701t____t2160t____t2152t__);
  if(__t2701t____t2160t____t2152t__){
  __t_complain=37;
  __t2701t____t2160t____t2153t=__t2701t____t2160t____t2153t==0;
  }
  }
  __t2703t=__t_complain;
  __t2702t=(__t_complain==0);
  __t_complain=0;
  error=__t2703t;
  __t2702t=__t2702t==0;
  if(__t2702t){
  cstr__t2122t(error,&__t2704t__);
  print__t391t(__t2704t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2706t() {
  char* __t2711t__unsafe_ptr=0;
  uint64_t __t2711t__unsafe_size=0;
  uint16_t __t2711t__unsafe_offset=0;
  uint16_t __t2711t__unsafe_align=0;
  uint64_t __t2712t=0;
  char* __t2713t__unsafe_ptr=0;
  uint64_t __t2713t__unsafe_size=0;
  uint16_t __t2713t__unsafe_offset=0;
  uint16_t __t2713t__unsafe_align=0;
  char __t2714t____t703t__=0;
  char* __t2715t__buf__unsafe_ptr=0;
  uint64_t __t2715t__buf__unsafe_size=0;
  uint16_t __t2715t__buf__unsafe_offset=0;
  uint16_t __t2715t__buf__unsafe_align=0;
  uint64_t __t2715t__pos=0;
  char* __t2716t__buf__unsafe_ptr=0;
  uint64_t __t2716t__buf__unsafe_size=0;
  uint16_t __t2716t__buf__unsafe_offset=0;
  uint16_t __t2716t__buf__unsafe_align=0;
  uint64_t __t2716t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2719t__unsafe_ptr=0;
  uint64_t __t2719t__dat__pos=0;
  uint64_t __t2719t__dat__length=0;
  char __t2719t__dat__first=0;
  char* __t2720t__unsafe_ptr=0;
  uint64_t __t2720t__dat__pos=0;
  uint64_t __t2720t__dat__length=0;
  char __t2720t__dat__first=0;
  char* __t2721t__unsafe_ptr=0;
  char* __t2723t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2724t=0;
  char __t2725t=0;
  char* __t2726t__unsafe_ptr=0;
  uint64_t __t2726t__dat__pos=0;
  uint64_t __t2726t__dat__length=0;
  char __t2726t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2728t__=0;
  char __t2729t__=0;
  char* __t2730t__buf__unsafe_ptr=0;
  uint64_t __t2730t__buf__unsafe_size=0;
  uint16_t __t2730t__buf__unsafe_offset=0;
  uint16_t __t2730t__buf__unsafe_align=0;
  uint64_t __t2730t__pos=0;
  char* __t2731t__unsafe_ptr=0;
  uint64_t __t2731t__dat__pos=0;
  uint64_t __t2731t__dat__length=0;
  char __t2731t__dat__first=0;
  char* __t2732t__unsafe_ptr=0;
  uint64_t __t2732t__dat__pos=0;
  uint64_t __t2732t__dat__length=0;
  char __t2732t__dat__first=0;
  uint64_t __t2733t__=0;
  char* __t2734t__unsafe_ptr=0;
  uint64_t __t2734t__dat__pos=0;
  uint64_t __t2734t__dat__length=0;
  char __t2734t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t376t();
  char____t_buffer____buffer__t2709t(&__t2711t__unsafe_ptr,&__t2711t__unsafe_size,&__t2711t__unsafe_offset,&__t2711t__unsafe_align);
  __t2712t=256;
  __t_errcode=alloc__t701t(&__t2711t__unsafe_ptr,&__t2711t__unsafe_size,&__t2711t__unsafe_offset,&__t2711t__unsafe_align,__t2712t,&__t2713t__unsafe_ptr,&__t2713t__unsafe_size,&__t2713t__unsafe_offset,&__t2713t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t836t(&__t2713t__unsafe_ptr,&__t2713t__unsafe_size,&__t2713t__unsafe_offset,&__t2713t__unsafe_align,&__t2715t__buf__unsafe_ptr,&__t2715t__buf__unsafe_size,&__t2715t__buf__unsafe_offset,&__t2715t__buf__unsafe_align,&__t2715t__pos);
  __t2716t__buf__unsafe_ptr=__t2715t__buf__unsafe_ptr;
  __t2716t__buf__unsafe_size=__t2715t__buf__unsafe_size;
  __t2716t__buf__unsafe_offset=__t2715t__buf__unsafe_offset;
  __t2716t__buf__unsafe_align=__t2715t__buf__unsafe_align;
  __t2716t__pos=__t2715t__pos;
  CHARS__buf__unsafe_ptr=__t2716t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2716t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2716t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2716t__buf__unsafe_align;
  CHARS__pos=__t2716t__pos;
  path=__t2717t;
  __t_errcode=copy__t1056t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2718t,&__t2719t__unsafe_ptr,&__t2719t__dat__pos,&__t2719t__dat__length,&__t2719t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1056t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2720t__unsafe_ptr,&__t2720t__dat__pos,&__t2720t__dat__length,&__t2720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2584t(path,&__t2721t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2723t__unsafe_ptr=__t2721t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2723t__unsafe_ptr;
  __t2724t=0-1;
  while(1){
  __t2724t=__t2724t+1;
  __t_complain=get__t2666t(&test_dir__unsafe_ptr,__t2724t,&__t2726t__unsafe_ptr,&__t2726t__dat__pos,&__t2726t__dat__length,&__t2726t__dat__first);
  __t2725t=__t_complain;
  entry__unsafe_ptr=__t2726t__unsafe_ptr;
  entry__dat__pos=__t2726t__dat__pos;
  entry__dat__length=__t2726t__dat__length;
  entry__dat__first=__t2726t__dat__first;
  __t2725t=__t2725t==0;
  if(!__t2725t){
  break;
  }
  __t_errcode=ends_with__t1263t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2727t,&__t2728t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t29t(__t2728t__,&__t2729t__);
  if(__t2729t__){
  continue;
  }
  __t2730t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2730t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2730t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2730t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2730t__pos=CHARS__pos;
  str__t1002t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2731t__unsafe_ptr,&__t2731t__dat__pos,&__t2731t__dat__length,&__t2731t__dat__first);
  __t_errcode=copy_null_terminated__t1134t(&__t2730t__buf__unsafe_ptr,&__t2730t__buf__unsafe_size,&__t2730t__buf__unsafe_offset,&__t2730t__buf__unsafe_align,&__t2730t__pos,__t2731t__unsafe_ptr,__t2731t__dat__pos,__t2731t__dat__length,__t2731t__dat__first,&__t2732t__unsafe_ptr,&__t2732t__dat__pos,&__t2732t__dat__length,&__t2732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1100t(__t2732t__unsafe_ptr,__t2732t__dat__pos,__t2732t__dat__length,__t2732t__dat__first,&__t2733t__);
  __t_errcode=str__t977t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2733t__,&__t2734t__unsafe_ptr,&__t2734t__dat__pos,&__t2734t__dat__length,&__t2734t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2734t__unsafe_ptr;
  command__dat__pos=__t2734t__dat__pos;
  command__dat__length=__t2734t__dat__length;
  command__dat__first=__t2734t__dat__first;
  print__t1158t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2699t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2583t(__t2721t__unsafe_ptr);
  exists__t602t(__t2713t__unsafe_ptr,&__t2714t____t703t__);
  if(__t2714t____t703t__){
  free__t672t(&__t2713t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2706t();return 0;}