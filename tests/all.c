#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1908t=".s";
const char* const __t1895t="./smoll ";
const char* const __t363t="";
const char* const __t1889t="./tests/passing/";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1349t(char** __t1918t, uint64_t* __t1919t, uint16_t* __t1920t, uint16_t* __t1921t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1918t=unsafe_ptr;
  *__t1919t=unsafe_size;
  *__t1920t=unsafe_offset;
  *__t1921t=unsafe_align;
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

static inline __attribute__((always_inline)) void false__t10t(int* __t1924t) {
  int value=0;
  *__t1924t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1925t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1925t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1926t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1926t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1927t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1927t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1928t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1928t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1929t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1929t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1930t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1930t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1931t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1931t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1932t) {
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
  *__t1932t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1933t, uint64_t* __t1934t, uint16_t* __t1935t, uint16_t* __t1936t, uint64_t size, char** __t1937t, uint64_t* __t1938t, uint16_t* __t1939t, uint16_t* __t1940t) {
  char* buffer__unsafe_ptr=*__t1933t;
  uint64_t buffer__unsafe_size=*__t1934t;
  uint16_t buffer__unsafe_offset=*__t1935t;
  uint16_t buffer__unsafe_align=*__t1936t;
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
  *__t1933t=buffer__unsafe_ptr;
  *__t1934t=buffer__unsafe_size;
  *__t1935t=buffer__unsafe_offset;
  *__t1936t=buffer__unsafe_align;
  *__t1937t=__t520t__unsafe_ptr;
  *__t1938t=__t520t__unsafe_size;
  *__t1939t=__t520t__unsafe_offset;
  *__t1940t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t722t(char** __t1941t, uint64_t* __t1942t, uint16_t* __t1943t, uint16_t* __t1944t, char** __t1945t, uint64_t* __t1946t, uint16_t* __t1947t, uint16_t* __t1948t, uint64_t* __t1949t) {
  char* buf__unsafe_ptr=*__t1941t;
  uint64_t buf__unsafe_size=*__t1942t;
  uint16_t buf__unsafe_offset=*__t1943t;
  uint16_t buf__unsafe_align=*__t1944t;
  uint64_t __t723t=0;
  uint64_t __t724t=0;
  uint64_t pos=0;
  __t723t=0;
  __t724t=__t723t;
  pos=__t724t;
  goto __t_return;
  __t_return:
  *__t1941t=buf__unsafe_ptr;
  *__t1942t=buf__unsafe_size;
  *__t1943t=buf__unsafe_offset;
  *__t1944t=buf__unsafe_align;
  *__t1945t=buf__unsafe_ptr;
  *__t1946t=buf__unsafe_size;
  *__t1947t=buf__unsafe_offset;
  *__t1948t=buf__unsafe_align;
  *__t1949t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1950t, uint64_t* __t1951t, uint16_t* __t1952t, uint16_t* __t1953t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1950t=unsafe_ptr;
  *__t1951t=unsafe_size;
  *__t1952t=unsafe_offset;
  *__t1953t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1954t) {
  *__t1954t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1955t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1955t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1956t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1956t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1957t) {
  *__t1957t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1958t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1958t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1959t) {
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
  *__t1959t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1960t, uint64_t* __t1961t, uint64_t* __t1962t, char* __t1963t) {
  goto __t_return;
  __t_return:
  *__t1960t=unsafe_ptr;
  *__t1961t=dat__pos;
  *__t1962t=dat__length;
  *__t1963t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1964t, uint64_t* __t1965t, uint64_t* __t1966t, char* __t1967t) {
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
  *__t1964t=__t641t__unsafe_ptr;
  *__t1965t=__t641t__dat__pos;
  *__t1966t=__t641t__dat__length;
  *__t1967t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1968t, uint64_t* __t1969t, uint64_t* __t1970t, char* __t1971t) {
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
  *__t1968t=__t671t__unsafe_ptr;
  *__t1969t=__t671t__dat__pos;
  *__t1970t=__t671t__dat__length;
  *__t1971t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1972t, uint64_t* __t1973t, uint64_t* __t1974t, char* __t1975t) {
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
  *__t1972t=__t679t__unsafe_ptr;
  *__t1973t=__t679t__dat__pos;
  *__t1974t=__t679t__dat__length;
  *__t1975t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1976t) {
  goto __t_return;
  __t_return:
  *__t1976t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1977t) {
  goto __t_return;
  __t_return:
  *__t1977t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1978t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1978t=z;
}

int copy__t751t(char** __t1979t, uint64_t* __t1980t, uint16_t* __t1981t, uint16_t* __t1982t, uint64_t* __t1983t, const char* _other, char** __t1984t, uint64_t* __t1985t, uint64_t* __t1986t, char* __t1987t) {
  char* buf__unsafe_ptr=*__t1979t;
  uint64_t buf__unsafe_size=*__t1980t;
  uint16_t buf__unsafe_offset=*__t1981t;
  uint16_t buf__unsafe_align=*__t1982t;
  uint64_t pos=*__t1983t;
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
  __t_errcode=str__t672t(_other,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t752t__unsafe_ptr;
  other__dat__pos=__t752t__dat__pos;
  other__dat__length=__t752t__dat__length;
  other__dat__first=__t752t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t753t__);
  add__t171t(pos,__t753t__,&__t754t__);
  next_pos=__t754t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t755t__);
  gt__t272t(next_pos,__t755t__,&__t756t__);
  if(__t756t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t757t=0;
  add__t171t(pos,__t757t,&__t758t__);
  prev_pos=__t758t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1979t=buf__unsafe_ptr;
  *__t1980t=buf__unsafe_size;
  *__t1981t=buf__unsafe_offset;
  *__t1982t=buf__unsafe_align;
  *__t1983t=pos;
  *__t1984t=__t759t__unsafe_ptr;
  *__t1985t=__t759t__dat__pos;
  *__t1986t=__t759t__dat__length;
  *__t1987t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1741t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1742t(const char* path, char** __t1988t) {
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
  *__t1988t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1989t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1989t=__t482t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1753t(char** __t1990t, const char** __t1991t) {
  char* f__unsafe_ptr=*__t1990t;
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
  *__t1990t=f__unsafe_ptr;
  *__t1991t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1758t(char** __t1992t, char** __t1993t, uint64_t* __t1994t, uint64_t* __t1995t, char* __t1996t) {
  char* f__unsafe_ptr=*__t1992t;
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
  *__t1992t=f__unsafe_ptr;
  *__t1993t=__t1760t__unsafe_ptr;
  *__t1994t=__t1760t__dat__pos;
  *__t1995t=__t1760t__dat__length;
  *__t1996t=__t1760t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1822t(char** __t1997t, uint64_t __t_anon1, char** __t1998t, uint64_t* __t1999t, uint64_t* __t2000t, char* __t2001t) {
  char* data__unsafe_ptr=*__t1997t;
  char* __t1823t__unsafe_ptr=0;
  uint64_t __t1823t__dat__pos=0;
  uint64_t __t1823t__dat__length=0;
  char __t1823t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t1758t(&data__unsafe_ptr,&__t1823t__unsafe_ptr,&__t1823t__dat__pos,&__t1823t__dat__length,&__t1823t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1997t=data__unsafe_ptr;
  *__t1998t=__t1823t__unsafe_ptr;
  *__t1999t=__t1823t__dat__pos;
  *__t2000t=__t1823t__dat__length;
  *__t2001t=__t1823t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t665t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2002t, uint64_t* __t2003t, uint64_t* __t2004t, char* __t2005t) {
  goto __t_return;
  __t_return:
  *__t2002t=other__unsafe_ptr;
  *__t2003t=other__dat__pos;
  *__t2004t=other__dat__length;
  *__t2005t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t2006t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2006t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t2007t) {
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
  *__t2007t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t823t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2008t) {
  uint64_t __t824t__=0;
  char* __t825t__=0;
  add__t171t(s__dat__pos,i,&__t824t__);
  add__t504t(s__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  __t_return:
  *__t2008t=__t825t__;
}

int slice__t862t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t2009t, uint64_t* __t2010t, uint64_t* __t2011t, char* __t2012t) {
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
  str__t665t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t863t__unsafe_ptr,&__t863t__dat__pos,&__t863t__dat__length,&__t863t__dat__first);
  s__unsafe_ptr=__t863t__unsafe_ptr;
  s__dat__pos=__t863t__dat__pos;
  s__dat__length=__t863t__dat__length;
  s__dat__first=__t863t__dat__first;
  eq__t119t(from,to,&__t864t__);
  if(__t864t__){
  __t_errcode=str__t672t(__t363t,&__t865t__unsafe_ptr,&__t865t__dat__pos,&__t865t__dat__length,&__t865t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  lt__t248t(from,to,&__t866t__);
  if(!__t866t__){
  gt__t272t(to,s__dat__length,&__t867t__);
  __t868t=__t867t__;
  }
  if(__t868t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t348t(to,from,&__t869t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t869t__;
  __t870t=0;
  neq__t143t(from,__t870t,&__t871t__);
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
  add__t171t(s__dat__pos,from,&__t874t__);
  str__t630t(s__unsafe_ptr,__t874t__,new_length,new_first,&__t875t__unsafe_ptr,&__t875t__dat__pos,&__t875t__dat__length,&__t875t__dat__first);
  __t865t__unsafe_ptr=__t875t__unsafe_ptr;
  __t865t__dat__pos=__t875t__dat__pos;
  __t865t__dat__length=__t875t__dat__length;
  __t865t__dat__first=__t875t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2009t=__t865t__unsafe_ptr;
  *__t2010t=__t865t__dat__pos;
  *__t2011t=__t865t__dat__length;
  *__t2012t=__t865t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t684t(char x, char y, char* __t2013t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t2013t=z;
}

static inline __attribute__((always_inline)) void eq__t827t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t2014t) {
  uint64_t __t828t__=0;
  uint64_t n=0;
  uint64_t __t829t__=0;
  char __t830t__=0;
  char __t831t=0;
  char __t832t__=0;
  char __t833t=0;
  char z=0;
  len__t680t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t828t__);
  n=__t828t__;
  len__t680t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t829t__);
  neq__t143t(n,__t829t__,&__t830t__);
  if(__t830t__){
  __t831t=0;
  goto __t_return;
  }
  neq__t684t(x__dat__first,y__dat__first,&__t832t__);
  if(__t832t__){
  __t833t=0;
  __t831t=__t833t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t831t=z;
  goto __t_return;
  __t_return:
  *__t2014t=__t831t;
}

static inline __attribute__((always_inline)) int ends_with__t940t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t2015t) {
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
  str__t665t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t941t__unsafe_ptr,&__t941t__dat__pos,&__t941t__dat__length,&__t941t__dat__first);
  stack__unsafe_ptr=__t941t__unsafe_ptr;
  stack__dat__pos=__t941t__dat__pos;
  stack__dat__length=__t941t__dat__length;
  stack__dat__first=__t941t__dat__first;
  __t_errcode=str__t672t(_needle,&__t942t__unsafe_ptr,&__t942t__dat__pos,&__t942t__dat__length,&__t942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t942t__unsafe_ptr;
  needle__dat__pos=__t942t__dat__pos;
  needle__dat__length=__t942t__dat__length;
  needle__dat__first=__t942t__dat__first;
  lt__t248t(stack__dat__length,needle__dat__length,&__t943t__);
  if(__t943t__){
  __t944t=0;
  goto __t_return;
  }
  len__t680t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t945t__);
  n=__t945t__;
  len__t680t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t946t__);
  __t_errcode=sub__t348t(n,__t946t__,&__t947t__);
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
  *__t2015t=__t944t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t760t(char** __t2016t, uint64_t* __t2017t, uint16_t* __t2018t, uint16_t* __t2019t, uint64_t* __t2020t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2021t, uint64_t* __t2022t, uint64_t* __t2023t, char* __t2024t) {
  char* buf__unsafe_ptr=*__t2016t;
  uint64_t buf__unsafe_size=*__t2017t;
  uint16_t buf__unsafe_offset=*__t2018t;
  uint16_t buf__unsafe_align=*__t2019t;
  uint64_t pos=*__t2020t;
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
  str__t665t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t761t__unsafe_ptr,&__t761t__dat__pos,&__t761t__dat__length,&__t761t__dat__first);
  other__unsafe_ptr=__t761t__unsafe_ptr;
  other__dat__pos=__t761t__dat__pos;
  other__dat__length=__t761t__dat__length;
  other__dat__first=__t761t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t762t__);
  add__t171t(pos,__t762t__,&__t763t__);
  null_pos=__t763t__;
  __t764t=1;
  add__t171t(null_pos,__t764t,&__t765t__);
  next_pos=__t765t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t766t__);
  gt__t272t(next_pos,__t766t__,&__t767t__);
  if(__t767t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t768t=0;
  add__t171t(pos,__t768t,&__t769t__);
  prev_pos=__t769t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t770t__unsafe_ptr,&__t770t__dat__pos,&__t770t__dat__length,&__t770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2016t=buf__unsafe_ptr;
  *__t2017t=buf__unsafe_size;
  *__t2018t=buf__unsafe_offset;
  *__t2019t=buf__unsafe_align;
  *__t2020t=pos;
  *__t2021t=__t770t__unsafe_ptr;
  *__t2022t=__t770t__dat__pos;
  *__t2023t=__t770t__dat__length;
  *__t2024t=__t770t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t740t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2025t) {
  uint64_t __t741t__=0;
  add__t171t(s__dat__pos,s__dat__length,&__t741t__);
  goto __t_return;
  __t_return:
  *__t2025t=__t741t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2026t) {
  int value=0;
  *__t2026t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2027t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2027t=__t39t__;
}

static inline __attribute__((always_inline)) int str__t642t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t2028t, uint64_t* __t2029t, uint64_t* __t2030t, char* __t2031t) {
  int __t643t=0;
  int __t644t=0;
  int __t645t__=0;
  uint64_t __t646t__=0;
  char __t647t__=0;
  uint64_t __t648t=0;
  uint64_t __t649t=0;
  char* __t650t__=0;
  char __t651t__value=0;
  char* __t652t__unsafe_ptr=0;
  uint64_t __t652t__dat__pos=0;
  uint64_t __t652t__dat__length=0;
  char __t652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t38t(__t644t,&__t645t__);
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t646t__);
  gt__t272t(length,__t646t__,&__t647t__);
  if(__t647t__){
  __t_errcode=18;
  goto __t_failure;
  }
  __t648t=0;
  __t649t=0;
  __t_errcode=get__t595t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t649t,&__t650t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t650t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t651t__value,__t650t__,1);
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t648t,length,__t651t__value,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2028t=__t652t__unsafe_ptr;
  *__t2029t=__t652t__dat__pos;
  *__t2030t=__t652t__dat__length;
  *__t2031t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2032t, uint64_t* __t2033t, uint64_t* __t2034t, char* __t2035t) {
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
  *__t2032t=__t712t__unsafe_ptr;
  *__t2033t=__t712t__dat__pos;
  *__t2034t=__t712t__dat__length;
  *__t2035t=__t712t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t713t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2036t, char** __t2037t, uint64_t* __t2038t, uint64_t* __t2039t, char* __t2040t) {
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
  *__t2036t=cstr;
  *__t2037t=str__unsafe_ptr;
  *__t2038t=str__dat__pos;
  *__t2039t=str__dat__length;
  *__t2040t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t720t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2041t) {
  goto __t_return;
  __t_return:
  *__t2041t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t1331t(const char* cmd, char** __t2042t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t2042t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1330t(char* unsafe_ptr, int64_t* __t2043t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t2043t=status;
}

static inline __attribute__((always_inline)) void int__t416t(uint64_t x, int64_t* __t2044t) {
  int __t417t=0;
  int __t418t=0;
  int __t419t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2044t=z;
}

static inline __attribute__((always_inline)) void is_different__t82t(int64_t x, int64_t y, int* __t2045t) {
  int __t83t=0;
  int __t84t__=0;
  not__t36t(__t83t,&__t84t__);
  goto __t_return;
  __t_return:
  *__t2045t=__t84t__;
}

static inline __attribute__((always_inline)) void neq__t132t(int64_t x, int64_t y, char* __t2046t) {
  int __t133t__=0;
  char z=0;
  is_different__t82t(x,y,&__t133t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2046t=z;
}

static inline __attribute__((always_inline)) int read__t1332t(const char* cmd, char** __t2047t) {
  char* __t1333t__=0;
  char* unsafe_ptr=0;
  char __t1334t__=0;
  char __t1335t__=0;
  char __t1336t__=0;
  int64_t __t1337t__=0;
  int64_t status=0;
  uint64_t __t1338t=0;
  int64_t __t1339t__=0;
  char __t1340t__=0;
  char __t1341t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1331t(cmd,&__t1333t__);
  unsafe_ptr=__t1333t__;
  exists__t436t(unsafe_ptr,&__t1334t__);
  not__t27t(__t1334t__,&__t1335t__);
  if(__t1335t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(unsafe_ptr,&__t1336t__);
  if(__t1336t__){
  pclose__t1330t(unsafe_ptr,&__t1337t__);
  status=__t1337t__;
  unsafe_ptr=0;
  __t1338t=0;
  int__t416t(__t1338t,&__t1339t__);
  neq__t132t(status,__t1339t__,&__t1340t__);
  if(__t1340t__){
  __t_complain=37;
  __t1341t=__t1341t==0;
  }
  }
  __t_return:
  *__t2047t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1343t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t2048t) {
  const char* __t1344t__cstr=0;
  char* __t1344t__str__unsafe_ptr=0;
  uint64_t __t1344t__str__dat__pos=0;
  uint64_t __t1344t__str__dat__length=0;
  char __t1344t__str__dat__first=0;
  char __t1345t____t715t____t710t____t511t__=0;
  const char* __t1346t__=0;
  char* __t1347t__unsafe_ptr=0;
  char __t1348t____t1336t__=0;
  int64_t __t1348t____t1337t__=0;
  int64_t __t1348t__status=0;
  uint64_t __t1348t____t1338t=0;
  int64_t __t1348t____t1339t__=0;
  char __t1348t____t1340t__=0;
  char __t1348t____t1341t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t713t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1344t__cstr,&__t1344t__str__unsafe_ptr,&__t1344t__str__dat__pos,&__t1344t__str__dat__length,&__t1344t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t720t(__t1344t__cstr,__t1344t__str__unsafe_ptr,__t1344t__str__dat__pos,__t1344t__str__dat__length,__t1344t__str__dat__first,&__t1346t__);
  __t_errcode=read__t1332t(__t1346t__,&__t1347t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t436t(__t1347t__unsafe_ptr,&__t1348t____t1336t__);
  if(__t1348t____t1336t__){
  pclose__t1330t(__t1347t__unsafe_ptr,&__t1348t____t1337t__);
  __t1348t__status=__t1348t____t1337t__;
  __t1347t__unsafe_ptr=0;
  __t1348t____t1338t=0;
  int__t416t(__t1348t____t1338t,&__t1348t____t1339t__);
  neq__t132t(__t1348t__status,__t1348t____t1339t__,&__t1348t____t1340t__);
  if(__t1348t____t1340t__){
  __t_complain=37;
  __t1348t____t1341t=__t1348t____t1341t==0;
  }
  }
  __t_return:
  *__t2048t=__t1347t__unsafe_ptr;
  exists__t436t(__t1344t__str__unsafe_ptr,&__t1345t____t715t____t710t____t511t__);
  if(__t1345t____t715t____t710t____t511t__){
  __t1344t__str__unsafe_ptr=__t1344t__str__unsafe_ptr;
  free__t502t(&__t1344t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1324t(int64_t value, const char** __t2049t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t2049t=ret;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t1880t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t1881t__unsafe_ptr=0;
  char __t1882t____t1348t____t1336t__=0;
  int64_t __t1882t____t1348t____t1337t__=0;
  int64_t __t1882t____t1348t__status=0;
  uint64_t __t1882t____t1348t____t1338t=0;
  int64_t __t1882t____t1348t____t1339t__=0;
  char __t1882t____t1348t____t1340t__=0;
  char __t1882t____t1348t____t1341t=0;
  char* __t1883t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t1884t=0;
  int64_t __t1885t=0;
  int64_t error=0;
  const char* __t1886t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1343t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t1881t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1883t__unsafe_ptr=__t1881t__unsafe_ptr;
  proc__unsafe_ptr=__t1883t__unsafe_ptr;
  exists__t436t(__t1881t__unsafe_ptr,&__t1882t____t1348t____t1336t__);
  if(__t1882t____t1348t____t1336t__){
  pclose__t1330t(__t1881t__unsafe_ptr,&__t1882t____t1348t____t1337t__);
  __t1882t____t1348t__status=__t1882t____t1348t____t1337t__;
  __t1881t__unsafe_ptr=0;
  __t1882t____t1348t____t1338t=0;
  int__t416t(__t1882t____t1348t____t1338t,&__t1882t____t1348t____t1339t__);
  neq__t132t(__t1882t____t1348t__status,__t1882t____t1348t____t1339t__,&__t1882t____t1348t____t1340t__);
  if(__t1882t____t1348t____t1340t__){
  __t_complain=37;
  __t1882t____t1348t____t1341t=__t1882t____t1348t____t1341t==0;
  }
  }
  __t1885t=__t_complain;
  __t1884t=(__t_complain==0);
  __t_complain=0;
  error=__t1885t;
  __t1884t=__t1884t==0;
  if(__t1884t){
  cstr__t1324t(error,&__t1886t__);
  print__t369t(__t1886t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1888t() {
  const char* path=0;
  char* __t1890t__unsafe_ptr=0;
  uint64_t __t1890t__unsafe_size=0;
  uint16_t __t1890t__unsafe_offset=0;
  uint16_t __t1890t__unsafe_align=0;
  uint64_t __t1891t=0;
  char* __t1892t__unsafe_ptr=0;
  uint64_t __t1892t__unsafe_size=0;
  uint16_t __t1892t__unsafe_offset=0;
  uint16_t __t1892t__unsafe_align=0;
  char __t1893t____t511t__=0;
  char* __t1894t__buf__unsafe_ptr=0;
  uint64_t __t1894t__buf__unsafe_size=0;
  uint16_t __t1894t__buf__unsafe_offset=0;
  uint16_t __t1894t__buf__unsafe_align=0;
  uint64_t __t1894t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t1896t__unsafe_ptr=0;
  uint64_t __t1896t__dat__pos=0;
  uint64_t __t1896t__dat__length=0;
  char __t1896t__dat__first=0;
  char* __t1897t__unsafe_ptr=0;
  uint64_t __t1897t__dat__pos=0;
  uint64_t __t1897t__dat__length=0;
  char __t1897t__dat__first=0;
  char* __t1898t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t1900t__unsafe_ptr=0;
  uint64_t __t1900t__unsafe_size=0;
  uint16_t __t1900t__unsafe_offset=0;
  uint16_t __t1900t__unsafe_align=0;
  uint64_t __t1901t=0;
  uint64_t __t1902t__=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__unsafe_size=0;
  uint16_t __t1903t__unsafe_offset=0;
  uint16_t __t1903t__unsafe_align=0;
  char __t1904t____t511t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  uint64_t __t1905t=0;
  char __t1906t=0;
  char* __t1907t__unsafe_ptr=0;
  uint64_t __t1907t__dat__pos=0;
  uint64_t __t1907t__dat__length=0;
  char __t1907t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t1909t__=0;
  char __t1910t__=0;
  char* __t1911t__buf__unsafe_ptr=0;
  uint64_t __t1911t__buf__unsafe_size=0;
  uint16_t __t1911t__buf__unsafe_offset=0;
  uint16_t __t1911t__buf__unsafe_align=0;
  uint64_t __t1911t__pos=0;
  char* __t1912t__unsafe_ptr=0;
  uint64_t __t1912t__dat__pos=0;
  uint64_t __t1912t__dat__length=0;
  char __t1912t__dat__first=0;
  char* __t1913t__unsafe_ptr=0;
  uint64_t __t1913t__dat__pos=0;
  uint64_t __t1913t__dat__length=0;
  char __t1913t__dat__first=0;
  uint64_t __t1914t__=0;
  char* __t1915t__unsafe_ptr=0;
  uint64_t __t1915t__dat__pos=0;
  uint64_t __t1915t__dat__length=0;
  char __t1915t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t1889t;
  char____t_buffer____buffer__t1349t(&__t1890t__unsafe_ptr,&__t1890t__unsafe_size,&__t1890t__unsafe_offset,&__t1890t__unsafe_align);
  __t1891t=256;
  __t_errcode=alloc__t509t(&__t1890t__unsafe_ptr,&__t1890t__unsafe_size,&__t1890t__unsafe_offset,&__t1890t__unsafe_align,__t1891t,&__t1892t__unsafe_ptr,&__t1892t__unsafe_size,&__t1892t__unsafe_offset,&__t1892t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t722t(&__t1892t__unsafe_ptr,&__t1892t__unsafe_size,&__t1892t__unsafe_offset,&__t1892t__unsafe_align,&__t1894t__buf__unsafe_ptr,&__t1894t__buf__unsafe_size,&__t1894t__buf__unsafe_offset,&__t1894t__buf__unsafe_align,&__t1894t__pos);
  bp__buf__unsafe_ptr=__t1894t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t1894t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t1894t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t1894t__buf__unsafe_align;
  bp__pos=__t1894t__pos;
  __t_errcode=copy__t751t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t1895t,&__t1896t__unsafe_ptr,&__t1896t__dat__pos,&__t1896t__dat__length,&__t1896t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t1897t__unsafe_ptr,&__t1897t__dat__pos,&__t1897t__dat__length,&__t1897t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1742t(path,&__t1898t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t1898t__unsafe_ptr;
  char____t_buffer____buffer__t1349t(&__t1900t__unsafe_ptr,&__t1900t__unsafe_size,&__t1900t__unsafe_offset,&__t1900t__unsafe_align);
  __t1901t=4;
  KB__t480t(__t1901t,&__t1902t__);
  __t_errcode=alloc__t509t(&__t1900t__unsafe_ptr,&__t1900t__unsafe_size,&__t1900t__unsafe_offset,&__t1900t__unsafe_align,__t1902t__,&__t1903t__unsafe_ptr,&__t1903t__unsafe_size,&__t1903t__unsafe_offset,&__t1903t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t1903t__unsafe_ptr;
  proc_buf__unsafe_size=__t1903t__unsafe_size;
  proc_buf__unsafe_offset=__t1903t__unsafe_offset;
  proc_buf__unsafe_align=__t1903t__unsafe_align;
  __t1905t=0;
  while(1){
  __t_complain=get__t1822t(&test_dir__unsafe_ptr,__t1905t,&__t1907t__unsafe_ptr,&__t1907t__dat__pos,&__t1907t__dat__length,&__t1907t__dat__first);
  __t1906t=__t_complain;
  entry__unsafe_ptr=__t1907t__unsafe_ptr;
  entry__dat__pos=__t1907t__dat__pos;
  entry__dat__length=__t1907t__dat__length;
  entry__dat__first=__t1907t__dat__first;
  __t1906t=__t1906t==0;
  __t1905t=__t1905t+1;
  if(!__t1906t){
  break;
  }
  __t_errcode=ends_with__t940t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t1908t,&__t1909t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t1909t__,&__t1910t__);
  if(__t1910t__){
  continue;
  }
  __t1911t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t1911t__buf__unsafe_size=bp__buf__unsafe_size;
  __t1911t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t1911t__buf__unsafe_align=bp__buf__unsafe_align;
  __t1911t__pos=bp__pos;
  str__t665t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t1912t__unsafe_ptr,&__t1912t__dat__pos,&__t1912t__dat__length,&__t1912t__dat__first);
  __t_errcode=copy_null_terminated__t760t(&__t1911t__buf__unsafe_ptr,&__t1911t__buf__unsafe_size,&__t1911t__buf__unsafe_offset,&__t1911t__buf__unsafe_align,&__t1911t__pos,__t1912t__unsafe_ptr,__t1912t__dat__pos,__t1912t__dat__length,__t1912t__dat__first,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length,&__t1913t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t740t(__t1913t__unsafe_ptr,__t1913t__dat__pos,__t1913t__dat__length,__t1913t__dat__first,&__t1914t__);
  __t_errcode=str__t642t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t1914t__,&__t1915t__unsafe_ptr,&__t1915t__dat__pos,&__t1915t__dat__length,&__t1915t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t1915t__unsafe_ptr;
  command__dat__pos=__t1915t__dat__pos;
  command__dat__length=__t1915t__dat__length;
  command__dat__first=__t1915t__dat__first;
  print__t784t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t1880t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:exists__t436t(__t1903t__unsafe_ptr,&__t1904t____t511t__);
  if(__t1904t____t511t__){
  __t1903t__unsafe_ptr=__t1903t__unsafe_ptr;
  free__t502t(&__t1903t__unsafe_ptr);
  }
  closedir__t1741t(__t1898t__unsafe_ptr);
  exists__t436t(__t1892t__unsafe_ptr,&__t1893t____t511t__);
  if(__t1893t____t511t__){
  __t1892t__unsafe_ptr=__t1892t__unsafe_ptr;
  free__t502t(&__t1892t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1888t();return 0;}