#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1729v="./tests/passing/";
const char* const __temp1734v="./smoll ";
const char* const __temp365v="\n";
const char* const __temp797v="";
const char* const __temp1745v=".s";
static const char* __temp_all_errcodes[49] = {"noerr",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1755v, uint64_t* __temp1756v, uint64_t* __temp1757v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1755v=unsafe_ptr;
  *__temp1756v=unsafe_size;
  *__temp1757v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1758v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1758v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1759v) {
  char* allocated=*__temp1759v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1759v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1760v) {
  int value=0;
  *__temp1760v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1761v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1761v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1762v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1762v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1763v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1763v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1764v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1764v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1765v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1765v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1766v) {
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
  *__temp1766v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1767v, uint64_t* __temp1768v, uint64_t* __temp1769v, uint64_t size, char** __temp1770v, uint64_t* __temp1771v, uint64_t* __temp1772v) {
  char* buffer__unsafe_ptr=*__temp1767v;
  uint64_t buffer__unsafe_size=*__temp1768v;
  uint64_t buffer__unsafe_align=*__temp1769v;
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
  *__temp1767v=buffer__unsafe_ptr;
  *__temp1768v=buffer__unsafe_size;
  *__temp1769v=buffer__unsafe_align;
  *__temp1770v=buffer__unsafe_ptr;
  *__temp1771v=buffer__unsafe_size;
  *__temp1772v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1773v, uint64_t* __temp1774v, uint64_t* __temp1775v) {
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
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
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
  *__temp1773v=__temp543v__unsafe_ptr;
  *__temp1774v=__temp543v__unsafe_size;
  *__temp1775v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1776v, uint64_t* __temp1777v, uint64_t* __temp1778v, char** __temp1779v, uint64_t* __temp1780v, uint64_t* __temp1781v, uint64_t* __temp1782v) {
  char* buf__unsafe_ptr=*__temp1776v;
  uint64_t buf__unsafe_size=*__temp1777v;
  uint64_t buf__unsafe_align=*__temp1778v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1776v=buf__unsafe_ptr;
  *__temp1777v=buf__unsafe_size;
  *__temp1778v=buf__unsafe_align;
  *__temp1779v=buf__unsafe_ptr;
  *__temp1780v=buf__unsafe_size;
  *__temp1781v=buf__unsafe_align;
  *__temp1782v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1783v) {
  *__temp1783v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1784v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1785v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1785v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1786v) {
  *__temp1786v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1787v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1787v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1788v) {
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
  *__temp1788v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1789v, uint64_t* __temp1790v, uint64_t* __temp1791v, char* __temp1792v) {
  goto __temp_return;
  __temp_return:
  *__temp1789v=unsafe_ptr;
  *__temp1790v=dat__pos;
  *__temp1791v=dat__length;
  *__temp1792v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1793v, uint64_t* __temp1794v, uint64_t* __temp1795v, char* __temp1796v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp142v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1793v=__temp582v__unsafe_ptr;
  *__temp1794v=__temp582v__dat__pos;
  *__temp1795v=__temp582v__dat__length;
  *__temp1796v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1797v, uint64_t* __temp1798v, uint64_t* __temp1799v, char* __temp1800v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp142v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1797v=__temp612v__unsafe_ptr;
  *__temp1798v=__temp612v__dat__pos;
  *__temp1799v=__temp612v__dat__length;
  *__temp1800v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1801v, uint64_t* __temp1802v, uint64_t* __temp1803v, char* __temp1804v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp170v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1801v=__temp620v__unsafe_ptr;
  *__temp1802v=__temp620v__dat__pos;
  *__temp1803v=__temp620v__dat__length;
  *__temp1804v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1805v) {
  goto __temp_return;
  __temp_return:
  *__temp1805v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1806v) {
  goto __temp_return;
  __temp_return:
  *__temp1806v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1807v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1807v=z;
}

int copy__temp685v(char** __temp1808v, uint64_t* __temp1809v, uint64_t* __temp1810v, uint64_t* __temp1811v, const char* _other, char** __temp1812v, uint64_t* __temp1813v, uint64_t* __temp1814v, char* __temp1815v) {
  char* buf__unsafe_ptr=*__temp1808v;
  uint64_t buf__unsafe_size=*__temp1809v;
  uint64_t buf__unsafe_align=*__temp1810v;
  uint64_t pos=*__temp1811v;
  char* __temp686v__unsafe_ptr=0;
  uint64_t __temp686v__dat__pos=0;
  uint64_t __temp686v__dat__length=0;
  char __temp686v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp687v__=0;
  uint64_t __temp688v__=0;
  uint64_t next_pos=0;
  uint64_t __temp689v__=0;
  char __temp690v__=0;
  uint64_t __temp691v=0;
  uint64_t __temp692v__=0;
  uint64_t prev_pos=0;
  char* __temp693v__unsafe_ptr=0;
  uint64_t __temp693v__dat__pos=0;
  uint64_t __temp693v__dat__length=0;
  char __temp693v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(_other,&__temp686v__unsafe_ptr,&__temp686v__dat__pos,&__temp686v__dat__length,&__temp686v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp686v__unsafe_ptr;
  other__dat__pos=__temp686v__dat__pos;
  other__dat__length=__temp686v__dat__length;
  other__dat__first=__temp686v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp687v__);
  add__temp170v(pos,__temp687v__,&__temp688v__);
  next_pos=__temp688v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp689v__);
  gt__temp271v(next_pos,__temp689v__,&__temp690v__);
  if(__temp690v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp691v=0;
  add__temp170v(pos,__temp691v,&__temp692v__);
  prev_pos=__temp692v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp693v__unsafe_ptr,&__temp693v__dat__pos,&__temp693v__dat__length,&__temp693v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1808v=buf__unsafe_ptr;
  *__temp1809v=buf__unsafe_size;
  *__temp1810v=buf__unsafe_align;
  *__temp1811v=pos;
  *__temp1812v=__temp693v__unsafe_ptr;
  *__temp1813v=__temp693v__dat__pos;
  *__temp1814v=__temp693v__dat__length;
  *__temp1815v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void closedir__temp1625v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1816v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1816v=z;
}

static inline __attribute__((always_inline)) int read__temp1626v(const char* path, char** __temp1817v) {
  char* unsafe_ptr=0;
  char __temp1628v__=0;
  char __temp1629v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1628v__);
  not__temp26v(__temp1628v__,&__temp1629v__);
  if(__temp1629v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1625v(unsafe_ptr);
  __temp_return:
  *__temp1817v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1818v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1818v=__temp445v__;
}

static inline __attribute__((always_inline)) int raw_entry__temp1636v(char** __temp1819v, const char** __temp1820v) {
  char* f__unsafe_ptr=*__temp1819v;
  char __temp1637v__=0;
  char __temp1638v__=0;
  char* de=0;
  char __temp1639v__=0;
  char __temp1640v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1637v__);
  not__temp26v(__temp1637v__,&__temp1638v__);
  if(__temp1638v__){
  __temp_errcode=46;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1639v__);
  not__temp26v(__temp1639v__,&__temp1640v__);
  if(__temp1640v__){
  __temp_errcode=47;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1819v=f__unsafe_ptr;
  *__temp1820v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1641v(char** __temp1821v, char** __temp1822v, uint64_t* __temp1823v, uint64_t* __temp1824v, char* __temp1825v) {
  char* f__unsafe_ptr=*__temp1821v;
  const char* __temp1642v__=0;
  char* __temp1643v__unsafe_ptr=0;
  uint64_t __temp1643v__dat__pos=0;
  uint64_t __temp1643v__dat__length=0;
  char __temp1643v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw_entry__temp1636v(&f__unsafe_ptr,&__temp1642v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(__temp1642v__,&__temp1643v__unsafe_ptr,&__temp1643v__dat__pos,&__temp1643v__dat__length,&__temp1643v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1821v=f__unsafe_ptr;
  *__temp1822v=__temp1643v__unsafe_ptr;
  *__temp1823v=__temp1643v__dat__pos;
  *__temp1824v=__temp1643v__dat__length;
  *__temp1825v=__temp1643v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1826v, uint64_t* __temp1827v, uint64_t* __temp1828v, char* __temp1829v) {
  goto __temp_return;
  __temp_return:
  *__temp1826v=other__unsafe_ptr;
  *__temp1827v=other__dat__pos;
  *__temp1828v=other__dat__length;
  *__temp1829v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1830v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1830v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1831v) {
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
  *__temp1831v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp755v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1832v) {
  uint64_t __temp756v__=0;
  char* __temp757v__=0;
  add__temp170v(s__dat__pos,i,&__temp756v__);
  add__temp463v(s__unsafe_ptr,__temp756v__,&__temp757v__);
  goto __temp_return;
  __temp_return:
  *__temp1832v=__temp757v__;
}

int slice__temp794v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1833v, uint64_t* __temp1834v, uint64_t* __temp1835v, char* __temp1836v) {
  char* __temp795v__unsafe_ptr=0;
  uint64_t __temp795v__dat__pos=0;
  uint64_t __temp795v__dat__length=0;
  char __temp795v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp796v__=0;
  char* __temp798v__unsafe_ptr=0;
  uint64_t __temp798v__dat__pos=0;
  uint64_t __temp798v__dat__length=0;
  char __temp798v__dat__first=0;
  char __temp799v__=0;
  char __temp800v__=0;
  char __temp801v=0;
  uint64_t __temp802v__=0;
  uint64_t new_length=0;
  uint64_t __temp803v=0;
  char __temp804v__=0;
  char new_first=0;
  char* __temp805v__=0;
  char __temp806v__value=0;
  uint64_t __temp807v__=0;
  char* __temp808v__unsafe_ptr=0;
  uint64_t __temp808v__dat__pos=0;
  uint64_t __temp808v__dat__length=0;
  char __temp808v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp795v__unsafe_ptr,&__temp795v__dat__pos,&__temp795v__dat__length,&__temp795v__dat__first);
  s__unsafe_ptr=__temp795v__unsafe_ptr;
  s__dat__pos=__temp795v__dat__pos;
  s__dat__length=__temp795v__dat__length;
  s__dat__first=__temp795v__dat__first;
  eq__temp118v(from,to,&__temp796v__);
  if(__temp796v__){
  __temp_errcode=str__temp613v(__temp797v,&__temp798v__unsafe_ptr,&__temp798v__dat__pos,&__temp798v__dat__length,&__temp798v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp799v__);
  if(!__temp799v__){
  gt__temp271v(to,s__dat__length,&__temp800v__);
  __temp801v=__temp800v__;
  }
  if(__temp801v){
  __temp_errcode=17;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp802v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp802v__;
  __temp803v=0;
  neq__temp142v(from,__temp803v,&__temp804v__);
  if(__temp804v__){
  get__temp755v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp805v__);
  if(!__temp805v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp806v__value,__temp805v__,1);
  new_first=__temp806v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp807v__);
  str__temp575v(s__unsafe_ptr,__temp807v__,new_length,new_first,&__temp808v__unsafe_ptr,&__temp808v__dat__pos,&__temp808v__dat__length,&__temp808v__dat__first);
  __temp798v__unsafe_ptr=__temp808v__unsafe_ptr;
  __temp798v__dat__pos=__temp808v__dat__pos;
  __temp798v__dat__length=__temp808v__dat__length;
  __temp798v__dat__first=__temp808v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1833v=__temp798v__unsafe_ptr;
  *__temp1834v=__temp798v__dat__pos;
  *__temp1835v=__temp798v__dat__length;
  *__temp1836v=__temp798v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp625v(char x, char y, char* __temp1837v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1837v=z;
}

static inline __attribute__((always_inline)) void eq__temp759v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1838v) {
  uint64_t __temp760v__=0;
  uint64_t n=0;
  uint64_t __temp761v__=0;
  char __temp762v__=0;
  char __temp763v=0;
  char __temp764v__=0;
  char __temp765v=0;
  char z=0;
  len__temp621v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp760v__);
  n=__temp760v__;
  len__temp621v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp761v__);
  neq__temp142v(n,__temp761v__,&__temp762v__);
  if(__temp762v__){
  __temp763v=0;
  goto __temp_return;
  }
  neq__temp625v(x__dat__first,y__dat__first,&__temp764v__);
  if(__temp764v__){
  __temp765v=0;
  __temp763v=__temp765v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp763v=z;
  goto __temp_return;
  __temp_return:
  *__temp1838v=__temp763v;
}

static inline __attribute__((always_inline)) int ends_with__temp873v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1839v) {
  char* __temp874v__unsafe_ptr=0;
  uint64_t __temp874v__dat__pos=0;
  uint64_t __temp874v__dat__length=0;
  char __temp874v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp875v__unsafe_ptr=0;
  uint64_t __temp875v__dat__pos=0;
  uint64_t __temp875v__dat__length=0;
  char __temp875v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp876v__=0;
  char __temp877v=0;
  uint64_t __temp878v__=0;
  uint64_t n=0;
  uint64_t __temp879v__=0;
  uint64_t __temp880v__=0;
  char* __temp881v__unsafe_ptr=0;
  uint64_t __temp881v__dat__pos=0;
  uint64_t __temp881v__dat__length=0;
  char __temp881v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp882v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp874v__unsafe_ptr,&__temp874v__dat__pos,&__temp874v__dat__length,&__temp874v__dat__first);
  stack__unsafe_ptr=__temp874v__unsafe_ptr;
  stack__dat__pos=__temp874v__dat__pos;
  stack__dat__length=__temp874v__dat__length;
  stack__dat__first=__temp874v__dat__first;
  __temp_errcode=str__temp613v(_needle,&__temp875v__unsafe_ptr,&__temp875v__dat__pos,&__temp875v__dat__length,&__temp875v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp875v__unsafe_ptr;
  needle__dat__pos=__temp875v__dat__pos;
  needle__dat__length=__temp875v__dat__length;
  needle__dat__first=__temp875v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp876v__);
  if(__temp876v__){
  __temp877v=0;
  goto __temp_return;
  }
  len__temp621v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp878v__);
  n=__temp878v__;
  len__temp621v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp879v__);
  __temp_errcode=sub__temp347v(n,__temp879v__,&__temp880v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp794v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp880v__,n,&__temp881v__unsafe_ptr,&__temp881v__dat__pos,&__temp881v__dat__length,&__temp881v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp881v__unsafe_ptr;
  ret__dat__pos=__temp881v__dat__pos;
  ret__dat__length=__temp881v__dat__length;
  ret__dat__first=__temp881v__dat__first;
  eq__temp759v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp882v__);
  __temp877v=__temp882v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1839v=__temp877v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp694v(char** __temp1840v, uint64_t* __temp1841v, uint64_t* __temp1842v, uint64_t* __temp1843v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1844v, uint64_t* __temp1845v, uint64_t* __temp1846v, char* __temp1847v) {
  char* buf__unsafe_ptr=*__temp1840v;
  uint64_t buf__unsafe_size=*__temp1841v;
  uint64_t buf__unsafe_align=*__temp1842v;
  uint64_t pos=*__temp1843v;
  char* __temp695v__unsafe_ptr=0;
  uint64_t __temp695v__dat__pos=0;
  uint64_t __temp695v__dat__length=0;
  char __temp695v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp696v__=0;
  uint64_t __temp697v__=0;
  uint64_t null_pos=0;
  uint64_t __temp698v=0;
  uint64_t __temp699v__=0;
  uint64_t next_pos=0;
  uint64_t __temp700v__=0;
  char __temp701v__=0;
  char* endpos=0;
  uint64_t __temp702v=0;
  uint64_t __temp703v__=0;
  uint64_t prev_pos=0;
  char* __temp704v__unsafe_ptr=0;
  uint64_t __temp704v__dat__pos=0;
  uint64_t __temp704v__dat__length=0;
  char __temp704v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp695v__unsafe_ptr,&__temp695v__dat__pos,&__temp695v__dat__length,&__temp695v__dat__first);
  other__unsafe_ptr=__temp695v__unsafe_ptr;
  other__dat__pos=__temp695v__dat__pos;
  other__dat__length=__temp695v__dat__length;
  other__dat__first=__temp695v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp696v__);
  add__temp170v(pos,__temp696v__,&__temp697v__);
  null_pos=__temp697v__;
  __temp698v=1;
  add__temp170v(null_pos,__temp698v,&__temp699v__);
  next_pos=__temp699v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp700v__);
  gt__temp271v(next_pos,__temp700v__,&__temp701v__);
  if(__temp701v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __temp702v=0;
  add__temp170v(pos,__temp702v,&__temp703v__);
  prev_pos=__temp703v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp704v__unsafe_ptr,&__temp704v__dat__pos,&__temp704v__dat__length,&__temp704v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1840v=buf__unsafe_ptr;
  *__temp1841v=buf__unsafe_size;
  *__temp1842v=buf__unsafe_align;
  *__temp1843v=pos;
  *__temp1844v=__temp704v__unsafe_ptr;
  *__temp1845v=__temp704v__dat__pos;
  *__temp1846v=__temp704v__dat__length;
  *__temp1847v=__temp704v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp674v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1848v) {
  uint64_t __temp675v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp675v__);
  goto __temp_return;
  __temp_return:
  *__temp1848v=__temp675v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1849v) {
  int value=0;
  *__temp1849v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1850v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1850v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp583v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1851v, uint64_t* __temp1852v, uint64_t* __temp1853v, char* __temp1854v) {
  int __temp584v=0;
  int __temp585v=0;
  int __temp586v__=0;
  uint64_t __temp587v__=0;
  char __temp588v__=0;
  uint64_t __temp589v=0;
  uint64_t __temp590v=0;
  char* __temp591v__=0;
  char __temp592v__value=0;
  char* __temp593v__unsafe_ptr=0;
  uint64_t __temp593v__dat__pos=0;
  uint64_t __temp593v__dat__length=0;
  char __temp593v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp585v,&__temp586v__);
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp587v__);
  gt__temp271v(length,__temp587v__,&__temp588v__);
  if(__temp588v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  __temp589v=0;
  __temp590v=0;
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp590v,&__temp591v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp591v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp592v__value,__temp591v__,1);
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp589v,length,__temp592v__value,&__temp593v__unsafe_ptr,&__temp593v__dat__pos,&__temp593v__dat__length,&__temp593v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1851v=__temp593v__unsafe_ptr;
  *__temp1852v=__temp593v__dat__pos;
  *__temp1853v=__temp593v__dat__length;
  *__temp1854v=__temp593v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp640v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1855v, uint64_t* __temp1856v, uint64_t* __temp1857v, char* __temp1858v) {
  uint64_t __temp641v=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v__=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__unsafe_size=0;
  uint64_t __temp644v__unsafe_align=0;
  char __temp645v____temp544v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp646v=0;
  char* __temp647v__unsafe_ptr=0;
  uint64_t __temp647v__dat__pos=0;
  uint64_t __temp647v__dat__length=0;
  char __temp647v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp641v=1;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp642v__);
  add__temp170v(__temp641v,__temp642v__,&__temp643v__);
  __temp_errcode=alloc__temp538v(__temp643v__,&__temp644v__unsafe_ptr,&__temp644v__unsafe_size,&__temp644v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp644v__unsafe_ptr;
  buf__unsafe_size=__temp644v__unsafe_size;
  buf__unsafe_align=__temp644v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp646v=0;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp646v,other__dat__length,other__dat__first,&__temp647v__unsafe_ptr,&__temp647v__dat__pos,&__temp647v__dat__length,&__temp647v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp647v__unsafe_ptr,&__temp645v____temp544v____temp469v__);
  if(__temp645v____temp544v____temp469v__){
  __temp644v__unsafe_size=0;
  __temp644v__unsafe_size=__temp644v__unsafe_size;
  free__temp461v(&__temp647v__unsafe_ptr);
  }
  __temp_return:
  *__temp1855v=__temp647v__unsafe_ptr;
  *__temp1856v=__temp647v__dat__pos;
  *__temp1857v=__temp647v__dat__length;
  *__temp1858v=__temp647v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1859v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1859v=z;
}

int unsafe_temporary_cstr__temp648v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1860v) {
  char* endpos=0;
  char endchar=0;
  char needs_copying=0;
  char* __temp649v__unsafe_ptr=0;
  uint64_t __temp649v__dat__pos=0;
  uint64_t __temp649v__dat__length=0;
  char __temp649v__dat__first=0;
  char __temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp650v____temp644v__unsafe_size=0;
  char* c__unsafe_ptr=0;
  uint64_t c__dat__pos=0;
  uint64_t c__dat__length=0;
  char c__dat__first=0;
  const char* ret=0;
  char __temp651v__=0;
  char __temp652v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(other__dat__length){
  endpos=other__unsafe_ptr+other__dat__pos+other__dat__length;
  endchar=*endpos;
  }
  needs_copying=endchar;
  __temp_errcode=copy_null_terminated__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp649v__unsafe_ptr,&__temp649v__dat__pos,&__temp649v__dat__length,&__temp649v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  c__unsafe_ptr=__temp649v__unsafe_ptr;
  c__dat__pos=__temp649v__dat__pos;
  c__dat__length=__temp649v__dat__length;
  c__dat__first=__temp649v__dat__first;
  ret=c__unsafe_ptr+c__dat__pos;
  goto __temp_return;
  
  __temp_failure:exists__temp573v(ret,&__temp651v__);
  not__temp26v(__temp651v__,&__temp652v__);
  if(__temp652v__){
  exists__temp412v(__temp649v__unsafe_ptr,&__temp650v____temp645v____temp544v____temp469v__);
  if(__temp650v____temp645v____temp544v____temp469v__){
  __temp650v____temp644v__unsafe_size=0;
  __temp650v____temp644v__unsafe_size=__temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp649v__unsafe_ptr);
  }
  }
  __temp_return:
  *__temp1860v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void popen__temp1228v(const char* cmd, char** __temp1861v) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __temp_return;
  __temp_return:
  *__temp1861v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__temp1227v(char* unsafe_ptr, int64_t* __temp1862v) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __temp_return;
  __temp_return:
  *__temp1862v=status;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1863v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1863v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1864v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1864v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1865v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1865v=z;
}

static inline __attribute__((always_inline)) int read__temp1229v(const char* cmd, char** __temp1866v) {
  char* __temp1230v__=0;
  char* unsafe_ptr=0;
  char __temp1231v__=0;
  char __temp1232v__=0;
  char __temp1233v__=0;
  int64_t __temp1234v__=0;
  int64_t status=0;
  uint64_t __temp1235v=0;
  int64_t __temp1236v__=0;
  char __temp1237v__=0;
  char __temp1238v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  popen__temp1228v(cmd,&__temp1230v__);
  unsafe_ptr=__temp1230v__;
  exists__temp412v(unsafe_ptr,&__temp1231v__);
  not__temp26v(__temp1231v__,&__temp1232v__);
  if(__temp1232v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1233v__);
  if(__temp1233v__){
  pclose__temp1227v(unsafe_ptr,&__temp1234v__);
  status=__temp1234v__;
  unsafe_ptr=0;
  __temp1235v=0;
  int__temp395v(__temp1235v,&__temp1236v__);
  neq__temp131v(status,__temp1236v__,&__temp1237v__);
  if(__temp1237v__){
  __temp_complain=31;
  __temp1238v=__temp1238v==0;
  }
  }
  __temp_return:
  *__temp1866v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1240v(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __temp1867v) {
  const char* __temp1241v__=0;
  char __temp1242v____temp651v__=0;
  char __temp1242v____temp652v__=0;
  char* __temp1242v____temp649v__unsafe_ptr=0;
  char __temp1242v____temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp1242v____temp650v____temp644v__unsafe_size=0;
  char* __temp1243v__unsafe_ptr=0;
  char __temp1244v____temp1233v__=0;
  int64_t __temp1244v____temp1234v__=0;
  int64_t __temp1244v__status=0;
  uint64_t __temp1244v____temp1235v=0;
  int64_t __temp1244v____temp1236v__=0;
  char __temp1244v____temp1237v__=0;
  char __temp1244v____temp1238v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp648v(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1229v(__temp1241v__,&__temp1243v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1243v__unsafe_ptr,&__temp1244v____temp1233v__);
  if(__temp1244v____temp1233v__){
  pclose__temp1227v(__temp1243v__unsafe_ptr,&__temp1244v____temp1234v__);
  __temp1244v__status=__temp1244v____temp1234v__;
  __temp1243v__unsafe_ptr=0;
  __temp1244v____temp1235v=0;
  int__temp395v(__temp1244v____temp1235v,&__temp1244v____temp1236v__);
  neq__temp131v(__temp1244v__status,__temp1244v____temp1236v__,&__temp1244v____temp1237v__);
  if(__temp1244v____temp1237v__){
  __temp_complain=31;
  __temp1244v____temp1238v=__temp1244v____temp1238v==0;
  }
  }
  __temp_return:
  *__temp1867v=__temp1243v__unsafe_ptr;
  exists__temp573v(__temp1241v__,&__temp1242v____temp651v__);
  not__temp26v(__temp1242v____temp651v__,&__temp1242v____temp652v__);
  if(__temp1242v____temp652v__){
  exists__temp412v(__temp1242v____temp649v__unsafe_ptr,&__temp1242v____temp650v____temp645v____temp544v____temp469v__);
  if(__temp1242v____temp650v____temp645v____temp544v____temp469v__){
  __temp1242v____temp650v____temp644v__unsafe_size=0;
  __temp1242v____temp650v____temp644v__unsafe_size=__temp1242v____temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp1242v____temp649v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1219v(int64_t value, const char** __temp1868v) {
  int __temp1220v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1868v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1716v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1717v__unsafe_ptr=0;
  char __temp1718v____temp1244v____temp1233v__=0;
  int64_t __temp1718v____temp1244v____temp1234v__=0;
  int64_t __temp1718v____temp1244v__status=0;
  uint64_t __temp1718v____temp1244v____temp1235v=0;
  int64_t __temp1718v____temp1244v____temp1236v__=0;
  char __temp1718v____temp1244v____temp1237v__=0;
  char __temp1718v____temp1244v____temp1238v=0;
  char* __temp1719v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  uint64_t __temp1720v=0;
  uint64_t __temp1721v__=0;
  char* __temp1722v__unsafe_ptr=0;
  uint64_t __temp1722v__unsafe_size=0;
  uint64_t __temp1722v__unsafe_align=0;
  char __temp1723v____temp544v____temp469v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  char __temp1724v=0;
  int64_t __temp1725v=0;
  int64_t error=0;
  const char* __temp1726v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1240v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1717v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1719v__unsafe_ptr=__temp1717v__unsafe_ptr;
  proc__unsafe_ptr=__temp1719v__unsafe_ptr;
  __temp1720v=4;
  KB__temp443v(__temp1720v,&__temp1721v__);
  __temp_errcode=alloc__temp538v(__temp1721v__,&__temp1722v__unsafe_ptr,&__temp1722v__unsafe_size,&__temp1722v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1722v__unsafe_ptr;
  mem__unsafe_size=__temp1722v__unsafe_size;
  mem__unsafe_align=__temp1722v__unsafe_align;
  exists__temp412v(__temp1717v__unsafe_ptr,&__temp1718v____temp1244v____temp1233v__);
  if(__temp1718v____temp1244v____temp1233v__){
  pclose__temp1227v(__temp1717v__unsafe_ptr,&__temp1718v____temp1244v____temp1234v__);
  __temp1718v____temp1244v__status=__temp1718v____temp1244v____temp1234v__;
  __temp1717v__unsafe_ptr=0;
  __temp1718v____temp1244v____temp1235v=0;
  int__temp395v(__temp1718v____temp1244v____temp1235v,&__temp1718v____temp1244v____temp1236v__);
  neq__temp131v(__temp1718v____temp1244v__status,__temp1718v____temp1244v____temp1236v__,&__temp1718v____temp1244v____temp1237v__);
  if(__temp1718v____temp1244v____temp1237v__){
  __temp_complain=31;
  __temp1718v____temp1244v____temp1238v=__temp1718v____temp1244v____temp1238v==0;
  }
  }
  __temp1725v=__temp_complain;
  __temp1724v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1725v;
  __temp1724v=__temp1724v==0;
  if(__temp1724v){
  cstr__temp1219v(error,&__temp1726v__);
  print__temp363v(__temp1726v__);
  }
  
  __temp_failure:exists__temp412v(__temp1722v__unsafe_ptr,&__temp1723v____temp544v____temp469v__);
  if(__temp1723v____temp544v____temp469v__){
  __temp1722v__unsafe_size=0;
  __temp1722v__unsafe_size=__temp1722v__unsafe_size;
  free__temp461v(&__temp1722v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1728v() {
  const char* path=0;
  uint64_t __temp1730v=0;
  char* __temp1731v__unsafe_ptr=0;
  uint64_t __temp1731v__unsafe_size=0;
  uint64_t __temp1731v__unsafe_align=0;
  char __temp1732v____temp544v____temp469v__=0;
  char* __temp1733v__buf__unsafe_ptr=0;
  uint64_t __temp1733v__buf__unsafe_size=0;
  uint64_t __temp1733v__buf__unsafe_align=0;
  uint64_t __temp1733v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__dat__pos=0;
  uint64_t __temp1735v__dat__length=0;
  char __temp1735v__dat__first=0;
  char* __temp1736v__unsafe_ptr=0;
  uint64_t __temp1736v__dat__pos=0;
  uint64_t __temp1736v__dat__length=0;
  char __temp1736v__dat__first=0;
  char* __temp1737v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1739v=0;
  uint64_t __temp1740v__=0;
  char* __temp1741v__unsafe_ptr=0;
  uint64_t __temp1741v__unsafe_size=0;
  uint64_t __temp1741v__unsafe_align=0;
  char __temp1742v____temp544v____temp469v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1743v=0;
  char* __temp1744v__unsafe_ptr=0;
  uint64_t __temp1744v__dat__pos=0;
  uint64_t __temp1744v__dat__length=0;
  char __temp1744v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1746v__=0;
  char __temp1747v__=0;
  char* __temp1748v__buf__unsafe_ptr=0;
  uint64_t __temp1748v__buf__unsafe_size=0;
  uint64_t __temp1748v__buf__unsafe_align=0;
  uint64_t __temp1748v__pos=0;
  char* __temp1749v__unsafe_ptr=0;
  uint64_t __temp1749v__dat__pos=0;
  uint64_t __temp1749v__dat__length=0;
  char __temp1749v__dat__first=0;
  char* __temp1750v__unsafe_ptr=0;
  uint64_t __temp1750v__dat__pos=0;
  uint64_t __temp1750v__dat__length=0;
  char __temp1750v__dat__first=0;
  uint64_t __temp1751v__=0;
  char* __temp1752v__unsafe_ptr=0;
  uint64_t __temp1752v__dat__pos=0;
  uint64_t __temp1752v__dat__length=0;
  char __temp1752v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1729v;
  __temp1730v=256;
  __temp_errcode=alloc__temp538v(__temp1730v,&__temp1731v__unsafe_ptr,&__temp1731v__unsafe_size,&__temp1731v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1731v__unsafe_ptr,&__temp1731v__unsafe_size,&__temp1731v__unsafe_align,&__temp1733v__buf__unsafe_ptr,&__temp1733v__buf__unsafe_size,&__temp1733v__buf__unsafe_align,&__temp1733v__pos);
  bp__buf__unsafe_ptr=__temp1733v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1733v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1733v__buf__unsafe_align;
  bp__pos=__temp1733v__pos;
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1734v,&__temp1735v__unsafe_ptr,&__temp1735v__dat__pos,&__temp1735v__dat__length,&__temp1735v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1736v__unsafe_ptr,&__temp1736v__dat__pos,&__temp1736v__dat__length,&__temp1736v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1626v(path,&__temp1737v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1737v__unsafe_ptr;
  __temp1739v=4;
  KB__temp443v(__temp1739v,&__temp1740v__);
  __temp_errcode=alloc__temp538v(__temp1740v__,&__temp1741v__unsafe_ptr,&__temp1741v__unsafe_size,&__temp1741v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1741v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1741v__unsafe_size;
  proc_buf__unsafe_align=__temp1741v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1641v(&test_dir__unsafe_ptr,&__temp1744v__unsafe_ptr,&__temp1744v__dat__pos,&__temp1744v__dat__length,&__temp1744v__dat__first);
  __temp1743v=__temp_complain;
  entry__unsafe_ptr=__temp1744v__unsafe_ptr;
  entry__dat__pos=__temp1744v__dat__pos;
  entry__dat__length=__temp1744v__dat__length;
  entry__dat__first=__temp1744v__dat__first;
  __temp1743v=__temp1743v==0;
  if(!__temp1743v){
  break;
  }
  __temp_errcode=ends_with__temp873v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1745v,&__temp1746v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1746v__,&__temp1747v__);
  if(__temp1747v__){
  continue;
  }
  __temp1748v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1748v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1748v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1748v__pos=bp__pos;
  str__temp606v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1749v__unsafe_ptr,&__temp1749v__dat__pos,&__temp1749v__dat__length,&__temp1749v__dat__first);
  __temp_errcode=copy_null_terminated__temp694v(&__temp1748v__buf__unsafe_ptr,&__temp1748v__buf__unsafe_size,&__temp1748v__buf__unsafe_align,&__temp1748v__pos,__temp1749v__unsafe_ptr,__temp1749v__dat__pos,__temp1749v__dat__length,__temp1749v__dat__first,&__temp1750v__unsafe_ptr,&__temp1750v__dat__pos,&__temp1750v__dat__length,&__temp1750v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp674v(__temp1750v__unsafe_ptr,__temp1750v__dat__pos,__temp1750v__dat__length,__temp1750v__dat__first,&__temp1751v__);
  __temp_errcode=str__temp583v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_align,__temp1751v__,&__temp1752v__unsafe_ptr,&__temp1752v__dat__pos,&__temp1752v__dat__length,&__temp1752v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1752v__unsafe_ptr;
  command__dat__pos=__temp1752v__dat__pos;
  command__dat__length=__temp1752v__dat__length;
  command__dat__first=__temp1752v__dat__first;
  print__temp718v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1716v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1741v__unsafe_ptr,&__temp1742v____temp544v____temp469v__);
  if(__temp1742v____temp544v____temp469v__){
  __temp1741v__unsafe_size=0;
  __temp1741v__unsafe_size=__temp1741v__unsafe_size;
  free__temp461v(&__temp1741v__unsafe_ptr);
  }
  closedir__temp1625v(__temp1737v__unsafe_ptr);
  exists__temp412v(__temp1731v__unsafe_ptr,&__temp1732v____temp544v____temp469v__);
  if(__temp1732v____temp544v____temp469v__){
  __temp1731v__unsafe_size=0;
  __temp1731v__unsafe_size=__temp1731v__unsafe_size;
  free__temp461v(&__temp1731v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1728v();return 0;}