#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1999t="tmp.txt";
const char* const __t2002t="hello world";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t2004t, uint64_t* __t2005t, uint16_t* __t2006t, uint16_t* __t2007t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2004t=unsafe_ptr;
  *__t2005t=unsafe_size;
  *__t2006t=unsafe_offset;
  *__t2007t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t2008t) {
  *__t2008t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2009t) {
  int value=0;
  *__t2009t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2010t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2010t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2011t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2011t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t2012t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2012t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2013t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2013t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t2014t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2014t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t2015t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2015t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t2016t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2016t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2017t) {
  *__t2017t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t2018t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t2018t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2019t) {
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
  *__t2019t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2020t, uint64_t* __t2021t, uint64_t* __t2022t, char* __t2023t) {
  goto __t_return;
  __t_return:
  *__t2020t=unsafe_ptr;
  *__t2021t=dat__pos;
  *__t2022t=dat__length;
  *__t2023t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2024t, uint64_t* __t2025t, uint64_t* __t2026t, char* __t2027t) {
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
  *__t2024t=__t640t__unsafe_ptr;
  *__t2025t=__t640t__dat__pos;
  *__t2026t=__t640t__dat__length;
  *__t2027t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2028t, uint64_t* __t2029t, uint64_t* __t2030t, char* __t2031t) {
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
  *__t2028t=__t670t__unsafe_ptr;
  *__t2029t=__t670t__dat__pos;
  *__t2030t=__t670t__dat__length;
  *__t2031t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t2032t, uint64_t* __t2033t, uint64_t* __t2034t, char* __t2035t) {
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
  *__t2032t=__t678t__unsafe_ptr;
  *__t2033t=__t678t__dat__pos;
  *__t2034t=__t678t__dat__length;
  *__t2035t=__t678t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t717t(const char* cstr, const char** __t2036t, char** __t2037t, uint64_t* __t2038t, uint64_t* __t2039t, char* __t2040t) {
  char* __t718t__unsafe_ptr=0;
  uint64_t __t718t__dat__pos=0;
  uint64_t __t718t__dat__length=0;
  char __t718t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(cstr,&__t718t__unsafe_ptr,&__t718t__dat__pos,&__t718t__dat__length,&__t718t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t718t__unsafe_ptr;
  str__dat__pos=__t718t__dat__pos;
  str__dat__length=__t718t__dat__length;
  str__dat__first=__t718t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
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

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t2042t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2042t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2043t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2043t=z;
}

static inline __attribute__((always_inline)) int write__t1568t(const char* _path, char** __t2044t) {
  const char* __t1569t__cstr=0;
  char* __t1569t__str__unsafe_ptr=0;
  uint64_t __t1569t__str__dat__pos=0;
  uint64_t __t1569t__str__dat__length=0;
  char __t1569t__str__dat__first=0;
  const char* __t1570t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1571t__=0;
  char __t1572t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t717t(_path,&__t1569t__cstr,&__t1569t__str__unsafe_ptr,&__t1569t__str__dat__pos,&__t1569t__str__dat__length,&__t1569t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t720t(__t1569t__cstr,__t1569t__str__unsafe_ptr,__t1569t__str__dat__pos,__t1569t__str__dat__length,__t1569t__str__dat__first,&__t1570t__);
  path=__t1570t__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t439t(unsafe_ptr,&__t1571t__);
  not__t27t(__t1571t__,&__t1572t__);
  if(__t1572t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t2044t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1850t(char** __t2045t, const char* text) {
  char* f__unsafe_ptr=*__t2045t;
  char __t1851t__=0;
  char __t1852t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t439t(f__unsafe_ptr,&__t1851t__);
  not__t27t(__t1851t__,&__t1852t__);
  if(__t1852t__){
  __t_errcode=47;
  goto __t_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __t_failure:*__t2045t=f__unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1998t() {
  char* __t2000t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=write__t1568t(__t1999t,&__t2000t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2000t__unsafe_ptr;
  __t_errcode=print__t1850t(&f__unsafe_ptr,__t2002t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:if(__t2000t__unsafe_ptr){
  fclose((FILE*)__t2000t__unsafe_ptr);
  __t2000t__unsafe_ptr=0;
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1998t();return 0;}