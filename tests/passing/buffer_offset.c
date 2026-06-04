#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1864t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1869t(char** __t1895t, uint64_t* __t1896t, uint16_t* __t1897t, uint16_t* __t1898t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1895t=unsafe_ptr;
  *__t1896t=unsafe_size;
  *__t1897t=unsafe_offset;
  *__t1898t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1899t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1899t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1900t) {
  char* allocated=*__t1900t;
  if(allocated){
  free(allocated);
  }
  *__t1900t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1901t) {
  int value=0;
  *__t1901t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1902t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1902t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1903t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1903t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1904t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1904t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1905t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1906t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1906t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1907t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1907t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1908t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1909t) {
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
  *__t1909t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1910t, uint64_t* __t1911t, uint16_t* __t1912t, uint16_t* __t1913t, uint64_t size, char** __t1914t, uint64_t* __t1915t, uint16_t* __t1916t, uint16_t* __t1917t) {
  char* buffer__unsafe_ptr=*__t1910t;
  uint64_t buffer__unsafe_size=*__t1911t;
  uint16_t buffer__unsafe_offset=*__t1912t;
  uint16_t buffer__unsafe_align=*__t1913t;
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
  *__t1910t=buffer__unsafe_ptr;
  *__t1911t=buffer__unsafe_size;
  *__t1912t=buffer__unsafe_offset;
  *__t1913t=buffer__unsafe_align;
  *__t1914t=buffer__unsafe_ptr;
  *__t1915t=buffer__unsafe_size;
  *__t1916t=buffer__unsafe_offset;
  *__t1917t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1918t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1918t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1919t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1919t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1920t) {
  *__t1920t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1921t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1921t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1922t, uint64_t* __t1923t, uint16_t* __t1924t, uint16_t* __t1925t, uint64_t i, char** __t1926t) {
  char* buffer__unsafe_ptr=*__t1922t;
  uint64_t buffer__unsafe_size=*__t1923t;
  uint16_t buffer__unsafe_offset=*__t1924t;
  uint16_t buffer__unsafe_align=*__t1925t;
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
  *__t1922t=buffer__unsafe_ptr;
  *__t1923t=buffer__unsafe_size;
  *__t1924t=buffer__unsafe_offset;
  *__t1925t=buffer__unsafe_align;
  *__t1926t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1844t(double x, double y, double* __t1927t, double* __t1928t) {
  goto __t_return;
  __t_return:
  *__t1927t=x;
  *__t1928t=y;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1862t(double x, double y, double z, double* __t1929t, double* __t1930t, double* __t1931t) {
  double __t1863t__x=0;
  double __t1863t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1844t(x,y,&__t1863t__x,&__t1863t__y);
  plane__x=__t1863t__x;
  plane__y=__t1863t__y;
  print__t380t(__t1864t);
  goto __t_return;
  __t_return:
  *__t1929t=plane__x;
  *__t1930t=plane__y;
  *__t1931t=z;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1932t) {
  goto __t_return;
  __t_return:
  *__t1932t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1933t, uint64_t* __t1934t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1933t=from;
  *__t1934t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1935t, uint64_t* __t1936t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1935t=__t473t__from;
  *__t1936t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t1937t, uint64_t r__to, uint64_t* __t1938t) {
  uint64_t r__from=*__t1937t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1937t=r__from;
  *__t1938t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1939t) {
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
  *__t1939t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1940t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1940t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1941t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1941t=z;
}

static inline __attribute__((always_inline)) int sum__t1847t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1942t, double* __t1943t) {
  double __t1848t=0;
  double __t1849t=0;
  double x=0;
  double __t1850t=0;
  double __t1851t=0;
  double y=0;
  uint64_t __t1852t__=0;
  uint64_t __t1853t__from=0;
  uint64_t __t1853t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1854t=0;
  uint64_t __t1855t__=0;
  uint64_t i=0;
  char* __t1856t__=0;
  double __t1857t__x=0;
  double __t1857t__y=0;
  double __t1858t__=0;
  char* __t1859t__=0;
  double __t1860t__x=0;
  double __t1860t__y=0;
  double __t1861t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1848t=0.0;
  __t1849t=__t1848t;
  x=__t1849t;
  __t1850t=0.0;
  __t1851t=__t1850t;
  y=__t1851t;
  len__t647t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1852t__);
  range__t471t(__t1852t__,&__t1853t__from,&__t1853t__to);
  it__from=__t1853t__from;
  it__to=__t1853t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t1855t__);
  __t1854t=__t_complain;
  i=__t1855t__;
  __t1854t=__t1854t==0;
  if(!__t1854t){
  break;
  }
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1857t__x,__t1856t__,8);
  memcpy(&__t1857t__y,__t1856t__+8,8);
  add__t153t(x,__t1857t__x,&__t1858t__);
  x=__t1858t__;
  __t_errcode=get__t640t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1859t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1860t__x,__t1859t__,8);
  memcpy(&__t1860t__y,__t1859t__+8,8);
  add__t153t(y,__t1860t__y,&__t1861t__);
  y=__t1861t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1942t=x;
  *__t1943t=y;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1867t() {
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__unsafe_size=0;
  uint16_t __t1871t__unsafe_offset=0;
  uint16_t __t1871t__unsafe_align=0;
  char* __t1872t__unsafe_ptr=0;
  uint64_t __t1872t__unsafe_size=0;
  uint16_t __t1872t__unsafe_offset=0;
  uint16_t __t1872t__unsafe_align=0;
  uint64_t __t1873t=0;
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__unsafe_size=0;
  uint16_t __t1874t__unsafe_offset=0;
  uint16_t __t1874t__unsafe_align=0;
  char __t1875t____t534t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1876t=0;
  char* __t1877t__=0;
  double __t1878t=0;
  double __t1879t=0;
  double __t1880t=0;
  double __t1881t__plane__x=0;
  double __t1881t__plane__y=0;
  double __t1881t__z=0;
  uint64_t __t1882t=0;
  char* __t1883t__=0;
  double __t1884t=0;
  double __t1885t=0;
  double __t1886t=0;
  double __t1887t__plane__x=0;
  double __t1887t__plane__y=0;
  double __t1887t__z=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__unsafe_size=0;
  uint16_t __t1888t__unsafe_offset=0;
  uint16_t __t1888t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1892t__x=0;
  double __t1892t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1869t(&__t1871t__unsafe_ptr,&__t1871t__unsafe_size,&__t1871t__unsafe_offset,&__t1871t__unsafe_align);
  __t1872t__unsafe_ptr=__t1871t__unsafe_ptr;
  __t1872t__unsafe_size=__t1871t__unsafe_size;
  __t1872t__unsafe_offset=__t1871t__unsafe_offset;
  __t1872t__unsafe_align=__t1871t__unsafe_align;
  __t1873t=10;
  __t_errcode=alloc__t532t(&__t1872t__unsafe_ptr,&__t1872t__unsafe_size,&__t1872t__unsafe_offset,&__t1872t__unsafe_align,__t1873t,&__t1874t__unsafe_ptr,&__t1874t__unsafe_size,&__t1874t__unsafe_offset,&__t1874t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1874t__unsafe_ptr;
  points__unsafe_size=__t1874t__unsafe_size;
  points__unsafe_offset=__t1874t__unsafe_offset;
  points__unsafe_align=__t1874t__unsafe_align;
  __t1876t=0;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1876t,&__t1877t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1878t=1.0;
  __t1879t=2.0;
  __t1880t=3.0;
  Point3D__t1862t(__t1878t,__t1879t,__t1880t,&__t1881t__plane__x,&__t1881t__plane__y,&__t1881t__z);
  if(!__t1877t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1877t__,&__t1881t__plane__x,8);
  memcpy(__t1877t__+8,&__t1881t__plane__y,8);
  memcpy(__t1877t__+16,&__t1881t__z,8);
  __t1882t=1;
  __t_errcode=mutget__t633t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1882t,&__t1883t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1884t=1.0;
  __t1885t=2.0;
  __t1886t=3.0;
  Point3D__t1862t(__t1884t,__t1885t,__t1886t,&__t1887t__plane__x,&__t1887t__plane__y,&__t1887t__z);
  if(!__t1883t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1883t__,&__t1887t__plane__x,8);
  memcpy(__t1883t__+8,&__t1887t__plane__y,8);
  memcpy(__t1883t__+16,&__t1887t__z,8);
  __t1888t__unsafe_ptr=points__unsafe_ptr;
  __t1888t__unsafe_size=points__unsafe_size;
  __t1888t__unsafe_offset=points__unsafe_offset+0;
  __t1888t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1888t__unsafe_ptr;
  plane__unsafe_size=__t1888t__unsafe_size;
  plane__unsafe_offset=__t1888t__unsafe_offset;
  plane__unsafe_align=__t1888t__unsafe_align;
  __t_errcode=sum__t1847t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1892t__x,&__t1892t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1892t__x;
  sums__y=__t1892t__y;
  print__t385t(sums__x);
  print__t385t(sums__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1874t__unsafe_ptr,&__t1875t____t534t__);
  if(__t1875t____t534t__){
  free__t503t(&__t1874t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1867t();return 0;}