#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2019t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2041t(char** __t2088t, uint64_t* __t2089t, uint16_t* __t2090t, uint16_t* __t2091t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2088t=unsafe_ptr;
  *__t2089t=unsafe_size;
  *__t2090t=unsafe_offset;
  *__t2091t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2092t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2092t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2093t) {
  char* allocated=*__t2093t;
  if(allocated){
  free(allocated);
  }
  *__t2093t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2094t) {
  int value=0;
  *__t2094t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2095t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2095t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2096t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2096t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2097t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2097t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2098t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2098t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2099t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2099t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2100t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2100t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2101t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2101t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2102t) {
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
  *__t2102t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2103t, uint64_t* __t2104t, uint16_t* __t2105t, uint16_t* __t2106t, uint64_t size, char** __t2107t, uint64_t* __t2108t, uint16_t* __t2109t, uint16_t* __t2110t) {
  char* buffer__unsafe_ptr=*__t2103t;
  uint64_t buffer__unsafe_size=*__t2104t;
  uint16_t buffer__unsafe_offset=*__t2105t;
  uint16_t buffer__unsafe_align=*__t2106t;
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
  *__t2103t=buffer__unsafe_ptr;
  *__t2104t=buffer__unsafe_size;
  *__t2105t=buffer__unsafe_offset;
  *__t2106t=buffer__unsafe_align;
  *__t2107t=buffer__unsafe_ptr;
  *__t2108t=buffer__unsafe_size;
  *__t2109t=buffer__unsafe_offset;
  *__t2110t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2111t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2111t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2112t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2112t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2113t) {
  *__t2113t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2114t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2114t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2115t, uint64_t* __t2116t, uint16_t* __t2117t, uint16_t* __t2118t, uint64_t i, char** __t2119t) {
  char* buffer__unsafe_ptr=*__t2115t;
  uint64_t buffer__unsafe_size=*__t2116t;
  uint16_t buffer__unsafe_offset=*__t2117t;
  uint16_t buffer__unsafe_align=*__t2118t;
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
  *__t2115t=buffer__unsafe_ptr;
  *__t2116t=buffer__unsafe_size;
  *__t2117t=buffer__unsafe_offset;
  *__t2118t=buffer__unsafe_align;
  *__t2119t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2120t) {
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
  *__t2120t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t657t(char* allocated, uint64_t bytes, char** __t2121t) {
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
  *__t2121t=__t660t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2122t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2122t=z;
}

static inline __attribute__((always_inline)) int resize__t760t(char** __t2123t, uint64_t* __t2124t, uint16_t* __t2125t, uint16_t* __t2126t, uint64_t size, char** __t2127t, uint64_t* __t2128t, uint16_t* __t2129t, uint16_t* __t2130t) {
  char* buffer__unsafe_ptr=*__t2123t;
  uint64_t buffer__unsafe_size=*__t2124t;
  uint16_t buffer__unsafe_offset=*__t2125t;
  uint16_t buffer__unsafe_align=*__t2126t;
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
  *__t2123t=buffer__unsafe_ptr;
  *__t2124t=buffer__unsafe_size;
  *__t2125t=buffer__unsafe_offset;
  *__t2126t=buffer__unsafe_align;
  *__t2127t=buffer__unsafe_ptr;
  *__t2128t=buffer__unsafe_size;
  *__t2129t=buffer__unsafe_offset;
  *__t2130t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2131t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2131t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t781t(char** __t2132t, uint64_t* __t2133t, uint16_t* __t2134t, uint16_t* __t2135t, char** __t2136t) {
  char* buffer__unsafe_ptr=*__t2132t;
  uint64_t buffer__unsafe_size=*__t2133t;
  uint16_t buffer__unsafe_offset=*__t2134t;
  uint16_t buffer__unsafe_align=*__t2135t;
  uint64_t __t782t=0;
  char __t783t__=0;
  uint64_t __t784t=0;
  uint64_t __t785t__=0;
  uint64_t __t786t__=0;
  uint64_t __t787t__=0;
  uint64_t __t788t__=0;
  uint64_t __t789t__=0;
  char* __t790t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t782t=0;
  eq__t120t(__t782t,buffer__unsafe_size,&__t783t__);
  if(__t783t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t784t=1;
  nat__t665t(buffer__unsafe_offset,&__t785t__);
  add__t175t(__t784t,__t785t__,&__t786t__);
  __t_errcode=sub__t352t(buffer__unsafe_size,__t786t__,&__t787t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t788t__);
  mul__t199t(__t787t__,__t788t__,&__t789t__);
  add__t663t(buffer__unsafe_ptr,__t789t__,&__t790t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2132t=buffer__unsafe_ptr;
  *__t2133t=buffer__unsafe_size;
  *__t2134t=buffer__unsafe_offset;
  *__t2135t=buffer__unsafe_align;
  *__t2136t=__t790t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t2060t(char** __t2137t, uint64_t* __t2138t, uint16_t* __t2139t, uint16_t* __t2140t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t2137t=unsafe_ptr;
  *__t2138t=unsafe_size;
  *__t2139t=unsafe_offset;
  *__t2140t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t2013t(char* f) {
  char* __t2015t=0;
  char* __t2017t=0;
  double __t2018t__=0;
  char* __t2022t=0;
  char* __t2024t=0;
  double __t2025t__=0;
  char* __t2028t=0;
  char* __t2030t=0;
  double __t2031t__=0;
  char* __t2034t=0;
  char* __t2036t=0;
  double __t2037t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2015t=f+0;
  if(!__t2015t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2017t=__t2015t+0;
  if(!__t2017t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2018t__,__t2017t,8);
  print__t383t(__t2018t__,__t2019t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2022t=f+0;
  if(!__t2022t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2024t=__t2022t+8;
  if(!__t2024t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2025t__,__t2024t,8);
  print__t383t(__t2025t__,__t2019t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2028t=f+16;
  if(!__t2028t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2030t=__t2028t+0;
  if(!__t2030t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2031t__,__t2030t,8);
  print__t383t(__t2031t__,__t2019t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2034t=f+16;
  if(!__t2034t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2036t=__t2034t+8;
  if(!__t2036t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2037t__,__t2036t,8);
  print__t385t(__t2037t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2079t(char** __t2141t, uint64_t* __t2142t, uint16_t* __t2143t, uint16_t* __t2144t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2141t=unsafe_ptr;
  *__t2142t=unsafe_size;
  *__t2143t=unsafe_offset;
  *__t2144t=unsafe_align;
}

static inline __attribute__((always_inline)) int main__t2039t() {
  char* __t2043t__unsafe_ptr=0;
  uint64_t __t2043t__unsafe_size=0;
  uint16_t __t2043t__unsafe_offset=0;
  uint16_t __t2043t__unsafe_align=0;
  uint64_t __t2044t=0;
  char* __t2045t__unsafe_ptr=0;
  uint64_t __t2045t__unsafe_size=0;
  uint16_t __t2045t__unsafe_offset=0;
  uint16_t __t2045t__unsafe_align=0;
  char __t2046t____t692t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t2047t=0;
  char* __t2048t__=0;
  double __t2049t=0;
  uint64_t __t2050t=0;
  char* __t2051t__=0;
  double __t2052t__value=0;
  uint64_t __t2054t=0;
  char* __t2055t__=0;
  char* f0=0;
  uint64_t __t2056t=0;
  char* __t2057t__unsafe_ptr=0;
  uint64_t __t2057t__unsafe_size=0;
  uint16_t __t2057t__unsafe_offset=0;
  uint16_t __t2057t__unsafe_align=0;
  char* __t2058t__=0;
  double __t2059t__value=0;
  char* __t2062t__unsafe_ptr=0;
  uint64_t __t2062t__unsafe_size=0;
  uint16_t __t2062t__unsafe_offset=0;
  uint16_t __t2062t__unsafe_align=0;
  char* __t2063t__unsafe_ptr=0;
  uint64_t __t2063t__unsafe_size=0;
  uint16_t __t2063t__unsafe_offset=0;
  uint16_t __t2063t__unsafe_align=0;
  uint64_t __t2064t=0;
  char* __t2065t__unsafe_ptr=0;
  uint64_t __t2065t__unsafe_size=0;
  uint16_t __t2065t__unsafe_offset=0;
  uint16_t __t2065t__unsafe_align=0;
  char __t2066t____t692t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t2067t=0;
  char* __t2068t__=0;
  double __t2069t=0;
  double __t2070t=0;
  double __t2071t=0;
  double __t2072t=0;
  uint64_t __t2073t=0;
  char* __t2074t__=0;
  double __t2076t=0;
  char* __t2081t__unsafe_ptr=0;
  uint64_t __t2081t__unsafe_size=0;
  uint16_t __t2081t__unsafe_offset=0;
  uint16_t __t2081t__unsafe_align=0;
  uint64_t __t2082t=0;
  char* __t2083t__unsafe_ptr=0;
  uint64_t __t2083t__unsafe_size=0;
  uint16_t __t2083t__unsafe_offset=0;
  uint16_t __t2083t__unsafe_align=0;
  char __t2084t____t692t__=0;
  char* __t2085t__=0;
  char* n=0;
  double __t2086t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t2041t(&__t2043t__unsafe_ptr,&__t2043t__unsafe_size,&__t2043t__unsafe_offset,&__t2043t__unsafe_align);
  __t2044t=1;
  __t_errcode=alloc__t690t(&__t2043t__unsafe_ptr,&__t2043t__unsafe_size,&__t2043t__unsafe_offset,&__t2043t__unsafe_align,__t2044t,&__t2045t__unsafe_ptr,&__t2045t__unsafe_size,&__t2045t__unsafe_offset,&__t2045t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2047t=0;
  __t_errcode=mutget__t791t(&__t2045t__unsafe_ptr,&__t2045t__unsafe_size,&__t2045t__unsafe_offset,&__t2045t__unsafe_align,__t2047t,&__t2048t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2049t=1.0;
  if(!__t2048t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2048t__,&__t2049t,8);
  __t2050t=0;
  __t_errcode=get__t798t(__t2045t__unsafe_ptr,__t2045t__unsafe_size,__t2045t__unsafe_offset,__t2045t__unsafe_align,__t2050t,&__t2051t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2051t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2052t__value,__t2051t__,8);
  print__t385t(__t2052t__value);
  __t2054t=0;
  __t_errcode=mutget__t791t(&__t2045t__unsafe_ptr,&__t2045t__unsafe_size,&__t2045t__unsafe_offset,&__t2045t__unsafe_align,__t2054t,&__t2055t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t2055t__;
  __t2056t=2;
  __t_errcode=resize__t760t(&__t2045t__unsafe_ptr,&__t2045t__unsafe_size,&__t2045t__unsafe_offset,&__t2045t__unsafe_align,__t2056t,&__t2057t__unsafe_ptr,&__t2057t__unsafe_size,&__t2057t__unsafe_offset,&__t2057t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t781t(&__t2045t__unsafe_ptr,&__t2045t__unsafe_size,&__t2045t__unsafe_offset,&__t2045t__unsafe_align,&__t2058t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2059t__value,f0,8);
  if(!__t2058t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2058t__,&__t2059t__value,8);
  Field____t_buffer____buffer__t2060t(&__t2062t__unsafe_ptr,&__t2062t__unsafe_size,&__t2062t__unsafe_offset,&__t2062t__unsafe_align);
  __t2063t__unsafe_ptr=__t2062t__unsafe_ptr;
  __t2063t__unsafe_size=__t2062t__unsafe_size;
  __t2063t__unsafe_offset=__t2062t__unsafe_offset;
  __t2063t__unsafe_align=__t2062t__unsafe_align;
  __t2064t=1;
  __t_errcode=alloc__t690t(&__t2063t__unsafe_ptr,&__t2063t__unsafe_size,&__t2063t__unsafe_offset,&__t2063t__unsafe_align,__t2064t,&__t2065t__unsafe_ptr,&__t2065t__unsafe_size,&__t2065t__unsafe_offset,&__t2065t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t2065t__unsafe_ptr;
  p__unsafe_size=__t2065t__unsafe_size;
  p__unsafe_offset=__t2065t__unsafe_offset;
  p__unsafe_align=__t2065t__unsafe_align;
  __t2067t=0;
  __t_errcode=mutget__t791t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t2067t,&__t2068t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2069t=1.0;
  __t2070t=2.0;
  __t2071t=3.0;
  __t2072t=4.0;
  if(!__t2068t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2068t__,&__t2069t,8);
  memcpy(__t2068t__+8,&__t2070t,8);
  memcpy(__t2068t__+16,&__t2071t,8);
  memcpy(__t2068t__+24,&__t2072t,8);
  __t2073t=0;
  __t_errcode=get__t798t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t2073t,&__t2074t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2013t(__t2074t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2076t=1.0;
  float____buffer__t2079t(&__t2081t__unsafe_ptr,&__t2081t__unsafe_size,&__t2081t__unsafe_offset,&__t2081t__unsafe_align);
  __t2082t=1;
  __t_errcode=alloc__t690t(&__t2081t__unsafe_ptr,&__t2081t__unsafe_size,&__t2081t__unsafe_offset,&__t2081t__unsafe_align,__t2082t,&__t2083t__unsafe_ptr,&__t2083t__unsafe_size,&__t2083t__unsafe_offset,&__t2083t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2081t__unsafe_ptr,&__t2076t,8);
  __t_errcode=mutlast__t781t(&__t2081t__unsafe_ptr,&__t2081t__unsafe_size,&__t2081t__unsafe_offset,&__t2081t__unsafe_align,&__t2085t__);
  if(__t_errcode){
  goto __t_failure;
  }
  n=__t2085t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2086t____0,n,8);
  print__t385t(__t2086t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2083t__unsafe_ptr,&__t2084t____t692t__);
  if(__t2084t____t692t__){
  free__t661t(&__t2083t__unsafe_ptr);
  }
  exists__t591t(__t2065t__unsafe_ptr,&__t2066t____t692t__);
  if(__t2066t____t692t__){
  free__t661t(&__t2065t__unsafe_ptr);
  }
  exists__t591t(__t2045t__unsafe_ptr,&__t2046t____t692t__);
  if(__t2046t____t692t__){
  free__t661t(&__t2045t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2039t();return 0;}