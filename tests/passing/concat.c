#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1920t="is";
const char* const __t1908t="hi";
const char* const __t1895t=" ";
const char* const __t1916t="name";
const char* const __t1924t="manios";
const char* const __t1912t="my";
const char* const __t382t="\n";
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1876t(char** __t1940t, uint64_t* __t1941t, uint16_t* __t1942t, uint16_t* __t1943t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1940t=unsafe_ptr;
  *__t1941t=unsafe_size;
  *__t1942t=unsafe_offset;
  *__t1943t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1944t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1944t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1945t) {
  char* allocated=*__t1945t;
  if(allocated){
  free(allocated);
  }
  *__t1945t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1946t) {
  int value=0;
  *__t1946t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1947t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1947t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1948t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1948t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1949t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1949t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1950t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1950t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1951t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1951t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1952t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1952t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1953t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1953t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1954t) {
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
  *__t1954t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1955t, uint64_t* __t1956t, uint16_t* __t1957t, uint16_t* __t1958t, uint64_t size, char** __t1959t, uint64_t* __t1960t, uint16_t* __t1961t, uint16_t* __t1962t) {
  char* buffer__unsafe_ptr=*__t1955t;
  uint64_t buffer__unsafe_size=*__t1956t;
  uint16_t buffer__unsafe_offset=*__t1957t;
  uint16_t buffer__unsafe_align=*__t1958t;
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
  *__t1955t=buffer__unsafe_ptr;
  *__t1956t=buffer__unsafe_size;
  *__t1957t=buffer__unsafe_offset;
  *__t1958t=buffer__unsafe_align;
  *__t1959t=buffer__unsafe_ptr;
  *__t1960t=buffer__unsafe_size;
  *__t1961t=buffer__unsafe_offset;
  *__t1962t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1963t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1963t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1964t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1964t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1965t) {
  *__t1965t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1966t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1966t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1967t, uint64_t* __t1968t, uint16_t* __t1969t, uint16_t* __t1970t, uint64_t i, char** __t1971t) {
  char* buffer__unsafe_ptr=*__t1967t;
  uint64_t buffer__unsafe_size=*__t1968t;
  uint16_t buffer__unsafe_offset=*__t1969t;
  uint16_t buffer__unsafe_align=*__t1970t;
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
  *__t1967t=buffer__unsafe_ptr;
  *__t1968t=buffer__unsafe_size;
  *__t1969t=buffer__unsafe_offset;
  *__t1970t=buffer__unsafe_align;
  *__t1971t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1972t, uint64_t* __t1973t, uint16_t* __t1974t, uint16_t* __t1975t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1972t=unsafe_ptr;
  *__t1973t=unsafe_size;
  *__t1974t=unsafe_offset;
  *__t1975t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1976t) {
  *__t1976t=to;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1977t) {
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
  *__t1977t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1978t, uint64_t* __t1979t, uint64_t* __t1980t, char* __t1981t) {
  goto __t_return;
  __t_return:
  *__t1978t=unsafe_ptr;
  *__t1979t=dat__pos;
  *__t1980t=dat__length;
  *__t1981t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1982t, uint64_t* __t1983t, uint64_t* __t1984t, char* __t1985t) {
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
  *__t1982t=__t794t__unsafe_ptr;
  *__t1983t=__t794t__dat__pos;
  *__t1984t=__t794t__dat__length;
  *__t1985t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1986t, uint64_t* __t1987t, uint64_t* __t1988t, char* __t1989t) {
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
  *__t1986t=__t827t__unsafe_ptr;
  *__t1987t=__t827t__dat__pos;
  *__t1988t=__t827t__dat__length;
  *__t1989t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1990t, uint64_t* __t1991t, uint64_t* __t1992t, char* __t1993t) {
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
  *__t1990t=__t853t__unsafe_ptr;
  *__t1991t=__t853t__dat__pos;
  *__t1992t=__t853t__dat__length;
  *__t1993t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1994t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1994t=z;
}

static inline __attribute__((always_inline)) int nat16__t1847t(uint64_t x, uint16_t* __t1995t) {
  uint64_t __t1848t=0;
  char __t1849t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1848t=65535;
  gt__t276t(x,__t1848t,&__t1849t__);
  if(__t1849t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1995t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1854t(uint64_t _pos, uint64_t _length, uint16_t* __t1996t, uint16_t* __t1997t) {
  uint16_t __t1855t__=0;
  uint16_t pos=0;
  uint16_t __t1856t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1847t(_pos,&__t1855t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1855t__;
  __t_errcode=nat16__t1847t(_length,&__t1856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1856t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1996t=pos;
  *__t1997t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1857t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1998t, uint16_t* __t1999t, uint16_t* __t2000t) {
  char* unsafe_ptr=0;
  uint16_t __t1858t__pos=0;
  uint16_t __t1858t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1854t(s__dat__pos,s__dat__length,&__t1858t__pos,&__t1858t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1858t__pos;
  dat__length=__t1858t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1998t=unsafe_ptr;
  *__t1999t=dat__pos;
  *__t2000t=dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1860t(const char* s, char** __t2001t, uint16_t* __t2002t, uint16_t* __t2003t) {
  char* __t1861t__unsafe_ptr=0;
  uint64_t __t1861t__dat__pos=0;
  uint64_t __t1861t__dat__length=0;
  char __t1861t__dat__first=0;
  char* __t1862t__unsafe_ptr=0;
  uint16_t __t1862t__dat__pos=0;
  uint16_t __t1862t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(s,&__t1861t__unsafe_ptr,&__t1861t__dat__pos,&__t1861t__dat__length,&__t1861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1857t(__t1861t__unsafe_ptr,__t1861t__dat__pos,__t1861t__dat__length,__t1861t__dat__first,&__t1862t__unsafe_ptr,&__t1862t__dat__pos,&__t1862t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2001t=__t1862t__unsafe_ptr;
  *__t2002t=__t1862t__dat__pos;
  *__t2003t=__t1862t__dat__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1879t(char** __t2004t, uint64_t* __t2005t, uint16_t* __t2006t, uint16_t* __t2007t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2004t=unsafe_ptr;
  *__t2005t=unsafe_size;
  *__t2006t=unsafe_offset;
  *__t2007t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t481t(uint64_t x, uint64_t* __t2008t) {
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  __t482t=1024;
  mul__t199t(x,__t482t,&__t483t__);
  goto __t_return;
  __t_return:
  *__t2008t=__t483t__;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t2009t, uint64_t* __t2010t, uint16_t* __t2011t, uint16_t* __t2012t, uint64_t _pos, char** __t2013t, uint64_t* __t2014t, uint16_t* __t2015t, uint16_t* __t2016t, uint64_t* __t2017t) {
  char* buf__unsafe_ptr=*__t2009t;
  uint64_t buf__unsafe_size=*__t2010t;
  uint16_t buf__unsafe_offset=*__t2011t;
  uint16_t buf__unsafe_align=*__t2012t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t2009t=buf__unsafe_ptr;
  *__t2010t=buf__unsafe_size;
  *__t2011t=buf__unsafe_offset;
  *__t2012t=buf__unsafe_align;
  *__t2013t=buf__unsafe_ptr;
  *__t2014t=buf__unsafe_size;
  *__t2015t=buf__unsafe_offset;
  *__t2016t=buf__unsafe_align;
  *__t2017t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t2018t, uint64_t* __t2019t, uint16_t* __t2020t, uint16_t* __t2021t, char** __t2022t, uint64_t* __t2023t, uint16_t* __t2024t, uint16_t* __t2025t, uint64_t* __t2026t) {
  char* buf__unsafe_ptr=*__t2018t;
  uint64_t buf__unsafe_size=*__t2019t;
  uint16_t buf__unsafe_offset=*__t2020t;
  uint16_t buf__unsafe_align=*__t2021t;
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
  *__t2018t=buf__unsafe_ptr;
  *__t2019t=buf__unsafe_size;
  *__t2020t=buf__unsafe_offset;
  *__t2021t=buf__unsafe_align;
  *__t2022t=__t657t__buf__unsafe_ptr;
  *__t2023t=__t657t__buf__unsafe_size;
  *__t2024t=__t657t__buf__unsafe_offset;
  *__t2025t=__t657t__buf__unsafe_align;
  *__t2026t=__t657t__pos;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t2027t) {
  goto __t_return;
  __t_return:
  *__t2027t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t2028t, uint64_t* __t2029t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t2028t=from;
  *__t2029t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t2030t, uint64_t* __t2031t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t2030t=__t473t__from;
  *__t2031t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t2032t, uint64_t r__to, uint64_t* __t2033t) {
  uint64_t r__from=*__t2032t;
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
  *__t2032t=r__from;
  *__t2033t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t785t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t2034t, uint64_t* __t2035t, uint64_t* __t2036t, char* __t2037t) {
  char* first_pos=0;
  char first=0;
  char* __t786t__unsafe_ptr=0;
  uint64_t __t786t__dat__pos=0;
  uint64_t __t786t__dat__length=0;
  char __t786t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t783t(unsafe_ptr,pos,length,first,&__t786t__unsafe_ptr,&__t786t__dat__pos,&__t786t__dat__length,&__t786t__dat__first);
  goto __t_return;
  __t_return:
  *__t2034t=__t786t__unsafe_ptr;
  *__t2035t=__t786t__dat__pos;
  *__t2036t=__t786t__dat__length;
  *__t2037t=__t786t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1863t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t2038t, uint64_t* __t2039t, uint64_t* __t2040t, char* __t2041t) {
  uint64_t __t1864t__=0;
  uint64_t __t1865t__=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  nat__t507t(m__dat__pos,&__t1864t__);
  nat__t507t(m__dat__length,&__t1865t__);
  str__t785t(m__unsafe_ptr,__t1864t__,__t1865t__,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  goto __t_return;
  __t_return:
  *__t2038t=__t1866t__unsafe_ptr;
  *__t2039t=__t1866t__dat__pos;
  *__t2040t=__t1866t__dat__length;
  *__t2041t=__t1866t__dat__first;
}

static inline __attribute__((always_inline)) void str__t818t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2042t, uint64_t* __t2043t, uint64_t* __t2044t, char* __t2045t) {
  goto __t_return;
  __t_return:
  *__t2042t=other__unsafe_ptr;
  *__t2043t=other__dat__pos;
  *__t2044t=other__dat__length;
  *__t2045t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2046t) {
  goto __t_return;
  __t_return:
  *__t2046t=s__dat__length;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t2047t, uint64_t* __t2048t, uint16_t* __t2049t, uint16_t* __t2050t, uint64_t pos, char** __t2051t, uint64_t* __t2052t, uint16_t* __t2053t, uint16_t* __t2054t, uint64_t* __t2055t) {
  char* buf__unsafe_ptr=*__t2047t;
  uint64_t buf__unsafe_size=*__t2048t;
  uint16_t buf__unsafe_offset=*__t2049t;
  uint16_t buf__unsafe_align=*__t2050t;
  goto __t_return;
  __t_return:
  *__t2047t=buf__unsafe_ptr;
  *__t2048t=buf__unsafe_size;
  *__t2049t=buf__unsafe_offset;
  *__t2050t=buf__unsafe_align;
  *__t2051t=buf__unsafe_ptr;
  *__t2052t=buf__unsafe_size;
  *__t2053t=buf__unsafe_offset;
  *__t2054t=buf__unsafe_align;
  *__t2055t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t2056t, uint64_t* __t2057t, uint16_t* __t2058t, uint16_t* __t2059t, uint64_t* __t2060t, uint64_t length, char** __t2061t, uint64_t* __t2062t, uint16_t* __t2063t, uint16_t* __t2064t, uint64_t* __t2065t) {
  char* allocator__buf__unsafe_ptr=*__t2056t;
  uint64_t allocator__buf__unsafe_size=*__t2057t;
  uint16_t allocator__buf__unsafe_offset=*__t2058t;
  uint16_t allocator__buf__unsafe_align=*__t2059t;
  uint64_t allocator__pos=*__t2060t;
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
  *__t2056t=allocator__buf__unsafe_ptr;
  *__t2057t=allocator__buf__unsafe_size;
  *__t2058t=allocator__buf__unsafe_offset;
  *__t2059t=allocator__buf__unsafe_align;
  *__t2060t=allocator__pos;
  *__t2061t=__t692t__buf__unsafe_ptr;
  *__t2062t=__t692t__buf__unsafe_size;
  *__t2063t=__t692t__buf__unsafe_offset;
  *__t2064t=__t692t__buf__unsafe_align;
  *__t2065t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t873t(char** __t2066t, uint64_t* __t2067t, uint16_t* __t2068t, uint16_t* __t2069t, uint64_t* __t2070t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2071t, uint64_t* __t2072t, uint64_t* __t2073t, char* __t2074t) {
  char* CHARS__buf__unsafe_ptr=*__t2066t;
  uint64_t CHARS__buf__unsafe_size=*__t2067t;
  uint16_t CHARS__buf__unsafe_offset=*__t2068t;
  uint16_t CHARS__buf__unsafe_align=*__t2069t;
  uint64_t CHARS__pos=*__t2070t;
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
  *__t2066t=CHARS__buf__unsafe_ptr;
  *__t2067t=CHARS__buf__unsafe_size;
  *__t2068t=CHARS__buf__unsafe_offset;
  *__t2069t=CHARS__buf__unsafe_align;
  *__t2070t=CHARS__pos;
  *__t2071t=__t878t__unsafe_ptr;
  *__t2072t=__t878t__dat__pos;
  *__t2073t=__t878t__dat__length;
  *__t2074t=__t878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t879t(char** __t2075t, uint64_t* __t2076t, uint16_t* __t2077t, uint16_t* __t2078t, uint64_t* __t2079t, const char* _other, char** __t2080t, uint64_t* __t2081t, uint64_t* __t2082t, char* __t2083t) {
  char* CHARS__buf__unsafe_ptr=*__t2075t;
  uint64_t CHARS__buf__unsafe_size=*__t2076t;
  uint16_t CHARS__buf__unsafe_offset=*__t2077t;
  uint16_t CHARS__buf__unsafe_align=*__t2078t;
  uint64_t CHARS__pos=*__t2079t;
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
  *__t2075t=CHARS__buf__unsafe_ptr;
  *__t2076t=CHARS__buf__unsafe_size;
  *__t2077t=CHARS__buf__unsafe_offset;
  *__t2078t=CHARS__buf__unsafe_align;
  *__t2079t=CHARS__pos;
  *__t2080t=__t884t__unsafe_ptr;
  *__t2081t=__t884t__dat__pos;
  *__t2082t=__t884t__dat__length;
  *__t2083t=__t884t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2084t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2084t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2085t) {
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
  *__t2085t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t831t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2086t, uint64_t* __t2087t, uint64_t* __t2088t, char* __t2089t) {
  uint64_t __t832t__=0;
  uint64_t length=0;
  uint64_t __t833t=0;
  char __t834t__=0;
  char* __t835t__=0;
  char __t836t__value=0;
  char first=0;
  char* __t837t__unsafe_ptr=0;
  uint64_t __t837t__dat__pos=0;
  uint64_t __t837t__dat__length=0;
  char __t837t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t832t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t832t__;
  __t833t=0;
  neq__t144t(length,__t833t,&__t834t__);
  if(__t834t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t835t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t835t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t836t__value,__t835t__,1);
  first=__t836t__value;
  }
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t837t__unsafe_ptr,&__t837t__dat__pos,&__t837t__dat__length,&__t837t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2086t=__t837t__unsafe_ptr;
  *__t2087t=__t837t__dat__pos;
  *__t2088t=__t837t__dat__length;
  *__t2089t=__t837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1878t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t2090t, uint64_t* __t2091t, uint64_t* __t2092t, char* __t2093t) {
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__unsafe_size=0;
  uint16_t __t1881t__unsafe_offset=0;
  uint16_t __t1881t__unsafe_align=0;
  uint64_t __t1882t=0;
  uint64_t __t1883t__=0;
  char* __t1884t__unsafe_ptr=0;
  uint64_t __t1884t__unsafe_size=0;
  uint16_t __t1884t__unsafe_offset=0;
  uint16_t __t1884t__unsafe_align=0;
  char __t1885t____t534t__=0;
  char* __t1886t__buf__unsafe_ptr=0;
  uint64_t __t1886t__buf__unsafe_size=0;
  uint16_t __t1886t__buf__unsafe_offset=0;
  uint16_t __t1886t__buf__unsafe_align=0;
  uint64_t __t1886t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1887t__=0;
  uint64_t __t1888t__from=0;
  uint64_t __t1888t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1889t=0;
  uint64_t __t1890t__=0;
  uint64_t i=0;
  char* __t1891t__=0;
  char* __t1892t__unsafe_ptr=0;
  uint16_t __t1892t__dat__pos=0;
  uint16_t __t1892t__dat__length=0;
  char* __t1893t__unsafe_ptr=0;
  uint64_t __t1893t__dat__pos=0;
  uint64_t __t1893t__dat__length=0;
  char __t1893t__dat__first=0;
  char* __t1894t__unsafe_ptr=0;
  uint64_t __t1894t__dat__pos=0;
  uint64_t __t1894t__dat__length=0;
  char __t1894t__dat__first=0;
  char* __t1896t__unsafe_ptr=0;
  uint64_t __t1896t__dat__pos=0;
  uint64_t __t1896t__dat__length=0;
  char __t1896t__dat__first=0;
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__dat__pos=0;
  uint64_t __t1898t__dat__length=0;
  char __t1898t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1879t(&__t1881t__unsafe_ptr,&__t1881t__unsafe_size,&__t1881t__unsafe_offset,&__t1881t__unsafe_align);
  __t1882t=4;
  KB__t481t(__t1882t,&__t1883t__);
  __t_errcode=alloc__t532t(&__t1881t__unsafe_ptr,&__t1881t__unsafe_size,&__t1881t__unsafe_offset,&__t1881t__unsafe_align,__t1883t__,&__t1884t__unsafe_ptr,&__t1884t__unsafe_size,&__t1884t__unsafe_offset,&__t1884t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t1884t__unsafe_ptr,&__t1884t__unsafe_size,&__t1884t__unsafe_offset,&__t1884t__unsafe_align,&__t1886t__buf__unsafe_ptr,&__t1886t__buf__unsafe_size,&__t1886t__buf__unsafe_offset,&__t1886t__buf__unsafe_align,&__t1886t__pos);
  mem__pos=__t1886t__pos;
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1887t__);
  range__t471t(__t1887t__,&__t1888t__from,&__t1888t__to);
  iter__from=__t1888t__from;
  iter__to=__t1888t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t474t(&iter__from,iter__to,&__t1890t__);
  __t1889t=__t_complain;
  i=__t1890t__;
  __t1889t=__t1889t==0;
  if(!__t1889t){
  break;
  }
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1891t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1892t__unsafe_ptr,__t1891t__,8);
  memcpy(&__t1892t__dat__pos,__t1891t__+8,2);
  memcpy(&__t1892t__dat__length,__t1891t__+10,2);
  unpack__t1863t(__t1892t__unsafe_ptr,__t1892t__dat__pos,__t1892t__dat__length,&__t1893t__unsafe_ptr,&__t1893t__dat__pos,&__t1893t__dat__length,&__t1893t__dat__first);
  __t_errcode=copy__t873t(&__t1884t__unsafe_ptr,&__t1884t__unsafe_size,&__t1884t__unsafe_offset,&__t1884t__unsafe_align,&mem__pos,__t1893t__unsafe_ptr,__t1893t__dat__pos,__t1893t__dat__length,__t1893t__dat__first,&__t1894t__unsafe_ptr,&__t1894t__dat__pos,&__t1894t__dat__length,&__t1894t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t879t(&__t1884t__unsafe_ptr,&__t1884t__unsafe_size,&__t1884t__unsafe_offset,&__t1884t__unsafe_align,&mem__pos,__t1895t,&__t1896t__unsafe_ptr,&__t1896t__dat__pos,&__t1896t__dat__length,&__t1896t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t831t(__t1884t__unsafe_ptr,__t1884t__unsafe_size,__t1884t__unsafe_offset,__t1884t__unsafe_align,start,mem__pos,&__t1898t__unsafe_ptr,&__t1898t__dat__pos,&__t1898t__dat__length,&__t1898t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1898t__unsafe_ptr=__t1884t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1898t__unsafe_ptr,&__t1885t____t534t__);
  if(__t1885t____t534t__){
  free__t503t(&__t1898t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2090t=__t1898t__unsafe_ptr;
  *__t2091t=__t1898t__dat__pos;
  *__t2092t=__t1898t__dat__length;
  *__t2093t=__t1898t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t391t(uint64_t value, const char* endl) {
  int __t392t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t987t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t988t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1899t() {
  char* __t1901t__unsafe_ptr=0;
  uint64_t __t1901t__unsafe_size=0;
  uint16_t __t1901t__unsafe_offset=0;
  uint16_t __t1901t__unsafe_align=0;
  char* __t1902t__unsafe_ptr=0;
  uint64_t __t1902t__unsafe_size=0;
  uint16_t __t1902t__unsafe_offset=0;
  uint16_t __t1902t__unsafe_align=0;
  uint64_t __t1903t=0;
  char* __t1904t__unsafe_ptr=0;
  uint64_t __t1904t__unsafe_size=0;
  uint16_t __t1904t__unsafe_offset=0;
  uint16_t __t1904t__unsafe_align=0;
  char __t1905t____t534t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1906t=0;
  char* __t1907t__=0;
  char* __t1909t__unsafe_ptr=0;
  uint16_t __t1909t__dat__pos=0;
  uint16_t __t1909t__dat__length=0;
  uint64_t __t1910t=0;
  char* __t1911t__=0;
  char* __t1913t__unsafe_ptr=0;
  uint16_t __t1913t__dat__pos=0;
  uint16_t __t1913t__dat__length=0;
  uint64_t __t1914t=0;
  char* __t1915t__=0;
  char* __t1917t__unsafe_ptr=0;
  uint16_t __t1917t__dat__pos=0;
  uint16_t __t1917t__dat__length=0;
  uint64_t __t1918t=0;
  char* __t1919t__=0;
  char* __t1921t__unsafe_ptr=0;
  uint16_t __t1921t__dat__pos=0;
  uint16_t __t1921t__dat__length=0;
  uint64_t __t1922t=0;
  char* __t1923t__=0;
  char* __t1925t__unsafe_ptr=0;
  uint16_t __t1925t__dat__pos=0;
  uint16_t __t1925t__dat__length=0;
  uint64_t __t1926t=0;
  char* __t1927t__=0;
  char* __t1928t__unsafe_ptr=0;
  uint64_t __t1928t__dat__pos=0;
  uint64_t __t1928t__dat__length=0;
  char __t1928t__dat__first=0;
  char __t1929t____t1885t____t534t__=0;
  char* __t1930t__unsafe_ptr=0;
  uint16_t __t1930t__dat__pos=0;
  uint16_t __t1930t__dat__length=0;
  uint64_t __t1931t__=0;
  uint64_t __t1932t__from=0;
  uint64_t __t1932t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1933t=0;
  uint64_t __t1934t__=0;
  uint64_t j=0;
  char* __t1936t__=0;
  char* __t1937t__unsafe_ptr=0;
  uint16_t __t1937t__dat__pos=0;
  uint16_t __t1937t__dat__length=0;
  char* __t1938t__unsafe_ptr=0;
  uint64_t __t1938t__dat__pos=0;
  uint64_t __t1938t__dat__length=0;
  char __t1938t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  str____t_buffer____buffer__t1876t(&__t1901t__unsafe_ptr,&__t1901t__unsafe_size,&__t1901t__unsafe_offset,&__t1901t__unsafe_align);
  __t1902t__unsafe_ptr=__t1901t__unsafe_ptr;
  __t1902t__unsafe_size=__t1901t__unsafe_size;
  __t1902t__unsafe_offset=__t1901t__unsafe_offset;
  __t1902t__unsafe_align=__t1901t__unsafe_align;
  __t1903t=6;
  __t_errcode=alloc__t532t(&__t1902t__unsafe_ptr,&__t1902t__unsafe_size,&__t1902t__unsafe_offset,&__t1902t__unsafe_align,__t1903t,&__t1904t__unsafe_ptr,&__t1904t__unsafe_size,&__t1904t__unsafe_offset,&__t1904t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1904t__unsafe_ptr;
  buff__unsafe_size=__t1904t__unsafe_size;
  buff__unsafe_offset=__t1904t__unsafe_offset;
  buff__unsafe_align=__t1904t__unsafe_align;
  __t1906t=0;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1906t,&__t1907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1860t(__t1908t,&__t1909t__unsafe_ptr,&__t1909t__dat__pos,&__t1909t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1907t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1907t__,&__t1909t__unsafe_ptr,8);
  memcpy(__t1907t__+8,&__t1909t__dat__pos,2);
  memcpy(__t1907t__+10,&__t1909t__dat__length,2);
  __t1910t=1;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1910t,&__t1911t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1860t(__t1912t,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1911t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1911t__,&__t1913t__unsafe_ptr,8);
  memcpy(__t1911t__+8,&__t1913t__dat__pos,2);
  memcpy(__t1911t__+10,&__t1913t__dat__length,2);
  __t1914t=2;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1914t,&__t1915t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1860t(__t1916t,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1915t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1915t__,&__t1917t__unsafe_ptr,8);
  memcpy(__t1915t__+8,&__t1917t__dat__pos,2);
  memcpy(__t1915t__+10,&__t1917t__dat__length,2);
  __t1918t=3;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1918t,&__t1919t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1860t(__t1920t,&__t1921t__unsafe_ptr,&__t1921t__dat__pos,&__t1921t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1919t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1919t__,&__t1921t__unsafe_ptr,8);
  memcpy(__t1919t__+8,&__t1921t__dat__pos,2);
  memcpy(__t1919t__+10,&__t1921t__dat__length,2);
  __t1922t=4;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1922t,&__t1923t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1860t(__t1924t,&__t1925t__unsafe_ptr,&__t1925t__dat__pos,&__t1925t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1923t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1923t__,&__t1925t__unsafe_ptr,8);
  memcpy(__t1923t__+8,&__t1925t__dat__pos,2);
  memcpy(__t1923t__+10,&__t1925t__dat__length,2);
  __t1926t=5;
  __t_errcode=mutget__t633t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1926t,&__t1927t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1878t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1928t__unsafe_ptr,&__t1928t__dat__pos,&__t1928t__dat__length,&__t1928t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1857t(__t1928t__unsafe_ptr,__t1928t__dat__pos,__t1928t__dat__length,__t1928t__dat__first,&__t1930t__unsafe_ptr,&__t1930t__dat__pos,&__t1930t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1927t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1927t__,&__t1930t__unsafe_ptr,8);
  memcpy(__t1927t__+8,&__t1930t__dat__pos,2);
  memcpy(__t1927t__+10,&__t1930t__dat__length,2);
  len__t647t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1931t__);
  range__t471t(__t1931t__,&__t1932t__from,&__t1932t__to);
  full_iter__from=__t1932t__from;
  full_iter__to=__t1932t__to;
  while(1){
  __t_complain=next__t474t(&full_iter__from,full_iter__to,&__t1934t__);
  __t1933t=__t_complain;
  j=__t1934t__;
  __t1933t=__t1933t==0;
  if(!__t1933t){
  break;
  }
  print__t391t(j,__t1895t);
  __t_errcode=get__t640t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1936t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1936t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1937t__unsafe_ptr,__t1936t__,8);
  memcpy(&__t1937t__dat__pos,__t1936t__+8,2);
  memcpy(&__t1937t__dat__length,__t1936t__+10,2);
  unpack__t1863t(__t1937t__unsafe_ptr,__t1937t__dat__pos,__t1937t__dat__length,&__t1938t__unsafe_ptr,&__t1938t__dat__pos,&__t1938t__dat__length,&__t1938t__dat__first);
  print__t987t(__t1938t__unsafe_ptr,__t1938t__dat__pos,__t1938t__dat__length,__t1938t__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1928t__unsafe_ptr,&__t1929t____t1885t____t534t__);
  if(__t1929t____t1885t____t534t__){
  free__t503t(&__t1928t__unsafe_ptr);
  }
  exists__t447t(__t1904t__unsafe_ptr,&__t1905t____t534t__);
  if(__t1905t____t534t__){
  free__t503t(&__t1904t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1899t();return 0;}