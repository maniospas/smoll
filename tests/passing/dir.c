#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1730v="./std";
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

static inline __attribute__((always_inline)) void closedir__temp1650v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1740v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1740v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1741v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1741v=z;
}

static inline __attribute__((always_inline)) int read__temp1651v(const char* path, char** __temp1742v) {
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
  *__temp1742v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1743v, uint64_t* __temp1744v, uint16_t* __temp1745v, uint16_t* __temp1746v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1743v=unsafe_ptr;
  *__temp1744v=unsafe_size;
  *__temp1745v=unsafe_offset;
  *__temp1746v=unsafe_align;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1747v) {
  char* allocated=*__temp1747v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1747v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1748v) {
  int value=0;
  *__temp1748v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1749v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1749v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1750v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1750v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1751v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1751v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1752v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1752v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1753v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1753v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1754v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1754v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1755v) {
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
  *__temp1755v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1756v, uint64_t* __temp1757v, uint16_t* __temp1758v, uint16_t* __temp1759v, uint64_t size, char** __temp1760v, uint64_t* __temp1761v, uint16_t* __temp1762v, uint16_t* __temp1763v) {
  char* buffer__unsafe_ptr=*__temp1756v;
  uint64_t buffer__unsafe_size=*__temp1757v;
  uint16_t buffer__unsafe_offset=*__temp1758v;
  uint16_t buffer__unsafe_align=*__temp1759v;
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
  *__temp1756v=buffer__unsafe_ptr;
  *__temp1757v=buffer__unsafe_size;
  *__temp1758v=buffer__unsafe_offset;
  *__temp1759v=buffer__unsafe_align;
  *__temp1760v=buffer__unsafe_ptr;
  *__temp1761v=buffer__unsafe_size;
  *__temp1762v=buffer__unsafe_offset;
  *__temp1763v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1764v, uint64_t* __temp1765v, uint16_t* __temp1766v, uint16_t* __temp1767v) {
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
  *__temp1764v=__temp564v__unsafe_ptr;
  *__temp1765v=__temp564v__unsafe_size;
  *__temp1766v=__temp564v__unsafe_offset;
  *__temp1767v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__temp1661v(char** __temp1768v, const char** __temp1769v) {
  char* f__unsafe_ptr=*__temp1768v;
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
  *__temp1768v=f__unsafe_ptr;
  *__temp1769v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1770v) {
  *__temp1770v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1771v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1771v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1772v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1773v) {
  *__temp1773v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1774v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1774v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1775v) {
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
  *__temp1775v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1776v, uint64_t* __temp1777v, uint64_t* __temp1778v, char* __temp1779v) {
  goto __temp_return;
  __temp_return:
  *__temp1776v=unsafe_ptr;
  *__temp1777v=dat__pos;
  *__temp1778v=dat__length;
  *__temp1779v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1780v, uint64_t* __temp1781v, uint64_t* __temp1782v, char* __temp1783v) {
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
  *__temp1780v=__temp607v__unsafe_ptr;
  *__temp1781v=__temp607v__dat__pos;
  *__temp1782v=__temp607v__dat__length;
  *__temp1783v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1784v, uint64_t* __temp1785v, uint64_t* __temp1786v, char* __temp1787v) {
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
  *__temp1784v=__temp637v__unsafe_ptr;
  *__temp1785v=__temp637v__dat__pos;
  *__temp1786v=__temp637v__dat__length;
  *__temp1787v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v, char* __temp1791v) {
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
  *__temp1788v=__temp645v__unsafe_ptr;
  *__temp1789v=__temp645v__dat__pos;
  *__temp1790v=__temp645v__dat__length;
  *__temp1791v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1666v(char** __temp1792v, char** __temp1793v, uint64_t* __temp1794v, uint64_t* __temp1795v, char* __temp1796v) {
  char* f__unsafe_ptr=*__temp1792v;
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
  *__temp1792v=f__unsafe_ptr;
  *__temp1793v=__temp1668v__unsafe_ptr;
  *__temp1794v=__temp1668v__dat__pos;
  *__temp1795v=__temp1668v__dat__length;
  *__temp1796v=__temp1668v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1729v() {
  char* __temp1731v__unsafe_ptr=0;
  char* __temp1733v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __temp1734v=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__unsafe_size=0;
  uint16_t __temp1735v__unsafe_offset=0;
  uint16_t __temp1735v__unsafe_align=0;
  char __temp1736v____temp565v____temp470v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __temp1737v=0;
  char* __temp1738v__unsafe_ptr=0;
  uint64_t __temp1738v__dat__pos=0;
  uint64_t __temp1738v__dat__length=0;
  char __temp1738v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1651v(__temp1730v,&__temp1731v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1733v__unsafe_ptr=__temp1731v__unsafe_ptr;
  dir__unsafe_ptr=__temp1733v__unsafe_ptr;
  __temp1734v=128;
  __temp_errcode=alloc__temp559v(__temp1734v,&__temp1735v__unsafe_ptr,&__temp1735v__unsafe_size,&__temp1735v__unsafe_offset,&__temp1735v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1735v__unsafe_ptr;
  buf__unsafe_size=__temp1735v__unsafe_size;
  buf__unsafe_offset=__temp1735v__unsafe_offset;
  buf__unsafe_align=__temp1735v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1666v(&dir__unsafe_ptr,&__temp1738v__unsafe_ptr,&__temp1738v__dat__pos,&__temp1738v__dat__length,&__temp1738v__dat__first);
  __temp1737v=__temp_complain;
  entry__unsafe_ptr=__temp1738v__unsafe_ptr;
  entry__dat__pos=__temp1738v__dat__pos;
  entry__dat__length=__temp1738v__dat__length;
  entry__dat__first=__temp1738v__dat__first;
  __temp1737v=__temp1737v==0;
  if(!__temp1737v){
  break;
  }
  print__temp743v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1735v__unsafe_ptr,&__temp1736v____temp565v____temp470v__);
  if(__temp1736v____temp565v____temp470v__){
  __temp1735v__unsafe_size=0;
  __temp1735v__unsafe_size=__temp1735v__unsafe_size;
  free__temp461v(&__temp1735v__unsafe_ptr);
  }
  closedir__temp1650v(__temp1731v__unsafe_ptr);
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1729v();return 0;}