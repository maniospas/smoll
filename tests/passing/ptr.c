#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t1852t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1874t(char** __t1921t, uint64_t* __t1922t, uint16_t* __t1923t, uint16_t* __t1924t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1921t=unsafe_ptr;
  *__t1922t=unsafe_size;
  *__t1923t=unsafe_offset;
  *__t1924t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1925t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1925t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1926t) {
  char* allocated=*__t1926t;
  if(allocated){
  free(allocated);
  }
  *__t1926t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1927t) {
  int value=0;
  *__t1927t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1928t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1928t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1929t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1929t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1930t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1930t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1931t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1931t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1932t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1932t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1933t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1933t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1934t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1934t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1935t) {
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
  *__t1935t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1936t, uint64_t* __t1937t, uint16_t* __t1938t, uint16_t* __t1939t, uint64_t size, char** __t1940t, uint64_t* __t1941t, uint16_t* __t1942t, uint16_t* __t1943t) {
  char* buffer__unsafe_ptr=*__t1936t;
  uint64_t buffer__unsafe_size=*__t1937t;
  uint16_t buffer__unsafe_offset=*__t1938t;
  uint16_t buffer__unsafe_align=*__t1939t;
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
  *__t1936t=buffer__unsafe_ptr;
  *__t1937t=buffer__unsafe_size;
  *__t1938t=buffer__unsafe_offset;
  *__t1939t=buffer__unsafe_align;
  *__t1940t=buffer__unsafe_ptr;
  *__t1941t=buffer__unsafe_size;
  *__t1942t=buffer__unsafe_offset;
  *__t1943t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1944t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1944t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1945t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1945t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1946t) {
  *__t1946t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1947t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1947t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1948t, uint64_t* __t1949t, uint16_t* __t1950t, uint16_t* __t1951t, uint64_t i, char** __t1952t) {
  char* buffer__unsafe_ptr=*__t1948t;
  uint64_t buffer__unsafe_size=*__t1949t;
  uint16_t buffer__unsafe_offset=*__t1950t;
  uint16_t buffer__unsafe_align=*__t1951t;
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
  *__t1948t=buffer__unsafe_ptr;
  *__t1949t=buffer__unsafe_size;
  *__t1950t=buffer__unsafe_offset;
  *__t1951t=buffer__unsafe_align;
  *__t1952t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1953t) {
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
  *__t1953t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1954t) {
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
  *__t1954t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1955t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1955t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1956t, uint64_t* __t1957t, uint16_t* __t1958t, uint16_t* __t1959t, uint64_t size, char** __t1960t, uint64_t* __t1961t, uint16_t* __t1962t, uint16_t* __t1963t) {
  char* buffer__unsafe_ptr=*__t1956t;
  uint64_t buffer__unsafe_size=*__t1957t;
  uint16_t buffer__unsafe_offset=*__t1958t;
  uint16_t buffer__unsafe_align=*__t1959t;
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
  *__t1956t=buffer__unsafe_ptr;
  *__t1957t=buffer__unsafe_size;
  *__t1958t=buffer__unsafe_offset;
  *__t1959t=buffer__unsafe_align;
  *__t1960t=buffer__unsafe_ptr;
  *__t1961t=buffer__unsafe_size;
  *__t1962t=buffer__unsafe_offset;
  *__t1963t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1964t) {
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
  *__t1964t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t623t(char** __t1965t, uint64_t* __t1966t, uint16_t* __t1967t, uint16_t* __t1968t, char** __t1969t) {
  char* buffer__unsafe_ptr=*__t1965t;
  uint64_t buffer__unsafe_size=*__t1966t;
  uint16_t buffer__unsafe_offset=*__t1967t;
  uint16_t buffer__unsafe_align=*__t1968t;
  uint64_t __t624t=0;
  char __t625t__=0;
  uint64_t __t626t=0;
  uint64_t __t627t__=0;
  uint64_t __t628t__=0;
  uint64_t __t629t__=0;
  uint64_t __t630t__=0;
  uint64_t __t631t__=0;
  char* __t632t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t624t=0;
  eq__t120t(__t624t,buffer__unsafe_size,&__t625t__);
  if(__t625t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t626t=1;
  nat__t507t(buffer__unsafe_offset,&__t627t__);
  add__t175t(__t626t,__t627t__,&__t628t__);
  __t_errcode=sub__t352t(buffer__unsafe_size,__t628t__,&__t629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t630t__);
  mul__t199t(__t629t__,__t630t__,&__t631t__);
  add__t505t(buffer__unsafe_ptr,__t631t__,&__t632t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1965t=buffer__unsafe_ptr;
  *__t1966t=buffer__unsafe_size;
  *__t1967t=buffer__unsafe_offset;
  *__t1968t=buffer__unsafe_align;
  *__t1969t=__t632t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1893t(char** __t1970t, uint64_t* __t1971t, uint16_t* __t1972t, uint16_t* __t1973t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1970t=unsafe_ptr;
  *__t1971t=unsafe_size;
  *__t1972t=unsafe_offset;
  *__t1973t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1846t(char* f) {
  char* __t1848t=0;
  char* __t1850t=0;
  double __t1851t__=0;
  char* __t1855t=0;
  char* __t1857t=0;
  double __t1858t__=0;
  char* __t1861t=0;
  char* __t1863t=0;
  double __t1864t__=0;
  char* __t1867t=0;
  char* __t1869t=0;
  double __t1870t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1848t=f+0;
  if(!__t1848t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1850t=__t1848t+0;
  if(!__t1850t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1851t__,__t1850t,8);
  print__t383t(__t1851t__,__t1852t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1855t=f+0;
  if(!__t1855t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1857t=__t1855t+8;
  if(!__t1857t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1858t__,__t1857t,8);
  print__t383t(__t1858t__,__t1852t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1861t=f+16;
  if(!__t1861t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1863t=__t1861t+0;
  if(!__t1863t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1864t__,__t1863t,8);
  print__t383t(__t1864t__,__t1852t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1867t=f+16;
  if(!__t1867t){
  __t_errcode=2;
  goto __t_failure;
  }
  __t1869t=__t1867t+8;
  if(!__t1869t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1870t__,__t1869t,8);
  print__t385t(__t1870t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t1912t(char** __t1974t, uint64_t* __t1975t, uint16_t* __t1976t, uint16_t* __t1977t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1974t=unsafe_ptr;
  *__t1975t=unsafe_size;
  *__t1976t=unsafe_offset;
  *__t1977t=unsafe_align;
}

static inline __attribute__((always_inline)) int main__t1872t() {
  char* __t1876t__unsafe_ptr=0;
  uint64_t __t1876t__unsafe_size=0;
  uint16_t __t1876t__unsafe_offset=0;
  uint16_t __t1876t__unsafe_align=0;
  uint64_t __t1877t=0;
  char* __t1878t__unsafe_ptr=0;
  uint64_t __t1878t__unsafe_size=0;
  uint16_t __t1878t__unsafe_offset=0;
  uint16_t __t1878t__unsafe_align=0;
  char __t1879t____t534t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1880t=0;
  char* __t1881t__=0;
  double __t1882t=0;
  uint64_t __t1883t=0;
  char* __t1884t__=0;
  double __t1885t__value=0;
  uint64_t __t1887t=0;
  char* __t1888t__=0;
  char* f0=0;
  uint64_t __t1889t=0;
  char* __t1890t__unsafe_ptr=0;
  uint64_t __t1890t__unsafe_size=0;
  uint16_t __t1890t__unsafe_offset=0;
  uint16_t __t1890t__unsafe_align=0;
  char* __t1891t__=0;
  double __t1892t__value=0;
  char* __t1895t__unsafe_ptr=0;
  uint64_t __t1895t__unsafe_size=0;
  uint16_t __t1895t__unsafe_offset=0;
  uint16_t __t1895t__unsafe_align=0;
  char* __t1896t__unsafe_ptr=0;
  uint64_t __t1896t__unsafe_size=0;
  uint16_t __t1896t__unsafe_offset=0;
  uint16_t __t1896t__unsafe_align=0;
  uint64_t __t1897t=0;
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__unsafe_size=0;
  uint16_t __t1898t__unsafe_offset=0;
  uint16_t __t1898t__unsafe_align=0;
  char __t1899t____t534t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1900t=0;
  char* __t1901t__=0;
  double __t1902t=0;
  double __t1903t=0;
  double __t1904t=0;
  double __t1905t=0;
  uint64_t __t1906t=0;
  char* __t1907t__=0;
  double __t1909t=0;
  char* __t1914t__unsafe_ptr=0;
  uint64_t __t1914t__unsafe_size=0;
  uint16_t __t1914t__unsafe_offset=0;
  uint16_t __t1914t__unsafe_align=0;
  uint64_t __t1915t=0;
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__unsafe_size=0;
  uint16_t __t1916t__unsafe_offset=0;
  uint16_t __t1916t__unsafe_align=0;
  char __t1917t____t534t__=0;
  char* __t1918t__=0;
  char* n=0;
  double __t1919t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1874t(&__t1876t__unsafe_ptr,&__t1876t__unsafe_size,&__t1876t__unsafe_offset,&__t1876t__unsafe_align);
  __t1877t=1;
  __t_errcode=alloc__t532t(&__t1876t__unsafe_ptr,&__t1876t__unsafe_size,&__t1876t__unsafe_offset,&__t1876t__unsafe_align,__t1877t,&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1880t=0;
  __t_errcode=mutget__t633t(&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align,__t1880t,&__t1881t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1882t=1.0;
  if(!__t1881t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1881t__,&__t1882t,8);
  __t1883t=0;
  __t_errcode=get__t640t(__t1878t__unsafe_ptr,__t1878t__unsafe_size,__t1878t__unsafe_offset,__t1878t__unsafe_align,__t1883t,&__t1884t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1884t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1885t__value,__t1884t__,8);
  print__t385t(__t1885t__value);
  __t1887t=0;
  __t_errcode=mutget__t633t(&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align,__t1887t,&__t1888t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1888t__;
  __t1889t=2;
  __t_errcode=resize__t602t(&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align,__t1889t,&__t1890t__unsafe_ptr,&__t1890t__unsafe_size,&__t1890t__unsafe_offset,&__t1890t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t623t(&__t1878t__unsafe_ptr,&__t1878t__unsafe_size,&__t1878t__unsafe_offset,&__t1878t__unsafe_align,&__t1891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1892t__value,f0,8);
  if(!__t1891t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1891t__,&__t1892t__value,8);
  Field____t_buffer____buffer__t1893t(&__t1895t__unsafe_ptr,&__t1895t__unsafe_size,&__t1895t__unsafe_offset,&__t1895t__unsafe_align);
  __t1896t__unsafe_ptr=__t1895t__unsafe_ptr;
  __t1896t__unsafe_size=__t1895t__unsafe_size;
  __t1896t__unsafe_offset=__t1895t__unsafe_offset;
  __t1896t__unsafe_align=__t1895t__unsafe_align;
  __t1897t=1;
  __t_errcode=alloc__t532t(&__t1896t__unsafe_ptr,&__t1896t__unsafe_size,&__t1896t__unsafe_offset,&__t1896t__unsafe_align,__t1897t,&__t1898t__unsafe_ptr,&__t1898t__unsafe_size,&__t1898t__unsafe_offset,&__t1898t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1898t__unsafe_ptr;
  p__unsafe_size=__t1898t__unsafe_size;
  p__unsafe_offset=__t1898t__unsafe_offset;
  p__unsafe_align=__t1898t__unsafe_align;
  __t1900t=0;
  __t_errcode=mutget__t633t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1900t,&__t1901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1902t=1.0;
  __t1903t=2.0;
  __t1904t=3.0;
  __t1905t=4.0;
  if(!__t1901t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1901t__,&__t1902t,8);
  memcpy(__t1901t__+8,&__t1903t,8);
  memcpy(__t1901t__+16,&__t1904t,8);
  memcpy(__t1901t__+24,&__t1905t,8);
  __t1906t=0;
  __t_errcode=get__t640t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1906t,&__t1907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1846t(__t1907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1909t=1.0;
  float____buffer__t1912t(&__t1914t__unsafe_ptr,&__t1914t__unsafe_size,&__t1914t__unsafe_offset,&__t1914t__unsafe_align);
  __t1915t=1;
  __t_errcode=alloc__t532t(&__t1914t__unsafe_ptr,&__t1914t__unsafe_size,&__t1914t__unsafe_offset,&__t1914t__unsafe_align,__t1915t,&__t1916t__unsafe_ptr,&__t1916t__unsafe_size,&__t1916t__unsafe_offset,&__t1916t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1914t__unsafe_ptr,&__t1909t,8);
  __t_errcode=mutlast__t623t(&__t1914t__unsafe_ptr,&__t1914t__unsafe_size,&__t1914t__unsafe_offset,&__t1914t__unsafe_align,&__t1918t__);
  if(__t_errcode){
  goto __t_failure;
  }
  n=__t1918t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1919t____0,n,8);
  print__t385t(__t1919t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1916t__unsafe_ptr,&__t1917t____t534t__);
  if(__t1917t____t534t__){
  free__t503t(&__t1916t__unsafe_ptr);
  }
  exists__t447t(__t1898t__unsafe_ptr,&__t1899t____t534t__);
  if(__t1899t____t534t__){
  free__t503t(&__t1898t__unsafe_ptr);
  }
  exists__t447t(__t1878t__unsafe_ptr,&__t1879t____t534t__);
  if(__t1879t____t534t__){
  free__t503t(&__t1878t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1872t();return 0;}