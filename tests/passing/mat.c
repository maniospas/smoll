#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2311t=" ⎤";
const char* const __t2435t="a*x";
const char* const __t1958t=" ]";
const char* const __t2283t="⎢ ";
const char* const __t1942t="[ ";
const char* const __t2330t=" ⎦";
const char* const __t2452t="u*a";
const char* const __t2272t="⎡ ";
const char* const __t1955t="  ";
const char* const __t2291t="⎣ ";
const char* const __t363t="";
const char* const __t2322t=" ⎥";
const char* const __t2474t="a*b";
const char* const __t371t="\n";
static const char* __t_all_errcodes[49] = {"noerr",
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

static inline __attribute__((always_inline)) void new__t1351t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2406t(char** __t2479t, uint64_t* __t2480t, uint16_t* __t2481t, uint16_t* __t2482t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2479t=unsafe_ptr;
  *__t2480t=unsafe_size;
  *__t2481t=unsafe_offset;
  *__t2482t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2483t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2483t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2484t) {
  char* allocated=*__t2484t;
  if(allocated){
  free(allocated);
  }
  *__t2484t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2485t) {
  int value=0;
  *__t2485t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2486t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2486t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2487t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2487t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2488t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2488t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2489t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2489t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2490t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2490t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2491t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2491t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2492t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2492t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2493t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2493t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2494t, uint64_t* __t2495t, uint16_t* __t2496t, uint16_t* __t2497t, uint64_t size, char** __t2498t, uint64_t* __t2499t, uint16_t* __t2500t, uint16_t* __t2501t) {
  char* buffer__unsafe_ptr=*__t2494t;
  uint64_t buffer__unsafe_size=*__t2495t;
  uint16_t buffer__unsafe_offset=*__t2496t;
  uint16_t buffer__unsafe_align=*__t2497t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2494t=buffer__unsafe_ptr;
  *__t2495t=buffer__unsafe_size;
  *__t2496t=buffer__unsafe_offset;
  *__t2497t=buffer__unsafe_align;
  *__t2498t=buffer__unsafe_ptr;
  *__t2499t=buffer__unsafe_size;
  *__t2500t=buffer__unsafe_offset;
  *__t2501t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2502t) {
  goto __t_return;
  __t_return:
  *__t2502t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t2503t) {
  int __t222t__=0;
  uint64_t zero=0;
  char __t223t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t222t__);
  zero=0;
  eq__t119t(y,zero,&__t223t__);
  if(__t223t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2503t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2504t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2504t=z;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2505t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2505t=z;
}

static inline __attribute__((always_inline)) void mat__t1348t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2506t, uint64_t* __t2507t, uint64_t* __t2508t, uint64_t* __t2509t, uint64_t* __t2510t) {
  char* __t1350t__unsafe_ptr=0;
  uint64_t __t1350t__pos=0;
  uint64_t __t1350t__rows=0;
  uint64_t __t1350t__cols=0;
  uint64_t __t1350t__stride=0;
  __t1350t__unsafe_ptr=unsafe_ptr;
  __t1350t__pos=pos;
  __t1350t__rows=rows;
  __t1350t__cols=cols;
  __t1350t__stride=stride;
  goto __t_return;
  __t_return:
  *__t2506t=__t1350t__unsafe_ptr;
  *__t2507t=__t1350t__pos;
  *__t2508t=__t1350t__rows;
  *__t2509t=__t1350t__cols;
  *__t2510t=__t1350t__stride;
}

static inline __attribute__((always_inline)) int mat__t1986t(char** __t2511t, uint64_t* __t2512t, uint16_t* __t2513t, uint16_t* __t2514t, uint64_t* __t2515t, uint64_t rows, uint64_t cols, char** __t2516t, uint64_t* __t2517t, uint64_t* __t2518t, uint64_t* __t2519t, uint64_t* __t2520t) {
  char* allocator__buf__unsafe_ptr=*__t2511t;
  uint64_t allocator__buf__unsafe_size=*__t2512t;
  uint16_t allocator__buf__unsafe_offset=*__t2513t;
  uint16_t allocator__buf__unsafe_align=*__t2514t;
  uint64_t allocator__pos=*__t2515t;
  uint64_t __t1987t__=0;
  uint64_t __t1988t=0;
  char __t1989t__=0;
  uint64_t __t1990t__=0;
  uint64_t __t1991t=0;
  char __t1992t__=0;
  uint64_t __t1993t__=0;
  uint64_t __t1994t__=0;
  uint64_t __t1995t__=0;
  char __t1996t__=0;
  uint64_t start=0;
  uint64_t __t1997t__=0;
  uint64_t __t1998t__=0;
  char* __t1999t__unsafe_ptr=0;
  uint64_t __t1999t__pos=0;
  uint64_t __t1999t__rows=0;
  uint64_t __t1999t__cols=0;
  uint64_t __t1999t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(allocator__buf__unsafe_align,&__t1987t__);
  __t1988t=8;
  neq__t143t(__t1987t__,__t1988t,&__t1989t__);
  if(__t1989t__){
  __t_errcode=40;
  goto __t_failure;
  }
  nat__t506t(allocator__buf__unsafe_offset,&__t1990t__);
  __t1991t=0;
  neq__t143t(__t1990t__,__t1991t,&__t1992t__);
  if(__t1992t__){
  __t_errcode=41;
  goto __t_failure;
  }
  mul__t195t(rows,cols,&__t1993t__);
  add__t171t(allocator__pos,__t1993t__,&__t1994t__);
  len__t598t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1995t__);
  gt__t272t(__t1994t__,__t1995t__,&__t1996t__);
  if(__t1996t__){
  __t_errcode=42;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t195t(rows,cols,&__t1997t__);
  add__t171t(allocator__pos,__t1997t__,&__t1998t__);
  allocator__pos=__t1998t__;
  mat__t1348t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t1999t__unsafe_ptr,&__t1999t__pos,&__t1999t__rows,&__t1999t__cols,&__t1999t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2511t=allocator__buf__unsafe_ptr;
  *__t2512t=allocator__buf__unsafe_size;
  *__t2513t=allocator__buf__unsafe_offset;
  *__t2514t=allocator__buf__unsafe_align;
  *__t2515t=allocator__pos;
  *__t2516t=__t1999t__unsafe_ptr;
  *__t2517t=__t1999t__pos;
  *__t2518t=__t1999t__rows;
  *__t2519t=__t1999t__cols;
  *__t2520t=__t1999t__stride;
  
  return __t_errcode;
}

int mat__t2009t(char** __t2521t, uint64_t* __t2522t, uint16_t* __t2523t, uint16_t* __t2524t, uint64_t rows, char** __t2525t, uint64_t* __t2526t, uint64_t* __t2527t, uint64_t* __t2528t, uint64_t* __t2529t) {
  char* buf__unsafe_ptr=*__t2521t;
  uint64_t buf__unsafe_size=*__t2522t;
  uint16_t buf__unsafe_offset=*__t2523t;
  uint16_t buf__unsafe_align=*__t2524t;
  uint64_t __t2010t__=0;
  uint64_t __t2011t__=0;
  uint64_t cols=0;
  uint64_t __t2012t__=0;
  uint64_t __t2013t__=0;
  char __t2014t__=0;
  uint64_t __t2015t=0;
  uint64_t __t2016t=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__pos=0;
  uint64_t __t2017t__rows=0;
  uint64_t __t2017t__cols=0;
  uint64_t __t2017t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2010t__);
  __t_errcode=div__t221t(__t2010t__,rows,&__t2011t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2011t__;
  mul__t195t(cols,rows,&__t2012t__);
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2013t__);
  neq__t143t(__t2012t__,__t2013t__,&__t2014t__);
  if(__t2014t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t2015t=0;
  __t2016t=__t2015t;
  __t_errcode=mat__t1986t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t2016t,rows,cols,&__t2017t__unsafe_ptr,&__t2017t__pos,&__t2017t__rows,&__t2017t__cols,&__t2017t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2521t=buf__unsafe_ptr;
  *__t2522t=buf__unsafe_size;
  *__t2523t=buf__unsafe_offset;
  *__t2524t=buf__unsafe_align;
  *__t2525t=__t2017t__unsafe_ptr;
  *__t2526t=__t2017t__pos;
  *__t2527t=__t2017t__rows;
  *__t2528t=__t2017t__cols;
  *__t2529t=__t2017t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2530t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2530t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2531t) {
  *__t2531t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2532t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2532t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t2037t(char** __t2533t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2534t) {
  char* m__unsafe_ptr=*__t2533t;
  char __t2038t__=0;
  char __t2039t__=0;
  uint64_t __t2040t=0;
  uint64_t __t2041t__=0;
  uint64_t __t2042t__=0;
  uint64_t __t2043t__=0;
  uint64_t __t2044t__=0;
  char* __t2045t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,m__rows,&__t2038t__);
  if(__t2038t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t320t(j,m__cols,&__t2039t__);
  if(__t2039t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t2040t=8;
  mul__t195t(i,m__stride,&__t2041t__);
  add__t171t(__t2041t__,j,&__t2042t__);
  add__t171t(m__pos,__t2042t__,&__t2043t__);
  mul__t195t(__t2040t,__t2043t__,&__t2044t__);
  add__t504t(m__unsafe_ptr,__t2044t__,&__t2045t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2533t=m__unsafe_ptr;
  *__t2534t=__t2045t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2426t(char** __t2535t, uint64_t* __t2536t, uint16_t* __t2537t, uint16_t* __t2538t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2535t=unsafe_ptr;
  *__t2536t=unsafe_size;
  *__t2537t=unsafe_offset;
  *__t2538t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1345t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2539t, uint64_t* __t2540t, uint64_t* __t2541t) {
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__pos=0;
  uint64_t __t1347t__length=0;
  __t1347t__unsafe_ptr=unsafe_ptr;
  __t1347t__pos=pos;
  __t1347t__length=length;
  goto __t_return;
  __t_return:
  *__t2539t=__t1347t__unsafe_ptr;
  *__t2540t=__t1347t__pos;
  *__t2541t=__t1347t__length;
}

static inline __attribute__((always_inline)) int vec__t1397t(char** __t2542t, uint64_t* __t2543t, uint16_t* __t2544t, uint16_t* __t2545t, char** __t2546t, uint64_t* __t2547t, uint64_t* __t2548t) {
  char* buf__unsafe_ptr=*__t2542t;
  uint64_t buf__unsafe_size=*__t2543t;
  uint16_t buf__unsafe_offset=*__t2544t;
  uint16_t buf__unsafe_align=*__t2545t;
  uint64_t __t1398t__=0;
  uint64_t __t1399t=0;
  char __t1400t__=0;
  uint64_t __t1401t__=0;
  uint64_t __t1402t=0;
  char __t1403t__=0;
  uint64_t __t1404t=0;
  uint64_t __t1405t__=0;
  char* __t1406t__unsafe_ptr=0;
  uint64_t __t1406t__pos=0;
  uint64_t __t1406t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(buf__unsafe_align,&__t1398t__);
  __t1399t=8;
  neq__t143t(__t1398t__,__t1399t,&__t1400t__);
  if(__t1400t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t1401t__);
  __t1402t=0;
  neq__t143t(__t1401t__,__t1402t,&__t1403t__);
  if(__t1403t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1404t=0;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1405t__);
  vec__t1345t(buf__unsafe_ptr,__t1404t,__t1405t__,&__t1406t__unsafe_ptr,&__t1406t__pos,&__t1406t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2542t=buf__unsafe_ptr;
  *__t2543t=buf__unsafe_size;
  *__t2544t=buf__unsafe_offset;
  *__t2545t=buf__unsafe_align;
  *__t2546t=__t1406t__unsafe_ptr;
  *__t2547t=__t1406t__pos;
  *__t2548t=__t1406t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t362t(const char* value, const char** __t2549t, const char** __t2550t) {
  goto __t_return;
  __t_return:
  *__t2549t=value;
  *__t2550t=__t363t;
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1357t(char** __t2551t, uint64_t* __t2552t, uint16_t* __t2553t, uint16_t* __t2554t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2551t=unsafe_ptr;
  *__t2552t=unsafe_size;
  *__t2553t=unsafe_offset;
  *__t2554t=unsafe_align;
}

int vec__t1391t(uint64_t length, char** __t2555t, uint64_t* __t2556t, uint64_t* __t2557t) {
  char* __t1392t__unsafe_ptr=0;
  uint64_t __t1392t__unsafe_size=0;
  uint16_t __t1392t__unsafe_offset=0;
  uint16_t __t1392t__unsafe_align=0;
  char* __t1393t__unsafe_ptr=0;
  uint64_t __t1393t__unsafe_size=0;
  uint16_t __t1393t__unsafe_offset=0;
  uint16_t __t1393t__unsafe_align=0;
  char __t1394t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1395t=0;
  char* __t1396t__unsafe_ptr=0;
  uint64_t __t1396t__pos=0;
  uint64_t __t1396t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1357t(&__t1392t__unsafe_ptr,&__t1392t__unsafe_size,&__t1392t__unsafe_offset,&__t1392t__unsafe_align);
  __t_errcode=alloc__t509t(&__t1392t__unsafe_ptr,&__t1392t__unsafe_size,&__t1392t__unsafe_offset,&__t1392t__unsafe_align,length,&__t1393t__unsafe_ptr,&__t1393t__unsafe_size,&__t1393t__unsafe_offset,&__t1393t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1395t=0;
  vec__t1345t(__t1393t__unsafe_ptr,__t1395t,length,&__t1396t__unsafe_ptr,&__t1396t__pos,&__t1396t__length);
  __t1396t__unsafe_ptr=__t1393t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1396t__unsafe_ptr,&__t1394t____t511t__);
  if(__t1394t____t511t__){
  free__t502t(&__t1396t__unsafe_ptr);
  }
  __t_return:
  *__t2555t=__t1396t__unsafe_ptr;
  *__t2556t=__t1396t__pos;
  *__t2557t=__t1396t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t2558t, uint64_t* __t2559t) {
  int __t462t=0;
  uint64_t __t463t=0;
  uint64_t _from=0;
  uint64_t __t464t=0;
  uint64_t from=0;
  __t463t=0;
  _from=__t463t;
  __t464t=_from;
  from=__t464t;
  goto __t_return;
  __t_return:
  *__t2558t=from;
  *__t2559t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t2560t, uint64_t r__to, uint64_t* __t2561t) {
  uint64_t r__from=*__t2560t;
  char __t471t__=0;
  uint64_t ret=0;
  uint64_t __t472t=0;
  uint64_t __t473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(r__from,r__to,&__t471t__);
  if(__t471t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t472t=1;
  add__t171t(ret,__t472t,&__t473t__);
  r__from=__t473t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2560t=r__from;
  *__t2561t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2046t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2562t) {
  char __t2047t__=0;
  char __t2048t__=0;
  uint64_t __t2049t=0;
  uint64_t __t2050t__=0;
  uint64_t __t2051t__=0;
  uint64_t __t2052t__=0;
  uint64_t __t2053t__=0;
  char* __t2054t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,m__rows,&__t2047t__);
  if(__t2047t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t320t(j,m__cols,&__t2048t__);
  if(__t2048t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t2049t=8;
  mul__t195t(i,m__stride,&__t2050t__);
  add__t171t(__t2050t__,j,&__t2051t__);
  add__t171t(m__pos,__t2051t__,&__t2052t__);
  mul__t195t(__t2049t,__t2052t__,&__t2053t__);
  add__t504t(m__unsafe_ptr,__t2053t__,&__t2054t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2562t=__t2054t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1452t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2563t) {
  char __t1453t__=0;
  uint64_t __t1454t=0;
  uint64_t __t1455t__=0;
  uint64_t __t1456t__=0;
  char* __t1457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1453t__);
  if(__t1453t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1454t=8;
  add__t171t(i,v__pos,&__t1455t__);
  mul__t195t(__t1454t,__t1455t__,&__t1456t__);
  add__t504t(v__unsafe_ptr,__t1456t__,&__t1457t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2563t=__t1457t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2564t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2564t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2565t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2565t=z;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2566t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2566t=z;
}

static inline __attribute__((always_inline)) int mutget__t1446t(char** __t2567t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2568t) {
  char* v__unsafe_ptr=*__t2567t;
  char __t1447t__=0;
  uint64_t __t1448t=0;
  uint64_t __t1449t__=0;
  uint64_t __t1450t__=0;
  char* __t1451t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1447t__);
  if(__t1447t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1448t=8;
  add__t171t(i,v__pos,&__t1449t__);
  mul__t195t(__t1448t,__t1449t__,&__t1450t__);
  add__t504t(v__unsafe_ptr,__t1450t__,&__t1451t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2567t=v__unsafe_ptr;
  *__t2568t=__t1451t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2085t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2569t, uint64_t* __t2570t, uint64_t* __t2571t) {
  char __t2086t__=0;
  char* __t2087t__unsafe_ptr=0;
  uint64_t __t2087t__pos=0;
  uint64_t __t2087t__length=0;
  char __t2088t____t1394t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2089t__from=0;
  uint64_t __t2089t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2090t=0;
  uint64_t __t2091t__=0;
  uint64_t i=0;
  double __t2092t=0;
  double __t2093t=0;
  double acc=0;
  uint64_t __t2094t__from=0;
  uint64_t __t2094t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2095t=0;
  uint64_t __t2096t__=0;
  uint64_t j=0;
  char* __t2097t__=0;
  double __t2098t__value=0;
  char* __t2099t__=0;
  double __t2100t__value=0;
  double __t2101t__=0;
  double __t2102t__=0;
  char* __t2103t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m__cols,v__length,&__t2086t__);
  if(__t2086t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1391t(m__rows,&__t2087t__unsafe_ptr,&__t2087t__pos,&__t2087t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2087t__unsafe_ptr;
  result__pos=__t2087t__pos;
  result__length=__t2087t__length;
  range__t461t(m__rows,&__t2089t__from,&__t2089t__to);
  it_i__from=__t2089t__from;
  it_i__to=__t2089t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2091t__);
  __t2090t=__t_complain;
  i=__t2091t__;
  __t2090t=__t2090t==0;
  if(!__t2090t){
  break;
  }
  __t2092t=0.0;
  __t2093t=__t2092t;
  acc=__t2093t;
  range__t461t(m__cols,&__t2094t__from,&__t2094t__to);
  it_j__from=__t2094t__from;
  it_j__to=__t2094t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2096t__);
  __t2095t=__t_complain;
  j=__t2096t__;
  __t2095t=__t2095t==0;
  if(!__t2095t){
  break;
  }
  __t_errcode=get__t2046t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2097t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2097t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2098t__value,__t2097t__,8);
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,j,&__t2099t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2099t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2100t__value,__t2099t__,8);
  mul__t173t(__t2098t__value,__t2100t__value,&__t2101t__);
  add__t149t(acc,__t2101t__,&__t2102t__);
  acc=__t2102t__;
  }
  __t_errcode=mutget__t1446t(&result__unsafe_ptr,result__pos,result__length,i,&__t2103t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2103t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2103t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2088t____t1394t____t511t__);
  if(__t2088t____t1394t____t511t__){
  free__t502t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2569t=result__unsafe_ptr;
  *__t2570t=result__pos;
  *__t2571t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t364t(double value, double* __t2572t, const char** __t2573t) {
  goto __t_return;
  __t_return:
  *__t2572t=value;
  *__t2573t=__t363t;
}

static inline __attribute__((always_inline)) void print__t372t(double value, const char* endl) {
  int __t373t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t2574t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2574t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t2575t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2575t=z;
  
  return __t_errcode;
}

int print__t1960t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t1961t=0;
  const char* endl=0;
  const char* __t1962t__value=0;
  const char* __t1962t____t363t=0;
  uint64_t __t1964t__from=0;
  uint64_t __t1964t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1965t=0;
  uint64_t __t1966t__=0;
  uint64_t i=0;
  char* __t1967t__=0;
  double __t1968t__value=0;
  double __t1969t__value=0;
  const char* __t1969t____t363t=0;
  uint64_t __t1971t=0;
  uint64_t __t1972t__=0;
  char __t1973t__=0;
  const char* __t1974t__value=0;
  const char* __t1974t____t363t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t371t;
  nn__t362t(__t1942t,&__t1962t__value,&__t1962t____t363t);
  print__t367t(__t1962t__value,__t1962t____t363t);
  range__t461t(v__length,&__t1964t__from,&__t1964t__to);
  it__from=__t1964t__from;
  it__to=__t1964t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1966t__);
  __t1965t=__t_complain;
  i=__t1966t__;
  __t1965t=__t1965t==0;
  if(!__t1965t){
  break;
  }
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,i,&__t1967t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1967t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1968t__value,__t1967t__,8);
  nn__t364t(__t1968t__value,&__t1969t__value,&__t1969t____t363t);
  print__t372t(__t1969t__value,__t1969t____t363t);
  __t1971t=1;
  __t_errcode=sub__t348t(v__length,__t1971t,&__t1972t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t1972t__,&__t1973t__);
  if(__t1973t__){
  nn__t362t(__t1955t,&__t1974t__value,&__t1974t____t363t);
  print__t367t(__t1974t__value,__t1974t____t363t);
  }
  }
  print__t367t(__t1958t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2444t(char** __t2576t, uint64_t* __t2577t, uint16_t* __t2578t, uint16_t* __t2579t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2576t=unsafe_ptr;
  *__t2577t=unsafe_size;
  *__t2578t=unsafe_offset;
  *__t2579t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2140t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2580t, uint64_t* __t2581t, uint64_t* __t2582t) {
  char __t2141t__=0;
  char* __t2142t__unsafe_ptr=0;
  uint64_t __t2142t__pos=0;
  uint64_t __t2142t__length=0;
  char __t2143t____t1394t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2144t__from=0;
  uint64_t __t2144t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2145t=0;
  uint64_t __t2146t__=0;
  uint64_t j=0;
  double __t2147t=0;
  double __t2148t=0;
  double acc=0;
  uint64_t __t2149t__from=0;
  uint64_t __t2149t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2150t=0;
  uint64_t __t2151t__=0;
  uint64_t i=0;
  char* __t2152t__=0;
  double __t2153t__value=0;
  char* __t2154t__=0;
  double __t2155t__value=0;
  double __t2156t__=0;
  double __t2157t__=0;
  char* __t2158t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v__length,m__rows,&__t2141t__);
  if(__t2141t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=vec__t1391t(m__cols,&__t2142t__unsafe_ptr,&__t2142t__pos,&__t2142t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2142t__unsafe_ptr;
  result__pos=__t2142t__pos;
  result__length=__t2142t__length;
  range__t461t(m__cols,&__t2144t__from,&__t2144t__to);
  it_j__from=__t2144t__from;
  it_j__to=__t2144t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2146t__);
  __t2145t=__t_complain;
  j=__t2146t__;
  __t2145t=__t2145t==0;
  if(!__t2145t){
  break;
  }
  __t2147t=0.0;
  __t2148t=__t2147t;
  acc=__t2148t;
  range__t461t(m__rows,&__t2149t__from,&__t2149t__to);
  it_i__from=__t2149t__from;
  it_i__to=__t2149t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2151t__);
  __t2150t=__t_complain;
  i=__t2151t__;
  __t2150t=__t2150t==0;
  if(!__t2150t){
  break;
  }
  __t_errcode=get__t1452t(v__unsafe_ptr,v__pos,v__length,i,&__t2152t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2152t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2153t__value,__t2152t__,8);
  __t_errcode=get__t2046t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2154t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2154t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2155t__value,__t2154t__,8);
  mul__t173t(__t2153t__value,__t2155t__value,&__t2156t__);
  add__t149t(acc,__t2156t__,&__t2157t__);
  acc=__t2157t__;
  }
  __t_errcode=mutget__t1446t(&result__unsafe_ptr,result__pos,result__length,j,&__t2158t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2158t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2158t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2143t____t1394t____t511t__);
  if(__t2143t____t1394t____t511t__){
  free__t502t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2580t=result__unsafe_ptr;
  *__t2581t=result__pos;
  *__t2582t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2461t(char** __t2583t, uint64_t* __t2584t, uint16_t* __t2585t, uint16_t* __t2586t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2583t=unsafe_ptr;
  *__t2584t=unsafe_size;
  *__t2585t=unsafe_offset;
  *__t2586t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t1979t(uint64_t rows, uint64_t cols, char** __t2587t, uint64_t* __t2588t, uint64_t* __t2589t, uint64_t* __t2590t, uint64_t* __t2591t) {
  char* __t1980t__unsafe_ptr=0;
  uint64_t __t1980t__unsafe_size=0;
  uint16_t __t1980t__unsafe_offset=0;
  uint16_t __t1980t__unsafe_align=0;
  uint64_t __t1981t__=0;
  char* __t1982t__unsafe_ptr=0;
  uint64_t __t1982t__unsafe_size=0;
  uint16_t __t1982t__unsafe_offset=0;
  uint16_t __t1982t__unsafe_align=0;
  char __t1983t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1984t=0;
  char* __t1985t__unsafe_ptr=0;
  uint64_t __t1985t__pos=0;
  uint64_t __t1985t__rows=0;
  uint64_t __t1985t__cols=0;
  uint64_t __t1985t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1357t(&__t1980t__unsafe_ptr,&__t1980t__unsafe_size,&__t1980t__unsafe_offset,&__t1980t__unsafe_align);
  mul__t195t(rows,cols,&__t1981t__);
  __t_errcode=alloc__t509t(&__t1980t__unsafe_ptr,&__t1980t__unsafe_size,&__t1980t__unsafe_offset,&__t1980t__unsafe_align,__t1981t__,&__t1982t__unsafe_ptr,&__t1982t__unsafe_size,&__t1982t__unsafe_offset,&__t1982t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1982t__unsafe_ptr;
  buf__unsafe_size=__t1982t__unsafe_size;
  buf__unsafe_offset=__t1982t__unsafe_offset;
  buf__unsafe_align=__t1982t__unsafe_align;
  __t1984t=0;
  mat__t1348t(buf__unsafe_ptr,__t1984t,rows,cols,cols,&__t1985t__unsafe_ptr,&__t1985t__pos,&__t1985t__rows,&__t1985t__cols,&__t1985t__stride);
  goto __t_return;
  
  __t_failure:exists__t436t(__t1985t__unsafe_ptr,&__t1983t____t511t__);
  if(__t1983t____t511t__){
  free__t502t(&__t1985t__unsafe_ptr);
  }
  __t_return:
  *__t2587t=__t1985t__unsafe_ptr;
  *__t2588t=__t1985t__pos;
  *__t2589t=__t1985t__rows;
  *__t2590t=__t1985t__cols;
  *__t2591t=__t1985t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2195t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2592t, uint64_t* __t2593t, uint64_t* __t2594t, uint64_t* __t2595t, uint64_t* __t2596t) {
  char __t2196t__=0;
  char* __t2197t__unsafe_ptr=0;
  uint64_t __t2197t__pos=0;
  uint64_t __t2197t__rows=0;
  uint64_t __t2197t__cols=0;
  uint64_t __t2197t__stride=0;
  char __t2198t____t1983t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2199t__from=0;
  uint64_t __t2199t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2200t=0;
  uint64_t __t2201t__=0;
  uint64_t i=0;
  uint64_t __t2202t__from=0;
  uint64_t __t2202t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2203t=0;
  uint64_t __t2204t__=0;
  uint64_t j=0;
  double __t2205t=0;
  double __t2206t=0;
  double acc=0;
  uint64_t __t2207t__from=0;
  uint64_t __t2207t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2208t=0;
  uint64_t __t2209t__=0;
  uint64_t k=0;
  char* __t2210t__=0;
  double __t2211t__value=0;
  char* __t2212t__=0;
  double __t2213t__value=0;
  double __t2214t__=0;
  double __t2215t__=0;
  char* __t2216t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m1__cols,m2__rows,&__t2196t__);
  if(__t2196t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t_errcode=mat__t1979t(m1__rows,m2__cols,&__t2197t__unsafe_ptr,&__t2197t__pos,&__t2197t__rows,&__t2197t__cols,&__t2197t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2197t__unsafe_ptr;
  result__pos=__t2197t__pos;
  result__rows=__t2197t__rows;
  result__cols=__t2197t__cols;
  result__stride=__t2197t__stride;
  range__t461t(m1__rows,&__t2199t__from,&__t2199t__to);
  it_i__from=__t2199t__from;
  it_i__to=__t2199t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2201t__);
  __t2200t=__t_complain;
  i=__t2201t__;
  __t2200t=__t2200t==0;
  if(!__t2200t){
  break;
  }
  range__t461t(m2__cols,&__t2202t__from,&__t2202t__to);
  it_j__from=__t2202t__from;
  it_j__to=__t2202t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2204t__);
  __t2203t=__t_complain;
  j=__t2204t__;
  __t2203t=__t2203t==0;
  if(!__t2203t){
  break;
  }
  __t2205t=0.0;
  __t2206t=__t2205t;
  acc=__t2206t;
  range__t461t(m1__cols,&__t2207t__from,&__t2207t__to);
  it_k__from=__t2207t__from;
  it_k__to=__t2207t__to;
  while(1){
  __t_complain=next__t470t(&it_k__from,it_k__to,&__t2209t__);
  __t2208t=__t_complain;
  k=__t2209t__;
  __t2208t=__t2208t==0;
  if(!__t2208t){
  break;
  }
  __t_errcode=get__t2046t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2210t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2210t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2211t__value,__t2210t__,8);
  __t_errcode=get__t2046t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2212t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2212t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2213t__value,__t2212t__,8);
  mul__t173t(__t2211t__value,__t2213t__value,&__t2214t__);
  add__t149t(acc,__t2214t__,&__t2215t__);
  acc=__t2215t__;
  }
  __t_errcode=mutget__t2037t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2216t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2216t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2216t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2198t____t1983t____t511t__);
  if(__t2198t____t1983t____t511t__){
  free__t502t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2592t=result__unsafe_ptr;
  *__t2593t=result__pos;
  *__t2594t=result__rows;
  *__t2595t=result__cols;
  *__t2596t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2333t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2334t=0;
  const char* endl=0;
  uint64_t __t2335t__from=0;
  uint64_t __t2335t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2336t=0;
  uint64_t __t2337t__=0;
  uint64_t i=0;
  uint64_t __t2338t=0;
  char __t2339t__=0;
  uint64_t __t2341t=0;
  char __t2342t__=0;
  uint64_t __t2343t=0;
  char __t2344t__=0;
  char __t2345t=0;
  uint64_t __t2347t=0;
  char __t2348t__=0;
  uint64_t __t2349t=0;
  char __t2350t__=0;
  uint64_t __t2351t=0;
  uint64_t __t2352t__=0;
  char __t2353t__=0;
  char __t2354t=0;
  char __t2355t=0;
  uint64_t __t2357t=0;
  char __t2358t__=0;
  uint64_t __t2359t=0;
  uint64_t __t2360t__=0;
  char __t2361t__=0;
  char __t2362t=0;
  uint64_t __t2364t__from=0;
  uint64_t __t2364t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2365t=0;
  uint64_t __t2366t__=0;
  uint64_t j=0;
  char* __t2367t__=0;
  double __t2368t__value=0;
  uint64_t __t2370t=0;
  uint64_t __t2371t__=0;
  char __t2372t__=0;
  uint64_t __t2374t=0;
  char __t2375t__=0;
  uint64_t __t2377t=0;
  char __t2378t__=0;
  uint64_t __t2379t=0;
  char __t2380t__=0;
  char __t2381t=0;
  uint64_t __t2383t=0;
  char __t2384t__=0;
  uint64_t __t2385t=0;
  char __t2386t__=0;
  uint64_t __t2387t=0;
  uint64_t __t2388t__=0;
  char __t2389t__=0;
  char __t2390t=0;
  char __t2391t=0;
  uint64_t __t2393t=0;
  char __t2394t__=0;
  uint64_t __t2395t=0;
  uint64_t __t2396t__=0;
  char __t2397t__=0;
  char __t2398t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t371t;
  range__t461t(m__rows,&__t2335t__from,&__t2335t__to);
  it_i__from=__t2335t__from;
  it_i__to=__t2335t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2337t__);
  __t2336t=__t_complain;
  i=__t2337t__;
  __t2336t=__t2336t==0;
  if(!__t2336t){
  break;
  }
  __t2338t=1;
  eq__t119t(m__rows,__t2338t,&__t2339t__);
  if(__t2339t__){
  print__t367t(__t1942t,__t363t);
  }
  __t2341t=1;
  gt__t272t(m__rows,__t2341t,&__t2342t__);
  if(__t2342t__){
  __t2343t=0;
  eq__t119t(i,__t2343t,&__t2344t__);
  __t2345t=__t2344t__;
  }
  if(__t2345t){
  print__t367t(__t2272t,__t363t);
  }
  __t2347t=1;
  gt__t272t(m__rows,__t2347t,&__t2348t__);
  if(__t2348t__){
  __t2349t=0;
  gt__t272t(i,__t2349t,&__t2350t__);
  if(__t2350t__){
  __t2351t=1;
  __t_errcode=sub__t348t(m__rows,__t2351t,&__t2352t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t2352t__,&__t2353t__);
  __t2354t=__t2353t__;
  }
  __t2355t=__t2354t;
  }
  if(__t2355t){
  print__t367t(__t2283t,__t363t);
  }
  __t2357t=1;
  gt__t272t(m__rows,__t2357t,&__t2358t__);
  if(__t2358t__){
  __t2359t=1;
  __t_errcode=sub__t348t(m__rows,__t2359t,&__t2360t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2360t__,&__t2361t__);
  __t2362t=__t2361t__;
  }
  if(__t2362t){
  print__t367t(__t2291t,__t363t);
  }
  range__t461t(m__cols,&__t2364t__from,&__t2364t__to);
  it_j__from=__t2364t__from;
  it_j__to=__t2364t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2366t__);
  __t2365t=__t_complain;
  j=__t2366t__;
  __t2365t=__t2365t==0;
  if(!__t2365t){
  break;
  }
  __t_errcode=get__t2046t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2367t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2367t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2368t__value,__t2367t__,8);
  print__t372t(__t2368t__value,__t363t);
  __t2370t=1;
  __t_errcode=sub__t348t(m__cols,__t2370t,&__t2371t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(j,__t2371t__,&__t2372t__);
  if(__t2372t__){
  print__t367t(__t1955t,__t363t);
  }
  }
  __t2374t=1;
  eq__t119t(m__rows,__t2374t,&__t2375t__);
  if(__t2375t__){
  print__t367t(__t1958t,__t363t);
  }
  __t2377t=1;
  gt__t272t(m__rows,__t2377t,&__t2378t__);
  if(__t2378t__){
  __t2379t=0;
  eq__t119t(i,__t2379t,&__t2380t__);
  __t2381t=__t2380t__;
  }
  if(__t2381t){
  print__t367t(__t2311t,__t363t);
  }
  __t2383t=1;
  gt__t272t(m__rows,__t2383t,&__t2384t__);
  if(__t2384t__){
  __t2385t=0;
  gt__t272t(i,__t2385t,&__t2386t__);
  if(__t2386t__){
  __t2387t=1;
  __t_errcode=sub__t348t(m__rows,__t2387t,&__t2388t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t2388t__,&__t2389t__);
  __t2390t=__t2389t__;
  }
  __t2391t=__t2390t;
  }
  if(__t2391t){
  print__t367t(__t2322t,__t363t);
  }
  __t2393t=1;
  gt__t272t(m__rows,__t2393t,&__t2394t__);
  if(__t2394t__){
  __t2395t=1;
  __t_errcode=sub__t348t(m__rows,__t2395t,&__t2396t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2396t__,&__t2397t__);
  __t2398t=__t2397t__;
  }
  if(__t2398t){
  print__t367t(__t2330t,__t363t);
  }
  print__t367t(__t363t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2401t() {
  double __t2403t=0;
  double __t2408t=0;
  double __t2409t=0;
  double __t2410t=0;
  double __t2411t=0;
  double __t2412t=0;
  char* __t2413t__unsafe_ptr=0;
  uint64_t __t2413t__unsafe_size=0;
  uint16_t __t2413t__unsafe_offset=0;
  uint16_t __t2413t__unsafe_align=0;
  uint64_t __t2414t=0;
  char* __t2415t__unsafe_ptr=0;
  uint64_t __t2415t__unsafe_size=0;
  uint16_t __t2415t__unsafe_offset=0;
  uint16_t __t2415t__unsafe_align=0;
  char __t2416t____t511t__=0;
  uint64_t __t2417t=0;
  char* __t2418t__unsafe_ptr=0;
  uint64_t __t2418t__pos=0;
  uint64_t __t2418t__rows=0;
  uint64_t __t2418t__cols=0;
  uint64_t __t2418t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2419t=0;
  uint64_t __t2420t=0;
  char* __t2421t__=0;
  double __t2422t=0;
  double __t2423t=0;
  double __t2428t=0;
  double __t2429t=0;
  char* __t2430t__unsafe_ptr=0;
  uint64_t __t2430t__unsafe_size=0;
  uint16_t __t2430t__unsafe_offset=0;
  uint16_t __t2430t__unsafe_align=0;
  uint64_t __t2431t=0;
  char* __t2432t__unsafe_ptr=0;
  uint64_t __t2432t__unsafe_size=0;
  uint16_t __t2432t__unsafe_offset=0;
  uint16_t __t2432t__unsafe_align=0;
  char __t2433t____t511t__=0;
  char* __t2434t__unsafe_ptr=0;
  uint64_t __t2434t__pos=0;
  uint64_t __t2434t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2436t__value=0;
  const char* __t2436t____t363t=0;
  char* __t2438t__unsafe_ptr=0;
  uint64_t __t2438t__pos=0;
  uint64_t __t2438t__length=0;
  char __t2439t____t2088t____t1394t____t511t__=0;
  double __t2441t=0;
  double __t2446t=0;
  char* __t2447t__unsafe_ptr=0;
  uint64_t __t2447t__unsafe_size=0;
  uint16_t __t2447t__unsafe_offset=0;
  uint16_t __t2447t__unsafe_align=0;
  uint64_t __t2448t=0;
  char* __t2449t__unsafe_ptr=0;
  uint64_t __t2449t__unsafe_size=0;
  uint16_t __t2449t__unsafe_offset=0;
  uint16_t __t2449t__unsafe_align=0;
  char __t2450t____t511t__=0;
  char* __t2451t__unsafe_ptr=0;
  uint64_t __t2451t__pos=0;
  uint64_t __t2451t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2453t__value=0;
  const char* __t2453t____t363t=0;
  char* __t2455t__unsafe_ptr=0;
  uint64_t __t2455t__pos=0;
  uint64_t __t2455t__length=0;
  char __t2456t____t2143t____t1394t____t511t__=0;
  double __t2458t=0;
  double __t2463t=0;
  double __t2464t=0;
  double __t2465t=0;
  double __t2466t=0;
  double __t2467t=0;
  char* __t2468t__unsafe_ptr=0;
  uint64_t __t2468t__unsafe_size=0;
  uint16_t __t2468t__unsafe_offset=0;
  uint16_t __t2468t__unsafe_align=0;
  uint64_t __t2469t=0;
  char* __t2470t__unsafe_ptr=0;
  uint64_t __t2470t__unsafe_size=0;
  uint16_t __t2470t__unsafe_offset=0;
  uint16_t __t2470t__unsafe_align=0;
  char __t2471t____t511t__=0;
  uint64_t __t2472t=0;
  char* __t2473t__unsafe_ptr=0;
  uint64_t __t2473t__pos=0;
  uint64_t __t2473t__rows=0;
  uint64_t __t2473t__cols=0;
  uint64_t __t2473t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2476t__unsafe_ptr=0;
  uint64_t __t2476t__pos=0;
  uint64_t __t2476t__rows=0;
  uint64_t __t2476t__cols=0;
  uint64_t __t2476t__stride=0;
  char __t2477t____t2198t____t1983t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1351t();
  __t2403t=1.0;
  __t2408t=0.0;
  __t2409t=2.0;
  __t2410t=0.0;
  __t2411t=3.0;
  __t2412t=1.0;
  float____buffer__t2406t(&__t2413t__unsafe_ptr,&__t2413t__unsafe_size,&__t2413t__unsafe_offset,&__t2413t__unsafe_align);
  __t2414t=6;
  __t_errcode=alloc__t509t(&__t2413t__unsafe_ptr,&__t2413t__unsafe_size,&__t2413t__unsafe_offset,&__t2413t__unsafe_align,__t2414t,&__t2415t__unsafe_ptr,&__t2415t__unsafe_size,&__t2415t__unsafe_offset,&__t2415t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2413t__unsafe_ptr,&__t2403t,8);
  memcpy(__t2413t__unsafe_ptr+8,&__t2408t,8);
  memcpy(__t2413t__unsafe_ptr+16,&__t2409t,8);
  memcpy(__t2413t__unsafe_ptr+24,&__t2410t,8);
  memcpy(__t2413t__unsafe_ptr+32,&__t2411t,8);
  memcpy(__t2413t__unsafe_ptr+40,&__t2412t,8);
  __t2417t=2;
  __t_errcode=mat__t2009t(&__t2413t__unsafe_ptr,&__t2413t__unsafe_size,&__t2413t__unsafe_offset,&__t2413t__unsafe_align,__t2417t,&__t2418t__unsafe_ptr,&__t2418t__pos,&__t2418t__rows,&__t2418t__cols,&__t2418t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2418t__unsafe_ptr;
  a__pos=__t2418t__pos;
  a__rows=__t2418t__rows;
  a__cols=__t2418t__cols;
  a__stride=__t2418t__stride;
  __t2419t=0;
  __t2420t=0;
  __t_errcode=mutget__t2037t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2419t,__t2420t,&__t2421t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2422t=1.0;
  if(!__t2421t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2421t__,&__t2422t,8);
  __t2423t=1.0;
  __t2428t=2.0;
  __t2429t=3.0;
  float____buffer__t2426t(&__t2430t__unsafe_ptr,&__t2430t__unsafe_size,&__t2430t__unsafe_offset,&__t2430t__unsafe_align);
  __t2431t=3;
  __t_errcode=alloc__t509t(&__t2430t__unsafe_ptr,&__t2430t__unsafe_size,&__t2430t__unsafe_offset,&__t2430t__unsafe_align,__t2431t,&__t2432t__unsafe_ptr,&__t2432t__unsafe_size,&__t2432t__unsafe_offset,&__t2432t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2430t__unsafe_ptr,&__t2423t,8);
  memcpy(__t2430t__unsafe_ptr+8,&__t2428t,8);
  memcpy(__t2430t__unsafe_ptr+16,&__t2429t,8);
  __t_errcode=vec__t1397t(&__t2430t__unsafe_ptr,&__t2430t__unsafe_size,&__t2430t__unsafe_offset,&__t2430t__unsafe_align,&__t2434t__unsafe_ptr,&__t2434t__pos,&__t2434t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2434t__unsafe_ptr;
  x__pos=__t2434t__pos;
  x__length=__t2434t__length;
  nn__t362t(__t2435t,&__t2436t__value,&__t2436t____t363t);
  print__t367t(__t2436t__value,__t2436t____t363t);
  __t_errcode=mul__t2085t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2438t__unsafe_ptr,&__t2438t__pos,&__t2438t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1960t(__t2438t__unsafe_ptr,__t2438t__pos,__t2438t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2441t=1.0;
  __t2446t=2.0;
  float____buffer__t2444t(&__t2447t__unsafe_ptr,&__t2447t__unsafe_size,&__t2447t__unsafe_offset,&__t2447t__unsafe_align);
  __t2448t=2;
  __t_errcode=alloc__t509t(&__t2447t__unsafe_ptr,&__t2447t__unsafe_size,&__t2447t__unsafe_offset,&__t2447t__unsafe_align,__t2448t,&__t2449t__unsafe_ptr,&__t2449t__unsafe_size,&__t2449t__unsafe_offset,&__t2449t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2447t__unsafe_ptr,&__t2441t,8);
  memcpy(__t2447t__unsafe_ptr+8,&__t2446t,8);
  __t_errcode=vec__t1397t(&__t2447t__unsafe_ptr,&__t2447t__unsafe_size,&__t2447t__unsafe_offset,&__t2447t__unsafe_align,&__t2451t__unsafe_ptr,&__t2451t__pos,&__t2451t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2451t__unsafe_ptr;
  u__pos=__t2451t__pos;
  u__length=__t2451t__length;
  nn__t362t(__t2452t,&__t2453t__value,&__t2453t____t363t);
  print__t367t(__t2453t__value,__t2453t____t363t);
  __t_errcode=mul__t2140t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2455t__unsafe_ptr,&__t2455t__pos,&__t2455t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1960t(__t2455t__unsafe_ptr,__t2455t__pos,__t2455t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2458t=1.0;
  __t2463t=2.0;
  __t2464t=3.0;
  __t2465t=4.0;
  __t2466t=5.0;
  __t2467t=6.0;
  float____buffer__t2461t(&__t2468t__unsafe_ptr,&__t2468t__unsafe_size,&__t2468t__unsafe_offset,&__t2468t__unsafe_align);
  __t2469t=6;
  __t_errcode=alloc__t509t(&__t2468t__unsafe_ptr,&__t2468t__unsafe_size,&__t2468t__unsafe_offset,&__t2468t__unsafe_align,__t2469t,&__t2470t__unsafe_ptr,&__t2470t__unsafe_size,&__t2470t__unsafe_offset,&__t2470t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2468t__unsafe_ptr,&__t2458t,8);
  memcpy(__t2468t__unsafe_ptr+8,&__t2463t,8);
  memcpy(__t2468t__unsafe_ptr+16,&__t2464t,8);
  memcpy(__t2468t__unsafe_ptr+24,&__t2465t,8);
  memcpy(__t2468t__unsafe_ptr+32,&__t2466t,8);
  memcpy(__t2468t__unsafe_ptr+40,&__t2467t,8);
  __t2472t=3;
  __t_errcode=mat__t2009t(&__t2468t__unsafe_ptr,&__t2468t__unsafe_size,&__t2468t__unsafe_offset,&__t2468t__unsafe_align,__t2472t,&__t2473t__unsafe_ptr,&__t2473t__pos,&__t2473t__rows,&__t2473t__cols,&__t2473t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2473t__unsafe_ptr;
  b__pos=__t2473t__pos;
  b__rows=__t2473t__rows;
  b__cols=__t2473t__cols;
  b__stride=__t2473t__stride;
  print__t369t(__t2474t);
  __t_errcode=mul__t2195t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2476t__unsafe_ptr,&__t2476t__pos,&__t2476t__rows,&__t2476t__cols,&__t2476t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2333t(__t2476t__unsafe_ptr,__t2476t__pos,__t2476t__rows,__t2476t__cols,__t2476t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t2476t__unsafe_ptr,&__t2477t____t2198t____t1983t____t511t__);
  if(__t2477t____t2198t____t1983t____t511t__){
  free__t502t(&__t2476t__unsafe_ptr);
  }
  exists__t436t(__t2470t__unsafe_ptr,&__t2471t____t511t__);
  if(__t2471t____t511t__){
  free__t502t(&__t2470t__unsafe_ptr);
  }
  exists__t436t(__t2455t__unsafe_ptr,&__t2456t____t2143t____t1394t____t511t__);
  if(__t2456t____t2143t____t1394t____t511t__){
  free__t502t(&__t2455t__unsafe_ptr);
  }
  exists__t436t(__t2449t__unsafe_ptr,&__t2450t____t511t__);
  if(__t2450t____t511t__){
  free__t502t(&__t2449t__unsafe_ptr);
  }
  exists__t436t(__t2438t__unsafe_ptr,&__t2439t____t2088t____t1394t____t511t__);
  if(__t2439t____t2088t____t1394t____t511t__){
  free__t502t(&__t2438t__unsafe_ptr);
  }
  exists__t436t(__t2432t__unsafe_ptr,&__t2433t____t511t__);
  if(__t2433t____t511t__){
  free__t502t(&__t2432t__unsafe_ptr);
  }
  exists__t436t(__t2415t__unsafe_ptr,&__t2416t____t511t__);
  if(__t2416t____t511t__){
  free__t502t(&__t2415t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2401t();return 0;}