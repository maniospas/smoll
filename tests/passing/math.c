#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2421t=")\n";
const char* const __t363t="";
const char* const __t2413t="(sum, mean, std) = (";
const char* const __t2416t=", ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1357t(char** __t2423t, uint64_t* __t2424t, uint16_t* __t2425t, uint16_t* __t2426t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2423t=unsafe_ptr;
  *__t2424t=unsafe_size;
  *__t2425t=unsafe_offset;
  *__t2426t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2427t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2427t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2428t) {
  char* allocated=*__t2428t;
  if(allocated){
  free(allocated);
  }
  *__t2428t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2429t) {
  int value=0;
  *__t2429t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2430t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2430t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2431t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2431t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2432t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2432t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2433t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2433t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2434t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2434t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2435t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2435t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2436t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2436t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2437t) {
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
  *__t2437t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2438t, uint64_t* __t2439t, uint16_t* __t2440t, uint16_t* __t2441t, uint64_t size, char** __t2442t, uint64_t* __t2443t, uint16_t* __t2444t, uint16_t* __t2445t) {
  char* buffer__unsafe_ptr=*__t2438t;
  uint64_t buffer__unsafe_size=*__t2439t;
  uint16_t buffer__unsafe_offset=*__t2440t;
  uint16_t buffer__unsafe_align=*__t2441t;
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
  *__t2438t=buffer__unsafe_ptr;
  *__t2439t=buffer__unsafe_size;
  *__t2440t=buffer__unsafe_offset;
  *__t2441t=buffer__unsafe_align;
  *__t2442t=buffer__unsafe_ptr;
  *__t2443t=buffer__unsafe_size;
  *__t2444t=buffer__unsafe_offset;
  *__t2445t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2446t) {
  goto __t_return;
  __t_return:
  *__t2446t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1345t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2447t, uint64_t* __t2448t, uint64_t* __t2449t) {
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__pos=0;
  uint64_t __t1347t__length=0;
  __t1347t__unsafe_ptr=unsafe_ptr;
  __t1347t__pos=pos;
  __t1347t__length=length;
  goto __t_return;
  __t_return:
  *__t2447t=__t1347t__unsafe_ptr;
  *__t2448t=__t1347t__pos;
  *__t2449t=__t1347t__length;
}

static inline __attribute__((always_inline)) int vec__t1397t(char** __t2450t, uint64_t* __t2451t, uint16_t* __t2452t, uint16_t* __t2453t, char** __t2454t, uint64_t* __t2455t, uint64_t* __t2456t) {
  char* buf__unsafe_ptr=*__t2450t;
  uint64_t buf__unsafe_size=*__t2451t;
  uint16_t buf__unsafe_offset=*__t2452t;
  uint16_t buf__unsafe_align=*__t2453t;
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
  *__t2450t=buf__unsafe_ptr;
  *__t2451t=buf__unsafe_size;
  *__t2452t=buf__unsafe_offset;
  *__t2453t=buf__unsafe_align;
  *__t2454t=__t1406t__unsafe_ptr;
  *__t2455t=__t1406t__pos;
  *__t2456t=__t1406t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2457t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2457t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2458t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2458t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2459t) {
  *__t2459t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2460t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2460t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t1446t(char** __t2461t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2462t) {
  char* v__unsafe_ptr=*__t2461t;
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
  *__t2461t=v__unsafe_ptr;
  *__t2462t=__t1451t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1445t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2463t) {
  goto __t_return;
  __t_return:
  *__t2463t=v__length;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2464t, uint64_t* __t2465t) {
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
  *__t2464t=from;
  *__t2465t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t2466t, uint64_t r__to, uint64_t* __t2467t) {
  uint64_t r__from=*__t2466t;
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
  *__t2466t=r__from;
  *__t2467t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1452t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2468t) {
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
  *__t2468t=__t1457t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2469t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2469t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2470t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2470t=z;
}

static inline __attribute__((always_inline)) int reduce__t1831t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2471t) {
  char __t1832t=0;
  char __t1833t=0;
  double __t1834t=0;
  double __t1835t=0;
  double ret=0;
  int __t1836t=0;
  uint64_t __t1837t__=0;
  uint64_t __t1838t__from=0;
  uint64_t __t1838t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1839t=0;
  uint64_t __t1840t__=0;
  uint64_t i=0;
  char* __t1841t__=0;
  double __t1842t__value=0;
  double __t1843t=0;
  double value=0;
  int __t1844t=0;
  char __t1845t=0;
  char __t1846t=0;
  double __t1847t__=0;
  int __t1848t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1833t=1;
  if(__t1833t){
  __t1832t=1;
  }
  if(__t1832t){
  __t1834t=0.0;
  __t1835t=__t1834t;
  ret=__t1835t;
  }
  len__t1445t(v__unsafe_ptr,v__pos,v__length,&__t1837t__);
  range__t461t(__t1837t__,&__t1838t__from,&__t1838t__to);
  it__from=__t1838t__from;
  it__to=__t1838t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1840t__);
  __t1839t=__t_complain;
  i=__t1840t__;
  __t1839t=__t1839t==0;
  if(!__t1839t){
  break;
  }
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,i,&__t1841t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1841t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1842t__value,__t1841t__,8);
  __t1843t=__t1842t__value;
  value=__t1843t;
  __t1846t=1;
  if(__t1846t){
  __t1845t=1;
  }
  if(__t1845t){
  add__t149t(ret,value,&__t1847t__);
  ret=__t1847t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2471t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t1907t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2472t) {
  double __t1909t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1831t(v__unsafe_ptr,v__pos,v__length,&__t1909t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2472t=__t1909t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t372t(double value, const char* endl) {
  int __t373t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2473t) {
  int value=0;
  *__t2473t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2474t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2474t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t2475t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2475t=z;
}

static inline __attribute__((always_inline)) void eq__t97t(double x, double y, char* __t2476t) {
  int __t98t__=0;
  char z=0;
  is_different__t70t(x,y,&__t98t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2476t=z;
}

static inline __attribute__((always_inline)) int div__t197t(double x, double y, double* __t2477t) {
  int __t198t__=0;
  double zero=0;
  char __t199t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t70t(x,y,&__t198t__);
  zero=0;
  eq__t97t(y,zero,&__t199t__);
  if(__t199t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2477t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t1910t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2478t) {
  double __t1912t__=0;
  uint64_t __t1913t__=0;
  double __t1914t__=0;
  double __t1915t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1831t(v__unsafe_ptr,v__pos,v__length,&__t1912t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1445t(v__unsafe_ptr,v__pos,v__length,&__t1913t__);
  float__t404t(__t1913t__,&__t1914t__);
  __t_errcode=div__t197t(__t1912t__,__t1914t__,&__t1915t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2478t=__t1915t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2479t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2479t=z;
}

static inline __attribute__((always_inline)) void sub__t322t(double x, double y, double* __t2480t) {
  int __t323t__=0;
  int __t324t=0;
  int __t325t=0;
  double z=0;
  is_different__t70t(x,y,&__t323t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2480t=z;
}

static inline __attribute__((always_inline)) int var__t1916t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2481t) {
  double __t1917t=0;
  double __t1918t=0;
  double sumsqr=0;
  double __t1919t=0;
  double __t1920t=0;
  double sum=0;
  uint64_t __t1921t__=0;
  uint64_t __t1922t__from=0;
  uint64_t __t1922t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1923t=0;
  uint64_t __t1924t__=0;
  uint64_t i=0;
  char* __t1925t__=0;
  double __t1926t__value=0;
  double value=0;
  double __t1927t__=0;
  double __t1928t__=0;
  double __t1929t__=0;
  uint64_t __t1930t__=0;
  double __t1931t__=0;
  double n=0;
  double __t1932t__=0;
  double __t1933t__=0;
  double __t1934t__=0;
  double __t1935t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1917t=0.0;
  __t1918t=__t1917t;
  sumsqr=__t1918t;
  __t1919t=0.0;
  __t1920t=__t1919t;
  sum=__t1920t;
  len__t1445t(v__unsafe_ptr,v__pos,v__length,&__t1921t__);
  range__t461t(__t1921t__,&__t1922t__from,&__t1922t__to);
  it__from=__t1922t__from;
  it__to=__t1922t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1924t__);
  __t1923t=__t_complain;
  i=__t1924t__;
  __t1923t=__t1923t==0;
  if(!__t1923t){
  break;
  }
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,i,&__t1925t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1925t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1926t__value,__t1925t__,8);
  value=__t1926t__value;
  add__t149t(sum,value,&__t1927t__);
  sum=__t1927t__;
  mul__t173t(value,value,&__t1928t__);
  add__t149t(sumsqr,__t1928t__,&__t1929t__);
  sumsqr=__t1929t__;
  }
  len__t1445t(v__unsafe_ptr,v__pos,v__length,&__t1930t__);
  float__t404t(__t1930t__,&__t1931t__);
  n=__t1931t__;
  __t_errcode=div__t197t(sum,n,&__t1932t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t1932t__;
  __t_errcode=div__t197t(sumsqr,n,&__t1933t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t173t(sum,sum,&__t1934t__);
  sub__t322t(__t1933t__,__t1934t__,&__t1935t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2481t=__t1935t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1333t(double x, double* __t2482t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2482t=z;
}

static inline __attribute__((always_inline)) int std__t1936t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2483t) {
  double __t1937t__=0;
  double __t1938t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t1916t(v__unsafe_ptr,v__pos,v__length,&__t1937t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1333t(__t1937t__,&__t1938t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2483t=__t1938t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2401t() {
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
  char* __t2406t__unsafe_ptr=0;
  uint64_t __t2406t__pos=0;
  uint64_t __t2406t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2407t=0;
  char* __t2408t__=0;
  double __t2409t=0;
  uint64_t __t2410t=0;
  char* __t2411t__=0;
  double __t2412t=0;
  double __t2415t__=0;
  double __t2418t__=0;
  double __t2420t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1357t(&__t2402t__unsafe_ptr,&__t2402t__unsafe_size,&__t2402t__unsafe_offset,&__t2402t__unsafe_align);
  __t2403t=5;
  __t_errcode=alloc__t509t(&__t2402t__unsafe_ptr,&__t2402t__unsafe_size,&__t2402t__unsafe_offset,&__t2402t__unsafe_align,__t2403t,&__t2404t__unsafe_ptr,&__t2404t__unsafe_size,&__t2404t__unsafe_offset,&__t2404t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1397t(&__t2404t__unsafe_ptr,&__t2404t__unsafe_size,&__t2404t__unsafe_offset,&__t2404t__unsafe_align,&__t2406t__unsafe_ptr,&__t2406t__pos,&__t2406t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2406t__unsafe_ptr;
  v__pos=__t2406t__pos;
  v__length=__t2406t__length;
  __t2407t=0;
  __t_errcode=mutget__t1446t(&v__unsafe_ptr,v__pos,v__length,__t2407t,&__t2408t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2409t=1.0;
  if(!__t2408t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2408t__,&__t2409t,8);
  __t2410t=1;
  __t_errcode=mutget__t1446t(&v__unsafe_ptr,v__pos,v__length,__t2410t,&__t2411t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2412t=2.0;
  if(!__t2411t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2411t__,&__t2412t,8);
  print__t367t(__t2413t,__t363t);
  __t_errcode=sum__t1907t(v__unsafe_ptr,v__pos,v__length,&__t2415t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2415t__,__t2416t);
  __t_errcode=mean__t1910t(v__unsafe_ptr,v__pos,v__length,&__t2418t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2418t__,__t2416t);
  __t_errcode=std__t1936t(v__unsafe_ptr,v__pos,v__length,&__t2420t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2420t__,__t2421t);
  
  __t_failure:exists__t436t(__t2404t__unsafe_ptr,&__t2405t____t511t__);
  if(__t2405t____t511t__){
  free__t502t(&__t2404t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2401t();return 0;}