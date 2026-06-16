#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2719t="./tests/passing/";
const char* const __t2720t="./smoll --cleanup ";
const char* const __t395t="\n";
const char* const __t2729t=".s";
const char* const __t387t="";
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

static inline __attribute__((always_inline)) void console__t378t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2711t(char** __t2739t, uint64_t* __t2740t, uint16_t* __t2741t, uint16_t* __t2742t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2739t=unsafe_ptr;
  *__t2740t=unsafe_size;
  *__t2741t=unsafe_offset;
  *__t2742t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t604t(char* x, char* __t2743t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2743t=z;
}

static inline __attribute__((always_inline)) void free__t674t(char** __t2744t) {
  char* allocated=*__t2744t;
  if(allocated){
  free(allocated);
  }
  *__t2744t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2745t) {
  int value=0;
  *__t2745t=value;
}

static inline __attribute__((always_inline)) void not__t40t(int __t_anon0, int* __t2746t) {
  int __t41t__=0;
  false__t10t(&__t41t__);
  goto __t_return;
  __t_return:
  *__t2746t=__t41t__;
}

static inline __attribute__((always_inline)) void is_different__t106t(uint64_t x, uint64_t y, int* __t2747t) {
  int __t108t=0;
  int __t109t__=0;
  not__t40t(__t108t,&__t109t__);
  goto __t_return;
  __t_return:
  *__t2747t=__t109t__;
}

static inline __attribute__((always_inline)) void eq__t132t(uint64_t x, uint64_t y, char* __t2748t) {
  int __t133t__=0;
  char z=0;
  is_different__t106t(x,y,&__t133t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2748t=z;
}

static inline __attribute__((always_inline)) void neq__t156t(uint64_t x, uint64_t y, char* __t2749t) {
  int __t157t__=0;
  char z=0;
  is_different__t106t(x,y,&__t157t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2749t=z;
}

static inline __attribute__((always_inline)) void nat__t678t(uint16_t x, uint64_t* __t2750t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2750t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t2751t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2751t=z;
}

static inline __attribute__((always_inline)) void zero__t675t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t31t(char value, char* __t2752t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2752t=z;
}

static inline __attribute__((always_inline)) int alloc__t667t(uint64_t bytes, char** __t2753t) {
  char* allocated=0;
  char __t668t__=0;
  char __t669t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t604t(allocated,&__t668t__);
  not__t31t(__t668t__,&__t669t__);
  if(__t669t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2753t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t703t(char** __t2754t, uint64_t* __t2755t, uint16_t* __t2756t, uint16_t* __t2757t, uint64_t size, char** __t2758t, uint64_t* __t2759t, uint16_t* __t2760t, uint16_t* __t2761t) {
  char* buffer__unsafe_ptr=*__t2754t;
  uint64_t buffer__unsafe_size=*__t2755t;
  uint16_t buffer__unsafe_offset=*__t2756t;
  uint16_t buffer__unsafe_align=*__t2757t;
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
  eq__t132t(buffer__unsafe_size,size,&__t707t__);
  if(__t707t__){
  __t708t=0;
  neq__t156t(size,__t708t,&__t709t__);
  if(__t709t__){
  __t710t=0;
  nat__t678t(buffer__unsafe_align,&__t711t__);
  mul__t211t(__t711t__,size,&__t712t__);
  zero__t675t(buffer__unsafe_ptr,__t710t,__t712t__);
  }
  goto __t_return;
  }
  __t714t=0;
  neq__t156t(buffer__unsafe_size,__t714t,&__t715t__);
  if(__t715t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t716t__);
  mul__t211t(__t716t__,size,&__t717t__);
  bytes=__t717t__;
  __t718t=0;
  eq__t132t(bytes,__t718t,&__t719t__);
  if(__t719t__){
  __t_errcode=14;
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
  *__t2754t=buffer__unsafe_ptr;
  *__t2755t=buffer__unsafe_size;
  *__t2756t=buffer__unsafe_offset;
  *__t2757t=buffer__unsafe_align;
  *__t2758t=buffer__unsafe_ptr;
  *__t2759t=buffer__unsafe_size;
  *__t2760t=buffer__unsafe_offset;
  *__t2761t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t835t(char** __t2762t, uint64_t* __t2763t, uint16_t* __t2764t, uint16_t* __t2765t, uint64_t _pos, char** __t2766t, uint64_t* __t2767t, uint16_t* __t2768t, uint16_t* __t2769t, uint64_t* __t2770t) {
  char* buf__unsafe_ptr=*__t2762t;
  uint64_t buf__unsafe_size=*__t2763t;
  uint16_t buf__unsafe_offset=*__t2764t;
  uint16_t buf__unsafe_align=*__t2765t;
  uint64_t __t836t=0;
  uint64_t pos=0;
  __t836t=_pos;
  pos=__t836t;
  goto __t_return;
  __t_return:
  *__t2762t=buf__unsafe_ptr;
  *__t2763t=buf__unsafe_size;
  *__t2764t=buf__unsafe_offset;
  *__t2765t=buf__unsafe_align;
  *__t2766t=buf__unsafe_ptr;
  *__t2767t=buf__unsafe_size;
  *__t2768t=buf__unsafe_offset;
  *__t2769t=buf__unsafe_align;
  *__t2770t=pos;
}

static inline __attribute__((always_inline)) void arena__t838t(char** __t2771t, uint64_t* __t2772t, uint16_t* __t2773t, uint16_t* __t2774t, char** __t2775t, uint64_t* __t2776t, uint16_t* __t2777t, uint16_t* __t2778t, uint64_t* __t2779t) {
  char* buf__unsafe_ptr=*__t2771t;
  uint64_t buf__unsafe_size=*__t2772t;
  uint16_t buf__unsafe_offset=*__t2773t;
  uint16_t buf__unsafe_align=*__t2774t;
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
  *__t2771t=buf__unsafe_ptr;
  *__t2772t=buf__unsafe_size;
  *__t2773t=buf__unsafe_offset;
  *__t2774t=buf__unsafe_align;
  *__t2775t=__t840t__buf__unsafe_ptr;
  *__t2776t=__t840t__buf__unsafe_size;
  *__t2777t=__t840t__buf__unsafe_offset;
  *__t2778t=__t840t__buf__unsafe_align;
  *__t2779t=__t840t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t948t(char** __t2780t, uint64_t* __t2781t, uint16_t* __t2782t, uint16_t* __t2783t) {
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

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, const char* from, char** __t2784t) {
  *__t2784t=to;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t2785t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2785t=z;
}

static inline __attribute__((always_inline)) void ge__t336t(uint64_t x, uint64_t y, char* __t2786t) {
  int __t337t__=0;
  char z=0;
  is_different__t106t(x,y,&__t337t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2786t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t24t(char* to, char* from, char** __t2787t) {
  *__t2787t=to;
}

static inline __attribute__((always_inline)) void add__t676t(char* allocated, uint64_t offset, char** __t2788t) {
  char* element=0;
  char* __t677t__=0;
  element=allocated+offset;
  unsafe_attach_type__t24t(element,allocated,&__t677t__);
  goto __t_return;
  __t_return:
  *__t2788t=__t677t__;
}

static inline __attribute__((always_inline)) int get__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2789t) {
  char __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  char* __t829t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t336t(i,buffer__unsafe_size,&__t824t__);
  if(__t824t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t678t(buffer__unsafe_align,&__t825t__);
  mul__t211t(i,__t825t__,&__t826t__);
  nat__t678t(buffer__unsafe_offset,&__t827t__);
  add__t187t(__t826t__,__t827t__,&__t828t__);
  add__t676t(buffer__unsafe_ptr,__t828t__,&__t829t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2789t=__t829t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t967t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2790t, uint64_t* __t2791t, uint64_t* __t2792t, char* __t2793t) {
  goto __t_return;
  __t_return:
  *__t2790t=unsafe_ptr;
  *__t2791t=dat__pos;
  *__t2792t=dat__length;
  *__t2793t=dat__first;
}

static inline __attribute__((always_inline)) int str__t971t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2794t, uint64_t* __t2795t, uint64_t* __t2796t, char* __t2797t) {
  char* unsafe_ptr=0;
  uint64_t __t972t__=0;
  uint64_t __t973t=0;
  char __t974t__=0;
  uint64_t __t975t__=0;
  uint64_t __t976t=0;
  char __t977t__=0;
  char* __t978t__unsafe_ptr=0;
  uint64_t __t978t__dat__pos=0;
  uint64_t __t978t__dat__length=0;
  char __t978t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t678t(buf__unsafe_align,&__t972t__);
  __t973t=1;
  neq__t156t(__t972t__,__t973t,&__t974t__);
  if(__t974t__){
  __t_errcode=19;
  goto __t_failure;
  }
  nat__t678t(buf__unsafe_offset,&__t975t__);
  __t976t=0;
  neq__t156t(__t975t__,__t976t,&__t977t__);
  if(__t977t__){
  __t_errcode=20;
  goto __t_failure;
  }
  str__t967t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t978t__unsafe_ptr,&__t978t__dat__pos,&__t978t__dat__length,&__t978t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2794t=__t978t__unsafe_ptr;
  *__t2795t=__t978t__dat__pos;
  *__t2796t=__t978t__dat__length;
  *__t2797t=__t978t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1005t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2798t, uint64_t* __t2799t, uint64_t* __t2800t, char* __t2801t) {
  uint64_t __t1006t=0;
  char __t1007t__=0;
  char* __t1009t__=0;
  char __t1010t__value=0;
  char first=0;
  char* __t1011t__unsafe_ptr=0;
  uint64_t __t1011t__dat__pos=0;
  uint64_t __t1011t__dat__length=0;
  char __t1011t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1006t=0;
  neq__t156t(length,__t1006t,&__t1007t__);
  if(__t1007t__){
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1009t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1010t__value,__t1009t__,1);
  first=__t1010t__value;
  }
  __t_errcode=str__t971t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1011t__unsafe_ptr,&__t1011t__dat__pos,&__t1011t__dat__length,&__t1011t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2798t=__t1011t__unsafe_ptr;
  *__t2799t=__t1011t__dat__pos;
  *__t2800t=__t1011t__dat__length;
  *__t2801t=__t1011t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1027t(const char* c, char** __t2802t, uint64_t* __t2803t, uint64_t* __t2804t, char* __t2805t) {
  char* __t1028t__unsafe_ptr=0;
  uint64_t __t1028t__unsafe_size=0;
  uint16_t __t1028t__unsafe_offset=0;
  uint16_t __t1028t__unsafe_align=0;
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__unsafe_size=0;
  uint16_t __t1029t__unsafe_offset=0;
  uint16_t __t1029t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1030t__=0;
  uint64_t length=0;
  uint64_t __t1031t=0;
  uint64_t __t1032t__=0;
  uint64_t __t1033t=0;
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__dat__pos=0;
  uint64_t __t1035t__dat__length=0;
  char __t1035t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t948t(&__t1028t__unsafe_ptr,&__t1028t__unsafe_size,&__t1028t__unsafe_offset,&__t1028t__unsafe_align);
  __t1029t__unsafe_ptr=__t1028t__unsafe_ptr;
  __t1029t__unsafe_size=__t1028t__unsafe_size;
  __t1029t__unsafe_offset=__t1028t__unsafe_offset;
  __t1029t__unsafe_align=__t1028t__unsafe_align;
  buf__unsafe_ptr=__t1029t__unsafe_ptr;
  buf__unsafe_size=__t1029t__unsafe_size;
  buf__unsafe_offset=__t1029t__unsafe_offset;
  buf__unsafe_align=__t1029t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t25t(buf__unsafe_ptr,c,&__t1030t__);
  buf__unsafe_ptr=__t1030t__;
  if(c){
  length=strlen(c);
  }
  __t1031t=1;
  add__t187t(length,__t1031t,&__t1032t__);
  buf__unsafe_size=__t1032t__;
  __t1033t=0;
  __t_errcode=str__t1005t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1033t,length,&__t1035t__unsafe_ptr,&__t1035t__dat__pos,&__t1035t__dat__length,&__t1035t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2802t=__t1035t__unsafe_ptr;
  *__t2803t=__t1035t__dat__pos;
  *__t2804t=__t1035t__dat__length;
  *__t2805t=__t1035t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1036t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2806t) {
  goto __t_return;
  __t_return:
  *__t2806t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t830t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2807t) {
  goto __t_return;
  __t_return:
  *__t2807t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t288t(uint64_t x, uint64_t y, char* __t2808t) {
  int __t289t__=0;
  char z=0;
  is_different__t106t(x,y,&__t289t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2808t=z;
}

static inline __attribute__((always_inline)) void allocated__t841t(char** __t2809t, uint64_t* __t2810t, uint16_t* __t2811t, uint16_t* __t2812t, uint64_t pos, char** __t2813t, uint64_t* __t2814t, uint16_t* __t2815t, uint16_t* __t2816t, uint64_t* __t2817t) {
  char* buf__unsafe_ptr=*__t2809t;
  uint64_t buf__unsafe_size=*__t2810t;
  uint16_t buf__unsafe_offset=*__t2811t;
  uint16_t buf__unsafe_align=*__t2812t;
  goto __t_return;
  __t_return:
  *__t2809t=buf__unsafe_ptr;
  *__t2810t=buf__unsafe_size;
  *__t2811t=buf__unsafe_offset;
  *__t2812t=buf__unsafe_align;
  *__t2813t=buf__unsafe_ptr;
  *__t2814t=buf__unsafe_size;
  *__t2815t=buf__unsafe_offset;
  *__t2816t=buf__unsafe_align;
  *__t2817t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2818t, uint64_t* __t2819t, uint16_t* __t2820t, uint16_t* __t2821t, uint64_t* __t2822t, uint64_t length, char** __t2823t, uint64_t* __t2824t, uint16_t* __t2825t, uint16_t* __t2826t, uint64_t* __t2827t) {
  char* allocator__buf__unsafe_ptr=*__t2818t;
  uint64_t allocator__buf__unsafe_size=*__t2819t;
  uint16_t allocator__buf__unsafe_offset=*__t2820t;
  uint16_t allocator__buf__unsafe_align=*__t2821t;
  uint64_t allocator__pos=*__t2822t;
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
  add__t187t(allocator__pos,length,&__t875t__);
  next_pos=__t875t__;
  len__t830t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t876t__);
  gt__t288t(next_pos,__t876t__,&__t877t__);
  if(__t877t__){
  __t_errcode=17;
  goto __t_failure;
  }
  __t878t=0;
  add__t187t(allocator__pos,__t878t,&__t879t__);
  pos=__t879t__;
  allocator__pos=next_pos;
  allocated__t841t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t880t__buf__unsafe_ptr,&__t880t__buf__unsafe_size,&__t880t__buf__unsafe_offset,&__t880t__buf__unsafe_align,&__t880t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2818t=allocator__buf__unsafe_ptr;
  *__t2819t=allocator__buf__unsafe_size;
  *__t2820t=allocator__buf__unsafe_offset;
  *__t2821t=allocator__buf__unsafe_align;
  *__t2822t=allocator__pos;
  *__t2823t=__t880t__buf__unsafe_ptr;
  *__t2824t=__t880t__buf__unsafe_size;
  *__t2825t=__t880t__buf__unsafe_offset;
  *__t2826t=__t880t__buf__unsafe_align;
  *__t2827t=__t880t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1058t(char** __t2828t, uint64_t* __t2829t, uint16_t* __t2830t, uint16_t* __t2831t, uint64_t* __t2832t, const char* _other, char** __t2833t, uint64_t* __t2834t, uint64_t* __t2835t, char* __t2836t) {
  char* CHARS__buf__unsafe_ptr=*__t2828t;
  uint64_t CHARS__buf__unsafe_size=*__t2829t;
  uint16_t CHARS__buf__unsafe_offset=*__t2830t;
  uint16_t CHARS__buf__unsafe_align=*__t2831t;
  uint64_t CHARS__pos=*__t2832t;
  char* __t1059t__unsafe_ptr=0;
  uint64_t __t1059t__dat__pos=0;
  uint64_t __t1059t__dat__length=0;
  char __t1059t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1060t__=0;
  char* __t1061t__buf__unsafe_ptr=0;
  uint64_t __t1061t__buf__unsafe_size=0;
  uint16_t __t1061t__buf__unsafe_offset=0;
  uint16_t __t1061t__buf__unsafe_align=0;
  uint64_t __t1061t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1062t__unsafe_ptr=0;
  uint64_t __t1062t__dat__pos=0;
  uint64_t __t1062t__dat__length=0;
  char __t1062t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1027t(_other,&__t1059t__unsafe_ptr,&__t1059t__dat__pos,&__t1059t__dat__length,&__t1059t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1059t__unsafe_ptr;
  other__dat__pos=__t1059t__dat__pos;
  other__dat__length=__t1059t__dat__length;
  other__dat__first=__t1059t__dat__first;
  len__t1036t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1060t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1060t__,&__t1061t__buf__unsafe_ptr,&__t1061t__buf__unsafe_size,&__t1061t__buf__unsafe_offset,&__t1061t__buf__unsafe_align,&__t1061t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1061t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1061t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1061t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1061t__buf__unsafe_align;
  surface__pos=__t1061t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t971t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1062t__unsafe_ptr,&__t1062t__dat__pos,&__t1062t__dat__length,&__t1062t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2828t=CHARS__buf__unsafe_ptr;
  *__t2829t=CHARS__buf__unsafe_size;
  *__t2830t=CHARS__buf__unsafe_offset;
  *__t2831t=CHARS__buf__unsafe_align;
  *__t2832t=CHARS__pos;
  *__t2833t=__t1062t__unsafe_ptr;
  *__t2834t=__t1062t__dat__pos;
  *__t2835t=__t1062t__dat__length;
  *__t2836t=__t1062t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2585t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2586t(const char* path, char** __t2837t) {
  char* unsafe_ptr=0;
  char __t2588t__=0;
  char __t2589t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t604t(unsafe_ptr,&__t2588t__);
  not__t31t(__t2588t__,&__t2589t__);
  if(__t2589t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2585t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2837t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2597t(char** __t2838t, const char** __t2839t) {
  char* f__unsafe_ptr=*__t2838t;
  char __t2598t__=0;
  char __t2599t__=0;
  char* de=0;
  char __t2600t__=0;
  char __t2601t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t604t(f__unsafe_ptr,&__t2598t__);
  not__t31t(__t2598t__,&__t2599t__);
  if(__t2599t__){
  __t_errcode=53;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t604t(de,&__t2600t__);
  not__t31t(__t2600t__,&__t2601t__);
  if(__t2601t__){
  __t_errcode=54;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2838t=f__unsafe_ptr;
  *__t2839t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2602t(char** __t2840t, char** __t2841t, uint64_t* __t2842t, uint64_t* __t2843t, char* __t2844t) {
  char* f__unsafe_ptr=*__t2840t;
  const char* __t2603t__=0;
  char* __t2604t__unsafe_ptr=0;
  uint64_t __t2604t__dat__pos=0;
  uint64_t __t2604t__dat__length=0;
  char __t2604t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2597t(&f__unsafe_ptr,&__t2603t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1027t(__t2603t__,&__t2604t__unsafe_ptr,&__t2604t__dat__pos,&__t2604t__dat__length,&__t2604t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2840t=f__unsafe_ptr;
  *__t2841t=__t2604t__unsafe_ptr;
  *__t2842t=__t2604t__dat__pos;
  *__t2843t=__t2604t__dat__length;
  *__t2844t=__t2604t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2668t(char** __t2845t, uint64_t __t_anon1, char** __t2846t, uint64_t* __t2847t, uint64_t* __t2848t, char* __t2849t) {
  char* data__unsafe_ptr=*__t2845t;
  char* __t2669t__unsafe_ptr=0;
  uint64_t __t2669t__dat__pos=0;
  uint64_t __t2669t__dat__length=0;
  char __t2669t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2602t(&data__unsafe_ptr,&__t2669t__unsafe_ptr,&__t2669t__dat__pos,&__t2669t__dat__length,&__t2669t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2845t=data__unsafe_ptr;
  *__t2846t=__t2669t__unsafe_ptr;
  *__t2847t=__t2669t__dat__pos;
  *__t2848t=__t2669t__dat__length;
  *__t2849t=__t2669t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1004t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2850t, uint64_t* __t2851t, uint64_t* __t2852t, char* __t2853t) {
  goto __t_return;
  __t_return:
  *__t2850t=other__unsafe_ptr;
  *__t2851t=other__dat__pos;
  *__t2852t=other__dat__length;
  *__t2853t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t264t(uint64_t x, uint64_t y, char* __t2854t) {
  int __t265t__=0;
  char z=0;
  is_different__t106t(x,y,&__t265t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2854t=z;
}

static inline __attribute__((always_inline)) int sub__t364t(uint64_t x, uint64_t y, uint64_t* __t2855t) {
  int __t365t__=0;
  int __t366t=0;
  int __t367t=0;
  char __t368t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t106t(x,y,&__t365t__);
  lt__t264t(x,y,&__t368t__);
  if(__t368t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2855t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1162t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2856t) {
  uint64_t __t1163t__=0;
  char* __t1164t__=0;
  add__t187t(s__dat__pos,i,&__t1163t__);
  add__t676t(s__unsafe_ptr,__t1163t__,&__t1164t__);
  goto __t_return;
  __t_return:
  *__t2856t=__t1164t__;
}

int slice__t1185t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2857t, uint64_t* __t2858t, uint64_t* __t2859t, char* __t2860t) {
  char* __t1186t__unsafe_ptr=0;
  uint64_t __t1186t__dat__pos=0;
  uint64_t __t1186t__dat__length=0;
  char __t1186t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1187t__=0;
  char* __t1188t__unsafe_ptr=0;
  uint64_t __t1188t__dat__pos=0;
  uint64_t __t1188t__dat__length=0;
  char __t1188t__dat__first=0;
  char __t1189t__=0;
  char __t1190t__=0;
  char __t1191t=0;
  char __t1192t__=0;
  uint64_t __t1193t__=0;
  uint64_t new_length=0;
  uint64_t __t1194t=0;
  char __t1195t__=0;
  char new_first=0;
  char* __t1197t__=0;
  char __t1198t__value=0;
  uint64_t __t1199t__=0;
  char* __t1200t__unsafe_ptr=0;
  uint64_t __t1200t__dat__pos=0;
  uint64_t __t1200t__dat__length=0;
  char __t1200t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1004t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1186t__unsafe_ptr,&__t1186t__dat__pos,&__t1186t__dat__length,&__t1186t__dat__first);
  s__unsafe_ptr=__t1186t__unsafe_ptr;
  s__dat__pos=__t1186t__dat__pos;
  s__dat__length=__t1186t__dat__length;
  s__dat__first=__t1186t__dat__first;
  eq__t132t(from,to,&__t1187t__);
  if(__t1187t__){
  __t_errcode=str__t1027t(__t387t,&__t1188t__unsafe_ptr,&__t1188t__dat__pos,&__t1188t__dat__length,&__t1188t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t288t(from,to,&__t1189t__);
  if(!__t1189t__){
  gt__t288t(to,s__dat__length,&__t1190t__);
  __t1191t=__t1190t__;
  }
  else{
  __t1191t=0;
  not__t31t(__t1191t,&__t1192t__);
  __t1191t=__t1192t__;
  }
  if(__t1191t){
  __t_errcode=23;
  goto __t_failure;
  }
  __t_errcode=sub__t364t(to,from,&__t1193t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1193t__;
  __t1194t=0;
  neq__t156t(from,__t1194t,&__t1195t__);
  if(__t1195t__){
  get__t1162t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1197t__);
  if(!__t1197t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1198t__value,__t1197t__,1);
  new_first=__t1198t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t187t(s__dat__pos,from,&__t1199t__);
  str__t967t(s__unsafe_ptr,__t1199t__,new_length,new_first,&__t1200t__unsafe_ptr,&__t1200t__dat__pos,&__t1200t__dat__length,&__t1200t__dat__first);
  __t1188t__unsafe_ptr=__t1200t__unsafe_ptr;
  __t1188t__dat__pos=__t1200t__dat__pos;
  __t1188t__dat__length=__t1200t__dat__length;
  __t1188t__dat__first=__t1200t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2857t=__t1188t__unsafe_ptr;
  *__t2858t=__t1188t__dat__pos;
  *__t2859t=__t1188t__dat__length;
  *__t2860t=__t1188t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1040t(char x, char y, char* __t2861t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2861t=z;
}

static inline __attribute__((always_inline)) void eq__t1105t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2862t) {
  uint64_t __t1106t__=0;
  uint64_t n=0;
  uint64_t __t1107t__=0;
  char __t1108t__=0;
  char __t1109t=0;
  char __t1110t__=0;
  char __t1111t=0;
  char z=0;
  len__t1036t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1106t__);
  n=__t1106t__;
  len__t1036t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1107t__);
  neq__t156t(n,__t1107t__,&__t1108t__);
  if(__t1108t__){
  __t1109t=0;
  goto __t_return;
  }
  neq__t1040t(x__dat__first,y__dat__first,&__t1110t__);
  if(__t1110t__){
  __t1111t=0;
  __t1109t=__t1111t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1109t=z;
  goto __t_return;
  __t_return:
  *__t2862t=__t1109t;
}

static inline __attribute__((always_inline)) int ends_with__t1265t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2863t) {
  char* __t1266t__unsafe_ptr=0;
  uint64_t __t1266t__dat__pos=0;
  uint64_t __t1266t__dat__length=0;
  char __t1266t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1267t__unsafe_ptr=0;
  uint64_t __t1267t__dat__pos=0;
  uint64_t __t1267t__dat__length=0;
  char __t1267t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1268t__=0;
  char __t1269t=0;
  uint64_t __t1270t__=0;
  uint64_t n=0;
  uint64_t __t1271t__=0;
  uint64_t __t1272t__=0;
  char* __t1273t__unsafe_ptr=0;
  uint64_t __t1273t__dat__pos=0;
  uint64_t __t1273t__dat__length=0;
  char __t1273t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1274t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1004t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1266t__unsafe_ptr,&__t1266t__dat__pos,&__t1266t__dat__length,&__t1266t__dat__first);
  stack__unsafe_ptr=__t1266t__unsafe_ptr;
  stack__dat__pos=__t1266t__dat__pos;
  stack__dat__length=__t1266t__dat__length;
  stack__dat__first=__t1266t__dat__first;
  __t_errcode=str__t1027t(_needle,&__t1267t__unsafe_ptr,&__t1267t__dat__pos,&__t1267t__dat__length,&__t1267t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1267t__unsafe_ptr;
  needle__dat__pos=__t1267t__dat__pos;
  needle__dat__length=__t1267t__dat__length;
  needle__dat__first=__t1267t__dat__first;
  lt__t264t(stack__dat__length,needle__dat__length,&__t1268t__);
  if(__t1268t__){
  __t1269t=0;
  goto __t_return;
  }
  len__t1036t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1270t__);
  n=__t1270t__;
  len__t1036t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1271t__);
  __t_errcode=sub__t364t(n,__t1271t__,&__t1272t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1185t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1272t__,n,&__t1273t__unsafe_ptr,&__t1273t__dat__pos,&__t1273t__dat__length,&__t1273t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1273t__unsafe_ptr;
  ret__dat__pos=__t1273t__dat__pos;
  ret__dat__length=__t1273t__dat__length;
  ret__dat__first=__t1273t__dat__first;
  eq__t1105t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1274t__);
  __t1269t=__t1274t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2863t=__t1269t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1136t(char** __t2864t, uint64_t* __t2865t, uint16_t* __t2866t, uint16_t* __t2867t, uint64_t* __t2868t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2869t, uint64_t* __t2870t, uint64_t* __t2871t, char* __t2872t) {
  char* CHARS__buf__unsafe_ptr=*__t2864t;
  uint64_t CHARS__buf__unsafe_size=*__t2865t;
  uint16_t CHARS__buf__unsafe_offset=*__t2866t;
  uint16_t CHARS__buf__unsafe_align=*__t2867t;
  uint64_t CHARS__pos=*__t2868t;
  char* __t1137t__unsafe_ptr=0;
  uint64_t __t1137t__dat__pos=0;
  uint64_t __t1137t__dat__length=0;
  char __t1137t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1138t__=0;
  uint64_t __t1139t__=0;
  uint64_t null_pos=0;
  uint64_t __t1140t=0;
  uint64_t __t1141t__=0;
  uint64_t next_pos=0;
  uint64_t __t1142t__=0;
  char __t1143t__=0;
  char* endpos=0;
  uint64_t __t1144t=0;
  uint64_t __t1145t__=0;
  uint64_t prev_pos=0;
  char* __t1146t__unsafe_ptr=0;
  uint64_t __t1146t__dat__pos=0;
  uint64_t __t1146t__dat__length=0;
  char __t1146t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1004t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1137t__unsafe_ptr,&__t1137t__dat__pos,&__t1137t__dat__length,&__t1137t__dat__first);
  other__unsafe_ptr=__t1137t__unsafe_ptr;
  other__dat__pos=__t1137t__dat__pos;
  other__dat__length=__t1137t__dat__length;
  other__dat__first=__t1137t__dat__first;
  len__t1036t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1138t__);
  add__t187t(CHARS__pos,__t1138t__,&__t1139t__);
  null_pos=__t1139t__;
  __t1140t=1;
  add__t187t(null_pos,__t1140t,&__t1141t__);
  next_pos=__t1141t__;
  len__t830t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1142t__);
  gt__t288t(next_pos,__t1142t__,&__t1143t__);
  if(__t1143t__){
  __t_errcode=22;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1144t=0;
  add__t187t(CHARS__pos,__t1144t,&__t1145t__);
  prev_pos=__t1145t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t971t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1146t__unsafe_ptr,&__t1146t__dat__pos,&__t1146t__dat__length,&__t1146t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2864t=CHARS__buf__unsafe_ptr;
  *__t2865t=CHARS__buf__unsafe_size;
  *__t2866t=CHARS__buf__unsafe_offset;
  *__t2867t=CHARS__buf__unsafe_align;
  *__t2868t=CHARS__pos;
  *__t2869t=__t1146t__unsafe_ptr;
  *__t2870t=__t1146t__dat__pos;
  *__t2871t=__t1146t__dat__length;
  *__t2872t=__t1146t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1102t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2873t) {
  uint64_t __t1103t__=0;
  add__t187t(s__dat__pos,s__dat__length,&__t1103t__);
  goto __t_return;
  __t_return:
  *__t2873t=__t1103t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2874t) {
  int value=0;
  *__t2874t=value;
}

static inline __attribute__((always_inline)) void not__t42t(int __t_anon0, int* __t2875t) {
  int __t43t__=0;
  true__t11t(&__t43t__);
  goto __t_return;
  __t_return:
  *__t2875t=__t43t__;
}

static inline __attribute__((always_inline)) int str__t979t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2876t, uint64_t* __t2877t, uint64_t* __t2878t, char* __t2879t) {
  int __t980t=0;
  int __t981t=0;
  int __t982t__=0;
  uint64_t __t983t__=0;
  char __t984t__=0;
  uint64_t __t985t=0;
  uint64_t __t986t=0;
  char* __t988t__=0;
  char __t989t__value=0;
  char* __t990t__unsafe_ptr=0;
  uint64_t __t990t__dat__pos=0;
  uint64_t __t990t__dat__length=0;
  char __t990t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t42t(__t981t,&__t982t__);
  len__t830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t983t__);
  gt__t288t(length,__t983t__,&__t984t__);
  if(__t984t__){
  __t_errcode=21;
  goto __t_failure;
  }
  __t985t=0;
  __t986t=0;
  __t_errcode=get__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t986t,&__t988t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t988t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t989t__value,__t988t__,1);
  __t_errcode=str__t971t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t985t,length,__t989t__value,&__t990t__unsafe_ptr,&__t990t__dat__pos,&__t990t__dat__length,&__t990t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2876t=__t990t__unsafe_ptr;
  *__t2877t=__t990t__dat__pos;
  *__t2878t=__t990t__dat__length;
  *__t2879t=__t990t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1160t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1161t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t831t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1083t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2880t, uint64_t* __t2881t, uint64_t* __t2882t, char* __t2883t) {
  char* __t1084t__unsafe_ptr=0;
  uint64_t __t1084t__unsafe_size=0;
  uint16_t __t1084t__unsafe_offset=0;
  uint16_t __t1084t__unsafe_align=0;
  uint64_t __t1085t=0;
  uint64_t __t1086t__=0;
  uint64_t __t1087t__=0;
  char* __t1088t__unsafe_ptr=0;
  uint64_t __t1088t__unsafe_size=0;
  uint16_t __t1088t__unsafe_offset=0;
  uint16_t __t1088t__unsafe_align=0;
  char __t1089t____t705t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1090t=0;
  char* __t1091t__unsafe_ptr=0;
  uint64_t __t1091t__dat__pos=0;
  uint64_t __t1091t__dat__length=0;
  char __t1091t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t948t(&__t1084t__unsafe_ptr,&__t1084t__unsafe_size,&__t1084t__unsafe_offset,&__t1084t__unsafe_align);
  __t1085t=1;
  len__t1036t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1086t__);
  add__t187t(__t1085t,__t1086t__,&__t1087t__);
  __t_errcode=alloc__t703t(&__t1084t__unsafe_ptr,&__t1084t__unsafe_size,&__t1084t__unsafe_offset,&__t1084t__unsafe_align,__t1087t__,&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1088t__unsafe_ptr;
  buf__unsafe_size=__t1088t__unsafe_size;
  buf__unsafe_offset=__t1088t__unsafe_offset;
  buf__unsafe_align=__t1088t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1090t=0;
  __t_errcode=str__t971t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1090t,other__dat__length,other__dat__first,&__t1091t__unsafe_ptr,&__t1091t__dat__pos,&__t1091t__dat__length,&__t1091t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t1091t__unsafe_ptr,&__t1089t____t705t__);
  if(__t1089t____t705t__){
  free__t674t(&__t1091t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2880t=__t1091t__unsafe_ptr;
  *__t2881t=__t1091t__dat__pos;
  *__t2882t=__t1091t__dat__length;
  *__t2883t=__t1091t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1092t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2884t, char** __t2885t, uint64_t* __t2886t, uint64_t* __t2887t, char* __t2888t) {
  char* __t1094t__unsafe_ptr=0;
  uint64_t __t1094t__dat__pos=0;
  uint64_t __t1094t__dat__length=0;
  char __t1094t__dat__first=0;
  char __t1095t____t1089t____t705t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1096t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t831t();
  __t_errcode=copy_null_terminated__t1083t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1094t__unsafe_ptr,&__t1094t__dat__pos,&__t1094t__dat__length,&__t1094t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1094t__unsafe_ptr;
  str__dat__pos=__t1094t__dat__pos;
  str__dat__length=__t1094t__dat__length;
  str__dat__first=__t1094t__dat__first;
  add__t676t(str__unsafe_ptr,str__dat__pos,&__t1096t__);
  _ret=__t1096t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t604t(str__unsafe_ptr,&__t1095t____t1089t____t705t__);
  if(__t1095t____t1089t____t705t__){
  free__t674t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2884t=cstr;
  *__t2885t=str__unsafe_ptr;
  *__t2886t=str__dat__pos;
  *__t2887t=str__dat__length;
  *__t2888t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1100t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2889t) {
  goto __t_return;
  __t_return:
  *__t2889t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2145t(const char* cmd, char** __t2890t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2890t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2144t(char* unsafe_ptr, int64_t* __t2891t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2891t=status;
}

static inline __attribute__((always_inline)) void int__t584t(uint64_t x, int64_t* __t2892t) {
  int __t585t=0;
  int __t586t=0;
  int __t587t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2892t=z;
}

static inline __attribute__((always_inline)) void is_different__t90t(int64_t x, int64_t y, int* __t2893t) {
  int __t92t=0;
  int __t93t__=0;
  not__t40t(__t92t,&__t93t__);
  goto __t_return;
  __t_return:
  *__t2893t=__t93t__;
}

static inline __attribute__((always_inline)) void neq__t145t(int64_t x, int64_t y, char* __t2894t) {
  int __t146t__=0;
  char z=0;
  is_different__t90t(x,y,&__t146t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2894t=z;
}

static inline __attribute__((always_inline)) int open__t2146t(const char* cmd, char** __t2895t) {
  char* __t2147t__=0;
  char* unsafe_ptr=0;
  char __t2148t__=0;
  char __t2149t__=0;
  char __t2150t__=0;
  int64_t __t2151t__=0;
  int64_t status=0;
  uint64_t __t2152t=0;
  int64_t __t2153t__=0;
  char __t2154t__=0;
  char __t2155t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2145t(cmd,&__t2147t__);
  unsafe_ptr=__t2147t__;
  exists__t604t(unsafe_ptr,&__t2148t__);
  not__t31t(__t2148t__,&__t2149t__);
  if(__t2149t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(unsafe_ptr,&__t2150t__);
  if(__t2150t__){
  pclose__t2144t(unsafe_ptr,&__t2151t__);
  status=__t2151t__;
  unsafe_ptr=0;
  __t2152t=0;
  int__t584t(__t2152t,&__t2153t__);
  neq__t145t(status,__t2153t__,&__t2154t__);
  if(__t2154t__){
  __t_complain=38;
  __t2155t=__t2155t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2895t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2157t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2896t) {
  const char* __t2158t__cstr=0;
  char* __t2158t__str__unsafe_ptr=0;
  uint64_t __t2158t__str__dat__pos=0;
  uint64_t __t2158t__str__dat__length=0;
  char __t2158t__str__dat__first=0;
  char __t2159t____t1095t____t1089t____t705t__=0;
  const char* __t2160t__=0;
  char* __t2161t__unsafe_ptr=0;
  char __t2162t____t2150t__=0;
  int64_t __t2162t____t2151t__=0;
  int64_t __t2162t__status=0;
  uint64_t __t2162t____t2152t=0;
  int64_t __t2162t____t2153t__=0;
  char __t2162t____t2154t__=0;
  char __t2162t____t2155t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1092t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2158t__cstr,&__t2158t__str__unsafe_ptr,&__t2158t__str__dat__pos,&__t2158t__str__dat__length,&__t2158t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1100t(__t2158t__cstr,__t2158t__str__unsafe_ptr,__t2158t__str__dat__pos,__t2158t__str__dat__length,__t2158t__str__dat__first,&__t2160t__);
  __t_errcode=open__t2146t(__t2160t__,&__t2161t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t604t(__t2161t__unsafe_ptr,&__t2162t____t2150t__);
  if(__t2162t____t2150t__){
  pclose__t2144t(__t2161t__unsafe_ptr,&__t2162t____t2151t__);
  __t2162t__status=__t2162t____t2151t__;
  __t2161t__unsafe_ptr=0;
  __t2162t____t2152t=0;
  int__t584t(__t2162t____t2152t,&__t2162t____t2153t__);
  neq__t145t(__t2162t__status,__t2162t____t2153t__,&__t2162t____t2154t__);
  if(__t2162t____t2154t__){
  __t_complain=38;
  __t2162t____t2155t=__t2162t____t2155t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2896t=__t2161t__unsafe_ptr;
  
  __t_skip_returns:exists__t604t(__t2158t__str__unsafe_ptr,&__t2159t____t1095t____t1089t____t705t__);
  if(__t2159t____t1095t____t1089t____t705t__){
  free__t674t(&__t2158t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2124t(int64_t value, const char** __t2897t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2897t=ret;
}

static inline __attribute__((always_inline)) void print__t393t(const char* value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2701t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2702t__unsafe_ptr=0;
  char __t2703t____t2162t____t2150t__=0;
  int64_t __t2703t____t2162t____t2151t__=0;
  int64_t __t2703t____t2162t__status=0;
  uint64_t __t2703t____t2162t____t2152t=0;
  int64_t __t2703t____t2162t____t2153t__=0;
  char __t2703t____t2162t____t2154t__=0;
  char __t2703t____t2162t____t2155t=0;
  char* proc__unsafe_ptr=0;
  char __t2704t=0;
  int64_t __t2705t=0;
  int64_t error=0;
  const char* __t2706t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2157t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2702t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2702t__unsafe_ptr;
  exists__t604t(__t2702t__unsafe_ptr,&__t2703t____t2162t____t2150t__);
  if(__t2703t____t2162t____t2150t__){
  pclose__t2144t(__t2702t__unsafe_ptr,&__t2703t____t2162t____t2151t__);
  __t2703t____t2162t__status=__t2703t____t2162t____t2151t__;
  __t2702t__unsafe_ptr=0;
  __t2703t____t2162t____t2152t=0;
  int__t584t(__t2703t____t2162t____t2152t,&__t2703t____t2162t____t2153t__);
  neq__t145t(__t2703t____t2162t__status,__t2703t____t2162t____t2153t__,&__t2703t____t2162t____t2154t__);
  if(__t2703t____t2162t____t2154t__){
  __t_complain=38;
  __t2703t____t2162t____t2155t=__t2703t____t2162t____t2155t==0;
  }
  }
  __t2705t=__t_complain;
  __t2704t=(__t_complain==0);
  __t_complain=0;
  error=__t2705t;
  __t2704t=__t2704t==0;
  if(__t2704t){
  cstr__t2124t(error,&__t2706t__);
  print__t393t(__t2706t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2708t() {
  char* __t2713t__unsafe_ptr=0;
  uint64_t __t2713t__unsafe_size=0;
  uint16_t __t2713t__unsafe_offset=0;
  uint16_t __t2713t__unsafe_align=0;
  uint64_t __t2714t=0;
  char* __t2715t__unsafe_ptr=0;
  uint64_t __t2715t__unsafe_size=0;
  uint16_t __t2715t__unsafe_offset=0;
  uint16_t __t2715t__unsafe_align=0;
  char __t2716t____t705t__=0;
  char* __t2717t__buf__unsafe_ptr=0;
  uint64_t __t2717t__buf__unsafe_size=0;
  uint16_t __t2717t__buf__unsafe_offset=0;
  uint16_t __t2717t__buf__unsafe_align=0;
  uint64_t __t2717t__pos=0;
  char* __t2718t__buf__unsafe_ptr=0;
  uint64_t __t2718t__buf__unsafe_size=0;
  uint16_t __t2718t__buf__unsafe_offset=0;
  uint16_t __t2718t__buf__unsafe_align=0;
  uint64_t __t2718t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2721t__unsafe_ptr=0;
  uint64_t __t2721t__dat__pos=0;
  uint64_t __t2721t__dat__length=0;
  char __t2721t__dat__first=0;
  char* __t2722t__unsafe_ptr=0;
  uint64_t __t2722t__dat__pos=0;
  uint64_t __t2722t__dat__length=0;
  char __t2722t__dat__first=0;
  char* __t2723t__unsafe_ptr=0;
  char* __t2725t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2726t=0;
  char __t2727t=0;
  char* __t2728t__unsafe_ptr=0;
  uint64_t __t2728t__dat__pos=0;
  uint64_t __t2728t__dat__length=0;
  char __t2728t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2730t__=0;
  char __t2731t__=0;
  char* __t2732t__buf__unsafe_ptr=0;
  uint64_t __t2732t__buf__unsafe_size=0;
  uint16_t __t2732t__buf__unsafe_offset=0;
  uint16_t __t2732t__buf__unsafe_align=0;
  uint64_t __t2732t__pos=0;
  char* __t2733t__unsafe_ptr=0;
  uint64_t __t2733t__dat__pos=0;
  uint64_t __t2733t__dat__length=0;
  char __t2733t__dat__first=0;
  char* __t2734t__unsafe_ptr=0;
  uint64_t __t2734t__dat__pos=0;
  uint64_t __t2734t__dat__length=0;
  char __t2734t__dat__first=0;
  uint64_t __t2735t__=0;
  char* __t2736t__unsafe_ptr=0;
  uint64_t __t2736t__dat__pos=0;
  uint64_t __t2736t__dat__length=0;
  char __t2736t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t378t();
  char____t_buffer____buffer__t2711t(&__t2713t__unsafe_ptr,&__t2713t__unsafe_size,&__t2713t__unsafe_offset,&__t2713t__unsafe_align);
  __t2714t=256;
  __t_errcode=alloc__t703t(&__t2713t__unsafe_ptr,&__t2713t__unsafe_size,&__t2713t__unsafe_offset,&__t2713t__unsafe_align,__t2714t,&__t2715t__unsafe_ptr,&__t2715t__unsafe_size,&__t2715t__unsafe_offset,&__t2715t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t838t(&__t2715t__unsafe_ptr,&__t2715t__unsafe_size,&__t2715t__unsafe_offset,&__t2715t__unsafe_align,&__t2717t__buf__unsafe_ptr,&__t2717t__buf__unsafe_size,&__t2717t__buf__unsafe_offset,&__t2717t__buf__unsafe_align,&__t2717t__pos);
  __t2718t__buf__unsafe_ptr=__t2717t__buf__unsafe_ptr;
  __t2718t__buf__unsafe_size=__t2717t__buf__unsafe_size;
  __t2718t__buf__unsafe_offset=__t2717t__buf__unsafe_offset;
  __t2718t__buf__unsafe_align=__t2717t__buf__unsafe_align;
  __t2718t__pos=__t2717t__pos;
  CHARS__buf__unsafe_ptr=__t2718t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2718t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2718t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2718t__buf__unsafe_align;
  CHARS__pos=__t2718t__pos;
  path=__t2719t;
  __t_errcode=copy__t1058t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2720t,&__t2721t__unsafe_ptr,&__t2721t__dat__pos,&__t2721t__dat__length,&__t2721t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1058t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2722t__unsafe_ptr,&__t2722t__dat__pos,&__t2722t__dat__length,&__t2722t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2586t(path,&__t2723t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2725t__unsafe_ptr=__t2723t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2725t__unsafe_ptr;
  __t2726t=0-1;
  while(1){
  __t2726t=__t2726t+1;
  __t_complain=get__t2668t(&test_dir__unsafe_ptr,__t2726t,&__t2728t__unsafe_ptr,&__t2728t__dat__pos,&__t2728t__dat__length,&__t2728t__dat__first);
  __t2727t=__t_complain;
  entry__unsafe_ptr=__t2728t__unsafe_ptr;
  entry__dat__pos=__t2728t__dat__pos;
  entry__dat__length=__t2728t__dat__length;
  entry__dat__first=__t2728t__dat__first;
  __t2727t=__t2727t==0;
  if(!__t2727t){
  break;
  }
  __t_errcode=ends_with__t1265t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2729t,&__t2730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t31t(__t2730t__,&__t2731t__);
  if(__t2731t__){
  continue;
  }
  __t2732t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2732t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2732t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2732t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2732t__pos=CHARS__pos;
  str__t1004t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2733t__unsafe_ptr,&__t2733t__dat__pos,&__t2733t__dat__length,&__t2733t__dat__first);
  __t_errcode=copy_null_terminated__t1136t(&__t2732t__buf__unsafe_ptr,&__t2732t__buf__unsafe_size,&__t2732t__buf__unsafe_offset,&__t2732t__buf__unsafe_align,&__t2732t__pos,__t2733t__unsafe_ptr,__t2733t__dat__pos,__t2733t__dat__length,__t2733t__dat__first,&__t2734t__unsafe_ptr,&__t2734t__dat__pos,&__t2734t__dat__length,&__t2734t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1102t(__t2734t__unsafe_ptr,__t2734t__dat__pos,__t2734t__dat__length,__t2734t__dat__first,&__t2735t__);
  __t_errcode=str__t979t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2735t__,&__t2736t__unsafe_ptr,&__t2736t__dat__pos,&__t2736t__dat__length,&__t2736t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2736t__unsafe_ptr;
  command__dat__pos=__t2736t__dat__pos;
  command__dat__length=__t2736t__dat__length;
  command__dat__first=__t2736t__dat__first;
  print__t1160t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2701t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2585t(__t2723t__unsafe_ptr);
  exists__t604t(__t2715t__unsafe_ptr,&__t2716t____t705t__);
  if(__t2716t____t705t__){
  free__t674t(&__t2715t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2708t();return 0;}