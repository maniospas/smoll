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

static inline __attribute__((always_inline)) void float____buffer__t2016t(char** __t2029t, uint64_t* __t2030t, uint16_t* __t2031t, uint16_t* __t2032t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2029t=unsafe_ptr;
  *__t2030t=unsafe_size;
  *__t2031t=unsafe_offset;
  *__t2032t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2033t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2033t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2034t) {
  char* allocated=*__t2034t;
  if(allocated){
  free(allocated);
  }
  *__t2034t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2035t) {
  int value=0;
  *__t2035t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2036t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2036t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2037t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2037t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2038t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2038t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2039t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2039t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2040t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2040t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2041t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2041t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2042t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2042t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2043t) {
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
  *__t2043t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2044t, uint64_t* __t2045t, uint16_t* __t2046t, uint16_t* __t2047t, uint64_t size, char** __t2048t, uint64_t* __t2049t, uint16_t* __t2050t, uint16_t* __t2051t) {
  char* buffer__unsafe_ptr=*__t2044t;
  uint64_t buffer__unsafe_size=*__t2045t;
  uint16_t buffer__unsafe_offset=*__t2046t;
  uint16_t buffer__unsafe_align=*__t2047t;
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
  *__t2044t=buffer__unsafe_ptr;
  *__t2045t=buffer__unsafe_size;
  *__t2046t=buffer__unsafe_offset;
  *__t2047t=buffer__unsafe_align;
  *__t2048t=buffer__unsafe_ptr;
  *__t2049t=buffer__unsafe_size;
  *__t2050t=buffer__unsafe_offset;
  *__t2051t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2052t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2052t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2053t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2053t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2054t) {
  *__t2054t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2055t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2055t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2056t, uint64_t* __t2057t, uint16_t* __t2058t, uint16_t* __t2059t, uint64_t i, char** __t2060t) {
  char* buffer__unsafe_ptr=*__t2056t;
  uint64_t buffer__unsafe_size=*__t2057t;
  uint16_t buffer__unsafe_offset=*__t2058t;
  uint16_t buffer__unsafe_align=*__t2059t;
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
  *__t2056t=buffer__unsafe_ptr;
  *__t2057t=buffer__unsafe_size;
  *__t2058t=buffer__unsafe_offset;
  *__t2059t=buffer__unsafe_align;
  *__t2060t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2011t() {
  double __t2013t=0;
  char* __t2018t__unsafe_ptr=0;
  uint64_t __t2018t__unsafe_size=0;
  uint16_t __t2018t__unsafe_offset=0;
  uint16_t __t2018t__unsafe_align=0;
  uint64_t __t2019t=0;
  char* __t2020t__unsafe_ptr=0;
  uint64_t __t2020t__unsafe_size=0;
  uint16_t __t2020t__unsafe_offset=0;
  uint16_t __t2020t__unsafe_align=0;
  char __t2021t____t692t__=0;
  uint64_t __t2022t=0;
  char* __t2023t__=0;
  char* element=0;
  double __t2024t____0=0;
  double __t2026t=0;
  double __t2027t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t2013t=1.0;
  float____buffer__t2016t(&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align);
  __t2019t=1;
  __t_errcode=alloc__t690t(&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align,__t2019t,&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2018t__unsafe_ptr,&__t2013t,8);
  __t2022t=0;
  __t_errcode=mutget__t791t(&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align,__t2022t,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  element=__t2023t__;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2024t____0,element,8);
  print__t385t(__t2024t____0);
  __t2026t=2.0;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(element,&__t2026t,8);
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2027t____0,element,8);
  print__t385t(__t2027t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2020t__unsafe_ptr,&__t2021t____t692t__);
  if(__t2021t____t692t__){
  free__t661t(&__t2020t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}