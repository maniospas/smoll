#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2082t="README.md";
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t2099t, uint64_t* __t2100t, uint16_t* __t2101t, uint16_t* __t2102t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2099t=unsafe_ptr;
  *__t2100t=unsafe_size;
  *__t2101t=unsafe_offset;
  *__t2102t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2103t) {
  *__t2103t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2104t) {
  int value=0;
  *__t2104t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2105t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2105t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2106t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2106t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2107t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2107t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2108t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2108t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2109t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2109t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2110t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2110t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2111t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2111t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2112t) {
  *__t2112t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2113t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2113t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2114t) {
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
  *__t2114t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2115t, uint64_t* __t2116t, uint64_t* __t2117t, char* __t2118t) {
  goto __t_return;
  __t_return:
  *__t2115t=unsafe_ptr;
  *__t2116t=dat__pos;
  *__t2117t=dat__length;
  *__t2118t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2119t, uint64_t* __t2120t, uint64_t* __t2121t, char* __t2122t) {
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
  *__t2119t=__t653t__unsafe_ptr;
  *__t2120t=__t653t__dat__pos;
  *__t2121t=__t653t__dat__length;
  *__t2122t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2123t, uint64_t* __t2124t, uint64_t* __t2125t, char* __t2126t) {
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
  *__t2123t=__t686t__unsafe_ptr;
  *__t2124t=__t686t__dat__pos;
  *__t2125t=__t686t__dat__length;
  *__t2126t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t2127t, uint64_t* __t2128t, uint64_t* __t2129t, char* __t2130t) {
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
  *__t2127t=__t712t__unsafe_ptr;
  *__t2128t=__t712t__dat__pos;
  *__t2129t=__t712t__dat__length;
  *__t2130t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t631t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2131t) {
  goto __t_return;
  __t_return:
  *__t2131t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2132t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2132t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2133t) {
  char* allocated=*__t2133t;
  if(allocated){
  free(allocated);
  }
  *__t2133t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2134t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
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

static inline __attribute__((always_inline)) int copy_null_terminated__t736t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2145t, uint64_t* __t2146t, uint64_t* __t2147t, char* __t2148t) {
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
  *__t2145t=__t745t__unsafe_ptr;
  *__t2146t=__t745t__dat__pos;
  *__t2147t=__t745t__dat__length;
  *__t2148t=__t745t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t746t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2149t, char** __t2150t, uint64_t* __t2151t, uint64_t* __t2152t, char* __t2153t) {
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
  *__t2149t=cstr;
  *__t2150t=str__unsafe_ptr;
  *__t2151t=str__dat__pos;
  *__t2152t=str__dat__length;
  *__t2153t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t754t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2154t) {
  goto __t_return;
  __t_return:
  *__t2154t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1594t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2155t) {
  const char* __t1595t__cstr=0;
  char* __t1595t__str__unsafe_ptr=0;
  uint64_t __t1595t__str__dat__pos=0;
  uint64_t __t1595t__str__dat__length=0;
  char __t1595t__str__dat__first=0;
  char __t1596t____t749t____t743t____t518t__=0;
  const char* __t1597t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1598t__=0;
  char __t1599t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t746t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1595t__cstr,&__t1595t__str__unsafe_ptr,&__t1595t__str__dat__pos,&__t1595t__str__dat__length,&__t1595t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t754t(__t1595t__cstr,__t1595t__str__unsafe_ptr,__t1595t__str__dat__pos,__t1595t__str__dat__length,__t1595t__str__dat__first,&__t1597t__);
  path=__t1597t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t443t(unsafe_ptr,&__t1598t__);
  not__t28t(__t1598t__,&__t1599t__);
  if(__t1599t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t2155t=unsafe_ptr;
  exists__t443t(__t1595t__str__unsafe_ptr,&__t1596t____t749t____t743t____t518t__);
  if(__t1596t____t749t____t743t____t518t__){
  free__t509t(&__t1595t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t487t(uint64_t x, uint64_t* __t2156t) {
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  __t488t=1024;
  mul__t199t(x,__t488t,&__t489t__);
  goto __t_return;
  __t_return:
  *__t2156t=__t489t__;
}

static inline __attribute__((always_inline)) int alloc__t557t(uint64_t size, char** __t2157t, uint64_t* __t2158t, uint16_t* __t2159t, uint16_t* __t2160t) {
  char* __t560t__unsafe_ptr=0;
  uint64_t __t560t__unsafe_size=0;
  uint16_t __t560t__unsafe_offset=0;
  uint16_t __t560t__unsafe_align=0;
  char* __t561t__unsafe_ptr=0;
  uint64_t __t561t__unsafe_size=0;
  uint16_t __t561t__unsafe_offset=0;
  uint16_t __t561t__unsafe_align=0;
  char* __t562t__unsafe_ptr=0;
  uint64_t __t562t__unsafe_size=0;
  uint16_t __t562t__unsafe_offset=0;
  uint16_t __t562t__unsafe_align=0;
  char __t563t____t518t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t560t__unsafe_ptr,&__t560t__unsafe_size,&__t560t__unsafe_offset,&__t560t__unsafe_align);
  __t561t__unsafe_ptr=__t560t__unsafe_ptr;
  __t561t__unsafe_size=__t560t__unsafe_size;
  __t561t__unsafe_offset=__t560t__unsafe_offset;
  __t561t__unsafe_align=__t560t__unsafe_align;
  __t_errcode=alloc__t516t(&__t561t__unsafe_ptr,&__t561t__unsafe_size,&__t561t__unsafe_offset,&__t561t__unsafe_align,size,&__t562t__unsafe_ptr,&__t562t__unsafe_size,&__t562t__unsafe_offset,&__t562t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t443t(__t562t__unsafe_ptr,&__t563t____t518t__);
  if(__t563t____t518t__){
  free__t509t(&__t562t__unsafe_ptr);
  }
  __t_return:
  *__t2157t=__t562t__unsafe_ptr;
  *__t2158t=__t562t__unsafe_size;
  *__t2159t=__t562t__unsafe_offset;
  *__t2160t=__t562t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2161t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2161t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2162t) {
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
  *__t2162t=z;
  
  return __t_errcode;
}

int line__t1775t(char** __t2163t, uint64_t* __t2164t, uint16_t* __t2165t, uint16_t* __t2166t, uint64_t* __t2167t, char** __t2168t, char** __t2169t, uint64_t* __t2170t, uint64_t* __t2171t, char* __t2172t) {
  char* buf__unsafe_ptr=*__t2163t;
  uint64_t buf__unsafe_size=*__t2164t;
  uint16_t buf__unsafe_offset=*__t2165t;
  uint16_t buf__unsafe_align=*__t2166t;
  uint64_t pos=*__t2167t;
  char* f__unsafe_ptr=*__t2168t;
  int __t1776t=0;
  char __t1777t__=0;
  char __t1778t__=0;
  char* __t1779t__=0;
  char* contents=0;
  uint64_t __t1780t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1781t__=0;
  char __t1782t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1783t__=0;
  char* __t1785t__unsafe_ptr=0;
  uint64_t __t1785t__dat__pos=0;
  uint64_t __t1785t__dat__length=0;
  char __t1785t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t443t(buf__unsafe_ptr,&__t1777t__);
  not__t28t(__t1777t__,&__t1778t__);
  if(__t1778t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t511t(buf__unsafe_ptr,pos,&__t1779t__);
  contents=__t1779t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t1780t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1780t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t443t(obtained,&__t1781t__);
  not__t28t(__t1781t__,&__t1782t__);
  if(__t1782t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t1783t__);
  pos=__t1783t__;
  __t_errcode=str__t681t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1785t__unsafe_ptr,&__t1785t__dat__pos,&__t1785t__dat__length,&__t1785t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2163t=buf__unsafe_ptr;
  *__t2164t=buf__unsafe_size;
  *__t2165t=buf__unsafe_offset;
  *__t2166t=buf__unsafe_align;
  *__t2167t=pos;
  *__t2168t=f__unsafe_ptr;
  *__t2169t=__t1785t__unsafe_ptr;
  *__t2170t=__t1785t__dat__pos;
  *__t2171t=__t1785t__dat__length;
  *__t2172t=__t1785t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2032t(char** __t2173t, uint64_t* __t2174t, uint16_t* __t2175t, uint16_t* __t2176t, uint64_t* __t2177t, char** __t2178t, uint64_t __t_anon3, char** __t2179t, uint64_t* __t2180t, uint64_t* __t2181t, char* __t2182t) {
  char* buf__unsafe_ptr=*__t2173t;
  uint64_t buf__unsafe_size=*__t2174t;
  uint16_t buf__unsafe_offset=*__t2175t;
  uint16_t buf__unsafe_align=*__t2176t;
  uint64_t pos=*__t2177t;
  char* f__unsafe_ptr=*__t2178t;
  int __t2033t=0;
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__dat__pos=0;
  uint64_t __t2034t__dat__length=0;
  char __t2034t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1775t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2034t__unsafe_ptr,&__t2034t__dat__pos,&__t2034t__dat__length,&__t2034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2173t=buf__unsafe_ptr;
  *__t2174t=buf__unsafe_size;
  *__t2175t=buf__unsafe_offset;
  *__t2176t=buf__unsafe_align;
  *__t2177t=pos;
  *__t2178t=f__unsafe_ptr;
  *__t2179t=__t2034t__unsafe_ptr;
  *__t2180t=__t2034t__dat__pos;
  *__t2181t=__t2034t__dat__length;
  *__t2182t=__t2034t__dat__first;
  
  return __t_errcode;
}

int str__t690t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2183t, uint64_t* __t2184t, uint64_t* __t2185t, char* __t2186t) {
  uint64_t __t691t__=0;
  uint64_t length=0;
  uint64_t __t692t=0;
  char __t693t__=0;
  char* __t694t__=0;
  char __t695t__value=0;
  char first=0;
  char* __t696t__unsafe_ptr=0;
  uint64_t __t696t__dat__pos=0;
  uint64_t __t696t__dat__length=0;
  char __t696t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t691t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t691t__;
  __t692t=0;
  neq__t144t(length,__t692t,&__t693t__);
  if(__t693t__){
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t694t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t694t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t695t__value,__t694t__,1);
  first=__t695t__value;
  }
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t696t__unsafe_ptr,&__t696t__dat__pos,&__t696t__dat__length,&__t696t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2183t=__t696t__unsafe_ptr;
  *__t2184t=__t696t__dat__pos;
  *__t2185t=__t696t__dat__length;
  *__t2186t=__t696t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2080t() {
  char* __t2083t__unsafe_ptr=0;
  uint64_t __t2083t__dat__pos=0;
  uint64_t __t2083t__dat__length=0;
  char __t2083t__dat__first=0;
  char* __t2084t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2086t=0;
  uint64_t __t2087t__=0;
  char* __t2088t__unsafe_ptr=0;
  uint64_t __t2088t__unsafe_size=0;
  uint16_t __t2088t__unsafe_offset=0;
  uint16_t __t2088t__unsafe_align=0;
  char __t2089t____t563t____t518t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2090t=0;
  uint64_t __t2091t=0;
  uint64_t pos=0;
  uint64_t __t2092t=0;
  char __t2093t=0;
  char* __t2094t__unsafe_ptr=0;
  uint64_t __t2094t__dat__pos=0;
  uint64_t __t2094t__dat__length=0;
  char __t2094t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2095t=0;
  char* __t2097t__unsafe_ptr=0;
  uint64_t __t2097t__dat__pos=0;
  uint64_t __t2097t__dat__length=0;
  char __t2097t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t704t(__t2082t,&__t2083t__unsafe_ptr,&__t2083t__dat__pos,&__t2083t__dat__length,&__t2083t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1594t(__t2083t__unsafe_ptr,__t2083t__dat__pos,__t2083t__dat__length,__t2083t__dat__first,&__t2084t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2084t__unsafe_ptr;
  __t2086t=4;
  KB__t487t(__t2086t,&__t2087t__);
  __t_errcode=alloc__t557t(__t2087t__,&__t2088t__unsafe_ptr,&__t2088t__unsafe_size,&__t2088t__unsafe_offset,&__t2088t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2088t__unsafe_ptr;
  mem__unsafe_size=__t2088t__unsafe_size;
  mem__unsafe_offset=__t2088t__unsafe_offset;
  mem__unsafe_align=__t2088t__unsafe_align;
  __t2090t=0;
  __t2091t=__t2090t;
  pos=__t2091t;
  __t2092t=0;
  while(1){
  __t_complain=get__t2032t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2092t,&__t2094t__unsafe_ptr,&__t2094t__dat__pos,&__t2094t__dat__length,&__t2094t__dat__first);
  __t2093t=__t_complain;
  line__unsafe_ptr=__t2094t__unsafe_ptr;
  line__dat__pos=__t2094t__dat__pos;
  line__dat__length=__t2094t__dat__length;
  line__dat__first=__t2094t__dat__first;
  __t2093t=__t2093t==0;
  __t2092t=__t2092t+1;
  if(!__t2093t){
  break;
  }
  continue;
  }
  if(__t2084t__unsafe_ptr){
  fclose((FILE*)__t2084t__unsafe_ptr);
  __t2084t__unsafe_ptr=0;
  }
  __t2095t=0;
  __t_errcode=str__t690t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2095t,pos,&__t2097t__unsafe_ptr,&__t2097t__dat__pos,&__t2097t__dat__length,&__t2097t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t847t(__t2097t__unsafe_ptr,__t2097t__dat__pos,__t2097t__dat__length,__t2097t__dat__first);
  
  __t_failure:exists__t443t(__t2088t__unsafe_ptr,&__t2089t____t563t____t518t__);
  if(__t2089t____t563t____t518t__){
  free__t509t(&__t2088t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2080t();return 0;}