#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t400t="\n";
const char* const __t3015t="./tests/passing/";
const char* const __t3025t=".s";
const char* const __t388t="";
const char* const __t3016t="./smoll --cleanup ";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
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

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t3007t(char** __t3035t, uint64_t* __t3036t, uint32_t* __t3037t, uint32_t* __t3038t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3035t=unsafe_ptr;
  *__t3036t=unsafe_size;
  *__t3037t=unsafe_offset;
  *__t3038t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t3039t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3039t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t3040t) {
  char* allocated=*__t3040t;
  if(allocated){
  free(allocated);
  }
  *__t3040t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3041t) {
  int value=0;
  *__t3041t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3042t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3042t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3043t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3043t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3044t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3044t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3045t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3045t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t3046t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3046t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3047t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3047t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3048t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3048t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t3049t) {
  char* allocated=0;
  char __t673t__=0;
  char __t674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t609t(allocated,&__t673t__);
  not__t41t(__t673t__,&__t674t__);
  if(__t674t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3049t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t709t(char** __t3050t, uint64_t* __t3051t, uint32_t* __t3052t, uint32_t* __t3053t, uint64_t size, char** __t3054t, uint64_t* __t3055t, uint32_t* __t3056t, uint32_t* __t3057t) {
  char* buffer__unsafe_ptr=*__t3050t;
  uint64_t buffer__unsafe_size=*__t3051t;
  uint32_t buffer__unsafe_offset=*__t3052t;
  uint32_t buffer__unsafe_align=*__t3053t;
  int __t710t=0;
  char __t711t__=0;
  char __t713t__=0;
  uint64_t __t714t=0;
  char __t715t__=0;
  uint64_t __t716t=0;
  uint64_t __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t __t720t=0;
  char __t721t__=0;
  uint64_t __t722t__=0;
  uint64_t __t723t__=0;
  uint64_t bytes=0;
  uint64_t __t724t=0;
  char __t725t__=0;
  char* __t726t__=0;
  int __t727t=0;
  uint64_t __t728t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t713t__);
  if(__t713t__){
  __t714t=0;
  neq__t157t(size,__t714t,&__t715t__);
  if(__t715t__){
  __t716t=0;
  nat__t684t(buffer__unsafe_align,&__t717t__);
  mul__t212t(__t717t__,size,&__t718t__);
  zero__t680t(buffer__unsafe_ptr,__t716t,__t718t__);
  }
  goto __t_return;
  }
  __t720t=0;
  neq__t157t(buffer__unsafe_size,__t720t,&__t721t__);
  if(__t721t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t722t__);
  mul__t212t(__t722t__,size,&__t723t__);
  bytes=__t723t__;
  __t724t=0;
  eq__t133t(bytes,__t724t,&__t725t__);
  if(__t725t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t672t(bytes,&__t726t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t728t=0;
  zero__t680t(__t726t__,__t728t,bytes);
  buffer__unsafe_ptr=__t726t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t609t(buffer__unsafe_ptr,&__t711t__);
  if(__t711t__){
  free__t679t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3050t=buffer__unsafe_ptr;
  *__t3051t=buffer__unsafe_size;
  *__t3052t=buffer__unsafe_offset;
  *__t3053t=buffer__unsafe_align;
  *__t3054t=buffer__unsafe_ptr;
  *__t3055t=buffer__unsafe_size;
  *__t3056t=buffer__unsafe_offset;
  *__t3057t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t3058t, uint64_t* __t3059t, uint32_t* __t3060t, uint32_t* __t3061t, uint64_t _pos, char** __t3062t, uint64_t* __t3063t, uint32_t* __t3064t, uint32_t* __t3065t, uint64_t* __t3066t) {
  char* buf__unsafe_ptr=*__t3058t;
  uint64_t buf__unsafe_size=*__t3059t;
  uint32_t buf__unsafe_offset=*__t3060t;
  uint32_t buf__unsafe_align=*__t3061t;
  uint64_t __t832t=0;
  uint64_t pos=0;
  __t832t=_pos;
  pos=__t832t;
  goto __t_return;
  __t_return:
  *__t3058t=buf__unsafe_ptr;
  *__t3059t=buf__unsafe_size;
  *__t3060t=buf__unsafe_offset;
  *__t3061t=buf__unsafe_align;
  *__t3062t=buf__unsafe_ptr;
  *__t3063t=buf__unsafe_size;
  *__t3064t=buf__unsafe_offset;
  *__t3065t=buf__unsafe_align;
  *__t3066t=pos;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t3067t, uint64_t* __t3068t, uint32_t* __t3069t, uint32_t* __t3070t, char** __t3071t, uint64_t* __t3072t, uint32_t* __t3073t, uint32_t* __t3074t, uint64_t* __t3075t) {
  char* buf__unsafe_ptr=*__t3067t;
  uint64_t buf__unsafe_size=*__t3068t;
  uint32_t buf__unsafe_offset=*__t3069t;
  uint32_t buf__unsafe_align=*__t3070t;
  uint64_t __t835t=0;
  char* __t836t__buf__unsafe_ptr=0;
  uint64_t __t836t__buf__unsafe_size=0;
  uint32_t __t836t__buf__unsafe_offset=0;
  uint32_t __t836t__buf__unsafe_align=0;
  uint64_t __t836t__pos=0;
  __t835t=0;
  arena__t831t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t835t,&__t836t__buf__unsafe_ptr,&__t836t__buf__unsafe_size,&__t836t__buf__unsafe_offset,&__t836t__buf__unsafe_align,&__t836t__pos);
  goto __t_return;
  __t_return:
  *__t3067t=buf__unsafe_ptr;
  *__t3068t=buf__unsafe_size;
  *__t3069t=buf__unsafe_offset;
  *__t3070t=buf__unsafe_align;
  *__t3071t=__t836t__buf__unsafe_ptr;
  *__t3072t=__t836t__buf__unsafe_size;
  *__t3073t=__t836t__buf__unsafe_offset;
  *__t3074t=__t836t__buf__unsafe_align;
  *__t3075t=__t836t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t967t(char** __t3076t, uint64_t* __t3077t, uint32_t* __t3078t, uint32_t* __t3079t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3076t=unsafe_ptr;
  *__t3077t=unsafe_size;
  *__t3078t=unsafe_offset;
  *__t3079t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3080t) {
  *__t3080t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3081t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3081t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3082t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3082t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3083t) {
  *__t3083t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t3084t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t3084t=__t682t__;
}

static inline __attribute__((always_inline)) int get__t819t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3085t) {
  char __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  char* __t825t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t820t__);
  if(__t820t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t821t__);
  mul__t212t(i,__t821t__,&__t822t__);
  nat__t684t(buffer__unsafe_offset,&__t823t__);
  add__t188t(__t822t__,__t823t__,&__t824t__);
  add__t681t(buffer__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3085t=__t825t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t989t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3086t, uint64_t* __t3087t, uint64_t* __t3088t, char* __t3089t) {
  goto __t_return;
  __t_return:
  *__t3086t=unsafe_ptr;
  *__t3087t=dat__pos;
  *__t3088t=dat__length;
  *__t3089t=dat__first;
}

static inline __attribute__((always_inline)) int str__t993t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3090t, uint64_t* __t3091t, uint64_t* __t3092t, char* __t3093t) {
  char* unsafe_ptr=0;
  uint64_t __t994t__=0;
  uint64_t __t995t=0;
  char __t996t__=0;
  uint64_t __t997t__=0;
  uint64_t __t998t=0;
  char __t999t__=0;
  char* __t1000t__unsafe_ptr=0;
  uint64_t __t1000t__dat__pos=0;
  uint64_t __t1000t__dat__length=0;
  char __t1000t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t994t__);
  __t995t=1;
  neq__t157t(__t994t__,__t995t,&__t996t__);
  if(__t996t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t997t__);
  __t998t=0;
  neq__t157t(__t997t__,__t998t,&__t999t__);
  if(__t999t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t989t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1000t__unsafe_ptr,&__t1000t__dat__pos,&__t1000t__dat__length,&__t1000t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3090t=__t1000t__unsafe_ptr;
  *__t3091t=__t1000t__dat__pos;
  *__t3092t=__t1000t__dat__length;
  *__t3093t=__t1000t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1027t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3094t, uint64_t* __t3095t, uint64_t* __t3096t, char* __t3097t) {
  uint64_t __t1028t=0;
  char __t1029t__=0;
  char* __t1031t__=0;
  char __t1032t__value=0;
  char first=0;
  char* __t1033t__unsafe_ptr=0;
  uint64_t __t1033t__dat__pos=0;
  uint64_t __t1033t__dat__length=0;
  char __t1033t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1028t=0;
  neq__t157t(length,__t1028t,&__t1029t__);
  if(__t1029t__){
  __t_errcode=get__t819t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1031t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1031t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1032t__value,__t1031t__,1);
  first=__t1032t__value;
  }
  __t_errcode=str__t993t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1033t__unsafe_ptr,&__t1033t__dat__pos,&__t1033t__dat__length,&__t1033t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3094t=__t1033t__unsafe_ptr;
  *__t3095t=__t1033t__dat__pos;
  *__t3096t=__t1033t__dat__length;
  *__t3097t=__t1033t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1049t(const char* c, char** __t3098t, uint64_t* __t3099t, uint64_t* __t3100t, char* __t3101t) {
  char* __t1050t__unsafe_ptr=0;
  uint64_t __t1050t__unsafe_size=0;
  uint32_t __t1050t__unsafe_offset=0;
  uint32_t __t1050t__unsafe_align=0;
  char* __t1051t__unsafe_ptr=0;
  uint64_t __t1051t__unsafe_size=0;
  uint32_t __t1051t__unsafe_offset=0;
  uint32_t __t1051t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1052t__=0;
  uint64_t length=0;
  uint64_t __t1053t=0;
  uint64_t __t1054t__=0;
  uint64_t __t1055t=0;
  char* __t1057t__unsafe_ptr=0;
  uint64_t __t1057t__dat__pos=0;
  uint64_t __t1057t__dat__length=0;
  char __t1057t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t967t(&__t1050t__unsafe_ptr,&__t1050t__unsafe_size,&__t1050t__unsafe_offset,&__t1050t__unsafe_align);
  __t1051t__unsafe_ptr=__t1050t__unsafe_ptr;
  __t1051t__unsafe_size=__t1050t__unsafe_size;
  __t1051t__unsafe_offset=__t1050t__unsafe_offset;
  __t1051t__unsafe_align=__t1050t__unsafe_align;
  buf__unsafe_ptr=__t1051t__unsafe_ptr;
  buf__unsafe_size=__t1051t__unsafe_size;
  buf__unsafe_offset=__t1051t__unsafe_offset;
  buf__unsafe_align=__t1051t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1052t__);
  buf__unsafe_ptr=__t1052t__;
  if(c){
  length=strlen(c);
  }
  __t1053t=1;
  add__t188t(length,__t1053t,&__t1054t__);
  buf__unsafe_size=__t1054t__;
  __t1055t=0;
  __t_errcode=str__t1027t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1055t,length,&__t1057t__unsafe_ptr,&__t1057t__dat__pos,&__t1057t__dat__length,&__t1057t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3098t=__t1057t__unsafe_ptr;
  *__t3099t=__t1057t__dat__pos;
  *__t3100t=__t1057t__dat__length;
  *__t3101t=__t1057t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1058t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3102t) {
  goto __t_return;
  __t_return:
  *__t3102t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t826t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3103t) {
  goto __t_return;
  __t_return:
  *__t3103t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3104t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3104t=z;
}

static inline __attribute__((always_inline)) void allocated__t839t(char** __t3105t, uint64_t* __t3106t, uint32_t* __t3107t, uint32_t* __t3108t, uint64_t pos, char** __t3109t, uint64_t* __t3110t, uint32_t* __t3111t, uint32_t* __t3112t, uint64_t* __t3113t) {
  char* buf__unsafe_ptr=*__t3105t;
  uint64_t buf__unsafe_size=*__t3106t;
  uint32_t buf__unsafe_offset=*__t3107t;
  uint32_t buf__unsafe_align=*__t3108t;
  goto __t_return;
  __t_return:
  *__t3105t=buf__unsafe_ptr;
  *__t3106t=buf__unsafe_size;
  *__t3107t=buf__unsafe_offset;
  *__t3108t=buf__unsafe_align;
  *__t3109t=buf__unsafe_ptr;
  *__t3110t=buf__unsafe_size;
  *__t3111t=buf__unsafe_offset;
  *__t3112t=buf__unsafe_align;
  *__t3113t=pos;
}

static inline __attribute__((always_inline)) int alloc__t879t(char** __t3114t, uint64_t* __t3115t, uint32_t* __t3116t, uint32_t* __t3117t, uint64_t* __t3118t, uint64_t length, char** __t3119t, uint64_t* __t3120t, uint32_t* __t3121t, uint32_t* __t3122t, uint64_t* __t3123t) {
  char* allocator__buf__unsafe_ptr=*__t3114t;
  uint64_t allocator__buf__unsafe_size=*__t3115t;
  uint32_t allocator__buf__unsafe_offset=*__t3116t;
  uint32_t allocator__buf__unsafe_align=*__t3117t;
  uint64_t allocator__pos=*__t3118t;
  int __t880t=0;
  uint64_t __t881t__=0;
  uint64_t next_pos=0;
  uint64_t __t882t__=0;
  char __t883t__=0;
  uint64_t __t884t=0;
  uint64_t __t885t__=0;
  uint64_t pos=0;
  char* __t886t__buf__unsafe_ptr=0;
  uint64_t __t886t__buf__unsafe_size=0;
  uint32_t __t886t__buf__unsafe_offset=0;
  uint32_t __t886t__buf__unsafe_align=0;
  uint64_t __t886t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t881t__);
  next_pos=__t881t__;
  len__t826t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t882t__);
  gt__t289t(next_pos,__t882t__,&__t883t__);
  if(__t883t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t884t=0;
  add__t188t(allocator__pos,__t884t,&__t885t__);
  pos=__t885t__;
  allocator__pos=next_pos;
  allocated__t839t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t886t__buf__unsafe_ptr,&__t886t__buf__unsafe_size,&__t886t__buf__unsafe_offset,&__t886t__buf__unsafe_align,&__t886t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3114t=allocator__buf__unsafe_ptr;
  *__t3115t=allocator__buf__unsafe_size;
  *__t3116t=allocator__buf__unsafe_offset;
  *__t3117t=allocator__buf__unsafe_align;
  *__t3118t=allocator__pos;
  *__t3119t=__t886t__buf__unsafe_ptr;
  *__t3120t=__t886t__buf__unsafe_size;
  *__t3121t=__t886t__buf__unsafe_offset;
  *__t3122t=__t886t__buf__unsafe_align;
  *__t3123t=__t886t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1080t(char** __t3124t, uint64_t* __t3125t, uint32_t* __t3126t, uint32_t* __t3127t, uint64_t* __t3128t, const char* _other, char** __t3129t, uint64_t* __t3130t, uint64_t* __t3131t, char* __t3132t) {
  char* CHARS__buf__unsafe_ptr=*__t3124t;
  uint64_t CHARS__buf__unsafe_size=*__t3125t;
  uint32_t CHARS__buf__unsafe_offset=*__t3126t;
  uint32_t CHARS__buf__unsafe_align=*__t3127t;
  uint64_t CHARS__pos=*__t3128t;
  char* __t1081t__unsafe_ptr=0;
  uint64_t __t1081t__dat__pos=0;
  uint64_t __t1081t__dat__length=0;
  char __t1081t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1082t__=0;
  char* __t1083t__buf__unsafe_ptr=0;
  uint64_t __t1083t__buf__unsafe_size=0;
  uint32_t __t1083t__buf__unsafe_offset=0;
  uint32_t __t1083t__buf__unsafe_align=0;
  uint64_t __t1083t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1084t__unsafe_ptr=0;
  uint64_t __t1084t__dat__pos=0;
  uint64_t __t1084t__dat__length=0;
  char __t1084t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1049t(_other,&__t1081t__unsafe_ptr,&__t1081t__dat__pos,&__t1081t__dat__length,&__t1081t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1081t__unsafe_ptr;
  other__dat__pos=__t1081t__dat__pos;
  other__dat__length=__t1081t__dat__length;
  other__dat__first=__t1081t__dat__first;
  len__t1058t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1082t__);
  __t_errcode=alloc__t879t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1082t__,&__t1083t__buf__unsafe_ptr,&__t1083t__buf__unsafe_size,&__t1083t__buf__unsafe_offset,&__t1083t__buf__unsafe_align,&__t1083t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1083t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1083t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1083t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1083t__buf__unsafe_align;
  surface__pos=__t1083t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t993t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1084t__unsafe_ptr,&__t1084t__dat__pos,&__t1084t__dat__length,&__t1084t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3124t=CHARS__buf__unsafe_ptr;
  *__t3125t=CHARS__buf__unsafe_size;
  *__t3126t=CHARS__buf__unsafe_offset;
  *__t3127t=CHARS__buf__unsafe_align;
  *__t3128t=CHARS__pos;
  *__t3129t=__t1084t__unsafe_ptr;
  *__t3130t=__t1084t__dat__pos;
  *__t3131t=__t1084t__dat__length;
  *__t3132t=__t1084t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2869t(char* unsafe_ptr) {
  int __t2871t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2872t(const char* path, char** __t3133t) {
  int __t2874t=0;
  char* unsafe_ptr=0;
  char __t2876t__=0;
  char __t2877t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t609t(unsafe_ptr,&__t2876t__);
  not__t41t(__t2876t__,&__t2877t__);
  if(__t2877t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2869t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3133t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2885t(char** __t3134t, const char** __t3135t) {
  char* f__unsafe_ptr=*__t3134t;
  char __t2886t__=0;
  char __t2887t__=0;
  char* de=0;
  char __t2888t__=0;
  char __t2889t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t609t(f__unsafe_ptr,&__t2886t__);
  not__t41t(__t2886t__,&__t2887t__);
  if(__t2887t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t609t(de,&__t2888t__);
  not__t41t(__t2888t__,&__t2889t__);
  if(__t2889t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3134t=f__unsafe_ptr;
  *__t3135t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2890t(char** __t3136t, char** __t3137t, uint64_t* __t3138t, uint64_t* __t3139t, char* __t3140t) {
  char* f__unsafe_ptr=*__t3136t;
  const char* __t2891t__=0;
  char* __t2892t__unsafe_ptr=0;
  uint64_t __t2892t__dat__pos=0;
  uint64_t __t2892t__dat__length=0;
  char __t2892t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2885t(&f__unsafe_ptr,&__t2891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1049t(__t2891t__,&__t2892t__unsafe_ptr,&__t2892t__dat__pos,&__t2892t__dat__length,&__t2892t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3136t=f__unsafe_ptr;
  *__t3137t=__t2892t__unsafe_ptr;
  *__t3138t=__t2892t__dat__pos;
  *__t3139t=__t2892t__dat__length;
  *__t3140t=__t2892t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2956t(char** __t3141t, uint64_t __t_anon1, char** __t3142t, uint64_t* __t3143t, uint64_t* __t3144t, char* __t3145t) {
  char* data__unsafe_ptr=*__t3141t;
  char* __t2957t__unsafe_ptr=0;
  uint64_t __t2957t__dat__pos=0;
  uint64_t __t2957t__dat__length=0;
  char __t2957t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2890t(&data__unsafe_ptr,&__t2957t__unsafe_ptr,&__t2957t__dat__pos,&__t2957t__dat__length,&__t2957t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3141t=data__unsafe_ptr;
  *__t3142t=__t2957t__unsafe_ptr;
  *__t3143t=__t2957t__dat__pos;
  *__t3144t=__t2957t__dat__length;
  *__t3145t=__t2957t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1026t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3146t, uint64_t* __t3147t, uint64_t* __t3148t, char* __t3149t) {
  goto __t_return;
  __t_return:
  *__t3146t=other__unsafe_ptr;
  *__t3147t=other__dat__pos;
  *__t3148t=other__dat__length;
  *__t3149t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3150t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3150t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3151t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3151t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1195t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3152t) {
  uint64_t __t1196t__=0;
  char* __t1197t__=0;
  add__t188t(s__dat__pos,i,&__t1196t__);
  add__t681t(s__unsafe_ptr,__t1196t__,&__t1197t__);
  goto __t_return;
  __t_return:
  *__t3152t=__t1197t__;
}

int slice__t1218t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3153t, uint64_t* __t3154t, uint64_t* __t3155t, char* __t3156t) {
  char* __t1219t__unsafe_ptr=0;
  uint64_t __t1219t__dat__pos=0;
  uint64_t __t1219t__dat__length=0;
  char __t1219t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1220t__=0;
  char* __t1221t__unsafe_ptr=0;
  uint64_t __t1221t__dat__pos=0;
  uint64_t __t1221t__dat__length=0;
  char __t1221t__dat__first=0;
  char __t1222t__=0;
  char __t1223t__=0;
  char __t1224t=0;
  char __t1225t__=0;
  uint64_t __t1226t__=0;
  uint64_t new_length=0;
  uint64_t __t1227t=0;
  char __t1228t__=0;
  char new_first=0;
  char* __t1230t__=0;
  char __t1231t__value=0;
  uint64_t __t1232t__=0;
  char* __t1233t__unsafe_ptr=0;
  uint64_t __t1233t__dat__pos=0;
  uint64_t __t1233t__dat__length=0;
  char __t1233t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1026t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1219t__unsafe_ptr,&__t1219t__dat__pos,&__t1219t__dat__length,&__t1219t__dat__first);
  s__unsafe_ptr=__t1219t__unsafe_ptr;
  s__dat__pos=__t1219t__dat__pos;
  s__dat__length=__t1219t__dat__length;
  s__dat__first=__t1219t__dat__first;
  eq__t133t(from,to,&__t1220t__);
  if(__t1220t__){
  __t_errcode=str__t1049t(__t388t,&__t1221t__unsafe_ptr,&__t1221t__dat__pos,&__t1221t__dat__length,&__t1221t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1222t__);
  if(!__t1222t__){
  gt__t289t(to,s__dat__length,&__t1223t__);
  __t1224t=__t1223t__;
  }
  else{
  __t1224t=0;
  not__t41t(__t1224t,&__t1225t__);
  __t1224t=__t1225t__;
  }
  if(__t1224t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1226t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1226t__;
  __t1227t=0;
  neq__t157t(from,__t1227t,&__t1228t__);
  if(__t1228t__){
  get__t1195t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1230t__);
  if(!__t1230t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1231t__value,__t1230t__,1);
  new_first=__t1231t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1232t__);
  str__t989t(s__unsafe_ptr,__t1232t__,new_length,new_first,&__t1233t__unsafe_ptr,&__t1233t__dat__pos,&__t1233t__dat__length,&__t1233t__dat__first);
  __t1221t__unsafe_ptr=__t1233t__unsafe_ptr;
  __t1221t__dat__pos=__t1233t__dat__pos;
  __t1221t__dat__length=__t1233t__dat__length;
  __t1221t__dat__first=__t1233t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3153t=__t1221t__unsafe_ptr;
  *__t3154t=__t1221t__dat__pos;
  *__t3155t=__t1221t__dat__length;
  *__t3156t=__t1221t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1062t(char x, char y, char* __t3157t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3157t=z;
}

static inline __attribute__((always_inline)) void eq__t1129t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3158t) {
  uint64_t __t1130t__=0;
  uint64_t n=0;
  uint64_t __t1131t__=0;
  char __t1132t__=0;
  char __t1133t=0;
  char __t1134t__=0;
  char __t1135t=0;
  char z=0;
  len__t1058t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1130t__);
  n=__t1130t__;
  len__t1058t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1131t__);
  neq__t157t(n,__t1131t__,&__t1132t__);
  if(__t1132t__){
  __t1133t=0;
  goto __t_return;
  }
  neq__t1062t(x__dat__first,y__dat__first,&__t1134t__);
  if(__t1134t__){
  __t1135t=0;
  __t1133t=__t1135t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1133t=z;
  goto __t_return;
  __t_return:
  *__t3158t=__t1133t;
}

static inline __attribute__((always_inline)) int ends_with__t1298t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3159t) {
  char* __t1299t__unsafe_ptr=0;
  uint64_t __t1299t__dat__pos=0;
  uint64_t __t1299t__dat__length=0;
  char __t1299t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1300t__unsafe_ptr=0;
  uint64_t __t1300t__dat__pos=0;
  uint64_t __t1300t__dat__length=0;
  char __t1300t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1301t__=0;
  char __t1302t=0;
  uint64_t __t1303t__=0;
  uint64_t n=0;
  uint64_t __t1304t__=0;
  uint64_t __t1305t__=0;
  char* __t1306t__unsafe_ptr=0;
  uint64_t __t1306t__dat__pos=0;
  uint64_t __t1306t__dat__length=0;
  char __t1306t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1307t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1026t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1299t__unsafe_ptr,&__t1299t__dat__pos,&__t1299t__dat__length,&__t1299t__dat__first);
  stack__unsafe_ptr=__t1299t__unsafe_ptr;
  stack__dat__pos=__t1299t__dat__pos;
  stack__dat__length=__t1299t__dat__length;
  stack__dat__first=__t1299t__dat__first;
  __t_errcode=str__t1049t(_needle,&__t1300t__unsafe_ptr,&__t1300t__dat__pos,&__t1300t__dat__length,&__t1300t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1300t__unsafe_ptr;
  needle__dat__pos=__t1300t__dat__pos;
  needle__dat__length=__t1300t__dat__length;
  needle__dat__first=__t1300t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1301t__);
  if(__t1301t__){
  __t1302t=0;
  goto __t_return;
  }
  len__t1058t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1303t__);
  n=__t1303t__;
  len__t1058t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1304t__);
  __t_errcode=sub__t365t(n,__t1304t__,&__t1305t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1218t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1305t__,n,&__t1306t__unsafe_ptr,&__t1306t__dat__pos,&__t1306t__dat__length,&__t1306t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1306t__unsafe_ptr;
  ret__dat__pos=__t1306t__dat__pos;
  ret__dat__length=__t1306t__dat__length;
  ret__dat__first=__t1306t__dat__first;
  eq__t1129t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1307t__);
  __t1302t=__t1307t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3159t=__t1302t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1169t(char** __t3160t, uint64_t* __t3161t, uint32_t* __t3162t, uint32_t* __t3163t, uint64_t* __t3164t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3165t, uint64_t* __t3166t, uint64_t* __t3167t, char* __t3168t) {
  char* CHARS__buf__unsafe_ptr=*__t3160t;
  uint64_t CHARS__buf__unsafe_size=*__t3161t;
  uint32_t CHARS__buf__unsafe_offset=*__t3162t;
  uint32_t CHARS__buf__unsafe_align=*__t3163t;
  uint64_t CHARS__pos=*__t3164t;
  char* __t1170t__unsafe_ptr=0;
  uint64_t __t1170t__dat__pos=0;
  uint64_t __t1170t__dat__length=0;
  char __t1170t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1171t__=0;
  uint64_t __t1172t__=0;
  uint64_t null_pos=0;
  uint64_t __t1173t=0;
  uint64_t __t1174t__=0;
  uint64_t next_pos=0;
  uint64_t __t1175t__=0;
  char __t1176t__=0;
  char* endpos=0;
  uint64_t __t1177t=0;
  uint64_t __t1178t__=0;
  uint64_t prev_pos=0;
  char* __t1179t__unsafe_ptr=0;
  uint64_t __t1179t__dat__pos=0;
  uint64_t __t1179t__dat__length=0;
  char __t1179t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1026t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1170t__unsafe_ptr,&__t1170t__dat__pos,&__t1170t__dat__length,&__t1170t__dat__first);
  other__unsafe_ptr=__t1170t__unsafe_ptr;
  other__dat__pos=__t1170t__dat__pos;
  other__dat__length=__t1170t__dat__length;
  other__dat__first=__t1170t__dat__first;
  len__t1058t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1171t__);
  add__t188t(CHARS__pos,__t1171t__,&__t1172t__);
  null_pos=__t1172t__;
  __t1173t=1;
  add__t188t(null_pos,__t1173t,&__t1174t__);
  next_pos=__t1174t__;
  len__t826t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1175t__);
  gt__t289t(next_pos,__t1175t__,&__t1176t__);
  if(__t1176t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1177t=0;
  add__t188t(CHARS__pos,__t1177t,&__t1178t__);
  prev_pos=__t1178t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t993t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1179t__unsafe_ptr,&__t1179t__dat__pos,&__t1179t__dat__length,&__t1179t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3160t=CHARS__buf__unsafe_ptr;
  *__t3161t=CHARS__buf__unsafe_size;
  *__t3162t=CHARS__buf__unsafe_offset;
  *__t3163t=CHARS__buf__unsafe_align;
  *__t3164t=CHARS__pos;
  *__t3165t=__t1179t__unsafe_ptr;
  *__t3166t=__t1179t__dat__pos;
  *__t3167t=__t1179t__dat__length;
  *__t3168t=__t1179t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1126t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3169t) {
  uint64_t __t1127t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1127t__);
  goto __t_return;
  __t_return:
  *__t3169t=__t1127t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3170t) {
  int value=0;
  *__t3170t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t3171t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t3171t=__t53t__;
}

static inline __attribute__((always_inline)) int str__t1001t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t length, char** __t3172t, uint64_t* __t3173t, uint64_t* __t3174t, char* __t3175t) {
  int __t1002t=0;
  int __t1003t=0;
  int __t1004t__=0;
  uint64_t __t1005t__=0;
  char __t1006t__=0;
  uint64_t __t1007t=0;
  uint64_t __t1008t=0;
  char* __t1010t__=0;
  char __t1011t__value=0;
  char* __t1012t__unsafe_ptr=0;
  uint64_t __t1012t__dat__pos=0;
  uint64_t __t1012t__dat__length=0;
  char __t1012t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t52t(__t1003t,&__t1004t__);
  len__t826t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1005t__);
  gt__t289t(length,__t1005t__,&__t1006t__);
  if(__t1006t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1007t=0;
  __t1008t=0;
  __t_errcode=get__t819t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1008t,&__t1010t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1010t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1011t__value,__t1010t__,1);
  __t_errcode=str__t993t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1007t,length,__t1011t__value,&__t1012t__unsafe_ptr,&__t1012t__dat__pos,&__t1012t__dat__length,&__t1012t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3172t=__t1012t__unsafe_ptr;
  *__t3173t=__t1012t__dat__pos;
  *__t3174t=__t1012t__dat__length;
  *__t3175t=__t1012t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1193t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1194t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t827t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1106t(char** __t3176t, uint64_t* __t3177t, uint32_t* __t3178t, uint32_t* __t3179t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3176t=unsafe_ptr;
  *__t3177t=unsafe_size;
  *__t3178t=unsafe_offset;
  *__t3179t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1105t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3180t, uint64_t* __t3181t, uint64_t* __t3182t, char* __t3183t) {
  char* __t1108t__unsafe_ptr=0;
  uint64_t __t1108t__unsafe_size=0;
  uint32_t __t1108t__unsafe_offset=0;
  uint32_t __t1108t__unsafe_align=0;
  uint64_t __t1109t=0;
  uint64_t __t1110t__=0;
  uint64_t __t1111t__=0;
  char* __t1112t__unsafe_ptr=0;
  uint64_t __t1112t__unsafe_size=0;
  uint32_t __t1112t__unsafe_offset=0;
  uint32_t __t1112t__unsafe_align=0;
  char __t1113t____t711t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1114t=0;
  char* __t1115t__unsafe_ptr=0;
  uint64_t __t1115t__dat__pos=0;
  uint64_t __t1115t__dat__length=0;
  char __t1115t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1106t(&__t1108t__unsafe_ptr,&__t1108t__unsafe_size,&__t1108t__unsafe_offset,&__t1108t__unsafe_align);
  __t1109t=1;
  len__t1058t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1110t__);
  add__t188t(__t1109t,__t1110t__,&__t1111t__);
  __t_errcode=alloc__t709t(&__t1108t__unsafe_ptr,&__t1108t__unsafe_size,&__t1108t__unsafe_offset,&__t1108t__unsafe_align,__t1111t__,&__t1112t__unsafe_ptr,&__t1112t__unsafe_size,&__t1112t__unsafe_offset,&__t1112t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1112t__unsafe_ptr;
  buf__unsafe_size=__t1112t__unsafe_size;
  buf__unsafe_offset=__t1112t__unsafe_offset;
  buf__unsafe_align=__t1112t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1114t=0;
  __t_errcode=str__t993t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1114t,other__dat__length,other__dat__first,&__t1115t__unsafe_ptr,&__t1115t__dat__pos,&__t1115t__dat__length,&__t1115t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t1115t__unsafe_ptr,&__t1113t____t711t__);
  if(__t1113t____t711t__){
  free__t679t(&__t1115t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3180t=__t1115t__unsafe_ptr;
  *__t3181t=__t1115t__dat__pos;
  *__t3182t=__t1115t__dat__length;
  *__t3183t=__t1115t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1116t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3184t, char** __t3185t, uint64_t* __t3186t, uint64_t* __t3187t, char* __t3188t) {
  char* __t1118t__unsafe_ptr=0;
  uint64_t __t1118t__dat__pos=0;
  uint64_t __t1118t__dat__length=0;
  char __t1118t__dat__first=0;
  char __t1119t____t1113t____t711t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1120t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t827t();
  __t_errcode=copy_null_terminated__t1105t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1118t__unsafe_ptr,&__t1118t__dat__pos,&__t1118t__dat__length,&__t1118t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1118t__unsafe_ptr;
  str__dat__pos=__t1118t__dat__pos;
  str__dat__length=__t1118t__dat__length;
  str__dat__first=__t1118t__dat__first;
  add__t681t(str__unsafe_ptr,str__dat__pos,&__t1120t__);
  _ret=__t1120t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t609t(str__unsafe_ptr,&__t1119t____t1113t____t711t__);
  if(__t1119t____t1113t____t711t__){
  free__t679t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3184t=cstr;
  *__t3185t=str__unsafe_ptr;
  *__t3186t=str__dat__pos;
  *__t3187t=str__dat__length;
  *__t3188t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1124t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3189t) {
  goto __t_return;
  __t_return:
  *__t3189t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2213t(const char* cmd, char** __t3190t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3190t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2212t(char* unsafe_ptr, int64_t* __t3191t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3191t=status;
}

static inline __attribute__((always_inline)) void int__t589t(uint64_t x, int64_t* __t3192t) {
  int __t590t=0;
  int __t591t=0;
  int __t592t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3192t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3193t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3193t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3194t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3194t=z;
}

static inline __attribute__((always_inline)) int open__t2214t(const char* cmd, char** __t3195t) {
  char* __t2215t__=0;
  char* unsafe_ptr=0;
  char __t2216t__=0;
  char __t2217t__=0;
  char __t2218t__=0;
  int64_t __t2219t__=0;
  int64_t status=0;
  uint64_t __t2220t=0;
  int64_t __t2221t__=0;
  char __t2222t__=0;
  char __t2223t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2213t(cmd,&__t2215t__);
  unsafe_ptr=__t2215t__;
  exists__t609t(unsafe_ptr,&__t2216t__);
  not__t41t(__t2216t__,&__t2217t__);
  if(__t2217t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(unsafe_ptr,&__t2218t__);
  if(__t2218t__){
  pclose__t2212t(unsafe_ptr,&__t2219t__);
  status=__t2219t__;
  unsafe_ptr=0;
  __t2220t=0;
  int__t589t(__t2220t,&__t2221t__);
  neq__t146t(status,__t2221t__,&__t2222t__);
  if(__t2222t__){
  __t_complain=37;
  goto __t2223t__label;
  __t2223t__label:__t2223t=__t2223t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3195t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2225t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3196t) {
  const char* __t2226t__cstr=0;
  char* __t2226t__str__unsafe_ptr=0;
  uint64_t __t2226t__str__dat__pos=0;
  uint64_t __t2226t__str__dat__length=0;
  char __t2226t__str__dat__first=0;
  char __t2227t____t1119t____t1113t____t711t__=0;
  const char* __t2228t__=0;
  char* __t2229t__unsafe_ptr=0;
  char __t2230t____t2218t__=0;
  int64_t __t2230t____t2219t__=0;
  int64_t __t2230t__status=0;
  uint64_t __t2230t____t2220t=0;
  int64_t __t2230t____t2221t__=0;
  char __t2230t____t2222t__=0;
  char __t2230t____t2223t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1116t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2226t__cstr,&__t2226t__str__unsafe_ptr,&__t2226t__str__dat__pos,&__t2226t__str__dat__length,&__t2226t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1124t(__t2226t__cstr,__t2226t__str__unsafe_ptr,__t2226t__str__dat__pos,__t2226t__str__dat__length,__t2226t__str__dat__first,&__t2228t__);
  __t_errcode=open__t2214t(__t2228t__,&__t2229t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t2229t__unsafe_ptr,&__t2230t____t2218t__);
  if(__t2230t____t2218t__){
  pclose__t2212t(__t2229t__unsafe_ptr,&__t2230t____t2219t__);
  __t2230t__status=__t2230t____t2219t__;
  __t2229t__unsafe_ptr=0;
  __t2230t____t2220t=0;
  int__t589t(__t2230t____t2220t,&__t2230t____t2221t__);
  neq__t146t(__t2230t__status,__t2230t____t2221t__,&__t2230t____t2222t__);
  if(__t2230t____t2222t__){
  __t_complain=37;
  goto __t2223t__label;
  __t2223t__label:__t2230t____t2223t=__t2230t____t2223t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3196t=__t2229t__unsafe_ptr;
  
  __t_skip_returns:exists__t609t(__t2226t__str__unsafe_ptr,&__t2227t____t1119t____t1113t____t711t__);
  if(__t2227t____t1119t____t1113t____t711t__){
  free__t679t(&__t2226t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2187t(int64_t value, const char** __t3197t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3197t=ret;
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2997t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2998t__unsafe_ptr=0;
  char __t2999t____t2230t____t2218t__=0;
  int64_t __t2999t____t2230t____t2219t__=0;
  int64_t __t2999t____t2230t__status=0;
  uint64_t __t2999t____t2230t____t2220t=0;
  int64_t __t2999t____t2230t____t2221t__=0;
  char __t2999t____t2230t____t2222t__=0;
  char __t2999t____t2230t____t2223t=0;
  char* proc__unsafe_ptr=0;
  char __t3000t=0;
  int64_t __t3001t=0;
  int64_t error=0;
  const char* __t3002t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2225t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2998t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2998t__unsafe_ptr;
  exists__t609t(__t2998t__unsafe_ptr,&__t2999t____t2230t____t2218t__);
  if(__t2999t____t2230t____t2218t__){
  pclose__t2212t(__t2998t__unsafe_ptr,&__t2999t____t2230t____t2219t__);
  __t2999t____t2230t__status=__t2999t____t2230t____t2219t__;
  __t2998t__unsafe_ptr=0;
  __t2999t____t2230t____t2220t=0;
  int__t589t(__t2999t____t2230t____t2220t,&__t2999t____t2230t____t2221t__);
  neq__t146t(__t2999t____t2230t__status,__t2999t____t2230t____t2221t__,&__t2999t____t2230t____t2222t__);
  if(__t2999t____t2230t____t2222t__){
  __t_complain=37;
  goto __t2223t__label;
  __t2223t__label:__t2999t____t2230t____t2223t=__t2999t____t2230t____t2223t==0;
  }
  }
  __t3001t=__t_complain;
  __t3000t=(__t_complain==0);
  __t_complain=0;
  error=__t3001t;
  __t3000t__label:__t3000t=__t3000t==0;
  if(__t3000t){
  cstr__t2187t(error,&__t3002t__);
  print__t398t(__t3002t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t3004t() {
  char* __t3009t__unsafe_ptr=0;
  uint64_t __t3009t__unsafe_size=0;
  uint32_t __t3009t__unsafe_offset=0;
  uint32_t __t3009t__unsafe_align=0;
  uint64_t __t3010t=0;
  char* __t3011t__unsafe_ptr=0;
  uint64_t __t3011t__unsafe_size=0;
  uint32_t __t3011t__unsafe_offset=0;
  uint32_t __t3011t__unsafe_align=0;
  char __t3012t____t711t__=0;
  char* __t3013t__buf__unsafe_ptr=0;
  uint64_t __t3013t__buf__unsafe_size=0;
  uint32_t __t3013t__buf__unsafe_offset=0;
  uint32_t __t3013t__buf__unsafe_align=0;
  uint64_t __t3013t__pos=0;
  char* __t3014t__buf__unsafe_ptr=0;
  uint64_t __t3014t__buf__unsafe_size=0;
  uint32_t __t3014t__buf__unsafe_offset=0;
  uint32_t __t3014t__buf__unsafe_align=0;
  uint64_t __t3014t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t3017t__unsafe_ptr=0;
  uint64_t __t3017t__dat__pos=0;
  uint64_t __t3017t__dat__length=0;
  char __t3017t__dat__first=0;
  char* __t3018t__unsafe_ptr=0;
  uint64_t __t3018t__dat__pos=0;
  uint64_t __t3018t__dat__length=0;
  char __t3018t__dat__first=0;
  char* __t3019t__unsafe_ptr=0;
  char* __t3021t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t3022t=0;
  char __t3023t=0;
  char* __t3024t__unsafe_ptr=0;
  uint64_t __t3024t__dat__pos=0;
  uint64_t __t3024t__dat__length=0;
  char __t3024t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3026t__=0;
  char __t3027t__=0;
  char* __t3028t__buf__unsafe_ptr=0;
  uint64_t __t3028t__buf__unsafe_size=0;
  uint32_t __t3028t__buf__unsafe_offset=0;
  uint32_t __t3028t__buf__unsafe_align=0;
  uint64_t __t3028t__pos=0;
  char* __t3029t__unsafe_ptr=0;
  uint64_t __t3029t__dat__pos=0;
  uint64_t __t3029t__dat__length=0;
  char __t3029t__dat__first=0;
  char* __t3030t__unsafe_ptr=0;
  uint64_t __t3030t__dat__pos=0;
  uint64_t __t3030t__dat__length=0;
  char __t3030t__dat__first=0;
  uint64_t __t3031t__=0;
  char* __t3032t__unsafe_ptr=0;
  uint64_t __t3032t__dat__pos=0;
  uint64_t __t3032t__dat__length=0;
  char __t3032t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  char____t_buffer____buffer__t3007t(&__t3009t__unsafe_ptr,&__t3009t__unsafe_size,&__t3009t__unsafe_offset,&__t3009t__unsafe_align);
  __t3010t=256;
  __t_errcode=alloc__t709t(&__t3009t__unsafe_ptr,&__t3009t__unsafe_size,&__t3009t__unsafe_offset,&__t3009t__unsafe_align,__t3010t,&__t3011t__unsafe_ptr,&__t3011t__unsafe_size,&__t3011t__unsafe_offset,&__t3011t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t834t(&__t3011t__unsafe_ptr,&__t3011t__unsafe_size,&__t3011t__unsafe_offset,&__t3011t__unsafe_align,&__t3013t__buf__unsafe_ptr,&__t3013t__buf__unsafe_size,&__t3013t__buf__unsafe_offset,&__t3013t__buf__unsafe_align,&__t3013t__pos);
  __t3014t__buf__unsafe_ptr=__t3013t__buf__unsafe_ptr;
  __t3014t__buf__unsafe_size=__t3013t__buf__unsafe_size;
  __t3014t__buf__unsafe_offset=__t3013t__buf__unsafe_offset;
  __t3014t__buf__unsafe_align=__t3013t__buf__unsafe_align;
  __t3014t__pos=__t3013t__pos;
  CHARS__buf__unsafe_ptr=__t3014t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3014t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3014t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3014t__buf__unsafe_align;
  CHARS__pos=__t3014t__pos;
  path=__t3015t;
  __t_errcode=copy__t1080t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3016t,&__t3017t__unsafe_ptr,&__t3017t__dat__pos,&__t3017t__dat__length,&__t3017t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1080t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t3018t__unsafe_ptr,&__t3018t__dat__pos,&__t3018t__dat__length,&__t3018t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2872t(path,&__t3019t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3021t__unsafe_ptr=__t3019t__unsafe_ptr;
  test_dir__unsafe_ptr=__t3021t__unsafe_ptr;
  __t3022t=0-1;
  while(1){
  __t3022t=__t3022t+1;
  __t_complain=get__t2956t(&test_dir__unsafe_ptr,__t3022t,&__t3024t__unsafe_ptr,&__t3024t__dat__pos,&__t3024t__dat__length,&__t3024t__dat__first);
  __t3023t=__t_complain;
  if(__t_complain){
  goto __t3023t__label;
  }
  entry__unsafe_ptr=__t3024t__unsafe_ptr;
  entry__dat__pos=__t3024t__dat__pos;
  entry__dat__length=__t3024t__dat__length;
  entry__dat__first=__t3024t__dat__first;
  __t3023t__label:__t3023t=__t3023t==0;
  if(!__t3023t){
  break;
  }
  __t_errcode=ends_with__t1298t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3025t,&__t3026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3026t__,&__t3027t__);
  if(__t3027t__){
  continue;
  }
  __t3028t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t3028t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t3028t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t3028t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t3028t__pos=CHARS__pos;
  str__t1026t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3029t__unsafe_ptr,&__t3029t__dat__pos,&__t3029t__dat__length,&__t3029t__dat__first);
  __t_errcode=copy_null_terminated__t1169t(&__t3028t__buf__unsafe_ptr,&__t3028t__buf__unsafe_size,&__t3028t__buf__unsafe_offset,&__t3028t__buf__unsafe_align,&__t3028t__pos,__t3029t__unsafe_ptr,__t3029t__dat__pos,__t3029t__dat__length,__t3029t__dat__first,&__t3030t__unsafe_ptr,&__t3030t__dat__pos,&__t3030t__dat__length,&__t3030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1126t(__t3030t__unsafe_ptr,__t3030t__dat__pos,__t3030t__dat__length,__t3030t__dat__first,&__t3031t__);
  __t_errcode=str__t1001t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3031t__,&__t3032t__unsafe_ptr,&__t3032t__dat__pos,&__t3032t__dat__length,&__t3032t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t3032t__unsafe_ptr;
  command__dat__pos=__t3032t__dat__pos;
  command__dat__length=__t3032t__dat__length;
  command__dat__first=__t3032t__dat__first;
  print__t1193t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2997t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2869t(__t3019t__unsafe_ptr);
  exists__t609t(__t3011t__unsafe_ptr,&__t3012t____t711t__);
  if(__t3012t____t711t__){
  free__t679t(&__t3011t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3004t();return 0;}