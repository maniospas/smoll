#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[48] = {"noerr",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5602t(char** __t5651t, uint64_t* __t5652t, uint16_t* __t5653t, uint16_t* __t5654t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5651t=unsafe_ptr;
  *__t5652t=unsafe_size;
  *__t5653t=unsafe_offset;
  *__t5654t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5655t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5655t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5656t) {
  char* allocated=*__t5656t;
  if(allocated){
  free(allocated);
  }
  *__t5656t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5657t) {
  int value=0;
  *__t5657t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5658t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5658t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5659t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5659t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5660t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5660t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5661t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5661t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5662t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5662t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5663t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5663t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5664t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5664t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5665t) {
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
  *__t5665t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5666t, uint64_t* __t5667t, uint16_t* __t5668t, uint16_t* __t5669t, uint64_t size, char** __t5670t, uint64_t* __t5671t, uint16_t* __t5672t, uint16_t* __t5673t) {
  char* buffer__unsafe_ptr=*__t5666t;
  uint64_t buffer__unsafe_size=*__t5667t;
  uint16_t buffer__unsafe_offset=*__t5668t;
  uint16_t buffer__unsafe_align=*__t5669t;
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
  *__t5666t=buffer__unsafe_ptr;
  *__t5667t=buffer__unsafe_size;
  *__t5668t=buffer__unsafe_offset;
  *__t5669t=buffer__unsafe_align;
  *__t5670t=buffer__unsafe_ptr;
  *__t5671t=buffer__unsafe_size;
  *__t5672t=buffer__unsafe_offset;
  *__t5673t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5674t) {
  goto __t_return;
  __t_return:
  *__t5674t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5675t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5675t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5676t) {
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
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5676t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5677t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5677t=z;
}

static inline __attribute__((always_inline)) void circular__t684t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t5678t, uint64_t length, char** __t5679t, uint64_t* __t5680t, uint16_t* __t5681t, uint16_t* __t5682t, uint64_t* __t5683t, uint64_t* __t5684t) {
  uint64_t pos=*__t5678t;
  goto __t_return;
  __t_return:
  *__t5678t=pos;
  *__t5679t=buf__unsafe_ptr;
  *__t5680t=buf__unsafe_size;
  *__t5681t=buf__unsafe_offset;
  *__t5682t=buf__unsafe_align;
  *__t5683t=pos;
  *__t5684t=length;
}

static inline __attribute__((always_inline)) int circular__t1605t(char** __t5685t, uint64_t* __t5686t, uint16_t* __t5687t, uint16_t* __t5688t, char** __t5689t, uint64_t* __t5690t, uint16_t* __t5691t, uint16_t* __t5692t, uint64_t* __t5693t, uint64_t* __t5694t) {
  char* buf__unsafe_ptr=*__t5685t;
  uint64_t buf__unsafe_size=*__t5686t;
  uint16_t buf__unsafe_offset=*__t5687t;
  uint16_t buf__unsafe_align=*__t5688t;
  int __t1606t=0;
  int __t1607t=0;
  uint64_t __t1608t=0;
  uint64_t __t1609t=0;
  uint64_t pos=0;
  int __t1610t=0;
  uint64_t __t1611t__=0;
  uint64_t __t1612t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1613t__=0;
  char* __t1614t__buf__unsafe_ptr=0;
  uint64_t __t1614t__buf__unsafe_size=0;
  uint16_t __t1614t__buf__unsafe_offset=0;
  uint16_t __t1614t__buf__unsafe_align=0;
  uint64_t __t1614t__pos=0;
  uint64_t __t1614t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1608t=0;
  __t1609t=__t1608t;
  pos=__t1609t;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1611t__);
  __t_errcode=sub__t352t(__t1611t__,pos,&__t1612t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1612t__;
  start=pos;
  add__t175t(pos,length,&__t1613t__);
  pos=__t1613t__;
  circular__t684t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1614t__buf__unsafe_ptr,&__t1614t__buf__unsafe_size,&__t1614t__buf__unsafe_offset,&__t1614t__buf__unsafe_align,&__t1614t__pos,&__t1614t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5685t=buf__unsafe_ptr;
  *__t5686t=buf__unsafe_size;
  *__t5687t=buf__unsafe_offset;
  *__t5688t=buf__unsafe_align;
  *__t5689t=__t1614t__buf__unsafe_ptr;
  *__t5690t=__t1614t__buf__unsafe_size;
  *__t5691t=__t1614t__buf__unsafe_offset;
  *__t5692t=__t1614t__buf__unsafe_align;
  *__t5693t=__t1614t__pos;
  *__t5694t=__t1614t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t673t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1593t(char** __t5695t, uint64_t* __t5696t, uint16_t* __t5697t, uint16_t* __t5698t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5695t=unsafe_ptr;
  *__t5696t=unsafe_size;
  *__t5697t=unsafe_offset;
  *__t5698t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5699t, uint64_t* __t5700t, uint16_t* __t5701t, uint16_t* __t5702t, uint64_t size, char** __t5703t, uint64_t* __t5704t, uint16_t* __t5705t, uint16_t* __t5706t) {
  char* buffer__unsafe_ptr=*__t5699t;
  uint64_t buffer__unsafe_size=*__t5700t;
  uint16_t buffer__unsafe_offset=*__t5701t;
  uint16_t buffer__unsafe_align=*__t5702t;
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
  *__t5699t=buffer__unsafe_ptr;
  *__t5700t=buffer__unsafe_size;
  *__t5701t=buffer__unsafe_offset;
  *__t5702t=buffer__unsafe_align;
  *__t5703t=buffer__unsafe_ptr;
  *__t5704t=buffer__unsafe_size;
  *__t5705t=buffer__unsafe_offset;
  *__t5706t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t1583t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5707t, uint64_t* __t5708t, uint64_t* __t5709t) {
  char* __t1585t__unsafe_ptr=0;
  uint64_t __t1585t__pos=0;
  uint64_t __t1585t__length=0;
  __t1585t__unsafe_ptr=unsafe_ptr;
  __t1585t__pos=pos;
  __t1585t__length=length;
  goto __t_return;
  __t_return:
  *__t5707t=__t1585t__unsafe_ptr;
  *__t5708t=__t1585t__pos;
  *__t5709t=__t1585t__length;
}

int vec__t1623t(uint64_t length, char** __t5710t, uint64_t* __t5711t, uint64_t* __t5712t) {
  char* __t1624t__unsafe_ptr=0;
  uint64_t __t1624t__unsafe_size=0;
  uint16_t __t1624t__unsafe_offset=0;
  uint16_t __t1624t__unsafe_align=0;
  char* __t1626t__unsafe_ptr=0;
  uint64_t __t1626t__unsafe_size=0;
  uint16_t __t1626t__unsafe_offset=0;
  uint16_t __t1626t__unsafe_align=0;
  char __t1627t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1628t=0;
  uint64_t __t1629t=0;
  uint64_t __t1630t=0;
  uint64_t __t1631t__=0;
  uint64_t __t1633t=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__pos=0;
  uint64_t __t1634t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1593t(&__t1624t__unsafe_ptr,&__t1624t__unsafe_size,&__t1624t__unsafe_offset,&__t1624t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1624t__unsafe_ptr,&__t1624t__unsafe_size,&__t1624t__unsafe_offset,&__t1624t__unsafe_align,length,&__t1626t__unsafe_ptr,&__t1626t__unsafe_size,&__t1626t__unsafe_offset,&__t1626t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1629t=0;
  __t1630t=8;
  mul__t199t(__t1630t,length,&__t1631t__);
  zero__t504t(__t1626t__unsafe_ptr,__t1629t,__t1631t__);
  __t1633t=0;
  vec__t1583t(__t1626t__unsafe_ptr,__t1633t,length,&__t1634t__unsafe_ptr,&__t1634t__pos,&__t1634t__length);
  __t1634t__unsafe_ptr=__t1626t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1634t__unsafe_ptr,&__t1627t____t515t__);
  if(__t1627t____t515t__){
  free__t503t(&__t1634t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5710t=__t1634t__unsafe_ptr;
  *__t5711t=__t1634t__pos;
  *__t5712t=__t1634t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5713t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5713t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5714t) {
  *__t5714t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5715t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5715t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1728t(char** __t5716t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5717t) {
  char* v__unsafe_ptr=*__t5716t;
  char __t1729t__=0;
  uint64_t __t1730t=0;
  uint64_t __t1731t__=0;
  uint64_t __t1732t__=0;
  char* __t1733t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1729t__);
  if(__t1729t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1730t=8;
  add__t175t(i,v__pos,&__t1731t__);
  mul__t199t(__t1730t,__t1731t__,&__t1732t__);
  add__t505t(v__unsafe_ptr,__t1732t__,&__t1733t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5716t=v__unsafe_ptr;
  *__t5717t=__t1733t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5718t, uint64_t* __t5719t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5718t=from;
  *__t5719t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5720t, uint64_t* __t5721t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5720t=__t473t__from;
  *__t5721t=__t473t__to;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5722t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5722t=z;
}

static inline __attribute__((always_inline)) int vec__t1704t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5723t, uint64_t FLOATS__length, uint64_t length, char** __t5724t, uint64_t* __t5725t, uint64_t* __t5726t) {
  uint64_t FLOATS__pos=*__t5723t;
  uint64_t __t1705t__=0;
  uint64_t __t1706t=0;
  char __t1707t__=0;
  uint64_t __t1708t__=0;
  uint64_t __t1709t=0;
  char __t1710t__=0;
  uint64_t __t1711t__=0;
  char __t1712t__=0;
  uint64_t __t1713t=0;
  uint64_t start=0;
  uint64_t __t1714t__=0;
  char __t1715t__=0;
  uint64_t __t1716t=0;
  uint64_t __t1717t__=0;
  uint64_t __t1718t=0;
  int __t1719t=0;
  uint64_t __t1720t=0;
  uint64_t __t1721t__=0;
  uint64_t __t1722t=0;
  uint64_t __t1723t__=0;
  uint64_t __t1724t__=0;
  char* __t1726t__unsafe_ptr=0;
  uint64_t __t1726t__pos=0;
  uint64_t __t1726t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1705t__);
  __t1706t=8;
  neq__t144t(__t1705t__,__t1706t,&__t1707t__);
  if(__t1707t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1708t__);
  __t1709t=0;
  neq__t144t(__t1708t__,__t1709t,&__t1710t__);
  if(__t1710t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t647t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1711t__);
  gt__t276t(length,__t1711t__,&__t1712t__);
  if(__t1712t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1713t=FLOATS__pos;
  start=__t1713t;
  add__t175t(FLOATS__pos,length,&__t1714t__);
  FLOATS__pos=__t1714t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1715t__);
  if(__t1715t__){
  __t1716t=0;
  add__t175t(length,__t1716t,&__t1717t__);
  FLOATS__pos=__t1717t__;
  __t1718t=0;
  start=__t1718t;
  }
  __t1720t=8;
  mul__t199t(__t1720t,start,&__t1721t__);
  __t1722t=8;
  add__t175t(start,length,&__t1723t__);
  mul__t199t(__t1722t,__t1723t__,&__t1724t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1721t__,__t1724t__);
  vec__t1583t(FLOATS__buf__unsafe_ptr,start,length,&__t1726t__unsafe_ptr,&__t1726t__pos,&__t1726t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5723t=FLOATS__pos;
  *__t5724t=__t1726t__unsafe_ptr;
  *__t5725t=__t1726t__pos;
  *__t5726t=__t1726t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5727t, uint64_t r__to, uint64_t* __t5728t) {
  uint64_t r__from=*__t5727t;
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
  *__t5727t=r__from;
  *__t5728t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1687t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5729t, uint64_t FLOATS__length, uint64_t length, char** __t5730t, uint64_t* __t5731t, uint64_t* __t5732t) {
  uint64_t FLOATS__pos=*__t5729t;
  uint64_t __t1688t__=0;
  uint64_t __t1689t=0;
  char __t1690t__=0;
  uint64_t __t1691t__=0;
  uint64_t __t1692t=0;
  char __t1693t__=0;
  uint64_t __t1694t__=0;
  char __t1695t__=0;
  uint64_t __t1696t=0;
  uint64_t start=0;
  uint64_t __t1697t__=0;
  char __t1698t__=0;
  uint64_t __t1699t=0;
  uint64_t __t1700t__=0;
  uint64_t __t1701t=0;
  int __t1702t=0;
  char* __t1703t__unsafe_ptr=0;
  uint64_t __t1703t__pos=0;
  uint64_t __t1703t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1688t__);
  __t1689t=8;
  neq__t144t(__t1688t__,__t1689t,&__t1690t__);
  if(__t1690t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1691t__);
  __t1692t=0;
  neq__t144t(__t1691t__,__t1692t,&__t1693t__);
  if(__t1693t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t647t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1694t__);
  gt__t276t(length,__t1694t__,&__t1695t__);
  if(__t1695t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1696t=FLOATS__pos;
  start=__t1696t;
  add__t175t(FLOATS__pos,length,&__t1697t__);
  FLOATS__pos=__t1697t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1698t__);
  if(__t1698t__){
  __t1699t=0;
  add__t175t(length,__t1699t,&__t1700t__);
  FLOATS__pos=__t1700t__;
  __t1701t=0;
  start=__t1701t;
  }
  vec__t1583t(FLOATS__buf__unsafe_ptr,start,length,&__t1703t__unsafe_ptr,&__t1703t__pos,&__t1703t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5729t=FLOATS__pos;
  *__t5730t=__t1703t__unsafe_ptr;
  *__t5731t=__t1703t__pos;
  *__t5732t=__t1703t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5733t) {
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
  *__t5733t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1734t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5734t) {
  char __t1735t__=0;
  uint64_t __t1736t=0;
  uint64_t __t1737t__=0;
  uint64_t __t1738t__=0;
  char* __t1739t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1735t__);
  if(__t1735t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1736t=8;
  add__t175t(i,v__pos,&__t1737t__);
  mul__t199t(__t1736t,__t1737t__,&__t1738t__);
  add__t505t(v__unsafe_ptr,__t1738t__,&__t1739t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5734t=__t1739t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1741t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5735t) {
  char* __t1742t__=0;
  double __t1743t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t1742t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1742t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1743t__value,__t1742t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5735t=__t1743t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5736t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5736t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5737t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5737t=z;
}

int add__t1800t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5738t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5739t, uint64_t* __t5740t, uint64_t* __t5741t) {
  uint64_t FLOATS__pos=*__t5738t;
  int __t1801t=0;
  char __t1802t__=0;
  char* __t1804t__unsafe_ptr=0;
  uint64_t __t1804t__pos=0;
  uint64_t __t1804t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1805t=0;
  uint64_t __t1806t__from=0;
  uint64_t __t1806t__to=0;
  char __t1807t=0;
  uint64_t __t1808t__=0;
  uint64_t i=0;
  char* __t1809t__=0;
  char* __t1810t__=0;
  double __t1811t__value=0;
  double __t1812t__=0;
  double __t1813t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1802t__);
  if(__t1802t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1687t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1804t__unsafe_ptr,&__t1804t__pos,&__t1804t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1804t__unsafe_ptr;
  v__pos=__t1804t__pos;
  v__length=__t1804t__length;
  range__t471t(v1__length,&__t1806t__from,&__t1806t__to);
  __t1805t=0;
  while(1){
  __t_complain=get__t478t(__t1806t__from,__t1806t__to,__t1805t,&__t1808t__);
  __t1807t=__t_complain;
  i=__t1808t__;
  __t1807t=__t1807t==0;
  __t1805t=__t1805t+1;
  if(!__t1807t){
  break;
  }
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,i,&__t1809t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1810t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1810t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1811t__value,__t1810t__,8);
  __t_errcode=at__t1741t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1812t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1811t__value,__t1812t__,&__t1813t__);
  if(!__t1809t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1809t__,&__t1813t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5738t=FLOATS__pos;
  *__t5739t=v__unsafe_ptr;
  *__t5740t=v__pos;
  *__t5741t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1740t(double number, uint64_t i, double* __t5742t) {
  goto __t_return;
  __t_return:
  *__t5742t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5743t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5743t=z;
}

static inline __attribute__((always_inline)) int mul__t2018t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5744t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5745t, uint64_t* __t5746t, uint64_t* __t5747t) {
  uint64_t FLOATS__pos=*__t5744t;
  int __t2019t=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__pos=0;
  uint64_t __t2021t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2022t=0;
  uint64_t __t2023t__from=0;
  uint64_t __t2023t__to=0;
  char __t2024t=0;
  uint64_t __t2025t__=0;
  uint64_t i=0;
  char* __t2026t__=0;
  char* __t2027t__=0;
  double __t2028t__value=0;
  double __t2029t__=0;
  double __t2030t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1687t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t2021t__unsafe_ptr,&__t2021t__pos,&__t2021t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2021t__unsafe_ptr;
  v__pos=__t2021t__pos;
  v__length=__t2021t__length;
  range__t471t(v__length,&__t2023t__from,&__t2023t__to);
  __t2022t=0;
  while(1){
  __t_complain=get__t478t(__t2023t__from,__t2023t__to,__t2022t,&__t2025t__);
  __t2024t=__t_complain;
  i=__t2025t__;
  __t2024t=__t2024t==0;
  __t2022t=__t2022t+1;
  if(!__t2024t){
  break;
  }
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,i,&__t2026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1734t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2027t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2027t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2028t__value,__t2027t__,8);
  at__t1740t(v2,i,&__t2029t__);
  mul__t177t(__t2028t__value,__t2029t__,&__t2030t__);
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2026t__,&__t2030t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5744t=FLOATS__pos;
  *__t5745t=v__unsafe_ptr;
  *__t5746t=v__pos;
  *__t5747t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2036t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5748t, uint64_t FLOATS__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5749t, uint64_t* __t5750t, uint64_t* __t5751t) {
  uint64_t FLOATS__pos=*__t5748t;
  char* __t2037t__unsafe_ptr=0;
  uint64_t __t2037t__pos=0;
  uint64_t __t2037t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2018t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2037t__unsafe_ptr,&__t2037t__pos,&__t2037t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5748t=FLOATS__pos;
  *__t5749t=__t2037t__unsafe_ptr;
  *__t5750t=__t2037t__pos;
  *__t5751t=__t2037t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t5601t() {
  char* __t5604t__unsafe_ptr=0;
  uint64_t __t5604t__unsafe_size=0;
  uint16_t __t5604t__unsafe_offset=0;
  uint16_t __t5604t__unsafe_align=0;
  uint64_t __t5605t=0;
  char* __t5606t__unsafe_ptr=0;
  uint64_t __t5606t__unsafe_size=0;
  uint16_t __t5606t__unsafe_offset=0;
  uint16_t __t5606t__unsafe_align=0;
  char __t5607t____t534t__=0;
  char* __t5608t__buf__unsafe_ptr=0;
  uint64_t __t5608t__buf__unsafe_size=0;
  uint16_t __t5608t__buf__unsafe_offset=0;
  uint16_t __t5608t__buf__unsafe_align=0;
  uint64_t __t5608t__pos=0;
  uint64_t __t5608t__length=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  uint64_t FLOATS__length=0;
  char* __t5609t__unsafe_ptr=0;
  uint64_t __t5609t__unsafe_size=0;
  uint16_t __t5609t__unsafe_offset=0;
  uint16_t __t5609t__unsafe_align=0;
  uint64_t __t5610t=0;
  char* __t5611t__unsafe_ptr=0;
  uint64_t __t5611t__unsafe_size=0;
  uint16_t __t5611t__unsafe_offset=0;
  uint16_t __t5611t__unsafe_align=0;
  char __t5612t____t534t__=0;
  char* __t5613t__buf__unsafe_ptr=0;
  uint64_t __t5613t__buf__unsafe_size=0;
  uint16_t __t5613t__buf__unsafe_offset=0;
  uint16_t __t5613t__buf__unsafe_align=0;
  uint64_t __t5613t__pos=0;
  uint64_t __t5613t__length=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t FLOATS2__length=0;
  uint64_t __t5615t=0;
  char* __t5616t__unsafe_ptr=0;
  uint64_t __t5616t__pos=0;
  uint64_t __t5616t__length=0;
  char __t5617t____t1627t____t515t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t5619t=0;
  char* __t5620t__unsafe_ptr=0;
  uint64_t __t5620t__pos=0;
  uint64_t __t5620t__length=0;
  char __t5621t____t1627t____t515t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t5622t=0;
  char* __t5623t__=0;
  double __t5624t=0;
  uint64_t __t5625t=0;
  char* __t5626t__=0;
  double __t5627t=0;
  uint64_t __t5628t=0;
  uint64_t __t5629t__from=0;
  uint64_t __t5629t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t5630t=0;
  char* __t5631t__unsafe_ptr=0;
  uint64_t __t5631t__pos=0;
  uint64_t __t5631t__length=0;
  char* __t5632t__unsafe_ptr=0;
  uint64_t __t5632t__pos=0;
  uint64_t __t5632t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t5633t=0;
  uint64_t __t5634t__=0;
  uint64_t i=0;
  double __t5635t=0;
  char* __t5636t__unsafe_ptr=0;
  uint64_t __t5636t__pos=0;
  uint64_t __t5636t__length=0;
  char* __t5637t__unsafe_ptr=0;
  uint64_t __t5637t__pos=0;
  uint64_t __t5637t__length=0;
  char* __t5638t__unsafe_ptr=0;
  uint64_t __t5638t__pos=0;
  uint64_t __t5638t__length=0;
  uint64_t __t5639t=0;
  char* __t5640t__=0;
  double __t5641t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5602t(&__t5604t__unsafe_ptr,&__t5604t__unsafe_size,&__t5604t__unsafe_offset,&__t5604t__unsafe_align);
  __t5605t=200;
  __t_errcode=alloc__t532t(&__t5604t__unsafe_ptr,&__t5604t__unsafe_size,&__t5604t__unsafe_offset,&__t5604t__unsafe_align,__t5605t,&__t5606t__unsafe_ptr,&__t5606t__unsafe_size,&__t5606t__unsafe_offset,&__t5606t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1605t(&__t5606t__unsafe_ptr,&__t5606t__unsafe_size,&__t5606t__unsafe_offset,&__t5606t__unsafe_align,&__t5608t__buf__unsafe_ptr,&__t5608t__buf__unsafe_size,&__t5608t__buf__unsafe_offset,&__t5608t__buf__unsafe_align,&__t5608t__pos,&__t5608t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t5602t(&__t5609t__unsafe_ptr,&__t5609t__unsafe_size,&__t5609t__unsafe_offset,&__t5609t__unsafe_align);
  __t5610t=200;
  __t_errcode=alloc__t532t(&__t5609t__unsafe_ptr,&__t5609t__unsafe_size,&__t5609t__unsafe_offset,&__t5609t__unsafe_align,__t5610t,&__t5611t__unsafe_ptr,&__t5611t__unsafe_size,&__t5611t__unsafe_offset,&__t5611t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1605t(&__t5611t__unsafe_ptr,&__t5611t__unsafe_size,&__t5611t__unsafe_offset,&__t5611t__unsafe_align,&__t5613t__buf__unsafe_ptr,&__t5613t__buf__unsafe_size,&__t5613t__buf__unsafe_offset,&__t5613t__buf__unsafe_align,&__t5613t__pos,&__t5613t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t673t();
  __t5615t=10;
  __t_errcode=vec__t1623t(__t5615t,&__t5616t__unsafe_ptr,&__t5616t__pos,&__t5616t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t5616t__unsafe_ptr;
  v1__pos=__t5616t__pos;
  v1__length=__t5616t__length;
  new__t673t();
  __t5619t=10;
  __t_errcode=vec__t1623t(__t5619t,&__t5620t__unsafe_ptr,&__t5620t__pos,&__t5620t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t5620t__unsafe_ptr;
  v2__pos=__t5620t__pos;
  v2__length=__t5620t__length;
  __t5622t=0;
  __t_errcode=mutget__t1728t(&v1__unsafe_ptr,v1__pos,v1__length,__t5622t,&__t5623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5624t=1.0;
  if(!__t5623t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5623t__,&__t5624t,8);
  __t5625t=0;
  __t_errcode=mutget__t1728t(&v2__unsafe_ptr,v2__pos,v2__length,__t5625t,&__t5626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5627t=2.0;
  if(!__t5626t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5626t__,&__t5627t,8);
  __t5628t=5;
  range__t471t(__t5628t,&__t5629t__from,&__t5629t__to);
  it__from=__t5629t__from;
  it__to=__t5629t__to;
  __t5630t=10;
  __t_errcode=vec__t1704t(__t5608t__buf__unsafe_ptr,__t5608t__buf__unsafe_size,__t5608t__buf__unsafe_offset,__t5608t__buf__unsafe_align,&__t5608t__pos,__t5608t__length,__t5630t,&__t5631t__unsafe_ptr,&__t5631t__pos,&__t5631t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5632t__pos=__t5631t__pos;
  __t5632t__length=__t5631t__length;
  v__pos=__t5632t__pos;
  v__length=__t5632t__length;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t5634t__);
  __t5633t=__t_complain;
  i=__t5634t__;
  __t5633t=__t5633t==0;
  if(!__t5633t){
  break;
  }
  __t5635t=2.0;
  __t_errcode=add__t1800t(__t5608t__buf__unsafe_ptr,__t5608t__buf__unsafe_size,__t5608t__buf__unsafe_offset,__t5608t__buf__unsafe_align,&__t5608t__pos,__t5608t__length,v2__unsafe_ptr,v2__pos,v2__length,__t5608t__buf__unsafe_ptr,v__pos,v__length,&__t5636t__unsafe_ptr,&__t5636t__pos,&__t5636t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1800t(__t5608t__buf__unsafe_ptr,__t5608t__buf__unsafe_size,__t5608t__buf__unsafe_offset,__t5608t__buf__unsafe_align,&__t5608t__pos,__t5608t__length,v1__unsafe_ptr,v1__pos,v1__length,__t5608t__buf__unsafe_ptr,__t5636t__pos,__t5636t__length,&__t5637t__unsafe_ptr,&__t5637t__pos,&__t5637t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2036t(__t5608t__buf__unsafe_ptr,__t5608t__buf__unsafe_size,__t5608t__buf__unsafe_offset,__t5608t__buf__unsafe_align,&__t5608t__pos,__t5608t__length,__t5635t,__t5608t__buf__unsafe_ptr,__t5637t__pos,__t5637t__length,&__t5638t__unsafe_ptr,&__t5638t__pos,&__t5638t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t5638t__pos;
  v__length=__t5638t__length;
  }
  __t5639t=0;
  __t_errcode=get__t1734t(__t5608t__buf__unsafe_ptr,v__pos,v__length,__t5639t,&__t5640t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5640t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5641t__value,__t5640t__,8);
  print__t385t(__t5641t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5620t__unsafe_ptr,&__t5621t____t1627t____t515t__);
  if(__t5621t____t1627t____t515t__){
  free__t503t(&__t5620t__unsafe_ptr);
  }
  exists__t447t(__t5616t__unsafe_ptr,&__t5617t____t1627t____t515t__);
  if(__t5617t____t1627t____t515t__){
  free__t503t(&__t5616t__unsafe_ptr);
  }
  exists__t447t(__t5611t__unsafe_ptr,&__t5612t____t534t__);
  if(__t5612t____t534t__){
  free__t503t(&__t5611t__unsafe_ptr);
  }
  exists__t447t(__t5606t__unsafe_ptr,&__t5607t____t534t__);
  if(__t5607t____t534t__){
  free__t503t(&__t5606t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1554t(int64_t value, const char** __t5752t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5752t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t5643t() {
  char __t5645t=0;
  char __t5647t=0;
  int64_t __t5648t=0;
  int64_t error=0;
  const char* __t5649t__=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=safe_main__t5601t();
  __t5645t=__t_complain;
  __t5645t=__t5645t==0;
  __t5648t=__t_complain;
  __t5647t=(__t_complain==0);
  __t_complain=0;
  error=__t5648t;
  __t5647t=__t5647t==0;
  if(__t5647t){
  cstr__t1554t(error,&__t5649t__);
  print__t380t(__t5649t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5643t();return 0;}