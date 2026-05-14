#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
const char* const __temp795v="";
const char* const __temp1690v="./smoll ";
const char* const __temp1701v=".s";
const char* const __temp1685v="./tests/passing/";
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

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1711v, uint64_t* __temp1712v, uint64_t* __temp1713v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1711v=unsafe_ptr;
  *__temp1712v=unsafe_size;
  *__temp1713v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1714v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1714v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1715v) {
  char* allocated=*__temp1715v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1715v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1716v) {
  int value=0;
  *__temp1716v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1717v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1717v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1718v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1718v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1719v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1719v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1720v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1720v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1721v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1721v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1722v) {
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
  *__temp1722v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1723v, uint64_t* __temp1724v, uint64_t* __temp1725v, uint64_t size, char** __temp1726v, uint64_t* __temp1727v, uint64_t* __temp1728v) {
  char* buffer__unsafe_ptr=*__temp1723v;
  uint64_t buffer__unsafe_size=*__temp1724v;
  uint64_t buffer__unsafe_align=*__temp1725v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1723v=buffer__unsafe_ptr;
  *__temp1724v=buffer__unsafe_size;
  *__temp1725v=buffer__unsafe_align;
  *__temp1726v=buffer__unsafe_ptr;
  *__temp1727v=buffer__unsafe_size;
  *__temp1728v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1729v, uint64_t* __temp1730v, uint64_t* __temp1731v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1729v=__temp543v__unsafe_ptr;
  *__temp1730v=__temp543v__unsafe_size;
  *__temp1731v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp652v(char** __temp1732v, uint64_t* __temp1733v, uint64_t* __temp1734v, char** __temp1735v, uint64_t* __temp1736v, uint64_t* __temp1737v, uint64_t* __temp1738v) {
  char* buf__unsafe_ptr=*__temp1732v;
  uint64_t buf__unsafe_size=*__temp1733v;
  uint64_t buf__unsafe_align=*__temp1734v;
  uint64_t __temp653v=0;
  uint64_t __temp654v=0;
  uint64_t pos=0;
  __temp653v=0;
  __temp654v=__temp653v;
  pos=__temp654v;
  goto __temp_return;
  __temp_return:
  *__temp1732v=buf__unsafe_ptr;
  *__temp1733v=buf__unsafe_size;
  *__temp1734v=buf__unsafe_align;
  *__temp1735v=buf__unsafe_ptr;
  *__temp1736v=buf__unsafe_size;
  *__temp1737v=buf__unsafe_align;
  *__temp1738v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1739v) {
  *__temp1739v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1740v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1741v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1741v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1742v) {
  *__temp1742v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1743v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1743v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1744v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1744v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1745v, uint64_t* __temp1746v, uint64_t* __temp1747v, char* __temp1748v) {
  goto __temp_return;
  __temp_return:
  *__temp1745v=unsafe_ptr;
  *__temp1746v=dat__pos;
  *__temp1747v=dat__length;
  *__temp1748v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1749v, uint64_t* __temp1750v, uint64_t* __temp1751v, char* __temp1752v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1749v=__temp580v__unsafe_ptr;
  *__temp1750v=__temp580v__dat__pos;
  *__temp1751v=__temp580v__dat__length;
  *__temp1752v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1753v, uint64_t* __temp1754v, uint64_t* __temp1755v, char* __temp1756v) {
  uint64_t __temp606v=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char first=0;
  char* __temp610v__unsafe_ptr=0;
  uint64_t __temp610v__dat__pos=0;
  uint64_t __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp606v=0;
  neq__temp142v(length,__temp606v,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  first=__temp609v__value;
  }
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp610v__unsafe_ptr,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1753v=__temp610v__unsafe_ptr;
  *__temp1754v=__temp610v__dat__pos;
  *__temp1755v=__temp610v__dat__length;
  *__temp1756v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1757v, uint64_t* __temp1758v, uint64_t* __temp1759v, char* __temp1760v) {
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__unsafe_size=0;
  uint64_t __temp613v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp614v__=0;
  uint64_t length=0;
  uint64_t __temp615v=0;
  uint64_t __temp616v__=0;
  uint64_t __temp617v=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp612v__unsafe_ptr,&__temp612v__unsafe_size,&__temp612v__unsafe_align);
  __temp613v__unsafe_ptr=__temp612v__unsafe_ptr;
  __temp613v__unsafe_size=__temp612v__unsafe_size;
  __temp613v__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=__temp613v__unsafe_ptr;
  buf__unsafe_size=__temp613v__unsafe_size;
  buf__unsafe_align=__temp613v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp614v__);
  buf__unsafe_ptr=__temp614v__;
  if(c){
  length=strlen(c);
  }
  __temp615v=1;
  add__temp170v(length,__temp615v,&__temp616v__);
  buf__unsafe_size=__temp616v__;
  __temp617v=0;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp617v,length,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1757v=__temp618v__unsafe_ptr;
  *__temp1758v=__temp618v__dat__pos;
  *__temp1759v=__temp618v__dat__length;
  *__temp1760v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1761v) {
  goto __temp_return;
  __temp_return:
  *__temp1761v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1762v) {
  goto __temp_return;
  __temp_return:
  *__temp1762v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1763v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1763v=z;
}

int copy__temp683v(char** __temp1764v, uint64_t* __temp1765v, uint64_t* __temp1766v, uint64_t* __temp1767v, const char* _other, char** __temp1768v, uint64_t* __temp1769v, uint64_t* __temp1770v, char* __temp1771v) {
  char* buf__unsafe_ptr=*__temp1764v;
  uint64_t buf__unsafe_size=*__temp1765v;
  uint64_t buf__unsafe_align=*__temp1766v;
  uint64_t pos=*__temp1767v;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp685v__=0;
  uint64_t __temp686v__=0;
  uint64_t next_pos=0;
  uint64_t __temp687v__=0;
  char __temp688v__=0;
  uint64_t __temp689v=0;
  uint64_t __temp690v__=0;
  uint64_t prev_pos=0;
  char* __temp691v__unsafe_ptr=0;
  uint64_t __temp691v__dat__pos=0;
  uint64_t __temp691v__dat__length=0;
  char __temp691v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(_other,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp684v__unsafe_ptr;
  other__dat__pos=__temp684v__dat__pos;
  other__dat__length=__temp684v__dat__length;
  other__dat__first=__temp684v__dat__first;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp685v__);
  add__temp170v(pos,__temp685v__,&__temp686v__);
  next_pos=__temp686v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp687v__);
  gt__temp271v(next_pos,__temp687v__,&__temp688v__);
  if(__temp688v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp689v=0;
  add__temp170v(pos,__temp689v,&__temp690v__);
  prev_pos=__temp690v__;
  pos=next_pos;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp691v__unsafe_ptr,&__temp691v__dat__pos,&__temp691v__dat__length,&__temp691v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1764v=buf__unsafe_ptr;
  *__temp1765v=buf__unsafe_size;
  *__temp1766v=buf__unsafe_align;
  *__temp1767v=pos;
  *__temp1768v=__temp691v__unsafe_ptr;
  *__temp1769v=__temp691v__dat__pos;
  *__temp1770v=__temp691v__dat__length;
  *__temp1771v=__temp691v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void unsafe_temporary_cstr__temp651v(const char* other, const char** __temp1772v) {
  goto __temp_return;
  __temp_return:
  *__temp1772v=other;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1773v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1773v=z;
}

static inline __attribute__((always_inline)) int read__temp1651v(const char* _path, char** __temp1774v) {
  const char* __temp1652v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1653v__=0;
  char __temp1654v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_temporary_cstr__temp651v(_path,&__temp1652v__);
  path=__temp1652v__;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1653v__);
  not__temp26v(__temp1653v__,&__temp1654v__);
  if(__temp1654v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1774v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1775v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1775v=__temp445v__;
}

static inline __attribute__((always_inline)) int entry__temp1662v(char** __temp1776v, char** __temp1777v, uint64_t* __temp1778v, uint64_t* __temp1779v, char* __temp1780v) {
  char* f__unsafe_ptr=*__temp1776v;
  char __temp1663v__=0;
  char __temp1664v__=0;
  char* de=0;
  char __temp1665v__=0;
  char __temp1666v__=0;
  const char* dirname=0;
  char* __temp1667v__unsafe_ptr=0;
  uint64_t __temp1667v__dat__pos=0;
  uint64_t __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1663v__);
  not__temp26v(__temp1663v__,&__temp1664v__);
  if(__temp1664v__){
  __temp_errcode=44;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1665v__);
  not__temp26v(__temp1665v__,&__temp1666v__);
  if(__temp1666v__){
  __temp_errcode=45;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp611v(dirname,&__temp1667v__unsafe_ptr,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1776v=f__unsafe_ptr;
  *__temp1777v=__temp1667v__unsafe_ptr;
  *__temp1778v=__temp1667v__dat__pos;
  *__temp1779v=__temp1667v__dat__length;
  *__temp1780v=__temp1667v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp604v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1781v, uint64_t* __temp1782v, uint64_t* __temp1783v, char* __temp1784v) {
  goto __temp_return;
  __temp_return:
  *__temp1781v=other__unsafe_ptr;
  *__temp1782v=other__dat__pos;
  *__temp1783v=other__dat__length;
  *__temp1784v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1785v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1785v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1786v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1786v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp753v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1787v) {
  uint64_t __temp754v__=0;
  char* __temp755v__=0;
  add__temp170v(s__dat__pos,i,&__temp754v__);
  add__temp463v(s__unsafe_ptr,__temp754v__,&__temp755v__);
  goto __temp_return;
  __temp_return:
  *__temp1787v=__temp755v__;
}

int slice__temp792v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v, char* __temp1791v) {
  char* __temp793v__unsafe_ptr=0;
  uint64_t __temp793v__dat__pos=0;
  uint64_t __temp793v__dat__length=0;
  char __temp793v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp794v__=0;
  char* __temp796v__unsafe_ptr=0;
  uint64_t __temp796v__dat__pos=0;
  uint64_t __temp796v__dat__length=0;
  char __temp796v__dat__first=0;
  char __temp797v__=0;
  char __temp798v__=0;
  char __temp799v=0;
  uint64_t __temp800v__=0;
  uint64_t new_length=0;
  uint64_t __temp801v=0;
  char __temp802v__=0;
  char new_first=0;
  char* __temp803v__=0;
  char __temp804v__value=0;
  uint64_t __temp805v__=0;
  char* __temp806v__unsafe_ptr=0;
  uint64_t __temp806v__dat__pos=0;
  uint64_t __temp806v__dat__length=0;
  char __temp806v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp604v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp793v__unsafe_ptr,&__temp793v__dat__pos,&__temp793v__dat__length,&__temp793v__dat__first);
  s__unsafe_ptr=__temp793v__unsafe_ptr;
  s__dat__pos=__temp793v__dat__pos;
  s__dat__length=__temp793v__dat__length;
  s__dat__first=__temp793v__dat__first;
  eq__temp118v(from,to,&__temp794v__);
  if(__temp794v__){
  __temp_errcode=str__temp611v(__temp795v,&__temp796v__unsafe_ptr,&__temp796v__dat__pos,&__temp796v__dat__length,&__temp796v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp797v__);
  if(!__temp797v__){
  gt__temp271v(to,s__dat__length,&__temp798v__);
  __temp799v=__temp798v__;
  }
  if(__temp799v){
  __temp_errcode=16;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp800v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp800v__;
  __temp801v=0;
  neq__temp142v(from,__temp801v,&__temp802v__);
  if(__temp802v__){
  get__temp753v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp803v__);
  if(!__temp803v__){
  goto __temp_failure;
  }
  memcpy(&__temp804v__value,__temp803v__,1);
  new_first=__temp804v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp805v__);
  str__temp575v(s__unsafe_ptr,__temp805v__,new_length,new_first,&__temp806v__unsafe_ptr,&__temp806v__dat__pos,&__temp806v__dat__length,&__temp806v__dat__first);
  __temp796v__unsafe_ptr=__temp806v__unsafe_ptr;
  __temp796v__dat__pos=__temp806v__dat__pos;
  __temp796v__dat__length=__temp806v__dat__length;
  __temp796v__dat__first=__temp806v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1788v=__temp796v__unsafe_ptr;
  *__temp1789v=__temp796v__dat__pos;
  *__temp1790v=__temp796v__dat__length;
  *__temp1791v=__temp796v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp623v(char x, char y, char* __temp1792v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1792v=z;
}

static inline __attribute__((always_inline)) void eq__temp757v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1793v) {
  uint64_t __temp758v__=0;
  uint64_t n=0;
  uint64_t __temp759v__=0;
  char __temp760v__=0;
  char __temp761v=0;
  char __temp762v__=0;
  char __temp763v=0;
  char z=0;
  len__temp619v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp758v__);
  n=__temp758v__;
  len__temp619v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp759v__);
  neq__temp142v(n,__temp759v__,&__temp760v__);
  if(__temp760v__){
  __temp761v=0;
  goto __temp_return;
  }
  neq__temp623v(x__dat__first,y__dat__first,&__temp762v__);
  if(__temp762v__){
  __temp763v=0;
  __temp761v=__temp763v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp761v=z;
  goto __temp_return;
  __temp_return:
  *__temp1793v=__temp761v;
}

static inline __attribute__((always_inline)) int ends_with__temp861v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1794v) {
  char* __temp862v__unsafe_ptr=0;
  uint64_t __temp862v__dat__pos=0;
  uint64_t __temp862v__dat__length=0;
  char __temp862v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp863v__unsafe_ptr=0;
  uint64_t __temp863v__dat__pos=0;
  uint64_t __temp863v__dat__length=0;
  char __temp863v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp864v__=0;
  char __temp865v=0;
  uint64_t __temp866v__=0;
  uint64_t n=0;
  uint64_t __temp867v__=0;
  uint64_t __temp868v__=0;
  char* __temp869v__unsafe_ptr=0;
  uint64_t __temp869v__dat__pos=0;
  uint64_t __temp869v__dat__length=0;
  char __temp869v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp870v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp604v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp862v__unsafe_ptr,&__temp862v__dat__pos,&__temp862v__dat__length,&__temp862v__dat__first);
  stack__unsafe_ptr=__temp862v__unsafe_ptr;
  stack__dat__pos=__temp862v__dat__pos;
  stack__dat__length=__temp862v__dat__length;
  stack__dat__first=__temp862v__dat__first;
  __temp_errcode=str__temp611v(_needle,&__temp863v__unsafe_ptr,&__temp863v__dat__pos,&__temp863v__dat__length,&__temp863v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp863v__unsafe_ptr;
  needle__dat__pos=__temp863v__dat__pos;
  needle__dat__length=__temp863v__dat__length;
  needle__dat__first=__temp863v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp864v__);
  if(__temp864v__){
  __temp865v=0;
  goto __temp_return;
  }
  len__temp619v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp866v__);
  n=__temp866v__;
  len__temp619v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp867v__);
  __temp_errcode=sub__temp347v(n,__temp867v__,&__temp868v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp792v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp868v__,n,&__temp869v__unsafe_ptr,&__temp869v__dat__pos,&__temp869v__dat__length,&__temp869v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp869v__unsafe_ptr;
  ret__dat__pos=__temp869v__dat__pos;
  ret__dat__length=__temp869v__dat__length;
  ret__dat__first=__temp869v__dat__first;
  eq__temp757v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp870v__);
  __temp865v=__temp870v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1794v=__temp865v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp692v(char** __temp1795v, uint64_t* __temp1796v, uint64_t* __temp1797v, uint64_t* __temp1798v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1799v, uint64_t* __temp1800v, uint64_t* __temp1801v, char* __temp1802v) {
  char* buf__unsafe_ptr=*__temp1795v;
  uint64_t buf__unsafe_size=*__temp1796v;
  uint64_t buf__unsafe_align=*__temp1797v;
  uint64_t pos=*__temp1798v;
  char* __temp693v__unsafe_ptr=0;
  uint64_t __temp693v__dat__pos=0;
  uint64_t __temp693v__dat__length=0;
  char __temp693v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp694v__=0;
  uint64_t __temp695v__=0;
  uint64_t null_pos=0;
  uint64_t __temp696v=0;
  uint64_t __temp697v__=0;
  uint64_t next_pos=0;
  uint64_t __temp698v__=0;
  char __temp699v__=0;
  uint64_t __temp700v=0;
  uint64_t __temp701v__=0;
  uint64_t prev_pos=0;
  char* __temp702v__unsafe_ptr=0;
  uint64_t __temp702v__dat__pos=0;
  uint64_t __temp702v__dat__length=0;
  char __temp702v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp604v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp693v__unsafe_ptr,&__temp693v__dat__pos,&__temp693v__dat__length,&__temp693v__dat__first);
  other__unsafe_ptr=__temp693v__unsafe_ptr;
  other__dat__pos=__temp693v__dat__pos;
  other__dat__length=__temp693v__dat__length;
  other__dat__first=__temp693v__dat__first;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp694v__);
  add__temp170v(pos,__temp694v__,&__temp695v__);
  null_pos=__temp695v__;
  __temp696v=1;
  add__temp170v(null_pos,__temp696v,&__temp697v__);
  next_pos=__temp697v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp698v__);
  gt__temp271v(next_pos,__temp698v__,&__temp699v__);
  if(__temp699v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  buf__unsafe_ptr[null_pos]=0;
  __temp700v=0;
  add__temp170v(pos,__temp700v,&__temp701v__);
  prev_pos=__temp701v__;
  pos=next_pos;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp702v__unsafe_ptr,&__temp702v__dat__pos,&__temp702v__dat__length,&__temp702v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1795v=buf__unsafe_ptr;
  *__temp1796v=buf__unsafe_size;
  *__temp1797v=buf__unsafe_align;
  *__temp1798v=pos;
  *__temp1799v=__temp702v__unsafe_ptr;
  *__temp1800v=__temp702v__dat__pos;
  *__temp1801v=__temp702v__dat__length;
  *__temp1802v=__temp702v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp672v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1803v) {
  uint64_t __temp673v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp673v__);
  goto __temp_return;
  __temp_return:
  *__temp1803v=__temp673v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1804v) {
  int value=0;
  *__temp1804v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1805v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1805v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp581v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1806v, uint64_t* __temp1807v, uint64_t* __temp1808v, char* __temp1809v) {
  int __temp582v=0;
  int __temp583v=0;
  int __temp584v__=0;
  uint64_t __temp585v__=0;
  char __temp586v__=0;
  uint64_t __temp587v=0;
  uint64_t __temp588v=0;
  char* __temp589v__=0;
  char __temp590v__value=0;
  char* __temp591v__unsafe_ptr=0;
  uint64_t __temp591v__dat__pos=0;
  uint64_t __temp591v__dat__length=0;
  char __temp591v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp583v,&__temp584v__);
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp585v__);
  gt__temp271v(length,__temp585v__,&__temp586v__);
  if(__temp586v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  __temp587v=0;
  __temp588v=0;
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp588v,&__temp589v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp589v__){
  goto __temp_failure;
  }
  memcpy(&__temp590v__value,__temp589v__,1);
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp587v,length,__temp590v__value,&__temp591v__unsafe_ptr,&__temp591v__dat__pos,&__temp591v__dat__length,&__temp591v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1806v=__temp591v__unsafe_ptr;
  *__temp1807v=__temp591v__dat__pos;
  *__temp1808v=__temp591v__dat__length;
  *__temp1809v=__temp591v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp638v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1810v, uint64_t* __temp1811v, uint64_t* __temp1812v, char* __temp1813v) {
  uint64_t __temp639v=0;
  uint64_t __temp640v__=0;
  uint64_t __temp641v__=0;
  char* __temp642v__unsafe_ptr=0;
  uint64_t __temp642v__unsafe_size=0;
  uint64_t __temp642v__unsafe_align=0;
  char __temp643v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp644v=0;
  char* __temp645v__unsafe_ptr=0;
  uint64_t __temp645v__dat__pos=0;
  uint64_t __temp645v__dat__length=0;
  char __temp645v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp639v=1;
  len__temp619v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp640v__);
  add__temp170v(__temp639v,__temp640v__,&__temp641v__);
  __temp_errcode=alloc__temp538v(__temp641v__,&__temp642v__unsafe_ptr,&__temp642v__unsafe_size,&__temp642v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp642v__unsafe_ptr;
  buf__unsafe_size=__temp642v__unsafe_size;
  buf__unsafe_align=__temp642v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp644v=0;
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp644v,other__dat__length,other__dat__first,&__temp645v__unsafe_ptr,&__temp645v__dat__pos,&__temp645v__dat__length,&__temp645v__dat__first);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp645v__unsafe_ptr,&__temp643v____temp544v____temp469v__);
  if(__temp643v____temp544v____temp469v__){
  __temp642v__unsafe_size=0;
  __temp642v__unsafe_size=__temp642v__unsafe_size;
  free__temp461v(&__temp645v__unsafe_ptr);
  }
  __temp_return:
  *__temp1810v=__temp645v__unsafe_ptr;
  *__temp1811v=__temp645v__dat__pos;
  *__temp1812v=__temp645v__dat__length;
  *__temp1813v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1814v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1814v=z;
}

int unsafe_temporary_cstr__temp646v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1815v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp647v__unsafe_ptr=0;
  uint64_t __temp647v__dat__pos=0;
  uint64_t __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  char __temp648v____temp643v____temp544v____temp469v__=0;
  uint64_t __temp648v____temp642v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp649v__=0;
  char __temp650v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp638v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp647v__unsafe_ptr,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp647v__unsafe_ptr;
  c__dat__pos=__temp647v__dat__pos;
  c__dat__length=__temp647v__dat__length;
  c__dat__first=__temp647v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp573v(ret,&__temp649v__);
  not__temp26v(__temp649v__,&__temp650v__);
  if(__temp650v__){
  exists__temp412v(__temp647v__unsafe_ptr,&__temp648v____temp643v____temp544v____temp469v__);
  if(__temp648v____temp643v____temp544v____temp469v__){
  __temp648v____temp642v__unsafe_size=0;
  __temp648v____temp642v__unsafe_size=__temp648v____temp642v__unsafe_size;
  free__temp461v(&__temp647v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1815v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1816v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1816v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1817v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1817v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1818v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1818v=z;
}

static inline __attribute__((always_inline)) int read__temp1225v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first, char** __temp1819v) {
  const char* __temp1226v__=0;
  char __temp1227v____temp649v__=0;
  char __temp1227v____temp650v__=0;
  char* __temp1227v____temp647v__unsafe_ptr=0;
  char __temp1227v____temp648v____temp643v____temp544v____temp469v__=0;
  uint64_t __temp1227v____temp648v____temp642v__unsafe_size=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1228v__=0;
  char __temp1229v__=0;
  char __temp1230v__=0;
  int64_t status=0;
  uint64_t __temp1231v=0;
  int64_t __temp1232v__=0;
  char __temp1233v__=0;
  char __temp1234v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp646v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1226v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1226v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp412v(unsafe_ptr,&__temp1228v__);
  not__temp26v(__temp1228v__,&__temp1229v__);
  if(__temp1229v__){
  __temp_errcode=29;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1230v__);
  if(__temp1230v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp1231v=0;
  int__temp395v(__temp1231v,&__temp1232v__);
  neq__temp131v(status,__temp1232v__,&__temp1233v__);
  if(__temp1233v__){
  __temp_complain=30;
  __temp1234v=__temp1234v==0;
  }
  __temp_return:
  *__temp1819v=unsafe_ptr;
  exists__temp573v(__temp1226v__,&__temp1227v____temp649v__);
  not__temp26v(__temp1227v____temp649v__,&__temp1227v____temp650v__);
  if(__temp1227v____temp650v__){
  exists__temp412v(__temp1227v____temp647v__unsafe_ptr,&__temp1227v____temp648v____temp643v____temp544v____temp469v__);
  if(__temp1227v____temp648v____temp643v____temp544v____temp469v__){
  __temp1227v____temp648v____temp642v__unsafe_size=0;
  __temp1227v____temp648v____temp642v__unsafe_size=__temp1227v____temp648v____temp642v__unsafe_size;
  free__temp461v(&__temp1227v____temp647v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1217v(int64_t value, const char** __temp1820v) {
  int __temp1218v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp363v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1820v=ret;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1668v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1669v__unsafe_ptr=0;
  char __temp1670v____temp1230v__=0;
  int64_t __temp1670v__status=0;
  uint64_t __temp1670v____temp1231v=0;
  int64_t __temp1670v____temp1232v__=0;
  char __temp1670v____temp1233v__=0;
  char __temp1670v____temp1234v=0;
  char* __temp1671v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1672v=0;
  int64_t __temp1673v=0;
  int64_t error=0;
  const char* __temp1674v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1225v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1669v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1671v__unsafe_ptr=__temp1669v__unsafe_ptr;
  proc__unsafe_ptr=__temp1671v__unsafe_ptr;
  exists__temp412v(__temp1669v__unsafe_ptr,&__temp1670v____temp1230v__);
  if(__temp1670v____temp1230v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1669v__unsafe_ptr)){
  }
  __temp1670v__status=pclose((FILE*)__temp1669v__unsafe_ptr);
  __temp1669v__unsafe_ptr=0;
  }
  __temp1670v____temp1231v=0;
  int__temp395v(__temp1670v____temp1231v,&__temp1670v____temp1232v__);
  neq__temp131v(__temp1670v__status,__temp1670v____temp1232v__,&__temp1670v____temp1233v__);
  if(__temp1670v____temp1233v__){
  __temp_complain=30;
  __temp1670v____temp1234v=__temp1670v____temp1234v==0;
  }
  __temp1673v=__temp_complain;
  __temp1672v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1673v;
  __temp1672v=__temp1672v==0;
  if(__temp1672v){
  cstr__temp1217v(error,&__temp1674v__);
  print__temp361v(__temp1674v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1684v() {
  const char* path=0;
  uint64_t __temp1686v=0;
  char* __temp1687v__unsafe_ptr=0;
  uint64_t __temp1687v__unsafe_size=0;
  uint64_t __temp1687v__unsafe_align=0;
  char __temp1688v____temp544v____temp469v__=0;
  char* __temp1689v__buf__unsafe_ptr=0;
  uint64_t __temp1689v__buf__unsafe_size=0;
  uint64_t __temp1689v__buf__unsafe_align=0;
  uint64_t __temp1689v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1691v__unsafe_ptr=0;
  uint64_t __temp1691v__dat__pos=0;
  uint64_t __temp1691v__dat__length=0;
  char __temp1691v__dat__first=0;
  char* __temp1692v__unsafe_ptr=0;
  uint64_t __temp1692v__dat__pos=0;
  uint64_t __temp1692v__dat__length=0;
  char __temp1692v__dat__first=0;
  char* __temp1693v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1695v=0;
  uint64_t __temp1696v__=0;
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__unsafe_size=0;
  uint64_t __temp1697v__unsafe_align=0;
  char __temp1698v____temp544v____temp469v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1699v=0;
  char* __temp1700v__unsafe_ptr=0;
  uint64_t __temp1700v__dat__pos=0;
  uint64_t __temp1700v__dat__length=0;
  char __temp1700v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1702v__=0;
  char __temp1703v__=0;
  char* __temp1704v__buf__unsafe_ptr=0;
  uint64_t __temp1704v__buf__unsafe_size=0;
  uint64_t __temp1704v__buf__unsafe_align=0;
  uint64_t __temp1704v__pos=0;
  char* __temp1705v__unsafe_ptr=0;
  uint64_t __temp1705v__dat__pos=0;
  uint64_t __temp1705v__dat__length=0;
  char __temp1705v__dat__first=0;
  char* __temp1706v__unsafe_ptr=0;
  uint64_t __temp1706v__dat__pos=0;
  uint64_t __temp1706v__dat__length=0;
  char __temp1706v__dat__first=0;
  uint64_t __temp1707v__=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__dat__pos=0;
  uint64_t __temp1708v__dat__length=0;
  char __temp1708v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1685v;
  __temp1686v=256;
  __temp_errcode=alloc__temp538v(__temp1686v,&__temp1687v__unsafe_ptr,&__temp1687v__unsafe_size,&__temp1687v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp652v(&__temp1687v__unsafe_ptr,&__temp1687v__unsafe_size,&__temp1687v__unsafe_align,&__temp1689v__buf__unsafe_ptr,&__temp1689v__buf__unsafe_size,&__temp1689v__buf__unsafe_align,&__temp1689v__pos);
  bp__buf__unsafe_ptr=__temp1689v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1689v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1689v__buf__unsafe_align;
  bp__pos=__temp1689v__pos;
  __temp_errcode=copy__temp683v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1690v,&__temp1691v__unsafe_ptr,&__temp1691v__dat__pos,&__temp1691v__dat__length,&__temp1691v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp683v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1692v__unsafe_ptr,&__temp1692v__dat__pos,&__temp1692v__dat__length,&__temp1692v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1651v(path,&__temp1693v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1693v__unsafe_ptr;
  __temp1695v=4;
  KB__temp443v(__temp1695v,&__temp1696v__);
  __temp_errcode=alloc__temp538v(__temp1696v__,&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1697v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1697v__unsafe_size;
  proc_buf__unsafe_align=__temp1697v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1662v(&test_dir__unsafe_ptr,&__temp1700v__unsafe_ptr,&__temp1700v__dat__pos,&__temp1700v__dat__length,&__temp1700v__dat__first);
  __temp1699v=__temp_complain;
  entry__unsafe_ptr=__temp1700v__unsafe_ptr;
  entry__dat__pos=__temp1700v__dat__pos;
  entry__dat__length=__temp1700v__dat__length;
  entry__dat__first=__temp1700v__dat__first;
  __temp1699v=__temp1699v==0;
  if(!__temp1699v){
  break;
  }
  __temp_errcode=ends_with__temp861v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1701v,&__temp1702v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1702v__,&__temp1703v__);
  if(__temp1703v__){
  continue;
  }
  __temp1704v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1704v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1704v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1704v__pos=bp__pos;
  str__temp604v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1705v__unsafe_ptr,&__temp1705v__dat__pos,&__temp1705v__dat__length,&__temp1705v__dat__first);
  __temp_errcode=copy_null_terminated__temp692v(&__temp1704v__buf__unsafe_ptr,&__temp1704v__buf__unsafe_size,&__temp1704v__buf__unsafe_align,&__temp1704v__pos,__temp1705v__unsafe_ptr,__temp1705v__dat__pos,__temp1705v__dat__length,__temp1705v__dat__first,&__temp1706v__unsafe_ptr,&__temp1706v__dat__pos,&__temp1706v__dat__length,&__temp1706v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp672v(__temp1706v__unsafe_ptr,__temp1706v__dat__pos,__temp1706v__dat__length,__temp1706v__dat__first,&__temp1707v__);
  __temp_errcode=str__temp581v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_align,__temp1707v__,&__temp1708v__unsafe_ptr,&__temp1708v__dat__pos,&__temp1708v__dat__length,&__temp1708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1708v__unsafe_ptr;
  command__dat__pos=__temp1708v__dat__pos;
  command__dat__length=__temp1708v__dat__length;
  command__dat__first=__temp1708v__dat__first;
  print__temp714v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1668v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1697v__unsafe_ptr,&__temp1698v____temp544v____temp469v__);
  if(__temp1698v____temp544v____temp469v__){
  __temp1697v__unsafe_size=0;
  __temp1697v__unsafe_size=__temp1697v__unsafe_size;
  free__temp461v(&__temp1697v__unsafe_ptr);
  }
  if(__temp1693v__unsafe_ptr){
  closedir((DIR*)__temp1693v__unsafe_ptr);
  __temp1693v__unsafe_ptr=0;
  }
  exists__temp412v(__temp1687v__unsafe_ptr,&__temp1688v____temp544v____temp469v__);
  if(__temp1688v____temp544v____temp469v__){
  __temp1687v__unsafe_size=0;
  __temp1687v__unsafe_size=__temp1687v__unsafe_size;
  free__temp461v(&__temp1687v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1684v();return 0;}