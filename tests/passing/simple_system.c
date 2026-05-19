#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1729v="ls";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp555v(char** __temp1732v, uint64_t* __temp1733v, uint16_t* __temp1734v, uint16_t* __temp1735v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1732v=unsafe_ptr;
  *__temp1733v=unsafe_size;
  *__temp1734v=unsafe_offset;
  *__temp1735v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1736v) {
  *__temp1736v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1737v) {
  int value=0;
  *__temp1737v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1738v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1738v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1739v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1739v=__temp95v__;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1741v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1741v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1742v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1743v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1743v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1744v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1744v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1745v) {
  *__temp1745v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1746v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1746v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1747v) {
  char __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  char* __temp552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp547v__);
  if(__temp547v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp548v__);
  mul__temp194v(i,__temp548v__,&__temp549v__);
  nat__temp470v(buffer__unsafe_offset,&__temp550v__);
  add__temp170v(__temp549v__,__temp550v__,&__temp551v__);
  add__temp468v(buffer__unsafe_ptr,__temp551v__,&__temp552v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1747v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp591v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1748v, uint64_t* __temp1749v, uint64_t* __temp1750v, char* __temp1751v) {
  goto __temp_return;
  __temp_return:
  *__temp1748v=unsafe_ptr;
  *__temp1749v=dat__pos;
  *__temp1750v=dat__length;
  *__temp1751v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp595v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1752v, uint64_t* __temp1753v, uint64_t* __temp1754v, char* __temp1755v) {
  char* unsafe_ptr=0;
  uint64_t __temp596v__=0;
  uint64_t __temp597v=0;
  char __temp598v__=0;
  uint64_t __temp599v__=0;
  uint64_t __temp600v=0;
  char __temp601v__=0;
  char* __temp602v__unsafe_ptr=0;
  uint64_t __temp602v__dat__pos=0;
  uint64_t __temp602v__dat__length=0;
  char __temp602v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp596v__);
  __temp597v=1;
  neq__temp142v(__temp596v__,__temp597v,&__temp598v__);
  if(__temp598v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp599v__);
  __temp600v=0;
  neq__temp142v(__temp599v__,__temp600v,&__temp601v__);
  if(__temp601v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp591v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp602v__unsafe_ptr,&__temp602v__dat__pos,&__temp602v__dat__length,&__temp602v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1752v=__temp602v__unsafe_ptr;
  *__temp1753v=__temp602v__dat__pos;
  *__temp1754v=__temp602v__dat__length;
  *__temp1755v=__temp602v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp627v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1756v, uint64_t* __temp1757v, uint64_t* __temp1758v, char* __temp1759v) {
  uint64_t __temp628v=0;
  char __temp629v__=0;
  char* __temp630v__=0;
  char __temp631v__value=0;
  char first=0;
  char* __temp632v__unsafe_ptr=0;
  uint64_t __temp632v__dat__pos=0;
  uint64_t __temp632v__dat__length=0;
  char __temp632v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp628v=0;
  neq__temp142v(length,__temp628v,&__temp629v__);
  if(__temp629v__){
  __temp_errcode=get__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp630v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp630v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp631v__value,__temp630v__,1);
  first=__temp631v__value;
  }
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp632v__unsafe_ptr,&__temp632v__dat__pos,&__temp632v__dat__length,&__temp632v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1756v=__temp632v__unsafe_ptr;
  *__temp1757v=__temp632v__dat__pos;
  *__temp1758v=__temp632v__dat__length;
  *__temp1759v=__temp632v__dat__first;
  
  return __temp_errcode;
}

int str__temp633v(const char* c, char** __temp1760v, uint64_t* __temp1761v, uint64_t* __temp1762v, char* __temp1763v) {
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* __temp635v__unsafe_ptr=0;
  uint64_t __temp635v__unsafe_size=0;
  uint16_t __temp635v__unsafe_offset=0;
  uint16_t __temp635v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp636v__=0;
  uint64_t length=0;
  uint64_t __temp637v=0;
  uint64_t __temp638v__=0;
  uint64_t __temp639v=0;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__dat__pos=0;
  uint64_t __temp640v__dat__length=0;
  char __temp640v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp634v__unsafe_ptr,&__temp634v__unsafe_size,&__temp634v__unsafe_offset,&__temp634v__unsafe_align);
  __temp635v__unsafe_ptr=__temp634v__unsafe_ptr;
  __temp635v__unsafe_size=__temp634v__unsafe_size;
  __temp635v__unsafe_offset=__temp634v__unsafe_offset;
  __temp635v__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=__temp635v__unsafe_ptr;
  buf__unsafe_size=__temp635v__unsafe_size;
  buf__unsafe_offset=__temp635v__unsafe_offset;
  buf__unsafe_align=__temp635v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp636v__);
  buf__unsafe_ptr=__temp636v__;
  if(c){
  length=strlen(c);
  }
  __temp637v=1;
  add__temp170v(length,__temp637v,&__temp638v__);
  buf__unsafe_size=__temp638v__;
  __temp639v=0;
  __temp_errcode=str__temp627v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp639v,length,&__temp640v__unsafe_ptr,&__temp640v__dat__pos,&__temp640v__dat__length,&__temp640v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1760v=__temp640v__unsafe_ptr;
  *__temp1761v=__temp640v__dat__pos;
  *__temp1762v=__temp640v__dat__length;
  *__temp1763v=__temp640v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp641v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1764v) {
  goto __temp_return;
  __temp_return:
  *__temp1764v=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1765v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1765v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1766v) {
  char* allocated=*__temp1766v;
  if(allocated){
  free(allocated);
  }
  *__temp1766v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1767v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1767v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1768v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1768v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1769v) {
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
  *__temp1769v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1770v, uint64_t* __temp1771v, uint16_t* __temp1772v, uint16_t* __temp1773v, uint64_t size, char** __temp1774v, uint64_t* __temp1775v, uint16_t* __temp1776v, uint16_t* __temp1777v) {
  char* buffer__unsafe_ptr=*__temp1770v;
  uint64_t buffer__unsafe_size=*__temp1771v;
  uint16_t buffer__unsafe_offset=*__temp1772v;
  uint16_t buffer__unsafe_align=*__temp1773v;
  int __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp478v__);
  if(__temp478v__){
  __temp479v=0;
  neq__temp142v(size,__temp479v,&__temp480v__);
  if(__temp480v__){
  __temp481v=0;
  nat__temp470v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  zero__temp467v(buffer__unsafe_ptr,__temp481v,__temp483v__);
  }
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1770v=buffer__unsafe_ptr;
  *__temp1771v=buffer__unsafe_size;
  *__temp1772v=buffer__unsafe_offset;
  *__temp1773v=buffer__unsafe_align;
  *__temp1774v=buffer__unsafe_ptr;
  *__temp1775v=buffer__unsafe_size;
  *__temp1776v=buffer__unsafe_offset;
  *__temp1777v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp554v(uint64_t size, char** __temp1778v, uint64_t* __temp1779v, uint16_t* __temp1780v, uint16_t* __temp1781v) {
  char* __temp557v__unsafe_ptr=0;
  uint64_t __temp557v__unsafe_size=0;
  uint16_t __temp557v__unsafe_offset=0;
  uint16_t __temp557v__unsafe_align=0;
  char* __temp558v__unsafe_ptr=0;
  uint64_t __temp558v__unsafe_size=0;
  uint16_t __temp558v__unsafe_offset=0;
  uint16_t __temp558v__unsafe_align=0;
  char* __temp559v__unsafe_ptr=0;
  uint64_t __temp559v__unsafe_size=0;
  uint16_t __temp559v__unsafe_offset=0;
  uint16_t __temp559v__unsafe_align=0;
  char __temp560v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp557v__unsafe_ptr,&__temp557v__unsafe_size,&__temp557v__unsafe_offset,&__temp557v__unsafe_align);
  __temp558v__unsafe_ptr=__temp557v__unsafe_ptr;
  __temp558v__unsafe_size=__temp557v__unsafe_size;
  __temp558v__unsafe_offset=__temp557v__unsafe_offset;
  __temp558v__unsafe_align=__temp557v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp558v__unsafe_ptr,&__temp558v__unsafe_size,&__temp558v__unsafe_offset,&__temp558v__unsafe_align,size,&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_offset,&__temp559v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp559v__unsafe_ptr,&__temp560v____temp475v__);
  if(__temp560v____temp475v__){
  __temp559v__unsafe_size=0;
  __temp559v__unsafe_size=__temp559v__unsafe_size;
  __temp559v__unsafe_ptr=__temp559v__unsafe_ptr;
  free__temp466v(&__temp559v__unsafe_ptr);
  }
  __temp_return:
  *__temp1778v=__temp559v__unsafe_ptr;
  *__temp1779v=__temp559v__unsafe_size;
  *__temp1780v=__temp559v__unsafe_offset;
  *__temp1781v=__temp559v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp660v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v, char* __temp1785v) {
  uint64_t __temp661v=0;
  uint64_t __temp662v__=0;
  uint64_t __temp663v__=0;
  char* __temp664v__unsafe_ptr=0;
  uint64_t __temp664v__unsafe_size=0;
  uint16_t __temp664v__unsafe_offset=0;
  uint16_t __temp664v__unsafe_align=0;
  char __temp665v____temp560v____temp475v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp666v=0;
  char* __temp667v__unsafe_ptr=0;
  uint64_t __temp667v__dat__pos=0;
  uint64_t __temp667v__dat__length=0;
  char __temp667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp661v=1;
  len__temp641v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp662v__);
  add__temp170v(__temp661v,__temp662v__,&__temp663v__);
  __temp_errcode=alloc__temp554v(__temp663v__,&__temp664v__unsafe_ptr,&__temp664v__unsafe_size,&__temp664v__unsafe_offset,&__temp664v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp664v__unsafe_ptr;
  buf__unsafe_size=__temp664v__unsafe_size;
  buf__unsafe_offset=__temp664v__unsafe_offset;
  buf__unsafe_align=__temp664v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp666v=0;
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp666v,other__dat__length,other__dat__first,&__temp667v__unsafe_ptr,&__temp667v__dat__pos,&__temp667v__dat__length,&__temp667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp667v__unsafe_ptr,&__temp665v____temp560v____temp475v__);
  if(__temp665v____temp560v____temp475v__){
  __temp664v__unsafe_size=0;
  __temp664v__unsafe_size=__temp664v__unsafe_size;
  __temp667v__unsafe_ptr=__temp667v__unsafe_ptr;
  free__temp466v(&__temp667v__unsafe_ptr);
  }
  __temp_return:
  *__temp1782v=__temp667v__unsafe_ptr;
  *__temp1783v=__temp667v__dat__pos;
  *__temp1784v=__temp667v__dat__length;
  *__temp1785v=__temp667v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp668v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1786v, char** __temp1787v, uint64_t* __temp1788v, uint64_t* __temp1789v, char* __temp1790v) {
  char* __temp669v__unsafe_ptr=0;
  uint64_t __temp669v__dat__pos=0;
  uint64_t __temp669v__dat__length=0;
  char __temp669v__dat__first=0;
  char __temp670v____temp665v____temp560v____temp475v__=0;
  uint64_t __temp670v____temp664v__unsafe_size=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __temp671v__=0;
  char* _ret=0;
  const char* cstr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=copy_null_terminated__temp660v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp669v__unsafe_ptr,&__temp669v__dat__pos,&__temp669v__dat__length,&__temp669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp669v__unsafe_ptr;
  str__dat__pos=__temp669v__dat__pos;
  str__dat__length=__temp669v__dat__length;
  str__dat__first=__temp669v__dat__first;
  add__temp468v(str__unsafe_ptr,str__dat__pos,&__temp671v__);
  _ret=__temp671v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(str__unsafe_ptr,&__temp670v____temp665v____temp560v____temp475v__);
  if(__temp670v____temp665v____temp560v____temp475v__){
  __temp670v____temp664v__unsafe_size=0;
  __temp670v____temp664v__unsafe_size=__temp670v____temp664v__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__temp466v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1786v=cstr;
  *__temp1787v=str__unsafe_ptr;
  *__temp1788v=str__dat__pos;
  *__temp1789v=str__dat__length;
  *__temp1790v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int safe__temp1308v(const char* cmd, const char** __temp1791v) {
  char unsafe_chars=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __temp_errcode=35;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1791v=cmd;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1307v(const char* cmd, int64_t* __temp1792v) {
  int64_t result=0;
  result=system(cmd);
  goto __temp_return;
  __temp_return:
  *__temp1792v=result;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1793v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1793v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1794v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1794v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1795v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1795v=z;
}

int system__temp1316v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1317v__cstr=0;
  char* __temp1317v__str__unsafe_ptr=0;
  uint64_t __temp1317v__str__dat__pos=0;
  uint64_t __temp1317v__str__dat__length=0;
  char __temp1317v__str__dat__first=0;
  char __temp1318v____temp670v____temp665v____temp560v____temp475v__=0;
  uint64_t __temp1318v____temp670v____temp664v__unsafe_size=0;
  const char* __temp1319v__=0;
  int64_t __temp1320v__=0;
  int64_t result=0;
  uint64_t __temp1321v=0;
  int64_t __temp1322v__=0;
  char __temp1323v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp668v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1317v__cstr,&__temp1317v__str__unsafe_ptr,&__temp1317v__str__dat__pos,&__temp1317v__str__dat__length,&__temp1317v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=safe__temp1308v(__temp1317v__cstr,&__temp1319v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1307v(__temp1319v__,&__temp1320v__);
  result=__temp1320v__;
  __temp1321v=0;
  int__temp395v(__temp1321v,&__temp1322v__);
  neq__temp131v(result,__temp1322v__,&__temp1323v__);
  if(__temp1323v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1317v__str__unsafe_ptr,&__temp1318v____temp670v____temp665v____temp560v____temp475v__);
  if(__temp1318v____temp670v____temp665v____temp560v____temp475v__){
  __temp1318v____temp670v____temp664v__unsafe_size=0;
  __temp1318v____temp670v____temp664v__unsafe_size=__temp1318v____temp670v____temp664v__unsafe_size;
  __temp1317v__str__unsafe_ptr=__temp1317v__str__unsafe_ptr;
  free__temp466v(&__temp1317v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1728v() {
  char* __temp1730v__unsafe_ptr=0;
  uint64_t __temp1730v__dat__pos=0;
  uint64_t __temp1730v__dat__length=0;
  char __temp1730v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(__temp1729v,&__temp1730v__unsafe_ptr,&__temp1730v__dat__pos,&__temp1730v__dat__length,&__temp1730v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=system__temp1316v(__temp1730v__unsafe_ptr,__temp1730v__dat__pos,__temp1730v__dat__length,__temp1730v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1728v();return 0;}