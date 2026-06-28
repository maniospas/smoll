#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2730t=".s";
const char* const __t2721t="./smoll --cleanup ";
const char* const __t396t="\n";
const char* const __t2720t="./tests/passing/";
const char* const __t388t="";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2712t(char** __t2740t, uint64_t* __t2741t, uint16_t* __t2742t, uint16_t* __t2743t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2740t=unsafe_ptr;
  *__t2741t=unsafe_size;
  *__t2742t=unsafe_offset;
  *__t2743t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t2744t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2744t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t2745t) {
  char* allocated=*__t2745t;
  if(allocated){
  free(allocated);
  }
  *__t2745t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2746t) {
  int value=0;
  *__t2746t=value;
}

static inline __attribute__((always_inline)) void not__t41t(int __t_anon0, int* __t2747t) {
  int __t42t__=0;
  false__t10t(&__t42t__);
  goto __t_return;
  __t_return:
  *__t2747t=__t42t__;
}

static inline __attribute__((always_inline)) void is_different__t107t(uint64_t x, uint64_t y, int* __t2748t) {
  int __t109t=0;
  int __t110t__=0;
  not__t41t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2748t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2749t) {
  int __t134t__=0;
  char z=0;
  is_different__t107t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2749t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2750t) {
  int __t158t__=0;
  char z=0;
  is_different__t107t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2750t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t2751t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2751t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2752t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2752t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t32t(char value, char* __t2753t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2753t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t2754t) {
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
  *__t2754t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t2755t, uint64_t* __t2756t, uint16_t* __t2757t, uint16_t* __t2758t, uint64_t size, char** __t2759t, uint64_t* __t2760t, uint16_t* __t2761t, uint16_t* __t2762t) {
  char* buffer__unsafe_ptr=*__t2755t;
  uint64_t buffer__unsafe_size=*__t2756t;
  uint16_t buffer__unsafe_offset=*__t2757t;
  uint16_t buffer__unsafe_align=*__t2758t;
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
  *__t2755t=buffer__unsafe_ptr;
  *__t2756t=buffer__unsafe_size;
  *__t2757t=buffer__unsafe_offset;
  *__t2758t=buffer__unsafe_align;
  *__t2759t=buffer__unsafe_ptr;
  *__t2760t=buffer__unsafe_size;
  *__t2761t=buffer__unsafe_offset;
  *__t2762t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t836t(char** __t2763t, uint64_t* __t2764t, uint16_t* __t2765t, uint16_t* __t2766t, uint64_t _pos, char** __t2767t, uint64_t* __t2768t, uint16_t* __t2769t, uint16_t* __t2770t, uint64_t* __t2771t) {
  char* buf__unsafe_ptr=*__t2763t;
  uint64_t buf__unsafe_size=*__t2764t;
  uint16_t buf__unsafe_offset=*__t2765t;
  uint16_t buf__unsafe_align=*__t2766t;
  uint64_t __t837t=0;
  uint64_t pos=0;
  __t837t=_pos;
  pos=__t837t;
  goto __t_return;
  __t_return:
  *__t2763t=buf__unsafe_ptr;
  *__t2764t=buf__unsafe_size;
  *__t2765t=buf__unsafe_offset;
  *__t2766t=buf__unsafe_align;
  *__t2767t=buf__unsafe_ptr;
  *__t2768t=buf__unsafe_size;
  *__t2769t=buf__unsafe_offset;
  *__t2770t=buf__unsafe_align;
  *__t2771t=pos;
}

static inline __attribute__((always_inline)) void arena__t839t(char** __t2772t, uint64_t* __t2773t, uint16_t* __t2774t, uint16_t* __t2775t, char** __t2776t, uint64_t* __t2777t, uint16_t* __t2778t, uint16_t* __t2779t, uint64_t* __t2780t) {
  char* buf__unsafe_ptr=*__t2772t;
  uint64_t buf__unsafe_size=*__t2773t;
  uint16_t buf__unsafe_offset=*__t2774t;
  uint16_t buf__unsafe_align=*__t2775t;
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
  *__t2772t=buf__unsafe_ptr;
  *__t2773t=buf__unsafe_size;
  *__t2774t=buf__unsafe_offset;
  *__t2775t=buf__unsafe_align;
  *__t2776t=__t841t__buf__unsafe_ptr;
  *__t2777t=__t841t__buf__unsafe_size;
  *__t2778t=__t841t__buf__unsafe_offset;
  *__t2779t=__t841t__buf__unsafe_align;
  *__t2780t=__t841t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t949t(char** __t2781t, uint64_t* __t2782t, uint16_t* __t2783t, uint16_t* __t2784t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2781t=unsafe_ptr;
  *__t2782t=unsafe_size;
  *__t2783t=unsafe_offset;
  *__t2784t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t26t(char* to, const char* from, char** __t2785t) {
  *__t2785t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2786t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t107t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2786t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2787t) {
  int __t338t__=0;
  char z=0;
  is_different__t107t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2787t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t25t(char* to, char* from, char** __t2788t) {
  *__t2788t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t2789t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t25t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t2789t=__t678t__;
}

static inline __attribute__((always_inline)) int get__t824t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2790t) {
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
  *__t2790t=__t830t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t968t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2791t, uint64_t* __t2792t, uint64_t* __t2793t, char* __t2794t) {
  goto __t_return;
  __t_return:
  *__t2791t=unsafe_ptr;
  *__t2792t=dat__pos;
  *__t2793t=dat__length;
  *__t2794t=dat__first;
}

static inline __attribute__((always_inline)) int str__t972t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2795t, uint64_t* __t2796t, uint64_t* __t2797t, char* __t2798t) {
  char* unsafe_ptr=0;
  uint64_t __t973t__=0;
  uint64_t __t974t=0;
  char __t975t__=0;
  uint64_t __t976t__=0;
  uint64_t __t977t=0;
  char __t978t__=0;
  char* __t979t__unsafe_ptr=0;
  uint64_t __t979t__dat__pos=0;
  uint64_t __t979t__dat__length=0;
  char __t979t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t679t(buf__unsafe_align,&__t973t__);
  __t974t=1;
  neq__t157t(__t973t__,__t974t,&__t975t__);
  if(__t975t__){
  __t_errcode=19;
  goto __t_failure;
  }
  nat__t679t(buf__unsafe_offset,&__t976t__);
  __t977t=0;
  neq__t157t(__t976t__,__t977t,&__t978t__);
  if(__t978t__){
  __t_errcode=20;
  goto __t_failure;
  }
  str__t968t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t979t__unsafe_ptr,&__t979t__dat__pos,&__t979t__dat__length,&__t979t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2795t=__t979t__unsafe_ptr;
  *__t2796t=__t979t__dat__pos;
  *__t2797t=__t979t__dat__length;
  *__t2798t=__t979t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1006t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2799t, uint64_t* __t2800t, uint64_t* __t2801t, char* __t2802t) {
  uint64_t __t1007t=0;
  char __t1008t__=0;
  char* __t1010t__=0;
  char __t1011t__value=0;
  char first=0;
  char* __t1012t__unsafe_ptr=0;
  uint64_t __t1012t__dat__pos=0;
  uint64_t __t1012t__dat__length=0;
  char __t1012t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1007t=0;
  neq__t157t(length,__t1007t,&__t1008t__);
  if(__t1008t__){
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1010t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1010t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1011t__value,__t1010t__,1);
  first=__t1011t__value;
  }
  __t_errcode=str__t972t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1012t__unsafe_ptr,&__t1012t__dat__pos,&__t1012t__dat__length,&__t1012t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2799t=__t1012t__unsafe_ptr;
  *__t2800t=__t1012t__dat__pos;
  *__t2801t=__t1012t__dat__length;
  *__t2802t=__t1012t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1028t(const char* c, char** __t2803t, uint64_t* __t2804t, uint64_t* __t2805t, char* __t2806t) {
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__unsafe_size=0;
  uint16_t __t1029t__unsafe_offset=0;
  uint16_t __t1029t__unsafe_align=0;
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__unsafe_size=0;
  uint16_t __t1030t__unsafe_offset=0;
  uint16_t __t1030t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1031t__=0;
  uint64_t length=0;
  uint64_t __t1032t=0;
  uint64_t __t1033t__=0;
  uint64_t __t1034t=0;
  char* __t1036t__unsafe_ptr=0;
  uint64_t __t1036t__dat__pos=0;
  uint64_t __t1036t__dat__length=0;
  char __t1036t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t949t(&__t1029t__unsafe_ptr,&__t1029t__unsafe_size,&__t1029t__unsafe_offset,&__t1029t__unsafe_align);
  __t1030t__unsafe_ptr=__t1029t__unsafe_ptr;
  __t1030t__unsafe_size=__t1029t__unsafe_size;
  __t1030t__unsafe_offset=__t1029t__unsafe_offset;
  __t1030t__unsafe_align=__t1029t__unsafe_align;
  buf__unsafe_ptr=__t1030t__unsafe_ptr;
  buf__unsafe_size=__t1030t__unsafe_size;
  buf__unsafe_offset=__t1030t__unsafe_offset;
  buf__unsafe_align=__t1030t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t26t(buf__unsafe_ptr,c,&__t1031t__);
  buf__unsafe_ptr=__t1031t__;
  if(c){
  length=strlen(c);
  }
  __t1032t=1;
  add__t188t(length,__t1032t,&__t1033t__);
  buf__unsafe_size=__t1033t__;
  __t1034t=0;
  __t_errcode=str__t1006t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1034t,length,&__t1036t__unsafe_ptr,&__t1036t__dat__pos,&__t1036t__dat__length,&__t1036t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2803t=__t1036t__unsafe_ptr;
  *__t2804t=__t1036t__dat__pos;
  *__t2805t=__t1036t__dat__length;
  *__t2806t=__t1036t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1037t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2807t) {
  goto __t_return;
  __t_return:
  *__t2807t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t831t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2808t) {
  goto __t_return;
  __t_return:
  *__t2808t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t2809t) {
  int __t290t__=0;
  char z=0;
  is_different__t107t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2809t=z;
}

static inline __attribute__((always_inline)) void allocated__t842t(char** __t2810t, uint64_t* __t2811t, uint16_t* __t2812t, uint16_t* __t2813t, uint64_t pos, char** __t2814t, uint64_t* __t2815t, uint16_t* __t2816t, uint16_t* __t2817t, uint64_t* __t2818t) {
  char* buf__unsafe_ptr=*__t2810t;
  uint64_t buf__unsafe_size=*__t2811t;
  uint16_t buf__unsafe_offset=*__t2812t;
  uint16_t buf__unsafe_align=*__t2813t;
  goto __t_return;
  __t_return:
  *__t2810t=buf__unsafe_ptr;
  *__t2811t=buf__unsafe_size;
  *__t2812t=buf__unsafe_offset;
  *__t2813t=buf__unsafe_align;
  *__t2814t=buf__unsafe_ptr;
  *__t2815t=buf__unsafe_size;
  *__t2816t=buf__unsafe_offset;
  *__t2817t=buf__unsafe_align;
  *__t2818t=pos;
}

static inline __attribute__((always_inline)) int alloc__t874t(char** __t2819t, uint64_t* __t2820t, uint16_t* __t2821t, uint16_t* __t2822t, uint64_t* __t2823t, uint64_t length, char** __t2824t, uint64_t* __t2825t, uint16_t* __t2826t, uint16_t* __t2827t, uint64_t* __t2828t) {
  char* allocator__buf__unsafe_ptr=*__t2819t;
  uint64_t allocator__buf__unsafe_size=*__t2820t;
  uint16_t allocator__buf__unsafe_offset=*__t2821t;
  uint16_t allocator__buf__unsafe_align=*__t2822t;
  uint64_t allocator__pos=*__t2823t;
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
  *__t2819t=allocator__buf__unsafe_ptr;
  *__t2820t=allocator__buf__unsafe_size;
  *__t2821t=allocator__buf__unsafe_offset;
  *__t2822t=allocator__buf__unsafe_align;
  *__t2823t=allocator__pos;
  *__t2824t=__t881t__buf__unsafe_ptr;
  *__t2825t=__t881t__buf__unsafe_size;
  *__t2826t=__t881t__buf__unsafe_offset;
  *__t2827t=__t881t__buf__unsafe_align;
  *__t2828t=__t881t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1059t(char** __t2829t, uint64_t* __t2830t, uint16_t* __t2831t, uint16_t* __t2832t, uint64_t* __t2833t, const char* _other, char** __t2834t, uint64_t* __t2835t, uint64_t* __t2836t, char* __t2837t) {
  char* CHARS__buf__unsafe_ptr=*__t2829t;
  uint64_t CHARS__buf__unsafe_size=*__t2830t;
  uint16_t CHARS__buf__unsafe_offset=*__t2831t;
  uint16_t CHARS__buf__unsafe_align=*__t2832t;
  uint64_t CHARS__pos=*__t2833t;
  char* __t1060t__unsafe_ptr=0;
  uint64_t __t1060t__dat__pos=0;
  uint64_t __t1060t__dat__length=0;
  char __t1060t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1061t__=0;
  char* __t1062t__buf__unsafe_ptr=0;
  uint64_t __t1062t__buf__unsafe_size=0;
  uint16_t __t1062t__buf__unsafe_offset=0;
  uint16_t __t1062t__buf__unsafe_align=0;
  uint64_t __t1062t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1063t__unsafe_ptr=0;
  uint64_t __t1063t__dat__pos=0;
  uint64_t __t1063t__dat__length=0;
  char __t1063t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1028t(_other,&__t1060t__unsafe_ptr,&__t1060t__dat__pos,&__t1060t__dat__length,&__t1060t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1060t__unsafe_ptr;
  other__dat__pos=__t1060t__dat__pos;
  other__dat__length=__t1060t__dat__length;
  other__dat__first=__t1060t__dat__first;
  len__t1037t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1061t__);
  __t_errcode=alloc__t874t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1061t__,&__t1062t__buf__unsafe_ptr,&__t1062t__buf__unsafe_size,&__t1062t__buf__unsafe_offset,&__t1062t__buf__unsafe_align,&__t1062t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1062t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1062t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1062t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1062t__buf__unsafe_align;
  surface__pos=__t1062t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t972t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1063t__unsafe_ptr,&__t1063t__dat__pos,&__t1063t__dat__length,&__t1063t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2829t=CHARS__buf__unsafe_ptr;
  *__t2830t=CHARS__buf__unsafe_size;
  *__t2831t=CHARS__buf__unsafe_offset;
  *__t2832t=CHARS__buf__unsafe_align;
  *__t2833t=CHARS__pos;
  *__t2834t=__t1063t__unsafe_ptr;
  *__t2835t=__t1063t__dat__pos;
  *__t2836t=__t1063t__dat__length;
  *__t2837t=__t1063t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2586t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2587t(const char* path, char** __t2838t) {
  char* unsafe_ptr=0;
  char __t2589t__=0;
  char __t2590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t605t(unsafe_ptr,&__t2589t__);
  not__t32t(__t2589t__,&__t2590t__);
  if(__t2590t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2586t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2838t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2598t(char** __t2839t, const char** __t2840t) {
  char* f__unsafe_ptr=*__t2839t;
  char __t2599t__=0;
  char __t2600t__=0;
  char* de=0;
  char __t2601t__=0;
  char __t2602t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t605t(f__unsafe_ptr,&__t2599t__);
  not__t32t(__t2599t__,&__t2600t__);
  if(__t2600t__){
  __t_errcode=53;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t605t(de,&__t2601t__);
  not__t32t(__t2601t__,&__t2602t__);
  if(__t2602t__){
  __t_errcode=54;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2839t=f__unsafe_ptr;
  *__t2840t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2603t(char** __t2841t, char** __t2842t, uint64_t* __t2843t, uint64_t* __t2844t, char* __t2845t) {
  char* f__unsafe_ptr=*__t2841t;
  const char* __t2604t__=0;
  char* __t2605t__unsafe_ptr=0;
  uint64_t __t2605t__dat__pos=0;
  uint64_t __t2605t__dat__length=0;
  char __t2605t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2598t(&f__unsafe_ptr,&__t2604t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1028t(__t2604t__,&__t2605t__unsafe_ptr,&__t2605t__dat__pos,&__t2605t__dat__length,&__t2605t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2841t=f__unsafe_ptr;
  *__t2842t=__t2605t__unsafe_ptr;
  *__t2843t=__t2605t__dat__pos;
  *__t2844t=__t2605t__dat__length;
  *__t2845t=__t2605t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2669t(char** __t2846t, uint64_t __t_anon1, char** __t2847t, uint64_t* __t2848t, uint64_t* __t2849t, char* __t2850t) {
  char* data__unsafe_ptr=*__t2846t;
  char* __t2670t__unsafe_ptr=0;
  uint64_t __t2670t__dat__pos=0;
  uint64_t __t2670t__dat__length=0;
  char __t2670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2603t(&data__unsafe_ptr,&__t2670t__unsafe_ptr,&__t2670t__dat__pos,&__t2670t__dat__length,&__t2670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2846t=data__unsafe_ptr;
  *__t2847t=__t2670t__unsafe_ptr;
  *__t2848t=__t2670t__dat__pos;
  *__t2849t=__t2670t__dat__length;
  *__t2850t=__t2670t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1005t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2851t, uint64_t* __t2852t, uint64_t* __t2853t, char* __t2854t) {
  goto __t_return;
  __t_return:
  *__t2851t=other__unsafe_ptr;
  *__t2852t=other__dat__pos;
  *__t2853t=other__dat__length;
  *__t2854t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t2855t) {
  int __t266t__=0;
  char z=0;
  is_different__t107t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2855t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t2856t) {
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
  *__t2856t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1163t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2857t) {
  uint64_t __t1164t__=0;
  char* __t1165t__=0;
  add__t188t(s__dat__pos,i,&__t1164t__);
  add__t677t(s__unsafe_ptr,__t1164t__,&__t1165t__);
  goto __t_return;
  __t_return:
  *__t2857t=__t1165t__;
}

int slice__t1186t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2858t, uint64_t* __t2859t, uint64_t* __t2860t, char* __t2861t) {
  char* __t1187t__unsafe_ptr=0;
  uint64_t __t1187t__dat__pos=0;
  uint64_t __t1187t__dat__length=0;
  char __t1187t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1188t__=0;
  char* __t1189t__unsafe_ptr=0;
  uint64_t __t1189t__dat__pos=0;
  uint64_t __t1189t__dat__length=0;
  char __t1189t__dat__first=0;
  char __t1190t__=0;
  char __t1191t__=0;
  char __t1192t=0;
  char __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t new_length=0;
  uint64_t __t1195t=0;
  char __t1196t__=0;
  char new_first=0;
  char* __t1198t__=0;
  char __t1199t__value=0;
  uint64_t __t1200t__=0;
  char* __t1201t__unsafe_ptr=0;
  uint64_t __t1201t__dat__pos=0;
  uint64_t __t1201t__dat__length=0;
  char __t1201t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1005t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1187t__unsafe_ptr,&__t1187t__dat__pos,&__t1187t__dat__length,&__t1187t__dat__first);
  s__unsafe_ptr=__t1187t__unsafe_ptr;
  s__dat__pos=__t1187t__dat__pos;
  s__dat__length=__t1187t__dat__length;
  s__dat__first=__t1187t__dat__first;
  eq__t133t(from,to,&__t1188t__);
  if(__t1188t__){
  __t_errcode=str__t1028t(__t388t,&__t1189t__unsafe_ptr,&__t1189t__dat__pos,&__t1189t__dat__length,&__t1189t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1190t__);
  if(!__t1190t__){
  gt__t289t(to,s__dat__length,&__t1191t__);
  __t1192t=__t1191t__;
  }
  else{
  __t1192t=0;
  not__t32t(__t1192t,&__t1193t__);
  __t1192t=__t1193t__;
  }
  if(__t1192t){
  __t_errcode=23;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1194t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1194t__;
  __t1195t=0;
  neq__t157t(from,__t1195t,&__t1196t__);
  if(__t1196t__){
  get__t1163t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1198t__);
  if(!__t1198t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1199t__value,__t1198t__,1);
  new_first=__t1199t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1200t__);
  str__t968t(s__unsafe_ptr,__t1200t__,new_length,new_first,&__t1201t__unsafe_ptr,&__t1201t__dat__pos,&__t1201t__dat__length,&__t1201t__dat__first);
  __t1189t__unsafe_ptr=__t1201t__unsafe_ptr;
  __t1189t__dat__pos=__t1201t__dat__pos;
  __t1189t__dat__length=__t1201t__dat__length;
  __t1189t__dat__first=__t1201t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2858t=__t1189t__unsafe_ptr;
  *__t2859t=__t1189t__dat__pos;
  *__t2860t=__t1189t__dat__length;
  *__t2861t=__t1189t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1041t(char x, char y, char* __t2862t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2862t=z;
}

static inline __attribute__((always_inline)) void eq__t1106t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2863t) {
  uint64_t __t1107t__=0;
  uint64_t n=0;
  uint64_t __t1108t__=0;
  char __t1109t__=0;
  char __t1110t=0;
  char __t1111t__=0;
  char __t1112t=0;
  char z=0;
  len__t1037t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1107t__);
  n=__t1107t__;
  len__t1037t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1108t__);
  neq__t157t(n,__t1108t__,&__t1109t__);
  if(__t1109t__){
  __t1110t=0;
  goto __t_return;
  }
  neq__t1041t(x__dat__first,y__dat__first,&__t1111t__);
  if(__t1111t__){
  __t1112t=0;
  __t1110t=__t1112t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1110t=z;
  goto __t_return;
  __t_return:
  *__t2863t=__t1110t;
}

static inline __attribute__((always_inline)) int ends_with__t1266t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2864t) {
  char* __t1267t__unsafe_ptr=0;
  uint64_t __t1267t__dat__pos=0;
  uint64_t __t1267t__dat__length=0;
  char __t1267t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1268t__unsafe_ptr=0;
  uint64_t __t1268t__dat__pos=0;
  uint64_t __t1268t__dat__length=0;
  char __t1268t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1269t__=0;
  char __t1270t=0;
  uint64_t __t1271t__=0;
  uint64_t n=0;
  uint64_t __t1272t__=0;
  uint64_t __t1273t__=0;
  char* __t1274t__unsafe_ptr=0;
  uint64_t __t1274t__dat__pos=0;
  uint64_t __t1274t__dat__length=0;
  char __t1274t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1275t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1005t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1267t__unsafe_ptr,&__t1267t__dat__pos,&__t1267t__dat__length,&__t1267t__dat__first);
  stack__unsafe_ptr=__t1267t__unsafe_ptr;
  stack__dat__pos=__t1267t__dat__pos;
  stack__dat__length=__t1267t__dat__length;
  stack__dat__first=__t1267t__dat__first;
  __t_errcode=str__t1028t(_needle,&__t1268t__unsafe_ptr,&__t1268t__dat__pos,&__t1268t__dat__length,&__t1268t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1268t__unsafe_ptr;
  needle__dat__pos=__t1268t__dat__pos;
  needle__dat__length=__t1268t__dat__length;
  needle__dat__first=__t1268t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1269t__);
  if(__t1269t__){
  __t1270t=0;
  goto __t_return;
  }
  len__t1037t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1271t__);
  n=__t1271t__;
  len__t1037t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1272t__);
  __t_errcode=sub__t365t(n,__t1272t__,&__t1273t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1186t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1273t__,n,&__t1274t__unsafe_ptr,&__t1274t__dat__pos,&__t1274t__dat__length,&__t1274t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1274t__unsafe_ptr;
  ret__dat__pos=__t1274t__dat__pos;
  ret__dat__length=__t1274t__dat__length;
  ret__dat__first=__t1274t__dat__first;
  eq__t1106t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1275t__);
  __t1270t=__t1275t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2864t=__t1270t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1137t(char** __t2865t, uint64_t* __t2866t, uint16_t* __t2867t, uint16_t* __t2868t, uint64_t* __t2869t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2870t, uint64_t* __t2871t, uint64_t* __t2872t, char* __t2873t) {
  char* CHARS__buf__unsafe_ptr=*__t2865t;
  uint64_t CHARS__buf__unsafe_size=*__t2866t;
  uint16_t CHARS__buf__unsafe_offset=*__t2867t;
  uint16_t CHARS__buf__unsafe_align=*__t2868t;
  uint64_t CHARS__pos=*__t2869t;
  char* __t1138t__unsafe_ptr=0;
  uint64_t __t1138t__dat__pos=0;
  uint64_t __t1138t__dat__length=0;
  char __t1138t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1139t__=0;
  uint64_t __t1140t__=0;
  uint64_t null_pos=0;
  uint64_t __t1141t=0;
  uint64_t __t1142t__=0;
  uint64_t next_pos=0;
  uint64_t __t1143t__=0;
  char __t1144t__=0;
  char* endpos=0;
  uint64_t __t1145t=0;
  uint64_t __t1146t__=0;
  uint64_t prev_pos=0;
  char* __t1147t__unsafe_ptr=0;
  uint64_t __t1147t__dat__pos=0;
  uint64_t __t1147t__dat__length=0;
  char __t1147t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1005t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1138t__unsafe_ptr,&__t1138t__dat__pos,&__t1138t__dat__length,&__t1138t__dat__first);
  other__unsafe_ptr=__t1138t__unsafe_ptr;
  other__dat__pos=__t1138t__dat__pos;
  other__dat__length=__t1138t__dat__length;
  other__dat__first=__t1138t__dat__first;
  len__t1037t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1139t__);
  add__t188t(CHARS__pos,__t1139t__,&__t1140t__);
  null_pos=__t1140t__;
  __t1141t=1;
  add__t188t(null_pos,__t1141t,&__t1142t__);
  next_pos=__t1142t__;
  len__t831t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1143t__);
  gt__t289t(next_pos,__t1143t__,&__t1144t__);
  if(__t1144t__){
  __t_errcode=22;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1145t=0;
  add__t188t(CHARS__pos,__t1145t,&__t1146t__);
  prev_pos=__t1146t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t972t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1147t__unsafe_ptr,&__t1147t__dat__pos,&__t1147t__dat__length,&__t1147t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2865t=CHARS__buf__unsafe_ptr;
  *__t2866t=CHARS__buf__unsafe_size;
  *__t2867t=CHARS__buf__unsafe_offset;
  *__t2868t=CHARS__buf__unsafe_align;
  *__t2869t=CHARS__pos;
  *__t2870t=__t1147t__unsafe_ptr;
  *__t2871t=__t1147t__dat__pos;
  *__t2872t=__t1147t__dat__length;
  *__t2873t=__t1147t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1103t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2874t) {
  uint64_t __t1104t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1104t__);
  goto __t_return;
  __t_return:
  *__t2874t=__t1104t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2875t) {
  int value=0;
  *__t2875t=value;
}

static inline __attribute__((always_inline)) void not__t43t(int __t_anon0, int* __t2876t) {
  int __t44t__=0;
  true__t11t(&__t44t__);
  goto __t_return;
  __t_return:
  *__t2876t=__t44t__;
}

static inline __attribute__((always_inline)) int str__t980t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2877t, uint64_t* __t2878t, uint64_t* __t2879t, char* __t2880t) {
  int __t981t=0;
  int __t982t=0;
  int __t983t__=0;
  uint64_t __t984t__=0;
  char __t985t__=0;
  uint64_t __t986t=0;
  uint64_t __t987t=0;
  char* __t989t__=0;
  char __t990t__value=0;
  char* __t991t__unsafe_ptr=0;
  uint64_t __t991t__dat__pos=0;
  uint64_t __t991t__dat__length=0;
  char __t991t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t43t(__t982t,&__t983t__);
  len__t831t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t984t__);
  gt__t289t(length,__t984t__,&__t985t__);
  if(__t985t__){
  __t_errcode=21;
  goto __t_failure;
  }
  __t986t=0;
  __t987t=0;
  __t_errcode=get__t824t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t987t,&__t989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t989t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t990t__value,__t989t__,1);
  __t_errcode=str__t972t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t986t,length,__t990t__value,&__t991t__unsafe_ptr,&__t991t__dat__pos,&__t991t__dat__length,&__t991t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2877t=__t991t__unsafe_ptr;
  *__t2878t=__t991t__dat__pos;
  *__t2879t=__t991t__dat__length;
  *__t2880t=__t991t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1161t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1162t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t832t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1084t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2881t, uint64_t* __t2882t, uint64_t* __t2883t, char* __t2884t) {
  char* __t1085t__unsafe_ptr=0;
  uint64_t __t1085t__unsafe_size=0;
  uint16_t __t1085t__unsafe_offset=0;
  uint16_t __t1085t__unsafe_align=0;
  uint64_t __t1086t=0;
  uint64_t __t1087t__=0;
  uint64_t __t1088t__=0;
  char* __t1089t__unsafe_ptr=0;
  uint64_t __t1089t__unsafe_size=0;
  uint16_t __t1089t__unsafe_offset=0;
  uint16_t __t1089t__unsafe_align=0;
  char __t1090t____t706t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1091t=0;
  char* __t1092t__unsafe_ptr=0;
  uint64_t __t1092t__dat__pos=0;
  uint64_t __t1092t__dat__length=0;
  char __t1092t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t949t(&__t1085t__unsafe_ptr,&__t1085t__unsafe_size,&__t1085t__unsafe_offset,&__t1085t__unsafe_align);
  __t1086t=1;
  len__t1037t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1087t__);
  add__t188t(__t1086t,__t1087t__,&__t1088t__);
  __t_errcode=alloc__t704t(&__t1085t__unsafe_ptr,&__t1085t__unsafe_size,&__t1085t__unsafe_offset,&__t1085t__unsafe_align,__t1088t__,&__t1089t__unsafe_ptr,&__t1089t__unsafe_size,&__t1089t__unsafe_offset,&__t1089t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1089t__unsafe_ptr;
  buf__unsafe_size=__t1089t__unsafe_size;
  buf__unsafe_offset=__t1089t__unsafe_offset;
  buf__unsafe_align=__t1089t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1091t=0;
  __t_errcode=str__t972t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1091t,other__dat__length,other__dat__first,&__t1092t__unsafe_ptr,&__t1092t__dat__pos,&__t1092t__dat__length,&__t1092t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t1092t__unsafe_ptr,&__t1090t____t706t__);
  if(__t1090t____t706t__){
  free__t675t(&__t1092t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2881t=__t1092t__unsafe_ptr;
  *__t2882t=__t1092t__dat__pos;
  *__t2883t=__t1092t__dat__length;
  *__t2884t=__t1092t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1093t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2885t, char** __t2886t, uint64_t* __t2887t, uint64_t* __t2888t, char* __t2889t) {
  char* __t1095t__unsafe_ptr=0;
  uint64_t __t1095t__dat__pos=0;
  uint64_t __t1095t__dat__length=0;
  char __t1095t__dat__first=0;
  char __t1096t____t1090t____t706t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1097t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t832t();
  __t_errcode=copy_null_terminated__t1084t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1095t__unsafe_ptr,&__t1095t__dat__pos,&__t1095t__dat__length,&__t1095t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1095t__unsafe_ptr;
  str__dat__pos=__t1095t__dat__pos;
  str__dat__length=__t1095t__dat__length;
  str__dat__first=__t1095t__dat__first;
  add__t677t(str__unsafe_ptr,str__dat__pos,&__t1097t__);
  _ret=__t1097t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t605t(str__unsafe_ptr,&__t1096t____t1090t____t706t__);
  if(__t1096t____t1090t____t706t__){
  free__t675t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2885t=cstr;
  *__t2886t=str__unsafe_ptr;
  *__t2887t=str__dat__pos;
  *__t2888t=str__dat__length;
  *__t2889t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1101t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2890t) {
  goto __t_return;
  __t_return:
  *__t2890t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2146t(const char* cmd, char** __t2891t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2891t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2145t(char* unsafe_ptr, int64_t* __t2892t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2892t=status;
}

static inline __attribute__((always_inline)) void int__t585t(uint64_t x, int64_t* __t2893t) {
  int __t586t=0;
  int __t587t=0;
  int __t588t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2893t=z;
}

static inline __attribute__((always_inline)) void is_different__t91t(int64_t x, int64_t y, int* __t2894t) {
  int __t93t=0;
  int __t94t__=0;
  not__t41t(__t93t,&__t94t__);
  goto __t_return;
  __t_return:
  *__t2894t=__t94t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t2895t) {
  int __t147t__=0;
  char z=0;
  is_different__t91t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2895t=z;
}

static inline __attribute__((always_inline)) int open__t2147t(const char* cmd, char** __t2896t) {
  char* __t2148t__=0;
  char* unsafe_ptr=0;
  char __t2149t__=0;
  char __t2150t__=0;
  char __t2151t__=0;
  int64_t __t2152t__=0;
  int64_t status=0;
  uint64_t __t2153t=0;
  int64_t __t2154t__=0;
  char __t2155t__=0;
  char __t2156t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2146t(cmd,&__t2148t__);
  unsafe_ptr=__t2148t__;
  exists__t605t(unsafe_ptr,&__t2149t__);
  not__t32t(__t2149t__,&__t2150t__);
  if(__t2150t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(unsafe_ptr,&__t2151t__);
  if(__t2151t__){
  pclose__t2145t(unsafe_ptr,&__t2152t__);
  status=__t2152t__;
  unsafe_ptr=0;
  __t2153t=0;
  int__t585t(__t2153t,&__t2154t__);
  neq__t146t(status,__t2154t__,&__t2155t__);
  if(__t2155t__){
  __t_complain=38;
  __t2156t=__t2156t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2896t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2158t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2897t) {
  const char* __t2159t__cstr=0;
  char* __t2159t__str__unsafe_ptr=0;
  uint64_t __t2159t__str__dat__pos=0;
  uint64_t __t2159t__str__dat__length=0;
  char __t2159t__str__dat__first=0;
  char __t2160t____t1096t____t1090t____t706t__=0;
  const char* __t2161t__=0;
  char* __t2162t__unsafe_ptr=0;
  char __t2163t____t2151t__=0;
  int64_t __t2163t____t2152t__=0;
  int64_t __t2163t__status=0;
  uint64_t __t2163t____t2153t=0;
  int64_t __t2163t____t2154t__=0;
  char __t2163t____t2155t__=0;
  char __t2163t____t2156t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1093t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2159t__cstr,&__t2159t__str__unsafe_ptr,&__t2159t__str__dat__pos,&__t2159t__str__dat__length,&__t2159t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1101t(__t2159t__cstr,__t2159t__str__unsafe_ptr,__t2159t__str__dat__pos,__t2159t__str__dat__length,__t2159t__str__dat__first,&__t2161t__);
  __t_errcode=open__t2147t(__t2161t__,&__t2162t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t605t(__t2162t__unsafe_ptr,&__t2163t____t2151t__);
  if(__t2163t____t2151t__){
  pclose__t2145t(__t2162t__unsafe_ptr,&__t2163t____t2152t__);
  __t2163t__status=__t2163t____t2152t__;
  __t2162t__unsafe_ptr=0;
  __t2163t____t2153t=0;
  int__t585t(__t2163t____t2153t,&__t2163t____t2154t__);
  neq__t146t(__t2163t__status,__t2163t____t2154t__,&__t2163t____t2155t__);
  if(__t2163t____t2155t__){
  __t_complain=38;
  __t2163t____t2156t=__t2163t____t2156t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t2897t=__t2162t__unsafe_ptr;
  
  __t_skip_returns:exists__t605t(__t2159t__str__unsafe_ptr,&__t2160t____t1096t____t1090t____t706t__);
  if(__t2160t____t1096t____t1090t____t706t__){
  free__t675t(&__t2159t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2125t(int64_t value, const char** __t2898t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2898t=ret;
}

static inline __attribute__((always_inline)) void print__t394t(const char* value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t396t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2702t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2703t__unsafe_ptr=0;
  char __t2704t____t2163t____t2151t__=0;
  int64_t __t2704t____t2163t____t2152t__=0;
  int64_t __t2704t____t2163t__status=0;
  uint64_t __t2704t____t2163t____t2153t=0;
  int64_t __t2704t____t2163t____t2154t__=0;
  char __t2704t____t2163t____t2155t__=0;
  char __t2704t____t2163t____t2156t=0;
  char* proc__unsafe_ptr=0;
  char __t2705t=0;
  int64_t __t2706t=0;
  int64_t error=0;
  const char* __t2707t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2158t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2703t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2703t__unsafe_ptr;
  exists__t605t(__t2703t__unsafe_ptr,&__t2704t____t2163t____t2151t__);
  if(__t2704t____t2163t____t2151t__){
  pclose__t2145t(__t2703t__unsafe_ptr,&__t2704t____t2163t____t2152t__);
  __t2704t____t2163t__status=__t2704t____t2163t____t2152t__;
  __t2703t__unsafe_ptr=0;
  __t2704t____t2163t____t2153t=0;
  int__t585t(__t2704t____t2163t____t2153t,&__t2704t____t2163t____t2154t__);
  neq__t146t(__t2704t____t2163t__status,__t2704t____t2163t____t2154t__,&__t2704t____t2163t____t2155t__);
  if(__t2704t____t2163t____t2155t__){
  __t_complain=38;
  __t2704t____t2163t____t2156t=__t2704t____t2163t____t2156t==0;
  }
  }
  __t2706t=__t_complain;
  __t2705t=(__t_complain==0);
  __t_complain=0;
  error=__t2706t;
  __t2705t=__t2705t==0;
  if(__t2705t){
  cstr__t2125t(error,&__t2707t__);
  print__t394t(__t2707t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2709t() {
  char* __t2714t__unsafe_ptr=0;
  uint64_t __t2714t__unsafe_size=0;
  uint16_t __t2714t__unsafe_offset=0;
  uint16_t __t2714t__unsafe_align=0;
  uint64_t __t2715t=0;
  char* __t2716t__unsafe_ptr=0;
  uint64_t __t2716t__unsafe_size=0;
  uint16_t __t2716t__unsafe_offset=0;
  uint16_t __t2716t__unsafe_align=0;
  char __t2717t____t706t__=0;
  char* __t2718t__buf__unsafe_ptr=0;
  uint64_t __t2718t__buf__unsafe_size=0;
  uint16_t __t2718t__buf__unsafe_offset=0;
  uint16_t __t2718t__buf__unsafe_align=0;
  uint64_t __t2718t__pos=0;
  char* __t2719t__buf__unsafe_ptr=0;
  uint64_t __t2719t__buf__unsafe_size=0;
  uint16_t __t2719t__buf__unsafe_offset=0;
  uint16_t __t2719t__buf__unsafe_align=0;
  uint64_t __t2719t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2722t__unsafe_ptr=0;
  uint64_t __t2722t__dat__pos=0;
  uint64_t __t2722t__dat__length=0;
  char __t2722t__dat__first=0;
  char* __t2723t__unsafe_ptr=0;
  uint64_t __t2723t__dat__pos=0;
  uint64_t __t2723t__dat__length=0;
  char __t2723t__dat__first=0;
  char* __t2724t__unsafe_ptr=0;
  char* __t2726t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2727t=0;
  char __t2728t=0;
  char* __t2729t__unsafe_ptr=0;
  uint64_t __t2729t__dat__pos=0;
  uint64_t __t2729t__dat__length=0;
  char __t2729t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2731t__=0;
  char __t2732t__=0;
  char* __t2733t__buf__unsafe_ptr=0;
  uint64_t __t2733t__buf__unsafe_size=0;
  uint16_t __t2733t__buf__unsafe_offset=0;
  uint16_t __t2733t__buf__unsafe_align=0;
  uint64_t __t2733t__pos=0;
  char* __t2734t__unsafe_ptr=0;
  uint64_t __t2734t__dat__pos=0;
  uint64_t __t2734t__dat__length=0;
  char __t2734t__dat__first=0;
  char* __t2735t__unsafe_ptr=0;
  uint64_t __t2735t__dat__pos=0;
  uint64_t __t2735t__dat__length=0;
  char __t2735t__dat__first=0;
  uint64_t __t2736t__=0;
  char* __t2737t__unsafe_ptr=0;
  uint64_t __t2737t__dat__pos=0;
  uint64_t __t2737t__dat__length=0;
  char __t2737t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  char____t_buffer____buffer__t2712t(&__t2714t__unsafe_ptr,&__t2714t__unsafe_size,&__t2714t__unsafe_offset,&__t2714t__unsafe_align);
  __t2715t=256;
  __t_errcode=alloc__t704t(&__t2714t__unsafe_ptr,&__t2714t__unsafe_size,&__t2714t__unsafe_offset,&__t2714t__unsafe_align,__t2715t,&__t2716t__unsafe_ptr,&__t2716t__unsafe_size,&__t2716t__unsafe_offset,&__t2716t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t839t(&__t2716t__unsafe_ptr,&__t2716t__unsafe_size,&__t2716t__unsafe_offset,&__t2716t__unsafe_align,&__t2718t__buf__unsafe_ptr,&__t2718t__buf__unsafe_size,&__t2718t__buf__unsafe_offset,&__t2718t__buf__unsafe_align,&__t2718t__pos);
  __t2719t__buf__unsafe_ptr=__t2718t__buf__unsafe_ptr;
  __t2719t__buf__unsafe_size=__t2718t__buf__unsafe_size;
  __t2719t__buf__unsafe_offset=__t2718t__buf__unsafe_offset;
  __t2719t__buf__unsafe_align=__t2718t__buf__unsafe_align;
  __t2719t__pos=__t2718t__pos;
  CHARS__buf__unsafe_ptr=__t2719t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2719t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2719t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2719t__buf__unsafe_align;
  CHARS__pos=__t2719t__pos;
  path=__t2720t;
  __t_errcode=copy__t1059t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2721t,&__t2722t__unsafe_ptr,&__t2722t__dat__pos,&__t2722t__dat__length,&__t2722t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1059t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2723t__unsafe_ptr,&__t2723t__dat__pos,&__t2723t__dat__length,&__t2723t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2587t(path,&__t2724t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2726t__unsafe_ptr=__t2724t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2726t__unsafe_ptr;
  __t2727t=0-1;
  while(1){
  __t2727t=__t2727t+1;
  __t_complain=get__t2669t(&test_dir__unsafe_ptr,__t2727t,&__t2729t__unsafe_ptr,&__t2729t__dat__pos,&__t2729t__dat__length,&__t2729t__dat__first);
  __t2728t=__t_complain;
  entry__unsafe_ptr=__t2729t__unsafe_ptr;
  entry__dat__pos=__t2729t__dat__pos;
  entry__dat__length=__t2729t__dat__length;
  entry__dat__first=__t2729t__dat__first;
  __t2728t=__t2728t==0;
  if(!__t2728t){
  break;
  }
  __t_errcode=ends_with__t1266t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2730t,&__t2731t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t32t(__t2731t__,&__t2732t__);
  if(__t2732t__){
  continue;
  }
  __t2733t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2733t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2733t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2733t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2733t__pos=CHARS__pos;
  str__t1005t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2734t__unsafe_ptr,&__t2734t__dat__pos,&__t2734t__dat__length,&__t2734t__dat__first);
  __t_errcode=copy_null_terminated__t1137t(&__t2733t__buf__unsafe_ptr,&__t2733t__buf__unsafe_size,&__t2733t__buf__unsafe_offset,&__t2733t__buf__unsafe_align,&__t2733t__pos,__t2734t__unsafe_ptr,__t2734t__dat__pos,__t2734t__dat__length,__t2734t__dat__first,&__t2735t__unsafe_ptr,&__t2735t__dat__pos,&__t2735t__dat__length,&__t2735t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1103t(__t2735t__unsafe_ptr,__t2735t__dat__pos,__t2735t__dat__length,__t2735t__dat__first,&__t2736t__);
  __t_errcode=str__t980t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2736t__,&__t2737t__unsafe_ptr,&__t2737t__dat__pos,&__t2737t__dat__length,&__t2737t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2737t__unsafe_ptr;
  command__dat__pos=__t2737t__dat__pos;
  command__dat__length=__t2737t__dat__length;
  command__dat__first=__t2737t__dat__first;
  print__t1161t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2702t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2586t(__t2724t__unsafe_ptr);
  exists__t605t(__t2716t__unsafe_ptr,&__t2717t____t706t__);
  if(__t2717t____t706t__){
  free__t675t(&__t2716t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2709t();return 0;}