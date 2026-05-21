#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t2199t="⎣ ";
const char* const __t2238t=" ⎦";
const char* const __t1875t="  ";
const char* const __t370t="\n";
const char* const __t362t="";
const char* const __t1862t="[ ";
const char* const __t2191t="⎢ ";
const char* const __t2219t=" ⎤";
const char* const __t2360t="u*a";
const char* const __t2180t="⎡ ";
const char* const __t1878t=" ]";
const char* const __t2382t="a*b";
const char* const __t2343t="a*x";
const char* const __t2230t=" ⎥";
static const char* __t_all_errcodes[47] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
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

static inline __attribute__((always_inline)) void new__t1287t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2314t(char** __t2387t, uint64_t* __t2388t, uint16_t* __t2389t, uint16_t* __t2390t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2387t=unsafe_ptr;
  *__t2388t=unsafe_size;
  *__t2389t=unsafe_offset;
  *__t2390t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2391t) {
  int value=0;
  *__t2391t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t2392t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t2392t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t2393t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t2393t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t2394t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2394t=z;
}

static inline __attribute__((always_inline)) void free__t471t(char** __t2395t) {
  char* allocated=*__t2395t;
  if(allocated){
  free(allocated);
  }
  *__t2395t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t2396t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2396t=z;
}

static inline __attribute__((always_inline)) void nat__t475t(uint16_t x, uint64_t* __t2397t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2397t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t2398t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2398t=z;
}

static inline __attribute__((always_inline)) void zero__t472t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t417t(char* x, char* __t2399t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2399t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t2400t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2400t=z;
}

static inline __attribute__((always_inline)) int alloc__t464t(uint64_t bytes, char** __t2401t) {
  char* allocated=0;
  char __t465t__=0;
  char __t466t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t417t(allocated,&__t465t__);
  not__t26t(__t465t__,&__t466t__);
  if(__t466t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2401t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t478t(char** __t2402t, uint64_t* __t2403t, uint16_t* __t2404t, uint16_t* __t2405t, uint64_t size, char** __t2406t, uint64_t* __t2407t, uint16_t* __t2408t, uint16_t* __t2409t) {
  char* buffer__unsafe_ptr=*__t2402t;
  uint64_t buffer__unsafe_size=*__t2403t;
  uint16_t buffer__unsafe_offset=*__t2404t;
  uint16_t buffer__unsafe_align=*__t2405t;
  int __t479t=0;
  uint64_t __t480t=0;
  char __t481t__=0;
  uint64_t __t482t=0;
  char* ptr=0;
  char __t484t__=0;
  uint64_t __t485t=0;
  char __t486t__=0;
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  uint64_t __t489t__=0;
  char* __t491t__unsafe_ptr=0;
  uint64_t __t491t__unsafe_size=0;
  uint16_t __t491t__unsafe_offset=0;
  uint16_t __t491t__unsafe_align=0;
  uint64_t __t492t=0;
  char __t493t__=0;
  uint64_t __t494t__=0;
  uint64_t __t495t__=0;
  uint64_t bytes=0;
  char* __t496t__=0;
  uint64_t __t497t=0;
  char* __t499t__unsafe_ptr=0;
  uint64_t __t499t__unsafe_size=0;
  uint16_t __t499t__unsafe_offset=0;
  uint16_t __t499t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t484t__);
  if(__t484t__){
  __t485t=0;
  neq__t142t(size,__t485t,&__t486t__);
  if(__t486t__){
  __t487t=0;
  nat__t475t(buffer__unsafe_align,&__t488t__);
  mul__t194t(__t488t__,size,&__t489t__);
  zero__t472t(buffer__unsafe_ptr,__t487t,__t489t__);
  }
  __t491t__unsafe_ptr=buffer__unsafe_ptr;
  __t491t__unsafe_size=buffer__unsafe_size;
  __t491t__unsafe_offset=buffer__unsafe_offset;
  __t491t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t492t=0;
  neq__t142t(buffer__unsafe_size,__t492t,&__t493t__);
  if(__t493t__){
  __t_errcode=11;
  goto __t_failure;
  }
  nat__t475t(buffer__unsafe_align,&__t494t__);
  mul__t194t(__t494t__,size,&__t495t__);
  bytes=__t495t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t464t(bytes,&__t496t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t496t__;
  __t497t=0;
  zero__t472t(buffer__unsafe_ptr,__t497t,bytes);
  __t499t__unsafe_ptr=buffer__unsafe_ptr;
  __t499t__unsafe_size=buffer__unsafe_size;
  __t499t__unsafe_offset=buffer__unsafe_offset;
  __t499t__unsafe_align=buffer__unsafe_align;
  __t491t__unsafe_ptr=__t499t__unsafe_ptr;
  __t491t__unsafe_size=__t499t__unsafe_size;
  __t491t__unsafe_offset=__t499t__unsafe_offset;
  __t491t__unsafe_align=__t499t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t480t=0;
  neq__t142t(__t491t__unsafe_size,__t480t,&__t481t__);
  if(__t481t__){
  __t491t__unsafe_size=0;
  __t491t__unsafe_size=__t491t__unsafe_size;
  __t491t__unsafe_ptr=__t491t__unsafe_ptr;
  free__t471t(&__t491t__unsafe_ptr);
  }
  __t_return:
  *__t2402t=buffer__unsafe_ptr;
  *__t2403t=buffer__unsafe_size;
  *__t2404t=buffer__unsafe_offset;
  *__t2405t=buffer__unsafe_align;
  *__t2406t=__t491t__unsafe_ptr;
  *__t2407t=__t491t__unsafe_size;
  *__t2408t=__t491t__unsafe_offset;
  *__t2409t=__t491t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t564t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2410t) {
  goto __t_return;
  __t_return:
  *__t2410t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t2411t) {
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
  *__t2411t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t2412t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2412t=z;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t2413t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2413t=z;
}

static inline __attribute__((always_inline)) void mat__t1285t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2414t, uint64_t* __t2415t, uint64_t* __t2416t, uint64_t* __t2417t, uint64_t* __t2418t) {
  goto __t_return;
  __t_return:
  *__t2414t=unsafe_ptr;
  *__t2415t=pos;
  *__t2416t=rows;
  *__t2417t=cols;
  *__t2418t=stride;
}

static inline __attribute__((always_inline)) int mat__t1906t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2419t, uint64_t rows, uint64_t cols, char** __t2420t, uint64_t* __t2421t, uint64_t* __t2422t, uint64_t* __t2423t, uint64_t* __t2424t) {
  uint64_t allocator__pos=*__t2419t;
  uint64_t __t1907t__=0;
  uint64_t __t1908t=0;
  char __t1909t__=0;
  uint64_t __t1910t__=0;
  uint64_t __t1911t=0;
  char __t1912t__=0;
  uint64_t __t1913t__=0;
  uint64_t __t1914t__=0;
  uint64_t __t1915t__=0;
  char __t1916t__=0;
  uint64_t start=0;
  uint64_t __t1917t__=0;
  uint64_t __t1918t__=0;
  char* __t1919t__unsafe_ptr=0;
  uint64_t __t1919t__pos=0;
  uint64_t __t1919t__rows=0;
  uint64_t __t1919t__cols=0;
  uint64_t __t1919t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t475t(allocator__buf__unsafe_align,&__t1907t__);
  __t1908t=8;
  neq__t142t(__t1907t__,__t1908t,&__t1909t__);
  if(__t1909t__){
  __t_errcode=38;
  goto __t_failure;
  }
  nat__t475t(allocator__buf__unsafe_offset,&__t1910t__);
  __t1911t=0;
  neq__t142t(__t1910t__,__t1911t,&__t1912t__);
  if(__t1912t__){
  __t_errcode=39;
  goto __t_failure;
  }
  mul__t194t(rows,cols,&__t1913t__);
  add__t170t(allocator__pos,__t1913t__,&__t1914t__);
  len__t564t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1915t__);
  gt__t271t(__t1914t__,__t1915t__,&__t1916t__);
  if(__t1916t__){
  __t_errcode=40;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t194t(rows,cols,&__t1917t__);
  add__t170t(allocator__pos,__t1917t__,&__t1918t__);
  allocator__pos=__t1918t__;
  mat__t1285t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t1919t__unsafe_ptr,&__t1919t__pos,&__t1919t__rows,&__t1919t__cols,&__t1919t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2419t=allocator__pos;
  *__t2420t=__t1919t__unsafe_ptr;
  *__t2421t=__t1919t__pos;
  *__t2422t=__t1919t__rows;
  *__t2423t=__t1919t__cols;
  *__t2424t=__t1919t__stride;
  
  return __t_errcode;
}

int mat__t1920t(char** __t2425t, uint64_t* __t2426t, uint16_t* __t2427t, uint16_t* __t2428t, uint64_t rows, char** __t2429t, uint64_t* __t2430t, uint64_t* __t2431t, uint64_t* __t2432t, uint64_t* __t2433t) {
  char* buf__unsafe_ptr=*__t2425t;
  uint64_t buf__unsafe_size=*__t2426t;
  uint16_t buf__unsafe_offset=*__t2427t;
  uint16_t buf__unsafe_align=*__t2428t;
  uint64_t __t1921t__=0;
  uint64_t __t1922t__=0;
  uint64_t cols=0;
  uint64_t __t1923t__=0;
  uint64_t __t1924t__=0;
  char __t1925t__=0;
  uint64_t __t1926t=0;
  uint64_t __t1927t=0;
  char* __t1928t__unsafe_ptr=0;
  uint64_t __t1928t__pos=0;
  uint64_t __t1928t__rows=0;
  uint64_t __t1928t__cols=0;
  uint64_t __t1928t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t564t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1921t__);
  __t_errcode=div__t220t(__t1921t__,rows,&__t1922t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t1922t__;
  mul__t194t(cols,rows,&__t1923t__);
  len__t564t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1924t__);
  neq__t142t(__t1923t__,__t1924t__,&__t1925t__);
  if(__t1925t__){
  __t_errcode=41;
  goto __t_failure;
  }
  __t1926t=0;
  __t1927t=__t1926t;
  __t_errcode=mat__t1906t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1927t,rows,cols,&__t1928t__unsafe_ptr,&__t1928t__pos,&__t1928t__rows,&__t1928t__cols,&__t1928t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2425t=buf__unsafe_ptr;
  *__t2426t=buf__unsafe_size;
  *__t2427t=buf__unsafe_offset;
  *__t2428t=buf__unsafe_align;
  *__t2429t=__t1928t__unsafe_ptr;
  *__t2430t=__t1928t__pos;
  *__t2431t=__t1928t__rows;
  *__t2432t=__t1928t__cols;
  *__t2433t=__t1928t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t2434t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2434t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t2435t) {
  *__t2435t=to;
}

static inline __attribute__((always_inline)) void add__t473t(char* allocated, uint64_t offset, char** __t2436t) {
  char* element=0;
  char* __t474t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t474t__);
  goto __t_return;
  __t_return:
  *__t2436t=__t474t__;
}

static inline __attribute__((always_inline)) int mutget__t1948t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2437t) {
  char __t1949t__=0;
  char __t1950t__=0;
  uint64_t __t1951t=0;
  uint64_t __t1952t__=0;
  uint64_t __t1953t__=0;
  uint64_t __t1954t__=0;
  uint64_t __t1955t__=0;
  char* __t1956t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1949t__);
  if(__t1949t__){
  __t_errcode=42;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1950t__);
  if(__t1950t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t1951t=8;
  mul__t194t(i,m__stride,&__t1952t__);
  add__t170t(__t1952t__,j,&__t1953t__);
  add__t170t(m__pos,__t1953t__,&__t1954t__);
  mul__t194t(__t1951t,__t1954t__,&__t1955t__);
  add__t473t(m__unsafe_ptr,__t1955t__,&__t1956t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2437t=__t1956t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2334t(char** __t2438t, uint64_t* __t2439t, uint16_t* __t2440t, uint16_t* __t2441t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2438t=unsafe_ptr;
  *__t2439t=unsafe_size;
  *__t2440t=unsafe_offset;
  *__t2441t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1283t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2442t, uint64_t* __t2443t, uint64_t* __t2444t) {
  goto __t_return;
  __t_return:
  *__t2442t=unsafe_ptr;
  *__t2443t=pos;
  *__t2444t=length;
}

static inline __attribute__((always_inline)) int vec__t1333t(char** __t2445t, uint64_t* __t2446t, uint16_t* __t2447t, uint16_t* __t2448t, char** __t2449t, uint64_t* __t2450t, uint64_t* __t2451t) {
  char* buf__unsafe_ptr=*__t2445t;
  uint64_t buf__unsafe_size=*__t2446t;
  uint16_t buf__unsafe_offset=*__t2447t;
  uint16_t buf__unsafe_align=*__t2448t;
  uint64_t __t1334t__=0;
  uint64_t __t1335t=0;
  char __t1336t__=0;
  uint64_t __t1337t__=0;
  uint64_t __t1338t=0;
  char __t1339t__=0;
  uint64_t __t1340t=0;
  uint64_t __t1341t__=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__pos=0;
  uint64_t __t1342t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t475t(buf__unsafe_align,&__t1334t__);
  __t1335t=8;
  neq__t142t(__t1334t__,__t1335t,&__t1336t__);
  if(__t1336t__){
  __t_errcode=34;
  goto __t_failure;
  }
  nat__t475t(buf__unsafe_offset,&__t1337t__);
  __t1338t=0;
  neq__t142t(__t1337t__,__t1338t,&__t1339t__);
  if(__t1339t__){
  __t_errcode=35;
  goto __t_failure;
  }
  __t1340t=0;
  len__t564t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1341t__);
  vec__t1283t(buf__unsafe_ptr,__t1340t,__t1341t__,&__t1342t__unsafe_ptr,&__t1342t__pos,&__t1342t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2445t=buf__unsafe_ptr;
  *__t2446t=buf__unsafe_size;
  *__t2447t=buf__unsafe_offset;
  *__t2448t=buf__unsafe_align;
  *__t2449t=__t1342t__unsafe_ptr;
  *__t2450t=__t1342t__pos;
  *__t2451t=__t1342t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t361t(const char* value, const char** __t2452t, const char** __t2453t) {
  goto __t_return;
  __t_return:
  *__t2452t=value;
  *__t2453t=__t362t;
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1293t(char** __t2454t, uint64_t* __t2455t, uint16_t* __t2456t, uint16_t* __t2457t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2454t=unsafe_ptr;
  *__t2455t=unsafe_size;
  *__t2456t=unsafe_offset;
  *__t2457t=unsafe_align;
}

int vec__t1327t(uint64_t length, char** __t2458t, uint64_t* __t2459t, uint64_t* __t2460t) {
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__unsafe_size=0;
  uint16_t __t1328t__unsafe_offset=0;
  uint16_t __t1328t__unsafe_align=0;
  char* __t1329t__unsafe_ptr=0;
  uint64_t __t1329t__unsafe_size=0;
  uint16_t __t1329t__unsafe_offset=0;
  uint16_t __t1329t__unsafe_align=0;
  uint64_t __t1330t____t480t=0;
  char __t1330t____t481t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1331t=0;
  char* __t1332t__unsafe_ptr=0;
  uint64_t __t1332t__pos=0;
  uint64_t __t1332t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1293t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align);
  __t_errcode=alloc__t478t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align,length,&__t1329t__unsafe_ptr,&__t1329t__unsafe_size,&__t1329t__unsafe_offset,&__t1329t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1329t__unsafe_ptr;
  buf__unsafe_size=__t1329t__unsafe_size;
  buf__unsafe_offset=__t1329t__unsafe_offset;
  buf__unsafe_align=__t1329t__unsafe_align;
  __t1331t=0;
  vec__t1283t(buf__unsafe_ptr,__t1331t,length,&__t1332t__unsafe_ptr,&__t1332t__pos,&__t1332t__length);
  goto __t_return;
  
  __t_failure:__t1330t____t480t=0;
  neq__t142t(__t1332t__length,__t1330t____t480t,&__t1330t____t481t__);
  if(__t1330t____t481t__){
  __t1332t__length=0;
  __t1332t__length=__t1332t__length;
  __t1332t__unsafe_ptr=__t1332t__unsafe_ptr;
  free__t471t(&__t1332t__unsafe_ptr);
  }
  __t_return:
  *__t2458t=__t1332t__unsafe_ptr;
  *__t2459t=__t1332t__pos;
  *__t2460t=__t1332t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t441t(uint64_t to, uint64_t* __t2461t, uint64_t* __t2462t) {
  int __t442t=0;
  uint64_t __t443t=0;
  uint64_t _from=0;
  uint64_t __t444t=0;
  uint64_t from=0;
  __t443t=0;
  _from=__t443t;
  __t444t=_from;
  from=__t444t;
  goto __t_return;
  __t_return:
  *__t2461t=from;
  *__t2462t=to;
}

static inline __attribute__((always_inline)) int next__t445t(uint64_t* __t2463t, uint64_t r__to, uint64_t* __t2464t) {
  uint64_t r__from=*__t2463t;
  char __t446t__=0;
  uint64_t ret=0;
  uint64_t __t447t=0;
  uint64_t __t448t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t446t__);
  if(__t446t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t447t=1;
  add__t170t(ret,__t447t,&__t448t__);
  r__from=__t448t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2463t=r__from;
  *__t2464t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1957t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2465t) {
  char __t1958t__=0;
  char __t1959t__=0;
  uint64_t __t1960t=0;
  uint64_t __t1961t__=0;
  uint64_t __t1962t__=0;
  uint64_t __t1963t__=0;
  uint64_t __t1964t__=0;
  char* __t1965t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1958t__);
  if(__t1958t__){
  __t_errcode=42;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1959t__);
  if(__t1959t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t1960t=8;
  mul__t194t(i,m__stride,&__t1961t__);
  add__t170t(__t1961t__,j,&__t1962t__);
  add__t170t(m__pos,__t1962t__,&__t1963t__);
  mul__t194t(__t1960t,__t1963t__,&__t1964t__);
  add__t473t(m__unsafe_ptr,__t1964t__,&__t1965t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2465t=__t1965t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1378t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2466t) {
  char __t1379t__=0;
  uint64_t __t1380t=0;
  uint64_t __t1381t__=0;
  uint64_t __t1382t__=0;
  char* __t1383t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1379t__);
  if(__t1379t__){
  __t_errcode=13;
  goto __t_failure;
  }
  __t1380t=8;
  add__t170t(i,v__pos,&__t1381t__);
  mul__t194t(__t1380t,__t1381t__,&__t1382t__);
  add__t473t(v__unsafe_ptr,__t1382t__,&__t1383t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2466t=__t1383t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t2467t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t2467t=__t71t__;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t2468t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2468t=z;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t2469t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2469t=z;
}

static inline __attribute__((always_inline)) int mutget__t1372t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2470t) {
  char __t1373t__=0;
  uint64_t __t1374t=0;
  uint64_t __t1375t__=0;
  uint64_t __t1376t__=0;
  char* __t1377t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1373t__);
  if(__t1373t__){
  __t_errcode=13;
  goto __t_failure;
  }
  __t1374t=8;
  add__t170t(i,v__pos,&__t1375t__);
  mul__t194t(__t1374t,__t1375t__,&__t1376t__);
  add__t473t(v__unsafe_ptr,__t1376t__,&__t1377t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2470t=__t1377t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1993t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2471t, uint64_t* __t2472t, uint64_t* __t2473t) {
  char __t1994t__=0;
  char* __t1995t__unsafe_ptr=0;
  uint64_t __t1995t__pos=0;
  uint64_t __t1995t__length=0;
  uint64_t __t1996t____t1330t____t480t=0;
  char __t1996t____t1330t____t481t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t1997t__from=0;
  uint64_t __t1997t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t1998t=0;
  uint64_t __t1999t__=0;
  uint64_t i=0;
  double __t2000t=0;
  double __t2001t=0;
  double acc=0;
  uint64_t __t2002t__from=0;
  uint64_t __t2002t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2003t=0;
  uint64_t __t2004t__=0;
  uint64_t j=0;
  char* __t2005t__=0;
  double __t2006t__z=0;
  char* __t2007t__=0;
  double __t2008t__z=0;
  double __t2009t__=0;
  double __t2010t__=0;
  char* __t2011t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m__cols,v__length,&__t1994t__);
  if(__t1994t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t_errcode=vec__t1327t(m__rows,&__t1995t__unsafe_ptr,&__t1995t__pos,&__t1995t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t1995t__unsafe_ptr;
  result__pos=__t1995t__pos;
  result__length=__t1995t__length;
  range__t441t(m__rows,&__t1997t__from,&__t1997t__to);
  it_i__from=__t1997t__from;
  it_i__to=__t1997t__to;
  while(1){
  __t_complain=next__t445t(&it_i__from,it_i__to,&__t1999t__);
  __t1998t=__t_complain;
  i=__t1999t__;
  __t1998t=__t1998t==0;
  if(!__t1998t){
  break;
  }
  __t2000t=0.0;
  __t2001t=__t2000t;
  acc=__t2001t;
  range__t441t(m__cols,&__t2002t__from,&__t2002t__to);
  it_j__from=__t2002t__from;
  it_j__to=__t2002t__to;
  while(1){
  __t_complain=next__t445t(&it_j__from,it_j__to,&__t2004t__);
  __t2003t=__t_complain;
  j=__t2004t__;
  __t2003t=__t2003t==0;
  if(!__t2003t){
  break;
  }
  __t_errcode=get__t1957t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2005t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2005t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2006t__z,__t2005t__,8);
  __t_errcode=get__t1378t(v__unsafe_ptr,v__pos,v__length,j,&__t2007t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2007t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2008t__z,__t2007t__,8);
  mul__t172t(__t2006t__z,__t2008t__z,&__t2009t__);
  add__t148t(acc,__t2009t__,&__t2010t__);
  acc=__t2010t__;
  }
  __t_errcode=mutget__t1372t(result__unsafe_ptr,result__pos,result__length,i,&__t2011t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2011t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2011t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t1996t____t1330t____t480t=0;
  neq__t142t(result__length,__t1996t____t1330t____t480t,&__t1996t____t1330t____t481t__);
  if(__t1996t____t1330t____t481t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t471t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2471t=result__unsafe_ptr;
  *__t2472t=result__pos;
  *__t2473t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t363t(double value, double* __t2474t, const char** __t2475t) {
  goto __t_return;
  __t_return:
  *__t2474t=value;
  *__t2475t=__t362t;
}

static inline __attribute__((always_inline)) void print__t371t(double value, const char* endl) {
  int __t372t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t2476t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2476t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t2477t) {
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
  *__t2477t=z;
  
  return __t_errcode;
}

int print__t1880t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t1881t=0;
  const char* endl=0;
  const char* __t1882t__value=0;
  const char* __t1882t____t362t=0;
  uint64_t __t1884t__from=0;
  uint64_t __t1884t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1885t=0;
  uint64_t __t1886t__=0;
  uint64_t i=0;
  char* __t1887t__=0;
  double __t1888t__z=0;
  double __t1889t__value=0;
  const char* __t1889t____t362t=0;
  uint64_t __t1891t=0;
  uint64_t __t1892t__=0;
  char __t1893t__=0;
  const char* __t1894t__value=0;
  const char* __t1894t____t362t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t370t;
  nn__t361t(__t1862t,&__t1882t__value,&__t1882t____t362t);
  print__t366t(__t1882t__value,__t1882t____t362t);
  range__t441t(v__length,&__t1884t__from,&__t1884t__to);
  it__from=__t1884t__from;
  it__to=__t1884t__to;
  while(1){
  __t_complain=next__t445t(&it__from,it__to,&__t1886t__);
  __t1885t=__t_complain;
  i=__t1886t__;
  __t1885t=__t1885t==0;
  if(!__t1885t){
  break;
  }
  __t_errcode=get__t1378t(v__unsafe_ptr,v__pos,v__length,i,&__t1887t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1887t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1888t__z,__t1887t__,8);
  nn__t363t(__t1888t__z,&__t1889t__value,&__t1889t____t362t);
  print__t371t(__t1889t__value,__t1889t____t362t);
  __t1891t=1;
  __t_errcode=sub__t347t(v__length,__t1891t,&__t1892t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t1892t__,&__t1893t__);
  if(__t1893t__){
  nn__t361t(__t1875t,&__t1894t__value,&__t1894t____t362t);
  print__t366t(__t1894t__value,__t1894t____t362t);
  }
  }
  print__t366t(__t1878t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2352t(char** __t2478t, uint64_t* __t2479t, uint16_t* __t2480t, uint16_t* __t2481t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2478t=unsafe_ptr;
  *__t2479t=unsafe_size;
  *__t2480t=unsafe_offset;
  *__t2481t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2048t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2482t, uint64_t* __t2483t, uint64_t* __t2484t) {
  char __t2049t__=0;
  char* __t2050t__unsafe_ptr=0;
  uint64_t __t2050t__pos=0;
  uint64_t __t2050t__length=0;
  uint64_t __t2051t____t1330t____t480t=0;
  char __t2051t____t1330t____t481t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2052t__from=0;
  uint64_t __t2052t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2053t=0;
  uint64_t __t2054t__=0;
  uint64_t j=0;
  double __t2055t=0;
  double __t2056t=0;
  double acc=0;
  uint64_t __t2057t__from=0;
  uint64_t __t2057t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2058t=0;
  uint64_t __t2059t__=0;
  uint64_t i=0;
  char* __t2060t__=0;
  double __t2061t__z=0;
  char* __t2062t__=0;
  double __t2063t__z=0;
  double __t2064t__=0;
  double __t2065t__=0;
  char* __t2066t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(v__length,m__rows,&__t2049t__);
  if(__t2049t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1327t(m__cols,&__t2050t__unsafe_ptr,&__t2050t__pos,&__t2050t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2050t__unsafe_ptr;
  result__pos=__t2050t__pos;
  result__length=__t2050t__length;
  range__t441t(m__cols,&__t2052t__from,&__t2052t__to);
  it_j__from=__t2052t__from;
  it_j__to=__t2052t__to;
  while(1){
  __t_complain=next__t445t(&it_j__from,it_j__to,&__t2054t__);
  __t2053t=__t_complain;
  j=__t2054t__;
  __t2053t=__t2053t==0;
  if(!__t2053t){
  break;
  }
  __t2055t=0.0;
  __t2056t=__t2055t;
  acc=__t2056t;
  range__t441t(m__rows,&__t2057t__from,&__t2057t__to);
  it_i__from=__t2057t__from;
  it_i__to=__t2057t__to;
  while(1){
  __t_complain=next__t445t(&it_i__from,it_i__to,&__t2059t__);
  __t2058t=__t_complain;
  i=__t2059t__;
  __t2058t=__t2058t==0;
  if(!__t2058t){
  break;
  }
  __t_errcode=get__t1378t(v__unsafe_ptr,v__pos,v__length,i,&__t2060t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2060t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2061t__z,__t2060t__,8);
  __t_errcode=get__t1957t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2062t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2062t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2063t__z,__t2062t__,8);
  mul__t172t(__t2061t__z,__t2063t__z,&__t2064t__);
  add__t148t(acc,__t2064t__,&__t2065t__);
  acc=__t2065t__;
  }
  __t_errcode=mutget__t1372t(result__unsafe_ptr,result__pos,result__length,j,&__t2066t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2066t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2066t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t2051t____t1330t____t480t=0;
  neq__t142t(result__length,__t2051t____t1330t____t480t,&__t2051t____t1330t____t481t__);
  if(__t2051t____t1330t____t481t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t471t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2482t=result__unsafe_ptr;
  *__t2483t=result__pos;
  *__t2484t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2369t(char** __t2485t, uint64_t* __t2486t, uint16_t* __t2487t, uint16_t* __t2488t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2485t=unsafe_ptr;
  *__t2486t=unsafe_size;
  *__t2487t=unsafe_offset;
  *__t2488t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int mat__t1899t(uint64_t rows, uint64_t cols, char** __t2489t, uint64_t* __t2490t, uint64_t* __t2491t, uint64_t* __t2492t, uint64_t* __t2493t) {
  char* __t1900t__unsafe_ptr=0;
  uint64_t __t1900t__unsafe_size=0;
  uint16_t __t1900t__unsafe_offset=0;
  uint16_t __t1900t__unsafe_align=0;
  uint64_t __t1901t__=0;
  char* __t1902t__unsafe_ptr=0;
  uint64_t __t1902t__unsafe_size=0;
  uint16_t __t1902t__unsafe_offset=0;
  uint16_t __t1902t__unsafe_align=0;
  uint64_t __t1903t____t480t=0;
  char __t1903t____t481t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1904t=0;
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__pos=0;
  uint64_t __t1905t__rows=0;
  uint64_t __t1905t__cols=0;
  uint64_t __t1905t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1293t(&__t1900t__unsafe_ptr,&__t1900t__unsafe_size,&__t1900t__unsafe_offset,&__t1900t__unsafe_align);
  mul__t194t(rows,cols,&__t1901t__);
  __t_errcode=alloc__t478t(&__t1900t__unsafe_ptr,&__t1900t__unsafe_size,&__t1900t__unsafe_offset,&__t1900t__unsafe_align,__t1901t__,&__t1902t__unsafe_ptr,&__t1902t__unsafe_size,&__t1902t__unsafe_offset,&__t1902t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1902t__unsafe_ptr;
  buf__unsafe_size=__t1902t__unsafe_size;
  buf__unsafe_offset=__t1902t__unsafe_offset;
  buf__unsafe_align=__t1902t__unsafe_align;
  __t1904t=0;
  mat__t1285t(buf__unsafe_ptr,__t1904t,rows,cols,cols,&__t1905t__unsafe_ptr,&__t1905t__pos,&__t1905t__rows,&__t1905t__cols,&__t1905t__stride);
  goto __t_return;
  
  __t_failure:__t1903t____t480t=0;
  neq__t142t(__t1902t__unsafe_size,__t1903t____t480t,&__t1903t____t481t__);
  if(__t1903t____t481t__){
  __t1902t__unsafe_size=0;
  __t1902t__unsafe_size=__t1902t__unsafe_size;
  __t1905t__unsafe_ptr=__t1905t__unsafe_ptr;
  free__t471t(&__t1905t__unsafe_ptr);
  }
  __t_return:
  *__t2489t=__t1905t__unsafe_ptr;
  *__t2490t=__t1905t__pos;
  *__t2491t=__t1905t__rows;
  *__t2492t=__t1905t__cols;
  *__t2493t=__t1905t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2103t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2494t, uint64_t* __t2495t, uint64_t* __t2496t, uint64_t* __t2497t, uint64_t* __t2498t) {
  char __t2104t__=0;
  char* __t2105t__unsafe_ptr=0;
  uint64_t __t2105t__pos=0;
  uint64_t __t2105t__rows=0;
  uint64_t __t2105t__cols=0;
  uint64_t __t2105t__stride=0;
  uint64_t __t2106t____t1903t____t480t=0;
  uint64_t __t2106t____t1902t__unsafe_size=0;
  char __t2106t____t1903t____t481t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2107t__from=0;
  uint64_t __t2107t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2108t=0;
  uint64_t __t2109t__=0;
  uint64_t i=0;
  uint64_t __t2110t__from=0;
  uint64_t __t2110t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2111t=0;
  uint64_t __t2112t__=0;
  uint64_t j=0;
  double __t2113t=0;
  double __t2114t=0;
  double acc=0;
  uint64_t __t2115t__from=0;
  uint64_t __t2115t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2116t=0;
  uint64_t __t2117t__=0;
  uint64_t k=0;
  char* __t2118t__=0;
  double __t2119t__z=0;
  char* __t2120t__=0;
  double __t2121t__z=0;
  double __t2122t__=0;
  double __t2123t__=0;
  char* __t2124t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m1__cols,m2__rows,&__t2104t__);
  if(__t2104t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=mat__t1899t(m1__rows,m2__cols,&__t2105t__unsafe_ptr,&__t2105t__pos,&__t2105t__rows,&__t2105t__cols,&__t2105t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2105t__unsafe_ptr;
  result__pos=__t2105t__pos;
  result__rows=__t2105t__rows;
  result__cols=__t2105t__cols;
  result__stride=__t2105t__stride;
  range__t441t(m1__rows,&__t2107t__from,&__t2107t__to);
  it_i__from=__t2107t__from;
  it_i__to=__t2107t__to;
  while(1){
  __t_complain=next__t445t(&it_i__from,it_i__to,&__t2109t__);
  __t2108t=__t_complain;
  i=__t2109t__;
  __t2108t=__t2108t==0;
  if(!__t2108t){
  break;
  }
  range__t441t(m2__cols,&__t2110t__from,&__t2110t__to);
  it_j__from=__t2110t__from;
  it_j__to=__t2110t__to;
  while(1){
  __t_complain=next__t445t(&it_j__from,it_j__to,&__t2112t__);
  __t2111t=__t_complain;
  j=__t2112t__;
  __t2111t=__t2111t==0;
  if(!__t2111t){
  break;
  }
  __t2113t=0.0;
  __t2114t=__t2113t;
  acc=__t2114t;
  range__t441t(m1__cols,&__t2115t__from,&__t2115t__to);
  it_k__from=__t2115t__from;
  it_k__to=__t2115t__to;
  while(1){
  __t_complain=next__t445t(&it_k__from,it_k__to,&__t2117t__);
  __t2116t=__t_complain;
  k=__t2117t__;
  __t2116t=__t2116t==0;
  if(!__t2116t){
  break;
  }
  __t_errcode=get__t1957t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2118t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2118t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2119t__z,__t2118t__,8);
  __t_errcode=get__t1957t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2120t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2120t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2121t__z,__t2120t__,8);
  mul__t172t(__t2119t__z,__t2121t__z,&__t2122t__);
  add__t148t(acc,__t2122t__,&__t2123t__);
  acc=__t2123t__;
  }
  __t_errcode=mutget__t1948t(result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2124t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2124t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2124t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:__t2106t____t1903t____t480t=0;
  neq__t142t(__t2106t____t1902t__unsafe_size,__t2106t____t1903t____t480t,&__t2106t____t1903t____t481t__);
  if(__t2106t____t1903t____t481t__){
  __t2106t____t1902t__unsafe_size=0;
  __t2106t____t1902t__unsafe_size=__t2106t____t1902t__unsafe_size;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t471t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2494t=result__unsafe_ptr;
  *__t2495t=result__pos;
  *__t2496t=result__rows;
  *__t2497t=result__cols;
  *__t2498t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2241t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2242t=0;
  const char* endl=0;
  uint64_t __t2243t__from=0;
  uint64_t __t2243t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2244t=0;
  uint64_t __t2245t__=0;
  uint64_t i=0;
  uint64_t __t2246t=0;
  char __t2247t__=0;
  uint64_t __t2249t=0;
  char __t2250t__=0;
  uint64_t __t2251t=0;
  char __t2252t__=0;
  char __t2253t=0;
  uint64_t __t2255t=0;
  char __t2256t__=0;
  uint64_t __t2257t=0;
  char __t2258t__=0;
  uint64_t __t2259t=0;
  uint64_t __t2260t__=0;
  char __t2261t__=0;
  char __t2262t=0;
  char __t2263t=0;
  uint64_t __t2265t=0;
  char __t2266t__=0;
  uint64_t __t2267t=0;
  uint64_t __t2268t__=0;
  char __t2269t__=0;
  char __t2270t=0;
  uint64_t __t2272t__from=0;
  uint64_t __t2272t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2273t=0;
  uint64_t __t2274t__=0;
  uint64_t j=0;
  char* __t2275t__=0;
  double __t2276t__z=0;
  uint64_t __t2278t=0;
  uint64_t __t2279t__=0;
  char __t2280t__=0;
  uint64_t __t2282t=0;
  char __t2283t__=0;
  uint64_t __t2285t=0;
  char __t2286t__=0;
  uint64_t __t2287t=0;
  char __t2288t__=0;
  char __t2289t=0;
  uint64_t __t2291t=0;
  char __t2292t__=0;
  uint64_t __t2293t=0;
  char __t2294t__=0;
  uint64_t __t2295t=0;
  uint64_t __t2296t__=0;
  char __t2297t__=0;
  char __t2298t=0;
  char __t2299t=0;
  uint64_t __t2301t=0;
  char __t2302t__=0;
  uint64_t __t2303t=0;
  uint64_t __t2304t__=0;
  char __t2305t__=0;
  char __t2306t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t370t;
  range__t441t(m__rows,&__t2243t__from,&__t2243t__to);
  it_i__from=__t2243t__from;
  it_i__to=__t2243t__to;
  while(1){
  __t_complain=next__t445t(&it_i__from,it_i__to,&__t2245t__);
  __t2244t=__t_complain;
  i=__t2245t__;
  __t2244t=__t2244t==0;
  if(!__t2244t){
  break;
  }
  __t2246t=1;
  eq__t118t(m__rows,__t2246t,&__t2247t__);
  if(__t2247t__){
  print__t366t(__t1862t,__t362t);
  }
  __t2249t=1;
  gt__t271t(m__rows,__t2249t,&__t2250t__);
  if(__t2250t__){
  __t2251t=0;
  eq__t118t(i,__t2251t,&__t2252t__);
  __t2253t=__t2252t__;
  }
  if(__t2253t){
  print__t366t(__t2180t,__t362t);
  }
  __t2255t=1;
  gt__t271t(m__rows,__t2255t,&__t2256t__);
  if(__t2256t__){
  __t2257t=0;
  gt__t271t(i,__t2257t,&__t2258t__);
  if(__t2258t__){
  __t2259t=1;
  __t_errcode=sub__t347t(m__rows,__t2259t,&__t2260t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2260t__,&__t2261t__);
  __t2262t=__t2261t__;
  }
  __t2263t=__t2262t;
  }
  if(__t2263t){
  print__t366t(__t2191t,__t362t);
  }
  __t2265t=1;
  gt__t271t(m__rows,__t2265t,&__t2266t__);
  if(__t2266t__){
  __t2267t=1;
  __t_errcode=sub__t347t(m__rows,__t2267t,&__t2268t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2268t__,&__t2269t__);
  __t2270t=__t2269t__;
  }
  if(__t2270t){
  print__t366t(__t2199t,__t362t);
  }
  range__t441t(m__cols,&__t2272t__from,&__t2272t__to);
  it_j__from=__t2272t__from;
  it_j__to=__t2272t__to;
  while(1){
  __t_complain=next__t445t(&it_j__from,it_j__to,&__t2274t__);
  __t2273t=__t_complain;
  j=__t2274t__;
  __t2273t=__t2273t==0;
  if(!__t2273t){
  break;
  }
  __t_errcode=get__t1957t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2275t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2275t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2276t__z,__t2275t__,8);
  print__t371t(__t2276t__z,__t362t);
  __t2278t=1;
  __t_errcode=sub__t347t(m__cols,__t2278t,&__t2279t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(j,__t2279t__,&__t2280t__);
  if(__t2280t__){
  print__t366t(__t1875t,__t362t);
  }
  }
  __t2282t=1;
  eq__t118t(m__rows,__t2282t,&__t2283t__);
  if(__t2283t__){
  print__t366t(__t1878t,__t362t);
  }
  __t2285t=1;
  gt__t271t(m__rows,__t2285t,&__t2286t__);
  if(__t2286t__){
  __t2287t=0;
  eq__t118t(i,__t2287t,&__t2288t__);
  __t2289t=__t2288t__;
  }
  if(__t2289t){
  print__t366t(__t2219t,__t362t);
  }
  __t2291t=1;
  gt__t271t(m__rows,__t2291t,&__t2292t__);
  if(__t2292t__){
  __t2293t=0;
  gt__t271t(i,__t2293t,&__t2294t__);
  if(__t2294t__){
  __t2295t=1;
  __t_errcode=sub__t347t(m__rows,__t2295t,&__t2296t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2296t__,&__t2297t__);
  __t2298t=__t2297t__;
  }
  __t2299t=__t2298t;
  }
  if(__t2299t){
  print__t366t(__t2230t,__t362t);
  }
  __t2301t=1;
  gt__t271t(m__rows,__t2301t,&__t2302t__);
  if(__t2302t__){
  __t2303t=1;
  __t_errcode=sub__t347t(m__rows,__t2303t,&__t2304t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2304t__,&__t2305t__);
  __t2306t=__t2305t__;
  }
  if(__t2306t){
  print__t366t(__t2238t,__t362t);
  }
  print__t366t(__t362t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2309t() {
  double __t2311t=0;
  double __t2316t=0;
  double __t2317t=0;
  double __t2318t=0;
  double __t2319t=0;
  double __t2320t=0;
  char* __t2321t__unsafe_ptr=0;
  uint64_t __t2321t__unsafe_size=0;
  uint16_t __t2321t__unsafe_offset=0;
  uint16_t __t2321t__unsafe_align=0;
  uint64_t __t2322t=0;
  char* __t2323t__unsafe_ptr=0;
  uint64_t __t2323t__unsafe_size=0;
  uint16_t __t2323t__unsafe_offset=0;
  uint16_t __t2323t__unsafe_align=0;
  uint64_t __t2324t____t480t=0;
  char __t2324t____t481t__=0;
  uint64_t __t2325t=0;
  char* __t2326t__unsafe_ptr=0;
  uint64_t __t2326t__pos=0;
  uint64_t __t2326t__rows=0;
  uint64_t __t2326t__cols=0;
  uint64_t __t2326t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t2327t=0;
  uint64_t __t2328t=0;
  char* __t2329t__=0;
  double __t2330t=0;
  double __t2331t=0;
  double __t2336t=0;
  double __t2337t=0;
  char* __t2338t__unsafe_ptr=0;
  uint64_t __t2338t__unsafe_size=0;
  uint16_t __t2338t__unsafe_offset=0;
  uint16_t __t2338t__unsafe_align=0;
  uint64_t __t2339t=0;
  char* __t2340t__unsafe_ptr=0;
  uint64_t __t2340t__unsafe_size=0;
  uint16_t __t2340t__unsafe_offset=0;
  uint16_t __t2340t__unsafe_align=0;
  uint64_t __t2341t____t480t=0;
  char __t2341t____t481t__=0;
  char* __t2342t__unsafe_ptr=0;
  uint64_t __t2342t__pos=0;
  uint64_t __t2342t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t2344t__value=0;
  const char* __t2344t____t362t=0;
  char* __t2346t__unsafe_ptr=0;
  uint64_t __t2346t__pos=0;
  uint64_t __t2346t__length=0;
  uint64_t __t2347t____t1996t____t1330t____t480t=0;
  char __t2347t____t1996t____t1330t____t481t__=0;
  double __t2349t=0;
  double __t2354t=0;
  char* __t2355t__unsafe_ptr=0;
  uint64_t __t2355t__unsafe_size=0;
  uint16_t __t2355t__unsafe_offset=0;
  uint16_t __t2355t__unsafe_align=0;
  uint64_t __t2356t=0;
  char* __t2357t__unsafe_ptr=0;
  uint64_t __t2357t__unsafe_size=0;
  uint16_t __t2357t__unsafe_offset=0;
  uint16_t __t2357t__unsafe_align=0;
  uint64_t __t2358t____t480t=0;
  char __t2358t____t481t__=0;
  char* __t2359t__unsafe_ptr=0;
  uint64_t __t2359t__pos=0;
  uint64_t __t2359t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t2361t__value=0;
  const char* __t2361t____t362t=0;
  char* __t2363t__unsafe_ptr=0;
  uint64_t __t2363t__pos=0;
  uint64_t __t2363t__length=0;
  uint64_t __t2364t____t2051t____t1330t____t480t=0;
  char __t2364t____t2051t____t1330t____t481t__=0;
  double __t2366t=0;
  double __t2371t=0;
  double __t2372t=0;
  double __t2373t=0;
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
  uint64_t __t2379t____t480t=0;
  char __t2379t____t481t__=0;
  uint64_t __t2380t=0;
  char* __t2381t__unsafe_ptr=0;
  uint64_t __t2381t__pos=0;
  uint64_t __t2381t__rows=0;
  uint64_t __t2381t__cols=0;
  uint64_t __t2381t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2384t__unsafe_ptr=0;
  uint64_t __t2384t__pos=0;
  uint64_t __t2384t__rows=0;
  uint64_t __t2384t__cols=0;
  uint64_t __t2384t__stride=0;
  uint64_t __t2385t____t2106t____t1903t____t480t=0;
  uint64_t __t2385t____t2106t____t1902t__unsafe_size=0;
  char __t2385t____t2106t____t1903t____t481t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1287t();
  __t2311t=1.0;
  __t2316t=0.0;
  __t2317t=2.0;
  __t2318t=0.0;
  __t2319t=3.0;
  __t2320t=1.0;
  float____buffer__t2314t(&__t2321t__unsafe_ptr,&__t2321t__unsafe_size,&__t2321t__unsafe_offset,&__t2321t__unsafe_align);
  __t2322t=6;
  __t_errcode=alloc__t478t(&__t2321t__unsafe_ptr,&__t2321t__unsafe_size,&__t2321t__unsafe_offset,&__t2321t__unsafe_align,__t2322t,&__t2323t__unsafe_ptr,&__t2323t__unsafe_size,&__t2323t__unsafe_offset,&__t2323t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2321t__unsafe_ptr,&__t2311t,8);
  memcpy(__t2321t__unsafe_ptr+8,&__t2316t,8);
  memcpy(__t2321t__unsafe_ptr+16,&__t2317t,8);
  memcpy(__t2321t__unsafe_ptr+24,&__t2318t,8);
  memcpy(__t2321t__unsafe_ptr+32,&__t2319t,8);
  memcpy(__t2321t__unsafe_ptr+40,&__t2320t,8);
  __t2325t=2;
  __t_errcode=mat__t1920t(&__t2321t__unsafe_ptr,&__t2321t__unsafe_size,&__t2321t__unsafe_offset,&__t2321t__unsafe_align,__t2325t,&__t2326t__unsafe_ptr,&__t2326t__pos,&__t2326t__rows,&__t2326t__cols,&__t2326t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2326t__unsafe_ptr;
  a__pos=__t2326t__pos;
  a__rows=__t2326t__rows;
  a__cols=__t2326t__cols;
  a__stride=__t2326t__stride;
  __t2327t=0;
  __t2328t=0;
  __t_errcode=mutget__t1948t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t2327t,__t2328t,&__t2329t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2330t=1.0;
  if(!__t2329t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2329t__,&__t2330t,8);
  __t2331t=1.0;
  __t2336t=2.0;
  __t2337t=3.0;
  float____buffer__t2334t(&__t2338t__unsafe_ptr,&__t2338t__unsafe_size,&__t2338t__unsafe_offset,&__t2338t__unsafe_align);
  __t2339t=3;
  __t_errcode=alloc__t478t(&__t2338t__unsafe_ptr,&__t2338t__unsafe_size,&__t2338t__unsafe_offset,&__t2338t__unsafe_align,__t2339t,&__t2340t__unsafe_ptr,&__t2340t__unsafe_size,&__t2340t__unsafe_offset,&__t2340t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2338t__unsafe_ptr,&__t2331t,8);
  memcpy(__t2338t__unsafe_ptr+8,&__t2336t,8);
  memcpy(__t2338t__unsafe_ptr+16,&__t2337t,8);
  __t_errcode=vec__t1333t(&__t2338t__unsafe_ptr,&__t2338t__unsafe_size,&__t2338t__unsafe_offset,&__t2338t__unsafe_align,&__t2342t__unsafe_ptr,&__t2342t__pos,&__t2342t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2342t__unsafe_ptr;
  x__pos=__t2342t__pos;
  x__length=__t2342t__length;
  nn__t361t(__t2343t,&__t2344t__value,&__t2344t____t362t);
  print__t366t(__t2344t__value,__t2344t____t362t);
  __t_errcode=mul__t1993t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2346t__unsafe_ptr,&__t2346t__pos,&__t2346t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1880t(__t2346t__unsafe_ptr,__t2346t__pos,__t2346t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2349t=1.0;
  __t2354t=2.0;
  float____buffer__t2352t(&__t2355t__unsafe_ptr,&__t2355t__unsafe_size,&__t2355t__unsafe_offset,&__t2355t__unsafe_align);
  __t2356t=2;
  __t_errcode=alloc__t478t(&__t2355t__unsafe_ptr,&__t2355t__unsafe_size,&__t2355t__unsafe_offset,&__t2355t__unsafe_align,__t2356t,&__t2357t__unsafe_ptr,&__t2357t__unsafe_size,&__t2357t__unsafe_offset,&__t2357t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2355t__unsafe_ptr,&__t2349t,8);
  memcpy(__t2355t__unsafe_ptr+8,&__t2354t,8);
  __t_errcode=vec__t1333t(&__t2355t__unsafe_ptr,&__t2355t__unsafe_size,&__t2355t__unsafe_offset,&__t2355t__unsafe_align,&__t2359t__unsafe_ptr,&__t2359t__pos,&__t2359t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2359t__unsafe_ptr;
  u__pos=__t2359t__pos;
  u__length=__t2359t__length;
  nn__t361t(__t2360t,&__t2361t__value,&__t2361t____t362t);
  print__t366t(__t2361t__value,__t2361t____t362t);
  __t_errcode=mul__t2048t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2363t__unsafe_ptr,&__t2363t__pos,&__t2363t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1880t(__t2363t__unsafe_ptr,__t2363t__pos,__t2363t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2366t=1.0;
  __t2371t=2.0;
  __t2372t=3.0;
  __t2373t=4.0;
  __t2374t=5.0;
  __t2375t=6.0;
  float____buffer__t2369t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align);
  __t2377t=6;
  __t_errcode=alloc__t478t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align,__t2377t,&__t2378t__unsafe_ptr,&__t2378t__unsafe_size,&__t2378t__unsafe_offset,&__t2378t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2376t__unsafe_ptr,&__t2366t,8);
  memcpy(__t2376t__unsafe_ptr+8,&__t2371t,8);
  memcpy(__t2376t__unsafe_ptr+16,&__t2372t,8);
  memcpy(__t2376t__unsafe_ptr+24,&__t2373t,8);
  memcpy(__t2376t__unsafe_ptr+32,&__t2374t,8);
  memcpy(__t2376t__unsafe_ptr+40,&__t2375t,8);
  __t2380t=3;
  __t_errcode=mat__t1920t(&__t2376t__unsafe_ptr,&__t2376t__unsafe_size,&__t2376t__unsafe_offset,&__t2376t__unsafe_align,__t2380t,&__t2381t__unsafe_ptr,&__t2381t__pos,&__t2381t__rows,&__t2381t__cols,&__t2381t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2381t__unsafe_ptr;
  b__pos=__t2381t__pos;
  b__rows=__t2381t__rows;
  b__cols=__t2381t__cols;
  b__stride=__t2381t__stride;
  print__t368t(__t2382t);
  __t_errcode=mul__t2103t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2384t__unsafe_ptr,&__t2384t__pos,&__t2384t__rows,&__t2384t__cols,&__t2384t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2241t(__t2384t__unsafe_ptr,__t2384t__pos,__t2384t__rows,__t2384t__cols,__t2384t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t2385t____t2106t____t1903t____t480t=0;
  neq__t142t(__t2385t____t2106t____t1902t__unsafe_size,__t2385t____t2106t____t1903t____t480t,&__t2385t____t2106t____t1903t____t481t__);
  if(__t2385t____t2106t____t1903t____t481t__){
  __t2385t____t2106t____t1902t__unsafe_size=0;
  __t2385t____t2106t____t1902t__unsafe_size=__t2385t____t2106t____t1902t__unsafe_size;
  __t2384t__unsafe_ptr=__t2384t__unsafe_ptr;
  free__t471t(&__t2384t__unsafe_ptr);
  }
  __t2379t____t480t=0;
  neq__t142t(__t2378t__unsafe_size,__t2379t____t480t,&__t2379t____t481t__);
  if(__t2379t____t481t__){
  __t2378t__unsafe_size=0;
  __t2378t__unsafe_size=__t2378t__unsafe_size;
  __t2378t__unsafe_ptr=__t2378t__unsafe_ptr;
  free__t471t(&__t2378t__unsafe_ptr);
  }
  __t2364t____t2051t____t1330t____t480t=0;
  neq__t142t(__t2363t__length,__t2364t____t2051t____t1330t____t480t,&__t2364t____t2051t____t1330t____t481t__);
  if(__t2364t____t2051t____t1330t____t481t__){
  __t2363t__length=0;
  __t2363t__length=__t2363t__length;
  __t2363t__unsafe_ptr=__t2363t__unsafe_ptr;
  free__t471t(&__t2363t__unsafe_ptr);
  }
  __t2358t____t480t=0;
  neq__t142t(__t2357t__unsafe_size,__t2358t____t480t,&__t2358t____t481t__);
  if(__t2358t____t481t__){
  __t2357t__unsafe_size=0;
  __t2357t__unsafe_size=__t2357t__unsafe_size;
  __t2357t__unsafe_ptr=__t2357t__unsafe_ptr;
  free__t471t(&__t2357t__unsafe_ptr);
  }
  __t2347t____t1996t____t1330t____t480t=0;
  neq__t142t(__t2346t__length,__t2347t____t1996t____t1330t____t480t,&__t2347t____t1996t____t1330t____t481t__);
  if(__t2347t____t1996t____t1330t____t481t__){
  __t2346t__length=0;
  __t2346t__length=__t2346t__length;
  __t2346t__unsafe_ptr=__t2346t__unsafe_ptr;
  free__t471t(&__t2346t__unsafe_ptr);
  }
  __t2341t____t480t=0;
  neq__t142t(__t2340t__unsafe_size,__t2341t____t480t,&__t2341t____t481t__);
  if(__t2341t____t481t__){
  __t2340t__unsafe_size=0;
  __t2340t__unsafe_size=__t2340t__unsafe_size;
  __t2340t__unsafe_ptr=__t2340t__unsafe_ptr;
  free__t471t(&__t2340t__unsafe_ptr);
  }
  __t2324t____t480t=0;
  neq__t142t(__t2323t__unsafe_size,__t2324t____t480t,&__t2324t____t481t__);
  if(__t2324t____t481t__){
  __t2323t__unsafe_size=0;
  __t2323t__unsafe_size=__t2323t__unsafe_size;
  __t2323t__unsafe_ptr=__t2323t__unsafe_ptr;
  free__t471t(&__t2323t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2309t();return 0;}