#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1752v="./tests/passing/";
const char* const __temp797v="";
const char* const __temp365v="\n";
const char* const __temp1768v=".s";
const char* const __temp1757v="./smoll ";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1778v, uint64_t* __temp1779v, uint64_t* __temp1780v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1778v=unsafe_ptr;
  *__temp1779v=unsafe_size;
  *__temp1780v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1781v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1782v) {
  char* allocated=*__temp1782v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1782v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1783v) {
  int value=0;
  *__temp1783v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1784v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1784v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1785v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1785v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1786v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1786v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1787v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1787v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1788v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1788v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1789v) {
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
  *__temp1789v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1790v, uint64_t* __temp1791v, uint64_t* __temp1792v, uint64_t size, char** __temp1793v, uint64_t* __temp1794v, uint64_t* __temp1795v) {
  char* buffer__unsafe_ptr=*__temp1790v;
  uint64_t buffer__unsafe_size=*__temp1791v;
  uint64_t buffer__unsafe_align=*__temp1792v;
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
  *__temp1790v=buffer__unsafe_ptr;
  *__temp1791v=buffer__unsafe_size;
  *__temp1792v=buffer__unsafe_align;
  *__temp1793v=buffer__unsafe_ptr;
  *__temp1794v=buffer__unsafe_size;
  *__temp1795v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1796v, uint64_t* __temp1797v, uint64_t* __temp1798v) {
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
  *__temp1796v=__temp543v__unsafe_ptr;
  *__temp1797v=__temp543v__unsafe_size;
  *__temp1798v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1799v, uint64_t* __temp1800v, uint64_t* __temp1801v, char** __temp1802v, uint64_t* __temp1803v, uint64_t* __temp1804v, uint64_t* __temp1805v) {
  char* buf__unsafe_ptr=*__temp1799v;
  uint64_t buf__unsafe_size=*__temp1800v;
  uint64_t buf__unsafe_align=*__temp1801v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1799v=buf__unsafe_ptr;
  *__temp1800v=buf__unsafe_size;
  *__temp1801v=buf__unsafe_align;
  *__temp1802v=buf__unsafe_ptr;
  *__temp1803v=buf__unsafe_size;
  *__temp1804v=buf__unsafe_align;
  *__temp1805v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1806v) {
  *__temp1806v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1807v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1807v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1808v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1808v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1809v) {
  *__temp1809v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1810v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1810v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1811v) {
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
  *__temp1811v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1812v, uint64_t* __temp1813v, uint64_t* __temp1814v, char* __temp1815v) {
  goto __temp_return;
  __temp_return:
  *__temp1812v=unsafe_ptr;
  *__temp1813v=dat__pos;
  *__temp1814v=dat__length;
  *__temp1815v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1816v, uint64_t* __temp1817v, uint64_t* __temp1818v, char* __temp1819v) {
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
  *__temp1816v=__temp582v__unsafe_ptr;
  *__temp1817v=__temp582v__dat__pos;
  *__temp1818v=__temp582v__dat__length;
  *__temp1819v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1820v, uint64_t* __temp1821v, uint64_t* __temp1822v, char* __temp1823v) {
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
  *__temp1820v=__temp612v__unsafe_ptr;
  *__temp1821v=__temp612v__dat__pos;
  *__temp1822v=__temp612v__dat__length;
  *__temp1823v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1824v, uint64_t* __temp1825v, uint64_t* __temp1826v, char* __temp1827v) {
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
  *__temp1824v=__temp620v__unsafe_ptr;
  *__temp1825v=__temp620v__dat__pos;
  *__temp1826v=__temp620v__dat__length;
  *__temp1827v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1828v) {
  goto __temp_return;
  __temp_return:
  *__temp1828v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1829v) {
  goto __temp_return;
  __temp_return:
  *__temp1829v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1830v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1830v=z;
}

int copy__temp685v(char** __temp1831v, uint64_t* __temp1832v, uint64_t* __temp1833v, uint64_t* __temp1834v, const char* _other, char** __temp1835v, uint64_t* __temp1836v, uint64_t* __temp1837v, char* __temp1838v) {
  char* buf__unsafe_ptr=*__temp1831v;
  uint64_t buf__unsafe_size=*__temp1832v;
  uint64_t buf__unsafe_align=*__temp1833v;
  uint64_t pos=*__temp1834v;
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
  *__temp1831v=buf__unsafe_ptr;
  *__temp1832v=buf__unsafe_size;
  *__temp1833v=buf__unsafe_align;
  *__temp1834v=pos;
  *__temp1835v=__temp693v__unsafe_ptr;
  *__temp1836v=__temp693v__dat__pos;
  *__temp1837v=__temp693v__dat__length;
  *__temp1838v=__temp693v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1839v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1839v=z;
}

static inline __attribute__((always_inline)) int read__temp1660v(const char* path, char** __temp1840v) {
  char* unsafe_ptr=0;
  char __temp1661v__=0;
  char __temp1662v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1661v__);
  not__temp26v(__temp1661v__,&__temp1662v__);
  if(__temp1662v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1840v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1841v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1841v=__temp445v__;
}

static inline __attribute__((always_inline)) int entry__temp1669v(char** __temp1842v, char** __temp1843v, uint64_t* __temp1844v, uint64_t* __temp1845v, char* __temp1846v) {
  char* f__unsafe_ptr=*__temp1842v;
  char __temp1670v__=0;
  char __temp1671v__=0;
  char* de=0;
  char __temp1672v__=0;
  char __temp1673v__=0;
  const char* dirname=0;
  char* __temp1674v__unsafe_ptr=0;
  uint64_t __temp1674v__dat__pos=0;
  uint64_t __temp1674v__dat__length=0;
  char __temp1674v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1670v__);
  not__temp26v(__temp1670v__,&__temp1671v__);
  if(__temp1671v__){
  __temp_errcode=46;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1672v__);
  not__temp26v(__temp1672v__,&__temp1673v__);
  if(__temp1673v__){
  __temp_errcode=47;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  __temp_errcode=str__temp613v(dirname,&__temp1674v__unsafe_ptr,&__temp1674v__dat__pos,&__temp1674v__dat__length,&__temp1674v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1842v=f__unsafe_ptr;
  *__temp1843v=__temp1674v__unsafe_ptr;
  *__temp1844v=__temp1674v__dat__pos;
  *__temp1845v=__temp1674v__dat__length;
  *__temp1846v=__temp1674v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1847v, uint64_t* __temp1848v, uint64_t* __temp1849v, char* __temp1850v) {
  goto __temp_return;
  __temp_return:
  *__temp1847v=other__unsafe_ptr;
  *__temp1848v=other__dat__pos;
  *__temp1849v=other__dat__length;
  *__temp1850v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1851v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1851v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1852v) {
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
  *__temp1852v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp755v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1853v) {
  uint64_t __temp756v__=0;
  char* __temp757v__=0;
  add__temp170v(s__dat__pos,i,&__temp756v__);
  add__temp463v(s__unsafe_ptr,__temp756v__,&__temp757v__);
  goto __temp_return;
  __temp_return:
  *__temp1853v=__temp757v__;
}

int slice__temp794v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1854v, uint64_t* __temp1855v, uint64_t* __temp1856v, char* __temp1857v) {
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
  *__temp1854v=__temp798v__unsafe_ptr;
  *__temp1855v=__temp798v__dat__pos;
  *__temp1856v=__temp798v__dat__length;
  *__temp1857v=__temp798v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp625v(char x, char y, char* __temp1858v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1858v=z;
}

static inline __attribute__((always_inline)) void eq__temp759v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1859v) {
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
  *__temp1859v=__temp763v;
}

static inline __attribute__((always_inline)) int ends_with__temp873v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1860v) {
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
  *__temp1860v=__temp877v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp694v(char** __temp1861v, uint64_t* __temp1862v, uint64_t* __temp1863v, uint64_t* __temp1864v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1865v, uint64_t* __temp1866v, uint64_t* __temp1867v, char* __temp1868v) {
  char* buf__unsafe_ptr=*__temp1861v;
  uint64_t buf__unsafe_size=*__temp1862v;
  uint64_t buf__unsafe_align=*__temp1863v;
  uint64_t pos=*__temp1864v;
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
  buf__unsafe_ptr[null_pos]=0;
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
  *__temp1861v=buf__unsafe_ptr;
  *__temp1862v=buf__unsafe_size;
  *__temp1863v=buf__unsafe_align;
  *__temp1864v=pos;
  *__temp1865v=__temp704v__unsafe_ptr;
  *__temp1866v=__temp704v__dat__pos;
  *__temp1867v=__temp704v__dat__length;
  *__temp1868v=__temp704v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp674v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1869v) {
  uint64_t __temp675v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp675v__);
  goto __temp_return;
  __temp_return:
  *__temp1869v=__temp675v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1870v) {
  int value=0;
  *__temp1870v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1871v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1871v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp583v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t length, char** __temp1872v, uint64_t* __temp1873v, uint64_t* __temp1874v, char* __temp1875v) {
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
  *__temp1872v=__temp593v__unsafe_ptr;
  *__temp1873v=__temp593v__dat__pos;
  *__temp1874v=__temp593v__dat__length;
  *__temp1875v=__temp593v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp640v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1876v, uint64_t* __temp1877v, uint64_t* __temp1878v, char* __temp1879v) {
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
  *__temp1876v=__temp647v__unsafe_ptr;
  *__temp1877v=__temp647v__dat__pos;
  *__temp1878v=__temp647v__dat__length;
  *__temp1879v=__temp647v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void exists__temp573v(const char* c, char* __temp1880v) {
  char z=0;
  z=c!=0;
  goto __temp_return;
  __temp_return:
  *__temp1880v=z;
}

int unsafe_temporary_cstr__temp648v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1881v) {
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
  *__temp1881v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1882v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1882v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1883v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1883v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1884v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1884v=z;
}

static inline __attribute__((always_inline)) int read__temp1227v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first, char** __temp1885v) {
  const char* __temp1228v__=0;
  char __temp1229v____temp651v__=0;
  char __temp1229v____temp652v__=0;
  char* __temp1229v____temp649v__unsafe_ptr=0;
  char __temp1229v____temp650v____temp645v____temp544v____temp469v__=0;
  uint64_t __temp1229v____temp650v____temp644v__unsafe_size=0;
  const char* cmd=0;
  char* unsafe_ptr=0;
  char __temp1230v__=0;
  char __temp1231v__=0;
  char __temp1232v__=0;
  int64_t status=0;
  uint64_t __temp1233v=0;
  int64_t __temp1234v__=0;
  char __temp1235v__=0;
  char __temp1236v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=unsafe_temporary_cstr__temp648v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  cmd=__temp1228v__;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  exists__temp412v(unsafe_ptr,&__temp1230v__);
  not__temp26v(__temp1230v__,&__temp1231v__);
  if(__temp1231v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1232v__);
  if(__temp1232v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp1233v=0;
  int__temp395v(__temp1233v,&__temp1234v__);
  neq__temp131v(status,__temp1234v__,&__temp1235v__);
  if(__temp1235v__){
  __temp_complain=31;
  __temp1236v=__temp1236v==0;
  }
  __temp_return:
  *__temp1885v=unsafe_ptr;
  exists__temp573v(__temp1228v__,&__temp1229v____temp651v__);
  not__temp26v(__temp1229v____temp651v__,&__temp1229v____temp652v__);
  if(__temp1229v____temp652v__){
  exists__temp412v(__temp1229v____temp649v__unsafe_ptr,&__temp1229v____temp650v____temp645v____temp544v____temp469v__);
  if(__temp1229v____temp650v____temp645v____temp544v____temp469v__){
  __temp1229v____temp650v____temp644v__unsafe_size=0;
  __temp1229v____temp650v____temp644v__unsafe_size=__temp1229v____temp650v____temp644v__unsafe_size;
  free__temp461v(&__temp1229v____temp649v__unsafe_ptr);
  }
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1219v(int64_t value, const char** __temp1886v) {
  int __temp1220v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1886v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1743v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1744v__unsafe_ptr=0;
  char __temp1745v____temp1232v__=0;
  int64_t __temp1745v__status=0;
  uint64_t __temp1745v____temp1233v=0;
  int64_t __temp1745v____temp1234v__=0;
  char __temp1745v____temp1235v__=0;
  char __temp1745v____temp1236v=0;
  char* __temp1746v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1747v=0;
  int64_t __temp1748v=0;
  int64_t error=0;
  const char* __temp1749v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1227v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1744v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1746v__unsafe_ptr=__temp1744v__unsafe_ptr;
  proc__unsafe_ptr=__temp1746v__unsafe_ptr;
  exists__temp412v(__temp1744v__unsafe_ptr,&__temp1745v____temp1232v__);
  if(__temp1745v____temp1232v__){
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)__temp1744v__unsafe_ptr)){
  }
  __temp1745v__status=pclose((FILE*)__temp1744v__unsafe_ptr);
  __temp1744v__unsafe_ptr=0;
  }
  __temp1745v____temp1233v=0;
  int__temp395v(__temp1745v____temp1233v,&__temp1745v____temp1234v__);
  neq__temp131v(__temp1745v__status,__temp1745v____temp1234v__,&__temp1745v____temp1235v__);
  if(__temp1745v____temp1235v__){
  __temp_complain=31;
  __temp1745v____temp1236v=__temp1745v____temp1236v==0;
  }
  __temp1748v=__temp_complain;
  __temp1747v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1748v;
  __temp1747v=__temp1747v==0;
  if(__temp1747v){
  cstr__temp1219v(error,&__temp1749v__);
  print__temp363v(__temp1749v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1751v() {
  const char* path=0;
  uint64_t __temp1753v=0;
  char* __temp1754v__unsafe_ptr=0;
  uint64_t __temp1754v__unsafe_size=0;
  uint64_t __temp1754v__unsafe_align=0;
  char __temp1755v____temp544v____temp469v__=0;
  char* __temp1756v__buf__unsafe_ptr=0;
  uint64_t __temp1756v__buf__unsafe_size=0;
  uint64_t __temp1756v__buf__unsafe_align=0;
  uint64_t __temp1756v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint64_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1758v__unsafe_ptr=0;
  uint64_t __temp1758v__dat__pos=0;
  uint64_t __temp1758v__dat__length=0;
  char __temp1758v__dat__first=0;
  char* __temp1759v__unsafe_ptr=0;
  uint64_t __temp1759v__dat__pos=0;
  uint64_t __temp1759v__dat__length=0;
  char __temp1759v__dat__first=0;
  char* __temp1760v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1762v=0;
  uint64_t __temp1763v__=0;
  char* __temp1764v__unsafe_ptr=0;
  uint64_t __temp1764v__unsafe_size=0;
  uint64_t __temp1764v__unsafe_align=0;
  char __temp1765v____temp544v____temp469v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint64_t proc_buf__unsafe_align=0;
  char __temp1766v=0;
  char* __temp1767v__unsafe_ptr=0;
  uint64_t __temp1767v__dat__pos=0;
  uint64_t __temp1767v__dat__length=0;
  char __temp1767v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1769v__=0;
  char __temp1770v__=0;
  char* __temp1771v__buf__unsafe_ptr=0;
  uint64_t __temp1771v__buf__unsafe_size=0;
  uint64_t __temp1771v__buf__unsafe_align=0;
  uint64_t __temp1771v__pos=0;
  char* __temp1772v__unsafe_ptr=0;
  uint64_t __temp1772v__dat__pos=0;
  uint64_t __temp1772v__dat__length=0;
  char __temp1772v__dat__first=0;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__dat__pos=0;
  uint64_t __temp1773v__dat__length=0;
  char __temp1773v__dat__first=0;
  uint64_t __temp1774v__=0;
  char* __temp1775v__unsafe_ptr=0;
  uint64_t __temp1775v__dat__pos=0;
  uint64_t __temp1775v__dat__length=0;
  char __temp1775v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1752v;
  __temp1753v=256;
  __temp_errcode=alloc__temp538v(__temp1753v,&__temp1754v__unsafe_ptr,&__temp1754v__unsafe_size,&__temp1754v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1754v__unsafe_ptr,&__temp1754v__unsafe_size,&__temp1754v__unsafe_align,&__temp1756v__buf__unsafe_ptr,&__temp1756v__buf__unsafe_size,&__temp1756v__buf__unsafe_align,&__temp1756v__pos);
  bp__buf__unsafe_ptr=__temp1756v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1756v__buf__unsafe_size;
  bp__buf__unsafe_align=__temp1756v__buf__unsafe_align;
  bp__pos=__temp1756v__pos;
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,__temp1757v,&__temp1758v__unsafe_ptr,&__temp1758v__dat__pos,&__temp1758v__dat__length,&__temp1758v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp685v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_align,&bp__pos,path,&__temp1759v__unsafe_ptr,&__temp1759v__dat__pos,&__temp1759v__dat__length,&__temp1759v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1660v(path,&__temp1760v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1760v__unsafe_ptr;
  __temp1762v=4;
  KB__temp443v(__temp1762v,&__temp1763v__);
  __temp_errcode=alloc__temp538v(__temp1763v__,&__temp1764v__unsafe_ptr,&__temp1764v__unsafe_size,&__temp1764v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1764v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1764v__unsafe_size;
  proc_buf__unsafe_align=__temp1764v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1669v(&test_dir__unsafe_ptr,&__temp1767v__unsafe_ptr,&__temp1767v__dat__pos,&__temp1767v__dat__length,&__temp1767v__dat__first);
  __temp1766v=__temp_complain;
  entry__unsafe_ptr=__temp1767v__unsafe_ptr;
  entry__dat__pos=__temp1767v__dat__pos;
  entry__dat__length=__temp1767v__dat__length;
  entry__dat__first=__temp1767v__dat__first;
  __temp1766v=__temp1766v==0;
  if(!__temp1766v){
  break;
  }
  __temp_errcode=ends_with__temp873v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1768v,&__temp1769v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1769v__,&__temp1770v__);
  if(__temp1770v__){
  continue;
  }
  __temp1771v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1771v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1771v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1771v__pos=bp__pos;
  str__temp606v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1772v__unsafe_ptr,&__temp1772v__dat__pos,&__temp1772v__dat__length,&__temp1772v__dat__first);
  __temp_errcode=copy_null_terminated__temp694v(&__temp1771v__buf__unsafe_ptr,&__temp1771v__buf__unsafe_size,&__temp1771v__buf__unsafe_align,&__temp1771v__pos,__temp1772v__unsafe_ptr,__temp1772v__dat__pos,__temp1772v__dat__length,__temp1772v__dat__first,&__temp1773v__unsafe_ptr,&__temp1773v__dat__pos,&__temp1773v__dat__length,&__temp1773v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp674v(__temp1773v__unsafe_ptr,__temp1773v__dat__pos,__temp1773v__dat__length,__temp1773v__dat__first,&__temp1774v__);
  __temp_errcode=str__temp583v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_align,__temp1774v__,&__temp1775v__unsafe_ptr,&__temp1775v__dat__pos,&__temp1775v__dat__length,&__temp1775v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1775v__unsafe_ptr;
  command__dat__pos=__temp1775v__dat__pos;
  command__dat__length=__temp1775v__dat__length;
  command__dat__first=__temp1775v__dat__first;
  print__temp718v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1743v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1764v__unsafe_ptr,&__temp1765v____temp544v____temp469v__);
  if(__temp1765v____temp544v____temp469v__){
  __temp1764v__unsafe_size=0;
  __temp1764v__unsafe_size=__temp1764v__unsafe_size;
  free__temp461v(&__temp1764v__unsafe_ptr);
  }
  if(__temp1760v__unsafe_ptr){
  closedir((DIR*)__temp1760v__unsafe_ptr);
  __temp1760v__unsafe_ptr=0;
  }
  exists__temp412v(__temp1754v__unsafe_ptr,&__temp1755v____temp544v____temp469v__);
  if(__temp1755v____temp544v____temp469v__){
  __temp1754v__unsafe_size=0;
  __temp1754v__unsafe_size=__temp1754v__unsafe_size;
  free__temp461v(&__temp1754v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1751v();return 0;}