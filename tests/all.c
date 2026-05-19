#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp825v="";
const char* const __temp1749v="./tests/passing/";
const char* const __temp1754v="./smoll ";
const char* const __temp1765v=".s";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1775v, uint64_t* __temp1776v, uint16_t* __temp1777v, uint16_t* __temp1778v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1775v=unsafe_ptr;
  *__temp1776v=unsafe_size;
  *__temp1777v=unsafe_offset;
  *__temp1778v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1779v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1779v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1780v) {
  char* allocated=*__temp1780v;
  if(allocated){
  free(allocated);
  }
  *__temp1780v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1781v) {
  int value=0;
  *__temp1781v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1782v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1782v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1783v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1784v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1785v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1785v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1786v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1786v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1787v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1787v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1788v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1788v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1789v) {
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
  *__temp1789v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1790v, uint64_t* __temp1791v, uint16_t* __temp1792v, uint16_t* __temp1793v, uint64_t size, char** __temp1794v, uint64_t* __temp1795v, uint16_t* __temp1796v, uint16_t* __temp1797v) {
  char* buffer__unsafe_ptr=*__temp1790v;
  uint64_t buffer__unsafe_size=*__temp1791v;
  uint16_t buffer__unsafe_offset=*__temp1792v;
  uint16_t buffer__unsafe_align=*__temp1793v;
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
  *__temp1790v=buffer__unsafe_ptr;
  *__temp1791v=buffer__unsafe_size;
  *__temp1792v=buffer__unsafe_offset;
  *__temp1793v=buffer__unsafe_align;
  *__temp1794v=__temp485v__unsafe_ptr;
  *__temp1795v=__temp485v__unsafe_size;
  *__temp1796v=__temp485v__unsafe_offset;
  *__temp1797v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int alloc__temp558v(uint64_t size, char** __temp1798v, uint64_t* __temp1799v, uint16_t* __temp1800v, uint16_t* __temp1801v) {
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
  *__temp1798v=__temp563v__unsafe_ptr;
  *__temp1799v=__temp563v__unsafe_size;
  *__temp1800v=__temp563v__unsafe_offset;
  *__temp1801v=__temp563v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp678v(char** __temp1802v, uint64_t* __temp1803v, uint16_t* __temp1804v, uint16_t* __temp1805v, char** __temp1806v, uint64_t* __temp1807v, uint16_t* __temp1808v, uint16_t* __temp1809v, uint64_t* __temp1810v) {
  char* buf__unsafe_ptr=*__temp1802v;
  uint64_t buf__unsafe_size=*__temp1803v;
  uint16_t buf__unsafe_offset=*__temp1804v;
  uint16_t buf__unsafe_align=*__temp1805v;
  uint64_t __temp679v=0;
  uint64_t __temp680v=0;
  uint64_t pos=0;
  __temp679v=0;
  __temp680v=__temp679v;
  pos=__temp680v;
  goto __temp_return;
  __temp_return:
  *__temp1802v=buf__unsafe_ptr;
  *__temp1803v=buf__unsafe_size;
  *__temp1804v=buf__unsafe_offset;
  *__temp1805v=buf__unsafe_align;
  *__temp1806v=buf__unsafe_ptr;
  *__temp1807v=buf__unsafe_size;
  *__temp1808v=buf__unsafe_offset;
  *__temp1809v=buf__unsafe_align;
  *__temp1810v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1811v) {
  *__temp1811v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1812v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1812v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1813v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1813v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1814v) {
  *__temp1814v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1815v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1815v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1816v) {
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
  *__temp1816v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1817v, uint64_t* __temp1818v, uint64_t* __temp1819v, char* __temp1820v) {
  goto __temp_return;
  __temp_return:
  *__temp1817v=unsafe_ptr;
  *__temp1818v=dat__pos;
  *__temp1819v=dat__length;
  *__temp1820v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1821v, uint64_t* __temp1822v, uint64_t* __temp1823v, char* __temp1824v) {
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
  *__temp1821v=__temp606v__unsafe_ptr;
  *__temp1822v=__temp606v__dat__pos;
  *__temp1823v=__temp606v__dat__length;
  *__temp1824v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1825v, uint64_t* __temp1826v, uint64_t* __temp1827v, char* __temp1828v) {
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
  *__temp1825v=__temp636v__unsafe_ptr;
  *__temp1826v=__temp636v__dat__pos;
  *__temp1827v=__temp636v__dat__length;
  *__temp1828v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1829v, uint64_t* __temp1830v, uint64_t* __temp1831v, char* __temp1832v) {
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
  *__temp1829v=__temp644v__unsafe_ptr;
  *__temp1830v=__temp644v__dat__pos;
  *__temp1831v=__temp644v__dat__length;
  *__temp1832v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1833v) {
  goto __temp_return;
  __temp_return:
  *__temp1833v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1834v) {
  goto __temp_return;
  __temp_return:
  *__temp1834v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1835v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1835v=z;
}

int copy__temp711v(char** __temp1836v, uint64_t* __temp1837v, uint16_t* __temp1838v, uint16_t* __temp1839v, uint64_t* __temp1840v, const char* _other, char** __temp1841v, uint64_t* __temp1842v, uint64_t* __temp1843v, char* __temp1844v) {
  char* buf__unsafe_ptr=*__temp1836v;
  uint64_t buf__unsafe_size=*__temp1837v;
  uint16_t buf__unsafe_offset=*__temp1838v;
  uint16_t buf__unsafe_align=*__temp1839v;
  uint64_t pos=*__temp1840v;
  char* __temp712v__unsafe_ptr=0;
  uint64_t __temp712v__dat__pos=0;
  uint64_t __temp712v__dat__length=0;
  char __temp712v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp713v__=0;
  uint64_t __temp714v__=0;
  uint64_t next_pos=0;
  uint64_t __temp715v__=0;
  char __temp716v__=0;
  uint64_t __temp717v=0;
  uint64_t __temp718v__=0;
  uint64_t prev_pos=0;
  char* __temp719v__unsafe_ptr=0;
  uint64_t __temp719v__dat__pos=0;
  uint64_t __temp719v__dat__length=0;
  char __temp719v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(_other,&__temp712v__unsafe_ptr,&__temp712v__dat__pos,&__temp712v__dat__length,&__temp712v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp712v__unsafe_ptr;
  other__dat__pos=__temp712v__dat__pos;
  other__dat__length=__temp712v__dat__length;
  other__dat__first=__temp712v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp713v__);
  add__temp170v(pos,__temp713v__,&__temp714v__);
  next_pos=__temp714v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp715v__);
  gt__temp271v(next_pos,__temp715v__,&__temp716v__);
  if(__temp716v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp717v=0;
  add__temp170v(pos,__temp717v,&__temp718v__);
  prev_pos=__temp718v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp719v__unsafe_ptr,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1836v=buf__unsafe_ptr;
  *__temp1837v=buf__unsafe_size;
  *__temp1838v=buf__unsafe_offset;
  *__temp1839v=buf__unsafe_align;
  *__temp1840v=pos;
  *__temp1841v=__temp719v__unsafe_ptr;
  *__temp1842v=__temp719v__dat__pos;
  *__temp1843v=__temp719v__dat__length;
  *__temp1844v=__temp719v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void closedir__temp1653v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__temp1654v(const char* path, char** __temp1845v) {
  char* unsafe_ptr=0;
  char __temp1656v__=0;
  char __temp1657v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1656v__);
  not__temp26v(__temp1656v__,&__temp1657v__);
  if(__temp1657v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1653v(unsafe_ptr);
  __temp_return:
  *__temp1845v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1846v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1846v=__temp446v__;
}

static inline __attribute__((always_inline)) int raw_entry__temp1664v(char** __temp1847v, const char** __temp1848v) {
  char* f__unsafe_ptr=*__temp1847v;
  char __temp1665v__=0;
  char __temp1666v__=0;
  char* de=0;
  char __temp1667v__=0;
  char __temp1668v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1665v__);
  not__temp26v(__temp1665v__,&__temp1666v__);
  if(__temp1666v__){
  __temp_errcode=48;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1667v__);
  not__temp26v(__temp1667v__,&__temp1668v__);
  if(__temp1668v__){
  __temp_errcode=49;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1847v=f__unsafe_ptr;
  *__temp1848v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1669v(char** __temp1849v, char** __temp1850v, uint64_t* __temp1851v, uint64_t* __temp1852v, char* __temp1853v) {
  char* f__unsafe_ptr=*__temp1849v;
  const char* __temp1670v__=0;
  char* __temp1671v__unsafe_ptr=0;
  uint64_t __temp1671v__dat__pos=0;
  uint64_t __temp1671v__dat__length=0;
  char __temp1671v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw_entry__temp1664v(&f__unsafe_ptr,&__temp1670v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp637v(__temp1670v__,&__temp1671v__unsafe_ptr,&__temp1671v__dat__pos,&__temp1671v__dat__length,&__temp1671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1849v=f__unsafe_ptr;
  *__temp1850v=__temp1671v__unsafe_ptr;
  *__temp1851v=__temp1671v__dat__pos;
  *__temp1852v=__temp1671v__dat__length;
  *__temp1853v=__temp1671v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp630v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1854v, uint64_t* __temp1855v, uint64_t* __temp1856v, char* __temp1857v) {
  goto __temp_return;
  __temp_return:
  *__temp1854v=other__unsafe_ptr;
  *__temp1855v=other__dat__pos;
  *__temp1856v=other__dat__length;
  *__temp1857v=other__dat__first;
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

static inline __attribute__((always_inline)) void get__temp783v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1860v) {
  uint64_t __temp784v__=0;
  char* __temp785v__=0;
  add__temp170v(s__dat__pos,i,&__temp784v__);
  add__temp468v(s__unsafe_ptr,__temp784v__,&__temp785v__);
  goto __temp_return;
  __temp_return:
  *__temp1860v=__temp785v__;
}

int slice__temp822v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1861v, uint64_t* __temp1862v, uint64_t* __temp1863v, char* __temp1864v) {
  char* __temp823v__unsafe_ptr=0;
  uint64_t __temp823v__dat__pos=0;
  uint64_t __temp823v__dat__length=0;
  char __temp823v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp824v__=0;
  char* __temp826v__unsafe_ptr=0;
  uint64_t __temp826v__dat__pos=0;
  uint64_t __temp826v__dat__length=0;
  char __temp826v__dat__first=0;
  char __temp827v__=0;
  char __temp828v__=0;
  char __temp829v=0;
  uint64_t __temp830v__=0;
  uint64_t new_length=0;
  uint64_t __temp831v=0;
  char __temp832v__=0;
  char new_first=0;
  char* __temp833v__=0;
  char __temp834v__value=0;
  uint64_t __temp835v__=0;
  char* __temp836v__unsafe_ptr=0;
  uint64_t __temp836v__dat__pos=0;
  uint64_t __temp836v__dat__length=0;
  char __temp836v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp823v__unsafe_ptr,&__temp823v__dat__pos,&__temp823v__dat__length,&__temp823v__dat__first);
  s__unsafe_ptr=__temp823v__unsafe_ptr;
  s__dat__pos=__temp823v__dat__pos;
  s__dat__length=__temp823v__dat__length;
  s__dat__first=__temp823v__dat__first;
  eq__temp118v(from,to,&__temp824v__);
  if(__temp824v__){
  __temp_errcode=str__temp637v(__temp825v,&__temp826v__unsafe_ptr,&__temp826v__dat__pos,&__temp826v__dat__length,&__temp826v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp827v__);
  if(!__temp827v__){
  gt__temp271v(to,s__dat__length,&__temp828v__);
  __temp829v=__temp828v__;
  }
  if(__temp829v){
  __temp_errcode=19;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp830v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp830v__;
  __temp831v=0;
  neq__temp142v(from,__temp831v,&__temp832v__);
  if(__temp832v__){
  get__temp783v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp833v__);
  if(!__temp833v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp834v__value,__temp833v__,1);
  new_first=__temp834v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp835v__);
  str__temp595v(s__unsafe_ptr,__temp835v__,new_length,new_first,&__temp836v__unsafe_ptr,&__temp836v__dat__pos,&__temp836v__dat__length,&__temp836v__dat__first);
  __temp826v__unsafe_ptr=__temp836v__unsafe_ptr;
  __temp826v__dat__pos=__temp836v__dat__pos;
  __temp826v__dat__length=__temp836v__dat__length;
  __temp826v__dat__first=__temp836v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1861v=__temp826v__unsafe_ptr;
  *__temp1862v=__temp826v__dat__pos;
  *__temp1863v=__temp826v__dat__length;
  *__temp1864v=__temp826v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp649v(char x, char y, char* __temp1865v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1865v=z;
}

static inline __attribute__((always_inline)) void eq__temp787v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1866v) {
  uint64_t __temp788v__=0;
  uint64_t n=0;
  uint64_t __temp789v__=0;
  char __temp790v__=0;
  char __temp791v=0;
  char __temp792v__=0;
  char __temp793v=0;
  char z=0;
  len__temp645v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp788v__);
  n=__temp788v__;
  len__temp645v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp789v__);
  neq__temp142v(n,__temp789v__,&__temp790v__);
  if(__temp790v__){
  __temp791v=0;
  goto __temp_return;
  }
  neq__temp649v(x__dat__first,y__dat__first,&__temp792v__);
  if(__temp792v__){
  __temp793v=0;
  __temp791v=__temp793v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp791v=z;
  goto __temp_return;
  __temp_return:
  *__temp1866v=__temp791v;
}

static inline __attribute__((always_inline)) int ends_with__temp901v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1867v) {
  char* __temp902v__unsafe_ptr=0;
  uint64_t __temp902v__dat__pos=0;
  uint64_t __temp902v__dat__length=0;
  char __temp902v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp903v__unsafe_ptr=0;
  uint64_t __temp903v__dat__pos=0;
  uint64_t __temp903v__dat__length=0;
  char __temp903v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp904v__=0;
  char __temp905v=0;
  uint64_t __temp906v__=0;
  uint64_t n=0;
  uint64_t __temp907v__=0;
  uint64_t __temp908v__=0;
  char* __temp909v__unsafe_ptr=0;
  uint64_t __temp909v__dat__pos=0;
  uint64_t __temp909v__dat__length=0;
  char __temp909v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp910v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp902v__unsafe_ptr,&__temp902v__dat__pos,&__temp902v__dat__length,&__temp902v__dat__first);
  stack__unsafe_ptr=__temp902v__unsafe_ptr;
  stack__dat__pos=__temp902v__dat__pos;
  stack__dat__length=__temp902v__dat__length;
  stack__dat__first=__temp902v__dat__first;
  __temp_errcode=str__temp637v(_needle,&__temp903v__unsafe_ptr,&__temp903v__dat__pos,&__temp903v__dat__length,&__temp903v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp903v__unsafe_ptr;
  needle__dat__pos=__temp903v__dat__pos;
  needle__dat__length=__temp903v__dat__length;
  needle__dat__first=__temp903v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp904v__);
  if(__temp904v__){
  __temp905v=0;
  goto __temp_return;
  }
  len__temp645v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp906v__);
  n=__temp906v__;
  len__temp645v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp907v__);
  __temp_errcode=sub__temp347v(n,__temp907v__,&__temp908v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp822v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp908v__,n,&__temp909v__unsafe_ptr,&__temp909v__dat__pos,&__temp909v__dat__length,&__temp909v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp909v__unsafe_ptr;
  ret__dat__pos=__temp909v__dat__pos;
  ret__dat__length=__temp909v__dat__length;
  ret__dat__first=__temp909v__dat__first;
  eq__temp787v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp910v__);
  __temp905v=__temp910v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1867v=__temp905v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp720v(char** __temp1868v, uint64_t* __temp1869v, uint16_t* __temp1870v, uint16_t* __temp1871v, uint64_t* __temp1872v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1873v, uint64_t* __temp1874v, uint64_t* __temp1875v, char* __temp1876v) {
  char* buf__unsafe_ptr=*__temp1868v;
  uint64_t buf__unsafe_size=*__temp1869v;
  uint16_t buf__unsafe_offset=*__temp1870v;
  uint16_t buf__unsafe_align=*__temp1871v;
  uint64_t pos=*__temp1872v;
  char* __temp721v__unsafe_ptr=0;
  uint64_t __temp721v__dat__pos=0;
  uint64_t __temp721v__dat__length=0;
  char __temp721v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp722v__=0;
  uint64_t __temp723v__=0;
  uint64_t null_pos=0;
  uint64_t __temp724v=0;
  uint64_t __temp725v__=0;
  uint64_t next_pos=0;
  uint64_t __temp726v__=0;
  char __temp727v__=0;
  char* endpos=0;
  uint64_t __temp728v=0;
  uint64_t __temp729v__=0;
  uint64_t prev_pos=0;
  char* __temp730v__unsafe_ptr=0;
  uint64_t __temp730v__dat__pos=0;
  uint64_t __temp730v__dat__length=0;
  char __temp730v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp721v__unsafe_ptr,&__temp721v__dat__pos,&__temp721v__dat__length,&__temp721v__dat__first);
  other__unsafe_ptr=__temp721v__unsafe_ptr;
  other__dat__pos=__temp721v__dat__pos;
  other__dat__length=__temp721v__dat__length;
  other__dat__first=__temp721v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp722v__);
  add__temp170v(pos,__temp722v__,&__temp723v__);
  null_pos=__temp723v__;
  __temp724v=1;
  add__temp170v(null_pos,__temp724v,&__temp725v__);
  next_pos=__temp725v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp726v__);
  gt__temp271v(next_pos,__temp726v__,&__temp727v__);
  if(__temp727v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __temp728v=0;
  add__temp170v(pos,__temp728v,&__temp729v__);
  prev_pos=__temp729v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp730v__unsafe_ptr,&__temp730v__dat__pos,&__temp730v__dat__length,&__temp730v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1868v=buf__unsafe_ptr;
  *__temp1869v=buf__unsafe_size;
  *__temp1870v=buf__unsafe_offset;
  *__temp1871v=buf__unsafe_align;
  *__temp1872v=pos;
  *__temp1873v=__temp730v__unsafe_ptr;
  *__temp1874v=__temp730v__dat__pos;
  *__temp1875v=__temp730v__dat__length;
  *__temp1876v=__temp730v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp700v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1877v) {
  uint64_t __temp701v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp701v__);
  goto __temp_return;
  __temp_return:
  *__temp1877v=__temp701v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1878v) {
  int value=0;
  *__temp1878v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1879v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1879v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __temp1880v, uint64_t* __temp1881v, uint64_t* __temp1882v, char* __temp1883v) {
  int __temp608v=0;
  int __temp609v=0;
  int __temp610v__=0;
  uint64_t __temp611v__=0;
  char __temp612v__=0;
  uint64_t __temp613v=0;
  uint64_t __temp614v=0;
  char* __temp615v__=0;
  char __temp616v__value=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp609v,&__temp610v__);
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp611v__);
  gt__temp271v(length,__temp611v__,&__temp612v__);
  if(__temp612v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  __temp613v=0;
  __temp614v=0;
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp614v,&__temp615v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp615v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp616v__value,__temp615v__,1);
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp613v,length,__temp616v__value,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1880v=__temp617v__unsafe_ptr;
  *__temp1881v=__temp617v__dat__pos;
  *__temp1882v=__temp617v__dat__length;
  *__temp1883v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp664v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1884v, uint64_t* __temp1885v, uint64_t* __temp1886v, char* __temp1887v) {
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
  *__temp1884v=__temp671v__unsafe_ptr;
  *__temp1885v=__temp671v__dat__pos;
  *__temp1886v=__temp671v__dat__length;
  *__temp1887v=__temp671v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp672v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1888v, char** __temp1889v, uint64_t* __temp1890v, uint64_t* __temp1891v, char* __temp1892v) {
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
  *__temp1888v=cstr;
  *__temp1889v=str__unsafe_ptr;
  *__temp1890v=str__dat__pos;
  *__temp1891v=str__dat__length;
  *__temp1892v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void popen__temp1256v(const char* cmd, char** __temp1893v) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __temp_return;
  __temp_return:
  *__temp1893v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__temp1255v(char* unsafe_ptr, int64_t* __temp1894v) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __temp_return;
  __temp_return:
  *__temp1894v=status;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1895v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1895v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1896v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1896v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1897v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1897v=z;
}

static inline __attribute__((always_inline)) int read__temp1257v(const char* cmd, char** __temp1898v) {
  char* __temp1258v__=0;
  char* unsafe_ptr=0;
  char __temp1259v__=0;
  char __temp1260v__=0;
  char __temp1261v__=0;
  int64_t __temp1262v__=0;
  int64_t status=0;
  uint64_t __temp1263v=0;
  int64_t __temp1264v__=0;
  char __temp1265v__=0;
  char __temp1266v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  popen__temp1256v(cmd,&__temp1258v__);
  unsafe_ptr=__temp1258v__;
  exists__temp412v(unsafe_ptr,&__temp1259v__);
  not__temp26v(__temp1259v__,&__temp1260v__);
  if(__temp1260v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1261v__);
  if(__temp1261v__){
  pclose__temp1255v(unsafe_ptr,&__temp1262v__);
  status=__temp1262v__;
  unsafe_ptr=0;
  __temp1263v=0;
  int__temp395v(__temp1263v,&__temp1264v__);
  neq__temp131v(status,__temp1264v__,&__temp1265v__);
  if(__temp1265v__){
  __temp_complain=33;
  __temp1266v=__temp1266v==0;
  }
  }
  __temp_return:
  *__temp1898v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1268v(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __temp1899v) {
  const char* __temp1269v__cstr=0;
  char* __temp1269v__str__unsafe_ptr=0;
  uint64_t __temp1269v__str__dat__pos=0;
  uint64_t __temp1269v__str__dat__length=0;
  char __temp1269v__str__dat__first=0;
  char __temp1270v____temp674v____temp669v____temp564v____temp475v__=0;
  uint64_t __temp1270v____temp674v____temp668v__unsafe_size=0;
  char* __temp1271v__unsafe_ptr=0;
  char __temp1272v____temp1261v__=0;
  int64_t __temp1272v____temp1262v__=0;
  int64_t __temp1272v__status=0;
  uint64_t __temp1272v____temp1263v=0;
  int64_t __temp1272v____temp1264v__=0;
  char __temp1272v____temp1265v__=0;
  char __temp1272v____temp1266v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp672v(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__temp1269v__cstr,&__temp1269v__str__unsafe_ptr,&__temp1269v__str__dat__pos,&__temp1269v__str__dat__length,&__temp1269v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1257v(__temp1269v__cstr,&__temp1271v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1271v__unsafe_ptr,&__temp1272v____temp1261v__);
  if(__temp1272v____temp1261v__){
  pclose__temp1255v(__temp1271v__unsafe_ptr,&__temp1272v____temp1262v__);
  __temp1272v__status=__temp1272v____temp1262v__;
  __temp1271v__unsafe_ptr=0;
  __temp1272v____temp1263v=0;
  int__temp395v(__temp1272v____temp1263v,&__temp1272v____temp1264v__);
  neq__temp131v(__temp1272v__status,__temp1272v____temp1264v__,&__temp1272v____temp1265v__);
  if(__temp1272v____temp1265v__){
  __temp_complain=33;
  __temp1272v____temp1266v=__temp1272v____temp1266v==0;
  }
  }
  __temp_return:
  *__temp1899v=__temp1271v__unsafe_ptr;
  exists__temp412v(__temp1269v__str__unsafe_ptr,&__temp1270v____temp674v____temp669v____temp564v____temp475v__);
  if(__temp1270v____temp674v____temp669v____temp564v____temp475v__){
  __temp1270v____temp674v____temp668v__unsafe_size=0;
  __temp1270v____temp674v____temp668v__unsafe_size=__temp1270v____temp674v____temp668v__unsafe_size;
  __temp1269v__str__unsafe_ptr=__temp1269v__str__unsafe_ptr;
  free__temp466v(&__temp1269v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1247v(int64_t value, const char** __temp1900v) {
  int __temp1248v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1900v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1740v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1741v__unsafe_ptr=0;
  char __temp1742v____temp1272v____temp1261v__=0;
  int64_t __temp1742v____temp1272v____temp1262v__=0;
  int64_t __temp1742v____temp1272v__status=0;
  uint64_t __temp1742v____temp1272v____temp1263v=0;
  int64_t __temp1742v____temp1272v____temp1264v__=0;
  char __temp1742v____temp1272v____temp1265v__=0;
  char __temp1742v____temp1272v____temp1266v=0;
  char* __temp1743v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1744v=0;
  int64_t __temp1745v=0;
  int64_t error=0;
  const char* __temp1746v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1268v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1741v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1743v__unsafe_ptr=__temp1741v__unsafe_ptr;
  proc__unsafe_ptr=__temp1743v__unsafe_ptr;
  exists__temp412v(__temp1741v__unsafe_ptr,&__temp1742v____temp1272v____temp1261v__);
  if(__temp1742v____temp1272v____temp1261v__){
  pclose__temp1255v(__temp1741v__unsafe_ptr,&__temp1742v____temp1272v____temp1262v__);
  __temp1742v____temp1272v__status=__temp1742v____temp1272v____temp1262v__;
  __temp1741v__unsafe_ptr=0;
  __temp1742v____temp1272v____temp1263v=0;
  int__temp395v(__temp1742v____temp1272v____temp1263v,&__temp1742v____temp1272v____temp1264v__);
  neq__temp131v(__temp1742v____temp1272v__status,__temp1742v____temp1272v____temp1264v__,&__temp1742v____temp1272v____temp1265v__);
  if(__temp1742v____temp1272v____temp1265v__){
  __temp_complain=33;
  __temp1742v____temp1272v____temp1266v=__temp1742v____temp1272v____temp1266v==0;
  }
  }
  __temp1745v=__temp_complain;
  __temp1744v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1745v;
  __temp1744v=__temp1744v==0;
  if(__temp1744v){
  cstr__temp1247v(error,&__temp1746v__);
  print__temp363v(__temp1746v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1748v() {
  const char* path=0;
  uint64_t __temp1750v=0;
  char* __temp1751v__unsafe_ptr=0;
  uint64_t __temp1751v__unsafe_size=0;
  uint16_t __temp1751v__unsafe_offset=0;
  uint16_t __temp1751v__unsafe_align=0;
  char __temp1752v____temp564v____temp475v__=0;
  char* __temp1753v__buf__unsafe_ptr=0;
  uint64_t __temp1753v__buf__unsafe_size=0;
  uint16_t __temp1753v__buf__unsafe_offset=0;
  uint16_t __temp1753v__buf__unsafe_align=0;
  uint64_t __temp1753v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1755v__unsafe_ptr=0;
  uint64_t __temp1755v__dat__pos=0;
  uint64_t __temp1755v__dat__length=0;
  char __temp1755v__dat__first=0;
  char* __temp1756v__unsafe_ptr=0;
  uint64_t __temp1756v__dat__pos=0;
  uint64_t __temp1756v__dat__length=0;
  char __temp1756v__dat__first=0;
  char* __temp1757v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1759v=0;
  uint64_t __temp1760v__=0;
  char* __temp1761v__unsafe_ptr=0;
  uint64_t __temp1761v__unsafe_size=0;
  uint16_t __temp1761v__unsafe_offset=0;
  uint16_t __temp1761v__unsafe_align=0;
  char __temp1762v____temp564v____temp475v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  char __temp1763v=0;
  char* __temp1764v__unsafe_ptr=0;
  uint64_t __temp1764v__dat__pos=0;
  uint64_t __temp1764v__dat__length=0;
  char __temp1764v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1766v__=0;
  char __temp1767v__=0;
  char* __temp1768v__buf__unsafe_ptr=0;
  uint64_t __temp1768v__buf__unsafe_size=0;
  uint16_t __temp1768v__buf__unsafe_offset=0;
  uint16_t __temp1768v__buf__unsafe_align=0;
  uint64_t __temp1768v__pos=0;
  char* __temp1769v__unsafe_ptr=0;
  uint64_t __temp1769v__dat__pos=0;
  uint64_t __temp1769v__dat__length=0;
  char __temp1769v__dat__first=0;
  char* __temp1770v__unsafe_ptr=0;
  uint64_t __temp1770v__dat__pos=0;
  uint64_t __temp1770v__dat__length=0;
  char __temp1770v__dat__first=0;
  uint64_t __temp1771v__=0;
  char* __temp1772v__unsafe_ptr=0;
  uint64_t __temp1772v__dat__pos=0;
  uint64_t __temp1772v__dat__length=0;
  char __temp1772v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1749v;
  __temp1750v=256;
  __temp_errcode=alloc__temp558v(__temp1750v,&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_offset,&__temp1751v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp678v(&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_offset,&__temp1751v__unsafe_align,&__temp1753v__buf__unsafe_ptr,&__temp1753v__buf__unsafe_size,&__temp1753v__buf__unsafe_offset,&__temp1753v__buf__unsafe_align,&__temp1753v__pos);
  bp__buf__unsafe_ptr=__temp1753v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1753v__buf__unsafe_size;
  bp__buf__unsafe_offset=__temp1753v__buf__unsafe_offset;
  bp__buf__unsafe_align=__temp1753v__buf__unsafe_align;
  bp__pos=__temp1753v__pos;
  __temp_errcode=copy__temp711v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__temp1754v,&__temp1755v__unsafe_ptr,&__temp1755v__dat__pos,&__temp1755v__dat__length,&__temp1755v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp711v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__temp1756v__unsafe_ptr,&__temp1756v__dat__pos,&__temp1756v__dat__length,&__temp1756v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1654v(path,&__temp1757v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1757v__unsafe_ptr;
  __temp1759v=4;
  KB__temp444v(__temp1759v,&__temp1760v__);
  __temp_errcode=alloc__temp558v(__temp1760v__,&__temp1761v__unsafe_ptr,&__temp1761v__unsafe_size,&__temp1761v__unsafe_offset,&__temp1761v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1761v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1761v__unsafe_size;
  proc_buf__unsafe_offset=__temp1761v__unsafe_offset;
  proc_buf__unsafe_align=__temp1761v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1669v(&test_dir__unsafe_ptr,&__temp1764v__unsafe_ptr,&__temp1764v__dat__pos,&__temp1764v__dat__length,&__temp1764v__dat__first);
  __temp1763v=__temp_complain;
  entry__unsafe_ptr=__temp1764v__unsafe_ptr;
  entry__dat__pos=__temp1764v__dat__pos;
  entry__dat__length=__temp1764v__dat__length;
  entry__dat__first=__temp1764v__dat__first;
  __temp1763v=__temp1763v==0;
  if(!__temp1763v){
  break;
  }
  __temp_errcode=ends_with__temp901v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1765v,&__temp1766v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1766v__,&__temp1767v__);
  if(__temp1767v__){
  continue;
  }
  __temp1768v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1768v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1768v__buf__unsafe_offset=bp__buf__unsafe_offset;
  __temp1768v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1768v__pos=bp__pos;
  str__temp630v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1769v__unsafe_ptr,&__temp1769v__dat__pos,&__temp1769v__dat__length,&__temp1769v__dat__first);
  __temp_errcode=copy_null_terminated__temp720v(&__temp1768v__buf__unsafe_ptr,&__temp1768v__buf__unsafe_size,&__temp1768v__buf__unsafe_offset,&__temp1768v__buf__unsafe_align,&__temp1768v__pos,__temp1769v__unsafe_ptr,__temp1769v__dat__pos,__temp1769v__dat__length,__temp1769v__dat__first,&__temp1770v__unsafe_ptr,&__temp1770v__dat__pos,&__temp1770v__dat__length,&__temp1770v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp700v(__temp1770v__unsafe_ptr,__temp1770v__dat__pos,__temp1770v__dat__length,__temp1770v__dat__first,&__temp1771v__);
  __temp_errcode=str__temp607v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__temp1771v__,&__temp1772v__unsafe_ptr,&__temp1772v__dat__pos,&__temp1772v__dat__length,&__temp1772v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1772v__unsafe_ptr;
  command__dat__pos=__temp1772v__dat__pos;
  command__dat__length=__temp1772v__dat__length;
  command__dat__first=__temp1772v__dat__first;
  print__temp744v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1740v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1761v__unsafe_ptr,&__temp1762v____temp564v____temp475v__);
  if(__temp1762v____temp564v____temp475v__){
  __temp1761v__unsafe_size=0;
  __temp1761v__unsafe_size=__temp1761v__unsafe_size;
  __temp1761v__unsafe_ptr=__temp1761v__unsafe_ptr;
  free__temp466v(&__temp1761v__unsafe_ptr);
  }
  closedir__temp1653v(__temp1757v__unsafe_ptr);
  exists__temp412v(__temp1751v__unsafe_ptr,&__temp1752v____temp564v____temp475v__);
  if(__temp1752v____temp564v____temp475v__){
  __temp1751v__unsafe_size=0;
  __temp1751v__unsafe_size=__temp1751v__unsafe_size;
  __temp1751v__unsafe_ptr=__temp1751v__unsafe_ptr;
  free__temp466v(&__temp1751v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1748v();return 0;}