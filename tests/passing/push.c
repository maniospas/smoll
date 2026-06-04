#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1846t(char** __t1872t, uint64_t* __t1873t, uint16_t* __t1874t, uint16_t* __t1875t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1872t=unsafe_ptr;
  *__t1873t=unsafe_size;
  *__t1874t=unsafe_offset;
  *__t1875t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1876t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1876t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1877t) {
  char* allocated=*__t1877t;
  if(allocated){
  free(allocated);
  }
  *__t1877t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1878t) {
  int value=0;
  *__t1878t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1879t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1879t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1880t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1880t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1881t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1881t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1882t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1882t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1883t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1883t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1884t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1884t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1885t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1886t) {
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
  *__t1886t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1887t, uint64_t* __t1888t, uint16_t* __t1889t, uint16_t* __t1890t, uint64_t size, char** __t1891t, uint64_t* __t1892t, uint16_t* __t1893t, uint16_t* __t1894t) {
  char* buffer__unsafe_ptr=*__t1887t;
  uint64_t buffer__unsafe_size=*__t1888t;
  uint16_t buffer__unsafe_offset=*__t1889t;
  uint16_t buffer__unsafe_align=*__t1890t;
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
  *__t1887t=buffer__unsafe_ptr;
  *__t1888t=buffer__unsafe_size;
  *__t1889t=buffer__unsafe_offset;
  *__t1890t=buffer__unsafe_align;
  *__t1891t=buffer__unsafe_ptr;
  *__t1892t=buffer__unsafe_size;
  *__t1893t=buffer__unsafe_offset;
  *__t1894t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1895t) {
  goto __t_return;
  __t_return:
  *__t1895t=buffer__unsafe_size;
}

int list__t670t(char** __t1896t, uint64_t* __t1897t, uint16_t* __t1898t, uint16_t* __t1899t, char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t, uint64_t* __t1904t) {
  char* _buf__unsafe_ptr=*__t1896t;
  uint64_t _buf__unsafe_size=*__t1897t;
  uint16_t _buf__unsafe_offset=*__t1898t;
  uint16_t _buf__unsafe_align=*__t1899t;
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
  *__t1896t=_buf__unsafe_ptr;
  *__t1897t=_buf__unsafe_size;
  *__t1898t=_buf__unsafe_offset;
  *__t1899t=_buf__unsafe_align;
  *__t1900t=buf__unsafe_ptr;
  *__t1901t=buf__unsafe_size;
  *__t1902t=buf__unsafe_offset;
  *__t1903t=buf__unsafe_align;
  *__t1904t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1905t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1906t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1906t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1907t) {
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
  *__t1907t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1908t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1909t) {
  *__t1909t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1910t) {
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
  *__t1910t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1911t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1911t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1912t, uint64_t* __t1913t, uint16_t* __t1914t, uint16_t* __t1915t, uint64_t size, char** __t1916t, uint64_t* __t1917t, uint16_t* __t1918t, uint16_t* __t1919t) {
  char* buffer__unsafe_ptr=*__t1912t;
  uint64_t buffer__unsafe_size=*__t1913t;
  uint16_t buffer__unsafe_offset=*__t1914t;
  uint16_t buffer__unsafe_align=*__t1915t;
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
  *__t1912t=buffer__unsafe_ptr;
  *__t1913t=buffer__unsafe_size;
  *__t1914t=buffer__unsafe_offset;
  *__t1915t=buffer__unsafe_align;
  *__t1916t=buffer__unsafe_ptr;
  *__t1917t=buffer__unsafe_size;
  *__t1918t=buffer__unsafe_offset;
  *__t1919t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t1920t, uint64_t* __t1921t, uint16_t* __t1922t, uint16_t* __t1923t, uint64_t pos, char** __t1924t, uint64_t* __t1925t, uint16_t* __t1926t, uint16_t* __t1927t, uint64_t* __t1928t) {
  char* buf__unsafe_ptr=*__t1920t;
  uint64_t buf__unsafe_size=*__t1921t;
  uint16_t buf__unsafe_offset=*__t1922t;
  uint16_t buf__unsafe_align=*__t1923t;
  goto __t_return;
  __t_return:
  *__t1920t=buf__unsafe_ptr;
  *__t1921t=buf__unsafe_size;
  *__t1922t=buf__unsafe_offset;
  *__t1923t=buf__unsafe_align;
  *__t1924t=buf__unsafe_ptr;
  *__t1925t=buf__unsafe_size;
  *__t1926t=buf__unsafe_offset;
  *__t1927t=buf__unsafe_align;
  *__t1928t=pos;
}

int alloc__t745t(char** __t1929t, uint64_t* __t1930t, uint16_t* __t1931t, uint16_t* __t1932t, uint64_t* __t1933t, char** __t1934t, uint64_t* __t1935t, uint16_t* __t1936t, uint16_t* __t1937t, uint64_t* __t1938t) {
  char* allocator__buf__unsafe_ptr=*__t1929t;
  uint64_t allocator__buf__unsafe_size=*__t1930t;
  uint16_t allocator__buf__unsafe_offset=*__t1931t;
  uint16_t allocator__buf__unsafe_align=*__t1932t;
  uint64_t allocator__length=*__t1933t;
  int __t746t=0;
  uint64_t __t747t=0;
  uint64_t length=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t pos=0;
  uint64_t __t750t__=0;
  uint64_t prev_length=0;
  uint64_t __t751t__=0;
  char __t752t__=0;
  uint64_t __t753t=0;
  uint64_t __t754t__=0;
  uint64_t __t755t=0;
  uint64_t __t756t__=0;
  uint64_t __t757t__=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__unsafe_size=0;
  uint16_t __t758t__unsafe_offset=0;
  uint16_t __t758t__unsafe_align=0;
  char* __t759t__buf__unsafe_ptr=0;
  uint64_t __t759t__buf__unsafe_size=0;
  uint16_t __t759t__buf__unsafe_offset=0;
  uint16_t __t759t__buf__unsafe_align=0;
  uint64_t __t759t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t747t=1;
  length=__t747t;
  __t748t=0;
  add__t175t(allocator__length,__t748t,&__t749t__);
  pos=__t749t__;
  add__t175t(allocator__length,length,&__t750t__);
  prev_length=__t750t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t751t__);
  gt__t276t(prev_length,__t751t__,&__t752t__);
  if(__t752t__){
  __t753t=2;
  __t_errcode=div__t225t(prev_length,__t753t,&__t754t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t755t=1;
  add__t175t(__t754t__,__t755t,&__t756t__);
  add__t175t(prev_length,__t756t__,&__t757t__);
  __t_errcode=resize__t602t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t757t__,&__t758t__unsafe_ptr,&__t758t__unsafe_size,&__t758t__unsafe_offset,&__t758t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t758t__unsafe_ptr;
  allocator__buf__unsafe_size=__t758t__unsafe_size;
  allocator__buf__unsafe_offset=__t758t__unsafe_offset;
  allocator__buf__unsafe_align=__t758t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t759t__buf__unsafe_ptr,&__t759t__buf__unsafe_size,&__t759t__buf__unsafe_offset,&__t759t__buf__unsafe_align,&__t759t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1929t=allocator__buf__unsafe_ptr;
  *__t1930t=allocator__buf__unsafe_size;
  *__t1931t=allocator__buf__unsafe_offset;
  *__t1932t=allocator__buf__unsafe_align;
  *__t1933t=allocator__length;
  *__t1934t=__t759t__buf__unsafe_ptr;
  *__t1935t=__t759t__buf__unsafe_size;
  *__t1936t=__t759t__buf__unsafe_offset;
  *__t1937t=__t759t__buf__unsafe_align;
  *__t1938t=__t759t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1939t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1939t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1940t, uint64_t* __t1941t, uint16_t* __t1942t, uint16_t* __t1943t, uint64_t i, char** __t1944t) {
  char* buffer__unsafe_ptr=*__t1940t;
  uint64_t buffer__unsafe_size=*__t1941t;
  uint16_t buffer__unsafe_offset=*__t1942t;
  uint16_t buffer__unsafe_align=*__t1943t;
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
  *__t1940t=buffer__unsafe_ptr;
  *__t1941t=buffer__unsafe_size;
  *__t1942t=buffer__unsafe_offset;
  *__t1943t=buffer__unsafe_align;
  *__t1944t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t760t(char** __t1945t, uint64_t* __t1946t, uint16_t* __t1947t, uint16_t* __t1948t, uint64_t surface__pos, char** __t1949t) {
  char* surface__buf__unsafe_ptr=*__t1945t;
  uint64_t surface__buf__unsafe_size=*__t1946t;
  uint16_t surface__buf__unsafe_offset=*__t1947t;
  uint16_t surface__buf__unsafe_align=*__t1948t;
  char* __t761t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t633t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t761t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1945t=surface__buf__unsafe_ptr;
  *__t1946t=surface__buf__unsafe_size;
  *__t1947t=surface__buf__unsafe_offset;
  *__t1948t=surface__buf__unsafe_align;
  *__t1949t=__t761t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t683t(char** __t1950t, uint64_t* __t1951t, uint16_t* __t1952t, uint16_t* __t1953t, uint64_t* __t1954t, uint64_t pos, char** __t1955t) {
  char* self__buf__unsafe_ptr=*__t1950t;
  uint64_t self__buf__unsafe_size=*__t1951t;
  uint16_t self__buf__unsafe_offset=*__t1952t;
  uint16_t self__buf__unsafe_align=*__t1953t;
  uint64_t self__length=*__t1954t;
  char* __t684t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t633t(&self__buf__unsafe_ptr,&self__buf__unsafe_size,&self__buf__unsafe_offset,&self__buf__unsafe_align,pos,&__t684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1950t=self__buf__unsafe_ptr;
  *__t1951t=self__buf__unsafe_size;
  *__t1952t=self__buf__unsafe_offset;
  *__t1953t=self__buf__unsafe_align;
  *__t1954t=self__length;
  *__t1955t=__t684t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1956t) {
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
  *__t1956t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t679t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint16_t self__buf__unsafe_offset, uint16_t self__buf__unsafe_align, uint64_t self__length, uint64_t pos, char** __t1957t) {
  char* __t680t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t640t(self__buf__unsafe_ptr,self__buf__unsafe_size,self__buf__unsafe_offset,self__buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1957t=__t680t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1844t() {
  char* __t1848t__unsafe_ptr=0;
  uint64_t __t1848t__unsafe_size=0;
  uint16_t __t1848t__unsafe_offset=0;
  uint16_t __t1848t__unsafe_align=0;
  char* __t1849t__unsafe_ptr=0;
  uint64_t __t1849t__unsafe_size=0;
  uint16_t __t1849t__unsafe_offset=0;
  uint16_t __t1849t__unsafe_align=0;
  char* __t1850t__buf__unsafe_ptr=0;
  uint64_t __t1850t__buf__unsafe_size=0;
  uint16_t __t1850t__buf__unsafe_offset=0;
  uint16_t __t1850t__buf__unsafe_align=0;
  uint64_t __t1850t__length=0;
  char __t1851t____t673t____t534t__=0;
  char* li__buf__unsafe_ptr=0;
  uint64_t li__buf__unsafe_size=0;
  uint16_t li__buf__unsafe_offset=0;
  uint16_t li__buf__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1852t__buf__unsafe_ptr=0;
  uint64_t __t1852t__buf__unsafe_size=0;
  uint16_t __t1852t__buf__unsafe_offset=0;
  uint16_t __t1852t__buf__unsafe_align=0;
  uint64_t __t1852t__pos=0;
  char* __t1853t__=0;
  double __t1854t=0;
  char* __t1855t__buf__unsafe_ptr=0;
  uint64_t __t1855t__buf__unsafe_size=0;
  uint16_t __t1855t__buf__unsafe_offset=0;
  uint16_t __t1855t__buf__unsafe_align=0;
  uint64_t __t1855t__pos=0;
  char* __t1856t__=0;
  double __t1857t=0;
  char* __t1858t__buf__unsafe_ptr=0;
  uint64_t __t1858t__buf__unsafe_size=0;
  uint16_t __t1858t__buf__unsafe_offset=0;
  uint16_t __t1858t__buf__unsafe_align=0;
  uint64_t __t1858t__pos=0;
  char* __t1859t__=0;
  double __t1860t=0;
  uint64_t __t1861t=0;
  char* __t1862t__=0;
  double __t1863t=0;
  uint64_t __t1864t=0;
  char* __t1865t__=0;
  double __t1866t__value=0;
  uint64_t __t1868t=0;
  char* __t1869t__=0;
  double __t1870t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1846t(&__t1848t__unsafe_ptr,&__t1848t__unsafe_size,&__t1848t__unsafe_offset,&__t1848t__unsafe_align);
  __t1849t__unsafe_ptr=__t1848t__unsafe_ptr;
  __t1849t__unsafe_size=__t1848t__unsafe_size;
  __t1849t__unsafe_offset=__t1848t__unsafe_offset;
  __t1849t__unsafe_align=__t1848t__unsafe_align;
  __t_errcode=list__t670t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1850t__buf__unsafe_ptr,&__t1850t__buf__unsafe_size,&__t1850t__buf__unsafe_offset,&__t1850t__buf__unsafe_align,&__t1850t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=alloc__t745t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1849t__unsafe_size,&__t1852t__buf__unsafe_ptr,&__t1852t__buf__unsafe_size,&__t1852t__buf__unsafe_offset,&__t1852t__buf__unsafe_align,&__t1852t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1852t__pos,&__t1853t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1854t=0.1;
  if(!__t1853t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1853t__,&__t1854t,8);
  __t_errcode=alloc__t745t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1849t__unsafe_size,&__t1855t__buf__unsafe_ptr,&__t1855t__buf__unsafe_size,&__t1855t__buf__unsafe_offset,&__t1855t__buf__unsafe_align,&__t1855t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1855t__pos,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1857t=0.1;
  if(!__t1856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1856t__,&__t1857t,8);
  __t_errcode=alloc__t745t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1849t__unsafe_size,&__t1858t__buf__unsafe_ptr,&__t1858t__buf__unsafe_size,&__t1858t__buf__unsafe_offset,&__t1858t__buf__unsafe_align,&__t1858t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t760t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1858t__pos,&__t1859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1860t=0.1;
  if(!__t1859t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1859t__,&__t1860t,8);
  __t1861t=1;
  __t_errcode=mutget__t683t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,&__t1849t__unsafe_size,__t1861t,&__t1862t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1863t=0.2;
  if(!__t1862t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1862t__,&__t1863t,8);
  __t1864t=0;
  __t_errcode=get__t679t(__t1849t__unsafe_ptr,__t1849t__unsafe_size,__t1849t__unsafe_offset,__t1849t__unsafe_align,__t1849t__unsafe_size,__t1864t,&__t1865t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1865t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1866t__value,__t1865t__,8);
  print__t385t(__t1866t__value);
  __t1868t=1;
  __t_errcode=get__t679t(__t1849t__unsafe_ptr,__t1849t__unsafe_size,__t1849t__unsafe_offset,__t1849t__unsafe_align,__t1849t__unsafe_size,__t1868t,&__t1869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1869t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1870t__value,__t1869t__,8);
  print__t385t(__t1870t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1850t__buf__unsafe_ptr,&__t1851t____t673t____t534t__);
  if(__t1851t____t673t____t534t__){
  free__t503t(&__t1850t__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}