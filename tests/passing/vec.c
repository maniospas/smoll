#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
static const char* __t_all_errcodes[38] = {"noerr",
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
"different vector sizes"
};

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1283t(char** __t1898t, uint64_t* __t1899t, uint16_t* __t1900t, uint16_t* __t1901t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1898t=unsafe_ptr;
  *__t1899t=unsafe_size;
  *__t1900t=unsafe_offset;
  *__t1901t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1902t) {
  int value=0;
  *__t1902t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1903t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1903t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1904t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1904t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1905t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1906t) {
  char* allocated=*__t1906t;
  if(allocated){
  free(allocated);
  }
  *__t1906t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1907t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1907t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1908t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1908t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1909t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1909t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1910t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1910t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1911t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1911t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1912t) {
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
  *__t1912t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1913t, uint64_t* __t1914t, uint16_t* __t1915t, uint16_t* __t1916t, uint64_t size, char** __t1917t, uint64_t* __t1918t, uint16_t* __t1919t, uint16_t* __t1920t) {
  char* buffer__unsafe_ptr=*__t1913t;
  uint64_t buffer__unsafe_size=*__t1914t;
  uint16_t buffer__unsafe_offset=*__t1915t;
  uint16_t buffer__unsafe_align=*__t1916t;
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
  *__t1913t=buffer__unsafe_ptr;
  *__t1914t=buffer__unsafe_size;
  *__t1915t=buffer__unsafe_offset;
  *__t1916t=buffer__unsafe_align;
  *__t1917t=__t486t__unsafe_ptr;
  *__t1918t=__t486t__unsafe_size;
  *__t1919t=__t486t__unsafe_offset;
  *__t1920t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1921t) {
  goto __t_return;
  __t_return:
  *__t1921t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1922t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1922t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1923t) {
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
  *__t1923t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1924t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1924t=z;
}

static inline __attribute__((always_inline)) void circular__t1282t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t1925t, uint64_t length, char** __t1926t, uint64_t* __t1927t, uint16_t* __t1928t, uint16_t* __t1929t, uint64_t* __t1930t, uint64_t* __t1931t) {
  uint64_t pos=*__t1925t;
  goto __t_return;
  __t_return:
  *__t1925t=pos;
  *__t1926t=buf__unsafe_ptr;
  *__t1927t=buf__unsafe_size;
  *__t1928t=buf__unsafe_offset;
  *__t1929t=buf__unsafe_align;
  *__t1930t=pos;
  *__t1931t=length;
}

static inline __attribute__((always_inline)) int circular__t1307t(char** __t1932t, uint64_t* __t1933t, uint16_t* __t1934t, uint16_t* __t1935t, char** __t1936t, uint64_t* __t1937t, uint16_t* __t1938t, uint16_t* __t1939t, uint64_t* __t1940t, uint64_t* __t1941t) {
  char* buf__unsafe_ptr=*__t1932t;
  uint64_t buf__unsafe_size=*__t1933t;
  uint16_t buf__unsafe_offset=*__t1934t;
  uint16_t buf__unsafe_align=*__t1935t;
  int __t1308t=0;
  int __t1309t=0;
  uint64_t __t1310t=0;
  uint64_t __t1311t=0;
  uint64_t pos=0;
  int __t1312t=0;
  uint64_t __t1313t__=0;
  uint64_t __t1314t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1315t__=0;
  char* __t1316t__buf__unsafe_ptr=0;
  uint64_t __t1316t__buf__unsafe_size=0;
  uint16_t __t1316t__buf__unsafe_offset=0;
  uint16_t __t1316t__buf__unsafe_align=0;
  uint64_t __t1316t__pos=0;
  uint64_t __t1316t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1310t=0;
  __t1311t=__t1310t;
  pos=__t1311t;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1313t__);
  __t_errcode=sub__t347t(__t1313t__,pos,&__t1314t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1314t__;
  start=pos;
  add__t170t(pos,length,&__t1315t__);
  pos=__t1315t__;
  circular__t1282t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1316t__buf__unsafe_ptr,&__t1316t__buf__unsafe_size,&__t1316t__buf__unsafe_offset,&__t1316t__buf__unsafe_align,&__t1316t__pos,&__t1316t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1932t=buf__unsafe_ptr;
  *__t1933t=buf__unsafe_size;
  *__t1934t=buf__unsafe_offset;
  *__t1935t=buf__unsafe_align;
  *__t1936t=__t1316t__buf__unsafe_ptr;
  *__t1937t=__t1316t__buf__unsafe_size;
  *__t1938t=__t1316t__buf__unsafe_offset;
  *__t1939t=__t1316t__buf__unsafe_align;
  *__t1940t=__t1316t__pos;
  *__t1941t=__t1316t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1278t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void vec__t1317t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1942t, uint64_t* __t1943t, uint64_t* __t1944t) {
  goto __t_return;
  __t_return:
  *__t1942t=unsafe_ptr;
  *__t1943t=pos;
  *__t1944t=length;
}

int vec__t1319t(uint64_t length, char** __t1945t, uint64_t* __t1946t, uint64_t* __t1947t) {
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
  *__t1945t=__t1324t__unsafe_ptr;
  *__t1946t=__t1324t__pos;
  *__t1947t=__t1324t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1948t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1948t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1949t) {
  *__t1949t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1950t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1950t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t1364t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t1951t) {
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
  *__t1951t=__t1369t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1952t, uint64_t* __t1953t) {
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
  *__t1952t=from;
  *__t1953t=to;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1954t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1954t=z;
}

static inline __attribute__((always_inline)) int vec__t1347t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t1955t, uint64_t allocator__length, uint64_t length, char** __t1956t, uint64_t* __t1957t, uint64_t* __t1958t) {
  uint64_t allocator__pos=*__t1955t;
  uint64_t __t1348t__=0;
  uint64_t __t1349t=0;
  char __t1350t__=0;
  uint64_t __t1351t__=0;
  uint64_t __t1352t=0;
  char __t1353t__=0;
  uint64_t __t1354t__=0;
  char __t1355t__=0;
  uint64_t __t1356t=0;
  uint64_t start=0;
  uint64_t __t1357t__=0;
  char __t1358t__=0;
  uint64_t __t1359t=0;
  uint64_t __t1360t__=0;
  uint64_t __t1361t=0;
  char* __t1362t__unsafe_ptr=0;
  uint64_t __t1362t__pos=0;
  uint64_t __t1362t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t470t(allocator__buf__unsafe_align,&__t1348t__);
  __t1349t=8;
  neq__t142t(__t1348t__,__t1349t,&__t1350t__);
  if(__t1350t__){
  __t_errcode=33;
  goto __t_failure;
  }
  nat__t470t(allocator__buf__unsafe_offset,&__t1351t__);
  __t1352t=0;
  neq__t142t(__t1351t__,__t1352t,&__t1353t__);
  if(__t1353t__){
  __t_errcode=34;
  goto __t_failure;
  }
  len__t559t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1354t__);
  gt__t271t(length,__t1354t__,&__t1355t__);
  if(__t1355t__){
  __t_errcode=35;
  goto __t_failure;
  }
  __t1356t=allocator__pos;
  start=__t1356t;
  add__t170t(allocator__pos,length,&__t1357t__);
  allocator__pos=__t1357t__;
  ge__t319t(allocator__pos,allocator__length,&__t1358t__);
  if(__t1358t__){
  __t1359t=0;
  add__t170t(length,__t1359t,&__t1360t__);
  allocator__pos=__t1360t__;
  __t1361t=0;
  start=__t1361t;
  }
  vec__t1317t(allocator__buf__unsafe_ptr,start,length,&__t1362t__unsafe_ptr,&__t1362t__pos,&__t1362t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1955t=allocator__pos;
  *__t1956t=__t1362t__unsafe_ptr;
  *__t1957t=__t1362t__pos;
  *__t1958t=__t1362t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1959t, uint64_t r__to, uint64_t* __t1960t) {
  uint64_t r__from=*__t1959t;
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
  *__t1959t=r__from;
  *__t1960t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1370t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t1961t) {
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
  *__t1961t=__t1375t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1377t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t1962t) {
  char* __t1378t__=0;
  double __t1379t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,i,&__t1378t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1378t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1379t__value,__t1378t__,8);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1962t=__t1379t__value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1963t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1963t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1964t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1964t=z;
}

int add__t1428t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t1965t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t1966t, uint64_t* __t1967t, uint64_t* __t1968t) {
  uint64_t allocator__pos=*__t1965t;
  int __t1429t=0;
  char __t1430t__=0;
  char* __t1431t__unsafe_ptr=0;
  uint64_t __t1431t__pos=0;
  uint64_t __t1431t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1432t__from=0;
  uint64_t __t1432t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __t1433t=0;
  uint64_t __t1434t__=0;
  uint64_t i=0;
  char* __t1435t__=0;
  char* __t1436t__=0;
  double __t1437t__value=0;
  double __t1438t__=0;
  double __t1439t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t142t(v1__length,v2__length,&__t1430t__);
  if(__t1430t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=vec__t1347t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1431t__unsafe_ptr,&__t1431t__pos,&__t1431t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1431t__unsafe_ptr;
  v__pos=__t1431t__pos;
  v__length=__t1431t__length;
  range__t436t(v1__length,&__t1432t__from,&__t1432t__to);
  it__from=__t1432t__from;
  it__to=__t1432t__to;
  p1=v1__unsafe_ptr;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1434t__);
  __t1433t=__t_complain;
  i=__t1434t__;
  __t1433t=__t1433t==0;
  if(!__t1433t){
  break;
  }
  __t_errcode=mutget__t1364t(v__unsafe_ptr,v__pos,v__length,i,&__t1435t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1370t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1436t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1436t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1437t__value,__t1436t__,8);
  __t_errcode=at__t1377t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1438t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t148t(__t1437t__value,__t1438t__,&__t1439t__);
  if(!__t1435t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1435t__,&__t1439t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1965t=allocator__pos;
  *__t1966t=v__unsafe_ptr;
  *__t1967t=v__pos;
  *__t1968t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1376t(double number, uint64_t i, double* __t1969t) {
  goto __t_return;
  __t_return:
  *__t1969t=number;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t1970t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1970t=z;
}

static inline __attribute__((always_inline)) int mul__t1617t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t1971t, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t1972t, uint64_t* __t1973t, uint64_t* __t1974t) {
  uint64_t allocator__pos=*__t1971t;
  int __t1618t=0;
  char* __t1619t__unsafe_ptr=0;
  uint64_t __t1619t__pos=0;
  uint64_t __t1619t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1620t__from=0;
  uint64_t __t1620t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1621t=0;
  uint64_t __t1622t__=0;
  uint64_t i=0;
  char* __t1623t__=0;
  char* __t1624t__=0;
  double __t1625t__value=0;
  double __t1626t__=0;
  double __t1627t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1347t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__t1619t__unsafe_ptr,&__t1619t__pos,&__t1619t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1619t__unsafe_ptr;
  v__pos=__t1619t__pos;
  v__length=__t1619t__length;
  range__t436t(v1__length,&__t1620t__from,&__t1620t__to);
  it__from=__t1620t__from;
  it__to=__t1620t__to;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1622t__);
  __t1621t=__t_complain;
  i=__t1622t__;
  __t1621t=__t1621t==0;
  if(!__t1621t){
  break;
  }
  __t_errcode=mutget__t1364t(v__unsafe_ptr,v__pos,v__length,i,&__t1623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1370t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1624t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1625t__value,__t1624t__,8);
  at__t1376t(v2,i,&__t1626t__);
  mul__t172t(__t1625t__value,__t1626t__,&__t1627t__);
  if(!__t1623t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1623t__,&__t1627t__,8);
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1971t=allocator__pos;
  *__t1972t=v__unsafe_ptr;
  *__t1973t=v__pos;
  *__t1974t=v__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t1633t(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __t1975t, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t1976t, uint64_t* __t1977t, uint64_t* __t1978t) {
  uint64_t allocator__pos=*__t1975t;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__pos=0;
  uint64_t __t1634t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t1617t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t1634t__unsafe_ptr,&__t1634t__pos,&__t1634t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1975t=allocator__pos;
  *__t1976t=__t1634t__unsafe_ptr;
  *__t1977t=__t1634t__pos;
  *__t1978t=__t1634t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__t1851t() {
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__unsafe_size=0;
  uint16_t __t1852t__unsafe_offset=0;
  uint16_t __t1852t__unsafe_align=0;
  uint64_t __t1853t=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__unsafe_size=0;
  uint16_t __t1854t__unsafe_offset=0;
  uint16_t __t1854t__unsafe_align=0;
  uint64_t __t1855t____t475t=0;
  char __t1855t____t476t__=0;
  char* __t1856t__buf__unsafe_ptr=0;
  uint64_t __t1856t__buf__unsafe_size=0;
  uint16_t __t1856t__buf__unsafe_offset=0;
  uint16_t __t1856t__buf__unsafe_align=0;
  uint64_t __t1856t__pos=0;
  uint64_t __t1856t__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __t1857t__unsafe_ptr=0;
  uint64_t __t1857t__unsafe_size=0;
  uint16_t __t1857t__unsafe_offset=0;
  uint16_t __t1857t__unsafe_align=0;
  uint64_t __t1858t=0;
  char* __t1859t__unsafe_ptr=0;
  uint64_t __t1859t__unsafe_size=0;
  uint16_t __t1859t__unsafe_offset=0;
  uint16_t __t1859t__unsafe_align=0;
  uint64_t __t1860t____t475t=0;
  char __t1860t____t476t__=0;
  char* __t1861t__buf__unsafe_ptr=0;
  uint64_t __t1861t__buf__unsafe_size=0;
  uint16_t __t1861t__buf__unsafe_offset=0;
  uint16_t __t1861t__buf__unsafe_align=0;
  uint64_t __t1861t__pos=0;
  uint64_t __t1861t__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __t1863t=0;
  char* __t1864t__unsafe_ptr=0;
  uint64_t __t1864t__pos=0;
  uint64_t __t1864t__length=0;
  uint64_t __t1865t____t1322t____t475t=0;
  char __t1865t____t1322t____t476t__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __t1867t=0;
  char* __t1868t__unsafe_ptr=0;
  uint64_t __t1868t__pos=0;
  uint64_t __t1868t__length=0;
  uint64_t __t1869t____t1322t____t475t=0;
  char __t1869t____t1322t____t476t__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __t1870t=0;
  char* __t1871t__=0;
  double __t1872t=0;
  uint64_t __t1873t=0;
  char* __t1874t__=0;
  double __t1875t=0;
  uint64_t __t1876t=0;
  uint64_t __t1877t__from=0;
  uint64_t __t1877t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __t1878t=0;
  char* __t1879t__unsafe_ptr=0;
  uint64_t __t1879t__pos=0;
  uint64_t __t1879t__length=0;
  char* __t1880t__unsafe_ptr=0;
  uint64_t __t1880t__pos=0;
  uint64_t __t1880t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __t1881t=0;
  uint64_t __t1882t__=0;
  uint64_t i=0;
  double __t1883t=0;
  char* __t1884t__unsafe_ptr=0;
  uint64_t __t1884t__pos=0;
  uint64_t __t1884t__length=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__pos=0;
  uint64_t __t1885t__length=0;
  char* __t1886t__unsafe_ptr=0;
  uint64_t __t1886t__pos=0;
  uint64_t __t1886t__length=0;
  uint64_t __t1887t=0;
  char* __t1888t__=0;
  double __t1889t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1283t(&__t1852t__unsafe_ptr,&__t1852t__unsafe_size,&__t1852t__unsafe_offset,&__t1852t__unsafe_align);
  __t1853t=200;
  __t_errcode=alloc__t473t(&__t1852t__unsafe_ptr,&__t1852t__unsafe_size,&__t1852t__unsafe_offset,&__t1852t__unsafe_align,__t1853t,&__t1854t__unsafe_ptr,&__t1854t__unsafe_size,&__t1854t__unsafe_offset,&__t1854t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1307t(&__t1854t__unsafe_ptr,&__t1854t__unsafe_size,&__t1854t__unsafe_offset,&__t1854t__unsafe_align,&__t1856t__buf__unsafe_ptr,&__t1856t__buf__unsafe_size,&__t1856t__buf__unsafe_offset,&__t1856t__buf__unsafe_align,&__t1856t__pos,&__t1856t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  float____t_buffer____buffer__t1283t(&__t1857t__unsafe_ptr,&__t1857t__unsafe_size,&__t1857t__unsafe_offset,&__t1857t__unsafe_align);
  __t1858t=200;
  __t_errcode=alloc__t473t(&__t1857t__unsafe_ptr,&__t1857t__unsafe_size,&__t1857t__unsafe_offset,&__t1857t__unsafe_align,__t1858t,&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1307t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align,&__t1861t__buf__unsafe_ptr,&__t1861t__buf__unsafe_size,&__t1861t__buf__unsafe_offset,&__t1861t__buf__unsafe_align,&__t1861t__pos,&__t1861t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  new__t1278t();
  __t1863t=10;
  __t_errcode=vec__t1319t(__t1863t,&__t1864t__unsafe_ptr,&__t1864t__pos,&__t1864t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v1__unsafe_ptr=__t1864t__unsafe_ptr;
  v1__pos=__t1864t__pos;
  v1__length=__t1864t__length;
  new__t1278t();
  __t1867t=10;
  __t_errcode=vec__t1319t(__t1867t,&__t1868t__unsafe_ptr,&__t1868t__pos,&__t1868t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v2__unsafe_ptr=__t1868t__unsafe_ptr;
  v2__pos=__t1868t__pos;
  v2__length=__t1868t__length;
  __t1870t=0;
  __t_errcode=mutget__t1364t(v1__unsafe_ptr,v1__pos,v1__length,__t1870t,&__t1871t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1872t=1.0;
  if(!__t1871t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1871t__,&__t1872t,8);
  __t1873t=0;
  __t_errcode=mutget__t1364t(v2__unsafe_ptr,v2__pos,v2__length,__t1873t,&__t1874t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1875t=2.0;
  if(!__t1874t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1874t__,&__t1875t,8);
  __t1876t=5;
  range__t436t(__t1876t,&__t1877t__from,&__t1877t__to);
  it__from=__t1877t__from;
  it__to=__t1877t__to;
  __t1878t=10;
  __t_errcode=vec__t1347t(__t1856t__buf__unsafe_ptr,__t1856t__buf__unsafe_size,__t1856t__buf__unsafe_offset,__t1856t__buf__unsafe_align,&__t1856t__pos,__t1856t__length,__t1878t,&__t1879t__unsafe_ptr,&__t1879t__pos,&__t1879t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1880t__pos=__t1879t__pos;
  __t1880t__length=__t1879t__length;
  v__pos=__t1880t__pos;
  v__length=__t1880t__length;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1882t__);
  __t1881t=__t_complain;
  i=__t1882t__;
  __t1881t=__t1881t==0;
  if(!__t1881t){
  break;
  }
  __t1883t=2.0;
  __t_errcode=add__t1428t(__t1856t__buf__unsafe_ptr,__t1856t__buf__unsafe_size,__t1856t__buf__unsafe_offset,__t1856t__buf__unsafe_align,&__t1856t__pos,__t1856t__length,v2__unsafe_ptr,v2__pos,v2__length,__t1856t__buf__unsafe_ptr,v__pos,v__length,&__t1884t__unsafe_ptr,&__t1884t__pos,&__t1884t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1428t(__t1856t__buf__unsafe_ptr,__t1856t__buf__unsafe_size,__t1856t__buf__unsafe_offset,__t1856t__buf__unsafe_align,&__t1856t__pos,__t1856t__length,v1__unsafe_ptr,v1__pos,v1__length,__t1856t__buf__unsafe_ptr,__t1884t__pos,__t1884t__length,&__t1885t__unsafe_ptr,&__t1885t__pos,&__t1885t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t1633t(__t1856t__buf__unsafe_ptr,__t1856t__buf__unsafe_size,__t1856t__buf__unsafe_offset,__t1856t__buf__unsafe_align,&__t1856t__pos,__t1856t__length,__t1883t,__t1856t__buf__unsafe_ptr,__t1885t__pos,__t1885t__length,&__t1886t__unsafe_ptr,&__t1886t__pos,&__t1886t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__pos=__t1886t__pos;
  v__length=__t1886t__length;
  }
  __t1887t=0;
  __t_errcode=get__t1370t(__t1856t__buf__unsafe_ptr,v__pos,v__length,__t1887t,&__t1888t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1888t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1889t__value,__t1888t__,8);
  print__t368t(__t1889t__value);
  
  __t_failure:__t1869t____t1322t____t475t=0;
  neq__t142t(__t1868t__length,__t1869t____t1322t____t475t,&__t1869t____t1322t____t476t__);
  if(__t1869t____t1322t____t476t__){
  __t1868t__length=0;
  __t1868t__length=__t1868t__length;
  __t1868t__unsafe_ptr=__t1868t__unsafe_ptr;
  free__t466t(&__t1868t__unsafe_ptr);
  }
  __t1865t____t1322t____t475t=0;
  neq__t142t(__t1864t__length,__t1865t____t1322t____t475t,&__t1865t____t1322t____t476t__);
  if(__t1865t____t1322t____t476t__){
  __t1864t__length=0;
  __t1864t__length=__t1864t__length;
  __t1864t__unsafe_ptr=__t1864t__unsafe_ptr;
  free__t466t(&__t1864t__unsafe_ptr);
  }
  __t1860t____t475t=0;
  neq__t142t(__t1859t__unsafe_size,__t1860t____t475t,&__t1860t____t476t__);
  if(__t1860t____t476t__){
  __t1859t__unsafe_size=0;
  __t1859t__unsafe_size=__t1859t__unsafe_size;
  __t1859t__unsafe_ptr=__t1859t__unsafe_ptr;
  free__t466t(&__t1859t__unsafe_ptr);
  }
  __t1855t____t475t=0;
  neq__t142t(__t1854t__unsafe_size,__t1855t____t475t,&__t1855t____t476t__);
  if(__t1855t____t476t__){
  __t1854t__unsafe_size=0;
  __t1854t__unsafe_size=__t1854t__unsafe_size;
  __t1854t__unsafe_ptr=__t1854t__unsafe_ptr;
  free__t466t(&__t1854t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1263t(int64_t value, const char** __t1979t) {
  int __t1264t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t365t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t1979t=ret;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1891t() {
  char __t1892t=0;
  char __t1894t=0;
  int64_t __t1895t=0;
  int64_t error=0;
  const char* __t1896t__=0;
  int __t_complain=0;
  __t_complain=safe_main__t1851t();
  __t1892t=__t_complain;
  __t1892t=__t1892t==0;
  __t1895t=__t_complain;
  __t1894t=(__t_complain==0);
  __t_complain=0;
  error=__t1895t;
  __t1894t=__t1894t==0;
  if(__t1894t){
  cstr__t1263t(error,&__t1896t__);
  print__t363t(__t1896t__);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1891t();return 0;}