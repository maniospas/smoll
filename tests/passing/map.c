#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1844t="hello world!";
const char* const __t370t="\n";
const char* const __t1842t="hello";
const char* const __t1847t="manio";
const char* const __t1849t="it's a me, manio.";
static const char* __t_all_errcodes[38] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1857t(char** __t1878t, uint64_t* __t1879t, uint16_t* __t1880t, uint16_t* __t1881t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1878t=unsafe_ptr;
  *__t1879t=unsafe_size;
  *__t1880t=unsafe_offset;
  *__t1881t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1882t) {
  int value=0;
  *__t1882t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1883t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1883t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1884t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1884t=__t95t__;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1885t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) void KB__t479t(uint64_t x, uint64_t* __t1886t) {
  uint64_t __t480t=0;
  uint64_t __t481t__=0;
  __t480t=1024;
  mul__t194t(x,__t480t,&__t481t__);
  goto __t_return;
  __t_return:
  *__t1886t=__t481t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1887t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1887t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1888t) {
  char* allocated=*__t1888t;
  if(allocated){
  free(allocated);
  }
  *__t1888t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1889t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1889t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1890t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1890t=value;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1891t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1891t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1892t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1892t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1893t) {
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
  *__t1893t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1894t, uint64_t* __t1895t, uint16_t* __t1896t, uint16_t* __t1897t, uint64_t size, char** __t1898t, uint64_t* __t1899t, uint16_t* __t1900t, uint16_t* __t1901t) {
  char* buffer__unsafe_ptr=*__t1894t;
  uint64_t buffer__unsafe_size=*__t1895t;
  uint16_t buffer__unsafe_offset=*__t1896t;
  uint16_t buffer__unsafe_align=*__t1897t;
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
  *__t1894t=buffer__unsafe_ptr;
  *__t1895t=buffer__unsafe_size;
  *__t1896t=buffer__unsafe_offset;
  *__t1897t=buffer__unsafe_align;
  *__t1898t=__t521t__unsafe_ptr;
  *__t1899t=__t521t__unsafe_size;
  *__t1900t=__t521t__unsafe_offset;
  *__t1901t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1902t, uint64_t* __t1903t, uint16_t* __t1904t, uint16_t* __t1905t, char** __t1906t, uint64_t* __t1907t, uint16_t* __t1908t, uint16_t* __t1909t, uint64_t* __t1910t) {
  char* buf__unsafe_ptr=*__t1902t;
  uint64_t buf__unsafe_size=*__t1903t;
  uint16_t buf__unsafe_offset=*__t1904t;
  uint16_t buf__unsafe_align=*__t1905t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1902t=buf__unsafe_ptr;
  *__t1903t=buf__unsafe_size;
  *__t1904t=buf__unsafe_offset;
  *__t1905t=buf__unsafe_align;
  *__t1906t=buf__unsafe_ptr;
  *__t1907t=buf__unsafe_size;
  *__t1908t=buf__unsafe_offset;
  *__t1909t=buf__unsafe_align;
  *__t1910t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1826t(char** __t1911t, uint64_t* __t1912t, uint16_t* __t1913t, uint16_t* __t1914t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1911t=unsafe_ptr;
  *__t1912t=unsafe_size;
  *__t1913t=unsafe_offset;
  *__t1914t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1742t(char** __t1915t, uint64_t* __t1916t, uint16_t* __t1917t, uint16_t* __t1918t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t1915t=unsafe_ptr;
  *__t1916t=unsafe_size;
  *__t1917t=unsafe_offset;
  *__t1918t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1919t) {
  goto __t_return;
  __t_return:
  *__t1919t=buffer__unsafe_size;
}

int strmap__t1741t(char** __t1920t, uint64_t* __t1921t, uint16_t* __t1922t, uint16_t* __t1923t, char** __t1924t, uint64_t* __t1925t, uint16_t* __t1926t, uint16_t* __t1927t, char** __t1928t, uint64_t* __t1929t, uint16_t* __t1930t, uint16_t* __t1931t) {
  char* values__unsafe_ptr=*__t1920t;
  uint64_t values__unsafe_size=*__t1921t;
  uint16_t values__unsafe_offset=*__t1922t;
  uint16_t values__unsafe_align=*__t1923t;
  char* __t1744t__unsafe_ptr=0;
  uint64_t __t1744t__unsafe_size=0;
  uint16_t __t1744t__unsafe_offset=0;
  uint16_t __t1744t__unsafe_align=0;
  char* __t1745t__unsafe_ptr=0;
  uint64_t __t1745t__unsafe_size=0;
  uint16_t __t1745t__unsafe_offset=0;
  uint16_t __t1745t__unsafe_align=0;
  uint64_t __t1746t__=0;
  char* __t1747t__unsafe_ptr=0;
  uint64_t __t1747t__unsafe_size=0;
  uint16_t __t1747t__unsafe_offset=0;
  uint16_t __t1747t__unsafe_align=0;
  uint64_t __t1748t____t510t=0;
  char __t1748t____t511t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1742t(&__t1744t__unsafe_ptr,&__t1744t__unsafe_size,&__t1744t__unsafe_offset,&__t1744t__unsafe_align);
  __t1745t__unsafe_ptr=__t1744t__unsafe_ptr;
  __t1745t__unsafe_size=__t1744t__unsafe_size;
  __t1745t__unsafe_offset=__t1744t__unsafe_offset;
  __t1745t__unsafe_align=__t1744t__unsafe_align;
  len__t604t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1746t__);
  __t_errcode=alloc__t508t(&__t1745t__unsafe_ptr,&__t1745t__unsafe_size,&__t1745t__unsafe_offset,&__t1745t__unsafe_align,__t1746t__,&__t1747t__unsafe_ptr,&__t1747t__unsafe_size,&__t1747t__unsafe_offset,&__t1747t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1747t__unsafe_ptr;
  keys__unsafe_size=__t1747t__unsafe_size;
  keys__unsafe_offset=__t1747t__unsafe_offset;
  keys__unsafe_align=__t1747t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1748t____t510t=0;
  neq__t142t(keys__unsafe_size,__t1748t____t510t,&__t1748t____t511t__);
  if(__t1748t____t511t__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__t501t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t1920t=values__unsafe_ptr;
  *__t1921t=values__unsafe_size;
  *__t1922t=values__unsafe_offset;
  *__t1923t=values__unsafe_align;
  *__t1924t=keys__unsafe_ptr;
  *__t1925t=keys__unsafe_size;
  *__t1926t=keys__unsafe_offset;
  *__t1927t=keys__unsafe_align;
  *__t1928t=values__unsafe_ptr;
  *__t1929t=values__unsafe_size;
  *__t1930t=values__unsafe_offset;
  *__t1931t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1932t, uint64_t* __t1933t, uint16_t* __t1934t, uint16_t* __t1935t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1932t=unsafe_ptr;
  *__t1933t=unsafe_size;
  *__t1934t=unsafe_offset;
  *__t1935t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1936t) {
  *__t1936t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1937t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1937t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1938t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1938t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1939t) {
  *__t1939t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1940t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1940t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1941t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t599t__);
  mul__t194t(i,__t599t__,&__t600t__);
  nat__t505t(buffer__unsafe_offset,&__t601t__);
  add__t170t(__t600t__,__t601t__,&__t602t__);
  add__t503t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1941t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1942t, uint64_t* __t1943t, uint64_t* __t1944t, char* __t1945t) {
  goto __t_return;
  __t_return:
  *__t1942t=unsafe_ptr;
  *__t1943t=dat__pos;
  *__t1944t=dat__length;
  *__t1945t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1946t, uint64_t* __t1947t, uint64_t* __t1948t, char* __t1949t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t505t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t142t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t142t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1946t=__t643t__unsafe_ptr;
  *__t1947t=__t643t__dat__pos;
  *__t1948t=__t643t__dat__length;
  *__t1949t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1950t, uint64_t* __t1951t, uint64_t* __t1952t, char* __t1953t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t142t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1950t=__t673t__unsafe_ptr;
  *__t1951t=__t673t__dat__pos;
  *__t1952t=__t673t__dat__length;
  *__t1953t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1954t, uint64_t* __t1955t, uint64_t* __t1956t, char* __t1957t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t170t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1954t=__t681t__unsafe_ptr;
  *__t1955t=__t681t__dat__pos;
  *__t1956t=__t681t__dat__length;
  *__t1957t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1360t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t1958t, uint64_t* __t1959t, uint64_t* __t1960t, char* __t1961t) {
  goto __t_return;
  __t_return:
  *__t1958t=r__unsafe_ptr;
  *__t1959t=r__dat__pos;
  *__t1960t=r__dat__length;
  *__t1961t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1962t) {
  goto __t_return;
  __t_return:
  *__t1962t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1364t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t1963t) {
  uint64_t __t1365t=0;
  uint64_t __t1366t__=0;
  char __t1367t__=0;
  __t1365t=0;
  len__t682t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1366t__);
  eq__t118t(__t1365t,__t1366t__,&__t1367t__);
  goto __t_return;
  __t_return:
  *__t1963t=__t1367t__;
}

static inline __attribute__((always_inline)) void raw__t1358t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t1964t, uint64_t* __t1965t, uint64_t* __t1966t, char* __t1967t) {
  goto __t_return;
  __t_return:
  *__t1964t=r__s__unsafe_ptr;
  *__t1965t=r__s__dat__pos;
  *__t1966t=r__s__dat__length;
  *__t1967t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t1968t, uint64_t* __t1969t) {
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
  *__t1968t=from;
  *__t1969t=to;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t1970t, uint64_t r__to, uint64_t* __t1971t) {
  uint64_t r__from=*__t1970t;
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
  *__t1970t=r__from;
  *__t1971t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t436t(uint64_t value, uint64_t* __t1972t) {
  goto __t_return;
  __t_return:
  *__t1972t=value;
}

static inline __attribute__((always_inline)) void lshift__t446t(uint64_t x__value, uint64_t y, uint64_t* __t1973t) {
  uint64_t z=0;
  uint64_t __t447t__value=0;
  z=(x__value<<y);
  bits__t436t(z,&__t447t__value);
  goto __t_return;
  __t_return:
  *__t1973t=__t447t__value;
}

static inline __attribute__((always_inline)) void nat__t431t(uint64_t x, uint64_t* __t1974t) {
  int __t432t=0;
  int __t433t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1974t=value;
}

static inline __attribute__((always_inline)) void nat__t442t(uint64_t x__value, uint64_t* __t1975t) {
  uint64_t __t443t__=0;
  nat__t431t(x__value,&__t443t__);
  goto __t_return;
  __t_return:
  *__t1975t=__t443t__;
}

static inline __attribute__((always_inline)) void get__t823t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1976t) {
  uint64_t __t824t__=0;
  char* __t825t__=0;
  add__t170t(s__dat__pos,i,&__t824t__);
  add__t503t(s__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  __t_return:
  *__t1976t=__t825t__;
}

static inline __attribute__((always_inline)) void nat__t434t(char x, uint64_t* __t1977t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1977t=value;
}

static inline __attribute__((always_inline)) int mod__t223t(uint64_t x, uint64_t y, uint64_t* __t1978t) {
  uint64_t zero=0;
  char __t224t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t118t(y,zero,&__t224t__);
  if(__t224t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1978t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1309t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t1979t) {
  uint64_t __t1310t=0;
  uint64_t __t1311t=0;
  uint64_t h=0;
  uint64_t __t1312t__=0;
  uint64_t __t1313t__from=0;
  uint64_t __t1313t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1314t=0;
  uint64_t __t1315t__=0;
  uint64_t i=0;
  uint64_t __t1316t__value=0;
  uint64_t __t1317t=0;
  uint64_t __t1318t__value=0;
  uint64_t __t1319t__=0;
  uint64_t __t1320t__=0;
  char* __t1321t__=0;
  char __t1322t__value=0;
  uint64_t __t1323t__=0;
  uint64_t __t1324t__=0;
  uint64_t __t1325t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1310t=5381;
  __t1311t=__t1310t;
  h=__t1311t;
  len__t682t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1312t__);
  range__t460t(__t1312t__,&__t1313t__from,&__t1313t__to);
  iter__from=__t1313t__from;
  iter__to=__t1313t__to;
  while(1){
  __t_complain=next__t469t(&iter__from,iter__to,&__t1315t__);
  __t1314t=__t_complain;
  i=__t1315t__;
  __t1314t=__t1314t==0;
  if(!__t1314t){
  break;
  }
  bits__t436t(h,&__t1316t__value);
  __t1317t=5;
  lshift__t446t(__t1316t__value,__t1317t,&__t1318t__value);
  nat__t442t(__t1318t__value,&__t1319t__);
  add__t170t(__t1319t__,h,&__t1320t__);
  get__t823t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1321t__);
  if(!__t1321t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1322t__value,__t1321t__,1);
  nat__t434t(__t1322t__value,&__t1323t__);
  add__t170t(__t1320t__,__t1323t__,&__t1324t__);
  h=__t1324t__;
  }
  __t_errcode=mod__t223t(h,size,&__t1325t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1979t=__t1325t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1980t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1980t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1981t) {
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
  *__t1981t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1982t, uint64_t* __t1983t, uint16_t* __t1984t, uint16_t* __t1985t, uint64_t i, char** __t1986t) {
  char* buffer__unsafe_ptr=*__t1982t;
  uint64_t buffer__unsafe_size=*__t1983t;
  uint16_t buffer__unsafe_offset=*__t1984t;
  uint16_t buffer__unsafe_align=*__t1985t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t592t__);
  mul__t194t(i,__t592t__,&__t593t__);
  nat__t505t(buffer__unsafe_offset,&__t594t__);
  add__t170t(__t593t__,__t594t__,&__t595t__);
  add__t503t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1982t=buffer__unsafe_ptr;
  *__t1983t=buffer__unsafe_size;
  *__t1984t=buffer__unsafe_offset;
  *__t1985t=buffer__unsafe_align;
  *__t1986t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t686t(char x, char y, char* __t1987t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1987t=z;
}

static inline __attribute__((always_inline)) void eq__t827t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t1988t) {
  uint64_t __t828t__=0;
  uint64_t n=0;
  uint64_t __t829t__=0;
  char __t830t__=0;
  char __t831t=0;
  char __t832t__=0;
  char __t833t=0;
  char z=0;
  len__t682t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t828t__);
  n=__t828t__;
  len__t682t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t829t__);
  neq__t142t(n,__t829t__,&__t830t__);
  if(__t830t__){
  __t831t=0;
  goto __t_return;
  }
  neq__t686t(x__dat__first,y__dat__first,&__t832t__);
  if(__t832t__){
  __t833t=0;
  __t831t=__t833t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t831t=z;
  goto __t_return;
  __t_return:
  *__t1988t=__t831t;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1989t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1989t=z;
}

int at__t1640t(char** __t1990t, uint64_t* __t1991t, uint16_t* __t1992t, uint16_t* __t1993t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t1994t) {
  char* data__unsafe_ptr=*__t1990t;
  uint64_t data__unsafe_size=*__t1991t;
  uint16_t data__unsafe_offset=*__t1992t;
  uint16_t data__unsafe_align=*__t1993t;
  char* __t1641t__unsafe_ptr=0;
  uint64_t __t1641t__dat__pos=0;
  uint64_t __t1641t__dat__length=0;
  char __t1641t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1642t__=0;
  uint64_t __t1643t=0;
  uint64_t __t1644t=0;
  char* __t1645t__=0;
  char* __t1646t__s__unsafe_ptr=0;
  uint64_t __t1646t__s__dat__pos=0;
  uint64_t __t1646t__s__dat__length=0;
  char __t1646t__s__dat__first=0;
  uint64_t __t1646t__cost=0;
  char* __t1647t__unsafe_ptr=0;
  uint64_t __t1647t__dat__pos=0;
  uint64_t __t1647t__dat__length=0;
  char __t1647t__dat__first=0;
  int __t1648t=0;
  int __t1649t__=0;
  uint64_t __t1650t__=0;
  uint64_t n=0;
  uint64_t __t1651t__=0;
  uint64_t pos=0;
  uint64_t __t1652t__from=0;
  uint64_t __t1652t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1653t=0;
  uint64_t __t1654t__=0;
  uint64_t i=0;
  uint64_t __t1655t__=0;
  uint64_t __t1656t=0;
  uint64_t idx=0;
  char __t1657t__=0;
  uint64_t __t1658t__=0;
  uint64_t __t1659t=0;
  char __t1660t__=0;
  char* __t1661t__=0;
  char* __t1662t__s__unsafe_ptr=0;
  uint64_t __t1662t__s__dat__pos=0;
  uint64_t __t1662t__s__dat__length=0;
  char __t1662t__s__dat__first=0;
  uint64_t __t1662t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__dat__pos=0;
  uint64_t __t1663t__dat__length=0;
  char __t1663t__dat__first=0;
  char __t1664t__=0;
  char* __t1665t__=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__dat__pos=0;
  uint64_t __t1666t__dat__length=0;
  char __t1666t__dat__first=0;
  char __t1667t__=0;
  char __t1668t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1669t__=0;
  char* __t1670t__s__unsafe_ptr=0;
  uint64_t __t1670t__s__dat__pos=0;
  uint64_t __t1670t__s__dat__length=0;
  char __t1670t__s__dat__first=0;
  uint64_t __t1670t__cost=0;
  char* __t1671t__unsafe_ptr=0;
  uint64_t __t1671t__dat__pos=0;
  uint64_t __t1671t__dat__length=0;
  char __t1671t__dat__first=0;
  char* __t1672t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1360t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1641t__unsafe_ptr,&__t1641t__dat__pos,&__t1641t__dat__length,&__t1641t__dat__first);
  k__unsafe_ptr=__t1641t__unsafe_ptr;
  k__dat__pos=__t1641t__dat__pos;
  k__dat__length=__t1641t__dat__length;
  k__dat__first=__t1641t__dat__first;
  is_zero__t1364t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1642t__);
  if(__t1642t__){
  __t1643t=0;
  goto __t_return;
  }
  __t1644t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1644t,&__t1645t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1645t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1646t__s__unsafe_ptr,__t1645t__,8);
  memcpy(&__t1646t__s__dat__pos,__t1645t__+8,8);
  memcpy(&__t1646t__s__dat__length,__t1645t__+16,8);
  memcpy(&__t1646t__s__dat__first,__t1645t__+24,1);
  memcpy(&__t1646t__cost,__t1645t__+25,8);
  raw__t1358t(__t1646t__s__unsafe_ptr,__t1646t__s__dat__pos,__t1646t__s__dat__length,__t1646t__s__dat__first,__t1646t__cost,&__t1647t__unsafe_ptr,&__t1647t__dat__pos,&__t1647t__dat__length,&__t1647t__dat__first);
  not__t35t(__t1648t,&__t1649t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1650t__);
  n=__t1650t__;
  __t_errcode=hash__t1309t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1651t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1651t__;
  range__t460t(n,&__t1652t__from,&__t1652t__to);
  iter__from=__t1652t__from;
  iter__to=__t1652t__to;
  while(1){
  __t_complain=next__t469t(&iter__from,iter__to,&__t1654t__);
  __t1653t=__t_complain;
  i=__t1654t__;
  __t1653t=__t1653t==0;
  if(!__t1653t){
  break;
  }
  add__t170t(pos,i,&__t1655t__);
  __t1656t=__t1655t__;
  idx=__t1656t;
  ge__t319t(idx,n,&__t1657t__);
  if(__t1657t__){
  __t_errcode=sub__t347t(idx,n,&__t1658t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1658t__;
  }
  __t1659t=0;
  eq__t118t(idx,__t1659t,&__t1660t__);
  if(__t1660t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1661t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1661t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1662t__s__unsafe_ptr,__t1661t__,8);
  memcpy(&__t1662t__s__dat__pos,__t1661t__+8,8);
  memcpy(&__t1662t__s__dat__length,__t1661t__+16,8);
  memcpy(&__t1662t__s__dat__first,__t1661t__+24,1);
  memcpy(&__t1662t__cost,__t1661t__+25,8);
  entry__s__unsafe_ptr=__t1662t__s__unsafe_ptr;
  entry__s__dat__pos=__t1662t__s__dat__pos;
  entry__s__dat__length=__t1662t__s__dat__length;
  entry__s__dat__first=__t1662t__s__dat__first;
  entry__cost=__t1662t__cost;
  raw__t1358t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1663t__unsafe_ptr,&__t1663t__dat__pos,&__t1663t__dat__length,&__t1663t__dat__first);
  is_zero__t1364t(__t1663t__unsafe_ptr,__t1663t__dat__pos,__t1663t__dat__length,__t1663t__dat__first,&__t1664t__);
  if(__t1664t__){
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1665t__,&k__unsafe_ptr,8);
  memcpy(__t1665t__+8,&k__dat__pos,8);
  memcpy(__t1665t__+16,&k__dat__length,8);
  memcpy(__t1665t__+24,&k__dat__first,1);
  memcpy(__t1665t__+25,&i,8);
  __t1643t=idx;
  goto __t_return;
  }
  raw__t1358t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1666t__unsafe_ptr,&__t1666t__dat__pos,&__t1666t__dat__length,&__t1666t__dat__first);
  eq__t827t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1666t__unsafe_ptr,__t1666t__dat__pos,__t1666t__dat__length,__t1666t__dat__first,&__t1667t__);
  if(__t1667t__){
  __t1643t=idx;
  goto __t_return;
  }
  gt__t271t(i,entry__cost,&__t1668t__);
  if(__t1668t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1670t__s__unsafe_ptr,__t1669t__,8);
  memcpy(&__t1670t__s__dat__pos,__t1669t__+8,8);
  memcpy(&__t1670t__s__dat__length,__t1669t__+16,8);
  memcpy(&__t1670t__s__dat__first,__t1669t__+24,1);
  memcpy(&__t1670t__cost,__t1669t__+25,8);
  raw__t1358t(__t1670t__s__unsafe_ptr,__t1670t__s__dat__pos,__t1670t__s__dat__length,__t1670t__s__dat__first,__t1670t__cost,&__t1671t__unsafe_ptr,&__t1671t__dat__pos,&__t1671t__dat__length,&__t1671t__dat__first);
  k__unsafe_ptr=__t1671t__unsafe_ptr;
  k__dat__pos=__t1671t__dat__pos;
  k__dat__length=__t1671t__dat__length;
  k__dat__first=__t1671t__dat__first;
  __t_errcode=mutget__t590t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1672t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1672t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1672t__,&tmp__unsafe_ptr,8);
  memcpy(__t1672t__+8,&tmp__dat__pos,8);
  memcpy(__t1672t__+16,&tmp__dat__length,8);
  memcpy(__t1672t__+24,&tmp__dat__first,1);
  memcpy(__t1672t__+25,&i,8);
  }
  }
  __t_errcode=37;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t1990t=data__unsafe_ptr;
  *__t1991t=data__unsafe_size;
  *__t1992t=data__unsafe_offset;
  *__t1993t=data__unsafe_align;
  *__t1994t=__t1643t;
  
  return __t_errcode;
}

int mutget__t1765t(char** __t1995t, uint64_t* __t1996t, uint16_t* __t1997t, uint16_t* __t1998t, char** __t1999t, uint64_t* __t2000t, uint16_t* __t2001t, uint16_t* __t2002t, const char* key, char** __t2003t) {
  char* keys__unsafe_ptr=*__t1995t;
  uint64_t keys__unsafe_size=*__t1996t;
  uint16_t keys__unsafe_offset=*__t1997t;
  uint16_t keys__unsafe_align=*__t1998t;
  char* values__unsafe_ptr=*__t1999t;
  uint64_t values__unsafe_size=*__t2000t;
  uint16_t values__unsafe_offset=*__t2001t;
  uint16_t values__unsafe_align=*__t2002t;
  char* __t1766t__unsafe_ptr=0;
  uint64_t __t1766t__dat__pos=0;
  uint64_t __t1766t__dat__length=0;
  char __t1766t__dat__first=0;
  uint64_t __t1767t__=0;
  char* __t1768t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(key,&__t1766t__unsafe_ptr,&__t1766t__dat__pos,&__t1766t__dat__length,&__t1766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1640t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1766t__unsafe_ptr,__t1766t__dat__pos,__t1766t__dat__length,__t1766t__dat__first,&__t1767t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t590t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1767t__,&__t1768t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1995t=keys__unsafe_ptr;
  *__t1996t=keys__unsafe_size;
  *__t1997t=keys__unsafe_offset;
  *__t1998t=keys__unsafe_align;
  *__t1999t=values__unsafe_ptr;
  *__t2000t=values__unsafe_size;
  *__t2001t=values__unsafe_offset;
  *__t2002t=values__unsafe_align;
  *__t2003t=__t1768t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2004t, uint64_t* __t2005t, uint64_t* __t2006t, char* __t2007t) {
  goto __t_return;
  __t_return:
  *__t2004t=other__unsafe_ptr;
  *__t2005t=other__dat__pos;
  *__t2006t=other__dat__length;
  *__t2007t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t2008t, uint64_t* __t2009t, uint16_t* __t2010t, uint16_t* __t2011t, uint64_t* __t2012t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2013t, uint64_t* __t2014t, uint64_t* __t2015t, char* __t2016t) {
  char* buf__unsafe_ptr=*__t2008t;
  uint64_t buf__unsafe_size=*__t2009t;
  uint16_t buf__unsafe_offset=*__t2010t;
  uint16_t buf__unsafe_align=*__t2011t;
  uint64_t pos=*__t2012t;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__dat__pos=0;
  uint64_t __t743t__dat__length=0;
  char __t743t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t744t__=0;
  uint64_t __t745t__=0;
  uint64_t next_pos=0;
  uint64_t __t746t__=0;
  char __t747t__=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t prev_pos=0;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t170t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t271t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t170t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2008t=buf__unsafe_ptr;
  *__t2009t=buf__unsafe_size;
  *__t2010t=buf__unsafe_offset;
  *__t2011t=buf__unsafe_align;
  *__t2012t=pos;
  *__t2013t=__t750t__unsafe_ptr;
  *__t2014t=__t750t__dat__pos;
  *__t2015t=__t750t__dat__length;
  *__t2016t=__t750t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1783t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2017t, char** __t2018t, uint64_t* __t2019t, uint64_t* __t2020t, char* __t2021t) {
  uint64_t pos=*__t2017t;
  uint64_t __t1784t=0;
  char __t1785t__=0;
  uint64_t __t1786t=0;
  uint64_t __t1787t__=0;
  uint64_t __t1788t=0;
  char* __t1789t__=0;
  char* __t1790t__s__unsafe_ptr=0;
  uint64_t __t1790t__s__dat__pos=0;
  uint64_t __t1790t__s__dat__length=0;
  char __t1790t__s__dat__first=0;
  uint64_t __t1790t__cost=0;
  char* __t1791t__unsafe_ptr=0;
  uint64_t __t1791t__dat__pos=0;
  uint64_t __t1791t__dat__length=0;
  char __t1791t__dat__first=0;
  char* __t1792t__=0;
  char* __t1793t__s__unsafe_ptr=0;
  uint64_t __t1793t__s__dat__pos=0;
  uint64_t __t1793t__s__dat__length=0;
  char __t1793t__s__dat__first=0;
  uint64_t __t1793t__cost=0;
  char* __t1794t__unsafe_ptr=0;
  uint64_t __t1794t__dat__pos=0;
  uint64_t __t1794t__dat__length=0;
  char __t1794t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1795t=0;
  uint64_t __t1796t__=0;
  char* __t1797t__unsafe_ptr=0;
  uint64_t __t1797t__dat__pos=0;
  uint64_t __t1797t__dat__length=0;
  char __t1797t__dat__first=0;
  char __t1798t__=0;
  char* __t1799t__=0;
  char* __t1800t__s__unsafe_ptr=0;
  uint64_t __t1800t__s__dat__pos=0;
  uint64_t __t1800t__s__dat__length=0;
  char __t1800t__s__dat__first=0;
  uint64_t __t1800t__cost=0;
  char* __t1801t__unsafe_ptr=0;
  uint64_t __t1801t__dat__pos=0;
  uint64_t __t1801t__dat__length=0;
  char __t1801t__dat__first=0;
  uint64_t __t1802t=0;
  uint64_t __t1803t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1784t=0;
  eq__t118t(pos,__t1784t,&__t1785t__);
  if(__t1785t__){
  __t1786t=1;
  add__t170t(pos,__t1786t,&__t1787t__);
  pos=__t1787t__;
  __t1788t=0;
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1788t,&__t1789t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1789t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1790t__s__unsafe_ptr,__t1789t__,8);
  memcpy(&__t1790t__s__dat__pos,__t1789t__+8,8);
  memcpy(&__t1790t__s__dat__length,__t1789t__+16,8);
  memcpy(&__t1790t__s__dat__first,__t1789t__+24,1);
  memcpy(&__t1790t__cost,__t1789t__+25,8);
  raw__t1358t(__t1790t__s__unsafe_ptr,__t1790t__s__dat__pos,__t1790t__s__dat__length,__t1790t__s__dat__first,__t1790t__cost,&__t1791t__unsafe_ptr,&__t1791t__dat__pos,&__t1791t__dat__length,&__t1791t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1792t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1792t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1793t__s__unsafe_ptr,__t1792t__,8);
  memcpy(&__t1793t__s__dat__pos,__t1792t__+8,8);
  memcpy(&__t1793t__s__dat__length,__t1792t__+16,8);
  memcpy(&__t1793t__s__dat__first,__t1792t__+24,1);
  memcpy(&__t1793t__cost,__t1792t__+25,8);
  raw__t1358t(__t1793t__s__unsafe_ptr,__t1793t__s__dat__pos,__t1793t__s__dat__length,__t1793t__s__dat__first,__t1793t__cost,&__t1794t__unsafe_ptr,&__t1794t__dat__pos,&__t1794t__dat__length,&__t1794t__dat__first);
  ret__unsafe_ptr=__t1794t__unsafe_ptr;
  ret__dat__pos=__t1794t__dat__pos;
  ret__dat__length=__t1794t__dat__length;
  ret__dat__first=__t1794t__dat__first;
  __t1795t=1;
  add__t170t(pos,__t1795t,&__t1796t__);
  pos=__t1796t__;
  while(1){
  raw__t1360t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1797t__unsafe_ptr,&__t1797t__dat__pos,&__t1797t__dat__length,&__t1797t__dat__first);
  is_zero__t1364t(__t1797t__unsafe_ptr,__t1797t__dat__pos,__t1797t__dat__length,__t1797t__dat__first,&__t1798t__);
  if(!__t1798t__){
  break;
  }
  __t_errcode=get__t597t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1799t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1799t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1800t__s__unsafe_ptr,__t1799t__,8);
  memcpy(&__t1800t__s__dat__pos,__t1799t__+8,8);
  memcpy(&__t1800t__s__dat__length,__t1799t__+16,8);
  memcpy(&__t1800t__s__dat__first,__t1799t__+24,1);
  memcpy(&__t1800t__cost,__t1799t__+25,8);
  raw__t1358t(__t1800t__s__unsafe_ptr,__t1800t__s__dat__pos,__t1800t__s__dat__length,__t1800t__s__dat__first,__t1800t__cost,&__t1801t__unsafe_ptr,&__t1801t__dat__pos,&__t1801t__dat__length,&__t1801t__dat__first);
  ret__unsafe_ptr=__t1801t__unsafe_ptr;
  ret__dat__pos=__t1801t__dat__pos;
  ret__dat__length=__t1801t__dat__length;
  ret__dat__first=__t1801t__dat__first;
  __t1802t=1;
  add__t170t(pos,__t1802t,&__t1803t__);
  pos=__t1803t__;
  }
  __t1791t__unsafe_ptr=ret__unsafe_ptr;
  __t1791t__dat__pos=ret__dat__pos;
  __t1791t__dat__length=ret__dat__length;
  __t1791t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2017t=pos;
  *__t2018t=__t1791t__unsafe_ptr;
  *__t2019t=__t1791t__dat__pos;
  *__t2020t=__t1791t__dat__length;
  *__t2021t=__t1791t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1834t(char** __t2022t, uint64_t* __t2023t, uint16_t* __t2024t, uint16_t* __t2025t, uint64_t* __t2026t, char** __t2027t, uint64_t* __t2028t, uint16_t* __t2029t, uint16_t* __t2030t, char** __t2031t, uint64_t* __t2032t, uint16_t* __t2033t, uint16_t* __t2034t) {
  char* buf__buf__unsafe_ptr=*__t2022t;
  uint64_t buf__buf__unsafe_size=*__t2023t;
  uint16_t buf__buf__unsafe_offset=*__t2024t;
  uint16_t buf__buf__unsafe_align=*__t2025t;
  uint64_t buf__pos=*__t2026t;
  char* __t1835t__unsafe_ptr=0;
  uint64_t __t1835t__unsafe_size=0;
  uint16_t __t1835t__unsafe_offset=0;
  uint16_t __t1835t__unsafe_align=0;
  char* __t1836t__unsafe_ptr=0;
  uint64_t __t1836t__unsafe_size=0;
  uint16_t __t1836t__unsafe_offset=0;
  uint16_t __t1836t__unsafe_align=0;
  uint64_t __t1837t=0;
  char* __t1838t__unsafe_ptr=0;
  uint64_t __t1838t__unsafe_size=0;
  uint16_t __t1838t__unsafe_offset=0;
  uint16_t __t1838t__unsafe_align=0;
  uint64_t __t1839t____t510t=0;
  char __t1839t____t511t__=0;
  char* __t1840t__keys__unsafe_ptr=0;
  uint64_t __t1840t__keys__unsafe_size=0;
  uint16_t __t1840t__keys__unsafe_offset=0;
  uint16_t __t1840t__keys__unsafe_align=0;
  char* __t1840t__values__unsafe_ptr=0;
  uint64_t __t1840t__values__unsafe_size=0;
  uint16_t __t1840t__values__unsafe_offset=0;
  uint16_t __t1840t__values__unsafe_align=0;
  uint64_t __t1841t____t1748t____t510t=0;
  char __t1841t____t1748t____t511t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t1843t__=0;
  char* __t1845t__unsafe_ptr=0;
  uint64_t __t1845t__dat__pos=0;
  uint64_t __t1845t__dat__length=0;
  char __t1845t__dat__first=0;
  char* __t1846t__unsafe_ptr=0;
  uint64_t __t1846t__dat__pos=0;
  uint64_t __t1846t__dat__length=0;
  char __t1846t__dat__first=0;
  char* __t1848t__=0;
  char* __t1850t__unsafe_ptr=0;
  uint64_t __t1850t__dat__pos=0;
  uint64_t __t1850t__dat__length=0;
  char __t1850t__dat__first=0;
  char* __t1851t__unsafe_ptr=0;
  uint64_t __t1851t__dat__pos=0;
  uint64_t __t1851t__dat__length=0;
  char __t1851t__dat__first=0;
  char* __t1852t__buf__unsafe_ptr=0;
  uint64_t __t1852t__buf__unsafe_size=0;
  uint16_t __t1852t__buf__unsafe_offset=0;
  uint16_t __t1852t__buf__unsafe_align=0;
  uint64_t __t1852t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t1853t=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__dat__pos=0;
  uint64_t __t1854t__dat__length=0;
  char __t1854t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1826t(&__t1835t__unsafe_ptr,&__t1835t__unsafe_size,&__t1835t__unsafe_offset,&__t1835t__unsafe_align);
  __t1836t__unsafe_ptr=__t1835t__unsafe_ptr;
  __t1836t__unsafe_size=__t1835t__unsafe_size;
  __t1836t__unsafe_offset=__t1835t__unsafe_offset;
  __t1836t__unsafe_align=__t1835t__unsafe_align;
  __t1837t=128;
  __t_errcode=alloc__t508t(&__t1836t__unsafe_ptr,&__t1836t__unsafe_size,&__t1836t__unsafe_offset,&__t1836t__unsafe_align,__t1837t,&__t1838t__unsafe_ptr,&__t1838t__unsafe_size,&__t1838t__unsafe_offset,&__t1838t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1741t(&__t1838t__unsafe_ptr,&__t1838t__unsafe_size,&__t1838t__unsafe_offset,&__t1838t__unsafe_align,&__t1840t__keys__unsafe_ptr,&__t1840t__keys__unsafe_size,&__t1840t__keys__unsafe_offset,&__t1840t__keys__unsafe_align,&__t1840t__values__unsafe_ptr,&__t1840t__values__unsafe_size,&__t1840t__values__unsafe_offset,&__t1840t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t1765t(&__t1840t__keys__unsafe_ptr,&__t1840t__keys__unsafe_size,&__t1840t__keys__unsafe_offset,&__t1840t__keys__unsafe_align,&__t1840t__values__unsafe_ptr,&__t1840t__values__unsafe_size,&__t1840t__values__unsafe_offset,&__t1840t__values__unsafe_align,__t1842t,&__t1843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t1844t,&__t1845t__unsafe_ptr,&__t1845t__dat__pos,&__t1845t__dat__length,&__t1845t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1845t__unsafe_ptr,__t1845t__dat__pos,__t1845t__dat__length,__t1845t__dat__first,&__t1846t__unsafe_ptr,&__t1846t__dat__pos,&__t1846t__dat__length,&__t1846t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1843t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1843t__,&__t1846t__unsafe_ptr,8);
  memcpy(__t1843t__+8,&__t1846t__dat__pos,8);
  memcpy(__t1843t__+16,&__t1846t__dat__length,8);
  memcpy(__t1843t__+24,&__t1846t__dat__first,1);
  __t_errcode=mutget__t1765t(&__t1840t__keys__unsafe_ptr,&__t1840t__keys__unsafe_size,&__t1840t__keys__unsafe_offset,&__t1840t__keys__unsafe_align,&__t1840t__values__unsafe_ptr,&__t1840t__values__unsafe_size,&__t1840t__values__unsafe_offset,&__t1840t__values__unsafe_align,__t1847t,&__t1848t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t1849t,&__t1850t__unsafe_ptr,&__t1850t__dat__pos,&__t1850t__dat__length,&__t1850t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1850t__unsafe_ptr,__t1850t__dat__pos,__t1850t__dat__length,__t1850t__dat__first,&__t1851t__unsafe_ptr,&__t1851t__dat__pos,&__t1851t__dat__length,&__t1851t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1848t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1848t__,&__t1851t__unsafe_ptr,8);
  memcpy(__t1848t__+8,&__t1851t__dat__pos,8);
  memcpy(__t1848t__+16,&__t1851t__dat__length,8);
  memcpy(__t1848t__+24,&__t1851t__dat__first,1);
  bufpos__t718t(&__t1840t__keys__unsafe_ptr,&__t1840t__keys__unsafe_size,&__t1840t__keys__unsafe_offset,&__t1840t__keys__unsafe_align,&__t1852t__buf__unsafe_ptr,&__t1852t__buf__unsafe_size,&__t1852t__buf__unsafe_offset,&__t1852t__buf__unsafe_align,&__t1852t__pos);
  it__pos=__t1852t__pos;
  while(1){
  __t_complain=next__t1783t(__t1840t__keys__unsafe_ptr,__t1840t__keys__unsafe_size,__t1840t__keys__unsafe_offset,__t1840t__keys__unsafe_align,&it__pos,&__t1854t__unsafe_ptr,&__t1854t__dat__pos,&__t1854t__dat__length,&__t1854t__dat__first);
  __t1853t=__t_complain;
  key__unsafe_ptr=__t1854t__unsafe_ptr;
  key__dat__pos=__t1854t__dat__pos;
  key__dat__length=__t1854t__dat__length;
  key__dat__first=__t1854t__dat__first;
  __t1853t=__t1853t==0;
  if(!__t1853t){
  break;
  }
  print__t784t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t1840t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1840t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1840t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1840t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1840t__values__unsafe_ptr;
  map__values__unsafe_size=__t1840t__values__unsafe_size;
  map__values__unsafe_offset=__t1840t__values__unsafe_offset;
  map__values__unsafe_align=__t1840t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1841t____t1748t____t510t=0;
  neq__t142t(map__keys__unsafe_size,__t1841t____t1748t____t510t,&__t1841t____t1748t____t511t__);
  if(__t1841t____t1748t____t511t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t501t(&map__keys__unsafe_ptr);
  }
  __t1839t____t510t=0;
  neq__t142t(map__keys__unsafe_size,__t1839t____t510t,&__t1839t____t511t__);
  if(__t1839t____t511t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t501t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2022t=buf__buf__unsafe_ptr;
  *__t2023t=buf__buf__unsafe_size;
  *__t2024t=buf__buf__unsafe_offset;
  *__t2025t=buf__buf__unsafe_align;
  *__t2026t=buf__pos;
  *__t2027t=map__keys__unsafe_ptr;
  *__t2028t=map__keys__unsafe_size;
  *__t2029t=map__keys__unsafe_offset;
  *__t2030t=map__keys__unsafe_align;
  *__t2031t=map__values__unsafe_ptr;
  *__t2032t=map__values__unsafe_size;
  *__t2033t=map__values__unsafe_offset;
  *__t2034t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1856t(char** __t2035t, uint64_t* __t2036t, uint16_t* __t2037t, uint16_t* __t2038t, char** __t2039t, uint64_t* __t2040t, uint16_t* __t2041t, uint16_t* __t2042t, char** __t2043t, uint64_t* __t2044t, uint16_t* __t2045t, uint16_t* __t2046t, uint64_t* __t2047t) {
  char* __t1859t__unsafe_ptr=0;
  uint64_t __t1859t__unsafe_size=0;
  uint16_t __t1859t__unsafe_offset=0;
  uint16_t __t1859t__unsafe_align=0;
  uint64_t __t1860t=0;
  uint64_t __t1861t__=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__unsafe_size=0;
  uint16_t __t1862t__unsafe_offset=0;
  uint16_t __t1862t__unsafe_align=0;
  uint64_t __t1863t____t510t=0;
  char __t1863t____t511t__=0;
  char* __t1864t__buf__unsafe_ptr=0;
  uint64_t __t1864t__buf__unsafe_size=0;
  uint16_t __t1864t__buf__unsafe_offset=0;
  uint16_t __t1864t__buf__unsafe_align=0;
  uint64_t __t1864t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1865t__keys__unsafe_ptr=0;
  uint64_t __t1865t__keys__unsafe_size=0;
  uint16_t __t1865t__keys__unsafe_offset=0;
  uint16_t __t1865t__keys__unsafe_align=0;
  char* __t1865t__values__unsafe_ptr=0;
  uint64_t __t1865t__values__unsafe_size=0;
  uint16_t __t1865t__values__unsafe_offset=0;
  uint16_t __t1865t__values__unsafe_align=0;
  uint64_t __t1866t____t1839t____t510t=0;
  char __t1866t____t1839t____t511t__=0;
  uint64_t __t1866t____t1841t____t1748t____t510t=0;
  char __t1866t____t1841t____t1748t____t511t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1857t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align);
  __t1860t=4;
  KB__t479t(__t1860t,&__t1861t__);
  __t_errcode=alloc__t508t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align,__t1861t__,&__t1862t__unsafe_ptr,&__t1862t__unsafe_size,&__t1862t__unsafe_offset,&__t1862t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1862t__unsafe_ptr,&__t1862t__unsafe_size,&__t1862t__unsafe_offset,&__t1862t__unsafe_align,&__t1864t__buf__unsafe_ptr,&__t1864t__buf__unsafe_size,&__t1864t__buf__unsafe_offset,&__t1864t__buf__unsafe_align,&__t1864t__pos);
  buf__buf__unsafe_ptr=__t1864t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1864t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1864t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1864t__buf__unsafe_align;
  buf__pos=__t1864t__pos;
  __t_errcode=test__t1834t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t1865t__keys__unsafe_ptr,&__t1865t__keys__unsafe_size,&__t1865t__keys__unsafe_offset,&__t1865t__keys__unsafe_align,&__t1865t__values__unsafe_ptr,&__t1865t__values__unsafe_size,&__t1865t__values__unsafe_offset,&__t1865t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t1865t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1865t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1865t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1865t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1865t__values__unsafe_ptr;
  map__values__unsafe_size=__t1865t__values__unsafe_size;
  map__values__unsafe_offset=__t1865t__values__unsafe_offset;
  map__values__unsafe_align=__t1865t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1866t____t1841t____t1748t____t510t=0;
  neq__t142t(map__keys__unsafe_size,__t1866t____t1841t____t1748t____t510t,&__t1866t____t1841t____t1748t____t511t__);
  if(__t1866t____t1841t____t1748t____t511t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t501t(&map__keys__unsafe_ptr);
  }
  __t1866t____t1839t____t510t=0;
  neq__t142t(map__keys__unsafe_size,__t1866t____t1839t____t510t,&__t1866t____t1839t____t511t__);
  if(__t1866t____t1839t____t511t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t501t(&map__values__unsafe_ptr);
  }
  __t1863t____t510t=0;
  neq__t142t(buf__buf__unsafe_size,__t1863t____t510t,&__t1863t____t511t__);
  if(__t1863t____t511t__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t501t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2035t=map__keys__unsafe_ptr;
  *__t2036t=map__keys__unsafe_size;
  *__t2037t=map__keys__unsafe_offset;
  *__t2038t=map__keys__unsafe_align;
  *__t2039t=map__values__unsafe_ptr;
  *__t2040t=map__values__unsafe_size;
  *__t2041t=map__values__unsafe_offset;
  *__t2042t=map__values__unsafe_align;
  *__t2043t=buf__buf__unsafe_ptr;
  *__t2044t=buf__buf__unsafe_size;
  *__t2045t=buf__buf__unsafe_offset;
  *__t2046t=buf__buf__unsafe_align;
  *__t2047t=buf__pos;
  
  return __t_errcode;
}

int raw__t1362t(const char* r, char** __t2048t, uint64_t* __t2049t, uint64_t* __t2050t, char* __t2051t) {
  char* __t1363t__unsafe_ptr=0;
  uint64_t __t1363t__dat__pos=0;
  uint64_t __t1363t__dat__length=0;
  char __t1363t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(r,&__t1363t__unsafe_ptr,&__t1363t__dat__pos,&__t1363t__dat__length,&__t1363t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2048t=__t1363t__unsafe_ptr;
  *__t2049t=__t1363t__dat__pos;
  *__t2050t=__t1363t__dat__length;
  *__t2051t=__t1363t__dat__first;
  
  return __t_errcode;
}

int find__t1406t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2052t) {
  char* __t1407t__unsafe_ptr=0;
  uint64_t __t1407t__dat__pos=0;
  uint64_t __t1407t__dat__length=0;
  char __t1407t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1408t__=0;
  uint64_t __t1409t=0;
  uint64_t __t1410t=0;
  char* __t1411t__=0;
  char* __t1412t__s__unsafe_ptr=0;
  uint64_t __t1412t__s__dat__pos=0;
  uint64_t __t1412t__s__dat__length=0;
  char __t1412t__s__dat__first=0;
  uint64_t __t1412t__cost=0;
  char* __t1413t__unsafe_ptr=0;
  uint64_t __t1413t__dat__pos=0;
  uint64_t __t1413t__dat__length=0;
  char __t1413t__dat__first=0;
  int __t1414t=0;
  int __t1415t__=0;
  uint64_t __t1416t__=0;
  uint64_t n=0;
  uint64_t __t1417t__=0;
  uint64_t pos=0;
  uint64_t __t1418t__from=0;
  uint64_t __t1418t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1419t=0;
  uint64_t __t1420t__=0;
  uint64_t i=0;
  uint64_t __t1421t__=0;
  uint64_t __t1422t=0;
  uint64_t idx=0;
  char __t1423t__=0;
  uint64_t __t1424t__=0;
  uint64_t __t1425t=0;
  char __t1426t__=0;
  char* __t1427t__=0;
  char* __t1428t__s__unsafe_ptr=0;
  uint64_t __t1428t__s__dat__pos=0;
  uint64_t __t1428t__s__dat__length=0;
  char __t1428t__s__dat__first=0;
  uint64_t __t1428t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1429t__unsafe_ptr=0;
  uint64_t __t1429t__dat__pos=0;
  uint64_t __t1429t__dat__length=0;
  char __t1429t__dat__first=0;
  char __t1430t__=0;
  char* __t1431t__unsafe_ptr=0;
  uint64_t __t1431t__dat__pos=0;
  uint64_t __t1431t__dat__length=0;
  char __t1431t__dat__first=0;
  char __t1432t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1360t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1407t__unsafe_ptr,&__t1407t__dat__pos,&__t1407t__dat__length,&__t1407t__dat__first);
  k__unsafe_ptr=__t1407t__unsafe_ptr;
  k__dat__pos=__t1407t__dat__pos;
  k__dat__length=__t1407t__dat__length;
  k__dat__first=__t1407t__dat__first;
  is_zero__t1364t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1408t__);
  if(__t1408t__){
  __t1409t=0;
  goto __t_return;
  }
  __t1410t=0;
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1410t,&__t1411t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1411t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1412t__s__unsafe_ptr,__t1411t__,8);
  memcpy(&__t1412t__s__dat__pos,__t1411t__+8,8);
  memcpy(&__t1412t__s__dat__length,__t1411t__+16,8);
  memcpy(&__t1412t__s__dat__first,__t1411t__+24,1);
  memcpy(&__t1412t__cost,__t1411t__+25,8);
  raw__t1358t(__t1412t__s__unsafe_ptr,__t1412t__s__dat__pos,__t1412t__s__dat__length,__t1412t__s__dat__first,__t1412t__cost,&__t1413t__unsafe_ptr,&__t1413t__dat__pos,&__t1413t__dat__length,&__t1413t__dat__first);
  not__t35t(__t1414t,&__t1415t__);
  len__t604t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1416t__);
  n=__t1416t__;
  __t_errcode=hash__t1309t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1417t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1417t__;
  range__t460t(n,&__t1418t__from,&__t1418t__to);
  iter__from=__t1418t__from;
  iter__to=__t1418t__to;
  while(1){
  __t_complain=next__t469t(&iter__from,iter__to,&__t1420t__);
  __t1419t=__t_complain;
  i=__t1420t__;
  __t1419t=__t1419t==0;
  if(!__t1419t){
  break;
  }
  add__t170t(pos,i,&__t1421t__);
  __t1422t=__t1421t__;
  idx=__t1422t;
  ge__t319t(idx,n,&__t1423t__);
  if(__t1423t__){
  __t_errcode=sub__t347t(idx,n,&__t1424t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1424t__;
  }
  __t1425t=0;
  eq__t118t(idx,__t1425t,&__t1426t__);
  if(__t1426t__){
  continue;
  }
  __t_errcode=get__t597t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1427t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1427t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1428t__s__unsafe_ptr,__t1427t__,8);
  memcpy(&__t1428t__s__dat__pos,__t1427t__+8,8);
  memcpy(&__t1428t__s__dat__length,__t1427t__+16,8);
  memcpy(&__t1428t__s__dat__first,__t1427t__+24,1);
  memcpy(&__t1428t__cost,__t1427t__+25,8);
  entry__s__unsafe_ptr=__t1428t__s__unsafe_ptr;
  entry__s__dat__pos=__t1428t__s__dat__pos;
  entry__s__dat__length=__t1428t__s__dat__length;
  entry__s__dat__first=__t1428t__s__dat__first;
  entry__cost=__t1428t__cost;
  raw__t1358t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1429t__unsafe_ptr,&__t1429t__dat__pos,&__t1429t__dat__length,&__t1429t__dat__first);
  is_zero__t1364t(__t1429t__unsafe_ptr,__t1429t__dat__pos,__t1429t__dat__length,__t1429t__dat__first,&__t1430t__);
  if(__t1430t__){
  continue;
  }
  raw__t1358t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1431t__unsafe_ptr,&__t1431t__dat__pos,&__t1431t__dat__length,&__t1431t__dat__first);
  eq__t827t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1431t__unsafe_ptr,__t1431t__dat__pos,__t1431t__dat__length,__t1431t__dat__first,&__t1432t__);
  if(__t1432t__){
  __t1409t=idx;
  goto __t_return;
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2052t=__t1409t;
  
  return __t_errcode;
}

int get__t1757t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2053t) {
  char* __t1758t__unsafe_ptr=0;
  uint64_t __t1758t__dat__pos=0;
  uint64_t __t1758t__dat__length=0;
  char __t1758t__dat__first=0;
  uint64_t __t1759t__=0;
  char* __t1760t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1362t(key,&__t1758t__unsafe_ptr,&__t1758t__dat__pos,&__t1758t__dat__length,&__t1758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1406t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1758t__unsafe_ptr,__t1758t__dat__pos,__t1758t__dat__length,__t1758t__dat__first,&__t1759t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t597t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1759t__,&__t1760t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2053t=__t1760t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1867t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t1868t__=0;
  char* __t1869t____t635t__unsafe_ptr=0;
  uint64_t __t1869t____t635t__dat__pos=0;
  uint64_t __t1869t____t635t__dat__length=0;
  char __t1869t____t635t__dat__first=0;
  char* __t1871t__=0;
  char* __t1872t____t635t__unsafe_ptr=0;
  uint64_t __t1872t____t635t__dat__pos=0;
  uint64_t __t1872t____t635t__dat__length=0;
  char __t1872t____t635t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1757t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1842t,&__t1868t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1868t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1869t____t635t__unsafe_ptr,__t1868t__,8);
  memcpy(&__t1869t____t635t__dat__pos,__t1868t__+8,8);
  memcpy(&__t1869t____t635t__dat__length,__t1868t__+16,8);
  memcpy(&__t1869t____t635t__dat__first,__t1868t__+24,1);
  print__t784t(__t1869t____t635t__unsafe_ptr,__t1869t____t635t__dat__pos,__t1869t____t635t__dat__length,__t1869t____t635t__dat__first);
  __t_errcode=get__t1757t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1847t,&__t1871t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1871t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1872t____t635t__unsafe_ptr,__t1871t__,8);
  memcpy(&__t1872t____t635t__dat__pos,__t1871t__+8,8);
  memcpy(&__t1872t____t635t__dat__length,__t1871t__+16,8);
  memcpy(&__t1872t____t635t__dat__first,__t1871t__+24,1);
  print__t784t(__t1872t____t635t__unsafe_ptr,__t1872t____t635t__dat__pos,__t1872t____t635t__dat__length,__t1872t____t635t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1874t() {
  char* __t1875t__map__keys__unsafe_ptr=0;
  uint64_t __t1875t__map__keys__unsafe_size=0;
  uint16_t __t1875t__map__keys__unsafe_offset=0;
  uint16_t __t1875t__map__keys__unsafe_align=0;
  char* __t1875t__map__values__unsafe_ptr=0;
  uint64_t __t1875t__map__values__unsafe_size=0;
  uint16_t __t1875t__map__values__unsafe_offset=0;
  uint16_t __t1875t__map__values__unsafe_align=0;
  char* __t1875t__buf__buf__unsafe_ptr=0;
  uint64_t __t1875t__buf__buf__unsafe_size=0;
  uint16_t __t1875t__buf__buf__unsafe_offset=0;
  uint16_t __t1875t__buf__buf__unsafe_align=0;
  uint64_t __t1875t__buf__pos=0;
  uint64_t __t1876t____t1863t____t510t=0;
  char __t1876t____t1863t____t511t__=0;
  uint64_t __t1876t____t1866t____t1839t____t510t=0;
  char __t1876t____t1866t____t1839t____t511t__=0;
  uint64_t __t1876t____t1866t____t1841t____t1748t____t510t=0;
  char __t1876t____t1866t____t1841t____t1748t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1856t(&__t1875t__map__keys__unsafe_ptr,&__t1875t__map__keys__unsafe_size,&__t1875t__map__keys__unsafe_offset,&__t1875t__map__keys__unsafe_align,&__t1875t__map__values__unsafe_ptr,&__t1875t__map__values__unsafe_size,&__t1875t__map__values__unsafe_offset,&__t1875t__map__values__unsafe_align,&__t1875t__buf__buf__unsafe_ptr,&__t1875t__buf__buf__unsafe_size,&__t1875t__buf__buf__unsafe_offset,&__t1875t__buf__buf__unsafe_align,&__t1875t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1867t(__t1875t__map__keys__unsafe_ptr,__t1875t__map__keys__unsafe_size,__t1875t__map__keys__unsafe_offset,__t1875t__map__keys__unsafe_align,__t1875t__map__values__unsafe_ptr,__t1875t__map__values__unsafe_size,__t1875t__map__values__unsafe_offset,__t1875t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t1876t____t1866t____t1841t____t1748t____t510t=0;
  neq__t142t(__t1875t__map__keys__unsafe_size,__t1876t____t1866t____t1841t____t1748t____t510t,&__t1876t____t1866t____t1841t____t1748t____t511t__);
  if(__t1876t____t1866t____t1841t____t1748t____t511t__){
  __t1875t__map__keys__unsafe_size=0;
  __t1875t__map__keys__unsafe_size=__t1875t__map__keys__unsafe_size;
  __t1875t__map__keys__unsafe_ptr=__t1875t__map__keys__unsafe_ptr;
  free__t501t(&__t1875t__map__keys__unsafe_ptr);
  }
  __t1876t____t1866t____t1839t____t510t=0;
  neq__t142t(__t1875t__map__keys__unsafe_size,__t1876t____t1866t____t1839t____t510t,&__t1876t____t1866t____t1839t____t511t__);
  if(__t1876t____t1866t____t1839t____t511t__){
  __t1875t__map__keys__unsafe_size=0;
  __t1875t__map__keys__unsafe_size=__t1875t__map__keys__unsafe_size;
  __t1875t__map__values__unsafe_ptr=__t1875t__map__values__unsafe_ptr;
  free__t501t(&__t1875t__map__values__unsafe_ptr);
  }
  __t1876t____t1863t____t510t=0;
  neq__t142t(__t1875t__buf__buf__unsafe_size,__t1876t____t1863t____t510t,&__t1876t____t1863t____t511t__);
  if(__t1876t____t1863t____t511t__){
  __t1875t__buf__buf__unsafe_size=0;
  __t1875t__buf__buf__unsafe_size=__t1875t__buf__buf__unsafe_size;
  __t1875t__buf__buf__unsafe_ptr=__t1875t__buf__buf__unsafe_ptr;
  free__t501t(&__t1875t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1874t();return 0;}