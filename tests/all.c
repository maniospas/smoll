#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1758v="./smoll ";
const char* const __temp821v="";
const char* const __temp1753v="./tests/passing/";
const char* const __temp1769v=".s";
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
"cannot resize a buffer with offset",
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp557v(char** __temp1779v, uint64_t* __temp1780v, uint16_t* __temp1781v, uint16_t* __temp1782v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1779v=unsafe_ptr;
  *__temp1780v=unsafe_size;
  *__temp1781v=unsafe_offset;
  *__temp1782v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1783v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1783v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1784v) {
  char* allocated=*__temp1784v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1784v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1785v) {
  int value=0;
  *__temp1785v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1786v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1786v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1787v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1787v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1788v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1788v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1789v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1789v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1790v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1790v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1791v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1791v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1792v) {
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
  *__temp1792v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1793v, uint64_t* __temp1794v, uint16_t* __temp1795v, uint16_t* __temp1796v, uint64_t size, char** __temp1797v, uint64_t* __temp1798v, uint16_t* __temp1799v, uint16_t* __temp1800v) {
  char* buffer__unsafe_ptr=*__temp1793v;
  uint64_t buffer__unsafe_size=*__temp1794v;
  uint16_t buffer__unsafe_offset=*__temp1795v;
  uint16_t buffer__unsafe_align=*__temp1796v;
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
  *__temp1793v=buffer__unsafe_ptr;
  *__temp1794v=buffer__unsafe_size;
  *__temp1795v=buffer__unsafe_offset;
  *__temp1796v=buffer__unsafe_align;
  *__temp1797v=buffer__unsafe_ptr;
  *__temp1798v=buffer__unsafe_size;
  *__temp1799v=buffer__unsafe_offset;
  *__temp1800v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp556v(uint64_t size, char** __temp1801v, uint64_t* __temp1802v, uint16_t* __temp1803v, uint16_t* __temp1804v) {
  char* __temp559v__unsafe_ptr=0;
  uint64_t __temp559v__unsafe_size=0;
  uint16_t __temp559v__unsafe_offset=0;
  uint16_t __temp559v__unsafe_align=0;
  char* __temp560v__unsafe_ptr=0;
  uint64_t __temp560v__unsafe_size=0;
  uint16_t __temp560v__unsafe_offset=0;
  uint16_t __temp560v__unsafe_align=0;
  char* __temp561v__unsafe_ptr=0;
  uint64_t __temp561v__unsafe_size=0;
  uint16_t __temp561v__unsafe_offset=0;
  uint16_t __temp561v__unsafe_align=0;
  char __temp562v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp557v(&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_offset,&__temp559v__unsafe_align);
  __temp560v__unsafe_ptr=__temp559v__unsafe_ptr;
  __temp560v__unsafe_size=__temp559v__unsafe_size;
  __temp560v__unsafe_offset=__temp559v__unsafe_offset;
  __temp560v__unsafe_align=__temp559v__unsafe_align;
  __temp_errcode=alloc__temp468v(&__temp560v__unsafe_ptr,&__temp560v__unsafe_size,&__temp560v__unsafe_offset,&__temp560v__unsafe_align,size,&__temp561v__unsafe_ptr,&__temp561v__unsafe_size,&__temp561v__unsafe_offset,&__temp561v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp561v__unsafe_ptr,&__temp562v____temp470v__);
  if(__temp562v____temp470v__){
  __temp561v__unsafe_size=0;
  __temp561v__unsafe_size=__temp561v__unsafe_size;
  free__temp461v(&__temp561v__unsafe_ptr);
  }
  __temp_return:
  *__temp1801v=__temp561v__unsafe_ptr;
  *__temp1802v=__temp561v__unsafe_size;
  *__temp1803v=__temp561v__unsafe_offset;
  *__temp1804v=__temp561v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1805v, uint64_t* __temp1806v, uint16_t* __temp1807v, uint16_t* __temp1808v, char** __temp1809v, uint64_t* __temp1810v, uint16_t* __temp1811v, uint16_t* __temp1812v, uint64_t* __temp1813v) {
  char* buf__unsafe_ptr=*__temp1805v;
  uint64_t buf__unsafe_size=*__temp1806v;
  uint16_t buf__unsafe_offset=*__temp1807v;
  uint16_t buf__unsafe_align=*__temp1808v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1805v=buf__unsafe_ptr;
  *__temp1806v=buf__unsafe_size;
  *__temp1807v=buf__unsafe_offset;
  *__temp1808v=buf__unsafe_align;
  *__temp1809v=buf__unsafe_ptr;
  *__temp1810v=buf__unsafe_size;
  *__temp1811v=buf__unsafe_offset;
  *__temp1812v=buf__unsafe_align;
  *__temp1813v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1814v) {
  *__temp1814v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1815v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1815v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1816v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1816v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1817v) {
  *__temp1817v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1818v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1818v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1819v) {
  char __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v__=0;
  char* __temp554v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp549v__);
  if(__temp549v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp550v__);
  mul__temp194v(i,__temp550v__,&__temp551v__);
  nat__temp465v(buffer__unsafe_offset,&__temp552v__);
  add__temp170v(__temp551v__,__temp552v__,&__temp553v__);
  add__temp463v(buffer__unsafe_ptr,__temp553v__,&__temp554v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1819v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1820v, uint64_t* __temp1821v, uint64_t* __temp1822v, char* __temp1823v) {
  goto __temp_return;
  __temp_return:
  *__temp1820v=unsafe_ptr;
  *__temp1821v=dat__pos;
  *__temp1822v=dat__length;
  *__temp1823v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp597v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1824v, uint64_t* __temp1825v, uint64_t* __temp1826v, char* __temp1827v) {
  char* unsafe_ptr=0;
  uint64_t __temp598v__=0;
  uint64_t __temp599v=0;
  char __temp600v__=0;
  uint64_t __temp601v__=0;
  uint64_t __temp602v=0;
  char __temp603v__=0;
  char* __temp604v__unsafe_ptr=0;
  uint64_t __temp604v__dat__pos=0;
  uint64_t __temp604v__dat__length=0;
  char __temp604v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp465v(buf__unsafe_align,&__temp598v__);
  __temp599v=1;
  neq__temp142v(__temp598v__,__temp599v,&__temp600v__);
  if(__temp600v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buf__unsafe_offset,&__temp601v__);
  __temp602v=0;
  neq__temp142v(__temp601v__,__temp602v,&__temp603v__);
  if(__temp603v__){
  __temp_errcode=15;
  goto __temp_failure;
  }
  str__temp593v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp604v__unsafe_ptr,&__temp604v__dat__pos,&__temp604v__dat__length,&__temp604v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1824v=__temp604v__unsafe_ptr;
  *__temp1825v=__temp604v__dat__pos;
  *__temp1826v=__temp604v__dat__length;
  *__temp1827v=__temp604v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp629v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v, char* __temp1831v) {
  uint64_t __temp630v=0;
  char __temp631v__=0;
  char* __temp632v__=0;
  char __temp633v__value=0;
  char first=0;
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__dat__pos=0;
  uint64_t __temp634v__dat__length=0;
  char __temp634v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp630v=0;
  neq__temp142v(length,__temp630v,&__temp631v__);
  if(__temp631v__){
  __temp_errcode=get__temp548v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp632v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp632v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp633v__value,__temp632v__,1);
  first=__temp633v__value;
  }
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp634v__unsafe_ptr,&__temp634v__dat__pos,&__temp634v__dat__length,&__temp634v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1828v=__temp634v__unsafe_ptr;
  *__temp1829v=__temp634v__dat__pos;
  *__temp1830v=__temp634v__dat__length;
  *__temp1831v=__temp634v__dat__first;
  
  return __temp_errcode;
}

int str__temp635v(const char* c, char** __temp1832v, uint64_t* __temp1833v, uint64_t* __temp1834v, char* __temp1835v) {
  char* __temp636v__unsafe_ptr=0;
  uint64_t __temp636v__unsafe_size=0;
  uint16_t __temp636v__unsafe_offset=0;
  uint16_t __temp636v__unsafe_align=0;
  char* __temp637v__unsafe_ptr=0;
  uint64_t __temp637v__unsafe_size=0;
  uint16_t __temp637v__unsafe_offset=0;
  uint16_t __temp637v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp638v__=0;
  uint64_t length=0;
  uint64_t __temp639v=0;
  uint64_t __temp640v__=0;
  uint64_t __temp641v=0;
  char* __temp642v__unsafe_ptr=0;
  uint64_t __temp642v__dat__pos=0;
  uint64_t __temp642v__dat__length=0;
  char __temp642v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp557v(&__temp636v__unsafe_ptr,&__temp636v__unsafe_size,&__temp636v__unsafe_offset,&__temp636v__unsafe_align);
  __temp637v__unsafe_ptr=__temp636v__unsafe_ptr;
  __temp637v__unsafe_size=__temp636v__unsafe_size;
  __temp637v__unsafe_offset=__temp636v__unsafe_offset;
  __temp637v__unsafe_align=__temp636v__unsafe_align;
  buf__unsafe_ptr=__temp637v__unsafe_ptr;
  buf__unsafe_size=__temp637v__unsafe_size;
  buf__unsafe_offset=__temp637v__unsafe_offset;
  buf__unsafe_align=__temp637v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp638v__);
  buf__unsafe_ptr=__temp638v__;
  if(c){
  length=strlen(c);
  }
  __temp639v=1;
  add__temp170v(length,__temp639v,&__temp640v__);
  buf__unsafe_size=__temp640v__;
  __temp641v=0;
  __temp_errcode=str__temp629v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp641v,length,&__temp642v__unsafe_ptr,&__temp642v__dat__pos,&__temp642v__dat__length,&__temp642v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1832v=__temp642v__unsafe_ptr;
  *__temp1833v=__temp642v__dat__pos;
  *__temp1834v=__temp642v__dat__length;
  *__temp1835v=__temp642v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp643v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1836v) {
  goto __temp_return;
  __temp_return:
  *__temp1836v=s__dat__length;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1837v) {
  goto __temp_return;
  __temp_return:
  *__temp1837v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1838v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1838v=z;
}

int copy__temp709v(char** __temp1839v, uint64_t* __temp1840v, uint16_t* __temp1841v, uint16_t* __temp1842v, uint64_t* __temp1843v, const char* _other, char** __temp1844v, uint64_t* __temp1845v, uint64_t* __temp1846v, char* __temp1847v) {
  char* buf__unsafe_ptr=*__temp1839v;
  uint64_t buf__unsafe_size=*__temp1840v;
  uint16_t buf__unsafe_offset=*__temp1841v;
  uint16_t buf__unsafe_align=*__temp1842v;
  uint64_t pos=*__temp1843v;
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
  __temp_errcode=str__temp635v(_other,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  other__unsafe_ptr=__temp710v__unsafe_ptr;
  other__dat__pos=__temp710v__dat__pos;
  other__dat__length=__temp710v__dat__length;
  other__dat__first=__temp710v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp711v__);
  add__temp170v(pos,__temp711v__,&__temp712v__);
  next_pos=__temp712v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp713v__);
  gt__temp271v(next_pos,__temp713v__,&__temp714v__);
  if(__temp714v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp715v=0;
  add__temp170v(pos,__temp715v,&__temp716v__);
  prev_pos=__temp716v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp717v__unsafe_ptr,&__temp717v__dat__pos,&__temp717v__dat__length,&__temp717v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1839v=buf__unsafe_ptr;
  *__temp1840v=buf__unsafe_size;
  *__temp1841v=buf__unsafe_offset;
  *__temp1842v=buf__unsafe_align;
  *__temp1843v=pos;
  *__temp1844v=__temp717v__unsafe_ptr;
  *__temp1845v=__temp717v__dat__pos;
  *__temp1846v=__temp717v__dat__length;
  *__temp1847v=__temp717v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void closedir__temp1649v(char* unsafe_ptr) {
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1848v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1848v=z;
}

static inline __attribute__((always_inline)) int read__temp1650v(const char* path, char** __temp1849v) {
  char* unsafe_ptr=0;
  char __temp1652v__=0;
  char __temp1653v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__temp412v(unsafe_ptr,&__temp1652v__);
  not__temp26v(__temp1652v__,&__temp1653v__);
  if(__temp1653v__){
  __temp_errcode=37;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:closedir__temp1649v(unsafe_ptr);
  __temp_return:
  *__temp1849v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1850v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1850v=__temp445v__;
}

static inline __attribute__((always_inline)) int raw_entry__temp1660v(char** __temp1851v, const char** __temp1852v) {
  char* f__unsafe_ptr=*__temp1851v;
  char __temp1661v__=0;
  char __temp1662v__=0;
  char* de=0;
  char __temp1663v__=0;
  char __temp1664v__=0;
  const char* dirname=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  exists__temp412v(f__unsafe_ptr,&__temp1661v__);
  not__temp26v(__temp1661v__,&__temp1662v__);
  if(__temp1662v__){
  __temp_errcode=48;
  goto __temp_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__temp412v(de,&__temp1663v__);
  not__temp26v(__temp1663v__,&__temp1664v__);
  if(__temp1664v__){
  __temp_errcode=49;
  goto __temp_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1851v=f__unsafe_ptr;
  *__temp1852v=dirname;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int entry__temp1665v(char** __temp1853v, char** __temp1854v, uint64_t* __temp1855v, uint64_t* __temp1856v, char* __temp1857v) {
  char* f__unsafe_ptr=*__temp1853v;
  const char* __temp1666v__=0;
  char* __temp1667v__unsafe_ptr=0;
  uint64_t __temp1667v__dat__pos=0;
  uint64_t __temp1667v__dat__length=0;
  char __temp1667v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw_entry__temp1660v(&f__unsafe_ptr,&__temp1666v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp635v(__temp1666v__,&__temp1667v__unsafe_ptr,&__temp1667v__dat__pos,&__temp1667v__dat__length,&__temp1667v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1853v=f__unsafe_ptr;
  *__temp1854v=__temp1667v__unsafe_ptr;
  *__temp1855v=__temp1667v__dat__pos;
  *__temp1856v=__temp1667v__dat__length;
  *__temp1857v=__temp1667v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp628v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1858v, uint64_t* __temp1859v, uint64_t* __temp1860v, char* __temp1861v) {
  goto __temp_return;
  __temp_return:
  *__temp1858v=other__unsafe_ptr;
  *__temp1859v=other__dat__pos;
  *__temp1860v=other__dat__length;
  *__temp1861v=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1862v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1862v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1863v) {
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
  *__temp1863v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp779v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1864v) {
  uint64_t __temp780v__=0;
  char* __temp781v__=0;
  add__temp170v(s__dat__pos,i,&__temp780v__);
  add__temp463v(s__unsafe_ptr,__temp780v__,&__temp781v__);
  goto __temp_return;
  __temp_return:
  *__temp1864v=__temp781v__;
}

int slice__temp818v(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __temp1865v, uint64_t* __temp1866v, uint64_t* __temp1867v, char* __temp1868v) {
  char* __temp819v__unsafe_ptr=0;
  uint64_t __temp819v__dat__pos=0;
  uint64_t __temp819v__dat__length=0;
  char __temp819v__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __temp820v__=0;
  char* __temp822v__unsafe_ptr=0;
  uint64_t __temp822v__dat__pos=0;
  uint64_t __temp822v__dat__length=0;
  char __temp822v__dat__first=0;
  char __temp823v__=0;
  char __temp824v__=0;
  char __temp825v=0;
  uint64_t __temp826v__=0;
  uint64_t new_length=0;
  uint64_t __temp827v=0;
  char __temp828v__=0;
  char new_first=0;
  char* __temp829v__=0;
  char __temp830v__value=0;
  uint64_t __temp831v__=0;
  char* __temp832v__unsafe_ptr=0;
  uint64_t __temp832v__dat__pos=0;
  uint64_t __temp832v__dat__length=0;
  char __temp832v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp628v(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__temp819v__unsafe_ptr,&__temp819v__dat__pos,&__temp819v__dat__length,&__temp819v__dat__first);
  s__unsafe_ptr=__temp819v__unsafe_ptr;
  s__dat__pos=__temp819v__dat__pos;
  s__dat__length=__temp819v__dat__length;
  s__dat__first=__temp819v__dat__first;
  eq__temp118v(from,to,&__temp820v__);
  if(__temp820v__){
  __temp_errcode=str__temp635v(__temp821v,&__temp822v__unsafe_ptr,&__temp822v__dat__pos,&__temp822v__dat__length,&__temp822v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  }
  lt__temp247v(from,to,&__temp823v__);
  if(!__temp823v__){
  gt__temp271v(to,s__dat__length,&__temp824v__);
  __temp825v=__temp824v__;
  }
  if(__temp825v){
  __temp_errcode=19;
  goto __temp_failure;
  }
  __temp_errcode=sub__temp347v(to,from,&__temp826v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new_length=__temp826v__;
  __temp827v=0;
  neq__temp142v(from,__temp827v,&__temp828v__);
  if(__temp828v__){
  get__temp779v(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__temp829v__);
  if(!__temp829v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp830v__value,__temp829v__,1);
  new_first=__temp830v__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__temp170v(s__dat__pos,from,&__temp831v__);
  str__temp593v(s__unsafe_ptr,__temp831v__,new_length,new_first,&__temp832v__unsafe_ptr,&__temp832v__dat__pos,&__temp832v__dat__length,&__temp832v__dat__first);
  __temp822v__unsafe_ptr=__temp832v__unsafe_ptr;
  __temp822v__dat__pos=__temp832v__dat__pos;
  __temp822v__dat__length=__temp832v__dat__length;
  __temp822v__dat__first=__temp832v__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1865v=__temp822v__unsafe_ptr;
  *__temp1866v=__temp822v__dat__pos;
  *__temp1867v=__temp822v__dat__length;
  *__temp1868v=__temp822v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp647v(char x, char y, char* __temp1869v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1869v=z;
}

static inline __attribute__((always_inline)) void eq__temp783v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1870v) {
  uint64_t __temp784v__=0;
  uint64_t n=0;
  uint64_t __temp785v__=0;
  char __temp786v__=0;
  char __temp787v=0;
  char __temp788v__=0;
  char __temp789v=0;
  char z=0;
  len__temp643v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp784v__);
  n=__temp784v__;
  len__temp643v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp785v__);
  neq__temp142v(n,__temp785v__,&__temp786v__);
  if(__temp786v__){
  __temp787v=0;
  goto __temp_return;
  }
  neq__temp647v(x__dat__first,y__dat__first,&__temp788v__);
  if(__temp788v__){
  __temp789v=0;
  __temp787v=__temp789v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp787v=z;
  goto __temp_return;
  __temp_return:
  *__temp1870v=__temp787v;
}

static inline __attribute__((always_inline)) int ends_with__temp897v(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __temp1871v) {
  char* __temp898v__unsafe_ptr=0;
  uint64_t __temp898v__dat__pos=0;
  uint64_t __temp898v__dat__length=0;
  char __temp898v__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __temp899v__unsafe_ptr=0;
  uint64_t __temp899v__dat__pos=0;
  uint64_t __temp899v__dat__length=0;
  char __temp899v__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __temp900v__=0;
  char __temp901v=0;
  uint64_t __temp902v__=0;
  uint64_t n=0;
  uint64_t __temp903v__=0;
  uint64_t __temp904v__=0;
  char* __temp905v__unsafe_ptr=0;
  uint64_t __temp905v__dat__pos=0;
  uint64_t __temp905v__dat__length=0;
  char __temp905v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __temp906v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp628v(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__temp898v__unsafe_ptr,&__temp898v__dat__pos,&__temp898v__dat__length,&__temp898v__dat__first);
  stack__unsafe_ptr=__temp898v__unsafe_ptr;
  stack__dat__pos=__temp898v__dat__pos;
  stack__dat__length=__temp898v__dat__length;
  stack__dat__first=__temp898v__dat__first;
  __temp_errcode=str__temp635v(_needle,&__temp899v__unsafe_ptr,&__temp899v__dat__pos,&__temp899v__dat__length,&__temp899v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  needle__unsafe_ptr=__temp899v__unsafe_ptr;
  needle__dat__pos=__temp899v__dat__pos;
  needle__dat__length=__temp899v__dat__length;
  needle__dat__first=__temp899v__dat__first;
  lt__temp247v(stack__dat__length,needle__dat__length,&__temp900v__);
  if(__temp900v__){
  __temp901v=0;
  goto __temp_return;
  }
  len__temp643v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__temp902v__);
  n=__temp902v__;
  len__temp643v(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp903v__);
  __temp_errcode=sub__temp347v(n,__temp903v__,&__temp904v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=slice__temp818v(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__temp904v__,n,&__temp905v__unsafe_ptr,&__temp905v__dat__pos,&__temp905v__dat__length,&__temp905v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  ret__unsafe_ptr=__temp905v__unsafe_ptr;
  ret__dat__pos=__temp905v__dat__pos;
  ret__dat__length=__temp905v__dat__length;
  ret__dat__first=__temp905v__dat__first;
  eq__temp783v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__temp906v__);
  __temp901v=__temp906v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1871v=__temp901v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp718v(char** __temp1872v, uint64_t* __temp1873v, uint16_t* __temp1874v, uint16_t* __temp1875v, uint64_t* __temp1876v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1877v, uint64_t* __temp1878v, uint64_t* __temp1879v, char* __temp1880v) {
  char* buf__unsafe_ptr=*__temp1872v;
  uint64_t buf__unsafe_size=*__temp1873v;
  uint16_t buf__unsafe_offset=*__temp1874v;
  uint16_t buf__unsafe_align=*__temp1875v;
  uint64_t pos=*__temp1876v;
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
  str__temp628v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp719v__unsafe_ptr,&__temp719v__dat__pos,&__temp719v__dat__length,&__temp719v__dat__first);
  other__unsafe_ptr=__temp719v__unsafe_ptr;
  other__dat__pos=__temp719v__dat__pos;
  other__dat__length=__temp719v__dat__length;
  other__dat__first=__temp719v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp720v__);
  add__temp170v(pos,__temp720v__,&__temp721v__);
  null_pos=__temp721v__;
  __temp722v=1;
  add__temp170v(null_pos,__temp722v,&__temp723v__);
  next_pos=__temp723v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp724v__);
  gt__temp271v(next_pos,__temp724v__,&__temp725v__);
  if(__temp725v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+null_pos;
  *endpos=0;
  __temp726v=0;
  add__temp170v(pos,__temp726v,&__temp727v__);
  prev_pos=__temp727v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp728v__unsafe_ptr,&__temp728v__dat__pos,&__temp728v__dat__length,&__temp728v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1872v=buf__unsafe_ptr;
  *__temp1873v=buf__unsafe_size;
  *__temp1874v=buf__unsafe_offset;
  *__temp1875v=buf__unsafe_align;
  *__temp1876v=pos;
  *__temp1877v=__temp728v__unsafe_ptr;
  *__temp1878v=__temp728v__dat__pos;
  *__temp1879v=__temp728v__dat__length;
  *__temp1880v=__temp728v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void endpos__temp698v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1881v) {
  uint64_t __temp699v__=0;
  add__temp170v(s__dat__pos,s__dat__length,&__temp699v__);
  goto __temp_return;
  __temp_return:
  *__temp1881v=__temp699v__;
}

static inline __attribute__((always_inline)) void true__temp11v(int* __temp1882v) {
  int value=0;
  *__temp1882v=value;
}

static inline __attribute__((always_inline)) void not__temp37v(int __temp_anon0, int* __temp1883v) {
  int __temp38v__=0;
  true__temp11v(&__temp38v__);
  goto __temp_return;
  __temp_return:
  *__temp1883v=__temp38v__;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t length, char** __temp1884v, uint64_t* __temp1885v, uint64_t* __temp1886v, char* __temp1887v) {
  int __temp606v=0;
  int __temp607v=0;
  int __temp608v__=0;
  uint64_t __temp609v__=0;
  char __temp610v__=0;
  uint64_t __temp611v=0;
  uint64_t __temp612v=0;
  char* __temp613v__=0;
  char __temp614v__value=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__dat__pos=0;
  uint64_t __temp615v__dat__length=0;
  char __temp615v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  not__temp37v(__temp607v,&__temp608v__);
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp609v__);
  gt__temp271v(length,__temp609v__,&__temp610v__);
  if(__temp610v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  __temp611v=0;
  __temp612v=0;
  __temp_errcode=get__temp548v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp612v,&__temp613v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp613v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp614v__value,__temp613v__,1);
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp611v,length,__temp614v__value,&__temp615v__unsafe_ptr,&__temp615v__dat__pos,&__temp615v__dat__length,&__temp615v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1884v=__temp615v__unsafe_ptr;
  *__temp1885v=__temp615v__dat__pos;
  *__temp1886v=__temp615v__dat__length;
  *__temp1887v=__temp615v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int copy_null_terminated__temp662v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1888v, uint64_t* __temp1889v, uint64_t* __temp1890v, char* __temp1891v) {
  uint64_t __temp663v=0;
  uint64_t __temp664v__=0;
  uint64_t __temp665v__=0;
  char* __temp666v__unsafe_ptr=0;
  uint64_t __temp666v__unsafe_size=0;
  uint16_t __temp666v__unsafe_offset=0;
  uint16_t __temp666v__unsafe_align=0;
  char __temp667v____temp562v____temp470v__=0;
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
  __temp663v=1;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp664v__);
  add__temp170v(__temp663v,__temp664v__,&__temp665v__);
  __temp_errcode=alloc__temp556v(__temp665v__,&__temp666v__unsafe_ptr,&__temp666v__unsafe_size,&__temp666v__unsafe_offset,&__temp666v__unsafe_align);
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
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp668v,other__dat__length,other__dat__first,&__temp669v__unsafe_ptr,&__temp669v__dat__pos,&__temp669v__dat__length,&__temp669v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp669v__unsafe_ptr,&__temp667v____temp562v____temp470v__);
  if(__temp667v____temp562v____temp470v__){
  __temp666v__unsafe_size=0;
  __temp666v__unsafe_size=__temp666v__unsafe_size;
  free__temp461v(&__temp669v__unsafe_ptr);
  }
  __temp_return:
  *__temp1888v=__temp669v__unsafe_ptr;
  *__temp1889v=__temp669v__dat__pos;
  *__temp1890v=__temp669v__dat__length;
  *__temp1891v=__temp669v__dat__first;
  
  return __temp_errcode;
}

int temporary_cstr__temp670v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __temp1892v, char** __temp1893v, uint64_t* __temp1894v, uint64_t* __temp1895v, char* __temp1896v) {
  char* __temp671v__unsafe_ptr=0;
  uint64_t __temp671v__dat__pos=0;
  uint64_t __temp671v__dat__length=0;
  char __temp671v__dat__first=0;
  char __temp672v____temp667v____temp562v____temp470v__=0;
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
  __temp_errcode=copy_null_terminated__temp662v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp671v__unsafe_ptr,&__temp671v__dat__pos,&__temp671v__dat__length,&__temp671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  str__unsafe_ptr=__temp671v__unsafe_ptr;
  str__dat__pos=__temp671v__dat__pos;
  str__dat__length=__temp671v__dat__length;
  str__dat__first=__temp671v__dat__first;
  add__temp463v(str__unsafe_ptr,str__dat__pos,&__temp673v__);
  _ret=__temp673v__;
  cstr=_ret;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(str__unsafe_ptr,&__temp672v____temp667v____temp562v____temp470v__);
  if(__temp672v____temp667v____temp562v____temp470v__){
  __temp672v____temp666v__unsafe_size=0;
  __temp672v____temp666v__unsafe_size=__temp672v____temp666v__unsafe_size;
  free__temp461v(&str__unsafe_ptr);
  }
  __temp_return:
  *__temp1892v=cstr;
  *__temp1893v=str__unsafe_ptr;
  *__temp1894v=str__dat__pos;
  *__temp1895v=str__dat__length;
  *__temp1896v=str__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void popen__temp1252v(const char* cmd, char** __temp1897v) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __temp_return;
  __temp_return:
  *__temp1897v=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__temp1251v(char* unsafe_ptr, int64_t* __temp1898v) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __temp_return;
  __temp_return:
  *__temp1898v=status;
}

static inline __attribute__((always_inline)) void int__temp395v(uint64_t x, int64_t* __temp1899v) {
  int64_t z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1899v=z;
}

static inline __attribute__((always_inline)) void is_different__temp81v(int64_t x, int64_t y, int* __temp1900v) {
  int __temp82v=0;
  int __temp83v__=0;
  not__temp35v(__temp82v,&__temp83v__);
  goto __temp_return;
  __temp_return:
  *__temp1900v=__temp83v__;
}

static inline __attribute__((always_inline)) void neq__temp131v(int64_t x, int64_t y, char* __temp1901v) {
  int __temp132v__=0;
  char z=0;
  is_different__temp81v(x,y,&__temp132v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1901v=z;
}

static inline __attribute__((always_inline)) int read__temp1253v(const char* cmd, char** __temp1902v) {
  char* __temp1254v__=0;
  char* unsafe_ptr=0;
  char __temp1255v__=0;
  char __temp1256v__=0;
  char __temp1257v__=0;
  int64_t __temp1258v__=0;
  int64_t status=0;
  uint64_t __temp1259v=0;
  int64_t __temp1260v__=0;
  char __temp1261v__=0;
  char __temp1262v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  popen__temp1252v(cmd,&__temp1254v__);
  unsafe_ptr=__temp1254v__;
  exists__temp412v(unsafe_ptr,&__temp1255v__);
  not__temp26v(__temp1255v__,&__temp1256v__);
  if(__temp1256v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(unsafe_ptr,&__temp1257v__);
  if(__temp1257v__){
  pclose__temp1251v(unsafe_ptr,&__temp1258v__);
  status=__temp1258v__;
  unsafe_ptr=0;
  __temp1259v=0;
  int__temp395v(__temp1259v,&__temp1260v__);
  neq__temp131v(status,__temp1260v__,&__temp1261v__);
  if(__temp1261v__){
  __temp_complain=33;
  __temp1262v=__temp1262v==0;
  }
  }
  __temp_return:
  *__temp1902v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int read__temp1264v(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __temp1903v) {
  const char* __temp1265v__cstr=0;
  char* __temp1265v__str__unsafe_ptr=0;
  uint64_t __temp1265v__str__dat__pos=0;
  uint64_t __temp1265v__str__dat__length=0;
  char __temp1265v__str__dat__first=0;
  char __temp1266v____temp672v____temp667v____temp562v____temp470v__=0;
  uint64_t __temp1266v____temp672v____temp666v__unsafe_size=0;
  char* __temp1267v__unsafe_ptr=0;
  char __temp1268v____temp1257v__=0;
  int64_t __temp1268v____temp1258v__=0;
  int64_t __temp1268v__status=0;
  uint64_t __temp1268v____temp1259v=0;
  int64_t __temp1268v____temp1260v__=0;
  char __temp1268v____temp1261v__=0;
  char __temp1268v____temp1262v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=temporary_cstr__temp670v(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__temp1265v__cstr,&__temp1265v__str__unsafe_ptr,&__temp1265v__str__dat__pos,&__temp1265v__str__dat__length,&__temp1265v__str__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1253v(__temp1265v__cstr,&__temp1267v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1267v__unsafe_ptr,&__temp1268v____temp1257v__);
  if(__temp1268v____temp1257v__){
  pclose__temp1251v(__temp1267v__unsafe_ptr,&__temp1268v____temp1258v__);
  __temp1268v__status=__temp1268v____temp1258v__;
  __temp1267v__unsafe_ptr=0;
  __temp1268v____temp1259v=0;
  int__temp395v(__temp1268v____temp1259v,&__temp1268v____temp1260v__);
  neq__temp131v(__temp1268v__status,__temp1268v____temp1260v__,&__temp1268v____temp1261v__);
  if(__temp1268v____temp1261v__){
  __temp_complain=33;
  __temp1268v____temp1262v=__temp1268v____temp1262v==0;
  }
  }
  __temp_return:
  *__temp1903v=__temp1267v__unsafe_ptr;
  exists__temp412v(__temp1265v__str__unsafe_ptr,&__temp1266v____temp672v____temp667v____temp562v____temp470v__);
  if(__temp1266v____temp672v____temp667v____temp562v____temp470v__){
  __temp1266v____temp672v____temp666v__unsafe_size=0;
  __temp1266v____temp672v____temp666v__unsafe_size=__temp1266v____temp672v____temp666v__unsafe_size;
  free__temp461v(&__temp1265v__str__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1243v(int64_t value, const char** __temp1904v) {
  int __temp1244v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1904v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int run__temp1740v(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first) {
  char* __temp1741v__unsafe_ptr=0;
  char __temp1742v____temp1268v____temp1257v__=0;
  int64_t __temp1742v____temp1268v____temp1258v__=0;
  int64_t __temp1742v____temp1268v__status=0;
  uint64_t __temp1742v____temp1268v____temp1259v=0;
  int64_t __temp1742v____temp1268v____temp1260v__=0;
  char __temp1742v____temp1268v____temp1261v__=0;
  char __temp1742v____temp1268v____temp1262v=0;
  char* __temp1743v__unsafe_ptr=0;
  char* proc__unsafe_ptr=0;
  uint64_t __temp1744v=0;
  uint64_t __temp1745v__=0;
  char* __temp1746v__unsafe_ptr=0;
  uint64_t __temp1746v__unsafe_size=0;
  uint16_t __temp1746v__unsafe_offset=0;
  uint16_t __temp1746v__unsafe_align=0;
  char __temp1747v____temp562v____temp470v__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  char __temp1748v=0;
  int64_t __temp1749v=0;
  int64_t error=0;
  const char* __temp1750v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=read__temp1264v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__temp1741v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1743v__unsafe_ptr=__temp1741v__unsafe_ptr;
  proc__unsafe_ptr=__temp1743v__unsafe_ptr;
  __temp1744v=4;
  KB__temp443v(__temp1744v,&__temp1745v__);
  __temp_errcode=alloc__temp556v(__temp1745v__,&__temp1746v__unsafe_ptr,&__temp1746v__unsafe_size,&__temp1746v__unsafe_offset,&__temp1746v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mem__unsafe_ptr=__temp1746v__unsafe_ptr;
  mem__unsafe_size=__temp1746v__unsafe_size;
  mem__unsafe_offset=__temp1746v__unsafe_offset;
  mem__unsafe_align=__temp1746v__unsafe_align;
  exists__temp412v(__temp1741v__unsafe_ptr,&__temp1742v____temp1268v____temp1257v__);
  if(__temp1742v____temp1268v____temp1257v__){
  pclose__temp1251v(__temp1741v__unsafe_ptr,&__temp1742v____temp1268v____temp1258v__);
  __temp1742v____temp1268v__status=__temp1742v____temp1268v____temp1258v__;
  __temp1741v__unsafe_ptr=0;
  __temp1742v____temp1268v____temp1259v=0;
  int__temp395v(__temp1742v____temp1268v____temp1259v,&__temp1742v____temp1268v____temp1260v__);
  neq__temp131v(__temp1742v____temp1268v__status,__temp1742v____temp1268v____temp1260v__,&__temp1742v____temp1268v____temp1261v__);
  if(__temp1742v____temp1268v____temp1261v__){
  __temp_complain=33;
  __temp1742v____temp1268v____temp1262v=__temp1742v____temp1268v____temp1262v==0;
  }
  }
  __temp1749v=__temp_complain;
  __temp1748v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1749v;
  __temp1748v=__temp1748v==0;
  if(__temp1748v){
  cstr__temp1243v(error,&__temp1750v__);
  print__temp363v(__temp1750v__);
  }
  
  __temp_failure:exists__temp412v(__temp1746v__unsafe_ptr,&__temp1747v____temp562v____temp470v__);
  if(__temp1747v____temp562v____temp470v__){
  __temp1746v__unsafe_size=0;
  __temp1746v__unsafe_size=__temp1746v__unsafe_size;
  free__temp461v(&__temp1746v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1752v() {
  const char* path=0;
  uint64_t __temp1754v=0;
  char* __temp1755v__unsafe_ptr=0;
  uint64_t __temp1755v__unsafe_size=0;
  uint16_t __temp1755v__unsafe_offset=0;
  uint16_t __temp1755v__unsafe_align=0;
  char __temp1756v____temp562v____temp470v__=0;
  char* __temp1757v__buf__unsafe_ptr=0;
  uint64_t __temp1757v__buf__unsafe_size=0;
  uint16_t __temp1757v__buf__unsafe_offset=0;
  uint16_t __temp1757v__buf__unsafe_align=0;
  uint64_t __temp1757v__pos=0;
  char* bp__buf__unsafe_ptr=0;
  uint64_t bp__buf__unsafe_size=0;
  uint16_t bp__buf__unsafe_offset=0;
  uint16_t bp__buf__unsafe_align=0;
  uint64_t bp__pos=0;
  char* __temp1759v__unsafe_ptr=0;
  uint64_t __temp1759v__dat__pos=0;
  uint64_t __temp1759v__dat__length=0;
  char __temp1759v__dat__first=0;
  char* __temp1760v__unsafe_ptr=0;
  uint64_t __temp1760v__dat__pos=0;
  uint64_t __temp1760v__dat__length=0;
  char __temp1760v__dat__first=0;
  char* __temp1761v__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __temp1763v=0;
  uint64_t __temp1764v__=0;
  char* __temp1765v__unsafe_ptr=0;
  uint64_t __temp1765v__unsafe_size=0;
  uint16_t __temp1765v__unsafe_offset=0;
  uint16_t __temp1765v__unsafe_align=0;
  char __temp1766v____temp562v____temp470v__=0;
  char* proc_buf__unsafe_ptr=0;
  uint64_t proc_buf__unsafe_size=0;
  uint16_t proc_buf__unsafe_offset=0;
  uint16_t proc_buf__unsafe_align=0;
  char __temp1767v=0;
  char* __temp1768v__unsafe_ptr=0;
  uint64_t __temp1768v__dat__pos=0;
  uint64_t __temp1768v__dat__length=0;
  char __temp1768v__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __temp1770v__=0;
  char __temp1771v__=0;
  char* __temp1772v__buf__unsafe_ptr=0;
  uint64_t __temp1772v__buf__unsafe_size=0;
  uint16_t __temp1772v__buf__unsafe_offset=0;
  uint16_t __temp1772v__buf__unsafe_align=0;
  uint64_t __temp1772v__pos=0;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__dat__pos=0;
  uint64_t __temp1773v__dat__length=0;
  char __temp1773v__dat__first=0;
  char* __temp1774v__unsafe_ptr=0;
  uint64_t __temp1774v__dat__pos=0;
  uint64_t __temp1774v__dat__length=0;
  char __temp1774v__dat__first=0;
  uint64_t __temp1775v__=0;
  char* __temp1776v__unsafe_ptr=0;
  uint64_t __temp1776v__dat__pos=0;
  uint64_t __temp1776v__dat__length=0;
  char __temp1776v__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  path=__temp1753v;
  __temp1754v=256;
  __temp_errcode=alloc__temp556v(__temp1754v,&__temp1755v__unsafe_ptr,&__temp1755v__unsafe_size,&__temp1755v__unsafe_offset,&__temp1755v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1755v__unsafe_ptr,&__temp1755v__unsafe_size,&__temp1755v__unsafe_offset,&__temp1755v__unsafe_align,&__temp1757v__buf__unsafe_ptr,&__temp1757v__buf__unsafe_size,&__temp1757v__buf__unsafe_offset,&__temp1757v__buf__unsafe_align,&__temp1757v__pos);
  bp__buf__unsafe_ptr=__temp1757v__buf__unsafe_ptr;
  bp__buf__unsafe_size=__temp1757v__buf__unsafe_size;
  bp__buf__unsafe_offset=__temp1757v__buf__unsafe_offset;
  bp__buf__unsafe_align=__temp1757v__buf__unsafe_align;
  bp__pos=__temp1757v__pos;
  __temp_errcode=copy__temp709v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,__temp1758v,&__temp1759v__unsafe_ptr,&__temp1759v__dat__pos,&__temp1759v__dat__length,&__temp1759v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp709v(&bp__buf__unsafe_ptr,&bp__buf__unsafe_size,&bp__buf__unsafe_offset,&bp__buf__unsafe_align,&bp__pos,path,&__temp1760v__unsafe_ptr,&__temp1760v__dat__pos,&__temp1760v__dat__length,&__temp1760v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=read__temp1650v(path,&__temp1761v__unsafe_ptr);
  if(__temp_errcode){
  goto __temp_failure;
  }
  test_dir__unsafe_ptr=__temp1761v__unsafe_ptr;
  __temp1763v=4;
  KB__temp443v(__temp1763v,&__temp1764v__);
  __temp_errcode=alloc__temp556v(__temp1764v__,&__temp1765v__unsafe_ptr,&__temp1765v__unsafe_size,&__temp1765v__unsafe_offset,&__temp1765v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  proc_buf__unsafe_ptr=__temp1765v__unsafe_ptr;
  proc_buf__unsafe_size=__temp1765v__unsafe_size;
  proc_buf__unsafe_offset=__temp1765v__unsafe_offset;
  proc_buf__unsafe_align=__temp1765v__unsafe_align;
  while(1){
  __temp_complain=entry__temp1665v(&test_dir__unsafe_ptr,&__temp1768v__unsafe_ptr,&__temp1768v__dat__pos,&__temp1768v__dat__length,&__temp1768v__dat__first);
  __temp1767v=__temp_complain;
  entry__unsafe_ptr=__temp1768v__unsafe_ptr;
  entry__dat__pos=__temp1768v__dat__pos;
  entry__dat__length=__temp1768v__dat__length;
  entry__dat__first=__temp1768v__dat__first;
  __temp1767v=__temp1767v==0;
  if(!__temp1767v){
  break;
  }
  __temp_errcode=ends_with__temp897v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__temp1769v,&__temp1770v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  not__temp26v(__temp1770v__,&__temp1771v__);
  if(__temp1771v__){
  continue;
  }
  __temp1772v__buf__unsafe_ptr=bp__buf__unsafe_ptr;
  __temp1772v__buf__unsafe_size=bp__buf__unsafe_size;
  __temp1772v__buf__unsafe_offset=bp__buf__unsafe_offset;
  __temp1772v__buf__unsafe_align=bp__buf__unsafe_align;
  __temp1772v__pos=bp__pos;
  str__temp628v(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__temp1773v__unsafe_ptr,&__temp1773v__dat__pos,&__temp1773v__dat__length,&__temp1773v__dat__first);
  __temp_errcode=copy_null_terminated__temp718v(&__temp1772v__buf__unsafe_ptr,&__temp1772v__buf__unsafe_size,&__temp1772v__buf__unsafe_offset,&__temp1772v__buf__unsafe_align,&__temp1772v__pos,__temp1773v__unsafe_ptr,__temp1773v__dat__pos,__temp1773v__dat__length,__temp1773v__dat__first,&__temp1774v__unsafe_ptr,&__temp1774v__dat__pos,&__temp1774v__dat__length,&__temp1774v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  endpos__temp698v(__temp1774v__unsafe_ptr,__temp1774v__dat__pos,__temp1774v__dat__length,__temp1774v__dat__first,&__temp1775v__);
  __temp_errcode=str__temp605v(bp__buf__unsafe_ptr,bp__buf__unsafe_size,bp__buf__unsafe_offset,bp__buf__unsafe_align,__temp1775v__,&__temp1776v__unsafe_ptr,&__temp1776v__dat__pos,&__temp1776v__dat__length,&__temp1776v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  command__unsafe_ptr=__temp1776v__unsafe_ptr;
  command__dat__pos=__temp1776v__dat__pos;
  command__dat__length=__temp1776v__dat__length;
  command__dat__first=__temp1776v__dat__first;
  print__temp742v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __temp_errcode=run__temp1740v(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  }
  
  __temp_failure:exists__temp412v(__temp1765v__unsafe_ptr,&__temp1766v____temp562v____temp470v__);
  if(__temp1766v____temp562v____temp470v__){
  __temp1765v__unsafe_size=0;
  __temp1765v__unsafe_size=__temp1765v__unsafe_size;
  free__temp461v(&__temp1765v__unsafe_ptr);
  }
  closedir__temp1649v(__temp1761v__unsafe_ptr);
  exists__temp412v(__temp1755v__unsafe_ptr,&__temp1756v____temp562v____temp470v__);
  if(__temp1756v____temp562v____temp470v__){
  __temp1755v__unsafe_size=0;
  __temp1755v__unsafe_size=__temp1755v__unsafe_size;
  free__temp461v(&__temp1755v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1752v();return 0;}