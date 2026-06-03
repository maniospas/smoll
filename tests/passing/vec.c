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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5598t(char** __t5647t, uint64_t* __t5648t, uint16_t* __t5649t, uint16_t* __t5650t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5647t=unsafe_ptr;
  *__t5648t=unsafe_size;
  *__t5649t=unsafe_offset;
  *__t5650t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5651t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5651t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5652t) {
  char* allocated=*__t5652t;
  if(allocated){
  free(allocated);
  }
  *__t5652t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5653t) {
  int value=0;
  *__t5653t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5654t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5654t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5655t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5655t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5656t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5656t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5657t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5657t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5658t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5658t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5659t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5659t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5660t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5660t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5661t) {
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
  *__t5661t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5662t, uint64_t* __t5663t, uint16_t* __t5664t, uint16_t* __t5665t, uint64_t size, char** __t5666t, uint64_t* __t5667t, uint16_t* __t5668t, uint16_t* __t5669t) {
  char* buffer__unsafe_ptr=*__t5662t;
  uint64_t buffer__unsafe_size=*__t5663t;
  uint16_t buffer__unsafe_offset=*__t5664t;
  uint16_t buffer__unsafe_align=*__t5665t;
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
  *__t5662t=buffer__unsafe_ptr;
  *__t5663t=buffer__unsafe_size;
  *__t5664t=buffer__unsafe_offset;
  *__t5665t=buffer__unsafe_align;
  *__t5666t=buffer__unsafe_ptr;
  *__t5667t=buffer__unsafe_size;
  *__t5668t=buffer__unsafe_offset;
  *__t5669t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5670t) {
  goto __t_return;
  __t_return:
  *__t5670t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5671t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5671t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5672t) {
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
  *__t5672t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5673t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5673t=z;
}

static inline __attribute__((always_inline)) void circular__t680t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t5674t, uint64_t length, char** __t5675t, uint64_t* __t5676t, uint16_t* __t5677t, uint16_t* __t5678t, uint64_t* __t5679t, uint64_t* __t5680t) {
  uint64_t pos=*__t5674t;
  goto __t_return;
  __t_return:
  *__t5674t=pos;
  *__t5675t=buf__unsafe_ptr;
  *__t5676t=buf__unsafe_size;
  *__t5677t=buf__unsafe_offset;
  *__t5678t=buf__unsafe_align;
  *__t5679t=pos;
  *__t5680t=length;
}

static inline __attribute__((always_inline)) int circular__t1601t(char** __t5681t, uint64_t* __t5682t, uint16_t* __t5683t, uint16_t* __t5684t, char** __t5685t, uint64_t* __t5686t, uint16_t* __t5687t, uint16_t* __t5688t, uint64_t* __t5689t, uint64_t* __t5690t) {
  char* buf__unsafe_ptr=*__t5681t;
  uint64_t buf__unsafe_size=*__t5682t;
  uint16_t buf__unsafe_offset=*__t5683t;
  uint16_t buf__unsafe_align=*__t5684t;
  int __t1602t=0;
  int __t1603t=0;
  uint64_t __t1604t=0;
  uint64_t __t1605t=0;
  uint64_t pos=0;
  int __t1606t=0;
  uint64_t __t1607t__=0;
  uint64_t __t1608t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1609t__=0;
  char* __t1610t__buf__unsafe_ptr=0;
  uint64_t __t1610t__buf__unsafe_size=0;
  uint16_t __t1610t__buf__unsafe_offset=0;
  uint16_t __t1610t__buf__unsafe_align=0;
  uint64_t __t1610t__pos=0;
  uint64_t __t1610t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1604t=0;
  __t1605t=__t1604t;
  pos=__t1605t;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1607t__);
  __t_errcode=sub__t352t(__t1607t__,pos,&__t1608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1608t__;
  start=pos;
  add__t175t(pos,length,&__t1609t__);
  pos=__t1609t__;
  circular__t680t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1610t__buf__unsafe_ptr,&__t1610t__buf__unsafe_size,&__t1610t__buf__unsafe_offset,&__t1610t__buf__unsafe_align,&__t1610t__pos,&__t1610t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5681t=buf__unsafe_ptr;
  *__t5682t=buf__unsafe_size;
  *__t5683t=buf__unsafe_offset;
  *__t5684t=buf__unsafe_align;
  *__t5685t=__t1610t__buf__unsafe_ptr;
  *__t5686t=__t1610t__buf__unsafe_size;
  *__t5687t=__t1610t__buf__unsafe_offset;
  *__t5688t=__t1610t__buf__unsafe_align;
  *__t5689t=__t1610t__pos;
  *__t5690t=__t1610t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1589t(char** __t5691t, uint64_t* __t5692t, uint16_t* __t5693t, uint16_t* __t5694t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5691t=unsafe_ptr;
  *__t5692t=unsafe_size;
  *__t5693t=unsafe_offset;
  *__t5694t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5695t, uint64_t* __t5696t, uint16_t* __t5697t, uint16_t* __t5698t, uint64_t size, char** __t5699t, uint64_t* __t5700t, uint16_t* __t5701t, uint16_t* __t5702t) {
  char* buffer__unsafe_ptr=*__t5695t;
  uint64_t buffer__unsafe_size=*__t5696t;
  uint16_t buffer__unsafe_offset=*__t5697t;
  uint16_t buffer__unsafe_align=*__t5698t;
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
  *__t5695t=buffer__unsafe_ptr;
  *__t5696t=buffer__unsafe_size;
  *__t5697t=buffer__unsafe_offset;
  *__t5698t=buffer__unsafe_align;
  *__t5699t=buffer__unsafe_ptr;
  *__t5700t=buffer__unsafe_size;
  *__t5701t=buffer__unsafe_offset;
  *__t5702t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t1579t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5703t, uint64_t* __t5704t, uint64_t* __t5705t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__pos=0;
  uint64_t __t1581t__length=0;
  __t1581t__unsafe_ptr=unsafe_ptr;
  __t1581t__pos=pos;
  __t1581t__length=length;
  goto __t_return;
  __t_return:
  *__t5703t=__t1581t__unsafe_ptr;
  *__t5704t=__t1581t__pos;
  *__t5705t=__t1581t__length;
}

int vec__t1619t(uint64_t length, char** __t5706t, uint64_t* __t5707t, uint64_t* __t5708t) {
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__unsafe_size=0;
  uint16_t __t1620t__unsafe_offset=0;
  uint16_t __t1620t__unsafe_align=0;
  char* __t1622t__unsafe_ptr=0;
  uint64_t __t1622t__unsafe_size=0;
  uint16_t __t1622t__unsafe_offset=0;
  uint16_t __t1622t__unsafe_align=0;
  char __t1623t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1624t=0;
  uint64_t __t1625t=0;
  uint64_t __t1626t=0;
  uint64_t __t1627t__=0;
  uint64_t __t1629t=0;
  char* __t1630t__unsafe_ptr=0;
  uint64_t __t1630t__pos=0;
  uint64_t __t1630t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1589t(&__t1620t__unsafe_ptr,&__t1620t__unsafe_size,&__t1620t__unsafe_offset,&__t1620t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1620t__unsafe_ptr,&__t1620t__unsafe_size,&__t1620t__unsafe_offset,&__t1620t__unsafe_align,length,&__t1622t__unsafe_ptr,&__t1622t__unsafe_size,&__t1622t__unsafe_offset,&__t1622t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1625t=0;
  __t1626t=8;
  mul__t199t(__t1626t,length,&__t1627t__);
  zero__t504t(__t1622t__unsafe_ptr,__t1625t,__t1627t__);
  __t1629t=0;
  vec__t1579t(__t1622t__unsafe_ptr,__t1629t,length,&__t1630t__unsafe_ptr,&__t1630t__pos,&__t1630t__length);
  __t1630t__unsafe_ptr=__t1622t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1630t__unsafe_ptr,&__t1623t____t515t__);
  if(__t1623t____t515t__){
  free__t503t(&__t1630t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5706t=__t1630t__unsafe_ptr;
  *__t5707t=__t1630t__pos;
  *__t5708t=__t1630t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5709t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5709t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5710t) {
  *__t5710t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5711t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5711t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1724t(char** __t5712t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5713t) {
  char* v__unsafe_ptr=*__t5712t;
  char __t1725t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t__=0;
  char* __t1729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1725t__);
  if(__t1725t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1726t=8;
  add__t175t(i,v__pos,&__t1727t__);
  mul__t199t(__t1726t,__t1727t__,&__t1728t__);
  add__t505t(v__unsafe_ptr,__t1728t__,&__t1729t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5712t=v__unsafe_ptr;
  *__t5713t=__t1729t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5714t, uint64_t* __t5715t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5714t=from;
  *__t5715t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5716t, uint64_t* __t5717t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5716t=__t473t__from;
  *__t5717t=__t473t__to;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5718t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5718t=z;
}

static inline __attribute__((always_inline)) int vec__t1700t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5719t, uint64_t FLOATS__length, uint64_t length, char** __t5720t, uint64_t* __t5721t, uint64_t* __t5722t) {
  uint64_t FLOATS__pos=*__t5719t;
  uint64_t __t1701t__=0;
  uint64_t __t1702t=0;
  char __t1703t__=0;
  uint64_t __t1704t__=0;
  uint64_t __t1705t=0;
  char __t1706t__=0;
  uint64_t __t1707t__=0;
  char __t1708t__=0;
  uint64_t __t1709t=0;
  uint64_t start=0;
  uint64_t __t1710t__=0;
  char __t1711t__=0;
  uint64_t __t1712t=0;
  uint64_t __t1713t__=0;
  uint64_t __t1714t=0;
  int __t1715t=0;
  uint64_t __t1716t=0;
  uint64_t __t1717t__=0;
  uint64_t __t1718t=0;
  uint64_t __t1719t__=0;
  uint64_t __t1720t__=0;
  char* __t1722t__unsafe_ptr=0;
  uint64_t __t1722t__pos=0;
  uint64_t __t1722t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1701t__);
  __t1702t=8;
  neq__t144t(__t1701t__,__t1702t,&__t1703t__);
  if(__t1703t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1704t__);
  __t1705t=0;
  neq__t144t(__t1704t__,__t1705t,&__t1706t__);
  if(__t1706t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1707t__);
  gt__t276t(length,__t1707t__,&__t1708t__);
  if(__t1708t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1709t=FLOATS__pos;
  start=__t1709t;
  add__t175t(FLOATS__pos,length,&__t1710t__);
  FLOATS__pos=__t1710t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1711t__);
  if(__t1711t__){
  __t1712t=0;
  add__t175t(length,__t1712t,&__t1713t__);
  FLOATS__pos=__t1713t__;
  __t1714t=0;
  start=__t1714t;
  }
  __t1716t=8;
  mul__t199t(__t1716t,start,&__t1717t__);
  __t1718t=8;
  add__t175t(start,length,&__t1719t__);
  mul__t199t(__t1718t,__t1719t__,&__t1720t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1717t__,__t1720t__);
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1722t__unsafe_ptr,&__t1722t__pos,&__t1722t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5719t=FLOATS__pos;
  *__t5720t=__t1722t__unsafe_ptr;
  *__t5721t=__t1722t__pos;
  *__t5722t=__t1722t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5723t, uint64_t r__to, uint64_t* __t5724t) {
  uint64_t r__from=*__t5723t;
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
  *__t5723t=r__from;
  *__t5724t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1683t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5725t, uint64_t FLOATS__length, uint64_t length, char** __t5726t, uint64_t* __t5727t, uint64_t* __t5728t) {
  uint64_t FLOATS__pos=*__t5725t;
  uint64_t __t1684t__=0;
  uint64_t __t1685t=0;
  char __t1686t__=0;
  uint64_t __t1687t__=0;
  uint64_t __t1688t=0;
  char __t1689t__=0;
  uint64_t __t1690t__=0;
  char __t1691t__=0;
  uint64_t __t1692t=0;
  uint64_t start=0;
  uint64_t __t1693t__=0;
  char __t1694t__=0;
  uint64_t __t1695t=0;
  uint64_t __t1696t__=0;
  uint64_t __t1697t=0;
  int __t1698t=0;
  char* __t1699t__unsafe_ptr=0;
  uint64_t __t1699t__pos=0;
  uint64_t __t1699t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1684t__);
  __t1685t=8;
  neq__t144t(__t1684t__,__t1685t,&__t1686t__);
  if(__t1686t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1687t__);
  __t1688t=0;
  neq__t144t(__t1687t__,__t1688t,&__t1689t__);
  if(__t1689t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1690t__);
  gt__t276t(length,__t1690t__,&__t1691t__);
  if(__t1691t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1692t=FLOATS__pos;
  start=__t1692t;
  add__t175t(FLOATS__pos,length,&__t1693t__);
  FLOATS__pos=__t1693t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1694t__);
  if(__t1694t__){
  __t1695t=0;
  add__t175t(length,__t1695t,&__t1696t__);
  FLOATS__pos=__t1696t__;
  __t1697t=0;
  start=__t1697t;
  }
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1699t__unsafe_ptr,&__t1699t__pos,&__t1699t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5725t=FLOATS__pos;
  *__t5726t=__t1699t__unsafe_ptr;
  *__t5727t=__t1699t__pos;
  *__t5728t=__t1699t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5729t) {
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
  *__t5729t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1730t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5730t) {
  char __t1731t__=0;
  uint64_t __t1732t=0;
  uint64_t __t1733t__=0;
  uint64_t __t1734t__=0;
  char* __t1735t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1731t__);
  if(__t1731t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1732t=8;
  add__t175t(i,v__pos,&__t1733t__);
  mul__t199t(__t1732t,__t1733t__,&__t1734t__);
  add__t505t(v__unsafe_ptr,__t1734t__,&__t1735t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5730t=__t1735t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1737t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5731t) {
  char* __t1738t__=0;
  double __t1739t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t1738t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1738t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1739t__value,__t1738t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5731t=__t1739t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5732t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5732t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5733t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5733t=z;
}

int add__t1796t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5734t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5735t, uint64_t* __t5736t, uint64_t* __t5737t) {
  uint64_t FLOATS__pos=*__t5734t;
  int __t1797t=0;
  char __t1798t__=0;
  char* __t1800t__unsafe_ptr=0;
  uint64_t __t1800t__pos=0;
  uint64_t __t1800t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1801t=0;
  uint64_t __t1802t__from=0;
  uint64_t __t1802t__to=0;
  char __t1803t=0;
  uint64_t __t1804t__=0;
  uint64_t i=0;
  char* __t1805t__=0;
  char* __t1806t__=0;
  double __t1807t__value=0;
  double __t1808t__=0;
  double __t1809t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1798t__);
  if(__t1798t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1683t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1800t__unsafe_ptr,&__t1800t__pos,&__t1800t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1800t__unsafe_ptr;
  v__pos=__t1800t__pos;
  v__length=__t1800t__length;
  range__t471t(v1__length,&__t1802t__from,&__t1802t__to);
  __t1801t=0;
  while(1){
  __t_complain=get__t478t(__t1802t__from,__t1802t__to,__t1801t,&__t1804t__);
  __t1803t=__t_complain;
  i=__t1804t__;
  __t1803t=__t1803t==0;
  __t1801t=__t1801t+1;
  if(!__t1803t){
  break;
  }
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,i,&__t1805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1806t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1806t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1807t__value,__t1806t__,8);
  __t_errcode=at__t1737t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1808t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1807t__value,__t1808t__,&__t1809t__);
  if(!__t1805t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1805t__,&__t1809t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5734t=FLOATS__pos;
  *__t5735t=v__unsafe_ptr;
  *__t5736t=v__pos;
  *__t5737t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1736t(double number, uint64_t i, double* __t5738t) {
  goto __t_return;
  __t_return:
  *__t5738t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5739t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5739t=z;
}

static inline __attribute__((always_inline)) int mul__t2014t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5740t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5741t, uint64_t* __t5742t, uint64_t* __t5743t) {
  uint64_t FLOATS__pos=*__t5740t;
  int __t2015t=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__pos=0;
  uint64_t __t2017t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2018t=0;
  uint64_t __t2019t__from=0;
  uint64_t __t2019t__to=0;
  char __t2020t=0;
  uint64_t __t2021t__=0;
  uint64_t i=0;
  char* __t2022t__=0;
  char* __t2023t__=0;
  double __t2024t__value=0;
  double __t2025t__=0;
  double __t2026t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1683t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t2017t__unsafe_ptr,&__t2017t__pos,&__t2017t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2017t__unsafe_ptr;
  v__pos=__t2017t__pos;
  v__length=__t2017t__length;
  range__t471t(v__length,&__t2019t__from,&__t2019t__to);
  __t2018t=0;
  while(1){
  __t_complain=get__t478t(__t2019t__from,__t2019t__to,__t2018t,&__t2021t__);
  __t2020t=__t_complain;
  i=__t2021t__;
  __t2020t=__t2020t==0;
  __t2018t=__t2018t+1;
  if(!__t2020t){
  break;
  }
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,i,&__t2022t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1730t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2023t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2024t__value,__t2023t__,8);
  at__t1736t(v2,i,&__t2025t__);
  mul__t177t(__t2024t__value,__t2025t__,&__t2026t__);
  if(!__t2022t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2022t__,&__t2026t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5740t=FLOATS__pos;
  *__t5741t=v__unsafe_ptr;
  *__t5742t=v__pos;
  *__t5743t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2032t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t5744t, uint64_t FLOATS__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5745t, uint64_t* __t5746t, uint64_t* __t5747t) {
  uint64_t FLOATS__pos=*__t5744t;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__pos=0;
  uint64_t __t2033t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2014t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2033t__unsafe_ptr,&__t2033t__pos,&__t2033t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5744t=FLOATS__pos;
  *__t5745t=__t2033t__unsafe_ptr;
  *__t5746t=__t2033t__pos;
  *__t5747t=__t2033t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t5597t() {
  char* __t5600t__unsafe_ptr=0;
  uint64_t __t5600t__unsafe_size=0;
  uint16_t __t5600t__unsafe_offset=0;
  uint16_t __t5600t__unsafe_align=0;
  uint64_t __t5601t=0;
  char* __t5602t__unsafe_ptr=0;
  uint64_t __t5602t__unsafe_size=0;
  uint16_t __t5602t__unsafe_offset=0;
  uint16_t __t5602t__unsafe_align=0;
  char __t5603t____t534t__=0;
  char* __t5604t__buf__unsafe_ptr=0;
  uint64_t __t5604t__buf__unsafe_size=0;
  uint16_t __t5604t__buf__unsafe_offset=0;
  uint16_t __t5604t__buf__unsafe_align=0;
  uint64_t __t5604t__pos=0;
  uint64_t __t5604t__length=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  uint64_t FLOATS__length=0;
  char* __t5605t__unsafe_ptr=0;
  uint64_t __t5605t__unsafe_size=0;
  uint16_t __t5605t__unsafe_offset=0;
  uint16_t __t5605t__unsafe_align=0;
  uint64_t __t5606t=0;
  char* __t5607t__unsafe_ptr=0;
  uint64_t __t5607t__unsafe_size=0;
  uint16_t __t5607t__unsafe_offset=0;
  uint16_t __t5607t__unsafe_align=0;
  char __t5608t____t534t__=0;
  char* __t5609t__buf__unsafe_ptr=0;
  uint64_t __t5609t__buf__unsafe_size=0;
  uint16_t __t5609t__buf__unsafe_offset=0;
  uint16_t __t5609t__buf__unsafe_align=0;
  uint64_t __t5609t__pos=0;
  uint64_t __t5609t__length=0;
  char* FLOATS2__buf__unsafe_ptr=0;
  uint64_t FLOATS2__buf__unsafe_size=0;
  uint16_t FLOATS2__buf__unsafe_offset=0;
  uint16_t FLOATS2__buf__unsafe_align=0;
  uint64_t FLOATS2__pos=0;
  uint64_t FLOATS2__length=0;
  uint64_t __t5611t=0;
  char* __t5612t__unsafe_ptr=0;
  uint64_t __t5612t__pos=0;
  uint64_t __t5612t__length=0;
  char __t5613t____t1623t____t515t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t5615t=0;
  char* __t5616t__unsafe_ptr=0;
  uint64_t __t5616t__pos=0;
  uint64_t __t5616t__length=0;
  char __t5617t____t1623t____t515t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t5618t=0;
  char* __t5619t__=0;
  double __t5620t=0;
  uint64_t __t5621t=0;
  char* __t5622t__=0;
  double __t5623t=0;
  uint64_t __t5624t=0;
  uint64_t __t5625t__from=0;
  uint64_t __t5625t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t5626t=0;
  char* __t5627t__unsafe_ptr=0;
  uint64_t __t5627t__pos=0;
  uint64_t __t5627t__length=0;
  char* __t5628t__unsafe_ptr=0;
  uint64_t __t5628t__pos=0;
  uint64_t __t5628t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t5629t=0;
  uint64_t __t5630t__=0;
  uint64_t i=0;
  double __t5631t=0;
  char* __t5632t__unsafe_ptr=0;
  uint64_t __t5632t__pos=0;
  uint64_t __t5632t__length=0;
  char* __t5633t__unsafe_ptr=0;
  uint64_t __t5633t__pos=0;
  uint64_t __t5633t__length=0;
  char* __t5634t__unsafe_ptr=0;
  uint64_t __t5634t__pos=0;
  uint64_t __t5634t__length=0;
  uint64_t __t5635t=0;
  char* __t5636t__=0;
  double __t5637t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5598t(&__t5600t__unsafe_ptr,&__t5600t__unsafe_size,&__t5600t__unsafe_offset,&__t5600t__unsafe_align);
  __t5601t=200;
  __t_errcode=alloc__t532t(&__t5600t__unsafe_ptr,&__t5600t__unsafe_size,&__t5600t__unsafe_offset,&__t5600t__unsafe_align,__t5601t,&__t5602t__unsafe_ptr,&__t5602t__unsafe_size,&__t5602t__unsafe_offset,&__t5602t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1601t(&__t5602t__unsafe_ptr,&__t5602t__unsafe_size,&__t5602t__unsafe_offset,&__t5602t__unsafe_align,&__t5604t__buf__unsafe_ptr,&__t5604t__buf__unsafe_size,&__t5604t__buf__unsafe_offset,&__t5604t__buf__unsafe_align,&__t5604t__pos,&__t5604t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t5598t(&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align);
  __t5606t=200;
  __t_errcode=alloc__t532t(&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align,__t5606t,&__t5607t__unsafe_ptr,&__t5607t__unsafe_size,&__t5607t__unsafe_offset,&__t5607t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1601t(&__t5607t__unsafe_ptr,&__t5607t__unsafe_size,&__t5607t__unsafe_offset,&__t5607t__unsafe_align,&__t5609t__buf__unsafe_ptr,&__t5609t__buf__unsafe_size,&__t5609t__buf__unsafe_offset,&__t5609t__buf__unsafe_align,&__t5609t__pos,&__t5609t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t669t();
  __t5611t=10;
  __t_errcode=vec__t1619t(__t5611t,&__t5612t__unsafe_ptr,&__t5612t__pos,&__t5612t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t5612t__unsafe_ptr;
  v1__pos=__t5612t__pos;
  v1__length=__t5612t__length;
  new__t669t();
  __t5615t=10;
  __t_errcode=vec__t1619t(__t5615t,&__t5616t__unsafe_ptr,&__t5616t__pos,&__t5616t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t5616t__unsafe_ptr;
  v2__pos=__t5616t__pos;
  v2__length=__t5616t__length;
  __t5618t=0;
  __t_errcode=mutget__t1724t(&v1__unsafe_ptr,v1__pos,v1__length,__t5618t,&__t5619t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5620t=1.0;
  if(!__t5619t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5619t__,&__t5620t,8);
  __t5621t=0;
  __t_errcode=mutget__t1724t(&v2__unsafe_ptr,v2__pos,v2__length,__t5621t,&__t5622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5623t=2.0;
  if(!__t5622t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5622t__,&__t5623t,8);
  __t5624t=5;
  range__t471t(__t5624t,&__t5625t__from,&__t5625t__to);
  it__from=__t5625t__from;
  it__to=__t5625t__to;
  __t5626t=10;
  __t_errcode=vec__t1700t(__t5604t__buf__unsafe_ptr,__t5604t__buf__unsafe_size,__t5604t__buf__unsafe_offset,__t5604t__buf__unsafe_align,&__t5604t__pos,__t5604t__length,__t5626t,&__t5627t__unsafe_ptr,&__t5627t__pos,&__t5627t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5628t__pos=__t5627t__pos;
  __t5628t__length=__t5627t__length;
  v__pos=__t5628t__pos;
  v__length=__t5628t__length;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t5630t__);
  __t5629t=__t_complain;
  i=__t5630t__;
  __t5629t=__t5629t==0;
  if(!__t5629t){
  break;
  }
  __t5631t=2.0;
  __t_errcode=add__t1796t(__t5604t__buf__unsafe_ptr,__t5604t__buf__unsafe_size,__t5604t__buf__unsafe_offset,__t5604t__buf__unsafe_align,&__t5604t__pos,__t5604t__length,v2__unsafe_ptr,v2__pos,v2__length,__t5604t__buf__unsafe_ptr,v__pos,v__length,&__t5632t__unsafe_ptr,&__t5632t__pos,&__t5632t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1796t(__t5604t__buf__unsafe_ptr,__t5604t__buf__unsafe_size,__t5604t__buf__unsafe_offset,__t5604t__buf__unsafe_align,&__t5604t__pos,__t5604t__length,v1__unsafe_ptr,v1__pos,v1__length,__t5604t__buf__unsafe_ptr,__t5632t__pos,__t5632t__length,&__t5633t__unsafe_ptr,&__t5633t__pos,&__t5633t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2032t(__t5604t__buf__unsafe_ptr,__t5604t__buf__unsafe_size,__t5604t__buf__unsafe_offset,__t5604t__buf__unsafe_align,&__t5604t__pos,__t5604t__length,__t5631t,__t5604t__buf__unsafe_ptr,__t5633t__pos,__t5633t__length,&__t5634t__unsafe_ptr,&__t5634t__pos,&__t5634t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t5634t__pos;
  v__length=__t5634t__length;
  }
  __t5635t=0;
  __t_errcode=get__t1730t(__t5604t__buf__unsafe_ptr,v__pos,v__length,__t5635t,&__t5636t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5636t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5637t__value,__t5636t__,8);
  print__t385t(__t5637t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5616t__unsafe_ptr,&__t5617t____t1623t____t515t__);
  if(__t5617t____t1623t____t515t__){
  free__t503t(&__t5616t__unsafe_ptr);
  }
  exists__t447t(__t5612t__unsafe_ptr,&__t5613t____t1623t____t515t__);
  if(__t5613t____t1623t____t515t__){
  free__t503t(&__t5612t__unsafe_ptr);
  }
  exists__t447t(__t5607t__unsafe_ptr,&__t5608t____t534t__);
  if(__t5608t____t534t__){
  free__t503t(&__t5607t__unsafe_ptr);
  }
  exists__t447t(__t5602t__unsafe_ptr,&__t5603t____t534t__);
  if(__t5603t____t534t__){
  free__t503t(&__t5602t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1550t(int64_t value, const char** __t5748t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5748t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t5639t() {
  char __t5641t=0;
  char __t5643t=0;
  int64_t __t5644t=0;
  int64_t error=0;
  const char* __t5645t__=0;
  int __t_complain=0;
  console__t366t();
  __t_complain=safe_main__t5597t();
  __t5641t=__t_complain;
  __t5641t=__t5641t==0;
  __t5644t=__t_complain;
  __t5643t=(__t_complain==0);
  __t_complain=0;
  error=__t5644t;
  __t5643t=__t5643t==0;
  if(__t5643t){
  cstr__t1550t(error,&__t5645t__);
  print__t380t(__t5645t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5639t();return 0;}