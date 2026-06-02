#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2047t="manio";
const char* const __t378t="\n";
const char* const __t2049t="it's a me, manio.";
const char* const __t2042t="hello";
const char* const __t2044t="hello world!";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2057t(char** __t2079t, uint64_t* __t2080t, uint16_t* __t2081t, uint16_t* __t2082t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2079t=unsafe_ptr;
  *__t2080t=unsafe_size;
  *__t2081t=unsafe_offset;
  *__t2082t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2083t) {
  int value=0;
  *__t2083t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2084t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2084t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2085t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2085t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2086t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2086t=z;
}

static inline __attribute__((always_inline)) void KB__t487t(uint64_t x, uint64_t* __t2087t) {
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  __t488t=1024;
  mul__t199t(x,__t488t,&__t489t__);
  goto __t_return;
  __t_return:
  *__t2087t=__t489t__;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2088t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2088t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2089t) {
  char* allocated=*__t2089t;
  if(allocated){
  free(allocated);
  }
  *__t2089t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2090t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2090t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2091t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2091t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2092t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2092t=value;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2093t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2093t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2094t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2094t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2095t, uint64_t* __t2096t, uint16_t* __t2097t, uint16_t* __t2098t, uint64_t size, char** __t2099t, uint64_t* __t2100t, uint16_t* __t2101t, uint16_t* __t2102t) {
  char* buffer__unsafe_ptr=*__t2095t;
  uint64_t buffer__unsafe_size=*__t2096t;
  uint16_t buffer__unsafe_offset=*__t2097t;
  uint16_t buffer__unsafe_align=*__t2098t;
  int __t517t=0;
  char __t518t__=0;
  char __t520t__=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t __t530t__=0;
  uint64_t bytes=0;
  uint64_t __t531t=0;
  char __t532t__=0;
  char* __t533t__=0;
  uint64_t __t534t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t520t__);
  if(__t520t__){
  __t521t=0;
  neq__t144t(size,__t521t,&__t522t__);
  if(__t522t__){
  __t523t=0;
  nat__t513t(buffer__unsafe_align,&__t524t__);
  mul__t199t(__t524t__,size,&__t525t__);
  zero__t510t(buffer__unsafe_ptr,__t523t,__t525t__);
  }
  goto __t_return;
  }
  __t527t=0;
  neq__t144t(buffer__unsafe_size,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t529t__);
  mul__t199t(__t529t__,size,&__t530t__);
  bytes=__t530t__;
  __t531t=0;
  eq__t120t(bytes,__t531t,&__t532t__);
  if(__t532t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t533t__;
  __t534t=0;
  zero__t510t(buffer__unsafe_ptr,__t534t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t518t__);
  if(__t518t__){
  free__t509t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2095t=buffer__unsafe_ptr;
  *__t2096t=buffer__unsafe_size;
  *__t2097t=buffer__unsafe_offset;
  *__t2098t=buffer__unsafe_align;
  *__t2099t=buffer__unsafe_ptr;
  *__t2100t=buffer__unsafe_size;
  *__t2101t=buffer__unsafe_offset;
  *__t2102t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t633t(char** __t2103t, uint64_t* __t2104t, uint16_t* __t2105t, uint16_t* __t2106t, char** __t2107t, uint64_t* __t2108t, uint16_t* __t2109t, uint16_t* __t2110t, uint64_t* __t2111t) {
  char* buf__unsafe_ptr=*__t2103t;
  uint64_t buf__unsafe_size=*__t2104t;
  uint16_t buf__unsafe_offset=*__t2105t;
  uint16_t buf__unsafe_align=*__t2106t;
  uint64_t __t634t=0;
  uint64_t __t635t=0;
  uint64_t pos=0;
  __t634t=0;
  __t635t=__t634t;
  pos=__t635t;
  goto __t_return;
  __t_return:
  *__t2103t=buf__unsafe_ptr;
  *__t2104t=buf__unsafe_size;
  *__t2105t=buf__unsafe_offset;
  *__t2106t=buf__unsafe_align;
  *__t2107t=buf__unsafe_ptr;
  *__t2108t=buf__unsafe_size;
  *__t2109t=buf__unsafe_offset;
  *__t2110t=buf__unsafe_align;
  *__t2111t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t2026t(char** __t2112t, uint64_t* __t2113t, uint16_t* __t2114t, uint16_t* __t2115t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t2112t=unsafe_ptr;
  *__t2113t=unsafe_size;
  *__t2114t=unsafe_offset;
  *__t2115t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1942t(char** __t2116t, uint64_t* __t2117t, uint16_t* __t2118t, uint16_t* __t2119t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t2116t=unsafe_ptr;
  *__t2117t=unsafe_size;
  *__t2118t=unsafe_offset;
  *__t2119t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2120t) {
  goto __t_return;
  __t_return:
  *__t2120t=buffer__unsafe_size;
}

int strmap__t1941t(char** __t2121t, uint64_t* __t2122t, uint16_t* __t2123t, uint16_t* __t2124t, char** __t2125t, uint64_t* __t2126t, uint16_t* __t2127t, uint16_t* __t2128t, char** __t2129t, uint64_t* __t2130t, uint16_t* __t2131t, uint16_t* __t2132t) {
  char* values__unsafe_ptr=*__t2121t;
  uint64_t values__unsafe_size=*__t2122t;
  uint16_t values__unsafe_offset=*__t2123t;
  uint16_t values__unsafe_align=*__t2124t;
  char* __t1944t__unsafe_ptr=0;
  uint64_t __t1944t__unsafe_size=0;
  uint16_t __t1944t__unsafe_offset=0;
  uint16_t __t1944t__unsafe_align=0;
  char* __t1945t__unsafe_ptr=0;
  uint64_t __t1945t__unsafe_size=0;
  uint16_t __t1945t__unsafe_offset=0;
  uint16_t __t1945t__unsafe_align=0;
  uint64_t __t1946t__=0;
  char* __t1947t__unsafe_ptr=0;
  uint64_t __t1947t__unsafe_size=0;
  uint16_t __t1947t__unsafe_offset=0;
  uint16_t __t1947t__unsafe_align=0;
  char __t1948t____t518t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1942t(&__t1944t__unsafe_ptr,&__t1944t__unsafe_size,&__t1944t__unsafe_offset,&__t1944t__unsafe_align);
  __t1945t__unsafe_ptr=__t1944t__unsafe_ptr;
  __t1945t__unsafe_size=__t1944t__unsafe_size;
  __t1945t__unsafe_offset=__t1944t__unsafe_offset;
  __t1945t__unsafe_align=__t1944t__unsafe_align;
  len__t605t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1946t__);
  __t_errcode=alloc__t516t(&__t1945t__unsafe_ptr,&__t1945t__unsafe_size,&__t1945t__unsafe_offset,&__t1945t__unsafe_align,__t1946t__,&__t1947t__unsafe_ptr,&__t1947t__unsafe_size,&__t1947t__unsafe_offset,&__t1947t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1947t__unsafe_ptr;
  keys__unsafe_size=__t1947t__unsafe_size;
  keys__unsafe_offset=__t1947t__unsafe_offset;
  keys__unsafe_align=__t1947t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(keys__unsafe_ptr,&__t1948t____t518t__);
  if(__t1948t____t518t__){
  free__t509t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t2121t=values__unsafe_ptr;
  *__t2122t=values__unsafe_size;
  *__t2123t=values__unsafe_offset;
  *__t2124t=values__unsafe_align;
  *__t2125t=keys__unsafe_ptr;
  *__t2126t=keys__unsafe_size;
  *__t2127t=keys__unsafe_offset;
  *__t2128t=keys__unsafe_align;
  *__t2129t=values__unsafe_ptr;
  *__t2130t=values__unsafe_size;
  *__t2131t=values__unsafe_offset;
  *__t2132t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t2133t, uint64_t* __t2134t, uint16_t* __t2135t, uint16_t* __t2136t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2133t=unsafe_ptr;
  *__t2134t=unsafe_size;
  *__t2135t=unsafe_offset;
  *__t2136t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2137t) {
  *__t2137t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2138t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2138t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2139t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2139t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2140t) {
  *__t2140t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2141t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2141t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2142t) {
  char __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  uint64_t __t603t__=0;
  char* __t604t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t599t__);
  if(__t599t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t600t__);
  mul__t199t(i,__t600t__,&__t601t__);
  nat__t513t(buffer__unsafe_offset,&__t602t__);
  add__t175t(__t601t__,__t602t__,&__t603t__);
  add__t511t(buffer__unsafe_ptr,__t603t__,&__t604t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2142t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2143t, uint64_t* __t2144t, uint64_t* __t2145t, char* __t2146t) {
  goto __t_return;
  __t_return:
  *__t2143t=unsafe_ptr;
  *__t2144t=dat__pos;
  *__t2145t=dat__length;
  *__t2146t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2147t, uint64_t* __t2148t, uint64_t* __t2149t, char* __t2150t) {
  char* unsafe_ptr=0;
  uint64_t __t647t__=0;
  uint64_t __t648t=0;
  char __t649t__=0;
  uint64_t __t650t__=0;
  uint64_t __t651t=0;
  char __t652t__=0;
  char* __t653t__unsafe_ptr=0;
  uint64_t __t653t__dat__pos=0;
  uint64_t __t653t__dat__length=0;
  char __t653t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t513t(buf__unsafe_align,&__t647t__);
  __t648t=1;
  neq__t144t(__t647t__,__t648t,&__t649t__);
  if(__t649t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t513t(buf__unsafe_offset,&__t650t__);
  __t651t=0;
  neq__t144t(__t650t__,__t651t,&__t652t__);
  if(__t652t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t642t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t653t__unsafe_ptr,&__t653t__dat__pos,&__t653t__dat__length,&__t653t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2147t=__t653t__unsafe_ptr;
  *__t2148t=__t653t__dat__pos;
  *__t2149t=__t653t__dat__length;
  *__t2150t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2151t, uint64_t* __t2152t, uint64_t* __t2153t, char* __t2154t) {
  uint64_t __t682t=0;
  char __t683t__=0;
  char* __t684t__=0;
  char __t685t__value=0;
  char first=0;
  char* __t686t__unsafe_ptr=0;
  uint64_t __t686t__dat__pos=0;
  uint64_t __t686t__dat__length=0;
  char __t686t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t682t=0;
  neq__t144t(length,__t682t,&__t683t__);
  if(__t683t__){
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t684t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t685t__value,__t684t__,1);
  first=__t685t__value;
  }
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t686t__unsafe_ptr,&__t686t__dat__pos,&__t686t__dat__length,&__t686t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2151t=__t686t__unsafe_ptr;
  *__t2152t=__t686t__dat__pos;
  *__t2153t=__t686t__dat__length;
  *__t2154t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t2155t, uint64_t* __t2156t, uint64_t* __t2157t, char* __t2158t) {
  char* __t705t__unsafe_ptr=0;
  uint64_t __t705t__unsafe_size=0;
  uint16_t __t705t__unsafe_offset=0;
  uint16_t __t705t__unsafe_align=0;
  char* __t706t__unsafe_ptr=0;
  uint64_t __t706t__unsafe_size=0;
  uint16_t __t706t__unsafe_offset=0;
  uint16_t __t706t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t707t__=0;
  uint64_t length=0;
  uint64_t __t708t=0;
  uint64_t __t709t__=0;
  uint64_t __t710t=0;
  char* __t712t__unsafe_ptr=0;
  uint64_t __t712t__dat__pos=0;
  uint64_t __t712t__dat__length=0;
  char __t712t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align);
  __t706t__unsafe_ptr=__t705t__unsafe_ptr;
  __t706t__unsafe_size=__t705t__unsafe_size;
  __t706t__unsafe_offset=__t705t__unsafe_offset;
  __t706t__unsafe_align=__t705t__unsafe_align;
  buf__unsafe_ptr=__t706t__unsafe_ptr;
  buf__unsafe_size=__t706t__unsafe_size;
  buf__unsafe_offset=__t706t__unsafe_offset;
  buf__unsafe_align=__t706t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t707t__);
  buf__unsafe_ptr=__t707t__;
  if(c){
  length=strlen(c);
  }
  __t708t=1;
  add__t175t(length,__t708t,&__t709t__);
  buf__unsafe_size=__t709t__;
  __t710t=0;
  __t_errcode=str__t681t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t710t,length,&__t712t__unsafe_ptr,&__t712t__dat__pos,&__t712t__dat__length,&__t712t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2155t=__t712t__unsafe_ptr;
  *__t2156t=__t712t__dat__pos;
  *__t2157t=__t712t__dat__length;
  *__t2158t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1560t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t2159t, uint64_t* __t2160t, uint64_t* __t2161t, char* __t2162t) {
  goto __t_return;
  __t_return:
  *__t2159t=r__unsafe_ptr;
  *__t2160t=r__dat__pos;
  *__t2161t=r__dat__length;
  *__t2162t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2163t) {
  goto __t_return;
  __t_return:
  *__t2163t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1564t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t2164t) {
  uint64_t __t1565t=0;
  uint64_t __t1566t__=0;
  char __t1567t__=0;
  __t1565t=0;
  len__t713t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1566t__);
  eq__t120t(__t1565t,__t1566t__,&__t1567t__);
  goto __t_return;
  __t_return:
  *__t2164t=__t1567t__;
}

static inline __attribute__((always_inline)) void raw__t1558t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t2165t, uint64_t* __t2166t, uint64_t* __t2167t, char* __t2168t) {
  goto __t_return;
  __t_return:
  *__t2165t=r__s__unsafe_ptr;
  *__t2166t=r__s__dat__pos;
  *__t2167t=r__s__dat__length;
  *__t2168t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t2169t, uint64_t* __t2170t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t2169t=from;
  *__t2170t=to;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t2171t, uint64_t r__to, uint64_t* __t2172t) {
  uint64_t r__from=*__t2171t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2171t=r__from;
  *__t2172t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t444t(uint64_t value, uint64_t* __t2173t) {
  goto __t_return;
  __t_return:
  *__t2173t=value;
}

static inline __attribute__((always_inline)) void lshift__t454t(uint64_t x__value, uint64_t y, uint64_t* __t2174t) {
  uint64_t z=0;
  uint64_t __t455t__value=0;
  z=(x__value<<y);
  bits__t444t(z,&__t455t__value);
  goto __t_return;
  __t_return:
  *__t2174t=__t455t__value;
}

static inline __attribute__((always_inline)) void nat__t439t(uint64_t x, uint64_t* __t2175t) {
  int __t440t=0;
  int __t441t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2175t=value;
}

static inline __attribute__((always_inline)) void nat__t450t(uint64_t x__value, uint64_t* __t2176t) {
  uint64_t __t451t__=0;
  nat__t439t(x__value,&__t451t__);
  goto __t_return;
  __t_return:
  *__t2176t=__t451t__;
}

static inline __attribute__((always_inline)) void get__t886t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2177t) {
  uint64_t __t887t__=0;
  char* __t888t__=0;
  add__t175t(s__dat__pos,i,&__t887t__);
  add__t511t(s__unsafe_ptr,__t887t__,&__t888t__);
  goto __t_return;
  __t_return:
  *__t2177t=__t888t__;
}

static inline __attribute__((always_inline)) void nat__t442t(char x, uint64_t* __t2178t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2178t=value;
}

static inline __attribute__((always_inline)) int mod__t228t(uint64_t x, uint64_t y, uint64_t* __t2179t) {
  uint64_t zero=0;
  char __t229t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t120t(y,zero,&__t229t__);
  if(__t229t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2179t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1509t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t2180t) {
  uint64_t __t1510t=0;
  uint64_t __t1511t=0;
  uint64_t h=0;
  uint64_t __t1512t__=0;
  uint64_t __t1513t__from=0;
  uint64_t __t1513t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1514t=0;
  uint64_t __t1515t__=0;
  uint64_t i=0;
  uint64_t __t1516t__value=0;
  uint64_t __t1517t=0;
  uint64_t __t1518t__value=0;
  uint64_t __t1519t__=0;
  uint64_t __t1520t__=0;
  char* __t1521t__=0;
  char __t1522t__value=0;
  uint64_t __t1523t__=0;
  uint64_t __t1524t__=0;
  uint64_t __t1525t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1510t=5381;
  __t1511t=__t1510t;
  h=__t1511t;
  len__t713t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1512t__);
  range__t468t(__t1512t__,&__t1513t__from,&__t1513t__to);
  iter__from=__t1513t__from;
  iter__to=__t1513t__to;
  while(1){
  __t_complain=next__t477t(&iter__from,iter__to,&__t1515t__);
  __t1514t=__t_complain;
  i=__t1515t__;
  __t1514t=__t1514t==0;
  if(!__t1514t){
  break;
  }
  bits__t444t(h,&__t1516t__value);
  __t1517t=5;
  lshift__t454t(__t1516t__value,__t1517t,&__t1518t__value);
  nat__t450t(__t1518t__value,&__t1519t__);
  add__t175t(__t1519t__,h,&__t1520t__);
  get__t886t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1521t__);
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1522t__value,__t1521t__,1);
  nat__t442t(__t1522t__value,&__t1523t__);
  add__t175t(__t1520t__,__t1523t__,&__t1524t__);
  h=__t1524t__;
  }
  __t_errcode=mod__t228t(h,size,&__t1525t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2180t=__t1525t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2181t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2181t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2182t) {
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
  
  __t_failure:__t_return:
  *__t2182t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t, uint64_t i, char** __t2187t) {
  char* buffer__unsafe_ptr=*__t2183t;
  uint64_t buffer__unsafe_size=*__t2184t;
  uint16_t buffer__unsafe_offset=*__t2185t;
  uint16_t buffer__unsafe_align=*__t2186t;
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t593t__);
  mul__t199t(i,__t593t__,&__t594t__);
  nat__t513t(buffer__unsafe_offset,&__t595t__);
  add__t175t(__t594t__,__t595t__,&__t596t__);
  add__t511t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2183t=buffer__unsafe_ptr;
  *__t2184t=buffer__unsafe_size;
  *__t2185t=buffer__unsafe_offset;
  *__t2186t=buffer__unsafe_align;
  *__t2187t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t717t(char x, char y, char* __t2188t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2188t=z;
}

static inline __attribute__((always_inline)) void eq__t774t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2189t) {
  uint64_t __t775t__=0;
  uint64_t n=0;
  uint64_t __t776t__=0;
  char __t777t__=0;
  char __t778t=0;
  char __t779t__=0;
  char __t780t=0;
  char z=0;
  len__t713t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t775t__);
  n=__t775t__;
  len__t713t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t776t__);
  neq__t144t(n,__t776t__,&__t777t__);
  if(__t777t__){
  __t778t=0;
  goto __t_return;
  }
  neq__t717t(x__dat__first,y__dat__first,&__t779t__);
  if(__t779t__){
  __t780t=0;
  __t778t=__t780t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t778t=z;
  goto __t_return;
  __t_return:
  *__t2189t=__t778t;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2190t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2190t=z;
}

int at__t1840t(char** __t2191t, uint64_t* __t2192t, uint16_t* __t2193t, uint16_t* __t2194t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2195t) {
  char* data__unsafe_ptr=*__t2191t;
  uint64_t data__unsafe_size=*__t2192t;
  uint16_t data__unsafe_offset=*__t2193t;
  uint16_t data__unsafe_align=*__t2194t;
  char* __t1841t__unsafe_ptr=0;
  uint64_t __t1841t__dat__pos=0;
  uint64_t __t1841t__dat__length=0;
  char __t1841t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1842t__=0;
  uint64_t __t1843t=0;
  uint64_t __t1844t=0;
  char* __t1845t__=0;
  char* __t1846t__s__unsafe_ptr=0;
  uint64_t __t1846t__s__dat__pos=0;
  uint64_t __t1846t__s__dat__length=0;
  char __t1846t__s__dat__first=0;
  uint64_t __t1846t__cost=0;
  char* __t1847t__unsafe_ptr=0;
  uint64_t __t1847t__dat__pos=0;
  uint64_t __t1847t__dat__length=0;
  char __t1847t__dat__first=0;
  int __t1848t=0;
  int __t1849t__=0;
  uint64_t __t1850t__=0;
  uint64_t n=0;
  uint64_t __t1851t__=0;
  uint64_t pos=0;
  uint64_t __t1852t__from=0;
  uint64_t __t1852t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1853t=0;
  uint64_t __t1854t__=0;
  uint64_t i=0;
  uint64_t __t1855t__=0;
  uint64_t __t1856t=0;
  uint64_t idx=0;
  char __t1857t__=0;
  uint64_t __t1858t__=0;
  uint64_t __t1859t=0;
  char __t1860t__=0;
  char* __t1861t__=0;
  char* __t1862t__s__unsafe_ptr=0;
  uint64_t __t1862t__s__dat__pos=0;
  uint64_t __t1862t__s__dat__length=0;
  char __t1862t__s__dat__first=0;
  uint64_t __t1862t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1863t__unsafe_ptr=0;
  uint64_t __t1863t__dat__pos=0;
  uint64_t __t1863t__dat__length=0;
  char __t1863t__dat__first=0;
  char __t1864t__=0;
  char* __t1865t__=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char __t1867t__=0;
  char __t1868t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1869t__=0;
  char* __t1870t__s__unsafe_ptr=0;
  uint64_t __t1870t__s__dat__pos=0;
  uint64_t __t1870t__s__dat__length=0;
  char __t1870t__s__dat__first=0;
  uint64_t __t1870t__cost=0;
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__dat__pos=0;
  uint64_t __t1871t__dat__length=0;
  char __t1871t__dat__first=0;
  char* __t1872t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1560t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1841t__unsafe_ptr,&__t1841t__dat__pos,&__t1841t__dat__length,&__t1841t__dat__first);
  k__unsafe_ptr=__t1841t__unsafe_ptr;
  k__dat__pos=__t1841t__dat__pos;
  k__dat__length=__t1841t__dat__length;
  k__dat__first=__t1841t__dat__first;
  is_zero__t1564t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1842t__);
  if(__t1842t__){
  __t1843t=0;
  goto __t_return;
  }
  __t1844t=0;
  __t_errcode=get__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1844t,&__t1845t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1845t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1846t__s__unsafe_ptr,__t1845t__,8);
  memcpy(&__t1846t__s__dat__pos,__t1845t__+8,8);
  memcpy(&__t1846t__s__dat__length,__t1845t__+16,8);
  memcpy(&__t1846t__s__dat__first,__t1845t__+24,1);
  memcpy(&__t1846t__cost,__t1845t__+25,8);
  raw__t1558t(__t1846t__s__unsafe_ptr,__t1846t__s__dat__pos,__t1846t__s__dat__length,__t1846t__s__dat__first,__t1846t__cost,&__t1847t__unsafe_ptr,&__t1847t__dat__pos,&__t1847t__dat__length,&__t1847t__dat__first);
  not__t37t(__t1848t,&__t1849t__);
  len__t605t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1850t__);
  n=__t1850t__;
  __t_errcode=hash__t1509t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1851t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1851t__;
  range__t468t(n,&__t1852t__from,&__t1852t__to);
  iter__from=__t1852t__from;
  iter__to=__t1852t__to;
  while(1){
  __t_complain=next__t477t(&iter__from,iter__to,&__t1854t__);
  __t1853t=__t_complain;
  i=__t1854t__;
  __t1853t=__t1853t==0;
  if(!__t1853t){
  break;
  }
  add__t175t(pos,i,&__t1855t__);
  __t1856t=__t1855t__;
  idx=__t1856t;
  ge__t324t(idx,n,&__t1857t__);
  if(__t1857t__){
  __t_errcode=sub__t352t(idx,n,&__t1858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1858t__;
  }
  __t1859t=0;
  eq__t120t(idx,__t1859t,&__t1860t__);
  if(__t1860t__){
  continue;
  }
  __t_errcode=get__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1861t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1861t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1862t__s__unsafe_ptr,__t1861t__,8);
  memcpy(&__t1862t__s__dat__pos,__t1861t__+8,8);
  memcpy(&__t1862t__s__dat__length,__t1861t__+16,8);
  memcpy(&__t1862t__s__dat__first,__t1861t__+24,1);
  memcpy(&__t1862t__cost,__t1861t__+25,8);
  entry__s__unsafe_ptr=__t1862t__s__unsafe_ptr;
  entry__s__dat__pos=__t1862t__s__dat__pos;
  entry__s__dat__length=__t1862t__s__dat__length;
  entry__s__dat__first=__t1862t__s__dat__first;
  entry__cost=__t1862t__cost;
  raw__t1558t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1863t__unsafe_ptr,&__t1863t__dat__pos,&__t1863t__dat__length,&__t1863t__dat__first);
  is_zero__t1564t(__t1863t__unsafe_ptr,__t1863t__dat__pos,__t1863t__dat__length,__t1863t__dat__first,&__t1864t__);
  if(__t1864t__){
  __t_errcode=mutget__t591t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1865t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1865t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1865t__,&k__unsafe_ptr,8);
  memcpy(__t1865t__+8,&k__dat__pos,8);
  memcpy(__t1865t__+16,&k__dat__length,8);
  memcpy(__t1865t__+24,&k__dat__first,1);
  memcpy(__t1865t__+25,&i,8);
  __t1843t=idx;
  goto __t_return;
  }
  raw__t1558t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  eq__t774t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1866t__unsafe_ptr,__t1866t__dat__pos,__t1866t__dat__length,__t1866t__dat__first,&__t1867t__);
  if(__t1867t__){
  __t1843t=idx;
  goto __t_return;
  }
  gt__t276t(i,entry__cost,&__t1868t__);
  if(__t1868t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1869t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1870t__s__unsafe_ptr,__t1869t__,8);
  memcpy(&__t1870t__s__dat__pos,__t1869t__+8,8);
  memcpy(&__t1870t__s__dat__length,__t1869t__+16,8);
  memcpy(&__t1870t__s__dat__first,__t1869t__+24,1);
  memcpy(&__t1870t__cost,__t1869t__+25,8);
  raw__t1558t(__t1870t__s__unsafe_ptr,__t1870t__s__dat__pos,__t1870t__s__dat__length,__t1870t__s__dat__first,__t1870t__cost,&__t1871t__unsafe_ptr,&__t1871t__dat__pos,&__t1871t__dat__length,&__t1871t__dat__first);
  k__unsafe_ptr=__t1871t__unsafe_ptr;
  k__dat__pos=__t1871t__dat__pos;
  k__dat__length=__t1871t__dat__length;
  k__dat__first=__t1871t__dat__first;
  __t_errcode=mutget__t591t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1872t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1872t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1872t__,&tmp__unsafe_ptr,8);
  memcpy(__t1872t__+8,&tmp__dat__pos,8);
  memcpy(__t1872t__+16,&tmp__dat__length,8);
  memcpy(__t1872t__+24,&tmp__dat__first,1);
  memcpy(__t1872t__+25,&i,8);
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2191t=data__unsafe_ptr;
  *__t2192t=data__unsafe_size;
  *__t2193t=data__unsafe_offset;
  *__t2194t=data__unsafe_align;
  *__t2195t=__t1843t;
  
  return __t_errcode;
}

int mutget__t1965t(char** __t2196t, uint64_t* __t2197t, uint16_t* __t2198t, uint16_t* __t2199t, char** __t2200t, uint64_t* __t2201t, uint16_t* __t2202t, uint16_t* __t2203t, const char* key, char** __t2204t) {
  char* keys__unsafe_ptr=*__t2196t;
  uint64_t keys__unsafe_size=*__t2197t;
  uint16_t keys__unsafe_offset=*__t2198t;
  uint16_t keys__unsafe_align=*__t2199t;
  char* values__unsafe_ptr=*__t2200t;
  uint64_t values__unsafe_size=*__t2201t;
  uint16_t values__unsafe_offset=*__t2202t;
  uint16_t values__unsafe_align=*__t2203t;
  char* __t1966t__unsafe_ptr=0;
  uint64_t __t1966t__dat__pos=0;
  uint64_t __t1966t__dat__length=0;
  char __t1966t__dat__first=0;
  uint64_t __t1967t__=0;
  char* __t1968t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(key,&__t1966t__unsafe_ptr,&__t1966t__dat__pos,&__t1966t__dat__length,&__t1966t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1840t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1966t__unsafe_ptr,__t1966t__dat__pos,__t1966t__dat__length,__t1966t__dat__first,&__t1967t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t591t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1967t__,&__t1968t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2196t=keys__unsafe_ptr;
  *__t2197t=keys__unsafe_size;
  *__t2198t=keys__unsafe_offset;
  *__t2199t=keys__unsafe_align;
  *__t2200t=values__unsafe_ptr;
  *__t2201t=values__unsafe_size;
  *__t2202t=values__unsafe_offset;
  *__t2203t=values__unsafe_align;
  *__t2204t=__t1968t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t677t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2205t, uint64_t* __t2206t, uint64_t* __t2207t, char* __t2208t) {
  goto __t_return;
  __t_return:
  *__t2205t=other__unsafe_ptr;
  *__t2206t=other__dat__pos;
  *__t2207t=other__dat__length;
  *__t2208t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t805t(char** __t2209t, uint64_t* __t2210t, uint16_t* __t2211t, uint16_t* __t2212t, uint64_t* __t2213t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2214t, uint64_t* __t2215t, uint64_t* __t2216t, char* __t2217t) {
  char* CHARS__buf__unsafe_ptr=*__t2209t;
  uint64_t CHARS__buf__unsafe_size=*__t2210t;
  uint16_t CHARS__buf__unsafe_offset=*__t2211t;
  uint16_t CHARS__buf__unsafe_align=*__t2212t;
  uint64_t CHARS__pos=*__t2213t;
  char* __t806t__unsafe_ptr=0;
  uint64_t __t806t__dat__pos=0;
  uint64_t __t806t__dat__length=0;
  char __t806t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t807t__=0;
  uint64_t __t808t__=0;
  uint64_t next_pos=0;
  uint64_t __t809t__=0;
  char __t810t__=0;
  uint64_t __t811t=0;
  uint64_t __t812t__=0;
  uint64_t prev_pos=0;
  char* __t813t__unsafe_ptr=0;
  uint64_t __t813t__dat__pos=0;
  uint64_t __t813t__dat__length=0;
  char __t813t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t677t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t806t__unsafe_ptr,&__t806t__dat__pos,&__t806t__dat__length,&__t806t__dat__first);
  other__unsafe_ptr=__t806t__unsafe_ptr;
  other__dat__pos=__t806t__dat__pos;
  other__dat__length=__t806t__dat__length;
  other__dat__first=__t806t__dat__first;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t807t__);
  add__t175t(CHARS__pos,__t807t__,&__t808t__);
  next_pos=__t808t__;
  len__t605t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t809t__);
  gt__t276t(next_pos,__t809t__,&__t810t__);
  if(__t810t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t811t=0;
  add__t175t(CHARS__pos,__t811t,&__t812t__);
  prev_pos=__t812t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t646t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t813t__unsafe_ptr,&__t813t__dat__pos,&__t813t__dat__length,&__t813t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2209t=CHARS__buf__unsafe_ptr;
  *__t2210t=CHARS__buf__unsafe_size;
  *__t2211t=CHARS__buf__unsafe_offset;
  *__t2212t=CHARS__buf__unsafe_align;
  *__t2213t=CHARS__pos;
  *__t2214t=__t813t__unsafe_ptr;
  *__t2215t=__t813t__dat__pos;
  *__t2216t=__t813t__dat__length;
  *__t2217t=__t813t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1983t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2218t, char** __t2219t, uint64_t* __t2220t, uint64_t* __t2221t, char* __t2222t) {
  uint64_t pos=*__t2218t;
  uint64_t __t1984t=0;
  char __t1985t__=0;
  uint64_t __t1986t=0;
  uint64_t __t1987t__=0;
  uint64_t __t1988t=0;
  char* __t1989t__=0;
  char* __t1990t__s__unsafe_ptr=0;
  uint64_t __t1990t__s__dat__pos=0;
  uint64_t __t1990t__s__dat__length=0;
  char __t1990t__s__dat__first=0;
  uint64_t __t1990t__cost=0;
  char* __t1991t__unsafe_ptr=0;
  uint64_t __t1991t__dat__pos=0;
  uint64_t __t1991t__dat__length=0;
  char __t1991t__dat__first=0;
  char* __t1992t__=0;
  char* __t1993t__s__unsafe_ptr=0;
  uint64_t __t1993t__s__dat__pos=0;
  uint64_t __t1993t__s__dat__length=0;
  char __t1993t__s__dat__first=0;
  uint64_t __t1993t__cost=0;
  char* __t1994t__unsafe_ptr=0;
  uint64_t __t1994t__dat__pos=0;
  uint64_t __t1994t__dat__length=0;
  char __t1994t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1995t=0;
  uint64_t __t1996t__=0;
  char* __t1997t__unsafe_ptr=0;
  uint64_t __t1997t__dat__pos=0;
  uint64_t __t1997t__dat__length=0;
  char __t1997t__dat__first=0;
  char __t1998t__=0;
  char* __t1999t__=0;
  char* __t2000t__s__unsafe_ptr=0;
  uint64_t __t2000t__s__dat__pos=0;
  uint64_t __t2000t__s__dat__length=0;
  char __t2000t__s__dat__first=0;
  uint64_t __t2000t__cost=0;
  char* __t2001t__unsafe_ptr=0;
  uint64_t __t2001t__dat__pos=0;
  uint64_t __t2001t__dat__length=0;
  char __t2001t__dat__first=0;
  uint64_t __t2002t=0;
  uint64_t __t2003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1984t=0;
  eq__t120t(pos,__t1984t,&__t1985t__);
  if(__t1985t__){
  __t1986t=1;
  add__t175t(pos,__t1986t,&__t1987t__);
  pos=__t1987t__;
  __t1988t=0;
  __t_errcode=get__t598t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1988t,&__t1989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1989t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1990t__s__unsafe_ptr,__t1989t__,8);
  memcpy(&__t1990t__s__dat__pos,__t1989t__+8,8);
  memcpy(&__t1990t__s__dat__length,__t1989t__+16,8);
  memcpy(&__t1990t__s__dat__first,__t1989t__+24,1);
  memcpy(&__t1990t__cost,__t1989t__+25,8);
  raw__t1558t(__t1990t__s__unsafe_ptr,__t1990t__s__dat__pos,__t1990t__s__dat__length,__t1990t__s__dat__first,__t1990t__cost,&__t1991t__unsafe_ptr,&__t1991t__dat__pos,&__t1991t__dat__length,&__t1991t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t598t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1992t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1992t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1993t__s__unsafe_ptr,__t1992t__,8);
  memcpy(&__t1993t__s__dat__pos,__t1992t__+8,8);
  memcpy(&__t1993t__s__dat__length,__t1992t__+16,8);
  memcpy(&__t1993t__s__dat__first,__t1992t__+24,1);
  memcpy(&__t1993t__cost,__t1992t__+25,8);
  raw__t1558t(__t1993t__s__unsafe_ptr,__t1993t__s__dat__pos,__t1993t__s__dat__length,__t1993t__s__dat__first,__t1993t__cost,&__t1994t__unsafe_ptr,&__t1994t__dat__pos,&__t1994t__dat__length,&__t1994t__dat__first);
  ret__unsafe_ptr=__t1994t__unsafe_ptr;
  ret__dat__pos=__t1994t__dat__pos;
  ret__dat__length=__t1994t__dat__length;
  ret__dat__first=__t1994t__dat__first;
  __t1995t=1;
  add__t175t(pos,__t1995t,&__t1996t__);
  pos=__t1996t__;
  while(1){
  raw__t1560t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1997t__unsafe_ptr,&__t1997t__dat__pos,&__t1997t__dat__length,&__t1997t__dat__first);
  is_zero__t1564t(__t1997t__unsafe_ptr,__t1997t__dat__pos,__t1997t__dat__length,__t1997t__dat__first,&__t1998t__);
  if(!__t1998t__){
  break;
  }
  __t_errcode=get__t598t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1999t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1999t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2000t__s__unsafe_ptr,__t1999t__,8);
  memcpy(&__t2000t__s__dat__pos,__t1999t__+8,8);
  memcpy(&__t2000t__s__dat__length,__t1999t__+16,8);
  memcpy(&__t2000t__s__dat__first,__t1999t__+24,1);
  memcpy(&__t2000t__cost,__t1999t__+25,8);
  raw__t1558t(__t2000t__s__unsafe_ptr,__t2000t__s__dat__pos,__t2000t__s__dat__length,__t2000t__s__dat__first,__t2000t__cost,&__t2001t__unsafe_ptr,&__t2001t__dat__pos,&__t2001t__dat__length,&__t2001t__dat__first);
  ret__unsafe_ptr=__t2001t__unsafe_ptr;
  ret__dat__pos=__t2001t__dat__pos;
  ret__dat__length=__t2001t__dat__length;
  ret__dat__first=__t2001t__dat__first;
  __t2002t=1;
  add__t175t(pos,__t2002t,&__t2003t__);
  pos=__t2003t__;
  }
  __t1991t__unsafe_ptr=ret__unsafe_ptr;
  __t1991t__dat__pos=ret__dat__pos;
  __t1991t__dat__length=ret__dat__length;
  __t1991t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2218t=pos;
  *__t2219t=__t1991t__unsafe_ptr;
  *__t2220t=__t1991t__dat__pos;
  *__t2221t=__t1991t__dat__length;
  *__t2222t=__t1991t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t2034t(char** __t2223t, uint64_t* __t2224t, uint16_t* __t2225t, uint16_t* __t2226t, uint64_t* __t2227t, char** __t2228t, uint64_t* __t2229t, uint16_t* __t2230t, uint16_t* __t2231t, char** __t2232t, uint64_t* __t2233t, uint16_t* __t2234t, uint16_t* __t2235t) {
  char* buf__buf__unsafe_ptr=*__t2223t;
  uint64_t buf__buf__unsafe_size=*__t2224t;
  uint16_t buf__buf__unsafe_offset=*__t2225t;
  uint16_t buf__buf__unsafe_align=*__t2226t;
  uint64_t buf__pos=*__t2227t;
  char* __t2035t__unsafe_ptr=0;
  uint64_t __t2035t__unsafe_size=0;
  uint16_t __t2035t__unsafe_offset=0;
  uint16_t __t2035t__unsafe_align=0;
  uint64_t __t2036t=0;
  char* __t2037t__unsafe_ptr=0;
  uint64_t __t2037t__unsafe_size=0;
  uint16_t __t2037t__unsafe_offset=0;
  uint16_t __t2037t__unsafe_align=0;
  char __t2038t____t518t__=0;
  char* __t2039t__keys__unsafe_ptr=0;
  uint64_t __t2039t__keys__unsafe_size=0;
  uint16_t __t2039t__keys__unsafe_offset=0;
  uint16_t __t2039t__keys__unsafe_align=0;
  char* __t2039t__values__unsafe_ptr=0;
  uint64_t __t2039t__values__unsafe_size=0;
  uint16_t __t2039t__values__unsafe_offset=0;
  uint16_t __t2039t__values__unsafe_align=0;
  char __t2040t____t1948t____t518t__=0;
  char* __t2041t__keys__unsafe_ptr=0;
  uint64_t __t2041t__keys__unsafe_size=0;
  uint16_t __t2041t__keys__unsafe_offset=0;
  uint16_t __t2041t__keys__unsafe_align=0;
  char* __t2041t__values__unsafe_ptr=0;
  uint64_t __t2041t__values__unsafe_size=0;
  uint16_t __t2041t__values__unsafe_offset=0;
  uint16_t __t2041t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t2043t__=0;
  char* __t2045t__unsafe_ptr=0;
  uint64_t __t2045t__dat__pos=0;
  uint64_t __t2045t__dat__length=0;
  char __t2045t__dat__first=0;
  char* __t2046t__unsafe_ptr=0;
  uint64_t __t2046t__dat__pos=0;
  uint64_t __t2046t__dat__length=0;
  char __t2046t__dat__first=0;
  char* __t2048t__=0;
  char* __t2050t__unsafe_ptr=0;
  uint64_t __t2050t__dat__pos=0;
  uint64_t __t2050t__dat__length=0;
  char __t2050t__dat__first=0;
  char* __t2051t__unsafe_ptr=0;
  uint64_t __t2051t__dat__pos=0;
  uint64_t __t2051t__dat__length=0;
  char __t2051t__dat__first=0;
  char* __t2052t__buf__unsafe_ptr=0;
  uint64_t __t2052t__buf__unsafe_size=0;
  uint16_t __t2052t__buf__unsafe_offset=0;
  uint16_t __t2052t__buf__unsafe_align=0;
  uint64_t __t2052t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t2053t=0;
  char* __t2054t__unsafe_ptr=0;
  uint64_t __t2054t__dat__pos=0;
  uint64_t __t2054t__dat__length=0;
  char __t2054t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t2026t(&__t2035t__unsafe_ptr,&__t2035t__unsafe_size,&__t2035t__unsafe_offset,&__t2035t__unsafe_align);
  __t2036t=128;
  __t_errcode=alloc__t516t(&__t2035t__unsafe_ptr,&__t2035t__unsafe_size,&__t2035t__unsafe_offset,&__t2035t__unsafe_align,__t2036t,&__t2037t__unsafe_ptr,&__t2037t__unsafe_size,&__t2037t__unsafe_offset,&__t2037t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1941t(&__t2037t__unsafe_ptr,&__t2037t__unsafe_size,&__t2037t__unsafe_offset,&__t2037t__unsafe_align,&__t2039t__keys__unsafe_ptr,&__t2039t__keys__unsafe_size,&__t2039t__keys__unsafe_offset,&__t2039t__keys__unsafe_align,&__t2039t__values__unsafe_ptr,&__t2039t__values__unsafe_size,&__t2039t__values__unsafe_offset,&__t2039t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2041t__keys__unsafe_ptr=__t2039t__keys__unsafe_ptr;
  __t2041t__keys__unsafe_size=__t2039t__keys__unsafe_size;
  __t2041t__keys__unsafe_offset=__t2039t__keys__unsafe_offset;
  __t2041t__keys__unsafe_align=__t2039t__keys__unsafe_align;
  __t2041t__values__unsafe_ptr=__t2039t__values__unsafe_ptr;
  __t2041t__values__unsafe_size=__t2039t__values__unsafe_size;
  __t2041t__values__unsafe_offset=__t2039t__values__unsafe_offset;
  __t2041t__values__unsafe_align=__t2039t__values__unsafe_align;
  __t_errcode=mutget__t1965t(&__t2041t__keys__unsafe_ptr,&__t2041t__keys__unsafe_size,&__t2041t__keys__unsafe_offset,&__t2041t__keys__unsafe_align,&__t2041t__values__unsafe_ptr,&__t2041t__values__unsafe_size,&__t2041t__values__unsafe_offset,&__t2041t__values__unsafe_align,__t2042t,&__t2043t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t704t(__t2044t,&__t2045t__unsafe_ptr,&__t2045t__dat__pos,&__t2045t__dat__length,&__t2045t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t805t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2045t__unsafe_ptr,__t2045t__dat__pos,__t2045t__dat__length,__t2045t__dat__first,&__t2046t__unsafe_ptr,&__t2046t__dat__pos,&__t2046t__dat__length,&__t2046t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2043t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2043t__,&__t2046t__unsafe_ptr,8);
  memcpy(__t2043t__+8,&__t2046t__dat__pos,8);
  memcpy(__t2043t__+16,&__t2046t__dat__length,8);
  memcpy(__t2043t__+24,&__t2046t__dat__first,1);
  __t_errcode=mutget__t1965t(&__t2041t__keys__unsafe_ptr,&__t2041t__keys__unsafe_size,&__t2041t__keys__unsafe_offset,&__t2041t__keys__unsafe_align,&__t2041t__values__unsafe_ptr,&__t2041t__values__unsafe_size,&__t2041t__values__unsafe_offset,&__t2041t__values__unsafe_align,__t2047t,&__t2048t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t704t(__t2049t,&__t2050t__unsafe_ptr,&__t2050t__dat__pos,&__t2050t__dat__length,&__t2050t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t805t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t2050t__unsafe_ptr,__t2050t__dat__pos,__t2050t__dat__length,__t2050t__dat__first,&__t2051t__unsafe_ptr,&__t2051t__dat__pos,&__t2051t__dat__length,&__t2051t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2048t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2048t__,&__t2051t__unsafe_ptr,8);
  memcpy(__t2048t__+8,&__t2051t__dat__pos,8);
  memcpy(__t2048t__+16,&__t2051t__dat__length,8);
  memcpy(__t2048t__+24,&__t2051t__dat__first,1);
  arena__t633t(&__t2041t__keys__unsafe_ptr,&__t2041t__keys__unsafe_size,&__t2041t__keys__unsafe_offset,&__t2041t__keys__unsafe_align,&__t2052t__buf__unsafe_ptr,&__t2052t__buf__unsafe_size,&__t2052t__buf__unsafe_offset,&__t2052t__buf__unsafe_align,&__t2052t__pos);
  it__pos=__t2052t__pos;
  while(1){
  __t_complain=next__t1983t(__t2041t__keys__unsafe_ptr,__t2041t__keys__unsafe_size,__t2041t__keys__unsafe_offset,__t2041t__keys__unsafe_align,&it__pos,&__t2054t__unsafe_ptr,&__t2054t__dat__pos,&__t2054t__dat__length,&__t2054t__dat__first);
  __t2053t=__t_complain;
  key__unsafe_ptr=__t2054t__unsafe_ptr;
  key__dat__pos=__t2054t__dat__pos;
  key__dat__length=__t2054t__dat__length;
  key__dat__first=__t2054t__dat__first;
  __t2053t=__t2053t==0;
  if(!__t2053t){
  break;
  }
  print__t847t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t2041t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2041t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2041t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2041t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2041t__values__unsafe_ptr;
  map__values__unsafe_size=__t2041t__values__unsafe_size;
  map__values__unsafe_offset=__t2041t__values__unsafe_offset;
  map__values__unsafe_align=__t2041t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(map__keys__unsafe_ptr,&__t2040t____t1948t____t518t__);
  if(__t2040t____t1948t____t518t__){
  free__t509t(&map__keys__unsafe_ptr);
  }
  exists__t443t(map__values__unsafe_ptr,&__t2038t____t518t__);
  if(__t2038t____t518t__){
  free__t509t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2223t=buf__buf__unsafe_ptr;
  *__t2224t=buf__buf__unsafe_size;
  *__t2225t=buf__buf__unsafe_offset;
  *__t2226t=buf__buf__unsafe_align;
  *__t2227t=buf__pos;
  *__t2228t=map__keys__unsafe_ptr;
  *__t2229t=map__keys__unsafe_size;
  *__t2230t=map__keys__unsafe_offset;
  *__t2231t=map__keys__unsafe_align;
  *__t2232t=map__values__unsafe_ptr;
  *__t2233t=map__values__unsafe_size;
  *__t2234t=map__values__unsafe_offset;
  *__t2235t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2056t(char** __t2236t, uint64_t* __t2237t, uint16_t* __t2238t, uint16_t* __t2239t, char** __t2240t, uint64_t* __t2241t, uint16_t* __t2242t, uint16_t* __t2243t, char** __t2244t, uint64_t* __t2245t, uint16_t* __t2246t, uint16_t* __t2247t, uint64_t* __t2248t) {
  char* __t2059t__unsafe_ptr=0;
  uint64_t __t2059t__unsafe_size=0;
  uint16_t __t2059t__unsafe_offset=0;
  uint16_t __t2059t__unsafe_align=0;
  uint64_t __t2060t=0;
  uint64_t __t2061t__=0;
  char* __t2062t__unsafe_ptr=0;
  uint64_t __t2062t__unsafe_size=0;
  uint16_t __t2062t__unsafe_offset=0;
  uint16_t __t2062t__unsafe_align=0;
  char __t2063t____t518t__=0;
  char* __t2064t__buf__unsafe_ptr=0;
  uint64_t __t2064t__buf__unsafe_size=0;
  uint16_t __t2064t__buf__unsafe_offset=0;
  uint16_t __t2064t__buf__unsafe_align=0;
  uint64_t __t2064t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t2065t__keys__unsafe_ptr=0;
  uint64_t __t2065t__keys__unsafe_size=0;
  uint16_t __t2065t__keys__unsafe_offset=0;
  uint16_t __t2065t__keys__unsafe_align=0;
  char* __t2065t__values__unsafe_ptr=0;
  uint64_t __t2065t__values__unsafe_size=0;
  uint16_t __t2065t__values__unsafe_offset=0;
  uint16_t __t2065t__values__unsafe_align=0;
  char __t2066t____t2038t____t518t__=0;
  char __t2066t____t2040t____t1948t____t518t__=0;
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
  char____t_buffer____buffer__t2057t(&__t2059t__unsafe_ptr,&__t2059t__unsafe_size,&__t2059t__unsafe_offset,&__t2059t__unsafe_align);
  __t2060t=4;
  KB__t487t(__t2060t,&__t2061t__);
  __t_errcode=alloc__t516t(&__t2059t__unsafe_ptr,&__t2059t__unsafe_size,&__t2059t__unsafe_offset,&__t2059t__unsafe_align,__t2061t__,&__t2062t__unsafe_ptr,&__t2062t__unsafe_size,&__t2062t__unsafe_offset,&__t2062t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t633t(&__t2062t__unsafe_ptr,&__t2062t__unsafe_size,&__t2062t__unsafe_offset,&__t2062t__unsafe_align,&__t2064t__buf__unsafe_ptr,&__t2064t__buf__unsafe_size,&__t2064t__buf__unsafe_offset,&__t2064t__buf__unsafe_align,&__t2064t__pos);
  buf__buf__unsafe_ptr=__t2064t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t2064t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t2064t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t2064t__buf__unsafe_align;
  buf__pos=__t2064t__pos;
  __t_errcode=test__t2034t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t2065t__keys__unsafe_ptr,&__t2065t__keys__unsafe_size,&__t2065t__keys__unsafe_offset,&__t2065t__keys__unsafe_align,&__t2065t__values__unsafe_ptr,&__t2065t__values__unsafe_size,&__t2065t__values__unsafe_offset,&__t2065t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t2065t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t2065t__keys__unsafe_size;
  map__keys__unsafe_offset=__t2065t__keys__unsafe_offset;
  map__keys__unsafe_align=__t2065t__keys__unsafe_align;
  map__values__unsafe_ptr=__t2065t__values__unsafe_ptr;
  map__values__unsafe_size=__t2065t__values__unsafe_size;
  map__values__unsafe_offset=__t2065t__values__unsafe_offset;
  map__values__unsafe_align=__t2065t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(map__keys__unsafe_ptr,&__t2066t____t2040t____t1948t____t518t__);
  if(__t2066t____t2040t____t1948t____t518t__){
  free__t509t(&map__keys__unsafe_ptr);
  }
  exists__t443t(map__values__unsafe_ptr,&__t2066t____t2038t____t518t__);
  if(__t2066t____t2038t____t518t__){
  free__t509t(&map__values__unsafe_ptr);
  }
  exists__t443t(buf__buf__unsafe_ptr,&__t2063t____t518t__);
  if(__t2063t____t518t__){
  free__t509t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2236t=map__keys__unsafe_ptr;
  *__t2237t=map__keys__unsafe_size;
  *__t2238t=map__keys__unsafe_offset;
  *__t2239t=map__keys__unsafe_align;
  *__t2240t=map__values__unsafe_ptr;
  *__t2241t=map__values__unsafe_size;
  *__t2242t=map__values__unsafe_offset;
  *__t2243t=map__values__unsafe_align;
  *__t2244t=buf__buf__unsafe_ptr;
  *__t2245t=buf__buf__unsafe_size;
  *__t2246t=buf__buf__unsafe_offset;
  *__t2247t=buf__buf__unsafe_align;
  *__t2248t=buf__pos;
  
  return __t_errcode;
}

int raw__t1562t(const char* r, char** __t2249t, uint64_t* __t2250t, uint64_t* __t2251t, char* __t2252t) {
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(r,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2249t=__t1563t__unsafe_ptr;
  *__t2250t=__t1563t__dat__pos;
  *__t2251t=__t1563t__dat__length;
  *__t2252t=__t1563t__dat__first;
  
  return __t_errcode;
}

int find__t1606t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2253t) {
  char* __t1607t__unsafe_ptr=0;
  uint64_t __t1607t__dat__pos=0;
  uint64_t __t1607t__dat__length=0;
  char __t1607t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1608t__=0;
  uint64_t __t1609t=0;
  uint64_t __t1610t=0;
  char* __t1611t__=0;
  char* __t1612t__s__unsafe_ptr=0;
  uint64_t __t1612t__s__dat__pos=0;
  uint64_t __t1612t__s__dat__length=0;
  char __t1612t__s__dat__first=0;
  uint64_t __t1612t__cost=0;
  char* __t1613t__unsafe_ptr=0;
  uint64_t __t1613t__dat__pos=0;
  uint64_t __t1613t__dat__length=0;
  char __t1613t__dat__first=0;
  int __t1614t=0;
  int __t1615t__=0;
  uint64_t __t1616t__=0;
  uint64_t n=0;
  uint64_t __t1617t__=0;
  uint64_t pos=0;
  uint64_t __t1618t__from=0;
  uint64_t __t1618t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1619t=0;
  uint64_t __t1620t__=0;
  uint64_t i=0;
  uint64_t __t1621t__=0;
  uint64_t __t1622t=0;
  uint64_t idx=0;
  char __t1623t__=0;
  uint64_t __t1624t__=0;
  uint64_t __t1625t=0;
  char __t1626t__=0;
  char* __t1627t__=0;
  char* __t1628t__s__unsafe_ptr=0;
  uint64_t __t1628t__s__dat__pos=0;
  uint64_t __t1628t__s__dat__length=0;
  char __t1628t__s__dat__first=0;
  uint64_t __t1628t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__dat__pos=0;
  uint64_t __t1629t__dat__length=0;
  char __t1629t__dat__first=0;
  char __t1630t__=0;
  char* __t1631t__unsafe_ptr=0;
  uint64_t __t1631t__dat__pos=0;
  uint64_t __t1631t__dat__length=0;
  char __t1631t__dat__first=0;
  char __t1632t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1560t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1607t__unsafe_ptr,&__t1607t__dat__pos,&__t1607t__dat__length,&__t1607t__dat__first);
  k__unsafe_ptr=__t1607t__unsafe_ptr;
  k__dat__pos=__t1607t__dat__pos;
  k__dat__length=__t1607t__dat__length;
  k__dat__first=__t1607t__dat__first;
  is_zero__t1564t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1608t__);
  if(__t1608t__){
  __t1609t=0;
  goto __t_return;
  }
  __t1610t=0;
  __t_errcode=get__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1610t,&__t1611t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1611t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1612t__s__unsafe_ptr,__t1611t__,8);
  memcpy(&__t1612t__s__dat__pos,__t1611t__+8,8);
  memcpy(&__t1612t__s__dat__length,__t1611t__+16,8);
  memcpy(&__t1612t__s__dat__first,__t1611t__+24,1);
  memcpy(&__t1612t__cost,__t1611t__+25,8);
  raw__t1558t(__t1612t__s__unsafe_ptr,__t1612t__s__dat__pos,__t1612t__s__dat__length,__t1612t__s__dat__first,__t1612t__cost,&__t1613t__unsafe_ptr,&__t1613t__dat__pos,&__t1613t__dat__length,&__t1613t__dat__first);
  not__t37t(__t1614t,&__t1615t__);
  len__t605t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1616t__);
  n=__t1616t__;
  __t_errcode=hash__t1509t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1617t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1617t__;
  range__t468t(n,&__t1618t__from,&__t1618t__to);
  iter__from=__t1618t__from;
  iter__to=__t1618t__to;
  while(1){
  __t_complain=next__t477t(&iter__from,iter__to,&__t1620t__);
  __t1619t=__t_complain;
  i=__t1620t__;
  __t1619t=__t1619t==0;
  if(!__t1619t){
  break;
  }
  add__t175t(pos,i,&__t1621t__);
  __t1622t=__t1621t__;
  idx=__t1622t;
  ge__t324t(idx,n,&__t1623t__);
  if(__t1623t__){
  __t_errcode=sub__t352t(idx,n,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1624t__;
  }
  __t1625t=0;
  eq__t120t(idx,__t1625t,&__t1626t__);
  if(__t1626t__){
  continue;
  }
  __t_errcode=get__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1627t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1628t__s__unsafe_ptr,__t1627t__,8);
  memcpy(&__t1628t__s__dat__pos,__t1627t__+8,8);
  memcpy(&__t1628t__s__dat__length,__t1627t__+16,8);
  memcpy(&__t1628t__s__dat__first,__t1627t__+24,1);
  memcpy(&__t1628t__cost,__t1627t__+25,8);
  entry__s__unsafe_ptr=__t1628t__s__unsafe_ptr;
  entry__s__dat__pos=__t1628t__s__dat__pos;
  entry__s__dat__length=__t1628t__s__dat__length;
  entry__s__dat__first=__t1628t__s__dat__first;
  entry__cost=__t1628t__cost;
  raw__t1558t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1629t__unsafe_ptr,&__t1629t__dat__pos,&__t1629t__dat__length,&__t1629t__dat__first);
  is_zero__t1564t(__t1629t__unsafe_ptr,__t1629t__dat__pos,__t1629t__dat__length,__t1629t__dat__first,&__t1630t__);
  if(__t1630t__){
  continue;
  }
  raw__t1558t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1631t__unsafe_ptr,&__t1631t__dat__pos,&__t1631t__dat__length,&__t1631t__dat__first);
  eq__t774t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1631t__unsafe_ptr,__t1631t__dat__pos,__t1631t__dat__length,__t1631t__dat__first,&__t1632t__);
  if(__t1632t__){
  __t1609t=idx;
  goto __t_return;
  }
  }
  __t_errcode=35;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2253t=__t1609t;
  
  return __t_errcode;
}

int get__t1957t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2254t) {
  char* __t1958t__unsafe_ptr=0;
  uint64_t __t1958t__dat__pos=0;
  uint64_t __t1958t__dat__length=0;
  char __t1958t__dat__first=0;
  uint64_t __t1959t__=0;
  char* __t1960t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1562t(key,&__t1958t__unsafe_ptr,&__t1958t__dat__pos,&__t1958t__dat__length,&__t1958t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1606t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1958t__unsafe_ptr,__t1958t__dat__pos,__t1958t__dat__length,__t1958t__dat__first,&__t1959t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t598t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1959t__,&__t1960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2254t=__t1960t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2067t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t2068t__=0;
  char* __t2069t____t664t__unsafe_ptr=0;
  uint64_t __t2069t____t664t__dat__pos=0;
  uint64_t __t2069t____t664t__dat__length=0;
  char __t2069t____t664t__dat__first=0;
  char* __t2071t__=0;
  char* __t2072t____t664t__unsafe_ptr=0;
  uint64_t __t2072t____t664t__dat__pos=0;
  uint64_t __t2072t____t664t__dat__length=0;
  char __t2072t____t664t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1957t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2042t,&__t2068t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2068t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2069t____t664t__unsafe_ptr,__t2068t__,8);
  memcpy(&__t2069t____t664t__dat__pos,__t2068t__+8,8);
  memcpy(&__t2069t____t664t__dat__length,__t2068t__+16,8);
  memcpy(&__t2069t____t664t__dat__first,__t2068t__+24,1);
  print__t847t(__t2069t____t664t__unsafe_ptr,__t2069t____t664t__dat__pos,__t2069t____t664t__dat__length,__t2069t____t664t__dat__first);
  __t_errcode=get__t1957t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t2047t,&__t2071t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2071t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2072t____t664t__unsafe_ptr,__t2071t__,8);
  memcpy(&__t2072t____t664t__dat__pos,__t2071t__+8,8);
  memcpy(&__t2072t____t664t__dat__length,__t2071t__+16,8);
  memcpy(&__t2072t____t664t__dat__first,__t2071t__+24,1);
  print__t847t(__t2072t____t664t__unsafe_ptr,__t2072t____t664t__dat__pos,__t2072t____t664t__dat__length,__t2072t____t664t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2074t() {
  char* __t2076t__map__keys__unsafe_ptr=0;
  uint64_t __t2076t__map__keys__unsafe_size=0;
  uint16_t __t2076t__map__keys__unsafe_offset=0;
  uint16_t __t2076t__map__keys__unsafe_align=0;
  char* __t2076t__map__values__unsafe_ptr=0;
  uint64_t __t2076t__map__values__unsafe_size=0;
  uint16_t __t2076t__map__values__unsafe_offset=0;
  uint16_t __t2076t__map__values__unsafe_align=0;
  char* __t2076t__buf__buf__unsafe_ptr=0;
  uint64_t __t2076t__buf__buf__unsafe_size=0;
  uint16_t __t2076t__buf__buf__unsafe_offset=0;
  uint16_t __t2076t__buf__buf__unsafe_align=0;
  uint64_t __t2076t__buf__pos=0;
  char __t2077t____t2063t____t518t__=0;
  char __t2077t____t2066t____t2038t____t518t__=0;
  char __t2077t____t2066t____t2040t____t1948t____t518t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2056t(&__t2076t__map__keys__unsafe_ptr,&__t2076t__map__keys__unsafe_size,&__t2076t__map__keys__unsafe_offset,&__t2076t__map__keys__unsafe_align,&__t2076t__map__values__unsafe_ptr,&__t2076t__map__values__unsafe_size,&__t2076t__map__values__unsafe_offset,&__t2076t__map__values__unsafe_align,&__t2076t__buf__buf__unsafe_ptr,&__t2076t__buf__buf__unsafe_size,&__t2076t__buf__buf__unsafe_offset,&__t2076t__buf__buf__unsafe_align,&__t2076t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2067t(__t2076t__map__keys__unsafe_ptr,__t2076t__map__keys__unsafe_size,__t2076t__map__keys__unsafe_offset,__t2076t__map__keys__unsafe_align,__t2076t__map__values__unsafe_ptr,__t2076t__map__values__unsafe_size,__t2076t__map__values__unsafe_offset,__t2076t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t443t(__t2076t__map__keys__unsafe_ptr,&__t2077t____t2066t____t2040t____t1948t____t518t__);
  if(__t2077t____t2066t____t2040t____t1948t____t518t__){
  free__t509t(&__t2076t__map__keys__unsafe_ptr);
  }
  exists__t443t(__t2076t__map__values__unsafe_ptr,&__t2077t____t2066t____t2038t____t518t__);
  if(__t2077t____t2066t____t2038t____t518t__){
  free__t509t(&__t2076t__map__values__unsafe_ptr);
  }
  exists__t443t(__t2076t__buf__buf__unsafe_ptr,&__t2077t____t2063t____t518t__);
  if(__t2077t____t2063t____t518t__){
  free__t509t(&__t2076t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2074t();return 0;}