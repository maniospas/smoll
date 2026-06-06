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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2013t(char** __t2033t, uint64_t* __t2034t, uint16_t* __t2035t, uint16_t* __t2036t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2033t=unsafe_ptr;
  *__t2034t=unsafe_size;
  *__t2035t=unsafe_offset;
  *__t2036t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2037t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2037t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2038t) {
  char* allocated=*__t2038t;
  if(allocated){
  free(allocated);
  }
  *__t2038t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2039t) {
  int value=0;
  *__t2039t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2040t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2040t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2041t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2041t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2042t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2042t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2043t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2044t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2044t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2045t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2045t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2046t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2046t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2047t) {
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
  *__t2047t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2048t, uint64_t* __t2049t, uint16_t* __t2050t, uint16_t* __t2051t, uint64_t size, char** __t2052t, uint64_t* __t2053t, uint16_t* __t2054t, uint16_t* __t2055t) {
  char* buffer__unsafe_ptr=*__t2048t;
  uint64_t buffer__unsafe_size=*__t2049t;
  uint16_t buffer__unsafe_offset=*__t2050t;
  uint16_t buffer__unsafe_align=*__t2051t;
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
  *__t2048t=buffer__unsafe_ptr;
  *__t2049t=buffer__unsafe_size;
  *__t2050t=buffer__unsafe_offset;
  *__t2051t=buffer__unsafe_align;
  *__t2052t=buffer__unsafe_ptr;
  *__t2053t=buffer__unsafe_size;
  *__t2054t=buffer__unsafe_offset;
  *__t2055t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2056t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2057t) {
  *__t2057t=to;
}

static inline __attribute__((always_inline)) int realloc__t657t(char* allocated, uint64_t bytes, char** __t2058t) {
  char* new_allocated=0;
  char __t658t__=0;
  char __t659t__=0;
  char* __t660t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t591t(new_allocated,&__t658t__);
  not__t28t(__t658t__,&__t659t__);
  if(__t659t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t660t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2058t=__t660t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2059t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2059t=z;
}

static inline __attribute__((always_inline)) int resize__t760t(char** __t2060t, uint64_t* __t2061t, uint16_t* __t2062t, uint16_t* __t2063t, uint64_t size, char** __t2064t, uint64_t* __t2065t, uint16_t* __t2066t, uint16_t* __t2067t) {
  char* buffer__unsafe_ptr=*__t2060t;
  uint64_t buffer__unsafe_size=*__t2061t;
  uint16_t buffer__unsafe_offset=*__t2062t;
  uint16_t buffer__unsafe_align=*__t2063t;
  char __t761t__=0;
  uint64_t __t762t=0;
  char __t763t__=0;
  uint64_t __t764t__=0;
  uint64_t __t765t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t766t__=0;
  uint64_t __t767t__=0;
  uint64_t bytes=0;
  char* __t768t__=0;
  char __t769t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t761t__);
  if(__t761t__){
  goto __t_return;
  }
  __t762t=0;
  eq__t120t(buffer__unsafe_size,__t762t,&__t763t__);
  if(__t763t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t764t__);
  mul__t199t(buffer__unsafe_size,__t764t__,&__t765t__);
  prev_bytes=__t765t__;
  buffer__unsafe_size=size;
  nat__t665t(buffer__unsafe_align,&__t766t__);
  mul__t199t(__t766t__,size,&__t767t__);
  bytes=__t767t__;
  __t_errcode=realloc__t657t(buffer__unsafe_ptr,bytes,&__t768t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t768t__;
  lt__t252t(prev_bytes,bytes,&__t769t__);
  if(__t769t__){
  zero__t662t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2060t=buffer__unsafe_ptr;
  *__t2061t=buffer__unsafe_size;
  *__t2062t=buffer__unsafe_offset;
  *__t2063t=buffer__unsafe_align;
  *__t2064t=buffer__unsafe_ptr;
  *__t2065t=buffer__unsafe_size;
  *__t2066t=buffer__unsafe_offset;
  *__t2067t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2068t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2068t=z;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2069t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2069t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2070t, uint64_t* __t2071t, uint16_t* __t2072t, uint16_t* __t2073t, uint64_t i, char** __t2074t) {
  char* buffer__unsafe_ptr=*__t2070t;
  uint64_t buffer__unsafe_size=*__t2071t;
  uint16_t buffer__unsafe_offset=*__t2072t;
  uint16_t buffer__unsafe_align=*__t2073t;
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
  *__t2070t=buffer__unsafe_ptr;
  *__t2071t=buffer__unsafe_size;
  *__t2072t=buffer__unsafe_offset;
  *__t2073t=buffer__unsafe_align;
  *__t2074t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2075t) {
  goto __t_return;
  __t_return:
  *__t2075t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2076t) {
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
  *__t2076t=__t804t__;
  
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
  char* __t2015t__unsafe_ptr=0;
  uint64_t __t2015t__unsafe_size=0;
  uint16_t __t2015t__unsafe_offset=0;
  uint16_t __t2015t__unsafe_align=0;
  char* __t2016t__unsafe_ptr=0;
  uint64_t __t2016t__unsafe_size=0;
  uint16_t __t2016t__unsafe_offset=0;
  uint16_t __t2016t__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t2017t=0;
  char* __t2018t__unsafe_ptr=0;
  uint64_t __t2018t__unsafe_size=0;
  uint16_t __t2018t__unsafe_offset=0;
  uint16_t __t2018t__unsafe_align=0;
  char __t2019t____t692t__=0;
  uint64_t __t2020t=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__unsafe_size=0;
  uint16_t __t2021t__unsafe_offset=0;
  uint16_t __t2021t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t2022t=0;
  char* __t2023t__=0;
  double __t2024t=0;
  uint64_t __t2025t__=0;
  uint64_t __t2027t__=0;
  uint64_t __t2029t=0;
  char* __t2030t__=0;
  double __t2031t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t2013t(&__t2015t__unsafe_ptr,&__t2015t__unsafe_size,&__t2015t__unsafe_offset,&__t2015t__unsafe_align);
  __t2016t__unsafe_ptr=__t2015t__unsafe_ptr;
  __t2016t__unsafe_size=__t2015t__unsafe_size;
  __t2016t__unsafe_offset=__t2015t__unsafe_offset;
  __t2016t__unsafe_align=__t2015t__unsafe_align;
  __t2017t=20;
  __t_errcode=alloc__t690t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2017t,&__t2018t__unsafe_ptr,&__t2018t__unsafe_size,&__t2018t__unsafe_offset,&__t2018t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2020t=10;
  __t_errcode=resize__t760t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2020t,&__t2021t__unsafe_ptr,&__t2021t__unsafe_size,&__t2021t__unsafe_offset,&__t2021t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2022t=0;
  __t_errcode=mutget__t791t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2022t,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2024t=1.0;
  if(!__t2023t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2023t__,&__t2024t,8);
  len__t805t(__t2016t__unsafe_ptr,__t2016t__unsafe_size,__t2016t__unsafe_offset,__t2016t__unsafe_align,&__t2025t__);
  print__t393t(__t2016t__unsafe_size);
  len__t805t(__t2016t__unsafe_ptr,__t2016t__unsafe_size,__t2016t__unsafe_offset,__t2016t__unsafe_align,&__t2027t__);
  print__t393t(__t2016t__unsafe_size);
  __t2029t=0;
  __t_errcode=get__t798t(__t2016t__unsafe_ptr,__t2016t__unsafe_size,__t2016t__unsafe_offset,__t2016t__unsafe_align,__t2029t,&__t2030t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2030t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2031t__value,__t2030t__,8);
  print__t385t(__t2031t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2018t__unsafe_ptr,&__t2019t____t692t__);
  if(__t2019t____t692t__){
  free__t661t(&__t2018t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}