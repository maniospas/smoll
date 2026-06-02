#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2000t="README.md";
const char* const __t377t="\n";
static const char* __t_all_errcodes[53] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2016t, uint64_t* __t2017t, uint16_t* __t2018t, uint16_t* __t2019t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2016t=unsafe_ptr;
  *__t2017t=unsafe_size;
  *__t2018t=unsafe_offset;
  *__t2019t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2020t) {
  *__t2020t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2021t) {
  int value=0;
  *__t2021t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2022t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2022t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2023t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2023t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2024t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2024t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2025t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2025t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2026t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2026t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2027t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2027t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2028t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2028t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2029t) {
  *__t2029t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2030t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2030t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2031t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2031t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2032t, uint64_t* __t2033t, uint64_t* __t2034t, char* __t2035t) {
  goto __t_return;
  __t_return:
  *__t2032t=unsafe_ptr;
  *__t2033t=dat__pos;
  *__t2034t=dat__length;
  *__t2035t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2036t, uint64_t* __t2037t, uint64_t* __t2038t, char* __t2039t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t512t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t143t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2036t=__t643t__unsafe_ptr;
  *__t2037t=__t643t__dat__pos;
  *__t2038t=__t643t__dat__length;
  *__t2039t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2040t, uint64_t* __t2041t, uint64_t* __t2042t, char* __t2043t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t143t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2040t=__t673t__unsafe_ptr;
  *__t2041t=__t673t__dat__pos;
  *__t2042t=__t673t__dat__length;
  *__t2043t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t2044t, uint64_t* __t2045t, uint64_t* __t2046t, char* __t2047t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t174t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2044t=__t681t__unsafe_ptr;
  *__t2045t=__t681t__dat__pos;
  *__t2046t=__t681t__dat__length;
  *__t2047t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2048t) {
  goto __t_return;
  __t_return:
  *__t2048t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2049t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2049t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2050t) {
  char* allocated=*__t2050t;
  if(allocated){
  free(allocated);
  }
  *__t2050t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2051t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2051t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2052t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2052t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2053t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2053t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2054t, uint64_t* __t2055t, uint16_t* __t2056t, uint16_t* __t2057t, uint64_t size, char** __t2058t, uint64_t* __t2059t, uint16_t* __t2060t, uint16_t* __t2061t) {
  char* buffer__unsafe_ptr=*__t2054t;
  uint64_t buffer__unsafe_size=*__t2055t;
  uint16_t buffer__unsafe_offset=*__t2056t;
  uint16_t buffer__unsafe_align=*__t2057t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2054t=buffer__unsafe_ptr;
  *__t2055t=buffer__unsafe_size;
  *__t2056t=buffer__unsafe_offset;
  *__t2057t=buffer__unsafe_align;
  *__t2058t=buffer__unsafe_ptr;
  *__t2059t=buffer__unsafe_size;
  *__t2060t=buffer__unsafe_offset;
  *__t2061t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t705t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2062t, uint64_t* __t2063t, uint64_t* __t2064t, char* __t2065t) {
  char* __t706t__unsafe_ptr=0;
  uint64_t __t706t__unsafe_size=0;
  uint16_t __t706t__unsafe_offset=0;
  uint16_t __t706t__unsafe_align=0;
  char* __t707t__unsafe_ptr=0;
  uint64_t __t707t__unsafe_size=0;
  uint16_t __t707t__unsafe_offset=0;
  uint16_t __t707t__unsafe_align=0;
  uint64_t __t708t=0;
  uint64_t __t709t__=0;
  uint64_t __t710t__=0;
  char* __t711t__unsafe_ptr=0;
  uint64_t __t711t__unsafe_size=0;
  uint16_t __t711t__unsafe_offset=0;
  uint16_t __t711t__unsafe_align=0;
  char __t712t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t713t=0;
  char* __t714t__unsafe_ptr=0;
  uint64_t __t714t__dat__pos=0;
  uint64_t __t714t__dat__length=0;
  char __t714t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t706t__unsafe_ptr,&__t706t__unsafe_size,&__t706t__unsafe_offset,&__t706t__unsafe_align);
  __t707t__unsafe_ptr=__t706t__unsafe_ptr;
  __t707t__unsafe_size=__t706t__unsafe_size;
  __t707t__unsafe_offset=__t706t__unsafe_offset;
  __t707t__unsafe_align=__t706t__unsafe_align;
  __t708t=1;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t709t__);
  add__t174t(__t708t,__t709t__,&__t710t__);
  __t_errcode=alloc__t515t(&__t707t__unsafe_ptr,&__t707t__unsafe_size,&__t707t__unsafe_offset,&__t707t__unsafe_align,__t710t__,&__t711t__unsafe_ptr,&__t711t__unsafe_size,&__t711t__unsafe_offset,&__t711t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t711t__unsafe_ptr;
  buf__unsafe_size=__t711t__unsafe_size;
  buf__unsafe_offset=__t711t__unsafe_offset;
  buf__unsafe_align=__t711t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t713t=0;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t713t,other__dat__length,other__dat__first,&__t714t__unsafe_ptr,&__t714t__dat__pos,&__t714t__dat__length,&__t714t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(__t714t__unsafe_ptr,&__t712t____t517t__);
  if(__t712t____t517t__){
  free__t508t(&__t714t__unsafe_ptr);
  }
  __t_return:
  *__t2062t=__t714t__unsafe_ptr;
  *__t2063t=__t714t__dat__pos;
  *__t2064t=__t714t__dat__length;
  *__t2065t=__t714t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t715t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2066t, char** __t2067t, uint64_t* __t2068t, uint64_t* __t2069t, char* __t2070t) {
  char* __t716t__unsafe_ptr=0;
  uint64_t __t716t__dat__pos=0;
  uint64_t __t716t__dat__length=0;
  char __t716t__dat__first=0;
  char __t717t____t712t____t517t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t718t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t705t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t716t__unsafe_ptr,&__t716t__dat__pos,&__t716t__dat__length,&__t716t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t716t__unsafe_ptr;
  str__dat__pos=__t716t__dat__pos;
  str__dat__length=__t716t__dat__length;
  str__dat__first=__t716t__dat__first;
  add__t510t(str__unsafe_ptr,str__dat__pos,&__t718t__);
  _ret=__t718t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t442t(str__unsafe_ptr,&__t717t____t712t____t517t__);
  if(__t717t____t712t____t517t__){
  free__t508t(&str__unsafe_ptr);
  }
  __t_return:
  *__t2066t=cstr;
  *__t2067t=str__unsafe_ptr;
  *__t2068t=str__dat__pos;
  *__t2069t=str__dat__length;
  *__t2070t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t722t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2071t) {
  goto __t_return;
  __t_return:
  *__t2071t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1548t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2072t) {
  const char* __t1549t__cstr=0;
  char* __t1549t__str__unsafe_ptr=0;
  uint64_t __t1549t__str__dat__pos=0;
  uint64_t __t1549t__str__dat__length=0;
  char __t1549t__str__dat__first=0;
  char __t1550t____t717t____t712t____t517t__=0;
  const char* __t1551t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1552t__=0;
  char __t1553t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t715t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1549t__cstr,&__t1549t__str__unsafe_ptr,&__t1549t__str__dat__pos,&__t1549t__str__dat__length,&__t1549t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t722t(__t1549t__cstr,__t1549t__str__unsafe_ptr,__t1549t__str__dat__pos,__t1549t__str__dat__length,__t1549t__str__dat__first,&__t1551t__);
  path=__t1551t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t442t(unsafe_ptr,&__t1552t__);
  not__t27t(__t1552t__,&__t1553t__);
  if(__t1553t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t2072t=unsafe_ptr;
  exists__t442t(__t1549t__str__unsafe_ptr,&__t1550t____t717t____t712t____t517t__);
  if(__t1550t____t717t____t712t____t517t__){
  free__t508t(&__t1549t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2073t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2073t=__t488t__;
}

static inline __attribute__((always_inline)) int alloc__t556t(uint64_t size, char** __t2074t, uint64_t* __t2075t, uint16_t* __t2076t, uint16_t* __t2077t) {
  char* __t559t__unsafe_ptr=0;
  uint64_t __t559t__unsafe_size=0;
  uint16_t __t559t__unsafe_offset=0;
  uint16_t __t559t__unsafe_align=0;
  char* __t560t__unsafe_ptr=0;
  uint64_t __t560t__unsafe_size=0;
  uint16_t __t560t__unsafe_offset=0;
  uint16_t __t560t__unsafe_align=0;
  char* __t561t__unsafe_ptr=0;
  uint64_t __t561t__unsafe_size=0;
  uint16_t __t561t__unsafe_offset=0;
  uint16_t __t561t__unsafe_align=0;
  char __t562t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t559t__unsafe_ptr,&__t559t__unsafe_size,&__t559t__unsafe_offset,&__t559t__unsafe_align);
  __t560t__unsafe_ptr=__t559t__unsafe_ptr;
  __t560t__unsafe_size=__t559t__unsafe_size;
  __t560t__unsafe_offset=__t559t__unsafe_offset;
  __t560t__unsafe_align=__t559t__unsafe_align;
  __t_errcode=alloc__t515t(&__t560t__unsafe_ptr,&__t560t__unsafe_size,&__t560t__unsafe_offset,&__t560t__unsafe_align,size,&__t561t__unsafe_ptr,&__t561t__unsafe_size,&__t561t__unsafe_offset,&__t561t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(__t561t__unsafe_ptr,&__t562t____t517t__);
  if(__t562t____t517t__){
  free__t508t(&__t561t__unsafe_ptr);
  }
  __t_return:
  *__t2074t=__t561t__unsafe_ptr;
  *__t2075t=__t561t__unsafe_size;
  *__t2076t=__t561t__unsafe_offset;
  *__t2077t=__t561t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2078t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2078t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2079t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2079t=z;
  
  return __t_errcode;
}

int line__t1719t(char** __t2080t, uint64_t* __t2081t, uint16_t* __t2082t, uint16_t* __t2083t, uint64_t* __t2084t, char** __t2085t, char** __t2086t, uint64_t* __t2087t, uint64_t* __t2088t, char* __t2089t) {
  char* buf__unsafe_ptr=*__t2080t;
  uint64_t buf__unsafe_size=*__t2081t;
  uint16_t buf__unsafe_offset=*__t2082t;
  uint16_t buf__unsafe_align=*__t2083t;
  uint64_t pos=*__t2084t;
  char* f__unsafe_ptr=*__t2085t;
  int __t1720t=0;
  char __t1721t__=0;
  char __t1722t__=0;
  char* __t1723t__=0;
  char* contents=0;
  uint64_t __t1724t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1725t__=0;
  char __t1726t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1727t__=0;
  char* __t1728t__unsafe_ptr=0;
  uint64_t __t1728t__dat__pos=0;
  uint64_t __t1728t__dat__length=0;
  char __t1728t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(buf__unsafe_ptr,&__t1721t__);
  not__t27t(__t1721t__,&__t1722t__);
  if(__t1722t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t510t(buf__unsafe_ptr,pos,&__t1723t__);
  contents=__t1723t__;
  __t_errcode=sub__t351t(buf__unsafe_size,pos,&__t1724t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1724t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t442t(obtained,&__t1725t__);
  not__t27t(__t1725t__,&__t1726t__);
  if(__t1726t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t174t(pos,bytes_read,&__t1727t__);
  pos=__t1727t__;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1728t__unsafe_ptr,&__t1728t__dat__pos,&__t1728t__dat__length,&__t1728t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2080t=buf__unsafe_ptr;
  *__t2081t=buf__unsafe_size;
  *__t2082t=buf__unsafe_offset;
  *__t2083t=buf__unsafe_align;
  *__t2084t=pos;
  *__t2085t=f__unsafe_ptr;
  *__t2086t=__t1728t__unsafe_ptr;
  *__t2087t=__t1728t__dat__pos;
  *__t2088t=__t1728t__dat__length;
  *__t2089t=__t1728t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1950t(char** __t2090t, uint64_t* __t2091t, uint16_t* __t2092t, uint16_t* __t2093t, uint64_t* __t2094t, char** __t2095t, uint64_t __t_anon3, char** __t2096t, uint64_t* __t2097t, uint64_t* __t2098t, char* __t2099t) {
  char* buf__unsafe_ptr=*__t2090t;
  uint64_t buf__unsafe_size=*__t2091t;
  uint16_t buf__unsafe_offset=*__t2092t;
  uint16_t buf__unsafe_align=*__t2093t;
  uint64_t pos=*__t2094t;
  char* f__unsafe_ptr=*__t2095t;
  int __t1951t=0;
  char* __t1952t__unsafe_ptr=0;
  uint64_t __t1952t__dat__pos=0;
  uint64_t __t1952t__dat__length=0;
  char __t1952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1719t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t1952t__unsafe_ptr,&__t1952t__dat__pos,&__t1952t__dat__length,&__t1952t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2090t=buf__unsafe_ptr;
  *__t2091t=buf__unsafe_size;
  *__t2092t=buf__unsafe_offset;
  *__t2093t=buf__unsafe_align;
  *__t2094t=pos;
  *__t2095t=f__unsafe_ptr;
  *__t2096t=__t1952t__unsafe_ptr;
  *__t2097t=__t1952t__dat__pos;
  *__t2098t=__t1952t__dat__length;
  *__t2099t=__t1952t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1998t() {
  char* __t2001t__unsafe_ptr=0;
  uint64_t __t2001t__dat__pos=0;
  uint64_t __t2001t__dat__length=0;
  char __t2001t__dat__first=0;
  char* __t2002t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2004t=0;
  uint64_t __t2005t__=0;
  char* __t2006t__unsafe_ptr=0;
  uint64_t __t2006t__unsafe_size=0;
  uint16_t __t2006t__unsafe_offset=0;
  uint16_t __t2006t__unsafe_align=0;
  char __t2007t____t562t____t517t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2008t=0;
  uint64_t __t2009t=0;
  uint64_t pos=0;
  uint64_t __t2010t=0;
  char __t2011t=0;
  char* __t2012t__unsafe_ptr=0;
  uint64_t __t2012t__dat__pos=0;
  uint64_t __t2012t__dat__length=0;
  char __t2012t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2013t=0;
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__dat__pos=0;
  uint64_t __t2014t__dat__length=0;
  char __t2014t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=str__t674t(__t2000t,&__t2001t__unsafe_ptr,&__t2001t__dat__pos,&__t2001t__dat__length,&__t2001t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1548t(__t2001t__unsafe_ptr,__t2001t__dat__pos,__t2001t__dat__length,__t2001t__dat__first,&__t2002t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2002t__unsafe_ptr;
  __t2004t=4;
  KB__t486t(__t2004t,&__t2005t__);
  __t_errcode=alloc__t556t(__t2005t__,&__t2006t__unsafe_ptr,&__t2006t__unsafe_size,&__t2006t__unsafe_offset,&__t2006t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2006t__unsafe_ptr;
  mem__unsafe_size=__t2006t__unsafe_size;
  mem__unsafe_offset=__t2006t__unsafe_offset;
  mem__unsafe_align=__t2006t__unsafe_align;
  __t2008t=0;
  __t2009t=__t2008t;
  pos=__t2009t;
  __t2010t=0;
  while(1){
  __t_complain=get__t1950t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2010t,&__t2012t__unsafe_ptr,&__t2012t__dat__pos,&__t2012t__dat__length,&__t2012t__dat__first);
  __t2011t=__t_complain;
  line__unsafe_ptr=__t2012t__unsafe_ptr;
  line__dat__pos=__t2012t__dat__pos;
  line__dat__length=__t2012t__dat__length;
  line__dat__first=__t2012t__dat__first;
  __t2011t=__t2011t==0;
  __t2010t=__t2010t+1;
  if(!__t2011t){
  break;
  }
  continue;
  }
  if(__t2002t__unsafe_ptr){
  fclose((FILE*)__t2002t__unsafe_ptr);
  __t2002t__unsafe_ptr=0;
  }
  __t2013t=0;
  __t_errcode=str__t668t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2013t,pos,&__t2014t__unsafe_ptr,&__t2014t__dat__pos,&__t2014t__dat__length,&__t2014t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t786t(__t2014t__unsafe_ptr,__t2014t__dat__pos,__t2014t__dat__length,__t2014t__dat__first);
  
  __t_failure:exists__t442t(__t2006t__unsafe_ptr,&__t2007t____t562t____t517t__);
  if(__t2007t____t562t____t517t__){
  free__t508t(&__t2006t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1998t();return 0;}