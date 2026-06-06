#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2041t="it's a me";
const char* const __t374t="";
const char* const __t2043t="mario";
const char* const __t2016t="name      ";
const char* const __t2019t="surnname  ";
const char* const __t2014t="-------------------";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t2024t(char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t2067t=unsafe_ptr;
  *__t2068t=unsafe_size;
  *__t2069t=unsafe_offset;
  *__t2070t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2071t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2071t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2072t) {
  char* allocated=*__t2072t;
  if(allocated){
  free(allocated);
  }
  *__t2072t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2073t) {
  int value=0;
  *__t2073t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2074t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2074t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2075t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2075t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2076t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2076t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2077t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2077t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2078t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2078t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2079t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2079t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2080t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2080t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2081t) {
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
  *__t2081t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2082t, uint64_t* __t2083t, uint16_t* __t2084t, uint16_t* __t2085t, uint64_t size, char** __t2086t, uint64_t* __t2087t, uint16_t* __t2088t, uint16_t* __t2089t) {
  char* buffer__unsafe_ptr=*__t2082t;
  uint64_t buffer__unsafe_size=*__t2083t;
  uint16_t buffer__unsafe_offset=*__t2084t;
  uint16_t buffer__unsafe_align=*__t2085t;
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
  *__t2082t=buffer__unsafe_ptr;
  *__t2083t=buffer__unsafe_size;
  *__t2084t=buffer__unsafe_offset;
  *__t2085t=buffer__unsafe_align;
  *__t2086t=buffer__unsafe_ptr;
  *__t2087t=buffer__unsafe_size;
  *__t2088t=buffer__unsafe_offset;
  *__t2089t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2030t(char** __t2090t, uint64_t* __t2091t, uint16_t* __t2092t, uint16_t* __t2093t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2090t=unsafe_ptr;
  *__t2091t=unsafe_size;
  *__t2092t=unsafe_offset;
  *__t2093t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t2094t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t2094t=__t641t__;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t2095t, uint64_t* __t2096t, uint16_t* __t2097t, uint16_t* __t2098t, uint64_t _pos, char** __t2099t, uint64_t* __t2100t, uint16_t* __t2101t, uint16_t* __t2102t, uint64_t* __t2103t) {
  char* buf__unsafe_ptr=*__t2095t;
  uint64_t buf__unsafe_size=*__t2096t;
  uint16_t buf__unsafe_offset=*__t2097t;
  uint16_t buf__unsafe_align=*__t2098t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t2095t=buf__unsafe_ptr;
  *__t2096t=buf__unsafe_size;
  *__t2097t=buf__unsafe_offset;
  *__t2098t=buf__unsafe_align;
  *__t2099t=buf__unsafe_ptr;
  *__t2100t=buf__unsafe_size;
  *__t2101t=buf__unsafe_offset;
  *__t2102t=buf__unsafe_align;
  *__t2103t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t2104t, uint64_t* __t2105t, uint16_t* __t2106t, uint16_t* __t2107t, char** __t2108t, uint64_t* __t2109t, uint16_t* __t2110t, uint16_t* __t2111t, uint64_t* __t2112t) {
  char* buf__unsafe_ptr=*__t2104t;
  uint64_t buf__unsafe_size=*__t2105t;
  uint16_t buf__unsafe_offset=*__t2106t;
  uint16_t buf__unsafe_align=*__t2107t;
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
  *__t2104t=buf__unsafe_ptr;
  *__t2105t=buf__unsafe_size;
  *__t2106t=buf__unsafe_offset;
  *__t2107t=buf__unsafe_align;
  *__t2108t=__t815t__buf__unsafe_ptr;
  *__t2109t=__t815t__buf__unsafe_size;
  *__t2110t=__t815t__buf__unsafe_offset;
  *__t2111t=__t815t__buf__unsafe_align;
  *__t2112t=__t815t__pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2113t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2113t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2114t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2114t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2115t) {
  *__t2115t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2116t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2116t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2117t, uint64_t* __t2118t, uint16_t* __t2119t, uint16_t* __t2120t, uint64_t i, char** __t2121t) {
  char* buffer__unsafe_ptr=*__t2117t;
  uint64_t buffer__unsafe_size=*__t2118t;
  uint16_t buffer__unsafe_offset=*__t2119t;
  uint16_t buffer__unsafe_align=*__t2120t;
  char __t792t__=0;
  uint64_t __t793t__=0;
  uint64_t __t794t__=0;
  uint64_t __t795t__=0;
  uint64_t __t796t__=0;
  char* __t797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t792t__);
  if(__t792t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t793t__);
  mul__t199t(i,__t793t__,&__t794t__);
  nat__t665t(buffer__unsafe_offset,&__t795t__);
  add__t175t(__t794t__,__t795t__,&__t796t__);
  add__t663t(buffer__unsafe_ptr,__t796t__,&__t797t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2117t=buffer__unsafe_ptr;
  *__t2118t=buffer__unsafe_size;
  *__t2119t=buffer__unsafe_offset;
  *__t2120t=buffer__unsafe_align;
  *__t2121t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2122t, uint64_t* __t2123t, uint16_t* __t2124t, uint16_t* __t2125t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2122t=unsafe_ptr;
  *__t2123t=unsafe_size;
  *__t2124t=unsafe_offset;
  *__t2125t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2126t) {
  *__t2126t=to;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2127t) {
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
  *__t2127t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2128t, uint64_t* __t2129t, uint64_t* __t2130t, char* __t2131t) {
  goto __t_return;
  __t_return:
  *__t2128t=unsafe_ptr;
  *__t2129t=dat__pos;
  *__t2130t=dat__length;
  *__t2131t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2132t, uint64_t* __t2133t, uint64_t* __t2134t, char* __t2135t) {
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
  *__t2132t=__t952t__unsafe_ptr;
  *__t2133t=__t952t__dat__pos;
  *__t2134t=__t952t__dat__length;
  *__t2135t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2136t, uint64_t* __t2137t, uint64_t* __t2138t, char* __t2139t) {
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
  *__t2136t=__t982t__unsafe_ptr;
  *__t2137t=__t982t__dat__pos;
  *__t2138t=__t982t__dat__length;
  *__t2139t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2140t, uint64_t* __t2141t, uint64_t* __t2142t, char* __t2143t) {
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
  *__t2140t=__t1005t__unsafe_ptr;
  *__t2141t=__t1005t__dat__pos;
  *__t2142t=__t1005t__dat__length;
  *__t2143t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2144t) {
  goto __t_return;
  __t_return:
  *__t2144t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2145t) {
  goto __t_return;
  __t_return:
  *__t2145t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2146t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2146t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2147t, uint64_t* __t2148t, uint16_t* __t2149t, uint16_t* __t2150t, uint64_t pos, char** __t2151t, uint64_t* __t2152t, uint16_t* __t2153t, uint16_t* __t2154t, uint64_t* __t2155t) {
  char* buf__unsafe_ptr=*__t2147t;
  uint64_t buf__unsafe_size=*__t2148t;
  uint16_t buf__unsafe_offset=*__t2149t;
  uint16_t buf__unsafe_align=*__t2150t;
  goto __t_return;
  __t_return:
  *__t2147t=buf__unsafe_ptr;
  *__t2148t=buf__unsafe_size;
  *__t2149t=buf__unsafe_offset;
  *__t2150t=buf__unsafe_align;
  *__t2151t=buf__unsafe_ptr;
  *__t2152t=buf__unsafe_size;
  *__t2153t=buf__unsafe_offset;
  *__t2154t=buf__unsafe_align;
  *__t2155t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t2156t, uint64_t* __t2157t, uint16_t* __t2158t, uint16_t* __t2159t, uint64_t* __t2160t, uint64_t length, char** __t2161t, uint64_t* __t2162t, uint16_t* __t2163t, uint16_t* __t2164t, uint64_t* __t2165t) {
  char* allocator__buf__unsafe_ptr=*__t2156t;
  uint64_t allocator__buf__unsafe_size=*__t2157t;
  uint16_t allocator__buf__unsafe_offset=*__t2158t;
  uint16_t allocator__buf__unsafe_align=*__t2159t;
  uint64_t allocator__pos=*__t2160t;
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
  *__t2156t=allocator__buf__unsafe_ptr;
  *__t2157t=allocator__buf__unsafe_size;
  *__t2158t=allocator__buf__unsafe_offset;
  *__t2159t=allocator__buf__unsafe_align;
  *__t2160t=allocator__pos;
  *__t2161t=__t850t__buf__unsafe_ptr;
  *__t2162t=__t850t__buf__unsafe_size;
  *__t2163t=__t850t__buf__unsafe_offset;
  *__t2164t=__t850t__buf__unsafe_align;
  *__t2165t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1028t(char** __t2166t, uint64_t* __t2167t, uint16_t* __t2168t, uint16_t* __t2169t, uint64_t* __t2170t, const char* _other, char** __t2171t, uint64_t* __t2172t, uint64_t* __t2173t, char* __t2174t) {
  char* CHARS__buf__unsafe_ptr=*__t2166t;
  uint64_t CHARS__buf__unsafe_size=*__t2167t;
  uint16_t CHARS__buf__unsafe_offset=*__t2168t;
  uint16_t CHARS__buf__unsafe_align=*__t2169t;
  uint64_t CHARS__pos=*__t2170t;
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__dat__pos=0;
  uint64_t __t1029t__dat__length=0;
  char __t1029t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1030t__=0;
  char* __t1031t__buf__unsafe_ptr=0;
  uint64_t __t1031t__buf__unsafe_size=0;
  uint16_t __t1031t__buf__unsafe_offset=0;
  uint16_t __t1031t__buf__unsafe_align=0;
  uint64_t __t1031t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1032t__unsafe_ptr=0;
  uint64_t __t1032t__dat__pos=0;
  uint64_t __t1032t__dat__length=0;
  char __t1032t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(_other,&__t1029t__unsafe_ptr,&__t1029t__dat__pos,&__t1029t__dat__length,&__t1029t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1029t__unsafe_ptr;
  other__dat__pos=__t1029t__dat__pos;
  other__dat__length=__t1029t__dat__length;
  other__dat__first=__t1029t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1030t__);
  __t_errcode=alloc__t843t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1030t__,&__t1031t__buf__unsafe_ptr,&__t1031t__buf__unsafe_size,&__t1031t__buf__unsafe_offset,&__t1031t__buf__unsafe_align,&__t1031t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1031t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1031t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1031t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1031t__buf__unsafe_align;
  surface__pos=__t1031t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1032t__unsafe_ptr,&__t1032t__dat__pos,&__t1032t__dat__length,&__t1032t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2166t=CHARS__buf__unsafe_ptr;
  *__t2167t=CHARS__buf__unsafe_size;
  *__t2168t=CHARS__buf__unsafe_offset;
  *__t2169t=CHARS__buf__unsafe_align;
  *__t2170t=CHARS__pos;
  *__t2171t=__t1032t__unsafe_ptr;
  *__t2172t=__t1032t__dat__pos;
  *__t2173t=__t1032t__dat__length;
  *__t2174t=__t1032t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t2011t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t2175t, uint64_t* __t2176t, uint64_t* __t2177t, char* __t2178t, char** __t2179t, uint64_t* __t2180t, uint64_t* __t2181t, char* __t2182t) {
  goto __t_return;
  __t_return:
  *__t2175t=name__unsafe_ptr;
  *__t2176t=name__dat__pos;
  *__t2177t=name__dat__length;
  *__t2178t=name__dat__first;
  *__t2179t=surname__unsafe_ptr;
  *__t2180t=surname__dat__pos;
  *__t2181t=surname__dat__length;
  *__t2182t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t2013t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t380t(__t2014t);
  print__t378t(__t2016t,__t374t);
  print__t1131t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t378t(__t2019t,__t374t);
  print__t1131t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t380t(__t2014t);
}

static inline __attribute__((always_inline)) int test__t2023t(char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t, uint64_t* __t2187t, char** __t2188t, uint64_t* __t2189t, uint16_t* __t2190t, uint16_t* __t2191t) {
  char* __t2026t__unsafe_ptr=0;
  uint64_t __t2026t__unsafe_size=0;
  uint16_t __t2026t__unsafe_offset=0;
  uint16_t __t2026t__unsafe_align=0;
  uint64_t __t2027t=0;
  char* __t2028t__unsafe_ptr=0;
  uint64_t __t2028t__unsafe_size=0;
  uint16_t __t2028t__unsafe_offset=0;
  uint16_t __t2028t__unsafe_align=0;
  char __t2029t____t692t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t2032t__unsafe_ptr=0;
  uint64_t __t2032t__unsafe_size=0;
  uint16_t __t2032t__unsafe_offset=0;
  uint16_t __t2032t__unsafe_align=0;
  uint64_t __t2033t=0;
  uint64_t __t2034t__=0;
  char* __t2035t__unsafe_ptr=0;
  uint64_t __t2035t__unsafe_size=0;
  uint16_t __t2035t__unsafe_offset=0;
  uint16_t __t2035t__unsafe_align=0;
  char __t2036t____t692t__=0;
  char* __t2037t__buf__unsafe_ptr=0;
  uint64_t __t2037t__buf__unsafe_size=0;
  uint16_t __t2037t__buf__unsafe_offset=0;
  uint16_t __t2037t__buf__unsafe_align=0;
  uint64_t __t2037t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t2038t=0;
  char* __t2039t__=0;
  uint64_t __t2040t=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* __t2044t__unsafe_ptr=0;
  uint64_t __t2044t__dat__pos=0;
  uint64_t __t2044t__dat__length=0;
  char __t2044t__dat__first=0;
  char* __t2045t__name__unsafe_ptr=0;
  uint64_t __t2045t__name__dat__pos=0;
  uint64_t __t2045t__name__dat__length=0;
  char __t2045t__name__dat__first=0;
  char* __t2045t__surname__unsafe_ptr=0;
  uint64_t __t2045t__surname__dat__pos=0;
  uint64_t __t2045t__surname__dat__length=0;
  char __t2045t__surname__dat__first=0;
  uint64_t __t2046t=0;
  char* __t2047t__=0;
  char* __t2048t__name__unsafe_ptr=0;
  uint64_t __t2048t__name__dat__pos=0;
  uint64_t __t2048t__name__dat__length=0;
  char __t2048t__name__dat__first=0;
  char* __t2048t__surname__unsafe_ptr=0;
  uint64_t __t2048t__surname__dat__pos=0;
  uint64_t __t2048t__surname__dat__length=0;
  char __t2048t__surname__dat__first=0;
  char* __t2050t__unsafe_ptr=0;
  uint64_t __t2050t__unsafe_size=0;
  uint16_t __t2050t__unsafe_offset=0;
  uint16_t __t2050t__unsafe_align=0;
  char* __t2054t__unsafe_ptr=0;
  uint64_t __t2054t__unsafe_size=0;
  uint16_t __t2054t__unsafe_offset=0;
  uint16_t __t2054t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t2024t(&__t2026t__unsafe_ptr,&__t2026t__unsafe_size,&__t2026t__unsafe_offset,&__t2026t__unsafe_align);
  __t2027t=4;
  __t_errcode=alloc__t690t(&__t2026t__unsafe_ptr,&__t2026t__unsafe_size,&__t2026t__unsafe_offset,&__t2026t__unsafe_align,__t2027t,&__t2028t__unsafe_ptr,&__t2028t__unsafe_size,&__t2028t__unsafe_offset,&__t2028t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t2028t__unsafe_ptr;
  people__unsafe_size=__t2028t__unsafe_size;
  people__unsafe_offset=__t2028t__unsafe_offset;
  people__unsafe_align=__t2028t__unsafe_align;
  char____t_buffer____buffer__t2030t(&__t2032t__unsafe_ptr,&__t2032t__unsafe_size,&__t2032t__unsafe_offset,&__t2032t__unsafe_align);
  __t2033t=4;
  KB__t639t(__t2033t,&__t2034t__);
  __t_errcode=alloc__t690t(&__t2032t__unsafe_ptr,&__t2032t__unsafe_size,&__t2032t__unsafe_offset,&__t2032t__unsafe_align,__t2034t__,&__t2035t__unsafe_ptr,&__t2035t__unsafe_size,&__t2035t__unsafe_offset,&__t2035t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t2035t__unsafe_ptr,&__t2035t__unsafe_size,&__t2035t__unsafe_offset,&__t2035t__unsafe_align,&__t2037t__buf__unsafe_ptr,&__t2037t__buf__unsafe_size,&__t2037t__buf__unsafe_offset,&__t2037t__buf__unsafe_align,&__t2037t__pos);
  buf__buf__unsafe_ptr=__t2037t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2037t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2037t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2037t__buf__unsafe_align;
  buf__pos=__t2037t__pos;
  __t2038t=0;
  __t_errcode=mutget__t791t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t2038t,&__t2039t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2040t=0;
  __t_errcode=copy__t1028t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2041t,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1028t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2043t,&__t2044t__unsafe_ptr,&__t2044t__dat__pos,&__t2044t__dat__length,&__t2044t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t2011t(__t2040t,__t2042t__unsafe_ptr,__t2042t__dat__pos,__t2042t__dat__length,__t2042t__dat__first,__t2044t__unsafe_ptr,__t2044t__dat__pos,__t2044t__dat__length,__t2044t__dat__first,&__t2045t__name__unsafe_ptr,&__t2045t__name__dat__pos,&__t2045t__name__dat__length,&__t2045t__name__dat__first,&__t2045t__surname__unsafe_ptr,&__t2045t__surname__dat__pos,&__t2045t__surname__dat__length,&__t2045t__surname__dat__first);
  if(!__t2039t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2039t__,&__t2045t__name__unsafe_ptr,8);
  memcpy(__t2039t__+8,&__t2045t__name__dat__pos,8);
  memcpy(__t2039t__+16,&__t2045t__name__dat__length,8);
  memcpy(__t2039t__+24,&__t2045t__name__dat__first,1);
  memcpy(__t2039t__+25,&__t2045t__surname__unsafe_ptr,8);
  memcpy(__t2039t__+33,&__t2045t__surname__dat__pos,8);
  memcpy(__t2039t__+41,&__t2045t__surname__dat__length,8);
  memcpy(__t2039t__+49,&__t2045t__surname__dat__first,1);
  __t2046t=0;
  __t_errcode=get__t798t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t2046t,&__t2047t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2047t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2048t__name__unsafe_ptr,__t2047t__,8);
  memcpy(&__t2048t__name__dat__pos,__t2047t__+8,8);
  memcpy(&__t2048t__name__dat__length,__t2047t__+16,8);
  memcpy(&__t2048t__name__dat__first,__t2047t__+24,1);
  memcpy(&__t2048t__surname__unsafe_ptr,__t2047t__+25,8);
  memcpy(&__t2048t__surname__dat__pos,__t2047t__+33,8);
  memcpy(&__t2048t__surname__dat__length,__t2047t__+41,8);
  memcpy(&__t2048t__surname__dat__first,__t2047t__+49,1);
  print__t2013t(__t2048t__name__unsafe_ptr,__t2048t__name__dat__pos,__t2048t__name__dat__length,__t2048t__name__dat__first,__t2048t__surname__unsafe_ptr,__t2048t__surname__dat__pos,__t2048t__surname__dat__length,__t2048t__surname__dat__first);
  __t2050t__unsafe_ptr=people__unsafe_ptr;
  __t2050t__unsafe_size=people__unsafe_size;
  __t2050t__unsafe_offset=people__unsafe_offset+0;
  __t2050t__unsafe_align=people__unsafe_align;
  __t2054t__unsafe_ptr=__t2050t__unsafe_ptr;
  __t2054t__unsafe_size=__t2050t__unsafe_size;
  __t2054t__unsafe_offset=__t2050t__unsafe_offset+8;
  __t2054t__unsafe_align=__t2050t__unsafe_align;
  dat__unsafe_ptr=__t2054t__unsafe_ptr;
  dat__unsafe_size=__t2054t__unsafe_size;
  dat__unsafe_offset=__t2054t__unsafe_offset;
  dat__unsafe_align=__t2054t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buf__buf__unsafe_ptr,&__t2036t____t692t__);
  if(__t2036t____t692t__){
  free__t661t(&buf__buf__unsafe_ptr);
  }
  exists__t591t(dat__unsafe_ptr,&__t2029t____t692t__);
  if(__t2029t____t692t__){
  free__t661t(&dat__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2183t=buf__buf__unsafe_ptr;
  *__t2184t=buf__buf__unsafe_size;
  *__t2185t=buf__buf__unsafe_offset;
  *__t2186t=buf__buf__unsafe_align;
  *__t2187t=buf__pos;
  *__t2188t=dat__unsafe_ptr;
  *__t2189t=dat__unsafe_size;
  *__t2190t=dat__unsafe_offset;
  *__t2191t=dat__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2058t() {
  char* __t2060t__buf__buf__unsafe_ptr=0;
  uint64_t __t2060t__buf__buf__unsafe_size=0;
  uint16_t __t2060t__buf__buf__unsafe_offset=0;
  uint16_t __t2060t__buf__buf__unsafe_align=0;
  uint64_t __t2060t__buf__pos=0;
  char* __t2060t__dat__unsafe_ptr=0;
  uint64_t __t2060t__dat__unsafe_size=0;
  uint16_t __t2060t__dat__unsafe_offset=0;
  uint16_t __t2060t__dat__unsafe_align=0;
  char __t2061t____t2029t____t692t__=0;
  char __t2061t____t2036t____t692t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t2062t=0;
  char* __t2063t__=0;
  uint64_t __t2064t__pos=0;
  uint64_t __t2064t__length=0;
  char __t2064t__first=0;
  char* __t2065t__unsafe_ptr=0;
  uint64_t __t2065t__dat__pos=0;
  uint64_t __t2065t__dat__length=0;
  char __t2065t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t2023t(&__t2060t__buf__buf__unsafe_ptr,&__t2060t__buf__buf__unsafe_size,&__t2060t__buf__buf__unsafe_offset,&__t2060t__buf__buf__unsafe_align,&__t2060t__buf__pos,&__t2060t__dat__unsafe_ptr,&__t2060t__dat__unsafe_size,&__t2060t__dat__unsafe_offset,&__t2060t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t2060t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t2060t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t2060t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t2060t__buf__buf__unsafe_align;
  t__buf__pos=__t2060t__buf__pos;
  t__dat__unsafe_ptr=__t2060t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t2060t__dat__unsafe_size;
  t__dat__unsafe_offset=__t2060t__dat__unsafe_offset;
  t__dat__unsafe_align=__t2060t__dat__unsafe_align;
  __t2062t=0;
  __t_errcode=get__t798t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t2062t,&__t2063t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2063t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2064t__pos,__t2063t__,8);
  memcpy(&__t2064t__length,__t2063t__+8,8);
  memcpy(&__t2064t__first,__t2063t__+16,1);
  __t_errcode=str__t945t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t2064t__pos,__t2064t__length,__t2064t__first,&__t2065t__unsafe_ptr,&__t2065t__dat__pos,&__t2065t__dat__length,&__t2065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1131t(__t2065t__unsafe_ptr,__t2065t__dat__pos,__t2065t__dat__length,__t2065t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2060t__buf__buf__unsafe_ptr,&__t2061t____t2036t____t692t__);
  if(__t2061t____t2036t____t692t__){
  free__t661t(&__t2060t__buf__buf__unsafe_ptr);
  }
  exists__t591t(__t2060t__dat__unsafe_ptr,&__t2061t____t2029t____t692t__);
  if(__t2061t____t2029t____t692t__){
  free__t661t(&__t2060t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2058t();return 0;}