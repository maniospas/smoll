#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2041t="hello";
const char* const __t2047t=" ";
const char* const __t2049t="world";
const char* const __t2051t="!";
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2060t, uint64_t* __t2061t, uint16_t* __t2062t, uint16_t* __t2063t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2060t=unsafe_ptr;
  *__t2061t=unsafe_size;
  *__t2062t=unsafe_offset;
  *__t2063t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2064t) {
  *__t2064t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2065t) {
  int value=0;
  *__t2065t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2066t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2066t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2067t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2067t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2068t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2068t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2069t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2069t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2070t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2070t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2071t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2071t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2072t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2072t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2073t) {
  *__t2073t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2074t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2074t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2075t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2075t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2076t, uint64_t* __t2077t, uint64_t* __t2078t, char* __t2079t) {
  goto __t_return;
  __t_return:
  *__t2076t=unsafe_ptr;
  *__t2077t=dat__pos;
  *__t2078t=dat__length;
  *__t2079t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2080t, uint64_t* __t2081t, uint64_t* __t2082t, char* __t2083t) {
  char* unsafe_ptr=0;
  uint64_t __t946t__=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t=0;
  char __t951t__=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__dat__pos=0;
  uint64_t __t952t__dat__length=0;
  char __t952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t946t__);
  __t947t=1;
  neq__t144t(__t946t__,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t949t__);
  __t950t=0;
  neq__t144t(__t949t__,__t950t,&__t951t__);
  if(__t951t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t941t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t952t__unsafe_ptr,&__t952t__dat__pos,&__t952t__dat__length,&__t952t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2080t=__t952t__unsafe_ptr;
  *__t2081t=__t952t__dat__pos;
  *__t2082t=__t952t__dat__length;
  *__t2083t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2084t, uint64_t* __t2085t, uint64_t* __t2086t, char* __t2087t) {
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__=0;
  char __t981t__value=0;
  char first=0;
  char* __t982t__unsafe_ptr=0;
  uint64_t __t982t__dat__pos=0;
  uint64_t __t982t__dat__length=0;
  char __t982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t978t=0;
  neq__t144t(length,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t980t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t980t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t981t__value,__t980t__,1);
  first=__t981t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t982t__unsafe_ptr,&__t982t__dat__pos,&__t982t__dat__length,&__t982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2084t=__t982t__unsafe_ptr;
  *__t2085t=__t982t__dat__pos;
  *__t2086t=__t982t__dat__length;
  *__t2087t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2088t, uint64_t* __t2089t, uint64_t* __t2090t, char* __t2091t) {
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__unsafe_size=0;
  uint16_t __t998t__unsafe_offset=0;
  uint16_t __t998t__unsafe_align=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__unsafe_size=0;
  uint16_t __t999t__unsafe_offset=0;
  uint16_t __t999t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1000t__=0;
  uint64_t length=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t__=0;
  uint64_t __t1003t=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t998t__unsafe_ptr,&__t998t__unsafe_size,&__t998t__unsafe_offset,&__t998t__unsafe_align);
  __t999t__unsafe_ptr=__t998t__unsafe_ptr;
  __t999t__unsafe_size=__t998t__unsafe_size;
  __t999t__unsafe_offset=__t998t__unsafe_offset;
  __t999t__unsafe_align=__t998t__unsafe_align;
  buf__unsafe_ptr=__t999t__unsafe_ptr;
  buf__unsafe_size=__t999t__unsafe_size;
  buf__unsafe_offset=__t999t__unsafe_offset;
  buf__unsafe_align=__t999t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1000t__);
  buf__unsafe_ptr=__t1000t__;
  if(c){
  length=strlen(c);
  }
  __t1001t=1;
  add__t175t(length,__t1001t,&__t1002t__);
  buf__unsafe_size=__t1002t__;
  __t1003t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,length,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2088t=__t1005t__unsafe_ptr;
  *__t2089t=__t1005t__dat__pos;
  *__t2090t=__t1005t__dat__length;
  *__t2091t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__ptr__nat__nat__char____buffer__t2045t(char** __t2092t, uint64_t* __t2093t, uint16_t* __t2094t, uint16_t* __t2095t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2092t=unsafe_ptr;
  *__t2093t=unsafe_size;
  *__t2094t=unsafe_offset;
  *__t2095t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2096t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2097t) {
  char* allocated=*__t2097t;
  if(allocated){
  free(allocated);
  }
  *__t2097t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2098t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2098t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2099t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2099t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2100t) {
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
  *__t2100t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2101t, uint64_t* __t2102t, uint16_t* __t2103t, uint16_t* __t2104t, uint64_t size, char** __t2105t, uint64_t* __t2106t, uint16_t* __t2107t, uint16_t* __t2108t) {
  char* buffer__unsafe_ptr=*__t2101t;
  uint64_t buffer__unsafe_size=*__t2102t;
  uint16_t buffer__unsafe_offset=*__t2103t;
  uint16_t buffer__unsafe_align=*__t2104t;
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
  *__t2101t=buffer__unsafe_ptr;
  *__t2102t=buffer__unsafe_size;
  *__t2103t=buffer__unsafe_offset;
  *__t2104t=buffer__unsafe_align;
  *__t2105t=buffer__unsafe_ptr;
  *__t2106t=buffer__unsafe_size;
  *__t2107t=buffer__unsafe_offset;
  *__t2108t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2023t(char** __t2109t, uint64_t* __t2110t, uint16_t* __t2111t, uint16_t* __t2112t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2109t=unsafe_ptr;
  *__t2110t=unsafe_size;
  *__t2111t=unsafe_offset;
  *__t2112t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2113t) {
  goto __t_return;
  __t_return:
  *__t2113t=s__dat__length;
}

static inline __attribute__((always_inline)) void total_length__t2013t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, uint64_t* __t2114t) {
  uint64_t __t2014t=0;
  uint64_t __t2015t=0;
  uint64_t size=0;
  uint64_t __t2016t=0;
  char __t2017t=0;
  char* __t2018t__=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__dat__pos=0;
  uint64_t __t2019t__dat__length=0;
  char __t2019t__dat__first=0;
  char* counter_part__unsafe_ptr=0;
  uint64_t counter_part__dat__pos=0;
  uint64_t counter_part__dat__length=0;
  char counter_part__dat__first=0;
  uint64_t __t2020t__=0;
  uint64_t __t2021t__=0;
  int __t_complain=0;
  __t2014t=0;
  __t2015t=__t2014t;
  size=__t2015t;
  __t2016t=0;
  while(1){
  __t_complain=get__t798t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t2016t,&__t2018t__);
  __t2017t=__t_complain;
  if(!__t2018t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2019t__unsafe_ptr,__t2018t__,8);
  memcpy(&__t2019t__dat__pos,__t2018t__+8,8);
  memcpy(&__t2019t__dat__length,__t2018t__+16,8);
  memcpy(&__t2019t__dat__first,__t2018t__+24,1);
  }
  counter_part__unsafe_ptr=__t2019t__unsafe_ptr;
  counter_part__dat__pos=__t2019t__dat__pos;
  counter_part__dat__length=__t2019t__dat__length;
  counter_part__dat__first=__t2019t__dat__first;
  __t2017t=__t2017t==0;
  __t2016t=__t2016t+1;
  if(!__t2017t){
  break;
  }
  len__t1006t(counter_part__unsafe_ptr,counter_part__dat__pos,counter_part__dat__length,counter_part__dat__first,&__t2020t__);
  add__t175t(size,__t2020t__,&__t2021t__);
  size=__t2021t__;
  }
  goto __t_return;
  __t_return:
  *__t2114t=size;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2115t, uint64_t* __t2116t, uint16_t* __t2117t, uint16_t* __t2118t, uint64_t _pos, char** __t2119t, uint64_t* __t2120t, uint16_t* __t2121t, uint16_t* __t2122t, uint64_t* __t2123t) {
  char* buf__unsafe_ptr=*__t2115t;
  uint64_t buf__unsafe_size=*__t2116t;
  uint16_t buf__unsafe_offset=*__t2117t;
  uint16_t buf__unsafe_align=*__t2118t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2115t=buf__unsafe_ptr;
  *__t2116t=buf__unsafe_size;
  *__t2117t=buf__unsafe_offset;
  *__t2118t=buf__unsafe_align;
  *__t2119t=buf__unsafe_ptr;
  *__t2120t=buf__unsafe_size;
  *__t2121t=buf__unsafe_offset;
  *__t2122t=buf__unsafe_align;
  *__t2123t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2124t, uint64_t* __t2125t, uint16_t* __t2126t, uint16_t* __t2127t, char** __t2128t, uint64_t* __t2129t, uint16_t* __t2130t, uint16_t* __t2131t, uint64_t* __t2132t) {
  char* buf__unsafe_ptr=*__t2124t;
  uint64_t buf__unsafe_size=*__t2125t;
  uint16_t buf__unsafe_offset=*__t2126t;
  uint16_t buf__unsafe_align=*__t2127t;
  uint64_t __t814t=0;
  char* __t815t__buf__unsafe_ptr=0;
  uint64_t __t815t__buf__unsafe_size=0;
  uint16_t __t815t__buf__unsafe_offset=0;
  uint16_t __t815t__buf__unsafe_align=0;
  uint64_t __t815t__pos=0;
  __t814t=0;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t814t,&__t815t__buf__unsafe_ptr,&__t815t__buf__unsafe_size,&__t815t__buf__unsafe_offset,&__t815t__buf__unsafe_align,&__t815t__pos);
  goto __t_return;
  __t_return:
  *__t2124t=buf__unsafe_ptr;
  *__t2125t=buf__unsafe_size;
  *__t2126t=buf__unsafe_offset;
  *__t2127t=buf__unsafe_align;
  *__t2128t=__t815t__buf__unsafe_ptr;
  *__t2129t=__t815t__buf__unsafe_size;
  *__t2130t=__t815t__buf__unsafe_offset;
  *__t2131t=__t815t__buf__unsafe_align;
  *__t2132t=__t815t__pos;
}

static inline __attribute__((always_inline)) void str__t976t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2133t, uint64_t* __t2134t, uint64_t* __t2135t, char* __t2136t) {
  goto __t_return;
  __t_return:
  *__t2133t=other__unsafe_ptr;
  *__t2134t=other__dat__pos;
  *__t2135t=other__dat__length;
  *__t2136t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2137t) {
  goto __t_return;
  __t_return:
  *__t2137t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2138t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2138t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2139t, uint64_t* __t2140t, uint16_t* __t2141t, uint16_t* __t2142t, uint64_t pos, char** __t2143t, uint64_t* __t2144t, uint16_t* __t2145t, uint16_t* __t2146t, uint64_t* __t2147t) {
  char* buf__unsafe_ptr=*__t2139t;
  uint64_t buf__unsafe_size=*__t2140t;
  uint16_t buf__unsafe_offset=*__t2141t;
  uint16_t buf__unsafe_align=*__t2142t;
  goto __t_return;
  __t_return:
  *__t2139t=buf__unsafe_ptr;
  *__t2140t=buf__unsafe_size;
  *__t2141t=buf__unsafe_offset;
  *__t2142t=buf__unsafe_align;
  *__t2143t=buf__unsafe_ptr;
  *__t2144t=buf__unsafe_size;
  *__t2145t=buf__unsafe_offset;
  *__t2146t=buf__unsafe_align;
  *__t2147t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2148t, uint64_t* __t2149t, uint16_t* __t2150t, uint16_t* __t2151t, uint64_t* __t2152t, uint64_t length, char** __t2153t, uint64_t* __t2154t, uint16_t* __t2155t, uint16_t* __t2156t, uint64_t* __t2157t) {
  char* allocator__buf__unsafe_ptr=*__t2148t;
  uint64_t allocator__buf__unsafe_size=*__t2149t;
  uint16_t allocator__buf__unsafe_offset=*__t2150t;
  uint16_t allocator__buf__unsafe_align=*__t2151t;
  uint64_t allocator__pos=*__t2152t;
  int __t844t=0;
  uint64_t __t845t__=0;
  uint64_t next_pos=0;
  uint64_t __t846t__=0;
  char __t847t__=0;
  uint64_t __t848t=0;
  uint64_t __t849t__=0;
  uint64_t pos=0;
  char* __t850t__buf__unsafe_ptr=0;
  uint64_t __t850t__buf__unsafe_size=0;
  uint16_t __t850t__buf__unsafe_offset=0;
  uint16_t __t850t__buf__unsafe_align=0;
  uint64_t __t850t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t845t__);
  next_pos=__t845t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t846t__);
  gt__t276t(next_pos,__t846t__,&__t847t__);
  if(__t847t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t848t=0;
  add__t175t(allocator__pos,__t848t,&__t849t__);
  pos=__t849t__;
  allocator__pos=next_pos;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t850t__buf__unsafe_ptr,&__t850t__buf__unsafe_size,&__t850t__buf__unsafe_offset,&__t850t__buf__unsafe_align,&__t850t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2148t=allocator__buf__unsafe_ptr;
  *__t2149t=allocator__buf__unsafe_size;
  *__t2150t=allocator__buf__unsafe_offset;
  *__t2151t=allocator__buf__unsafe_align;
  *__t2152t=allocator__pos;
  *__t2153t=__t850t__buf__unsafe_ptr;
  *__t2154t=__t850t__buf__unsafe_size;
  *__t2155t=__t850t__buf__unsafe_offset;
  *__t2156t=__t850t__buf__unsafe_align;
  *__t2157t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1023t(char** __t2158t, uint64_t* __t2159t, uint16_t* __t2160t, uint16_t* __t2161t, uint64_t* __t2162t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2163t, uint64_t* __t2164t, uint64_t* __t2165t, char* __t2166t) {
  char* CHARS__buf__unsafe_ptr=*__t2158t;
  uint64_t CHARS__buf__unsafe_size=*__t2159t;
  uint16_t CHARS__buf__unsafe_offset=*__t2160t;
  uint16_t CHARS__buf__unsafe_align=*__t2161t;
  uint64_t CHARS__pos=*__t2162t;
  char* __t1024t__unsafe_ptr=0;
  uint64_t __t1024t__dat__pos=0;
  uint64_t __t1024t__dat__length=0;
  char __t1024t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1025t__=0;
  char* __t1026t__buf__unsafe_ptr=0;
  uint64_t __t1026t__buf__unsafe_size=0;
  uint16_t __t1026t__buf__unsafe_offset=0;
  uint16_t __t1026t__buf__unsafe_align=0;
  uint64_t __t1026t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__dat__pos=0;
  uint64_t __t1027t__dat__length=0;
  char __t1027t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t976t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1024t__unsafe_ptr,&__t1024t__dat__pos,&__t1024t__dat__length,&__t1024t__dat__first);
  other__unsafe_ptr=__t1024t__unsafe_ptr;
  other__dat__pos=__t1024t__dat__pos;
  other__dat__length=__t1024t__dat__length;
  other__dat__first=__t1024t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1025t__);
  __t_errcode=alloc__t843t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1025t__,&__t1026t__buf__unsafe_ptr,&__t1026t__buf__unsafe_size,&__t1026t__buf__unsafe_offset,&__t1026t__buf__unsafe_align,&__t1026t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1026t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1026t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1026t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1026t__buf__unsafe_align;
  surface__pos=__t1026t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1027t__unsafe_ptr,&__t1027t__dat__pos,&__t1027t__dat__length,&__t1027t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2158t=CHARS__buf__unsafe_ptr;
  *__t2159t=CHARS__buf__unsafe_size;
  *__t2160t=CHARS__buf__unsafe_offset;
  *__t2161t=CHARS__buf__unsafe_align;
  *__t2162t=CHARS__pos;
  *__t2163t=__t1027t__unsafe_ptr;
  *__t2164t=__t1027t__dat__pos;
  *__t2165t=__t1027t__dat__length;
  *__t2166t=__t1027t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t818t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2167t, uint64_t* __t2168t, uint16_t* __t2169t, uint16_t* __t2170t, uint64_t* __t2171t) {
  char* __t819t__unsafe_ptr=0;
  uint64_t __t819t__unsafe_size=0;
  uint16_t __t819t__unsafe_offset=0;
  uint16_t __t819t__unsafe_align=0;
  uint64_t __t820t=0;
  __t819t__unsafe_ptr=self__buf__unsafe_ptr;
  __t819t__unsafe_size=self__buf__unsafe_size;
  __t819t__unsafe_offset=self__buf__unsafe_offset;
  __t819t__unsafe_align=self__buf__unsafe_align;
  __t820t=self__pos;
  goto __t_return;
  __t_return:
  *__t2167t=__t819t__unsafe_ptr;
  *__t2168t=__t819t__unsafe_size;
  *__t2169t=__t819t__unsafe_offset;
  *__t2170t=__t819t__unsafe_align;
  *__t2171t=__t820t;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2172t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2172t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2173t) {
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
  *__t2173t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t993t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2174t, uint64_t* __t2175t, uint64_t* __t2176t, char* __t2177t) {
  uint64_t __t995t__=0;
  char* __t996t__unsafe_ptr=0;
  uint64_t __t996t__dat__pos=0;
  uint64_t __t996t__dat__length=0;
  char __t996t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t995t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t995t__,&__t996t__unsafe_ptr,&__t996t__dat__pos,&__t996t__dat__length,&__t996t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2174t=__t996t__unsafe_ptr;
  *__t2175t=__t996t__dat__pos;
  *__t2176t=__t996t__dat__length;
  *__t2177t=__t996t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t2022t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, char** __t2178t, uint64_t* __t2179t, uint64_t* __t2180t, char* __t2181t) {
  char* __t2025t__unsafe_ptr=0;
  uint64_t __t2025t__unsafe_size=0;
  uint16_t __t2025t__unsafe_offset=0;
  uint16_t __t2025t__unsafe_align=0;
  uint64_t __t2026t__=0;
  char* __t2027t__unsafe_ptr=0;
  uint64_t __t2027t__unsafe_size=0;
  uint16_t __t2027t__unsafe_offset=0;
  uint16_t __t2027t__unsafe_align=0;
  char __t2028t____t692t__=0;
  char* __t2029t__buf__unsafe_ptr=0;
  uint64_t __t2029t__buf__unsafe_size=0;
  uint16_t __t2029t__buf__unsafe_offset=0;
  uint16_t __t2029t__buf__unsafe_align=0;
  uint64_t __t2029t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t __t2030t=0;
  char __t2031t=0;
  char* __t2032t__=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__dat__pos=0;
  uint64_t __t2033t__dat__length=0;
  char __t2033t__dat__first=0;
  char* part__unsafe_ptr=0;
  uint64_t part__dat__pos=0;
  uint64_t part__dat__length=0;
  char part__dat__first=0;
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__dat__pos=0;
  uint64_t __t2034t__dat__length=0;
  char __t2034t__dat__first=0;
  char* __t2035t__t819t__unsafe_ptr=0;
  uint64_t __t2035t__t819t__unsafe_size=0;
  uint16_t __t2035t__t819t__unsafe_offset=0;
  uint16_t __t2035t__t819t__unsafe_align=0;
  uint64_t __t2035t__t820t=0;
  uint64_t __t2037t=0;
  char* __t2038t__unsafe_ptr=0;
  uint64_t __t2038t__dat__pos=0;
  uint64_t __t2038t__dat__length=0;
  char __t2038t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2023t(&__t2025t__unsafe_ptr,&__t2025t__unsafe_size,&__t2025t__unsafe_offset,&__t2025t__unsafe_align);
  total_length__t2013t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,&__t2026t__);
  __t_errcode=alloc__t690t(&__t2025t__unsafe_ptr,&__t2025t__unsafe_size,&__t2025t__unsafe_offset,&__t2025t__unsafe_align,__t2026t__,&__t2027t__unsafe_ptr,&__t2027t__unsafe_size,&__t2027t__unsafe_offset,&__t2027t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2027t__unsafe_ptr,&__t2027t__unsafe_size,&__t2027t__unsafe_offset,&__t2027t__unsafe_align,&__t2029t__buf__unsafe_ptr,&__t2029t__buf__unsafe_size,&__t2029t__buf__unsafe_offset,&__t2029t__buf__unsafe_align,&__t2029t__pos);
  CHARS__buf__unsafe_ptr=__t2029t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2029t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2029t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2029t__buf__unsafe_align;
  CHARS__pos=__t2029t__pos;
  __t2030t=0;
  while(1){
  __t_complain=get__t798t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t2030t,&__t2032t__);
  __t2031t=__t_complain;
  if(!__t2032t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2033t__unsafe_ptr,__t2032t__,8);
  memcpy(&__t2033t__dat__pos,__t2032t__+8,8);
  memcpy(&__t2033t__dat__length,__t2032t__+16,8);
  memcpy(&__t2033t__dat__first,__t2032t__+24,1);
  }
  part__unsafe_ptr=__t2033t__unsafe_ptr;
  part__dat__pos=__t2033t__dat__pos;
  part__dat__length=__t2033t__dat__length;
  part__dat__first=__t2033t__dat__first;
  __t2031t=__t2031t==0;
  __t2030t=__t2030t+1;
  if(!__t2031t){
  break;
  }
  __t_errcode=copy__t1023t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,part__unsafe_ptr,part__dat__pos,part__dat__length,part__dat__first,&__t2034t__unsafe_ptr,&__t2034t__dat__pos,&__t2034t__dat__length,&__t2034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  status__t818t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t2035t__t819t__unsafe_ptr,&__t2035t__t819t__unsafe_size,&__t2035t__t819t__unsafe_offset,&__t2035t__t819t__unsafe_align,&__t2035t__t820t);
  __t2037t=0;
  __t_errcode=str__t993t(__t2035t__t819t__unsafe_ptr,__t2035t__t819t__unsafe_size,__t2035t__t819t__unsafe_offset,__t2035t__t819t__unsafe_align,__t2035t__t820t,__t2037t,&__t2038t__unsafe_ptr,&__t2038t__dat__pos,&__t2038t__dat__length,&__t2038t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t2038t__unsafe_ptr,&__t2028t____t692t__);
  if(__t2028t____t692t__){
  free__t661t(&__t2038t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2178t=__t2038t__unsafe_ptr;
  *__t2179t=__t2038t__dat__pos;
  *__t2180t=__t2038t__dat__length;
  *__t2181t=__t2038t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2039t() {
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* __t2048t__unsafe_ptr=0;
  uint64_t __t2048t__dat__pos=0;
  uint64_t __t2048t__dat__length=0;
  char __t2048t__dat__first=0;
  char* __t2050t__unsafe_ptr=0;
  uint64_t __t2050t__dat__pos=0;
  uint64_t __t2050t__dat__length=0;
  char __t2050t__dat__first=0;
  char* __t2052t__unsafe_ptr=0;
  uint64_t __t2052t__dat__pos=0;
  uint64_t __t2052t__dat__length=0;
  char __t2052t__dat__first=0;
  char* __t2053t__unsafe_ptr=0;
  uint64_t __t2053t__unsafe_size=0;
  uint16_t __t2053t__unsafe_offset=0;
  uint16_t __t2053t__unsafe_align=0;
  uint64_t __t2054t=0;
  char* __t2055t__unsafe_ptr=0;
  uint64_t __t2055t__unsafe_size=0;
  uint16_t __t2055t__unsafe_offset=0;
  uint16_t __t2055t__unsafe_align=0;
  char __t2056t____t692t__=0;
  char* __t2057t__unsafe_ptr=0;
  uint64_t __t2057t__dat__pos=0;
  uint64_t __t2057t__dat__length=0;
  char __t2057t__dat__first=0;
  char __t2058t____t2028t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t997t(__t2041t,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2047t,&__t2048t__unsafe_ptr,&__t2048t__dat__pos,&__t2048t__dat__length,&__t2048t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2049t,&__t2050t__unsafe_ptr,&__t2050t__dat__pos,&__t2050t__dat__length,&__t2050t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t997t(__t2051t,&__t2052t__unsafe_ptr,&__t2052t__dat__pos,&__t2052t__dat__length,&__t2052t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__ptr__nat__nat__char____buffer__t2045t(&__t2053t__unsafe_ptr,&__t2053t__unsafe_size,&__t2053t__unsafe_offset,&__t2053t__unsafe_align);
  __t2054t=4;
  __t_errcode=alloc__t690t(&__t2053t__unsafe_ptr,&__t2053t__unsafe_size,&__t2053t__unsafe_offset,&__t2053t__unsafe_align,__t2054t,&__t2055t__unsafe_ptr,&__t2055t__unsafe_size,&__t2055t__unsafe_offset,&__t2055t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2053t__unsafe_ptr,&__t2042t__unsafe_ptr,8);
  memcpy(__t2053t__unsafe_ptr+8,&__t2042t__dat__pos,8);
  memcpy(__t2053t__unsafe_ptr+16,&__t2042t__dat__length,8);
  memcpy(__t2053t__unsafe_ptr+24,&__t2042t__dat__first,1);
  memcpy(__t2053t__unsafe_ptr+25,&__t2048t__unsafe_ptr,8);
  memcpy(__t2053t__unsafe_ptr+33,&__t2048t__dat__pos,8);
  memcpy(__t2053t__unsafe_ptr+41,&__t2048t__dat__length,8);
  memcpy(__t2053t__unsafe_ptr+49,&__t2048t__dat__first,1);
  memcpy(__t2053t__unsafe_ptr+50,&__t2050t__unsafe_ptr,8);
  memcpy(__t2053t__unsafe_ptr+58,&__t2050t__dat__pos,8);
  memcpy(__t2053t__unsafe_ptr+66,&__t2050t__dat__length,8);
  memcpy(__t2053t__unsafe_ptr+74,&__t2050t__dat__first,1);
  memcpy(__t2053t__unsafe_ptr+75,&__t2052t__unsafe_ptr,8);
  memcpy(__t2053t__unsafe_ptr+83,&__t2052t__dat__pos,8);
  memcpy(__t2053t__unsafe_ptr+91,&__t2052t__dat__length,8);
  memcpy(__t2053t__unsafe_ptr+99,&__t2052t__dat__first,1);
  __t_errcode=concat__t2022t(__t2053t__unsafe_ptr,__t2053t__unsafe_size,__t2053t__unsafe_offset,__t2053t__unsafe_align,&__t2057t__unsafe_ptr,&__t2057t__dat__pos,&__t2057t__dat__length,&__t2057t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1131t(__t2057t__unsafe_ptr,__t2057t__dat__pos,__t2057t__dat__length,__t2057t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2057t__unsafe_ptr,&__t2058t____t2028t____t692t__);
  if(__t2058t____t2028t____t692t__){
  free__t661t(&__t2057t__unsafe_ptr);
  }
  exists__t591t(__t2055t__unsafe_ptr,&__t2056t____t692t__);
  if(__t2056t____t692t__){
  free__t661t(&__t2055t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2039t();return 0;}