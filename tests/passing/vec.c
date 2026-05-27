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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1361t(char** __t2452t, uint64_t* __t2453t, uint16_t* __t2454t, uint16_t* __t2455t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2452t=unsafe_ptr;
  *__t2453t=unsafe_size;
  *__t2454t=unsafe_offset;
  *__t2455t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2456t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2456t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2457t) {
  char* allocated=*__t2457t;
  if(allocated){
  free(allocated);
  }
  *__t2457t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2458t) {
  int value=0;
  *__t2458t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2459t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2459t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2460t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2460t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2461t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2461t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2462t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2462t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2463t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2463t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2464t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2464t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2465t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2465t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2466t) {
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
  *__t2466t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2467t, uint64_t* __t2468t, uint16_t* __t2469t, uint16_t* __t2470t, uint64_t size, char** __t2471t, uint64_t* __t2472t, uint16_t* __t2473t, uint16_t* __t2474t) {
  char* buffer__unsafe_ptr=*__t2467t;
  uint64_t buffer__unsafe_size=*__t2468t;
  uint16_t buffer__unsafe_offset=*__t2469t;
  uint16_t buffer__unsafe_align=*__t2470t;
  int __t510t=0;
  char __t511t__=0;
  char* ptr=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  char* __t520t__unsafe_ptr=0;
  uint64_t __t520t__unsafe_size=0;
  uint16_t __t520t__unsafe_offset=0;
  uint16_t __t520t__unsafe_align=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t bytes=0;
  uint64_t __t525t=0;
  char __t526t__=0;
  char* __t527t__=0;
  uint64_t __t528t=0;
  char* __t530t__unsafe_ptr=0;
  uint64_t __t530t__unsafe_size=0;
  uint16_t __t530t__unsafe_offset=0;
  uint16_t __t530t__unsafe_align=0;
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
  __t520t__unsafe_ptr=buffer__unsafe_ptr;
  __t520t__unsafe_size=buffer__unsafe_size;
  __t520t__unsafe_offset=buffer__unsafe_offset;
  __t520t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t521t=0;
  neq__t143t(buffer__unsafe_size,__t521t,&__t522t__);
  if(__t522t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t523t__);
  mul__t195t(__t523t__,size,&__t524t__);
  bytes=__t524t__;
  __t525t=0;
  eq__t119t(bytes,__t525t,&__t526t__);
  if(__t526t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t527t__;
  __t528t=0;
  zero__t503t(buffer__unsafe_ptr,__t528t,bytes);
  __t530t__unsafe_ptr=buffer__unsafe_ptr;
  __t530t__unsafe_size=buffer__unsafe_size;
  __t530t__unsafe_offset=buffer__unsafe_offset;
  __t530t__unsafe_align=buffer__unsafe_align;
  __t520t__unsafe_ptr=__t530t__unsafe_ptr;
  __t520t__unsafe_size=__t530t__unsafe_size;
  __t520t__unsafe_offset=__t530t__unsafe_offset;
  __t520t__unsafe_align=__t530t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(__t520t__unsafe_ptr,&__t511t__);
  if(__t511t__){
  __t520t__unsafe_ptr=__t520t__unsafe_ptr;
  free__t502t(&__t520t__unsafe_ptr);
  }
  __t_return:
  *__t2467t=buffer__unsafe_ptr;
  *__t2468t=buffer__unsafe_size;
  *__t2469t=buffer__unsafe_offset;
  *__t2470t=buffer__unsafe_align;
  *__t2471t=__t520t__unsafe_ptr;
  *__t2472t=__t520t__unsafe_size;
  *__t2473t=__t520t__unsafe_offset;
  *__t2474t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2475t) {
  goto __t_return;
  __t_return:
  *__t2475t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t2476t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2476t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t2477t) {
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
  *__t2477t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2478t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2478t=z;
}

static inline __attribute__((always_inline)) void circular__t1359t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2479t, uint64_t length, char** __t2480t, uint64_t* __t2481t, uint16_t* __t2482t, uint16_t* __t2483t, uint64_t* __t2484t, uint64_t* __t2485t) {
  uint64_t pos=*__t2479t;
  goto __t_return;
  __t_return:
  *__t2479t=pos;
  *__t2480t=buf__unsafe_ptr;
  *__t2481t=buf__unsafe_size;
  *__t2482t=buf__unsafe_offset;
  *__t2483t=buf__unsafe_align;
  *__t2484t=pos;
  *__t2485t=length;
}

static inline __attribute__((always_inline)) int circular__t1385t(char** __t2486t, uint64_t* __t2487t, uint16_t* __t2488t, uint16_t* __t2489t, char** __t2490t, uint64_t* __t2491t, uint16_t* __t2492t, uint16_t* __t2493t, uint64_t* __t2494t, uint64_t* __t2495t) {
  char* buf__unsafe_ptr=*__t2486t;
  uint64_t buf__unsafe_size=*__t2487t;
  uint16_t buf__unsafe_offset=*__t2488t;
  uint16_t buf__unsafe_align=*__t2489t;
  int __t1386t=0;
  int __t1387t=0;
  uint64_t __t1388t=0;
  uint64_t __t1389t=0;
  uint64_t pos=0;
  int __t1390t=0;
  uint64_t __t1391t__=0;
  uint64_t __t1392t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1393t__=0;
  char* __t1394t__buf__unsafe_ptr=0;
  uint64_t __t1394t__buf__unsafe_size=0;
  uint16_t __t1394t__buf__unsafe_offset=0;
  uint16_t __t1394t__buf__unsafe_align=0;
  uint64_t __t1394t__pos=0;
  uint64_t __t1394t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1388t=0;
  __t1389t=__t1388t;
  pos=__t1389t;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1391t__);
  __t_errcode=sub__t348t(__t1391t__,pos,&__t1392t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1392t__;
  start=pos;
  add__t171t(pos,length,&__t1393t__);
  pos=__t1393t__;
  circular__t1359t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1394t__buf__unsafe_ptr,&__t1394t__buf__unsafe_size,&__t1394t__buf__unsafe_offset,&__t1394t__buf__unsafe_align,&__t1394t__pos,&__t1394t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2486t=buf__unsafe_ptr;
  *__t2487t=buf__unsafe_size;
  *__t2488t=buf__unsafe_offset;
  *__t2489t=buf__unsafe_align;
  *__t2490t=__t1394t__buf__unsafe_ptr;
  *__t2491t=__t1394t__buf__unsafe_size;
  *__t2492t=__t1394t__buf__unsafe_offset;
  *__t2493t=__t1394t__buf__unsafe_align;
  *__t2494t=__t1394t__pos;
  *__t2495t=__t1394t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1355t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1349t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2496t, uint64_t* __t2497t, uint64_t* __t2498t) {
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__pos=0;
  uint64_t __t1351t__length=0;
  __t1351t__unsafe_ptr=unsafe_ptr;
  __t1351t__pos=pos;
  __t1351t__length=length;
  goto __t_return;
  __t_return:
  *__t2496t=__t1351t__unsafe_ptr;
  *__t2497t=__t1351t__pos;
  *__t2498t=__t1351t__length;
}

int vec__t1395t(uint64_t length, char** __t2499t, uint64_t* __t2500t, uint64_t* __t2501t) {
  char* __t1396t__unsafe_ptr=0;
  uint64_t __t1396t__unsafe_size=0;
  uint16_t __t1396t__unsafe_offset=0;
  uint16_t __t1396t__unsafe_align=0;
  char* __t1397t__unsafe_ptr=0;
  uint64_t __t1397t__unsafe_size=0;
  uint16_t __t1397t__unsafe_offset=0;
  uint16_t __t1397t__unsafe_align=0;
  char __t1398t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1399t=0;
  char* __t1400t__unsafe_ptr=0;
  uint64_t __t1400t__pos=0;
  uint64_t __t1400t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1361t(&__t1396t__unsafe_ptr,&__t1396t__unsafe_size,&__t1396t__unsafe_offset,&__t1396t__unsafe_align);
  __t_errcode=alloc__t509t(&__t1396t__unsafe_ptr,&__t1396t__unsafe_size,&__t1396t__unsafe_offset,&__t1396t__unsafe_align,length,&__t1397t__unsafe_ptr,&__t1397t__unsafe_size,&__t1397t__unsafe_offset,&__t1397t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1399t=0;
  vec__t1349t(__t1397t__unsafe_ptr,__t1399t,length,&__t1400t__unsafe_ptr,&__t1400t__pos,&__t1400t__length);
  __t1400t__unsafe_ptr=__t1397t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1400t__unsafe_ptr,&__t1398t____t511t__);
  if(__t1398t____t511t__){
  __t1400t__unsafe_ptr=__t1400t__unsafe_ptr;
  free__t502t(&__t1400t__unsafe_ptr);
  }
  __t_return:
  *__t2499t=__t1400t__unsafe_ptr;
  *__t2500t=__t1400t__pos;
  *__t2501t=__t1400t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2502t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2502t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2503t) {
  *__t2503t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2504t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2504t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t1450t(char** __t2505t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2506t) {
  char* v__unsafe_ptr=*__t2505t;
  char __t1451t__=0;
  uint64_t __t1452t=0;
  uint64_t __t1453t__=0;
  uint64_t __t1454t__=0;
  char* __t1455t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1451t__);
  if(__t1451t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1452t=8;
  add__t171t(i,v__pos,&__t1453t__);
  mul__t195t(__t1452t,__t1453t__,&__t1454t__);
  add__t504t(v__unsafe_ptr,__t1454t__,&__t1455t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2505t=v__unsafe_ptr;
  *__t2506t=__t1455t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2507t, uint64_t* __t2508t) {
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
  *__t2507t=from;
  *__t2508t=to;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2509t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2509t=z;
}

static inline __attribute__((always_inline)) int vec__t1433t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2510t, uint64_t allocator__length, uint64_t length, char** __t2511t, uint64_t* __t2512t, uint64_t* __t2513t) {
  uint64_t allocator__pos=*__t2510t;
  uint64_t __t1434t__=0;
  uint64_t __t1435t=0;
  char __t1436t__=0;
  uint64_t __t1437t__=0;
  uint64_t __t1438t=0;
  char __t1439t__=0;
  uint64_t __t1440t__=0;
  char __t1441t__=0;
  uint64_t __t1442t=0;
  uint64_t start=0;
  uint64_t __t1443t__=0;
  char __t1444t__=0;
  uint64_t __t1445t=0;
  uint64_t __t1446t__=0;
  uint64_t __t1447t=0;
  char* __t1448t__unsafe_ptr=0;
  uint64_t __t1448t__pos=0;
  uint64_t __t1448t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(allocator__buf__unsafe_align,&__t1434t__);
  __t1435t=8;
  neq__t143t(__t1434t__,__t1435t,&__t1436t__);
  if(__t1436t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(allocator__buf__unsafe_offset,&__t1437t__);
  __t1438t=0;
  neq__t143t(__t1437t__,__t1438t,&__t1439t__);
  if(__t1439t__){
  __t_errcode=37;
  goto __t_failure;
  }
  len__t602t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1440t__);
  gt__t272t(length,__t1440t__,&__t1441t__);
  if(__t1441t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t1442t=allocator__pos;
  start=__t1442t;
  add__t171t(allocator__pos,length,&__t1443t__);
  allocator__pos=__t1443t__;
  ge__t320t(allocator__pos,allocator__length,&__t1444t__);
  if(__t1444t__){
  __t1445t=0;
  add__t171t(length,__t1445t,&__t1446t__);
  allocator__pos=__t1446t__;
  __t1447t=0;
  start=__t1447t;
  }
  vec__t1349t(allocator__buf__unsafe_ptr,start,length,&__t1448t__unsafe_ptr,&__t1448t__pos,&__t1448t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2510t=allocator__pos;
  *__t2511t=__t1448t__unsafe_ptr;
  *__t2512t=__t1448t__pos;
  *__t2513t=__t1448t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t2514t, uint64_t r__to, uint64_t* __t2515t) {
  uint64_t r__from=*__t2514t;
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
  *__t2514t=r__from;
  *__t2515t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1456t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2516t) {
  char __t1457t__=0;
  uint64_t __t1458t=0;
  uint64_t __t1459t__=0;
  uint64_t __t1460t__=0;
  char* __t1461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1457t__);
  if(__t1457t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1458t=8;
  add__t171t(i,v__pos,&__t1459t__);
  mul__t195t(__t1458t,__t1459t__,&__t1460t__);
  add__t504t(v__unsafe_ptr,__t1460t__,&__t1461t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2516t=__t1461t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1463t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2517t) {
  char* __t1464t__=0;
  double __t1465t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,i,&__t1464t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1464t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1465t__value,__t1464t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2517t=__t1465t__value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2518t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2518t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2519t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2519t=z;
}

int add__t1518t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2520t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2521t, uint64_t* __t2522t, uint64_t* __t2523t) {
  uint64_t allocator__pos=*__t2520t;
  int __t1519t=0;
  char __t1520t__=0;
  char* __t1521t__unsafe_ptr=0;
  uint64_t __t1521t__pos=0;
  uint64_t __t1521t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1522t__from=0;
  uint64_t __t1522t__to=0;
  uint64_t __t1523t__from=0;
  uint64_t __t1523t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __t1524t=0;
  uint64_t __t1525t__=0;
  uint64_t i=0;
  char* __t1526t__=0;
  char* __t1527t__=0;
  double __t1528t__value=0;
  double __t1529t__=0;
  double __t1530t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v1__length,v2__length,&__t1520t__);
  if(__t1520t__){
  __t_errcode=39;
  goto __t_failure;
  }
  __t_errcode=vec__t1433t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1521t__unsafe_ptr,&__t1521t__pos,&__t1521t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1521t__unsafe_ptr;
  v__pos=__t1521t__pos;
  v__length=__t1521t__length;
  range__t461t(v1__length,&__t1522t__from,&__t1522t__to);
  __t1523t__from=__t1522t__from;
  __t1523t__to=__t1522t__to;
  it__from=__t1523t__from;
  it__to=__t1523t__to;
  p1=v1__unsafe_ptr;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1525t__);
  __t1524t=__t_complain;
  i=__t1525t__;
  __t1524t=__t1524t==0;
  if(!__t1524t){
  break;
  }
  __t_errcode=mutget__t1450t(&v__unsafe_ptr,v__pos,v__length,i,&__t1526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1456t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1527t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1528t__value,__t1527t__,8);
  __t_errcode=at__t1463t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t149t(__t1528t__value,__t1529t__,&__t1530t__);
  if(!__t1526t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1526t__,&__t1530t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2520t=allocator__pos;
  *__t2521t=v__unsafe_ptr;
  *__t2522t=v__pos;
  *__t2523t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1462t(double number, uint64_t i, double* __t2524t) {
  goto __t_return;
  __t_return:
  *__t2524t=number;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2525t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2525t=z;
}

static inline __attribute__((always_inline)) int mul__t1709t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2526t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2527t, uint64_t* __t2528t, uint64_t* __t2529t) {
  uint64_t allocator__pos=*__t2526t;
  int __t1710t=0;
  char* __t1711t__unsafe_ptr=0;
  uint64_t __t1711t__pos=0;
  uint64_t __t1711t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1712t__from=0;
  uint64_t __t1712t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1713t=0;
  uint64_t __t1714t__=0;
  uint64_t i=0;
  char* __t1715t__=0;
  char* __t1716t__=0;
  double __t1717t__value=0;
  double __t1718t__=0;
  double __t1719t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1433t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1711t__unsafe_ptr,&__t1711t__pos,&__t1711t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1711t__unsafe_ptr;
  v__pos=__t1711t__pos;
  v__length=__t1711t__length;
  range__t461t(v1__length,&__t1712t__from,&__t1712t__to);
  it__from=__t1712t__from;
  it__to=__t1712t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1714t__);
  __t1713t=__t_complain;
  i=__t1714t__;
  __t1713t=__t1713t==0;
  if(!__t1713t){
  break;
  }
  __t_errcode=mutget__t1450t(&v__unsafe_ptr,v__pos,v__length,i,&__t1715t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1456t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1716t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1717t__value,__t1716t__,8);
  at__t1462t(v2,i,&__t1718t__);
  mul__t173t(__t1717t__value,__t1718t__,&__t1719t__);
  if(!__t1715t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1715t__,&__t1719t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2526t=allocator__pos;
  *__t2527t=v__unsafe_ptr;
  *__t2528t=v__pos;
  *__t2529t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1725t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2530t, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2531t, uint64_t* __t2532t, uint64_t* __t2533t) {
  uint64_t allocator__pos=*__t2530t;
  char* __t1726t__unsafe_ptr=0;
  uint64_t __t1726t__pos=0;
  uint64_t __t1726t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1709t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1726t__unsafe_ptr,&__t1726t__pos,&__t1726t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2530t=allocator__pos;
  *__t2531t=__t1726t__unsafe_ptr;
  *__t2532t=__t1726t__pos;
  *__t2533t=__t1726t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t2405t() {
  char* __t2406t__unsafe_ptr=0;
  uint64_t __t2406t__unsafe_size=0;
  uint16_t __t2406t__unsafe_offset=0;
  uint16_t __t2406t__unsafe_align=0;
  uint64_t __t2407t=0;
  char* __t2408t__unsafe_ptr=0;
  uint64_t __t2408t__unsafe_size=0;
  uint16_t __t2408t__unsafe_offset=0;
  uint16_t __t2408t__unsafe_align=0;
  char __t2409t____t511t__=0;
  char* __t2410t__buf__unsafe_ptr=0;
  uint64_t __t2410t__buf__unsafe_size=0;
  uint16_t __t2410t__buf__unsafe_offset=0;
  uint16_t __t2410t__buf__unsafe_align=0;
  uint64_t __t2410t__pos=0;
  uint64_t __t2410t__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __t2411t__unsafe_ptr=0;
  uint64_t __t2411t__unsafe_size=0;
  uint16_t __t2411t__unsafe_offset=0;
  uint16_t __t2411t__unsafe_align=0;
  uint64_t __t2412t=0;
  char* __t2413t__unsafe_ptr=0;
  uint64_t __t2413t__unsafe_size=0;
  uint16_t __t2413t__unsafe_offset=0;
  uint16_t __t2413t__unsafe_align=0;
  char __t2414t____t511t__=0;
  char* __t2415t__buf__unsafe_ptr=0;
  uint64_t __t2415t__buf__unsafe_size=0;
  uint16_t __t2415t__buf__unsafe_offset=0;
  uint16_t __t2415t__buf__unsafe_align=0;
  uint64_t __t2415t__pos=0;
  uint64_t __t2415t__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __t2417t=0;
  char* __t2418t__unsafe_ptr=0;
  uint64_t __t2418t__pos=0;
  uint64_t __t2418t__length=0;
  char __t2419t____t1398t____t511t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2421t=0;
  char* __t2422t__unsafe_ptr=0;
  uint64_t __t2422t__pos=0;
  uint64_t __t2422t__length=0;
  char __t2423t____t1398t____t511t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t2424t=0;
  char* __t2425t__=0;
  double __t2426t=0;
  uint64_t __t2427t=0;
  char* __t2428t__=0;
  double __t2429t=0;
  uint64_t __t2430t=0;
  uint64_t __t2431t__from=0;
  uint64_t __t2431t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t2432t=0;
  char* __t2433t__unsafe_ptr=0;
  uint64_t __t2433t__pos=0;
  uint64_t __t2433t__length=0;
  char* __t2434t__unsafe_ptr=0;
  uint64_t __t2434t__pos=0;
  uint64_t __t2434t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t2435t=0;
  uint64_t __t2436t__=0;
  uint64_t i=0;
  double __t2437t=0;
  char* __t2438t__unsafe_ptr=0;
  uint64_t __t2438t__pos=0;
  uint64_t __t2438t__length=0;
  char* __t2439t__unsafe_ptr=0;
  uint64_t __t2439t__pos=0;
  uint64_t __t2439t__length=0;
  char* __t2440t__unsafe_ptr=0;
  uint64_t __t2440t__pos=0;
  uint64_t __t2440t__length=0;
  uint64_t __t2441t=0;
  char* __t2442t__=0;
  double __t2443t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1361t(&__t2406t__unsafe_ptr,&__t2406t__unsafe_size,&__t2406t__unsafe_offset,&__t2406t__unsafe_align);
  __t2407t=200;
  __t_errcode=alloc__t509t(&__t2406t__unsafe_ptr,&__t2406t__unsafe_size,&__t2406t__unsafe_offset,&__t2406t__unsafe_align,__t2407t,&__t2408t__unsafe_ptr,&__t2408t__unsafe_size,&__t2408t__unsafe_offset,&__t2408t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1385t(&__t2408t__unsafe_ptr,&__t2408t__unsafe_size,&__t2408t__unsafe_offset,&__t2408t__unsafe_align,&__t2410t__buf__unsafe_ptr,&__t2410t__buf__unsafe_size,&__t2410t__buf__unsafe_offset,&__t2410t__buf__unsafe_align,&__t2410t__pos,&__t2410t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1361t(&__t2411t__unsafe_ptr,&__t2411t__unsafe_size,&__t2411t__unsafe_offset,&__t2411t__unsafe_align);
  __t2412t=200;
  __t_errcode=alloc__t509t(&__t2411t__unsafe_ptr,&__t2411t__unsafe_size,&__t2411t__unsafe_offset,&__t2411t__unsafe_align,__t2412t,&__t2413t__unsafe_ptr,&__t2413t__unsafe_size,&__t2413t__unsafe_offset,&__t2413t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1385t(&__t2413t__unsafe_ptr,&__t2413t__unsafe_size,&__t2413t__unsafe_offset,&__t2413t__unsafe_align,&__t2415t__buf__unsafe_ptr,&__t2415t__buf__unsafe_size,&__t2415t__buf__unsafe_offset,&__t2415t__buf__unsafe_align,&__t2415t__pos,&__t2415t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t1355t();
  __t2417t=10;
  __t_errcode=vec__t1395t(__t2417t,&__t2418t__unsafe_ptr,&__t2418t__pos,&__t2418t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2418t__unsafe_ptr;
  v1__pos=__t2418t__pos;
  v1__length=__t2418t__length;
  new__t1355t();
  __t2421t=10;
  __t_errcode=vec__t1395t(__t2421t,&__t2422t__unsafe_ptr,&__t2422t__pos,&__t2422t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2422t__unsafe_ptr;
  v2__pos=__t2422t__pos;
  v2__length=__t2422t__length;
  __t2424t=0;
  __t_errcode=mutget__t1450t(&v1__unsafe_ptr,v1__pos,v1__length,__t2424t,&__t2425t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2426t=1.0;
  if(!__t2425t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2425t__,&__t2426t,8);
  __t2427t=0;
  __t_errcode=mutget__t1450t(&v2__unsafe_ptr,v2__pos,v2__length,__t2427t,&__t2428t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2429t=2.0;
  if(!__t2428t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2428t__,&__t2429t,8);
  __t2430t=5;
  range__t461t(__t2430t,&__t2431t__from,&__t2431t__to);
  it__from=__t2431t__from;
  it__to=__t2431t__to;
  __t2432t=10;
  __t_errcode=vec__t1433t(__t2410t__buf__unsafe_ptr,__t2410t__buf__unsafe_size,__t2410t__buf__unsafe_offset,__t2410t__buf__unsafe_align,&__t2410t__pos,__t2410t__length,__t2432t,&__t2433t__unsafe_ptr,&__t2433t__pos,&__t2433t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2434t__pos=__t2433t__pos;
  __t2434t__length=__t2433t__length;
  v__pos=__t2434t__pos;
  v__length=__t2434t__length;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t2436t__);
  __t2435t=__t_complain;
  i=__t2436t__;
  __t2435t=__t2435t==0;
  if(!__t2435t){
  break;
  }
  __t2437t=2.0;
  __t_errcode=add__t1518t(__t2410t__buf__unsafe_ptr,__t2410t__buf__unsafe_size,__t2410t__buf__unsafe_offset,__t2410t__buf__unsafe_align,&__t2410t__pos,__t2410t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2410t__buf__unsafe_ptr,v__pos,v__length,&__t2438t__unsafe_ptr,&__t2438t__pos,&__t2438t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1518t(__t2410t__buf__unsafe_ptr,__t2410t__buf__unsafe_size,__t2410t__buf__unsafe_offset,__t2410t__buf__unsafe_align,&__t2410t__pos,__t2410t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2410t__buf__unsafe_ptr,__t2438t__pos,__t2438t__length,&__t2439t__unsafe_ptr,&__t2439t__pos,&__t2439t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1725t(__t2410t__buf__unsafe_ptr,__t2410t__buf__unsafe_size,__t2410t__buf__unsafe_offset,__t2410t__buf__unsafe_align,&__t2410t__pos,__t2410t__length,__t2437t,__t2410t__buf__unsafe_ptr,__t2439t__pos,__t2439t__length,&__t2440t__unsafe_ptr,&__t2440t__pos,&__t2440t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2440t__pos;
  v__length=__t2440t__length;
  }
  __t2441t=0;
  __t_errcode=get__t1456t(__t2410t__buf__unsafe_ptr,v__pos,v__length,__t2441t,&__t2442t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2442t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2443t__value,__t2442t__,8);
  print__t374t(__t2443t__value);
  
  __t_failure:exists__t436t(__t2422t__unsafe_ptr,&__t2423t____t1398t____t511t__);
  if(__t2423t____t1398t____t511t__){
  __t2422t__unsafe_ptr=__t2422t__unsafe_ptr;
  free__t502t(&__t2422t__unsafe_ptr);
  }
  exists__t436t(__t2418t__unsafe_ptr,&__t2419t____t1398t____t511t__);
  if(__t2419t____t1398t____t511t__){
  __t2418t__unsafe_ptr=__t2418t__unsafe_ptr;
  free__t502t(&__t2418t__unsafe_ptr);
  }
  exists__t436t(__t2413t__unsafe_ptr,&__t2414t____t511t__);
  if(__t2414t____t511t__){
  __t2413t__unsafe_ptr=__t2413t__unsafe_ptr;
  free__t502t(&__t2413t__unsafe_ptr);
  }
  exists__t436t(__t2408t__unsafe_ptr,&__t2409t____t511t__);
  if(__t2409t____t511t__){
  __t2408t__unsafe_ptr=__t2408t__unsafe_ptr;
  free__t502t(&__t2408t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1324t(int64_t value, const char** __t2534t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2534t=ret;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2445t() {
  char __t2446t=0;
  char __t2448t=0;
  int64_t __t2449t=0;
  int64_t error=0;
  const char* __t2450t__=0;
  int __t_complain=0;
  __t_complain=safe_main__t2405t();
  __t2446t=__t_complain;
  __t2446t=__t2446t==0;
  __t2449t=__t_complain;
  __t2448t=(__t_complain==0);
  __t_complain=0;
  error=__t2449t;
  __t2448t=__t2448t==0;
  if(__t2448t){
  cstr__t1324t(error,&__t2450t__);
  print__t369t(__t2450t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2445t();return 0;}