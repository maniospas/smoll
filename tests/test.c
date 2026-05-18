#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1760v=" bytes downloaded\n";
const char* const __temp1750v="https://www.google.com/";
const char* const __temp1685v="\" -o ";
const char* const __temp1684v="curl -s -X GET \"";
const char* const __temp1720v=".tmp";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1762v, uint64_t* __temp1763v, uint64_t* __temp1764v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1762v=unsafe_ptr;
  *__temp1763v=unsafe_size;
  *__temp1764v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1765v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1765v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1766v) {
  char* allocated=*__temp1766v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1766v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1767v) {
  int value=0;
  *__temp1767v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1768v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1768v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1769v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1769v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1770v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1770v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1771v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1771v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1772v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1773v) {
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
  *__temp1773v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1774v, uint64_t* __temp1775v, uint64_t* __temp1776v, uint64_t size, char** __temp1777v, uint64_t* __temp1778v, uint64_t* __temp1779v) {
  char* buffer__unsafe_ptr=*__temp1774v;
  uint64_t buffer__unsafe_size=*__temp1775v;
  uint64_t buffer__unsafe_align=*__temp1776v;
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
  *__temp1774v=buffer__unsafe_ptr;
  *__temp1775v=buffer__unsafe_size;
  *__temp1776v=buffer__unsafe_align;
  *__temp1777v=buffer__unsafe_ptr;
  *__temp1778v=buffer__unsafe_size;
  *__temp1779v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1780v, uint64_t* __temp1781v, uint64_t* __temp1782v) {
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
  *__temp1780v=__temp543v__unsafe_ptr;
  *__temp1781v=__temp543v__unsafe_size;
  *__temp1782v=__temp543v__unsafe_align;
  
  return __temp_errcode;
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

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1806v, uint64_t* __temp1807v, uint64_t* __temp1808v, char** __temp1809v, uint64_t* __temp1810v, uint64_t* __temp1811v, uint64_t* __temp1812v) {
  char* buf__unsafe_ptr=*__temp1806v;
  uint64_t buf__unsafe_size=*__temp1807v;
  uint64_t buf__unsafe_align=*__temp1808v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1806v=buf__unsafe_ptr;
  *__temp1807v=buf__unsafe_size;
  *__temp1808v=buf__unsafe_align;
  *__temp1809v=buf__unsafe_ptr;
  *__temp1810v=buf__unsafe_size;
  *__temp1811v=buf__unsafe_align;
  *__temp1812v=pos;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1813v) {
  goto __temp_return;
  __temp_return:
  *__temp1813v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1814v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1814v=z;
}

int copy__temp685v(char** __temp1815v, uint64_t* __temp1816v, uint64_t* __temp1817v, uint64_t* __temp1818v, const char* _other, char** __temp1819v, uint64_t* __temp1820v, uint64_t* __temp1821v, char* __temp1822v) {
  char* buf__unsafe_ptr=*__temp1815v;
  uint64_t buf__unsafe_size=*__temp1816v;
  uint64_t buf__unsafe_align=*__temp1817v;
  uint64_t pos=*__temp1818v;
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
  *__temp1815v=buf__unsafe_ptr;
  *__temp1816v=buf__unsafe_size;
  *__temp1817v=buf__unsafe_align;
  *__temp1818v=pos;
  *__temp1819v=__temp693v__unsafe_ptr;
  *__temp1820v=__temp693v__dat__pos;
  *__temp1821v=__temp693v__dat__length;
  *__temp1822v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1823v, uint64_t* __temp1824v, uint64_t* __temp1825v, char* __temp1826v) {
  goto __temp_return;
  __temp_return:
  *__temp1823v=other__unsafe_ptr;
  *__temp1824v=other__dat__pos;
  *__temp1825v=other__dat__length;
  *__temp1826v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1827v, uint64_t* __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1831v, uint64_t* __temp1832v, uint64_t* __temp1833v, char* __temp1834v) {
  char* buf__unsafe_ptr=*__temp1827v;
  uint64_t buf__unsafe_size=*__temp1828v;
  uint64_t buf__unsafe_align=*__temp1829v;
  uint64_t pos=*__temp1830v;
  char* __temp677v__unsafe_ptr=0;
  uint64_t __temp677v__dat__pos=0;
  uint64_t __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp678v__=0;
  uint64_t __temp679v__=0;
  uint64_t next_pos=0;
  uint64_t __temp680v__=0;
  char __temp681v__=0;
  uint64_t __temp682v=0;
  uint64_t __temp683v__=0;
  uint64_t prev_pos=0;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__unsafe_ptr,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__unsafe_ptr=__temp677v__unsafe_ptr;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp170v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp271v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp170v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1827v=buf__unsafe_ptr;
  *__temp1828v=buf__unsafe_size;
  *__temp1829v=buf__unsafe_align;
  *__temp1830v=pos;
  *__temp1831v=__temp684v__unsafe_ptr;
  *__temp1832v=__temp684v__dat__pos;
  *__temp1833v=__temp684v__dat__length;
  *__temp1834v=__temp684v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1835v) {
  int value=0;
  *__temp1835v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1836v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1836v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp583v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1837v, uint64_t* __temp1838v, uint64_t* __temp1839v, char* __temp1840v) {
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
  *__temp1837v=__temp593v__unsafe_ptr;
  *__temp1838v=__temp593v__dat__pos;
  *__temp1839v=__temp593v__dat__length;
  *__temp1840v=__temp593v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp640v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1841v, uint64_t* __temp1842v, uint64_t* __temp1843v, char* __temp1844v) {
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
  *__temp1841v=__temp647v__unsafe_ptr;
  *__temp1842v=__temp647v__dat__pos;
  *__temp1843v=__temp647v__dat__length;
  *__temp1844v=__temp647v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1845v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1845v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1846v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1846v=z;
}

int unsafe_temporary_cstr__temp648v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1847v) {
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
  *__temp1847v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int safe__temp1319v(const char* cmd, const char** __temp1848v) {
  char unsafe_chars=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_chars=0;
  const char*p=(const char*)cmd;
  if(unsafe_chars){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1848v=cmd;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1318v(const char* cmd, int64_t* __temp1849v) {
  int64_t result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1849v=result;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1850v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1850v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1851v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1851v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1852v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1852v=z;
}

static inline __attribute__((always_inline)) int system__temp1327v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1328v__=0;
  char __temp1329v____temp651v__=0;
  char __temp1329v____temp652v__=0;
  char* __temp1329v____temp649v__unsafe_ptr=0;
  char __temp1329v____temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp1329v____temp650v____temp644v__unsafe_size=0;
  const char* __temp1330v__=0;
  int64_t __temp1331v__=0;
  int64_t result=0;
  uint64_t __temp1332v=0;
  int64_t __temp1333v__=0;
  char __temp1334v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp648v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1328v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=safe__temp1319v(__temp1328v__,&__temp1330v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1318v(__temp1330v__,&__temp1331v__);
  result=__temp1331v__;
  __temp1332v=0;
  int__temp395v(__temp1332v,&__temp1333v__);
  neq__temp131v(result,__temp1333v__,&__temp1334v__);
  if(__temp1334v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp573v(__temp1328v__,&__temp1329v____temp651v__);
  not__temp26v(__temp1329v____temp651v__,&__temp1329v____temp652v__);
  if(__temp1329v____temp652v__){
  exists__temp412v(__temp1329v____temp649v__unsafe_ptr,&__temp1329v____temp650v____temp645v____temp544v____temp469v__);
  if(__temp1329v____temp650v____temp645v____temp544v____temp469v__){
  __temp1329v____temp650v____temp644v__unsafe_size=0;
  __temp1329v____temp650v____temp644v__unsafe_size=__temp1329v____temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp1329v____temp649v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

int raw_get__temp1683v(char* url__unsafe_ptr, uint64_t url__dat__pos, uint64_t url__dat__length, char url__dat__first, char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first) {
  const char* prefix=0;
  const char* postfix=0;
  uint64_t __temp1686v__=0;
  uint64_t __temp1687v__=0;
  char* __temp1688v__unsafe_ptr=0;
  uint64_t __temp1688v__dat__pos=0;
  uint64_t __temp1688v__dat__length=0;
  char __temp1688v__dat__first=0;
  uint64_t __temp1689v__=0;
  char* __temp1690v__unsafe_ptr=0;
  uint64_t __temp1690v__dat__pos=0;
  uint64_t __temp1690v__dat__length=0;
  char __temp1690v__dat__first=0;
  uint64_t __temp1691v__=0;
  uint64_t __temp1692v=0;
  uint64_t __temp1693v__=0;
  uint64_t __temp1694v__=0;
  uint64_t __temp1695v__=0;
  uint64_t __temp1696v__=0;
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__unsafe_size=0;
  uint64_t __temp1697v__unsafe_align=0;
  char __temp1698v____temp544v____temp469v__=0;
  char* __temp1699v__buf__unsafe_ptr=0;
  uint64_t __temp1699v__buf__unsafe_size=0;
  uint64_t __temp1699v__buf__unsafe_align=0;
  uint64_t __temp1699v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1700v__unsafe_ptr=0;
  uint64_t __temp1700v__dat__pos=0;
  uint64_t __temp1700v__dat__length=0;
  char __temp1700v__dat__first=0;
  char* __temp1701v__unsafe_ptr=0;
  uint64_t __temp1701v__dat__pos=0;
  uint64_t __temp1701v__dat__length=0;
  char __temp1701v__dat__first=0;
  char* __temp1702v__unsafe_ptr=0;
  uint64_t __temp1702v__dat__pos=0;
  uint64_t __temp1702v__dat__length=0;
  char __temp1702v__dat__first=0;
  char* __temp1703v__unsafe_ptr=0;
  uint64_t __temp1703v__dat__pos=0;
  uint64_t __temp1703v__dat__length=0;
  char __temp1703v__dat__first=0;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__dat__pos=0;
  uint64_t __temp1704v__dat__length=0;
  char __temp1704v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  prefix=__temp1684v;
  postfix=__temp1685v;
  len__temp621v(url__unsafe_ptr,url__dat__pos,url__dat__length,url__dat__first,&__temp1686v__);
  len__temp621v(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__temp1687v__);
  __temp_errcode=str__temp613v(prefix,&__temp1688v__unsafe_ptr,&__temp1688v__dat__pos,&__temp1688v__dat__length,&__temp1688v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  len__temp621v(__temp1688v__unsafe_ptr,__temp1688v__dat__pos,__temp1688v__dat__length,__temp1688v__dat__first,&__temp1689v__);
  __temp_errcode=str__temp613v(postfix,&__temp1690v__unsafe_ptr,&__temp1690v__dat__pos,&__temp1690v__dat__length,&__temp1690v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  len__temp621v(__temp1690v__unsafe_ptr,__temp1690v__dat__pos,__temp1690v__dat__length,__temp1690v__dat__first,&__temp1691v__);
  __temp1692v=1;
  add__temp170v(__temp1691v__,__temp1692v,&__temp1693v__);
  add__temp170v(__temp1689v__,__temp1693v__,&__temp1694v__);
  add__temp170v(__temp1687v__,__temp1694v__,&__temp1695v__);
  add__temp170v(__temp1686v__,__temp1695v__,&__temp1696v__);
  __temp_errcode=alloc__temp538v(__temp1696v__,&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_align,&__temp1699v__buf__unsafe_ptr,&__temp1699v__buf__unsafe_size,&__temp1699v__buf__unsafe_align,&__temp1699v__pos);
  buf__buf__unsafe_ptr=__temp1699v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1699v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1699v__buf__unsafe_align;
  buf__pos=__temp1699v__pos;
  __temp_errcode=copy__temp685v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,prefix,&__temp1700v__unsafe_ptr,&__temp1700v__dat__pos,&__temp1700v__dat__length,&__temp1700v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp676v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,url__unsafe_ptr,url__dat__pos,url__dat__length,url__dat__first,&__temp1701v__unsafe_ptr,&__temp1701v__dat__pos,&__temp1701v__dat__length,&__temp1701v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,postfix,&__temp1702v__unsafe_ptr,&__temp1702v__dat__pos,&__temp1702v__dat__length,&__temp1702v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp676v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__temp1703v__unsafe_ptr,&__temp1703v__dat__pos,&__temp1703v__dat__length,&__temp1703v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp583v(buf__buf__unsafe_ptr,buf__buf__unsafe_size,buf__buf__unsafe_align,buf__pos,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=system__temp1327v(__temp1704v__unsafe_ptr,__temp1704v__dat__pos,__temp1704v__dat__length,__temp1704v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1697v__unsafe_ptr,&__temp1698v____temp544v____temp469v__);
  if(__temp1698v____temp544v____temp469v__){
  __temp1697v__unsafe_size=0;
  __temp1697v__unsafe_size=__temp1697v__unsafe_size;
  free__temp461v(&__temp1697v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp1737v(const char* url, char** __temp1853v, uint64_t* __temp1854v, uint64_t* __temp1855v, char* __temp1856v) {
  int __temp1738v=0;
  const char* path=0;
  char* __temp1739v__unsafe_ptr=0;
  uint64_t __temp1739v__dat__pos=0;
  uint64_t __temp1739v__dat__length=0;
  char __temp1739v__dat__first=0;
  char* __temp1740v__unsafe_ptr=0;
  uint64_t __temp1740v__dat__pos=0;
  uint64_t __temp1740v__dat__length=0;
  char __temp1740v__dat__first=0;
  char* __temp1742v__unsafe_ptr=0;
  uint64_t __temp1742v__dat__pos=0;
  uint64_t __temp1742v__dat__length=0;
  char __temp1742v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1720v;
  __temp_errcode=str__temp613v(url,&__temp1739v__unsafe_ptr,&__temp1739v__dat__pos,&__temp1739v__dat__length,&__temp1739v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(path,&__temp1740v__unsafe_ptr,&__temp1740v__dat__pos,&__temp1740v__dat__length,&__temp1740v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=raw_get__temp1683v(__temp1739v__unsafe_ptr,__temp1739v__dat__pos,__temp1739v__dat__length,__temp1739v__dat__first,__temp1740v__unsafe_ptr,__temp1740v__dat__pos,__temp1740v__dat__length,__temp1740v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(path,&__temp1742v__unsafe_ptr,&__temp1742v__dat__pos,&__temp1742v__dat__length,&__temp1742v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1853v=__temp1742v__unsafe_ptr;
  *__temp1854v=__temp1742v__dat__pos;
  *__temp1855v=__temp1742v__dat__length;
  *__temp1856v=__temp1742v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1335v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1857v) {
  const char* __temp1336v__=0;
  char __temp1337v____temp651v__=0;
  char __temp1337v____temp652v__=0;
  char* __temp1337v____temp649v__unsafe_ptr=0;
  char __temp1337v____temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp1337v____temp650v____temp644v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1338v__=0;
  char __temp1339v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp648v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1336v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1336v__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp412v(unsafe_ptr,&__temp1338v__);
  not__temp26v(__temp1338v__,&__temp1339v__);
  if(__temp1339v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1857v=unsafe_ptr;
  exists__temp573v(__temp1336v__,&__temp1337v____temp651v__);
  not__temp26v(__temp1337v____temp651v__,&__temp1337v____temp652v__);
  if(__temp1337v____temp652v__){
  exists__temp412v(__temp1337v____temp649v__unsafe_ptr,&__temp1337v____temp650v____temp645v____temp544v____temp469v__);
  if(__temp1337v____temp650v____temp645v____temp544v____temp469v__){
  __temp1337v____temp650v____temp644v__unsafe_size=0;
  __temp1337v____temp650v____temp644v__unsafe_size=__temp1337v____temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp1337v____temp649v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1858v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1858v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1859v) {
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
  *__temp1859v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1552v(char** __temp1860v, uint64_t* __temp1861v, uint64_t* __temp1862v, char** __temp1863v, char** __temp1864v, uint64_t* __temp1865v, uint64_t* __temp1866v, char* __temp1867v) {
  char* buf__unsafe_ptr=*__temp1860v;
  uint64_t buf__unsafe_size=*__temp1861v;
  uint64_t buf__unsafe_align=*__temp1862v;
  char* f__unsafe_ptr=*__temp1863v;
  int __temp1553v=0;
  uint64_t __temp1554v=0;
  uint64_t __temp1555v=0;
  uint64_t pos=0;
  char __temp1556v__=0;
  char __temp1557v__=0;
  char* __temp1558v__=0;
  char* contents=0;
  uint64_t __temp1559v__=0;
  uint64_t size=0;
  char* obtained=0;
  char __temp1560v__=0;
  char __temp1561v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1562v__=0;
  char* __temp1563v__unsafe_ptr=0;
  uint64_t __temp1563v__dat__pos=0;
  uint64_t __temp1563v__dat__length=0;
  char __temp1563v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1554v=0;
  __temp1555v=__temp1554v;
  pos=__temp1555v;
  exists__temp412v(buf__unsafe_ptr,&__temp1556v__);
  not__temp26v(__temp1556v__,&__temp1557v__);
  if(__temp1557v__){
  __temp_errcode=41;
  goto __temp_failure;
  }
  add__temp463v(buf__unsafe_ptr,pos,&__temp1558v__);
  contents=__temp1558v__;
  __temp_errcode=sub__temp347v(buf__unsafe_size,pos,&__temp1559v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1559v__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__temp412v(obtained,&__temp1560v__);
  not__temp26v(__temp1560v__,&__temp1561v__);
  if(__temp1561v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__temp170v(pos,bytes_read,&__temp1562v__);
  pos=__temp1562v__;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,bytes_read,&__temp1563v__unsafe_ptr,&__temp1563v__dat__pos,&__temp1563v__dat__length,&__temp1563v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1860v=buf__unsafe_ptr;
  *__temp1861v=buf__unsafe_size;
  *__temp1862v=buf__unsafe_align;
  *__temp1863v=f__unsafe_ptr;
  *__temp1864v=__temp1563v__unsafe_ptr;
  *__temp1865v=__temp1563v__dat__pos;
  *__temp1866v=__temp1563v__dat__length;
  *__temp1867v=__temp1563v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value, const char* endl) {
  int __temp375v=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1746v() {
  uint64_t __temp1747v=0;
  char* __temp1748v__unsafe_ptr=0;
  uint64_t __temp1748v__unsafe_size=0;
  uint64_t __temp1748v__unsafe_align=0;
  char __temp1749v____temp544v____temp469v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint64_t mem__unsafe_align=0;
  char* __temp1751v__unsafe_ptr=0;
  uint64_t __temp1751v__dat__pos=0;
  uint64_t __temp1751v__dat__length=0;
  char __temp1751v__dat__first=0;
  char* __temp1752v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1754v=0;
  uint64_t __temp1755v=0;
  uint64_t size=0;
  char __temp1756v=0;
  char* __temp1757v__unsafe_ptr=0;
  uint64_t __temp1757v__dat__pos=0;
  uint64_t __temp1757v__dat__length=0;
  char __temp1757v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1758v__=0;
  uint64_t __temp1759v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1747v=4096;
  __temp_errcode=alloc__temp538v(__temp1747v,&__temp1748v__unsafe_ptr,&__temp1748v__unsafe_size,&__temp1748v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1748v__unsafe_ptr;
  mem__unsafe_size=__temp1748v__unsafe_size;
  mem__unsafe_align=__temp1748v__unsafe_align;
  __temp_errcode=get__temp1737v(__temp1750v,&__temp1751v__unsafe_ptr,&__temp1751v__dat__pos,&__temp1751v__dat__length,&__temp1751v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1335v(__temp1751v__unsafe_ptr,__temp1751v__dat__pos,__temp1751v__dat__length,__temp1751v__dat__first,&__temp1752v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1752v__unsafe_ptr;
  __temp1754v=0;
  __temp1755v=__temp1754v;
  size=__temp1755v;
  while(1){
  __temp_complain=line__temp1552v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_align,&f__unsafe_ptr,&__temp1757v__unsafe_ptr,&__temp1757v__dat__pos,&__temp1757v__dat__length,&__temp1757v__dat__first);
  __temp1756v=__temp_complain;
  line__unsafe_ptr=__temp1757v__unsafe_ptr;
  line__dat__pos=__temp1757v__dat__pos;
  line__dat__length=__temp1757v__dat__length;
  line__dat__first=__temp1757v__dat__first;
  __temp1756v=__temp1756v==0;
  if(!__temp1756v){
  break;
  }
  len__temp621v(line__unsafe_ptr,line__dat__pos,line__dat__length,line__dat__first,&__temp1758v__);
  add__temp170v(size,__temp1758v__,&__temp1759v__);
  size=__temp1759v__;
  }
  print__temp374v(size,__temp1760v);
  
  __temp_failure:if(__temp1752v__unsafe_ptr){
  fclose((FILE*)__temp1752v__unsafe_ptr);
  __temp1752v__unsafe_ptr=0;
  }
  exists__temp412v(__temp1748v__unsafe_ptr,&__temp1749v____temp544v____temp469v__);
  if(__temp1749v____temp544v____temp469v__){
  __temp1748v__unsafe_size=0;
  __temp1748v__unsafe_size=__temp1748v__unsafe_size;
  free__temp461v(&__temp1748v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1746v();return 0;}