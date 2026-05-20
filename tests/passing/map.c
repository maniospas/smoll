#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t1799t="hello";
const char* const __t1804t="manio";
const char* const __t1801t="hello world!";
const char* const __t1806t="it's a me, manio.";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1814t(char** __t1835t, uint64_t* __t1836t, uint16_t* __t1837t, uint16_t* __t1838t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1835t=unsafe_ptr;
  *__t1836t=unsafe_size;
  *__t1837t=unsafe_offset;
  *__t1838t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1839t) {
  int value=0;
  *__t1839t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1840t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1840t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1841t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1841t=__t95t__;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1842t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1842t=z;
}

static inline __attribute__((always_inline)) void KB__t444t(uint64_t x, uint64_t* __t1843t) {
  uint64_t __t445t=0;
  uint64_t __t446t__=0;
  __t445t=1024;
  mul__t194t(x,__t445t,&__t446t__);
  goto __t_return;
  __t_return:
  *__t1843t=__t446t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1844t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1844t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1845t) {
  char* allocated=*__t1845t;
  if(allocated){
  free(allocated);
  }
  *__t1845t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1846t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1846t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1847t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1847t=value;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1848t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1848t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1849t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1849t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1850t) {
  char* allocated=0;
  char __t460t__=0;
  char __t461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t412t(allocated,&__t460t__);
  not__t26t(__t460t__,&__t461t__);
  if(__t461t__){
  __t_errcode=8;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1850t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1851t, uint64_t* __t1852t, uint16_t* __t1853t, uint16_t* __t1854t, uint64_t size, char** __t1855t, uint64_t* __t1856t, uint16_t* __t1857t, uint16_t* __t1858t) {
  char* buffer__unsafe_ptr=*__t1851t;
  uint64_t buffer__unsafe_size=*__t1852t;
  uint16_t buffer__unsafe_offset=*__t1853t;
  uint16_t buffer__unsafe_align=*__t1854t;
  int __t474t=0;
  uint64_t __t475t=0;
  char __t476t__=0;
  uint64_t __t477t=0;
  char* ptr=0;
  char __t479t__=0;
  uint64_t __t480t=0;
  char __t481t__=0;
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  uint64_t __t484t__=0;
  char* __t486t__unsafe_ptr=0;
  uint64_t __t486t__unsafe_size=0;
  uint16_t __t486t__unsafe_offset=0;
  uint16_t __t486t__unsafe_align=0;
  uint64_t __t487t=0;
  char __t488t__=0;
  uint64_t __t489t__=0;
  uint64_t __t490t__=0;
  uint64_t bytes=0;
  char* __t491t__=0;
  uint64_t __t492t=0;
  char* __t494t__unsafe_ptr=0;
  uint64_t __t494t__unsafe_size=0;
  uint16_t __t494t__unsafe_offset=0;
  uint16_t __t494t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t479t__);
  if(__t479t__){
  __t480t=0;
  neq__t142t(size,__t480t,&__t481t__);
  if(__t481t__){
  __t482t=0;
  nat__t470t(buffer__unsafe_align,&__t483t__);
  mul__t194t(__t483t__,size,&__t484t__);
  zero__t467t(buffer__unsafe_ptr,__t482t,__t484t__);
  }
  __t486t__unsafe_ptr=buffer__unsafe_ptr;
  __t486t__unsafe_size=buffer__unsafe_size;
  __t486t__unsafe_offset=buffer__unsafe_offset;
  __t486t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t487t=0;
  neq__t142t(buffer__unsafe_size,__t487t,&__t488t__);
  if(__t488t__){
  __t_errcode=10;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t489t__);
  mul__t194t(__t489t__,size,&__t490t__);
  bytes=__t490t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t459t(bytes,&__t491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t491t__;
  __t492t=0;
  zero__t467t(buffer__unsafe_ptr,__t492t,bytes);
  __t494t__unsafe_ptr=buffer__unsafe_ptr;
  __t494t__unsafe_size=buffer__unsafe_size;
  __t494t__unsafe_offset=buffer__unsafe_offset;
  __t494t__unsafe_align=buffer__unsafe_align;
  __t486t__unsafe_ptr=__t494t__unsafe_ptr;
  __t486t__unsafe_size=__t494t__unsafe_size;
  __t486t__unsafe_offset=__t494t__unsafe_offset;
  __t486t__unsafe_align=__t494t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t475t=0;
  neq__t142t(__t486t__unsafe_size,__t475t,&__t476t__);
  if(__t476t__){
  __t486t__unsafe_size=0;
  __t486t__unsafe_size=__t486t__unsafe_size;
  __t486t__unsafe_ptr=__t486t__unsafe_ptr;
  free__t466t(&__t486t__unsafe_ptr);
  }
  __t_return:
  *__t1851t=buffer__unsafe_ptr;
  *__t1852t=buffer__unsafe_size;
  *__t1853t=buffer__unsafe_offset;
  *__t1854t=buffer__unsafe_align;
  *__t1855t=__t486t__unsafe_ptr;
  *__t1856t=__t486t__unsafe_size;
  *__t1857t=__t486t__unsafe_offset;
  *__t1858t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t675t(char** __t1859t, uint64_t* __t1860t, uint16_t* __t1861t, uint16_t* __t1862t, char** __t1863t, uint64_t* __t1864t, uint16_t* __t1865t, uint16_t* __t1866t, uint64_t* __t1867t) {
  char* buf__unsafe_ptr=*__t1859t;
  uint64_t buf__unsafe_size=*__t1860t;
  uint16_t buf__unsafe_offset=*__t1861t;
  uint16_t buf__unsafe_align=*__t1862t;
  uint64_t __t676t=0;
  uint64_t __t677t=0;
  uint64_t pos=0;
  __t676t=0;
  __t677t=__t676t;
  pos=__t677t;
  goto __t_return;
  __t_return:
  *__t1859t=buf__unsafe_ptr;
  *__t1860t=buf__unsafe_size;
  *__t1861t=buf__unsafe_offset;
  *__t1862t=buf__unsafe_align;
  *__t1863t=buf__unsafe_ptr;
  *__t1864t=buf__unsafe_size;
  *__t1865t=buf__unsafe_offset;
  *__t1866t=buf__unsafe_align;
  *__t1867t=pos;
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1783t(char** __t1868t, uint64_t* __t1869t, uint16_t* __t1870t, uint16_t* __t1871t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__t1868t=unsafe_ptr;
  *__t1869t=unsafe_size;
  *__t1870t=unsafe_offset;
  *__t1871t=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____t_buffer____buffer__t1699t(char** __t1872t, uint64_t* __t1873t, uint16_t* __t1874t, uint16_t* __t1875t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__t1872t=unsafe_ptr;
  *__t1873t=unsafe_size;
  *__t1874t=unsafe_offset;
  *__t1875t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1876t) {
  goto __t_return;
  __t_return:
  *__t1876t=buffer__unsafe_size;
}

int strmap__t1698t(char** __t1877t, uint64_t* __t1878t, uint16_t* __t1879t, uint16_t* __t1880t, char** __t1881t, uint64_t* __t1882t, uint16_t* __t1883t, uint16_t* __t1884t, char** __t1885t, uint64_t* __t1886t, uint16_t* __t1887t, uint16_t* __t1888t) {
  char* values__unsafe_ptr=*__t1877t;
  uint64_t values__unsafe_size=*__t1878t;
  uint16_t values__unsafe_offset=*__t1879t;
  uint16_t values__unsafe_align=*__t1880t;
  char* __t1701t__unsafe_ptr=0;
  uint64_t __t1701t__unsafe_size=0;
  uint16_t __t1701t__unsafe_offset=0;
  uint16_t __t1701t__unsafe_align=0;
  char* __t1702t__unsafe_ptr=0;
  uint64_t __t1702t__unsafe_size=0;
  uint16_t __t1702t__unsafe_offset=0;
  uint16_t __t1702t__unsafe_align=0;
  uint64_t __t1703t__=0;
  char* __t1704t__unsafe_ptr=0;
  uint64_t __t1704t__unsafe_size=0;
  uint16_t __t1704t__unsafe_offset=0;
  uint16_t __t1704t__unsafe_align=0;
  uint64_t __t1705t____t475t=0;
  char __t1705t____t476t__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  robinhood_str_entry____t_buffer____buffer__t1699t(&__t1701t__unsafe_ptr,&__t1701t__unsafe_size,&__t1701t__unsafe_offset,&__t1701t__unsafe_align);
  __t1702t__unsafe_ptr=__t1701t__unsafe_ptr;
  __t1702t__unsafe_size=__t1701t__unsafe_size;
  __t1702t__unsafe_offset=__t1701t__unsafe_offset;
  __t1702t__unsafe_align=__t1701t__unsafe_align;
  len__t559t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__t1703t__);
  __t_errcode=alloc__t473t(&__t1702t__unsafe_ptr,&__t1702t__unsafe_size,&__t1702t__unsafe_offset,&__t1702t__unsafe_align,__t1703t__,&__t1704t__unsafe_ptr,&__t1704t__unsafe_size,&__t1704t__unsafe_offset,&__t1704t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  keys__unsafe_ptr=__t1704t__unsafe_ptr;
  keys__unsafe_size=__t1704t__unsafe_size;
  keys__unsafe_offset=__t1704t__unsafe_offset;
  keys__unsafe_align=__t1704t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1705t____t475t=0;
  neq__t142t(values__unsafe_size,__t1705t____t475t,&__t1705t____t476t__);
  if(__t1705t____t476t__){
  values__unsafe_size=0;
  values__unsafe_size=values__unsafe_size;
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__t466t(&keys__unsafe_ptr);
  }
  __t_return:
  *__t1877t=values__unsafe_ptr;
  *__t1878t=values__unsafe_size;
  *__t1879t=values__unsafe_offset;
  *__t1880t=values__unsafe_align;
  *__t1881t=keys__unsafe_ptr;
  *__t1882t=keys__unsafe_size;
  *__t1883t=keys__unsafe_offset;
  *__t1884t=keys__unsafe_align;
  *__t1885t=values__unsafe_ptr;
  *__t1886t=values__unsafe_size;
  *__t1887t=values__unsafe_offset;
  *__t1888t=values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1889t, uint64_t* __t1890t, uint16_t* __t1891t, uint16_t* __t1892t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1889t=unsafe_ptr;
  *__t1890t=unsafe_size;
  *__t1891t=unsafe_offset;
  *__t1892t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1893t) {
  *__t1893t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1894t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1894t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1895t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1895t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1896t) {
  *__t1896t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1897t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1897t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1898t) {
  char __t553t__=0;
  uint64_t __t554t__=0;
  uint64_t __t555t__=0;
  uint64_t __t556t__=0;
  uint64_t __t557t__=0;
  char* __t558t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t553t__);
  if(__t553t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t554t__);
  mul__t194t(i,__t554t__,&__t555t__);
  nat__t470t(buffer__unsafe_offset,&__t556t__);
  add__t170t(__t555t__,__t556t__,&__t557t__);
  add__t468t(buffer__unsafe_ptr,__t557t__,&__t558t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1898t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1899t, uint64_t* __t1900t, uint64_t* __t1901t, char* __t1902t) {
  goto __t_return;
  __t_return:
  *__t1899t=unsafe_ptr;
  *__t1900t=dat__pos;
  *__t1901t=dat__length;
  *__t1902t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1903t, uint64_t* __t1904t, uint64_t* __t1905t, char* __t1906t) {
  char* unsafe_ptr=0;
  uint64_t __t594t__=0;
  uint64_t __t595t=0;
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t=0;
  char __t599t__=0;
  char* __t600t__unsafe_ptr=0;
  uint64_t __t600t__dat__pos=0;
  uint64_t __t600t__dat__length=0;
  char __t600t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t470t(buf__unsafe_align,&__t594t__);
  __t595t=1;
  neq__t142t(__t594t__,__t595t,&__t596t__);
  if(__t596t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t470t(buf__unsafe_offset,&__t597t__);
  __t598t=0;
  neq__t142t(__t597t__,__t598t,&__t599t__);
  if(__t599t__){
  __t_errcode=14;
  goto __t_failure;
  }
  str__t587t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t600t__unsafe_ptr,&__t600t__dat__pos,&__t600t__dat__length,&__t600t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1903t=__t600t__unsafe_ptr;
  *__t1904t=__t600t__dat__pos;
  *__t1905t=__t600t__dat__length;
  *__t1906t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1907t, uint64_t* __t1908t, uint64_t* __t1909t, char* __t1910t) {
  uint64_t __t626t=0;
  char __t627t__=0;
  char* __t628t__=0;
  char __t629t__value=0;
  char first=0;
  char* __t630t__unsafe_ptr=0;
  uint64_t __t630t__dat__pos=0;
  uint64_t __t630t__dat__length=0;
  char __t630t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t626t=0;
  neq__t142t(length,__t626t,&__t627t__);
  if(__t627t__){
  __t_errcode=get__t552t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t628t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t628t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t629t__value,__t628t__,1);
  first=__t629t__value;
  }
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t630t__unsafe_ptr,&__t630t__dat__pos,&__t630t__dat__length,&__t630t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1907t=__t630t__unsafe_ptr;
  *__t1908t=__t630t__dat__pos;
  *__t1909t=__t630t__dat__length;
  *__t1910t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1911t, uint64_t* __t1912t, uint64_t* __t1913t, char* __t1914t) {
  char* __t632t__unsafe_ptr=0;
  uint64_t __t632t__unsafe_size=0;
  uint16_t __t632t__unsafe_offset=0;
  uint16_t __t632t__unsafe_align=0;
  char* __t633t__unsafe_ptr=0;
  uint64_t __t633t__unsafe_size=0;
  uint16_t __t633t__unsafe_offset=0;
  uint16_t __t633t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t634t__=0;
  uint64_t length=0;
  uint64_t __t635t=0;
  uint64_t __t636t__=0;
  uint64_t __t637t=0;
  char* __t638t__unsafe_ptr=0;
  uint64_t __t638t__dat__pos=0;
  uint64_t __t638t__dat__length=0;
  char __t638t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t591t(&__t632t__unsafe_ptr,&__t632t__unsafe_size,&__t632t__unsafe_offset,&__t632t__unsafe_align);
  __t633t__unsafe_ptr=__t632t__unsafe_ptr;
  __t633t__unsafe_size=__t632t__unsafe_size;
  __t633t__unsafe_offset=__t632t__unsafe_offset;
  __t633t__unsafe_align=__t632t__unsafe_align;
  buf__unsafe_ptr=__t633t__unsafe_ptr;
  buf__unsafe_size=__t633t__unsafe_size;
  buf__unsafe_offset=__t633t__unsafe_offset;
  buf__unsafe_align=__t633t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t634t__);
  buf__unsafe_ptr=__t634t__;
  if(c){
  length=strlen(c);
  }
  __t635t=1;
  add__t170t(length,__t635t,&__t636t__);
  buf__unsafe_size=__t636t__;
  __t637t=0;
  __t_errcode=str__t625t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t637t,length,&__t638t__unsafe_ptr,&__t638t__dat__pos,&__t638t__dat__length,&__t638t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1911t=__t638t__unsafe_ptr;
  *__t1912t=__t638t__dat__pos;
  *__t1913t=__t638t__dat__length;
  *__t1914t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void raw__t1317t(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __t1915t, uint64_t* __t1916t, uint64_t* __t1917t, char* __t1918t) {
  goto __t_return;
  __t_return:
  *__t1915t=r__unsafe_ptr;
  *__t1916t=r__dat__pos;
  *__t1917t=r__dat__length;
  *__t1918t=r__dat__first;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1919t) {
  goto __t_return;
  __t_return:
  *__t1919t=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__t1321t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __t1920t) {
  uint64_t __t1322t=0;
  uint64_t __t1323t__=0;
  char __t1324t__=0;
  __t1322t=0;
  len__t639t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1323t__);
  eq__t118t(__t1322t,__t1323t__,&__t1324t__);
  goto __t_return;
  __t_return:
  *__t1920t=__t1324t__;
}

static inline __attribute__((always_inline)) void raw__t1315t(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __t1921t, uint64_t* __t1922t, uint64_t* __t1923t, char* __t1924t) {
  goto __t_return;
  __t_return:
  *__t1921t=r__s__unsafe_ptr;
  *__t1922t=r__s__dat__pos;
  *__t1923t=r__s__dat__length;
  *__t1924t=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1925t, uint64_t* __t1926t) {
  int __t437t=0;
  uint64_t __t438t=0;
  uint64_t _from=0;
  uint64_t __t439t=0;
  uint64_t from=0;
  __t438t=0;
  _from=__t438t;
  __t439t=_from;
  from=__t439t;
  goto __t_return;
  __t_return:
  *__t1925t=from;
  *__t1926t=to;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1927t, uint64_t r__to, uint64_t* __t1928t) {
  uint64_t r__from=*__t1927t;
  char __t441t__=0;
  uint64_t ret=0;
  uint64_t __t442t=0;
  uint64_t __t443t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t441t__);
  if(__t441t__){
  __t_errcode=7;
  goto __t_failure;
  }
  ret=r__from;
  __t442t=1;
  add__t170t(ret,__t442t,&__t443t__);
  r__from=__t443t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1927t=r__from;
  *__t1928t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t413t(uint64_t value, uint64_t* __t1929t) {
  goto __t_return;
  __t_return:
  *__t1929t=value;
}

static inline __attribute__((always_inline)) void lshift__t423t(uint64_t x__value, uint64_t y, uint64_t* __t1930t) {
  uint64_t z=0;
  uint64_t __t424t__value=0;
  z=(x__value<<y);
  bits__t413t(z,&__t424t__value);
  goto __t_return;
  __t_return:
  *__t1930t=__t424t__value;
}

static inline __attribute__((always_inline)) void nat__t408t(uint64_t x, uint64_t* __t1931t) {
  int __t409t=0;
  int __t410t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1931t=value;
}

static inline __attribute__((always_inline)) void nat__t419t(uint64_t x__value, uint64_t* __t1932t) {
  uint64_t __t420t__=0;
  nat__t408t(x__value,&__t420t__);
  goto __t_return;
  __t_return:
  *__t1932t=__t420t__;
}

static inline __attribute__((always_inline)) void get__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1933t) {
  uint64_t __t781t__=0;
  char* __t782t__=0;
  add__t170t(s__dat__pos,i,&__t781t__);
  add__t468t(s__unsafe_ptr,__t781t__,&__t782t__);
  goto __t_return;
  __t_return:
  *__t1933t=__t782t__;
}

static inline __attribute__((always_inline)) void nat__t411t(char x, uint64_t* __t1934t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1934t=value;
}

static inline __attribute__((always_inline)) int mod__t223t(uint64_t x, uint64_t y, uint64_t* __t1935t) {
  uint64_t zero=0;
  char __t224t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  zero=0;
  eq__t118t(y,zero,&__t224t__);
  if(__t224t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x%y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1935t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int hash__t1266t(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __t1936t) {
  uint64_t __t1267t=0;
  uint64_t __t1268t=0;
  uint64_t h=0;
  uint64_t __t1269t__=0;
  uint64_t __t1270t__from=0;
  uint64_t __t1270t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1271t=0;
  uint64_t __t1272t__=0;
  uint64_t i=0;
  uint64_t __t1273t__value=0;
  uint64_t __t1274t=0;
  uint64_t __t1275t__value=0;
  uint64_t __t1276t__=0;
  uint64_t __t1277t__=0;
  char* __t1278t__=0;
  char __t1279t__value=0;
  uint64_t __t1280t__=0;
  uint64_t __t1281t__=0;
  uint64_t __t1282t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1267t=5381;
  __t1268t=__t1267t;
  h=__t1268t;
  len__t639t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1269t__);
  range__t436t(__t1269t__,&__t1270t__from,&__t1270t__to);
  iter__from=__t1270t__from;
  iter__to=__t1270t__to;
  while(1){
  __t_complain=next__t440t(&iter__from,iter__to,&__t1272t__);
  __t1271t=__t_complain;
  i=__t1272t__;
  __t1271t=__t1271t==0;
  if(!__t1271t){
  break;
  }
  bits__t413t(h,&__t1273t__value);
  __t1274t=5;
  lshift__t423t(__t1273t__value,__t1274t,&__t1275t__value);
  nat__t419t(__t1275t__value,&__t1276t__);
  add__t170t(__t1276t__,h,&__t1277t__);
  get__t780t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__t1278t__);
  if(!__t1278t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1279t__value,__t1278t__,1);
  nat__t411t(__t1279t__value,&__t1280t__);
  add__t170t(__t1277t__,__t1280t__,&__t1281t__);
  h=__t1281t__;
  }
  __t_errcode=mod__t223t(h,size,&__t1282t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1936t=__t1282t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1937t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1937t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1938t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1938t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1939t, uint64_t* __t1940t, uint16_t* __t1941t, uint16_t* __t1942t, uint64_t i, char** __t1943t) {
  char* buffer__unsafe_ptr=*__t1939t;
  uint64_t buffer__unsafe_size=*__t1940t;
  uint16_t buffer__unsafe_offset=*__t1941t;
  uint16_t buffer__unsafe_align=*__t1942t;
  char __t546t__=0;
  uint64_t __t547t__=0;
  uint64_t __t548t__=0;
  uint64_t __t549t__=0;
  uint64_t __t550t__=0;
  char* __t551t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t546t__);
  if(__t546t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t547t__);
  mul__t194t(i,__t547t__,&__t548t__);
  nat__t470t(buffer__unsafe_offset,&__t549t__);
  add__t170t(__t548t__,__t549t__,&__t550t__);
  add__t468t(buffer__unsafe_ptr,__t550t__,&__t551t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1939t=buffer__unsafe_ptr;
  *__t1940t=buffer__unsafe_size;
  *__t1941t=buffer__unsafe_offset;
  *__t1942t=buffer__unsafe_align;
  *__t1943t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t643t(char x, char y, char* __t1944t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1944t=z;
}

static inline __attribute__((always_inline)) void eq__t784t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t1945t) {
  uint64_t __t785t__=0;
  uint64_t n=0;
  uint64_t __t786t__=0;
  char __t787t__=0;
  char __t788t=0;
  char __t789t__=0;
  char __t790t=0;
  char z=0;
  len__t639t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t785t__);
  n=__t785t__;
  len__t639t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t786t__);
  neq__t142t(n,__t786t__,&__t787t__);
  if(__t787t__){
  __t788t=0;
  goto __t_return;
  }
  neq__t643t(x__dat__first,y__dat__first,&__t789t__);
  if(__t789t__){
  __t790t=0;
  __t788t=__t790t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t788t=z;
  goto __t_return;
  __t_return:
  *__t1945t=__t788t;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1946t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1946t=z;
}

int at__t1597t(char** __t1947t, uint64_t* __t1948t, uint16_t* __t1949t, uint16_t* __t1950t, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t1951t) {
  char* data__unsafe_ptr=*__t1947t;
  uint64_t data__unsafe_size=*__t1948t;
  uint16_t data__unsafe_offset=*__t1949t;
  uint16_t data__unsafe_align=*__t1950t;
  char* __t1598t__unsafe_ptr=0;
  uint64_t __t1598t__dat__pos=0;
  uint64_t __t1598t__dat__length=0;
  char __t1598t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1599t__=0;
  uint64_t __t1600t=0;
  uint64_t __t1601t=0;
  char* __t1602t__=0;
  char* __t1603t__s__unsafe_ptr=0;
  uint64_t __t1603t__s__dat__pos=0;
  uint64_t __t1603t__s__dat__length=0;
  char __t1603t__s__dat__first=0;
  uint64_t __t1603t__cost=0;
  char* __t1604t__unsafe_ptr=0;
  uint64_t __t1604t__dat__pos=0;
  uint64_t __t1604t__dat__length=0;
  char __t1604t__dat__first=0;
  int __t1605t=0;
  int __t1606t__=0;
  uint64_t __t1607t__=0;
  uint64_t n=0;
  uint64_t __t1608t__=0;
  uint64_t pos=0;
  uint64_t __t1609t__from=0;
  uint64_t __t1609t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1610t=0;
  uint64_t __t1611t__=0;
  uint64_t i=0;
  uint64_t __t1612t__=0;
  uint64_t __t1613t=0;
  uint64_t idx=0;
  char __t1614t__=0;
  uint64_t __t1615t__=0;
  uint64_t __t1616t=0;
  char __t1617t__=0;
  char* __t1618t__=0;
  char* __t1619t__s__unsafe_ptr=0;
  uint64_t __t1619t__s__dat__pos=0;
  uint64_t __t1619t__s__dat__length=0;
  char __t1619t__s__dat__first=0;
  uint64_t __t1619t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__dat__pos=0;
  uint64_t __t1620t__dat__length=0;
  char __t1620t__dat__first=0;
  char __t1621t__=0;
  char* __t1622t__=0;
  char* __t1623t__unsafe_ptr=0;
  uint64_t __t1623t__dat__pos=0;
  uint64_t __t1623t__dat__length=0;
  char __t1623t__dat__first=0;
  char __t1624t__=0;
  char __t1625t__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __t1626t__=0;
  char* __t1627t__s__unsafe_ptr=0;
  uint64_t __t1627t__s__dat__pos=0;
  uint64_t __t1627t__s__dat__length=0;
  char __t1627t__s__dat__first=0;
  uint64_t __t1627t__cost=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__dat__pos=0;
  uint64_t __t1628t__dat__length=0;
  char __t1628t__dat__first=0;
  char* __t1629t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1317t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1598t__unsafe_ptr,&__t1598t__dat__pos,&__t1598t__dat__length,&__t1598t__dat__first);
  k__unsafe_ptr=__t1598t__unsafe_ptr;
  k__dat__pos=__t1598t__dat__pos;
  k__dat__length=__t1598t__dat__length;
  k__dat__first=__t1598t__dat__first;
  is_zero__t1321t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1599t__);
  if(__t1599t__){
  __t1600t=0;
  goto __t_return;
  }
  __t1601t=0;
  __t_errcode=get__t552t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1601t,&__t1602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1602t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1603t__s__unsafe_ptr,__t1602t__,8);
  memcpy(&__t1603t__s__dat__pos,__t1602t__+8,8);
  memcpy(&__t1603t__s__dat__length,__t1602t__+16,8);
  memcpy(&__t1603t__s__dat__first,__t1602t__+24,1);
  memcpy(&__t1603t__cost,__t1602t__+25,8);
  raw__t1315t(__t1603t__s__unsafe_ptr,__t1603t__s__dat__pos,__t1603t__s__dat__length,__t1603t__s__dat__first,__t1603t__cost,&__t1604t__unsafe_ptr,&__t1604t__dat__pos,&__t1604t__dat__length,&__t1604t__dat__first);
  not__t35t(__t1605t,&__t1606t__);
  len__t559t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1607t__);
  n=__t1607t__;
  __t_errcode=hash__t1266t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1608t__;
  range__t436t(n,&__t1609t__from,&__t1609t__to);
  iter__from=__t1609t__from;
  iter__to=__t1609t__to;
  while(1){
  __t_complain=next__t440t(&iter__from,iter__to,&__t1611t__);
  __t1610t=__t_complain;
  i=__t1611t__;
  __t1610t=__t1610t==0;
  if(!__t1610t){
  break;
  }
  add__t170t(pos,i,&__t1612t__);
  __t1613t=__t1612t__;
  idx=__t1613t;
  ge__t319t(idx,n,&__t1614t__);
  if(__t1614t__){
  __t_errcode=sub__t347t(idx,n,&__t1615t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1615t__;
  }
  __t1616t=0;
  eq__t118t(idx,__t1616t,&__t1617t__);
  if(__t1617t__){
  continue;
  }
  __t_errcode=get__t552t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1618t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1619t__s__unsafe_ptr,__t1618t__,8);
  memcpy(&__t1619t__s__dat__pos,__t1618t__+8,8);
  memcpy(&__t1619t__s__dat__length,__t1618t__+16,8);
  memcpy(&__t1619t__s__dat__first,__t1618t__+24,1);
  memcpy(&__t1619t__cost,__t1618t__+25,8);
  entry__s__unsafe_ptr=__t1619t__s__unsafe_ptr;
  entry__s__dat__pos=__t1619t__s__dat__pos;
  entry__s__dat__length=__t1619t__s__dat__length;
  entry__s__dat__first=__t1619t__s__dat__first;
  entry__cost=__t1619t__cost;
  raw__t1315t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1620t__unsafe_ptr,&__t1620t__dat__pos,&__t1620t__dat__length,&__t1620t__dat__first);
  is_zero__t1321t(__t1620t__unsafe_ptr,__t1620t__dat__pos,__t1620t__dat__length,__t1620t__dat__first,&__t1621t__);
  if(__t1621t__){
  __t_errcode=mutget__t545t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1622t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1622t__,&k__unsafe_ptr,8);
  memcpy(__t1622t__+8,&k__dat__pos,8);
  memcpy(__t1622t__+16,&k__dat__length,8);
  memcpy(__t1622t__+24,&k__dat__first,1);
  memcpy(__t1622t__+25,&i,8);
  __t1600t=idx;
  goto __t_return;
  }
  raw__t1315t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1623t__unsafe_ptr,&__t1623t__dat__pos,&__t1623t__dat__length,&__t1623t__dat__first);
  eq__t784t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1623t__unsafe_ptr,__t1623t__dat__pos,__t1623t__dat__length,__t1623t__dat__first,&__t1624t__);
  if(__t1624t__){
  __t1600t=idx;
  goto __t_return;
  }
  gt__t271t(i,entry__cost,&__t1625t__);
  if(__t1625t__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __t_errcode=get__t552t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1626t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1627t__s__unsafe_ptr,__t1626t__,8);
  memcpy(&__t1627t__s__dat__pos,__t1626t__+8,8);
  memcpy(&__t1627t__s__dat__length,__t1626t__+16,8);
  memcpy(&__t1627t__s__dat__first,__t1626t__+24,1);
  memcpy(&__t1627t__cost,__t1626t__+25,8);
  raw__t1315t(__t1627t__s__unsafe_ptr,__t1627t__s__dat__pos,__t1627t__s__dat__length,__t1627t__s__dat__first,__t1627t__cost,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length,&__t1628t__dat__first);
  k__unsafe_ptr=__t1628t__unsafe_ptr;
  k__dat__pos=__t1628t__dat__pos;
  k__dat__length=__t1628t__dat__length;
  k__dat__first=__t1628t__dat__first;
  __t_errcode=mutget__t545t(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__t1629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1629t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1629t__,&tmp__unsafe_ptr,8);
  memcpy(__t1629t__+8,&tmp__dat__pos,8);
  memcpy(__t1629t__+16,&tmp__dat__length,8);
  memcpy(__t1629t__+24,&tmp__dat__first,1);
  memcpy(__t1629t__+25,&i,8);
  }
  }
  __t_errcode=34;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t1947t=data__unsafe_ptr;
  *__t1948t=data__unsafe_size;
  *__t1949t=data__unsafe_offset;
  *__t1950t=data__unsafe_align;
  *__t1951t=__t1600t;
  
  return __t_errcode;
}

int mutget__t1722t(char** __t1952t, uint64_t* __t1953t, uint16_t* __t1954t, uint16_t* __t1955t, char** __t1956t, uint64_t* __t1957t, uint16_t* __t1958t, uint16_t* __t1959t, const char* key, char** __t1960t) {
  char* keys__unsafe_ptr=*__t1952t;
  uint64_t keys__unsafe_size=*__t1953t;
  uint16_t keys__unsafe_offset=*__t1954t;
  uint16_t keys__unsafe_align=*__t1955t;
  char* values__unsafe_ptr=*__t1956t;
  uint64_t values__unsafe_size=*__t1957t;
  uint16_t values__unsafe_offset=*__t1958t;
  uint16_t values__unsafe_align=*__t1959t;
  char* __t1723t__unsafe_ptr=0;
  uint64_t __t1723t__dat__pos=0;
  uint64_t __t1723t__dat__length=0;
  char __t1723t__dat__first=0;
  uint64_t __t1724t__=0;
  char* __t1725t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(key,&__t1723t__unsafe_ptr,&__t1723t__dat__pos,&__t1723t__dat__length,&__t1723t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1597t(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__t1723t__unsafe_ptr,__t1723t__dat__pos,__t1723t__dat__length,__t1723t__dat__first,&__t1724t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t545t(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__t1724t__,&__t1725t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1952t=keys__unsafe_ptr;
  *__t1953t=keys__unsafe_size;
  *__t1954t=keys__unsafe_offset;
  *__t1955t=keys__unsafe_align;
  *__t1956t=values__unsafe_ptr;
  *__t1957t=values__unsafe_size;
  *__t1958t=values__unsafe_offset;
  *__t1959t=values__unsafe_align;
  *__t1960t=__t1725t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t624t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1961t, uint64_t* __t1962t, uint64_t* __t1963t, char* __t1964t) {
  goto __t_return;
  __t_return:
  *__t1961t=other__unsafe_ptr;
  *__t1962t=other__dat__pos;
  *__t1963t=other__dat__length;
  *__t1964t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t699t(char** __t1965t, uint64_t* __t1966t, uint16_t* __t1967t, uint16_t* __t1968t, uint64_t* __t1969t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1970t, uint64_t* __t1971t, uint64_t* __t1972t, char* __t1973t) {
  char* buf__unsafe_ptr=*__t1965t;
  uint64_t buf__unsafe_size=*__t1966t;
  uint16_t buf__unsafe_offset=*__t1967t;
  uint16_t buf__unsafe_align=*__t1968t;
  uint64_t pos=*__t1969t;
  char* __t700t__unsafe_ptr=0;
  uint64_t __t700t__dat__pos=0;
  uint64_t __t700t__dat__length=0;
  char __t700t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t701t__=0;
  uint64_t __t702t__=0;
  uint64_t next_pos=0;
  uint64_t __t703t__=0;
  char __t704t__=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t prev_pos=0;
  char* __t707t__unsafe_ptr=0;
  uint64_t __t707t__dat__pos=0;
  uint64_t __t707t__dat__length=0;
  char __t707t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t700t__unsafe_ptr,&__t700t__dat__pos,&__t700t__dat__length,&__t700t__dat__first);
  other__unsafe_ptr=__t700t__unsafe_ptr;
  other__dat__pos=__t700t__dat__pos;
  other__dat__length=__t700t__dat__length;
  other__dat__first=__t700t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t701t__);
  add__t170t(pos,__t701t__,&__t702t__);
  next_pos=__t702t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t703t__);
  gt__t271t(next_pos,__t703t__,&__t704t__);
  if(__t704t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t705t=0;
  add__t170t(pos,__t705t,&__t706t__);
  prev_pos=__t706t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t707t__unsafe_ptr,&__t707t__dat__pos,&__t707t__dat__length,&__t707t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1965t=buf__unsafe_ptr;
  *__t1966t=buf__unsafe_size;
  *__t1967t=buf__unsafe_offset;
  *__t1968t=buf__unsafe_align;
  *__t1969t=pos;
  *__t1970t=__t707t__unsafe_ptr;
  *__t1971t=__t707t__dat__pos;
  *__t1972t=__t707t__dat__length;
  *__t1973t=__t707t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t1740t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __t1974t, char** __t1975t, uint64_t* __t1976t, uint64_t* __t1977t, char* __t1978t) {
  uint64_t pos=*__t1974t;
  uint64_t __t1741t=0;
  char __t1742t__=0;
  uint64_t __t1743t=0;
  uint64_t __t1744t__=0;
  uint64_t __t1745t=0;
  char* __t1746t__=0;
  char* __t1747t__s__unsafe_ptr=0;
  uint64_t __t1747t__s__dat__pos=0;
  uint64_t __t1747t__s__dat__length=0;
  char __t1747t__s__dat__first=0;
  uint64_t __t1747t__cost=0;
  char* __t1748t__unsafe_ptr=0;
  uint64_t __t1748t__dat__pos=0;
  uint64_t __t1748t__dat__length=0;
  char __t1748t__dat__first=0;
  char* __t1749t__=0;
  char* __t1750t__s__unsafe_ptr=0;
  uint64_t __t1750t__s__dat__pos=0;
  uint64_t __t1750t__s__dat__length=0;
  char __t1750t__s__dat__first=0;
  uint64_t __t1750t__cost=0;
  char* __t1751t__unsafe_ptr=0;
  uint64_t __t1751t__dat__pos=0;
  uint64_t __t1751t__dat__length=0;
  char __t1751t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __t1752t=0;
  uint64_t __t1753t__=0;
  char* __t1754t__unsafe_ptr=0;
  uint64_t __t1754t__dat__pos=0;
  uint64_t __t1754t__dat__length=0;
  char __t1754t__dat__first=0;
  char __t1755t__=0;
  char* __t1756t__=0;
  char* __t1757t__s__unsafe_ptr=0;
  uint64_t __t1757t__s__dat__pos=0;
  uint64_t __t1757t__s__dat__length=0;
  char __t1757t__s__dat__first=0;
  uint64_t __t1757t__cost=0;
  char* __t1758t__unsafe_ptr=0;
  uint64_t __t1758t__dat__pos=0;
  uint64_t __t1758t__dat__length=0;
  char __t1758t__dat__first=0;
  uint64_t __t1759t=0;
  uint64_t __t1760t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1741t=0;
  eq__t118t(pos,__t1741t,&__t1742t__);
  if(__t1742t__){
  __t1743t=1;
  add__t170t(pos,__t1743t,&__t1744t__);
  pos=__t1744t__;
  __t1745t=0;
  __t_errcode=get__t552t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1745t,&__t1746t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1746t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1747t__s__unsafe_ptr,__t1746t__,8);
  memcpy(&__t1747t__s__dat__pos,__t1746t__+8,8);
  memcpy(&__t1747t__s__dat__length,__t1746t__+16,8);
  memcpy(&__t1747t__s__dat__first,__t1746t__+24,1);
  memcpy(&__t1747t__cost,__t1746t__+25,8);
  raw__t1315t(__t1747t__s__unsafe_ptr,__t1747t__s__dat__pos,__t1747t__s__dat__length,__t1747t__s__dat__first,__t1747t__cost,&__t1748t__unsafe_ptr,&__t1748t__dat__pos,&__t1748t__dat__length,&__t1748t__dat__first);
  goto __t_return;
  }
  __t_errcode=get__t552t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1749t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1749t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1750t__s__unsafe_ptr,__t1749t__,8);
  memcpy(&__t1750t__s__dat__pos,__t1749t__+8,8);
  memcpy(&__t1750t__s__dat__length,__t1749t__+16,8);
  memcpy(&__t1750t__s__dat__first,__t1749t__+24,1);
  memcpy(&__t1750t__cost,__t1749t__+25,8);
  raw__t1315t(__t1750t__s__unsafe_ptr,__t1750t__s__dat__pos,__t1750t__s__dat__length,__t1750t__s__dat__first,__t1750t__cost,&__t1751t__unsafe_ptr,&__t1751t__dat__pos,&__t1751t__dat__length,&__t1751t__dat__first);
  ret__unsafe_ptr=__t1751t__unsafe_ptr;
  ret__dat__pos=__t1751t__dat__pos;
  ret__dat__length=__t1751t__dat__length;
  ret__dat__first=__t1751t__dat__first;
  __t1752t=1;
  add__t170t(pos,__t1752t,&__t1753t__);
  pos=__t1753t__;
  while(1){
  raw__t1317t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__t1754t__unsafe_ptr,&__t1754t__dat__pos,&__t1754t__dat__length,&__t1754t__dat__first);
  is_zero__t1321t(__t1754t__unsafe_ptr,__t1754t__dat__pos,__t1754t__dat__length,__t1754t__dat__first,&__t1755t__);
  if(!__t1755t__){
  break;
  }
  __t_errcode=get__t552t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__t1756t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1756t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1757t__s__unsafe_ptr,__t1756t__,8);
  memcpy(&__t1757t__s__dat__pos,__t1756t__+8,8);
  memcpy(&__t1757t__s__dat__length,__t1756t__+16,8);
  memcpy(&__t1757t__s__dat__first,__t1756t__+24,1);
  memcpy(&__t1757t__cost,__t1756t__+25,8);
  raw__t1315t(__t1757t__s__unsafe_ptr,__t1757t__s__dat__pos,__t1757t__s__dat__length,__t1757t__s__dat__first,__t1757t__cost,&__t1758t__unsafe_ptr,&__t1758t__dat__pos,&__t1758t__dat__length,&__t1758t__dat__first);
  ret__unsafe_ptr=__t1758t__unsafe_ptr;
  ret__dat__pos=__t1758t__dat__pos;
  ret__dat__length=__t1758t__dat__length;
  ret__dat__first=__t1758t__dat__first;
  __t1759t=1;
  add__t170t(pos,__t1759t,&__t1760t__);
  pos=__t1760t__;
  }
  __t1748t__unsafe_ptr=ret__unsafe_ptr;
  __t1748t__dat__pos=ret__dat__pos;
  __t1748t__dat__length=ret__dat__length;
  __t1748t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1974t=pos;
  *__t1975t=__t1748t__unsafe_ptr;
  *__t1976t=__t1748t__dat__pos;
  *__t1977t=__t1748t__dat__length;
  *__t1978t=__t1748t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__t1791t(char** __t1979t, uint64_t* __t1980t, uint16_t* __t1981t, uint16_t* __t1982t, uint64_t* __t1983t, char** __t1984t, uint64_t* __t1985t, uint16_t* __t1986t, uint16_t* __t1987t, char** __t1988t, uint64_t* __t1989t, uint16_t* __t1990t, uint16_t* __t1991t) {
  char* buf__buf__unsafe_ptr=*__t1979t;
  uint64_t buf__buf__unsafe_size=*__t1980t;
  uint16_t buf__buf__unsafe_offset=*__t1981t;
  uint16_t buf__buf__unsafe_align=*__t1982t;
  uint64_t buf__pos=*__t1983t;
  char* __t1792t__unsafe_ptr=0;
  uint64_t __t1792t__unsafe_size=0;
  uint16_t __t1792t__unsafe_offset=0;
  uint16_t __t1792t__unsafe_align=0;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__unsafe_size=0;
  uint16_t __t1793t__unsafe_offset=0;
  uint16_t __t1793t__unsafe_align=0;
  uint64_t __t1794t=0;
  char* __t1795t__unsafe_ptr=0;
  uint64_t __t1795t__unsafe_size=0;
  uint16_t __t1795t__unsafe_offset=0;
  uint16_t __t1795t__unsafe_align=0;
  uint64_t __t1796t____t475t=0;
  char __t1796t____t476t__=0;
  char* __t1797t__keys__unsafe_ptr=0;
  uint64_t __t1797t__keys__unsafe_size=0;
  uint16_t __t1797t__keys__unsafe_offset=0;
  uint16_t __t1797t__keys__unsafe_align=0;
  char* __t1797t__values__unsafe_ptr=0;
  uint64_t __t1797t__values__unsafe_size=0;
  uint16_t __t1797t__values__unsafe_offset=0;
  uint16_t __t1797t__values__unsafe_align=0;
  uint64_t __t1798t____t1705t____t475t=0;
  char __t1798t____t1705t____t476t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __t1800t__=0;
  char* __t1802t__unsafe_ptr=0;
  uint64_t __t1802t__dat__pos=0;
  uint64_t __t1802t__dat__length=0;
  char __t1802t__dat__first=0;
  char* __t1803t__unsafe_ptr=0;
  uint64_t __t1803t__dat__pos=0;
  uint64_t __t1803t__dat__length=0;
  char __t1803t__dat__first=0;
  char* __t1805t__=0;
  char* __t1807t__unsafe_ptr=0;
  uint64_t __t1807t__dat__pos=0;
  uint64_t __t1807t__dat__length=0;
  char __t1807t__dat__first=0;
  char* __t1808t__unsafe_ptr=0;
  uint64_t __t1808t__dat__pos=0;
  uint64_t __t1808t__dat__length=0;
  char __t1808t__dat__first=0;
  char* __t1809t__buf__unsafe_ptr=0;
  uint64_t __t1809t__buf__unsafe_size=0;
  uint16_t __t1809t__buf__unsafe_offset=0;
  uint16_t __t1809t__buf__unsafe_align=0;
  uint64_t __t1809t__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __t1810t=0;
  char* __t1811t__unsafe_ptr=0;
  uint64_t __t1811t__dat__pos=0;
  uint64_t __t1811t__dat__length=0;
  char __t1811t__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1783t(&__t1792t__unsafe_ptr,&__t1792t__unsafe_size,&__t1792t__unsafe_offset,&__t1792t__unsafe_align);
  __t1793t__unsafe_ptr=__t1792t__unsafe_ptr;
  __t1793t__unsafe_size=__t1792t__unsafe_size;
  __t1793t__unsafe_offset=__t1792t__unsafe_offset;
  __t1793t__unsafe_align=__t1792t__unsafe_align;
  __t1794t=128;
  __t_errcode=alloc__t473t(&__t1793t__unsafe_ptr,&__t1793t__unsafe_size,&__t1793t__unsafe_offset,&__t1793t__unsafe_align,__t1794t,&__t1795t__unsafe_ptr,&__t1795t__unsafe_size,&__t1795t__unsafe_offset,&__t1795t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=strmap__t1698t(&__t1795t__unsafe_ptr,&__t1795t__unsafe_size,&__t1795t__unsafe_offset,&__t1795t__unsafe_align,&__t1797t__keys__unsafe_ptr,&__t1797t__keys__unsafe_size,&__t1797t__keys__unsafe_offset,&__t1797t__keys__unsafe_align,&__t1797t__values__unsafe_ptr,&__t1797t__values__unsafe_size,&__t1797t__values__unsafe_offset,&__t1797t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutget__t1722t(&__t1797t__keys__unsafe_ptr,&__t1797t__keys__unsafe_size,&__t1797t__keys__unsafe_offset,&__t1797t__keys__unsafe_align,&__t1797t__values__unsafe_ptr,&__t1797t__values__unsafe_size,&__t1797t__values__unsafe_offset,&__t1797t__values__unsafe_align,__t1799t,&__t1800t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t631t(__t1801t,&__t1802t__unsafe_ptr,&__t1802t__dat__pos,&__t1802t__dat__length,&__t1802t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t699t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1802t__unsafe_ptr,__t1802t__dat__pos,__t1802t__dat__length,__t1802t__dat__first,&__t1803t__unsafe_ptr,&__t1803t__dat__pos,&__t1803t__dat__length,&__t1803t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1800t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1800t__,&__t1803t__unsafe_ptr,8);
  memcpy(__t1800t__+8,&__t1803t__dat__pos,8);
  memcpy(__t1800t__+16,&__t1803t__dat__length,8);
  memcpy(__t1800t__+24,&__t1803t__dat__first,1);
  __t_errcode=mutget__t1722t(&__t1797t__keys__unsafe_ptr,&__t1797t__keys__unsafe_size,&__t1797t__keys__unsafe_offset,&__t1797t__keys__unsafe_align,&__t1797t__values__unsafe_ptr,&__t1797t__values__unsafe_size,&__t1797t__values__unsafe_offset,&__t1797t__values__unsafe_align,__t1804t,&__t1805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t631t(__t1806t,&__t1807t__unsafe_ptr,&__t1807t__dat__pos,&__t1807t__dat__length,&__t1807t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t699t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1807t__unsafe_ptr,__t1807t__dat__pos,__t1807t__dat__length,__t1807t__dat__first,&__t1808t__unsafe_ptr,&__t1808t__dat__pos,&__t1808t__dat__length,&__t1808t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1805t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1805t__,&__t1808t__unsafe_ptr,8);
  memcpy(__t1805t__+8,&__t1808t__dat__pos,8);
  memcpy(__t1805t__+16,&__t1808t__dat__length,8);
  memcpy(__t1805t__+24,&__t1808t__dat__first,1);
  bufpos__t675t(&__t1797t__keys__unsafe_ptr,&__t1797t__keys__unsafe_size,&__t1797t__keys__unsafe_offset,&__t1797t__keys__unsafe_align,&__t1809t__buf__unsafe_ptr,&__t1809t__buf__unsafe_size,&__t1809t__buf__unsafe_offset,&__t1809t__buf__unsafe_align,&__t1809t__pos);
  it__pos=__t1809t__pos;
  while(1){
  __t_complain=next__t1740t(__t1797t__keys__unsafe_ptr,__t1797t__keys__unsafe_size,__t1797t__keys__unsafe_offset,__t1797t__keys__unsafe_align,&it__pos,&__t1811t__unsafe_ptr,&__t1811t__dat__pos,&__t1811t__dat__length,&__t1811t__dat__first);
  __t1810t=__t_complain;
  key__unsafe_ptr=__t1811t__unsafe_ptr;
  key__dat__pos=__t1811t__dat__pos;
  key__dat__length=__t1811t__dat__length;
  key__dat__first=__t1811t__dat__first;
  __t1810t=__t1810t==0;
  if(!__t1810t){
  break;
  }
  print__t741t(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__t1797t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1797t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1797t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1797t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1797t__values__unsafe_ptr;
  map__values__unsafe_size=__t1797t__values__unsafe_size;
  map__values__unsafe_offset=__t1797t__values__unsafe_offset;
  map__values__unsafe_align=__t1797t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1798t____t1705t____t475t=0;
  neq__t142t(map__values__unsafe_size,__t1798t____t1705t____t475t,&__t1798t____t1705t____t476t__);
  if(__t1798t____t1705t____t476t__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t466t(&map__keys__unsafe_ptr);
  }
  __t1796t____t475t=0;
  neq__t142t(map__keys__unsafe_size,__t1796t____t475t,&__t1796t____t476t__);
  if(__t1796t____t476t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t466t(&map__values__unsafe_ptr);
  }
  __t_return:
  *__t1979t=buf__buf__unsafe_ptr;
  *__t1980t=buf__buf__unsafe_size;
  *__t1981t=buf__buf__unsafe_offset;
  *__t1982t=buf__buf__unsafe_align;
  *__t1983t=buf__pos;
  *__t1984t=map__keys__unsafe_ptr;
  *__t1985t=map__keys__unsafe_size;
  *__t1986t=map__keys__unsafe_offset;
  *__t1987t=map__keys__unsafe_align;
  *__t1988t=map__values__unsafe_ptr;
  *__t1989t=map__values__unsafe_size;
  *__t1990t=map__values__unsafe_offset;
  *__t1991t=map__values__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1813t(char** __t1992t, uint64_t* __t1993t, uint16_t* __t1994t, uint16_t* __t1995t, char** __t1996t, uint64_t* __t1997t, uint16_t* __t1998t, uint16_t* __t1999t, char** __t2000t, uint64_t* __t2001t, uint16_t* __t2002t, uint16_t* __t2003t, uint64_t* __t2004t) {
  char* __t1816t__unsafe_ptr=0;
  uint64_t __t1816t__unsafe_size=0;
  uint16_t __t1816t__unsafe_offset=0;
  uint16_t __t1816t__unsafe_align=0;
  uint64_t __t1817t=0;
  uint64_t __t1818t__=0;
  char* __t1819t__unsafe_ptr=0;
  uint64_t __t1819t__unsafe_size=0;
  uint16_t __t1819t__unsafe_offset=0;
  uint16_t __t1819t__unsafe_align=0;
  uint64_t __t1820t____t475t=0;
  char __t1820t____t476t__=0;
  char* __t1821t__buf__unsafe_ptr=0;
  uint64_t __t1821t__buf__unsafe_size=0;
  uint16_t __t1821t__buf__unsafe_offset=0;
  uint16_t __t1821t__buf__unsafe_align=0;
  uint64_t __t1821t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1822t__keys__unsafe_ptr=0;
  uint64_t __t1822t__keys__unsafe_size=0;
  uint16_t __t1822t__keys__unsafe_offset=0;
  uint16_t __t1822t__keys__unsafe_align=0;
  char* __t1822t__values__unsafe_ptr=0;
  uint64_t __t1822t__values__unsafe_size=0;
  uint16_t __t1822t__values__unsafe_offset=0;
  uint16_t __t1822t__values__unsafe_align=0;
  uint64_t __t1823t____t1796t____t475t=0;
  char __t1823t____t1796t____t476t__=0;
  uint64_t __t1823t____t1798t____t1705t____t475t=0;
  char __t1823t____t1798t____t1705t____t476t__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1814t(&__t1816t__unsafe_ptr,&__t1816t__unsafe_size,&__t1816t__unsafe_offset,&__t1816t__unsafe_align);
  __t1817t=4;
  KB__t444t(__t1817t,&__t1818t__);
  __t_errcode=alloc__t473t(&__t1816t__unsafe_ptr,&__t1816t__unsafe_size,&__t1816t__unsafe_offset,&__t1816t__unsafe_align,__t1818t__,&__t1819t__unsafe_ptr,&__t1819t__unsafe_size,&__t1819t__unsafe_offset,&__t1819t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t675t(&__t1819t__unsafe_ptr,&__t1819t__unsafe_size,&__t1819t__unsafe_offset,&__t1819t__unsafe_align,&__t1821t__buf__unsafe_ptr,&__t1821t__buf__unsafe_size,&__t1821t__buf__unsafe_offset,&__t1821t__buf__unsafe_align,&__t1821t__pos);
  buf__buf__unsafe_ptr=__t1821t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1821t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1821t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1821t__buf__unsafe_align;
  buf__pos=__t1821t__pos;
  __t_errcode=test__t1791t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__t1822t__keys__unsafe_ptr,&__t1822t__keys__unsafe_size,&__t1822t__keys__unsafe_offset,&__t1822t__keys__unsafe_align,&__t1822t__values__unsafe_ptr,&__t1822t__values__unsafe_size,&__t1822t__values__unsafe_offset,&__t1822t__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  map__keys__unsafe_ptr=__t1822t__keys__unsafe_ptr;
  map__keys__unsafe_size=__t1822t__keys__unsafe_size;
  map__keys__unsafe_offset=__t1822t__keys__unsafe_offset;
  map__keys__unsafe_align=__t1822t__keys__unsafe_align;
  map__values__unsafe_ptr=__t1822t__values__unsafe_ptr;
  map__values__unsafe_size=__t1822t__values__unsafe_size;
  map__values__unsafe_offset=__t1822t__values__unsafe_offset;
  map__values__unsafe_align=__t1822t__values__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1823t____t1798t____t1705t____t475t=0;
  neq__t142t(map__values__unsafe_size,__t1823t____t1798t____t1705t____t475t,&__t1823t____t1798t____t1705t____t476t__);
  if(__t1823t____t1798t____t1705t____t476t__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__t466t(&map__keys__unsafe_ptr);
  }
  __t1823t____t1796t____t475t=0;
  neq__t142t(map__keys__unsafe_size,__t1823t____t1796t____t475t,&__t1823t____t1796t____t476t__);
  if(__t1823t____t1796t____t476t__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__t466t(&map__values__unsafe_ptr);
  }
  __t1820t____t475t=0;
  neq__t142t(buf__buf__unsafe_size,__t1820t____t475t,&__t1820t____t476t__);
  if(__t1820t____t476t__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t466t(&buf__buf__unsafe_ptr);
  }
  __t_return:
  *__t1992t=map__keys__unsafe_ptr;
  *__t1993t=map__keys__unsafe_size;
  *__t1994t=map__keys__unsafe_offset;
  *__t1995t=map__keys__unsafe_align;
  *__t1996t=map__values__unsafe_ptr;
  *__t1997t=map__values__unsafe_size;
  *__t1998t=map__values__unsafe_offset;
  *__t1999t=map__values__unsafe_align;
  *__t2000t=buf__buf__unsafe_ptr;
  *__t2001t=buf__buf__unsafe_size;
  *__t2002t=buf__buf__unsafe_offset;
  *__t2003t=buf__buf__unsafe_align;
  *__t2004t=buf__pos;
  
  return __t_errcode;
}

int raw__t1319t(const char* r, char** __t2005t, uint64_t* __t2006t, uint64_t* __t2007t, char* __t2008t) {
  char* __t1320t__unsafe_ptr=0;
  uint64_t __t1320t__dat__pos=0;
  uint64_t __t1320t__dat__length=0;
  char __t1320t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(r,&__t1320t__unsafe_ptr,&__t1320t__dat__pos,&__t1320t__dat__length,&__t1320t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2005t=__t1320t__unsafe_ptr;
  *__t2006t=__t1320t__dat__pos;
  *__t2007t=__t1320t__dat__length;
  *__t2008t=__t1320t__dat__first;
  
  return __t_errcode;
}

int find__t1363t(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __t2009t) {
  char* __t1364t__unsafe_ptr=0;
  uint64_t __t1364t__dat__pos=0;
  uint64_t __t1364t__dat__length=0;
  char __t1364t__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __t1365t__=0;
  uint64_t __t1366t=0;
  uint64_t __t1367t=0;
  char* __t1368t__=0;
  char* __t1369t__s__unsafe_ptr=0;
  uint64_t __t1369t__s__dat__pos=0;
  uint64_t __t1369t__s__dat__length=0;
  char __t1369t__s__dat__first=0;
  uint64_t __t1369t__cost=0;
  char* __t1370t__unsafe_ptr=0;
  uint64_t __t1370t__dat__pos=0;
  uint64_t __t1370t__dat__length=0;
  char __t1370t__dat__first=0;
  int __t1371t=0;
  int __t1372t__=0;
  uint64_t __t1373t__=0;
  uint64_t n=0;
  uint64_t __t1374t__=0;
  uint64_t pos=0;
  uint64_t __t1375t__from=0;
  uint64_t __t1375t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __t1376t=0;
  uint64_t __t1377t__=0;
  uint64_t i=0;
  uint64_t __t1378t__=0;
  uint64_t __t1379t=0;
  uint64_t idx=0;
  char __t1380t__=0;
  uint64_t __t1381t__=0;
  uint64_t __t1382t=0;
  char __t1383t__=0;
  char* __t1384t__=0;
  char* __t1385t__s__unsafe_ptr=0;
  uint64_t __t1385t__s__dat__pos=0;
  uint64_t __t1385t__s__dat__length=0;
  char __t1385t__s__dat__first=0;
  uint64_t __t1385t__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __t1386t__unsafe_ptr=0;
  uint64_t __t1386t__dat__pos=0;
  uint64_t __t1386t__dat__length=0;
  char __t1386t__dat__first=0;
  char __t1387t__=0;
  char* __t1388t__unsafe_ptr=0;
  uint64_t __t1388t__dat__pos=0;
  uint64_t __t1388t__dat__length=0;
  char __t1388t__dat__first=0;
  char __t1389t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  raw__t1317t(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__t1364t__unsafe_ptr,&__t1364t__dat__pos,&__t1364t__dat__length,&__t1364t__dat__first);
  k__unsafe_ptr=__t1364t__unsafe_ptr;
  k__dat__pos=__t1364t__dat__pos;
  k__dat__length=__t1364t__dat__length;
  k__dat__first=__t1364t__dat__first;
  is_zero__t1321t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__t1365t__);
  if(__t1365t__){
  __t1366t=0;
  goto __t_return;
  }
  __t1367t=0;
  __t_errcode=get__t552t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__t1367t,&__t1368t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1368t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1369t__s__unsafe_ptr,__t1368t__,8);
  memcpy(&__t1369t__s__dat__pos,__t1368t__+8,8);
  memcpy(&__t1369t__s__dat__length,__t1368t__+16,8);
  memcpy(&__t1369t__s__dat__first,__t1368t__+24,1);
  memcpy(&__t1369t__cost,__t1368t__+25,8);
  raw__t1315t(__t1369t__s__unsafe_ptr,__t1369t__s__dat__pos,__t1369t__s__dat__length,__t1369t__s__dat__first,__t1369t__cost,&__t1370t__unsafe_ptr,&__t1370t__dat__pos,&__t1370t__dat__length,&__t1370t__dat__first);
  not__t35t(__t1371t,&__t1372t__);
  len__t559t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__t1373t__);
  n=__t1373t__;
  __t_errcode=hash__t1266t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__t1374t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1374t__;
  range__t436t(n,&__t1375t__from,&__t1375t__to);
  iter__from=__t1375t__from;
  iter__to=__t1375t__to;
  while(1){
  __t_complain=next__t440t(&iter__from,iter__to,&__t1377t__);
  __t1376t=__t_complain;
  i=__t1377t__;
  __t1376t=__t1376t==0;
  if(!__t1376t){
  break;
  }
  add__t170t(pos,i,&__t1378t__);
  __t1379t=__t1378t__;
  idx=__t1379t;
  ge__t319t(idx,n,&__t1380t__);
  if(__t1380t__){
  __t_errcode=sub__t347t(idx,n,&__t1381t__);
  if(__t_errcode){
  goto __t_failure;
  }
  idx=__t1381t__;
  }
  __t1382t=0;
  eq__t118t(idx,__t1382t,&__t1383t__);
  if(__t1383t__){
  continue;
  }
  __t_errcode=get__t552t(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__t1384t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1384t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1385t__s__unsafe_ptr,__t1384t__,8);
  memcpy(&__t1385t__s__dat__pos,__t1384t__+8,8);
  memcpy(&__t1385t__s__dat__length,__t1384t__+16,8);
  memcpy(&__t1385t__s__dat__first,__t1384t__+24,1);
  memcpy(&__t1385t__cost,__t1384t__+25,8);
  entry__s__unsafe_ptr=__t1385t__s__unsafe_ptr;
  entry__s__dat__pos=__t1385t__s__dat__pos;
  entry__s__dat__length=__t1385t__s__dat__length;
  entry__s__dat__first=__t1385t__s__dat__first;
  entry__cost=__t1385t__cost;
  raw__t1315t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1386t__unsafe_ptr,&__t1386t__dat__pos,&__t1386t__dat__length,&__t1386t__dat__first);
  is_zero__t1321t(__t1386t__unsafe_ptr,__t1386t__dat__pos,__t1386t__dat__length,__t1386t__dat__first,&__t1387t__);
  if(__t1387t__){
  continue;
  }
  raw__t1315t(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__t1388t__unsafe_ptr,&__t1388t__dat__pos,&__t1388t__dat__length,&__t1388t__dat__first);
  eq__t784t(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__t1388t__unsafe_ptr,__t1388t__dat__pos,__t1388t__dat__length,__t1388t__dat__first,&__t1389t__);
  if(__t1389t__){
  __t1366t=idx;
  goto __t_return;
  }
  }
  __t_errcode=33;
  goto __t_failure;
  
  __t_failure:__t_return:
  *__t2009t=__t1366t;
  
  return __t_errcode;
}

int get__t1714t(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __t2010t) {
  char* __t1715t__unsafe_ptr=0;
  uint64_t __t1715t__dat__pos=0;
  uint64_t __t1715t__dat__length=0;
  char __t1715t__dat__first=0;
  uint64_t __t1716t__=0;
  char* __t1717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw__t1319t(key,&__t1715t__unsafe_ptr,&__t1715t__dat__pos,&__t1715t__dat__length,&__t1715t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=find__t1363t(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__t1715t__unsafe_ptr,__t1715t__dat__pos,__t1715t__dat__length,__t1715t__dat__first,&__t1716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t552t(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__t1716t__,&__t1717t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2010t=__t1717t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1824t(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __t1825t__=0;
  char* __t1826t____t623t__unsafe_ptr=0;
  uint64_t __t1826t____t623t__dat__pos=0;
  uint64_t __t1826t____t623t__dat__length=0;
  char __t1826t____t623t__dat__first=0;
  char* __t1828t__=0;
  char* __t1829t____t623t__unsafe_ptr=0;
  uint64_t __t1829t____t623t__dat__pos=0;
  uint64_t __t1829t____t623t__dat__length=0;
  char __t1829t____t623t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1714t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1799t,&__t1825t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1825t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1826t____t623t__unsafe_ptr,__t1825t__,8);
  memcpy(&__t1826t____t623t__dat__pos,__t1825t__+8,8);
  memcpy(&__t1826t____t623t__dat__length,__t1825t__+16,8);
  memcpy(&__t1826t____t623t__dat__first,__t1825t__+24,1);
  print__t741t(__t1826t____t623t__unsafe_ptr,__t1826t____t623t__dat__pos,__t1826t____t623t__dat__length,__t1826t____t623t__dat__first);
  __t_errcode=get__t1714t(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__t1804t,&__t1828t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1828t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1829t____t623t__unsafe_ptr,__t1828t__,8);
  memcpy(&__t1829t____t623t__dat__pos,__t1828t__+8,8);
  memcpy(&__t1829t____t623t__dat__length,__t1828t__+16,8);
  memcpy(&__t1829t____t623t__dat__first,__t1828t__+24,1);
  print__t741t(__t1829t____t623t__unsafe_ptr,__t1829t____t623t__dat__pos,__t1829t____t623t__dat__length,__t1829t____t623t__dat__first);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1831t() {
  char* __t1832t__map__keys__unsafe_ptr=0;
  uint64_t __t1832t__map__keys__unsafe_size=0;
  uint16_t __t1832t__map__keys__unsafe_offset=0;
  uint16_t __t1832t__map__keys__unsafe_align=0;
  char* __t1832t__map__values__unsafe_ptr=0;
  uint64_t __t1832t__map__values__unsafe_size=0;
  uint16_t __t1832t__map__values__unsafe_offset=0;
  uint16_t __t1832t__map__values__unsafe_align=0;
  char* __t1832t__buf__buf__unsafe_ptr=0;
  uint64_t __t1832t__buf__buf__unsafe_size=0;
  uint16_t __t1832t__buf__buf__unsafe_offset=0;
  uint16_t __t1832t__buf__buf__unsafe_align=0;
  uint64_t __t1832t__buf__pos=0;
  uint64_t __t1833t____t1820t____t475t=0;
  char __t1833t____t1820t____t476t__=0;
  uint64_t __t1833t____t1823t____t1796t____t475t=0;
  char __t1833t____t1823t____t1796t____t476t__=0;
  uint64_t __t1833t____t1823t____t1798t____t1705t____t475t=0;
  char __t1833t____t1823t____t1798t____t1705t____t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1813t(&__t1832t__map__keys__unsafe_ptr,&__t1832t__map__keys__unsafe_size,&__t1832t__map__keys__unsafe_offset,&__t1832t__map__keys__unsafe_align,&__t1832t__map__values__unsafe_ptr,&__t1832t__map__values__unsafe_size,&__t1832t__map__values__unsafe_offset,&__t1832t__map__values__unsafe_align,&__t1832t__buf__buf__unsafe_ptr,&__t1832t__buf__buf__unsafe_size,&__t1832t__buf__buf__unsafe_offset,&__t1832t__buf__buf__unsafe_align,&__t1832t__buf__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1824t(__t1832t__map__keys__unsafe_ptr,__t1832t__map__keys__unsafe_size,__t1832t__map__keys__unsafe_offset,__t1832t__map__keys__unsafe_align,__t1832t__map__values__unsafe_ptr,__t1832t__map__values__unsafe_size,__t1832t__map__values__unsafe_offset,__t1832t__map__values__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:__t1833t____t1823t____t1798t____t1705t____t475t=0;
  neq__t142t(__t1832t__map__values__unsafe_size,__t1833t____t1823t____t1798t____t1705t____t475t,&__t1833t____t1823t____t1798t____t1705t____t476t__);
  if(__t1833t____t1823t____t1798t____t1705t____t476t__){
  __t1832t__map__values__unsafe_size=0;
  __t1832t__map__values__unsafe_size=__t1832t__map__values__unsafe_size;
  __t1832t__map__keys__unsafe_ptr=__t1832t__map__keys__unsafe_ptr;
  free__t466t(&__t1832t__map__keys__unsafe_ptr);
  }
  __t1833t____t1823t____t1796t____t475t=0;
  neq__t142t(__t1832t__map__keys__unsafe_size,__t1833t____t1823t____t1796t____t475t,&__t1833t____t1823t____t1796t____t476t__);
  if(__t1833t____t1823t____t1796t____t476t__){
  __t1832t__map__keys__unsafe_size=0;
  __t1832t__map__keys__unsafe_size=__t1832t__map__keys__unsafe_size;
  __t1832t__map__values__unsafe_ptr=__t1832t__map__values__unsafe_ptr;
  free__t466t(&__t1832t__map__values__unsafe_ptr);
  }
  __t1833t____t1820t____t475t=0;
  neq__t142t(__t1832t__buf__buf__unsafe_size,__t1833t____t1820t____t475t,&__t1833t____t1820t____t476t__);
  if(__t1833t____t1820t____t476t__){
  __t1832t__buf__buf__unsafe_size=0;
  __t1832t__buf__buf__unsafe_size=__t1832t__buf__buf__unsafe_size;
  __t1832t__buf__buf__unsafe_ptr=__t1832t__buf__buf__unsafe_ptr;
  free__t466t(&__t1832t__buf__buf__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1831t();return 0;}