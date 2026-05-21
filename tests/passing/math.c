#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2362t=", ";
const char* const __t2359t="(sum, mean, std) = (";
const char* const __t362t="";
const char* const __t2367t=")\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1331t(char** __t2369t, uint64_t* __t2370t, uint16_t* __t2371t, uint16_t* __t2372t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2369t=unsafe_ptr;
  *__t2370t=unsafe_size;
  *__t2371t=unsafe_offset;
  *__t2372t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2373t) {
  int value=0;
  *__t2373t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t2374t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t2374t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t2375t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t2375t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t2376t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2376t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t2377t) {
  char* allocated=*__t2377t;
  if(allocated){
  free(allocated);
  }
  *__t2377t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t2378t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2378t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t2379t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2379t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t2380t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2380t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t2381t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2381t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t2382t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2382t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t2383t) {
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
  *__t2383t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t2384t, uint64_t* __t2385t, uint16_t* __t2386t, uint16_t* __t2387t, uint64_t size, char** __t2388t, uint64_t* __t2389t, uint16_t* __t2390t, uint16_t* __t2391t) {
  char* buffer__unsafe_ptr=*__t2384t;
  uint64_t buffer__unsafe_size=*__t2385t;
  uint16_t buffer__unsafe_offset=*__t2386t;
  uint16_t buffer__unsafe_align=*__t2387t;
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
  *__t2384t=buffer__unsafe_ptr;
  *__t2385t=buffer__unsafe_size;
  *__t2386t=buffer__unsafe_offset;
  *__t2387t=buffer__unsafe_align;
  *__t2388t=__t521t__unsafe_ptr;
  *__t2389t=__t521t__unsafe_size;
  *__t2390t=__t521t__unsafe_offset;
  *__t2391t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2392t) {
  goto __t_return;
  __t_return:
  *__t2392t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1321t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2393t, uint64_t* __t2394t, uint64_t* __t2395t) {
  goto __t_return;
  __t_return:
  *__t2393t=unsafe_ptr;
  *__t2394t=pos;
  *__t2395t=length;
}

static inline __attribute__((always_inline)) int vec__t1371t(char** __t2396t, uint64_t* __t2397t, uint16_t* __t2398t, uint16_t* __t2399t, char** __t2400t, uint64_t* __t2401t, uint64_t* __t2402t) {
  char* buf__unsafe_ptr=*__t2396t;
  uint64_t buf__unsafe_size=*__t2397t;
  uint16_t buf__unsafe_offset=*__t2398t;
  uint16_t buf__unsafe_align=*__t2399t;
  uint64_t __t1372t__=0;
  uint64_t __t1373t=0;
  char __t1374t__=0;
  uint64_t __t1375t__=0;
  uint64_t __t1376t=0;
  char __t1377t__=0;
  uint64_t __t1378t=0;
  uint64_t __t1379t__=0;
  char* __t1380t__unsafe_ptr=0;
  uint64_t __t1380t__pos=0;
  uint64_t __t1380t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t505t(buf__unsafe_align,&__t1372t__);
  __t1373t=8;
  neq__t142t(__t1372t__,__t1373t,&__t1374t__);
  if(__t1374t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t1375t__);
  __t1376t=0;
  neq__t142t(__t1375t__,__t1376t,&__t1377t__);
  if(__t1377t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1378t=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1379t__);
  vec__t1321t(buf__unsafe_ptr,__t1378t,__t1379t__,&__t1380t__unsafe_ptr,&__t1380t__pos,&__t1380t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2396t=buf__unsafe_ptr;
  *__t2397t=buf__unsafe_size;
  *__t2398t=buf__unsafe_offset;
  *__t2399t=buf__unsafe_align;
  *__t2400t=__t1380t__unsafe_ptr;
  *__t2401t=__t1380t__pos;
  *__t2402t=__t1380t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t2403t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2403t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t2404t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2404t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t2405t) {
  *__t2405t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t2406t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t2406t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t1410t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2407t) {
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
  *__t2407t=__t1415t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1409t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t2408t) {
  goto __t_return;
  __t_return:
  *__t2408t=v__length;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t2409t, uint64_t* __t2410t) {
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
  *__t2409t=from;
  *__t2410t=to;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t2411t, uint64_t r__to, uint64_t* __t2412t) {
  uint64_t r__from=*__t2411t;
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
  *__t2411t=r__from;
  *__t2412t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1416t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2413t) {
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
  *__t2413t=__t1421t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t2414t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t2414t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t2415t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2415t=z;
}

static inline __attribute__((always_inline)) int reduce__t1789t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2416t) {
  char __t1790t=0;
  char __t1791t=0;
  double __t1792t=0;
  double __t1793t=0;
  double ret=0;
  int __t1794t=0;
  uint64_t __t1795t__=0;
  uint64_t __t1796t__from=0;
  uint64_t __t1796t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1797t=0;
  uint64_t __t1798t__=0;
  uint64_t i=0;
  char* __t1799t__=0;
  double __t1800t__number=0;
  double __t1801t=0;
  double value=0;
  int __t1802t=0;
  char __t1803t=0;
  char __t1804t=0;
  double __t1805t__=0;
  int __t1806t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1791t=1;
  if(__t1791t){
  __t1790t=1;
  }
  if(__t1790t){
  __t1792t=0.0;
  __t1793t=__t1792t;
  ret=__t1793t;
  }
  len__t1409t(v__unsafe_ptr,v__pos,v__length,&__t1795t__);
  range__t460t(__t1795t__,&__t1796t__from,&__t1796t__to);
  it__from=__t1796t__from;
  it__to=__t1796t__to;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1798t__);
  __t1797t=__t_complain;
  i=__t1798t__;
  __t1797t=__t1797t==0;
  if(!__t1797t){
  break;
  }
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,i,&__t1799t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1799t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1800t__number,__t1799t__,8);
  __t1801t=__t1800t__number;
  value=__t1801t;
  __t1804t=1;
  if(__t1804t){
  __t1803t=1;
  }
  if(__t1803t){
  add__t148t(ret,value,&__t1805t__);
  ret=__t1805t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2416t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t1865t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2417t) {
  double __t1867t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1789t(v__unsafe_ptr,v__pos,v__length,&__t1867t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2417t=__t1867t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t371t(double value, const char* endl) {
  int __t372t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2418t) {
  int value=0;
  *__t2418t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2419t) {
  int __t38t__=0;
  true__t11t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2419t=__t38t__;
}

static inline __attribute__((always_inline)) void float__t403t(uint64_t x, double* __t2420t) {
  int __t404t=0;
  int __t405t__=0;
  int __t406t=0;
  double z=0;
  not__t37t(__t404t,&__t405t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2420t=z;
}

static inline __attribute__((always_inline)) void eq__t96t(double x, double y, char* __t2421t) {
  int __t97t__=0;
  char z=0;
  is_different__t69t(x,y,&__t97t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2421t=z;
}

static inline __attribute__((always_inline)) int div__t196t(double x, double y, double* __t2422t) {
  int __t197t__=0;
  double zero=0;
  char __t198t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t69t(x,y,&__t197t__);
  zero=0;
  eq__t96t(y,zero,&__t198t__);
  if(__t198t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2422t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t1868t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2423t) {
  double __t1870t__=0;
  uint64_t __t1871t__=0;
  double __t1872t__=0;
  double __t1873t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1789t(v__unsafe_ptr,v__pos,v__length,&__t1870t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1409t(v__unsafe_ptr,v__pos,v__length,&__t1871t__);
  float__t403t(__t1871t__,&__t1872t__);
  __t_errcode=div__t196t(__t1870t__,__t1872t__,&__t1873t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2423t=__t1873t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t2424t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2424t=z;
}

static inline __attribute__((always_inline)) void sub__t321t(double x, double y, double* __t2425t) {
  int __t322t__=0;
  int __t323t=0;
  int __t324t=0;
  double z=0;
  is_different__t69t(x,y,&__t322t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2425t=z;
}

static inline __attribute__((always_inline)) int var__t1874t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2426t) {
  double __t1875t=0;
  double __t1876t=0;
  double sumsqr=0;
  double __t1877t=0;
  double __t1878t=0;
  double sum=0;
  uint64_t __t1879t__=0;
  uint64_t __t1880t__from=0;
  uint64_t __t1880t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1881t=0;
  uint64_t __t1882t__=0;
  uint64_t i=0;
  char* __t1883t__=0;
  double __t1884t__number=0;
  double value=0;
  double __t1885t__=0;
  double __t1886t__=0;
  double __t1887t__=0;
  uint64_t __t1888t__=0;
  double __t1889t__=0;
  double n=0;
  double __t1890t__=0;
  double __t1891t__=0;
  double __t1892t__=0;
  double __t1893t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1875t=0.0;
  __t1876t=__t1875t;
  sumsqr=__t1876t;
  __t1877t=0.0;
  __t1878t=__t1877t;
  sum=__t1878t;
  len__t1409t(v__unsafe_ptr,v__pos,v__length,&__t1879t__);
  range__t460t(__t1879t__,&__t1880t__from,&__t1880t__to);
  it__from=__t1880t__from;
  it__to=__t1880t__to;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1882t__);
  __t1881t=__t_complain;
  i=__t1882t__;
  __t1881t=__t1881t==0;
  if(!__t1881t){
  break;
  }
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,i,&__t1883t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1883t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1884t__number,__t1883t__,8);
  value=__t1884t__number;
  add__t148t(sum,value,&__t1885t__);
  sum=__t1885t__;
  mul__t172t(value,value,&__t1886t__);
  add__t148t(sumsqr,__t1886t__,&__t1887t__);
  sumsqr=__t1887t__;
  }
  len__t1409t(v__unsafe_ptr,v__pos,v__length,&__t1888t__);
  float__t403t(__t1888t__,&__t1889t__);
  n=__t1889t__;
  __t_errcode=div__t196t(sum,n,&__t1890t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t1890t__;
  __t_errcode=div__t196t(sumsqr,n,&__t1891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t172t(sum,sum,&__t1892t__);
  sub__t321t(__t1891t__,__t1892t__,&__t1893t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2426t=__t1893t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1309t(double x, double* __t2427t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t2427t=z;
}

static inline __attribute__((always_inline)) int std__t1894t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t2428t) {
  double __t1895t__=0;
  double __t1896t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t1874t(v__unsafe_ptr,v__pos,v__length,&__t1895t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1309t(__t1895t__,&__t1896t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2428t=__t1896t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2347t() {
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
  char* __t2352t__unsafe_ptr=0;
  uint64_t __t2352t__pos=0;
  uint64_t __t2352t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2353t=0;
  char* __t2354t__=0;
  double __t2355t=0;
  uint64_t __t2356t=0;
  char* __t2357t__=0;
  double __t2358t=0;
  double __t2361t__=0;
  double __t2364t__=0;
  double __t2366t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1331t(&__t2348t__unsafe_ptr,&__t2348t__unsafe_size,&__t2348t__unsafe_offset,&__t2348t__unsafe_align);
  __t2349t=5;
  __t_errcode=alloc__t508t(&__t2348t__unsafe_ptr,&__t2348t__unsafe_size,&__t2348t__unsafe_offset,&__t2348t__unsafe_align,__t2349t,&__t2350t__unsafe_ptr,&__t2350t__unsafe_size,&__t2350t__unsafe_offset,&__t2350t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1371t(&__t2350t__unsafe_ptr,&__t2350t__unsafe_size,&__t2350t__unsafe_offset,&__t2350t__unsafe_align,&__t2352t__unsafe_ptr,&__t2352t__pos,&__t2352t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2352t__unsafe_ptr;
  v__pos=__t2352t__pos;
  v__length=__t2352t__length;
  __t2353t=0;
  __t_errcode=mutget__t1410t(v__unsafe_ptr,v__pos,v__length,__t2353t,&__t2354t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2355t=1.0;
  if(!__t2354t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2354t__,&__t2355t,8);
  __t2356t=1;
  __t_errcode=mutget__t1410t(v__unsafe_ptr,v__pos,v__length,__t2356t,&__t2357t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2358t=2.0;
  if(!__t2357t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2357t__,&__t2358t,8);
  print__t366t(__t2359t,__t362t);
  __t_errcode=sum__t1865t(v__unsafe_ptr,v__pos,v__length,&__t2361t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t371t(__t2361t__,__t2362t);
  __t_errcode=mean__t1868t(v__unsafe_ptr,v__pos,v__length,&__t2364t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t371t(__t2364t__,__t2362t);
  __t_errcode=std__t1894t(v__unsafe_ptr,v__pos,v__length,&__t2366t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t371t(__t2366t__,__t2367t);
  
  __t_failure:__t2351t____t510t=0;
  neq__t142t(__t2350t__unsafe_size,__t2351t____t510t,&__t2351t____t511t__);
  if(__t2351t____t511t__){
  __t2350t__unsafe_size=0;
  __t2350t__unsafe_size=__t2350t__unsafe_size;
  __t2350t__unsafe_ptr=__t2350t__unsafe_ptr;
  free__t501t(&__t2350t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2347t();return 0;}