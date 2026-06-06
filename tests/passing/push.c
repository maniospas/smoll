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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2013t(char** __t2039t, uint64_t* __t2040t, uint16_t* __t2041t, uint16_t* __t2042t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2039t=unsafe_ptr;
  *__t2040t=unsafe_size;
  *__t2041t=unsafe_offset;
  *__t2042t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2043t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2044t) {
  char* allocated=*__t2044t;
  if(allocated){
  free(allocated);
  }
  *__t2044t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2045t) {
  int value=0;
  *__t2045t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2046t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2046t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2047t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2047t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2048t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2048t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2049t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2049t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2050t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2050t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2051t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2051t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2052t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2052t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2053t) {
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
  *__t2053t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2054t, uint64_t* __t2055t, uint16_t* __t2056t, uint16_t* __t2057t, uint64_t size, char** __t2058t, uint64_t* __t2059t, uint16_t* __t2060t, uint16_t* __t2061t) {
  char* buffer__unsafe_ptr=*__t2054t;
  uint64_t buffer__unsafe_size=*__t2055t;
  uint16_t buffer__unsafe_offset=*__t2056t;
  uint16_t buffer__unsafe_align=*__t2057t;
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
  *__t2054t=buffer__unsafe_ptr;
  *__t2055t=buffer__unsafe_size;
  *__t2056t=buffer__unsafe_offset;
  *__t2057t=buffer__unsafe_align;
  *__t2058t=buffer__unsafe_ptr;
  *__t2059t=buffer__unsafe_size;
  *__t2060t=buffer__unsafe_offset;
  *__t2061t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2062t) {
  goto __t_return;
  __t_return:
  *__t2062t=buffer__unsafe_size;
}

int list__t828t(char** __t2063t, uint64_t* __t2064t, uint16_t* __t2065t, uint16_t* __t2066t, char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t, uint64_t* __t2071t) {
  char* _buf__unsafe_ptr=*__t2063t;
  uint64_t _buf__unsafe_size=*__t2064t;
  uint16_t _buf__unsafe_offset=*__t2065t;
  uint16_t _buf__unsafe_align=*__t2066t;
  uint64_t __t829t=0;
  char* __t830t__unsafe_ptr=0;
  uint64_t __t830t__unsafe_size=0;
  uint16_t __t830t__unsafe_offset=0;
  uint16_t __t830t__unsafe_align=0;
  char __t831t____t692t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t832t__=0;
  uint64_t __t833t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t829t=1;
  __t_errcode=alloc__t690t(&_buf__unsafe_ptr,&_buf__unsafe_size,&_buf__unsafe_offset,&_buf__unsafe_align,__t829t,&__t830t__unsafe_ptr,&__t830t__unsafe_size,&__t830t__unsafe_offset,&__t830t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t830t__unsafe_ptr;
  buf__unsafe_size=__t830t__unsafe_size;
  buf__unsafe_offset=__t830t__unsafe_offset;
  buf__unsafe_align=__t830t__unsafe_align;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t832t__);
  __t833t=__t832t__;
  length=__t833t;
  goto __t_return;
  
  __t_failure:exists__t591t(buf__unsafe_ptr,&__t831t____t692t__);
  if(__t831t____t692t__){
  free__t661t(&buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2063t=_buf__unsafe_ptr;
  *__t2064t=_buf__unsafe_size;
  *__t2065t=_buf__unsafe_offset;
  *__t2066t=_buf__unsafe_align;
  *__t2067t=buf__unsafe_ptr;
  *__t2068t=buf__unsafe_size;
  *__t2069t=buf__unsafe_offset;
  *__t2070t=buf__unsafe_align;
  *__t2071t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2072t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2072t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2073t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2073t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t2074t) {
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
  *__t2074t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2075t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2075t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2076t) {
  *__t2076t=to;
}

static inline __attribute__((always_inline)) int realloc__t657t(char* allocated, uint64_t bytes, char** __t2077t) {
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
  *__t2077t=__t660t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2078t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2078t=z;
}

static inline __attribute__((always_inline)) int resize__t760t(char** __t2079t, uint64_t* __t2080t, uint16_t* __t2081t, uint16_t* __t2082t, uint64_t size, char** __t2083t, uint64_t* __t2084t, uint16_t* __t2085t, uint16_t* __t2086t) {
  char* buffer__unsafe_ptr=*__t2079t;
  uint64_t buffer__unsafe_size=*__t2080t;
  uint16_t buffer__unsafe_offset=*__t2081t;
  uint16_t buffer__unsafe_align=*__t2082t;
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
  *__t2079t=buffer__unsafe_ptr;
  *__t2080t=buffer__unsafe_size;
  *__t2081t=buffer__unsafe_offset;
  *__t2082t=buffer__unsafe_align;
  *__t2083t=buffer__unsafe_ptr;
  *__t2084t=buffer__unsafe_size;
  *__t2085t=buffer__unsafe_offset;
  *__t2086t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2087t, uint64_t* __t2088t, uint16_t* __t2089t, uint16_t* __t2090t, uint64_t pos, char** __t2091t, uint64_t* __t2092t, uint16_t* __t2093t, uint16_t* __t2094t, uint64_t* __t2095t) {
  char* buf__unsafe_ptr=*__t2087t;
  uint64_t buf__unsafe_size=*__t2088t;
  uint16_t buf__unsafe_offset=*__t2089t;
  uint16_t buf__unsafe_align=*__t2090t;
  goto __t_return;
  __t_return:
  *__t2087t=buf__unsafe_ptr;
  *__t2088t=buf__unsafe_size;
  *__t2089t=buf__unsafe_offset;
  *__t2090t=buf__unsafe_align;
  *__t2091t=buf__unsafe_ptr;
  *__t2092t=buf__unsafe_size;
  *__t2093t=buf__unsafe_offset;
  *__t2094t=buf__unsafe_align;
  *__t2095t=pos;
}

int alloc__t903t(char** __t2096t, uint64_t* __t2097t, uint16_t* __t2098t, uint16_t* __t2099t, uint64_t* __t2100t, char** __t2101t, uint64_t* __t2102t, uint16_t* __t2103t, uint16_t* __t2104t, uint64_t* __t2105t) {
  char* allocator__buf__unsafe_ptr=*__t2096t;
  uint64_t allocator__buf__unsafe_size=*__t2097t;
  uint16_t allocator__buf__unsafe_offset=*__t2098t;
  uint16_t allocator__buf__unsafe_align=*__t2099t;
  uint64_t allocator__length=*__t2100t;
  int __t904t=0;
  uint64_t __t905t=0;
  uint64_t length=0;
  uint64_t __t906t=0;
  uint64_t __t907t__=0;
  uint64_t pos=0;
  uint64_t __t908t__=0;
  uint64_t prev_length=0;
  uint64_t __t909t__=0;
  char __t910t__=0;
  uint64_t __t911t=0;
  uint64_t __t912t__=0;
  uint64_t __t913t=0;
  uint64_t __t914t__=0;
  uint64_t __t915t__=0;
  char* __t916t__unsafe_ptr=0;
  uint64_t __t916t__unsafe_size=0;
  uint16_t __t916t__unsafe_offset=0;
  uint16_t __t916t__unsafe_align=0;
  char* __t917t__buf__unsafe_ptr=0;
  uint64_t __t917t__buf__unsafe_size=0;
  uint16_t __t917t__buf__unsafe_offset=0;
  uint16_t __t917t__buf__unsafe_align=0;
  uint64_t __t917t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t905t=1;
  length=__t905t;
  __t906t=0;
  add__t175t(allocator__length,__t906t,&__t907t__);
  pos=__t907t__;
  add__t175t(allocator__length,length,&__t908t__);
  prev_length=__t908t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t909t__);
  gt__t276t(prev_length,__t909t__,&__t910t__);
  if(__t910t__){
  __t911t=2;
  __t_errcode=div__t225t(prev_length,__t911t,&__t912t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t913t=1;
  add__t175t(__t912t__,__t913t,&__t914t__);
  add__t175t(prev_length,__t914t__,&__t915t__);
  __t_errcode=resize__t760t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t915t__,&__t916t__unsafe_ptr,&__t916t__unsafe_size,&__t916t__unsafe_offset,&__t916t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t916t__unsafe_ptr;
  allocator__buf__unsafe_size=__t916t__unsafe_size;
  allocator__buf__unsafe_offset=__t916t__unsafe_offset;
  allocator__buf__unsafe_align=__t916t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t917t__buf__unsafe_ptr,&__t917t__buf__unsafe_size,&__t917t__buf__unsafe_offset,&__t917t__buf__unsafe_align,&__t917t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2096t=allocator__buf__unsafe_ptr;
  *__t2097t=allocator__buf__unsafe_size;
  *__t2098t=allocator__buf__unsafe_offset;
  *__t2099t=allocator__buf__unsafe_align;
  *__t2100t=allocator__length;
  *__t2101t=__t917t__buf__unsafe_ptr;
  *__t2102t=__t917t__buf__unsafe_size;
  *__t2103t=__t917t__buf__unsafe_offset;
  *__t2104t=__t917t__buf__unsafe_align;
  *__t2105t=__t917t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2106t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2106t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t791t(char** __t2107t, uint64_t* __t2108t, uint16_t* __t2109t, uint16_t* __t2110t, uint64_t i, char** __t2111t) {
  char* buffer__unsafe_ptr=*__t2107t;
  uint64_t buffer__unsafe_size=*__t2108t;
  uint16_t buffer__unsafe_offset=*__t2109t;
  uint16_t buffer__unsafe_align=*__t2110t;
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
  *__t2107t=buffer__unsafe_ptr;
  *__t2108t=buffer__unsafe_size;
  *__t2109t=buffer__unsafe_offset;
  *__t2110t=buffer__unsafe_align;
  *__t2111t=__t797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t918t(char** __t2112t, uint64_t* __t2113t, uint16_t* __t2114t, uint16_t* __t2115t, uint64_t surface__pos, char** __t2116t) {
  char* surface__buf__unsafe_ptr=*__t2112t;
  uint64_t surface__buf__unsafe_size=*__t2113t;
  uint16_t surface__buf__unsafe_offset=*__t2114t;
  uint16_t surface__buf__unsafe_align=*__t2115t;
  char* __t919t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t791t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t919t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2112t=surface__buf__unsafe_ptr;
  *__t2113t=surface__buf__unsafe_size;
  *__t2114t=surface__buf__unsafe_offset;
  *__t2115t=surface__buf__unsafe_align;
  *__t2116t=__t919t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t841t(char** __t2117t, uint64_t* __t2118t, uint16_t* __t2119t, uint16_t* __t2120t, uint64_t* __t2121t, uint64_t pos, char** __t2122t) {
  char* self__buf__unsafe_ptr=*__t2117t;
  uint64_t self__buf__unsafe_size=*__t2118t;
  uint16_t self__buf__unsafe_offset=*__t2119t;
  uint16_t self__buf__unsafe_align=*__t2120t;
  uint64_t self__length=*__t2121t;
  char* __t842t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t791t(&self__buf__unsafe_ptr,&self__buf__unsafe_size,&self__buf__unsafe_offset,&self__buf__unsafe_align,pos,&__t842t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2117t=self__buf__unsafe_ptr;
  *__t2118t=self__buf__unsafe_size;
  *__t2119t=self__buf__unsafe_offset;
  *__t2120t=self__buf__unsafe_align;
  *__t2121t=self__length;
  *__t2122t=__t842t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2123t) {
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
  *__t2123t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t837t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__length, uint64_t pos, char** __t2124t) {
  char* __t838t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t798t(self__buf__unsafe_ptr,self__buf__unsafe_size,self__buf__unsafe_offset,self__buf__unsafe_align,pos,&__t838t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2124t=__t838t__;
  
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
  char* __t2017t__buf__unsafe_ptr=0;
  uint64_t __t2017t__buf__unsafe_size=0;
  uint16_t __t2017t__buf__unsafe_offset=0;
  uint16_t __t2017t__buf__unsafe_align=0;
  uint64_t __t2017t__length=0;
  char __t2018t____t831t____t692t__=0;
  char* li__buf__unsafe_ptr=0;
  uint64_t li__buf__unsafe_size=0;
  uint16_t li__buf__unsafe_offset=0;
  uint16_t li__buf__unsafe_align=0;
  uint64_t li__length=0;
  char* __t2019t__buf__unsafe_ptr=0;
  uint64_t __t2019t__buf__unsafe_size=0;
  uint16_t __t2019t__buf__unsafe_offset=0;
  uint16_t __t2019t__buf__unsafe_align=0;
  uint64_t __t2019t__pos=0;
  char* __t2020t__=0;
  double __t2021t=0;
  char* __t2022t__buf__unsafe_ptr=0;
  uint64_t __t2022t__buf__unsafe_size=0;
  uint16_t __t2022t__buf__unsafe_offset=0;
  uint16_t __t2022t__buf__unsafe_align=0;
  uint64_t __t2022t__pos=0;
  char* __t2023t__=0;
  double __t2024t=0;
  char* __t2025t__buf__unsafe_ptr=0;
  uint64_t __t2025t__buf__unsafe_size=0;
  uint16_t __t2025t__buf__unsafe_offset=0;
  uint16_t __t2025t__buf__unsafe_align=0;
  uint64_t __t2025t__pos=0;
  char* __t2026t__=0;
  double __t2027t=0;
  uint64_t __t2028t=0;
  char* __t2029t__=0;
  double __t2030t=0;
  uint64_t __t2031t=0;
  char* __t2032t__=0;
  double __t2033t__value=0;
  uint64_t __t2035t=0;
  char* __t2036t__=0;
  double __t2037t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t2013t(&__t2015t__unsafe_ptr,&__t2015t__unsafe_size,&__t2015t__unsafe_offset,&__t2015t__unsafe_align);
  __t2016t__unsafe_ptr=__t2015t__unsafe_ptr;
  __t2016t__unsafe_size=__t2015t__unsafe_size;
  __t2016t__unsafe_offset=__t2015t__unsafe_offset;
  __t2016t__unsafe_align=__t2015t__unsafe_align;
  __t_errcode=list__t828t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,&__t2017t__buf__unsafe_ptr,&__t2017t__buf__unsafe_size,&__t2017t__buf__unsafe_offset,&__t2017t__buf__unsafe_align,&__t2017t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=alloc__t903t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,&__t2016t__unsafe_size,&__t2019t__buf__unsafe_ptr,&__t2019t__buf__unsafe_size,&__t2019t__buf__unsafe_offset,&__t2019t__buf__unsafe_align,&__t2019t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t918t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2019t__pos,&__t2020t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2021t=0.1;
  if(!__t2020t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2020t__,&__t2021t,8);
  __t_errcode=alloc__t903t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,&__t2016t__unsafe_size,&__t2022t__buf__unsafe_ptr,&__t2022t__buf__unsafe_size,&__t2022t__buf__unsafe_offset,&__t2022t__buf__unsafe_align,&__t2022t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t918t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2022t__pos,&__t2023t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2024t=0.1;
  if(!__t2023t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2023t__,&__t2024t,8);
  __t_errcode=alloc__t903t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,&__t2016t__unsafe_size,&__t2025t__buf__unsafe_ptr,&__t2025t__buf__unsafe_size,&__t2025t__buf__unsafe_offset,&__t2025t__buf__unsafe_align,&__t2025t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t918t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,__t2025t__pos,&__t2026t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2027t=0.1;
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2026t__,&__t2027t,8);
  __t2028t=1;
  __t_errcode=mutget__t841t(&__t2016t__unsafe_ptr,&__t2016t__unsafe_size,&__t2016t__unsafe_offset,&__t2016t__unsafe_align,&__t2016t__unsafe_size,__t2028t,&__t2029t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2030t=0.2;
  if(!__t2029t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2029t__,&__t2030t,8);
  __t2031t=0;
  __t_errcode=get__t837t(__t2016t__unsafe_ptr,__t2016t__unsafe_size,__t2016t__unsafe_offset,__t2016t__unsafe_align,__t2016t__unsafe_size,__t2031t,&__t2032t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2032t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2033t__value,__t2032t__,8);
  print__t385t(__t2033t__value);
  __t2035t=1;
  __t_errcode=get__t837t(__t2016t__unsafe_ptr,__t2016t__unsafe_size,__t2016t__unsafe_offset,__t2016t__unsafe_align,__t2016t__unsafe_size,__t2035t,&__t2036t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2036t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2037t__value,__t2036t__,8);
  print__t385t(__t2037t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2017t__buf__unsafe_ptr,&__t2018t____t831t____t692t__);
  if(__t2018t____t831t____t692t__){
  free__t661t(&__t2017t__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}