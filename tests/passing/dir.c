#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1843t="./std";
const char* const __t370t="\n";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void closedir__t1712t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1854t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1854t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1855t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1855t=z;
}

static inline __attribute__((always_inline)) int read__t1713t(const char* path, char** __t1856t) {
  char* unsafe_ptr=0;
  char __t1715t__=0;
  char __t1716t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t435t(unsafe_ptr,&__t1715t__);
  not__t26t(__t1715t__,&__t1716t__);
  if(__t1716t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1712t(unsafe_ptr);
  __t_return:
  *__t1856t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1332t(char** __t1857t, uint64_t* __t1858t, uint16_t* __t1859t, uint16_t* __t1860t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1857t=unsafe_ptr;
  *__t1858t=unsafe_size;
  *__t1859t=unsafe_offset;
  *__t1860t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1861t) {
  int value=0;
  *__t1861t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1862t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1862t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1863t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1863t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1864t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1864t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1865t) {
  char* allocated=*__t1865t;
  if(allocated){
  free(allocated);
  }
  *__t1865t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1866t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1866t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1867t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1867t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1868t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1868t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1869t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1869t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1870t, uint64_t* __t1871t, uint16_t* __t1872t, uint16_t* __t1873t, uint64_t size, char** __t1874t, uint64_t* __t1875t, uint16_t* __t1876t, uint16_t* __t1877t) {
  char* buffer__unsafe_ptr=*__t1870t;
  uint64_t buffer__unsafe_size=*__t1871t;
  uint16_t buffer__unsafe_offset=*__t1872t;
  uint16_t buffer__unsafe_align=*__t1873t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t1870t=buffer__unsafe_ptr;
  *__t1871t=buffer__unsafe_size;
  *__t1872t=buffer__unsafe_offset;
  *__t1873t=buffer__unsafe_align;
  *__t1874t=__t521t__unsafe_ptr;
  *__t1875t=__t521t__unsafe_size;
  *__t1876t=__t521t__unsafe_offset;
  *__t1877t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1723t(char** __t1878t, const char** __t1879t) {
  char* f__unsafe_ptr=*__t1878t;
  char __t1724t__=0;
  char __t1725t__=0;
  char* de=0;
  char __t1726t__=0;
  char __t1727t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t435t(f__unsafe_ptr,&__t1724t__);
  not__t26t(__t1724t__,&__t1725t__);
  if(__t1725t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t435t(de,&__t1726t__);
  not__t26t(__t1726t__,&__t1727t__);
  if(__t1727t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1878t=f__unsafe_ptr;
  *__t1879t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1880t, uint64_t* __t1881t, uint16_t* __t1882t, uint16_t* __t1883t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1880t=unsafe_ptr;
  *__t1881t=unsafe_size;
  *__t1882t=unsafe_offset;
  *__t1883t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1884t) {
  *__t1884t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1885t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1886t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1887t) {
  *__t1887t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1888t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1888t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1889t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t599t__);
  mul__t194t(i,__t599t__,&__t600t__);
  nat__t505t(buffer__unsafe_offset,&__t601t__);
  add__t170t(__t600t__,__t601t__,&__t602t__);
  add__t503t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1889t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1890t, uint64_t* __t1891t, uint64_t* __t1892t, char* __t1893t) {
  goto __t_return;
  __t_return:
  *__t1890t=unsafe_ptr;
  *__t1891t=dat__pos;
  *__t1892t=dat__length;
  *__t1893t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1894t, uint64_t* __t1895t, uint64_t* __t1896t, char* __t1897t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t505t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t142t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t142t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1894t=__t643t__unsafe_ptr;
  *__t1895t=__t643t__dat__pos;
  *__t1896t=__t643t__dat__length;
  *__t1897t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1898t, uint64_t* __t1899t, uint64_t* __t1900t, char* __t1901t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t142t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1898t=__t673t__unsafe_ptr;
  *__t1899t=__t673t__dat__pos;
  *__t1900t=__t673t__dat__length;
  *__t1901t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1902t, uint64_t* __t1903t, uint64_t* __t1904t, char* __t1905t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t170t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1902t=__t681t__unsafe_ptr;
  *__t1903t=__t681t__dat__pos;
  *__t1904t=__t681t__dat__length;
  *__t1905t=__t681t__dat__first;
  
  return __t_errcode;
}

int entry__t1728t(char** __t1906t, char** __t1907t, uint64_t* __t1908t, uint64_t* __t1909t, char* __t1910t) {
  char* f__unsafe_ptr=*__t1906t;
  const char* __t1729t__=0;
  char* __t1730t__unsafe_ptr=0;
  uint64_t __t1730t__dat__pos=0;
  uint64_t __t1730t__dat__length=0;
  char __t1730t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1723t(&f__unsafe_ptr,&__t1729t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t674t(__t1729t__,&__t1730t__unsafe_ptr,&__t1730t__dat__pos,&__t1730t__dat__length,&__t1730t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1906t=f__unsafe_ptr;
  *__t1907t=__t1730t__unsafe_ptr;
  *__t1908t=__t1730t__dat__pos;
  *__t1909t=__t1730t__dat__length;
  *__t1910t=__t1730t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1842t() {
  char* __t1844t__unsafe_ptr=0;
  char* __t1846t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t1847t__unsafe_ptr=0;
  uint64_t __t1847t__unsafe_size=0;
  uint16_t __t1847t__unsafe_offset=0;
  uint16_t __t1847t__unsafe_align=0;
  uint64_t __t1848t=0;
  char* __t1849t__unsafe_ptr=0;
  uint64_t __t1849t__unsafe_size=0;
  uint16_t __t1849t__unsafe_offset=0;
  uint16_t __t1849t__unsafe_align=0;
  uint64_t __t1850t____t510t=0;
  char __t1850t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t1851t=0;
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__dat__pos=0;
  uint64_t __t1852t__dat__length=0;
  char __t1852t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1713t(__t1843t,&__t1844t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1846t__unsafe_ptr=__t1844t__unsafe_ptr;
  dir__unsafe_ptr=__t1846t__unsafe_ptr;
  char____t_buffer____buffer__t1332t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align);
  __t1848t=128;
  __t_errcode=alloc__t508t(&__t1847t__unsafe_ptr,&__t1847t__unsafe_size,&__t1847t__unsafe_offset,&__t1847t__unsafe_align,__t1848t,&__t1849t__unsafe_ptr,&__t1849t__unsafe_size,&__t1849t__unsafe_offset,&__t1849t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1849t__unsafe_ptr;
  buf__unsafe_size=__t1849t__unsafe_size;
  buf__unsafe_offset=__t1849t__unsafe_offset;
  buf__unsafe_align=__t1849t__unsafe_align;
  while(1){
  __t_complain=entry__t1728t(&dir__unsafe_ptr,&__t1852t__unsafe_ptr,&__t1852t__dat__pos,&__t1852t__dat__length,&__t1852t__dat__first);
  __t1851t=__t_complain;
  entry__unsafe_ptr=__t1852t__unsafe_ptr;
  entry__dat__pos=__t1852t__dat__pos;
  entry__dat__length=__t1852t__dat__length;
  entry__dat__first=__t1852t__dat__first;
  __t1851t=__t1851t==0;
  if(!__t1851t){
  break;
  }
  print__t784t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:__t1850t____t510t=0;
  neq__t142t(__t1849t__unsafe_size,__t1850t____t510t,&__t1850t____t511t__);
  if(__t1850t____t511t__){
  __t1849t__unsafe_size=0;
  __t1849t__unsafe_size=__t1849t__unsafe_size;
  __t1849t__unsafe_ptr=__t1849t__unsafe_ptr;
  free__t501t(&__t1849t__unsafe_ptr);
  }
  closedir__t1712t(__t1844t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1842t();return 0;}