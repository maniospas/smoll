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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1846t(char** __t1866t, uint64_t* __t1867t, uint16_t* __t1868t, uint16_t* __t1869t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1866t=unsafe_ptr;
  *__t1867t=unsafe_size;
  *__t1868t=unsafe_offset;
  *__t1869t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1870t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1870t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1871t) {
  char* allocated=*__t1871t;
  if(allocated){
  free(allocated);
  }
  *__t1871t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1872t) {
  int value=0;
  *__t1872t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1873t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1873t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1874t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1874t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1875t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1875t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1876t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1876t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1877t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1877t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1878t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1878t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1879t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1879t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1880t) {
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
  *__t1880t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1881t, uint64_t* __t1882t, uint16_t* __t1883t, uint16_t* __t1884t, uint64_t size, char** __t1885t, uint64_t* __t1886t, uint16_t* __t1887t, uint16_t* __t1888t) {
  char* buffer__unsafe_ptr=*__t1881t;
  uint64_t buffer__unsafe_size=*__t1882t;
  uint16_t buffer__unsafe_offset=*__t1883t;
  uint16_t buffer__unsafe_align=*__t1884t;
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
  *__t1881t=buffer__unsafe_ptr;
  *__t1882t=buffer__unsafe_size;
  *__t1883t=buffer__unsafe_offset;
  *__t1884t=buffer__unsafe_align;
  *__t1885t=buffer__unsafe_ptr;
  *__t1886t=buffer__unsafe_size;
  *__t1887t=buffer__unsafe_offset;
  *__t1888t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1889t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1889t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1890t) {
  *__t1890t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1891t) {
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
  *__t1891t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1892t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1892t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1893t, uint64_t* __t1894t, uint16_t* __t1895t, uint16_t* __t1896t, uint64_t size, char** __t1897t, uint64_t* __t1898t, uint16_t* __t1899t, uint16_t* __t1900t) {
  char* buffer__unsafe_ptr=*__t1893t;
  uint64_t buffer__unsafe_size=*__t1894t;
  uint16_t buffer__unsafe_offset=*__t1895t;
  uint16_t buffer__unsafe_align=*__t1896t;
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
  *__t1893t=buffer__unsafe_ptr;
  *__t1894t=buffer__unsafe_size;
  *__t1895t=buffer__unsafe_offset;
  *__t1896t=buffer__unsafe_align;
  *__t1897t=buffer__unsafe_ptr;
  *__t1898t=buffer__unsafe_size;
  *__t1899t=buffer__unsafe_offset;
  *__t1900t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
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

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1902t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1902t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1903t, uint64_t* __t1904t, uint16_t* __t1905t, uint16_t* __t1906t, uint64_t i, char** __t1907t) {
  char* buffer__unsafe_ptr=*__t1903t;
  uint64_t buffer__unsafe_size=*__t1904t;
  uint16_t buffer__unsafe_offset=*__t1905t;
  uint16_t buffer__unsafe_align=*__t1906t;
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
  *__t1903t=buffer__unsafe_ptr;
  *__t1904t=buffer__unsafe_size;
  *__t1905t=buffer__unsafe_offset;
  *__t1906t=buffer__unsafe_align;
  *__t1907t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1908t) {
  goto __t_return;
  __t_return:
  *__t1908t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1909t) {
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
  *__t1909t=__t646t__;
  
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
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t1850t=0;
  char* __t1851t__unsafe_ptr=0;
  uint64_t __t1851t__unsafe_size=0;
  uint16_t __t1851t__unsafe_offset=0;
  uint16_t __t1851t__unsafe_align=0;
  char __t1852t____t534t__=0;
  uint64_t __t1853t=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__unsafe_size=0;
  uint16_t __t1854t__unsafe_offset=0;
  uint16_t __t1854t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t1855t=0;
  char* __t1856t__=0;
  double __t1857t=0;
  uint64_t __t1858t__=0;
  uint64_t __t1860t__=0;
  uint64_t __t1862t=0;
  char* __t1863t__=0;
  double __t1864t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1846t(&__t1848t__unsafe_ptr,&__t1848t__unsafe_size,&__t1848t__unsafe_offset,&__t1848t__unsafe_align);
  __t1849t__unsafe_ptr=__t1848t__unsafe_ptr;
  __t1849t__unsafe_size=__t1848t__unsafe_size;
  __t1849t__unsafe_offset=__t1848t__unsafe_offset;
  __t1849t__unsafe_align=__t1848t__unsafe_align;
  __t1850t=20;
  __t_errcode=alloc__t532t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1850t,&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1853t=10;
  __t_errcode=resize__t602t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1853t,&__t1854t__unsafe_ptr,&__t1854t__unsafe_size,&__t1854t__unsafe_offset,&__t1854t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1855t=0;
  __t_errcode=mutget__t633t(&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align,__t1855t,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1857t=1.0;
  if(!__t1856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1856t__,&__t1857t,8);
  len__t647t(__t1849t__unsafe_ptr,__t1849t__unsafe_size,__t1849t__unsafe_offset,__t1849t__unsafe_align,&__t1858t__);
  print__t393t(__t1849t__unsafe_size);
  len__t647t(__t1849t__unsafe_ptr,__t1849t__unsafe_size,__t1849t__unsafe_offset,__t1849t__unsafe_align,&__t1860t__);
  print__t393t(__t1849t__unsafe_size);
  __t1862t=0;
  __t_errcode=get__t640t(__t1849t__unsafe_ptr,__t1849t__unsafe_size,__t1849t__unsafe_offset,__t1849t__unsafe_align,__t1862t,&__t1863t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1863t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1864t__value,__t1863t__,8);
  print__t385t(__t1864t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1851t__unsafe_ptr,&__t1852t____t534t__);
  if(__t1852t____t534t__){
  free__t503t(&__t1851t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}