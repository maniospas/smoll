#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2013t="README.md";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2029t, uint64_t* __t2030t, uint16_t* __t2031t, uint16_t* __t2032t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2029t=unsafe_ptr;
  *__t2030t=unsafe_size;
  *__t2031t=unsafe_offset;
  *__t2032t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2033t) {
  *__t2033t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2034t) {
  int value=0;
  *__t2034t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2035t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2035t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2036t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2036t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2037t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2037t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2038t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2040t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2040t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2041t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2041t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2042t) {
  *__t2042t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2043t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2043t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2044t) {
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
  *__t2044t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2045t, uint64_t* __t2046t, uint64_t* __t2047t, char* __t2048t) {
  goto __t_return;
  __t_return:
  *__t2045t=unsafe_ptr;
  *__t2046t=dat__pos;
  *__t2047t=dat__length;
  *__t2048t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2049t, uint64_t* __t2050t, uint64_t* __t2051t, char* __t2052t) {
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
  *__t2049t=__t652t__unsafe_ptr;
  *__t2050t=__t652t__dat__pos;
  *__t2051t=__t652t__dat__length;
  *__t2052t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2053t, uint64_t* __t2054t, uint64_t* __t2055t, char* __t2056t) {
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
  *__t2053t=__t682t__unsafe_ptr;
  *__t2054t=__t682t__dat__pos;
  *__t2055t=__t682t__dat__length;
  *__t2056t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t2057t, uint64_t* __t2058t, uint64_t* __t2059t, char* __t2060t) {
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
  *__t2057t=__t690t__unsafe_ptr;
  *__t2058t=__t690t__dat__pos;
  *__t2059t=__t690t__dat__length;
  *__t2060t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t630t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2061t) {
  goto __t_return;
  __t_return:
  *__t2061t=s__dat__length;
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

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2064t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2064t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2065t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2065t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2066t) {
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
  *__t2066t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t, uint64_t size, char** __t2071t, uint64_t* __t2072t, uint16_t* __t2073t, uint16_t* __t2074t) {
  char* buffer__unsafe_ptr=*__t2067t;
  uint64_t buffer__unsafe_size=*__t2068t;
  uint16_t buffer__unsafe_offset=*__t2069t;
  uint16_t buffer__unsafe_align=*__t2070t;
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
  *__t2067t=buffer__unsafe_ptr;
  *__t2068t=buffer__unsafe_size;
  *__t2069t=buffer__unsafe_offset;
  *__t2070t=buffer__unsafe_align;
  *__t2071t=buffer__unsafe_ptr;
  *__t2072t=buffer__unsafe_size;
  *__t2073t=buffer__unsafe_offset;
  *__t2074t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t714t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2075t, uint64_t* __t2076t, uint64_t* __t2077t, char* __t2078t) {
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
  *__t2075t=__t723t__unsafe_ptr;
  *__t2076t=__t723t__dat__pos;
  *__t2077t=__t723t__dat__length;
  *__t2078t=__t723t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t724t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2079t, char** __t2080t, uint64_t* __t2081t, uint64_t* __t2082t, char* __t2083t) {
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
  *__t2079t=cstr;
  *__t2080t=str__unsafe_ptr;
  *__t2081t=str__dat__pos;
  *__t2082t=str__dat__length;
  *__t2083t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t732t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2084t) {
  goto __t_return;
  __t_return:
  *__t2084t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1561t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2085t) {
  const char* __t1562t__cstr=0;
  char* __t1562t__str__unsafe_ptr=0;
  uint64_t __t1562t__str__dat__pos=0;
  uint64_t __t1562t__str__dat__length=0;
  char __t1562t__str__dat__first=0;
  char __t1563t____t727t____t721t____t517t__=0;
  const char* __t1564t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1565t__=0;
  char __t1566t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t724t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1562t__cstr,&__t1562t__str__unsafe_ptr,&__t1562t__str__dat__pos,&__t1562t__str__dat__length,&__t1562t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t732t(__t1562t__cstr,__t1562t__str__unsafe_ptr,__t1562t__str__dat__pos,__t1562t__str__dat__length,__t1562t__str__dat__first,&__t1564t__);
  path=__t1564t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t442t(unsafe_ptr,&__t1565t__);
  not__t27t(__t1565t__,&__t1566t__);
  if(__t1566t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t2085t=unsafe_ptr;
  exists__t442t(__t1562t__str__unsafe_ptr,&__t1563t____t727t____t721t____t517t__);
  if(__t1563t____t727t____t721t____t517t__){
  free__t508t(&__t1562t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t2086t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t2086t=__t488t__;
}

static inline __attribute__((always_inline)) int alloc__t556t(uint64_t size, char** __t2087t, uint64_t* __t2088t, uint16_t* __t2089t, uint16_t* __t2090t) {
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
  *__t2087t=__t561t__unsafe_ptr;
  *__t2088t=__t561t__unsafe_size;
  *__t2089t=__t561t__unsafe_offset;
  *__t2090t=__t561t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t2091t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2091t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t2092t) {
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
  *__t2092t=z;
  
  return __t_errcode;
}

int line__t1732t(char** __t2093t, uint64_t* __t2094t, uint16_t* __t2095t, uint16_t* __t2096t, uint64_t* __t2097t, char** __t2098t, char** __t2099t, uint64_t* __t2100t, uint64_t* __t2101t, char* __t2102t) {
  char* buf__unsafe_ptr=*__t2093t;
  uint64_t buf__unsafe_size=*__t2094t;
  uint16_t buf__unsafe_offset=*__t2095t;
  uint16_t buf__unsafe_align=*__t2096t;
  uint64_t pos=*__t2097t;
  char* f__unsafe_ptr=*__t2098t;
  int __t1733t=0;
  char __t1734t__=0;
  char __t1735t__=0;
  char* __t1736t__=0;
  char* contents=0;
  uint64_t __t1737t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1738t__=0;
  char __t1739t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1740t__=0;
  char* __t1741t__unsafe_ptr=0;
  uint64_t __t1741t__dat__pos=0;
  uint64_t __t1741t__dat__length=0;
  char __t1741t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(buf__unsafe_ptr,&__t1734t__);
  not__t27t(__t1734t__,&__t1735t__);
  if(__t1735t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t510t(buf__unsafe_ptr,pos,&__t1736t__);
  contents=__t1736t__;
  __t_errcode=sub__t351t(buf__unsafe_size,pos,&__t1737t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1737t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t442t(obtained,&__t1738t__);
  not__t27t(__t1738t__,&__t1739t__);
  if(__t1739t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t174t(pos,bytes_read,&__t1740t__);
  pos=__t1740t__;
  __t_errcode=str__t677t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1741t__unsafe_ptr,&__t1741t__dat__pos,&__t1741t__dat__length,&__t1741t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2093t=buf__unsafe_ptr;
  *__t2094t=buf__unsafe_size;
  *__t2095t=buf__unsafe_offset;
  *__t2096t=buf__unsafe_align;
  *__t2097t=pos;
  *__t2098t=f__unsafe_ptr;
  *__t2099t=__t1741t__unsafe_ptr;
  *__t2100t=__t1741t__dat__pos;
  *__t2101t=__t1741t__dat__length;
  *__t2102t=__t1741t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1963t(char** __t2103t, uint64_t* __t2104t, uint16_t* __t2105t, uint16_t* __t2106t, uint64_t* __t2107t, char** __t2108t, uint64_t __t_anon3, char** __t2109t, uint64_t* __t2110t, uint64_t* __t2111t, char* __t2112t) {
  char* buf__unsafe_ptr=*__t2103t;
  uint64_t buf__unsafe_size=*__t2104t;
  uint16_t buf__unsafe_offset=*__t2105t;
  uint16_t buf__unsafe_align=*__t2106t;
  uint64_t pos=*__t2107t;
  char* f__unsafe_ptr=*__t2108t;
  int __t1964t=0;
  char* __t1965t__unsafe_ptr=0;
  uint64_t __t1965t__dat__pos=0;
  uint64_t __t1965t__dat__length=0;
  char __t1965t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1732t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t1965t__unsafe_ptr,&__t1965t__dat__pos,&__t1965t__dat__length,&__t1965t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2103t=buf__unsafe_ptr;
  *__t2104t=buf__unsafe_size;
  *__t2105t=buf__unsafe_offset;
  *__t2106t=buf__unsafe_align;
  *__t2107t=pos;
  *__t2108t=f__unsafe_ptr;
  *__t2109t=__t1965t__unsafe_ptr;
  *__t2110t=__t1965t__dat__pos;
  *__t2111t=__t1965t__dat__length;
  *__t2112t=__t1965t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2011t() {
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__dat__pos=0;
  uint64_t __t2014t__dat__length=0;
  char __t2014t__dat__first=0;
  char* __t2015t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2017t=0;
  uint64_t __t2018t__=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__unsafe_size=0;
  uint16_t __t2019t__unsafe_offset=0;
  uint16_t __t2019t__unsafe_align=0;
  char __t2020t____t562t____t517t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2021t=0;
  uint64_t __t2022t=0;
  uint64_t pos=0;
  uint64_t __t2023t=0;
  char __t2024t=0;
  char* __t2025t__unsafe_ptr=0;
  uint64_t __t2025t__dat__pos=0;
  uint64_t __t2025t__dat__length=0;
  char __t2025t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2026t=0;
  char* __t2027t__unsafe_ptr=0;
  uint64_t __t2027t__dat__pos=0;
  uint64_t __t2027t__dat__length=0;
  char __t2027t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=str__t683t(__t2013t,&__t2014t__unsafe_ptr,&__t2014t__dat__pos,&__t2014t__dat__length,&__t2014t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1561t(__t2014t__unsafe_ptr,__t2014t__dat__pos,__t2014t__dat__length,__t2014t__dat__first,&__t2015t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2015t__unsafe_ptr;
  __t2017t=4;
  KB__t486t(__t2017t,&__t2018t__);
  __t_errcode=alloc__t556t(__t2018t__,&__t2019t__unsafe_ptr,&__t2019t__unsafe_size,&__t2019t__unsafe_offset,&__t2019t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2019t__unsafe_ptr;
  mem__unsafe_size=__t2019t__unsafe_size;
  mem__unsafe_offset=__t2019t__unsafe_offset;
  mem__unsafe_align=__t2019t__unsafe_align;
  __t2021t=0;
  __t2022t=__t2021t;
  pos=__t2022t;
  __t2023t=0;
  while(1){
  __t_complain=get__t1963t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2023t,&__t2025t__unsafe_ptr,&__t2025t__dat__pos,&__t2025t__dat__length,&__t2025t__dat__first);
  __t2024t=__t_complain;
  line__unsafe_ptr=__t2025t__unsafe_ptr;
  line__dat__pos=__t2025t__dat__pos;
  line__dat__length=__t2025t__dat__length;
  line__dat__first=__t2025t__dat__first;
  __t2024t=__t2024t==0;
  __t2023t=__t2023t+1;
  if(!__t2024t){
  break;
  }
  continue;
  }
  if(__t2015t__unsafe_ptr){
  fclose((FILE*)__t2015t__unsafe_ptr);
  __t2015t__unsafe_ptr=0;
  }
  __t2026t=0;
  __t_errcode=str__t677t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2026t,pos,&__t2027t__unsafe_ptr,&__t2027t__dat__pos,&__t2027t__dat__length,&__t2027t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t791t(__t2027t__unsafe_ptr,__t2027t__dat__pos,__t2027t__dat__length,__t2027t__dat__first);
  
  __t_failure:exists__t442t(__t2019t__unsafe_ptr,&__t2020t____t562t____t517t__);
  if(__t2020t____t562t____t517t__){
  free__t508t(&__t2019t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}