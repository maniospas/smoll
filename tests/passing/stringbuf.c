#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t1852t="surnname  ";
const char* const __t1876t="mario";
const char* const __t1847t="-------------------";
const char* const __t1849t="name      ";
const char* const __t1874t="it's a me";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1857t(char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1900t=unsafe_ptr;
  *__t1901t=unsafe_size;
  *__t1902t=unsafe_offset;
  *__t1903t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1904t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1904t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1905t) {
  char* allocated=*__t1905t;
  if(allocated){
  free(allocated);
  }
  *__t1905t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1906t) {
  int value=0;
  *__t1906t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1907t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1907t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1908t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1908t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1909t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1909t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1910t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1910t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1911t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1911t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1912t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1912t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1913t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1913t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1914t) {
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
  *__t1914t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1915t, uint64_t* __t1916t, uint16_t* __t1917t, uint16_t* __t1918t, uint64_t size, char** __t1919t, uint64_t* __t1920t, uint16_t* __t1921t, uint16_t* __t1922t) {
  char* buffer__unsafe_ptr=*__t1915t;
  uint64_t buffer__unsafe_size=*__t1916t;
  uint16_t buffer__unsafe_offset=*__t1917t;
  uint16_t buffer__unsafe_align=*__t1918t;
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
  *__t1915t=buffer__unsafe_ptr;
  *__t1916t=buffer__unsafe_size;
  *__t1917t=buffer__unsafe_offset;
  *__t1918t=buffer__unsafe_align;
  *__t1919t=buffer__unsafe_ptr;
  *__t1920t=buffer__unsafe_size;
  *__t1921t=buffer__unsafe_offset;
  *__t1922t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1863t(char** __t1923t, uint64_t* __t1924t, uint16_t* __t1925t, uint16_t* __t1926t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1923t=unsafe_ptr;
  *__t1924t=unsafe_size;
  *__t1925t=unsafe_offset;
  *__t1926t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t1927t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t1927t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t1928t, uint64_t* __t1929t, uint16_t* __t1930t, uint16_t* __t1931t, uint64_t _pos, char** __t1932t, uint64_t* __t1933t, uint16_t* __t1934t, uint16_t* __t1935t, uint64_t* __t1936t) {
  char* buf__unsafe_ptr=*__t1928t;
  uint64_t buf__unsafe_size=*__t1929t;
  uint16_t buf__unsafe_offset=*__t1930t;
  uint16_t buf__unsafe_align=*__t1931t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t1928t=buf__unsafe_ptr;
  *__t1929t=buf__unsafe_size;
  *__t1930t=buf__unsafe_offset;
  *__t1931t=buf__unsafe_align;
  *__t1932t=buf__unsafe_ptr;
  *__t1933t=buf__unsafe_size;
  *__t1934t=buf__unsafe_offset;
  *__t1935t=buf__unsafe_align;
  *__t1936t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t1937t, uint64_t* __t1938t, uint16_t* __t1939t, uint16_t* __t1940t, char** __t1941t, uint64_t* __t1942t, uint16_t* __t1943t, uint16_t* __t1944t, uint64_t* __t1945t) {
  char* buf__unsafe_ptr=*__t1937t;
  uint64_t buf__unsafe_size=*__t1938t;
  uint16_t buf__unsafe_offset=*__t1939t;
  uint16_t buf__unsafe_align=*__t1940t;
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
  *__t1937t=buf__unsafe_ptr;
  *__t1938t=buf__unsafe_size;
  *__t1939t=buf__unsafe_offset;
  *__t1940t=buf__unsafe_align;
  *__t1941t=__t657t__buf__unsafe_ptr;
  *__t1942t=__t657t__buf__unsafe_size;
  *__t1943t=__t657t__buf__unsafe_offset;
  *__t1944t=__t657t__buf__unsafe_align;
  *__t1945t=__t657t__pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1946t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1946t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1947t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1947t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1948t) {
  *__t1948t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1949t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1949t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1950t, uint64_t* __t1951t, uint16_t* __t1952t, uint16_t* __t1953t, uint64_t i, char** __t1954t) {
  char* buffer__unsafe_ptr=*__t1950t;
  uint64_t buffer__unsafe_size=*__t1951t;
  uint16_t buffer__unsafe_offset=*__t1952t;
  uint16_t buffer__unsafe_align=*__t1953t;
  char __t634t__=0;
  uint64_t __t635t__=0;
  uint64_t __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t__=0;
  char* __t639t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t634t__);
  if(__t634t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t635t__);
  mul__t199t(i,__t635t__,&__t636t__);
  nat__t507t(buffer__unsafe_offset,&__t637t__);
  add__t175t(__t636t__,__t637t__,&__t638t__);
  add__t505t(buffer__unsafe_ptr,__t638t__,&__t639t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1950t=buffer__unsafe_ptr;
  *__t1951t=buffer__unsafe_size;
  *__t1952t=buffer__unsafe_offset;
  *__t1953t=buffer__unsafe_align;
  *__t1954t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1955t, uint64_t* __t1956t, uint16_t* __t1957t, uint16_t* __t1958t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1955t=unsafe_ptr;
  *__t1956t=unsafe_size;
  *__t1957t=unsafe_offset;
  *__t1958t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1959t) {
  *__t1959t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1960t) {
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
  *__t1960t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1961t, uint64_t* __t1962t, uint64_t* __t1963t, char* __t1964t) {
  goto __t_return;
  __t_return:
  *__t1961t=unsafe_ptr;
  *__t1962t=dat__pos;
  *__t1963t=dat__length;
  *__t1964t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1965t, uint64_t* __t1966t, uint64_t* __t1967t, char* __t1968t) {
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
  *__t1965t=__t794t__unsafe_ptr;
  *__t1966t=__t794t__dat__pos;
  *__t1967t=__t794t__dat__length;
  *__t1968t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1969t, uint64_t* __t1970t, uint64_t* __t1971t, char* __t1972t) {
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
  *__t1969t=__t827t__unsafe_ptr;
  *__t1970t=__t827t__dat__pos;
  *__t1971t=__t827t__dat__length;
  *__t1972t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1973t, uint64_t* __t1974t, uint64_t* __t1975t, char* __t1976t) {
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
  *__t1973t=__t853t__unsafe_ptr;
  *__t1974t=__t853t__dat__pos;
  *__t1975t=__t853t__dat__length;
  *__t1976t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1977t) {
  goto __t_return;
  __t_return:
  *__t1977t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1978t) {
  goto __t_return;
  __t_return:
  *__t1978t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1979t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1979t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1980t, uint64_t* __t1981t, uint16_t* __t1982t, uint16_t* __t1983t, uint64_t pos, char** __t1984t, uint64_t* __t1985t, uint16_t* __t1986t, uint16_t* __t1987t, uint64_t* __t1988t) {
  char* buf__unsafe_ptr=*__t1980t;
  uint64_t buf__unsafe_size=*__t1981t;
  uint16_t buf__unsafe_offset=*__t1982t;
  uint16_t buf__unsafe_align=*__t1983t;
  goto __t_return;
  __t_return:
  *__t1980t=buf__unsafe_ptr;
  *__t1981t=buf__unsafe_size;
  *__t1982t=buf__unsafe_offset;
  *__t1983t=buf__unsafe_align;
  *__t1984t=buf__unsafe_ptr;
  *__t1985t=buf__unsafe_size;
  *__t1986t=buf__unsafe_offset;
  *__t1987t=buf__unsafe_align;
  *__t1988t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t1989t, uint64_t* __t1990t, uint16_t* __t1991t, uint16_t* __t1992t, uint64_t* __t1993t, uint64_t length, char** __t1994t, uint64_t* __t1995t, uint16_t* __t1996t, uint16_t* __t1997t, uint64_t* __t1998t) {
  char* allocator__buf__unsafe_ptr=*__t1989t;
  uint64_t allocator__buf__unsafe_size=*__t1990t;
  uint16_t allocator__buf__unsafe_offset=*__t1991t;
  uint16_t allocator__buf__unsafe_align=*__t1992t;
  uint64_t allocator__pos=*__t1993t;
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
  *__t1989t=allocator__buf__unsafe_ptr;
  *__t1990t=allocator__buf__unsafe_size;
  *__t1991t=allocator__buf__unsafe_offset;
  *__t1992t=allocator__buf__unsafe_align;
  *__t1993t=allocator__pos;
  *__t1994t=__t692t__buf__unsafe_ptr;
  *__t1995t=__t692t__buf__unsafe_size;
  *__t1996t=__t692t__buf__unsafe_offset;
  *__t1997t=__t692t__buf__unsafe_align;
  *__t1998t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t879t(char** __t1999t, uint64_t* __t2000t, uint16_t* __t2001t, uint16_t* __t2002t, uint64_t* __t2003t, const char* _other, char** __t2004t, uint64_t* __t2005t, uint64_t* __t2006t, char* __t2007t) {
  char* CHARS__buf__unsafe_ptr=*__t1999t;
  uint64_t CHARS__buf__unsafe_size=*__t2000t;
  uint16_t CHARS__buf__unsafe_offset=*__t2001t;
  uint16_t CHARS__buf__unsafe_align=*__t2002t;
  uint64_t CHARS__pos=*__t2003t;
  char* __t880t__unsafe_ptr=0;
  uint64_t __t880t__dat__pos=0;
  uint64_t __t880t__dat__length=0;
  char __t880t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t881t__=0;
  char* __t882t__buf__unsafe_ptr=0;
  uint64_t __t882t__buf__unsafe_size=0;
  uint16_t __t882t__buf__unsafe_offset=0;
  uint16_t __t882t__buf__unsafe_align=0;
  uint64_t __t882t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t883t=0;
  char* __t884t__unsafe_ptr=0;
  uint64_t __t884t__dat__pos=0;
  uint64_t __t884t__dat__length=0;
  char __t884t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_other,&__t880t__unsafe_ptr,&__t880t__dat__pos,&__t880t__dat__length,&__t880t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t880t__unsafe_ptr;
  other__dat__pos=__t880t__dat__pos;
  other__dat__length=__t880t__dat__length;
  other__dat__first=__t880t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t881t__);
  __t_errcode=alloc__t685t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t881t__,&__t882t__buf__unsafe_ptr,&__t882t__buf__unsafe_size,&__t882t__buf__unsafe_offset,&__t882t__buf__unsafe_align,&__t882t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t882t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t882t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t882t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t882t__buf__unsafe_align;
  surface__pos=__t882t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t883t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t883t,other__dat__length,other__dat__first,&__t884t__unsafe_ptr,&__t884t__dat__pos,&__t884t__dat__length,&__t884t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1999t=CHARS__buf__unsafe_ptr;
  *__t2000t=CHARS__buf__unsafe_size;
  *__t2001t=CHARS__buf__unsafe_offset;
  *__t2002t=CHARS__buf__unsafe_align;
  *__t2003t=CHARS__pos;
  *__t2004t=__t884t__unsafe_ptr;
  *__t2005t=__t884t__dat__pos;
  *__t2006t=__t884t__dat__length;
  *__t2007t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1844t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t2008t, uint64_t* __t2009t, uint64_t* __t2010t, char* __t2011t, char** __t2012t, uint64_t* __t2013t, uint64_t* __t2014t, char* __t2015t) {
  goto __t_return;
  __t_return:
  *__t2008t=name__unsafe_ptr;
  *__t2009t=name__dat__pos;
  *__t2010t=name__dat__length;
  *__t2011t=name__dat__first;
  *__t2012t=surname__unsafe_ptr;
  *__t2013t=surname__dat__pos;
  *__t2014t=surname__dat__length;
  *__t2015t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1846t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t380t(__t1847t);
  print__t378t(__t1849t,__t374t);
  print__t987t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t378t(__t1852t,__t374t);
  print__t987t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t380t(__t1847t);
}

static inline __attribute__((always_inline)) int test__t1856t(char** __t2016t, uint64_t* __t2017t, uint16_t* __t2018t, uint16_t* __t2019t, uint64_t* __t2020t, char** __t2021t, uint64_t* __t2022t, uint16_t* __t2023t, uint16_t* __t2024t) {
  char* __t1859t__unsafe_ptr=0;
  uint64_t __t1859t__unsafe_size=0;
  uint16_t __t1859t__unsafe_offset=0;
  uint16_t __t1859t__unsafe_align=0;
  uint64_t __t1860t=0;
  char* __t1861t__unsafe_ptr=0;
  uint64_t __t1861t__unsafe_size=0;
  uint16_t __t1861t__unsafe_offset=0;
  uint16_t __t1861t__unsafe_align=0;
  char __t1862t____t534t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1865t__unsafe_ptr=0;
  uint64_t __t1865t__unsafe_size=0;
  uint16_t __t1865t__unsafe_offset=0;
  uint16_t __t1865t__unsafe_align=0;
  uint64_t __t1866t=0;
  uint64_t __t1867t__=0;
  char* __t1868t__unsafe_ptr=0;
  uint64_t __t1868t__unsafe_size=0;
  uint16_t __t1868t__unsafe_offset=0;
  uint16_t __t1868t__unsafe_align=0;
  char __t1869t____t534t__=0;
  char* __t1870t__buf__unsafe_ptr=0;
  uint64_t __t1870t__buf__unsafe_size=0;
  uint16_t __t1870t__buf__unsafe_offset=0;
  uint16_t __t1870t__buf__unsafe_align=0;
  uint64_t __t1870t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1871t=0;
  char* __t1872t__=0;
  uint64_t __t1873t=0;
  char* __t1875t__unsafe_ptr=0;
  uint64_t __t1875t__dat__pos=0;
  uint64_t __t1875t__dat__length=0;
  char __t1875t__dat__first=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__dat__pos=0;
  uint64_t __t1877t__dat__length=0;
  char __t1877t__dat__first=0;
  char* __t1878t__name__unsafe_ptr=0;
  uint64_t __t1878t__name__dat__pos=0;
  uint64_t __t1878t__name__dat__length=0;
  char __t1878t__name__dat__first=0;
  char* __t1878t__surname__unsafe_ptr=0;
  uint64_t __t1878t__surname__dat__pos=0;
  uint64_t __t1878t__surname__dat__length=0;
  char __t1878t__surname__dat__first=0;
  uint64_t __t1879t=0;
  char* __t1880t__=0;
  char* __t1881t__name__unsafe_ptr=0;
  uint64_t __t1881t__name__dat__pos=0;
  uint64_t __t1881t__name__dat__length=0;
  char __t1881t__name__dat__first=0;
  char* __t1881t__surname__unsafe_ptr=0;
  uint64_t __t1881t__surname__dat__pos=0;
  uint64_t __t1881t__surname__dat__length=0;
  char __t1881t__surname__dat__first=0;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__unsafe_size=0;
  uint16_t __t1883t__unsafe_offset=0;
  uint16_t __t1883t__unsafe_align=0;
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__unsafe_size=0;
  uint16_t __t1887t__unsafe_offset=0;
  uint16_t __t1887t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1857t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align);
  __t1860t=4;
  __t_errcode=alloc__t532t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align,__t1860t,&__t1861t__unsafe_ptr,&__t1861t__unsafe_size,&__t1861t__unsafe_offset,&__t1861t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1861t__unsafe_ptr;
  people__unsafe_size=__t1861t__unsafe_size;
  people__unsafe_offset=__t1861t__unsafe_offset;
  people__unsafe_align=__t1861t__unsafe_align;
  char____t_buffer____buffer__t1863t(&__t1865t__unsafe_ptr,&__t1865t__unsafe_size,&__t1865t__unsafe_offset,&__t1865t__unsafe_align);
  __t1866t=4;
  KB__t481t(__t1866t,&__t1867t__);
  __t_errcode=alloc__t532t(&__t1865t__unsafe_ptr,&__t1865t__unsafe_size,&__t1865t__unsafe_offset,&__t1865t__unsafe_align,__t1867t__,&__t1868t__unsafe_ptr,&__t1868t__unsafe_size,&__t1868t__unsafe_offset,&__t1868t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1868t__unsafe_ptr,&__t1868t__unsafe_size,&__t1868t__unsafe_offset,&__t1868t__unsafe_align,&__t1870t__buf__unsafe_ptr,&__t1870t__buf__unsafe_size,&__t1870t__buf__unsafe_offset,&__t1870t__buf__unsafe_align,&__t1870t__pos);
  buf__buf__unsafe_ptr=__t1870t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1870t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1870t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1870t__buf__unsafe_align;
  buf__pos=__t1870t__pos;
  __t1871t=0;
  __t_errcode=mutget__t633t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1871t,&__t1872t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1873t=0;
  __t_errcode=copy__t879t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1874t,&__t1875t__unsafe_ptr,&__t1875t__dat__pos,&__t1875t__dat__length,&__t1875t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t879t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1876t,&__t1877t__unsafe_ptr,&__t1877t__dat__pos,&__t1877t__dat__length,&__t1877t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1844t(__t1873t,__t1875t__unsafe_ptr,__t1875t__dat__pos,__t1875t__dat__length,__t1875t__dat__first,__t1877t__unsafe_ptr,__t1877t__dat__pos,__t1877t__dat__length,__t1877t__dat__first,&__t1878t__name__unsafe_ptr,&__t1878t__name__dat__pos,&__t1878t__name__dat__length,&__t1878t__name__dat__first,&__t1878t__surname__unsafe_ptr,&__t1878t__surname__dat__pos,&__t1878t__surname__dat__length,&__t1878t__surname__dat__first);
  if(!__t1872t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1872t__,&__t1878t__name__unsafe_ptr,8);
  memcpy(__t1872t__+8,&__t1878t__name__dat__pos,8);
  memcpy(__t1872t__+16,&__t1878t__name__dat__length,8);
  memcpy(__t1872t__+24,&__t1878t__name__dat__first,1);
  memcpy(__t1872t__+25,&__t1878t__surname__unsafe_ptr,8);
  memcpy(__t1872t__+33,&__t1878t__surname__dat__pos,8);
  memcpy(__t1872t__+41,&__t1878t__surname__dat__length,8);
  memcpy(__t1872t__+49,&__t1878t__surname__dat__first,1);
  __t1879t=0;
  __t_errcode=get__t640t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1879t,&__t1880t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1880t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1881t__name__unsafe_ptr,__t1880t__,8);
  memcpy(&__t1881t__name__dat__pos,__t1880t__+8,8);
  memcpy(&__t1881t__name__dat__length,__t1880t__+16,8);
  memcpy(&__t1881t__name__dat__first,__t1880t__+24,1);
  memcpy(&__t1881t__surname__unsafe_ptr,__t1880t__+25,8);
  memcpy(&__t1881t__surname__dat__pos,__t1880t__+33,8);
  memcpy(&__t1881t__surname__dat__length,__t1880t__+41,8);
  memcpy(&__t1881t__surname__dat__first,__t1880t__+49,1);
  print__t1846t(__t1881t__name__unsafe_ptr,__t1881t__name__dat__pos,__t1881t__name__dat__length,__t1881t__name__dat__first,__t1881t__surname__unsafe_ptr,__t1881t__surname__dat__pos,__t1881t__surname__dat__length,__t1881t__surname__dat__first);
  __t1883t__unsafe_ptr=people__unsafe_ptr;
  __t1883t__unsafe_size=people__unsafe_size;
  __t1883t__unsafe_offset=people__unsafe_offset+0;
  __t1883t__unsafe_align=people__unsafe_align;
  __t1887t__unsafe_ptr=__t1883t__unsafe_ptr;
  __t1887t__unsafe_size=__t1883t__unsafe_size;
  __t1887t__unsafe_offset=__t1883t__unsafe_offset+8;
  __t1887t__unsafe_align=__t1883t__unsafe_align;
  dat__unsafe_ptr=__t1887t__unsafe_ptr;
  dat__unsafe_size=__t1887t__unsafe_size;
  dat__unsafe_offset=__t1887t__unsafe_offset;
  dat__unsafe_align=__t1887t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__buf__unsafe_ptr,&__t1869t____t534t__);
  if(__t1869t____t534t__){
  free__t503t(&buf__buf__unsafe_ptr);
  }
  exists__t447t(dat__unsafe_ptr,&__t1862t____t534t__);
  if(__t1862t____t534t__){
  free__t503t(&dat__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2016t=buf__buf__unsafe_ptr;
  *__t2017t=buf__buf__unsafe_size;
  *__t2018t=buf__buf__unsafe_offset;
  *__t2019t=buf__buf__unsafe_align;
  *__t2020t=buf__pos;
  *__t2021t=dat__unsafe_ptr;
  *__t2022t=dat__unsafe_size;
  *__t2023t=dat__unsafe_offset;
  *__t2024t=dat__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1891t() {
  char* __t1893t__buf__buf__unsafe_ptr=0;
  uint64_t __t1893t__buf__buf__unsafe_size=0;
  uint16_t __t1893t__buf__buf__unsafe_offset=0;
  uint16_t __t1893t__buf__buf__unsafe_align=0;
  uint64_t __t1893t__buf__pos=0;
  char* __t1893t__dat__unsafe_ptr=0;
  uint64_t __t1893t__dat__unsafe_size=0;
  uint16_t __t1893t__dat__unsafe_offset=0;
  uint16_t __t1893t__dat__unsafe_align=0;
  char __t1894t____t1862t____t534t__=0;
  char __t1894t____t1869t____t534t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1895t=0;
  char* __t1896t__=0;
  uint64_t __t1897t__pos=0;
  uint64_t __t1897t__length=0;
  char __t1897t__first=0;
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__dat__pos=0;
  uint64_t __t1898t__dat__length=0;
  char __t1898t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1856t(&__t1893t__buf__buf__unsafe_ptr,&__t1893t__buf__buf__unsafe_size,&__t1893t__buf__buf__unsafe_offset,&__t1893t__buf__buf__unsafe_align,&__t1893t__buf__pos,&__t1893t__dat__unsafe_ptr,&__t1893t__dat__unsafe_size,&__t1893t__dat__unsafe_offset,&__t1893t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1893t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1893t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1893t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1893t__buf__buf__unsafe_align;
  t__buf__pos=__t1893t__buf__pos;
  t__dat__unsafe_ptr=__t1893t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1893t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1893t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1893t__dat__unsafe_align;
  __t1895t=0;
  __t_errcode=get__t640t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1895t,&__t1896t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1896t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1897t__pos,__t1896t__,8);
  memcpy(&__t1897t__length,__t1896t__+8,8);
  memcpy(&__t1897t__first,__t1896t__+16,1);
  __t_errcode=str__t787t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1897t__pos,__t1897t__length,__t1897t__first,&__t1898t__unsafe_ptr,&__t1898t__dat__pos,&__t1898t__dat__length,&__t1898t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t987t(__t1898t__unsafe_ptr,__t1898t__dat__pos,__t1898t__dat__length,__t1898t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1893t__buf__buf__unsafe_ptr,&__t1894t____t1869t____t534t__);
  if(__t1894t____t1869t____t534t__){
  free__t503t(&__t1893t__buf__buf__unsafe_ptr);
  }
  exists__t447t(__t1893t__dat__unsafe_ptr,&__t1894t____t1862t____t534t__);
  if(__t1894t____t1862t____t534t__){
  free__t503t(&__t1893t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1891t();return 0;}