#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1873t="./std";
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

static inline __attribute__((always_inline)) void closedir__t1741t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1884t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1884t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1885t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) int read__t1742t(const char* path, char** __t1886t) {
  char* unsafe_ptr=0;
  char __t1744t__=0;
  char __t1745t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t436t(unsafe_ptr,&__t1744t__);
  not__t27t(__t1744t__,&__t1745t__);
  if(__t1745t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1741t(unsafe_ptr);
  __t_return:
  *__t1886t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1349t(char** __t1887t, uint64_t* __t1888t, uint16_t* __t1889t, uint16_t* __t1890t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1887t=unsafe_ptr;
  *__t1888t=unsafe_size;
  *__t1889t=unsafe_offset;
  *__t1890t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1891t) {
  char* allocated=*__t1891t;
  if(allocated){
  free(allocated);
  }
  *__t1891t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1892t) {
  int value=0;
  *__t1892t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1893t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1893t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1894t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1894t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1895t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1896t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1896t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1897t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1897t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1898t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1898t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1899t) {
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
  *__t1899t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t, uint64_t size, char** __t1904t, uint64_t* __t1905t, uint16_t* __t1906t, uint16_t* __t1907t) {
  char* buffer__unsafe_ptr=*__t1900t;
  uint64_t buffer__unsafe_size=*__t1901t;
  uint16_t buffer__unsafe_offset=*__t1902t;
  uint16_t buffer__unsafe_align=*__t1903t;
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
  *__t1900t=buffer__unsafe_ptr;
  *__t1901t=buffer__unsafe_size;
  *__t1902t=buffer__unsafe_offset;
  *__t1903t=buffer__unsafe_align;
  *__t1904t=__t520t__unsafe_ptr;
  *__t1905t=__t520t__unsafe_size;
  *__t1906t=__t520t__unsafe_offset;
  *__t1907t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1753t(char** __t1908t, const char** __t1909t) {
  char* f__unsafe_ptr=*__t1908t;
  char __t1754t__=0;
  char __t1755t__=0;
  char* de=0;
  char __t1756t__=0;
  char __t1757t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t436t(f__unsafe_ptr,&__t1754t__);
  not__t27t(__t1754t__,&__t1755t__);
  if(__t1755t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t436t(de,&__t1756t__);
  not__t27t(__t1756t__,&__t1757t__);
  if(__t1757t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1908t=f__unsafe_ptr;
  *__t1909t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1910t, uint64_t* __t1911t, uint16_t* __t1912t, uint16_t* __t1913t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1910t=unsafe_ptr;
  *__t1911t=unsafe_size;
  *__t1912t=unsafe_offset;
  *__t1913t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1914t) {
  *__t1914t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1915t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1915t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1916t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1916t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1917t) {
  *__t1917t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1918t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1918t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1919t) {
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
  *__t1919t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1920t, uint64_t* __t1921t, uint64_t* __t1922t, char* __t1923t) {
  goto __t_return;
  __t_return:
  *__t1920t=unsafe_ptr;
  *__t1921t=dat__pos;
  *__t1922t=dat__length;
  *__t1923t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1924t, uint64_t* __t1925t, uint64_t* __t1926t, char* __t1927t) {
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
  *__t1924t=__t641t__unsafe_ptr;
  *__t1925t=__t641t__dat__pos;
  *__t1926t=__t641t__dat__length;
  *__t1927t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1928t, uint64_t* __t1929t, uint64_t* __t1930t, char* __t1931t) {
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
  *__t1928t=__t671t__unsafe_ptr;
  *__t1929t=__t671t__dat__pos;
  *__t1930t=__t671t__dat__length;
  *__t1931t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1932t, uint64_t* __t1933t, uint64_t* __t1934t, char* __t1935t) {
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
  *__t1932t=__t679t__unsafe_ptr;
  *__t1933t=__t679t__dat__pos;
  *__t1934t=__t679t__dat__length;
  *__t1935t=__t679t__dat__first;
  
  return __t_errcode;
}

int entry__t1758t(char** __t1936t, char** __t1937t, uint64_t* __t1938t, uint64_t* __t1939t, char* __t1940t) {
  char* f__unsafe_ptr=*__t1936t;
  const char* __t1759t__=0;
  char* __t1760t__unsafe_ptr=0;
  uint64_t __t1760t__dat__pos=0;
  uint64_t __t1760t__dat__length=0;
  char __t1760t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1753t(&f__unsafe_ptr,&__t1759t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t672t(__t1759t__,&__t1760t__unsafe_ptr,&__t1760t__dat__pos,&__t1760t__dat__length,&__t1760t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1936t=f__unsafe_ptr;
  *__t1937t=__t1760t__unsafe_ptr;
  *__t1938t=__t1760t__dat__pos;
  *__t1939t=__t1760t__dat__length;
  *__t1940t=__t1760t__dat__first;
  
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
  char* __t1876t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__unsafe_size=0;
  uint16_t __t1877t__unsafe_offset=0;
  uint16_t __t1877t__unsafe_align=0;
  uint64_t __t1878t=0;
  char* __t1879t__unsafe_ptr=0;
  uint64_t __t1879t__unsafe_size=0;
  uint16_t __t1879t__unsafe_offset=0;
  uint16_t __t1879t__unsafe_align=0;
  char __t1880t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t1881t=0;
  char* __t1882t__unsafe_ptr=0;
  uint64_t __t1882t__dat__pos=0;
  uint64_t __t1882t__dat__length=0;
  char __t1882t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1742t(__t1873t,&__t1874t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1876t__unsafe_ptr=__t1874t__unsafe_ptr;
  dir__unsafe_ptr=__t1876t__unsafe_ptr;
  char____t_buffer____buffer__t1349t(&__t1877t__unsafe_ptr,&__t1877t__unsafe_size,&__t1877t__unsafe_offset,&__t1877t__unsafe_align);
  __t1878t=128;
  __t_errcode=alloc__t509t(&__t1877t__unsafe_ptr,&__t1877t__unsafe_size,&__t1877t__unsafe_offset,&__t1877t__unsafe_align,__t1878t,&__t1879t__unsafe_ptr,&__t1879t__unsafe_size,&__t1879t__unsafe_offset,&__t1879t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1879t__unsafe_ptr;
  buf__unsafe_size=__t1879t__unsafe_size;
  buf__unsafe_offset=__t1879t__unsafe_offset;
  buf__unsafe_align=__t1879t__unsafe_align;
  while(1){
  __t_complain=entry__t1758t(&dir__unsafe_ptr,&__t1882t__unsafe_ptr,&__t1882t__dat__pos,&__t1882t__dat__length,&__t1882t__dat__first);
  __t1881t=__t_complain;
  entry__unsafe_ptr=__t1882t__unsafe_ptr;
  entry__dat__pos=__t1882t__dat__pos;
  entry__dat__length=__t1882t__dat__length;
  entry__dat__first=__t1882t__dat__first;
  __t1881t=__t1881t==0;
  if(!__t1881t){
  break;
  }
  print__t784t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:exists__t436t(__t1879t__unsafe_ptr,&__t1880t____t511t__);
  if(__t1880t____t511t__){
  __t1879t__unsafe_ptr=__t1879t__unsafe_ptr;
  free__t502t(&__t1879t__unsafe_ptr);
  }
  closedir__t1741t(__t1874t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1872t();return 0;}