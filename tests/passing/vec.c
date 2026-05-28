#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
static const char* __t_all_errcodes[49] = {"noerr",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1357t(char** __t2448t, uint64_t* __t2449t, uint16_t* __t2450t, uint16_t* __t2451t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2448t=unsafe_ptr;
  *__t2449t=unsafe_size;
  *__t2450t=unsafe_offset;
  *__t2451t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2452t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2452t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2453t) {
  char* allocated=*__t2453t;
  if(allocated){
  free(allocated);
  }
  *__t2453t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2454t) {
  int value=0;
  *__t2454t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2455t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2455t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2456t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2456t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2457t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2457t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2458t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2458t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2459t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2459t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2460t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2460t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2461t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2461t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2462t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2462t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2463t, uint64_t* __t2464t, uint16_t* __t2465t, uint16_t* __t2466t, uint64_t size, char** __t2467t, uint64_t* __t2468t, uint16_t* __t2469t, uint16_t* __t2470t) {
  char* buffer__unsafe_ptr=*__t2463t;
  uint64_t buffer__unsafe_size=*__t2464t;
  uint16_t buffer__unsafe_offset=*__t2465t;
  uint16_t buffer__unsafe_align=*__t2466t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2463t=buffer__unsafe_ptr;
  *__t2464t=buffer__unsafe_size;
  *__t2465t=buffer__unsafe_offset;
  *__t2466t=buffer__unsafe_align;
  *__t2467t=buffer__unsafe_ptr;
  *__t2468t=buffer__unsafe_size;
  *__t2469t=buffer__unsafe_offset;
  *__t2470t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2471t) {
  goto __t_return;
  __t_return:
  *__t2471t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t2472t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2472t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t2473t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2473t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2474t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2474t=z;
}

static inline __attribute__((always_inline)) void circular__t1355t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2475t, uint64_t length, char** __t2476t, uint64_t* __t2477t, uint16_t* __t2478t, uint16_t* __t2479t, uint64_t* __t2480t, uint64_t* __t2481t) {
  uint64_t pos=*__t2475t;
  goto __t_return;
  __t_return:
  *__t2475t=pos;
  *__t2476t=buf__unsafe_ptr;
  *__t2477t=buf__unsafe_size;
  *__t2478t=buf__unsafe_offset;
  *__t2479t=buf__unsafe_align;
  *__t2480t=pos;
  *__t2481t=length;
}

static inline __attribute__((always_inline)) int circular__t1381t(char** __t2482t, uint64_t* __t2483t, uint16_t* __t2484t, uint16_t* __t2485t, char** __t2486t, uint64_t* __t2487t, uint16_t* __t2488t, uint16_t* __t2489t, uint64_t* __t2490t, uint64_t* __t2491t) {
  char* buf__unsafe_ptr=*__t2482t;
  uint64_t buf__unsafe_size=*__t2483t;
  uint16_t buf__unsafe_offset=*__t2484t;
  uint16_t buf__unsafe_align=*__t2485t;
  int __t1382t=0;
  int __t1383t=0;
  uint64_t __t1384t=0;
  uint64_t __t1385t=0;
  uint64_t pos=0;
  int __t1386t=0;
  uint64_t __t1387t__=0;
  uint64_t __t1388t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1389t__=0;
  char* __t1390t__buf__unsafe_ptr=0;
  uint64_t __t1390t__buf__unsafe_size=0;
  uint16_t __t1390t__buf__unsafe_offset=0;
  uint16_t __t1390t__buf__unsafe_align=0;
  uint64_t __t1390t__pos=0;
  uint64_t __t1390t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1384t=0;
  __t1385t=__t1384t;
  pos=__t1385t;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1387t__);
  __t_errcode=sub__t348t(__t1387t__,pos,&__t1388t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1388t__;
  start=pos;
  add__t171t(pos,length,&__t1389t__);
  pos=__t1389t__;
  circular__t1355t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1390t__buf__unsafe_ptr,&__t1390t__buf__unsafe_size,&__t1390t__buf__unsafe_offset,&__t1390t__buf__unsafe_align,&__t1390t__pos,&__t1390t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2482t=buf__unsafe_ptr;
  *__t2483t=buf__unsafe_size;
  *__t2484t=buf__unsafe_offset;
  *__t2485t=buf__unsafe_align;
  *__t2486t=__t1390t__buf__unsafe_ptr;
  *__t2487t=__t1390t__buf__unsafe_size;
  *__t2488t=__t1390t__buf__unsafe_offset;
  *__t2489t=__t1390t__buf__unsafe_align;
  *__t2490t=__t1390t__pos;
  *__t2491t=__t1390t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1351t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1345t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2492t, uint64_t* __t2493t, uint64_t* __t2494t) {
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__pos=0;
  uint64_t __t1347t__length=0;
  __t1347t__unsafe_ptr=unsafe_ptr;
  __t1347t__pos=pos;
  __t1347t__length=length;
  goto __t_return;
  __t_return:
  *__t2492t=__t1347t__unsafe_ptr;
  *__t2493t=__t1347t__pos;
  *__t2494t=__t1347t__length;
}

int vec__t1391t(uint64_t length, char** __t2495t, uint64_t* __t2496t, uint64_t* __t2497t) {
  char* __t1392t__unsafe_ptr=0;
  uint64_t __t1392t__unsafe_size=0;
  uint16_t __t1392t__unsafe_offset=0;
  uint16_t __t1392t__unsafe_align=0;
  char* __t1393t__unsafe_ptr=0;
  uint64_t __t1393t__unsafe_size=0;
  uint16_t __t1393t__unsafe_offset=0;
  uint16_t __t1393t__unsafe_align=0;
  char __t1394t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1395t=0;
  char* __t1396t__unsafe_ptr=0;
  uint64_t __t1396t__pos=0;
  uint64_t __t1396t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1357t(&__t1392t__unsafe_ptr,&__t1392t__unsafe_size,&__t1392t__unsafe_offset,&__t1392t__unsafe_align);
  __t_errcode=alloc__t509t(&__t1392t__unsafe_ptr,&__t1392t__unsafe_size,&__t1392t__unsafe_offset,&__t1392t__unsafe_align,length,&__t1393t__unsafe_ptr,&__t1393t__unsafe_size,&__t1393t__unsafe_offset,&__t1393t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1395t=0;
  vec__t1345t(__t1393t__unsafe_ptr,__t1395t,length,&__t1396t__unsafe_ptr,&__t1396t__pos,&__t1396t__length);
  __t1396t__unsafe_ptr=__t1393t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1396t__unsafe_ptr,&__t1394t____t511t__);
  if(__t1394t____t511t__){
  free__t502t(&__t1396t__unsafe_ptr);
  }
  __t_return:
  *__t2495t=__t1396t__unsafe_ptr;
  *__t2496t=__t1396t__pos;
  *__t2497t=__t1396t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2498t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2498t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2499t) {
  *__t2499t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2500t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2500t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t1446t(char** __t2501t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2502t) {
  char* v__unsafe_ptr=*__t2501t;
  char __t1447t__=0;
  uint64_t __t1448t=0;
  uint64_t __t1449t__=0;
  uint64_t __t1450t__=0;
  char* __t1451t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1447t__);
  if(__t1447t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1448t=8;
  add__t171t(i,v__pos,&__t1449t__);
  mul__t195t(__t1448t,__t1449t__,&__t1450t__);
  add__t504t(v__unsafe_ptr,__t1450t__,&__t1451t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2501t=v__unsafe_ptr;
  *__t2502t=__t1451t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2503t, uint64_t* __t2504t) {
  int __t462t=0;
  uint64_t __t463t=0;
  uint64_t _from=0;
  uint64_t __t464t=0;
  uint64_t from=0;
  __t463t=0;
  _from=__t463t;
  __t464t=_from;
  from=__t464t;
  goto __t_return;
  __t_return:
  *__t2503t=from;
  *__t2504t=to;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2505t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2505t=z;
}

static inline __attribute__((always_inline)) int vec__t1429t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2506t, uint64_t allocator__length, uint64_t length, char** __t2507t, uint64_t* __t2508t, uint64_t* __t2509t) {
  uint64_t allocator__pos=*__t2506t;
  uint64_t __t1430t__=0;
  uint64_t __t1431t=0;
  char __t1432t__=0;
  uint64_t __t1433t__=0;
  uint64_t __t1434t=0;
  char __t1435t__=0;
  uint64_t __t1436t__=0;
  char __t1437t__=0;
  uint64_t __t1438t=0;
  uint64_t start=0;
  uint64_t __t1439t__=0;
  char __t1440t__=0;
  uint64_t __t1441t=0;
  uint64_t __t1442t__=0;
  uint64_t __t1443t=0;
  char* __t1444t__unsafe_ptr=0;
  uint64_t __t1444t__pos=0;
  uint64_t __t1444t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(allocator__buf__unsafe_align,&__t1430t__);
  __t1431t=8;
  neq__t143t(__t1430t__,__t1431t,&__t1432t__);
  if(__t1432t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(allocator__buf__unsafe_offset,&__t1433t__);
  __t1434t=0;
  neq__t143t(__t1433t__,__t1434t,&__t1435t__);
  if(__t1435t__){
  __t_errcode=37;
  goto __t_failure;
  }
  len__t598t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1436t__);
  gt__t272t(length,__t1436t__,&__t1437t__);
  if(__t1437t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t1438t=allocator__pos;
  start=__t1438t;
  add__t171t(allocator__pos,length,&__t1439t__);
  allocator__pos=__t1439t__;
  ge__t320t(allocator__pos,allocator__length,&__t1440t__);
  if(__t1440t__){
  __t1441t=0;
  add__t171t(length,__t1441t,&__t1442t__);
  allocator__pos=__t1442t__;
  __t1443t=0;
  start=__t1443t;
  }
  vec__t1345t(allocator__buf__unsafe_ptr,start,length,&__t1444t__unsafe_ptr,&__t1444t__pos,&__t1444t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2506t=allocator__pos;
  *__t2507t=__t1444t__unsafe_ptr;
  *__t2508t=__t1444t__pos;
  *__t2509t=__t1444t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t2510t, uint64_t r__to, uint64_t* __t2511t) {
  uint64_t r__from=*__t2510t;
  char __t471t__=0;
  uint64_t ret=0;
  uint64_t __t472t=0;
  uint64_t __t473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(r__from,r__to,&__t471t__);
  if(__t471t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t472t=1;
  add__t171t(ret,__t472t,&__t473t__);
  r__from=__t473t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2510t=r__from;
  *__t2511t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1452t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2512t) {
  char __t1453t__=0;
  uint64_t __t1454t=0;
  uint64_t __t1455t__=0;
  uint64_t __t1456t__=0;
  char* __t1457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1453t__);
  if(__t1453t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1454t=8;
  add__t171t(i,v__pos,&__t1455t__);
  mul__t195t(__t1454t,__t1455t__,&__t1456t__);
  add__t504t(v__unsafe_ptr,__t1456t__,&__t1457t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2512t=__t1457t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1459t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2513t) {
  char* __t1460t__=0;
  double __t1461t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,i,&__t1460t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1460t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1461t__value,__t1460t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2513t=__t1461t__value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2514t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2514t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2515t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2515t=z;
}

int add__t1514t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2516t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2517t, uint64_t* __t2518t, uint64_t* __t2519t) {
  uint64_t allocator__pos=*__t2516t;
  int __t1515t=0;
  char __t1516t__=0;
  char* __t1517t__unsafe_ptr=0;
  uint64_t __t1517t__pos=0;
  uint64_t __t1517t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1518t__from=0;
  uint64_t __t1518t__to=0;
  uint64_t __t1519t__from=0;
  uint64_t __t1519t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __t1520t=0;
  uint64_t __t1521t__=0;
  uint64_t i=0;
  char* __t1522t__=0;
  char* __t1523t__=0;
  double __t1524t__value=0;
  double __t1525t__=0;
  double __t1526t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v1__length,v2__length,&__t1516t__);
  if(__t1516t__){
  __t_errcode=39;
  goto __t_failure;
  }
  __t_errcode=vec__t1429t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1517t__unsafe_ptr,&__t1517t__pos,&__t1517t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1517t__unsafe_ptr;
  v__pos=__t1517t__pos;
  v__length=__t1517t__length;
  range__t461t(v1__length,&__t1518t__from,&__t1518t__to);
  __t1519t__from=__t1518t__from;
  __t1519t__to=__t1518t__to;
  it__from=__t1519t__from;
  it__to=__t1519t__to;
  p1=v1__unsafe_ptr;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1521t__);
  __t1520t=__t_complain;
  i=__t1521t__;
  __t1520t=__t1520t==0;
  if(!__t1520t){
  break;
  }
  __t_errcode=mutget__t1446t(&v__unsafe_ptr,v__pos,v__length,i,&__t1522t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1452t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1523t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1523t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1524t__value,__t1523t__,8);
  __t_errcode=at__t1459t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1525t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t149t(__t1524t__value,__t1525t__,&__t1526t__);
  if(!__t1522t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1522t__,&__t1526t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2516t=allocator__pos;
  *__t2517t=v__unsafe_ptr;
  *__t2518t=v__pos;
  *__t2519t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1458t(double number, uint64_t i, double* __t2520t) {
  goto __t_return;
  __t_return:
  *__t2520t=number;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2521t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2521t=z;
}

static inline __attribute__((always_inline)) int mul__t1705t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2522t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2523t, uint64_t* __t2524t, uint64_t* __t2525t) {
  uint64_t allocator__pos=*__t2522t;
  int __t1706t=0;
  char* __t1707t__unsafe_ptr=0;
  uint64_t __t1707t__pos=0;
  uint64_t __t1707t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1708t__from=0;
  uint64_t __t1708t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1709t=0;
  uint64_t __t1710t__=0;
  uint64_t i=0;
  char* __t1711t__=0;
  char* __t1712t__=0;
  double __t1713t__value=0;
  double __t1714t__=0;
  double __t1715t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1429t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1707t__unsafe_ptr,&__t1707t__pos,&__t1707t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1707t__unsafe_ptr;
  v__pos=__t1707t__pos;
  v__length=__t1707t__length;
  range__t461t(v1__length,&__t1708t__from,&__t1708t__to);
  it__from=__t1708t__from;
  it__to=__t1708t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1710t__);
  __t1709t=__t_complain;
  i=__t1710t__;
  __t1709t=__t1709t==0;
  if(!__t1709t){
  break;
  }
  __t_errcode=mutget__t1446t(&v__unsafe_ptr,v__pos,v__length,i,&__t1711t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1452t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1712t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1712t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1713t__value,__t1712t__,8);
  at__t1458t(v2,i,&__t1714t__);
  mul__t173t(__t1713t__value,__t1714t__,&__t1715t__);
  if(!__t1711t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1711t__,&__t1715t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2522t=allocator__pos;
  *__t2523t=v__unsafe_ptr;
  *__t2524t=v__pos;
  *__t2525t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1721t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2526t, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2527t, uint64_t* __t2528t, uint64_t* __t2529t) {
  uint64_t allocator__pos=*__t2526t;
  char* __t1722t__unsafe_ptr=0;
  uint64_t __t1722t__pos=0;
  uint64_t __t1722t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1705t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1722t__unsafe_ptr,&__t1722t__pos,&__t1722t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2526t=allocator__pos;
  *__t2527t=__t1722t__unsafe_ptr;
  *__t2528t=__t1722t__pos;
  *__t2529t=__t1722t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t2401t() {
  char* __t2402t__unsafe_ptr=0;
  uint64_t __t2402t__unsafe_size=0;
  uint16_t __t2402t__unsafe_offset=0;
  uint16_t __t2402t__unsafe_align=0;
  uint64_t __t2403t=0;
  char* __t2404t__unsafe_ptr=0;
  uint64_t __t2404t__unsafe_size=0;
  uint16_t __t2404t__unsafe_offset=0;
  uint16_t __t2404t__unsafe_align=0;
  char __t2405t____t511t__=0;
  char* __t2406t__buf__unsafe_ptr=0;
  uint64_t __t2406t__buf__unsafe_size=0;
  uint16_t __t2406t__buf__unsafe_offset=0;
  uint16_t __t2406t__buf__unsafe_align=0;
  uint64_t __t2406t__pos=0;
  uint64_t __t2406t__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __t2407t__unsafe_ptr=0;
  uint64_t __t2407t__unsafe_size=0;
  uint16_t __t2407t__unsafe_offset=0;
  uint16_t __t2407t__unsafe_align=0;
  uint64_t __t2408t=0;
  char* __t2409t__unsafe_ptr=0;
  uint64_t __t2409t__unsafe_size=0;
  uint16_t __t2409t__unsafe_offset=0;
  uint16_t __t2409t__unsafe_align=0;
  char __t2410t____t511t__=0;
  char* __t2411t__buf__unsafe_ptr=0;
  uint64_t __t2411t__buf__unsafe_size=0;
  uint16_t __t2411t__buf__unsafe_offset=0;
  uint16_t __t2411t__buf__unsafe_align=0;
  uint64_t __t2411t__pos=0;
  uint64_t __t2411t__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __t2413t=0;
  char* __t2414t__unsafe_ptr=0;
  uint64_t __t2414t__pos=0;
  uint64_t __t2414t__length=0;
  char __t2415t____t1394t____t511t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2417t=0;
  char* __t2418t__unsafe_ptr=0;
  uint64_t __t2418t__pos=0;
  uint64_t __t2418t__length=0;
  char __t2419t____t1394t____t511t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t2420t=0;
  char* __t2421t__=0;
  double __t2422t=0;
  uint64_t __t2423t=0;
  char* __t2424t__=0;
  double __t2425t=0;
  uint64_t __t2426t=0;
  uint64_t __t2427t__from=0;
  uint64_t __t2427t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t2428t=0;
  char* __t2429t__unsafe_ptr=0;
  uint64_t __t2429t__pos=0;
  uint64_t __t2429t__length=0;
  char* __t2430t__unsafe_ptr=0;
  uint64_t __t2430t__pos=0;
  uint64_t __t2430t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t2431t=0;
  uint64_t __t2432t__=0;
  uint64_t i=0;
  double __t2433t=0;
  char* __t2434t__unsafe_ptr=0;
  uint64_t __t2434t__pos=0;
  uint64_t __t2434t__length=0;
  char* __t2435t__unsafe_ptr=0;
  uint64_t __t2435t__pos=0;
  uint64_t __t2435t__length=0;
  char* __t2436t__unsafe_ptr=0;
  uint64_t __t2436t__pos=0;
  uint64_t __t2436t__length=0;
  uint64_t __t2437t=0;
  char* __t2438t__=0;
  double __t2439t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1357t(&__t2402t__unsafe_ptr,&__t2402t__unsafe_size,&__t2402t__unsafe_offset,&__t2402t__unsafe_align);
  __t2403t=200;
  __t_errcode=alloc__t509t(&__t2402t__unsafe_ptr,&__t2402t__unsafe_size,&__t2402t__unsafe_offset,&__t2402t__unsafe_align,__t2403t,&__t2404t__unsafe_ptr,&__t2404t__unsafe_size,&__t2404t__unsafe_offset,&__t2404t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1381t(&__t2404t__unsafe_ptr,&__t2404t__unsafe_size,&__t2404t__unsafe_offset,&__t2404t__unsafe_align,&__t2406t__buf__unsafe_ptr,&__t2406t__buf__unsafe_size,&__t2406t__buf__unsafe_offset,&__t2406t__buf__unsafe_align,&__t2406t__pos,&__t2406t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1357t(&__t2407t__unsafe_ptr,&__t2407t__unsafe_size,&__t2407t__unsafe_offset,&__t2407t__unsafe_align);
  __t2408t=200;
  __t_errcode=alloc__t509t(&__t2407t__unsafe_ptr,&__t2407t__unsafe_size,&__t2407t__unsafe_offset,&__t2407t__unsafe_align,__t2408t,&__t2409t__unsafe_ptr,&__t2409t__unsafe_size,&__t2409t__unsafe_offset,&__t2409t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1381t(&__t2409t__unsafe_ptr,&__t2409t__unsafe_size,&__t2409t__unsafe_offset,&__t2409t__unsafe_align,&__t2411t__buf__unsafe_ptr,&__t2411t__buf__unsafe_size,&__t2411t__buf__unsafe_offset,&__t2411t__buf__unsafe_align,&__t2411t__pos,&__t2411t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t1351t();
  __t2413t=10;
  __t_errcode=vec__t1391t(__t2413t,&__t2414t__unsafe_ptr,&__t2414t__pos,&__t2414t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2414t__unsafe_ptr;
  v1__pos=__t2414t__pos;
  v1__length=__t2414t__length;
  new__t1351t();
  __t2417t=10;
  __t_errcode=vec__t1391t(__t2417t,&__t2418t__unsafe_ptr,&__t2418t__pos,&__t2418t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2418t__unsafe_ptr;
  v2__pos=__t2418t__pos;
  v2__length=__t2418t__length;
  __t2420t=0;
  __t_errcode=mutget__t1446t(&v1__unsafe_ptr,v1__pos,v1__length,__t2420t,&__t2421t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2422t=1.0;
  if(!__t2421t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2421t__,&__t2422t,8);
  __t2423t=0;
  __t_errcode=mutget__t1446t(&v2__unsafe_ptr,v2__pos,v2__length,__t2423t,&__t2424t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2425t=2.0;
  if(!__t2424t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2424t__,&__t2425t,8);
  __t2426t=5;
  range__t461t(__t2426t,&__t2427t__from,&__t2427t__to);
  it__from=__t2427t__from;
  it__to=__t2427t__to;
  __t2428t=10;
  __t_errcode=vec__t1429t(__t2406t__buf__unsafe_ptr,__t2406t__buf__unsafe_size,__t2406t__buf__unsafe_offset,__t2406t__buf__unsafe_align,&__t2406t__pos,__t2406t__length,__t2428t,&__t2429t__unsafe_ptr,&__t2429t__pos,&__t2429t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2430t__pos=__t2429t__pos;
  __t2430t__length=__t2429t__length;
  v__pos=__t2430t__pos;
  v__length=__t2430t__length;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t2432t__);
  __t2431t=__t_complain;
  i=__t2432t__;
  __t2431t=__t2431t==0;
  if(!__t2431t){
  break;
  }
  __t2433t=2.0;
  __t_errcode=add__t1514t(__t2406t__buf__unsafe_ptr,__t2406t__buf__unsafe_size,__t2406t__buf__unsafe_offset,__t2406t__buf__unsafe_align,&__t2406t__pos,__t2406t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2406t__buf__unsafe_ptr,v__pos,v__length,&__t2434t__unsafe_ptr,&__t2434t__pos,&__t2434t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1514t(__t2406t__buf__unsafe_ptr,__t2406t__buf__unsafe_size,__t2406t__buf__unsafe_offset,__t2406t__buf__unsafe_align,&__t2406t__pos,__t2406t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2406t__buf__unsafe_ptr,__t2434t__pos,__t2434t__length,&__t2435t__unsafe_ptr,&__t2435t__pos,&__t2435t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1721t(__t2406t__buf__unsafe_ptr,__t2406t__buf__unsafe_size,__t2406t__buf__unsafe_offset,__t2406t__buf__unsafe_align,&__t2406t__pos,__t2406t__length,__t2433t,__t2406t__buf__unsafe_ptr,__t2435t__pos,__t2435t__length,&__t2436t__unsafe_ptr,&__t2436t__pos,&__t2436t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2436t__pos;
  v__length=__t2436t__length;
  }
  __t2437t=0;
  __t_errcode=get__t1452t(__t2406t__buf__unsafe_ptr,v__pos,v__length,__t2437t,&__t2438t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2438t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2439t__value,__t2438t__,8);
  print__t374t(__t2439t__value);
  
  __t_failure:exists__t436t(__t2418t__unsafe_ptr,&__t2419t____t1394t____t511t__);
  if(__t2419t____t1394t____t511t__){
  free__t502t(&__t2418t__unsafe_ptr);
  }
  exists__t436t(__t2414t__unsafe_ptr,&__t2415t____t1394t____t511t__);
  if(__t2415t____t1394t____t511t__){
  free__t502t(&__t2414t__unsafe_ptr);
  }
  exists__t436t(__t2409t__unsafe_ptr,&__t2410t____t511t__);
  if(__t2410t____t511t__){
  free__t502t(&__t2409t__unsafe_ptr);
  }
  exists__t436t(__t2404t__unsafe_ptr,&__t2405t____t511t__);
  if(__t2405t____t511t__){
  free__t502t(&__t2404t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1320t(int64_t value, const char** __t2530t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2530t=ret;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2441t() {
  char __t2442t=0;
  char __t2444t=0;
  int64_t __t2445t=0;
  int64_t error=0;
  const char* __t2446t__=0;
  int __t_complain=0;
  __t_complain=safe_main__t2401t();
  __t2442t=__t_complain;
  __t2442t=__t2442t==0;
  __t2445t=__t_complain;
  __t2444t=(__t_complain==0);
  __t_complain=0;
  error=__t2445t;
  __t2444t=__t2444t==0;
  if(__t2444t){
  cstr__t1320t(error,&__t2446t__);
  print__t369t(__t2446t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2441t();return 0;}