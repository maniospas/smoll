#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1882t="world";
const char* const __t1880t=" ";
const char* const __t1884t="!";
const char* const __t1874t="hello";
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1893t, uint64_t* __t1894t, uint16_t* __t1895t, uint16_t* __t1896t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1893t=unsafe_ptr;
  *__t1894t=unsafe_size;
  *__t1895t=unsafe_offset;
  *__t1896t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1897t) {
  *__t1897t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1898t) {
  int value=0;
  *__t1898t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1899t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1899t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1900t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1900t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1901t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1901t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1902t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1902t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1903t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1903t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1904t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1904t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1905t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1906t) {
  *__t1906t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1907t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1907t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1908t) {
  char __t641t__=0;
  uint64_t __t642t__=0;
  uint64_t __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  char* __t646t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t641t__);
  if(__t641t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t642t__);
  mul__t199t(i,__t642t__,&__t643t__);
  nat__t507t(buffer__unsafe_offset,&__t644t__);
  add__t175t(__t643t__,__t644t__,&__t645t__);
  add__t505t(buffer__unsafe_ptr,__t645t__,&__t646t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1908t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1909t, uint64_t* __t1910t, uint64_t* __t1911t, char* __t1912t) {
  goto __t_return;
  __t_return:
  *__t1909t=unsafe_ptr;
  *__t1910t=dat__pos;
  *__t1911t=dat__length;
  *__t1912t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1913t, uint64_t* __t1914t, uint64_t* __t1915t, char* __t1916t) {
  char* unsafe_ptr=0;
  uint64_t __t788t__=0;
  uint64_t __t789t=0;
  char __t790t__=0;
  uint64_t __t791t__=0;
  uint64_t __t792t=0;
  char __t793t__=0;
  char* __t794t__unsafe_ptr=0;
  uint64_t __t794t__dat__pos=0;
  uint64_t __t794t__dat__length=0;
  char __t794t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t788t__);
  __t789t=1;
  neq__t144t(__t788t__,__t789t,&__t790t__);
  if(__t790t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t791t__);
  __t792t=0;
  neq__t144t(__t791t__,__t792t,&__t793t__);
  if(__t793t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t783t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t794t__unsafe_ptr,&__t794t__dat__pos,&__t794t__dat__length,&__t794t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1913t=__t794t__unsafe_ptr;
  *__t1914t=__t794t__dat__pos;
  *__t1915t=__t794t__dat__length;
  *__t1916t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1917t, uint64_t* __t1918t, uint64_t* __t1919t, char* __t1920t) {
  uint64_t __t823t=0;
  char __t824t__=0;
  char* __t825t__=0;
  char __t826t__value=0;
  char first=0;
  char* __t827t__unsafe_ptr=0;
  uint64_t __t827t__dat__pos=0;
  uint64_t __t827t__dat__length=0;
  char __t827t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t823t=0;
  neq__t144t(length,__t823t,&__t824t__);
  if(__t824t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t825t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t825t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t826t__value,__t825t__,1);
  first=__t826t__value;
  }
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t827t__unsafe_ptr,&__t827t__dat__pos,&__t827t__dat__length,&__t827t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1917t=__t827t__unsafe_ptr;
  *__t1918t=__t827t__dat__pos;
  *__t1919t=__t827t__dat__length;
  *__t1920t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1921t, uint64_t* __t1922t, uint64_t* __t1923t, char* __t1924t) {
  char* __t846t__unsafe_ptr=0;
  uint64_t __t846t__unsafe_size=0;
  uint16_t __t846t__unsafe_offset=0;
  uint16_t __t846t__unsafe_align=0;
  char* __t847t__unsafe_ptr=0;
  uint64_t __t847t__unsafe_size=0;
  uint16_t __t847t__unsafe_offset=0;
  uint16_t __t847t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t848t__=0;
  uint64_t length=0;
  uint64_t __t849t=0;
  uint64_t __t850t__=0;
  uint64_t __t851t=0;
  char* __t853t__unsafe_ptr=0;
  uint64_t __t853t__dat__pos=0;
  uint64_t __t853t__dat__length=0;
  char __t853t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t763t(&__t846t__unsafe_ptr,&__t846t__unsafe_size,&__t846t__unsafe_offset,&__t846t__unsafe_align);
  __t847t__unsafe_ptr=__t846t__unsafe_ptr;
  __t847t__unsafe_size=__t846t__unsafe_size;
  __t847t__unsafe_offset=__t846t__unsafe_offset;
  __t847t__unsafe_align=__t846t__unsafe_align;
  buf__unsafe_ptr=__t847t__unsafe_ptr;
  buf__unsafe_size=__t847t__unsafe_size;
  buf__unsafe_offset=__t847t__unsafe_offset;
  buf__unsafe_align=__t847t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t848t__);
  buf__unsafe_ptr=__t848t__;
  if(c){
  length=strlen(c);
  }
  __t849t=1;
  add__t175t(length,__t849t,&__t850t__);
  buf__unsafe_size=__t850t__;
  __t851t=0;
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t851t,length,&__t853t__unsafe_ptr,&__t853t__dat__pos,&__t853t__dat__length,&__t853t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1921t=__t853t__unsafe_ptr;
  *__t1922t=__t853t__dat__pos;
  *__t1923t=__t853t__dat__length;
  *__t1924t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__ptr__nat__nat__char____buffer__t1878t(char** __t1925t, uint64_t* __t1926t, uint16_t* __t1927t, uint16_t* __t1928t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1925t=unsafe_ptr;
  *__t1926t=unsafe_size;
  *__t1927t=unsafe_offset;
  *__t1928t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1929t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1929t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1930t) {
  char* allocated=*__t1930t;
  if(allocated){
  free(allocated);
  }
  *__t1930t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1931t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1931t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1932t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1932t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1933t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1933t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1934t, uint64_t* __t1935t, uint16_t* __t1936t, uint16_t* __t1937t, uint64_t size, char** __t1938t, uint64_t* __t1939t, uint16_t* __t1940t, uint16_t* __t1941t) {
  char* buffer__unsafe_ptr=*__t1934t;
  uint64_t buffer__unsafe_size=*__t1935t;
  uint16_t buffer__unsafe_offset=*__t1936t;
  uint16_t buffer__unsafe_align=*__t1937t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1934t=buffer__unsafe_ptr;
  *__t1935t=buffer__unsafe_size;
  *__t1936t=buffer__unsafe_offset;
  *__t1937t=buffer__unsafe_align;
  *__t1938t=buffer__unsafe_ptr;
  *__t1939t=buffer__unsafe_size;
  *__t1940t=buffer__unsafe_offset;
  *__t1941t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1856t(char** __t1942t, uint64_t* __t1943t, uint16_t* __t1944t, uint16_t* __t1945t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1942t=unsafe_ptr;
  *__t1943t=unsafe_size;
  *__t1944t=unsafe_offset;
  *__t1945t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1946t) {
  goto __t_return;
  __t_return:
  *__t1946t=s__dat__length;
}

static inline __attribute__((always_inline)) void total_length__t1846t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, uint64_t* __t1947t) {
  uint64_t __t1847t=0;
  uint64_t __t1848t=0;
  uint64_t size=0;
  uint64_t __t1849t=0;
  char __t1850t=0;
  char* __t1851t__=0;
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__dat__pos=0;
  uint64_t __t1852t__dat__length=0;
  char __t1852t__dat__first=0;
  char* counter_part__unsafe_ptr=0;
  uint64_t counter_part__dat__pos=0;
  uint64_t counter_part__dat__length=0;
  char counter_part__dat__first=0;
  uint64_t __t1853t__=0;
  uint64_t __t1854t__=0;
  int __t_complain=0;
  __t1847t=0;
  __t1848t=__t1847t;
  size=__t1848t;
  __t1849t=0;
  while(1){
  __t_complain=get__t640t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t1849t,&__t1851t__);
  __t1850t=__t_complain;
  if(!__t1851t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1852t__unsafe_ptr,__t1851t__,8);
  memcpy(&__t1852t__dat__pos,__t1851t__+8,8);
  memcpy(&__t1852t__dat__length,__t1851t__+16,8);
  memcpy(&__t1852t__dat__first,__t1851t__+24,1);
  }
  counter_part__unsafe_ptr=__t1852t__unsafe_ptr;
  counter_part__dat__pos=__t1852t__dat__pos;
  counter_part__dat__length=__t1852t__dat__length;
  counter_part__dat__first=__t1852t__dat__first;
  __t1850t=__t1850t==0;
  __t1849t=__t1849t+1;
  if(!__t1850t){
  break;
  }
  len__t854t(counter_part__unsafe_ptr,counter_part__dat__pos,counter_part__dat__length,counter_part__dat__first,&__t1853t__);
  add__t175t(size,__t1853t__,&__t1854t__);
  size=__t1854t__;
  }
  goto __t_return;
  __t_return:
  *__t1947t=size;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t1948t, uint64_t* __t1949t, uint16_t* __t1950t, uint16_t* __t1951t, uint64_t _pos, char** __t1952t, uint64_t* __t1953t, uint16_t* __t1954t, uint16_t* __t1955t, uint64_t* __t1956t) {
  char* buf__unsafe_ptr=*__t1948t;
  uint64_t buf__unsafe_size=*__t1949t;
  uint16_t buf__unsafe_offset=*__t1950t;
  uint16_t buf__unsafe_align=*__t1951t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t1948t=buf__unsafe_ptr;
  *__t1949t=buf__unsafe_size;
  *__t1950t=buf__unsafe_offset;
  *__t1951t=buf__unsafe_align;
  *__t1952t=buf__unsafe_ptr;
  *__t1953t=buf__unsafe_size;
  *__t1954t=buf__unsafe_offset;
  *__t1955t=buf__unsafe_align;
  *__t1956t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t1957t, uint64_t* __t1958t, uint16_t* __t1959t, uint16_t* __t1960t, char** __t1961t, uint64_t* __t1962t, uint16_t* __t1963t, uint16_t* __t1964t, uint64_t* __t1965t) {
  char* buf__unsafe_ptr=*__t1957t;
  uint64_t buf__unsafe_size=*__t1958t;
  uint16_t buf__unsafe_offset=*__t1959t;
  uint16_t buf__unsafe_align=*__t1960t;
  uint64_t __t656t=0;
  char* __t657t__buf__unsafe_ptr=0;
  uint64_t __t657t__buf__unsafe_size=0;
  uint16_t __t657t__buf__unsafe_offset=0;
  uint16_t __t657t__buf__unsafe_align=0;
  uint64_t __t657t__pos=0;
  __t656t=0;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t656t,&__t657t__buf__unsafe_ptr,&__t657t__buf__unsafe_size,&__t657t__buf__unsafe_offset,&__t657t__buf__unsafe_align,&__t657t__pos);
  goto __t_return;
  __t_return:
  *__t1957t=buf__unsafe_ptr;
  *__t1958t=buf__unsafe_size;
  *__t1959t=buf__unsafe_offset;
  *__t1960t=buf__unsafe_align;
  *__t1961t=__t657t__buf__unsafe_ptr;
  *__t1962t=__t657t__buf__unsafe_size;
  *__t1963t=__t657t__buf__unsafe_offset;
  *__t1964t=__t657t__buf__unsafe_align;
  *__t1965t=__t657t__pos;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1966t, uint64_t* __t1967t, uint64_t* __t1968t, char* __t1969t) {
  goto __t_return;
  __t_return:
  *__t1966t=other__unsafe_ptr;
  *__t1967t=other__dat__pos;
  *__t1968t=other__dat__length;
  *__t1969t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1970t) {
  goto __t_return;
  __t_return:
  *__t1970t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1971t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1971t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1972t, uint64_t* __t1973t, uint16_t* __t1974t, uint16_t* __t1975t, uint64_t pos, char** __t1976t, uint64_t* __t1977t, uint16_t* __t1978t, uint16_t* __t1979t, uint64_t* __t1980t) {
  char* buf__unsafe_ptr=*__t1972t;
  uint64_t buf__unsafe_size=*__t1973t;
  uint16_t buf__unsafe_offset=*__t1974t;
  uint16_t buf__unsafe_align=*__t1975t;
  goto __t_return;
  __t_return:
  *__t1972t=buf__unsafe_ptr;
  *__t1973t=buf__unsafe_size;
  *__t1974t=buf__unsafe_offset;
  *__t1975t=buf__unsafe_align;
  *__t1976t=buf__unsafe_ptr;
  *__t1977t=buf__unsafe_size;
  *__t1978t=buf__unsafe_offset;
  *__t1979t=buf__unsafe_align;
  *__t1980t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t1981t, uint64_t* __t1982t, uint16_t* __t1983t, uint16_t* __t1984t, uint64_t* __t1985t, uint64_t length, char** __t1986t, uint64_t* __t1987t, uint16_t* __t1988t, uint16_t* __t1989t, uint64_t* __t1990t) {
  char* allocator__buf__unsafe_ptr=*__t1981t;
  uint64_t allocator__buf__unsafe_size=*__t1982t;
  uint16_t allocator__buf__unsafe_offset=*__t1983t;
  uint16_t allocator__buf__unsafe_align=*__t1984t;
  uint64_t allocator__pos=*__t1985t;
  int __t686t=0;
  uint64_t __t687t__=0;
  uint64_t next_pos=0;
  uint64_t __t688t__=0;
  char __t689t__=0;
  uint64_t __t690t=0;
  uint64_t __t691t__=0;
  uint64_t pos=0;
  char* __t692t__buf__unsafe_ptr=0;
  uint64_t __t692t__buf__unsafe_size=0;
  uint16_t __t692t__buf__unsafe_offset=0;
  uint16_t __t692t__buf__unsafe_align=0;
  uint64_t __t692t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t687t__);
  next_pos=__t687t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t688t__);
  gt__t276t(next_pos,__t688t__,&__t689t__);
  if(__t689t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t690t=0;
  add__t175t(allocator__pos,__t690t,&__t691t__);
  pos=__t691t__;
  allocator__pos=next_pos;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t692t__buf__unsafe_ptr,&__t692t__buf__unsafe_size,&__t692t__buf__unsafe_offset,&__t692t__buf__unsafe_align,&__t692t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1981t=allocator__buf__unsafe_ptr;
  *__t1982t=allocator__buf__unsafe_size;
  *__t1983t=allocator__buf__unsafe_offset;
  *__t1984t=allocator__buf__unsafe_align;
  *__t1985t=allocator__pos;
  *__t1986t=__t692t__buf__unsafe_ptr;
  *__t1987t=__t692t__buf__unsafe_size;
  *__t1988t=__t692t__buf__unsafe_offset;
  *__t1989t=__t692t__buf__unsafe_align;
  *__t1990t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t1991t, uint64_t* __t1992t, uint16_t* __t1993t, uint16_t* __t1994t, uint64_t* __t1995t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1996t, uint64_t* __t1997t, uint64_t* __t1998t, char* __t1999t) {
  char* CHARS__buf__unsafe_ptr=*__t1991t;
  uint64_t CHARS__buf__unsafe_size=*__t1992t;
  uint16_t CHARS__buf__unsafe_offset=*__t1993t;
  uint16_t CHARS__buf__unsafe_align=*__t1994t;
  uint64_t CHARS__pos=*__t1995t;
  char* __t874t__unsafe_ptr=0;
  uint64_t __t874t__dat__pos=0;
  uint64_t __t874t__dat__length=0;
  char __t874t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t875t__=0;
  char* __t876t__buf__unsafe_ptr=0;
  uint64_t __t876t__buf__unsafe_size=0;
  uint16_t __t876t__buf__unsafe_offset=0;
  uint16_t __t876t__buf__unsafe_align=0;
  uint64_t __t876t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t877t=0;
  char* __t878t__unsafe_ptr=0;
  uint64_t __t878t__dat__pos=0;
  uint64_t __t878t__dat__length=0;
  char __t878t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t818t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t874t__unsafe_ptr,&__t874t__dat__pos,&__t874t__dat__length,&__t874t__dat__first);
  other__unsafe_ptr=__t874t__unsafe_ptr;
  other__dat__pos=__t874t__dat__pos;
  other__dat__length=__t874t__dat__length;
  other__dat__first=__t874t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t875t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t875t__,&__t876t__buf__unsafe_ptr,&__t876t__buf__unsafe_size,&__t876t__buf__unsafe_offset,&__t876t__buf__unsafe_align,&__t876t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t876t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t876t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t876t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t876t__buf__unsafe_align;
  surface__pos=__t876t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t877t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t877t,other__dat__length,other__dat__first,&__t878t__unsafe_ptr,&__t878t__dat__pos,&__t878t__dat__length,&__t878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1991t=CHARS__buf__unsafe_ptr;
  *__t1992t=CHARS__buf__unsafe_size;
  *__t1993t=CHARS__buf__unsafe_offset;
  *__t1994t=CHARS__buf__unsafe_align;
  *__t1995t=CHARS__pos;
  *__t1996t=__t878t__unsafe_ptr;
  *__t1997t=__t878t__dat__pos;
  *__t1998t=__t878t__dat__length;
  *__t1999t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t660t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__pos, char** __t2000t, uint64_t* __t2001t, uint16_t* __t2002t, uint16_t* __t2003t, uint64_t* __t2004t) {
  char* __t661t__unsafe_ptr=0;
  uint64_t __t661t__unsafe_size=0;
  uint16_t __t661t__unsafe_offset=0;
  uint16_t __t661t__unsafe_align=0;
  uint64_t __t662t=0;
  __t661t__unsafe_ptr=self__buf__unsafe_ptr;
  __t661t__unsafe_size=self__buf__unsafe_size;
  __t661t__unsafe_offset=self__buf__unsafe_offset;
  __t661t__unsafe_align=self__buf__unsafe_align;
  __t662t=self__pos;
  goto __t_return;
  __t_return:
  *__t2000t=__t661t__unsafe_ptr;
  *__t2001t=__t661t__unsafe_size;
  *__t2002t=__t661t__unsafe_offset;
  *__t2003t=__t661t__unsafe_align;
  *__t2004t=__t662t;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2005t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2005t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2006t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2006t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t841t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2007t, uint64_t* __t2008t, uint64_t* __t2009t, char* __t2010t) {
  uint64_t __t843t__=0;
  char* __t844t__unsafe_ptr=0;
  uint64_t __t844t__dat__pos=0;
  uint64_t __t844t__dat__length=0;
  char __t844t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t843t__,&__t844t__unsafe_ptr,&__t844t__dat__pos,&__t844t__dat__length,&__t844t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2007t=__t844t__unsafe_ptr;
  *__t2008t=__t844t__dat__pos;
  *__t2009t=__t844t__dat__length;
  *__t2010t=__t844t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1855t(char* parts__unsafe_ptr, uint64_t parts__unsafe_size, uint16_t parts__unsafe_offset, uint16_t parts__unsafe_align, char** __t2011t, uint64_t* __t2012t, uint64_t* __t2013t, char* __t2014t) {
  char* __t1858t__unsafe_ptr=0;
  uint64_t __t1858t__unsafe_size=0;
  uint16_t __t1858t__unsafe_offset=0;
  uint16_t __t1858t__unsafe_align=0;
  uint64_t __t1859t__=0;
  char* __t1860t__unsafe_ptr=0;
  uint64_t __t1860t__unsafe_size=0;
  uint16_t __t1860t__unsafe_offset=0;
  uint16_t __t1860t__unsafe_align=0;
  char __t1861t____t534t__=0;
  char* __t1862t__buf__unsafe_ptr=0;
  uint64_t __t1862t__buf__unsafe_size=0;
  uint16_t __t1862t__buf__unsafe_offset=0;
  uint16_t __t1862t__buf__unsafe_align=0;
  uint64_t __t1862t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t __t1863t=0;
  char __t1864t=0;
  char* __t1865t__=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char* part__unsafe_ptr=0;
  uint64_t part__dat__pos=0;
  uint64_t part__dat__length=0;
  char part__dat__first=0;
  char* __t1867t__unsafe_ptr=0;
  uint64_t __t1867t__dat__pos=0;
  uint64_t __t1867t__dat__length=0;
  char __t1867t__dat__first=0;
  char* __t1868t__t661t__unsafe_ptr=0;
  uint64_t __t1868t__t661t__unsafe_size=0;
  uint16_t __t1868t__t661t__unsafe_offset=0;
  uint16_t __t1868t__t661t__unsafe_align=0;
  uint64_t __t1868t__t662t=0;
  uint64_t __t1870t=0;
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__dat__pos=0;
  uint64_t __t1871t__dat__length=0;
  char __t1871t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1856t(&__t1858t__unsafe_ptr,&__t1858t__unsafe_size,&__t1858t__unsafe_offset,&__t1858t__unsafe_align);
  total_length__t1846t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,&__t1859t__);
  __t_errcode=alloc__t532t(&__t1858t__unsafe_ptr,&__t1858t__unsafe_size,&__t1858t__unsafe_offset,&__t1858t__unsafe_align,__t1859t__,&__t1860t__unsafe_ptr,&__t1860t__unsafe_size,&__t1860t__unsafe_offset,&__t1860t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1860t__unsafe_ptr,&__t1860t__unsafe_size,&__t1860t__unsafe_offset,&__t1860t__unsafe_align,&__t1862t__buf__unsafe_ptr,&__t1862t__buf__unsafe_size,&__t1862t__buf__unsafe_offset,&__t1862t__buf__unsafe_align,&__t1862t__pos);
  CHARS__buf__unsafe_ptr=__t1862t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t1862t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t1862t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t1862t__buf__unsafe_align;
  CHARS__pos=__t1862t__pos;
  __t1863t=0;
  while(1){
  __t_complain=get__t640t(parts__unsafe_ptr,parts__unsafe_size,parts__unsafe_offset,parts__unsafe_align,__t1863t,&__t1865t__);
  __t1864t=__t_complain;
  if(!__t1865t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1866t__unsafe_ptr,__t1865t__,8);
  memcpy(&__t1866t__dat__pos,__t1865t__+8,8);
  memcpy(&__t1866t__dat__length,__t1865t__+16,8);
  memcpy(&__t1866t__dat__first,__t1865t__+24,1);
  }
  part__unsafe_ptr=__t1866t__unsafe_ptr;
  part__dat__pos=__t1866t__dat__pos;
  part__dat__length=__t1866t__dat__length;
  part__dat__first=__t1866t__dat__first;
  __t1864t=__t1864t==0;
  __t1863t=__t1863t+1;
  if(!__t1864t){
  break;
  }
  __t_errcode=copy__t873t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,part__unsafe_ptr,part__dat__pos,part__dat__length,part__dat__first,&__t1867t__unsafe_ptr,&__t1867t__dat__pos,&__t1867t__dat__length,&__t1867t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  status__t660t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t1868t__t661t__unsafe_ptr,&__t1868t__t661t__unsafe_size,&__t1868t__t661t__unsafe_offset,&__t1868t__t661t__unsafe_align,&__t1868t__t662t);
  __t1870t=0;
  __t_errcode=str__t841t(__t1868t__t661t__unsafe_ptr,__t1868t__t661t__unsafe_size,__t1868t__t661t__unsafe_offset,__t1868t__t661t__unsafe_align,__t1868t__t662t,__t1870t,&__t1871t__unsafe_ptr,&__t1871t__dat__pos,&__t1871t__dat__length,&__t1871t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t447t(__t1871t__unsafe_ptr,&__t1861t____t534t__);
  if(__t1861t____t534t__){
  free__t503t(&__t1871t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2011t=__t1871t__unsafe_ptr;
  *__t2012t=__t1871t__dat__pos;
  *__t2013t=__t1871t__dat__length;
  *__t2014t=__t1871t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1872t() {
  char* __t1875t__unsafe_ptr=0;
  uint64_t __t1875t__dat__pos=0;
  uint64_t __t1875t__dat__length=0;
  char __t1875t__dat__first=0;
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__dat__pos=0;
  uint64_t __t1881t__dat__length=0;
  char __t1881t__dat__first=0;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__dat__pos=0;
  uint64_t __t1883t__dat__length=0;
  char __t1883t__dat__first=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  char* __t1886t__unsafe_ptr=0;
  uint64_t __t1886t__unsafe_size=0;
  uint16_t __t1886t__unsafe_offset=0;
  uint16_t __t1886t__unsafe_align=0;
  uint64_t __t1887t=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__unsafe_size=0;
  uint16_t __t1888t__unsafe_offset=0;
  uint16_t __t1888t__unsafe_align=0;
  char __t1889t____t534t__=0;
  char* __t1890t__unsafe_ptr=0;
  uint64_t __t1890t__dat__pos=0;
  uint64_t __t1890t__dat__length=0;
  char __t1890t__dat__first=0;
  char __t1891t____t1861t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t845t(__t1874t,&__t1875t__unsafe_ptr,&__t1875t__dat__pos,&__t1875t__dat__length,&__t1875t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1880t,&__t1881t__unsafe_ptr,&__t1881t__dat__pos,&__t1881t__dat__length,&__t1881t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1882t,&__t1883t__unsafe_ptr,&__t1883t__dat__pos,&__t1883t__dat__length,&__t1883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t845t(__t1884t,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__ptr__nat__nat__char____buffer__t1878t(&__t1886t__unsafe_ptr,&__t1886t__unsafe_size,&__t1886t__unsafe_offset,&__t1886t__unsafe_align);
  __t1887t=4;
  __t_errcode=alloc__t532t(&__t1886t__unsafe_ptr,&__t1886t__unsafe_size,&__t1886t__unsafe_offset,&__t1886t__unsafe_align,__t1887t,&__t1888t__unsafe_ptr,&__t1888t__unsafe_size,&__t1888t__unsafe_offset,&__t1888t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1886t__unsafe_ptr,&__t1875t__unsafe_ptr,8);
  memcpy(__t1886t__unsafe_ptr+8,&__t1875t__dat__pos,8);
  memcpy(__t1886t__unsafe_ptr+16,&__t1875t__dat__length,8);
  memcpy(__t1886t__unsafe_ptr+24,&__t1875t__dat__first,1);
  memcpy(__t1886t__unsafe_ptr+25,&__t1881t__unsafe_ptr,8);
  memcpy(__t1886t__unsafe_ptr+33,&__t1881t__dat__pos,8);
  memcpy(__t1886t__unsafe_ptr+41,&__t1881t__dat__length,8);
  memcpy(__t1886t__unsafe_ptr+49,&__t1881t__dat__first,1);
  memcpy(__t1886t__unsafe_ptr+50,&__t1883t__unsafe_ptr,8);
  memcpy(__t1886t__unsafe_ptr+58,&__t1883t__dat__pos,8);
  memcpy(__t1886t__unsafe_ptr+66,&__t1883t__dat__length,8);
  memcpy(__t1886t__unsafe_ptr+74,&__t1883t__dat__first,1);
  memcpy(__t1886t__unsafe_ptr+75,&__t1885t__unsafe_ptr,8);
  memcpy(__t1886t__unsafe_ptr+83,&__t1885t__dat__pos,8);
  memcpy(__t1886t__unsafe_ptr+91,&__t1885t__dat__length,8);
  memcpy(__t1886t__unsafe_ptr+99,&__t1885t__dat__first,1);
  __t_errcode=concat__t1855t(__t1886t__unsafe_ptr,__t1886t__unsafe_size,__t1886t__unsafe_offset,__t1886t__unsafe_align,&__t1890t__unsafe_ptr,&__t1890t__dat__pos,&__t1890t__dat__length,&__t1890t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t1890t__unsafe_ptr,__t1890t__dat__pos,__t1890t__dat__length,__t1890t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1890t__unsafe_ptr,&__t1891t____t1861t____t534t__);
  if(__t1891t____t1861t____t534t__){
  free__t503t(&__t1890t__unsafe_ptr);
  }
  exists__t447t(__t1888t__unsafe_ptr,&__t1889t____t534t__);
  if(__t1889t____t534t__){
  free__t503t(&__t1888t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1872t();return 0;}