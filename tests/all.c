#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2112t=".s";
const char* const __t2103t="./tests/passing/";
const char* const __t378t="\n";
const char* const __t370t="";
const char* const __t2104t="./smoll ";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1533t(char** __t2122t, uint64_t* __t2123t, uint16_t* __t2124t, uint16_t* __t2125t) {
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

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2126t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2126t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2127t) {
  char* allocated=*__t2127t;
  if(allocated){
  free(allocated);
  }
  *__t2127t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2128t) {
  int value=0;
  *__t2128t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2129t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2129t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2130t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2130t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2131t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2131t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2132t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2132t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2133t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2133t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2134t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2134t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2135t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2135t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2136t) {
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
  *__t2136t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2137t, uint64_t* __t2138t, uint16_t* __t2139t, uint16_t* __t2140t, uint64_t size, char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t) {
  char* buffer__unsafe_ptr=*__t2137t;
  uint64_t buffer__unsafe_size=*__t2138t;
  uint16_t buffer__unsafe_offset=*__t2139t;
  uint16_t buffer__unsafe_align=*__t2140t;
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
  *__t2137t=buffer__unsafe_ptr;
  *__t2138t=buffer__unsafe_size;
  *__t2139t=buffer__unsafe_offset;
  *__t2140t=buffer__unsafe_align;
  *__t2141t=buffer__unsafe_ptr;
  *__t2142t=buffer__unsafe_size;
  *__t2143t=buffer__unsafe_offset;
  *__t2144t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t633t(char** __t2145t, uint64_t* __t2146t, uint16_t* __t2147t, uint16_t* __t2148t, char** __t2149t, uint64_t* __t2150t, uint16_t* __t2151t, uint16_t* __t2152t, uint64_t* __t2153t) {
  char* buf__unsafe_ptr=*__t2145t;
  uint64_t buf__unsafe_size=*__t2146t;
  uint16_t buf__unsafe_offset=*__t2147t;
  uint16_t buf__unsafe_align=*__t2148t;
  uint64_t __t634t=0;
  uint64_t __t635t=0;
  uint64_t pos=0;
  __t634t=0;
  __t635t=__t634t;
  pos=__t635t;
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t2154t, uint64_t* __t2155t, uint16_t* __t2156t, uint16_t* __t2157t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2154t=unsafe_ptr;
  *__t2155t=unsafe_size;
  *__t2156t=unsafe_offset;
  *__t2157t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2158t) {
  *__t2158t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2159t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2159t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2160t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2160t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2161t) {
  *__t2161t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2162t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2162t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2163t) {
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
  *__t2163t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2164t, uint64_t* __t2165t, uint64_t* __t2166t, char* __t2167t) {
  goto __t_return;
  __t_return:
  *__t2164t=unsafe_ptr;
  *__t2165t=dat__pos;
  *__t2166t=dat__length;
  *__t2167t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2168t, uint64_t* __t2169t, uint64_t* __t2170t, char* __t2171t) {
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
  *__t2168t=__t653t__unsafe_ptr;
  *__t2169t=__t653t__dat__pos;
  *__t2170t=__t653t__dat__length;
  *__t2171t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2172t, uint64_t* __t2173t, uint64_t* __t2174t, char* __t2175t) {
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
  *__t2172t=__t686t__unsafe_ptr;
  *__t2173t=__t686t__dat__pos;
  *__t2174t=__t686t__dat__length;
  *__t2175t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t2176t, uint64_t* __t2177t, uint64_t* __t2178t, char* __t2179t) {
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
  *__t2176t=__t712t__unsafe_ptr;
  *__t2177t=__t712t__dat__pos;
  *__t2178t=__t712t__dat__length;
  *__t2179t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2180t) {
  goto __t_return;
  __t_return:
  *__t2180t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2181t) {
  goto __t_return;
  __t_return:
  *__t2181t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2182t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2182t=z;
}

int copy__t814t(char** __t2183t, uint64_t* __t2184t, uint16_t* __t2185t, uint16_t* __t2186t, uint64_t* __t2187t, const char* _other, char** __t2188t, uint64_t* __t2189t, uint64_t* __t2190t, char* __t2191t) {
  char* CHARS__buf__unsafe_ptr=*__t2183t;
  uint64_t CHARS__buf__unsafe_size=*__t2184t;
  uint16_t CHARS__buf__unsafe_offset=*__t2185t;
  uint16_t CHARS__buf__unsafe_align=*__t2186t;
  uint64_t CHARS__pos=*__t2187t;
  char* __t815t__unsafe_ptr=0;
  uint64_t __t815t__dat__pos=0;
  uint64_t __t815t__dat__length=0;
  char __t815t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  uint64_t next_pos=0;
  uint64_t __t818t__=0;
  char __t819t__=0;
  uint64_t __t820t=0;
  uint64_t __t821t__=0;
  uint64_t prev_pos=0;
  char* __t822t__unsafe_ptr=0;
  uint64_t __t822t__dat__pos=0;
  uint64_t __t822t__dat__length=0;
  char __t822t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(_other,&__t815t__unsafe_ptr,&__t815t__dat__pos,&__t815t__dat__length,&__t815t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t815t__unsafe_ptr;
  other__dat__pos=__t815t__dat__pos;
  other__dat__length=__t815t__dat__length;
  other__dat__first=__t815t__dat__first;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t816t__);
  add__t175t(CHARS__pos,__t816t__,&__t817t__);
  next_pos=__t817t__;
  len__t605t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t818t__);
  gt__t276t(next_pos,__t818t__,&__t819t__);
  if(__t819t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t820t=0;
  add__t175t(CHARS__pos,__t820t,&__t821t__);
  prev_pos=__t821t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t646t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t822t__unsafe_ptr,&__t822t__dat__pos,&__t822t__dat__length,&__t822t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2183t=CHARS__buf__unsafe_ptr;
  *__t2184t=CHARS__buf__unsafe_size;
  *__t2185t=CHARS__buf__unsafe_offset;
  *__t2186t=CHARS__buf__unsafe_align;
  *__t2187t=CHARS__pos;
  *__t2188t=__t822t__unsafe_ptr;
  *__t2189t=__t822t__dat__pos;
  *__t2190t=__t822t__dat__length;
  *__t2191t=__t822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1949t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1950t(const char* path, char** __t2192t) {
  char* unsafe_ptr=0;
  char __t1952t__=0;
  char __t1953t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t443t(unsafe_ptr,&__t1952t__);
  not__t28t(__t1952t__,&__t1953t__);
  if(__t1953t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1949t(unsafe_ptr);
  __t_return:
  *__t2192t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1961t(char** __t2193t, const char** __t2194t) {
  char* f__unsafe_ptr=*__t2193t;
  char __t1962t__=0;
  char __t1963t__=0;
  char* de=0;
  char __t1964t__=0;
  char __t1965t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t443t(f__unsafe_ptr,&__t1962t__);
  not__t28t(__t1962t__,&__t1963t__);
  if(__t1963t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t443t(de,&__t1964t__);
  not__t28t(__t1964t__,&__t1965t__);
  if(__t1965t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2193t=f__unsafe_ptr;
  *__t2194t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1966t(char** __t2195t, char** __t2196t, uint64_t* __t2197t, uint64_t* __t2198t, char* __t2199t) {
  char* f__unsafe_ptr=*__t2195t;
  const char* __t1967t__=0;
  char* __t1968t__unsafe_ptr=0;
  uint64_t __t1968t__dat__pos=0;
  uint64_t __t1968t__dat__length=0;
  char __t1968t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1961t(&f__unsafe_ptr,&__t1967t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t704t(__t1967t__,&__t1968t__unsafe_ptr,&__t1968t__dat__pos,&__t1968t__dat__length,&__t1968t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2195t=f__unsafe_ptr;
  *__t2196t=__t1968t__unsafe_ptr;
  *__t2197t=__t1968t__dat__pos;
  *__t2198t=__t1968t__dat__length;
  *__t2199t=__t1968t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2030t(char** __t2200t, uint64_t __t_anon1, char** __t2201t, uint64_t* __t2202t, uint64_t* __t2203t, char* __t2204t) {
  char* data__unsafe_ptr=*__t2200t;
  char* __t2031t__unsafe_ptr=0;
  uint64_t __t2031t__dat__pos=0;
  uint64_t __t2031t__dat__length=0;
  char __t2031t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1966t(&data__unsafe_ptr,&__t2031t__unsafe_ptr,&__t2031t__dat__pos,&__t2031t__dat__length,&__t2031t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2200t=data__unsafe_ptr;
  *__t2201t=__t2031t__unsafe_ptr;
  *__t2202t=__t2031t__dat__pos;
  *__t2203t=__t2031t__dat__length;
  *__t2204t=__t2031t__dat__first;
  
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

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2209t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2209t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2210t) {
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
  *__t2210t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t886t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2211t) {
  uint64_t __t887t__=0;
  char* __t888t__=0;
  add__t175t(s__dat__pos,i,&__t887t__);
  add__t511t(s__unsafe_ptr,__t887t__,&__t888t__);
  goto __t_return;
  __t_return:
  *__t2211t=__t888t__;
}

int slice__t893t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2212t, uint64_t* __t2213t, uint64_t* __t2214t, char* __t2215t) {
  char* __t894t__unsafe_ptr=0;
  uint64_t __t894t__dat__pos=0;
  uint64_t __t894t__dat__length=0;
  char __t894t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t895t__=0;
  char* __t896t__unsafe_ptr=0;
  uint64_t __t896t__dat__pos=0;
  uint64_t __t896t__dat__length=0;
  char __t896t__dat__first=0;
  char __t897t__=0;
  char __t898t__=0;
  char __t899t=0;
  char __t900t__=0;
  uint64_t __t901t__=0;
  uint64_t new_length=0;
  uint64_t __t902t=0;
  char __t903t__=0;
  char new_first=0;
  char* __t904t__=0;
  char __t905t__value=0;
  uint64_t __t906t__=0;
  char* __t907t__unsafe_ptr=0;
  uint64_t __t907t__dat__pos=0;
  uint64_t __t907t__dat__length=0;
  char __t907t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t677t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t894t__unsafe_ptr,&__t894t__dat__pos,&__t894t__dat__length,&__t894t__dat__first);
  s__unsafe_ptr=__t894t__unsafe_ptr;
  s__dat__pos=__t894t__dat__pos;
  s__dat__length=__t894t__dat__length;
  s__dat__first=__t894t__dat__first;
  eq__t120t(from,to,&__t895t__);
  if(__t895t__){
  __t_errcode=str__t704t(__t370t,&__t896t__unsafe_ptr,&__t896t__dat__pos,&__t896t__dat__length,&__t896t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t276t(from,to,&__t897t__);
  if(!__t897t__){
  gt__t276t(to,s__dat__length,&__t898t__);
  __t899t=__t898t__;
  }
  else{
  __t899t=0;
  not__t28t(__t899t,&__t900t__);
  __t899t=__t900t__;
  }
  if(__t899t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t352t(to,from,&__t901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t901t__;
  __t902t=0;
  neq__t144t(from,__t902t,&__t903t__);
  if(__t903t__){
  get__t886t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t904t__);
  if(!__t904t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t905t__value,__t904t__,1);
  new_first=__t905t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t175t(s__dat__pos,from,&__t906t__);
  str__t642t(s__unsafe_ptr,__t906t__,new_length,new_first,&__t907t__unsafe_ptr,&__t907t__dat__pos,&__t907t__dat__length,&__t907t__dat__first);
  __t896t__unsafe_ptr=__t907t__unsafe_ptr;
  __t896t__dat__pos=__t907t__dat__pos;
  __t896t__dat__length=__t907t__dat__length;
  __t896t__dat__first=__t907t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2212t=__t896t__unsafe_ptr;
  *__t2213t=__t896t__dat__pos;
  *__t2214t=__t896t__dat__length;
  *__t2215t=__t896t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t717t(char x, char y, char* __t2216t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2216t=z;
}

static inline __attribute__((always_inline)) void eq__t774t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2217t) {
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
  *__t2217t=__t778t;
}

static inline __attribute__((always_inline)) int ends_with__t972t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2218t) {
  char* __t973t__unsafe_ptr=0;
  uint64_t __t973t__dat__pos=0;
  uint64_t __t973t__dat__length=0;
  char __t973t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t974t__unsafe_ptr=0;
  uint64_t __t974t__dat__pos=0;
  uint64_t __t974t__dat__length=0;
  char __t974t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t975t__=0;
  char __t976t=0;
  uint64_t __t977t__=0;
  uint64_t n=0;
  uint64_t __t978t__=0;
  uint64_t __t979t__=0;
  char* __t980t__unsafe_ptr=0;
  uint64_t __t980t__dat__pos=0;
  uint64_t __t980t__dat__length=0;
  char __t980t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t981t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t677t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t973t__unsafe_ptr,&__t973t__dat__pos,&__t973t__dat__length,&__t973t__dat__first);
  stack__unsafe_ptr=__t973t__unsafe_ptr;
  stack__dat__pos=__t973t__dat__pos;
  stack__dat__length=__t973t__dat__length;
  stack__dat__first=__t973t__dat__first;
  __t_errcode=str__t704t(_needle,&__t974t__unsafe_ptr,&__t974t__dat__pos,&__t974t__dat__length,&__t974t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t974t__unsafe_ptr;
  needle__dat__pos=__t974t__dat__pos;
  needle__dat__length=__t974t__dat__length;
  needle__dat__first=__t974t__dat__first;
  lt__t252t(stack__dat__length,needle__dat__length,&__t975t__);
  if(__t975t__){
  __t976t=0;
  goto __t_return;
  }
  len__t713t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t977t__);
  n=__t977t__;
  len__t713t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t978t__);
  __t_errcode=sub__t352t(n,__t978t__,&__t979t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t893t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t979t__,n,&__t980t__unsafe_ptr,&__t980t__dat__pos,&__t980t__dat__length,&__t980t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t980t__unsafe_ptr;
  ret__dat__pos=__t980t__dat__pos;
  ret__dat__length=__t980t__dat__length;
  ret__dat__first=__t980t__dat__first;
  eq__t774t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t981t__);
  __t976t=__t981t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2218t=__t976t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t823t(char** __t2219t, uint64_t* __t2220t, uint16_t* __t2221t, uint16_t* __t2222t, uint64_t* __t2223t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2224t, uint64_t* __t2225t, uint64_t* __t2226t, char* __t2227t) {
  char* CHARS__buf__unsafe_ptr=*__t2219t;
  uint64_t CHARS__buf__unsafe_size=*__t2220t;
  uint16_t CHARS__buf__unsafe_offset=*__t2221t;
  uint16_t CHARS__buf__unsafe_align=*__t2222t;
  uint64_t CHARS__pos=*__t2223t;
  char* __t824t__unsafe_ptr=0;
  uint64_t __t824t__dat__pos=0;
  uint64_t __t824t__dat__length=0;
  char __t824t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t null_pos=0;
  uint64_t __t827t=0;
  uint64_t __t828t__=0;
  uint64_t next_pos=0;
  uint64_t __t829t__=0;
  char __t830t__=0;
  char* endpos=0;
  uint64_t __t831t=0;
  uint64_t __t832t__=0;
  uint64_t prev_pos=0;
  char* __t833t__unsafe_ptr=0;
  uint64_t __t833t__dat__pos=0;
  uint64_t __t833t__dat__length=0;
  char __t833t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t677t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t824t__unsafe_ptr,&__t824t__dat__pos,&__t824t__dat__length,&__t824t__dat__first);
  other__unsafe_ptr=__t824t__unsafe_ptr;
  other__dat__pos=__t824t__dat__pos;
  other__dat__length=__t824t__dat__length;
  other__dat__first=__t824t__dat__first;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t825t__);
  add__t175t(CHARS__pos,__t825t__,&__t826t__);
  null_pos=__t826t__;
  __t827t=1;
  add__t175t(null_pos,__t827t,&__t828t__);
  next_pos=__t828t__;
  len__t605t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t829t__);
  gt__t276t(next_pos,__t829t__,&__t830t__);
  if(__t830t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t831t=0;
  add__t175t(CHARS__pos,__t831t,&__t832t__);
  prev_pos=__t832t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t646t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t833t__unsafe_ptr,&__t833t__dat__pos,&__t833t__dat__length,&__t833t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2219t=CHARS__buf__unsafe_ptr;
  *__t2220t=CHARS__buf__unsafe_size;
  *__t2221t=CHARS__buf__unsafe_offset;
  *__t2222t=CHARS__buf__unsafe_align;
  *__t2223t=CHARS__pos;
  *__t2224t=__t833t__unsafe_ptr;
  *__t2225t=__t833t__dat__pos;
  *__t2226t=__t833t__dat__length;
  *__t2227t=__t833t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t771t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2228t) {
  uint64_t __t772t__=0;
  add__t175t(s__dat__pos,s__dat__length,&__t772t__);
  goto __t_return;
  __t_return:
  *__t2228t=__t772t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2229t) {
  int value=0;
  *__t2229t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t2230t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t2230t=__t40t__;
}

static inline __attribute__((always_inline)) int str__t654t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2231t, uint64_t* __t2232t, uint64_t* __t2233t, char* __t2234t) {
  int __t655t=0;
  int __t656t=0;
  int __t657t__=0;
  uint64_t __t658t__=0;
  char __t659t__=0;
  uint64_t __t660t=0;
  uint64_t __t661t=0;
  char* __t662t__=0;
  char __t663t__value=0;
  char* __t664t__unsafe_ptr=0;
  uint64_t __t664t__dat__pos=0;
  uint64_t __t664t__dat__length=0;
  char __t664t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t39t(__t656t,&__t657t__);
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t658t__);
  gt__t276t(length,__t658t__,&__t659t__);
  if(__t659t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t660t=0;
  __t661t=0;
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t661t,&__t662t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t662t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t663t__value,__t662t__,1);
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t660t,length,__t663t__value,&__t664t__unsafe_ptr,&__t664t__dat__pos,&__t664t__dat__length,&__t664t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2231t=__t664t__unsafe_ptr;
  *__t2232t=__t664t__dat__pos;
  *__t2233t=__t664t__dat__length;
  *__t2234t=__t664t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void new__t631t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t736t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2235t, uint64_t* __t2236t, uint64_t* __t2237t, char* __t2238t) {
  char* __t737t__unsafe_ptr=0;
  uint64_t __t737t__unsafe_size=0;
  uint16_t __t737t__unsafe_offset=0;
  uint16_t __t737t__unsafe_align=0;
  char* __t738t__unsafe_ptr=0;
  uint64_t __t738t__unsafe_size=0;
  uint16_t __t738t__unsafe_offset=0;
  uint16_t __t738t__unsafe_align=0;
  uint64_t __t739t=0;
  uint64_t __t740t__=0;
  uint64_t __t741t__=0;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__unsafe_size=0;
  uint16_t __t742t__unsafe_offset=0;
  uint16_t __t742t__unsafe_align=0;
  char __t743t____t518t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t744t=0;
  char* __t745t__unsafe_ptr=0;
  uint64_t __t745t__dat__pos=0;
  uint64_t __t745t__dat__length=0;
  char __t745t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t737t__unsafe_ptr,&__t737t__unsafe_size,&__t737t__unsafe_offset,&__t737t__unsafe_align);
  __t738t__unsafe_ptr=__t737t__unsafe_ptr;
  __t738t__unsafe_size=__t737t__unsafe_size;
  __t738t__unsafe_offset=__t737t__unsafe_offset;
  __t738t__unsafe_align=__t737t__unsafe_align;
  __t739t=1;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t740t__);
  add__t175t(__t739t,__t740t__,&__t741t__);
  __t_errcode=alloc__t516t(&__t738t__unsafe_ptr,&__t738t__unsafe_size,&__t738t__unsafe_offset,&__t738t__unsafe_align,__t741t__,&__t742t__unsafe_ptr,&__t742t__unsafe_size,&__t742t__unsafe_offset,&__t742t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t742t__unsafe_ptr;
  buf__unsafe_size=__t742t__unsafe_size;
  buf__unsafe_offset=__t742t__unsafe_offset;
  buf__unsafe_align=__t742t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t744t=0;
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t744t,other__dat__length,other__dat__first,&__t745t__unsafe_ptr,&__t745t__dat__pos,&__t745t__dat__length,&__t745t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t443t(__t745t__unsafe_ptr,&__t743t____t518t__);
  if(__t743t____t518t__){
  free__t509t(&__t745t__unsafe_ptr);
  }
  __t_return:
  *__t2235t=__t745t__unsafe_ptr;
  *__t2236t=__t745t__dat__pos;
  *__t2237t=__t745t__dat__length;
  *__t2238t=__t745t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t746t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2239t, char** __t2240t, uint64_t* __t2241t, uint64_t* __t2242t, char* __t2243t) {
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__dat__pos=0;
  uint64_t __t748t__dat__length=0;
  char __t748t__dat__first=0;
  char __t749t____t743t____t518t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t750t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t631t();
  __t_errcode=copy_null_terminated__t736t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t748t__unsafe_ptr,&__t748t__dat__pos,&__t748t__dat__length,&__t748t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t748t__unsafe_ptr;
  str__dat__pos=__t748t__dat__pos;
  str__dat__length=__t748t__dat__length;
  str__dat__first=__t748t__dat__first;
  add__t511t(str__unsafe_ptr,str__dat__pos,&__t750t__);
  _ret=__t750t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t443t(str__unsafe_ptr,&__t749t____t743t____t518t__);
  if(__t749t____t743t____t518t__){
  free__t509t(&str__unsafe_ptr);
  }
  __t_return:
  *__t2239t=cstr;
  *__t2240t=str__unsafe_ptr;
  *__t2241t=str__dat__pos;
  *__t2242t=str__dat__length;
  *__t2243t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t754t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2244t) {
  goto __t_return;
  __t_return:
  *__t2244t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1515t(const char* cmd, char** __t2245t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2245t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1514t(char* unsafe_ptr, int64_t* __t2246t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2246t=status;
}

static inline __attribute__((always_inline)) void int__t423t(uint64_t x, int64_t* __t2247t) {
  int __t424t=0;
  int __t425t=0;
  int __t426t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2247t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2248t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2248t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2249t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2249t=z;
}

static inline __attribute__((always_inline)) int read__t1516t(const char* cmd, char** __t2250t) {
  char* __t1517t__=0;
  char* unsafe_ptr=0;
  char __t1518t__=0;
  char __t1519t__=0;
  char __t1520t__=0;
  int64_t __t1521t__=0;
  int64_t status=0;
  uint64_t __t1522t=0;
  int64_t __t1523t__=0;
  char __t1524t__=0;
  char __t1525t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1515t(cmd,&__t1517t__);
  unsafe_ptr=__t1517t__;
  exists__t443t(unsafe_ptr,&__t1518t__);
  not__t28t(__t1518t__,&__t1519t__);
  if(__t1519t__){
  __t_errcode=35;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t443t(unsafe_ptr,&__t1520t__);
  if(__t1520t__){
  pclose__t1514t(unsafe_ptr,&__t1521t__);
  status=__t1521t__;
  unsafe_ptr=0;
  __t1522t=0;
  int__t423t(__t1522t,&__t1523t__);
  neq__t133t(status,__t1523t__,&__t1524t__);
  if(__t1524t__){
  __t_complain=36;
  __t1525t=__t1525t==0;
  }
  }
  __t_return:
  *__t2250t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1527t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2251t) {
  const char* __t1528t__cstr=0;
  char* __t1528t__str__unsafe_ptr=0;
  uint64_t __t1528t__str__dat__pos=0;
  uint64_t __t1528t__str__dat__length=0;
  char __t1528t__str__dat__first=0;
  char __t1529t____t749t____t743t____t518t__=0;
  const char* __t1530t__=0;
  char* __t1531t__unsafe_ptr=0;
  char __t1532t____t1520t__=0;
  int64_t __t1532t____t1521t__=0;
  int64_t __t1532t__status=0;
  uint64_t __t1532t____t1522t=0;
  int64_t __t1532t____t1523t__=0;
  char __t1532t____t1524t__=0;
  char __t1532t____t1525t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t746t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1528t__cstr,&__t1528t__str__unsafe_ptr,&__t1528t__str__dat__pos,&__t1528t__str__dat__length,&__t1528t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t754t(__t1528t__cstr,__t1528t__str__unsafe_ptr,__t1528t__str__dat__pos,__t1528t__str__dat__length,__t1528t__str__dat__first,&__t1530t__);
  __t_errcode=read__t1516t(__t1530t__,&__t1531t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t443t(__t1531t__unsafe_ptr,&__t1532t____t1520t__);
  if(__t1532t____t1520t__){
  pclose__t1514t(__t1531t__unsafe_ptr,&__t1532t____t1521t__);
  __t1532t__status=__t1532t____t1521t__;
  __t1531t__unsafe_ptr=0;
  __t1532t____t1522t=0;
  int__t423t(__t1532t____t1522t,&__t1532t____t1523t__);
  neq__t133t(__t1532t__status,__t1532t____t1523t__,&__t1532t____t1524t__);
  if(__t1532t____t1524t__){
  __t_complain=36;
  __t1532t____t1525t=__t1532t____t1525t==0;
  }
  }
  __t_return:
  *__t2251t=__t1531t__unsafe_ptr;
  exists__t443t(__t1528t__str__unsafe_ptr,&__t1529t____t749t____t743t____t518t__);
  if(__t1529t____t749t____t743t____t518t__){
  free__t509t(&__t1528t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1508t(int64_t value, const char** __t2252t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2252t=ret;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t2088t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t2089t__unsafe_ptr=0;
  char __t2090t____t1532t____t1520t__=0;
  int64_t __t2090t____t1532t____t1521t__=0;
  int64_t __t2090t____t1532t__status=0;
  uint64_t __t2090t____t1532t____t1522t=0;
  int64_t __t2090t____t1532t____t1523t__=0;
  char __t2090t____t1532t____t1524t__=0;
  char __t2090t____t1532t____t1525t=0;
  char* __t2091t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t2092t=0;
  int64_t __t2093t=0;
  int64_t error=0;
  const char* __t2094t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1527t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t2089t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2091t__unsafe_ptr=__t2089t__unsafe_ptr;
  proc__unsafe_ptr=__t2091t__unsafe_ptr;
  exists__t443t(__t2089t__unsafe_ptr,&__t2090t____t1532t____t1520t__);
  if(__t2090t____t1532t____t1520t__){
  pclose__t1514t(__t2089t__unsafe_ptr,&__t2090t____t1532t____t1521t__);
  __t2090t____t1532t__status=__t2090t____t1532t____t1521t__;
  __t2089t__unsafe_ptr=0;
  __t2090t____t1532t____t1522t=0;
  int__t423t(__t2090t____t1532t____t1522t,&__t2090t____t1532t____t1523t__);
  neq__t133t(__t2090t____t1532t__status,__t2090t____t1532t____t1523t__,&__t2090t____t1532t____t1524t__);
  if(__t2090t____t1532t____t1524t__){
  __t_complain=36;
  __t2090t____t1532t____t1525t=__t2090t____t1532t____t1525t==0;
  }
  }
  __t2093t=__t_complain;
  __t2092t=(__t_complain==0);
  __t_complain=0;
  error=__t2093t;
  __t2092t=__t2092t==0;
  if(__t2092t){
  cstr__t1508t(error,&__t2094t__);
  print__t376t(__t2094t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2096t() {
  char* __t2098t__unsafe_ptr=0;
  uint64_t __t2098t__unsafe_size=0;
  uint16_t __t2098t__unsafe_offset=0;
  uint16_t __t2098t__unsafe_align=0;
  uint64_t __t2099t=0;
  char* __t2100t__unsafe_ptr=0;
  uint64_t __t2100t__unsafe_size=0;
  uint16_t __t2100t__unsafe_offset=0;
  uint16_t __t2100t__unsafe_align=0;
  char __t2101t____t518t__=0;
  char* __t2102t__buf__unsafe_ptr=0;
  uint64_t __t2102t__buf__unsafe_size=0;
  uint16_t __t2102t__buf__unsafe_offset=0;
  uint16_t __t2102t__buf__unsafe_align=0;
  uint64_t __t2102t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  const char* path=0;
  char* __t2105t__unsafe_ptr=0;
  uint64_t __t2105t__dat__pos=0;
  uint64_t __t2105t__dat__length=0;
  char __t2105t__dat__first=0;
  char* __t2106t__unsafe_ptr=0;
  uint64_t __t2106t__dat__pos=0;
  uint64_t __t2106t__dat__length=0;
  char __t2106t__dat__first=0;
  char* __t2107t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t2109t=0;
  char __t2110t=0;
  char* __t2111t__unsafe_ptr=0;
  uint64_t __t2111t__dat__pos=0;
  uint64_t __t2111t__dat__length=0;
  char __t2111t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t2113t__=0;
  char __t2114t__=0;
  char* __t2115t__buf__unsafe_ptr=0;
  uint64_t __t2115t__buf__unsafe_size=0;
  uint16_t __t2115t__buf__unsafe_offset=0;
  uint16_t __t2115t__buf__unsafe_align=0;
  uint64_t __t2115t__pos=0;
  char* __t2116t__unsafe_ptr=0;
  uint64_t __t2116t__dat__pos=0;
  uint64_t __t2116t__dat__length=0;
  char __t2116t__dat__first=0;
  char* __t2117t__unsafe_ptr=0;
  uint64_t __t2117t__dat__pos=0;
  uint64_t __t2117t__dat__length=0;
  char __t2117t__dat__first=0;
  uint64_t __t2118t__=0;
  char* __t2119t__unsafe_ptr=0;
  uint64_t __t2119t__dat__pos=0;
  uint64_t __t2119t__dat__length=0;
  char __t2119t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t1533t(&__t2098t__unsafe_ptr,&__t2098t__unsafe_size,&__t2098t__unsafe_offset,&__t2098t__unsafe_align);
  __t2099t=256;
  __t_errcode=alloc__t516t(&__t2098t__unsafe_ptr,&__t2098t__unsafe_size,&__t2098t__unsafe_offset,&__t2098t__unsafe_align,__t2099t,&__t2100t__unsafe_ptr,&__t2100t__unsafe_size,&__t2100t__unsafe_offset,&__t2100t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t633t(&__t2100t__unsafe_ptr,&__t2100t__unsafe_size,&__t2100t__unsafe_offset,&__t2100t__unsafe_align,&__t2102t__buf__unsafe_ptr,&__t2102t__buf__unsafe_size,&__t2102t__buf__unsafe_offset,&__t2102t__buf__unsafe_align,&__t2102t__pos);
  CHARS__buf__unsafe_ptr=__t2102t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2102t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2102t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2102t__buf__unsafe_align;
  CHARS__pos=__t2102t__pos;
  path=__t2103t;
  __t_errcode=copy__t814t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2104t,&__t2105t__unsafe_ptr,&__t2105t__dat__pos,&__t2105t__dat__length,&__t2105t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t814t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t2106t__unsafe_ptr,&__t2106t__dat__pos,&__t2106t__dat__length,&__t2106t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1950t(path,&__t2107t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t2107t__unsafe_ptr;
  __t2109t=0;
  while(1){
  __t_complain=get__t2030t(&test_dir__unsafe_ptr,__t2109t,&__t2111t__unsafe_ptr,&__t2111t__dat__pos,&__t2111t__dat__length,&__t2111t__dat__first);
  __t2110t=__t_complain;
  entry__unsafe_ptr=__t2111t__unsafe_ptr;
  entry__dat__pos=__t2111t__dat__pos;
  entry__dat__length=__t2111t__dat__length;
  entry__dat__first=__t2111t__dat__first;
  __t2110t=__t2110t==0;
  __t2109t=__t2109t+1;
  if(!__t2110t){
  break;
  }
  __t_errcode=ends_with__t972t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t2112t,&__t2113t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t2113t__,&__t2114t__);
  if(__t2114t__){
  continue;
  }
  __t2115t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t2115t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t2115t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t2115t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t2115t__pos=CHARS__pos;
  str__t677t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t2116t__unsafe_ptr,&__t2116t__dat__pos,&__t2116t__dat__length,&__t2116t__dat__first);
  __t_errcode=copy_null_terminated__t823t(&__t2115t__buf__unsafe_ptr,&__t2115t__buf__unsafe_size,&__t2115t__buf__unsafe_offset,&__t2115t__buf__unsafe_align,&__t2115t__pos,__t2116t__unsafe_ptr,__t2116t__dat__pos,__t2116t__dat__length,__t2116t__dat__first,&__t2117t__unsafe_ptr,&__t2117t__dat__pos,&__t2117t__dat__length,&__t2117t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t771t(__t2117t__unsafe_ptr,__t2117t__dat__pos,__t2117t__dat__length,__t2117t__dat__first,&__t2118t__);
  __t_errcode=str__t654t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2118t__,&__t2119t__unsafe_ptr,&__t2119t__dat__pos,&__t2119t__dat__length,&__t2119t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t2119t__unsafe_ptr;
  command__dat__pos=__t2119t__dat__pos;
  command__dat__length=__t2119t__dat__length;
  command__dat__first=__t2119t__dat__first;
  print__t847t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t2088t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:closedir__t1949t(__t2107t__unsafe_ptr);
  exists__t443t(__t2100t__unsafe_ptr,&__t2101t____t518t__);
  if(__t2101t____t518t__){
  free__t509t(&__t2100t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2096t();return 0;}