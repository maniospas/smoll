#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1869t="README.md";
const char* const __t371t="\n";
static const char* __t_all_errcodes[54] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
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
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1885t, uint64_t* __t1886t, uint16_t* __t1887t, uint16_t* __t1888t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1885t=unsafe_ptr;
  *__t1886t=unsafe_size;
  *__t1887t=unsafe_offset;
  *__t1888t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1889t) {
  *__t1889t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1890t) {
  int value=0;
  *__t1890t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1891t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1891t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1892t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1892t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1893t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1893t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1894t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1894t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1895t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1896t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1896t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1897t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1897t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1898t) {
  *__t1898t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1899t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1899t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1900t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1900t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1901t, uint64_t* __t1902t, uint64_t* __t1903t, char* __t1904t) {
  goto __t_return;
  __t_return:
  *__t1901t=unsafe_ptr;
  *__t1902t=dat__pos;
  *__t1903t=dat__length;
  *__t1904t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1905t, uint64_t* __t1906t, uint64_t* __t1907t, char* __t1908t) {
  char* unsafe_ptr=0;
  uint64_t __t631t__=0;
  uint64_t __t632t=0;
  char __t633t__=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  char* __t637t__unsafe_ptr=0;
  uint64_t __t637t__dat__pos=0;
  uint64_t __t637t__dat__length=0;
  char __t637t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t631t__);
  __t632t=1;
  neq__t143t(__t631t__,__t632t,&__t633t__);
  if(__t633t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t634t__);
  __t635t=0;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t626t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t637t__unsafe_ptr,&__t637t__dat__pos,&__t637t__dat__length,&__t637t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1905t=__t637t__unsafe_ptr;
  *__t1906t=__t637t__dat__pos;
  *__t1907t=__t637t__dat__length;
  *__t1908t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1909t, uint64_t* __t1910t, uint64_t* __t1911t, char* __t1912t) {
  uint64_t __t663t=0;
  char __t664t__=0;
  char* __t665t__=0;
  char __t666t__value=0;
  char first=0;
  char* __t667t__unsafe_ptr=0;
  uint64_t __t667t__dat__pos=0;
  uint64_t __t667t__dat__length=0;
  char __t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t663t=0;
  neq__t143t(length,__t663t,&__t664t__);
  if(__t664t__){
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t666t__value,__t665t__,1);
  first=__t666t__value;
  }
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t667t__unsafe_ptr,&__t667t__dat__pos,&__t667t__dat__length,&__t667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1909t=__t667t__unsafe_ptr;
  *__t1910t=__t667t__dat__pos;
  *__t1911t=__t667t__dat__length;
  *__t1912t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1913t, uint64_t* __t1914t, uint64_t* __t1915t, char* __t1916t) {
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__unsafe_size=0;
  uint16_t __t670t__unsafe_offset=0;
  uint16_t __t670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t671t__=0;
  uint64_t length=0;
  uint64_t __t672t=0;
  uint64_t __t673t__=0;
  uint64_t __t674t=0;
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__dat__pos=0;
  uint64_t __t675t__dat__length=0;
  char __t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  __t670t__unsafe_ptr=__t669t__unsafe_ptr;
  __t670t__unsafe_size=__t669t__unsafe_size;
  __t670t__unsafe_offset=__t669t__unsafe_offset;
  __t670t__unsafe_align=__t669t__unsafe_align;
  buf__unsafe_ptr=__t670t__unsafe_ptr;
  buf__unsafe_size=__t670t__unsafe_size;
  buf__unsafe_offset=__t670t__unsafe_offset;
  buf__unsafe_align=__t670t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t671t__);
  buf__unsafe_ptr=__t671t__;
  if(c){
  length=strlen(c);
  }
  __t672t=1;
  add__t171t(length,__t672t,&__t673t__);
  buf__unsafe_size=__t673t__;
  __t674t=0;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t674t,length,&__t675t__unsafe_ptr,&__t675t__dat__pos,&__t675t__dat__length,&__t675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1913t=__t675t__unsafe_ptr;
  *__t1914t=__t675t__dat__pos;
  *__t1915t=__t675t__dat__length;
  *__t1916t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1917t) {
  goto __t_return;
  __t_return:
  *__t1917t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1918t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1918t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1919t) {
  char* allocated=*__t1919t;
  if(allocated){
  free(allocated);
  }
  *__t1919t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1920t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1920t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1921t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1921t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1922t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1922t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1923t, uint64_t* __t1924t, uint16_t* __t1925t, uint16_t* __t1926t, uint64_t size, char** __t1927t, uint64_t* __t1928t, uint16_t* __t1929t, uint16_t* __t1930t) {
  char* buffer__unsafe_ptr=*__t1923t;
  uint64_t buffer__unsafe_size=*__t1924t;
  uint16_t buffer__unsafe_offset=*__t1925t;
  uint16_t buffer__unsafe_align=*__t1926t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1923t=buffer__unsafe_ptr;
  *__t1924t=buffer__unsafe_size;
  *__t1925t=buffer__unsafe_offset;
  *__t1926t=buffer__unsafe_align;
  *__t1927t=buffer__unsafe_ptr;
  *__t1928t=buffer__unsafe_size;
  *__t1929t=buffer__unsafe_offset;
  *__t1930t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t699t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1931t, uint64_t* __t1932t, uint64_t* __t1933t, char* __t1934t) {
  char* __t700t__unsafe_ptr=0;
  uint64_t __t700t__unsafe_size=0;
  uint16_t __t700t__unsafe_offset=0;
  uint16_t __t700t__unsafe_align=0;
  char* __t701t__unsafe_ptr=0;
  uint64_t __t701t__unsafe_size=0;
  uint16_t __t701t__unsafe_offset=0;
  uint16_t __t701t__unsafe_align=0;
  uint64_t __t702t=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  char* __t705t__unsafe_ptr=0;
  uint64_t __t705t__unsafe_size=0;
  uint16_t __t705t__unsafe_offset=0;
  uint16_t __t705t__unsafe_align=0;
  char __t706t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t707t=0;
  char* __t708t__unsafe_ptr=0;
  uint64_t __t708t__dat__pos=0;
  uint64_t __t708t__dat__length=0;
  char __t708t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t700t__unsafe_ptr,&__t700t__unsafe_size,&__t700t__unsafe_offset,&__t700t__unsafe_align);
  __t701t__unsafe_ptr=__t700t__unsafe_ptr;
  __t701t__unsafe_size=__t700t__unsafe_size;
  __t701t__unsafe_offset=__t700t__unsafe_offset;
  __t701t__unsafe_align=__t700t__unsafe_align;
  __t702t=1;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t703t__);
  add__t171t(__t702t,__t703t__,&__t704t__);
  __t_errcode=alloc__t509t(&__t701t__unsafe_ptr,&__t701t__unsafe_size,&__t701t__unsafe_offset,&__t701t__unsafe_align,__t704t__,&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t705t__unsafe_ptr;
  buf__unsafe_size=__t705t__unsafe_size;
  buf__unsafe_offset=__t705t__unsafe_offset;
  buf__unsafe_align=__t705t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t707t=0;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t707t,other__dat__length,other__dat__first,&__t708t__unsafe_ptr,&__t708t__dat__pos,&__t708t__dat__length,&__t708t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t708t__unsafe_ptr,&__t706t____t511t__);
  if(__t706t____t511t__){
  free__t502t(&__t708t__unsafe_ptr);
  }
  __t_return:
  *__t1931t=__t708t__unsafe_ptr;
  *__t1932t=__t708t__dat__pos;
  *__t1933t=__t708t__dat__length;
  *__t1934t=__t708t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t709t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1935t, char** __t1936t, uint64_t* __t1937t, uint64_t* __t1938t, char* __t1939t) {
  char* __t710t__unsafe_ptr=0;
  uint64_t __t710t__dat__pos=0;
  uint64_t __t710t__dat__length=0;
  char __t710t__dat__first=0;
  char __t711t____t706t____t511t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t712t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t699t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t710t__unsafe_ptr,&__t710t__dat__pos,&__t710t__dat__length,&__t710t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t710t__unsafe_ptr;
  str__dat__pos=__t710t__dat__pos;
  str__dat__length=__t710t__dat__length;
  str__dat__first=__t710t__dat__first;
  add__t504t(str__unsafe_ptr,str__dat__pos,&__t712t__);
  _ret=__t712t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t436t(str__unsafe_ptr,&__t711t____t706t____t511t__);
  if(__t711t____t706t____t511t__){
  free__t502t(&str__unsafe_ptr);
  }
  __t_return:
  *__t1935t=cstr;
  *__t1936t=str__unsafe_ptr;
  *__t1937t=str__dat__pos;
  *__t1938t=str__dat__length;
  *__t1939t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t716t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1940t) {
  goto __t_return;
  __t_return:
  *__t1940t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1402t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t1941t) {
  const char* __t1403t__cstr=0;
  char* __t1403t__str__unsafe_ptr=0;
  uint64_t __t1403t__str__dat__pos=0;
  uint64_t __t1403t__str__dat__length=0;
  char __t1403t__str__dat__first=0;
  char __t1404t____t711t____t706t____t511t__=0;
  const char* __t1405t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1406t__=0;
  char __t1407t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t709t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1403t__cstr,&__t1403t__str__unsafe_ptr,&__t1403t__str__dat__pos,&__t1403t__str__dat__length,&__t1403t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t716t(__t1403t__cstr,__t1403t__str__unsafe_ptr,__t1403t__str__dat__pos,__t1403t__str__dat__length,__t1403t__str__dat__first,&__t1405t__);
  path=__t1405t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t436t(unsafe_ptr,&__t1406t__);
  not__t27t(__t1406t__,&__t1407t__);
  if(__t1407t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t1941t=unsafe_ptr;
  exists__t436t(__t1403t__str__unsafe_ptr,&__t1404t____t711t____t706t____t511t__);
  if(__t1404t____t711t____t706t____t511t__){
  free__t502t(&__t1403t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1942t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1942t=__t482t__;
}

static inline __attribute__((always_inline)) int alloc__t550t(uint64_t size, char** __t1943t, uint64_t* __t1944t, uint16_t* __t1945t, uint16_t* __t1946t) {
  char* __t553t__unsafe_ptr=0;
  uint64_t __t553t__unsafe_size=0;
  uint16_t __t553t__unsafe_offset=0;
  uint16_t __t553t__unsafe_align=0;
  char* __t554t__unsafe_ptr=0;
  uint64_t __t554t__unsafe_size=0;
  uint16_t __t554t__unsafe_offset=0;
  uint16_t __t554t__unsafe_align=0;
  char* __t555t__unsafe_ptr=0;
  uint64_t __t555t__unsafe_size=0;
  uint16_t __t555t__unsafe_offset=0;
  uint16_t __t555t__unsafe_align=0;
  char __t556t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t553t__unsafe_ptr,&__t553t__unsafe_size,&__t553t__unsafe_offset,&__t553t__unsafe_align);
  __t554t__unsafe_ptr=__t553t__unsafe_ptr;
  __t554t__unsafe_size=__t553t__unsafe_size;
  __t554t__unsafe_offset=__t553t__unsafe_offset;
  __t554t__unsafe_align=__t553t__unsafe_align;
  __t_errcode=alloc__t509t(&__t554t__unsafe_ptr,&__t554t__unsafe_size,&__t554t__unsafe_offset,&__t554t__unsafe_align,size,&__t555t__unsafe_ptr,&__t555t__unsafe_size,&__t555t__unsafe_offset,&__t555t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t555t__unsafe_ptr,&__t556t____t511t__);
  if(__t556t____t511t__){
  free__t502t(&__t555t__unsafe_ptr);
  }
  __t_return:
  *__t1943t=__t555t__unsafe_ptr;
  *__t1944t=__t555t__unsafe_size;
  *__t1945t=__t555t__unsafe_offset;
  *__t1946t=__t555t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1947t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1947t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1948t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1948t=z;
  
  return __t_errcode;
}

int line__t1573t(char** __t1949t, uint64_t* __t1950t, uint16_t* __t1951t, uint16_t* __t1952t, uint64_t* __t1953t, char** __t1954t, char** __t1955t, uint64_t* __t1956t, uint64_t* __t1957t, char* __t1958t) {
  char* buf__unsafe_ptr=*__t1949t;
  uint64_t buf__unsafe_size=*__t1950t;
  uint16_t buf__unsafe_offset=*__t1951t;
  uint16_t buf__unsafe_align=*__t1952t;
  uint64_t pos=*__t1953t;
  char* f__unsafe_ptr=*__t1954t;
  int __t1574t=0;
  char __t1575t__=0;
  char __t1576t__=0;
  char* __t1577t__=0;
  char* contents=0;
  uint64_t __t1578t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1579t__=0;
  char __t1580t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1581t__=0;
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__dat__pos=0;
  uint64_t __t1582t__dat__length=0;
  char __t1582t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t436t(buf__unsafe_ptr,&__t1575t__);
  not__t27t(__t1575t__,&__t1576t__);
  if(__t1576t__){
  __t_errcode=47;
  goto __t_failure;
  }
  add__t504t(buf__unsafe_ptr,pos,&__t1577t__);
  contents=__t1577t__;
  __t_errcode=sub__t348t(buf__unsafe_size,pos,&__t1578t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1578t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t436t(obtained,&__t1579t__);
  not__t27t(__t1579t__,&__t1580t__);
  if(__t1580t__){
  __t_errcode=38;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t171t(pos,bytes_read,&__t1581t__);
  pos=__t1581t__;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1582t__unsafe_ptr,&__t1582t__dat__pos,&__t1582t__dat__length,&__t1582t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1949t=buf__unsafe_ptr;
  *__t1950t=buf__unsafe_size;
  *__t1951t=buf__unsafe_offset;
  *__t1952t=buf__unsafe_align;
  *__t1953t=pos;
  *__t1954t=f__unsafe_ptr;
  *__t1955t=__t1582t__unsafe_ptr;
  *__t1956t=__t1582t__dat__pos;
  *__t1957t=__t1582t__dat__length;
  *__t1958t=__t1582t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1820t(char** __t1959t, uint64_t* __t1960t, uint16_t* __t1961t, uint16_t* __t1962t, uint64_t* __t1963t, char** __t1964t, uint64_t __t_anon3, char** __t1965t, uint64_t* __t1966t, uint64_t* __t1967t, char* __t1968t) {
  char* buf__unsafe_ptr=*__t1959t;
  uint64_t buf__unsafe_size=*__t1960t;
  uint16_t buf__unsafe_offset=*__t1961t;
  uint16_t buf__unsafe_align=*__t1962t;
  uint64_t pos=*__t1963t;
  char* f__unsafe_ptr=*__t1964t;
  int __t1821t=0;
  char* __t1822t__unsafe_ptr=0;
  uint64_t __t1822t__dat__pos=0;
  uint64_t __t1822t__dat__length=0;
  char __t1822t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1573t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t1822t__unsafe_ptr,&__t1822t__dat__pos,&__t1822t__dat__length,&__t1822t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1959t=buf__unsafe_ptr;
  *__t1960t=buf__unsafe_size;
  *__t1961t=buf__unsafe_offset;
  *__t1962t=buf__unsafe_align;
  *__t1963t=pos;
  *__t1964t=f__unsafe_ptr;
  *__t1965t=__t1822t__unsafe_ptr;
  *__t1966t=__t1822t__dat__pos;
  *__t1967t=__t1822t__dat__length;
  *__t1968t=__t1822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1868t() {
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__dat__pos=0;
  uint64_t __t1870t__dat__length=0;
  char __t1870t__dat__first=0;
  char* __t1871t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t1873t=0;
  uint64_t __t1874t__=0;
  char* __t1875t__unsafe_ptr=0;
  uint64_t __t1875t__unsafe_size=0;
  uint16_t __t1875t__unsafe_offset=0;
  uint16_t __t1875t__unsafe_align=0;
  char __t1876t____t556t____t511t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t1877t=0;
  uint64_t __t1878t=0;
  uint64_t pos=0;
  uint64_t __t1879t=0;
  char __t1880t=0;
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__dat__pos=0;
  uint64_t __t1881t__dat__length=0;
  char __t1881t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t1882t=0;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__dat__pos=0;
  uint64_t __t1883t__dat__length=0;
  char __t1883t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(__t1869t,&__t1870t__unsafe_ptr,&__t1870t__dat__pos,&__t1870t__dat__length,&__t1870t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1402t(__t1870t__unsafe_ptr,__t1870t__dat__pos,__t1870t__dat__length,__t1870t__dat__first,&__t1871t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t1871t__unsafe_ptr;
  __t1873t=4;
  KB__t480t(__t1873t,&__t1874t__);
  __t_errcode=alloc__t550t(__t1874t__,&__t1875t__unsafe_ptr,&__t1875t__unsafe_size,&__t1875t__unsafe_offset,&__t1875t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t1875t__unsafe_ptr;
  mem__unsafe_size=__t1875t__unsafe_size;
  mem__unsafe_offset=__t1875t__unsafe_offset;
  mem__unsafe_align=__t1875t__unsafe_align;
  __t1877t=0;
  __t1878t=__t1877t;
  pos=__t1878t;
  __t1879t=0;
  while(1){
  __t_complain=get__t1820t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t1879t,&__t1881t__unsafe_ptr,&__t1881t__dat__pos,&__t1881t__dat__length,&__t1881t__dat__first);
  __t1880t=__t_complain;
  line__unsafe_ptr=__t1881t__unsafe_ptr;
  line__dat__pos=__t1881t__dat__pos;
  line__dat__length=__t1881t__dat__length;
  line__dat__first=__t1881t__dat__first;
  __t1880t=__t1880t==0;
  __t1879t=__t1879t+1;
  if(!__t1880t){
  break;
  }
  continue;
  }
  if(__t1871t__unsafe_ptr){
  fclose((FILE*)__t1871t__unsafe_ptr);
  __t1871t__unsafe_ptr=0;
  }
  __t1882t=0;
  __t_errcode=str__t662t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t1882t,pos,&__t1883t__unsafe_ptr,&__t1883t__dat__pos,&__t1883t__dat__length,&__t1883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t780t(__t1883t__unsafe_ptr,__t1883t__dat__pos,__t1883t__dat__length,__t1883t__dat__first);
  
  __t_failure:exists__t436t(__t1875t__unsafe_ptr,&__t1876t____t556t____t511t__);
  if(__t1876t____t556t____t511t__){
  free__t502t(&__t1875t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1868t();return 0;}