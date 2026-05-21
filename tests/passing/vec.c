#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[49] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1331t(char** __t2394t, uint64_t* __t2395t, uint16_t* __t2396t, uint16_t* __t2397t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2394t=unsafe_ptr;
  *__t2395t=unsafe_size;
  *__t2396t=unsafe_offset;
  *__t2397t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2398t) {
  int value=0;
  *__t2398t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t2399t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t2399t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t2400t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t2400t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t2401t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2401t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t2402t) {
  char* allocated=*__t2402t;
  if(allocated){
  free(allocated);
  }
  *__t2402t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t2403t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2403t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t2404t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2404t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t2405t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2405t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t2406t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2406t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t2407t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2407t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t2408t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2408t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t2409t, uint64_t* __t2410t, uint16_t* __t2411t, uint16_t* __t2412t, uint64_t size, char** __t2413t, uint64_t* __t2414t, uint16_t* __t2415t, uint16_t* __t2416t) {
  char* buffer__unsafe_ptr=*__t2409t;
  uint64_t buffer__unsafe_size=*__t2410t;
  uint16_t buffer__unsafe_offset=*__t2411t;
  uint16_t buffer__unsafe_align=*__t2412t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t2409t=buffer__unsafe_ptr;
  *__t2410t=buffer__unsafe_size;
  *__t2411t=buffer__unsafe_offset;
  *__t2412t=buffer__unsafe_align;
  *__t2413t=__t521t__unsafe_ptr;
  *__t2414t=__t521t__unsafe_size;
  *__t2415t=__t521t__unsafe_offset;
  *__t2416t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2417t) {
  goto __t_return;
  __t_return:
  *__t2417t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t2418t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2418t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t2419t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2419t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t2420t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2420t=z;
}

static inline __attribute__((always_inline)) void circular__t1329t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t2421t, uint64_t length, char** __t2422t, uint64_t* __t2423t, uint16_t* __t2424t, uint16_t* __t2425t, uint64_t* __t2426t, uint64_t* __t2427t) {
  uint64_t pos=*__t2421t;
  goto __t_return;
  __t_return:
  *__t2421t=pos;
  *__t2422t=buf__unsafe_ptr;
  *__t2423t=buf__unsafe_size;
  *__t2424t=buf__unsafe_offset;
  *__t2425t=buf__unsafe_align;
  *__t2426t=pos;
  *__t2427t=length;
}

static inline __attribute__((always_inline)) int circular__t1355t(char** __t2428t, uint64_t* __t2429t, uint16_t* __t2430t, uint16_t* __t2431t, char** __t2432t, uint64_t* __t2433t, uint16_t* __t2434t, uint16_t* __t2435t, uint64_t* __t2436t, uint64_t* __t2437t) {
  char* buf__unsafe_ptr=*__t2428t;
  uint64_t buf__unsafe_size=*__t2429t;
  uint16_t buf__unsafe_offset=*__t2430t;
  uint16_t buf__unsafe_align=*__t2431t;
  int __t1356t=0;
  int __t1357t=0;
  uint64_t __t1358t=0;
  uint64_t __t1359t=0;
  uint64_t pos=0;
  int __t1360t=0;
  uint64_t __t1361t__=0;
  uint64_t __t1362t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1363t__=0;
  char* __t1364t__buf__unsafe_ptr=0;
  uint64_t __t1364t__buf__unsafe_size=0;
  uint16_t __t1364t__buf__unsafe_offset=0;
  uint16_t __t1364t__buf__unsafe_align=0;
  uint64_t __t1364t__pos=0;
  uint64_t __t1364t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1358t=0;
  __t1359t=__t1358t;
  pos=__t1359t;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1361t__);
  __t_errcode=sub__t347t(__t1361t__,pos,&__t1362t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1362t__;
  start=pos;
  add__t170t(pos,length,&__t1363t__);
  pos=__t1363t__;
  circular__t1329t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1364t__buf__unsafe_ptr,&__t1364t__buf__unsafe_size,&__t1364t__buf__unsafe_offset,&__t1364t__buf__unsafe_align,&__t1364t__pos,&__t1364t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2428t=buf__unsafe_ptr;
  *__t2429t=buf__unsafe_size;
  *__t2430t=buf__unsafe_offset;
  *__t2431t=buf__unsafe_align;
  *__t2432t=__t1364t__buf__unsafe_ptr;
  *__t2433t=__t1364t__buf__unsafe_size;
  *__t2434t=__t1364t__buf__unsafe_offset;
  *__t2435t=__t1364t__buf__unsafe_align;
  *__t2436t=__t1364t__pos;
  *__t2437t=__t1364t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1325t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1321t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2438t, uint64_t* __t2439t, uint64_t* __t2440t) {
  goto __t_return;
  __t_return:
  *__t2438t=unsafe_ptr;
  *__t2439t=pos;
  *__t2440t=length;
}

int vec__t1365t(uint64_t length, char** __t2441t, uint64_t* __t2442t, uint64_t* __t2443t) {
  char* __t1366t__unsafe_ptr=0;
  uint64_t __t1366t__unsafe_size=0;
  uint16_t __t1366t__unsafe_offset=0;
  uint16_t __t1366t__unsafe_align=0;
  char* __t1367t__unsafe_ptr=0;
  uint64_t __t1367t__unsafe_size=0;
  uint16_t __t1367t__unsafe_offset=0;
  uint16_t __t1367t__unsafe_align=0;
  uint64_t __t1368t____t510t=0;
  char __t1368t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1369t=0;
  char* __t1370t__unsafe_ptr=0;
  uint64_t __t1370t__pos=0;
  uint64_t __t1370t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1331t(&__t1366t__unsafe_ptr,&__t1366t__unsafe_size,&__t1366t__unsafe_offset,&__t1366t__unsafe_align);
  __t_errcode=alloc__t508t(&__t1366t__unsafe_ptr,&__t1366t__unsafe_size,&__t1366t__unsafe_offset,&__t1366t__unsafe_align,length,&__t1367t__unsafe_ptr,&__t1367t__unsafe_size,&__t1367t__unsafe_offset,&__t1367t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1367t__unsafe_ptr;
  buf__unsafe_size=__t1367t__unsafe_size;
  buf__unsafe_offset=__t1367t__unsafe_offset;
  buf__unsafe_align=__t1367t__unsafe_align;
  __t1369t=0;
  vec__t1321t(buf__unsafe_ptr,__t1369t,length,&__t1370t__unsafe_ptr,&__t1370t__pos,&__t1370t__length);
  goto __t_return;
  
  __t_failure:__t1368t____t510t=0;
  neq__t142t(__t1370t__length,__t1368t____t510t,&__t1368t____t511t__);
  if(__t1368t____t511t__){
  __t1370t__length=0;
  __t1370t__length=__t1370t__length;
  __t1370t__unsafe_ptr=__t1370t__unsafe_ptr;
  free__t501t(&__t1370t__unsafe_ptr);
  }
  __t_return:
  *__t2441t=__t1370t__unsafe_ptr;
  *__t2442t=__t1370t__pos;
  *__t2443t=__t1370t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t2444t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2444t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t2445t) {
  *__t2445t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t2446t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t2446t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t1410t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2447t) {
  char __t1411t__=0;
  uint64_t __t1412t=0;
  uint64_t __t1413t__=0;
  uint64_t __t1414t__=0;
  char* __t1415t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1411t__);
  if(__t1411t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1412t=8;
  add__t170t(i,v__pos,&__t1413t__);
  mul__t194t(__t1412t,__t1413t__,&__t1414t__);
  add__t503t(v__unsafe_ptr,__t1414t__,&__t1415t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2447t=__t1415t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t2448t, uint64_t* __t2449t) {
  int __t461t=0;
  uint64_t __t462t=0;
  uint64_t _from=0;
  uint64_t __t463t=0;
  uint64_t from=0;
  __t462t=0;
  _from=__t462t;
  __t463t=_from;
  from=__t463t;
  goto __t_return;
  __t_return:
  *__t2448t=from;
  *__t2449t=to;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t2450t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2450t=z;
}

static inline __attribute__((always_inline)) int vec__t1393t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2451t, uint64_t allocator__length, uint64_t length, char** __t2452t, uint64_t* __t2453t, uint64_t* __t2454t) {
  uint64_t allocator__pos=*__t2451t;
  uint64_t __t1394t__=0;
  uint64_t __t1395t=0;
  char __t1396t__=0;
  uint64_t __t1397t__=0;
  uint64_t __t1398t=0;
  char __t1399t__=0;
  uint64_t __t1400t__=0;
  char __t1401t__=0;
  uint64_t __t1402t=0;
  uint64_t start=0;
  uint64_t __t1403t__=0;
  char __t1404t__=0;
  uint64_t __t1405t=0;
  uint64_t __t1406t__=0;
  uint64_t __t1407t=0;
  char* __t1408t__unsafe_ptr=0;
  uint64_t __t1408t__pos=0;
  uint64_t __t1408t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t505t(allocator__buf__unsafe_align,&__t1394t__);
  __t1395t=8;
  neq__t142t(__t1394t__,__t1395t,&__t1396t__);
  if(__t1396t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t505t(allocator__buf__unsafe_offset,&__t1397t__);
  __t1398t=0;
  neq__t142t(__t1397t__,__t1398t,&__t1399t__);
  if(__t1399t__){
  __t_errcode=37;
  goto __t_failure;
  }
  len__t604t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1400t__);
  gt__t271t(length,__t1400t__,&__t1401t__);
  if(__t1401t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t1402t=allocator__pos;
  start=__t1402t;
  add__t170t(allocator__pos,length,&__t1403t__);
  allocator__pos=__t1403t__;
  ge__t319t(allocator__pos,allocator__length,&__t1404t__);
  if(__t1404t__){
  __t1405t=0;
  add__t170t(length,__t1405t,&__t1406t__);
  allocator__pos=__t1406t__;
  __t1407t=0;
  start=__t1407t;
  }
  vec__t1321t(allocator__buf__unsafe_ptr,start,length,&__t1408t__unsafe_ptr,&__t1408t__pos,&__t1408t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2451t=allocator__pos;
  *__t2452t=__t1408t__unsafe_ptr;
  *__t2453t=__t1408t__pos;
  *__t2454t=__t1408t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t2455t, uint64_t r__to, uint64_t* __t2456t) {
  uint64_t r__from=*__t2455t;
  char __t470t__=0;
  uint64_t ret=0;
  uint64_t __t471t=0;
  uint64_t __t472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t470t__);
  if(__t470t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t471t=1;
  add__t170t(ret,__t471t,&__t472t__);
  r__from=__t472t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2455t=r__from;
  *__t2456t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1416t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2457t) {
  char __t1417t__=0;
  uint64_t __t1418t=0;
  uint64_t __t1419t__=0;
  uint64_t __t1420t__=0;
  char* __t1421t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1417t__);
  if(__t1417t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1418t=8;
  add__t170t(i,v__pos,&__t1419t__);
  mul__t194t(__t1418t,__t1419t__,&__t1420t__);
  add__t503t(v__unsafe_ptr,__t1420t__,&__t1421t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2457t=__t1421t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1423t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t2458t) {
  char* __t1424t__=0;
  double __t1425t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,i,&__t1424t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1424t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1425t__number,__t1424t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2458t=__t1425t__number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t2459t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t2459t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t2460t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2460t=z;
}

int add__t1474t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2461t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2462t, uint64_t* __t2463t, uint64_t* __t2464t) {
  uint64_t allocator__pos=*__t2461t;
  int __t1475t=0;
  char __t1476t__=0;
  char* __t1477t__unsafe_ptr=0;
  uint64_t __t1477t__pos=0;
  uint64_t __t1477t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1478t__from=0;
  uint64_t __t1478t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __t1479t=0;
  uint64_t __t1480t__=0;
  uint64_t i=0;
  char* __t1481t__=0;
  char* __t1482t__=0;
  double __t1483t__number=0;
  double __t1484t__=0;
  double __t1485t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(v1__length,v2__length,&__t1476t__);
  if(__t1476t__){
  __t_errcode=39;
  goto __t_failure;
  }
  __t_errcode=vec__t1393t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1477t__unsafe_ptr,&__t1477t__pos,&__t1477t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1477t__unsafe_ptr;
  v__pos=__t1477t__pos;
  v__length=__t1477t__length;
  range__t460t(v1__length,&__t1478t__from,&__t1478t__to);
  it__from=__t1478t__from;
  it__to=__t1478t__to;
  p1=v1__unsafe_ptr;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1480t__);
  __t1479t=__t_complain;
  i=__t1480t__;
  __t1479t=__t1479t==0;
  if(!__t1479t){
  break;
  }
  __t_errcode=mutget__t1410t(v__unsafe_ptr,v__pos,v__length,i,&__t1481t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1416t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1483t__number,__t1482t__,8);
  __t_errcode=at__t1423t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t148t(__t1483t__number,__t1484t__,&__t1485t__);
  if(!__t1481t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1481t__,&__t1485t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2461t=allocator__pos;
  *__t2462t=v__unsafe_ptr;
  *__t2463t=v__pos;
  *__t2464t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1422t(double number, uint64_t i, double* __t2465t) {
  goto __t_return;
  __t_return:
  *__t2465t=number;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t2466t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2466t=z;
}

static inline __attribute__((always_inline)) int mul__t1663t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2467t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t2468t, uint64_t* __t2469t, uint64_t* __t2470t) {
  uint64_t allocator__pos=*__t2467t;
  int __t1664t=0;
  char* __t1665t__unsafe_ptr=0;
  uint64_t __t1665t__pos=0;
  uint64_t __t1665t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1666t__from=0;
  uint64_t __t1666t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1667t=0;
  uint64_t __t1668t__=0;
  uint64_t i=0;
  char* __t1669t__=0;
  char* __t1670t__=0;
  double __t1671t__number=0;
  double __t1672t__=0;
  double __t1673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1393t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1665t__unsafe_ptr,&__t1665t__pos,&__t1665t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1665t__unsafe_ptr;
  v__pos=__t1665t__pos;
  v__length=__t1665t__length;
  range__t460t(v1__length,&__t1666t__from,&__t1666t__to);
  it__from=__t1666t__from;
  it__to=__t1666t__to;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1668t__);
  __t1667t=__t_complain;
  i=__t1668t__;
  __t1667t=__t1667t==0;
  if(!__t1667t){
  break;
  }
  __t_errcode=mutget__t1410t(v__unsafe_ptr,v__pos,v__length,i,&__t1669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1416t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1670t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1670t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1671t__number,__t1670t__,8);
  at__t1422t(v2,i,&__t1672t__);
  mul__t172t(__t1671t__number,__t1672t__,&__t1673t__);
  if(!__t1669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1669t__,&__t1673t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2467t=allocator__pos;
  *__t2468t=v__unsafe_ptr;
  *__t2469t=v__pos;
  *__t2470t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1679t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2471t, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t2472t, uint64_t* __t2473t, uint64_t* __t2474t) {
  uint64_t allocator__pos=*__t2471t;
  char* __t1680t__unsafe_ptr=0;
  uint64_t __t1680t__pos=0;
  uint64_t __t1680t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1663t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1680t__unsafe_ptr,&__t1680t__pos,&__t1680t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2471t=allocator__pos;
  *__t2472t=__t1680t__unsafe_ptr;
  *__t2473t=__t1680t__pos;
  *__t2474t=__t1680t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t2347t() {
  char* __t2348t__unsafe_ptr=0;
  uint64_t __t2348t__unsafe_size=0;
  uint16_t __t2348t__unsafe_offset=0;
  uint16_t __t2348t__unsafe_align=0;
  uint64_t __t2349t=0;
  char* __t2350t__unsafe_ptr=0;
  uint64_t __t2350t__unsafe_size=0;
  uint16_t __t2350t__unsafe_offset=0;
  uint16_t __t2350t__unsafe_align=0;
  uint64_t __t2351t____t510t=0;
  char __t2351t____t511t__=0;
  char* __t2352t__buf__unsafe_ptr=0;
  uint64_t __t2352t__buf__unsafe_size=0;
  uint16_t __t2352t__buf__unsafe_offset=0;
  uint16_t __t2352t__buf__unsafe_align=0;
  uint64_t __t2352t__pos=0;
  uint64_t __t2352t__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __t2353t__unsafe_ptr=0;
  uint64_t __t2353t__unsafe_size=0;
  uint16_t __t2353t__unsafe_offset=0;
  uint16_t __t2353t__unsafe_align=0;
  uint64_t __t2354t=0;
  char* __t2355t__unsafe_ptr=0;
  uint64_t __t2355t__unsafe_size=0;
  uint16_t __t2355t__unsafe_offset=0;
  uint16_t __t2355t__unsafe_align=0;
  uint64_t __t2356t____t510t=0;
  char __t2356t____t511t__=0;
  char* __t2357t__buf__unsafe_ptr=0;
  uint64_t __t2357t__buf__unsafe_size=0;
  uint16_t __t2357t__buf__unsafe_offset=0;
  uint16_t __t2357t__buf__unsafe_align=0;
  uint64_t __t2357t__pos=0;
  uint64_t __t2357t__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __t2359t=0;
  char* __t2360t__unsafe_ptr=0;
  uint64_t __t2360t__pos=0;
  uint64_t __t2360t__length=0;
  uint64_t __t2361t____t1368t____t510t=0;
  char __t2361t____t1368t____t511t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t2363t=0;
  char* __t2364t__unsafe_ptr=0;
  uint64_t __t2364t__pos=0;
  uint64_t __t2364t__length=0;
  uint64_t __t2365t____t1368t____t510t=0;
  char __t2365t____t1368t____t511t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t2366t=0;
  char* __t2367t__=0;
  double __t2368t=0;
  uint64_t __t2369t=0;
  char* __t2370t__=0;
  double __t2371t=0;
  uint64_t __t2372t=0;
  uint64_t __t2373t__from=0;
  uint64_t __t2373t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t2374t=0;
  char* __t2375t__unsafe_ptr=0;
  uint64_t __t2375t__pos=0;
  uint64_t __t2375t__length=0;
  char* __t2376t__unsafe_ptr=0;
  uint64_t __t2376t__pos=0;
  uint64_t __t2376t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t2377t=0;
  uint64_t __t2378t__=0;
  uint64_t i=0;
  double __t2379t=0;
  char* __t2380t__unsafe_ptr=0;
  uint64_t __t2380t__pos=0;
  uint64_t __t2380t__length=0;
  char* __t2381t__unsafe_ptr=0;
  uint64_t __t2381t__pos=0;
  uint64_t __t2381t__length=0;
  char* __t2382t__unsafe_ptr=0;
  uint64_t __t2382t__pos=0;
  uint64_t __t2382t__length=0;
  uint64_t __t2383t=0;
  char* __t2384t__=0;
  double __t2385t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1331t(&__t2348t__unsafe_ptr,&__t2348t__unsafe_size,&__t2348t__unsafe_offset,&__t2348t__unsafe_align);
  __t2349t=200;
  __t_errcode=alloc__t508t(&__t2348t__unsafe_ptr,&__t2348t__unsafe_size,&__t2348t__unsafe_offset,&__t2348t__unsafe_align,__t2349t,&__t2350t__unsafe_ptr,&__t2350t__unsafe_size,&__t2350t__unsafe_offset,&__t2350t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1355t(&__t2350t__unsafe_ptr,&__t2350t__unsafe_size,&__t2350t__unsafe_offset,&__t2350t__unsafe_align,&__t2352t__buf__unsafe_ptr,&__t2352t__buf__unsafe_size,&__t2352t__buf__unsafe_offset,&__t2352t__buf__unsafe_align,&__t2352t__pos,&__t2352t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1331t(&__t2353t__unsafe_ptr,&__t2353t__unsafe_size,&__t2353t__unsafe_offset,&__t2353t__unsafe_align);
  __t2354t=200;
  __t_errcode=alloc__t508t(&__t2353t__unsafe_ptr,&__t2353t__unsafe_size,&__t2353t__unsafe_offset,&__t2353t__unsafe_align,__t2354t,&__t2355t__unsafe_ptr,&__t2355t__unsafe_size,&__t2355t__unsafe_offset,&__t2355t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1355t(&__t2355t__unsafe_ptr,&__t2355t__unsafe_size,&__t2355t__unsafe_offset,&__t2355t__unsafe_align,&__t2357t__buf__unsafe_ptr,&__t2357t__buf__unsafe_size,&__t2357t__buf__unsafe_offset,&__t2357t__buf__unsafe_align,&__t2357t__pos,&__t2357t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t1325t();
  __t2359t=10;
  __t_errcode=vec__t1365t(__t2359t,&__t2360t__unsafe_ptr,&__t2360t__pos,&__t2360t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t2360t__unsafe_ptr;
  v1__pos=__t2360t__pos;
  v1__length=__t2360t__length;
  new__t1325t();
  __t2363t=10;
  __t_errcode=vec__t1365t(__t2363t,&__t2364t__unsafe_ptr,&__t2364t__pos,&__t2364t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t2364t__unsafe_ptr;
  v2__pos=__t2364t__pos;
  v2__length=__t2364t__length;
  __t2366t=0;
  __t_errcode=mutget__t1410t(v1__unsafe_ptr,v1__pos,v1__length,__t2366t,&__t2367t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2368t=1.0;
  if(!__t2367t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2367t__,&__t2368t,8);
  __t2369t=0;
  __t_errcode=mutget__t1410t(v2__unsafe_ptr,v2__pos,v2__length,__t2369t,&__t2370t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2371t=2.0;
  if(!__t2370t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2370t__,&__t2371t,8);
  __t2372t=5;
  range__t460t(__t2372t,&__t2373t__from,&__t2373t__to);
  it__from=__t2373t__from;
  it__to=__t2373t__to;
  __t2374t=10;
  __t_errcode=vec__t1393t(__t2352t__buf__unsafe_ptr,__t2352t__buf__unsafe_size,__t2352t__buf__unsafe_offset,__t2352t__buf__unsafe_align,&__t2352t__pos,__t2352t__length,__t2374t,&__t2375t__unsafe_ptr,&__t2375t__pos,&__t2375t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2376t__pos=__t2375t__pos;
  __t2376t__length=__t2375t__length;
  v__pos=__t2376t__pos;
  v__length=__t2376t__length;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t2378t__);
  __t2377t=__t_complain;
  i=__t2378t__;
  __t2377t=__t2377t==0;
  if(!__t2377t){
  break;
  }
  __t2379t=2.0;
  __t_errcode=add__t1474t(__t2352t__buf__unsafe_ptr,__t2352t__buf__unsafe_size,__t2352t__buf__unsafe_offset,__t2352t__buf__unsafe_align,&__t2352t__pos,__t2352t__length,v2__unsafe_ptr,v2__pos,v2__length,__t2352t__buf__unsafe_ptr,v__pos,v__length,&__t2380t__unsafe_ptr,&__t2380t__pos,&__t2380t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1474t(__t2352t__buf__unsafe_ptr,__t2352t__buf__unsafe_size,__t2352t__buf__unsafe_offset,__t2352t__buf__unsafe_align,&__t2352t__pos,__t2352t__length,v1__unsafe_ptr,v1__pos,v1__length,__t2352t__buf__unsafe_ptr,__t2380t__pos,__t2380t__length,&__t2381t__unsafe_ptr,&__t2381t__pos,&__t2381t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1679t(__t2352t__buf__unsafe_ptr,__t2352t__buf__unsafe_size,__t2352t__buf__unsafe_offset,__t2352t__buf__unsafe_align,&__t2352t__pos,__t2352t__length,__t2379t,__t2352t__buf__unsafe_ptr,__t2381t__pos,__t2381t__length,&__t2382t__unsafe_ptr,&__t2382t__pos,&__t2382t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t2382t__pos;
  v__length=__t2382t__length;
  }
  __t2383t=0;
  __t_errcode=get__t1416t(__t2352t__buf__unsafe_ptr,v__pos,v__length,__t2383t,&__t2384t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2384t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2385t__number,__t2384t__,8);
  print__t373t(__t2385t__number);
  
  __t_failure:__t2365t____t1368t____t510t=0;
  neq__t142t(__t2364t__length,__t2365t____t1368t____t510t,&__t2365t____t1368t____t511t__);
  if(__t2365t____t1368t____t511t__){
  __t2364t__length=0;
  __t2364t__length=__t2364t__length;
  __t2364t__unsafe_ptr=__t2364t__unsafe_ptr;
  free__t501t(&__t2364t__unsafe_ptr);
  }
  __t2361t____t1368t____t510t=0;
  neq__t142t(__t2360t__length,__t2361t____t1368t____t510t,&__t2361t____t1368t____t511t__);
  if(__t2361t____t1368t____t511t__){
  __t2360t__length=0;
  __t2360t__length=__t2360t__length;
  __t2360t__unsafe_ptr=__t2360t__unsafe_ptr;
  free__t501t(&__t2360t__unsafe_ptr);
  }
  __t2356t____t510t=0;
  neq__t142t(__t2355t__unsafe_size,__t2356t____t510t,&__t2356t____t511t__);
  if(__t2356t____t511t__){
  __t2355t__unsafe_size=0;
  __t2355t__unsafe_size=__t2355t__unsafe_size;
  __t2355t__unsafe_ptr=__t2355t__unsafe_ptr;
  free__t501t(&__t2355t__unsafe_ptr);
  }
  __t2351t____t510t=0;
  neq__t142t(__t2350t__unsafe_size,__t2351t____t510t,&__t2351t____t511t__);
  if(__t2351t____t511t__){
  __t2350t__unsafe_size=0;
  __t2350t__unsafe_size=__t2350t__unsafe_size;
  __t2350t__unsafe_ptr=__t2350t__unsafe_ptr;
  free__t501t(&__t2350t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1306t(int64_t value, const char** __t2475t) {
  int __t1307t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t370t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2475t=ret;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2387t() {
  char __t2388t=0;
  char __t2390t=0;
  int64_t __t2391t=0;
  int64_t error=0;
  const char* __t2392t__=0;
  int __t_complain=0;
  __t_complain=safe_main__t2347t();
  __t2388t=__t_complain;
  __t2388t=__t2388t==0;
  __t2391t=__t_complain;
  __t2390t=(__t_complain==0);
  __t_complain=0;
  error=__t2391t;
  __t2390t=__t2390t==0;
  if(__t2390t){
  cstr__t1306t(error,&__t2392t__);
  print__t368t(__t2392t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2387t();return 0;}