#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1888t=".s";
const char* const __t1869t="./tests/passing/";
const char* const __t363t="";
const char* const __t1875t="./smoll ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1345t(char** __t1898t, uint64_t* __t1899t, uint16_t* __t1900t, uint16_t* __t1901t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1898t=unsafe_ptr;
  *__t1899t=unsafe_size;
  *__t1900t=unsafe_offset;
  *__t1901t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1902t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1902t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1903t) {
  char* allocated=*__t1903t;
  if(allocated){
  free(allocated);
  }
  *__t1903t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1904t) {
  int value=0;
  *__t1904t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1905t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1905t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1906t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1906t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1907t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1907t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1908t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1909t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1909t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1910t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1910t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1911t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1911t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1912t) {
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
  *__t1912t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1913t, uint64_t* __t1914t, uint16_t* __t1915t, uint16_t* __t1916t, uint64_t size, char** __t1917t, uint64_t* __t1918t, uint16_t* __t1919t, uint16_t* __t1920t) {
  char* buffer__unsafe_ptr=*__t1913t;
  uint64_t buffer__unsafe_size=*__t1914t;
  uint16_t buffer__unsafe_offset=*__t1915t;
  uint16_t buffer__unsafe_align=*__t1916t;
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
  *__t1913t=buffer__unsafe_ptr;
  *__t1914t=buffer__unsafe_size;
  *__t1915t=buffer__unsafe_offset;
  *__t1916t=buffer__unsafe_align;
  *__t1917t=buffer__unsafe_ptr;
  *__t1918t=buffer__unsafe_size;
  *__t1919t=buffer__unsafe_offset;
  *__t1920t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1921t, uint64_t* __t1922t, uint16_t* __t1923t, uint16_t* __t1924t, char** __t1925t, uint64_t* __t1926t, uint16_t* __t1927t, uint16_t* __t1928t, uint64_t* __t1929t) {
  char* buf__unsafe_ptr=*__t1921t;
  uint64_t buf__unsafe_size=*__t1922t;
  uint16_t buf__unsafe_offset=*__t1923t;
  uint16_t buf__unsafe_align=*__t1924t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1921t=buf__unsafe_ptr;
  *__t1922t=buf__unsafe_size;
  *__t1923t=buf__unsafe_offset;
  *__t1924t=buf__unsafe_align;
  *__t1925t=buf__unsafe_ptr;
  *__t1926t=buf__unsafe_size;
  *__t1927t=buf__unsafe_offset;
  *__t1928t=buf__unsafe_align;
  *__t1929t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1930t, uint64_t* __t1931t, uint16_t* __t1932t, uint16_t* __t1933t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1930t=unsafe_ptr;
  *__t1931t=unsafe_size;
  *__t1932t=unsafe_offset;
  *__t1933t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1934t) {
  *__t1934t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1935t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1935t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1936t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1936t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1937t) {
  *__t1937t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1938t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1938t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1939t) {
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
  *__t1939t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1940t, uint64_t* __t1941t, uint64_t* __t1942t, char* __t1943t) {
  goto __t_return;
  __t_return:
  *__t1940t=unsafe_ptr;
  *__t1941t=dat__pos;
  *__t1942t=dat__length;
  *__t1943t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1944t, uint64_t* __t1945t, uint64_t* __t1946t, char* __t1947t) {
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
  *__t1944t=__t637t__unsafe_ptr;
  *__t1945t=__t637t__dat__pos;
  *__t1946t=__t637t__dat__length;
  *__t1947t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1948t, uint64_t* __t1949t, uint64_t* __t1950t, char* __t1951t) {
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
  *__t1948t=__t667t__unsafe_ptr;
  *__t1949t=__t667t__dat__pos;
  *__t1950t=__t667t__dat__length;
  *__t1951t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1952t, uint64_t* __t1953t, uint64_t* __t1954t, char* __t1955t) {
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
  *__t1952t=__t675t__unsafe_ptr;
  *__t1953t=__t675t__dat__pos;
  *__t1954t=__t675t__dat__length;
  *__t1955t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1956t) {
  goto __t_return;
  __t_return:
  *__t1956t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1957t) {
  goto __t_return;
  __t_return:
  *__t1957t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1958t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1958t=z;
}

int copy__t747t(char** __t1959t, uint64_t* __t1960t, uint16_t* __t1961t, uint16_t* __t1962t, uint64_t* __t1963t, const char* _other, char** __t1964t, uint64_t* __t1965t, uint64_t* __t1966t, char* __t1967t) {
  char* buf__unsafe_ptr=*__t1959t;
  uint64_t buf__unsafe_size=*__t1960t;
  uint16_t buf__unsafe_offset=*__t1961t;
  uint16_t buf__unsafe_align=*__t1962t;
  uint64_t pos=*__t1963t;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__dat__pos=0;
  uint64_t __t748t__dat__length=0;
  char __t748t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t749t__=0;
  uint64_t __t750t__=0;
  uint64_t next_pos=0;
  uint64_t __t751t__=0;
  char __t752t__=0;
  uint64_t __t753t=0;
  uint64_t __t754t__=0;
  uint64_t prev_pos=0;
  char* __t755t__unsafe_ptr=0;
  uint64_t __t755t__dat__pos=0;
  uint64_t __t755t__dat__length=0;
  char __t755t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(_other,&__t748t__unsafe_ptr,&__t748t__dat__pos,&__t748t__dat__length,&__t748t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t748t__unsafe_ptr;
  other__dat__pos=__t748t__dat__pos;
  other__dat__length=__t748t__dat__length;
  other__dat__first=__t748t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t749t__);
  add__t171t(pos,__t749t__,&__t750t__);
  next_pos=__t750t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t751t__);
  gt__t272t(next_pos,__t751t__,&__t752t__);
  if(__t752t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t753t=0;
  add__t171t(pos,__t753t,&__t754t__);
  prev_pos=__t754t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t755t__unsafe_ptr,&__t755t__dat__pos,&__t755t__dat__length,&__t755t__dat__first);
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
  *__t1964t=__t755t__unsafe_ptr;
  *__t1965t=__t755t__dat__pos;
  *__t1966t=__t755t__dat__length;
  *__t1967t=__t755t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1737t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1738t(const char* path, char** __t1968t) {
  char* unsafe_ptr=0;
  char __t1740t__=0;
  char __t1741t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t436t(unsafe_ptr,&__t1740t__);
  not__t27t(__t1740t__,&__t1741t__);
  if(__t1741t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1737t(unsafe_ptr);
  __t_return:
  *__t1968t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1969t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1969t=__t482t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1749t(char** __t1970t, const char** __t1971t) {
  char* f__unsafe_ptr=*__t1970t;
  char __t1750t__=0;
  char __t1751t__=0;
  char* de=0;
  char __t1752t__=0;
  char __t1753t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t436t(f__unsafe_ptr,&__t1750t__);
  not__t27t(__t1750t__,&__t1751t__);
  if(__t1751t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t436t(de,&__t1752t__);
  not__t27t(__t1752t__,&__t1753t__);
  if(__t1753t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1970t=f__unsafe_ptr;
  *__t1971t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1754t(char** __t1972t, char** __t1973t, uint64_t* __t1974t, uint64_t* __t1975t, char* __t1976t) {
  char* f__unsafe_ptr=*__t1972t;
  const char* __t1755t__=0;
  char* __t1756t__unsafe_ptr=0;
  uint64_t __t1756t__dat__pos=0;
  uint64_t __t1756t__dat__length=0;
  char __t1756t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1749t(&f__unsafe_ptr,&__t1755t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t668t(__t1755t__,&__t1756t__unsafe_ptr,&__t1756t__dat__pos,&__t1756t__dat__length,&__t1756t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1972t=f__unsafe_ptr;
  *__t1973t=__t1756t__unsafe_ptr;
  *__t1974t=__t1756t__dat__pos;
  *__t1975t=__t1756t__dat__length;
  *__t1976t=__t1756t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1802t(char** __t1977t, uint64_t __t_anon1, char** __t1978t, uint64_t* __t1979t, uint64_t* __t1980t, char* __t1981t) {
  char* data__unsafe_ptr=*__t1977t;
  char* __t1803t__unsafe_ptr=0;
  uint64_t __t1803t__dat__pos=0;
  uint64_t __t1803t__dat__length=0;
  char __t1803t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1754t(&data__unsafe_ptr,&__t1803t__unsafe_ptr,&__t1803t__dat__pos,&__t1803t__dat__length,&__t1803t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1977t=data__unsafe_ptr;
  *__t1978t=__t1803t__unsafe_ptr;
  *__t1979t=__t1803t__dat__pos;
  *__t1980t=__t1803t__dat__length;
  *__t1981t=__t1803t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1982t, uint64_t* __t1983t, uint64_t* __t1984t, char* __t1985t) {
  goto __t_return;
  __t_return:
  *__t1982t=other__unsafe_ptr;
  *__t1983t=other__dat__pos;
  *__t1984t=other__dat__length;
  *__t1985t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1986t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1986t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1987t) {
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
  *__t1987t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t819t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1988t) {
  uint64_t __t820t__=0;
  char* __t821t__=0;
  add__t171t(s__dat__pos,i,&__t820t__);
  add__t504t(s__unsafe_ptr,__t820t__,&__t821t__);
  goto __t_return;
  __t_return:
  *__t1988t=__t821t__;
}

int slice__t858t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t1989t, uint64_t* __t1990t, uint64_t* __t1991t, char* __t1992t) {
  char* __t859t__unsafe_ptr=0;
  uint64_t __t859t__dat__pos=0;
  uint64_t __t859t__dat__length=0;
  char __t859t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t860t__=0;
  char* __t861t__unsafe_ptr=0;
  uint64_t __t861t__dat__pos=0;
  uint64_t __t861t__dat__length=0;
  char __t861t__dat__first=0;
  char __t862t__=0;
  char __t863t__=0;
  char __t864t=0;
  uint64_t __t865t__=0;
  uint64_t new_length=0;
  uint64_t __t866t=0;
  char __t867t__=0;
  char new_first=0;
  char* __t868t__=0;
  char __t869t__value=0;
  uint64_t __t870t__=0;
  char* __t871t__unsafe_ptr=0;
  uint64_t __t871t__dat__pos=0;
  uint64_t __t871t__dat__length=0;
  char __t871t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t859t__unsafe_ptr,&__t859t__dat__pos,&__t859t__dat__length,&__t859t__dat__first);
  s__unsafe_ptr=__t859t__unsafe_ptr;
  s__dat__pos=__t859t__dat__pos;
  s__dat__length=__t859t__dat__length;
  s__dat__first=__t859t__dat__first;
  eq__t119t(from,to,&__t860t__);
  if(__t860t__){
  __t_errcode=str__t668t(__t363t,&__t861t__unsafe_ptr,&__t861t__dat__pos,&__t861t__dat__length,&__t861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  lt__t248t(from,to,&__t862t__);
  if(!__t862t__){
  gt__t272t(to,s__dat__length,&__t863t__);
  __t864t=__t863t__;
  }
  if(__t864t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t348t(to,from,&__t865t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t865t__;
  __t866t=0;
  neq__t143t(from,__t866t,&__t867t__);
  if(__t867t__){
  get__t819t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t868t__);
  if(!__t868t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t869t__value,__t868t__,1);
  new_first=__t869t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t171t(s__dat__pos,from,&__t870t__);
  str__t626t(s__unsafe_ptr,__t870t__,new_length,new_first,&__t871t__unsafe_ptr,&__t871t__dat__pos,&__t871t__dat__length,&__t871t__dat__first);
  __t861t__unsafe_ptr=__t871t__unsafe_ptr;
  __t861t__dat__pos=__t871t__dat__pos;
  __t861t__dat__length=__t871t__dat__length;
  __t861t__dat__first=__t871t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1989t=__t861t__unsafe_ptr;
  *__t1990t=__t861t__dat__pos;
  *__t1991t=__t861t__dat__length;
  *__t1992t=__t861t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t680t(char x, char y, char* __t1993t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1993t=z;
}

static inline __attribute__((always_inline)) void eq__t823t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t1994t) {
  uint64_t __t824t__=0;
  uint64_t n=0;
  uint64_t __t825t__=0;
  char __t826t__=0;
  char __t827t=0;
  char __t828t__=0;
  char __t829t=0;
  char z=0;
  len__t676t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t824t__);
  n=__t824t__;
  len__t676t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t825t__);
  neq__t143t(n,__t825t__,&__t826t__);
  if(__t826t__){
  __t827t=0;
  goto __t_return;
  }
  neq__t680t(x__dat__first,y__dat__first,&__t828t__);
  if(__t828t__){
  __t829t=0;
  __t827t=__t829t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t827t=z;
  goto __t_return;
  __t_return:
  *__t1994t=__t827t;
}

static inline __attribute__((always_inline)) int ends_with__t936t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t1995t) {
  char* __t937t__unsafe_ptr=0;
  uint64_t __t937t__dat__pos=0;
  uint64_t __t937t__dat__length=0;
  char __t937t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t938t__unsafe_ptr=0;
  uint64_t __t938t__dat__pos=0;
  uint64_t __t938t__dat__length=0;
  char __t938t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t939t__=0;
  char __t940t=0;
  uint64_t __t941t__=0;
  uint64_t n=0;
  uint64_t __t942t__=0;
  uint64_t __t943t__=0;
  char* __t944t__unsafe_ptr=0;
  uint64_t __t944t__dat__pos=0;
  uint64_t __t944t__dat__length=0;
  char __t944t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t945t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t937t__unsafe_ptr,&__t937t__dat__pos,&__t937t__dat__length,&__t937t__dat__first);
  stack__unsafe_ptr=__t937t__unsafe_ptr;
  stack__dat__pos=__t937t__dat__pos;
  stack__dat__length=__t937t__dat__length;
  stack__dat__first=__t937t__dat__first;
  __t_errcode=str__t668t(_needle,&__t938t__unsafe_ptr,&__t938t__dat__pos,&__t938t__dat__length,&__t938t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t938t__unsafe_ptr;
  needle__dat__pos=__t938t__dat__pos;
  needle__dat__length=__t938t__dat__length;
  needle__dat__first=__t938t__dat__first;
  lt__t248t(stack__dat__length,needle__dat__length,&__t939t__);
  if(__t939t__){
  __t940t=0;
  goto __t_return;
  }
  len__t676t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t941t__);
  n=__t941t__;
  len__t676t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t942t__);
  __t_errcode=sub__t348t(n,__t942t__,&__t943t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t858t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t943t__,n,&__t944t__unsafe_ptr,&__t944t__dat__pos,&__t944t__dat__length,&__t944t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t944t__unsafe_ptr;
  ret__dat__pos=__t944t__dat__pos;
  ret__dat__length=__t944t__dat__length;
  ret__dat__first=__t944t__dat__first;
  eq__t823t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t945t__);
  __t940t=__t945t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1995t=__t940t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t756t(char** __t1996t, uint64_t* __t1997t, uint16_t* __t1998t, uint16_t* __t1999t, uint64_t* __t2000t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2001t, uint64_t* __t2002t, uint64_t* __t2003t, char* __t2004t) {
  char* buf__unsafe_ptr=*__t1996t;
  uint64_t buf__unsafe_size=*__t1997t;
  uint16_t buf__unsafe_offset=*__t1998t;
  uint16_t buf__unsafe_align=*__t1999t;
  uint64_t pos=*__t2000t;
  char* __t757t__unsafe_ptr=0;
  uint64_t __t757t__dat__pos=0;
  uint64_t __t757t__dat__length=0;
  char __t757t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t758t__=0;
  uint64_t __t759t__=0;
  uint64_t null_pos=0;
  uint64_t __t760t=0;
  uint64_t __t761t__=0;
  uint64_t next_pos=0;
  uint64_t __t762t__=0;
  char __t763t__=0;
  char* endpos=0;
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t prev_pos=0;
  char* __t766t__unsafe_ptr=0;
  uint64_t __t766t__dat__pos=0;
  uint64_t __t766t__dat__length=0;
  char __t766t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t757t__unsafe_ptr,&__t757t__dat__pos,&__t757t__dat__length,&__t757t__dat__first);
  other__unsafe_ptr=__t757t__unsafe_ptr;
  other__dat__pos=__t757t__dat__pos;
  other__dat__length=__t757t__dat__length;
  other__dat__first=__t757t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t758t__);
  add__t171t(pos,__t758t__,&__t759t__);
  null_pos=__t759t__;
  __t760t=1;
  add__t171t(null_pos,__t760t,&__t761t__);
  next_pos=__t761t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t762t__);
  gt__t272t(next_pos,__t762t__,&__t763t__);
  if(__t763t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t764t=0;
  add__t171t(pos,__t764t,&__t765t__);
  prev_pos=__t765t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t766t__unsafe_ptr,&__t766t__dat__pos,&__t766t__dat__length,&__t766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1996t=buf__unsafe_ptr;
  *__t1997t=buf__unsafe_size;
  *__t1998t=buf__unsafe_offset;
  *__t1999t=buf__unsafe_align;
  *__t2000t=pos;
  *__t2001t=__t766t__unsafe_ptr;
  *__t2002t=__t766t__dat__pos;
  *__t2003t=__t766t__dat__length;
  *__t2004t=__t766t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t736t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2005t) {
  uint64_t __t737t__=0;
  add__t171t(s__dat__pos,s__dat__length,&__t737t__);
  goto __t_return;
  __t_return:
  *__t2005t=__t737t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2006t) {
  int value=0;
  *__t2006t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2007t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2007t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t638t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2008t, uint64_t* __t2009t, uint64_t* __t2010t, char* __t2011t) {
  int __t639t=0;
  int __t640t=0;
  int __t641t__=0;
  uint64_t __t642t__=0;
  char __t643t__=0;
  uint64_t __t644t=0;
  uint64_t __t645t=0;
  char* __t646t__=0;
  char __t647t__value=0;
  char* __t648t__unsafe_ptr=0;
  uint64_t __t648t__dat__pos=0;
  uint64_t __t648t__dat__length=0;
  char __t648t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t38t(__t640t,&__t641t__);
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t642t__);
  gt__t272t(length,__t642t__,&__t643t__);
  if(__t643t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t644t=0;
  __t645t=0;
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t645t,&__t646t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t646t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t647t__value,__t646t__,1);
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t644t,length,__t647t__value,&__t648t__unsafe_ptr,&__t648t__dat__pos,&__t648t__dat__length,&__t648t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2008t=__t648t__unsafe_ptr;
  *__t2009t=__t648t__dat__pos;
  *__t2010t=__t648t__dat__length;
  *__t2011t=__t648t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t699t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2012t, uint64_t* __t2013t, uint64_t* __t2014t, char* __t2015t) {
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
  *__t2012t=__t708t__unsafe_ptr;
  *__t2013t=__t708t__dat__pos;
  *__t2014t=__t708t__dat__length;
  *__t2015t=__t708t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t709t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2016t, char** __t2017t, uint64_t* __t2018t, uint64_t* __t2019t, char* __t2020t) {
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
  *__t2016t=cstr;
  *__t2017t=str__unsafe_ptr;
  *__t2018t=str__dat__pos;
  *__t2019t=str__dat__length;
  *__t2020t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t716t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2021t) {
  goto __t_return;
  __t_return:
  *__t2021t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1327t(const char* cmd, char** __t2022t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2022t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1326t(char* unsafe_ptr, int64_t* __t2023t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2023t=status;
}

static inline __attribute__((always_inline)) void int__t416t(uint64_t x, int64_t* __t2024t) {
  int __t417t=0;
  int __t418t=0;
  int __t419t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2024t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2025t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2025t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2026t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2026t=z;
}

static inline __attribute__((always_inline)) int read__t1328t(const char* cmd, char** __t2027t) {
  char* __t1329t__=0;
  char* unsafe_ptr=0;
  char __t1330t__=0;
  char __t1331t__=0;
  char __t1332t__=0;
  int64_t __t1333t__=0;
  int64_t status=0;
  uint64_t __t1334t=0;
  int64_t __t1335t__=0;
  char __t1336t__=0;
  char __t1337t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1327t(cmd,&__t1329t__);
  unsafe_ptr=__t1329t__;
  exists__t436t(unsafe_ptr,&__t1330t__);
  not__t27t(__t1330t__,&__t1331t__);
  if(__t1331t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(unsafe_ptr,&__t1332t__);
  if(__t1332t__){
  pclose__t1326t(unsafe_ptr,&__t1333t__);
  status=__t1333t__;
  unsafe_ptr=0;
  __t1334t=0;
  int__t416t(__t1334t,&__t1335t__);
  neq__t132t(status,__t1335t__,&__t1336t__);
  if(__t1336t__){
  __t_complain=37;
  __t1337t=__t1337t==0;
  }
  }
  __t_return:
  *__t2027t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1339t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2028t) {
  const char* __t1340t__cstr=0;
  char* __t1340t__str__unsafe_ptr=0;
  uint64_t __t1340t__str__dat__pos=0;
  uint64_t __t1340t__str__dat__length=0;
  char __t1340t__str__dat__first=0;
  char __t1341t____t711t____t706t____t511t__=0;
  const char* __t1342t__=0;
  char* __t1343t__unsafe_ptr=0;
  char __t1344t____t1332t__=0;
  int64_t __t1344t____t1333t__=0;
  int64_t __t1344t__status=0;
  uint64_t __t1344t____t1334t=0;
  int64_t __t1344t____t1335t__=0;
  char __t1344t____t1336t__=0;
  char __t1344t____t1337t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t709t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1340t__cstr,&__t1340t__str__unsafe_ptr,&__t1340t__str__dat__pos,&__t1340t__str__dat__length,&__t1340t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t716t(__t1340t__cstr,__t1340t__str__unsafe_ptr,__t1340t__str__dat__pos,__t1340t__str__dat__length,__t1340t__str__dat__first,&__t1342t__);
  __t_errcode=read__t1328t(__t1342t__,&__t1343t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t1343t__unsafe_ptr,&__t1344t____t1332t__);
  if(__t1344t____t1332t__){
  pclose__t1326t(__t1343t__unsafe_ptr,&__t1344t____t1333t__);
  __t1344t__status=__t1344t____t1333t__;
  __t1343t__unsafe_ptr=0;
  __t1344t____t1334t=0;
  int__t416t(__t1344t____t1334t,&__t1344t____t1335t__);
  neq__t132t(__t1344t__status,__t1344t____t1335t__,&__t1344t____t1336t__);
  if(__t1344t____t1336t__){
  __t_complain=37;
  __t1344t____t1337t=__t1344t____t1337t==0;
  }
  }
  __t_return:
  *__t2028t=__t1343t__unsafe_ptr;
  exists__t436t(__t1340t__str__unsafe_ptr,&__t1341t____t711t____t706t____t511t__);
  if(__t1341t____t711t____t706t____t511t__){
  free__t502t(&__t1340t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1320t(int64_t value, const char** __t2029t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2029t=ret;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t1860t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t1861t__unsafe_ptr=0;
  char __t1862t____t1344t____t1332t__=0;
  int64_t __t1862t____t1344t____t1333t__=0;
  int64_t __t1862t____t1344t__status=0;
  uint64_t __t1862t____t1344t____t1334t=0;
  int64_t __t1862t____t1344t____t1335t__=0;
  char __t1862t____t1344t____t1336t__=0;
  char __t1862t____t1344t____t1337t=0;
  char* __t1863t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t1864t=0;
  int64_t __t1865t=0;
  int64_t error=0;
  const char* __t1866t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1339t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t1861t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1863t__unsafe_ptr=__t1861t__unsafe_ptr;
  proc__unsafe_ptr=__t1863t__unsafe_ptr;
  exists__t436t(__t1861t__unsafe_ptr,&__t1862t____t1344t____t1332t__);
  if(__t1862t____t1344t____t1332t__){
  pclose__t1326t(__t1861t__unsafe_ptr,&__t1862t____t1344t____t1333t__);
  __t1862t____t1344t__status=__t1862t____t1344t____t1333t__;
  __t1861t__unsafe_ptr=0;
  __t1862t____t1344t____t1334t=0;
  int__t416t(__t1862t____t1344t____t1334t,&__t1862t____t1344t____t1335t__);
  neq__t132t(__t1862t____t1344t__status,__t1862t____t1344t____t1335t__,&__t1862t____t1344t____t1336t__);
  if(__t1862t____t1344t____t1336t__){
  __t_complain=37;
  __t1862t____t1344t____t1337t=__t1862t____t1344t____t1337t==0;
  }
  }
  __t1865t=__t_complain;
  __t1864t=(__t_complain==0);
  __t_complain=0;
  error=__t1865t;
  __t1864t=__t1864t==0;
  if(__t1864t){
  cstr__t1320t(error,&__t1866t__);
  print__t369t(__t1866t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1868t() {
  const char* path=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__unsafe_size=0;
  uint16_t __t1870t__unsafe_offset=0;
  uint16_t __t1870t__unsafe_align=0;
  uint64_t __t1871t=0;
  char* __t1872t__unsafe_ptr=0;
  uint64_t __t1872t__unsafe_size=0;
  uint16_t __t1872t__unsafe_offset=0;
  uint16_t __t1872t__unsafe_align=0;
  char __t1873t____t511t__=0;
  char* __t1874t__buf__unsafe_ptr=0;
  uint64_t __t1874t__buf__unsafe_size=0;
  uint16_t __t1874t__buf__unsafe_offset=0;
  uint16_t __t1874t__buf__unsafe_align=0;
  uint64_t __t1874t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t1876t__unsafe_ptr=0;
  uint64_t __t1876t__dat__pos=0;
  uint64_t __t1876t__dat__length=0;
  char __t1876t__dat__first=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__dat__pos=0;
  uint64_t __t1877t__dat__length=0;
  char __t1877t__dat__first=0;
  char* __t1878t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t1880t__unsafe_ptr=0;
  uint64_t __t1880t__unsafe_size=0;
  uint16_t __t1880t__unsafe_offset=0;
  uint16_t __t1880t__unsafe_align=0;
  uint64_t __t1881t=0;
  uint64_t __t1882t__=0;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__unsafe_size=0;
  uint16_t __t1883t__unsafe_offset=0;
  uint16_t __t1883t__unsafe_align=0;
  char __t1884t____t511t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t1885t=0;
  char __t1886t=0;
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__dat__pos=0;
  uint64_t __t1887t__dat__length=0;
  char __t1887t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t1889t__=0;
  char __t1890t__=0;
  char* __t1891t__buf__unsafe_ptr=0;
  uint64_t __t1891t__buf__unsafe_size=0;
  uint16_t __t1891t__buf__unsafe_offset=0;
  uint16_t __t1891t__buf__unsafe_align=0;
  uint64_t __t1891t__pos=0;
  char* __t1892t__unsafe_ptr=0;
  uint64_t __t1892t__dat__pos=0;
  uint64_t __t1892t__dat__length=0;
  char __t1892t__dat__first=0;
  char* __t1893t__unsafe_ptr=0;
  uint64_t __t1893t__dat__pos=0;
  uint64_t __t1893t__dat__length=0;
  char __t1893t__dat__first=0;
  uint64_t __t1894t__=0;
  char* __t1895t__unsafe_ptr=0;
  uint64_t __t1895t__dat__pos=0;
  uint64_t __t1895t__dat__length=0;
  char __t1895t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t1869t;
  char____t_buffer____buffer__t1345t(&__t1870t__unsafe_ptr,&__t1870t__unsafe_size,&__t1870t__unsafe_offset,&__t1870t__unsafe_align);
  __t1871t=256;
  __t_errcode=alloc__t509t(&__t1870t__unsafe_ptr,&__t1870t__unsafe_size,&__t1870t__unsafe_offset,&__t1870t__unsafe_align,__t1871t,&__t1872t__unsafe_ptr,&__t1872t__unsafe_size,&__t1872t__unsafe_offset,&__t1872t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1872t__unsafe_ptr,&__t1872t__unsafe_size,&__t1872t__unsafe_offset,&__t1872t__unsafe_align,&__t1874t__buf__unsafe_ptr,&__t1874t__buf__unsafe_size,&__t1874t__buf__unsafe_offset,&__t1874t__buf__unsafe_align,&__t1874t__pos);
  bp__buf__unsafe_ptr=__t1874t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t1874t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t1874t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t1874t__buf__unsafe_align;
  bp__pos=__t1874t__pos;
  __t_errcode=copy__t747t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t1875t,&__t1876t__unsafe_ptr,&__t1876t__dat__pos,&__t1876t__dat__length,&__t1876t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t747t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t1877t__unsafe_ptr,&__t1877t__dat__pos,&__t1877t__dat__length,&__t1877t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1738t(path,&__t1878t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t1878t__unsafe_ptr;
  char____t_buffer____buffer__t1345t(&__t1880t__unsafe_ptr,&__t1880t__unsafe_size,&__t1880t__unsafe_offset,&__t1880t__unsafe_align);
  __t1881t=4;
  KB__t480t(__t1881t,&__t1882t__);
  __t_errcode=alloc__t509t(&__t1880t__unsafe_ptr,&__t1880t__unsafe_size,&__t1880t__unsafe_offset,&__t1880t__unsafe_align,__t1882t__,&__t1883t__unsafe_ptr,&__t1883t__unsafe_size,&__t1883t__unsafe_offset,&__t1883t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t1883t__unsafe_ptr;
  proc_buf__unsafe_size=__t1883t__unsafe_size;
  proc_buf__unsafe_offset=__t1883t__unsafe_offset;
  proc_buf__unsafe_align=__t1883t__unsafe_align;
  __t1885t=0;
  while(1){
  __t_complain=get__t1802t(&test_dir__unsafe_ptr,__t1885t,&__t1887t__unsafe_ptr,&__t1887t__dat__pos,&__t1887t__dat__length,&__t1887t__dat__first);
  __t1886t=__t_complain;
  entry__unsafe_ptr=__t1887t__unsafe_ptr;
  entry__dat__pos=__t1887t__dat__pos;
  entry__dat__length=__t1887t__dat__length;
  entry__dat__first=__t1887t__dat__first;
  __t1886t=__t1886t==0;
  __t1885t=__t1885t+1;
  if(!__t1886t){
  break;
  }
  __t_errcode=ends_with__t936t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t1888t,&__t1889t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t1889t__,&__t1890t__);
  if(__t1890t__){
  continue;
  }
  __t1891t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t1891t__buf__unsafe_size=bp__buf__unsafe_size;
  __t1891t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t1891t__buf__unsafe_align=bp__buf__unsafe_align;
  __t1891t__pos=bp__pos;
  str__t661t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t1892t__unsafe_ptr,&__t1892t__dat__pos,&__t1892t__dat__length,&__t1892t__dat__first);
  __t_errcode=copy_null_terminated__t756t(&__t1891t__buf__unsafe_ptr,&__t1891t__buf__unsafe_size,&__t1891t__buf__unsafe_offset,&__t1891t__buf__unsafe_align,&__t1891t__pos,__t1892t__unsafe_ptr,__t1892t__dat__pos,__t1892t__dat__length,__t1892t__dat__first,&__t1893t__unsafe_ptr,&__t1893t__dat__pos,&__t1893t__dat__length,&__t1893t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t736t(__t1893t__unsafe_ptr,__t1893t__dat__pos,__t1893t__dat__length,__t1893t__dat__first,&__t1894t__);
  __t_errcode=str__t638t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t1894t__,&__t1895t__unsafe_ptr,&__t1895t__dat__pos,&__t1895t__dat__length,&__t1895t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t1895t__unsafe_ptr;
  command__dat__pos=__t1895t__dat__pos;
  command__dat__length=__t1895t__dat__length;
  command__dat__first=__t1895t__dat__first;
  print__t780t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t1860t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:exists__t436t(__t1883t__unsafe_ptr,&__t1884t____t511t__);
  if(__t1884t____t511t__){
  free__t502t(&__t1883t__unsafe_ptr);
  }
  closedir__t1737t(__t1878t__unsafe_ptr);
  exists__t436t(__t1872t__unsafe_ptr,&__t1873t____t511t__);
  if(__t1873t____t511t__){
  free__t502t(&__t1872t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1868t();return 0;}