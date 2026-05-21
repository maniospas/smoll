#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1849t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1332t(char** __t1853t, uint64_t* __t1854t, uint16_t* __t1855t, uint16_t* __t1856t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1853t=unsafe_ptr;
  *__t1854t=unsafe_size;
  *__t1855t=unsafe_offset;
  *__t1856t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1857t) {
  int value=0;
  *__t1857t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1858t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1858t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1859t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1859t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1860t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1860t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1861t) {
  char* allocated=*__t1861t;
  if(allocated){
  free(allocated);
  }
  *__t1861t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1862t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1862t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1863t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1863t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1864t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1864t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1865t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1865t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1866t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1866t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1867t) {
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
  *__t1867t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1868t, uint64_t* __t1869t, uint16_t* __t1870t, uint16_t* __t1871t, uint64_t size, char** __t1872t, uint64_t* __t1873t, uint16_t* __t1874t, uint16_t* __t1875t) {
  char* buffer__unsafe_ptr=*__t1868t;
  uint64_t buffer__unsafe_size=*__t1869t;
  uint16_t buffer__unsafe_offset=*__t1870t;
  uint16_t buffer__unsafe_align=*__t1871t;
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
  *__t1868t=buffer__unsafe_ptr;
  *__t1869t=buffer__unsafe_size;
  *__t1870t=buffer__unsafe_offset;
  *__t1871t=buffer__unsafe_align;
  *__t1872t=__t521t__unsafe_ptr;
  *__t1873t=__t521t__unsafe_size;
  *__t1874t=__t521t__unsafe_offset;
  *__t1875t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1876t, uint64_t* __t1877t, uint16_t* __t1878t, uint16_t* __t1879t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1876t=unsafe_ptr;
  *__t1877t=unsafe_size;
  *__t1878t=unsafe_offset;
  *__t1879t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1880t) {
  *__t1880t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1881t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1881t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1882t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1882t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1883t) {
  *__t1883t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1884t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1884t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1885t) {
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
  *__t1885t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1886t, uint64_t* __t1887t, uint64_t* __t1888t, char* __t1889t) {
  goto __t_return;
  __t_return:
  *__t1886t=unsafe_ptr;
  *__t1887t=dat__pos;
  *__t1888t=dat__length;
  *__t1889t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1890t, uint64_t* __t1891t, uint64_t* __t1892t, char* __t1893t) {
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
  *__t1890t=__t643t__unsafe_ptr;
  *__t1891t=__t643t__dat__pos;
  *__t1892t=__t643t__dat__length;
  *__t1893t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1894t, uint64_t* __t1895t, uint64_t* __t1896t, char* __t1897t) {
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
  *__t1894t=__t673t__unsafe_ptr;
  *__t1895t=__t673t__dat__pos;
  *__t1896t=__t673t__dat__length;
  *__t1897t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1898t, uint64_t* __t1899t, uint64_t* __t1900t, char* __t1901t) {
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
  *__t1898t=__t681t__unsafe_ptr;
  *__t1899t=__t681t__dat__pos;
  *__t1900t=__t681t__dat__length;
  *__t1901t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1902t, uint64_t* __t1903t, uint64_t* __t1904t, char* __t1905t) {
  goto __t_return;
  __t_return:
  *__t1902t=other__unsafe_ptr;
  *__t1903t=other__dat__pos;
  *__t1904t=other__dat__length;
  *__t1905t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1906t) {
  goto __t_return;
  __t_return:
  *__t1906t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1907t) {
  goto __t_return;
  __t_return:
  *__t1907t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1908t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1909t, uint64_t* __t1910t, uint16_t* __t1911t, uint16_t* __t1912t, uint64_t* __t1913t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1914t, uint64_t* __t1915t, uint64_t* __t1916t, char* __t1917t) {
  char* buf__unsafe_ptr=*__t1909t;
  uint64_t buf__unsafe_size=*__t1910t;
  uint16_t buf__unsafe_offset=*__t1911t;
  uint16_t buf__unsafe_align=*__t1912t;
  uint64_t pos=*__t1913t;
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
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t170t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t271t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t170t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1909t=buf__unsafe_ptr;
  *__t1910t=buf__unsafe_size;
  *__t1911t=buf__unsafe_offset;
  *__t1912t=buf__unsafe_align;
  *__t1913t=pos;
  *__t1914t=__t750t__unsafe_ptr;
  *__t1915t=__t750t__dat__pos;
  *__t1916t=__t750t__dat__length;
  *__t1917t=__t750t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1918t, uint64_t* __t1919t, uint64_t* __t1920t, char* __t1921t) {
  char* __t704t__unsafe_ptr=0;
  uint64_t __t704t__unsafe_size=0;
  uint16_t __t704t__unsafe_offset=0;
  uint16_t __t704t__unsafe_align=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t __t707t__=0;
  char* __t708t__unsafe_ptr=0;
  uint64_t __t708t__unsafe_size=0;
  uint16_t __t708t__unsafe_offset=0;
  uint16_t __t708t__unsafe_align=0;
  uint64_t __t709t____t510t=0;
  char __t709t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t710t=0;
  char* __t711t__unsafe_ptr=0;
  uint64_t __t711t__dat__pos=0;
  uint64_t __t711t__dat__length=0;
  char __t711t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align);
  __t705t=1;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t706t__);
  add__t170t(__t705t,__t706t__,&__t707t__);
  __t_errcode=alloc__t508t(&__t704t__unsafe_ptr,&__t704t__unsafe_size,&__t704t__unsafe_offset,&__t704t__unsafe_align,__t707t__,&__t708t__unsafe_ptr,&__t708t__unsafe_size,&__t708t__unsafe_offset,&__t708t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t708t__unsafe_ptr;
  buf__unsafe_size=__t708t__unsafe_size;
  buf__unsafe_offset=__t708t__unsafe_offset;
  buf__unsafe_align=__t708t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t710t=0;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t710t,other__dat__length,other__dat__first,&__t711t__unsafe_ptr,&__t711t__dat__pos,&__t711t__dat__length,&__t711t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t709t____t510t=0;
  neq__t142t(__t708t__unsafe_size,__t709t____t510t,&__t709t____t511t__);
  if(__t709t____t511t__){
  __t708t__unsafe_size=0;
  __t708t__unsafe_size=__t708t__unsafe_size;
  __t711t__unsafe_ptr=__t711t__unsafe_ptr;
  free__t501t(&__t711t__unsafe_ptr);
  }
  __t_return:
  *__t1918t=__t711t__unsafe_ptr;
  *__t1919t=__t711t__dat__pos;
  *__t1920t=__t711t__dat__length;
  *__t1921t=__t711t__dat__first;
  
  return __t_errcode;
}

int temporary_cstr__t712t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1922t, char** __t1923t, uint64_t* __t1924t, uint64_t* __t1925t, char* __t1926t) {
  char* __t713t__unsafe_ptr=0;
  uint64_t __t713t__dat__pos=0;
  uint64_t __t713t__dat__length=0;
  char __t713t__dat__first=0;
  uint64_t __t714t____t709t____t510t=0;
  uint64_t __t714t____t708t__unsafe_size=0;
  char __t714t____t709t____t511t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t715t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t703t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t713t__unsafe_ptr,&__t713t__dat__pos,&__t713t__dat__length,&__t713t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t713t__unsafe_ptr;
  str__dat__pos=__t713t__dat__pos;
  str__dat__length=__t713t__dat__length;
  str__dat__first=__t713t__dat__first;
  add__t503t(str__unsafe_ptr,str__dat__pos,&__t715t__);
  _ret=__t715t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:__t714t____t709t____t510t=0;
  neq__t142t(__t714t____t708t__unsafe_size,__t714t____t709t____t510t,&__t714t____t709t____t511t__);
  if(__t714t____t709t____t511t__){
  __t714t____t708t__unsafe_size=0;
  __t714t____t708t__unsafe_size=__t714t____t708t__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__t501t(&str__unsafe_ptr);
  }
  __t_return:
  *__t1922t=cstr;
  *__t1923t=str__unsafe_ptr;
  *__t1924t=str__dat__pos;
  *__t1925t=str__dat__length;
  *__t1926t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int safe__t1371t(const char* cmd, const char** __t1927t) {
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
  *__t1927t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1370t(const char* cmd, int64_t* __t1928t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t1928t=result;
}

static inline __attribute__((always_inline)) void int__t415t(uint64_t x, int64_t* __t1929t) {
  int __t416t=0;
  int __t417t=0;
  int __t418t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1929t=z;
}

static inline __attribute__((always_inline)) void is_different__t81t(int64_t x, int64_t y, int* __t1930t) {
  int __t82t=0;
  int __t83t__=0;
  not__t35t(__t82t,&__t83t__);
  goto __t_return;
  __t_return:
  *__t1930t=__t83t__;
}

static inline __attribute__((always_inline)) void neq__t131t(int64_t x, int64_t y, char* __t1931t) {
  int __t132t__=0;
  char z=0;
  is_different__t81t(x,y,&__t132t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1931t=z;
}

int system__t1379t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1380t__cstr=0;
  char* __t1380t__str__unsafe_ptr=0;
  uint64_t __t1380t__str__dat__pos=0;
  uint64_t __t1380t__str__dat__length=0;
  char __t1380t__str__dat__first=0;
  uint64_t __t1381t____t714t____t709t____t510t=0;
  uint64_t __t1381t____t714t____t708t__unsafe_size=0;
  char __t1381t____t714t____t709t____t511t__=0;
  const char* __t1382t__=0;
  int64_t __t1383t__=0;
  int64_t result=0;
  uint64_t __t1384t=0;
  int64_t __t1385t__=0;
  char __t1386t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=temporary_cstr__t712t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1380t__cstr,&__t1380t__str__unsafe_ptr,&__t1380t__str__dat__pos,&__t1380t__str__dat__length,&__t1380t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=safe__t1371t(__t1380t__cstr,&__t1382t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1370t(__t1382t__,&__t1383t__);
  result=__t1383t__;
  __t1384t=0;
  int__t415t(__t1384t,&__t1385t__);
  neq__t131t(result,__t1385t__,&__t1386t__);
  if(__t1386t__){
  __t_errcode=40;
  goto __t_failure;
  }
  
  __t_failure:__t1381t____t714t____t709t____t510t=0;
  neq__t142t(__t1381t____t714t____t708t__unsafe_size,__t1381t____t714t____t709t____t510t,&__t1381t____t714t____t709t____t511t__);
  if(__t1381t____t714t____t709t____t511t__){
  __t1381t____t714t____t708t__unsafe_size=0;
  __t1381t____t714t____t708t__unsafe_size=__t1381t____t714t____t708t__unsafe_size;
  __t1380t__str__unsafe_ptr=__t1380t__str__unsafe_ptr;
  free__t501t(&__t1380t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1842t() {
  char* __t1843t__unsafe_ptr=0;
  uint64_t __t1843t__unsafe_size=0;
  uint16_t __t1843t__unsafe_offset=0;
  uint16_t __t1843t__unsafe_align=0;
  uint64_t __t1844t=0;
  char* __t1845t__unsafe_ptr=0;
  uint64_t __t1845t__unsafe_size=0;
  uint16_t __t1845t__unsafe_offset=0;
  uint16_t __t1845t__unsafe_align=0;
  uint64_t __t1846t____t510t=0;
  char __t1846t____t511t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t1847t=0;
  uint64_t __t1848t=0;
  char* __t1850t__unsafe_ptr=0;
  uint64_t __t1850t__dat__pos=0;
  uint64_t __t1850t__dat__length=0;
  char __t1850t__dat__first=0;
  char* __t1851t__unsafe_ptr=0;
  uint64_t __t1851t__dat__pos=0;
  uint64_t __t1851t__dat__length=0;
  char __t1851t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1332t(&__t1843t__unsafe_ptr,&__t1843t__unsafe_size,&__t1843t__unsafe_offset,&__t1843t__unsafe_align);
  __t1844t=2;
  __t_errcode=alloc__t508t(&__t1843t__unsafe_ptr,&__t1843t__unsafe_size,&__t1843t__unsafe_offset,&__t1843t__unsafe_align,__t1844t,&__t1845t__unsafe_ptr,&__t1845t__unsafe_size,&__t1845t__unsafe_offset,&__t1845t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1845t__unsafe_ptr;
  buf__unsafe_size=__t1845t__unsafe_size;
  buf__unsafe_offset=__t1845t__unsafe_offset;
  buf__unsafe_align=__t1845t__unsafe_align;
  __t1847t=0;
  __t1848t=__t1847t;
  __t_errcode=str__t674t(__t1849t,&__t1850t__unsafe_ptr,&__t1850t__dat__pos,&__t1850t__dat__length,&__t1850t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t742t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1848t,__t1850t__unsafe_ptr,__t1850t__dat__pos,__t1850t__dat__length,__t1850t__dat__first,&__t1851t__unsafe_ptr,&__t1851t__dat__pos,&__t1851t__dat__length,&__t1851t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1851t__unsafe_ptr;
  s__dat__pos=__t1851t__dat__pos;
  s__dat__length=__t1851t__dat__length;
  s__dat__first=__t1851t__dat__first;
  __t_errcode=system__t1379t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t1846t____t510t=0;
  neq__t142t(__t1845t__unsafe_size,__t1846t____t510t,&__t1846t____t511t__);
  if(__t1846t____t511t__){
  __t1845t__unsafe_size=0;
  __t1845t__unsafe_size=__t1845t__unsafe_size;
  __t1845t__unsafe_ptr=__t1845t__unsafe_ptr;
  free__t501t(&__t1845t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1842t();return 0;}