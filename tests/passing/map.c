#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1860t="hello world!";
const char* const __t1865t="it's a me, manio.";
const char* const __t1858t="hello";
const char* const __t1863t="manio";
const char* const __t371t="\n";
static const char* __t_all_errcodes[38] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1873t(char** __t1894t, uint64_t* __t1895t, uint16_t* __t1896t, uint16_t* __t1897t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1894t=unsafe_ptr;
  *__t1895t=unsafe_size;
  *__t1896t=unsafe_offset;
  *__t1897t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1898t) {
  int value=0;
  *__t1898t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1899t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1899t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1900t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1900t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1901t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1901t=z;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1902t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1902t=__t482t__;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1903t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1903t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1904t) {
  char* allocated=*__t1904t;
  if(allocated){
  free(allocated);
  }
  *__t1904t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1905t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1906t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1906t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1907t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1907t=value;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1908t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1909t) {
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
  *__t1909t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1910t, uint64_t* __t1911t, uint16_t* __t1912t, uint16_t* __t1913t, uint64_t size, char** __t1914t, uint64_t* __t1915t, uint16_t* __t1916t, uint16_t* __t1917t) {
  char* buffer__unsafe_ptr=*__t1910t;
  uint64_t buffer__unsafe_size=*__t1911t;
  uint16_t buffer__unsafe_offset=*__t1912t;
  uint16_t buffer__unsafe_align=*__t1913t;
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
  *__t1910t=buffer__unsafe_ptr;
  *__t1911t=buffer__unsafe_size;
  *__t1912t=buffer__unsafe_offset;
  *__t1913t=buffer__unsafe_align;
  *__t1914t=__t520t__unsafe_ptr;
  *__t1915t=__t520t__unsafe_size;
  *__t1916t=__t520t__unsafe_offset;
  *__t1917t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t722t(char** __t1918t, uint64_t* __t1919t, uint16_t* __t1920t, uint16_t* __t1921t, char** __t1922t, uint64_t* __t1923t, uint16_t* __t1924t, uint16_t* __t1925t, uint64_t* __t1926t) {
  char* buf__unsafe_ptr=*__t1918t;
  uint64_t buf__unsafe_size=*__t1919t;
  uint16_t buf__unsafe_offset=*__t1920t;
  uint16_t buf__unsafe_align=*__t1921t;
  uint64_t __t723t=0;
  uint64_t __t724t=0;
  uint64_t pos=0;
  __t723t=0;
  __t724t=__t723t;
  pos=__t724t;
  goto __t_return;
  __t_return:
  *__t1918t=buf__unsafe_ptr;
  *__t1919t=buf__unsafe_size;
  *__t1920t=buf__unsafe_offset;
  *__t1921t=buf__unsafe_align;
  *__t1922t=buf__unsafe_ptr;
  *__t1923t=buf__unsafe_size;
  *__t1924t=buf__unsafe_offset;
  *__t1925t=buf__unsafe_align;
  *__t1926t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1842t(char** __t1927t, uint64_t* __t1928t, uint16_t* __t1929t, uint16_t* __t1930t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1927t=unsafe_ptr;
  *__t1928t=unsafe_size;
  *__t1929t=unsafe_offset;
  *__t1930t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1758t(char** __t1931t, uint64_t* __t1932t, uint16_t* __t1933t, uint16_t* __t1934t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t1931t=unsafe_ptr;
  *__t1932t=unsafe_size;
  *__t1933t=unsafe_offset;
  *__t1934t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1935t) {
  goto __t_return;
  __t_return:
  *__t1935t=buffer__unsafe_size;
}

int strmap__t1757t(char** __t1936t, uint64_t* __t1937t, uint16_t* __t1938t, uint16_t* __t1939t, char** __t1940t, uint64_t* __t1941t, uint16_t* __t1942t, uint16_t* __t1943t, char** __t1944t, uint64_t* __t1945t, uint16_t* __t1946t, uint16_t* __t1947t) {
  char* values__unsafe_ptr=*__t1936t;
  uint64_t values__unsafe_size=*__t1937t;
  uint16_t values__unsafe_offset=*__t1938t;
  uint16_t values__unsafe_align=*__t1939t;
  char* __t1760t__unsafe_ptr=0;
  uint64_t __t1760t__unsafe_size=0;
  uint16_t __t1760t__unsafe_offset=0;
  uint16_t __t1760t__unsafe_align=0;
  char* __t1761t__unsafe_ptr=0;
  uint64_t __t1761t__unsafe_size=0;
  uint16_t __t1761t__unsafe_offset=0;
  uint16_t __t1761t__unsafe_align=0;
  uint64_t __t1762t__=0;
  char* __t1763t__unsafe_ptr=0;
  uint64_t __t1763t__unsafe_size=0;
  uint16_t __t1763t__unsafe_offset=0;
  uint16_t __t1763t__unsafe_align=0;
  char __t1764t____t511t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1758t(&__t1760t__unsafe_ptr,&__t1760t__unsafe_size,&__t1760t__unsafe_offset,&__t1760t__unsafe_align);
  __t1761t__unsafe_ptr=__t1760t__unsafe_ptr;
  __t1761t__unsafe_size=__t1760t__unsafe_size;
  __t1761t__unsafe_offset=__t1760t__unsafe_offset;
  __t1761t__unsafe_align=__t1760t__unsafe_align;
  len__t602t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1762t__);
  __t_errcode=alloc__t509t(&__t1761t__unsafe_ptr,&__t1761t__unsafe_size,&__t1761t__unsafe_offset,&__t1761t__unsafe_align,__t1762t__,&__t1763t__unsafe_ptr,&__t1763t__unsafe_size,&__t1763t__unsafe_offset,&__t1763t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1763t__unsafe_ptr;
  keys__unsafe_size=__t1763t__unsafe_size;
  keys__unsafe_offset=__t1763t__unsafe_offset;
  keys__unsafe_align=__t1763t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(keys__unsafe_ptr,&__t1764t____t511t__);
  if(__t1764t____t511t__){
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__t502t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t1936t=values__unsafe_ptr;
  *__t1937t=values__unsafe_size;
  *__t1938t=values__unsafe_offset;
  *__t1939t=values__unsafe_align;
  *__t1940t=keys__unsafe_ptr;
  *__t1941t=keys__unsafe_size;
  *__t1942t=keys__unsafe_offset;
  *__t1943t=keys__unsafe_align;
  *__t1944t=values__unsafe_ptr;
  *__t1945t=values__unsafe_size;
  *__t1946t=values__unsafe_offset;
  *__t1947t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1948t, uint64_t* __t1949t, uint16_t* __t1950t, uint16_t* __t1951t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1948t=unsafe_ptr;
  *__t1949t=unsafe_size;
  *__t1950t=unsafe_offset;
  *__t1951t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1952t) {
  *__t1952t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1953t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1953t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1954t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1954t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1955t) {
  *__t1955t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1956t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1956t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1957t) {
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  char* __t601t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t596t__);
  if(__t596t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t597t__);
  mul__t195t(i,__t597t__,&__t598t__);
  nat__t506t(buffer__unsafe_offset,&__t599t__);
  add__t171t(__t598t__,__t599t__,&__t600t__);
  add__t504t(buffer__unsafe_ptr,__t600t__,&__t601t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1957t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1958t, uint64_t* __t1959t, uint64_t* __t1960t, char* __t1961t) {
  goto __t_return;
  __t_return:
  *__t1958t=unsafe_ptr;
  *__t1959t=dat__pos;
  *__t1960t=dat__length;
  *__t1961t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1962t, uint64_t* __t1963t, uint64_t* __t1964t, char* __t1965t) {
  char* unsafe_ptr=0;
  uint64_t __t635t__=0;
  uint64_t __t636t=0;
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t=0;
  char __t640t__=0;
  char* __t641t__unsafe_ptr=0;
  uint64_t __t641t__dat__pos=0;
  uint64_t __t641t__dat__length=0;
  char __t641t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t635t__);
  __t636t=1;
  neq__t143t(__t635t__,__t636t,&__t637t__);
  if(__t637t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t638t__);
  __t639t=0;
  neq__t143t(__t638t__,__t639t,&__t640t__);
  if(__t640t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t630t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t641t__unsafe_ptr,&__t641t__dat__pos,&__t641t__dat__length,&__t641t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1962t=__t641t__unsafe_ptr;
  *__t1963t=__t641t__dat__pos;
  *__t1964t=__t641t__dat__length;
  *__t1965t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1966t, uint64_t* __t1967t, uint64_t* __t1968t, char* __t1969t) {
  uint64_t __t667t=0;
  char __t668t__=0;
  char* __t669t__=0;
  char __t670t__value=0;
  char first=0;
  char* __t671t__unsafe_ptr=0;
  uint64_t __t671t__dat__pos=0;
  uint64_t __t671t__dat__length=0;
  char __t671t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t667t=0;
  neq__t143t(length,__t667t,&__t668t__);
  if(__t668t__){
  __t_errcode=get__t595t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t670t__value,__t669t__,1);
  first=__t670t__value;
  }
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t671t__unsafe_ptr,&__t671t__dat__pos,&__t671t__dat__length,&__t671t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1966t=__t671t__unsafe_ptr;
  *__t1967t=__t671t__dat__pos;
  *__t1968t=__t671t__dat__length;
  *__t1969t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1970t, uint64_t* __t1971t, uint64_t* __t1972t, char* __t1973t) {
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__unsafe_size=0;
  uint16_t __t674t__unsafe_offset=0;
  uint16_t __t674t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t675t__=0;
  uint64_t length=0;
  uint64_t __t676t=0;
  uint64_t __t677t__=0;
  uint64_t __t678t=0;
  char* __t679t__unsafe_ptr=0;
  uint64_t __t679t__dat__pos=0;
  uint64_t __t679t__dat__length=0;
  char __t679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t673t__unsafe_ptr,&__t673t__unsafe_size,&__t673t__unsafe_offset,&__t673t__unsafe_align);
  __t674t__unsafe_ptr=__t673t__unsafe_ptr;
  __t674t__unsafe_size=__t673t__unsafe_size;
  __t674t__unsafe_offset=__t673t__unsafe_offset;
  __t674t__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=__t674t__unsafe_ptr;
  buf__unsafe_size=__t674t__unsafe_size;
  buf__unsafe_offset=__t674t__unsafe_offset;
  buf__unsafe_align=__t674t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t675t__);
  buf__unsafe_ptr=__t675t__;
  if(c){
  length=strlen(c);
  }
  __t676t=1;
  add__t171t(length,__t676t,&__t677t__);
  buf__unsafe_size=__t677t__;
  __t678t=0;
  __t_errcode=str__t666t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t678t,length,&__t679t__unsafe_ptr,&__t679t__dat__pos,&__t679t__dat__length,&__t679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1970t=__t679t__unsafe_ptr;
  *__t1971t=__t679t__dat__pos;
  *__t1972t=__t679t__dat__length;
  *__t1973t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1376t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t1974t, uint64_t* __t1975t, uint64_t* __t1976t, char* __t1977t) {
  goto __t_return;
  __t_return:
  *__t1974t=r__unsafe_ptr;
  *__t1975t=r__dat__pos;
  *__t1976t=r__dat__length;
  *__t1977t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1978t) {
  goto __t_return;
  __t_return:
  *__t1978t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1380t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t1979t) {
  uint64_t __t1381t=0;
  uint64_t __t1382t__=0;
  char __t1383t__=0;
  __t1381t=0;
  len__t680t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1382t__);
  eq__t119t(__t1381t,__t1382t__,&__t1383t__);
  goto __t_return;
  __t_return:
  *__t1979t=__t1383t__;
}

static inline __attribute__((always_inline)) void raw__t1374t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t1980t, uint64_t* __t1981t, uint64_t* __t1982t, char* __t1983t) {
  goto __t_return;
  __t_return:
  *__t1980t=r__s__unsafe_ptr;
  *__t1981t=r__s__dat__pos;
  *__t1982t=r__s__dat__length;
  *__t1983t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1984t, uint64_t* __t1985t) {
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
  *__t1984t=from;
  *__t1985t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1986t, uint64_t r__to, uint64_t* __t1987t) {
  uint64_t r__from=*__t1986t;
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
  *__t1986t=r__from;
  *__t1987t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t437t(uint64_t value, uint64_t* __t1988t) {
  goto __t_return;
  __t_return:
  *__t1988t=value;
}

static inline __attribute__((always_inline)) void lshift__t447t(uint64_t x__value, uint64_t y, uint64_t* __t1989t) {
  uint64_t z=0;
  uint64_t __t448t__value=0;
  z=(x__value<<y);
  bits__t437t(z,&__t448t__value);
  goto __t_return;
  __t_return:
  *__t1989t=__t448t__value;
}

static inline __attribute__((always_inline)) void nat__t432t(uint64_t x, uint64_t* __t1990t) {
  int __t433t=0;
  int __t434t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1990t=value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x__value, uint64_t* __t1991t) {
  uint64_t __t444t__=0;
  nat__t432t(x__value,&__t444t__);
  goto __t_return;
  __t_return:
  *__t1991t=__t444t__;
}

static inline __attribute__((always_inline)) void get__t823t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1992t) {
  uint64_t __t824t__=0;
  char* __t825t__=0;
  add__t171t(s__dat__pos,i,&__t824t__);
  add__t504t(s__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  __t_return:
  *__t1992t=__t825t__;
}

static inline __attribute__((always_inline)) void nat__t435t(char x, uint64_t* __t1993t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1993t=value;
}

static inline __attribute__((always_inline)) int mod__t224t(uint64_t x, uint64_t y, uint64_t* __t1994t) {
  uint64_t zero=0;
  char __t225t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t119t(y,zero,&__t225t__);
  if(__t225t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1994t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1325t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t1995t) {
  uint64_t __t1326t=0;
  uint64_t __t1327t=0;
  uint64_t h=0;
  uint64_t __t1328t__=0;
  uint64_t __t1329t__from=0;
  uint64_t __t1329t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1330t=0;
  uint64_t __t1331t__=0;
  uint64_t i=0;
  uint64_t __t1332t__value=0;
  uint64_t __t1333t=0;
  uint64_t __t1334t__value=0;
  uint64_t __t1335t__=0;
  uint64_t __t1336t__=0;
  char* __t1337t__=0;
  char __t1338t__value=0;
  uint64_t __t1339t__=0;
  uint64_t __t1340t__=0;
  uint64_t __t1341t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1326t=5381;
  __t1327t=__t1326t;
  h=__t1327t;
  len__t680t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1328t__);
  range__t461t(__t1328t__,&__t1329t__from,&__t1329t__to);
  iter__from=__t1329t__from;
  iter__to=__t1329t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1331t__);
  __t1330t=__t_complain;
  i=__t1331t__;
  __t1330t=__t1330t==0;
  if(!__t1330t){
  break;
  }
  bits__t437t(h,&__t1332t__value);
  __t1333t=5;
  lshift__t447t(__t1332t__value,__t1333t,&__t1334t__value);
  nat__t443t(__t1334t__value,&__t1335t__);
  add__t171t(__t1335t__,h,&__t1336t__);
  get__t823t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1337t__);
  if(!__t1337t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1338t__value,__t1337t__,1);
  nat__t435t(__t1338t__value,&__t1339t__);
  add__t171t(__t1336t__,__t1339t__,&__t1340t__);
  h=__t1340t__;
  }
  __t_errcode=mod__t224t(h,size,&__t1341t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1995t=__t1341t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1996t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1996t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1997t) {
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
  *__t1997t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1998t, uint64_t* __t1999t, uint16_t* __t2000t, uint16_t* __t2001t, uint64_t i, char** __t2002t) {
  char* buffer__unsafe_ptr=*__t1998t;
  uint64_t buffer__unsafe_size=*__t1999t;
  uint16_t buffer__unsafe_offset=*__t2000t;
  uint16_t buffer__unsafe_align=*__t2001t;
  char __t589t__=0;
  uint64_t __t590t__=0;
  uint64_t __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  char* __t594t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t589t__);
  if(__t589t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t590t__);
  mul__t195t(i,__t590t__,&__t591t__);
  nat__t506t(buffer__unsafe_offset,&__t592t__);
  add__t171t(__t591t__,__t592t__,&__t593t__);
  add__t504t(buffer__unsafe_ptr,__t593t__,&__t594t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1998t=buffer__unsafe_ptr;
  *__t1999t=buffer__unsafe_size;
  *__t2000t=buffer__unsafe_offset;
  *__t2001t=buffer__unsafe_align;
  *__t2002t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t684t(char x, char y, char* __t2003t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2003t=z;
}

static inline __attribute__((always_inline)) void eq__t827t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2004t) {
  uint64_t __t828t__=0;
  uint64_t n=0;
  uint64_t __t829t__=0;
  char __t830t__=0;
  char __t831t=0;
  char __t832t__=0;
  char __t833t=0;
  char z=0;
  len__t680t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t828t__);
  n=__t828t__;
  len__t680t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t829t__);
  neq__t143t(n,__t829t__,&__t830t__);
  if(__t830t__){
  __t831t=0;
  goto __t_return;
  }
  neq__t684t(x__dat__first,y__dat__first,&__t832t__);
  if(__t832t__){
  __t833t=0;
  __t831t=__t833t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t831t=z;
  goto __t_return;
  __t_return:
  *__t2004t=__t831t;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2005t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2005t=z;
}

int at__t1656t(char** __t2006t, uint64_t* __t2007t, uint16_t* __t2008t, uint16_t* __t2009t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2010t) {
  char* data__unsafe_ptr=*__t2006t;
  uint64_t data__unsafe_size=*__t2007t;
  uint16_t data__unsafe_offset=*__t2008t;
  uint16_t data__unsafe_align=*__t2009t;
  char* __t1657t__unsafe_ptr=0;
  uint64_t __t1657t__dat__pos=0;
  uint64_t __t1657t__dat__length=0;
  char __t1657t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1658t__=0;
  uint64_t __t1659t=0;
  uint64_t __t1660t=0;
  char* __t1661t__=0;
  char* __t1662t__s__unsafe_ptr=0;
  uint64_t __t1662t__s__dat__pos=0;
  uint64_t __t1662t__s__dat__length=0;
  char __t1662t__s__dat__first=0;
  uint64_t __t1662t__cost=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__dat__pos=0;
  uint64_t __t1663t__dat__length=0;
  char __t1663t__dat__first=0;
  int __t1664t=0;
  int __t1665t__=0;
  uint64_t __t1666t__=0;
  uint64_t n=0;
  uint64_t __t1667t__=0;
  uint64_t pos=0;
  uint64_t __t1668t__from=0;
  uint64_t __t1668t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1669t=0;
  uint64_t __t1670t__=0;
  uint64_t i=0;
  uint64_t __t1671t__=0;
  uint64_t __t1672t=0;
  uint64_t idx=0;
  char __t1673t__=0;
  uint64_t __t1674t__=0;
  uint64_t __t1675t=0;
  char __t1676t__=0;
  char* __t1677t__=0;
  char* __t1678t__s__unsafe_ptr=0;
  uint64_t __t1678t__s__dat__pos=0;
  uint64_t __t1678t__s__dat__length=0;
  char __t1678t__s__dat__first=0;
  uint64_t __t1678t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__dat__pos=0;
  uint64_t __t1679t__dat__length=0;
  char __t1679t__dat__first=0;
  char __t1680t__=0;
  char* __t1681t__=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__dat__pos=0;
  uint64_t __t1682t__dat__length=0;
  char __t1682t__dat__first=0;
  char __t1683t__=0;
  char __t1684t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1685t__=0;
  char* __t1686t__s__unsafe_ptr=0;
  uint64_t __t1686t__s__dat__pos=0;
  uint64_t __t1686t__s__dat__length=0;
  char __t1686t__s__dat__first=0;
  uint64_t __t1686t__cost=0;
  char* __t1687t__unsafe_ptr=0;
  uint64_t __t1687t__dat__pos=0;
  uint64_t __t1687t__dat__length=0;
  char __t1687t__dat__first=0;
  char* __t1688t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1376t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1657t__unsafe_ptr,&__t1657t__dat__pos,&__t1657t__dat__length,&__t1657t__dat__first);
  k__unsafe_ptr=__t1657t__unsafe_ptr;
  k__dat__pos=__t1657t__dat__pos;
  k__dat__length=__t1657t__dat__length;
  k__dat__first=__t1657t__dat__first;
  is_zero__t1380t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1658t__);
  if(__t1658t__){
  __t1659t=0;
  goto __t_return;
  }
  __t1660t=0;
  __t_errcode=get__t595t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1660t,&__t1661t__);
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
  raw__t1374t(__t1662t__s__unsafe_ptr,__t1662t__s__dat__pos,__t1662t__s__dat__length,__t1662t__s__dat__first,__t1662t__cost,&__t1663t__unsafe_ptr,&__t1663t__dat__pos,&__t1663t__dat__length,&__t1663t__dat__first);
  not__t36t(__t1664t,&__t1665t__);
  len__t602t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1666t__);
  n=__t1666t__;
  __t_errcode=hash__t1325t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1667t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1667t__;
  range__t461t(n,&__t1668t__from,&__t1668t__to);
  iter__from=__t1668t__from;
  iter__to=__t1668t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1670t__);
  __t1669t=__t_complain;
  i=__t1670t__;
  __t1669t=__t1669t==0;
  if(!__t1669t){
  break;
  }
  add__t171t(pos,i,&__t1671t__);
  __t1672t=__t1671t__;
  idx=__t1672t;
  ge__t320t(idx,n,&__t1673t__);
  if(__t1673t__){
  __t_errcode=sub__t348t(idx,n,&__t1674t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1674t__;
  }
  __t1675t=0;
  eq__t119t(idx,__t1675t,&__t1676t__);
  if(__t1676t__){
  continue;
  }
  __t_errcode=get__t595t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1677t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1677t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1678t__s__unsafe_ptr,__t1677t__,8);
  memcpy(&__t1678t__s__dat__pos,__t1677t__+8,8);
  memcpy(&__t1678t__s__dat__length,__t1677t__+16,8);
  memcpy(&__t1678t__s__dat__first,__t1677t__+24,1);
  memcpy(&__t1678t__cost,__t1677t__+25,8);
  entry__s__unsafe_ptr=__t1678t__s__unsafe_ptr;
  entry__s__dat__pos=__t1678t__s__dat__pos;
  entry__s__dat__length=__t1678t__s__dat__length;
  entry__s__dat__first=__t1678t__s__dat__first;
  entry__cost=__t1678t__cost;
  raw__t1374t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1679t__unsafe_ptr,&__t1679t__dat__pos,&__t1679t__dat__length,&__t1679t__dat__first);
  is_zero__t1380t(__t1679t__unsafe_ptr,__t1679t__dat__pos,__t1679t__dat__length,__t1679t__dat__first,&__t1680t__);
  if(__t1680t__){
  __t_errcode=mutget__t588t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1681t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1681t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1681t__,&k__unsafe_ptr,8);
  memcpy(__t1681t__+8,&k__dat__pos,8);
  memcpy(__t1681t__+16,&k__dat__length,8);
  memcpy(__t1681t__+24,&k__dat__first,1);
  memcpy(__t1681t__+25,&i,8);
  __t1659t=idx;
  goto __t_return;
  }
  raw__t1374t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1682t__unsafe_ptr,&__t1682t__dat__pos,&__t1682t__dat__length,&__t1682t__dat__first);
  eq__t827t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1682t__unsafe_ptr,__t1682t__dat__pos,__t1682t__dat__length,__t1682t__dat__first,&__t1683t__);
  if(__t1683t__){
  __t1659t=idx;
  goto __t_return;
  }
  gt__t272t(i,entry__cost,&__t1684t__);
  if(__t1684t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t595t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1685t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1685t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1686t__s__unsafe_ptr,__t1685t__,8);
  memcpy(&__t1686t__s__dat__pos,__t1685t__+8,8);
  memcpy(&__t1686t__s__dat__length,__t1685t__+16,8);
  memcpy(&__t1686t__s__dat__first,__t1685t__+24,1);
  memcpy(&__t1686t__cost,__t1685t__+25,8);
  raw__t1374t(__t1686t__s__unsafe_ptr,__t1686t__s__dat__pos,__t1686t__s__dat__length,__t1686t__s__dat__first,__t1686t__cost,&__t1687t__unsafe_ptr,&__t1687t__dat__pos,&__t1687t__dat__length,&__t1687t__dat__first);
  k__unsafe_ptr=__t1687t__unsafe_ptr;
  k__dat__pos=__t1687t__dat__pos;
  k__dat__length=__t1687t__dat__length;
  k__dat__first=__t1687t__dat__first;
  __t_errcode=mutget__t588t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1688t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1688t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1688t__,&tmp__unsafe_ptr,8);
  memcpy(__t1688t__+8,&tmp__dat__pos,8);
  memcpy(__t1688t__+16,&tmp__dat__length,8);
  memcpy(__t1688t__+24,&tmp__dat__first,1);
  memcpy(__t1688t__+25,&i,8);
  }
  }
  __t_errcode=37;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2006t=data__unsafe_ptr;
  *__t2007t=data__unsafe_size;
  *__t2008t=data__unsafe_offset;
  *__t2009t=data__unsafe_align;
  *__t2010t=__t1659t;
  
  return __t_errcode;
}

int mutget__t1781t(char** __t2011t, uint64_t* __t2012t, uint16_t* __t2013t, uint16_t* __t2014t, char** __t2015t, uint64_t* __t2016t, uint16_t* __t2017t, uint16_t* __t2018t, const char* key, char** __t2019t) {
  char* keys__unsafe_ptr=*__t2011t;
  uint64_t keys__unsafe_size=*__t2012t;
  uint16_t keys__unsafe_offset=*__t2013t;
  uint16_t keys__unsafe_align=*__t2014t;
  char* values__unsafe_ptr=*__t2015t;
  uint64_t values__unsafe_size=*__t2016t;
  uint16_t values__unsafe_offset=*__t2017t;
  uint16_t values__unsafe_align=*__t2018t;
  char* __t1782t__unsafe_ptr=0;
  uint64_t __t1782t__dat__pos=0;
  uint64_t __t1782t__dat__length=0;
  char __t1782t__dat__first=0;
  uint64_t __t1783t__=0;
  char* __t1784t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t672t(key,&__t1782t__unsafe_ptr,&__t1782t__dat__pos,&__t1782t__dat__length,&__t1782t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1656t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1782t__unsafe_ptr,__t1782t__dat__pos,__t1782t__dat__length,__t1782t__dat__first,&__t1783t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t588t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1783t__,&__t1784t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2011t=keys__unsafe_ptr;
  *__t2012t=keys__unsafe_size;
  *__t2013t=keys__unsafe_offset;
  *__t2014t=keys__unsafe_align;
  *__t2015t=values__unsafe_ptr;
  *__t2016t=values__unsafe_size;
  *__t2017t=values__unsafe_offset;
  *__t2018t=values__unsafe_align;
  *__t2019t=__t1784t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t665t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2020t, uint64_t* __t2021t, uint64_t* __t2022t, char* __t2023t) {
  goto __t_return;
  __t_return:
  *__t2020t=other__unsafe_ptr;
  *__t2021t=other__dat__pos;
  *__t2022t=other__dat__length;
  *__t2023t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t2024t, uint64_t* __t2025t, uint16_t* __t2026t, uint16_t* __t2027t, uint64_t* __t2028t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2029t, uint64_t* __t2030t, uint64_t* __t2031t, char* __t2032t) {
  char* buf__unsafe_ptr=*__t2024t;
  uint64_t buf__unsafe_size=*__t2025t;
  uint16_t buf__unsafe_offset=*__t2026t;
  uint16_t buf__unsafe_align=*__t2027t;
  uint64_t pos=*__t2028t;
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
  str__t665t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t171t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t272t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t171t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2024t=buf__unsafe_ptr;
  *__t2025t=buf__unsafe_size;
  *__t2026t=buf__unsafe_offset;
  *__t2027t=buf__unsafe_align;
  *__t2028t=pos;
  *__t2029t=__t750t__unsafe_ptr;
  *__t2030t=__t750t__dat__pos;
  *__t2031t=__t750t__dat__length;
  *__t2032t=__t750t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1799t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2033t, char** __t2034t, uint64_t* __t2035t, uint64_t* __t2036t, char* __t2037t) {
  uint64_t pos=*__t2033t;
  uint64_t __t1800t=0;
  char __t1801t__=0;
  uint64_t __t1802t=0;
  uint64_t __t1803t__=0;
  uint64_t __t1804t=0;
  char* __t1805t__=0;
  char* __t1806t__s__unsafe_ptr=0;
  uint64_t __t1806t__s__dat__pos=0;
  uint64_t __t1806t__s__dat__length=0;
  char __t1806t__s__dat__first=0;
  uint64_t __t1806t__cost=0;
  char* __t1807t__unsafe_ptr=0;
  uint64_t __t1807t__dat__pos=0;
  uint64_t __t1807t__dat__length=0;
  char __t1807t__dat__first=0;
  char* __t1808t__=0;
  char* __t1809t__s__unsafe_ptr=0;
  uint64_t __t1809t__s__dat__pos=0;
  uint64_t __t1809t__s__dat__length=0;
  char __t1809t__s__dat__first=0;
  uint64_t __t1809t__cost=0;
  char* __t1810t__unsafe_ptr=0;
  uint64_t __t1810t__dat__pos=0;
  uint64_t __t1810t__dat__length=0;
  char __t1810t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1811t=0;
  uint64_t __t1812t__=0;
  char* __t1813t__unsafe_ptr=0;
  uint64_t __t1813t__dat__pos=0;
  uint64_t __t1813t__dat__length=0;
  char __t1813t__dat__first=0;
  char __t1814t__=0;
  char* __t1815t__=0;
  char* __t1816t__s__unsafe_ptr=0;
  uint64_t __t1816t__s__dat__pos=0;
  uint64_t __t1816t__s__dat__length=0;
  char __t1816t__s__dat__first=0;
  uint64_t __t1816t__cost=0;
  char* __t1817t__unsafe_ptr=0;
  uint64_t __t1817t__dat__pos=0;
  uint64_t __t1817t__dat__length=0;
  char __t1817t__dat__first=0;
  uint64_t __t1818t=0;
  uint64_t __t1819t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1800t=0;
  eq__t119t(pos,__t1800t,&__t1801t__);
  if(__t1801t__){
  __t1802t=1;
  add__t171t(pos,__t1802t,&__t1803t__);
  pos=__t1803t__;
  __t1804t=0;
  __t_errcode=get__t595t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1804t,&__t1805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1805t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1806t__s__unsafe_ptr,__t1805t__,8);
  memcpy(&__t1806t__s__dat__pos,__t1805t__+8,8);
  memcpy(&__t1806t__s__dat__length,__t1805t__+16,8);
  memcpy(&__t1806t__s__dat__first,__t1805t__+24,1);
  memcpy(&__t1806t__cost,__t1805t__+25,8);
  raw__t1374t(__t1806t__s__unsafe_ptr,__t1806t__s__dat__pos,__t1806t__s__dat__length,__t1806t__s__dat__first,__t1806t__cost,&__t1807t__unsafe_ptr,&__t1807t__dat__pos,&__t1807t__dat__length,&__t1807t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t595t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1808t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1808t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1809t__s__unsafe_ptr,__t1808t__,8);
  memcpy(&__t1809t__s__dat__pos,__t1808t__+8,8);
  memcpy(&__t1809t__s__dat__length,__t1808t__+16,8);
  memcpy(&__t1809t__s__dat__first,__t1808t__+24,1);
  memcpy(&__t1809t__cost,__t1808t__+25,8);
  raw__t1374t(__t1809t__s__unsafe_ptr,__t1809t__s__dat__pos,__t1809t__s__dat__length,__t1809t__s__dat__first,__t1809t__cost,&__t1810t__unsafe_ptr,&__t1810t__dat__pos,&__t1810t__dat__length,&__t1810t__dat__first);
  ret__unsafe_ptr=__t1810t__unsafe_ptr;
  ret__dat__pos=__t1810t__dat__pos;
  ret__dat__length=__t1810t__dat__length;
  ret__dat__first=__t1810t__dat__first;
  __t1811t=1;
  add__t171t(pos,__t1811t,&__t1812t__);
  pos=__t1812t__;
  while(1){
  raw__t1376t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1813t__unsafe_ptr,&__t1813t__dat__pos,&__t1813t__dat__length,&__t1813t__dat__first);
  is_zero__t1380t(__t1813t__unsafe_ptr,__t1813t__dat__pos,__t1813t__dat__length,__t1813t__dat__first,&__t1814t__);
  if(!__t1814t__){
  break;
  }
  __t_errcode=get__t595t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1815t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1815t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1816t__s__unsafe_ptr,__t1815t__,8);
  memcpy(&__t1816t__s__dat__pos,__t1815t__+8,8);
  memcpy(&__t1816t__s__dat__length,__t1815t__+16,8);
  memcpy(&__t1816t__s__dat__first,__t1815t__+24,1);
  memcpy(&__t1816t__cost,__t1815t__+25,8);
  raw__t1374t(__t1816t__s__unsafe_ptr,__t1816t__s__dat__pos,__t1816t__s__dat__length,__t1816t__s__dat__first,__t1816t__cost,&__t1817t__unsafe_ptr,&__t1817t__dat__pos,&__t1817t__dat__length,&__t1817t__dat__first);
  ret__unsafe_ptr=__t1817t__unsafe_ptr;
  ret__dat__pos=__t1817t__dat__pos;
  ret__dat__length=__t1817t__dat__length;
  ret__dat__first=__t1817t__dat__first;
  __t1818t=1;
  add__t171t(pos,__t1818t,&__t1819t__);
  pos=__t1819t__;
  }
  __t1807t__unsafe_ptr=ret__unsafe_ptr;
  __t1807t__dat__pos=ret__dat__pos;
  __t1807t__dat__length=ret__dat__length;
  __t1807t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2033t=pos;
  *__t2034t=__t1807t__unsafe_ptr;
  *__t2035t=__t1807t__dat__pos;
  *__t2036t=__t1807t__dat__length;
  *__t2037t=__t1807t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1850t(char** __t2038t, uint64_t* __t2039t, uint16_t* __t2040t, uint16_t* __t2041t, uint64_t* __t2042t, char** __t2043t, uint64_t* __t2044t, uint16_t* __t2045t, uint16_t* __t2046t, char** __t2047t, uint64_t* __t2048t, uint16_t* __t2049t, uint16_t* __t2050t) {
  char* buf__buf__unsafe_ptr=*__t2038t;
  uint64_t buf__buf__unsafe_size=*__t2039t;
  uint16_t buf__buf__unsafe_offset=*__t2040t;
  uint16_t buf__buf__unsafe_align=*__t2041t;
  uint64_t buf__pos=*__t2042t;
  char* __t1851t__unsafe_ptr=0;
  uint64_t __t1851t__unsafe_size=0;
  uint16_t __t1851t__unsafe_offset=0;
  uint16_t __t1851t__unsafe_align=0;
  uint64_t __t1852t=0;
  char* __t1853t__unsafe_ptr=0;
  uint64_t __t1853t__unsafe_size=0;
  uint16_t __t1853t__unsafe_offset=0;
  uint16_t __t1853t__unsafe_align=0;
  char __t1854t____t511t__=0;
  char* __t1855t__keys__unsafe_ptr=0;
  uint64_t __t1855t__keys__unsafe_size=0;
  uint16_t __t1855t__keys__unsafe_offset=0;
  uint16_t __t1855t__keys__unsafe_align=0;
  char* __t1855t__values__unsafe_ptr=0;
  uint64_t __t1855t__values__unsafe_size=0;
  uint16_t __t1855t__values__unsafe_offset=0;
  uint16_t __t1855t__values__unsafe_align=0;
  char __t1856t____t1764t____t511t__=0;
  char* __t1857t__keys__unsafe_ptr=0;
  uint64_t __t1857t__keys__unsafe_size=0;
  uint16_t __t1857t__keys__unsafe_offset=0;
  uint16_t __t1857t__keys__unsafe_align=0;
  char* __t1857t__values__unsafe_ptr=0;
  uint64_t __t1857t__values__unsafe_size=0;
  uint16_t __t1857t__values__unsafe_offset=0;
  uint16_t __t1857t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t1859t__=0;
  char* __t1861t__unsafe_ptr=0;
  uint64_t __t1861t__dat__pos=0;
  uint64_t __t1861t__dat__length=0;
  char __t1861t__dat__first=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__dat__pos=0;
  uint64_t __t1862t__dat__length=0;
  char __t1862t__dat__first=0;
  char* __t1864t__=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char* __t1867t__unsafe_ptr=0;
  uint64_t __t1867t__dat__pos=0;
  uint64_t __t1867t__dat__length=0;
  char __t1867t__dat__first=0;
  char* __t1868t__buf__unsafe_ptr=0;
  uint64_t __t1868t__buf__unsafe_size=0;
  uint16_t __t1868t__buf__unsafe_offset=0;
  uint16_t __t1868t__buf__unsafe_align=0;
  uint64_t __t1868t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t1869t=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__dat__pos=0;
  uint64_t __t1870t__dat__length=0;
  char __t1870t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1842t(&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align);
  __t1852t=128;
  __t_errcode=alloc__t509t(&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align,__t1852t,&__t1853t__unsafe_ptr,&__t1853t__unsafe_size,&__t1853t__unsafe_offset,&__t1853t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1757t(&__t1853t__unsafe_ptr,&__t1853t__unsafe_size,&__t1853t__unsafe_offset,&__t1853t__unsafe_align,&__t1855t__keys__unsafe_ptr,&__t1855t__keys__unsafe_size,&__t1855t__keys__unsafe_offset,&__t1855t__keys__unsafe_align,&__t1855t__values__unsafe_ptr,&__t1855t__values__unsafe_size,&__t1855t__values__unsafe_offset,&__t1855t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1857t__keys__unsafe_ptr=__t1855t__keys__unsafe_ptr;
  __t1857t__keys__unsafe_size=__t1855t__keys__unsafe_size;
  __t1857t__keys__unsafe_offset=__t1855t__keys__unsafe_offset;
  __t1857t__keys__unsafe_align=__t1855t__keys__unsafe_align;
  __t1857t__values__unsafe_ptr=__t1855t__values__unsafe_ptr;
  __t1857t__values__unsafe_size=__t1855t__values__unsafe_size;
  __t1857t__values__unsafe_offset=__t1855t__values__unsafe_offset;
  __t1857t__values__unsafe_align=__t1855t__values__unsafe_align;
  __t_errcode=mutget__t1781t(&__t1857t__keys__unsafe_ptr,&__t1857t__keys__unsafe_size,&__t1857t__keys__unsafe_offset,&__t1857t__keys__unsafe_align,&__t1857t__values__unsafe_ptr,&__t1857t__values__unsafe_size,&__t1857t__values__unsafe_offset,&__t1857t__values__unsafe_align,__t1858t,&__t1859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t672t(__t1860t,&__t1861t__unsafe_ptr,&__t1861t__dat__pos,&__t1861t__dat__length,&__t1861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1861t__unsafe_ptr,__t1861t__dat__pos,__t1861t__dat__length,__t1861t__dat__first,&__t1862t__unsafe_ptr,&__t1862t__dat__pos,&__t1862t__dat__length,&__t1862t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1859t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1859t__,&__t1862t__unsafe_ptr,8);
  memcpy(__t1859t__+8,&__t1862t__dat__pos,8);
  memcpy(__t1859t__+16,&__t1862t__dat__length,8);
  memcpy(__t1859t__+24,&__t1862t__dat__first,1);
  __t_errcode=mutget__t1781t(&__t1857t__keys__unsafe_ptr,&__t1857t__keys__unsafe_size,&__t1857t__keys__unsafe_offset,&__t1857t__keys__unsafe_align,&__t1857t__values__unsafe_ptr,&__t1857t__values__unsafe_size,&__t1857t__values__unsafe_offset,&__t1857t__values__unsafe_align,__t1863t,&__t1864t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t672t(__t1865t,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1866t__unsafe_ptr,__t1866t__dat__pos,__t1866t__dat__length,__t1866t__dat__first,&__t1867t__unsafe_ptr,&__t1867t__dat__pos,&__t1867t__dat__length,&__t1867t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1864t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1864t__,&__t1867t__unsafe_ptr,8);
  memcpy(__t1864t__+8,&__t1867t__dat__pos,8);
  memcpy(__t1864t__+16,&__t1867t__dat__length,8);
  memcpy(__t1864t__+24,&__t1867t__dat__first,1);
  bufpos__t722t(&__t1857t__keys__unsafe_ptr,&__t1857t__keys__unsafe_size,&__t1857t__keys__unsafe_offset,&__t1857t__keys__unsafe_align,&__t1868t__buf__unsafe_ptr,&__t1868t__buf__unsafe_size,&__t1868t__buf__unsafe_offset,&__t1868t__buf__unsafe_align,&__t1868t__pos);
  it__pos=__t1868t__pos;
  while(1){
  __t_complain=next__t1799t(__t1857t__keys__unsafe_ptr,__t1857t__keys__unsafe_size,__t1857t__keys__unsafe_offset,__t1857t__keys__unsafe_align,&it__pos,&__t1870t__unsafe_ptr,&__t1870t__dat__pos,&__t1870t__dat__length,&__t1870t__dat__first);
  __t1869t=__t_complain;
  key__unsafe_ptr=__t1870t__unsafe_ptr;
  key__dat__pos=__t1870t__dat__pos;
  key__dat__length=__t1870t__dat__length;
  key__dat__first=__t1870t__dat__first;
  __t1869t=__t1869t==0;
  if(!__t1869t){
  break;
  }
  print__t784t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t1857t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1857t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1857t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1857t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1857t__values__unsafe_ptr;
  map__values__unsafe_size=__t1857t__values__unsafe_size;
  map__values__unsafe_offset=__t1857t__values__unsafe_offset;
  map__values__unsafe_align=__t1857t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(map__keys__unsafe_ptr,&__t1856t____t1764t____t511t__);
  if(__t1856t____t1764t____t511t__){
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t502t(&map__keys__unsafe_ptr);
  }
  exists__t436t(map__values__unsafe_ptr,&__t1854t____t511t__);
  if(__t1854t____t511t__){
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t502t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2038t=buf__buf__unsafe_ptr;
  *__t2039t=buf__buf__unsafe_size;
  *__t2040t=buf__buf__unsafe_offset;
  *__t2041t=buf__buf__unsafe_align;
  *__t2042t=buf__pos;
  *__t2043t=map__keys__unsafe_ptr;
  *__t2044t=map__keys__unsafe_size;
  *__t2045t=map__keys__unsafe_offset;
  *__t2046t=map__keys__unsafe_align;
  *__t2047t=map__values__unsafe_ptr;
  *__t2048t=map__values__unsafe_size;
  *__t2049t=map__values__unsafe_offset;
  *__t2050t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1872t(char** __t2051t, uint64_t* __t2052t, uint16_t* __t2053t, uint16_t* __t2054t, char** __t2055t, uint64_t* __t2056t, uint16_t* __t2057t, uint16_t* __t2058t, char** __t2059t, uint64_t* __t2060t, uint16_t* __t2061t, uint16_t* __t2062t, uint64_t* __t2063t) {
  char* __t1875t__unsafe_ptr=0;
  uint64_t __t1875t__unsafe_size=0;
  uint16_t __t1875t__unsafe_offset=0;
  uint16_t __t1875t__unsafe_align=0;
  uint64_t __t1876t=0;
  uint64_t __t1877t__=0;
  char* __t1878t__unsafe_ptr=0;
  uint64_t __t1878t__unsafe_size=0;
  uint16_t __t1878t__unsafe_offset=0;
  uint16_t __t1878t__unsafe_align=0;
  char __t1879t____t511t__=0;
  char* __t1880t__buf__unsafe_ptr=0;
  uint64_t __t1880t__buf__unsafe_size=0;
  uint16_t __t1880t__buf__unsafe_offset=0;
  uint16_t __t1880t__buf__unsafe_align=0;
  uint64_t __t1880t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1881t__keys__unsafe_ptr=0;
  uint64_t __t1881t__keys__unsafe_size=0;
  uint16_t __t1881t__keys__unsafe_offset=0;
  uint16_t __t1881t__keys__unsafe_align=0;
  char* __t1881t__values__unsafe_ptr=0;
  uint64_t __t1881t__values__unsafe_size=0;
  uint16_t __t1881t__values__unsafe_offset=0;
  uint16_t __t1881t__values__unsafe_align=0;
  char __t1882t____t1854t____t511t__=0;
  char __t1882t____t1856t____t1764t____t511t__=0;
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
  char____t_buffer____buffer__t1873t(&__t1875t__unsafe_ptr,&__t1875t__unsafe_size,&__t1875t__unsafe_offset,&__t1875t__unsafe_align);
  __t1876t=4;
  KB__t480t(__t1876t,&__t1877t__);
  __t_errcode=alloc__t509t(&__t1875t__unsafe_ptr,&__t1875t__unsafe_size,&__t1875t__unsafe_offset,&__t1875t__unsafe_align,__t1877t__,&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t722t(&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align,&__t1880t__buf__unsafe_ptr,&__t1880t__buf__unsafe_size,&__t1880t__buf__unsafe_offset,&__t1880t__buf__unsafe_align,&__t1880t__pos);
  buf__buf__unsafe_ptr=__t1880t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1880t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1880t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1880t__buf__unsafe_align;
  buf__pos=__t1880t__pos;
  __t_errcode=test__t1850t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t1881t__keys__unsafe_ptr,&__t1881t__keys__unsafe_size,&__t1881t__keys__unsafe_offset,&__t1881t__keys__unsafe_align,&__t1881t__values__unsafe_ptr,&__t1881t__values__unsafe_size,&__t1881t__values__unsafe_offset,&__t1881t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t1881t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1881t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1881t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1881t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1881t__values__unsafe_ptr;
  map__values__unsafe_size=__t1881t__values__unsafe_size;
  map__values__unsafe_offset=__t1881t__values__unsafe_offset;
  map__values__unsafe_align=__t1881t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(map__keys__unsafe_ptr,&__t1882t____t1856t____t1764t____t511t__);
  if(__t1882t____t1856t____t1764t____t511t__){
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t502t(&map__keys__unsafe_ptr);
  }
  exists__t436t(map__values__unsafe_ptr,&__t1882t____t1854t____t511t__);
  if(__t1882t____t1854t____t511t__){
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t502t(&map__values__unsafe_ptr);
  }
  exists__t436t(buf__buf__unsafe_ptr,&__t1879t____t511t__);
  if(__t1879t____t511t__){
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t502t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2051t=map__keys__unsafe_ptr;
  *__t2052t=map__keys__unsafe_size;
  *__t2053t=map__keys__unsafe_offset;
  *__t2054t=map__keys__unsafe_align;
  *__t2055t=map__values__unsafe_ptr;
  *__t2056t=map__values__unsafe_size;
  *__t2057t=map__values__unsafe_offset;
  *__t2058t=map__values__unsafe_align;
  *__t2059t=buf__buf__unsafe_ptr;
  *__t2060t=buf__buf__unsafe_size;
  *__t2061t=buf__buf__unsafe_offset;
  *__t2062t=buf__buf__unsafe_align;
  *__t2063t=buf__pos;
  
  return __t_errcode;
}

int raw__t1378t(const char* r, char** __t2064t, uint64_t* __t2065t, uint64_t* __t2066t, char* __t2067t) {
  char* __t1379t__unsafe_ptr=0;
  uint64_t __t1379t__dat__pos=0;
  uint64_t __t1379t__dat__length=0;
  char __t1379t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t672t(r,&__t1379t__unsafe_ptr,&__t1379t__dat__pos,&__t1379t__dat__length,&__t1379t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2064t=__t1379t__unsafe_ptr;
  *__t2065t=__t1379t__dat__pos;
  *__t2066t=__t1379t__dat__length;
  *__t2067t=__t1379t__dat__first;
  
  return __t_errcode;
}

int find__t1422t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2068t) {
  char* __t1423t__unsafe_ptr=0;
  uint64_t __t1423t__dat__pos=0;
  uint64_t __t1423t__dat__length=0;
  char __t1423t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1424t__=0;
  uint64_t __t1425t=0;
  uint64_t __t1426t=0;
  char* __t1427t__=0;
  char* __t1428t__s__unsafe_ptr=0;
  uint64_t __t1428t__s__dat__pos=0;
  uint64_t __t1428t__s__dat__length=0;
  char __t1428t__s__dat__first=0;
  uint64_t __t1428t__cost=0;
  char* __t1429t__unsafe_ptr=0;
  uint64_t __t1429t__dat__pos=0;
  uint64_t __t1429t__dat__length=0;
  char __t1429t__dat__first=0;
  int __t1430t=0;
  int __t1431t__=0;
  uint64_t __t1432t__=0;
  uint64_t n=0;
  uint64_t __t1433t__=0;
  uint64_t pos=0;
  uint64_t __t1434t__from=0;
  uint64_t __t1434t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1435t=0;
  uint64_t __t1436t__=0;
  uint64_t i=0;
  uint64_t __t1437t__=0;
  uint64_t __t1438t=0;
  uint64_t idx=0;
  char __t1439t__=0;
  uint64_t __t1440t__=0;
  uint64_t __t1441t=0;
  char __t1442t__=0;
  char* __t1443t__=0;
  char* __t1444t__s__unsafe_ptr=0;
  uint64_t __t1444t__s__dat__pos=0;
  uint64_t __t1444t__s__dat__length=0;
  char __t1444t__s__dat__first=0;
  uint64_t __t1444t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1445t__unsafe_ptr=0;
  uint64_t __t1445t__dat__pos=0;
  uint64_t __t1445t__dat__length=0;
  char __t1445t__dat__first=0;
  char __t1446t__=0;
  char* __t1447t__unsafe_ptr=0;
  uint64_t __t1447t__dat__pos=0;
  uint64_t __t1447t__dat__length=0;
  char __t1447t__dat__first=0;
  char __t1448t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1376t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1423t__unsafe_ptr,&__t1423t__dat__pos,&__t1423t__dat__length,&__t1423t__dat__first);
  k__unsafe_ptr=__t1423t__unsafe_ptr;
  k__dat__pos=__t1423t__dat__pos;
  k__dat__length=__t1423t__dat__length;
  k__dat__first=__t1423t__dat__first;
  is_zero__t1380t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1424t__);
  if(__t1424t__){
  __t1425t=0;
  goto __t_return;
  }
  __t1426t=0;
  __t_errcode=get__t595t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1426t,&__t1427t__);
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
  raw__t1374t(__t1428t__s__unsafe_ptr,__t1428t__s__dat__pos,__t1428t__s__dat__length,__t1428t__s__dat__first,__t1428t__cost,&__t1429t__unsafe_ptr,&__t1429t__dat__pos,&__t1429t__dat__length,&__t1429t__dat__first);
  not__t36t(__t1430t,&__t1431t__);
  len__t602t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1432t__);
  n=__t1432t__;
  __t_errcode=hash__t1325t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1433t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1433t__;
  range__t461t(n,&__t1434t__from,&__t1434t__to);
  iter__from=__t1434t__from;
  iter__to=__t1434t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1436t__);
  __t1435t=__t_complain;
  i=__t1436t__;
  __t1435t=__t1435t==0;
  if(!__t1435t){
  break;
  }
  add__t171t(pos,i,&__t1437t__);
  __t1438t=__t1437t__;
  idx=__t1438t;
  ge__t320t(idx,n,&__t1439t__);
  if(__t1439t__){
  __t_errcode=sub__t348t(idx,n,&__t1440t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1440t__;
  }
  __t1441t=0;
  eq__t119t(idx,__t1441t,&__t1442t__);
  if(__t1442t__){
  continue;
  }
  __t_errcode=get__t595t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1443t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1443t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1444t__s__unsafe_ptr,__t1443t__,8);
  memcpy(&__t1444t__s__dat__pos,__t1443t__+8,8);
  memcpy(&__t1444t__s__dat__length,__t1443t__+16,8);
  memcpy(&__t1444t__s__dat__first,__t1443t__+24,1);
  memcpy(&__t1444t__cost,__t1443t__+25,8);
  entry__s__unsafe_ptr=__t1444t__s__unsafe_ptr;
  entry__s__dat__pos=__t1444t__s__dat__pos;
  entry__s__dat__length=__t1444t__s__dat__length;
  entry__s__dat__first=__t1444t__s__dat__first;
  entry__cost=__t1444t__cost;
  raw__t1374t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1445t__unsafe_ptr,&__t1445t__dat__pos,&__t1445t__dat__length,&__t1445t__dat__first);
  is_zero__t1380t(__t1445t__unsafe_ptr,__t1445t__dat__pos,__t1445t__dat__length,__t1445t__dat__first,&__t1446t__);
  if(__t1446t__){
  continue;
  }
  raw__t1374t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1447t__unsafe_ptr,&__t1447t__dat__pos,&__t1447t__dat__length,&__t1447t__dat__first);
  eq__t827t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1447t__unsafe_ptr,__t1447t__dat__pos,__t1447t__dat__length,__t1447t__dat__first,&__t1448t__);
  if(__t1448t__){
  __t1425t=idx;
  goto __t_return;
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2068t=__t1425t;
  
  return __t_errcode;
}

int get__t1773t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2069t) {
  char* __t1774t__unsafe_ptr=0;
  uint64_t __t1774t__dat__pos=0;
  uint64_t __t1774t__dat__length=0;
  char __t1774t__dat__first=0;
  uint64_t __t1775t__=0;
  char* __t1776t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1378t(key,&__t1774t__unsafe_ptr,&__t1774t__dat__pos,&__t1774t__dat__length,&__t1774t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1422t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1774t__unsafe_ptr,__t1774t__dat__pos,__t1774t__dat__length,__t1774t__dat__first,&__t1775t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t595t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1775t__,&__t1776t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2069t=__t1776t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1883t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t1884t__=0;
  char* __t1885t____t671t__unsafe_ptr=0;
  uint64_t __t1885t____t671t__dat__pos=0;
  uint64_t __t1885t____t671t__dat__length=0;
  char __t1885t____t671t__dat__first=0;
  char* __t1887t__=0;
  char* __t1888t____t671t__unsafe_ptr=0;
  uint64_t __t1888t____t671t__dat__pos=0;
  uint64_t __t1888t____t671t__dat__length=0;
  char __t1888t____t671t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1773t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1858t,&__t1884t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1884t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1885t____t671t__unsafe_ptr,__t1884t__,8);
  memcpy(&__t1885t____t671t__dat__pos,__t1884t__+8,8);
  memcpy(&__t1885t____t671t__dat__length,__t1884t__+16,8);
  memcpy(&__t1885t____t671t__dat__first,__t1884t__+24,1);
  print__t784t(__t1885t____t671t__unsafe_ptr,__t1885t____t671t__dat__pos,__t1885t____t671t__dat__length,__t1885t____t671t__dat__first);
  __t_errcode=get__t1773t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1863t,&__t1887t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1887t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1888t____t671t__unsafe_ptr,__t1887t__,8);
  memcpy(&__t1888t____t671t__dat__pos,__t1887t__+8,8);
  memcpy(&__t1888t____t671t__dat__length,__t1887t__+16,8);
  memcpy(&__t1888t____t671t__dat__first,__t1887t__+24,1);
  print__t784t(__t1888t____t671t__unsafe_ptr,__t1888t____t671t__dat__pos,__t1888t____t671t__dat__length,__t1888t____t671t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1890t() {
  char* __t1891t__map__keys__unsafe_ptr=0;
  uint64_t __t1891t__map__keys__unsafe_size=0;
  uint16_t __t1891t__map__keys__unsafe_offset=0;
  uint16_t __t1891t__map__keys__unsafe_align=0;
  char* __t1891t__map__values__unsafe_ptr=0;
  uint64_t __t1891t__map__values__unsafe_size=0;
  uint16_t __t1891t__map__values__unsafe_offset=0;
  uint16_t __t1891t__map__values__unsafe_align=0;
  char* __t1891t__buf__buf__unsafe_ptr=0;
  uint64_t __t1891t__buf__buf__unsafe_size=0;
  uint16_t __t1891t__buf__buf__unsafe_offset=0;
  uint16_t __t1891t__buf__buf__unsafe_align=0;
  uint64_t __t1891t__buf__pos=0;
  char __t1892t____t1879t____t511t__=0;
  char __t1892t____t1882t____t1854t____t511t__=0;
  char __t1892t____t1882t____t1856t____t1764t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1872t(&__t1891t__map__keys__unsafe_ptr,&__t1891t__map__keys__unsafe_size,&__t1891t__map__keys__unsafe_offset,&__t1891t__map__keys__unsafe_align,&__t1891t__map__values__unsafe_ptr,&__t1891t__map__values__unsafe_size,&__t1891t__map__values__unsafe_offset,&__t1891t__map__values__unsafe_align,&__t1891t__buf__buf__unsafe_ptr,&__t1891t__buf__buf__unsafe_size,&__t1891t__buf__buf__unsafe_offset,&__t1891t__buf__buf__unsafe_align,&__t1891t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1883t(__t1891t__map__keys__unsafe_ptr,__t1891t__map__keys__unsafe_size,__t1891t__map__keys__unsafe_offset,__t1891t__map__keys__unsafe_align,__t1891t__map__values__unsafe_ptr,__t1891t__map__values__unsafe_size,__t1891t__map__values__unsafe_offset,__t1891t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1891t__map__keys__unsafe_ptr,&__t1892t____t1882t____t1856t____t1764t____t511t__);
  if(__t1892t____t1882t____t1856t____t1764t____t511t__){
  __t1891t__map__keys__unsafe_ptr=__t1891t__map__keys__unsafe_ptr;
  free__t502t(&__t1891t__map__keys__unsafe_ptr);
  }
  exists__t436t(__t1891t__map__values__unsafe_ptr,&__t1892t____t1882t____t1854t____t511t__);
  if(__t1892t____t1882t____t1854t____t511t__){
  __t1891t__map__values__unsafe_ptr=__t1891t__map__values__unsafe_ptr;
  free__t502t(&__t1891t__map__values__unsafe_ptr);
  }
  exists__t436t(__t1891t__buf__buf__unsafe_ptr,&__t1892t____t1879t____t511t__);
  if(__t1892t____t1879t____t511t__){
  __t1891t__buf__buf__unsafe_ptr=__t1891t__buf__buf__unsafe_ptr;
  free__t502t(&__t1891t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1890t();return 0;}