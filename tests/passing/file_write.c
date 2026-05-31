#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1853t="tmp.txt";
const char* const __t1856t="hello world";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1858t, uint64_t* __t1859t, uint16_t* __t1860t, uint16_t* __t1861t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1858t=unsafe_ptr;
  *__t1859t=unsafe_size;
  *__t1860t=unsafe_offset;
  *__t1861t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1862t) {
  *__t1862t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1863t) {
  int value=0;
  *__t1863t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1864t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1864t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1865t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1865t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1866t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1866t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1867t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1867t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1868t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1868t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1869t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1869t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1870t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1870t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1871t) {
  *__t1871t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1872t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1872t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1873t) {
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
  *__t1873t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1874t, uint64_t* __t1875t, uint64_t* __t1876t, char* __t1877t) {
  goto __t_return;
  __t_return:
  *__t1874t=unsafe_ptr;
  *__t1875t=dat__pos;
  *__t1876t=dat__length;
  *__t1877t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1878t, uint64_t* __t1879t, uint64_t* __t1880t, char* __t1881t) {
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
  *__t1878t=__t637t__unsafe_ptr;
  *__t1879t=__t637t__dat__pos;
  *__t1880t=__t637t__dat__length;
  *__t1881t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1882t, uint64_t* __t1883t, uint64_t* __t1884t, char* __t1885t) {
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
  *__t1882t=__t667t__unsafe_ptr;
  *__t1883t=__t667t__dat__pos;
  *__t1884t=__t667t__dat__length;
  *__t1885t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1886t, uint64_t* __t1887t, uint64_t* __t1888t, char* __t1889t) {
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
  *__t1886t=__t675t__unsafe_ptr;
  *__t1887t=__t675t__dat__pos;
  *__t1888t=__t675t__dat__length;
  *__t1889t=__t675t__dat__first;
  
  return __t_errcode;
}

int unsafe_temp__t714t(const char* cstr, const char** __t1890t, char** __t1891t, uint64_t* __t1892t, uint64_t* __t1893t, char* __t1894t) {
  char* __t715t__unsafe_ptr=0;
  uint64_t __t715t__dat__pos=0;
  uint64_t __t715t__dat__length=0;
  char __t715t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(cstr,&__t715t__unsafe_ptr,&__t715t__dat__pos,&__t715t__dat__length,&__t715t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t715t__unsafe_ptr;
  str__dat__pos=__t715t__dat__pos;
  str__dat__length=__t715t__dat__length;
  str__dat__first=__t715t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1890t=cstr;
  *__t1891t=str__unsafe_ptr;
  *__t1892t=str__dat__pos;
  *__t1893t=str__dat__length;
  *__t1894t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t717t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t1895t) {
  goto __t_return;
  __t_return:
  *__t1895t=value__cstr;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1896t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1896t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1897t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1897t=z;
}

static inline __attribute__((always_inline)) int write__t1422t(const char* _path, char** __t1898t) {
  const char* __t1423t__cstr=0;
  char* __t1423t__str__unsafe_ptr=0;
  uint64_t __t1423t__str__dat__pos=0;
  uint64_t __t1423t__str__dat__length=0;
  char __t1423t__str__dat__first=0;
  const char* __t1424t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1425t__=0;
  char __t1426t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t714t(_path,&__t1423t__cstr,&__t1423t__str__unsafe_ptr,&__t1423t__str__dat__pos,&__t1423t__str__dat__length,&__t1423t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t717t(__t1423t__cstr,__t1423t__str__unsafe_ptr,__t1423t__str__dat__pos,__t1423t__str__dat__length,__t1423t__str__dat__first,&__t1424t__);
  path=__t1424t__;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t436t(unsafe_ptr,&__t1425t__);
  not__t27t(__t1425t__,&__t1426t__);
  if(__t1426t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t1898t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1704t(char** __t1899t, const char* text) {
  char* f__unsafe_ptr=*__t1899t;
  char __t1705t__=0;
  char __t1706t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t436t(f__unsafe_ptr,&__t1705t__);
  not__t27t(__t1705t__,&__t1706t__);
  if(__t1706t__){
  __t_errcode=48;
  goto __t_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __t_failure:*__t1899t=f__unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1852t() {
  char* __t1854t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=write__t1422t(__t1853t,&__t1854t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t1854t__unsafe_ptr;
  __t_errcode=print__t1704t(&f__unsafe_ptr,__t1856t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:if(__t1854t__unsafe_ptr){
  fclose((FILE*)__t1854t__unsafe_ptr);
  __t1854t__unsafe_ptr=0;
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1852t();return 0;}