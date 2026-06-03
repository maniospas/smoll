#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2124t="./std";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void closedir__t1991t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2135t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2135t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2136t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2136t=z;
}

static inline __attribute__((always_inline)) int read__t1992t(const char* path, char** __t2137t) {
  char* unsafe_ptr=0;
  char __t1994t__=0;
  char __t1995t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t447t(unsafe_ptr,&__t1994t__);
  not__t28t(__t1994t__,&__t1995t__);
  if(__t1995t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1991t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2137t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1575t(char** __t2138t, uint64_t* __t2139t, uint16_t* __t2140t, uint16_t* __t2141t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2138t=unsafe_ptr;
  *__t2139t=unsafe_size;
  *__t2140t=unsafe_offset;
  *__t2141t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t2142t) {
  char* allocated=*__t2142t;
  if(allocated){
  free(allocated);
  }
  *__t2142t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2143t) {
  int value=0;
  *__t2143t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2144t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2144t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2145t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2145t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2146t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2146t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2147t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2147t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2148t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2148t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2149t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2149t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t2150t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2150t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t2151t, uint64_t* __t2152t, uint16_t* __t2153t, uint16_t* __t2154t, uint64_t size, char** __t2155t, uint64_t* __t2156t, uint16_t* __t2157t, uint16_t* __t2158t) {
  char* buffer__unsafe_ptr=*__t2151t;
  uint64_t buffer__unsafe_size=*__t2152t;
  uint16_t buffer__unsafe_offset=*__t2153t;
  uint16_t buffer__unsafe_align=*__t2154t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2151t=buffer__unsafe_ptr;
  *__t2152t=buffer__unsafe_size;
  *__t2153t=buffer__unsafe_offset;
  *__t2154t=buffer__unsafe_align;
  *__t2155t=buffer__unsafe_ptr;
  *__t2156t=buffer__unsafe_size;
  *__t2157t=buffer__unsafe_offset;
  *__t2158t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t2003t(char** __t2159t, const char** __t2160t) {
  char* f__unsafe_ptr=*__t2159t;
  char __t2004t__=0;
  char __t2005t__=0;
  char* de=0;
  char __t2006t__=0;
  char __t2007t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(f__unsafe_ptr,&__t2004t__);
  not__t28t(__t2004t__,&__t2005t__);
  if(__t2005t__){
  __t_errcode=51;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t447t(de,&__t2006t__);
  not__t28t(__t2006t__,&__t2007t__);
  if(__t2007t__){
  __t_errcode=52;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2159t=f__unsafe_ptr;
  *__t2160t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t2161t, uint64_t* __t2162t, uint16_t* __t2163t, uint16_t* __t2164t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2161t=unsafe_ptr;
  *__t2162t=unsafe_size;
  *__t2163t=unsafe_offset;
  *__t2164t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2165t) {
  *__t2165t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2166t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2166t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2167t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2167t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2168t) {
  *__t2168t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2169t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2169t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2170t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2170t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2171t, uint64_t* __t2172t, uint64_t* __t2173t, char* __t2174t) {
  goto __t_return;
  __t_return:
  *__t2171t=unsafe_ptr;
  *__t2172t=dat__pos;
  *__t2173t=dat__length;
  *__t2174t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2175t, uint64_t* __t2176t, uint64_t* __t2177t, char* __t2178t) {
  char* unsafe_ptr=0;
  uint64_t __t689t__=0;
  uint64_t __t690t=0;
  char __t691t__=0;
  uint64_t __t692t__=0;
  uint64_t __t693t=0;
  char __t694t__=0;
  char* __t695t__unsafe_ptr=0;
  uint64_t __t695t__dat__pos=0;
  uint64_t __t695t__dat__length=0;
  char __t695t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t689t__);
  __t690t=1;
  neq__t144t(__t689t__,__t690t,&__t691t__);
  if(__t691t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t692t__);
  __t693t=0;
  neq__t144t(__t692t__,__t693t,&__t694t__);
  if(__t694t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t684t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t695t__unsafe_ptr,&__t695t__dat__pos,&__t695t__dat__length,&__t695t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2175t=__t695t__unsafe_ptr;
  *__t2176t=__t695t__dat__pos;
  *__t2177t=__t695t__dat__length;
  *__t2178t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2179t, uint64_t* __t2180t, uint64_t* __t2181t, char* __t2182t) {
  uint64_t __t724t=0;
  char __t725t__=0;
  char* __t726t__=0;
  char __t727t__value=0;
  char first=0;
  char* __t728t__unsafe_ptr=0;
  uint64_t __t728t__dat__pos=0;
  uint64_t __t728t__dat__length=0;
  char __t728t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t724t=0;
  neq__t144t(length,__t724t,&__t725t__);
  if(__t725t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t726t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t726t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t727t__value,__t726t__,1);
  first=__t727t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t728t__unsafe_ptr,&__t728t__dat__pos,&__t728t__dat__length,&__t728t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2179t=__t728t__unsafe_ptr;
  *__t2180t=__t728t__dat__pos;
  *__t2181t=__t728t__dat__length;
  *__t2182t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t2183t, uint64_t* __t2184t, uint64_t* __t2185t, char* __t2186t) {
  char* __t747t__unsafe_ptr=0;
  uint64_t __t747t__unsafe_size=0;
  uint16_t __t747t__unsafe_offset=0;
  uint16_t __t747t__unsafe_align=0;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__unsafe_size=0;
  uint16_t __t748t__unsafe_offset=0;
  uint16_t __t748t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t749t__=0;
  uint64_t length=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t __t752t=0;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t676t(&__t747t__unsafe_ptr,&__t747t__unsafe_size,&__t747t__unsafe_offset,&__t747t__unsafe_align);
  __t748t__unsafe_ptr=__t747t__unsafe_ptr;
  __t748t__unsafe_size=__t747t__unsafe_size;
  __t748t__unsafe_offset=__t747t__unsafe_offset;
  __t748t__unsafe_align=__t747t__unsafe_align;
  buf__unsafe_ptr=__t748t__unsafe_ptr;
  buf__unsafe_size=__t748t__unsafe_size;
  buf__unsafe_offset=__t748t__unsafe_offset;
  buf__unsafe_align=__t748t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t749t__);
  buf__unsafe_ptr=__t749t__;
  if(c){
  length=strlen(c);
  }
  __t750t=1;
  add__t175t(length,__t750t,&__t751t__);
  buf__unsafe_size=__t751t__;
  __t752t=0;
  __t_errcode=str__t723t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t752t,length,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2183t=__t754t__unsafe_ptr;
  *__t2184t=__t754t__dat__pos;
  *__t2185t=__t754t__dat__length;
  *__t2186t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int entry__t2008t(char** __t2187t, char** __t2188t, uint64_t* __t2189t, uint64_t* __t2190t, char* __t2191t) {
  char* f__unsafe_ptr=*__t2187t;
  const char* __t2009t__=0;
  char* __t2010t__unsafe_ptr=0;
  uint64_t __t2010t__dat__pos=0;
  uint64_t __t2010t__dat__length=0;
  char __t2010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t2003t(&f__unsafe_ptr,&__t2009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t746t(__t2009t__,&__t2010t__unsafe_ptr,&__t2010t__dat__pos,&__t2010t__dat__length,&__t2010t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2187t=f__unsafe_ptr;
  *__t2188t=__t2010t__unsafe_ptr;
  *__t2189t=__t2010t__dat__pos;
  *__t2190t=__t2010t__dat__length;
  *__t2191t=__t2010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2122t() {
  char* __t2125t__unsafe_ptr=0;
  char* __t2127t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t2128t__unsafe_ptr=0;
  uint64_t __t2128t__unsafe_size=0;
  uint16_t __t2128t__unsafe_offset=0;
  uint16_t __t2128t__unsafe_align=0;
  uint64_t __t2129t=0;
  char* __t2130t__unsafe_ptr=0;
  uint64_t __t2130t__unsafe_size=0;
  uint16_t __t2130t__unsafe_offset=0;
  uint16_t __t2130t__unsafe_align=0;
  char __t2131t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t2132t=0;
  char* __t2133t__unsafe_ptr=0;
  uint64_t __t2133t__dat__pos=0;
  uint64_t __t2133t__dat__length=0;
  char __t2133t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=read__t1992t(__t2124t,&__t2125t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2127t__unsafe_ptr=__t2125t__unsafe_ptr;
  dir__unsafe_ptr=__t2127t__unsafe_ptr;
  char____t_buffer____buffer__t1575t(&__t2128t__unsafe_ptr,&__t2128t__unsafe_size,&__t2128t__unsafe_offset,&__t2128t__unsafe_align);
  __t2129t=128;
  __t_errcode=alloc__t532t(&__t2128t__unsafe_ptr,&__t2128t__unsafe_size,&__t2128t__unsafe_offset,&__t2128t__unsafe_align,__t2129t,&__t2130t__unsafe_ptr,&__t2130t__unsafe_size,&__t2130t__unsafe_offset,&__t2130t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2130t__unsafe_ptr;
  buf__unsafe_size=__t2130t__unsafe_size;
  buf__unsafe_offset=__t2130t__unsafe_offset;
  buf__unsafe_align=__t2130t__unsafe_align;
  while(1){
  __t_complain=entry__t2008t(&dir__unsafe_ptr,&__t2133t__unsafe_ptr,&__t2133t__dat__pos,&__t2133t__dat__length,&__t2133t__dat__first);
  __t2132t=__t_complain;
  entry__unsafe_ptr=__t2133t__unsafe_ptr;
  entry__dat__pos=__t2133t__dat__pos;
  entry__dat__length=__t2133t__dat__length;
  entry__dat__first=__t2133t__dat__first;
  __t2132t=__t2132t==0;
  if(!__t2132t){
  break;
  }
  print__t889t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t2130t__unsafe_ptr,&__t2131t____t534t__);
  if(__t2131t____t534t__){
  free__t503t(&__t2130t__unsafe_ptr);
  }
  closedir__t1991t(__t2125t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2122t();return 0;}