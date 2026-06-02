#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2048t=".s";
const char* const __t2029t="./tests/passing/";
const char* const __t377t="\n";
const char* const __t2035t="./smoll ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1504t(char** __t2058t, uint64_t* __t2059t, uint16_t* __t2060t, uint16_t* __t2061t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2058t=unsafe_ptr;
  *__t2059t=unsafe_size;
  *__t2060t=unsafe_offset;
  *__t2061t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2062t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2062t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2063t) {
  char* allocated=*__t2063t;
  if(allocated){
  free(allocated);
  }
  *__t2063t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2064t) {
  int value=0;
  *__t2064t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2065t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2065t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2066t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2066t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2067t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2067t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2068t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2068t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2069t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2069t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2070t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2070t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2071t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2071t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2072t) {
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
  *__t2072t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2073t, uint64_t* __t2074t, uint16_t* __t2075t, uint16_t* __t2076t, uint64_t size, char** __t2077t, uint64_t* __t2078t, uint16_t* __t2079t, uint16_t* __t2080t) {
  char* buffer__unsafe_ptr=*__t2073t;
  uint64_t buffer__unsafe_size=*__t2074t;
  uint16_t buffer__unsafe_offset=*__t2075t;
  uint16_t buffer__unsafe_align=*__t2076t;
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
  *__t2073t=buffer__unsafe_ptr;
  *__t2074t=buffer__unsafe_size;
  *__t2075t=buffer__unsafe_offset;
  *__t2076t=buffer__unsafe_align;
  *__t2077t=buffer__unsafe_ptr;
  *__t2078t=buffer__unsafe_size;
  *__t2079t=buffer__unsafe_offset;
  *__t2080t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t632t(char** __t2081t, uint64_t* __t2082t, uint16_t* __t2083t, uint16_t* __t2084t, char** __t2085t, uint64_t* __t2086t, uint16_t* __t2087t, uint16_t* __t2088t, uint64_t* __t2089t) {
  char* buf__unsafe_ptr=*__t2081t;
  uint64_t buf__unsafe_size=*__t2082t;
  uint16_t buf__unsafe_offset=*__t2083t;
  uint16_t buf__unsafe_align=*__t2084t;
  uint64_t __t633t=0;
  uint64_t __t634t=0;
  uint64_t pos=0;
  __t633t=0;
  __t634t=__t633t;
  pos=__t634t;
  goto __t_return;
  __t_return:
  *__t2081t=buf__unsafe_ptr;
  *__t2082t=buf__unsafe_size;
  *__t2083t=buf__unsafe_offset;
  *__t2084t=buf__unsafe_align;
  *__t2085t=buf__unsafe_ptr;
  *__t2086t=buf__unsafe_size;
  *__t2087t=buf__unsafe_offset;
  *__t2088t=buf__unsafe_align;
  *__t2089t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2090t, uint64_t* __t2091t, uint16_t* __t2092t, uint16_t* __t2093t) {
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

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2094t) {
  *__t2094t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2095t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2095t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2096t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2097t) {
  *__t2097t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2098t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2098t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2099t) {
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
  *__t2099t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2100t, uint64_t* __t2101t, uint64_t* __t2102t, char* __t2103t) {
  goto __t_return;
  __t_return:
  *__t2100t=unsafe_ptr;
  *__t2101t=dat__pos;
  *__t2102t=dat__length;
  *__t2103t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2104t, uint64_t* __t2105t, uint64_t* __t2106t, char* __t2107t) {
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
  *__t2104t=__t652t__unsafe_ptr;
  *__t2105t=__t652t__dat__pos;
  *__t2106t=__t652t__dat__length;
  *__t2107t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2108t, uint64_t* __t2109t, uint64_t* __t2110t, char* __t2111t) {
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
  *__t2108t=__t682t__unsafe_ptr;
  *__t2109t=__t682t__dat__pos;
  *__t2110t=__t682t__dat__length;
  *__t2111t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t2112t, uint64_t* __t2113t, uint64_t* __t2114t, char* __t2115t) {
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
  *__t2112t=__t690t__unsafe_ptr;
  *__t2113t=__t690t__dat__pos;
  *__t2114t=__t690t__dat__length;
  *__t2115t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2116t) {
  goto __t_return;
  __t_return:
  *__t2116t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2117t) {
  goto __t_return;
  __t_return:
  *__t2117t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t2118t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2118t=z;
}

int copy__t758t(char** __t2119t, uint64_t* __t2120t, uint16_t* __t2121t, uint16_t* __t2122t, uint64_t* __t2123t, const char* _other, char** __t2124t, uint64_t* __t2125t, uint64_t* __t2126t, char* __t2127t) {
  char* CHARS__buf__unsafe_ptr=*__t2119t;
  uint64_t CHARS__buf__unsafe_size=*__t2120t;
  uint16_t CHARS__buf__unsafe_offset=*__t2121t;
  uint16_t CHARS__buf__unsafe_align=*__t2122t;
  uint64_t CHARS__pos=*__t2123t;
  char* __t759t__unsafe_ptr=0;
  uint64_t __t759t__dat__pos=0;
  uint64_t __t759t__dat__length=0;
  char __t759t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t760t__=0;
  uint64_t __t761t__=0;
  uint64_t next_pos=0;
  uint64_t __t762t__=0;
  char __t763t__=0;
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t prev_pos=0;
  char* __t766t__unsafe_ptr=0;
  uint64_t __t766t__dat__pos=0;
  uint64_t __t766t__dat__length=0;
  char __t766t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(_other,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t759t__unsafe_ptr;
  other__dat__pos=__t759t__dat__pos;
  other__dat__length=__t759t__dat__length;
  other__dat__first=__t759t__dat__first;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t760t__);
  add__t174t(CHARS__pos,__t760t__,&__t761t__);
  next_pos=__t761t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t762t__);
  gt__t275t(next_pos,__t762t__,&__t763t__);
  if(__t763t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t764t=0;
  add__t174t(CHARS__pos,__t764t,&__t765t__);
  prev_pos=__t765t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t766t__unsafe_ptr,&__t766t__dat__pos,&__t766t__dat__length,&__t766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2119t=CHARS__buf__unsafe_ptr;
  *__t2120t=CHARS__buf__unsafe_size;
  *__t2121t=CHARS__buf__unsafe_offset;
  *__t2122t=CHARS__buf__unsafe_align;
  *__t2123t=CHARS__pos;
  *__t2124t=__t766t__unsafe_ptr;
  *__t2125t=__t766t__dat__pos;
  *__t2126t=__t766t__dat__length;
  *__t2127t=__t766t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1896t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1897t(const char* path, char** __t2128t) {
  char* unsafe_ptr=0;
  char __t1899t__=0;
  char __t1900t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t442t(unsafe_ptr,&__t1899t__);
  not__t27t(__t1899t__,&__t1900t__);
  if(__t1900t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1896t(unsafe_ptr);
  __t_return:
  *__t2128t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2129t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2129t=__t488t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1908t(char** __t2130t, const char** __t2131t) {
  char* f__unsafe_ptr=*__t2130t;
  char __t1909t__=0;
  char __t1910t__=0;
  char* de=0;
  char __t1911t__=0;
  char __t1912t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(f__unsafe_ptr,&__t1909t__);
  not__t27t(__t1909t__,&__t1910t__);
  if(__t1910t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t442t(de,&__t1911t__);
  not__t27t(__t1911t__,&__t1912t__);
  if(__t1912t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2130t=f__unsafe_ptr;
  *__t2131t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1913t(char** __t2132t, char** __t2133t, uint64_t* __t2134t, uint64_t* __t2135t, char* __t2136t) {
  char* f__unsafe_ptr=*__t2132t;
  const char* __t1914t__=0;
  char* __t1915t__unsafe_ptr=0;
  uint64_t __t1915t__dat__pos=0;
  uint64_t __t1915t__dat__length=0;
  char __t1915t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1908t(&f__unsafe_ptr,&__t1914t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t683t(__t1914t__,&__t1915t__unsafe_ptr,&__t1915t__dat__pos,&__t1915t__dat__length,&__t1915t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2132t=f__unsafe_ptr;
  *__t2133t=__t1915t__unsafe_ptr;
  *__t2134t=__t1915t__dat__pos;
  *__t2135t=__t1915t__dat__length;
  *__t2136t=__t1915t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1961t(char** __t2137t, uint64_t __t_anon1, char** __t2138t, uint64_t* __t2139t, uint64_t* __t2140t, char* __t2141t) {
  char* data__unsafe_ptr=*__t2137t;
  char* __t1962t__unsafe_ptr=0;
  uint64_t __t1962t__dat__pos=0;
  uint64_t __t1962t__dat__length=0;
  char __t1962t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1913t(&data__unsafe_ptr,&__t1962t__unsafe_ptr,&__t1962t__dat__pos,&__t1962t__dat__length,&__t1962t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2137t=data__unsafe_ptr;
  *__t2138t=__t1962t__unsafe_ptr;
  *__t2139t=__t1962t__dat__pos;
  *__t2140t=__t1962t__dat__length;
  *__t2141t=__t1962t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t676t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2142t, uint64_t* __t2143t, uint64_t* __t2144t, char* __t2145t) {
  goto __t_return;
  __t_return:
  *__t2142t=other__unsafe_ptr;
  *__t2143t=other__dat__pos;
  *__t2144t=other__dat__length;
  *__t2145t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2146t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2146t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2147t) {
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
  *__t2147t=z;
  
  return __t_errcode;
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

int slice__t869t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2149t, uint64_t* __t2150t, uint64_t* __t2151t, char* __t2152t) {
  char* __t870t__unsafe_ptr=0;
  uint64_t __t870t__dat__pos=0;
  uint64_t __t870t__dat__length=0;
  char __t870t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t871t__=0;
  char* __t872t__unsafe_ptr=0;
  uint64_t __t872t__dat__pos=0;
  uint64_t __t872t__dat__length=0;
  char __t872t__dat__first=0;
  char __t873t__=0;
  char __t874t__=0;
  char __t875t=0;
  char __t876t__=0;
  uint64_t __t877t__=0;
  uint64_t new_length=0;
  uint64_t __t878t=0;
  char __t879t__=0;
  char new_first=0;
  char* __t880t__=0;
  char __t881t__value=0;
  uint64_t __t882t__=0;
  char* __t883t__unsafe_ptr=0;
  uint64_t __t883t__dat__pos=0;
  uint64_t __t883t__dat__length=0;
  char __t883t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t676t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t870t__unsafe_ptr,&__t870t__dat__pos,&__t870t__dat__length,&__t870t__dat__first);
  s__unsafe_ptr=__t870t__unsafe_ptr;
  s__dat__pos=__t870t__dat__pos;
  s__dat__length=__t870t__dat__length;
  s__dat__first=__t870t__dat__first;
  eq__t119t(from,to,&__t871t__);
  if(__t871t__){
  __t_errcode=str__t683t(__t369t,&__t872t__unsafe_ptr,&__t872t__dat__pos,&__t872t__dat__length,&__t872t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t275t(from,to,&__t873t__);
  if(!__t873t__){
  gt__t275t(to,s__dat__length,&__t874t__);
  __t875t=__t874t__;
  }
  else{
  __t875t=0;
  not__t27t(__t875t,&__t876t__);
  __t875t=__t876t__;
  }
  if(__t875t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t351t(to,from,&__t877t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t877t__;
  __t878t=0;
  neq__t143t(from,__t878t,&__t879t__);
  if(__t879t__){
  get__t830t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t880t__);
  if(!__t880t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t881t__value,__t880t__,1);
  new_first=__t881t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t174t(s__dat__pos,from,&__t882t__);
  str__t641t(s__unsafe_ptr,__t882t__,new_length,new_first,&__t883t__unsafe_ptr,&__t883t__dat__pos,&__t883t__dat__length,&__t883t__dat__first);
  __t872t__unsafe_ptr=__t883t__unsafe_ptr;
  __t872t__dat__pos=__t883t__dat__pos;
  __t872t__dat__length=__t883t__dat__length;
  __t872t__dat__first=__t883t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2149t=__t872t__unsafe_ptr;
  *__t2150t=__t872t__dat__pos;
  *__t2151t=__t872t__dat__length;
  *__t2152t=__t872t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t695t(char x, char y, char* __t2153t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2153t=z;
}

static inline __attribute__((always_inline)) void eq__t834t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2154t) {
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
  *__t2154t=__t838t;
}

static inline __attribute__((always_inline)) int ends_with__t948t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2155t) {
  char* __t949t__unsafe_ptr=0;
  uint64_t __t949t__dat__pos=0;
  uint64_t __t949t__dat__length=0;
  char __t949t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t950t__unsafe_ptr=0;
  uint64_t __t950t__dat__pos=0;
  uint64_t __t950t__dat__length=0;
  char __t950t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t951t__=0;
  char __t952t=0;
  uint64_t __t953t__=0;
  uint64_t n=0;
  uint64_t __t954t__=0;
  uint64_t __t955t__=0;
  char* __t956t__unsafe_ptr=0;
  uint64_t __t956t__dat__pos=0;
  uint64_t __t956t__dat__length=0;
  char __t956t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t957t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t676t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t949t__unsafe_ptr,&__t949t__dat__pos,&__t949t__dat__length,&__t949t__dat__first);
  stack__unsafe_ptr=__t949t__unsafe_ptr;
  stack__dat__pos=__t949t__dat__pos;
  stack__dat__length=__t949t__dat__length;
  stack__dat__first=__t949t__dat__first;
  __t_errcode=str__t683t(_needle,&__t950t__unsafe_ptr,&__t950t__dat__pos,&__t950t__dat__length,&__t950t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t950t__unsafe_ptr;
  needle__dat__pos=__t950t__dat__pos;
  needle__dat__length=__t950t__dat__length;
  needle__dat__first=__t950t__dat__first;
  lt__t251t(stack__dat__length,needle__dat__length,&__t951t__);
  if(__t951t__){
  __t952t=0;
  goto __t_return;
  }
  len__t691t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t953t__);
  n=__t953t__;
  len__t691t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t954t__);
  __t_errcode=sub__t351t(n,__t954t__,&__t955t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t869t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t955t__,n,&__t956t__unsafe_ptr,&__t956t__dat__pos,&__t956t__dat__length,&__t956t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t956t__unsafe_ptr;
  ret__dat__pos=__t956t__dat__pos;
  ret__dat__length=__t956t__dat__length;
  ret__dat__first=__t956t__dat__first;
  eq__t834t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t957t__);
  __t952t=__t957t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2155t=__t952t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t767t(char** __t2156t, uint64_t* __t2157t, uint16_t* __t2158t, uint16_t* __t2159t, uint64_t* __t2160t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2161t, uint64_t* __t2162t, uint64_t* __t2163t, char* __t2164t) {
  char* CHARS__buf__unsafe_ptr=*__t2156t;
  uint64_t CHARS__buf__unsafe_size=*__t2157t;
  uint16_t CHARS__buf__unsafe_offset=*__t2158t;
  uint16_t CHARS__buf__unsafe_align=*__t2159t;
  uint64_t CHARS__pos=*__t2160t;
  char* __t768t__unsafe_ptr=0;
  uint64_t __t768t__dat__pos=0;
  uint64_t __t768t__dat__length=0;
  char __t768t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t769t__=0;
  uint64_t __t770t__=0;
  uint64_t null_pos=0;
  uint64_t __t771t=0;
  uint64_t __t772t__=0;
  uint64_t next_pos=0;
  uint64_t __t773t__=0;
  char __t774t__=0;
  char* endpos=0;
  uint64_t __t775t=0;
  uint64_t __t776t__=0;
  uint64_t prev_pos=0;
  char* __t777t__unsafe_ptr=0;
  uint64_t __t777t__dat__pos=0;
  uint64_t __t777t__dat__length=0;
  char __t777t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t676t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t768t__unsafe_ptr,&__t768t__dat__pos,&__t768t__dat__length,&__t768t__dat__first);
  other__unsafe_ptr=__t768t__unsafe_ptr;
  other__dat__pos=__t768t__dat__pos;
  other__dat__length=__t768t__dat__length;
  other__dat__first=__t768t__dat__first;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t769t__);
  add__t174t(CHARS__pos,__t769t__,&__t770t__);
  null_pos=__t770t__;
  __t771t=1;
  add__t174t(null_pos,__t771t,&__t772t__);
  next_pos=__t772t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t773t__);
  gt__t275t(next_pos,__t773t__,&__t774t__);
  if(__t774t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t775t=0;
  add__t174t(CHARS__pos,__t775t,&__t776t__);
  prev_pos=__t776t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t777t__unsafe_ptr,&__t777t__dat__pos,&__t777t__dat__length,&__t777t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2156t=CHARS__buf__unsafe_ptr;
  *__t2157t=CHARS__buf__unsafe_size;
  *__t2158t=CHARS__buf__unsafe_offset;
  *__t2159t=CHARS__buf__unsafe_align;
  *__t2160t=CHARS__pos;
  *__t2161t=__t777t__unsafe_ptr;
  *__t2162t=__t777t__dat__pos;
  *__t2163t=__t777t__dat__length;
  *__t2164t=__t777t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t747t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2165t) {
  uint64_t __t748t__=0;
  add__t174t(s__dat__pos,s__dat__length,&__t748t__);
  goto __t_return;
  __t_return:
  *__t2165t=__t748t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2166t) {
  int value=0;
  *__t2166t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2167t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2167t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t653t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2168t, uint64_t* __t2169t, uint64_t* __t2170t, char* __t2171t) {
  int __t654t=0;
  int __t655t=0;
  int __t656t__=0;
  uint64_t __t657t__=0;
  char __t658t__=0;
  uint64_t __t659t=0;
  uint64_t __t660t=0;
  char* __t661t__=0;
  char __t662t__value=0;
  char* __t663t__unsafe_ptr=0;
  uint64_t __t663t__dat__pos=0;
  uint64_t __t663t__dat__length=0;
  char __t663t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t38t(__t655t,&__t656t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t657t__);
  gt__t275t(length,__t657t__,&__t658t__);
  if(__t658t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t659t=0;
  __t660t=0;
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t660t,&__t661t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t661t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t662t__value,__t661t__,1);
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t659t,length,__t662t__value,&__t663t__unsafe_ptr,&__t663t__dat__pos,&__t663t__dat__length,&__t663t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2168t=__t663t__unsafe_ptr;
  *__t2169t=__t663t__dat__pos;
  *__t2170t=__t663t__dat__length;
  *__t2171t=__t663t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t630t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t714t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2172t, uint64_t* __t2173t, uint64_t* __t2174t, char* __t2175t) {
  char* __t715t__unsafe_ptr=0;
  uint64_t __t715t__unsafe_size=0;
  uint16_t __t715t__unsafe_offset=0;
  uint16_t __t715t__unsafe_align=0;
  char* __t716t__unsafe_ptr=0;
  uint64_t __t716t__unsafe_size=0;
  uint16_t __t716t__unsafe_offset=0;
  uint16_t __t716t__unsafe_align=0;
  uint64_t __t717t=0;
  uint64_t __t718t__=0;
  uint64_t __t719t__=0;
  char* __t720t__unsafe_ptr=0;
  uint64_t __t720t__unsafe_size=0;
  uint16_t __t720t__unsafe_offset=0;
  uint16_t __t720t__unsafe_align=0;
  char __t721t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t722t=0;
  char* __t723t__unsafe_ptr=0;
  uint64_t __t723t__dat__pos=0;
  uint64_t __t723t__dat__length=0;
  char __t723t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t715t__unsafe_ptr,&__t715t__unsafe_size,&__t715t__unsafe_offset,&__t715t__unsafe_align);
  __t716t__unsafe_ptr=__t715t__unsafe_ptr;
  __t716t__unsafe_size=__t715t__unsafe_size;
  __t716t__unsafe_offset=__t715t__unsafe_offset;
  __t716t__unsafe_align=__t715t__unsafe_align;
  __t717t=1;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t718t__);
  add__t174t(__t717t,__t718t__,&__t719t__);
  __t_errcode=alloc__t515t(&__t716t__unsafe_ptr,&__t716t__unsafe_size,&__t716t__unsafe_offset,&__t716t__unsafe_align,__t719t__,&__t720t__unsafe_ptr,&__t720t__unsafe_size,&__t720t__unsafe_offset,&__t720t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t720t__unsafe_ptr;
  buf__unsafe_size=__t720t__unsafe_size;
  buf__unsafe_offset=__t720t__unsafe_offset;
  buf__unsafe_align=__t720t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t722t=0;
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t722t,other__dat__length,other__dat__first,&__t723t__unsafe_ptr,&__t723t__dat__pos,&__t723t__dat__length,&__t723t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(__t723t__unsafe_ptr,&__t721t____t517t__);
  if(__t721t____t517t__){
  free__t508t(&__t723t__unsafe_ptr);
  }
  __t_return:
  *__t2172t=__t723t__unsafe_ptr;
  *__t2173t=__t723t__dat__pos;
  *__t2174t=__t723t__dat__length;
  *__t2175t=__t723t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t724t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2176t, char** __t2177t, uint64_t* __t2178t, uint64_t* __t2179t, char* __t2180t) {
  char* __t726t__unsafe_ptr=0;
  uint64_t __t726t__dat__pos=0;
  uint64_t __t726t__dat__length=0;
  char __t726t__dat__first=0;
  char __t727t____t721t____t517t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t728t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t630t();
  __t_errcode=copy_null_terminated__t714t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t726t__unsafe_ptr,&__t726t__dat__pos,&__t726t__dat__length,&__t726t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t726t__unsafe_ptr;
  str__dat__pos=__t726t__dat__pos;
  str__dat__length=__t726t__dat__length;
  str__dat__first=__t726t__dat__first;
  add__t510t(str__unsafe_ptr,str__dat__pos,&__t728t__);
  _ret=__t728t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t442t(str__unsafe_ptr,&__t727t____t721t____t517t__);
  if(__t727t____t721t____t517t__){
  free__t508t(&str__unsafe_ptr);
  }
  __t_return:
  *__t2176t=cstr;
  *__t2177t=str__unsafe_ptr;
  *__t2178t=str__dat__pos;
  *__t2179t=str__dat__length;
  *__t2180t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t732t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2181t) {
  goto __t_return;
  __t_return:
  *__t2181t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1486t(const char* cmd, char** __t2182t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2182t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1485t(char* unsafe_ptr, int64_t* __t2183t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2183t=status;
}

static inline __attribute__((always_inline)) void int__t422t(uint64_t x, int64_t* __t2184t) {
  int __t423t=0;
  int __t424t=0;
  int __t425t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2184t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2185t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2185t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2186t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2186t=z;
}

static inline __attribute__((always_inline)) int read__t1487t(const char* cmd, char** __t2187t) {
  char* __t1488t__=0;
  char* unsafe_ptr=0;
  char __t1489t__=0;
  char __t1490t__=0;
  char __t1491t__=0;
  int64_t __t1492t__=0;
  int64_t status=0;
  uint64_t __t1493t=0;
  int64_t __t1494t__=0;
  char __t1495t__=0;
  char __t1496t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1486t(cmd,&__t1488t__);
  unsafe_ptr=__t1488t__;
  exists__t442t(unsafe_ptr,&__t1489t__);
  not__t27t(__t1489t__,&__t1490t__);
  if(__t1490t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(unsafe_ptr,&__t1491t__);
  if(__t1491t__){
  pclose__t1485t(unsafe_ptr,&__t1492t__);
  status=__t1492t__;
  unsafe_ptr=0;
  __t1493t=0;
  int__t422t(__t1493t,&__t1494t__);
  neq__t132t(status,__t1494t__,&__t1495t__);
  if(__t1495t__){
  __t_complain=36;
  __t1496t=__t1496t==0;
  }
  }
  __t_return:
  *__t2187t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1498t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2188t) {
  const char* __t1499t__cstr=0;
  char* __t1499t__str__unsafe_ptr=0;
  uint64_t __t1499t__str__dat__pos=0;
  uint64_t __t1499t__str__dat__length=0;
  char __t1499t__str__dat__first=0;
  char __t1500t____t727t____t721t____t517t__=0;
  const char* __t1501t__=0;
  char* __t1502t__unsafe_ptr=0;
  char __t1503t____t1491t__=0;
  int64_t __t1503t____t1492t__=0;
  int64_t __t1503t__status=0;
  uint64_t __t1503t____t1493t=0;
  int64_t __t1503t____t1494t__=0;
  char __t1503t____t1495t__=0;
  char __t1503t____t1496t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t724t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1499t__cstr,&__t1499t__str__unsafe_ptr,&__t1499t__str__dat__pos,&__t1499t__str__dat__length,&__t1499t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t732t(__t1499t__cstr,__t1499t__str__unsafe_ptr,__t1499t__str__dat__pos,__t1499t__str__dat__length,__t1499t__str__dat__first,&__t1501t__);
  __t_errcode=read__t1487t(__t1501t__,&__t1502t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t442t(__t1502t__unsafe_ptr,&__t1503t____t1491t__);
  if(__t1503t____t1491t__){
  pclose__t1485t(__t1502t__unsafe_ptr,&__t1503t____t1492t__);
  __t1503t__status=__t1503t____t1492t__;
  __t1502t__unsafe_ptr=0;
  __t1503t____t1493t=0;
  int__t422t(__t1503t____t1493t,&__t1503t____t1494t__);
  neq__t132t(__t1503t__status,__t1503t____t1494t__,&__t1503t____t1495t__);
  if(__t1503t____t1495t__){
  __t_complain=36;
  __t1503t____t1496t=__t1503t____t1496t==0;
  }
  }
  __t_return:
  *__t2188t=__t1502t__unsafe_ptr;
  exists__t442t(__t1499t__str__unsafe_ptr,&__t1500t____t727t____t721t____t517t__);
  if(__t1500t____t727t____t721t____t517t__){
  free__t508t(&__t1499t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1479t(int64_t value, const char** __t2189t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2189t=ret;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2019t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2020t__unsafe_ptr=0;
  char __t2021t____t1503t____t1491t__=0;
  int64_t __t2021t____t1503t____t1492t__=0;
  int64_t __t2021t____t1503t__status=0;
  uint64_t __t2021t____t1503t____t1493t=0;
  int64_t __t2021t____t1503t____t1494t__=0;
  char __t2021t____t1503t____t1495t__=0;
  char __t2021t____t1503t____t1496t=0;
  char* __t2022t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2023t=0;
  int64_t __t2024t=0;
  int64_t error=0;
  const char* __t2025t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1498t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2020t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2022t__unsafe_ptr=__t2020t__unsafe_ptr;
  proc__unsafe_ptr=__t2022t__unsafe_ptr;
  exists__t442t(__t2020t__unsafe_ptr,&__t2021t____t1503t____t1491t__);
  if(__t2021t____t1503t____t1491t__){
  pclose__t1485t(__t2020t__unsafe_ptr,&__t2021t____t1503t____t1492t__);
  __t2021t____t1503t__status=__t2021t____t1503t____t1492t__;
  __t2020t__unsafe_ptr=0;
  __t2021t____t1503t____t1493t=0;
  int__t422t(__t2021t____t1503t____t1493t,&__t2021t____t1503t____t1494t__);
  neq__t132t(__t2021t____t1503t__status,__t2021t____t1503t____t1494t__,&__t2021t____t1503t____t1495t__);
  if(__t2021t____t1503t____t1495t__){
  __t_complain=36;
  __t2021t____t1503t____t1496t=__t2021t____t1503t____t1496t==0;
  }
  }
  __t2024t=__t_complain;
  __t2023t=(__t_complain==0);
  __t_complain=0;
  error=__t2024t;
  __t2023t=__t2023t==0;
  if(__t2023t){
  cstr__t1479t(error,&__t2025t__);
  print__t375t(__t2025t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2027t() {
  const char* path=0;
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__unsafe_size=0;
  uint16_t __t2030t__unsafe_offset=0;
  uint16_t __t2030t__unsafe_align=0;
  uint64_t __t2031t=0;
  char* __t2032t__unsafe_ptr=0;
  uint64_t __t2032t__unsafe_size=0;
  uint16_t __t2032t__unsafe_offset=0;
  uint16_t __t2032t__unsafe_align=0;
  char __t2033t____t517t__=0;
  char* __t2034t__buf__unsafe_ptr=0;
  uint64_t __t2034t__buf__unsafe_size=0;
  uint16_t __t2034t__buf__unsafe_offset=0;
  uint16_t __t2034t__buf__unsafe_align=0;
  uint64_t __t2034t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t2036t__unsafe_ptr=0;
  uint64_t __t2036t__dat__pos=0;
  uint64_t __t2036t__dat__length=0;
  char __t2036t__dat__first=0;
  char* __t2037t__unsafe_ptr=0;
  uint64_t __t2037t__dat__pos=0;
  uint64_t __t2037t__dat__length=0;
  char __t2037t__dat__first=0;
  char* __t2038t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t2040t__unsafe_ptr=0;
  uint64_t __t2040t__unsafe_size=0;
  uint16_t __t2040t__unsafe_offset=0;
  uint16_t __t2040t__unsafe_align=0;
  uint64_t __t2041t=0;
  uint64_t __t2042t__=0;
  char* __t2043t__unsafe_ptr=0;
  uint64_t __t2043t__unsafe_size=0;
  uint16_t __t2043t__unsafe_offset=0;
  uint16_t __t2043t__unsafe_align=0;
  char __t2044t____t517t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t2045t=0;
  char __t2046t=0;
  char* __t2047t__unsafe_ptr=0;
  uint64_t __t2047t__dat__pos=0;
  uint64_t __t2047t__dat__length=0;
  char __t2047t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2049t__=0;
  char __t2050t__=0;
  char* __t2051t__buf__unsafe_ptr=0;
  uint64_t __t2051t__buf__unsafe_size=0;
  uint16_t __t2051t__buf__unsafe_offset=0;
  uint16_t __t2051t__buf__unsafe_align=0;
  uint64_t __t2051t__pos=0;
  char* __t2052t__unsafe_ptr=0;
  uint64_t __t2052t__dat__pos=0;
  uint64_t __t2052t__dat__length=0;
  char __t2052t__dat__first=0;
  char* __t2053t__unsafe_ptr=0;
  uint64_t __t2053t__dat__pos=0;
  uint64_t __t2053t__dat__length=0;
  char __t2053t__dat__first=0;
  uint64_t __t2054t__=0;
  char* __t2055t__unsafe_ptr=0;
  uint64_t __t2055t__dat__pos=0;
  uint64_t __t2055t__dat__length=0;
  char __t2055t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  path=__t2029t;
  char____t_buffer____buffer__t1504t(&__t2030t__unsafe_ptr,&__t2030t__unsafe_size,&__t2030t__unsafe_offset,&__t2030t__unsafe_align);
  __t2031t=256;
  __t_errcode=alloc__t515t(&__t2030t__unsafe_ptr,&__t2030t__unsafe_size,&__t2030t__unsafe_offset,&__t2030t__unsafe_align,__t2031t,&__t2032t__unsafe_ptr,&__t2032t__unsafe_size,&__t2032t__unsafe_offset,&__t2032t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t632t(&__t2032t__unsafe_ptr,&__t2032t__unsafe_size,&__t2032t__unsafe_offset,&__t2032t__unsafe_align,&__t2034t__buf__unsafe_ptr,&__t2034t__buf__unsafe_size,&__t2034t__buf__unsafe_offset,&__t2034t__buf__unsafe_align,&__t2034t__pos);
  bp__buf__unsafe_ptr=__t2034t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t2034t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t2034t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t2034t__buf__unsafe_align;
  bp__pos=__t2034t__pos;
  __t_errcode=copy__t758t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t2035t,&__t2036t__unsafe_ptr,&__t2036t__dat__pos,&__t2036t__dat__length,&__t2036t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t758t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t2037t__unsafe_ptr,&__t2037t__dat__pos,&__t2037t__dat__length,&__t2037t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1897t(path,&__t2038t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2038t__unsafe_ptr;
  char____t_buffer____buffer__t1504t(&__t2040t__unsafe_ptr,&__t2040t__unsafe_size,&__t2040t__unsafe_offset,&__t2040t__unsafe_align);
  __t2041t=4;
  KB__t486t(__t2041t,&__t2042t__);
  __t_errcode=alloc__t515t(&__t2040t__unsafe_ptr,&__t2040t__unsafe_size,&__t2040t__unsafe_offset,&__t2040t__unsafe_align,__t2042t__,&__t2043t__unsafe_ptr,&__t2043t__unsafe_size,&__t2043t__unsafe_offset,&__t2043t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t2043t__unsafe_ptr;
  proc_buf__unsafe_size=__t2043t__unsafe_size;
  proc_buf__unsafe_offset=__t2043t__unsafe_offset;
  proc_buf__unsafe_align=__t2043t__unsafe_align;
  __t2045t=0;
  while(1){
  __t_complain=get__t1961t(&test_dir__unsafe_ptr,__t2045t,&__t2047t__unsafe_ptr,&__t2047t__dat__pos,&__t2047t__dat__length,&__t2047t__dat__first);
  __t2046t=__t_complain;
  entry__unsafe_ptr=__t2047t__unsafe_ptr;
  entry__dat__pos=__t2047t__dat__pos;
  entry__dat__length=__t2047t__dat__length;
  entry__dat__first=__t2047t__dat__first;
  __t2046t=__t2046t==0;
  __t2045t=__t2045t+1;
  if(!__t2046t){
  break;
  }
  __t_errcode=ends_with__t948t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2048t,&__t2049t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t2049t__,&__t2050t__);
  if(__t2050t__){
  continue;
  }
  __t2051t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t2051t__buf__unsafe_size=bp__buf__unsafe_size;
  __t2051t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t2051t__buf__unsafe_align=bp__buf__unsafe_align;
  __t2051t__pos=bp__pos;
  str__t676t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2052t__unsafe_ptr,&__t2052t__dat__pos,&__t2052t__dat__length,&__t2052t__dat__first);
  __t_errcode=copy_null_terminated__t767t(&__t2051t__buf__unsafe_ptr,&__t2051t__buf__unsafe_size,&__t2051t__buf__unsafe_offset,&__t2051t__buf__unsafe_align,&__t2051t__pos,__t2052t__unsafe_ptr,__t2052t__dat__pos,__t2052t__dat__length,__t2052t__dat__first,&__t2053t__unsafe_ptr,&__t2053t__dat__pos,&__t2053t__dat__length,&__t2053t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t747t(__t2053t__unsafe_ptr,__t2053t__dat__pos,__t2053t__dat__length,__t2053t__dat__first,&__t2054t__);
  __t_errcode=str__t653t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t2054t__,&__t2055t__unsafe_ptr,&__t2055t__dat__pos,&__t2055t__dat__length,&__t2055t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2055t__unsafe_ptr;
  command__dat__pos=__t2055t__dat__pos;
  command__dat__length=__t2055t__dat__length;
  command__dat__first=__t2055t__dat__first;
  print__t791t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2019t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:exists__t442t(__t2043t__unsafe_ptr,&__t2044t____t517t__);
  if(__t2044t____t517t__){
  free__t508t(&__t2043t__unsafe_ptr);
  }
  closedir__t1896t(__t2038t__unsafe_ptr);
  exists__t442t(__t2032t__unsafe_ptr,&__t2033t____t517t__);
  if(__t2033t____t517t__){
  free__t508t(&__t2032t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2027t();return 0;}