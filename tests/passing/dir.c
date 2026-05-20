#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1750t="./std";
const char* const __t365t="\n";
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

static inline __attribute__((always_inline)) void closedir__t1669t(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1761t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1761t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1762t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1762t=z;
}

static inline __attribute__((always_inline)) int read__t1670t(const char* path, char** __t1763t) {
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
  *__t1763t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1289t(char** __t1764t, uint64_t* __t1765t, uint16_t* __t1766t, uint16_t* __t1767t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1764t=unsafe_ptr;
  *__t1765t=unsafe_size;
  *__t1766t=unsafe_offset;
  *__t1767t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1768t) {
  int value=0;
  *__t1768t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1769t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1769t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1770t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1770t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1771t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1771t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1772t) {
  char* allocated=*__t1772t;
  if(allocated){
  free(allocated);
  }
  *__t1772t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1773t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1773t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1774t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1774t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1775t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1775t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1776t) {
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
  *__t1776t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1777t, uint64_t* __t1778t, uint16_t* __t1779t, uint16_t* __t1780t, uint64_t size, char** __t1781t, uint64_t* __t1782t, uint16_t* __t1783t, uint16_t* __t1784t) {
  char* buffer__unsafe_ptr=*__t1777t;
  uint64_t buffer__unsafe_size=*__t1778t;
  uint16_t buffer__unsafe_offset=*__t1779t;
  uint16_t buffer__unsafe_align=*__t1780t;
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
  *__t1777t=buffer__unsafe_ptr;
  *__t1778t=buffer__unsafe_size;
  *__t1779t=buffer__unsafe_offset;
  *__t1780t=buffer__unsafe_align;
  *__t1781t=__t486t__unsafe_ptr;
  *__t1782t=__t486t__unsafe_size;
  *__t1783t=__t486t__unsafe_offset;
  *__t1784t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t1680t(char** __t1785t, const char** __t1786t) {
  char* f__unsafe_ptr=*__t1785t;
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
  *__t1785t=f__unsafe_ptr;
  *__t1786t=dirname;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1787t, uint64_t* __t1788t, uint16_t* __t1789t, uint16_t* __t1790t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1787t=unsafe_ptr;
  *__t1788t=unsafe_size;
  *__t1789t=unsafe_offset;
  *__t1790t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1791t) {
  *__t1791t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1792t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1792t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1793t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1793t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1794t) {
  *__t1794t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1795t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1795t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1796t) {
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
  *__t1796t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1797t, uint64_t* __t1798t, uint64_t* __t1799t, char* __t1800t) {
  goto __t_return;
  __t_return:
  *__t1797t=unsafe_ptr;
  *__t1798t=dat__pos;
  *__t1799t=dat__length;
  *__t1800t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1801t, uint64_t* __t1802t, uint64_t* __t1803t, char* __t1804t) {
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
  *__t1801t=__t600t__unsafe_ptr;
  *__t1802t=__t600t__dat__pos;
  *__t1803t=__t600t__dat__length;
  *__t1804t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1805t, uint64_t* __t1806t, uint64_t* __t1807t, char* __t1808t) {
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
  *__t1805t=__t630t__unsafe_ptr;
  *__t1806t=__t630t__dat__pos;
  *__t1807t=__t630t__dat__length;
  *__t1808t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1809t, uint64_t* __t1810t, uint64_t* __t1811t, char* __t1812t) {
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
  *__t1809t=__t638t__unsafe_ptr;
  *__t1810t=__t638t__dat__pos;
  *__t1811t=__t638t__dat__length;
  *__t1812t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t1685t(char** __t1813t, char** __t1814t, uint64_t* __t1815t, uint64_t* __t1816t, char* __t1817t) {
  char* f__unsafe_ptr=*__t1813t;
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
  *__t1813t=f__unsafe_ptr;
  *__t1814t=__t1687t__unsafe_ptr;
  *__t1815t=__t1687t__dat__pos;
  *__t1816t=__t1687t__dat__length;
  *__t1817t=__t1687t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1749t() {
  char* __t1751t__unsafe_ptr=0;
  char* __t1753t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __t1754t__unsafe_ptr=0;
  uint64_t __t1754t__unsafe_size=0;
  uint16_t __t1754t__unsafe_offset=0;
  uint16_t __t1754t__unsafe_align=0;
  uint64_t __t1755t=0;
  char* __t1756t__unsafe_ptr=0;
  uint64_t __t1756t__unsafe_size=0;
  uint16_t __t1756t__unsafe_offset=0;
  uint16_t __t1756t__unsafe_align=0;
  uint64_t __t1757t____t475t=0;
  char __t1757t____t476t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __t1758t=0;
  char* __t1759t__unsafe_ptr=0;
  uint64_t __t1759t__dat__pos=0;
  uint64_t __t1759t__dat__length=0;
  char __t1759t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=read__t1670t(__t1750t,&__t1751t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1753t__unsafe_ptr=__t1751t__unsafe_ptr;
  dir__unsafe_ptr=__t1753t__unsafe_ptr;
  char____t_buffer____buffer__t1289t(&__t1754t__unsafe_ptr,&__t1754t__unsafe_size,&__t1754t__unsafe_offset,&__t1754t__unsafe_align);
  __t1755t=128;
  __t_errcode=alloc__t473t(&__t1754t__unsafe_ptr,&__t1754t__unsafe_size,&__t1754t__unsafe_offset,&__t1754t__unsafe_align,__t1755t,&__t1756t__unsafe_ptr,&__t1756t__unsafe_size,&__t1756t__unsafe_offset,&__t1756t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1756t__unsafe_ptr;
  buf__unsafe_size=__t1756t__unsafe_size;
  buf__unsafe_offset=__t1756t__unsafe_offset;
  buf__unsafe_align=__t1756t__unsafe_align;
  while(1){
  __t_complain=entry__t1685t(&dir__unsafe_ptr,&__t1759t__unsafe_ptr,&__t1759t__dat__pos,&__t1759t__dat__length,&__t1759t__dat__first);
  __t1758t=__t_complain;
  entry__unsafe_ptr=__t1759t__unsafe_ptr;
  entry__dat__pos=__t1759t__dat__pos;
  entry__dat__length=__t1759t__dat__length;
  entry__dat__first=__t1759t__dat__first;
  __t1758t=__t1758t==0;
  if(!__t1758t){
  break;
  }
  print__t741t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __t_failure:__t1757t____t475t=0;
  neq__t142t(__t1756t__unsafe_size,__t1757t____t475t,&__t1757t____t476t__);
  if(__t1757t____t476t__){
  __t1756t__unsafe_size=0;
  __t1756t__unsafe_size=__t1756t__unsafe_size;
  __t1756t__unsafe_ptr=__t1756t__unsafe_ptr;
  free__t466t(&__t1756t__unsafe_ptr);
  }
  closedir__t1669t(__t1751t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1749t();return 0;}