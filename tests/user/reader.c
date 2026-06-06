#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2092t="this is its square";
const char* const __t2086t="Please give a number:";
const char* const __t1672t="\n\r";
const char* const __t2081t=" ";
const char* const __t1640t="-";
const char* const __t1734t=".";
const char* const __t2083t="!\n";
const char* const __t382t="\n";
const char* const __t2080t="hello";
const char* const __t1643t="+";
const char* const __t1637t="\t ";
const char* const __t2090t="invalid number";
const char* const __t2076t="what's your name";
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

static inline __attribute__((always_inline)) void new__t819t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1764t(char** __t2096t, uint64_t* __t2097t, uint16_t* __t2098t, uint16_t* __t2099t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2096t=unsafe_ptr;
  *__t2097t=unsafe_size;
  *__t2098t=unsafe_offset;
  *__t2099t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2100t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2100t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2101t) {
  char* allocated=*__t2101t;
  if(allocated){
  free(allocated);
  }
  *__t2101t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2102t) {
  int value=0;
  *__t2102t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2103t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2103t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2104t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2104t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2105t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2105t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2106t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2106t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2107t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2107t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2108t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2108t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2109t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2109t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2110t) {
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
  *__t2110t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2111t, uint64_t* __t2112t, uint16_t* __t2113t, uint16_t* __t2114t, uint64_t size, char** __t2115t, uint64_t* __t2116t, uint16_t* __t2117t, uint16_t* __t2118t) {
  char* buffer__unsafe_ptr=*__t2111t;
  uint64_t buffer__unsafe_size=*__t2112t;
  uint16_t buffer__unsafe_offset=*__t2113t;
  uint16_t buffer__unsafe_align=*__t2114t;
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
  *__t2111t=buffer__unsafe_ptr;
  *__t2112t=buffer__unsafe_size;
  *__t2113t=buffer__unsafe_offset;
  *__t2114t=buffer__unsafe_align;
  *__t2115t=buffer__unsafe_ptr;
  *__t2116t=buffer__unsafe_size;
  *__t2117t=buffer__unsafe_offset;
  *__t2118t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t823t(char** __t2119t, uint64_t* __t2120t, uint16_t* __t2121t, uint16_t* __t2122t, uint64_t _pos, char** __t2123t, uint64_t* __t2124t, uint16_t* __t2125t, uint16_t* __t2126t, uint64_t* __t2127t) {
  char* buf__unsafe_ptr=*__t2119t;
  uint64_t buf__unsafe_size=*__t2120t;
  uint16_t buf__unsafe_offset=*__t2121t;
  uint16_t buf__unsafe_align=*__t2122t;
  uint64_t __t824t=0;
  uint64_t pos=0;
  __t824t=_pos;
  pos=__t824t;
  goto __t_return;
  __t_return:
  *__t2119t=buf__unsafe_ptr;
  *__t2120t=buf__unsafe_size;
  *__t2121t=buf__unsafe_offset;
  *__t2122t=buf__unsafe_align;
  *__t2123t=buf__unsafe_ptr;
  *__t2124t=buf__unsafe_size;
  *__t2125t=buf__unsafe_offset;
  *__t2126t=buf__unsafe_align;
  *__t2127t=pos;
}

static inline __attribute__((always_inline)) void arena__t826t(char** __t2128t, uint64_t* __t2129t, uint16_t* __t2130t, uint16_t* __t2131t, char** __t2132t, uint64_t* __t2133t, uint16_t* __t2134t, uint16_t* __t2135t, uint64_t* __t2136t) {
  char* buf__unsafe_ptr=*__t2128t;
  uint64_t buf__unsafe_size=*__t2129t;
  uint16_t buf__unsafe_offset=*__t2130t;
  uint16_t buf__unsafe_align=*__t2131t;
  uint64_t __t827t=0;
  char* __t828t__buf__unsafe_ptr=0;
  uint64_t __t828t__buf__unsafe_size=0;
  uint16_t __t828t__buf__unsafe_offset=0;
  uint16_t __t828t__buf__unsafe_align=0;
  uint64_t __t828t__pos=0;
  __t827t=0;
  arena__t823t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t827t,&__t828t__buf__unsafe_ptr,&__t828t__buf__unsafe_size,&__t828t__buf__unsafe_offset,&__t828t__buf__unsafe_align,&__t828t__pos);
  goto __t_return;
  __t_return:
  *__t2128t=buf__unsafe_ptr;
  *__t2129t=buf__unsafe_size;
  *__t2130t=buf__unsafe_offset;
  *__t2131t=buf__unsafe_align;
  *__t2132t=__t828t__buf__unsafe_ptr;
  *__t2133t=__t828t__buf__unsafe_size;
  *__t2134t=__t828t__buf__unsafe_offset;
  *__t2135t=__t828t__buf__unsafe_align;
  *__t2136t=__t828t__pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2137t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2137t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t2138t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2138t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2139t) {
  *__t2139t=to;
}

static inline __attribute__((always_inline)) int realloc__t657t(char* allocated, uint64_t bytes, char** __t2140t) {
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
  *__t2140t=__t660t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2141t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2141t=z;
}

static inline __attribute__((always_inline)) int resize__t772t(char** __t2142t, uint64_t* __t2143t, uint16_t* __t2144t, uint16_t* __t2145t, uint64_t size, char** __t2146t, uint64_t* __t2147t, uint16_t* __t2148t, uint16_t* __t2149t) {
  char* buffer__unsafe_ptr=*__t2142t;
  uint64_t buffer__unsafe_size=*__t2143t;
  uint16_t buffer__unsafe_offset=*__t2144t;
  uint16_t buffer__unsafe_align=*__t2145t;
  int __t773t=0;
  char __t774t__=0;
  uint64_t __t775t=0;
  char __t776t__=0;
  uint64_t __t777t__=0;
  uint64_t __t778t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t779t__=0;
  uint64_t __t780t__=0;
  uint64_t bytes=0;
  char* __t781t__=0;
  char __t782t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t774t__);
  if(__t774t__){
  goto __t_return;
  }
  __t775t=0;
  eq__t120t(buffer__unsafe_size,__t775t,&__t776t__);
  if(__t776t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t777t__);
  mul__t199t(buffer__unsafe_size,__t777t__,&__t778t__);
  prev_bytes=__t778t__;
  buffer__unsafe_size=size;
  nat__t665t(buffer__unsafe_align,&__t779t__);
  mul__t199t(__t779t__,size,&__t780t__);
  bytes=__t780t__;
  __t_errcode=realloc__t657t(buffer__unsafe_ptr,bytes,&__t781t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t781t__;
  lt__t252t(prev_bytes,bytes,&__t782t__);
  if(__t782t__){
  zero__t662t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2142t=buffer__unsafe_ptr;
  *__t2143t=buffer__unsafe_size;
  *__t2144t=buffer__unsafe_offset;
  *__t2145t=buffer__unsafe_align;
  *__t2146t=buffer__unsafe_ptr;
  *__t2147t=buffer__unsafe_size;
  *__t2148t=buffer__unsafe_offset;
  *__t2149t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2150t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2150t=__t664t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2151t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2151t=z;
}

static inline __attribute__((always_inline)) int resize__t763t(char** __t2152t, uint64_t* __t2153t, uint16_t* __t2154t, uint16_t* __t2155t, uint64_t size, char** __t2156t, uint64_t* __t2157t, uint16_t* __t2158t, uint16_t* __t2159t) {
  char* buffer__unsafe_ptr=*__t2152t;
  uint64_t buffer__unsafe_size=*__t2153t;
  uint16_t buffer__unsafe_offset=*__t2154t;
  uint16_t buffer__unsafe_align=*__t2155t;
  int __t764t=0;
  uint64_t __t765t__=0;
  uint64_t __t766t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t767t__=0;
  uint64_t __t768t__=0;
  uint64_t bytes=0;
  char* __t769t__=0;
  char __t770t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(buffer__unsafe_align,&__t765t__);
  mul__t199t(buffer__unsafe_size,__t765t__,&__t766t__);
  prev_bytes=__t766t__;
  buffer__unsafe_size=size;
  nat__t665t(buffer__unsafe_align,&__t767t__);
  mul__t199t(__t767t__,size,&__t768t__);
  bytes=__t768t__;
  __t_errcode=realloc__t657t(buffer__unsafe_ptr,bytes,&__t769t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t769t__;
  lt__t252t(prev_bytes,bytes,&__t770t__);
  if(__t770t__){
  zero__t662t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2152t=buffer__unsafe_ptr;
  *__t2153t=buffer__unsafe_size;
  *__t2154t=buffer__unsafe_offset;
  *__t2155t=buffer__unsafe_align;
  *__t2156t=buffer__unsafe_ptr;
  *__t2157t=buffer__unsafe_size;
  *__t2158t=buffer__unsafe_offset;
  *__t2159t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t818t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2160t) {
  goto __t_return;
  __t_return:
  *__t2160t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2161t) {
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
  *__t2161t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t811t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2162t) {
  char __t812t__=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t __t815t__=0;
  uint64_t __t816t__=0;
  char* __t817t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t812t__);
  if(__t812t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t813t__);
  mul__t199t(i,__t813t__,&__t814t__);
  nat__t665t(buffer__unsafe_offset,&__t815t__);
  add__t175t(__t814t__,__t815t__,&__t816t__);
  add__t663t(buffer__unsafe_ptr,__t816t__,&__t817t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2162t=__t817t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t954t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2163t, uint64_t* __t2164t, uint64_t* __t2165t, char* __t2166t) {
  goto __t_return;
  __t_return:
  *__t2163t=unsafe_ptr;
  *__t2164t=dat__pos;
  *__t2165t=dat__length;
  *__t2166t=dat__first;
}

static inline __attribute__((always_inline)) int str__t958t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2167t, uint64_t* __t2168t, uint64_t* __t2169t, char* __t2170t) {
  char* unsafe_ptr=0;
  uint64_t __t959t__=0;
  uint64_t __t960t=0;
  char __t961t__=0;
  uint64_t __t962t__=0;
  uint64_t __t963t=0;
  char __t964t__=0;
  char* __t965t__unsafe_ptr=0;
  uint64_t __t965t__dat__pos=0;
  uint64_t __t965t__dat__length=0;
  char __t965t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t959t__);
  __t960t=1;
  neq__t144t(__t959t__,__t960t,&__t961t__);
  if(__t961t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t962t__);
  __t963t=0;
  neq__t144t(__t962t__,__t963t,&__t964t__);
  if(__t964t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t954t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t965t__unsafe_ptr,&__t965t__dat__pos,&__t965t__dat__length,&__t965t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2167t=__t965t__unsafe_ptr;
  *__t2168t=__t965t__dat__pos;
  *__t2169t=__t965t__dat__length;
  *__t2170t=__t965t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t996t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2171t, uint64_t* __t2172t, uint64_t* __t2173t, char* __t2174t) {
  uint64_t __t997t__=0;
  uint64_t length=0;
  uint64_t __t998t=0;
  char __t999t__=0;
  char* __t1000t__=0;
  char __t1001t__value=0;
  char first=0;
  char* __t1002t__unsafe_ptr=0;
  uint64_t __t1002t__dat__pos=0;
  uint64_t __t1002t__dat__length=0;
  char __t1002t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t997t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t997t__;
  __t998t=0;
  neq__t144t(length,__t998t,&__t999t__);
  if(__t999t__){
  __t_errcode=get__t811t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1000t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1000t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1001t__value,__t1000t__,1);
  first=__t1001t__value;
  }
  __t_errcode=str__t958t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1002t__unsafe_ptr,&__t1002t__dat__pos,&__t1002t__dat__length,&__t1002t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2171t=__t1002t__unsafe_ptr;
  *__t2172t=__t1002t__dat__pos;
  *__t2173t=__t1002t__dat__length;
  *__t2174t=__t1002t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1761t(char** __t2175t, uint64_t* __t2176t, uint64_t* __t2177t, char* __t2178t) {
  int __t1762t=0;
  int __t1763t=0;
  char* __t1766t__unsafe_ptr=0;
  uint64_t __t1766t__unsafe_size=0;
  uint16_t __t1766t__unsafe_offset=0;
  uint16_t __t1766t__unsafe_align=0;
  uint64_t __t1767t=0;
  char* __t1768t__unsafe_ptr=0;
  uint64_t __t1768t__unsafe_size=0;
  uint16_t __t1768t__unsafe_offset=0;
  uint16_t __t1768t__unsafe_align=0;
  char __t1769t____t692t__=0;
  char* __t1770t__buf__unsafe_ptr=0;
  uint64_t __t1770t__buf__unsafe_size=0;
  uint16_t __t1770t__buf__unsafe_offset=0;
  uint16_t __t1770t__buf__unsafe_align=0;
  uint64_t __t1770t__pos=0;
  char* ch__buf__unsafe_ptr=0;
  uint64_t ch__buf__unsafe_size=0;
  uint16_t ch__buf__unsafe_offset=0;
  uint16_t ch__buf__unsafe_align=0;
  uint64_t ch__pos=0;
  uint64_t __t1771t__=0;
  uint64_t __t1772t=0;
  char __t1773t__=0;
  uint64_t __t1774t__=0;
  uint64_t __t1775t=0;
  char __t1776t__=0;
  uint64_t start=0;
  char __t1777t=0;
  int64_t _c=0;
  char __t1778t__=0;
  int __t1779t=0;
  uint64_t __t1780t=0;
  uint64_t __t1781t__=0;
  uint64_t __t1782t=0;
  uint64_t __t1783t__=0;
  char* __t1784t__unsafe_ptr=0;
  uint64_t __t1784t__unsafe_size=0;
  uint16_t __t1784t__unsafe_offset=0;
  uint16_t __t1784t__unsafe_align=0;
  char* __t1785t__=0;
  char* ptr_pos=0;
  uint64_t __t1786t=0;
  uint64_t __t1787t__=0;
  int __t1788t=0;
  int __t1789t=0;
  uint64_t __t1790t=0;
  char __t1791t__=0;
  uint64_t __t1792t=0;
  uint64_t __t1793t__=0;
  char* __t1795t__unsafe_ptr=0;
  uint64_t __t1795t__unsafe_size=0;
  uint16_t __t1795t__unsafe_offset=0;
  uint16_t __t1795t__unsafe_align=0;
  uint64_t __t1796t__=0;
  char* __t1799t__unsafe_ptr=0;
  uint64_t __t1799t__dat__pos=0;
  uint64_t __t1799t__dat__length=0;
  char __t1799t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1764t(&__t1766t__unsafe_ptr,&__t1766t__unsafe_size,&__t1766t__unsafe_offset,&__t1766t__unsafe_align);
  __t1767t=8;
  __t_errcode=alloc__t690t(&__t1766t__unsafe_ptr,&__t1766t__unsafe_size,&__t1766t__unsafe_offset,&__t1766t__unsafe_align,__t1767t,&__t1768t__unsafe_ptr,&__t1768t__unsafe_size,&__t1768t__unsafe_offset,&__t1768t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t826t(&__t1768t__unsafe_ptr,&__t1768t__unsafe_size,&__t1768t__unsafe_offset,&__t1768t__unsafe_align,&__t1770t__buf__unsafe_ptr,&__t1770t__buf__unsafe_size,&__t1770t__buf__unsafe_offset,&__t1770t__buf__unsafe_align,&__t1770t__pos);
  ch__pos=__t1770t__pos;
  nat__t665t(__t1768t__unsafe_align,&__t1771t__);
  __t1772t=1;
  neq__t144t(__t1771t__,__t1772t,&__t1773t__);
  if(__t1773t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(__t1768t__unsafe_offset,&__t1774t__);
  __t1775t=0;
  neq__t144t(__t1774t__,__t1775t,&__t1776t__);
  if(__t1776t__){
  __t_errcode=19;
  goto __t_failure;
  }
  start=ch__pos;
  while(1){
  __t1777t=1;
  if(!__t1777t){
  break;
  }
  _c=getchar();
  if(_c=='\n'||_c=='\r'||_c==EOF){
  break;
  }
  ge__t324t(ch__pos,__t1768t__unsafe_size,&__t1778t__);
  if(__t1778t__){
  __t1780t=3;
  mul__t199t(__t1768t__unsafe_size,__t1780t,&__t1781t__);
  __t1782t=2;
  __t_errcode=div__t225t(__t1781t__,__t1782t,&__t1783t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=resize__t772t(&__t1768t__unsafe_ptr,&__t1768t__unsafe_size,&__t1768t__unsafe_offset,&__t1768t__unsafe_align,__t1783t__,&__t1784t__unsafe_ptr,&__t1784t__unsafe_size,&__t1784t__unsafe_offset,&__t1784t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  add__t663t(__t1768t__unsafe_ptr,ch__pos,&__t1785t__);
  ptr_pos=__t1785t__;
  *ptr_pos=_c;
  __t1786t=1;
  add__t175t(ch__pos,__t1786t,&__t1787t__);
  ch__pos=__t1787t__;
  }
  __t1790t=0;
  eq__t120t(ch__pos,__t1790t,&__t1791t__);
  if(__t1791t__){
  __t1792t=1;
  add__t175t(ch__pos,__t1792t,&__t1793t__);
  ch__pos=__t1793t__;
  }
  __t_errcode=resize__t763t(&__t1768t__unsafe_ptr,&__t1768t__unsafe_size,&__t1768t__unsafe_offset,&__t1768t__unsafe_align,ch__pos,&__t1795t__unsafe_ptr,&__t1795t__unsafe_size,&__t1795t__unsafe_offset,&__t1795t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t818t(__t1768t__unsafe_ptr,__t1768t__unsafe_size,__t1768t__unsafe_offset,__t1768t__unsafe_align,&__t1796t__);
  print__t393t(__t1768t__unsafe_size);
  __t_errcode=str__t996t(__t1768t__unsafe_ptr,__t1768t__unsafe_size,__t1768t__unsafe_offset,__t1768t__unsafe_align,start,ch__pos,&__t1799t__unsafe_ptr,&__t1799t__dat__pos,&__t1799t__dat__length,&__t1799t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1799t__unsafe_ptr=__t1768t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t591t(__t1799t__unsafe_ptr,&__t1769t____t692t__);
  if(__t1769t____t692t__){
  free__t661t(&__t1799t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2175t=__t1799t__unsafe_ptr;
  *__t2176t=__t1799t__dat__pos;
  *__t2177t=__t1799t__dat__length;
  *__t2178t=__t1799t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1142t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1143t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int char__t1630t(char* __t2179t) {
  int64_t _c=0;
  char iseof=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  _c=getchar();
  iseof=(_c==EOF);
  if(iseof){
  __t_errcode=23;
  goto __t_failure;
  }
  c=_c;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2179t=c;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t934t(char** __t2180t, uint64_t* __t2181t, uint16_t* __t2182t, uint16_t* __t2183t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2180t=unsafe_ptr;
  *__t2181t=unsafe_size;
  *__t2182t=unsafe_offset;
  *__t2183t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2184t) {
  *__t2184t=to;
}

static inline __attribute__((always_inline)) int str__t990t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2185t, uint64_t* __t2186t, uint64_t* __t2187t, char* __t2188t) {
  uint64_t __t991t=0;
  char __t992t__=0;
  char* __t993t__=0;
  char __t994t__value=0;
  char first=0;
  char* __t995t__unsafe_ptr=0;
  uint64_t __t995t__dat__pos=0;
  uint64_t __t995t__dat__length=0;
  char __t995t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t991t=0;
  neq__t144t(length,__t991t,&__t992t__);
  if(__t992t__){
  __t_errcode=get__t811t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t993t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t993t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t994t__value,__t993t__,1);
  first=__t994t__value;
  }
  __t_errcode=str__t958t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t995t__unsafe_ptr,&__t995t__dat__pos,&__t995t__dat__length,&__t995t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2185t=__t995t__unsafe_ptr;
  *__t2186t=__t995t__dat__pos;
  *__t2187t=__t995t__dat__length;
  *__t2188t=__t995t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1010t(const char* c, char** __t2189t, uint64_t* __t2190t, uint64_t* __t2191t, char* __t2192t) {
  char* __t1011t__unsafe_ptr=0;
  uint64_t __t1011t__unsafe_size=0;
  uint16_t __t1011t__unsafe_offset=0;
  uint16_t __t1011t__unsafe_align=0;
  char* __t1012t__unsafe_ptr=0;
  uint64_t __t1012t__unsafe_size=0;
  uint16_t __t1012t__unsafe_offset=0;
  uint16_t __t1012t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1013t__=0;
  uint64_t length=0;
  uint64_t __t1014t=0;
  uint64_t __t1015t__=0;
  uint64_t __t1016t=0;
  char* __t1018t__unsafe_ptr=0;
  uint64_t __t1018t__dat__pos=0;
  uint64_t __t1018t__dat__length=0;
  char __t1018t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t934t(&__t1011t__unsafe_ptr,&__t1011t__unsafe_size,&__t1011t__unsafe_offset,&__t1011t__unsafe_align);
  __t1012t__unsafe_ptr=__t1011t__unsafe_ptr;
  __t1012t__unsafe_size=__t1011t__unsafe_size;
  __t1012t__unsafe_offset=__t1011t__unsafe_offset;
  __t1012t__unsafe_align=__t1011t__unsafe_align;
  buf__unsafe_ptr=__t1012t__unsafe_ptr;
  buf__unsafe_size=__t1012t__unsafe_size;
  buf__unsafe_offset=__t1012t__unsafe_offset;
  buf__unsafe_align=__t1012t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1013t__);
  buf__unsafe_ptr=__t1013t__;
  if(c){
  length=strlen(c);
  }
  __t1014t=1;
  add__t175t(length,__t1014t,&__t1015t__);
  buf__unsafe_size=__t1015t__;
  __t1016t=0;
  __t_errcode=str__t990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1016t,length,&__t1018t__unsafe_ptr,&__t1018t__dat__pos,&__t1018t__dat__length,&__t1018t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2189t=__t1018t__unsafe_ptr;
  *__t2190t=__t1018t__dat__pos;
  *__t2191t=__t1018t__dat__length;
  *__t2192t=__t1018t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t1022t(char x, char y, char* __t2193t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2193t=z;
}

static inline __attribute__((always_inline)) void len__t1019t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2194t) {
  goto __t_return;
  __t_return:
  *__t2194t=s__dat__length;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t2195t, uint64_t* __t2196t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t2195t=__t613t;
  *__t2196t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t2197t, uint64_t* __t2198t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t2197t=from;
  *__t2198t=to;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t2199t) {
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
  *__t2199t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1146t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2200t) {
  uint64_t __t1147t__=0;
  char* __t1148t__=0;
  add__t175t(s__dat__pos,i,&__t1147t__);
  add__t663t(s__unsafe_ptr,__t1147t__,&__t1148t__);
  goto __t_return;
  __t_return:
  *__t2200t=__t1148t__;
}

int contains__t1267t(const char* _stack, char needle, char* __t2201t) {
  char* __t1268t__unsafe_ptr=0;
  uint64_t __t1268t__dat__pos=0;
  uint64_t __t1268t__dat__length=0;
  char __t1268t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char __t1269t__=0;
  char __t1270t=0;
  uint64_t __t1271t=0;
  uint64_t __t1272t__=0;
  uint64_t __t1273t____t613t=0;
  uint64_t __t1273t__to=0;
  uint64_t __t1274t__from=0;
  uint64_t __t1274t__to=0;
  char __t1275t=0;
  uint64_t __t1276t__=0;
  uint64_t i=0;
  char* __t1277t__=0;
  char __t1278t__value=0;
  char __t1279t__=0;
  char __t1280t=0;
  char __t1281t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1010t(_stack,&__t1268t__unsafe_ptr,&__t1268t__dat__pos,&__t1268t__dat__length,&__t1268t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  stack__unsafe_ptr=__t1268t__unsafe_ptr;
  stack__dat__pos=__t1268t__dat__pos;
  stack__dat__length=__t1268t__dat__length;
  stack__dat__first=__t1268t__dat__first;
  eq__t1022t(stack__dat__first,needle,&__t1269t__);
  if(__t1269t__){
  __t1270t=1;
  goto __t_return;
  }
  len__t1019t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1272t__);
  of__t612t(__t1272t__,&__t1273t____t613t,&__t1273t__to);
  range__t629t(__t1273t____t613t,__t1273t__to,&__t1274t__from,&__t1274t__to);
  __t1271t=0-1;
  while(1){
  __t1271t=__t1271t+1;
  __t_complain=get__t636t(__t1274t__from,__t1274t__to,__t1271t,&__t1276t__);
  __t1275t=__t_complain;
  i=__t1276t__;
  __t1275t=__t1275t==0;
  if(!__t1275t){
  break;
  }
  get__t1146t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,&__t1277t__);
  if(!__t1277t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1278t__value,__t1277t__,1);
  eq__t1022t(__t1278t__value,needle,&__t1279t__);
  if(__t1279t__){
  __t1280t=1;
  __t1270t=__t1280t;
  goto __t_return;
  }
  }
  __t1281t=0;
  __t1270t=__t1281t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2201t=__t1270t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1021t(const char* s, char* __t2202t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t2202t=c;
}

static inline __attribute__((always_inline)) void is_number__t1631t(char c, char* __t2203t) {
  char ge=0;
  char le=0;
  char __t1632t=0;
  ge=(c>='0');
  le=(c<='9');
  if(ge){
  __t1632t=le;
  }
  goto __t_return;
  __t_return:
  *__t2203t=__t1632t;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2204t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2204t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t2205t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2205t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2206t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2206t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t2207t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2207t=z;
}

static inline __attribute__((always_inline)) int float__t1706t(double* __t2208t) {
  char __t1707t=0;
  char __t1708t__=0;
  char __t1709t=0;
  char c=0;
  char __t1710t__=0;
  char __t1711t__=0;
  char __t1712t__=0;
  char __t1713t__=0;
  char neg=0;
  char __t1714t__=0;
  char __t1715t__=0;
  char __t1716t=0;
  char __t1717t__=0;
  char __t1718t__=0;
  double __t1719t=0;
  double __t1720t=0;
  double number=0;
  uint64_t __t1721t=0;
  uint64_t __t1722t=0;
  uint64_t digits=0;
  char __t1723t=0;
  char __t1724t=0;
  char eof=0;
  char __t1725t__=0;
  double digit=0;
  double __t1726t=0;
  double __t1727t__=0;
  double __t1728t__=0;
  uint64_t __t1729t=0;
  uint64_t __t1730t__=0;
  char __t1731t=0;
  char __t1732t__=0;
  char __t1733t__=0;
  char __t1735t__=0;
  char __t1736t__=0;
  char __t1737t__=0;
  char __t1738t=0;
  char __t1739t__=0;
  double __t1740t=0;
  double __t1741t=0;
  double base=0;
  char __t1742t__=0;
  double decimal_digit=0;
  double __t1743t__=0;
  double __t1744t__=0;
  double __t1745t=0;
  double __t1746t__=0;
  uint64_t __t1747t=0;
  uint64_t __t1748t__=0;
  char __t1749t=0;
  char __t1750t__=0;
  char __t1751t__=0;
  double __t1752t=0;
  double __t1753t__=0;
  uint64_t __t1754t=0;
  char __t1755t__=0;
  char __t1756t__=0;
  char __t1757t__=0;
  char __t1758t=0;
  char __t1759t__=0;
  char __t1760t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  while(1){
  __t_complain=char__t1630t(&__t1708t__);
  __t1707t=__t_complain;
  __t1709t=__t1708t__;
  c=__t1709t;
  __t1707t=__t1707t==0;
  if(!__t1707t){
  break;
  }
  __t_errcode=contains__t1267t(__t1637t,c,&__t1710t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t28t(__t1710t__,&__t1711t__);
  if(__t1711t__){
  break;
  }
  }
  char__t1021t(__t1640t,&__t1712t__);
  eq__t1022t(c,__t1712t__,&__t1713t__);
  neg=__t1713t__;
  if(!neg){
  char__t1021t(__t1643t,&__t1714t__);
  eq__t1022t(c,__t1714t__,&__t1715t__);
  __t1716t=__t1715t__;
  }
  else{
  __t1716t=0;
  not__t28t(__t1716t,&__t1717t__);
  __t1716t=__t1717t__;
  }
  if(__t1716t){
  __t_errcode=char__t1630t(&__t1718t__);
  if(__t_errcode){
  goto __t_failure;
  }
  c=__t1718t__;
  }
  __t1719t=0.0;
  __t1720t=__t1719t;
  number=__t1720t;
  __t1721t=0;
  __t1722t=__t1721t;
  digits=__t1722t;
  __t1723t=0;
  __t1724t=__t1723t;
  eof=__t1724t;
  while(1){
  is_number__t1631t(c,&__t1725t__);
  if(!__t1725t__){
  break;
  }
  digit=(c-'0');
  __t1726t=10.0;
  mul__t177t(number,__t1726t,&__t1727t__);
  add__t153t(__t1727t__,digit,&__t1728t__);
  number=__t1728t__;
  __t1729t=1;
  add__t175t(digits,__t1729t,&__t1730t__);
  digits=__t1730t__;
  __t_complain=char__t1630t(&__t1732t__);
  __t1731t=__t_complain;
  c=__t1732t__;
  __t1731t=__t1731t==0;
  not__t28t(__t1731t,&__t1733t__);
  eof=__t1733t__;
  if(eof){
  break;
  }
  }
  char__t1021t(__t1734t,&__t1735t__);
  eq__t1022t(c,__t1735t__,&__t1736t__);
  if(__t1736t__){
  not__t28t(eof,&__t1737t__);
  __t1738t=__t1737t__;
  }
  if(__t1738t){
  __t_errcode=char__t1630t(&__t1739t__);
  if(__t_errcode){
  goto __t_failure;
  }
  c=__t1739t__;
  __t1740t=0.1;
  __t1741t=__t1740t;
  base=__t1741t;
  while(1){
  is_number__t1631t(c,&__t1742t__);
  if(!__t1742t__){
  break;
  }
  decimal_digit=(c-'0');
  mul__t177t(decimal_digit,base,&__t1743t__);
  add__t153t(number,__t1743t__,&__t1744t__);
  number=__t1744t__;
  __t1745t=0.1;
  mul__t177t(base,__t1745t,&__t1746t__);
  base=__t1746t__;
  __t1747t=1;
  add__t175t(digits,__t1747t,&__t1748t__);
  digits=__t1748t__;
  __t_complain=char__t1630t(&__t1750t__);
  __t1749t=__t_complain;
  c=__t1750t__;
  __t1749t=__t1749t==0;
  not__t28t(__t1749t,&__t1751t__);
  eof=__t1751t__;
  if(eof){
  break;
  }
  }
  }
  if(neg){
  __t1752t=0.0;
  sub__t326t(__t1752t,number,&__t1753t__);
  number=__t1753t__;
  }
  __t1754t=0;
  eq__t120t(digits,__t1754t,&__t1755t__);
  if(__t1755t__){
  while(1){
  not__t28t(eof,&__t1756t__);
  if(!__t1756t__){
  break;
  }
  __t_errcode=contains__t1267t(__t1672t,c,&__t1757t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(__t1757t__){
  break;
  }
  __t_complain=char__t1630t(&__t1759t__);
  __t1758t=__t_complain;
  c=__t1759t__;
  __t1758t=__t1758t==0;
  not__t28t(__t1758t,&__t1760t__);
  eof=__t1760t__;
  }
  __t_errcode=24;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2208t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2073t() {
  char* __t2078t__unsafe_ptr=0;
  uint64_t __t2078t__dat__pos=0;
  uint64_t __t2078t__dat__length=0;
  char __t2078t__dat__first=0;
  char __t2079t____t1769t____t692t__=0;
  char* name__unsafe_ptr=0;
  uint64_t name__dat__pos=0;
  uint64_t name__dat__length=0;
  char name__dat__first=0;
  char __t2085t=0;
  double __t2088t__=0;
  double x=0;
  char __t2089t__=0;
  double __t2094t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t819t();
  print__t380t(__t2076t);
  __t_errcode=str__t1761t(&__t2078t__unsafe_ptr,&__t2078t__dat__pos,&__t2078t__dat__length,&__t2078t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  name__unsafe_ptr=__t2078t__unsafe_ptr;
  name__dat__pos=__t2078t__dat__pos;
  name__dat__length=__t2078t__dat__length;
  name__dat__first=__t2078t__dat__first;
  print__t378t(__t2080t,__t2081t);
  print__t1142t(name__unsafe_ptr,name__dat__pos,name__dat__length,name__dat__first,__t2083t);
  while(1){
  print__t380t(__t2086t);
  __t_complain=float__t1706t(&__t2088t__);
  __t2085t=__t_complain;
  x=__t2088t__;
  __t2085t=__t2085t==0;
  not__t28t(__t2085t,&__t2089t__);
  if(!__t2089t__){
  break;
  }
  print__t380t(__t2090t);
  }
  print__t380t(__t2092t);
  mul__t177t(x,x,&__t2094t__);
  print__t385t(__t2094t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2078t__unsafe_ptr,&__t2079t____t1769t____t692t__);
  if(__t2079t____t1769t____t692t__){
  free__t661t(&__t2078t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2073t();return 0;}