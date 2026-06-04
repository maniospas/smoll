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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5564t(char** __t5613t, uint64_t* __t5614t, uint16_t* __t5615t, uint16_t* __t5616t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5613t=unsafe_ptr;
  *__t5614t=unsafe_size;
  *__t5615t=unsafe_offset;
  *__t5616t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5617t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5617t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5618t) {
  char* allocated=*__t5618t;
  if(allocated){
  free(allocated);
  }
  *__t5618t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5619t) {
  int value=0;
  *__t5619t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5620t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5620t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5621t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5621t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5622t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5622t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5623t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5623t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5624t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5624t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5625t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5625t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5626t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5626t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5627t) {
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
  *__t5627t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5628t, uint64_t* __t5629t, uint16_t* __t5630t, uint16_t* __t5631t, uint64_t size, char** __t5632t, uint64_t* __t5633t, uint16_t* __t5634t, uint16_t* __t5635t) {
  char* buffer__unsafe_ptr=*__t5628t;
  uint64_t buffer__unsafe_size=*__t5629t;
  uint16_t buffer__unsafe_offset=*__t5630t;
  uint16_t buffer__unsafe_align=*__t5631t;
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
  *__t5628t=buffer__unsafe_ptr;
  *__t5629t=buffer__unsafe_size;
  *__t5630t=buffer__unsafe_offset;
  *__t5631t=buffer__unsafe_align;
  *__t5632t=buffer__unsafe_ptr;
  *__t5633t=buffer__unsafe_size;
  *__t5634t=buffer__unsafe_offset;
  *__t5635t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circular__t666t(char** __t5636t, uint64_t* __t5637t, uint16_t* __t5638t, uint16_t* __t5639t, char** __t5640t, uint64_t* __t5641t, uint16_t* __t5642t, uint16_t* __t5643t, uint64_t* __t5644t) {
  char* buf__unsafe_ptr=*__t5636t;
  uint64_t buf__unsafe_size=*__t5637t;
  uint16_t buf__unsafe_offset=*__t5638t;
  uint16_t buf__unsafe_align=*__t5639t;
  uint64_t __t667t=0;
  uint64_t __t668t=0;
  uint64_t pos=0;
  __t667t=0;
  __t668t=__t667t;
  pos=__t668t;
  goto __t_return;
  __t_return:
  *__t5636t=buf__unsafe_ptr;
  *__t5637t=buf__unsafe_size;
  *__t5638t=buf__unsafe_offset;
  *__t5639t=buf__unsafe_align;
  *__t5640t=buf__unsafe_ptr;
  *__t5641t=buf__unsafe_size;
  *__t5642t=buf__unsafe_offset;
  *__t5643t=buf__unsafe_align;
  *__t5644t=pos;
}

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1651t(char** __t5645t, uint64_t* __t5646t, uint16_t* __t5647t, uint16_t* __t5648t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5645t=unsafe_ptr;
  *__t5646t=unsafe_size;
  *__t5647t=unsafe_offset;
  *__t5648t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5649t, uint64_t* __t5650t, uint16_t* __t5651t, uint16_t* __t5652t, uint64_t size, char** __t5653t, uint64_t* __t5654t, uint16_t* __t5655t, uint16_t* __t5656t) {
  char* buffer__unsafe_ptr=*__t5649t;
  uint64_t buffer__unsafe_size=*__t5650t;
  uint16_t buffer__unsafe_offset=*__t5651t;
  uint16_t buffer__unsafe_align=*__t5652t;
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
  *__t5649t=buffer__unsafe_ptr;
  *__t5650t=buffer__unsafe_size;
  *__t5651t=buffer__unsafe_offset;
  *__t5652t=buffer__unsafe_align;
  *__t5653t=buffer__unsafe_ptr;
  *__t5654t=buffer__unsafe_size;
  *__t5655t=buffer__unsafe_offset;
  *__t5656t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t1640t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5657t, uint64_t* __t5658t, uint64_t* __t5659t) {
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__pos=0;
  uint64_t __t1642t__length=0;
  __t1642t__unsafe_ptr=unsafe_ptr;
  __t1642t__pos=pos;
  __t1642t__length=length;
  goto __t_return;
  __t_return:
  *__t5657t=__t1642t__unsafe_ptr;
  *__t5658t=__t1642t__pos;
  *__t5659t=__t1642t__length;
}

int vec__t1671t(uint64_t length, char** __t5660t, uint64_t* __t5661t, uint64_t* __t5662t) {
  char* __t1672t__unsafe_ptr=0;
  uint64_t __t1672t__unsafe_size=0;
  uint16_t __t1672t__unsafe_offset=0;
  uint16_t __t1672t__unsafe_align=0;
  char* __t1674t__unsafe_ptr=0;
  uint64_t __t1674t__unsafe_size=0;
  uint16_t __t1674t__unsafe_offset=0;
  uint16_t __t1674t__unsafe_align=0;
  char __t1675t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1676t=0;
  uint64_t __t1677t=0;
  uint64_t __t1678t=0;
  uint64_t __t1679t__=0;
  uint64_t __t1681t=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__pos=0;
  uint64_t __t1682t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1651t(&__t1672t__unsafe_ptr,&__t1672t__unsafe_size,&__t1672t__unsafe_offset,&__t1672t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1672t__unsafe_ptr,&__t1672t__unsafe_size,&__t1672t__unsafe_offset,&__t1672t__unsafe_align,length,&__t1674t__unsafe_ptr,&__t1674t__unsafe_size,&__t1674t__unsafe_offset,&__t1674t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1674t__unsafe_ptr;
  buf__unsafe_size=__t1674t__unsafe_size;
  buf__unsafe_offset=__t1674t__unsafe_offset;
  buf__unsafe_align=__t1674t__unsafe_align;
  __t1677t=0;
  __t1678t=8;
  mul__t199t(__t1678t,length,&__t1679t__);
  zero__t504t(buf__unsafe_ptr,__t1677t,__t1679t__);
  __t1681t=0;
  vec__t1640t(buf__unsafe_ptr,__t1681t,length,&__t1682t__unsafe_ptr,&__t1682t__pos,&__t1682t__length);
  goto __t_return;
  
  __t_failure:exists__t447t(__t1682t__unsafe_ptr,&__t1675t____t515t__);
  if(__t1675t____t515t__){
  free__t503t(&__t1682t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5660t=__t1682t__unsafe_ptr;
  *__t5661t=__t1682t__pos;
  *__t5662t=__t1682t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5663t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5663t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5664t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5664t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5665t) {
  *__t5665t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5666t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5666t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1760t(char** __t5667t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5668t) {
  char* v__unsafe_ptr=*__t5667t;
  char __t1761t__=0;
  uint64_t __t1762t=0;
  uint64_t __t1763t__=0;
  uint64_t __t1764t__=0;
  char* __t1765t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1761t__);
  if(__t1761t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1762t=8;
  add__t175t(i,v__pos,&__t1763t__);
  mul__t199t(__t1762t,__t1763t__,&__t1764t__);
  add__t505t(v__unsafe_ptr,__t1764t__,&__t1765t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5667t=v__unsafe_ptr;
  *__t5668t=__t1765t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5669t, uint64_t* __t5670t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5669t=from;
  *__t5670t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5671t, uint64_t* __t5672t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5671t=__t473t__from;
  *__t5672t=__t473t__to;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5673t) {
  goto __t_return;
  __t_return:
  *__t5673t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5674t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5674t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5675t, uint64_t* __t5676t, uint16_t* __t5677t, uint16_t* __t5678t, uint64_t pos, char** __t5679t, uint64_t* __t5680t, uint16_t* __t5681t, uint16_t* __t5682t, uint64_t* __t5683t) {
  char* buf__unsafe_ptr=*__t5675t;
  uint64_t buf__unsafe_size=*__t5676t;
  uint16_t buf__unsafe_offset=*__t5677t;
  uint16_t buf__unsafe_align=*__t5678t;
  goto __t_return;
  __t_return:
  *__t5675t=buf__unsafe_ptr;
  *__t5676t=buf__unsafe_size;
  *__t5677t=buf__unsafe_offset;
  *__t5678t=buf__unsafe_align;
  *__t5679t=buf__unsafe_ptr;
  *__t5680t=buf__unsafe_size;
  *__t5681t=buf__unsafe_offset;
  *__t5682t=buf__unsafe_align;
  *__t5683t=pos;
}

static inline __attribute__((always_inline)) int alloc__t702t(char** __t5684t, uint64_t* __t5685t, uint16_t* __t5686t, uint16_t* __t5687t, uint64_t* __t5688t, uint64_t length, char** __t5689t, uint64_t* __t5690t, uint16_t* __t5691t, uint16_t* __t5692t, uint64_t* __t5693t) {
  char* allocator__buf__unsafe_ptr=*__t5684t;
  uint64_t allocator__buf__unsafe_size=*__t5685t;
  uint16_t allocator__buf__unsafe_offset=*__t5686t;
  uint16_t allocator__buf__unsafe_align=*__t5687t;
  uint64_t allocator__pos=*__t5688t;
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
  *__t5684t=allocator__buf__unsafe_ptr;
  *__t5685t=allocator__buf__unsafe_size;
  *__t5686t=allocator__buf__unsafe_offset;
  *__t5687t=allocator__buf__unsafe_align;
  *__t5688t=allocator__pos;
  *__t5689t=__t715t__buf__unsafe_ptr;
  *__t5690t=__t715t__buf__unsafe_size;
  *__t5691t=__t715t__buf__unsafe_offset;
  *__t5692t=__t715t__buf__unsafe_align;
  *__t5693t=__t715t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1742t(char** __t5694t, uint64_t* __t5695t, uint16_t* __t5696t, uint16_t* __t5697t, uint64_t* __t5698t, uint64_t length, char** __t5699t, uint64_t* __t5700t, uint64_t* __t5701t) {
  char* FLOATS__buf__unsafe_ptr=*__t5694t;
  uint64_t FLOATS__buf__unsafe_size=*__t5695t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5696t;
  uint16_t FLOATS__buf__unsafe_align=*__t5697t;
  uint64_t FLOATS__pos=*__t5698t;
  uint64_t __t1743t__=0;
  uint64_t __t1744t=0;
  char __t1745t__=0;
  uint64_t __t1746t__=0;
  uint64_t __t1747t=0;
  char __t1748t__=0;
  char* __t1749t__buf__unsafe_ptr=0;
  uint64_t __t1749t__buf__unsafe_size=0;
  uint16_t __t1749t__buf__unsafe_offset=0;
  uint16_t __t1749t__buf__unsafe_align=0;
  uint64_t __t1749t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1750t__=0;
  int __t1751t=0;
  uint64_t __t1752t=0;
  uint64_t __t1753t__=0;
  uint64_t __t1754t=0;
  uint64_t __t1755t__=0;
  uint64_t __t1756t__=0;
  char* __t1758t__unsafe_ptr=0;
  uint64_t __t1758t__pos=0;
  uint64_t __t1758t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1743t__);
  __t1744t=8;
  neq__t144t(__t1743t__,__t1744t,&__t1745t__);
  if(__t1745t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1746t__);
  __t1747t=0;
  neq__t144t(__t1746t__,__t1747t,&__t1748t__);
  if(__t1748t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t702t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1749t__buf__unsafe_ptr,&__t1749t__buf__unsafe_size,&__t1749t__buf__unsafe_offset,&__t1749t__buf__unsafe_align,&__t1749t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1749t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1749t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1749t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1749t__buf__unsafe_align;
  surface__pos=__t1749t__pos;
  add__t175t(FLOATS__pos,length,&__t1750t__);
  FLOATS__pos=__t1750t__;
  __t1752t=8;
  mul__t199t(__t1752t,surface__pos,&__t1753t__);
  __t1754t=8;
  add__t175t(surface__pos,length,&__t1755t__);
  mul__t199t(__t1754t,__t1755t__,&__t1756t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1753t__,__t1756t__);
  vec__t1640t(surface__buf__unsafe_ptr,surface__pos,length,&__t1758t__unsafe_ptr,&__t1758t__pos,&__t1758t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5694t=FLOATS__buf__unsafe_ptr;
  *__t5695t=FLOATS__buf__unsafe_size;
  *__t5696t=FLOATS__buf__unsafe_offset;
  *__t5697t=FLOATS__buf__unsafe_align;
  *__t5698t=FLOATS__pos;
  *__t5699t=__t1758t__unsafe_ptr;
  *__t5700t=__t1758t__pos;
  *__t5701t=__t1758t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5702t, uint64_t r__to, uint64_t* __t5703t) {
  uint64_t r__from=*__t5702t;
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
  *__t5702t=r__from;
  *__t5703t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1731t(char** __t5704t, uint64_t* __t5705t, uint16_t* __t5706t, uint16_t* __t5707t, uint64_t* __t5708t, uint64_t length, char** __t5709t, uint64_t* __t5710t, uint64_t* __t5711t) {
  char* FLOATS__buf__unsafe_ptr=*__t5704t;
  uint64_t FLOATS__buf__unsafe_size=*__t5705t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5706t;
  uint16_t FLOATS__buf__unsafe_align=*__t5707t;
  uint64_t FLOATS__pos=*__t5708t;
  uint64_t __t1732t__=0;
  uint64_t __t1733t=0;
  char __t1734t__=0;
  uint64_t __t1735t__=0;
  uint64_t __t1736t=0;
  char __t1737t__=0;
  char* __t1738t__buf__unsafe_ptr=0;
  uint64_t __t1738t__buf__unsafe_size=0;
  uint16_t __t1738t__buf__unsafe_offset=0;
  uint16_t __t1738t__buf__unsafe_align=0;
  uint64_t __t1738t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1739t__=0;
  int __t1740t=0;
  char* __t1741t__unsafe_ptr=0;
  uint64_t __t1741t__pos=0;
  uint64_t __t1741t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1732t__);
  __t1733t=8;
  neq__t144t(__t1732t__,__t1733t,&__t1734t__);
  if(__t1734t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1735t__);
  __t1736t=0;
  neq__t144t(__t1735t__,__t1736t,&__t1737t__);
  if(__t1737t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t702t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1738t__buf__unsafe_ptr,&__t1738t__buf__unsafe_size,&__t1738t__buf__unsafe_offset,&__t1738t__buf__unsafe_align,&__t1738t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1738t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1738t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1738t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1738t__buf__unsafe_align;
  surface__pos=__t1738t__pos;
  add__t175t(FLOATS__pos,length,&__t1739t__);
  FLOATS__pos=__t1739t__;
  vec__t1640t(surface__buf__unsafe_ptr,surface__pos,length,&__t1741t__unsafe_ptr,&__t1741t__pos,&__t1741t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5704t=FLOATS__buf__unsafe_ptr;
  *__t5705t=FLOATS__buf__unsafe_size;
  *__t5706t=FLOATS__buf__unsafe_offset;
  *__t5707t=FLOATS__buf__unsafe_align;
  *__t5708t=FLOATS__pos;
  *__t5709t=__t1741t__unsafe_ptr;
  *__t5710t=__t1741t__pos;
  *__t5711t=__t1741t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5712t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5712t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5713t) {
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
  *__t5713t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1766t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5714t) {
  char __t1767t__=0;
  uint64_t __t1768t=0;
  uint64_t __t1769t__=0;
  uint64_t __t1770t__=0;
  char* __t1771t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1767t__);
  if(__t1767t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1768t=8;
  add__t175t(i,v__pos,&__t1769t__);
  mul__t199t(__t1768t,__t1769t__,&__t1770t__);
  add__t505t(v__unsafe_ptr,__t1770t__,&__t1771t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5714t=__t1771t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1773t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5715t) {
  char* __t1774t__=0;
  double __t1775t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t1774t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1774t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1775t__value,__t1774t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5715t=__t1775t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5716t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5716t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5717t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5717t=z;
}

int add__t1832t(char** __t5718t, uint64_t* __t5719t, uint16_t* __t5720t, uint16_t* __t5721t, uint64_t* __t5722t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5723t, uint64_t* __t5724t, uint64_t* __t5725t) {
  char* FLOATS__buf__unsafe_ptr=*__t5718t;
  uint64_t FLOATS__buf__unsafe_size=*__t5719t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5720t;
  uint16_t FLOATS__buf__unsafe_align=*__t5721t;
  uint64_t FLOATS__pos=*__t5722t;
  int __t1833t=0;
  char __t1834t__=0;
  char* __t1836t__unsafe_ptr=0;
  uint64_t __t1836t__pos=0;
  uint64_t __t1836t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1837t=0;
  uint64_t __t1838t__from=0;
  uint64_t __t1838t__to=0;
  char __t1839t=0;
  uint64_t __t1840t__=0;
  uint64_t i=0;
  char* __t1841t__=0;
  char* __t1842t__=0;
  double __t1843t__value=0;
  double __t1844t__=0;
  double __t1845t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1834t__);
  if(__t1834t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t1731t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t1836t__unsafe_ptr,&__t1836t__pos,&__t1836t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1836t__unsafe_ptr;
  v__pos=__t1836t__pos;
  v__length=__t1836t__length;
  range__t471t(v1__length,&__t1838t__from,&__t1838t__to);
  __t1837t=0;
  while(1){
  __t_complain=get__t478t(__t1838t__from,__t1838t__to,__t1837t,&__t1840t__);
  __t1839t=__t_complain;
  i=__t1840t__;
  __t1839t=__t1839t==0;
  __t1837t=__t1837t+1;
  if(!__t1839t){
  break;
  }
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,i,&__t1841t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1842t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1842t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1843t__value,__t1842t__,8);
  __t_errcode=at__t1773t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1844t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1843t__value,__t1844t__,&__t1845t__);
  if(!__t1841t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1841t__,&__t1845t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5718t=FLOATS__buf__unsafe_ptr;
  *__t5719t=FLOATS__buf__unsafe_size;
  *__t5720t=FLOATS__buf__unsafe_offset;
  *__t5721t=FLOATS__buf__unsafe_align;
  *__t5722t=FLOATS__pos;
  *__t5723t=v__unsafe_ptr;
  *__t5724t=v__pos;
  *__t5725t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1772t(double number, uint64_t i, double* __t5726t) {
  goto __t_return;
  __t_return:
  *__t5726t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5727t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5727t=z;
}

static inline __attribute__((always_inline)) int mul__t2050t(char** __t5728t, uint64_t* __t5729t, uint16_t* __t5730t, uint16_t* __t5731t, uint64_t* __t5732t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5733t, uint64_t* __t5734t, uint64_t* __t5735t) {
  char* FLOATS__buf__unsafe_ptr=*__t5728t;
  uint64_t FLOATS__buf__unsafe_size=*__t5729t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5730t;
  uint16_t FLOATS__buf__unsafe_align=*__t5731t;
  uint64_t FLOATS__pos=*__t5732t;
  int __t2051t=0;
  char* __t2053t__unsafe_ptr=0;
  uint64_t __t2053t__pos=0;
  uint64_t __t2053t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2054t=0;
  uint64_t __t2055t__from=0;
  uint64_t __t2055t__to=0;
  char __t2056t=0;
  uint64_t __t2057t__=0;
  uint64_t i=0;
  char* __t2058t__=0;
  char* __t2059t__=0;
  double __t2060t__value=0;
  double __t2061t__=0;
  double __t2062t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1731t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2053t__unsafe_ptr,&__t2053t__pos,&__t2053t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2053t__unsafe_ptr;
  v__pos=__t2053t__pos;
  v__length=__t2053t__length;
  range__t471t(v__length,&__t2055t__from,&__t2055t__to);
  __t2054t=0;
  while(1){
  __t_complain=get__t478t(__t2055t__from,__t2055t__to,__t2054t,&__t2057t__);
  __t2056t=__t_complain;
  i=__t2057t__;
  __t2056t=__t2056t==0;
  __t2054t=__t2054t+1;
  if(!__t2056t){
  break;
  }
  __t_errcode=mutget__t1760t(&v__unsafe_ptr,v__pos,v__length,i,&__t2058t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1766t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2059t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2059t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2060t__value,__t2059t__,8);
  at__t1772t(v2,i,&__t2061t__);
  mul__t177t(__t2060t__value,__t2061t__,&__t2062t__);
  if(!__t2058t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2058t__,&__t2062t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5728t=FLOATS__buf__unsafe_ptr;
  *__t5729t=FLOATS__buf__unsafe_size;
  *__t5730t=FLOATS__buf__unsafe_offset;
  *__t5731t=FLOATS__buf__unsafe_align;
  *__t5732t=FLOATS__pos;
  *__t5733t=v__unsafe_ptr;
  *__t5734t=v__pos;
  *__t5735t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2068t(char** __t5736t, uint64_t* __t5737t, uint16_t* __t5738t, uint16_t* __t5739t, uint64_t* __t5740t, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5741t, uint64_t* __t5742t, uint64_t* __t5743t) {
  char* FLOATS__buf__unsafe_ptr=*__t5736t;
  uint64_t FLOATS__buf__unsafe_size=*__t5737t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5738t;
  uint16_t FLOATS__buf__unsafe_align=*__t5739t;
  uint64_t FLOATS__pos=*__t5740t;
  char* __t2069t__unsafe_ptr=0;
  uint64_t __t2069t__pos=0;
  uint64_t __t2069t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2050t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2069t__unsafe_ptr,&__t2069t__pos,&__t2069t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5736t=FLOATS__buf__unsafe_ptr;
  *__t5737t=FLOATS__buf__unsafe_size;
  *__t5738t=FLOATS__buf__unsafe_offset;
  *__t5739t=FLOATS__buf__unsafe_align;
  *__t5740t=FLOATS__pos;
  *__t5741t=__t2069t__unsafe_ptr;
  *__t5742t=__t2069t__pos;
  *__t5743t=__t2069t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t5563t() {
  char* __t5566t__unsafe_ptr=0;
  uint64_t __t5566t__unsafe_size=0;
  uint16_t __t5566t__unsafe_offset=0;
  uint16_t __t5566t__unsafe_align=0;
  uint64_t __t5567t=0;
  char* __t5568t__unsafe_ptr=0;
  uint64_t __t5568t__unsafe_size=0;
  uint16_t __t5568t__unsafe_offset=0;
  uint16_t __t5568t__unsafe_align=0;
  char __t5569t____t534t__=0;
  char* __t5570t__buf__unsafe_ptr=0;
  uint64_t __t5570t__buf__unsafe_size=0;
  uint16_t __t5570t__buf__unsafe_offset=0;
  uint16_t __t5570t__buf__unsafe_align=0;
  uint64_t __t5570t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  char* __t5571t__unsafe_ptr=0;
  uint64_t __t5571t__unsafe_size=0;
  uint16_t __t5571t__unsafe_offset=0;
  uint16_t __t5571t__unsafe_align=0;
  uint64_t __t5572t=0;
  char* __t5573t__unsafe_ptr=0;
  uint64_t __t5573t__unsafe_size=0;
  uint16_t __t5573t__unsafe_offset=0;
  uint16_t __t5573t__unsafe_align=0;
  char __t5574t____t534t__=0;
  char* __t5575t__buf__unsafe_ptr=0;
  uint64_t __t5575t__buf__unsafe_size=0;
  uint16_t __t5575t__buf__unsafe_offset=0;
  uint16_t __t5575t__buf__unsafe_align=0;
  uint64_t __t5575t__pos=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t __t5577t=0;
  char* __t5578t__unsafe_ptr=0;
  uint64_t __t5578t__pos=0;
  uint64_t __t5578t__length=0;
  char __t5579t____t1675t____t515t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t5581t=0;
  char* __t5582t__unsafe_ptr=0;
  uint64_t __t5582t__pos=0;
  uint64_t __t5582t__length=0;
  char __t5583t____t1675t____t515t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t5584t=0;
  char* __t5585t__=0;
  double __t5586t=0;
  uint64_t __t5587t=0;
  char* __t5588t__=0;
  double __t5589t=0;
  uint64_t __t5590t=0;
  uint64_t __t5591t__from=0;
  uint64_t __t5591t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t5592t=0;
  char* __t5593t__unsafe_ptr=0;
  uint64_t __t5593t__pos=0;
  uint64_t __t5593t__length=0;
  char* __t5594t__unsafe_ptr=0;
  uint64_t __t5594t__pos=0;
  uint64_t __t5594t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t5595t=0;
  uint64_t __t5596t__=0;
  uint64_t i=0;
  double __t5597t=0;
  char* __t5598t__unsafe_ptr=0;
  uint64_t __t5598t__pos=0;
  uint64_t __t5598t__length=0;
  char* __t5599t__unsafe_ptr=0;
  uint64_t __t5599t__pos=0;
  uint64_t __t5599t__length=0;
  char* __t5600t__unsafe_ptr=0;
  uint64_t __t5600t__pos=0;
  uint64_t __t5600t__length=0;
  uint64_t __t5601t=0;
  char* __t5602t__=0;
  double __t5603t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5564t(&__t5566t__unsafe_ptr,&__t5566t__unsafe_size,&__t5566t__unsafe_offset,&__t5566t__unsafe_align);
  __t5567t=200;
  __t_errcode=alloc__t532t(&__t5566t__unsafe_ptr,&__t5566t__unsafe_size,&__t5566t__unsafe_offset,&__t5566t__unsafe_align,__t5567t,&__t5568t__unsafe_ptr,&__t5568t__unsafe_size,&__t5568t__unsafe_offset,&__t5568t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t666t(&__t5568t__unsafe_ptr,&__t5568t__unsafe_size,&__t5568t__unsafe_offset,&__t5568t__unsafe_align,&__t5570t__buf__unsafe_ptr,&__t5570t__buf__unsafe_size,&__t5570t__buf__unsafe_offset,&__t5570t__buf__unsafe_align,&__t5570t__pos);
  float____t_buffer____buffer__t5564t(&__t5571t__unsafe_ptr,&__t5571t__unsafe_size,&__t5571t__unsafe_offset,&__t5571t__unsafe_align);
  __t5572t=200;
  __t_errcode=alloc__t532t(&__t5571t__unsafe_ptr,&__t5571t__unsafe_size,&__t5571t__unsafe_offset,&__t5571t__unsafe_align,__t5572t,&__t5573t__unsafe_ptr,&__t5573t__unsafe_size,&__t5573t__unsafe_offset,&__t5573t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circular__t666t(&__t5573t__unsafe_ptr,&__t5573t__unsafe_size,&__t5573t__unsafe_offset,&__t5573t__unsafe_align,&__t5575t__buf__unsafe_ptr,&__t5575t__buf__unsafe_size,&__t5575t__buf__unsafe_offset,&__t5575t__buf__unsafe_align,&__t5575t__pos);
  new__t648t();
  __t5577t=10;
  __t_errcode=vec__t1671t(__t5577t,&__t5578t__unsafe_ptr,&__t5578t__pos,&__t5578t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t5578t__unsafe_ptr;
  v1__pos=__t5578t__pos;
  v1__length=__t5578t__length;
  new__t648t();
  __t5581t=10;
  __t_errcode=vec__t1671t(__t5581t,&__t5582t__unsafe_ptr,&__t5582t__pos,&__t5582t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t5582t__unsafe_ptr;
  v2__pos=__t5582t__pos;
  v2__length=__t5582t__length;
  __t5584t=0;
  __t_errcode=mutget__t1760t(&v1__unsafe_ptr,v1__pos,v1__length,__t5584t,&__t5585t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5586t=1.0;
  if(!__t5585t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5585t__,&__t5586t,8);
  __t5587t=0;
  __t_errcode=mutget__t1760t(&v2__unsafe_ptr,v2__pos,v2__length,__t5587t,&__t5588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5589t=2.0;
  if(!__t5588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5588t__,&__t5589t,8);
  __t5590t=5;
  range__t471t(__t5590t,&__t5591t__from,&__t5591t__to);
  it__from=__t5591t__from;
  it__to=__t5591t__to;
  __t5592t=10;
  __t_errcode=vec__t1742t(&__t5570t__buf__unsafe_ptr,&__t5570t__buf__unsafe_size,&__t5570t__buf__unsafe_offset,&__t5570t__buf__unsafe_align,&__t5570t__pos,__t5592t,&__t5593t__unsafe_ptr,&__t5593t__pos,&__t5593t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5594t__pos=__t5593t__pos;
  __t5594t__length=__t5593t__length;
  v__pos=__t5594t__pos;
  v__length=__t5594t__length;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t5596t__);
  __t5595t=__t_complain;
  i=__t5596t__;
  __t5595t=__t5595t==0;
  if(!__t5595t){
  break;
  }
  __t5597t=2.0;
  __t_errcode=add__t1832t(&__t5570t__buf__unsafe_ptr,&__t5570t__buf__unsafe_size,&__t5570t__buf__unsafe_offset,&__t5570t__buf__unsafe_align,&__t5570t__pos,v2__unsafe_ptr,v2__pos,v2__length,__t5570t__buf__unsafe_ptr,v__pos,v__length,&__t5598t__unsafe_ptr,&__t5598t__pos,&__t5598t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1832t(&__t5570t__buf__unsafe_ptr,&__t5570t__buf__unsafe_size,&__t5570t__buf__unsafe_offset,&__t5570t__buf__unsafe_align,&__t5570t__pos,v1__unsafe_ptr,v1__pos,v1__length,__t5570t__buf__unsafe_ptr,__t5598t__pos,__t5598t__length,&__t5599t__unsafe_ptr,&__t5599t__pos,&__t5599t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2068t(&__t5570t__buf__unsafe_ptr,&__t5570t__buf__unsafe_size,&__t5570t__buf__unsafe_offset,&__t5570t__buf__unsafe_align,&__t5570t__pos,__t5597t,__t5570t__buf__unsafe_ptr,__t5599t__pos,__t5599t__length,&__t5600t__unsafe_ptr,&__t5600t__pos,&__t5600t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t5600t__pos;
  v__length=__t5600t__length;
  }
  __t5601t=0;
  __t_errcode=get__t1766t(__t5570t__buf__unsafe_ptr,v__pos,v__length,__t5601t,&__t5602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5602t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5603t__value,__t5602t__,8);
  print__t385t(__t5603t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5582t__unsafe_ptr,&__t5583t____t1675t____t515t__);
  if(__t5583t____t1675t____t515t__){
  free__t503t(&__t5582t__unsafe_ptr);
  }
  exists__t447t(__t5578t__unsafe_ptr,&__t5579t____t1675t____t515t__);
  if(__t5579t____t1675t____t515t__){
  free__t503t(&__t5578t__unsafe_ptr);
  }
  exists__t447t(__t5573t__unsafe_ptr,&__t5574t____t534t__);
  if(__t5574t____t534t__){
  free__t503t(&__t5573t__unsafe_ptr);
  }
  exists__t447t(__t5568t__unsafe_ptr,&__t5569t____t534t__);
  if(__t5569t____t534t__){
  free__t503t(&__t5568t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1611t(int64_t value, const char** __t5744t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5744t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t5605t() {
  char __t5607t=0;
  char __t5609t=0;
  int64_t __t5610t=0;
  int64_t error=0;
  const char* __t5611t__=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=safe_main__t5563t();
  __t5607t=__t_complain;
  __t5607t=__t5607t==0;
  __t5610t=__t_complain;
  __t5609t=(__t_complain==0);
  __t_complain=0;
  error=__t5610t;
  __t5609t=__t5609t==0;
  if(__t5609t){
  cstr__t1611t(error,&__t5611t__);
  print__t380t(__t5611t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5605t();return 0;}