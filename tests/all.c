#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t1766t="./tests/passing/";
const char* const __t822t="";
const char* const __t1772t="./smoll ";
const char* const __t1784t=".s";
static const char* __t_all_errcodes[52] = {"noerr",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1289t(char** __t1794t, uint64_t* __t1795t, uint16_t* __t1796t, uint16_t* __t1797t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1794t=unsafe_ptr;
  *__t1795t=unsafe_size;
  *__t1796t=unsafe_offset;
  *__t1797t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1798t) {
  int value=0;
  *__t1798t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1799t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1799t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1800t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1800t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1801t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1801t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1802t) {
  char* allocated=*__t1802t;
  if(allocated){
  free(allocated);
  }
  *__t1802t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1803t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1803t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1804t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1804t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1805t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1805t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1806t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1806t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1807t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1807t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1808t) {
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
  *__t1808t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1809t, uint64_t* __t1810t, uint16_t* __t1811t, uint16_t* __t1812t, uint64_t size, char** __t1813t, uint64_t* __t1814t, uint16_t* __t1815t, uint16_t* __t1816t) {
  char* buffer__unsafe_ptr=*__t1809t;
  uint64_t buffer__unsafe_size=*__t1810t;
  uint16_t buffer__unsafe_offset=*__t1811t;
  uint16_t buffer__unsafe_align=*__t1812t;
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
  *__t1809t=buffer__unsafe_ptr;
  *__t1810t=buffer__unsafe_size;
  *__t1811t=buffer__unsafe_offset;
  *__t1812t=buffer__unsafe_align;
  *__t1813t=__t486t__unsafe_ptr;
  *__t1814t=__t486t__unsafe_size;
  *__t1815t=__t486t__unsafe_offset;
  *__t1816t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t675t(char** __t1817t, uint64_t* __t1818t, uint16_t* __t1819t, uint16_t* __t1820t, char** __t1821t, uint64_t* __t1822t, uint16_t* __t1823t, uint16_t* __t1824t, uint64_t* __t1825t) {
  char* buf__unsafe_ptr=*__t1817t;
  uint64_t buf__unsafe_size=*__t1818t;
  uint16_t buf__unsafe_offset=*__t1819t;
  uint16_t buf__unsafe_align=*__t1820t;
  uint64_t __t676t=0;
  uint64_t __t677t=0;
  uint64_t pos=0;
  __t676t=0;
  __t677t=__t676t;
  pos=__t677t;
  goto __t_return;
  __t_return:
  *__t1817t=buf__unsafe_ptr;
  *__t1818t=buf__unsafe_size;
  *__t1819t=buf__unsafe_offset;
  *__t1820t=buf__unsafe_align;
  *__t1821t=buf__unsafe_ptr;
  *__t1822t=buf__unsafe_size;
  *__t1823t=buf__unsafe_offset;
  *__t1824t=buf__unsafe_align;
  *__t1825t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1826t, uint64_t* __t1827t, uint16_t* __t1828t, uint16_t* __t1829t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1826t=unsafe_ptr;
  *__t1827t=unsafe_size;
  *__t1828t=unsafe_offset;
  *__t1829t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1830t) {
  *__t1830t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1831t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1831t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1832t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1832t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1833t) {
  *__t1833t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1834t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1834t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1835t) {
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
  *__t1835t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1836t, uint64_t* __t1837t, uint64_t* __t1838t, char* __t1839t) {
  goto __t_return;
  __t_return:
  *__t1836t=unsafe_ptr;
  *__t1837t=dat__pos;
  *__t1838t=dat__length;
  *__t1839t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1840t, uint64_t* __t1841t, uint64_t* __t1842t, char* __t1843t) {
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
  *__t1840t=__t600t__unsafe_ptr;
  *__t1841t=__t600t__dat__pos;
  *__t1842t=__t600t__dat__length;
  *__t1843t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1844t, uint64_t* __t1845t, uint64_t* __t1846t, char* __t1847t) {
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
  *__t1844t=__t630t__unsafe_ptr;
  *__t1845t=__t630t__dat__pos;
  *__t1846t=__t630t__dat__length;
  *__t1847t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1848t, uint64_t* __t1849t, uint64_t* __t1850t, char* __t1851t) {
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
  *__t1848t=__t638t__unsafe_ptr;
  *__t1849t=__t638t__dat__pos;
  *__t1850t=__t638t__dat__length;
  *__t1851t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1852t) {
  goto __t_return;
  __t_return:
  *__t1852t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1853t) {
  goto __t_return;
  __t_return:
  *__t1853t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1854t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1854t=z;
}

int copy__t708t(char** __t1855t, uint64_t* __t1856t, uint16_t* __t1857t, uint16_t* __t1858t, uint64_t* __t1859t, const char* _other, char** __t1860t, uint64_t* __t1861t, uint64_t* __t1862t, char* __t1863t) {
  char* buf__unsafe_ptr=*__t1855t;
  uint64_t buf__unsafe_size=*__t1856t;
  uint16_t buf__unsafe_offset=*__t1857t;
  uint16_t buf__unsafe_align=*__t1858t;
  uint64_t pos=*__t1859t;
  char* __t709t__unsafe_ptr=0;
  uint64_t __t709t__dat__pos=0;
  uint64_t __t709t__dat__length=0;
  char __t709t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t710t__=0;
  uint64_t __t711t__=0;
  uint64_t next_pos=0;
  uint64_t __t712t__=0;
  char __t713t__=0;
  uint64_t __t714t=0;
  uint64_t __t715t__=0;
  uint64_t prev_pos=0;
  char* __t716t__unsafe_ptr=0;
  uint64_t __t716t__dat__pos=0;
  uint64_t __t716t__dat__length=0;
  char __t716t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(_other,&__t709t__unsafe_ptr,&__t709t__dat__pos,&__t709t__dat__length,&__t709t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t709t__unsafe_ptr;
  other__dat__pos=__t709t__dat__pos;
  other__dat__length=__t709t__dat__length;
  other__dat__first=__t709t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t710t__);
  add__t170t(pos,__t710t__,&__t711t__);
  next_pos=__t711t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t712t__);
  gt__t271t(next_pos,__t712t__,&__t713t__);
  if(__t713t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t714t=0;
  add__t170t(pos,__t714t,&__t715t__);
  prev_pos=__t715t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t716t__unsafe_ptr,&__t716t__dat__pos,&__t716t__dat__length,&__t716t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1855t=buf__unsafe_ptr;
  *__t1856t=buf__unsafe_size;
  *__t1857t=buf__unsafe_offset;
  *__t1858t=buf__unsafe_align;
  *__t1859t=pos;
  *__t1860t=__t716t__unsafe_ptr;
  *__t1861t=__t716t__dat__pos;
  *__t1862t=__t716t__dat__length;
  *__t1863t=__t716t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t1669t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__t1670t(const char* path, char** __t1864t) {
  char* unsafe_ptr=0;
  char __t1672t__=0;
  char __t1673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t412t(unsafe_ptr,&__t1672t__);
  not__t26t(__t1672t__,&__t1673t__);
  if(__t1673t__){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t1669t(unsafe_ptr);
  __t_return:
  *__t1864t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t444t(uint64_t x, uint64_t* __t1865t) {
  uint64_t __t445t=0;
  uint64_t __t446t__=0;
  __t445t=1024;
  mul__t194t(x,__t445t,&__t446t__);
  goto __t_return;
  __t_return:
  *__t1865t=__t446t__;
}

static inline __attribute__((always_inline)) int raw_entry__t1680t(char** __t1866t, const char** __t1867t) {
  char* f__unsafe_ptr=*__t1866t;
  char __t1681t__=0;
  char __t1682t__=0;
  char* de=0;
  char __t1683t__=0;
  char __t1684t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t412t(f__unsafe_ptr,&__t1681t__);
  not__t26t(__t1681t__,&__t1682t__);
  if(__t1682t__){
  __t_errcode=49;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t412t(de,&__t1683t__);
  not__t26t(__t1683t__,&__t1684t__);
  if(__t1684t__){
  __t_errcode=50;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1866t=f__unsafe_ptr;
  *__t1867t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1685t(char** __t1868t, char** __t1869t, uint64_t* __t1870t, uint64_t* __t1871t, char* __t1872t) {
  char* f__unsafe_ptr=*__t1868t;
  const char* __t1686t__=0;
  char* __t1687t__unsafe_ptr=0;
  uint64_t __t1687t__dat__pos=0;
  uint64_t __t1687t__dat__length=0;
  char __t1687t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t1680t(&f__unsafe_ptr,&__t1686t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t631t(__t1686t__,&__t1687t__unsafe_ptr,&__t1687t__dat__pos,&__t1687t__dat__length,&__t1687t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1868t=f__unsafe_ptr;
  *__t1869t=__t1687t__unsafe_ptr;
  *__t1870t=__t1687t__dat__pos;
  *__t1871t=__t1687t__dat__length;
  *__t1872t=__t1687t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t624t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1873t, uint64_t* __t1874t, uint64_t* __t1875t, char* __t1876t) {
  goto __t_return;
  __t_return:
  *__t1873t=other__unsafe_ptr;
  *__t1874t=other__dat__pos;
  *__t1875t=other__dat__length;
  *__t1876t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1877t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1877t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1878t) {
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
  *__t1878t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1879t) {
  uint64_t __t781t__=0;
  char* __t782t__=0;
  add__t170t(s__dat__pos,i,&__t781t__);
  add__t468t(s__unsafe_ptr,__t781t__,&__t782t__);
  goto __t_return;
  __t_return:
  *__t1879t=__t782t__;
}

int slice__t819t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t1880t, uint64_t* __t1881t, uint64_t* __t1882t, char* __t1883t) {
  char* __t820t__unsafe_ptr=0;
  uint64_t __t820t__dat__pos=0;
  uint64_t __t820t__dat__length=0;
  char __t820t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t821t__=0;
  char* __t823t__unsafe_ptr=0;
  uint64_t __t823t__dat__pos=0;
  uint64_t __t823t__dat__length=0;
  char __t823t__dat__first=0;
  char __t824t__=0;
  char __t825t__=0;
  char __t826t=0;
  uint64_t __t827t__=0;
  uint64_t new_length=0;
  uint64_t __t828t=0;
  char __t829t__=0;
  char new_first=0;
  char* __t830t__=0;
  char __t831t__value=0;
  uint64_t __t832t__=0;
  char* __t833t__unsafe_ptr=0;
  uint64_t __t833t__dat__pos=0;
  uint64_t __t833t__dat__length=0;
  char __t833t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t820t__unsafe_ptr,&__t820t__dat__pos,&__t820t__dat__length,&__t820t__dat__first);
  s__unsafe_ptr=__t820t__unsafe_ptr;
  s__dat__pos=__t820t__dat__pos;
  s__dat__length=__t820t__dat__length;
  s__dat__first=__t820t__dat__first;
  eq__t118t(from,to,&__t821t__);
  if(__t821t__){
  __t_errcode=str__t631t(__t822t,&__t823t__unsafe_ptr,&__t823t__dat__pos,&__t823t__dat__length,&__t823t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  lt__t247t(from,to,&__t824t__);
  if(!__t824t__){
  gt__t271t(to,s__dat__length,&__t825t__);
  __t826t=__t825t__;
  }
  if(__t826t){
  __t_errcode=19;
  goto __t_failure;
  }
  __t_errcode=sub__t347t(to,from,&__t827t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t827t__;
  __t828t=0;
  neq__t142t(from,__t828t,&__t829t__);
  if(__t829t__){
  get__t780t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t830t__);
  if(!__t830t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t831t__value,__t830t__,1);
  new_first=__t831t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t170t(s__dat__pos,from,&__t832t__);
  str__t587t(s__unsafe_ptr,__t832t__,new_length,new_first,&__t833t__unsafe_ptr,&__t833t__dat__pos,&__t833t__dat__length,&__t833t__dat__first);
  __t823t__unsafe_ptr=__t833t__unsafe_ptr;
  __t823t__dat__pos=__t833t__dat__pos;
  __t823t__dat__length=__t833t__dat__length;
  __t823t__dat__first=__t833t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1880t=__t823t__unsafe_ptr;
  *__t1881t=__t823t__dat__pos;
  *__t1882t=__t823t__dat__length;
  *__t1883t=__t823t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t643t(char x, char y, char* __t1884t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t1884t=z;
}

static inline __attribute__((always_inline)) void eq__t784t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t1885t) {
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
  *__t1885t=__t788t;
}

static inline __attribute__((always_inline)) int ends_with__t898t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t1886t) {
  char* __t899t__unsafe_ptr=0;
  uint64_t __t899t__dat__pos=0;
  uint64_t __t899t__dat__length=0;
  char __t899t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t900t__unsafe_ptr=0;
  uint64_t __t900t__dat__pos=0;
  uint64_t __t900t__dat__length=0;
  char __t900t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t901t__=0;
  char __t902t=0;
  uint64_t __t903t__=0;
  uint64_t n=0;
  uint64_t __t904t__=0;
  uint64_t __t905t__=0;
  char* __t906t__unsafe_ptr=0;
  uint64_t __t906t__dat__pos=0;
  uint64_t __t906t__dat__length=0;
  char __t906t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t907t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t899t__unsafe_ptr,&__t899t__dat__pos,&__t899t__dat__length,&__t899t__dat__first);
  stack__unsafe_ptr=__t899t__unsafe_ptr;
  stack__dat__pos=__t899t__dat__pos;
  stack__dat__length=__t899t__dat__length;
  stack__dat__first=__t899t__dat__first;
  __t_errcode=str__t631t(_needle,&__t900t__unsafe_ptr,&__t900t__dat__pos,&__t900t__dat__length,&__t900t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t900t__unsafe_ptr;
  needle__dat__pos=__t900t__dat__pos;
  needle__dat__length=__t900t__dat__length;
  needle__dat__first=__t900t__dat__first;
  lt__t247t(stack__dat__length,needle__dat__length,&__t901t__);
  if(__t901t__){
  __t902t=0;
  goto __t_return;
  }
  len__t639t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t903t__);
  n=__t903t__;
  len__t639t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t904t__);
  __t_errcode=sub__t347t(n,__t904t__,&__t905t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t819t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t905t__,n,&__t906t__unsafe_ptr,&__t906t__dat__pos,&__t906t__dat__length,&__t906t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t906t__unsafe_ptr;
  ret__dat__pos=__t906t__dat__pos;
  ret__dat__length=__t906t__dat__length;
  ret__dat__first=__t906t__dat__first;
  eq__t784t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t907t__);
  __t902t=__t907t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1886t=__t902t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t717t(char** __t1887t, uint64_t* __t1888t, uint16_t* __t1889t, uint16_t* __t1890t, uint64_t* __t1891t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1892t, uint64_t* __t1893t, uint64_t* __t1894t, char* __t1895t) {
  char* buf__unsafe_ptr=*__t1887t;
  uint64_t buf__unsafe_size=*__t1888t;
  uint16_t buf__unsafe_offset=*__t1889t;
  uint16_t buf__unsafe_align=*__t1890t;
  uint64_t pos=*__t1891t;
  char* __t718t__unsafe_ptr=0;
  uint64_t __t718t__dat__pos=0;
  uint64_t __t718t__dat__length=0;
  char __t718t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t719t__=0;
  uint64_t __t720t__=0;
  uint64_t null_pos=0;
  uint64_t __t721t=0;
  uint64_t __t722t__=0;
  uint64_t next_pos=0;
  uint64_t __t723t__=0;
  char __t724t__=0;
  char* endpos=0;
  uint64_t __t725t=0;
  uint64_t __t726t__=0;
  uint64_t prev_pos=0;
  char* __t727t__unsafe_ptr=0;
  uint64_t __t727t__dat__pos=0;
  uint64_t __t727t__dat__length=0;
  char __t727t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t718t__unsafe_ptr,&__t718t__dat__pos,&__t718t__dat__length,&__t718t__dat__first);
  other__unsafe_ptr=__t718t__unsafe_ptr;
  other__dat__pos=__t718t__dat__pos;
  other__dat__length=__t718t__dat__length;
  other__dat__first=__t718t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t719t__);
  add__t170t(pos,__t719t__,&__t720t__);
  null_pos=__t720t__;
  __t721t=1;
  add__t170t(null_pos,__t721t,&__t722t__);
  next_pos=__t722t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t723t__);
  gt__t271t(next_pos,__t723t__,&__t724t__);
  if(__t724t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t725t=0;
  add__t170t(pos,__t725t,&__t726t__);
  prev_pos=__t726t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t727t__unsafe_ptr,&__t727t__dat__pos,&__t727t__dat__length,&__t727t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1887t=buf__unsafe_ptr;
  *__t1888t=buf__unsafe_size;
  *__t1889t=buf__unsafe_offset;
  *__t1890t=buf__unsafe_align;
  *__t1891t=pos;
  *__t1892t=__t727t__unsafe_ptr;
  *__t1893t=__t727t__dat__pos;
  *__t1894t=__t727t__dat__length;
  *__t1895t=__t727t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t697t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1896t) {
  uint64_t __t698t__=0;
  add__t170t(s__dat__pos,s__dat__length,&__t698t__);
  goto __t_return;
  __t_return:
  *__t1896t=__t698t__;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1897t) {
  int value=0;
  *__t1897t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1898t) {
  int __t38t__=0;
  true__t11t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1898t=__t38t__;
}

static inline __attribute__((always_inline)) int str__t601t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __t1899t, uint64_t* __t1900t, uint64_t* __t1901t, char* __t1902t) {
  int __t602t=0;
  int __t603t=0;
  int __t604t__=0;
  uint64_t __t605t__=0;
  char __t606t__=0;
  uint64_t __t607t=0;
  uint64_t __t608t=0;
  char* __t609t__=0;
  char __t610t__value=0;
  char* __t611t__unsafe_ptr=0;
  uint64_t __t611t__dat__pos=0;
  uint64_t __t611t__dat__length=0;
  char __t611t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t37t(__t603t,&__t604t__);
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t605t__);
  gt__t271t(length,__t605t__,&__t606t__);
  if(__t606t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t607t=0;
  __t608t=0;
  __t_errcode=get__t552t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t608t,&__t609t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t609t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t610t__value,__t609t__,1);
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t607t,length,__t610t__value,&__t611t__unsafe_ptr,&__t611t__dat__pos,&__t611t__dat__length,&__t611t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1899t=__t611t__unsafe_ptr;
  *__t1900t=__t611t__dat__pos;
  *__t1901t=__t611t__dat__length;
  *__t1902t=__t611t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__t660t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1903t, uint64_t* __t1904t, uint64_t* __t1905t, char* __t1906t) {
  char* __t661t__unsafe_ptr=0;
  uint64_t __t661t__unsafe_size=0;
  uint16_t __t661t__unsafe_offset=0;
  uint16_t __t661t__unsafe_align=0;
  uint64_t __t662t=0;
  uint64_t __t663t__=0;
  uint64_t __t664t__=0;
  char* __t665t__unsafe_ptr=0;
  uint64_t __t665t__unsafe_size=0;
  uint16_t __t665t__unsafe_offset=0;
  uint16_t __t665t__unsafe_align=0;
  uint64_t __t666t____t475t=0;
  char __t666t____t476t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t667t=0;
  char* __t668t__unsafe_ptr=0;
  uint64_t __t668t__dat__pos=0;
  uint64_t __t668t__dat__length=0;
  char __t668t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t591t(&__t661t__unsafe_ptr,&__t661t__unsafe_size,&__t661t__unsafe_offset,&__t661t__unsafe_align);
  __t662t=1;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t663t__);
  add__t170t(__t662t,__t663t__,&__t664t__);
  __t_errcode=alloc__t473t(&__t661t__unsafe_ptr,&__t661t__unsafe_size,&__t661t__unsafe_offset,&__t661t__unsafe_align,__t664t__,&__t665t__unsafe_ptr,&__t665t__unsafe_size,&__t665t__unsafe_offset,&__t665t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t665t__unsafe_ptr;
  buf__unsafe_size=__t665t__unsafe_size;
  buf__unsafe_offset=__t665t__unsafe_offset;
  buf__unsafe_align=__t665t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t667t=0;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t667t,other__dat__length,other__dat__first,&__t668t__unsafe_ptr,&__t668t__dat__pos,&__t668t__dat__length,&__t668t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t666t____t475t=0;
  neq__t142t(__t665t__unsafe_size,__t666t____t475t,&__t666t____t476t__);
  if(__t666t____t476t__){
  __t665t__unsafe_size=0;
  __t665t__unsafe_size=__t665t__unsafe_size;
  __t668t__unsafe_ptr=__t668t__unsafe_ptr;
  free__t466t(&__t668t__unsafe_ptr);
  }
  __t_return:
  *__t1903t=__t668t__unsafe_ptr;
  *__t1904t=__t668t__dat__pos;
  *__t1905t=__t668t__dat__length;
  *__t1906t=__t668t__dat__first;
  
  return __t_errcode;
}

int temporary_cstr__t669t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1907t, char** __t1908t, uint64_t* __t1909t, uint64_t* __t1910t, char* __t1911t) {
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  uint64_t __t671t____t666t____t475t=0;
  uint64_t __t671t____t665t__unsafe_size=0;
  char __t671t____t666t____t476t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t672t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t660t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t670t__unsafe_ptr;
  str__dat__pos=__t670t__dat__pos;
  str__dat__length=__t670t__dat__length;
  str__dat__first=__t670t__dat__first;
  add__t468t(str__unsafe_ptr,str__dat__pos,&__t672t__);
  _ret=__t672t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:__t671t____t666t____t475t=0;
  neq__t142t(__t671t____t665t__unsafe_size,__t671t____t666t____t475t,&__t671t____t666t____t476t__);
  if(__t671t____t666t____t476t__){
  __t671t____t665t__unsafe_size=0;
  __t671t____t665t__unsafe_size=__t671t____t665t__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__t466t(&str__unsafe_ptr);
  }
  __t_return:
  *__t1907t=cstr;
  *__t1908t=str__unsafe_ptr;
  *__t1909t=str__dat__pos;
  *__t1910t=str__dat__length;
  *__t1911t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void popen__t1272t(const char* cmd, char** __t1912t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t1912t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t1271t(char* unsafe_ptr, int64_t* __t1913t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t1913t=status;
}

static inline __attribute__((always_inline)) void int__t395t(uint64_t x, int64_t* __t1914t) {
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1914t=z;
}

static inline __attribute__((always_inline)) void is_different__t81t(int64_t x, int64_t y, int* __t1915t) {
  int __t82t=0;
  int __t83t__=0;
  not__t35t(__t82t,&__t83t__);
  goto __t_return;
  __t_return:
  *__t1915t=__t83t__;
}

static inline __attribute__((always_inline)) void neq__t131t(int64_t x, int64_t y, char* __t1916t) {
  int __t132t__=0;
  char z=0;
  is_different__t81t(x,y,&__t132t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1916t=z;
}

static inline __attribute__((always_inline)) int read__t1273t(const char* cmd, char** __t1917t) {
  char* __t1274t__=0;
  char* unsafe_ptr=0;
  char __t1275t__=0;
  char __t1276t__=0;
  char __t1277t__=0;
  int64_t __t1278t__=0;
  int64_t status=0;
  uint64_t __t1279t=0;
  int64_t __t1280t__=0;
  char __t1281t__=0;
  char __t1282t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t1272t(cmd,&__t1274t__);
  unsafe_ptr=__t1274t__;
  exists__t412t(unsafe_ptr,&__t1275t__);
  not__t26t(__t1275t__,&__t1276t__);
  if(__t1276t__){
  __t_errcode=33;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t412t(unsafe_ptr,&__t1277t__);
  if(__t1277t__){
  pclose__t1271t(unsafe_ptr,&__t1278t__);
  status=__t1278t__;
  unsafe_ptr=0;
  __t1279t=0;
  int__t395t(__t1279t,&__t1280t__);
  neq__t131t(status,__t1280t__,&__t1281t__);
  if(__t1281t__){
  __t_complain=34;
  __t1282t=__t1282t==0;
  }
  }
  __t_return:
  *__t1917t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int read__t1284t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t1918t) {
  const char* __t1285t__cstr=0;
  char* __t1285t__str__unsafe_ptr=0;
  uint64_t __t1285t__str__dat__pos=0;
  uint64_t __t1285t__str__dat__length=0;
  char __t1285t__str__dat__first=0;
  uint64_t __t1286t____t671t____t666t____t475t=0;
  uint64_t __t1286t____t671t____t665t__unsafe_size=0;
  char __t1286t____t671t____t666t____t476t__=0;
  char* __t1287t__unsafe_ptr=0;
  char __t1288t____t1277t__=0;
  int64_t __t1288t____t1278t__=0;
  int64_t __t1288t__status=0;
  uint64_t __t1288t____t1279t=0;
  int64_t __t1288t____t1280t__=0;
  char __t1288t____t1281t__=0;
  char __t1288t____t1282t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=temporary_cstr__t669t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t1285t__cstr,&__t1285t__str__unsafe_ptr,&__t1285t__str__dat__pos,&__t1285t__str__dat__length,&__t1285t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1273t(__t1285t__cstr,&__t1287t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t412t(__t1287t__unsafe_ptr,&__t1288t____t1277t__);
  if(__t1288t____t1277t__){
  pclose__t1271t(__t1287t__unsafe_ptr,&__t1288t____t1278t__);
  __t1288t__status=__t1288t____t1278t__;
  __t1287t__unsafe_ptr=0;
  __t1288t____t1279t=0;
  int__t395t(__t1288t____t1279t,&__t1288t____t1280t__);
  neq__t131t(__t1288t__status,__t1288t____t1280t__,&__t1288t____t1281t__);
  if(__t1288t____t1281t__){
  __t_complain=34;
  __t1288t____t1282t=__t1288t____t1282t==0;
  }
  }
  __t_return:
  *__t1918t=__t1287t__unsafe_ptr;
  __t1286t____t671t____t666t____t475t=0;
  neq__t142t(__t1286t____t671t____t665t__unsafe_size,__t1286t____t671t____t666t____t475t,&__t1286t____t671t____t666t____t476t__);
  if(__t1286t____t671t____t666t____t476t__){
  __t1286t____t671t____t665t__unsafe_size=0;
  __t1286t____t671t____t665t__unsafe_size=__t1286t____t671t____t665t__unsafe_size;
  __t1285t__str__unsafe_ptr=__t1285t__str__unsafe_ptr;
  free__t466t(&__t1285t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1263t(int64_t value, const char** __t1919t) {
  int __t1264t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t365t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t1919t=ret;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__t1757t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __t1758t__unsafe_ptr=0;
  char __t1759t____t1288t____t1277t__=0;
  int64_t __t1759t____t1288t____t1278t__=0;
  int64_t __t1759t____t1288t__status=0;
  uint64_t __t1759t____t1288t____t1279t=0;
  int64_t __t1759t____t1288t____t1280t__=0;
  char __t1759t____t1288t____t1281t__=0;
  char __t1759t____t1288t____t1282t=0;
  char* __t1760t__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __t1761t=0;
  int64_t __t1762t=0;
  int64_t error=0;
  const char* __t1763t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1284t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t1758t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1760t__unsafe_ptr=__t1758t__unsafe_ptr;
  proc__unsafe_ptr=__t1760t__unsafe_ptr;
  exists__t412t(__t1758t__unsafe_ptr,&__t1759t____t1288t____t1277t__);
  if(__t1759t____t1288t____t1277t__){
  pclose__t1271t(__t1758t__unsafe_ptr,&__t1759t____t1288t____t1278t__);
  __t1759t____t1288t__status=__t1759t____t1288t____t1278t__;
  __t1758t__unsafe_ptr=0;
  __t1759t____t1288t____t1279t=0;
  int__t395t(__t1759t____t1288t____t1279t,&__t1759t____t1288t____t1280t__);
  neq__t131t(__t1759t____t1288t__status,__t1759t____t1288t____t1280t__,&__t1759t____t1288t____t1281t__);
  if(__t1759t____t1288t____t1281t__){
  __t_complain=34;
  __t1759t____t1288t____t1282t=__t1759t____t1288t____t1282t==0;
  }
  }
  __t1762t=__t_complain;
  __t1761t=(__t_complain==0);
  __t_complain=0;
  error=__t1762t;
  __t1761t=__t1761t==0;
  if(__t1761t){
  cstr__t1263t(error,&__t1763t__);
  print__t363t(__t1763t__);
  }
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1765t() {
  const char* path=0;
  char* __t1767t__unsafe_ptr=0;
  uint64_t __t1767t__unsafe_size=0;
  uint16_t __t1767t__unsafe_offset=0;
  uint16_t __t1767t__unsafe_align=0;
  uint64_t __t1768t=0;
  char* __t1769t__unsafe_ptr=0;
  uint64_t __t1769t__unsafe_size=0;
  uint16_t __t1769t__unsafe_offset=0;
  uint16_t __t1769t__unsafe_align=0;
  uint64_t __t1770t____t475t=0;
  char __t1770t____t476t__=0;
  char* __t1771t__buf__unsafe_ptr=0;
  uint64_t __t1771t__buf__unsafe_size=0;
  uint16_t __t1771t__buf__unsafe_offset=0;
  uint16_t __t1771t__buf__unsafe_align=0;
  uint64_t __t1771t__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __t1773t__unsafe_ptr=0;
  uint64_t __t1773t__dat__pos=0;
  uint64_t __t1773t__dat__length=0;
  char __t1773t__dat__first=0;
  char* __t1774t__unsafe_ptr=0;
  uint64_t __t1774t__dat__pos=0;
  uint64_t __t1774t__dat__length=0;
  char __t1774t__dat__first=0;
  char* __t1775t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  char* __t1777t__unsafe_ptr=0;
  uint64_t __t1777t__unsafe_size=0;
  uint16_t __t1777t__unsafe_offset=0;
  uint16_t __t1777t__unsafe_align=0;
  uint64_t __t1778t=0;
  uint64_t __t1779t__=0;
  char* __t1780t__unsafe_ptr=0;
  uint64_t __t1780t__unsafe_size=0;
  uint16_t __t1780t__unsafe_offset=0;
  uint16_t __t1780t__unsafe_align=0;
  uint64_t __t1781t____t475t=0;
  char __t1781t____t476t__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  char __t1782t=0;
  char* __t1783t__unsafe_ptr=0;
  uint64_t __t1783t__dat__pos=0;
  uint64_t __t1783t__dat__length=0;
  char __t1783t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t1785t__=0;
  char __t1786t__=0;
  char* __t1787t__buf__unsafe_ptr=0;
  uint64_t __t1787t__buf__unsafe_size=0;
  uint16_t __t1787t__buf__unsafe_offset=0;
  uint16_t __t1787t__buf__unsafe_align=0;
  uint64_t __t1787t__pos=0;
  char* __t1788t__unsafe_ptr=0;
  uint64_t __t1788t__dat__pos=0;
  uint64_t __t1788t__dat__length=0;
  char __t1788t__dat__first=0;
  char* __t1789t__unsafe_ptr=0;
  uint64_t __t1789t__dat__pos=0;
  uint64_t __t1789t__dat__length=0;
  char __t1789t__dat__first=0;
  uint64_t __t1790t__=0;
  char* __t1791t__unsafe_ptr=0;
  uint64_t __t1791t__dat__pos=0;
  uint64_t __t1791t__dat__length=0;
  char __t1791t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  path=__t1766t;
  char____t_buffer____buffer__t1289t(&__t1767t__unsafe_ptr,&__t1767t__unsafe_size,&__t1767t__unsafe_offset,&__t1767t__unsafe_align);
  __t1768t=256;
  __t_errcode=alloc__t473t(&__t1767t__unsafe_ptr,&__t1767t__unsafe_size,&__t1767t__unsafe_offset,&__t1767t__unsafe_align,__t1768t,&__t1769t__unsafe_ptr,&__t1769t__unsafe_size,&__t1769t__unsafe_offset,&__t1769t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t675t(&__t1769t__unsafe_ptr,&__t1769t__unsafe_size,&__t1769t__unsafe_offset,&__t1769t__unsafe_align,&__t1771t__buf__unsafe_ptr,&__t1771t__buf__unsafe_size,&__t1771t__buf__unsafe_offset,&__t1771t__buf__unsafe_align,&__t1771t__pos);
  bp__buf__unsafe_ptr=__t1771t__buf__unsafe_ptr;
  bp__buf__unsafe_size=__t1771t__buf__unsafe_size;
  bp__buf__unsafe_offset=__t1771t__buf__unsafe_offset;
  bp__buf__unsafe_align=__t1771t__buf__unsafe_align;
  bp__pos=__t1771t__pos;
  __t_errcode=copy__t708t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__t1772t,&__t1773t__unsafe_ptr,&__t1773t__dat__pos,&__t1773t__dat__length,&__t1773t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t708t(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__t1774t__unsafe_ptr,&__t1774t__dat__pos,&__t1774t__dat__length,&__t1774t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t1670t(path,&__t1775t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  test_dir__unsafe_ptr=__t1775t__unsafe_ptr;
  char____t_buffer____buffer__t1289t(&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align);
  __t1778t=4;
  KB__t444t(__t1778t,&__t1779t__);
  __t_errcode=alloc__t473t(&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align,__t1779t__,&__t1780t__unsafe_ptr,&__t1780t__unsafe_size,&__t1780t__unsafe_offset,&__t1780t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  proc_buf__unsafe_ptr=__t1780t__unsafe_ptr;
  proc_buf__unsafe_size=__t1780t__unsafe_size;
  proc_buf__unsafe_offset=__t1780t__unsafe_offset;
  proc_buf__unsafe_align=__t1780t__unsafe_align;
  while(1){
  __t_complain=entry__t1685t(&test_dir__unsafe_ptr,&__t1783t__unsafe_ptr,&__t1783t__dat__pos,&__t1783t__dat__length,&__t1783t__dat__first);
  __t1782t=__t_complain;
  entry__unsafe_ptr=__t1783t__unsafe_ptr;
  entry__dat__pos=__t1783t__dat__pos;
  entry__dat__length=__t1783t__dat__length;
  entry__dat__first=__t1783t__dat__first;
  __t1782t=__t1782t==0;
  if(!__t1782t){
  break;
  }
  __t_errcode=ends_with__t898t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t1784t,&__t1785t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t26t(__t1785t__,&__t1786t__);
  if(__t1786t__){
  continue;
  }
  __t1787t__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __t1787t__buf__unsafe_size=bp__buf__unsafe_size;
  __t1787t__buf__unsafe_offset=bp__buf__unsafe_offset;
  __t1787t__buf__unsafe_align=bp__buf__unsafe_align;
  __t1787t__pos=bp__pos;
  str__t624t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t1788t__unsafe_ptr,&__t1788t__dat__pos,&__t1788t__dat__length,&__t1788t__dat__first);
  __t_errcode=copy_null_terminated__t717t(&__t1787t__buf__unsafe_ptr,&__t1787t__buf__unsafe_size,&__t1787t__buf__unsafe_offset,&__t1787t__buf__unsafe_align,&__t1787t__pos,__t1788t__unsafe_ptr,__t1788t__dat__pos,__t1788t__dat__length,__t1788t__dat__first,&__t1789t__unsafe_ptr,&__t1789t__dat__pos,&__t1789t__dat__length,&__t1789t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t697t(__t1789t__unsafe_ptr,__t1789t__dat__pos,__t1789t__dat__length,__t1789t__dat__first,&__t1790t__);
  __t_errcode=str__t601t(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__t1790t__,&__t1791t__unsafe_ptr,&__t1791t__dat__pos,&__t1791t__dat__length,&__t1791t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t1791t__unsafe_ptr;
  command__dat__pos=__t1791t__dat__pos;
  command__dat__length=__t1791t__dat__length;
  command__dat__first=__t1791t__dat__first;
  print__t741t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t1757t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  
  __t_failure:__t1781t____t475t=0;
  neq__t142t(__t1780t__unsafe_size,__t1781t____t475t,&__t1781t____t476t__);
  if(__t1781t____t476t__){
  __t1780t__unsafe_size=0;
  __t1780t__unsafe_size=__t1780t__unsafe_size;
  __t1780t__unsafe_ptr=__t1780t__unsafe_ptr;
  free__t466t(&__t1780t__unsafe_ptr);
  }
  closedir__t1669t(__t1775t__unsafe_ptr);
  __t1770t____t475t=0;
  neq__t142t(__t1769t__unsafe_size,__t1770t____t475t,&__t1770t____t476t__);
  if(__t1770t____t476t__){
  __t1769t__unsafe_size=0;
  __t1769t__unsafe_size=__t1769t__unsafe_size;
  __t1769t__unsafe_ptr=__t1769t__unsafe_ptr;
  free__t466t(&__t1769t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1765t();return 0;}