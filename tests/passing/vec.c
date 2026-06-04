#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[46] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5796t(char** __t5845t, uint64_t* __t5846t, uint16_t* __t5847t, uint16_t* __t5848t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5845t=unsafe_ptr;
  *__t5846t=unsafe_size;
  *__t5847t=unsafe_offset;
  *__t5848t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5849t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5849t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5850t) {
  char* allocated=*__t5850t;
  if(allocated){
  free(allocated);
  }
  *__t5850t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5851t) {
  int value=0;
  *__t5851t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5852t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5852t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5853t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5853t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5854t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5854t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5855t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5855t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5856t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5856t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5857t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5857t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5858t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5858t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5859t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5859t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5860t, uint64_t* __t5861t, uint16_t* __t5862t, uint16_t* __t5863t, uint64_t size, char** __t5864t, uint64_t* __t5865t, uint16_t* __t5866t, uint16_t* __t5867t) {
  char* buffer__unsafe_ptr=*__t5860t;
  uint64_t buffer__unsafe_size=*__t5861t;
  uint16_t buffer__unsafe_offset=*__t5862t;
  uint16_t buffer__unsafe_align=*__t5863t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5860t=buffer__unsafe_ptr;
  *__t5861t=buffer__unsafe_size;
  *__t5862t=buffer__unsafe_offset;
  *__t5863t=buffer__unsafe_align;
  *__t5864t=buffer__unsafe_ptr;
  *__t5865t=buffer__unsafe_size;
  *__t5866t=buffer__unsafe_offset;
  *__t5867t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circular__t666t(char** __t5868t, uint64_t* __t5869t, uint16_t* __t5870t, uint16_t* __t5871t, char** __t5872t, uint64_t* __t5873t, uint16_t* __t5874t, uint16_t* __t5875t, uint64_t* __t5876t) {
  char* buf__unsafe_ptr=*__t5868t;
  uint64_t buf__unsafe_size=*__t5869t;
  uint16_t buf__unsafe_offset=*__t5870t;
  uint16_t buf__unsafe_align=*__t5871t;
  uint64_t __t667t=0;
  uint64_t __t668t=0;
  uint64_t pos=0;
  __t667t=0;
  __t668t=__t667t;
  pos=__t668t;
  goto __t_return;
  __t_return:
  *__t5868t=buf__unsafe_ptr;
  *__t5869t=buf__unsafe_size;
  *__t5870t=buf__unsafe_offset;
  *__t5871t=buf__unsafe_align;
  *__t5872t=buf__unsafe_ptr;
  *__t5873t=buf__unsafe_size;
  *__t5874t=buf__unsafe_offset;
  *__t5875t=buf__unsafe_align;
  *__t5876t=pos;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1883t(char** __t5877t, uint64_t* __t5878t, uint16_t* __t5879t, uint16_t* __t5880t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5877t=unsafe_ptr;
  *__t5878t=unsafe_size;
  *__t5879t=unsafe_offset;
  *__t5880t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5881t, uint64_t* __t5882t, uint16_t* __t5883t, uint16_t* __t5884t, uint64_t size, char** __t5885t, uint64_t* __t5886t, uint16_t* __t5887t, uint16_t* __t5888t) {
  char* buffer__unsafe_ptr=*__t5881t;
  uint64_t buffer__unsafe_size=*__t5882t;
  uint16_t buffer__unsafe_offset=*__t5883t;
  uint16_t buffer__unsafe_align=*__t5884t;
  int __t514t=0;
  char __t515t__=0;
  char __t517t__=0;
  uint64_t __t518t=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  uint64_t __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t __t527t__=0;
  uint64_t bytes=0;
  uint64_t __t528t=0;
  char __t529t__=0;
  char* __t530t__=0;
  int __t531t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t517t__);
  if(__t517t__){
  __t518t=0;
  neq__t144t(size,__t518t,&__t519t__);
  if(__t519t__){
  __t520t=0;
  nat__t507t(buffer__unsafe_align,&__t521t__);
  mul__t199t(__t521t__,size,&__t522t__);
  zero__t504t(buffer__unsafe_ptr,__t520t,__t522t__);
  }
  goto __t_return;
  }
  __t524t=0;
  neq__t144t(buffer__unsafe_size,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t526t__);
  mul__t199t(__t526t__,size,&__t527t__);
  bytes=__t527t__;
  __t528t=0;
  eq__t120t(bytes,__t528t,&__t529t__);
  if(__t529t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t530t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t530t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t515t__);
  if(__t515t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5881t=buffer__unsafe_ptr;
  *__t5882t=buffer__unsafe_size;
  *__t5883t=buffer__unsafe_offset;
  *__t5884t=buffer__unsafe_align;
  *__t5885t=buffer__unsafe_ptr;
  *__t5886t=buffer__unsafe_size;
  *__t5887t=buffer__unsafe_offset;
  *__t5888t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t1872t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5889t, uint64_t* __t5890t, uint64_t* __t5891t) {
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__pos=0;
  uint64_t __t1874t__length=0;
  __t1874t__unsafe_ptr=unsafe_ptr;
  __t1874t__pos=pos;
  __t1874t__length=length;
  goto __t_return;
  __t_return:
  *__t5889t=__t1874t__unsafe_ptr;
  *__t5890t=__t1874t__pos;
  *__t5891t=__t1874t__length;
}

int vec__t1903t(uint64_t length, char** __t5892t, uint64_t* __t5893t, uint64_t* __t5894t) {
  char* __t1904t__unsafe_ptr=0;
  uint64_t __t1904t__unsafe_size=0;
  uint16_t __t1904t__unsafe_offset=0;
  uint16_t __t1904t__unsafe_align=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__unsafe_size=0;
  uint16_t __t1906t__unsafe_offset=0;
  uint16_t __t1906t__unsafe_align=0;
  char __t1907t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1908t=0;
  uint64_t __t1909t=0;
  uint64_t __t1910t=0;
  uint64_t __t1911t__=0;
  uint64_t __t1913t=0;
  char* __t1914t__unsafe_ptr=0;
  uint64_t __t1914t__pos=0;
  uint64_t __t1914t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1883t(&__t1904t__unsafe_ptr,&__t1904t__unsafe_size,&__t1904t__unsafe_offset,&__t1904t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1904t__unsafe_ptr,&__t1904t__unsafe_size,&__t1904t__unsafe_offset,&__t1904t__unsafe_align,length,&__t1906t__unsafe_ptr,&__t1906t__unsafe_size,&__t1906t__unsafe_offset,&__t1906t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1906t__unsafe_ptr;
  buf__unsafe_size=__t1906t__unsafe_size;
  buf__unsafe_offset=__t1906t__unsafe_offset;
  buf__unsafe_align=__t1906t__unsafe_align;
  __t1909t=0;
  __t1910t=8;
  mul__t199t(__t1910t,length,&__t1911t__);
  zero__t504t(buf__unsafe_ptr,__t1909t,__t1911t__);
  __t1913t=0;
  vec__t1872t(buf__unsafe_ptr,__t1913t,length,&__t1914t__unsafe_ptr,&__t1914t__pos,&__t1914t__length);
  goto __t_return;
  
  __t_failure:exists__t447t(__t1914t__unsafe_ptr,&__t1907t____t515t__);
  if(__t1907t____t515t__){
  free__t503t(&__t1914t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5892t=__t1914t__unsafe_ptr;
  *__t5893t=__t1914t__pos;
  *__t5894t=__t1914t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5895t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5895t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5896t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5896t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5897t) {
  *__t5897t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5898t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5898t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1992t(char** __t5899t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5900t) {
  char* v__unsafe_ptr=*__t5899t;
  char __t1993t__=0;
  uint64_t __t1994t=0;
  uint64_t __t1995t__=0;
  uint64_t __t1996t__=0;
  char* __t1997t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1993t__);
  if(__t1993t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1994t=8;
  add__t175t(i,v__pos,&__t1995t__);
  mul__t199t(__t1994t,__t1995t__,&__t1996t__);
  add__t505t(v__unsafe_ptr,__t1996t__,&__t1997t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5899t=v__unsafe_ptr;
  *__t5900t=__t1997t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5901t, uint64_t* __t5902t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5901t=from;
  *__t5902t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5903t, uint64_t* __t5904t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5903t=__t473t__from;
  *__t5904t=__t473t__to;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5905t) {
  goto __t_return;
  __t_return:
  *__t5905t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5906t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5906t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5907t, uint64_t* __t5908t, uint16_t* __t5909t, uint16_t* __t5910t, uint64_t pos, char** __t5911t, uint64_t* __t5912t, uint16_t* __t5913t, uint16_t* __t5914t, uint64_t* __t5915t) {
  char* buf__unsafe_ptr=*__t5907t;
  uint64_t buf__unsafe_size=*__t5908t;
  uint16_t buf__unsafe_offset=*__t5909t;
  uint16_t buf__unsafe_align=*__t5910t;
  goto __t_return;
  __t_return:
  *__t5907t=buf__unsafe_ptr;
  *__t5908t=buf__unsafe_size;
  *__t5909t=buf__unsafe_offset;
  *__t5910t=buf__unsafe_align;
  *__t5911t=buf__unsafe_ptr;
  *__t5912t=buf__unsafe_size;
  *__t5913t=buf__unsafe_offset;
  *__t5914t=buf__unsafe_align;
  *__t5915t=pos;
}

static inline __attribute__((always_inline)) int alloc__t702t(char** __t5916t, uint64_t* __t5917t, uint16_t* __t5918t, uint16_t* __t5919t, uint64_t* __t5920t, uint64_t length, char** __t5921t, uint64_t* __t5922t, uint16_t* __t5923t, uint16_t* __t5924t, uint64_t* __t5925t) {
  char* allocator__buf__unsafe_ptr=*__t5916t;
  uint64_t allocator__buf__unsafe_size=*__t5917t;
  uint16_t allocator__buf__unsafe_offset=*__t5918t;
  uint16_t allocator__buf__unsafe_align=*__t5919t;
  uint64_t allocator__pos=*__t5920t;
  int __t703t=0;
  uint64_t __t704t__=0;
  char __t705t__=0;
  uint64_t __t706t__=0;
  uint64_t __t707t__=0;
  uint64_t __t708t=0;
  uint64_t next_pos=0;
  uint64_t __t709t__=0;
  char __t710t__=0;
  uint64_t __t713t=0;
  uint64_t __t714t__=0;
  uint64_t pos=0;
  uint64_t __t711t=0;
  uint64_t __t712t=0;
  char* __t715t__buf__unsafe_ptr=0;
  uint64_t __t715t__buf__unsafe_size=0;
  uint16_t __t715t__buf__unsafe_offset=0;
  uint16_t __t715t__buf__unsafe_align=0;
  uint64_t __t715t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t704t__);
  ge__t324t(length,__t704t__,&__t705t__);
  if(__t705t__){
  __t_errcode=17;
  goto __t_failure;
  }
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t706t__);
  add__t175t(length,__t706t__,&__t707t__);
  __t708t=__t707t__;
  next_pos=__t708t;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t709t__);
  gt__t276t(next_pos,__t709t__,&__t710t__);
  if(__t710t__){
  __t711t=0;
  next_pos=__t711t;
  __t712t=0;
  pos=__t712t;
  }
  else{
  __t713t=0;
  add__t175t(allocator__pos,__t713t,&__t714t__);
  pos=__t714t__;
  }
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t715t__buf__unsafe_ptr,&__t715t__buf__unsafe_size,&__t715t__buf__unsafe_offset,&__t715t__buf__unsafe_align,&__t715t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5916t=allocator__buf__unsafe_ptr;
  *__t5917t=allocator__buf__unsafe_size;
  *__t5918t=allocator__buf__unsafe_offset;
  *__t5919t=allocator__buf__unsafe_align;
  *__t5920t=allocator__pos;
  *__t5921t=__t715t__buf__unsafe_ptr;
  *__t5922t=__t715t__buf__unsafe_size;
  *__t5923t=__t715t__buf__unsafe_offset;
  *__t5924t=__t715t__buf__unsafe_align;
  *__t5925t=__t715t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1974t(char** __t5926t, uint64_t* __t5927t, uint16_t* __t5928t, uint16_t* __t5929t, uint64_t* __t5930t, uint64_t length, char** __t5931t, uint64_t* __t5932t, uint64_t* __t5933t) {
  char* FLOATS__buf__unsafe_ptr=*__t5926t;
  uint64_t FLOATS__buf__unsafe_size=*__t5927t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5928t;
  uint16_t FLOATS__buf__unsafe_align=*__t5929t;
  uint64_t FLOATS__pos=*__t5930t;
  uint64_t __t1975t__=0;
  uint64_t __t1976t=0;
  char __t1977t__=0;
  uint64_t __t1978t__=0;
  uint64_t __t1979t=0;
  char __t1980t__=0;
  char* __t1981t__buf__unsafe_ptr=0;
  uint64_t __t1981t__buf__unsafe_size=0;
  uint16_t __t1981t__buf__unsafe_offset=0;
  uint16_t __t1981t__buf__unsafe_align=0;
  uint64_t __t1981t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1982t__=0;
  int __t1983t=0;
  uint64_t __t1984t=0;
  uint64_t __t1985t__=0;
  uint64_t __t1986t=0;
  uint64_t __t1987t__=0;
  uint64_t __t1988t__=0;
  char* __t1990t__unsafe_ptr=0;
  uint64_t __t1990t__pos=0;
  uint64_t __t1990t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1975t__);
  __t1976t=8;
  neq__t144t(__t1975t__,__t1976t,&__t1977t__);
  if(__t1977t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1978t__);
  __t1979t=0;
  neq__t144t(__t1978t__,__t1979t,&__t1980t__);
  if(__t1980t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t702t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1981t__buf__unsafe_ptr,&__t1981t__buf__unsafe_size,&__t1981t__buf__unsafe_offset,&__t1981t__buf__unsafe_align,&__t1981t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1981t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1981t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1981t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1981t__buf__unsafe_align;
  surface__pos=__t1981t__pos;
  add__t175t(FLOATS__pos,length,&__t1982t__);
  FLOATS__pos=__t1982t__;
  __t1984t=8;
  mul__t199t(__t1984t,surface__pos,&__t1985t__);
  __t1986t=8;
  add__t175t(surface__pos,length,&__t1987t__);
  mul__t199t(__t1986t,__t1987t__,&__t1988t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1985t__,__t1988t__);
  vec__t1872t(surface__buf__unsafe_ptr,surface__pos,length,&__t1990t__unsafe_ptr,&__t1990t__pos,&__t1990t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5926t=FLOATS__buf__unsafe_ptr;
  *__t5927t=FLOATS__buf__unsafe_size;
  *__t5928t=FLOATS__buf__unsafe_offset;
  *__t5929t=FLOATS__buf__unsafe_align;
  *__t5930t=FLOATS__pos;
  *__t5931t=__t1990t__unsafe_ptr;
  *__t5932t=__t1990t__pos;
  *__t5933t=__t1990t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5934t, uint64_t r__to, uint64_t* __t5935t) {
  uint64_t r__from=*__t5934t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5934t=r__from;
  *__t5935t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1963t(char** __t5936t, uint64_t* __t5937t, uint16_t* __t5938t, uint16_t* __t5939t, uint64_t* __t5940t, uint64_t length, char** __t5941t, uint64_t* __t5942t, uint64_t* __t5943t) {
  char* FLOATS__buf__unsafe_ptr=*__t5936t;
  uint64_t FLOATS__buf__unsafe_size=*__t5937t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5938t;
  uint16_t FLOATS__buf__unsafe_align=*__t5939t;
  uint64_t FLOATS__pos=*__t5940t;
  uint64_t __t1964t__=0;
  uint64_t __t1965t=0;
  char __t1966t__=0;
  uint64_t __t1967t__=0;
  uint64_t __t1968t=0;
  char __t1969t__=0;
  char* __t1970t__buf__unsafe_ptr=0;
  uint64_t __t1970t__buf__unsafe_size=0;
  uint16_t __t1970t__buf__unsafe_offset=0;
  uint16_t __t1970t__buf__unsafe_align=0;
  uint64_t __t1970t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1971t__=0;
  int __t1972t=0;
  char* __t1973t__unsafe_ptr=0;
  uint64_t __t1973t__pos=0;
  uint64_t __t1973t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1964t__);
  __t1965t=8;
  neq__t144t(__t1964t__,__t1965t,&__t1966t__);
  if(__t1966t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1967t__);
  __t1968t=0;
  neq__t144t(__t1967t__,__t1968t,&__t1969t__);
  if(__t1969t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t702t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1970t__buf__unsafe_ptr,&__t1970t__buf__unsafe_size,&__t1970t__buf__unsafe_offset,&__t1970t__buf__unsafe_align,&__t1970t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1970t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1970t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1970t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1970t__buf__unsafe_align;
  surface__pos=__t1970t__pos;
  add__t175t(FLOATS__pos,length,&__t1971t__);
  FLOATS__pos=__t1971t__;
  vec__t1872t(surface__buf__unsafe_ptr,surface__pos,length,&__t1973t__unsafe_ptr,&__t1973t__pos,&__t1973t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5936t=FLOATS__buf__unsafe_ptr;
  *__t5937t=FLOATS__buf__unsafe_size;
  *__t5938t=FLOATS__buf__unsafe_offset;
  *__t5939t=FLOATS__buf__unsafe_align;
  *__t5940t=FLOATS__pos;
  *__t5941t=__t1973t__unsafe_ptr;
  *__t5942t=__t1973t__pos;
  *__t5943t=__t1973t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5944t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5944t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5945t) {
  char __t479t__=0;
  char __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t479t__);
  if(__t479t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t480t__);
  if(__t480t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5945t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1998t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5946t) {
  char __t1999t__=0;
  uint64_t __t2000t=0;
  uint64_t __t2001t__=0;
  uint64_t __t2002t__=0;
  char* __t2003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1999t__);
  if(__t1999t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2000t=8;
  add__t175t(i,v__pos,&__t2001t__);
  mul__t199t(__t2000t,__t2001t__,&__t2002t__);
  add__t505t(v__unsafe_ptr,__t2002t__,&__t2003t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5946t=__t2003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t2005t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5947t) {
  char* __t2006t__=0;
  double __t2007t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t2006t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2006t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2007t__value,__t2006t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5947t=__t2007t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5948t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5948t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5949t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5949t=z;
}

int add__t2064t(char** __t5950t, uint64_t* __t5951t, uint16_t* __t5952t, uint16_t* __t5953t, uint64_t* __t5954t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5955t, uint64_t* __t5956t, uint64_t* __t5957t) {
  char* FLOATS__buf__unsafe_ptr=*__t5950t;
  uint64_t FLOATS__buf__unsafe_size=*__t5951t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5952t;
  uint16_t FLOATS__buf__unsafe_align=*__t5953t;
  uint64_t FLOATS__pos=*__t5954t;
  int __t2065t=0;
  char __t2066t__=0;
  char* __t2068t__unsafe_ptr=0;
  uint64_t __t2068t__pos=0;
  uint64_t __t2068t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2069t=0;
  uint64_t __t2070t__from=0;
  uint64_t __t2070t__to=0;
  char __t2071t=0;
  uint64_t __t2072t__=0;
  uint64_t i=0;
  char* __t2073t__=0;
  char* __t2074t__=0;
  double __t2075t__value=0;
  double __t2076t__=0;
  double __t2077t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t2066t__);
  if(__t2066t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t1963t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2068t__unsafe_ptr,&__t2068t__pos,&__t2068t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2068t__unsafe_ptr;
  v__pos=__t2068t__pos;
  v__length=__t2068t__length;
  range__t471t(v1__length,&__t2070t__from,&__t2070t__to);
  __t2069t=0;
  while(1){
  __t_complain=get__t478t(__t2070t__from,__t2070t__to,__t2069t,&__t2072t__);
  __t2071t=__t_complain;
  i=__t2072t__;
  __t2071t=__t2071t==0;
  __t2069t=__t2069t+1;
  if(!__t2071t){
  break;
  }
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,i,&__t2073t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2074t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2074t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2075t__value,__t2074t__,8);
  __t_errcode=at__t2005t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2076t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t2075t__value,__t2076t__,&__t2077t__);
  if(!__t2073t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2073t__,&__t2077t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5950t=FLOATS__buf__unsafe_ptr;
  *__t5951t=FLOATS__buf__unsafe_size;
  *__t5952t=FLOATS__buf__unsafe_offset;
  *__t5953t=FLOATS__buf__unsafe_align;
  *__t5954t=FLOATS__pos;
  *__t5955t=v__unsafe_ptr;
  *__t5956t=v__pos;
  *__t5957t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2004t(double number, uint64_t i, double* __t5958t) {
  goto __t_return;
  __t_return:
  *__t5958t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5959t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5959t=z;
}

static inline __attribute__((always_inline)) int mul__t2282t(char** __t5960t, uint64_t* __t5961t, uint16_t* __t5962t, uint16_t* __t5963t, uint64_t* __t5964t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5965t, uint64_t* __t5966t, uint64_t* __t5967t) {
  char* FLOATS__buf__unsafe_ptr=*__t5960t;
  uint64_t FLOATS__buf__unsafe_size=*__t5961t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5962t;
  uint16_t FLOATS__buf__unsafe_align=*__t5963t;
  uint64_t FLOATS__pos=*__t5964t;
  int __t2283t=0;
  char* __t2285t__unsafe_ptr=0;
  uint64_t __t2285t__pos=0;
  uint64_t __t2285t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2286t=0;
  uint64_t __t2287t__from=0;
  uint64_t __t2287t__to=0;
  char __t2288t=0;
  uint64_t __t2289t__=0;
  uint64_t i=0;
  char* __t2290t__=0;
  char* __t2291t__=0;
  double __t2292t__value=0;
  double __t2293t__=0;
  double __t2294t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1963t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2285t__unsafe_ptr,&__t2285t__pos,&__t2285t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2285t__unsafe_ptr;
  v__pos=__t2285t__pos;
  v__length=__t2285t__length;
  range__t471t(v__length,&__t2287t__from,&__t2287t__to);
  __t2286t=0;
  while(1){
  __t_complain=get__t478t(__t2287t__from,__t2287t__to,__t2286t,&__t2289t__);
  __t2288t=__t_complain;
  i=__t2289t__;
  __t2288t=__t2288t==0;
  __t2286t=__t2286t+1;
  if(!__t2288t){
  break;
  }
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,i,&__t2290t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2291t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2291t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2292t__value,__t2291t__,8);
  at__t2004t(v2,i,&__t2293t__);
  mul__t177t(__t2292t__value,__t2293t__,&__t2294t__);
  if(!__t2290t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2290t__,&__t2294t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5960t=FLOATS__buf__unsafe_ptr;
  *__t5961t=FLOATS__buf__unsafe_size;
  *__t5962t=FLOATS__buf__unsafe_offset;
  *__t5963t=FLOATS__buf__unsafe_align;
  *__t5964t=FLOATS__pos;
  *__t5965t=v__unsafe_ptr;
  *__t5966t=v__pos;
  *__t5967t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2300t(char** __t5968t, uint64_t* __t5969t, uint16_t* __t5970t, uint16_t* __t5971t, uint64_t* __t5972t, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5973t, uint64_t* __t5974t, uint64_t* __t5975t) {
  char* FLOATS__buf__unsafe_ptr=*__t5968t;
  uint64_t FLOATS__buf__unsafe_size=*__t5969t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5970t;
  uint16_t FLOATS__buf__unsafe_align=*__t5971t;
  uint64_t FLOATS__pos=*__t5972t;
  char* __t2301t__unsafe_ptr=0;
  uint64_t __t2301t__pos=0;
  uint64_t __t2301t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2282t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2301t__unsafe_ptr,&__t2301t__pos,&__t2301t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5968t=FLOATS__buf__unsafe_ptr;
  *__t5969t=FLOATS__buf__unsafe_size;
  *__t5970t=FLOATS__buf__unsafe_offset;
  *__t5971t=FLOATS__buf__unsafe_align;
  *__t5972t=FLOATS__pos;
  *__t5973t=__t2301t__unsafe_ptr;
  *__t5974t=__t2301t__pos;
  *__t5975t=__t2301t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t5795t() {
  char* __t5798t__unsafe_ptr=0;
  uint64_t __t5798t__unsafe_size=0;
  uint16_t __t5798t__unsafe_offset=0;
  uint16_t __t5798t__unsafe_align=0;
  uint64_t __t5799t=0;
  char* __t5800t__unsafe_ptr=0;
  uint64_t __t5800t__unsafe_size=0;
  uint16_t __t5800t__unsafe_offset=0;
  uint16_t __t5800t__unsafe_align=0;
  char __t5801t____t534t__=0;
  char* __t5802t__buf__unsafe_ptr=0;
  uint64_t __t5802t__buf__unsafe_size=0;
  uint16_t __t5802t__buf__unsafe_offset=0;
  uint16_t __t5802t__buf__unsafe_align=0;
  uint64_t __t5802t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  char* __t5803t__unsafe_ptr=0;
  uint64_t __t5803t__unsafe_size=0;
  uint16_t __t5803t__unsafe_offset=0;
  uint16_t __t5803t__unsafe_align=0;
  uint64_t __t5804t=0;
  char* __t5805t__unsafe_ptr=0;
  uint64_t __t5805t__unsafe_size=0;
  uint16_t __t5805t__unsafe_offset=0;
  uint16_t __t5805t__unsafe_align=0;
  char __t5806t____t534t__=0;
  char* __t5807t__buf__unsafe_ptr=0;
  uint64_t __t5807t__buf__unsafe_size=0;
  uint16_t __t5807t__buf__unsafe_offset=0;
  uint16_t __t5807t__buf__unsafe_align=0;
  uint64_t __t5807t__pos=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t __t5809t=0;
  char* __t5810t__unsafe_ptr=0;
  uint64_t __t5810t__pos=0;
  uint64_t __t5810t__length=0;
  char __t5811t____t1907t____t515t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t5813t=0;
  char* __t5814t__unsafe_ptr=0;
  uint64_t __t5814t__pos=0;
  uint64_t __t5814t__length=0;
  char __t5815t____t1907t____t515t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t5816t=0;
  char* __t5817t__=0;
  double __t5818t=0;
  uint64_t __t5819t=0;
  char* __t5820t__=0;
  double __t5821t=0;
  uint64_t __t5822t=0;
  uint64_t __t5823t__from=0;
  uint64_t __t5823t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t5824t=0;
  char* __t5825t__unsafe_ptr=0;
  uint64_t __t5825t__pos=0;
  uint64_t __t5825t__length=0;
  char* __t5826t__unsafe_ptr=0;
  uint64_t __t5826t__pos=0;
  uint64_t __t5826t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t5827t=0;
  uint64_t __t5828t__=0;
  uint64_t i=0;
  double __t5829t=0;
  char* __t5830t__unsafe_ptr=0;
  uint64_t __t5830t__pos=0;
  uint64_t __t5830t__length=0;
  char* __t5831t__unsafe_ptr=0;
  uint64_t __t5831t__pos=0;
  uint64_t __t5831t__length=0;
  char* __t5832t__unsafe_ptr=0;
  uint64_t __t5832t__pos=0;
  uint64_t __t5832t__length=0;
  uint64_t __t5833t=0;
  char* __t5834t__=0;
  double __t5835t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5796t(&__t5798t__unsafe_ptr,&__t5798t__unsafe_size,&__t5798t__unsafe_offset,&__t5798t__unsafe_align);
  __t5799t=200;
  __t_errcode=alloc__t532t(&__t5798t__unsafe_ptr,&__t5798t__unsafe_size,&__t5798t__unsafe_offset,&__t5798t__unsafe_align,__t5799t,&__t5800t__unsafe_ptr,&__t5800t__unsafe_size,&__t5800t__unsafe_offset,&__t5800t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t666t(&__t5800t__unsafe_ptr,&__t5800t__unsafe_size,&__t5800t__unsafe_offset,&__t5800t__unsafe_align,&__t5802t__buf__unsafe_ptr,&__t5802t__buf__unsafe_size,&__t5802t__buf__unsafe_offset,&__t5802t__buf__unsafe_align,&__t5802t__pos);
  float____t_buffer____buffer__t5796t(&__t5803t__unsafe_ptr,&__t5803t__unsafe_size,&__t5803t__unsafe_offset,&__t5803t__unsafe_align);
  __t5804t=200;
  __t_errcode=alloc__t532t(&__t5803t__unsafe_ptr,&__t5803t__unsafe_size,&__t5803t__unsafe_offset,&__t5803t__unsafe_align,__t5804t,&__t5805t__unsafe_ptr,&__t5805t__unsafe_size,&__t5805t__unsafe_offset,&__t5805t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t666t(&__t5805t__unsafe_ptr,&__t5805t__unsafe_size,&__t5805t__unsafe_offset,&__t5805t__unsafe_align,&__t5807t__buf__unsafe_ptr,&__t5807t__buf__unsafe_size,&__t5807t__buf__unsafe_offset,&__t5807t__buf__unsafe_align,&__t5807t__pos);
  new__t648t();
  __t5809t=10;
  __t_errcode=vec__t1903t(__t5809t,&__t5810t__unsafe_ptr,&__t5810t__pos,&__t5810t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t5810t__unsafe_ptr;
  v1__pos=__t5810t__pos;
  v1__length=__t5810t__length;
  new__t648t();
  __t5813t=10;
  __t_errcode=vec__t1903t(__t5813t,&__t5814t__unsafe_ptr,&__t5814t__pos,&__t5814t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t5814t__unsafe_ptr;
  v2__pos=__t5814t__pos;
  v2__length=__t5814t__length;
  __t5816t=0;
  __t_errcode=mutget__t1992t(&v1__unsafe_ptr,v1__pos,v1__length,__t5816t,&__t5817t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5818t=1.0;
  if(!__t5817t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5817t__,&__t5818t,8);
  __t5819t=0;
  __t_errcode=mutget__t1992t(&v2__unsafe_ptr,v2__pos,v2__length,__t5819t,&__t5820t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5821t=2.0;
  if(!__t5820t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5820t__,&__t5821t,8);
  __t5822t=5;
  range__t471t(__t5822t,&__t5823t__from,&__t5823t__to);
  it__from=__t5823t__from;
  it__to=__t5823t__to;
  __t5824t=10;
  __t_errcode=vec__t1974t(&__t5802t__buf__unsafe_ptr,&__t5802t__buf__unsafe_size,&__t5802t__buf__unsafe_offset,&__t5802t__buf__unsafe_align,&__t5802t__pos,__t5824t,&__t5825t__unsafe_ptr,&__t5825t__pos,&__t5825t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5826t__pos=__t5825t__pos;
  __t5826t__length=__t5825t__length;
  v__pos=__t5826t__pos;
  v__length=__t5826t__length;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t5828t__);
  __t5827t=__t_complain;
  i=__t5828t__;
  __t5827t=__t5827t==0;
  if(!__t5827t){
  break;
  }
  __t5829t=2.0;
  __t_errcode=add__t2064t(&__t5802t__buf__unsafe_ptr,&__t5802t__buf__unsafe_size,&__t5802t__buf__unsafe_offset,&__t5802t__buf__unsafe_align,&__t5802t__pos,v2__unsafe_ptr,v2__pos,v2__length,__t5802t__buf__unsafe_ptr,v__pos,v__length,&__t5830t__unsafe_ptr,&__t5830t__pos,&__t5830t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2064t(&__t5802t__buf__unsafe_ptr,&__t5802t__buf__unsafe_size,&__t5802t__buf__unsafe_offset,&__t5802t__buf__unsafe_align,&__t5802t__pos,v1__unsafe_ptr,v1__pos,v1__length,__t5802t__buf__unsafe_ptr,__t5830t__pos,__t5830t__length,&__t5831t__unsafe_ptr,&__t5831t__pos,&__t5831t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2300t(&__t5802t__buf__unsafe_ptr,&__t5802t__buf__unsafe_size,&__t5802t__buf__unsafe_offset,&__t5802t__buf__unsafe_align,&__t5802t__pos,__t5829t,__t5802t__buf__unsafe_ptr,__t5831t__pos,__t5831t__length,&__t5832t__unsafe_ptr,&__t5832t__pos,&__t5832t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t5832t__pos;
  v__length=__t5832t__length;
  }
  __t5833t=0;
  __t_errcode=get__t1998t(__t5802t__buf__unsafe_ptr,v__pos,v__length,__t5833t,&__t5834t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5834t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5835t__value,__t5834t__,8);
  print__t385t(__t5835t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5814t__unsafe_ptr,&__t5815t____t1907t____t515t__);
  if(__t5815t____t1907t____t515t__){
  free__t503t(&__t5814t__unsafe_ptr);
  }
  exists__t447t(__t5810t__unsafe_ptr,&__t5811t____t1907t____t515t__);
  if(__t5811t____t1907t____t515t__){
  free__t503t(&__t5810t__unsafe_ptr);
  }
  exists__t447t(__t5805t__unsafe_ptr,&__t5806t____t534t__);
  if(__t5806t____t534t__){
  free__t503t(&__t5805t__unsafe_ptr);
  }
  exists__t447t(__t5800t__unsafe_ptr,&__t5801t____t534t__);
  if(__t5801t____t534t__){
  free__t503t(&__t5800t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1843t(int64_t value, const char** __t5976t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5976t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t5837t() {
  char __t5839t=0;
  char __t5841t=0;
  int64_t __t5842t=0;
  int64_t error=0;
  const char* __t5843t__=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=safe_main__t5795t();
  __t5839t=__t_complain;
  __t5839t=__t5839t==0;
  __t5842t=__t_complain;
  __t5841t=(__t_complain==0);
  __t_complain=0;
  error=__t5842t;
  __t5841t=__t5841t==0;
  if(__t5841t){
  cstr__t1843t(error,&__t5843t__);
  print__t380t(__t5843t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5837t();return 0;}