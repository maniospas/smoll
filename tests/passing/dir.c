#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1999t="./std";
const char* const __t374t="\n";
static const char* __t_all_errcodes[53] = {"noerr",
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

static inline __attribute__((always_inline)) void closedir__t1883t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2010t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2010t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2011t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2011t=z;
}

static inline __attribute__((always_inline)) int read__t1884t(const char* path, char** __t2012t) {
  char* unsafe_ptr=0;
  char __t1886t__=0;
  char __t1887t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t439t(unsafe_ptr,&__t1886t__);
  not__t27t(__t1886t__,&__t1887t__);
  if(__t1887t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1883t(unsafe_ptr);
  __t_return:
  *__t2012t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1491t(char** __t2013t, uint64_t* __t2014t, uint16_t* __t2015t, uint16_t* __t2016t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2013t=unsafe_ptr;
  *__t2014t=unsafe_size;
  *__t2015t=unsafe_offset;
  *__t2016t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t2017t) {
  char* allocated=*__t2017t;
  if(allocated){
  free(allocated);
  }
  *__t2017t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2018t) {
  int value=0;
  *__t2018t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2019t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2019t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2020t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2020t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2021t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2021t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2022t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2022t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2023t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2023t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2024t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2024t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t2025t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2025t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t2026t, uint64_t* __t2027t, uint16_t* __t2028t, uint16_t* __t2029t, uint64_t size, char** __t2030t, uint64_t* __t2031t, uint16_t* __t2032t, uint16_t* __t2033t) {
  char* buffer__unsafe_ptr=*__t2026t;
  uint64_t buffer__unsafe_size=*__t2027t;
  uint16_t buffer__unsafe_offset=*__t2028t;
  uint16_t buffer__unsafe_align=*__t2029t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2026t=buffer__unsafe_ptr;
  *__t2027t=buffer__unsafe_size;
  *__t2028t=buffer__unsafe_offset;
  *__t2029t=buffer__unsafe_align;
  *__t2030t=buffer__unsafe_ptr;
  *__t2031t=buffer__unsafe_size;
  *__t2032t=buffer__unsafe_offset;
  *__t2033t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1895t(char** __t2034t, const char** __t2035t) {
  char* f__unsafe_ptr=*__t2034t;
  char __t1896t__=0;
  char __t1897t__=0;
  char* de=0;
  char __t1898t__=0;
  char __t1899t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t439t(f__unsafe_ptr,&__t1896t__);
  not__t27t(__t1896t__,&__t1897t__);
  if(__t1897t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t439t(de,&__t1898t__);
  not__t27t(__t1898t__,&__t1899t__);
  if(__t1899t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2034t=f__unsafe_ptr;
  *__t2035t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t2036t, uint64_t* __t2037t, uint16_t* __t2038t, uint16_t* __t2039t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2036t=unsafe_ptr;
  *__t2037t=unsafe_size;
  *__t2038t=unsafe_offset;
  *__t2039t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2040t) {
  *__t2040t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2041t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2041t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2042t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2042t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2043t) {
  *__t2043t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2044t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2044t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2045t) {
  char __t595t__=0;
  uint64_t __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  char* __t600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t595t__);
  if(__t595t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t596t__);
  mul__t198t(i,__t596t__,&__t597t__);
  nat__t509t(buffer__unsafe_offset,&__t598t__);
  add__t174t(__t597t__,__t598t__,&__t599t__);
  add__t507t(buffer__unsafe_ptr,__t599t__,&__t600t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2045t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2046t, uint64_t* __t2047t, uint64_t* __t2048t, char* __t2049t) {
  goto __t_return;
  __t_return:
  *__t2046t=unsafe_ptr;
  *__t2047t=dat__pos;
  *__t2048t=dat__length;
  *__t2049t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2050t, uint64_t* __t2051t, uint64_t* __t2052t, char* __t2053t) {
  char* unsafe_ptr=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  char* __t640t__unsafe_ptr=0;
  uint64_t __t640t__dat__pos=0;
  uint64_t __t640t__dat__length=0;
  char __t640t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t509t(buf__unsafe_align,&__t634t__);
  __t635t=1;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t637t__);
  __t638t=0;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t629t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t640t__unsafe_ptr,&__t640t__dat__pos,&__t640t__dat__length,&__t640t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2050t=__t640t__unsafe_ptr;
  *__t2051t=__t640t__dat__pos;
  *__t2052t=__t640t__dat__length;
  *__t2053t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2054t, uint64_t* __t2055t, uint64_t* __t2056t, char* __t2057t) {
  uint64_t __t666t=0;
  char __t667t__=0;
  char* __t668t__=0;
  char __t669t__value=0;
  char first=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t666t=0;
  neq__t143t(length,__t666t,&__t667t__);
  if(__t667t__){
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t669t__value,__t668t__,1);
  first=__t669t__value;
  }
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2054t=__t670t__unsafe_ptr;
  *__t2055t=__t670t__dat__pos;
  *__t2056t=__t670t__dat__length;
  *__t2057t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t2058t, uint64_t* __t2059t, uint64_t* __t2060t, char* __t2061t) {
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t674t__=0;
  uint64_t length=0;
  uint64_t __t675t=0;
  uint64_t __t676t__=0;
  uint64_t __t677t=0;
  char* __t678t__unsafe_ptr=0;
  uint64_t __t678t__dat__pos=0;
  uint64_t __t678t__dat__length=0;
  char __t678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  __t673t__unsafe_ptr=__t672t__unsafe_ptr;
  __t673t__unsafe_size=__t672t__unsafe_size;
  __t673t__unsafe_offset=__t672t__unsafe_offset;
  __t673t__unsafe_align=__t672t__unsafe_align;
  buf__unsafe_ptr=__t673t__unsafe_ptr;
  buf__unsafe_size=__t673t__unsafe_size;
  buf__unsafe_offset=__t673t__unsafe_offset;
  buf__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t674t__);
  buf__unsafe_ptr=__t674t__;
  if(c){
  length=strlen(c);
  }
  __t675t=1;
  add__t174t(length,__t675t,&__t676t__);
  buf__unsafe_size=__t676t__;
  __t677t=0;
  __t_errcode=str__t665t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t677t,length,&__t678t__unsafe_ptr,&__t678t__dat__pos,&__t678t__dat__length,&__t678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2058t=__t678t__unsafe_ptr;
  *__t2059t=__t678t__dat__pos;
  *__t2060t=__t678t__dat__length;
  *__t2061t=__t678t__dat__first;
  
  return __t_errcode;
}

int entry__t1900t(char** __t2062t, char** __t2063t, uint64_t* __t2064t, uint64_t* __t2065t, char* __t2066t) {
  char* f__unsafe_ptr=*__t2062t;
  const char* __t1901t__=0;
  char* __t1902t__unsafe_ptr=0;
  uint64_t __t1902t__dat__pos=0;
  uint64_t __t1902t__dat__length=0;
  char __t1902t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1895t(&f__unsafe_ptr,&__t1901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t671t(__t1901t__,&__t1902t__unsafe_ptr,&__t1902t__dat__pos,&__t1902t__dat__length,&__t1902t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2062t=f__unsafe_ptr;
  *__t2063t=__t1902t__unsafe_ptr;
  *__t2064t=__t1902t__dat__pos;
  *__t2065t=__t1902t__dat__length;
  *__t2066t=__t1902t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1998t() {
  char* __t2000t__unsafe_ptr=0;
  char* __t2002t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t2003t__unsafe_ptr=0;
  uint64_t __t2003t__unsafe_size=0;
  uint16_t __t2003t__unsafe_offset=0;
  uint16_t __t2003t__unsafe_align=0;
  uint64_t __t2004t=0;
  char* __t2005t__unsafe_ptr=0;
  uint64_t __t2005t__unsafe_size=0;
  uint16_t __t2005t__unsafe_offset=0;
  uint16_t __t2005t__unsafe_align=0;
  char __t2006t____t514t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t2007t=0;
  char* __t2008t__unsafe_ptr=0;
  uint64_t __t2008t__dat__pos=0;
  uint64_t __t2008t__dat__length=0;
  char __t2008t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1884t(__t1999t,&__t2000t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2002t__unsafe_ptr=__t2000t__unsafe_ptr;
  dir__unsafe_ptr=__t2002t__unsafe_ptr;
  char____t_buffer____buffer__t1491t(&__t2003t__unsafe_ptr,&__t2003t__unsafe_size,&__t2003t__unsafe_offset,&__t2003t__unsafe_align);
  __t2004t=128;
  __t_errcode=alloc__t512t(&__t2003t__unsafe_ptr,&__t2003t__unsafe_size,&__t2003t__unsafe_offset,&__t2003t__unsafe_align,__t2004t,&__t2005t__unsafe_ptr,&__t2005t__unsafe_size,&__t2005t__unsafe_offset,&__t2005t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2005t__unsafe_ptr;
  buf__unsafe_size=__t2005t__unsafe_size;
  buf__unsafe_offset=__t2005t__unsafe_offset;
  buf__unsafe_align=__t2005t__unsafe_align;
  while(1){
  __t_complain=entry__t1900t(&dir__unsafe_ptr,&__t2008t__unsafe_ptr,&__t2008t__dat__pos,&__t2008t__dat__length,&__t2008t__dat__first);
  __t2007t=__t_complain;
  entry__unsafe_ptr=__t2008t__unsafe_ptr;
  entry__dat__pos=__t2008t__dat__pos;
  entry__dat__length=__t2008t__dat__length;
  entry__dat__first=__t2008t__dat__first;
  __t2007t=__t2007t==0;
  if(!__t2007t){
  break;
  }
  print__t783t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:exists__t439t(__t2005t__unsafe_ptr,&__t2006t____t514t__);
  if(__t2006t____t514t__){
  free__t505t(&__t2005t__unsafe_ptr);
  }
  closedir__t1883t(__t2000t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1998t();return 0;}