#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp823v="";
const char* const __temp1748v="./tests/passing/";
const char* const __temp1754v="./smoll ";
const char* const __temp1766v=".s";
const char* const __temp365v="\n";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1271v(char** __temp1776v, uint64_t* __temp1777v, uint16_t* __temp1778v, uint16_t* __temp1779v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1776v=unsafe_ptr;
  *__temp1777v=unsafe_size;
  *__temp1778v=unsafe_offset;
  *__temp1779v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1780v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1780v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1781v) {
  char* allocated=*__temp1781v;
  if(allocated){
  free(allocated);
  }
  *__temp1781v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1782v) {
  int value=0;
  *__temp1782v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1783v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1784v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1784v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1785v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1785v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1786v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1786v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1787v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1787v=value;
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

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1789v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1789v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1790v) {
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
  *__temp1790v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1791v, uint64_t* __temp1792v, uint16_t* __temp1793v, uint16_t* __temp1794v, uint64_t size, char** __temp1795v, uint64_t* __temp1796v, uint16_t* __temp1797v, uint16_t* __temp1798v) {
  char* buffer__unsafe_ptr=*__temp1791v;
  uint64_t buffer__unsafe_size=*__temp1792v;
  uint16_t buffer__unsafe_offset=*__temp1793v;
  uint16_t buffer__unsafe_align=*__temp1794v;
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
  *__temp1791v=buffer__unsafe_ptr;
  *__temp1792v=buffer__unsafe_size;
  *__temp1793v=buffer__unsafe_offset;
  *__temp1794v=buffer__unsafe_align;
  *__temp1795v=__temp485v__unsafe_ptr;
  *__temp1796v=__temp485v__unsafe_size;
  *__temp1797v=__temp485v__unsafe_offset;
  *__temp1798v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1799v, uint64_t* __temp1800v, uint16_t* __temp1801v, uint16_t* __temp1802v, char** __temp1803v, uint64_t* __temp1804v, uint16_t* __temp1805v, uint16_t* __temp1806v, uint64_t* __temp1807v) {
  char* buf__unsafe_ptr=*__temp1799v;
  uint64_t buf__unsafe_size=*__temp1800v;
  uint16_t buf__unsafe_offset=*__temp1801v;
  uint16_t buf__unsafe_align=*__temp1802v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1799v=buf__unsafe_ptr;
  *__temp1800v=buf__unsafe_size;
  *__temp1801v=buf__unsafe_offset;
  *__temp1802v=buf__unsafe_align;
  *__temp1803v=buf__unsafe_ptr;
  *__temp1804v=buf__unsafe_size;
  *__temp1805v=buf__unsafe_offset;
  *__temp1806v=buf__unsafe_align;
  *__temp1807v=pos;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1808v, uint64_t* __temp1809v, uint16_t* __temp1810v, uint16_t* __temp1811v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1808v=unsafe_ptr;
  *__temp1809v=unsafe_size;
  *__temp1810v=unsafe_offset;
  *__temp1811v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1812v) {
  *__temp1812v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1813v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1813v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1814v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1814v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1815v) {
  *__temp1815v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1816v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1816v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1817v) {
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
  *__temp1817v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1818v, uint64_t* __temp1819v, uint64_t* __temp1820v, char* __temp1821v) {
  goto __temp_return;
  __temp_return:
  *__temp1818v=unsafe_ptr;
  *__temp1819v=dat__pos;
  *__temp1820v=dat__length;
  *__temp1821v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1822v, uint64_t* __temp1823v, uint64_t* __temp1824v, char* __temp1825v) {
  char* unsafe_ptr=0;
  uint64_t __temp595v__=0;
  uint64_t __temp596v=0;
  char __temp597v__=0;
  uint64_t __temp598v__=0;
  uint64_t __temp599v=0;
  char __temp600v__=0;
  char* __temp601v__unsafe_ptr=0;
  uint64_t __temp601v__dat__pos=0;
  uint64_t __temp601v__dat__length=0;
  char __temp601v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp595v__);
  __temp596v=1;
  neq__temp142v(__temp595v__,__temp596v,&__temp597v__);
  if(__temp597v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp598v__);
  __temp599v=0;
  neq__temp142v(__temp598v__,__temp599v,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp588v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp601v__unsafe_ptr,&__temp601v__dat__pos,&__temp601v__dat__length,&__temp601v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1822v=__temp601v__unsafe_ptr;
  *__temp1823v=__temp601v__dat__pos;
  *__temp1824v=__temp601v__dat__length;
  *__temp1825v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1826v, uint64_t* __temp1827v, uint64_t* __temp1828v, char* __temp1829v) {
  uint64_t __temp627v=0;
  char __temp628v__=0;
  char* __temp629v__=0;
  char __temp630v__value=0;
  char first=0;
  char* __temp631v__unsafe_ptr=0;
  uint64_t __temp631v__dat__pos=0;
  uint64_t __temp631v__dat__length=0;
  char __temp631v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp627v=0;
  neq__temp142v(length,__temp627v,&__temp628v__);
  if(__temp628v__){
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp629v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp629v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp630v__value,__temp629v__,1);
  first=__temp630v__value;
  }
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp631v__unsafe_ptr,&__temp631v__dat__pos,&__temp631v__dat__length,&__temp631v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1826v=__temp631v__unsafe_ptr;
  *__temp1827v=__temp631v__dat__pos;
  *__temp1828v=__temp631v__dat__length;
  *__temp1829v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1830v, uint64_t* __temp1831v, uint64_t* __temp1832v, char* __temp1833v) {
  char* __temp633v__unsafe_ptr=0;
  uint64_t __temp633v__unsafe_size=0;
  uint16_t __temp633v__unsafe_offset=0;
  uint16_t __temp633v__unsafe_align=0;
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp635v__=0;
  uint64_t length=0;
  uint64_t __temp636v=0;
  uint64_t __temp637v__=0;
  uint64_t __temp638v=0;
  char* __temp639v__unsafe_ptr=0;
  uint64_t __temp639v__dat__pos=0;
  uint64_t __temp639v__dat__length=0;
  char __temp639v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp592v(&__temp633v__unsafe_ptr,&__temp633v__unsafe_size,&__temp633v__unsafe_offset,&__temp633v__unsafe_align);
  __temp634v__unsafe_ptr=__temp633v__unsafe_ptr;
  __temp634v__unsafe_size=__temp633v__unsafe_size;
  __temp634v__unsafe_offset=__temp633v__unsafe_offset;
  __temp634v__unsafe_align=__temp633v__unsafe_align;
  buf__unsafe_ptr=__temp634v__unsafe_ptr;
  buf__unsafe_size=__temp634v__unsafe_size;
  buf__unsafe_offset=__temp634v__unsafe_offset;
  buf__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp635v__);
  buf__unsafe_ptr=__temp635v__;
  if(c){
  length=strlen(c);
  }
  __temp636v=1;
  add__temp170v(length,__temp636v,&__temp637v__);
  buf__unsafe_size=__temp637v__;
  __temp638v=0;
  __temp_errcode=str__temp626v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp638v,length,&__temp639v__unsafe_ptr,&__temp639v__dat__pos,&__temp639v__dat__length,&__temp639v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1830v=__temp639v__unsafe_ptr;
  *__temp1831v=__temp639v__dat__pos;
  *__temp1832v=__temp639v__dat__length;
  *__temp1833v=__temp639v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp640v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1834v) {
  goto __temp_return;
  __temp_return:
  *__temp1834v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1835v) {
  goto __temp_return;
  __temp_return:
  *__temp1835v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1836v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1836v=z;
}

int copy__temp709v(char** __temp1837v, uint64_t* __temp1838v, uint16_t* __temp1839v, uint16_t* __temp1840v, uint64_t* __temp1841v, const char* _other, char** __temp1842v, uint64_t* __temp1843v, uint64_t* __temp1844v, char* __temp1845v) {
  char* buf__unsafe_ptr=*__temp1837v;
  uint64_t buf__unsafe_size=*__temp1838v;
  uint16_t buf__unsafe_offset=*__temp1839v;
  uint16_t buf__unsafe_align=*__temp1840v;
  uint64_t pos=*__temp1841v;
  char* __temp710v__unsafe_ptr=0;
  uint64_t __temp710v__dat__pos=0;
  uint64_t __temp710v__dat__length=0;
  char __temp710v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp711v__=0;
  uint64_t __temp712v__=0;
  uint64_t next_pos=0;
  uint64_t __temp713v__=0;
  char __temp714v__=0;
  uint64_t __temp715v=0;
  uint64_t __temp716v__=0;
  uint64_t prev_pos=0;
  char* __temp717v__unsafe_ptr=0;
  uint64_t __temp717v__dat__pos=0;
  uint64_t __temp717v__dat__length=0;
  char __temp717v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(_other,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp710v__unsafe_ptr;
  other__dat__pos=__temp710v__dat__pos;
  other__dat__length=__temp710v__dat__length;
  other__dat__first=__temp710v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp711v__);
  add__temp170v(pos,__temp711v__,&__temp712v__);
  next_pos=__temp712v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp713v__);
  gt__temp271v(next_pos,__temp713v__,&__temp714v__);
  if(__temp714v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp715v=0;
  add__temp170v(pos,__temp715v,&__temp716v__);
  prev_pos=__temp716v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp717v__unsafe_ptr,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1837v=buf__unsafe_ptr;
  *__temp1838v=buf__unsafe_size;
  *__temp1839v=buf__unsafe_offset;
  *__temp1840v=buf__unsafe_align;
  *__temp1841v=pos;
  *__temp1842v=__temp717v__unsafe_ptr;
  *__temp1843v=__temp717v__dat__pos;
  *__temp1844v=__temp717v__dat__length;
  *__temp1845v=__temp717v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void closedir__temp1651v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int read__temp1652v(const char* path, char** __temp1846v) {
  char* unsafe_ptr=0;
  char __temp1654v__=0;
  char __temp1655v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1654v__);
  not__temp26v(__temp1654v__,&__temp1655v__);
  if(__temp1655v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1651v(unsafe_ptr);
  __temp_return:
  *__temp1846v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1847v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1847v=__temp446v__;
}

static inline __attribute__((always_inline)) int raw_entry__temp1662v(char** __temp1848v, const char** __temp1849v) {
  char* f__unsafe_ptr=*__temp1848v;
  char __temp1663v__=0;
  char __temp1664v__=0;
  char* de=0;
  char __temp1665v__=0;
  char __temp1666v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1663v__);
  not__temp26v(__temp1663v__,&__temp1664v__);
  if(__temp1664v__){
  __temp_errcode=48;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1665v__);
  not__temp26v(__temp1665v__,&__temp1666v__);
  if(__temp1666v__){
  __temp_errcode=49;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1848v=f__unsafe_ptr;
  *__temp1849v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1667v(char** __temp1850v, char** __temp1851v, uint64_t* __temp1852v, uint64_t* __temp1853v, char* __temp1854v) {
  char* f__unsafe_ptr=*__temp1850v;
  const char* __temp1668v__=0;
  char* __temp1669v__unsafe_ptr=0;
  uint64_t __temp1669v__dat__pos=0;
  uint64_t __temp1669v__dat__length=0;
  char __temp1669v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw_entry__temp1662v(&f__unsafe_ptr,&__temp1668v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp632v(__temp1668v__,&__temp1669v__unsafe_ptr,&__temp1669v__dat__pos,&__temp1669v__dat__length,&__temp1669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1850v=f__unsafe_ptr;
  *__temp1851v=__temp1669v__unsafe_ptr;
  *__temp1852v=__temp1669v__dat__pos;
  *__temp1853v=__temp1669v__dat__length;
  *__temp1854v=__temp1669v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp625v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1855v, uint64_t* __temp1856v, uint64_t* __temp1857v, char* __temp1858v) {
  goto __temp_return;
  __temp_return:
  *__temp1855v=other__unsafe_ptr;
  *__temp1856v=other__dat__pos;
  *__temp1857v=other__dat__length;
  *__temp1858v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1859v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1859v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1860v) {
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
  *__temp1860v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp781v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1861v) {
  uint64_t __temp782v__=0;
  char* __temp783v__=0;
  add__temp170v(s__dat__pos,i,&__temp782v__);
  add__temp468v(s__unsafe_ptr,__temp782v__,&__temp783v__);
  goto __temp_return;
  __temp_return:
  *__temp1861v=__temp783v__;
}

int slice__temp820v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1862v, uint64_t* __temp1863v, uint64_t* __temp1864v, char* __temp1865v) {
  char* __temp821v__unsafe_ptr=0;
  uint64_t __temp821v__dat__pos=0;
  uint64_t __temp821v__dat__length=0;
  char __temp821v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp822v__=0;
  char* __temp824v__unsafe_ptr=0;
  uint64_t __temp824v__dat__pos=0;
  uint64_t __temp824v__dat__length=0;
  char __temp824v__dat__first=0;
  char __temp825v__=0;
  char __temp826v__=0;
  char __temp827v=0;
  uint64_t __temp828v__=0;
  uint64_t new_length=0;
  uint64_t __temp829v=0;
  char __temp830v__=0;
  char new_first=0;
  char* __temp831v__=0;
  char __temp832v__value=0;
  uint64_t __temp833v__=0;
  char* __temp834v__unsafe_ptr=0;
  uint64_t __temp834v__dat__pos=0;
  uint64_t __temp834v__dat__length=0;
  char __temp834v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp625v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp821v__unsafe_ptr,&__temp821v__dat__pos,&__temp821v__dat__length,&__temp821v__dat__first);
  s__unsafe_ptr=__temp821v__unsafe_ptr;
  s__dat__pos=__temp821v__dat__pos;
  s__dat__length=__temp821v__dat__length;
  s__dat__first=__temp821v__dat__first;
  eq__temp118v(from,to,&__temp822v__);
  if(__temp822v__){
  __temp_errcode=str__temp632v(__temp823v,&__temp824v__unsafe_ptr,&__temp824v__dat__pos,&__temp824v__dat__length,&__temp824v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp825v__);
  if(!__temp825v__){
  gt__temp271v(to,s__dat__length,&__temp826v__);
  __temp827v=__temp826v__;
  }
  if(__temp827v){
  __temp_errcode=19;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp828v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp828v__;
  __temp829v=0;
  neq__temp142v(from,__temp829v,&__temp830v__);
  if(__temp830v__){
  get__temp781v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp831v__);
  if(!__temp831v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp832v__value,__temp831v__,1);
  new_first=__temp832v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp833v__);
  str__temp588v(s__unsafe_ptr,__temp833v__,new_length,new_first,&__temp834v__unsafe_ptr,&__temp834v__dat__pos,&__temp834v__dat__length,&__temp834v__dat__first);
  __temp824v__unsafe_ptr=__temp834v__unsafe_ptr;
  __temp824v__dat__pos=__temp834v__dat__pos;
  __temp824v__dat__length=__temp834v__dat__length;
  __temp824v__dat__first=__temp834v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1862v=__temp824v__unsafe_ptr;
  *__temp1863v=__temp824v__dat__pos;
  *__temp1864v=__temp824v__dat__length;
  *__temp1865v=__temp824v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp644v(char x, char y, char* __temp1866v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1866v=z;
}

static inline __attribute__((always_inline)) void eq__temp785v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1867v) {
  uint64_t __temp786v__=0;
  uint64_t n=0;
  uint64_t __temp787v__=0;
  char __temp788v__=0;
  char __temp789v=0;
  char __temp790v__=0;
  char __temp791v=0;
  char z=0;
  len__temp640v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp786v__);
  n=__temp786v__;
  len__temp640v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp787v__);
  neq__temp142v(n,__temp787v__,&__temp788v__);
  if(__temp788v__){
  __temp789v=0;
  goto __temp_return;
  }
  neq__temp644v(x__dat__first,y__dat__first,&__temp790v__);
  if(__temp790v__){
  __temp791v=0;
  __temp789v=__temp791v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp789v=z;
  goto __temp_return;
  __temp_return:
  *__temp1867v=__temp789v;
}

static inline __attribute__((always_inline)) int ends_with__temp899v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1868v) {
  char* __temp900v__unsafe_ptr=0;
  uint64_t __temp900v__dat__pos=0;
  uint64_t __temp900v__dat__length=0;
  char __temp900v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp901v__unsafe_ptr=0;
  uint64_t __temp901v__dat__pos=0;
  uint64_t __temp901v__dat__length=0;
  char __temp901v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp902v__=0;
  char __temp903v=0;
  uint64_t __temp904v__=0;
  uint64_t n=0;
  uint64_t __temp905v__=0;
  uint64_t __temp906v__=0;
  char* __temp907v__unsafe_ptr=0;
  uint64_t __temp907v__dat__pos=0;
  uint64_t __temp907v__dat__length=0;
  char __temp907v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp908v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp625v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp900v__unsafe_ptr,&__temp900v__dat__pos,&__temp900v__dat__length,&__temp900v__dat__first);
  stack__unsafe_ptr=__temp900v__unsafe_ptr;
  stack__dat__pos=__temp900v__dat__pos;
  stack__dat__length=__temp900v__dat__length;
  stack__dat__first=__temp900v__dat__first;
  __temp_errcode=str__temp632v(_needle,&__temp901v__unsafe_ptr,&__temp901v__dat__pos,&__temp901v__dat__length,&__temp901v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp901v__unsafe_ptr;
  needle__dat__pos=__temp901v__dat__pos;
  needle__dat__length=__temp901v__dat__length;
  needle__dat__first=__temp901v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp902v__);
  if(__temp902v__){
  __temp903v=0;
  goto __temp_return;
  }
  len__temp640v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp904v__);
  n=__temp904v__;
  len__temp640v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp905v__);
  __temp_errcode=sub__temp347v(n,__temp905v__,&__temp906v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp820v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp906v__,n,&__temp907v__unsafe_ptr,&__temp907v__dat__pos,&__temp907v__dat__length,&__temp907v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp907v__unsafe_ptr;
  ret__dat__pos=__temp907v__dat__pos;
  ret__dat__length=__temp907v__dat__length;
  ret__dat__first=__temp907v__dat__first;
  eq__temp785v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp908v__);
  __temp903v=__temp908v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1868v=__temp903v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp718v(char** __temp1869v, uint64_t* __temp1870v, uint16_t* __temp1871v, uint16_t* __temp1872v, uint64_t* __temp1873v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1874v, uint64_t* __temp1875v, uint64_t* __temp1876v, char* __temp1877v) {
  char* buf__unsafe_ptr=*__temp1869v;
  uint64_t buf__unsafe_size=*__temp1870v;
  uint16_t buf__unsafe_offset=*__temp1871v;
  uint16_t buf__unsafe_align=*__temp1872v;
  uint64_t pos=*__temp1873v;
  char* __temp719v__unsafe_ptr=0;
  uint64_t __temp719v__dat__pos=0;
  uint64_t __temp719v__dat__length=0;
  char __temp719v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp720v__=0;
  uint64_t __temp721v__=0;
  uint64_t null_pos=0;
  uint64_t __temp722v=0;
  uint64_t __temp723v__=0;
  uint64_t next_pos=0;
  uint64_t __temp724v__=0;
  char __temp725v__=0;
  char* endpos=0;
  uint64_t __temp726v=0;
  uint64_t __temp727v__=0;
  uint64_t prev_pos=0;
  char* __temp728v__unsafe_ptr=0;
  uint64_t __temp728v__dat__pos=0;
  uint64_t __temp728v__dat__length=0;
  char __temp728v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp625v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp719v__unsafe_ptr,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
  other__unsafe_ptr=__temp719v__unsafe_ptr;
  other__dat__pos=__temp719v__dat__pos;
  other__dat__length=__temp719v__dat__length;
  other__dat__first=__temp719v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp720v__);
  add__temp170v(pos,__temp720v__,&__temp721v__);
  null_pos=__temp721v__;
  __temp722v=1;
  add__temp170v(null_pos,__temp722v,&__temp723v__);
  next_pos=__temp723v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp724v__);
  gt__temp271v(next_pos,__temp724v__,&__temp725v__);
  if(__temp725v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __temp726v=0;
  add__temp170v(pos,__temp726v,&__temp727v__);
  prev_pos=__temp727v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp728v__unsafe_ptr,&__temp728v__dat__pos,&__temp728v__dat__length,&__temp728v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1869v=buf__unsafe_ptr;
  *__temp1870v=buf__unsafe_size;
  *__temp1871v=buf__unsafe_offset;
  *__temp1872v=buf__unsafe_align;
  *__temp1873v=pos;
  *__temp1874v=__temp728v__unsafe_ptr;
  *__temp1875v=__temp728v__dat__pos;
  *__temp1876v=__temp728v__dat__length;
  *__temp1877v=__temp728v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp698v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1878v) {
  uint64_t __temp699v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp699v__);
  goto __temp_return;
  __temp_return:
  *__temp1878v=__temp699v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1879v) {
  int value=0;
  *__temp1879v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1880v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1880v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp602v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __temp1881v, uint64_t* __temp1882v, uint64_t* __temp1883v, char* __temp1884v) {
  int __temp603v=0;
  int __temp604v=0;
  int __temp605v__=0;
  uint64_t __temp606v__=0;
  char __temp607v__=0;
  uint64_t __temp608v=0;
  uint64_t __temp609v=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp604v,&__temp605v__);
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp606v__);
  gt__temp271v(length,__temp606v__,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  __temp608v=0;
  __temp609v=0;
  __temp_errcode=get__temp550v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp609v,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp608v,length,__temp611v__value,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1881v=__temp612v__unsafe_ptr;
  *__temp1882v=__temp612v__dat__pos;
  *__temp1883v=__temp612v__dat__length;
  *__temp1884v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp661v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1885v, uint64_t* __temp1886v, uint64_t* __temp1887v, char* __temp1888v) {
  char* __temp662v__unsafe_ptr=0;
  uint64_t __temp662v__unsafe_size=0;
  uint16_t __temp662v__unsafe_offset=0;
  uint16_t __temp662v__unsafe_align=0;
  uint64_t __temp663v=0;
  uint64_t __temp664v__=0;
  uint64_t __temp665v__=0;
  char* __temp666v__unsafe_ptr=0;
  uint64_t __temp666v__unsafe_size=0;
  uint16_t __temp666v__unsafe_offset=0;
  uint16_t __temp666v__unsafe_align=0;
  char __temp667v____temp475v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __temp668v=0;
  char* __temp669v__unsafe_ptr=0;
  uint64_t __temp669v__dat__pos=0;
  uint64_t __temp669v__dat__length=0;
  char __temp669v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp592v(&__temp662v__unsafe_ptr,&__temp662v__unsafe_size,&__temp662v__unsafe_offset,&__temp662v__unsafe_align);
  __temp663v=1;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp664v__);
  add__temp170v(__temp663v,__temp664v__,&__temp665v__);
  __temp_errcode=alloc__temp473v(&__temp662v__unsafe_ptr,&__temp662v__unsafe_size,&__temp662v__unsafe_offset,&__temp662v__unsafe_align,__temp665v__,&__temp666v__unsafe_ptr,&__temp666v__unsafe_size,&__temp666v__unsafe_offset,&__temp666v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp666v__unsafe_ptr;
  buf__unsafe_size=__temp666v__unsafe_size;
  buf__unsafe_offset=__temp666v__unsafe_offset;
  buf__unsafe_align=__temp666v__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __temp668v=0;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp668v,other__dat__length,other__dat__first,&__temp669v__unsafe_ptr,&__temp669v__dat__pos,&__temp669v__dat__length,&__temp669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp669v__unsafe_ptr,&__temp667v____temp475v__);
  if(__temp667v____temp475v__){
  __temp666v__unsafe_size=0;
  __temp666v__unsafe_size=__temp666v__unsafe_size;
  __temp669v__unsafe_ptr=__temp669v__unsafe_ptr;
  free__temp466v(&__temp669v__unsafe_ptr);
  }
  __temp_return:
  *__temp1885v=__temp669v__unsafe_ptr;
  *__temp1886v=__temp669v__dat__pos;
  *__temp1887v=__temp669v__dat__length;
  *__temp1888v=__temp669v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp670v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1889v, char** __temp1890v, uint64_t* __temp1891v, uint64_t* __temp1892v, char* __temp1893v) {
  char* __temp671v__unsafe_ptr=0;
  uint64_t __temp671v__dat__pos=0;
  uint64_t __temp671v__dat__length=0;
  char __temp671v__dat__first=0;
  char __temp672v____temp667v____temp475v__=0;
  uint64_t __temp672v____temp666v__unsafe_size=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __temp673v__=0;
  char* _ret=0;
  const char* cstr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=copy_null_terminated__temp661v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp671v__unsafe_ptr,&__temp671v__dat__pos,&__temp671v__dat__length,&__temp671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp671v__unsafe_ptr;
  str__dat__pos=__temp671v__dat__pos;
  str__dat__length=__temp671v__dat__length;
  str__dat__first=__temp671v__dat__first;
  add__temp468v(str__unsafe_ptr,str__dat__pos,&__temp673v__);
  _ret=__temp673v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(str__unsafe_ptr,&__temp672v____temp667v____temp475v__);
  if(__temp672v____temp667v____temp475v__){
  __temp672v____temp666v__unsafe_size=0;
  __temp672v____temp666v__unsafe_size=__temp672v____temp666v__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__temp466v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1889v=cstr;
  *__temp1890v=str__unsafe_ptr;
  *__temp1891v=str__dat__pos;
  *__temp1892v=str__dat__length;
  *__temp1893v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void popen__temp1254v(const char* cmd, char** __temp1894v) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __temp_return;
  __temp_return:
  *__temp1894v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__temp1253v(char* unsafe_ptr, int64_t* __temp1895v) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __temp_return;
  __temp_return:
  *__temp1895v=status;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1896v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1896v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1897v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1897v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1898v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1898v=z;
}

static inline __attribute__((always_inline)) int read__temp1255v(const char* cmd, char** __temp1899v) {
  char* __temp1256v__=0;
  char* unsafe_ptr=0;
  char __temp1257v__=0;
  char __temp1258v__=0;
  char __temp1259v__=0;
  int64_t __temp1260v__=0;
  int64_t status=0;
  uint64_t __temp1261v=0;
  int64_t __temp1262v__=0;
  char __temp1263v__=0;
  char __temp1264v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  popen__temp1254v(cmd,&__temp1256v__);
  unsafe_ptr=__temp1256v__;
  exists__temp412v(unsafe_ptr,&__temp1257v__);
  not__temp26v(__temp1257v__,&__temp1258v__);
  if(__temp1258v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1259v__);
  if(__temp1259v__){
  pclose__temp1253v(unsafe_ptr,&__temp1260v__);
  status=__temp1260v__;
  unsafe_ptr=0;
  __temp1261v=0;
  int__temp395v(__temp1261v,&__temp1262v__);
  neq__temp131v(status,__temp1262v__,&__temp1263v__);
  if(__temp1263v__){
  __temp_complain=33;
  __temp1264v=__temp1264v==0;
  }
  }
  __temp_return:
  *__temp1899v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1266v(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __temp1900v) {
  const char* __temp1267v__cstr=0;
  char* __temp1267v__str__unsafe_ptr=0;
  uint64_t __temp1267v__str__dat__pos=0;
  uint64_t __temp1267v__str__dat__length=0;
  char __temp1267v__str__dat__first=0;
  char __temp1268v____temp672v____temp667v____temp475v__=0;
  uint64_t __temp1268v____temp672v____temp666v__unsafe_size=0;
  char* __temp1269v__unsafe_ptr=0;
  char __temp1270v____temp1259v__=0;
  int64_t __temp1270v____temp1260v__=0;
  int64_t __temp1270v__status=0;
  uint64_t __temp1270v____temp1261v=0;
  int64_t __temp1270v____temp1262v__=0;
  char __temp1270v____temp1263v__=0;
  char __temp1270v____temp1264v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp670v(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__temp1267v__cstr,&__temp1267v__str__unsafe_ptr,&__temp1267v__str__dat__pos,&__temp1267v__str__dat__length,&__temp1267v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1255v(__temp1267v__cstr,&__temp1269v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1269v__unsafe_ptr,&__temp1270v____temp1259v__);
  if(__temp1270v____temp1259v__){
  pclose__temp1253v(__temp1269v__unsafe_ptr,&__temp1270v____temp1260v__);
  __temp1270v__status=__temp1270v____temp1260v__;
  __temp1269v__unsafe_ptr=0;
  __temp1270v____temp1261v=0;
  int__temp395v(__temp1270v____temp1261v,&__temp1270v____temp1262v__);
  neq__temp131v(__temp1270v__status,__temp1270v____temp1262v__,&__temp1270v____temp1263v__);
  if(__temp1270v____temp1263v__){
  __temp_complain=33;
  __temp1270v____temp1264v=__temp1270v____temp1264v==0;
  }
  }
  __temp_return:
  *__temp1900v=__temp1269v__unsafe_ptr;
  exists__temp412v(__temp1267v__str__unsafe_ptr,&__temp1268v____temp672v____temp667v____temp475v__);
  if(__temp1268v____temp672v____temp667v____temp475v__){
  __temp1268v____temp672v____temp666v__unsafe_size=0;
  __temp1268v____temp672v____temp666v__unsafe_size=__temp1268v____temp672v____temp666v__unsafe_size;
  __temp1267v__str__unsafe_ptr=__temp1267v__str__unsafe_ptr;
  free__temp466v(&__temp1267v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1245v(int64_t value, const char** __temp1901v) {
  int __temp1246v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1901v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1739v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1740v__unsafe_ptr=0;
  char __temp1741v____temp1270v____temp1259v__=0;
  int64_t __temp1741v____temp1270v____temp1260v__=0;
  int64_t __temp1741v____temp1270v__status=0;
  uint64_t __temp1741v____temp1270v____temp1261v=0;
  int64_t __temp1741v____temp1270v____temp1262v__=0;
  char __temp1741v____temp1270v____temp1263v__=0;
  char __temp1741v____temp1270v____temp1264v=0;
  char* __temp1742v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  char __temp1743v=0;
  int64_t __temp1744v=0;
  int64_t error=0;
  const char* __temp1745v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1266v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1740v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1742v__unsafe_ptr=__temp1740v__unsafe_ptr;
  proc__unsafe_ptr=__temp1742v__unsafe_ptr;
  exists__temp412v(__temp1740v__unsafe_ptr,&__temp1741v____temp1270v____temp1259v__);
  if(__temp1741v____temp1270v____temp1259v__){
  pclose__temp1253v(__temp1740v__unsafe_ptr,&__temp1741v____temp1270v____temp1260v__);
  __temp1741v____temp1270v__status=__temp1741v____temp1270v____temp1260v__;
  __temp1740v__unsafe_ptr=0;
  __temp1741v____temp1270v____temp1261v=0;
  int__temp395v(__temp1741v____temp1270v____temp1261v,&__temp1741v____temp1270v____temp1262v__);
  neq__temp131v(__temp1741v____temp1270v__status,__temp1741v____temp1270v____temp1262v__,&__temp1741v____temp1270v____temp1263v__);
  if(__temp1741v____temp1270v____temp1263v__){
  __temp_complain=33;
  __temp1741v____temp1270v____temp1264v=__temp1741v____temp1270v____temp1264v==0;
  }
  }
  __temp1744v=__temp_complain;
  __temp1743v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1744v;
  __temp1743v=__temp1743v==0;
  if(__temp1743v){
  cstr__temp1245v(error,&__temp1745v__);
  print__temp363v(__temp1745v__);
  }
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1747v() {
  const char* path=0;
  char* __temp1749v__unsafe_ptr=0;
  uint64_t __temp1749v__unsafe_size=0;
  uint16_t __temp1749v__unsafe_offset=0;
  uint16_t __temp1749v__unsafe_align=0;
  uint64_t __temp1750v=0;
  char* __temp1751v__unsafe_ptr=0;
  uint64_t __temp1751v__unsafe_size=0;
  uint16_t __temp1751v__unsafe_offset=0;
  uint16_t __temp1751v__unsafe_align=0;
  char __temp1752v____temp475v__=0;
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
  char* __temp1759v__unsafe_ptr=0;
  uint64_t __temp1759v__unsafe_size=0;
  uint16_t __temp1759v__unsafe_offset=0;
  uint16_t __temp1759v__unsafe_align=0;
  uint64_t __temp1760v=0;
  uint64_t __temp1761v__=0;
  char* __temp1762v__unsafe_ptr=0;
  uint64_t __temp1762v__unsafe_size=0;
  uint16_t __temp1762v__unsafe_offset=0;
  uint16_t __temp1762v__unsafe_align=0;
  char __temp1763v____temp475v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  char __temp1764v=0;
  char* __temp1765v__unsafe_ptr=0;
  uint64_t __temp1765v__dat__pos=0;
  uint64_t __temp1765v__dat__length=0;
  char __temp1765v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1767v__=0;
  char __temp1768v__=0;
  char* __temp1769v__buf__unsafe_ptr=0;
  uint64_t __temp1769v__buf__unsafe_size=0;
  uint16_t __temp1769v__buf__unsafe_offset=0;
  uint16_t __temp1769v__buf__unsafe_align=0;
  uint64_t __temp1769v__pos=0;
  char* __temp1770v__unsafe_ptr=0;
  uint64_t __temp1770v__dat__pos=0;
  uint64_t __temp1770v__dat__length=0;
  char __temp1770v__dat__first=0;
  char* __temp1771v__unsafe_ptr=0;
  uint64_t __temp1771v__dat__pos=0;
  uint64_t __temp1771v__dat__length=0;
  char __temp1771v__dat__first=0;
  uint64_t __temp1772v__=0;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__dat__pos=0;
  uint64_t __temp1773v__dat__length=0;
  char __temp1773v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1748v;
  char____temp_buffer____buffer__temp1271v(&__temp1749v__unsafe_ptr,&__temp1749v__unsafe_size,&__temp1749v__unsafe_offset,&__temp1749v__unsafe_align);
  __temp1750v=256;
  __temp_errcode=alloc__temp473v(&__temp1749v__unsafe_ptr,&__temp1749v__unsafe_size,&__temp1749v__unsafe_offset,&__temp1749v__unsafe_align,__temp1750v,&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_offset,&__temp1751v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_offset,&__temp1751v__unsafe_align,&__temp1753v__buf__unsafe_ptr,&__temp1753v__buf__unsafe_size,&__temp1753v__buf__unsafe_offset,&__temp1753v__buf__unsafe_align,&__temp1753v__pos);
  bp__buf__unsafe_ptr=__temp1753v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1753v__buf__unsafe_size;
  bp__buf__unsafe_offset=__temp1753v__buf__unsafe_offset;
  bp__buf__unsafe_align=__temp1753v__buf__unsafe_align;
  bp__pos=__temp1753v__pos;
  __temp_errcode=copy__temp709v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__temp1754v,&__temp1755v__unsafe_ptr,&__temp1755v__dat__pos,&__temp1755v__dat__length,&__temp1755v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__temp1756v__unsafe_ptr,&__temp1756v__dat__pos,&__temp1756v__dat__length,&__temp1756v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1652v(path,&__temp1757v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1757v__unsafe_ptr;
  char____temp_buffer____buffer__temp1271v(&__temp1759v__unsafe_ptr,&__temp1759v__unsafe_size,&__temp1759v__unsafe_offset,&__temp1759v__unsafe_align);
  __temp1760v=4;
  KB__temp444v(__temp1760v,&__temp1761v__);
  __temp_errcode=alloc__temp473v(&__temp1759v__unsafe_ptr,&__temp1759v__unsafe_size,&__temp1759v__unsafe_offset,&__temp1759v__unsafe_align,__temp1761v__,&__temp1762v__unsafe_ptr,&__temp1762v__unsafe_size,&__temp1762v__unsafe_offset,&__temp1762v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1762v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1762v__unsafe_size;
  proc_buf__unsafe_offset=__temp1762v__unsafe_offset;
  proc_buf__unsafe_align=__temp1762v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1667v(&test_dir__unsafe_ptr,&__temp1765v__unsafe_ptr,&__temp1765v__dat__pos,&__temp1765v__dat__length,&__temp1765v__dat__first);
  __temp1764v=__temp_complain;
  entry__unsafe_ptr=__temp1765v__unsafe_ptr;
  entry__dat__pos=__temp1765v__dat__pos;
  entry__dat__length=__temp1765v__dat__length;
  entry__dat__first=__temp1765v__dat__first;
  __temp1764v=__temp1764v==0;
  if(!__temp1764v){
  break;
  }
  __temp_errcode=ends_with__temp899v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1766v,&__temp1767v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1767v__,&__temp1768v__);
  if(__temp1768v__){
  continue;
  }
  __temp1769v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1769v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1769v__buf__unsafe_offset=bp__buf__unsafe_offset;
  __temp1769v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1769v__pos=bp__pos;
  str__temp625v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1770v__unsafe_ptr,&__temp1770v__dat__pos,&__temp1770v__dat__length,&__temp1770v__dat__first);
  __temp_errcode=copy_null_terminated__temp718v(&__temp1769v__buf__unsafe_ptr,&__temp1769v__buf__unsafe_size,&__temp1769v__buf__unsafe_offset,&__temp1769v__buf__unsafe_align,&__temp1769v__pos,__temp1770v__unsafe_ptr,__temp1770v__dat__pos,__temp1770v__dat__length,__temp1770v__dat__first,&__temp1771v__unsafe_ptr,&__temp1771v__dat__pos,&__temp1771v__dat__length,&__temp1771v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp698v(__temp1771v__unsafe_ptr,__temp1771v__dat__pos,__temp1771v__dat__length,__temp1771v__dat__first,&__temp1772v__);
  __temp_errcode=str__temp602v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__temp1772v__,&__temp1773v__unsafe_ptr,&__temp1773v__dat__pos,&__temp1773v__dat__length,&__temp1773v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1773v__unsafe_ptr;
  command__dat__pos=__temp1773v__dat__pos;
  command__dat__length=__temp1773v__dat__length;
  command__dat__first=__temp1773v__dat__first;
  print__temp742v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1739v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1762v__unsafe_ptr,&__temp1763v____temp475v__);
  if(__temp1763v____temp475v__){
  __temp1762v__unsafe_size=0;
  __temp1762v__unsafe_size=__temp1762v__unsafe_size;
  __temp1762v__unsafe_ptr=__temp1762v__unsafe_ptr;
  free__temp466v(&__temp1762v__unsafe_ptr);
  }
  closedir__temp1651v(__temp1757v__unsafe_ptr);
  exists__temp412v(__temp1751v__unsafe_ptr,&__temp1752v____temp475v__);
  if(__temp1752v____temp475v__){
  __temp1751v__unsafe_size=0;
  __temp1751v__unsafe_size=__temp1751v__unsafe_size;
  __temp1751v__unsafe_ptr=__temp1751v__unsafe_ptr;
  free__temp466v(&__temp1751v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1747v();return 0;}