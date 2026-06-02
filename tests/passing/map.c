#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2020t="it's a me, manio.";
const char* const __t2018t="manio";
const char* const __t2013t="hello";
const char* const __t377t="\n";
const char* const __t2015t="hello world!";
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2028t(char** __t2050t, uint64_t* __t2051t, uint16_t* __t2052t, uint16_t* __t2053t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2050t=unsafe_ptr;
  *__t2051t=unsafe_size;
  *__t2052t=unsafe_offset;
  *__t2053t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2054t) {
  int value=0;
  *__t2054t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2055t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2055t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2056t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2056t=__t96t__;
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

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2058t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2058t=__t488t__;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2059t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2059t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2060t) {
  char* allocated=*__t2060t;
  if(allocated){
  free(allocated);
  }
  *__t2060t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2061t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2061t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2062t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2062t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2063t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2063t=value;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2064t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2064t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2065t) {
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
  *__t2065t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2066t, uint64_t* __t2067t, uint16_t* __t2068t, uint16_t* __t2069t, uint64_t size, char** __t2070t, uint64_t* __t2071t, uint16_t* __t2072t, uint16_t* __t2073t) {
  char* buffer__unsafe_ptr=*__t2066t;
  uint64_t buffer__unsafe_size=*__t2067t;
  uint16_t buffer__unsafe_offset=*__t2068t;
  uint16_t buffer__unsafe_align=*__t2069t;
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
  *__t2066t=buffer__unsafe_ptr;
  *__t2067t=buffer__unsafe_size;
  *__t2068t=buffer__unsafe_offset;
  *__t2069t=buffer__unsafe_align;
  *__t2070t=buffer__unsafe_ptr;
  *__t2071t=buffer__unsafe_size;
  *__t2072t=buffer__unsafe_offset;
  *__t2073t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t632t(char** __t2074t, uint64_t* __t2075t, uint16_t* __t2076t, uint16_t* __t2077t, char** __t2078t, uint64_t* __t2079t, uint16_t* __t2080t, uint16_t* __t2081t, uint64_t* __t2082t) {
  char* buf__unsafe_ptr=*__t2074t;
  uint64_t buf__unsafe_size=*__t2075t;
  uint16_t buf__unsafe_offset=*__t2076t;
  uint16_t buf__unsafe_align=*__t2077t;
  uint64_t __t633t=0;
  uint64_t __t634t=0;
  uint64_t pos=0;
  __t633t=0;
  __t634t=__t633t;
  pos=__t634t;
  goto __t_return;
  __t_return:
  *__t2074t=buf__unsafe_ptr;
  *__t2075t=buf__unsafe_size;
  *__t2076t=buf__unsafe_offset;
  *__t2077t=buf__unsafe_align;
  *__t2078t=buf__unsafe_ptr;
  *__t2079t=buf__unsafe_size;
  *__t2080t=buf__unsafe_offset;
  *__t2081t=buf__unsafe_align;
  *__t2082t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1997t(char** __t2083t, uint64_t* __t2084t, uint16_t* __t2085t, uint16_t* __t2086t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2083t=unsafe_ptr;
  *__t2084t=unsafe_size;
  *__t2085t=unsafe_offset;
  *__t2086t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1913t(char** __t2087t, uint64_t* __t2088t, uint16_t* __t2089t, uint16_t* __t2090t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2087t=unsafe_ptr;
  *__t2088t=unsafe_size;
  *__t2089t=unsafe_offset;
  *__t2090t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2091t) {
  goto __t_return;
  __t_return:
  *__t2091t=buffer__unsafe_size;
}

int strmap__t1912t(char** __t2092t, uint64_t* __t2093t, uint16_t* __t2094t, uint16_t* __t2095t, char** __t2096t, uint64_t* __t2097t, uint16_t* __t2098t, uint16_t* __t2099t, char** __t2100t, uint64_t* __t2101t, uint16_t* __t2102t, uint16_t* __t2103t) {
  char* values__unsafe_ptr=*__t2092t;
  uint64_t values__unsafe_size=*__t2093t;
  uint16_t values__unsafe_offset=*__t2094t;
  uint16_t values__unsafe_align=*__t2095t;
  char* __t1915t__unsafe_ptr=0;
  uint64_t __t1915t__unsafe_size=0;
  uint16_t __t1915t__unsafe_offset=0;
  uint16_t __t1915t__unsafe_align=0;
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__unsafe_size=0;
  uint16_t __t1916t__unsafe_offset=0;
  uint16_t __t1916t__unsafe_align=0;
  uint64_t __t1917t__=0;
  char* __t1918t__unsafe_ptr=0;
  uint64_t __t1918t__unsafe_size=0;
  uint16_t __t1918t__unsafe_offset=0;
  uint16_t __t1918t__unsafe_align=0;
  char __t1919t____t517t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1913t(&__t1915t__unsafe_ptr,&__t1915t__unsafe_size,&__t1915t__unsafe_offset,&__t1915t__unsafe_align);
  __t1916t__unsafe_ptr=__t1915t__unsafe_ptr;
  __t1916t__unsafe_size=__t1915t__unsafe_size;
  __t1916t__unsafe_offset=__t1915t__unsafe_offset;
  __t1916t__unsafe_align=__t1915t__unsafe_align;
  len__t604t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1917t__);
  __t_errcode=alloc__t515t(&__t1916t__unsafe_ptr,&__t1916t__unsafe_size,&__t1916t__unsafe_offset,&__t1916t__unsafe_align,__t1917t__,&__t1918t__unsafe_ptr,&__t1918t__unsafe_size,&__t1918t__unsafe_offset,&__t1918t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1918t__unsafe_ptr;
  keys__unsafe_size=__t1918t__unsafe_size;
  keys__unsafe_offset=__t1918t__unsafe_offset;
  keys__unsafe_align=__t1918t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(keys__unsafe_ptr,&__t1919t____t517t__);
  if(__t1919t____t517t__){
  free__t508t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t2092t=values__unsafe_ptr;
  *__t2093t=values__unsafe_size;
  *__t2094t=values__unsafe_offset;
  *__t2095t=values__unsafe_align;
  *__t2096t=keys__unsafe_ptr;
  *__t2097t=keys__unsafe_size;
  *__t2098t=keys__unsafe_offset;
  *__t2099t=keys__unsafe_align;
  *__t2100t=values__unsafe_ptr;
  *__t2101t=values__unsafe_size;
  *__t2102t=values__unsafe_offset;
  *__t2103t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2104t, uint64_t* __t2105t, uint16_t* __t2106t, uint16_t* __t2107t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2104t=unsafe_ptr;
  *__t2105t=unsafe_size;
  *__t2106t=unsafe_offset;
  *__t2107t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2108t) {
  *__t2108t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2109t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2109t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2110t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2110t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2111t) {
  *__t2111t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2112t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2112t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2113t) {
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
  *__t2113t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2114t, uint64_t* __t2115t, uint64_t* __t2116t, char* __t2117t) {
  goto __t_return;
  __t_return:
  *__t2114t=unsafe_ptr;
  *__t2115t=dat__pos;
  *__t2116t=dat__length;
  *__t2117t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2118t, uint64_t* __t2119t, uint64_t* __t2120t, char* __t2121t) {
  char* unsafe_ptr=0;
  uint64_t __t646t__=0;
  uint64_t __t647t=0;
  char __t648t__=0;
  uint64_t __t649t__=0;
  uint64_t __t650t=0;
  char __t651t__=0;
  char* __t652t__unsafe_ptr=0;
  uint64_t __t652t__dat__pos=0;
  uint64_t __t652t__dat__length=0;
  char __t652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=CHARS__unsafe_ptr;
  nat__t512t(CHARS__unsafe_align,&__t646t__);
  __t647t=1;
  neq__t143t(__t646t__,__t647t,&__t648t__);
  if(__t648t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(CHARS__unsafe_offset,&__t649t__);
  __t650t=0;
  neq__t143t(__t649t__,__t650t,&__t651t__);
  if(__t651t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t641t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2118t=__t652t__unsafe_ptr;
  *__t2119t=__t652t__dat__pos;
  *__t2120t=__t652t__dat__length;
  *__t2121t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2122t, uint64_t* __t2123t, uint64_t* __t2124t, char* __t2125t) {
  uint64_t __t678t=0;
  char __t679t__=0;
  char* __t680t__=0;
  char __t681t__value=0;
  char first=0;
  char* __t682t__unsafe_ptr=0;
  uint64_t __t682t__dat__pos=0;
  uint64_t __t682t__dat__length=0;
  char __t682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t678t=0;
  neq__t143t(length,__t678t,&__t679t__);
  if(__t679t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t680t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t681t__value,__t680t__,1);
  first=__t681t__value;
  }
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t682t__unsafe_ptr,&__t682t__dat__pos,&__t682t__dat__length,&__t682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2122t=__t682t__unsafe_ptr;
  *__t2123t=__t682t__dat__pos;
  *__t2124t=__t682t__dat__length;
  *__t2125t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t2126t, uint64_t* __t2127t, uint64_t* __t2128t, char* __t2129t) {
  char* __t684t__unsafe_ptr=0;
  uint64_t __t684t__unsafe_size=0;
  uint16_t __t684t__unsafe_offset=0;
  uint16_t __t684t__unsafe_align=0;
  char* __t685t__unsafe_ptr=0;
  uint64_t __t685t__unsafe_size=0;
  uint16_t __t685t__unsafe_offset=0;
  uint16_t __t685t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t686t__=0;
  uint64_t length=0;
  uint64_t __t687t=0;
  uint64_t __t688t__=0;
  uint64_t __t689t=0;
  char* __t690t__unsafe_ptr=0;
  uint64_t __t690t__dat__pos=0;
  uint64_t __t690t__dat__length=0;
  char __t690t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t684t__unsafe_ptr,&__t684t__unsafe_size,&__t684t__unsafe_offset,&__t684t__unsafe_align);
  __t685t__unsafe_ptr=__t684t__unsafe_ptr;
  __t685t__unsafe_size=__t684t__unsafe_size;
  __t685t__unsafe_offset=__t684t__unsafe_offset;
  __t685t__unsafe_align=__t684t__unsafe_align;
  buf__unsafe_ptr=__t685t__unsafe_ptr;
  buf__unsafe_size=__t685t__unsafe_size;
  buf__unsafe_offset=__t685t__unsafe_offset;
  buf__unsafe_align=__t685t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t686t__);
  buf__unsafe_ptr=__t686t__;
  if(c){
  length=strlen(c);
  }
  __t687t=1;
  add__t174t(length,__t687t,&__t688t__);
  buf__unsafe_size=__t688t__;
  __t689t=0;
  __t_errcode=str__t677t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t689t,length,&__t690t__unsafe_ptr,&__t690t__dat__pos,&__t690t__dat__length,&__t690t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2126t=__t690t__unsafe_ptr;
  *__t2127t=__t690t__dat__pos;
  *__t2128t=__t690t__dat__length;
  *__t2129t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1531t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2130t, uint64_t* __t2131t, uint64_t* __t2132t, char* __t2133t) {
  goto __t_return;
  __t_return:
  *__t2130t=r__unsafe_ptr;
  *__t2131t=r__dat__pos;
  *__t2132t=r__dat__length;
  *__t2133t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2134t) {
  goto __t_return;
  __t_return:
  *__t2134t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1535t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2135t) {
  uint64_t __t1536t=0;
  uint64_t __t1537t__=0;
  char __t1538t__=0;
  __t1536t=0;
  len__t691t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1537t__);
  eq__t119t(__t1536t,__t1537t__,&__t1538t__);
  goto __t_return;
  __t_return:
  *__t2135t=__t1538t__;
}

static inline __attribute__((always_inline)) void raw__t1529t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2136t, uint64_t* __t2137t, uint64_t* __t2138t, char* __t2139t) {
  goto __t_return;
  __t_return:
  *__t2136t=r__s__unsafe_ptr;
  *__t2137t=r__s__dat__pos;
  *__t2138t=r__s__dat__length;
  *__t2139t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t2140t, uint64_t* __t2141t) {
  int __t468t=0;
  uint64_t __t469t=0;
  uint64_t _from=0;
  uint64_t __t470t=0;
  uint64_t from=0;
  __t469t=0;
  _from=__t469t;
  __t470t=_from;
  from=__t470t;
  goto __t_return;
  __t_return:
  *__t2140t=from;
  *__t2141t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t2142t, uint64_t r__to, uint64_t* __t2143t) {
  uint64_t r__from=*__t2142t;
  char __t477t__=0;
  uint64_t ret=0;
  uint64_t __t478t=0;
  uint64_t __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t478t=1;
  add__t174t(ret,__t478t,&__t479t__);
  r__from=__t479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2142t=r__from;
  *__t2143t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t443t(uint64_t value, uint64_t* __t2144t) {
  goto __t_return;
  __t_return:
  *__t2144t=value;
}

static inline __attribute__((always_inline)) void lshift__t453t(uint64_t x__value, uint64_t y, uint64_t* __t2145t) {
  uint64_t z=0;
  uint64_t __t454t__value=0;
  z=(x__value<<y);
  bits__t443t(z,&__t454t__value);
  goto __t_return;
  __t_return:
  *__t2145t=__t454t__value;
}

static inline __attribute__((always_inline)) void nat__t438t(uint64_t x, uint64_t* __t2146t) {
  int __t439t=0;
  int __t440t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2146t=value;
}

static inline __attribute__((always_inline)) void nat__t449t(uint64_t x__value, uint64_t* __t2147t) {
  uint64_t __t450t__=0;
  nat__t438t(x__value,&__t450t__);
  goto __t_return;
  __t_return:
  *__t2147t=__t450t__;
}

static inline __attribute__((always_inline)) void get__t830t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2148t) {
  uint64_t __t831t__=0;
  char* __t832t__=0;
  add__t174t(s__dat__pos,i,&__t831t__);
  add__t510t(s__unsafe_ptr,__t831t__,&__t832t__);
  goto __t_return;
  __t_return:
  *__t2148t=__t832t__;
}

static inline __attribute__((always_inline)) void nat__t441t(char x, uint64_t* __t2149t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2149t=value;
}

static inline __attribute__((always_inline)) int mod__t227t(uint64_t x, uint64_t y, uint64_t* __t2150t) {
  uint64_t zero=0;
  char __t228t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t119t(y,zero,&__t228t__);
  if(__t228t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2150t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1480t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2151t) {
  uint64_t __t1481t=0;
  uint64_t __t1482t=0;
  uint64_t h=0;
  uint64_t __t1483t__=0;
  uint64_t __t1484t__from=0;
  uint64_t __t1484t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1485t=0;
  uint64_t __t1486t__=0;
  uint64_t i=0;
  uint64_t __t1487t__value=0;
  uint64_t __t1488t=0;
  uint64_t __t1489t__value=0;
  uint64_t __t1490t__=0;
  uint64_t __t1491t__=0;
  char* __t1492t__=0;
  char __t1493t__value=0;
  uint64_t __t1494t__=0;
  uint64_t __t1495t__=0;
  uint64_t __t1496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1481t=5381;
  __t1482t=__t1481t;
  h=__t1482t;
  len__t691t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1483t__);
  range__t467t(__t1483t__,&__t1484t__from,&__t1484t__to);
  iter__from=__t1484t__from;
  iter__to=__t1484t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1486t__);
  __t1485t=__t_complain;
  i=__t1486t__;
  __t1485t=__t1485t==0;
  if(!__t1485t){
  break;
  }
  bits__t443t(h,&__t1487t__value);
  __t1488t=5;
  lshift__t453t(__t1487t__value,__t1488t,&__t1489t__value);
  nat__t449t(__t1489t__value,&__t1490t__);
  add__t174t(__t1490t__,h,&__t1491t__);
  get__t830t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1492t__);
  if(!__t1492t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1493t__value,__t1492t__,1);
  nat__t441t(__t1493t__value,&__t1494t__);
  add__t174t(__t1491t__,__t1494t__,&__t1495t__);
  h=__t1495t__;
  }
  __t_errcode=mod__t227t(h,size,&__t1496t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2151t=__t1496t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2152t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2152t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2153t) {
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
  *__t2153t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t, uint64_t i, char** __t2158t) {
  char* buffer__unsafe_ptr=*__t2154t;
  uint64_t buffer__unsafe_size=*__t2155t;
  uint16_t buffer__unsafe_offset=*__t2156t;
  uint16_t buffer__unsafe_align=*__t2157t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t592t__);
  mul__t198t(i,__t592t__,&__t593t__);
  nat__t512t(buffer__unsafe_offset,&__t594t__);
  add__t174t(__t593t__,__t594t__,&__t595t__);
  add__t510t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2154t=buffer__unsafe_ptr;
  *__t2155t=buffer__unsafe_size;
  *__t2156t=buffer__unsafe_offset;
  *__t2157t=buffer__unsafe_align;
  *__t2158t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t695t(char x, char y, char* __t2159t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2159t=z;
}

static inline __attribute__((always_inline)) void eq__t834t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2160t) {
  uint64_t __t835t__=0;
  uint64_t n=0;
  uint64_t __t836t__=0;
  char __t837t__=0;
  char __t838t=0;
  char __t839t__=0;
  char __t840t=0;
  char z=0;
  len__t691t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t835t__);
  n=__t835t__;
  len__t691t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t836t__);
  neq__t143t(n,__t836t__,&__t837t__);
  if(__t837t__){
  __t838t=0;
  goto __t_return;
  }
  neq__t695t(x__dat__first,y__dat__first,&__t839t__);
  if(__t839t__){
  __t840t=0;
  __t838t=__t840t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t838t=z;
  goto __t_return;
  __t_return:
  *__t2160t=__t838t;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2161t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2161t=z;
}

int at__t1811t(char** __t2162t, uint64_t* __t2163t, uint16_t* __t2164t, uint16_t* __t2165t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2166t) {
  char* data__unsafe_ptr=*__t2162t;
  uint64_t data__unsafe_size=*__t2163t;
  uint16_t data__unsafe_offset=*__t2164t;
  uint16_t data__unsafe_align=*__t2165t;
  char* __t1812t__unsafe_ptr=0;
  uint64_t __t1812t__dat__pos=0;
  uint64_t __t1812t__dat__length=0;
  char __t1812t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1813t__=0;
  uint64_t __t1814t=0;
  uint64_t __t1815t=0;
  char* __t1816t__=0;
  char* __t1817t__s__unsafe_ptr=0;
  uint64_t __t1817t__s__dat__pos=0;
  uint64_t __t1817t__s__dat__length=0;
  char __t1817t__s__dat__first=0;
  uint64_t __t1817t__cost=0;
  char* __t1818t__unsafe_ptr=0;
  uint64_t __t1818t__dat__pos=0;
  uint64_t __t1818t__dat__length=0;
  char __t1818t__dat__first=0;
  int __t1819t=0;
  int __t1820t__=0;
  uint64_t __t1821t__=0;
  uint64_t n=0;
  uint64_t __t1822t__=0;
  uint64_t pos=0;
  uint64_t __t1823t__from=0;
  uint64_t __t1823t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1824t=0;
  uint64_t __t1825t__=0;
  uint64_t i=0;
  uint64_t __t1826t__=0;
  uint64_t __t1827t=0;
  uint64_t idx=0;
  char __t1828t__=0;
  uint64_t __t1829t__=0;
  uint64_t __t1830t=0;
  char __t1831t__=0;
  char* __t1832t__=0;
  char* __t1833t__s__unsafe_ptr=0;
  uint64_t __t1833t__s__dat__pos=0;
  uint64_t __t1833t__s__dat__length=0;
  char __t1833t__s__dat__first=0;
  uint64_t __t1833t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1834t__unsafe_ptr=0;
  uint64_t __t1834t__dat__pos=0;
  uint64_t __t1834t__dat__length=0;
  char __t1834t__dat__first=0;
  char __t1835t__=0;
  char* __t1836t__=0;
  char* __t1837t__unsafe_ptr=0;
  uint64_t __t1837t__dat__pos=0;
  uint64_t __t1837t__dat__length=0;
  char __t1837t__dat__first=0;
  char __t1838t__=0;
  char __t1839t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1840t__=0;
  char* __t1841t__s__unsafe_ptr=0;
  uint64_t __t1841t__s__dat__pos=0;
  uint64_t __t1841t__s__dat__length=0;
  char __t1841t__s__dat__first=0;
  uint64_t __t1841t__cost=0;
  char* __t1842t__unsafe_ptr=0;
  uint64_t __t1842t__dat__pos=0;
  uint64_t __t1842t__dat__length=0;
  char __t1842t__dat__first=0;
  char* __t1843t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1531t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1812t__unsafe_ptr,&__t1812t__dat__pos,&__t1812t__dat__length,&__t1812t__dat__first);
  k__unsafe_ptr=__t1812t__unsafe_ptr;
  k__dat__pos=__t1812t__dat__pos;
  k__dat__length=__t1812t__dat__length;
  k__dat__first=__t1812t__dat__first;
  is_zero__t1535t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1813t__);
  if(__t1813t__){
  __t1814t=0;
  goto __t_return;
  }
  __t1815t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1815t,&__t1816t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1816t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1817t__s__unsafe_ptr,__t1816t__,8);
  memcpy(&__t1817t__s__dat__pos,__t1816t__+8,8);
  memcpy(&__t1817t__s__dat__length,__t1816t__+16,8);
  memcpy(&__t1817t__s__dat__first,__t1816t__+24,1);
  memcpy(&__t1817t__cost,__t1816t__+25,8);
  raw__t1529t(__t1817t__s__unsafe_ptr,__t1817t__s__dat__pos,__t1817t__s__dat__length,__t1817t__s__dat__first,__t1817t__cost,&__t1818t__unsafe_ptr,&__t1818t__dat__pos,&__t1818t__dat__length,&__t1818t__dat__first);
  not__t36t(__t1819t,&__t1820t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1821t__);
  n=__t1821t__;
  __t_errcode=hash__t1480t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1822t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1822t__;
  range__t467t(n,&__t1823t__from,&__t1823t__to);
  iter__from=__t1823t__from;
  iter__to=__t1823t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1825t__);
  __t1824t=__t_complain;
  i=__t1825t__;
  __t1824t=__t1824t==0;
  if(!__t1824t){
  break;
  }
  add__t174t(pos,i,&__t1826t__);
  __t1827t=__t1826t__;
  idx=__t1827t;
  ge__t323t(idx,n,&__t1828t__);
  if(__t1828t__){
  __t_errcode=sub__t351t(idx,n,&__t1829t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1829t__;
  }
  __t1830t=0;
  eq__t119t(idx,__t1830t,&__t1831t__);
  if(__t1831t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1832t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1832t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1833t__s__unsafe_ptr,__t1832t__,8);
  memcpy(&__t1833t__s__dat__pos,__t1832t__+8,8);
  memcpy(&__t1833t__s__dat__length,__t1832t__+16,8);
  memcpy(&__t1833t__s__dat__first,__t1832t__+24,1);
  memcpy(&__t1833t__cost,__t1832t__+25,8);
  entry__s__unsafe_ptr=__t1833t__s__unsafe_ptr;
  entry__s__dat__pos=__t1833t__s__dat__pos;
  entry__s__dat__length=__t1833t__s__dat__length;
  entry__s__dat__first=__t1833t__s__dat__first;
  entry__cost=__t1833t__cost;
  raw__t1529t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1834t__unsafe_ptr,&__t1834t__dat__pos,&__t1834t__dat__length,&__t1834t__dat__first);
  is_zero__t1535t(__t1834t__unsafe_ptr,__t1834t__dat__pos,__t1834t__dat__length,__t1834t__dat__first,&__t1835t__);
  if(__t1835t__){
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1836t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1836t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1836t__,&k__unsafe_ptr,8);
  memcpy(__t1836t__+8,&k__dat__pos,8);
  memcpy(__t1836t__+16,&k__dat__length,8);
  memcpy(__t1836t__+24,&k__dat__first,1);
  memcpy(__t1836t__+25,&i,8);
  __t1814t=idx;
  goto __t_return;
  }
  raw__t1529t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1837t__unsafe_ptr,&__t1837t__dat__pos,&__t1837t__dat__length,&__t1837t__dat__first);
  eq__t834t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1837t__unsafe_ptr,__t1837t__dat__pos,__t1837t__dat__length,__t1837t__dat__first,&__t1838t__);
  if(__t1838t__){
  __t1814t=idx;
  goto __t_return;
  }
  gt__t275t(i,entry__cost,&__t1839t__);
  if(__t1839t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1840t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1840t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1841t__s__unsafe_ptr,__t1840t__,8);
  memcpy(&__t1841t__s__dat__pos,__t1840t__+8,8);
  memcpy(&__t1841t__s__dat__length,__t1840t__+16,8);
  memcpy(&__t1841t__s__dat__first,__t1840t__+24,1);
  memcpy(&__t1841t__cost,__t1840t__+25,8);
  raw__t1529t(__t1841t__s__unsafe_ptr,__t1841t__s__dat__pos,__t1841t__s__dat__length,__t1841t__s__dat__first,__t1841t__cost,&__t1842t__unsafe_ptr,&__t1842t__dat__pos,&__t1842t__dat__length,&__t1842t__dat__first);
  k__unsafe_ptr=__t1842t__unsafe_ptr;
  k__dat__pos=__t1842t__dat__pos;
  k__dat__length=__t1842t__dat__length;
  k__dat__first=__t1842t__dat__first;
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1843t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1843t__,&tmp__unsafe_ptr,8);
  memcpy(__t1843t__+8,&tmp__dat__pos,8);
  memcpy(__t1843t__+16,&tmp__dat__length,8);
  memcpy(__t1843t__+24,&tmp__dat__first,1);
  memcpy(__t1843t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2162t=data__unsafe_ptr;
  *__t2163t=data__unsafe_size;
  *__t2164t=data__unsafe_offset;
  *__t2165t=data__unsafe_align;
  *__t2166t=__t1814t;
  
  return __t_errcode;
}

int mutget__t1936t(char** __t2167t, uint64_t* __t2168t, uint16_t* __t2169t, uint16_t* __t2170t, char** __t2171t, uint64_t* __t2172t, uint16_t* __t2173t, uint16_t* __t2174t, const char* key, char** __t2175t) {
  char* keys__unsafe_ptr=*__t2167t;
  uint64_t keys__unsafe_size=*__t2168t;
  uint16_t keys__unsafe_offset=*__t2169t;
  uint16_t keys__unsafe_align=*__t2170t;
  char* values__unsafe_ptr=*__t2171t;
  uint64_t values__unsafe_size=*__t2172t;
  uint16_t values__unsafe_offset=*__t2173t;
  uint16_t values__unsafe_align=*__t2174t;
  char* __t1937t__unsafe_ptr=0;
  uint64_t __t1937t__dat__pos=0;
  uint64_t __t1937t__dat__length=0;
  char __t1937t__dat__first=0;
  uint64_t __t1938t__=0;
  char* __t1939t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(key,&__t1937t__unsafe_ptr,&__t1937t__dat__pos,&__t1937t__dat__length,&__t1937t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1811t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1937t__unsafe_ptr,__t1937t__dat__pos,__t1937t__dat__length,__t1937t__dat__first,&__t1938t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t590t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1938t__,&__t1939t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2167t=keys__unsafe_ptr;
  *__t2168t=keys__unsafe_size;
  *__t2169t=keys__unsafe_offset;
  *__t2170t=keys__unsafe_align;
  *__t2171t=values__unsafe_ptr;
  *__t2172t=values__unsafe_size;
  *__t2173t=values__unsafe_offset;
  *__t2174t=values__unsafe_align;
  *__t2175t=__t1939t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t676t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2176t, uint64_t* __t2177t, uint64_t* __t2178t, char* __t2179t) {
  goto __t_return;
  __t_return:
  *__t2176t=other__unsafe_ptr;
  *__t2177t=other__dat__pos;
  *__t2178t=other__dat__length;
  *__t2179t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t749t(char** __t2180t, uint64_t* __t2181t, uint16_t* __t2182t, uint16_t* __t2183t, uint64_t* __t2184t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2185t, uint64_t* __t2186t, uint64_t* __t2187t, char* __t2188t) {
  char* CHARS__buf__unsafe_ptr=*__t2180t;
  uint64_t CHARS__buf__unsafe_size=*__t2181t;
  uint16_t CHARS__buf__unsafe_offset=*__t2182t;
  uint16_t CHARS__buf__unsafe_align=*__t2183t;
  uint64_t CHARS__pos=*__t2184t;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t751t__=0;
  uint64_t __t752t__=0;
  uint64_t next_pos=0;
  uint64_t __t753t__=0;
  char __t754t__=0;
  uint64_t __t755t=0;
  uint64_t __t756t__=0;
  uint64_t prev_pos=0;
  char* __t757t__unsafe_ptr=0;
  uint64_t __t757t__dat__pos=0;
  uint64_t __t757t__dat__length=0;
  char __t757t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t676t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  other__unsafe_ptr=__t750t__unsafe_ptr;
  other__dat__pos=__t750t__dat__pos;
  other__dat__length=__t750t__dat__length;
  other__dat__first=__t750t__dat__first;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t751t__);
  add__t174t(CHARS__pos,__t751t__,&__t752t__);
  next_pos=__t752t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t753t__);
  gt__t275t(next_pos,__t753t__,&__t754t__);
  if(__t754t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t755t=0;
  add__t174t(CHARS__pos,__t755t,&__t756t__);
  prev_pos=__t756t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t757t__unsafe_ptr,&__t757t__dat__pos,&__t757t__dat__length,&__t757t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2180t=CHARS__buf__unsafe_ptr;
  *__t2181t=CHARS__buf__unsafe_size;
  *__t2182t=CHARS__buf__unsafe_offset;
  *__t2183t=CHARS__buf__unsafe_align;
  *__t2184t=CHARS__pos;
  *__t2185t=__t757t__unsafe_ptr;
  *__t2186t=__t757t__dat__pos;
  *__t2187t=__t757t__dat__length;
  *__t2188t=__t757t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1954t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2189t, char** __t2190t, uint64_t* __t2191t, uint64_t* __t2192t, char* __t2193t) {
  uint64_t pos=*__t2189t;
  uint64_t __t1955t=0;
  char __t1956t__=0;
  uint64_t __t1957t=0;
  uint64_t __t1958t__=0;
  uint64_t __t1959t=0;
  char* __t1960t__=0;
  char* __t1961t__s__unsafe_ptr=0;
  uint64_t __t1961t__s__dat__pos=0;
  uint64_t __t1961t__s__dat__length=0;
  char __t1961t__s__dat__first=0;
  uint64_t __t1961t__cost=0;
  char* __t1962t__unsafe_ptr=0;
  uint64_t __t1962t__dat__pos=0;
  uint64_t __t1962t__dat__length=0;
  char __t1962t__dat__first=0;
  char* __t1963t__=0;
  char* __t1964t__s__unsafe_ptr=0;
  uint64_t __t1964t__s__dat__pos=0;
  uint64_t __t1964t__s__dat__length=0;
  char __t1964t__s__dat__first=0;
  uint64_t __t1964t__cost=0;
  char* __t1965t__unsafe_ptr=0;
  uint64_t __t1965t__dat__pos=0;
  uint64_t __t1965t__dat__length=0;
  char __t1965t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1966t=0;
  uint64_t __t1967t__=0;
  char* __t1968t__unsafe_ptr=0;
  uint64_t __t1968t__dat__pos=0;
  uint64_t __t1968t__dat__length=0;
  char __t1968t__dat__first=0;
  char __t1969t__=0;
  char* __t1970t__=0;
  char* __t1971t__s__unsafe_ptr=0;
  uint64_t __t1971t__s__dat__pos=0;
  uint64_t __t1971t__s__dat__length=0;
  char __t1971t__s__dat__first=0;
  uint64_t __t1971t__cost=0;
  char* __t1972t__unsafe_ptr=0;
  uint64_t __t1972t__dat__pos=0;
  uint64_t __t1972t__dat__length=0;
  char __t1972t__dat__first=0;
  uint64_t __t1973t=0;
  uint64_t __t1974t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1955t=0;
  eq__t119t(pos,__t1955t,&__t1956t__);
  if(__t1956t__){
  __t1957t=1;
  add__t174t(pos,__t1957t,&__t1958t__);
  pos=__t1958t__;
  __t1959t=0;
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1959t,&__t1960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1960t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1961t__s__unsafe_ptr,__t1960t__,8);
  memcpy(&__t1961t__s__dat__pos,__t1960t__+8,8);
  memcpy(&__t1961t__s__dat__length,__t1960t__+16,8);
  memcpy(&__t1961t__s__dat__first,__t1960t__+24,1);
  memcpy(&__t1961t__cost,__t1960t__+25,8);
  raw__t1529t(__t1961t__s__unsafe_ptr,__t1961t__s__dat__pos,__t1961t__s__dat__length,__t1961t__s__dat__first,__t1961t__cost,&__t1962t__unsafe_ptr,&__t1962t__dat__pos,&__t1962t__dat__length,&__t1962t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1963t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1963t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1964t__s__unsafe_ptr,__t1963t__,8);
  memcpy(&__t1964t__s__dat__pos,__t1963t__+8,8);
  memcpy(&__t1964t__s__dat__length,__t1963t__+16,8);
  memcpy(&__t1964t__s__dat__first,__t1963t__+24,1);
  memcpy(&__t1964t__cost,__t1963t__+25,8);
  raw__t1529t(__t1964t__s__unsafe_ptr,__t1964t__s__dat__pos,__t1964t__s__dat__length,__t1964t__s__dat__first,__t1964t__cost,&__t1965t__unsafe_ptr,&__t1965t__dat__pos,&__t1965t__dat__length,&__t1965t__dat__first);
  ret__unsafe_ptr=__t1965t__unsafe_ptr;
  ret__dat__pos=__t1965t__dat__pos;
  ret__dat__length=__t1965t__dat__length;
  ret__dat__first=__t1965t__dat__first;
  __t1966t=1;
  add__t174t(pos,__t1966t,&__t1967t__);
  pos=__t1967t__;
  while(1){
  raw__t1531t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1968t__unsafe_ptr,&__t1968t__dat__pos,&__t1968t__dat__length,&__t1968t__dat__first);
  is_zero__t1535t(__t1968t__unsafe_ptr,__t1968t__dat__pos,__t1968t__dat__length,__t1968t__dat__first,&__t1969t__);
  if(!__t1969t__){
  break;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1970t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1970t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1971t__s__unsafe_ptr,__t1970t__,8);
  memcpy(&__t1971t__s__dat__pos,__t1970t__+8,8);
  memcpy(&__t1971t__s__dat__length,__t1970t__+16,8);
  memcpy(&__t1971t__s__dat__first,__t1970t__+24,1);
  memcpy(&__t1971t__cost,__t1970t__+25,8);
  raw__t1529t(__t1971t__s__unsafe_ptr,__t1971t__s__dat__pos,__t1971t__s__dat__length,__t1971t__s__dat__first,__t1971t__cost,&__t1972t__unsafe_ptr,&__t1972t__dat__pos,&__t1972t__dat__length,&__t1972t__dat__first);
  ret__unsafe_ptr=__t1972t__unsafe_ptr;
  ret__dat__pos=__t1972t__dat__pos;
  ret__dat__length=__t1972t__dat__length;
  ret__dat__first=__t1972t__dat__first;
  __t1973t=1;
  add__t174t(pos,__t1973t,&__t1974t__);
  pos=__t1974t__;
  }
  __t1962t__unsafe_ptr=ret__unsafe_ptr;
  __t1962t__dat__pos=ret__dat__pos;
  __t1962t__dat__length=ret__dat__length;
  __t1962t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2189t=pos;
  *__t2190t=__t1962t__unsafe_ptr;
  *__t2191t=__t1962t__dat__pos;
  *__t2192t=__t1962t__dat__length;
  *__t2193t=__t1962t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2005t(char** __t2194t, uint64_t* __t2195t, uint16_t* __t2196t, uint16_t* __t2197t, uint64_t* __t2198t, char** __t2199t, uint64_t* __t2200t, uint16_t* __t2201t, uint16_t* __t2202t, char** __t2203t, uint64_t* __t2204t, uint16_t* __t2205t, uint16_t* __t2206t) {
  char* buf__buf__unsafe_ptr=*__t2194t;
  uint64_t buf__buf__unsafe_size=*__t2195t;
  uint16_t buf__buf__unsafe_offset=*__t2196t;
  uint16_t buf__buf__unsafe_align=*__t2197t;
  uint64_t buf__pos=*__t2198t;
  char* __t2006t__unsafe_ptr=0;
  uint64_t __t2006t__unsafe_size=0;
  uint16_t __t2006t__unsafe_offset=0;
  uint16_t __t2006t__unsafe_align=0;
  uint64_t __t2007t=0;
  char* __t2008t__unsafe_ptr=0;
  uint64_t __t2008t__unsafe_size=0;
  uint16_t __t2008t__unsafe_offset=0;
  uint16_t __t2008t__unsafe_align=0;
  char __t2009t____t517t__=0;
  char* __t2010t__keys__unsafe_ptr=0;
  uint64_t __t2010t__keys__unsafe_size=0;
  uint16_t __t2010t__keys__unsafe_offset=0;
  uint16_t __t2010t__keys__unsafe_align=0;
  char* __t2010t__values__unsafe_ptr=0;
  uint64_t __t2010t__values__unsafe_size=0;
  uint16_t __t2010t__values__unsafe_offset=0;
  uint16_t __t2010t__values__unsafe_align=0;
  char __t2011t____t1919t____t517t__=0;
  char* __t2012t__keys__unsafe_ptr=0;
  uint64_t __t2012t__keys__unsafe_size=0;
  uint16_t __t2012t__keys__unsafe_offset=0;
  uint16_t __t2012t__keys__unsafe_align=0;
  char* __t2012t__values__unsafe_ptr=0;
  uint64_t __t2012t__values__unsafe_size=0;
  uint16_t __t2012t__values__unsafe_offset=0;
  uint16_t __t2012t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2014t__=0;
  char* __t2016t__unsafe_ptr=0;
  uint64_t __t2016t__dat__pos=0;
  uint64_t __t2016t__dat__length=0;
  char __t2016t__dat__first=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__dat__pos=0;
  uint64_t __t2017t__dat__length=0;
  char __t2017t__dat__first=0;
  char* __t2019t__=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__dat__pos=0;
  uint64_t __t2021t__dat__length=0;
  char __t2021t__dat__first=0;
  char* __t2022t__unsafe_ptr=0;
  uint64_t __t2022t__dat__pos=0;
  uint64_t __t2022t__dat__length=0;
  char __t2022t__dat__first=0;
  char* __t2023t__buf__unsafe_ptr=0;
  uint64_t __t2023t__buf__unsafe_size=0;
  uint16_t __t2023t__buf__unsafe_offset=0;
  uint16_t __t2023t__buf__unsafe_align=0;
  uint64_t __t2023t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t2024t=0;
  char* __t2025t__unsafe_ptr=0;
  uint64_t __t2025t__dat__pos=0;
  uint64_t __t2025t__dat__length=0;
  char __t2025t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1997t(&__t2006t__unsafe_ptr,&__t2006t__unsafe_size,&__t2006t__unsafe_offset,&__t2006t__unsafe_align);
  __t2007t=128;
  __t_errcode=alloc__t515t(&__t2006t__unsafe_ptr,&__t2006t__unsafe_size,&__t2006t__unsafe_offset,&__t2006t__unsafe_align,__t2007t,&__t2008t__unsafe_ptr,&__t2008t__unsafe_size,&__t2008t__unsafe_offset,&__t2008t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1912t(&__t2008t__unsafe_ptr,&__t2008t__unsafe_size,&__t2008t__unsafe_offset,&__t2008t__unsafe_align,&__t2010t__keys__unsafe_ptr,&__t2010t__keys__unsafe_size,&__t2010t__keys__unsafe_offset,&__t2010t__keys__unsafe_align,&__t2010t__values__unsafe_ptr,&__t2010t__values__unsafe_size,&__t2010t__values__unsafe_offset,&__t2010t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2012t__keys__unsafe_ptr=__t2010t__keys__unsafe_ptr;
  __t2012t__keys__unsafe_size=__t2010t__keys__unsafe_size;
  __t2012t__keys__unsafe_offset=__t2010t__keys__unsafe_offset;
  __t2012t__keys__unsafe_align=__t2010t__keys__unsafe_align;
  __t2012t__values__unsafe_ptr=__t2010t__values__unsafe_ptr;
  __t2012t__values__unsafe_size=__t2010t__values__unsafe_size;
  __t2012t__values__unsafe_offset=__t2010t__values__unsafe_offset;
  __t2012t__values__unsafe_align=__t2010t__values__unsafe_align;
  __t_errcode=mutget__t1936t(&__t2012t__keys__unsafe_ptr,&__t2012t__keys__unsafe_size,&__t2012t__keys__unsafe_offset,&__t2012t__keys__unsafe_align,&__t2012t__values__unsafe_ptr,&__t2012t__values__unsafe_size,&__t2012t__values__unsafe_offset,&__t2012t__values__unsafe_align,__t2013t,&__t2014t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t683t(__t2015t,&__t2016t__unsafe_ptr,&__t2016t__dat__pos,&__t2016t__dat__length,&__t2016t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t749t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2016t__unsafe_ptr,__t2016t__dat__pos,__t2016t__dat__length,__t2016t__dat__first,&__t2017t__unsafe_ptr,&__t2017t__dat__pos,&__t2017t__dat__length,&__t2017t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2014t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2014t__,&__t2017t__unsafe_ptr,8);
  memcpy(__t2014t__+8,&__t2017t__dat__pos,8);
  memcpy(__t2014t__+16,&__t2017t__dat__length,8);
  memcpy(__t2014t__+24,&__t2017t__dat__first,1);
  __t_errcode=mutget__t1936t(&__t2012t__keys__unsafe_ptr,&__t2012t__keys__unsafe_size,&__t2012t__keys__unsafe_offset,&__t2012t__keys__unsafe_align,&__t2012t__values__unsafe_ptr,&__t2012t__values__unsafe_size,&__t2012t__values__unsafe_offset,&__t2012t__values__unsafe_align,__t2018t,&__t2019t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t683t(__t2020t,&__t2021t__unsafe_ptr,&__t2021t__dat__pos,&__t2021t__dat__length,&__t2021t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t749t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2021t__unsafe_ptr,__t2021t__dat__pos,__t2021t__dat__length,__t2021t__dat__first,&__t2022t__unsafe_ptr,&__t2022t__dat__pos,&__t2022t__dat__length,&__t2022t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2019t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2019t__,&__t2022t__unsafe_ptr,8);
  memcpy(__t2019t__+8,&__t2022t__dat__pos,8);
  memcpy(__t2019t__+16,&__t2022t__dat__length,8);
  memcpy(__t2019t__+24,&__t2022t__dat__first,1);
  bufpos__t632t(&__t2012t__keys__unsafe_ptr,&__t2012t__keys__unsafe_size,&__t2012t__keys__unsafe_offset,&__t2012t__keys__unsafe_align,&__t2023t__buf__unsafe_ptr,&__t2023t__buf__unsafe_size,&__t2023t__buf__unsafe_offset,&__t2023t__buf__unsafe_align,&__t2023t__pos);
  it__pos=__t2023t__pos;
  while(1){
  __t_complain=next__t1954t(__t2012t__keys__unsafe_ptr,__t2012t__keys__unsafe_size,__t2012t__keys__unsafe_offset,__t2012t__keys__unsafe_align,&it__pos,&__t2025t__unsafe_ptr,&__t2025t__dat__pos,&__t2025t__dat__length,&__t2025t__dat__first);
  __t2024t=__t_complain;
  key__unsafe_ptr=__t2025t__unsafe_ptr;
  key__dat__pos=__t2025t__dat__pos;
  key__dat__length=__t2025t__dat__length;
  key__dat__first=__t2025t__dat__first;
  __t2024t=__t2024t==0;
  if(!__t2024t){
  break;
  }
  print__t791t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2012t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2012t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2012t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2012t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2012t__values__unsafe_ptr;
  map__values__unsafe_size=__t2012t__values__unsafe_size;
  map__values__unsafe_offset=__t2012t__values__unsafe_offset;
  map__values__unsafe_align=__t2012t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(map__keys__unsafe_ptr,&__t2011t____t1919t____t517t__);
  if(__t2011t____t1919t____t517t__){
  free__t508t(&map__keys__unsafe_ptr);
  }
  exists__t442t(map__values__unsafe_ptr,&__t2009t____t517t__);
  if(__t2009t____t517t__){
  free__t508t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2194t=buf__buf__unsafe_ptr;
  *__t2195t=buf__buf__unsafe_size;
  *__t2196t=buf__buf__unsafe_offset;
  *__t2197t=buf__buf__unsafe_align;
  *__t2198t=buf__pos;
  *__t2199t=map__keys__unsafe_ptr;
  *__t2200t=map__keys__unsafe_size;
  *__t2201t=map__keys__unsafe_offset;
  *__t2202t=map__keys__unsafe_align;
  *__t2203t=map__values__unsafe_ptr;
  *__t2204t=map__values__unsafe_size;
  *__t2205t=map__values__unsafe_offset;
  *__t2206t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2027t(char** __t2207t, uint64_t* __t2208t, uint16_t* __t2209t, uint16_t* __t2210t, char** __t2211t, uint64_t* __t2212t, uint16_t* __t2213t, uint16_t* __t2214t, char** __t2215t, uint64_t* __t2216t, uint16_t* __t2217t, uint16_t* __t2218t, uint64_t* __t2219t) {
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__unsafe_size=0;
  uint16_t __t2030t__unsafe_offset=0;
  uint16_t __t2030t__unsafe_align=0;
  uint64_t __t2031t=0;
  uint64_t __t2032t__=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__unsafe_size=0;
  uint16_t __t2033t__unsafe_offset=0;
  uint16_t __t2033t__unsafe_align=0;
  char __t2034t____t517t__=0;
  char* __t2035t__buf__unsafe_ptr=0;
  uint64_t __t2035t__buf__unsafe_size=0;
  uint16_t __t2035t__buf__unsafe_offset=0;
  uint16_t __t2035t__buf__unsafe_align=0;
  uint64_t __t2035t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2036t__keys__unsafe_ptr=0;
  uint64_t __t2036t__keys__unsafe_size=0;
  uint16_t __t2036t__keys__unsafe_offset=0;
  uint16_t __t2036t__keys__unsafe_align=0;
  char* __t2036t__values__unsafe_ptr=0;
  uint64_t __t2036t__values__unsafe_size=0;
  uint16_t __t2036t__values__unsafe_offset=0;
  uint16_t __t2036t__values__unsafe_align=0;
  char __t2037t____t2009t____t517t__=0;
  char __t2037t____t2011t____t1919t____t517t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2028t(&__t2030t__unsafe_ptr,&__t2030t__unsafe_size,&__t2030t__unsafe_offset,&__t2030t__unsafe_align);
  __t2031t=4;
  KB__t486t(__t2031t,&__t2032t__);
  __t_errcode=alloc__t515t(&__t2030t__unsafe_ptr,&__t2030t__unsafe_size,&__t2030t__unsafe_offset,&__t2030t__unsafe_align,__t2032t__,&__t2033t__unsafe_ptr,&__t2033t__unsafe_size,&__t2033t__unsafe_offset,&__t2033t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t632t(&__t2033t__unsafe_ptr,&__t2033t__unsafe_size,&__t2033t__unsafe_offset,&__t2033t__unsafe_align,&__t2035t__buf__unsafe_ptr,&__t2035t__buf__unsafe_size,&__t2035t__buf__unsafe_offset,&__t2035t__buf__unsafe_align,&__t2035t__pos);
  buf__buf__unsafe_ptr=__t2035t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2035t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2035t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2035t__buf__unsafe_align;
  buf__pos=__t2035t__pos;
  __t_errcode=test__t2005t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2036t__keys__unsafe_ptr,&__t2036t__keys__unsafe_size,&__t2036t__keys__unsafe_offset,&__t2036t__keys__unsafe_align,&__t2036t__values__unsafe_ptr,&__t2036t__values__unsafe_size,&__t2036t__values__unsafe_offset,&__t2036t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2036t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2036t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2036t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2036t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2036t__values__unsafe_ptr;
  map__values__unsafe_size=__t2036t__values__unsafe_size;
  map__values__unsafe_offset=__t2036t__values__unsafe_offset;
  map__values__unsafe_align=__t2036t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(map__keys__unsafe_ptr,&__t2037t____t2011t____t1919t____t517t__);
  if(__t2037t____t2011t____t1919t____t517t__){
  free__t508t(&map__keys__unsafe_ptr);
  }
  exists__t442t(map__values__unsafe_ptr,&__t2037t____t2009t____t517t__);
  if(__t2037t____t2009t____t517t__){
  free__t508t(&map__values__unsafe_ptr);
  }
  exists__t442t(buf__buf__unsafe_ptr,&__t2034t____t517t__);
  if(__t2034t____t517t__){
  free__t508t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2207t=map__keys__unsafe_ptr;
  *__t2208t=map__keys__unsafe_size;
  *__t2209t=map__keys__unsafe_offset;
  *__t2210t=map__keys__unsafe_align;
  *__t2211t=map__values__unsafe_ptr;
  *__t2212t=map__values__unsafe_size;
  *__t2213t=map__values__unsafe_offset;
  *__t2214t=map__values__unsafe_align;
  *__t2215t=buf__buf__unsafe_ptr;
  *__t2216t=buf__buf__unsafe_size;
  *__t2217t=buf__buf__unsafe_offset;
  *__t2218t=buf__buf__unsafe_align;
  *__t2219t=buf__pos;
  
  return __t_errcode;
}

int raw__t1533t(const char* r, char** __t2220t, uint64_t* __t2221t, uint64_t* __t2222t, char* __t2223t) {
  char* __t1534t__unsafe_ptr=0;
  uint64_t __t1534t__dat__pos=0;
  uint64_t __t1534t__dat__length=0;
  char __t1534t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(r,&__t1534t__unsafe_ptr,&__t1534t__dat__pos,&__t1534t__dat__length,&__t1534t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2220t=__t1534t__unsafe_ptr;
  *__t2221t=__t1534t__dat__pos;
  *__t2222t=__t1534t__dat__length;
  *__t2223t=__t1534t__dat__first;
  
  return __t_errcode;
}

int find__t1577t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2224t) {
  char* __t1578t__unsafe_ptr=0;
  uint64_t __t1578t__dat__pos=0;
  uint64_t __t1578t__dat__length=0;
  char __t1578t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1579t__=0;
  uint64_t __t1580t=0;
  uint64_t __t1581t=0;
  char* __t1582t__=0;
  char* __t1583t__s__unsafe_ptr=0;
  uint64_t __t1583t__s__dat__pos=0;
  uint64_t __t1583t__s__dat__length=0;
  char __t1583t__s__dat__first=0;
  uint64_t __t1583t__cost=0;
  char* __t1584t__unsafe_ptr=0;
  uint64_t __t1584t__dat__pos=0;
  uint64_t __t1584t__dat__length=0;
  char __t1584t__dat__first=0;
  int __t1585t=0;
  int __t1586t__=0;
  uint64_t __t1587t__=0;
  uint64_t n=0;
  uint64_t __t1588t__=0;
  uint64_t pos=0;
  uint64_t __t1589t__from=0;
  uint64_t __t1589t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1590t=0;
  uint64_t __t1591t__=0;
  uint64_t i=0;
  uint64_t __t1592t__=0;
  uint64_t __t1593t=0;
  uint64_t idx=0;
  char __t1594t__=0;
  uint64_t __t1595t__=0;
  uint64_t __t1596t=0;
  char __t1597t__=0;
  char* __t1598t__=0;
  char* __t1599t__s__unsafe_ptr=0;
  uint64_t __t1599t__s__dat__pos=0;
  uint64_t __t1599t__s__dat__length=0;
  char __t1599t__s__dat__first=0;
  uint64_t __t1599t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1600t__unsafe_ptr=0;
  uint64_t __t1600t__dat__pos=0;
  uint64_t __t1600t__dat__length=0;
  char __t1600t__dat__first=0;
  char __t1601t__=0;
  char* __t1602t__unsafe_ptr=0;
  uint64_t __t1602t__dat__pos=0;
  uint64_t __t1602t__dat__length=0;
  char __t1602t__dat__first=0;
  char __t1603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1531t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1578t__unsafe_ptr,&__t1578t__dat__pos,&__t1578t__dat__length,&__t1578t__dat__first);
  k__unsafe_ptr=__t1578t__unsafe_ptr;
  k__dat__pos=__t1578t__dat__pos;
  k__dat__length=__t1578t__dat__length;
  k__dat__first=__t1578t__dat__first;
  is_zero__t1535t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1579t__);
  if(__t1579t__){
  __t1580t=0;
  goto __t_return;
  }
  __t1581t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1581t,&__t1582t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1582t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1583t__s__unsafe_ptr,__t1582t__,8);
  memcpy(&__t1583t__s__dat__pos,__t1582t__+8,8);
  memcpy(&__t1583t__s__dat__length,__t1582t__+16,8);
  memcpy(&__t1583t__s__dat__first,__t1582t__+24,1);
  memcpy(&__t1583t__cost,__t1582t__+25,8);
  raw__t1529t(__t1583t__s__unsafe_ptr,__t1583t__s__dat__pos,__t1583t__s__dat__length,__t1583t__s__dat__first,__t1583t__cost,&__t1584t__unsafe_ptr,&__t1584t__dat__pos,&__t1584t__dat__length,&__t1584t__dat__first);
  not__t36t(__t1585t,&__t1586t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1587t__);
  n=__t1587t__;
  __t_errcode=hash__t1480t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1588t__;
  range__t467t(n,&__t1589t__from,&__t1589t__to);
  iter__from=__t1589t__from;
  iter__to=__t1589t__to;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1591t__);
  __t1590t=__t_complain;
  i=__t1591t__;
  __t1590t=__t1590t==0;
  if(!__t1590t){
  break;
  }
  add__t174t(pos,i,&__t1592t__);
  __t1593t=__t1592t__;
  idx=__t1593t;
  ge__t323t(idx,n,&__t1594t__);
  if(__t1594t__){
  __t_errcode=sub__t351t(idx,n,&__t1595t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1595t__;
  }
  __t1596t=0;
  eq__t119t(idx,__t1596t,&__t1597t__);
  if(__t1597t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1598t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1599t__s__unsafe_ptr,__t1598t__,8);
  memcpy(&__t1599t__s__dat__pos,__t1598t__+8,8);
  memcpy(&__t1599t__s__dat__length,__t1598t__+16,8);
  memcpy(&__t1599t__s__dat__first,__t1598t__+24,1);
  memcpy(&__t1599t__cost,__t1598t__+25,8);
  entry__s__unsafe_ptr=__t1599t__s__unsafe_ptr;
  entry__s__dat__pos=__t1599t__s__dat__pos;
  entry__s__dat__length=__t1599t__s__dat__length;
  entry__s__dat__first=__t1599t__s__dat__first;
  entry__cost=__t1599t__cost;
  raw__t1529t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1600t__unsafe_ptr,&__t1600t__dat__pos,&__t1600t__dat__length,&__t1600t__dat__first);
  is_zero__t1535t(__t1600t__unsafe_ptr,__t1600t__dat__pos,__t1600t__dat__length,__t1600t__dat__first,&__t1601t__);
  if(__t1601t__){
  continue;
  }
  raw__t1529t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1602t__unsafe_ptr,&__t1602t__dat__pos,&__t1602t__dat__length,&__t1602t__dat__first);
  eq__t834t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1602t__unsafe_ptr,__t1602t__dat__pos,__t1602t__dat__length,__t1602t__dat__first,&__t1603t__);
  if(__t1603t__){
  __t1580t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2224t=__t1580t;
  
  return __t_errcode;
}

int get__t1928t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2225t) {
  char* __t1929t__unsafe_ptr=0;
  uint64_t __t1929t__dat__pos=0;
  uint64_t __t1929t__dat__length=0;
  char __t1929t__dat__first=0;
  uint64_t __t1930t__=0;
  char* __t1931t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1533t(key,&__t1929t__unsafe_ptr,&__t1929t__dat__pos,&__t1929t__dat__length,&__t1929t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1577t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1929t__unsafe_ptr,__t1929t__dat__pos,__t1929t__dat__length,__t1929t__dat__first,&__t1930t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t597t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1930t__,&__t1931t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2225t=__t1931t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2038t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2039t__=0;
  char* __t2040t____t675t__unsafe_ptr=0;
  uint64_t __t2040t____t675t__dat__pos=0;
  uint64_t __t2040t____t675t__dat__length=0;
  char __t2040t____t675t__dat__first=0;
  char* __t2042t__=0;
  char* __t2043t____t675t__unsafe_ptr=0;
  uint64_t __t2043t____t675t__dat__pos=0;
  uint64_t __t2043t____t675t__dat__length=0;
  char __t2043t____t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1928t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2013t,&__t2039t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2039t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2040t____t675t__unsafe_ptr,__t2039t__,8);
  memcpy(&__t2040t____t675t__dat__pos,__t2039t__+8,8);
  memcpy(&__t2040t____t675t__dat__length,__t2039t__+16,8);
  memcpy(&__t2040t____t675t__dat__first,__t2039t__+24,1);
  print__t791t(__t2040t____t675t__unsafe_ptr,__t2040t____t675t__dat__pos,__t2040t____t675t__dat__length,__t2040t____t675t__dat__first);
  __t_errcode=get__t1928t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2018t,&__t2042t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2042t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2043t____t675t__unsafe_ptr,__t2042t__,8);
  memcpy(&__t2043t____t675t__dat__pos,__t2042t__+8,8);
  memcpy(&__t2043t____t675t__dat__length,__t2042t__+16,8);
  memcpy(&__t2043t____t675t__dat__first,__t2042t__+24,1);
  print__t791t(__t2043t____t675t__unsafe_ptr,__t2043t____t675t__dat__pos,__t2043t____t675t__dat__length,__t2043t____t675t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2045t() {
  char* __t2047t__map__keys__unsafe_ptr=0;
  uint64_t __t2047t__map__keys__unsafe_size=0;
  uint16_t __t2047t__map__keys__unsafe_offset=0;
  uint16_t __t2047t__map__keys__unsafe_align=0;
  char* __t2047t__map__values__unsafe_ptr=0;
  uint64_t __t2047t__map__values__unsafe_size=0;
  uint16_t __t2047t__map__values__unsafe_offset=0;
  uint16_t __t2047t__map__values__unsafe_align=0;
  char* __t2047t__buf__buf__unsafe_ptr=0;
  uint64_t __t2047t__buf__buf__unsafe_size=0;
  uint16_t __t2047t__buf__buf__unsafe_offset=0;
  uint16_t __t2047t__buf__buf__unsafe_align=0;
  uint64_t __t2047t__buf__pos=0;
  char __t2048t____t2034t____t517t__=0;
  char __t2048t____t2037t____t2009t____t517t__=0;
  char __t2048t____t2037t____t2011t____t1919t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test2__t2027t(&__t2047t__map__keys__unsafe_ptr,&__t2047t__map__keys__unsafe_size,&__t2047t__map__keys__unsafe_offset,&__t2047t__map__keys__unsafe_align,&__t2047t__map__values__unsafe_ptr,&__t2047t__map__values__unsafe_size,&__t2047t__map__values__unsafe_offset,&__t2047t__map__values__unsafe_align,&__t2047t__buf__buf__unsafe_ptr,&__t2047t__buf__buf__unsafe_size,&__t2047t__buf__buf__unsafe_offset,&__t2047t__buf__buf__unsafe_align,&__t2047t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2038t(__t2047t__map__keys__unsafe_ptr,__t2047t__map__keys__unsafe_size,__t2047t__map__keys__unsafe_offset,__t2047t__map__keys__unsafe_align,__t2047t__map__values__unsafe_ptr,__t2047t__map__values__unsafe_size,__t2047t__map__values__unsafe_offset,__t2047t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t442t(__t2047t__map__keys__unsafe_ptr,&__t2048t____t2037t____t2011t____t1919t____t517t__);
  if(__t2048t____t2037t____t2011t____t1919t____t517t__){
  free__t508t(&__t2047t__map__keys__unsafe_ptr);
  }
  exists__t442t(__t2047t__map__values__unsafe_ptr,&__t2048t____t2037t____t2009t____t517t__);
  if(__t2048t____t2037t____t2009t____t517t__){
  free__t508t(&__t2047t__map__values__unsafe_ptr);
  }
  exists__t442t(__t2047t__buf__buf__unsafe_ptr,&__t2048t____t2034t____t517t__);
  if(__t2048t____t2034t____t517t__){
  free__t508t(&__t2047t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2045t();return 0;}