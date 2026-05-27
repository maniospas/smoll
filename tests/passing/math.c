#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2417t="(sum, mean, std) = (";
const char* const __t2425t=")\n";
const char* const __t363t="";
const char* const __t2420t=", ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1361t(char** __t2427t, uint64_t* __t2428t, uint16_t* __t2429t, uint16_t* __t2430t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2427t=unsafe_ptr;
  *__t2428t=unsafe_size;
  *__t2429t=unsafe_offset;
  *__t2430t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2431t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2431t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2432t) {
  char* allocated=*__t2432t;
  if(allocated){
  free(allocated);
  }
  *__t2432t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2433t) {
  int value=0;
  *__t2433t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2434t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2434t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2435t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2435t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2436t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2436t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2437t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2437t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2438t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2438t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2439t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2439t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2440t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2440t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2441t) {
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
  *__t2441t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2442t, uint64_t* __t2443t, uint16_t* __t2444t, uint16_t* __t2445t, uint64_t size, char** __t2446t, uint64_t* __t2447t, uint16_t* __t2448t, uint16_t* __t2449t) {
  char* buffer__unsafe_ptr=*__t2442t;
  uint64_t buffer__unsafe_size=*__t2443t;
  uint16_t buffer__unsafe_offset=*__t2444t;
  uint16_t buffer__unsafe_align=*__t2445t;
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
  *__t2442t=buffer__unsafe_ptr;
  *__t2443t=buffer__unsafe_size;
  *__t2444t=buffer__unsafe_offset;
  *__t2445t=buffer__unsafe_align;
  *__t2446t=__t520t__unsafe_ptr;
  *__t2447t=__t520t__unsafe_size;
  *__t2448t=__t520t__unsafe_offset;
  *__t2449t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2450t) {
  goto __t_return;
  __t_return:
  *__t2450t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1349t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2451t, uint64_t* __t2452t, uint64_t* __t2453t) {
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__pos=0;
  uint64_t __t1351t__length=0;
  __t1351t__unsafe_ptr=unsafe_ptr;
  __t1351t__pos=pos;
  __t1351t__length=length;
  goto __t_return;
  __t_return:
  *__t2451t=__t1351t__unsafe_ptr;
  *__t2452t=__t1351t__pos;
  *__t2453t=__t1351t__length;
}

static inline __attribute__((always_inline)) int vec__t1401t(char** __t2454t, uint64_t* __t2455t, uint16_t* __t2456t, uint16_t* __t2457t, char** __t2458t, uint64_t* __t2459t, uint64_t* __t2460t) {
  char* buf__unsafe_ptr=*__t2454t;
  uint64_t buf__unsafe_size=*__t2455t;
  uint16_t buf__unsafe_offset=*__t2456t;
  uint16_t buf__unsafe_align=*__t2457t;
  uint64_t __t1402t__=0;
  uint64_t __t1403t=0;
  char __t1404t__=0;
  uint64_t __t1405t__=0;
  uint64_t __t1406t=0;
  char __t1407t__=0;
  uint64_t __t1408t=0;
  uint64_t __t1409t__=0;
  char* __t1410t__unsafe_ptr=0;
  uint64_t __t1410t__pos=0;
  uint64_t __t1410t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(buf__unsafe_align,&__t1402t__);
  __t1403t=8;
  neq__t143t(__t1402t__,__t1403t,&__t1404t__);
  if(__t1404t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t1405t__);
  __t1406t=0;
  neq__t143t(__t1405t__,__t1406t,&__t1407t__);
  if(__t1407t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1408t=0;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1409t__);
  vec__t1349t(buf__unsafe_ptr,__t1408t,__t1409t__,&__t1410t__unsafe_ptr,&__t1410t__pos,&__t1410t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2454t=buf__unsafe_ptr;
  *__t2455t=buf__unsafe_size;
  *__t2456t=buf__unsafe_offset;
  *__t2457t=buf__unsafe_align;
  *__t2458t=__t1410t__unsafe_ptr;
  *__t2459t=__t1410t__pos;
  *__t2460t=__t1410t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2461t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2461t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2462t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2462t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2463t) {
  *__t2463t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2464t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2464t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t1450t(char** __t2465t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2466t) {
  char* v__unsafe_ptr=*__t2465t;
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
  *__t2465t=v__unsafe_ptr;
  *__t2466t=__t1455t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1449t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2467t) {
  goto __t_return;
  __t_return:
  *__t2467t=v__length;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2468t, uint64_t* __t2469t) {
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
  *__t2468t=from;
  *__t2469t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t2470t, uint64_t r__to, uint64_t* __t2471t) {
  uint64_t r__from=*__t2470t;
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
  *__t2470t=r__from;
  *__t2471t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1456t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2472t) {
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
  *__t2472t=__t1461t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2473t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2473t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2474t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2474t=z;
}

static inline __attribute__((always_inline)) int reduce__t1835t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2475t) {
  char __t1836t=0;
  char __t1837t=0;
  double __t1838t=0;
  double __t1839t=0;
  double ret=0;
  int __t1840t=0;
  uint64_t __t1841t__=0;
  uint64_t __t1842t__from=0;
  uint64_t __t1842t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1843t=0;
  uint64_t __t1844t__=0;
  uint64_t i=0;
  char* __t1845t__=0;
  double __t1846t__value=0;
  double __t1847t=0;
  double value=0;
  int __t1848t=0;
  char __t1849t=0;
  char __t1850t=0;
  double __t1851t__=0;
  int __t1852t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1837t=1;
  if(__t1837t){
  __t1836t=1;
  }
  if(__t1836t){
  __t1838t=0.0;
  __t1839t=__t1838t;
  ret=__t1839t;
  }
  len__t1449t(v__unsafe_ptr,v__pos,v__length,&__t1841t__);
  range__t461t(__t1841t__,&__t1842t__from,&__t1842t__to);
  it__from=__t1842t__from;
  it__to=__t1842t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1844t__);
  __t1843t=__t_complain;
  i=__t1844t__;
  __t1843t=__t1843t==0;
  if(!__t1843t){
  break;
  }
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,i,&__t1845t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1845t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1846t__value,__t1845t__,8);
  __t1847t=__t1846t__value;
  value=__t1847t;
  __t1850t=1;
  if(__t1850t){
  __t1849t=1;
  }
  if(__t1849t){
  add__t149t(ret,value,&__t1851t__);
  ret=__t1851t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2475t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t1911t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2476t) {
  double __t1913t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1835t(v__unsafe_ptr,v__pos,v__length,&__t1913t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2476t=__t1913t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t372t(double value, const char* endl) {
  int __t373t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2477t) {
  int value=0;
  *__t2477t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2478t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2478t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t2479t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2479t=z;
}

static inline __attribute__((always_inline)) void eq__t97t(double x, double y, char* __t2480t) {
  int __t98t__=0;
  char z=0;
  is_different__t70t(x,y,&__t98t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2480t=z;
}

static inline __attribute__((always_inline)) int div__t197t(double x, double y, double* __t2481t) {
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
  *__t2481t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t1914t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2482t) {
  double __t1916t__=0;
  uint64_t __t1917t__=0;
  double __t1918t__=0;
  double __t1919t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1835t(v__unsafe_ptr,v__pos,v__length,&__t1916t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1449t(v__unsafe_ptr,v__pos,v__length,&__t1917t__);
  float__t404t(__t1917t__,&__t1918t__);
  __t_errcode=div__t197t(__t1916t__,__t1918t__,&__t1919t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2482t=__t1919t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2483t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2483t=z;
}

static inline __attribute__((always_inline)) void sub__t322t(double x, double y, double* __t2484t) {
  int __t323t__=0;
  int __t324t=0;
  int __t325t=0;
  double z=0;
  is_different__t70t(x,y,&__t323t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2484t=z;
}

static inline __attribute__((always_inline)) int var__t1920t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2485t) {
  double __t1921t=0;
  double __t1922t=0;
  double sumsqr=0;
  double __t1923t=0;
  double __t1924t=0;
  double sum=0;
  uint64_t __t1925t__=0;
  uint64_t __t1926t__from=0;
  uint64_t __t1926t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1927t=0;
  uint64_t __t1928t__=0;
  uint64_t i=0;
  char* __t1929t__=0;
  double __t1930t__value=0;
  double value=0;
  double __t1931t__=0;
  double __t1932t__=0;
  double __t1933t__=0;
  uint64_t __t1934t__=0;
  double __t1935t__=0;
  double n=0;
  double __t1936t__=0;
  double __t1937t__=0;
  double __t1938t__=0;
  double __t1939t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1921t=0.0;
  __t1922t=__t1921t;
  sumsqr=__t1922t;
  __t1923t=0.0;
  __t1924t=__t1923t;
  sum=__t1924t;
  len__t1449t(v__unsafe_ptr,v__pos,v__length,&__t1925t__);
  range__t461t(__t1925t__,&__t1926t__from,&__t1926t__to);
  it__from=__t1926t__from;
  it__to=__t1926t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1928t__);
  __t1927t=__t_complain;
  i=__t1928t__;
  __t1927t=__t1927t==0;
  if(!__t1927t){
  break;
  }
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,i,&__t1929t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1929t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1930t__value,__t1929t__,8);
  value=__t1930t__value;
  add__t149t(sum,value,&__t1931t__);
  sum=__t1931t__;
  mul__t173t(value,value,&__t1932t__);
  add__t149t(sumsqr,__t1932t__,&__t1933t__);
  sumsqr=__t1933t__;
  }
  len__t1449t(v__unsafe_ptr,v__pos,v__length,&__t1934t__);
  float__t404t(__t1934t__,&__t1935t__);
  n=__t1935t__;
  __t_errcode=div__t197t(sum,n,&__t1936t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t1936t__;
  __t_errcode=div__t197t(sumsqr,n,&__t1937t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t173t(sum,sum,&__t1938t__);
  sub__t322t(__t1937t__,__t1938t__,&__t1939t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2485t=__t1939t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1337t(double x, double* __t2486t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2486t=z;
}

static inline __attribute__((always_inline)) int std__t1940t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2487t) {
  double __t1941t__=0;
  double __t1942t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t1920t(v__unsafe_ptr,v__pos,v__length,&__t1941t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1337t(__t1941t__,&__t1942t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2487t=__t1942t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2405t() {
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
  char* __t2410t__unsafe_ptr=0;
  uint64_t __t2410t__pos=0;
  uint64_t __t2410t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2411t=0;
  char* __t2412t__=0;
  double __t2413t=0;
  uint64_t __t2414t=0;
  char* __t2415t__=0;
  double __t2416t=0;
  double __t2419t__=0;
  double __t2422t__=0;
  double __t2424t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1361t(&__t2406t__unsafe_ptr,&__t2406t__unsafe_size,&__t2406t__unsafe_offset,&__t2406t__unsafe_align);
  __t2407t=5;
  __t_errcode=alloc__t509t(&__t2406t__unsafe_ptr,&__t2406t__unsafe_size,&__t2406t__unsafe_offset,&__t2406t__unsafe_align,__t2407t,&__t2408t__unsafe_ptr,&__t2408t__unsafe_size,&__t2408t__unsafe_offset,&__t2408t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1401t(&__t2408t__unsafe_ptr,&__t2408t__unsafe_size,&__t2408t__unsafe_offset,&__t2408t__unsafe_align,&__t2410t__unsafe_ptr,&__t2410t__pos,&__t2410t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2410t__unsafe_ptr;
  v__pos=__t2410t__pos;
  v__length=__t2410t__length;
  __t2411t=0;
  __t_errcode=mutget__t1450t(&v__unsafe_ptr,v__pos,v__length,__t2411t,&__t2412t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2413t=1.0;
  if(!__t2412t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2412t__,&__t2413t,8);
  __t2414t=1;
  __t_errcode=mutget__t1450t(&v__unsafe_ptr,v__pos,v__length,__t2414t,&__t2415t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2416t=2.0;
  if(!__t2415t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2415t__,&__t2416t,8);
  print__t367t(__t2417t,__t363t);
  __t_errcode=sum__t1911t(v__unsafe_ptr,v__pos,v__length,&__t2419t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2419t__,__t2420t);
  __t_errcode=mean__t1914t(v__unsafe_ptr,v__pos,v__length,&__t2422t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2422t__,__t2420t);
  __t_errcode=std__t1940t(v__unsafe_ptr,v__pos,v__length,&__t2424t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t372t(__t2424t__,__t2425t);
  
  __t_failure:exists__t436t(__t2408t__unsafe_ptr,&__t2409t____t511t__);
  if(__t2409t____t511t__){
  __t2408t__unsafe_ptr=__t2408t__unsafe_ptr;
  free__t502t(&__t2408t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2405t();return 0;}