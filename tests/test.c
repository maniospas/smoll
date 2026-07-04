#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t391t="\n";
const char* const __t2242t="pair";
const char* const __t2228t="pair__t2196t";
static const char* __t_all_errcodes[39] = {"noerr",
"error",
"null pointer",
"assertion error",
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
"invalid float conversion from string without a value after the dot",
"does not match",
"empty input name",
"cannot tag a structural type"
};

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void pair__t2196t(double x, double y, double* __t2259t, double* __t2260t) {
  goto __t_return;
  __t_return:
  *__t2259t=x;
  *__t2260t=y;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2261t) {
  int value=0;
  *__t2261t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2262t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2262t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2263t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2263t=__t105t__;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2264t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2264t=z;
}

static inline __attribute__((always_inline)) void exists__t600t(char* x, char* __t2265t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2265t=z;
}

static inline __attribute__((always_inline)) void not__t36t(char value, char* __t2266t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2266t=z;
}

static inline __attribute__((always_inline)) int alloc__t663t(uint64_t bytes, char** __t2267t) {
  char* allocated=0;
  char __t664t__=0;
  char __t665t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t600t(allocated,&__t664t__);
  not__t36t(__t664t__,&__t665t__);
  if(__t665t__){
  __t_errcode=11;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2267t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void tagged__t2136t(const char* value, const char** __t2268t) {
  goto __t_return;
  __t_return:
  *__t2268t=value;
}

static inline __attribute__((always_inline)) void tagged____t_buffer____buffer__t2230t(char** __t2269t, uint64_t* __t2270t, uint16_t* __t2271t, uint16_t* __t2272t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2269t=unsafe_ptr;
  *__t2270t=unsafe_size;
  *__t2271t=unsafe_offset;
  *__t2272t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2273t) {
  *__t2273t=to;
}

static inline __attribute__((always_inline)) void free__t670t(char** __t2274t) {
  char* allocated=*__t2274t;
  if(allocated){
  free(allocated);
  }
  *__t2274t=allocated;
}

static inline __attribute__((always_inline)) void unsafe_defer_free__t2150t(char** __t2275t, char** __t2276t) {
  char* obj=*__t2275t;
  goto __t_return;
  __t_return:
  *__t2275t=obj;
  *__t2276t=obj;
}

static inline __attribute__((always_inline)) void pair____t_buffer____buffer__t2243t(char** __t2277t, uint64_t* __t2278t, uint16_t* __t2279t, uint16_t* __t2280t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=16;
  *__t2277t=unsafe_ptr;
  *__t2278t=unsafe_size;
  *__t2279t=unsafe_offset;
  *__t2280t=unsafe_align;
}

static inline __attribute__((always_inline)) void cstr____t_buffer____buffer__t2139t(char** __t2281t, uint64_t* __t2282t, uint16_t* __t2283t, uint16_t* __t2284t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2281t=unsafe_ptr;
  *__t2282t=unsafe_size;
  *__t2283t=unsafe_offset;
  *__t2284t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1106t(const char* x, const char* y, char* __t2285t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2285t=z;
}

static inline __attribute__((always_inline)) void neq__t1135t(const char* x, const char* y, char* __t2286t) {
  char __t1136t__=0;
  char __t1137t__=0;
  eq__t1106t(x,y,&__t1136t__);
  not__t36t(__t1136t__,&__t1137t__);
  goto __t_return;
  __t_return:
  *__t2286t=__t1137t__;
}

static inline __attribute__((always_inline)) void add__t672t(char* allocated, uint64_t offset, char** __t2287t) {
  char* element=0;
  char* __t673t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t673t__);
  goto __t_return;
  __t_return:
  *__t2287t=__t673t__;
}

static inline __attribute__((always_inline)) int unsafe_match__t2138t(char* obj, const char* name, char* type, char** __t2288t) {
  char* __t2141t__unsafe_ptr=0;
  uint64_t __t2141t__unsafe_size=0;
  uint16_t __t2141t__unsafe_offset=0;
  uint16_t __t2141t__unsafe_align=0;
  const char* __t2142t__value=0;
  const char* found=0;
  char __t2143t__=0;
  uint64_t __t2147t=0;
  char* __t2148t__=0;
  char* __t2149t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  cstr____t_buffer____buffer__t2139t(&__t2141t__unsafe_ptr,&__t2141t__unsafe_size,&__t2141t__unsafe_offset,&__t2141t__unsafe_align);
  if(!obj){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2142t__value,obj,8);
  found=__t2142t__value;
  neq__t1135t(found,name,&__t2143t__);
  if(__t2143t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t2147t=8;
  add__t672t(obj,__t2147t,&__t2148t__);
  unsafe_attach_type__t28t(__t2148t__,type,&__t2149t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2288t=__t2149t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t394t(double value) {
  int __t395t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2212t() {
  double __t2215t=0;
  double __t2216t=0;
  double __t2217t__x=0;
  double __t2217t__y=0;
  uint64_t __t2219t=0;
  uint64_t __t2220t=0;
  uint64_t __t2221t__=0;
  char* __t2222t__=0;
  const char* __t2229t__value=0;
  char* __t2232t__unsafe_ptr=0;
  uint64_t __t2232t__unsafe_size=0;
  uint16_t __t2232t__unsafe_offset=0;
  uint16_t __t2232t__unsafe_align=0;
  char* __t2233t__=0;
  char* __t2234t__=0;
  char* __t2236t=0;
  char* obj=0;
  char __t2237t=0;
  char* __t2245t__unsafe_ptr=0;
  uint64_t __t2245t__unsafe_size=0;
  uint16_t __t2245t__unsafe_offset=0;
  uint16_t __t2245t__unsafe_align=0;
  char* __t2246t__=0;
  char* __t2247t=0;
  char* p=0;
  char* __t2249t=0;
  double __t2250t=0;
  char* __t2252t=0;
  double __t2253t__=0;
  char* __t2256t=0;
  double __t2257t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  __t2215t=1.0;
  __t2216t=2.0;
  pair__t2196t(__t2215t,__t2216t,&__t2217t__x,&__t2217t__y);
  __t2219t=8;
  __t2220t=16;
  add__t183t(__t2219t,__t2220t,&__t2221t__);
  __t_errcode=alloc__t663t(__t2221t__,&__t2222t__);
  if(__t_errcode){
  goto __t_failure;
  }
  tagged__t2136t(__t2228t,&__t2229t__value);
  if(!__t2222t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2222t__,&__t2229t__value,8);
  memcpy(__t2222t__+8,&__t2217t__x,8);
  memcpy(__t2222t__+16,&__t2217t__y,8);
  tagged____t_buffer____buffer__t2230t(&__t2232t__unsafe_ptr,&__t2232t__unsafe_size,&__t2232t__unsafe_offset,&__t2232t__unsafe_align);
  unsafe_attach_type__t28t(__t2222t__,__t2232t__unsafe_ptr,&__t2233t__);
  unsafe_defer_free__t2150t(&__t2233t__,&__t2234t__);
  __t2236t=__t2234t__;
  obj=__t2236t;
  pair____t_buffer____buffer__t2243t(&__t2245t__unsafe_ptr,&__t2245t__unsafe_size,&__t2245t__unsafe_offset,&__t2245t__unsafe_align);
  __t_complain=unsafe_match__t2138t(obj,__t2228t,__t2245t__unsafe_ptr,&__t2246t__);
  __t2237t=__t_complain;
  __t2247t=__t2246t__;
  p=__t2247t;
  __t2237t=__t2237t==0;
  if(__t2237t){
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2249t=p+0;
  __t2250t=3.0;
  if(!__t2249t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2249t,&__t2250t,8);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2252t=p+0;
  if(!__t2252t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2253t__,__t2252t,8);
  print__t394t(__t2253t__);
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t2256t=p+8;
  if(!__t2256t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2257t__,__t2256t,8);
  print__t394t(__t2257t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t670t(&__t2234t__);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2212t();return 0;}