#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1731v="./std";
static const char* __temp_all_errcodes[51] = {"noerr",
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1742v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1743v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1743v=z;
}

static inline __attribute__((always_inline)) int read__temp1651v(const char* path, char** __temp1744v) {
  char* unsafe_ptr=0;
  char __temp1653v__=0;
  char __temp1654v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1653v__);
  not__temp26v(__temp1653v__,&__temp1654v__);
  if(__temp1654v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1650v(unsafe_ptr);
  __temp_return:
  *__temp1744v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1270v(char** __temp1745v, uint64_t* __temp1746v, uint16_t* __temp1747v, uint16_t* __temp1748v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1745v=unsafe_ptr;
  *__temp1746v=unsafe_size;
  *__temp1747v=unsafe_offset;
  *__temp1748v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1749v) {
  int value=0;
  *__temp1749v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1750v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1750v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1751v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1751v=__temp95v__;
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

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1753v) {
  char* allocated=*__temp1753v;
  if(allocated){
  free(allocated);
  }
  *__temp1753v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1754v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1754v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1755v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1755v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1756v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1756v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1757v) {
  char* allocated=0;
  char __temp460v__=0;
  char __temp461v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  exists__temp412v(allocated,&__temp460v__);
  not__temp26v(__temp460v__,&__temp461v__);
  if(__temp461v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1757v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1758v, uint64_t* __temp1759v, uint16_t* __temp1760v, uint16_t* __temp1761v, uint64_t size, char** __temp1762v, uint64_t* __temp1763v, uint16_t* __temp1764v, uint16_t* __temp1765v) {
  char* buffer__unsafe_ptr=*__temp1758v;
  uint64_t buffer__unsafe_size=*__temp1759v;
  uint16_t buffer__unsafe_offset=*__temp1760v;
  uint16_t buffer__unsafe_align=*__temp1761v;
  int __temp474v=0;
  uint64_t __temp475v=0;
  char __temp476v__=0;
  uint64_t __temp477v=0;
  char* ptr=0;
  char __temp479v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v=0;
  uint64_t __temp483v__=0;
  uint64_t __temp484v__=0;
  char* __temp486v__unsafe_ptr=0;
  uint64_t __temp486v__unsafe_size=0;
  uint16_t __temp486v__unsafe_offset=0;
  uint16_t __temp486v__unsafe_align=0;
  uint64_t __temp487v=0;
  char __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t __temp490v__=0;
  uint64_t bytes=0;
  char* __temp491v__=0;
  uint64_t __temp492v=0;
  char* __temp494v__unsafe_ptr=0;
  uint64_t __temp494v__unsafe_size=0;
  uint16_t __temp494v__unsafe_offset=0;
  uint16_t __temp494v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp479v__);
  if(__temp479v__){
  __temp480v=0;
  neq__temp142v(size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp482v=0;
  nat__temp470v(buffer__unsafe_align,&__temp483v__);
  mul__temp194v(__temp483v__,size,&__temp484v__);
  zero__temp467v(buffer__unsafe_ptr,__temp482v,__temp484v__);
  }
  __temp486v__unsafe_ptr=buffer__unsafe_ptr;
  __temp486v__unsafe_size=buffer__unsafe_size;
  __temp486v__unsafe_offset=buffer__unsafe_offset;
  __temp486v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp487v=0;
  neq__temp142v(buffer__unsafe_size,__temp487v,&__temp488v__);
  if(__temp488v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp489v__);
  mul__temp194v(__temp489v__,size,&__temp490v__);
  bytes=__temp490v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp491v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp491v__;
  __temp492v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp492v,bytes);
  __temp494v__unsafe_ptr=buffer__unsafe_ptr;
  __temp494v__unsafe_size=buffer__unsafe_size;
  __temp494v__unsafe_offset=buffer__unsafe_offset;
  __temp494v__unsafe_align=buffer__unsafe_align;
  __temp486v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp486v__unsafe_size=__temp494v__unsafe_size;
  __temp486v__unsafe_offset=__temp494v__unsafe_offset;
  __temp486v__unsafe_align=__temp494v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp475v=0;
  neq__temp142v(__temp486v__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp486v__unsafe_size=0;
  __temp486v__unsafe_size=__temp486v__unsafe_size;
  __temp486v__unsafe_ptr=__temp486v__unsafe_ptr;
  free__temp466v(&__temp486v__unsafe_ptr);
  }
  __temp_return:
  *__temp1758v=buffer__unsafe_ptr;
  *__temp1759v=buffer__unsafe_size;
  *__temp1760v=buffer__unsafe_offset;
  *__temp1761v=buffer__unsafe_align;
  *__temp1762v=__temp486v__unsafe_ptr;
  *__temp1763v=__temp486v__unsafe_size;
  *__temp1764v=__temp486v__unsafe_offset;
  *__temp1765v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__temp1661v(char** __temp1766v, const char** __temp1767v) {
  char* f__unsafe_ptr=*__temp1766v;
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
  __temp_errcode=48;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1664v__);
  not__temp26v(__temp1664v__,&__temp1665v__);
  if(__temp1665v__){
  __temp_errcode=49;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1766v=f__unsafe_ptr;
  *__temp1767v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1768v, uint64_t* __temp1769v, uint16_t* __temp1770v, uint16_t* __temp1771v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1768v=unsafe_ptr;
  *__temp1769v=unsafe_size;
  *__temp1770v=unsafe_offset;
  *__temp1771v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1772v) {
  *__temp1772v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1773v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1773v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1774v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1774v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1775v) {
  *__temp1775v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1776v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1776v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1777v) {
  char __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  uint64_t __temp556v__=0;
  uint64_t __temp557v__=0;
  char* __temp558v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp553v__);
  if(__temp553v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp554v__);
  mul__temp194v(i,__temp554v__,&__temp555v__);
  nat__temp470v(buffer__unsafe_offset,&__temp556v__);
  add__temp170v(__temp555v__,__temp556v__,&__temp557v__);
  add__temp468v(buffer__unsafe_ptr,__temp557v__,&__temp558v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1777v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1778v, uint64_t* __temp1779v, uint64_t* __temp1780v, char* __temp1781v) {
  goto __temp_return;
  __temp_return:
  *__temp1778v=unsafe_ptr;
  *__temp1779v=dat__pos;
  *__temp1780v=dat__length;
  *__temp1781v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v, char* __temp1785v) {
  char* unsafe_ptr=0;
  uint64_t __temp594v__=0;
  uint64_t __temp595v=0;
  char __temp596v__=0;
  uint64_t __temp597v__=0;
  uint64_t __temp598v=0;
  char __temp599v__=0;
  char* __temp600v__unsafe_ptr=0;
  uint64_t __temp600v__dat__pos=0;
  uint64_t __temp600v__dat__length=0;
  char __temp600v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp594v__);
  __temp595v=1;
  neq__temp142v(__temp594v__,__temp595v,&__temp596v__);
  if(__temp596v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp597v__);
  __temp598v=0;
  neq__temp142v(__temp597v__,__temp598v,&__temp599v__);
  if(__temp599v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp587v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp600v__unsafe_ptr,&__temp600v__dat__pos,&__temp600v__dat__length,&__temp600v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1782v=__temp600v__unsafe_ptr;
  *__temp1783v=__temp600v__dat__pos;
  *__temp1784v=__temp600v__dat__length;
  *__temp1785v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1786v, uint64_t* __temp1787v, uint64_t* __temp1788v, char* __temp1789v) {
  uint64_t __temp626v=0;
  char __temp627v__=0;
  char* __temp628v__=0;
  char __temp629v__value=0;
  char first=0;
  char* __temp630v__unsafe_ptr=0;
  uint64_t __temp630v__dat__pos=0;
  uint64_t __temp630v__dat__length=0;
  char __temp630v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp626v=0;
  neq__temp142v(length,__temp626v,&__temp627v__);
  if(__temp627v__){
  __temp_errcode=get__temp552v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp628v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp628v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp629v__value,__temp628v__,1);
  first=__temp629v__value;
  }
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp630v__unsafe_ptr,&__temp630v__dat__pos,&__temp630v__dat__length,&__temp630v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1786v=__temp630v__unsafe_ptr;
  *__temp1787v=__temp630v__dat__pos;
  *__temp1788v=__temp630v__dat__length;
  *__temp1789v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1790v, uint64_t* __temp1791v, uint64_t* __temp1792v, char* __temp1793v) {
  char* __temp632v__unsafe_ptr=0;
  uint64_t __temp632v__unsafe_size=0;
  uint16_t __temp632v__unsafe_offset=0;
  uint16_t __temp632v__unsafe_align=0;
  char* __temp633v__unsafe_ptr=0;
  uint64_t __temp633v__unsafe_size=0;
  uint16_t __temp633v__unsafe_offset=0;
  uint16_t __temp633v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp634v__=0;
  uint64_t length=0;
  uint64_t __temp635v=0;
  uint64_t __temp636v__=0;
  uint64_t __temp637v=0;
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__dat__pos=0;
  uint64_t __temp638v__dat__length=0;
  char __temp638v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp591v(&__temp632v__unsafe_ptr,&__temp632v__unsafe_size,&__temp632v__unsafe_offset,&__temp632v__unsafe_align);
  __temp633v__unsafe_ptr=__temp632v__unsafe_ptr;
  __temp633v__unsafe_size=__temp632v__unsafe_size;
  __temp633v__unsafe_offset=__temp632v__unsafe_offset;
  __temp633v__unsafe_align=__temp632v__unsafe_align;
  buf__unsafe_ptr=__temp633v__unsafe_ptr;
  buf__unsafe_size=__temp633v__unsafe_size;
  buf__unsafe_offset=__temp633v__unsafe_offset;
  buf__unsafe_align=__temp633v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp634v__);
  buf__unsafe_ptr=__temp634v__;
  if(c){
  length=strlen(c);
  }
  __temp635v=1;
  add__temp170v(length,__temp635v,&__temp636v__);
  buf__unsafe_size=__temp636v__;
  __temp637v=0;
  __temp_errcode=str__temp625v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp637v,length,&__temp638v__unsafe_ptr,&__temp638v__dat__pos,&__temp638v__dat__length,&__temp638v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1790v=__temp638v__unsafe_ptr;
  *__temp1791v=__temp638v__dat__pos;
  *__temp1792v=__temp638v__dat__length;
  *__temp1793v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1666v(char** __temp1794v, char** __temp1795v, uint64_t* __temp1796v, uint64_t* __temp1797v, char* __temp1798v) {
  char* f__unsafe_ptr=*__temp1794v;
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
  __temp_errcode=str__temp631v(__temp1667v__,&__temp1668v__unsafe_ptr,&__temp1668v__dat__pos,&__temp1668v__dat__length,&__temp1668v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1794v=f__unsafe_ptr;
  *__temp1795v=__temp1668v__unsafe_ptr;
  *__temp1796v=__temp1668v__dat__pos;
  *__temp1797v=__temp1668v__dat__length;
  *__temp1798v=__temp1668v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1730v() {
  char* __temp1732v__unsafe_ptr=0;
  char* __temp1734v__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__unsafe_size=0;
  uint16_t __temp1735v__unsafe_offset=0;
  uint16_t __temp1735v__unsafe_align=0;
  uint64_t __temp1736v=0;
  char* __temp1737v__unsafe_ptr=0;
  uint64_t __temp1737v__unsafe_size=0;
  uint16_t __temp1737v__unsafe_offset=0;
  uint16_t __temp1737v__unsafe_align=0;
  uint64_t __temp1738v____temp475v=0;
  char __temp1738v____temp476v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char __temp1739v=0;
  char* __temp1740v__unsafe_ptr=0;
  uint64_t __temp1740v__dat__pos=0;
  uint64_t __temp1740v__dat__length=0;
  char __temp1740v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1651v(__temp1731v,&__temp1732v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1734v__unsafe_ptr=__temp1732v__unsafe_ptr;
  dir__unsafe_ptr=__temp1734v__unsafe_ptr;
  char____temp_buffer____buffer__temp1270v(&__temp1735v__unsafe_ptr,&__temp1735v__unsafe_size,&__temp1735v__unsafe_offset,&__temp1735v__unsafe_align);
  __temp1736v=128;
  __temp_errcode=alloc__temp473v(&__temp1735v__unsafe_ptr,&__temp1735v__unsafe_size,&__temp1735v__unsafe_offset,&__temp1735v__unsafe_align,__temp1736v,&__temp1737v__unsafe_ptr,&__temp1737v__unsafe_size,&__temp1737v__unsafe_offset,&__temp1737v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1737v__unsafe_ptr;
  buf__unsafe_size=__temp1737v__unsafe_size;
  buf__unsafe_offset=__temp1737v__unsafe_offset;
  buf__unsafe_align=__temp1737v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1666v(&dir__unsafe_ptr,&__temp1740v__unsafe_ptr,&__temp1740v__dat__pos,&__temp1740v__dat__length,&__temp1740v__dat__first);
  __temp1739v=__temp_complain;
  entry__unsafe_ptr=__temp1740v__unsafe_ptr;
  entry__dat__pos=__temp1740v__dat__pos;
  entry__dat__length=__temp1740v__dat__length;
  entry__dat__first=__temp1740v__dat__first;
  __temp1739v=__temp1739v==0;
  if(!__temp1739v){
  break;
  }
  print__temp741v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first);
  }
  
  __temp_failure:__temp1738v____temp475v=0;
  neq__temp142v(__temp1737v__unsafe_size,__temp1738v____temp475v,&__temp1738v____temp476v__);
  if(__temp1738v____temp476v__){
  __temp1737v__unsafe_size=0;
  __temp1737v__unsafe_size=__temp1737v__unsafe_size;
  __temp1737v__unsafe_ptr=__temp1737v__unsafe_ptr;
  free__temp466v(&__temp1737v__unsafe_ptr);
  }
  closedir__temp1650v(__temp1732v__unsafe_ptr);
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1730v();return 0;}