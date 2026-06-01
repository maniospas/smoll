#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2034t=".s";
const char* const __t2015t="./tests/passing/";
const char* const __t2021t="./smoll ";
const char* const __t374t="\n";
const char* const __t366t="";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1491t(char** __t2044t, uint64_t* __t2045t, uint16_t* __t2046t, uint16_t* __t2047t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2044t=unsafe_ptr;
  *__t2045t=unsafe_size;
  *__t2046t=unsafe_offset;
  *__t2047t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2048t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2048t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t2049t) {
  char* allocated=*__t2049t;
  if(allocated){
  free(allocated);
  }
  *__t2049t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2050t) {
  int value=0;
  *__t2050t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2051t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2051t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2052t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2052t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2053t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2053t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2054t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2054t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2055t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2055t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2056t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2057t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2057t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t2058t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2058t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t2059t, uint64_t* __t2060t, uint16_t* __t2061t, uint16_t* __t2062t, uint64_t size, char** __t2063t, uint64_t* __t2064t, uint16_t* __t2065t, uint16_t* __t2066t) {
  char* buffer__unsafe_ptr=*__t2059t;
  uint64_t buffer__unsafe_size=*__t2060t;
  uint16_t buffer__unsafe_offset=*__t2061t;
  uint16_t buffer__unsafe_align=*__t2062t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2059t=buffer__unsafe_ptr;
  *__t2060t=buffer__unsafe_size;
  *__t2061t=buffer__unsafe_offset;
  *__t2062t=buffer__unsafe_align;
  *__t2063t=buffer__unsafe_ptr;
  *__t2064t=buffer__unsafe_size;
  *__t2065t=buffer__unsafe_offset;
  *__t2066t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t721t(char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t, char** __t2071t, uint64_t* __t2072t, uint16_t* __t2073t, uint16_t* __t2074t, uint64_t* __t2075t) {
  char* buf__unsafe_ptr=*__t2067t;
  uint64_t buf__unsafe_size=*__t2068t;
  uint16_t buf__unsafe_offset=*__t2069t;
  uint16_t buf__unsafe_align=*__t2070t;
  uint64_t __t722t=0;
  uint64_t __t723t=0;
  uint64_t pos=0;
  __t722t=0;
  __t723t=__t722t;
  pos=__t723t;
  goto __t_return;
  __t_return:
  *__t2067t=buf__unsafe_ptr;
  *__t2068t=buf__unsafe_size;
  *__t2069t=buf__unsafe_offset;
  *__t2070t=buf__unsafe_align;
  *__t2071t=buf__unsafe_ptr;
  *__t2072t=buf__unsafe_size;
  *__t2073t=buf__unsafe_offset;
  *__t2074t=buf__unsafe_align;
  *__t2075t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t2076t, uint64_t* __t2077t, uint16_t* __t2078t, uint16_t* __t2079t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2076t=unsafe_ptr;
  *__t2077t=unsafe_size;
  *__t2078t=unsafe_offset;
  *__t2079t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2080t) {
  *__t2080t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2081t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2081t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2082t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2082t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2083t) {
  *__t2083t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2084t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2084t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2085t) {
  char __t595t__=0;
  uint64_t __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  char* __t600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t595t__);
  if(__t595t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t596t__);
  mul__t198t(i,__t596t__,&__t597t__);
  nat__t509t(buffer__unsafe_offset,&__t598t__);
  add__t174t(__t597t__,__t598t__,&__t599t__);
  add__t507t(buffer__unsafe_ptr,__t599t__,&__t600t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2085t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2086t, uint64_t* __t2087t, uint64_t* __t2088t, char* __t2089t) {
  goto __t_return;
  __t_return:
  *__t2086t=unsafe_ptr;
  *__t2087t=dat__pos;
  *__t2088t=dat__length;
  *__t2089t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2090t, uint64_t* __t2091t, uint64_t* __t2092t, char* __t2093t) {
  char* unsafe_ptr=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  char* __t640t__unsafe_ptr=0;
  uint64_t __t640t__dat__pos=0;
  uint64_t __t640t__dat__length=0;
  char __t640t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t509t(buf__unsafe_align,&__t634t__);
  __t635t=1;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t637t__);
  __t638t=0;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t629t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t640t__unsafe_ptr,&__t640t__dat__pos,&__t640t__dat__length,&__t640t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2090t=__t640t__unsafe_ptr;
  *__t2091t=__t640t__dat__pos;
  *__t2092t=__t640t__dat__length;
  *__t2093t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2094t, uint64_t* __t2095t, uint64_t* __t2096t, char* __t2097t) {
  uint64_t __t666t=0;
  char __t667t__=0;
  char* __t668t__=0;
  char __t669t__value=0;
  char first=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t666t=0;
  neq__t143t(length,__t666t,&__t667t__);
  if(__t667t__){
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t669t__value,__t668t__,1);
  first=__t669t__value;
  }
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2094t=__t670t__unsafe_ptr;
  *__t2095t=__t670t__dat__pos;
  *__t2096t=__t670t__dat__length;
  *__t2097t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t2098t, uint64_t* __t2099t, uint64_t* __t2100t, char* __t2101t) {
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t674t__=0;
  uint64_t length=0;
  uint64_t __t675t=0;
  uint64_t __t676t__=0;
  uint64_t __t677t=0;
  char* __t678t__unsafe_ptr=0;
  uint64_t __t678t__dat__pos=0;
  uint64_t __t678t__dat__length=0;
  char __t678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  __t673t__unsafe_ptr=__t672t__unsafe_ptr;
  __t673t__unsafe_size=__t672t__unsafe_size;
  __t673t__unsafe_offset=__t672t__unsafe_offset;
  __t673t__unsafe_align=__t672t__unsafe_align;
  buf__unsafe_ptr=__t673t__unsafe_ptr;
  buf__unsafe_size=__t673t__unsafe_size;
  buf__unsafe_offset=__t673t__unsafe_offset;
  buf__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t674t__);
  buf__unsafe_ptr=__t674t__;
  if(c){
  length=strlen(c);
  }
  __t675t=1;
  add__t174t(length,__t675t,&__t676t__);
  buf__unsafe_size=__t676t__;
  __t677t=0;
  __t_errcode=str__t665t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t677t,length,&__t678t__unsafe_ptr,&__t678t__dat__pos,&__t678t__dat__length,&__t678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2098t=__t678t__unsafe_ptr;
  *__t2099t=__t678t__dat__pos;
  *__t2100t=__t678t__dat__length;
  *__t2101t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2102t) {
  goto __t_return;
  __t_return:
  *__t2102t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2103t) {
  goto __t_return;
  __t_return:
  *__t2103t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2104t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2104t=z;
}

int copy__t750t(char** __t2105t, uint64_t* __t2106t, uint16_t* __t2107t, uint16_t* __t2108t, uint64_t* __t2109t, const char* _other, char** __t2110t, uint64_t* __t2111t, uint64_t* __t2112t, char* __t2113t) {
  char* buf__unsafe_ptr=*__t2105t;
  uint64_t buf__unsafe_size=*__t2106t;
  uint16_t buf__unsafe_offset=*__t2107t;
  uint16_t buf__unsafe_align=*__t2108t;
  uint64_t pos=*__t2109t;
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__dat__pos=0;
  uint64_t __t751t__dat__length=0;
  char __t751t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t752t__=0;
  uint64_t __t753t__=0;
  uint64_t next_pos=0;
  uint64_t __t754t__=0;
  char __t755t__=0;
  uint64_t __t756t=0;
  uint64_t __t757t__=0;
  uint64_t prev_pos=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(_other,&__t751t__unsafe_ptr,&__t751t__dat__pos,&__t751t__dat__length,&__t751t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t751t__unsafe_ptr;
  other__dat__pos=__t751t__dat__pos;
  other__dat__length=__t751t__dat__length;
  other__dat__first=__t751t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t752t__);
  add__t174t(pos,__t752t__,&__t753t__);
  next_pos=__t753t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t754t__);
  gt__t275t(next_pos,__t754t__,&__t755t__);
  if(__t755t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t756t=0;
  add__t174t(pos,__t756t,&__t757t__);
  prev_pos=__t757t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2105t=buf__unsafe_ptr;
  *__t2106t=buf__unsafe_size;
  *__t2107t=buf__unsafe_offset;
  *__t2108t=buf__unsafe_align;
  *__t2109t=pos;
  *__t2110t=__t758t__unsafe_ptr;
  *__t2111t=__t758t__dat__pos;
  *__t2112t=__t758t__dat__length;
  *__t2113t=__t758t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1883t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1884t(const char* path, char** __t2114t) {
  char* unsafe_ptr=0;
  char __t1886t__=0;
  char __t1887t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t439t(unsafe_ptr,&__t1886t__);
  not__t27t(__t1886t__,&__t1887t__);
  if(__t1887t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1883t(unsafe_ptr);
  __t_return:
  *__t2114t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t483t(uint64_t x, uint64_t* __t2115t) {
  uint64_t __t484t=0;
  uint64_t __t485t__=0;
  __t484t=1024;
  mul__t198t(x,__t484t,&__t485t__);
  goto __t_return;
  __t_return:
  *__t2115t=__t485t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1895t(char** __t2116t, const char** __t2117t) {
  char* f__unsafe_ptr=*__t2116t;
  char __t1896t__=0;
  char __t1897t__=0;
  char* de=0;
  char __t1898t__=0;
  char __t1899t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t439t(f__unsafe_ptr,&__t1896t__);
  not__t27t(__t1896t__,&__t1897t__);
  if(__t1897t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t439t(de,&__t1898t__);
  not__t27t(__t1898t__,&__t1899t__);
  if(__t1899t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2116t=f__unsafe_ptr;
  *__t2117t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1900t(char** __t2118t, char** __t2119t, uint64_t* __t2120t, uint64_t* __t2121t, char* __t2122t) {
  char* f__unsafe_ptr=*__t2118t;
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
  __t_errcode=str__t671t(__t1901t__,&__t1902t__unsafe_ptr,&__t1902t__dat__pos,&__t1902t__dat__length,&__t1902t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2118t=f__unsafe_ptr;
  *__t2119t=__t1902t__unsafe_ptr;
  *__t2120t=__t1902t__dat__pos;
  *__t2121t=__t1902t__dat__length;
  *__t2122t=__t1902t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1948t(char** __t2123t, uint64_t __t_anon1, char** __t2124t, uint64_t* __t2125t, uint64_t* __t2126t, char* __t2127t) {
  char* data__unsafe_ptr=*__t2123t;
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
  *__t2123t=data__unsafe_ptr;
  *__t2124t=__t1949t__unsafe_ptr;
  *__t2125t=__t1949t__dat__pos;
  *__t2126t=__t1949t__dat__length;
  *__t2127t=__t1949t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t664t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2128t, uint64_t* __t2129t, uint64_t* __t2130t, char* __t2131t) {
  goto __t_return;
  __t_return:
  *__t2128t=other__unsafe_ptr;
  *__t2129t=other__dat__pos;
  *__t2130t=other__dat__length;
  *__t2131t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2132t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2132t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2133t) {
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
  *__t2133t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t822t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2134t) {
  uint64_t __t823t__=0;
  char* __t824t__=0;
  add__t174t(s__dat__pos,i,&__t823t__);
  add__t507t(s__unsafe_ptr,__t823t__,&__t824t__);
  goto __t_return;
  __t_return:
  *__t2134t=__t824t__;
}

int slice__t861t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2135t, uint64_t* __t2136t, uint64_t* __t2137t, char* __t2138t) {
  char* __t862t__unsafe_ptr=0;
  uint64_t __t862t__dat__pos=0;
  uint64_t __t862t__dat__length=0;
  char __t862t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t863t__=0;
  char* __t864t__unsafe_ptr=0;
  uint64_t __t864t__dat__pos=0;
  uint64_t __t864t__dat__length=0;
  char __t864t__dat__first=0;
  char __t865t__=0;
  char __t866t__=0;
  char __t867t=0;
  char __t868t__=0;
  uint64_t __t869t__=0;
  uint64_t new_length=0;
  uint64_t __t870t=0;
  char __t871t__=0;
  char new_first=0;
  char* __t872t__=0;
  char __t873t__value=0;
  uint64_t __t874t__=0;
  char* __t875t__unsafe_ptr=0;
  uint64_t __t875t__dat__pos=0;
  uint64_t __t875t__dat__length=0;
  char __t875t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t862t__unsafe_ptr,&__t862t__dat__pos,&__t862t__dat__length,&__t862t__dat__first);
  s__unsafe_ptr=__t862t__unsafe_ptr;
  s__dat__pos=__t862t__dat__pos;
  s__dat__length=__t862t__dat__length;
  s__dat__first=__t862t__dat__first;
  eq__t119t(from,to,&__t863t__);
  if(__t863t__){
  __t_errcode=str__t671t(__t366t,&__t864t__unsafe_ptr,&__t864t__dat__pos,&__t864t__dat__length,&__t864t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t275t(from,to,&__t865t__);
  if(!__t865t__){
  gt__t275t(to,s__dat__length,&__t866t__);
  __t867t=__t866t__;
  }
  else{
  __t867t=0;
  not__t27t(__t867t,&__t868t__);
  __t867t=__t868t__;
  }
  if(__t867t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t351t(to,from,&__t869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t869t__;
  __t870t=0;
  neq__t143t(from,__t870t,&__t871t__);
  if(__t871t__){
  get__t822t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t872t__);
  if(!__t872t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t873t__value,__t872t__,1);
  new_first=__t873t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t174t(s__dat__pos,from,&__t874t__);
  str__t629t(s__unsafe_ptr,__t874t__,new_length,new_first,&__t875t__unsafe_ptr,&__t875t__dat__pos,&__t875t__dat__length,&__t875t__dat__first);
  __t864t__unsafe_ptr=__t875t__unsafe_ptr;
  __t864t__dat__pos=__t875t__dat__pos;
  __t864t__dat__length=__t875t__dat__length;
  __t864t__dat__first=__t875t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2135t=__t864t__unsafe_ptr;
  *__t2136t=__t864t__dat__pos;
  *__t2137t=__t864t__dat__length;
  *__t2138t=__t864t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t683t(char x, char y, char* __t2139t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2139t=z;
}

static inline __attribute__((always_inline)) void eq__t826t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2140t) {
  uint64_t __t827t__=0;
  uint64_t n=0;
  uint64_t __t828t__=0;
  char __t829t__=0;
  char __t830t=0;
  char __t831t__=0;
  char __t832t=0;
  char z=0;
  len__t679t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t827t__);
  n=__t827t__;
  len__t679t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t828t__);
  neq__t143t(n,__t828t__,&__t829t__);
  if(__t829t__){
  __t830t=0;
  goto __t_return;
  }
  neq__t683t(x__dat__first,y__dat__first,&__t831t__);
  if(__t831t__){
  __t832t=0;
  __t830t=__t832t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t830t=z;
  goto __t_return;
  __t_return:
  *__t2140t=__t830t;
}

static inline __attribute__((always_inline)) int ends_with__t940t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2141t) {
  char* __t941t__unsafe_ptr=0;
  uint64_t __t941t__dat__pos=0;
  uint64_t __t941t__dat__length=0;
  char __t941t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t942t__unsafe_ptr=0;
  uint64_t __t942t__dat__pos=0;
  uint64_t __t942t__dat__length=0;
  char __t942t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t943t__=0;
  char __t944t=0;
  uint64_t __t945t__=0;
  uint64_t n=0;
  uint64_t __t946t__=0;
  uint64_t __t947t__=0;
  char* __t948t__unsafe_ptr=0;
  uint64_t __t948t__dat__pos=0;
  uint64_t __t948t__dat__length=0;
  char __t948t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t949t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t941t__unsafe_ptr,&__t941t__dat__pos,&__t941t__dat__length,&__t941t__dat__first);
  stack__unsafe_ptr=__t941t__unsafe_ptr;
  stack__dat__pos=__t941t__dat__pos;
  stack__dat__length=__t941t__dat__length;
  stack__dat__first=__t941t__dat__first;
  __t_errcode=str__t671t(_needle,&__t942t__unsafe_ptr,&__t942t__dat__pos,&__t942t__dat__length,&__t942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t942t__unsafe_ptr;
  needle__dat__pos=__t942t__dat__pos;
  needle__dat__length=__t942t__dat__length;
  needle__dat__first=__t942t__dat__first;
  lt__t251t(stack__dat__length,needle__dat__length,&__t943t__);
  if(__t943t__){
  __t944t=0;
  goto __t_return;
  }
  len__t679t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t945t__);
  n=__t945t__;
  len__t679t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t946t__);
  __t_errcode=sub__t351t(n,__t946t__,&__t947t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t861t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t947t__,n,&__t948t__unsafe_ptr,&__t948t__dat__pos,&__t948t__dat__length,&__t948t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t948t__unsafe_ptr;
  ret__dat__pos=__t948t__dat__pos;
  ret__dat__length=__t948t__dat__length;
  ret__dat__first=__t948t__dat__first;
  eq__t826t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t949t__);
  __t944t=__t949t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2141t=__t944t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t759t(char** __t2142t, uint64_t* __t2143t, uint16_t* __t2144t, uint16_t* __t2145t, uint64_t* __t2146t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2147t, uint64_t* __t2148t, uint64_t* __t2149t, char* __t2150t) {
  char* buf__unsafe_ptr=*__t2142t;
  uint64_t buf__unsafe_size=*__t2143t;
  uint16_t buf__unsafe_offset=*__t2144t;
  uint16_t buf__unsafe_align=*__t2145t;
  uint64_t pos=*__t2146t;
  char* __t760t__unsafe_ptr=0;
  uint64_t __t760t__dat__pos=0;
  uint64_t __t760t__dat__length=0;
  char __t760t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t761t__=0;
  uint64_t __t762t__=0;
  uint64_t null_pos=0;
  uint64_t __t763t=0;
  uint64_t __t764t__=0;
  uint64_t next_pos=0;
  uint64_t __t765t__=0;
  char __t766t__=0;
  char* endpos=0;
  uint64_t __t767t=0;
  uint64_t __t768t__=0;
  uint64_t prev_pos=0;
  char* __t769t__unsafe_ptr=0;
  uint64_t __t769t__dat__pos=0;
  uint64_t __t769t__dat__length=0;
  char __t769t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t760t__unsafe_ptr,&__t760t__dat__pos,&__t760t__dat__length,&__t760t__dat__first);
  other__unsafe_ptr=__t760t__unsafe_ptr;
  other__dat__pos=__t760t__dat__pos;
  other__dat__length=__t760t__dat__length;
  other__dat__first=__t760t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t761t__);
  add__t174t(pos,__t761t__,&__t762t__);
  null_pos=__t762t__;
  __t763t=1;
  add__t174t(null_pos,__t763t,&__t764t__);
  next_pos=__t764t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t765t__);
  gt__t275t(next_pos,__t765t__,&__t766t__);
  if(__t766t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t767t=0;
  add__t174t(pos,__t767t,&__t768t__);
  prev_pos=__t768t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t769t__unsafe_ptr,&__t769t__dat__pos,&__t769t__dat__length,&__t769t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2142t=buf__unsafe_ptr;
  *__t2143t=buf__unsafe_size;
  *__t2144t=buf__unsafe_offset;
  *__t2145t=buf__unsafe_align;
  *__t2146t=pos;
  *__t2147t=__t769t__unsafe_ptr;
  *__t2148t=__t769t__dat__pos;
  *__t2149t=__t769t__dat__length;
  *__t2150t=__t769t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t739t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2151t) {
  uint64_t __t740t__=0;
  add__t174t(s__dat__pos,s__dat__length,&__t740t__);
  goto __t_return;
  __t_return:
  *__t2151t=__t740t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2152t) {
  int value=0;
  *__t2152t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2153t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2153t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t641t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2154t, uint64_t* __t2155t, uint64_t* __t2156t, char* __t2157t) {
  int __t642t=0;
  int __t643t=0;
  int __t644t__=0;
  uint64_t __t645t__=0;
  char __t646t__=0;
  uint64_t __t647t=0;
  uint64_t __t648t=0;
  char* __t649t__=0;
  char __t650t__value=0;
  char* __t651t__unsafe_ptr=0;
  uint64_t __t651t__dat__pos=0;
  uint64_t __t651t__dat__length=0;
  char __t651t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t38t(__t643t,&__t644t__);
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t645t__);
  gt__t275t(length,__t645t__,&__t646t__);
  if(__t646t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t647t=0;
  __t648t=0;
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t648t,&__t649t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t649t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t650t__value,__t649t__,1);
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t647t,length,__t650t__value,&__t651t__unsafe_ptr,&__t651t__dat__pos,&__t651t__dat__length,&__t651t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2154t=__t651t__unsafe_ptr;
  *__t2155t=__t651t__dat__pos;
  *__t2156t=__t651t__dat__length;
  *__t2157t=__t651t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t702t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2158t, uint64_t* __t2159t, uint64_t* __t2160t, char* __t2161t) {
  char* __t703t__unsafe_ptr=0;
  uint64_t __t703t__unsafe_size=0;
  uint16_t __t703t__unsafe_offset=0;
  uint16_t __t703t__unsafe_align=0;
  char* __t704t__unsafe_ptr=0;
  uint64_t __t704t__unsafe_size=0;
  uint16_t __t704t__unsafe_offset=0;
  uint16_t __t704t__unsafe_align=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t __t707t__=0;
  char* __t708t__unsafe_ptr=0;
  uint64_t __t708t__unsafe_size=0;
  uint16_t __t708t__unsafe_offset=0;
  uint16_t __t708t__unsafe_align=0;
  char __t709t____t514t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t710t=0;
  char* __t711t__unsafe_ptr=0;
  uint64_t __t711t__dat__pos=0;
  uint64_t __t711t__dat__length=0;
  char __t711t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t703t__unsafe_ptr,&__t703t__unsafe_size,&__t703t__unsafe_offset,&__t703t__unsafe_align);
  __t704t__unsafe_ptr=__t703t__unsafe_ptr;
  __t704t__unsafe_size=__t703t__unsafe_size;
  __t704t__unsafe_offset=__t703t__unsafe_offset;
  __t704t__unsafe_align=__t703t__unsafe_align;
  __t705t=1;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t706t__);
  add__t174t(__t705t,__t706t__,&__t707t__);
  __t_errcode=alloc__t512t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align,__t707t__,&__t708t__unsafe_ptr,&__t708t__unsafe_size,&__t708t__unsafe_offset,&__t708t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t708t__unsafe_ptr;
  buf__unsafe_size=__t708t__unsafe_size;
  buf__unsafe_offset=__t708t__unsafe_offset;
  buf__unsafe_align=__t708t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t710t=0;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t710t,other__dat__length,other__dat__first,&__t711t__unsafe_ptr,&__t711t__dat__pos,&__t711t__dat__length,&__t711t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t439t(__t711t__unsafe_ptr,&__t709t____t514t__);
  if(__t709t____t514t__){
  free__t505t(&__t711t__unsafe_ptr);
  }
  __t_return:
  *__t2158t=__t711t__unsafe_ptr;
  *__t2159t=__t711t__dat__pos;
  *__t2160t=__t711t__dat__length;
  *__t2161t=__t711t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t712t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2162t, char** __t2163t, uint64_t* __t2164t, uint64_t* __t2165t, char* __t2166t) {
  char* __t713t__unsafe_ptr=0;
  uint64_t __t713t__dat__pos=0;
  uint64_t __t713t__dat__length=0;
  char __t713t__dat__first=0;
  char __t714t____t709t____t514t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t715t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t702t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t713t__unsafe_ptr,&__t713t__dat__pos,&__t713t__dat__length,&__t713t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t713t__unsafe_ptr;
  str__dat__pos=__t713t__dat__pos;
  str__dat__length=__t713t__dat__length;
  str__dat__first=__t713t__dat__first;
  add__t507t(str__unsafe_ptr,str__dat__pos,&__t715t__);
  _ret=__t715t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t439t(str__unsafe_ptr,&__t714t____t709t____t514t__);
  if(__t714t____t709t____t514t__){
  free__t505t(&str__unsafe_ptr);
  }
  __t_return:
  *__t2162t=cstr;
  *__t2163t=str__unsafe_ptr;
  *__t2164t=str__dat__pos;
  *__t2165t=str__dat__length;
  *__t2166t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t719t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2167t) {
  goto __t_return;
  __t_return:
  *__t2167t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1473t(const char* cmd, char** __t2168t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2168t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1472t(char* unsafe_ptr, int64_t* __t2169t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2169t=status;
}

static inline __attribute__((always_inline)) void int__t419t(uint64_t x, int64_t* __t2170t) {
  int __t420t=0;
  int __t421t=0;
  int __t422t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2170t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2171t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2171t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2172t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2172t=z;
}

static inline __attribute__((always_inline)) int read__t1474t(const char* cmd, char** __t2173t) {
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
  exists__t439t(unsafe_ptr,&__t1476t__);
  not__t27t(__t1476t__,&__t1477t__);
  if(__t1477t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t439t(unsafe_ptr,&__t1478t__);
  if(__t1478t__){
  pclose__t1472t(unsafe_ptr,&__t1479t__);
  status=__t1479t__;
  unsafe_ptr=0;
  __t1480t=0;
  int__t419t(__t1480t,&__t1481t__);
  neq__t132t(status,__t1481t__,&__t1482t__);
  if(__t1482t__){
  __t_complain=36;
  __t1483t=__t1483t==0;
  }
  }
  __t_return:
  *__t2173t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1485t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2174t) {
  const char* __t1486t__cstr=0;
  char* __t1486t__str__unsafe_ptr=0;
  uint64_t __t1486t__str__dat__pos=0;
  uint64_t __t1486t__str__dat__length=0;
  char __t1486t__str__dat__first=0;
  char __t1487t____t714t____t709t____t514t__=0;
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
  __t_errcode=unsafe_temp__t712t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1486t__cstr,&__t1486t__str__unsafe_ptr,&__t1486t__str__dat__pos,&__t1486t__str__dat__length,&__t1486t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t719t(__t1486t__cstr,__t1486t__str__unsafe_ptr,__t1486t__str__dat__pos,__t1486t__str__dat__length,__t1486t__str__dat__first,&__t1488t__);
  __t_errcode=read__t1474t(__t1488t__,&__t1489t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t439t(__t1489t__unsafe_ptr,&__t1490t____t1478t__);
  if(__t1490t____t1478t__){
  pclose__t1472t(__t1489t__unsafe_ptr,&__t1490t____t1479t__);
  __t1490t__status=__t1490t____t1479t__;
  __t1489t__unsafe_ptr=0;
  __t1490t____t1480t=0;
  int__t419t(__t1490t____t1480t,&__t1490t____t1481t__);
  neq__t132t(__t1490t__status,__t1490t____t1481t__,&__t1490t____t1482t__);
  if(__t1490t____t1482t__){
  __t_complain=36;
  __t1490t____t1483t=__t1490t____t1483t==0;
  }
  }
  __t_return:
  *__t2174t=__t1489t__unsafe_ptr;
  exists__t439t(__t1486t__str__unsafe_ptr,&__t1487t____t714t____t709t____t514t__);
  if(__t1487t____t714t____t709t____t514t__){
  free__t505t(&__t1486t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1466t(int64_t value, const char** __t2175t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2175t=ret;
}

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
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
  exists__t439t(__t2007t__unsafe_ptr,&__t2008t____t1490t____t1478t__);
  if(__t2008t____t1490t____t1478t__){
  pclose__t1472t(__t2007t__unsafe_ptr,&__t2008t____t1490t____t1479t__);
  __t2008t____t1490t__status=__t2008t____t1490t____t1479t__;
  __t2007t__unsafe_ptr=0;
  __t2008t____t1490t____t1480t=0;
  int__t419t(__t2008t____t1490t____t1480t,&__t2008t____t1490t____t1481t__);
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
  print__t372t(__t2012t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2014t() {
  const char* path=0;
  char* __t2016t__unsafe_ptr=0;
  uint64_t __t2016t__unsafe_size=0;
  uint16_t __t2016t__unsafe_offset=0;
  uint16_t __t2016t__unsafe_align=0;
  uint64_t __t2017t=0;
  char* __t2018t__unsafe_ptr=0;
  uint64_t __t2018t__unsafe_size=0;
  uint16_t __t2018t__unsafe_offset=0;
  uint16_t __t2018t__unsafe_align=0;
  char __t2019t____t514t__=0;
  char* __t2020t__buf__unsafe_ptr=0;
  uint64_t __t2020t__buf__unsafe_size=0;
  uint16_t __t2020t__buf__unsafe_offset=0;
  uint16_t __t2020t__buf__unsafe_align=0;
  uint64_t __t2020t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t2022t__unsafe_ptr=0;
  uint64_t __t2022t__dat__pos=0;
  uint64_t __t2022t__dat__length=0;
  char __t2022t__dat__first=0;
  char* __t2023t__unsafe_ptr=0;
  uint64_t __t2023t__dat__pos=0;
  uint64_t __t2023t__dat__length=0;
  char __t2023t__dat__first=0;
  char* __t2024t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t2026t__unsafe_ptr=0;
  uint64_t __t2026t__unsafe_size=0;
  uint16_t __t2026t__unsafe_offset=0;
  uint16_t __t2026t__unsafe_align=0;
  uint64_t __t2027t=0;
  uint64_t __t2028t__=0;
  char* __t2029t__unsafe_ptr=0;
  uint64_t __t2029t__unsafe_size=0;
  uint16_t __t2029t__unsafe_offset=0;
  uint16_t __t2029t__unsafe_align=0;
  char __t2030t____t514t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t2031t=0;
  char __t2032t=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__dat__pos=0;
  uint64_t __t2033t__dat__length=0;
  char __t2033t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2035t__=0;
  char __t2036t__=0;
  char* __t2037t__buf__unsafe_ptr=0;
  uint64_t __t2037t__buf__unsafe_size=0;
  uint16_t __t2037t__buf__unsafe_offset=0;
  uint16_t __t2037t__buf__unsafe_align=0;
  uint64_t __t2037t__pos=0;
  char* __t2038t__unsafe_ptr=0;
  uint64_t __t2038t__dat__pos=0;
  uint64_t __t2038t__dat__length=0;
  char __t2038t__dat__first=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__dat__pos=0;
  uint64_t __t2039t__dat__length=0;
  char __t2039t__dat__first=0;
  uint64_t __t2040t__=0;
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__dat__pos=0;
  uint64_t __t2041t__dat__length=0;
  char __t2041t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t2015t;
  char____t_buffer____buffer__t1491t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align);
  __t2017t=256;
  __t_errcode=alloc__t512t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2017t,&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t721t(&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align,&__t2020t__buf__unsafe_ptr,&__t2020t__buf__unsafe_size,&__t2020t__buf__unsafe_offset,&__t2020t__buf__unsafe_align,&__t2020t__pos);
  bp__buf__unsafe_ptr=__t2020t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t2020t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t2020t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t2020t__buf__unsafe_align;
  bp__pos=__t2020t__pos;
  __t_errcode=copy__t750t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t2021t,&__t2022t__unsafe_ptr,&__t2022t__dat__pos,&__t2022t__dat__length,&__t2022t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t750t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t2023t__unsafe_ptr,&__t2023t__dat__pos,&__t2023t__dat__length,&__t2023t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1884t(path,&__t2024t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2024t__unsafe_ptr;
  char____t_buffer____buffer__t1491t(&__t2026t__unsafe_ptr,&__t2026t__unsafe_size,&__t2026t__unsafe_offset,&__t2026t__unsafe_align);
  __t2027t=4;
  KB__t483t(__t2027t,&__t2028t__);
  __t_errcode=alloc__t512t(&__t2026t__unsafe_ptr,&__t2026t__unsafe_size,&__t2026t__unsafe_offset,&__t2026t__unsafe_align,__t2028t__,&__t2029t__unsafe_ptr,&__t2029t__unsafe_size,&__t2029t__unsafe_offset,&__t2029t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t2029t__unsafe_ptr;
  proc_buf__unsafe_size=__t2029t__unsafe_size;
  proc_buf__unsafe_offset=__t2029t__unsafe_offset;
  proc_buf__unsafe_align=__t2029t__unsafe_align;
  __t2031t=0;
  while(1){
  __t_complain=get__t1948t(&test_dir__unsafe_ptr,__t2031t,&__t2033t__unsafe_ptr,&__t2033t__dat__pos,&__t2033t__dat__length,&__t2033t__dat__first);
  __t2032t=__t_complain;
  entry__unsafe_ptr=__t2033t__unsafe_ptr;
  entry__dat__pos=__t2033t__dat__pos;
  entry__dat__length=__t2033t__dat__length;
  entry__dat__first=__t2033t__dat__first;
  __t2032t=__t2032t==0;
  __t2031t=__t2031t+1;
  if(!__t2032t){
  break;
  }
  __t_errcode=ends_with__t940t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2034t,&__t2035t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t2035t__,&__t2036t__);
  if(__t2036t__){
  continue;
  }
  __t2037t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t2037t__buf__unsafe_size=bp__buf__unsafe_size;
  __t2037t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t2037t__buf__unsafe_align=bp__buf__unsafe_align;
  __t2037t__pos=bp__pos;
  str__t664t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2038t__unsafe_ptr,&__t2038t__dat__pos,&__t2038t__dat__length,&__t2038t__dat__first);
  __t_errcode=copy_null_terminated__t759t(&__t2037t__buf__unsafe_ptr,&__t2037t__buf__unsafe_size,&__t2037t__buf__unsafe_offset,&__t2037t__buf__unsafe_align,&__t2037t__pos,__t2038t__unsafe_ptr,__t2038t__dat__pos,__t2038t__dat__length,__t2038t__dat__first,&__t2039t__unsafe_ptr,&__t2039t__dat__pos,&__t2039t__dat__length,&__t2039t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t739t(__t2039t__unsafe_ptr,__t2039t__dat__pos,__t2039t__dat__length,__t2039t__dat__first,&__t2040t__);
  __t_errcode=str__t641t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t2040t__,&__t2041t__unsafe_ptr,&__t2041t__dat__pos,&__t2041t__dat__length,&__t2041t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2041t__unsafe_ptr;
  command__dat__pos=__t2041t__dat__pos;
  command__dat__length=__t2041t__dat__length;
  command__dat__first=__t2041t__dat__first;
  print__t783t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2006t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:exists__t439t(__t2029t__unsafe_ptr,&__t2030t____t514t__);
  if(__t2030t____t514t__){
  free__t505t(&__t2029t__unsafe_ptr);
  }
  closedir__t1883t(__t2024t__unsafe_ptr);
  exists__t439t(__t2018t__unsafe_ptr,&__t2019t____t514t__);
  if(__t2019t____t514t__){
  free__t505t(&__t2018t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2014t();return 0;}