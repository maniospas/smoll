#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2127t="tmp.txt";
const char* const __t2130t="hello world";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t2132t, uint64_t* __t2133t, uint16_t* __t2134t, uint16_t* __t2135t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2132t=unsafe_ptr;
  *__t2133t=unsafe_size;
  *__t2134t=unsafe_offset;
  *__t2135t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2136t) {
  *__t2136t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2137t) {
  int value=0;
  *__t2137t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2138t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2138t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2139t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2139t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2140t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2140t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2141t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2141t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2142t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2142t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t2143t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2143t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2144t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2144t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2145t) {
  *__t2145t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t2146t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t2146t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2147t) {
  char __t641t__=0;
  uint64_t __t642t__=0;
  uint64_t __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  char* __t646t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t641t__);
  if(__t641t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t642t__);
  mul__t199t(i,__t642t__,&__t643t__);
  nat__t507t(buffer__unsafe_offset,&__t644t__);
  add__t175t(__t643t__,__t644t__,&__t645t__);
  add__t505t(buffer__unsafe_ptr,__t645t__,&__t646t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2147t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2148t, uint64_t* __t2149t, uint64_t* __t2150t, char* __t2151t) {
  goto __t_return;
  __t_return:
  *__t2148t=unsafe_ptr;
  *__t2149t=dat__pos;
  *__t2150t=dat__length;
  *__t2151t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2152t, uint64_t* __t2153t, uint64_t* __t2154t, char* __t2155t) {
  char* unsafe_ptr=0;
  uint64_t __t693t__=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  uint64_t __t696t__=0;
  uint64_t __t697t=0;
  char __t698t__=0;
  char* __t699t__unsafe_ptr=0;
  uint64_t __t699t__dat__pos=0;
  uint64_t __t699t__dat__length=0;
  char __t699t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t693t__);
  __t694t=1;
  neq__t144t(__t693t__,__t694t,&__t695t__);
  if(__t695t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t696t__);
  __t697t=0;
  neq__t144t(__t696t__,__t697t,&__t698t__);
  if(__t698t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t688t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t699t__unsafe_ptr,&__t699t__dat__pos,&__t699t__dat__length,&__t699t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2152t=__t699t__unsafe_ptr;
  *__t2153t=__t699t__dat__pos;
  *__t2154t=__t699t__dat__length;
  *__t2155t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2156t, uint64_t* __t2157t, uint64_t* __t2158t, char* __t2159t) {
  uint64_t __t728t=0;
  char __t729t__=0;
  char* __t730t__=0;
  char __t731t__value=0;
  char first=0;
  char* __t732t__unsafe_ptr=0;
  uint64_t __t732t__dat__pos=0;
  uint64_t __t732t__dat__length=0;
  char __t732t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t728t=0;
  neq__t144t(length,__t728t,&__t729t__);
  if(__t729t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t731t__value,__t730t__,1);
  first=__t731t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t732t__unsafe_ptr,&__t732t__dat__pos,&__t732t__dat__length,&__t732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2156t=__t732t__unsafe_ptr;
  *__t2157t=__t732t__dat__pos;
  *__t2158t=__t732t__dat__length;
  *__t2159t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t2160t, uint64_t* __t2161t, uint64_t* __t2162t, char* __t2163t) {
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__unsafe_size=0;
  uint16_t __t751t__unsafe_offset=0;
  uint16_t __t751t__unsafe_align=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__unsafe_size=0;
  uint16_t __t752t__unsafe_offset=0;
  uint16_t __t752t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t753t__=0;
  uint64_t length=0;
  uint64_t __t754t=0;
  uint64_t __t755t__=0;
  uint64_t __t756t=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t751t__unsafe_ptr,&__t751t__unsafe_size,&__t751t__unsafe_offset,&__t751t__unsafe_align);
  __t752t__unsafe_ptr=__t751t__unsafe_ptr;
  __t752t__unsafe_size=__t751t__unsafe_size;
  __t752t__unsafe_offset=__t751t__unsafe_offset;
  __t752t__unsafe_align=__t751t__unsafe_align;
  buf__unsafe_ptr=__t752t__unsafe_ptr;
  buf__unsafe_size=__t752t__unsafe_size;
  buf__unsafe_offset=__t752t__unsafe_offset;
  buf__unsafe_align=__t752t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t753t__);
  buf__unsafe_ptr=__t753t__;
  if(c){
  length=strlen(c);
  }
  __t754t=1;
  add__t175t(length,__t754t,&__t755t__);
  buf__unsafe_size=__t755t__;
  __t756t=0;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t756t,length,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2160t=__t758t__unsafe_ptr;
  *__t2161t=__t758t__dat__pos;
  *__t2162t=__t758t__dat__length;
  *__t2163t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t798t(const char* cstr, const char** __t2164t, char** __t2165t, uint64_t* __t2166t, uint64_t* __t2167t, char* __t2168t) {
  char* __t799t__unsafe_ptr=0;
  uint64_t __t799t__dat__pos=0;
  uint64_t __t799t__dat__length=0;
  char __t799t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(cstr,&__t799t__unsafe_ptr,&__t799t__dat__pos,&__t799t__dat__length,&__t799t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t799t__unsafe_ptr;
  str__dat__pos=__t799t__dat__pos;
  str__dat__length=__t799t__dat__length;
  str__dat__first=__t799t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2164t=cstr;
  *__t2165t=str__unsafe_ptr;
  *__t2166t=str__dat__pos;
  *__t2167t=str__dat__length;
  *__t2168t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t801t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2169t) {
  goto __t_return;
  __t_return:
  *__t2169t=value__cstr;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t2170t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2170t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2171t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2171t=z;
}

static inline __attribute__((always_inline)) int write__t1660t(const char* _path, char** __t2172t) {
  const char* __t1661t__cstr=0;
  char* __t1661t__str__unsafe_ptr=0;
  uint64_t __t1661t__str__dat__pos=0;
  uint64_t __t1661t__str__dat__length=0;
  char __t1661t__str__dat__first=0;
  const char* __t1662t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1663t__=0;
  char __t1664t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t798t(_path,&__t1661t__cstr,&__t1661t__str__unsafe_ptr,&__t1661t__str__dat__pos,&__t1661t__str__dat__length,&__t1661t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t801t(__t1661t__cstr,__t1661t__str__unsafe_ptr,__t1661t__str__dat__pos,__t1661t__str__dat__length,__t1661t__str__dat__first,&__t1662t__);
  path=__t1662t__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t447t(unsafe_ptr,&__t1663t__);
  not__t28t(__t1663t__,&__t1664t__);
  if(__t1664t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2172t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1962t(char** __t2173t, const char* text) {
  char* f__unsafe_ptr=*__t2173t;
  char __t1963t__=0;
  char __t1964t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t447t(f__unsafe_ptr,&__t1963t__);
  not__t28t(__t1963t__,&__t1964t__);
  if(__t1964t__){
  __t_errcode=47;
  goto __t_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __t_failure:
  goto __t_skip_returns;*__t2173t=f__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2126t() {
  char* __t2128t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=write__t1660t(__t2127t,&__t2128t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2128t__unsafe_ptr;
  __t_errcode=print__t1962t(&f__unsafe_ptr,__t2130t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t2128t__unsafe_ptr){
  fclose((FILE*)__t2128t__unsafe_ptr);
  __t2128t__unsafe_ptr=0;
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2126t();return 0;}