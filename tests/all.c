#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1684v="./tests/passing/";
const char* const __temp794v="";
const char* const __temp364v="\n";
const char* const __temp1700v=".s";
const char* const __temp1689v="./smoll ";
static const char* __temp_all_errcodes[46] = {"noerr",
"error",
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
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1710v, uint64_t* __temp1711v, uint64_t* __temp1712v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1710v=unsafe_ptr;
  *__temp1711v=unsafe_size;
  *__temp1712v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1713v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1713v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1714v) {
  char* allocated=*__temp1714v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1714v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1715v) {
  int value=0;
  *__temp1715v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1716v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1716v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1717v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1717v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1718v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1718v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1719v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1720v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1720v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1721v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1721v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1722v, uint64_t* __temp1723v, uint64_t* __temp1724v, uint64_t size, char** __temp1725v, uint64_t* __temp1726v, uint64_t* __temp1727v) {
  char* buffer__unsafe_ptr=*__temp1722v;
  uint64_t buffer__unsafe_size=*__temp1723v;
  uint64_t buffer__unsafe_align=*__temp1724v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1722v=buffer__unsafe_ptr;
  *__temp1723v=buffer__unsafe_size;
  *__temp1724v=buffer__unsafe_align;
  *__temp1725v=buffer__unsafe_ptr;
  *__temp1726v=buffer__unsafe_size;
  *__temp1727v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp537v(uint64_t size, char** __temp1728v, uint64_t* __temp1729v, uint64_t* __temp1730v) {
  char* __temp540v__unsafe_ptr=0;
  uint64_t __temp540v__unsafe_size=0;
  uint64_t __temp540v__unsafe_align=0;
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char __temp543v____temp468v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp540v__unsafe_ptr,&__temp540v__unsafe_size,&__temp540v__unsafe_align);
  __temp541v__unsafe_ptr=__temp540v__unsafe_ptr;
  __temp541v__unsafe_size=__temp540v__unsafe_size;
  __temp541v__unsafe_align=__temp540v__unsafe_align;
  __temp_errcode=alloc__temp466v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align,size,&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp542v__unsafe_ptr,&__temp543v____temp468v__);
  if(__temp543v____temp468v__){
  __temp542v__unsafe_size=0;
  __temp542v__unsafe_size=__temp542v__unsafe_size;
  free__temp460v(&__temp542v__unsafe_ptr);
  }
  __temp_return:
  *__temp1728v=__temp542v__unsafe_ptr;
  *__temp1729v=__temp542v__unsafe_size;
  *__temp1730v=__temp542v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp651v(char** __temp1731v, uint64_t* __temp1732v, uint64_t* __temp1733v, char** __temp1734v, uint64_t* __temp1735v, uint64_t* __temp1736v, uint64_t* __temp1737v) {
  char* buf__unsafe_ptr=*__temp1731v;
  uint64_t buf__unsafe_size=*__temp1732v;
  uint64_t buf__unsafe_align=*__temp1733v;
  uint64_t __temp652v=0;
  uint64_t __temp653v=0;
  uint64_t pos=0;
  __temp652v=0;
  __temp653v=__temp652v;
  pos=__temp653v;
  goto __temp_return;
  __temp_return:
  *__temp1731v=buf__unsafe_ptr;
  *__temp1732v=buf__unsafe_size;
  *__temp1733v=buf__unsafe_align;
  *__temp1734v=buf__unsafe_ptr;
  *__temp1735v=buf__unsafe_size;
  *__temp1736v=buf__unsafe_align;
  *__temp1737v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1738v) {
  *__temp1738v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1739v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1739v=z;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1740v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1741v) {
  *__temp1741v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1742v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1742v=__temp463v__;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1743v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1743v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1744v, uint64_t* __temp1745v, uint64_t* __temp1746v, char* __temp1747v) {
  goto __temp_return;
  __temp_return:
  *__temp1744v=unsafe_ptr;
  *__temp1745v=dat__pos;
  *__temp1746v=dat__length;
  *__temp1747v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1748v, uint64_t* __temp1749v, uint64_t* __temp1750v, char* __temp1751v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1748v=__temp579v__unsafe_ptr;
  *__temp1749v=__temp579v__dat__pos;
  *__temp1750v=__temp579v__dat__length;
  *__temp1751v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1752v, uint64_t* __temp1753v, uint64_t* __temp1754v, char* __temp1755v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1752v=__temp609v__unsafe_ptr;
  *__temp1753v=__temp609v__dat__pos;
  *__temp1754v=__temp609v__dat__length;
  *__temp1755v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1756v, uint64_t* __temp1757v, uint64_t* __temp1758v, char* __temp1759v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1756v=__temp617v__unsafe_ptr;
  *__temp1757v=__temp617v__dat__pos;
  *__temp1758v=__temp617v__dat__length;
  *__temp1759v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1760v) {
  goto __temp_return;
  __temp_return:
  *__temp1760v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1761v) {
  goto __temp_return;
  __temp_return:
  *__temp1761v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1762v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1762v=z;
}

int copy__temp682v(char** __temp1763v, uint64_t* __temp1764v, uint64_t* __temp1765v, uint64_t* __temp1766v, const char* _other, char** __temp1767v, uint64_t* __temp1768v, uint64_t* __temp1769v, char* __temp1770v) {
  char* buf__unsafe_ptr=*__temp1763v;
  uint64_t buf__unsafe_size=*__temp1764v;
  uint64_t buf__unsafe_align=*__temp1765v;
  uint64_t pos=*__temp1766v;
  char* __temp683v__unsafe_ptr=0;
  uint64_t __temp683v__dat__pos=0;
  uint64_t __temp683v__dat__length=0;
  char __temp683v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp684v__=0;
  uint64_t __temp685v__=0;
  uint64_t next_pos=0;
  uint64_t __temp686v__=0;
  char __temp687v__=0;
  uint64_t __temp688v=0;
  uint64_t __temp689v__=0;
  uint64_t prev_pos=0;
  char* __temp690v__unsafe_ptr=0;
  uint64_t __temp690v__dat__pos=0;
  uint64_t __temp690v__dat__length=0;
  char __temp690v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(_other,&__temp683v__unsafe_ptr,&__temp683v__dat__pos,&__temp683v__dat__length,&__temp683v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp683v__unsafe_ptr;
  other__dat__pos=__temp683v__dat__pos;
  other__dat__length=__temp683v__dat__length;
  other__dat__first=__temp683v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp684v__);
  add__temp169v(pos,__temp684v__,&__temp685v__);
  next_pos=__temp685v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp686v__);
  gt__temp270v(next_pos,__temp686v__,&__temp687v__);
  if(__temp687v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp688v=0;
  add__temp169v(pos,__temp688v,&__temp689v__);
  prev_pos=__temp689v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp690v__unsafe_ptr,&__temp690v__dat__pos,&__temp690v__dat__length,&__temp690v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1763v=buf__unsafe_ptr;
  *__temp1764v=buf__unsafe_size;
  *__temp1765v=buf__unsafe_align;
  *__temp1766v=pos;
  *__temp1767v=__temp690v__unsafe_ptr;
  *__temp1768v=__temp690v__dat__pos;
  *__temp1769v=__temp690v__dat__length;
  *__temp1770v=__temp690v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp650v(const char* other, const char** __temp1771v) {
  goto __temp_return;
  __temp_return:
  *__temp1771v=other;
}

static inline __attribute__((always_inline)) void not__temp25v(char value, char* __temp1772v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) int read__temp1650v(const char* _path, char** __temp1773v) {
  const char* __temp1651v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1652v__=0;
  char __temp1653v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp650v(_path,&__temp1651v__);
  path=__temp1651v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp411v(unsafe_ptr,&__temp1652v__);
  not__temp25v(__temp1652v__,&__temp1653v__);
  if(__temp1653v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1773v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp442v(uint64_t x, uint64_t* __temp1774v) {
  uint64_t __temp443v=0;
  uint64_t __temp444v__=0;
  __temp443v=1024;
  mul__temp193v(x,__temp443v,&__temp444v__);
  goto __temp_return;
  __temp_return:
  *__temp1774v=__temp444v__;
}

static inline __attribute__((always_inline)) int entry__temp1661v(char** __temp1775v, char** __temp1776v, uint64_t* __temp1777v, uint64_t* __temp1778v, char* __temp1779v) {
  char* f__unsafe_ptr=*__temp1775v;
  char __temp1662v__=0;
  char __temp1663v__=0;
  char* de=0;
  char __temp1664v__=0;
  char __temp1665v__=0;
  const char* dirname=0;
  char* __temp1666v__unsafe_ptr=0;
  uint64_t __temp1666v__dat__pos=0;
  uint64_t __temp1666v__dat__length=0;
  char __temp1666v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp411v(f__unsafe_ptr,&__temp1662v__);
  not__temp25v(__temp1662v__,&__temp1663v__);
  if(__temp1663v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp411v(de,&__temp1664v__);
  not__temp25v(__temp1664v__,&__temp1665v__);
  if(__temp1665v__){
  __temp_errcode=45;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp610v(dirname,&__temp1666v__unsafe_ptr,&__temp1666v__dat__pos,&__temp1666v__dat__length,&__temp1666v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1775v=f__unsafe_ptr;
  *__temp1776v=__temp1666v__unsafe_ptr;
  *__temp1777v=__temp1666v__dat__pos;
  *__temp1778v=__temp1666v__dat__length;
  *__temp1779v=__temp1666v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp603v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1780v, uint64_t* __temp1781v, uint64_t* __temp1782v, char* __temp1783v) {
  goto __temp_return;
  __temp_return:
  *__temp1780v=other__unsafe_ptr;
  *__temp1781v=other__dat__pos;
  *__temp1782v=other__dat__length;
  *__temp1783v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1784v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp1785v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1785v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp752v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1786v) {
  uint64_t __temp753v__=0;
  char* __temp754v__=0;
  add__temp169v(s__dat__pos,i,&__temp753v__);
  add__temp462v(s__unsafe_ptr,__temp753v__,&__temp754v__);
  goto __temp_return;
  __temp_return:
  *__temp1786v=__temp754v__;
}

int slice__temp791v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1787v, uint64_t* __temp1788v, uint64_t* __temp1789v, char* __temp1790v) {
  char* __temp792v__unsafe_ptr=0;
  uint64_t __temp792v__dat__pos=0;
  uint64_t __temp792v__dat__length=0;
  char __temp792v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp793v__=0;
  char* __temp795v__unsafe_ptr=0;
  uint64_t __temp795v__dat__pos=0;
  uint64_t __temp795v__dat__length=0;
  char __temp795v__dat__first=0;
  char __temp796v__=0;
  char __temp797v__=0;
  char __temp798v=0;
  uint64_t __temp799v__=0;
  uint64_t new_length=0;
  uint64_t __temp800v=0;
  char __temp801v__=0;
  char new_first=0;
  char* __temp802v__=0;
  char __temp803v__value=0;
  uint64_t __temp804v__=0;
  char* __temp805v__unsafe_ptr=0;
  uint64_t __temp805v__dat__pos=0;
  uint64_t __temp805v__dat__length=0;
  char __temp805v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp792v__unsafe_ptr,&__temp792v__dat__pos,&__temp792v__dat__length,&__temp792v__dat__first);
  s__unsafe_ptr=__temp792v__unsafe_ptr;
  s__dat__pos=__temp792v__dat__pos;
  s__dat__length=__temp792v__dat__length;
  s__dat__first=__temp792v__dat__first;
  eq__temp117v(from,to,&__temp793v__);
  if(__temp793v__){
  __temp_errcode=str__temp610v(__temp794v,&__temp795v__unsafe_ptr,&__temp795v__dat__pos,&__temp795v__dat__length,&__temp795v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp246v(from,to,&__temp796v__);
  if(!__temp796v__){
  gt__temp270v(to,s__dat__length,&__temp797v__);
  __temp798v=__temp797v__;
  }
  if(__temp798v){
  __temp_errcode=16;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp346v(to,from,&__temp799v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp799v__;
  __temp800v=0;
  neq__temp141v(from,__temp800v,&__temp801v__);
  if(__temp801v__){
  get__temp752v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp802v__);
  if(!__temp802v__){
  goto __temp_failure;
  }
  memcpy(&__temp803v__value,__temp802v__,1);
  new_first=__temp803v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp169v(s__dat__pos,from,&__temp804v__);
  str__temp574v(s__unsafe_ptr,__temp804v__,new_length,new_first,&__temp805v__unsafe_ptr,&__temp805v__dat__pos,&__temp805v__dat__length,&__temp805v__dat__first);
  __temp795v__unsafe_ptr=__temp805v__unsafe_ptr;
  __temp795v__dat__pos=__temp805v__dat__pos;
  __temp795v__dat__length=__temp805v__dat__length;
  __temp795v__dat__first=__temp805v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1787v=__temp795v__unsafe_ptr;
  *__temp1788v=__temp795v__dat__pos;
  *__temp1789v=__temp795v__dat__length;
  *__temp1790v=__temp795v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp622v(char x, char y, char* __temp1791v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1791v=z;
}

static inline __attribute__((always_inline)) void eq__temp756v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1792v) {
  uint64_t __temp757v__=0;
  uint64_t n=0;
  uint64_t __temp758v__=0;
  char __temp759v__=0;
  char __temp760v=0;
  char __temp761v__=0;
  char __temp762v=0;
  char z=0;
  len__temp618v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp757v__);
  n=__temp757v__;
  len__temp618v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp758v__);
  neq__temp141v(n,__temp758v__,&__temp759v__);
  if(__temp759v__){
  __temp760v=0;
  goto __temp_return;
  }
  neq__temp622v(x__dat__first,y__dat__first,&__temp761v__);
  if(__temp761v__){
  __temp762v=0;
  __temp760v=__temp762v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp760v=z;
  goto __temp_return;
  __temp_return:
  *__temp1792v=__temp760v;
}

static inline __attribute__((always_inline)) int ends_with__temp860v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1793v) {
  char* __temp861v__unsafe_ptr=0;
  uint64_t __temp861v__dat__pos=0;
  uint64_t __temp861v__dat__length=0;
  char __temp861v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp862v__unsafe_ptr=0;
  uint64_t __temp862v__dat__pos=0;
  uint64_t __temp862v__dat__length=0;
  char __temp862v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp863v__=0;
  char __temp864v=0;
  uint64_t __temp865v__=0;
  uint64_t n=0;
  uint64_t __temp866v__=0;
  uint64_t __temp867v__=0;
  char* __temp868v__unsafe_ptr=0;
  uint64_t __temp868v__dat__pos=0;
  uint64_t __temp868v__dat__length=0;
  char __temp868v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp869v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp861v__unsafe_ptr,&__temp861v__dat__pos,&__temp861v__dat__length,&__temp861v__dat__first);
  stack__unsafe_ptr=__temp861v__unsafe_ptr;
  stack__dat__pos=__temp861v__dat__pos;
  stack__dat__length=__temp861v__dat__length;
  stack__dat__first=__temp861v__dat__first;
  __temp_errcode=str__temp610v(_needle,&__temp862v__unsafe_ptr,&__temp862v__dat__pos,&__temp862v__dat__length,&__temp862v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp862v__unsafe_ptr;
  needle__dat__pos=__temp862v__dat__pos;
  needle__dat__length=__temp862v__dat__length;
  needle__dat__first=__temp862v__dat__first;
  lt__temp246v(stack__dat__length,needle__dat__length,&__temp863v__);
  if(__temp863v__){
  __temp864v=0;
  goto __temp_return;
  }
  len__temp618v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp865v__);
  n=__temp865v__;
  len__temp618v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp866v__);
  __temp_errcode=sub__temp346v(n,__temp866v__,&__temp867v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp791v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp867v__,n,&__temp868v__unsafe_ptr,&__temp868v__dat__pos,&__temp868v__dat__length,&__temp868v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp868v__unsafe_ptr;
  ret__dat__pos=__temp868v__dat__pos;
  ret__dat__length=__temp868v__dat__length;
  ret__dat__first=__temp868v__dat__first;
  eq__temp756v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp869v__);
  __temp864v=__temp869v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1793v=__temp864v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp691v(char** __temp1794v, uint64_t* __temp1795v, uint64_t* __temp1796v, uint64_t* __temp1797v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1798v, uint64_t* __temp1799v, uint64_t* __temp1800v, char* __temp1801v) {
  char* buf__unsafe_ptr=*__temp1794v;
  uint64_t buf__unsafe_size=*__temp1795v;
  uint64_t buf__unsafe_align=*__temp1796v;
  uint64_t pos=*__temp1797v;
  char* __temp692v__unsafe_ptr=0;
  uint64_t __temp692v__dat__pos=0;
  uint64_t __temp692v__dat__length=0;
  char __temp692v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp693v__=0;
  uint64_t __temp694v__=0;
  uint64_t null_pos=0;
  uint64_t __temp695v=0;
  uint64_t __temp696v__=0;
  uint64_t next_pos=0;
  uint64_t __temp697v__=0;
  char __temp698v__=0;
  uint64_t __temp699v=0;
  uint64_t __temp700v__=0;
  uint64_t prev_pos=0;
  char* __temp701v__unsafe_ptr=0;
  uint64_t __temp701v__dat__pos=0;
  uint64_t __temp701v__dat__length=0;
  char __temp701v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp603v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp692v__unsafe_ptr,&__temp692v__dat__pos,&__temp692v__dat__length,&__temp692v__dat__first);
  other__unsafe_ptr=__temp692v__unsafe_ptr;
  other__dat__pos=__temp692v__dat__pos;
  other__dat__length=__temp692v__dat__length;
  other__dat__first=__temp692v__dat__first;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp693v__);
  add__temp169v(pos,__temp693v__,&__temp694v__);
  null_pos=__temp694v__;
  __temp695v=1;
  add__temp169v(null_pos,__temp695v,&__temp696v__);
  next_pos=__temp696v__;
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp697v__);
  gt__temp270v(next_pos,__temp697v__,&__temp698v__);
  if(__temp698v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[null_pos]=0;
  __temp699v=0;
  add__temp169v(pos,__temp699v,&__temp700v__);
  prev_pos=__temp700v__;
  pos=next_pos;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1794v=buf__unsafe_ptr;
  *__temp1795v=buf__unsafe_size;
  *__temp1796v=buf__unsafe_align;
  *__temp1797v=pos;
  *__temp1798v=__temp701v__unsafe_ptr;
  *__temp1799v=__temp701v__dat__pos;
  *__temp1800v=__temp701v__dat__length;
  *__temp1801v=__temp701v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp671v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1802v) {
  uint64_t __temp672v__=0;
  add__temp169v(s__dat__pos,s__dat__length,&__temp672v__);
  goto __temp_return;
  __temp_return:
  *__temp1802v=__temp672v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1803v) {
  int value=0;
  *__temp1803v=value;
}

static inline __attribute__((always_inline)) void not__temp36v(int __temp_anon0, int* __temp1804v) {
  int __temp37v__=0;
  true__temp11v(&__temp37v__);
  goto __temp_return;
  __temp_return:
  *__temp1804v=__temp37v__;
}

static inline __attribute__((always_inline)) int str__temp580v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1805v, uint64_t* __temp1806v, uint64_t* __temp1807v, char* __temp1808v) {
  int __temp581v=0;
  int __temp582v=0;
  int __temp583v__=0;
  uint64_t __temp584v__=0;
  char __temp585v__=0;
  uint64_t __temp586v=0;
  uint64_t __temp587v=0;
  char* __temp588v__=0;
  char __temp589v__value=0;
  char* __temp590v__unsafe_ptr=0;
  uint64_t __temp590v__dat__pos=0;
  uint64_t __temp590v__dat__length=0;
  char __temp590v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp36v(__temp582v,&__temp583v__);
  len__temp536v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp584v__);
  gt__temp270v(length,__temp584v__,&__temp585v__);
  if(__temp585v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  __temp586v=0;
  __temp587v=0;
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp587v,&__temp588v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp588v__){
  goto __temp_failure;
  }
  memcpy(&__temp589v__value,__temp588v__,1);
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp586v,length,__temp589v__value,&__temp590v__unsafe_ptr,&__temp590v__dat__pos,&__temp590v__dat__length,&__temp590v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1805v=__temp590v__unsafe_ptr;
  *__temp1806v=__temp590v__dat__pos;
  *__temp1807v=__temp590v__dat__length;
  *__temp1808v=__temp590v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp637v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1809v, uint64_t* __temp1810v, uint64_t* __temp1811v, char* __temp1812v) {
  uint64_t __temp638v=0;
  uint64_t __temp639v__=0;
  uint64_t __temp640v__=0;
  char* __temp641v__unsafe_ptr=0;
  uint64_t __temp641v__unsafe_size=0;
  uint64_t __temp641v__unsafe_align=0;
  char __temp642v____temp543v____temp468v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp643v=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp638v=1;
  len__temp618v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp639v__);
  add__temp169v(__temp638v,__temp639v__,&__temp640v__);
  __temp_errcode=alloc__temp537v(__temp640v__,&__temp641v__unsafe_ptr,&__temp641v__unsafe_size,&__temp641v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp641v__unsafe_ptr;
  buf__unsafe_size=__temp641v__unsafe_size;
  buf__unsafe_align=__temp641v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp643v=0;
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp643v,other__dat__length,other__dat__first,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp411v(__temp644v__unsafe_ptr,&__temp642v____temp543v____temp468v__);
  if(__temp642v____temp543v____temp468v__){
  __temp641v__unsafe_size=0;
  __temp641v__unsafe_size=__temp641v__unsafe_size;
  free__temp460v(&__temp644v__unsafe_ptr);
  }
  __temp_return:
  *__temp1809v=__temp644v__unsafe_ptr;
  *__temp1810v=__temp644v__dat__pos;
  *__temp1811v=__temp644v__dat__length;
  *__temp1812v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp572v(const char* c, char* __temp1813v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1813v=z;
}

int unsafe_temporary_cstr__temp645v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1814v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp646v__unsafe_ptr=0;
  uint64_t __temp646v__dat__pos=0;
  uint64_t __temp646v__dat__length=0;
  char __temp646v__dat__first=0;
  char __temp647v____temp642v____temp543v____temp468v__=0;
  uint64_t __temp647v____temp641v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp648v__=0;
  char __temp649v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp637v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp646v__unsafe_ptr,&__temp646v__dat__pos,&__temp646v__dat__length,&__temp646v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp646v__unsafe_ptr;
  c__dat__pos=__temp646v__dat__pos;
  c__dat__length=__temp646v__dat__length;
  c__dat__first=__temp646v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp572v(ret,&__temp648v__);
  not__temp25v(__temp648v__,&__temp649v__);
  if(__temp649v__){
  exists__temp411v(__temp646v__unsafe_ptr,&__temp647v____temp642v____temp543v____temp468v__);
  if(__temp647v____temp642v____temp543v____temp468v__){
  __temp647v____temp641v__unsafe_size=0;
  __temp647v____temp641v__unsafe_size=__temp647v____temp641v__unsafe_size;
  free__temp460v(&__temp646v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1814v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp394v(uint64_t x, int64_t* __temp1815v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1815v=z;
}

static inline __attribute__((always_inline)) void is_different__temp80v(int64_t x, int64_t y, int* __temp1816v) {
  int __temp81v=0;
  int __temp82v__=0;
  not__temp34v(__temp81v,&__temp82v__);
  goto __temp_return;
  __temp_return:
  *__temp1816v=__temp82v__;
}

static inline __attribute__((always_inline)) void neq__temp130v(int64_t x, int64_t y, char* __temp1817v) {
  int __temp131v__=0;
  char z=0;
  is_different__temp80v(x,y,&__temp131v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1817v=z;
}

static inline __attribute__((always_inline)) int read__temp1224v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first, char** __temp1818v) {
  const char* __temp1225v__=0;
  char __temp1226v____temp648v__=0;
  char __temp1226v____temp649v__=0;
  char* __temp1226v____temp646v__unsafe_ptr=0;
  char __temp1226v____temp647v____temp642v____temp543v____temp468v__=0;
  uint64_t __temp1226v____temp647v____temp641v__unsafe_size=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1227v__=0;
  char __temp1228v__=0;
  char __temp1229v__=0;
  int64_t status=0;
  uint64_t __temp1230v=0;
  int64_t __temp1231v__=0;
  char __temp1232v__=0;
  char __temp1233v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp645v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1225v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1225v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp411v(unsafe_ptr,&__temp1227v__);
  not__temp25v(__temp1227v__,&__temp1228v__);
  if(__temp1228v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp411v(unsafe_ptr,&__temp1229v__);
  if(__temp1229v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp1230v=0;
  int__temp394v(__temp1230v,&__temp1231v__);
  neq__temp130v(status,__temp1231v__,&__temp1232v__);
  if(__temp1232v__){
  __temp_complain=30;
  __temp1233v=__temp1233v==0;
  }
  __temp_return:
  *__temp1818v=unsafe_ptr;
  exists__temp572v(__temp1225v__,&__temp1226v____temp648v__);
  not__temp25v(__temp1226v____temp648v__,&__temp1226v____temp649v__);
  if(__temp1226v____temp649v__){
  exists__temp411v(__temp1226v____temp646v__unsafe_ptr,&__temp1226v____temp647v____temp642v____temp543v____temp468v__);
  if(__temp1226v____temp647v____temp642v____temp543v____temp468v__){
  __temp1226v____temp647v____temp641v__unsafe_size=0;
  __temp1226v____temp647v____temp641v__unsafe_size=__temp1226v____temp647v____temp641v__unsafe_size;
  free__temp460v(&__temp1226v____temp646v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1216v(int64_t value, const char** __temp1819v) {
  int __temp1217v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp364v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1819v=ret;
}

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1667v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1668v__unsafe_ptr=0;
  char __temp1669v____temp1229v__=0;
  int64_t __temp1669v__status=0;
  uint64_t __temp1669v____temp1230v=0;
  int64_t __temp1669v____temp1231v__=0;
  char __temp1669v____temp1232v__=0;
  char __temp1669v____temp1233v=0;
  char* __temp1670v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1671v=0;
  int64_t __temp1672v=0;
  int64_t error=0;
  const char* __temp1673v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1224v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1668v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1670v__unsafe_ptr=__temp1668v__unsafe_ptr;
  proc__unsafe_ptr=__temp1670v__unsafe_ptr;
  exists__temp411v(__temp1668v__unsafe_ptr,&__temp1669v____temp1229v__);
  if(__temp1669v____temp1229v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1668v__unsafe_ptr)){
  }
  __temp1669v__status=pclose((FILE*)__temp1668v__unsafe_ptr);
  __temp1668v__unsafe_ptr=0;
  }
  __temp1669v____temp1230v=0;
  int__temp394v(__temp1669v____temp1230v,&__temp1669v____temp1231v__);
  neq__temp130v(__temp1669v__status,__temp1669v____temp1231v__,&__temp1669v____temp1232v__);
  if(__temp1669v____temp1232v__){
  __temp_complain=30;
  __temp1669v____temp1233v=__temp1669v____temp1233v==0;
  }
  __temp1672v=__temp_complain;
  __temp1671v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1672v;
  __temp1671v=__temp1671v==0;
  if(__temp1671v){
  cstr__temp1216v(error,&__temp1673v__);
  print__temp362v(__temp1673v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1683v() {
  const char* path=0;
  uint64_t __temp1685v=0;
  char* __temp1686v__unsafe_ptr=0;
  uint64_t __temp1686v__unsafe_size=0;
  uint64_t __temp1686v__unsafe_align=0;
  char __temp1687v____temp543v____temp468v__=0;
  char* __temp1688v__buf__unsafe_ptr=0;
  uint64_t __temp1688v__buf__unsafe_size=0;
  uint64_t __temp1688v__buf__unsafe_align=0;
  uint64_t __temp1688v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1690v__unsafe_ptr=0;
  uint64_t __temp1690v__dat__pos=0;
  uint64_t __temp1690v__dat__length=0;
  char __temp1690v__dat__first=0;
  char* __temp1691v__unsafe_ptr=0;
  uint64_t __temp1691v__dat__pos=0;
  uint64_t __temp1691v__dat__length=0;
  char __temp1691v__dat__first=0;
  char* __temp1692v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1694v=0;
  uint64_t __temp1695v__=0;
  char* __temp1696v__unsafe_ptr=0;
  uint64_t __temp1696v__unsafe_size=0;
  uint64_t __temp1696v__unsafe_align=0;
  char __temp1697v____temp543v____temp468v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1698v=0;
  char* __temp1699v__unsafe_ptr=0;
  uint64_t __temp1699v__dat__pos=0;
  uint64_t __temp1699v__dat__length=0;
  char __temp1699v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1701v__=0;
  char __temp1702v__=0;
  char* __temp1703v__buf__unsafe_ptr=0;
  uint64_t __temp1703v__buf__unsafe_size=0;
  uint64_t __temp1703v__buf__unsafe_align=0;
  uint64_t __temp1703v__pos=0;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__dat__pos=0;
  uint64_t __temp1704v__dat__length=0;
  char __temp1704v__dat__first=0;
  char* __temp1705v__unsafe_ptr=0;
  uint64_t __temp1705v__dat__pos=0;
  uint64_t __temp1705v__dat__length=0;
  char __temp1705v__dat__first=0;
  uint64_t __temp1706v__=0;
  char* __temp1707v__unsafe_ptr=0;
  uint64_t __temp1707v__dat__pos=0;
  uint64_t __temp1707v__dat__length=0;
  char __temp1707v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1684v;
  __temp1685v=256;
  __temp_errcode=alloc__temp537v(__temp1685v,&__temp1686v__unsafe_ptr,&__temp1686v__unsafe_size,&__temp1686v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp651v(&__temp1686v__unsafe_ptr,&__temp1686v__unsafe_size,&__temp1686v__unsafe_align,&__temp1688v__buf__unsafe_ptr,&__temp1688v__buf__unsafe_size,&__temp1688v__buf__unsafe_align,&__temp1688v__pos);
  bp__buf__unsafe_ptr=__temp1688v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1688v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1688v__buf__unsafe_align;
  bp__pos=__temp1688v__pos;
  __temp_errcode=copy__temp682v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1689v,&__temp1690v__unsafe_ptr,&__temp1690v__dat__pos,&__temp1690v__dat__length,&__temp1690v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp682v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1691v__unsafe_ptr,&__temp1691v__dat__pos,&__temp1691v__dat__length,&__temp1691v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1650v(path,&__temp1692v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1692v__unsafe_ptr;
  __temp1694v=4;
  KB__temp442v(__temp1694v,&__temp1695v__);
  __temp_errcode=alloc__temp537v(__temp1695v__,&__temp1696v__unsafe_ptr,&__temp1696v__unsafe_size,&__temp1696v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1696v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1696v__unsafe_size;
  proc_buf__unsafe_align=__temp1696v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1661v(&test_dir__unsafe_ptr,&__temp1699v__unsafe_ptr,&__temp1699v__dat__pos,&__temp1699v__dat__length,&__temp1699v__dat__first);
  __temp1698v=__temp_complain;
  entry__unsafe_ptr=__temp1699v__unsafe_ptr;
  entry__dat__pos=__temp1699v__dat__pos;
  entry__dat__length=__temp1699v__dat__length;
  entry__dat__first=__temp1699v__dat__first;
  __temp1698v=__temp1698v==0;
  if(!__temp1698v){
  break;
  }
  __temp_errcode=ends_with__temp860v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1700v,&__temp1701v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp25v(__temp1701v__,&__temp1702v__);
  if(__temp1702v__){
  continue;
  }
  __temp1703v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1703v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1703v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1703v__pos=bp__pos;
  str__temp603v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  __temp_errcode=copy_null_terminated__temp691v(&__temp1703v__buf__unsafe_ptr,&__temp1703v__buf__unsafe_size,&__temp1703v__buf__unsafe_align,&__temp1703v__pos,__temp1704v__unsafe_ptr,__temp1704v__dat__pos,__temp1704v__dat__length,__temp1704v__dat__first,&__temp1705v__unsafe_ptr,&__temp1705v__dat__pos,&__temp1705v__dat__length,&__temp1705v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp671v(__temp1705v__unsafe_ptr,__temp1705v__dat__pos,__temp1705v__dat__length,__temp1705v__dat__first,&__temp1706v__);
  __temp_errcode=str__temp580v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_align,__temp1706v__,&__temp1707v__unsafe_ptr,&__temp1707v__dat__pos,&__temp1707v__dat__length,&__temp1707v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1707v__unsafe_ptr;
  command__dat__pos=__temp1707v__dat__pos;
  command__dat__length=__temp1707v__dat__length;
  command__dat__first=__temp1707v__dat__first;
  print__temp715v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1667v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp411v(__temp1696v__unsafe_ptr,&__temp1697v____temp543v____temp468v__);
  if(__temp1697v____temp543v____temp468v__){
  __temp1696v__unsafe_size=0;
  __temp1696v__unsafe_size=__temp1696v__unsafe_size;
  free__temp460v(&__temp1696v__unsafe_ptr);
  }
  if(__temp1692v__unsafe_ptr){
  closedir((DIR*)__temp1692v__unsafe_ptr);
  __temp1692v__unsafe_ptr=0;
  }
  exists__temp411v(__temp1686v__unsafe_ptr,&__temp1687v____temp543v____temp468v__);
  if(__temp1687v____temp543v____temp468v__){
  __temp1686v__unsafe_size=0;
  __temp1686v__unsafe_size=__temp1686v__unsafe_size;
  free__temp460v(&__temp1686v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1683v();return 0;}