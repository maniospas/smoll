#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1873t="README.md";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1889t, uint64_t* __t1890t, uint16_t* __t1891t, uint16_t* __t1892t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1889t=unsafe_ptr;
  *__t1890t=unsafe_size;
  *__t1891t=unsafe_offset;
  *__t1892t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1893t) {
  *__t1893t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1894t) {
  int value=0;
  *__t1894t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1895t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1895t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1896t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1896t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1897t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1897t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1898t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1898t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1899t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1899t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1900t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1900t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1901t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1901t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1902t) {
  *__t1902t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1903t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1903t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1904t) {
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  char* __t601t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t596t__);
  if(__t596t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t597t__);
  mul__t195t(i,__t597t__,&__t598t__);
  nat__t506t(buffer__unsafe_offset,&__t599t__);
  add__t171t(__t598t__,__t599t__,&__t600t__);
  add__t504t(buffer__unsafe_ptr,__t600t__,&__t601t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1904t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1905t, uint64_t* __t1906t, uint64_t* __t1907t, char* __t1908t) {
  goto __t_return;
  __t_return:
  *__t1905t=unsafe_ptr;
  *__t1906t=dat__pos;
  *__t1907t=dat__length;
  *__t1908t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1909t, uint64_t* __t1910t, uint64_t* __t1911t, char* __t1912t) {
  char* unsafe_ptr=0;
  uint64_t __t635t__=0;
  uint64_t __t636t=0;
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t=0;
  char __t640t__=0;
  char* __t641t__unsafe_ptr=0;
  uint64_t __t641t__dat__pos=0;
  uint64_t __t641t__dat__length=0;
  char __t641t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t635t__);
  __t636t=1;
  neq__t143t(__t635t__,__t636t,&__t637t__);
  if(__t637t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t638t__);
  __t639t=0;
  neq__t143t(__t638t__,__t639t,&__t640t__);
  if(__t640t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t630t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t641t__unsafe_ptr,&__t641t__dat__pos,&__t641t__dat__length,&__t641t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1909t=__t641t__unsafe_ptr;
  *__t1910t=__t641t__dat__pos;
  *__t1911t=__t641t__dat__length;
  *__t1912t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1913t, uint64_t* __t1914t, uint64_t* __t1915t, char* __t1916t) {
  uint64_t __t667t=0;
  char __t668t__=0;
  char* __t669t__=0;
  char __t670t__value=0;
  char first=0;
  char* __t671t__unsafe_ptr=0;
  uint64_t __t671t__dat__pos=0;
  uint64_t __t671t__dat__length=0;
  char __t671t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t667t=0;
  neq__t143t(length,__t667t,&__t668t__);
  if(__t668t__){
  __t_errcode=get__t595t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t670t__value,__t669t__,1);
  first=__t670t__value;
  }
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t671t__unsafe_ptr,&__t671t__dat__pos,&__t671t__dat__length,&__t671t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1913t=__t671t__unsafe_ptr;
  *__t1914t=__t671t__dat__pos;
  *__t1915t=__t671t__dat__length;
  *__t1916t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1917t, uint64_t* __t1918t, uint64_t* __t1919t, char* __t1920t) {
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__unsafe_size=0;
  uint16_t __t674t__unsafe_offset=0;
  uint16_t __t674t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t675t__=0;
  uint64_t length=0;
  uint64_t __t676t=0;
  uint64_t __t677t__=0;
  uint64_t __t678t=0;
  char* __t679t__unsafe_ptr=0;
  uint64_t __t679t__dat__pos=0;
  uint64_t __t679t__dat__length=0;
  char __t679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t673t__unsafe_ptr,&__t673t__unsafe_size,&__t673t__unsafe_offset,&__t673t__unsafe_align);
  __t674t__unsafe_ptr=__t673t__unsafe_ptr;
  __t674t__unsafe_size=__t673t__unsafe_size;
  __t674t__unsafe_offset=__t673t__unsafe_offset;
  __t674t__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=__t674t__unsafe_ptr;
  buf__unsafe_size=__t674t__unsafe_size;
  buf__unsafe_offset=__t674t__unsafe_offset;
  buf__unsafe_align=__t674t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t675t__);
  buf__unsafe_ptr=__t675t__;
  if(c){
  length=strlen(c);
  }
  __t676t=1;
  add__t171t(length,__t676t,&__t677t__);
  buf__unsafe_size=__t677t__;
  __t678t=0;
  __t_errcode=str__t666t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t678t,length,&__t679t__unsafe_ptr,&__t679t__dat__pos,&__t679t__dat__length,&__t679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1917t=__t679t__unsafe_ptr;
  *__t1918t=__t679t__dat__pos;
  *__t1919t=__t679t__dat__length;
  *__t1920t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1921t) {
  goto __t_return;
  __t_return:
  *__t1921t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1922t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1922t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1923t) {
  char* allocated=*__t1923t;
  if(allocated){
  free(allocated);
  }
  *__t1923t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1924t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1924t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1925t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1925t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1926t) {
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
  *__t1926t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1927t, uint64_t* __t1928t, uint16_t* __t1929t, uint16_t* __t1930t, uint64_t size, char** __t1931t, uint64_t* __t1932t, uint16_t* __t1933t, uint16_t* __t1934t) {
  char* buffer__unsafe_ptr=*__t1927t;
  uint64_t buffer__unsafe_size=*__t1928t;
  uint16_t buffer__unsafe_offset=*__t1929t;
  uint16_t buffer__unsafe_align=*__t1930t;
  int __t510t=0;
  char __t511t__=0;
  char* ptr=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  char* __t520t__unsafe_ptr=0;
  uint64_t __t520t__unsafe_size=0;
  uint16_t __t520t__unsafe_offset=0;
  uint16_t __t520t__unsafe_align=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t bytes=0;
  uint64_t __t525t=0;
  char __t526t__=0;
  char* __t527t__=0;
  uint64_t __t528t=0;
  char* __t530t__unsafe_ptr=0;
  uint64_t __t530t__unsafe_size=0;
  uint16_t __t530t__unsafe_offset=0;
  uint16_t __t530t__unsafe_align=0;
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
  __t520t__unsafe_ptr=buffer__unsafe_ptr;
  __t520t__unsafe_size=buffer__unsafe_size;
  __t520t__unsafe_offset=buffer__unsafe_offset;
  __t520t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t521t=0;
  neq__t143t(buffer__unsafe_size,__t521t,&__t522t__);
  if(__t522t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t523t__);
  mul__t195t(__t523t__,size,&__t524t__);
  bytes=__t524t__;
  __t525t=0;
  eq__t119t(bytes,__t525t,&__t526t__);
  if(__t526t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t527t__;
  __t528t=0;
  zero__t503t(buffer__unsafe_ptr,__t528t,bytes);
  __t530t__unsafe_ptr=buffer__unsafe_ptr;
  __t530t__unsafe_size=buffer__unsafe_size;
  __t530t__unsafe_offset=buffer__unsafe_offset;
  __t530t__unsafe_align=buffer__unsafe_align;
  __t520t__unsafe_ptr=__t530t__unsafe_ptr;
  __t520t__unsafe_size=__t530t__unsafe_size;
  __t520t__unsafe_offset=__t530t__unsafe_offset;
  __t520t__unsafe_align=__t530t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(__t520t__unsafe_ptr,&__t511t__);
  if(__t511t__){
  __t520t__unsafe_ptr=__t520t__unsafe_ptr;
  free__t502t(&__t520t__unsafe_ptr);
  }
  __t_return:
  *__t1927t=buffer__unsafe_ptr;
  *__t1928t=buffer__unsafe_size;
  *__t1929t=buffer__unsafe_offset;
  *__t1930t=buffer__unsafe_align;
  *__t1931t=__t520t__unsafe_ptr;
  *__t1932t=__t520t__unsafe_size;
  *__t1933t=__t520t__unsafe_offset;
  *__t1934t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1935t, uint64_t* __t1936t, uint64_t* __t1937t, char* __t1938t) {
  char* __t704t__unsafe_ptr=0;
  uint64_t __t704t__unsafe_size=0;
  uint16_t __t704t__unsafe_offset=0;
  uint16_t __t704t__unsafe_align=0;
  char* __t705t__unsafe_ptr=0;
  uint64_t __t705t__unsafe_size=0;
  uint16_t __t705t__unsafe_offset=0;
  uint16_t __t705t__unsafe_align=0;
  uint64_t __t706t=0;
  uint64_t __t707t__=0;
  uint64_t __t708t__=0;
  char* __t709t__unsafe_ptr=0;
  uint64_t __t709t__unsafe_size=0;
  uint16_t __t709t__unsafe_offset=0;
  uint16_t __t709t__unsafe_align=0;
  char __t710t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t711t=0;
  char* __t712t__unsafe_ptr=0;
  uint64_t __t712t__dat__pos=0;
  uint64_t __t712t__dat__length=0;
  char __t712t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align);
  __t705t__unsafe_ptr=__t704t__unsafe_ptr;
  __t705t__unsafe_size=__t704t__unsafe_size;
  __t705t__unsafe_offset=__t704t__unsafe_offset;
  __t705t__unsafe_align=__t704t__unsafe_align;
  __t706t=1;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t707t__);
  add__t171t(__t706t,__t707t__,&__t708t__);
  __t_errcode=alloc__t509t(&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align,__t708t__,&__t709t__unsafe_ptr,&__t709t__unsafe_size,&__t709t__unsafe_offset,&__t709t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t709t__unsafe_ptr;
  buf__unsafe_size=__t709t__unsafe_size;
  buf__unsafe_offset=__t709t__unsafe_offset;
  buf__unsafe_align=__t709t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t711t=0;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t711t,other__dat__length,other__dat__first,&__t712t__unsafe_ptr,&__t712t__dat__pos,&__t712t__dat__length,&__t712t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t712t__unsafe_ptr,&__t710t____t511t__);
  if(__t710t____t511t__){
  __t712t__unsafe_ptr=__t712t__unsafe_ptr;
  free__t502t(&__t712t__unsafe_ptr);
  }
  __t_return:
  *__t1935t=__t712t__unsafe_ptr;
  *__t1936t=__t712t__dat__pos;
  *__t1937t=__t712t__dat__length;
  *__t1938t=__t712t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t713t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1939t, char** __t1940t, uint64_t* __t1941t, uint64_t* __t1942t, char* __t1943t) {
  char* __t714t__unsafe_ptr=0;
  uint64_t __t714t__dat__pos=0;
  uint64_t __t714t__dat__length=0;
  char __t714t__dat__first=0;
  char __t715t____t710t____t511t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t716t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t703t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t714t__unsafe_ptr,&__t714t__dat__pos,&__t714t__dat__length,&__t714t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t714t__unsafe_ptr;
  str__dat__pos=__t714t__dat__pos;
  str__dat__length=__t714t__dat__length;
  str__dat__first=__t714t__dat__first;
  add__t504t(str__unsafe_ptr,str__dat__pos,&__t716t__);
  _ret=__t716t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t436t(str__unsafe_ptr,&__t715t____t710t____t511t__);
  if(__t715t____t710t____t511t__){
  str__unsafe_ptr=str__unsafe_ptr;
  free__t502t(&str__unsafe_ptr);
  }
  __t_return:
  *__t1939t=cstr;
  *__t1940t=str__unsafe_ptr;
  *__t1941t=str__dat__pos;
  *__t1942t=str__dat__length;
  *__t1943t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t720t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1944t) {
  goto __t_return;
  __t_return:
  *__t1944t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t1406t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t1945t) {
  const char* __t1407t__cstr=0;
  char* __t1407t__str__unsafe_ptr=0;
  uint64_t __t1407t__str__dat__pos=0;
  uint64_t __t1407t__str__dat__length=0;
  char __t1407t__str__dat__first=0;
  char __t1408t____t715t____t710t____t511t__=0;
  const char* __t1409t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1410t__=0;
  char __t1411t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t713t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t1407t__cstr,&__t1407t__str__unsafe_ptr,&__t1407t__str__dat__pos,&__t1407t__str__dat__length,&__t1407t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t720t(__t1407t__cstr,__t1407t__str__unsafe_ptr,__t1407t__str__dat__pos,__t1407t__str__dat__length,__t1407t__str__dat__first,&__t1409t__);
  path=__t1409t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t436t(unsafe_ptr,&__t1410t__);
  not__t27t(__t1410t__,&__t1411t__);
  if(__t1411t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t1945t=unsafe_ptr;
  exists__t436t(__t1407t__str__unsafe_ptr,&__t1408t____t715t____t710t____t511t__);
  if(__t1408t____t715t____t710t____t511t__){
  __t1407t__str__unsafe_ptr=__t1407t__str__unsafe_ptr;
  free__t502t(&__t1407t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1946t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1946t=__t482t__;
}

static inline __attribute__((always_inline)) int alloc__t554t(uint64_t size, char** __t1947t, uint64_t* __t1948t, uint16_t* __t1949t, uint16_t* __t1950t) {
  char* __t557t__unsafe_ptr=0;
  uint64_t __t557t__unsafe_size=0;
  uint16_t __t557t__unsafe_offset=0;
  uint16_t __t557t__unsafe_align=0;
  char* __t558t__unsafe_ptr=0;
  uint64_t __t558t__unsafe_size=0;
  uint16_t __t558t__unsafe_offset=0;
  uint16_t __t558t__unsafe_align=0;
  char* __t559t__unsafe_ptr=0;
  uint64_t __t559t__unsafe_size=0;
  uint16_t __t559t__unsafe_offset=0;
  uint16_t __t559t__unsafe_align=0;
  char __t560t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t557t__unsafe_ptr,&__t557t__unsafe_size,&__t557t__unsafe_offset,&__t557t__unsafe_align);
  __t558t__unsafe_ptr=__t557t__unsafe_ptr;
  __t558t__unsafe_size=__t557t__unsafe_size;
  __t558t__unsafe_offset=__t557t__unsafe_offset;
  __t558t__unsafe_align=__t557t__unsafe_align;
  __t_errcode=alloc__t509t(&__t558t__unsafe_ptr,&__t558t__unsafe_size,&__t558t__unsafe_offset,&__t558t__unsafe_align,size,&__t559t__unsafe_ptr,&__t559t__unsafe_size,&__t559t__unsafe_offset,&__t559t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t559t__unsafe_ptr,&__t560t____t511t__);
  if(__t560t____t511t__){
  __t559t__unsafe_ptr=__t559t__unsafe_ptr;
  free__t502t(&__t559t__unsafe_ptr);
  }
  __t_return:
  *__t1947t=__t559t__unsafe_ptr;
  *__t1948t=__t559t__unsafe_size;
  *__t1949t=__t559t__unsafe_offset;
  *__t1950t=__t559t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1951t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1951t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1952t) {
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
  *__t1952t=z;
  
  return __t_errcode;
}

int line__t1577t(char** __t1953t, uint64_t* __t1954t, uint16_t* __t1955t, uint16_t* __t1956t, uint64_t* __t1957t, char** __t1958t, char** __t1959t, uint64_t* __t1960t, uint64_t* __t1961t, char* __t1962t) {
  char* buf__unsafe_ptr=*__t1953t;
  uint64_t buf__unsafe_size=*__t1954t;
  uint16_t buf__unsafe_offset=*__t1955t;
  uint16_t buf__unsafe_align=*__t1956t;
  uint64_t pos=*__t1957t;
  char* f__unsafe_ptr=*__t1958t;
  int __t1578t=0;
  char __t1579t__=0;
  char __t1580t__=0;
  char* __t1581t__=0;
  char* contents=0;
  uint64_t __t1582t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t1583t__=0;
  char __t1584t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t1585t__=0;
  char* __t1586t__unsafe_ptr=0;
  uint64_t __t1586t__dat__pos=0;
  uint64_t __t1586t__dat__length=0;
  char __t1586t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t436t(buf__unsafe_ptr,&__t1579t__);
  not__t27t(__t1579t__,&__t1580t__);
  if(__t1580t__){
  __t_errcode=47;
  goto __t_failure;
  }
  add__t504t(buf__unsafe_ptr,pos,&__t1581t__);
  contents=__t1581t__;
  __t_errcode=sub__t348t(buf__unsafe_size,pos,&__t1582t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t1582t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t436t(obtained,&__t1583t__);
  not__t27t(__t1583t__,&__t1584t__);
  if(__t1584t__){
  __t_errcode=38;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t171t(pos,bytes_read,&__t1585t__);
  pos=__t1585t__;
  __t_errcode=str__t666t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t1586t__unsafe_ptr,&__t1586t__dat__pos,&__t1586t__dat__length,&__t1586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1953t=buf__unsafe_ptr;
  *__t1954t=buf__unsafe_size;
  *__t1955t=buf__unsafe_offset;
  *__t1956t=buf__unsafe_align;
  *__t1957t=pos;
  *__t1958t=f__unsafe_ptr;
  *__t1959t=__t1586t__unsafe_ptr;
  *__t1960t=__t1586t__dat__pos;
  *__t1961t=__t1586t__dat__length;
  *__t1962t=__t1586t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1824t(char** __t1963t, uint64_t* __t1964t, uint16_t* __t1965t, uint16_t* __t1966t, uint64_t* __t1967t, char** __t1968t, uint64_t __t_anon3, char** __t1969t, uint64_t* __t1970t, uint64_t* __t1971t, char* __t1972t) {
  char* buf__unsafe_ptr=*__t1963t;
  uint64_t buf__unsafe_size=*__t1964t;
  uint16_t buf__unsafe_offset=*__t1965t;
  uint16_t buf__unsafe_align=*__t1966t;
  uint64_t pos=*__t1967t;
  char* f__unsafe_ptr=*__t1968t;
  int __t1825t=0;
  char* __t1826t__unsafe_ptr=0;
  uint64_t __t1826t__dat__pos=0;
  uint64_t __t1826t__dat__length=0;
  char __t1826t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t1577t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t1826t__unsafe_ptr,&__t1826t__dat__pos,&__t1826t__dat__length,&__t1826t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1963t=buf__unsafe_ptr;
  *__t1964t=buf__unsafe_size;
  *__t1965t=buf__unsafe_offset;
  *__t1966t=buf__unsafe_align;
  *__t1967t=pos;
  *__t1968t=f__unsafe_ptr;
  *__t1969t=__t1826t__unsafe_ptr;
  *__t1970t=__t1826t__dat__pos;
  *__t1971t=__t1826t__dat__length;
  *__t1972t=__t1826t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1872t() {
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__dat__pos=0;
  uint64_t __t1874t__dat__length=0;
  char __t1874t__dat__first=0;
  char* __t1875t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t1877t=0;
  uint64_t __t1878t__=0;
  char* __t1879t__unsafe_ptr=0;
  uint64_t __t1879t__unsafe_size=0;
  uint16_t __t1879t__unsafe_offset=0;
  uint16_t __t1879t__unsafe_align=0;
  char __t1880t____t560t____t511t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t1881t=0;
  uint64_t __t1882t=0;
  uint64_t pos=0;
  uint64_t __t1883t=0;
  char __t1884t=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t1886t=0;
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__dat__pos=0;
  uint64_t __t1887t__dat__length=0;
  char __t1887t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t672t(__t1873t,&__t1874t__unsafe_ptr,&__t1874t__dat__pos,&__t1874t__dat__length,&__t1874t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1406t(__t1874t__unsafe_ptr,__t1874t__dat__pos,__t1874t__dat__length,__t1874t__dat__first,&__t1875t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t1875t__unsafe_ptr;
  __t1877t=4;
  KB__t480t(__t1877t,&__t1878t__);
  __t_errcode=alloc__t554t(__t1878t__,&__t1879t__unsafe_ptr,&__t1879t__unsafe_size,&__t1879t__unsafe_offset,&__t1879t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t1879t__unsafe_ptr;
  mem__unsafe_size=__t1879t__unsafe_size;
  mem__unsafe_offset=__t1879t__unsafe_offset;
  mem__unsafe_align=__t1879t__unsafe_align;
  __t1881t=0;
  __t1882t=__t1881t;
  pos=__t1882t;
  __t1883t=0;
  while(1){
  __t_complain=get__t1824t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t1883t,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  __t1884t=__t_complain;
  line__unsafe_ptr=__t1885t__unsafe_ptr;
  line__dat__pos=__t1885t__dat__pos;
  line__dat__length=__t1885t__dat__length;
  line__dat__first=__t1885t__dat__first;
  __t1884t=__t1884t==0;
  __t1883t=__t1883t+1;
  if(!__t1884t){
  break;
  }
  continue;
  }
  if(__t1875t__unsafe_ptr){
  fclose((FILE*)__t1875t__unsafe_ptr);
  __t1875t__unsafe_ptr=0;
  }
  __t1886t=0;
  __t_errcode=str__t666t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t1886t,pos,&__t1887t__unsafe_ptr,&__t1887t__dat__pos,&__t1887t__dat__length,&__t1887t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t784t(__t1887t__unsafe_ptr,__t1887t__dat__pos,__t1887t__dat__length,__t1887t__dat__first);
  
  __t_failure:exists__t436t(__t1879t__unsafe_ptr,&__t1880t____t560t____t511t__);
  if(__t1880t____t560t____t511t__){
  __t1879t__unsafe_ptr=__t1879t__unsafe_ptr;
  free__t502t(&__t1879t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1872t();return 0;}