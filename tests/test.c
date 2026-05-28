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

static inline __attribute__((always_inline)) void float____buffer__t2431t(char** __t2454t, uint64_t* __t2455t, uint16_t* __t2456t, uint16_t* __t2457t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2454t=unsafe_ptr;
  *__t2455t=unsafe_size;
  *__t2456t=unsafe_offset;
  *__t2457t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2458t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2458t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2459t) {
  char* allocated=*__t2459t;
  if(allocated){
  free(allocated);
  }
  *__t2459t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2460t) {
  int value=0;
  *__t2460t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2461t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2461t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2462t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2462t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2463t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2463t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2464t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2464t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2465t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2465t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2466t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2466t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2467t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2467t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2468t) {
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
  *__t2468t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2469t, uint64_t* __t2470t, uint16_t* __t2471t, uint16_t* __t2472t, uint64_t size, char** __t2473t, uint64_t* __t2474t, uint16_t* __t2475t, uint16_t* __t2476t) {
  char* buffer__unsafe_ptr=*__t2469t;
  uint64_t buffer__unsafe_size=*__t2470t;
  uint16_t buffer__unsafe_offset=*__t2471t;
  uint16_t buffer__unsafe_align=*__t2472t;
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
  *__t2469t=buffer__unsafe_ptr;
  *__t2470t=buffer__unsafe_size;
  *__t2471t=buffer__unsafe_offset;
  *__t2472t=buffer__unsafe_align;
  *__t2473t=buffer__unsafe_ptr;
  *__t2474t=buffer__unsafe_size;
  *__t2475t=buffer__unsafe_offset;
  *__t2476t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2477t) {
  goto __t_return;
  __t_return:
  *__t2477t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1345t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2478t, uint64_t* __t2479t, uint64_t* __t2480t) {
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__pos=0;
  uint64_t __t1347t__length=0;
  __t1347t__unsafe_ptr=unsafe_ptr;
  __t1347t__pos=pos;
  __t1347t__length=length;
  goto __t_return;
  __t_return:
  *__t2478t=__t1347t__unsafe_ptr;
  *__t2479t=__t1347t__pos;
  *__t2480t=__t1347t__length;
}

static inline __attribute__((always_inline)) int vec__t1397t(char** __t2481t, uint64_t* __t2482t, uint16_t* __t2483t, uint16_t* __t2484t, char** __t2485t, uint64_t* __t2486t, uint64_t* __t2487t) {
  char* buf__unsafe_ptr=*__t2481t;
  uint64_t buf__unsafe_size=*__t2482t;
  uint16_t buf__unsafe_offset=*__t2483t;
  uint16_t buf__unsafe_align=*__t2484t;
  uint64_t __t1398t__=0;
  uint64_t __t1399t=0;
  char __t1400t__=0;
  uint64_t __t1401t__=0;
  uint64_t __t1402t=0;
  char __t1403t__=0;
  uint64_t __t1404t=0;
  uint64_t __t1405t__=0;
  char* __t1406t__unsafe_ptr=0;
  uint64_t __t1406t__pos=0;
  uint64_t __t1406t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(buf__unsafe_align,&__t1398t__);
  __t1399t=8;
  neq__t143t(__t1398t__,__t1399t,&__t1400t__);
  if(__t1400t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t1401t__);
  __t1402t=0;
  neq__t143t(__t1401t__,__t1402t,&__t1403t__);
  if(__t1403t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1404t=0;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1405t__);
  vec__t1345t(buf__unsafe_ptr,__t1404t,__t1405t__,&__t1406t__unsafe_ptr,&__t1406t__pos,&__t1406t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2481t=buf__unsafe_ptr;
  *__t2482t=buf__unsafe_size;
  *__t2483t=buf__unsafe_offset;
  *__t2484t=buf__unsafe_align;
  *__t2485t=__t1406t__unsafe_ptr;
  *__t2486t=__t1406t__pos;
  *__t2487t=__t1406t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1357t(char** __t2488t, uint64_t* __t2489t, uint16_t* __t2490t, uint16_t* __t2491t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2488t=unsafe_ptr;
  *__t2489t=unsafe_size;
  *__t2490t=unsafe_offset;
  *__t2491t=unsafe_align;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t2492t, uint64_t* __t2493t, uint16_t* __t2494t, uint16_t* __t2495t, char** __t2496t, uint64_t* __t2497t, uint16_t* __t2498t, uint16_t* __t2499t, uint64_t* __t2500t) {
  char* buf__unsafe_ptr=*__t2492t;
  uint64_t buf__unsafe_size=*__t2493t;
  uint16_t buf__unsafe_offset=*__t2494t;
  uint16_t buf__unsafe_align=*__t2495t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t2492t=buf__unsafe_ptr;
  *__t2493t=buf__unsafe_size;
  *__t2494t=buf__unsafe_offset;
  *__t2495t=buf__unsafe_align;
  *__t2496t=buf__unsafe_ptr;
  *__t2497t=buf__unsafe_size;
  *__t2498t=buf__unsafe_offset;
  *__t2499t=buf__unsafe_align;
  *__t2500t=pos;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2501t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2501t=z;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2502t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2502t=z;
}

static inline __attribute__((always_inline)) int vec__t1417t(char** __t2503t, uint64_t* __t2504t, uint16_t* __t2505t, uint16_t* __t2506t, uint64_t* __t2507t, uint64_t length, char** __t2508t, uint64_t* __t2509t, uint64_t* __t2510t) {
  char* allocator__buf__unsafe_ptr=*__t2503t;
  uint64_t allocator__buf__unsafe_size=*__t2504t;
  uint16_t allocator__buf__unsafe_offset=*__t2505t;
  uint16_t allocator__buf__unsafe_align=*__t2506t;
  uint64_t allocator__pos=*__t2507t;
  uint64_t __t1418t__=0;
  uint64_t __t1419t=0;
  char __t1420t__=0;
  uint64_t __t1421t__=0;
  uint64_t __t1422t=0;
  char __t1423t__=0;
  uint64_t __t1424t__=0;
  uint64_t __t1425t__=0;
  char __t1426t__=0;
  uint64_t start=0;
  uint64_t __t1427t__=0;
  char* __t1428t__unsafe_ptr=0;
  uint64_t __t1428t__pos=0;
  uint64_t __t1428t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(allocator__buf__unsafe_align,&__t1418t__);
  __t1419t=8;
  neq__t143t(__t1418t__,__t1419t,&__t1420t__);
  if(__t1420t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(allocator__buf__unsafe_offset,&__t1421t__);
  __t1422t=0;
  neq__t143t(__t1421t__,__t1422t,&__t1423t__);
  if(__t1423t__){
  __t_errcode=37;
  goto __t_failure;
  }
  add__t171t(allocator__pos,length,&__t1424t__);
  len__t598t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1425t__);
  gt__t272t(__t1424t__,__t1425t__,&__t1426t__);
  if(__t1426t__){
  __t_errcode=38;
  goto __t_failure;
  }
  start=allocator__pos;
  add__t171t(allocator__pos,length,&__t1427t__);
  allocator__pos=__t1427t__;
  vec__t1345t(allocator__buf__unsafe_ptr,start,length,&__t1428t__unsafe_ptr,&__t1428t__pos,&__t1428t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2503t=allocator__buf__unsafe_ptr;
  *__t2504t=allocator__buf__unsafe_size;
  *__t2505t=allocator__buf__unsafe_offset;
  *__t2506t=allocator__buf__unsafe_align;
  *__t2507t=allocator__pos;
  *__t2508t=__t1428t__unsafe_ptr;
  *__t2509t=__t1428t__pos;
  *__t2510t=__t1428t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2511t, uint64_t* __t2512t) {
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
  *__t2511t=from;
  *__t2512t=to;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2513t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2513t=z;
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

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2516t) {
  *__t2516t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2517t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2517t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t1446t(char** __t2518t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2519t) {
  char* v__unsafe_ptr=*__t2518t;
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
  *__t2518t=v__unsafe_ptr;
  *__t2519t=__t1451t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1452t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2520t) {
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
  *__t2520t=__t1457t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1459t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2521t) {
  char* __t1460t__=0;
  double __t1461t__z=0;
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
  memcpy(&__t1461t__z,__t1460t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2521t=__t1461t__z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2522t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2522t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2523t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2523t=z;
}

static inline __attribute__((always_inline)) int add__t1489t(char** __t2524t, uint64_t* __t2525t, uint16_t* __t2526t, uint16_t* __t2527t, uint64_t* __t2528t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2529t, uint64_t* __t2530t, uint64_t* __t2531t) {
  char* allocator__buf__unsafe_ptr=*__t2524t;
  uint64_t allocator__buf__unsafe_size=*__t2525t;
  uint16_t allocator__buf__unsafe_offset=*__t2526t;
  uint16_t allocator__buf__unsafe_align=*__t2527t;
  uint64_t allocator__pos=*__t2528t;
  int __t1490t=0;
  char __t1491t__=0;
  char* __t1492t__unsafe_ptr=0;
  uint64_t __t1492t__pos=0;
  uint64_t __t1492t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1493t__from=0;
  uint64_t __t1493t__to=0;
  uint64_t __t1494t__from=0;
  uint64_t __t1494t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __t1495t=0;
  uint64_t __t1496t__=0;
  uint64_t i=0;
  char* __t1497t__=0;
  char* __t1498t__=0;
  double __t1499t__z=0;
  double __t1500t__=0;
  double __t1501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v1__length,v2__length,&__t1491t__);
  if(__t1491t__){
  __t_errcode=39;
  goto __t_failure;
  }
  __t_errcode=vec__t1417t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,v1__length,&__t1492t__unsafe_ptr,&__t1492t__pos,&__t1492t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1492t__unsafe_ptr;
  v__pos=__t1492t__pos;
  v__length=__t1492t__length;
  range__t461t(v1__length,&__t1493t__from,&__t1493t__to);
  __t1494t__from=__t1493t__from;
  __t1494t__to=__t1493t__to;
  it__from=__t1494t__from;
  it__to=__t1494t__to;
  p1=v1__unsafe_ptr;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1496t__);
  __t1495t=__t_complain;
  i=__t1496t__;
  __t1495t=__t1495t==0;
  if(!__t1495t){
  break;
  }
  __t_errcode=mutget__t1446t(&v__unsafe_ptr,v__pos,v__length,i,&__t1497t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1452t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1498t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1499t__z,__t1498t__,8);
  __t_errcode=at__t1459t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1500t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t149t(__t1499t__z,__t1500t__,&__t1501t__);
  if(!__t1497t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1497t__,&__t1501t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2524t=allocator__buf__unsafe_ptr;
  *__t2525t=allocator__buf__unsafe_size;
  *__t2526t=allocator__buf__unsafe_offset;
  *__t2527t=allocator__buf__unsafe_align;
  *__t2528t=allocator__pos;
  *__t2529t=v__unsafe_ptr;
  *__t2530t=v__pos;
  *__t2531t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2427t() {
  double __t2428t=0;
  double __t2433t=0;
  char* __t2434t__unsafe_ptr=0;
  uint64_t __t2434t__unsafe_size=0;
  uint16_t __t2434t__unsafe_offset=0;
  uint16_t __t2434t__unsafe_align=0;
  uint64_t __t2435t=0;
  char* __t2436t__unsafe_ptr=0;
  uint64_t __t2436t__unsafe_size=0;
  uint16_t __t2436t__unsafe_offset=0;
  uint16_t __t2436t__unsafe_align=0;
  char __t2437t____t511t__=0;
  char* __t2438t__unsafe_ptr=0;
  uint64_t __t2438t__pos=0;
  uint64_t __t2438t__length=0;
  char* __t2439t__unsafe_ptr=0;
  uint64_t __t2439t__pos=0;
  uint64_t __t2439t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* __t2440t__unsafe_ptr=0;
  uint64_t __t2440t__unsafe_size=0;
  uint16_t __t2440t__unsafe_offset=0;
  uint16_t __t2440t__unsafe_align=0;
  uint64_t __t2441t=0;
  char* __t2442t__unsafe_ptr=0;
  uint64_t __t2442t__unsafe_size=0;
  uint16_t __t2442t__unsafe_offset=0;
  uint16_t __t2442t__unsafe_align=0;
  char __t2443t____t511t__=0;
  char* __t2444t__buf__unsafe_ptr=0;
  uint64_t __t2444t__buf__unsafe_size=0;
  uint16_t __t2444t__buf__unsafe_offset=0;
  uint16_t __t2444t__buf__unsafe_align=0;
  uint64_t __t2444t__pos=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  char* __t2446t=0;
  uint64_t __t2447t=0;
  uint64_t __t2448t=0;
  char* __t2449t__unsafe_ptr=0;
  uint64_t __t2449t__pos=0;
  uint64_t __t2449t__length=0;
  uint64_t __t2450t=0;
  char* __t2451t__=0;
  double __t2452t__z=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2428t=5.0;
  __t2433t=10.0;
  float____buffer__t2431t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align);
  __t2435t=2;
  __t_errcode=alloc__t509t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align,__t2435t,&__t2436t__unsafe_ptr,&__t2436t__unsafe_size,&__t2436t__unsafe_offset,&__t2436t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2434t__unsafe_ptr,&__t2428t,8);
  memcpy(__t2434t__unsafe_ptr+8,&__t2433t,8);
  __t_errcode=vec__t1397t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align,&__t2438t__unsafe_ptr,&__t2438t__pos,&__t2438t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2439t__unsafe_ptr=__t2438t__unsafe_ptr;
  __t2439t__pos=__t2438t__pos;
  __t2439t__length=__t2438t__length;
  v__unsafe_ptr=__t2439t__unsafe_ptr;
  v__pos=__t2439t__pos;
  v__length=__t2439t__length;
  float____t_buffer____buffer__t1357t(&__t2440t__unsafe_ptr,&__t2440t__unsafe_size,&__t2440t__unsafe_offset,&__t2440t__unsafe_align);
  __t2441t=128;
  __t_errcode=alloc__t509t(&__t2440t__unsafe_ptr,&__t2440t__unsafe_size,&__t2440t__unsafe_offset,&__t2440t__unsafe_align,__t2441t,&__t2442t__unsafe_ptr,&__t2442t__unsafe_size,&__t2442t__unsafe_offset,&__t2442t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t2442t__unsafe_ptr,&__t2442t__unsafe_size,&__t2442t__unsafe_offset,&__t2442t__unsafe_align,&__t2444t__buf__unsafe_ptr,&__t2444t__buf__unsafe_size,&__t2444t__buf__unsafe_offset,&__t2444t__buf__unsafe_align,&__t2444t__pos);
  allocator__buf__unsafe_ptr=__t2444t__buf__unsafe_ptr;
  allocator__buf__unsafe_size=__t2444t__buf__unsafe_size;
  allocator__buf__unsafe_offset=__t2444t__buf__unsafe_offset;
  allocator__buf__unsafe_align=__t2444t__buf__unsafe_align;
  allocator__pos=__t2444t__pos;
  __t2446t="\x00\x00\x00\x00\x00\x00\xf0?\x00\x00\x00\x00\x00\x00\xf0?";
  __t2447t=0;
  __t2448t=2;
  __t_errcode=add__t1489t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,v__unsafe_ptr,v__pos,v__length,__t2446t,__t2447t,__t2448t,&__t2449t__unsafe_ptr,&__t2449t__pos,&__t2449t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2449t__unsafe_ptr;
  v__pos=__t2449t__pos;
  v__length=__t2449t__length;
  __t2450t=0;
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,__t2450t,&__t2451t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2451t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2452t__z,__t2451t__,8);
  print__t374t(__t2452t__z);
  
  __t_failure:exists__t436t(__t2442t__unsafe_ptr,&__t2443t____t511t__);
  if(__t2443t____t511t__){
  free__t502t(&__t2442t__unsafe_ptr);
  }
  exists__t436t(__t2436t__unsafe_ptr,&__t2437t____t511t__);
  if(__t2437t____t511t__){
  free__t502t(&__t2436t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2427t();return 0;}