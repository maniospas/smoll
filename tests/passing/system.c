#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1879t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1349t(char** __t1883t, uint64_t* __t1884t, uint16_t* __t1885t, uint16_t* __t1886t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1883t=unsafe_ptr;
  *__t1884t=unsafe_size;
  *__t1885t=unsafe_offset;
  *__t1886t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1887t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1887t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1888t) {
  char* allocated=*__t1888t;
  if(allocated){
  free(allocated);
  }
  *__t1888t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1889t) {
  int value=0;
  *__t1889t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1890t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1890t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1891t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1891t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1892t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1892t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1893t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1893t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1894t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1894t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1895t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1896t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1896t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1897t) {
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
  *__t1897t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1898t, uint64_t* __t1899t, uint16_t* __t1900t, uint16_t* __t1901t, uint64_t size, char** __t1902t, uint64_t* __t1903t, uint16_t* __t1904t, uint16_t* __t1905t) {
  char* buffer__unsafe_ptr=*__t1898t;
  uint64_t buffer__unsafe_size=*__t1899t;
  uint16_t buffer__unsafe_offset=*__t1900t;
  uint16_t buffer__unsafe_align=*__t1901t;
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
  *__t1898t=buffer__unsafe_ptr;
  *__t1899t=buffer__unsafe_size;
  *__t1900t=buffer__unsafe_offset;
  *__t1901t=buffer__unsafe_align;
  *__t1902t=__t520t__unsafe_ptr;
  *__t1903t=__t520t__unsafe_size;
  *__t1904t=__t520t__unsafe_offset;
  *__t1905t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1906t, uint64_t* __t1907t, uint16_t* __t1908t, uint16_t* __t1909t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1906t=unsafe_ptr;
  *__t1907t=unsafe_size;
  *__t1908t=unsafe_offset;
  *__t1909t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1910t) {
  *__t1910t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1911t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1911t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1912t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1912t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1913t) {
  *__t1913t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1914t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1914t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1915t) {
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
  *__t1915t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1916t, uint64_t* __t1917t, uint64_t* __t1918t, char* __t1919t) {
  goto __t_return;
  __t_return:
  *__t1916t=unsafe_ptr;
  *__t1917t=dat__pos;
  *__t1918t=dat__length;
  *__t1919t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1920t, uint64_t* __t1921t, uint64_t* __t1922t, char* __t1923t) {
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
  *__t1920t=__t641t__unsafe_ptr;
  *__t1921t=__t641t__dat__pos;
  *__t1922t=__t641t__dat__length;
  *__t1923t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1924t, uint64_t* __t1925t, uint64_t* __t1926t, char* __t1927t) {
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
  *__t1924t=__t671t__unsafe_ptr;
  *__t1925t=__t671t__dat__pos;
  *__t1926t=__t671t__dat__length;
  *__t1927t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1928t, uint64_t* __t1929t, uint64_t* __t1930t, char* __t1931t) {
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
  *__t1928t=__t679t__unsafe_ptr;
  *__t1929t=__t679t__dat__pos;
  *__t1930t=__t679t__dat__length;
  *__t1931t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t665t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1932t, uint64_t* __t1933t, uint64_t* __t1934t, char* __t1935t) {
  goto __t_return;
  __t_return:
  *__t1932t=other__unsafe_ptr;
  *__t1933t=other__dat__pos;
  *__t1934t=other__dat__length;
  *__t1935t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1936t) {
  goto __t_return;
  __t_return:
  *__t1936t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1937t) {
  goto __t_return;
  __t_return:
  *__t1937t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1938t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1938t=z;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1939t, uint64_t* __t1940t, uint16_t* __t1941t, uint16_t* __t1942t, uint64_t* __t1943t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1944t, uint64_t* __t1945t, uint64_t* __t1946t, char* __t1947t) {
  char* buf__unsafe_ptr=*__t1939t;
  uint64_t buf__unsafe_size=*__t1940t;
  uint16_t buf__unsafe_offset=*__t1941t;
  uint16_t buf__unsafe_align=*__t1942t;
  uint64_t pos=*__t1943t;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__dat__pos=0;
  uint64_t __t743t__dat__length=0;
  char __t743t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t744t__=0;
  uint64_t __t745t__=0;
  uint64_t next_pos=0;
  uint64_t __t746t__=0;
  char __t747t__=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t prev_pos=0;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t665t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t171t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t272t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t171t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1939t=buf__unsafe_ptr;
  *__t1940t=buf__unsafe_size;
  *__t1941t=buf__unsafe_offset;
  *__t1942t=buf__unsafe_align;
  *__t1943t=pos;
  *__t1944t=__t750t__unsafe_ptr;
  *__t1945t=__t750t__dat__pos;
  *__t1946t=__t750t__dat__length;
  *__t1947t=__t750t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1948t, uint64_t* __t1949t, uint64_t* __t1950t, char* __t1951t) {
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
  *__t1948t=__t712t__unsafe_ptr;
  *__t1949t=__t712t__dat__pos;
  *__t1950t=__t712t__dat__length;
  *__t1951t=__t712t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t713t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1952t, char** __t1953t, uint64_t* __t1954t, uint64_t* __t1955t, char* __t1956t) {
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
  *__t1952t=cstr;
  *__t1953t=str__unsafe_ptr;
  *__t1954t=str__dat__pos;
  *__t1955t=str__dat__length;
  *__t1956t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t720t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1957t) {
  goto __t_return;
  __t_return:
  *__t1957t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t1388t(const char* cmd, const char** __t1958t) {
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
  *__t1958t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1387t(const char* cmd, int64_t* __t1959t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t1959t=result;
}

static inline __attribute__((always_inline)) void int__t416t(uint64_t x, int64_t* __t1960t) {
  int __t417t=0;
  int __t418t=0;
  int __t419t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1960t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t1961t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t1961t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t1962t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1962t=z;
}

int system__t1397t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1398t__cstr=0;
  char* __t1398t__str__unsafe_ptr=0;
  uint64_t __t1398t__str__dat__pos=0;
  uint64_t __t1398t__str__dat__length=0;
  char __t1398t__str__dat__first=0;
  char __t1399t____t715t____t710t____t511t__=0;
  const char* __t1400t__=0;
  const char* __t1401t__=0;
  int64_t __t1402t__=0;
  int64_t result=0;
  uint64_t __t1403t=0;
  int64_t __t1404t__=0;
  char __t1405t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t713t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1398t__cstr,&__t1398t__str__unsafe_ptr,&__t1398t__str__dat__pos,&__t1398t__str__dat__length,&__t1398t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t720t(__t1398t__cstr,__t1398t__str__unsafe_ptr,__t1398t__str__dat__pos,__t1398t__str__dat__length,__t1398t__str__dat__first,&__t1400t__);
  __t_errcode=safe__t1388t(__t1400t__,&__t1401t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1387t(__t1401t__,&__t1402t__);
  result=__t1402t__;
  __t1403t=0;
  int__t416t(__t1403t,&__t1404t__);
  neq__t132t(result,__t1404t__,&__t1405t__);
  if(__t1405t__){
  __t_errcode=40;
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1398t__str__unsafe_ptr,&__t1399t____t715t____t710t____t511t__);
  if(__t1399t____t715t____t710t____t511t__){
  __t1398t__str__unsafe_ptr=__t1398t__str__unsafe_ptr;
  free__t502t(&__t1398t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1872t() {
  char* __t1873t__unsafe_ptr=0;
  uint64_t __t1873t__unsafe_size=0;
  uint16_t __t1873t__unsafe_offset=0;
  uint16_t __t1873t__unsafe_align=0;
  uint64_t __t1874t=0;
  char* __t1875t__unsafe_ptr=0;
  uint64_t __t1875t__unsafe_size=0;
  uint16_t __t1875t__unsafe_offset=0;
  uint16_t __t1875t__unsafe_align=0;
  char __t1876t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1877t=0;
  uint64_t __t1878t=0;
  char* __t1880t__unsafe_ptr=0;
  uint64_t __t1880t__dat__pos=0;
  uint64_t __t1880t__dat__length=0;
  char __t1880t__dat__first=0;
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__dat__pos=0;
  uint64_t __t1881t__dat__length=0;
  char __t1881t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1349t(&__t1873t__unsafe_ptr,&__t1873t__unsafe_size,&__t1873t__unsafe_offset,&__t1873t__unsafe_align);
  __t1874t=2;
  __t_errcode=alloc__t509t(&__t1873t__unsafe_ptr,&__t1873t__unsafe_size,&__t1873t__unsafe_offset,&__t1873t__unsafe_align,__t1874t,&__t1875t__unsafe_ptr,&__t1875t__unsafe_size,&__t1875t__unsafe_offset,&__t1875t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1875t__unsafe_ptr;
  buf__unsafe_size=__t1875t__unsafe_size;
  buf__unsafe_offset=__t1875t__unsafe_offset;
  buf__unsafe_align=__t1875t__unsafe_align;
  __t1877t=0;
  __t1878t=__t1877t;
  __t_errcode=str__t672t(__t1879t,&__t1880t__unsafe_ptr,&__t1880t__dat__pos,&__t1880t__dat__length,&__t1880t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1878t,__t1880t__unsafe_ptr,__t1880t__dat__pos,__t1880t__dat__length,__t1880t__dat__first,&__t1881t__unsafe_ptr,&__t1881t__dat__pos,&__t1881t__dat__length,&__t1881t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1881t__unsafe_ptr;
  s__dat__pos=__t1881t__dat__pos;
  s__dat__length=__t1881t__dat__length;
  s__dat__first=__t1881t__dat__first;
  __t_errcode=system__t1397t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:exists__t436t(__t1875t__unsafe_ptr,&__t1876t____t511t__);
  if(__t1876t____t511t__){
  __t1875t__unsafe_ptr=__t1875t__unsafe_ptr;
  free__t502t(&__t1875t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1872t();return 0;}