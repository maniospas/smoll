#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3025t="[";
const char* const __t1723t="+";
const char* const __t3091t="./tests/passing/";
const char* const __t400t="\n";
const char* const __t3137t="SUCCESS ";
const char* const __t3117t="\r";
const char* const __t3040t="] ";
const char* const __t3033t="V";
const char* const __t3124t="    ";
const char* const __t3050t="failure";
const char* const __t3092t="./smoll --cleanup ";
const char* const __t3053t="X";
const char* const __t3158t=" out of ";
const char* const __t388t="";
const char* const __t3069t="pending";
const char* const __t3151t="FAILED ";
const char* const __t3147t=" tests";
const char* const __t3030t="success";
const char* const __t3103t=".s";
const char* const __t3142t="no errors in ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t3081t(char** __t3164t, uint64_t* __t3165t, uint32_t* __t3166t, uint32_t* __t3167t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3164t=unsafe_ptr;
  *__t3165t=unsafe_size;
  *__t3166t=unsafe_offset;
  *__t3167t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t3168t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3168t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t3169t) {
  char* allocated=*__t3169t;
  if(allocated){
  free(allocated);
  }
  *__t3169t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3170t) {
  int value=0;
  *__t3170t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3171t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3171t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3172t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3172t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3173t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3173t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3174t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3174t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t3175t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3175t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3176t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3176t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3177t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3177t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t3178t) {
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
  *__t3178t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t709t(char** __t3179t, uint64_t* __t3180t, uint32_t* __t3181t, uint32_t* __t3182t, uint64_t size, char** __t3183t, uint64_t* __t3184t, uint32_t* __t3185t, uint32_t* __t3186t) {
  char* buffer__unsafe_ptr=*__t3179t;
  uint64_t buffer__unsafe_size=*__t3180t;
  uint32_t buffer__unsafe_offset=*__t3181t;
  uint32_t buffer__unsafe_align=*__t3182t;
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
  *__t3179t=buffer__unsafe_ptr;
  *__t3180t=buffer__unsafe_size;
  *__t3181t=buffer__unsafe_offset;
  *__t3182t=buffer__unsafe_align;
  *__t3183t=buffer__unsafe_ptr;
  *__t3184t=buffer__unsafe_size;
  *__t3185t=buffer__unsafe_offset;
  *__t3186t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t831t(char** __t3187t, uint64_t* __t3188t, uint32_t* __t3189t, uint32_t* __t3190t, uint64_t _pos, char** __t3191t, uint64_t* __t3192t, uint32_t* __t3193t, uint32_t* __t3194t, uint64_t* __t3195t) {
  char* buf__unsafe_ptr=*__t3187t;
  uint64_t buf__unsafe_size=*__t3188t;
  uint32_t buf__unsafe_offset=*__t3189t;
  uint32_t buf__unsafe_align=*__t3190t;
  uint64_t __t832t=0;
  uint64_t pos=0;
  __t832t=_pos;
  pos=__t832t;
  goto __t_return;
  __t_return:
  *__t3187t=buf__unsafe_ptr;
  *__t3188t=buf__unsafe_size;
  *__t3189t=buf__unsafe_offset;
  *__t3190t=buf__unsafe_align;
  *__t3191t=buf__unsafe_ptr;
  *__t3192t=buf__unsafe_size;
  *__t3193t=buf__unsafe_offset;
  *__t3194t=buf__unsafe_align;
  *__t3195t=pos;
}

static inline __attribute__((always_inline)) void arena__t834t(char** __t3196t, uint64_t* __t3197t, uint32_t* __t3198t, uint32_t* __t3199t, char** __t3200t, uint64_t* __t3201t, uint32_t* __t3202t, uint32_t* __t3203t, uint64_t* __t3204t) {
  char* buf__unsafe_ptr=*__t3196t;
  uint64_t buf__unsafe_size=*__t3197t;
  uint32_t buf__unsafe_offset=*__t3198t;
  uint32_t buf__unsafe_align=*__t3199t;
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
  *__t3196t=buf__unsafe_ptr;
  *__t3197t=buf__unsafe_size;
  *__t3198t=buf__unsafe_offset;
  *__t3199t=buf__unsafe_align;
  *__t3200t=__t836t__buf__unsafe_ptr;
  *__t3201t=__t836t__buf__unsafe_size;
  *__t3202t=__t836t__buf__unsafe_offset;
  *__t3203t=__t836t__buf__unsafe_align;
  *__t3204t=__t836t__pos;
}

static inline __attribute__((always_inline)) void supports_ansi__t425t(char* __t3205t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3205t=supports;
}

static inline __attribute__((always_inline)) void colors__t426t(char* __t3206t) {
  char __t427t__=0;
  char initialized=0;
  supports_ansi__t425t(&__t427t__);
  initialized=__t427t__;
  goto __t_return;
  __t_return:
  *__t3206t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t967t(char** __t3207t, uint64_t* __t3208t, uint32_t* __t3209t, uint32_t* __t3210t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3207t=unsafe_ptr;
  *__t3208t=unsafe_size;
  *__t3209t=unsafe_offset;
  *__t3210t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3211t) {
  *__t3211t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3212t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3212t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3213t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3213t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3214t) {
  *__t3214t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t3215t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t3215t=__t682t__;
}

static inline __attribute__((always_inline)) int get__t819t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3216t) {
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
  *__t3216t=__t825t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t989t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3217t, uint64_t* __t3218t, uint64_t* __t3219t, char* __t3220t) {
  goto __t_return;
  __t_return:
  *__t3217t=unsafe_ptr;
  *__t3218t=dat__pos;
  *__t3219t=dat__length;
  *__t3220t=dat__first;
}

static inline __attribute__((always_inline)) int str__t993t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3221t, uint64_t* __t3222t, uint64_t* __t3223t, char* __t3224t) {
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
  *__t3221t=__t1000t__unsafe_ptr;
  *__t3222t=__t1000t__dat__pos;
  *__t3223t=__t1000t__dat__length;
  *__t3224t=__t1000t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1027t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3225t, uint64_t* __t3226t, uint64_t* __t3227t, char* __t3228t) {
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
  *__t3225t=__t1033t__unsafe_ptr;
  *__t3226t=__t1033t__dat__pos;
  *__t3227t=__t1033t__dat__length;
  *__t3228t=__t1033t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1049t(const char* c, char** __t3229t, uint64_t* __t3230t, uint64_t* __t3231t, char* __t3232t) {
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
  *__t3229t=__t1057t__unsafe_ptr;
  *__t3230t=__t1057t__dat__pos;
  *__t3231t=__t1057t__dat__length;
  *__t3232t=__t1057t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1058t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3233t) {
  goto __t_return;
  __t_return:
  *__t3233t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t826t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3234t) {
  goto __t_return;
  __t_return:
  *__t3234t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3235t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3235t=z;
}

static inline __attribute__((always_inline)) void allocated__t839t(char** __t3236t, uint64_t* __t3237t, uint32_t* __t3238t, uint32_t* __t3239t, uint64_t pos, char** __t3240t, uint64_t* __t3241t, uint32_t* __t3242t, uint32_t* __t3243t, uint64_t* __t3244t) {
  char* buf__unsafe_ptr=*__t3236t;
  uint64_t buf__unsafe_size=*__t3237t;
  uint32_t buf__unsafe_offset=*__t3238t;
  uint32_t buf__unsafe_align=*__t3239t;
  goto __t_return;
  __t_return:
  *__t3236t=buf__unsafe_ptr;
  *__t3237t=buf__unsafe_size;
  *__t3238t=buf__unsafe_offset;
  *__t3239t=buf__unsafe_align;
  *__t3240t=buf__unsafe_ptr;
  *__t3241t=buf__unsafe_size;
  *__t3242t=buf__unsafe_offset;
  *__t3243t=buf__unsafe_align;
  *__t3244t=pos;
}

static inline __attribute__((always_inline)) int alloc__t879t(char** __t3245t, uint64_t* __t3246t, uint32_t* __t3247t, uint32_t* __t3248t, uint64_t* __t3249t, uint64_t length, char** __t3250t, uint64_t* __t3251t, uint32_t* __t3252t, uint32_t* __t3253t, uint64_t* __t3254t) {
  char* allocator__buf__unsafe_ptr=*__t3245t;
  uint64_t allocator__buf__unsafe_size=*__t3246t;
  uint32_t allocator__buf__unsafe_offset=*__t3247t;
  uint32_t allocator__buf__unsafe_align=*__t3248t;
  uint64_t allocator__pos=*__t3249t;
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
  *__t3245t=allocator__buf__unsafe_ptr;
  *__t3246t=allocator__buf__unsafe_size;
  *__t3247t=allocator__buf__unsafe_offset;
  *__t3248t=allocator__buf__unsafe_align;
  *__t3249t=allocator__pos;
  *__t3250t=__t886t__buf__unsafe_ptr;
  *__t3251t=__t886t__buf__unsafe_size;
  *__t3252t=__t886t__buf__unsafe_offset;
  *__t3253t=__t886t__buf__unsafe_align;
  *__t3254t=__t886t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1080t(char** __t3255t, uint64_t* __t3256t, uint32_t* __t3257t, uint32_t* __t3258t, uint64_t* __t3259t, const char* _other, char** __t3260t, uint64_t* __t3261t, uint64_t* __t3262t, char* __t3263t) {
  char* CHARS__buf__unsafe_ptr=*__t3255t;
  uint64_t CHARS__buf__unsafe_size=*__t3256t;
  uint32_t CHARS__buf__unsafe_offset=*__t3257t;
  uint32_t CHARS__buf__unsafe_align=*__t3258t;
  uint64_t CHARS__pos=*__t3259t;
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
  *__t3255t=CHARS__buf__unsafe_ptr;
  *__t3256t=CHARS__buf__unsafe_size;
  *__t3257t=CHARS__buf__unsafe_offset;
  *__t3258t=CHARS__buf__unsafe_align;
  *__t3259t=CHARS__pos;
  *__t3260t=__t1084t__unsafe_ptr;
  *__t3261t=__t1084t__dat__pos;
  *__t3262t=__t1084t__dat__length;
  *__t3263t=__t1084t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t2879t(char* unsafe_ptr) {
  int __t2881t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t2882t(const char* path, char** __t3264t) {
  int __t2884t=0;
  char* unsafe_ptr=0;
  char __t2886t__=0;
  char __t2887t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t609t(unsafe_ptr,&__t2886t__);
  not__t41t(__t2886t__,&__t2887t__);
  if(__t2887t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t2879t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3264t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2895t(char** __t3265t, const char** __t3266t) {
  char* f__unsafe_ptr=*__t3265t;
  char __t2896t__=0;
  char __t2897t__=0;
  char* de=0;
  char __t2898t__=0;
  char __t2899t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t609t(f__unsafe_ptr,&__t2896t__);
  not__t41t(__t2896t__,&__t2897t__);
  if(__t2897t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t609t(de,&__t2898t__);
  not__t41t(__t2898t__,&__t2899t__);
  if(__t2899t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3265t=f__unsafe_ptr;
  *__t3266t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t2900t(char** __t3267t, char** __t3268t, uint64_t* __t3269t, uint64_t* __t3270t, char* __t3271t) {
  char* f__unsafe_ptr=*__t3267t;
  const char* __t2901t__=0;
  char* __t2902t__unsafe_ptr=0;
  uint64_t __t2902t__dat__pos=0;
  uint64_t __t2902t__dat__length=0;
  char __t2902t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2895t(&f__unsafe_ptr,&__t2901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1049t(__t2901t__,&__t2902t__unsafe_ptr,&__t2902t__dat__pos,&__t2902t__dat__length,&__t2902t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3267t=f__unsafe_ptr;
  *__t3268t=__t2902t__unsafe_ptr;
  *__t3269t=__t2902t__dat__pos;
  *__t3270t=__t2902t__dat__length;
  *__t3271t=__t2902t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2966t(char** __t3272t, uint64_t __t_anon1, char** __t3273t, uint64_t* __t3274t, uint64_t* __t3275t, char* __t3276t) {
  char* data__unsafe_ptr=*__t3272t;
  char* __t2967t__unsafe_ptr=0;
  uint64_t __t2967t__dat__pos=0;
  uint64_t __t2967t__dat__length=0;
  char __t2967t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t2900t(&data__unsafe_ptr,&__t2967t__unsafe_ptr,&__t2967t__dat__pos,&__t2967t__dat__length,&__t2967t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3272t=data__unsafe_ptr;
  *__t3273t=__t2967t__unsafe_ptr;
  *__t3274t=__t2967t__dat__pos;
  *__t3275t=__t2967t__dat__length;
  *__t3276t=__t2967t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1026t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3277t, uint64_t* __t3278t, uint64_t* __t3279t, char* __t3280t) {
  goto __t_return;
  __t_return:
  *__t3277t=other__unsafe_ptr;
  *__t3278t=other__dat__pos;
  *__t3279t=other__dat__length;
  *__t3280t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3281t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3281t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3282t) {
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
  *__t3282t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1195t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3283t) {
  uint64_t __t1196t__=0;
  char* __t1197t__=0;
  add__t188t(s__dat__pos,i,&__t1196t__);
  add__t681t(s__unsafe_ptr,__t1196t__,&__t1197t__);
  goto __t_return;
  __t_return:
  *__t3283t=__t1197t__;
}

int slice__t1218t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3284t, uint64_t* __t3285t, uint64_t* __t3286t, char* __t3287t) {
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
  *__t3284t=__t1221t__unsafe_ptr;
  *__t3285t=__t1221t__dat__pos;
  *__t3286t=__t1221t__dat__length;
  *__t3287t=__t1221t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1062t(char x, char y, char* __t3288t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3288t=z;
}

static inline __attribute__((always_inline)) void eq__t1129t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3289t) {
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
  *__t3289t=__t1133t;
}

static inline __attribute__((always_inline)) int ends_with__t1298t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3290t) {
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
  *__t3290t=__t1302t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1169t(char** __t3291t, uint64_t* __t3292t, uint32_t* __t3293t, uint32_t* __t3294t, uint64_t* __t3295t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3296t, uint64_t* __t3297t, uint64_t* __t3298t, char* __t3299t) {
  char* CHARS__buf__unsafe_ptr=*__t3291t;
  uint64_t CHARS__buf__unsafe_size=*__t3292t;
  uint32_t CHARS__buf__unsafe_offset=*__t3293t;
  uint32_t CHARS__buf__unsafe_align=*__t3294t;
  uint64_t CHARS__pos=*__t3295t;
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
  *__t3291t=CHARS__buf__unsafe_ptr;
  *__t3292t=CHARS__buf__unsafe_size;
  *__t3293t=CHARS__buf__unsafe_offset;
  *__t3294t=CHARS__buf__unsafe_align;
  *__t3295t=CHARS__pos;
  *__t3296t=__t1179t__unsafe_ptr;
  *__t3297t=__t1179t__dat__pos;
  *__t3298t=__t1179t__dat__length;
  *__t3299t=__t1179t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1126t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3300t) {
  uint64_t __t1127t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1127t__);
  goto __t_return;
  __t_return:
  *__t3300t=__t1127t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3301t) {
  int value=0;
  *__t3301t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t3302t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t3302t=__t53t__;
}

static inline __attribute__((always_inline)) int str__t1001t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t length, char** __t3303t, uint64_t* __t3304t, uint64_t* __t3305t, char* __t3306t) {
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
  *__t3303t=__t1012t__unsafe_ptr;
  *__t3304t=__t1012t__dat__pos;
  *__t3305t=__t1012t__dat__length;
  *__t3306t=__t1012t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t387t(const char* value, const char** __t3307t, const char** __t3308t) {
  const char* __t389t=0;
  __t389t=__t388t;
  goto __t_return;
  __t_return:
  *__t3307t=value;
  *__t3308t=__t389t;
}

static inline __attribute__((always_inline)) void print__t396t(const char* value, const char* endl) {
  int __t397t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t440t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void set__t552t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3061t(char colors__initialized) {
  const char* __t3063t__value=0;
  const char* __t3063t____t389t=0;
  int __t3065t=0;
  int __t3066t=0;
  char __t3067t=0;
  char __t3068t=0;
  const char* __t3072t__value=0;
  const char* __t3072t____t389t=0;
  const char* __t3076t__value=0;
  const char* __t3076t____t389t=0;
  nn__t387t(__t3025t,&__t3063t__value,&__t3063t____t389t);
  print__t396t(__t3063t__value,__t3063t____t389t);
  __t3068t=1;
  if(__t3069t!=__t3069t){
  __t3068t=0;
  }
  if(__t3068t){
  __t3067t=1;
  }
  if(__t3067t){
  set__t440t(colors__initialized);
  nn__t387t(__t1723t,&__t3072t__value,&__t3072t____t389t);
  print__t396t(__t3072t__value,__t3072t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3040t,&__t3076t__value,&__t3076t____t389t);
  print__t396t(__t3076t__value,__t3076t____t389t);
}

static inline __attribute__((always_inline)) void nn__t1422t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t3309t, uint64_t* __t3310t, uint64_t* __t3311t, char* __t3312t, const char** __t3313t) {
  const char* __t1423t=0;
  __t1423t=__t388t;
  goto __t_return;
  __t_return:
  *__t3309t=value__unsafe_ptr;
  *__t3310t=value__dat__pos;
  *__t3311t=value__dat__length;
  *__t3312t=value__dat__first;
  *__t3313t=__t1423t;
}

static inline __attribute__((always_inline)) void print__t1191t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1192t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void flush__t386t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void new__t827t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1106t(char** __t3314t, uint64_t* __t3315t, uint32_t* __t3316t, uint32_t* __t3317t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3314t=unsafe_ptr;
  *__t3315t=unsafe_size;
  *__t3316t=unsafe_offset;
  *__t3317t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1105t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3318t, uint64_t* __t3319t, uint64_t* __t3320t, char* __t3321t) {
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
  *__t3318t=__t1115t__unsafe_ptr;
  *__t3319t=__t1115t__dat__pos;
  *__t3320t=__t1115t__dat__length;
  *__t3321t=__t1115t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1116t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3322t, char** __t3323t, uint64_t* __t3324t, uint64_t* __t3325t, char* __t3326t) {
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
  *__t3322t=cstr;
  *__t3323t=str__unsafe_ptr;
  *__t3324t=str__dat__pos;
  *__t3325t=str__dat__length;
  *__t3326t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1124t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3327t) {
  goto __t_return;
  __t_return:
  *__t3327t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2223t(const char* cmd, char** __t3328t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3328t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2222t(char* unsafe_ptr, int64_t* __t3329t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3329t=status;
}

static inline __attribute__((always_inline)) void int__t589t(uint64_t x, int64_t* __t3330t) {
  int __t590t=0;
  int __t591t=0;
  int __t592t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3330t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3331t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3331t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3332t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3332t=z;
}

static inline __attribute__((always_inline)) int open__t2224t(const char* cmd, char** __t3333t) {
  char* __t2225t__=0;
  char* unsafe_ptr=0;
  char __t2226t__=0;
  char __t2227t__=0;
  char __t2228t__=0;
  int64_t __t2229t__=0;
  int64_t status=0;
  uint64_t __t2230t=0;
  int64_t __t2231t__=0;
  char __t2232t__=0;
  char __t2233t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2223t(cmd,&__t2225t__);
  unsafe_ptr=__t2225t__;
  exists__t609t(unsafe_ptr,&__t2226t__);
  not__t41t(__t2226t__,&__t2227t__);
  if(__t2227t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(unsafe_ptr,&__t2228t__);
  if(__t2228t__){
  pclose__t2222t(unsafe_ptr,&__t2229t__);
  status=__t2229t__;
  unsafe_ptr=0;
  __t2230t=0;
  int__t589t(__t2230t,&__t2231t__);
  neq__t146t(status,__t2231t__,&__t2232t__);
  if(__t2232t__){
  __t_complain=37;
  goto __t2233t__label;
  __t2233t__label:__t2233t=__t2233t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3333t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2235t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3334t) {
  const char* __t2236t__cstr=0;
  char* __t2236t__str__unsafe_ptr=0;
  uint64_t __t2236t__str__dat__pos=0;
  uint64_t __t2236t__str__dat__length=0;
  char __t2236t__str__dat__first=0;
  char __t2237t____t1119t____t1113t____t711t__=0;
  const char* __t2238t__=0;
  char* __t2239t__unsafe_ptr=0;
  char __t2240t____t2228t__=0;
  int64_t __t2240t____t2229t__=0;
  int64_t __t2240t__status=0;
  uint64_t __t2240t____t2230t=0;
  int64_t __t2240t____t2231t__=0;
  char __t2240t____t2232t__=0;
  char __t2240t____t2233t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1116t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2236t__cstr,&__t2236t__str__unsafe_ptr,&__t2236t__str__dat__pos,&__t2236t__str__dat__length,&__t2236t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1124t(__t2236t__cstr,__t2236t__str__unsafe_ptr,__t2236t__str__dat__pos,__t2236t__str__dat__length,__t2236t__str__dat__first,&__t2238t__);
  __t_errcode=open__t2224t(__t2238t__,&__t2239t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t2239t__unsafe_ptr,&__t2240t____t2228t__);
  if(__t2240t____t2228t__){
  pclose__t2222t(__t2239t__unsafe_ptr,&__t2240t____t2229t__);
  __t2240t__status=__t2240t____t2229t__;
  __t2239t__unsafe_ptr=0;
  __t2240t____t2230t=0;
  int__t589t(__t2240t____t2230t,&__t2240t____t2231t__);
  neq__t146t(__t2240t__status,__t2240t____t2231t__,&__t2240t____t2232t__);
  if(__t2240t____t2232t__){
  __t_complain=37;
  goto __t2233t__label;
  __t2233t__label:__t2240t____t2233t=__t2240t____t2233t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3334t=__t2239t__unsafe_ptr;
  
  __t_skip_returns:exists__t609t(__t2236t__str__unsafe_ptr,&__t2237t____t1119t____t1113t____t711t__);
  if(__t2237t____t1119t____t1113t____t711t__){
  free__t679t(&__t2236t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2197t(int64_t value, const char** __t3335t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3335t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3336t) {
  const char* value=0;
  *__t3336t=value;
}

static inline __attribute__((always_inline)) int run__t3007t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t3337t) {
  char* __t3008t__unsafe_ptr=0;
  char __t3009t____t2240t____t2228t__=0;
  int64_t __t3009t____t2240t____t2229t__=0;
  int64_t __t3009t____t2240t__status=0;
  uint64_t __t3009t____t2240t____t2230t=0;
  int64_t __t3009t____t2240t____t2231t__=0;
  char __t3009t____t2240t____t2232t__=0;
  char __t3009t____t2240t____t2233t=0;
  char* proc__unsafe_ptr=0;
  char __t3010t=0;
  int64_t __t3011t=0;
  int64_t error=0;
  const char* __t3012t__=0;
  const char* __t3013t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2235t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3008t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3008t__unsafe_ptr;
  exists__t609t(__t3008t__unsafe_ptr,&__t3009t____t2240t____t2228t__);
  if(__t3009t____t2240t____t2228t__){
  pclose__t2222t(__t3008t__unsafe_ptr,&__t3009t____t2240t____t2229t__);
  __t3009t____t2240t__status=__t3009t____t2240t____t2229t__;
  __t3008t__unsafe_ptr=0;
  __t3009t____t2240t____t2230t=0;
  int__t589t(__t3009t____t2240t____t2230t,&__t3009t____t2240t____t2231t__);
  neq__t146t(__t3009t____t2240t__status,__t3009t____t2240t____t2231t__,&__t3009t____t2240t____t2232t__);
  if(__t3009t____t2240t____t2232t__){
  __t_complain=37;
  goto __t2233t__label;
  __t2233t__label:__t3009t____t2240t____t2233t=__t3009t____t2240t____t2233t==0;
  }
  }
  __t3011t=__t_complain;
  __t3010t=(__t_complain==0);
  __t_complain=0;
  error=__t3011t;
  __t3010t__label:__t3010t=__t3010t==0;
  if(__t3010t){
  cstr__t2197t(error,&__t3012t__);
  goto __t_return;
  }
  cstr__t1t(&__t3013t__);
  __t3012t__=__t3013t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3337t=__t3012t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t987t(const char* c, char* __t3338t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3338t=z;
}

static inline __attribute__((always_inline)) void set__t432t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3043t(char colors__initialized) {
  const char* __t3045t__value=0;
  const char* __t3045t____t389t=0;
  int __t3047t=0;
  char __t3048t=0;
  char __t3049t=0;
  const char* __t3054t__value=0;
  const char* __t3054t____t389t=0;
  int __t3056t=0;
  const char* __t3059t__value=0;
  const char* __t3059t____t389t=0;
  nn__t387t(__t3025t,&__t3045t__value,&__t3045t____t389t);
  print__t396t(__t3045t__value,__t3045t____t389t);
  __t3049t=1;
  if(__t3050t!=__t3050t){
  __t3049t=0;
  }
  if(__t3049t){
  __t3048t=1;
  }
  if(__t3048t){
  set__t432t(colors__initialized);
  nn__t387t(__t3053t,&__t3054t__value,&__t3054t____t389t);
  print__t396t(__t3054t__value,__t3054t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3040t,&__t3059t__value,&__t3059t____t389t);
  print__t396t(__t3059t__value,__t3059t____t389t);
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t436t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3023t(char colors__initialized) {
  const char* __t3026t__value=0;
  const char* __t3026t____t389t=0;
  char __t3028t=0;
  char __t3029t=0;
  const char* __t3034t__value=0;
  const char* __t3034t____t389t=0;
  int __t3036t=0;
  int __t3037t=0;
  const char* __t3041t__value=0;
  const char* __t3041t____t389t=0;
  nn__t387t(__t3025t,&__t3026t__value,&__t3026t____t389t);
  print__t396t(__t3026t__value,__t3026t____t389t);
  __t3029t=1;
  if(__t3030t!=__t3030t){
  __t3029t=0;
  }
  if(__t3029t){
  __t3028t=1;
  }
  if(__t3028t){
  set__t436t(colors__initialized);
  nn__t387t(__t3033t,&__t3034t__value,&__t3034t____t389t);
  print__t396t(__t3034t__value,__t3034t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3040t,&__t3041t__value,&__t3041t____t389t);
  print__t396t(__t3041t__value,__t3041t____t389t);
}

static inline __attribute__((always_inline)) void nn__t394t(uint64_t value, uint64_t* __t3339t, const char** __t3340t) {
  const char* __t395t=0;
  __t395t=__t388t;
  goto __t_return;
  __t_return:
  *__t3339t=value;
  *__t3340t=__t395t;
}

static inline __attribute__((always_inline)) void print__t409t(uint64_t value, const char* endl) {
  int __t410t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t3078t() {
  char* __t3083t__unsafe_ptr=0;
  uint64_t __t3083t__unsafe_size=0;
  uint32_t __t3083t__unsafe_offset=0;
  uint32_t __t3083t__unsafe_align=0;
  uint64_t __t3084t=0;
  char* __t3085t__unsafe_ptr=0;
  uint64_t __t3085t__unsafe_size=0;
  uint32_t __t3085t__unsafe_offset=0;
  uint32_t __t3085t__unsafe_align=0;
  char __t3086t____t711t__=0;
  char* __t3087t__buf__unsafe_ptr=0;
  uint64_t __t3087t__buf__unsafe_size=0;
  uint32_t __t3087t__buf__unsafe_offset=0;
  uint32_t __t3087t__buf__unsafe_align=0;
  uint64_t __t3087t__pos=0;
  char* __t3088t__buf__unsafe_ptr=0;
  uint64_t __t3088t__buf__unsafe_size=0;
  uint32_t __t3088t__buf__unsafe_offset=0;
  uint32_t __t3088t__buf__unsafe_align=0;
  uint64_t __t3088t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t3089t__initialized=0;
  char colors__initialized=0;
  const char* path=0;
  char* __t3093t__unsafe_ptr=0;
  uint64_t __t3093t__dat__pos=0;
  uint64_t __t3093t__dat__length=0;
  char __t3093t__dat__first=0;
  char* __t3094t__unsafe_ptr=0;
  uint64_t __t3094t__dat__pos=0;
  uint64_t __t3094t__dat__length=0;
  char __t3094t__dat__first=0;
  char* __t3095t__unsafe_ptr=0;
  char* __t3097t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t3098t=0;
  uint64_t __t3099t=0;
  uint64_t failures=0;
  uint64_t __t3100t=0;
  char __t3101t=0;
  char* __t3102t__unsafe_ptr=0;
  uint64_t __t3102t__dat__pos=0;
  uint64_t __t3102t__dat__length=0;
  char __t3102t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3104t__=0;
  char __t3105t__=0;
  uint64_t counter=0;
  char* __t3106t__buf__unsafe_ptr=0;
  uint64_t __t3106t__buf__unsafe_size=0;
  uint32_t __t3106t__buf__unsafe_offset=0;
  uint32_t __t3106t__buf__unsafe_align=0;
  uint64_t __t3106t__pos=0;
  char* __t3107t__unsafe_ptr=0;
  uint64_t __t3107t__dat__pos=0;
  uint64_t __t3107t__dat__length=0;
  char __t3107t__dat__first=0;
  char* __t3108t__unsafe_ptr=0;
  uint64_t __t3108t__dat__pos=0;
  uint64_t __t3108t__dat__length=0;
  char __t3108t__dat__first=0;
  uint64_t __t3109t__=0;
  char* __t3110t__unsafe_ptr=0;
  uint64_t __t3110t__dat__pos=0;
  uint64_t __t3110t__dat__length=0;
  char __t3110t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  char* __t3113t__value__unsafe_ptr=0;
  uint64_t __t3113t__value__dat__pos=0;
  uint64_t __t3113t__value__dat__length=0;
  char __t3113t__value__dat__first=0;
  const char* __t3113t____t1423t=0;
  const char* __t3116t__=0;
  const char* error=0;
  const char* __t3118t__value=0;
  const char* __t3118t____t389t=0;
  char __t3120t__=0;
  const char* __t3125t__value=0;
  const char* __t3125t____t389t=0;
  uint64_t __t3128t=0;
  uint64_t __t3129t__=0;
  uint64_t __t3133t=0;
  char __t3134t__=0;
  const char* __t3152t__value=0;
  const char* __t3152t____t389t=0;
  uint64_t __t3156t__value=0;
  const char* __t3156t____t395t=0;
  const char* __t3159t__value=0;
  const char* __t3159t____t389t=0;
  uint64_t __t3161t__value=0;
  const char* __t3161t____t395t=0;
  const char* __t3138t__value=0;
  const char* __t3138t____t389t=0;
  const char* __t3143t__value=0;
  const char* __t3143t____t389t=0;
  uint64_t __t3145t__value=0;
  const char* __t3145t____t395t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  char____t_buffer____buffer__t3081t(&__t3083t__unsafe_ptr,&__t3083t__unsafe_size,&__t3083t__unsafe_offset,&__t3083t__unsafe_align);
  __t3084t=256;
  __t_errcode=alloc__t709t(&__t3083t__unsafe_ptr,&__t3083t__unsafe_size,&__t3083t__unsafe_offset,&__t3083t__unsafe_align,__t3084t,&__t3085t__unsafe_ptr,&__t3085t__unsafe_size,&__t3085t__unsafe_offset,&__t3085t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t834t(&__t3085t__unsafe_ptr,&__t3085t__unsafe_size,&__t3085t__unsafe_offset,&__t3085t__unsafe_align,&__t3087t__buf__unsafe_ptr,&__t3087t__buf__unsafe_size,&__t3087t__buf__unsafe_offset,&__t3087t__buf__unsafe_align,&__t3087t__pos);
  __t3088t__buf__unsafe_ptr=__t3087t__buf__unsafe_ptr;
  __t3088t__buf__unsafe_size=__t3087t__buf__unsafe_size;
  __t3088t__buf__unsafe_offset=__t3087t__buf__unsafe_offset;
  __t3088t__buf__unsafe_align=__t3087t__buf__unsafe_align;
  __t3088t__pos=__t3087t__pos;
  CHARS__buf__unsafe_ptr=__t3088t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3088t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3088t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3088t__buf__unsafe_align;
  CHARS__pos=__t3088t__pos;
  colors__t426t(&__t3089t__initialized);
  colors__initialized=__t3089t__initialized;
  path=__t3091t;
  __t_errcode=copy__t1080t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3092t,&__t3093t__unsafe_ptr,&__t3093t__dat__pos,&__t3093t__dat__length,&__t3093t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1080t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t3094t__unsafe_ptr,&__t3094t__dat__pos,&__t3094t__dat__length,&__t3094t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t2882t(path,&__t3095t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3097t__unsafe_ptr=__t3095t__unsafe_ptr;
  test_dir__unsafe_ptr=__t3097t__unsafe_ptr;
  __t3098t=0;
  __t3099t=__t3098t;
  failures=__t3099t;
  __t3100t=0-1;
  while(1){
  __t3100t=__t3100t+1;
  __t_complain=get__t2966t(&test_dir__unsafe_ptr,__t3100t,&__t3102t__unsafe_ptr,&__t3102t__dat__pos,&__t3102t__dat__length,&__t3102t__dat__first);
  __t3101t=__t_complain;
  if(__t_complain){
  goto __t3101t__label;
  }
  entry__unsafe_ptr=__t3102t__unsafe_ptr;
  entry__dat__pos=__t3102t__dat__pos;
  entry__dat__length=__t3102t__dat__length;
  entry__dat__first=__t3102t__dat__first;
  __t3101t__label:__t3101t=__t3101t==0;
  if(!__t3101t){
  break;
  }
  __t_errcode=ends_with__t1298t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3103t,&__t3104t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3104t__,&__t3105t__);
  if(__t3105t__){
  continue;
  }
  counter=__t3100t;
  __t3106t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t3106t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t3106t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t3106t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t3106t__pos=CHARS__pos;
  str__t1026t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3107t__unsafe_ptr,&__t3107t__dat__pos,&__t3107t__dat__length,&__t3107t__dat__first);
  __t_errcode=copy_null_terminated__t1169t(&__t3106t__buf__unsafe_ptr,&__t3106t__buf__unsafe_size,&__t3106t__buf__unsafe_offset,&__t3106t__buf__unsafe_align,&__t3106t__pos,__t3107t__unsafe_ptr,__t3107t__dat__pos,__t3107t__dat__length,__t3107t__dat__first,&__t3108t__unsafe_ptr,&__t3108t__dat__pos,&__t3108t__dat__length,&__t3108t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1126t(__t3108t__unsafe_ptr,__t3108t__dat__pos,__t3108t__dat__length,__t3108t__dat__first,&__t3109t__);
  __t_errcode=str__t1001t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3109t__,&__t3110t__unsafe_ptr,&__t3110t__dat__pos,&__t3110t__dat__length,&__t3110t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t3110t__unsafe_ptr;
  command__dat__pos=__t3110t__dat__pos;
  command__dat__length=__t3110t__dat__length;
  command__dat__first=__t3110t__dat__first;
  print_marker__t3061t(colors__initialized);
  nn__t1422t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3113t__value__unsafe_ptr,&__t3113t__value__dat__pos,&__t3113t__value__dat__length,&__t3113t__value__dat__first,&__t3113t____t1423t);
  print__t1191t(__t3113t__value__unsafe_ptr,__t3113t__value__dat__pos,__t3113t__value__dat__length,__t3113t__value__dat__first,__t3113t____t1423t);
  flush__t386t();
  __t_errcode=run__t3007t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3116t__);
  if(__t_errcode){
  goto __t_failure;
  }
  error=__t3116t__;
  nn__t387t(__t3117t,&__t3118t__value,&__t3118t____t389t);
  print__t396t(__t3118t__value,__t3118t____t389t);
  exists__t987t(error,&__t3120t__);
  if(__t3120t__){
  print_marker__t3043t(colors__initialized);
  print__t398t(__t388t);
  nn__t387t(__t3124t,&__t3125t__value,&__t3125t____t389t);
  print__t396t(__t3125t__value,__t3125t____t389t);
  print__t398t(error);
  __t3128t=1;
  add__t188t(failures,__t3128t,&__t3129t__);
  failures=__t3129t__;
  }
  else{
  print_marker__t3023t(colors__initialized);
  print__t398t(__t388t);
  }
  }
  __t3133t=0;
  eq__t133t(failures,__t3133t,&__t3134t__);
  if(__t3134t__){
  set__t436t(colors__initialized);
  nn__t387t(__t3137t,&__t3138t__value,&__t3138t____t389t);
  print__t396t(__t3138t__value,__t3138t____t389t);
  set__t552t(colors__initialized);
  nn__t387t(__t3142t,&__t3143t__value,&__t3143t____t389t);
  print__t396t(__t3143t__value,__t3143t____t389t);
  nn__t394t(counter,&__t3145t__value,&__t3145t____t395t);
  print__t409t(__t3145t__value,__t3145t____t395t);
  print__t398t(__t3147t);
  }
  else{
  set__t432t(colors__initialized);
  nn__t387t(__t3151t,&__t3152t__value,&__t3152t____t389t);
  print__t396t(__t3152t__value,__t3152t____t389t);
  set__t552t(colors__initialized);
  nn__t394t(failures,&__t3156t__value,&__t3156t____t395t);
  print__t409t(__t3156t__value,__t3156t____t395t);
  nn__t387t(__t3158t,&__t3159t__value,&__t3159t____t389t);
  print__t396t(__t3159t__value,__t3159t____t389t);
  nn__t394t(counter,&__t3161t__value,&__t3161t____t395t);
  print__t409t(__t3161t__value,__t3161t____t395t);
  print__t398t(__t3147t);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t2879t(__t3095t__unsafe_ptr);
  if(__t3089t__initialized){
  printf("\033[0m");
  }
  exists__t609t(__t3085t__unsafe_ptr,&__t3086t____t711t__);
  if(__t3086t____t711t__){
  free__t679t(&__t3085t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3078t();return 0;}