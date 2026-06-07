#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/curl.h"
int __t_argc;
char** __t_argv;
const char* const __t3350t="https://www.google.com/";
const char* const __t382t="\n";
const char* const __t2082t="GET";
static const char* __t_all_errcodes[37] = {"noerr",
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
"curl initialization failed",
"out of memory while reading response"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t3355t) {
  int value=0;
  *__t3355t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t3356t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t3356t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t3357t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t3357t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t3358t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3358t=z;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t3359t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t3359t=__t641t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t754t(char** __t3360t, uint64_t* __t3361t, uint16_t* __t3362t, uint16_t* __t3363t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3360t=unsafe_ptr;
  *__t3361t=unsafe_size;
  *__t3362t=unsafe_offset;
  *__t3363t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t3364t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3364t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t3365t) {
  char* allocated=*__t3365t;
  if(allocated){
  free(allocated);
  }
  *__t3365t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t3366t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3366t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t3367t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3367t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t3368t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3368t=value;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t3369t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3369t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t3370t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3370t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t3371t, uint64_t* __t3372t, uint16_t* __t3373t, uint16_t* __t3374t, uint64_t size, char** __t3375t, uint64_t* __t3376t, uint16_t* __t3377t, uint16_t* __t3378t) {
  char* buffer__unsafe_ptr=*__t3371t;
  uint64_t buffer__unsafe_size=*__t3372t;
  uint16_t buffer__unsafe_offset=*__t3373t;
  uint16_t buffer__unsafe_align=*__t3374t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3371t=buffer__unsafe_ptr;
  *__t3372t=buffer__unsafe_size;
  *__t3373t=buffer__unsafe_offset;
  *__t3374t=buffer__unsafe_align;
  *__t3375t=buffer__unsafe_ptr;
  *__t3376t=buffer__unsafe_size;
  *__t3377t=buffer__unsafe_offset;
  *__t3378t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t753t(uint64_t size, char** __t3379t, uint64_t* __t3380t, uint16_t* __t3381t, uint16_t* __t3382t) {
  char* __t756t__unsafe_ptr=0;
  uint64_t __t756t__unsafe_size=0;
  uint16_t __t756t__unsafe_offset=0;
  uint16_t __t756t__unsafe_align=0;
  char* __t757t__unsafe_ptr=0;
  uint64_t __t757t__unsafe_size=0;
  uint16_t __t757t__unsafe_offset=0;
  uint16_t __t757t__unsafe_align=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__unsafe_size=0;
  uint16_t __t758t__unsafe_offset=0;
  uint16_t __t758t__unsafe_align=0;
  char __t759t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t754t(&__t756t__unsafe_ptr,&__t756t__unsafe_size,&__t756t__unsafe_offset,&__t756t__unsafe_align);
  __t757t__unsafe_ptr=__t756t__unsafe_ptr;
  __t757t__unsafe_size=__t756t__unsafe_size;
  __t757t__unsafe_offset=__t756t__unsafe_offset;
  __t757t__unsafe_align=__t756t__unsafe_align;
  __t_errcode=alloc__t690t(&__t757t__unsafe_ptr,&__t757t__unsafe_size,&__t757t__unsafe_offset,&__t757t__unsafe_align,size,&__t758t__unsafe_ptr,&__t758t__unsafe_size,&__t758t__unsafe_offset,&__t758t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t758t__unsafe_ptr,&__t759t____t692t__);
  if(__t759t____t692t__){
  free__t661t(&__t758t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3379t=__t758t__unsafe_ptr;
  *__t3380t=__t758t__unsafe_size;
  *__t3381t=__t758t__unsafe_offset;
  *__t3382t=__t758t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t823t(char** __t3383t, uint64_t* __t3384t, uint16_t* __t3385t, uint16_t* __t3386t, uint64_t _pos, char** __t3387t, uint64_t* __t3388t, uint16_t* __t3389t, uint16_t* __t3390t, uint64_t* __t3391t) {
  char* buf__unsafe_ptr=*__t3383t;
  uint64_t buf__unsafe_size=*__t3384t;
  uint16_t buf__unsafe_offset=*__t3385t;
  uint16_t buf__unsafe_align=*__t3386t;
  uint64_t __t824t=0;
  uint64_t pos=0;
  __t824t=_pos;
  pos=__t824t;
  goto __t_return;
  __t_return:
  *__t3383t=buf__unsafe_ptr;
  *__t3384t=buf__unsafe_size;
  *__t3385t=buf__unsafe_offset;
  *__t3386t=buf__unsafe_align;
  *__t3387t=buf__unsafe_ptr;
  *__t3388t=buf__unsafe_size;
  *__t3389t=buf__unsafe_offset;
  *__t3390t=buf__unsafe_align;
  *__t3391t=pos;
}

static inline __attribute__((always_inline)) void arena__t826t(char** __t3392t, uint64_t* __t3393t, uint16_t* __t3394t, uint16_t* __t3395t, char** __t3396t, uint64_t* __t3397t, uint16_t* __t3398t, uint16_t* __t3399t, uint64_t* __t3400t) {
  char* buf__unsafe_ptr=*__t3392t;
  uint64_t buf__unsafe_size=*__t3393t;
  uint16_t buf__unsafe_offset=*__t3394t;
  uint16_t buf__unsafe_align=*__t3395t;
  uint64_t __t827t=0;
  char* __t828t__buf__unsafe_ptr=0;
  uint64_t __t828t__buf__unsafe_size=0;
  uint16_t __t828t__buf__unsafe_offset=0;
  uint16_t __t828t__buf__unsafe_align=0;
  uint64_t __t828t__pos=0;
  __t827t=0;
  arena__t823t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t827t,&__t828t__buf__unsafe_ptr,&__t828t__buf__unsafe_size,&__t828t__buf__unsafe_offset,&__t828t__buf__unsafe_align,&__t828t__pos);
  goto __t_return;
  __t_return:
  *__t3392t=buf__unsafe_ptr;
  *__t3393t=buf__unsafe_size;
  *__t3394t=buf__unsafe_offset;
  *__t3395t=buf__unsafe_align;
  *__t3396t=__t828t__buf__unsafe_ptr;
  *__t3397t=__t828t__buf__unsafe_size;
  *__t3398t=__t828t__buf__unsafe_offset;
  *__t3399t=__t828t__buf__unsafe_align;
  *__t3400t=__t828t__pos;
}

static inline __attribute__((always_inline)) void HttpMethod__t2080t(const char** __t3401t) {
  const char* method=0;
  method=__t2082t;
  goto __t_return;
  __t_return:
  *__t3401t=method;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3402t) {
  const char* value=0;
  *__t3402t=value;
}

static inline __attribute__((always_inline)) void HttpOptions__t2102t(const char* method__method, const char** __t3403t, const char** __t3404t, const char** __t3405t) {
  int __t2103t=0;
  const char* __t2104t__=0;
  const char* body=0;
  int __t2105t=0;
  const char* __t2106t__=0;
  const char* content_type=0;
  cstr__t1t(&__t2104t__);
  body=__t2104t__;
  cstr__t1t(&__t2106t__);
  content_type=__t2106t__;
  goto __t_return;
  __t_return:
  *__t3403t=method__method;
  *__t3404t=body;
  *__t3405t=content_type;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t930t(char** __t3406t, uint64_t* __t3407t, uint16_t* __t3408t, uint16_t* __t3409t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t3406t=unsafe_ptr;
  *__t3407t=unsafe_size;
  *__t3408t=unsafe_offset;
  *__t3409t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t3410t) {
  *__t3410t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t3411t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3411t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t3412t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3412t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t3413t) {
  *__t3413t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t3414t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t3414t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t811t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t3415t) {
  char __t812t__=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t __t815t__=0;
  uint64_t __t816t__=0;
  char* __t817t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t812t__);
  if(__t812t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t813t__);
  mul__t199t(i,__t813t__,&__t814t__);
  nat__t665t(buffer__unsafe_offset,&__t815t__);
  add__t175t(__t814t__,__t815t__,&__t816t__);
  add__t663t(buffer__unsafe_ptr,__t816t__,&__t817t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3415t=__t817t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t950t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3416t, uint64_t* __t3417t, uint64_t* __t3418t, char* __t3419t) {
  goto __t_return;
  __t_return:
  *__t3416t=unsafe_ptr;
  *__t3417t=dat__pos;
  *__t3418t=dat__length;
  *__t3419t=dat__first;
}

static inline __attribute__((always_inline)) int str__t954t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3420t, uint64_t* __t3421t, uint64_t* __t3422t, char* __t3423t) {
  char* unsafe_ptr=0;
  uint64_t __t955t__=0;
  uint64_t __t956t=0;
  char __t957t__=0;
  uint64_t __t958t__=0;
  uint64_t __t959t=0;
  char __t960t__=0;
  char* __t961t__unsafe_ptr=0;
  uint64_t __t961t__dat__pos=0;
  uint64_t __t961t__dat__length=0;
  char __t961t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t955t__);
  __t956t=1;
  neq__t144t(__t955t__,__t956t,&__t957t__);
  if(__t957t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t958t__);
  __t959t=0;
  neq__t144t(__t958t__,__t959t,&__t960t__);
  if(__t960t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t950t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t961t__unsafe_ptr,&__t961t__dat__pos,&__t961t__dat__length,&__t961t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3420t=__t961t__unsafe_ptr;
  *__t3421t=__t961t__dat__pos;
  *__t3422t=__t961t__dat__length;
  *__t3423t=__t961t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t986t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3424t, uint64_t* __t3425t, uint64_t* __t3426t, char* __t3427t) {
  uint64_t __t987t=0;
  char __t988t__=0;
  char* __t989t__=0;
  char __t990t__value=0;
  char first=0;
  char* __t991t__unsafe_ptr=0;
  uint64_t __t991t__dat__pos=0;
  uint64_t __t991t__dat__length=0;
  char __t991t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t987t=0;
  neq__t144t(length,__t987t,&__t988t__);
  if(__t988t__){
  __t_errcode=get__t811t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t989t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t990t__value,__t989t__,1);
  first=__t990t__value;
  }
  __t_errcode=str__t954t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t991t__unsafe_ptr,&__t991t__dat__pos,&__t991t__dat__length,&__t991t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3424t=__t991t__unsafe_ptr;
  *__t3425t=__t991t__dat__pos;
  *__t3426t=__t991t__dat__length;
  *__t3427t=__t991t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1006t(const char* c, char** __t3428t, uint64_t* __t3429t, uint64_t* __t3430t, char* __t3431t) {
  char* __t1007t__unsafe_ptr=0;
  uint64_t __t1007t__unsafe_size=0;
  uint16_t __t1007t__unsafe_offset=0;
  uint16_t __t1007t__unsafe_align=0;
  char* __t1008t__unsafe_ptr=0;
  uint64_t __t1008t__unsafe_size=0;
  uint16_t __t1008t__unsafe_offset=0;
  uint16_t __t1008t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1009t__=0;
  uint64_t length=0;
  uint64_t __t1010t=0;
  uint64_t __t1011t__=0;
  uint64_t __t1012t=0;
  char* __t1014t__unsafe_ptr=0;
  uint64_t __t1014t__dat__pos=0;
  uint64_t __t1014t__dat__length=0;
  char __t1014t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t930t(&__t1007t__unsafe_ptr,&__t1007t__unsafe_size,&__t1007t__unsafe_offset,&__t1007t__unsafe_align);
  __t1008t__unsafe_ptr=__t1007t__unsafe_ptr;
  __t1008t__unsafe_size=__t1007t__unsafe_size;
  __t1008t__unsafe_offset=__t1007t__unsafe_offset;
  __t1008t__unsafe_align=__t1007t__unsafe_align;
  buf__unsafe_ptr=__t1008t__unsafe_ptr;
  buf__unsafe_size=__t1008t__unsafe_size;
  buf__unsafe_offset=__t1008t__unsafe_offset;
  buf__unsafe_align=__t1008t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1009t__);
  buf__unsafe_ptr=__t1009t__;
  if(c){
  length=strlen(c);
  }
  __t1010t=1;
  add__t175t(length,__t1010t,&__t1011t__);
  buf__unsafe_size=__t1011t__;
  __t1012t=0;
  __t_errcode=str__t986t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1012t,length,&__t1014t__unsafe_ptr,&__t1014t__dat__pos,&__t1014t__dat__length,&__t1014t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3428t=__t1014t__unsafe_ptr;
  *__t3429t=__t1014t__dat__pos;
  *__t3430t=__t1014t__dat__length;
  *__t3431t=__t1014t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1078t(const char* cstr, const char** __t3432t, char** __t3433t, uint64_t* __t3434t, uint64_t* __t3435t, char* __t3436t) {
  char* __t1079t__unsafe_ptr=0;
  uint64_t __t1079t__dat__pos=0;
  uint64_t __t1079t__dat__length=0;
  char __t1079t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1006t(cstr,&__t1079t__unsafe_ptr,&__t1079t__dat__pos,&__t1079t__dat__length,&__t1079t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1079t__unsafe_ptr;
  str__dat__pos=__t1079t__dat__pos;
  str__dat__length=__t1079t__dat__length;
  str__dat__first=__t1079t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3432t=cstr;
  *__t3433t=str__unsafe_ptr;
  *__t3434t=str__dat__pos;
  *__t3435t=str__dat__length;
  *__t3436t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1081t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3437t) {
  goto __t_return;
  __t_return:
  *__t3437t=value__cstr;
}

static inline __attribute__((always_inline)) void exists__t948t(const char* c, char* __t3438t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3438t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t3439t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3439t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t3440t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3440t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t992t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t3441t, uint64_t* __t3442t, uint64_t* __t3443t, char* __t3444t) {
  uint64_t __t993t__=0;
  uint64_t length=0;
  uint64_t __t994t=0;
  char __t995t__=0;
  char* __t996t__=0;
  char __t997t__value=0;
  char first=0;
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__dat__pos=0;
  uint64_t __t998t__dat__length=0;
  char __t998t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t993t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t993t__;
  __t994t=0;
  neq__t144t(length,__t994t,&__t995t__);
  if(__t995t__){
  __t_errcode=get__t811t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t996t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t996t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t997t__value,__t996t__,1);
  first=__t997t__value;
  }
  __t_errcode=str__t954t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t998t__unsafe_ptr,&__t998t__dat__pos,&__t998t__dat__length,&__t998t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3441t=__t998t__unsafe_ptr;
  *__t3442t=__t998t__dat__pos;
  *__t3443t=__t998t__dat__length;
  *__t3444t=__t998t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void response__t2067t(uint64_t status, char* body__unsafe_ptr, uint64_t body__dat__pos, uint64_t body__dat__length, char body__dat__first, uint64_t* __t3445t, char** __t3446t, uint64_t* __t3447t, uint64_t* __t3448t, char* __t3449t) {
  *__t3445t=status;
  *__t3446t=body__unsafe_ptr;
  *__t3447t=body__dat__pos;
  *__t3448t=body__dat__length;
  *__t3449t=body__dat__first;
}

static inline __attribute__((always_inline)) int request__t2654t(char** __t3450t, uint64_t* __t3451t, uint16_t* __t3452t, uint16_t* __t3453t, uint64_t* __t3454t, const char* _url, const char* opts__method__method, const char* opts__body, const char* opts__content_type, uint64_t* __t3455t, char** __t3456t, uint64_t* __t3457t, uint64_t* __t3458t, char* __t3459t) {
  char* CHARS__buf__unsafe_ptr=*__t3450t;
  uint64_t CHARS__buf__unsafe_size=*__t3451t;
  uint16_t CHARS__buf__unsafe_offset=*__t3452t;
  uint16_t CHARS__buf__unsafe_align=*__t3453t;
  uint64_t CHARS__pos=*__t3454t;
  char* curl=0;
  char __t2655t__=0;
  char __t2656t__=0;
  const char* __t2657t__cstr=0;
  char* __t2657t__str__unsafe_ptr=0;
  uint64_t __t2657t__str__dat__pos=0;
  uint64_t __t2657t__str__dat__length=0;
  char __t2657t__str__dat__first=0;
  const char* __t2658t__=0;
  const char* url=0;
  int __t2659t=0;
  int __t2660t=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t pos=0;
  int __t2661t=0;
  int __t2662t=0;
  uint64_t __t2663t__=0;
  uint64_t __t2664t=0;
  char __t2665t__=0;
  uint64_t __t2666t__=0;
  uint64_t __t2667t=0;
  char __t2668t__=0;
  char __t2669t__=0;
  uint64_t status=0;
  char has_read=0;
  char __t2670t__=0;
  char* __t2672t__unsafe_ptr=0;
  uint64_t __t2672t__dat__pos=0;
  uint64_t __t2672t__dat__length=0;
  char __t2672t__dat__first=0;
  uint64_t __t2673t__status=0;
  char* __t2673t__body__unsafe_ptr=0;
  uint64_t __t2673t__body__dat__pos=0;
  uint64_t __t2673t__body__dat__length=0;
  char __t2673t__body__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  curl=curl_easy_init();
  exists__t591t(curl,&__t2655t__);
  not__t28t(__t2655t__,&__t2656t__);
  if(__t2656t__){
  __t_errcode=35;
  goto __t_failure;
  }
  __t_errcode=unsafe_temp__t1078t(_url,&__t2657t__cstr,&__t2657t__str__unsafe_ptr,&__t2657t__str__dat__pos,&__t2657t__str__dat__length,&__t2657t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1081t(__t2657t__cstr,__t2657t__str__unsafe_ptr,__t2657t__str__dat__pos,__t2657t__str__dat__length,__t2657t__str__dat__first,&__t2658t__);
  url=__t2658t__;
  buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  buf__unsafe_size=CHARS__buf__unsafe_size;
  buf__unsafe_offset=CHARS__buf__unsafe_offset;
  buf__unsafe_align=CHARS__buf__unsafe_align;
  pos=CHARS__pos;
  nat__t665t(buf__unsafe_align,&__t2663t__);
  __t2664t=1;
  neq__t144t(__t2663t__,__t2664t,&__t2665t__);
  if(__t2665t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t2666t__);
  __t2667t=0;
  neq__t144t(__t2666t__,__t2667t,&__t2668t__);
  if(__t2668t__){
  __t_errcode=19;
  goto __t_failure;
  }
  __smoll_buf_for_callback __buf={
  buf__unsafe_ptr,pos,buf__unsafe_size}
  ;
  struct curl_slist*__headers=NULL;
  curl_easy_setopt((CURL*)curl,CURLOPT_URL,url);
  curl_easy_setopt((CURL*)curl,CURLOPT_CUSTOMREQUEST,opts__method__method);
  curl_easy_setopt((CURL*)curl,CURLOPT_FOLLOWLOCATION,1);
  curl_easy_setopt((CURL*)curl,CURLOPT_DEFAULT_PROTOCOL,"https");
  curl_easy_setopt((CURL*)curl,CURLOPT_WRITEFUNCTION,__smoll_write_curl_callback);
  curl_easy_setopt((CURL*)curl,CURLOPT_WRITEDATA,&__buf);
  exists__t948t(opts__body,&__t2669t__);
  if(__t2669t__){
  curl_easy_setopt((CURL*)curl,CURLOPT_POSTFIELDS,opts__body);
  char __ct[15+strlen(opts__content_type)+1];
  snprintf(__ct,sizeof(__ct),"Content-Type: %s",opts__content_type);
  __headers=curl_slist_append(__headers,__ct);
  curl_easy_setopt((CURL*)curl,CURLOPT_HTTPHEADER,__headers);
  }
  status=0;
  if(curl_easy_perform((CURL*)curl)==CURLE_OK)curl_easy_getinfo((CURL*)curl,CURLINFO_RESPONSE_CODE,&status);
  curl_easy_cleanup((CURL*)curl);
  if(__headers)curl_slist_free_all(__headers);
  has_read=__buf.data!=0;
  not__t28t(has_read,&__t2670t__);
  if(__t2670t__){
  __t_errcode=36;
  goto __t_failure;
  }
  buf__unsafe_size=__buf.size;
  buf__unsafe_ptr=__buf.data;
  __t_errcode=str__t992t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,buf__unsafe_size,&__t2672t__unsafe_ptr,&__t2672t__dat__pos,&__t2672t__dat__length,&__t2672t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  response__t2067t(status,__t2672t__unsafe_ptr,__t2672t__dat__pos,__t2672t__dat__length,__t2672t__dat__first,&__t2673t__status,&__t2673t__body__unsafe_ptr,&__t2673t__body__dat__pos,&__t2673t__body__dat__length,&__t2673t__body__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3450t=CHARS__buf__unsafe_ptr;
  *__t3451t=CHARS__buf__unsafe_size;
  *__t3452t=CHARS__buf__unsafe_offset;
  *__t3453t=CHARS__buf__unsafe_align;
  *__t3454t=CHARS__pos;
  *__t3455t=__t2673t__status;
  *__t3456t=__t2673t__body__unsafe_ptr;
  *__t3457t=__t2673t__body__dat__pos;
  *__t3458t=__t2673t__body__dat__length;
  *__t3459t=__t2673t__body__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t3115t(char** __t3460t, uint64_t* __t3461t, uint16_t* __t3462t, uint16_t* __t3463t, uint64_t* __t3464t, const char* url, uint64_t* __t3465t, char** __t3466t, uint64_t* __t3467t, uint64_t* __t3468t, char* __t3469t) {
  char* CHARS__buf__unsafe_ptr=*__t3460t;
  uint64_t CHARS__buf__unsafe_size=*__t3461t;
  uint16_t CHARS__buf__unsafe_offset=*__t3462t;
  uint16_t CHARS__buf__unsafe_align=*__t3463t;
  uint64_t CHARS__pos=*__t3464t;
  const char* __t3117t__method=0;
  const char* __t3118t__method__method=0;
  const char* __t3118t__body=0;
  const char* __t3118t__content_type=0;
  uint64_t __t3119t__status=0;
  char* __t3119t__body__unsafe_ptr=0;
  uint64_t __t3119t__body__dat__pos=0;
  uint64_t __t3119t__body__dat__length=0;
  char __t3119t__body__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  HttpMethod__t2080t(&__t3117t__method);
  HttpOptions__t2102t(__t3117t__method,&__t3118t__method__method,&__t3118t__body,&__t3118t__content_type);
  __t_errcode=request__t2654t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,url,__t3118t__method__method,__t3118t__body,__t3118t__content_type,&__t3119t__status,&__t3119t__body__unsafe_ptr,&__t3119t__body__dat__pos,&__t3119t__body__dat__length,&__t3119t__body__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3460t=CHARS__buf__unsafe_ptr;
  *__t3461t=CHARS__buf__unsafe_size;
  *__t3462t=CHARS__buf__unsafe_offset;
  *__t3463t=CHARS__buf__unsafe_align;
  *__t3464t=CHARS__pos;
  *__t3465t=__t3119t__status;
  *__t3466t=__t3119t__body__unsafe_ptr;
  *__t3467t=__t3119t__body__dat__pos;
  *__t3468t=__t3119t__body__dat__length;
  *__t3469t=__t3119t__body__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1015t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3470t) {
  goto __t_return;
  __t_return:
  *__t3470t=s__dat__length;
}

static inline __attribute__((always_inline)) int main__t3343t() {
  uint64_t __t3345t=0;
  uint64_t __t3346t__=0;
  char* __t3347t__unsafe_ptr=0;
  uint64_t __t3347t__unsafe_size=0;
  uint16_t __t3347t__unsafe_offset=0;
  uint16_t __t3347t__unsafe_align=0;
  char __t3348t____t759t____t692t__=0;
  char* __t3349t__buf__unsafe_ptr=0;
  uint64_t __t3349t__buf__unsafe_size=0;
  uint16_t __t3349t__buf__unsafe_offset=0;
  uint16_t __t3349t__buf__unsafe_align=0;
  uint64_t __t3349t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t __t3351t__status=0;
  char* __t3351t__body__unsafe_ptr=0;
  uint64_t __t3351t__body__dat__pos=0;
  uint64_t __t3351t__body__dat__length=0;
  char __t3351t__body__dat__first=0;
  uint64_t response__status=0;
  char* response__body__unsafe_ptr=0;
  uint64_t response__body__dat__pos=0;
  uint64_t response__body__dat__length=0;
  char response__body__dat__first=0;
  uint64_t __t3353t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t3345t=100;
  KB__t639t(__t3345t,&__t3346t__);
  __t_errcode=alloc__t753t(__t3346t__,&__t3347t__unsafe_ptr,&__t3347t__unsafe_size,&__t3347t__unsafe_offset,&__t3347t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t826t(&__t3347t__unsafe_ptr,&__t3347t__unsafe_size,&__t3347t__unsafe_offset,&__t3347t__unsafe_align,&__t3349t__buf__unsafe_ptr,&__t3349t__buf__unsafe_size,&__t3349t__buf__unsafe_offset,&__t3349t__buf__unsafe_align,&__t3349t__pos);
  CHARS__buf__unsafe_ptr=__t3349t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3349t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3349t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3349t__buf__unsafe_align;
  CHARS__pos=__t3349t__pos;
  __t_errcode=get__t3115t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3350t,&__t3351t__status,&__t3351t__body__unsafe_ptr,&__t3351t__body__dat__pos,&__t3351t__body__dat__length,&__t3351t__body__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  response__status=__t3351t__status;
  response__body__unsafe_ptr=__t3351t__body__unsafe_ptr;
  response__body__dat__pos=__t3351t__body__dat__pos;
  response__body__dat__length=__t3351t__body__dat__length;
  response__body__dat__first=__t3351t__body__dat__first;
  print__t393t(response__status);
  len__t1015t(response__body__unsafe_ptr,response__body__dat__pos,response__body__dat__length,response__body__dat__first,&__t3353t__);
  print__t393t(__t3353t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t3347t__unsafe_ptr,&__t3348t____t759t____t692t__);
  if(__t3348t____t759t____t692t__){
  free__t661t(&__t3347t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3343t();return 0;}