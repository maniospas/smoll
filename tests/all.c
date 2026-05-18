#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1754v="./tests/passing/";
const char* const __temp1759v="./smoll ";
const char* const __temp365v="\n";
const char* const __temp822v="";
const char* const __temp1770v=".s";
static const char* __temp_all_errcodes[52] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1780v, uint64_t* __temp1781v, uint16_t* __temp1782v, uint16_t* __temp1783v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1780v=unsafe_ptr;
  *__temp1781v=unsafe_size;
  *__temp1782v=unsafe_offset;
  *__temp1783v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1784v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1785v) {
  char* allocated=*__temp1785v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1785v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1786v) {
  int value=0;
  *__temp1786v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1787v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1787v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1788v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1788v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1789v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1789v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1790v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1790v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1791v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1791v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1792v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1792v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1793v) {
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
  *__temp1793v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1794v, uint64_t* __temp1795v, uint16_t* __temp1796v, uint16_t* __temp1797v, uint64_t size, char** __temp1798v, uint64_t* __temp1799v, uint16_t* __temp1800v, uint16_t* __temp1801v) {
  char* buffer__unsafe_ptr=*__temp1794v;
  uint64_t buffer__unsafe_size=*__temp1795v;
  uint16_t buffer__unsafe_offset=*__temp1796v;
  uint16_t buffer__unsafe_align=*__temp1797v;
  int __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp477v__=0;
  uint64_t __temp478v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t bytes=0;
  char* __temp484v__=0;
  uint64_t __temp485v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  neq__temp142v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  nat__temp465v(buffer__unsafe_align,&__temp477v__);
  mul__temp194v(__temp477v__,size,&__temp478v__);
  zero__temp462v(buffer__unsafe_ptr,__temp476v,__temp478v__);
  }
  goto __temp_return;
  }
  __temp480v=0;
  neq__temp142v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  bytes=__temp483v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  __temp485v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp485v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp470v__);
  if(__temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1794v=buffer__unsafe_ptr;
  *__temp1795v=buffer__unsafe_size;
  *__temp1796v=buffer__unsafe_offset;
  *__temp1797v=buffer__unsafe_align;
  *__temp1798v=buffer__unsafe_ptr;
  *__temp1799v=buffer__unsafe_size;
  *__temp1800v=buffer__unsafe_offset;
  *__temp1801v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1802v, uint64_t* __temp1803v, uint16_t* __temp1804v, uint16_t* __temp1805v) {
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char* __temp564v__unsafe_ptr=0;
  uint64_t __temp564v__unsafe_size=0;
  uint16_t __temp564v__unsafe_offset=0;
  uint16_t __temp564v__unsafe_align=0;
  char __temp565v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp560v(&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align);
  __temp563v__unsafe_ptr=__temp562v__unsafe_ptr;
  __temp563v__unsafe_size=__temp562v__unsafe_size;
  __temp563v__unsafe_offset=__temp562v__unsafe_offset;
  __temp563v__unsafe_align=__temp562v__unsafe_align;
  __temp_errcode=alloc__temp468v(&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align,size,&__temp564v__unsafe_ptr,&__temp564v__unsafe_size,&__temp564v__unsafe_offset,&__temp564v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp564v__unsafe_ptr,&__temp565v____temp470v__);
  if(__temp565v____temp470v__){
  __temp564v__unsafe_size=0;
  __temp564v__unsafe_size=__temp564v__unsafe_size;
  free__temp461v(&__temp564v__unsafe_ptr);
  }
  __temp_return:
  *__temp1802v=__temp564v__unsafe_ptr;
  *__temp1803v=__temp564v__unsafe_size;
  *__temp1804v=__temp564v__unsafe_offset;
  *__temp1805v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp679v(char** __temp1806v, uint64_t* __temp1807v, uint16_t* __temp1808v, uint16_t* __temp1809v, char** __temp1810v, uint64_t* __temp1811v, uint16_t* __temp1812v, uint16_t* __temp1813v, uint64_t* __temp1814v) {
  char* buf__unsafe_ptr=*__temp1806v;
  uint64_t buf__unsafe_size=*__temp1807v;
  uint16_t buf__unsafe_offset=*__temp1808v;
  uint16_t buf__unsafe_align=*__temp1809v;
  uint64_t __temp680v=0;
  uint64_t __temp681v=0;
  uint64_t pos=0;
  __temp680v=0;
  __temp681v=__temp680v;
  pos=__temp681v;
  goto __temp_return;
  __temp_return:
  *__temp1806v=buf__unsafe_ptr;
  *__temp1807v=buf__unsafe_size;
  *__temp1808v=buf__unsafe_offset;
  *__temp1809v=buf__unsafe_align;
  *__temp1810v=buf__unsafe_ptr;
  *__temp1811v=buf__unsafe_size;
  *__temp1812v=buf__unsafe_offset;
  *__temp1813v=buf__unsafe_align;
  *__temp1814v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1815v) {
  *__temp1815v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1816v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1816v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1817v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1817v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1818v) {
  *__temp1818v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1819v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1819v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1820v) {
  char __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  char* __temp557v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp552v__);
  if(__temp552v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp553v__);
  mul__temp194v(i,__temp553v__,&__temp554v__);
  nat__temp465v(buffer__unsafe_offset,&__temp555v__);
  add__temp170v(__temp554v__,__temp555v__,&__temp556v__);
  add__temp463v(buffer__unsafe_ptr,__temp556v__,&__temp557v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1820v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1821v, uint64_t* __temp1822v, uint64_t* __temp1823v, char* __temp1824v) {
  goto __temp_return;
  __temp_return:
  *__temp1821v=unsafe_ptr;
  *__temp1822v=dat__pos;
  *__temp1823v=dat__length;
  *__temp1824v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1825v, uint64_t* __temp1826v, uint64_t* __temp1827v, char* __temp1828v) {
  char* unsafe_ptr=0;
  uint64_t __temp601v__=0;
  uint64_t __temp602v=0;
  char __temp603v__=0;
  uint64_t __temp604v__=0;
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__unsafe_ptr=0;
  uint64_t __temp607v__dat__pos=0;
  uint64_t __temp607v__dat__length=0;
  char __temp607v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp465v(buf__unsafe_align,&__temp601v__);
  __temp602v=1;
  neq__temp142v(__temp601v__,__temp602v,&__temp603v__);
  if(__temp603v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  nat__temp465v(buf__unsafe_offset,&__temp604v__);
  __temp605v=0;
  neq__temp142v(__temp604v__,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  str__temp596v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp607v__unsafe_ptr,&__temp607v__dat__pos,&__temp607v__dat__length,&__temp607v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1825v=__temp607v__unsafe_ptr;
  *__temp1826v=__temp607v__dat__pos;
  *__temp1827v=__temp607v__dat__length;
  *__temp1828v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1829v, uint64_t* __temp1830v, uint64_t* __temp1831v, char* __temp1832v) {
  uint64_t __temp633v=0;
  char __temp634v__=0;
  char* __temp635v__=0;
  char __temp636v__value=0;
  char first=0;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__dat__pos=0;
  uint64_t __temp637v__dat__length=0;
  char __temp637v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp633v=0;
  neq__temp142v(length,__temp633v,&__temp634v__);
  if(__temp634v__){
  __temp_errcode=get__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp635v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp635v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp636v__value,__temp635v__,1);
  first=__temp636v__value;
  }
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp637v__unsafe_ptr,&__temp637v__dat__pos,&__temp637v__dat__length,&__temp637v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1829v=__temp637v__unsafe_ptr;
  *__temp1830v=__temp637v__dat__pos;
  *__temp1831v=__temp637v__dat__length;
  *__temp1832v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1833v, uint64_t* __temp1834v, uint64_t* __temp1835v, char* __temp1836v) {
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__unsafe_size=0;
  uint16_t __temp639v__unsafe_offset=0;
  uint16_t __temp639v__unsafe_align=0;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__unsafe_size=0;
  uint16_t __temp640v__unsafe_offset=0;
  uint16_t __temp640v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp641v__=0;
  uint64_t length=0;
  uint64_t __temp642v=0;
  uint64_t __temp643v__=0;
  uint64_t __temp644v=0;
  char* __temp645v__unsafe_ptr=0;
  uint64_t __temp645v__dat__pos=0;
  uint64_t __temp645v__dat__length=0;
  char __temp645v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp560v(&__temp639v__unsafe_ptr,&__temp639v__unsafe_size,&__temp639v__unsafe_offset,&__temp639v__unsafe_align);
  __temp640v__unsafe_ptr=__temp639v__unsafe_ptr;
  __temp640v__unsafe_size=__temp639v__unsafe_size;
  __temp640v__unsafe_offset=__temp639v__unsafe_offset;
  __temp640v__unsafe_align=__temp639v__unsafe_align;
  buf__unsafe_ptr=__temp640v__unsafe_ptr;
  buf__unsafe_size=__temp640v__unsafe_size;
  buf__unsafe_offset=__temp640v__unsafe_offset;
  buf__unsafe_align=__temp640v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp641v__);
  buf__unsafe_ptr=__temp641v__;
  if(c){
  length=strlen(c);
  }
  __temp642v=1;
  add__temp170v(length,__temp642v,&__temp643v__);
  buf__unsafe_size=__temp643v__;
  __temp644v=0;
  __temp_errcode=str__temp632v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp644v,length,&__temp645v__unsafe_ptr,&__temp645v__dat__pos,&__temp645v__dat__length,&__temp645v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1833v=__temp645v__unsafe_ptr;
  *__temp1834v=__temp645v__dat__pos;
  *__temp1835v=__temp645v__dat__length;
  *__temp1836v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1837v) {
  goto __temp_return;
  __temp_return:
  *__temp1837v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1838v) {
  goto __temp_return;
  __temp_return:
  *__temp1838v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1839v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1839v=z;
}

int copy__temp710v(char** __temp1840v, uint64_t* __temp1841v, uint16_t* __temp1842v, uint16_t* __temp1843v, uint64_t* __temp1844v, const char* _other, char** __temp1845v, uint64_t* __temp1846v, uint64_t* __temp1847v, char* __temp1848v) {
  char* buf__unsafe_ptr=*__temp1840v;
  uint64_t buf__unsafe_size=*__temp1841v;
  uint16_t buf__unsafe_offset=*__temp1842v;
  uint16_t buf__unsafe_align=*__temp1843v;
  uint64_t pos=*__temp1844v;
  char* __temp711v__unsafe_ptr=0;
  uint64_t __temp711v__dat__pos=0;
  uint64_t __temp711v__dat__length=0;
  char __temp711v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp712v__=0;
  uint64_t __temp713v__=0;
  uint64_t next_pos=0;
  uint64_t __temp714v__=0;
  char __temp715v__=0;
  uint64_t __temp716v=0;
  uint64_t __temp717v__=0;
  uint64_t prev_pos=0;
  char* __temp718v__unsafe_ptr=0;
  uint64_t __temp718v__dat__pos=0;
  uint64_t __temp718v__dat__length=0;
  char __temp718v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(_other,&__temp711v__unsafe_ptr,&__temp711v__dat__pos,&__temp711v__dat__length,&__temp711v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp711v__unsafe_ptr;
  other__dat__pos=__temp711v__dat__pos;
  other__dat__length=__temp711v__dat__length;
  other__dat__first=__temp711v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp712v__);
  add__temp170v(pos,__temp712v__,&__temp713v__);
  next_pos=__temp713v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp714v__);
  gt__temp271v(next_pos,__temp714v__,&__temp715v__);
  if(__temp715v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp716v=0;
  add__temp170v(pos,__temp716v,&__temp717v__);
  prev_pos=__temp717v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp718v__unsafe_ptr,&__temp718v__dat__pos,&__temp718v__dat__length,&__temp718v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1840v=buf__unsafe_ptr;
  *__temp1841v=buf__unsafe_size;
  *__temp1842v=buf__unsafe_offset;
  *__temp1843v=buf__unsafe_align;
  *__temp1844v=pos;
  *__temp1845v=__temp718v__unsafe_ptr;
  *__temp1846v=__temp718v__dat__pos;
  *__temp1847v=__temp718v__dat__length;
  *__temp1848v=__temp718v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void closedir__temp1650v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1849v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1849v=z;
}

static inline __attribute__((always_inline)) int read__temp1651v(const char* path, char** __temp1850v) {
  char* unsafe_ptr=0;
  char __temp1653v__=0;
  char __temp1654v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1653v__);
  not__temp26v(__temp1653v__,&__temp1654v__);
  if(__temp1654v__){
  __temp_errcode=38;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1650v(unsafe_ptr);
  __temp_return:
  *__temp1850v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1851v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1851v=__temp445v__;
}

static inline __attribute__((always_inline)) int raw_entry__temp1661v(char** __temp1852v, const char** __temp1853v) {
  char* f__unsafe_ptr=*__temp1852v;
  char __temp1662v__=0;
  char __temp1663v__=0;
  char* de=0;
  char __temp1664v__=0;
  char __temp1665v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1662v__);
  not__temp26v(__temp1662v__,&__temp1663v__);
  if(__temp1663v__){
  __temp_errcode=49;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1664v__);
  not__temp26v(__temp1664v__,&__temp1665v__);
  if(__temp1665v__){
  __temp_errcode=50;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1852v=f__unsafe_ptr;
  *__temp1853v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1666v(char** __temp1854v, char** __temp1855v, uint64_t* __temp1856v, uint64_t* __temp1857v, char* __temp1858v) {
  char* f__unsafe_ptr=*__temp1854v;
  const char* __temp1667v__=0;
  char* __temp1668v__unsafe_ptr=0;
  uint64_t __temp1668v__dat__pos=0;
  uint64_t __temp1668v__dat__length=0;
  char __temp1668v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw_entry__temp1661v(&f__unsafe_ptr,&__temp1667v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp638v(__temp1667v__,&__temp1668v__unsafe_ptr,&__temp1668v__dat__pos,&__temp1668v__dat__length,&__temp1668v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1854v=f__unsafe_ptr;
  *__temp1855v=__temp1668v__unsafe_ptr;
  *__temp1856v=__temp1668v__dat__pos;
  *__temp1857v=__temp1668v__dat__length;
  *__temp1858v=__temp1668v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp631v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1859v, uint64_t* __temp1860v, uint64_t* __temp1861v, char* __temp1862v) {
  goto __temp_return;
  __temp_return:
  *__temp1859v=other__unsafe_ptr;
  *__temp1860v=other__dat__pos;
  *__temp1861v=other__dat__length;
  *__temp1862v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1863v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1863v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1864v) {
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
  *__temp1864v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp780v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1865v) {
  uint64_t __temp781v__=0;
  char* __temp782v__=0;
  add__temp170v(s__dat__pos,i,&__temp781v__);
  add__temp463v(s__unsafe_ptr,__temp781v__,&__temp782v__);
  goto __temp_return;
  __temp_return:
  *__temp1865v=__temp782v__;
}

int slice__temp819v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1866v, uint64_t* __temp1867v, uint64_t* __temp1868v, char* __temp1869v) {
  char* __temp820v__unsafe_ptr=0;
  uint64_t __temp820v__dat__pos=0;
  uint64_t __temp820v__dat__length=0;
  char __temp820v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp821v__=0;
  char* __temp823v__unsafe_ptr=0;
  uint64_t __temp823v__dat__pos=0;
  uint64_t __temp823v__dat__length=0;
  char __temp823v__dat__first=0;
  char __temp824v__=0;
  char __temp825v__=0;
  char __temp826v=0;
  uint64_t __temp827v__=0;
  uint64_t new_length=0;
  uint64_t __temp828v=0;
  char __temp829v__=0;
  char new_first=0;
  char* __temp830v__=0;
  char __temp831v__value=0;
  uint64_t __temp832v__=0;
  char* __temp833v__unsafe_ptr=0;
  uint64_t __temp833v__dat__pos=0;
  uint64_t __temp833v__dat__length=0;
  char __temp833v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp820v__unsafe_ptr,&__temp820v__dat__pos,&__temp820v__dat__length,&__temp820v__dat__first);
  s__unsafe_ptr=__temp820v__unsafe_ptr;
  s__dat__pos=__temp820v__dat__pos;
  s__dat__length=__temp820v__dat__length;
  s__dat__first=__temp820v__dat__first;
  eq__temp118v(from,to,&__temp821v__);
  if(__temp821v__){
  __temp_errcode=str__temp638v(__temp822v,&__temp823v__unsafe_ptr,&__temp823v__dat__pos,&__temp823v__dat__length,&__temp823v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp824v__);
  if(!__temp824v__){
  gt__temp271v(to,s__dat__length,&__temp825v__);
  __temp826v=__temp825v__;
  }
  if(__temp826v){
  __temp_errcode=20;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp827v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp827v__;
  __temp828v=0;
  neq__temp142v(from,__temp828v,&__temp829v__);
  if(__temp829v__){
  get__temp780v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp830v__);
  if(!__temp830v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp831v__value,__temp830v__,1);
  new_first=__temp831v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp832v__);
  str__temp596v(s__unsafe_ptr,__temp832v__,new_length,new_first,&__temp833v__unsafe_ptr,&__temp833v__dat__pos,&__temp833v__dat__length,&__temp833v__dat__first);
  __temp823v__unsafe_ptr=__temp833v__unsafe_ptr;
  __temp823v__dat__pos=__temp833v__dat__pos;
  __temp823v__dat__length=__temp833v__dat__length;
  __temp823v__dat__first=__temp833v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1866v=__temp823v__unsafe_ptr;
  *__temp1867v=__temp823v__dat__pos;
  *__temp1868v=__temp823v__dat__length;
  *__temp1869v=__temp823v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp650v(char x, char y, char* __temp1870v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1870v=z;
}

static inline __attribute__((always_inline)) void eq__temp784v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1871v) {
  uint64_t __temp785v__=0;
  uint64_t n=0;
  uint64_t __temp786v__=0;
  char __temp787v__=0;
  char __temp788v=0;
  char __temp789v__=0;
  char __temp790v=0;
  char z=0;
  len__temp646v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp785v__);
  n=__temp785v__;
  len__temp646v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp786v__);
  neq__temp142v(n,__temp786v__,&__temp787v__);
  if(__temp787v__){
  __temp788v=0;
  goto __temp_return;
  }
  neq__temp650v(x__dat__first,y__dat__first,&__temp789v__);
  if(__temp789v__){
  __temp790v=0;
  __temp788v=__temp790v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp788v=z;
  goto __temp_return;
  __temp_return:
  *__temp1871v=__temp788v;
}

static inline __attribute__((always_inline)) int ends_with__temp898v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1872v) {
  char* __temp899v__unsafe_ptr=0;
  uint64_t __temp899v__dat__pos=0;
  uint64_t __temp899v__dat__length=0;
  char __temp899v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp900v__unsafe_ptr=0;
  uint64_t __temp900v__dat__pos=0;
  uint64_t __temp900v__dat__length=0;
  char __temp900v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp901v__=0;
  char __temp902v=0;
  uint64_t __temp903v__=0;
  uint64_t n=0;
  uint64_t __temp904v__=0;
  uint64_t __temp905v__=0;
  char* __temp906v__unsafe_ptr=0;
  uint64_t __temp906v__dat__pos=0;
  uint64_t __temp906v__dat__length=0;
  char __temp906v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp907v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp899v__unsafe_ptr,&__temp899v__dat__pos,&__temp899v__dat__length,&__temp899v__dat__first);
  stack__unsafe_ptr=__temp899v__unsafe_ptr;
  stack__dat__pos=__temp899v__dat__pos;
  stack__dat__length=__temp899v__dat__length;
  stack__dat__first=__temp899v__dat__first;
  __temp_errcode=str__temp638v(_needle,&__temp900v__unsafe_ptr,&__temp900v__dat__pos,&__temp900v__dat__length,&__temp900v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp900v__unsafe_ptr;
  needle__dat__pos=__temp900v__dat__pos;
  needle__dat__length=__temp900v__dat__length;
  needle__dat__first=__temp900v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp901v__);
  if(__temp901v__){
  __temp902v=0;
  goto __temp_return;
  }
  len__temp646v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp903v__);
  n=__temp903v__;
  len__temp646v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp904v__);
  __temp_errcode=sub__temp347v(n,__temp904v__,&__temp905v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp819v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp905v__,n,&__temp906v__unsafe_ptr,&__temp906v__dat__pos,&__temp906v__dat__length,&__temp906v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp906v__unsafe_ptr;
  ret__dat__pos=__temp906v__dat__pos;
  ret__dat__length=__temp906v__dat__length;
  ret__dat__first=__temp906v__dat__first;
  eq__temp784v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp907v__);
  __temp902v=__temp907v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1872v=__temp902v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp719v(char** __temp1873v, uint64_t* __temp1874v, uint16_t* __temp1875v, uint16_t* __temp1876v, uint64_t* __temp1877v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1878v, uint64_t* __temp1879v, uint64_t* __temp1880v, char* __temp1881v) {
  char* buf__unsafe_ptr=*__temp1873v;
  uint64_t buf__unsafe_size=*__temp1874v;
  uint16_t buf__unsafe_offset=*__temp1875v;
  uint16_t buf__unsafe_align=*__temp1876v;
  uint64_t pos=*__temp1877v;
  char* __temp720v__unsafe_ptr=0;
  uint64_t __temp720v__dat__pos=0;
  uint64_t __temp720v__dat__length=0;
  char __temp720v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp721v__=0;
  uint64_t __temp722v__=0;
  uint64_t null_pos=0;
  uint64_t __temp723v=0;
  uint64_t __temp724v__=0;
  uint64_t next_pos=0;
  uint64_t __temp725v__=0;
  char __temp726v__=0;
  char* endpos=0;
  uint64_t __temp727v=0;
  uint64_t __temp728v__=0;
  uint64_t prev_pos=0;
  char* __temp729v__unsafe_ptr=0;
  uint64_t __temp729v__dat__pos=0;
  uint64_t __temp729v__dat__length=0;
  char __temp729v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp720v__unsafe_ptr,&__temp720v__dat__pos,&__temp720v__dat__length,&__temp720v__dat__first);
  other__unsafe_ptr=__temp720v__unsafe_ptr;
  other__dat__pos=__temp720v__dat__pos;
  other__dat__length=__temp720v__dat__length;
  other__dat__first=__temp720v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp721v__);
  add__temp170v(pos,__temp721v__,&__temp722v__);
  null_pos=__temp722v__;
  __temp723v=1;
  add__temp170v(null_pos,__temp723v,&__temp724v__);
  next_pos=__temp724v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp725v__);
  gt__temp271v(next_pos,__temp725v__,&__temp726v__);
  if(__temp726v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __temp727v=0;
  add__temp170v(pos,__temp727v,&__temp728v__);
  prev_pos=__temp728v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp729v__unsafe_ptr,&__temp729v__dat__pos,&__temp729v__dat__length,&__temp729v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1873v=buf__unsafe_ptr;
  *__temp1874v=buf__unsafe_size;
  *__temp1875v=buf__unsafe_offset;
  *__temp1876v=buf__unsafe_align;
  *__temp1877v=pos;
  *__temp1878v=__temp729v__unsafe_ptr;
  *__temp1879v=__temp729v__dat__pos;
  *__temp1880v=__temp729v__dat__length;
  *__temp1881v=__temp729v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp699v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1882v) {
  uint64_t __temp700v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp700v__);
  goto __temp_return;
  __temp_return:
  *__temp1882v=__temp700v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1883v) {
  int value=0;
  *__temp1883v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1884v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1884v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp608v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __temp1885v, uint64_t* __temp1886v, uint64_t* __temp1887v, char* __temp1888v) {
  int __temp609v=0;
  int __temp610v=0;
  int __temp611v__=0;
  uint64_t __temp612v__=0;
  char __temp613v__=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v=0;
  char* __temp616v__=0;
  char __temp617v__value=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp610v,&__temp611v__);
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp612v__);
  gt__temp271v(length,__temp612v__,&__temp613v__);
  if(__temp613v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  __temp614v=0;
  __temp615v=0;
  __temp_errcode=get__temp551v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp615v,&__temp616v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp616v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp617v__value,__temp616v__,1);
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp614v,length,__temp617v__value,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1885v=__temp618v__unsafe_ptr;
  *__temp1886v=__temp618v__dat__pos;
  *__temp1887v=__temp618v__dat__length;
  *__temp1888v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp665v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1889v, uint64_t* __temp1890v, uint64_t* __temp1891v, char* __temp1892v) {
  uint64_t __temp666v=0;
  uint64_t __temp667v__=0;
  uint64_t __temp668v__=0;
  char* __temp669v__unsafe_ptr=0;
  uint64_t __temp669v__unsafe_size=0;
  uint16_t __temp669v__unsafe_offset=0;
  uint16_t __temp669v__unsafe_align=0;
  char __temp670v____temp565v____temp470v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp671v=0;
  char* __temp672v__unsafe_ptr=0;
  uint64_t __temp672v__dat__pos=0;
  uint64_t __temp672v__dat__length=0;
  char __temp672v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp666v=1;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp667v__);
  add__temp170v(__temp666v,__temp667v__,&__temp668v__);
  __temp_errcode=alloc__temp559v(__temp668v__,&__temp669v__unsafe_ptr,&__temp669v__unsafe_size,&__temp669v__unsafe_offset,&__temp669v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp669v__unsafe_ptr;
  buf__unsafe_size=__temp669v__unsafe_size;
  buf__unsafe_offset=__temp669v__unsafe_offset;
  buf__unsafe_align=__temp669v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp671v=0;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp671v,other__dat__length,other__dat__first,&__temp672v__unsafe_ptr,&__temp672v__dat__pos,&__temp672v__dat__length,&__temp672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp672v__unsafe_ptr,&__temp670v____temp565v____temp470v__);
  if(__temp670v____temp565v____temp470v__){
  __temp669v__unsafe_size=0;
  __temp669v__unsafe_size=__temp669v__unsafe_size;
  free__temp461v(&__temp672v__unsafe_ptr);
  }
  __temp_return:
  *__temp1889v=__temp672v__unsafe_ptr;
  *__temp1890v=__temp672v__dat__pos;
  *__temp1891v=__temp672v__dat__length;
  *__temp1892v=__temp672v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp673v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1893v, char** __temp1894v, uint64_t* __temp1895v, uint64_t* __temp1896v, char* __temp1897v) {
  char* __temp674v__unsafe_ptr=0;
  uint64_t __temp674v__dat__pos=0;
  uint64_t __temp674v__dat__length=0;
  char __temp674v__dat__first=0;
  char __temp675v____temp670v____temp565v____temp470v__=0;
  uint64_t __temp675v____temp669v__unsafe_size=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __temp676v__=0;
  char* _ret=0;
  const char* cstr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=copy_null_terminated__temp665v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp674v__unsafe_ptr,&__temp674v__dat__pos,&__temp674v__dat__length,&__temp674v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp674v__unsafe_ptr;
  str__dat__pos=__temp674v__dat__pos;
  str__dat__length=__temp674v__dat__length;
  str__dat__first=__temp674v__dat__first;
  add__temp463v(str__unsafe_ptr,str__dat__pos,&__temp676v__);
  _ret=__temp676v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(str__unsafe_ptr,&__temp675v____temp670v____temp565v____temp470v__);
  if(__temp675v____temp670v____temp565v____temp470v__){
  __temp675v____temp669v__unsafe_size=0;
  __temp675v____temp669v__unsafe_size=__temp675v____temp669v__unsafe_size;
  free__temp461v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1893v=cstr;
  *__temp1894v=str__unsafe_ptr;
  *__temp1895v=str__dat__pos;
  *__temp1896v=str__dat__length;
  *__temp1897v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void popen__temp1253v(const char* cmd, char** __temp1898v) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __temp_return;
  __temp_return:
  *__temp1898v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__temp1252v(char* unsafe_ptr, int64_t* __temp1899v) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __temp_return;
  __temp_return:
  *__temp1899v=status;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1900v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1900v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1901v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1901v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1902v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1902v=z;
}

static inline __attribute__((always_inline)) int read__temp1254v(const char* cmd, char** __temp1903v) {
  char* __temp1255v__=0;
  char* unsafe_ptr=0;
  char __temp1256v__=0;
  char __temp1257v__=0;
  char __temp1258v__=0;
  int64_t __temp1259v__=0;
  int64_t status=0;
  uint64_t __temp1260v=0;
  int64_t __temp1261v__=0;
  char __temp1262v__=0;
  char __temp1263v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  popen__temp1253v(cmd,&__temp1255v__);
  unsafe_ptr=__temp1255v__;
  exists__temp412v(unsafe_ptr,&__temp1256v__);
  not__temp26v(__temp1256v__,&__temp1257v__);
  if(__temp1257v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1258v__);
  if(__temp1258v__){
  pclose__temp1252v(unsafe_ptr,&__temp1259v__);
  status=__temp1259v__;
  unsafe_ptr=0;
  __temp1260v=0;
  int__temp395v(__temp1260v,&__temp1261v__);
  neq__temp131v(status,__temp1261v__,&__temp1262v__);
  if(__temp1262v__){
  __temp_complain=34;
  __temp1263v=__temp1263v==0;
  }
  }
  __temp_return:
  *__temp1903v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1265v(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __temp1904v) {
  const char* __temp1266v__cstr=0;
  char* __temp1266v__str__unsafe_ptr=0;
  uint64_t __temp1266v__str__dat__pos=0;
  uint64_t __temp1266v__str__dat__length=0;
  char __temp1266v__str__dat__first=0;
  char __temp1267v____temp675v____temp670v____temp565v____temp470v__=0;
  uint64_t __temp1267v____temp675v____temp669v__unsafe_size=0;
  char* __temp1268v__unsafe_ptr=0;
  char __temp1269v____temp1258v__=0;
  int64_t __temp1269v____temp1259v__=0;
  int64_t __temp1269v__status=0;
  uint64_t __temp1269v____temp1260v=0;
  int64_t __temp1269v____temp1261v__=0;
  char __temp1269v____temp1262v__=0;
  char __temp1269v____temp1263v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp673v(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__temp1266v__cstr,&__temp1266v__str__unsafe_ptr,&__temp1266v__str__dat__pos,&__temp1266v__str__dat__length,&__temp1266v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1254v(__temp1266v__cstr,&__temp1268v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1268v__unsafe_ptr,&__temp1269v____temp1258v__);
  if(__temp1269v____temp1258v__){
  pclose__temp1252v(__temp1268v__unsafe_ptr,&__temp1269v____temp1259v__);
  __temp1269v__status=__temp1269v____temp1259v__;
  __temp1268v__unsafe_ptr=0;
  __temp1269v____temp1260v=0;
  int__temp395v(__temp1269v____temp1260v,&__temp1269v____temp1261v__);
  neq__temp131v(__temp1269v__status,__temp1269v____temp1261v__,&__temp1269v____temp1262v__);
  if(__temp1269v____temp1262v__){
  __temp_complain=34;
  __temp1269v____temp1263v=__temp1269v____temp1263v==0;
  }
  }
  __temp_return:
  *__temp1904v=__temp1268v__unsafe_ptr;
  exists__temp412v(__temp1266v__str__unsafe_ptr,&__temp1267v____temp675v____temp670v____temp565v____temp470v__);
  if(__temp1267v____temp675v____temp670v____temp565v____temp470v__){
  __temp1267v____temp675v____temp669v__unsafe_size=0;
  __temp1267v____temp675v____temp669v__unsafe_size=__temp1267v____temp675v____temp669v__unsafe_size;
  free__temp461v(&__temp1266v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1244v(int64_t value, const char** __temp1905v) {
  int __temp1245v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1905v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1741v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1742v__unsafe_ptr=0;
  char __temp1743v____temp1269v____temp1258v__=0;
  int64_t __temp1743v____temp1269v____temp1259v__=0;
  int64_t __temp1743v____temp1269v__status=0;
  uint64_t __temp1743v____temp1269v____temp1260v=0;
  int64_t __temp1743v____temp1269v____temp1261v__=0;
  char __temp1743v____temp1269v____temp1262v__=0;
  char __temp1743v____temp1269v____temp1263v=0;
  char* __temp1744v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  uint64_t __temp1745v=0;
  uint64_t __temp1746v__=0;
  char* __temp1747v__unsafe_ptr=0;
  uint64_t __temp1747v__unsafe_size=0;
  uint16_t __temp1747v__unsafe_offset=0;
  uint16_t __temp1747v__unsafe_align=0;
  char __temp1748v____temp565v____temp470v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  char __temp1749v=0;
  int64_t __temp1750v=0;
  int64_t error=0;
  const char* __temp1751v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1265v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1742v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1744v__unsafe_ptr=__temp1742v__unsafe_ptr;
  proc__unsafe_ptr=__temp1744v__unsafe_ptr;
  __temp1745v=4;
  KB__temp443v(__temp1745v,&__temp1746v__);
  __temp_errcode=alloc__temp559v(__temp1746v__,&__temp1747v__unsafe_ptr,&__temp1747v__unsafe_size,&__temp1747v__unsafe_offset,&__temp1747v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1747v__unsafe_ptr;
  mem__unsafe_size=__temp1747v__unsafe_size;
  mem__unsafe_offset=__temp1747v__unsafe_offset;
  mem__unsafe_align=__temp1747v__unsafe_align;
  exists__temp412v(__temp1742v__unsafe_ptr,&__temp1743v____temp1269v____temp1258v__);
  if(__temp1743v____temp1269v____temp1258v__){
  pclose__temp1252v(__temp1742v__unsafe_ptr,&__temp1743v____temp1269v____temp1259v__);
  __temp1743v____temp1269v__status=__temp1743v____temp1269v____temp1259v__;
  __temp1742v__unsafe_ptr=0;
  __temp1743v____temp1269v____temp1260v=0;
  int__temp395v(__temp1743v____temp1269v____temp1260v,&__temp1743v____temp1269v____temp1261v__);
  neq__temp131v(__temp1743v____temp1269v__status,__temp1743v____temp1269v____temp1261v__,&__temp1743v____temp1269v____temp1262v__);
  if(__temp1743v____temp1269v____temp1262v__){
  __temp_complain=34;
  __temp1743v____temp1269v____temp1263v=__temp1743v____temp1269v____temp1263v==0;
  }
  }
  __temp1750v=__temp_complain;
  __temp1749v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1750v;
  __temp1749v=__temp1749v==0;
  if(__temp1749v){
  cstr__temp1244v(error,&__temp1751v__);
  print__temp363v(__temp1751v__);
  }
  
  __temp_failure:exists__temp412v(__temp1747v__unsafe_ptr,&__temp1748v____temp565v____temp470v__);
  if(__temp1748v____temp565v____temp470v__){
  __temp1747v__unsafe_size=0;
  __temp1747v__unsafe_size=__temp1747v__unsafe_size;
  free__temp461v(&__temp1747v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1753v() {
  const char* path=0;
  uint64_t __temp1755v=0;
  char* __temp1756v__unsafe_ptr=0;
  uint64_t __temp1756v__unsafe_size=0;
  uint16_t __temp1756v__unsafe_offset=0;
  uint16_t __temp1756v__unsafe_align=0;
  char __temp1757v____temp565v____temp470v__=0;
  char* __temp1758v__buf__unsafe_ptr=0;
  uint64_t __temp1758v__buf__unsafe_size=0;
  uint16_t __temp1758v__buf__unsafe_offset=0;
  uint16_t __temp1758v__buf__unsafe_align=0;
  uint64_t __temp1758v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1760v__unsafe_ptr=0;
  uint64_t __temp1760v__dat__pos=0;
  uint64_t __temp1760v__dat__length=0;
  char __temp1760v__dat__first=0;
  char* __temp1761v__unsafe_ptr=0;
  uint64_t __temp1761v__dat__pos=0;
  uint64_t __temp1761v__dat__length=0;
  char __temp1761v__dat__first=0;
  char* __temp1762v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1764v=0;
  uint64_t __temp1765v__=0;
  char* __temp1766v__unsafe_ptr=0;
  uint64_t __temp1766v__unsafe_size=0;
  uint16_t __temp1766v__unsafe_offset=0;
  uint16_t __temp1766v__unsafe_align=0;
  char __temp1767v____temp565v____temp470v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  char __temp1768v=0;
  char* __temp1769v__unsafe_ptr=0;
  uint64_t __temp1769v__dat__pos=0;
  uint64_t __temp1769v__dat__length=0;
  char __temp1769v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1771v__=0;
  char __temp1772v__=0;
  char* __temp1773v__buf__unsafe_ptr=0;
  uint64_t __temp1773v__buf__unsafe_size=0;
  uint16_t __temp1773v__buf__unsafe_offset=0;
  uint16_t __temp1773v__buf__unsafe_align=0;
  uint64_t __temp1773v__pos=0;
  char* __temp1774v__unsafe_ptr=0;
  uint64_t __temp1774v__dat__pos=0;
  uint64_t __temp1774v__dat__length=0;
  char __temp1774v__dat__first=0;
  char* __temp1775v__unsafe_ptr=0;
  uint64_t __temp1775v__dat__pos=0;
  uint64_t __temp1775v__dat__length=0;
  char __temp1775v__dat__first=0;
  uint64_t __temp1776v__=0;
  char* __temp1777v__unsafe_ptr=0;
  uint64_t __temp1777v__dat__pos=0;
  uint64_t __temp1777v__dat__length=0;
  char __temp1777v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1754v;
  __temp1755v=256;
  __temp_errcode=alloc__temp559v(__temp1755v,&__temp1756v__unsafe_ptr,&__temp1756v__unsafe_size,&__temp1756v__unsafe_offset,&__temp1756v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp679v(&__temp1756v__unsafe_ptr,&__temp1756v__unsafe_size,&__temp1756v__unsafe_offset,&__temp1756v__unsafe_align,&__temp1758v__buf__unsafe_ptr,&__temp1758v__buf__unsafe_size,&__temp1758v__buf__unsafe_offset,&__temp1758v__buf__unsafe_align,&__temp1758v__pos);
  bp__buf__unsafe_ptr=__temp1758v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1758v__buf__unsafe_size;
  bp__buf__unsafe_offset=__temp1758v__buf__unsafe_offset;
  bp__buf__unsafe_align=__temp1758v__buf__unsafe_align;
  bp__pos=__temp1758v__pos;
  __temp_errcode=copy__temp710v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__temp1759v,&__temp1760v__unsafe_ptr,&__temp1760v__dat__pos,&__temp1760v__dat__length,&__temp1760v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp710v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__temp1761v__unsafe_ptr,&__temp1761v__dat__pos,&__temp1761v__dat__length,&__temp1761v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1651v(path,&__temp1762v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1762v__unsafe_ptr;
  __temp1764v=4;
  KB__temp443v(__temp1764v,&__temp1765v__);
  __temp_errcode=alloc__temp559v(__temp1765v__,&__temp1766v__unsafe_ptr,&__temp1766v__unsafe_size,&__temp1766v__unsafe_offset,&__temp1766v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1766v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1766v__unsafe_size;
  proc_buf__unsafe_offset=__temp1766v__unsafe_offset;
  proc_buf__unsafe_align=__temp1766v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1666v(&test_dir__unsafe_ptr,&__temp1769v__unsafe_ptr,&__temp1769v__dat__pos,&__temp1769v__dat__length,&__temp1769v__dat__first);
  __temp1768v=__temp_complain;
  entry__unsafe_ptr=__temp1769v__unsafe_ptr;
  entry__dat__pos=__temp1769v__dat__pos;
  entry__dat__length=__temp1769v__dat__length;
  entry__dat__first=__temp1769v__dat__first;
  __temp1768v=__temp1768v==0;
  if(!__temp1768v){
  break;
  }
  __temp_errcode=ends_with__temp898v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1770v,&__temp1771v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1771v__,&__temp1772v__);
  if(__temp1772v__){
  continue;
  }
  __temp1773v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1773v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1773v__buf__unsafe_offset=bp__buf__unsafe_offset;
  __temp1773v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1773v__pos=bp__pos;
  str__temp631v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1774v__unsafe_ptr,&__temp1774v__dat__pos,&__temp1774v__dat__length,&__temp1774v__dat__first);
  __temp_errcode=copy_null_terminated__temp719v(&__temp1773v__buf__unsafe_ptr,&__temp1773v__buf__unsafe_size,&__temp1773v__buf__unsafe_offset,&__temp1773v__buf__unsafe_align,&__temp1773v__pos,__temp1774v__unsafe_ptr,__temp1774v__dat__pos,__temp1774v__dat__length,__temp1774v__dat__first,&__temp1775v__unsafe_ptr,&__temp1775v__dat__pos,&__temp1775v__dat__length,&__temp1775v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp699v(__temp1775v__unsafe_ptr,__temp1775v__dat__pos,__temp1775v__dat__length,__temp1775v__dat__first,&__temp1776v__);
  __temp_errcode=str__temp608v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__temp1776v__,&__temp1777v__unsafe_ptr,&__temp1777v__dat__pos,&__temp1777v__dat__length,&__temp1777v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1777v__unsafe_ptr;
  command__dat__pos=__temp1777v__dat__pos;
  command__dat__length=__temp1777v__dat__length;
  command__dat__first=__temp1777v__dat__first;
  print__temp743v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1741v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1766v__unsafe_ptr,&__temp1767v____temp565v____temp470v__);
  if(__temp1767v____temp565v____temp470v__){
  __temp1766v__unsafe_size=0;
  __temp1766v__unsafe_size=__temp1766v__unsafe_size;
  free__temp461v(&__temp1766v__unsafe_ptr);
  }
  closedir__temp1650v(__temp1762v__unsafe_ptr);
  exists__temp412v(__temp1756v__unsafe_ptr,&__temp1757v____temp565v____temp470v__);
  if(__temp1757v____temp565v____temp470v__){
  __temp1756v__unsafe_size=0;
  __temp1756v__unsafe_size=__temp1756v__unsafe_size;
  free__temp461v(&__temp1756v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1753v();return 0;}