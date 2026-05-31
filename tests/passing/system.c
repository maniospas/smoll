#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1859t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1345t(char** __t1863t, uint64_t* __t1864t, uint16_t* __t1865t, uint16_t* __t1866t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1863t=unsafe_ptr;
  *__t1864t=unsafe_size;
  *__t1865t=unsafe_offset;
  *__t1866t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1867t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1867t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1868t) {
  char* allocated=*__t1868t;
  if(allocated){
  free(allocated);
  }
  *__t1868t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1869t) {
  int value=0;
  *__t1869t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1870t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1870t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1871t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1871t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1872t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1872t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1873t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1873t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1874t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1874t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1875t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1875t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1876t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1876t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1877t) {
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
  *__t1877t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1878t, uint64_t* __t1879t, uint16_t* __t1880t, uint16_t* __t1881t, uint64_t size, char** __t1882t, uint64_t* __t1883t, uint16_t* __t1884t, uint16_t* __t1885t) {
  char* buffer__unsafe_ptr=*__t1878t;
  uint64_t buffer__unsafe_size=*__t1879t;
  uint16_t buffer__unsafe_offset=*__t1880t;
  uint16_t buffer__unsafe_align=*__t1881t;
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
  *__t1878t=buffer__unsafe_ptr;
  *__t1879t=buffer__unsafe_size;
  *__t1880t=buffer__unsafe_offset;
  *__t1881t=buffer__unsafe_align;
  *__t1882t=buffer__unsafe_ptr;
  *__t1883t=buffer__unsafe_size;
  *__t1884t=buffer__unsafe_offset;
  *__t1885t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1886t, uint64_t* __t1887t, uint16_t* __t1888t, uint16_t* __t1889t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1886t=unsafe_ptr;
  *__t1887t=unsafe_size;
  *__t1888t=unsafe_offset;
  *__t1889t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1890t) {
  *__t1890t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1891t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1891t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1892t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1892t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1893t) {
  *__t1893t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1894t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1894t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1895t) {
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
  *__t1895t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1896t, uint64_t* __t1897t, uint64_t* __t1898t, char* __t1899t) {
  goto __t_return;
  __t_return:
  *__t1896t=unsafe_ptr;
  *__t1897t=dat__pos;
  *__t1898t=dat__length;
  *__t1899t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1900t, uint64_t* __t1901t, uint64_t* __t1902t, char* __t1903t) {
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
  *__t1900t=__t637t__unsafe_ptr;
  *__t1901t=__t637t__dat__pos;
  *__t1902t=__t637t__dat__length;
  *__t1903t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1904t, uint64_t* __t1905t, uint64_t* __t1906t, char* __t1907t) {
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
  *__t1904t=__t667t__unsafe_ptr;
  *__t1905t=__t667t__dat__pos;
  *__t1906t=__t667t__dat__length;
  *__t1907t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1908t, uint64_t* __t1909t, uint64_t* __t1910t, char* __t1911t) {
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
  *__t1908t=__t675t__unsafe_ptr;
  *__t1909t=__t675t__dat__pos;
  *__t1910t=__t675t__dat__length;
  *__t1911t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1912t, uint64_t* __t1913t, uint64_t* __t1914t, char* __t1915t) {
  goto __t_return;
  __t_return:
  *__t1912t=other__unsafe_ptr;
  *__t1913t=other__dat__pos;
  *__t1914t=other__dat__length;
  *__t1915t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1916t) {
  goto __t_return;
  __t_return:
  *__t1916t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1917t) {
  goto __t_return;
  __t_return:
  *__t1917t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1918t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1918t=z;
}

static inline __attribute__((always_inline)) int copy__t738t(char** __t1919t, uint64_t* __t1920t, uint16_t* __t1921t, uint16_t* __t1922t, uint64_t* __t1923t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1924t, uint64_t* __t1925t, uint64_t* __t1926t, char* __t1927t) {
  char* buf__unsafe_ptr=*__t1919t;
  uint64_t buf__unsafe_size=*__t1920t;
  uint16_t buf__unsafe_offset=*__t1921t;
  uint16_t buf__unsafe_align=*__t1922t;
  uint64_t pos=*__t1923t;
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
  *__t1919t=buf__unsafe_ptr;
  *__t1920t=buf__unsafe_size;
  *__t1921t=buf__unsafe_offset;
  *__t1922t=buf__unsafe_align;
  *__t1923t=pos;
  *__t1924t=__t746t__unsafe_ptr;
  *__t1925t=__t746t__dat__pos;
  *__t1926t=__t746t__dat__length;
  *__t1927t=__t746t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t699t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1928t, uint64_t* __t1929t, uint64_t* __t1930t, char* __t1931t) {
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
  *__t1928t=__t708t__unsafe_ptr;
  *__t1929t=__t708t__dat__pos;
  *__t1930t=__t708t__dat__length;
  *__t1931t=__t708t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t709t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1932t, char** __t1933t, uint64_t* __t1934t, uint64_t* __t1935t, char* __t1936t) {
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
  *__t1932t=cstr;
  *__t1933t=str__unsafe_ptr;
  *__t1934t=str__dat__pos;
  *__t1935t=str__dat__length;
  *__t1936t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t716t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1937t) {
  goto __t_return;
  __t_return:
  *__t1937t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1384t(const char* cmd, const char** __t1938t) {
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
  *__t1938t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1383t(const char* cmd, int64_t* __t1939t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t1939t=result;
}

static inline __attribute__((always_inline)) void int__t416t(uint64_t x, int64_t* __t1940t) {
  int __t417t=0;
  int __t418t=0;
  int __t419t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1940t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t1941t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t1941t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t1942t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1942t=z;
}

int system__t1393t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
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

static inline __attribute__((always_inline)) int main__t1852t() {
  char* __t1853t__unsafe_ptr=0;
  uint64_t __t1853t__unsafe_size=0;
  uint16_t __t1853t__unsafe_offset=0;
  uint16_t __t1853t__unsafe_align=0;
  uint64_t __t1854t=0;
  char* __t1855t__unsafe_ptr=0;
  uint64_t __t1855t__unsafe_size=0;
  uint16_t __t1855t__unsafe_offset=0;
  uint16_t __t1855t__unsafe_align=0;
  char __t1856t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1857t=0;
  uint64_t __t1858t=0;
  char* __t1860t__unsafe_ptr=0;
  uint64_t __t1860t__dat__pos=0;
  uint64_t __t1860t__dat__length=0;
  char __t1860t__dat__first=0;
  char* __t1861t__unsafe_ptr=0;
  uint64_t __t1861t__dat__pos=0;
  uint64_t __t1861t__dat__length=0;
  char __t1861t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1345t(&__t1853t__unsafe_ptr,&__t1853t__unsafe_size,&__t1853t__unsafe_offset,&__t1853t__unsafe_align);
  __t1854t=2;
  __t_errcode=alloc__t509t(&__t1853t__unsafe_ptr,&__t1853t__unsafe_size,&__t1853t__unsafe_offset,&__t1853t__unsafe_align,__t1854t,&__t1855t__unsafe_ptr,&__t1855t__unsafe_size,&__t1855t__unsafe_offset,&__t1855t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1855t__unsafe_ptr;
  buf__unsafe_size=__t1855t__unsafe_size;
  buf__unsafe_offset=__t1855t__unsafe_offset;
  buf__unsafe_align=__t1855t__unsafe_align;
  __t1857t=0;
  __t1858t=__t1857t;
  __t_errcode=str__t668t(__t1859t,&__t1860t__unsafe_ptr,&__t1860t__dat__pos,&__t1860t__dat__length,&__t1860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t738t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1858t,__t1860t__unsafe_ptr,__t1860t__dat__pos,__t1860t__dat__length,__t1860t__dat__first,&__t1861t__unsafe_ptr,&__t1861t__dat__pos,&__t1861t__dat__length,&__t1861t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1861t__unsafe_ptr;
  s__dat__pos=__t1861t__dat__pos;
  s__dat__length=__t1861t__dat__length;
  s__dat__first=__t1861t__dat__first;
  __t_errcode=system__t1393t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1855t__unsafe_ptr,&__t1856t____t511t__);
  if(__t1856t____t511t__){
  free__t502t(&__t1855t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1852t();return 0;}