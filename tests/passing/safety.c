#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2029t="going to deallocate of size: ";
const char* const __t374t="";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2012t(char** __t2049t, uint64_t* __t2050t, uint16_t* __t2051t, uint16_t* __t2052t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2049t=unsafe_ptr;
  *__t2050t=unsafe_size;
  *__t2051t=unsafe_offset;
  *__t2052t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2053t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2053t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2054t) {
  char* allocated=*__t2054t;
  if(allocated){
  free(allocated);
  }
  *__t2054t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2055t) {
  int value=0;
  *__t2055t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2056t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2056t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2057t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2057t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2058t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2058t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2059t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2059t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2060t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2060t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2061t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2061t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2062t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2062t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2063t) {
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
  *__t2063t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2064t, uint64_t* __t2065t, uint16_t* __t2066t, uint16_t* __t2067t, uint64_t size, char** __t2068t, uint64_t* __t2069t, uint16_t* __t2070t, uint16_t* __t2071t) {
  char* buffer__unsafe_ptr=*__t2064t;
  uint64_t buffer__unsafe_size=*__t2065t;
  uint16_t buffer__unsafe_offset=*__t2066t;
  uint16_t buffer__unsafe_align=*__t2067t;
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
  *__t2064t=buffer__unsafe_ptr;
  *__t2065t=buffer__unsafe_size;
  *__t2066t=buffer__unsafe_offset;
  *__t2067t=buffer__unsafe_align;
  *__t2068t=buffer__unsafe_ptr;
  *__t2069t=buffer__unsafe_size;
  *__t2070t=buffer__unsafe_offset;
  *__t2071t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2072t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2072t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2073t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2073t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2074t) {
  *__t2074t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2075t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2075t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2076t, uint64_t* __t2077t, uint16_t* __t2078t, uint16_t* __t2079t, uint64_t i, char** __t2080t) {
  char* buffer__unsafe_ptr=*__t2076t;
  uint64_t buffer__unsafe_size=*__t2077t;
  uint16_t buffer__unsafe_offset=*__t2078t;
  uint16_t buffer__unsafe_align=*__t2079t;
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
  *__t2076t=buffer__unsafe_ptr;
  *__t2077t=buffer__unsafe_size;
  *__t2078t=buffer__unsafe_offset;
  *__t2079t=buffer__unsafe_align;
  *__t2080t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2081t) {
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
  *__t2081t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2082t) {
  goto __t_return;
  __t_return:
  *__t2082t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t2011t(char** __t2083t, uint64_t* __t2084t, uint16_t* __t2085t, uint16_t* __t2086t) {
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__unsafe_size=0;
  uint16_t __t2014t__unsafe_offset=0;
  uint16_t __t2014t__unsafe_align=0;
  char* __t2015t__unsafe_ptr=0;
  uint64_t __t2015t__unsafe_size=0;
  uint16_t __t2015t__unsafe_offset=0;
  uint16_t __t2015t__unsafe_align=0;
  uint64_t __t2016t=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__unsafe_size=0;
  uint16_t __t2017t__unsafe_offset=0;
  uint16_t __t2017t__unsafe_align=0;
  char __t2018t____t692t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t2019t=0;
  char* __t2020t__=0;
  double __t2021t=0;
  uint64_t __t2022t=0;
  char* __t2023t__=0;
  double __t2024t=0;
  uint64_t __t2025t=0;
  char* __t2026t__=0;
  double __t2027t__value=0;
  uint64_t __t2031t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2012t(&__t2014t__unsafe_ptr,&__t2014t__unsafe_size,&__t2014t__unsafe_offset,&__t2014t__unsafe_align);
  __t2015t__unsafe_ptr=__t2014t__unsafe_ptr;
  __t2015t__unsafe_size=__t2014t__unsafe_size;
  __t2015t__unsafe_offset=__t2014t__unsafe_offset;
  __t2015t__unsafe_align=__t2014t__unsafe_align;
  __t2016t=2;
  __t_errcode=alloc__t690t(&__t2015t__unsafe_ptr,&__t2015t__unsafe_size,&__t2015t__unsafe_offset,&__t2015t__unsafe_align,__t2016t,&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2017t__unsafe_ptr;
  x__unsafe_size=__t2017t__unsafe_size;
  x__unsafe_offset=__t2017t__unsafe_offset;
  x__unsafe_align=__t2017t__unsafe_align;
  __t2019t=0;
  __t_errcode=mutget__t791t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t2019t,&__t2020t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2021t=1.0;
  if(!__t2020t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2020t__,&__t2021t,8);
  __t2022t=1;
  __t_errcode=mutget__t791t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t2022t,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2024t=2.0;
  if(!__t2023t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2023t__,&__t2024t,8);
  __t2025t=1;
  __t_errcode=get__t798t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t2025t,&__t2026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2027t__value,__t2026t__,8);
  print__t385t(__t2027t__value);
  goto __t_return;
  
  __t_failure:print__t378t(__t2029t,__t374t);
  len__t805t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t393t(x__unsafe_size);
  exists__t591t(x__unsafe_ptr,&__t2018t____t692t__);
  if(__t2018t____t692t__){
  free__t661t(&x__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2083t=x__unsafe_ptr;
  *__t2084t=x__unsafe_size;
  *__t2085t=x__unsafe_offset;
  *__t2086t=x__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t2033t(char** __t2087t, uint64_t* __t2088t, uint16_t* __t2089t, uint16_t* __t2090t, char** __t2091t, uint64_t* __t2092t, uint16_t* __t2093t, uint16_t* __t2094t, char** __t2095t, uint64_t* __t2096t, uint16_t* __t2097t, uint16_t* __t2098t) {
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__unsafe_size=0;
  uint16_t __t2034t__unsafe_offset=0;
  uint16_t __t2034t__unsafe_align=0;
  char __t2035t____t2018t____t692t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t2036t__unsafe_ptr=0;
  uint64_t __t2036t__unsafe_size=0;
  uint16_t __t2036t__unsafe_offset=0;
  uint16_t __t2036t__unsafe_align=0;
  char* __t2037t__unsafe_ptr=0;
  uint64_t __t2037t__unsafe_size=0;
  uint16_t __t2037t__unsafe_offset=0;
  uint16_t __t2037t__unsafe_align=0;
  uint64_t __t2038t=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__unsafe_size=0;
  uint16_t __t2039t__unsafe_offset=0;
  uint16_t __t2039t__unsafe_align=0;
  char __t2040t____t692t__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t2011t(&__t2034t__unsafe_ptr,&__t2034t__unsafe_size,&__t2034t__unsafe_offset,&__t2034t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t2034t__unsafe_ptr;
  t__unsafe_size=__t2034t__unsafe_size;
  t__unsafe_offset=__t2034t__unsafe_offset;
  t__unsafe_align=__t2034t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t2012t(&__t2036t__unsafe_ptr,&__t2036t__unsafe_size,&__t2036t__unsafe_offset,&__t2036t__unsafe_align);
  __t2037t__unsafe_ptr=__t2036t__unsafe_ptr;
  __t2037t__unsafe_size=__t2036t__unsafe_size;
  __t2037t__unsafe_offset=__t2036t__unsafe_offset;
  __t2037t__unsafe_align=__t2036t__unsafe_align;
  __t2038t=3;
  __t_errcode=alloc__t690t(&__t2037t__unsafe_ptr,&__t2037t__unsafe_size,&__t2037t__unsafe_offset,&__t2037t__unsafe_align,__t2038t,&__t2039t__unsafe_ptr,&__t2039t__unsafe_size,&__t2039t__unsafe_offset,&__t2039t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t2039t__unsafe_ptr;
  k__unsafe_size=__t2039t__unsafe_size;
  k__unsafe_offset=__t2039t__unsafe_offset;
  k__unsafe_align=__t2039t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(k__unsafe_ptr,&__t2040t____t692t__);
  if(__t2040t____t692t__){
  free__t661t(&k__unsafe_ptr);
  }
  print__t378t(__t2029t,__t374t);
  len__t805t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t393t(t__unsafe_size);
  exists__t591t(t__unsafe_ptr,&__t2035t____t2018t____t692t__);
  if(__t2035t____t2018t____t692t__){
  free__t661t(&t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2087t=t__unsafe_ptr;
  *__t2088t=t__unsafe_size;
  *__t2089t=t__unsafe_offset;
  *__t2090t=t__unsafe_align;
  *__t2091t=j__unsafe_ptr;
  *__t2092t=j__unsafe_size;
  *__t2093t=j__unsafe_offset;
  *__t2094t=j__unsafe_align;
  *__t2095t=k__unsafe_ptr;
  *__t2096t=k__unsafe_size;
  *__t2097t=k__unsafe_offset;
  *__t2098t=k__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2041t() {
  char* __t2043t__t__unsafe_ptr=0;
  uint64_t __t2043t__t__unsafe_size=0;
  uint16_t __t2043t__t__unsafe_offset=0;
  uint16_t __t2043t__t__unsafe_align=0;
  char* __t2043t__j__unsafe_ptr=0;
  uint64_t __t2043t__j__unsafe_size=0;
  uint16_t __t2043t__j__unsafe_offset=0;
  uint16_t __t2043t__j__unsafe_align=0;
  char* __t2043t__k__unsafe_ptr=0;
  uint64_t __t2043t__k__unsafe_size=0;
  uint16_t __t2043t__k__unsafe_offset=0;
  uint16_t __t2043t__k__unsafe_align=0;
  char __t2044t____t2035t____t2018t____t692t__=0;
  char __t2044t____t2040t____t692t__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __t2045t=0;
  char* __t2046t__=0;
  double __t2047t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t2033t(&__t2043t__t__unsafe_ptr,&__t2043t__t__unsafe_size,&__t2043t__t__unsafe_offset,&__t2043t__t__unsafe_align,&__t2043t__j__unsafe_ptr,&__t2043t__j__unsafe_size,&__t2043t__j__unsafe_offset,&__t2043t__j__unsafe_align,&__t2043t__k__unsafe_ptr,&__t2043t__k__unsafe_size,&__t2043t__k__unsafe_offset,&__t2043t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t2043t__t__unsafe_ptr;
  t__t__unsafe_size=__t2043t__t__unsafe_size;
  t__t__unsafe_offset=__t2043t__t__unsafe_offset;
  t__t__unsafe_align=__t2043t__t__unsafe_align;
  t__j__unsafe_ptr=__t2043t__j__unsafe_ptr;
  t__j__unsafe_size=__t2043t__j__unsafe_size;
  t__j__unsafe_offset=__t2043t__j__unsafe_offset;
  t__j__unsafe_align=__t2043t__j__unsafe_align;
  t__k__unsafe_ptr=__t2043t__k__unsafe_ptr;
  t__k__unsafe_size=__t2043t__k__unsafe_size;
  t__k__unsafe_offset=__t2043t__k__unsafe_offset;
  t__k__unsafe_align=__t2043t__k__unsafe_align;
  __t2045t=1;
  __t_errcode=get__t798t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t2045t,&__t2046t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2046t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2047t__value,__t2046t__,8);
  print__t385t(__t2047t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2043t__k__unsafe_ptr,&__t2044t____t2040t____t692t__);
  if(__t2044t____t2040t____t692t__){
  free__t661t(&__t2043t__k__unsafe_ptr);
  }
  print__t378t(__t2029t,__t374t);
  len__t805t(__t2043t__t__unsafe_ptr,__t2043t__t__unsafe_size,__t2043t__t__unsafe_offset,__t2043t__t__unsafe_align,&__t2043t__t__unsafe_size);
  print__t393t(__t2043t__t__unsafe_size);
  exists__t591t(__t2043t__t__unsafe_ptr,&__t2044t____t2035t____t2018t____t692t__);
  if(__t2044t____t2035t____t2018t____t692t__){
  free__t661t(&__t2043t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2041t();return 0;}