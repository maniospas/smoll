#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2006t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1491t(char** __t2010t, uint64_t* __t2011t, uint16_t* __t2012t, uint16_t* __t2013t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2010t=unsafe_ptr;
  *__t2011t=unsafe_size;
  *__t2012t=unsafe_offset;
  *__t2013t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2014t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2014t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2015t) {
  char* allocated=*__t2015t;
  if(allocated){
  free(allocated);
  }
  *__t2015t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2016t) {
  int value=0;
  *__t2016t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2017t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2017t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2018t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2018t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2019t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2019t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2020t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2020t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2021t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2021t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2022t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2022t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2023t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2023t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2024t) {
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
  *__t2024t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2025t, uint64_t* __t2026t, uint16_t* __t2027t, uint16_t* __t2028t, uint64_t size, char** __t2029t, uint64_t* __t2030t, uint16_t* __t2031t, uint16_t* __t2032t) {
  char* buffer__unsafe_ptr=*__t2025t;
  uint64_t buffer__unsafe_size=*__t2026t;
  uint16_t buffer__unsafe_offset=*__t2027t;
  uint16_t buffer__unsafe_align=*__t2028t;
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
  *__t2025t=buffer__unsafe_ptr;
  *__t2026t=buffer__unsafe_size;
  *__t2027t=buffer__unsafe_offset;
  *__t2028t=buffer__unsafe_align;
  *__t2029t=buffer__unsafe_ptr;
  *__t2030t=buffer__unsafe_size;
  *__t2031t=buffer__unsafe_offset;
  *__t2032t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2033t, uint64_t* __t2034t, uint16_t* __t2035t, uint16_t* __t2036t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2033t=unsafe_ptr;
  *__t2034t=unsafe_size;
  *__t2035t=unsafe_offset;
  *__t2036t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2037t) {
  *__t2037t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2038t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2038t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2039t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2039t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2040t) {
  *__t2040t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2041t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2041t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2042t) {
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
  *__t2042t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2043t, uint64_t* __t2044t, uint64_t* __t2045t, char* __t2046t) {
  goto __t_return;
  __t_return:
  *__t2043t=unsafe_ptr;
  *__t2044t=dat__pos;
  *__t2045t=dat__length;
  *__t2046t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2047t, uint64_t* __t2048t, uint64_t* __t2049t, char* __t2050t) {
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
  *__t2047t=__t643t__unsafe_ptr;
  *__t2048t=__t643t__dat__pos;
  *__t2049t=__t643t__dat__length;
  *__t2050t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2051t, uint64_t* __t2052t, uint64_t* __t2053t, char* __t2054t) {
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
  *__t2051t=__t673t__unsafe_ptr;
  *__t2052t=__t673t__dat__pos;
  *__t2053t=__t673t__dat__length;
  *__t2054t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t2055t, uint64_t* __t2056t, uint64_t* __t2057t, char* __t2058t) {
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
  *__t2055t=__t681t__unsafe_ptr;
  *__t2056t=__t681t__dat__pos;
  *__t2057t=__t681t__dat__length;
  *__t2058t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2059t, uint64_t* __t2060t, uint64_t* __t2061t, char* __t2062t) {
  goto __t_return;
  __t_return:
  *__t2059t=other__unsafe_ptr;
  *__t2060t=other__dat__pos;
  *__t2061t=other__dat__length;
  *__t2062t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2063t) {
  goto __t_return;
  __t_return:
  *__t2063t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2064t) {
  goto __t_return;
  __t_return:
  *__t2064t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2065t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2065t=z;
}

static inline __attribute__((always_inline)) int copy__t744t(char** __t2066t, uint64_t* __t2067t, uint16_t* __t2068t, uint16_t* __t2069t, uint64_t* __t2070t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2071t, uint64_t* __t2072t, uint64_t* __t2073t, char* __t2074t) {
  char* buf__unsafe_ptr=*__t2066t;
  uint64_t buf__unsafe_size=*__t2067t;
  uint16_t buf__unsafe_offset=*__t2068t;
  uint16_t buf__unsafe_align=*__t2069t;
  uint64_t pos=*__t2070t;
  char* __t745t__unsafe_ptr=0;
  uint64_t __t745t__dat__pos=0;
  uint64_t __t745t__dat__length=0;
  char __t745t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t746t__=0;
  uint64_t __t747t__=0;
  uint64_t next_pos=0;
  uint64_t __t748t__=0;
  char __t749t__=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t prev_pos=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t745t__unsafe_ptr,&__t745t__dat__pos,&__t745t__dat__length,&__t745t__dat__first);
  other__unsafe_ptr=__t745t__unsafe_ptr;
  other__dat__pos=__t745t__dat__pos;
  other__dat__length=__t745t__dat__length;
  other__dat__first=__t745t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t746t__);
  add__t174t(pos,__t746t__,&__t747t__);
  next_pos=__t747t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t748t__);
  gt__t275t(next_pos,__t748t__,&__t749t__);
  if(__t749t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t750t=0;
  add__t174t(pos,__t750t,&__t751t__);
  prev_pos=__t751t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2066t=buf__unsafe_ptr;
  *__t2067t=buf__unsafe_size;
  *__t2068t=buf__unsafe_offset;
  *__t2069t=buf__unsafe_align;
  *__t2070t=pos;
  *__t2071t=__t752t__unsafe_ptr;
  *__t2072t=__t752t__dat__pos;
  *__t2073t=__t752t__dat__length;
  *__t2074t=__t752t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t705t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2075t, uint64_t* __t2076t, uint64_t* __t2077t, char* __t2078t) {
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
  *__t2075t=__t714t__unsafe_ptr;
  *__t2076t=__t714t__dat__pos;
  *__t2077t=__t714t__dat__length;
  *__t2078t=__t714t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t715t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2079t, char** __t2080t, uint64_t* __t2081t, uint64_t* __t2082t, char* __t2083t) {
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
  *__t2079t=cstr;
  *__t2080t=str__unsafe_ptr;
  *__t2081t=str__dat__pos;
  *__t2082t=str__dat__length;
  *__t2083t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t722t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2084t) {
  goto __t_return;
  __t_return:
  *__t2084t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1530t(const char* cmd, const char** __t2085t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2085t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1529t(const char* cmd, int64_t* __t2086t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2086t=result;
}

static inline __attribute__((always_inline)) void int__t422t(uint64_t x, int64_t* __t2087t) {
  int __t423t=0;
  int __t424t=0;
  int __t425t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2087t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2088t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2088t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2089t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2089t=z;
}

int system__t1539t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1540t__cstr=0;
  char* __t1540t__str__unsafe_ptr=0;
  uint64_t __t1540t__str__dat__pos=0;
  uint64_t __t1540t__str__dat__length=0;
  char __t1540t__str__dat__first=0;
  char __t1541t____t717t____t712t____t517t__=0;
  const char* __t1542t__=0;
  const char* __t1543t__=0;
  int64_t __t1544t__=0;
  int64_t result=0;
  uint64_t __t1545t=0;
  int64_t __t1546t__=0;
  char __t1547t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t715t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1540t__cstr,&__t1540t__str__unsafe_ptr,&__t1540t__str__dat__pos,&__t1540t__str__dat__length,&__t1540t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t722t(__t1540t__cstr,__t1540t__str__unsafe_ptr,__t1540t__str__dat__pos,__t1540t__str__dat__length,__t1540t__str__dat__first,&__t1542t__);
  __t_errcode=safe__t1530t(__t1542t__,&__t1543t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1529t(__t1543t__,&__t1544t__);
  result=__t1544t__;
  __t1545t=0;
  int__t422t(__t1545t,&__t1546t__);
  neq__t132t(result,__t1546t__,&__t1547t__);
  if(__t1547t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t1540t__str__unsafe_ptr,&__t1541t____t717t____t712t____t517t__);
  if(__t1541t____t717t____t712t____t517t__){
  free__t508t(&__t1540t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1998t() {
  char* __t2000t__unsafe_ptr=0;
  uint64_t __t2000t__unsafe_size=0;
  uint16_t __t2000t__unsafe_offset=0;
  uint16_t __t2000t__unsafe_align=0;
  uint64_t __t2001t=0;
  char* __t2002t__unsafe_ptr=0;
  uint64_t __t2002t__unsafe_size=0;
  uint16_t __t2002t__unsafe_offset=0;
  uint16_t __t2002t__unsafe_align=0;
  char __t2003t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t2004t=0;
  uint64_t __t2005t=0;
  char* __t2007t__unsafe_ptr=0;
  uint64_t __t2007t__dat__pos=0;
  uint64_t __t2007t__dat__length=0;
  char __t2007t__dat__first=0;
  char* __t2008t__unsafe_ptr=0;
  uint64_t __t2008t__dat__pos=0;
  uint64_t __t2008t__dat__length=0;
  char __t2008t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  char____t_buffer____buffer__t1491t(&__t2000t__unsafe_ptr,&__t2000t__unsafe_size,&__t2000t__unsafe_offset,&__t2000t__unsafe_align);
  __t2001t=2;
  __t_errcode=alloc__t515t(&__t2000t__unsafe_ptr,&__t2000t__unsafe_size,&__t2000t__unsafe_offset,&__t2000t__unsafe_align,__t2001t,&__t2002t__unsafe_ptr,&__t2002t__unsafe_size,&__t2002t__unsafe_offset,&__t2002t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2002t__unsafe_ptr;
  buf__unsafe_size=__t2002t__unsafe_size;
  buf__unsafe_offset=__t2002t__unsafe_offset;
  buf__unsafe_align=__t2002t__unsafe_align;
  __t2004t=0;
  __t2005t=__t2004t;
  __t_errcode=str__t674t(__t2006t,&__t2007t__unsafe_ptr,&__t2007t__dat__pos,&__t2007t__dat__length,&__t2007t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t744t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2005t,__t2007t__unsafe_ptr,__t2007t__dat__pos,__t2007t__dat__length,__t2007t__dat__first,&__t2008t__unsafe_ptr,&__t2008t__dat__pos,&__t2008t__dat__length,&__t2008t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2008t__unsafe_ptr;
  s__dat__pos=__t2008t__dat__pos;
  s__dat__length=__t2008t__dat__length;
  s__dat__first=__t2008t__dat__first;
  __t_errcode=system__t1539t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t2002t__unsafe_ptr,&__t2003t____t517t__);
  if(__t2003t____t517t__){
  free__t508t(&__t2002t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1998t();return 0;}