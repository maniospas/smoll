#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2088t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1533t(char** __t2092t, uint64_t* __t2093t, uint16_t* __t2094t, uint16_t* __t2095t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2092t=unsafe_ptr;
  *__t2093t=unsafe_size;
  *__t2094t=unsafe_offset;
  *__t2095t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t2096t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2096t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t2097t) {
  char* allocated=*__t2097t;
  if(allocated){
  free(allocated);
  }
  *__t2097t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2098t) {
  int value=0;
  *__t2098t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2099t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2099t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2100t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2100t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2101t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2101t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2102t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2102t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t2103t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2103t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2104t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2104t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2105t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2105t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t2106t) {
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
  *__t2106t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t2107t, uint64_t* __t2108t, uint16_t* __t2109t, uint16_t* __t2110t, uint64_t size, char** __t2111t, uint64_t* __t2112t, uint16_t* __t2113t, uint16_t* __t2114t) {
  char* buffer__unsafe_ptr=*__t2107t;
  uint64_t buffer__unsafe_size=*__t2108t;
  uint16_t buffer__unsafe_offset=*__t2109t;
  uint16_t buffer__unsafe_align=*__t2110t;
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
  *__t2107t=buffer__unsafe_ptr;
  *__t2108t=buffer__unsafe_size;
  *__t2109t=buffer__unsafe_offset;
  *__t2110t=buffer__unsafe_align;
  *__t2111t=buffer__unsafe_ptr;
  *__t2112t=buffer__unsafe_size;
  *__t2113t=buffer__unsafe_offset;
  *__t2114t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t2115t, uint64_t* __t2116t, uint16_t* __t2117t, uint16_t* __t2118t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2115t=unsafe_ptr;
  *__t2116t=unsafe_size;
  *__t2117t=unsafe_offset;
  *__t2118t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2119t) {
  *__t2119t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2120t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2120t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2121t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2121t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2122t) {
  *__t2122t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t2123t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t2123t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2124t) {
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
  *__t2124t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2125t, uint64_t* __t2126t, uint64_t* __t2127t, char* __t2128t) {
  goto __t_return;
  __t_return:
  *__t2125t=unsafe_ptr;
  *__t2126t=dat__pos;
  *__t2127t=dat__length;
  *__t2128t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2129t, uint64_t* __t2130t, uint64_t* __t2131t, char* __t2132t) {
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
  *__t2129t=__t653t__unsafe_ptr;
  *__t2130t=__t653t__dat__pos;
  *__t2131t=__t653t__dat__length;
  *__t2132t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2133t, uint64_t* __t2134t, uint64_t* __t2135t, char* __t2136t) {
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
  *__t2133t=__t686t__unsafe_ptr;
  *__t2134t=__t686t__dat__pos;
  *__t2135t=__t686t__dat__length;
  *__t2136t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t2137t, uint64_t* __t2138t, uint64_t* __t2139t, char* __t2140t) {
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
  *__t2137t=__t712t__unsafe_ptr;
  *__t2138t=__t712t__dat__pos;
  *__t2139t=__t712t__dat__length;
  *__t2140t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t677t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2141t, uint64_t* __t2142t, uint64_t* __t2143t, char* __t2144t) {
  goto __t_return;
  __t_return:
  *__t2141t=other__unsafe_ptr;
  *__t2142t=other__dat__pos;
  *__t2143t=other__dat__length;
  *__t2144t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2145t) {
  goto __t_return;
  __t_return:
  *__t2145t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2146t) {
  goto __t_return;
  __t_return:
  *__t2146t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2147t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2147t=z;
}

static inline __attribute__((always_inline)) int copy__t805t(char** __t2148t, uint64_t* __t2149t, uint16_t* __t2150t, uint16_t* __t2151t, uint64_t* __t2152t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2153t, uint64_t* __t2154t, uint64_t* __t2155t, char* __t2156t) {
  char* CHARS__buf__unsafe_ptr=*__t2148t;
  uint64_t CHARS__buf__unsafe_size=*__t2149t;
  uint16_t CHARS__buf__unsafe_offset=*__t2150t;
  uint16_t CHARS__buf__unsafe_align=*__t2151t;
  uint64_t CHARS__pos=*__t2152t;
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
  *__t2148t=CHARS__buf__unsafe_ptr;
  *__t2149t=CHARS__buf__unsafe_size;
  *__t2150t=CHARS__buf__unsafe_offset;
  *__t2151t=CHARS__buf__unsafe_align;
  *__t2152t=CHARS__pos;
  *__t2153t=__t813t__unsafe_ptr;
  *__t2154t=__t813t__dat__pos;
  *__t2155t=__t813t__dat__length;
  *__t2156t=__t813t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t631t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) int copy_null_terminated__t736t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2157t, uint64_t* __t2158t, uint64_t* __t2159t, char* __t2160t) {
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
  *__t2157t=__t745t__unsafe_ptr;
  *__t2158t=__t745t__dat__pos;
  *__t2159t=__t745t__dat__length;
  *__t2160t=__t745t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t746t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2161t, char** __t2162t, uint64_t* __t2163t, uint64_t* __t2164t, char* __t2165t) {
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
  *__t2161t=cstr;
  *__t2162t=str__unsafe_ptr;
  *__t2163t=str__dat__pos;
  *__t2164t=str__dat__length;
  *__t2165t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t754t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2166t) {
  goto __t_return;
  __t_return:
  *__t2166t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1576t(const char* cmd, const char** __t2167t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2167t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1575t(const char* cmd, int64_t* __t2168t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2168t=result;
}

static inline __attribute__((always_inline)) void int__t423t(uint64_t x, int64_t* __t2169t) {
  int __t424t=0;
  int __t425t=0;
  int __t426t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2169t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2170t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2170t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2171t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2171t=z;
}

int system__t1585t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1586t__cstr=0;
  char* __t1586t__str__unsafe_ptr=0;
  uint64_t __t1586t__str__dat__pos=0;
  uint64_t __t1586t__str__dat__length=0;
  char __t1586t__str__dat__first=0;
  char __t1587t____t749t____t743t____t518t__=0;
  const char* __t1588t__=0;
  const char* __t1589t__=0;
  int64_t __t1590t__=0;
  int64_t result=0;
  uint64_t __t1591t=0;
  int64_t __t1592t__=0;
  char __t1593t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t746t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1586t__cstr,&__t1586t__str__unsafe_ptr,&__t1586t__str__dat__pos,&__t1586t__str__dat__length,&__t1586t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t754t(__t1586t__cstr,__t1586t__str__unsafe_ptr,__t1586t__str__dat__pos,__t1586t__str__dat__length,__t1586t__str__dat__first,&__t1588t__);
  __t_errcode=safe__t1576t(__t1588t__,&__t1589t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1575t(__t1589t__,&__t1590t__);
  result=__t1590t__;
  __t1591t=0;
  int__t423t(__t1591t,&__t1592t__);
  neq__t133t(result,__t1592t__,&__t1593t__);
  if(__t1593t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:exists__t443t(__t1586t__str__unsafe_ptr,&__t1587t____t749t____t743t____t518t__);
  if(__t1587t____t749t____t743t____t518t__){
  free__t509t(&__t1586t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2080t() {
  char* __t2082t__unsafe_ptr=0;
  uint64_t __t2082t__unsafe_size=0;
  uint16_t __t2082t__unsafe_offset=0;
  uint16_t __t2082t__unsafe_align=0;
  uint64_t __t2083t=0;
  char* __t2084t__unsafe_ptr=0;
  uint64_t __t2084t__unsafe_size=0;
  uint16_t __t2084t__unsafe_offset=0;
  uint16_t __t2084t__unsafe_align=0;
  char __t2085t____t518t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t2086t=0;
  uint64_t __t2087t=0;
  char* __t2089t__unsafe_ptr=0;
  uint64_t __t2089t__dat__pos=0;
  uint64_t __t2089t__dat__length=0;
  char __t2089t__dat__first=0;
  char* __t2090t__unsafe_ptr=0;
  uint64_t __t2090t__dat__pos=0;
  uint64_t __t2090t__dat__length=0;
  char __t2090t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  char____t_buffer____buffer__t1533t(&__t2082t__unsafe_ptr,&__t2082t__unsafe_size,&__t2082t__unsafe_offset,&__t2082t__unsafe_align);
  __t2083t=2;
  __t_errcode=alloc__t516t(&__t2082t__unsafe_ptr,&__t2082t__unsafe_size,&__t2082t__unsafe_offset,&__t2082t__unsafe_align,__t2083t,&__t2084t__unsafe_ptr,&__t2084t__unsafe_size,&__t2084t__unsafe_offset,&__t2084t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2084t__unsafe_ptr;
  buf__unsafe_size=__t2084t__unsafe_size;
  buf__unsafe_offset=__t2084t__unsafe_offset;
  buf__unsafe_align=__t2084t__unsafe_align;
  __t2086t=0;
  __t2087t=__t2086t;
  __t_errcode=str__t704t(__t2088t,&__t2089t__unsafe_ptr,&__t2089t__dat__pos,&__t2089t__dat__length,&__t2089t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t805t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2087t,__t2089t__unsafe_ptr,__t2089t__dat__pos,__t2089t__dat__length,__t2089t__dat__first,&__t2090t__unsafe_ptr,&__t2090t__dat__pos,&__t2090t__dat__length,&__t2090t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t2090t__unsafe_ptr;
  s__dat__pos=__t2090t__dat__pos;
  s__dat__length=__t2090t__dat__length;
  s__dat__first=__t2090t__dat__first;
  __t_errcode=system__t1585t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t443t(__t2084t__unsafe_ptr,&__t2085t____t518t__);
  if(__t2085t____t518t__){
  free__t509t(&__t2084t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2080t();return 0;}