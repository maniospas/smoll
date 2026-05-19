#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1783v="hello";
const char* const __temp1788v="manio";
const char* const __temp365v="\n";
const char* const __temp1785v="hello world!";
const char* const __temp1790v="it's a me, manio.";
static const char* __temp_all_errcodes[35] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1816v) {
  int value=0;
  *__temp1816v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1817v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1817v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1818v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1818v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1819v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1819v=z;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1820v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1820v=__temp446v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp559v(char** __temp1821v, uint64_t* __temp1822v, uint16_t* __temp1823v, uint16_t* __temp1824v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1821v=unsafe_ptr;
  *__temp1822v=unsafe_size;
  *__temp1823v=unsafe_offset;
  *__temp1824v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1825v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1825v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1826v) {
  char* allocated=*__temp1826v;
  if(allocated){
  free(allocated);
  }
  *__temp1826v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1827v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1827v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1828v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1828v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1829v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1829v=value;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1830v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1830v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1831v) {
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
  *__temp1831v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1832v, uint64_t* __temp1833v, uint16_t* __temp1834v, uint16_t* __temp1835v, uint64_t size, char** __temp1836v, uint64_t* __temp1837v, uint16_t* __temp1838v, uint16_t* __temp1839v) {
  char* buffer__unsafe_ptr=*__temp1832v;
  uint64_t buffer__unsafe_size=*__temp1833v;
  uint16_t buffer__unsafe_offset=*__temp1834v;
  uint16_t buffer__unsafe_align=*__temp1835v;
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
  *__temp1832v=buffer__unsafe_ptr;
  *__temp1833v=buffer__unsafe_size;
  *__temp1834v=buffer__unsafe_offset;
  *__temp1835v=buffer__unsafe_align;
  *__temp1836v=__temp485v__unsafe_ptr;
  *__temp1837v=__temp485v__unsafe_size;
  *__temp1838v=__temp485v__unsafe_offset;
  *__temp1839v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

int alloc__temp558v(uint64_t size, char** __temp1840v, uint64_t* __temp1841v, uint16_t* __temp1842v, uint16_t* __temp1843v) {
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
  *__temp1840v=__temp563v__unsafe_ptr;
  *__temp1841v=__temp563v__unsafe_size;
  *__temp1842v=__temp563v__unsafe_offset;
  *__temp1843v=__temp563v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp678v(char** __temp1844v, uint64_t* __temp1845v, uint16_t* __temp1846v, uint16_t* __temp1847v, char** __temp1848v, uint64_t* __temp1849v, uint16_t* __temp1850v, uint16_t* __temp1851v, uint64_t* __temp1852v) {
  char* buf__unsafe_ptr=*__temp1844v;
  uint64_t buf__unsafe_size=*__temp1845v;
  uint16_t buf__unsafe_offset=*__temp1846v;
  uint16_t buf__unsafe_align=*__temp1847v;
  uint64_t __temp679v=0;
  uint64_t __temp680v=0;
  uint64_t pos=0;
  __temp679v=0;
  __temp680v=__temp679v;
  pos=__temp680v;
  goto __temp_return;
  __temp_return:
  *__temp1844v=buf__unsafe_ptr;
  *__temp1845v=buf__unsafe_size;
  *__temp1846v=buf__unsafe_offset;
  *__temp1847v=buf__unsafe_align;
  *__temp1848v=buf__unsafe_ptr;
  *__temp1849v=buf__unsafe_size;
  *__temp1850v=buf__unsafe_offset;
  *__temp1851v=buf__unsafe_align;
  *__temp1852v=pos;
}

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1767v(char** __temp1853v, uint64_t* __temp1854v, uint16_t* __temp1855v, uint16_t* __temp1856v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1853v=unsafe_ptr;
  *__temp1854v=unsafe_size;
  *__temp1855v=unsafe_offset;
  *__temp1856v=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1683v(char** __temp1857v, uint64_t* __temp1858v, uint16_t* __temp1859v, uint16_t* __temp1860v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__temp1857v=unsafe_ptr;
  *__temp1858v=unsafe_size;
  *__temp1859v=unsafe_offset;
  *__temp1860v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1861v) {
  goto __temp_return;
  __temp_return:
  *__temp1861v=buffer__unsafe_size;
}

int strmap__temp1682v(char** __temp1862v, uint64_t* __temp1863v, uint16_t* __temp1864v, uint16_t* __temp1865v, char** __temp1866v, uint64_t* __temp1867v, uint16_t* __temp1868v, uint16_t* __temp1869v, char** __temp1870v, uint64_t* __temp1871v, uint16_t* __temp1872v, uint16_t* __temp1873v) {
  char* values__unsafe_ptr=*__temp1862v;
  uint64_t values__unsafe_size=*__temp1863v;
  uint16_t values__unsafe_offset=*__temp1864v;
  uint16_t values__unsafe_align=*__temp1865v;
  char* __temp1685v__unsafe_ptr=0;
  uint64_t __temp1685v__unsafe_size=0;
  uint16_t __temp1685v__unsafe_offset=0;
  uint16_t __temp1685v__unsafe_align=0;
  char* __temp1686v__unsafe_ptr=0;
  uint64_t __temp1686v__unsafe_size=0;
  uint16_t __temp1686v__unsafe_offset=0;
  uint16_t __temp1686v__unsafe_align=0;
  uint64_t __temp1687v__=0;
  char* __temp1688v__unsafe_ptr=0;
  uint64_t __temp1688v__unsafe_size=0;
  uint16_t __temp1688v__unsafe_offset=0;
  uint16_t __temp1688v__unsafe_align=0;
  char __temp1689v____temp475v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry____temp_buffer____buffer__temp1683v(&__temp1685v__unsafe_ptr,&__temp1685v__unsafe_size,&__temp1685v__unsafe_offset,&__temp1685v__unsafe_align);
  __temp1686v__unsafe_ptr=__temp1685v__unsafe_ptr;
  __temp1686v__unsafe_size=__temp1685v__unsafe_size;
  __temp1686v__unsafe_offset=__temp1685v__unsafe_offset;
  __temp1686v__unsafe_align=__temp1685v__unsafe_align;
  len__temp557v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1687v__);
  __temp_errcode=alloc__temp473v(&__temp1686v__unsafe_ptr,&__temp1686v__unsafe_size,&__temp1686v__unsafe_offset,&__temp1686v__unsafe_align,__temp1687v__,&__temp1688v__unsafe_ptr,&__temp1688v__unsafe_size,&__temp1688v__unsafe_offset,&__temp1688v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1688v__unsafe_ptr;
  keys__unsafe_size=__temp1688v__unsafe_size;
  keys__unsafe_offset=__temp1688v__unsafe_offset;
  keys__unsafe_align=__temp1688v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1689v____temp475v__);
  if(__temp1689v____temp475v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__temp466v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1862v=values__unsafe_ptr;
  *__temp1863v=values__unsafe_size;
  *__temp1864v=values__unsafe_offset;
  *__temp1865v=values__unsafe_align;
  *__temp1866v=keys__unsafe_ptr;
  *__temp1867v=keys__unsafe_size;
  *__temp1868v=keys__unsafe_offset;
  *__temp1869v=keys__unsafe_align;
  *__temp1870v=values__unsafe_ptr;
  *__temp1871v=values__unsafe_size;
  *__temp1872v=values__unsafe_offset;
  *__temp1873v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1874v) {
  *__temp1874v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1875v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1875v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1876v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1876v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1877v) {
  *__temp1877v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1878v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1878v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1879v) {
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
  *__temp1879v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp595v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1880v, uint64_t* __temp1881v, uint64_t* __temp1882v, char* __temp1883v) {
  goto __temp_return;
  __temp_return:
  *__temp1880v=unsafe_ptr;
  *__temp1881v=dat__pos;
  *__temp1882v=dat__length;
  *__temp1883v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp599v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1884v, uint64_t* __temp1885v, uint64_t* __temp1886v, char* __temp1887v) {
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
  *__temp1884v=__temp606v__unsafe_ptr;
  *__temp1885v=__temp606v__dat__pos;
  *__temp1886v=__temp606v__dat__length;
  *__temp1887v=__temp606v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp631v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1888v, uint64_t* __temp1889v, uint64_t* __temp1890v, char* __temp1891v) {
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
  *__temp1888v=__temp636v__unsafe_ptr;
  *__temp1889v=__temp636v__dat__pos;
  *__temp1890v=__temp636v__dat__length;
  *__temp1891v=__temp636v__dat__first;
  
  return __temp_errcode;
}

int str__temp637v(const char* c, char** __temp1892v, uint64_t* __temp1893v, uint64_t* __temp1894v, char* __temp1895v) {
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
  *__temp1892v=__temp644v__unsafe_ptr;
  *__temp1893v=__temp644v__dat__pos;
  *__temp1894v=__temp644v__dat__length;
  *__temp1895v=__temp644v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1301v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1896v, uint64_t* __temp1897v, uint64_t* __temp1898v, char* __temp1899v) {
  goto __temp_return;
  __temp_return:
  *__temp1896v=r__unsafe_ptr;
  *__temp1897v=r__dat__pos;
  *__temp1898v=r__dat__length;
  *__temp1899v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp645v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1900v) {
  goto __temp_return;
  __temp_return:
  *__temp1900v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1305v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1901v) {
  uint64_t __temp1306v=0;
  uint64_t __temp1307v__=0;
  char __temp1308v__=0;
  __temp1306v=0;
  len__temp645v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1307v__);
  eq__temp118v(__temp1306v,__temp1307v__,&__temp1308v__);
  goto __temp_return;
  __temp_return:
  *__temp1901v=__temp1308v__;
}

static inline __attribute__((always_inline)) void raw__temp1299v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1902v, uint64_t* __temp1903v, uint64_t* __temp1904v, char* __temp1905v) {
  goto __temp_return;
  __temp_return:
  *__temp1902v=r__s__unsafe_ptr;
  *__temp1903v=r__s__dat__pos;
  *__temp1904v=r__s__dat__length;
  *__temp1905v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1906v, uint64_t* __temp1907v) {
  int __temp437v=0;
  uint64_t __temp438v=0;
  uint64_t _from=0;
  uint64_t __temp439v=0;
  uint64_t from=0;
  __temp438v=0;
  _from=__temp438v;
  __temp439v=_from;
  from=__temp439v;
  goto __temp_return;
  __temp_return:
  *__temp1906v=from;
  *__temp1907v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1908v, uint64_t r__to, uint64_t* __temp1909v) {
  uint64_t r__from=*__temp1908v;
  char __temp441v__=0;
  uint64_t ret=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp441v__);
  if(__temp441v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp442v=1;
  add__temp170v(ret,__temp442v,&__temp443v__);
  r__from=__temp443v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1908v=r__from;
  *__temp1909v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1910v) {
  goto __temp_return;
  __temp_return:
  *__temp1910v=value;
}

static inline __attribute__((always_inline)) void lshift__temp423v(uint64_t x__value, uint64_t y, uint64_t* __temp1911v) {
  uint64_t z=0;
  uint64_t __temp424v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp424v__value);
  goto __temp_return;
  __temp_return:
  *__temp1911v=__temp424v__value;
}

static inline __attribute__((always_inline)) void nat__temp408v(uint64_t x, uint64_t* __temp1912v) {
  int __temp409v=0;
  int __temp410v=0;
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1912v=value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1913v) {
  uint64_t __temp420v__=0;
  nat__temp408v(x__value,&__temp420v__);
  goto __temp_return;
  __temp_return:
  *__temp1913v=__temp420v__;
}

static inline __attribute__((always_inline)) void get__temp783v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1914v) {
  uint64_t __temp784v__=0;
  char* __temp785v__=0;
  add__temp170v(s__dat__pos,i,&__temp784v__);
  add__temp468v(s__unsafe_ptr,__temp784v__,&__temp785v__);
  goto __temp_return;
  __temp_return:
  *__temp1914v=__temp785v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1915v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1915v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1916v) {
  uint64_t zero=0;
  char __temp224v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  zero=0;
  eq__temp118v(y,zero,&__temp224v__);
  if(__temp224v__){
  __temp_errcode=3;
  goto __temp_failure;
  }
  z=x%y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1916v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1250v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1917v) {
  uint64_t __temp1251v=0;
  uint64_t __temp1252v=0;
  uint64_t h=0;
  uint64_t __temp1253v__=0;
  uint64_t __temp1254v__from=0;
  uint64_t __temp1254v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1255v=0;
  uint64_t __temp1256v__=0;
  uint64_t i=0;
  uint64_t __temp1257v__value=0;
  uint64_t __temp1258v=0;
  uint64_t __temp1259v__value=0;
  uint64_t __temp1260v__=0;
  uint64_t __temp1261v__=0;
  char* __temp1262v__=0;
  char __temp1263v__value=0;
  uint64_t __temp1264v__=0;
  uint64_t __temp1265v__=0;
  uint64_t __temp1266v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1251v=5381;
  __temp1252v=__temp1251v;
  h=__temp1252v;
  len__temp645v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1253v__);
  range__temp436v(__temp1253v__,&__temp1254v__from,&__temp1254v__to);
  iter__from=__temp1254v__from;
  iter__to=__temp1254v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1256v__);
  __temp1255v=__temp_complain;
  i=__temp1256v__;
  __temp1255v=__temp1255v==0;
  if(!__temp1255v){
  break;
  }
  bits__temp413v(h,&__temp1257v__value);
  __temp1258v=5;
  lshift__temp423v(__temp1257v__value,__temp1258v,&__temp1259v__value);
  nat__temp419v(__temp1259v__value,&__temp1260v__);
  add__temp170v(__temp1260v__,h,&__temp1261v__);
  get__temp783v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1262v__);
  if(!__temp1262v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1263v__value,__temp1262v__,1);
  nat__temp411v(__temp1263v__value,&__temp1264v__);
  add__temp170v(__temp1261v__,__temp1264v__,&__temp1265v__);
  h=__temp1265v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1266v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1917v=__temp1266v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1918v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1918v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1919v) {
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
  *__temp1919v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1920v, uint64_t* __temp1921v, uint16_t* __temp1922v, uint16_t* __temp1923v, uint64_t i, char** __temp1924v) {
  char* buffer__unsafe_ptr=*__temp1920v;
  uint64_t buffer__unsafe_size=*__temp1921v;
  uint16_t buffer__unsafe_offset=*__temp1922v;
  uint16_t buffer__unsafe_align=*__temp1923v;
  char __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  char* __temp549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp544v__);
  if(__temp544v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp545v__);
  mul__temp194v(i,__temp545v__,&__temp546v__);
  nat__temp470v(buffer__unsafe_offset,&__temp547v__);
  add__temp170v(__temp546v__,__temp547v__,&__temp548v__);
  add__temp468v(buffer__unsafe_ptr,__temp548v__,&__temp549v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1920v=buffer__unsafe_ptr;
  *__temp1921v=buffer__unsafe_size;
  *__temp1922v=buffer__unsafe_offset;
  *__temp1923v=buffer__unsafe_align;
  *__temp1924v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp649v(char x, char y, char* __temp1925v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1925v=z;
}

static inline __attribute__((always_inline)) void eq__temp787v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1926v) {
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
  *__temp1926v=__temp791v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1927v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1927v=z;
}

int at__temp1581v(char** __temp1928v, uint64_t* __temp1929v, uint16_t* __temp1930v, uint16_t* __temp1931v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1932v) {
  char* data__unsafe_ptr=*__temp1928v;
  uint64_t data__unsafe_size=*__temp1929v;
  uint16_t data__unsafe_offset=*__temp1930v;
  uint16_t data__unsafe_align=*__temp1931v;
  char* __temp1582v__unsafe_ptr=0;
  uint64_t __temp1582v__dat__pos=0;
  uint64_t __temp1582v__dat__length=0;
  char __temp1582v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1583v__=0;
  uint64_t __temp1584v=0;
  uint64_t __temp1585v=0;
  char* __temp1586v__=0;
  char* __temp1587v__s__unsafe_ptr=0;
  uint64_t __temp1587v__s__dat__pos=0;
  uint64_t __temp1587v__s__dat__length=0;
  char __temp1587v__s__dat__first=0;
  uint64_t __temp1587v__cost=0;
  char* __temp1588v__unsafe_ptr=0;
  uint64_t __temp1588v__dat__pos=0;
  uint64_t __temp1588v__dat__length=0;
  char __temp1588v__dat__first=0;
  int __temp1589v=0;
  int __temp1590v__=0;
  uint64_t __temp1591v__=0;
  uint64_t n=0;
  uint64_t __temp1592v__=0;
  uint64_t pos=0;
  uint64_t __temp1593v__from=0;
  uint64_t __temp1593v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1594v=0;
  uint64_t __temp1595v__=0;
  uint64_t i=0;
  uint64_t __temp1596v__=0;
  uint64_t __temp1597v=0;
  uint64_t idx=0;
  char __temp1598v__=0;
  uint64_t __temp1599v__=0;
  uint64_t __temp1600v=0;
  char __temp1601v__=0;
  char* __temp1602v__=0;
  char* __temp1603v__s__unsafe_ptr=0;
  uint64_t __temp1603v__s__dat__pos=0;
  uint64_t __temp1603v__s__dat__length=0;
  char __temp1603v__s__dat__first=0;
  uint64_t __temp1603v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1604v__unsafe_ptr=0;
  uint64_t __temp1604v__dat__pos=0;
  uint64_t __temp1604v__dat__length=0;
  char __temp1604v__dat__first=0;
  char __temp1605v__=0;
  char* __temp1606v__=0;
  char* __temp1607v__unsafe_ptr=0;
  uint64_t __temp1607v__dat__pos=0;
  uint64_t __temp1607v__dat__length=0;
  char __temp1607v__dat__first=0;
  char __temp1608v__=0;
  char __temp1609v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1610v__=0;
  char* __temp1611v__s__unsafe_ptr=0;
  uint64_t __temp1611v__s__dat__pos=0;
  uint64_t __temp1611v__s__dat__length=0;
  char __temp1611v__s__dat__first=0;
  uint64_t __temp1611v__cost=0;
  char* __temp1612v__unsafe_ptr=0;
  uint64_t __temp1612v__dat__pos=0;
  uint64_t __temp1612v__dat__length=0;
  char __temp1612v__dat__first=0;
  char* __temp1613v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1301v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1582v__unsafe_ptr,&__temp1582v__dat__pos,&__temp1582v__dat__length,&__temp1582v__dat__first);
  k__unsafe_ptr=__temp1582v__unsafe_ptr;
  k__dat__pos=__temp1582v__dat__pos;
  k__dat__length=__temp1582v__dat__length;
  k__dat__first=__temp1582v__dat__first;
  is_zero__temp1305v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1583v__);
  if(__temp1583v__){
  __temp1584v=0;
  goto __temp_return;
  }
  __temp1585v=0;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1585v,&__temp1586v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1586v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1587v__s__unsafe_ptr,__temp1586v__,8);
  memcpy(&__temp1587v__s__dat__pos,__temp1586v__+8,8);
  memcpy(&__temp1587v__s__dat__length,__temp1586v__+16,8);
  memcpy(&__temp1587v__s__dat__first,__temp1586v__+24,1);
  memcpy(&__temp1587v__cost,__temp1586v__+25,8);
  raw__temp1299v(__temp1587v__s__unsafe_ptr,__temp1587v__s__dat__pos,__temp1587v__s__dat__length,__temp1587v__s__dat__first,__temp1587v__cost,&__temp1588v__unsafe_ptr,&__temp1588v__dat__pos,&__temp1588v__dat__length,&__temp1588v__dat__first);
  not__temp35v(__temp1589v,&__temp1590v__);
  len__temp557v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1591v__);
  n=__temp1591v__;
  __temp_errcode=hash__temp1250v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1592v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1592v__;
  range__temp436v(n,&__temp1593v__from,&__temp1593v__to);
  iter__from=__temp1593v__from;
  iter__to=__temp1593v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1595v__);
  __temp1594v=__temp_complain;
  i=__temp1595v__;
  __temp1594v=__temp1594v==0;
  if(!__temp1594v){
  break;
  }
  add__temp170v(pos,i,&__temp1596v__);
  __temp1597v=__temp1596v__;
  idx=__temp1597v;
  ge__temp319v(idx,n,&__temp1598v__);
  if(__temp1598v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1599v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1599v__;
  }
  __temp1600v=0;
  eq__temp118v(idx,__temp1600v,&__temp1601v__);
  if(__temp1601v__){
  continue;
  }
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1602v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1602v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1603v__s__unsafe_ptr,__temp1602v__,8);
  memcpy(&__temp1603v__s__dat__pos,__temp1602v__+8,8);
  memcpy(&__temp1603v__s__dat__length,__temp1602v__+16,8);
  memcpy(&__temp1603v__s__dat__first,__temp1602v__+24,1);
  memcpy(&__temp1603v__cost,__temp1602v__+25,8);
  entry__s__unsafe_ptr=__temp1603v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1603v__s__dat__pos;
  entry__s__dat__length=__temp1603v__s__dat__length;
  entry__s__dat__first=__temp1603v__s__dat__first;
  entry__cost=__temp1603v__cost;
  raw__temp1299v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1604v__unsafe_ptr,&__temp1604v__dat__pos,&__temp1604v__dat__length,&__temp1604v__dat__first);
  is_zero__temp1305v(__temp1604v__unsafe_ptr,__temp1604v__dat__pos,__temp1604v__dat__length,__temp1604v__dat__first,&__temp1605v__);
  if(__temp1605v__){
  __temp_errcode=mutget__temp543v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1606v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1606v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1606v__,&k__unsafe_ptr,8);
  memcpy(__temp1606v__+8,&k__dat__pos,8);
  memcpy(__temp1606v__+16,&k__dat__length,8);
  memcpy(__temp1606v__+24,&k__dat__first,1);
  memcpy(__temp1606v__+25,&i,8);
  __temp1584v=idx;
  goto __temp_return;
  }
  raw__temp1299v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1607v__unsafe_ptr,&__temp1607v__dat__pos,&__temp1607v__dat__length,&__temp1607v__dat__first);
  eq__temp787v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1607v__unsafe_ptr,__temp1607v__dat__pos,__temp1607v__dat__length,__temp1607v__dat__first,&__temp1608v__);
  if(__temp1608v__){
  __temp1584v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1609v__);
  if(__temp1609v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1611v__s__unsafe_ptr,__temp1610v__,8);
  memcpy(&__temp1611v__s__dat__pos,__temp1610v__+8,8);
  memcpy(&__temp1611v__s__dat__length,__temp1610v__+16,8);
  memcpy(&__temp1611v__s__dat__first,__temp1610v__+24,1);
  memcpy(&__temp1611v__cost,__temp1610v__+25,8);
  raw__temp1299v(__temp1611v__s__unsafe_ptr,__temp1611v__s__dat__pos,__temp1611v__s__dat__length,__temp1611v__s__dat__first,__temp1611v__cost,&__temp1612v__unsafe_ptr,&__temp1612v__dat__pos,&__temp1612v__dat__length,&__temp1612v__dat__first);
  k__unsafe_ptr=__temp1612v__unsafe_ptr;
  k__dat__pos=__temp1612v__dat__pos;
  k__dat__length=__temp1612v__dat__length;
  k__dat__first=__temp1612v__dat__first;
  __temp_errcode=mutget__temp543v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1613v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1613v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1613v__,&tmp__unsafe_ptr,8);
  memcpy(__temp1613v__+8,&tmp__dat__pos,8);
  memcpy(__temp1613v__+16,&tmp__dat__length,8);
  memcpy(__temp1613v__+24,&tmp__dat__first,1);
  memcpy(__temp1613v__+25,&i,8);
  }
  }
  __temp_errcode=33;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1928v=data__unsafe_ptr;
  *__temp1929v=data__unsafe_size;
  *__temp1930v=data__unsafe_offset;
  *__temp1931v=data__unsafe_align;
  *__temp1932v=__temp1584v;
  
  return __temp_errcode;
}

int mutget__temp1706v(char** __temp1933v, uint64_t* __temp1934v, uint16_t* __temp1935v, uint16_t* __temp1936v, char** __temp1937v, uint64_t* __temp1938v, uint16_t* __temp1939v, uint16_t* __temp1940v, const char* key, char** __temp1941v) {
  char* keys__unsafe_ptr=*__temp1933v;
  uint64_t keys__unsafe_size=*__temp1934v;
  uint16_t keys__unsafe_offset=*__temp1935v;
  uint16_t keys__unsafe_align=*__temp1936v;
  char* values__unsafe_ptr=*__temp1937v;
  uint64_t values__unsafe_size=*__temp1938v;
  uint16_t values__unsafe_offset=*__temp1939v;
  uint16_t values__unsafe_align=*__temp1940v;
  char* __temp1707v__unsafe_ptr=0;
  uint64_t __temp1707v__dat__pos=0;
  uint64_t __temp1707v__dat__length=0;
  char __temp1707v__dat__first=0;
  uint64_t __temp1708v__=0;
  char* __temp1709v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(key,&__temp1707v__unsafe_ptr,&__temp1707v__dat__pos,&__temp1707v__dat__length,&__temp1707v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1581v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1707v__unsafe_ptr,__temp1707v__dat__pos,__temp1707v__dat__length,__temp1707v__dat__first,&__temp1708v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp543v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1708v__,&__temp1709v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1933v=keys__unsafe_ptr;
  *__temp1934v=keys__unsafe_size;
  *__temp1935v=keys__unsafe_offset;
  *__temp1936v=keys__unsafe_align;
  *__temp1937v=values__unsafe_ptr;
  *__temp1938v=values__unsafe_size;
  *__temp1939v=values__unsafe_offset;
  *__temp1940v=values__unsafe_align;
  *__temp1941v=__temp1709v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp630v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1942v, uint64_t* __temp1943v, uint64_t* __temp1944v, char* __temp1945v) {
  goto __temp_return;
  __temp_return:
  *__temp1942v=other__unsafe_ptr;
  *__temp1943v=other__dat__pos;
  *__temp1944v=other__dat__length;
  *__temp1945v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp702v(char** __temp1946v, uint64_t* __temp1947v, uint16_t* __temp1948v, uint16_t* __temp1949v, uint64_t* __temp1950v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1951v, uint64_t* __temp1952v, uint64_t* __temp1953v, char* __temp1954v) {
  char* buf__unsafe_ptr=*__temp1946v;
  uint64_t buf__unsafe_size=*__temp1947v;
  uint16_t buf__unsafe_offset=*__temp1948v;
  uint16_t buf__unsafe_align=*__temp1949v;
  uint64_t pos=*__temp1950v;
  char* __temp703v__unsafe_ptr=0;
  uint64_t __temp703v__dat__pos=0;
  uint64_t __temp703v__dat__length=0;
  char __temp703v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp704v__=0;
  uint64_t __temp705v__=0;
  uint64_t next_pos=0;
  uint64_t __temp706v__=0;
  char __temp707v__=0;
  uint64_t __temp708v=0;
  uint64_t __temp709v__=0;
  uint64_t prev_pos=0;
  char* __temp710v__unsafe_ptr=0;
  uint64_t __temp710v__dat__pos=0;
  uint64_t __temp710v__dat__length=0;
  char __temp710v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp630v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp703v__unsafe_ptr,&__temp703v__dat__pos,&__temp703v__dat__length,&__temp703v__dat__first);
  other__unsafe_ptr=__temp703v__unsafe_ptr;
  other__dat__pos=__temp703v__dat__pos;
  other__dat__length=__temp703v__dat__length;
  other__dat__first=__temp703v__dat__first;
  len__temp645v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp704v__);
  add__temp170v(pos,__temp704v__,&__temp705v__);
  next_pos=__temp705v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp706v__);
  gt__temp271v(next_pos,__temp706v__,&__temp707v__);
  if(__temp707v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp708v=0;
  add__temp170v(pos,__temp708v,&__temp709v__);
  prev_pos=__temp709v__;
  pos=next_pos;
  __temp_errcode=str__temp599v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp710v__unsafe_ptr,&__temp710v__dat__pos,&__temp710v__dat__length,&__temp710v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1946v=buf__unsafe_ptr;
  *__temp1947v=buf__unsafe_size;
  *__temp1948v=buf__unsafe_offset;
  *__temp1949v=buf__unsafe_align;
  *__temp1950v=pos;
  *__temp1951v=__temp710v__unsafe_ptr;
  *__temp1952v=__temp710v__dat__pos;
  *__temp1953v=__temp710v__dat__length;
  *__temp1954v=__temp710v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1724v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1955v, char** __temp1956v, uint64_t* __temp1957v, uint64_t* __temp1958v, char* __temp1959v) {
  uint64_t pos=*__temp1955v;
  uint64_t __temp1725v=0;
  char __temp1726v__=0;
  uint64_t __temp1727v=0;
  uint64_t __temp1728v__=0;
  uint64_t __temp1729v=0;
  char* __temp1730v__=0;
  char* __temp1731v__s__unsafe_ptr=0;
  uint64_t __temp1731v__s__dat__pos=0;
  uint64_t __temp1731v__s__dat__length=0;
  char __temp1731v__s__dat__first=0;
  uint64_t __temp1731v__cost=0;
  char* __temp1732v__unsafe_ptr=0;
  uint64_t __temp1732v__dat__pos=0;
  uint64_t __temp1732v__dat__length=0;
  char __temp1732v__dat__first=0;
  char* __temp1733v__=0;
  char* __temp1734v__s__unsafe_ptr=0;
  uint64_t __temp1734v__s__dat__pos=0;
  uint64_t __temp1734v__s__dat__length=0;
  char __temp1734v__s__dat__first=0;
  uint64_t __temp1734v__cost=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__dat__pos=0;
  uint64_t __temp1735v__dat__length=0;
  char __temp1735v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1736v=0;
  uint64_t __temp1737v__=0;
  char* __temp1738v__unsafe_ptr=0;
  uint64_t __temp1738v__dat__pos=0;
  uint64_t __temp1738v__dat__length=0;
  char __temp1738v__dat__first=0;
  char __temp1739v__=0;
  char* __temp1740v__=0;
  char* __temp1741v__s__unsafe_ptr=0;
  uint64_t __temp1741v__s__dat__pos=0;
  uint64_t __temp1741v__s__dat__length=0;
  char __temp1741v__s__dat__first=0;
  uint64_t __temp1741v__cost=0;
  char* __temp1742v__unsafe_ptr=0;
  uint64_t __temp1742v__dat__pos=0;
  uint64_t __temp1742v__dat__length=0;
  char __temp1742v__dat__first=0;
  uint64_t __temp1743v=0;
  uint64_t __temp1744v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1725v=0;
  eq__temp118v(pos,__temp1725v,&__temp1726v__);
  if(__temp1726v__){
  __temp1727v=1;
  add__temp170v(pos,__temp1727v,&__temp1728v__);
  pos=__temp1728v__;
  __temp1729v=0;
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1729v,&__temp1730v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1730v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1731v__s__unsafe_ptr,__temp1730v__,8);
  memcpy(&__temp1731v__s__dat__pos,__temp1730v__+8,8);
  memcpy(&__temp1731v__s__dat__length,__temp1730v__+16,8);
  memcpy(&__temp1731v__s__dat__first,__temp1730v__+24,1);
  memcpy(&__temp1731v__cost,__temp1730v__+25,8);
  raw__temp1299v(__temp1731v__s__unsafe_ptr,__temp1731v__s__dat__pos,__temp1731v__s__dat__length,__temp1731v__s__dat__first,__temp1731v__cost,&__temp1732v__unsafe_ptr,&__temp1732v__dat__pos,&__temp1732v__dat__length,&__temp1732v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1733v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1733v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1734v__s__unsafe_ptr,__temp1733v__,8);
  memcpy(&__temp1734v__s__dat__pos,__temp1733v__+8,8);
  memcpy(&__temp1734v__s__dat__length,__temp1733v__+16,8);
  memcpy(&__temp1734v__s__dat__first,__temp1733v__+24,1);
  memcpy(&__temp1734v__cost,__temp1733v__+25,8);
  raw__temp1299v(__temp1734v__s__unsafe_ptr,__temp1734v__s__dat__pos,__temp1734v__s__dat__length,__temp1734v__s__dat__first,__temp1734v__cost,&__temp1735v__unsafe_ptr,&__temp1735v__dat__pos,&__temp1735v__dat__length,&__temp1735v__dat__first);
  ret__unsafe_ptr=__temp1735v__unsafe_ptr;
  ret__dat__pos=__temp1735v__dat__pos;
  ret__dat__length=__temp1735v__dat__length;
  ret__dat__first=__temp1735v__dat__first;
  __temp1736v=1;
  add__temp170v(pos,__temp1736v,&__temp1737v__);
  pos=__temp1737v__;
  while(1){
  raw__temp1301v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1738v__unsafe_ptr,&__temp1738v__dat__pos,&__temp1738v__dat__length,&__temp1738v__dat__first);
  is_zero__temp1305v(__temp1738v__unsafe_ptr,__temp1738v__dat__pos,__temp1738v__dat__length,__temp1738v__dat__first,&__temp1739v__);
  if(!__temp1739v__){
  break;
  }
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1740v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1740v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1741v__s__unsafe_ptr,__temp1740v__,8);
  memcpy(&__temp1741v__s__dat__pos,__temp1740v__+8,8);
  memcpy(&__temp1741v__s__dat__length,__temp1740v__+16,8);
  memcpy(&__temp1741v__s__dat__first,__temp1740v__+24,1);
  memcpy(&__temp1741v__cost,__temp1740v__+25,8);
  raw__temp1299v(__temp1741v__s__unsafe_ptr,__temp1741v__s__dat__pos,__temp1741v__s__dat__length,__temp1741v__s__dat__first,__temp1741v__cost,&__temp1742v__unsafe_ptr,&__temp1742v__dat__pos,&__temp1742v__dat__length,&__temp1742v__dat__first);
  ret__unsafe_ptr=__temp1742v__unsafe_ptr;
  ret__dat__pos=__temp1742v__dat__pos;
  ret__dat__length=__temp1742v__dat__length;
  ret__dat__first=__temp1742v__dat__first;
  __temp1743v=1;
  add__temp170v(pos,__temp1743v,&__temp1744v__);
  pos=__temp1744v__;
  }
  __temp1732v__unsafe_ptr=ret__unsafe_ptr;
  __temp1732v__dat__pos=ret__dat__pos;
  __temp1732v__dat__length=ret__dat__length;
  __temp1732v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1955v=pos;
  *__temp1956v=__temp1732v__unsafe_ptr;
  *__temp1957v=__temp1732v__dat__pos;
  *__temp1958v=__temp1732v__dat__length;
  *__temp1959v=__temp1732v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp744v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp745v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1775v(char** __temp1960v, uint64_t* __temp1961v, uint16_t* __temp1962v, uint16_t* __temp1963v, uint64_t* __temp1964v, char** __temp1965v, uint64_t* __temp1966v, uint16_t* __temp1967v, uint16_t* __temp1968v, char** __temp1969v, uint64_t* __temp1970v, uint16_t* __temp1971v, uint16_t* __temp1972v) {
  char* buf__buf__unsafe_ptr=*__temp1960v;
  uint64_t buf__buf__unsafe_size=*__temp1961v;
  uint16_t buf__buf__unsafe_offset=*__temp1962v;
  uint16_t buf__buf__unsafe_align=*__temp1963v;
  uint64_t buf__pos=*__temp1964v;
  char* __temp1776v__unsafe_ptr=0;
  uint64_t __temp1776v__unsafe_size=0;
  uint16_t __temp1776v__unsafe_offset=0;
  uint16_t __temp1776v__unsafe_align=0;
  char* __temp1777v__unsafe_ptr=0;
  uint64_t __temp1777v__unsafe_size=0;
  uint16_t __temp1777v__unsafe_offset=0;
  uint16_t __temp1777v__unsafe_align=0;
  uint64_t __temp1778v=0;
  char* __temp1779v__unsafe_ptr=0;
  uint64_t __temp1779v__unsafe_size=0;
  uint16_t __temp1779v__unsafe_offset=0;
  uint16_t __temp1779v__unsafe_align=0;
  char __temp1780v____temp475v__=0;
  char* __temp1781v__keys__unsafe_ptr=0;
  uint64_t __temp1781v__keys__unsafe_size=0;
  uint16_t __temp1781v__keys__unsafe_offset=0;
  uint16_t __temp1781v__keys__unsafe_align=0;
  char* __temp1781v__values__unsafe_ptr=0;
  uint64_t __temp1781v__values__unsafe_size=0;
  uint16_t __temp1781v__values__unsafe_offset=0;
  uint16_t __temp1781v__values__unsafe_align=0;
  char __temp1782v____temp1689v____temp475v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __temp1784v__=0;
  char* __temp1786v__unsafe_ptr=0;
  uint64_t __temp1786v__dat__pos=0;
  uint64_t __temp1786v__dat__length=0;
  char __temp1786v__dat__first=0;
  char* __temp1787v__unsafe_ptr=0;
  uint64_t __temp1787v__dat__pos=0;
  uint64_t __temp1787v__dat__length=0;
  char __temp1787v__dat__first=0;
  char* __temp1789v__=0;
  char* __temp1791v__unsafe_ptr=0;
  uint64_t __temp1791v__dat__pos=0;
  uint64_t __temp1791v__dat__length=0;
  char __temp1791v__dat__first=0;
  char* __temp1792v__unsafe_ptr=0;
  uint64_t __temp1792v__dat__pos=0;
  uint64_t __temp1792v__dat__length=0;
  char __temp1792v__dat__first=0;
  char* __temp1793v__buf__unsafe_ptr=0;
  uint64_t __temp1793v__buf__unsafe_size=0;
  uint16_t __temp1793v__buf__unsafe_offset=0;
  uint16_t __temp1793v__buf__unsafe_align=0;
  uint64_t __temp1793v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1794v=0;
  char* __temp1795v__unsafe_ptr=0;
  uint64_t __temp1795v__dat__pos=0;
  uint64_t __temp1795v__dat__length=0;
  char __temp1795v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1767v(&__temp1776v__unsafe_ptr,&__temp1776v__unsafe_size,&__temp1776v__unsafe_offset,&__temp1776v__unsafe_align);
  __temp1777v__unsafe_ptr=__temp1776v__unsafe_ptr;
  __temp1777v__unsafe_size=__temp1776v__unsafe_size;
  __temp1777v__unsafe_offset=__temp1776v__unsafe_offset;
  __temp1777v__unsafe_align=__temp1776v__unsafe_align;
  __temp1778v=128;
  __temp_errcode=alloc__temp473v(&__temp1777v__unsafe_ptr,&__temp1777v__unsafe_size,&__temp1777v__unsafe_offset,&__temp1777v__unsafe_align,__temp1778v,&__temp1779v__unsafe_ptr,&__temp1779v__unsafe_size,&__temp1779v__unsafe_offset,&__temp1779v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1682v(&__temp1779v__unsafe_ptr,&__temp1779v__unsafe_size,&__temp1779v__unsafe_offset,&__temp1779v__unsafe_align,&__temp1781v__keys__unsafe_ptr,&__temp1781v__keys__unsafe_size,&__temp1781v__keys__unsafe_offset,&__temp1781v__keys__unsafe_align,&__temp1781v__values__unsafe_ptr,&__temp1781v__values__unsafe_size,&__temp1781v__values__unsafe_offset,&__temp1781v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp1706v(&__temp1781v__keys__unsafe_ptr,&__temp1781v__keys__unsafe_size,&__temp1781v__keys__unsafe_offset,&__temp1781v__keys__unsafe_align,&__temp1781v__values__unsafe_ptr,&__temp1781v__values__unsafe_size,&__temp1781v__values__unsafe_offset,&__temp1781v__values__unsafe_align,__temp1783v,&__temp1784v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp637v(__temp1785v,&__temp1786v__unsafe_ptr,&__temp1786v__dat__pos,&__temp1786v__dat__length,&__temp1786v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp702v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1786v__unsafe_ptr,__temp1786v__dat__pos,__temp1786v__dat__length,__temp1786v__dat__first,&__temp1787v__unsafe_ptr,&__temp1787v__dat__pos,&__temp1787v__dat__length,&__temp1787v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1784v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1784v__,&__temp1787v__unsafe_ptr,8);
  memcpy(__temp1784v__+8,&__temp1787v__dat__pos,8);
  memcpy(__temp1784v__+16,&__temp1787v__dat__length,8);
  memcpy(__temp1784v__+24,&__temp1787v__dat__first,1);
  __temp_errcode=mutget__temp1706v(&__temp1781v__keys__unsafe_ptr,&__temp1781v__keys__unsafe_size,&__temp1781v__keys__unsafe_offset,&__temp1781v__keys__unsafe_align,&__temp1781v__values__unsafe_ptr,&__temp1781v__values__unsafe_size,&__temp1781v__values__unsafe_offset,&__temp1781v__values__unsafe_align,__temp1788v,&__temp1789v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp637v(__temp1790v,&__temp1791v__unsafe_ptr,&__temp1791v__dat__pos,&__temp1791v__dat__length,&__temp1791v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp702v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1791v__unsafe_ptr,__temp1791v__dat__pos,__temp1791v__dat__length,__temp1791v__dat__first,&__temp1792v__unsafe_ptr,&__temp1792v__dat__pos,&__temp1792v__dat__length,&__temp1792v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1789v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1789v__,&__temp1792v__unsafe_ptr,8);
  memcpy(__temp1789v__+8,&__temp1792v__dat__pos,8);
  memcpy(__temp1789v__+16,&__temp1792v__dat__length,8);
  memcpy(__temp1789v__+24,&__temp1792v__dat__first,1);
  bufpos__temp678v(&__temp1781v__keys__unsafe_ptr,&__temp1781v__keys__unsafe_size,&__temp1781v__keys__unsafe_offset,&__temp1781v__keys__unsafe_align,&__temp1793v__buf__unsafe_ptr,&__temp1793v__buf__unsafe_size,&__temp1793v__buf__unsafe_offset,&__temp1793v__buf__unsafe_align,&__temp1793v__pos);
  it__pos=__temp1793v__pos;
  while(1){
  __temp_complain=next__temp1724v(__temp1781v__keys__unsafe_ptr,__temp1781v__keys__unsafe_size,__temp1781v__keys__unsafe_offset,__temp1781v__keys__unsafe_align,&it__pos,&__temp1795v__unsafe_ptr,&__temp1795v__dat__pos,&__temp1795v__dat__length,&__temp1795v__dat__first);
  __temp1794v=__temp_complain;
  key__unsafe_ptr=__temp1795v__unsafe_ptr;
  key__dat__pos=__temp1795v__dat__pos;
  key__dat__length=__temp1795v__dat__length;
  key__dat__first=__temp1795v__dat__first;
  __temp1794v=__temp1794v==0;
  if(!__temp1794v){
  break;
  }
  print__temp744v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__temp1781v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1781v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1781v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1781v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1781v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1781v__values__unsafe_size;
  map__values__unsafe_offset=__temp1781v__values__unsafe_offset;
  map__values__unsafe_align=__temp1781v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1782v____temp1689v____temp475v__);
  if(__temp1782v____temp1689v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1780v____temp475v__);
  if(__temp1780v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1960v=buf__buf__unsafe_ptr;
  *__temp1961v=buf__buf__unsafe_size;
  *__temp1962v=buf__buf__unsafe_offset;
  *__temp1963v=buf__buf__unsafe_align;
  *__temp1964v=buf__pos;
  *__temp1965v=map__keys__unsafe_ptr;
  *__temp1966v=map__keys__unsafe_size;
  *__temp1967v=map__keys__unsafe_offset;
  *__temp1968v=map__keys__unsafe_align;
  *__temp1969v=map__values__unsafe_ptr;
  *__temp1970v=map__values__unsafe_size;
  *__temp1971v=map__values__unsafe_offset;
  *__temp1972v=map__values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1797v(char** __temp1973v, uint64_t* __temp1974v, uint16_t* __temp1975v, uint16_t* __temp1976v, char** __temp1977v, uint64_t* __temp1978v, uint16_t* __temp1979v, uint16_t* __temp1980v, char** __temp1981v, uint64_t* __temp1982v, uint16_t* __temp1983v, uint16_t* __temp1984v, uint64_t* __temp1985v) {
  uint64_t __temp1798v=0;
  uint64_t __temp1799v__=0;
  char* __temp1800v__unsafe_ptr=0;
  uint64_t __temp1800v__unsafe_size=0;
  uint16_t __temp1800v__unsafe_offset=0;
  uint16_t __temp1800v__unsafe_align=0;
  char __temp1801v____temp564v____temp475v__=0;
  char* __temp1802v__buf__unsafe_ptr=0;
  uint64_t __temp1802v__buf__unsafe_size=0;
  uint16_t __temp1802v__buf__unsafe_offset=0;
  uint16_t __temp1802v__buf__unsafe_align=0;
  uint64_t __temp1802v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1803v__keys__unsafe_ptr=0;
  uint64_t __temp1803v__keys__unsafe_size=0;
  uint16_t __temp1803v__keys__unsafe_offset=0;
  uint16_t __temp1803v__keys__unsafe_align=0;
  char* __temp1803v__values__unsafe_ptr=0;
  uint64_t __temp1803v__values__unsafe_size=0;
  uint16_t __temp1803v__values__unsafe_offset=0;
  uint16_t __temp1803v__values__unsafe_align=0;
  char __temp1804v____temp1780v____temp475v__=0;
  char __temp1804v____temp1782v____temp1689v____temp475v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1798v=4;
  KB__temp444v(__temp1798v,&__temp1799v__);
  __temp_errcode=alloc__temp558v(__temp1799v__,&__temp1800v__unsafe_ptr,&__temp1800v__unsafe_size,&__temp1800v__unsafe_offset,&__temp1800v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp678v(&__temp1800v__unsafe_ptr,&__temp1800v__unsafe_size,&__temp1800v__unsafe_offset,&__temp1800v__unsafe_align,&__temp1802v__buf__unsafe_ptr,&__temp1802v__buf__unsafe_size,&__temp1802v__buf__unsafe_offset,&__temp1802v__buf__unsafe_align,&__temp1802v__pos);
  buf__buf__unsafe_ptr=__temp1802v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1802v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1802v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1802v__buf__unsafe_align;
  buf__pos=__temp1802v__pos;
  __temp_errcode=test__temp1775v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__temp1803v__keys__unsafe_ptr,&__temp1803v__keys__unsafe_size,&__temp1803v__keys__unsafe_offset,&__temp1803v__keys__unsafe_align,&__temp1803v__values__unsafe_ptr,&__temp1803v__values__unsafe_size,&__temp1803v__values__unsafe_offset,&__temp1803v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1803v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1803v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1803v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1803v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1803v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1803v__values__unsafe_size;
  map__values__unsafe_offset=__temp1803v__values__unsafe_offset;
  map__values__unsafe_align=__temp1803v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1804v____temp1782v____temp1689v____temp475v__);
  if(__temp1804v____temp1782v____temp1689v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1804v____temp1780v____temp475v__);
  if(__temp1804v____temp1780v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  exists__temp412v(buf__buf__unsafe_ptr,&__temp1801v____temp564v____temp475v__);
  if(__temp1801v____temp564v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  __temp_return:
  *__temp1973v=map__keys__unsafe_ptr;
  *__temp1974v=map__keys__unsafe_size;
  *__temp1975v=map__keys__unsafe_offset;
  *__temp1976v=map__keys__unsafe_align;
  *__temp1977v=map__values__unsafe_ptr;
  *__temp1978v=map__values__unsafe_size;
  *__temp1979v=map__values__unsafe_offset;
  *__temp1980v=map__values__unsafe_align;
  *__temp1981v=buf__buf__unsafe_ptr;
  *__temp1982v=buf__buf__unsafe_size;
  *__temp1983v=buf__buf__unsafe_offset;
  *__temp1984v=buf__buf__unsafe_align;
  *__temp1985v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1303v(const char* r, char** __temp1986v, uint64_t* __temp1987v, uint64_t* __temp1988v, char* __temp1989v) {
  char* __temp1304v__unsafe_ptr=0;
  uint64_t __temp1304v__dat__pos=0;
  uint64_t __temp1304v__dat__length=0;
  char __temp1304v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp637v(r,&__temp1304v__unsafe_ptr,&__temp1304v__dat__pos,&__temp1304v__dat__length,&__temp1304v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1986v=__temp1304v__unsafe_ptr;
  *__temp1987v=__temp1304v__dat__pos;
  *__temp1988v=__temp1304v__dat__length;
  *__temp1989v=__temp1304v__dat__first;
  
  return __temp_errcode;
}

int find__temp1347v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1990v) {
  char* __temp1348v__unsafe_ptr=0;
  uint64_t __temp1348v__dat__pos=0;
  uint64_t __temp1348v__dat__length=0;
  char __temp1348v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1349v__=0;
  uint64_t __temp1350v=0;
  uint64_t __temp1351v=0;
  char* __temp1352v__=0;
  char* __temp1353v__s__unsafe_ptr=0;
  uint64_t __temp1353v__s__dat__pos=0;
  uint64_t __temp1353v__s__dat__length=0;
  char __temp1353v__s__dat__first=0;
  uint64_t __temp1353v__cost=0;
  char* __temp1354v__unsafe_ptr=0;
  uint64_t __temp1354v__dat__pos=0;
  uint64_t __temp1354v__dat__length=0;
  char __temp1354v__dat__first=0;
  int __temp1355v=0;
  int __temp1356v__=0;
  uint64_t __temp1357v__=0;
  uint64_t n=0;
  uint64_t __temp1358v__=0;
  uint64_t pos=0;
  uint64_t __temp1359v__from=0;
  uint64_t __temp1359v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1360v=0;
  uint64_t __temp1361v__=0;
  uint64_t i=0;
  uint64_t __temp1362v__=0;
  uint64_t __temp1363v=0;
  uint64_t idx=0;
  char __temp1364v__=0;
  uint64_t __temp1365v__=0;
  uint64_t __temp1366v=0;
  char __temp1367v__=0;
  char* __temp1368v__=0;
  char* __temp1369v__s__unsafe_ptr=0;
  uint64_t __temp1369v__s__dat__pos=0;
  uint64_t __temp1369v__s__dat__length=0;
  char __temp1369v__s__dat__first=0;
  uint64_t __temp1369v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1370v__unsafe_ptr=0;
  uint64_t __temp1370v__dat__pos=0;
  uint64_t __temp1370v__dat__length=0;
  char __temp1370v__dat__first=0;
  char __temp1371v__=0;
  char* __temp1372v__unsafe_ptr=0;
  uint64_t __temp1372v__dat__pos=0;
  uint64_t __temp1372v__dat__length=0;
  char __temp1372v__dat__first=0;
  char __temp1373v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1301v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1348v__unsafe_ptr,&__temp1348v__dat__pos,&__temp1348v__dat__length,&__temp1348v__dat__first);
  k__unsafe_ptr=__temp1348v__unsafe_ptr;
  k__dat__pos=__temp1348v__dat__pos;
  k__dat__length=__temp1348v__dat__length;
  k__dat__first=__temp1348v__dat__first;
  is_zero__temp1305v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1349v__);
  if(__temp1349v__){
  __temp1350v=0;
  goto __temp_return;
  }
  __temp1351v=0;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1351v,&__temp1352v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1352v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1353v__s__unsafe_ptr,__temp1352v__,8);
  memcpy(&__temp1353v__s__dat__pos,__temp1352v__+8,8);
  memcpy(&__temp1353v__s__dat__length,__temp1352v__+16,8);
  memcpy(&__temp1353v__s__dat__first,__temp1352v__+24,1);
  memcpy(&__temp1353v__cost,__temp1352v__+25,8);
  raw__temp1299v(__temp1353v__s__unsafe_ptr,__temp1353v__s__dat__pos,__temp1353v__s__dat__length,__temp1353v__s__dat__first,__temp1353v__cost,&__temp1354v__unsafe_ptr,&__temp1354v__dat__pos,&__temp1354v__dat__length,&__temp1354v__dat__first);
  not__temp35v(__temp1355v,&__temp1356v__);
  len__temp557v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1357v__);
  n=__temp1357v__;
  __temp_errcode=hash__temp1250v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1358v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1358v__;
  range__temp436v(n,&__temp1359v__from,&__temp1359v__to);
  iter__from=__temp1359v__from;
  iter__to=__temp1359v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1361v__);
  __temp1360v=__temp_complain;
  i=__temp1361v__;
  __temp1360v=__temp1360v==0;
  if(!__temp1360v){
  break;
  }
  add__temp170v(pos,i,&__temp1362v__);
  __temp1363v=__temp1362v__;
  idx=__temp1363v;
  ge__temp319v(idx,n,&__temp1364v__);
  if(__temp1364v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1365v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1365v__;
  }
  __temp1366v=0;
  eq__temp118v(idx,__temp1366v,&__temp1367v__);
  if(__temp1367v__){
  continue;
  }
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1368v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1368v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1369v__s__unsafe_ptr,__temp1368v__,8);
  memcpy(&__temp1369v__s__dat__pos,__temp1368v__+8,8);
  memcpy(&__temp1369v__s__dat__length,__temp1368v__+16,8);
  memcpy(&__temp1369v__s__dat__first,__temp1368v__+24,1);
  memcpy(&__temp1369v__cost,__temp1368v__+25,8);
  entry__s__unsafe_ptr=__temp1369v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1369v__s__dat__pos;
  entry__s__dat__length=__temp1369v__s__dat__length;
  entry__s__dat__first=__temp1369v__s__dat__first;
  entry__cost=__temp1369v__cost;
  raw__temp1299v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1370v__unsafe_ptr,&__temp1370v__dat__pos,&__temp1370v__dat__length,&__temp1370v__dat__first);
  is_zero__temp1305v(__temp1370v__unsafe_ptr,__temp1370v__dat__pos,__temp1370v__dat__length,__temp1370v__dat__first,&__temp1371v__);
  if(__temp1371v__){
  continue;
  }
  raw__temp1299v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1372v__unsafe_ptr,&__temp1372v__dat__pos,&__temp1372v__dat__length,&__temp1372v__dat__first);
  eq__temp787v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1372v__unsafe_ptr,__temp1372v__dat__pos,__temp1372v__dat__length,__temp1372v__dat__first,&__temp1373v__);
  if(__temp1373v__){
  __temp1350v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=32;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1990v=__temp1350v;
  
  return __temp_errcode;
}

int get__temp1698v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1991v) {
  char* __temp1699v__unsafe_ptr=0;
  uint64_t __temp1699v__dat__pos=0;
  uint64_t __temp1699v__dat__length=0;
  char __temp1699v__dat__first=0;
  uint64_t __temp1700v__=0;
  char* __temp1701v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1303v(key,&__temp1699v__unsafe_ptr,&__temp1699v__dat__pos,&__temp1699v__dat__length,&__temp1699v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1347v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1699v__unsafe_ptr,__temp1699v__dat__pos,__temp1699v__dat__length,__temp1699v__dat__first,&__temp1700v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp550v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1700v__,&__temp1701v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1991v=__temp1701v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1805v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __temp1806v__=0;
  char* __temp1807v__unsafe_ptr=0;
  uint64_t __temp1807v__dat__pos=0;
  uint64_t __temp1807v__dat__length=0;
  char __temp1807v__dat__first=0;
  char* __temp1809v__=0;
  char* __temp1810v__unsafe_ptr=0;
  uint64_t __temp1810v__dat__pos=0;
  uint64_t __temp1810v__dat__length=0;
  char __temp1810v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1698v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1783v,&__temp1806v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1806v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1807v__unsafe_ptr,__temp1806v__,8);
  memcpy(&__temp1807v__dat__pos,__temp1806v__+8,8);
  memcpy(&__temp1807v__dat__length,__temp1806v__+16,8);
  memcpy(&__temp1807v__dat__first,__temp1806v__+24,1);
  print__temp744v(__temp1807v__unsafe_ptr,__temp1807v__dat__pos,__temp1807v__dat__length,__temp1807v__dat__first);
  __temp_errcode=get__temp1698v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1788v,&__temp1809v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1809v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1810v__unsafe_ptr,__temp1809v__,8);
  memcpy(&__temp1810v__dat__pos,__temp1809v__+8,8);
  memcpy(&__temp1810v__dat__length,__temp1809v__+16,8);
  memcpy(&__temp1810v__dat__first,__temp1809v__+24,1);
  print__temp744v(__temp1810v__unsafe_ptr,__temp1810v__dat__pos,__temp1810v__dat__length,__temp1810v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1812v() {
  char* __temp1813v__map__keys__unsafe_ptr=0;
  uint64_t __temp1813v__map__keys__unsafe_size=0;
  uint16_t __temp1813v__map__keys__unsafe_offset=0;
  uint16_t __temp1813v__map__keys__unsafe_align=0;
  char* __temp1813v__map__values__unsafe_ptr=0;
  uint64_t __temp1813v__map__values__unsafe_size=0;
  uint16_t __temp1813v__map__values__unsafe_offset=0;
  uint16_t __temp1813v__map__values__unsafe_align=0;
  char* __temp1813v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1813v__buf__buf__unsafe_size=0;
  uint16_t __temp1813v__buf__buf__unsafe_offset=0;
  uint16_t __temp1813v__buf__buf__unsafe_align=0;
  uint64_t __temp1813v__buf__pos=0;
  char __temp1814v____temp1801v____temp564v____temp475v__=0;
  char __temp1814v____temp1804v____temp1780v____temp475v__=0;
  char __temp1814v____temp1804v____temp1782v____temp1689v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1797v(&__temp1813v__map__keys__unsafe_ptr,&__temp1813v__map__keys__unsafe_size,&__temp1813v__map__keys__unsafe_offset,&__temp1813v__map__keys__unsafe_align,&__temp1813v__map__values__unsafe_ptr,&__temp1813v__map__values__unsafe_size,&__temp1813v__map__values__unsafe_offset,&__temp1813v__map__values__unsafe_align,&__temp1813v__buf__buf__unsafe_ptr,&__temp1813v__buf__buf__unsafe_size,&__temp1813v__buf__buf__unsafe_offset,&__temp1813v__buf__buf__unsafe_align,&__temp1813v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1805v(__temp1813v__map__keys__unsafe_ptr,__temp1813v__map__keys__unsafe_size,__temp1813v__map__keys__unsafe_offset,__temp1813v__map__keys__unsafe_align,__temp1813v__map__values__unsafe_ptr,__temp1813v__map__values__unsafe_size,__temp1813v__map__values__unsafe_offset,__temp1813v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1813v__map__keys__unsafe_ptr,&__temp1814v____temp1804v____temp1782v____temp1689v____temp475v__);
  if(__temp1814v____temp1804v____temp1782v____temp1689v____temp475v__){
  __temp1813v__map__keys__unsafe_size=0;
  __temp1813v__map__keys__unsafe_size=__temp1813v__map__keys__unsafe_size;
  __temp1813v__map__keys__unsafe_ptr=__temp1813v__map__keys__unsafe_ptr;
  free__temp466v(&__temp1813v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1813v__map__values__unsafe_ptr,&__temp1814v____temp1804v____temp1780v____temp475v__);
  if(__temp1814v____temp1804v____temp1780v____temp475v__){
  __temp1813v__map__values__unsafe_size=0;
  __temp1813v__map__values__unsafe_size=__temp1813v__map__values__unsafe_size;
  __temp1813v__map__values__unsafe_ptr=__temp1813v__map__values__unsafe_ptr;
  free__temp466v(&__temp1813v__map__values__unsafe_ptr);
  }
  exists__temp412v(__temp1813v__buf__buf__unsafe_ptr,&__temp1814v____temp1801v____temp564v____temp475v__);
  if(__temp1814v____temp1801v____temp564v____temp475v__){
  __temp1813v__buf__buf__unsafe_size=0;
  __temp1813v__buf__buf__unsafe_size=__temp1813v__buf__buf__unsafe_size;
  __temp1813v__buf__buf__unsafe_ptr=__temp1813v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1813v__buf__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1812v();return 0;}