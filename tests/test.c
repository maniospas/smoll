#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t399t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t382t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void get_shared____t_buffer____buffer__t2190t(char** __t2239t, uint64_t* __t2240t, uint16_t* __t2241t, uint16_t* __t2242t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=16;
  *__t2239t=unsafe_ptr;
  *__t2240t=unsafe_size;
  *__t2241t=unsafe_offset;
  *__t2242t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t608t(char* x, char* __t2243t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2243t=z;
}

static inline __attribute__((always_inline)) void free__t678t(char** __t2244t) {
  char* allocated=*__t2244t;
  if(allocated){
  free(allocated);
  }
  *__t2244t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2245t) {
  int value=0;
  *__t2245t=value;
}

static inline __attribute__((always_inline)) void not__t44t(int __t_anon0, int* __t2246t) {
  int __t45t__=0;
  false__t14t(&__t45t__);
  goto __t_return;
  __t_return:
  *__t2246t=__t45t__;
}

static inline __attribute__((always_inline)) void is_different__t110t(uint64_t x, uint64_t y, int* __t2247t) {
  int __t112t=0;
  int __t113t__=0;
  not__t44t(__t112t,&__t113t__);
  goto __t_return;
  __t_return:
  *__t2247t=__t113t__;
}

static inline __attribute__((always_inline)) void eq__t136t(uint64_t x, uint64_t y, char* __t2248t) {
  int __t137t__=0;
  char z=0;
  is_different__t110t(x,y,&__t137t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2248t=z;
}

static inline __attribute__((always_inline)) void neq__t160t(uint64_t x, uint64_t y, char* __t2249t) {
  int __t161t__=0;
  char z=0;
  is_different__t110t(x,y,&__t161t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2249t=z;
}

static inline __attribute__((always_inline)) void nat__t720t(uint16_t x, uint64_t* __t2250t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2250t=value;
}

static inline __attribute__((always_inline)) void mul__t215t(uint64_t x, uint64_t y, uint64_t* __t2251t) {
  int __t216t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t216t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2251t=z;
}

static inline __attribute__((always_inline)) void zero__t679t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t35t(char value, char* __t2252t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2252t=z;
}

static inline __attribute__((always_inline)) int alloc__t671t(uint64_t bytes, char** __t2253t) {
  char* allocated=0;
  char __t672t__=0;
  char __t673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t608t(allocated,&__t672t__);
  not__t35t(__t672t__,&__t673t__);
  if(__t673t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2253t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t745t(char** __t2254t, uint64_t* __t2255t, uint16_t* __t2256t, uint16_t* __t2257t, uint64_t size, char** __t2258t, uint64_t* __t2259t, uint16_t* __t2260t, uint16_t* __t2261t) {
  char* buffer__unsafe_ptr=*__t2254t;
  uint64_t buffer__unsafe_size=*__t2255t;
  uint16_t buffer__unsafe_offset=*__t2256t;
  uint16_t buffer__unsafe_align=*__t2257t;
  int __t746t=0;
  char __t747t__=0;
  char __t749t__=0;
  uint64_t __t750t=0;
  char __t751t__=0;
  uint64_t __t752t=0;
  uint64_t __t753t__=0;
  uint64_t __t754t__=0;
  uint64_t __t756t=0;
  char __t757t__=0;
  uint64_t __t758t__=0;
  uint64_t __t759t__=0;
  uint64_t bytes=0;
  uint64_t __t760t=0;
  char __t761t__=0;
  char* __t762t__=0;
  int __t763t=0;
  uint64_t __t764t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t136t(buffer__unsafe_size,size,&__t749t__);
  if(__t749t__){
  __t750t=0;
  neq__t160t(size,__t750t,&__t751t__);
  if(__t751t__){
  __t752t=0;
  nat__t720t(buffer__unsafe_align,&__t753t__);
  mul__t215t(__t753t__,size,&__t754t__);
  zero__t679t(buffer__unsafe_ptr,__t752t,__t754t__);
  }
  goto __t_return;
  }
  __t756t=0;
  neq__t160t(buffer__unsafe_size,__t756t,&__t757t__);
  if(__t757t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t720t(buffer__unsafe_align,&__t758t__);
  mul__t215t(__t758t__,size,&__t759t__);
  bytes=__t759t__;
  __t760t=0;
  eq__t136t(bytes,__t760t,&__t761t__);
  if(__t761t__){
  __t_errcode=14;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t671t(bytes,&__t762t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t764t=0;
  zero__t679t(__t762t__,__t764t,bytes);
  buffer__unsafe_ptr=__t762t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t608t(buffer__unsafe_ptr,&__t747t__);
  if(__t747t__){
  free__t678t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2254t=buffer__unsafe_ptr;
  *__t2255t=buffer__unsafe_size;
  *__t2256t=buffer__unsafe_offset;
  *__t2257t=buffer__unsafe_align;
  *__t2258t=buffer__unsafe_ptr;
  *__t2259t=buffer__unsafe_size;
  *__t2260t=buffer__unsafe_offset;
  *__t2261t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t5t(uint64_t* __t2262t) {
  uint64_t value=0;
  *__t2262t=value;
}

static inline __attribute__((always_inline)) void nat____t_buffer____buffer__t688t(char** __t2263t, uint64_t* __t2264t, uint16_t* __t2265t, uint16_t* __t2266t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2263t=unsafe_ptr;
  *__t2264t=unsafe_size;
  *__t2265t=unsafe_offset;
  *__t2266t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2267t) {
  *__t2267t=to;
}

static inline __attribute__((always_inline)) void lt__t268t(uint64_t x, uint64_t y, char* __t2268t) {
  int __t269t__=0;
  char z=0;
  is_different__t110t(x,y,&__t269t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2268t=z;
}

static inline __attribute__((always_inline)) int sub__t368t(uint64_t x, uint64_t y, uint64_t* __t2269t) {
  int __t369t__=0;
  int __t370t=0;
  int __t371t=0;
  char __t372t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t110t(x,y,&__t369t__);
  lt__t268t(x,y,&__t372t__);
  if(__t372t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2269t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int shared_alloc__t682t(uint64_t size, char** __t2270t, char** __t2271t) {
  char* __t683t__=0;
  char* __t684t=0;
  char* _data=0;
  uint64_t __t685t__=0;
  uint64_t __t686t=0;
  char* __t687t__=0;
  char* __t690t__unsafe_ptr=0;
  uint64_t __t690t__unsafe_size=0;
  uint16_t __t690t__unsafe_offset=0;
  uint16_t __t690t__unsafe_align=0;
  char* __t691t__=0;
  char* _counter=0;
  uint64_t __t692t=0;
  uint64_t __t693t__value=0;
  uint64_t prev=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  char __t698t=0;
  uint64_t __t699t=0;
  uint64_t __t700t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t671t(size,&__t683t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t684t=__t683t__;
  _data=__t684t;
  nat__t5t(&__t685t__);
  __t686t=8;
  __t_errcode=alloc__t671t(__t686t,&__t687t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat____t_buffer____buffer__t688t(&__t690t__unsafe_ptr,&__t690t__unsafe_size,&__t690t__unsafe_offset,&__t690t__unsafe_align);
  unsafe_attach_type__t28t(__t687t__,__t690t__unsafe_ptr,&__t691t__);
  _counter=__t691t__;
  __t692t=1;
  if(!_counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(_counter,&__t692t,8);
  goto __t_return;
  
  __t_failure:if(!_counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t693t__value,_counter,8);
  prev=__t693t__value;
  __t694t=1;
  eq__t136t(prev,__t694t,&__t695t__);
  if(__t695t__){
  free__t678t(&_data);
  free__t678t(&_counter);
  }
  else{
  __t699t=1;
  __t_complain=sub__t368t(prev,__t699t,&__t700t__);
  __t698t=__t_complain;
  if(!_counter){
  __t_complain=2;
  }
  else{
  memcpy(_counter,&__t700t__,8);
  }
  __t698t=__t698t==0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2270t=_data;
  *__t2271t=_counter;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t340t(uint64_t x, uint64_t y, char* __t2272t) {
  int __t341t__=0;
  char z=0;
  is_different__t110t(x,y,&__t341t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2272t=z;
}

static inline __attribute__((always_inline)) void add__t191t(uint64_t x, uint64_t y, uint64_t* __t2273t) {
  int __t192t__=0;
  uint64_t z=0;
  is_different__t110t(x,y,&__t192t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2273t=z;
}

static inline __attribute__((always_inline)) void add__t680t(char* allocated, uint64_t offset, char** __t2274t) {
  char* element=0;
  char* __t681t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t681t__);
  goto __t_return;
  __t_return:
  *__t2274t=__t681t__;
}

static inline __attribute__((always_inline)) int mutget__t858t(char** __t2275t, uint64_t* __t2276t, uint16_t* __t2277t, uint16_t* __t2278t, uint64_t i, char** __t2279t) {
  char* buffer__unsafe_ptr=*__t2275t;
  uint64_t buffer__unsafe_size=*__t2276t;
  uint16_t buffer__unsafe_offset=*__t2277t;
  uint16_t buffer__unsafe_align=*__t2278t;
  char __t859t__=0;
  uint64_t __t860t__=0;
  uint64_t __t861t__=0;
  uint64_t __t862t__=0;
  uint64_t __t863t__=0;
  char* __t864t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t340t(i,buffer__unsafe_size,&__t859t__);
  if(__t859t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t720t(buffer__unsafe_align,&__t860t__);
  mul__t215t(i,__t860t__,&__t861t__);
  nat__t720t(buffer__unsafe_offset,&__t862t__);
  add__t191t(__t861t__,__t862t__,&__t863t__);
  add__t680t(buffer__unsafe_ptr,__t863t__,&__t864t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2275t=buffer__unsafe_ptr;
  *__t2276t=buffer__unsafe_size;
  *__t2277t=buffer__unsafe_offset;
  *__t2278t=buffer__unsafe_align;
  *__t2279t=__t864t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get_shared__t702t(char** __t2280t, char** __t2281t, char** __t2282t, char** __t2283t) {
  char* self___data=*__t2280t;
  char* self___counter=*__t2281t;
  uint64_t __t703t=0;
  uint64_t __t704t__value=0;
  uint64_t __t705t__=0;
  uint64_t __t706t__value=0;
  uint64_t prev=0;
  uint64_t __t707t=0;
  char __t708t__=0;
  char __t711t=0;
  uint64_t __t712t=0;
  uint64_t __t713t__=0;
  char* __t714t=0;
  char* value=0;
  char* _counter=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t703t=1;
  if(!self___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t704t__value,self___counter,8);
  add__t191t(__t703t,__t704t__value,&__t705t__);
  if(!self___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(self___counter,&__t705t__,8);
  __t714t=self___data;
  value=__t714t;
  _counter=self___counter;
  goto __t_return;
  
  __t_failure:if(!_counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t706t__value,_counter,8);
  prev=__t706t__value;
  __t707t=1;
  eq__t136t(prev,__t707t,&__t708t__);
  if(__t708t__){
  free__t678t(&value);
  free__t678t(&_counter);
  }
  else{
  __t712t=1;
  __t_complain=sub__t368t(prev,__t712t,&__t713t__);
  __t711t=__t_complain;
  if(!_counter){
  __t_complain=2;
  }
  else{
  memcpy(_counter,&__t713t__,8);
  }
  __t711t=__t711t==0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2280t=self___data;
  *__t2281t=self___counter;
  *__t2282t=value;
  *__t2283t=_counter;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int create__t2189t(char** __t2284t, uint64_t* __t2285t, uint16_t* __t2286t, uint16_t* __t2287t) {
  char* __t2192t__unsafe_ptr=0;
  uint64_t __t2192t__unsafe_size=0;
  uint16_t __t2192t__unsafe_offset=0;
  uint16_t __t2192t__unsafe_align=0;
  uint64_t __t2193t=0;
  char* __t2194t__unsafe_ptr=0;
  uint64_t __t2194t__unsafe_size=0;
  uint16_t __t2194t__unsafe_offset=0;
  uint16_t __t2194t__unsafe_align=0;
  char __t2195t____t747t__=0;
  char* __t2196t__unsafe_ptr=0;
  uint64_t __t2196t__unsafe_size=0;
  uint16_t __t2196t__unsafe_offset=0;
  uint16_t __t2196t__unsafe_align=0;
  char* values__unsafe_ptr=0;
  uint64_t values__unsafe_size=0;
  uint16_t values__unsafe_offset=0;
  uint16_t values__unsafe_align=0;
  uint64_t __t2197t=0;
  char* __t2198t___data=0;
  char* __t2198t___counter=0;
  uint64_t __t2199t____t693t__value=0;
  uint64_t __t2199t__prev=0;
  uint64_t __t2199t____t694t=0;
  char __t2199t____t695t__=0;
  uint64_t __t2199t____t699t=0;
  uint64_t __t2199t____t700t__=0;
  char __t2199t____t698t=0;
  char* __t2200t__data=0;
  char* __t2200t__counter=0;
  char* s__data=0;
  char* s__counter=0;
  uint64_t __t2201t=0;
  char* __t2203t__=0;
  char* __t2204t__value=0;
  char* __t2204t___counter=0;
  uint64_t __t2205t____t706t__value=0;
  uint64_t __t2205t__prev=0;
  uint64_t __t2205t____t707t=0;
  char __t2205t____t708t__=0;
  uint64_t __t2205t____t712t=0;
  uint64_t __t2205t____t713t__=0;
  char __t2205t____t711t=0;
  uint64_t __t2206t=0;
  char* __t2208t__=0;
  char* __t2209t__value=0;
  char* __t2209t___counter=0;
  uint64_t __t2210t____t706t__value=0;
  uint64_t __t2210t__prev=0;
  uint64_t __t2210t____t707t=0;
  char __t2210t____t708t__=0;
  uint64_t __t2210t____t712t=0;
  uint64_t __t2210t____t713t__=0;
  char __t2210t____t711t=0;
  int __t_errcode=0;
  int __t_complain=0;
  get_shared____t_buffer____buffer__t2190t(&__t2192t__unsafe_ptr,&__t2192t__unsafe_size,&__t2192t__unsafe_offset,&__t2192t__unsafe_align);
  __t2193t=2;
  __t_errcode=alloc__t745t(&__t2192t__unsafe_ptr,&__t2192t__unsafe_size,&__t2192t__unsafe_offset,&__t2192t__unsafe_align,__t2193t,&__t2194t__unsafe_ptr,&__t2194t__unsafe_size,&__t2194t__unsafe_offset,&__t2194t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2196t__unsafe_ptr=__t2194t__unsafe_ptr;
  __t2196t__unsafe_size=__t2194t__unsafe_size;
  __t2196t__unsafe_offset=__t2194t__unsafe_offset;
  __t2196t__unsafe_align=__t2194t__unsafe_align;
  values__unsafe_ptr=__t2196t__unsafe_ptr;
  values__unsafe_size=__t2196t__unsafe_size;
  values__unsafe_offset=__t2196t__unsafe_offset;
  values__unsafe_align=__t2196t__unsafe_align;
  __t2197t=8;
  __t_errcode=shared_alloc__t682t(__t2197t,&__t2198t___data,&__t2198t___counter);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2200t__data=__t2198t___data;
  __t2200t__counter=__t2198t___counter;
  s__data=__t2200t__data;
  s__counter=__t2200t__counter;
  __t2201t=0;
  __t_errcode=mutget__t858t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2201t,&__t2203t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get_shared__t702t(&s__data,&s__counter,&__t2204t__value,&__t2204t___counter);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2203t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2203t__,&__t2204t__value,8);
  memcpy(__t2203t__+8,&__t2204t___counter,8);
  __t2206t=1;
  __t_errcode=mutget__t858t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t2206t,&__t2208t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get_shared__t702t(&s__data,&s__counter,&__t2209t__value,&__t2209t___counter);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2208t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2208t__,&__t2209t__value,8);
  memcpy(__t2208t__+8,&__t2209t___counter,8);
  goto __t_return;
  
  __t_failure:exists__t608t(values__unsafe_ptr,&__t2195t____t747t__);
  if(__t2195t____t747t__){
  free__t678t(&values__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2284t=values__unsafe_ptr;
  *__t2285t=values__unsafe_size;
  *__t2286t=values__unsafe_offset;
  *__t2287t=values__unsafe_align;
  
  __t_skip_returns:if(!__t2209t___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2210t____t706t__value,__t2209t___counter,8);
  __t2210t__prev=__t2210t____t706t__value;
  __t2210t____t707t=1;
  eq__t136t(__t2210t__prev,__t2210t____t707t,&__t2210t____t708t__);
  if(__t2210t____t708t__){
  free__t678t(&__t2209t__value);
  free__t678t(&__t2209t___counter);
  }
  else{
  __t2210t____t712t=1;
  __t_complain=sub__t368t(__t2210t__prev,__t2210t____t712t,&__t2210t____t713t__);
  __t2210t____t711t=__t_complain;
  if(!__t2209t___counter){
  __t_complain=2;
  }
  else{
  memcpy(__t2209t___counter,&__t2210t____t713t__,8);
  }
  __t2210t____t711t=__t2210t____t711t==0;
  }
  if(!__t2204t___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2205t____t706t__value,__t2204t___counter,8);
  __t2205t__prev=__t2205t____t706t__value;
  __t2205t____t707t=1;
  eq__t136t(__t2205t__prev,__t2205t____t707t,&__t2205t____t708t__);
  if(__t2205t____t708t__){
  free__t678t(&__t2204t__value);
  free__t678t(&__t2204t___counter);
  }
  else{
  __t2205t____t712t=1;
  __t_complain=sub__t368t(__t2205t__prev,__t2205t____t712t,&__t2205t____t713t__);
  __t2205t____t711t=__t_complain;
  if(!__t2204t___counter){
  __t_complain=2;
  }
  else{
  memcpy(__t2204t___counter,&__t2205t____t713t__,8);
  }
  __t2205t____t711t=__t2205t____t711t==0;
  }
  if(!__t2198t___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2199t____t693t__value,__t2198t___counter,8);
  __t2199t__prev=__t2199t____t693t__value;
  __t2199t____t694t=1;
  eq__t136t(__t2199t__prev,__t2199t____t694t,&__t2199t____t695t__);
  if(__t2199t____t695t__){
  free__t678t(&__t2198t___data);
  free__t678t(&__t2198t___counter);
  }
  else{
  __t2199t____t699t=1;
  __t_complain=sub__t368t(__t2199t__prev,__t2199t____t699t,&__t2199t____t700t__);
  __t2199t____t698t=__t_complain;
  if(!__t2198t___counter){
  __t_complain=2;
  }
  else{
  memcpy(__t2198t___counter,&__t2199t____t700t__,8);
  }
  __t2199t____t698t=__t2199t____t698t==0;
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t865t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2288t) {
  char __t866t__=0;
  uint64_t __t867t__=0;
  uint64_t __t868t__=0;
  uint64_t __t869t__=0;
  uint64_t __t870t__=0;
  char* __t871t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t340t(i,buffer__unsafe_size,&__t866t__);
  if(__t866t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t720t(buffer__unsafe_align,&__t867t__);
  mul__t215t(i,__t867t__,&__t868t__);
  nat__t720t(buffer__unsafe_offset,&__t869t__);
  add__t191t(__t868t__,__t869t__,&__t870t__);
  add__t680t(buffer__unsafe_ptr,__t870t__,&__t871t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2288t=__t871t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2183t(char** __t2289t, uint64_t* __t2290t, uint16_t* __t2291t, uint16_t* __t2292t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2289t=unsafe_ptr;
  *__t2290t=unsafe_size;
  *__t2291t=unsafe_offset;
  *__t2292t=unsafe_align;
}

static inline __attribute__((always_inline)) void is_different__t78t(double x, double y, int* __t2293t) {
  int __t80t=0;
  int __t81t__=0;
  not__t44t(__t80t,&__t81t__);
  goto __t_return;
  __t_return:
  *__t2293t=__t81t__;
}

static inline __attribute__((always_inline)) void add__t169t(double x, double y, double* __t2294t) {
  int __t170t__=0;
  double z=0;
  is_different__t78t(x,y,&__t170t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2294t=z;
}

static inline __attribute__((always_inline)) int inc__t2182t(char** __t2295t) {
  char* data=*__t2295t;
  char* __t2185t__unsafe_ptr=0;
  uint64_t __t2185t__unsafe_size=0;
  uint16_t __t2185t__unsafe_offset=0;
  uint16_t __t2185t__unsafe_align=0;
  double __t2186t__value=0;
  double prev=0;
  double __t2187t=0;
  double __t2188t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2183t(&__t2185t__unsafe_ptr,&__t2185t__unsafe_size,&__t2185t__unsafe_offset,&__t2185t__unsafe_align);
  if(!data){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2186t__value,data,8);
  prev=__t2186t__value;
  __t2187t=1.0;
  add__t169t(__t2187t,prev,&__t2188t__);
  if(!data){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(data,&__t2188t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2295t=data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int counter__t718t(char* self__value, char* self___counter, uint64_t* __t2296t) {
  uint64_t __t719t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!self___counter){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t719t__value,self___counter,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2296t=__t719t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t410t(uint64_t value) {
  int __t411t=0;
  const char* endl=0;
  endl=__t399t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t402t(double value) {
  int __t403t=0;
  const char* endl=0;
  endl=__t399t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2211t() {
  char* __t2214t__unsafe_ptr=0;
  uint64_t __t2214t__unsafe_size=0;
  uint16_t __t2214t__unsafe_offset=0;
  uint16_t __t2214t__unsafe_align=0;
  char __t2215t____t2195t____t747t__=0;
  char* values__unsafe_ptr=0;
  uint64_t values__unsafe_size=0;
  uint16_t values__unsafe_offset=0;
  uint16_t values__unsafe_align=0;
  uint64_t __t2216t=0;
  char* __t2218t__=0;
  char* __t2219t__value=0;
  char* __t2219t___counter=0;
  uint64_t __t2221t=0;
  char* __t2223t__=0;
  char* __t2224t__value=0;
  char* __t2224t___counter=0;
  uint64_t __t2226t=0;
  char* __t2228t__=0;
  char* __t2229t__value=0;
  char* __t2229t___counter=0;
  uint64_t __t2230t__=0;
  uint64_t __t2232t=0;
  char* __t2234t__=0;
  char* __t2235t__value=0;
  char* __t2235t___counter=0;
  char* __t2236t__unsafe_ptr=0;
  uint64_t __t2236t__unsafe_size=0;
  uint16_t __t2236t__unsafe_offset=0;
  uint16_t __t2236t__unsafe_align=0;
  double __t2237t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t382t();
  __t_errcode=create__t2189t(&__t2214t__unsafe_ptr,&__t2214t__unsafe_size,&__t2214t__unsafe_offset,&__t2214t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  values__unsafe_ptr=__t2214t__unsafe_ptr;
  values__unsafe_size=__t2214t__unsafe_size;
  values__unsafe_offset=__t2214t__unsafe_offset;
  values__unsafe_align=__t2214t__unsafe_align;
  __t2216t=0;
  __t_errcode=get__t865t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2216t,&__t2218t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2218t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2219t__value,__t2218t__,8);
  memcpy(&__t2219t___counter,__t2218t__+8,8);
  __t_errcode=inc__t2182t(&__t2219t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2221t=0;
  __t_errcode=get__t865t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2221t,&__t2223t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2223t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2224t__value,__t2223t__,8);
  memcpy(&__t2224t___counter,__t2223t__+8,8);
  __t_errcode=inc__t2182t(&__t2224t__value);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2226t=0;
  __t_errcode=get__t865t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2226t,&__t2228t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2228t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2229t__value,__t2228t__,8);
  memcpy(&__t2229t___counter,__t2228t__+8,8);
  __t_errcode=counter__t718t(__t2229t__value,__t2229t___counter,&__t2230t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t410t(__t2230t__);
  __t2232t=0;
  __t_errcode=get__t865t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t2232t,&__t2234t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2234t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2235t__value,__t2234t__,8);
  memcpy(&__t2235t___counter,__t2234t__+8,8);
  float____t_buffer____buffer__t2183t(&__t2236t__unsafe_ptr,&__t2236t__unsafe_size,&__t2236t__unsafe_offset,&__t2236t__unsafe_align);
  if(!__t2235t__value){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2237t__value,__t2235t__value,8);
  print__t402t(__t2237t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t608t(__t2214t__unsafe_ptr,&__t2215t____t2195t____t747t__);
  if(__t2215t____t2195t____t747t__){
  free__t678t(&__t2214t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2211t();return 0;}