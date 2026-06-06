#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t2036t(char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t2067t=unsafe_ptr;
  *__t2068t=unsafe_size;
  *__t2069t=unsafe_offset;
  *__t2070t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2071t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2071t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2072t) {
  char* allocated=*__t2072t;
  if(allocated){
  free(allocated);
  }
  *__t2072t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2073t) {
  int value=0;
  *__t2073t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2074t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2074t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2075t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2075t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2076t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2076t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2077t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2077t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2078t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2078t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2079t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2079t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2080t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2080t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2081t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2081t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2082t, uint64_t* __t2083t, uint16_t* __t2084t, uint16_t* __t2085t, uint64_t size, char** __t2086t, uint64_t* __t2087t, uint16_t* __t2088t, uint16_t* __t2089t) {
  char* buffer__unsafe_ptr=*__t2082t;
  uint64_t buffer__unsafe_size=*__t2083t;
  uint16_t buffer__unsafe_offset=*__t2084t;
  uint16_t buffer__unsafe_align=*__t2085t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2082t=buffer__unsafe_ptr;
  *__t2083t=buffer__unsafe_size;
  *__t2084t=buffer__unsafe_offset;
  *__t2085t=buffer__unsafe_align;
  *__t2086t=buffer__unsafe_ptr;
  *__t2087t=buffer__unsafe_size;
  *__t2088t=buffer__unsafe_offset;
  *__t2089t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2090t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2090t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2091t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2091t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2092t) {
  *__t2092t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2093t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2093t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2094t, uint64_t* __t2095t, uint16_t* __t2096t, uint16_t* __t2097t, uint64_t i, char** __t2098t) {
  char* buffer__unsafe_ptr=*__t2094t;
  uint64_t buffer__unsafe_size=*__t2095t;
  uint16_t buffer__unsafe_offset=*__t2096t;
  uint16_t buffer__unsafe_align=*__t2097t;
  char __t792t__=0;
  uint64_t __t793t__=0;
  uint64_t __t794t__=0;
  uint64_t __t795t__=0;
  uint64_t __t796t__=0;
  char* __t797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t792t__);
  if(__t792t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t793t__);
  mul__t199t(i,__t793t__,&__t794t__);
  nat__t665t(buffer__unsafe_offset,&__t795t__);
  add__t175t(__t794t__,__t795t__,&__t796t__);
  add__t663t(buffer__unsafe_ptr,__t796t__,&__t797t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2094t=buffer__unsafe_ptr;
  *__t2095t=buffer__unsafe_size;
  *__t2096t=buffer__unsafe_offset;
  *__t2097t=buffer__unsafe_align;
  *__t2098t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t2011t(double x, double y, double* __t2099t, double* __t2100t) {
  goto __t_return;
  __t_return:
  *__t2099t=x;
  *__t2100t=y;
}

static inline __attribute__((always_inline)) void Point3D__t2031t(double x, double y, double z, double* __t2101t, double* __t2102t, double* __t2103t) {
  double __t2032t__x=0;
  double __t2032t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t2011t(x,y,&__t2032t__x,&__t2032t__y);
  plane__x=__t2032t__x;
  plane__y=__t2032t__y;
  goto __t_return;
  __t_return:
  *__t2101t=plane__x;
  *__t2102t=plane__y;
  *__t2103t=z;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2104t) {
  goto __t_return;
  __t_return:
  *__t2104t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2105t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2105t=z;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2106t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2106t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2107t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2107t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2108t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2108t=z;
}

static inline __attribute__((always_inline)) int sum__t2014t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t2109t, double* __t2110t) {
  double __t2015t=0;
  double __t2016t=0;
  double x=0;
  double __t2017t=0;
  double __t2018t=0;
  double y=0;
  uint64_t __t2019t=0;
  uint64_t __t2020t=0;
  uint64_t i=0;
  uint64_t __t2021t__=0;
  char __t2022t__=0;
  char* __t2023t__=0;
  double __t2024t__x=0;
  double __t2024t__y=0;
  double __t2025t__=0;
  char* __t2026t__=0;
  double __t2027t__x=0;
  double __t2027t__y=0;
  double __t2028t__=0;
  uint64_t __t2029t=0;
  uint64_t __t2030t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2015t=0.0;
  __t2016t=__t2015t;
  x=__t2016t;
  __t2017t=0.0;
  __t2018t=__t2017t;
  y=__t2018t;
  __t2019t=0;
  __t2020t=__t2019t;
  i=__t2020t;
  while(1){
  len__t805t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t2021t__);
  lt__t252t(i,__t2021t__,&__t2022t__);
  if(!__t2022t__){
  break;
  }
  __t_errcode=get__t798t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2023t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2024t__x,__t2023t__,8);
  memcpy(&__t2024t__y,__t2023t__+8,8);
  add__t153t(x,__t2024t__x,&__t2025t__);
  x=__t2025t__;
  __t_errcode=get__t798t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t2026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2027t__x,__t2026t__,8);
  memcpy(&__t2027t__y,__t2026t__+8,8);
  add__t153t(y,__t2027t__y,&__t2028t__);
  y=__t2028t__;
  __t2029t=1;
  add__t175t(i,__t2029t,&__t2030t__);
  i=__t2030t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2109t=x;
  *__t2110t=y;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2034t() {
  char* __t2038t__unsafe_ptr=0;
  uint64_t __t2038t__unsafe_size=0;
  uint16_t __t2038t__unsafe_offset=0;
  uint16_t __t2038t__unsafe_align=0;
  uint64_t __t2039t=0;
  char* __t2040t__unsafe_ptr=0;
  uint64_t __t2040t__unsafe_size=0;
  uint16_t __t2040t__unsafe_offset=0;
  uint16_t __t2040t__unsafe_align=0;
  char __t2041t____t692t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t2042t=0;
  char* __t2043t__=0;
  double __t2044t=0;
  double __t2045t=0;
  double __t2046t=0;
  double __t2047t=0;
  double __t2048t=0;
  double __t2049t=0;
  double __t2050t__plane__x=0;
  double __t2050t__plane__y=0;
  double __t2050t__z=0;
  uint64_t __t2051t=0;
  char* __t2052t__=0;
  double __t2053t=0;
  double __t2054t=0;
  double __t2055t=0;
  double __t2056t=0;
  double __t2057t=0;
  double __t2058t=0;
  double __t2059t__plane__x=0;
  double __t2059t__plane__y=0;
  double __t2059t__z=0;
  char* __t2060t__unsafe_ptr=0;
  uint64_t __t2060t__unsafe_size=0;
  uint16_t __t2060t__unsafe_offset=0;
  uint16_t __t2060t__unsafe_align=0;
  double __t2064t__x=0;
  double __t2064t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t2036t(&__t2038t__unsafe_ptr,&__t2038t__unsafe_size,&__t2038t__unsafe_offset,&__t2038t__unsafe_align);
  __t2039t=10;
  __t_errcode=alloc__t690t(&__t2038t__unsafe_ptr,&__t2038t__unsafe_size,&__t2038t__unsafe_offset,&__t2038t__unsafe_align,__t2039t,&__t2040t__unsafe_ptr,&__t2040t__unsafe_size,&__t2040t__unsafe_offset,&__t2040t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t2040t__unsafe_ptr;
  points__unsafe_size=__t2040t__unsafe_size;
  points__unsafe_offset=__t2040t__unsafe_offset;
  points__unsafe_align=__t2040t__unsafe_align;
  __t2042t=0;
  __t_errcode=mutget__t791t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t2042t,&__t2043t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2044t=1.0;
  __t2045t=__t2044t;
  __t2046t=2.0;
  __t2047t=__t2046t;
  __t2048t=3.0;
  __t2049t=__t2048t;
  Point3D__t2031t(__t2045t,__t2047t,__t2049t,&__t2050t__plane__x,&__t2050t__plane__y,&__t2050t__z);
  if(!__t2043t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2043t__,&__t2050t__plane__x,8);
  memcpy(__t2043t__+8,&__t2050t__plane__y,8);
  memcpy(__t2043t__+16,&__t2050t__z,8);
  __t2051t=1;
  __t_errcode=mutget__t791t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t2051t,&__t2052t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2053t=1.0;
  __t2054t=__t2053t;
  __t2055t=2.0;
  __t2056t=__t2055t;
  __t2057t=3.0;
  __t2058t=__t2057t;
  Point3D__t2031t(__t2054t,__t2056t,__t2058t,&__t2059t__plane__x,&__t2059t__plane__y,&__t2059t__z);
  if(!__t2052t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2052t__,&__t2059t__plane__x,8);
  memcpy(__t2052t__+8,&__t2059t__plane__y,8);
  memcpy(__t2052t__+16,&__t2059t__z,8);
  __t2060t__unsafe_ptr=points__unsafe_ptr;
  __t2060t__unsafe_size=points__unsafe_size;
  __t2060t__unsafe_offset=points__unsafe_offset+0;
  __t2060t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t2014t(__t2060t__unsafe_ptr,__t2060t__unsafe_size,__t2060t__unsafe_offset,__t2060t__unsafe_align,&__t2064t__x,&__t2064t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t2064t__x;
  sums__y=__t2064t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2040t__unsafe_ptr,&__t2041t____t692t__);
  if(__t2041t____t692t__){
  free__t661t(&__t2040t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2034t();return 0;}