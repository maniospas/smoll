#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1763t="curl -s -X GET \"";
const char* const __t1764t="\" -o ";
const char* const __t1863t="https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/README.md";
const char* const __t1798t=".tmp";
const char* const __t1875t=" bytes downloaded\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1345t(char** __t1877t, uint64_t* __t1878t, uint16_t* __t1879t, uint16_t* __t1880t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1877t=unsafe_ptr;
  *__t1878t=unsafe_size;
  *__t1879t=unsafe_offset;
  *__t1880t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1881t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1881t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1882t) {
  char* allocated=*__t1882t;
  if(allocated){
  free(allocated);
  }
  *__t1882t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1883t) {
  int value=0;
  *__t1883t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1884t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1884t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1885t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1885t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1886t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1887t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1887t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1888t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1888t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1889t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1889t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1890t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1890t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1891t) {
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
  *__t1891t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1892t, uint64_t* __t1893t, uint16_t* __t1894t, uint16_t* __t1895t, uint64_t size, char** __t1896t, uint64_t* __t1897t, uint16_t* __t1898t, uint16_t* __t1899t) {
  char* buffer__unsafe_ptr=*__t1892t;
  uint64_t buffer__unsafe_size=*__t1893t;
  uint16_t buffer__unsafe_offset=*__t1894t;
  uint16_t buffer__unsafe_align=*__t1895t;
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
  *__t1892t=buffer__unsafe_ptr;
  *__t1893t=buffer__unsafe_size;
  *__t1894t=buffer__unsafe_offset;
  *__t1895t=buffer__unsafe_align;
  *__t1896t=buffer__unsafe_ptr;
  *__t1897t=buffer__unsafe_size;
  *__t1898t=buffer__unsafe_offset;
  *__t1899t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1900t=unsafe_ptr;
  *__t1901t=unsafe_size;
  *__t1902t=unsafe_offset;
  *__t1903t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1904t) {
  *__t1904t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1905t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1905t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1906t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1906t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1907t) {
  *__t1907t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1908t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1908t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1909t) {
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
  *__t1909t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1910t, uint64_t* __t1911t, uint64_t* __t1912t, char* __t1913t) {
  goto __t_return;
  __t_return:
  *__t1910t=unsafe_ptr;
  *__t1911t=dat__pos;
  *__t1912t=dat__length;
  *__t1913t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1914t, uint64_t* __t1915t, uint64_t* __t1916t, char* __t1917t) {
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
  *__t1914t=__t637t__unsafe_ptr;
  *__t1915t=__t637t__dat__pos;
  *__t1916t=__t637t__dat__length;
  *__t1917t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1918t, uint64_t* __t1919t, uint64_t* __t1920t, char* __t1921t) {
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
  *__t1918t=__t667t__unsafe_ptr;
  *__t1919t=__t667t__dat__pos;
  *__t1920t=__t667t__dat__length;
  *__t1921t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1922t, uint64_t* __t1923t, uint64_t* __t1924t, char* __t1925t) {
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
  *__t1922t=__t675t__unsafe_ptr;
  *__t1923t=__t675t__dat__pos;
  *__t1924t=__t675t__dat__length;
  *__t1925t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void url__t1757t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t1926t, uint64_t* __t1927t, uint64_t* __t1928t, char* __t1929t) {
  goto __t_return;
  __t_return:
  *__t1926t=path__unsafe_ptr;
  *__t1927t=path__dat__pos;
  *__t1928t=path__dat__length;
  *__t1929t=path__dat__first;
}

static inline __attribute__((always_inline)) int url__t1759t(const char* path, char** __t1930t, uint64_t* __t1931t, uint64_t* __t1932t, char* __t1933t) {
  char* __t1760t__unsafe_ptr=0;
  uint64_t __t1760t__dat__pos=0;
  uint64_t __t1760t__dat__length=0;
  char __t1760t__dat__first=0;
  char* __t1761t__path__unsafe_ptr=0;
  uint64_t __t1761t__path__dat__pos=0;
  uint64_t __t1761t__path__dat__length=0;
  char __t1761t__path__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(path,&__t1760t__unsafe_ptr,&__t1760t__dat__pos,&__t1760t__dat__length,&__t1760t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  url__t1757t(__t1760t__unsafe_ptr,__t1760t__dat__pos,__t1760t__dat__length,__t1760t__dat__first,&__t1761t__path__unsafe_ptr,&__t1761t__path__dat__pos,&__t1761t__path__dat__length,&__t1761t__path__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1930t=__t1761t__path__unsafe_ptr;
  *__t1931t=__t1761t__path__dat__pos;
  *__t1932t=__t1761t__path__dat__length;
  *__t1933t=__t1761t__path__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1934t) {
  goto __t_return;
  __t_return:
  *__t1934t=s__dat__length;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1935t, uint64_t* __t1936t, uint16_t* __t1937t, uint16_t* __t1938t, char** __t1939t, uint64_t* __t1940t, uint16_t* __t1941t, uint16_t* __t1942t, uint64_t* __t1943t) {
  char* buf__unsafe_ptr=*__t1935t;
  uint64_t buf__unsafe_size=*__t1936t;
  uint16_t buf__unsafe_offset=*__t1937t;
  uint16_t buf__unsafe_align=*__t1938t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1935t=buf__unsafe_ptr;
  *__t1936t=buf__unsafe_size;
  *__t1937t=buf__unsafe_offset;
  *__t1938t=buf__unsafe_align;
  *__t1939t=buf__unsafe_ptr;
  *__t1940t=buf__unsafe_size;
  *__t1941t=buf__unsafe_offset;
  *__t1942t=buf__unsafe_align;
  *__t1943t=pos;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1944t) {
  goto __t_return;
  __t_return:
  *__t1944t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1945t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1945t=z;
}

int copy__t747t(char** __t1946t, uint64_t* __t1947t, uint16_t* __t1948t, uint16_t* __t1949t, uint64_t* __t1950t, const char* _other, char** __t1951t, uint64_t* __t1952t, uint64_t* __t1953t, char* __t1954t) {
  char* buf__unsafe_ptr=*__t1946t;
  uint64_t buf__unsafe_size=*__t1947t;
  uint16_t buf__unsafe_offset=*__t1948t;
  uint16_t buf__unsafe_align=*__t1949t;
  uint64_t pos=*__t1950t;
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
  *__t1946t=buf__unsafe_ptr;
  *__t1947t=buf__unsafe_size;
  *__t1948t=buf__unsafe_offset;
  *__t1949t=buf__unsafe_align;
  *__t1950t=pos;
  *__t1951t=__t755t__unsafe_ptr;
  *__t1952t=__t755t__dat__pos;
  *__t1953t=__t755t__dat__length;
  *__t1954t=__t755t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1955t, uint64_t* __t1956t, uint64_t* __t1957t, char* __t1958t) {
  goto __t_return;
  __t_return:
  *__t1955t=other__unsafe_ptr;
  *__t1956t=other__dat__pos;
  *__t1957t=other__dat__length;
  *__t1958t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t738t(char** __t1959t, uint64_t* __t1960t, uint16_t* __t1961t, uint16_t* __t1962t, uint64_t* __t1963t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1964t, uint64_t* __t1965t, uint64_t* __t1966t, char* __t1967t) {
  char* buf__unsafe_ptr=*__t1959t;
  uint64_t buf__unsafe_size=*__t1960t;
  uint16_t buf__unsafe_offset=*__t1961t;
  uint16_t buf__unsafe_align=*__t1962t;
  uint64_t pos=*__t1963t;
  char* __t739t__unsafe_ptr=0;
  uint64_t __t739t__dat__pos=0;
  uint64_t __t739t__dat__length=0;
  char __t739t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t740t__=0;
  uint64_t __t741t__=0;
  uint64_t next_pos=0;
  uint64_t __t742t__=0;
  char __t743t__=0;
  uint64_t __t744t=0;
  uint64_t __t745t__=0;
  uint64_t prev_pos=0;
  char* __t746t__unsafe_ptr=0;
  uint64_t __t746t__dat__pos=0;
  uint64_t __t746t__dat__length=0;
  char __t746t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t739t__unsafe_ptr,&__t739t__dat__pos,&__t739t__dat__length,&__t739t__dat__first);
  other__unsafe_ptr=__t739t__unsafe_ptr;
  other__dat__pos=__t739t__dat__pos;
  other__dat__length=__t739t__dat__length;
  other__dat__first=__t739t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t740t__);
  add__t171t(pos,__t740t__,&__t741t__);
  next_pos=__t741t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t742t__);
  gt__t272t(next_pos,__t742t__,&__t743t__);
  if(__t743t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t744t=0;
  add__t171t(pos,__t744t,&__t745t__);
  prev_pos=__t745t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t746t__unsafe_ptr,&__t746t__dat__pos,&__t746t__dat__length,&__t746t__dat__first);
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
  *__t1964t=__t746t__unsafe_ptr;
  *__t1965t=__t746t__dat__pos;
  *__t1966t=__t746t__dat__length;
  *__t1967t=__t746t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1968t) {
  int value=0;
  *__t1968t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1969t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1969t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t638t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t1970t, uint64_t* __t1971t, uint64_t* __t1972t, char* __t1973t) {
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
  *__t1970t=__t648t__unsafe_ptr;
  *__t1971t=__t648t__dat__pos;
  *__t1972t=__t648t__dat__length;
  *__t1973t=__t648t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t699t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1974t, uint64_t* __t1975t, uint64_t* __t1976t, char* __t1977t) {
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
  *__t1974t=__t708t__unsafe_ptr;
  *__t1975t=__t708t__dat__pos;
  *__t1976t=__t708t__dat__length;
  *__t1977t=__t708t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t709t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1978t, char** __t1979t, uint64_t* __t1980t, uint64_t* __t1981t, char* __t1982t) {
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
  *__t1978t=cstr;
  *__t1979t=str__unsafe_ptr;
  *__t1980t=str__dat__pos;
  *__t1981t=str__dat__length;
  *__t1982t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t716t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1983t) {
  goto __t_return;
  __t_return:
  *__t1983t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1384t(const char* cmd, const char** __t1984t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=39;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1984t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1383t(const char* cmd, int64_t* __t1985t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t1985t=result;
}

static inline __attribute__((always_inline)) void int__t416t(uint64_t x, int64_t* __t1986t) {
  int __t417t=0;
  int __t418t=0;
  int __t419t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1986t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t1987t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t1987t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t1988t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1988t=z;
}

static inline __attribute__((always_inline)) int system__t1393t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1394t__cstr=0;
  char* __t1394t__str__unsafe_ptr=0;
  uint64_t __t1394t__str__dat__pos=0;
  uint64_t __t1394t__str__dat__length=0;
  char __t1394t__str__dat__first=0;
  char __t1395t____t711t____t706t____t511t__=0;
  const char* __t1396t__=0;
  const char* __t1397t__=0;
  int64_t __t1398t__=0;
  int64_t result=0;
  uint64_t __t1399t=0;
  int64_t __t1400t__=0;
  char __t1401t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t709t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1394t__cstr,&__t1394t__str__unsafe_ptr,&__t1394t__str__dat__pos,&__t1394t__str__dat__length,&__t1394t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t716t(__t1394t__cstr,__t1394t__str__unsafe_ptr,__t1394t__str__dat__pos,__t1394t__str__dat__length,__t1394t__str__dat__first,&__t1396t__);
  __t_errcode=safe__t1384t(__t1396t__,&__t1397t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1383t(__t1397t__,&__t1398t__);
  result=__t1398t__;
  __t1399t=0;
  int__t416t(__t1399t,&__t1400t__);
  neq__t132t(result,__t1400t__,&__t1401t__);
  if(__t1401t__){
  __t_errcode=40;
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1394t__str__unsafe_ptr,&__t1395t____t711t____t706t____t511t__);
  if(__t1395t____t711t____t706t____t511t__){
  free__t502t(&__t1394t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

int raw_get__t1762t(char* url__path__unsafe_ptr, uint64_t url__path__dat__pos, uint64_t url__path__dat__length, char url__path__dat__first, char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first) {
  const char* prefix=0;
  const char* postfix=0;
  char* __t1765t__unsafe_ptr=0;
  uint64_t __t1765t__unsafe_size=0;
  uint16_t __t1765t__unsafe_offset=0;
  uint16_t __t1765t__unsafe_align=0;
  uint64_t __t1766t__=0;
  uint64_t __t1767t__=0;
  char* __t1768t__unsafe_ptr=0;
  uint64_t __t1768t__dat__pos=0;
  uint64_t __t1768t__dat__length=0;
  char __t1768t__dat__first=0;
  uint64_t __t1769t__=0;
  char* __t1770t__unsafe_ptr=0;
  uint64_t __t1770t__dat__pos=0;
  uint64_t __t1770t__dat__length=0;
  char __t1770t__dat__first=0;
  uint64_t __t1771t__=0;
  uint64_t __t1772t=0;
  uint64_t __t1773t__=0;
  uint64_t __t1774t__=0;
  uint64_t __t1775t__=0;
  uint64_t __t1776t__=0;
  char* __t1777t__unsafe_ptr=0;
  uint64_t __t1777t__unsafe_size=0;
  uint16_t __t1777t__unsafe_offset=0;
  uint16_t __t1777t__unsafe_align=0;
  char __t1778t____t511t__=0;
  char* __t1779t__buf__unsafe_ptr=0;
  uint64_t __t1779t__buf__unsafe_size=0;
  uint16_t __t1779t__buf__unsafe_offset=0;
  uint16_t __t1779t__buf__unsafe_align=0;
  uint64_t __t1779t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1780t__unsafe_ptr=0;
  uint64_t __t1780t__dat__pos=0;
  uint64_t __t1780t__dat__length=0;
  char __t1780t__dat__first=0;
  char* __t1781t__unsafe_ptr=0;
  uint64_t __t1781t__dat__pos=0;
  uint64_t __t1781t__dat__length=0;
  char __t1781t__dat__first=0;
  char* __t1782t__unsafe_ptr=0;
  uint64_t __t1782t__dat__pos=0;
  uint64_t __t1782t__dat__length=0;
  char __t1782t__dat__first=0;
  char* __t1783t__unsafe_ptr=0;
  uint64_t __t1783t__dat__pos=0;
  uint64_t __t1783t__dat__length=0;
  char __t1783t__dat__first=0;
  char* __t1784t__unsafe_ptr=0;
  uint64_t __t1784t__dat__pos=0;
  uint64_t __t1784t__dat__length=0;
  char __t1784t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  prefix=__t1763t;
  postfix=__t1764t;
  char____t_buffer____buffer__t1345t(&__t1765t__unsafe_ptr,&__t1765t__unsafe_size,&__t1765t__unsafe_offset,&__t1765t__unsafe_align);
  len__t676t(url__path__unsafe_ptr,url__path__dat__pos,url__path__dat__length,url__path__dat__first,&__t1766t__);
  len__t676t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t1767t__);
  __t_errcode=str__t668t(prefix,&__t1768t__unsafe_ptr,&__t1768t__dat__pos,&__t1768t__dat__length,&__t1768t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t676t(__t1768t__unsafe_ptr,__t1768t__dat__pos,__t1768t__dat__length,__t1768t__dat__first,&__t1769t__);
  __t_errcode=str__t668t(postfix,&__t1770t__unsafe_ptr,&__t1770t__dat__pos,&__t1770t__dat__length,&__t1770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t676t(__t1770t__unsafe_ptr,__t1770t__dat__pos,__t1770t__dat__length,__t1770t__dat__first,&__t1771t__);
  __t1772t=1;
  add__t171t(__t1771t__,__t1772t,&__t1773t__);
  add__t171t(__t1769t__,__t1773t__,&__t1774t__);
  add__t171t(__t1767t__,__t1774t__,&__t1775t__);
  add__t171t(__t1766t__,__t1775t__,&__t1776t__);
  __t_errcode=alloc__t509t(&__t1765t__unsafe_ptr,&__t1765t__unsafe_size,&__t1765t__unsafe_offset,&__t1765t__unsafe_align,__t1776t__,&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align,&__t1779t__buf__unsafe_ptr,&__t1779t__buf__unsafe_size,&__t1779t__buf__unsafe_offset,&__t1779t__buf__unsafe_align,&__t1779t__pos);
  buf__buf__unsafe_ptr=__t1779t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1779t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1779t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1779t__buf__unsafe_align;
  buf__pos=__t1779t__pos;
  __t_errcode=copy__t747t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,prefix,&__t1780t__unsafe_ptr,&__t1780t__dat__pos,&__t1780t__dat__length,&__t1780t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t738t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,url__path__unsafe_ptr,url__path__dat__pos,url__path__dat__length,url__path__dat__first,&__t1781t__unsafe_ptr,&__t1781t__dat__pos,&__t1781t__dat__length,&__t1781t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t747t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,postfix,&__t1782t__unsafe_ptr,&__t1782t__dat__pos,&__t1782t__dat__length,&__t1782t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t738t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t1783t__unsafe_ptr,&__t1783t__dat__pos,&__t1783t__dat__length,&__t1783t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t638t(buf__buf__unsafe_ptr,buf__buf__unsafe_size,buf__buf__unsafe_offset,buf__buf__unsafe_align,buf__pos,&__t1784t__unsafe_ptr,&__t1784t__dat__pos,&__t1784t__dat__length,&__t1784t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=system__t1393t(__t1784t__unsafe_ptr,__t1784t__dat__pos,__t1784t__dat__length,__t1784t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1777t__unsafe_ptr,&__t1778t____t511t__);
  if(__t1778t____t511t__){
  free__t502t(&__t1777t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1796t(char* url__path__unsafe_ptr, uint64_t url__path__dat__pos, uint64_t url__path__dat__length, char url__path__dat__first, char** __t1989t, uint64_t* __t1990t, uint64_t* __t1991t, char* __t1992t) {
  int __t1797t=0;
  const char* path=0;
  char* __t1799t__unsafe_ptr=0;
  uint64_t __t1799t__dat__pos=0;
  uint64_t __t1799t__dat__length=0;
  char __t1799t__dat__first=0;
  char* __t1801t__unsafe_ptr=0;
  uint64_t __t1801t__dat__pos=0;
  uint64_t __t1801t__dat__length=0;
  char __t1801t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t1798t;
  __t_errcode=str__t668t(path,&__t1799t__unsafe_ptr,&__t1799t__dat__pos,&__t1799t__dat__length,&__t1799t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=raw_get__t1762t(url__path__unsafe_ptr,url__path__dat__pos,url__path__dat__length,url__path__dat__first,__t1799t__unsafe_ptr,__t1799t__dat__pos,__t1799t__dat__length,__t1799t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t668t(path,&__t1801t__unsafe_ptr,&__t1801t__dat__pos,&__t1801t__dat__length,&__t1801t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1989t=__t1801t__unsafe_ptr;
  *__t1990t=__t1801t__dat__pos;
  *__t1991t=__t1801t__dat__length;
  *__t1992t=__t1801t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1402t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t1993t) {
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
  *__t1993t=unsafe_ptr;
  exists__t436t(__t1403t__str__unsafe_ptr,&__t1404t____t711t____t706t____t511t__);
  if(__t1404t____t711t____t706t____t511t__){
  free__t502t(&__t1403t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1994t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1994t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1995t) {
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
  *__t1995t=z;
  
  return __t_errcode;
}

int line__t1573t(char** __t1996t, uint64_t* __t1997t, uint16_t* __t1998t, uint16_t* __t1999t, uint64_t* __t2000t, char** __t2001t, char** __t2002t, uint64_t* __t2003t, uint64_t* __t2004t, char* __t2005t) {
  char* buf__unsafe_ptr=*__t1996t;
  uint64_t buf__unsafe_size=*__t1997t;
  uint16_t buf__unsafe_offset=*__t1998t;
  uint16_t buf__unsafe_align=*__t1999t;
  uint64_t pos=*__t2000t;
  char* f__unsafe_ptr=*__t2001t;
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
  *__t1996t=buf__unsafe_ptr;
  *__t1997t=buf__unsafe_size;
  *__t1998t=buf__unsafe_offset;
  *__t1999t=buf__unsafe_align;
  *__t2000t=pos;
  *__t2001t=f__unsafe_ptr;
  *__t2002t=__t1582t__unsafe_ptr;
  *__t2003t=__t1582t__dat__pos;
  *__t2004t=__t1582t__dat__length;
  *__t2005t=__t1582t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1822t(char** __t2006t, uint64_t* __t2007t, uint16_t* __t2008t, uint16_t* __t2009t, char** __t2010t, uint64_t __t_anon3, char** __t2011t, uint64_t* __t2012t, uint64_t* __t2013t, char* __t2014t) {
  char* buf__unsafe_ptr=*__t2006t;
  uint64_t buf__unsafe_size=*__t2007t;
  uint16_t buf__unsafe_offset=*__t2008t;
  uint16_t buf__unsafe_align=*__t2009t;
  char* f__unsafe_ptr=*__t2010t;
  int __t1823t=0;
  uint64_t __t1824t=0;
  uint64_t __t1825t=0;
  uint64_t pos=0;
  char* __t1826t__unsafe_ptr=0;
  uint64_t __t1826t__dat__pos=0;
  uint64_t __t1826t__dat__length=0;
  char __t1826t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1824t=0;
  __t1825t=__t1824t;
  pos=__t1825t;
  __t_errcode=line__t1573t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t1826t__unsafe_ptr,&__t1826t__dat__pos,&__t1826t__dat__length,&__t1826t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2006t=buf__unsafe_ptr;
  *__t2007t=buf__unsafe_size;
  *__t2008t=buf__unsafe_offset;
  *__t2009t=buf__unsafe_align;
  *__t2010t=f__unsafe_ptr;
  *__t2011t=__t1826t__unsafe_ptr;
  *__t2012t=__t1826t__dat__pos;
  *__t2013t=__t1826t__dat__length;
  *__t2014t=__t1826t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(uint64_t value, const char* endl) {
  int __t381t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1858t() {
  char* __t1859t__unsafe_ptr=0;
  uint64_t __t1859t__unsafe_size=0;
  uint16_t __t1859t__unsafe_offset=0;
  uint16_t __t1859t__unsafe_align=0;
  uint64_t __t1860t=0;
  char* __t1861t__unsafe_ptr=0;
  uint64_t __t1861t__unsafe_size=0;
  uint16_t __t1861t__unsafe_offset=0;
  uint16_t __t1861t__unsafe_align=0;
  char __t1862t____t511t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  char* __t1864t__path__unsafe_ptr=0;
  uint64_t __t1864t__path__dat__pos=0;
  uint64_t __t1864t__path__dat__length=0;
  char __t1864t__path__dat__first=0;
  char* __t1865t__unsafe_ptr=0;
  uint64_t __t1865t__dat__pos=0;
  uint64_t __t1865t__dat__length=0;
  char __t1865t__dat__first=0;
  char* __t1866t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t1868t=0;
  uint64_t __t1869t=0;
  uint64_t size=0;
  uint64_t __t1870t=0;
  char __t1871t=0;
  char* __t1872t__unsafe_ptr=0;
  uint64_t __t1872t__dat__pos=0;
  uint64_t __t1872t__dat__length=0;
  char __t1872t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t1873t__=0;
  uint64_t __t1874t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1345t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align);
  __t1860t=4096;
  __t_errcode=alloc__t509t(&__t1859t__unsafe_ptr,&__t1859t__unsafe_size,&__t1859t__unsafe_offset,&__t1859t__unsafe_align,__t1860t,&__t1861t__unsafe_ptr,&__t1861t__unsafe_size,&__t1861t__unsafe_offset,&__t1861t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t1861t__unsafe_ptr;
  mem__unsafe_size=__t1861t__unsafe_size;
  mem__unsafe_offset=__t1861t__unsafe_offset;
  mem__unsafe_align=__t1861t__unsafe_align;
  __t_errcode=url__t1759t(__t1863t,&__t1864t__path__unsafe_ptr,&__t1864t__path__dat__pos,&__t1864t__path__dat__length,&__t1864t__path__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1796t(__t1864t__path__unsafe_ptr,__t1864t__path__dat__pos,__t1864t__path__dat__length,__t1864t__path__dat__first,&__t1865t__unsafe_ptr,&__t1865t__dat__pos,&__t1865t__dat__length,&__t1865t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1402t(__t1865t__unsafe_ptr,__t1865t__dat__pos,__t1865t__dat__length,__t1865t__dat__first,&__t1866t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t1866t__unsafe_ptr;
  __t1868t=0;
  __t1869t=__t1868t;
  size=__t1869t;
  __t1870t=0;
  while(1){
  __t_complain=get__t1822t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&f__unsafe_ptr,__t1870t,&__t1872t__unsafe_ptr,&__t1872t__dat__pos,&__t1872t__dat__length,&__t1872t__dat__first);
  __t1871t=__t_complain;
  line__unsafe_ptr=__t1872t__unsafe_ptr;
  line__dat__pos=__t1872t__dat__pos;
  line__dat__length=__t1872t__dat__length;
  line__dat__first=__t1872t__dat__first;
  __t1871t=__t1871t==0;
  __t1870t=__t1870t+1;
  if(!__t1871t){
  break;
  }
  len__t676t(line__unsafe_ptr,line__dat__pos,line__dat__length,line__dat__first,&__t1873t__);
  add__t171t(size,__t1873t__,&__t1874t__);
  size=__t1874t__;
  }
  print__t380t(size,__t1875t);
  
  __t_failure:if(__t1866t__unsafe_ptr){
  fclose((FILE*)__t1866t__unsafe_ptr);
  __t1866t__unsafe_ptr=0;
  }
  exists__t436t(__t1861t__unsafe_ptr,&__t1862t____t511t__);
  if(__t1862t____t511t__){
  free__t502t(&__t1861t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1858t();return 0;}