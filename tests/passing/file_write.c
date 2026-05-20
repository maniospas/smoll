#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1750t="tmp.txt";
const char* const __t1753t="hello world";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1755t, uint64_t* __t1756t, uint16_t* __t1757t, uint16_t* __t1758t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1755t=unsafe_ptr;
  *__t1756t=unsafe_size;
  *__t1757t=unsafe_offset;
  *__t1758t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1759t) {
  *__t1759t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1760t) {
  int value=0;
  *__t1760t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1761t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1761t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1762t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1762t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1763t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1763t=z;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1764t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1764t=z;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1765t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1765t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1766t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1766t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1767t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1767t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1768t) {
  *__t1768t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1769t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1769t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1770t) {
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
  *__t1770t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1771t, uint64_t* __t1772t, uint64_t* __t1773t, char* __t1774t) {
  goto __t_return;
  __t_return:
  *__t1771t=unsafe_ptr;
  *__t1772t=dat__pos;
  *__t1773t=dat__length;
  *__t1774t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1775t, uint64_t* __t1776t, uint64_t* __t1777t, char* __t1778t) {
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
  *__t1775t=__t600t__unsafe_ptr;
  *__t1776t=__t600t__dat__pos;
  *__t1777t=__t600t__dat__length;
  *__t1778t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1779t, uint64_t* __t1780t, uint64_t* __t1781t, char* __t1782t) {
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
  *__t1779t=__t630t__unsafe_ptr;
  *__t1780t=__t630t__dat__pos;
  *__t1781t=__t630t__dat__length;
  *__t1782t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1783t, uint64_t* __t1784t, uint64_t* __t1785t, char* __t1786t) {
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
  *__t1783t=__t638t__unsafe_ptr;
  *__t1784t=__t638t__dat__pos;
  *__t1785t=__t638t__dat__length;
  *__t1786t=__t638t__dat__first;
  
  return __t_errcode;
}

int temporary_cstr__t673t(const char* cstr, const char** __t1787t, char** __t1788t, uint64_t* __t1789t, uint64_t* __t1790t, char* __t1791t) {
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__dat__pos=0;
  uint64_t __t674t__dat__length=0;
  char __t674t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(cstr,&__t674t__unsafe_ptr,&__t674t__dat__pos,&__t674t__dat__length,&__t674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t674t__unsafe_ptr;
  str__dat__pos=__t674t__dat__pos;
  str__dat__length=__t674t__dat__length;
  str__dat__first=__t674t__dat__first;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1787t=cstr;
  *__t1788t=str__unsafe_ptr;
  *__t1789t=str__dat__pos;
  *__t1790t=str__dat__length;
  *__t1791t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1792t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1792t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1793t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1793t=z;
}

static inline __attribute__((always_inline)) int write__t1361t(const char* _path, char** __t1794t) {
  const char* __t1362t__cstr=0;
  char* __t1362t__str__unsafe_ptr=0;
  uint64_t __t1362t__str__dat__pos=0;
  uint64_t __t1362t__str__dat__length=0;
  char __t1362t__str__dat__first=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t1363t__=0;
  char __t1364t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=temporary_cstr__t673t(_path,&__t1362t__cstr,&__t1362t__str__unsafe_ptr,&__t1362t__str__dat__pos,&__t1362t__str__dat__length,&__t1362t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  path=__t1362t__cstr;
  unsafe_ptr=(char*)fopen(path,"wx+");
  exists__t412t(unsafe_ptr,&__t1363t__);
  not__t26t(__t1363t__,&__t1364t__);
  if(__t1364t__){
  __t_errcode=39;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __t_return:
  *__t1794t=unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t1642t(char** __t1795t, const char* text) {
  char* f__unsafe_ptr=*__t1795t;
  char __t1643t__=0;
  char __t1644t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t412t(f__unsafe_ptr,&__t1643t__);
  not__t26t(__t1643t__,&__t1644t__);
  if(__t1644t__){
  __t_errcode=45;
  goto __t_failure;
  }
  fwrite(text,1,strlen(text),(FILE*)f__unsafe_ptr);
  
  __t_failure:*__t1795t=f__unsafe_ptr;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1749t() {
  char* __t1751t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=write__t1361t(__t1750t,&__t1751t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t1751t__unsafe_ptr;
  __t_errcode=print__t1642t(&f__unsafe_ptr,__t1753t);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:if(__t1751t__unsafe_ptr){
  fclose((FILE*)__t1751t__unsafe_ptr);
  __t1751t__unsafe_ptr=0;
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1749t();return 0;}