#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1853t="123";
const char* const __t382t="\n";
const char* const __t1855t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1845t(char** __t1863t, uint64_t* __t1864t, uint16_t* __t1865t, uint16_t* __t1866t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1863t=unsafe_ptr;
  *__t1864t=unsafe_size;
  *__t1865t=unsafe_offset;
  *__t1866t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1867t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1867t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1868t) {
  char* allocated=*__t1868t;
  if(allocated){
  free(allocated);
  }
  *__t1868t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1869t) {
  int value=0;
  *__t1869t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1870t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1870t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1871t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1871t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1872t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1872t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1873t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1873t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1874t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1874t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1875t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1875t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1876t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1876t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1877t) {
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
  *__t1877t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1878t, uint64_t* __t1879t, uint16_t* __t1880t, uint16_t* __t1881t, uint64_t size, char** __t1882t, uint64_t* __t1883t, uint16_t* __t1884t, uint16_t* __t1885t) {
  char* buffer__unsafe_ptr=*__t1878t;
  uint64_t buffer__unsafe_size=*__t1879t;
  uint16_t buffer__unsafe_offset=*__t1880t;
  uint16_t buffer__unsafe_align=*__t1881t;
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
  *__t1878t=buffer__unsafe_ptr;
  *__t1879t=buffer__unsafe_size;
  *__t1880t=buffer__unsafe_offset;
  *__t1881t=buffer__unsafe_align;
  *__t1882t=buffer__unsafe_ptr;
  *__t1883t=buffer__unsafe_size;
  *__t1884t=buffer__unsafe_offset;
  *__t1885t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1886t) {
  goto __t_return;
  __t_return:
  *__t1886t=buffer__unsafe_size;
}

int list__t670t(char** __t1887t, uint64_t* __t1888t, uint16_t* __t1889t, uint16_t* __t1890t, char** __t1891t, uint64_t* __t1892t, uint16_t* __t1893t, uint16_t* __t1894t, uint64_t* __t1895t) {
  char* _buf__unsafe_ptr=*__t1887t;
  uint64_t _buf__unsafe_size=*__t1888t;
  uint16_t _buf__unsafe_offset=*__t1889t;
  uint16_t _buf__unsafe_align=*__t1890t;
  uint64_t __t671t=0;
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char __t673t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t674t__=0;
  uint64_t __t675t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t671t=1;
  __t_errcode=alloc__t532t(&_buf__unsafe_ptr,&_buf__unsafe_size,&_buf__unsafe_offset,&_buf__unsafe_align,__t671t,&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t672t__unsafe_ptr;
  buf__unsafe_size=__t672t__unsafe_size;
  buf__unsafe_offset=__t672t__unsafe_offset;
  buf__unsafe_align=__t672t__unsafe_align;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t674t__);
  __t675t=__t674t__;
  length=__t675t;
  goto __t_return;
  
  __t_failure:exists__t447t(buf__unsafe_ptr,&__t673t____t534t__);
  if(__t673t____t534t__){
  free__t503t(&buf__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1887t=_buf__unsafe_ptr;
  *__t1888t=_buf__unsafe_size;
  *__t1889t=_buf__unsafe_offset;
  *__t1890t=_buf__unsafe_align;
  *__t1891t=buf__unsafe_ptr;
  *__t1892t=buf__unsafe_size;
  *__t1893t=buf__unsafe_offset;
  *__t1894t=buf__unsafe_align;
  *__t1895t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1896t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1896t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1897t) {
  *__t1897t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1898t) {
  char* new_allocated=0;
  char __t500t__=0;
  char __t501t__=0;
  char* __t502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t447t(new_allocated,&__t500t__);
  not__t28t(__t500t__,&__t501t__);
  if(__t501t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t502t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1898t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1899t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1899t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t, uint64_t size, char** __t1904t, uint64_t* __t1905t, uint16_t* __t1906t, uint16_t* __t1907t) {
  char* buffer__unsafe_ptr=*__t1900t;
  uint64_t buffer__unsafe_size=*__t1901t;
  uint16_t buffer__unsafe_offset=*__t1902t;
  uint16_t buffer__unsafe_align=*__t1903t;
  char __t603t__=0;
  uint64_t __t604t=0;
  char __t605t__=0;
  uint64_t __t606t__=0;
  uint64_t __t607t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t608t__=0;
  uint64_t __t609t__=0;
  uint64_t bytes=0;
  char* __t610t__=0;
  char __t611t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t603t__);
  if(__t603t__){
  goto __t_return;
  }
  __t604t=0;
  eq__t120t(buffer__unsafe_size,__t604t,&__t605t__);
  if(__t605t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t606t__);
  mul__t199t(buffer__unsafe_size,__t606t__,&__t607t__);
  prev_bytes=__t607t__;
  buffer__unsafe_size=size;
  nat__t507t(buffer__unsafe_align,&__t608t__);
  mul__t199t(__t608t__,size,&__t609t__);
  bytes=__t609t__;
  __t_errcode=realloc__t499t(buffer__unsafe_ptr,bytes,&__t610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t610t__;
  lt__t252t(prev_bytes,bytes,&__t611t__);
  if(__t611t__){
  zero__t504t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1900t=buffer__unsafe_ptr;
  *__t1901t=buffer__unsafe_size;
  *__t1902t=buffer__unsafe_offset;
  *__t1903t=buffer__unsafe_align;
  *__t1904t=buffer__unsafe_ptr;
  *__t1905t=buffer__unsafe_size;
  *__t1906t=buffer__unsafe_offset;
  *__t1907t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1908t, uint64_t* __t1909t, uint16_t* __t1910t, uint16_t* __t1911t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1908t=unsafe_ptr;
  *__t1909t=unsafe_size;
  *__t1910t=unsafe_offset;
  *__t1911t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1912t) {
  *__t1912t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1913t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1913t=z;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1914t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1914t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1915t) {
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
  *__t1915t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1916t, uint64_t* __t1917t, uint64_t* __t1918t, char* __t1919t) {
  goto __t_return;
  __t_return:
  *__t1916t=unsafe_ptr;
  *__t1917t=dat__pos;
  *__t1918t=dat__length;
  *__t1919t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1920t, uint64_t* __t1921t, uint64_t* __t1922t, char* __t1923t) {
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
  *__t1920t=__t794t__unsafe_ptr;
  *__t1921t=__t794t__dat__pos;
  *__t1922t=__t794t__dat__length;
  *__t1923t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1924t, uint64_t* __t1925t, uint64_t* __t1926t, char* __t1927t) {
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
  *__t1924t=__t827t__unsafe_ptr;
  *__t1925t=__t827t__dat__pos;
  *__t1926t=__t827t__dat__length;
  *__t1927t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1928t, uint64_t* __t1929t, uint64_t* __t1930t, char* __t1931t) {
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
  *__t1928t=__t853t__unsafe_ptr;
  *__t1929t=__t853t__dat__pos;
  *__t1930t=__t853t__dat__length;
  *__t1931t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1932t) {
  goto __t_return;
  __t_return:
  *__t1932t=s__dat__length;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1933t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1933t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1934t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1934t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1935t, uint64_t* __t1936t, uint16_t* __t1937t, uint16_t* __t1938t, uint64_t pos, char** __t1939t, uint64_t* __t1940t, uint16_t* __t1941t, uint16_t* __t1942t, uint64_t* __t1943t) {
  char* buf__unsafe_ptr=*__t1935t;
  uint64_t buf__unsafe_size=*__t1936t;
  uint16_t buf__unsafe_offset=*__t1937t;
  uint16_t buf__unsafe_align=*__t1938t;
  goto __t_return;
  __t_return:
  *__t1935t=buf__unsafe_ptr;
  *__t1936t=buf__unsafe_size;
  *__t1937t=buf__unsafe_offset;
  *__t1938t=buf__unsafe_align;
  *__t1939t=buf__unsafe_ptr;
  *__t1940t=buf__unsafe_size;
  *__t1941t=buf__unsafe_offset;
  *__t1942t=buf__unsafe_align;
  *__t1943t=pos;
}

int alloc__t731t(char** __t1944t, uint64_t* __t1945t, uint16_t* __t1946t, uint16_t* __t1947t, uint64_t* __t1948t, uint64_t length, char** __t1949t, uint64_t* __t1950t, uint16_t* __t1951t, uint16_t* __t1952t, uint64_t* __t1953t) {
  char* allocator__buf__unsafe_ptr=*__t1944t;
  uint64_t allocator__buf__unsafe_size=*__t1945t;
  uint16_t allocator__buf__unsafe_offset=*__t1946t;
  uint16_t allocator__buf__unsafe_align=*__t1947t;
  uint64_t allocator__length=*__t1948t;
  int __t732t=0;
  uint64_t __t733t=0;
  uint64_t __t734t__=0;
  uint64_t pos=0;
  uint64_t __t735t__=0;
  uint64_t prev_length=0;
  uint64_t __t736t__=0;
  char __t737t__=0;
  uint64_t __t738t=0;
  uint64_t __t739t__=0;
  uint64_t __t740t=0;
  uint64_t __t741t__=0;
  uint64_t __t742t__=0;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__unsafe_size=0;
  uint16_t __t743t__unsafe_offset=0;
  uint16_t __t743t__unsafe_align=0;
  char* __t744t__buf__unsafe_ptr=0;
  uint64_t __t744t__buf__unsafe_size=0;
  uint16_t __t744t__buf__unsafe_offset=0;
  uint16_t __t744t__buf__unsafe_align=0;
  uint64_t __t744t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t733t=0;
  add__t175t(allocator__length,__t733t,&__t734t__);
  pos=__t734t__;
  add__t175t(allocator__length,length,&__t735t__);
  prev_length=__t735t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t736t__);
  gt__t276t(prev_length,__t736t__,&__t737t__);
  if(__t737t__){
  __t738t=2;
  __t_errcode=div__t225t(prev_length,__t738t,&__t739t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t740t=1;
  add__t175t(__t739t__,__t740t,&__t741t__);
  add__t175t(prev_length,__t741t__,&__t742t__);
  __t_errcode=resize__t602t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t742t__,&__t743t__unsafe_ptr,&__t743t__unsafe_size,&__t743t__unsafe_offset,&__t743t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t743t__unsafe_ptr;
  allocator__buf__unsafe_size=__t743t__unsafe_size;
  allocator__buf__unsafe_offset=__t743t__unsafe_offset;
  allocator__buf__unsafe_align=__t743t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t744t__buf__unsafe_ptr,&__t744t__buf__unsafe_size,&__t744t__buf__unsafe_offset,&__t744t__buf__unsafe_align,&__t744t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1944t=allocator__buf__unsafe_ptr;
  *__t1945t=allocator__buf__unsafe_size;
  *__t1946t=allocator__buf__unsafe_offset;
  *__t1947t=allocator__buf__unsafe_align;
  *__t1948t=allocator__length;
  *__t1949t=__t744t__buf__unsafe_ptr;
  *__t1950t=__t744t__buf__unsafe_size;
  *__t1951t=__t744t__buf__unsafe_offset;
  *__t1952t=__t744t__buf__unsafe_align;
  *__t1953t=__t744t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t903t(char** __t1954t, uint64_t* __t1955t, uint16_t* __t1956t, uint16_t* __t1957t, uint64_t* __t1958t, const char* _other, char** __t1959t, uint64_t* __t1960t, uint64_t* __t1961t, char* __t1962t) {
  char* CHARS__buf__unsafe_ptr=*__t1954t;
  uint64_t CHARS__buf__unsafe_size=*__t1955t;
  uint16_t CHARS__buf__unsafe_offset=*__t1956t;
  uint16_t CHARS__buf__unsafe_align=*__t1957t;
  uint64_t CHARS__length=*__t1958t;
  char* __t904t__unsafe_ptr=0;
  uint64_t __t904t__dat__pos=0;
  uint64_t __t904t__dat__length=0;
  char __t904t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t905t__=0;
  char* __t906t__buf__unsafe_ptr=0;
  uint64_t __t906t__buf__unsafe_size=0;
  uint16_t __t906t__buf__unsafe_offset=0;
  uint16_t __t906t__buf__unsafe_align=0;
  uint64_t __t906t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t907t=0;
  char* __t908t__unsafe_ptr=0;
  uint64_t __t908t__dat__pos=0;
  uint64_t __t908t__dat__length=0;
  char __t908t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_other,&__t904t__unsafe_ptr,&__t904t__dat__pos,&__t904t__dat__length,&__t904t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t904t__unsafe_ptr;
  other__dat__pos=__t904t__dat__pos;
  other__dat__length=__t904t__dat__length;
  other__dat__first=__t904t__dat__first;
  len__t854t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t905t__);
  __t_errcode=alloc__t731t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__length,__t905t__,&__t906t__buf__unsafe_ptr,&__t906t__buf__unsafe_size,&__t906t__buf__unsafe_offset,&__t906t__buf__unsafe_align,&__t906t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t906t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t906t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t906t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t906t__buf__unsafe_align;
  surface__pos=__t906t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t907t=0;
  __t_errcode=str__t787t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,__t907t,other__dat__length,other__dat__first,&__t908t__unsafe_ptr,&__t908t__dat__pos,&__t908t__dat__length,&__t908t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1954t=CHARS__buf__unsafe_ptr;
  *__t1955t=CHARS__buf__unsafe_size;
  *__t1956t=CHARS__buf__unsafe_offset;
  *__t1957t=CHARS__buf__unsafe_align;
  *__t1958t=CHARS__length;
  *__t1959t=__t908t__unsafe_ptr;
  *__t1960t=__t908t__dat__pos;
  *__t1961t=__t908t__dat__length;
  *__t1962t=__t908t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1844t(char** __t1963t, uint64_t* __t1964t, uint64_t* __t1965t, char* __t1966t, char** __t1967t, uint64_t* __t1968t, uint64_t* __t1969t, char* __t1970t) {
  char* __t1847t__unsafe_ptr=0;
  uint64_t __t1847t__unsafe_size=0;
  uint16_t __t1847t__unsafe_offset=0;
  uint16_t __t1847t__unsafe_align=0;
  char* __t1848t__unsafe_ptr=0;
  uint64_t __t1848t__unsafe_size=0;
  uint16_t __t1848t__unsafe_offset=0;
  uint16_t __t1848t__unsafe_align=0;
  char* __t1849t__buf__unsafe_ptr=0;
  uint64_t __t1849t__buf__unsafe_size=0;
  uint16_t __t1849t__buf__unsafe_offset=0;
  uint16_t __t1849t__buf__unsafe_align=0;
  uint64_t __t1849t__length=0;
  char __t1850t____t673t____t534t__=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1851t=0;
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__unsafe_size=0;
  uint16_t __t1852t__unsafe_offset=0;
  uint16_t __t1852t__unsafe_align=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__dat__pos=0;
  uint64_t __t1854t__dat__length=0;
  char __t1854t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1856t__unsafe_ptr=0;
  uint64_t __t1856t__dat__pos=0;
  uint64_t __t1856t__dat__length=0;
  char __t1856t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1845t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align);
  __t1848t__unsafe_ptr=__t1847t__unsafe_ptr;
  __t1848t__unsafe_size=__t1847t__unsafe_size;
  __t1848t__unsafe_offset=__t1847t__unsafe_offset;
  __t1848t__unsafe_align=__t1847t__unsafe_align;
  __t_errcode=list__t670t(&__t1848t__unsafe_ptr,&__t1848t__unsafe_size,&__t1848t__unsafe_offset,&__t1848t__unsafe_align,&__t1849t__buf__unsafe_ptr,&__t1849t__buf__unsafe_size,&__t1849t__buf__unsafe_offset,&__t1849t__buf__unsafe_align,&__t1849t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1851t=100;
  __t_errcode=resize__t602t(&__t1849t__buf__unsafe_ptr,&__t1849t__buf__unsafe_size,&__t1849t__buf__unsafe_offset,&__t1849t__buf__unsafe_align,__t1851t,&__t1852t__unsafe_ptr,&__t1852t__unsafe_size,&__t1852t__unsafe_offset,&__t1852t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t903t(&__t1849t__buf__unsafe_ptr,&__t1849t__buf__unsafe_size,&__t1849t__buf__unsafe_offset,&__t1849t__buf__unsafe_align,&__t1849t__length,__t1853t,&__t1854t__unsafe_ptr,&__t1854t__dat__pos,&__t1854t__dat__length,&__t1854t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1854t__dat__pos;
  s1__dat__length=__t1854t__dat__length;
  s1__dat__first=__t1854t__dat__first;
  __t_errcode=copy__t903t(&__t1849t__buf__unsafe_ptr,&__t1849t__buf__unsafe_size,&__t1849t__buf__unsafe_offset,&__t1849t__buf__unsafe_align,&__t1849t__length,__t1855t,&__t1856t__unsafe_ptr,&__t1856t__dat__pos,&__t1856t__dat__length,&__t1856t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1856t__dat__pos;
  s2__dat__length=__t1856t__dat__length;
  s2__dat__first=__t1856t__dat__first;
  s1__unsafe_ptr=__t1849t__buf__unsafe_ptr;
  s2__unsafe_ptr=__t1849t__buf__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(s2__unsafe_ptr,&__t1850t____t673t____t534t__);
  if(__t1850t____t673t____t534t__){
  free__t503t(&s2__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1963t=s1__unsafe_ptr;
  *__t1964t=s1__dat__pos;
  *__t1965t=s1__dat__length;
  *__t1966t=s1__dat__first;
  *__t1967t=s2__unsafe_ptr;
  *__t1968t=s2__dat__pos;
  *__t1969t=s2__dat__length;
  *__t1970t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1857t() {
  char* __t1859t__s1__unsafe_ptr=0;
  uint64_t __t1859t__s1__dat__pos=0;
  uint64_t __t1859t__s1__dat__length=0;
  char __t1859t__s1__dat__first=0;
  char* __t1859t__s2__unsafe_ptr=0;
  uint64_t __t1859t__s2__dat__pos=0;
  uint64_t __t1859t__s2__dat__length=0;
  char __t1859t__s2__dat__first=0;
  char __t1860t____t1850t____t673t____t534t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1844t(&__t1859t__s1__unsafe_ptr,&__t1859t__s1__dat__pos,&__t1859t__s1__dat__length,&__t1859t__s1__dat__first,&__t1859t__s2__unsafe_ptr,&__t1859t__s2__dat__pos,&__t1859t__s2__dat__length,&__t1859t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1859t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1859t__s1__dat__pos;
  s__s1__dat__length=__t1859t__s1__dat__length;
  s__s1__dat__first=__t1859t__s1__dat__first;
  s__s2__unsafe_ptr=__t1859t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1859t__s2__dat__pos;
  s__s2__dat__length=__t1859t__s2__dat__length;
  s__s2__dat__first=__t1859t__s2__dat__first;
  print__t987t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t987t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1859t__s2__unsafe_ptr,&__t1860t____t1850t____t673t____t534t__);
  if(__t1860t____t1850t____t673t____t534t__){
  free__t503t(&__t1859t__s2__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1857t();return 0;}