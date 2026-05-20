#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1750t="ls";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1753t, uint64_t* __t1754t, uint16_t* __t1755t, uint16_t* __t1756t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1753t=unsafe_ptr;
  *__t1754t=unsafe_size;
  *__t1755t=unsafe_offset;
  *__t1756t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1757t) {
  *__t1757t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1758t) {
  int value=0;
  *__t1758t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1759t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1759t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1760t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1760t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1761t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1761t=z;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1762t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1762t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1763t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1763t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1764t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1764t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1765t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1765t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1766t) {
  *__t1766t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1767t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1767t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1768t) {
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
  *__t1768t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1769t, uint64_t* __t1770t, uint64_t* __t1771t, char* __t1772t) {
  goto __t_return;
  __t_return:
  *__t1769t=unsafe_ptr;
  *__t1770t=dat__pos;
  *__t1771t=dat__length;
  *__t1772t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1773t, uint64_t* __t1774t, uint64_t* __t1775t, char* __t1776t) {
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
  *__t1773t=__t600t__unsafe_ptr;
  *__t1774t=__t600t__dat__pos;
  *__t1775t=__t600t__dat__length;
  *__t1776t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1777t, uint64_t* __t1778t, uint64_t* __t1779t, char* __t1780t) {
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
  *__t1777t=__t630t__unsafe_ptr;
  *__t1778t=__t630t__dat__pos;
  *__t1779t=__t630t__dat__length;
  *__t1780t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1781t, uint64_t* __t1782t, uint64_t* __t1783t, char* __t1784t) {
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
  *__t1781t=__t638t__unsafe_ptr;
  *__t1782t=__t638t__dat__pos;
  *__t1783t=__t638t__dat__length;
  *__t1784t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1785t) {
  goto __t_return;
  __t_return:
  *__t1785t=s__dat__length;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1786t) {
  char* allocated=*__t1786t;
  if(allocated){
  free(allocated);
  }
  *__t1786t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1787t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1787t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1788t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1788t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1789t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1789t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1790t) {
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
  *__t1790t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1791t, uint64_t* __t1792t, uint16_t* __t1793t, uint16_t* __t1794t, uint64_t size, char** __t1795t, uint64_t* __t1796t, uint16_t* __t1797t, uint16_t* __t1798t) {
  char* buffer__unsafe_ptr=*__t1791t;
  uint64_t buffer__unsafe_size=*__t1792t;
  uint16_t buffer__unsafe_offset=*__t1793t;
  uint16_t buffer__unsafe_align=*__t1794t;
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
  *__t1791t=buffer__unsafe_ptr;
  *__t1792t=buffer__unsafe_size;
  *__t1793t=buffer__unsafe_offset;
  *__t1794t=buffer__unsafe_align;
  *__t1795t=__t486t__unsafe_ptr;
  *__t1796t=__t486t__unsafe_size;
  *__t1797t=__t486t__unsafe_offset;
  *__t1798t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t660t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1799t, uint64_t* __t1800t, uint64_t* __t1801t, char* __t1802t) {
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
  *__t1799t=__t668t__unsafe_ptr;
  *__t1800t=__t668t__dat__pos;
  *__t1801t=__t668t__dat__length;
  *__t1802t=__t668t__dat__first;
  
  return __t_errcode;
}

int temporary_cstr__t669t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1803t, char** __t1804t, uint64_t* __t1805t, uint64_t* __t1806t, char* __t1807t) {
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
  *__t1803t=cstr;
  *__t1804t=str__unsafe_ptr;
  *__t1805t=str__dat__pos;
  *__t1806t=str__dat__length;
  *__t1807t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int safe__t1328t(const char* cmd, const char** __t1808t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1808t=cmd;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t1327t(const char* cmd, int64_t* __t1809t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t1809t=result;
}

static inline __attribute__((always_inline)) void int__t395t(uint64_t x, int64_t* __t1810t) {
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1810t=z;
}

static inline __attribute__((always_inline)) void is_different__t81t(int64_t x, int64_t y, int* __t1811t) {
  int __t82t=0;
  int __t83t__=0;
  not__t35t(__t82t,&__t83t__);
  goto __t_return;
  __t_return:
  *__t1811t=__t83t__;
}

static inline __attribute__((always_inline)) void neq__t131t(int64_t x, int64_t y, char* __t1812t) {
  int __t132t__=0;
  char z=0;
  is_different__t81t(x,y,&__t132t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1812t=z;
}

int system__t1336t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t1337t__cstr=0;
  char* __t1337t__str__unsafe_ptr=0;
  uint64_t __t1337t__str__dat__pos=0;
  uint64_t __t1337t__str__dat__length=0;
  char __t1337t__str__dat__first=0;
  uint64_t __t1338t____t671t____t666t____t475t=0;
  uint64_t __t1338t____t671t____t665t__unsafe_size=0;
  char __t1338t____t671t____t666t____t476t__=0;
  const char* __t1339t__=0;
  int64_t __t1340t__=0;
  int64_t result=0;
  uint64_t __t1341t=0;
  int64_t __t1342t__=0;
  char __t1343t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=temporary_cstr__t669t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t1337t__cstr,&__t1337t__str__unsafe_ptr,&__t1337t__str__dat__pos,&__t1337t__str__dat__length,&__t1337t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=safe__t1328t(__t1337t__cstr,&__t1339t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t1327t(__t1339t__,&__t1340t__);
  result=__t1340t__;
  __t1341t=0;
  int__t395t(__t1341t,&__t1342t__);
  neq__t131t(result,__t1342t__,&__t1343t__);
  if(__t1343t__){
  __t_errcode=37;
  goto __t_failure;
  }
  
  __t_failure:__t1338t____t671t____t666t____t475t=0;
  neq__t142t(__t1338t____t671t____t665t__unsafe_size,__t1338t____t671t____t666t____t475t,&__t1338t____t671t____t666t____t476t__);
  if(__t1338t____t671t____t666t____t476t__){
  __t1338t____t671t____t665t__unsafe_size=0;
  __t1338t____t671t____t665t__unsafe_size=__t1338t____t671t____t665t__unsafe_size;
  __t1337t__str__unsafe_ptr=__t1337t__str__unsafe_ptr;
  free__t466t(&__t1337t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1749t() {
  char* __t1751t__unsafe_ptr=0;
  uint64_t __t1751t__dat__pos=0;
  uint64_t __t1751t__dat__length=0;
  char __t1751t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(__t1750t,&__t1751t__unsafe_ptr,&__t1751t__dat__pos,&__t1751t__dat__length,&__t1751t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=system__t1336t(__t1751t__unsafe_ptr,__t1751t__dat__pos,__t1751t__dat__length,__t1751t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1749t();return 0;}