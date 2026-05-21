#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1859t="./tests/passing/";
const char* const __t1878t=".s";
const char* const __t362t="";
const char* const __t370t="\n";
const char* const __t1865t="./smoll ";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1332t(char** __t1888t, uint64_t* __t1889t, uint16_t* __t1890t, uint16_t* __t1891t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1888t=unsafe_ptr;
  *__t1889t=unsafe_size;
  *__t1890t=unsafe_offset;
  *__t1891t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1892t) {
  int value=0;
  *__t1892t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1893t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1893t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1894t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1894t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1895t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1896t) {
  char* allocated=*__t1896t;
  if(allocated){
  free(allocated);
  }
  *__t1896t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1897t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1897t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1898t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1898t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1899t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1899t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1900t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1900t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1901t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1901t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1902t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1902t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1903t, uint64_t* __t1904t, uint16_t* __t1905t, uint16_t* __t1906t, uint64_t size, char** __t1907t, uint64_t* __t1908t, uint16_t* __t1909t, uint16_t* __t1910t) {
  char* buffer__unsafe_ptr=*__t1903t;
  uint64_t buffer__unsafe_size=*__t1904t;
  uint16_t buffer__unsafe_offset=*__t1905t;
  uint16_t buffer__unsafe_align=*__t1906t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t1903t=buffer__unsafe_ptr;
  *__t1904t=buffer__unsafe_size;
  *__t1905t=buffer__unsafe_offset;
  *__t1906t=buffer__unsafe_align;
  *__t1907t=__t521t__unsafe_ptr;
  *__t1908t=__t521t__unsafe_size;
  *__t1909t=__t521t__unsafe_offset;
  *__t1910t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1911t, uint64_t* __t1912t, uint16_t* __t1913t, uint16_t* __t1914t, char** __t1915t, uint64_t* __t1916t, uint16_t* __t1917t, uint16_t* __t1918t, uint64_t* __t1919t) {
  char* buf__unsafe_ptr=*__t1911t;
  uint64_t buf__unsafe_size=*__t1912t;
  uint16_t buf__unsafe_offset=*__t1913t;
  uint16_t buf__unsafe_align=*__t1914t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1911t=buf__unsafe_ptr;
  *__t1912t=buf__unsafe_size;
  *__t1913t=buf__unsafe_offset;
  *__t1914t=buf__unsafe_align;
  *__t1915t=buf__unsafe_ptr;
  *__t1916t=buf__unsafe_size;
  *__t1917t=buf__unsafe_offset;
  *__t1918t=buf__unsafe_align;
  *__t1919t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1920t, uint64_t* __t1921t, uint16_t* __t1922t, uint16_t* __t1923t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1920t=unsafe_ptr;
  *__t1921t=unsafe_size;
  *__t1922t=unsafe_offset;
  *__t1923t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1924t) {
  *__t1924t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1925t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1925t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1926t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1926t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1927t) {
  *__t1927t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1928t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1928t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1929t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t599t__);
  mul__t194t(i,__t599t__,&__t600t__);
  nat__t505t(buffer__unsafe_offset,&__t601t__);
  add__t170t(__t600t__,__t601t__,&__t602t__);
  add__t503t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1929t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1930t, uint64_t* __t1931t, uint64_t* __t1932t, char* __t1933t) {
  goto __t_return;
  __t_return:
  *__t1930t=unsafe_ptr;
  *__t1931t=dat__pos;
  *__t1932t=dat__length;
  *__t1933t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1934t, uint64_t* __t1935t, uint64_t* __t1936t, char* __t1937t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t505t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t142t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t142t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1934t=__t643t__unsafe_ptr;
  *__t1935t=__t643t__dat__pos;
  *__t1936t=__t643t__dat__length;
  *__t1937t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1938t, uint64_t* __t1939t, uint64_t* __t1940t, char* __t1941t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t142t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1938t=__t673t__unsafe_ptr;
  *__t1939t=__t673t__dat__pos;
  *__t1940t=__t673t__dat__length;
  *__t1941t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1942t, uint64_t* __t1943t, uint64_t* __t1944t, char* __t1945t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t170t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1942t=__t681t__unsafe_ptr;
  *__t1943t=__t681t__dat__pos;
  *__t1944t=__t681t__dat__length;
  *__t1945t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1946t) {
  goto __t_return;
  __t_return:
  *__t1946t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1947t) {
  goto __t_return;
  __t_return:
  *__t1947t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1948t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1948t=z;
}

int copy__t751t(char** __t1949t, uint64_t* __t1950t, uint16_t* __t1951t, uint16_t* __t1952t, uint64_t* __t1953t, const char* _other, char** __t1954t, uint64_t* __t1955t, uint64_t* __t1956t, char* __t1957t) {
  char* buf__unsafe_ptr=*__t1949t;
  uint64_t buf__unsafe_size=*__t1950t;
  uint16_t buf__unsafe_offset=*__t1951t;
  uint16_t buf__unsafe_align=*__t1952t;
  uint64_t pos=*__t1953t;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t753t__=0;
  uint64_t __t754t__=0;
  uint64_t next_pos=0;
  uint64_t __t755t__=0;
  char __t756t__=0;
  uint64_t __t757t=0;
  uint64_t __t758t__=0;
  uint64_t prev_pos=0;
  char* __t759t__unsafe_ptr=0;
  uint64_t __t759t__dat__pos=0;
  uint64_t __t759t__dat__length=0;
  char __t759t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t752t__unsafe_ptr;
  other__dat__pos=__t752t__dat__pos;
  other__dat__length=__t752t__dat__length;
  other__dat__first=__t752t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t753t__);
  add__t170t(pos,__t753t__,&__t754t__);
  next_pos=__t754t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t755t__);
  gt__t271t(next_pos,__t755t__,&__t756t__);
  if(__t756t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t757t=0;
  add__t170t(pos,__t757t,&__t758t__);
  prev_pos=__t758t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
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
  *__t1954t=__t759t__unsafe_ptr;
  *__t1955t=__t759t__dat__pos;
  *__t1956t=__t759t__dat__length;
  *__t1957t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1712t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1713t(const char* path, char** __t1958t) {
  char* unsafe_ptr=0;
  char __t1715t__=0;
  char __t1716t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t435t(unsafe_ptr,&__t1715t__);
  not__t26t(__t1715t__,&__t1716t__);
  if(__t1716t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1712t(unsafe_ptr);
  __t_return:
  *__t1958t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t479t(uint64_t x, uint64_t* __t1959t) {
  uint64_t __t480t=0;
  uint64_t __t481t__=0;
  __t480t=1024;
  mul__t194t(x,__t480t,&__t481t__);
  goto __t_return;
  __t_return:
  *__t1959t=__t481t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1723t(char** __t1960t, const char** __t1961t) {
  char* f__unsafe_ptr=*__t1960t;
  char __t1724t__=0;
  char __t1725t__=0;
  char* de=0;
  char __t1726t__=0;
  char __t1727t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t435t(f__unsafe_ptr,&__t1724t__);
  not__t26t(__t1724t__,&__t1725t__);
  if(__t1725t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t435t(de,&__t1726t__);
  not__t26t(__t1726t__,&__t1727t__);
  if(__t1727t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1960t=f__unsafe_ptr;
  *__t1961t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1728t(char** __t1962t, char** __t1963t, uint64_t* __t1964t, uint64_t* __t1965t, char* __t1966t) {
  char* f__unsafe_ptr=*__t1962t;
  const char* __t1729t__=0;
  char* __t1730t__unsafe_ptr=0;
  uint64_t __t1730t__dat__pos=0;
  uint64_t __t1730t__dat__length=0;
  char __t1730t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1723t(&f__unsafe_ptr,&__t1729t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t1729t__,&__t1730t__unsafe_ptr,&__t1730t__dat__pos,&__t1730t__dat__length,&__t1730t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1962t=f__unsafe_ptr;
  *__t1963t=__t1730t__unsafe_ptr;
  *__t1964t=__t1730t__dat__pos;
  *__t1965t=__t1730t__dat__length;
  *__t1966t=__t1730t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1792t(char** __t1967t, uint64_t __t_anon1, char** __t1968t, uint64_t* __t1969t, uint64_t* __t1970t, char* __t1971t) {
  char* data__unsafe_ptr=*__t1967t;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__dat__pos=0;
  uint64_t __t1793t__dat__length=0;
  char __t1793t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1728t(&data__unsafe_ptr,&__t1793t__unsafe_ptr,&__t1793t__dat__pos,&__t1793t__dat__length,&__t1793t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1967t=data__unsafe_ptr;
  *__t1968t=__t1793t__unsafe_ptr;
  *__t1969t=__t1793t__dat__pos;
  *__t1970t=__t1793t__dat__length;
  *__t1971t=__t1793t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1972t, uint64_t* __t1973t, uint64_t* __t1974t, char* __t1975t) {
  goto __t_return;
  __t_return:
  *__t1972t=other__unsafe_ptr;
  *__t1973t=other__dat__pos;
  *__t1974t=other__dat__length;
  *__t1975t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1976t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1976t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1977t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1977t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t823t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1978t) {
  uint64_t __t824t__=0;
  char* __t825t__=0;
  add__t170t(s__dat__pos,i,&__t824t__);
  add__t503t(s__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  __t_return:
  *__t1978t=__t825t__;
}

int slice__t862t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t1979t, uint64_t* __t1980t, uint64_t* __t1981t, char* __t1982t) {
  char* __t863t__unsafe_ptr=0;
  uint64_t __t863t__dat__pos=0;
  uint64_t __t863t__dat__length=0;
  char __t863t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t864t__=0;
  char* __t865t__unsafe_ptr=0;
  uint64_t __t865t__dat__pos=0;
  uint64_t __t865t__dat__length=0;
  char __t865t__dat__first=0;
  char __t866t__=0;
  char __t867t__=0;
  char __t868t=0;
  uint64_t __t869t__=0;
  uint64_t new_length=0;
  uint64_t __t870t=0;
  char __t871t__=0;
  char new_first=0;
  char* __t872t__=0;
  char __t873t__value=0;
  uint64_t __t874t__=0;
  char* __t875t__unsafe_ptr=0;
  uint64_t __t875t__dat__pos=0;
  uint64_t __t875t__dat__length=0;
  char __t875t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t863t__unsafe_ptr,&__t863t__dat__pos,&__t863t__dat__length,&__t863t__dat__first);
  s__unsafe_ptr=__t863t__unsafe_ptr;
  s__dat__pos=__t863t__dat__pos;
  s__dat__length=__t863t__dat__length;
  s__dat__first=__t863t__dat__first;
  eq__t118t(from,to,&__t864t__);
  if(__t864t__){
  __t_errcode=str__t674t(__t362t,&__t865t__unsafe_ptr,&__t865t__dat__pos,&__t865t__dat__length,&__t865t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  lt__t247t(from,to,&__t866t__);
  if(!__t866t__){
  gt__t271t(to,s__dat__length,&__t867t__);
  __t868t=__t867t__;
  }
  if(__t868t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t347t(to,from,&__t869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t869t__;
  __t870t=0;
  neq__t142t(from,__t870t,&__t871t__);
  if(__t871t__){
  get__t823t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t872t__);
  if(!__t872t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t873t__value,__t872t__,1);
  new_first=__t873t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t170t(s__dat__pos,from,&__t874t__);
  str__t632t(s__unsafe_ptr,__t874t__,new_length,new_first,&__t875t__unsafe_ptr,&__t875t__dat__pos,&__t875t__dat__length,&__t875t__dat__first);
  __t865t__unsafe_ptr=__t875t__unsafe_ptr;
  __t865t__dat__pos=__t875t__dat__pos;
  __t865t__dat__length=__t875t__dat__length;
  __t865t__dat__first=__t875t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1979t=__t865t__unsafe_ptr;
  *__t1980t=__t865t__dat__pos;
  *__t1981t=__t865t__dat__length;
  *__t1982t=__t865t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t686t(char x, char y, char* __t1983t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1983t=z;
}

static inline __attribute__((always_inline)) void eq__t827t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t1984t) {
  uint64_t __t828t__=0;
  uint64_t n=0;
  uint64_t __t829t__=0;
  char __t830t__=0;
  char __t831t=0;
  char __t832t__=0;
  char __t833t=0;
  char z=0;
  len__t682t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t828t__);
  n=__t828t__;
  len__t682t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t829t__);
  neq__t142t(n,__t829t__,&__t830t__);
  if(__t830t__){
  __t831t=0;
  goto __t_return;
  }
  neq__t686t(x__dat__first,y__dat__first,&__t832t__);
  if(__t832t__){
  __t833t=0;
  __t831t=__t833t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t831t=z;
  goto __t_return;
  __t_return:
  *__t1984t=__t831t;
}

static inline __attribute__((always_inline)) int ends_with__t940t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t1985t) {
  char* __t941t__unsafe_ptr=0;
  uint64_t __t941t__dat__pos=0;
  uint64_t __t941t__dat__length=0;
  char __t941t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t942t__unsafe_ptr=0;
  uint64_t __t942t__dat__pos=0;
  uint64_t __t942t__dat__length=0;
  char __t942t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t943t__=0;
  char __t944t=0;
  uint64_t __t945t__=0;
  uint64_t n=0;
  uint64_t __t946t__=0;
  uint64_t __t947t__=0;
  char* __t948t__unsafe_ptr=0;
  uint64_t __t948t__dat__pos=0;
  uint64_t __t948t__dat__length=0;
  char __t948t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t949t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t941t__unsafe_ptr,&__t941t__dat__pos,&__t941t__dat__length,&__t941t__dat__first);
  stack__unsafe_ptr=__t941t__unsafe_ptr;
  stack__dat__pos=__t941t__dat__pos;
  stack__dat__length=__t941t__dat__length;
  stack__dat__first=__t941t__dat__first;
  __t_errcode=str__t674t(_needle,&__t942t__unsafe_ptr,&__t942t__dat__pos,&__t942t__dat__length,&__t942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t942t__unsafe_ptr;
  needle__dat__pos=__t942t__dat__pos;
  needle__dat__length=__t942t__dat__length;
  needle__dat__first=__t942t__dat__first;
  lt__t247t(stack__dat__length,needle__dat__length,&__t943t__);
  if(__t943t__){
  __t944t=0;
  goto __t_return;
  }
  len__t682t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t945t__);
  n=__t945t__;
  len__t682t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t946t__);
  __t_errcode=sub__t347t(n,__t946t__,&__t947t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t862t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t947t__,n,&__t948t__unsafe_ptr,&__t948t__dat__pos,&__t948t__dat__length,&__t948t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t948t__unsafe_ptr;
  ret__dat__pos=__t948t__dat__pos;
  ret__dat__length=__t948t__dat__length;
  ret__dat__first=__t948t__dat__first;
  eq__t827t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t949t__);
  __t944t=__t949t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1985t=__t944t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t760t(char** __t1986t, uint64_t* __t1987t, uint16_t* __t1988t, uint16_t* __t1989t, uint64_t* __t1990t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1991t, uint64_t* __t1992t, uint64_t* __t1993t, char* __t1994t) {
  char* buf__unsafe_ptr=*__t1986t;
  uint64_t buf__unsafe_size=*__t1987t;
  uint16_t buf__unsafe_offset=*__t1988t;
  uint16_t buf__unsafe_align=*__t1989t;
  uint64_t pos=*__t1990t;
  char* __t761t__unsafe_ptr=0;
  uint64_t __t761t__dat__pos=0;
  uint64_t __t761t__dat__length=0;
  char __t761t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t762t__=0;
  uint64_t __t763t__=0;
  uint64_t null_pos=0;
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t next_pos=0;
  uint64_t __t766t__=0;
  char __t767t__=0;
  char* endpos=0;
  uint64_t __t768t=0;
  uint64_t __t769t__=0;
  uint64_t prev_pos=0;
  char* __t770t__unsafe_ptr=0;
  uint64_t __t770t__dat__pos=0;
  uint64_t __t770t__dat__length=0;
  char __t770t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t761t__unsafe_ptr,&__t761t__dat__pos,&__t761t__dat__length,&__t761t__dat__first);
  other__unsafe_ptr=__t761t__unsafe_ptr;
  other__dat__pos=__t761t__dat__pos;
  other__dat__length=__t761t__dat__length;
  other__dat__first=__t761t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t762t__);
  add__t170t(pos,__t762t__,&__t763t__);
  null_pos=__t763t__;
  __t764t=1;
  add__t170t(null_pos,__t764t,&__t765t__);
  next_pos=__t765t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t766t__);
  gt__t271t(next_pos,__t766t__,&__t767t__);
  if(__t767t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t768t=0;
  add__t170t(pos,__t768t,&__t769t__);
  prev_pos=__t769t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t770t__unsafe_ptr,&__t770t__dat__pos,&__t770t__dat__length,&__t770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1986t=buf__unsafe_ptr;
  *__t1987t=buf__unsafe_size;
  *__t1988t=buf__unsafe_offset;
  *__t1989t=buf__unsafe_align;
  *__t1990t=pos;
  *__t1991t=__t770t__unsafe_ptr;
  *__t1992t=__t770t__dat__pos;
  *__t1993t=__t770t__dat__length;
  *__t1994t=__t770t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t740t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1995t) {
  uint64_t __t741t__=0;
  add__t170t(s__dat__pos,s__dat__length,&__t741t__);
  goto __t_return;
  __t_return:
  *__t1995t=__t741t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1996t) {
  int value=0;
  *__t1996t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1997t) {
  int __t38t__=0;
  true__t11t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1997t=__t38t__;
}

static inline __attribute__((always_inline)) int str__t644t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t1998t, uint64_t* __t1999t, uint64_t* __t2000t, char* __t2001t) {
  int __t645t=0;
  int __t646t=0;
  int __t647t__=0;
  uint64_t __t648t__=0;
  char __t649t__=0;
  uint64_t __t650t=0;
  uint64_t __t651t=0;
  char* __t652t__=0;
  char __t653t__value=0;
  char* __t654t__unsafe_ptr=0;
  uint64_t __t654t__dat__pos=0;
  uint64_t __t654t__dat__length=0;
  char __t654t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t37t(__t646t,&__t647t__);
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t648t__);
  gt__t271t(length,__t648t__,&__t649t__);
  if(__t649t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t650t=0;
  __t651t=0;
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t651t,&__t652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t652t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t653t__value,__t652t__,1);
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t650t,length,__t653t__value,&__t654t__unsafe_ptr,&__t654t__dat__pos,&__t654t__dat__length,&__t654t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1998t=__t654t__unsafe_ptr;
  *__t1999t=__t654t__dat__pos;
  *__t2000t=__t654t__dat__length;
  *__t2001t=__t654t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2002t, uint64_t* __t2003t, uint64_t* __t2004t, char* __t2005t) {
  char* __t704t__unsafe_ptr=0;
  uint64_t __t704t__unsafe_size=0;
  uint16_t __t704t__unsafe_offset=0;
  uint16_t __t704t__unsafe_align=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t __t707t__=0;
  char* __t708t__unsafe_ptr=0;
  uint64_t __t708t__unsafe_size=0;
  uint16_t __t708t__unsafe_offset=0;
  uint16_t __t708t__unsafe_align=0;
  uint64_t __t709t____t510t=0;
  char __t709t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t710t=0;
  char* __t711t__unsafe_ptr=0;
  uint64_t __t711t__dat__pos=0;
  uint64_t __t711t__dat__length=0;
  char __t711t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align);
  __t705t=1;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t706t__);
  add__t170t(__t705t,__t706t__,&__t707t__);
  __t_errcode=alloc__t508t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align,__t707t__,&__t708t__unsafe_ptr,&__t708t__unsafe_size,&__t708t__unsafe_offset,&__t708t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t708t__unsafe_ptr;
  buf__unsafe_size=__t708t__unsafe_size;
  buf__unsafe_offset=__t708t__unsafe_offset;
  buf__unsafe_align=__t708t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t710t=0;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t710t,other__dat__length,other__dat__first,&__t711t__unsafe_ptr,&__t711t__dat__pos,&__t711t__dat__length,&__t711t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t709t____t510t=0;
  neq__t142t(__t708t__unsafe_size,__t709t____t510t,&__t709t____t511t__);
  if(__t709t____t511t__){
  __t708t__unsafe_size=0;
  __t708t__unsafe_size=__t708t__unsafe_size;
  __t711t__unsafe_ptr=__t711t__unsafe_ptr;
  free__t501t(&__t711t__unsafe_ptr);
  }
  __t_return:
  *__t2002t=__t711t__unsafe_ptr;
  *__t2003t=__t711t__dat__pos;
  *__t2004t=__t711t__dat__length;
  *__t2005t=__t711t__dat__first;
  
  return __t_errcode;
}

int temporary_cstr__t712t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2006t, char** __t2007t, uint64_t* __t2008t, uint64_t* __t2009t, char* __t2010t) {
  char* __t713t__unsafe_ptr=0;
  uint64_t __t713t__dat__pos=0;
  uint64_t __t713t__dat__length=0;
  char __t713t__dat__first=0;
  uint64_t __t714t____t709t____t510t=0;
  uint64_t __t714t____t708t__unsafe_size=0;
  char __t714t____t709t____t511t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t715t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t703t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t713t__unsafe_ptr,&__t713t__dat__pos,&__t713t__dat__length,&__t713t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t713t__unsafe_ptr;
  str__dat__pos=__t713t__dat__pos;
  str__dat__length=__t713t__dat__length;
  str__dat__first=__t713t__dat__first;
  add__t503t(str__unsafe_ptr,str__dat__pos,&__t715t__);
  _ret=__t715t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:__t714t____t709t____t510t=0;
  neq__t142t(__t714t____t708t__unsafe_size,__t714t____t709t____t510t,&__t714t____t709t____t511t__);
  if(__t714t____t709t____t511t__){
  __t714t____t708t__unsafe_size=0;
  __t714t____t708t__unsafe_size=__t714t____t708t__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__t501t(&str__unsafe_ptr);
  }
  __t_return:
  *__t2006t=cstr;
  *__t2007t=str__unsafe_ptr;
  *__t2008t=str__dat__pos;
  *__t2009t=str__dat__length;
  *__t2010t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void popen__t1315t(const char* cmd, char** __t2011t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2011t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1314t(char* unsafe_ptr, int64_t* __t2012t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2012t=status;
}

static inline __attribute__((always_inline)) void int__t415t(uint64_t x, int64_t* __t2013t) {
  int __t416t=0;
  int __t417t=0;
  int __t418t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2013t=z;
}

static inline __attribute__((always_inline)) void is_different__t81t(int64_t x, int64_t y, int* __t2014t) {
  int __t82t=0;
  int __t83t__=0;
  not__t35t(__t82t,&__t83t__);
  goto __t_return;
  __t_return:
  *__t2014t=__t83t__;
}

static inline __attribute__((always_inline)) void neq__t131t(int64_t x, int64_t y, char* __t2015t) {
  int __t132t__=0;
  char z=0;
  is_different__t81t(x,y,&__t132t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2015t=z;
}

static inline __attribute__((always_inline)) int read__t1316t(const char* cmd, char** __t2016t) {
  char* __t1317t__=0;
  char* unsafe_ptr=0;
  char __t1318t__=0;
  char __t1319t__=0;
  char __t1320t__=0;
  int64_t __t1321t__=0;
  int64_t status=0;
  uint64_t __t1322t=0;
  int64_t __t1323t__=0;
  char __t1324t__=0;
  char __t1325t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1315t(cmd,&__t1317t__);
  unsafe_ptr=__t1317t__;
  exists__t435t(unsafe_ptr,&__t1318t__);
  not__t26t(__t1318t__,&__t1319t__);
  if(__t1319t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t435t(unsafe_ptr,&__t1320t__);
  if(__t1320t__){
  pclose__t1314t(unsafe_ptr,&__t1321t__);
  status=__t1321t__;
  unsafe_ptr=0;
  __t1322t=0;
  int__t415t(__t1322t,&__t1323t__);
  neq__t131t(status,__t1323t__,&__t1324t__);
  if(__t1324t__){
  __t_complain=37;
  __t1325t=__t1325t==0;
  }
  }
  __t_return:
  *__t2016t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1327t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2017t) {
  const char* __t1328t__cstr=0;
  char* __t1328t__str__unsafe_ptr=0;
  uint64_t __t1328t__str__dat__pos=0;
  uint64_t __t1328t__str__dat__length=0;
  char __t1328t__str__dat__first=0;
  uint64_t __t1329t____t714t____t709t____t510t=0;
  uint64_t __t1329t____t714t____t708t__unsafe_size=0;
  char __t1329t____t714t____t709t____t511t__=0;
  char* __t1330t__unsafe_ptr=0;
  char __t1331t____t1320t__=0;
  int64_t __t1331t____t1321t__=0;
  int64_t __t1331t__status=0;
  uint64_t __t1331t____t1322t=0;
  int64_t __t1331t____t1323t__=0;
  char __t1331t____t1324t__=0;
  char __t1331t____t1325t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=temporary_cstr__t712t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1328t__cstr,&__t1328t__str__unsafe_ptr,&__t1328t__str__dat__pos,&__t1328t__str__dat__length,&__t1328t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1316t(__t1328t__cstr,&__t1330t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t435t(__t1330t__unsafe_ptr,&__t1331t____t1320t__);
  if(__t1331t____t1320t__){
  pclose__t1314t(__t1330t__unsafe_ptr,&__t1331t____t1321t__);
  __t1331t__status=__t1331t____t1321t__;
  __t1330t__unsafe_ptr=0;
  __t1331t____t1322t=0;
  int__t415t(__t1331t____t1322t,&__t1331t____t1323t__);
  neq__t131t(__t1331t__status,__t1331t____t1323t__,&__t1331t____t1324t__);
  if(__t1331t____t1324t__){
  __t_complain=37;
  __t1331t____t1325t=__t1331t____t1325t==0;
  }
  }
  __t_return:
  *__t2017t=__t1330t__unsafe_ptr;
  __t1329t____t714t____t709t____t510t=0;
  neq__t142t(__t1329t____t714t____t708t__unsafe_size,__t1329t____t714t____t709t____t510t,&__t1329t____t714t____t709t____t511t__);
  if(__t1329t____t714t____t709t____t511t__){
  __t1329t____t714t____t708t__unsafe_size=0;
  __t1329t____t714t____t708t__unsafe_size=__t1329t____t714t____t708t__unsafe_size;
  __t1328t__str__unsafe_ptr=__t1328t__str__unsafe_ptr;
  free__t501t(&__t1328t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1306t(int64_t value, const char** __t2018t) {
  int __t1307t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t370t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2018t=ret;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t1850t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t1851t__unsafe_ptr=0;
  char __t1852t____t1331t____t1320t__=0;
  int64_t __t1852t____t1331t____t1321t__=0;
  int64_t __t1852t____t1331t__status=0;
  uint64_t __t1852t____t1331t____t1322t=0;
  int64_t __t1852t____t1331t____t1323t__=0;
  char __t1852t____t1331t____t1324t__=0;
  char __t1852t____t1331t____t1325t=0;
  char* __t1853t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t1854t=0;
  int64_t __t1855t=0;
  int64_t error=0;
  const char* __t1856t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1327t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t1851t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1853t__unsafe_ptr=__t1851t__unsafe_ptr;
  proc__unsafe_ptr=__t1853t__unsafe_ptr;
  exists__t435t(__t1851t__unsafe_ptr,&__t1852t____t1331t____t1320t__);
  if(__t1852t____t1331t____t1320t__){
  pclose__t1314t(__t1851t__unsafe_ptr,&__t1852t____t1331t____t1321t__);
  __t1852t____t1331t__status=__t1852t____t1331t____t1321t__;
  __t1851t__unsafe_ptr=0;
  __t1852t____t1331t____t1322t=0;
  int__t415t(__t1852t____t1331t____t1322t,&__t1852t____t1331t____t1323t__);
  neq__t131t(__t1852t____t1331t__status,__t1852t____t1331t____t1323t__,&__t1852t____t1331t____t1324t__);
  if(__t1852t____t1331t____t1324t__){
  __t_complain=37;
  __t1852t____t1331t____t1325t=__t1852t____t1331t____t1325t==0;
  }
  }
  __t1855t=__t_complain;
  __t1854t=(__t_complain==0);
  __t_complain=0;
  error=__t1855t;
  __t1854t=__t1854t==0;
  if(__t1854t){
  cstr__t1306t(error,&__t1856t__);
  print__t368t(__t1856t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1858t() {
  const char* path=0;
  char* __t1860t__unsafe_ptr=0;
  uint64_t __t1860t__unsafe_size=0;
  uint16_t __t1860t__unsafe_offset=0;
  uint16_t __t1860t__unsafe_align=0;
  uint64_t __t1861t=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__unsafe_size=0;
  uint16_t __t1862t__unsafe_offset=0;
  uint16_t __t1862t__unsafe_align=0;
  uint64_t __t1863t____t510t=0;
  char __t1863t____t511t__=0;
  char* __t1864t__buf__unsafe_ptr=0;
  uint64_t __t1864t__buf__unsafe_size=0;
  uint16_t __t1864t__buf__unsafe_offset=0;
  uint16_t __t1864t__buf__unsafe_align=0;
  uint64_t __t1864t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char* __t1867t__unsafe_ptr=0;
  uint64_t __t1867t__dat__pos=0;
  uint64_t __t1867t__dat__length=0;
  char __t1867t__dat__first=0;
  char* __t1868t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__unsafe_size=0;
  uint16_t __t1870t__unsafe_offset=0;
  uint16_t __t1870t__unsafe_align=0;
  uint64_t __t1871t=0;
  uint64_t __t1872t__=0;
  char* __t1873t__unsafe_ptr=0;
  uint64_t __t1873t__unsafe_size=0;
  uint16_t __t1873t__unsafe_offset=0;
  uint16_t __t1873t__unsafe_align=0;
  uint64_t __t1874t____t510t=0;
  char __t1874t____t511t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t1875t=0;
  char __t1876t=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__dat__pos=0;
  uint64_t __t1877t__dat__length=0;
  char __t1877t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t1879t__=0;
  char __t1880t__=0;
  char* __t1881t__buf__unsafe_ptr=0;
  uint64_t __t1881t__buf__unsafe_size=0;
  uint16_t __t1881t__buf__unsafe_offset=0;
  uint16_t __t1881t__buf__unsafe_align=0;
  uint64_t __t1881t__pos=0;
  char* __t1882t__unsafe_ptr=0;
  uint64_t __t1882t__dat__pos=0;
  uint64_t __t1882t__dat__length=0;
  char __t1882t__dat__first=0;
  char* __t1883t__unsafe_ptr=0;
  uint64_t __t1883t__dat__pos=0;
  uint64_t __t1883t__dat__length=0;
  char __t1883t__dat__first=0;
  uint64_t __t1884t__=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t1859t;
  char____t_buffer____buffer__t1332t(&__t1860t__unsafe_ptr,&__t1860t__unsafe_size,&__t1860t__unsafe_offset,&__t1860t__unsafe_align);
  __t1861t=256;
  __t_errcode=alloc__t508t(&__t1860t__unsafe_ptr,&__t1860t__unsafe_size,&__t1860t__unsafe_offset,&__t1860t__unsafe_align,__t1861t,&__t1862t__unsafe_ptr,&__t1862t__unsafe_size,&__t1862t__unsafe_offset,&__t1862t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1862t__unsafe_ptr,&__t1862t__unsafe_size,&__t1862t__unsafe_offset,&__t1862t__unsafe_align,&__t1864t__buf__unsafe_ptr,&__t1864t__buf__unsafe_size,&__t1864t__buf__unsafe_offset,&__t1864t__buf__unsafe_align,&__t1864t__pos);
  bp__buf__unsafe_ptr=__t1864t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t1864t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t1864t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t1864t__buf__unsafe_align;
  bp__pos=__t1864t__pos;
  __t_errcode=copy__t751t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t1865t,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t1867t__unsafe_ptr,&__t1867t__dat__pos,&__t1867t__dat__length,&__t1867t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1713t(path,&__t1868t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t1868t__unsafe_ptr;
  char____t_buffer____buffer__t1332t(&__t1870t__unsafe_ptr,&__t1870t__unsafe_size,&__t1870t__unsafe_offset,&__t1870t__unsafe_align);
  __t1871t=4;
  KB__t479t(__t1871t,&__t1872t__);
  __t_errcode=alloc__t508t(&__t1870t__unsafe_ptr,&__t1870t__unsafe_size,&__t1870t__unsafe_offset,&__t1870t__unsafe_align,__t1872t__,&__t1873t__unsafe_ptr,&__t1873t__unsafe_size,&__t1873t__unsafe_offset,&__t1873t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t1873t__unsafe_ptr;
  proc_buf__unsafe_size=__t1873t__unsafe_size;
  proc_buf__unsafe_offset=__t1873t__unsafe_offset;
  proc_buf__unsafe_align=__t1873t__unsafe_align;
  __t1875t=0;
  while(1){
  __t_complain=get__t1792t(&test_dir__unsafe_ptr,__t1875t,&__t1877t__unsafe_ptr,&__t1877t__dat__pos,&__t1877t__dat__length,&__t1877t__dat__first);
  __t1876t=__t_complain;
  entry__unsafe_ptr=__t1877t__unsafe_ptr;
  entry__dat__pos=__t1877t__dat__pos;
  entry__dat__length=__t1877t__dat__length;
  entry__dat__first=__t1877t__dat__first;
  __t1876t=__t1876t==0;
  __t1875t=__t1875t+1;
  if(!__t1876t){
  break;
  }
  __t_errcode=ends_with__t940t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t1878t,&__t1879t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t26t(__t1879t__,&__t1880t__);
  if(__t1880t__){
  continue;
  }
  __t1881t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t1881t__buf__unsafe_size=bp__buf__unsafe_size;
  __t1881t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t1881t__buf__unsafe_align=bp__buf__unsafe_align;
  __t1881t__pos=bp__pos;
  str__t667t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t1882t__unsafe_ptr,&__t1882t__dat__pos,&__t1882t__dat__length,&__t1882t__dat__first);
  __t_errcode=copy_null_terminated__t760t(&__t1881t__buf__unsafe_ptr,&__t1881t__buf__unsafe_size,&__t1881t__buf__unsafe_offset,&__t1881t__buf__unsafe_align,&__t1881t__pos,__t1882t__unsafe_ptr,__t1882t__dat__pos,__t1882t__dat__length,__t1882t__dat__first,&__t1883t__unsafe_ptr,&__t1883t__dat__pos,&__t1883t__dat__length,&__t1883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t740t(__t1883t__unsafe_ptr,__t1883t__dat__pos,__t1883t__dat__length,__t1883t__dat__first,&__t1884t__);
  __t_errcode=str__t644t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t1884t__,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t1885t__unsafe_ptr;
  command__dat__pos=__t1885t__dat__pos;
  command__dat__length=__t1885t__dat__length;
  command__dat__first=__t1885t__dat__first;
  print__t784t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t1850t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:__t1874t____t510t=0;
  neq__t142t(__t1873t__unsafe_size,__t1874t____t510t,&__t1874t____t511t__);
  if(__t1874t____t511t__){
  __t1873t__unsafe_size=0;
  __t1873t__unsafe_size=__t1873t__unsafe_size;
  __t1873t__unsafe_ptr=__t1873t__unsafe_ptr;
  free__t501t(&__t1873t__unsafe_ptr);
  }
  closedir__t1712t(__t1868t__unsafe_ptr);
  __t1863t____t510t=0;
  neq__t142t(__t1862t__unsafe_size,__t1863t____t510t,&__t1863t____t511t__);
  if(__t1863t____t511t__){
  __t1862t__unsafe_size=0;
  __t1862t__unsafe_size=__t1862t__unsafe_size;
  __t1862t__unsafe_ptr=__t1862t__unsafe_ptr;
  free__t501t(&__t1862t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1858t();return 0;}