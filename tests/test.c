#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2076t="hello world!";
const char* const __t2077t="hello world too!";
const char* const __t2078t="hello world two!";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2069t(char** __t2084t, uint64_t* __t2085t, uint16_t* __t2086t, uint16_t* __t2087t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2084t=unsafe_ptr;
  *__t2085t=unsafe_size;
  *__t2086t=unsafe_offset;
  *__t2087t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2088t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2088t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2089t) {
  char* allocated=*__t2089t;
  if(allocated){
  free(allocated);
  }
  *__t2089t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2090t) {
  int value=0;
  *__t2090t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2091t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2091t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2092t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2092t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2093t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2093t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2094t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2094t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2095t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2095t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2096t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2097t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2097t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2098t) {
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
  *__t2098t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2099t, uint64_t* __t2100t, uint16_t* __t2101t, uint16_t* __t2102t, uint64_t size, char** __t2103t, uint64_t* __t2104t, uint16_t* __t2105t, uint16_t* __t2106t) {
  char* buffer__unsafe_ptr=*__t2099t;
  uint64_t buffer__unsafe_size=*__t2100t;
  uint16_t buffer__unsafe_offset=*__t2101t;
  uint16_t buffer__unsafe_align=*__t2102t;
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
  *__t2099t=buffer__unsafe_ptr;
  *__t2100t=buffer__unsafe_size;
  *__t2101t=buffer__unsafe_offset;
  *__t2102t=buffer__unsafe_align;
  *__t2103t=buffer__unsafe_ptr;
  *__t2104t=buffer__unsafe_size;
  *__t2105t=buffer__unsafe_offset;
  *__t2106t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circular__t837t(char** __t2107t, uint64_t* __t2108t, uint16_t* __t2109t, uint16_t* __t2110t, char** __t2111t, uint64_t* __t2112t, uint16_t* __t2113t, uint16_t* __t2114t, uint64_t* __t2115t) {
  char* buf__unsafe_ptr=*__t2107t;
  uint64_t buf__unsafe_size=*__t2108t;
  uint16_t buf__unsafe_offset=*__t2109t;
  uint16_t buf__unsafe_align=*__t2110t;
  uint64_t __t838t=0;
  uint64_t __t839t=0;
  uint64_t pos=0;
  __t838t=0;
  __t839t=__t838t;
  pos=__t839t;
  goto __t_return;
  __t_return:
  *__t2107t=buf__unsafe_ptr;
  *__t2108t=buf__unsafe_size;
  *__t2109t=buf__unsafe_offset;
  *__t2110t=buf__unsafe_align;
  *__t2111t=buf__unsafe_ptr;
  *__t2112t=buf__unsafe_size;
  *__t2113t=buf__unsafe_offset;
  *__t2114t=buf__unsafe_align;
  *__t2115t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t930t(char** __t2116t, uint64_t* __t2117t, uint16_t* __t2118t, uint16_t* __t2119t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2116t=unsafe_ptr;
  *__t2117t=unsafe_size;
  *__t2118t=unsafe_offset;
  *__t2119t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2120t) {
  *__t2120t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2121t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2121t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2122t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2122t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2123t) {
  *__t2123t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2124t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2124t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t811t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2125t) {
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
  *__t2125t=__t817t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t950t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2126t, uint64_t* __t2127t, uint64_t* __t2128t, char* __t2129t) {
  goto __t_return;
  __t_return:
  *__t2126t=unsafe_ptr;
  *__t2127t=dat__pos;
  *__t2128t=dat__length;
  *__t2129t=dat__first;
}

static inline __attribute__((always_inline)) int str__t954t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2130t, uint64_t* __t2131t, uint64_t* __t2132t, char* __t2133t) {
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
  *__t2130t=__t961t__unsafe_ptr;
  *__t2131t=__t961t__dat__pos;
  *__t2132t=__t961t__dat__length;
  *__t2133t=__t961t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t986t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2134t, uint64_t* __t2135t, uint64_t* __t2136t, char* __t2137t) {
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
  *__t2134t=__t991t__unsafe_ptr;
  *__t2135t=__t991t__dat__pos;
  *__t2136t=__t991t__dat__length;
  *__t2137t=__t991t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1006t(const char* c, char** __t2138t, uint64_t* __t2139t, uint64_t* __t2140t, char* __t2141t) {
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
  *__t2138t=__t1014t__unsafe_ptr;
  *__t2139t=__t1014t__dat__pos;
  *__t2140t=__t1014t__dat__length;
  *__t2141t=__t1014t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1015t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2142t) {
  goto __t_return;
  __t_return:
  *__t2142t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t818t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2143t) {
  goto __t_return;
  __t_return:
  *__t2143t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2144t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2144t=z;
}

static inline __attribute__((always_inline)) void allocated__t829t(char** __t2145t, uint64_t* __t2146t, uint16_t* __t2147t, uint16_t* __t2148t, uint64_t pos, char** __t2149t, uint64_t* __t2150t, uint16_t* __t2151t, uint16_t* __t2152t, uint64_t* __t2153t) {
  char* buf__unsafe_ptr=*__t2145t;
  uint64_t buf__unsafe_size=*__t2146t;
  uint16_t buf__unsafe_offset=*__t2147t;
  uint16_t buf__unsafe_align=*__t2148t;
  goto __t_return;
  __t_return:
  *__t2145t=buf__unsafe_ptr;
  *__t2146t=buf__unsafe_size;
  *__t2147t=buf__unsafe_offset;
  *__t2148t=buf__unsafe_align;
  *__t2149t=buf__unsafe_ptr;
  *__t2150t=buf__unsafe_size;
  *__t2151t=buf__unsafe_offset;
  *__t2152t=buf__unsafe_align;
  *__t2153t=pos;
}

static inline __attribute__((always_inline)) int alloc__t873t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t, uint64_t* __t2158t, uint64_t length, char** __t2159t, uint64_t* __t2160t, uint16_t* __t2161t, uint16_t* __t2162t, uint64_t* __t2163t) {
  char* allocator__buf__unsafe_ptr=*__t2154t;
  uint64_t allocator__buf__unsafe_size=*__t2155t;
  uint16_t allocator__buf__unsafe_offset=*__t2156t;
  uint16_t allocator__buf__unsafe_align=*__t2157t;
  uint64_t allocator__pos=*__t2158t;
  int __t874t=0;
  uint64_t __t875t__=0;
  char __t876t__=0;
  uint64_t __t877t__=0;
  uint64_t __t878t=0;
  uint64_t next_pos=0;
  uint64_t __t879t__=0;
  char __t880t__=0;
  uint64_t __t882t=0;
  uint64_t __t883t__=0;
  uint64_t pos=0;
  uint64_t __t881t=0;
  char* __t884t__buf__unsafe_ptr=0;
  uint64_t __t884t__buf__unsafe_size=0;
  uint16_t __t884t__buf__unsafe_offset=0;
  uint16_t __t884t__buf__unsafe_align=0;
  uint64_t __t884t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t818t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t875t__);
  ge__t324t(length,__t875t__,&__t876t__);
  if(__t876t__){
  __t_errcode=17;
  goto __t_failure;
  }
  add__t175t(length,allocator__pos,&__t877t__);
  __t878t=__t877t__;
  next_pos=__t878t;
  len__t818t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t879t__);
  gt__t276t(next_pos,__t879t__,&__t880t__);
  if(__t880t__){
  next_pos=length;
  __t881t=0;
  pos=__t881t;
  }
  else{
  __t882t=0;
  add__t175t(allocator__pos,__t882t,&__t883t__);
  pos=__t883t__;
  }
  allocator__pos=next_pos;
  allocated__t829t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t884t__buf__unsafe_ptr,&__t884t__buf__unsafe_size,&__t884t__buf__unsafe_offset,&__t884t__buf__unsafe_align,&__t884t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2154t=allocator__buf__unsafe_ptr;
  *__t2155t=allocator__buf__unsafe_size;
  *__t2156t=allocator__buf__unsafe_offset;
  *__t2157t=allocator__buf__unsafe_align;
  *__t2158t=allocator__pos;
  *__t2159t=__t884t__buf__unsafe_ptr;
  *__t2160t=__t884t__buf__unsafe_size;
  *__t2161t=__t884t__buf__unsafe_offset;
  *__t2162t=__t884t__buf__unsafe_align;
  *__t2163t=__t884t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t834t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2164t, uint64_t* __t2165t, uint16_t* __t2166t, uint16_t* __t2167t, uint64_t* __t2168t) {
  char* __t835t__unsafe_ptr=0;
  uint64_t __t835t__unsafe_size=0;
  uint16_t __t835t__unsafe_offset=0;
  uint16_t __t835t__unsafe_align=0;
  uint64_t __t836t=0;
  __t835t__unsafe_ptr=self__buf__unsafe_ptr;
  __t835t__unsafe_size=self__buf__unsafe_size;
  __t835t__unsafe_offset=self__buf__unsafe_offset;
  __t835t__unsafe_align=self__buf__unsafe_align;
  __t836t=self__pos;
  goto __t_return;
  __t_return:
  *__t2164t=__t835t__unsafe_ptr;
  *__t2165t=__t835t__unsafe_size;
  *__t2166t=__t835t__unsafe_offset;
  *__t2167t=__t835t__unsafe_align;
  *__t2168t=__t836t;
}

static inline __attribute__((always_inline)) void arena__t823t(char** __t2169t, uint64_t* __t2170t, uint16_t* __t2171t, uint16_t* __t2172t, uint64_t _pos, char** __t2173t, uint64_t* __t2174t, uint16_t* __t2175t, uint16_t* __t2176t, uint64_t* __t2177t) {
  char* buf__unsafe_ptr=*__t2169t;
  uint64_t buf__unsafe_size=*__t2170t;
  uint16_t buf__unsafe_offset=*__t2171t;
  uint16_t buf__unsafe_align=*__t2172t;
  uint64_t __t824t=0;
  uint64_t pos=0;
  __t824t=_pos;
  pos=__t824t;
  goto __t_return;
  __t_return:
  *__t2169t=buf__unsafe_ptr;
  *__t2170t=buf__unsafe_size;
  *__t2171t=buf__unsafe_offset;
  *__t2172t=buf__unsafe_align;
  *__t2173t=buf__unsafe_ptr;
  *__t2174t=buf__unsafe_size;
  *__t2175t=buf__unsafe_offset;
  *__t2176t=buf__unsafe_align;
  *__t2177t=pos;
}

static inline __attribute__((always_inline)) void str__t985t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2178t, uint64_t* __t2179t, uint64_t* __t2180t, char* __t2181t) {
  goto __t_return;
  __t_return:
  *__t2178t=other__unsafe_ptr;
  *__t2179t=other__dat__pos;
  *__t2180t=other__dat__length;
  *__t2181t=other__dat__first;
}

static inline __attribute__((always_inline)) int alloc__t856t(char** __t2182t, uint64_t* __t2183t, uint16_t* __t2184t, uint16_t* __t2185t, uint64_t* __t2186t, uint64_t length, char** __t2187t, uint64_t* __t2188t, uint16_t* __t2189t, uint16_t* __t2190t, uint64_t* __t2191t) {
  char* allocator__buf__unsafe_ptr=*__t2182t;
  uint64_t allocator__buf__unsafe_size=*__t2183t;
  uint16_t allocator__buf__unsafe_offset=*__t2184t;
  uint16_t allocator__buf__unsafe_align=*__t2185t;
  uint64_t allocator__pos=*__t2186t;
  int __t857t=0;
  uint64_t __t858t__=0;
  uint64_t next_pos=0;
  uint64_t __t859t__=0;
  char __t860t__=0;
  uint64_t __t861t=0;
  uint64_t __t862t__=0;
  uint64_t pos=0;
  char* __t863t__buf__unsafe_ptr=0;
  uint64_t __t863t__buf__unsafe_size=0;
  uint16_t __t863t__buf__unsafe_offset=0;
  uint16_t __t863t__buf__unsafe_align=0;
  uint64_t __t863t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t858t__);
  next_pos=__t858t__;
  len__t818t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t859t__);
  gt__t276t(next_pos,__t859t__,&__t860t__);
  if(__t860t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t861t=0;
  add__t175t(allocator__pos,__t861t,&__t862t__);
  pos=__t862t__;
  allocator__pos=next_pos;
  allocated__t829t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t863t__buf__unsafe_ptr,&__t863t__buf__unsafe_size,&__t863t__buf__unsafe_offset,&__t863t__buf__unsafe_align,&__t863t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2182t=allocator__buf__unsafe_ptr;
  *__t2183t=allocator__buf__unsafe_size;
  *__t2184t=allocator__buf__unsafe_offset;
  *__t2185t=allocator__buf__unsafe_align;
  *__t2186t=allocator__pos;
  *__t2187t=__t863t__buf__unsafe_ptr;
  *__t2188t=__t863t__buf__unsafe_size;
  *__t2189t=__t863t__buf__unsafe_offset;
  *__t2190t=__t863t__buf__unsafe_align;
  *__t2191t=__t863t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t1032t(char** __t2192t, uint64_t* __t2193t, uint16_t* __t2194t, uint16_t* __t2195t, uint64_t* __t2196t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2197t, uint64_t* __t2198t, uint64_t* __t2199t, char* __t2200t) {
  char* CHARS__buf__unsafe_ptr=*__t2192t;
  uint64_t CHARS__buf__unsafe_size=*__t2193t;
  uint16_t CHARS__buf__unsafe_offset=*__t2194t;
  uint16_t CHARS__buf__unsafe_align=*__t2195t;
  uint64_t CHARS__pos=*__t2196t;
  char* __t1033t__unsafe_ptr=0;
  uint64_t __t1033t__dat__pos=0;
  uint64_t __t1033t__dat__length=0;
  char __t1033t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1034t__=0;
  char* __t1035t__buf__unsafe_ptr=0;
  uint64_t __t1035t__buf__unsafe_size=0;
  uint16_t __t1035t__buf__unsafe_offset=0;
  uint16_t __t1035t__buf__unsafe_align=0;
  uint64_t __t1035t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1036t__unsafe_ptr=0;
  uint64_t __t1036t__dat__pos=0;
  uint64_t __t1036t__dat__length=0;
  char __t1036t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t985t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1033t__unsafe_ptr,&__t1033t__dat__pos,&__t1033t__dat__length,&__t1033t__dat__first);
  other__unsafe_ptr=__t1033t__unsafe_ptr;
  other__dat__pos=__t1033t__dat__pos;
  other__dat__length=__t1033t__dat__length;
  other__dat__first=__t1033t__dat__first;
  len__t1015t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1034t__);
  __t_errcode=alloc__t856t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1034t__,&__t1035t__buf__unsafe_ptr,&__t1035t__buf__unsafe_size,&__t1035t__buf__unsafe_offset,&__t1035t__buf__unsafe_align,&__t1035t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1035t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1035t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1035t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1035t__buf__unsafe_align;
  surface__pos=__t1035t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t954t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1036t__unsafe_ptr,&__t1036t__dat__pos,&__t1036t__dat__length,&__t1036t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2192t=CHARS__buf__unsafe_ptr;
  *__t2193t=CHARS__buf__unsafe_size;
  *__t2194t=CHARS__buf__unsafe_offset;
  *__t2195t=CHARS__buf__unsafe_align;
  *__t2196t=CHARS__pos;
  *__t2197t=__t1036t__unsafe_ptr;
  *__t2198t=__t1036t__dat__pos;
  *__t2199t=__t1036t__dat__length;
  *__t2200t=__t1036t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t831t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2201t, uint64_t* __t2202t, uint16_t* __t2203t, uint16_t* __t2204t, uint64_t* __t2205t) {
  char* __t832t__unsafe_ptr=0;
  uint64_t __t832t__unsafe_size=0;
  uint16_t __t832t__unsafe_offset=0;
  uint16_t __t832t__unsafe_align=0;
  uint64_t __t833t=0;
  __t832t__unsafe_ptr=self__buf__unsafe_ptr;
  __t832t__unsafe_size=self__buf__unsafe_size;
  __t832t__unsafe_offset=self__buf__unsafe_offset;
  __t832t__unsafe_align=self__buf__unsafe_align;
  __t833t=self__pos;
  goto __t_return;
  __t_return:
  *__t2201t=__t832t__unsafe_ptr;
  *__t2202t=__t832t__unsafe_size;
  *__t2203t=__t832t__unsafe_offset;
  *__t2204t=__t832t__unsafe_align;
  *__t2205t=__t833t;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2206t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2206t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2207t) {
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
  *__t2207t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1002t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2208t, uint64_t* __t2209t, uint64_t* __t2210t, char* __t2211t) {
  uint64_t __t1004t__=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t1004t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t986t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1004t__,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2208t=__t1005t__unsafe_ptr;
  *__t2209t=__t1005t__dat__pos;
  *__t2210t=__t1005t__dat__length;
  *__t2211t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1546t(char** __t2212t, uint64_t* __t2213t, uint16_t* __t2214t, uint16_t* __t2215t, uint64_t* __t2216t, const char* _s1, const char* _s2, char** __t2217t, uint64_t* __t2218t, uint64_t* __t2219t, char* __t2220t) {
  char* CHARS__buf__unsafe_ptr=*__t2212t;
  uint64_t CHARS__buf__unsafe_size=*__t2213t;
  uint16_t CHARS__buf__unsafe_offset=*__t2214t;
  uint16_t CHARS__buf__unsafe_align=*__t2215t;
  uint64_t CHARS__pos=*__t2216t;
  char* __t1547t__unsafe_ptr=0;
  uint64_t __t1547t__dat__pos=0;
  uint64_t __t1547t__dat__length=0;
  char __t1547t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1548t__unsafe_ptr=0;
  uint64_t __t1548t__dat__pos=0;
  uint64_t __t1548t__dat__length=0;
  char __t1548t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t1549t__=0;
  uint64_t __t1550t__=0;
  uint64_t __t1551t__=0;
  char* __t1552t__buf__unsafe_ptr=0;
  uint64_t __t1552t__buf__unsafe_size=0;
  uint16_t __t1552t__buf__unsafe_offset=0;
  uint16_t __t1552t__buf__unsafe_align=0;
  uint64_t __t1552t__pos=0;
  char* __t1553t__t835t__unsafe_ptr=0;
  uint64_t __t1553t__t835t__unsafe_size=0;
  uint16_t __t1553t__t835t__unsafe_offset=0;
  uint16_t __t1553t__t835t__unsafe_align=0;
  uint64_t __t1553t__t836t=0;
  char* __t1554t__buf__unsafe_ptr=0;
  uint64_t __t1554t__buf__unsafe_size=0;
  uint16_t __t1554t__buf__unsafe_offset=0;
  uint16_t __t1554t__buf__unsafe_align=0;
  uint64_t __t1554t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1555t=0;
  uint64_t __t1556t__=0;
  uint64_t start=0;
  char* __t1557t__unsafe_ptr=0;
  uint64_t __t1557t__dat__pos=0;
  uint64_t __t1557t__dat__length=0;
  char __t1557t__dat__first=0;
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__dat__pos=0;
  uint64_t __t1558t__dat__length=0;
  char __t1558t__dat__first=0;
  char* __t1559t__t832t__unsafe_ptr=0;
  uint64_t __t1559t__t832t__unsafe_size=0;
  uint16_t __t1559t__t832t__unsafe_offset=0;
  uint16_t __t1559t__t832t__unsafe_align=0;
  uint64_t __t1559t__t833t=0;
  char* __t1561t__unsafe_ptr=0;
  uint64_t __t1561t__dat__pos=0;
  uint64_t __t1561t__dat__length=0;
  char __t1561t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1006t(_s1,&__t1547t__unsafe_ptr,&__t1547t__dat__pos,&__t1547t__dat__length,&__t1547t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__unsafe_ptr=__t1547t__unsafe_ptr;
  s1__dat__pos=__t1547t__dat__pos;
  s1__dat__length=__t1547t__dat__length;
  s1__dat__first=__t1547t__dat__first;
  __t_errcode=str__t1006t(_s2,&__t1548t__unsafe_ptr,&__t1548t__dat__pos,&__t1548t__dat__length,&__t1548t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1548t__unsafe_ptr;
  s2__dat__pos=__t1548t__dat__pos;
  s2__dat__length=__t1548t__dat__length;
  s2__dat__first=__t1548t__dat__first;
  len__t1015t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1549t__);
  len__t1015t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1550t__);
  add__t175t(__t1549t__,__t1550t__,&__t1551t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1551t__,&__t1552t__buf__unsafe_ptr,&__t1552t__buf__unsafe_size,&__t1552t__buf__unsafe_offset,&__t1552t__buf__unsafe_align,&__t1552t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t834t(__t1552t__buf__unsafe_ptr,__t1552t__buf__unsafe_size,__t1552t__buf__unsafe_offset,__t1552t__buf__unsafe_align,__t1552t__pos,&__t1553t__t835t__unsafe_ptr,&__t1553t__t835t__unsafe_size,&__t1553t__t835t__unsafe_offset,&__t1553t__t835t__unsafe_align,&__t1553t__t836t);
  arena__t823t(&__t1553t__t835t__unsafe_ptr,&__t1553t__t835t__unsafe_size,&__t1553t__t835t__unsafe_offset,&__t1553t__t835t__unsafe_align,__t1553t__t836t,&__t1554t__buf__unsafe_ptr,&__t1554t__buf__unsafe_size,&__t1554t__buf__unsafe_offset,&__t1554t__buf__unsafe_align,&__t1554t__pos);
  surface__buf__unsafe_ptr=__t1554t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1554t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1554t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1554t__buf__unsafe_align;
  surface__pos=__t1554t__pos;
  __t1555t=0;
  add__t175t(surface__pos,__t1555t,&__t1556t__);
  start=__t1556t__;
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1557t__unsafe_ptr,&__t1557t__dat__pos,&__t1557t__dat__length,&__t1557t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1558t__unsafe_ptr,&__t1558t__dat__pos,&__t1558t__dat__length,&__t1558t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t831t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1559t__t832t__unsafe_ptr,&__t1559t__t832t__unsafe_size,&__t1559t__t832t__unsafe_offset,&__t1559t__t832t__unsafe_align,&__t1559t__t833t);
  __t_errcode=str__t1002t(__t1559t__t832t__unsafe_ptr,__t1559t__t832t__unsafe_size,__t1559t__t832t__unsafe_offset,__t1559t__t832t__unsafe_align,__t1559t__t833t,start,&__t1561t__unsafe_ptr,&__t1561t__dat__pos,&__t1561t__dat__length,&__t1561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2212t=CHARS__buf__unsafe_ptr;
  *__t2213t=CHARS__buf__unsafe_size;
  *__t2214t=CHARS__buf__unsafe_offset;
  *__t2215t=CHARS__buf__unsafe_align;
  *__t2216t=CHARS__pos;
  *__t2217t=__t1561t__unsafe_ptr;
  *__t2218t=__t1561t__dat__pos;
  *__t2219t=__t1561t__dat__length;
  *__t2220t=__t1561t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1498t(char** __t2221t, uint64_t* __t2222t, uint16_t* __t2223t, uint16_t* __t2224t, uint64_t* __t2225t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t2226t, uint64_t* __t2227t, uint64_t* __t2228t, char* __t2229t) {
  char* CHARS__buf__unsafe_ptr=*__t2221t;
  uint64_t CHARS__buf__unsafe_size=*__t2222t;
  uint16_t CHARS__buf__unsafe_offset=*__t2223t;
  uint16_t CHARS__buf__unsafe_align=*__t2224t;
  uint64_t CHARS__pos=*__t2225t;
  char* __t1499t__unsafe_ptr=0;
  uint64_t __t1499t__dat__pos=0;
  uint64_t __t1499t__dat__length=0;
  char __t1499t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1500t__unsafe_ptr=0;
  uint64_t __t1500t__dat__pos=0;
  uint64_t __t1500t__dat__length=0;
  char __t1500t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t1501t__=0;
  uint64_t __t1502t__=0;
  uint64_t __t1503t__=0;
  char* __t1504t__buf__unsafe_ptr=0;
  uint64_t __t1504t__buf__unsafe_size=0;
  uint16_t __t1504t__buf__unsafe_offset=0;
  uint16_t __t1504t__buf__unsafe_align=0;
  uint64_t __t1504t__pos=0;
  char* __t1505t__t835t__unsafe_ptr=0;
  uint64_t __t1505t__t835t__unsafe_size=0;
  uint16_t __t1505t__t835t__unsafe_offset=0;
  uint16_t __t1505t__t835t__unsafe_align=0;
  uint64_t __t1505t__t836t=0;
  char* __t1506t__buf__unsafe_ptr=0;
  uint64_t __t1506t__buf__unsafe_size=0;
  uint16_t __t1506t__buf__unsafe_offset=0;
  uint16_t __t1506t__buf__unsafe_align=0;
  uint64_t __t1506t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1507t=0;
  uint64_t __t1508t__=0;
  uint64_t start=0;
  char* __t1509t__unsafe_ptr=0;
  uint64_t __t1509t__dat__pos=0;
  uint64_t __t1509t__dat__length=0;
  char __t1509t__dat__first=0;
  char* __t1510t__unsafe_ptr=0;
  uint64_t __t1510t__dat__pos=0;
  uint64_t __t1510t__dat__length=0;
  char __t1510t__dat__first=0;
  char* __t1511t__t832t__unsafe_ptr=0;
  uint64_t __t1511t__t832t__unsafe_size=0;
  uint16_t __t1511t__t832t__unsafe_offset=0;
  uint16_t __t1511t__t832t__unsafe_align=0;
  uint64_t __t1511t__t833t=0;
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__dat__pos=0;
  uint64_t __t1513t__dat__length=0;
  char __t1513t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t985t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1499t__unsafe_ptr,&__t1499t__dat__pos,&__t1499t__dat__length,&__t1499t__dat__first);
  s1__unsafe_ptr=__t1499t__unsafe_ptr;
  s1__dat__pos=__t1499t__dat__pos;
  s1__dat__length=__t1499t__dat__length;
  s1__dat__first=__t1499t__dat__first;
  str__t985t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1500t__unsafe_ptr,&__t1500t__dat__pos,&__t1500t__dat__length,&__t1500t__dat__first);
  s2__unsafe_ptr=__t1500t__unsafe_ptr;
  s2__dat__pos=__t1500t__dat__pos;
  s2__dat__length=__t1500t__dat__length;
  s2__dat__first=__t1500t__dat__first;
  len__t1015t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1501t__);
  len__t1015t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1502t__);
  add__t175t(__t1501t__,__t1502t__,&__t1503t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1503t__,&__t1504t__buf__unsafe_ptr,&__t1504t__buf__unsafe_size,&__t1504t__buf__unsafe_offset,&__t1504t__buf__unsafe_align,&__t1504t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t834t(__t1504t__buf__unsafe_ptr,__t1504t__buf__unsafe_size,__t1504t__buf__unsafe_offset,__t1504t__buf__unsafe_align,__t1504t__pos,&__t1505t__t835t__unsafe_ptr,&__t1505t__t835t__unsafe_size,&__t1505t__t835t__unsafe_offset,&__t1505t__t835t__unsafe_align,&__t1505t__t836t);
  arena__t823t(&__t1505t__t835t__unsafe_ptr,&__t1505t__t835t__unsafe_size,&__t1505t__t835t__unsafe_offset,&__t1505t__t835t__unsafe_align,__t1505t__t836t,&__t1506t__buf__unsafe_ptr,&__t1506t__buf__unsafe_size,&__t1506t__buf__unsafe_offset,&__t1506t__buf__unsafe_align,&__t1506t__pos);
  surface__buf__unsafe_ptr=__t1506t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1506t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1506t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1506t__buf__unsafe_align;
  surface__pos=__t1506t__pos;
  __t1507t=0;
  add__t175t(surface__pos,__t1507t,&__t1508t__);
  start=__t1508t__;
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1509t__unsafe_ptr,&__t1509t__dat__pos,&__t1509t__dat__length,&__t1509t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1510t__unsafe_ptr,&__t1510t__dat__pos,&__t1510t__dat__length,&__t1510t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t831t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1511t__t832t__unsafe_ptr,&__t1511t__t832t__unsafe_size,&__t1511t__t832t__unsafe_offset,&__t1511t__t832t__unsafe_align,&__t1511t__t833t);
  __t_errcode=str__t1002t(__t1511t__t832t__unsafe_ptr,__t1511t__t832t__unsafe_size,__t1511t__t832t__unsafe_offset,__t1511t__t832t__unsafe_align,__t1511t__t833t,start,&__t1513t__unsafe_ptr,&__t1513t__dat__pos,&__t1513t__dat__length,&__t1513t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2221t=CHARS__buf__unsafe_ptr;
  *__t2222t=CHARS__buf__unsafe_size;
  *__t2223t=CHARS__buf__unsafe_offset;
  *__t2224t=CHARS__buf__unsafe_align;
  *__t2225t=CHARS__pos;
  *__t2226t=__t1513t__unsafe_ptr;
  *__t2227t=__t1513t__dat__pos;
  *__t2228t=__t1513t__dat__length;
  *__t2229t=__t1513t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1514t(char** __t2230t, uint64_t* __t2231t, uint16_t* __t2232t, uint16_t* __t2233t, uint64_t* __t2234t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t2235t, uint64_t* __t2236t, uint64_t* __t2237t, char* __t2238t) {
  char* CHARS__buf__unsafe_ptr=*__t2230t;
  uint64_t CHARS__buf__unsafe_size=*__t2231t;
  uint16_t CHARS__buf__unsafe_offset=*__t2232t;
  uint16_t CHARS__buf__unsafe_align=*__t2233t;
  uint64_t CHARS__pos=*__t2234t;
  char* __t1515t__unsafe_ptr=0;
  uint64_t __t1515t__dat__pos=0;
  uint64_t __t1515t__dat__length=0;
  char __t1515t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__dat__pos=0;
  uint64_t __t1516t__dat__length=0;
  char __t1516t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  uint64_t __t1517t__=0;
  uint64_t __t1518t__=0;
  uint64_t __t1519t__=0;
  char* __t1520t__buf__unsafe_ptr=0;
  uint64_t __t1520t__buf__unsafe_size=0;
  uint16_t __t1520t__buf__unsafe_offset=0;
  uint16_t __t1520t__buf__unsafe_align=0;
  uint64_t __t1520t__pos=0;
  char* __t1521t__t835t__unsafe_ptr=0;
  uint64_t __t1521t__t835t__unsafe_size=0;
  uint16_t __t1521t__t835t__unsafe_offset=0;
  uint16_t __t1521t__t835t__unsafe_align=0;
  uint64_t __t1521t__t836t=0;
  char* __t1522t__buf__unsafe_ptr=0;
  uint64_t __t1522t__buf__unsafe_size=0;
  uint16_t __t1522t__buf__unsafe_offset=0;
  uint16_t __t1522t__buf__unsafe_align=0;
  uint64_t __t1522t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1523t=0;
  uint64_t __t1524t__=0;
  uint64_t start=0;
  char* __t1525t__unsafe_ptr=0;
  uint64_t __t1525t__dat__pos=0;
  uint64_t __t1525t__dat__length=0;
  char __t1525t__dat__first=0;
  char* __t1526t__unsafe_ptr=0;
  uint64_t __t1526t__dat__pos=0;
  uint64_t __t1526t__dat__length=0;
  char __t1526t__dat__first=0;
  char* __t1527t__t832t__unsafe_ptr=0;
  uint64_t __t1527t__t832t__unsafe_size=0;
  uint16_t __t1527t__t832t__unsafe_offset=0;
  uint16_t __t1527t__t832t__unsafe_align=0;
  uint64_t __t1527t__t833t=0;
  char* __t1529t__unsafe_ptr=0;
  uint64_t __t1529t__dat__pos=0;
  uint64_t __t1529t__dat__length=0;
  char __t1529t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t985t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1515t__unsafe_ptr,&__t1515t__dat__pos,&__t1515t__dat__length,&__t1515t__dat__first);
  s1__unsafe_ptr=__t1515t__unsafe_ptr;
  s1__dat__pos=__t1515t__dat__pos;
  s1__dat__length=__t1515t__dat__length;
  s1__dat__first=__t1515t__dat__first;
  __t_errcode=str__t1006t(_s2,&__t1516t__unsafe_ptr,&__t1516t__dat__pos,&__t1516t__dat__length,&__t1516t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1516t__unsafe_ptr;
  s2__dat__pos=__t1516t__dat__pos;
  s2__dat__length=__t1516t__dat__length;
  s2__dat__first=__t1516t__dat__first;
  len__t1015t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1517t__);
  len__t1015t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1518t__);
  add__t175t(__t1517t__,__t1518t__,&__t1519t__);
  __t_errcode=alloc__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1519t__,&__t1520t__buf__unsafe_ptr,&__t1520t__buf__unsafe_size,&__t1520t__buf__unsafe_offset,&__t1520t__buf__unsafe_align,&__t1520t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t834t(__t1520t__buf__unsafe_ptr,__t1520t__buf__unsafe_size,__t1520t__buf__unsafe_offset,__t1520t__buf__unsafe_align,__t1520t__pos,&__t1521t__t835t__unsafe_ptr,&__t1521t__t835t__unsafe_size,&__t1521t__t835t__unsafe_offset,&__t1521t__t835t__unsafe_align,&__t1521t__t836t);
  arena__t823t(&__t1521t__t835t__unsafe_ptr,&__t1521t__t835t__unsafe_size,&__t1521t__t835t__unsafe_offset,&__t1521t__t835t__unsafe_align,__t1521t__t836t,&__t1522t__buf__unsafe_ptr,&__t1522t__buf__unsafe_size,&__t1522t__buf__unsafe_offset,&__t1522t__buf__unsafe_align,&__t1522t__pos);
  surface__buf__unsafe_ptr=__t1522t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1522t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1522t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1522t__buf__unsafe_align;
  surface__pos=__t1522t__pos;
  __t1523t=0;
  add__t175t(surface__pos,__t1523t,&__t1524t__);
  start=__t1524t__;
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1525t__unsafe_ptr,&__t1525t__dat__pos,&__t1525t__dat__length,&__t1525t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1032t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1526t__unsafe_ptr,&__t1526t__dat__pos,&__t1526t__dat__length,&__t1526t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t831t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1527t__t832t__unsafe_ptr,&__t1527t__t832t__unsafe_size,&__t1527t__t832t__unsafe_offset,&__t1527t__t832t__unsafe_align,&__t1527t__t833t);
  __t_errcode=str__t1002t(__t1527t__t832t__unsafe_ptr,__t1527t__t832t__unsafe_size,__t1527t__t832t__unsafe_offset,__t1527t__t832t__unsafe_align,__t1527t__t833t,start,&__t1529t__unsafe_ptr,&__t1529t__dat__pos,&__t1529t__dat__length,&__t1529t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2230t=CHARS__buf__unsafe_ptr;
  *__t2231t=CHARS__buf__unsafe_size;
  *__t2232t=CHARS__buf__unsafe_offset;
  *__t2233t=CHARS__buf__unsafe_align;
  *__t2234t=CHARS__pos;
  *__t2235t=__t1529t__unsafe_ptr;
  *__t2236t=__t1529t__dat__pos;
  *__t2237t=__t1529t__dat__length;
  *__t2238t=__t1529t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1140t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1141t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2067t() {
  char* __t2071t__unsafe_ptr=0;
  uint64_t __t2071t__unsafe_size=0;
  uint16_t __t2071t__unsafe_offset=0;
  uint16_t __t2071t__unsafe_align=0;
  uint64_t __t2072t=0;
  char* __t2073t__unsafe_ptr=0;
  uint64_t __t2073t__unsafe_size=0;
  uint16_t __t2073t__unsafe_offset=0;
  uint16_t __t2073t__unsafe_align=0;
  char __t2074t____t692t__=0;
  char* __t2075t__buf__unsafe_ptr=0;
  uint64_t __t2075t__buf__unsafe_size=0;
  uint16_t __t2075t__buf__unsafe_offset=0;
  uint16_t __t2075t__buf__unsafe_align=0;
  uint64_t __t2075t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* s1=0;
  const char* s2=0;
  const char* s3=0;
  char* __t2079t__unsafe_ptr=0;
  uint64_t __t2079t__dat__pos=0;
  uint64_t __t2079t__dat__length=0;
  char __t2079t__dat__first=0;
  char* __t2080t__unsafe_ptr=0;
  uint64_t __t2080t__dat__pos=0;
  uint64_t __t2080t__dat__length=0;
  char __t2080t__dat__first=0;
  char* __t2081t__unsafe_ptr=0;
  uint64_t __t2081t__dat__pos=0;
  uint64_t __t2081t__dat__length=0;
  char __t2081t__dat__first=0;
  char* __t2082t__unsafe_ptr=0;
  uint64_t __t2082t__dat__pos=0;
  uint64_t __t2082t__dat__length=0;
  char __t2082t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t2069t(&__t2071t__unsafe_ptr,&__t2071t__unsafe_size,&__t2071t__unsafe_offset,&__t2071t__unsafe_align);
  __t2072t=47;
  __t_errcode=alloc__t690t(&__t2071t__unsafe_ptr,&__t2071t__unsafe_size,&__t2071t__unsafe_offset,&__t2071t__unsafe_align,__t2072t,&__t2073t__unsafe_ptr,&__t2073t__unsafe_size,&__t2073t__unsafe_offset,&__t2073t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t837t(&__t2073t__unsafe_ptr,&__t2073t__unsafe_size,&__t2073t__unsafe_offset,&__t2073t__unsafe_align,&__t2075t__buf__unsafe_ptr,&__t2075t__buf__unsafe_size,&__t2075t__buf__unsafe_offset,&__t2075t__buf__unsafe_align,&__t2075t__pos);
  CHARS__buf__unsafe_ptr=__t2075t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2075t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2075t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2075t__buf__unsafe_align;
  CHARS__pos=__t2075t__pos;
  s1=__t2076t;
  s2=__t2077t;
  s3=__t2078t;
  __t_errcode=add__t1546t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,s1,__t382t,&__t2079t__unsafe_ptr,&__t2079t__dat__pos,&__t2079t__dat__length,&__t2079t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1546t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,s2,__t382t,&__t2080t__unsafe_ptr,&__t2080t__dat__pos,&__t2080t__dat__length,&__t2080t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1498t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2079t__unsafe_ptr,__t2079t__dat__pos,__t2079t__dat__length,__t2079t__dat__first,__t2080t__unsafe_ptr,__t2080t__dat__pos,__t2080t__dat__length,__t2080t__dat__first,&__t2081t__unsafe_ptr,&__t2081t__dat__pos,&__t2081t__dat__length,&__t2081t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1514t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2081t__unsafe_ptr,__t2081t__dat__pos,__t2081t__dat__length,__t2081t__dat__first,s3,&__t2082t__unsafe_ptr,&__t2082t__dat__pos,&__t2082t__dat__length,&__t2082t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2082t__unsafe_ptr;
  s__dat__pos=__t2082t__dat__pos;
  s__dat__length=__t2082t__dat__length;
  s__dat__first=__t2082t__dat__first;
  print__t1140t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2073t__unsafe_ptr,&__t2074t____t692t__);
  if(__t2074t____t692t__){
  free__t661t(&__t2073t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2067t();return 0;}