#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t382t="\n";
const char* const __t1862t="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1845t(char** __t1882t, uint64_t* __t1883t, uint16_t* __t1884t, uint16_t* __t1885t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1882t=unsafe_ptr;
  *__t1883t=unsafe_size;
  *__t1884t=unsafe_offset;
  *__t1885t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1886t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1887t) {
  char* allocated=*__t1887t;
  if(allocated){
  free(allocated);
  }
  *__t1887t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1888t) {
  int value=0;
  *__t1888t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1889t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1889t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1890t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1890t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1891t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1891t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1892t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1892t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1893t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1893t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1894t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1894t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1895t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1896t) {
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
  *__t1896t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1897t, uint64_t* __t1898t, uint16_t* __t1899t, uint16_t* __t1900t, uint64_t size, char** __t1901t, uint64_t* __t1902t, uint16_t* __t1903t, uint16_t* __t1904t) {
  char* buffer__unsafe_ptr=*__t1897t;
  uint64_t buffer__unsafe_size=*__t1898t;
  uint16_t buffer__unsafe_offset=*__t1899t;
  uint16_t buffer__unsafe_align=*__t1900t;
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
  *__t1897t=buffer__unsafe_ptr;
  *__t1898t=buffer__unsafe_size;
  *__t1899t=buffer__unsafe_offset;
  *__t1900t=buffer__unsafe_align;
  *__t1901t=buffer__unsafe_ptr;
  *__t1902t=buffer__unsafe_size;
  *__t1903t=buffer__unsafe_offset;
  *__t1904t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1905t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1906t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1906t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1907t) {
  *__t1907t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1908t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1908t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1909t, uint64_t* __t1910t, uint16_t* __t1911t, uint16_t* __t1912t, uint64_t i, char** __t1913t) {
  char* buffer__unsafe_ptr=*__t1909t;
  uint64_t buffer__unsafe_size=*__t1910t;
  uint16_t buffer__unsafe_offset=*__t1911t;
  uint16_t buffer__unsafe_align=*__t1912t;
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
  *__t1909t=buffer__unsafe_ptr;
  *__t1910t=buffer__unsafe_size;
  *__t1911t=buffer__unsafe_offset;
  *__t1912t=buffer__unsafe_align;
  *__t1913t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1914t) {
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
  *__t1914t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1915t) {
  goto __t_return;
  __t_return:
  *__t1915t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1844t(char** __t1916t, uint64_t* __t1917t, uint16_t* __t1918t, uint16_t* __t1919t) {
  char* __t1847t__unsafe_ptr=0;
  uint64_t __t1847t__unsafe_size=0;
  uint16_t __t1847t__unsafe_offset=0;
  uint16_t __t1847t__unsafe_align=0;
  char* __t1848t__unsafe_ptr=0;
  uint64_t __t1848t__unsafe_size=0;
  uint16_t __t1848t__unsafe_offset=0;
  uint16_t __t1848t__unsafe_align=0;
  uint64_t __t1849t=0;
  char* __t1850t__unsafe_ptr=0;
  uint64_t __t1850t__unsafe_size=0;
  uint16_t __t1850t__unsafe_offset=0;
  uint16_t __t1850t__unsafe_align=0;
  char __t1851t____t534t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1852t=0;
  char* __t1853t__=0;
  double __t1854t=0;
  uint64_t __t1855t=0;
  char* __t1856t__=0;
  double __t1857t=0;
  uint64_t __t1858t=0;
  char* __t1859t__=0;
  double __t1860t__value=0;
  uint64_t __t1864t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1845t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align);
  __t1848t__unsafe_ptr=__t1847t__unsafe_ptr;
  __t1848t__unsafe_size=__t1847t__unsafe_size;
  __t1848t__unsafe_offset=__t1847t__unsafe_offset;
  __t1848t__unsafe_align=__t1847t__unsafe_align;
  __t1849t=2;
  __t_errcode=alloc__t532t(&__t1848t__unsafe_ptr,&__t1848t__unsafe_size,&__t1848t__unsafe_offset,&__t1848t__unsafe_align,__t1849t,&__t1850t__unsafe_ptr,&__t1850t__unsafe_size,&__t1850t__unsafe_offset,&__t1850t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1850t__unsafe_ptr;
  x__unsafe_size=__t1850t__unsafe_size;
  x__unsafe_offset=__t1850t__unsafe_offset;
  x__unsafe_align=__t1850t__unsafe_align;
  __t1852t=0;
  __t_errcode=mutget__t633t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1852t,&__t1853t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1854t=1.0;
  if(!__t1853t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1853t__,&__t1854t,8);
  __t1855t=1;
  __t_errcode=mutget__t633t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1855t,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1857t=2.0;
  if(!__t1856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1856t__,&__t1857t,8);
  __t1858t=1;
  __t_errcode=get__t640t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1858t,&__t1859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1859t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1860t__value,__t1859t__,8);
  print__t385t(__t1860t__value);
  goto __t_return;
  
  __t_failure:print__t378t(__t1862t,__t374t);
  len__t647t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t393t(x__unsafe_size);
  exists__t447t(x__unsafe_ptr,&__t1851t____t534t__);
  if(__t1851t____t534t__){
  free__t503t(&x__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1916t=x__unsafe_ptr;
  *__t1917t=x__unsafe_size;
  *__t1918t=x__unsafe_offset;
  *__t1919t=x__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1866t(char** __t1920t, uint64_t* __t1921t, uint16_t* __t1922t, uint16_t* __t1923t, char** __t1924t, uint64_t* __t1925t, uint16_t* __t1926t, uint16_t* __t1927t, char** __t1928t, uint64_t* __t1929t, uint16_t* __t1930t, uint16_t* __t1931t) {
  char* __t1867t__unsafe_ptr=0;
  uint64_t __t1867t__unsafe_size=0;
  uint16_t __t1867t__unsafe_offset=0;
  uint16_t __t1867t__unsafe_align=0;
  char __t1868t____t1851t____t534t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1869t__unsafe_ptr=0;
  uint64_t __t1869t__unsafe_size=0;
  uint16_t __t1869t__unsafe_offset=0;
  uint16_t __t1869t__unsafe_align=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__unsafe_size=0;
  uint16_t __t1870t__unsafe_offset=0;
  uint16_t __t1870t__unsafe_align=0;
  uint64_t __t1871t=0;
  char* __t1872t__unsafe_ptr=0;
  uint64_t __t1872t__unsafe_size=0;
  uint16_t __t1872t__unsafe_offset=0;
  uint16_t __t1872t__unsafe_align=0;
  char __t1873t____t534t__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1844t(&__t1867t__unsafe_ptr,&__t1867t__unsafe_size,&__t1867t__unsafe_offset,&__t1867t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1867t__unsafe_ptr;
  t__unsafe_size=__t1867t__unsafe_size;
  t__unsafe_offset=__t1867t__unsafe_offset;
  t__unsafe_align=__t1867t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1845t(&__t1869t__unsafe_ptr,&__t1869t__unsafe_size,&__t1869t__unsafe_offset,&__t1869t__unsafe_align);
  __t1870t__unsafe_ptr=__t1869t__unsafe_ptr;
  __t1870t__unsafe_size=__t1869t__unsafe_size;
  __t1870t__unsafe_offset=__t1869t__unsafe_offset;
  __t1870t__unsafe_align=__t1869t__unsafe_align;
  __t1871t=3;
  __t_errcode=alloc__t532t(&__t1870t__unsafe_ptr,&__t1870t__unsafe_size,&__t1870t__unsafe_offset,&__t1870t__unsafe_align,__t1871t,&__t1872t__unsafe_ptr,&__t1872t__unsafe_size,&__t1872t__unsafe_offset,&__t1872t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1872t__unsafe_ptr;
  k__unsafe_size=__t1872t__unsafe_size;
  k__unsafe_offset=__t1872t__unsafe_offset;
  k__unsafe_align=__t1872t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(k__unsafe_ptr,&__t1873t____t534t__);
  if(__t1873t____t534t__){
  free__t503t(&k__unsafe_ptr);
  }
  print__t378t(__t1862t,__t374t);
  len__t647t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t393t(t__unsafe_size);
  exists__t447t(t__unsafe_ptr,&__t1868t____t1851t____t534t__);
  if(__t1868t____t1851t____t534t__){
  free__t503t(&t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1920t=t__unsafe_ptr;
  *__t1921t=t__unsafe_size;
  *__t1922t=t__unsafe_offset;
  *__t1923t=t__unsafe_align;
  *__t1924t=j__unsafe_ptr;
  *__t1925t=j__unsafe_size;
  *__t1926t=j__unsafe_offset;
  *__t1927t=j__unsafe_align;
  *__t1928t=k__unsafe_ptr;
  *__t1929t=k__unsafe_size;
  *__t1930t=k__unsafe_offset;
  *__t1931t=k__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1874t() {
  char* __t1876t__t__unsafe_ptr=0;
  uint64_t __t1876t__t__unsafe_size=0;
  uint16_t __t1876t__t__unsafe_offset=0;
  uint16_t __t1876t__t__unsafe_align=0;
  char* __t1876t__j__unsafe_ptr=0;
  uint64_t __t1876t__j__unsafe_size=0;
  uint16_t __t1876t__j__unsafe_offset=0;
  uint16_t __t1876t__j__unsafe_align=0;
  char* __t1876t__k__unsafe_ptr=0;
  uint64_t __t1876t__k__unsafe_size=0;
  uint16_t __t1876t__k__unsafe_offset=0;
  uint16_t __t1876t__k__unsafe_align=0;
  char __t1877t____t1868t____t1851t____t534t__=0;
  char __t1877t____t1873t____t534t__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __t1878t=0;
  char* __t1879t__=0;
  double __t1880t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t1866t(&__t1876t__t__unsafe_ptr,&__t1876t__t__unsafe_size,&__t1876t__t__unsafe_offset,&__t1876t__t__unsafe_align,&__t1876t__j__unsafe_ptr,&__t1876t__j__unsafe_size,&__t1876t__j__unsafe_offset,&__t1876t__j__unsafe_align,&__t1876t__k__unsafe_ptr,&__t1876t__k__unsafe_size,&__t1876t__k__unsafe_offset,&__t1876t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1876t__t__unsafe_ptr;
  t__t__unsafe_size=__t1876t__t__unsafe_size;
  t__t__unsafe_offset=__t1876t__t__unsafe_offset;
  t__t__unsafe_align=__t1876t__t__unsafe_align;
  t__j__unsafe_ptr=__t1876t__j__unsafe_ptr;
  t__j__unsafe_size=__t1876t__j__unsafe_size;
  t__j__unsafe_offset=__t1876t__j__unsafe_offset;
  t__j__unsafe_align=__t1876t__j__unsafe_align;
  t__k__unsafe_ptr=__t1876t__k__unsafe_ptr;
  t__k__unsafe_size=__t1876t__k__unsafe_size;
  t__k__unsafe_offset=__t1876t__k__unsafe_offset;
  t__k__unsafe_align=__t1876t__k__unsafe_align;
  __t1878t=1;
  __t_errcode=get__t640t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1878t,&__t1879t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1879t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1880t__value,__t1879t__,8);
  print__t385t(__t1880t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1876t__k__unsafe_ptr,&__t1877t____t1873t____t534t__);
  if(__t1877t____t1873t____t534t__){
  free__t503t(&__t1876t__k__unsafe_ptr);
  }
  print__t378t(__t1862t,__t374t);
  len__t647t(__t1876t__t__unsafe_ptr,__t1876t__t__unsafe_size,__t1876t__t__unsafe_offset,__t1876t__t__unsafe_align,&__t1876t__t__unsafe_size);
  print__t393t(__t1876t__t__unsafe_size);
  exists__t447t(__t1876t__t__unsafe_ptr,&__t1877t____t1868t____t1851t____t534t__);
  if(__t1877t____t1868t____t1851t____t534t__){
  free__t503t(&__t1876t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1874t();return 0;}