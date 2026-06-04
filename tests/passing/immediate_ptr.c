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

static inline __attribute__((always_inline)) void float____buffer__t1849t(char** __t1862t, uint64_t* __t1863t, uint16_t* __t1864t, uint16_t* __t1865t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1862t=unsafe_ptr;
  *__t1863t=unsafe_size;
  *__t1864t=unsafe_offset;
  *__t1865t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1866t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1866t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1867t) {
  char* allocated=*__t1867t;
  if(allocated){
  free(allocated);
  }
  *__t1867t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1868t) {
  int value=0;
  *__t1868t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1869t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1869t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1870t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1870t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1871t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1871t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1872t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1872t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1873t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1873t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1874t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1874t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1875t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1875t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1876t) {
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
  *__t1876t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1877t, uint64_t* __t1878t, uint16_t* __t1879t, uint16_t* __t1880t, uint64_t size, char** __t1881t, uint64_t* __t1882t, uint16_t* __t1883t, uint16_t* __t1884t) {
  char* buffer__unsafe_ptr=*__t1877t;
  uint64_t buffer__unsafe_size=*__t1878t;
  uint16_t buffer__unsafe_offset=*__t1879t;
  uint16_t buffer__unsafe_align=*__t1880t;
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
  *__t1877t=buffer__unsafe_ptr;
  *__t1878t=buffer__unsafe_size;
  *__t1879t=buffer__unsafe_offset;
  *__t1880t=buffer__unsafe_align;
  *__t1881t=buffer__unsafe_ptr;
  *__t1882t=buffer__unsafe_size;
  *__t1883t=buffer__unsafe_offset;
  *__t1884t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1885t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1886t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1887t) {
  *__t1887t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1888t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1888t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1889t, uint64_t* __t1890t, uint16_t* __t1891t, uint16_t* __t1892t, uint64_t i, char** __t1893t) {
  char* buffer__unsafe_ptr=*__t1889t;
  uint64_t buffer__unsafe_size=*__t1890t;
  uint16_t buffer__unsafe_offset=*__t1891t;
  uint16_t buffer__unsafe_align=*__t1892t;
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
  *__t1889t=buffer__unsafe_ptr;
  *__t1890t=buffer__unsafe_size;
  *__t1891t=buffer__unsafe_offset;
  *__t1892t=buffer__unsafe_align;
  *__t1893t=__t639t__;
  
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
  double __t1846t=0;
  char* __t1851t__unsafe_ptr=0;
  uint64_t __t1851t__unsafe_size=0;
  uint16_t __t1851t__unsafe_offset=0;
  uint16_t __t1851t__unsafe_align=0;
  uint64_t __t1852t=0;
  char* __t1853t__unsafe_ptr=0;
  uint64_t __t1853t__unsafe_size=0;
  uint16_t __t1853t__unsafe_offset=0;
  uint16_t __t1853t__unsafe_align=0;
  char __t1854t____t534t__=0;
  uint64_t __t1855t=0;
  char* __t1856t__=0;
  char* element=0;
  double __t1857t____0=0;
  double __t1859t=0;
  double __t1860t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1846t=1.0;
  float____buffer__t1849t(&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align);
  __t1852t=1;
  __t_errcode=alloc__t532t(&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align,__t1852t,&__t1853t__unsafe_ptr,&__t1853t__unsafe_size,&__t1853t__unsafe_offset,&__t1853t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1851t__unsafe_ptr,&__t1846t,8);
  __t1855t=0;
  __t_errcode=mutget__t633t(&__t1851t__unsafe_ptr,&__t1851t__unsafe_size,&__t1851t__unsafe_offset,&__t1851t__unsafe_align,__t1855t,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  element=__t1856t__;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1857t____0,element,8);
  print__t385t(__t1857t____0);
  __t1859t=2.0;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(element,&__t1859t,8);
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1860t____0,element,8);
  print__t385t(__t1860t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1853t__unsafe_ptr,&__t1854t____t534t__);
  if(__t1854t____t534t__){
  free__t503t(&__t1853t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}