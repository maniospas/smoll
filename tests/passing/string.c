#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1731v="README.md";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1747v, uint64_t* __temp1748v, uint16_t* __temp1749v, uint16_t* __temp1750v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1747v=unsafe_ptr;
  *__temp1748v=unsafe_size;
  *__temp1749v=unsafe_offset;
  *__temp1750v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1751v) {
  *__temp1751v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1752v) {
  int value=0;
  *__temp1752v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1753v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1753v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1754v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1754v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1755v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1755v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1756v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1756v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1757v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1758v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1758v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1759v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1759v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1760v) {
  *__temp1760v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1761v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1761v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1762v) {
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
  *__temp1762v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1763v, uint64_t* __temp1764v, uint64_t* __temp1765v, char* __temp1766v) {
  goto __temp_return;
  __temp_return:
  *__temp1763v=unsafe_ptr;
  *__temp1764v=dat__pos;
  *__temp1765v=dat__length;
  *__temp1766v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1767v, uint64_t* __temp1768v, uint64_t* __temp1769v, char* __temp1770v) {
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
  *__temp1767v=__temp600v__unsafe_ptr;
  *__temp1768v=__temp600v__dat__pos;
  *__temp1769v=__temp600v__dat__length;
  *__temp1770v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1771v, uint64_t* __temp1772v, uint64_t* __temp1773v, char* __temp1774v) {
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
  *__temp1771v=__temp630v__unsafe_ptr;
  *__temp1772v=__temp630v__dat__pos;
  *__temp1773v=__temp630v__dat__length;
  *__temp1774v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1775v, uint64_t* __temp1776v, uint64_t* __temp1777v, char* __temp1778v) {
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
  *__temp1775v=__temp638v__unsafe_ptr;
  *__temp1776v=__temp638v__dat__pos;
  *__temp1777v=__temp638v__dat__length;
  *__temp1778v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp639v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1779v) {
  goto __temp_return;
  __temp_return:
  *__temp1779v=s__dat__length;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1780v) {
  char* allocated=*__temp1780v;
  if(allocated){
  free(allocated);
  }
  *__temp1780v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1781v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1782v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1782v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1783v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1783v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1784v) {
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
  *__temp1784v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1785v, uint64_t* __temp1786v, uint16_t* __temp1787v, uint16_t* __temp1788v, uint64_t size, char** __temp1789v, uint64_t* __temp1790v, uint16_t* __temp1791v, uint16_t* __temp1792v) {
  char* buffer__unsafe_ptr=*__temp1785v;
  uint64_t buffer__unsafe_size=*__temp1786v;
  uint16_t buffer__unsafe_offset=*__temp1787v;
  uint16_t buffer__unsafe_align=*__temp1788v;
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
  *__temp1785v=buffer__unsafe_ptr;
  *__temp1786v=buffer__unsafe_size;
  *__temp1787v=buffer__unsafe_offset;
  *__temp1788v=buffer__unsafe_align;
  *__temp1789v=__temp486v__unsafe_ptr;
  *__temp1790v=__temp486v__unsafe_size;
  *__temp1791v=__temp486v__unsafe_offset;
  *__temp1792v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp660v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1793v, uint64_t* __temp1794v, uint64_t* __temp1795v, char* __temp1796v) {
  char* __temp661v__unsafe_ptr=0;
  uint64_t __temp661v__unsafe_size=0;
  uint16_t __temp661v__unsafe_offset=0;
  uint16_t __temp661v__unsafe_align=0;
  uint64_t __temp662v=0;
  uint64_t __temp663v__=0;
  uint64_t __temp664v__=0;
  char* __temp665v__unsafe_ptr=0;
  uint64_t __temp665v__unsafe_size=0;
  uint16_t __temp665v__unsafe_offset=0;
  uint16_t __temp665v__unsafe_align=0;
  uint64_t __temp666v____temp475v=0;
  char __temp666v____temp476v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp667v=0;
  char* __temp668v__unsafe_ptr=0;
  uint64_t __temp668v__dat__pos=0;
  uint64_t __temp668v__dat__length=0;
  char __temp668v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp591v(&__temp661v__unsafe_ptr,&__temp661v__unsafe_size,&__temp661v__unsafe_offset,&__temp661v__unsafe_align);
  __temp662v=1;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp663v__);
  add__temp170v(__temp662v,__temp663v__,&__temp664v__);
  __temp_errcode=alloc__temp473v(&__temp661v__unsafe_ptr,&__temp661v__unsafe_size,&__temp661v__unsafe_offset,&__temp661v__unsafe_align,__temp664v__,&__temp665v__unsafe_ptr,&__temp665v__unsafe_size,&__temp665v__unsafe_offset,&__temp665v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp665v__unsafe_ptr;
  buf__unsafe_size=__temp665v__unsafe_size;
  buf__unsafe_offset=__temp665v__unsafe_offset;
  buf__unsafe_align=__temp665v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp667v=0;
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp667v,other__dat__length,other__dat__first,&__temp668v__unsafe_ptr,&__temp668v__dat__pos,&__temp668v__dat__length,&__temp668v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp666v____temp475v=0;
  neq__temp142v(__temp665v__unsafe_size,__temp666v____temp475v,&__temp666v____temp476v__);
  if(__temp666v____temp476v__){
  __temp665v__unsafe_size=0;
  __temp665v__unsafe_size=__temp665v__unsafe_size;
  __temp668v__unsafe_ptr=__temp668v__unsafe_ptr;
  free__temp466v(&__temp668v__unsafe_ptr);
  }
  __temp_return:
  *__temp1793v=__temp668v__unsafe_ptr;
  *__temp1794v=__temp668v__dat__pos;
  *__temp1795v=__temp668v__dat__length;
  *__temp1796v=__temp668v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp669v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1797v, char** __temp1798v, uint64_t* __temp1799v, uint64_t* __temp1800v, char* __temp1801v) {
  char* __temp670v__unsafe_ptr=0;
  uint64_t __temp670v__dat__pos=0;
  uint64_t __temp670v__dat__length=0;
  char __temp670v__dat__first=0;
  uint64_t __temp671v____temp666v____temp475v=0;
  uint64_t __temp671v____temp665v__unsafe_size=0;
  char __temp671v____temp666v____temp476v__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __temp672v__=0;
  char* _ret=0;
  const char* cstr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=copy_null_terminated__temp660v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp670v__unsafe_ptr,&__temp670v__dat__pos,&__temp670v__dat__length,&__temp670v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp670v__unsafe_ptr;
  str__dat__pos=__temp670v__dat__pos;
  str__dat__length=__temp670v__dat__length;
  str__dat__first=__temp670v__dat__first;
  add__temp468v(str__unsafe_ptr,str__dat__pos,&__temp672v__);
  _ret=__temp672v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:__temp671v____temp666v____temp475v=0;
  neq__temp142v(__temp671v____temp665v__unsafe_size,__temp671v____temp666v____temp475v,&__temp671v____temp666v____temp476v__);
  if(__temp671v____temp666v____temp476v__){
  __temp671v____temp665v__unsafe_size=0;
  __temp671v____temp665v__unsafe_size=__temp671v____temp665v__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__temp466v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1797v=cstr;
  *__temp1798v=str__unsafe_ptr;
  *__temp1799v=str__dat__pos;
  *__temp1800v=str__dat__length;
  *__temp1801v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1325v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1802v) {
  const char* __temp1326v__cstr=0;
  char* __temp1326v__str__unsafe_ptr=0;
  uint64_t __temp1326v__str__dat__pos=0;
  uint64_t __temp1326v__str__dat__length=0;
  char __temp1326v__str__dat__first=0;
  uint64_t __temp1327v____temp671v____temp666v____temp475v=0;
  uint64_t __temp1327v____temp671v____temp665v__unsafe_size=0;
  char __temp1327v____temp671v____temp666v____temp476v__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1328v__=0;
  char __temp1329v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp669v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1326v__cstr,&__temp1326v__str__unsafe_ptr,&__temp1326v__str__dat__pos,&__temp1326v__str__dat__length,&__temp1326v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1326v__cstr;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp412v(unsafe_ptr,&__temp1328v__);
  not__temp26v(__temp1328v__,&__temp1329v__);
  if(__temp1329v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1802v=unsafe_ptr;
  __temp1327v____temp671v____temp666v____temp475v=0;
  neq__temp142v(__temp1327v____temp671v____temp665v__unsafe_size,__temp1327v____temp671v____temp666v____temp475v,&__temp1327v____temp671v____temp666v____temp476v__);
  if(__temp1327v____temp671v____temp666v____temp476v__){
  __temp1327v____temp671v____temp665v__unsafe_size=0;
  __temp1327v____temp671v____temp665v__unsafe_size=__temp1327v____temp671v____temp665v__unsafe_size;
  __temp1326v__str__unsafe_ptr=__temp1326v__str__unsafe_ptr;
  free__temp466v(&__temp1326v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1270v(char** __temp1803v, uint64_t* __temp1804v, uint16_t* __temp1805v, uint16_t* __temp1806v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1803v=unsafe_ptr;
  *__temp1804v=unsafe_size;
  *__temp1805v=unsafe_offset;
  *__temp1806v=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1807v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1807v=__temp446v__;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1808v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1808v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1809v) {
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
  *__temp1809v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1492v(char** __temp1810v, uint64_t* __temp1811v, uint16_t* __temp1812v, uint16_t* __temp1813v, uint64_t* __temp1814v, char** __temp1815v, char** __temp1816v, uint64_t* __temp1817v, uint64_t* __temp1818v, char* __temp1819v) {
  char* buf__unsafe_ptr=*__temp1810v;
  uint64_t buf__unsafe_size=*__temp1811v;
  uint16_t buf__unsafe_offset=*__temp1812v;
  uint16_t buf__unsafe_align=*__temp1813v;
  uint64_t pos=*__temp1814v;
  char* f__unsafe_ptr=*__temp1815v;
  int __temp1493v=0;
  char __temp1494v__=0;
  char __temp1495v__=0;
  char* __temp1496v__=0;
  char* contents=0;
  uint64_t __temp1497v__=0;
  uint64_t size=0;
  char* obtained=0;
  char __temp1498v__=0;
  char __temp1499v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1500v__=0;
  char* __temp1501v__unsafe_ptr=0;
  uint64_t __temp1501v__dat__pos=0;
  uint64_t __temp1501v__dat__length=0;
  char __temp1501v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(buf__unsafe_ptr,&__temp1494v__);
  not__temp26v(__temp1494v__,&__temp1495v__);
  if(__temp1495v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  add__temp468v(buf__unsafe_ptr,pos,&__temp1496v__);
  contents=__temp1496v__;
  __temp_errcode=sub__temp347v(buf__unsafe_size,pos,&__temp1497v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1497v__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__temp412v(obtained,&__temp1498v__);
  not__temp26v(__temp1498v__,&__temp1499v__);
  if(__temp1499v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__temp170v(pos,bytes_read,&__temp1500v__);
  pos=__temp1500v__;
  __temp_errcode=str__temp625v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__temp1501v__unsafe_ptr,&__temp1501v__dat__pos,&__temp1501v__dat__length,&__temp1501v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1810v=buf__unsafe_ptr;
  *__temp1811v=buf__unsafe_size;
  *__temp1812v=buf__unsafe_offset;
  *__temp1813v=buf__unsafe_align;
  *__temp1814v=pos;
  *__temp1815v=f__unsafe_ptr;
  *__temp1816v=__temp1501v__unsafe_ptr;
  *__temp1817v=__temp1501v__dat__pos;
  *__temp1818v=__temp1501v__dat__length;
  *__temp1819v=__temp1501v__dat__first;
  
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
  uint64_t __temp1732v__dat__pos=0;
  uint64_t __temp1732v__dat__length=0;
  char __temp1732v__dat__first=0;
  char* __temp1733v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__unsafe_size=0;
  uint16_t __temp1735v__unsafe_offset=0;
  uint16_t __temp1735v__unsafe_align=0;
  uint64_t __temp1736v=0;
  uint64_t __temp1737v__=0;
  char* __temp1738v__unsafe_ptr=0;
  uint64_t __temp1738v__unsafe_size=0;
  uint16_t __temp1738v__unsafe_offset=0;
  uint16_t __temp1738v__unsafe_align=0;
  uint64_t __temp1739v____temp475v=0;
  char __temp1739v____temp476v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __temp1740v=0;
  uint64_t __temp1741v=0;
  uint64_t pos=0;
  char __temp1742v=0;
  char* __temp1743v__unsafe_ptr=0;
  uint64_t __temp1743v__dat__pos=0;
  uint64_t __temp1743v__dat__length=0;
  char __temp1743v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1744v=0;
  char* __temp1745v__unsafe_ptr=0;
  uint64_t __temp1745v__dat__pos=0;
  uint64_t __temp1745v__dat__length=0;
  char __temp1745v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(__temp1731v,&__temp1732v__unsafe_ptr,&__temp1732v__dat__pos,&__temp1732v__dat__length,&__temp1732v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1325v(__temp1732v__unsafe_ptr,__temp1732v__dat__pos,__temp1732v__dat__length,__temp1732v__dat__first,&__temp1733v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1733v__unsafe_ptr;
  char____temp_buffer____buffer__temp1270v(&__temp1735v__unsafe_ptr,&__temp1735v__unsafe_size,&__temp1735v__unsafe_offset,&__temp1735v__unsafe_align);
  __temp1736v=4;
  KB__temp444v(__temp1736v,&__temp1737v__);
  __temp_errcode=alloc__temp473v(&__temp1735v__unsafe_ptr,&__temp1735v__unsafe_size,&__temp1735v__unsafe_offset,&__temp1735v__unsafe_align,__temp1737v__,&__temp1738v__unsafe_ptr,&__temp1738v__unsafe_size,&__temp1738v__unsafe_offset,&__temp1738v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1738v__unsafe_ptr;
  mem__unsafe_size=__temp1738v__unsafe_size;
  mem__unsafe_offset=__temp1738v__unsafe_offset;
  mem__unsafe_align=__temp1738v__unsafe_align;
  __temp1740v=0;
  __temp1741v=__temp1740v;
  pos=__temp1741v;
  while(1){
  __temp_complain=line__temp1492v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1743v__unsafe_ptr,&__temp1743v__dat__pos,&__temp1743v__dat__length,&__temp1743v__dat__first);
  __temp1742v=__temp_complain;
  line__unsafe_ptr=__temp1743v__unsafe_ptr;
  line__dat__pos=__temp1743v__dat__pos;
  line__dat__length=__temp1743v__dat__length;
  line__dat__first=__temp1743v__dat__first;
  __temp1742v=__temp1742v==0;
  if(!__temp1742v){
  break;
  }
  continue;
  }
  if(__temp1733v__unsafe_ptr){
  fclose((FILE*)__temp1733v__unsafe_ptr);
  __temp1733v__unsafe_ptr=0;
  }
  __temp1744v=0;
  __temp_errcode=str__temp625v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__temp1744v,pos,&__temp1745v__unsafe_ptr,&__temp1745v__dat__pos,&__temp1745v__dat__length,&__temp1745v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp741v(__temp1745v__unsafe_ptr,__temp1745v__dat__pos,__temp1745v__dat__length,__temp1745v__dat__first);
  
  __temp_failure:__temp1739v____temp475v=0;
  neq__temp142v(__temp1738v__unsafe_size,__temp1739v____temp475v,&__temp1739v____temp476v__);
  if(__temp1739v____temp476v__){
  __temp1738v__unsafe_size=0;
  __temp1738v__unsafe_size=__temp1738v__unsafe_size;
  __temp1738v__unsafe_ptr=__temp1738v__unsafe_ptr;
  free__temp466v(&__temp1738v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1730v();return 0;}