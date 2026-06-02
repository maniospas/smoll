#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2013t="./std";
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void closedir__t1896t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t2024t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2024t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2025t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2025t=z;
}

static inline __attribute__((always_inline)) int read__t1897t(const char* path, char** __t2026t) {
  char* unsafe_ptr=0;
  char __t1899t__=0;
  char __t1900t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t442t(unsafe_ptr,&__t1899t__);
  not__t27t(__t1899t__,&__t1900t__);
  if(__t1900t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1896t(unsafe_ptr);
  __t_return:
  *__t2026t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1504t(char** __t2027t, uint64_t* __t2028t, uint16_t* __t2029t, uint16_t* __t2030t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2027t=unsafe_ptr;
  *__t2028t=unsafe_size;
  *__t2029t=unsafe_offset;
  *__t2030t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t2031t) {
  char* allocated=*__t2031t;
  if(allocated){
  free(allocated);
  }
  *__t2031t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2032t) {
  int value=0;
  *__t2032t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2033t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2033t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2034t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2034t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2035t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2035t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2036t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2036t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t2037t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2037t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2038t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2038t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t2039t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2039t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t2040t, uint64_t* __t2041t, uint16_t* __t2042t, uint16_t* __t2043t, uint64_t size, char** __t2044t, uint64_t* __t2045t, uint16_t* __t2046t, uint16_t* __t2047t) {
  char* buffer__unsafe_ptr=*__t2040t;
  uint64_t buffer__unsafe_size=*__t2041t;
  uint16_t buffer__unsafe_offset=*__t2042t;
  uint16_t buffer__unsafe_align=*__t2043t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2040t=buffer__unsafe_ptr;
  *__t2041t=buffer__unsafe_size;
  *__t2042t=buffer__unsafe_offset;
  *__t2043t=buffer__unsafe_align;
  *__t2044t=buffer__unsafe_ptr;
  *__t2045t=buffer__unsafe_size;
  *__t2046t=buffer__unsafe_offset;
  *__t2047t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1908t(char** __t2048t, const char** __t2049t) {
  char* f__unsafe_ptr=*__t2048t;
  char __t1909t__=0;
  char __t1910t__=0;
  char* de=0;
  char __t1911t__=0;
  char __t1912t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t442t(f__unsafe_ptr,&__t1909t__);
  not__t27t(__t1909t__,&__t1910t__);
  if(__t1910t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t442t(de,&__t1911t__);
  not__t27t(__t1911t__,&__t1912t__);
  if(__t1912t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2048t=f__unsafe_ptr;
  *__t2049t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t2050t, uint64_t* __t2051t, uint16_t* __t2052t, uint16_t* __t2053t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2050t=unsafe_ptr;
  *__t2051t=unsafe_size;
  *__t2052t=unsafe_offset;
  *__t2053t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2054t) {
  *__t2054t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2055t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2055t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2056t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2057t) {
  *__t2057t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t2058t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t2058t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2059t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2059t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2060t, uint64_t* __t2061t, uint64_t* __t2062t, char* __t2063t) {
  goto __t_return;
  __t_return:
  *__t2060t=unsafe_ptr;
  *__t2061t=dat__pos;
  *__t2062t=dat__length;
  *__t2063t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2064t, uint64_t* __t2065t, uint64_t* __t2066t, char* __t2067t) {
  char* unsafe_ptr=0;
  uint64_t __t646t__=0;
  uint64_t __t647t=0;
  char __t648t__=0;
  uint64_t __t649t__=0;
  uint64_t __t650t=0;
  char __t651t__=0;
  char* __t652t__unsafe_ptr=0;
  uint64_t __t652t__dat__pos=0;
  uint64_t __t652t__dat__length=0;
  char __t652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=CHARS__unsafe_ptr;
  nat__t512t(CHARS__unsafe_align,&__t646t__);
  __t647t=1;
  neq__t143t(__t646t__,__t647t,&__t648t__);
  if(__t648t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(CHARS__unsafe_offset,&__t649t__);
  __t650t=0;
  neq__t143t(__t649t__,__t650t,&__t651t__);
  if(__t651t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t641t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2064t=__t652t__unsafe_ptr;
  *__t2065t=__t652t__dat__pos;
  *__t2066t=__t652t__dat__length;
  *__t2067t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2068t, uint64_t* __t2069t, uint64_t* __t2070t, char* __t2071t) {
  uint64_t __t678t=0;
  char __t679t__=0;
  char* __t680t__=0;
  char __t681t__value=0;
  char first=0;
  char* __t682t__unsafe_ptr=0;
  uint64_t __t682t__dat__pos=0;
  uint64_t __t682t__dat__length=0;
  char __t682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t678t=0;
  neq__t143t(length,__t678t,&__t679t__);
  if(__t679t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t680t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t681t__value,__t680t__,1);
  first=__t681t__value;
  }
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t682t__unsafe_ptr,&__t682t__dat__pos,&__t682t__dat__length,&__t682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2068t=__t682t__unsafe_ptr;
  *__t2069t=__t682t__dat__pos;
  *__t2070t=__t682t__dat__length;
  *__t2071t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t2072t, uint64_t* __t2073t, uint64_t* __t2074t, char* __t2075t) {
  char* __t684t__unsafe_ptr=0;
  uint64_t __t684t__unsafe_size=0;
  uint16_t __t684t__unsafe_offset=0;
  uint16_t __t684t__unsafe_align=0;
  char* __t685t__unsafe_ptr=0;
  uint64_t __t685t__unsafe_size=0;
  uint16_t __t685t__unsafe_offset=0;
  uint16_t __t685t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t686t__=0;
  uint64_t length=0;
  uint64_t __t687t=0;
  uint64_t __t688t__=0;
  uint64_t __t689t=0;
  char* __t690t__unsafe_ptr=0;
  uint64_t __t690t__dat__pos=0;
  uint64_t __t690t__dat__length=0;
  char __t690t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t684t__unsafe_ptr,&__t684t__unsafe_size,&__t684t__unsafe_offset,&__t684t__unsafe_align);
  __t685t__unsafe_ptr=__t684t__unsafe_ptr;
  __t685t__unsafe_size=__t684t__unsafe_size;
  __t685t__unsafe_offset=__t684t__unsafe_offset;
  __t685t__unsafe_align=__t684t__unsafe_align;
  buf__unsafe_ptr=__t685t__unsafe_ptr;
  buf__unsafe_size=__t685t__unsafe_size;
  buf__unsafe_offset=__t685t__unsafe_offset;
  buf__unsafe_align=__t685t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t686t__);
  buf__unsafe_ptr=__t686t__;
  if(c){
  length=strlen(c);
  }
  __t687t=1;
  add__t174t(length,__t687t,&__t688t__);
  buf__unsafe_size=__t688t__;
  __t689t=0;
  __t_errcode=str__t677t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t689t,length,&__t690t__unsafe_ptr,&__t690t__dat__pos,&__t690t__dat__length,&__t690t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2072t=__t690t__unsafe_ptr;
  *__t2073t=__t690t__dat__pos;
  *__t2074t=__t690t__dat__length;
  *__t2075t=__t690t__dat__first;
  
  return __t_errcode;
}

int entry__t1913t(char** __t2076t, char** __t2077t, uint64_t* __t2078t, uint64_t* __t2079t, char* __t2080t) {
  char* f__unsafe_ptr=*__t2076t;
  const char* __t1914t__=0;
  char* __t1915t__unsafe_ptr=0;
  uint64_t __t1915t__dat__pos=0;
  uint64_t __t1915t__dat__length=0;
  char __t1915t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1908t(&f__unsafe_ptr,&__t1914t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t683t(__t1914t__,&__t1915t__unsafe_ptr,&__t1915t__dat__pos,&__t1915t__dat__length,&__t1915t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2076t=f__unsafe_ptr;
  *__t2077t=__t1915t__unsafe_ptr;
  *__t2078t=__t1915t__dat__pos;
  *__t2079t=__t1915t__dat__length;
  *__t2080t=__t1915t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2011t() {
  char* __t2014t__unsafe_ptr=0;
  char* __t2016t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__unsafe_size=0;
  uint16_t __t2017t__unsafe_offset=0;
  uint16_t __t2017t__unsafe_align=0;
  uint64_t __t2018t=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__unsafe_size=0;
  uint16_t __t2019t__unsafe_offset=0;
  uint16_t __t2019t__unsafe_align=0;
  char __t2020t____t517t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t2021t=0;
  char* __t2022t__unsafe_ptr=0;
  uint64_t __t2022t__dat__pos=0;
  uint64_t __t2022t__dat__length=0;
  char __t2022t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=read__t1897t(__t2013t,&__t2014t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2016t__unsafe_ptr=__t2014t__unsafe_ptr;
  dir__unsafe_ptr=__t2016t__unsafe_ptr;
  char____t_buffer____buffer__t1504t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align);
  __t2018t=128;
  __t_errcode=alloc__t515t(&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align,__t2018t,&__t2019t__unsafe_ptr,&__t2019t__unsafe_size,&__t2019t__unsafe_offset,&__t2019t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2019t__unsafe_ptr;
  buf__unsafe_size=__t2019t__unsafe_size;
  buf__unsafe_offset=__t2019t__unsafe_offset;
  buf__unsafe_align=__t2019t__unsafe_align;
  while(1){
  __t_complain=entry__t1913t(&dir__unsafe_ptr,&__t2022t__unsafe_ptr,&__t2022t__dat__pos,&__t2022t__dat__length,&__t2022t__dat__first);
  __t2021t=__t_complain;
  entry__unsafe_ptr=__t2022t__unsafe_ptr;
  entry__dat__pos=__t2022t__dat__pos;
  entry__dat__length=__t2022t__dat__length;
  entry__dat__first=__t2022t__dat__first;
  __t2021t=__t2021t==0;
  if(!__t2021t){
  break;
  }
  print__t791t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:exists__t442t(__t2019t__unsafe_ptr,&__t2020t____t517t__);
  if(__t2020t____t517t__){
  free__t508t(&__t2019t__unsafe_ptr);
  }
  closedir__t1896t(__t2014t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}