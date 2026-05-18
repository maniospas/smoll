#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1730v="ls";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1733v, uint64_t* __temp1734v, uint16_t* __temp1735v, uint16_t* __temp1736v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1733v=unsafe_ptr;
  *__temp1734v=unsafe_size;
  *__temp1735v=unsafe_offset;
  *__temp1736v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1737v) {
  *__temp1737v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1738v) {
  int value=0;
  *__temp1738v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1739v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1739v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1740v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1740v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1741v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1741v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1742v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1743v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1743v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1744v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1744v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1745v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1745v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1746v) {
  *__temp1746v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1747v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1747v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1748v) {
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
  *__temp1748v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1749v, uint64_t* __temp1750v, uint64_t* __temp1751v, char* __temp1752v) {
  goto __temp_return;
  __temp_return:
  *__temp1749v=unsafe_ptr;
  *__temp1750v=dat__pos;
  *__temp1751v=dat__length;
  *__temp1752v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1753v, uint64_t* __temp1754v, uint64_t* __temp1755v, char* __temp1756v) {
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
  *__temp1753v=__temp607v__unsafe_ptr;
  *__temp1754v=__temp607v__dat__pos;
  *__temp1755v=__temp607v__dat__length;
  *__temp1756v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1757v, uint64_t* __temp1758v, uint64_t* __temp1759v, char* __temp1760v) {
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
  *__temp1757v=__temp637v__unsafe_ptr;
  *__temp1758v=__temp637v__dat__pos;
  *__temp1759v=__temp637v__dat__length;
  *__temp1760v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1761v, uint64_t* __temp1762v, uint64_t* __temp1763v, char* __temp1764v) {
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
  *__temp1761v=__temp645v__unsafe_ptr;
  *__temp1762v=__temp645v__dat__pos;
  *__temp1763v=__temp645v__dat__length;
  *__temp1764v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1765v) {
  goto __temp_return;
  __temp_return:
  *__temp1765v=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1766v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1766v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1767v) {
  char* allocated=*__temp1767v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1767v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1768v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1768v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1769v) {
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
  *__temp1769v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1770v, uint64_t* __temp1771v, uint16_t* __temp1772v, uint16_t* __temp1773v, uint64_t size, char** __temp1774v, uint64_t* __temp1775v, uint16_t* __temp1776v, uint16_t* __temp1777v) {
  char* buffer__unsafe_ptr=*__temp1770v;
  uint64_t buffer__unsafe_size=*__temp1771v;
  uint16_t buffer__unsafe_offset=*__temp1772v;
  uint16_t buffer__unsafe_align=*__temp1773v;
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

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1778v, uint64_t* __temp1779v, uint16_t* __temp1780v, uint16_t* __temp1781v) {
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
  *__temp1778v=__temp564v__unsafe_ptr;
  *__temp1779v=__temp564v__unsafe_size;
  *__temp1780v=__temp564v__unsafe_offset;
  *__temp1781v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp665v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v, char* __temp1785v) {
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
  *__temp1782v=__temp672v__unsafe_ptr;
  *__temp1783v=__temp672v__dat__pos;
  *__temp1784v=__temp672v__dat__length;
  *__temp1785v=__temp672v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp673v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1786v, char** __temp1787v, uint64_t* __temp1788v, uint64_t* __temp1789v, char* __temp1790v) {
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
  *__temp1786v=cstr;
  *__temp1787v=str__unsafe_ptr;
  *__temp1788v=str__dat__pos;
  *__temp1789v=str__dat__length;
  *__temp1790v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int safe__temp1309v(const char* cmd, const char** __temp1791v) {
  char unsafe_chars=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __temp_errcode=36;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1791v=cmd;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void system_return__temp1308v(const char* cmd, int64_t* __temp1792v) {
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

int system__temp1317v(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __temp1318v__cstr=0;
  char* __temp1318v__str__unsafe_ptr=0;
  uint64_t __temp1318v__str__dat__pos=0;
  uint64_t __temp1318v__str__dat__length=0;
  char __temp1318v__str__dat__first=0;
  char __temp1319v____temp675v____temp670v____temp565v____temp470v__=0;
  uint64_t __temp1319v____temp675v____temp669v__unsafe_size=0;
  const char* __temp1320v__=0;
  int64_t __temp1321v__=0;
  int64_t result=0;
  uint64_t __temp1322v=0;
  int64_t __temp1323v__=0;
  char __temp1324v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp673v(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__temp1318v__cstr,&__temp1318v__str__unsafe_ptr,&__temp1318v__str__dat__pos,&__temp1318v__str__dat__length,&__temp1318v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=safe__temp1309v(__temp1318v__cstr,&__temp1320v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  system_return__temp1308v(__temp1320v__,&__temp1321v__);
  result=__temp1321v__;
  __temp1322v=0;
  int__temp395v(__temp1322v,&__temp1323v__);
  neq__temp131v(result,__temp1323v__,&__temp1324v__);
  if(__temp1324v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1318v__str__unsafe_ptr,&__temp1319v____temp675v____temp670v____temp565v____temp470v__);
  if(__temp1319v____temp675v____temp670v____temp565v____temp470v__){
  __temp1319v____temp675v____temp669v__unsafe_size=0;
  __temp1319v____temp675v____temp669v__unsafe_size=__temp1319v____temp675v____temp669v__unsafe_size;
  free__temp461v(&__temp1318v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1729v() {
  char* __temp1731v__unsafe_ptr=0;
  uint64_t __temp1731v__dat__pos=0;
  uint64_t __temp1731v__dat__length=0;
  char __temp1731v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(__temp1730v,&__temp1731v__unsafe_ptr,&__temp1731v__dat__pos,&__temp1731v__dat__length,&__temp1731v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=system__temp1317v(__temp1731v__unsafe_ptr,__temp1731v__dat__pos,__temp1731v__dat__length,__temp1731v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1729v();return 0;}