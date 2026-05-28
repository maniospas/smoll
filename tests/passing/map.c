#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1861t="it's a me, manio.";
const char* const __t1856t="hello world!";
const char* const __t1859t="manio";
const char* const __t1854t="hello";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1869t(char** __t1890t, uint64_t* __t1891t, uint16_t* __t1892t, uint16_t* __t1893t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1890t=unsafe_ptr;
  *__t1891t=unsafe_size;
  *__t1892t=unsafe_offset;
  *__t1893t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1894t) {
  int value=0;
  *__t1894t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1895t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1895t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1896t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1896t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1897t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1897t=z;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1898t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1898t=__t482t__;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1899t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1899t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1900t) {
  char* allocated=*__t1900t;
  if(allocated){
  free(allocated);
  }
  *__t1900t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1901t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1901t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1902t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1902t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1903t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1903t=value;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1904t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1904t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1905t) {
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
  *__t1905t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1906t, uint64_t* __t1907t, uint16_t* __t1908t, uint16_t* __t1909t, uint64_t size, char** __t1910t, uint64_t* __t1911t, uint16_t* __t1912t, uint16_t* __t1913t) {
  char* buffer__unsafe_ptr=*__t1906t;
  uint64_t buffer__unsafe_size=*__t1907t;
  uint16_t buffer__unsafe_offset=*__t1908t;
  uint16_t buffer__unsafe_align=*__t1909t;
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
  *__t1906t=buffer__unsafe_ptr;
  *__t1907t=buffer__unsafe_size;
  *__t1908t=buffer__unsafe_offset;
  *__t1909t=buffer__unsafe_align;
  *__t1910t=buffer__unsafe_ptr;
  *__t1911t=buffer__unsafe_size;
  *__t1912t=buffer__unsafe_offset;
  *__t1913t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1914t, uint64_t* __t1915t, uint16_t* __t1916t, uint16_t* __t1917t, char** __t1918t, uint64_t* __t1919t, uint16_t* __t1920t, uint16_t* __t1921t, uint64_t* __t1922t) {
  char* buf__unsafe_ptr=*__t1914t;
  uint64_t buf__unsafe_size=*__t1915t;
  uint16_t buf__unsafe_offset=*__t1916t;
  uint16_t buf__unsafe_align=*__t1917t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1914t=buf__unsafe_ptr;
  *__t1915t=buf__unsafe_size;
  *__t1916t=buf__unsafe_offset;
  *__t1917t=buf__unsafe_align;
  *__t1918t=buf__unsafe_ptr;
  *__t1919t=buf__unsafe_size;
  *__t1920t=buf__unsafe_offset;
  *__t1921t=buf__unsafe_align;
  *__t1922t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1838t(char** __t1923t, uint64_t* __t1924t, uint16_t* __t1925t, uint16_t* __t1926t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1923t=unsafe_ptr;
  *__t1924t=unsafe_size;
  *__t1925t=unsafe_offset;
  *__t1926t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1754t(char** __t1927t, uint64_t* __t1928t, uint16_t* __t1929t, uint16_t* __t1930t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t1927t=unsafe_ptr;
  *__t1928t=unsafe_size;
  *__t1929t=unsafe_offset;
  *__t1930t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1931t) {
  goto __t_return;
  __t_return:
  *__t1931t=buffer__unsafe_size;
}

int strmap__t1753t(char** __t1932t, uint64_t* __t1933t, uint16_t* __t1934t, uint16_t* __t1935t, char** __t1936t, uint64_t* __t1937t, uint16_t* __t1938t, uint16_t* __t1939t, char** __t1940t, uint64_t* __t1941t, uint16_t* __t1942t, uint16_t* __t1943t) {
  char* values__unsafe_ptr=*__t1932t;
  uint64_t values__unsafe_size=*__t1933t;
  uint16_t values__unsafe_offset=*__t1934t;
  uint16_t values__unsafe_align=*__t1935t;
  char* __t1756t__unsafe_ptr=0;
  uint64_t __t1756t__unsafe_size=0;
  uint16_t __t1756t__unsafe_offset=0;
  uint16_t __t1756t__unsafe_align=0;
  char* __t1757t__unsafe_ptr=0;
  uint64_t __t1757t__unsafe_size=0;
  uint16_t __t1757t__unsafe_offset=0;
  uint16_t __t1757t__unsafe_align=0;
  uint64_t __t1758t__=0;
  char* __t1759t__unsafe_ptr=0;
  uint64_t __t1759t__unsafe_size=0;
  uint16_t __t1759t__unsafe_offset=0;
  uint16_t __t1759t__unsafe_align=0;
  char __t1760t____t511t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1754t(&__t1756t__unsafe_ptr,&__t1756t__unsafe_size,&__t1756t__unsafe_offset,&__t1756t__unsafe_align);
  __t1757t__unsafe_ptr=__t1756t__unsafe_ptr;
  __t1757t__unsafe_size=__t1756t__unsafe_size;
  __t1757t__unsafe_offset=__t1756t__unsafe_offset;
  __t1757t__unsafe_align=__t1756t__unsafe_align;
  len__t598t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1758t__);
  __t_errcode=alloc__t509t(&__t1757t__unsafe_ptr,&__t1757t__unsafe_size,&__t1757t__unsafe_offset,&__t1757t__unsafe_align,__t1758t__,&__t1759t__unsafe_ptr,&__t1759t__unsafe_size,&__t1759t__unsafe_offset,&__t1759t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1759t__unsafe_ptr;
  keys__unsafe_size=__t1759t__unsafe_size;
  keys__unsafe_offset=__t1759t__unsafe_offset;
  keys__unsafe_align=__t1759t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(keys__unsafe_ptr,&__t1760t____t511t__);
  if(__t1760t____t511t__){
  free__t502t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t1932t=values__unsafe_ptr;
  *__t1933t=values__unsafe_size;
  *__t1934t=values__unsafe_offset;
  *__t1935t=values__unsafe_align;
  *__t1936t=keys__unsafe_ptr;
  *__t1937t=keys__unsafe_size;
  *__t1938t=keys__unsafe_offset;
  *__t1939t=keys__unsafe_align;
  *__t1940t=values__unsafe_ptr;
  *__t1941t=values__unsafe_size;
  *__t1942t=values__unsafe_offset;
  *__t1943t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1944t, uint64_t* __t1945t, uint16_t* __t1946t, uint16_t* __t1947t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1944t=unsafe_ptr;
  *__t1945t=unsafe_size;
  *__t1946t=unsafe_offset;
  *__t1947t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1948t) {
  *__t1948t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1949t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1949t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1950t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1950t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1951t) {
  *__t1951t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1952t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1952t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1953t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1953t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1954t, uint64_t* __t1955t, uint64_t* __t1956t, char* __t1957t) {
  goto __t_return;
  __t_return:
  *__t1954t=unsafe_ptr;
  *__t1955t=dat__pos;
  *__t1956t=dat__length;
  *__t1957t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1958t, uint64_t* __t1959t, uint64_t* __t1960t, char* __t1961t) {
  char* unsafe_ptr=0;
  uint64_t __t631t__=0;
  uint64_t __t632t=0;
  char __t633t__=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  char* __t637t__unsafe_ptr=0;
  uint64_t __t637t__dat__pos=0;
  uint64_t __t637t__dat__length=0;
  char __t637t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t631t__);
  __t632t=1;
  neq__t143t(__t631t__,__t632t,&__t633t__);
  if(__t633t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t634t__);
  __t635t=0;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t626t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t637t__unsafe_ptr,&__t637t__dat__pos,&__t637t__dat__length,&__t637t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1958t=__t637t__unsafe_ptr;
  *__t1959t=__t637t__dat__pos;
  *__t1960t=__t637t__dat__length;
  *__t1961t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1962t, uint64_t* __t1963t, uint64_t* __t1964t, char* __t1965t) {
  uint64_t __t663t=0;
  char __t664t__=0;
  char* __t665t__=0;
  char __t666t__value=0;
  char first=0;
  char* __t667t__unsafe_ptr=0;
  uint64_t __t667t__dat__pos=0;
  uint64_t __t667t__dat__length=0;
  char __t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t663t=0;
  neq__t143t(length,__t663t,&__t664t__);
  if(__t664t__){
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t666t__value,__t665t__,1);
  first=__t666t__value;
  }
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t667t__unsafe_ptr,&__t667t__dat__pos,&__t667t__dat__length,&__t667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1962t=__t667t__unsafe_ptr;
  *__t1963t=__t667t__dat__pos;
  *__t1964t=__t667t__dat__length;
  *__t1965t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1966t, uint64_t* __t1967t, uint64_t* __t1968t, char* __t1969t) {
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__unsafe_size=0;
  uint16_t __t670t__unsafe_offset=0;
  uint16_t __t670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t671t__=0;
  uint64_t length=0;
  uint64_t __t672t=0;
  uint64_t __t673t__=0;
  uint64_t __t674t=0;
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__dat__pos=0;
  uint64_t __t675t__dat__length=0;
  char __t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  __t670t__unsafe_ptr=__t669t__unsafe_ptr;
  __t670t__unsafe_size=__t669t__unsafe_size;
  __t670t__unsafe_offset=__t669t__unsafe_offset;
  __t670t__unsafe_align=__t669t__unsafe_align;
  buf__unsafe_ptr=__t670t__unsafe_ptr;
  buf__unsafe_size=__t670t__unsafe_size;
  buf__unsafe_offset=__t670t__unsafe_offset;
  buf__unsafe_align=__t670t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t671t__);
  buf__unsafe_ptr=__t671t__;
  if(c){
  length=strlen(c);
  }
  __t672t=1;
  add__t171t(length,__t672t,&__t673t__);
  buf__unsafe_size=__t673t__;
  __t674t=0;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t674t,length,&__t675t__unsafe_ptr,&__t675t__dat__pos,&__t675t__dat__length,&__t675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1966t=__t675t__unsafe_ptr;
  *__t1967t=__t675t__dat__pos;
  *__t1968t=__t675t__dat__length;
  *__t1969t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1372t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t1970t, uint64_t* __t1971t, uint64_t* __t1972t, char* __t1973t) {
  goto __t_return;
  __t_return:
  *__t1970t=r__unsafe_ptr;
  *__t1971t=r__dat__pos;
  *__t1972t=r__dat__length;
  *__t1973t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1974t) {
  goto __t_return;
  __t_return:
  *__t1974t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1376t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t1975t) {
  uint64_t __t1377t=0;
  uint64_t __t1378t__=0;
  char __t1379t__=0;
  __t1377t=0;
  len__t676t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1378t__);
  eq__t119t(__t1377t,__t1378t__,&__t1379t__);
  goto __t_return;
  __t_return:
  *__t1975t=__t1379t__;
}

static inline __attribute__((always_inline)) void raw__t1370t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t1976t, uint64_t* __t1977t, uint64_t* __t1978t, char* __t1979t) {
  goto __t_return;
  __t_return:
  *__t1976t=r__s__unsafe_ptr;
  *__t1977t=r__s__dat__pos;
  *__t1978t=r__s__dat__length;
  *__t1979t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1980t, uint64_t* __t1981t) {
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
  *__t1980t=from;
  *__t1981t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1982t, uint64_t r__to, uint64_t* __t1983t) {
  uint64_t r__from=*__t1982t;
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
  *__t1982t=r__from;
  *__t1983t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t437t(uint64_t value, uint64_t* __t1984t) {
  goto __t_return;
  __t_return:
  *__t1984t=value;
}

static inline __attribute__((always_inline)) void lshift__t447t(uint64_t x__value, uint64_t y, uint64_t* __t1985t) {
  uint64_t z=0;
  uint64_t __t448t__value=0;
  z=(x__value<<y);
  bits__t437t(z,&__t448t__value);
  goto __t_return;
  __t_return:
  *__t1985t=__t448t__value;
}

static inline __attribute__((always_inline)) void nat__t432t(uint64_t x, uint64_t* __t1986t) {
  int __t433t=0;
  int __t434t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1986t=value;
}

static inline __attribute__((always_inline)) void nat__t443t(uint64_t x__value, uint64_t* __t1987t) {
  uint64_t __t444t__=0;
  nat__t432t(x__value,&__t444t__);
  goto __t_return;
  __t_return:
  *__t1987t=__t444t__;
}

static inline __attribute__((always_inline)) void get__t819t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1988t) {
  uint64_t __t820t__=0;
  char* __t821t__=0;
  add__t171t(s__dat__pos,i,&__t820t__);
  add__t504t(s__unsafe_ptr,__t820t__,&__t821t__);
  goto __t_return;
  __t_return:
  *__t1988t=__t821t__;
}

static inline __attribute__((always_inline)) void nat__t435t(char x, uint64_t* __t1989t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1989t=value;
}

static inline __attribute__((always_inline)) int mod__t224t(uint64_t x, uint64_t y, uint64_t* __t1990t) {
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
  *__t1990t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1321t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t1991t) {
  uint64_t __t1322t=0;
  uint64_t __t1323t=0;
  uint64_t h=0;
  uint64_t __t1324t__=0;
  uint64_t __t1325t__from=0;
  uint64_t __t1325t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1326t=0;
  uint64_t __t1327t__=0;
  uint64_t i=0;
  uint64_t __t1328t__value=0;
  uint64_t __t1329t=0;
  uint64_t __t1330t__value=0;
  uint64_t __t1331t__=0;
  uint64_t __t1332t__=0;
  char* __t1333t__=0;
  char __t1334t__value=0;
  uint64_t __t1335t__=0;
  uint64_t __t1336t__=0;
  uint64_t __t1337t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1322t=5381;
  __t1323t=__t1322t;
  h=__t1323t;
  len__t676t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1324t__);
  range__t461t(__t1324t__,&__t1325t__from,&__t1325t__to);
  iter__from=__t1325t__from;
  iter__to=__t1325t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1327t__);
  __t1326t=__t_complain;
  i=__t1327t__;
  __t1326t=__t1326t==0;
  if(!__t1326t){
  break;
  }
  bits__t437t(h,&__t1328t__value);
  __t1329t=5;
  lshift__t447t(__t1328t__value,__t1329t,&__t1330t__value);
  nat__t443t(__t1330t__value,&__t1331t__);
  add__t171t(__t1331t__,h,&__t1332t__);
  get__t819t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1333t__);
  if(!__t1333t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1334t__value,__t1333t__,1);
  nat__t435t(__t1334t__value,&__t1335t__);
  add__t171t(__t1332t__,__t1335t__,&__t1336t__);
  h=__t1336t__;
  }
  __t_errcode=mod__t224t(h,size,&__t1337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1991t=__t1337t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1992t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1992t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1993t) {
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
  *__t1993t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1994t, uint64_t* __t1995t, uint16_t* __t1996t, uint16_t* __t1997t, uint64_t i, char** __t1998t) {
  char* buffer__unsafe_ptr=*__t1994t;
  uint64_t buffer__unsafe_size=*__t1995t;
  uint16_t buffer__unsafe_offset=*__t1996t;
  uint16_t buffer__unsafe_align=*__t1997t;
  char __t585t__=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  uint64_t __t589t__=0;
  char* __t590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t585t__);
  if(__t585t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t586t__);
  mul__t195t(i,__t586t__,&__t587t__);
  nat__t506t(buffer__unsafe_offset,&__t588t__);
  add__t171t(__t587t__,__t588t__,&__t589t__);
  add__t504t(buffer__unsafe_ptr,__t589t__,&__t590t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1994t=buffer__unsafe_ptr;
  *__t1995t=buffer__unsafe_size;
  *__t1996t=buffer__unsafe_offset;
  *__t1997t=buffer__unsafe_align;
  *__t1998t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t680t(char x, char y, char* __t1999t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1999t=z;
}

static inline __attribute__((always_inline)) void eq__t823t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2000t) {
  uint64_t __t824t__=0;
  uint64_t n=0;
  uint64_t __t825t__=0;
  char __t826t__=0;
  char __t827t=0;
  char __t828t__=0;
  char __t829t=0;
  char z=0;
  len__t676t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t824t__);
  n=__t824t__;
  len__t676t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t825t__);
  neq__t143t(n,__t825t__,&__t826t__);
  if(__t826t__){
  __t827t=0;
  goto __t_return;
  }
  neq__t680t(x__dat__first,y__dat__first,&__t828t__);
  if(__t828t__){
  __t829t=0;
  __t827t=__t829t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t827t=z;
  goto __t_return;
  __t_return:
  *__t2000t=__t827t;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2001t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2001t=z;
}

int at__t1652t(char** __t2002t, uint64_t* __t2003t, uint16_t* __t2004t, uint16_t* __t2005t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2006t) {
  char* data__unsafe_ptr=*__t2002t;
  uint64_t data__unsafe_size=*__t2003t;
  uint16_t data__unsafe_offset=*__t2004t;
  uint16_t data__unsafe_align=*__t2005t;
  char* __t1653t__unsafe_ptr=0;
  uint64_t __t1653t__dat__pos=0;
  uint64_t __t1653t__dat__length=0;
  char __t1653t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1654t__=0;
  uint64_t __t1655t=0;
  uint64_t __t1656t=0;
  char* __t1657t__=0;
  char* __t1658t__s__unsafe_ptr=0;
  uint64_t __t1658t__s__dat__pos=0;
  uint64_t __t1658t__s__dat__length=0;
  char __t1658t__s__dat__first=0;
  uint64_t __t1658t__cost=0;
  char* __t1659t__unsafe_ptr=0;
  uint64_t __t1659t__dat__pos=0;
  uint64_t __t1659t__dat__length=0;
  char __t1659t__dat__first=0;
  int __t1660t=0;
  int __t1661t__=0;
  uint64_t __t1662t__=0;
  uint64_t n=0;
  uint64_t __t1663t__=0;
  uint64_t pos=0;
  uint64_t __t1664t__from=0;
  uint64_t __t1664t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1665t=0;
  uint64_t __t1666t__=0;
  uint64_t i=0;
  uint64_t __t1667t__=0;
  uint64_t __t1668t=0;
  uint64_t idx=0;
  char __t1669t__=0;
  uint64_t __t1670t__=0;
  uint64_t __t1671t=0;
  char __t1672t__=0;
  char* __t1673t__=0;
  char* __t1674t__s__unsafe_ptr=0;
  uint64_t __t1674t__s__dat__pos=0;
  uint64_t __t1674t__s__dat__length=0;
  char __t1674t__s__dat__first=0;
  uint64_t __t1674t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1675t__unsafe_ptr=0;
  uint64_t __t1675t__dat__pos=0;
  uint64_t __t1675t__dat__length=0;
  char __t1675t__dat__first=0;
  char __t1676t__=0;
  char* __t1677t__=0;
  char* __t1678t__unsafe_ptr=0;
  uint64_t __t1678t__dat__pos=0;
  uint64_t __t1678t__dat__length=0;
  char __t1678t__dat__first=0;
  char __t1679t__=0;
  char __t1680t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1681t__=0;
  char* __t1682t__s__unsafe_ptr=0;
  uint64_t __t1682t__s__dat__pos=0;
  uint64_t __t1682t__s__dat__length=0;
  char __t1682t__s__dat__first=0;
  uint64_t __t1682t__cost=0;
  char* __t1683t__unsafe_ptr=0;
  uint64_t __t1683t__dat__pos=0;
  uint64_t __t1683t__dat__length=0;
  char __t1683t__dat__first=0;
  char* __t1684t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1372t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1653t__unsafe_ptr,&__t1653t__dat__pos,&__t1653t__dat__length,&__t1653t__dat__first);
  k__unsafe_ptr=__t1653t__unsafe_ptr;
  k__dat__pos=__t1653t__dat__pos;
  k__dat__length=__t1653t__dat__length;
  k__dat__first=__t1653t__dat__first;
  is_zero__t1376t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1654t__);
  if(__t1654t__){
  __t1655t=0;
  goto __t_return;
  }
  __t1656t=0;
  __t_errcode=get__t591t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1656t,&__t1657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1657t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1658t__s__unsafe_ptr,__t1657t__,8);
  memcpy(&__t1658t__s__dat__pos,__t1657t__+8,8);
  memcpy(&__t1658t__s__dat__length,__t1657t__+16,8);
  memcpy(&__t1658t__s__dat__first,__t1657t__+24,1);
  memcpy(&__t1658t__cost,__t1657t__+25,8);
  raw__t1370t(__t1658t__s__unsafe_ptr,__t1658t__s__dat__pos,__t1658t__s__dat__length,__t1658t__s__dat__first,__t1658t__cost,&__t1659t__unsafe_ptr,&__t1659t__dat__pos,&__t1659t__dat__length,&__t1659t__dat__first);
  not__t36t(__t1660t,&__t1661t__);
  len__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1662t__);
  n=__t1662t__;
  __t_errcode=hash__t1321t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1663t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1663t__;
  range__t461t(n,&__t1664t__from,&__t1664t__to);
  iter__from=__t1664t__from;
  iter__to=__t1664t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1666t__);
  __t1665t=__t_complain;
  i=__t1666t__;
  __t1665t=__t1665t==0;
  if(!__t1665t){
  break;
  }
  add__t171t(pos,i,&__t1667t__);
  __t1668t=__t1667t__;
  idx=__t1668t;
  ge__t320t(idx,n,&__t1669t__);
  if(__t1669t__){
  __t_errcode=sub__t348t(idx,n,&__t1670t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1670t__;
  }
  __t1671t=0;
  eq__t119t(idx,__t1671t,&__t1672t__);
  if(__t1672t__){
  continue;
  }
  __t_errcode=get__t591t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1673t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1673t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1674t__s__unsafe_ptr,__t1673t__,8);
  memcpy(&__t1674t__s__dat__pos,__t1673t__+8,8);
  memcpy(&__t1674t__s__dat__length,__t1673t__+16,8);
  memcpy(&__t1674t__s__dat__first,__t1673t__+24,1);
  memcpy(&__t1674t__cost,__t1673t__+25,8);
  entry__s__unsafe_ptr=__t1674t__s__unsafe_ptr;
  entry__s__dat__pos=__t1674t__s__dat__pos;
  entry__s__dat__length=__t1674t__s__dat__length;
  entry__s__dat__first=__t1674t__s__dat__first;
  entry__cost=__t1674t__cost;
  raw__t1370t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1675t__unsafe_ptr,&__t1675t__dat__pos,&__t1675t__dat__length,&__t1675t__dat__first);
  is_zero__t1376t(__t1675t__unsafe_ptr,__t1675t__dat__pos,__t1675t__dat__length,__t1675t__dat__first,&__t1676t__);
  if(__t1676t__){
  __t_errcode=mutget__t584t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1677t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1677t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1677t__,&k__unsafe_ptr,8);
  memcpy(__t1677t__+8,&k__dat__pos,8);
  memcpy(__t1677t__+16,&k__dat__length,8);
  memcpy(__t1677t__+24,&k__dat__first,1);
  memcpy(__t1677t__+25,&i,8);
  __t1655t=idx;
  goto __t_return;
  }
  raw__t1370t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1678t__unsafe_ptr,&__t1678t__dat__pos,&__t1678t__dat__length,&__t1678t__dat__first);
  eq__t823t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1678t__unsafe_ptr,__t1678t__dat__pos,__t1678t__dat__length,__t1678t__dat__first,&__t1679t__);
  if(__t1679t__){
  __t1655t=idx;
  goto __t_return;
  }
  gt__t272t(i,entry__cost,&__t1680t__);
  if(__t1680t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t591t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1681t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1681t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1682t__s__unsafe_ptr,__t1681t__,8);
  memcpy(&__t1682t__s__dat__pos,__t1681t__+8,8);
  memcpy(&__t1682t__s__dat__length,__t1681t__+16,8);
  memcpy(&__t1682t__s__dat__first,__t1681t__+24,1);
  memcpy(&__t1682t__cost,__t1681t__+25,8);
  raw__t1370t(__t1682t__s__unsafe_ptr,__t1682t__s__dat__pos,__t1682t__s__dat__length,__t1682t__s__dat__first,__t1682t__cost,&__t1683t__unsafe_ptr,&__t1683t__dat__pos,&__t1683t__dat__length,&__t1683t__dat__first);
  k__unsafe_ptr=__t1683t__unsafe_ptr;
  k__dat__pos=__t1683t__dat__pos;
  k__dat__length=__t1683t__dat__length;
  k__dat__first=__t1683t__dat__first;
  __t_errcode=mutget__t584t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1684t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1684t__,&tmp__unsafe_ptr,8);
  memcpy(__t1684t__+8,&tmp__dat__pos,8);
  memcpy(__t1684t__+16,&tmp__dat__length,8);
  memcpy(__t1684t__+24,&tmp__dat__first,1);
  memcpy(__t1684t__+25,&i,8);
  }
  }
  __t_errcode=37;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2002t=data__unsafe_ptr;
  *__t2003t=data__unsafe_size;
  *__t2004t=data__unsafe_offset;
  *__t2005t=data__unsafe_align;
  *__t2006t=__t1655t;
  
  return __t_errcode;
}

int mutget__t1777t(char** __t2007t, uint64_t* __t2008t, uint16_t* __t2009t, uint16_t* __t2010t, char** __t2011t, uint64_t* __t2012t, uint16_t* __t2013t, uint16_t* __t2014t, const char* key, char** __t2015t) {
  char* keys__unsafe_ptr=*__t2007t;
  uint64_t keys__unsafe_size=*__t2008t;
  uint16_t keys__unsafe_offset=*__t2009t;
  uint16_t keys__unsafe_align=*__t2010t;
  char* values__unsafe_ptr=*__t2011t;
  uint64_t values__unsafe_size=*__t2012t;
  uint16_t values__unsafe_offset=*__t2013t;
  uint16_t values__unsafe_align=*__t2014t;
  char* __t1778t__unsafe_ptr=0;
  uint64_t __t1778t__dat__pos=0;
  uint64_t __t1778t__dat__length=0;
  char __t1778t__dat__first=0;
  uint64_t __t1779t__=0;
  char* __t1780t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(key,&__t1778t__unsafe_ptr,&__t1778t__dat__pos,&__t1778t__dat__length,&__t1778t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1652t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1778t__unsafe_ptr,__t1778t__dat__pos,__t1778t__dat__length,__t1778t__dat__first,&__t1779t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t584t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1779t__,&__t1780t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2007t=keys__unsafe_ptr;
  *__t2008t=keys__unsafe_size;
  *__t2009t=keys__unsafe_offset;
  *__t2010t=keys__unsafe_align;
  *__t2011t=values__unsafe_ptr;
  *__t2012t=values__unsafe_size;
  *__t2013t=values__unsafe_offset;
  *__t2014t=values__unsafe_align;
  *__t2015t=__t1780t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2016t, uint64_t* __t2017t, uint64_t* __t2018t, char* __t2019t) {
  goto __t_return;
  __t_return:
  *__t2016t=other__unsafe_ptr;
  *__t2017t=other__dat__pos;
  *__t2018t=other__dat__length;
  *__t2019t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t738t(char** __t2020t, uint64_t* __t2021t, uint16_t* __t2022t, uint16_t* __t2023t, uint64_t* __t2024t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2025t, uint64_t* __t2026t, uint64_t* __t2027t, char* __t2028t) {
  char* buf__unsafe_ptr=*__t2020t;
  uint64_t buf__unsafe_size=*__t2021t;
  uint16_t buf__unsafe_offset=*__t2022t;
  uint16_t buf__unsafe_align=*__t2023t;
  uint64_t pos=*__t2024t;
  char* __t739t__unsafe_ptr=0;
  uint64_t __t739t__dat__pos=0;
  uint64_t __t739t__dat__length=0;
  char __t739t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t740t__=0;
  uint64_t __t741t__=0;
  uint64_t next_pos=0;
  uint64_t __t742t__=0;
  char __t743t__=0;
  uint64_t __t744t=0;
  uint64_t __t745t__=0;
  uint64_t prev_pos=0;
  char* __t746t__unsafe_ptr=0;
  uint64_t __t746t__dat__pos=0;
  uint64_t __t746t__dat__length=0;
  char __t746t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t739t__unsafe_ptr,&__t739t__dat__pos,&__t739t__dat__length,&__t739t__dat__first);
  other__unsafe_ptr=__t739t__unsafe_ptr;
  other__dat__pos=__t739t__dat__pos;
  other__dat__length=__t739t__dat__length;
  other__dat__first=__t739t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t740t__);
  add__t171t(pos,__t740t__,&__t741t__);
  next_pos=__t741t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t742t__);
  gt__t272t(next_pos,__t742t__,&__t743t__);
  if(__t743t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t744t=0;
  add__t171t(pos,__t744t,&__t745t__);
  prev_pos=__t745t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t746t__unsafe_ptr,&__t746t__dat__pos,&__t746t__dat__length,&__t746t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2020t=buf__unsafe_ptr;
  *__t2021t=buf__unsafe_size;
  *__t2022t=buf__unsafe_offset;
  *__t2023t=buf__unsafe_align;
  *__t2024t=pos;
  *__t2025t=__t746t__unsafe_ptr;
  *__t2026t=__t746t__dat__pos;
  *__t2027t=__t746t__dat__length;
  *__t2028t=__t746t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1795t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t2029t, char** __t2030t, uint64_t* __t2031t, uint64_t* __t2032t, char* __t2033t) {
  uint64_t pos=*__t2029t;
  uint64_t __t1796t=0;
  char __t1797t__=0;
  uint64_t __t1798t=0;
  uint64_t __t1799t__=0;
  uint64_t __t1800t=0;
  char* __t1801t__=0;
  char* __t1802t__s__unsafe_ptr=0;
  uint64_t __t1802t__s__dat__pos=0;
  uint64_t __t1802t__s__dat__length=0;
  char __t1802t__s__dat__first=0;
  uint64_t __t1802t__cost=0;
  char* __t1803t__unsafe_ptr=0;
  uint64_t __t1803t__dat__pos=0;
  uint64_t __t1803t__dat__length=0;
  char __t1803t__dat__first=0;
  char* __t1804t__=0;
  char* __t1805t__s__unsafe_ptr=0;
  uint64_t __t1805t__s__dat__pos=0;
  uint64_t __t1805t__s__dat__length=0;
  char __t1805t__s__dat__first=0;
  uint64_t __t1805t__cost=0;
  char* __t1806t__unsafe_ptr=0;
  uint64_t __t1806t__dat__pos=0;
  uint64_t __t1806t__dat__length=0;
  char __t1806t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1807t=0;
  uint64_t __t1808t__=0;
  char* __t1809t__unsafe_ptr=0;
  uint64_t __t1809t__dat__pos=0;
  uint64_t __t1809t__dat__length=0;
  char __t1809t__dat__first=0;
  char __t1810t__=0;
  char* __t1811t__=0;
  char* __t1812t__s__unsafe_ptr=0;
  uint64_t __t1812t__s__dat__pos=0;
  uint64_t __t1812t__s__dat__length=0;
  char __t1812t__s__dat__first=0;
  uint64_t __t1812t__cost=0;
  char* __t1813t__unsafe_ptr=0;
  uint64_t __t1813t__dat__pos=0;
  uint64_t __t1813t__dat__length=0;
  char __t1813t__dat__first=0;
  uint64_t __t1814t=0;
  uint64_t __t1815t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1796t=0;
  eq__t119t(pos,__t1796t,&__t1797t__);
  if(__t1797t__){
  __t1798t=1;
  add__t171t(pos,__t1798t,&__t1799t__);
  pos=__t1799t__;
  __t1800t=0;
  __t_errcode=get__t591t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1800t,&__t1801t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1801t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1802t__s__unsafe_ptr,__t1801t__,8);
  memcpy(&__t1802t__s__dat__pos,__t1801t__+8,8);
  memcpy(&__t1802t__s__dat__length,__t1801t__+16,8);
  memcpy(&__t1802t__s__dat__first,__t1801t__+24,1);
  memcpy(&__t1802t__cost,__t1801t__+25,8);
  raw__t1370t(__t1802t__s__unsafe_ptr,__t1802t__s__dat__pos,__t1802t__s__dat__length,__t1802t__s__dat__first,__t1802t__cost,&__t1803t__unsafe_ptr,&__t1803t__dat__pos,&__t1803t__dat__length,&__t1803t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t591t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1804t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1804t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1805t__s__unsafe_ptr,__t1804t__,8);
  memcpy(&__t1805t__s__dat__pos,__t1804t__+8,8);
  memcpy(&__t1805t__s__dat__length,__t1804t__+16,8);
  memcpy(&__t1805t__s__dat__first,__t1804t__+24,1);
  memcpy(&__t1805t__cost,__t1804t__+25,8);
  raw__t1370t(__t1805t__s__unsafe_ptr,__t1805t__s__dat__pos,__t1805t__s__dat__length,__t1805t__s__dat__first,__t1805t__cost,&__t1806t__unsafe_ptr,&__t1806t__dat__pos,&__t1806t__dat__length,&__t1806t__dat__first);
  ret__unsafe_ptr=__t1806t__unsafe_ptr;
  ret__dat__pos=__t1806t__dat__pos;
  ret__dat__length=__t1806t__dat__length;
  ret__dat__first=__t1806t__dat__first;
  __t1807t=1;
  add__t171t(pos,__t1807t,&__t1808t__);
  pos=__t1808t__;
  while(1){
  raw__t1372t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1809t__unsafe_ptr,&__t1809t__dat__pos,&__t1809t__dat__length,&__t1809t__dat__first);
  is_zero__t1376t(__t1809t__unsafe_ptr,__t1809t__dat__pos,__t1809t__dat__length,__t1809t__dat__first,&__t1810t__);
  if(!__t1810t__){
  break;
  }
  __t_errcode=get__t591t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1811t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1811t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1812t__s__unsafe_ptr,__t1811t__,8);
  memcpy(&__t1812t__s__dat__pos,__t1811t__+8,8);
  memcpy(&__t1812t__s__dat__length,__t1811t__+16,8);
  memcpy(&__t1812t__s__dat__first,__t1811t__+24,1);
  memcpy(&__t1812t__cost,__t1811t__+25,8);
  raw__t1370t(__t1812t__s__unsafe_ptr,__t1812t__s__dat__pos,__t1812t__s__dat__length,__t1812t__s__dat__first,__t1812t__cost,&__t1813t__unsafe_ptr,&__t1813t__dat__pos,&__t1813t__dat__length,&__t1813t__dat__first);
  ret__unsafe_ptr=__t1813t__unsafe_ptr;
  ret__dat__pos=__t1813t__dat__pos;
  ret__dat__length=__t1813t__dat__length;
  ret__dat__first=__t1813t__dat__first;
  __t1814t=1;
  add__t171t(pos,__t1814t,&__t1815t__);
  pos=__t1815t__;
  }
  __t1803t__unsafe_ptr=ret__unsafe_ptr;
  __t1803t__dat__pos=ret__dat__pos;
  __t1803t__dat__length=ret__dat__length;
  __t1803t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2029t=pos;
  *__t2030t=__t1803t__unsafe_ptr;
  *__t2031t=__t1803t__dat__pos;
  *__t2032t=__t1803t__dat__length;
  *__t2033t=__t1803t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1846t(char** __t2034t, uint64_t* __t2035t, uint16_t* __t2036t, uint16_t* __t2037t, uint64_t* __t2038t, char** __t2039t, uint64_t* __t2040t, uint16_t* __t2041t, uint16_t* __t2042t, char** __t2043t, uint64_t* __t2044t, uint16_t* __t2045t, uint16_t* __t2046t) {
  char* buf__buf__unsafe_ptr=*__t2034t;
  uint64_t buf__buf__unsafe_size=*__t2035t;
  uint16_t buf__buf__unsafe_offset=*__t2036t;
  uint16_t buf__buf__unsafe_align=*__t2037t;
  uint64_t buf__pos=*__t2038t;
  char* __t1847t__unsafe_ptr=0;
  uint64_t __t1847t__unsafe_size=0;
  uint16_t __t1847t__unsafe_offset=0;
  uint16_t __t1847t__unsafe_align=0;
  uint64_t __t1848t=0;
  char* __t1849t__unsafe_ptr=0;
  uint64_t __t1849t__unsafe_size=0;
  uint16_t __t1849t__unsafe_offset=0;
  uint16_t __t1849t__unsafe_align=0;
  char __t1850t____t511t__=0;
  char* __t1851t__keys__unsafe_ptr=0;
  uint64_t __t1851t__keys__unsafe_size=0;
  uint16_t __t1851t__keys__unsafe_offset=0;
  uint16_t __t1851t__keys__unsafe_align=0;
  char* __t1851t__values__unsafe_ptr=0;
  uint64_t __t1851t__values__unsafe_size=0;
  uint16_t __t1851t__values__unsafe_offset=0;
  uint16_t __t1851t__values__unsafe_align=0;
  char __t1852t____t1760t____t511t__=0;
  char* __t1853t__keys__unsafe_ptr=0;
  uint64_t __t1853t__keys__unsafe_size=0;
  uint16_t __t1853t__keys__unsafe_offset=0;
  uint16_t __t1853t__keys__unsafe_align=0;
  char* __t1853t__values__unsafe_ptr=0;
  uint64_t __t1853t__values__unsafe_size=0;
  uint16_t __t1853t__values__unsafe_offset=0;
  uint16_t __t1853t__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t1855t__=0;
  char* __t1857t__unsafe_ptr=0;
  uint64_t __t1857t__dat__pos=0;
  uint64_t __t1857t__dat__length=0;
  char __t1857t__dat__first=0;
  char* __t1858t__unsafe_ptr=0;
  uint64_t __t1858t__dat__pos=0;
  uint64_t __t1858t__dat__length=0;
  char __t1858t__dat__first=0;
  char* __t1860t__=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__dat__pos=0;
  uint64_t __t1862t__dat__length=0;
  char __t1862t__dat__first=0;
  char* __t1863t__unsafe_ptr=0;
  uint64_t __t1863t__dat__pos=0;
  uint64_t __t1863t__dat__length=0;
  char __t1863t__dat__first=0;
  char* __t1864t__buf__unsafe_ptr=0;
  uint64_t __t1864t__buf__unsafe_size=0;
  uint16_t __t1864t__buf__unsafe_offset=0;
  uint16_t __t1864t__buf__unsafe_align=0;
  uint64_t __t1864t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t1865t=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1838t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align);
  __t1848t=128;
  __t_errcode=alloc__t509t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align,__t1848t,&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1753t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1851t__keys__unsafe_ptr,&__t1851t__keys__unsafe_size,&__t1851t__keys__unsafe_offset,&__t1851t__keys__unsafe_align,&__t1851t__values__unsafe_ptr,&__t1851t__values__unsafe_size,&__t1851t__values__unsafe_offset,&__t1851t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1853t__keys__unsafe_ptr=__t1851t__keys__unsafe_ptr;
  __t1853t__keys__unsafe_size=__t1851t__keys__unsafe_size;
  __t1853t__keys__unsafe_offset=__t1851t__keys__unsafe_offset;
  __t1853t__keys__unsafe_align=__t1851t__keys__unsafe_align;
  __t1853t__values__unsafe_ptr=__t1851t__values__unsafe_ptr;
  __t1853t__values__unsafe_size=__t1851t__values__unsafe_size;
  __t1853t__values__unsafe_offset=__t1851t__values__unsafe_offset;
  __t1853t__values__unsafe_align=__t1851t__values__unsafe_align;
  __t_errcode=mutget__t1777t(&__t1853t__keys__unsafe_ptr,&__t1853t__keys__unsafe_size,&__t1853t__keys__unsafe_offset,&__t1853t__keys__unsafe_align,&__t1853t__values__unsafe_ptr,&__t1853t__values__unsafe_size,&__t1853t__values__unsafe_offset,&__t1853t__values__unsafe_align,__t1854t,&__t1855t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t668t(__t1856t,&__t1857t__unsafe_ptr,&__t1857t__dat__pos,&__t1857t__dat__length,&__t1857t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t738t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1857t__unsafe_ptr,__t1857t__dat__pos,__t1857t__dat__length,__t1857t__dat__first,&__t1858t__unsafe_ptr,&__t1858t__dat__pos,&__t1858t__dat__length,&__t1858t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1855t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1855t__,&__t1858t__unsafe_ptr,8);
  memcpy(__t1855t__+8,&__t1858t__dat__pos,8);
  memcpy(__t1855t__+16,&__t1858t__dat__length,8);
  memcpy(__t1855t__+24,&__t1858t__dat__first,1);
  __t_errcode=mutget__t1777t(&__t1853t__keys__unsafe_ptr,&__t1853t__keys__unsafe_size,&__t1853t__keys__unsafe_offset,&__t1853t__keys__unsafe_align,&__t1853t__values__unsafe_ptr,&__t1853t__values__unsafe_size,&__t1853t__values__unsafe_offset,&__t1853t__values__unsafe_align,__t1859t,&__t1860t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t668t(__t1861t,&__t1862t__unsafe_ptr,&__t1862t__dat__pos,&__t1862t__dat__length,&__t1862t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t738t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1862t__unsafe_ptr,__t1862t__dat__pos,__t1862t__dat__length,__t1862t__dat__first,&__t1863t__unsafe_ptr,&__t1863t__dat__pos,&__t1863t__dat__length,&__t1863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1860t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1860t__,&__t1863t__unsafe_ptr,8);
  memcpy(__t1860t__+8,&__t1863t__dat__pos,8);
  memcpy(__t1860t__+16,&__t1863t__dat__length,8);
  memcpy(__t1860t__+24,&__t1863t__dat__first,1);
  bufpos__t718t(&__t1853t__keys__unsafe_ptr,&__t1853t__keys__unsafe_size,&__t1853t__keys__unsafe_offset,&__t1853t__keys__unsafe_align,&__t1864t__buf__unsafe_ptr,&__t1864t__buf__unsafe_size,&__t1864t__buf__unsafe_offset,&__t1864t__buf__unsafe_align,&__t1864t__pos);
  it__pos=__t1864t__pos;
  while(1){
  __t_complain=next__t1795t(__t1853t__keys__unsafe_ptr,__t1853t__keys__unsafe_size,__t1853t__keys__unsafe_offset,__t1853t__keys__unsafe_align,&it__pos,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  __t1865t=__t_complain;
  key__unsafe_ptr=__t1866t__unsafe_ptr;
  key__dat__pos=__t1866t__dat__pos;
  key__dat__length=__t1866t__dat__length;
  key__dat__first=__t1866t__dat__first;
  __t1865t=__t1865t==0;
  if(!__t1865t){
  break;
  }
  print__t780t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t1853t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1853t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1853t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1853t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1853t__values__unsafe_ptr;
  map__values__unsafe_size=__t1853t__values__unsafe_size;
  map__values__unsafe_offset=__t1853t__values__unsafe_offset;
  map__values__unsafe_align=__t1853t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(map__keys__unsafe_ptr,&__t1852t____t1760t____t511t__);
  if(__t1852t____t1760t____t511t__){
  free__t502t(&map__keys__unsafe_ptr);
  }
  exists__t436t(map__values__unsafe_ptr,&__t1850t____t511t__);
  if(__t1850t____t511t__){
  free__t502t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t2034t=buf__buf__unsafe_ptr;
  *__t2035t=buf__buf__unsafe_size;
  *__t2036t=buf__buf__unsafe_offset;
  *__t2037t=buf__buf__unsafe_align;
  *__t2038t=buf__pos;
  *__t2039t=map__keys__unsafe_ptr;
  *__t2040t=map__keys__unsafe_size;
  *__t2041t=map__keys__unsafe_offset;
  *__t2042t=map__keys__unsafe_align;
  *__t2043t=map__values__unsafe_ptr;
  *__t2044t=map__values__unsafe_size;
  *__t2045t=map__values__unsafe_offset;
  *__t2046t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1868t(char** __t2047t, uint64_t* __t2048t, uint16_t* __t2049t, uint16_t* __t2050t, char** __t2051t, uint64_t* __t2052t, uint16_t* __t2053t, uint16_t* __t2054t, char** __t2055t, uint64_t* __t2056t, uint16_t* __t2057t, uint16_t* __t2058t, uint64_t* __t2059t) {
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__unsafe_size=0;
  uint16_t __t1871t__unsafe_offset=0;
  uint16_t __t1871t__unsafe_align=0;
  uint64_t __t1872t=0;
  uint64_t __t1873t__=0;
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__unsafe_size=0;
  uint16_t __t1874t__unsafe_offset=0;
  uint16_t __t1874t__unsafe_align=0;
  char __t1875t____t511t__=0;
  char* __t1876t__buf__unsafe_ptr=0;
  uint64_t __t1876t__buf__unsafe_size=0;
  uint16_t __t1876t__buf__unsafe_offset=0;
  uint16_t __t1876t__buf__unsafe_align=0;
  uint64_t __t1876t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1877t__keys__unsafe_ptr=0;
  uint64_t __t1877t__keys__unsafe_size=0;
  uint16_t __t1877t__keys__unsafe_offset=0;
  uint16_t __t1877t__keys__unsafe_align=0;
  char* __t1877t__values__unsafe_ptr=0;
  uint64_t __t1877t__values__unsafe_size=0;
  uint16_t __t1877t__values__unsafe_offset=0;
  uint16_t __t1877t__values__unsafe_align=0;
  char __t1878t____t1850t____t511t__=0;
  char __t1878t____t1852t____t1760t____t511t__=0;
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
  char____t_buffer____buffer__t1869t(&__t1871t__unsafe_ptr,&__t1871t__unsafe_size,&__t1871t__unsafe_offset,&__t1871t__unsafe_align);
  __t1872t=4;
  KB__t480t(__t1872t,&__t1873t__);
  __t_errcode=alloc__t509t(&__t1871t__unsafe_ptr,&__t1871t__unsafe_size,&__t1871t__unsafe_offset,&__t1871t__unsafe_align,__t1873t__,&__t1874t__unsafe_ptr,&__t1874t__unsafe_size,&__t1874t__unsafe_offset,&__t1874t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1874t__unsafe_ptr,&__t1874t__unsafe_size,&__t1874t__unsafe_offset,&__t1874t__unsafe_align,&__t1876t__buf__unsafe_ptr,&__t1876t__buf__unsafe_size,&__t1876t__buf__unsafe_offset,&__t1876t__buf__unsafe_align,&__t1876t__pos);
  buf__buf__unsafe_ptr=__t1876t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1876t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1876t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1876t__buf__unsafe_align;
  buf__pos=__t1876t__pos;
  __t_errcode=test__t1846t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t1877t__keys__unsafe_ptr,&__t1877t__keys__unsafe_size,&__t1877t__keys__unsafe_offset,&__t1877t__keys__unsafe_align,&__t1877t__values__unsafe_ptr,&__t1877t__values__unsafe_size,&__t1877t__values__unsafe_offset,&__t1877t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t1877t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1877t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1877t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1877t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1877t__values__unsafe_ptr;
  map__values__unsafe_size=__t1877t__values__unsafe_size;
  map__values__unsafe_offset=__t1877t__values__unsafe_offset;
  map__values__unsafe_align=__t1877t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(map__keys__unsafe_ptr,&__t1878t____t1852t____t1760t____t511t__);
  if(__t1878t____t1852t____t1760t____t511t__){
  free__t502t(&map__keys__unsafe_ptr);
  }
  exists__t436t(map__values__unsafe_ptr,&__t1878t____t1850t____t511t__);
  if(__t1878t____t1850t____t511t__){
  free__t502t(&map__values__unsafe_ptr);
  }
  exists__t436t(buf__buf__unsafe_ptr,&__t1875t____t511t__);
  if(__t1875t____t511t__){
  free__t502t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t2047t=map__keys__unsafe_ptr;
  *__t2048t=map__keys__unsafe_size;
  *__t2049t=map__keys__unsafe_offset;
  *__t2050t=map__keys__unsafe_align;
  *__t2051t=map__values__unsafe_ptr;
  *__t2052t=map__values__unsafe_size;
  *__t2053t=map__values__unsafe_offset;
  *__t2054t=map__values__unsafe_align;
  *__t2055t=buf__buf__unsafe_ptr;
  *__t2056t=buf__buf__unsafe_size;
  *__t2057t=buf__buf__unsafe_offset;
  *__t2058t=buf__buf__unsafe_align;
  *__t2059t=buf__pos;
  
  return __t_errcode;
}

int raw__t1374t(const char* r, char** __t2060t, uint64_t* __t2061t, uint64_t* __t2062t, char* __t2063t) {
  char* __t1375t__unsafe_ptr=0;
  uint64_t __t1375t__dat__pos=0;
  uint64_t __t1375t__dat__length=0;
  char __t1375t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(r,&__t1375t__unsafe_ptr,&__t1375t__dat__pos,&__t1375t__dat__length,&__t1375t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2060t=__t1375t__unsafe_ptr;
  *__t2061t=__t1375t__dat__pos;
  *__t2062t=__t1375t__dat__length;
  *__t2063t=__t1375t__dat__first;
  
  return __t_errcode;
}

int find__t1418t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2064t) {
  char* __t1419t__unsafe_ptr=0;
  uint64_t __t1419t__dat__pos=0;
  uint64_t __t1419t__dat__length=0;
  char __t1419t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1420t__=0;
  uint64_t __t1421t=0;
  uint64_t __t1422t=0;
  char* __t1423t__=0;
  char* __t1424t__s__unsafe_ptr=0;
  uint64_t __t1424t__s__dat__pos=0;
  uint64_t __t1424t__s__dat__length=0;
  char __t1424t__s__dat__first=0;
  uint64_t __t1424t__cost=0;
  char* __t1425t__unsafe_ptr=0;
  uint64_t __t1425t__dat__pos=0;
  uint64_t __t1425t__dat__length=0;
  char __t1425t__dat__first=0;
  int __t1426t=0;
  int __t1427t__=0;
  uint64_t __t1428t__=0;
  uint64_t n=0;
  uint64_t __t1429t__=0;
  uint64_t pos=0;
  uint64_t __t1430t__from=0;
  uint64_t __t1430t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1431t=0;
  uint64_t __t1432t__=0;
  uint64_t i=0;
  uint64_t __t1433t__=0;
  uint64_t __t1434t=0;
  uint64_t idx=0;
  char __t1435t__=0;
  uint64_t __t1436t__=0;
  uint64_t __t1437t=0;
  char __t1438t__=0;
  char* __t1439t__=0;
  char* __t1440t__s__unsafe_ptr=0;
  uint64_t __t1440t__s__dat__pos=0;
  uint64_t __t1440t__s__dat__length=0;
  char __t1440t__s__dat__first=0;
  uint64_t __t1440t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1441t__unsafe_ptr=0;
  uint64_t __t1441t__dat__pos=0;
  uint64_t __t1441t__dat__length=0;
  char __t1441t__dat__first=0;
  char __t1442t__=0;
  char* __t1443t__unsafe_ptr=0;
  uint64_t __t1443t__dat__pos=0;
  uint64_t __t1443t__dat__length=0;
  char __t1443t__dat__first=0;
  char __t1444t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1372t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1419t__unsafe_ptr,&__t1419t__dat__pos,&__t1419t__dat__length,&__t1419t__dat__first);
  k__unsafe_ptr=__t1419t__unsafe_ptr;
  k__dat__pos=__t1419t__dat__pos;
  k__dat__length=__t1419t__dat__length;
  k__dat__first=__t1419t__dat__first;
  is_zero__t1376t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1420t__);
  if(__t1420t__){
  __t1421t=0;
  goto __t_return;
  }
  __t1422t=0;
  __t_errcode=get__t591t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1422t,&__t1423t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1423t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1424t__s__unsafe_ptr,__t1423t__,8);
  memcpy(&__t1424t__s__dat__pos,__t1423t__+8,8);
  memcpy(&__t1424t__s__dat__length,__t1423t__+16,8);
  memcpy(&__t1424t__s__dat__first,__t1423t__+24,1);
  memcpy(&__t1424t__cost,__t1423t__+25,8);
  raw__t1370t(__t1424t__s__unsafe_ptr,__t1424t__s__dat__pos,__t1424t__s__dat__length,__t1424t__s__dat__first,__t1424t__cost,&__t1425t__unsafe_ptr,&__t1425t__dat__pos,&__t1425t__dat__length,&__t1425t__dat__first);
  not__t36t(__t1426t,&__t1427t__);
  len__t598t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1428t__);
  n=__t1428t__;
  __t_errcode=hash__t1321t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1429t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1429t__;
  range__t461t(n,&__t1430t__from,&__t1430t__to);
  iter__from=__t1430t__from;
  iter__to=__t1430t__to;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1432t__);
  __t1431t=__t_complain;
  i=__t1432t__;
  __t1431t=__t1431t==0;
  if(!__t1431t){
  break;
  }
  add__t171t(pos,i,&__t1433t__);
  __t1434t=__t1433t__;
  idx=__t1434t;
  ge__t320t(idx,n,&__t1435t__);
  if(__t1435t__){
  __t_errcode=sub__t348t(idx,n,&__t1436t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1436t__;
  }
  __t1437t=0;
  eq__t119t(idx,__t1437t,&__t1438t__);
  if(__t1438t__){
  continue;
  }
  __t_errcode=get__t591t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1439t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1439t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1440t__s__unsafe_ptr,__t1439t__,8);
  memcpy(&__t1440t__s__dat__pos,__t1439t__+8,8);
  memcpy(&__t1440t__s__dat__length,__t1439t__+16,8);
  memcpy(&__t1440t__s__dat__first,__t1439t__+24,1);
  memcpy(&__t1440t__cost,__t1439t__+25,8);
  entry__s__unsafe_ptr=__t1440t__s__unsafe_ptr;
  entry__s__dat__pos=__t1440t__s__dat__pos;
  entry__s__dat__length=__t1440t__s__dat__length;
  entry__s__dat__first=__t1440t__s__dat__first;
  entry__cost=__t1440t__cost;
  raw__t1370t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1441t__unsafe_ptr,&__t1441t__dat__pos,&__t1441t__dat__length,&__t1441t__dat__first);
  is_zero__t1376t(__t1441t__unsafe_ptr,__t1441t__dat__pos,__t1441t__dat__length,__t1441t__dat__first,&__t1442t__);
  if(__t1442t__){
  continue;
  }
  raw__t1370t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1443t__unsafe_ptr,&__t1443t__dat__pos,&__t1443t__dat__length,&__t1443t__dat__first);
  eq__t823t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1443t__unsafe_ptr,__t1443t__dat__pos,__t1443t__dat__length,__t1443t__dat__first,&__t1444t__);
  if(__t1444t__){
  __t1421t=idx;
  goto __t_return;
  }
  }
  __t_errcode=36;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2064t=__t1421t;
  
  return __t_errcode;
}

int get__t1769t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2065t) {
  char* __t1770t__unsafe_ptr=0;
  uint64_t __t1770t__dat__pos=0;
  uint64_t __t1770t__dat__length=0;
  char __t1770t__dat__first=0;
  uint64_t __t1771t__=0;
  char* __t1772t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1374t(key,&__t1770t__unsafe_ptr,&__t1770t__dat__pos,&__t1770t__dat__length,&__t1770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1418t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1770t__unsafe_ptr,__t1770t__dat__pos,__t1770t__dat__length,__t1770t__dat__first,&__t1771t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t591t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1771t__,&__t1772t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2065t=__t1772t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1879t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t1880t__=0;
  char* __t1881t____t667t__unsafe_ptr=0;
  uint64_t __t1881t____t667t__dat__pos=0;
  uint64_t __t1881t____t667t__dat__length=0;
  char __t1881t____t667t__dat__first=0;
  char* __t1883t__=0;
  char* __t1884t____t667t__unsafe_ptr=0;
  uint64_t __t1884t____t667t__dat__pos=0;
  uint64_t __t1884t____t667t__dat__length=0;
  char __t1884t____t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1769t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1854t,&__t1880t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1880t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1881t____t667t__unsafe_ptr,__t1880t__,8);
  memcpy(&__t1881t____t667t__dat__pos,__t1880t__+8,8);
  memcpy(&__t1881t____t667t__dat__length,__t1880t__+16,8);
  memcpy(&__t1881t____t667t__dat__first,__t1880t__+24,1);
  print__t780t(__t1881t____t667t__unsafe_ptr,__t1881t____t667t__dat__pos,__t1881t____t667t__dat__length,__t1881t____t667t__dat__first);
  __t_errcode=get__t1769t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1859t,&__t1883t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1883t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1884t____t667t__unsafe_ptr,__t1883t__,8);
  memcpy(&__t1884t____t667t__dat__pos,__t1883t__+8,8);
  memcpy(&__t1884t____t667t__dat__length,__t1883t__+16,8);
  memcpy(&__t1884t____t667t__dat__first,__t1883t__+24,1);
  print__t780t(__t1884t____t667t__unsafe_ptr,__t1884t____t667t__dat__pos,__t1884t____t667t__dat__length,__t1884t____t667t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1886t() {
  char* __t1887t__map__keys__unsafe_ptr=0;
  uint64_t __t1887t__map__keys__unsafe_size=0;
  uint16_t __t1887t__map__keys__unsafe_offset=0;
  uint16_t __t1887t__map__keys__unsafe_align=0;
  char* __t1887t__map__values__unsafe_ptr=0;
  uint64_t __t1887t__map__values__unsafe_size=0;
  uint16_t __t1887t__map__values__unsafe_offset=0;
  uint16_t __t1887t__map__values__unsafe_align=0;
  char* __t1887t__buf__buf__unsafe_ptr=0;
  uint64_t __t1887t__buf__buf__unsafe_size=0;
  uint16_t __t1887t__buf__buf__unsafe_offset=0;
  uint16_t __t1887t__buf__buf__unsafe_align=0;
  uint64_t __t1887t__buf__pos=0;
  char __t1888t____t1875t____t511t__=0;
  char __t1888t____t1878t____t1850t____t511t__=0;
  char __t1888t____t1878t____t1852t____t1760t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1868t(&__t1887t__map__keys__unsafe_ptr,&__t1887t__map__keys__unsafe_size,&__t1887t__map__keys__unsafe_offset,&__t1887t__map__keys__unsafe_align,&__t1887t__map__values__unsafe_ptr,&__t1887t__map__values__unsafe_size,&__t1887t__map__values__unsafe_offset,&__t1887t__map__values__unsafe_align,&__t1887t__buf__buf__unsafe_ptr,&__t1887t__buf__buf__unsafe_size,&__t1887t__buf__buf__unsafe_offset,&__t1887t__buf__buf__unsafe_align,&__t1887t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1879t(__t1887t__map__keys__unsafe_ptr,__t1887t__map__keys__unsafe_size,__t1887t__map__keys__unsafe_offset,__t1887t__map__keys__unsafe_align,__t1887t__map__values__unsafe_ptr,__t1887t__map__values__unsafe_size,__t1887t__map__values__unsafe_offset,__t1887t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1887t__map__keys__unsafe_ptr,&__t1888t____t1878t____t1852t____t1760t____t511t__);
  if(__t1888t____t1878t____t1852t____t1760t____t511t__){
  free__t502t(&__t1887t__map__keys__unsafe_ptr);
  }
  exists__t436t(__t1887t__map__values__unsafe_ptr,&__t1888t____t1878t____t1850t____t511t__);
  if(__t1888t____t1878t____t1850t____t511t__){
  free__t502t(&__t1887t__map__values__unsafe_ptr);
  }
  exists__t436t(__t1887t__buf__buf__unsafe_ptr,&__t1888t____t1875t____t511t__);
  if(__t1888t____t1875t____t511t__){
  free__t502t(&__t1887t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1886t();return 0;}