#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2028t="hello world!";
const char* const __t382t="\n";
const char* const __t2033t="... and goodbye for now.";
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

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2039t, uint64_t* __t2040t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2039t=__t613t;
  *__t2040t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2041t, uint64_t* __t2042t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2041t=from;
  *__t2042t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2043t) {
  int value=0;
  *__t2043t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2044t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2044t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2045t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2045t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2046t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2046t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2047t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2047t=z;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t2048t) {
  char __t637t__=0;
  char __t638t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t637t__);
  if(__t637t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t638t__);
  if(__t638t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2048t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t2031t(char** __t2049t, uint64_t* __t2050t, uint16_t* __t2051t, uint16_t* __t2052t) {
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

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2055t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2055t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2056t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2057t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2057t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2058t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2058t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2059t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2059t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2060t) {
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
  *__t2060t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2061t, uint64_t* __t2062t, uint16_t* __t2063t, uint16_t* __t2064t, uint64_t size, char** __t2065t, uint64_t* __t2066t, uint16_t* __t2067t, uint16_t* __t2068t) {
  char* buffer__unsafe_ptr=*__t2061t;
  uint64_t buffer__unsafe_size=*__t2062t;
  uint16_t buffer__unsafe_offset=*__t2063t;
  uint16_t buffer__unsafe_align=*__t2064t;
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
  *__t2061t=buffer__unsafe_ptr;
  *__t2062t=buffer__unsafe_size;
  *__t2063t=buffer__unsafe_offset;
  *__t2064t=buffer__unsafe_align;
  *__t2065t=buffer__unsafe_ptr;
  *__t2066t=buffer__unsafe_size;
  *__t2067t=buffer__unsafe_offset;
  *__t2068t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2069t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2069t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2070t) {
  *__t2070t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2071t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2071t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2072t) {
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
  *__t2072t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t2013t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t2014t=0;
  char __t2015t=0;
  char* __t2016t__=0;
  const char* __t2017t__value=0;
  const char* sentence=0;
  int __t_complain=0;
  __t2014t=0;
  while(1){
  __t_complain=get__t798t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t2014t,&__t2016t__);
  __t2015t=__t_complain;
  if(!__t2016t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2017t__value,__t2016t__,8);
  }
  sentence=__t2017t__value;
  __t2015t=__t2015t==0;
  __t2014t=__t2014t+1;
  if(!__t2015t){
  break;
  }
  print__t380t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t2019t() {
  uint64_t __t2021t=0;
  uint64_t __t2022t=0;
  uint64_t __t2023t____t613t=0;
  uint64_t __t2023t__to=0;
  uint64_t __t2024t__from=0;
  uint64_t __t2024t__to=0;
  char __t2025t=0;
  uint64_t __t2026t__=0;
  uint64_t i=0;
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__unsafe_size=0;
  uint16_t __t2034t__unsafe_offset=0;
  uint16_t __t2034t__unsafe_align=0;
  uint64_t __t2035t=0;
  char* __t2036t__unsafe_ptr=0;
  uint64_t __t2036t__unsafe_size=0;
  uint16_t __t2036t__unsafe_offset=0;
  uint16_t __t2036t__unsafe_align=0;
  char __t2037t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t2022t=10;
  of__t612t(__t2022t,&__t2023t____t613t,&__t2023t__to);
  range__t629t(__t2023t____t613t,__t2023t__to,&__t2024t__from,&__t2024t__to);
  __t2021t=0;
  while(1){
  __t_complain=get__t636t(__t2024t__from,__t2024t__to,__t2021t,&__t2026t__);
  __t2025t=__t_complain;
  i=__t2026t__;
  __t2025t=__t2025t==0;
  __t2021t=__t2021t+1;
  if(!__t2025t){
  break;
  }
  print__t393t(i);
  }
  cstr____buffer__t2031t(&__t2034t__unsafe_ptr,&__t2034t__unsafe_size,&__t2034t__unsafe_offset,&__t2034t__unsafe_align);
  __t2035t=2;
  __t_errcode=alloc__t690t(&__t2034t__unsafe_ptr,&__t2034t__unsafe_size,&__t2034t__unsafe_offset,&__t2034t__unsafe_align,__t2035t,&__t2036t__unsafe_ptr,&__t2036t__unsafe_size,&__t2036t__unsafe_offset,&__t2036t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2034t__unsafe_ptr,&__t2028t,8);
  memcpy(__t2034t__unsafe_ptr+8,&__t2033t,8);
  print__t2013t(__t2034t__unsafe_ptr,__t2034t__unsafe_size,__t2034t__unsafe_offset,__t2034t__unsafe_align);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2036t__unsafe_ptr,&__t2037t____t692t__);
  if(__t2037t____t692t__){
  free__t661t(&__t2036t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2019t();return 0;}