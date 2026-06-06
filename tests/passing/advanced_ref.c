#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2020t="123";
const char* const __t382t="\n";
const char* const __t2022t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2012t(char** __t2030t, uint64_t* __t2031t, uint16_t* __t2032t, uint16_t* __t2033t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2030t=unsafe_ptr;
  *__t2031t=unsafe_size;
  *__t2032t=unsafe_offset;
  *__t2033t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2034t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2034t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2035t) {
  char* allocated=*__t2035t;
  if(allocated){
  free(allocated);
  }
  *__t2035t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2036t) {
  int value=0;
  *__t2036t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2037t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2037t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2038t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2038t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2039t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2039t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2040t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2040t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2041t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2041t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2042t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2042t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2043t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2044t) {
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
  *__t2044t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2045t, uint64_t* __t2046t, uint16_t* __t2047t, uint16_t* __t2048t, uint64_t size, char** __t2049t, uint64_t* __t2050t, uint16_t* __t2051t, uint16_t* __t2052t) {
  char* buffer__unsafe_ptr=*__t2045t;
  uint64_t buffer__unsafe_size=*__t2046t;
  uint16_t buffer__unsafe_offset=*__t2047t;
  uint16_t buffer__unsafe_align=*__t2048t;
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
  *__t2045t=buffer__unsafe_ptr;
  *__t2046t=buffer__unsafe_size;
  *__t2047t=buffer__unsafe_offset;
  *__t2048t=buffer__unsafe_align;
  *__t2049t=buffer__unsafe_ptr;
  *__t2050t=buffer__unsafe_size;
  *__t2051t=buffer__unsafe_offset;
  *__t2052t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2053t) {
  goto __t_return;
  __t_return:
  *__t2053t=buffer__unsafe_size;
}

int list__t828t(char** __t2054t, uint64_t* __t2055t, uint16_t* __t2056t, uint16_t* __t2057t, char** __t2058t, uint64_t* __t2059t, uint16_t* __t2060t, uint16_t* __t2061t, uint64_t* __t2062t) {
  char* _buf__unsafe_ptr=*__t2054t;
  uint64_t _buf__unsafe_size=*__t2055t;
  uint16_t _buf__unsafe_offset=*__t2056t;
  uint16_t _buf__unsafe_align=*__t2057t;
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
  *__t2054t=_buf__unsafe_ptr;
  *__t2055t=_buf__unsafe_size;
  *__t2056t=_buf__unsafe_offset;
  *__t2057t=_buf__unsafe_align;
  *__t2058t=buf__unsafe_ptr;
  *__t2059t=buf__unsafe_size;
  *__t2060t=buf__unsafe_offset;
  *__t2061t=buf__unsafe_align;
  *__t2062t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2063t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2063t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2064t) {
  *__t2064t=to;
}

static inline __attribute__((always_inline)) int realloc__t657t(char* allocated, uint64_t bytes, char** __t2065t) {
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
  *__t2065t=__t660t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2066t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2066t=z;
}

static inline __attribute__((always_inline)) int resize__t760t(char** __t2067t, uint64_t* __t2068t, uint16_t* __t2069t, uint16_t* __t2070t, uint64_t size, char** __t2071t, uint64_t* __t2072t, uint16_t* __t2073t, uint16_t* __t2074t) {
  char* buffer__unsafe_ptr=*__t2067t;
  uint64_t buffer__unsafe_size=*__t2068t;
  uint16_t buffer__unsafe_offset=*__t2069t;
  uint16_t buffer__unsafe_align=*__t2070t;
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
  *__t2067t=buffer__unsafe_ptr;
  *__t2068t=buffer__unsafe_size;
  *__t2069t=buffer__unsafe_offset;
  *__t2070t=buffer__unsafe_align;
  *__t2071t=buffer__unsafe_ptr;
  *__t2072t=buffer__unsafe_size;
  *__t2073t=buffer__unsafe_offset;
  *__t2074t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2075t, uint64_t* __t2076t, uint16_t* __t2077t, uint16_t* __t2078t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2075t=unsafe_ptr;
  *__t2076t=unsafe_size;
  *__t2077t=unsafe_offset;
  *__t2078t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2079t) {
  *__t2079t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2080t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2080t=z;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2081t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2081t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2082t) {
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
  *__t2082t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2083t, uint64_t* __t2084t, uint64_t* __t2085t, char* __t2086t) {
  goto __t_return;
  __t_return:
  *__t2083t=unsafe_ptr;
  *__t2084t=dat__pos;
  *__t2085t=dat__length;
  *__t2086t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2087t, uint64_t* __t2088t, uint64_t* __t2089t, char* __t2090t) {
  char* unsafe_ptr=0;
  uint64_t __t946t__=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t=0;
  char __t951t__=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__dat__pos=0;
  uint64_t __t952t__dat__length=0;
  char __t952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t946t__);
  __t947t=1;
  neq__t144t(__t946t__,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t949t__);
  __t950t=0;
  neq__t144t(__t949t__,__t950t,&__t951t__);
  if(__t951t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t941t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t952t__unsafe_ptr,&__t952t__dat__pos,&__t952t__dat__length,&__t952t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2087t=__t952t__unsafe_ptr;
  *__t2088t=__t952t__dat__pos;
  *__t2089t=__t952t__dat__length;
  *__t2090t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2091t, uint64_t* __t2092t, uint64_t* __t2093t, char* __t2094t) {
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__=0;
  char __t981t__value=0;
  char first=0;
  char* __t982t__unsafe_ptr=0;
  uint64_t __t982t__dat__pos=0;
  uint64_t __t982t__dat__length=0;
  char __t982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t978t=0;
  neq__t144t(length,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t980t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t980t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t981t__value,__t980t__,1);
  first=__t981t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t982t__unsafe_ptr,&__t982t__dat__pos,&__t982t__dat__length,&__t982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2091t=__t982t__unsafe_ptr;
  *__t2092t=__t982t__dat__pos;
  *__t2093t=__t982t__dat__length;
  *__t2094t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2095t, uint64_t* __t2096t, uint64_t* __t2097t, char* __t2098t) {
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__unsafe_size=0;
  uint16_t __t998t__unsafe_offset=0;
  uint16_t __t998t__unsafe_align=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__unsafe_size=0;
  uint16_t __t999t__unsafe_offset=0;
  uint16_t __t999t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1000t__=0;
  uint64_t length=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t__=0;
  uint64_t __t1003t=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t998t__unsafe_ptr,&__t998t__unsafe_size,&__t998t__unsafe_offset,&__t998t__unsafe_align);
  __t999t__unsafe_ptr=__t998t__unsafe_ptr;
  __t999t__unsafe_size=__t998t__unsafe_size;
  __t999t__unsafe_offset=__t998t__unsafe_offset;
  __t999t__unsafe_align=__t998t__unsafe_align;
  buf__unsafe_ptr=__t999t__unsafe_ptr;
  buf__unsafe_size=__t999t__unsafe_size;
  buf__unsafe_offset=__t999t__unsafe_offset;
  buf__unsafe_align=__t999t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1000t__);
  buf__unsafe_ptr=__t1000t__;
  if(c){
  length=strlen(c);
  }
  __t1001t=1;
  add__t175t(length,__t1001t,&__t1002t__);
  buf__unsafe_size=__t1002t__;
  __t1003t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,length,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2095t=__t1005t__unsafe_ptr;
  *__t2096t=__t1005t__dat__pos;
  *__t2097t=__t1005t__dat__length;
  *__t2098t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2099t) {
  goto __t_return;
  __t_return:
  *__t2099t=s__dat__length;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t2100t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2100t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t2101t) {
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
  *__t2101t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t2102t, uint64_t* __t2103t, uint16_t* __t2104t, uint16_t* __t2105t, uint64_t pos, char** __t2106t, uint64_t* __t2107t, uint16_t* __t2108t, uint16_t* __t2109t, uint64_t* __t2110t) {
  char* buf__unsafe_ptr=*__t2102t;
  uint64_t buf__unsafe_size=*__t2103t;
  uint16_t buf__unsafe_offset=*__t2104t;
  uint16_t buf__unsafe_align=*__t2105t;
  goto __t_return;
  __t_return:
  *__t2102t=buf__unsafe_ptr;
  *__t2103t=buf__unsafe_size;
  *__t2104t=buf__unsafe_offset;
  *__t2105t=buf__unsafe_align;
  *__t2106t=buf__unsafe_ptr;
  *__t2107t=buf__unsafe_size;
  *__t2108t=buf__unsafe_offset;
  *__t2109t=buf__unsafe_align;
  *__t2110t=pos;
}

int alloc__t889t(char** __t2111t, uint64_t* __t2112t, uint16_t* __t2113t, uint16_t* __t2114t, uint64_t* __t2115t, uint64_t length, char** __t2116t, uint64_t* __t2117t, uint16_t* __t2118t, uint16_t* __t2119t, uint64_t* __t2120t) {
  char* allocator__buf__unsafe_ptr=*__t2111t;
  uint64_t allocator__buf__unsafe_size=*__t2112t;
  uint16_t allocator__buf__unsafe_offset=*__t2113t;
  uint16_t allocator__buf__unsafe_align=*__t2114t;
  uint64_t allocator__length=*__t2115t;
  int __t890t=0;
  uint64_t __t891t=0;
  uint64_t __t892t__=0;
  uint64_t pos=0;
  uint64_t __t893t__=0;
  uint64_t prev_length=0;
  uint64_t __t894t__=0;
  char __t895t__=0;
  uint64_t __t896t=0;
  uint64_t __t897t__=0;
  uint64_t __t898t=0;
  uint64_t __t899t__=0;
  uint64_t __t900t__=0;
  char* __t901t__unsafe_ptr=0;
  uint64_t __t901t__unsafe_size=0;
  uint16_t __t901t__unsafe_offset=0;
  uint16_t __t901t__unsafe_align=0;
  char* __t902t__buf__unsafe_ptr=0;
  uint64_t __t902t__buf__unsafe_size=0;
  uint16_t __t902t__buf__unsafe_offset=0;
  uint16_t __t902t__buf__unsafe_align=0;
  uint64_t __t902t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t891t=0;
  add__t175t(allocator__length,__t891t,&__t892t__);
  pos=__t892t__;
  add__t175t(allocator__length,length,&__t893t__);
  prev_length=__t893t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t894t__);
  gt__t276t(prev_length,__t894t__,&__t895t__);
  if(__t895t__){
  __t896t=2;
  __t_errcode=div__t225t(prev_length,__t896t,&__t897t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t898t=1;
  add__t175t(__t897t__,__t898t,&__t899t__);
  add__t175t(prev_length,__t899t__,&__t900t__);
  __t_errcode=resize__t760t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t900t__,&__t901t__unsafe_ptr,&__t901t__unsafe_size,&__t901t__unsafe_offset,&__t901t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t901t__unsafe_ptr;
  allocator__buf__unsafe_size=__t901t__unsafe_size;
  allocator__buf__unsafe_offset=__t901t__unsafe_offset;
  allocator__buf__unsafe_align=__t901t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t902t__buf__unsafe_ptr,&__t902t__buf__unsafe_size,&__t902t__buf__unsafe_offset,&__t902t__buf__unsafe_align,&__t902t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2111t=allocator__buf__unsafe_ptr;
  *__t2112t=allocator__buf__unsafe_size;
  *__t2113t=allocator__buf__unsafe_offset;
  *__t2114t=allocator__buf__unsafe_align;
  *__t2115t=allocator__length;
  *__t2116t=__t902t__buf__unsafe_ptr;
  *__t2117t=__t902t__buf__unsafe_size;
  *__t2118t=__t902t__buf__unsafe_offset;
  *__t2119t=__t902t__buf__unsafe_align;
  *__t2120t=__t902t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1048t(char** __t2121t, uint64_t* __t2122t, uint16_t* __t2123t, uint16_t* __t2124t, uint64_t* __t2125t, const char* _other, char** __t2126t, uint64_t* __t2127t, uint64_t* __t2128t, char* __t2129t) {
  char* CHARS__buf__unsafe_ptr=*__t2121t;
  uint64_t CHARS__buf__unsafe_size=*__t2122t;
  uint16_t CHARS__buf__unsafe_offset=*__t2123t;
  uint16_t CHARS__buf__unsafe_align=*__t2124t;
  uint64_t CHARS__length=*__t2125t;
  char* __t1049t__unsafe_ptr=0;
  uint64_t __t1049t__dat__pos=0;
  uint64_t __t1049t__dat__length=0;
  char __t1049t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1050t__=0;
  char* __t1051t__buf__unsafe_ptr=0;
  uint64_t __t1051t__buf__unsafe_size=0;
  uint16_t __t1051t__buf__unsafe_offset=0;
  uint16_t __t1051t__buf__unsafe_align=0;
  uint64_t __t1051t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1052t__unsafe_ptr=0;
  uint64_t __t1052t__dat__pos=0;
  uint64_t __t1052t__dat__length=0;
  char __t1052t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(_other,&__t1049t__unsafe_ptr,&__t1049t__dat__pos,&__t1049t__dat__length,&__t1049t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1049t__unsafe_ptr;
  other__dat__pos=__t1049t__dat__pos;
  other__dat__length=__t1049t__dat__length;
  other__dat__first=__t1049t__dat__first;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1050t__);
  __t_errcode=alloc__t889t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__length,__t1050t__,&__t1051t__buf__unsafe_ptr,&__t1051t__buf__unsafe_size,&__t1051t__buf__unsafe_offset,&__t1051t__buf__unsafe_align,&__t1051t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1051t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1051t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1051t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1051t__buf__unsafe_align;
  surface__pos=__t1051t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t945t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1052t__unsafe_ptr,&__t1052t__dat__pos,&__t1052t__dat__length,&__t1052t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2121t=CHARS__buf__unsafe_ptr;
  *__t2122t=CHARS__buf__unsafe_size;
  *__t2123t=CHARS__buf__unsafe_offset;
  *__t2124t=CHARS__buf__unsafe_align;
  *__t2125t=CHARS__length;
  *__t2126t=__t1052t__unsafe_ptr;
  *__t2127t=__t1052t__dat__pos;
  *__t2128t=__t1052t__dat__length;
  *__t2129t=__t1052t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t2011t(char** __t2130t, uint64_t* __t2131t, uint64_t* __t2132t, char* __t2133t, char** __t2134t, uint64_t* __t2135t, uint64_t* __t2136t, char* __t2137t) {
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__unsafe_size=0;
  uint16_t __t2014t__unsafe_offset=0;
  uint16_t __t2014t__unsafe_align=0;
  char* __t2015t__unsafe_ptr=0;
  uint64_t __t2015t__unsafe_size=0;
  uint16_t __t2015t__unsafe_offset=0;
  uint16_t __t2015t__unsafe_align=0;
  char* __t2016t__buf__unsafe_ptr=0;
  uint64_t __t2016t__buf__unsafe_size=0;
  uint16_t __t2016t__buf__unsafe_offset=0;
  uint16_t __t2016t__buf__unsafe_align=0;
  uint64_t __t2016t__length=0;
  char __t2017t____t831t____t692t__=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t2018t=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__unsafe_size=0;
  uint16_t __t2019t__unsafe_offset=0;
  uint16_t __t2019t__unsafe_align=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__dat__pos=0;
  uint64_t __t2021t__dat__length=0;
  char __t2021t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2023t__unsafe_ptr=0;
  uint64_t __t2023t__dat__pos=0;
  uint64_t __t2023t__dat__length=0;
  char __t2023t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2012t(&__t2014t__unsafe_ptr,&__t2014t__unsafe_size,&__t2014t__unsafe_offset,&__t2014t__unsafe_align);
  __t2015t__unsafe_ptr=__t2014t__unsafe_ptr;
  __t2015t__unsafe_size=__t2014t__unsafe_size;
  __t2015t__unsafe_offset=__t2014t__unsafe_offset;
  __t2015t__unsafe_align=__t2014t__unsafe_align;
  __t_errcode=list__t828t(&__t2015t__unsafe_ptr,&__t2015t__unsafe_size,&__t2015t__unsafe_offset,&__t2015t__unsafe_align,&__t2016t__buf__unsafe_ptr,&__t2016t__buf__unsafe_size,&__t2016t__buf__unsafe_offset,&__t2016t__buf__unsafe_align,&__t2016t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2018t=100;
  __t_errcode=resize__t760t(&__t2016t__buf__unsafe_ptr,&__t2016t__buf__unsafe_size,&__t2016t__buf__unsafe_offset,&__t2016t__buf__unsafe_align,__t2018t,&__t2019t__unsafe_ptr,&__t2019t__unsafe_size,&__t2019t__unsafe_offset,&__t2019t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1048t(&__t2016t__buf__unsafe_ptr,&__t2016t__buf__unsafe_size,&__t2016t__buf__unsafe_offset,&__t2016t__buf__unsafe_align,&__t2016t__length,__t2020t,&__t2021t__unsafe_ptr,&__t2021t__dat__pos,&__t2021t__dat__length,&__t2021t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t2021t__dat__pos;
  s1__dat__length=__t2021t__dat__length;
  s1__dat__first=__t2021t__dat__first;
  __t_errcode=copy__t1048t(&__t2016t__buf__unsafe_ptr,&__t2016t__buf__unsafe_size,&__t2016t__buf__unsafe_offset,&__t2016t__buf__unsafe_align,&__t2016t__length,__t2022t,&__t2023t__unsafe_ptr,&__t2023t__dat__pos,&__t2023t__dat__length,&__t2023t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t2023t__dat__pos;
  s2__dat__length=__t2023t__dat__length;
  s2__dat__first=__t2023t__dat__first;
  s1__unsafe_ptr=__t2016t__buf__unsafe_ptr;
  s2__unsafe_ptr=__t2016t__buf__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t591t(s1__unsafe_ptr,&__t2017t____t831t____t692t__);
  if(__t2017t____t831t____t692t__){
  free__t661t(&s1__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2130t=s1__unsafe_ptr;
  *__t2131t=s1__dat__pos;
  *__t2132t=s1__dat__length;
  *__t2133t=s1__dat__first;
  *__t2134t=s2__unsafe_ptr;
  *__t2135t=s2__dat__pos;
  *__t2136t=s2__dat__length;
  *__t2137t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2024t() {
  char* __t2026t__s1__unsafe_ptr=0;
  uint64_t __t2026t__s1__dat__pos=0;
  uint64_t __t2026t__s1__dat__length=0;
  char __t2026t__s1__dat__first=0;
  char* __t2026t__s2__unsafe_ptr=0;
  uint64_t __t2026t__s2__dat__pos=0;
  uint64_t __t2026t__s2__dat__length=0;
  char __t2026t__s2__dat__first=0;
  char __t2027t____t2017t____t831t____t692t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t2011t(&__t2026t__s1__unsafe_ptr,&__t2026t__s1__dat__pos,&__t2026t__s1__dat__length,&__t2026t__s1__dat__first,&__t2026t__s2__unsafe_ptr,&__t2026t__s2__dat__pos,&__t2026t__s2__dat__length,&__t2026t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t2026t__s1__unsafe_ptr;
  s__s1__dat__pos=__t2026t__s1__dat__pos;
  s__s1__dat__length=__t2026t__s1__dat__length;
  s__s1__dat__first=__t2026t__s1__dat__first;
  s__s2__unsafe_ptr=__t2026t__s2__unsafe_ptr;
  s__s2__dat__pos=__t2026t__s2__dat__pos;
  s__s2__dat__length=__t2026t__s2__dat__length;
  s__s2__dat__first=__t2026t__s2__dat__first;
  print__t1131t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t1131t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2026t__s1__unsafe_ptr,&__t2027t____t2017t____t831t____t692t__);
  if(__t2027t____t2017t____t831t____t692t__){
  free__t661t(&__t2026t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2024t();return 0;}