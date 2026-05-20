#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t2235t=" ⎦";
const char* const __t822t="";
const char* const __t2373t="a*b";
const char* const __t2336t="a*x";
const char* const __t2352t="u*a";
const char* const __t1853t="[ ";
const char* const __t1866t=" ]";
const char* const __t2216t=" ⎤";
const char* const __t2227t=" ⎥";
const char* const __t1864t="  ";
const char* const __t2177t="⎡ ";
const char* const __t2196t="⎣ ";
const char* const __t2188t="⎢ ";
static const char* __t_all_errcodes[48] = {"noerr",
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
"cannot exactly buffer size by vector rows",
"row out of bounds",
"column out of bounds",
"cannot view non-contiguous matrix as vector without copying",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void new__t1278t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t2311t(char** __t2378t, uint64_t* __t2379t, uint16_t* __t2380t, uint16_t* __t2381t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2378t=unsafe_ptr;
  *__t2379t=unsafe_size;
  *__t2380t=unsafe_offset;
  *__t2381t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2382t) {
  int value=0;
  *__t2382t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t2383t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t2383t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t2384t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t2384t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t2385t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2385t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t2386t) {
  char* allocated=*__t2386t;
  if(allocated){
  free(allocated);
  }
  *__t2386t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t2387t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2387t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t2388t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2388t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t2389t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2389t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t2390t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2390t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t2391t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2391t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t2392t) {
  char* allocated=0;
  char __t460t__=0;
  char __t461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t412t(allocated,&__t460t__);
  not__t26t(__t460t__,&__t461t__);
  if(__t461t__){
  __t_errcode=8;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2392t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t2393t, uint64_t* __t2394t, uint16_t* __t2395t, uint16_t* __t2396t, uint64_t size, char** __t2397t, uint64_t* __t2398t, uint16_t* __t2399t, uint16_t* __t2400t) {
  char* buffer__unsafe_ptr=*__t2393t;
  uint64_t buffer__unsafe_size=*__t2394t;
  uint16_t buffer__unsafe_offset=*__t2395t;
  uint16_t buffer__unsafe_align=*__t2396t;
  int __t474t=0;
  uint64_t __t475t=0;
  char __t476t__=0;
  uint64_t __t477t=0;
  char* ptr=0;
  char __t479t__=0;
  uint64_t __t480t=0;
  char __t481t__=0;
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  uint64_t __t484t__=0;
  char* __t486t__unsafe_ptr=0;
  uint64_t __t486t__unsafe_size=0;
  uint16_t __t486t__unsafe_offset=0;
  uint16_t __t486t__unsafe_align=0;
  uint64_t __t487t=0;
  char __t488t__=0;
  uint64_t __t489t__=0;
  uint64_t __t490t__=0;
  uint64_t bytes=0;
  char* __t491t__=0;
  uint64_t __t492t=0;
  char* __t494t__unsafe_ptr=0;
  uint64_t __t494t__unsafe_size=0;
  uint16_t __t494t__unsafe_offset=0;
  uint16_t __t494t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t479t__);
  if(__t479t__){
  __t480t=0;
  neq__t142t(size,__t480t,&__t481t__);
  if(__t481t__){
  __t482t=0;
  nat__t470t(buffer__unsafe_align,&__t483t__);
  mul__t194t(__t483t__,size,&__t484t__);
  zero__t467t(buffer__unsafe_ptr,__t482t,__t484t__);
  }
  __t486t__unsafe_ptr=buffer__unsafe_ptr;
  __t486t__unsafe_size=buffer__unsafe_size;
  __t486t__unsafe_offset=buffer__unsafe_offset;
  __t486t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t487t=0;
  neq__t142t(buffer__unsafe_size,__t487t,&__t488t__);
  if(__t488t__){
  __t_errcode=10;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t489t__);
  mul__t194t(__t489t__,size,&__t490t__);
  bytes=__t490t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t459t(bytes,&__t491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t491t__;
  __t492t=0;
  zero__t467t(buffer__unsafe_ptr,__t492t,bytes);
  __t494t__unsafe_ptr=buffer__unsafe_ptr;
  __t494t__unsafe_size=buffer__unsafe_size;
  __t494t__unsafe_offset=buffer__unsafe_offset;
  __t494t__unsafe_align=buffer__unsafe_align;
  __t486t__unsafe_ptr=__t494t__unsafe_ptr;
  __t486t__unsafe_size=__t494t__unsafe_size;
  __t486t__unsafe_offset=__t494t__unsafe_offset;
  __t486t__unsafe_align=__t494t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t475t=0;
  neq__t142t(__t486t__unsafe_size,__t475t,&__t476t__);
  if(__t476t__){
  __t486t__unsafe_size=0;
  __t486t__unsafe_size=__t486t__unsafe_size;
  __t486t__unsafe_ptr=__t486t__unsafe_ptr;
  free__t466t(&__t486t__unsafe_ptr);
  }
  __t_return:
  *__t2393t=buffer__unsafe_ptr;
  *__t2394t=buffer__unsafe_size;
  *__t2395t=buffer__unsafe_offset;
  *__t2396t=buffer__unsafe_align;
  *__t2397t=__t486t__unsafe_ptr;
  *__t2398t=__t486t__unsafe_size;
  *__t2399t=__t486t__unsafe_offset;
  *__t2400t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2401t) {
  goto __t_return;
  __t_return:
  *__t2401t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t2402t) {
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
  __t_errcode=2;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2402t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t2403t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2403t=z;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t2404t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2404t=z;
}

static inline __attribute__((always_inline)) void mat__t1882t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t2405t, uint64_t* __t2406t, uint64_t* __t2407t, uint64_t* __t2408t, uint64_t* __t2409t) {
  goto __t_return;
  __t_return:
  *__t2405t=unsafe_ptr;
  *__t2406t=pos;
  *__t2407t=rows;
  *__t2408t=cols;
  *__t2409t=stride;
}

static inline __attribute__((always_inline)) int mat__t1893t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t2410t, uint64_t rows, uint64_t cols, char** __t2411t, uint64_t* __t2412t, uint64_t* __t2413t, uint64_t* __t2414t, uint64_t* __t2415t) {
  uint64_t allocator__pos=*__t2410t;
  uint64_t __t1894t__=0;
  uint64_t __t1895t=0;
  char __t1896t__=0;
  uint64_t __t1897t__=0;
  uint64_t __t1898t=0;
  char __t1899t__=0;
  uint64_t __t1900t__=0;
  uint64_t __t1901t__=0;
  uint64_t __t1902t__=0;
  char __t1903t__=0;
  uint64_t start=0;
  uint64_t __t1904t__=0;
  uint64_t __t1905t__=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__pos=0;
  uint64_t __t1906t__rows=0;
  uint64_t __t1906t__cols=0;
  uint64_t __t1906t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t470t(allocator__buf__unsafe_align,&__t1894t__);
  __t1895t=8;
  neq__t142t(__t1894t__,__t1895t,&__t1896t__);
  if(__t1896t__){
  __t_errcode=37;
  goto __t_failure;
  }
  nat__t470t(allocator__buf__unsafe_offset,&__t1897t__);
  __t1898t=0;
  neq__t142t(__t1897t__,__t1898t,&__t1899t__);
  if(__t1899t__){
  __t_errcode=38;
  goto __t_failure;
  }
  mul__t194t(rows,cols,&__t1900t__);
  add__t170t(allocator__pos,__t1900t__,&__t1901t__);
  len__t559t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1902t__);
  gt__t271t(__t1901t__,__t1902t__,&__t1903t__);
  if(__t1903t__){
  __t_errcode=39;
  goto __t_failure;
  }
  start=allocator__pos;
  mul__t194t(rows,cols,&__t1904t__);
  add__t170t(allocator__pos,__t1904t__,&__t1905t__);
  allocator__pos=__t1905t__;
  mat__t1882t(allocator__buf__unsafe_ptr,start,rows,cols,cols,&__t1906t__unsafe_ptr,&__t1906t__pos,&__t1906t__rows,&__t1906t__cols,&__t1906t__stride);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2410t=allocator__pos;
  *__t2411t=__t1906t__unsafe_ptr;
  *__t2412t=__t1906t__pos;
  *__t2413t=__t1906t__rows;
  *__t2414t=__t1906t__cols;
  *__t2415t=__t1906t__stride;
  
  return __t_errcode;
}

int mat__t1907t(char** __t2416t, uint64_t* __t2417t, uint16_t* __t2418t, uint16_t* __t2419t, uint64_t rows, char** __t2420t, uint64_t* __t2421t, uint64_t* __t2422t, uint64_t* __t2423t, uint64_t* __t2424t) {
  char* buf__unsafe_ptr=*__t2416t;
  uint64_t buf__unsafe_size=*__t2417t;
  uint16_t buf__unsafe_offset=*__t2418t;
  uint16_t buf__unsafe_align=*__t2419t;
  uint64_t __t1908t__=0;
  uint64_t __t1909t__=0;
  uint64_t cols=0;
  uint64_t __t1910t__=0;
  uint64_t __t1911t__=0;
  char __t1912t__=0;
  uint64_t __t1913t=0;
  uint64_t __t1914t=0;
  char* __t1915t__unsafe_ptr=0;
  uint64_t __t1915t__pos=0;
  uint64_t __t1915t__rows=0;
  uint64_t __t1915t__cols=0;
  uint64_t __t1915t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1908t__);
  __t_errcode=div__t220t(__t1908t__,rows,&__t1909t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t1909t__;
  mul__t194t(cols,rows,&__t1910t__);
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1911t__);
  neq__t142t(__t1910t__,__t1911t__,&__t1912t__);
  if(__t1912t__){
  __t_errcode=40;
  goto __t_failure;
  }
  __t1913t=0;
  __t1914t=__t1913t;
  __t_errcode=mat__t1893t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1914t,rows,cols,&__t1915t__unsafe_ptr,&__t1915t__pos,&__t1915t__rows,&__t1915t__cols,&__t1915t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2416t=buf__unsafe_ptr;
  *__t2417t=buf__unsafe_size;
  *__t2418t=buf__unsafe_offset;
  *__t2419t=buf__unsafe_align;
  *__t2420t=__t1915t__unsafe_ptr;
  *__t2421t=__t1915t__pos;
  *__t2422t=__t1915t__rows;
  *__t2423t=__t1915t__cols;
  *__t2424t=__t1915t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2327t(char** __t2425t, uint64_t* __t2426t, uint16_t* __t2427t, uint16_t* __t2428t) {
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

static inline __attribute__((always_inline)) void vec__t1317t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2429t, uint64_t* __t2430t, uint64_t* __t2431t) {
  goto __t_return;
  __t_return:
  *__t2429t=unsafe_ptr;
  *__t2430t=pos;
  *__t2431t=length;
}

static inline __attribute__((always_inline)) int vec__t1325t(char** __t2432t, uint64_t* __t2433t, uint16_t* __t2434t, uint16_t* __t2435t, char** __t2436t, uint64_t* __t2437t, uint64_t* __t2438t) {
  char* buf__unsafe_ptr=*__t2432t;
  uint64_t buf__unsafe_size=*__t2433t;
  uint16_t buf__unsafe_offset=*__t2434t;
  uint16_t buf__unsafe_align=*__t2435t;
  uint64_t __t1326t__=0;
  uint64_t __t1327t=0;
  char __t1328t__=0;
  uint64_t __t1329t__=0;
  uint64_t __t1330t=0;
  char __t1331t__=0;
  uint64_t __t1332t=0;
  uint64_t __t1333t__=0;
  char* __t1334t__unsafe_ptr=0;
  uint64_t __t1334t__pos=0;
  uint64_t __t1334t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t470t(buf__unsafe_align,&__t1326t__);
  __t1327t=8;
  neq__t142t(__t1326t__,__t1327t,&__t1328t__);
  if(__t1328t__){
  __t_errcode=33;
  goto __t_failure;
  }
  nat__t470t(buf__unsafe_offset,&__t1329t__);
  __t1330t=0;
  neq__t142t(__t1329t__,__t1330t,&__t1331t__);
  if(__t1331t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1332t=0;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1333t__);
  vec__t1317t(buf__unsafe_ptr,__t1332t,__t1333t__,&__t1334t__unsafe_ptr,&__t1334t__pos,&__t1334t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2432t=buf__unsafe_ptr;
  *__t2433t=buf__unsafe_size;
  *__t2434t=buf__unsafe_offset;
  *__t2435t=buf__unsafe_align;
  *__t2436t=__t1334t__unsafe_ptr;
  *__t2437t=__t1334t__pos;
  *__t2438t=__t1334t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1283t(char** __t2439t, uint64_t* __t2440t, uint16_t* __t2441t, uint16_t* __t2442t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2439t=unsafe_ptr;
  *__t2440t=unsafe_size;
  *__t2441t=unsafe_offset;
  *__t2442t=unsafe_align;
}

int vec__t1319t(uint64_t length, char** __t2443t, uint64_t* __t2444t, uint64_t* __t2445t) {
  char* __t1320t__unsafe_ptr=0;
  uint64_t __t1320t__unsafe_size=0;
  uint16_t __t1320t__unsafe_offset=0;
  uint16_t __t1320t__unsafe_align=0;
  char* __t1321t__unsafe_ptr=0;
  uint64_t __t1321t__unsafe_size=0;
  uint16_t __t1321t__unsafe_offset=0;
  uint16_t __t1321t__unsafe_align=0;
  uint64_t __t1322t____t475t=0;
  char __t1322t____t476t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1323t=0;
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__pos=0;
  uint64_t __t1324t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1283t(&__t1320t__unsafe_ptr,&__t1320t__unsafe_size,&__t1320t__unsafe_offset,&__t1320t__unsafe_align);
  __t_errcode=alloc__t473t(&__t1320t__unsafe_ptr,&__t1320t__unsafe_size,&__t1320t__unsafe_offset,&__t1320t__unsafe_align,length,&__t1321t__unsafe_ptr,&__t1321t__unsafe_size,&__t1321t__unsafe_offset,&__t1321t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1321t__unsafe_ptr;
  buf__unsafe_size=__t1321t__unsafe_size;
  buf__unsafe_offset=__t1321t__unsafe_offset;
  buf__unsafe_align=__t1321t__unsafe_align;
  __t1323t=0;
  vec__t1317t(buf__unsafe_ptr,__t1323t,length,&__t1324t__unsafe_ptr,&__t1324t__pos,&__t1324t__length);
  goto __t_return;
  
  __t_failure:__t1322t____t475t=0;
  neq__t142t(__t1324t__length,__t1322t____t475t,&__t1322t____t476t__);
  if(__t1322t____t476t__){
  __t1324t__length=0;
  __t1324t__length=__t1324t__length;
  __t1324t__unsafe_ptr=__t1324t__unsafe_ptr;
  free__t466t(&__t1324t__unsafe_ptr);
  }
  __t_return:
  *__t2443t=__t1324t__unsafe_ptr;
  *__t2444t=__t1324t__pos;
  *__t2445t=__t1324t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t2446t, uint64_t* __t2447t) {
  int __t437t=0;
  uint64_t __t438t=0;
  uint64_t _from=0;
  uint64_t __t439t=0;
  uint64_t from=0;
  __t438t=0;
  _from=__t438t;
  __t439t=_from;
  from=__t439t;
  goto __t_return;
  __t_return:
  *__t2446t=from;
  *__t2447t=to;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t2448t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2448t=z;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t2449t, uint64_t r__to, uint64_t* __t2450t) {
  uint64_t r__from=*__t2449t;
  char __t441t__=0;
  uint64_t ret=0;
  uint64_t __t442t=0;
  uint64_t __t443t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t441t__);
  if(__t441t__){
  __t_errcode=7;
  goto __t_failure;
  }
  ret=r__from;
  __t442t=1;
  add__t170t(ret,__t442t,&__t443t__);
  r__from=__t443t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2449t=r__from;
  *__t2450t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t2451t) {
  *__t2451t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t2452t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t2452t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t1944t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2453t) {
  char __t1945t__=0;
  char __t1946t__=0;
  uint64_t __t1947t=0;
  uint64_t __t1948t__=0;
  uint64_t __t1949t__=0;
  uint64_t __t1950t__=0;
  uint64_t __t1951t__=0;
  char* __t1952t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1945t__);
  if(__t1945t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1946t__);
  if(__t1946t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t1947t=8;
  mul__t194t(i,m__stride,&__t1948t__);
  add__t170t(__t1948t__,j,&__t1949t__);
  add__t170t(m__pos,__t1949t__,&__t1950t__);
  mul__t194t(__t1947t,__t1950t__,&__t1951t__);
  add__t468t(m__unsafe_ptr,__t1951t__,&__t1952t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2453t=__t1952t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1370t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2454t) {
  char __t1371t__=0;
  uint64_t __t1372t=0;
  uint64_t __t1373t__=0;
  uint64_t __t1374t__=0;
  char* __t1375t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1371t__);
  if(__t1371t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t1372t=8;
  add__t170t(i,v__pos,&__t1373t__);
  mul__t194t(__t1372t,__t1373t__,&__t1374t__);
  add__t468t(v__unsafe_ptr,__t1374t__,&__t1375t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2454t=__t1375t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t2455t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t2455t=__t71t__;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t2456t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2456t=z;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t2457t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2457t=z;
}

static inline __attribute__((always_inline)) int mutget__t1364t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t2458t) {
  char __t1365t__=0;
  uint64_t __t1366t=0;
  uint64_t __t1367t__=0;
  uint64_t __t1368t__=0;
  char* __t1369t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1365t__);
  if(__t1365t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t1366t=8;
  add__t170t(i,v__pos,&__t1367t__);
  mul__t194t(__t1366t,__t1367t__,&__t1368t__);
  add__t468t(v__unsafe_ptr,__t1368t__,&__t1369t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2458t=__t1369t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1990t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t2459t, uint64_t* __t2460t, uint64_t* __t2461t) {
  char __t1991t__=0;
  char* __t1992t__unsafe_ptr=0;
  uint64_t __t1992t__pos=0;
  uint64_t __t1992t__length=0;
  uint64_t __t1993t____t1322t____t475t=0;
  char __t1993t____t1322t____t476t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t1994t__from=0;
  uint64_t __t1994t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t1995t=0;
  uint64_t __t1996t__=0;
  uint64_t i=0;
  double __t1997t=0;
  double __t1998t=0;
  double acc=0;
  uint64_t __t1999t__from=0;
  uint64_t __t1999t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2000t=0;
  uint64_t __t2001t__=0;
  uint64_t j=0;
  char* __t2002t__=0;
  double __t2003t__value=0;
  char* __t2004t__=0;
  double __t2005t__value=0;
  double __t2006t__=0;
  double __t2007t__=0;
  char* __t2008t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m__cols,v__length,&__t1991t__);
  if(__t1991t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t_errcode=vec__t1319t(m__rows,&__t1992t__unsafe_ptr,&__t1992t__pos,&__t1992t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t1992t__unsafe_ptr;
  result__pos=__t1992t__pos;
  result__length=__t1992t__length;
  range__t436t(m__rows,&__t1994t__from,&__t1994t__to);
  it_i__from=__t1994t__from;
  it_i__to=__t1994t__to;
  while(1){
  __t_complain=next__t440t(&it_i__from,it_i__to,&__t1996t__);
  __t1995t=__t_complain;
  i=__t1996t__;
  __t1995t=__t1995t==0;
  if(!__t1995t){
  break;
  }
  __t1997t=0.0;
  __t1998t=__t1997t;
  acc=__t1998t;
  range__t436t(m__cols,&__t1999t__from,&__t1999t__to);
  it_j__from=__t1999t__from;
  it_j__to=__t1999t__to;
  while(1){
  __t_complain=next__t440t(&it_j__from,it_j__to,&__t2001t__);
  __t2000t=__t_complain;
  j=__t2001t__;
  __t2000t=__t2000t==0;
  if(!__t2000t){
  break;
  }
  __t_errcode=get__t1944t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2002t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2002t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2003t__value,__t2002t__,8);
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,j,&__t2004t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2004t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2005t__value,__t2004t__,8);
  mul__t172t(__t2003t__value,__t2005t__value,&__t2006t__);
  add__t148t(acc,__t2006t__,&__t2007t__);
  acc=__t2007t__;
  }
  __t_errcode=mutget__t1364t(result__unsafe_ptr,result__pos,result__length,i,&__t2008t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2008t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2008t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t1993t____t1322t____t475t=0;
  neq__t142t(result__length,__t1993t____t1322t____t475t,&__t1993t____t1322t____t476t__);
  if(__t1993t____t1322t____t476t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t466t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2459t=result__unsafe_ptr;
  *__t2460t=result__pos;
  *__t2461t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t361t(const char* value, const char* endl) {
  int __t362t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t366t(double value, const char* endl) {
  int __t367t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t2462t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2462t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t2463t) {
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
  __t_errcode=4;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2463t=z;
  
  return __t_errcode;
}

int print__t1868t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t1869t=0;
  const char* endl=0;
  uint64_t __t1871t__from=0;
  uint64_t __t1871t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1872t=0;
  uint64_t __t1873t__=0;
  uint64_t i=0;
  char* __t1874t__=0;
  double __t1875t__value=0;
  uint64_t __t1877t=0;
  uint64_t __t1878t__=0;
  char __t1879t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t365t;
  print__t361t(__t1853t,__t822t);
  range__t436t(v__length,&__t1871t__from,&__t1871t__to);
  it__from=__t1871t__from;
  it__to=__t1871t__to;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1873t__);
  __t1872t=__t_complain;
  i=__t1873t__;
  __t1872t=__t1872t==0;
  if(!__t1872t){
  break;
  }
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,i,&__t1874t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1874t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1875t__value,__t1874t__,8);
  print__t366t(__t1875t__value,__t822t);
  __t1877t=1;
  __t_errcode=sub__t347t(v__length,__t1877t,&__t1878t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t1878t__,&__t1879t__);
  if(__t1879t__){
  print__t361t(__t1864t,__t822t);
  }
  }
  print__t361t(__t1866t,endl);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2344t(char** __t2464t, uint64_t* __t2465t, uint16_t* __t2466t, uint16_t* __t2467t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2464t=unsafe_ptr;
  *__t2465t=unsafe_size;
  *__t2466t=unsafe_offset;
  *__t2467t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t2045t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t2468t, uint64_t* __t2469t, uint64_t* __t2470t) {
  char __t2046t__=0;
  char* __t2047t__unsafe_ptr=0;
  uint64_t __t2047t__pos=0;
  uint64_t __t2047t__length=0;
  uint64_t __t2048t____t1322t____t475t=0;
  char __t2048t____t1322t____t476t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2049t__from=0;
  uint64_t __t2049t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2050t=0;
  uint64_t __t2051t__=0;
  uint64_t j=0;
  double __t2052t=0;
  double __t2053t=0;
  double acc=0;
  uint64_t __t2054t__from=0;
  uint64_t __t2054t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2055t=0;
  uint64_t __t2056t__=0;
  uint64_t i=0;
  char* __t2057t__=0;
  double __t2058t__value=0;
  char* __t2059t__=0;
  double __t2060t__value=0;
  double __t2061t__=0;
  double __t2062t__=0;
  char* __t2063t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(v__length,m__rows,&__t2046t__);
  if(__t2046t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1319t(m__cols,&__t2047t__unsafe_ptr,&__t2047t__pos,&__t2047t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2047t__unsafe_ptr;
  result__pos=__t2047t__pos;
  result__length=__t2047t__length;
  range__t436t(m__cols,&__t2049t__from,&__t2049t__to);
  it_j__from=__t2049t__from;
  it_j__to=__t2049t__to;
  while(1){
  __t_complain=next__t440t(&it_j__from,it_j__to,&__t2051t__);
  __t2050t=__t_complain;
  j=__t2051t__;
  __t2050t=__t2050t==0;
  if(!__t2050t){
  break;
  }
  __t2052t=0.0;
  __t2053t=__t2052t;
  acc=__t2053t;
  range__t436t(m__rows,&__t2054t__from,&__t2054t__to);
  it_i__from=__t2054t__from;
  it_i__to=__t2054t__to;
  while(1){
  __t_complain=next__t440t(&it_i__from,it_i__to,&__t2056t__);
  __t2055t=__t_complain;
  i=__t2056t__;
  __t2055t=__t2055t==0;
  if(!__t2055t){
  break;
  }
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,i,&__t2057t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2057t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2058t__value,__t2057t__,8);
  __t_errcode=get__t1944t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2059t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2059t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2060t__value,__t2059t__,8);
  mul__t172t(__t2058t__value,__t2060t__value,&__t2061t__);
  add__t148t(acc,__t2061t__,&__t2062t__);
  acc=__t2062t__;
  }
  __t_errcode=mutget__t1364t(result__unsafe_ptr,result__pos,result__length,j,&__t2063t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2063t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2063t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:__t2048t____t1322t____t475t=0;
  neq__t142t(result__length,__t2048t____t1322t____t475t,&__t2048t____t1322t____t476t__);
  if(__t2048t____t1322t____t476t__){
  result__length=0;
  result__length=result__length;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t466t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2468t=result__unsafe_ptr;
  *__t2469t=result__pos;
  *__t2470t=result__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t2360t(char** __t2471t, uint64_t* __t2472t, uint16_t* __t2473t, uint16_t* __t2474t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2471t=unsafe_ptr;
  *__t2472t=unsafe_size;
  *__t2473t=unsafe_offset;
  *__t2474t=unsafe_align;
}

static inline __attribute__((always_inline)) int mat__t1886t(uint64_t rows, uint64_t cols, char** __t2475t, uint64_t* __t2476t, uint64_t* __t2477t, uint64_t* __t2478t, uint64_t* __t2479t) {
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__unsafe_size=0;
  uint16_t __t1887t__unsafe_offset=0;
  uint16_t __t1887t__unsafe_align=0;
  uint64_t __t1888t__=0;
  char* __t1889t__unsafe_ptr=0;
  uint64_t __t1889t__unsafe_size=0;
  uint16_t __t1889t__unsafe_offset=0;
  uint16_t __t1889t__unsafe_align=0;
  uint64_t __t1890t____t475t=0;
  char __t1890t____t476t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1891t=0;
  char* __t1892t__unsafe_ptr=0;
  uint64_t __t1892t__pos=0;
  uint64_t __t1892t__rows=0;
  uint64_t __t1892t__cols=0;
  uint64_t __t1892t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1283t(&__t1887t__unsafe_ptr,&__t1887t__unsafe_size,&__t1887t__unsafe_offset,&__t1887t__unsafe_align);
  mul__t194t(rows,cols,&__t1888t__);
  __t_errcode=alloc__t473t(&__t1887t__unsafe_ptr,&__t1887t__unsafe_size,&__t1887t__unsafe_offset,&__t1887t__unsafe_align,__t1888t__,&__t1889t__unsafe_ptr,&__t1889t__unsafe_size,&__t1889t__unsafe_offset,&__t1889t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1889t__unsafe_ptr;
  buf__unsafe_size=__t1889t__unsafe_size;
  buf__unsafe_offset=__t1889t__unsafe_offset;
  buf__unsafe_align=__t1889t__unsafe_align;
  __t1891t=0;
  mat__t1882t(buf__unsafe_ptr,__t1891t,rows,cols,cols,&__t1892t__unsafe_ptr,&__t1892t__pos,&__t1892t__rows,&__t1892t__cols,&__t1892t__stride);
  goto __t_return;
  
  __t_failure:__t1890t____t475t=0;
  neq__t142t(__t1889t__unsafe_size,__t1890t____t475t,&__t1890t____t476t__);
  if(__t1890t____t476t__){
  __t1889t__unsafe_size=0;
  __t1889t__unsafe_size=__t1889t__unsafe_size;
  __t1892t__unsafe_ptr=__t1892t__unsafe_ptr;
  free__t466t(&__t1892t__unsafe_ptr);
  }
  __t_return:
  *__t2475t=__t1892t__unsafe_ptr;
  *__t2476t=__t1892t__pos;
  *__t2477t=__t1892t__rows;
  *__t2478t=__t1892t__cols;
  *__t2479t=__t1892t__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1935t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t2480t) {
  char __t1936t__=0;
  char __t1937t__=0;
  uint64_t __t1938t=0;
  uint64_t __t1939t__=0;
  uint64_t __t1940t__=0;
  uint64_t __t1941t__=0;
  uint64_t __t1942t__=0;
  char* __t1943t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,m__rows,&__t1936t__);
  if(__t1936t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t319t(j,m__cols,&__t1937t__);
  if(__t1937t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t1938t=8;
  mul__t194t(i,m__stride,&__t1939t__);
  add__t170t(__t1939t__,j,&__t1940t__);
  add__t170t(m__pos,__t1940t__,&__t1941t__);
  mul__t194t(__t1938t,__t1941t__,&__t1942t__);
  add__t468t(m__unsafe_ptr,__t1942t__,&__t1943t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2480t=__t1943t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2100t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t2481t, uint64_t* __t2482t, uint64_t* __t2483t, uint64_t* __t2484t, uint64_t* __t2485t) {
  char __t2101t__=0;
  char* __t2102t__unsafe_ptr=0;
  uint64_t __t2102t__pos=0;
  uint64_t __t2102t__rows=0;
  uint64_t __t2102t__cols=0;
  uint64_t __t2102t__stride=0;
  uint64_t __t2103t____t1890t____t475t=0;
  uint64_t __t2103t____t1889t__unsafe_size=0;
  char __t2103t____t1890t____t476t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t2104t__from=0;
  uint64_t __t2104t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2105t=0;
  uint64_t __t2106t__=0;
  uint64_t i=0;
  uint64_t __t2107t__from=0;
  uint64_t __t2107t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2108t=0;
  uint64_t __t2109t__=0;
  uint64_t j=0;
  double __t2110t=0;
  double __t2111t=0;
  double acc=0;
  uint64_t __t2112t__from=0;
  uint64_t __t2112t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2113t=0;
  uint64_t __t2114t__=0;
  uint64_t k=0;
  char* __t2115t__=0;
  double __t2116t__value=0;
  char* __t2117t__=0;
  double __t2118t__value=0;
  double __t2119t__=0;
  double __t2120t__=0;
  char* __t2121t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(m1__cols,m2__rows,&__t2101t__);
  if(__t2101t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=mat__t1886t(m1__rows,m2__cols,&__t2102t__unsafe_ptr,&__t2102t__pos,&__t2102t__rows,&__t2102t__cols,&__t2102t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2102t__unsafe_ptr;
  result__pos=__t2102t__pos;
  result__rows=__t2102t__rows;
  result__cols=__t2102t__cols;
  result__stride=__t2102t__stride;
  range__t436t(m1__rows,&__t2104t__from,&__t2104t__to);
  it_i__from=__t2104t__from;
  it_i__to=__t2104t__to;
  while(1){
  __t_complain=next__t440t(&it_i__from,it_i__to,&__t2106t__);
  __t2105t=__t_complain;
  i=__t2106t__;
  __t2105t=__t2105t==0;
  if(!__t2105t){
  break;
  }
  range__t436t(m2__cols,&__t2107t__from,&__t2107t__to);
  it_j__from=__t2107t__from;
  it_j__to=__t2107t__to;
  while(1){
  __t_complain=next__t440t(&it_j__from,it_j__to,&__t2109t__);
  __t2108t=__t_complain;
  j=__t2109t__;
  __t2108t=__t2108t==0;
  if(!__t2108t){
  break;
  }
  __t2110t=0.0;
  __t2111t=__t2110t;
  acc=__t2111t;
  range__t436t(m1__cols,&__t2112t__from,&__t2112t__to);
  it_k__from=__t2112t__from;
  it_k__to=__t2112t__to;
  while(1){
  __t_complain=next__t440t(&it_k__from,it_k__to,&__t2114t__);
  __t2113t=__t_complain;
  k=__t2114t__;
  __t2113t=__t2113t==0;
  if(!__t2113t){
  break;
  }
  __t_errcode=get__t1944t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t2115t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2115t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2116t__value,__t2115t__,8);
  __t_errcode=get__t1944t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t2117t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2117t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2118t__value,__t2117t__,8);
  mul__t172t(__t2116t__value,__t2118t__value,&__t2119t__);
  add__t148t(acc,__t2119t__,&__t2120t__);
  acc=__t2120t__;
  }
  __t_errcode=mutget__t1935t(result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t2121t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2121t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2121t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:__t2103t____t1890t____t475t=0;
  neq__t142t(__t2103t____t1889t__unsafe_size,__t2103t____t1890t____t475t,&__t2103t____t1890t____t476t__);
  if(__t2103t____t1890t____t476t__){
  __t2103t____t1889t__unsafe_size=0;
  __t2103t____t1889t__unsafe_size=__t2103t____t1889t__unsafe_size;
  result__unsafe_ptr=result__unsafe_ptr;
  free__t466t(&result__unsafe_ptr);
  }
  __t_return:
  *__t2481t=result__unsafe_ptr;
  *__t2482t=result__pos;
  *__t2483t=result__rows;
  *__t2484t=result__cols;
  *__t2485t=result__stride;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t2238t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t2239t=0;
  const char* endl=0;
  uint64_t __t2240t__from=0;
  uint64_t __t2240t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t2241t=0;
  uint64_t __t2242t__=0;
  uint64_t i=0;
  uint64_t __t2243t=0;
  char __t2244t__=0;
  uint64_t __t2246t=0;
  char __t2247t__=0;
  uint64_t __t2248t=0;
  char __t2249t__=0;
  char __t2250t=0;
  uint64_t __t2252t=0;
  char __t2253t__=0;
  uint64_t __t2254t=0;
  char __t2255t__=0;
  uint64_t __t2256t=0;
  uint64_t __t2257t__=0;
  char __t2258t__=0;
  char __t2259t=0;
  char __t2260t=0;
  uint64_t __t2262t=0;
  char __t2263t__=0;
  uint64_t __t2264t=0;
  uint64_t __t2265t__=0;
  char __t2266t__=0;
  char __t2267t=0;
  uint64_t __t2269t__from=0;
  uint64_t __t2269t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t2270t=0;
  uint64_t __t2271t__=0;
  uint64_t j=0;
  char* __t2272t__=0;
  double __t2273t__value=0;
  uint64_t __t2275t=0;
  uint64_t __t2276t__=0;
  char __t2277t__=0;
  uint64_t __t2279t=0;
  char __t2280t__=0;
  uint64_t __t2282t=0;
  char __t2283t__=0;
  uint64_t __t2284t=0;
  char __t2285t__=0;
  char __t2286t=0;
  uint64_t __t2288t=0;
  char __t2289t__=0;
  uint64_t __t2290t=0;
  char __t2291t__=0;
  uint64_t __t2292t=0;
  uint64_t __t2293t__=0;
  char __t2294t__=0;
  char __t2295t=0;
  char __t2296t=0;
  uint64_t __t2298t=0;
  char __t2299t__=0;
  uint64_t __t2300t=0;
  uint64_t __t2301t__=0;
  char __t2302t__=0;
  char __t2303t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t365t;
  range__t436t(m__rows,&__t2240t__from,&__t2240t__to);
  it_i__from=__t2240t__from;
  it_i__to=__t2240t__to;
  while(1){
  __t_complain=next__t440t(&it_i__from,it_i__to,&__t2242t__);
  __t2241t=__t_complain;
  i=__t2242t__;
  __t2241t=__t2241t==0;
  if(!__t2241t){
  break;
  }
  __t2243t=1;
  eq__t118t(m__rows,__t2243t,&__t2244t__);
  if(__t2244t__){
  print__t361t(__t1853t,__t822t);
  }
  __t2246t=1;
  gt__t271t(m__rows,__t2246t,&__t2247t__);
  if(__t2247t__){
  __t2248t=0;
  eq__t118t(i,__t2248t,&__t2249t__);
  __t2250t=__t2249t__;
  }
  if(__t2250t){
  print__t361t(__t2177t,__t822t);
  }
  __t2252t=1;
  gt__t271t(m__rows,__t2252t,&__t2253t__);
  if(__t2253t__){
  __t2254t=0;
  gt__t271t(i,__t2254t,&__t2255t__);
  if(__t2255t__){
  __t2256t=1;
  __t_errcode=sub__t347t(m__rows,__t2256t,&__t2257t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2257t__,&__t2258t__);
  __t2259t=__t2258t__;
  }
  __t2260t=__t2259t;
  }
  if(__t2260t){
  print__t361t(__t2188t,__t822t);
  }
  __t2262t=1;
  gt__t271t(m__rows,__t2262t,&__t2263t__);
  if(__t2263t__){
  __t2264t=1;
  __t_errcode=sub__t347t(m__rows,__t2264t,&__t2265t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2265t__,&__t2266t__);
  __t2267t=__t2266t__;
  }
  if(__t2267t){
  print__t361t(__t2196t,__t822t);
  }
  range__t436t(m__cols,&__t2269t__from,&__t2269t__to);
  it_j__from=__t2269t__from;
  it_j__to=__t2269t__to;
  while(1){
  __t_complain=next__t440t(&it_j__from,it_j__to,&__t2271t__);
  __t2270t=__t_complain;
  j=__t2271t__;
  __t2270t=__t2270t==0;
  if(!__t2270t){
  break;
  }
  __t_errcode=get__t1944t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t2272t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2272t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2273t__value,__t2272t__,8);
  print__t366t(__t2273t__value,__t822t);
  __t2275t=1;
  __t_errcode=sub__t347t(m__cols,__t2275t,&__t2276t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(j,__t2276t__,&__t2277t__);
  if(__t2277t__){
  print__t361t(__t1864t,__t822t);
  }
  }
  __t2279t=1;
  eq__t118t(m__rows,__t2279t,&__t2280t__);
  if(__t2280t__){
  print__t361t(__t1866t,__t822t);
  }
  __t2282t=1;
  gt__t271t(m__rows,__t2282t,&__t2283t__);
  if(__t2283t__){
  __t2284t=0;
  eq__t118t(i,__t2284t,&__t2285t__);
  __t2286t=__t2285t__;
  }
  if(__t2286t){
  print__t361t(__t2216t,__t822t);
  }
  __t2288t=1;
  gt__t271t(m__rows,__t2288t,&__t2289t__);
  if(__t2289t__){
  __t2290t=0;
  gt__t271t(i,__t2290t,&__t2291t__);
  if(__t2291t__){
  __t2292t=1;
  __t_errcode=sub__t347t(m__rows,__t2292t,&__t2293t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t247t(i,__t2293t__,&__t2294t__);
  __t2295t=__t2294t__;
  }
  __t2296t=__t2295t;
  }
  if(__t2296t){
  print__t361t(__t2227t,__t822t);
  }
  __t2298t=1;
  gt__t271t(m__rows,__t2298t,&__t2299t__);
  if(__t2299t__){
  __t2300t=1;
  __t_errcode=sub__t347t(m__rows,__t2300t,&__t2301t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t118t(i,__t2301t__,&__t2302t__);
  __t2303t=__t2302t__;
  }
  if(__t2303t){
  print__t361t(__t2235t,__t822t);
  }
  print__t361t(__t822t,endl);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2306t() {
  double __t2308t=0;
  double __t2313t=0;
  double __t2314t=0;
  double __t2315t=0;
  double __t2316t=0;
  double __t2317t=0;
  char* __t2318t__unsafe_ptr=0;
  uint64_t __t2318t__unsafe_size=0;
  uint16_t __t2318t__unsafe_offset=0;
  uint16_t __t2318t__unsafe_align=0;
  uint64_t __t2319t=0;
  char* __t2320t__unsafe_ptr=0;
  uint64_t __t2320t__unsafe_size=0;
  uint16_t __t2320t__unsafe_offset=0;
  uint16_t __t2320t__unsafe_align=0;
  uint64_t __t2321t____t475t=0;
  char __t2321t____t476t__=0;
  uint64_t __t2322t=0;
  char* __t2323t__unsafe_ptr=0;
  uint64_t __t2323t__pos=0;
  uint64_t __t2323t__rows=0;
  uint64_t __t2323t__cols=0;
  uint64_t __t2323t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  double __t2324t=0;
  double __t2329t=0;
  double __t2330t=0;
  char* __t2331t__unsafe_ptr=0;
  uint64_t __t2331t__unsafe_size=0;
  uint16_t __t2331t__unsafe_offset=0;
  uint16_t __t2331t__unsafe_align=0;
  uint64_t __t2332t=0;
  char* __t2333t__unsafe_ptr=0;
  uint64_t __t2333t__unsafe_size=0;
  uint16_t __t2333t__unsafe_offset=0;
  uint16_t __t2333t__unsafe_align=0;
  uint64_t __t2334t____t475t=0;
  char __t2334t____t476t__=0;
  char* __t2335t__unsafe_ptr=0;
  uint64_t __t2335t__pos=0;
  uint64_t __t2335t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  char* __t2338t__unsafe_ptr=0;
  uint64_t __t2338t__pos=0;
  uint64_t __t2338t__length=0;
  uint64_t __t2339t____t1993t____t1322t____t475t=0;
  char __t2339t____t1993t____t1322t____t476t__=0;
  double __t2341t=0;
  double __t2346t=0;
  char* __t2347t__unsafe_ptr=0;
  uint64_t __t2347t__unsafe_size=0;
  uint16_t __t2347t__unsafe_offset=0;
  uint16_t __t2347t__unsafe_align=0;
  uint64_t __t2348t=0;
  char* __t2349t__unsafe_ptr=0;
  uint64_t __t2349t__unsafe_size=0;
  uint16_t __t2349t__unsafe_offset=0;
  uint16_t __t2349t__unsafe_align=0;
  uint64_t __t2350t____t475t=0;
  char __t2350t____t476t__=0;
  char* __t2351t__unsafe_ptr=0;
  uint64_t __t2351t__pos=0;
  uint64_t __t2351t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  char* __t2354t__unsafe_ptr=0;
  uint64_t __t2354t__pos=0;
  uint64_t __t2354t__length=0;
  uint64_t __t2355t____t2048t____t1322t____t475t=0;
  char __t2355t____t2048t____t1322t____t476t__=0;
  double __t2357t=0;
  double __t2362t=0;
  double __t2363t=0;
  double __t2364t=0;
  double __t2365t=0;
  double __t2366t=0;
  char* __t2367t__unsafe_ptr=0;
  uint64_t __t2367t__unsafe_size=0;
  uint16_t __t2367t__unsafe_offset=0;
  uint16_t __t2367t__unsafe_align=0;
  uint64_t __t2368t=0;
  char* __t2369t__unsafe_ptr=0;
  uint64_t __t2369t__unsafe_size=0;
  uint16_t __t2369t__unsafe_offset=0;
  uint16_t __t2369t__unsafe_align=0;
  uint64_t __t2370t____t475t=0;
  char __t2370t____t476t__=0;
  uint64_t __t2371t=0;
  char* __t2372t__unsafe_ptr=0;
  uint64_t __t2372t__pos=0;
  uint64_t __t2372t__rows=0;
  uint64_t __t2372t__cols=0;
  uint64_t __t2372t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t2375t__unsafe_ptr=0;
  uint64_t __t2375t__pos=0;
  uint64_t __t2375t__rows=0;
  uint64_t __t2375t__cols=0;
  uint64_t __t2375t__stride=0;
  uint64_t __t2376t____t2103t____t1890t____t475t=0;
  uint64_t __t2376t____t2103t____t1889t__unsafe_size=0;
  char __t2376t____t2103t____t1890t____t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1278t();
  __t2308t=1.0;
  __t2313t=0.0;
  __t2314t=2.0;
  __t2315t=0.0;
  __t2316t=3.0;
  __t2317t=1.0;
  float____buffer__t2311t(&__t2318t__unsafe_ptr,&__t2318t__unsafe_size,&__t2318t__unsafe_offset,&__t2318t__unsafe_align);
  __t2319t=6;
  __t_errcode=alloc__t473t(&__t2318t__unsafe_ptr,&__t2318t__unsafe_size,&__t2318t__unsafe_offset,&__t2318t__unsafe_align,__t2319t,&__t2320t__unsafe_ptr,&__t2320t__unsafe_size,&__t2320t__unsafe_offset,&__t2320t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2318t__unsafe_ptr,&__t2308t,8);
  memcpy(__t2318t__unsafe_ptr+8,&__t2313t,8);
  memcpy(__t2318t__unsafe_ptr+16,&__t2314t,8);
  memcpy(__t2318t__unsafe_ptr+24,&__t2315t,8);
  memcpy(__t2318t__unsafe_ptr+32,&__t2316t,8);
  memcpy(__t2318t__unsafe_ptr+40,&__t2317t,8);
  __t2322t=2;
  __t_errcode=mat__t1907t(&__t2318t__unsafe_ptr,&__t2318t__unsafe_size,&__t2318t__unsafe_offset,&__t2318t__unsafe_align,__t2322t,&__t2323t__unsafe_ptr,&__t2323t__pos,&__t2323t__rows,&__t2323t__cols,&__t2323t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t2323t__unsafe_ptr;
  a__pos=__t2323t__pos;
  a__rows=__t2323t__rows;
  a__cols=__t2323t__cols;
  a__stride=__t2323t__stride;
  __t2324t=1.0;
  __t2329t=2.0;
  __t2330t=3.0;
  float____buffer__t2327t(&__t2331t__unsafe_ptr,&__t2331t__unsafe_size,&__t2331t__unsafe_offset,&__t2331t__unsafe_align);
  __t2332t=3;
  __t_errcode=alloc__t473t(&__t2331t__unsafe_ptr,&__t2331t__unsafe_size,&__t2331t__unsafe_offset,&__t2331t__unsafe_align,__t2332t,&__t2333t__unsafe_ptr,&__t2333t__unsafe_size,&__t2333t__unsafe_offset,&__t2333t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2331t__unsafe_ptr,&__t2324t,8);
  memcpy(__t2331t__unsafe_ptr+8,&__t2329t,8);
  memcpy(__t2331t__unsafe_ptr+16,&__t2330t,8);
  __t_errcode=vec__t1325t(&__t2331t__unsafe_ptr,&__t2331t__unsafe_size,&__t2331t__unsafe_offset,&__t2331t__unsafe_align,&__t2335t__unsafe_ptr,&__t2335t__pos,&__t2335t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t2335t__unsafe_ptr;
  x__pos=__t2335t__pos;
  x__length=__t2335t__length;
  print__t363t(__t2336t);
  __t_errcode=mul__t1990t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t2338t__unsafe_ptr,&__t2338t__pos,&__t2338t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1868t(__t2338t__unsafe_ptr,__t2338t__pos,__t2338t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2341t=1.0;
  __t2346t=2.0;
  float____buffer__t2344t(&__t2347t__unsafe_ptr,&__t2347t__unsafe_size,&__t2347t__unsafe_offset,&__t2347t__unsafe_align);
  __t2348t=2;
  __t_errcode=alloc__t473t(&__t2347t__unsafe_ptr,&__t2347t__unsafe_size,&__t2347t__unsafe_offset,&__t2347t__unsafe_align,__t2348t,&__t2349t__unsafe_ptr,&__t2349t__unsafe_size,&__t2349t__unsafe_offset,&__t2349t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2347t__unsafe_ptr,&__t2341t,8);
  memcpy(__t2347t__unsafe_ptr+8,&__t2346t,8);
  __t_errcode=vec__t1325t(&__t2347t__unsafe_ptr,&__t2347t__unsafe_size,&__t2347t__unsafe_offset,&__t2347t__unsafe_align,&__t2351t__unsafe_ptr,&__t2351t__pos,&__t2351t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t2351t__unsafe_ptr;
  u__pos=__t2351t__pos;
  u__length=__t2351t__length;
  print__t363t(__t2352t);
  __t_errcode=mul__t2045t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t2354t__unsafe_ptr,&__t2354t__pos,&__t2354t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1868t(__t2354t__unsafe_ptr,__t2354t__pos,__t2354t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2357t=1.0;
  __t2362t=2.0;
  __t2363t=3.0;
  __t2364t=4.0;
  __t2365t=5.0;
  __t2366t=6.0;
  float____buffer__t2360t(&__t2367t__unsafe_ptr,&__t2367t__unsafe_size,&__t2367t__unsafe_offset,&__t2367t__unsafe_align);
  __t2368t=6;
  __t_errcode=alloc__t473t(&__t2367t__unsafe_ptr,&__t2367t__unsafe_size,&__t2367t__unsafe_offset,&__t2367t__unsafe_align,__t2368t,&__t2369t__unsafe_ptr,&__t2369t__unsafe_size,&__t2369t__unsafe_offset,&__t2369t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t2367t__unsafe_ptr,&__t2357t,8);
  memcpy(__t2367t__unsafe_ptr+8,&__t2362t,8);
  memcpy(__t2367t__unsafe_ptr+16,&__t2363t,8);
  memcpy(__t2367t__unsafe_ptr+24,&__t2364t,8);
  memcpy(__t2367t__unsafe_ptr+32,&__t2365t,8);
  memcpy(__t2367t__unsafe_ptr+40,&__t2366t,8);
  __t2371t=3;
  __t_errcode=mat__t1907t(&__t2367t__unsafe_ptr,&__t2367t__unsafe_size,&__t2367t__unsafe_offset,&__t2367t__unsafe_align,__t2371t,&__t2372t__unsafe_ptr,&__t2372t__pos,&__t2372t__rows,&__t2372t__cols,&__t2372t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t2372t__unsafe_ptr;
  b__pos=__t2372t__pos;
  b__rows=__t2372t__rows;
  b__cols=__t2372t__cols;
  b__stride=__t2372t__stride;
  print__t363t(__t2373t);
  __t_errcode=mul__t2100t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t2375t__unsafe_ptr,&__t2375t__pos,&__t2375t__rows,&__t2375t__cols,&__t2375t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t2238t(__t2375t__unsafe_ptr,__t2375t__pos,__t2375t__rows,__t2375t__cols,__t2375t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t2376t____t2103t____t1890t____t475t=0;
  neq__t142t(__t2376t____t2103t____t1889t__unsafe_size,__t2376t____t2103t____t1890t____t475t,&__t2376t____t2103t____t1890t____t476t__);
  if(__t2376t____t2103t____t1890t____t476t__){
  __t2376t____t2103t____t1889t__unsafe_size=0;
  __t2376t____t2103t____t1889t__unsafe_size=__t2376t____t2103t____t1889t__unsafe_size;
  __t2375t__unsafe_ptr=__t2375t__unsafe_ptr;
  free__t466t(&__t2375t__unsafe_ptr);
  }
  __t2370t____t475t=0;
  neq__t142t(__t2369t__unsafe_size,__t2370t____t475t,&__t2370t____t476t__);
  if(__t2370t____t476t__){
  __t2369t__unsafe_size=0;
  __t2369t__unsafe_size=__t2369t__unsafe_size;
  __t2369t__unsafe_ptr=__t2369t__unsafe_ptr;
  free__t466t(&__t2369t__unsafe_ptr);
  }
  __t2355t____t2048t____t1322t____t475t=0;
  neq__t142t(__t2354t__length,__t2355t____t2048t____t1322t____t475t,&__t2355t____t2048t____t1322t____t476t__);
  if(__t2355t____t2048t____t1322t____t476t__){
  __t2354t__length=0;
  __t2354t__length=__t2354t__length;
  __t2354t__unsafe_ptr=__t2354t__unsafe_ptr;
  free__t466t(&__t2354t__unsafe_ptr);
  }
  __t2350t____t475t=0;
  neq__t142t(__t2349t__unsafe_size,__t2350t____t475t,&__t2350t____t476t__);
  if(__t2350t____t476t__){
  __t2349t__unsafe_size=0;
  __t2349t__unsafe_size=__t2349t__unsafe_size;
  __t2349t__unsafe_ptr=__t2349t__unsafe_ptr;
  free__t466t(&__t2349t__unsafe_ptr);
  }
  __t2339t____t1993t____t1322t____t475t=0;
  neq__t142t(__t2338t__length,__t2339t____t1993t____t1322t____t475t,&__t2339t____t1993t____t1322t____t476t__);
  if(__t2339t____t1993t____t1322t____t476t__){
  __t2338t__length=0;
  __t2338t__length=__t2338t__length;
  __t2338t__unsafe_ptr=__t2338t__unsafe_ptr;
  free__t466t(&__t2338t__unsafe_ptr);
  }
  __t2334t____t475t=0;
  neq__t142t(__t2333t__unsafe_size,__t2334t____t475t,&__t2334t____t476t__);
  if(__t2334t____t476t__){
  __t2333t__unsafe_size=0;
  __t2333t__unsafe_size=__t2333t__unsafe_size;
  __t2333t__unsafe_ptr=__t2333t__unsafe_ptr;
  free__t466t(&__t2333t__unsafe_ptr);
  }
  __t2321t____t475t=0;
  neq__t142t(__t2320t__unsafe_size,__t2321t____t475t,&__t2321t____t476t__);
  if(__t2321t____t476t__){
  __t2320t__unsafe_size=0;
  __t2320t__unsafe_size=__t2320t__unsafe_size;
  __t2320t__unsafe_ptr=__t2320t__unsafe_ptr;
  free__t466t(&__t2320t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2306t();return 0;}