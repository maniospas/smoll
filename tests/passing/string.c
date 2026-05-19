#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1733v="README.md";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1748v, uint64_t* __temp1749v, uint16_t* __temp1750v, uint16_t* __temp1751v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1748v=unsafe_ptr;
  *__temp1749v=unsafe_size;
  *__temp1750v=unsafe_offset;
  *__temp1751v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1752v) {
  *__temp1752v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1753v) {
  int value=0;
  *__temp1753v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1754v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1754v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1755v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1755v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1756v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1756v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1757v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1757v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1758v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1758v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1759v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1759v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1760v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1760v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1761v) {
  *__temp1761v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1762v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1762v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1763v) {
  char __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  uint64_t __temp554v__=0;
  uint64_t __temp555v__=0;
  char* __temp556v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp551v__);
  if(__temp551v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp552v__);
  mul__temp194v(i,__temp552v__,&__temp553v__);
  nat__temp470v(buffer__unsafe_offset,&__temp554v__);
  add__temp170v(__temp553v__,__temp554v__,&__temp555v__);
  add__temp468v(buffer__unsafe_ptr,__temp555v__,&__temp556v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1763v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1764v, uint64_t* __temp1765v, uint64_t* __temp1766v, char* __temp1767v) {
  goto __temp_return;
  __temp_return:
  *__temp1764v=unsafe_ptr;
  *__temp1765v=dat__pos;
  *__temp1766v=dat__length;
  *__temp1767v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1768v, uint64_t* __temp1769v, uint64_t* __temp1770v, char* __temp1771v) {
  char* unsafe_ptr=0;
  uint64_t __temp600v__=0;
  uint64_t __temp601v=0;
  char __temp602v__=0;
  uint64_t __temp603v__=0;
  uint64_t __temp604v=0;
  char __temp605v__=0;
  char* __temp606v__unsafe_ptr=0;
  uint64_t __temp606v__dat__pos=0;
  uint64_t __temp606v__dat__length=0;
  char __temp606v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp600v__);
  __temp601v=1;
  neq__temp142v(__temp600v__,__temp601v,&__temp602v__);
  if(__temp602v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp603v__);
  __temp604v=0;
  neq__temp142v(__temp603v__,__temp604v,&__temp605v__);
  if(__temp605v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp595v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp606v__unsafe_ptr,&__temp606v__dat__pos,&__temp606v__dat__length,&__temp606v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1768v=__temp606v__unsafe_ptr;
  *__temp1769v=__temp606v__dat__pos;
  *__temp1770v=__temp606v__dat__length;
  *__temp1771v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1772v, uint64_t* __temp1773v, uint64_t* __temp1774v, char* __temp1775v) {
  uint64_t __temp632v=0;
  char __temp633v__=0;
  char* __temp634v__=0;
  char __temp635v__value=0;
  char first=0;
  char* __temp636v__unsafe_ptr=0;
  uint64_t __temp636v__dat__pos=0;
  uint64_t __temp636v__dat__length=0;
  char __temp636v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp632v=0;
  neq__temp142v(length,__temp632v,&__temp633v__);
  if(__temp633v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp634v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp634v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp635v__value,__temp634v__,1);
  first=__temp635v__value;
  }
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp636v__unsafe_ptr,&__temp636v__dat__pos,&__temp636v__dat__length,&__temp636v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1772v=__temp636v__unsafe_ptr;
  *__temp1773v=__temp636v__dat__pos;
  *__temp1774v=__temp636v__dat__length;
  *__temp1775v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1776v, uint64_t* __temp1777v, uint64_t* __temp1778v, char* __temp1779v) {
  char* __temp638v__unsafe_ptr=0;
  uint64_t __temp638v__unsafe_size=0;
  uint16_t __temp638v__unsafe_offset=0;
  uint16_t __temp638v__unsafe_align=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__unsafe_size=0;
  uint16_t __temp639v__unsafe_offset=0;
  uint16_t __temp639v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp640v__=0;
  uint64_t length=0;
  uint64_t __temp641v=0;
  uint64_t __temp642v__=0;
  uint64_t __temp643v=0;
  char* __temp644v__unsafe_ptr=0;
  uint64_t __temp644v__dat__pos=0;
  uint64_t __temp644v__dat__length=0;
  char __temp644v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp559v(&__temp638v__unsafe_ptr,&__temp638v__unsafe_size,&__temp638v__unsafe_offset,&__temp638v__unsafe_align);
  __temp639v__unsafe_ptr=__temp638v__unsafe_ptr;
  __temp639v__unsafe_size=__temp638v__unsafe_size;
  __temp639v__unsafe_offset=__temp638v__unsafe_offset;
  __temp639v__unsafe_align=__temp638v__unsafe_align;
  buf__unsafe_ptr=__temp639v__unsafe_ptr;
  buf__unsafe_size=__temp639v__unsafe_size;
  buf__unsafe_offset=__temp639v__unsafe_offset;
  buf__unsafe_align=__temp639v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp640v__);
  buf__unsafe_ptr=__temp640v__;
  if(c){
  length=strlen(c);
  }
  __temp641v=1;
  add__temp170v(length,__temp641v,&__temp642v__);
  buf__unsafe_size=__temp642v__;
  __temp643v=0;
  __temp_errcode=str__temp631v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp643v,length,&__temp644v__unsafe_ptr,&__temp644v__dat__pos,&__temp644v__dat__length,&__temp644v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1776v=__temp644v__unsafe_ptr;
  *__temp1777v=__temp644v__dat__pos;
  *__temp1778v=__temp644v__dat__length;
  *__temp1779v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1780v) {
  goto __temp_return;
  __temp_return:
  *__temp1780v=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1781v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1782v) {
  char* allocated=*__temp1782v;
  if(allocated){
  free(allocated);
  }
  *__temp1782v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1783v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1783v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1784v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1785v) {
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
  *__temp1785v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1786v, uint64_t* __temp1787v, uint16_t* __temp1788v, uint16_t* __temp1789v, uint64_t size, char** __temp1790v, uint64_t* __temp1791v, uint16_t* __temp1792v, uint16_t* __temp1793v) {
  char* buffer__unsafe_ptr=*__temp1786v;
  uint64_t buffer__unsafe_size=*__temp1787v;
  uint16_t buffer__unsafe_offset=*__temp1788v;
  uint16_t buffer__unsafe_align=*__temp1789v;
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
  char* __temp485v__unsafe_ptr=0;
  uint64_t __temp485v__unsafe_size=0;
  uint16_t __temp485v__unsafe_offset=0;
  uint16_t __temp485v__unsafe_align=0;
  uint64_t __temp486v=0;
  char __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t bytes=0;
  char* __temp490v__=0;
  uint64_t __temp491v=0;
  char* __temp493v__unsafe_ptr=0;
  uint64_t __temp493v__unsafe_size=0;
  uint16_t __temp493v__unsafe_offset=0;
  uint16_t __temp493v__unsafe_align=0;
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
  __temp485v__unsafe_ptr=buffer__unsafe_ptr;
  __temp485v__unsafe_size=buffer__unsafe_size;
  __temp485v__unsafe_offset=buffer__unsafe_offset;
  __temp485v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp486v=0;
  neq__temp142v(buffer__unsafe_size,__temp486v,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp488v__);
  mul__temp194v(__temp488v__,size,&__temp489v__);
  bytes=__temp489v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp490v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp490v__;
  __temp491v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp491v,bytes);
  __temp493v__unsafe_ptr=buffer__unsafe_ptr;
  __temp493v__unsafe_size=buffer__unsafe_size;
  __temp493v__unsafe_offset=buffer__unsafe_offset;
  __temp493v__unsafe_align=buffer__unsafe_align;
  __temp485v__unsafe_ptr=__temp493v__unsafe_ptr;
  __temp485v__unsafe_size=__temp493v__unsafe_size;
  __temp485v__unsafe_offset=__temp493v__unsafe_offset;
  __temp485v__unsafe_align=__temp493v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp485v__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  __temp485v__unsafe_size=0;
  __temp485v__unsafe_size=__temp485v__unsafe_size;
  __temp485v__unsafe_ptr=__temp485v__unsafe_ptr;
  free__temp466v(&__temp485v__unsafe_ptr);
  }
  __temp_return:
  *__temp1786v=buffer__unsafe_ptr;
  *__temp1787v=buffer__unsafe_size;
  *__temp1788v=buffer__unsafe_offset;
  *__temp1789v=buffer__unsafe_align;
  *__temp1790v=__temp485v__unsafe_ptr;
  *__temp1791v=__temp485v__unsafe_size;
  *__temp1792v=__temp485v__unsafe_offset;
  *__temp1793v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int alloc__temp558v(uint64_t size, char** __temp1794v, uint64_t* __temp1795v, uint16_t* __temp1796v, uint16_t* __temp1797v) {
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__unsafe_size=0;
  uint16_t __temp561v__unsafe_offset=0;
  uint16_t __temp561v__unsafe_align=0;
  char* __temp562v__unsafe_ptr=0;
  uint64_t __temp562v__unsafe_size=0;
  uint16_t __temp562v__unsafe_offset=0;
  uint16_t __temp562v__unsafe_align=0;
  char* __temp563v__unsafe_ptr=0;
  uint64_t __temp563v__unsafe_size=0;
  uint16_t __temp563v__unsafe_offset=0;
  uint16_t __temp563v__unsafe_align=0;
  char __temp564v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp559v(&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_offset,&__temp561v__unsafe_align);
  __temp562v__unsafe_ptr=__temp561v__unsafe_ptr;
  __temp562v__unsafe_size=__temp561v__unsafe_size;
  __temp562v__unsafe_offset=__temp561v__unsafe_offset;
  __temp562v__unsafe_align=__temp561v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp562v__unsafe_ptr,&__temp562v__unsafe_size,&__temp562v__unsafe_offset,&__temp562v__unsafe_align,size,&__temp563v__unsafe_ptr,&__temp563v__unsafe_size,&__temp563v__unsafe_offset,&__temp563v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp563v__unsafe_ptr,&__temp564v____temp475v__);
  if(__temp564v____temp475v__){
  __temp563v__unsafe_size=0;
  __temp563v__unsafe_size=__temp563v__unsafe_size;
  __temp563v__unsafe_ptr=__temp563v__unsafe_ptr;
  free__temp466v(&__temp563v__unsafe_ptr);
  }
  __temp_return:
  *__temp1794v=__temp563v__unsafe_ptr;
  *__temp1795v=__temp563v__unsafe_size;
  *__temp1796v=__temp563v__unsafe_offset;
  *__temp1797v=__temp563v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp664v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1798v, uint64_t* __temp1799v, uint64_t* __temp1800v, char* __temp1801v) {
  uint64_t __temp665v=0;
  uint64_t __temp666v__=0;
  uint64_t __temp667v__=0;
  char* __temp668v__unsafe_ptr=0;
  uint64_t __temp668v__unsafe_size=0;
  uint16_t __temp668v__unsafe_offset=0;
  uint16_t __temp668v__unsafe_align=0;
  char __temp669v____temp564v____temp475v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp670v=0;
  char* __temp671v__unsafe_ptr=0;
  uint64_t __temp671v__dat__pos=0;
  uint64_t __temp671v__dat__length=0;
  char __temp671v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp665v=1;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp666v__);
  add__temp170v(__temp665v,__temp666v__,&__temp667v__);
  __temp_errcode=alloc__temp558v(__temp667v__,&__temp668v__unsafe_ptr,&__temp668v__unsafe_size,&__temp668v__unsafe_offset,&__temp668v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp668v__unsafe_ptr;
  buf__unsafe_size=__temp668v__unsafe_size;
  buf__unsafe_offset=__temp668v__unsafe_offset;
  buf__unsafe_align=__temp668v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp670v=0;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp670v,other__dat__length,other__dat__first,&__temp671v__unsafe_ptr,&__temp671v__dat__pos,&__temp671v__dat__length,&__temp671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp671v__unsafe_ptr,&__temp669v____temp564v____temp475v__);
  if(__temp669v____temp564v____temp475v__){
  __temp668v__unsafe_size=0;
  __temp668v__unsafe_size=__temp668v__unsafe_size;
  __temp671v__unsafe_ptr=__temp671v__unsafe_ptr;
  free__temp466v(&__temp671v__unsafe_ptr);
  }
  __temp_return:
  *__temp1798v=__temp671v__unsafe_ptr;
  *__temp1799v=__temp671v__dat__pos;
  *__temp1800v=__temp671v__dat__length;
  *__temp1801v=__temp671v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp672v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1802v, char** __temp1803v, uint64_t* __temp1804v, uint64_t* __temp1805v, char* __temp1806v) {
  char* __temp673v__unsafe_ptr=0;
  uint64_t __temp673v__dat__pos=0;
  uint64_t __temp673v__dat__length=0;
  char __temp673v__dat__first=0;
  char __temp674v____temp669v____temp564v____temp475v__=0;
  uint64_t __temp674v____temp668v__unsafe_size=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __temp675v__=0;
  char* _ret=0;
  const char* cstr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=copy_null_terminated__temp664v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp673v__unsafe_ptr,&__temp673v__dat__pos,&__temp673v__dat__length,&__temp673v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp673v__unsafe_ptr;
  str__dat__pos=__temp673v__dat__pos;
  str__dat__length=__temp673v__dat__length;
  str__dat__first=__temp673v__dat__first;
  add__temp468v(str__unsafe_ptr,str__dat__pos,&__temp675v__);
  _ret=__temp675v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(str__unsafe_ptr,&__temp674v____temp669v____temp564v____temp475v__);
  if(__temp674v____temp669v____temp564v____temp475v__){
  __temp674v____temp668v__unsafe_size=0;
  __temp674v____temp668v__unsafe_size=__temp674v____temp668v__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__temp466v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1802v=cstr;
  *__temp1803v=str__unsafe_ptr;
  *__temp1804v=str__dat__pos;
  *__temp1805v=str__dat__length;
  *__temp1806v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1328v(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __temp1807v) {
  const char* __temp1329v__cstr=0;
  char* __temp1329v__str__unsafe_ptr=0;
  uint64_t __temp1329v__str__dat__pos=0;
  uint64_t __temp1329v__str__dat__length=0;
  char __temp1329v__str__dat__first=0;
  char __temp1330v____temp674v____temp669v____temp564v____temp475v__=0;
  uint64_t __temp1330v____temp674v____temp668v__unsafe_size=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __temp1331v__=0;
  char __temp1332v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp672v(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__temp1329v__cstr,&__temp1329v__str__unsafe_ptr,&__temp1329v__str__dat__pos,&__temp1329v__str__dat__length,&__temp1329v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  path=__temp1329v__cstr;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__temp412v(unsafe_ptr,&__temp1331v__);
  not__temp26v(__temp1331v__,&__temp1332v__);
  if(__temp1332v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  __temp_return:
  *__temp1807v=unsafe_ptr;
  exists__temp412v(__temp1329v__str__unsafe_ptr,&__temp1330v____temp674v____temp669v____temp564v____temp475v__);
  if(__temp1330v____temp674v____temp669v____temp564v____temp475v__){
  __temp1330v____temp674v____temp668v__unsafe_size=0;
  __temp1330v____temp674v____temp668v__unsafe_size=__temp1330v____temp674v____temp668v__unsafe_size;
  __temp1329v__str__unsafe_ptr=__temp1329v__str__unsafe_ptr;
  free__temp466v(&__temp1329v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1808v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1808v=__temp446v__;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1809v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1809v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1810v) {
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
  *__temp1810v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int line__temp1495v(char** __temp1811v, uint64_t* __temp1812v, uint16_t* __temp1813v, uint16_t* __temp1814v, uint64_t* __temp1815v, char** __temp1816v, char** __temp1817v, uint64_t* __temp1818v, uint64_t* __temp1819v, char* __temp1820v) {
  char* buf__unsafe_ptr=*__temp1811v;
  uint64_t buf__unsafe_size=*__temp1812v;
  uint16_t buf__unsafe_offset=*__temp1813v;
  uint16_t buf__unsafe_align=*__temp1814v;
  uint64_t pos=*__temp1815v;
  char* f__unsafe_ptr=*__temp1816v;
  int __temp1496v=0;
  char __temp1497v__=0;
  char __temp1498v__=0;
  char* __temp1499v__=0;
  char* contents=0;
  uint64_t __temp1500v__=0;
  uint64_t size=0;
  char* obtained=0;
  char __temp1501v__=0;
  char __temp1502v__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __temp1503v__=0;
  char* __temp1504v__unsafe_ptr=0;
  uint64_t __temp1504v__dat__pos=0;
  uint64_t __temp1504v__dat__length=0;
  char __temp1504v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(buf__unsafe_ptr,&__temp1497v__);
  not__temp26v(__temp1497v__,&__temp1498v__);
  if(__temp1498v__){
  __temp_errcode=43;
  goto __temp_failure;
  }
  add__temp468v(buf__unsafe_ptr,pos,&__temp1499v__);
  contents=__temp1499v__;
  __temp_errcode=sub__temp347v(buf__unsafe_size,pos,&__temp1500v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  size=__temp1500v__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__temp412v(obtained,&__temp1501v__);
  not__temp26v(__temp1501v__,&__temp1502v__);
  if(__temp1502v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__temp170v(pos,bytes_read,&__temp1503v__);
  pos=__temp1503v__;
  __temp_errcode=str__temp631v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__temp1504v__unsafe_ptr,&__temp1504v__dat__pos,&__temp1504v__dat__length,&__temp1504v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1811v=buf__unsafe_ptr;
  *__temp1812v=buf__unsafe_size;
  *__temp1813v=buf__unsafe_offset;
  *__temp1814v=buf__unsafe_align;
  *__temp1815v=pos;
  *__temp1816v=f__unsafe_ptr;
  *__temp1817v=__temp1504v__unsafe_ptr;
  *__temp1818v=__temp1504v__dat__pos;
  *__temp1819v=__temp1504v__dat__length;
  *__temp1820v=__temp1504v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__temp1732v() {
  char* __temp1734v__unsafe_ptr=0;
  uint64_t __temp1734v__dat__pos=0;
  uint64_t __temp1734v__dat__length=0;
  char __temp1734v__dat__first=0;
  char* __temp1735v__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __temp1737v=0;
  uint64_t __temp1738v__=0;
  char* __temp1739v__unsafe_ptr=0;
  uint64_t __temp1739v__unsafe_size=0;
  uint16_t __temp1739v__unsafe_offset=0;
  uint16_t __temp1739v__unsafe_align=0;
  char __temp1740v____temp564v____temp475v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __temp1741v=0;
  uint64_t __temp1742v=0;
  uint64_t pos=0;
  char __temp1743v=0;
  char* __temp1744v__unsafe_ptr=0;
  uint64_t __temp1744v__dat__pos=0;
  uint64_t __temp1744v__dat__length=0;
  char __temp1744v__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __temp1745v=0;
  char* __temp1746v__unsafe_ptr=0;
  uint64_t __temp1746v__dat__pos=0;
  uint64_t __temp1746v__dat__length=0;
  char __temp1746v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(__temp1733v,&__temp1734v__unsafe_ptr,&__temp1734v__dat__pos,&__temp1734v__dat__length,&__temp1734v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1328v(__temp1734v__unsafe_ptr,__temp1734v__dat__pos,__temp1734v__dat__length,__temp1734v__dat__first,&__temp1735v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1735v__unsafe_ptr;
  __temp1737v=4;
  KB__temp444v(__temp1737v,&__temp1738v__);
  __temp_errcode=alloc__temp558v(__temp1738v__,&__temp1739v__unsafe_ptr,&__temp1739v__unsafe_size,&__temp1739v__unsafe_offset,&__temp1739v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1739v__unsafe_ptr;
  mem__unsafe_size=__temp1739v__unsafe_size;
  mem__unsafe_offset=__temp1739v__unsafe_offset;
  mem__unsafe_align=__temp1739v__unsafe_align;
  __temp1741v=0;
  __temp1742v=__temp1741v;
  pos=__temp1742v;
  while(1){
  __temp_complain=line__temp1495v(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,&__temp1744v__unsafe_ptr,&__temp1744v__dat__pos,&__temp1744v__dat__length,&__temp1744v__dat__first);
  __temp1743v=__temp_complain;
  line__unsafe_ptr=__temp1744v__unsafe_ptr;
  line__dat__pos=__temp1744v__dat__pos;
  line__dat__length=__temp1744v__dat__length;
  line__dat__first=__temp1744v__dat__first;
  __temp1743v=__temp1743v==0;
  if(!__temp1743v){
  break;
  }
  continue;
  }
  if(__temp1735v__unsafe_ptr){
  fclose((FILE*)__temp1735v__unsafe_ptr);
  __temp1735v__unsafe_ptr=0;
  }
  __temp1745v=0;
  __temp_errcode=str__temp631v(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__temp1745v,pos,&__temp1746v__unsafe_ptr,&__temp1746v__dat__pos,&__temp1746v__dat__length,&__temp1746v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp744v(__temp1746v__unsafe_ptr,__temp1746v__dat__pos,__temp1746v__dat__length,__temp1746v__dat__first);
  
  __temp_failure:exists__temp412v(__temp1739v__unsafe_ptr,&__temp1740v____temp564v____temp475v__);
  if(__temp1740v____temp564v____temp475v__){
  __temp1739v__unsafe_size=0;
  __temp1739v__unsafe_size=__temp1739v__unsafe_size;
  __temp1739v__unsafe_ptr=__temp1739v__unsafe_ptr;
  free__temp466v(&__temp1739v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1732v();return 0;}