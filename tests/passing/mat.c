#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t1962t=" ]";
const char* const __t2334t=" ⎦";
const char* const __t1959t="  ";
const char* const __t2295t="⎣ ";
const char* const __t2287t="⎢ ";
const char* const __t2456t="u*a";
const char* const __t2439t="a*x";
const char* const __t2276t="⎡ ";
const char* const __t2326t=" ⎥";
const char* const __t2478t="a*b";
const char* const __t363t="";
const char* const __t1946t="[ ";
const char* const __t371t="\n";
const char* const __t2315t=" ⎤";
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

static inline __attribute__((always_inline)) void new__t1355t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2410t(char** __t2483t, uint64_t* __t2484t, uint16_t* __t2485t, uint16_t* __t2486t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2483t=unsafe_ptr;
  *__t2484t=unsafe_size;
  *__t2485t=unsafe_offset;
  *__t2486t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2487t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2487t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2488t) {
  char* allocated=*__t2488t;
  if(allocated){
  free(allocated);
  }
  *__t2488t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2489t) {
  int value=0;
  *__t2489t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2490t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2490t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2491t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2491t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2492t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2492t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2493t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2493t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2494t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2494t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2495t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2495t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2496t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2496t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2497t) {
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
  *__t2497t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2498t, uint64_t* __t2499t, uint16_t* __t2500t, uint16_t* __t2501t, uint64_t size, char** __t2502t, uint64_t* __t2503t, uint16_t* __t2504t, uint16_t* __t2505t) {
  char* buffer__unsafe_ptr=*__t2498t;
  uint64_t buffer__unsafe_size=*__t2499t;
  uint16_t buffer__unsafe_offset=*__t2500t;
  uint16_t buffer__unsafe_align=*__t2501t;
  int __t510t=0;
  char __t511t__=0;
  char* ptr=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  char* __t520t__unsafe_ptr=0;
  uint64_t __t520t__unsafe_size=0;
  uint16_t __t520t__unsafe_offset=0;
  uint16_t __t520t__unsafe_align=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t bytes=0;
  uint64_t __t525t=0;
  char __t526t__=0;
  char* __t527t__=0;
  uint64_t __t528t=0;
  char* __t530t__unsafe_ptr=0;
  uint64_t __t530t__unsafe_size=0;
  uint16_t __t530t__unsafe_offset=0;
  uint16_t __t530t__unsafe_align=0;
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
  __t520t__unsafe_ptr=buffer__unsafe_ptr;
  __t520t__unsafe_size=buffer__unsafe_size;
  __t520t__unsafe_offset=buffer__unsafe_offset;
  __t520t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t521t=0;
  neq__t143t(buffer__unsafe_size,__t521t,&__t522t__);
  if(__t522t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t523t__);
  mul__t195t(__t523t__,size,&__t524t__);
  bytes=__t524t__;
  __t525t=0;
  eq__t119t(bytes,__t525t,&__t526t__);
  if(__t526t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t527t__;
  __t528t=0;
  zero__t503t(buffer__unsafe_ptr,__t528t,bytes);
  __t530t__unsafe_ptr=buffer__unsafe_ptr;
  __t530t__unsafe_size=buffer__unsafe_size;
  __t530t__unsafe_offset=buffer__unsafe_offset;
  __t530t__unsafe_align=buffer__unsafe_align;
  __t520t__unsafe_ptr=__t530t__unsafe_ptr;
  __t520t__unsafe_size=__t530t__unsafe_size;
  __t520t__unsafe_offset=__t530t__unsafe_offset;
  __t520t__unsafe_align=__t530t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(__t520t__unsafe_ptr,&__t511t__);
  if(__t511t__){
  __t520t__unsafe_ptr=__t520t__unsafe_ptr;
  free__t502t(&__t520t__unsafe_ptr);
  }
  __t_return:
  *__t2498t=buffer__unsafe_ptr;
  *__t2499t=buffer__unsafe_size;
  *__t2500t=buffer__unsafe_offset;
  *__t2501t=buffer__unsafe_align;
  *__t2502t=__t520t__unsafe_ptr;
  *__t2503t=__t520t__unsafe_size;
  *__t2504t=__t520t__unsafe_offset;
  *__t2505t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2506t) {
  goto __t_return;
  __t_return:
  *__t2506t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t221t(uint64_t x, uint64_t y, uint64_t* __t2507t) {
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
  *__t2507t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2508t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2508t=z;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2509t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2509t=z;
}

static inline __attribute__((always_inline)) void mat__t1352t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2510t, uint64_t* __t2511t, uint64_t* __t2512t, uint64_t* __t2513t, uint64_t* __t2514t) {
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__pos=0;
  uint64_t __t1354t__rows=0;
  uint64_t __t1354t__cols=0;
  uint64_t __t1354t__stride=0;
  __t1354t__unsafe_ptr=unsafe_ptr;
  __t1354t__pos=pos;
  __t1354t__rows=rows;
  __t1354t__cols=cols;
  __t1354t__stride=stride;
  goto __t_return;
  __t_return:
  *__t2510t=__t1354t__unsafe_ptr;
  *__t2511t=__t1354t__pos;
  *__t2512t=__t1354t__rows;
  *__t2513t=__t1354t__cols;
  *__t2514t=__t1354t__stride;
}

static inline __attribute__((always_inline)) int mat__t1990t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2515t, uint64_t rows, uint64_t cols, char** __t2516t, uint64_t* __t2517t, uint64_t* __t2518t, uint64_t* __t2519t, uint64_t* __t2520t) {
  uint64_t allocator__pos=*__t2515t;
  uint64_t __t1991t__=0;
  uint64_t __t1992t=0;
  char __t1993t__=0;
  uint64_t __t1994t__=0;
  uint64_t __t1995t=0;
  char __t1996t__=0;
  uint64_t __t1997t__=0;
  uint64_t __t1998t__=0;
  uint64_t __t1999t__=0;
  char __t2000t__=0;
  uint64_t start=0;
  uint64_t __t2001t__=0;
  uint64_t __t2002t__=0;
  char* __t2003t__unsafe_ptr=0;
  uint64_t __t2003t__pos=0;
  uint64_t __t2003t__rows=0;
  uint64_t __t2003t__cols=0;
  uint64_t __t2003t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(allocator__buf__unsafe_align,&__t1991t__);
  __t1992t=8;
  neq__t143t(__t1991t__,__t1992t,&__t1993t__);
  if(__t1993t__){
  __t_errcode=40;
  goto __t_failure;
  }
  nat__t506t(allocator__buf__unsafe_offset,&__t1994t__);
  __t1995t=0;
  neq__t143t(__t1994t__,__t1995t,&__t1996t__);
  if(__t1996t__){
  __t_errcode=41;
  goto __t_failure;
  }
  mul__t195t(rows,cols,&__t1997t__);
  add__t171t(allocator__pos,__t1997t__,&__t1998t__);
  len__t602t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1999t__);
  gt__t272t(__t1998t__,__t1999t__,&__t2000t__);
  if(__t2000t__){
  __t_errcode=42;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t195t(rows,cols,&__t2001t__);
  add__t171t(allocator__pos,__t2001t__,&__t2002t__);
  allocator__pos=__t2002t__;
  mat__t1352t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t2003t__unsafe_ptr,&__t2003t__pos,&__t2003t__rows,&__t2003t__cols,&__t2003t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2515t=allocator__pos;
  *__t2516t=__t2003t__unsafe_ptr;
  *__t2517t=__t2003t__pos;
  *__t2518t=__t2003t__rows;
  *__t2519t=__t2003t__cols;
  *__t2520t=__t2003t__stride;
  
  return __t_errcode;
}

int mat__t2013t(char** __t2521t, uint64_t* __t2522t, uint16_t* __t2523t, uint16_t* __t2524t, uint64_t rows, char** __t2525t, uint64_t* __t2526t, uint64_t* __t2527t, uint64_t* __t2528t, uint64_t* __t2529t) {
  char* buf__unsafe_ptr=*__t2521t;
  uint64_t buf__unsafe_size=*__t2522t;
  uint16_t buf__unsafe_offset=*__t2523t;
  uint16_t buf__unsafe_align=*__t2524t;
  uint64_t __t2014t__=0;
  uint64_t __t2015t__=0;
  uint64_t cols=0;
  uint64_t __t2016t__=0;
  uint64_t __t2017t__=0;
  char __t2018t__=0;
  uint64_t __t2019t=0;
  uint64_t __t2020t=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__pos=0;
  uint64_t __t2021t__rows=0;
  uint64_t __t2021t__cols=0;
  uint64_t __t2021t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2014t__);
  __t_errcode=div__t221t(__t2014t__,rows,&__t2015t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t2015t__;
  mul__t195t(cols,rows,&__t2016t__);
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2017t__);
  neq__t143t(__t2016t__,__t2017t__,&__t2018t__);
  if(__t2018t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t2019t=0;
  __t2020t=__t2019t;
  __t_errcode=mat__t1990t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2020t,rows,cols,&__t2021t__unsafe_ptr,&__t2021t__pos,&__t2021t__rows,&__t2021t__cols,&__t2021t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2521t=buf__unsafe_ptr;
  *__t2522t=buf__unsafe_size;
  *__t2523t=buf__unsafe_offset;
  *__t2524t=buf__unsafe_align;
  *__t2525t=__t2021t__unsafe_ptr;
  *__t2526t=__t2021t__pos;
  *__t2527t=__t2021t__rows;
  *__t2528t=__t2021t__cols;
  *__t2529t=__t2021t__stride;
  
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

static inline __attribute__((always_inline)) int mutget__t2041t(char** __t2533t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2534t) {
  char* m__unsafe_ptr=*__t2533t;
  char __t2042t__=0;
  char __t2043t__=0;
  uint64_t __t2044t=0;
  uint64_t __t2045t__=0;
  uint64_t __t2046t__=0;
  uint64_t __t2047t__=0;
  uint64_t __t2048t__=0;
  char* __t2049t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,m__rows,&__t2042t__);
  if(__t2042t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t320t(j,m__cols,&__t2043t__);
  if(__t2043t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t2044t=8;
  mul__t195t(i,m__stride,&__t2045t__);
  add__t171t(__t2045t__,j,&__t2046t__);
  add__t171t(m__pos,__t2046t__,&__t2047t__);
  mul__t195t(__t2044t,__t2047t__,&__t2048t__);
  add__t504t(m__unsafe_ptr,__t2048t__,&__t2049t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2533t=m__unsafe_ptr;
  *__t2534t=__t2049t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2430t(char** __t2535t, uint64_t* __t2536t, uint16_t* __t2537t, uint16_t* __t2538t) {
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

static inline __attribute__((always_inline)) void vec__t1349t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2539t, uint64_t* __t2540t, uint64_t* __t2541t) {
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__pos=0;
  uint64_t __t1351t__length=0;
  __t1351t__unsafe_ptr=unsafe_ptr;
  __t1351t__pos=pos;
  __t1351t__length=length;
  goto __t_return;
  __t_return:
  *__t2539t=__t1351t__unsafe_ptr;
  *__t2540t=__t1351t__pos;
  *__t2541t=__t1351t__length;
}

static inline __attribute__((always_inline)) int vec__t1401t(char** __t2542t, uint64_t* __t2543t, uint16_t* __t2544t, uint16_t* __t2545t, char** __t2546t, uint64_t* __t2547t, uint64_t* __t2548t) {
  char* buf__unsafe_ptr=*__t2542t;
  uint64_t buf__unsafe_size=*__t2543t;
  uint16_t buf__unsafe_offset=*__t2544t;
  uint16_t buf__unsafe_align=*__t2545t;
  uint64_t __t1402t__=0;
  uint64_t __t1403t=0;
  char __t1404t__=0;
  uint64_t __t1405t__=0;
  uint64_t __t1406t=0;
  char __t1407t__=0;
  uint64_t __t1408t=0;
  uint64_t __t1409t__=0;
  char* __t1410t__unsafe_ptr=0;
  uint64_t __t1410t__pos=0;
  uint64_t __t1410t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(buf__unsafe_align,&__t1402t__);
  __t1403t=8;
  neq__t143t(__t1402t__,__t1403t,&__t1404t__);
  if(__t1404t__){
  __t_errcode=36;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t1405t__);
  __t1406t=0;
  neq__t143t(__t1405t__,__t1406t,&__t1407t__);
  if(__t1407t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1408t=0;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1409t__);
  vec__t1349t(buf__unsafe_ptr,__t1408t,__t1409t__,&__t1410t__unsafe_ptr,&__t1410t__pos,&__t1410t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2542t=buf__unsafe_ptr;
  *__t2543t=buf__unsafe_size;
  *__t2544t=buf__unsafe_offset;
  *__t2545t=buf__unsafe_align;
  *__t2546t=__t1410t__unsafe_ptr;
  *__t2547t=__t1410t__pos;
  *__t2548t=__t1410t__length;
  
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1361t(char** __t2551t, uint64_t* __t2552t, uint16_t* __t2553t, uint16_t* __t2554t) {
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

int vec__t1395t(uint64_t length, char** __t2555t, uint64_t* __t2556t, uint64_t* __t2557t) {
  char* __t1396t__unsafe_ptr=0;
  uint64_t __t1396t__unsafe_size=0;
  uint16_t __t1396t__unsafe_offset=0;
  uint16_t __t1396t__unsafe_align=0;
  char* __t1397t__unsafe_ptr=0;
  uint64_t __t1397t__unsafe_size=0;
  uint16_t __t1397t__unsafe_offset=0;
  uint16_t __t1397t__unsafe_align=0;
  char __t1398t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1399t=0;
  char* __t1400t__unsafe_ptr=0;
  uint64_t __t1400t__pos=0;
  uint64_t __t1400t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1361t(&__t1396t__unsafe_ptr,&__t1396t__unsafe_size,&__t1396t__unsafe_offset,&__t1396t__unsafe_align);
  __t_errcode=alloc__t509t(&__t1396t__unsafe_ptr,&__t1396t__unsafe_size,&__t1396t__unsafe_offset,&__t1396t__unsafe_align,length,&__t1397t__unsafe_ptr,&__t1397t__unsafe_size,&__t1397t__unsafe_offset,&__t1397t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1399t=0;
  vec__t1349t(__t1397t__unsafe_ptr,__t1399t,length,&__t1400t__unsafe_ptr,&__t1400t__pos,&__t1400t__length);
  __t1400t__unsafe_ptr=__t1397t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1400t__unsafe_ptr,&__t1398t____t511t__);
  if(__t1398t____t511t__){
  __t1400t__unsafe_ptr=__t1400t__unsafe_ptr;
  free__t502t(&__t1400t__unsafe_ptr);
  }
  __t_return:
  *__t2555t=__t1400t__unsafe_ptr;
  *__t2556t=__t1400t__pos;
  *__t2557t=__t1400t__length;
  
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

static inline __attribute__((always_inline)) int get__t2050t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2562t) {
  char __t2051t__=0;
  char __t2052t__=0;
  uint64_t __t2053t=0;
  uint64_t __t2054t__=0;
  uint64_t __t2055t__=0;
  uint64_t __t2056t__=0;
  uint64_t __t2057t__=0;
  char* __t2058t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,m__rows,&__t2051t__);
  if(__t2051t__){
  __t_errcode=44;
  goto __t_failure;
  }
  ge__t320t(j,m__cols,&__t2052t__);
  if(__t2052t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t2053t=8;
  mul__t195t(i,m__stride,&__t2054t__);
  add__t171t(__t2054t__,j,&__t2055t__);
  add__t171t(m__pos,__t2055t__,&__t2056t__);
  mul__t195t(__t2053t,__t2056t__,&__t2057t__);
  add__t504t(m__unsafe_ptr,__t2057t__,&__t2058t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2562t=__t2058t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1456t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2563t) {
  char __t1457t__=0;
  uint64_t __t1458t=0;
  uint64_t __t1459t__=0;
  uint64_t __t1460t__=0;
  char* __t1461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1457t__);
  if(__t1457t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1458t=8;
  add__t171t(i,v__pos,&__t1459t__);
  mul__t195t(__t1458t,__t1459t__,&__t1460t__);
  add__t504t(v__unsafe_ptr,__t1460t__,&__t1461t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2563t=__t1461t__;
  
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

static inline __attribute__((always_inline)) int mutget__t1450t(char** __t2567t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2568t) {
  char* v__unsafe_ptr=*__t2567t;
  char __t1451t__=0;
  uint64_t __t1452t=0;
  uint64_t __t1453t__=0;
  uint64_t __t1454t__=0;
  char* __t1455t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,v__length,&__t1451t__);
  if(__t1451t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1452t=8;
  add__t171t(i,v__pos,&__t1453t__);
  mul__t195t(__t1452t,__t1453t__,&__t1454t__);
  add__t504t(v__unsafe_ptr,__t1454t__,&__t1455t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2567t=v__unsafe_ptr;
  *__t2568t=__t1455t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2089t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2569t, uint64_t* __t2570t, uint64_t* __t2571t) {
  char __t2090t__=0;
  char* __t2091t__unsafe_ptr=0;
  uint64_t __t2091t__pos=0;
  uint64_t __t2091t__length=0;
  char __t2092t____t1398t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2093t__from=0;
  uint64_t __t2093t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2094t=0;
  uint64_t __t2095t__=0;
  uint64_t i=0;
  double __t2096t=0;
  double __t2097t=0;
  double acc=0;
  uint64_t __t2098t__from=0;
  uint64_t __t2098t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2099t=0;
  uint64_t __t2100t__=0;
  uint64_t j=0;
  char* __t2101t__=0;
  double __t2102t__value=0;
  char* __t2103t__=0;
  double __t2104t__value=0;
  double __t2105t__=0;
  double __t2106t__=0;
  char* __t2107t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m__cols,v__length,&__t2090t__);
  if(__t2090t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1395t(m__rows,&__t2091t__unsafe_ptr,&__t2091t__pos,&__t2091t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2091t__unsafe_ptr;
  result__pos=__t2091t__pos;
  result__length=__t2091t__length;
  range__t461t(m__rows,&__t2093t__from,&__t2093t__to);
  it_i__from=__t2093t__from;
  it_i__to=__t2093t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2095t__);
  __t2094t=__t_complain;
  i=__t2095t__;
  __t2094t=__t2094t==0;
  if(!__t2094t){
  break;
  }
  __t2096t=0.0;
  __t2097t=__t2096t;
  acc=__t2097t;
  range__t461t(m__cols,&__t2098t__from,&__t2098t__to);
  it_j__from=__t2098t__from;
  it_j__to=__t2098t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2100t__);
  __t2099t=__t_complain;
  j=__t2100t__;
  __t2099t=__t2099t==0;
  if(!__t2099t){
  break;
  }
  __t_errcode=get__t2050t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2101t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2101t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2102t__value,__t2101t__,8);
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,j,&__t2103t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2103t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2104t__value,__t2103t__,8);
  mul__t173t(__t2102t__value,__t2104t__value,&__t2105t__);
  add__t149t(acc,__t2105t__,&__t2106t__);
  acc=__t2106t__;
  }
  __t_errcode=mutget__t1450t(&result__unsafe_ptr,result__pos,result__length,i,&__t2107t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2107t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2107t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2092t____t1398t____t511t__);
  if(__t2092t____t1398t____t511t__){
  result__unsafe_ptr=result__unsafe_ptr;
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

int print__t1964t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t1965t=0;
  const char* endl=0;
  const char* __t1966t__value=0;
  const char* __t1966t____t363t=0;
  uint64_t __t1968t__from=0;
  uint64_t __t1968t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1969t=0;
  uint64_t __t1970t__=0;
  uint64_t i=0;
  char* __t1971t__=0;
  double __t1972t__value=0;
  double __t1973t__value=0;
  const char* __t1973t____t363t=0;
  uint64_t __t1975t=0;
  uint64_t __t1976t__=0;
  char __t1977t__=0;
  const char* __t1978t__value=0;
  const char* __t1978t____t363t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t371t;
  nn__t362t(__t1946t,&__t1966t__value,&__t1966t____t363t);
  print__t367t(__t1966t__value,__t1966t____t363t);
  range__t461t(v__length,&__t1968t__from,&__t1968t__to);
  it__from=__t1968t__from;
  it__to=__t1968t__to;
  while(1){
  __t_complain=next__t470t(&it__from,it__to,&__t1970t__);
  __t1969t=__t_complain;
  i=__t1970t__;
  __t1969t=__t1969t==0;
  if(!__t1969t){
  break;
  }
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,i,&__t1971t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1971t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1972t__value,__t1971t__,8);
  nn__t364t(__t1972t__value,&__t1973t__value,&__t1973t____t363t);
  print__t372t(__t1973t__value,__t1973t____t363t);
  __t1975t=1;
  __t_errcode=sub__t348t(v__length,__t1975t,&__t1976t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t1976t__,&__t1977t__);
  if(__t1977t__){
  nn__t362t(__t1959t,&__t1978t__value,&__t1978t____t363t);
  print__t367t(__t1978t__value,__t1978t____t363t);
  }
  }
  print__t367t(__t1962t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2448t(char** __t2576t, uint64_t* __t2577t, uint16_t* __t2578t, uint16_t* __t2579t) {
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

static inline __attribute__((always_inline)) int mul__t2144t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2580t, uint64_t* __t2581t, uint64_t* __t2582t) {
  char __t2145t__=0;
  char* __t2146t__unsafe_ptr=0;
  uint64_t __t2146t__pos=0;
  uint64_t __t2146t__length=0;
  char __t2147t____t1398t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
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
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2154t=0;
  uint64_t __t2155t__=0;
  uint64_t i=0;
  char* __t2156t__=0;
  double __t2157t__value=0;
  char* __t2158t__=0;
  double __t2159t__value=0;
  double __t2160t__=0;
  double __t2161t__=0;
  char* __t2162t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(v__length,m__rows,&__t2145t__);
  if(__t2145t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=vec__t1395t(m__cols,&__t2146t__unsafe_ptr,&__t2146t__pos,&__t2146t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2146t__unsafe_ptr;
  result__pos=__t2146t__pos;
  result__length=__t2146t__length;
  range__t461t(m__cols,&__t2148t__from,&__t2148t__to);
  it_j__from=__t2148t__from;
  it_j__to=__t2148t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2150t__);
  __t2149t=__t_complain;
  j=__t2150t__;
  __t2149t=__t2149t==0;
  if(!__t2149t){
  break;
  }
  __t2151t=0.0;
  __t2152t=__t2151t;
  acc=__t2152t;
  range__t461t(m__rows,&__t2153t__from,&__t2153t__to);
  it_i__from=__t2153t__from;
  it_i__to=__t2153t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2155t__);
  __t2154t=__t_complain;
  i=__t2155t__;
  __t2154t=__t2154t==0;
  if(!__t2154t){
  break;
  }
  __t_errcode=get__t1456t(v__unsafe_ptr,v__pos,v__length,i,&__t2156t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2156t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2157t__value,__t2156t__,8);
  __t_errcode=get__t2050t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2158t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2158t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2159t__value,__t2158t__,8);
  mul__t173t(__t2157t__value,__t2159t__value,&__t2160t__);
  add__t149t(acc,__t2160t__,&__t2161t__);
  acc=__t2161t__;
  }
  __t_errcode=mutget__t1450t(&result__unsafe_ptr,result__pos,result__length,j,&__t2162t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2162t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2162t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2147t____t1398t____t511t__);
  if(__t2147t____t1398t____t511t__){
  result__unsafe_ptr=result__unsafe_ptr;
  free__t502t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2580t=result__unsafe_ptr;
  *__t2581t=result__pos;
  *__t2582t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2465t(char** __t2583t, uint64_t* __t2584t, uint16_t* __t2585t, uint16_t* __t2586t) {
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

static inline __attribute__((always_inline)) int mat__t1983t(uint64_t rows, uint64_t cols, char** __t2587t, uint64_t* __t2588t, uint64_t* __t2589t, uint64_t* __t2590t, uint64_t* __t2591t) {
  char* __t1984t__unsafe_ptr=0;
  uint64_t __t1984t__unsafe_size=0;
  uint16_t __t1984t__unsafe_offset=0;
  uint16_t __t1984t__unsafe_align=0;
  uint64_t __t1985t__=0;
  char* __t1986t__unsafe_ptr=0;
  uint64_t __t1986t__unsafe_size=0;
  uint16_t __t1986t__unsafe_offset=0;
  uint16_t __t1986t__unsafe_align=0;
  char __t1987t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1988t=0;
  char* __t1989t__unsafe_ptr=0;
  uint64_t __t1989t__pos=0;
  uint64_t __t1989t__rows=0;
  uint64_t __t1989t__cols=0;
  uint64_t __t1989t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1361t(&__t1984t__unsafe_ptr,&__t1984t__unsafe_size,&__t1984t__unsafe_offset,&__t1984t__unsafe_align);
  mul__t195t(rows,cols,&__t1985t__);
  __t_errcode=alloc__t509t(&__t1984t__unsafe_ptr,&__t1984t__unsafe_size,&__t1984t__unsafe_offset,&__t1984t__unsafe_align,__t1985t__,&__t1986t__unsafe_ptr,&__t1986t__unsafe_size,&__t1986t__unsafe_offset,&__t1986t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1986t__unsafe_ptr;
  buf__unsafe_size=__t1986t__unsafe_size;
  buf__unsafe_offset=__t1986t__unsafe_offset;
  buf__unsafe_align=__t1986t__unsafe_align;
  __t1988t=0;
  mat__t1352t(buf__unsafe_ptr,__t1988t,rows,cols,cols,&__t1989t__unsafe_ptr,&__t1989t__pos,&__t1989t__rows,&__t1989t__cols,&__t1989t__stride);
  goto __t_return;
  
  __t_failure:exists__t436t(__t1989t__unsafe_ptr,&__t1987t____t511t__);
  if(__t1987t____t511t__){
  __t1989t__unsafe_ptr=__t1989t__unsafe_ptr;
  free__t502t(&__t1989t__unsafe_ptr);
  }
  __t_return:
  *__t2587t=__t1989t__unsafe_ptr;
  *__t2588t=__t1989t__pos;
  *__t2589t=__t1989t__rows;
  *__t2590t=__t1989t__cols;
  *__t2591t=__t1989t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2199t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2592t, uint64_t* __t2593t, uint64_t* __t2594t, uint64_t* __t2595t, uint64_t* __t2596t) {
  char __t2200t__=0;
  char* __t2201t__unsafe_ptr=0;
  uint64_t __t2201t__pos=0;
  uint64_t __t2201t__rows=0;
  uint64_t __t2201t__cols=0;
  uint64_t __t2201t__stride=0;
  char __t2202t____t1987t____t511t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2203t__from=0;
  uint64_t __t2203t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2204t=0;
  uint64_t __t2205t__=0;
  uint64_t i=0;
  uint64_t __t2206t__from=0;
  uint64_t __t2206t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2207t=0;
  uint64_t __t2208t__=0;
  uint64_t j=0;
  double __t2209t=0;
  double __t2210t=0;
  double acc=0;
  uint64_t __t2211t__from=0;
  uint64_t __t2211t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2212t=0;
  uint64_t __t2213t__=0;
  uint64_t k=0;
  char* __t2214t__=0;
  double __t2215t__value=0;
  char* __t2216t__=0;
  double __t2217t__value=0;
  double __t2218t__=0;
  double __t2219t__=0;
  char* __t2220t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t143t(m1__cols,m2__rows,&__t2200t__);
  if(__t2200t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t_errcode=mat__t1983t(m1__rows,m2__cols,&__t2201t__unsafe_ptr,&__t2201t__pos,&__t2201t__rows,&__t2201t__cols,&__t2201t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2201t__unsafe_ptr;
  result__pos=__t2201t__pos;
  result__rows=__t2201t__rows;
  result__cols=__t2201t__cols;
  result__stride=__t2201t__stride;
  range__t461t(m1__rows,&__t2203t__from,&__t2203t__to);
  it_i__from=__t2203t__from;
  it_i__to=__t2203t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2205t__);
  __t2204t=__t_complain;
  i=__t2205t__;
  __t2204t=__t2204t==0;
  if(!__t2204t){
  break;
  }
  range__t461t(m2__cols,&__t2206t__from,&__t2206t__to);
  it_j__from=__t2206t__from;
  it_j__to=__t2206t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2208t__);
  __t2207t=__t_complain;
  j=__t2208t__;
  __t2207t=__t2207t==0;
  if(!__t2207t){
  break;
  }
  __t2209t=0.0;
  __t2210t=__t2209t;
  acc=__t2210t;
  range__t461t(m1__cols,&__t2211t__from,&__t2211t__to);
  it_k__from=__t2211t__from;
  it_k__to=__t2211t__to;
  while(1){
  __t_complain=next__t470t(&it_k__from,it_k__to,&__t2213t__);
  __t2212t=__t_complain;
  k=__t2213t__;
  __t2212t=__t2212t==0;
  if(!__t2212t){
  break;
  }
  __t_errcode=get__t2050t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2214t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2214t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2215t__value,__t2214t__,8);
  __t_errcode=get__t2050t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2216t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2216t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2217t__value,__t2216t__,8);
  mul__t173t(__t2215t__value,__t2217t__value,&__t2218t__);
  add__t149t(acc,__t2218t__,&__t2219t__);
  acc=__t2219t__;
  }
  __t_errcode=mutget__t2041t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2220t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2220t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2220t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t436t(result__unsafe_ptr,&__t2202t____t1987t____t511t__);
  if(__t2202t____t1987t____t511t__){
  result__unsafe_ptr=result__unsafe_ptr;
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

static inline __attribute__((always_inline)) int print__t2337t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2338t=0;
  const char* endl=0;
  uint64_t __t2339t__from=0;
  uint64_t __t2339t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2340t=0;
  uint64_t __t2341t__=0;
  uint64_t i=0;
  uint64_t __t2342t=0;
  char __t2343t__=0;
  uint64_t __t2345t=0;
  char __t2346t__=0;
  uint64_t __t2347t=0;
  char __t2348t__=0;
  char __t2349t=0;
  uint64_t __t2351t=0;
  char __t2352t__=0;
  uint64_t __t2353t=0;
  char __t2354t__=0;
  uint64_t __t2355t=0;
  uint64_t __t2356t__=0;
  char __t2357t__=0;
  char __t2358t=0;
  char __t2359t=0;
  uint64_t __t2361t=0;
  char __t2362t__=0;
  uint64_t __t2363t=0;
  uint64_t __t2364t__=0;
  char __t2365t__=0;
  char __t2366t=0;
  uint64_t __t2368t__from=0;
  uint64_t __t2368t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2369t=0;
  uint64_t __t2370t__=0;
  uint64_t j=0;
  char* __t2371t__=0;
  double __t2372t__value=0;
  uint64_t __t2374t=0;
  uint64_t __t2375t__=0;
  char __t2376t__=0;
  uint64_t __t2378t=0;
  char __t2379t__=0;
  uint64_t __t2381t=0;
  char __t2382t__=0;
  uint64_t __t2383t=0;
  char __t2384t__=0;
  char __t2385t=0;
  uint64_t __t2387t=0;
  char __t2388t__=0;
  uint64_t __t2389t=0;
  char __t2390t__=0;
  uint64_t __t2391t=0;
  uint64_t __t2392t__=0;
  char __t2393t__=0;
  char __t2394t=0;
  char __t2395t=0;
  uint64_t __t2397t=0;
  char __t2398t__=0;
  uint64_t __t2399t=0;
  uint64_t __t2400t__=0;
  char __t2401t__=0;
  char __t2402t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t371t;
  range__t461t(m__rows,&__t2339t__from,&__t2339t__to);
  it_i__from=__t2339t__from;
  it_i__to=__t2339t__to;
  while(1){
  __t_complain=next__t470t(&it_i__from,it_i__to,&__t2341t__);
  __t2340t=__t_complain;
  i=__t2341t__;
  __t2340t=__t2340t==0;
  if(!__t2340t){
  break;
  }
  __t2342t=1;
  eq__t119t(m__rows,__t2342t,&__t2343t__);
  if(__t2343t__){
  print__t367t(__t1946t,__t363t);
  }
  __t2345t=1;
  gt__t272t(m__rows,__t2345t,&__t2346t__);
  if(__t2346t__){
  __t2347t=0;
  eq__t119t(i,__t2347t,&__t2348t__);
  __t2349t=__t2348t__;
  }
  if(__t2349t){
  print__t367t(__t2276t,__t363t);
  }
  __t2351t=1;
  gt__t272t(m__rows,__t2351t,&__t2352t__);
  if(__t2352t__){
  __t2353t=0;
  gt__t272t(i,__t2353t,&__t2354t__);
  if(__t2354t__){
  __t2355t=1;
  __t_errcode=sub__t348t(m__rows,__t2355t,&__t2356t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t2356t__,&__t2357t__);
  __t2358t=__t2357t__;
  }
  __t2359t=__t2358t;
  }
  if(__t2359t){
  print__t367t(__t2287t,__t363t);
  }
  __t2361t=1;
  gt__t272t(m__rows,__t2361t,&__t2362t__);
  if(__t2362t__){
  __t2363t=1;
  __t_errcode=sub__t348t(m__rows,__t2363t,&__t2364t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2364t__,&__t2365t__);
  __t2366t=__t2365t__;
  }
  if(__t2366t){
  print__t367t(__t2295t,__t363t);
  }
  range__t461t(m__cols,&__t2368t__from,&__t2368t__to);
  it_j__from=__t2368t__from;
  it_j__to=__t2368t__to;
  while(1){
  __t_complain=next__t470t(&it_j__from,it_j__to,&__t2370t__);
  __t2369t=__t_complain;
  j=__t2370t__;
  __t2369t=__t2369t==0;
  if(!__t2369t){
  break;
  }
  __t_errcode=get__t2050t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2371t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2371t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2372t__value,__t2371t__,8);
  print__t372t(__t2372t__value,__t363t);
  __t2374t=1;
  __t_errcode=sub__t348t(m__cols,__t2374t,&__t2375t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(j,__t2375t__,&__t2376t__);
  if(__t2376t__){
  print__t367t(__t1959t,__t363t);
  }
  }
  __t2378t=1;
  eq__t119t(m__rows,__t2378t,&__t2379t__);
  if(__t2379t__){
  print__t367t(__t1962t,__t363t);
  }
  __t2381t=1;
  gt__t272t(m__rows,__t2381t,&__t2382t__);
  if(__t2382t__){
  __t2383t=0;
  eq__t119t(i,__t2383t,&__t2384t__);
  __t2385t=__t2384t__;
  }
  if(__t2385t){
  print__t367t(__t2315t,__t363t);
  }
  __t2387t=1;
  gt__t272t(m__rows,__t2387t,&__t2388t__);
  if(__t2388t__){
  __t2389t=0;
  gt__t272t(i,__t2389t,&__t2390t__);
  if(__t2390t__){
  __t2391t=1;
  __t_errcode=sub__t348t(m__rows,__t2391t,&__t2392t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t248t(i,__t2392t__,&__t2393t__);
  __t2394t=__t2393t__;
  }
  __t2395t=__t2394t;
  }
  if(__t2395t){
  print__t367t(__t2326t,__t363t);
  }
  __t2397t=1;
  gt__t272t(m__rows,__t2397t,&__t2398t__);
  if(__t2398t__){
  __t2399t=1;
  __t_errcode=sub__t348t(m__rows,__t2399t,&__t2400t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t119t(i,__t2400t__,&__t2401t__);
  __t2402t=__t2401t__;
  }
  if(__t2402t){
  print__t367t(__t2334t,__t363t);
  }
  print__t367t(__t363t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2405t() {
  double __t2407t=0;
  double __t2412t=0;
  double __t2413t=0;
  double __t2414t=0;
  double __t2415t=0;
  double __t2416t=0;
  char* __t2417t__unsafe_ptr=0;
  uint64_t __t2417t__unsafe_size=0;
  uint16_t __t2417t__unsafe_offset=0;
  uint16_t __t2417t__unsafe_align=0;
  uint64_t __t2418t=0;
  char* __t2419t__unsafe_ptr=0;
  uint64_t __t2419t__unsafe_size=0;
  uint16_t __t2419t__unsafe_offset=0;
  uint16_t __t2419t__unsafe_align=0;
  char __t2420t____t511t__=0;
  uint64_t __t2421t=0;
  char* __t2422t__unsafe_ptr=0;
  uint64_t __t2422t__pos=0;
  uint64_t __t2422t__rows=0;
  uint64_t __t2422t__cols=0;
  uint64_t __t2422t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2423t=0;
  uint64_t __t2424t=0;
  char* __t2425t__=0;
  double __t2426t=0;
  double __t2427t=0;
  double __t2432t=0;
  double __t2433t=0;
  char* __t2434t__unsafe_ptr=0;
  uint64_t __t2434t__unsafe_size=0;
  uint16_t __t2434t__unsafe_offset=0;
  uint16_t __t2434t__unsafe_align=0;
  uint64_t __t2435t=0;
  char* __t2436t__unsafe_ptr=0;
  uint64_t __t2436t__unsafe_size=0;
  uint16_t __t2436t__unsafe_offset=0;
  uint16_t __t2436t__unsafe_align=0;
  char __t2437t____t511t__=0;
  char* __t2438t__unsafe_ptr=0;
  uint64_t __t2438t__pos=0;
  uint64_t __t2438t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2440t__value=0;
  const char* __t2440t____t363t=0;
  char* __t2442t__unsafe_ptr=0;
  uint64_t __t2442t__pos=0;
  uint64_t __t2442t__length=0;
  char __t2443t____t2092t____t1398t____t511t__=0;
  double __t2445t=0;
  double __t2450t=0;
  char* __t2451t__unsafe_ptr=0;
  uint64_t __t2451t__unsafe_size=0;
  uint16_t __t2451t__unsafe_offset=0;
  uint16_t __t2451t__unsafe_align=0;
  uint64_t __t2452t=0;
  char* __t2453t__unsafe_ptr=0;
  uint64_t __t2453t__unsafe_size=0;
  uint16_t __t2453t__unsafe_offset=0;
  uint16_t __t2453t__unsafe_align=0;
  char __t2454t____t511t__=0;
  char* __t2455t__unsafe_ptr=0;
  uint64_t __t2455t__pos=0;
  uint64_t __t2455t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2457t__value=0;
  const char* __t2457t____t363t=0;
  char* __t2459t__unsafe_ptr=0;
  uint64_t __t2459t__pos=0;
  uint64_t __t2459t__length=0;
  char __t2460t____t2147t____t1398t____t511t__=0;
  double __t2462t=0;
  double __t2467t=0;
  double __t2468t=0;
  double __t2469t=0;
  double __t2470t=0;
  double __t2471t=0;
  char* __t2472t__unsafe_ptr=0;
  uint64_t __t2472t__unsafe_size=0;
  uint16_t __t2472t__unsafe_offset=0;
  uint16_t __t2472t__unsafe_align=0;
  uint64_t __t2473t=0;
  char* __t2474t__unsafe_ptr=0;
  uint64_t __t2474t__unsafe_size=0;
  uint16_t __t2474t__unsafe_offset=0;
  uint16_t __t2474t__unsafe_align=0;
  char __t2475t____t511t__=0;
  uint64_t __t2476t=0;
  char* __t2477t__unsafe_ptr=0;
  uint64_t __t2477t__pos=0;
  uint64_t __t2477t__rows=0;
  uint64_t __t2477t__cols=0;
  uint64_t __t2477t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2480t__unsafe_ptr=0;
  uint64_t __t2480t__pos=0;
  uint64_t __t2480t__rows=0;
  uint64_t __t2480t__cols=0;
  uint64_t __t2480t__stride=0;
  char __t2481t____t2202t____t1987t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1355t();
  __t2407t=1.0;
  __t2412t=0.0;
  __t2413t=2.0;
  __t2414t=0.0;
  __t2415t=3.0;
  __t2416t=1.0;
  float____buffer__t2410t(&__t2417t__unsafe_ptr,&__t2417t__unsafe_size,&__t2417t__unsafe_offset,&__t2417t__unsafe_align);
  __t2418t=6;
  __t_errcode=alloc__t509t(&__t2417t__unsafe_ptr,&__t2417t__unsafe_size,&__t2417t__unsafe_offset,&__t2417t__unsafe_align,__t2418t,&__t2419t__unsafe_ptr,&__t2419t__unsafe_size,&__t2419t__unsafe_offset,&__t2419t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2417t__unsafe_ptr,&__t2407t,8);
  memcpy(__t2417t__unsafe_ptr+8,&__t2412t,8);
  memcpy(__t2417t__unsafe_ptr+16,&__t2413t,8);
  memcpy(__t2417t__unsafe_ptr+24,&__t2414t,8);
  memcpy(__t2417t__unsafe_ptr+32,&__t2415t,8);
  memcpy(__t2417t__unsafe_ptr+40,&__t2416t,8);
  __t2421t=2;
  __t_errcode=mat__t2013t(&__t2417t__unsafe_ptr,&__t2417t__unsafe_size,&__t2417t__unsafe_offset,&__t2417t__unsafe_align,__t2421t,&__t2422t__unsafe_ptr,&__t2422t__pos,&__t2422t__rows,&__t2422t__cols,&__t2422t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2422t__unsafe_ptr;
  a__pos=__t2422t__pos;
  a__rows=__t2422t__rows;
  a__cols=__t2422t__cols;
  a__stride=__t2422t__stride;
  __t2423t=0;
  __t2424t=0;
  __t_errcode=mutget__t2041t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2423t,__t2424t,&__t2425t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2426t=1.0;
  if(!__t2425t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2425t__,&__t2426t,8);
  __t2427t=1.0;
  __t2432t=2.0;
  __t2433t=3.0;
  float____buffer__t2430t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align);
  __t2435t=3;
  __t_errcode=alloc__t509t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align,__t2435t,&__t2436t__unsafe_ptr,&__t2436t__unsafe_size,&__t2436t__unsafe_offset,&__t2436t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2434t__unsafe_ptr,&__t2427t,8);
  memcpy(__t2434t__unsafe_ptr+8,&__t2432t,8);
  memcpy(__t2434t__unsafe_ptr+16,&__t2433t,8);
  __t_errcode=vec__t1401t(&__t2434t__unsafe_ptr,&__t2434t__unsafe_size,&__t2434t__unsafe_offset,&__t2434t__unsafe_align,&__t2438t__unsafe_ptr,&__t2438t__pos,&__t2438t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2438t__unsafe_ptr;
  x__pos=__t2438t__pos;
  x__length=__t2438t__length;
  nn__t362t(__t2439t,&__t2440t__value,&__t2440t____t363t);
  print__t367t(__t2440t__value,__t2440t____t363t);
  __t_errcode=mul__t2089t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2442t__unsafe_ptr,&__t2442t__pos,&__t2442t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1964t(__t2442t__unsafe_ptr,__t2442t__pos,__t2442t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2445t=1.0;
  __t2450t=2.0;
  float____buffer__t2448t(&__t2451t__unsafe_ptr,&__t2451t__unsafe_size,&__t2451t__unsafe_offset,&__t2451t__unsafe_align);
  __t2452t=2;
  __t_errcode=alloc__t509t(&__t2451t__unsafe_ptr,&__t2451t__unsafe_size,&__t2451t__unsafe_offset,&__t2451t__unsafe_align,__t2452t,&__t2453t__unsafe_ptr,&__t2453t__unsafe_size,&__t2453t__unsafe_offset,&__t2453t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2451t__unsafe_ptr,&__t2445t,8);
  memcpy(__t2451t__unsafe_ptr+8,&__t2450t,8);
  __t_errcode=vec__t1401t(&__t2451t__unsafe_ptr,&__t2451t__unsafe_size,&__t2451t__unsafe_offset,&__t2451t__unsafe_align,&__t2455t__unsafe_ptr,&__t2455t__pos,&__t2455t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2455t__unsafe_ptr;
  u__pos=__t2455t__pos;
  u__length=__t2455t__length;
  nn__t362t(__t2456t,&__t2457t__value,&__t2457t____t363t);
  print__t367t(__t2457t__value,__t2457t____t363t);
  __t_errcode=mul__t2144t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2459t__unsafe_ptr,&__t2459t__pos,&__t2459t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1964t(__t2459t__unsafe_ptr,__t2459t__pos,__t2459t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2462t=1.0;
  __t2467t=2.0;
  __t2468t=3.0;
  __t2469t=4.0;
  __t2470t=5.0;
  __t2471t=6.0;
  float____buffer__t2465t(&__t2472t__unsafe_ptr,&__t2472t__unsafe_size,&__t2472t__unsafe_offset,&__t2472t__unsafe_align);
  __t2473t=6;
  __t_errcode=alloc__t509t(&__t2472t__unsafe_ptr,&__t2472t__unsafe_size,&__t2472t__unsafe_offset,&__t2472t__unsafe_align,__t2473t,&__t2474t__unsafe_ptr,&__t2474t__unsafe_size,&__t2474t__unsafe_offset,&__t2474t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2472t__unsafe_ptr,&__t2462t,8);
  memcpy(__t2472t__unsafe_ptr+8,&__t2467t,8);
  memcpy(__t2472t__unsafe_ptr+16,&__t2468t,8);
  memcpy(__t2472t__unsafe_ptr+24,&__t2469t,8);
  memcpy(__t2472t__unsafe_ptr+32,&__t2470t,8);
  memcpy(__t2472t__unsafe_ptr+40,&__t2471t,8);
  __t2476t=3;
  __t_errcode=mat__t2013t(&__t2472t__unsafe_ptr,&__t2472t__unsafe_size,&__t2472t__unsafe_offset,&__t2472t__unsafe_align,__t2476t,&__t2477t__unsafe_ptr,&__t2477t__pos,&__t2477t__rows,&__t2477t__cols,&__t2477t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2477t__unsafe_ptr;
  b__pos=__t2477t__pos;
  b__rows=__t2477t__rows;
  b__cols=__t2477t__cols;
  b__stride=__t2477t__stride;
  print__t369t(__t2478t);
  __t_errcode=mul__t2199t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2480t__unsafe_ptr,&__t2480t__pos,&__t2480t__rows,&__t2480t__cols,&__t2480t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2337t(__t2480t__unsafe_ptr,__t2480t__pos,__t2480t__rows,__t2480t__cols,__t2480t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t2480t__unsafe_ptr,&__t2481t____t2202t____t1987t____t511t__);
  if(__t2481t____t2202t____t1987t____t511t__){
  __t2480t__unsafe_ptr=__t2480t__unsafe_ptr;
  free__t502t(&__t2480t__unsafe_ptr);
  }
  exists__t436t(__t2474t__unsafe_ptr,&__t2475t____t511t__);
  if(__t2475t____t511t__){
  __t2474t__unsafe_ptr=__t2474t__unsafe_ptr;
  free__t502t(&__t2474t__unsafe_ptr);
  }
  exists__t436t(__t2459t__unsafe_ptr,&__t2460t____t2147t____t1398t____t511t__);
  if(__t2460t____t2147t____t1398t____t511t__){
  __t2459t__unsafe_ptr=__t2459t__unsafe_ptr;
  free__t502t(&__t2459t__unsafe_ptr);
  }
  exists__t436t(__t2453t__unsafe_ptr,&__t2454t____t511t__);
  if(__t2454t____t511t__){
  __t2453t__unsafe_ptr=__t2453t__unsafe_ptr;
  free__t502t(&__t2453t__unsafe_ptr);
  }
  exists__t436t(__t2442t__unsafe_ptr,&__t2443t____t2092t____t1398t____t511t__);
  if(__t2443t____t2092t____t1398t____t511t__){
  __t2442t__unsafe_ptr=__t2442t__unsafe_ptr;
  free__t502t(&__t2442t__unsafe_ptr);
  }
  exists__t436t(__t2436t__unsafe_ptr,&__t2437t____t511t__);
  if(__t2437t____t511t__){
  __t2436t__unsafe_ptr=__t2436t__unsafe_ptr;
  free__t502t(&__t2436t__unsafe_ptr);
  }
  exists__t436t(__t2419t__unsafe_ptr,&__t2420t____t511t__);
  if(__t2420t____t511t__){
  __t2419t__unsafe_ptr=__t2419t__unsafe_ptr;
  free__t502t(&__t2419t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2405t();return 0;}