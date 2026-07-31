#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2983t="./smoll --cleanup ";
const char* const __t2982t="./tests/passing/";
const char* const __t2992t=".s";
const char* const __t386t="";
const char* const __t398t="\n";
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

static inline __attribute__((always_inline)) void console__t377t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2974t(char** __t3002t, uint64_t* __t3003t, uint16_t* __t3004t, uint16_t* __t3005t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3002t=unsafe_ptr;
  *__t3003t=unsafe_size;
  *__t3004t=unsafe_offset;
  *__t3005t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t607t(char* x, char* __t3006t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3006t=z;
}

static inline __attribute__((always_inline)) void free__t677t(char** __t3007t) {
  char* allocated=*__t3007t;
  if(allocated){
  free(allocated);
  }
  *__t3007t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3008t) {
  int value=0;
  *__t3008t=value;
}

static inline __attribute__((always_inline)) void not__t48t(int __t_anon0, int* __t3009t) {
  int __t49t__=0;
  false__t14t(&__t49t__);
  goto __t_return;
  __t_return:
  *__t3009t=__t49t__;
}

static inline __attribute__((always_inline)) void is_different__t106t(uint64_t x, uint64_t y, int* __t3010t) {
  int __t107t=0;
  int __t108t__=0;
  not__t48t(__t107t,&__t108t__);
  goto __t_return;
  __t_return:
  *__t3010t=__t108t__;
}

static inline __attribute__((always_inline)) void eq__t131t(uint64_t x, uint64_t y, char* __t3011t) {
  int __t132t__=0;
  char z=0;
  is_different__t106t(x,y,&__t132t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3011t=z;
}

static inline __attribute__((always_inline)) void neq__t155t(uint64_t x, uint64_t y, char* __t3012t) {
  int __t156t__=0;
  char z=0;
  is_different__t106t(x,y,&__t156t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3012t=z;
}

static inline __attribute__((always_inline)) void nat__t681t(uint16_t x, uint64_t* __t3013t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3013t=value;
}

static inline __attribute__((always_inline)) void mul__t210t(uint64_t x, uint64_t y, uint64_t* __t3014t) {
  int __t211t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t211t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3014t=z;
}

static inline __attribute__((always_inline)) void zero__t678t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t39t(char value, char* __t3015t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3015t=z;
}

static inline __attribute__((always_inline)) int alloc__t670t(uint64_t bytes, char** __t3016t) {
  char* allocated=0;
  char __t671t__=0;
  char __t672t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t607t(allocated,&__t671t__);
  not__t39t(__t671t__,&__t672t__);
  if(__t672t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3016t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t706t(char** __t3017t, uint64_t* __t3018t, uint16_t* __t3019t, uint16_t* __t3020t, uint64_t size, char** __t3021t, uint64_t* __t3022t, uint16_t* __t3023t, uint16_t* __t3024t) {
  char* buffer__unsafe_ptr=*__t3017t;
  uint64_t buffer__unsafe_size=*__t3018t;
  uint16_t buffer__unsafe_offset=*__t3019t;
  uint16_t buffer__unsafe_align=*__t3020t;
  int __t707t=0;
  char __t708t__=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  char __t712t__=0;
  uint64_t __t713t=0;
  uint64_t __t714t__=0;
  uint64_t __t715t__=0;
  uint64_t __t717t=0;
  char __t718t__=0;
  uint64_t __t719t__=0;
  uint64_t __t720t__=0;
  uint64_t bytes=0;
  uint64_t __t721t=0;
  char __t722t__=0;
  char* __t723t__=0;
  int __t724t=0;
  uint64_t __t725t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t131t(buffer__unsafe_size,size,&__t710t__);
  if(__t710t__){
  __t711t=0;
  neq__t155t(size,__t711t,&__t712t__);
  if(__t712t__){
  __t713t=0;
  nat__t681t(buffer__unsafe_align,&__t714t__);
  mul__t210t(__t714t__,size,&__t715t__);
  zero__t678t(buffer__unsafe_ptr,__t713t,__t715t__);
  }
  goto __t_return;
  }
  __t717t=0;
  neq__t155t(buffer__unsafe_size,__t717t,&__t718t__);
  if(__t718t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t681t(buffer__unsafe_align,&__t719t__);
  mul__t210t(__t719t__,size,&__t720t__);
  bytes=__t720t__;
  __t721t=0;
  eq__t131t(bytes,__t721t,&__t722t__);
  if(__t722t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t670t(bytes,&__t723t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t725t=0;
  zero__t678t(__t723t__,__t725t,bytes);
  buffer__unsafe_ptr=__t723t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t607t(buffer__unsafe_ptr,&__t708t__);
  if(__t708t__){
  free__t677t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3017t=buffer__unsafe_ptr;
  *__t3018t=buffer__unsafe_size;
  *__t3019t=buffer__unsafe_offset;
  *__t3020t=buffer__unsafe_align;
  *__t3021t=buffer__unsafe_ptr;
  *__t3022t=buffer__unsafe_size;
  *__t3023t=buffer__unsafe_offset;
  *__t3024t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t828t(char** __t3025t, uint64_t* __t3026t, uint16_t* __t3027t, uint16_t* __t3028t, uint64_t _pos, char** __t3029t, uint64_t* __t3030t, uint16_t* __t3031t, uint16_t* __t3032t, uint64_t* __t3033t) {
  char* buf__unsafe_ptr=*__t3025t;
  uint64_t buf__unsafe_size=*__t3026t;
  uint16_t buf__unsafe_offset=*__t3027t;
  uint16_t buf__unsafe_align=*__t3028t;
  uint64_t __t829t=0;
  uint64_t pos=0;
  __t829t=_pos;
  pos=__t829t;
  goto __t_return;
  __t_return:
  *__t3025t=buf__unsafe_ptr;
  *__t3026t=buf__unsafe_size;
  *__t3027t=buf__unsafe_offset;
  *__t3028t=buf__unsafe_align;
  *__t3029t=buf__unsafe_ptr;
  *__t3030t=buf__unsafe_size;
  *__t3031t=buf__unsafe_offset;
  *__t3032t=buf__unsafe_align;
  *__t3033t=pos;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t3034t, uint64_t* __t3035t, uint16_t* __t3036t, uint16_t* __t3037t, char** __t3038t, uint64_t* __t3039t, uint16_t* __t3040t, uint16_t* __t3041t, uint64_t* __t3042t) {
  char* buf__unsafe_ptr=*__t3034t;
  uint64_t buf__unsafe_size=*__t3035t;
  uint16_t buf__unsafe_offset=*__t3036t;
  uint16_t buf__unsafe_align=*__t3037t;
  uint64_t __t832t=0;
  char* __t833t__buf__unsafe_ptr=0;
  uint64_t __t833t__buf__unsafe_size=0;
  uint16_t __t833t__buf__unsafe_offset=0;
  uint16_t __t833t__buf__unsafe_align=0;
  uint64_t __t833t__pos=0;
  __t832t=0;
  arena__t828t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t832t,&__t833t__buf__unsafe_ptr,&__t833t__buf__unsafe_size,&__t833t__buf__unsafe_offset,&__t833t__buf__unsafe_align,&__t833t__pos);
  goto __t_return;
  __t_return:
  *__t3034t=buf__unsafe_ptr;
  *__t3035t=buf__unsafe_size;
  *__t3036t=buf__unsafe_offset;
  *__t3037t=buf__unsafe_align;
  *__t3038t=__t833t__buf__unsafe_ptr;
  *__t3039t=__t833t__buf__unsafe_size;
  *__t3040t=__t833t__buf__unsafe_offset;
  *__t3041t=__t833t__buf__unsafe_align;
  *__t3042t=__t833t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t964t(char** __t3043t, uint64_t* __t3044t, uint16_t* __t3045t, uint16_t* __t3046t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3043t=unsafe_ptr;
  *__t3044t=unsafe_size;
  *__t3045t=unsafe_offset;
  *__t3046t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3047t) {
  *__t3047t=to;
}

static inline __attribute__((always_inline)) void add__t186t(uint64_t x, uint64_t y, uint64_t* __t3048t) {
  int __t187t__=0;
  uint64_t z=0;
  is_different__t106t(x,y,&__t187t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3048t=z;
}

static inline __attribute__((always_inline)) void ge__t335t(uint64_t x, uint64_t y, char* __t3049t) {
  int __t336t__=0;
  char z=0;
  is_different__t106t(x,y,&__t336t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3049t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3050t) {
  *__t3050t=to;
}

static inline __attribute__((always_inline)) void add__t679t(char* allocated, uint64_t offset, char** __t3051t) {
  char* element=0;
  char* __t680t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t680t__);
  goto __t_return;
  __t_return:
  *__t3051t=__t680t__;
}

static inline __attribute__((always_inline)) int get__t816t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t3052t) {
  char __t817t__=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  char* __t822t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t335t(i,buffer__unsafe_size,&__t817t__);
  if(__t817t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t681t(buffer__unsafe_align,&__t818t__);
  mul__t210t(i,__t818t__,&__t819t__);
  nat__t681t(buffer__unsafe_offset,&__t820t__);
  add__t186t(__t819t__,__t820t__,&__t821t__);
  add__t679t(buffer__unsafe_ptr,__t821t__,&__t822t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3052t=__t822t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t986t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3053t, uint64_t* __t3054t, uint64_t* __t3055t, char* __t3056t) {
  goto __t_return;
  __t_return:
  *__t3053t=unsafe_ptr;
  *__t3054t=dat__pos;
  *__t3055t=dat__length;
  *__t3056t=dat__first;
}

static inline __attribute__((always_inline)) int str__t990t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3057t, uint64_t* __t3058t, uint64_t* __t3059t, char* __t3060t) {
  char* unsafe_ptr=0;
  uint64_t __t991t__=0;
  uint64_t __t992t=0;
  char __t993t__=0;
  uint64_t __t994t__=0;
  uint64_t __t995t=0;
  char __t996t__=0;
  char* __t997t__unsafe_ptr=0;
  uint64_t __t997t__dat__pos=0;
  uint64_t __t997t__dat__length=0;
  char __t997t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t681t(buf__unsafe_align,&__t991t__);
  __t992t=1;
  neq__t155t(__t991t__,__t992t,&__t993t__);
  if(__t993t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t681t(buf__unsafe_offset,&__t994t__);
  __t995t=0;
  neq__t155t(__t994t__,__t995t,&__t996t__);
  if(__t996t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t986t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t997t__unsafe_ptr,&__t997t__dat__pos,&__t997t__dat__length,&__t997t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3057t=__t997t__unsafe_ptr;
  *__t3058t=__t997t__dat__pos;
  *__t3059t=__t997t__dat__length;
  *__t3060t=__t997t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1024t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3061t, uint64_t* __t3062t, uint64_t* __t3063t, char* __t3064t) {
  uint64_t __t1025t=0;
  char __t1026t__=0;
  char* __t1028t__=0;
  char __t1029t__value=0;
  char first=0;
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__dat__pos=0;
  uint64_t __t1030t__dat__length=0;
  char __t1030t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1025t=0;
  neq__t155t(length,__t1025t,&__t1026t__);
  if(__t1026t__){
  __t_errcode=get__t816t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1028t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1028t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1029t__value,__t1028t__,1);
  first=__t1029t__value;
  }
  __t_errcode=str__t990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1030t__unsafe_ptr,&__t1030t__dat__pos,&__t1030t__dat__length,&__t1030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3061t=__t1030t__unsafe_ptr;
  *__t3062t=__t1030t__dat__pos;
  *__t3063t=__t1030t__dat__length;
  *__t3064t=__t1030t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1046t(const char* c, char** __t3065t, uint64_t* __t3066t, uint64_t* __t3067t, char* __t3068t) {
  char* __t1047t__unsafe_ptr=0;
  uint64_t __t1047t__unsafe_size=0;
  uint16_t __t1047t__unsafe_offset=0;
  uint16_t __t1047t__unsafe_align=0;
  char* __t1048t__unsafe_ptr=0;
  uint64_t __t1048t__unsafe_size=0;
  uint16_t __t1048t__unsafe_offset=0;
  uint16_t __t1048t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1049t__=0;
  uint64_t length=0;
  uint64_t __t1050t=0;
  uint64_t __t1051t__=0;
  uint64_t __t1052t=0;
  char* __t1054t__unsafe_ptr=0;
  uint64_t __t1054t__dat__pos=0;
  uint64_t __t1054t__dat__length=0;
  char __t1054t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t964t(&__t1047t__unsafe_ptr,&__t1047t__unsafe_size,&__t1047t__unsafe_offset,&__t1047t__unsafe_align);
  __t1048t__unsafe_ptr=__t1047t__unsafe_ptr;
  __t1048t__unsafe_size=__t1047t__unsafe_size;
  __t1048t__unsafe_offset=__t1047t__unsafe_offset;
  __t1048t__unsafe_align=__t1047t__unsafe_align;
  buf__unsafe_ptr=__t1048t__unsafe_ptr;
  buf__unsafe_size=__t1048t__unsafe_size;
  buf__unsafe_offset=__t1048t__unsafe_offset;
  buf__unsafe_align=__t1048t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1049t__);
  buf__unsafe_ptr=__t1049t__;
  if(c){
  length=strlen(c);
  }
  __t1050t=1;
  add__t186t(length,__t1050t,&__t1051t__);
  buf__unsafe_size=__t1051t__;
  __t1052t=0;
  __t_errcode=str__t1024t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1052t,length,&__t1054t__unsafe_ptr,&__t1054t__dat__pos,&__t1054t__dat__length,&__t1054t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3065t=__t1054t__unsafe_ptr;
  *__t3066t=__t1054t__dat__pos;
  *__t3067t=__t1054t__dat__length;
  *__t3068t=__t1054t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1055t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3069t) {
  goto __t_return;
  __t_return:
  *__t3069t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t823t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t3070t) {
  goto __t_return;
  __t_return:
  *__t3070t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t287t(uint64_t x, uint64_t y, char* __t3071t) {
  int __t288t__=0;
  char z=0;
  is_different__t106t(x,y,&__t288t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3071t=z;
}

static inline __attribute__((always_inline)) void allocated__t836t(char** __t3072t, uint64_t* __t3073t, uint16_t* __t3074t, uint16_t* __t3075t, uint64_t pos, char** __t3076t, uint64_t* __t3077t, uint16_t* __t3078t, uint16_t* __t3079t, uint64_t* __t3080t) {
  char* buf__unsafe_ptr=*__t3072t;
  uint64_t buf__unsafe_size=*__t3073t;
  uint16_t buf__unsafe_offset=*__t3074t;
  uint16_t buf__unsafe_align=*__t3075t;
  goto __t_return;
  __t_return:
  *__t3072t=buf__unsafe_ptr;
  *__t3073t=buf__unsafe_size;
  *__t3074t=buf__unsafe_offset;
  *__t3075t=buf__unsafe_align;
  *__t3076t=buf__unsafe_ptr;
  *__t3077t=buf__unsafe_size;
  *__t3078t=buf__unsafe_offset;
  *__t3079t=buf__unsafe_align;
  *__t3080t=pos;
}

static inline __attribute__((always_inline)) int alloc__t876t(char** __t3081t, uint64_t* __t3082t, uint16_t* __t3083t, uint16_t* __t3084t, uint64_t* __t3085t, uint64_t length, char** __t3086t, uint64_t* __t3087t, uint16_t* __t3088t, uint16_t* __t3089t, uint64_t* __t3090t) {
  char* allocator__buf__unsafe_ptr=*__t3081t;
  uint64_t allocator__buf__unsafe_size=*__t3082t;
  uint16_t allocator__buf__unsafe_offset=*__t3083t;
  uint16_t allocator__buf__unsafe_align=*__t3084t;
  uint64_t allocator__pos=*__t3085t;
  int __t877t=0;
  uint64_t __t878t__=0;
  uint64_t next_pos=0;
  uint64_t __t879t__=0;
  char __t880t__=0;
  uint64_t __t881t=0;
  uint64_t __t882t__=0;
  uint64_t pos=0;
  char* __t883t__buf__unsafe_ptr=0;
  uint64_t __t883t__buf__unsafe_size=0;
  uint16_t __t883t__buf__unsafe_offset=0;
  uint16_t __t883t__buf__unsafe_align=0;
  uint64_t __t883t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t186t(allocator__pos,length,&__t878t__);
  next_pos=__t878t__;
  len__t823t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t879t__);
  gt__t287t(next_pos,__t879t__,&__t880t__);
  if(__t880t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t881t=0;
  add__t186t(allocator__pos,__t881t,&__t882t__);
  pos=__t882t__;
  allocator__pos=next_pos;
  allocated__t836t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t883t__buf__unsafe_ptr,&__t883t__buf__unsafe_size,&__t883t__buf__unsafe_offset,&__t883t__buf__unsafe_align,&__t883t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3081t=allocator__buf__unsafe_ptr;
  *__t3082t=allocator__buf__unsafe_size;
  *__t3083t=allocator__buf__unsafe_offset;
  *__t3084t=allocator__buf__unsafe_align;
  *__t3085t=allocator__pos;
  *__t3086t=__t883t__buf__unsafe_ptr;
  *__t3087t=__t883t__buf__unsafe_size;
  *__t3088t=__t883t__buf__unsafe_offset;
  *__t3089t=__t883t__buf__unsafe_align;
  *__t3090t=__t883t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1077t(char** __t3091t, uint64_t* __t3092t, uint16_t* __t3093t, uint16_t* __t3094t, uint64_t* __t3095t, const char* _other, char** __t3096t, uint64_t* __t3097t, uint64_t* __t3098t, char* __t3099t) {
  char* CHARS__buf__unsafe_ptr=*__t3091t;
  uint64_t CHARS__buf__unsafe_size=*__t3092t;
  uint16_t CHARS__buf__unsafe_offset=*__t3093t;
  uint16_t CHARS__buf__unsafe_align=*__t3094t;
  uint64_t CHARS__pos=*__t3095t;
  char* __t1078t__unsafe_ptr=0;
  uint64_t __t1078t__dat__pos=0;
  uint64_t __t1078t__dat__length=0;
  char __t1078t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1079t__=0;
  char* __t1080t__buf__unsafe_ptr=0;
  uint64_t __t1080t__buf__unsafe_size=0;
  uint16_t __t1080t__buf__unsafe_offset=0;
  uint16_t __t1080t__buf__unsafe_align=0;
  uint64_t __t1080t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1081t__unsafe_ptr=0;
  uint64_t __t1081t__dat__pos=0;
  uint64_t __t1081t__dat__length=0;
  char __t1081t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1046t(_other,&__t1078t__unsafe_ptr,&__t1078t__dat__pos,&__t1078t__dat__length,&__t1078t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1078t__unsafe_ptr;
  other__dat__pos=__t1078t__dat__pos;
  other__dat__length=__t1078t__dat__length;
  other__dat__first=__t1078t__dat__first;
  len__t1055t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1079t__);
  __t_errcode=alloc__t876t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1079t__,&__t1080t__buf__unsafe_ptr,&__t1080t__buf__unsafe_size,&__t1080t__buf__unsafe_offset,&__t1080t__buf__unsafe_align,&__t1080t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1080t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1080t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1080t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1080t__buf__unsafe_align;
  surface__pos=__t1080t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t990t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1081t__unsafe_ptr,&__t1081t__dat__pos,&__t1081t__dat__length,&__t1081t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3091t=CHARS__buf__unsafe_ptr;
  *__t3092t=CHARS__buf__unsafe_size;
  *__t3093t=CHARS__buf__unsafe_offset;
  *__t3094t=CHARS__buf__unsafe_align;
  *__t3095t=CHARS__pos;
  *__t3096t=__t1081t__unsafe_ptr;
  *__t3097t=__t1081t__dat__pos;
  *__t3098t=__t1081t__dat__length;
  *__t3099t=__t1081t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2840t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2841t(const char* path, char** __t3100t) {
  char* unsafe_ptr=0;
  char __t2843t__=0;
  char __t2844t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t607t(unsafe_ptr,&__t2843t__);
  not__t39t(__t2843t__,&__t2844t__);
  if(__t2844t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2840t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3100t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2852t(char** __t3101t, const char** __t3102t) {
  char* f__unsafe_ptr=*__t3101t;
  char __t2853t__=0;
  char __t2854t__=0;
  char* de=0;
  char __t2855t__=0;
  char __t2856t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t607t(f__unsafe_ptr,&__t2853t__);
  not__t39t(__t2853t__,&__t2854t__);
  if(__t2854t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t607t(de,&__t2855t__);
  not__t39t(__t2855t__,&__t2856t__);
  if(__t2856t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3101t=f__unsafe_ptr;
  *__t3102t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2857t(char** __t3103t, char** __t3104t, uint64_t* __t3105t, uint64_t* __t3106t, char* __t3107t) {
  char* f__unsafe_ptr=*__t3103t;
  const char* __t2858t__=0;
  char* __t2859t__unsafe_ptr=0;
  uint64_t __t2859t__dat__pos=0;
  uint64_t __t2859t__dat__length=0;
  char __t2859t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2852t(&f__unsafe_ptr,&__t2858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1046t(__t2858t__,&__t2859t__unsafe_ptr,&__t2859t__dat__pos,&__t2859t__dat__length,&__t2859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3103t=f__unsafe_ptr;
  *__t3104t=__t2859t__unsafe_ptr;
  *__t3105t=__t2859t__dat__pos;
  *__t3106t=__t2859t__dat__length;
  *__t3107t=__t2859t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2923t(char** __t3108t, uint64_t __t_anon1, char** __t3109t, uint64_t* __t3110t, uint64_t* __t3111t, char* __t3112t) {
  char* data__unsafe_ptr=*__t3108t;
  char* __t2924t__unsafe_ptr=0;
  uint64_t __t2924t__dat__pos=0;
  uint64_t __t2924t__dat__length=0;
  char __t2924t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2857t(&data__unsafe_ptr,&__t2924t__unsafe_ptr,&__t2924t__dat__pos,&__t2924t__dat__length,&__t2924t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3108t=data__unsafe_ptr;
  *__t3109t=__t2924t__unsafe_ptr;
  *__t3110t=__t2924t__dat__pos;
  *__t3111t=__t2924t__dat__length;
  *__t3112t=__t2924t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1023t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3113t, uint64_t* __t3114t, uint64_t* __t3115t, char* __t3116t) {
  goto __t_return;
  __t_return:
  *__t3113t=other__unsafe_ptr;
  *__t3114t=other__dat__pos;
  *__t3115t=other__dat__length;
  *__t3116t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t263t(uint64_t x, uint64_t y, char* __t3117t) {
  int __t264t__=0;
  char z=0;
  is_different__t106t(x,y,&__t264t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3117t=z;
}

static inline __attribute__((always_inline)) int sub__t363t(uint64_t x, uint64_t y, uint64_t* __t3118t) {
  int __t364t__=0;
  int __t365t=0;
  int __t366t=0;
  char __t367t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t106t(x,y,&__t364t__);
  lt__t263t(x,y,&__t367t__);
  if(__t367t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3118t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1192t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3119t) {
  uint64_t __t1193t__=0;
  char* __t1194t__=0;
  add__t186t(s__dat__pos,i,&__t1193t__);
  add__t679t(s__unsafe_ptr,__t1193t__,&__t1194t__);
  goto __t_return;
  __t_return:
  *__t3119t=__t1194t__;
}

int slice__t1215t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3120t, uint64_t* __t3121t, uint64_t* __t3122t, char* __t3123t) {
  char* __t1216t__unsafe_ptr=0;
  uint64_t __t1216t__dat__pos=0;
  uint64_t __t1216t__dat__length=0;
  char __t1216t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1217t__=0;
  char* __t1218t__unsafe_ptr=0;
  uint64_t __t1218t__dat__pos=0;
  uint64_t __t1218t__dat__length=0;
  char __t1218t__dat__first=0;
  char __t1219t__=0;
  char __t1220t__=0;
  char __t1221t=0;
  char __t1222t__=0;
  uint64_t __t1223t__=0;
  uint64_t new_length=0;
  uint64_t __t1224t=0;
  char __t1225t__=0;
  char new_first=0;
  char* __t1227t__=0;
  char __t1228t__value=0;
  uint64_t __t1229t__=0;
  char* __t1230t__unsafe_ptr=0;
  uint64_t __t1230t__dat__pos=0;
  uint64_t __t1230t__dat__length=0;
  char __t1230t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1023t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1216t__unsafe_ptr,&__t1216t__dat__pos,&__t1216t__dat__length,&__t1216t__dat__first);
  s__unsafe_ptr=__t1216t__unsafe_ptr;
  s__dat__pos=__t1216t__dat__pos;
  s__dat__length=__t1216t__dat__length;
  s__dat__first=__t1216t__dat__first;
  eq__t131t(from,to,&__t1217t__);
  if(__t1217t__){
  __t_errcode=str__t1046t(__t386t,&__t1218t__unsafe_ptr,&__t1218t__dat__pos,&__t1218t__dat__length,&__t1218t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t287t(from,to,&__t1219t__);
  if(!__t1219t__){
  gt__t287t(to,s__dat__length,&__t1220t__);
  __t1221t=__t1220t__;
  }
  else{
  __t1221t=0;
  not__t39t(__t1221t,&__t1222t__);
  __t1221t=__t1222t__;
  }
  if(__t1221t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t363t(to,from,&__t1223t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1223t__;
  __t1224t=0;
  neq__t155t(from,__t1224t,&__t1225t__);
  if(__t1225t__){
  get__t1192t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1227t__);
  if(!__t1227t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1228t__value,__t1227t__,1);
  new_first=__t1228t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t186t(s__dat__pos,from,&__t1229t__);
  str__t986t(s__unsafe_ptr,__t1229t__,new_length,new_first,&__t1230t__unsafe_ptr,&__t1230t__dat__pos,&__t1230t__dat__length,&__t1230t__dat__first);
  __t1218t__unsafe_ptr=__t1230t__unsafe_ptr;
  __t1218t__dat__pos=__t1230t__dat__pos;
  __t1218t__dat__length=__t1230t__dat__length;
  __t1218t__dat__first=__t1230t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3120t=__t1218t__unsafe_ptr;
  *__t3121t=__t1218t__dat__pos;
  *__t3122t=__t1218t__dat__length;
  *__t3123t=__t1218t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1059t(char x, char y, char* __t3124t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3124t=z;
}

static inline __attribute__((always_inline)) void eq__t1126t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3125t) {
  uint64_t __t1127t__=0;
  uint64_t n=0;
  uint64_t __t1128t__=0;
  char __t1129t__=0;
  char __t1130t=0;
  char __t1131t__=0;
  char __t1132t=0;
  char z=0;
  len__t1055t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1127t__);
  n=__t1127t__;
  len__t1055t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1128t__);
  neq__t155t(n,__t1128t__,&__t1129t__);
  if(__t1129t__){
  __t1130t=0;
  goto __t_return;
  }
  neq__t1059t(x__dat__first,y__dat__first,&__t1131t__);
  if(__t1131t__){
  __t1132t=0;
  __t1130t=__t1132t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1130t=z;
  goto __t_return;
  __t_return:
  *__t3125t=__t1130t;
}

static inline __attribute__((always_inline)) int ends_with__t1295t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3126t) {
  char* __t1296t__unsafe_ptr=0;
  uint64_t __t1296t__dat__pos=0;
  uint64_t __t1296t__dat__length=0;
  char __t1296t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1297t__unsafe_ptr=0;
  uint64_t __t1297t__dat__pos=0;
  uint64_t __t1297t__dat__length=0;
  char __t1297t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1298t__=0;
  char __t1299t=0;
  uint64_t __t1300t__=0;
  uint64_t n=0;
  uint64_t __t1301t__=0;
  uint64_t __t1302t__=0;
  char* __t1303t__unsafe_ptr=0;
  uint64_t __t1303t__dat__pos=0;
  uint64_t __t1303t__dat__length=0;
  char __t1303t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1304t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1023t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1296t__unsafe_ptr,&__t1296t__dat__pos,&__t1296t__dat__length,&__t1296t__dat__first);
  stack__unsafe_ptr=__t1296t__unsafe_ptr;
  stack__dat__pos=__t1296t__dat__pos;
  stack__dat__length=__t1296t__dat__length;
  stack__dat__first=__t1296t__dat__first;
  __t_errcode=str__t1046t(_needle,&__t1297t__unsafe_ptr,&__t1297t__dat__pos,&__t1297t__dat__length,&__t1297t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1297t__unsafe_ptr;
  needle__dat__pos=__t1297t__dat__pos;
  needle__dat__length=__t1297t__dat__length;
  needle__dat__first=__t1297t__dat__first;
  lt__t263t(stack__dat__length,needle__dat__length,&__t1298t__);
  if(__t1298t__){
  __t1299t=0;
  goto __t_return;
  }
  len__t1055t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1300t__);
  n=__t1300t__;
  len__t1055t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1301t__);
  __t_errcode=sub__t363t(n,__t1301t__,&__t1302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1215t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1302t__,n,&__t1303t__unsafe_ptr,&__t1303t__dat__pos,&__t1303t__dat__length,&__t1303t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1303t__unsafe_ptr;
  ret__dat__pos=__t1303t__dat__pos;
  ret__dat__length=__t1303t__dat__length;
  ret__dat__first=__t1303t__dat__first;
  eq__t1126t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1304t__);
  __t1299t=__t1304t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3126t=__t1299t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1166t(char** __t3127t, uint64_t* __t3128t, uint16_t* __t3129t, uint16_t* __t3130t, uint64_t* __t3131t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3132t, uint64_t* __t3133t, uint64_t* __t3134t, char* __t3135t) {
  char* CHARS__buf__unsafe_ptr=*__t3127t;
  uint64_t CHARS__buf__unsafe_size=*__t3128t;
  uint16_t CHARS__buf__unsafe_offset=*__t3129t;
  uint16_t CHARS__buf__unsafe_align=*__t3130t;
  uint64_t CHARS__pos=*__t3131t;
  char* __t1167t__unsafe_ptr=0;
  uint64_t __t1167t__dat__pos=0;
  uint64_t __t1167t__dat__length=0;
  char __t1167t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1168t__=0;
  uint64_t __t1169t__=0;
  uint64_t null_pos=0;
  uint64_t __t1170t=0;
  uint64_t __t1171t__=0;
  uint64_t next_pos=0;
  uint64_t __t1172t__=0;
  char __t1173t__=0;
  char* endpos=0;
  uint64_t __t1174t=0;
  uint64_t __t1175t__=0;
  uint64_t prev_pos=0;
  char* __t1176t__unsafe_ptr=0;
  uint64_t __t1176t__dat__pos=0;
  uint64_t __t1176t__dat__length=0;
  char __t1176t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1023t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1167t__unsafe_ptr,&__t1167t__dat__pos,&__t1167t__dat__length,&__t1167t__dat__first);
  other__unsafe_ptr=__t1167t__unsafe_ptr;
  other__dat__pos=__t1167t__dat__pos;
  other__dat__length=__t1167t__dat__length;
  other__dat__first=__t1167t__dat__first;
  len__t1055t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1168t__);
  add__t186t(CHARS__pos,__t1168t__,&__t1169t__);
  null_pos=__t1169t__;
  __t1170t=1;
  add__t186t(null_pos,__t1170t,&__t1171t__);
  next_pos=__t1171t__;
  len__t823t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1172t__);
  gt__t287t(next_pos,__t1172t__,&__t1173t__);
  if(__t1173t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1174t=0;
  add__t186t(CHARS__pos,__t1174t,&__t1175t__);
  prev_pos=__t1175t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t990t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1176t__unsafe_ptr,&__t1176t__dat__pos,&__t1176t__dat__length,&__t1176t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3127t=CHARS__buf__unsafe_ptr;
  *__t3128t=CHARS__buf__unsafe_size;
  *__t3129t=CHARS__buf__unsafe_offset;
  *__t3130t=CHARS__buf__unsafe_align;
  *__t3131t=CHARS__pos;
  *__t3132t=__t1176t__unsafe_ptr;
  *__t3133t=__t1176t__dat__pos;
  *__t3134t=__t1176t__dat__length;
  *__t3135t=__t1176t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1123t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3136t) {
  uint64_t __t1124t__=0;
  add__t186t(s__dat__pos,s__dat__length,&__t1124t__);
  goto __t_return;
  __t_return:
  *__t3136t=__t1124t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3137t) {
  int value=0;
  *__t3137t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3138t) {
  int __t51t__=0;
  true__t15t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3138t=__t51t__;
}

static inline __attribute__((always_inline)) int str__t998t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t3139t, uint64_t* __t3140t, uint64_t* __t3141t, char* __t3142t) {
  int __t999t=0;
  int __t1000t=0;
  int __t1001t__=0;
  uint64_t __t1002t__=0;
  char __t1003t__=0;
  uint64_t __t1004t=0;
  uint64_t __t1005t=0;
  char* __t1007t__=0;
  char __t1008t__value=0;
  char* __t1009t__unsafe_ptr=0;
  uint64_t __t1009t__dat__pos=0;
  uint64_t __t1009t__dat__length=0;
  char __t1009t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t50t(__t1000t,&__t1001t__);
  len__t823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1002t__);
  gt__t287t(length,__t1002t__,&__t1003t__);
  if(__t1003t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1004t=0;
  __t1005t=0;
  __t_errcode=get__t816t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1005t,&__t1007t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1007t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1008t__value,__t1007t__,1);
  __t_errcode=str__t990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1004t,length,__t1008t__value,&__t1009t__unsafe_ptr,&__t1009t__dat__pos,&__t1009t__dat__length,&__t1009t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3139t=__t1009t__unsafe_ptr;
  *__t3140t=__t1009t__dat__pos;
  *__t3141t=__t1009t__dat__length;
  *__t3142t=__t1009t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1190t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1191t=0;
  const char* endl=0;
  endl=__t398t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t824t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1103t(char** __t3143t, uint64_t* __t3144t, uint16_t* __t3145t, uint16_t* __t3146t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3143t=unsafe_ptr;
  *__t3144t=unsafe_size;
  *__t3145t=unsafe_offset;
  *__t3146t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1102t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3147t, uint64_t* __t3148t, uint64_t* __t3149t, char* __t3150t) {
  char* __t1105t__unsafe_ptr=0;
  uint64_t __t1105t__unsafe_size=0;
  uint16_t __t1105t__unsafe_offset=0;
  uint16_t __t1105t__unsafe_align=0;
  uint64_t __t1106t=0;
  uint64_t __t1107t__=0;
  uint64_t __t1108t__=0;
  char* __t1109t__unsafe_ptr=0;
  uint64_t __t1109t__unsafe_size=0;
  uint16_t __t1109t__unsafe_offset=0;
  uint16_t __t1109t__unsafe_align=0;
  char __t1110t____t708t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1111t=0;
  char* __t1112t__unsafe_ptr=0;
  uint64_t __t1112t__dat__pos=0;
  uint64_t __t1112t__dat__length=0;
  char __t1112t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1103t(&__t1105t__unsafe_ptr,&__t1105t__unsafe_size,&__t1105t__unsafe_offset,&__t1105t__unsafe_align);
  __t1106t=1;
  len__t1055t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1107t__);
  add__t186t(__t1106t,__t1107t__,&__t1108t__);
  __t_errcode=alloc__t706t(&__t1105t__unsafe_ptr,&__t1105t__unsafe_size,&__t1105t__unsafe_offset,&__t1105t__unsafe_align,__t1108t__,&__t1109t__unsafe_ptr,&__t1109t__unsafe_size,&__t1109t__unsafe_offset,&__t1109t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1109t__unsafe_ptr;
  buf__unsafe_size=__t1109t__unsafe_size;
  buf__unsafe_offset=__t1109t__unsafe_offset;
  buf__unsafe_align=__t1109t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1111t=0;
  __t_errcode=str__t990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1111t,other__dat__length,other__dat__first,&__t1112t__unsafe_ptr,&__t1112t__dat__pos,&__t1112t__dat__length,&__t1112t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t607t(__t1112t__unsafe_ptr,&__t1110t____t708t__);
  if(__t1110t____t708t__){
  free__t677t(&__t1112t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3147t=__t1112t__unsafe_ptr;
  *__t3148t=__t1112t__dat__pos;
  *__t3149t=__t1112t__dat__length;
  *__t3150t=__t1112t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1113t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3151t, char** __t3152t, uint64_t* __t3153t, uint64_t* __t3154t, char* __t3155t) {
  char* __t1115t__unsafe_ptr=0;
  uint64_t __t1115t__dat__pos=0;
  uint64_t __t1115t__dat__length=0;
  char __t1115t__dat__first=0;
  char __t1116t____t1110t____t708t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1117t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t824t();
  __t_errcode=copy_null_terminated__t1102t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1115t__unsafe_ptr,&__t1115t__dat__pos,&__t1115t__dat__length,&__t1115t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1115t__unsafe_ptr;
  str__dat__pos=__t1115t__dat__pos;
  str__dat__length=__t1115t__dat__length;
  str__dat__first=__t1115t__dat__first;
  add__t679t(str__unsafe_ptr,str__dat__pos,&__t1117t__);
  _ret=__t1117t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t607t(str__unsafe_ptr,&__t1116t____t1110t____t708t__);
  if(__t1116t____t1110t____t708t__){
  free__t677t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3151t=cstr;
  *__t3152t=str__unsafe_ptr;
  *__t3153t=str__dat__pos;
  *__t3154t=str__dat__length;
  *__t3155t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1121t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3156t) {
  goto __t_return;
  __t_return:
  *__t3156t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2205t(const char* cmd, char** __t3157t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3157t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2204t(char* unsafe_ptr, int64_t* __t3158t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3158t=status;
}

static inline __attribute__((always_inline)) void int__t587t(uint64_t x, int64_t* __t3159t) {
  int __t588t=0;
  int __t589t=0;
  int __t590t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3159t=z;
}

static inline __attribute__((always_inline)) void is_different__t94t(int64_t x, int64_t y, int* __t3160t) {
  int __t95t=0;
  int __t96t__=0;
  not__t48t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t3160t=__t96t__;
}

static inline __attribute__((always_inline)) void neq__t144t(int64_t x, int64_t y, char* __t3161t) {
  int __t145t__=0;
  char z=0;
  is_different__t94t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3161t=z;
}

static inline __attribute__((always_inline)) int open__t2206t(const char* cmd, char** __t3162t) {
  char* __t2207t__=0;
  char* unsafe_ptr=0;
  char __t2208t__=0;
  char __t2209t__=0;
  char __t2210t__=0;
  int64_t __t2211t__=0;
  int64_t status=0;
  uint64_t __t2212t=0;
  int64_t __t2213t__=0;
  char __t2214t__=0;
  char __t2215t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2205t(cmd,&__t2207t__);
  unsafe_ptr=__t2207t__;
  exists__t607t(unsafe_ptr,&__t2208t__);
  not__t39t(__t2208t__,&__t2209t__);
  if(__t2209t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t607t(unsafe_ptr,&__t2210t__);
  if(__t2210t__){
  pclose__t2204t(unsafe_ptr,&__t2211t__);
  status=__t2211t__;
  unsafe_ptr=0;
  __t2212t=0;
  int__t587t(__t2212t,&__t2213t__);
  neq__t144t(status,__t2213t__,&__t2214t__);
  if(__t2214t__){
  __t_complain=37;
  goto __t2215t__label;
  __t2215t__label:__t2215t=__t2215t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3162t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2217t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3163t) {
  const char* __t2218t__cstr=0;
  char* __t2218t__str__unsafe_ptr=0;
  uint64_t __t2218t__str__dat__pos=0;
  uint64_t __t2218t__str__dat__length=0;
  char __t2218t__str__dat__first=0;
  char __t2219t____t1116t____t1110t____t708t__=0;
  const char* __t2220t__=0;
  char* __t2221t__unsafe_ptr=0;
  char __t2222t____t2210t__=0;
  int64_t __t2222t____t2211t__=0;
  int64_t __t2222t__status=0;
  uint64_t __t2222t____t2212t=0;
  int64_t __t2222t____t2213t__=0;
  char __t2222t____t2214t__=0;
  char __t2222t____t2215t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1113t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2218t__cstr,&__t2218t__str__unsafe_ptr,&__t2218t__str__dat__pos,&__t2218t__str__dat__length,&__t2218t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1121t(__t2218t__cstr,__t2218t__str__unsafe_ptr,__t2218t__str__dat__pos,__t2218t__str__dat__length,__t2218t__str__dat__first,&__t2220t__);
  __t_errcode=open__t2206t(__t2220t__,&__t2221t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t607t(__t2221t__unsafe_ptr,&__t2222t____t2210t__);
  if(__t2222t____t2210t__){
  pclose__t2204t(__t2221t__unsafe_ptr,&__t2222t____t2211t__);
  __t2222t__status=__t2222t____t2211t__;
  __t2221t__unsafe_ptr=0;
  __t2222t____t2212t=0;
  int__t587t(__t2222t____t2212t,&__t2222t____t2213t__);
  neq__t144t(__t2222t__status,__t2222t____t2213t__,&__t2222t____t2214t__);
  if(__t2222t____t2214t__){
  __t_complain=37;
  goto __t2215t__label;
  __t2215t__label:__t2222t____t2215t=__t2222t____t2215t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3163t=__t2221t__unsafe_ptr;
  
  __t_skip_returns:exists__t607t(__t2218t__str__unsafe_ptr,&__t2219t____t1116t____t1110t____t708t__);
  if(__t2219t____t1116t____t1110t____t708t__){
  free__t677t(&__t2218t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2184t(int64_t value, const char** __t3164t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3164t=ret;
}

static inline __attribute__((always_inline)) void print__t396t(const char* value) {
  int __t397t=0;
  const char* endl=0;
  endl=__t398t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2964t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2965t__unsafe_ptr=0;
  char __t2966t____t2222t____t2210t__=0;
  int64_t __t2966t____t2222t____t2211t__=0;
  int64_t __t2966t____t2222t__status=0;
  uint64_t __t2966t____t2222t____t2212t=0;
  int64_t __t2966t____t2222t____t2213t__=0;
  char __t2966t____t2222t____t2214t__=0;
  char __t2966t____t2222t____t2215t=0;
  char* proc__unsafe_ptr=0;
  char __t2967t=0;
  int64_t __t2968t=0;
  int64_t error=0;
  const char* __t2969t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2217t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2965t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t2965t__unsafe_ptr;
  exists__t607t(__t2965t__unsafe_ptr,&__t2966t____t2222t____t2210t__);
  if(__t2966t____t2222t____t2210t__){
  pclose__t2204t(__t2965t__unsafe_ptr,&__t2966t____t2222t____t2211t__);
  __t2966t____t2222t__status=__t2966t____t2222t____t2211t__;
  __t2965t__unsafe_ptr=0;
  __t2966t____t2222t____t2212t=0;
  int__t587t(__t2966t____t2222t____t2212t,&__t2966t____t2222t____t2213t__);
  neq__t144t(__t2966t____t2222t__status,__t2966t____t2222t____t2213t__,&__t2966t____t2222t____t2214t__);
  if(__t2966t____t2222t____t2214t__){
  __t_complain=37;
  goto __t2215t__label;
  __t2215t__label:__t2966t____t2222t____t2215t=__t2966t____t2222t____t2215t==0;
  }
  }
  __t2968t=__t_complain;
  __t2967t=(__t_complain==0);
  __t_complain=0;
  error=__t2968t;
  __t2967t__label:__t2967t=__t2967t==0;
  if(__t2967t){
  cstr__t2184t(error,&__t2969t__);
  print__t396t(__t2969t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2971t() {
  char* __t2976t__unsafe_ptr=0;
  uint64_t __t2976t__unsafe_size=0;
  uint16_t __t2976t__unsafe_offset=0;
  uint16_t __t2976t__unsafe_align=0;
  uint64_t __t2977t=0;
  char* __t2978t__unsafe_ptr=0;
  uint64_t __t2978t__unsafe_size=0;
  uint16_t __t2978t__unsafe_offset=0;
  uint16_t __t2978t__unsafe_align=0;
  char __t2979t____t708t__=0;
  char* __t2980t__buf__unsafe_ptr=0;
  uint64_t __t2980t__buf__unsafe_size=0;
  uint16_t __t2980t__buf__unsafe_offset=0;
  uint16_t __t2980t__buf__unsafe_align=0;
  uint64_t __t2980t__pos=0;
  char* __t2981t__buf__unsafe_ptr=0;
  uint64_t __t2981t__buf__unsafe_size=0;
  uint16_t __t2981t__buf__unsafe_offset=0;
  uint16_t __t2981t__buf__unsafe_align=0;
  uint64_t __t2981t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2984t__unsafe_ptr=0;
  uint64_t __t2984t__dat__pos=0;
  uint64_t __t2984t__dat__length=0;
  char __t2984t__dat__first=0;
  char* __t2985t__unsafe_ptr=0;
  uint64_t __t2985t__dat__pos=0;
  uint64_t __t2985t__dat__length=0;
  char __t2985t__dat__first=0;
  char* __t2986t__unsafe_ptr=0;
  char* __t2988t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2989t=0;
  char __t2990t=0;
  char* __t2991t__unsafe_ptr=0;
  uint64_t __t2991t__dat__pos=0;
  uint64_t __t2991t__dat__length=0;
  char __t2991t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2993t__=0;
  char __t2994t__=0;
  char* __t2995t__buf__unsafe_ptr=0;
  uint64_t __t2995t__buf__unsafe_size=0;
  uint16_t __t2995t__buf__unsafe_offset=0;
  uint16_t __t2995t__buf__unsafe_align=0;
  uint64_t __t2995t__pos=0;
  char* __t2996t__unsafe_ptr=0;
  uint64_t __t2996t__dat__pos=0;
  uint64_t __t2996t__dat__length=0;
  char __t2996t__dat__first=0;
  char* __t2997t__unsafe_ptr=0;
  uint64_t __t2997t__dat__pos=0;
  uint64_t __t2997t__dat__length=0;
  char __t2997t__dat__first=0;
  uint64_t __t2998t__=0;
  char* __t2999t__unsafe_ptr=0;
  uint64_t __t2999t__dat__pos=0;
  uint64_t __t2999t__dat__length=0;
  char __t2999t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t377t();
  char____t_buffer____buffer__t2974t(&__t2976t__unsafe_ptr,&__t2976t__unsafe_size,&__t2976t__unsafe_offset,&__t2976t__unsafe_align);
  __t2977t=256;
  __t_errcode=alloc__t706t(&__t2976t__unsafe_ptr,&__t2976t__unsafe_size,&__t2976t__unsafe_offset,&__t2976t__unsafe_align,__t2977t,&__t2978t__unsafe_ptr,&__t2978t__unsafe_size,&__t2978t__unsafe_offset,&__t2978t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t831t(&__t2978t__unsafe_ptr,&__t2978t__unsafe_size,&__t2978t__unsafe_offset,&__t2978t__unsafe_align,&__t2980t__buf__unsafe_ptr,&__t2980t__buf__unsafe_size,&__t2980t__buf__unsafe_offset,&__t2980t__buf__unsafe_align,&__t2980t__pos);
  __t2981t__buf__unsafe_ptr=__t2980t__buf__unsafe_ptr;
  __t2981t__buf__unsafe_size=__t2980t__buf__unsafe_size;
  __t2981t__buf__unsafe_offset=__t2980t__buf__unsafe_offset;
  __t2981t__buf__unsafe_align=__t2980t__buf__unsafe_align;
  __t2981t__pos=__t2980t__pos;
  CHARS__buf__unsafe_ptr=__t2981t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2981t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2981t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2981t__buf__unsafe_align;
  CHARS__pos=__t2981t__pos;
  path=__t2982t;
  __t_errcode=copy__t1077t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2983t,&__t2984t__unsafe_ptr,&__t2984t__dat__pos,&__t2984t__dat__length,&__t2984t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1077t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2985t__unsafe_ptr,&__t2985t__dat__pos,&__t2985t__dat__length,&__t2985t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2841t(path,&__t2986t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2988t__unsafe_ptr=__t2986t__unsafe_ptr;
  test_dir__unsafe_ptr=__t2988t__unsafe_ptr;
  __t2989t=0-1;
  while(1){
  __t2989t=__t2989t+1;
  __t_complain=get__t2923t(&test_dir__unsafe_ptr,__t2989t,&__t2991t__unsafe_ptr,&__t2991t__dat__pos,&__t2991t__dat__length,&__t2991t__dat__first);
  __t2990t=__t_complain;
  if(__t_complain){
  goto __t2990t__label;
  }
  entry__unsafe_ptr=__t2991t__unsafe_ptr;
  entry__dat__pos=__t2991t__dat__pos;
  entry__dat__length=__t2991t__dat__length;
  entry__dat__first=__t2991t__dat__first;
  __t2990t__label:__t2990t=__t2990t==0;
  if(!__t2990t){
  break;
  }
  __t_errcode=ends_with__t1295t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2992t,&__t2993t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t39t(__t2993t__,&__t2994t__);
  if(__t2994t__){
  continue;
  }
  __t2995t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2995t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2995t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2995t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2995t__pos=CHARS__pos;
  str__t1023t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2996t__unsafe_ptr,&__t2996t__dat__pos,&__t2996t__dat__length,&__t2996t__dat__first);
  __t_errcode=copy_null_terminated__t1166t(&__t2995t__buf__unsafe_ptr,&__t2995t__buf__unsafe_size,&__t2995t__buf__unsafe_offset,&__t2995t__buf__unsafe_align,&__t2995t__pos,__t2996t__unsafe_ptr,__t2996t__dat__pos,__t2996t__dat__length,__t2996t__dat__first,&__t2997t__unsafe_ptr,&__t2997t__dat__pos,&__t2997t__dat__length,&__t2997t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1123t(__t2997t__unsafe_ptr,__t2997t__dat__pos,__t2997t__dat__length,__t2997t__dat__first,&__t2998t__);
  __t_errcode=str__t998t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2998t__,&__t2999t__unsafe_ptr,&__t2999t__dat__pos,&__t2999t__dat__length,&__t2999t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2999t__unsafe_ptr;
  command__dat__pos=__t2999t__dat__pos;
  command__dat__length=__t2999t__dat__length;
  command__dat__first=__t2999t__dat__first;
  print__t1190t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2964t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2840t(__t2986t__unsafe_ptr);
  exists__t607t(__t2978t__unsafe_ptr,&__t2979t____t708t__);
  if(__t2979t____t708t__){
  free__t677t(&__t2978t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2971t();return 0;}