#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2218t="⎡ ";
const char* const __t2420t="a*b";
const char* const __t1900t="[ ";
const char* const __t1913t="  ";
const char* const __t2257t=" ⎤";
const char* const __t2268t=" ⎥";
const char* const __t370t="\n";
const char* const __t1916t=" ]";
const char* const __t2276t=" ⎦";
const char* const __t2381t="a*x";
const char* const __t2398t="u*a";
const char* const __t2229t="⎢ ";
const char* const __t2237t="⎣ ";
const char* const __t362t="";
static const char* __t_all_errcodes[49] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void new__t1325t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2352t(char** __t2425t, uint64_t* __t2426t, uint16_t* __t2427t, uint16_t* __t2428t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2425t=unsafe_ptr;
  *__t2426t=unsafe_size;
  *__t2427t=unsafe_offset;
  *__t2428t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2429t) {
  int value=0;
  *__t2429t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t2430t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t2430t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t2431t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t2431t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t2432t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2432t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t2433t) {
  char* allocated=*__t2433t;
  if(allocated){
  free(allocated);
  }
  *__t2433t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t2434t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2434t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t2435t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2435t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t2436t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2436t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t2437t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2437t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t2438t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2438t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t2439t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2439t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t2440t, uint64_t* __t2441t, uint16_t* __t2442t, uint16_t* __t2443t, uint64_t size, char** __t2444t, uint64_t* __t2445t, uint16_t* __t2446t, uint16_t* __t2447t) {
  char* buffer__unsafe_ptr=*__t2440t;
  uint64_t buffer__unsafe_size=*__t2441t;
  uint16_t buffer__unsafe_offset=*__t2442t;
  uint16_t buffer__unsafe_align=*__t2443t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t2440t=buffer__unsafe_ptr;
  *__t2441t=buffer__unsafe_size;
  *__t2442t=buffer__unsafe_offset;
  *__t2443t=buffer__unsafe_align;
  *__t2444t=__t521t__unsafe_ptr;
  *__t2445t=__t521t__unsafe_size;
  *__t2446t=__t521t__unsafe_offset;
  *__t2447t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2448t) {
  goto __t_return;
  __t_return:
  *__t2448t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t2449t) {
  int __t221t__=0;
  uint64_t zero=0;
  char __t222t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t221t__);
  zero=0;
  eq__t118t(y,zero,&__t222t__);
  if(__t222t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2449t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t2450t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2450t=z;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t2451t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2451t=z;
}

static inline __attribute__((always_inline)) void mat__t1323t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2452t, uint64_t* __t2453t, uint64_t* __t2454t, uint64_t* __t2455t, uint64_t* __t2456t) {
  goto __t_return;
  __t_return:
  *__t2452t=unsafe_ptr;
  *__t2453t=pos;
  *__t2454t=rows;
  *__t2455t=cols;
  *__t2456t=stride;
}

static inline __attribute__((always_inline)) int mat__t1944t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2457t, uint64_t rows, uint64_t cols, char** __t2458t, uint64_t* __t2459t, uint64_t* __t2460t, uint64_t* __t2461t, uint64_t* __t2462t) {
  uint64_t allocator__pos=*__t2457t;
  uint64_t __t1945t__=0;
  uint64_t __t1946t=0;
  char __t1947t__=0;
  uint64_t __t1948t__=0;
  uint64_t __t1949t=0;
  char __t1950t__=0;
  uint64_t __t1951t__=0;
  uint64_t __t1952t__=0;
  uint64_t __t1953t__=0;
  char __t1954t__=0;
  uint64_t start=0;
  uint64_t __t1955t__=0;
  uint64_t __t1956t__=0;
  char* __t1957t__unsafe_ptr=0;
  uint64_t __t1957t__pos=0;
  uint64_t __t1957t__rows=0;
  uint64_t __t1957t__cols=0;
  uint64_t __t1957t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t505t(allocator__buf__unsafe_align,&__t1945t__);
  __t1946t=8;
  neq__t142t(__t1945t__,__t1946t,&__t1947t__);
  if(__t1947t__){
  __t_errcode=40;
  goto __t_failure;
  }
  nat__t505t(allocator__buf__unsafe_offset,&__t1948t__);
  __t1949t=0;
  neq__t142t(__t1948t__,__t1949t,&__t1950t__);
  if(__t1950t__){
  __t_errcode=41;
  goto __t_failure;
  }
  mul__t194t(rows,cols,&__t1951t__);
  add__t170t(allocator__pos,__t1951t__,&__t1952t__);
  len__t604t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1953t__);
  gt__t271t(__t1952t__,__t1953t__,&__t1954t__);
  if(__t1954t__){
  __t_errcode=42;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t194t(rows,cols,&__t1955t__);
  add__t170t(allocator__pos,__t1955t__,&__t1956t__);
  allocator__pos=__t1956t__;
  mat__t1323t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t1957t__unsafe_ptr,&__t1957t__pos,&__t1957t__rows,&__t1957t__cols,&__t1957t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2457t=allocator__pos;
  *__t2458t=__t1957t__unsafe_ptr;
  *__t2459t=__t1957t__pos;
  *__t2460t=__t1957t__rows;
  *__t2461t=__t1957t__cols;
  *__t2462t=__t1957t__stride;
  
  return __t_errcode;
}

int mat__t1958t(char** __t2463t, uint64_t* __t2464t, uint16_t* __t2465t, uint16_t* __t2466t, uint64_t rows, char** __t2467t, uint64_t* __t2468t, uint64_t* __t2469t, uint64_t* __t2470t, uint64_t* __t2471t) {
  char* buf__unsafe_ptr=*__t2463t;
  uint64_t buf__unsafe_size=*__t2464t;
  uint16_t buf__unsafe_offset=*__t2465t;
  uint16_t buf__unsafe_align=*__t2466t;
  uint64_t __t1959t__=0;
  uint64_t __t1960t__=0;
  uint64_t cols=0;
  uint64_t __t1961t__=0;
  uint64_t __t1962t__=0;
  char __t1963t__=0;
  uint64_t __t1964t=0;
  uint64_t __t1965t=0;
  char* __t1966t__unsafe_ptr=0;
  uint64_t __t1966t__pos=0;
  uint64_t __t1966t__rows=0;
  uint64_t __t1966t__cols=0;
  uint64_t __t1966t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1959t__);
  __t_errcode=div__t220t(__t1959t__,rows,&__t1960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t1960t__;
  mul__t194t(cols,rows,&__t1961t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1962t__);
  neq__t142t(__t1961t__,__t1962t__,&__t1963t__);
  if(__t1963t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t1964t=0;
  __t1965t=__t1964t;
  __t_errcode=mat__t1944t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1965t,rows,cols,&__t1966t__unsafe_ptr,&__t1966t__pos,&__t1966t__rows,&__t1966t__cols,&__t1966t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2463t=buf__unsafe_ptr;
  *__t2464t=buf__unsafe_size;
  *__t2465t=buf__unsafe_offset;
  *__t2466t=buf__unsafe_align;
  *__t2467t=__t1966t__unsafe_ptr;
  *__t2468t=__t1966t__pos;
  *__t2469t=__t1966t__rows;
  *__t2470t=__t1966t__cols;
  *__t2471t=__t1966t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t2472t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2472t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t2473t) {
  *__t2473t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t2474t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t2474t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t1986t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2475t) {
  char __t1987t__=0;
  char __t1988t__=0;
  uint64_t __t1989t=0;
  uint64_t __t1990t__=0;
  uint64_t __t1991t__=0;
  uint64_t __t1992t__=0;
  uint64_t __t1993t__=0;
  char* __t1994t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1987t__);
  if(__t1987t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1988t__);
  if(__t1988t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t1989t=8;
  mul__t194t(i,m__stride,&__t1990t__);
  add__t170t(__t1990t__,j,&__t1991t__);
  add__t170t(m__pos,__t1991t__,&__t1992t__);
  mul__t194t(__t1989t,__t1992t__,&__t1993t__);
  add__t503t(m__unsafe_ptr,__t1993t__,&__t1994t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2475t=__t1994t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2372t(char** __t2476t, uint64_t* __t2477t, uint16_t* __t2478t, uint16_t* __t2479t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2476t=unsafe_ptr;
  *__t2477t=unsafe_size;
  *__t2478t=unsafe_offset;
  *__t2479t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1321t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2480t, uint64_t* __t2481t, uint64_t* __t2482t) {
  goto __t_return;
  __t_return:
  *__t2480t=unsafe_ptr;
  *__t2481t=pos;
  *__t2482t=length;
}

static inline __attribute__((always_inline)) int vec__t1371t(char** __t2483t, uint64_t* __t2484t, uint16_t* __t2485t, uint16_t* __t2486t, char** __t2487t, uint64_t* __t2488t, uint64_t* __t2489t) {
  char* buf__unsafe_ptr=*__t2483t;
  uint64_t buf__unsafe_size=*__t2484t;
  uint16_t buf__unsafe_offset=*__t2485t;
  uint16_t buf__unsafe_align=*__t2486t;
  uint64_t __t1372t__=0;
  uint64_t __t1373t=0;
  char __t1374t__=0;
  uint64_t __t1375t__=0;
  uint64_t __t1376t=0;
  char __t1377t__=0;
  uint64_t __t1378t=0;
  uint64_t __t1379t__=0;
  char* __t1380t__unsafe_ptr=0;
  uint64_t __t1380t__pos=0;
  uint64_t __t1380t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t505t(buf__unsafe_align,&__t1372t__);
  __t1373t=8;
  neq__t142t(__t1372t__,__t1373t,&__t1374t__);
  if(__t1374t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t1375t__);
  __t1376t=0;
  neq__t142t(__t1375t__,__t1376t,&__t1377t__);
  if(__t1377t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1378t=0;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1379t__);
  vec__t1321t(buf__unsafe_ptr,__t1378t,__t1379t__,&__t1380t__unsafe_ptr,&__t1380t__pos,&__t1380t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2483t=buf__unsafe_ptr;
  *__t2484t=buf__unsafe_size;
  *__t2485t=buf__unsafe_offset;
  *__t2486t=buf__unsafe_align;
  *__t2487t=__t1380t__unsafe_ptr;
  *__t2488t=__t1380t__pos;
  *__t2489t=__t1380t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t361t(const char* value, const char** __t2490t, const char** __t2491t) {
  goto __t_return;
  __t_return:
  *__t2490t=value;
  *__t2491t=__t362t;
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1331t(char** __t2492t, uint64_t* __t2493t, uint16_t* __t2494t, uint16_t* __t2495t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2492t=unsafe_ptr;
  *__t2493t=unsafe_size;
  *__t2494t=unsafe_offset;
  *__t2495t=unsafe_align;
}

int vec__t1365t(uint64_t length, char** __t2496t, uint64_t* __t2497t, uint64_t* __t2498t) {
  char* __t1366t__unsafe_ptr=0;
  uint64_t __t1366t__unsafe_size=0;
  uint16_t __t1366t__unsafe_offset=0;
  uint16_t __t1366t__unsafe_align=0;
  char* __t1367t__unsafe_ptr=0;
  uint64_t __t1367t__unsafe_size=0;
  uint16_t __t1367t__unsafe_offset=0;
  uint16_t __t1367t__unsafe_align=0;
  uint64_t __t1368t____t510t=0;
  char __t1368t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1369t=0;
  char* __t1370t__unsafe_ptr=0;
  uint64_t __t1370t__pos=0;
  uint64_t __t1370t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1331t(&__t1366t__unsafe_ptr,&__t1366t__unsafe_size,&__t1366t__unsafe_offset,&__t1366t__unsafe_align);
  __t_errcode=alloc__t508t(&__t1366t__unsafe_ptr,&__t1366t__unsafe_size,&__t1366t__unsafe_offset,&__t1366t__unsafe_align,length,&__t1367t__unsafe_ptr,&__t1367t__unsafe_size,&__t1367t__unsafe_offset,&__t1367t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1367t__unsafe_ptr;
  buf__unsafe_size=__t1367t__unsafe_size;
  buf__unsafe_offset=__t1367t__unsafe_offset;
  buf__unsafe_align=__t1367t__unsafe_align;
  __t1369t=0;
  vec__t1321t(buf__unsafe_ptr,__t1369t,length,&__t1370t__unsafe_ptr,&__t1370t__pos,&__t1370t__length);
  goto __t_return;
  
  __t_failure:__t1368t____t510t=0;
  neq__t142t(__t1370t__length,__t1368t____t510t,&__t1368t____t511t__);
  if(__t1368t____t511t__){
  __t1370t__length=0;
  __t1370t__length=__t1370t__length;
  __t1370t__unsafe_ptr=__t1370t__unsafe_ptr;
  free__t501t(&__t1370t__unsafe_ptr);
  }
  __t_return:
  *__t2496t=__t1370t__unsafe_ptr;
  *__t2497t=__t1370t__pos;
  *__t2498t=__t1370t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t2499t, uint64_t* __t2500t) {
  int __t461t=0;
  uint64_t __t462t=0;
  uint64_t _from=0;
  uint64_t __t463t=0;
  uint64_t from=0;
  __t462t=0;
  _from=__t462t;
  __t463t=_from;
  from=__t463t;
  goto __t_return;
  __t_return:
  *__t2499t=from;
  *__t2500t=to;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t2501t, uint64_t r__to, uint64_t* __t2502t) {
  uint64_t r__from=*__t2501t;
  char __t470t__=0;
  uint64_t ret=0;
  uint64_t __t471t=0;
  uint64_t __t472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t470t__);
  if(__t470t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t471t=1;
  add__t170t(ret,__t471t,&__t472t__);
  r__from=__t472t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2501t=r__from;
  *__t2502t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1995t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2503t) {
  char __t1996t__=0;
  char __t1997t__=0;
  uint64_t __t1998t=0;
  uint64_t __t1999t__=0;
  uint64_t __t2000t__=0;
  uint64_t __t2001t__=0;
  uint64_t __t2002t__=0;
  char* __t2003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1996t__);
  if(__t1996t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1997t__);
  if(__t1997t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t1998t=8;
  mul__t194t(i,m__stride,&__t1999t__);
  add__t170t(__t1999t__,j,&__t2000t__);
  add__t170t(m__pos,__t2000t__,&__t2001t__);
  mul__t194t(__t1998t,__t2001t__,&__t2002t__);
  add__t503t(m__unsafe_ptr,__t2002t__,&__t2003t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2503t=__t2003t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1416t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2504t) {
  char __t1417t__=0;
  uint64_t __t1418t=0;
  uint64_t __t1419t__=0;
  uint64_t __t1420t__=0;
  char* __t1421t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1417t__);
  if(__t1417t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1418t=8;
  add__t170t(i,v__pos,&__t1419t__);
  mul__t194t(__t1418t,__t1419t__,&__t1420t__);
  add__t503t(v__unsafe_ptr,__t1420t__,&__t1421t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2504t=__t1421t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t2505t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t2505t=__t71t__;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t2506t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2506t=z;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t2507t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2507t=z;
}

static inline __attribute__((always_inline)) int mutget__t1410t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2508t) {
  char __t1411t__=0;
  uint64_t __t1412t=0;
  uint64_t __t1413t__=0;
  uint64_t __t1414t__=0;
  char* __t1415t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1411t__);
  if(__t1411t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1412t=8;
  add__t170t(i,v__pos,&__t1413t__);
  mul__t194t(__t1412t,__t1413t__,&__t1414t__);
  add__t503t(v__unsafe_ptr,__t1414t__,&__t1415t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2508t=__t1415t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2031t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2509t, uint64_t* __t2510t, uint64_t* __t2511t) {
  char __t2032t__=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__pos=0;
  uint64_t __t2033t__length=0;
  uint64_t __t2034t____t1368t____t510t=0;
  char __t2034t____t1368t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2035t__from=0;
  uint64_t __t2035t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2036t=0;
  uint64_t __t2037t__=0;
  uint64_t i=0;
  double __t2038t=0;
  double __t2039t=0;
  double acc=0;
  uint64_t __t2040t__from=0;
  uint64_t __t2040t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2041t=0;
  uint64_t __t2042t__=0;
  uint64_t j=0;
  char* __t2043t__=0;
  double __t2044t__number=0;
  char* __t2045t__=0;
  double __t2046t__number=0;
  double __t2047t__=0;
  double __t2048t__=0;
  char* __t2049t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m__cols,v__length,&__t2032t__);
  if(__t2032t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1365t(m__rows,&__t2033t__unsafe_ptr,&__t2033t__pos,&__t2033t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2033t__unsafe_ptr;
  result__pos=__t2033t__pos;
  result__length=__t2033t__length;
  range__t460t(m__rows,&__t2035t__from,&__t2035t__to);
  it_i__from=__t2035t__from;
  it_i__to=__t2035t__to;
  while(1){
  __t_complain=next__t469t(&it_i__from,it_i__to,&__t2037t__);
  __t2036t=__t_complain;
  i=__t2037t__;
  __t2036t=__t2036t==0;
  if(!__t2036t){
  break;
  }
  __t2038t=0.0;
  __t2039t=__t2038t;
  acc=__t2039t;
  range__t460t(m__cols,&__t2040t__from,&__t2040t__to);
  it_j__from=__t2040t__from;
  it_j__to=__t2040t__to;
  while(1){
  __t_complain=next__t469t(&it_j__from,it_j__to,&__t2042t__);
  __t2041t=__t_complain;
  j=__t2042t__;
  __t2041t=__t2041t==0;
  if(!__t2041t){
  break;
  }
  __t_errcode=get__t1995t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2043t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2043t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2044t__number,__t2043t__,8);
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,j,&__t2045t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2045t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2046t__number,__t2045t__,8);
  mul__t172t(__t2044t__number,__t2046t__number,&__t2047t__);
  add__t148t(acc,__t2047t__,&__t2048t__);
  acc=__t2048t__;
  }
  __t_errcode=mutget__t1410t(result__unsafe_ptr,result__pos,result__length,i,&__t2049t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2049t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2049t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t2034t____t1368t____t510t=0;
  neq__t142t(result__length,__t2034t____t1368t____t510t,&__t2034t____t1368t____t511t__);
  if(__t2034t____t1368t____t511t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t501t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2509t=result__unsafe_ptr;
  *__t2510t=result__pos;
  *__t2511t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t363t(double value, double* __t2512t, const char** __t2513t) {
  goto __t_return;
  __t_return:
  *__t2512t=value;
  *__t2513t=__t362t;
}

static inline __attribute__((always_inline)) void print__t371t(double value, const char* endl) {
  int __t372t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t2514t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2514t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t2515t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2515t=z;
  
  return __t_errcode;
}

int print__t1918t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t1919t=0;
  const char* endl=0;
  const char* __t1920t__value=0;
  const char* __t1920t____t362t=0;
  uint64_t __t1922t__from=0;
  uint64_t __t1922t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1923t=0;
  uint64_t __t1924t__=0;
  uint64_t i=0;
  char* __t1925t__=0;
  double __t1926t__number=0;
  double __t1927t__value=0;
  const char* __t1927t____t362t=0;
  uint64_t __t1929t=0;
  uint64_t __t1930t__=0;
  char __t1931t__=0;
  const char* __t1932t__value=0;
  const char* __t1932t____t362t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t370t;
  nn__t361t(__t1900t,&__t1920t__value,&__t1920t____t362t);
  print__t366t(__t1920t__value,__t1920t____t362t);
  range__t460t(v__length,&__t1922t__from,&__t1922t__to);
  it__from=__t1922t__from;
  it__to=__t1922t__to;
  while(1){
  __t_complain=next__t469t(&it__from,it__to,&__t1924t__);
  __t1923t=__t_complain;
  i=__t1924t__;
  __t1923t=__t1923t==0;
  if(!__t1923t){
  break;
  }
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,i,&__t1925t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1925t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1926t__number,__t1925t__,8);
  nn__t363t(__t1926t__number,&__t1927t__value,&__t1927t____t362t);
  print__t371t(__t1927t__value,__t1927t____t362t);
  __t1929t=1;
  __t_errcode=sub__t347t(v__length,__t1929t,&__t1930t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t1930t__,&__t1931t__);
  if(__t1931t__){
  nn__t361t(__t1913t,&__t1932t__value,&__t1932t____t362t);
  print__t366t(__t1932t__value,__t1932t____t362t);
  }
  }
  print__t366t(__t1916t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2390t(char** __t2516t, uint64_t* __t2517t, uint16_t* __t2518t, uint16_t* __t2519t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2516t=unsafe_ptr;
  *__t2517t=unsafe_size;
  *__t2518t=unsafe_offset;
  *__t2519t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2086t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2520t, uint64_t* __t2521t, uint64_t* __t2522t) {
  char __t2087t__=0;
  char* __t2088t__unsafe_ptr=0;
  uint64_t __t2088t__pos=0;
  uint64_t __t2088t__length=0;
  uint64_t __t2089t____t1368t____t510t=0;
  char __t2089t____t1368t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2090t__from=0;
  uint64_t __t2090t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2091t=0;
  uint64_t __t2092t__=0;
  uint64_t j=0;
  double __t2093t=0;
  double __t2094t=0;
  double acc=0;
  uint64_t __t2095t__from=0;
  uint64_t __t2095t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2096t=0;
  uint64_t __t2097t__=0;
  uint64_t i=0;
  char* __t2098t__=0;
  double __t2099t__number=0;
  char* __t2100t__=0;
  double __t2101t__number=0;
  double __t2102t__=0;
  double __t2103t__=0;
  char* __t2104t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(v__length,m__rows,&__t2087t__);
  if(__t2087t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=vec__t1365t(m__cols,&__t2088t__unsafe_ptr,&__t2088t__pos,&__t2088t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2088t__unsafe_ptr;
  result__pos=__t2088t__pos;
  result__length=__t2088t__length;
  range__t460t(m__cols,&__t2090t__from,&__t2090t__to);
  it_j__from=__t2090t__from;
  it_j__to=__t2090t__to;
  while(1){
  __t_complain=next__t469t(&it_j__from,it_j__to,&__t2092t__);
  __t2091t=__t_complain;
  j=__t2092t__;
  __t2091t=__t2091t==0;
  if(!__t2091t){
  break;
  }
  __t2093t=0.0;
  __t2094t=__t2093t;
  acc=__t2094t;
  range__t460t(m__rows,&__t2095t__from,&__t2095t__to);
  it_i__from=__t2095t__from;
  it_i__to=__t2095t__to;
  while(1){
  __t_complain=next__t469t(&it_i__from,it_i__to,&__t2097t__);
  __t2096t=__t_complain;
  i=__t2097t__;
  __t2096t=__t2096t==0;
  if(!__t2096t){
  break;
  }
  __t_errcode=get__t1416t(v__unsafe_ptr,v__pos,v__length,i,&__t2098t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2098t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2099t__number,__t2098t__,8);
  __t_errcode=get__t1995t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2100t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2100t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2101t__number,__t2100t__,8);
  mul__t172t(__t2099t__number,__t2101t__number,&__t2102t__);
  add__t148t(acc,__t2102t__,&__t2103t__);
  acc=__t2103t__;
  }
  __t_errcode=mutget__t1410t(result__unsafe_ptr,result__pos,result__length,j,&__t2104t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2104t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2104t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t2089t____t1368t____t510t=0;
  neq__t142t(result__length,__t2089t____t1368t____t510t,&__t2089t____t1368t____t511t__);
  if(__t2089t____t1368t____t511t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t501t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2520t=result__unsafe_ptr;
  *__t2521t=result__pos;
  *__t2522t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2407t(char** __t2523t, uint64_t* __t2524t, uint16_t* __t2525t, uint16_t* __t2526t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2523t=unsafe_ptr;
  *__t2524t=unsafe_size;
  *__t2525t=unsafe_offset;
  *__t2526t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t1937t(uint64_t rows, uint64_t cols, char** __t2527t, uint64_t* __t2528t, uint64_t* __t2529t, uint64_t* __t2530t, uint64_t* __t2531t) {
  char* __t1938t__unsafe_ptr=0;
  uint64_t __t1938t__unsafe_size=0;
  uint16_t __t1938t__unsafe_offset=0;
  uint16_t __t1938t__unsafe_align=0;
  uint64_t __t1939t__=0;
  char* __t1940t__unsafe_ptr=0;
  uint64_t __t1940t__unsafe_size=0;
  uint16_t __t1940t__unsafe_offset=0;
  uint16_t __t1940t__unsafe_align=0;
  uint64_t __t1941t____t510t=0;
  char __t1941t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1942t=0;
  char* __t1943t__unsafe_ptr=0;
  uint64_t __t1943t__pos=0;
  uint64_t __t1943t__rows=0;
  uint64_t __t1943t__cols=0;
  uint64_t __t1943t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1331t(&__t1938t__unsafe_ptr,&__t1938t__unsafe_size,&__t1938t__unsafe_offset,&__t1938t__unsafe_align);
  mul__t194t(rows,cols,&__t1939t__);
  __t_errcode=alloc__t508t(&__t1938t__unsafe_ptr,&__t1938t__unsafe_size,&__t1938t__unsafe_offset,&__t1938t__unsafe_align,__t1939t__,&__t1940t__unsafe_ptr,&__t1940t__unsafe_size,&__t1940t__unsafe_offset,&__t1940t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1940t__unsafe_ptr;
  buf__unsafe_size=__t1940t__unsafe_size;
  buf__unsafe_offset=__t1940t__unsafe_offset;
  buf__unsafe_align=__t1940t__unsafe_align;
  __t1942t=0;
  mat__t1323t(buf__unsafe_ptr,__t1942t,rows,cols,cols,&__t1943t__unsafe_ptr,&__t1943t__pos,&__t1943t__rows,&__t1943t__cols,&__t1943t__stride);
  goto __t_return;
  
  __t_failure:__t1941t____t510t=0;
  neq__t142t(__t1940t__unsafe_size,__t1941t____t510t,&__t1941t____t511t__);
  if(__t1941t____t511t__){
  __t1940t__unsafe_size=0;
  __t1940t__unsafe_size=__t1940t__unsafe_size;
  __t1943t__unsafe_ptr=__t1943t__unsafe_ptr;
  free__t501t(&__t1943t__unsafe_ptr);
  }
  __t_return:
  *__t2527t=__t1943t__unsafe_ptr;
  *__t2528t=__t1943t__pos;
  *__t2529t=__t1943t__rows;
  *__t2530t=__t1943t__cols;
  *__t2531t=__t1943t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2141t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2532t, uint64_t* __t2533t, uint64_t* __t2534t, uint64_t* __t2535t, uint64_t* __t2536t) {
  char __t2142t__=0;
  char* __t2143t__unsafe_ptr=0;
  uint64_t __t2143t__pos=0;
  uint64_t __t2143t__rows=0;
  uint64_t __t2143t__cols=0;
  uint64_t __t2143t__stride=0;
  uint64_t __t2144t____t1941t____t510t=0;
  uint64_t __t2144t____t1940t__unsafe_size=0;
  char __t2144t____t1941t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2145t__from=0;
  uint64_t __t2145t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2146t=0;
  uint64_t __t2147t__=0;
  uint64_t i=0;
  uint64_t __t2148t__from=0;
  uint64_t __t2148t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2149t=0;
  uint64_t __t2150t__=0;
  uint64_t j=0;
  double __t2151t=0;
  double __t2152t=0;
  double acc=0;
  uint64_t __t2153t__from=0;
  uint64_t __t2153t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2154t=0;
  uint64_t __t2155t__=0;
  uint64_t k=0;
  char* __t2156t__=0;
  double __t2157t__number=0;
  char* __t2158t__=0;
  double __t2159t__number=0;
  double __t2160t__=0;
  double __t2161t__=0;
  char* __t2162t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m1__cols,m2__rows,&__t2142t__);
  if(__t2142t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t_errcode=mat__t1937t(m1__rows,m2__cols,&__t2143t__unsafe_ptr,&__t2143t__pos,&__t2143t__rows,&__t2143t__cols,&__t2143t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2143t__unsafe_ptr;
  result__pos=__t2143t__pos;
  result__rows=__t2143t__rows;
  result__cols=__t2143t__cols;
  result__stride=__t2143t__stride;
  range__t460t(m1__rows,&__t2145t__from,&__t2145t__to);
  it_i__from=__t2145t__from;
  it_i__to=__t2145t__to;
  while(1){
  __t_complain=next__t469t(&it_i__from,it_i__to,&__t2147t__);
  __t2146t=__t_complain;
  i=__t2147t__;
  __t2146t=__t2146t==0;
  if(!__t2146t){
  break;
  }
  range__t460t(m2__cols,&__t2148t__from,&__t2148t__to);
  it_j__from=__t2148t__from;
  it_j__to=__t2148t__to;
  while(1){
  __t_complain=next__t469t(&it_j__from,it_j__to,&__t2150t__);
  __t2149t=__t_complain;
  j=__t2150t__;
  __t2149t=__t2149t==0;
  if(!__t2149t){
  break;
  }
  __t2151t=0.0;
  __t2152t=__t2151t;
  acc=__t2152t;
  range__t460t(m1__cols,&__t2153t__from,&__t2153t__to);
  it_k__from=__t2153t__from;
  it_k__to=__t2153t__to;
  while(1){
  __t_complain=next__t469t(&it_k__from,it_k__to,&__t2155t__);
  __t2154t=__t_complain;
  k=__t2155t__;
  __t2154t=__t2154t==0;
  if(!__t2154t){
  break;
  }
  __t_errcode=get__t1995t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2156t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2156t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2157t__number,__t2156t__,8);
  __t_errcode=get__t1995t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2158t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2158t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2159t__number,__t2158t__,8);
  mul__t172t(__t2157t__number,__t2159t__number,&__t2160t__);
  add__t148t(acc,__t2160t__,&__t2161t__);
  acc=__t2161t__;
  }
  __t_errcode=mutget__t1986t(result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2162t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2162t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2162t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:__t2144t____t1941t____t510t=0;
  neq__t142t(__t2144t____t1940t__unsafe_size,__t2144t____t1941t____t510t,&__t2144t____t1941t____t511t__);
  if(__t2144t____t1941t____t511t__){
  __t2144t____t1940t__unsafe_size=0;
  __t2144t____t1940t__unsafe_size=__t2144t____t1940t__unsafe_size;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t501t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2532t=result__unsafe_ptr;
  *__t2533t=result__pos;
  *__t2534t=result__rows;
  *__t2535t=result__cols;
  *__t2536t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2279t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2280t=0;
  const char* endl=0;
  uint64_t __t2281t__from=0;
  uint64_t __t2281t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2282t=0;
  uint64_t __t2283t__=0;
  uint64_t i=0;
  uint64_t __t2284t=0;
  char __t2285t__=0;
  uint64_t __t2287t=0;
  char __t2288t__=0;
  uint64_t __t2289t=0;
  char __t2290t__=0;
  char __t2291t=0;
  uint64_t __t2293t=0;
  char __t2294t__=0;
  uint64_t __t2295t=0;
  char __t2296t__=0;
  uint64_t __t2297t=0;
  uint64_t __t2298t__=0;
  char __t2299t__=0;
  char __t2300t=0;
  char __t2301t=0;
  uint64_t __t2303t=0;
  char __t2304t__=0;
  uint64_t __t2305t=0;
  uint64_t __t2306t__=0;
  char __t2307t__=0;
  char __t2308t=0;
  uint64_t __t2310t__from=0;
  uint64_t __t2310t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2311t=0;
  uint64_t __t2312t__=0;
  uint64_t j=0;
  char* __t2313t__=0;
  double __t2314t__number=0;
  uint64_t __t2316t=0;
  uint64_t __t2317t__=0;
  char __t2318t__=0;
  uint64_t __t2320t=0;
  char __t2321t__=0;
  uint64_t __t2323t=0;
  char __t2324t__=0;
  uint64_t __t2325t=0;
  char __t2326t__=0;
  char __t2327t=0;
  uint64_t __t2329t=0;
  char __t2330t__=0;
  uint64_t __t2331t=0;
  char __t2332t__=0;
  uint64_t __t2333t=0;
  uint64_t __t2334t__=0;
  char __t2335t__=0;
  char __t2336t=0;
  char __t2337t=0;
  uint64_t __t2339t=0;
  char __t2340t__=0;
  uint64_t __t2341t=0;
  uint64_t __t2342t__=0;
  char __t2343t__=0;
  char __t2344t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t370t;
  range__t460t(m__rows,&__t2281t__from,&__t2281t__to);
  it_i__from=__t2281t__from;
  it_i__to=__t2281t__to;
  while(1){
  __t_complain=next__t469t(&it_i__from,it_i__to,&__t2283t__);
  __t2282t=__t_complain;
  i=__t2283t__;
  __t2282t=__t2282t==0;
  if(!__t2282t){
  break;
  }
  __t2284t=1;
  eq__t118t(m__rows,__t2284t,&__t2285t__);
  if(__t2285t__){
  print__t366t(__t1900t,__t362t);
  }
  __t2287t=1;
  gt__t271t(m__rows,__t2287t,&__t2288t__);
  if(__t2288t__){
  __t2289t=0;
  eq__t118t(i,__t2289t,&__t2290t__);
  __t2291t=__t2290t__;
  }
  if(__t2291t){
  print__t366t(__t2218t,__t362t);
  }
  __t2293t=1;
  gt__t271t(m__rows,__t2293t,&__t2294t__);
  if(__t2294t__){
  __t2295t=0;
  gt__t271t(i,__t2295t,&__t2296t__);
  if(__t2296t__){
  __t2297t=1;
  __t_errcode=sub__t347t(m__rows,__t2297t,&__t2298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2298t__,&__t2299t__);
  __t2300t=__t2299t__;
  }
  __t2301t=__t2300t;
  }
  if(__t2301t){
  print__t366t(__t2229t,__t362t);
  }
  __t2303t=1;
  gt__t271t(m__rows,__t2303t,&__t2304t__);
  if(__t2304t__){
  __t2305t=1;
  __t_errcode=sub__t347t(m__rows,__t2305t,&__t2306t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2306t__,&__t2307t__);
  __t2308t=__t2307t__;
  }
  if(__t2308t){
  print__t366t(__t2237t,__t362t);
  }
  range__t460t(m__cols,&__t2310t__from,&__t2310t__to);
  it_j__from=__t2310t__from;
  it_j__to=__t2310t__to;
  while(1){
  __t_complain=next__t469t(&it_j__from,it_j__to,&__t2312t__);
  __t2311t=__t_complain;
  j=__t2312t__;
  __t2311t=__t2311t==0;
  if(!__t2311t){
  break;
  }
  __t_errcode=get__t1995t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2313t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2313t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2314t__number,__t2313t__,8);
  print__t371t(__t2314t__number,__t362t);
  __t2316t=1;
  __t_errcode=sub__t347t(m__cols,__t2316t,&__t2317t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(j,__t2317t__,&__t2318t__);
  if(__t2318t__){
  print__t366t(__t1913t,__t362t);
  }
  }
  __t2320t=1;
  eq__t118t(m__rows,__t2320t,&__t2321t__);
  if(__t2321t__){
  print__t366t(__t1916t,__t362t);
  }
  __t2323t=1;
  gt__t271t(m__rows,__t2323t,&__t2324t__);
  if(__t2324t__){
  __t2325t=0;
  eq__t118t(i,__t2325t,&__t2326t__);
  __t2327t=__t2326t__;
  }
  if(__t2327t){
  print__t366t(__t2257t,__t362t);
  }
  __t2329t=1;
  gt__t271t(m__rows,__t2329t,&__t2330t__);
  if(__t2330t__){
  __t2331t=0;
  gt__t271t(i,__t2331t,&__t2332t__);
  if(__t2332t__){
  __t2333t=1;
  __t_errcode=sub__t347t(m__rows,__t2333t,&__t2334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2334t__,&__t2335t__);
  __t2336t=__t2335t__;
  }
  __t2337t=__t2336t;
  }
  if(__t2337t){
  print__t366t(__t2268t,__t362t);
  }
  __t2339t=1;
  gt__t271t(m__rows,__t2339t,&__t2340t__);
  if(__t2340t__){
  __t2341t=1;
  __t_errcode=sub__t347t(m__rows,__t2341t,&__t2342t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2342t__,&__t2343t__);
  __t2344t=__t2343t__;
  }
  if(__t2344t){
  print__t366t(__t2276t,__t362t);
  }
  print__t366t(__t362t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2347t() {
  double __t2349t=0;
  double __t2354t=0;
  double __t2355t=0;
  double __t2356t=0;
  double __t2357t=0;
  double __t2358t=0;
  char* __t2359t__unsafe_ptr=0;
  uint64_t __t2359t__unsafe_size=0;
  uint16_t __t2359t__unsafe_offset=0;
  uint16_t __t2359t__unsafe_align=0;
  uint64_t __t2360t=0;
  char* __t2361t__unsafe_ptr=0;
  uint64_t __t2361t__unsafe_size=0;
  uint16_t __t2361t__unsafe_offset=0;
  uint16_t __t2361t__unsafe_align=0;
  uint64_t __t2362t____t510t=0;
  char __t2362t____t511t__=0;
  uint64_t __t2363t=0;
  char* __t2364t__unsafe_ptr=0;
  uint64_t __t2364t__pos=0;
  uint64_t __t2364t__rows=0;
  uint64_t __t2364t__cols=0;
  uint64_t __t2364t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2365t=0;
  uint64_t __t2366t=0;
  char* __t2367t__=0;
  double __t2368t=0;
  double __t2369t=0;
  double __t2374t=0;
  double __t2375t=0;
  char* __t2376t__unsafe_ptr=0;
  uint64_t __t2376t__unsafe_size=0;
  uint16_t __t2376t__unsafe_offset=0;
  uint16_t __t2376t__unsafe_align=0;
  uint64_t __t2377t=0;
  char* __t2378t__unsafe_ptr=0;
  uint64_t __t2378t__unsafe_size=0;
  uint16_t __t2378t__unsafe_offset=0;
  uint16_t __t2378t__unsafe_align=0;
  uint64_t __t2379t____t510t=0;
  char __t2379t____t511t__=0;
  char* __t2380t__unsafe_ptr=0;
  uint64_t __t2380t__pos=0;
  uint64_t __t2380t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2382t__value=0;
  const char* __t2382t____t362t=0;
  char* __t2384t__unsafe_ptr=0;
  uint64_t __t2384t__pos=0;
  uint64_t __t2384t__length=0;
  uint64_t __t2385t____t2034t____t1368t____t510t=0;
  char __t2385t____t2034t____t1368t____t511t__=0;
  double __t2387t=0;
  double __t2392t=0;
  char* __t2393t__unsafe_ptr=0;
  uint64_t __t2393t__unsafe_size=0;
  uint16_t __t2393t__unsafe_offset=0;
  uint16_t __t2393t__unsafe_align=0;
  uint64_t __t2394t=0;
  char* __t2395t__unsafe_ptr=0;
  uint64_t __t2395t__unsafe_size=0;
  uint16_t __t2395t__unsafe_offset=0;
  uint16_t __t2395t__unsafe_align=0;
  uint64_t __t2396t____t510t=0;
  char __t2396t____t511t__=0;
  char* __t2397t__unsafe_ptr=0;
  uint64_t __t2397t__pos=0;
  uint64_t __t2397t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2399t__value=0;
  const char* __t2399t____t362t=0;
  char* __t2401t__unsafe_ptr=0;
  uint64_t __t2401t__pos=0;
  uint64_t __t2401t__length=0;
  uint64_t __t2402t____t2089t____t1368t____t510t=0;
  char __t2402t____t2089t____t1368t____t511t__=0;
  double __t2404t=0;
  double __t2409t=0;
  double __t2410t=0;
  double __t2411t=0;
  double __t2412t=0;
  double __t2413t=0;
  char* __t2414t__unsafe_ptr=0;
  uint64_t __t2414t__unsafe_size=0;
  uint16_t __t2414t__unsafe_offset=0;
  uint16_t __t2414t__unsafe_align=0;
  uint64_t __t2415t=0;
  char* __t2416t__unsafe_ptr=0;
  uint64_t __t2416t__unsafe_size=0;
  uint16_t __t2416t__unsafe_offset=0;
  uint16_t __t2416t__unsafe_align=0;
  uint64_t __t2417t____t510t=0;
  char __t2417t____t511t__=0;
  uint64_t __t2418t=0;
  char* __t2419t__unsafe_ptr=0;
  uint64_t __t2419t__pos=0;
  uint64_t __t2419t__rows=0;
  uint64_t __t2419t__cols=0;
  uint64_t __t2419t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2422t__unsafe_ptr=0;
  uint64_t __t2422t__pos=0;
  uint64_t __t2422t__rows=0;
  uint64_t __t2422t__cols=0;
  uint64_t __t2422t__stride=0;
  uint64_t __t2423t____t2144t____t1941t____t510t=0;
  uint64_t __t2423t____t2144t____t1940t__unsafe_size=0;
  char __t2423t____t2144t____t1941t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1325t();
  __t2349t=1.0;
  __t2354t=0.0;
  __t2355t=2.0;
  __t2356t=0.0;
  __t2357t=3.0;
  __t2358t=1.0;
  float____buffer__t2352t(&__t2359t__unsafe_ptr,&__t2359t__unsafe_size,&__t2359t__unsafe_offset,&__t2359t__unsafe_align);
  __t2360t=6;
  __t_errcode=alloc__t508t(&__t2359t__unsafe_ptr,&__t2359t__unsafe_size,&__t2359t__unsafe_offset,&__t2359t__unsafe_align,__t2360t,&__t2361t__unsafe_ptr,&__t2361t__unsafe_size,&__t2361t__unsafe_offset,&__t2361t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2359t__unsafe_ptr,&__t2349t,8);
  memcpy(__t2359t__unsafe_ptr+8,&__t2354t,8);
  memcpy(__t2359t__unsafe_ptr+16,&__t2355t,8);
  memcpy(__t2359t__unsafe_ptr+24,&__t2356t,8);
  memcpy(__t2359t__unsafe_ptr+32,&__t2357t,8);
  memcpy(__t2359t__unsafe_ptr+40,&__t2358t,8);
  __t2363t=2;
  __t_errcode=mat__t1958t(&__t2359t__unsafe_ptr,&__t2359t__unsafe_size,&__t2359t__unsafe_offset,&__t2359t__unsafe_align,__t2363t,&__t2364t__unsafe_ptr,&__t2364t__pos,&__t2364t__rows,&__t2364t__cols,&__t2364t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2364t__unsafe_ptr;
  a__pos=__t2364t__pos;
  a__rows=__t2364t__rows;
  a__cols=__t2364t__cols;
  a__stride=__t2364t__stride;
  __t2365t=0;
  __t2366t=0;
  __t_errcode=mutget__t1986t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2365t,__t2366t,&__t2367t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2368t=1.0;
  if(!__t2367t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2367t__,&__t2368t,8);
  __t2369t=1.0;
  __t2374t=2.0;
  __t2375t=3.0;
  float____buffer__t2372t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align);
  __t2377t=3;
  __t_errcode=alloc__t508t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align,__t2377t,&__t2378t__unsafe_ptr,&__t2378t__unsafe_size,&__t2378t__unsafe_offset,&__t2378t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2376t__unsafe_ptr,&__t2369t,8);
  memcpy(__t2376t__unsafe_ptr+8,&__t2374t,8);
  memcpy(__t2376t__unsafe_ptr+16,&__t2375t,8);
  __t_errcode=vec__t1371t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align,&__t2380t__unsafe_ptr,&__t2380t__pos,&__t2380t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2380t__unsafe_ptr;
  x__pos=__t2380t__pos;
  x__length=__t2380t__length;
  nn__t361t(__t2381t,&__t2382t__value,&__t2382t____t362t);
  print__t366t(__t2382t__value,__t2382t____t362t);
  __t_errcode=mul__t2031t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2384t__unsafe_ptr,&__t2384t__pos,&__t2384t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1918t(__t2384t__unsafe_ptr,__t2384t__pos,__t2384t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2387t=1.0;
  __t2392t=2.0;
  float____buffer__t2390t(&__t2393t__unsafe_ptr,&__t2393t__unsafe_size,&__t2393t__unsafe_offset,&__t2393t__unsafe_align);
  __t2394t=2;
  __t_errcode=alloc__t508t(&__t2393t__unsafe_ptr,&__t2393t__unsafe_size,&__t2393t__unsafe_offset,&__t2393t__unsafe_align,__t2394t,&__t2395t__unsafe_ptr,&__t2395t__unsafe_size,&__t2395t__unsafe_offset,&__t2395t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2393t__unsafe_ptr,&__t2387t,8);
  memcpy(__t2393t__unsafe_ptr+8,&__t2392t,8);
  __t_errcode=vec__t1371t(&__t2393t__unsafe_ptr,&__t2393t__unsafe_size,&__t2393t__unsafe_offset,&__t2393t__unsafe_align,&__t2397t__unsafe_ptr,&__t2397t__pos,&__t2397t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2397t__unsafe_ptr;
  u__pos=__t2397t__pos;
  u__length=__t2397t__length;
  nn__t361t(__t2398t,&__t2399t__value,&__t2399t____t362t);
  print__t366t(__t2399t__value,__t2399t____t362t);
  __t_errcode=mul__t2086t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2401t__unsafe_ptr,&__t2401t__pos,&__t2401t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1918t(__t2401t__unsafe_ptr,__t2401t__pos,__t2401t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2404t=1.0;
  __t2409t=2.0;
  __t2410t=3.0;
  __t2411t=4.0;
  __t2412t=5.0;
  __t2413t=6.0;
  float____buffer__t2407t(&__t2414t__unsafe_ptr,&__t2414t__unsafe_size,&__t2414t__unsafe_offset,&__t2414t__unsafe_align);
  __t2415t=6;
  __t_errcode=alloc__t508t(&__t2414t__unsafe_ptr,&__t2414t__unsafe_size,&__t2414t__unsafe_offset,&__t2414t__unsafe_align,__t2415t,&__t2416t__unsafe_ptr,&__t2416t__unsafe_size,&__t2416t__unsafe_offset,&__t2416t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2414t__unsafe_ptr,&__t2404t,8);
  memcpy(__t2414t__unsafe_ptr+8,&__t2409t,8);
  memcpy(__t2414t__unsafe_ptr+16,&__t2410t,8);
  memcpy(__t2414t__unsafe_ptr+24,&__t2411t,8);
  memcpy(__t2414t__unsafe_ptr+32,&__t2412t,8);
  memcpy(__t2414t__unsafe_ptr+40,&__t2413t,8);
  __t2418t=3;
  __t_errcode=mat__t1958t(&__t2414t__unsafe_ptr,&__t2414t__unsafe_size,&__t2414t__unsafe_offset,&__t2414t__unsafe_align,__t2418t,&__t2419t__unsafe_ptr,&__t2419t__pos,&__t2419t__rows,&__t2419t__cols,&__t2419t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2419t__unsafe_ptr;
  b__pos=__t2419t__pos;
  b__rows=__t2419t__rows;
  b__cols=__t2419t__cols;
  b__stride=__t2419t__stride;
  print__t368t(__t2420t);
  __t_errcode=mul__t2141t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2422t__unsafe_ptr,&__t2422t__pos,&__t2422t__rows,&__t2422t__cols,&__t2422t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2279t(__t2422t__unsafe_ptr,__t2422t__pos,__t2422t__rows,__t2422t__cols,__t2422t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t2423t____t2144t____t1941t____t510t=0;
  neq__t142t(__t2423t____t2144t____t1940t__unsafe_size,__t2423t____t2144t____t1941t____t510t,&__t2423t____t2144t____t1941t____t511t__);
  if(__t2423t____t2144t____t1941t____t511t__){
  __t2423t____t2144t____t1940t__unsafe_size=0;
  __t2423t____t2144t____t1940t__unsafe_size=__t2423t____t2144t____t1940t__unsafe_size;
  __t2422t__unsafe_ptr=__t2422t__unsafe_ptr;
  free__t501t(&__t2422t__unsafe_ptr);
  }
  __t2417t____t510t=0;
  neq__t142t(__t2416t__unsafe_size,__t2417t____t510t,&__t2417t____t511t__);
  if(__t2417t____t511t__){
  __t2416t__unsafe_size=0;
  __t2416t__unsafe_size=__t2416t__unsafe_size;
  __t2416t__unsafe_ptr=__t2416t__unsafe_ptr;
  free__t501t(&__t2416t__unsafe_ptr);
  }
  __t2402t____t2089t____t1368t____t510t=0;
  neq__t142t(__t2401t__length,__t2402t____t2089t____t1368t____t510t,&__t2402t____t2089t____t1368t____t511t__);
  if(__t2402t____t2089t____t1368t____t511t__){
  __t2401t__length=0;
  __t2401t__length=__t2401t__length;
  __t2401t__unsafe_ptr=__t2401t__unsafe_ptr;
  free__t501t(&__t2401t__unsafe_ptr);
  }
  __t2396t____t510t=0;
  neq__t142t(__t2395t__unsafe_size,__t2396t____t510t,&__t2396t____t511t__);
  if(__t2396t____t511t__){
  __t2395t__unsafe_size=0;
  __t2395t__unsafe_size=__t2395t__unsafe_size;
  __t2395t__unsafe_ptr=__t2395t__unsafe_ptr;
  free__t501t(&__t2395t__unsafe_ptr);
  }
  __t2385t____t2034t____t1368t____t510t=0;
  neq__t142t(__t2384t__length,__t2385t____t2034t____t1368t____t510t,&__t2385t____t2034t____t1368t____t511t__);
  if(__t2385t____t2034t____t1368t____t511t__){
  __t2384t__length=0;
  __t2384t__length=__t2384t__length;
  __t2384t__unsafe_ptr=__t2384t__unsafe_ptr;
  free__t501t(&__t2384t__unsafe_ptr);
  }
  __t2379t____t510t=0;
  neq__t142t(__t2378t__unsafe_size,__t2379t____t510t,&__t2379t____t511t__);
  if(__t2379t____t511t__){
  __t2378t__unsafe_size=0;
  __t2378t__unsafe_size=__t2378t__unsafe_size;
  __t2378t__unsafe_ptr=__t2378t__unsafe_ptr;
  free__t501t(&__t2378t__unsafe_ptr);
  }
  __t2362t____t510t=0;
  neq__t142t(__t2361t__unsafe_size,__t2362t____t510t,&__t2362t____t511t__);
  if(__t2362t____t511t__){
  __t2361t__unsafe_size=0;
  __t2361t__unsafe_size=__t2361t__unsafe_size;
  __t2361t__unsafe_ptr=__t2361t__unsafe_ptr;
  free__t501t(&__t2361t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2347t();return 0;}