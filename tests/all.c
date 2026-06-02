#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2022t="./smoll ";
const char* const __t2016t="./tests/passing/";
const char* const __t377t="\n";
const char* const __t2035t=".s";
const char* const __t369t="";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1491t(char** __t2045t, uint64_t* __t2046t, uint16_t* __t2047t, uint16_t* __t2048t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2045t=unsafe_ptr;
  *__t2046t=unsafe_size;
  *__t2047t=unsafe_offset;
  *__t2048t=unsafe_align;
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

static inline __attribute__((always_inline)) void false__t10t(int* __t2051t) {
  int value=0;
  *__t2051t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2052t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2052t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2053t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2053t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2054t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2054t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2055t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2055t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2056t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2056t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2057t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2057t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2058t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2058t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2059t) {
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
  *__t2059t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2060t, uint64_t* __t2061t, uint16_t* __t2062t, uint16_t* __t2063t, uint64_t size, char** __t2064t, uint64_t* __t2065t, uint16_t* __t2066t, uint16_t* __t2067t) {
  char* buffer__unsafe_ptr=*__t2060t;
  uint64_t buffer__unsafe_size=*__t2061t;
  uint16_t buffer__unsafe_offset=*__t2062t;
  uint16_t buffer__unsafe_align=*__t2063t;
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
  *__t2060t=buffer__unsafe_ptr;
  *__t2061t=buffer__unsafe_size;
  *__t2062t=buffer__unsafe_offset;
  *__t2063t=buffer__unsafe_align;
  *__t2064t=buffer__unsafe_ptr;
  *__t2065t=buffer__unsafe_size;
  *__t2066t=buffer__unsafe_offset;
  *__t2067t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t724t(char** __t2068t, uint64_t* __t2069t, uint16_t* __t2070t, uint16_t* __t2071t, char** __t2072t, uint64_t* __t2073t, uint16_t* __t2074t, uint16_t* __t2075t, uint64_t* __t2076t) {
  char* buf__unsafe_ptr=*__t2068t;
  uint64_t buf__unsafe_size=*__t2069t;
  uint16_t buf__unsafe_offset=*__t2070t;
  uint16_t buf__unsafe_align=*__t2071t;
  uint64_t __t725t=0;
  uint64_t __t726t=0;
  uint64_t pos=0;
  __t725t=0;
  __t726t=__t725t;
  pos=__t726t;
  goto __t_return;
  __t_return:
  *__t2068t=buf__unsafe_ptr;
  *__t2069t=buf__unsafe_size;
  *__t2070t=buf__unsafe_offset;
  *__t2071t=buf__unsafe_align;
  *__t2072t=buf__unsafe_ptr;
  *__t2073t=buf__unsafe_size;
  *__t2074t=buf__unsafe_offset;
  *__t2075t=buf__unsafe_align;
  *__t2076t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2077t, uint64_t* __t2078t, uint16_t* __t2079t, uint16_t* __t2080t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2077t=unsafe_ptr;
  *__t2078t=unsafe_size;
  *__t2079t=unsafe_offset;
  *__t2080t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2081t) {
  *__t2081t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2082t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2082t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2083t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2083t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2084t) {
  *__t2084t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2085t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2085t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2086t) {
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
  *__t2086t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2087t, uint64_t* __t2088t, uint64_t* __t2089t, char* __t2090t) {
  goto __t_return;
  __t_return:
  *__t2087t=unsafe_ptr;
  *__t2088t=dat__pos;
  *__t2089t=dat__length;
  *__t2090t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2091t, uint64_t* __t2092t, uint64_t* __t2093t, char* __t2094t) {
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
  *__t2091t=__t643t__unsafe_ptr;
  *__t2092t=__t643t__dat__pos;
  *__t2093t=__t643t__dat__length;
  *__t2094t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2095t, uint64_t* __t2096t, uint64_t* __t2097t, char* __t2098t) {
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
  *__t2095t=__t673t__unsafe_ptr;
  *__t2096t=__t673t__dat__pos;
  *__t2097t=__t673t__dat__length;
  *__t2098t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t2099t, uint64_t* __t2100t, uint64_t* __t2101t, char* __t2102t) {
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
  *__t2099t=__t681t__unsafe_ptr;
  *__t2100t=__t681t__dat__pos;
  *__t2101t=__t681t__dat__length;
  *__t2102t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2103t) {
  goto __t_return;
  __t_return:
  *__t2103t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2104t) {
  goto __t_return;
  __t_return:
  *__t2104t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2105t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2105t=z;
}

int copy__t753t(char** __t2106t, uint64_t* __t2107t, uint16_t* __t2108t, uint16_t* __t2109t, uint64_t* __t2110t, const char* _other, char** __t2111t, uint64_t* __t2112t, uint64_t* __t2113t, char* __t2114t) {
  char* buf__unsafe_ptr=*__t2106t;
  uint64_t buf__unsafe_size=*__t2107t;
  uint16_t buf__unsafe_offset=*__t2108t;
  uint16_t buf__unsafe_align=*__t2109t;
  uint64_t pos=*__t2110t;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t755t__=0;
  uint64_t __t756t__=0;
  uint64_t next_pos=0;
  uint64_t __t757t__=0;
  char __t758t__=0;
  uint64_t __t759t=0;
  uint64_t __t760t__=0;
  uint64_t prev_pos=0;
  char* __t761t__unsafe_ptr=0;
  uint64_t __t761t__dat__pos=0;
  uint64_t __t761t__dat__length=0;
  char __t761t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t754t__unsafe_ptr;
  other__dat__pos=__t754t__dat__pos;
  other__dat__length=__t754t__dat__length;
  other__dat__first=__t754t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t755t__);
  add__t174t(pos,__t755t__,&__t756t__);
  next_pos=__t756t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t757t__);
  gt__t275t(next_pos,__t757t__,&__t758t__);
  if(__t758t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t759t=0;
  add__t174t(pos,__t759t,&__t760t__);
  prev_pos=__t760t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t761t__unsafe_ptr,&__t761t__dat__pos,&__t761t__dat__length,&__t761t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2106t=buf__unsafe_ptr;
  *__t2107t=buf__unsafe_size;
  *__t2108t=buf__unsafe_offset;
  *__t2109t=buf__unsafe_align;
  *__t2110t=pos;
  *__t2111t=__t761t__unsafe_ptr;
  *__t2112t=__t761t__dat__pos;
  *__t2113t=__t761t__dat__length;
  *__t2114t=__t761t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1883t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1884t(const char* path, char** __t2115t) {
  char* unsafe_ptr=0;
  char __t1886t__=0;
  char __t1887t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t442t(unsafe_ptr,&__t1886t__);
  not__t27t(__t1886t__,&__t1887t__);
  if(__t1887t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1883t(unsafe_ptr);
  __t_return:
  *__t2115t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2116t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2116t=__t488t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1895t(char** __t2117t, const char** __t2118t) {
  char* f__unsafe_ptr=*__t2117t;
  char __t1896t__=0;
  char __t1897t__=0;
  char* de=0;
  char __t1898t__=0;
  char __t1899t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(f__unsafe_ptr,&__t1896t__);
  not__t27t(__t1896t__,&__t1897t__);
  if(__t1897t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t442t(de,&__t1898t__);
  not__t27t(__t1898t__,&__t1899t__);
  if(__t1899t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2117t=f__unsafe_ptr;
  *__t2118t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1900t(char** __t2119t, char** __t2120t, uint64_t* __t2121t, uint64_t* __t2122t, char* __t2123t) {
  char* f__unsafe_ptr=*__t2119t;
  const char* __t1901t__=0;
  char* __t1902t__unsafe_ptr=0;
  uint64_t __t1902t__dat__pos=0;
  uint64_t __t1902t__dat__length=0;
  char __t1902t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1895t(&f__unsafe_ptr,&__t1901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t1901t__,&__t1902t__unsafe_ptr,&__t1902t__dat__pos,&__t1902t__dat__length,&__t1902t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2119t=f__unsafe_ptr;
  *__t2120t=__t1902t__unsafe_ptr;
  *__t2121t=__t1902t__dat__pos;
  *__t2122t=__t1902t__dat__length;
  *__t2123t=__t1902t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1948t(char** __t2124t, uint64_t __t_anon1, char** __t2125t, uint64_t* __t2126t, uint64_t* __t2127t, char* __t2128t) {
  char* data__unsafe_ptr=*__t2124t;
  char* __t1949t__unsafe_ptr=0;
  uint64_t __t1949t__dat__pos=0;
  uint64_t __t1949t__dat__length=0;
  char __t1949t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1900t(&data__unsafe_ptr,&__t1949t__unsafe_ptr,&__t1949t__dat__pos,&__t1949t__dat__length,&__t1949t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2124t=data__unsafe_ptr;
  *__t2125t=__t1949t__unsafe_ptr;
  *__t2126t=__t1949t__dat__pos;
  *__t2127t=__t1949t__dat__length;
  *__t2128t=__t1949t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2129t, uint64_t* __t2130t, uint64_t* __t2131t, char* __t2132t) {
  goto __t_return;
  __t_return:
  *__t2129t=other__unsafe_ptr;
  *__t2130t=other__dat__pos;
  *__t2131t=other__dat__length;
  *__t2132t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2133t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2133t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2134t) {
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
  *__t2134t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t825t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2135t) {
  uint64_t __t826t__=0;
  char* __t827t__=0;
  add__t174t(s__dat__pos,i,&__t826t__);
  add__t510t(s__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  __t_return:
  *__t2135t=__t827t__;
}

int slice__t864t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2136t, uint64_t* __t2137t, uint64_t* __t2138t, char* __t2139t) {
  char* __t865t__unsafe_ptr=0;
  uint64_t __t865t__dat__pos=0;
  uint64_t __t865t__dat__length=0;
  char __t865t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t866t__=0;
  char* __t867t__unsafe_ptr=0;
  uint64_t __t867t__dat__pos=0;
  uint64_t __t867t__dat__length=0;
  char __t867t__dat__first=0;
  char __t868t__=0;
  char __t869t__=0;
  char __t870t=0;
  char __t871t__=0;
  uint64_t __t872t__=0;
  uint64_t new_length=0;
  uint64_t __t873t=0;
  char __t874t__=0;
  char new_first=0;
  char* __t875t__=0;
  char __t876t__value=0;
  uint64_t __t877t__=0;
  char* __t878t__unsafe_ptr=0;
  uint64_t __t878t__dat__pos=0;
  uint64_t __t878t__dat__length=0;
  char __t878t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t865t__unsafe_ptr,&__t865t__dat__pos,&__t865t__dat__length,&__t865t__dat__first);
  s__unsafe_ptr=__t865t__unsafe_ptr;
  s__dat__pos=__t865t__dat__pos;
  s__dat__length=__t865t__dat__length;
  s__dat__first=__t865t__dat__first;
  eq__t119t(from,to,&__t866t__);
  if(__t866t__){
  __t_errcode=str__t674t(__t369t,&__t867t__unsafe_ptr,&__t867t__dat__pos,&__t867t__dat__length,&__t867t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t275t(from,to,&__t868t__);
  if(!__t868t__){
  gt__t275t(to,s__dat__length,&__t869t__);
  __t870t=__t869t__;
  }
  else{
  __t870t=0;
  not__t27t(__t870t,&__t871t__);
  __t870t=__t871t__;
  }
  if(__t870t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t351t(to,from,&__t872t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t872t__;
  __t873t=0;
  neq__t143t(from,__t873t,&__t874t__);
  if(__t874t__){
  get__t825t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t875t__);
  if(!__t875t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t876t__value,__t875t__,1);
  new_first=__t876t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t174t(s__dat__pos,from,&__t877t__);
  str__t632t(s__unsafe_ptr,__t877t__,new_length,new_first,&__t878t__unsafe_ptr,&__t878t__dat__pos,&__t878t__dat__length,&__t878t__dat__first);
  __t867t__unsafe_ptr=__t878t__unsafe_ptr;
  __t867t__dat__pos=__t878t__dat__pos;
  __t867t__dat__length=__t878t__dat__length;
  __t867t__dat__first=__t878t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2136t=__t867t__unsafe_ptr;
  *__t2137t=__t867t__dat__pos;
  *__t2138t=__t867t__dat__length;
  *__t2139t=__t867t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t686t(char x, char y, char* __t2140t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2140t=z;
}

static inline __attribute__((always_inline)) void eq__t829t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2141t) {
  uint64_t __t830t__=0;
  uint64_t n=0;
  uint64_t __t831t__=0;
  char __t832t__=0;
  char __t833t=0;
  char __t834t__=0;
  char __t835t=0;
  char z=0;
  len__t682t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t830t__);
  n=__t830t__;
  len__t682t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t831t__);
  neq__t143t(n,__t831t__,&__t832t__);
  if(__t832t__){
  __t833t=0;
  goto __t_return;
  }
  neq__t686t(x__dat__first,y__dat__first,&__t834t__);
  if(__t834t__){
  __t835t=0;
  __t833t=__t835t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t833t=z;
  goto __t_return;
  __t_return:
  *__t2141t=__t833t;
}

static inline __attribute__((always_inline)) int ends_with__t943t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2142t) {
  char* __t944t__unsafe_ptr=0;
  uint64_t __t944t__dat__pos=0;
  uint64_t __t944t__dat__length=0;
  char __t944t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t945t__unsafe_ptr=0;
  uint64_t __t945t__dat__pos=0;
  uint64_t __t945t__dat__length=0;
  char __t945t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t946t__=0;
  char __t947t=0;
  uint64_t __t948t__=0;
  uint64_t n=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  char* __t951t__unsafe_ptr=0;
  uint64_t __t951t__dat__pos=0;
  uint64_t __t951t__dat__length=0;
  char __t951t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t952t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t944t__unsafe_ptr,&__t944t__dat__pos,&__t944t__dat__length,&__t944t__dat__first);
  stack__unsafe_ptr=__t944t__unsafe_ptr;
  stack__dat__pos=__t944t__dat__pos;
  stack__dat__length=__t944t__dat__length;
  stack__dat__first=__t944t__dat__first;
  __t_errcode=str__t674t(_needle,&__t945t__unsafe_ptr,&__t945t__dat__pos,&__t945t__dat__length,&__t945t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t945t__unsafe_ptr;
  needle__dat__pos=__t945t__dat__pos;
  needle__dat__length=__t945t__dat__length;
  needle__dat__first=__t945t__dat__first;
  lt__t251t(stack__dat__length,needle__dat__length,&__t946t__);
  if(__t946t__){
  __t947t=0;
  goto __t_return;
  }
  len__t682t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t948t__);
  n=__t948t__;
  len__t682t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t949t__);
  __t_errcode=sub__t351t(n,__t949t__,&__t950t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t864t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t950t__,n,&__t951t__unsafe_ptr,&__t951t__dat__pos,&__t951t__dat__length,&__t951t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t951t__unsafe_ptr;
  ret__dat__pos=__t951t__dat__pos;
  ret__dat__length=__t951t__dat__length;
  ret__dat__first=__t951t__dat__first;
  eq__t829t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t952t__);
  __t947t=__t952t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2142t=__t947t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t762t(char** __t2143t, uint64_t* __t2144t, uint16_t* __t2145t, uint16_t* __t2146t, uint64_t* __t2147t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2148t, uint64_t* __t2149t, uint64_t* __t2150t, char* __t2151t) {
  char* buf__unsafe_ptr=*__t2143t;
  uint64_t buf__unsafe_size=*__t2144t;
  uint16_t buf__unsafe_offset=*__t2145t;
  uint16_t buf__unsafe_align=*__t2146t;
  uint64_t pos=*__t2147t;
  char* __t763t__unsafe_ptr=0;
  uint64_t __t763t__dat__pos=0;
  uint64_t __t763t__dat__length=0;
  char __t763t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t764t__=0;
  uint64_t __t765t__=0;
  uint64_t null_pos=0;
  uint64_t __t766t=0;
  uint64_t __t767t__=0;
  uint64_t next_pos=0;
  uint64_t __t768t__=0;
  char __t769t__=0;
  char* endpos=0;
  uint64_t __t770t=0;
  uint64_t __t771t__=0;
  uint64_t prev_pos=0;
  char* __t772t__unsafe_ptr=0;
  uint64_t __t772t__dat__pos=0;
  uint64_t __t772t__dat__length=0;
  char __t772t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t763t__unsafe_ptr,&__t763t__dat__pos,&__t763t__dat__length,&__t763t__dat__first);
  other__unsafe_ptr=__t763t__unsafe_ptr;
  other__dat__pos=__t763t__dat__pos;
  other__dat__length=__t763t__dat__length;
  other__dat__first=__t763t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t764t__);
  add__t174t(pos,__t764t__,&__t765t__);
  null_pos=__t765t__;
  __t766t=1;
  add__t174t(null_pos,__t766t,&__t767t__);
  next_pos=__t767t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t768t__);
  gt__t275t(next_pos,__t768t__,&__t769t__);
  if(__t769t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t770t=0;
  add__t174t(pos,__t770t,&__t771t__);
  prev_pos=__t771t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t772t__unsafe_ptr,&__t772t__dat__pos,&__t772t__dat__length,&__t772t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2143t=buf__unsafe_ptr;
  *__t2144t=buf__unsafe_size;
  *__t2145t=buf__unsafe_offset;
  *__t2146t=buf__unsafe_align;
  *__t2147t=pos;
  *__t2148t=__t772t__unsafe_ptr;
  *__t2149t=__t772t__dat__pos;
  *__t2150t=__t772t__dat__length;
  *__t2151t=__t772t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t742t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2152t) {
  uint64_t __t743t__=0;
  add__t174t(s__dat__pos,s__dat__length,&__t743t__);
  goto __t_return;
  __t_return:
  *__t2152t=__t743t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2153t) {
  int value=0;
  *__t2153t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2154t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2154t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t644t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2155t, uint64_t* __t2156t, uint64_t* __t2157t, char* __t2158t) {
  int __t645t=0;
  int __t646t=0;
  int __t647t__=0;
  uint64_t __t648t__=0;
  char __t649t__=0;
  uint64_t __t650t=0;
  uint64_t __t651t=0;
  char* __t652t__=0;
  char __t653t__value=0;
  char* __t654t__unsafe_ptr=0;
  uint64_t __t654t__dat__pos=0;
  uint64_t __t654t__dat__length=0;
  char __t654t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t38t(__t646t,&__t647t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t648t__);
  gt__t275t(length,__t648t__,&__t649t__);
  if(__t649t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t650t=0;
  __t651t=0;
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t651t,&__t652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t652t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t653t__value,__t652t__,1);
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t650t,length,__t653t__value,&__t654t__unsafe_ptr,&__t654t__dat__pos,&__t654t__dat__length,&__t654t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2155t=__t654t__unsafe_ptr;
  *__t2156t=__t654t__dat__pos;
  *__t2157t=__t654t__dat__length;
  *__t2158t=__t654t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t705t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2159t, uint64_t* __t2160t, uint64_t* __t2161t, char* __t2162t) {
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
  *__t2159t=__t714t__unsafe_ptr;
  *__t2160t=__t714t__dat__pos;
  *__t2161t=__t714t__dat__length;
  *__t2162t=__t714t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t715t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2163t, char** __t2164t, uint64_t* __t2165t, uint64_t* __t2166t, char* __t2167t) {
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
  *__t2163t=cstr;
  *__t2164t=str__unsafe_ptr;
  *__t2165t=str__dat__pos;
  *__t2166t=str__dat__length;
  *__t2167t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t722t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2168t) {
  goto __t_return;
  __t_return:
  *__t2168t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1473t(const char* cmd, char** __t2169t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2169t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1472t(char* unsafe_ptr, int64_t* __t2170t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2170t=status;
}

static inline __attribute__((always_inline)) void int__t422t(uint64_t x, int64_t* __t2171t) {
  int __t423t=0;
  int __t424t=0;
  int __t425t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2171t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2172t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2172t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2173t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2173t=z;
}

static inline __attribute__((always_inline)) int read__t1474t(const char* cmd, char** __t2174t) {
  char* __t1475t__=0;
  char* unsafe_ptr=0;
  char __t1476t__=0;
  char __t1477t__=0;
  char __t1478t__=0;
  int64_t __t1479t__=0;
  int64_t status=0;
  uint64_t __t1480t=0;
  int64_t __t1481t__=0;
  char __t1482t__=0;
  char __t1483t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1473t(cmd,&__t1475t__);
  unsafe_ptr=__t1475t__;
  exists__t442t(unsafe_ptr,&__t1476t__);
  not__t27t(__t1476t__,&__t1477t__);
  if(__t1477t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(unsafe_ptr,&__t1478t__);
  if(__t1478t__){
  pclose__t1472t(unsafe_ptr,&__t1479t__);
  status=__t1479t__;
  unsafe_ptr=0;
  __t1480t=0;
  int__t422t(__t1480t,&__t1481t__);
  neq__t132t(status,__t1481t__,&__t1482t__);
  if(__t1482t__){
  __t_complain=36;
  __t1483t=__t1483t==0;
  }
  }
  __t_return:
  *__t2174t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1485t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2175t) {
  const char* __t1486t__cstr=0;
  char* __t1486t__str__unsafe_ptr=0;
  uint64_t __t1486t__str__dat__pos=0;
  uint64_t __t1486t__str__dat__length=0;
  char __t1486t__str__dat__first=0;
  char __t1487t____t717t____t712t____t517t__=0;
  const char* __t1488t__=0;
  char* __t1489t__unsafe_ptr=0;
  char __t1490t____t1478t__=0;
  int64_t __t1490t____t1479t__=0;
  int64_t __t1490t__status=0;
  uint64_t __t1490t____t1480t=0;
  int64_t __t1490t____t1481t__=0;
  char __t1490t____t1482t__=0;
  char __t1490t____t1483t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t715t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1486t__cstr,&__t1486t__str__unsafe_ptr,&__t1486t__str__dat__pos,&__t1486t__str__dat__length,&__t1486t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t722t(__t1486t__cstr,__t1486t__str__unsafe_ptr,__t1486t__str__dat__pos,__t1486t__str__dat__length,__t1486t__str__dat__first,&__t1488t__);
  __t_errcode=read__t1474t(__t1488t__,&__t1489t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(__t1489t__unsafe_ptr,&__t1490t____t1478t__);
  if(__t1490t____t1478t__){
  pclose__t1472t(__t1489t__unsafe_ptr,&__t1490t____t1479t__);
  __t1490t__status=__t1490t____t1479t__;
  __t1489t__unsafe_ptr=0;
  __t1490t____t1480t=0;
  int__t422t(__t1490t____t1480t,&__t1490t____t1481t__);
  neq__t132t(__t1490t__status,__t1490t____t1481t__,&__t1490t____t1482t__);
  if(__t1490t____t1482t__){
  __t_complain=36;
  __t1490t____t1483t=__t1490t____t1483t==0;
  }
  }
  __t_return:
  *__t2175t=__t1489t__unsafe_ptr;
  exists__t442t(__t1486t__str__unsafe_ptr,&__t1487t____t717t____t712t____t517t__);
  if(__t1487t____t717t____t712t____t517t__){
  free__t508t(&__t1486t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1466t(int64_t value, const char** __t2176t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2176t=ret;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2006t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2007t__unsafe_ptr=0;
  char __t2008t____t1490t____t1478t__=0;
  int64_t __t2008t____t1490t____t1479t__=0;
  int64_t __t2008t____t1490t__status=0;
  uint64_t __t2008t____t1490t____t1480t=0;
  int64_t __t2008t____t1490t____t1481t__=0;
  char __t2008t____t1490t____t1482t__=0;
  char __t2008t____t1490t____t1483t=0;
  char* __t2009t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2010t=0;
  int64_t __t2011t=0;
  int64_t error=0;
  const char* __t2012t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1485t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2007t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2009t__unsafe_ptr=__t2007t__unsafe_ptr;
  proc__unsafe_ptr=__t2009t__unsafe_ptr;
  exists__t442t(__t2007t__unsafe_ptr,&__t2008t____t1490t____t1478t__);
  if(__t2008t____t1490t____t1478t__){
  pclose__t1472t(__t2007t__unsafe_ptr,&__t2008t____t1490t____t1479t__);
  __t2008t____t1490t__status=__t2008t____t1490t____t1479t__;
  __t2007t__unsafe_ptr=0;
  __t2008t____t1490t____t1480t=0;
  int__t422t(__t2008t____t1490t____t1480t,&__t2008t____t1490t____t1481t__);
  neq__t132t(__t2008t____t1490t__status,__t2008t____t1490t____t1481t__,&__t2008t____t1490t____t1482t__);
  if(__t2008t____t1490t____t1482t__){
  __t_complain=36;
  __t2008t____t1490t____t1483t=__t2008t____t1490t____t1483t==0;
  }
  }
  __t2011t=__t_complain;
  __t2010t=(__t_complain==0);
  __t_complain=0;
  error=__t2011t;
  __t2010t=__t2010t==0;
  if(__t2010t){
  cstr__t1466t(error,&__t2012t__);
  print__t375t(__t2012t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2014t() {
  const char* path=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__unsafe_size=0;
  uint16_t __t2017t__unsafe_offset=0;
  uint16_t __t2017t__unsafe_align=0;
  uint64_t __t2018t=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__unsafe_size=0;
  uint16_t __t2019t__unsafe_offset=0;
  uint16_t __t2019t__unsafe_align=0;
  char __t2020t____t517t__=0;
  char* __t2021t__buf__unsafe_ptr=0;
  uint64_t __t2021t__buf__unsafe_size=0;
  uint16_t __t2021t__buf__unsafe_offset=0;
  uint16_t __t2021t__buf__unsafe_align=0;
  uint64_t __t2021t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t2023t__unsafe_ptr=0;
  uint64_t __t2023t__dat__pos=0;
  uint64_t __t2023t__dat__length=0;
  char __t2023t__dat__first=0;
  char* __t2024t__unsafe_ptr=0;
  uint64_t __t2024t__dat__pos=0;
  uint64_t __t2024t__dat__length=0;
  char __t2024t__dat__first=0;
  char* __t2025t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t2027t__unsafe_ptr=0;
  uint64_t __t2027t__unsafe_size=0;
  uint16_t __t2027t__unsafe_offset=0;
  uint16_t __t2027t__unsafe_align=0;
  uint64_t __t2028t=0;
  uint64_t __t2029t__=0;
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__unsafe_size=0;
  uint16_t __t2030t__unsafe_offset=0;
  uint16_t __t2030t__unsafe_align=0;
  char __t2031t____t517t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t2032t=0;
  char __t2033t=0;
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__dat__pos=0;
  uint64_t __t2034t__dat__length=0;
  char __t2034t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2036t__=0;
  char __t2037t__=0;
  char* __t2038t__buf__unsafe_ptr=0;
  uint64_t __t2038t__buf__unsafe_size=0;
  uint16_t __t2038t__buf__unsafe_offset=0;
  uint16_t __t2038t__buf__unsafe_align=0;
  uint64_t __t2038t__pos=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__dat__pos=0;
  uint64_t __t2039t__dat__length=0;
  char __t2039t__dat__first=0;
  char* __t2040t__unsafe_ptr=0;
  uint64_t __t2040t__dat__pos=0;
  uint64_t __t2040t__dat__length=0;
  char __t2040t__dat__first=0;
  uint64_t __t2041t__=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  path=__t2016t;
  char____t_buffer____buffer__t1491t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align);
  __t2018t=256;
  __t_errcode=alloc__t515t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align,__t2018t,&__t2019t__unsafe_ptr,&__t2019t__unsafe_size,&__t2019t__unsafe_offset,&__t2019t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t724t(&__t2019t__unsafe_ptr,&__t2019t__unsafe_size,&__t2019t__unsafe_offset,&__t2019t__unsafe_align,&__t2021t__buf__unsafe_ptr,&__t2021t__buf__unsafe_size,&__t2021t__buf__unsafe_offset,&__t2021t__buf__unsafe_align,&__t2021t__pos);
  bp__buf__unsafe_ptr=__t2021t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t2021t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t2021t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t2021t__buf__unsafe_align;
  bp__pos=__t2021t__pos;
  __t_errcode=copy__t753t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t2022t,&__t2023t__unsafe_ptr,&__t2023t__dat__pos,&__t2023t__dat__length,&__t2023t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t753t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t2024t__unsafe_ptr,&__t2024t__dat__pos,&__t2024t__dat__length,&__t2024t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1884t(path,&__t2025t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2025t__unsafe_ptr;
  char____t_buffer____buffer__t1491t(&__t2027t__unsafe_ptr,&__t2027t__unsafe_size,&__t2027t__unsafe_offset,&__t2027t__unsafe_align);
  __t2028t=4;
  KB__t486t(__t2028t,&__t2029t__);
  __t_errcode=alloc__t515t(&__t2027t__unsafe_ptr,&__t2027t__unsafe_size,&__t2027t__unsafe_offset,&__t2027t__unsafe_align,__t2029t__,&__t2030t__unsafe_ptr,&__t2030t__unsafe_size,&__t2030t__unsafe_offset,&__t2030t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t2030t__unsafe_ptr;
  proc_buf__unsafe_size=__t2030t__unsafe_size;
  proc_buf__unsafe_offset=__t2030t__unsafe_offset;
  proc_buf__unsafe_align=__t2030t__unsafe_align;
  __t2032t=0;
  while(1){
  __t_complain=get__t1948t(&test_dir__unsafe_ptr,__t2032t,&__t2034t__unsafe_ptr,&__t2034t__dat__pos,&__t2034t__dat__length,&__t2034t__dat__first);
  __t2033t=__t_complain;
  entry__unsafe_ptr=__t2034t__unsafe_ptr;
  entry__dat__pos=__t2034t__dat__pos;
  entry__dat__length=__t2034t__dat__length;
  entry__dat__first=__t2034t__dat__first;
  __t2033t=__t2033t==0;
  __t2032t=__t2032t+1;
  if(!__t2033t){
  break;
  }
  __t_errcode=ends_with__t943t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2035t,&__t2036t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t2036t__,&__t2037t__);
  if(__t2037t__){
  continue;
  }
  __t2038t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t2038t__buf__unsafe_size=bp__buf__unsafe_size;
  __t2038t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t2038t__buf__unsafe_align=bp__buf__unsafe_align;
  __t2038t__pos=bp__pos;
  str__t667t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2039t__unsafe_ptr,&__t2039t__dat__pos,&__t2039t__dat__length,&__t2039t__dat__first);
  __t_errcode=copy_null_terminated__t762t(&__t2038t__buf__unsafe_ptr,&__t2038t__buf__unsafe_size,&__t2038t__buf__unsafe_offset,&__t2038t__buf__unsafe_align,&__t2038t__pos,__t2039t__unsafe_ptr,__t2039t__dat__pos,__t2039t__dat__length,__t2039t__dat__first,&__t2040t__unsafe_ptr,&__t2040t__dat__pos,&__t2040t__dat__length,&__t2040t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t742t(__t2040t__unsafe_ptr,__t2040t__dat__pos,__t2040t__dat__length,__t2040t__dat__first,&__t2041t__);
  __t_errcode=str__t644t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t2041t__,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2042t__unsafe_ptr;
  command__dat__pos=__t2042t__dat__pos;
  command__dat__length=__t2042t__dat__length;
  command__dat__first=__t2042t__dat__first;
  print__t786t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2006t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:exists__t442t(__t2030t__unsafe_ptr,&__t2031t____t517t__);
  if(__t2031t____t517t__){
  free__t508t(&__t2030t__unsafe_ptr);
  }
  closedir__t1883t(__t2025t__unsafe_ptr);
  exists__t442t(__t2019t__unsafe_ptr,&__t2020t____t517t__);
  if(__t2020t____t517t__){
  free__t508t(&__t2019t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2014t();return 0;}